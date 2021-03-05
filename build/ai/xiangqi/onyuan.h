#include "position.h"
#include <thread>
#include <mutex>

const int INTERRUPT_COUNT = 4096; // 搜索若干结点后调用中断
const int LINE_INPUT_MAX_CHAR = 8192;

// 搜索前可设置的全局变量，指定搜索参数
struct OnyuanStruct {
    int nReadEnd;
    char szBuffer[LINE_INPUT_MAX_CHAR];
    char szLineStr[LINE_INPUT_MAX_CHAR];

    char szCommBuffer[LINE_INPUT_MAX_CHAR];
    int nCommandReadEnd;

    bool ReadLine(char *szLineStr);         // 读取引擎的结果
    void WriteLine(const char *format, ...);

    void StartEngine();
    void StopEngine();

    bool CommandOut(char* szLineStr);         // ucci 读取指令
    void CommandIn(const char* szCommandStr); // 给ucci引擎发送指令
}; 



extern OnyuanStruct Onyuan;
