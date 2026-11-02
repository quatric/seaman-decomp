#include "../decls.h"
undefined4 FUN_8c256b0c_def(float *ar4,uint ar5,uint ar6,uint ar7,undefined4 ain0)

{
  float fVar1;
  float fVar3;
  ulonglong uVar2;
  float fVar4;
  float fVar7;
  longlong lVar5;
  longlong lVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_xd0;
  float fVar13;
  float fVar14;
  undefined8 in_xd2;
  float fVar15;
  float fVar16;
  undefined8 in_xd4;
  float fVar17;
  float fVar18;
  undefined8 in_xd6;
  float fVar19;
  float fVar20;
  undefined8 in_xd8;
  float fVar21;
  float fVar22;
  undefined8 in_xd10;
  float fVar23;
  float fVar24;
  undefined8 in_xd12;
  float fVar25;
  float fVar26;
  undefined8 in_xd14;
  float fVar27;
  
  fVar20 = (float)in_xd8;
  fVar21 = (float)((ulonglong)in_xd8 >> 0x20);
  fVar22 = (float)in_xd10;
  fVar23 = (float)((ulonglong)in_xd10 >> 0x20);
  fVar24 = (float)in_xd12;
  fVar25 = (float)((ulonglong)in_xd12 >> 0x20);
  fVar26 = (float)in_xd14;
  fVar27 = (float)((ulonglong)in_xd14 >> 0x20);
  if (ar4 != (float *)0x0) {
    fVar12 = (float)in_xd0;
    fVar13 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar14 = (float)in_xd2;
    fVar15 = (float)((ulonglong)in_xd2 >> 0x20);
    fVar16 = (float)in_xd4;
    fVar17 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar18 = (float)in_xd6;
    fVar19 = (float)((ulonglong)in_xd6 >> 0x20);
    if (ar7 != 0) {
      fVar1 = ((float)(ar7 & 0xffff) * 6.2831855) / 65536.0;
      sin(fVar1);
      cos(fVar1);
      fVar3 = *ar4;
      fVar1 = ar4[1];
      fVar7 = ar4[2];
      fVar4 = ar4[3];
      fVar9 = ar4[4];
      fVar8 = ar4[5];
      fVar11 = ar4[6];
      fVar10 = ar4[7];
                    
                    
      ar4[7] = fVar14 * fVar8 + fVar18 * fVar9 + fVar22 * fVar10 + fVar26 * fVar11;
      ar4[6] = fVar15 * fVar8 + fVar19 * fVar9 + fVar23 * fVar10 + fVar27 * fVar11;
      ar4[5] = fVar12 * fVar8 + fVar16 * fVar9 + fVar20 * fVar10 + fVar24 * fVar11;
      ar4[4] = fVar13 * fVar8 + fVar17 * fVar9 + fVar21 * fVar10 + fVar25 * fVar11;
      ar4[3] = fVar14 * fVar1 + fVar18 * fVar3 + fVar22 * fVar4 + fVar26 * fVar7;
      ar4[2] = fVar15 * fVar1 + fVar19 * fVar3 + fVar23 * fVar4 + fVar27 * fVar7;
      ar4[1] = fVar12 * fVar1 + fVar16 * fVar3 + fVar20 * fVar4 + fVar24 * fVar7;
      *ar4 = fVar13 * fVar1 + fVar17 * fVar3 + fVar21 * fVar4 + fVar25 * fVar7;
    }
    if (ar6 != 0) {
      fVar1 = ((float)(ar6 & 0xffff) * 6.2831855) / 65536.0;
      fVar3 = (float)sin(fVar1);
      fVar1 = (float)cos(fVar1);
      fVar3 = (float)fVar3;
      fVar1 = (float)fVar1;
      lVar5 = (ulonglong)(uint)fVar3 << 0x20;
      lVar6 = (ulonglong)(uint)fVar1 << 0x20;
      fVar7 = *ar4;
      fVar4 = ar4[1];
      fVar9 = ar4[2];
      fVar8 = ar4[3];
                    
                    
      fVar10 = fVar12 * 0.0 + fVar16 * fVar3 + fVar20 * 0.0 + fVar24 * fVar1;
      fVar10 = fVar13 * 0.0 + fVar17 * fVar3 + fVar21 * 0.0 + fVar25 * fVar1;
      fVar10 = fVar14 * 0.0 + fVar18 * fVar3 + fVar22 * 0.0 + fVar26 * fVar1;
      fVar1 = fVar15 * 0.0 + fVar19 * fVar3 + fVar23 * 0.0 + fVar27 * fVar1;
      ar4[0xb] = (float)lVar6;
      ar4[10] = (float)((ulonglong)lVar6 >> 0x20);
      ar4[9] = (float)lVar5;
      ar4[8] = (float)((ulonglong)lVar5 >> 0x20);
      ar4[3] = fVar14 * fVar4 + fVar18 * fVar7 + fVar22 * fVar8 + fVar26 * fVar9;
      ar4[2] = fVar15 * fVar4 + fVar19 * fVar7 + fVar23 * fVar8 + fVar27 * fVar9;
      ar4[1] = fVar12 * fVar4 + fVar16 * fVar7 + fVar20 * fVar8 + fVar24 * fVar9;
      *ar4 = fVar13 * fVar4 + fVar17 * fVar7 + fVar21 * fVar8 + fVar25 * fVar9;
    }
    if (ar5 != 0) {
      fVar1 = ((float)(ar5 & 0xffff) * 6.2831855) / 65536.0;
      fVar3 = (float)sin(fVar1);
      fVar1 = (float)cos(fVar1);
      fVar3 = (float)fVar3;
      fVar1 = (float)fVar1;
      lVar6 = (ulonglong)(uint)fVar3 << 0x20;
      uVar2 = (ulonglong)(uint)fVar1;
      fVar8 = ar4[4];
      fVar7 = ar4[5];
      fVar10 = ar4[6];
      fVar9 = ar4[7];
                    
      fVar4 = fVar12 * fVar1 + fVar16 * 0.0 + fVar20 * 0.0 + fVar24 * fVar3;
      fVar4 = fVar13 * fVar1 + fVar17 * 0.0 + fVar21 * 0.0 + fVar25 * fVar3;
      fVar4 = fVar14 * fVar1 + fVar18 * 0.0 + fVar22 * 0.0 + fVar26 * fVar3;
      fVar1 = fVar15 * fVar1 + fVar19 * 0.0 + fVar23 * 0.0 + fVar27 * fVar3;
                    
      ar4[0xb] = fVar14 * fVar7 + fVar18 * fVar8 + fVar22 * fVar9 + fVar26 * fVar10;
      ar4[10] = fVar15 * fVar7 + fVar19 * fVar8 + fVar23 * fVar9 + fVar27 * fVar10;
      ar4[9] = fVar12 * fVar7 + fVar16 * fVar8 + fVar20 * fVar9 + fVar24 * fVar10;
      ar4[8] = fVar13 * fVar7 + fVar17 * fVar8 + fVar21 * fVar9 + fVar25 * fVar10;
      ar4[7] = (float)lVar6;
      ar4[6] = (float)((ulonglong)lVar6 >> 0x20);
      ar4[5] = (float)uVar2;
      ar4[4] = (float)(uVar2 >> 0x20);
    }
    return ain0;
  }
  if (ar7 != 0) {
    fVar20 = ((float)(ar7 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar20);
    cos(fVar20);
  }
  if (ar6 != 0) {
    fVar20 = ((float)(ar6 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar20);
    cos(fVar20);
  }
  if (ar5 != 0) {
    fVar20 = ((float)(ar5 & 0xffff) * 6.2831855) / 65536.0;
    sin(fVar20);
    cos(fVar20);
  }
  return ain0;
}

__asm__(".globl _FUN_8c256b0c\n.set _FUN_8c256b0c, _FUN_8c256b0c_def\n");
