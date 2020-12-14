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

#include "AI.h"

static int WqSetLevel(lua_State* L)
{
	int level = luaL_checkinteger(L, 1);

	SetLevel(level);

	return 0;
}

static int WqSetBoardSize(lua_State* L)
{
	int size = luaL_checkinteger(L, 1);

	SetBoardSize(size);

	return 0;
}

static int WqEntrance(lua_State* L)
{
	Entrance();
	return 0;
}

static int WqDoMove(lua_State* L)
{
	int color = luaL_checkinteger(L, 1);
	int x = luaL_checkinteger(L, 2);
	int y = luaL_checkinteger(L, 3);

	TiziList tiziList;
	DoMove(color, x, y, tiziList);

	lua_newtable(L);
	for (int i = 0; i < tiziList.size(); ++i)
	{
		int n = tiziList[i].x * 19 + tiziList[i].y;
		lua_pushinteger(L, n); //设置值
		lua_rawseti(L, -2, i + 1);//对应key-val
	}

	return 1;
}

static int WqComputerMove(lua_State* L)
{
	int color = luaL_checkinteger(L, 1);
	int x = -1;
	int y = -1;

	TiziList tiziList;
	ComputerMove(color, &x, &y, tiziList);

	lua_pushinteger(L, x); 
	lua_pushinteger(L, y); 

	lua_newtable(L);
	for (int i = 0; i < tiziList.size(); ++i)
	{
		int n = tiziList[i].x * 19 + tiziList[i].y;
		lua_pushinteger(L, n); //设置值
		lua_rawseti(L, -2, i + 1);//对应key-val
	}

	return 3;
}

static int WqUndoChess(lua_State* L)
{
	lua_pushboolean(L, UndoChess() ? 1 : 0);
	return 1;
}

static int WqUndoChessEx(lua_State* L)
{
	int stepNum = luaL_checkinteger(L, 1);
	lua_pushboolean(L, UndoChessEx(stepNum) ? 1 : 0);
	return 1;
}

static int WqIsLegal(lua_State* L)
{
	int color = luaL_checkinteger(L, 1);
	int x = luaL_checkinteger(L, 2);
	int y = luaL_checkinteger(L, 3);

	lua_pushboolean(L, gnugo_is_legal(y, x, color));
	return 1;
}

static int WqClear(lua_State* L)
{
	ClearMsg();
	return 0;
}

//------- AI线程 ----------------------------------------------------------------------------
std::thread g_wqAIThread;
std::mutex g_wqAIMutex;
std::atomic_bool g_wqAIIsRun;
std::atomic_bool g_wqAIIsMove;
std::atomic_bool g_wqAIAfterMove;
int g_wqAIColor = 0;
int g_wqAIRow = -1;
int g_wqAICol = -1;
TiziList g_wqAITiziList;

void WqAIThreadFunc()
{
	while (g_wqAIIsRun)
	{
		g_wqAIMutex.lock();

		if (g_wqAIIsMove)
		{
			g_wqAIRow = -1;
			g_wqAICol = -1;
			g_wqAITiziList.clear();
			
			ComputerMove(g_wqAIColor, &g_wqAIRow, &g_wqAICol, g_wqAITiziList);

			g_wqAIIsMove = false;
			g_wqAIAfterMove = true;
		}

		g_wqAIMutex.unlock();

		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}
}

static int WqBeginThread(lua_State* L)
{
	g_wqAIIsRun = true;
	g_wqAIIsMove = false;
	g_wqAIAfterMove = false;

	g_wqAIThread = std::thread(WqAIThreadFunc);

	return 0;
}

static int WqEndThread(lua_State* L)
{
	g_wqAIIsRun = false;
	g_wqAIThread.join();

	return 0;
}

static int WqLock(lua_State* L)
{
	g_wqAIMutex.lock();

	return 0;
}

static int WqTryLock(lua_State* L)
{
	lua_pushboolean(L, g_wqAIMutex.try_lock() ? 1 : 0);

	return 1;
}

static int WqUnlock(lua_State* L)
{
	g_wqAIMutex.unlock();

	return 0;
}

static int WqAsyncAIMove(lua_State* L)
{
	int color = luaL_checkinteger(L, 1);

	g_wqAIIsMove = true;
	g_wqAIColor = color;

	return 0;
}

static int WqTryAsyncAIMove(lua_State* L)
{
	bool result = g_wqAIAfterMove;
	if (g_wqAIAfterMove == true)
	{
		g_wqAIAfterMove = false;
	}

	lua_pushboolean(L, result ? 1 : 0);

	return 1;
}

static int WqGetAsyncResult(lua_State* L)
{
	lua_pushinteger(L, g_wqAIRow);
	lua_pushinteger(L, g_wqAICol);

	lua_newtable(L);
	for (int i = 0; i < g_wqAITiziList.size(); ++i)
	{
		int n = g_wqAITiziList[i].x * 19 + g_wqAITiziList[i].y;
		lua_pushinteger(L, n); //设置值
		lua_rawseti(L, -2, i + 1);//对应key-val
	}

	return 3;
}

static const luaL_Reg methods[] =
{
	{ "WqSetLevel", WqSetLevel },
	{ "WqSetBoardSize", WqSetBoardSize },
	{ "WqEntrance", WqEntrance },
	{ "WqDoMove", WqDoMove },
	{ "WqComputerMove", WqComputerMove },
	{ "WqUndoChess", WqUndoChess },
	{ "WqUndoChessEx", WqUndoChessEx },
	{ "WqIsLegal", WqIsLegal },
	{ "WqClear", WqClear },

	{ "WqBeginThread", WqBeginThread },
	{ "WqEndThread", WqEndThread },
	{ "WqLock", WqLock },
	{ "WqTryLock", WqTryLock },
	{ "WqUnlock", WqUnlock },
	{ "WqAsyncAIMove", WqAsyncAIMove },
	{ "WqTryAsyncAIMove", WqTryAsyncAIMove },
	{ "WqGetAsyncResult", WqGetAsyncResult },

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
	LUALIB_API int luaopen_ai_weiqi(lua_State* L)
	{
		lua_newtable(L);
		setfuncs(L, methods);

		return 1;
	}

}
