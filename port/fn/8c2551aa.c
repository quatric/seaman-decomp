#include "../decls.h"
undefined4 FUN_8c2551aa_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  float fVar1;
  undefined8 in_dr4;
  float fVar2;
  
  fVar2 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar1 = 1.0 - fVar2;
  *ar6 = *ar4 * fVar1 + *ar5 * fVar2;
  ar6[1] = fVar1 * ar4[1] + ar5[1] * fVar2;
  ar6[2] = fVar1 * ar4[2] + ar5[2] * fVar2;
  return 8;
}

__asm__(".globl _FUN_8c2551aa\n.set _FUN_8c2551aa, _FUN_8c2551aa_def\n");
