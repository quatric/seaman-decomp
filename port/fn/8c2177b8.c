#include "../decls.h"
int FUN_8c2177b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_xd0;
  undefined8 in_xd2;
  undefined8 in_xd4;
  float in_xf7;
  float in_xf8;
  float in_xf9;
  float in_xf11;
  float in_xf12;
  float in_xf13;
  float in_xf15;
  
  iVar3 = *(int *)(ar4 + 0x14);
  pfVar5 = *(float **)(ar4 + 0x18);
  iVar7 = *(int *)(ar4 + 0x1c);
  pfVar4 = *(float **)(ar4 + 0x20);
  fVar9 = *(float *)(ar4 + 0x24);
  fVar8 = *(float *)(ar4 + 0x28);
  fVar11 = *(float *)(ar4 + 0x2c);
  fVar10 = *(float *)(ar4 + 0x30);
  bVar2 = false;
  iVar6 = 0;
  do {
    fVar13 = *pfVar5;
    fVar12 = pfVar5[1];
    fVar14 = pfVar5[2];
                    
    fVar1 = (float)((ulonglong)in_xd2 >> 0x20) * fVar12 + in_xf7 * fVar13 + in_xf11 * 1.0 +
            in_xf15 * fVar14;
    fVar15 = 1.0 / fVar1;
    pfVar5 = pfVar5 + 4;
    pfVar4[3] = 1.0;
    if (fVar1 <= 1.0) {
      iVar6 = iVar6 + 1;
    }
    pfVar4[2] = fVar15;
    bVar2 = (bool)(bVar2 ^ 1);
    pfVar4[1] = ((float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + in_xf8 * 1.0 + in_xf12 * fVar14)
                * fVar8 * fVar15 + fVar10;
    *pfVar4 = ((float)((ulonglong)in_xd0 >> 0x20) * fVar12 +
               (float)((ulonglong)in_xd4 >> 0x20) * fVar13 + in_xf9 * 1.0 + in_xf13 * fVar14) *
              fVar9 * fVar15 + fVar11;
    if (!bVar2) {
      CacheBlockInvalidate(iVar7);
      iVar7 = iVar7 + 0x20;
    }
    iVar3 = iVar3 + -1;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 != 0);
  if (bVar2) {
    CacheBlockInvalidate(iVar7);
  }
  return iVar6;
}

__asm__(".globl _FUN_8c2177b8\n.set _FUN_8c2177b8, _FUN_8c2177b8_def\n");
