#include "../decls.h"
undefined4 FUN_8c234a68_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = ar5[3];
  fVar2 = ar5[4];
  fVar3 = ar5[5];
  if (ar6 != (float *)0x0) {
    fVar2 = -(fVar3 * ar4[2] + fVar4 * *ar4 + fVar2 * ar4[1] +
             ((-(fVar4 * *ar5) - fVar2 * ar5[1]) - fVar3 * ar5[2])) /
            (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    *ar6 = fVar2 * ar5[3] + *ar4;
    ar6[1] = fVar2 * ar5[4] + ar4[1];
    ar6[2] = fVar2 * ar5[5] + ar4[2];
  }
  uVar1 = FUN_8c258048(ar4,ar5,ar6,ar7,8);
  return uVar1;
}

__asm__(".globl _FUN_8c234a68\n.set _FUN_8c234a68, _FUN_8c234a68_def\n");
