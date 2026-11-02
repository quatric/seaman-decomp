#include "../decls.h"
undefined4 FUN_8c23cb50_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
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
  float fVar17;
  undefined8 in_xd2;
  float fVar18;
  undefined8 in_xd4;
  float fVar19;
  undefined8 in_xd6;
  float fVar20;
  undefined8 in_xd8;
  float fVar21;
  float in_xf11;
  undefined8 in_xd12;
  float fVar22;
  undefined8 in_xd14;
  float fVar23;
  
  fVar2 = _DAT_8c4aa4b8;
  fVar1 = _DAT_8c4aa4b4;
  uVar6 = ar4[1];
  pfVar4 = (float *)(uint)ar4[2];
  pfVar3 = (float *)(uint)ar4[3];
  fVar16 = (float)ar4[4];
  fVar15 = (float)ar4[5];
  _DAT_ff000038 = (uVar6 & 0x1c000000) >> 0x18;
  puVar5 = (undefined4 *)(uVar6 & 0x3ffffff | 0xe0000000);
  iVar7 = uVar6 + 0x20;
  _DAT_ff00003c = _DAT_ff000038;
  for (iVar8 = *ar4; iVar8 != 0; iVar8 = iVar8 + -1) {
    fVar13 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar14 = pfVar3[2];
    pfVar3 = pfVar3 + 3;
    fVar18 = (float)((ulonglong)in_xd2 >> 0x20);
    fVar19 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar20 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar21 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar22 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar23 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar17 = (float)((ulonglong)in_xd0 >> 0x20);
    CacheBlockInvalidate(iVar7);
    fVar10 = *pfVar4;
    fVar9 = pfVar4[1];
    fVar11 = pfVar4[2];
    pfVar4 = pfVar4 + 3;
    puVar5[0xf] = 0xffffffff;
    puVar5[0xe] = fVar18 * fVar12 + fVar20 * fVar13 + in_xf11 * 0.0 + fVar23 * fVar14;
    puVar5[0xd] = (float)in_xd0 * fVar12 + (float)in_xd4 * fVar13 + (float)in_xd8 * 0.0 +
                  (float)in_xd12 * fVar14;
    puVar5[0xc] = fVar17 * fVar12 + fVar19 * fVar13 + fVar21 * 0.0 + fVar22 * fVar14;
                    
    fVar12 = (float)in_xd0 * fVar9 + (float)in_xd4 * fVar10 + (float)in_xd8 * 1.0 +
             (float)in_xd12 * fVar11;
    fVar13 = fVar17 * fVar9 + fVar19 * fVar10 + fVar21 * 1.0 + fVar22 * fVar11;
    fVar9 = fVar18 * fVar9 + fVar20 * fVar10 + in_xf11 * 1.0 + fVar23 * fVar11;
    fVar10 = 1.0 / fVar9;
    puVar5[6] = fVar9;
    puVar5[5] = fVar12;
    puVar5[4] = fVar13;
    CacheBlockInvalidate(iVar7 + -0x20);
    iVar7 = iVar7 + 0x40;
    puVar5[3] = fVar10;
    puVar5[2] = fVar12 * fVar15 * fVar10 + fVar2;
    puVar5[1] = fVar13 * fVar16 * fVar10 + fVar1;
    *puVar5 = 0;
    puVar5 = puVar5 + 0x10;
  }
  return 0x3ffffff;
}

__asm__(".globl _FUN_8c23cb50\n.set _FUN_8c23cb50, _FUN_8c23cb50_def\n");
