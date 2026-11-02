#include "../decls.h"
undefined4 FUN_8c101de0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  
  uVar1 = ar6;
  ar4_00 = FUN_8c1f88f0(ar5,ar6,ar6,ar7);
  uVar1 = FUN_8c1f88f6(ar4_00,ar6,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c101de0\n.set _FUN_8c101de0, _FUN_8c101de0_def\n");
