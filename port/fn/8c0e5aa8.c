#include "../decls.h"
undefined4 * FUN_8c0e5aa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(ar4 + 0xa6c) = 0x43898000;
  *(undefined4 *)(ar4 + 0xa70) = 0x44ed8000;
  return &DAT_8c0e5adc;
}

__asm__(".globl _FUN_8c0e5aa8\n.set _FUN_8c0e5aa8, _FUN_8c0e5aa8_def\n");
