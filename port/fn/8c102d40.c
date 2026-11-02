#include "../decls.h"
undefined4 FUN_8c102d40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c010080(ar4,ar5,ar6,ar7);
  FUN_8c1f38f2(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1f813e(ar4,ar5,ar6,ar7);
  FUN_8c1f62f0(ar4,ar5,ar6,ar7);
  FUN_8c2590bc(ar4,ar5,ar6,ar7);
  noop_1fb43a(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1fa6f2(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c102d20(0xf,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c102d40\n.set _FUN_8c102d40, _FUN_8c102d40_def\n");
