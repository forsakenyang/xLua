
#include <stdio.h>
#include "base2.h"
#include "parse.h"
#include "ucci.h"
#include "pregen.h"
#include "position.h"
#include "hash.h"
#include "search.h"
#include "base.h"

#include "onyuan.h"

OnyuanStruct Onyuan;

inline void PrintLn(const char *sz) {
  printf("%s\n", sz);
  fflush(stdout);
}

void run(const char* szLineStr){
	int i;
	bool bPonderTime;

    char *lp;
    strcpy(lp, szLineStr);

	UcciCommStruct UcciComm;
	PositionStruct posProbe;

	switch (Translate(UcciComm, lp)) {
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
		for (i = 0; i < UcciComm.nBanMoveNum; i ++) {
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
			} else {
			LocatePath(Search.szBookFile, UcciComm.szOption);
			}
			break;
		case UCCI_OPTION_HASHSIZE:
			DelHash();
			i = 19; // 小于1，分配0.5M置换表
			while (UcciComm.nSpin > 0) {
			UcciComm.nSpin /= 2;
			i ++;
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
			} else {
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
}

bool stop(const char* szLineStr){
	// char *lp;
	// UcciCommStruct UcciComm;
	// PositionStruct posProbe;
	// // 如果不是批处理模式，那么先调用UCCI解释程序，再判断是否中止
	// switch (Translate(UcciComm, lp)) {
	// case UCCI_COMM_ISREADY:
	// // "isready"指令实际上没有意义
	// printf("readyok\n");
	// fflush(stdout);
	// return false;
	// case UCCI_COMM_PONDERHIT:
	// // "ponderhit"指令启动计时功能，如果"SearchMain()"例程认为已经搜索了足够的时间， 那么发出中止信号
	// if (Search2.bPonderStop) {
	// 	Search2.bStop = true;
	// 	return true;
	// } else {
	// 	Search.bPonder = false;
	// 	return false;
	// }
	// case UCCI_COMM_PONDERHIT_DRAW:
	// // "ponderhit draw"指令启动计时功能，并设置提和标志
	// Search.bDraw = true;
	// if (Search2.bPonderStop) {
	// 	Search2.bStop = true;
	// 	return true;
	// } else {
	// 	Search.bPonder = false;
	// 	return false;
	// }
	// case UCCI_COMM_STOP:
	// // "stop"指令发送中止信号
	// Search2.bStop = true;
	// return true;
	// case UCCI_COMM_PROBE:
	// // "probe"指令输出Hash表信息
	// BuildPos(posProbe, UcciComm);
	// PopHash(posProbe);
	// return false;
	// case UCCI_COMM_QUIT:
	// // "quit"指令发送退出信号
	// Search.bQuit = Search2.bStop = true;
	// return true;
	// default:
	// return false;
	// }
	return false;
}

void OnyuanStruct::WriteLine(const char *format, ...) {
	va_list ap;
	__crt_va_start(ap, format);
	vsprintf_s(szLineStr, format, ap);
	__crt_va_end(ap);

	int nStrLen;
	nStrLen = strlen(szLineStr);

	if ((nStrLen + nReadEnd) >= LINE_INPUT_MAX_CHAR) {
		nReadEnd = 0;
	}

	memcpy(szBuffer + nReadEnd, szLineStr, nStrLen);
	nReadEnd += nStrLen;
	szBuffer[nReadEnd] = '\0';
}

bool OnyuanStruct::ReadLine(char *szLineStr) {
	char* lpFeedEnd;
	int nFeedEnd;
	lpFeedEnd = (char*)memchr(szBuffer, '\n', nReadEnd);
	if (lpFeedEnd == NULL) {
		return false;
	}
	else {
		nFeedEnd = lpFeedEnd - szBuffer;
		memcpy(szLineStr, szBuffer, nFeedEnd);
		szLineStr[nFeedEnd] = '\0';
		nFeedEnd++;
		nReadEnd -= nFeedEnd;
		memcpy(szBuffer, szBuffer + nFeedEnd, nReadEnd);
		lpFeedEnd = (char*)strchr(szLineStr, '\r');
		if (lpFeedEnd != NULL) {
			*lpFeedEnd = '\0';
		}
		return true;
	}
}