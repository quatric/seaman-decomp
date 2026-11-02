#include "../decls.h"
undefined4 FUN_8c014a64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 0x80000000;
  uVar1 = FUN_8c014790(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014a64\n.set _FUN_8c014a64, _FUN_8c014a64_def\n");
