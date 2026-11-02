#include "../decls.h"
int FUN_8c226c44_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined8 *puVar11;
  double *pdVar12;
  double dVar13;
  double in_dr4;
  double dVar14;
  float fVar16;
  double dVar15;
  double in_dr6;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 in_dr12;
  double dVar27;
  float fVar29;
  double dVar28;
  float in_xf0;
  float in_xf1;
  float in_xf2;
  float in_xf3;
  double in_xd4;
  float fVar31;
  double dVar30;
  double in_xd6;
  double in_xd8;
  float in_xf10;
  float in_xf11;
  double in_xd12;
  double in_xd14;
  bool bVar32;
  bool bVar33;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  undefined8 auStack_10 [2];
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = auStack_10;
    auStack_10[0] = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar11 = (undefined8 *)auStack_20;
  }
  *(undefined4 *)((int)puVar11 + -4) = unaff_r11;
  *(undefined4 *)((int)puVar11 + -8) = unaff_r10;
  *(undefined4 *)((int)puVar11 + -0xc) = unaff_r9;
  pdVar12 = (double *)((int)puVar11 + -0x10);
  *(undefined4 *)((int)puVar11 + -0x10) = unaff_r8;
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
                    
    fVar31 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar16 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar18 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar20 = (float)((ulonglong)in_xd14 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar23 = SUB84(dVar27,0);
      fVar22 = (float)((ulonglong)dVar27 >> 0x20);
      fVar26 = in_xf0 * fVar23 + SUB84(in_xd4,0) * fVar22 + SUB84(in_xd8,0) * 1.0 +
               SUB84(in_xd12,0) * fVar29;
      fVar26 = in_xf1 * fVar23 + fVar31 * fVar22 + (float)((ulonglong)in_xd8 >> 0x20) * 1.0 +
               fVar18 * fVar29;
      fVar26 = in_xf2 * fVar23 + SUB84(in_xd6,0) * fVar22 + in_xf10 * 1.0 +
               SUB84(in_xd14,0) * fVar29;
      fVar29 = in_xf3 * fVar23 + fVar16 * fVar22 + in_xf11 * 1.0 + fVar20 * fVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)((int)pdVar6 + 4));
      dVar21 = (double)((ulonglong)*(uint *)(pdVar6 + 1) << 0x20);
      pdVar6 = (double *)((int)pdVar6 + 0xc);
    }
    else {
      dVar19 = *pdVar6;
      in_xd8 = pdVar6[1];
      dVar21 = pdVar6[2];
      pdVar6 = pdVar6 + 3;
    }
    dVar21 = (double)((ulonglong)dVar21 & 0xffffffff00000000);
                    
    if (in_FPSCR_PR == '\0') {
      fVar23 = SUB84(dVar19,0);
      fVar26 = (float)((ulonglong)dVar19 >> 0x20);
      fVar22 = (float)((ulonglong)dVar21 >> 0x20);
      fVar29 = in_xf0 * fVar23 + SUB84(in_xd4,0) * fVar26 + SUB84(in_xd8,0) * 0.0 +
               SUB84(in_xd12,0) * fVar22;
      fVar29 = in_xf1 * fVar23 + fVar31 * fVar26 + (float)((ulonglong)in_xd8 >> 0x20) * 0.0 +
               fVar18 * fVar22;
      fVar29 = in_xf2 * fVar23 + SUB84(in_xd6,0) * fVar26 + in_xf10 * 0.0 +
               SUB84(in_xd14,0) * fVar22;
      fVar29 = in_xf3 * fVar23 + fVar16 * fVar26 + in_xf11 * 0.0 + fVar20 * fVar22;
    }
    dVar15 = 0.0;
    uVar2 = *(undefined4 *)0x8c4c0ed0;
    pdVar10 = (double *)(0x8c4c0ed0 + 4);
    dVar13 = 0.0;
    do {
      bVar32 = (uVar2 & 1) != 0;
      uVar2 = uVar2 >> 1 | (uint)bVar32 << 0x1f;
      while( true ) {
        while( true ) {
          while( true ) {
            bVar33 = (uVar2 & 1) != 0;
            uVar2 = uVar2 >> 1;
            uVar3 = uVar2 | (uint)bVar33 << 0x1f;
            fVar31 = (float)((ulonglong)dVar27 >> 0x20);
            fVar29 = (float)((ulonglong)dVar19 >> 0x20);
            if (bVar32) break;
            bVar33 = (uVar2 & 1) != 0;
            pdVar10 = pdVar10 + 4;
            if (bVar33) goto LAB_8c226d1c;
            bVar32 = (uVar2 & 2) != 0;
            uVar2 = (uVar3 >> 1 | (uint)bVar33 << 0x1f) >> 1 | (uint)bVar32 << 0x1f;
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
          fVar23 = (float)((ulonglong)dVar21 >> 0x20);
          fVar18 = SUB84(in_dr4,0);
          fVar20 = (float)((ulonglong)in_dr4 >> 0x20);
          fVar16 = (float)((ulonglong)dVar13 >> 0x20);
          uVar24 = SUB84(dVar15,0);
          if (bVar33) break;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr6,0));
            pdVar1 = (double *)((int)pdVar1 + 4);
          }
          else {
            dVar14 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          dVar21 = (double)((ulonglong)(uint)fVar23 << 0x20);
                    
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar19,0) * fVar18 + fVar29 * fVar20 + SUB84(dVar14,0) * 0.0 +
                     fVar23 * (float)((ulonglong)dVar14 >> 0x20);
          }
          in_dr6 = (double)((ulonglong)dVar14 & 0xffffffff00000000);
          if (in_FPSCR_PR == '\0') {
            bVar32 = SUB84(dVar21,0) < 0.0;
          }
          else {
            bVar32 = dVar21 < in_dr6;
          }
          pdVar10 = (double *)((int)pdVar1 + 0x14);
          bVar33 = (uVar2 & 1) != 0;
          uVar3 = uVar3 >> 1 | (uint)bVar33 << 0x1f;
          if (bVar32) {
            if (in_FPSCR_SZ == '\0') {
              dVar15 = (double)CONCAT44(SUB84(dVar21,0),uVar24);
              in_dr4 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),fVar18);
              pdVar1 = (double *)((int)pdVar1 + 0xc);
            }
            else {
              dVar15 = (double)CONCAT44(in_xf11,in_xf10);
              in_dr4 = pdVar1[1];
              pdVar1 = pdVar1 + 2;
            }
            if (in_FPSCR_PR == '\0') {
              dVar15 = (double)CONCAT44(-(float)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0));
            }
            else {
              dVar15 = -dVar15;
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
              fVar18 = (float)((ulonglong)dVar15 >> 0x20);
              dVar15 = (double)CONCAT44(fVar18,fVar18 * (float)((ulonglong)in_dr4 >> 0x20) +
                                               SUB84(dVar15,0));
            }
            if (in_FPSCR_SZ == '\0') {
              in_dr6 = (double)((ulonglong)*(uint *)pdVar1 << 0x20);
              pdVar10 = (double *)((int)pdVar1 + 4);
            }
            else {
              in_dr6 = *pdVar1;
              pdVar10 = pdVar1 + 1;
            }
            fVar18 = (float)((ulonglong)dVar15 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              dVar13 = (double)CONCAT44(fVar18 * SUB84(in_dr4,0) + fVar16,
                                        fVar18 * (float)((ulonglong)in_dr6 >> 0x20) +
                                        SUB84(dVar13,0));
            }
            if (bVar33) goto LAB_8c226d1c;
            bVar32 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar32 << 0x1f;
          }
          else {
            if (bVar33) goto LAB_8c226d1c;
            bVar32 = (uVar2 & 2) != 0;
            uVar2 = uVar3 >> 1 | (uint)bVar32 << 0x1f;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44(fVar20 - fVar31,fVar18);
        }
        else {
          dVar14 = in_dr4 - dVar27;
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
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                    SUB84(dVar14,0) - SUB84(dVar27,0));
        }
        else {
          dVar14 = dVar14 - dVar27;
        }
        fVar18 = (float)((ulonglong)dVar28 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)((ulonglong)(uint)((float)((ulonglong)dVar21 >> 0x20) - fVar18) << 0x20);
        }
        else {
          in_dr6 = (double)((ulonglong)dVar21 & 0xffffffff00000000) - dVar28;
        }
        dVar21 = (double)((ulonglong)(uint)fVar23 << 0x20);
        dVar15 = (double)((ulonglong)dVar15 & 0xffffffff);
                    
        fVar20 = SUB84(dVar14,0);
        fVar26 = (float)((ulonglong)dVar14 >> 0x20);
        fVar22 = SUB84(in_dr6,0);
        fVar17 = (float)((ulonglong)in_dr6 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar23 = SUB84(dVar19,0) * fVar20 + fVar29 * fVar26 + fVar22 * 0.0 + fVar23 * fVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44(fVar18,*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
                    
        if (in_FPSCR_PR == '\0') {
          fVar18 = fVar20 * fVar20 + fVar26 * fVar26 + fVar22 * fVar22 + fVar17 * fVar17;
          bVar32 = 0.0 < SUB84(dVar21,0);
        }
        else {
          bVar32 = dVar15 < dVar21;
        }
        fVar18 = SUB84(in_dr6,0);
        in_dr4 = in_xd6;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(fVar18,fVar20);
        }
        if (in_FPSCR_PR == '\0') {
          bVar33 = fVar18 < SUB84(dVar28,0);
          in_dr4 = (double)CONCAT44(1.0 / SQRT((float)((ulonglong)in_dr4 >> 0x20)),SUB84(in_dr4,0));
        }
        else {
          bVar33 = in_dr6 < dVar28;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd14 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if ((byte)(bVar32 << 1 | bVar33) == 3) break;
        bVar33 = (uVar2 & 1) != 0;
        pdVar10 = (double *)((int)pdVar1 + 0xc);
        if (bVar33) goto LAB_8c226d1c;
        bVar32 = (uVar2 & 2) != 0;
        uVar2 = (uVar3 >> 1 | (uint)bVar33 << 0x1f) >> 1 | (uint)bVar32 << 0x1f;
      }
      fVar20 = (float)((ulonglong)in_dr4 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * fVar20);
        bVar32 = SUB84(dVar28,0) < fVar18;
        dVar14 = (double)CONCAT44(fVar20 * fVar20,SUB84(in_dr4,0));
      }
      else {
        dVar21 = dVar21 * in_dr4;
        bVar32 = dVar28 < in_dr6;
        dVar14 = in_dr4 * in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)pdVar1);
        pdVar1 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_xd4 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (bVar32) {
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                    SUB84(dVar21,0) * SUB84(dVar28,0) *
                                    (float)((ulonglong)dVar14 >> 0x20));
        }
        else {
          dVar21 = dVar21 * dVar28 * dVar14;
        }
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(SUB84(dVar21,0),uVar24);
      }
      else {
        dVar15 = (double)CONCAT44(in_xf11,in_xf10);
      }
      bVar32 = (uVar2 & 1) != 0;
      uVar2 = uVar3 >> 1 | (uint)bVar32 << 0x1f;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar14,0));
        pdVar1 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_dr4 = *pdVar1;
        pdVar1 = pdVar1 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar15 >> 0x20);
        dVar15 = (double)CONCAT44(fVar20,fVar20 * SUB84(in_dr4,0) + SUB84(dVar15,0));
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar18);
        pdVar10 = (double *)((int)pdVar1 + 4);
      }
      else {
        in_dr6 = *pdVar1;
        pdVar10 = pdVar1 + 1;
      }
      fVar18 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44(fVar18 * (float)((ulonglong)in_dr4 >> 0x20) + fVar16,
                                  fVar18 * (float)((ulonglong)in_dr6 >> 0x20) + SUB84(dVar13,0));
      }
    } while (!bVar32);
