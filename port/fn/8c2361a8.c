#include "../decls.h"
undefined4 FUN_8c2361a8_def(float *ar4,float *ar5,float *ar6,float *ar7)

{
  *ar7 = (ar5[1] - ar4[1]) * (ar6[2] - ar4[2]) - (ar5[2] - ar4[2]) * (ar6[1] - ar4[1]);
  ar7[1] = (ar5[2] - ar4[2]) * (*ar6 - *ar4) - (*ar5 - *ar4) * (ar6[2] - ar4[2]);
  ar7[2] = (*ar5 - *ar4) * (ar6[1] - ar4[1]) - (ar5[1] - ar4[1]) * (*ar6 - *ar4);
  return 8;
}

__asm__(".globl _FUN_8c2361a8\n.set _FUN_8c2361a8, _FUN_8c2361a8_def\n");
