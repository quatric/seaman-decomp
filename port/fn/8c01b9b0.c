#include "../decls.h"
int FUN_8c01b9b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,8,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b9b0\n.set _FUN_8c01b9b0, _FUN_8c01b9b0_def\n");
