#include "../decls.h"
undefined4 FUN_8c23d254_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_xd0;
  float in_xf3;
  float in_xf4;
  float in_xf5;
  undefined8 in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  undefined8 in_xd12;
  undefined8 in_xd14;
  
  fVar4 = _DAT_8c4aa4d8;
  fVar3 = _DAT_8c4aa4d4;
  fVar2 = _DAT_8c4aa4b8;
  fVar1 = _DAT_8c4aa4b4;
  uVar7 = ar4[1];
  pfVar5 = (float *)(uint)ar4[2];
  fVar18 = (float)ar4[4];
  fVar17 = (float)ar4[5];
  uVar10 = ar4[6];
  uVar11 = ar4[7];
  fVar21 = (float)ar4[8];
  fVar22 = (float)ar4[9];
  fVar19 = (float)ar4[10];
  fVar20 = (float)ar4[0xb];
  _DAT_ff000038 = (uVar7 & 0x1c000000) >> 0x18;
  puVar6 = (uint *)(uVar7 & 0x3ffffff | 0xe0000000);
  iVar8 = uVar7 + 0x20;
  _DAT_ff00003c = _DAT_ff000038;
  for (iVar9 = *ar4; iVar9 != 0; iVar9 = iVar9 + -1) {
    CacheBlockInvalidate(iVar8);
    puVar6[0xf] = 0xffffffff;
    fVar14 = *pfVar5;
    fVar12 = pfVar5[1];
    fVar16 = pfVar5[2];
    pfVar5 = pfVar5 + 3;
                    
    fVar13 = (float)in_xd0 * fVar12 + in_xf4 * fVar14 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar16;
    fVar15 = (float)((ulonglong)in_xd0 >> 0x20) * fVar12 + in_xf5 * fVar14 +
             (float)((ulonglong)in_xd8 >> 0x20) * 1.0 + (float)((ulonglong)in_xd12 >> 0x20) * fVar16
    ;
    fVar12 = in_xf3 * fVar12 + (float)((ulonglong)in_xd6 >> 0x20) * fVar14 +
             (float)((ulonglong)in_xd10 >> 0x20) * 1.0 +
             (float)((ulonglong)in_xd14 >> 0x20) * fVar16;
    fVar14 = 1.0 / fVar12;
    puVar6[6] = (uint)fVar12;
    puVar6[5] = (uint)fVar13;
    puVar6[4] = (uint)fVar15;
    CacheBlockInvalidate(iVar8 + -0x20);
    iVar8 = iVar8 + 0x40;
    uVar7 = 0;
    fVar13 = fVar13 * fVar17 * fVar14 + fVar2;
    fVar15 = fVar15 * fVar18 * fVar14 + fVar1;
    if (fVar3 <= fVar12) {
      uVar7 = (((uint)(fVar20 < fVar13) << 1 | (uint)(fVar13 < fVar19)) << 1 |
              (uint)(fVar22 < fVar15)) << 1 | (uint)(fVar15 < fVar21);
    }
    puVar6[3] = (uint)fVar14;
    puVar6[2] = (uint)fVar13;
    uVar7 = (uVar7 << 1 | (uint)(fVar4 < fVar12)) << 1 | (uint)(fVar12 < fVar3);
    puVar6[1] = (uint)fVar15;
    uVar10 = uVar10 & uVar7;
    *puVar6 = uVar7;
    uVar11 = uVar11 | uVar7;
    puVar6 = puVar6 + 0x10;
  }
  ar4[6] = uVar10;
  ar4[7] = uVar11;
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23d254\n.set _FUN_8c23d254, _FUN_8c23d254_def\n");
