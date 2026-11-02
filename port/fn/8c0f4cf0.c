#include "../decls.h"
float * FUN_8c0f4cf0_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 0x50) = *(float *)(ar4 + 0x50) + *ar5;
  *(float *)(ar4 + 0x54) = *(float *)(ar4 + 0x54) + ar5[1];
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) + ar5[2];
  return (float *)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c0f4cf0\n.set _FUN_8c0f4cf0, _FUN_8c0f4cf0_def\n");
