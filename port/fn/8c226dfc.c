#include "../decls.h"
int FUN_8c226dfc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  double dVar12;
  undefined4 uVar14;
  double dVar13;
  double in_dr4;
  double dVar15;
  float fVar17;
  double dVar16;
  double in_dr6;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  double dVar27;
  float fVar29;
  double dVar28;
  float in_xf0;
  float in_xf1;
  float in_xf2;
  float in_xf3;
  double in_xd4;
  float fVar30;
  double in_xd6;
  double in_xd8;
  float in_xf10;
  float in_xf11;
  double in_xd12;
  double in_xd14;
  bool bVar31;
  bool bVar32;
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
      dVar27 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)((int)pdVar6 + 4));
      fVar29 = *(float *)(pdVar6 + 1);
      pdVar6 = (double *)((int)pdVar6 + 0xc);
    }
    else {
      dVar27 = *pdVar6;
      in_xd12 = pdVar6[1];
      fVar29 = (float)((ulonglong)pdVar6[2] >> 0x20);
      pdVar6 = pdVar6 + 3;
    }
    dVar28 = (double)CONCAT44(fVar29,0x3f800000);
                    
    fVar30 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar17 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar19 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar23 = (float)((ulonglong)in_xd14 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar24 = SUB84(dVar27,0);
      fVar22 = (float)((ulonglong)dVar27 >> 0x20);
      fVar26 = in_xf0 * fVar24 + SUB84(in_xd4,0) * fVar22 + SUB84(in_xd8,0) * 1.0 +
               SUB84(in_xd12,0) * fVar29;
      fVar26 = in_xf1 * fVar24 + fVar30 * fVar22 + (float)((ulonglong)in_xd8 >> 0x20) * 1.0 +
               fVar19 * fVar29;
      fVar26 = in_xf2 * fVar24 + SUB84(in_xd6,0) * fVar22 + in_xf10 * 1.0 +
               SUB84(in_xd14,0) * fVar29;
      fVar29 = in_xf3 * fVar24 + fVar17 * fVar22 + in_xf11 * 1.0 + fVar23 * fVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)((int)pdVar6 + 4));
      dVar21 = (double)((ulonglong)*(uint *)(pdVar6 + 1) << 0x20);
      pdVar6 = (double *)((int)pdVar6 + 0xc);
    }
    else {
      dVar20 = *pdVar6;
      in_xd8 = pdVar6[1];
      dVar21 = pdVar6[2];
      pdVar6 = pdVar6 + 3;
    }
    dVar21 = (double)((ulonglong)dVar21 & 0xffffffff00000000);
                    
    if (in_FPSCR_PR == '\0') {
      fVar24 = SUB84(dVar20,0);
      fVar26 = (float)((ulonglong)dVar20 >> 0x20);
      fVar22 = (float)((ulonglong)dVar21 >> 0x20);
      fVar29 = in_xf0 * fVar24 + SUB84(in_xd4,0) * fVar26 + SUB84(in_xd8,0) * 0.0 +
               SUB84(in_xd12,0) * fVar22;
      fVar29 = in_xf1 * fVar24 + fVar30 * fVar26 + (float)((ulonglong)in_xd8 >> 0x20) * 0.0 +
               fVar19 * fVar22;
      fVar29 = in_xf2 * fVar24 + SUB84(in_xd6,0) * fVar26 + in_xf10 * 0.0 +
               SUB84(in_xd14,0) * fVar22;
      fVar29 = in_xf3 * fVar24 + fVar17 * fVar26 + in_xf11 * 0.0 + fVar23 * fVar22;
    }
    dVar16 = 0.0;
    uVar2 = *(undefined4 *)0x8c4c0ed0;
    pdVar10 = (double *)(0x8c4c0ed0 + 4);
    dVar13 = 0.0;
    do {
      bVar31 = (uVar2 & 1) != 0;
      uVar2 = uVar2 >> 1 | (uint)bVar31 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar32 = (uVar2 & 1) != 0;
            uVar2 = uVar2 >> 1;
            uVar3 = uVar2 | (uint)bVar32 << 0x1f;
            fVar30 = (float)((ulonglong)dVar27 >> 0x20);
            fVar29 = (float)((ulonglong)dVar20 >> 0x20);
            if (bVar31) break;
            bVar32 = (uVar2 & 1) != 0;
            pdVar10 = pdVar10 + 4;
            if (bVar32) goto LAB_8c226ecc;
            bVar31 = (uVar2 & 2) != 0;
            uVar2 = (uVar3 >> 1 | (uint)bVar32 << 0x1f) >> 1 | (uint)bVar31 << 0x1f;
          }
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar10,*(undefined4 *)((int)pdVar10 + 4));
            pdVar1 = pdVar10 + 1;
          }
          else {
            in_dr4 = *pdVar10;
            in_xd4 = pdVar10[1];
            pdVar1 = pdVar10 + 2;
          }
          fVar24 = (float)((ulonglong)dVar21 >> 0x20);
          fVar19 = SUB84(in_dr4,0);
          fVar23 = (float)((ulonglong)in_dr4 >> 0x20);
          fVar17 = (float)((ulonglong)dVar13 >> 0x20);
          uVar14 = SUB84(dVar16,0);
          if (bVar32) break;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr6,0));
            pdVar1 = (double *)((int)pdVar1 + 4);
          }
          else {
            dVar12 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          dVar21 = (double)((ulonglong)(uint)fVar24 << 0x20);
                    
          if (in_FPSCR_PR == '\0') {
            fVar23 = SUB84(dVar20,0) * fVar19 + fVar29 * fVar23 + SUB84(dVar12,0) * 0.0 +
                     fVar24 * (float)((ulonglong)dVar12 >> 0x20);
          }
          in_dr6 = (double)((ulonglong)dVar12 & 0xffffffff00000000);
          if (in_FPSCR_PR == '\0') {
            bVar31 = SUB84(dVar21,0) < 0.0;
          }
          else {
            bVar31 = dVar21 < in_dr6;
          }
          pdVar10 = (double *)((int)pdVar1 + 0x14);
          bVar32 = (uVar2 & 1) != 0;
          uVar3 = uVar3 >> 1 | (uint)bVar32 << 0x1f;
          if (bVar31) {
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(SUB84(dVar21,0),uVar14);
              in_dr4 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),fVar19);
              pdVar1 = (double *)((int)pdVar1 + 0xc);
            }
            else {
              dVar16 = (double)CONCAT44(in_xf11,in_xf10);
              in_dr4 = pdVar1[1];
              pdVar1 = pdVar1 + 2;
            }
            if (in_FPSCR_PR == '\0') {
              dVar16 = (double)CONCAT44(-(float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
            }
            else {
              dVar16 = -dVar16;
            }
            if (in_FPSCR_SZ == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)pdVar1);
              pdVar1 = (double *)((int)pdVar1 + 4);
            }
            else {
              in_xd4 = *pdVar1;
              pdVar1 = pdVar1 + 1;
            }
            if (in_FPSCR_PR == '\0') {
              fVar19 = (float)((ulonglong)dVar16 >> 0x20);
              dVar16 = (double)CONCAT44(fVar19,fVar19 * (float)((ulonglong)in_dr4 >> 0x20) +
                                               SUB84(dVar16,0));
            }
            if (in_FPSCR_SZ == '\0') {
              in_dr6 = (double)((ulonglong)*(uint *)pdVar1 << 0x20);
              pdVar10 = (double *)((int)pdVar1 + 4);
            }
            else {
              in_dr6 = *pdVar1;
              pdVar10 = pdVar1 + 1;
            }
            fVar19 = (float)((ulonglong)dVar16 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              dVar13 = (double)CONCAT44(fVar19 * SUB84(in_dr4,0) + fVar17,
                                        fVar19 * (float)((ulonglong)in_dr6 >> 0x20) +
                                        SUB84(dVar13,0));
            }
            if (bVar32) goto LAB_8c226ecc;
            bVar31 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
          }
          else {
            if (bVar32) goto LAB_8c226ecc;
            bVar31 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44(fVar23 - fVar30,fVar19);
        }
        else {
          dVar12 = in_dr4 - dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr6,0));
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          dVar21 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                    SUB84(dVar12,0) - SUB84(dVar27,0));
        }
        else {
          dVar12 = dVar12 - dVar27;
        }
        fVar19 = (float)((ulonglong)dVar28 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)((ulonglong)(uint)((float)((ulonglong)dVar21 >> 0x20) - fVar19) << 0x20);
        }
        else {
          in_dr6 = (double)((ulonglong)dVar21 & 0xffffffff00000000) - dVar28;
        }
        dVar21 = (double)((ulonglong)(uint)fVar24 << 0x20);
        dVar16 = (double)((ulonglong)dVar16 & 0xffffffff);
                    
        fVar23 = SUB84(dVar12,0);
        fVar26 = (float)((ulonglong)dVar12 >> 0x20);
        fVar22 = SUB84(in_dr6,0);
        fVar18 = (float)((ulonglong)in_dr6 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar24 = SUB84(dVar20,0) * fVar23 + fVar29 * fVar26 + fVar22 * 0.0 + fVar24 * fVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44(fVar19,*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
                    
        if (in_FPSCR_PR == '\0') {
          fVar19 = fVar23 * fVar23 + fVar26 * fVar26 + fVar22 * fVar22 + fVar18 * fVar18;
          bVar31 = 0.0 < SUB84(dVar21,0);
        }
        else {
          bVar31 = dVar16 < dVar21;
        }
        fVar19 = SUB84(in_dr6,0);
        in_dr4 = in_xd6;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(fVar19,fVar23);
        }
        if (in_FPSCR_PR == '\0') {
          bVar32 = fVar19 < SUB84(dVar28,0);
          in_dr4 = (double)CONCAT44(1.0 / SQRT((float)((ulonglong)in_dr4 >> 0x20)),SUB84(in_dr4,0));
        }
        else {
          bVar32 = in_dr6 < dVar28;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if ((byte)(bVar31 << 1 | bVar32) == 3) break;
        bVar32 = (uVar2 & 1) != 0;
        pdVar10 = (double *)((int)pdVar1 + 0xc);
        if (bVar32) goto LAB_8c226ecc;
        bVar31 = (uVar2 & 2) != 0;
        uVar2 = (uVar3 >> 1 | (uint)bVar32 << 0x1f) >> 1 | (uint)bVar31 << 0x1f;
      }
      fVar23 = (float)((ulonglong)in_dr4 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * fVar23);
        bVar31 = SUB84(dVar28,0) < fVar19;
        dVar12 = (double)CONCAT44(fVar23 * fVar23,SUB84(in_dr4,0));
      }
      else {
        dVar21 = dVar21 * in_dr4;
        bVar31 = dVar28 < in_dr6;
        dVar12 = in_dr4 * in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),*(undefined4 *)pdVar1);
        pdVar1 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_xd4 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (bVar31) {
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                    SUB84(dVar21,0) * SUB84(dVar28,0) *
                                    (float)((ulonglong)dVar12 >> 0x20));
        }
        else {
          dVar21 = dVar21 * dVar28 * dVar12;
        }
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(SUB84(dVar21,0),uVar14);
      }
      else {
        dVar16 = (double)CONCAT44(in_xf11,in_xf10);
      }
      bVar31 = (uVar2 & 1) != 0;
      uVar2 = uVar3 >> 1 | (uint)bVar31 << 0x1f;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar12,0));
        pdVar1 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_dr4 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        fVar23 = (float)((ulonglong)dVar16 >> 0x20);
        dVar16 = (double)CONCAT44(fVar23,fVar23 * SUB84(in_dr4,0) + SUB84(dVar16,0));
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar19);
        pdVar10 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_dr6 = *pdVar1;
        pdVar10 = pdVar1 + 1;
      }
      fVar19 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44(fVar19 * (float)((ulonglong)in_dr4 >> 0x20) + fVar17,
                                  fVar19 * (float)((ulonglong)in_dr6 >> 0x20) + SUB84(dVar13,0));
      }
    } while (!bVar31);
