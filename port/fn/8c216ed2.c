#include "../decls.h"
int FUN_8c216ed2_def(short *ar4,int ar5,uint ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint in_r1;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int iVar12;
  undefined4 unaff_r11;
  double *pdVar13;
  undefined4 unaff_r12;
  double *ar5_00;
  undefined4 unaff_r13;
  double *pdVar14;
  undefined4 unaff_r14;
  int iVar15;
  undefined8 *puVar16;
  int *piVar17;
  double *pdVar18;
  double in_dr0;
  double dVar19;
  float in_fr3;
  float extraout_fr3;
  float fVar21;
  double in_dr4;
  double in_dr6;
  float fVar22;
  double in_dr8;
  float fVar25;
  double dVar23;
  double dVar24;
  undefined8 in_dr12;
  double dVar26;
  undefined4 uVar28;
  double dVar27;
  undefined8 in_dr14;
  double dVar29;
  double dVar30;
  double in_xd2;
  double dVar31;
  double in_xd6;
  double dVar32;
  double in_xd8;
  double in_xd12;
  double in_xd14;
  bool bVar33;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  undefined4 uVar20;
  
  uVar2 = 0xf0000000;
  uVar1 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar16 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar16 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar16 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar16 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar16 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar16 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar16 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar16 + -0x1c) = unaff_r8;
  piVar17 = (int *)((int)puVar16 + -0x20);
  *(undefined4 *)((int)puVar16 + -0x20) = in_PR;
  uVar6 = ar6 & in_r1;
  iVar9 = (ar6 >> 0xe & 3) << 1;
  iVar4 = 0;
  iVar5 = 0;
  dVar31 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    in_fr3 = (float)((ulonglong)in_dr4 >> 0x20);
    piVar17 = (int *)((int)puVar16 + -0x20);
    dVar31 = in_xd2;
  }
  do {
    iVar12 = (int)*ar4;
    pdVar13 = (double *)(ar4[1] * 0x10 + ar5);
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    iVar5 = iVar5 + iVar12;
    iVar12 = iVar12 + -2;
    iVar15 = 0;
    if (in_FPSCR_PR == '\0') {
      fVar25 = (float)(int)ar4[2] * in_fr3;
    }
    else {
      fVar25 = (float)((ulonglong)((double)(int)ar4[2] * (double)CONCAT44(0x3f800000,in_fr3)) >>
                      0x20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar23 = (double)CONCAT44(fVar25,(float)(int)ar4[3] * in_fr3);
    }
    else {
      dVar23 = (double)CONCAT44(fVar25,(float)(int)ar4[3]) * (double)CONCAT44(0x3f800000,in_fr3);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(pdVar13 + 1));
    }
    psVar8 = ar4 + 5;
    psVar7 = ar4 + 6;
    ar5_00 = (double *)(ar4[4] * 0x10 + ar5);
    ar4 = ar4 + 7;
    if (in_FPSCR_PR == '\0') {
      fVar25 = (float)(int)*psVar8 * in_fr3;
    }
    else {
      fVar25 = (float)((ulonglong)((double)(int)*psVar8 * (double)CONCAT44(0x3f800000,in_fr3)) >>
                      0x20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44(fVar25,(float)(int)*psVar7 * in_fr3);
    }
    else {
      dVar26 = (double)CONCAT44(fVar25,(float)(int)*psVar7) * (double)CONCAT44(0x3f800000,in_fr3);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(ar5_00 + 1));
      dVar32 = in_xd6;
    }
    else {
      dVar32 = ar5_00[1];
    }
    do {
      pdVar14 = (double *)(*ar4 * 0x10 + ar5);
      psVar8 = ar4 + 3;
      if (in_FPSCR_PR == '\0') {
        fVar25 = (float)(int)ar4[1] * in_fr3;
      }
      else {
        fVar25 = (float)((ulonglong)((double)(int)ar4[1] * (double)CONCAT44(0x3f800000,in_fr3)) >>
                        0x20);
      }
      dVar19 = (double)((ulonglong)in_dr0 & 0xffffffff);
      fVar21 = SUB84(in_dr4,0);
      if (in_FPSCR_PR == '\0') {
        bVar33 = 0.0 < fVar21;
      }
      else {
        bVar33 = dVar19 < in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar29 = (double)CONCAT44(fVar25,(float)(int)ar4[2] * in_fr3);
      }
      else {
        dVar29 = (double)CONCAT44(fVar25,(float)(int)ar4[2]) * (double)CONCAT44(0x3f800000,in_fr3);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(pdVar14 + 1));
      }
      else {
        in_xd8 = pdVar14[1];
      }
      fVar25 = SUB84(in_dr6,0);
      fVar22 = SUB84(in_dr8,0);
      uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
      dVar24 = dVar23;
      dVar27 = dVar26;
      dVar30 = dVar29;
      if (bVar33) {
        if (in_FPSCR_PR == '\0') {
          bVar33 = 0.0 < fVar25;
        }
        else {
          bVar33 = dVar19 < in_dr6;
        }
        if (!bVar33) goto LAB_8c216fd8;
        if (in_FPSCR_PR == '\0') {
          bVar33 = 0.0 < fVar22;
        }
        else {
          bVar33 = dVar19 < in_dr8;
        }
        if (!bVar33) goto LAB_8c216fd8;
        if (in_FPSCR_PR == '\0') {
          bVar33 = 1.0 < fVar21;
        }
        else {
          bVar33 = (double)CONCAT44(0x3f800000,in_fr3) < in_dr4;
        }
        if (bVar33) goto LAB_8c216fd8;
        if (in_FPSCR_PR == '\0') {
          bVar33 = 1.0 < fVar25;
        }
        else {
          bVar33 = (double)CONCAT44(0x3f800000,in_fr3) < in_dr6;
        }
        if (bVar33) goto LAB_8c216fd8;
        if (in_FPSCR_PR == '\0') {
          bVar33 = 1.0 < fVar22;
        }
        else {
          bVar33 = (double)CONCAT44(0x3f800000,in_fr3) < in_dr8;
        }
        if (bVar33) goto LAB_8c216fd8;
        iVar10 = ar7 + 0x20;
        if (iVar15 == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar13,fVar25);
            in_dr4 = (double)CONCAT44(*(undefined4 *)((int)pdVar13 + 4),fVar21);
            pdVar13 = pdVar13 + 1;
          }
          else {
            in_dr6 = *pdVar13;
            in_dr4 = pdVar13[1];
            pdVar13 = pdVar13 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar20 = *(undefined4 *)((int)pdVar13 + 4);
            dVar19 = (double)CONCAT44(uVar20,uVar20);
          }
          else {
            dVar19 = *(double *)((int)pdVar13 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - 1.0);
          }
          else {
            dVar19 = dVar19 - (double)CONCAT44(0x3f800000,in_fr3);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar7 + 0x1c) = (int)((ulonglong)dVar19 >> 0x20);
            *(int *)(ar7 + 0x18) = (int)((ulonglong)dVar23 >> 0x20);
            pdVar13 = (double *)(ar7 + 0x14);
            *(int *)pdVar13 = (int)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            *(double *)(ar7 + 0x18) = dVar19;
            *(double *)(ar7 + 0x10) = dVar23;
            pdVar13 = (double *)(ar7 + 8);
            *pdVar13 = in_dr4;
          }
          iVar15 = 1;
          if (in_FPSCR_SZ == '\0') {
            pdVar13 = (double *)((int)pdVar13 + -4);
            *(int *)pdVar13 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar13 = pdVar13 + -1;
            *pdVar13 = in_dr6;
          }
          *(undefined4 *)((int)pdVar13 + -4) = uVar1;
          iVar10 = (int)pdVar13 + 0x3c;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(*(undefined4 *)ar5_00,SUB84(in_dr4,0));
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)ar5_00 + 4),SUB84(in_dr6,0));
          pdVar13 = ar5_00 + 1;
        }
        else {
          in_dr4 = *ar5_00;
          in_dr6 = ar5_00[1];
          pdVar13 = ar5_00 + 2;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar20 = *(undefined4 *)((int)pdVar13 + 4);
          dVar23 = (double)CONCAT44(uVar20,uVar20);
        }
        else {
          dVar23 = *(double *)((int)pdVar13 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) - 1.0);
        }
        else {
          in_dr0 = dVar23 - (double)CONCAT44(0x3f800000,in_fr3);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar10 + -4) = (int)((ulonglong)in_dr0 >> 0x20);
          *(undefined4 *)(iVar10 + -8) = uVar28;
          *(int *)(iVar10 + -0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar13 = (double *)(iVar10 + -0x10);
          *(int *)pdVar13 = (int)((ulonglong)in_dr4 >> 0x20);
        }
        else {
          *(double *)(iVar10 + -8) = in_dr0;
          *(double *)(iVar10 + -0x10) = dVar26;
          *(double *)(iVar10 + -0x18) = in_dr6;
          pdVar13 = (double *)(iVar10 + -0x18) + -1;
          *pdVar13 = in_dr4;
        }
        iVar15 = iVar15 + 1;
        *(undefined4 *)((int)pdVar13 + -4) = uVar1;
        ar7 = (int)pdVar13 + 0x1c;
      }
      else {
LAB_8c216fd8:
        if (iVar15 != 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44(*(undefined4 *)ar5_00,fVar21);
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)ar5_00 + 4),fVar25);
            pdVar11 = ar5_00 + 1;
          }
          else {
            in_dr4 = *ar5_00;
            in_dr6 = ar5_00[1];
            pdVar11 = ar5_00 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar20 = *(undefined4 *)((int)pdVar11 + 4);
            dVar19 = (double)CONCAT44(uVar20,uVar20);
          }
          else {
            dVar19 = *(double *)((int)pdVar11 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - 1.0);
          }
          else {
            dVar19 = dVar19 - (double)CONCAT44(0x3f800000,in_fr3);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar7 + 0x1c) = (int)((ulonglong)dVar19 >> 0x20);
            pdVar11 = (double *)(ar7 + 0x18);
            *(undefined4 *)pdVar11 = uVar28;
          }
          else {
            *(double *)(ar7 + 0x18) = dVar19;
            pdVar11 = (double *)(ar7 + 0x10);
            *pdVar11 = dVar26;
          }
          iVar4 = iVar4 + iVar15;
          if (in_FPSCR_SZ == '\0') {
            pdVar11 = (double *)((int)pdVar11 + -4);
            *(int *)pdVar11 = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar11 = pdVar11 + -1;
            *pdVar11 = in_dr6;
          }
          iVar15 = 0;
          iVar4 = iVar4 + 1;
          if (in_FPSCR_SZ == '\0') {
            pdVar11 = (double *)((int)pdVar11 + -4);
            *(int *)pdVar11 = (int)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            pdVar11 = pdVar11 + -1;
            *pdVar11 = in_dr4;
          }
          *(undefined4 *)((int)pdVar11 + -4) = uVar2;
          ar7 = (int)pdVar11 + 0x1c;
        }
        in_dr0 = (double)((ulonglong)dVar19 & 0xffffffff);
        if (in_FPSCR_PR == '\0') {
          bVar33 = 0.0 < SUB84(in_dr4,0);
        }
        else {
          bVar33 = in_dr0 < in_dr4;
        }
        fVar25 = SUB84(in_dr6,0);
        if (bVar33) {
          if (in_FPSCR_PR == '\0') {
            bVar33 = SUB84(in_dr4,0) < 1.0;
          }
          else {
            bVar33 = in_dr4 < (double)CONCAT44(0x3f800000,in_fr3);
          }
          if (!bVar33) goto LAB_8c21700e;
LAB_8c217098:
          *(int *)((int)piVar17 + -4) = iVar9;
          *(int *)((int)piVar17 + -8) = ar5;
          *(short **)((int)piVar17 + -0xc) = psVar8;
          *(uint *)((int)piVar17 + -0x10) = uVar6;
          *(int *)((int)piVar17 + -0x14) = iVar5;
          *(int *)((int)piVar17 + -0x18) = iVar4;
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)piVar17 + -0x1c) = in_fr3;
            *(float *)((int)piVar17 + -0x20) = fVar25;
            pdVar11 = (double *)((int)piVar17 + -0x24);
            *(float *)((int)piVar17 + -0x24) = fVar22;
          }
          else {
            *(double *)((int)piVar17 + -0x20) = dVar31;
            *(double *)((int)piVar17 + -0x28) = dVar32;
            pdVar11 = (double *)((int)piVar17 + -0x30);
            *(double *)((int)piVar17 + -0x30) = in_xd8;
            in_xd8 = in_xd14;
            dVar32 = in_xd12;
          }
          ar7 = FUN_8c2170f4(pdVar13,ar5_00,pdVar14,ar7);
          if (in_FPSCR_SZ == '\0') {
            in_fr3 = *(float *)(pdVar11 + 1);
            pdVar18 = (double *)((int)pdVar11 + 0xc);
            in_dr6 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                      *(undefined4 *)((int)pdVar11 + 4));
            in_dr8 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)pdVar11);
          }
          else {
            in_xd8 = *pdVar11;
            dVar32 = pdVar11[1];
            dVar31 = pdVar11[2];
            pdVar18 = pdVar11 + 3;
            in_fr3 = extraout_fr3;
            in_dr6 = dVar26;
            in_dr8 = dVar29;
          }
          iVar4 = *(int *)pdVar18;
          iVar5 = *(int *)((int)pdVar18 + 4);
          uVar6 = *(uint *)((int)pdVar18 + 8);
          psVar8 = *(short **)((int)pdVar18 + 0xc);
          ar5 = *(int *)((int)pdVar18 + 0x10);
          iVar9 = *(int *)((int)pdVar18 + 0x14);
          piVar17 = (int *)((int)pdVar18 + 0x18);
          in_dr4 = dVar23;
        }
        else {
LAB_8c21700e:
          if (in_FPSCR_PR == '\0') {
            bVar33 = 0.0 < fVar25;
          }
          else {
            bVar33 = in_dr0 < in_dr6;
          }
          if (bVar33) {
            if (in_FPSCR_PR == '\0') {
              bVar33 = fVar25 < 1.0;
            }
            else {
              bVar33 = in_dr6 < (double)CONCAT44(0x3f800000,in_fr3);
            }
            if (bVar33) goto LAB_8c217098;
          }
          if (in_FPSCR_PR == '\0') {
            bVar33 = 0.0 < fVar22;
          }
          else {
            bVar33 = in_dr0 < in_dr8;
          }
          if (bVar33) {
            if (in_FPSCR_PR == '\0') {
              bVar33 = fVar22 < 1.0;
            }
            else {
              bVar33 = in_dr8 < (double)CONCAT44(0x3f800000,in_fr3);
            }
            if (bVar33) goto LAB_8c217098;
          }
        }
      }
      ar4 = (short *)((int)psVar8 + iVar9);
      uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
      dVar26 = dVar30;
      dVar23 = dVar27;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar24,0));
      }
      iVar12 = iVar12 + -1;
      in_xd6 = in_xd8;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr6,0));
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr8,0));
        in_xd6 = dVar32;
      }
      pdVar13 = ar5_00;
      ar5_00 = pdVar14;
      dVar32 = in_xd6;
    } while (iVar12 != 0);
    if (iVar15 != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar14,SUB84(in_dr4,0));
        in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar14 + 4),SUB84(in_dr8,0));
        pdVar14 = pdVar14 + 1;
      }
      else {
        in_dr4 = *pdVar14;
        in_dr8 = pdVar14[1];
        pdVar14 = pdVar14 + 2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar20 = *(undefined4 *)((int)pdVar14 + 4);
        dVar23 = (double)CONCAT44(uVar20,uVar20);
      }
      else {
        dVar23 = *(double *)((int)pdVar14 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) - 1.0);
      }
      else {
        in_dr0 = dVar23 - (double)CONCAT44(0x3f800000,in_fr3);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar7 + 0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
        pdVar13 = (double *)(ar7 + 0x18);
        *(undefined4 *)pdVar13 = uVar28;
      }
      else {
        *(double *)(ar7 + 0x18) = in_dr0;
        pdVar13 = (double *)(ar7 + 0x10);
        *pdVar13 = dVar30;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar13 + -4) = (int)((ulonglong)in_dr8 >> 0x20);
        pdVar13 = pdVar13 + -1;
        *(int *)pdVar13 = (int)((ulonglong)in_dr4 >> 0x20);
      }
      else {
        pdVar13[-1] = in_dr8;
        pdVar13 = pdVar13 + -1 + -1;
        *pdVar13 = in_dr4;
      }
      *(undefined4 *)((int)pdVar13 + -4) = uVar2;
      iVar4 = iVar4 + iVar15 + 1;
      ar7 = (int)pdVar13 + 0x1c;
    }
    piVar3 = 0x8c4aa51c;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      iVar9 = *(undefined4 *)0x8c4aa51c;
      *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar4;
      *piVar3 = iVar9 + iVar5;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c216ed2\n.set _FUN_8c216ed2, _FUN_8c216ed2_def\n");
