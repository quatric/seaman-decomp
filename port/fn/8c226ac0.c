#include "../decls.h"
int FUN_8c226ac0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_dr6;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_xf0;
  float in_xf1;
  float in_xf3;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  float in_xf11;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar25;
  bool bVar26;
  
  iVar9 = *ar4;
  pfVar10 = (float *)(uint)ar4[1];
  iVar11 = ar4[2];
  pfVar12 = (float *)(uint)ar4[3];
  iVar13 = 0;
  do {
    fVar23 = *pfVar10;
    fVar22 = pfVar10[1];
    fVar24 = pfVar10[2];
    fVar15 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar14 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar17 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar18 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar1 = in_xf0 * fVar22 + (float)in_xd4 * fVar23 + (float)in_xd8 * 1.0 + (float)in_xd12 * fVar24
    ;
    fVar16 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar2 = in_xf1 * fVar22 + fVar15 * fVar23 + fVar16 * 1.0 + fVar17 * fVar24;
    fVar3 = in_xf3 * fVar22 + fVar14 * fVar23 + in_xf11 * 1.0 + fVar18 * fVar24;
    fVar20 = pfVar10[3];
    fVar22 = pfVar10[4];
    fVar21 = pfVar10[5];
                    
    fVar23 = in_xf0 * fVar22 + (float)in_xd4 * fVar20 + (float)in_xd8 * 0.0 +
             (float)in_xd12 * fVar21;
    fVar24 = in_xf1 * fVar22 + fVar15 * fVar20 + fVar16 * 0.0 + fVar17 * fVar21;
    fVar22 = in_xf3 * fVar22 + fVar14 * fVar20 + in_xf11 * 0.0 + fVar18 * fVar21;
    fVar20 = 0.0;
    pfVar4 = (float *)0x8c4c0ee0;
    fVar21 = 0.0;
    fVar15 = 0.0;
    uVar7 = _DAT_8c4c0ed0;
    do {
      bVar25 = (uVar7 & 1) != 0;
      uVar7 = uVar7 >> 1 | (uint)bVar25 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar26 = (uVar7 & 1) != 0;
            uVar7 = uVar7 >> 1;
            uVar8 = uVar7 | (uint)bVar26 << 0x1f;
            if (bVar25) break;
            bVar26 = (uVar7 & 1) != 0;
            pfVar4 = pfVar4 + 8;
            if (bVar26) goto LAB_8c226b98;
            bVar25 = (uVar7 & 2) != 0;
            uVar7 = (uVar8 >> 1 | (uint)bVar26 << 0x1f) >> 1 | (uint)bVar25 << 0x1f;
          }
          if (bVar26) break;
                    
          fVar22 = fVar23 * pfVar4[1] + fVar24 * *pfVar4 + (float)in_dr6 * 0.0 + fVar22 * pfVar4[2];
          in_dr6 = 0;
          pfVar4 = pfVar4 + 8;
          bVar26 = (uVar7 & 1) != 0;
          if (bVar26) goto LAB_8c226b98;
          bVar25 = (uVar7 & 2) != 0;
          uVar7 = (uVar8 >> 1 | (uint)bVar26 << 0x1f) >> 1 | (uint)bVar25 << 0x1f;
        }
        fVar16 = *pfVar4 - fVar2;
        fVar14 = pfVar4[1] - fVar1;
        fVar17 = pfVar4[2] - fVar3;
        in_dr6 = 0;
                    
        fVar22 = fVar23 * fVar14 + fVar24 * fVar16 + 0.0 + fVar22 * fVar17;
                    
        fVar14 = fVar14 * fVar14 + fVar16 * fVar16 + 0.0 + fVar17 * fVar17;
        fVar16 = (float)in_dr6;
        fVar14 = 1.0 / SQRT(fVar16);
        if (fVar16 < pfVar4[3] == true) break;
        bVar26 = (uVar7 & 1) != 0;
        pfVar4 = pfVar4 + 8;
        if (bVar26) goto LAB_8c226b98;
        bVar25 = (uVar7 & 2) != 0;
        uVar7 = (uVar8 >> 1 | (uint)bVar26 << 0x1f) >> 1 | (uint)bVar25 << 0x1f;
      }
      fVar17 = fVar14 * 0.0;
      pfVar5 = pfVar4 + 6;
      if (pfVar4[4] < fVar16) {
        fVar17 = fVar17 * pfVar4[4] * fVar14 * fVar14;
      }
      bVar25 = (uVar7 & 1) != 0;
      uVar7 = uVar8 >> 1 | (uint)bVar25 << 0x1f;
      pfVar6 = pfVar4 + 7;
      fVar20 = fVar17 * pfVar4[5] + fVar20;
      in_dr6 = CONCAT44(*pfVar6,fVar16);
      pfVar4 = pfVar4 + 8;
      fVar15 = fVar17 * *pfVar5 + fVar15;
      fVar21 = fVar17 * *pfVar6 + fVar21;
    } while (!bVar25);
LAB_8c226b98:
    fVar23 = pfVar10[6];
    fVar14 = 1.0 / fVar3;
    fVar17 = (float)ar4[4];
    fVar16 = (float)ar4[5];
    fVar19 = (float)ar4[6];
    fVar18 = (float)ar4[7];
    fVar15 = fVar15 * (float)((uint)fVar23 >> 8 & 0xff) * 0.0078125;
    pfVar12[7] = fVar21 * (float)((uint)fVar23 & 0xff) * 0.0078125;
    pfVar12[6] = fVar15;
    pfVar12[5] = fVar20 * (float)((uint)fVar23 >> 0x10 & 0xff) * 0.0078125;
    pfVar12[4] = (float)((uint)fVar23 >> 0x18) * 0.0078125;
    fVar18 = fVar14 * fVar16 * fVar1 + fVar18;
    pfVar12[3] = fVar14;
    fVar19 = fVar14 * fVar17 * fVar2 + fVar19;
    in_dr6 = CONCAT44(fVar19,fVar18);
    pfVar12[2] = fVar18;
    pfVar12[1] = fVar19;
    pfVar10 = pfVar10 + 7;
    iVar9 = iVar9 + -1;
    CacheBlockInvalidate(iVar11);
    iVar13 = iVar13 + (uint)(fVar3 < 1.0);
    *pfVar12 = fVar3;
    pfVar12[0xf] = fVar15 - 1.0;
    pfVar12[0xe] = fVar22;
    pfVar12[0xd] = fVar24;
    pfVar12[0xc] = fVar2;
    CacheBlockInvalidate(iVar11 + 0x20);
    iVar11 = iVar11 + 0x40;
    if (iVar9 == 0) {
      return iVar13;
    }
    pfVar12 = pfVar12 + 0x14;
  } while( true );
}

__asm__(".globl _FUN_8c226ac0\n.set _FUN_8c226ac0, _FUN_8c226ac0_def\n");
