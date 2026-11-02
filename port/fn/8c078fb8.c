#include "../decls.h"
undefined4 FUN_8c078fb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x50) = in_fr4;
  *(undefined4 *)(ar4 + 0x54) = in_fr5;
  *(undefined4 *)(ar4 + 0x58) = in_fr6;
  return 1;
}

__asm__(".globl _FUN_8c078fb8\n.set _FUN_8c078fb8, _FUN_8c078fb8_def\n");
