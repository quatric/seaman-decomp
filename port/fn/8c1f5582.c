#include "../decls.h"
undefined4 FUN_8c1f5582_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = ar5;
  uVar1 = FUN_8c1f4a44(ar4,9,auStack_8,1);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5582\n.set _FUN_8c1f5582, _FUN_8c1f5582_def\n");
