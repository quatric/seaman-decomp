#include "../decls.h"
int FUN_8c0cff78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c015224(ar4,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7);
  FUN_8c02145c(ar4 + 0x30,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x20) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = (ulonglong)extraout_fr1;
  }
  FUN_8c0d0720(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0cff78\n.set _FUN_8c0cff78, _FUN_8c0cff78_def\n");
