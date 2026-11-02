#include "../decls.h"
int FUN_8c101188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0xb0 + ar4);
  if (iVar1 == 1) {
    iVar1 = FUN_8c101e1c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c101188\n.set _FUN_8c101188, _FUN_8c101188_def\n");
