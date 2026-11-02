#include "../decls.h"
uint FUN_8c221778_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = ar4 + 2;
  uVar1 = 0;
  fVar3 = *pfVar2 * *pfVar2 + *ar4 * *ar4;
  if ((((uint)*pfVar2 | (uint)*ar4) & 0x7fffffff) < 0x10000000) {
    fVar6 = 1.0;
    fVar4 = 0.0;
  }
  else if ((uint)ABS(*ar4) < (uint)ABS(*pfVar2)) {
    fVar6 = *pfVar2;
    uVar1 = 1;
    fVar4 = *ar4;
  }
  else {
    fVar6 = *ar4;
    fVar4 = *pfVar2;
  }
  if (((uint)ar4[1] & 0x80000000) == 0) {
    fVar5 = ar4[1];
  }
  else {
    fVar5 = 1e-05;
  }
  fVar4 = ABS((43.562813 - ABS(fVar4 / fVar6) * 11.562812) * ABS(fVar4 / fVar6) -
              *(float *)(&DAT_8c26d7c8 +
                        (uVar1 | (int)*pfVar2 >> 0x1d & 4U | (int)*ar4 >> 0x1e & 2U) * 4)) - 64.0;
  fVar3 = SQRT(fVar3 / (fVar5 * fVar5 + fVar3)) * 255.0;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 255.0;
  }
  if (fVar4 <= 255.0) {
    uVar1 = (int)fVar4 & 0xff;
  }
  else {
    uVar1 = 0xff;
  }
  if (fVar3 <= 255.0) {
    uVar1 = uVar1 | ((int)fVar3 & 0xffU) << 8;
  }
  else {
    uVar1 = uVar1 | 0xff00;
  }
  return uVar1 | 0x80000000;
}

__asm__(".globl _FUN_8c221778\n.set _FUN_8c221778, _FUN_8c221778_def\n");
