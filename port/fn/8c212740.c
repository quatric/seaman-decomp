#include "../decls.h"
undefined4 FUN_8c212740_def(int ar4,float *ar5,float *ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 in_xd0;
  float in_xf3;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  float in_xf12;
  float in_xf13;
  float in_xf15;
  
  fVar2 = *ar5;
  fVar1 = ar5[1];
  fVar3 = ar5[2];
  if (ar4 != 0) {
                    
    fVar2 = *(float *)(ar4 + 0x34);
    *ar6 = *(float *)(ar4 + 0x30);
                    
    fVar1 = *(float *)(ar4 + 0x38);
    ar6[1] = fVar2;
                    
    ar6[2] = fVar1;
    return 0x38;
  }
                    
  ar6[2] = in_xf3 * fVar1 + (float)((ulonglong)in_xd6 >> 0x20) * fVar2 +
           (float)((ulonglong)in_xd10 >> 0x20) * 1.0 + in_xf15 * fVar3;
  ar6[1] = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar2 + (float)in_xd8 * 1.0 + in_xf12 * fVar3;
  *ar6 = (float)((ulonglong)in_xd0 >> 0x20) * fVar1 + (float)((ulonglong)in_xd4 >> 0x20) * fVar2 +
         (float)((ulonglong)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar3;
  return ain0;
}

__asm__(".globl _FUN_8c212740\n.set _FUN_8c212740, _FUN_8c212740_def\n");
