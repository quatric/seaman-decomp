#include "../decls.h"
int FUN_8c226980_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong in_dr6;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float in_xf0;
  float in_xf1;
  float in_xf3;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  float in_xf11;
  undefined8 in_xd12;
  undefined8 in_xd14;
  float fVar23;
  bool bVar24;
  bool bVar25;
  
  iVar9 = *ar4;
  pfVar10 = (float *)(uint)ar4[1];
  iVar11 = ar4[2];
  iVar12 = ar4[3];
  iVar13 = 0;
  do {
    fVar21 = *pfVar10;
    fVar20 = pfVar10[1];
    fVar22 = pfVar10[2];
    fVar14 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar16 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar17 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar23 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar1 = in_xf0 * fVar20 + (float)in_xd4 * fVar21 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar22
    ;
    fVar15 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar2 = in_xf1 * fVar20 + fVar14 * fVar21 + fVar15 * 1.0 + fVar17 * fVar22;
    fVar3 = in_xf3 * fVar20 + fVar16 * fVar21 + in_xf11 * 1.0 + fVar23 * fVar22;
    fVar18 = pfVar10[3];
    fVar20 = pfVar10[4];
    fVar19 = pfVar10[5];
    pfVar10 = pfVar10 + 6;
                    
    fVar21 = in_xf0 * fVar20 + (float)in_xd4 * fVar18 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar19;
    fVar22 = in_xf1 * fVar20 + fVar14 * fVar18 + fVar15 * 0.0 + fVar17 * fVar19;
    fVar20 = in_xf3 * fVar20 + fVar16 * fVar18 + in_xf11 * 0.0 + fVar23 * fVar19;
    fVar18 = 0.0;
    pfVar4 = (float *)0x8c4c0ee0;
    fVar19 = 0.0;
    fVar14 = 0.0;
    uVar7 = _DAT_8c4c0ed0;
    do {
      bVar24 = (uVar7 & 1) != 0;
      uVar7 = uVar7 >> 1 | (uint)bVar24 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar25 = (uVar7 & 1) != 0;
            uVar7 = uVar7 >> 1;
            uVar8 = uVar7 | (uint)bVar25 << 0x1f;
            if (bVar24) break;
            bVar25 = (uVar7 & 1) != 0;
            pfVar4 = pfVar4 + 8;
            if (bVar25) goto LAB_8c226a50;
            bVar24 = (uVar7 & 2) != 0;
            uVar7 = (uVar8 >> 1 | (uint)bVar25 << 0x1f) >> 1 | (uint)bVar24 << 0x1f;
          }
          if (bVar25) break;
                    
          fVar20 = fVar21 * pfVar4[1] + fVar22 * *pfVar4 + (float)in_dr6 * 0.0 + fVar20 * pfVar4[2];
          in_dr6 = 0;
          pfVar4 = pfVar4 + 8;
          bVar25 = (uVar7 & 1) != 0;
          if (bVar25) goto LAB_8c226a50;
          bVar24 = (uVar7 & 2) != 0;
          uVar7 = (uVar8 >> 1 | (uint)bVar25 << 0x1f) >> 1 | (uint)bVar24 << 0x1f;
        }
        fVar15 = *pfVar4 - fVar2;
        fVar16 = pfVar4[1] - fVar1;
        fVar17 = pfVar4[2] - fVar3;
        in_dr6 = 0;
                    
        fVar20 = fVar21 * fVar16 + fVar22 * fVar15 + 0.0 + fVar20 * fVar17;
                    
        fVar16 = fVar16 * fVar16 + fVar15 * fVar15 + 0.0 + fVar17 * fVar17;
        fVar15 = (float)in_dr6;
        fVar16 = 1.0 / SQRT(fVar15);
        if (fVar15 < pfVar4[3] == true) break;
        bVar25 = (uVar7 & 1) != 0;
        pfVar4 = pfVar4 + 8;
        if (bVar25) goto LAB_8c226a50;
        bVar24 = (uVar7 & 2) != 0;
        uVar7 = (uVar8 >> 1 | (uint)bVar25 << 0x1f) >> 1 | (uint)bVar24 << 0x1f;
      }
      fVar17 = fVar16 * 0.0;
      pfVar5 = pfVar4 + 6;
      if (pfVar4[4] < fVar15) {
        fVar17 = fVar17 * pfVar4[4] * fVar16 * fVar16;
      }
      bVar24 = (uVar7 & 1) != 0;
      uVar7 = uVar8 >> 1 | (uint)bVar24 << 0x1f;
      pfVar6 = pfVar4 + 7;
      fVar18 = fVar17 * pfVar4[5] + fVar18;
      in_dr6 = CONCAT44(*pfVar6,fVar15);
      pfVar4 = pfVar4 + 8;
      fVar14 = fVar17 * *pfVar5 + fVar14;
      fVar19 = fVar17 * *pfVar6 + fVar19;
    } while (!bVar24);
LAB_8c226a50:
    fVar21 = (float)ar4[5];
    fVar16 = (float)ar4[7];
    *(float *)(iVar12 + 0x1c) = fVar19;
    *(float *)(iVar12 + 0x18) = fVar14;
    *(float *)(iVar12 + 0x14) = fVar18;
    *(undefined4 *)(iVar12 + 0x10) = 0x3f800000;
    fVar16 = (1.0 / fVar3) * fVar21 * fVar1 + fVar16;
    in_dr6 = (ulonglong)(uint)fVar16;
    *(float *)(iVar12 + 0xc) = 1.0 / fVar3;
    *(float *)(iVar12 + 8) = fVar16;
    iVar9 = iVar9 + -1;
    *(float *)(iVar12 + 4) = fVar3;
    CacheBlockInvalidate(iVar11);
    iVar13 = iVar13 + (uint)(fVar3 < 1.0);
    *(float *)(iVar12 + 0x40) = fVar14 - 1.0;
    *(float *)(iVar12 + 0x3c) = fVar20;
    *(float *)(iVar12 + 0x38) = fVar22;
    *(float *)(iVar12 + 0x34) = fVar2;
    CacheBlockInvalidate(iVar11 + 0x20);
    iVar11 = iVar11 + 0x40;
    if (iVar9 == 0) {
      return iVar13;
    }
    iVar12 = iVar12 + 0x54;
  } while( true );
}

__asm__(".globl _FUN_8c226980\n.set _FUN_8c226980, _FUN_8c226980_def\n");
