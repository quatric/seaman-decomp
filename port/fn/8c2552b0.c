#include "../decls.h"
undefined4 FUN_8c2552b0_def(float *ar4,float *ar5,float *ar6,float *ar7,float *s0)

{
  float fVar1;
  undefined8 in_dr4;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar1 = fVar5 * fVar5;
  fVar3 = fVar5 * fVar1;
  fVar2 = ((fVar1 * 2.0 - fVar5) - fVar3) * 0.5;
  fVar4 = (fVar3 * 1.5 - fVar1 * 2.5) + 1.0;
  fVar5 = (fVar5 * 0.5 - fVar3 * 1.5) + fVar1 * 2.0;
  fVar1 = (fVar3 - fVar1) * 0.5;
  *s0 = fVar1 * *ar7 + fVar5 * *ar6 + fVar2 * *ar4 + *ar5 * fVar4;
  s0[1] = fVar1 * ar7[1] + fVar5 * ar6[1] + fVar2 * ar4[1] + ar5[1] * fVar4;
  s0[2] = fVar1 * ar7[2] + fVar5 * ar6[2] + fVar2 * ar4[2] + ar5[2] * fVar4;
  return 8;
}

__asm__(".globl _FUN_8c2552b0\n.set _FUN_8c2552b0, _FUN_8c2552b0_def\n");
