#include "../decls.h"
int FUN_8c227144_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 unaff_r8;
  int iVar9;
  undefined4 unaff_r9;
  uint uVar10;
  double *pdVar11;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 *puVar12;
  double in_dr0;
  double dVar13;
  double dVar14;
  double in_dr4;
  double dVar15;
  float fVar16;
  double in_dr6;
  double dVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  double dVar28;
  float fVar30;
  float fVar31;
  double dVar29;
  double in_xd0;
  float in_xf2;
  float in_xf3;
  double in_xd4;
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
  undefined1 auStack_10 [16];
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = auStack_10;
  }
  else {
    puVar12 = auStack_20;
  }
  *(undefined4 *)(puVar12 + -4) = unaff_r11;
  *(undefined4 *)(puVar12 + -8) = unaff_r10;
  *(undefined4 *)(puVar12 + -0xc) = unaff_r9;
  *(undefined4 *)(puVar12 + -0x10) = unaff_r8;
  iVar3 = *ar4;
  pdVar7 = (double *)(uint)ar4[1];
  iVar6 = ar4[2];
  pdVar4 = (double *)(ar4 + 4);
  iVar9 = 0;
  uVar5 = ar5 >> 8 & 0xff;
  do {
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(*(uint *)pdVar7,*(uint *)((int)pdVar7 + 4));
      fVar30 = *(float *)(pdVar7 + 1);
      pdVar7 = (double *)((int)pdVar7 + 0xc);
    }
    else {
      dVar28 = *pdVar7;
      in_xd12 = pdVar7[1];
      fVar30 = (float)((ulonglong)pdVar7[2] >> 0x20);
      pdVar7 = pdVar7 + 3;
    }
    dVar29 = (double)CONCAT44(fVar30,0x3f800000);
                    
    fVar19 = (float)((ulonglong)in_xd0 >> 0x20);
    fVar16 = (float)((ulonglong)in_xd4 >> 0x20);
    fVar18 = (float)((ulonglong)in_xd6 >> 0x20);
    fVar23 = (float)((ulonglong)in_xd12 >> 0x20);
    fVar24 = (float)((ulonglong)in_xd14 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar31 = SUB84(dVar28,0);
      fVar22 = (float)((ulonglong)dVar28 >> 0x20);
      fVar27 = SUB84(in_xd0,0) * fVar31 + SUB84(in_xd4,0) * fVar22 + SUB84(in_xd8,0) * 1.0 +
               SUB84(in_xd12,0) * fVar30;
      fVar27 = fVar19 * fVar31 + fVar16 * fVar22 + (float)((ulonglong)in_xd8 >> 0x20) * 1.0 +
               fVar23 * fVar30;
      fVar27 = in_xf2 * fVar31 + SUB84(in_xd6,0) * fVar22 + in_xf10 * 1.0 +
               SUB84(in_xd14,0) * fVar30;
      fVar30 = in_xf3 * fVar31 + fVar18 * fVar22 + in_xf11 * 1.0 + fVar24 * fVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(uint *)pdVar7,*(uint *)((int)pdVar7 + 4));
      dVar21 = (double)((ulonglong)*(uint *)(pdVar7 + 1) << 0x20);
      pdVar8 = (double *)((int)pdVar7 + 0xc);
    }
    else {
      dVar20 = *pdVar7;
      in_xd8 = pdVar7[1];
      dVar21 = pdVar7[2];
      pdVar8 = pdVar7 + 3;
    }
    dVar21 = (double)((ulonglong)dVar21 & 0xffffffff00000000);
    pdVar7 = (double *)((int)pdVar8 + 4);
                    
    if (in_FPSCR_PR == '\0') {
      fVar31 = SUB84(dVar20,0);
      fVar27 = (float)((ulonglong)dVar20 >> 0x20);
      fVar22 = (float)((ulonglong)dVar21 >> 0x20);
      fVar30 = SUB84(in_xd0,0) * fVar31 + SUB84(in_xd4,0) * fVar27 + SUB84(in_xd8,0) * 0.0 +
               SUB84(in_xd12,0) * fVar22;
      fVar30 = fVar19 * fVar31 + fVar16 * fVar27 + (float)((ulonglong)in_xd8 >> 0x20) * 0.0 +
               fVar23 * fVar22;
      fVar30 = in_xf2 * fVar31 + SUB84(in_xd6,0) * fVar27 + in_xf10 * 0.0 +
               SUB84(in_xd14,0) * fVar22;
      fVar30 = in_xf3 * fVar31 + fVar18 * fVar27 + in_xf11 * 0.0 + fVar24 * fVar22;
    }
    uVar10 = *(uint *)pdVar8 >> 0x10;
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)uVar10,SUB84(in_dr0,0));
    }
    else {
      dVar13 = (double)uVar10;
    }
    pdVar8 = (double *)((short)*(uint *)pdVar8 * 0x40 + iVar6);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(undefined4)DAT_8c227334);
    }
    else {
      in_xd0 = (double)CONCAT44(0x8c4aa544,(undefined4)DAT_8c227334);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar13,0),SUB84(dVar13,0)
                               );
    }
    else {
      in_dr0 = dVar13 * dVar13;
    }
    fVar30 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar19 = SUB84(dVar20,0);
    fVar16 = (float)((ulonglong)dVar20 >> 0x20);
    fVar23 = SUB84(dVar28,0);
    fVar24 = (float)((ulonglong)dVar28 >> 0x20);
    fVar18 = (float)((ulonglong)dVar21 >> 0x20);
    fVar31 = (float)((ulonglong)dVar29 >> 0x20);
    if (uVar5 == 0) {
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44(fVar18 * fVar30,SUB84(dVar21,0));
        dVar20 = (double)CONCAT44(fVar16 * fVar30,fVar19 * fVar30);
      }
      else {
        dVar21 = dVar21 * in_dr0;
        dVar20 = dVar20 * in_dr0 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + 0x1c);
        *(int *)pdVar8 = (int)((ulonglong)dVar21 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + 3;
        *pdVar8 = dVar21;
      }
      if (in_FPSCR_PR == '\0') {
        dVar29 = (double)CONCAT44(fVar31 * fVar30,SUB84(dVar29,0));
      }
      else {
        dVar29 = dVar29 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = (int)((ulonglong)dVar20 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44(fVar24,fVar23 * fVar30);
      }
      else {
        dVar28 = dVar28 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = (int)((ulonglong)dVar29 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar29;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar30,SUB84(dVar28,0));
      }
      else {
        dVar28 = dVar28 * in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar8 + -4) = (int)((ulonglong)dVar28 >> 0x20);
      }
      else {
        pdVar8[-1] = dVar28;
      }
    }
    else if (uVar5 == 1) {
      if (in_FPSCR_SZ == '\0') {
        dVar28 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr4,0));
        dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(in_dr6,0));
        pdVar8 = pdVar8 + 1;
      }
      else {
        dVar28 = *pdVar8;
        dVar29 = pdVar8[1];
        pdVar8 = pdVar8 + 2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44(fVar30 * fVar24 + (float)((ulonglong)dVar28 >> 0x20),
                                  fVar30 * fVar23 + SUB84(dVar28,0));
        dVar29 = (double)CONCAT44(fVar30 * fVar31 + (float)((ulonglong)dVar29 >> 0x20),
                                  SUB84(dVar29,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar8 + -4) = (int)((ulonglong)dVar29 >> 0x20);
        pdVar8 = pdVar8 + -1;
        *(int *)pdVar8 = (int)((ulonglong)dVar28 >> 0x20);
      }
      else {
        pdVar8[-1] = dVar29;
        pdVar8 = pdVar8 + -2;
        *pdVar8 = dVar28;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 2),SUB84(dVar28,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),SUB84(dVar29,0));
        pdVar8 = pdVar8 + 3;
      }
      else {
        in_dr4 = pdVar8[2];
        in_dr6 = pdVar8[3];
        pdVar8 = pdVar8 + 4;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr4 = (double)CONCAT44(fVar30 * fVar16 + (float)((ulonglong)in_dr4 >> 0x20),
                                  fVar30 * fVar19 + SUB84(in_dr4,0));
        in_dr6 = (double)CONCAT44(fVar30 * fVar18 + (float)((ulonglong)in_dr6 >> 0x20),
                                  SUB84(in_dr6,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar8 + -4) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(pdVar8 + -1) = (int)((ulonglong)in_dr4 >> 0x20);
      }
      else {
        pdVar8[-1] = in_dr6;
        pdVar8[-2] = in_dr4;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar28 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr4,0));
        pdVar8 = (double *)((int)pdVar8 + 4);
      }
      else {
        dVar28 = *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44(fVar30 * fVar24 + (float)((ulonglong)dVar28 >> 0x20),
                                  SUB84(dVar28,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar28,0));
        pdVar8 = (double *)((int)pdVar8 + 4);
        dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),fVar23);
      }
      else {
        dVar20 = *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44(fVar30 * SUB84(dVar28,0) + (float)((ulonglong)dVar20 >> 0x20),
                                  SUB84(dVar20,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),(int)((ulonglong)dVar20 >> 0x20))
        ;
        dVar13 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar20,0));
        pdVar8 = (double *)((int)pdVar8 + 4);
      }
      else {
        dVar13 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        in_xd12 = dVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44(fVar30 * fVar31 + (float)((ulonglong)dVar13 >> 0x20),
                                  SUB84(dVar13,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar13,0));
        pdVar8 = pdVar8 + 1;
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar29,0));
      }
      else {
        dVar20 = *(double *)((int)pdVar8 + 4);
        pdVar8 = (double *)((int)pdVar8 + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44(fVar30 * fVar16 + (float)((ulonglong)dVar20 >> 0x20),
                                  SUB84(dVar20,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar29 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar20,0));
        pdVar8 = (double *)((int)pdVar8 + 4);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar19);
      }
      else {
        dVar29 = *pdVar8;
        pdVar8 = pdVar8 + 1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar29 = (double)CONCAT44(fVar30 * SUB84(dVar20,0) + (float)((ulonglong)dVar29 >> 0x20),
                                  SUB84(dVar29,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),(int)((ulonglong)dVar29 >> 0x20))
        ;
        dVar15 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar29,0));
        pdVar8 = (double *)((int)pdVar8 + 4);
      }
      else {
        dVar15 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        in_xd8 = dVar29;
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44(fVar30 * fVar18 + (float)((ulonglong)dVar15 >> 0x20),
                                  SUB84(dVar15,0));
      }
      dVar29 = dVar15;
      if (in_FPSCR_SZ == '\0') {
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar21,0));
      }
      dVar21 = 0.0;
      uVar10 = *(undefined4 *)0x8c4c0ed0;
      pdVar11 = (double *)(0x8c4c0ed0 + 4);
      dVar14 = 0.0;
      do {
        bVar32 = (uVar10 & 1) != 0;
        uVar10 = uVar10 >> 1 | (uint)bVar32 << 0x1f;
        while( true ) {
          while( true ) {
            while( true ) {
              bVar33 = (uVar10 & 1) != 0;
              uVar10 = uVar10 >> 1;
              uVar2 = uVar10 | (uint)bVar33 << 0x1f;
              fVar19 = (float)((ulonglong)dVar28 >> 0x20);
              fVar30 = (float)((ulonglong)dVar20 >> 0x20);
              if (bVar32) break;
              bVar33 = (uVar10 & 1) != 0;
              pdVar11 = pdVar11 + 4;
              if (bVar33) goto LAB_8c2272ac;
              bVar32 = (uVar10 & 2) != 0;
              uVar10 = (uVar2 >> 1 | (uint)bVar33 << 0x1f) >> 1 | (uint)bVar32 << 0x1f;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar15 = (double)CONCAT44(*(undefined4 *)pdVar11,*(undefined4 *)((int)pdVar11 + 4));
              pdVar1 = pdVar11 + 1;
            }
            else {
              dVar15 = *pdVar11;
              in_xd4 = pdVar11[1];
              pdVar1 = pdVar11 + 2;
            }
            fVar24 = (float)((ulonglong)dVar29 >> 0x20);
            fVar18 = SUB84(dVar15,0);
            fVar23 = (float)((ulonglong)dVar15 >> 0x20);
            fVar16 = (float)((ulonglong)dVar14 >> 0x20);
            uVar26 = SUB84(dVar21,0);
            if (bVar33) break;
            if (in_FPSCR_SZ == '\0') {
              dVar17 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr6,0));
              pdVar1 = (double *)((int)pdVar1 + 4);
            }
            else {
              dVar17 = *pdVar1;
              pdVar1 = pdVar1 + 1;
            }
            dVar29 = (double)((ulonglong)(uint)fVar24 << 0x20);
                    
            if (in_FPSCR_PR == '\0') {
              fVar23 = SUB84(dVar20,0) * fVar18 + fVar30 * fVar23 + SUB84(dVar17,0) * 0.0 +
                       fVar24 * (float)((ulonglong)dVar17 >> 0x20);
            }
            in_dr6 = (double)((ulonglong)dVar17 & 0xffffffff00000000);
            if (in_FPSCR_PR == '\0') {
              bVar32 = SUB84(dVar29,0) < 0.0;
            }
            else {
              bVar32 = dVar29 < in_dr6;
            }
            pdVar11 = (double *)((int)pdVar1 + 0x14);
            bVar33 = (uVar10 & 1) != 0;
            uVar2 = uVar2 >> 1 | (uint)bVar33 << 0x1f;
            if (bVar32) {
              if (in_FPSCR_SZ == '\0') {
                dVar21 = (double)CONCAT44(SUB84(dVar29,0),uVar26);
                dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar1 + 1),fVar18);
                pdVar1 = (double *)((int)pdVar1 + 0xc);
              }
              else {
                dVar21 = (double)CONCAT44(in_xf11,in_xf10);
                dVar15 = pdVar1[1];
                pdVar1 = pdVar1 + 2;
              }
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44(-(float)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0));
              }
              else {
                dVar21 = -dVar21;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar1);
                pdVar1 = (double *)((int)pdVar1 + 4);
              }
              else {
                in_xd4 = *pdVar1;
                pdVar1 = pdVar1 + 1;
              }
              if (in_FPSCR_PR == '\0') {
                fVar18 = (float)((ulonglong)dVar21 >> 0x20);
                dVar21 = (double)CONCAT44(fVar18,fVar18 * (float)((ulonglong)dVar15 >> 0x20) +
                                                 SUB84(dVar21,0));
              }
              if (in_FPSCR_SZ == '\0') {
                in_dr6 = (double)((ulonglong)*(uint *)pdVar1 << 0x20);
                pdVar11 = (double *)((int)pdVar1 + 4);
              }
              else {
                in_dr6 = *pdVar1;
                pdVar11 = pdVar1 + 1;
              }
              fVar18 = (float)((ulonglong)dVar21 >> 0x20);
              if (in_FPSCR_PR == '\0') {
                dVar14 = (double)CONCAT44(fVar18 * SUB84(dVar15,0) + fVar16,
                                          fVar18 * (float)((ulonglong)in_dr6 >> 0x20) +
                                          SUB84(dVar14,0));
              }
              if (bVar33) goto LAB_8c2272ac;
              bVar32 = (uVar10 & 2) != 0;
              uVar10 = uVar2 >> 1 | (uint)bVar32 << 0x1f;
            }
            else {
              if (bVar33) goto LAB_8c2272ac;
              bVar32 = (uVar10 & 2) != 0;
              uVar10 = uVar2 >> 1 | (uint)bVar32 << 0x1f;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44(fVar23 - fVar19,fVar18);
          }
          else {
            dVar15 = dVar15 - dVar28;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(in_dr6,0));
            pdVar1 = (double *)((int)pdVar1 + 4);
          }
          else {
            dVar29 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) - SUB84(dVar28,0));
          }
          else {
            dVar15 = dVar15 - dVar28;
          }
          fVar18 = (float)((ulonglong)dVar13 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            in_dr6 = (double)((ulonglong)(uint)((float)((ulonglong)dVar29 >> 0x20) - fVar18) << 0x20
                             );
          }
          else {
            in_dr6 = (double)((ulonglong)dVar29 & 0xffffffff00000000) - dVar13;
          }
          dVar29 = (double)((ulonglong)(uint)fVar24 << 0x20);
          dVar21 = (double)((ulonglong)dVar21 & 0xffffffff);
                    
          fVar23 = SUB84(dVar15,0);
          fVar31 = (float)((ulonglong)dVar15 >> 0x20);
          fVar27 = SUB84(in_dr6,0);
          fVar22 = (float)((ulonglong)in_dr6 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            fVar24 = SUB84(dVar20,0) * fVar23 + fVar30 * fVar31 + fVar27 * 0.0 + fVar24 * fVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(fVar18,*(undefined4 *)pdVar1);
            pdVar1 = (double *)((int)pdVar1 + 4);
          }
          else {
            in_xd14 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
                    
          if (in_FPSCR_PR == '\0') {
            fVar18 = fVar23 * fVar23 + fVar31 * fVar31 + fVar27 * fVar27 + fVar22 * fVar22;
            bVar32 = 0.0 < SUB84(dVar29,0);
          }
          else {
            bVar32 = dVar21 < dVar29;
          }
          fVar18 = SUB84(in_dr6,0);
          dVar15 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(fVar18,fVar23);
          }
          if (in_FPSCR_PR == '\0') {
            bVar33 = fVar18 < SUB84(dVar13,0);
            dVar15 = (double)CONCAT44(1.0 / SQRT((float)((ulonglong)dVar15 >> 0x20)),SUB84(dVar15,0)
                                     );
          }
          else {
            bVar33 = in_dr6 < dVar13;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)pdVar1);
            pdVar1 = (double *)((int)pdVar1 + 4);
          }
          else {
            in_xd14 = *pdVar1;
            pdVar1 = pdVar1 + 1;
          }
          if ((byte)(bVar32 << 1 | bVar33) == 3) break;
          bVar33 = (uVar10 & 1) != 0;
          pdVar11 = (double *)((int)pdVar1 + 0xc);
          if (bVar33) goto LAB_8c2272ac;
          bVar32 = (uVar10 & 2) != 0;
          uVar10 = (uVar2 >> 1 | (uint)bVar33 << 0x1f) >> 1 | (uint)bVar32 << 0x1f;
        }
        fVar23 = (float)((ulonglong)dVar15 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) * fVar23);
          bVar32 = SUB84(dVar13,0) < fVar18;
          dVar15 = (double)CONCAT44(fVar23 * fVar23,SUB84(dVar15,0));
        }
        else {
          dVar29 = dVar29 * dVar15;
          bVar32 = dVar13 < in_dr6;
          dVar15 = dVar15 * dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)pdVar1);
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_xd4 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (bVar32) {
          if (in_FPSCR_PR == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      SUB84(dVar29,0) * SUB84(dVar13,0) *
                                      (float)((ulonglong)dVar15 >> 0x20));
          }
          else {
            dVar29 = dVar29 * dVar13 * dVar15;
          }
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(SUB84(dVar29,0),uVar26);
        }
        else {
          dVar21 = (double)CONCAT44(in_xf11,in_xf10);
        }
        bVar32 = (uVar10 & 1) != 0;
        uVar10 = uVar2 >> 1 | (uint)bVar32 << 0x1f;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar15,0));
          pdVar1 = (double *)((int)pdVar1 + 4);
        }
        else {
          dVar15 = *pdVar1;
          pdVar1 = pdVar1 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          fVar23 = (float)((ulonglong)dVar21 >> 0x20);
          dVar21 = (double)CONCAT44(fVar23,fVar23 * SUB84(dVar15,0) + SUB84(dVar21,0));
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar18);
          pdVar11 = (double *)((int)pdVar1 + 4);
        }
        else {
          in_dr6 = *pdVar1;
          pdVar11 = pdVar1 + 1;
        }
        fVar18 = (float)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44(fVar18 * (float)((ulonglong)dVar15 >> 0x20) + fVar16,
                                    fVar18 * (float)((ulonglong)in_dr6 >> 0x20) + SUB84(dVar14,0));
        }
      } while (!bVar32);
