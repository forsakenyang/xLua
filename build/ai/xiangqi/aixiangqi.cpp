#include <limits>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <thread>
#include <mutex>
#include <atomic>

#include "lua.hpp"

#include "i64lib.h"

#include "search.h"
#include "hash.h"
#include "onyuan.h"


static int PosSetSdPlayer(lua_State* L)
{
	int n = luaL_checkinteger(L, 1);
	Search.pos.sdPlayer = n;

	return 0;
}

static int PosGetSdPlayer(lua_State* L)
{
	lua_pushinteger(L, Search.pos.sdPlayer);

	return 1;
}

// 撤消一个着法
static int PosUndoMakeMove(lua_State* L)
{
	bool bRemoveInstance = (luaL_checkinteger(L, 1) != 0);
	Search.pos.UndoMakeMove();

	return 0;
}

// 执行一个着法
static int PosMakeMove(lua_State* L)
{
	int mv = luaL_checkinteger(L, 1);
	bool bAddInstance = (luaL_checkinteger(L, 2) != 0);
	lua_pushboolean(L, Search.pos.MakeMove(mv) ? 1 : 0);
	return 1;
}
 
// 得到着法的起点
static int PosSRC(lua_State* L)
{
	int mv = luaL_checkinteger(L, 1);
	lua_pushinteger(L, mv & 255);
	return 1;
}

// 得到着法的终点
static int PosDST(lua_State* L)
{ 
	int mv = luaL_checkinteger(L, 1);
	lua_pushinteger(L, mv >> 8);
	return 1;
}

// 由起点和终点得到着法
static int PosMOVE(lua_State* L)
{
	int sqSrc = luaL_checkinteger(L, 1);
	int sqDst = luaL_checkinteger(L, 2);
	lua_pushinteger(L, sqSrc + (sqDst << 8));
	return 1;
}

// 重复局面检测
static int PosRepStatus(lua_State* L)
{
	int nRecur = luaL_checkinteger(L, 1);
	lua_pushinteger(L, Search.pos.RepStatus(nRecur));
	return 1;
}

// 重复局面的分值
static int PosRepValue(lua_State* L)
{
	int vlRep = luaL_checkinteger(L, 1);
	lua_pushinteger(L, Search.pos.RepValue(vlRep));
	return 1;
}

// 局面评分
static int PosEvaluate(lua_State* L)
{
	int vlAlpha = luaL_checkinteger(L, 1);
	int vlBeta = luaL_checkinteger(L, 1);
	lua_pushinteger(L, Search.pos.Evaluate(vlAlpha, vlBeta));
	return 1;
}

// 子力平衡，包括先行权因素
static int PosMaterial(lua_State* L)
{
	lua_pushinteger(L, Search.pos.Material());
	return 1;
}

// 局面评分
static int PosValue(lua_State* L)
{
	int n = luaL_checkinteger(L, 1);
	if (n == 0){
		lua_pushinteger(L, Search.pos.vlWhite);
	}else{
		lua_pushinteger(L, Search.pos.vlBlack);
	}
	return 1;
}


// 判断是已被将死
static int PosIsMate(lua_State* L)
{
	lua_pushboolean(L, Search.pos.IsMate() ? 1 : 0);
	return 1;
}

// 被哪个子将军
static int PosCheckedBy(lua_State* L)
{
	lua_pushinteger(L, Search.pos.CheckedBy());
	return 1;
}

// 局面处理过程 // FEN串识别
static int PosFromFen(lua_State* L)
{
	size_t len = 0;
	const char* szFen = luaL_checklstring(L, 1, &len);
	Search.pos.FromFen(szFen);
	return 0;
}

// 每个格子放的棋子，0表示没有棋子
static int PosGetUcpcSquares(lua_State* L)
{
	lua_pushlstring(L, (char*)(Search.pos.ucpcSquares), 256);
	return 1;
}

// AI走棋结果
static int PosGetMvResult(lua_State* L)
{
	lua_pushinteger(L, Search.mvResult);
	return 1;
}

// 生成FEN串
static int PosToFen(lua_State* L)
{
	char szFen[256];
	Search.pos.ToFen(szFen);

	lua_pushstring(L, szFen);

	return 1;
}

// 着法合理性检测
static int PosLegalMove(lua_State* L)
{
	int mv = luaL_checkinteger(L, 1);
	
	lua_pushboolean(L, Search.pos.LegalMove(mv) ? 1 : 0);
	return 1;
}

// 搜索
static int XqSearchMain(lua_State* L)
{
	int nDepth = luaL_checkinteger(L, 1);
	SearchMain(nDepth);
	return 0;
}

// 初始AI 步骤0
static int XqInitAI_0(lua_State* L)
{
	//先释放
	DelHash();
	PreGenInit();
	NewHash(24); // 24=16MB, 25=32MB, 26=64MB, ...

	return 0;
}

// 初始AI 步骤1
static int XqInitAI_1(lua_State* L)
{
	Search.pos.nDistance = 0;
	Search.pos.PreEvaluate();
	Search.nBanMoves = 0;
	Search.bQuit = Search.bBatch = Search.bDebug = false;
	Search.bUseHash = Search.bUseBook = Search.bNullMove = Search.bKnowledge = true;
	Search.bIdle = false;
	Search.nCountMask = INTERRUPT_COUNT - 1;
	Search.nRandomMask = 0;
	Search.rc4Random.InitRand();
	Search.nRandomMask = 3;

	return 0;
}

