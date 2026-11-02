#include "../decls.h"
int FUN_8c01d78c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = *(undefined4 *)0x8c2791b8;
  if (iVar1 == 4) {
    iVar1 = 1;
    *(undefined4 *)0x8c27924c = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d78c\n.set _FUN_8c01d78c, _FUN_8c01d78c_def\n");