LAB_8c2272ac:
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)0x8c4aa544,SUB84(dVar15,0));
        pdVar11 = (double *)((int)0x8c4aa544 + 4);
      }
      else {
        dVar15 = *(undefined4 *)0x8c4aa544;
        pdVar11 = 0x8c4aa544 + 1;
      }
      fVar16 = (float)((ulonglong)dVar15 >> 0x20);
      fVar18 = (float)((ulonglong)dVar13 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar32 = fVar16 < fVar18;
      }
      else {
        bVar32 = dVar15 < dVar13;
      }
      if (bVar32) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(fVar16,*(undefined4 *)pdVar11);
          pdVar11 = (double *)((int)pdVar11 + 4);
        }
        else {
          in_xd4 = *pdVar11;
          pdVar11 = pdVar11 + 1;
        }
        if (in_FPSCR_PR == '\0') {
          bVar32 = fVar18 < SUB84(dVar15,0);
        }
        else {
          bVar32 = dVar13 < dVar15;
        }
        if (bVar32) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)pdVar11);
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar18);
            dVar13 = in_xd4;
          }
          else {
            in_xd6 = *pdVar11;
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)((ulonglong)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar16,SUB84(dVar15,0) - fVar16);
          }
          else {
            dVar15 = dVar15 - dVar15;
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44(fVar18,1.0 - SUB84(dVar15,0) * SUB84(in_dr6,0));
          }
          else {
            dVar15 = (double)CONCAT44(fVar18,0x3f800000) - dVar15 * in_dr6;
          }
        }
        else {
          dVar15 = (double)((ulonglong)(uint)fVar18 << 0x20);
          dVar13 = in_xd4;
        }
      }
      else {
        dVar15 = (double)CONCAT44(fVar18,0x3f800000);
        dVar13 = in_xd4;
      }
      dVar17 = (double)CONCAT44(0x3f800000,SUB84(dVar21,0));
      fVar16 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar32 = fVar16 < 1.0;
        in_dr0 = (double)CONCAT44(1.0 / fVar16,SUB84(dVar21,0));
      }
      else {
        bVar32 = dVar15 < dVar17;
        in_dr0 = dVar17 / dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)pdVar4,*(undefined4 *)((int)pdVar4 + 4));
        in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 1),SUB84(in_dr6,0));
        pdVar4 = (double *)((int)pdVar4 + 0xc);
        in_xd4 = dVar13;
      }
      else {
        dVar21 = *pdVar4;
        in_xd4 = pdVar4[1];
        in_dr6 = pdVar4[2];
        pdVar4 = pdVar4 + 3;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)pdVar4);
        pdVar4 = (double *)((int)pdVar4 + 4);
      }
      else {
        in_xd6 = *pdVar4;
        pdVar4 = pdVar4 + 1;
      }
      pdVar4 = pdVar4 + -2;
      if (in_FPSCR_SZ == '\0') {
        *(float *)pdVar8 = SUB84(dVar14,0);
      }
      else {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *pdVar8 = (double)CONCAT44(in_xf3,in_xf2);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * SUB84(dVar28,0)
                                 );
      }
      else {
        dVar21 = dVar21 * dVar28;
      }
      uVar26 = (undefined4)((ulonglong)dVar14 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(undefined4 *)pdVar8 = uVar26;
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar14;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr4 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * fVar19,SUB84(dVar21,0));
      }
      else {
        in_dr4 = dVar21 * dVar28;
      }
      uVar25 = (undefined4)((ulonglong)dVar29 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = SUB84(in_dr0,0);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_xd0;
      }
      if (in_FPSCR_PR == '\0') {
        dVar29 = (double)CONCAT44(uVar25,SUB84(dVar15,0) * 1.0);
      }
      else {
        dVar29 = (double)CONCAT44(uVar25,0x3f800000) * dVar15;
      }
      fVar18 = SUB84(dVar29,0);
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar18;
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = (double)CONCAT44(in_xf11,in_xf10);
      }
      fVar23 = (float)((ulonglong)in_dr0 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                  fVar23 * SUB84(in_dr4,0) + SUB84(in_dr6,0));
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar23;
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_dr0;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr6 = (double)CONCAT44(fVar23 * (float)((ulonglong)in_dr4 >> 0x20) +
                                  (float)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0));
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = SUB84(in_dr6,0);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44(uVar26,SUB84(dVar14,0) - fVar18);
      }
      else {
        dVar14 = dVar14 - dVar29;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(int *)pdVar8 = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) - fVar18,SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 - dVar29;
      }
      iVar9 = iVar9 + (uint)bVar32;
      uVar26 = (undefined4)((ulonglong)dVar29 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        pdVar8 = (double *)((int)pdVar8 + -4);
        *(float *)pdVar8 = fVar16;
      }
      else {
        pdVar8 = pdVar8 + -1;
        *pdVar8 = dVar15;
      }
      if (in_FPSCR_PR == '\0') {
        dVar29 = (double)CONCAT44(uVar26,-fVar18 + SUB84(in_dr0,0));
      }
      else {
        dVar29 = (double)CONCAT44(uVar26,-fVar18) + in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar8 + 0x3c) = (int)((ulonglong)dVar14 >> 0x20);
        *(int *)(pdVar8 + 7) = (int)((ulonglong)dVar29 >> 0x20);
        *(float *)((int)pdVar8 + 0x34) = fVar30;
        *(float *)(pdVar8 + 6) = fVar19;
      }
      else {
        pdVar8[7] = dVar14;
        pdVar8[6] = dVar29;
        pdVar8[5] = dVar20;
        pdVar8[4] = dVar28;
      }
    }
    bVar32 = iVar3 == 1;
    iVar3 = iVar3 + -1;
    if (bVar32) {
      return iVar9;
    }
  } while( true );
}

__asm__(".globl _FUN_8c227144\n.set _FUN_8c227144, _FUN_8c227144_def\n");
