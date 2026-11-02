#include "../decls.h"
undefined4 FUN_8c23a9d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
  return 0xc;
}

__asm__(".globl _FUN_8c23a9d0\n.set _FUN_8c23a9d0, _FUN_8c23a9d0_def\n");
