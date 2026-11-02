#include "../decls.h"
undefined4 FUN_8c112642_def(int *ar4,int ar5,int ar6,int ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = ar5 * ar6;
  ar4[3] = ar7;
  ar4[4] = ar7 + ar4[2] * 4;
  return in_r0;
}

__asm__(".globl _FUN_8c112642\n.set _FUN_8c112642, _FUN_8c112642_def\n");
