#include "../decls.h"
undefined4 FUN_8c23cc40_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_xd0;
  float in_xf3;
  float in_xf4;
  float in_xf5;
  undefined8 in_xd6;
  undefined8 in_xd8;
  float in_xf11;
  undefined8 in_xd12;
  undefined8 in_xd14;
  
  fVar4 = _DAT_8c4aa4b8;
  fVar3 = _DAT_8c4aa4b4;
  uVar7 = ar4[1];
  pfVar5 = (float *)(uint)ar4[2];
  fVar14 = (float)ar4[4];
  fVar13 = (float)ar4[5];
  _DAT_ff000038 = (uVar7 & 0x1c000000) >> 0x18;
  puVar6 = (undefined4 *)(uVar7 & 0x3ffffff | 0xe0000000);
  iVar8 = uVar7 + 0x20;
  _DAT_ff00003c = _DAT_ff000038;
  for (iVar9 = *ar4; iVar9 != 0; iVar9 = iVar9 + -1) {
    CacheBlockInvalidate(iVar8);
    puVar6[0xf] = 0xffffffff;
    fVar11 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar12 = pfVar5[2];
    pfVar5 = pfVar5 + 3;
                    
    fVar1 = (float)in_xd0 * fVar10 + in_xf4 * fVar11 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar12
    ;
    fVar2 = (float)((ulonglong)in_xd0 >> 0x20) * fVar10 + in_xf5 * fVar11 +
            (float)((ulonglong)in_xd8 >> 0x20) * 1.0 + (float)((ulonglong)in_xd12 >> 0x20) * fVar12;
    fVar10 = in_xf3 * fVar10 + (float)((ulonglong)in_xd6 >> 0x20) * fVar11 + in_xf11 * 1.0 +
             (float)((ulonglong)in_xd14 >> 0x20) * fVar12;
    fVar11 = 1.0 / fVar10;
    puVar6[6] = fVar10;
    puVar6[5] = fVar1;
    puVar6[4] = fVar2;
    CacheBlockInvalidate(iVar8 + -0x20);
    iVar8 = iVar8 + 0x40;
    puVar6[3] = fVar11;
    puVar6[2] = fVar1 * fVar13 * fVar11 + fVar4;
    puVar6[1] = fVar2 * fVar14 * fVar11 + fVar3;
    *puVar6 = 0;
    puVar6 = puVar6 + 0x10;
  }
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23cc40\n.set _FUN_8c23cc40, _FUN_8c23cc40_def\n");
