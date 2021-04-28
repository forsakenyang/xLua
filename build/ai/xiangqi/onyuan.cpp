
#include <stdio.h>
#include "base2.h"
#include "parse.h"
#include "ucci.h"
#include "pregen.h"
#include "position.h"
#include "hash.h"
#include "search.h"
#include "base.h"
#include <stdarg.h>

#include <thread>
#include <mutex>
#include <atomic>
#include "onyuan.h"

OnyuanStruct Onyuan;

std::mutex mutexLine;   //互斥量
std::mutex mutexCommand;//互斥量
std::thread onyuanThread;
std::atomic_bool is_running;

inline void PrintLn(const char *sz) {
  printf("%s\n", sz);
  fflush(stdout);
}

static void Run() {
	int i;
	bool bPonderTime;
	bPonderTime = false;

	UcciCommStruct UcciComm;
	PositionStruct posProbe;

	switch (IdleLine(UcciComm, Search.bDebug)) {
		case UCCI_COMM_ISREADY:
			PrintLn("readyok");
			break;
		case UCCI_COMM_STOP:
			PrintLn("nobestmove");
			break;
		case UCCI_COMM_POSITION:
			BuildPos(Search.pos, UcciComm);
			Search.pos.nDistance = 0;
			Search.pos.PreEvaluate();
			Search.nBanMoves = 0;
			break;
		case UCCI_COMM_BANMOVES:
			Search.nBanMoves = UcciComm.nBanMoveNum;
			for (i = 0; i < UcciComm.nBanMoveNum; i++) {
				Search.wmvBanList[i] = COORD_MOVE(UcciComm.lpdwBanMovesCoord[i]);
			}
			break;
		case UCCI_COMM_SETOPTION:
			switch (UcciComm.Option) {
			case UCCI_OPTION_PROMOTION:
				PreEval.bPromotion = UcciComm.bCheck;
				break;
			case UCCI_OPTION_BATCH:
				Search.bBatch = UcciComm.bCheck;
				break;
			case UCCI_OPTION_DEBUG:
				Search.bDebug = UcciComm.bCheck;
				break;
			case UCCI_OPTION_PONDER:
				bPonderTime = UcciComm.bCheck;
				break;
			case UCCI_OPTION_USEHASH:
				Search.bUseHash = UcciComm.bCheck;
				break;
			case UCCI_OPTION_USEBOOK:
				Search.bUseBook = UcciComm.bCheck;
				break;
			case UCCI_OPTION_BOOKFILES:
				if (AbsolutePath(UcciComm.szOption)) {
					strcpy(Search.szBookFile, UcciComm.szOption);
				}
				else {
					LocatePath(Search.szBookFile, UcciComm.szOption);
				}
				break;
			case UCCI_OPTION_HASHSIZE:
				DelHash();
				i = 19; // 小于1，分配0.5M置换表
				while (UcciComm.nSpin > 0) {
					UcciComm.nSpin /= 2;
					i++;
				}
				NewHash(MAX(i, 24)); // 最小的置换表设为16M
				break;
			case UCCI_OPTION_IDLE:
				switch (UcciComm.Grade) {
				case UCCI_GRADE_NONE:
					Search.bIdle = false;
					Search.nCountMask = INTERRUPT_COUNT - 1;
					break;
				case UCCI_GRADE_SMALL:
					Search.bIdle = true;
					Search.nCountMask = INTERRUPT_COUNT / 4 - 1;
					break;
				case UCCI_GRADE_MEDIUM:
					Search.bIdle = true;
					Search.nCountMask = INTERRUPT_COUNT / 16 - 1;
					break;
				case UCCI_GRADE_LARGE:
					Search.bIdle = true;
					Search.nCountMask = INTERRUPT_COUNT / 64 - 1;
					break;
				default:
					break;
				}
				break;
			case UCCI_OPTION_PRUNING:
				Search.bNullMove = (UcciComm.Grade != UCCI_GRADE_NONE);
				break;
			case UCCI_OPTION_KNOWLEDGE:
				Search.bKnowledge = (UcciComm.Grade != UCCI_GRADE_NONE);
				break;
			case UCCI_OPTION_RANDOMNESS:
				switch (UcciComm.Grade) {
				case UCCI_GRADE_NONE:
					Search.nRandomMask = 0;
					break;
				case UCCI_GRADE_TINY:
					Search.nRandomMask = 1;
					break;
				case UCCI_GRADE_SMALL:
					Search.nRandomMask = 3;
					break;
				case UCCI_GRADE_MEDIUM:
					Search.nRandomMask = 7;
					break;
				case UCCI_GRADE_LARGE:
					Search.nRandomMask = 15;
					break;
				case UCCI_GRADE_HUGE:
					Search.nRandomMask = 31;
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}
			break;
		case UCCI_COMM_GO:
			Search.bPonder = UcciComm.bPonder;
			Search.bDraw = UcciComm.bDraw;
			switch (UcciComm.Go) {
			case UCCI_GO_DEPTH:
				Search.nGoMode = GO_MODE_INFINITY;
				Search.nNodes = 0;
				SearchMain(UcciComm.nDepth);
				break;
			case UCCI_GO_NODES:
				Search.nGoMode = GO_MODE_NODES;
				Search.nNodes = UcciComm.nNodes;
				SearchMain(UCCI_MAX_DEPTH);
				break;
			case UCCI_GO_TIME_MOVESTOGO:
			case UCCI_GO_TIME_INCREMENT:
				Search.nGoMode = GO_MODE_TIMER;
				if (UcciComm.Go == UCCI_GO_TIME_MOVESTOGO) {
					// 对于时段制，把剩余时间平均分配到每一步，作为适当时限。
					// 剩余步数从1到5，最大时限依次是剩余时间的100%、90%、80%、70%和60%，5以上都是50%
					Search.nProperTimer = UcciComm.nTime / UcciComm.nMovesToGo;
					Search.nMaxTimer = UcciComm.nTime * MAX(5, 11 - UcciComm.nMovesToGo) / 10;
				}
				else {
					// 对于加时制，假设棋局会在20回合内结束，算出平均每一步的适当时限，最大时限是剩余时间的一半
					Search.nProperTimer = UcciComm.nTime / 20 + UcciComm.nIncrement;
					Search.nMaxTimer = UcciComm.nTime / 2;
				}
				// 如果是后台思考的时间分配策略，那么适当时限设为原来的1.25倍
				Search.nProperTimer += (bPonderTime ? Search.nProperTimer / 4 : 0);
				Search.nMaxTimer = MIN(Search.nMaxTimer, Search.nProperTimer * 10);
				SearchMain(UCCI_MAX_DEPTH);
				break;
			default:
				break;
			}
			break;
		case UCCI_COMM_PROBE:
			BuildPos(posProbe, UcciComm);
			if (!PopHash(posProbe)) {
				PopLeaf(posProbe);
			}
			break;
		case UCCI_COMM_QUIT:
			Search.bQuit = true;
			break;
		default:
			break;
	}
	
	is_running = false;
	return;
}

void OnyuanStruct::StartEngine() {
	if (is_running) {
		return;
	}

	nCommandReadEnd = 0;
	szCommBuffer[0] = '\0';

	LocatePath(Search.szBookFile, "BOOK.DAT");
	PreGenInit();
	DelHash();
	NewHash(24); // 24=16MB, 25=32MB, 26=64MB, ...
	Search.pos.FromFen(cszStartFen);
	Search.pos.nDistance = 0;
	Search.pos.PreEvaluate();
	Search.nBanMoves = 0;
	Search.bQuit = Search.bBatch = Search.bDebug = false;
	Search.bUseHash = Search.bUseBook = Search.bNullMove = Search.bKnowledge = true;
	Search.bIdle = false;
	Search.nCountMask = INTERRUPT_COUNT - 1;
	Search.nRandomMask = 0;
	Search.rc4Random.InitRand();
	PrintLn("ucciok");
}

void OnyuanStruct::StopEngine() {
	if (!is_running)
	{
		return;
	}else{
		is_running = false;
		CommandIn("quit");
		onyuanThread.join();
	}
	DelHash();
	PrintLn("bye");
}

void OnyuanStruct::RunEngine(const char *szLineStr) {
	CommandIn(szLineStr);
	if (!is_running)
	{
		is_running = true;
		onyuanThread = std::thread(Run);
	}
}


void OnyuanStruct::CommandIn(const char* szCommandStr) {
	mutexCommand.lock();
	int nStrLen;
	nStrLen = strlen(szCommandStr);

	if ((nStrLen + nCommandReadEnd) >= LINE_INPUT_MAX_CHAR) {
		nCommandReadEnd = 0;
	}

	memcpy(szCommBuffer + nCommandReadEnd, szCommandStr, nStrLen);
	nCommandReadEnd += nStrLen;
	szCommBuffer[nCommandReadEnd] = '\n';
	nCommandReadEnd++;
	szCommBuffer[nCommandReadEnd] = '\0';
	mutexCommand.unlock();
}

bool OnyuanStruct::CommandOut(char* szLineStr) {
	mutexCommand.lock();
	char* lpFeedEnd;
	int nFeedEnd;
	lpFeedEnd = (char*)memchr(szCommBuffer, '\n', nCommandReadEnd);
	if (lpFeedEnd == NULL) {
		mutexCommand.unlock();
		return false;
	}
	else {
		nFeedEnd = lpFeedEnd - szCommBuffer;
		memcpy(szLineStr, szCommBuffer, nFeedEnd);
		szLineStr[nFeedEnd] = '\0';
		nFeedEnd++;
		nCommandReadEnd -= nFeedEnd;
		memcpy(szCommBuffer, szCommBuffer + nFeedEnd, nCommandReadEnd);
		lpFeedEnd = (char*)strchr(szLineStr, '\r');
		if (lpFeedEnd != NULL) {
			*lpFeedEnd = '\0';
		}
		mutexCommand.unlock();
		return true;
	}
	
}
