#include "../decls.h"
undefined4 FUN_8c23a8a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  undefined8 in_dr4;
  float fVar2;
  undefined8 in_dr6;
  longlong lVar3;
  float fVar4;
  
  if (ar4 == 0) {
    ar4 = _DAT_8c4c0cc0;
  }
  fVar2 = (float)((ulonglong)in_dr4 >> 0x20) - *(float *)(ar4 + 0x40);
  fVar1 = (float)in_dr4 - *(float *)(ar4 + 0x44);
  fVar4 = (float)((ulonglong)in_dr6 >> 0x20) - *(float *)(ar4 + 0x48);
  lVar3 = (ulonglong)(uint)fVar4 << 0x20;
                    
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar4 * fVar4;
  fVar4 = 1.0 / SQRT((float)lVar3);
  *(float *)(ar4 + 0x54) = (float)((ulonglong)lVar3 >> 0x20) * fVar4;
  *(float *)(ar4 + 0x50) = fVar1 * fVar4;
  *(float *)(ar4 + 0x4c) = fVar2 * fVar4;
  return ain0;
}

__asm__(".globl _FUN_8c23a8a4\n.set _FUN_8c23a8a4, _FUN_8c23a8a4_def\n");
