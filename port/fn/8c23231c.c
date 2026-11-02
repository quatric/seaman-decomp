#include "../decls.h"
undefined8 * FUN_8c23231c_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  undefined8 *puVar9;
  double *pdVar10;
  float *pfVar11;
  undefined1 *puVar12;
  float in_fr1;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 in_fr3;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar23;
  double in_dr4;
  double in_dr6;
  double dVar24;
  double in_dr8;
  double dVar25;
  float in_fr11;
  float in_fr10;
  double in_dr12;
  double dVar26;
  float fVar27;
  double in_dr14;
  double dVar28;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd12;
  double in_xd14;
  bool bVar29;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_1c [4];
  float fStack_18;
  
  fVar27 = SUB84(in_dr14,0);
  if (in_FPSCR_SZ == '\0') {
    pfVar11 = &fStack_18;
    *(ulonglong *)auStack_1c = CONCAT44(fVar27,auStack_1c);
  }
  else {
    pfVar11 = (float *)auStack_1c;
  }
  iVar2 = (int)(int)0xfffffee0;
  uVar16 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pfVar11 + -4) = SUB84(in_dr12,0);
    puVar12 = (undefined1 *)((int)pfVar11 + -8);
    *(undefined4 *)((int)pfVar11 + -8) = uVar16;
  }
  else {
    *(double *)((int)pfVar11 + -8) = in_xd12;
    puVar12 = (undefined1 *)((int)pfVar11 + -0x10);
    *(double *)((int)pfVar11 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      fVar27 = *(float *)0x8c4aa4a8;
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar27);
      dVar19 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,in_fr3);
      in_dr12 = (double)CONCAT44(uVar16,fVar27);
    }
    else {
      in_xd12 = *(undefined4 *)0x8c4aa4a8;
      dVar19 = *(undefined4 *)0x8c4aa4e0;
      in_xd14 = in_xd12;
    }
    fVar22 = (float)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar27 * fVar22);
    }
    else {
      dVar28 = in_dr14 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(fVar22,*(undefined4 *)0x8c4aa4dc);
    }
    else {
      in_xd2 = *(undefined4 *)0x8c4aa4dc;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) * SUB84(dVar19,0)
                               );
    }
    else {
      dVar26 = in_dr12 * dVar19;
    }
    dVar14 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = in_xd0;
      in_fr1 = SUB84(dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar12 + iVar2 + 4) = SUB84(dVar28,0);
    }
    else {
      *(double *)(puVar12 + iVar2 + 4) = in_xd14;
    }
    uVar16 = (undefined4)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44(uVar16,1.0 / in_fr1);
      dVar13 = (double)CONCAT44(1.0 / SUB84(dVar26,0),in_fr1);
    }
    else {
      dVar28 = (double)CONCAT44(uVar16,0x3f800000) / (double)CONCAT44(0x3f800000,in_fr1);
      dVar13 = (double)CONCAT44(0x3f800000,in_fr1) / dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44(*(undefined4 *)((int)0x8c4aa4a8 + 0xc),SUB84(dVar26,0));
      dVar19 = (double)(ulonglong)*(uint *)(0x8c4aa4a8 + 2);
    }
    else {
      dVar26 = *(double *)((int)0x8c4aa4a8 + 0xc);
      in_xd2 = ((undefined1 *)2)[0x8c4aa4a8];
    }
    uVar16 = SUB84(dVar19,0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar12 + iVar2) = uVar16;
      uVar16 = *(undefined4 *)((int)ar4 + 4);
    }
    else {
      *(double *)(puVar12 + iVar2) = in_xd2;
      in_xd2 = *(double *)((int)ar4 + 4);
    }
    pdVar10 = (double *)(puVar12 + 0xa8 + iVar2);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)pdVar10 = uVar16;
      *(undefined4 *)((int)pdVar10 + 4) = *(undefined4 *)(ar4 + 1);
      *(undefined4 *)(pdVar10 + 1) = *(undefined4 *)((int)ar4 + 0xc);
      *(undefined4 *)((int)pdVar10 + 0x14) = *(undefined4 *)ar4;
      dVar19 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
    }
    else {
      *pdVar10 = in_xd2;
      *(double *)((int)pdVar10 + 4) = ar4[1];
      pdVar10[1] = *(double *)((int)ar4 + 0xc);
      *(double *)((int)pdVar10 + 0x14) = *ar4;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar19 = *ar4;
    }
    fVar22 = (float)((ulonglong)dVar26 >> 0x20);
    fVar27 = (float)((ulonglong)dVar13 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar17 = (SUB84(dVar19,0) - fVar22) * (float)((ulonglong)dVar19 >> 0x20) * fVar27;
    }
    else {
      fVar17 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar10 + 0xc) = fVar17;
      dVar19 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(puVar12 + iVar2));
    }
    else {
      *(double *)((int)pdVar10 + 0xc) = in_xd2;
      dVar19 = ar4[1];
      in_xd2 = *(double *)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 - dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar17 = SUB84(dVar28,0);
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0) * fVar17,
                                SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 * dVar19 * dVar28;
    }
    uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(pdVar10 + 2) = uVar16;
      dVar19 = (double)CONCAT44(uVar16,*(undefined4 *)(ar4 + 2));
    }
    else {
      pdVar10[2] = dVar19;
      in_xd2 = ar4[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar19,0) + in_fr10;
      bVar29 = fVar18 < in_fr10;
    }
    else {
      dVar19 = dVar19 + (double)CONCAT44(in_fr10,in_fr11);
      fVar18 = SUB84(dVar19,0);
      bVar29 = dVar19 < (double)CONCAT44(in_fr10,in_fr11);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(pdVar10 + 4) = fVar18;
    }
    else {
      pdVar10[4] = in_xd2;
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(pdVar10 + 4) = in_fr10;
      }
      else {
        pdVar10[4] = (double)CONCAT44(in_fr10,in_fr11);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)pdVar10 + 0x24) = *(undefined4 *)((int)ar4 + 0x14);
      *(int *)(pdVar10 + 3) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)((int)pdVar10 + 0x1c) = SUB84(in_dr4,0);
      *(undefined4 *)(pdVar10 + 5) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)((int)pdVar10 + 0x2c) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)(pdVar10 + 6) = *(undefined4 *)((int)ar5 + 0xc);
      *(undefined4 *)((int)pdVar10 + 0x3c) = *(undefined4 *)ar5;
      dVar19 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      *(undefined8 *)((int)pdVar10 + 0x24) = *(undefined8 *)((int)ar4 + 0x14);
      pdVar10[3] = in_dr4;
      *(double *)((int)pdVar10 + 0x1c) = in_xd4;
      pdVar10[5] = *(double *)((int)ar5 + 4);
      *(double *)((int)pdVar10 + 0x2c) = ar5[1];
      pdVar10[6] = *(double *)((int)ar5 + 0xc);
      *(double *)((int)pdVar10 + 0x3c) = *ar5;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar19 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = (SUB84(dVar19,0) - fVar22) * (float)((ulonglong)dVar19 >> 0x20) * fVar27;
    }
    else {
      fVar18 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar10 + 0x34) = fVar18;
      dVar19 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(puVar12 + iVar2));
    }
    else {
      *(double *)((int)pdVar10 + 0x34) = in_xd2;
      dVar19 = ar5[1];
      in_xd2 = *(double *)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 - dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0) * fVar17,
                                SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 * dVar19 * dVar28;
    }
    uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(pdVar10 + 7) = uVar16;
      dVar19 = (double)CONCAT44(uVar16,*(undefined4 *)(ar5 + 2));
    }
    else {
      pdVar10[7] = dVar19;
      in_xd2 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar19,0) + in_fr10;
      bVar29 = fVar18 < in_fr10;
    }
    else {
      dVar19 = dVar19 + (double)CONCAT44(in_fr10,in_fr11);
      fVar18 = SUB84(dVar19,0);
      bVar29 = dVar19 < (double)CONCAT44(in_fr10,in_fr11);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(pdVar10 + 9) = fVar18;
    }
    else {
      pdVar10[9] = in_xd2;
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(pdVar10 + 9) = in_fr10;
      }
      else {
        pdVar10[9] = (double)CONCAT44(in_fr10,in_fr11);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)pdVar10 + 0x4c) = *(undefined4 *)((int)ar5 + 0x14);
      *(int *)(pdVar10 + 8) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)((int)pdVar10 + 0x44) = SUB84(in_dr6,0);
      *(undefined4 *)(pdVar10 + 10) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)((int)pdVar10 + 0x54) = *(undefined4 *)(ar6 + 1);
      *(undefined4 *)(pdVar10 + 0xb) = *(undefined4 *)((int)ar6 + 0xc);
      *(undefined4 *)((int)pdVar10 + 100) = *(undefined4 *)ar6;
      dVar19 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(undefined8 *)((int)pdVar10 + 0x4c) = *(undefined8 *)((int)ar5 + 0x14);
      pdVar10[8] = in_dr6;
      *(double *)((int)pdVar10 + 0x44) = in_xd6;
      pdVar10[10] = *(double *)((int)ar6 + 4);
      *(double *)((int)pdVar10 + 0x54) = ar6[1];
      pdVar10[0xb] = *(double *)((int)ar6 + 0xc);
      *(double *)((int)pdVar10 + 100) = *ar6;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar19 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = (SUB84(dVar19,0) - fVar22) * (float)((ulonglong)dVar19 >> 0x20) * fVar27;
    }
    else {
      fVar27 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)pdVar10 + 0x5c) = fVar27;
      dVar19 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),*(undefined4 *)(puVar12 + iVar2));
    }
    else {
      *(double *)((int)pdVar10 + 0x5c) = in_xd2;
      dVar19 = ar6[1];
      in_xd2 = *(double *)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 - dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0) * fVar17,
                                SUB84(dVar19,0));
    }
    else {
      dVar28 = dVar19 * dVar19 * dVar28;
    }
    uVar16 = (undefined4)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(pdVar10 + 0xc) = uVar16;
      dVar28 = (double)CONCAT44(uVar16,*(undefined4 *)(ar6 + 2));
    }
    else {
      pdVar10[0xc] = dVar28;
      in_xd2 = ar6[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = SUB84(dVar28,0) + in_fr10;
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),fVar27);
      bVar29 = fVar27 < in_fr10;
    }
    else {
      dVar28 = dVar28 + (double)CONCAT44(in_fr10,in_fr11);
      fVar27 = SUB84(dVar28,0);
      bVar29 = dVar28 < (double)CONCAT44(in_fr10,in_fr11);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(pdVar10 + 0xe) = fVar27;
    }
    else {
      pdVar10[0xe] = in_xd2;
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(pdVar10 + 0xe) = in_fr10;
      }
      else {
        pdVar10[0xe] = (double)CONCAT44(in_fr10,in_fr11);
      }
    }
    uVar16 = SUB84(in_dr8,0);
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)((int)ar6 + 0x14));
      *(undefined4 *)((int)pdVar10 + 0x74) = *(undefined4 *)((int)ar6 + 0x14);
      *(int *)(pdVar10 + 0xd) = (int)((ulonglong)in_dr8 >> 0x20);
      *(undefined4 *)((int)pdVar10 + 0x6c) = uVar16;
      uVar16 = *(undefined4 *)((int)pdVar10 + 0x3c);
      dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 2),SUB84(in_dr4,0));
      dVar13 = (double)CONCAT44(uVar16,SUB84(dVar13,0));
    }
    else {
      in_xd2 = *(double *)((int)ar6 + 0x14);
      *(double *)((int)pdVar10 + 0x74) = in_xd2;
      pdVar10[0xd] = in_dr8;
      *(double *)((int)pdVar10 + 0x6c) = in_xd8;
      dVar13 = *(double *)((int)pdVar10 + 0x3c);
      dVar19 = pdVar10[2];
      in_xd8 = dVar13;
    }
    fVar27 = (float)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar27,SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)(pdVar10 + 7));
      dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 0x14),uVar16);
      dVar24 = *(double *)((int)pdVar10 + 0x34);
    }
    else {
      dVar24 = pdVar10[7];
      dVar25 = *(double *)((int)pdVar10 + 0x14);
      in_xd6 = *(double *)((int)pdVar10 + 0x34);
      in_xd2 = dVar24;
    }
    fVar17 = (float)((ulonglong)dVar25 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar28,0) * fVar17;
    }
    else {
      fVar18 = SUB84(dVar28 * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(fVar27,*(undefined4 *)((int)pdVar10 + 0xc));
      in_xd8 = (double)CONCAT44(SUB84(dVar25,0),fVar18);
    }
    else {
      in_xd4 = *(double *)((int)pdVar10 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((float)((ulonglong)in_xd8 >> 0x20) * SUB84(dVar19,0),SUB84(in_xd8,0)
                               );
    }
    else {
      dVar28 = in_xd8 * dVar19;
    }
    dVar15 = dVar24;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(int)((ulonglong)dVar24 >> 0x20));
      dVar15 = dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - SUB84(dVar28,0),
                                SUB84(dVar13,0) * SUB84(dVar19,0));
    }
    else {
      dVar14 = dVar13 * dVar19 - dVar28;
    }
    dVar13 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar24,0));
      dVar13 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = SUB84(dVar28,0) * fVar17 - (float)((ulonglong)dVar28 >> 0x20);
    }
    else {
      fVar27 = SUB84(dVar28 * dVar25 - dVar28 * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 0xc),fVar27);
    }
    else {
      dVar28 = pdVar10[0xc];
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * SUB84(dVar28,0),SUB84(dVar28,0)
                               );
    }
    else {
      dVar28 = dVar28 * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                *(undefined4 *)((int)pdVar10 + 0x5c));
    }
    else {
      dVar13 = *(double *)((int)pdVar10 + 0x5c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar28,0) +
                                (float)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar24,0));
      in_xd6 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = SUB84(dVar28,0) * (float)((ulonglong)dVar19 >> 0x20);
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),fVar27);
      fVar27 = SUB84(dVar14,0) - fVar27;
    }
    else {
      dVar28 = dVar28 * dVar19;
      fVar27 = SUB84(dVar14 - dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar27,*(undefined4 *)((int)pdVar10 + 100));
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)((ulonglong)
                        (uint)(((float)((ulonglong)dVar15 >> 0x20) * SUB84(dVar15,0) +
                               (float)((ulonglong)dVar28 >> 0x20)) * in_fr11) << 0x20);
    }
    else {
      dVar28 = (double)((ulonglong)dVar28 & 0xffffffff00000000) * (double)CONCAT44(in_fr10,in_fr11);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar28 >> 0x20) < SUB84(dVar28,0)) {
      iVar4 = 0;
      puVar9 = (undefined8 *)(puVar12 + iVar2 + 8);
      iVar1 = 0;
      iVar8 = 2;
      while (iVar5 = iVar1, iVar5 < 3) {
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)((int)pdVar10 + iVar8 * 0x28 + 0x14),0x3f800000);
        }
        else {
          uVar20 = *(undefined8 *)((int)pdVar10 + iVar8 * 0x28 + 0x14);
        }
        puVar3 = (undefined8 *)((int)pdVar10 + iVar5 * 0x28 + 0x14);
        if (in_FPSCR_SZ == '\0') {
          uVar21 = CONCAT44(*(undefined4 *)puVar3,(float)uVar20);
        }
        else {
          uVar21 = *puVar3;
        }
        fVar27 = (float)uVar21;
        if (((in_FPSCR_PR == '\0' && (float)uVar20 < (float)((ulonglong)uVar20 >> 0x20)) ^ 1) !=
            -((in_FPSCR_PR == '\0' && fVar27 < (float)((ulonglong)uVar21 >> 0x20)) - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar27 = *(float *)((int)pdVar10 + iVar8 * 0x28 + 0x14);
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      *(undefined4 *)((int)pdVar10 + iVar5 * 0x28 + 0x14));
            fVar17 = fVar27;
            dVar19 = (double)CONCAT44(fVar27,SUB84(dVar19,0));
          }
          else {
            in_xd6 = *(double *)((int)pdVar10 + iVar8 * 0x28 + 0x14);
            fVar17 = (float)((ulonglong)in_xd6 >> 0x20);
            dVar19 = in_xd6;
          }
          dVar28 = (double)CONCAT44(0x3f800000,-fVar27);
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44(0x3f800000,-fVar27 + 1.0);
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) - fVar17);
          }
          else {
            dVar28 = dVar28 + dVar28;
            dVar15 = dVar15 - dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(SUB84(dVar28,0),
                                      *(undefined4 *)((int)pdVar10 + iVar8 * 0x28 + 0xc));
          }
          else {
            in_xd4 = *(double *)((int)pdVar10 + iVar8 * 0x28 + 0xc);
            dVar14 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar15,0),
                                      SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 / dVar15;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                      *(undefined4 *)((int)pdVar10 + iVar5 * 0x28 + 0xc));
            dVar15 = (double)((ulonglong)dVar14 & 0xffffffff);
          }
          else {
            in_xd6 = *(double *)((int)pdVar10 + iVar5 * 0x28 + 0xc);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                      SUB84(dVar28,0) - SUB84(dVar14,0));
          }
          else {
            dVar28 = dVar28 - dVar14;
          }
          uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(pdVar10 + iVar8 * 5 + 2),SUB84(dVar24,0));
            dVar14 = (double)CONCAT44(uVar16,SUB84(dVar15,0));
            dVar19 = (double)CONCAT44(uVar16,fVar22);
          }
          else {
            dVar13 = pdVar10[iVar8 * 5 + 2];
            dVar19 = dVar14;
            in_xd4 = dVar26;
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar28,0) +
                                   SUB84(dVar14,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                      *(undefined4 *)(pdVar10 + iVar5 * 5 + 2));
            dVar14 = (double)CONCAT44(SUB84(dVar26,0),SUB84(dVar14,0));
          }
          else {
            in_xd6 = pdVar10[iVar5 * 5 + 2];
            dVar14 = in_xd12;
          }
          fVar27 = (float)((ulonglong)dVar13 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) - fVar27);
            dVar19 = (double)CONCAT44(uVar16,(float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar14,0) +
                                             SUB84(dVar19,0));
          }
          else {
            dVar28 = dVar28 - dVar13;
          }
          uVar16 = (undefined4)((ulonglong)dVar19 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar2),SUB84(dVar13,0));
            dVar14 = (double)CONCAT44(uVar16,fVar27);
          }
          else {
            dVar24 = *(double *)(puVar12 + iVar2);
            dVar14 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar28,0) +
                                   SUB84(dVar14,0));
          }
          if (in_FPSCR_SZ == '\0') {
            uVar20 = CONCAT44(*(undefined4 *)(puVar12 + iVar2 + 4),SUB84(dVar14,0));
          }
          else {
            uVar20 = *(undefined8 *)(puVar12 + iVar2 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)uVar20 >> 0x20) * (float)uVar20 +
                                      (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
          }
          dVar15 = dVar19;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(uVar16,(float)uVar20);
          }
          pdVar6 = (double *)(puVar9 + iVar4 * 5);
          uVar23 = (undefined4)((ulonglong)dVar28 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(int *)pdVar6 = SUB84(dVar19,0);
            *(int *)((int)pdVar6 + 4) = (int)((ulonglong)dVar24 >> 0x20);
            *(undefined4 *)(pdVar6 + 1) = uVar23;
            dVar28 = (double)CONCAT44(uVar23,*(undefined4 *)(pdVar10 + iVar5 * 5 + 3));
            dVar19 = (double)CONCAT44(uVar16,*(undefined4 *)(pdVar10 + iVar8 * 5 + 3));
          }
          else {
            *pdVar6 = in_xd4;
            *(double *)((int)pdVar6 + 4) = dVar24;
            pdVar6[1] = dVar28;
            in_xd6 = pdVar10[iVar5 * 5 + 3];
            in_xd4 = pdVar10[iVar8 * 5 + 3];
          }
          if (in_FPSCR_PR == '\0') {
            fVar27 = SUB84(dVar28,0) - SUB84(dVar19,0);
          }
          else {
            fVar27 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44(SUB84(dVar19,0),fVar27);
          }
          fVar27 = (float)((ulonglong)dVar15 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44(fVar27 * SUB84(dVar28,0) + (float)((ulonglong)dVar28 >> 0x20),
                                      SUB84(dVar28,0));
          }
          uVar16 = (undefined4)((ulonglong)dVar28 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar6 + 3) = uVar16;
            dVar28 = (double)CONCAT44(uVar16,*(undefined4 *)((int)pdVar10 + iVar5 * 0x28 + 0x1c));
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)((int)pdVar10 + iVar8 * 0x28 + 0x1c));
          }
          else {
            pdVar6[3] = dVar28;
            in_xd6 = *(double *)((int)pdVar10 + iVar5 * 0x28 + 0x1c);
            in_xd4 = *(double *)((int)pdVar10 + iVar8 * 0x28 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = SUB84(dVar28,0) - SUB84(dVar19,0);
          }
          else {
            fVar17 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44(SUB84(dVar19,0),fVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44(fVar27 * SUB84(dVar28,0) + (float)((ulonglong)dVar28 >> 0x20),
                                      SUB84(dVar28,0));
          }
          uVar16 = (undefined4)((ulonglong)dVar28 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar6 + 0x1c) = uVar16;
            dVar28 = (double)CONCAT44(uVar16,*(undefined4 *)(pdVar10 + iVar5 * 5 + 4));
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)(pdVar10 + iVar8 * 5 + 4));
          }
          else {
            *(double *)((int)pdVar6 + 0x1c) = dVar28;
            in_xd6 = pdVar10[iVar5 * 5 + 4];
            in_xd4 = pdVar10[iVar8 * 5 + 4];
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = SUB84(dVar28,0) - SUB84(dVar19,0);
          }
          else {
            fVar17 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44(SUB84(dVar19,0),fVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44(fVar27 * SUB84(dVar28,0) + (float)((ulonglong)dVar28 >> 0x20),
                                      SUB84(dVar28,0));
          }
          uVar16 = (undefined4)((ulonglong)dVar28 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar6 + 4) = uVar16;
            dVar28 = (double)CONCAT44(uVar16,*(undefined4 *)((int)pdVar10 + iVar5 * 0x28 + 0x24));
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                      *(undefined4 *)((int)pdVar10 + iVar8 * 0x28 + 0x24));
          }
          else {
            pdVar6[4] = dVar28;
            in_xd6 = *(double *)((int)pdVar10 + iVar5 * 0x28 + 0x24);
            in_xd4 = *(double *)((int)pdVar10 + iVar8 * 0x28 + 0x24);
          }
          iVar4 = iVar4 + 1;
          if (in_FPSCR_PR == '\0') {
            fVar17 = SUB84(dVar28,0) - SUB84(dVar19,0);
          }
          else {
            fVar17 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44(SUB84(dVar19,0),fVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44(fVar27 * SUB84(dVar28,0) + (float)((ulonglong)dVar28 >> 0x20),
                                      SUB84(dVar28,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar6 + 0x24) = (int)((ulonglong)dVar28 >> 0x20);
          }
          else {
            *(double *)((int)pdVar6 + 0x24) = dVar28;
          }
        }
        pdVar6 = pdVar10 + iVar5 * 5;
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),0x3f800000);
        }
        else {
          uVar20 = *(undefined8 *)((int)pdVar6 + 0x14);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar20 < (float)((ulonglong)uVar20 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)((int)pdVar6 + 4));
          }
          else {
            dVar19 = *pdVar6;
            in_xd4 = *(double *)((int)pdVar6 + 4);
          }
          pdVar7 = (double *)(puVar9 + iVar4 * 5);
          iVar4 = iVar4 + 1;
          if (in_FPSCR_SZ == '\0') {
            *(int *)pdVar7 = (int)((ulonglong)dVar19 >> 0x20);
            *(int *)((int)pdVar7 + 4) = SUB84(dVar19,0);
            *(undefined4 *)(pdVar7 + 1) = *(undefined4 *)(pdVar6 + 1);
            *(undefined4 *)(pdVar7 + 3) = *(undefined4 *)(pdVar6 + 3);
            *(undefined4 *)((int)pdVar7 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x1c);
            *(undefined4 *)(pdVar7 + 4) = *(undefined4 *)(pdVar6 + 4);
            *(undefined4 *)((int)pdVar7 + 0x24) = *(undefined4 *)((int)pdVar6 + 0x24);
          }
          else {
            *pdVar7 = dVar19;
            *(double *)((int)pdVar7 + 4) = in_xd4;
            pdVar7[1] = pdVar6[1];
            pdVar7[3] = pdVar6[3];
            *(undefined8 *)((int)pdVar7 + 0x1c) = *(undefined8 *)((int)pdVar6 + 0x1c);
            pdVar7[4] = pdVar6[4];
            *(undefined8 *)((int)pdVar7 + 0x24) = *(undefined8 *)((int)pdVar6 + 0x24);
          }
        }
        iVar8 = iVar5;
        iVar1 = iVar5 + 1;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)(puVar12 + iVar2 + 0x2c);
        *(undefined4 *)(ar7 + 3) = *(undefined4 *)(puVar12 + iVar2 + 0x28);
        *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)(puVar12 + iVar2 + 0x24);
        *(undefined4 *)(ar7 + 2) = *(undefined4 *)(puVar12 + iVar2 + 0x20);
        *(undefined4 *)((int)ar7 + 0xc) = *(undefined4 *)(puVar12 + iVar2 + 0x10);
        *(undefined4 *)(ar7 + 1) = *(undefined4 *)(puVar12 + iVar2 + 0xc);
        uVar16 = 0xe0000000;
        puVar3 = (undefined8 *)((int)ar7 + 4);
        *(undefined4 *)puVar3 = *(undefined4 *)puVar9;
      }
      else {
        ar7[3] = *(undefined8 *)(puVar12 + iVar2 + 0x2c);
        ar7[2] = *(undefined8 *)(puVar12 + iVar2 + 0x28);
        ar7[1] = *(undefined8 *)(puVar12 + iVar2 + 0x24);
        *ar7 = *(undefined8 *)(puVar12 + iVar2 + 0x20);
        ar7[-1] = *(undefined8 *)(puVar12 + iVar2 + 0x10);
        ar7[-2] = *(undefined8 *)(puVar12 + iVar2 + 0xc);
        uVar16 = 0xe0000000;
        puVar3 = ar7 + -3;
        *puVar3 = *puVar9;
      }
      *(undefined4 *)((int)puVar3 + -4) = uVar16;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar12 + iVar2 + 0x54);
        *(undefined4 *)((int)puVar3 + 0x34) = *(undefined4 *)(puVar12 + iVar2 + 0x50);
        *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar12 + iVar2 + 0x4c);
        *(undefined4 *)((int)puVar3 + 0x2c) = *(undefined4 *)(puVar12 + iVar2 + 0x48);
        *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar12 + iVar2 + 0x38);
        *(undefined4 *)((int)puVar3 + 0x24) = *(undefined4 *)(puVar12 + iVar2 + 0x34);
        puVar3 = puVar3 + 4;
        *(undefined4 *)puVar3 = *(undefined4 *)(puVar12 + iVar2 + 0x30);
      }
      else {
        *(undefined8 *)((int)puVar3 + 0x34) = *(undefined8 *)(puVar12 + iVar2 + 0x54);
        *(undefined8 *)((int)puVar3 + 0x2c) = *(undefined8 *)(puVar12 + iVar2 + 0x50);
        *(undefined8 *)((int)puVar3 + 0x24) = *(undefined8 *)(puVar12 + iVar2 + 0x4c);
        *(undefined8 *)((int)puVar3 + 0x1c) = *(undefined8 *)(puVar12 + iVar2 + 0x48);
        *(undefined8 *)((int)puVar3 + 0x14) = *(undefined8 *)(puVar12 + iVar2 + 0x38);
        *(undefined8 *)((int)puVar3 + 0xc) = *(undefined8 *)(puVar12 + iVar2 + 0x34);
        puVar3 = (undefined8 *)((int)puVar3 + 4);
        *puVar3 = *(undefined8 *)(puVar12 + iVar2 + 0x30);
      }
      *(undefined4 *)((int)puVar3 + -4) = uVar16;
      if (iVar4 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar12 + iVar2 + 0xa4);
          *(undefined4 *)((int)puVar3 + 0x34) = *(undefined4 *)(puVar12 + iVar2 + 0xa0);
          *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar12 + iVar2 + 0x9c);
          *(undefined4 *)((int)puVar3 + 0x2c) = *(undefined4 *)(puVar12 + iVar2 + 0x98);
          *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar12 + iVar2 + 0x88);
          *(undefined4 *)((int)puVar3 + 0x24) = *(undefined4 *)(puVar12 + iVar2 + 0x84);
          puVar3 = puVar3 + 4;
          *(undefined4 *)puVar3 = *(undefined4 *)(puVar12 + iVar2 + 0x80);
        }
        else {
          *(undefined8 *)((int)puVar3 + 0x34) = *(undefined8 *)(puVar12 + iVar2 + 0xa4);
          *(undefined8 *)((int)puVar3 + 0x2c) = *(undefined8 *)(puVar12 + iVar2 + 0xa0);
          *(undefined8 *)((int)puVar3 + 0x24) = *(undefined8 *)(puVar12 + iVar2 + 0x9c);
          *(undefined8 *)((int)puVar3 + 0x1c) = *(undefined8 *)(puVar12 + iVar2 + 0x98);
          *(undefined8 *)((int)puVar3 + 0x14) = *(undefined8 *)(puVar12 + iVar2 + 0x88);
          *(undefined8 *)((int)puVar3 + 0xc) = *(undefined8 *)(puVar12 + iVar2 + 0x84);
          puVar3 = (undefined8 *)((int)puVar3 + 4);
          *puVar3 = *(undefined8 *)(puVar12 + iVar2 + 0x80);
        }
        *(undefined4 *)((int)puVar3 + -4) = uVar16;
      }
      uVar16 = 0xf0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar12 + iVar2 + 0x7c);
        *(undefined4 *)((int)puVar3 + 0x34) = *(undefined4 *)(puVar12 + iVar2 + 0x78);
        *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar12 + iVar2 + 0x74);
        *(undefined4 *)((int)puVar3 + 0x2c) = *(undefined4 *)(puVar12 + iVar2 + 0x70);
        *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar12 + iVar2 + 0x60);
        *(undefined4 *)((int)puVar3 + 0x24) = *(undefined4 *)(puVar12 + iVar2 + 0x5c);
        puVar3 = puVar3 + 4;
        *(undefined4 *)puVar3 = *(undefined4 *)(puVar12 + iVar2 + 0x58);
      }
      else {
        *(undefined8 *)((int)puVar3 + 0x34) = *(undefined8 *)(puVar12 + iVar2 + 0x7c);
        *(undefined8 *)((int)puVar3 + 0x2c) = *(undefined8 *)(puVar12 + iVar2 + 0x78);
        *(undefined8 *)((int)puVar3 + 0x24) = *(undefined8 *)(puVar12 + iVar2 + 0x74);
        *(undefined8 *)((int)puVar3 + 0x1c) = *(undefined8 *)(puVar12 + iVar2 + 0x70);
        *(undefined8 *)((int)puVar3 + 0x14) = *(undefined8 *)(puVar12 + iVar2 + 0x60);
        *(undefined8 *)((int)puVar3 + 0xc) = *(undefined8 *)(puVar12 + iVar2 + 0x5c);
        puVar3 = (undefined8 *)((int)puVar3 + 4);
        *puVar3 = *(undefined8 *)(puVar12 + iVar2 + 0x58);
      }
      *(undefined4 *)((int)puVar3 + -4) = uVar16;
      ar7 = (undefined8 *)((int)puVar3 + 0x1c);
      *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar4;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c23231c\n.set _FUN_8c23231c, _FUN_8c23231c_def\n");
