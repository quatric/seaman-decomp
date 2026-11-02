#include "../decls.h"
int FUN_8c21782c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_xd0;
  undefined8 in_xd2;
  undefined8 in_xd4;
  float in_xf7;
  undefined8 in_xd8;
  undefined8 in_xd10;
  float in_xf13;
  float in_xf15;
  
  iVar3 = *(int *)(ar4 + 0x14);
  pfVar5 = *(float **)(ar4 + 0x18);
  iVar7 = *(int *)(ar4 + 0x1c);
  iVar4 = *(int *)(ar4 + 0x20);
  fVar12 = *(float *)(ar4 + 0x24);
  fVar13 = *(float *)(ar4 + 0x2c);
  bVar2 = false;
  iVar6 = 0;
  do {
    fVar10 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar11 = pfVar5[2];
                    
    fVar1 = (float)((ulonglong)in_xd2 >> 0x20) * fVar9 + in_xf7 * fVar10 +
            (float)((ulonglong)in_xd10 >> 0x20) * 1.0 + in_xf15 * fVar11;
    fVar8 = 1.0 / fVar1;
    pfVar5 = pfVar5 + 4;
    if (fVar1 <= 1.0) {
      iVar6 = iVar6 + 1;
    }
    bVar2 = (bool)(bVar2 ^ 1);
    *(float *)(iVar4 + 0xc) = fVar8;
    *(float *)(iVar4 + 8) =
         fVar8 * ((float)((ulonglong)in_xd0 >> 0x20) * fVar9 +
                  (float)((ulonglong)in_xd4 >> 0x20) * fVar10 +
                  (float)((ulonglong)in_xd8 >> 0x20) * 1.0 + in_xf13 * fVar11) * fVar12 + fVar13;
    if (!bVar2) {
      CacheBlockInvalidate(iVar7);
      iVar7 = iVar7 + 0x20;
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 0x18;
  } while (iVar3 != 0);
  if (bVar2) {
    CacheBlockInvalidate(iVar7);
  }
  return iVar6;
}

__asm__(".globl _FUN_8c21782c\n.set _FUN_8c21782c, _FUN_8c21782c_def\n");
