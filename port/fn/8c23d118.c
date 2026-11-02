#include "../decls.h"
undefined4 FUN_8c23d118_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
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
  float fVar23;
  undefined8 in_xd0;
  float fVar24;
  undefined8 in_xd2;
  float fVar25;
  undefined8 in_xd4;
  float fVar26;
  undefined8 in_xd6;
  float fVar27;
  undefined8 in_xd8;
  float fVar28;
  undefined8 in_xd10;
  float fVar29;
  undefined8 in_xd12;
  float fVar30;
  undefined8 in_xd14;
  float fVar31;
  
  fVar4 = _DAT_8c4aa4d8;
  fVar3 = _DAT_8c4aa4d4;
  fVar2 = _DAT_8c4aa4b8;
  fVar1 = _DAT_8c4aa4b4;
  uVar8 = ar4[1];
  pfVar6 = (float *)(uint)ar4[2];
  pfVar5 = (float *)(uint)ar4[3];
  fVar19 = (float)ar4[4];
  fVar18 = (float)ar4[5];
  uVar11 = ar4[6];
  uVar12 = ar4[7];
  fVar22 = (float)ar4[8];
  fVar23 = (float)ar4[9];
  fVar20 = (float)ar4[10];
  fVar21 = (float)ar4[0xb];
  _DAT_ff000038 = (uVar8 & 0x1c000000) >> 0x18;
  puVar7 = (uint *)(uVar8 & 0x3ffffff | 0xe0000000);
  iVar9 = uVar8 + 0x20;
  _DAT_ff00003c = _DAT_ff000038;
  for (iVar10 = *ar4; iVar10 != 0; iVar10 = iVar10 + -1) {
    fVar16 = *pfVar5;
    fVar15 = pfVar5[1];
    fVar17 = pfVar5[2];
    pfVar5 = pfVar5 + 3;
    fVar25 = (float)((ulonglong)in_xd2 >> 0x20);
    fVar26 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar27 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar28 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar29 = (float)((ulonglong)in_xd10 >> 0x20);
    fVar30 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar31 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar24 = (float)((ulonglong)in_xd0 >> 0x20);
    CacheBlockInvalidate(iVar9);
    puVar7[0xf] = 0xffffffff;
    puVar7[0xe] = (uint)(fVar25 * fVar15 + fVar27 * fVar16 + fVar29 * 0.0 + fVar31 * fVar17);
    puVar7[0xd] = (uint)((float)in_xd0 * fVar15 + (float)in_xd4 * fVar16 + (float)in_xd8 * 0.0 +
                        (float)in_xd12 * fVar17);
    puVar7[0xc] = (uint)(fVar24 * fVar15 + fVar26 * fVar16 + fVar28 * 0.0 + fVar30 * fVar17);
    fVar13 = *pfVar6;
    fVar17 = pfVar6[1];
    fVar14 = pfVar6[2];
    pfVar6 = pfVar6 + 3;
                    
    fVar15 = (float)in_xd0 * fVar17 + (float)in_xd4 * fVar13 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar14;
    fVar16 = fVar24 * fVar17 + fVar26 * fVar13 + fVar28 * 1.0 + fVar30 * fVar14;
    fVar17 = fVar25 * fVar17 + fVar27 * fVar13 + fVar29 * 1.0 + fVar31 * fVar14;
    fVar13 = 1.0 / fVar17;
    puVar7[6] = (uint)fVar17;
    puVar7[5] = (uint)fVar15;
    puVar7[4] = (uint)fVar16;
    CacheBlockInvalidate(iVar9 + -0x20);
    iVar9 = iVar9 + 0x40;
    uVar8 = 0;
    fVar15 = fVar15 * fVar18 * fVar13 + fVar2;
    fVar16 = fVar16 * fVar19 * fVar13 + fVar1;
    if (fVar3 <= fVar17) {
      uVar8 = (((uint)(fVar21 < fVar15) << 1 | (uint)(fVar15 < fVar20)) << 1 |
              (uint)(fVar23 < fVar16)) << 1 | (uint)(fVar16 < fVar22);
    }
    puVar7[3] = (uint)fVar13;
    puVar7[2] = (uint)fVar15;
    uVar8 = (uVar8 << 1 | (uint)(fVar4 < fVar17)) << 1 | (uint)(fVar17 < fVar3);
    puVar7[1] = (uint)fVar16;
    uVar11 = uVar11 & uVar8;
    *puVar7 = uVar8;
    uVar12 = uVar12 | uVar8;
    puVar7 = puVar7 + 0x10;
  }
  ar4[6] = uVar11;
  ar4[7] = uVar12;
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23d118\n.set _FUN_8c23d118, _FUN_8c23d118_def\n");
