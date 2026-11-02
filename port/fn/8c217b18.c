#include "../decls.h"
int FUN_8c217b18_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_xd0;
  float in_xf3;
  undefined8 in_xd4;
  float in_xf7;
  undefined8 in_xd8;
  undefined8 in_xd10;
  undefined8 in_xd12;
  undefined8 in_xd14;
  
                    
                    
                    
  fVar18 = *(float *)(ar4 + 0x10);
  iVar4 = *(int *)(ar4 + 0x14);
  pfVar5 = *(float **)(ar4 + 0x18);
  iVar9 = *(int *)(ar4 + 0x1c);
  fVar15 = *(float *)(ar4 + 0x24);
  fVar14 = *(float *)(ar4 + 0x28);
  fVar17 = *(float *)(ar4 + 0x2c);
  fVar16 = *(float *)(ar4 + 0x30);
  uVar3 = ar5 >> 8 & 0xff;
  iVar8 = 0;
  do {
    fVar12 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar13 = pfVar5[2];
                    
    fVar1 = (float)in_xd0 * fVar11 + (float)in_xd4 * fVar12 + (float)in_xd8 * 1.0 +
            (float)in_xd12 * fVar13;
    fVar2 = (float)((ulonglong)in_xd0 >> 0x20) * fVar11 +
            (float)((ulonglong)in_xd4 >> 0x20) * fVar12 + (float)((ulonglong)in_xd8 >> 0x20) * 1.0 +
            (float)((ulonglong)in_xd12 >> 0x20) * fVar13;
    fVar11 = in_xf3 * fVar11 + in_xf7 * fVar12 + (float)((ulonglong)in_xd10 >> 0x20) * 1.0 +
             (float)((ulonglong)in_xd14 >> 0x20) * fVar13;
    pfVar6 = pfVar5 + 6;
                    
    pfVar5 = pfVar5 + 7;
    pfVar7 = (float *)(SUB42(*pfVar6,0) * 0x10 + iVar9);
    fVar12 = (float)((uint)*pfVar6 >> 0x10) * 0.0039215684;
    if (uVar3 == 0) {
      pfVar7[3] = fVar12 * 0.0;
      pfVar7[2] = fVar11 * fVar12;
      pfVar7[1] = fVar1 * fVar12;
      *pfVar7 = fVar2 * fVar12;
    }
    else if (uVar3 == 1) {
      fVar15 = fVar12 * fVar11 + pfVar7[2];
      fVar14 = fVar12 * 0.0 + pfVar7[3];
      pfVar7[3] = fVar14;
      pfVar7[2] = fVar15;
      pfVar7[1] = fVar12 * fVar1 + pfVar7[1];
      *pfVar7 = fVar12 * fVar2 + *pfVar7;
    }
    else {
      fVar10 = fVar12 * fVar11 + pfVar7[2];
      fVar11 = fVar12 * 0.0 + pfVar7[3] + fVar18;
      fVar13 = 1.0 / fVar10;
      if (fVar11 <= fVar18) {
        fVar11 = fVar18;
      }
      pfVar7[3] = fVar11;
      if (fVar10 <= 1.0) {
        iVar8 = iVar8 + 1;
      }
      pfVar7[2] = fVar13;
      pfVar7[1] = (fVar12 * fVar1 + pfVar7[1]) * fVar14 * fVar13 + fVar16;
      *pfVar7 = (fVar12 * fVar2 + *pfVar7) * fVar15 * fVar13 + fVar17;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar8;
}

__asm__(".globl _FUN_8c217b18\n.set _FUN_8c217b18, _FUN_8c217b18_def\n");
