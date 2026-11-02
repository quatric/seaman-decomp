#include "../decls.h"
int FUN_8c232cd0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_xd0;
  float fVar20;
  undefined8 in_xd2;
  float fVar21;
  undefined8 in_xd4;
  float fVar22;
  undefined8 in_xd6;
  float fVar23;
  undefined8 in_xd8;
  float fVar24;
  undefined8 in_xd10;
  float fVar25;
  undefined8 in_xd12;
  float fVar26;
  undefined8 in_xd14;
  float fVar27;
  
  iVar3 = *(int *)(ar4 + 0x14);
  pfVar4 = *(float **)(ar4 + 0x18);
  iVar8 = *(int *)(ar4 + 0x1c);
  fVar17 = *(float *)(ar4 + 0x24);
  fVar16 = *(float *)(ar4 + 0x28);
  fVar19 = *(float *)(ar4 + 0x2c);
  fVar18 = *(float *)(ar4 + 0x30);
  uVar2 = ar5 >> 8 & 0xff;
  iVar7 = 0;
  do {
    fVar14 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar15 = pfVar4[2];
    fVar21 = (float)((ulonglong)in_xd2 >> 0x20);
    fVar22 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar23 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar24 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar25 = (float)((ulonglong)in_xd10 >> 0x20);
    fVar26 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar27 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar11 = (float)in_xd0 * fVar13 + (float)in_xd4 * fVar14 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar15;
    fVar20 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar1 = fVar20 * fVar13 + fVar22 * fVar14 + fVar24 * 1.0 + fVar26 * fVar15;
    fVar15 = fVar21 * fVar13 + fVar23 * fVar14 + fVar25 * 1.0 + fVar27 * fVar15;
    fVar10 = pfVar4[3];
    fVar9 = pfVar4[4];
    fVar12 = pfVar4[5];
    pfVar5 = pfVar4 + 6;
                    
    fVar13 = (float)in_xd0 * fVar9 + (float)in_xd4 * fVar10 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar12;
    fVar14 = fVar20 * fVar9 + fVar22 * fVar10 + fVar24 * 0.0 + fVar26 * fVar12;
    fVar9 = fVar21 * fVar9 + fVar23 * fVar10 + fVar25 * 0.0 + fVar27 * fVar12;
    pfVar4 = pfVar4 + 7;
    pfVar6 = (float *)(SUB42(*pfVar5,0) * 0x20 + iVar8);
    fVar10 = (float)((uint)*pfVar5 >> 0x10) * 0.0039215684;
    if (uVar2 == 0) {
      *pfVar6 = 0.0;
      pfVar6[7] = fVar9 * fVar10;
      pfVar6[6] = fVar14 * fVar10;
      pfVar6[5] = fVar15 * fVar10;
      pfVar6[4] = fVar1 * fVar10;
    }
    else if (uVar2 == 1) {
      *pfVar6 = fVar10 * fVar1 + *pfVar6;
      pfVar6[1] = fVar10 * fVar11 + pfVar6[1];
      pfVar6[2] = fVar10 * fVar15 + pfVar6[2];
      pfVar6[4] = fVar10 * fVar14 + pfVar6[4];
      pfVar6[5] = fVar10 * fVar13 + pfVar6[5];
      pfVar6[6] = fVar10 * fVar9 + pfVar6[6];
    }
    else {
      fVar9 = *pfVar6;
      fVar15 = fVar10 * fVar15 + pfVar6[2];
      fVar14 = fVar10 * fVar14 + pfVar6[4];
      fVar12 = 1.0 / fVar15;
      *pfVar6 = fVar15;
                    
      pfVar6[7] = fVar10 * fVar13 + pfVar6[5];
      pfVar6[6] = fVar14;
      pfVar6[4] = fVar14;
      if (fVar15 <= 1.0) {
        iVar7 = iVar7 + 1;
      }
      pfVar6[3] = fVar12;
      pfVar6[2] = (fVar10 * fVar11 + pfVar6[1]) * fVar16 * fVar12 + fVar18;
      fVar11 = fVar14 * fVar14 * fVar14 * fVar14;
      pfVar6[1] = (fVar10 * fVar1 + fVar9) * fVar17 * fVar12 + fVar19;
      fVar11 = fVar11 * fVar11;
      pfVar6[5] = fVar11 * fVar11 * fVar14;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar7;
}

__asm__(".globl _FUN_8c232cd0\n.set _FUN_8c232cd0, _FUN_8c232cd0_def\n");
