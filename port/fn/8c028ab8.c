#include "../decls.h"
int FUN_8c028ab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return *(int *)(0x328 + ar4) + (short)uVar1 * 0x124;
}

__asm__(".globl _FUN_8c028ab8\n.set _FUN_8c028ab8, _FUN_8c028ab8_def\n");
