#include "../decls.h"
float * FUN_8c014f74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 4) = *(float *)(ar4 + 4) + *(float *)(ar4 + 0x54);
  *(float *)(ar4 + 8) = *(float *)(ar4 + 8) + *(float *)(ar4 + 0x58);
  *(float *)(ar4 + 0xc) = *(float *)(ar4 + 0xc) + *(float *)(ar4 + 0x5c);
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) - *(float *)(ar4 + 0x70);
  return (float *)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c014f74\n.set _FUN_8c014f74, _FUN_8c014f74_def\n");
