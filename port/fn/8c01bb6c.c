#include "../decls.h"
int FUN_8c01bb6c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,5,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bb6c\n.set _FUN_8c01bb6c, _FUN_8c01bb6c_def\n");