LAB_8c226ecc:
    dVar12 = (double)CONCAT44(0x3f800000,SUB84(dVar16,0));
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)0x8c4aa544,SUB84(in_dr4,0));
      pdVar10 = (double *)((int)0x8c4aa544 + 4);
    }
    else {
      dVar15 = *(undefined4 *)0x8c4aa544;
      pdVar10 = 0x8c4aa544 + 1;
    }
    fVar17 = (float)((ulonglong)dVar15 >> 0x20);
    fVar19 = (float)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar17 < fVar19;
    }
    else {
      bVar31 = dVar15 < dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar17,*(undefined4 *)pdVar10);
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    else {
      in_xd4 = *pdVar10;
      pdVar10 = pdVar10 + 1;
    }
    if (bVar31) {
      if (in_FPSCR_PR == '\0') {
        bVar31 = fVar19 < SUB84(dVar15,0);
      }
      else {
        bVar31 = dVar28 < dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)pdVar10);
      }
      else {
        in_xd6 = *pdVar10;
      }
      if (bVar31) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar19);
          dVar28 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = (float)((ulonglong)dVar15 >> 0x20);
          dVar15 = (double)CONCAT44(fVar17,SUB84(dVar15,0) - fVar17);
        }
        else {
          dVar15 = dVar15 - dVar15;
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = (double)CONCAT44(fVar19,1.0 - SUB84(dVar15,0) * SUB84(in_dr6,0));
        }
        else {
          dVar15 = (double)CONCAT44(fVar19,0x3f800000) - dVar15 * in_dr6;
        }
      }
      else {
        dVar15 = (double)((ulonglong)(uint)fVar19 << 0x20);
        dVar28 = in_xd4;
      }
    }
    else {
      dVar15 = (double)CONCAT44(fVar19,0x3f800000);
      dVar28 = in_xd4;
    }
    fVar17 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar17 < 1.0;
      dVar12 = (double)CONCAT44(1.0 / fVar17,SUB84(dVar16,0));
    }
    else {
      bVar31 = dVar15 < dVar12;
      dVar12 = dVar12 / dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)((int)pdVar5 + 4));
      in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),SUB84(in_dr6,0));
      pdVar5 = (double *)((int)pdVar5 + 0xc);
      in_xd4 = dVar28;
    }
    else {
      dVar16 = *pdVar5;
      in_xd4 = pdVar5[1];
      in_dr6 = pdVar5[2];
      pdVar5 = pdVar5 + 3;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)pdVar5);
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
    else {
      in_xd6 = *pdVar5;
      pdVar5 = pdVar5 + 1;
    }
    pdVar5 = pdVar5 + -2;
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + 0x1c);
      *(float *)pdVar8 = SUB84(dVar13,0);
    }
    else {
      pdVar8 = pdVar8 + 3;
      *pdVar8 = (double)CONCAT44(in_xf3,in_xf2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) * SUB84(dVar27,0));
    }
    else {
      dVar16 = dVar16 * dVar27;
    }
    uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(undefined4 *)pdVar8 = uVar14;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr4 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar30,SUB84(dVar16,0));
    }
    else {
      in_dr4 = dVar16 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar8 + -4) = SUB84(dVar12,0);
      pdVar8 = pdVar8 + -1;
      *(int *)pdVar8 = SUB84(dVar15,0);
    }
    else {
      pdVar8[-1] = (double)CONCAT44(in_xf1,in_xf0);
      pdVar8 = pdVar8 + -2;
      *pdVar8 = in_xd14;
    }
    fVar19 = (float)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                fVar19 * SUB84(in_dr4,0) + SUB84(in_dr6,0));
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(float *)pdVar8 = fVar19;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar12;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44(fVar19 * (float)((ulonglong)in_dr4 >> 0x20) +
                                (float)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar8 + -4) = SUB84(in_dr6,0);
      pdVar8 = pdVar8 + -1;
      *(int *)pdVar8 = (int)((ulonglong)in_dr6 >> 0x20);
    }
    else {
      pdVar8[-1] = in_xd6;
      pdVar8 = pdVar8 + -2;
      *pdVar8 = in_dr6;
    }
    iVar4 = iVar4 + -1;
    uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
    CacheBlockInvalidate(iVar7);
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44(uVar14,SUB84(dVar13,0) - 1.0);
    }
    else {
      dVar13 = dVar13 - (double)CONCAT44(uVar25,0x3f800000);
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(float *)pdVar8 = fVar17;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar15;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - 1.0,SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 - (double)CONCAT44(uVar25,0x3f800000);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(uVar25,SUB84(dVar12,0) + -1.0);
    }
    else {
      dVar12 = (double)CONCAT44(uVar25,0xbf800000) + dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + 0x3c);
      *(int *)pdVar8 = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      pdVar8 = pdVar8 + 7;
      *pdVar8 = dVar13;
    }
    iVar9 = iVar9 + (uint)bVar31;
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar8 + -4) = (int)((ulonglong)dVar12 >> 0x20);
      *(float *)(pdVar8 + -1) = fVar29;
      pdVar8 = (double *)((int)pdVar8 + -0xc);
      *(float *)pdVar8 = fVar30;
    }
    else {
      pdVar8[-1] = dVar12;
      pdVar8[-2] = dVar20;
      pdVar8 = pdVar8 + -3;
      *pdVar8 = dVar27;
    }
    CacheBlockInvalidate(iVar7 + 0x20);
    iVar7 = iVar7 + 0x40;
    pdVar8 = pdVar8 + 4;
    if (iVar4 == 0) {
      return iVar9;
    }
  } while( true );
}

__asm__(".globl _FUN_8c226dfc\n.set _FUN_8c226dfc, _FUN_8c226dfc_def\n");
