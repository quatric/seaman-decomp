#include "../decls.h"
undefined4 FUN_8c102a7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr6;
  undefined8 in_dr8;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((ulonglong)in_dr8 >> 0x20);
  fVar3 = (float)((ulonglong)in_dr6 >> 0x20);
  *(float *)(ar4 + 0x14) = (fVar3 * (float)in_dr8 - fVar2 * (float)in_dr6) / (fVar3 - fVar2);
  *(float *)(ar4 + 0x18) = ((float)in_dr6 - (float)in_dr8) / (fVar3 - fVar2);
  *(float *)(ar4 + 0x1c) = fVar3;
  uVar1 = FUN_8c102974(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c102a7c\n.set _FUN_8c102a7c, _FUN_8c102a7c_def\n");
