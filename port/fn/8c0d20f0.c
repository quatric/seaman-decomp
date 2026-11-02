#include "../decls.h"
undefined4 FUN_8c0d20f0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x18) = in_fr4;
  *(undefined4 *)(ar4 + 0x14) = in_fr4;
  *(undefined4 *)(ar4 + 0x10) = in_fr4;
  if (ar6 == 4) {
    *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) * 1.5;
    *(float *)(ar4 + 0x14) = *(float *)(ar4 + 0x14) * 1.5;
    *(float *)(ar4 + 0x18) = *(float *)(ar4 + 0x18) * 1.5;
  }
  FUN_8c0d25a0(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = ar5;
  *(int *)(ar4 + 0x3c) = ar6;
  return ar5;
}

__asm__(".globl _FUN_8c0d20f0\n.set _FUN_8c0d20f0, _FUN_8c0d20f0_def\n");
