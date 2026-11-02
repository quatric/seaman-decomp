#include "../decls.h"
int FUN_8c102974_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr4;
  float fVar1;
  float in_fr7;
  float in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 uVar2;
  
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  *(float *)(ar4 + 4) = (fVar1 * in_fr7 - in_fr6 * (float)in_dr4) / (fVar1 - in_fr6);
  *(float *)(ar4 + 8) = ((float)in_dr4 - in_fr7) / (fVar1 - in_fr6);
  *(undefined4 *)(ar4 + 0xc) = in_fr8;
  *(undefined4 *)(ar4 + 0x10) = in_fr9;
  if (*(float *)(ar4 + 0x10) < *(float *)(ar4 + 0xc)) {
    uVar2 = *(undefined4 *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar4 + 0x10);
    *(undefined4 *)(ar4 + 0xc) = uVar2;
  }
  return ar4 + 0x10;
}

__asm__(".globl _FUN_8c102974\n.set _FUN_8c102974, _FUN_8c102974_def\n");
