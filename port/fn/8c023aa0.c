#include "../decls.h"
float * FUN_8c023aa0_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 + *ar5;
  ar4[1] = ar4[1] + ar5[1];
  ar4[2] = ar4[2] + ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023aa0\n.set _FUN_8c023aa0, _FUN_8c023aa0_def\n");
