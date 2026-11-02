#include "../decls.h"
int FUN_8c215674_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  undefined4 unaff_r8;
  int iVar9;
  undefined4 unaff_r9;
  double *pdVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double in_dr6;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar21;
  double dVar20;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar28;
  double dVar27;
  float in_xf0;
  float in_xf1;
  float in_xf2;
  float in_xf3;
  double in_xd4;
  float in_xf6;
  float in_xf7;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  float fVar29;
  double in_xd14;
  bool bVar30;
  bool bVar31;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = auStack_10;
  }
  else {
    puVar11 = auStack_20;
  }
  *(undefined4 *)(puVar11 + -4) = unaff_r8;
  *(undefined4 *)(puVar11 + -8) = unaff_r9;
  iVar4 = *ar4;
  pdVar6 = (double *)(uint)ar4[1];
  iVar7 = ar4[2];
  pdVar8 = (double *)(uint)ar4[3];
  pdVar5 = (double *)(ar4 + 4);
  iVar9 = 0;
  do {
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)((int)pdVar6 + 4));
      fVar28 = *(float *)(pdVar6 + 1);
      pdVar6 = (double *)((int)pdVar6 + 0xc);
    }
    else {
      dVar26 = *pdVar6;
      in_xd12 = pdVar6[1];
      fVar28 = (float)((ulonglong)pdVar6[2] >> 0x20);
      pdVar6 = pdVar6 + 3;
    }
    dVar27 = (double)CONCAT44(fVar28,0x3f800000);
                    
    fVar14 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar21 = (float)((ulonglong)in_xd10 >> 0x20);
    fVar29 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar18 = (float)((ulonglong)in_xd14 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar24 = SUB84(dVar26,0);
      fVar23 = (float)((ulonglong)dVar26 >> 0x20);
      fVar25 = in_xf0 * fVar24 + SUB84(in_xd4,0) * fVar23 + SUB84(in_xd8,0) * 1.0 +
               SUB84(in_xd12,0) * fVar28;
      fVar25 = in_xf1 * fVar24 + fVar14 * fVar23 + (float)((ulonglong)in_xd8 >> 0x20) * 1.0 +
               fVar29 * fVar28;
      fVar25 = in_xf2 * fVar24 + in_xf6 * fVar23 + SUB84(in_xd10,0) * 1.0 +
               SUB84(in_xd14,0) * fVar28;
      fVar28 = in_xf3 * fVar24 + in_xf7 * fVar23 + fVar21 * 1.0 + fVar18 * fVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)((int)pdVar6 + 4));
      dVar22 = (double)((ulonglong)*(uint *)(pdVar6 + 1) << 0x20);
      pdVar6 = (double *)((int)pdVar6 + 0xc);
    }
    else {
      dVar19 = *pdVar6;
      in_xd8 = pdVar6[1];
      dVar22 = pdVar6[2];
      pdVar6 = pdVar6 + 3;
    }
    dVar22 = (double)((ulonglong)dVar22 & 0xffffffff00000000);
                    
    if (in_FPSCR_PR == '\0') {
      fVar24 = SUB84(dVar19,0);
      fVar25 = (float)((ulonglong)dVar19 >> 0x20);
      fVar23 = (float)((ulonglong)dVar22 >> 0x20);
      fVar28 = in_xf0 * fVar24 + SUB84(in_xd4,0) * fVar25 + SUB84(in_xd8,0) * 0.0 +
               SUB84(in_xd12,0) * fVar23;
      fVar28 = in_xf1 * fVar24 + fVar14 * fVar25 + (float)((ulonglong)in_xd8 >> 0x20) * 0.0 +
               fVar29 * fVar23;
      fVar28 = in_xf2 * fVar24 + in_xf6 * fVar25 + SUB84(in_xd10,0) * 0.0 +
               SUB84(in_xd14,0) * fVar23;
      fVar28 = in_xf3 * fVar24 + in_xf7 * fVar25 + fVar21 * 0.0 + fVar18 * fVar23;
    }
    dVar20 = 0.0;
    uVar2 = *(undefined4 *)0x8c4c0db0;
    fVar28 = 0.0;
    pdVar10 = (double *)(0x8c4c0db0 + 4);
    fVar14 = 0.0;
    do {
      bVar30 = (uVar2 & 1) != 0;
      uVar2 = uVar2 >> 1 | (uint)bVar30 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar31 = (uVar2 & 1) != 0;
            uVar2 = uVar2 >> 1;
            uVar3 = uVar2 | (uint)bVar31 << 0x1f;
            fVar21 = SUB84(dVar19,0);
            fVar29 = (float)((ulonglong)dVar26 >> 0x20);
            if (bVar30) break;
            bVar31 = (uVar2 & 1) != 0;
            pdVar10 = pdVar10 + 4;
            if (bVar31) goto LAB_8c215744;
            bVar30 = (uVar2 & 2) != 0;
            uVar2 = (uVar3 >> 1 | (uint)bVar31 << 0x1f) >> 1 | (uint)bVar30 << 0x1f;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)pdVar10,*(undefined4 *)((int)pdVar10 + 4));
            pdVar1 = pdVar10 + 1;
          }
          else {
            dVar13 = *pdVar10;
            in_xd4 = pdVar10[1];
            pdVar1 = pdVar10 + 2;
          }
          fVar23 = (float)((ulonglong)dVar22 >> 0x20);
          fVar18 = SUB84(dVar13,0);
          fVar24 = (float)((ulonglong)dVar13 >> 0x20);
          fVar25 = (float)((ulonglong)dVar19 >> 0x20);
          uVar12 = SUB84(dVar20,0);
          if (bVar31) break;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr6,0));
            pdVar1 = (double *)((int)pdVar1 + 4);
          }
          else {
            dVar13 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          dVar22 = (double)((ulonglong)(uint)fVar23 << 0x20);
                    
          if (in_FPSCR_PR == '\0') {
            fVar24 = fVar21 * fVar18 + fVar25 * fVar24 + SUB84(dVar13,0) * 0.0 +
                     fVar23 * (float)((ulonglong)dVar13 >> 0x20);
          }
          in_dr6 = (double)((ulonglong)dVar13 & 0xffffffff00000000);
          if (in_FPSCR_PR == '\0') {
            bVar30 = SUB84(dVar22,0) < 0.0;
          }
          else {
            bVar30 = dVar22 < in_dr6;
          }
          pdVar10 = (double *)((int)pdVar1 + 0x14);
          bVar31 = (uVar2 & 1) != 0;
          uVar3 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
          if (bVar30) {
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),fVar18);
              pdVar1 = (double *)((int)pdVar1 + 0xc);
              dVar20 = (double)CONCAT44(SUB84(dVar22,0),uVar12);
            }
            else {
              dVar13 = pdVar1[1];
              pdVar1 = pdVar1 + 2;
              dVar20 = in_xd10;
            }
            if (in_FPSCR_PR == '\0') {
              dVar20 = (double)CONCAT44(-(float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
            }
            else {
              dVar20 = -dVar20;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)pdVar1);
              pdVar1 = (double *)((int)pdVar1 + 4);
            }
            else {
              in_xd4 = *pdVar1;
              pdVar1 = pdVar1 + 1;
            }
            if (in_FPSCR_PR == '\0') {
              fVar18 = (float)((ulonglong)dVar20 >> 0x20);
              dVar20 = (double)CONCAT44(fVar18,fVar18 * (float)((ulonglong)dVar13 >> 0x20) +
                                               SUB84(dVar20,0));
            }
            if (in_FPSCR_SZ == '\0') {
              in_dr6 = (double)((ulonglong)*(uint *)pdVar1 << 0x20);
              pdVar10 = (double *)((int)pdVar1 + 4);
            }
            else {
              in_dr6 = *pdVar1;
              pdVar10 = pdVar1 + 1;
            }
            fVar18 = (float)((ulonglong)dVar20 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              fVar28 = fVar18 * SUB84(dVar13,0) + fVar28;
              fVar14 = fVar18 * (float)((ulonglong)in_dr6 >> 0x20) + fVar14;
            }
            if (bVar31) goto LAB_8c215744;
            bVar30 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar30 << 0x1f;
          }
          else {
            if (bVar31) goto LAB_8c215744;
            bVar30 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar30 << 0x1f;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44(fVar24 - fVar29,fVar18);
        }
        else {
          dVar13 = dVar13 - dVar26;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr6,0));
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          dVar22 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                    SUB84(dVar13,0) - SUB84(dVar26,0));
        }
        else {
          dVar13 = dVar13 - dVar26;
        }
        fVar18 = (float)((ulonglong)dVar27 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)((ulonglong)(uint)((float)((ulonglong)dVar22 >> 0x20) - fVar18) << 0x20);
        }
        else {
          in_dr6 = (double)((ulonglong)dVar22 & 0xffffffff00000000) - dVar27;
        }
        dVar22 = (double)((ulonglong)(uint)fVar23 << 0x20);
        dVar20 = (double)((ulonglong)dVar20 & 0xffffffff);
                    
        fVar24 = SUB84(dVar13,0);
        fVar15 = (float)((ulonglong)dVar13 >> 0x20);
        fVar16 = SUB84(in_dr6,0);
        fVar17 = (float)((ulonglong)in_dr6 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar25 = fVar21 * fVar24 + fVar25 * fVar15 + fVar16 * 0.0 + fVar23 * fVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44(fVar18,*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
                    
        if (in_FPSCR_PR == '\0') {
          fVar18 = fVar24 * fVar24 + fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
          bVar30 = 0.0 < SUB84(dVar22,0);
        }
        else {
          bVar30 = dVar20 < dVar22;
        }
        fVar18 = SUB84(in_dr6,0);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(fVar18,fVar24);
        }
        else {
          dVar13 = (double)CONCAT44(in_xf7,in_xf6);
        }
        if (in_FPSCR_PR == '\0') {
          bVar31 = fVar18 < SUB84(dVar27,0);
          dVar13 = (double)CONCAT44(1.0 / SQRT((float)((ulonglong)dVar13 >> 0x20)),SUB84(dVar13,0));
        }
        else {
          bVar31 = in_dr6 < dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if ((byte)(bVar30 << 1 | bVar31) == 3) break;
        bVar31 = (uVar2 & 1) != 0;
        pdVar10 = (double *)((int)pdVar1 + 0xc);
        if (bVar31) goto LAB_8c215744;
        bVar30 = (uVar2 & 2) != 0;
        uVar2 = (uVar3 >> 1 | (uint)bVar31 << 0x1f) >> 1 | (uint)bVar30 << 0x1f;
      }
      fVar24 = (float)((ulonglong)dVar13 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) * fVar24);
        bVar30 = SUB84(dVar27,0) < fVar18;
        dVar13 = (double)CONCAT44(fVar24 * fVar24,SUB84(dVar13,0));
      }
      else {
        dVar22 = dVar22 * dVar13;
        bVar30 = dVar27 < in_dr6;
        dVar13 = dVar13 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)pdVar1);
        pdVar1 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_xd4 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (bVar30) {
        if (in_FPSCR_PR == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    SUB84(dVar22,0) * SUB84(dVar27,0) *
                                    (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar22 = dVar22 * dVar27 * dVar13;
        }
      }
      dVar20 = in_xd10;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(SUB84(dVar22,0),uVar12);
      }
      bVar30 = (uVar2 & 1) != 0;
      uVar2 = uVar3 >> 1 | (uint)bVar30 << 0x1f;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar13,0));
        pdVar1 = (double *)((int)pdVar1 + 4);
      }
      else {
        dVar13 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        fVar24 = (float)((ulonglong)dVar20 >> 0x20);
        dVar20 = (double)CONCAT44(fVar24,fVar24 * SUB84(dVar13,0) + SUB84(dVar20,0));
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar18);
        pdVar10 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_dr6 = *pdVar1;
        pdVar10 = pdVar1 + 1;
      }
      fVar18 = (float)((ulonglong)dVar20 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar28 = fVar18 * (float)((ulonglong)dVar13 >> 0x20) + fVar28;
        fVar14 = fVar18 * (float)((ulonglong)in_dr6 >> 0x20) + fVar14;
      }
    } while (!bVar30);
