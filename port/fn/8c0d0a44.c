#include "../decls.h"
int FUN_8c0d0a44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr4;
  float fVar1;
  
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  if (0.00016666666 < fVar1) {
    fVar1 = 0.00016666666;
  }
  *(float *)(ar4 + 0xc) = *(float *)(ar4 + 0xc) - fVar1;
  if (*(float *)(ar4 + 0xc) <= 0.0) {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  return ar4 + 0xc;
}

__asm__(".globl _FUN_8c0d0a44\n.set _FUN_8c0d0a44, _FUN_8c0d0a44_def\n");
