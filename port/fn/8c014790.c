#include "../decls.h"
uint FUN_8c014790_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x14) | 0x20;
  *(uint *)(ar4 + 0x14) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c014790\n.set _FUN_8c014790, _FUN_8c014790_def\n");
