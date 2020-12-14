//#include "StdAfx.h"

//预编译头，Cocos和公共框架相关的头文件都在该文件中包含，不需要再额外包含
//#include"stdgame.h"
#include "AI.h"   
#include <memory.h>

typedef unsigned long       DWORD;
typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef unsigned long DWORD_PTR;

#define AREA_UNKNOW					0									//未知区域
#define AREA_CHESS					1									//棋子区域
#define AREA_BURROW					2									//洞穴区域

#define CCMAKEWORD(a, b)      ((WORD)(((BYTE)(((DWORD_PTR)(a)) & 0xff)) | ((WORD)((BYTE)(((DWORD_PTR)(b)) & 0xff))) << 8))
#define CCMAKELONG(a, b)      ((LONG)(((WORD)(((DWORD_PTR)(a)) & 0xffff)) | ((DWORD)((WORD)(((DWORD_PTR)(b)) & 0xffff))) << 16))
#define CCLOWORD(l)           ((WORD)(((DWORD_PTR)(l)) & 0xffff))
#define CCHIWORD(l)           ((WORD)((((DWORD_PTR)(l)) >> 16) & 0xffff))
#define CCLOBYTE(w)           ((BYTE)(((DWORD_PTR)(w)) & 0xff))
#define CCHIBYTE(w)           ((BYTE)((((DWORD_PTR)(w)) >> 8) & 0xff))

//public:
unsigned char g_chessNumsOfLogic[19][19];
int g_roadNums;
int g_roadMui;

//private:
SGFTree g_sgftree;
Gameinfo g_gameinfo;
StepList g_stepList;
int g_passes;

void SetLevel(int nlevel)
{
	level = nlevel;
}

void SetBoardSize(int nSize)
{
	board_size = nSize;
	g_roadNums = nSize;
	g_roadMui = g_roadNums * g_roadNums;
	memset(g_chessNumsOfLogic, 0, sizeof(g_chessNumsOfLogic));
}

void PlayMove(int i, int j, int color)
{
	play_move(POS(i, j), color);
}

void GenMove(int *i, int *j, int color)
{
	genmove(i, j, color);
}

void Entrance()
{
	int mandated_color = EMPTY_T;
	int replay_color = EMPTY_T;

	char *untilstring = NULL;
	char *scoringmode = NULL;
	char *outfile = NULL;
	char *outflags = NULL;
	char *gtpfile = NULL;
	char *gtp_dump_commands_file = NULL;

	char *printsgffile = NULL;

	//  char decide_this[8];
	char *decide_that = NULL;
	char debuginfluence_move[4] = "\0";

	int benchmark = 0;  /* benchmarking mode (-b) */
  //  FILE *gtp_input_FILE;
	FILE *gtp_dump_commands_FILE = NULL;
	//  FILE *output_check;
	int orientation = 0;

	float memory = (float)DEFAULT_MEMORY; /* Megabytes used for hash table. */

	/* If seed is zero, GNU Go will play a different game each time. If
	 * it is set using -r, GNU Go will play the same game each time.
	 * (Change seed to get a different game).
	 */
	int seed = 0;
	int seed_specified = 0;

	komi = 0.0;
	level;
	//min_level = 0;
	//max_level = 10;

	mandated_depth = -1;
	mandated_backfill_depth = -1;
	mandated_backfill2_depth = -1;
	mandated_break_chain_depth = -1;
	mandated_superstring_depth = -1;
	mandated_fourlib_depth = -1;
	mandated_ko_depth = -1;
	mandated_branch_depth = -1;
	mandated_owl_distrust_depth = -1;
	mandated_owl_branch_depth = -1;
	mandated_owl_reading_depth = -1;
	mandated_owl_node_limit = -1;
	mandated_aa_depth = -1;

	debug = 0;
	fusekidb = 1;
	disable_fuseki = 0;
	josekidb = 1;
	if (CHINESE_RULES)
		chinese_rules = 1;
	else
		chinese_rules = 0;
	if (OWL_THREATS)
		owl_threats = 1;
	else
		owl_threats = 0;
	experimental_connections = EXPERIMENTAL_CONNECTIONS;
	//cosmic_gnugo = COSMIC_GNUGO;
	//large_scale = LARGE_SCALE;
	resign_allowed = RESIGNATION_ALLOWED;

	allow_suicide = 0;
	capture_all_dead = 0;
	play_out_aftermath = 0;
	limit_search = 0;

	/* Default parameters for clock and auto level systems. */
	clock_init(3600, 0, 0);      /* One hour sudden death. */

	sgftree_clear(&g_sgftree);
	gameinfo_clear(&g_gameinfo, board_size, komi);


	/* Start random number seed. */
	if (!seed_specified)
		seed = time(0);

	/* Initialize the GNU Go engine. */
	init_gnugo(memory, seed);

	/* Initialize and empty sgf tree if there was no infile. */
	sgftreeCreateHeaderNode(&g_sgftree, board_size, komi);

	/* Set the game_record to be identical to the loaded one or the
	 * newly created empty sgf tree.
	 */
	g_gameinfo.game_record = g_sgftree;

	JoinUp();

}

