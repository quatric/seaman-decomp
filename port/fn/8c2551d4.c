#include "../decls.h"
undefined4 * FUN_8c2551d4_def(float *ar4,float *ar5,float *ar6,float *ar7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined8 in_dr4;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_stack_00000000;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar3 = fVar4 * fVar4;
  fVar6 = fVar4 * fVar3;
  fVar5 = ((fVar3 * 2.0 - fVar4) - fVar6) * 0.5;
  fVar7 = (fVar6 * 1.5 - fVar3 * 2.5) + 1.0;
  fVar4 = (fVar4 * 0.5 - fVar6 * 1.5) + fVar3 * 2.0;
  pfVar1 = in_stack_00000000 + 1;
  fVar3 = (fVar6 - fVar3) * 0.5;
  *in_stack_00000000 = fVar3 * *ar7 + fVar4 * *ar6 + fVar5 * *ar4 + *ar5 * fVar7;
  *pfVar1 = fVar3 * ar7[1] + fVar4 * ar6[1] + fVar5 * ar4[1] + ar5[1] * fVar7;
  pfVar2 = in_stack_00000000 + 2;
  fVar3 = fVar3 * ar7[2] + fVar4 * ar6[2] + fVar5 * ar4[2] + ar5[2] * fVar7;
  *pfVar2 = fVar3;
  fVar3 = *in_stack_00000000 * *in_stack_00000000 + *pfVar1 * *pfVar1 + fVar3 * fVar3;
  if (fVar3 <= 1e-05) {
    *in_stack_00000000 = 0.0;
    *pfVar1 = 0.0;
    *pfVar2 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar3);
    *in_stack_00000000 = *in_stack_00000000 * fVar3;
    *pfVar1 = *pfVar1 * fVar3;
    *pfVar2 = *pfVar2 * fVar3;
  }
  return &DAT_8c255408;
}

__asm__(".globl _FUN_8c2551d4\n.set _FUN_8c2551d4, _FUN_8c2551d4_def\n");
