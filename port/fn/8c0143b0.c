#include "../decls.h"
int log_message_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *ar4, ar4 = ar4 + 1, cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _log_message\n.set _log_message, _log_message_def\n");
