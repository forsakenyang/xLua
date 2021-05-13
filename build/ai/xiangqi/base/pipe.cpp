#include <string.h>
#include "base2.h"
#include "pipe.h"


void PipeStruct::Open(const char *szProcFile) {
  nEof = 0;
  nReadEnd = 0;
}

void PipeStruct::Close(void) const {
}


void PipeStruct::LineOutput(const char *szLineStr){
  int nStrLen;
  char szWriteBuffer[LINE_INPUT_MAX_CHAR];
  nStrLen = strlen(szLineStr);
  memcpy(szWriteBuffer, szLineStr, nStrLen);
  szWriteBuffer[nStrLen] = '\r';
  szWriteBuffer[nStrLen + 1] = '\n';

  memcpy(szBuffer + nReadEnd, szWriteBuffer, nStrLen + 2);
  nReadEnd = nReadEnd + nStrLen + 2;
}

bool PipeStruct::GetBuffer(char *szLineStr) {
  char *lpFeedEnd;
  int nFeedEnd;
  lpFeedEnd = (char *) memchr(szBuffer, '\n', nReadEnd);
  if (lpFeedEnd == NULL) {
    return false;
  } else {
    nFeedEnd = lpFeedEnd - szBuffer;
    memcpy(szLineStr, szBuffer, nFeedEnd);
    szLineStr[nFeedEnd] = '\0';
    nFeedEnd ++;
    nReadEnd -= nFeedEnd;
    memcpy(szBuffer, szBuffer + nFeedEnd, nReadEnd);
    lpFeedEnd = (char *) strchr(szLineStr, '\r');
    if (lpFeedEnd != NULL) {
      *lpFeedEnd = '\0';
    }
    return true;
  }
}

bool PipeStruct::LineInput(char *szLineStr) {
  if (GetBuffer(szLineStr)) {
    return true;
  } else if (nReadEnd == LINE_INPUT_MAX_CHAR) {
    memcpy(szLineStr, szBuffer, LINE_INPUT_MAX_CHAR - 1);
    szLineStr[LINE_INPUT_MAX_CHAR - 1] = '\0';
    szBuffer[0] = szBuffer[LINE_INPUT_MAX_CHAR - 1];
    nReadEnd = 1;
    return true;
  } else {
    return false;
  }
}
