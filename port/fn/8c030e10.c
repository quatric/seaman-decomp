#include "../decls.h"
int FUN_8c030e10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c102748(ar4,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)extraout_fr1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c030e10\n.set _FUN_8c030e10, _FUN_8c030e10_def\n");
