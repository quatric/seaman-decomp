#include "../decls.h"
undefined4 * FUN_8c25513c_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined8 in_dr4;
  float fVar4;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar3 = 1.0 - fVar4;
  pfVar1 = ar6 + 1;
  pfVar2 = ar6 + 2;
  *ar6 = *ar4 * fVar3 + *ar5 * fVar4;
  *pfVar1 = fVar3 * ar4[1] + ar5[1] * fVar4;
  fVar3 = fVar3 * ar4[2] + ar5[2] * fVar4;
  *pfVar2 = fVar3;
  fVar3 = *ar6 * *ar6 + *pfVar1 * *pfVar1 + fVar3 * fVar3;
  if (fVar3 <= 1e-05) {
    *ar6 = 0.0;
    *pfVar1 = 0.0;
    *pfVar2 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar3);
    *ar6 = *ar6 * fVar3;
    *pfVar1 = *pfVar1 * fVar3;
    *pfVar2 = *pfVar2 * fVar3;
  }
  return &DAT_8c255408;
}

__asm__(".globl _FUN_8c25513c\n.set _FUN_8c25513c, _FUN_8c25513c_def\n");
