#include "../decls.h"
undefined4 FUN_8c255f40_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *ar4;
  fVar3 = *ar5;
  fVar2 = ar4[1];
  fVar1 = ar5[1];
  fVar4 = ar4[2];
  fVar5 = ar5[2];
  *ar6 = -fVar4 * fVar1 + fVar2 * fVar5;
  ar6[1] = fVar6 * -fVar5 + fVar4 * fVar3;
  ar6[2] = fVar2 * -fVar3 + fVar6 * fVar1;
  return 8;
}

__asm__(".globl _FUN_8c255f40\n.set _FUN_8c255f40, _FUN_8c255f40_def\n");
