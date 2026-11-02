#include "../decls.h"
undefined4 FUN_8c028ef0_def(int ar4,float *ar5,float *ar6,float *ar7)

{
  *ar5 = *(float *)(ar4 + 0x30) + *(float *)(ar4 + 0x3c8);
  *ar6 = *(float *)(ar4 + 0x34) + *(float *)(ar4 + 0x3cc);
  *ar7 = *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3d0);
  return 0x3d0;
}

__asm__(".globl _FUN_8c028ef0\n.set _FUN_8c028ef0, _FUN_8c028ef0_def\n");
