#include "../decls.h"
int FUN_8c226f70_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_xd0;
  float in_xf3;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  float in_xf11;
  undefined8 in_xd12;
  undefined8 in_xd14;
  float fVar25;
  bool bVar26;
  bool bVar27;
  
  iVar6 = *ar4;
  pfVar9 = (float *)(uint)ar4[1];
  iVar8 = ar4[2];
  iVar10 = 0;
  uVar7 = ar5 >> 8 & 0xff;
  do {
    fVar23 = *pfVar9;
    fVar22 = pfVar9[1];
    fVar24 = pfVar9[2];
    fVar12 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar15 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar13 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar18 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar25 = (float)((ulonglong)in_xd14 >> 0x20);
                    
    fVar16 = (float)((ulonglong)in_xd8 >> 0x20);
    fVar17 = fVar12 * fVar22 + fVar15 * fVar23 + fVar16 * 1.0 + fVar18 * fVar24;
    fVar14 = in_xf3 * fVar22 + fVar13 * fVar23 + in_xf11 * 1.0 + fVar25 * fVar24;
    fVar20 = pfVar9[3];
    fVar19 = pfVar9[4];
    fVar21 = pfVar9[5];
    pfVar1 = pfVar9 + 6;
    pfVar9 = pfVar9 + 7;
                    
    fVar12 = fVar12 * fVar19 + fVar15 * fVar20 + fVar16 * 0.0 + fVar18 * fVar21;
    fVar15 = in_xf3 * fVar19 + fVar13 * fVar20 + in_xf11 * 0.0 + fVar25 * fVar21;
    pfVar11 = (float *)(SUB42(*pfVar1,0) * 0x40 + iVar8);
    fVar13 = (float)((uint)*pfVar1 >> 0x10) * 0.0039215684;
    if (uVar7 == 0) {
      pfVar11[7] = fVar15 * fVar13;
      pfVar11[6] = fVar12 * fVar13;
      pfVar11[5] = fVar14 * fVar13;
      pfVar11[4] = fVar17 * fVar13;
    }
    else if (uVar7 == 1) {
      pfVar11[1] = fVar13 * fVar14 + pfVar11[1];
      *pfVar11 = fVar13 * fVar17 + *pfVar11;
      fVar17 = fVar13 * fVar15 + pfVar11[5];
      in_dr6 = CONCAT44(fVar17,(int)in_dr6);
      pfVar11[5] = fVar17;
      pfVar11[4] = fVar13 * fVar12 + pfVar11[4];
    }
    else {
      fVar16 = fVar13 * fVar17 + *pfVar11;
      fVar22 = fVar13 * ((float)in_xd0 * fVar22 + (float)in_xd4 * fVar23 + (float)in_xd8 * 1.0 +
                        (float)in_xd12 * fVar24) + pfVar11[1];
      fVar23 = fVar13 * fVar14 + pfVar11[2];
      fVar24 = fVar13 * fVar12 + pfVar11[4];
      fVar19 = fVar13 * ((float)in_xd0 * fVar19 + (float)in_xd4 * fVar20 + (float)in_xd8 * 0.0 +
                        (float)in_xd12 * fVar21) + pfVar11[5];
      fVar17 = fVar13 * fVar15 + pfVar11[6];
      fVar12 = 0.0;
      pfVar1 = (float *)0x8c4c0ee0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      uVar4 = _DAT_8c4c0ed0;
      do {
        bVar26 = (uVar4 & 1) != 0;
        uVar4 = uVar4 >> 1 | (uint)bVar26 << 0x1f;
        while( true ) {
          while( true ) {
            while( true ) {
              bVar27 = (uVar4 & 1) != 0;
              uVar4 = uVar4 >> 1;
              uVar5 = uVar4 | (uint)bVar27 << 0x1f;
              if (bVar26) break;
              bVar27 = (uVar4 & 1) != 0;
              pfVar1 = pfVar1 + 8;
              if (bVar27) goto LAB_8c2270d8;
              bVar26 = (uVar4 & 2) != 0;
              uVar4 = (uVar5 >> 1 | (uint)bVar27 << 0x1f) >> 1 | (uint)bVar26 << 0x1f;
            }
            if (bVar27) break;
                    
            fVar17 = fVar19 * pfVar1[1] + fVar24 * *pfVar1 + (float)in_dr6 * 0.0 +
                     fVar17 * pfVar1[2];
            in_dr6 = 0;
            pfVar1 = pfVar1 + 8;
            bVar27 = (uVar4 & 1) != 0;
            if (bVar27) goto LAB_8c2270d8;
            bVar26 = (uVar4 & 2) != 0;
            uVar4 = (uVar5 >> 1 | (uint)bVar27 << 0x1f) >> 1 | (uint)bVar26 << 0x1f;
          }
          fVar20 = *pfVar1 - fVar16;
          fVar13 = pfVar1[1] - fVar22;
          fVar21 = pfVar1[2] - fVar23;
          in_dr6 = 0;
                    
          fVar17 = fVar19 * fVar13 + fVar24 * fVar20 + 0.0 + fVar17 * fVar21;
                    
          fVar13 = fVar13 * fVar13 + fVar20 * fVar20 + 0.0 + fVar21 * fVar21;
          fVar20 = (float)in_dr6;
          fVar13 = 1.0 / SQRT(fVar20);
          if (fVar20 < pfVar1[3] == true) break;
          bVar27 = (uVar4 & 1) != 0;
          pfVar1 = pfVar1 + 8;
          if (bVar27) goto LAB_8c2270d8;
          bVar26 = (uVar4 & 2) != 0;
          uVar4 = (uVar5 >> 1 | (uint)bVar27 << 0x1f) >> 1 | (uint)bVar26 << 0x1f;
        }
        fVar21 = fVar13 * 0.0;
        pfVar2 = pfVar1 + 6;
        if (pfVar1[4] < fVar20) {
          fVar21 = fVar21 * pfVar1[4] * fVar13 * fVar13;
        }
        bVar26 = (uVar4 & 1) != 0;
        uVar4 = uVar5 >> 1 | (uint)bVar26 << 0x1f;
        pfVar3 = pfVar1 + 7;
        fVar12 = fVar21 * pfVar1[5] + fVar12;
        in_dr6 = CONCAT44(*pfVar3,fVar20);
        pfVar1 = pfVar1 + 8;
        fVar15 = fVar21 * *pfVar2 + fVar15;
        fVar14 = fVar21 * *pfVar3 + fVar14;
      } while (!bVar26);
LAB_8c2270d8:
      fVar13 = 1.0 / fVar23;
      fVar20 = (float)ar4[4];
      fVar19 = (float)ar4[5];
      fVar18 = (float)ar4[6];
      fVar21 = (float)ar4[7];
      pfVar11[7] = fVar14;
      pfVar11[6] = fVar15;
      pfVar11[5] = fVar12;
      pfVar11[4] = 1.0;
      fVar21 = fVar13 * fVar19 * fVar22 + fVar21;
      pfVar11[3] = fVar13;
      fVar18 = fVar13 * fVar20 * fVar16 + fVar18;
      in_dr6 = CONCAT44(fVar18,fVar21);
      pfVar11[2] = fVar21;
      pfVar11[1] = fVar18;
      iVar10 = iVar10 + (uint)(fVar23 < 1.0);
      *pfVar11 = fVar23;
      pfVar11[0xf] = fVar15 - 1.0;
      pfVar11[0xe] = fVar17;
      pfVar11[0xd] = fVar24;
      pfVar11[0xc] = fVar16;
    }
    bVar26 = iVar6 == 1;
    iVar6 = iVar6 + -1;
    if (bVar26) {
      return iVar10;
    }
  } while( true );
}

__asm__(".globl _FUN_8c226f70\n.set _FUN_8c226f70, _FUN_8c226f70_def\n");
