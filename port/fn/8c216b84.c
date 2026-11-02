#include "../decls.h"
undefined8 * FUN_8c216b84_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  double in_dr0;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double in_dr4;
  double dVar22;
  double in_dr6;
  double dVar23;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 uVar25;
  double dVar24;
  undefined8 in_dr12;
  double dVar26;
  double dVar27;
  float fVar28;
  double in_xd2;
  double in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd12;
  undefined8 uVar29;
  undefined8 in_xd14;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  
  uVar5 = 0xe0000000;
  puVar4 = 0x8c4aa2a4;
  puVar3 = 0x8c4aa2a0;
  if (in_FPSCR_SZ == '\0') {
    puVar13 = auStack_1c;
  }
  else {
    puVar13 = auStack_24;
  }
  iVar6 = (int)(int)0xffffff04;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar13 + -4) = (int)in_dr12;
    puVar14 = puVar13 + -8;
    *(int *)(puVar13 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar13 + -8) = in_xd12;
    puVar14 = puVar13 + -0x10;
    *(undefined8 *)(puVar13 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)0x8c4aa4a8;
      dVar26 = (double)CONCAT44(*(undefined4 *)(0x8c4aa4a8 + 2),(int)in_dr12);
      dVar19 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4dc);
      dVar27 = (double)CONCAT44(*(undefined4 *)((int)0x8c4aa4a8 + 0xc),uVar25);
      uVar29 = CONCAT44(uVar25,in_fr11);
    }
    else {
      in_xd14 = *(undefined4 *)0x8c4aa4a8;
      dVar27 = *(double *)((int)0x8c4aa4a8 + 0xc);
      in_xd2 = *(undefined4 *)0x8c4aa4dc;
      dVar26 = (double)((undefined1 *)2)[0x8c4aa4a8];
      dVar19 = *(undefined4 *)0x8c4aa4e0;
      uVar25 = (undefined4)((ulonglong)in_xd14 >> 0x20);
      uVar29 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * SUB84(dVar19,0));
    }
    else {
      dVar27 = dVar27 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uVar25);
      uVar29 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                SUB84(dVar26,0) * (float)((ulonglong)dVar19 >> 0x20));
    }
    else {
      dVar26 = dVar26 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)(ulonglong)*(uint *)(ar4 + 1);
    }
    else {
      in_xd2 = ar4[1];
    }
    fVar17 = SUB84(dVar19,0);
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44(1.0 / fVar17,fVar17);
      dVar24 = (double)CONCAT44(1.0 / SUB84(dVar27,0),1.0 / SUB84(dVar26,0));
    }
    else {
      dVar19 = (double)CONCAT44(0x3f800000,fVar17) / (double)CONCAT44(0x3f800000,fVar17);
      dVar24 = (0.007812501848093234 / dVar27) / dVar26;
    }
    iVar1 = 0x90 + iVar6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + iVar1 + 0x20) = (int)((ulonglong)dVar19 >> 0x20);
      *(int *)(puVar14 + iVar1 + 8) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(puVar14 + iVar1 + 4) = SUB84(in_dr4,0);
      *(undefined4 *)(puVar14 + iVar1 + 0x14) = *(undefined4 *)ar4;
      *(undefined4 *)(puVar14 + iVar1 + 0x10) = *(undefined4 *)((int)ar4 + 4);
      *(undefined4 *)(puVar14 + iVar1 + 0xc) = *(undefined4 *)(ar4 + 1);
      dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar1 + 0x20),*(undefined4 *)ar4);
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x20) = dVar19;
      *(double *)(puVar14 + iVar1 + 8) = in_dr4;
      *(double *)(puVar14 + iVar1 + 4) = in_xd4;
      *(double *)(puVar14 + iVar1 + 0x14) = *ar4;
      *(undefined8 *)(puVar14 + iVar1 + 0x10) = *(undefined8 *)((int)ar4 + 4);
      *(double *)(puVar14 + iVar1 + 0xc) = ar4[1];
      in_xd2 = *ar4;
      dVar19 = *(double *)(puVar14 + iVar1 + 0x20);
    }
    fVar28 = (float)((ulonglong)dVar27 >> 0x20);
    fVar17 = (float)((ulonglong)dVar24 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (SUB84(dVar19,0) - fVar28) * (float)((ulonglong)dVar19 >> 0x20) * fVar17;
    }
    else {
      fVar15 = SUB84((dVar19 - dVar27) * (dVar19 - dVar27) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar14 + iVar1 + 0x18) = fVar15;
      dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar1 + 0x20),
                                *(undefined4 *)((int)ar4 + 4));
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x18) = in_xd2;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar19 = *(double *)(puVar14 + iVar1 + 0x20);
    }
    fVar15 = (float)((ulonglong)dVar26 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar19,0) - fVar15) * (float)((ulonglong)dVar19 >> 0x20);
    }
    else {
      fVar16 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26),0);
    }
    fVar18 = SUB84(dVar24,0);
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44(0x3f800000,fVar16 * fVar18);
    }
    else {
      dVar19 = (double)CONCAT44(0x3f800000,fVar16) * dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + iVar1 + 0x1c) = SUB84(dVar19,0);
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(ar5 + 1));
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x1c) = in_xd2;
      in_xd2 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) / SUB84(dVar19,0),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 / dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + iVar1 + 0x44) = (int)((ulonglong)dVar19 >> 0x20);
      *(int *)(puVar14 + iVar1 + 0x2c) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(puVar14 + iVar1 + 0x28) = SUB84(in_dr6,0);
      *(undefined4 *)(puVar14 + iVar1 + 0x38) = *(undefined4 *)ar5;
      *(undefined4 *)(puVar14 + iVar1 + 0x34) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)(puVar14 + iVar1 + 0x30) = *(undefined4 *)(ar5 + 1);
      dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar1 + 0x44),*(undefined4 *)ar5);
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x44) = dVar19;
      *(double *)(puVar14 + iVar1 + 0x2c) = in_dr6;
      *(undefined8 *)(puVar14 + iVar1 + 0x28) = in_xd6;
      *(double *)(puVar14 + iVar1 + 0x38) = *ar5;
      *(undefined8 *)(puVar14 + iVar1 + 0x34) = *(undefined8 *)((int)ar5 + 4);
      *(double *)(puVar14 + iVar1 + 0x30) = ar5[1];
      in_xd2 = *ar5;
      dVar19 = *(double *)(puVar14 + iVar1 + 0x44);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar19,0) - fVar28) * (float)((ulonglong)dVar19 >> 0x20) * fVar17;
    }
    else {
      fVar16 = SUB84((dVar19 - dVar27) * (dVar19 - dVar27) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar14 + iVar1 + 0x3c) = fVar16;
      dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar1 + 0x44),
                                *(undefined4 *)((int)ar5 + 4));
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x3c) = in_xd2;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar19 = *(double *)(puVar14 + iVar1 + 0x44);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar19,0) - fVar15) * (float)((ulonglong)dVar19 >> 0x20) * fVar18;
    }
    else {
      fVar16 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar14 + iVar1 + 0x40) = fVar16;
      fVar16 = *(float *)(ar6 + 1);
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x40) = in_xd2;
      in_xd2 = ar6[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44(1.0 / fVar16,fVar16);
    }
    else {
      dVar19 = (double)CONCAT44(0x3f800000,fVar16) / (double)CONCAT44(0x3f800000,fVar16);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + iVar1 + 0x68) = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined4 *)(puVar14 + iVar1 + 0x50) = in_fr8;
      *(undefined4 *)(puVar14 + iVar1 + 0x4c) = in_fr9;
      *(undefined4 *)(puVar14 + iVar1 + 0x5c) = *(undefined4 *)ar6;
      *(undefined4 *)(puVar14 + iVar1 + 0x58) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)(puVar14 + iVar1 + 0x54) = *(undefined4 *)(ar6 + 1);
      dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar1 + 0x68),*(undefined4 *)ar6);
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x68) = dVar19;
      *(ulonglong *)(puVar14 + iVar1 + 0x50) = CONCAT44(in_fr8,in_fr9);
      *(undefined8 *)(puVar14 + iVar1 + 0x4c) = in_xd8;
      *(double *)(puVar14 + iVar1 + 0x5c) = *ar6;
      *(undefined8 *)(puVar14 + iVar1 + 0x58) = *(undefined8 *)((int)ar6 + 4);
      *(double *)(puVar14 + iVar1 + 0x54) = ar6[1];
      in_xd2 = *ar6;
      dVar19 = *(double *)(puVar14 + iVar1 + 0x68);
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = (SUB84(dVar19,0) - fVar28) * (float)((ulonglong)dVar19 >> 0x20) * fVar17;
    }
    else {
      fVar17 = SUB84((dVar19 - dVar27) * (dVar19 - dVar27) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar14 + iVar1 + 0x60) = fVar17;
      dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar1 + 0x68),
                                *(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(double *)(puVar14 + iVar1 + 0x60) = in_xd2;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar19 = *(double *)(puVar14 + iVar1 + 0x68);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - fVar15);
    }
    else {
      dVar19 = dVar19 - dVar26;
    }
    iVar11 = 0;
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar19,0) * (float)((ulonglong)dVar19 >> 0x20) * fVar18;
    }
    else {
      fVar18 = SUB84(dVar19 * dVar19 * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar14 + iVar1 + 100) = fVar18;
    }
    else {
      *(double *)(puVar14 + iVar1 + 100) = in_xd2;
    }
    iVar9 = 2;
    for (iVar10 = 0; iVar10 < 3; iVar10 = iVar10 + 1) {
      iVar9 = iVar9 * 0x24 + iVar1;
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(puVar14 + iVar9 + 0x20),0x3f800000);
      }
      else {
        uVar20 = *(undefined8 *)(puVar14 + iVar9 + 0x20);
      }
      iVar2 = iVar10 * 0x24 + iVar1;
      if (in_FPSCR_SZ == '\0') {
        uVar21 = CONCAT44(*(undefined4 *)(puVar14 + iVar2 + 0x20),(float)uVar20);
      }
      else {
        uVar21 = *(undefined8 *)(puVar14 + iVar2 + 0x20);
      }
      fVar17 = (float)uVar21;
      if (((in_FPSCR_PR == '\0' && (float)uVar20 < (float)((ulonglong)uVar20 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar17 < (float)((ulonglong)uVar21 >> 0x20)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar17 = *(float *)(puVar14 + iVar9 + 0x20);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(puVar14 + iVar2 + 0x20));
          fVar16 = fVar17;
          dVar19 = (double)CONCAT44(fVar17,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *(double *)(puVar14 + iVar9 + 0x20);
          fVar16 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar19 = in_xd2;
        }
        dVar24 = (double)CONCAT44(0x3f800000,-fVar17);
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44(0x3f800000,-fVar17 + 1.0);
          dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar16);
        }
        else {
          dVar24 = dVar24 + dVar24;
          dVar19 = in_dr0 - dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(SUB84(dVar24,0),*(undefined4 *)(puVar14 + iVar9 + 0x18));
        }
        else {
          in_xd4 = *(double *)(puVar14 + iVar9 + 0x18);
          dVar22 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar19,0),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 / dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    *(undefined4 *)(puVar14 + iVar2 + 0x18));
          dVar19 = (double)((ulonglong)dVar22 & 0xffffffff);
        }
        else {
          in_xd2 = *(double *)(puVar14 + iVar2 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0) - SUB84(dVar22,0));
        }
        else {
          dVar24 = dVar24 - dVar22;
        }
        uVar25 = (undefined4)((ulonglong)dVar22 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar9 + 0x1c),SUB84(in_dr6,0));
          dVar22 = (double)CONCAT44(uVar25,SUB84(dVar19,0));
          in_dr4 = (double)CONCAT44(uVar25,fVar28);
        }
        else {
          dVar23 = *(double *)(puVar14 + iVar9 + 0x1c);
          in_dr4 = dVar22;
          in_xd4 = dVar27;
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar24,0) +
                                 SUB84(dVar22,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                    *(undefined4 *)(puVar14 + iVar2 + 0x1c));
          uVar20 = CONCAT44(SUB84(dVar27,0),SUB84(dVar22,0));
        }
        else {
          in_xd2 = *(double *)(puVar14 + iVar2 + 0x1c);
          uVar20 = in_xd14;
        }
        fVar17 = (float)((ulonglong)dVar23 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) - fVar17);
          in_dr4 = (double)CONCAT44(uVar25,(float)((ulonglong)uVar20 >> 0x20) * (float)uVar20 +
                                           SUB84(in_dr4,0));
        }
        else {
          dVar24 = dVar24 - dVar23;
        }
        uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        in_dr6 = dVar26;
        dVar19 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(fVar15,SUB84(dVar23,0));
          dVar19 = (double)CONCAT44(uVar25,fVar17);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar24,0) +
                                 SUB84(dVar19,0));
        }
        uVar20 = uVar29;
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(SUB84(dVar26,0),SUB84(dVar19,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)CONCAT44((float)((ulonglong)uVar20 >> 0x20) * (float)uVar20 +
                                    (float)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0));
        }
        in_dr0 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(uVar25,(float)uVar20);
        }
        pdVar7 = (double *)(puVar14 + iVar11 * 0x24 + iVar6);
        fVar17 = SUB84(in_dr4,0);
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar7 + 0x14) = fVar17;
          *(int *)(pdVar7 + 2) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar7 = (double *)((int)pdVar7 + 0xc);
          *(int *)pdVar7 = (int)((ulonglong)dVar24 >> 0x20);
          fVar17 = *(float *)(puVar14 + iVar9 + 8);
          in_dr4 = (double)CONCAT44(uVar25,fVar17);
          dVar19 = (double)CONCAT44(fVar17,*(undefined4 *)(puVar14 + iVar2 + 8));
        }
        else {
          pdVar7[2] = in_xd4;
          pdVar7[1] = in_dr6;
          *pdVar7 = dVar24;
          dVar19 = *(double *)(puVar14 + iVar9 + 8);
          in_xd2 = *(double *)(puVar14 + iVar2 + 8);
          in_xd4 = dVar19;
        }
        iVar11 = iVar11 + 1;
        fVar16 = (float)((ulonglong)in_dr0 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar17 = SUB84(dVar19,0) - fVar17;
          dVar19 = (double)CONCAT44(fVar16 * fVar17 + (float)((ulonglong)dVar19 >> 0x20),fVar17);
        }
        else {
          dVar19 = dVar19 - in_dr4;
        }
        uVar25 = (undefined4)((ulonglong)dVar19 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          pdVar7 = (double *)((int)pdVar7 + -4);
          *(undefined4 *)pdVar7 = uVar25;
          dVar19 = (double)CONCAT44(uVar25,*(undefined4 *)(puVar14 + iVar2 + 4));
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                    *(undefined4 *)(puVar14 + iVar9 + 4));
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = dVar19;
          in_xd2 = *(double *)(puVar14 + iVar2 + 4);
          in_xd4 = *(double *)(puVar14 + iVar9 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = SUB84(dVar19,0) - SUB84(in_dr4,0);
        }
        else {
          fVar17 = SUB84(dVar19 - in_dr4,0);
        }
        dVar19 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(SUB84(in_dr4,0),fVar17);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(fVar16 * SUB84(dVar19,0) + (float)((ulonglong)dVar19 >> 0x20),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar7 + -4) = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          pdVar7[-1] = dVar19;
        }
      }
      puVar12 = (undefined8 *)(puVar14 + iVar10 * 0x24 + iVar1);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(puVar12 + 4),0x3f800000);
      }
      else {
        uVar20 = puVar12[4];
      }
      if (in_FPSCR_PR == '\0' && (float)uVar20 < (float)((ulonglong)uVar20 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)((int)puVar12 + 0x14),(float)uVar20);
        }
        else {
          uVar20 = *(undefined8 *)((int)puVar12 + 0x14);
        }
        puVar8 = (undefined8 *)(puVar14 + iVar11 * 0x24 + iVar6);
        iVar9 = iVar11 + 1;
        iVar11 = iVar11 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
          *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar12 + 2);
          *(undefined4 *)((int)puVar8 + 0xc) = *(undefined4 *)((int)puVar12 + 0xc);
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
          *(undefined4 *)((int)puVar8 + 4) = *(undefined4 *)((int)puVar12 + 4);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)puVar12);
          *(undefined4 *)puVar8 = *(undefined4 *)puVar12;
          iVar11 = iVar9;
        }
        else {
          puVar8[2] = uVar20;
          puVar8[1] = puVar12[2];
          *puVar8 = *(undefined8 *)((int)puVar12 + 0xc);
          puVar8[-1] = puVar12[1];
          puVar8[-2] = *(undefined8 *)((int)puVar12 + 4);
          puVar8[-3] = *puVar12;
        }
      }
      iVar9 = iVar10;
    }
    *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)0x8c4aa2a0;
    *(undefined4 *)(ar7 + 3) = *puVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)(puVar14 + iVar6 + 4);
      *(undefined4 *)(ar7 + 2) = *(undefined4 *)(puVar14 + iVar6 + 8);
      *(undefined4 *)((int)ar7 + 0xc) = *(undefined4 *)(puVar14 + iVar6 + 0xc);
      *(undefined4 *)(ar7 + 1) = *(undefined4 *)(puVar14 + iVar6 + 0x10);
      puVar12 = (undefined8 *)((int)ar7 + 4);
      *(undefined4 *)puVar12 = *(undefined4 *)(puVar14 + iVar6 + 0x14);
    }
    else {
      ar7[2] = *(undefined8 *)(puVar14 + iVar6 + 4);
      ar7[1] = *(undefined8 *)(puVar14 + iVar6 + 0xc);
      *ar7 = *(undefined8 *)(puVar14 + iVar6 + 0x14);
      ar7[-1] = *(undefined8 *)(puVar14 + iVar6 + 0x1c);
      puVar12 = ar7 + -2;
      *puVar12 = *(undefined8 *)(puVar14 + iVar6 + 0x24);
    }
    *(undefined4 *)((int)puVar12 + -4) = uVar5;
    *(undefined4 *)(puVar12 + 7) = *puVar3;
    *(undefined4 *)((int)puVar12 + 0x34) = *puVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar14 + iVar6 + 0x28);
      *(undefined4 *)((int)puVar12 + 0x2c) = *(undefined4 *)(puVar14 + iVar6 + 0x2c);
      *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar14 + iVar6 + 0x30);
      *(undefined4 *)((int)puVar12 + 0x24) = *(undefined4 *)(puVar14 + iVar6 + 0x34);
      puVar12 = puVar12 + 4;
      *(undefined4 *)puVar12 = *(undefined4 *)(puVar14 + iVar6 + 0x38);
    }
    else {
      *(undefined8 *)((int)puVar12 + 0x2c) = *(undefined8 *)(puVar14 + iVar6 + 0x28);
      *(undefined8 *)((int)puVar12 + 0x24) = *(undefined8 *)(puVar14 + iVar6 + 0x30);
      *(undefined8 *)((int)puVar12 + 0x1c) = *(undefined8 *)(puVar14 + iVar6 + 0x38);
      *(undefined8 *)((int)puVar12 + 0x14) = *(undefined8 *)(puVar14 + iVar6 + 0x40);
      puVar12 = (undefined8 *)((int)puVar12 + 0xc);
      *puVar12 = *(undefined8 *)(puVar14 + iVar6 + 0x48);
    }
    *(undefined4 *)((int)puVar12 + -4) = uVar5;
    if (iVar11 != 3) {
      *(undefined4 *)(puVar12 + 7) = *puVar3;
      *(undefined4 *)((int)puVar12 + 0x34) = *puVar4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar14 + iVar6 + 0x70);
        *(undefined4 *)((int)puVar12 + 0x2c) = *(undefined4 *)(puVar14 + iVar6 + 0x74);
        *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar14 + iVar6 + 0x78);
        *(undefined4 *)((int)puVar12 + 0x24) = *(undefined4 *)(puVar14 + iVar6 + 0x7c);
        puVar12 = puVar12 + 4;
        *(undefined4 *)puVar12 = *(undefined4 *)(puVar14 + iVar6 + 0x80);
      }
      else {
        *(undefined8 *)((int)puVar12 + 0x2c) = *(undefined8 *)(puVar14 + iVar6 + 0x70);
        *(undefined8 *)((int)puVar12 + 0x24) = *(undefined8 *)(puVar14 + iVar6 + 0x78);
        *(undefined8 *)((int)puVar12 + 0x1c) = *(undefined8 *)(puVar14 + iVar6 + 0x80);
        *(undefined8 *)((int)puVar12 + 0x14) = *(undefined8 *)(puVar14 + iVar6 + 0x88);
        puVar12 = (undefined8 *)((int)puVar12 + 0xc);
        *puVar12 = *(undefined8 *)(puVar14 + iVar6 + 0x90);
      }
      *(undefined4 *)((int)puVar12 + -4) = uVar5;
    }
    *(undefined4 *)(puVar12 + 7) = *puVar3;
    *(undefined4 *)((int)puVar12 + 0x34) = *puVar4;
    uVar5 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar14 + iVar6 + 0x4c);
      *(undefined4 *)((int)puVar12 + 0x2c) = *(undefined4 *)(puVar14 + iVar6 + 0x50);
      *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar14 + iVar6 + 0x54);
      *(undefined4 *)((int)puVar12 + 0x24) = *(undefined4 *)(puVar14 + iVar6 + 0x58);
      puVar12 = puVar12 + 4;
      *(undefined4 *)puVar12 = *(undefined4 *)(puVar14 + iVar6 + 0x5c);
    }
    else {
      *(undefined8 *)((int)puVar12 + 0x2c) = *(undefined8 *)(puVar14 + iVar6 + 0x4c);
      *(undefined8 *)((int)puVar12 + 0x24) = *(undefined8 *)(puVar14 + iVar6 + 0x54);
      *(undefined8 *)((int)puVar12 + 0x1c) = *(undefined8 *)(puVar14 + iVar6 + 0x5c);
      *(undefined8 *)((int)puVar12 + 0x14) = *(undefined8 *)(puVar14 + iVar6 + 100);
      puVar12 = (undefined8 *)((int)puVar12 + 0xc);
      *puVar12 = *(undefined8 *)(puVar14 + iVar6 + 0x6c);
    }
    *(undefined4 *)((int)puVar12 + -4) = uVar5;
    ar7 = (undefined8 *)((int)puVar12 + 0x1c);
    *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar11;
  }
  return ar7;
}

__asm__(".globl _FUN_8c216b84\n.set _FUN_8c216b84, _FUN_8c216b84_def\n");
