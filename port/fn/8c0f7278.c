#include "../decls.h"
float * FUN_8c0f7278_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(ar4 + 0x60) - 0.00018518518;
  *(float *)(ar4 + 0x60) = fVar2;
  *(float *)(ar4 + 0x5c) = fVar2;
  *(float *)(ar4 + 0x58) = fVar2;
  *(float *)(ar4 + 0x54) = fVar2;
  pfVar1 = (float *)(ar4 + 0x60);
  if (*pfVar1 <= 0.0) {
    pfVar1 = (float *)(*(int *)(ar4 + 0x2c) + 1);
    *(float **)(ar4 + 0x2c) = pfVar1;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0f7278\n.set _FUN_8c0f7278, _FUN_8c0f7278_def\n");
