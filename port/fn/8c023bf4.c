#include "../decls.h"
float * FUN_8c023bf4_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 * *ar5;
  ar4[1] = ar4[1] * *ar5;
  ar4[2] = ar4[2] * *ar5;
  return ar4;
}

__asm__(".globl _FUN_8c023bf4\n.set _FUN_8c023bf4, _FUN_8c023bf4_def\n");
