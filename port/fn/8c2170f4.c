#include "../decls.h"
undefined8 * FUN_8c2170f4_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  double in_dr0;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double in_dr4;
  double dVar20;
  undefined4 uVar21;
  double in_dr6;
  double dVar22;
  float fVar23;
  double in_dr8;
  double dVar24;
  double dVar25;
  undefined4 in_fr11;
  double dVar26;
  undefined8 in_dr12;
  double dVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double dVar31;
  undefined8 in_xd12;
  undefined8 uVar32;
  undefined8 in_xd14;
  bool bVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  uint auStack_a8 [2];
  float afStack_a0 [25];
  undefined1 auStack_3c [16];
  undefined8 auStack_2c [2];
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = auStack_2c;
    auStack_2c[0] = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar10 = (undefined8 *)auStack_3c;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(_DAT_8c4aa4b8,(int)in_dr12);
      dVar14 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      dVar29 = (double)CONCAT44(_DAT_8c4aa4b4,_DAT_8c4aa4a8);
      uVar21 = _DAT_8c4aa4a8;
      uVar32 = CONCAT44(_DAT_8c4aa4a8,in_fr11);
    }
    else {
      in_xd14 = CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
      dVar29 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      dVar27 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      dVar14 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
      uVar21 = _DAT_8c4aa4ac;
      uVar32 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) * SUB84(dVar14,0));
    }
    else {
      dVar29 = dVar29 * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),uVar21);
      uVar32 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                SUB84(dVar27,0) * (float)((ulonglong)dVar14 >> 0x20));
    }
    else {
      dVar27 = dVar27 * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)(ulonglong)*(uint *)(ar4 + 1);
    }
    else {
      in_xd2 = ar4[1];
    }
    fVar13 = SUB84(dVar14,0);
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44(1.0 / fVar13,fVar13);
      dVar26 = (double)CONCAT44(1.0 / SUB84(dVar29,0),1.0 / SUB84(dVar27,0));
    }
    else {
      dVar14 = (double)CONCAT44(0x3f800000,fVar13) / (double)CONCAT44(0x3f800000,fVar13);
      dVar26 = (0.007812501848093234 / dVar29) / dVar27;
    }
    puVar8 = (undefined8 *)((int)puVar10 + -0x6c);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0x4c) = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined4 *)puVar8 = *(undefined4 *)((int)ar4 + 0xc);
      *(int *)((int)puVar10 + -100) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)((int)puVar10 + -0x68) = SUB84(in_dr4,0);
      *(undefined4 *)((int)puVar10 + -0x58) = *(undefined4 *)ar4;
      *(undefined4 *)((int)puVar10 + -0x5c) = *(undefined4 *)((int)ar4 + 4);
      *(undefined4 *)((int)puVar10 + -0x60) = *(undefined4 *)(ar4 + 1);
      dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x4c),*(undefined4 *)ar4);
    }
    else {
      *(double *)((int)puVar10 + -0x4c) = dVar14;
      *puVar8 = *(undefined8 *)((int)ar4 + 0xc);
      *(double *)((int)puVar10 + -100) = in_dr4;
      *(double *)((int)puVar10 + -0x68) = in_xd4;
      *(double *)((int)puVar10 + -0x58) = *ar4;
      *(undefined8 *)((int)puVar10 + -0x5c) = *(undefined8 *)((int)ar4 + 4);
      *(double *)((int)puVar10 + -0x60) = ar4[1];
      in_xd2 = *ar4;
      dVar14 = *(double *)((int)puVar10 + -0x4c);
    }
    fVar30 = (float)((ulonglong)dVar29 >> 0x20);
    fVar13 = (float)((ulonglong)dVar26 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar11 = (SUB84(dVar14,0) - fVar30) * (float)((ulonglong)dVar14 >> 0x20) * fVar13;
    }
    else {
      fVar11 = SUB84((dVar14 - dVar29) * (dVar14 - dVar29) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0x54) = fVar11;
      dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x4c),*(undefined4 *)((int)ar4 + 4))
      ;
    }
    else {
      *(double *)((int)puVar10 + -0x54) = in_xd2;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar14 = *(double *)((int)puVar10 + -0x4c);
    }
    fVar28 = (float)((ulonglong)dVar27 >> 0x20);
    fVar11 = SUB84(dVar26,0);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (SUB84(dVar14,0) - fVar28) * (float)((ulonglong)dVar14 >> 0x20) * fVar11;
    }
    else {
      fVar12 = SUB84((dVar14 - dVar27) * (dVar14 - dVar27) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0x50) = fVar12;
      fVar12 = *(float *)(ar5 + 1);
    }
    else {
      *(double *)((int)puVar10 + -0x50) = in_xd2;
      in_xd2 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44(1.0 / fVar12,fVar12);
    }
    else {
      dVar14 = (double)CONCAT44(0x3f800000,fVar12) / (double)CONCAT44(0x3f800000,fVar12);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0x28) = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined4 *)((int)puVar10 + -0x48) = *(undefined4 *)((int)ar5 + 0xc);
      *(int *)((int)puVar10 + -0x40) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)((int)puVar10 + -0x44) = SUB84(in_dr6,0);
      *(undefined4 *)((int)puVar10 + -0x34) = *(undefined4 *)ar5;
      *(undefined4 *)((int)puVar10 + -0x38) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)((int)puVar10 + -0x3c) = *(undefined4 *)(ar5 + 1);
      dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x28),*(undefined4 *)ar5);
    }
    else {
      *(double *)((int)puVar10 + -0x28) = dVar14;
      *(undefined8 *)((int)puVar10 + -0x48) = *(undefined8 *)((int)ar5 + 0xc);
      *(double *)((int)puVar10 + -0x40) = in_dr6;
      *(double *)((int)puVar10 + -0x44) = in_xd6;
      *(double *)((int)puVar10 + -0x34) = *ar5;
      *(undefined8 *)((int)puVar10 + -0x38) = *(undefined8 *)((int)ar5 + 4);
      *(double *)((int)puVar10 + -0x3c) = ar5[1];
      in_xd2 = *ar5;
      dVar14 = *(double *)((int)puVar10 + -0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (SUB84(dVar14,0) - fVar30) * (float)((ulonglong)dVar14 >> 0x20) * fVar13;
    }
    else {
      fVar12 = SUB84((dVar14 - dVar29) * (dVar14 - dVar29) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0x30) = fVar12;
      dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -0x28),*(undefined4 *)((int)ar5 + 4))
      ;
    }
    else {
      *(double *)((int)puVar10 + -0x30) = in_xd2;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar14 = *(double *)((int)puVar10 + -0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (SUB84(dVar14,0) - fVar28) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar12 = SUB84((dVar14 - dVar27) * (dVar14 - dVar27),0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44(0x3f800000,fVar12 * fVar11);
    }
    else {
      dVar14 = (double)CONCAT44(0x3f800000,fVar12) * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0x2c) = SUB84(dVar14,0);
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)(ar6 + 1));
    }
    else {
      *(double *)((int)puVar10 + -0x2c) = in_xd2;
      in_xd2 = ar6[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar14,0),SUB84(dVar14,0)
                               );
    }
    else {
      dVar14 = dVar14 / dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -4) = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined4 *)((int)puVar10 + -0x24) = *(undefined4 *)((int)ar6 + 0xc);
      *(int *)((int)puVar10 + -0x1c) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)((int)puVar10 + -0x20) = SUB84(in_dr8,0);
      *(undefined4 *)((int)puVar10 + -0x10) = *(undefined4 *)ar6;
      *(undefined4 *)((int)puVar10 + -0x14) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)((int)puVar10 + -0x18) = *(undefined4 *)(ar6 + 1);
      dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -4),*(undefined4 *)ar6);
    }
    else {
      *(double *)((int)puVar10 + -4) = dVar14;
      *(undefined8 *)((int)puVar10 + -0x24) = *(undefined8 *)((int)ar6 + 0xc);
      *(double *)((int)puVar10 + -0x1c) = in_dr8;
      *(double *)((int)puVar10 + -0x20) = in_xd8;
      *(double *)((int)puVar10 + -0x10) = *ar6;
      *(undefined8 *)((int)puVar10 + -0x14) = *(undefined8 *)((int)ar6 + 4);
      *(double *)((int)puVar10 + -0x18) = ar6[1];
      in_xd2 = *ar6;
      dVar14 = *(double *)((int)puVar10 + -4);
    }
    puVar1 = (undefined8 *)((int)puVar10 + -0xfc);
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar14,0) - fVar30) * (float)((ulonglong)dVar14 >> 0x20) * fVar13;
    }
    else {
      fVar13 = SUB84((dVar14 - dVar29) * (dVar14 - dVar29) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar10 + -0xc) = fVar13;
      dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + -4),*(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(double *)((int)puVar10 + -0xc) = in_xd2;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar14 = *(double *)((int)puVar10 + -4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) - fVar28);
    }
    else {
      dVar14 = dVar14 - dVar27;
    }
    iVar9 = 0;
    if (in_FPSCR_PR == '\0') {
      fVar13 = (float)((ulonglong)dVar14 >> 0x20);
      dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) * fVar13 * fVar11);
    }
    else {
      dVar14 = dVar14 * dVar14 * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -8) = SUB84(dVar14,0);
    }
    else {
      *(double *)((int)puVar10 + -8) = in_xd2;
    }
    iVar34 = 2;
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar15 = CONCAT44(*(undefined4 *)((int)puVar8 + iVar34 * 0x24 + 0x20),0x3f800000);
      }
      else {
        uVar15 = *(undefined8 *)((int)puVar8 + iVar34 * 0x24 + 0x20);
      }
      puVar2 = (undefined8 *)((int)puVar8 + iVar5 * 0x24 + 0x20);
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)puVar2,(float)uVar15);
      }
      else {
        uVar16 = *puVar2;
      }
      fVar13 = (float)uVar16;
      if (((in_FPSCR_PR == '\0' && (float)uVar15 < (float)((ulonglong)uVar15 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar13 < (float)((ulonglong)uVar16 >> 0x20)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)((int)puVar8 + iVar34 * 0x24 + 0x20);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar5 * 0x24 + 0x20));
          fVar11 = fVar13;
          dVar14 = (double)CONCAT44(fVar13,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *(double *)((int)puVar8 + iVar34 * 0x24 + 0x20);
          in_xd0 = *(double *)((int)puVar8 + iVar5 * 0x24 + 0x20);
          fVar11 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar14 = in_xd2;
        }
        dVar17 = (double)CONCAT44(0x3f800000,-fVar13);
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44(0x3f800000,-fVar13 + 1.0);
          dVar14 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar11);
        }
        else {
          dVar17 = dVar17 + dVar17;
          dVar14 = in_dr0 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(SUB84(dVar17,0),
                                    *(undefined4 *)((int)puVar8 + iVar34 * 0x24 + 0x18));
        }
        else {
          in_xd4 = *(double *)((int)puVar8 + iVar34 * 0x24 + 0x18);
          dVar20 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) / SUB84(dVar14,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 / dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar5 * 0x24 + 0x18));
          dVar14 = (double)((ulonglong)dVar20 & 0xffffffff);
          dVar22 = in_xd0;
        }
        else {
          in_xd2 = *(double *)((int)puVar8 + iVar5 * 0x24 + 0x18);
          dVar22 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) - SUB84(dVar20,0));
        }
        else {
          dVar17 = dVar17 - dVar20;
        }
        uVar21 = (undefined4)((ulonglong)dVar20 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          in_xd0 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + iVar34 * 0x24 + 0x1c),
                                    SUB84(in_dr6,0));
          dVar20 = (double)CONCAT44(uVar21,SUB84(dVar14,0));
          dVar14 = (double)CONCAT44(uVar21,fVar30);
        }
        else {
          in_xd0 = *(double *)((int)puVar8 + iVar34 * 0x24 + 0x1c);
          dVar14 = dVar20;
          in_xd4 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar17,0) +
                                 SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar5 * 0x24 + 0x1c));
          uVar15 = CONCAT44(SUB84(dVar29,0),SUB84(dVar20,0));
        }
        else {
          in_xd2 = *(double *)((int)puVar8 + iVar5 * 0x24 + 0x1c);
          uVar15 = in_xd14;
        }
        fVar13 = (float)((ulonglong)in_xd0 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) - fVar13);
          dVar14 = (double)CONCAT44(uVar21,(float)((ulonglong)uVar15 >> 0x20) * (float)uVar15 +
                                           SUB84(dVar14,0));
        }
        else {
          dVar17 = dVar17 - in_xd0;
        }
        uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
        in_dr6 = dVar27;
        dVar20 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(fVar28,SUB84(in_xd0,0));
          dVar20 = (double)CONCAT44(uVar21,fVar13);
          in_xd0 = dVar22;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar17,0) +
                                 SUB84(dVar20,0));
        }
        uVar15 = uVar32;
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(SUB84(dVar27,0),SUB84(dVar20,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)uVar15 >> 0x20) * (float)uVar15 +
                                    (float)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0));
        }
        dVar20 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(uVar21,(float)uVar15);
        }
        pdVar6 = (double *)(iVar9 * 0x24 + (int)puVar1);
        fVar13 = SUB84(dVar14,0);
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar6 + 0x14) = fVar13;
          *(int *)(pdVar6 + 2) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar6 = (double *)((int)pdVar6 + 0xc);
          *(int *)pdVar6 = (int)((ulonglong)dVar17 >> 0x20);
          fVar13 = *(float *)((int)puVar8 + iVar34 * 0x24 + 8);
          dVar14 = (double)CONCAT44(uVar21,fVar13);
          dVar17 = (double)CONCAT44(fVar13,*(undefined4 *)((int)puVar8 + iVar5 * 0x24 + 8));
        }
        else {
          pdVar6[2] = in_xd4;
          pdVar6[1] = in_dr6;
          *pdVar6 = dVar17;
          dVar17 = *(double *)((int)puVar8 + iVar34 * 0x24 + 8);
          in_xd2 = *(double *)((int)puVar8 + iVar5 * 0x24 + 8);
          in_xd4 = dVar17;
        }
        fVar11 = (float)((ulonglong)dVar20 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar17,0) - fVar13;
          dVar17 = (double)CONCAT44(fVar11 * fVar13 + (float)((ulonglong)dVar17 >> 0x20),fVar13);
        }
        else {
          dVar17 = dVar17 - dVar14;
        }
        uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          pdVar6 = (double *)((int)pdVar6 + -4);
          *(undefined4 *)pdVar6 = uVar21;
          dVar17 = (double)CONCAT44(uVar21,*(undefined4 *)((int)puVar8 + iVar5 * 0x24 + 4));
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar34 * 0x24 + 4));
        }
        else {
          pdVar6 = pdVar6 + -1;
          *pdVar6 = dVar17;
          in_xd2 = *(double *)((int)puVar8 + iVar5 * 0x24 + 4);
          in_xd4 = *(double *)((int)puVar8 + iVar34 * 0x24 + 4);
        }
        fVar13 = SUB84(dVar14,0);
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar17,0) - fVar13;
        }
        else {
          fVar12 = SUB84(dVar17 - dVar14,0);
        }
        dVar17 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(fVar13,fVar12);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44(fVar11 * SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0));
        }
        if (in_FPSCR_SZ == '\0') {
          pdVar6 = (double *)((int)pdVar6 + -4);
          *(int *)pdVar6 = (int)((ulonglong)dVar17 >> 0x20);
        }
        else {
          pdVar6 = pdVar6 + -1;
          *pdVar6 = dVar17;
        }
        pdVar7 = (double *)(iVar34 * 0x24 + (int)puVar8);
        uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
        if (_DAT_8c4ab1d8 == 0x23) {
          uVar4 = *(uint *)pdVar7;
          fVar13 = (float)(uVar4 >> 0x18);
          dVar22 = (double)(ulonglong)(uint)fVar13;
          dVar17 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(uVar21,fVar13);
            dVar17 = in_xd4;
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                        SUB84(dVar14,0) + SUB84(dVar22,0));
            }
            else {
              dVar14 = dVar14 + dVar22;
            }
          }
          fVar13 = (float)(uVar4 >> 0x10 & 0xff);
          dVar18 = (double)(ulonglong)(uint)fVar13;
          dVar22 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(fVar13,SUB84(in_dr6,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar18 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar18,0),
                                        SUB84(dVar22,0));
            }
            else {
              dVar22 = dVar22 + dVar18;
            }
          }
          fVar13 = (float)(uVar4 >> 8 & 0xff);
          dVar24 = (double)(ulonglong)(uint)fVar13;
          dVar18 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar13);
            dVar18 = in_xd6;
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                        SUB84(dVar22,0) + SUB84(dVar24,0));
            }
            else {
              dVar22 = dVar22 + dVar24;
            }
          }
          fVar13 = (float)(uVar4 & 0xff);
          dVar25 = (double)(ulonglong)(uint)fVar13;
          dVar24 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(fVar13,SUB84(in_dr8,0));
          }
          uVar4 = (uint)((ulonglong)dVar24 >> 0x20);
          dVar31 = dVar24;
          if (in_FPSCR_PR != '\0' || 0.0 <= fVar13) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = (double)(ulonglong)uVar4;
              dVar31 = in_xd8;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = (double)CONCAT44(uVar4,uVar4);
              dVar25 = 6.58979161647419e-315;
              dVar31 = in_xd8;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)(ulonglong)(uint)(SUB84(dVar24,0) + SUB84(dVar25,0));
            }
            else {
              dVar24 = dVar24 + dVar25;
            }
          }
          uVar4 = *(uint *)(iVar5 * 0x24 + (int)puVar8);
          fVar13 = (float)(uVar4 >> 0x18);
          dVar19 = (double)(ulonglong)(uint)fVar13;
          dVar25 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar25 = (double)CONCAT44(fVar13,SUB84(dVar24,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar19,0),
                                        SUB84(dVar25,0));
            }
            else {
              dVar25 = dVar25 + dVar19;
            }
          }
          fVar13 = (float)(uVar4 >> 0x10 & 0xff);
          dVar19 = (double)(ulonglong)(uint)fVar13;
          dVar24 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(fVar13,SUB84(dVar26,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar19,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar19;
            }
          }
          fVar13 = (float)(uVar4 >> 8 & 0xff);
          dVar26 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),fVar13);
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar26 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                        SUB84(dVar24,0) + SUB84(dVar26,0));
            }
            else {
              dVar24 = dVar24 + dVar26;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = (double)((ulonglong)(uint)(float)(uVar4 & 0xff) << 0x20);
          }
          else {
            dVar26 = (double)(uVar4 & 0xff);
          }
          fVar13 = (float)((ulonglong)dVar26 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + -0x108) = fVar13;
          }
          else {
            *(double *)((int)puVar10 + -0x108) = dVar26;
          }
          if (in_FPSCR_PR != '\0' || SUB84(dVar26,0) <= fVar13) {
            if (in_FPSCR_SZ == '\0') {
              dVar26 = (double)(ulonglong)*(uint *)((int)puVar10 + -0x108);
            }
            else {
              in_xd2 = *(double *)((int)puVar10 + -0x108);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar26 = (double)CONCAT44(0x4f800000,*(undefined4 *)((int)puVar10 + -0x108));
            }
            else {
              in_xd2 = *(double *)((int)puVar10 + -0x108);
              dVar26 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar26 = (double)(ulonglong)
                               (uint)(SUB84(dVar26,0) + (float)((ulonglong)dVar26 >> 0x20));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar14,0),
                                      SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 - dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            fVar13 = SUB84(dVar26,0);
            *(float *)((int)puVar10 + -0x100) = fVar13;
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar20,0));
            dVar26 = (double)CONCAT44(SUB84(dVar14,0),fVar13);
          }
          else {
            fVar13 = SUB84(dVar17,0);
            *(double *)((int)puVar10 + -0x100) = in_xd2;
            in_dr0 = dVar14;
            dVar26 = dVar17;
          }
          fVar23 = SUB84(dVar25,0);
          fVar12 = (float)((ulonglong)dVar22 >> 0x20);
          fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - fVar12,SUB84(dVar24,0));
            in_dr8 = (double)CONCAT44(fVar11 * (float)((ulonglong)dVar25 >> 0x20) +
                                      (float)((ulonglong)dVar26 >> 0x20),fVar13 - fVar23);
          }
          else {
            in_dr8 = dVar26 - dVar25;
            dVar24 = dVar24 - dVar22;
          }
          dVar20 = dVar22;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(fVar11,fVar12);
            dVar20 = in_xd0;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                      SUB84(dVar24,0) - SUB84(dVar22,0));
          }
          else {
            dVar26 = dVar24 - dVar22;
          }
          in_xd4 = dVar18;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)((ulonglong)dVar22 & 0xffffffff);
            in_xd4 = dVar17;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar13,fVar13 * (float)((ulonglong)dVar26 >> 0x20) +
                                             SUB84(in_dr0,0));
          }
          in_dr4 = dVar31;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = (double)CONCAT44(fVar23,SUB84(in_dr8,0));
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),fVar23);
          }
          fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            in_dr4 = (double)CONCAT44(fVar13 * SUB84(in_dr4,0) + (float)((ulonglong)in_dr4 >> 0x20),
                                      SUB84(in_dr4,0));
          }
          in_dr6 = dVar20;
          dVar17 = in_dr4;
          dVar24 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            uVar21 = (undefined4)((ulonglong)in_dr4 >> 0x20);
            in_dr4 = (double)CONCAT44(uVar21,SUB84(dVar14,0));
            in_dr6 = (double)CONCAT44(SUB84(in_dr0,0),SUB84(dVar22,0));
            dVar17 = (double)CONCAT44(uVar21,(int)((ulonglong)in_dr8 >> 0x20));
            dVar24 = in_xd2;
          }
          in_xd2 = dVar24;
          fVar11 = SUB84(dVar17,0);
          dVar14 = (double)CONCAT44(0x4f000000,fVar11);
          if (in_FPSCR_PR == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                      fVar13 * SUB84(dVar26,0) + SUB84(in_dr4,0));
          }
          if (in_FPSCR_PR != '\0' || 2.1474836e+09 <= fVar11) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44(0x4f800000,fVar11 - 4.2949673e+09);
            }
            else {
              dVar14 = (dVar14 + dVar14) - (dVar14 + dVar14);
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar34 = (int)SUB84(dVar14,0);
          }
          else {
            iVar34 = (int)dVar14;
          }
          uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(uVar21,0x4f000000);
          fVar13 = (float)((ulonglong)in_dr6 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar33 = fVar13 < 2.1474836e+09;
          }
          else {
            bVar33 = in_dr6 < dVar14;
          }
          if (!bVar33) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44(uVar21,0x4f800000);
              in_dr6 = (double)CONCAT44(fVar13 - 4.2949673e+09,SUB84(in_dr6,0));
            }
            else {
              dVar14 = dVar14 + dVar14;
              in_dr6 = in_dr6 - dVar14;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar35 = (int)(float)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            iVar35 = (int)in_dr6;
          }
          uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(uVar21,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar33 = SUB84(in_dr4,0) < 2.1474836e+09;
          }
          else {
            bVar33 = in_dr4 < dVar14;
          }
          if (!bVar33) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44(uVar21,0x4f800000);
              in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                        SUB84(in_dr4,0) - 4.2949673e+09);
            }
            else {
              dVar14 = dVar14 + dVar14;
              in_dr4 = in_dr4 - dVar14;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar36 = (int)SUB84(in_dr4,0);
          }
          else {
            iVar36 = (int)in_dr4;
          }
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),0x4f000000);
          fVar13 = (float)((ulonglong)in_dr4 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar33 = fVar13 < 2.1474836e+09;
          }
          else {
            bVar33 = in_dr4 < dVar14;
          }
          if (!bVar33) {
            if (in_FPSCR_PR == '\0') {
              in_dr4 = (double)CONCAT44(fVar13 - 4.2949673e+09,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = in_dr4 - (dVar14 + dVar14);
            }
          }
          if (in_FPSCR_PR == '\0') {
            uVar4 = (uint)(float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            uVar4 = (uint)in_dr4;
          }
          *(uint *)((int)pdVar6 + -4) = iVar34 << 0x18 | iVar35 << 0x10 | iVar36 << 8 | uVar4;
          in_xd0 = dVar20;
          in_xd6 = dVar18;
          in_xd8 = dVar31;
        }
        else {
          in_dr0 = dVar14;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(uVar21,SUB84(dVar20,0));
          }
          *(double **)((int)puVar10 + -0x104) = pdVar7;
          pdVar3 = (double *)(iVar5 * 0x24 + (int)puVar8);
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)pdVar7;
            dVar17 = (double)CONCAT44(fVar13,*(undefined4 *)pdVar3);
            in_dr4 = (double)CONCAT44(uVar21,fVar13);
          }
          else {
            dVar17 = *pdVar7;
            in_xd2 = *pdVar3;
            in_dr4 = dVar14;
            in_xd4 = dVar17;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar17,0) - fVar13;
            dVar17 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * fVar13 +
                                      (float)((ulonglong)dVar17 >> 0x20),fVar13);
          }
          else {
            dVar17 = dVar17 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar6 + -4) = (int)((ulonglong)dVar17 >> 0x20);
          }
          else {
            pdVar6[-1] = dVar17;
          }
        }
        iVar9 = iVar9 + 1;
      }
      pdVar6 = (double *)(iVar5 * 0x24 + (int)puVar8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)(pdVar6 + 4),0x3f800000);
      }
      else {
        dVar14 = pdVar6[4];
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar14,0) < (float)((ulonglong)dVar14 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),SUB84(dVar14,0));
        }
        else {
          uVar15 = *(undefined8 *)((int)pdVar6 + 0x14);
        }
        puVar2 = (undefined8 *)(iVar9 * 0x24 + (int)puVar1);
        iVar34 = iVar9 + 1;
        iVar9 = iVar9 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar2 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(pdVar6 + 2);
          *(undefined4 *)((int)puVar2 + 0xc) = *(undefined4 *)((int)pdVar6 + 0xc);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(pdVar6 + 1);
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),(int)uVar15);
          *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)((int)pdVar6 + 4);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)pdVar6);
          *(undefined4 *)puVar2 = *(undefined4 *)pdVar6;
          iVar9 = iVar34;
        }
        else {
          puVar2[2] = uVar15;
          puVar2[1] = pdVar6[2];
          *puVar2 = *(undefined8 *)((int)pdVar6 + 0xc);
          puVar2[-1] = pdVar6[1];
          dVar14 = *(double *)((int)pdVar6 + 4);
          puVar2[-2] = dVar14;
          in_xd0 = *pdVar6;
          puVar2[-3] = in_xd0;
        }
      }
      iVar34 = iVar5;
    }
    if (DAT_8c277acc != 0) {
      pdVar6 = (double *)((int)puVar10 + -0x24);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar10 + -0xb4) = *(undefined4 *)pdVar6;
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)pdVar6);
        *(undefined4 *)((int)puVar10 + -0x90) = *(undefined4 *)pdVar6;
      }
      else {
        *(double *)((int)puVar10 + -0xb4) = *pdVar6;
        in_xd2 = *pdVar6;
        *(double *)((int)puVar10 + -0x90) = in_xd2;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)puVar1;
      puVar8 = (undefined8 *)((int)puVar10 + -0xf8);
    }
    else {
      uVar21 = (undefined4)((ulonglong)*puVar1 >> 0x20);
      puVar8 = (undefined8 *)((int)puVar10 + -0xf4);
    }
    dVar27 = (double)CONCAT44(uVar21,0x3f800000);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar21);
      dVar27 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) + -1.0);
    }
    else {
      dVar14 = dVar14 + (double)CONCAT44(uVar21,0xbf800000);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar7 + 0x1c) = SUB84(dVar14,0);
      *(undefined4 *)(ar7 + 3) = uVar21;
      *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)puVar8;
      *(undefined4 *)(ar7 + 2) = *(undefined4 *)((int)puVar8 + 4);
      *(undefined4 *)((int)ar7 + 0xc) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)(ar7 + 1) = *(undefined4 *)((int)puVar8 + 0xc);
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)(puVar8 + 2));
      pdVar6 = (double *)((int)ar7 + 4);
      *(undefined4 *)pdVar6 = *(undefined4 *)(puVar8 + 2);
    }
    else {
      ar7[3] = dVar27;
      ar7[2] = CONCAT44(uVar21,0xbf800000);
      ar7[1] = *puVar8;
      *ar7 = puVar8[1];
      ar7[-1] = puVar8[2];
      ar7[-2] = puVar8[3];
      dVar27 = (double)puVar8[4];
      pdVar6 = (double *)(ar7 + -3);
      *pdVar6 = dVar27;
    }
    *(undefined4 *)((int)pdVar6 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)((int)puVar10 + -0xd8);
      puVar8 = (undefined8 *)((int)puVar10 + -0xd4);
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar21);
      dVar29 = (double)CONCAT44(uVar21,0xbf800000);
    }
    else {
      dVar27 = *(double *)((int)puVar10 + -0xd8);
      puVar8 = (undefined8 *)((int)puVar10 + -0xd0);
      uVar21 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar29 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) + SUB84(dVar29,0));
    }
    else {
      dVar14 = dVar14 + dVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(pdVar6 + 7) = SUB84(dVar14,0);
      *(undefined4 *)((int)pdVar6 + 0x34) = uVar21;
      *(undefined4 *)(pdVar6 + 6) = *(undefined4 *)puVar8;
      *(undefined4 *)((int)pdVar6 + 0x2c) = *(undefined4 *)((int)puVar8 + 4);
      *(undefined4 *)(pdVar6 + 5) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((int)pdVar6 + 0x24) = *(undefined4 *)((int)puVar8 + 0xc);
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)(puVar8 + 2));
      pdVar6 = pdVar6 + 4;
      *(undefined4 *)pdVar6 = *(undefined4 *)(puVar8 + 2);
    }
    else {
      *(double *)((int)pdVar6 + 0x34) = dVar27;
      *(double *)((int)pdVar6 + 0x2c) = dVar29;
      *(undefined8 *)((int)pdVar6 + 0x24) = *puVar8;
      *(undefined8 *)((int)pdVar6 + 0x1c) = puVar8[1];
      *(undefined8 *)((int)pdVar6 + 0x14) = puVar8[2];
      *(undefined8 *)((int)pdVar6 + 0xc) = puVar8[3];
      dVar27 = (double)puVar8[4];
      pdVar6 = (double *)((int)pdVar6 + 4);
      *pdVar6 = dVar27;
    }
    *(undefined4 *)((int)pdVar6 + -4) = 0xe0000000;
    if (iVar9 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar21 = *(undefined4 *)((int)puVar10 + -0x90);
        puVar8 = (undefined8 *)((int)puVar10 + -0x8c);
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar21);
        dVar29 = (double)CONCAT44(uVar21,SUB84(dVar29,0));
      }
      else {
        dVar27 = *(double *)((int)puVar10 + -0x90);
        puVar8 = (undefined8 *)((int)puVar10 + -0x88);
        uVar21 = (undefined4)((ulonglong)dVar27 >> 0x20);
        dVar29 = dVar27;
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) + SUB84(dVar29,0)
                                 );
      }
      else {
        dVar14 = dVar14 + dVar29;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(pdVar6 + 7) = SUB84(dVar14,0);
        *(undefined4 *)((int)pdVar6 + 0x34) = uVar21;
        *(undefined4 *)(pdVar6 + 6) = *(undefined4 *)puVar8;
        *(undefined4 *)((int)pdVar6 + 0x2c) = *(undefined4 *)((int)puVar8 + 4);
        *(undefined4 *)(pdVar6 + 5) = *(undefined4 *)(puVar8 + 1);
        *(undefined4 *)((int)pdVar6 + 0x24) = *(undefined4 *)((int)puVar8 + 0xc);
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),*(undefined4 *)(puVar8 + 2));
        pdVar6 = pdVar6 + 4;
        *(undefined4 *)pdVar6 = *(undefined4 *)(puVar8 + 2);
      }
      else {
        *(double *)((int)pdVar6 + 0x34) = dVar27;
        *(double *)((int)pdVar6 + 0x2c) = dVar29;
        *(undefined8 *)((int)pdVar6 + 0x24) = *puVar8;
        *(undefined8 *)((int)pdVar6 + 0x1c) = puVar8[1];
        *(undefined8 *)((int)pdVar6 + 0x14) = puVar8[2];
        *(undefined8 *)((int)pdVar6 + 0xc) = puVar8[3];
        dVar27 = (double)puVar8[4];
        pdVar6 = (double *)((int)pdVar6 + 4);
        *pdVar6 = dVar27;
      }
      *(undefined4 *)((int)pdVar6 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)((int)puVar10 + -0xb4);
      puVar8 = (undefined8 *)((int)puVar10 + -0xb0);
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar21);
      dVar29 = (double)CONCAT44(uVar21,SUB84(dVar29,0));
    }
    else {
      dVar27 = *(double *)((int)puVar10 + -0xb4);
      puVar8 = (undefined8 *)((int)puVar10 + -0xac);
      uVar21 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar29 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar14,0) + SUB84(dVar29,0);
    }
    else {
      fVar13 = SUB84(dVar14 + dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(pdVar6 + 7) = fVar13;
      *(undefined4 *)((int)pdVar6 + 0x34) = uVar21;
      *(undefined4 *)(pdVar6 + 6) = *(undefined4 *)puVar8;
      *(undefined4 *)((int)pdVar6 + 0x2c) = *(undefined4 *)((int)puVar8 + 4);
      *(undefined4 *)(pdVar6 + 5) = *(undefined4 *)(puVar8 + 1);
      *(undefined4 *)((int)pdVar6 + 0x24) = *(undefined4 *)((int)puVar8 + 0xc);
      pdVar6 = pdVar6 + 4;
      *(undefined4 *)pdVar6 = *(undefined4 *)(puVar8 + 2);
    }
    else {
      *(double *)((int)pdVar6 + 0x34) = dVar27;
      *(double *)((int)pdVar6 + 0x2c) = dVar29;
      *(undefined8 *)((int)pdVar6 + 0x24) = *puVar8;
      *(undefined8 *)((int)pdVar6 + 0x1c) = puVar8[1];
      *(undefined8 *)((int)pdVar6 + 0x14) = puVar8[2];
      *(undefined8 *)((int)pdVar6 + 0xc) = puVar8[3];
      pdVar6 = (double *)((int)pdVar6 + 4);
      *pdVar6 = (double)puVar8[4];
    }
    *(undefined4 *)((int)pdVar6 + -4) = 0xf0000000;
    ar7 = (undefined8 *)((int)pdVar6 + 0x1c);
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar9;
  }
  return ar7;
}

__asm__(".globl _FUN_8c2170f4\n.set _FUN_8c2170f4, _FUN_8c2170f4_def\n");
