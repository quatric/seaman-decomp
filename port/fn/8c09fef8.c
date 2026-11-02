#include "../decls.h"
int FUN_8c09fef8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)((short)ar5 * 0xc + ar4 + (short)ar6 * 4 + 0x14) = in_fr4;
  return (short)ar6 * 4;
}

__asm__(".globl _FUN_8c09fef8\n.set _FUN_8c09fef8, _FUN_8c09fef8_def\n");