void JoinUp()
{
	int sz;
	int passes = 0;  /* two passes and its over */
	char line[80];
	char *line_ptr = line;
	int state = 1;

	sgftree = g_sgftree;

	setvbuf(stdout, (char *)NULL, _IONBF, 0); /* No buffering. */


	if (sgfGetIntProperty(sgftree.root, "SZ", &sz))
		gnugo_clear_board(sz);
	if (g_gameinfo.handicap == 0)
		g_gameinfo.to_move = BLACK;
	else {
		g_gameinfo.handicap = gnugo_placehand(g_gameinfo.handicap);
		g_gameinfo.to_move = WHITE;
	}
	sgf_initialized = 0;
}

void Move(int nColour, int nX, int nY, TiziList& tiziList)
{
	Step step;
	step.color = nColour;
	step.x = nX;
	step.y = nY;

	if (nX != -1 && nY != -1)
	{
		g_chessNumsOfLogic[nX][nY] = nColour;

		unsigned short wDeadChess[361];
		int wDeadChessCount = TakeOutChess(nX, nY, wDeadChess);
		for (int wIndex = 0; wIndex < wDeadChessCount; wIndex++)
		{
			Tizi tizi;
			tizi.color = 1 + (2 - nColour);
			tizi.x = CCLOBYTE(wDeadChess[wIndex]);
			tizi.y = CCHIBYTE(wDeadChess[wIndex]);
			tiziList.push_back(tizi);

			g_chessNumsOfLogic[tizi.x][tizi.y] = eNone;
		}

		step.tiziList = tiziList;
	}

	// 记步
	g_stepList.push_back(step);
}

void DoMove(int nColour, int nX, int nY, TiziList& tiziList)
{
	g_gameinfo.to_move = nColour;
	do_move(&g_gameinfo, &g_passes, nY, nX);
	Move(nColour, nX, nY, tiziList);
}

void ComputerMove(int nColour, int *nX, int *nY, TiziList& tiziList)
{
	g_gameinfo.to_move = nColour;
	computer_move(&g_gameinfo, &g_passes, nY, nX);
	Move(nColour, *nX, *nY, tiziList);
}

void ClearMsg()
{
	sgffile_output(&sgftree);
	g_passes = 0;

	/* Play a different game next time. */
	update_random_seed();

	/* Free the sgf tree and prepare for a new game. */
	sgfFreeNode(sgftree.root);
	sgftree_clear(&sgftree);
	sgftreeCreateHeaderNode(&sgftree, board_size, komi);
	sgf_initialized = 0;

	gameinfo_clear(&g_gameinfo, board_size, komi);
}

bool UndoChess()
{
	bool bCanUndo = true;
	if (g_stepList.size() >= 2 && gnugo_undo_move(2))
	{
		sgftreeAddComment(&sgftree, "undone");
		sgftreeBack(&sgftree);
		g_gameinfo.to_move = OTHER_COLOR(g_gameinfo.to_move);

		for (int i = 0; i < 2; ++i)
		{
			Step& step = g_stepList.back();
			if (step.x == -1 || step.y == -1)
			{
				g_stepList.pop_back();
				continue;
			}

			// 还原落子
			g_chessNumsOfLogic[step.x][step.y] = eNone;

			// 还原提子
			for (int j = 0; j < step.tiziList.size(); ++j)
			{
				Tizi& tizi = step.tiziList[j];
				g_chessNumsOfLogic[tizi.x][tizi.y] = tizi.color;
			}

			g_stepList.pop_back();
		}

	}
	else
	{
		bCanUndo = false;
	}
	return bCanUndo;
}

bool UndoChessEx(int stepNum)
{
	bool bCanUndo = true;
	if (g_stepList.size() >= stepNum && gnugo_undo_move(stepNum))
	{
		sgftreeAddComment(&sgftree, "undone");
		sgftreeBack(&sgftree);

		if(stepNum % 2 == 0)
			g_gameinfo.to_move = OTHER_COLOR(g_gameinfo.to_move);

		for (int i = 0; i < stepNum; ++i)
		{
			Step& step = g_stepList.back();
			if (step.x == -1 || step.y == -1)
				continue;

			// 还原落子
			g_chessNumsOfLogic[step.x][step.y] = eNone;

			// 还原提子
			for (int j = 0; j < step.tiziList.size(); ++j)
			{
				Tizi& tizi = step.tiziList[j];
				g_chessNumsOfLogic[tizi.x][tizi.y] = tizi.color;
			}

			g_stepList.pop_back();
		}

	}
	else
	{
		bCanUndo = false;
	}
	return bCanUndo;
}

