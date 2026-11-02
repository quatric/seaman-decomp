#include "../decls.h"
undefined4 FUN_8c256ce0_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 in_xd0;
  float fVar10;
  undefined8 in_xd2;
  float fVar11;
  float in_xf4;
  float in_xf5;
  float in_xf6;
  float in_xf7;
  undefined8 in_xd8;
  float fVar12;
  undefined8 in_xd10;
  float fVar13;
  undefined8 in_xd12;
  float fVar14;
  undefined8 in_xd14;
  float fVar15;
  
  fVar14 = (float)((ulonglong)in_xd12 >> 0x20);
  fVar15 = (float)((ulonglong)in_xd14 >> 0x20);
  if (ar4 != (float *)0x0) {
    fVar1 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
    fVar3 = (float)sin(fVar1);
    fVar1 = (float)cos(fVar1);
    fVar3 = (float)fVar3;
    fVar1 = (float)fVar1;
    lVar9 = (ulonglong)(uint)fVar1 << 0x20;
    lVar8 = (ulonglong)(uint)fVar3 << 0x20;
    fVar4 = *ar4;
    fVar2 = ar4[1];
    fVar6 = ar4[2];
    fVar5 = ar4[3];
                    
    fVar10 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar12 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar11 = (float)((ulonglong)in_xd2 >> 0x20);
    fVar13 = (float)((ulonglong)in_xd10 >> 0x20);
                    
    fVar7 = (float)in_xd0 * 0.0 + in_xf4 * fVar3 + (float)in_xd8 * 0.0 + (float)in_xd12 * fVar1;
    fVar7 = fVar10 * 0.0 + in_xf5 * fVar3 + fVar12 * 0.0 + fVar14 * fVar1;
    fVar7 = (float)in_xd2 * 0.0 + in_xf6 * fVar3 + (float)in_xd10 * 0.0 + (float)in_xd14 * fVar1;
    fVar1 = fVar11 * 0.0 + in_xf7 * fVar3 + fVar13 * 0.0 + fVar15 * fVar1;
    ar4[0xb] = (float)lVar9;
    ar4[10] = (float)((ulonglong)lVar9 >> 0x20);
    ar4[9] = (float)lVar8;
    ar4[8] = (float)((ulonglong)lVar8 >> 0x20);
    ar4[3] = (float)in_xd2 * fVar2 + in_xf6 * fVar4 + (float)in_xd10 * fVar5 +
             (float)in_xd14 * fVar6;
    ar4[2] = fVar11 * fVar2 + in_xf7 * fVar4 + fVar13 * fVar5 + fVar15 * fVar6;
    ar4[1] = (float)in_xd0 * fVar2 + in_xf4 * fVar4 + (float)in_xd8 * fVar5 + (float)in_xd12 * fVar6
    ;
    *ar4 = fVar10 * fVar2 + in_xf5 * fVar4 + fVar12 * fVar5 + fVar14 * fVar6;
    return ain0;
  }
  fVar14 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
  sin(fVar14);
  cos(fVar14);
  return ain0;
}

__asm__(".globl _FUN_8c256ce0\n.set _FUN_8c256ce0, _FUN_8c256ce0_def\n");