static int XqInitAIBook(lua_State* L)
{
	size_t len = 0;
	const char* fileName = luaL_checklstring(L, 1, &len);

	if (len == 0)
	{
		strcpy(Search.szBookFile, "");
	}
	else
	{
		std::string fileList = std::string("\\") + fileName;
		strcpy(Search.szBookFile, fileList.c_str());
	}

	return 0;
}

// 恢复棋盘
static int XqInitFen(lua_State* L)
{
	Search.pos.FromFen(cszStartFen);
	return 0;
}

//------- AI线程 ----------------------------------------------------------------------------
std::thread g_aiThread;
std::mutex g_aiMutex;
std::atomic_bool g_aiIsRun;
bool g_aiIsSearch = false;
bool g_aiAfterSearch = false;
int g_aiDepth = 7;

void XqAIThreadFunc()
{
	while (g_aiIsRun)
	{
		g_aiMutex.lock();

		if (g_aiIsSearch)
		{
			SearchMain(g_aiDepth);
			g_aiIsSearch = false;
			g_aiAfterSearch = true;
		}

		g_aiMutex.unlock();

		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}
}

static int XqBeginThread(lua_State* L)
{
	g_aiIsRun = true;
	g_aiThread = std::thread(XqAIThreadFunc);

	return 0;
}

static int XqEndThread(lua_State* L)
{
	g_aiIsRun = false;
	g_aiThread.join();

	return 0;
}

static int XqLock(lua_State* L)
{
	g_aiMutex.lock();

	return 0;
}

static int XqTryLock(lua_State* L)
{
	lua_pushboolean(L, g_aiMutex.try_lock() ? 1 : 0);

	return 1;
}

static int XqUnlock(lua_State* L)
{
	g_aiMutex.unlock();

	return 0;
}

static int XqAsyncSearch(lua_State* L)
{
	int depth = luaL_checkinteger(L, 1);

	g_aiIsSearch = true;
	g_aiDepth = depth;

	return 0;
}

static int XqTryAsyncSearch(lua_State* L)
{
	bool result = g_aiAfterSearch;
	if (g_aiAfterSearch == true)
	{
		g_aiAfterSearch = false;
	}

	lua_pushboolean(L, result ? 1 : 0);

	return 1;
}

// -------------------- 新加 ------------------------
static int ucci_init(lua_State* L){

	//先释放
	DelHash();

	// LocatePath(Search.szBookFile, "BOOK.DAT");

	PreGenInit();
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
	Search.nRandomMask = 3;

	return 1;
}

static int stop_engine(lua_State* L){
	DelHash();
}
	

static int run_engine(lua_State* L){
	size_t len = 0;
	const char* szLineStr = luaL_checklstring(L, 1, &len);
	bool bPonderTime;
}

static int ucci_readline(lua_State* L){
	char szLineStr[LINE_INPUT_MAX_CHAR];
	if (Onyuan.ReadLine(szLineStr))
	{
		lua_pushstring(L, szLineStr);
		return 1;
	}
	return 0;
}


static const luaL_Reg methods[] =
{
	{ "PosSetSdPlayer", PosSetSdPlayer },
	{ "PosGetSdPlayer", PosGetSdPlayer },
	{ "PosUndoMakeMove", PosUndoMakeMove },
	{ "PosMakeMove", PosMakeMove },
	{ "PosSRC", PosSRC },
	{ "PosDST", PosDST },
	{ "PosMOVE", PosMOVE },
	{ "PosRepStatus", PosRepStatus },
	{ "PosRepValue", PosRepValue },
	{ "PosIsMate", PosIsMate },
	{ "PosCheckedBy", PosCheckedBy },
	{ "PosFromFen", PosFromFen },
	{ "PosGetUcpcSquares", PosGetUcpcSquares },
	{ "PosGetMvResult", PosGetMvResult },
	{ "PosToFen", PosToFen },
	{ "PosLegalMove", PosLegalMove },
	{ "PosEvaluate", PosEvaluate },
	{ "PosMaterial", PosMaterial },



	{ "XqSearchMain", XqSearchMain },
	{ "XqInitAI_0", XqInitAI_0 },
	{ "XqInitAI_1", XqInitAI_1 },
	{ "XqInitAIBook", XqInitAIBook },
	{ "XqInitFen", XqInitFen },
	{ "XqBeginThread", XqBeginThread },
	{ "XqEndThread", XqEndThread },
	{ "XqLock", XqLock },
	{ "XqTryLock", XqTryLock },
	{ "XqUnlock", XqUnlock },
	{ "XqAsyncSearch", XqAsyncSearch },
	{ "XqTryAsyncSearch", XqTryAsyncSearch },

	{ "ucci_read_line", ucci_readline },

	{ NULL, NULL }
};

static void setfuncs(lua_State* L, const luaL_Reg *funcs)
{
#if LUA_VERSION_NUM >= 502 // LUA 5.2 or above
	luaL_setfuncs(L, funcs, 0);
#else
	luaL_register(L, NULL, funcs);
#endif
}

extern "C" 
{
	LUALIB_API int luaopen_ai_xiangqi(lua_State* L)
	{
		lua_newtable(L);
		setfuncs(L, methods); 

		return 1;
	}

}



