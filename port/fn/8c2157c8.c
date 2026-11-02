#include "../decls.h"
int FUN_8c2157c8_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_dr6;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  longlong lVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_xd0;
  float in_xf3;
  undefined8 in_xd4;
  float in_xf7;
  undefined8 in_xd8;
  undefined8 in_xd10;
  undefined8 in_xd12;
  float fVar25;
  undefined8 in_xd14;
  float fVar26;
  bool bVar27;
  bool bVar28;
  
  iVar6 = *ar4;
  pfVar9 = (float *)(uint)ar4[1];
  iVar8 = ar4[2];
  iVar10 = 0;
  uVar7 = ar5 >> 8 & 0xff;
  do {
    fVar23 = *pfVar9;
    fVar22 = pfVar9[1];
    fVar24 = pfVar9[2];
    fVar14 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar13 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar16 = (float)((ulonglong)in_xd10 >> 0x20);
    fVar25 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar26 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar12 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar17 = fVar14 * fVar22 + fVar13 * fVar23 + fVar12 * 1.0 + fVar25 * fVar24;
    fVar15 = in_xf3 * fVar22 + in_xf7 * fVar23 + fVar16 * 1.0 + fVar26 * fVar24;
    fVar19 = pfVar9[3];
    fVar18 = pfVar9[4];
    fVar21 = pfVar9[5];
    pfVar1 = pfVar9 + 6;
    pfVar9 = pfVar9 + 7;
                    
    fVar14 = fVar14 * fVar18 + fVar13 * fVar19 + fVar12 * 0.0 + fVar25 * fVar21;
    fVar13 = in_xf3 * fVar18 + in_xf7 * fVar19 + fVar16 * 0.0 + fVar26 * fVar21;
    pfVar11 = (float *)(SUB42(*pfVar1,0) * 0x20 + iVar8);
    fVar12 = (float)((uint)*pfVar1 >> 0x10) * 0.0039215684;
    if (uVar7 == 0) {
      *pfVar11 = 0.0;
      pfVar11[7] = fVar13 * fVar12;
      pfVar11[6] = fVar14 * fVar12;
      pfVar11[5] = fVar15 * fVar12;
      pfVar11[4] = fVar17 * fVar12;
    }
    else if (uVar7 == 1) {
      pfVar11[1] = fVar12 * fVar15 + pfVar11[1];
      *pfVar11 = fVar12 * fVar17 + *pfVar11;
      fVar17 = fVar12 * fVar13 + pfVar11[5];
      in_dr6 = CONCAT44(fVar17,(int)in_dr6);
      pfVar11[5] = fVar17;
      pfVar11[4] = fVar12 * fVar14 + pfVar11[4];
    }
    else {
      fVar16 = fVar12 * fVar17 + *pfVar11;
      fVar22 = fVar12 * ((float)in_xd0 * fVar22 + (float)in_xd4 * fVar23 + (float)in_xd8 * 1.0 +
                        (float)in_xd12 * fVar24) + pfVar11[1];
      fVar23 = fVar12 * fVar15 + pfVar11[2];
      fVar24 = fVar12 * fVar14 + pfVar11[4];
      fVar18 = fVar12 * ((float)in_xd0 * fVar18 + (float)in_xd4 * fVar19 + (float)in_xd8 * 0.0 +
                        (float)in_xd12 * fVar21) + pfVar11[5];
      lVar20 = (ulonglong)(uint)(fVar12 * fVar13 + pfVar11[6]) << 0x20;
      fVar17 = 0.0;
      fVar15 = 0.0;
      pfVar1 = (float *)0x8c4c0dc0;
      fVar14 = 0.0;
      uVar4 = _DAT_8c4c0db0;
      do {
        bVar27 = (uVar4 & 1) != 0;
        uVar4 = uVar4 >> 1 | (uint)bVar27 << 0x1f;
        pfVar2 = pfVar1;
        while( true ) {
          while( true ) {
            while( true ) {
              bVar28 = (uVar4 & 1) != 0;
              uVar4 = uVar4 >> 1;
              uVar5 = uVar4 | (uint)bVar28 << 0x1f;
              if (bVar27) break;
              bVar28 = (uVar4 & 1) != 0;
              if (bVar28) goto LAB_8c215934;
              bVar27 = (uVar4 & 2) != 0;
              uVar4 = (uVar5 >> 1 | (uint)bVar28 << 0x1f) >> 1 | (uint)bVar27 << 0x1f;
              pfVar2 = pfVar2 + 8;
            }
            fVar13 = (float)((ulonglong)lVar20 >> 0x20);
            if (bVar28) break;
            lVar20 = (ulonglong)(uint)fVar13 << 0x20;
                    
            fVar13 = fVar18 * pfVar2[1] + fVar24 * *pfVar2 + (float)in_dr6 * 0.0 +
                     fVar13 * pfVar2[2];
            in_dr6 = 0;
            bVar27 = (uVar4 & 1) != 0;
            uVar5 = uVar5 >> 1 | (uint)bVar27 << 0x1f;
            if ((float)lVar20 < 0.0) {
              pfVar1 = pfVar2 + 6;
              fVar13 = -(float)lVar20;
              pfVar3 = pfVar2 + 7;
              fVar17 = fVar13 * pfVar2[5] + fVar17;
              in_dr6 = 0;
              pfVar2 = pfVar2 + 8;
              fVar15 = fVar13 * *pfVar1 + fVar15;
              fVar14 = fVar13 * *pfVar3 + fVar14;
              if (bVar27) goto LAB_8c215934;
              bVar27 = (uVar4 & 2) != 0;
              uVar4 = uVar5 >> 1 | (uint)bVar27 << 0x1f;
            }
            else {
              if (bVar27) goto LAB_8c215934;
              bVar27 = (uVar4 & 2) != 0;
              uVar4 = uVar5 >> 1 | (uint)bVar27 << 0x1f;
              pfVar2 = pfVar2 + 8;
            }
          }
          fVar19 = *pfVar2 - fVar16;
          fVar12 = pfVar2[1] - fVar22;
          fVar21 = pfVar2[2] - fVar23;
          in_dr6 = 0;
          lVar20 = (ulonglong)(uint)fVar13 << 0x20;
                    
          fVar13 = fVar18 * fVar12 + fVar24 * fVar19 + 0.0 + fVar13 * fVar21;
                    
          fVar13 = fVar12 * fVar12 + fVar19 * fVar19 + 0.0 + fVar21 * fVar21;
          fVar12 = (float)in_dr6;
          fVar13 = 1.0 / SQRT(fVar12);
          if ((byte)((0.0 < (float)lVar20) << 1 | fVar12 < pfVar2[3]) == 3) break;
          bVar28 = (uVar4 & 1) != 0;
          pfVar2 = pfVar2 + 8;
          if (bVar28) goto LAB_8c215934;
          bVar27 = (uVar4 & 2) != 0;
          uVar4 = (uVar5 >> 1 | (uint)bVar28 << 0x1f) >> 1 | (uint)bVar27 << 0x1f;
        }
        fVar19 = (float)lVar20 * fVar13;
        if (pfVar2[4] < fVar12) {
          fVar19 = fVar19 * pfVar2[4] * fVar13 * fVar13;
        }
        lVar20 = CONCAT44((int)((ulonglong)lVar20 >> 0x20),fVar19);
        bVar27 = (uVar4 & 1) != 0;
        uVar4 = uVar5 >> 1 | (uint)bVar27 << 0x1f;
        fVar17 = fVar19 * pfVar2[5] + fVar17;
        in_dr6 = CONCAT44(pfVar2[7],fVar12);
        pfVar1 = pfVar2 + 8;
        fVar15 = fVar19 * pfVar2[6] + fVar15;
        fVar14 = fVar19 * pfVar2[7] + fVar14;
      } while (!bVar27);
LAB_8c215934:
      fVar13 = 1.0 / fVar23;
      fVar18 = (float)ar4[4];
      fVar12 = (float)ar4[5];
      fVar21 = (float)ar4[6];
      fVar19 = (float)ar4[7];
      pfVar11[7] = fVar14;
      pfVar11[6] = fVar15;
      pfVar11[5] = fVar17;
      pfVar11[4] = 1.0;
      pfVar11[3] = fVar13;
      pfVar11[2] = fVar13 * fVar12 * fVar22 + fVar19;
      pfVar11[1] = fVar13 * fVar18 * fVar16 + fVar21;
      iVar10 = iVar10 + (uint)(fVar23 < 1.0);
      *pfVar11 = fVar23;
    }
    bVar27 = iVar6 == 1;
    iVar6 = iVar6 + -1;
    if (bVar27) {
      return iVar10;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2157c8\n.set _FUN_8c2157c8, _FUN_8c2157c8_def\n");
