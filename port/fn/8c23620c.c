#include "../decls.h"
undefined4 FUN_8c23620c_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  *ar5 = *ar4 - ar4[3];
  ar5[1] = ar4[1] - ar4[3];
  ar5[2] = ar4[2] - ar4[3];
  *ar6 = *ar4 + ar4[3];
  ar6[1] = ar4[1] + ar4[3];
  ar6[2] = ar4[2] + ar4[3];
  return 8;
}

__asm__(".globl _FUN_8c23620c\n.set _FUN_8c23620c, _FUN_8c23620c_def\n");
