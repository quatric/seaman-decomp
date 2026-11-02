#include "../decls.h"
undefined4 FUN_8c01d8d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  *(undefined4 *)0x8c27924c = 0;
  *(undefined4 *)0x8c2791bc = 0;
  uVar1 = FUN_8c01d984(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01d8d8\n.set _FUN_8c01d8d8, _FUN_8c01d8d8_def\n");
