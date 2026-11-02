#include "../decls.h"
undefined4 * FUN_8c22b26c_def(double *ar4,double *ar5,double *ar6,undefined4 *ar7)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 in_fr1;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar19;
  double dVar17;
  undefined8 uVar18;
  double in_dr4;
  uint uVar20;
  undefined4 in_fr7;
  float fVar21;
  double dVar22;
  float fVar23;
  undefined4 in_fr9;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 in_dr12;
  undefined4 in_fr15;
  double in_xd0;
  double in_xd2;
  double dVar27;
  double in_xd4;
  double in_xd6;
  double dVar28;
  double in_xd8;
  double in_xd12;
  double dVar29;
  double in_xd14;
  bool bVar30;
  bool bVar31;
  int iVar32;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  double dVar26;
  
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_20;
  }
  else {
    puVar8 = auStack_28;
  }
  iVar1 = (int)(int)0xffffff3c;
  uVar25 = (undefined4)in_dr12;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -4) = uVar25;
    puVar9 = puVar8 + -8;
    *(int *)(puVar8 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(double *)(puVar8 + -8) = in_xd12;
    puVar9 = puVar8 + -0x10;
    *(undefined8 *)(puVar8 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_fr7 = *(undefined4 *)0x8c4aa4a8;
      dVar15 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4dc);
      dVar28 = (double)CONCAT44(in_fr7,in_fr9);
    }
    else {
      dVar28 = *(undefined4 *)0x8c4aa4a8;
      dVar15 = *(undefined4 *)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)0x8c4aa4dc;
      in_xd6 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) *
                                (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar28,0));
    }
    else {
      dVar28 = dVar28 * dVar15;
    }
    dVar22 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(in_fr7,in_fr7);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar15,0),SUB84(dVar22,0)
                               );
    }
    else {
      dVar22 = dVar22 * dVar15;
    }
    dVar26 = (double)CONCAT44(0x3f800000,uVar25);
    dVar15 = dVar26;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = 0.007812501848093234;
    }
    fVar13 = (float)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) / fVar13,SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 / dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                *(undefined4 *)((int)0x8c4aa4a8 + 0xc));
    }
    else {
      in_xd6 = *(double *)((int)0x8c4aa4a8 + 0xc);
    }
    fVar23 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) / fVar23);
    }
    else {
      dVar15 = dVar15 / dVar22;
    }
    puVar7 = (undefined8 *)(puVar9 + iVar1 + 0x70);
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(fVar13,*(undefined4 *)(0x8c4aa4a8 + 2));
      *(undefined4 *)(puVar9 + iVar1 + 0x70) = *(undefined4 *)((int)ar4 + 4);
      *(undefined4 *)(puVar9 + iVar1 + 0x74) = *(undefined4 *)(ar4 + 1);
      *(undefined4 *)(puVar9 + iVar1 + 0x78) = *(undefined4 *)((int)ar4 + 0xc);
      *(undefined4 *)(puVar9 + iVar1 + 0x84) = *(undefined4 *)ar4;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
      puVar7 = (undefined8 *)(puVar9 + iVar1 + 0x70);
    }
    else {
      in_xd8 = ((undefined1 *)2)[0x8c4aa4a8];
      *puVar7 = *(undefined8 *)((int)ar4 + 4);
      *(double *)(puVar9 + iVar1 + 0x74) = ar4[1];
      *(undefined8 *)(puVar9 + iVar1 + 0x78) = *(undefined8 *)((int)ar4 + 0xc);
      *(double *)(puVar9 + iVar1 + 0x84) = *ar4;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar16 = *ar4;
    }
    fVar21 = SUB84(dVar22,0);
    fVar13 = SUB84(dVar15,0);
    if (in_FPSCR_PR == '\0') {
      fVar11 = (SUB84(dVar16,0) - fVar21) * (float)((ulonglong)dVar16 >> 0x20) * fVar13;
    }
    else {
      fVar11 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + iVar1 + 0x7c) = fVar11;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)(puVar9 + iVar1 + 0x7c) = in_xd2;
      in_xd2 = ar4[1];
      dVar16 = *ar4;
    }
    fVar11 = SUB84(dVar28,0);
    fVar14 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar16 >> 0x20);
      dVar16 = (double)CONCAT44(fVar19,(SUB84(dVar16,0) - fVar11) * fVar19 * fVar14);
    }
    else {
      dVar16 = (dVar16 - dVar28) * (dVar16 - dVar28) * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + iVar1 + 0x80) = SUB84(dVar16,0);
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(ar4 + 2));
    }
    else {
      *(double *)(puVar9 + iVar1 + 0x80) = in_xd2;
      in_xd2 = ar4[2];
    }
    fVar19 = (float)((ulonglong)in_dr4 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar16,0) + fVar19;
      bVar30 = fVar12 < fVar19;
    }
    else {
      fVar12 = SUB84(dVar16 + in_dr4,0);
      bVar30 = dVar16 + in_dr4 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + iVar1 + 0x88) = fVar12;
    }
    else {
      *(double *)(puVar9 + iVar1 + 0x88) = in_xd2;
    }
    if (bVar30) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar9 + iVar1 + 0x88) = fVar19;
      }
      else {
        *(double *)(puVar9 + iVar1 + 0x88) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar9 + iVar1 + 0x8c) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)(puVar9 + iVar1 + 0x90) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)(puVar9 + iVar1 + 0x94) = *(undefined4 *)((int)ar5 + 0xc);
      *(undefined4 *)(puVar9 + iVar1 + 0xa0) = *(undefined4 *)ar5;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      *(undefined8 *)(puVar9 + iVar1 + 0x8c) = *(undefined8 *)((int)ar5 + 4);
      *(double *)(puVar9 + iVar1 + 0x90) = ar5[1];
      *(undefined8 *)(puVar9 + iVar1 + 0x94) = *(undefined8 *)((int)ar5 + 0xc);
      *(double *)(puVar9 + iVar1 + 0xa0) = *ar5;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar16 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (SUB84(dVar16,0) - fVar21) * (float)((ulonglong)dVar16 >> 0x20) * fVar13;
    }
    else {
      fVar12 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + iVar1 + 0x98) = fVar12;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar5 + 1));
    }
    else {
      *(double *)(puVar9 + iVar1 + 0x98) = in_xd2;
      in_xd2 = ar5[1];
      dVar16 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (float)((ulonglong)dVar16 >> 0x20);
      dVar16 = (double)CONCAT44(fVar12,(SUB84(dVar16,0) - fVar11) * fVar12 * fVar14);
    }
    else {
      dVar16 = (dVar16 - dVar28) * (dVar16 - dVar28) * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + iVar1 + 0x9c) = SUB84(dVar16,0);
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(ar5 + 2));
    }
    else {
      *(double *)(puVar9 + iVar1 + 0x9c) = in_xd2;
      in_xd2 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar16,0) + fVar19;
      bVar30 = fVar12 < fVar19;
    }
    else {
      fVar12 = SUB84(dVar16 + in_dr4,0);
      bVar30 = dVar16 + in_dr4 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + iVar1 + 0xa4) = fVar12;
    }
    else {
      *(double *)(puVar9 + iVar1 + 0xa4) = in_xd2;
    }
    if (bVar30) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar9 + iVar1 + 0xa4) = fVar19;
      }
      else {
        *(double *)(puVar9 + iVar1 + 0xa4) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar9 + iVar1 + 0xa8) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)(puVar9 + iVar1 + 0xac) = *(undefined4 *)(ar6 + 1);
      *(undefined4 *)(puVar9 + iVar1 + 0xb0) = *(undefined4 *)((int)ar6 + 0xc);
      *(undefined4 *)(puVar9 + iVar1 + 0xbc) = *(undefined4 *)ar6;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(undefined8 *)(puVar9 + iVar1 + 0xa8) = *(undefined8 *)((int)ar6 + 4);
      *(double *)(puVar9 + iVar1 + 0xac) = ar6[1];
      *(undefined8 *)(puVar9 + iVar1 + 0xb0) = *(undefined8 *)((int)ar6 + 0xc);
      *(double *)(puVar9 + iVar1 + 0xbc) = *ar6;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar16 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar16,0) - fVar21) * (float)((ulonglong)dVar16 >> 0x20) * fVar13;
    }
    else {
      fVar13 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + iVar1 + 0xb4) = fVar13;
      dVar22 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)(ar6 + 1));
    }
    else {
      *(double *)(puVar9 + iVar1 + 0xb4) = in_xd2;
      in_xd2 = ar6[1];
      dVar22 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (float)((ulonglong)dVar22 >> 0x20);
      dVar15 = (double)CONCAT44(fVar13,(SUB84(dVar22,0) - fVar11) * fVar13 * fVar14);
    }
    else {
      dVar15 = (dVar22 - dVar28) * (dVar22 - dVar28) * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + iVar1 + 0xb8) = SUB84(dVar15,0);
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(undefined4 *)(ar6 + 2));
    }
    else {
      *(double *)(puVar9 + iVar1 + 0xb8) = in_xd2;
      in_xd2 = ar6[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar15,0) + fVar19;
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar13);
      bVar30 = fVar13 < fVar19;
    }
    else {
      dVar15 = dVar15 + in_dr4;
      fVar13 = SUB84(dVar15,0);
      bVar30 = dVar15 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + iVar1 + 0xc0) = fVar13;
    }
    else {
      *(double *)(puVar9 + iVar1 + 0xc0) = in_xd2;
    }
    if (bVar30) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar9 + iVar1 + 0xc0) = fVar19;
      }
      else {
        *(double *)(puVar9 + iVar1 + 0xc0) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)(puVar9 + iVar1 + 0xa0);
      dVar26 = (double)CONCAT44(0x3f800000,uVar25);
      uVar24 = *(undefined4 *)(puVar9 + iVar1 + 0x9c);
      dVar22 = (double)CONCAT44(*(undefined4 *)(puVar9 + iVar1 + 0x84),in_fr15);
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar24);
      dVar29 = (double)CONCAT44(uVar25,in_fr1);
      dVar16 = (double)CONCAT44(uVar24,*(undefined4 *)(puVar9 + iVar1 + 0x80));
    }
    else {
      dVar29 = *(double *)(puVar9 + iVar1 + 0xa0);
      in_xd2 = *(double *)(puVar9 + iVar1 + 0x9c);
      dVar22 = *(double *)(puVar9 + iVar1 + 0x84);
      uVar24 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      dVar16 = in_xd2;
      in_xd12 = dVar29;
    }
    fVar13 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) * fVar13;
      dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar16,0),SUB84(dVar29,0)
                               );
    }
    else {
      fVar14 = SUB84(dVar15 * dVar22,0);
      dVar29 = dVar29 * dVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar13,*(undefined4 *)(puVar9 + iVar1 + 0x98));
      dVar15 = (double)CONCAT44(*(undefined4 *)(puVar9 + iVar1 + 0x7c),SUB84(in_dr4,0));
      in_xd12 = (double)CONCAT44(uVar25,fVar14);
    }
    else {
      in_xd14 = *(double *)(puVar9 + iVar1 + 0x98);
      dVar15 = *(double *)(puVar9 + iVar1 + 0x7c);
    }
    fVar13 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)in_xd12 >> 0x20) * fVar13,SUB84(in_xd12,0));
    }
    else {
      dVar17 = in_xd12 * dVar15;
    }
    dVar10 = dVar16;
    if (in_FPSCR_SZ == '\0') {
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar24);
      dVar10 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) - SUB84(dVar17,0),SUB84(dVar29,0)
                               );
    }
    else {
      dVar29 = dVar29 - dVar17;
    }
    dVar27 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar22,0));
      dVar27 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar17,0) * (float)((ulonglong)dVar22 >> 0x20) -
               (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar17 * dVar22 - dVar17 * dVar22,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)(puVar9 + iVar1 + 0xb8),fVar14);
    }
    else {
      dVar17 = *(double *)(puVar9 + iVar1 + 0xb8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),SUB84(dVar17,0)
                               );
    }
    else {
      dVar17 = dVar17 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                *(undefined4 *)(puVar9 + iVar1 + 0xb4));
    }
    else {
      dVar27 = *(double *)(puVar9 + iVar1 + 0xb4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar17,0) +
                                (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar22,0));
      in_xd14 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar17,0) * SUB84(dVar16,0);
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar14);
      fVar14 = SUB84(dVar29,0) * fVar13 - fVar14;
    }
    else {
      dVar17 = dVar17 * dVar16;
      fVar14 = SUB84(dVar29 * dVar15 - dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(fVar14,*(undefined4 *)(puVar9 + iVar1 + 0xbc));
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)((ulonglong)
                        (uint)(((float)((ulonglong)dVar10 >> 0x20) * SUB84(dVar10,0) +
                               (float)((ulonglong)dVar17 >> 0x20)) * SUB84(dVar15,0)) << 0x20);
    }
    else {
      dVar22 = (double)((ulonglong)dVar17 & 0xffffffff00000000) * dVar15;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar22 >> 0x20) < SUB84(dVar22,0)) {
      iVar3 = 0;
      iVar32 = 0;
      iVar6 = 2;
      while (iVar4 = iVar32, iVar4 < 3) {
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    *(undefined4 *)((int)puVar7 + iVar6 * 0x1c + 0x14));
        }
        else {
          in_xd14 = *(double *)((int)puVar7 + iVar6 * 0x1c + 0x14);
        }
        fVar13 = (float)((ulonglong)dVar26 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar13 < SUB84(dVar22,0);
        }
        else {
          bVar30 = dVar26 < dVar22;
        }
        pdVar2 = (double *)((int)puVar7 + iVar4 * 0x1c + 0x14);
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)pdVar2);
        }
        else {
          in_xd14 = *pdVar2;
        }
        if (in_FPSCR_PR == '\0') {
          bVar31 = fVar13 < SUB84(dVar22,0);
        }
        else {
          bVar31 = dVar26 < dVar22;
        }
        if ((bVar30 ^ 1) != -(bVar31 - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar14 = *(float *)((int)puVar7 + iVar6 * 0x1c + 0x14);
            uVar18 = CONCAT44(*(undefined4 *)((int)puVar7 + iVar4 * 0x1c + 0x14),fVar14);
            dVar22 = (double)CONCAT44(fVar14,SUB84(dVar15,0));
          }
          else {
            in_xd14 = *(double *)((int)puVar7 + iVar6 * 0x1c + 0x14);
            uVar18 = *(undefined8 *)((int)puVar7 + iVar4 * 0x1c + 0x14);
            fVar14 = (float)((ulonglong)in_xd14 >> 0x20);
            dVar22 = in_xd14;
          }
          fVar19 = (float)((ulonglong)uVar18 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar29 = (double)CONCAT44(fVar19 - fVar14,-(float)uVar18 + fVar13);
          }
          else {
            dVar29 = ((double)CONCAT44(fVar19,-(float)uVar18) + dVar26) - dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)(ulonglong)*(uint *)((int)puVar7 + iVar6 * 0x1c + 0xc);
          }
          else {
            in_xd4 = *(double *)((int)puVar7 + iVar6 * 0x1c + 0xc);
          }
          dVar15 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(SUB84(dVar29,0),SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) /
                                      (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 / dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(SUB84(dVar15,0),
                                      *(undefined4 *)((int)puVar7 + iVar4 * 0x1c + 0xc));
          }
          else {
            in_xd14 = *(double *)((int)puVar7 + iVar4 * 0x1c + 0xc);
            dVar22 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                      SUB84(dVar22,0) - SUB84(dVar15,0));
          }
          else {
            dVar22 = dVar22 - dVar15;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)puVar7 + iVar6 * 0x1c + 0x10),
                                      SUB84(dVar16,0));
          }
          else {
            dVar29 = *(double *)((int)puVar7 + iVar6 * 0x1c + 0x10);
          }
          pdVar2 = (double *)(puVar9 + iVar3 * 0x1c + iVar1);
          uVar20 = (uint)((ulonglong)dVar15 >> 0x20);
          dVar16 = dVar15;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)((ulonglong)uVar20 << 0x20);
          }
          fVar14 = (float)((ulonglong)dVar16 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44(fVar14 * SUB84(dVar22,0) + (float)((ulonglong)dVar22 >> 0x20),
                                      SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                      *(undefined4 *)((int)puVar7 + iVar4 * 0x1c + 0x10));
          }
          else {
            in_xd14 = *(double *)((int)puVar7 + iVar4 * 0x1c + 0x10);
          }
          fVar19 = (float)((ulonglong)dVar29 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar19);
          }
          else {
            dVar22 = dVar22 - dVar29;
          }
          dVar16 = dVar29;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(uVar20,(int)((ulonglong)dVar22 >> 0x20));
            dVar16 = (double)CONCAT44(fVar19,SUB84(dVar22,0));
            dVar22 = in_xd4;
          }
          in_xd4 = dVar22;
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44(fVar14 * SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20),
                                      SUB84(dVar16,0));
          }
          dVar17 = in_xd6;
          dVar22 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),fVar21);
            dVar17 = in_xd14;
            dVar22 = (double)((longlong)dVar15 << 0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                      (float)((ulonglong)dVar22 >> 0x20) * fVar23 + SUB84(dVar16,0))
            ;
          }
          fVar14 = (float)((ulonglong)dVar16 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            uVar25 = SUB84(dVar16,0);
            *(undefined4 *)pdVar2 = uVar25;
            dVar22 = (double)CONCAT44(fVar11,uVar25);
            dVar16 = (double)CONCAT44(fVar14,SUB84(dVar29,0));
          }
          else {
            uVar25 = SUB84(in_xd8,0);
            *pdVar2 = dVar17;
            dVar22 = in_xd8;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44(fVar14 * (float)((ulonglong)dVar28 >> 0x20) +
                                      (float)((ulonglong)dVar22 >> 0x20),uVar25);
          }
          uVar20 = (uint)((ulonglong)dVar15 >> 0x20);
          uVar25 = (undefined4)((ulonglong)dVar22 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar2 + 4) = uVar25;
            *(float *)(pdVar2 + 1) = fVar13;
            dVar22 = (double)CONCAT44(uVar25,*(undefined4 *)((int)puVar7 + iVar4 * 0x1c + 0x18));
            dVar15 = (double)CONCAT44(uVar20,*(undefined4 *)((int)puVar7 + iVar6 * 0x1c + 0x18));
            in_xd14 = dVar17;
            dVar29 = (double)((ulonglong)uVar20 << 0x20);
          }
          else {
            *(double *)((int)pdVar2 + 4) = dVar22;
            pdVar2[1] = dVar26;
            in_xd14 = *(double *)((int)puVar7 + iVar4 * 0x1c + 0x18);
            in_xd4 = *(double *)((int)puVar7 + iVar6 * 0x1c + 0x18);
            dVar29 = dVar15;
          }
          iVar3 = iVar3 + 1;
          if (in_FPSCR_PR == '\0') {
            fVar14 = SUB84(dVar22,0) - SUB84(dVar15,0);
          }
          else {
            fVar14 = SUB84(dVar22 - dVar15,0);
          }
          dVar22 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(SUB84(dVar15,0),fVar14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar22,0) +
                                      (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(pdVar2 + 3) = (int)((ulonglong)dVar22 >> 0x20);
          }
          else {
            pdVar2[3] = dVar22;
          }
        }
        pdVar2 = (double *)(iVar4 * 0x1c + (int)puVar7);
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    *(undefined4 *)((int)pdVar2 + 0x14));
        }
        else {
          in_xd14 = *(double *)((int)pdVar2 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar13 < SUB84(dVar22,0);
        }
        else {
          bVar30 = dVar26 < dVar22;
        }
        if (bVar30) {
          iVar32 = iVar3 * 0x1c;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)(ulonglong)*(uint *)pdVar2;
          }
          else {
            in_xd14 = *pdVar2;
          }
          iVar3 = iVar3 + 1;
          pdVar5 = (double *)(puVar9 + iVar32 + iVar1);
          if (in_FPSCR_SZ == '\0') {
            *(int *)pdVar5 = SUB84(dVar22,0);
            uVar25 = *(undefined4 *)((int)pdVar2 + 4);
            *(undefined4 *)((int)pdVar5 + 4) = uVar25;
            *(undefined4 *)(pdVar5 + 1) = *(undefined4 *)(pdVar2 + 1);
            dVar22 = (double)CONCAT44(uVar25,*(undefined4 *)(pdVar2 + 3));
            *(undefined4 *)(pdVar5 + 3) = *(undefined4 *)(pdVar2 + 3);
          }
          else {
            *pdVar5 = in_xd14;
            dVar22 = *(double *)((int)pdVar2 + 4);
            *(double *)((int)pdVar5 + 4) = dVar22;
            pdVar5[1] = pdVar2[1];
            in_xd14 = pdVar2[3];
            pdVar5[3] = in_xd14;
          }
        }
        iVar6 = iVar4;
        iVar32 = iVar4 + 1;
      }
      if (in_FPSCR_SZ == '\0') {
        ar7[6] = *(undefined4 *)(puVar9 + iVar1 + 0x18);
        ar7[3] = *(undefined4 *)(puVar9 + iVar1 + 8);
        ar7[2] = *(undefined4 *)(puVar9 + iVar1 + 4);
        uVar25 = 0xe0000000;
        puVar7 = (undefined8 *)(ar7 + 1);
        *(undefined4 *)puVar7 = *(undefined4 *)(puVar9 + iVar1);
      }
      else {
        *(undefined8 *)(ar7 + 5) = *(undefined8 *)(puVar9 + iVar1 + 0x18);
        *(undefined8 *)(ar7 + 1) = *(undefined8 *)(puVar9 + iVar1 + 8);
        *(undefined8 *)(ar7 + -1) = *(undefined8 *)(puVar9 + iVar1 + 4);
        uVar25 = 0xe0000000;
        puVar7 = (undefined8 *)(ar7 + -3);
        *puVar7 = *(undefined8 *)(puVar9 + iVar1);
      }
      *(undefined4 *)((int)puVar7 + -4) = uVar25;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(puVar9 + iVar1 + 0x34);
        *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar9 + iVar1 + 0x24);
        *(undefined4 *)((int)puVar7 + 0x24) = *(undefined4 *)(puVar9 + iVar1 + 0x20);
        puVar7 = puVar7 + 4;
        *(undefined4 *)puVar7 = *(undefined4 *)(puVar9 + iVar1 + 0x1c);
      }
      else {
        puVar7[6] = *(undefined8 *)(puVar9 + iVar1 + 0x34);
        puVar7[4] = *(undefined8 *)(puVar9 + iVar1 + 0x24);
        puVar7[3] = *(undefined8 *)(puVar9 + iVar1 + 0x20);
        puVar7 = puVar7 + 2;
        *puVar7 = *(undefined8 *)(puVar9 + iVar1 + 0x1c);
      }
      *(undefined4 *)((int)puVar7 + -4) = uVar25;
      if (iVar3 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(puVar9 + iVar1 + 0x6c);
          *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar9 + iVar1 + 0x5c);
          *(undefined4 *)((int)puVar7 + 0x24) = *(undefined4 *)(puVar9 + iVar1 + 0x58);
          puVar7 = puVar7 + 4;
          *(undefined4 *)puVar7 = *(undefined4 *)(puVar9 + iVar1 + 0x54);
        }
        else {
          puVar7[6] = *(undefined8 *)(puVar9 + iVar1 + 0x6c);
          puVar7[4] = *(undefined8 *)(puVar9 + iVar1 + 0x5c);
          puVar7[3] = *(undefined8 *)(puVar9 + iVar1 + 0x58);
          puVar7 = puVar7 + 2;
          *puVar7 = *(undefined8 *)(puVar9 + iVar1 + 0x54);
        }
        *(undefined4 *)((int)puVar7 + -4) = uVar25;
      }
      uVar25 = 0xf0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(puVar9 + iVar1 + 0x50);
        *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar9 + iVar1 + 0x40);
        *(undefined4 *)((int)puVar7 + 0x24) = *(undefined4 *)(puVar9 + iVar1 + 0x3c);
        puVar7 = puVar7 + 4;
        *(undefined4 *)puVar7 = *(undefined4 *)(puVar9 + iVar1 + 0x38);
      }
      else {
        puVar7[6] = *(undefined8 *)(puVar9 + iVar1 + 0x50);
        puVar7[4] = *(undefined8 *)(puVar9 + iVar1 + 0x40);
        puVar7[3] = *(undefined8 *)(puVar9 + iVar1 + 0x3c);
        puVar7 = puVar7 + 2;
        *puVar7 = *(undefined8 *)(puVar9 + iVar1 + 0x38);
      }
      *(undefined4 *)((int)puVar7 + -4) = uVar25;
      ar7 = (undefined4 *)((int)puVar7 + 0x1c);
      *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar3;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c22b26c\n.set _FUN_8c22b26c, _FUN_8c22b26c_def\n");
