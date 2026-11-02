#include "../decls.h"
undefined8 * FUN_8c22cef0_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  double in_dr0;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  double dVar21;
  undefined4 uVar22;
  double in_dr4;
  double in_dr6;
  double dVar23;
  double in_dr8;
  double dVar24;
  undefined4 in_fr11;
  undefined4 uVar27;
  double dVar25;
  double dVar26;
  double in_dr12;
  double dVar28;
  float fVar29;
  float fVar30;
  double in_dr14;
  double dVar31;
  float fVar32;
  double in_xd2;
  double dVar33;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  undefined8 in_xd12;
  undefined8 in_xd14;
  undefined8 uVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  if (in_FPSCR_SZ == '\0') {
    *(ulonglong *)auStack_1c = CONCAT44(SUB84(in_dr14,0),auStack_1c);
    puVar11 = auStack_1c;
  }
  else {
    puVar11 = auStack_24;
  }
  iVar1 = (int)(int)0xfffffed0;
  uVar22 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar11 + -4) = SUB84(in_dr12,0);
    puVar12 = puVar11 + -8;
    *(undefined4 *)(puVar11 + -8) = uVar22;
  }
  else {
    *(undefined8 *)(puVar11 + -8) = in_xd12;
    puVar12 = puVar11 + -0x10;
    *(double *)(puVar11 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar27 = *(undefined4 *)0x8c4aa4a8;
      dVar18 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4dc);
      in_dr12 = (double)CONCAT44(uVar22,uVar27);
      uVar34 = CONCAT44(uVar27,in_fr11);
    }
    else {
      in_xd12 = *(undefined4 *)0x8c4aa4a8;
      dVar18 = *(undefined4 *)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)0x8c4aa4dc;
      uVar27 = (undefined4)((ulonglong)in_xd12 >> 0x20);
      uVar34 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                SUB84(in_dr12,0) * (float)((ulonglong)dVar18 >> 0x20));
    }
    else {
      dVar28 = in_dr12 * dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar27);
      uVar34 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      fVar30 = SUB84(in_dr14,0) * SUB84(dVar18,0);
    }
    else {
      fVar30 = SUB84(in_dr14 * dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar31 = (double)CONCAT44(*(undefined4 *)((int)0x8c4aa4a8 + 0xc),fVar30);
    }
    else {
      dVar31 = *(double *)((int)0x8c4aa4a8 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44(1.0 / SUB84(dVar31,0),1.0 / SUB84(dVar28,0));
    }
    else {
      dVar25 = (0.007812501848093234 / dVar28) / dVar31;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(*(undefined4 *)(0x8c4aa4a8 + 2),SUB84(dVar28,0));
      dVar18 = (double)(ulonglong)*(uint *)((int)ar4 + 4);
    }
    else {
      dVar28 = (double)((undefined1 *)2)[0x8c4aa4a8];
      in_xd2 = *(double *)((int)ar4 + 4);
    }
    pdVar9 = (double *)(puVar12 + 0xb8 + iVar1);
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar9 = SUB84(dVar18,0);
      *(undefined4 *)((int)pdVar9 + 4) = *(undefined4 *)(ar4 + 1);
      *(undefined4 *)(pdVar9 + 1) = *(undefined4 *)((int)ar4 + 0xc);
      *(undefined4 *)((int)pdVar9 + 0x14) = *(undefined4 *)ar4;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
    }
    else {
      *pdVar9 = in_xd2;
      *(double *)((int)pdVar9 + 4) = ar4[1];
      pdVar9[1] = *(double *)((int)ar4 + 0xc);
      *(double *)((int)pdVar9 + 0x14) = *ar4;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar18 = *ar4;
    }
    fVar32 = (float)((ulonglong)dVar31 >> 0x20);
    fVar30 = (float)((ulonglong)dVar25 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (SUB84(dVar18,0) - fVar32) * (float)((ulonglong)dVar18 >> 0x20) * fVar30;
    }
    else {
      fVar15 = SUB84((dVar18 - dVar31) * (dVar18 - dVar31) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar9 + 0xc) = fVar15;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)((int)pdVar9 + 0xc) = in_xd2;
      in_xd2 = ar4[1];
      dVar18 = *ar4;
    }
    fVar29 = (float)((ulonglong)dVar28 >> 0x20);
    fVar15 = SUB84(dVar25,0);
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar18,0) - fVar29) * (float)((ulonglong)dVar18 >> 0x20) * fVar15;
    }
    else {
      fVar16 = SUB84((dVar18 - dVar28) * (dVar18 - dVar28) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(pdVar9 + 2) = fVar16;
      *(undefined4 *)(pdVar9 + 4) = *(undefined4 *)(ar4 + 2);
      *(undefined4 *)((int)pdVar9 + 0x24) = *(undefined4 *)((int)ar4 + 0x14);
      *(int *)(pdVar9 + 3) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)((int)pdVar9 + 0x1c) = SUB84(in_dr4,0);
      *(undefined4 *)(pdVar9 + 5) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)((int)pdVar9 + 0x2c) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)(pdVar9 + 6) = *(undefined4 *)((int)ar5 + 0xc);
      *(undefined4 *)((int)pdVar9 + 0x3c) = *(undefined4 *)ar5;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      pdVar9[2] = in_xd2;
      pdVar9[4] = ar4[2];
      *(undefined8 *)((int)pdVar9 + 0x24) = *(undefined8 *)((int)ar4 + 0x14);
      pdVar9[3] = in_dr4;
      *(double *)((int)pdVar9 + 0x1c) = in_xd4;
      pdVar9[5] = *(double *)((int)ar5 + 4);
      *(double *)((int)pdVar9 + 0x2c) = ar5[1];
      pdVar9[6] = *(double *)((int)ar5 + 0xc);
      *(double *)((int)pdVar9 + 0x3c) = *ar5;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar18 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar18,0) - fVar32) * (float)((ulonglong)dVar18 >> 0x20) * fVar30;
    }
    else {
      fVar16 = SUB84((dVar18 - dVar31) * (dVar18 - dVar31) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar9 + 0x34) = fVar16;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar5 + 1));
    }
    else {
      *(double *)((int)pdVar9 + 0x34) = in_xd2;
      in_xd2 = ar5[1];
      dVar18 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (SUB84(dVar18,0) - fVar29) * (float)((ulonglong)dVar18 >> 0x20) * fVar15;
    }
    else {
      fVar16 = SUB84((dVar18 - dVar28) * (dVar18 - dVar28) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(pdVar9 + 7) = fVar16;
      *(undefined4 *)(pdVar9 + 9) = *(undefined4 *)(ar5 + 2);
      *(undefined4 *)((int)pdVar9 + 0x4c) = *(undefined4 *)((int)ar5 + 0x14);
      *(int *)(pdVar9 + 8) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)((int)pdVar9 + 0x44) = SUB84(in_dr6,0);
      *(undefined4 *)(pdVar9 + 10) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)((int)pdVar9 + 0x54) = *(undefined4 *)(ar6 + 1);
      *(undefined4 *)(pdVar9 + 0xb) = *(undefined4 *)((int)ar6 + 0xc);
      *(undefined4 *)((int)pdVar9 + 100) = *(undefined4 *)ar6;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      pdVar9[7] = in_xd2;
      pdVar9[9] = ar5[2];
      *(undefined8 *)((int)pdVar9 + 0x4c) = *(undefined8 *)((int)ar5 + 0x14);
      pdVar9[8] = in_dr6;
      *(double *)((int)pdVar9 + 0x44) = in_xd6;
      pdVar9[10] = *(double *)((int)ar6 + 4);
      *(double *)((int)pdVar9 + 0x54) = ar6[1];
      pdVar9[0xb] = *(double *)((int)ar6 + 0xc);
      *(double *)((int)pdVar9 + 100) = *ar6;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar18 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar30 = (SUB84(dVar18,0) - fVar32) * (float)((ulonglong)dVar18 >> 0x20) * fVar30;
    }
    else {
      fVar30 = SUB84((dVar18 - dVar31) * (dVar18 - dVar31) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar9 + 0x5c) = fVar30;
      dVar18 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)(ar6 + 1));
    }
    else {
      *(double *)((int)pdVar9 + 0x5c) = in_xd2;
      in_xd2 = ar6[1];
      dVar18 = *ar6;
    }
    iVar7 = 0;
    if (in_FPSCR_PR == '\0') {
      fVar15 = (SUB84(dVar18,0) - fVar29) * (float)((ulonglong)dVar18 >> 0x20) * fVar15;
    }
    else {
      fVar15 = SUB84((dVar18 - dVar28) * (dVar18 - dVar28) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(pdVar9 + 0xc) = fVar15;
      *(undefined4 *)(pdVar9 + 0xe) = *(undefined4 *)(ar6 + 2);
      fVar15 = *(float *)((int)ar6 + 0x14);
    }
    else {
      pdVar9[0xc] = in_xd2;
      pdVar9[0xe] = ar6[2];
      in_xd2 = *(double *)((int)ar6 + 0x14);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar9 + 0x74) = fVar15;
      *(int *)(pdVar9 + 0xd) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)((int)pdVar9 + 0x6c) = SUB84(in_dr8,0);
    }
    else {
      *(double *)((int)pdVar9 + 0x74) = in_xd2;
      pdVar9[0xd] = in_dr8;
      *(double *)((int)pdVar9 + 0x6c) = in_xd8;
    }
    puVar10 = (undefined8 *)(puVar12 + iVar1 + 0x18);
    iVar39 = 2;
    for (iVar8 = 0; iVar8 < 3; iVar8 = iVar8 + 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)((int)pdVar9 + iVar39 * 0x28 + 0x14),0x3f800000);
      }
      else {
        uVar19 = *(undefined8 *)((int)pdVar9 + iVar39 * 0x28 + 0x14);
      }
      puVar2 = (undefined8 *)((int)pdVar9 + iVar8 * 0x28 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)puVar2,(float)uVar19);
      }
      else {
        uVar20 = *puVar2;
      }
      fVar30 = (float)uVar20;
      if (((in_FPSCR_PR == '\0' && (float)uVar19 < (float)((ulonglong)uVar19 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar30 < (float)((ulonglong)uVar20 >> 0x20)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar30 = *(float *)((int)pdVar9 + iVar39 * 0x28 + 0x14);
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar9 + iVar8 * 0x28 + 0x14));
          fVar15 = fVar30;
          dVar18 = (double)CONCAT44(fVar30,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *(double *)((int)pdVar9 + iVar39 * 0x28 + 0x14);
          fVar15 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar18 = in_xd2;
        }
        dVar21 = (double)CONCAT44(0x3f800000,-fVar30);
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(0x3f800000,-fVar30 + 1.0);
          dVar13 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar15);
        }
        else {
          dVar21 = dVar21 + dVar21;
          dVar13 = in_dr0 - dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + iVar39 * 0x28 + 0xc),
                                    SUB84(dVar18,0));
          dVar23 = (double)CONCAT44(SUB84(dVar21,0),SUB84(in_dr6,0));
        }
        else {
          dVar18 = *(double *)((int)pdVar9 + iVar39 * 0x28 + 0xc);
          dVar23 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) / SUB84(dVar13,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 / dVar13;
        }
        fVar30 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                    *(undefined4 *)((int)pdVar9 + iVar8 * 0x28 + 0xc));
          dVar13 = (double)(ulonglong)(uint)fVar30;
        }
        else {
          in_xd2 = *(double *)((int)pdVar9 + iVar8 * 0x28 + 0xc);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar30);
        }
        else {
          dVar21 = dVar21 - dVar18;
        }
        uVar5 = (uint)((ulonglong)dVar23 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(uVar5,SUB84(dVar13,0));
          dVar18 = (double)CONCAT44(fVar32,*(undefined4 *)(pdVar9 + iVar39 * 5 + 2));
        }
        else {
          in_xd4 = pdVar9[iVar39 * 5 + 2];
          dVar13 = dVar23;
          dVar18 = dVar31;
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar21,0) +
                                 SUB84(dVar13,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                    *(undefined4 *)(pdVar9 + iVar8 * 5 + 2));
          uVar19 = CONCAT44(SUB84(dVar31,0),SUB84(dVar13,0));
        }
        else {
          in_xd2 = pdVar9[iVar8 * 5 + 2];
          uVar19 = uVar34;
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                    SUB84(dVar21,0) - SUB84(dVar18,0));
          dVar18 = (double)CONCAT44((float)((ulonglong)uVar19 >> 0x20) * (float)uVar19 +
                                    (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0));
        }
        else {
          dVar21 = dVar21 - dVar18;
        }
        dVar24 = dVar28;
        dVar13 = dVar23;
        if (in_FPSCR_SZ == '\0') {
          uVar22 = SUB84(dVar18,0);
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar29);
          dVar24 = in_xd4;
          dVar13 = (double)CONCAT44(uVar5,uVar22);
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar21,0) +
                                 SUB84(dVar13,0));
        }
        uVar19 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          uVar19 = CONCAT44(SUB84(dVar28,0),SUB84(dVar13,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                    (float)((ulonglong)uVar19 >> 0x20) * (float)uVar19 +
                                    SUB84(dVar18,0));
        }
        dVar13 = dVar23;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)((ulonglong)uVar5 << 0x20);
        }
        pdVar3 = (double *)(puVar10 + iVar7 * 5);
        uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar3 = (int)((ulonglong)dVar18 >> 0x20);
          *(int *)((int)pdVar3 + 4) = SUB84(dVar18,0);
          *(undefined4 *)(pdVar3 + 1) = uVar22;
          dVar21 = (double)CONCAT44(uVar22,*(undefined4 *)(pdVar9 + iVar8 * 5 + 3));
          dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar9 + iVar39 * 5 + 3),SUB84(dVar18,0));
        }
        else {
          *pdVar3 = dVar18;
          *(double *)((int)pdVar3 + 4) = dVar24;
          pdVar3[1] = dVar21;
          in_xd2 = pdVar9[iVar8 * 5 + 3];
          dVar18 = pdVar9[iVar39 * 5 + 3];
        }
        fVar30 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(dVar21,0) - fVar30;
        }
        else {
          fVar15 = SUB84(dVar21 - dVar18,0);
        }
        dVar21 = dVar18;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(fVar30,fVar15);
        }
        fVar30 = (float)((ulonglong)dVar13 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(fVar30 * SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20),
                                    SUB84(dVar21,0));
        }
        uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(pdVar3 + 3) = uVar22;
          dVar21 = (double)CONCAT44(uVar22,*(undefined4 *)((int)pdVar9 + iVar8 * 0x28 + 0x1c));
          dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + iVar39 * 0x28 + 0x1c),
                                    SUB84(dVar18,0));
        }
        else {
          pdVar3[3] = dVar21;
          in_xd2 = *(double *)((int)pdVar9 + iVar8 * 0x28 + 0x1c);
          dVar18 = *(double *)((int)pdVar9 + iVar39 * 0x28 + 0x1c);
        }
        fVar15 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar16 = SUB84(dVar21,0) - fVar15;
        }
        else {
          fVar16 = SUB84(dVar21 - dVar18,0);
        }
        dVar21 = dVar18;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(fVar15,fVar16);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(fVar30 * SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20),
                                    SUB84(dVar21,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar3 + 0x1c) = (int)((ulonglong)dVar21 >> 0x20);
        }
        else {
          *(double *)((int)pdVar3 + 0x1c) = dVar21;
        }
        uVar4 = *(uint *)(pdVar9 + iVar39 * 5 + 4);
        fVar30 = (float)(uVar4 >> 0x18);
        dVar21 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(fVar30,SUB84(dVar18,0));
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d1f0;
          if (in_FPSCR_SZ != '\0') {
            in_xd2 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + fVar15,SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar4 >> 0x10 & 0xff);
        dVar18 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar30);
          dVar18 = dVar24;
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d1f0;
          if (in_FPSCR_SZ != '\0') {
            in_xd2 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar15);
          }
          else {
            dVar21 = dVar21 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar4 >> 8 & 0xff);
        dVar13 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44(uVar5,fVar30);
          dVar13 = in_xd6;
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar30) {
          dVar24 = dVar13;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(SUB84(dVar23,0),SUB84(in_dr8,0));
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(SUB84(dVar23,0),SUB84(in_dr8,0));
            fVar30 = DAT_8c22d1f0;
          }
          else {
            in_xd2 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
            dVar24 = dVar13;
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + fVar30,SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 + (double)(ulonglong)(uint)fVar30;
          }
        }
        fVar30 = (float)(uVar4 & 0xff);
        dVar26 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),fVar30);
          dVar26 = dVar13;
        }
        uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar13 = dVar26;
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar30) {
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(uVar22,SUB84(dVar23,0));
            dVar13 = in_xd8;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(uVar22,SUB84(dVar23,0));
            dVar13 = in_xd8;
            fVar30 = DAT_8c22d1f0;
          }
          else {
            in_xd2 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) + fVar30);
          }
          else {
            dVar24 = dVar24 + (double)(ulonglong)(uint)fVar30;
          }
        }
        uVar5 = *(uint *)(pdVar9 + iVar8 * 5 + 4);
        fVar30 = (float)(uVar5 >> 0x18);
        dVar33 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),fVar30);
          dVar33 = dVar26;
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d1f0;
          if (in_FPSCR_SZ != '\0') {
            in_xd2 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) + fVar15);
          }
          else {
            dVar23 = dVar23 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar5 >> 0x10 & 0xff);
        dVar26 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = (double)CONCAT44(fVar30,SUB84(dVar25,0));
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d1f0;
          if (in_FPSCR_SZ != '\0') {
            in_xd2 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + fVar15,SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar5 >> 8 & 0xff);
        if (in_FPSCR_SZ == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),fVar30);
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d1f0;
          if (in_FPSCR_SZ != '\0') {
            in_xd2 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) + fVar15);
          }
          else {
            dVar26 = dVar26 + (double)(ulonglong)(uint)fVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)((ulonglong)(uint)(float)(uVar5 & 0xff) << 0x20);
        }
        else {
          dVar25 = (double)(uVar5 & 0xff);
        }
        fVar30 = (float)((ulonglong)dVar25 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + iVar1 + 4) = fVar30;
        }
        else {
          *(double *)(puVar12 + iVar1 + 4) = dVar25;
        }
        if (in_FPSCR_PR != '\0' || SUB84(dVar25,0) <= fVar30) {
          if (in_FPSCR_SZ == '\0') {
            dVar25 = (double)CONCAT44(fVar30,*(undefined4 *)(puVar12 + iVar1 + 4));
          }
          else {
            in_xd2 = *(double *)(puVar12 + iVar1 + 4);
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar25 = (double)CONCAT44(DAT_8c22d1f0,*(undefined4 *)(puVar12 + iVar1 + 4));
          }
          else {
            dVar25 = (double)CONCAT44((*(uint *)0x8c22d1f4),DAT_8c22d1f0);
            in_xd2 = *(double *)(puVar12 + iVar1 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar30 = (float)((ulonglong)dVar25 >> 0x20);
            dVar25 = (double)CONCAT44(fVar30,SUB84(dVar25,0) + fVar30);
          }
          else {
            dVar25 = dVar25 + dVar25;
          }
        }
        fVar30 = (float)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) - fVar30);
        }
        else {
          in_dr6 = dVar23 - dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + iVar1 + 0x10) = SUB84(dVar25,0);
        }
        else {
          *(double *)(puVar12 + iVar1 + 0x10) = in_xd2;
        }
        fVar16 = SUB84(dVar24,0);
        fVar15 = SUB84(dVar21,0);
        if (in_FPSCR_PR == '\0') {
          fVar17 = SUB84(dVar25,0) - fVar16;
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - fVar15,SUB84(dVar26,0));
        }
        else {
          fVar17 = SUB84(dVar25 - dVar24,0);
          dVar26 = dVar26 - dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(fVar30,fVar17);
        }
        fVar30 = (float)((ulonglong)dVar24 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) - fVar30);
        }
        else {
          dVar26 = dVar26 - dVar24;
        }
        uVar5 = (uint)((ulonglong)in_dr6 >> 0x20);
        dVar25 = in_dr6;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)((ulonglong)uVar5 << 0x20);
        }
        fVar17 = (float)((ulonglong)dVar25 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(fVar17 * SUB84(in_dr6,0) + (float)((ulonglong)dVar21 >> 0x20),
                                    SUB84(dVar21,0));
        }
        dVar25 = dVar13;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44(fVar16,fVar15);
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44(fVar17 * SUB84(dVar21,0) + (float)((ulonglong)dVar25 >> 0x20),
                                    SUB84(dVar25,0));
        }
        dVar23 = dVar18;
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44(uVar5,SUB84(dVar25,0));
          dVar23 = dVar33;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                    fVar17 * (float)((ulonglong)dVar26 >> 0x20) + SUB84(in_dr6,0));
        }
        dVar33 = dVar21;
        if (in_FPSCR_SZ == '\0') {
          uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
          dVar21 = (double)CONCAT44(uVar22,uVar22);
          dVar33 = in_xd2;
        }
        dVar14 = (double)CONCAT44(fVar17,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar35 = SUB84(dVar21,0) < 0x4f000000;
        }
        else {
          bVar35 = dVar21 < dVar14;
        }
        uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar12 + iVar1 + 0x14) = uVar22;
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar30);
          dVar24 = dVar18;
        }
        else {
          *(double *)(puVar12 + iVar1 + 0x14) = dVar21;
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                    fVar17 * SUB84(dVar26,0) + SUB84(dVar25,0));
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(uVar22,SUB84(dVar21,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            dVar21 = dVar21 - (dVar14 + dVar14);
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar36 = (int)SUB84(dVar21,0);
        }
        else {
          iVar36 = (int)dVar21;
        }
        uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar18 = (double)CONCAT44(uVar22,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar35 = SUB84(in_dr6,0) < 0x4f000000;
        }
        else {
          bVar35 = in_dr6 < dVar18;
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44(uVar22,0x4f000000 + 0x4f000000);
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                      SUB84(in_dr6,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            dVar18 = dVar18 + dVar18;
            in_dr6 = in_dr6 - dVar18;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar37 = (int)SUB84(in_dr6,0);
        }
        else {
          iVar37 = (int)in_dr6;
        }
        uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar18 = (double)CONCAT44(uVar22,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar35 = SUB84(dVar25,0) < 0x4f000000;
        }
        else {
          bVar35 = dVar25 < dVar18;
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44(uVar22,0x4f000000 + 0x4f000000);
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                      SUB84(dVar25,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            dVar18 = dVar18 + dVar18;
            dVar25 = dVar25 - dVar18;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar38 = (int)SUB84(dVar25,0);
        }
        else {
          iVar38 = (int)dVar25;
        }
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),0x4f000000);
        fVar30 = (float)((ulonglong)dVar25 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar35 = fVar30 < 0x4f000000;
        }
        else {
          bVar35 = dVar25 < dVar18;
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44(fVar30 - (0x4f000000 + 0x4f000000),SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 - (dVar18 + dVar18);
          }
        }
        if (in_FPSCR_PR == '\0') {
          uVar5 = (uint)(float)((ulonglong)dVar25 >> 0x20);
        }
        else {
          uVar5 = (uint)dVar25;
        }
        *(uint *)(pdVar3 + 4) = iVar36 << 0x18 | iVar37 << 0x10 | iVar38 << 8 | uVar5;
        uVar5 = *(uint *)((int)pdVar9 + iVar39 * 0x28 + 0x24);
        fVar30 = (float)(uVar5 >> 0x18);
        dVar18 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(fVar30,SUB84(dVar25,0));
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d344;
          if (in_FPSCR_SZ != '\0') {
            dVar33 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + fVar15,SUB84(dVar18,0));
          }
          else {
            dVar18 = dVar18 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar5 >> 0x10 & 0xff);
        in_xd4 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),fVar30);
          in_xd4 = dVar24;
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d344;
          if (in_FPSCR_SZ != '\0') {
            dVar33 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) + fVar15);
          }
          else {
            dVar18 = dVar18 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar5 >> 8 & 0xff);
        in_xd6 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),fVar30);
          in_xd6 = dVar23;
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d344;
          if (in_FPSCR_SZ != '\0') {
            dVar33 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) + fVar15);
          }
          else {
            in_dr6 = in_dr6 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar5 & 0xff);
        dVar21 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44(fVar30,fVar16);
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d344;
          if (in_FPSCR_SZ != '\0') {
            dVar33 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + fVar15,SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + (double)(ulonglong)(uint)fVar15;
          }
        }
        uVar5 = *(uint *)((int)pdVar9 + iVar8 * 0x28 + 0x24);
        fVar30 = (float)(uVar5 >> 0x18);
        dVar23 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar30);
          dVar23 = dVar13;
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d344;
          if (in_FPSCR_SZ != '\0') {
            dVar33 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar15);
          }
          else {
            dVar21 = dVar21 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar5 >> 0x10 & 0xff);
        dVar25 = dVar33;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44(fVar30,SUB84(dVar26,0));
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d344;
          if (in_FPSCR_SZ != '\0') {
            dVar33 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + fVar15,SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 + (double)(ulonglong)(uint)fVar15;
          }
        }
        fVar30 = (float)(uVar5 >> 8 & 0xff);
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),fVar30);
        }
        if (in_FPSCR_PR == '\0' && fVar30 < 0.0) {
          fVar15 = DAT_8c22d344;
          if (in_FPSCR_SZ != '\0') {
            dVar33 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
            fVar15 = fVar30;
          }
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) + fVar15);
          }
          else {
            dVar25 = dVar25 + (double)(ulonglong)(uint)fVar15;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)((ulonglong)(uint)(float)(uVar5 & 0xff) << 0x20);
        }
        else {
          dVar13 = (double)(uVar5 & 0xff);
        }
        fVar30 = (float)((ulonglong)dVar13 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + iVar1) = fVar30;
        }
        else {
          *(double *)(puVar12 + iVar1) = dVar13;
        }
        if (in_FPSCR_PR != '\0' || SUB84(dVar13,0) <= fVar30) {
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(fVar30,*(undefined4 *)(puVar12 + iVar1));
          }
          else {
            dVar33 = *(double *)(puVar12 + iVar1);
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(DAT_8c22d344,*(undefined4 *)(puVar12 + iVar1));
          }
          else {
            dVar33 = *(double *)(puVar12 + iVar1);
            dVar13 = (double)CONCAT44((*(uint *)0x8c22d348),DAT_8c22d344);
          }
          if (in_FPSCR_PR == '\0') {
            fVar30 = (float)((ulonglong)dVar13 >> 0x20);
            dVar13 = (double)CONCAT44(fVar30,SUB84(dVar13,0) + fVar30);
          }
          else {
            dVar13 = dVar13 + dVar13;
          }
        }
        fVar30 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar30);
        }
        else {
          in_dr8 = dVar21 - dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + iVar1 + 8) = SUB84(dVar13,0);
        }
        else {
          *(double *)(puVar12 + iVar1 + 8) = dVar33;
        }
        fVar16 = (float)((ulonglong)in_dr8 >> 0x20);
        fVar15 = SUB84(dVar18,0);
        if (in_FPSCR_PR == '\0') {
          fVar17 = SUB84(dVar13,0) - fVar16;
          dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - fVar15,SUB84(dVar25,0));
        }
        else {
          fVar17 = SUB84(dVar13 - in_dr8,0);
          dVar25 = dVar25 - dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(fVar30,fVar17);
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                    SUB84(dVar25,0) - SUB84(in_dr6,0));
        }
        else {
          dVar25 = dVar25 - in_dr6;
        }
        dVar21 = in_dr6;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)((ulonglong)in_dr6 & 0xffffffff00000000);
        }
        fVar30 = (float)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44(fVar30 * SUB84(in_dr8,0) + (float)((ulonglong)dVar18 >> 0x20),
                                    SUB84(dVar18,0));
        }
        in_dr4 = in_dr8;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(fVar16,fVar15);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = (double)CONCAT44(fVar30 * SUB84(dVar18,0) + (float)((ulonglong)in_dr4 >> 0x20),
                                    SUB84(in_dr4,0));
        }
        in_xd8 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          in_dr8 = (double)CONCAT44(fVar16,SUB84(in_dr4,0));
          in_xd8 = dVar23;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                    fVar30 * (float)((ulonglong)dVar25 >> 0x20) + SUB84(in_dr8,0));
        }
        in_xd2 = dVar18;
        if (in_FPSCR_SZ == '\0') {
          uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar18 = (double)CONCAT44(uVar22,uVar22);
          in_xd2 = dVar33;
        }
        in_dr0 = (double)CONCAT44(fVar30,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar35 = SUB84(dVar18,0) < 0x4f000000;
        }
        else {
          bVar35 = dVar18 < in_dr0;
        }
        uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar12 + iVar1 + 0xc) = uVar22;
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(in_dr6,0));
        }
        else {
          *(double *)(puVar12 + iVar1 + 0xc) = dVar18;
          in_xd4 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                    fVar30 * SUB84(dVar25,0) + SUB84(in_dr4,0));
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            in_dr0 = (double)CONCAT44(fVar30,0x4f000000 + 0x4f000000);
            dVar18 = (double)CONCAT44(uVar22,SUB84(dVar18,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            in_dr0 = in_dr0 + in_dr0;
            dVar18 = dVar18 - in_dr0;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar39 = (int)SUB84(dVar18,0);
        }
        else {
          iVar39 = (int)dVar18;
        }
        uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar18 = (double)CONCAT44(uVar22,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar35 = SUB84(in_dr8,0) < 0x4f000000;
        }
        else {
          bVar35 = in_dr8 < dVar18;
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44(uVar22,0x4f000000 + 0x4f000000);
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                      SUB84(in_dr8,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            dVar18 = dVar18 + dVar18;
            in_dr8 = in_dr8 - dVar18;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar36 = (int)SUB84(in_dr8,0);
        }
        else {
          iVar36 = (int)in_dr8;
        }
        uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar18 = (double)CONCAT44(uVar22,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar35 = SUB84(in_dr4,0) < 0x4f000000;
        }
        else {
          bVar35 = in_dr4 < dVar18;
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44(uVar22,0x4f000000 + 0x4f000000);
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                      SUB84(in_dr4,0) - (0x4f000000 + 0x4f000000));
          }
          else {
            dVar18 = dVar18 + dVar18;
            in_dr4 = in_dr4 - dVar18;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar37 = (int)SUB84(in_dr4,0);
        }
        else {
          iVar37 = (int)in_dr4;
        }
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),0x4f000000);
        fVar30 = (float)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar35 = fVar30 < 0x4f000000;
        }
        else {
          bVar35 = in_dr4 < dVar18;
        }
        if (!bVar35) {
          if (in_FPSCR_PR == '\0') {
            in_dr4 = (double)CONCAT44(fVar30 - (0x4f000000 + 0x4f000000),SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 - (dVar18 + dVar18);
          }
        }
        if (in_FPSCR_PR == '\0') {
          uVar5 = (uint)(float)((ulonglong)in_dr4 >> 0x20);
        }
        else {
          uVar5 = (uint)in_dr4;
        }
        iVar7 = iVar7 + 1;
        *(uint *)((int)pdVar3 + 0x24) = iVar39 << 0x18 | iVar36 << 0x10 | iVar37 << 8 | uVar5;
      }
      pdVar3 = pdVar9 + iVar8 * 5;
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)((int)pdVar3 + 0x14),0x3f800000);
      }
      else {
        uVar19 = *(undefined8 *)((int)pdVar3 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar19 < (float)((ulonglong)uVar19 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar3,*(undefined4 *)((int)pdVar3 + 4));
        }
        else {
          in_dr4 = *pdVar3;
          in_xd4 = *(double *)((int)pdVar3 + 4);
        }
        pdVar6 = (double *)(puVar10 + iVar7 * 5);
        iVar7 = iVar7 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar6 = (int)((ulonglong)in_dr4 >> 0x20);
          *(int *)((int)pdVar6 + 4) = SUB84(in_dr4,0);
          *(undefined4 *)(pdVar6 + 1) = *(undefined4 *)(pdVar3 + 1);
          *(undefined4 *)(pdVar6 + 3) = *(undefined4 *)(pdVar3 + 3);
          *(undefined4 *)((int)pdVar6 + 0x1c) = *(undefined4 *)((int)pdVar3 + 0x1c);
          *(undefined4 *)(pdVar6 + 4) = *(undefined4 *)(pdVar3 + 4);
          *(undefined4 *)((int)pdVar6 + 0x24) = *(undefined4 *)((int)pdVar3 + 0x24);
        }
        else {
          *pdVar6 = in_dr4;
          *(double *)((int)pdVar6 + 4) = in_xd4;
          pdVar6[1] = pdVar3[1];
          pdVar6[3] = pdVar3[3];
          *(undefined8 *)((int)pdVar6 + 0x1c) = *(undefined8 *)((int)pdVar3 + 0x1c);
          pdVar6[4] = pdVar3[4];
          *(undefined8 *)((int)pdVar6 + 0x24) = *(undefined8 *)((int)pdVar3 + 0x24);
        }
      }
      iVar39 = iVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar12 + iVar1 + 0x3c);
      *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar12 + iVar1 + 0x38);
      *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)(puVar12 + iVar1 + 0x34);
      *(undefined4 *)(ar7 + 2) = *(undefined4 *)(puVar12 + iVar1 + 0x30);
      *(undefined4 *)((int)ar7 + 0xc) = *(undefined4 *)(puVar12 + iVar1 + 0x20);
      *(undefined4 *)(ar7 + 1) = *(undefined4 *)(puVar12 + iVar1 + 0x1c);
      uVar22 = 0xe0000000;
      puVar2 = (undefined8 *)((int)ar7 + 4);
      *(undefined4 *)puVar2 = *(undefined4 *)puVar10;
    }
    else {
      ar7[3] = *(undefined8 *)(puVar12 + iVar1 + 0x3c);
      ar7[2] = *(undefined8 *)(puVar12 + iVar1 + 0x38);
      ar7[1] = *(undefined8 *)(puVar12 + iVar1 + 0x34);
      *ar7 = *(undefined8 *)(puVar12 + iVar1 + 0x30);
      ar7[-1] = *(undefined8 *)(puVar12 + iVar1 + 0x20);
      ar7[-2] = *(undefined8 *)(puVar12 + iVar1 + 0x1c);
      uVar22 = 0xe0000000;
      puVar2 = ar7 + -3;
      *puVar2 = *puVar10;
    }
    *(undefined4 *)((int)puVar2 + -4) = uVar22;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar12 + iVar1 + 100);
      *(undefined4 *)((int)puVar2 + 0x34) = *(undefined4 *)(puVar12 + iVar1 + 0x60);
      *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar12 + iVar1 + 0x5c);
      *(undefined4 *)((int)puVar2 + 0x2c) = *(undefined4 *)(puVar12 + iVar1 + 0x58);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar12 + iVar1 + 0x48);
      *(undefined4 *)((int)puVar2 + 0x24) = *(undefined4 *)(puVar12 + iVar1 + 0x44);
      puVar2 = puVar2 + 4;
      *(undefined4 *)puVar2 = *(undefined4 *)(puVar12 + iVar1 + 0x40);
    }
    else {
      *(undefined8 *)((int)puVar2 + 0x34) = *(undefined8 *)(puVar12 + iVar1 + 100);
      *(undefined8 *)((int)puVar2 + 0x2c) = *(undefined8 *)(puVar12 + iVar1 + 0x60);
      *(undefined8 *)((int)puVar2 + 0x24) = *(undefined8 *)(puVar12 + iVar1 + 0x5c);
      *(undefined8 *)((int)puVar2 + 0x1c) = *(undefined8 *)(puVar12 + iVar1 + 0x58);
      *(undefined8 *)((int)puVar2 + 0x14) = *(undefined8 *)(puVar12 + iVar1 + 0x48);
      *(undefined8 *)((int)puVar2 + 0xc) = *(undefined8 *)(puVar12 + iVar1 + 0x44);
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      *puVar2 = *(undefined8 *)(puVar12 + iVar1 + 0x40);
    }
    *(undefined4 *)((int)puVar2 + -4) = uVar22;
    if (iVar7 != 3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar12 + iVar1 + 0xb4);
        *(undefined4 *)((int)puVar2 + 0x34) = *(undefined4 *)(puVar12 + iVar1 + 0xb0);
        *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar12 + iVar1 + 0xac);
        *(undefined4 *)((int)puVar2 + 0x2c) = *(undefined4 *)(puVar12 + iVar1 + 0xa8);
        *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar12 + iVar1 + 0x98);
        *(undefined4 *)((int)puVar2 + 0x24) = *(undefined4 *)(puVar12 + iVar1 + 0x94);
        puVar2 = puVar2 + 4;
        *(undefined4 *)puVar2 = *(undefined4 *)(puVar12 + iVar1 + 0x90);
      }
      else {
        *(undefined8 *)((int)puVar2 + 0x34) = *(undefined8 *)(puVar12 + iVar1 + 0xb4);
        *(undefined8 *)((int)puVar2 + 0x2c) = *(undefined8 *)(puVar12 + iVar1 + 0xb0);
        *(undefined8 *)((int)puVar2 + 0x24) = *(undefined8 *)(puVar12 + iVar1 + 0xac);
        *(undefined8 *)((int)puVar2 + 0x1c) = *(undefined8 *)(puVar12 + iVar1 + 0xa8);
        *(undefined8 *)((int)puVar2 + 0x14) = *(undefined8 *)(puVar12 + iVar1 + 0x98);
        *(undefined8 *)((int)puVar2 + 0xc) = *(undefined8 *)(puVar12 + iVar1 + 0x94);
        puVar2 = (undefined8 *)((int)puVar2 + 4);
        *puVar2 = *(undefined8 *)(puVar12 + iVar1 + 0x90);
      }
      *(undefined4 *)((int)puVar2 + -4) = uVar22;
    }
    uVar22 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(puVar12 + iVar1 + 0x8c);
      *(undefined4 *)((int)puVar2 + 0x34) = *(undefined4 *)(puVar12 + iVar1 + 0x88);
      *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar12 + iVar1 + 0x84);
      *(undefined4 *)((int)puVar2 + 0x2c) = *(undefined4 *)(puVar12 + iVar1 + 0x80);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar12 + iVar1 + 0x70);
      *(undefined4 *)((int)puVar2 + 0x24) = *(undefined4 *)(puVar12 + iVar1 + 0x6c);
      puVar2 = puVar2 + 4;
      *(undefined4 *)puVar2 = *(undefined4 *)(puVar12 + iVar1 + 0x68);
    }
    else {
      *(undefined8 *)((int)puVar2 + 0x34) = *(undefined8 *)(puVar12 + iVar1 + 0x8c);
      *(undefined8 *)((int)puVar2 + 0x2c) = *(undefined8 *)(puVar12 + iVar1 + 0x88);
      *(undefined8 *)((int)puVar2 + 0x24) = *(undefined8 *)(puVar12 + iVar1 + 0x84);
      *(undefined8 *)((int)puVar2 + 0x1c) = *(undefined8 *)(puVar12 + iVar1 + 0x80);
      *(undefined8 *)((int)puVar2 + 0x14) = *(undefined8 *)(puVar12 + iVar1 + 0x70);
      *(undefined8 *)((int)puVar2 + 0xc) = *(undefined8 *)(puVar12 + iVar1 + 0x6c);
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      *puVar2 = *(undefined8 *)(puVar12 + iVar1 + 0x68);
    }
    *(undefined4 *)((int)puVar2 + -4) = uVar22;
    ar7 = (undefined8 *)((int)puVar2 + 0x1c);
    *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar7;
  }
  return ar7;
}

__asm__(".globl _FUN_8c22cef0\n.set _FUN_8c22cef0, _FUN_8c22cef0_def\n");
