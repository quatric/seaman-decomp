#include "../decls.h"
int FUN_8c21768c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_fr5;
  float fVar12;
  float in_fr7;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float in_fr9;
  float in_fr11;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 in_xd0;
  undefined8 in_xd2;
  float in_xf4;
  float in_xf5;
  float in_xf7;
  float in_xf8;
  float in_xf9;
  undefined8 in_xd10;
  undefined8 in_xd12;
  undefined8 in_xd14;
  undefined8 uVar15;
  
                    
  uVar15 = CONCAT44(in_fr7,in_fr7);
                    
  fVar16 = in_fr5 * *(float *)(ar4 + 4) + in_fr5 * *(float *)ar4 + in_fr7 * 0.0 +
           in_fr7 * *(float *)(ar4 + 8);
  uVar19 = CONCAT44(in_fr11,in_fr11);
                    
  fVar16 = in_fr9 * *(float *)(ar4 + 4) + in_fr9 * *(float *)ar4 + in_fr11 * 0.0 +
           in_fr11 * *(float *)(ar4 + 8);
  fVar20 = *(float *)(ar4 + 0x10);
  iVar4 = *(int *)(ar4 + 0x14);
  pfVar6 = *(float **)(ar4 + 0x18);
  iVar8 = *(int *)(ar4 + 0x1c);
  pfVar5 = *(float **)(ar4 + 0x20);
  fVar9 = *(float *)(ar4 + 0x24);
  fVar16 = *(float *)(ar4 + 0x28);
  fVar11 = *(float *)(ar4 + 0x2c);
  fVar10 = *(float *)(ar4 + 0x30);
  bVar3 = false;
  iVar7 = 0;
  do {
    fVar12 = *pfVar6;
    fVar13 = (float)uVar15;
    fVar17 = pfVar6[1];
                    
    fVar1 = (float)((ulonglong)in_xd0 >> 0x20) * in_fr5;
    fVar2 = (float)((ulonglong)in_xd2 >> 0x20) * in_fr5 + in_xf7 * fVar12 +
            (float)((ulonglong)in_xd10 >> 0x20) * fVar13 +
            (float)((ulonglong)in_xd14 >> 0x20) * fVar17;
    pfVar6 = pfVar6 + 4;
                    
    fVar14 = 1.0 / fVar2;
    uVar15 = CONCAT44(fVar2,fVar14);
    fVar18 = (float)uVar19;
    if ((float)uVar19 <= fVar20) {
      fVar18 = fVar20;
    }
    pfVar5[3] = fVar18;
    uVar19 = 0x3f800000;
    if (fVar2 <= 1.0) {
      iVar7 = iVar7 + 1;
    }
    pfVar5[2] = fVar14;
    in_fr5 = ((float)in_xd0 * in_fr5 + in_xf4 * fVar12 + in_xf8 * fVar13 + (float)in_xd12 * fVar17)
             * fVar16 * fVar14 + fVar10;
    bVar3 = (bool)(bVar3 ^ 1);
    pfVar5[1] = in_fr5;
    *pfVar5 = (fVar1 + in_xf5 * fVar12 + in_xf9 * fVar13 +
              (float)((ulonglong)in_xd12 >> 0x20) * fVar17) * fVar9 * fVar14 + fVar11;
    if (!bVar3) {
      CacheBlockInvalidate(iVar8);
      iVar8 = iVar8 + 0x20;
    }
    iVar4 = iVar4 + -1;
    pfVar5 = pfVar5 + 4;
  } while (iVar4 != 0);
  if (bVar3) {
    CacheBlockInvalidate(iVar8);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c21768c\n.set _FUN_8c21768c, _FUN_8c21768c_def\n");
