#pragma  once

//#include "patterns.h"
//#include "../GameLogic/GameLogic.h"
#include "assert.h"
#include <vector>
#include <map>
#include <list>

extern "C"
{
#include "board.h"
#include "gnugo.h"
#include "patterns.h"
#include "sgftree.h"
#include "gmp.h"
#include "interface.h"
#include "hash.h"

	extern int do_move(Gameinfo *gameinfo, int *passes, int nX,int nY);

	extern int computer_move(Gameinfo *gameinfo, int *passes,int *nX,int *nY);

	extern void update_random_seed(void);

	extern int sgf_initialized;

	extern  SGFTree sgftree;

};

enum eColour
{
	eNone,
	eWhite,
	eBlack,
	eUnDefine = 20
};

//区域结果
struct tagAreaResult
{
	unsigned short	wChessCount;						//棋子数目
	unsigned short wBurrowCount;						//洞穴数目
	unsigned short	wChessList[361];					//区域棋子
	unsigned char	cbAreaResult[19][19];				//区域信息
};

struct Tizi
{
	int color;
	int x;
	int y;
};

typedef std::vector<Tizi> TiziList;

struct Step 
{
	int color;
	int x;
	int y;

	TiziList tiziList;
};

typedef std::list<Step> StepList;


//public:
void SetLevel(int nlevel);
void SetBoardSize(int nSize);
void Entrance();
void DoMove(int nColour, int nX, int nY, TiziList& tiziList);
void ComputerMove(int nColour, int *nX, int *nY, TiziList& tiziList);
bool UndoChess();
bool UndoChessEx(int stepNum);

//private:
void PlayMove(int i, int j, int color);
void GenMove(int *i, int *j, int color);
void JoinUp();
void ClearMsg();
void Move(int nColour, int nX, int nY, TiziList& tiziList);
unsigned short TakeOutChess(unsigned char cbXPos, unsigned char cbYPos, unsigned short wDeadChess[361]);
void GetChessArea(unsigned char cbXPos, unsigned char cbYPos, tagAreaResult & AreaResult);
void GetCrossArea(unsigned char cbXPos, unsigned char cbYPos, tagAreaResult & AreaResult);

//public:
extern unsigned char g_chessNumsOfLogic[19][19];
extern int g_roadNums;
extern int g_roadMui;

////private:
//SGFTree g_sgftree;
//Gameinfo g_gameinfo;
//StepList g_stepList;
//int g_passes;



