#include "../decls.h"
undefined4 FUN_8c23ca50_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
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
  float fVar15;
  float fVar17;
  ulonglong uVar16;
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
  float in_xf10;
  float in_xf11;
  undefined8 in_xd12;
  float fVar25;
  undefined8 in_xd14;
  float fVar26;
  
  fVar3 = _DAT_8c4aa4b8;
  fVar2 = _DAT_8c4aa4b4;
  uVar7 = ar4[1];
  pfVar5 = (float *)(uint)ar4[2];
  pfVar4 = (float *)(uint)ar4[3];
  fVar19 = (float)ar4[4];
  fVar18 = (float)ar4[5];
  _DAT_ff000038 = (uVar7 & 0x1c000000) >> 0x18;
  puVar6 = (undefined4 *)(uVar7 & 0x3ffffff | 0xe0000000);
  iVar8 = uVar7 + 0x20;
  _DAT_ff00003c = _DAT_ff000038;
  for (iVar9 = *ar4; iVar9 != 0; iVar9 = iVar9 + -1) {
    fVar13 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar17 = pfVar4[2];
    uVar16 = (ulonglong)(uint)fVar17 << 0x20;
    pfVar4 = pfVar4 + 3;
    fVar21 = (float)((ulonglong)in_xd2 >> 0x20);
    fVar22 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar23 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar24 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar25 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar26 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar10 = (float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar17;
    fVar20 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar1 = fVar20 * fVar12 + fVar22 * fVar13 + fVar24 * 0.0 + fVar25 * fVar17;
    fVar14 = (float)in_xd2 * fVar12 + (float)in_xd6 * fVar13 + in_xf10 * 0.0 +
             (float)in_xd14 * fVar17;
    fVar12 = fVar21 * fVar12 + fVar23 * fVar13 + in_xf11 * 0.0 + fVar26 * fVar17;
    fVar17 = *pfVar5;
    fVar14 = pfVar5[1];
    fVar11 = pfVar5[2];
    pfVar5 = pfVar5 + 3;
    CacheBlockInvalidate(iVar8);
    uVar16 = uVar16 & 0xffffffff00000000;
                    
    fVar12 = (float)(uVar16 >> 0x20);
    fVar12 = fVar10 * fVar10 + fVar1 * fVar1 + 0.0 + fVar12 * fVar12;
    fVar15 = 1.0 / SQRT((float)uVar16);
    puVar6[0xf] = 0xffffffff;
                    
    fVar12 = (float)in_xd0 * fVar14 + (float)in_xd4 * fVar17 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar11;
    fVar13 = fVar20 * fVar14 + fVar22 * fVar17 + fVar24 * 1.0 + fVar25 * fVar11;
    fVar14 = fVar21 * fVar14 + fVar23 * fVar17 + in_xf11 * 1.0 + fVar26 * fVar11;
    puVar6[0xe] = (float)(uVar16 >> 0x20) * fVar15;
    puVar6[0xd] = fVar10 * fVar15;
    puVar6[0xc] = fVar1 * fVar15;
    fVar10 = 1.0 / fVar14;
    puVar6[6] = fVar14;
    puVar6[5] = fVar12;
    puVar6[4] = fVar13;
    CacheBlockInvalidate(iVar8 + -0x20);
    iVar8 = iVar8 + 0x40;
    puVar6[3] = fVar10;
    puVar6[2] = fVar12 * fVar18 * fVar10 + fVar3;
    puVar6[1] = fVar13 * fVar19 * fVar10 + fVar2;
    *puVar6 = 0;
    puVar6 = puVar6 + 0x10;
  }
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23ca50\n.set _FUN_8c23ca50, _FUN_8c23ca50_def\n");
