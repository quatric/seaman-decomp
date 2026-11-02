#include "../decls.h"
undefined4 * FUN_8c25bed8_def(undefined4 *ar4,undefined4 *ar5,undefined4 *ar6,undefined8 *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  double in_dr0;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined4 in_fr5;
  double dVar26;
  float fVar28;
  undefined4 in_fr9;
  float fVar29;
  double dVar30;
  undefined4 in_fr11;
  double dVar31;
  double in_dr12;
  double in_dr14;
  double dVar32;
  undefined8 in_xd0;
  double in_xd2;
  double dVar33;
  double dVar34;
  double in_xd4;
  double dVar35;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  double in_xd14;
  bool bVar36;
  bool bVar37;
  int iVar38;
  int iVar39;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uVar27;
  
  uVar2 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    *(ulonglong *)auStack_1c = CONCAT44(SUB84(in_dr14,0),auStack_1c);
    puVar14 = auStack_1c;
  }
  else {
    puVar14 = auStack_24;
  }
  iVar3 = (int)(int)0xffffff18;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar14 + -4) = SUB84(in_dr12,0);
    puVar15 = puVar14 + -8;
    *(int *)(puVar14 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(double *)(puVar14 + -8) = in_xd12;
    puVar15 = puVar14 + -0x10;
    *(double *)(puVar14 + -0x10) = in_dr12;
  }
  iVar1 = iVar3 + 0x7c;
  if (in_FPSCR_SZ == '\0') {
    uVar27 = *(undefined4 *)0x8c4aa4a8;
    dVar21 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4dc);
    dVar26 = (double)CONCAT44(uVar27,*(undefined4 *)((int)0x8c4aa4a8 + 0xc));
    in_fr9 = *(undefined4 *)(0x8c4aa4a8 + 2);
    dVar30 = (double)CONCAT44(uVar27,in_fr5);
  }
  else {
    dVar26 = *(undefined4 *)0x8c4aa4a8;
    in_xd6 = *(double *)((int)0x8c4aa4a8 + 0xc);
    dVar21 = *(undefined4 *)0x8c4aa4e0;
    in_xd2 = *(undefined4 *)0x8c4aa4dc;
    uVar27 = (undefined4)((ulonglong)dVar26 >> 0x20);
    in_xd8 = ((undefined1 *)2)[0x8c4aa4a8];
    dVar30 = dVar26;
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar21,0),SUB84(dVar26,0));
  }
  else {
    dVar26 = dVar26 * dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar30 = (double)CONCAT44(uVar27,in_fr9);
  }
  if (in_FPSCR_PR == '\0') {
    dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) *
                              (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar30,0));
  }
  else {
    dVar30 = dVar30 * dVar21;
  }
  dVar31 = (double)CONCAT44(0x3f800000,in_fr11);
  dVar33 = dVar31;
  dVar35 = dVar31;
  dVar22 = dVar31;
  if (in_FPSCR_SZ == '\0') {
    dVar33 = 0.007812501848093234;
    dVar35 = in_xd4;
    dVar22 = (double)CONCAT44(0x3f800000,SUB84(dVar21,0));
  }
  fVar25 = (float)((ulonglong)dVar26 >> 0x20);
  fVar20 = (float)((ulonglong)dVar30 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) / fVar20,SUB84(dVar33,0) / fVar25);
  }
  else {
    dVar21 = (dVar33 / dVar26) / dVar30;
  }
  *(undefined4 *)(puVar15 + iVar3 + 0x9c) = *ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),ar4[3]);
  }
  else {
    in_xd2 = *(double *)(ar4 + 3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 / dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = (double *)(puVar15 + iVar3 + 0x98);
    *(int *)pdVar12 = (int)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar3 + 0x98),ar4[4]);
  }
  else {
    pdVar12 = (double *)(puVar15 + iVar3 + 0x94);
    *pdVar12 = dVar22;
    in_xd2 = *(double *)(ar4 + 4);
    dVar22 = *(double *)(puVar15 + iVar3 + 0x98);
  }
  fVar29 = SUB84(dVar30,0);
  fVar19 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar17 = (SUB84(dVar22,0) - fVar29) * (float)((ulonglong)dVar22 >> 0x20) * fVar19;
  }
  else {
    fVar17 = SUB84((dVar22 - dVar30) * (dVar22 - dVar30) * dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = (double *)((int)pdVar12 + -4);
    *(float *)pdVar12 = fVar17;
    dVar22 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar3 + 0x98),ar4[5]);
  }
  else {
    pdVar12 = pdVar12 + -1;
    *pdVar12 = in_xd2;
    in_xd2 = *(double *)(ar4 + 5);
    dVar22 = *(double *)(puVar15 + iVar3 + 0x98);
  }
  fVar28 = SUB84(dVar26,0);
  fVar17 = SUB84(dVar21,0);
  if (in_FPSCR_PR == '\0') {
    fVar18 = (SUB84(dVar22,0) - fVar28) * (float)((ulonglong)dVar22 >> 0x20) * fVar17;
  }
  else {
    fVar18 = SUB84((dVar22 - dVar26) * (dVar22 - dVar26) * dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)pdVar12 + -4) = fVar18;
    *(undefined4 *)(pdVar12 + -1) = ar4[1];
    *(undefined4 *)((int)pdVar12 + -0xc) = ar4[2];
    *(undefined4 *)(pdVar12 + -2) = ar4[3];
    *(undefined4 *)((int)pdVar12 + -0x14) = ar4[4];
    fVar18 = (float)ar4[5];
    pdVar12 = pdVar12 + -3;
    *(float *)pdVar12 = fVar18;
  }
  else {
    pdVar12[-1] = in_xd2;
    pdVar12[-2] = *(double *)(ar4 + 1);
    pdVar12[-3] = *(double *)(ar4 + 2);
    pdVar12[-4] = *(double *)(ar4 + 3);
    pdVar12[-5] = *(double *)(ar4 + 4);
    in_xd2 = *(double *)(ar4 + 5);
    pdVar12 = pdVar12 + -6;
    *pdVar12 = in_xd2;
  }
  dVar22 = dVar31;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(0x3f800000,fVar18);
  }
  *(undefined4 *)((int)pdVar12 + 0x44) = *ar5;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),ar5[3]);
  }
  else {
    in_xd2 = *(double *)(ar5 + 3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 / dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = pdVar12 + 8;
    *(int *)pdVar12 = (int)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar3 + 0xbc),ar5[4]);
  }
  else {
    pdVar12 = (double *)((int)pdVar12 + 0x3c);
    *pdVar12 = dVar22;
    in_xd2 = *(double *)(ar5 + 4);
    dVar22 = *(double *)(puVar15 + iVar3 + 0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (SUB84(dVar22,0) - fVar29) * (float)((ulonglong)dVar22 >> 0x20) * fVar19;
  }
  else {
    fVar18 = SUB84((dVar22 - dVar30) * (dVar22 - dVar30) * dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = (double *)((int)pdVar12 + -4);
    *(float *)pdVar12 = fVar18;
    dVar22 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar3 + 0xbc),ar5[5]);
  }
  else {
    pdVar12 = pdVar12 + -1;
    *pdVar12 = in_xd2;
    in_xd2 = *(double *)(ar5 + 5);
    dVar22 = *(double *)(puVar15 + iVar3 + 0xbc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (SUB84(dVar22,0) - fVar28) * (float)((ulonglong)dVar22 >> 0x20) * fVar17;
  }
  else {
    fVar18 = SUB84((dVar22 - dVar26) * (dVar22 - dVar26) * dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)pdVar12 + -4) = fVar18;
    *(undefined4 *)(pdVar12 + -1) = ar5[1];
    *(undefined4 *)((int)pdVar12 + -0xc) = ar5[2];
    *(undefined4 *)(pdVar12 + -2) = ar5[3];
    *(undefined4 *)((int)pdVar12 + -0x14) = ar5[4];
    uVar27 = ar5[5];
    pdVar12 = pdVar12 + -3;
    *(undefined4 *)pdVar12 = uVar27;
    dVar22 = (double)CONCAT44(0x3f800000,uVar27);
  }
  else {
    pdVar12[-1] = in_xd2;
    pdVar12[-2] = *(double *)(ar5 + 1);
    pdVar12[-3] = *(double *)(ar5 + 2);
    pdVar12[-4] = *(double *)(ar5 + 3);
    pdVar12[-5] = *(double *)(ar5 + 4);
    in_xd2 = *(double *)(ar5 + 5);
    pdVar12 = pdVar12 + -6;
    *pdVar12 = in_xd2;
    dVar22 = dVar31;
  }
  *(undefined4 *)((int)pdVar12 + 0x44) = *ar6;
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),ar6[3]);
  }
  else {
    in_xd2 = *(double *)(ar6 + 3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar22,0),SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 / dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = pdVar12 + 8;
    *(int *)pdVar12 = (int)((ulonglong)dVar22 >> 0x20);
    dVar22 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar3 + 0xe0),ar6[4]);
  }
  else {
    pdVar12 = (double *)((int)pdVar12 + 0x3c);
    *pdVar12 = dVar22;
    in_xd2 = *(double *)(ar6 + 4);
    dVar22 = *(double *)(puVar15 + iVar3 + 0xe0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (SUB84(dVar22,0) - fVar29) * (float)((ulonglong)dVar22 >> 0x20) * fVar19;
  }
  else {
    fVar19 = SUB84((dVar22 - dVar30) * (dVar22 - dVar30) * dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = (double *)((int)pdVar12 + -4);
    *(float *)pdVar12 = fVar19;
    dVar22 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar3 + 0xe0),ar6[5]);
  }
  else {
    pdVar12 = pdVar12 + -1;
    *pdVar12 = in_xd2;
    in_xd2 = *(double *)(ar6 + 5);
    dVar22 = *(double *)(puVar15 + iVar3 + 0xe0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar22 >> 0x20);
    dVar21 = (double)CONCAT44(fVar19,(SUB84(dVar22,0) - fVar28) * fVar19 * fVar17);
  }
  else {
    dVar21 = (dVar22 - dVar26) * (dVar22 - dVar26) * dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = (double *)((int)pdVar12 + -4);
    *(int *)pdVar12 = SUB84(dVar21,0);
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),ar6[1]);
  }
  else {
    pdVar12 = pdVar12 + -1;
    *pdVar12 = in_xd2;
    in_xd2 = *(double *)(ar6 + 1);
  }
  iVar8 = 0;
  if (in_FPSCR_SZ == '\0') {
    pdVar12 = (double *)((int)pdVar12 + -4);
    *(int *)pdVar12 = SUB84(dVar21,0);
  }
  else {
    pdVar12 = pdVar12 + -1;
    *pdVar12 = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar12 + -4) = ar6[2];
    *(undefined4 *)(pdVar12 + -1) = ar6[3];
    *(undefined4 *)((int)pdVar12 + -0xc) = ar6[4];
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),ar6[5]);
    *(undefined4 *)(pdVar12 + -2) = ar6[5];
    dVar22 = (double)CONCAT44(*(undefined4 *)0x8c4aa4d4,fVar17);
  }
  else {
    pdVar12[-1] = *(double *)(ar6 + 2);
    pdVar12[-2] = *(double *)(ar6 + 3);
    pdVar12[-3] = *(double *)(ar6 + 4);
    in_xd2 = *(double *)(ar6 + 5);
    pdVar12[-4] = in_xd2;
    dVar22 = *(undefined4 *)0x8c4aa4d4;
  }
  puVar13 = (undefined4 *)(puVar15 + iVar3 + 0x1c);
  dVar33 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),(int)((ulonglong)dVar22 >> 0x20));
    dVar33 = in_xd2;
  }
  iVar38 = 2;
  iVar9 = 0;
  if (in_FPSCR_PR == '\0') {
    fVar19 = 1.0 / SUB84(dVar21,0);
    dVar31 = (double)CONCAT44(fVar19,in_fr11);
    dVar26 = (double)CONCAT44(fVar25 * fVar19,fVar28);
    dVar30 = (double)CONCAT44(fVar20 * fVar19,fVar29);
  }
  else {
    dVar31 = dVar31 / dVar21;
    dVar26 = dVar26 * dVar31;
    dVar30 = dVar30 * dVar31;
  }
  do {
    iVar38 = iVar38 * 0x24 + iVar1;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                *(undefined4 *)(puVar15 + iVar38 + 0x1c));
    }
    else {
      dVar33 = *(double *)(puVar15 + iVar38 + 0x1c);
    }
    fVar25 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar36 = fVar25 < SUB84(dVar21,0);
    }
    else {
      bVar36 = dVar22 < dVar21;
    }
    iVar10 = iVar9 * 0x24 + iVar1;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                *(undefined4 *)(puVar15 + iVar10 + 0x1c));
    }
    else {
      dVar33 = *(double *)(puVar15 + iVar10 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar37 = fVar25 < SUB84(dVar21,0);
    }
    else {
      bVar37 = dVar22 < dVar21;
    }
    if ((bVar36 ^ 1) != -(bVar37 - 1)) {
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44(fVar25,*(undefined4 *)(puVar15 + iVar38 + 0x1c));
        dVar21 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar10 + 0x1c),fVar25);
      }
      else {
        dVar35 = *(double *)(puVar15 + iVar38 + 0x1c);
        dVar21 = *(double *)(puVar15 + iVar10 + 0x1c);
        dVar33 = dVar22;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar21,0) - SUB84(dVar22,0));
      }
      else {
        dVar21 = (dVar21 - dVar22) - dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  *(undefined4 *)(puVar15 + iVar38 + 0x14));
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar21,0));
      }
      else {
        dVar35 = *(double *)(puVar15 + iVar38 + 0x14);
        in_xd10 = dVar33;
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                  SUB84(dVar31,0) / (float)((ulonglong)dVar21 >> 0x20));
      }
      else {
        dVar31 = dVar31 / dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(SUB84(dVar22,0),*(undefined4 *)(puVar15 + iVar10 + 0x14));
      }
      else {
        dVar33 = *(double *)(puVar15 + iVar10 + 0x14);
        dVar21 = dVar35;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - SUB84(dVar22,0)
                                 );
      }
      else {
        dVar21 = dVar21 - dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(puVar15 + iVar38 + 0x18));
        dVar16 = (double)CONCAT44(SUB84(dVar31,0),SUB84(in_dr0,0));
      }
      else {
        in_xd14 = *(double *)(puVar15 + iVar38 + 0x18);
        dVar16 = in_xd10;
      }
      fVar25 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44(fVar25 * SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20),
                                  SUB84(dVar21,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                  *(undefined4 *)(puVar15 + iVar10 + 0x18));
      }
      else {
        dVar33 = *(double *)(puVar15 + iVar10 + 0x18);
      }
      fVar20 = SUB84(in_dr14,0);
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar20);
      }
      else {
        dVar21 = dVar21 - in_dr14;
      }
      dVar23 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),(int)((ulonglong)dVar21 >> 0x20))
        ;
        dVar23 = (double)CONCAT44(fVar20,SUB84(dVar21,0));
        dVar21 = dVar35;
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = (double)CONCAT44(fVar25 * SUB84(dVar23,0) + (float)((ulonglong)dVar23 >> 0x20),
                                  SUB84(dVar23,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                  *(undefined4 *)(puVar15 + iVar10 + 0xc));
        dVar32 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar38 + 0xc),fVar20);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   *(undefined4 *)(puVar15 + iVar38 + 0x10));
      }
      else {
        dVar33 = *(double *)(puVar15 + iVar10 + 0xc);
        dVar32 = *(double *)(puVar15 + iVar38 + 0xc);
        in_xd12 = *(double *)(puVar15 + iVar38 + 0x10);
      }
      fVar20 = (float)((ulonglong)dVar32 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) - fVar20);
      }
      else {
        dVar23 = dVar23 - dVar32;
      }
      dVar35 = dVar32;
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)CONCAT44(fVar20,SUB84(dVar23,0));
        dVar35 = (double)CONCAT44(fVar20,(int)((ulonglong)dVar23 >> 0x20));
        dVar23 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar32 = (double)CONCAT44(fVar25 * SUB84(dVar32,0) + (float)((ulonglong)dVar32 >> 0x20),
                                  SUB84(dVar32,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                  *(undefined4 *)(puVar15 + iVar10 + 0x10));
      }
      else {
        dVar33 = *(double *)(puVar15 + iVar10 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                  SUB84(dVar32,0) - SUB84(in_dr12,0));
      }
      else {
        dVar32 = dVar32 - in_dr12;
      }
      puVar4 = puVar13 + iVar8 * 6;
      dVar24 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(SUB84(in_dr12,0),SUB84(dVar32,0));
        dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar35,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44(fVar25 * SUB84(dVar24,0) + (float)((ulonglong)dVar24 >> 0x20),
                                  SUB84(dVar24,0));
      }
      dVar35 = dVar21;
      dVar34 = in_xd6;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar26,0));
        dVar35 = (double)CONCAT44(SUB84(dVar22,0),SUB84(dVar16,0));
        dVar34 = dVar33;
      }
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                  (float)((ulonglong)dVar35 >> 0x20) *
                                  (float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar24,0));
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   (int)((ulonglong)dVar24 >> 0x20));
        puVar4[5] = SUB84(dVar24,0);
        dVar24 = (double)((ulonglong)dVar30 & 0xffffffff);
        dVar33 = in_xd12;
        dVar16 = (double)CONCAT44(SUB84(dVar32,0),SUB84(dVar35,0));
      }
      else {
        *(double *)(puVar4 + 5) = dVar34;
        dVar34 = in_xd8;
        dVar33 = dVar24;
        dVar16 = dVar23;
      }
      fVar20 = SUB84(dVar24,0);
      fVar25 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar20 = fVar25 * (float)((ulonglong)dVar30 >> 0x20) + fVar20;
      }
      uVar6 = (uint)((ulonglong)dVar32 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        puVar4[4] = (uint)fVar20;
        puVar4[3] = (uint)((ulonglong)dVar31 >> 0x20);
        puVar4[2] = uVar6;
        puVar4[1] = SUB84(in_dr12,0);
      }
      else {
        *(double *)(puVar4 + 4) = dVar34;
        *(double *)(puVar4 + 3) = dVar31;
        *(double *)(puVar4 + 2) = dVar32;
        *(double *)(puVar4 + 1) = dVar33;
      }
      uVar5 = *(uint *)(puVar15 + iVar38 + 0x20);
      fVar20 = (float)(uVar5 >> 0x18);
      dVar35 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar20);
        dVar35 = dVar21;
      }
      if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
        fVar19 = DAT_8c25c1d8;
        if (in_FPSCR_SZ != '\0') {
          dVar34 = (double)CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
          fVar19 = fVar20;
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) + fVar19);
        }
        else {
          dVar22 = dVar22 + (double)(ulonglong)(uint)fVar19;
        }
      }
      fVar20 = (float)(uVar5 >> 0x10 & 0xff);
      dVar21 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)CONCAT44(uVar6,fVar20);
        dVar21 = dVar23;
      }
      if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
        fVar19 = DAT_8c25c1d8;
        if (in_FPSCR_SZ != '\0') {
          dVar34 = (double)CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
          fVar19 = fVar20;
        }
        if (in_FPSCR_PR == '\0') {
          dVar32 = (double)(ulonglong)(uint)(SUB84(dVar32,0) + fVar19);
        }
        else {
          dVar32 = dVar32 + (double)(ulonglong)(uint)fVar19;
        }
      }
      fVar20 = (float)(uVar5 >> 8 & 0xff);
      in_dr14 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(fVar20,SUB84(dVar32,0));
      }
      if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
        fVar19 = DAT_8c25c1d8;
        if (in_FPSCR_SZ != '\0') {
          dVar34 = (double)CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
          fVar19 = fVar20;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + fVar19,SUB84(in_dr14,0));
        }
        else {
          in_dr14 = in_dr14 + (double)(ulonglong)(uint)fVar19;
        }
      }
      fVar20 = (float)(uVar5 & 0xff);
      in_xd12 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),fVar20);
        in_xd12 = dVar33;
      }
      if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
        fVar19 = DAT_8c25c1d8;
        if (in_FPSCR_SZ != '\0') {
          dVar34 = (double)CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
          fVar19 = fVar20;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr12 = (double)(ulonglong)(uint)(SUB84(in_dr12,0) + fVar19);
        }
        else {
          in_dr12 = in_dr12 + (double)(ulonglong)(uint)fVar19;
        }
      }
      uVar6 = *(uint *)(puVar15 + iVar10 + 0x20);
      fVar20 = (float)(uVar6 >> 0x18);
      dVar33 = dVar34;
      if (in_FPSCR_SZ == '\0') {
        dVar33 = (double)CONCAT44(fVar20,SUB84(in_dr12,0));
      }
      if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
        fVar19 = DAT_8c25c1d8;
        if (in_FPSCR_SZ != '\0') {
          dVar34 = (double)CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
          fVar19 = fVar20;
        }
        if (in_FPSCR_PR == '\0') {
          dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) + fVar19,SUB84(dVar33,0));
        }
        else {
          dVar33 = dVar33 + (double)(ulonglong)(uint)fVar19;
        }
      }
      fVar20 = (float)(uVar6 >> 0x10 & 0xff);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar15 + iVar3 + 8) = fVar20;
      }
      else {
        *(double *)(puVar15 + iVar3 + 8) = dVar34;
      }
      if (in_FPSCR_PR != '\0' || 0.0 <= fVar20) {
        if (in_FPSCR_SZ == '\0') {
          fVar20 = *(float *)(puVar15 + iVar3 + 8);
        }
        else {
          dVar34 = *(double *)(puVar15 + iVar3 + 8);
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(fVar25,DAT_8c25c1d8);
          fVar20 = *(float *)(puVar15 + iVar3 + 8);
        }
        else {
          in_xd0 = CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
          dVar34 = *(double *)(puVar15 + iVar3 + 8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar20 = fVar20 + SUB84(dVar16,0);
        }
        else {
          fVar20 = SUB84((double)(ulonglong)(uint)fVar20 + dVar16,0);
        }
      }
      uVar5 = uVar6 >> 8 & 0xff;
      dVar16 = (double)((ulonglong)dVar16 & 0xffffffff00000000);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar15 + iVar3 + 0x18) = fVar20;
      }
      else {
        *(double *)(puVar15 + iVar3 + 0x18) = dVar34;
      }
      if (in_FPSCR_PR == '\0') {
        fVar25 = (float)uVar5;
        dVar23 = (double)CONCAT44(fVar25,fVar20);
        bVar36 = fVar25 < 0.0;
      }
      else {
        dVar23 = (double)uVar5;
        fVar25 = (float)((ulonglong)dVar23 >> 0x20);
        bVar36 = dVar23 < dVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar15 + iVar3 + 4) = fVar25;
      }
      else {
        *(double *)(puVar15 + iVar3 + 4) = dVar23;
      }
      if (bVar36) {
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)((ulonglong)(uint)DAT_8c25c1d8 << 0x20);
          dVar23 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar3 + 4),SUB84(dVar23,0));
        }
        else {
          dVar16 = (double)CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
          dVar23 = *(double *)(puVar15 + iVar3 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar25 = (float)((ulonglong)dVar23 >> 0x20) + (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar25 = (float)((ulonglong)(dVar23 + dVar16) >> 0x20);
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        fVar25 = *(float *)(puVar15 + iVar3 + 4);
      }
      else {
        fVar25 = (float)((ulonglong)*(undefined8 *)(puVar15 + iVar3 + 4) >> 0x20);
      }
      dVar23 = (double)((ulonglong)(uint)fVar25 << 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar15 + iVar3 + 0x14) = fVar25;
      }
      else {
        *(double *)(puVar15 + iVar3 + 0x14) = dVar23;
      }
      uVar27 = (undefined4)((ulonglong)dVar16 >> 0x20);
      fVar20 = (float)(uVar6 & 0xff);
      dVar16 = (double)CONCAT44(uVar27,fVar20);
      if (in_FPSCR_PR == '\0') {
        bVar36 = fVar20 < 0.0;
      }
      else {
        bVar36 = dVar16 < dVar23;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar15 + iVar3) = fVar20;
      }
      else {
        *(undefined8 *)(puVar15 + iVar3) = in_xd0;
      }
      if (bVar36) {
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44(fVar25,*(undefined4 *)(puVar15 + iVar3));
          dVar16 = (double)CONCAT44(uVar27,DAT_8c25c1d8);
        }
        else {
          dVar34 = *(double *)(puVar15 + iVar3);
          in_xd0 = CONCAT44((*(uint *)0x8c25c1dc),DAT_8c25c1d8);
        }
        if (in_FPSCR_PR == '\0') {
          dVar23 = (double)(ulonglong)(uint)(SUB84(dVar23,0) + SUB84(dVar16,0));
        }
        else {
          dVar23 = dVar23 + dVar16;
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)(ulonglong)*(uint *)(puVar15 + iVar3);
      }
      else {
        dVar34 = *(double *)(puVar15 + iVar3);
      }
      if (in_FPSCR_PR == '\0') {
        dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar33,0));
      }
      else {
        dVar33 = dVar33 - dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar25 = SUB84(dVar23,0);
        *(float *)(puVar15 + iVar3 + 0xc) = fVar25;
        dVar16 = (double)CONCAT44(SUB84(dVar31,0),SUB84(dVar16,0));
        dVar23 = (double)CONCAT44(SUB84(dVar22,0),fVar25);
      }
      else {
        fVar25 = SUB84(dVar35,0);
        *(double *)(puVar15 + iVar3 + 0xc) = dVar34;
        dVar16 = in_xd10;
        dVar23 = dVar35;
      }
      fVar20 = SUB84(dVar33,0);
      fVar19 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar23 = (double)CONCAT44(fVar19 * (float)((ulonglong)dVar33 >> 0x20) +
                                  (float)((ulonglong)dVar23 >> 0x20),fVar25 - fVar20);
      }
      else {
        dVar23 = dVar23 - dVar33;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar20);
        in_dr12 = (double)CONCAT44(SUB84(in_dr14,0),fVar20);
      }
      else {
        fVar20 = SUB84(dVar21,0);
        dVar35 = in_xd12;
        in_dr12 = dVar21;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  fVar19 * SUB84(dVar23,0) + SUB84(dVar22,0));
      }
      uVar27 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar15 + iVar3 + 0x10) = uVar27;
        dVar16 = (double)CONCAT44(fVar19,*(undefined4 *)(puVar15 + iVar3 + 0x18));
        dVar23 = (double)CONCAT44(uVar27,uVar27);
        dVar33 = dVar34;
      }
      else {
        *(double *)(puVar15 + iVar3 + 0x10) = dVar23;
        in_xd0 = *(undefined8 *)(puVar15 + iVar3 + 0x18);
        dVar33 = dVar23;
      }
      if (in_FPSCR_PR == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                  SUB84(dVar16,0) - SUB84(in_dr14,0));
      }
      else {
        dVar16 = dVar16 - in_dr14;
      }
      in_xd14 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        uVar27 = (undefined4)((ulonglong)in_dr14 >> 0x20);
        in_dr14 = (double)CONCAT44(uVar27,uVar27);
        in_xd14 = dVar21;
      }
      fVar25 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        in_dr12 = (double)CONCAT44(fVar25 * SUB84(dVar16,0) + (float)((ulonglong)in_dr12 >> 0x20),
                                   fVar20);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(fVar25,*(undefined4 *)(puVar15 + iVar3 + 0x14));
      }
      else {
        in_xd0 = *(undefined8 *)(puVar15 + iVar3 + 0x14);
      }
      fVar25 = (float)((ulonglong)in_dr14 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar16 >> 0x20);
        in_dr14 = (double)CONCAT44(fVar25,fVar20 * (SUB84(dVar16,0) - fVar25) + SUB84(in_dr14,0));
      }
      else {
        fVar20 = (float)((ulonglong)(dVar16 - in_dr14) >> 0x20);
      }
      in_dr0 = (double)CONCAT44(fVar20,0x4f000000);
      if (in_FPSCR_PR == '\0') {
        bVar36 = SUB84(dVar23,0) < 0x4f000000;
      }
      else {
        bVar36 = dVar23 < in_dr0;
      }
      if (!bVar36) {
        if (in_FPSCR_PR == '\0') {
          in_dr0 = (double)CONCAT44(fVar20,0x4f000000 + 0x4f000000);
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                    SUB84(dVar23,0) - (0x4f000000 + 0x4f000000));
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
          dVar23 = dVar23 - in_dr0;
        }
      }
      if (in_FPSCR_PR == '\0') {
        iVar38 = (int)SUB84(dVar23,0);
      }
      else {
        iVar38 = (int)dVar23;
      }
      uVar27 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar21 = (double)CONCAT44(uVar27,0x4f000000);
      fVar25 = (float)((ulonglong)in_dr12 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar36 = fVar25 < 0x4f000000;
      }
      else {
        bVar36 = in_dr12 < dVar21;
      }
      if (!bVar36) {
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(uVar27,0x4f000000 + 0x4f000000);
          in_dr12 = (double)CONCAT44(fVar25 - (0x4f000000 + 0x4f000000),SUB84(in_dr12,0));
        }
        else {
          dVar21 = dVar21 + dVar21;
          in_dr12 = in_dr12 - dVar21;
        }
      }
      if (in_FPSCR_PR == '\0') {
        iVar10 = (int)(float)((ulonglong)in_dr12 >> 0x20);
      }
      else {
        iVar10 = (int)in_dr12;
      }
      uVar27 = (undefined4)((ulonglong)dVar21 >> 0x20);
      dVar21 = (double)CONCAT44(uVar27,0x4f000000);
      if (in_FPSCR_PR == '\0') {
        bVar36 = SUB84(in_dr14,0) < 0x4f000000;
      }
      else {
        bVar36 = in_dr14 < dVar21;
      }
      if (!bVar36) {
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(uVar27,0x4f000000 + 0x4f000000);
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                     SUB84(in_dr14,0) - (0x4f000000 + 0x4f000000));
        }
        else {
          dVar21 = dVar21 + dVar21;
          in_dr14 = in_dr14 - dVar21;
        }
      }
      if (in_FPSCR_PR == '\0') {
        iVar39 = (int)SUB84(in_dr14,0);
      }
      else {
        iVar39 = (int)in_dr14;
      }
      uVar27 = (undefined4)((ulonglong)dVar21 >> 0x20);
      dVar21 = (double)CONCAT44(uVar27,0x4f000000);
      if (in_FPSCR_PR == '\0') {
        bVar36 = SUB84(dVar22,0) < 0x4f000000;
      }
      else {
        bVar36 = dVar22 < dVar21;
      }
      if (!bVar36) {
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(uVar27,0x4f000000 + 0x4f000000);
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    SUB84(dVar22,0) - (0x4f000000 + 0x4f000000));
        }
        else {
          dVar21 = dVar21 + dVar21;
          dVar22 = dVar22 - dVar21;
        }
      }
      if (in_FPSCR_PR == '\0') {
        uVar6 = (uint)SUB84(dVar22,0);
      }
      else {
        uVar6 = (uint)dVar22;
      }
      iVar8 = iVar8 + 1;
      *puVar4 = iVar38 << 0x18 | iVar10 << 0x10 | iVar39 << 8 | uVar6;
    }
    pdVar12 = (double *)(puVar15 + iVar9 * 0x24 + iVar1);
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                *(undefined4 *)((int)pdVar12 + 0x1c));
    }
    else {
      dVar33 = *(double *)((int)pdVar12 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar36 = (float)((ulonglong)dVar22 >> 0x20) < SUB84(dVar21,0);
    }
    else {
      bVar36 = dVar22 < dVar21;
    }
    if (bVar36) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)pdVar12);
      }
      else {
        dVar33 = *pdVar12;
      }
      puVar7 = puVar13 + iVar8 * 6;
      if (in_FPSCR_SZ == '\0') {
        puVar7[5] = SUB84(dVar21,0);
        puVar7[4] = *(undefined4 *)((int)pdVar12 + 4);
        puVar7[3] = *(undefined4 *)(pdVar12 + 1);
        puVar7[2] = *(undefined4 *)((int)pdVar12 + 0xc);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(pdVar12 + 2));
        puVar7[1] = *(undefined4 *)(pdVar12 + 2);
      }
      else {
        *(double *)(puVar7 + 5) = dVar33;
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)((int)pdVar12 + 4);
        *(double *)(puVar7 + 3) = pdVar12[1];
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)((int)pdVar12 + 0xc);
        dVar33 = pdVar12[2];
        *(double *)(puVar7 + 1) = dVar33;
      }
      iVar8 = iVar8 + 1;
      *puVar7 = *(undefined4 *)(pdVar12 + 4);
    }
    iVar10 = iVar9 + 1;
    iVar38 = iVar9;
    iVar9 = iVar10;
  } while (iVar10 < 3);
  *(undefined4 *)(ar7 + 3) = *puVar13;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)(puVar15 + iVar3 + 0x20);
    *(undefined4 *)(ar7 + 2) = *(undefined4 *)(puVar15 + iVar3 + 0x24);
    *(undefined4 *)((int)ar7 + 0xc) = *(undefined4 *)(puVar15 + iVar3 + 0x28);
    *(undefined4 *)(ar7 + 1) = *(undefined4 *)(puVar15 + iVar3 + 0x2c);
    puVar11 = (undefined8 *)((int)ar7 + 4);
    *(undefined4 *)puVar11 = *(undefined4 *)(puVar15 + iVar3 + 0x30);
  }
  else {
    ar7[2] = *(undefined8 *)(puVar15 + iVar3 + 0x20);
    ar7[1] = *(undefined8 *)(puVar15 + iVar3 + 0x24);
    *ar7 = *(undefined8 *)(puVar15 + iVar3 + 0x28);
    ar7[-1] = *(undefined8 *)(puVar15 + iVar3 + 0x2c);
    puVar11 = ar7 + -2;
    *puVar11 = *(undefined8 *)(puVar15 + iVar3 + 0x30);
  }
  *(undefined4 *)((int)puVar11 + -4) = uVar2;
  *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(puVar15 + iVar3 + 0x34);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(puVar15 + iVar3 + 0x38);
    *(undefined4 *)((int)puVar11 + 0x2c) = *(undefined4 *)(puVar15 + iVar3 + 0x3c);
    *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(puVar15 + iVar3 + 0x40);
    *(undefined4 *)((int)puVar11 + 0x24) = *(undefined4 *)(puVar15 + iVar3 + 0x44);
    puVar11 = puVar11 + 4;
    *(undefined4 *)puVar11 = *(undefined4 *)(puVar15 + iVar3 + 0x48);
  }
  else {
    *(undefined8 *)((int)puVar11 + 0x2c) = *(undefined8 *)(puVar15 + iVar3 + 0x38);
    *(undefined8 *)((int)puVar11 + 0x24) = *(undefined8 *)(puVar15 + iVar3 + 0x3c);
    *(undefined8 *)((int)puVar11 + 0x1c) = *(undefined8 *)(puVar15 + iVar3 + 0x40);
    *(undefined8 *)((int)puVar11 + 0x14) = *(undefined8 *)(puVar15 + iVar3 + 0x44);
    puVar11 = (undefined8 *)((int)puVar11 + 0xc);
    *puVar11 = *(undefined8 *)(puVar15 + iVar3 + 0x48);
  }
  *(undefined4 *)((int)puVar11 + -4) = uVar2;
  if (iVar8 != 3) {
    *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(puVar15 + iVar3 + 100);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(puVar15 + iVar3 + 0x68);
      *(undefined4 *)((int)puVar11 + 0x2c) = *(undefined4 *)(puVar15 + iVar3 + 0x6c);
      *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(puVar15 + iVar3 + 0x70);
      *(undefined4 *)((int)puVar11 + 0x24) = *(undefined4 *)(puVar15 + iVar3 + 0x74);
      puVar11 = puVar11 + 4;
      *(undefined4 *)puVar11 = *(undefined4 *)(puVar15 + iVar3 + 0x78);
    }
    else {
      *(undefined8 *)((int)puVar11 + 0x2c) = *(undefined8 *)(puVar15 + iVar3 + 0x68);
      *(undefined8 *)((int)puVar11 + 0x24) = *(undefined8 *)(puVar15 + iVar3 + 0x6c);
      *(undefined8 *)((int)puVar11 + 0x1c) = *(undefined8 *)(puVar15 + iVar3 + 0x70);
      *(undefined8 *)((int)puVar11 + 0x14) = *(undefined8 *)(puVar15 + iVar3 + 0x74);
      puVar11 = (undefined8 *)((int)puVar11 + 0xc);
      *puVar11 = *(undefined8 *)(puVar15 + iVar3 + 0x78);
    }
    *(undefined4 *)((int)puVar11 + -4) = uVar2;
  }
  *(undefined4 *)((int)puVar11 + 0x34) = *(undefined4 *)(puVar15 + iVar3 + 0x4c);
  uVar2 = 0xf0000000;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(puVar15 + iVar3 + 0x50);
    *(undefined4 *)((int)puVar11 + 0x2c) = *(undefined4 *)(puVar15 + iVar3 + 0x54);
    *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(puVar15 + iVar3 + 0x58);
    *(undefined4 *)((int)puVar11 + 0x24) = *(undefined4 *)(puVar15 + iVar3 + 0x5c);
    puVar11 = puVar11 + 4;
    *(undefined4 *)puVar11 = *(undefined4 *)(puVar15 + iVar3 + 0x60);
  }
  else {
    *(undefined8 *)((int)puVar11 + 0x2c) = *(undefined8 *)(puVar15 + iVar3 + 0x50);
    *(undefined8 *)((int)puVar11 + 0x24) = *(undefined8 *)(puVar15 + iVar3 + 0x54);
    *(undefined8 *)((int)puVar11 + 0x1c) = *(undefined8 *)(puVar15 + iVar3 + 0x58);
    *(undefined8 *)((int)puVar11 + 0x14) = *(undefined8 *)(puVar15 + iVar3 + 0x5c);
    puVar11 = (undefined8 *)((int)puVar11 + 0xc);
    *puVar11 = *(undefined8 *)(puVar15 + iVar3 + 0x60);
  }
  *(undefined4 *)((int)puVar11 + -4) = uVar2;
  return (undefined4 *)((int)puVar11 + 0x1c);
}

__asm__(".globl _FUN_8c25bed8\n.set _FUN_8c25bed8, _FUN_8c25bed8_def\n");
