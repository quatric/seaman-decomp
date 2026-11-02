#include "../decls.h"
undefined4 FUN_8c21279c_def(int ar4,float *ar5,float *ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  ulonglong uVar6;
  longlong lVar8;
  undefined8 in_xd0;
  float in_xf2;
  float in_xf3;
  undefined8 in_xd4;
  float in_xf6;
  float in_xf7;
  undefined8 in_xd8;
  float in_xf10;
  float in_xf11;
  float in_xf12;
  float in_xf13;
  float in_xf14;
  float in_xf15;
  
  fVar3 = *ar5;
  fVar1 = ar5[1];
  fVar7 = ar5[2];
  uVar6 = (ulonglong)(uint)fVar7 << 0x20;
  if (ar4 == 0) {
                    
    fVar2 = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar3 + (float)in_xd8 * 0.0 + in_xf12 * fVar7;
    fVar4 = (float)((ulonglong)in_xd0 >> 0x20) * fVar1 + (float)((ulonglong)in_xd4 >> 0x20) * fVar3
            + (float)((ulonglong)in_xd8 >> 0x20) * 0.0 + in_xf13 * fVar7;
    fVar5 = in_xf2 * fVar1 + in_xf6 * fVar3 + in_xf10 * 0.0 + in_xf14 * fVar7;
    fVar1 = in_xf3 * fVar1 + in_xf7 * fVar3 + in_xf11 * 0.0 + in_xf15 * fVar7;
  }
  else {
                    
    fVar2 = 0.0;
                    
    fVar4 = 0.0;
    ain0 = 0x28;
    lVar8 = 0;
                    
    fVar1 = *(float *)(ar4 + 0x18) * fVar1 + *(float *)(ar4 + 8) * fVar3 + 0.0 +
            *(float *)(ar4 + 0x28) * fVar7;
    uVar6 = lVar8 << 0x20;
  }
  uVar6 = uVar6 & 0xffffffff00000000;
  if (_DAT_8c4ab148 != 0) {
                    
    fVar1 = (float)(uVar6 >> 0x20);
    fVar1 = fVar2 * fVar2 + fVar4 * fVar4 + 0.0 + fVar1 * fVar1;
    fVar1 = 1.0 / SQRT((float)uVar6);
    uVar6 = CONCAT44((float)(uVar6 >> 0x20) * fVar1,fVar1);
    fVar2 = fVar2 * fVar1;
    fVar4 = fVar4 * fVar1;
  }
  ar6[2] = (float)(uVar6 >> 0x20);
  ar6[1] = fVar2;
  *ar6 = fVar4;
  return ain0;
}

__asm__(".globl _FUN_8c21279c\n.set _FUN_8c21279c, _FUN_8c21279c_def\n");
