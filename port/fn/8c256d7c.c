#include "../decls.h"
undefined4 FUN_8c256d7c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_xd0;
  float fVar9;
  undefined8 in_xd2;
  float fVar10;
  undefined8 in_xd4;
  float fVar11;
  undefined8 in_xd6;
  float fVar12;
  float in_xf8;
  float in_xf9;
  float in_xf10;
  float in_xf11;
  undefined8 in_xd12;
  float fVar13;
  undefined8 in_xd14;
  float fVar14;
  
  fVar13 = (float)((ulonglong)in_xd12 >> 0x20);
  fVar14 = (float)((ulonglong)in_xd14 >> 0x20);
  if (ar4 != (float *)0x0) {
    fVar1 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
    sin(fVar1);
    cos(fVar1);
    fVar2 = *ar4;
    fVar1 = ar4[1];
    fVar4 = ar4[2];
    fVar3 = ar4[3];
    fVar6 = ar4[4];
    fVar5 = ar4[5];
    fVar8 = ar4[6];
    fVar7 = ar4[7];
                    
    fVar9 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar11 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar10 = (float)((ulonglong)in_xd2 >> 0x20);
    fVar12 = (float)((ulonglong)in_xd6 >> 0x20);
                    
    ar4[7] = (float)in_xd2 * fVar5 + (float)in_xd6 * fVar6 + in_xf10 * fVar7 +
             (float)in_xd14 * fVar8;
    ar4[6] = fVar10 * fVar5 + fVar12 * fVar6 + in_xf11 * fVar7 + fVar14 * fVar8;
    ar4[5] = (float)in_xd0 * fVar5 + (float)in_xd4 * fVar6 + in_xf8 * fVar7 + (float)in_xd12 * fVar8
    ;
    ar4[4] = fVar9 * fVar5 + fVar11 * fVar6 + in_xf9 * fVar7 + fVar13 * fVar8;
    ar4[3] = (float)in_xd2 * fVar1 + (float)in_xd6 * fVar2 + in_xf10 * fVar3 +
             (float)in_xd14 * fVar4;
    ar4[2] = fVar10 * fVar1 + fVar12 * fVar2 + in_xf11 * fVar3 + fVar14 * fVar4;
    ar4[1] = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar2 + in_xf8 * fVar3 + (float)in_xd12 * fVar4
    ;
    *ar4 = fVar9 * fVar1 + fVar11 * fVar2 + in_xf9 * fVar3 + fVar13 * fVar4;
    return ain0;
  }
  fVar13 = ((float)(ushort)ar5 * 6.2831855) / 65536.0;
  sin(fVar13);
  cos(fVar13);
  return ain0;
}

__asm__(".globl _FUN_8c256d7c\n.set _FUN_8c256d7c, _FUN_8c256d7c_def\n");
