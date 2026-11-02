#include "../decls.h"
int FUN_8c0fa70c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0x1018 + ar4);
  if (iVar1 == 1) {
    FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
    *(undefined4 *)(0x1018 + ar4) = 0;
    iVar1 = 0x89130;
    *(undefined4 *)(0x89130 + ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fa70c\n.set _FUN_8c0fa70c, _FUN_8c0fa70c_def\n");