LAB_8c226d1c:
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)0x8c4aa544,SUB84(in_dr4,0));
      pdVar10 = (double *)((int)0x8c4aa544 + 4);
    }
    else {
      dVar14 = *(undefined4 *)0x8c4aa544;
      pdVar10 = 0x8c4aa544 + 1;
    }
    fVar16 = (float)((ulonglong)dVar14 >> 0x20);
    fVar18 = (float)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar16 < fVar18;
    }
    else {
      bVar32 = dVar14 < dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(fVar16,*(undefined4 *)pdVar10);
      pdVar10 = (double *)((int)pdVar10 + 4);
      dVar30 = in_xd4;
    }
    else {
      dVar30 = *pdVar10;
      pdVar10 = pdVar10 + 1;
    }
    in_xd4 = dVar30;
    if (bVar32) {
      if (in_FPSCR_PR == '\0') {
        bVar32 = fVar18 < SUB84(dVar14,0);
      }
      else {
        bVar32 = dVar28 < dVar14;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)(ulonglong)*(uint *)pdVar10;
      }
      else {
        in_xd6 = *pdVar10;
      }
      fVar16 = SUB84(in_dr6,0);
      if (bVar32) {
        in_xd4 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar18);
          in_xd4 = dVar30;
        }
        if (in_FPSCR_PR == '\0') {
          fVar20 = (float)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(fVar20,SUB84(dVar14,0) - fVar20);
        }
        else {
          dVar14 = dVar14 - dVar14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44(1.0 - SUB84(dVar14,0) * fVar16,fVar16);
        }
        else {
          dVar14 = (double)CONCAT44(0x3f800000,fVar16) -
                   dVar14 * (double)CONCAT44(0x3f800000,fVar16);
        }
      }
      else {
        dVar14 = (double)((ulonglong)in_dr6 & 0xffffffff);
      }
    }
    else {
      dVar14 = (double)CONCAT44(0x3f800000,SUB84(in_dr6,0));
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar10 = (double *)((int)pdVar12 + -4);
      *(int *)((int)pdVar12 + -4) = (int)((ulonglong)dVar14 >> 0x20);
      dVar28 = (double)CONCAT44(fVar18,DAT_8c226de8);
    }
    else {
      pdVar10 = (double *)((int)pdVar12 + -8);
      *(double *)((int)pdVar12 + -8) = dVar14;
      in_xd14 = (double)CONCAT44(0x8c4aa544,DAT_8c226de8);
    }
    uVar2 = *(uint *)pdVar6;
    dVar30 = (double)CONCAT44(0x3f800000,SUB84(dVar15,0));
    fVar16 = (float)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar16 < 1.0;
      dVar30 = (double)CONCAT44(1.0 / fVar16,SUB84(dVar15,0));
    }
    else {
      bVar32 = dVar28 < dVar30;
      dVar30 = dVar30 / dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)((int)pdVar5 + 4));
      pdVar5 = pdVar5 + 1;
    }
    else {
      dVar15 = *pdVar5;
      in_xd4 = pdVar5[1];
      pdVar5 = pdVar5 + 2;
    }
    uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar14,0));
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
    else {
      in_dr6 = *pdVar5;
      pdVar5 = pdVar5 + 1;
    }
    fVar18 = SUB84(dVar28,0);
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(uVar24,(float)(uVar2 & 0xff) * fVar18);
    }
    else {
      dVar21 = (double)CONCAT44(uVar24,(float)(uVar2 & 0xff)) * dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) * SUB84(dVar21,0));
    }
    else {
      dVar13 = dVar13 * dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)pdVar5);
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
    else {
      in_xd6 = *pdVar5;
      pdVar5 = pdVar5 + 1;
    }
    uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
    fVar20 = (float)(uVar2 >> 8 & 0xff);
    if (in_FPSCR_PR == '\0') {
      fVar20 = fVar20 * fVar18;
      dVar21 = (double)CONCAT44(uVar24,fVar20);
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar20,SUB84(dVar13,0));
    }
    else {
      dVar21 = (double)CONCAT44(uVar24,fVar20) * dVar28;
      dVar13 = dVar13 * dVar21;
    }
    uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
    fVar20 = (float)(uVar2 >> 0x10 & 0xff);
    pdVar5 = pdVar5 + -2;
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(uVar24,fVar20 * fVar18);
    }
    else {
      dVar21 = (double)CONCAT44(uVar24,fVar20) * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + 0x1c);
      *(float *)pdVar8 = SUB84(dVar13,0);
    }
    else {
      pdVar8 = pdVar8 + 3;
      *pdVar8 = (double)CONCAT44(in_xf3,in_xf2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * SUB84(dVar21,0));
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * SUB84(dVar27,0));
    }
    else {
      dVar30 = dVar30 * dVar21;
      dVar15 = dVar15 * dVar27;
    }
    uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
    uVar24 = (undefined4)((ulonglong)dVar13 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(undefined4 *)pdVar8 = uVar24;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr4 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * fVar31,SUB84(dVar15,0));
    }
    else {
      in_dr4 = dVar15 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(float *)pdVar8 = SUB84(dVar30,0);
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = (double)CONCAT44(in_xf1,in_xf0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(uVar25,(float)(uVar2 >> 0x18) * fVar18);
    }
    else {
      dVar21 = (double)CONCAT44(uVar25,(float)(uVar2 >> 0x18)) * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(fVar16,*(undefined4 *)pdVar10);
      pdVar12 = (double *)((int)pdVar10 + 4);
    }
    else {
      in_xd14 = *pdVar10;
      pdVar12 = pdVar10 + 1;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * SUB84(dVar28,0));
    }
    else {
      dVar21 = dVar21 * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(int *)pdVar8 = SUB84(dVar21,0);
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = (double)CONCAT44(in_xf11,in_xf10);
    }
    fVar16 = (float)((ulonglong)dVar30 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                fVar16 * SUB84(in_dr4,0) + SUB84(in_dr6,0));
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(float *)pdVar8 = fVar16;
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar30;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44(fVar16 * (float)((ulonglong)in_dr4 >> 0x20) +
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
    pdVar6 = (double *)((int)pdVar6 + 4);
    iVar4 = iVar4 + -1;
    CacheBlockInvalidate(iVar7);
    uVar25 = (undefined4)((ulonglong)dVar21 >> 0x20);
    iVar9 = iVar9 + (uint)bVar32;
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44(uVar24,SUB84(dVar13,0) - 1.0);
    }
    else {
      dVar13 = dVar13 - (double)CONCAT44(uVar25,0x3f800000);
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar8 = (double *)((int)pdVar8 + -4);
      *(int *)pdVar8 = (int)((ulonglong)dVar28 >> 0x20);
    }
    else {
      pdVar8 = pdVar8 + -1;
      *pdVar8 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - 1.0,SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 - (double)CONCAT44(uVar25,0x3f800000);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44(uVar25,SUB84(dVar30,0) + -1.0);
    }
    else {
      dVar30 = (double)CONCAT44(uVar25,0xbf800000) + dVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar8 + 0x3c) = (int)((ulonglong)dVar13 >> 0x20);
      *(int *)(pdVar8 + 7) = (int)((ulonglong)dVar30 >> 0x20);
      *(float *)((int)pdVar8 + 0x34) = fVar29;
      pdVar8 = pdVar8 + 6;
      *(float *)pdVar8 = fVar31;
    }
    else {
      pdVar8[7] = dVar13;
      pdVar8[6] = dVar30;
      pdVar8[5] = dVar19;
      pdVar8 = pdVar8 + 4;
      *pdVar8 = dVar27;
    }
    CacheBlockInvalidate(iVar7 + 0x20);
    iVar7 = iVar7 + 0x40;
    if (iVar4 == 0) {
      return iVar9;
    }
    pdVar8 = pdVar8 + 4;
  } while( true );
}

__asm__(".globl _FUN_8c226c44\n.set _FUN_8c226c44, _FUN_8c226c44_def\n");
