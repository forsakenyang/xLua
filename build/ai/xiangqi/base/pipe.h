#ifdef _WIN32
  #include <windows.h>
#endif
#include "base.h"

#ifndef PIPE_H
#define PIPE_H

const int LINE_INPUT_MAX_CHAR = 8192;

struct PipeStruct {
  int nEof;
  int nReadEnd;
  char szBuffer[LINE_INPUT_MAX_CHAR];

  void Open(const char *szExecFile = NULL);
  void Close(void) const;
  bool GetBuffer(char *szLineStr);
  bool LineInput(char *szLineStr);
  void LineOutput(const char *szLineStr);
}; // pipe

extern PipeStruct pipeStd;
extern PipeStruct pipeOut;
#endif
