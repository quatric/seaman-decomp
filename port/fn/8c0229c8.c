#include "../decls.h"
int FUN_8c0229c8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    FUN_8c263c64(ar5[1],ar5,ar6,ar7);
    iVar1 = 3;
    *ar5 = 3;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0229c8\n.set _FUN_8c0229c8, _FUN_8c0229c8_def\n");
