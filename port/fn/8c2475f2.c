#include "../decls.h"
uint FUN_8c2475f2_def(uint ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ar5[3] = (float)(ar4 & 0xff) * 0.0039215684;
  ar5[2] = (float)(ar4 >> 8 & 0xff) * 0.0039215684;
  ar5[1] = (float)(ar4 >> 0x10 & 0xff) * 0.0039215684;
  *ar5 = (float)(ar4 >> 0x18) * 0.0039215684;
  return ar4 & 0xff;
}

__asm__(".globl _FUN_8c2475f2\n.set _FUN_8c2475f2, _FUN_8c2475f2_def\n");
