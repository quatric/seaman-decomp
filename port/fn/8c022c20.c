#include "../decls.h"
int FUN_8c022c20_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    iVar1 = FUN_8c263e8e(ar5[1],ar6,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022c20\n.set _FUN_8c022c20, _FUN_8c022c20_def\n");