LAB_8c215744:
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)0x8c4aa544,fVar21);
      pdVar10 = (double *)((int)0x8c4aa544 + 4);
    }
    else {
      dVar19 = *(undefined4 *)0x8c4aa544;
      pdVar10 = 0x8c4aa544 + 1;
    }
    dVar13 = (double)CONCAT44(0x3f800000,SUB84(dVar20,0));
    fVar21 = (float)((ulonglong)dVar19 >> 0x20);
    fVar18 = (float)((ulonglong)dVar27 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar21 < fVar18;
    }
    else {
      bVar30 = dVar19 < dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(fVar21,*(undefined4 *)pdVar10);
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    else {
      in_xd8 = *pdVar10;
      pdVar10 = pdVar10 + 1;
    }
    if (bVar30) {
      if (in_FPSCR_PR == '\0') {
        bVar30 = fVar18 < SUB84(dVar19,0);
      }
      else {
        bVar30 = dVar27 < dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)pdVar10);
      }
      else {
        in_xd10 = *pdVar10;
      }
      if (bVar30) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar18);
          dVar27 = in_xd8;
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = (float)((ulonglong)dVar19 >> 0x20);
          dVar19 = (double)CONCAT44(fVar21,SUB84(dVar19,0) - fVar21);
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(fVar18,1.0 - SUB84(dVar19,0) * SUB84(dVar22,0));
        }
        else {
          dVar19 = (double)CONCAT44(fVar18,0x3f800000) - dVar19 * dVar22;
        }
      }
      else {
        dVar19 = (double)((ulonglong)(uint)fVar18 << 0x20);
        dVar27 = in_xd8;
      }
    }
    else {
      dVar19 = (double)CONCAT44(fVar18,0x3f800000);
      dVar27 = in_xd8;
    }
    fVar21 = (float)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar21 < 1.0;
      dVar13 = (double)CONCAT44(1.0 / fVar21,SUB84(dVar20,0));
    }
    else {
      bVar30 = dVar19 < dVar13;
      dVar13 = dVar13 / dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)((int)pdVar5 + 4));
      dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),SUB84(dVar22,0));
      pdVar5 = (double *)((int)pdVar5 + 0xc);
      in_xd8 = dVar27;
    }
    else {
      dVar20 = *pdVar5;
      in_xd8 = pdVar5[1];
      dVar22 = pdVar5[2];
      pdVar5 = pdVar5 + 3;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)pdVar5);
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
    else {
      in_xd10 = *pdVar5;
      pdVar5 = pdVar5 + 1;
    }
    pdVar5 = pdVar5 + -2;
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + 0x1c);
      *(float *)pdVar8 = fVar14;
    }
    else {
      pdVar8 = pdVar8 + 3;
      *pdVar8 = (double)CONCAT44(in_xf3,in_xf2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) * SUB84(dVar26,0));
    }
    else {
      dVar20 = dVar20 * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(float *)pdVar8 = fVar28;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = (double)CONCAT44(fVar28,fVar14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar29,SUB84(dVar20,0));
    }
    else {
      dVar20 = dVar20 * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar8 + -4) = SUB84(dVar13,0);
      pdVar8 = pdVar8 + -1;
      *(int *)pdVar8 = SUB84(dVar19,0);
    }
    else {
      pdVar8[-1] = (double)CONCAT44(in_xf1,in_xf0);
      pdVar8 = pdVar8 + -2;
      *pdVar8 = in_xd14;
    }
    fVar28 = (float)((ulonglong)dVar13 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                fVar28 * SUB84(dVar20,0) + SUB84(dVar22,0));
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(float *)pdVar8 = fVar28;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44(fVar28 * (float)((ulonglong)dVar20 >> 0x20) +
                                (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar8 + -4) = SUB84(dVar22,0);
      pdVar8 = pdVar8 + -1;
      *(int *)pdVar8 = (int)((ulonglong)dVar22 >> 0x20);
    }
    else {
      pdVar8[-1] = in_xd10;
      pdVar8 = pdVar8 + -2;
      *pdVar8 = dVar22;
    }
    iVar4 = iVar4 + -1;
    CacheBlockInvalidate(iVar7);
    iVar9 = iVar9 + (uint)bVar30;
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(float *)pdVar8 = fVar21;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar19;
    }
    iVar7 = iVar7 + 0x20;
    pdVar8 = pdVar8 + 4;
    if (iVar4 == 0) {
      return iVar9;
    }
  } while( true );
}

__asm__(".globl _FUN_8c215674\n.set _FUN_8c215674, _FUN_8c215674_def\n");
