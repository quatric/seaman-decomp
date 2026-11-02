#include "../decls.h"
int FUN_8c2178a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  bool bVar2;
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
  undefined8 in_xd0;
  undefined8 in_xd2;
  undefined8 in_xd4;
  float in_xf7;
  undefined8 in_xd8;
  float in_xf11;
  float in_xf12;
  float in_xf13;
  float in_xf15;
  
  iVar3 = *(int *)(ar4 + 0x14);
  pfVar5 = *(float **)(ar4 + 0x18);
  iVar8 = *(int *)(ar4 + 0x1c);
  pfVar4 = *(float **)(ar4 + 0x20);
  fVar10 = *(float *)(ar4 + 0x24);
  fVar9 = *(float *)(ar4 + 0x28);
  fVar12 = *(float *)(ar4 + 0x2c);
  fVar11 = *(float *)(ar4 + 0x30);
  bVar2 = false;
  iVar7 = 0;
  do {
    fVar14 = *pfVar5;
    fVar13 = pfVar5[1];
    fVar15 = pfVar5[2];
    pfVar6 = pfVar5 + 3;
                    
    fVar1 = (float)((ulonglong)in_xd2 >> 0x20) * fVar13 + in_xf7 * fVar14 + in_xf11 * 1.0 +
            in_xf15 * fVar15;
    pfVar5 = pfVar5 + 4;
    fVar16 = 1.0 / fVar1;
    pfVar4[3] = (float)(int)(short)((uint)*pfVar6 >> 0x10) * 3.0517576e-05;
    if (fVar1 <= 1.0) {
      iVar7 = iVar7 + 1;
    }
    pfVar4[2] = fVar16;
    bVar2 = (bool)(bVar2 ^ 1);
    pfVar4[1] = ((float)in_xd0 * fVar13 + (float)in_xd4 * fVar14 + (float)in_xd8 * 1.0 +
                in_xf12 * fVar15) * fVar9 * fVar16 + fVar11;
    *pfVar4 = ((float)((ulonglong)in_xd0 >> 0x20) * fVar13 +
               (float)((ulonglong)in_xd4 >> 0x20) * fVar14 +
               (float)((ulonglong)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar15) * fVar10 * fVar16 +
              fVar12;
    if (!bVar2) {
      CacheBlockInvalidate(iVar8);
      iVar8 = iVar8 + 0x20;
    }
    iVar3 = iVar3 + -1;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 != 0);
  if (bVar2) {
    CacheBlockInvalidate(iVar8);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c2178a0\n.set _FUN_8c2178a0, _FUN_8c2178a0_def\n");
