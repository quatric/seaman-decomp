#include "../decls.h"
undefined4 FUN_8c02da10_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (((ar5 != 4) && (ar5 != 7)) && (ar5 != 0x13)) {
    *ar4 = '\0';
    return 0;
  }
  if (((ar4[3] == '\0') && (ar4[1] == '\0')) && ((ar4[4] == '\0' && (*ar4 == '\x01')))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02da10\n.set _FUN_8c02da10, _FUN_8c02da10_def\n");
