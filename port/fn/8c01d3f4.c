#include "../decls.h"
int FUN_8c01d3f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(0x5640 + *(int *)(0x5630 + ar4) * 0x50 + ar4);
  *(undefined4 *)(0x5634 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = 0x5630;
  *(undefined4 *)(0x5630 + ar4) = uVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c01d3f4\n.set _FUN_8c01d3f4, _FUN_8c01d3f4_def\n");
