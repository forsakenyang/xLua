#include "position.h"

const int INTERRUPT_COUNT = 4096; // 搜索若干结点后调用中断
const int LINE_INPUT_MAX_CHAR = 8192;

// 搜索前可设置的全局变量，指定搜索参数
struct OnyuanStruct {
    int nEof;
    int nReadEnd;
    char szBuffer[LINE_INPUT_MAX_CHAR];
    char szLineStr[LINE_INPUT_MAX_CHAR];

    bool ReadLine(char *szLineStr);
    void WriteLine(const char *format, ...);

    void StartEngine();
    void RunEngine(const char* szLineStr);
    bool StopEngine(const char* szLineStr = NULL);
};


extern OnyuanStruct Onyuan;