unsigned short TakeOutChess(unsigned char cbXPos, unsigned char cbYPos, unsigned short wDeadChess[361])
{
	//变量定义
	int wDeadChessCount = 0;
	tagAreaResult AreaResult;
	memset(&AreaResult, 0, sizeof(AreaResult));

	//吃子分析
	bool bAnalyse[4] = { true, true, true, true };
	const int nExcursion[4][2] = { { 1, 0 },{ 0, 1 },{ -1, 0 },{ 0, -1 } };
	for (int i = 0; i < 4; i++)
	{
		//分析排除
		if (bAnalyse[i] == false)	continue;

		//变量定义
		int cbXStationPos = cbXPos + nExcursion[i][0];
		int cbYStationPos = cbYPos + nExcursion[i][1];

		//棋子分析
		if ((cbXStationPos >= g_roadNums) || (cbYStationPos >= g_roadNums)) continue;
		if ((cbXStationPos < 0) || (cbYStationPos < 0)) continue;
		if ((g_chessNumsOfLogic[cbXStationPos][cbYStationPos] == eNone) ||
			(g_chessNumsOfLogic[cbXStationPos][cbYStationPos] == g_chessNumsOfLogic[cbXPos][cbYPos])) continue;

		//气穴分析
		memset(&AreaResult, 0, sizeof(AreaResult));
		GetChessArea(cbXStationPos, cbYStationPos, AreaResult);

		//同域判断
		for (int j = (i + 1); j < 4; j++)
		{
			if (bAnalyse[j] == true)
			{
				int cbXStationPos = cbXPos + nExcursion[j][0];
				int cbYStationPos = cbYPos + nExcursion[j][1];
				if ((cbXStationPos >= g_roadNums) || (cbYStationPos >= g_roadNums)) bAnalyse[j] = false;
				else if (AreaResult.cbAreaResult[cbXStationPos][cbYStationPos] == AREA_CHESS) bAnalyse[j] = false;
			}
		}

		//合并死棋
		if (AreaResult.wBurrowCount == 0)
		{

			assert((wDeadChessCount + AreaResult.wChessCount) <= g_roadMui);
			memcpy(wDeadChess + wDeadChessCount, AreaResult.wChessList, AreaResult.wChessCount * sizeof(AreaResult.wChessList[0]));
			// 			for (int i = 0; i < 361;i++)
			// 			{
			// 				wDeadChess2[i] = AreaResult.wChessList[i];
			// 			}
			wDeadChessCount += AreaResult.wChessCount;
		}
	}

	return wDeadChessCount;
}

void GetChessArea(unsigned char cbXPos, unsigned char cbYPos, tagAreaResult & AreaResult)
{
	//设置变量
	AreaResult.wChessCount = 1;
	AreaResult.wBurrowCount = 0;
	AreaResult.wChessList[0] = CCMAKEWORD(cbXPos, cbYPos);
	AreaResult.cbAreaResult[cbXPos][cbYPos] = AREA_CHESS;

	//区域统计
	for (int wIndex = 0; wIndex < AreaResult.wChessCount; wIndex++)
	{
		int cbXChessPos = CCLOBYTE(AreaResult.wChessList[wIndex]);
		int cbYChessPos = CCHIBYTE(AreaResult.wChessList[wIndex]);
		GetCrossArea(cbXChessPos, cbYChessPos, AreaResult);
	}

	return;
}

void GetCrossArea(unsigned char cbXPos, unsigned char cbYPos, tagAreaResult & AreaResult)
{

	unsigned char cbChessColor = g_chessNumsOfLogic[cbXPos][cbYPos];
	unsigned char cbOtherChessColor = (cbChessColor == eBlack) ? eWhite : eBlack;

	//区域分析
	const int nExcursion[4][2] = { { 1, 0 },{ 0, 1 },{ -1, 0 },{ 0, -1 } };
	for (int i = 0; i < 4; i++)
	{
		//变量定义
		unsigned char cbXStationPos = cbXPos + nExcursion[i][0];
		unsigned char cbYStationPos = cbYPos + nExcursion[i][1];

		//区域分析
		for (; ((cbXStationPos < g_roadNums && cbXStationPos >= 0) && (cbYStationPos < g_roadNums && cbYStationPos >= 0)); cbXStationPos += nExcursion[i][0], cbYStationPos += nExcursion[i][1])
		{
			//区域过滤
			if (g_chessNumsOfLogic[cbXStationPos][cbYStationPos] == cbOtherChessColor) break;
			if (AreaResult.cbAreaResult[cbXStationPos][cbYStationPos] != AREA_UNKNOW) break;

			//自己棋子
			if (g_chessNumsOfLogic[cbXStationPos][cbYStationPos] == cbChessColor)
			{
				AreaResult.cbAreaResult[cbXStationPos][cbYStationPos] = AREA_CHESS;
				AreaResult.wChessList[AreaResult.wChessCount++] = CCMAKEWORD(cbXStationPos, cbYStationPos);
			}
			else //洞穴区域
			{
				AreaResult.wBurrowCount++;
				AreaResult.cbAreaResult[cbXStationPos][cbYStationPos] = AREA_BURROW;
				break;
			}
		}
	}
}