#include "../decls.h"
undefined4 * FUN_8c2294a4_def(double *ar4,double *ar5,double *ar6,undefined4 *ar7)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 in_fr1;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double in_dr4;
  undefined4 in_fr7;
  float fVar21;
  double dVar22;
  float fVar23;
  undefined4 in_fr9;
  undefined4 uVar24;
  undefined8 in_dr12;
  double dVar25;
  double in_dr14;
  undefined4 uVar27;
  double in_xd0;
  double dVar28;
  double in_xd2;
  double dVar29;
  double in_xd4;
  double in_xd6;
  double dVar30;
  double in_xd8;
  double in_xd12;
  bool bVar31;
  int iVar32;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uVar26;
  
  if (in_FPSCR_SZ == '\0') {
    *(ulonglong *)auStack_20 = CONCAT44(SUB84(in_dr14,0),auStack_20);
    puVar9 = auStack_20;
  }
  else {
    puVar9 = auStack_28;
  }
  iVar1 = (int)(int)0xffffff3c;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -4) = (int)in_dr12;
    puVar10 = puVar9 + -8;
    *(int *)(puVar9 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(double *)(puVar9 + -8) = in_xd12;
    puVar10 = puVar9 + -0x10;
    *(undefined8 *)(puVar9 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)0x8c4aa4f0 & 0x10000) == 0) {
    puVar8 = (undefined8 *)(puVar10 + iVar1 + 0x70);
    if (in_FPSCR_SZ == '\0') {
      in_fr7 = *(undefined4 *)0x8c4aa4a8;
      dVar16 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4dc);
      dVar30 = (double)CONCAT44(in_fr7,in_fr9);
    }
    else {
      dVar30 = *(undefined4 *)0x8c4aa4a8;
      dVar16 = *(undefined4 *)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)0x8c4aa4dc;
      in_xd6 = dVar30;
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) *
                                (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 * dVar16;
    }
    dVar22 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(in_fr7,in_fr7);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar16,0),SUB84(dVar22,0)
                               );
    }
    else {
      dVar22 = dVar22 * dVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                *(undefined4 *)((int)0x8c4aa4a8 + 0xc));
    }
    else {
      in_xd6 = *(double *)((int)0x8c4aa4a8 + 0xc);
    }
    fVar14 = (float)((ulonglong)dVar30 >> 0x20);
    fVar23 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44(1.0 / fVar14,1.0 / fVar23);
    }
    else {
      dVar16 = (0.007812501848093234 / dVar30) / dVar22;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44(fVar14,*(undefined4 *)(0x8c4aa4a8 + 2));
      *(undefined4 *)puVar8 = *(undefined4 *)((int)ar4 + 4);
      *(undefined4 *)(puVar10 + iVar1 + 0x74) = *(undefined4 *)(ar4 + 1);
      *(undefined4 *)(puVar10 + iVar1 + 0x78) = *(undefined4 *)((int)ar4 + 0xc);
      *(undefined4 *)(puVar10 + iVar1 + 0x84) = *(undefined4 *)ar4;
      dVar17 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
    }
    else {
      in_xd8 = ((undefined1 *)2)[0x8c4aa4a8];
      *puVar8 = *(undefined8 *)((int)ar4 + 4);
      *(double *)(puVar10 + iVar1 + 0x74) = ar4[1];
      *(undefined8 *)(puVar10 + iVar1 + 0x78) = *(undefined8 *)((int)ar4 + 0xc);
      *(double *)(puVar10 + iVar1 + 0x84) = *ar4;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar17 = *ar4;
    }
    fVar21 = SUB84(dVar22,0);
    fVar14 = SUB84(dVar16,0);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (SUB84(dVar17,0) - fVar21) * (float)((ulonglong)dVar17 >> 0x20) * fVar14;
    }
    else {
      fVar12 = SUB84((dVar17 - dVar22) * (dVar17 - dVar22) * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar10 + iVar1 + 0x7c) = fVar12;
      dVar17 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)(puVar10 + iVar1 + 0x7c) = in_xd2;
      in_xd2 = ar4[1];
      dVar17 = *ar4;
    }
    fVar12 = SUB84(dVar30,0);
    fVar15 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar17,0) - fVar12) * (float)((ulonglong)dVar17 >> 0x20) * fVar15;
    }
    else {
      fVar13 = SUB84((dVar17 - dVar30) * (dVar17 - dVar30) * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar10 + iVar1 + 0x80) = fVar13;
      *(undefined4 *)(puVar10 + iVar1 + 0x8c) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)(puVar10 + iVar1 + 0x90) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)(puVar10 + iVar1 + 0x94) = *(undefined4 *)((int)ar5 + 0xc);
      *(undefined4 *)(puVar10 + iVar1 + 0xa0) = *(undefined4 *)ar5;
      dVar17 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      *(double *)(puVar10 + iVar1 + 0x80) = in_xd2;
      *(undefined8 *)(puVar10 + iVar1 + 0x8c) = *(undefined8 *)((int)ar5 + 4);
      *(double *)(puVar10 + iVar1 + 0x90) = ar5[1];
      *(undefined8 *)(puVar10 + iVar1 + 0x94) = *(undefined8 *)((int)ar5 + 0xc);
      *(double *)(puVar10 + iVar1 + 0xa0) = *ar5;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar17 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar17,0) - fVar21) * (float)((ulonglong)dVar17 >> 0x20) * fVar14;
    }
    else {
      fVar13 = SUB84((dVar17 - dVar22) * (dVar17 - dVar22) * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar10 + iVar1 + 0x98) = fVar13;
      dVar17 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar5 + 1));
    }
    else {
      *(double *)(puVar10 + iVar1 + 0x98) = in_xd2;
      in_xd2 = ar5[1];
      dVar17 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar17,0) - fVar12) * (float)((ulonglong)dVar17 >> 0x20) * fVar15;
    }
    else {
      fVar13 = SUB84((dVar17 - dVar30) * (dVar17 - dVar30) * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar10 + iVar1 + 0x9c) = fVar13;
      *(undefined4 *)(puVar10 + iVar1 + 0xa8) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)(puVar10 + iVar1 + 0xac) = *(undefined4 *)(ar6 + 1);
      *(undefined4 *)(puVar10 + iVar1 + 0xb0) = *(undefined4 *)((int)ar6 + 0xc);
      *(undefined4 *)(puVar10 + iVar1 + 0xbc) = *(undefined4 *)ar6;
      dVar17 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(double *)(puVar10 + iVar1 + 0x9c) = in_xd2;
      *(undefined8 *)(puVar10 + iVar1 + 0xa8) = *(undefined8 *)((int)ar6 + 4);
      *(double *)(puVar10 + iVar1 + 0xac) = ar6[1];
      *(undefined8 *)(puVar10 + iVar1 + 0xb0) = *(undefined8 *)((int)ar6 + 0xc);
      *(double *)(puVar10 + iVar1 + 0xbc) = *ar6;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar17 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (SUB84(dVar17,0) - fVar21) * (float)((ulonglong)dVar17 >> 0x20) * fVar14;
    }
    else {
      fVar14 = SUB84((dVar17 - dVar22) * (dVar17 - dVar22) * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar10 + iVar1 + 0xb4) = fVar14;
      dVar22 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)(ar6 + 1));
    }
    else {
      *(double *)(puVar10 + iVar1 + 0xb4) = in_xd2;
      in_xd2 = ar6[1];
      dVar22 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (float)((ulonglong)dVar22 >> 0x20);
      dVar22 = (double)CONCAT44(fVar14,(SUB84(dVar22,0) - fVar12) * fVar14 * fVar15);
    }
    else {
      dVar22 = (dVar22 - dVar30) * (dVar22 - dVar30) * dVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar10 + iVar1 + 0xb8) = SUB84(dVar22,0);
      uVar26 = *(undefined4 *)(puVar10 + iVar1 + 0xa0);
      uVar24 = *(undefined4 *)(puVar10 + iVar1 + 0x9c);
      dVar16 = (double)CONCAT44(fVar15,*(undefined4 *)(puVar10 + iVar1 + 0x80));
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(puVar10 + iVar1 + 0x84));
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar24);
      dVar25 = (double)CONCAT44(uVar26,in_fr1);
      dVar17 = (double)CONCAT44(uVar26,uVar24);
    }
    else {
      *(double *)(puVar10 + iVar1 + 0xb8) = in_xd2;
      dVar25 = *(double *)(puVar10 + iVar1 + 0xa0);
      in_xd2 = *(double *)(puVar10 + iVar1 + 0x9c);
      uVar24 = SUB84(dVar25,0);
      uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
      dVar17 = dVar25;
      in_xd12 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar16,0) -
                                SUB84(dVar22,0) * SUB84(in_dr14,0),SUB84(dVar25,0));
    }
    else {
      dVar22 = dVar25 * dVar16 - dVar22 * in_dr14;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar27 = *(undefined4 *)(puVar10 + iVar1 + 0x98);
      dVar16 = (double)CONCAT44(*(undefined4 *)(puVar10 + iVar1 + 0x7c),SUB84(dVar16,0));
      dVar17 = (double)CONCAT44(uVar26,uVar27);
      dVar25 = (double)CONCAT44(uVar27,SUB84(in_dr14,0));
    }
    else {
      in_xd2 = *(double *)(puVar10 + iVar1 + 0x98);
      dVar16 = *(double *)(puVar10 + iVar1 + 0x7c);
      uVar27 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      dVar25 = in_xd2;
    }
    fVar14 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * fVar14,
                                SUB84(dVar17,0) * SUB84(dVar25,0));
    }
    else {
      dVar17 = dVar17 * dVar16 * dVar25;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),uVar24);
      in_xd12 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) * fVar14);
      fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      dVar22 = dVar22 * dVar16;
      fVar14 = SUB84(dVar17 - dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)(puVar10 + iVar1 + 0xb8),fVar14);
    }
    else {
      dVar17 = *(double *)(puVar10 + iVar1 + 0xb8);
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
                                *(undefined4 *)(puVar10 + iVar1 + 0xb4));
    }
    else {
      in_xd2 = *(double *)(puVar10 + iVar1 + 0xb4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar17,0) +
                                (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar27);
      dVar25 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar17,0) * SUB84(dVar16,0);
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar14);
      fVar14 = SUB84(dVar22,0) - fVar14;
    }
    else {
      dVar17 = dVar17 * dVar16;
      fVar14 = SUB84(dVar22 - dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar14,*(undefined4 *)(puVar10 + iVar1 + 0xbc));
      dVar28 = in_xd12;
    }
    else {
      dVar28 = *(double *)(puVar10 + iVar1 + 0xbc);
      dVar22 = in_xd12;
    }
    fVar14 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)((ulonglong)
                        (uint)((fVar14 * SUB84(dVar22,0) + (float)((ulonglong)dVar17 >> 0x20)) *
                              SUB84(in_dr4,0)) << 0x20);
    }
    else {
      dVar17 = (double)((ulonglong)dVar17 & 0xffffffff00000000) * in_dr4;
    }
    fVar15 = SUB84(dVar17,0);
    fVar13 = (float)((ulonglong)in_dr4 >> 0x20);
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar17 >> 0x20) < fVar15) {
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44(fVar14,fVar13);
        dVar17 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar15);
      }
      else {
        dVar17 = ar4[2];
        dVar28 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) + (float)((ulonglong)dVar17 >> 0x20));
      }
      else {
        dVar22 = dVar22 + dVar17;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + iVar1 + 0x88) = SUB84(dVar22,0);
        dVar17 = (double)CONCAT44(*(undefined4 *)(ar5 + 2),SUB84(dVar17,0));
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar13);
      }
      else {
        *(double *)(puVar10 + iVar1 + 0x88) = dVar28;
        dVar17 = ar5[2];
        dVar28 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) + (float)((ulonglong)dVar17 >> 0x20));
      }
      else {
        dVar22 = dVar22 + dVar17;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + iVar1 + 0xa4) = SUB84(dVar22,0);
        dVar17 = (double)CONCAT44(*(undefined4 *)(ar6 + 2),SUB84(dVar17,0));
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar13);
      }
      else {
        *(double *)(puVar10 + iVar1 + 0xa4) = dVar28;
        dVar17 = ar6[2];
        dVar28 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) + (float)((ulonglong)dVar17 >> 0x20));
      }
      else {
        dVar22 = dVar22 + dVar17;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44(fVar14,fVar13);
        dVar17 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar15);
      }
      else {
        dVar17 = ar4[2];
        dVar28 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) - (float)((ulonglong)dVar17 >> 0x20));
      }
      else {
        dVar22 = dVar22 - dVar17;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + iVar1 + 0x88) = SUB84(dVar22,0);
        dVar17 = (double)CONCAT44(*(undefined4 *)(ar5 + 2),SUB84(dVar17,0));
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar13);
      }
      else {
        *(double *)(puVar10 + iVar1 + 0x88) = dVar28;
        dVar17 = ar5[2];
        dVar28 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) - (float)((ulonglong)dVar17 >> 0x20));
      }
      else {
        dVar22 = dVar22 - dVar17;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + iVar1 + 0xa4) = SUB84(dVar22,0);
        dVar17 = (double)CONCAT44(*(undefined4 *)(ar6 + 2),SUB84(dVar17,0));
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar13);
      }
      else {
        *(double *)(puVar10 + iVar1 + 0xa4) = dVar28;
        dVar17 = ar6[2];
        dVar28 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) - (float)((ulonglong)dVar17 >> 0x20));
      }
      else {
        dVar22 = dVar22 - dVar17;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar10 + iVar1 + 0xc0) = SUB84(dVar22,0);
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                *(undefined4 *)(puVar10 + iVar1 + 0x88));
    }
    else {
      *(double *)(puVar10 + iVar1 + 0xc0) = dVar28;
      dVar25 = *(double *)(puVar10 + iVar1 + 0x88);
    }
    if (in_FPSCR_PR == '\0') {
      bVar31 = SUB84(dVar17,0) < fVar13;
    }
    else {
      bVar31 = dVar17 < in_dr4;
    }
    if (bVar31) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar10 + iVar1 + 0x88) = fVar13;
      }
      else {
        *(double *)(puVar10 + iVar1 + 0x88) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                *(undefined4 *)(puVar10 + iVar1 + 0xa4));
    }
    else {
      dVar25 = *(double *)(puVar10 + iVar1 + 0xa4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar31 = SUB84(dVar17,0) < fVar13;
    }
    else {
      bVar31 = dVar17 < in_dr4;
    }
    if (bVar31) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar10 + iVar1 + 0xa4) = fVar13;
      }
      else {
        *(double *)(puVar10 + iVar1 + 0xa4) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                *(undefined4 *)(puVar10 + iVar1 + 0xc0));
    }
    else {
      dVar25 = *(double *)(puVar10 + iVar1 + 0xc0);
    }
    if (in_FPSCR_PR == '\0') {
      bVar31 = SUB84(dVar17,0) < fVar13;
    }
    else {
      bVar31 = dVar17 < in_dr4;
    }
    if (bVar31) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar10 + iVar1 + 0xc0) = fVar13;
      }
      else {
        *(double *)(puVar10 + iVar1 + 0xc0) = in_dr4;
      }
    }
    iVar3 = 0;
    iVar32 = 0;
    iVar7 = 2;
    while (iVar4 = iVar32, iVar4 < 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)((int)puVar8 + iVar7 * 0x1c + 0x14),0x3f800000);
      }
      else {
        uVar18 = *(undefined8 *)((int)puVar8 + iVar7 * 0x1c + 0x14);
      }
      puVar2 = (undefined8 *)((int)puVar8 + iVar4 * 0x1c + 0x14);
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)puVar2,(float)uVar18);
      }
      else {
        uVar19 = *puVar2;
      }
      fVar14 = (float)uVar19;
      if (((in_FPSCR_PR == '\0' && (float)uVar18 < (float)((ulonglong)uVar18 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar14 < (float)((ulonglong)uVar19 >> 0x20)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar14 = *(float *)((int)puVar8 + iVar7 * 0x1c + 0x14);
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar4 * 0x1c + 0x14));
          fVar15 = fVar14;
          dVar17 = (double)CONCAT44(fVar14,SUB84(in_dr4,0));
        }
        else {
          dVar25 = *(double *)((int)puVar8 + iVar7 * 0x1c + 0x14);
          dVar28 = *(double *)((int)puVar8 + iVar4 * 0x1c + 0x14);
          fVar15 = (float)((ulonglong)dVar25 >> 0x20);
          dVar17 = dVar25;
        }
        dVar20 = (double)CONCAT44(0x3f800000,-fVar14);
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44(0x3f800000,-fVar14 + 1.0);
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar15);
        }
        else {
          dVar20 = dVar20 + dVar20;
          dVar22 = dVar22 - dVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)(ulonglong)*(uint *)((int)puVar8 + iVar7 * 0x1c + 0xc);
        }
        else {
          in_xd4 = *(double *)((int)puVar8 + iVar7 * 0x1c + 0xc);
        }
        dVar11 = dVar25;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(SUB84(dVar20,0),SUB84(dVar17,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / SUB84(dVar22,0),
                                    SUB84(dVar11,0));
        }
        else {
          in_dr4 = dVar11 / dVar22;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar4 * 0x1c + 0xc));
          dVar22 = (double)((ulonglong)in_dr4 & 0xffffffff);
        }
        else {
          dVar25 = *(double *)((int)puVar8 + iVar4 * 0x1c + 0xc);
          dVar28 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0) - SUB84(in_dr4,0));
        }
        else {
          dVar20 = dVar20 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + iVar7 * 0x1c + 0x10),
                                    SUB84(dVar16,0));
        }
        else {
          dVar17 = *(double *)((int)puVar8 + iVar7 * 0x1c + 0x10);
        }
        pdVar5 = (double *)(puVar10 + iVar3 * 0x1c + iVar1);
        uVar26 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        dVar11 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(uVar26,SUB84(dVar22,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = (float)((ulonglong)dVar11 >> 0x20);
          dVar11 = (double)CONCAT44(fVar14,fVar14 * SUB84(dVar20,0) + SUB84(dVar11,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    *(undefined4 *)((int)puVar8 + iVar4 * 0x1c + 0x10));
        }
        else {
          dVar25 = *(double *)((int)puVar8 + iVar4 * 0x1c + 0x10);
        }
        fVar14 = (float)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - fVar14);
        }
        else {
          dVar20 = dVar20 - dVar17;
        }
        dVar16 = dVar17;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(uVar26,SUB84(dVar11,0));
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar14);
          dVar16 = dVar28;
          dVar28 = in_xd4;
        }
        in_xd4 = dVar28;
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar11 >> 0x20) * SUB84(dVar20,0) +
                                 SUB84(dVar11,0));
        }
        dVar29 = in_xd6;
        dVar22 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar21);
          dVar29 = dVar25;
          dVar22 = (double)CONCAT44(SUB84(in_dr4,0),SUB84(dVar11,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    (float)((ulonglong)dVar22 >> 0x20) * fVar23 + SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar5 = SUB84(dVar20,0);
          dVar11 = (double)CONCAT44(SUB84(dVar22,0),fVar12);
          dVar28 = dVar16;
          dVar16 = (double)CONCAT44(SUB84(dVar22,0),SUB84(dVar17,0));
        }
        else {
          *pdVar5 = dVar29;
          dVar11 = dVar16;
          dVar28 = in_xd8;
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar11 >> 0x20) *
                                  (float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar11,0));
        }
        uVar24 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        uVar26 = (undefined4)((ulonglong)dVar20 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar5 + 4) = SUB84(dVar11,0);
          *(undefined4 *)(pdVar5 + 1) = uVar26;
          dVar20 = (double)CONCAT44(uVar26,*(undefined4 *)((int)puVar8 + iVar4 * 0x1c + 0x18));
          in_dr4 = (double)CONCAT44(uVar24,*(undefined4 *)((int)puVar8 + iVar7 * 0x1c + 0x18));
          dVar25 = dVar29;
          dVar22 = (double)CONCAT44(uVar24,SUB84(dVar11,0));
        }
        else {
          *(double *)((int)pdVar5 + 4) = dVar28;
          pdVar5[1] = dVar20;
          dVar25 = *(double *)((int)puVar8 + iVar4 * 0x1c + 0x18);
          in_xd4 = *(double *)((int)puVar8 + iVar7 * 0x1c + 0x18);
          dVar22 = in_dr4;
        }
        iVar3 = iVar3 + 1;
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar20,0) - SUB84(in_dr4,0);
        }
        else {
          fVar14 = SUB84(dVar20 - in_dr4,0);
        }
        dVar17 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(SUB84(in_dr4,0),fVar14);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar17,0) +
                                    (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(pdVar5 + 3) = (int)((ulonglong)dVar17 >> 0x20);
        }
        else {
          pdVar5[3] = dVar17;
        }
      }
      puVar2 = (undefined8 *)(iVar4 * 0x1c + (int)puVar8);
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)((int)puVar2 + 0x14),0x3f800000);
      }
      else {
        uVar18 = *(undefined8 *)((int)puVar2 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar18 < (float)((ulonglong)uVar18 >> 0x20)) {
        iVar32 = iVar3 * 0x1c;
        if (in_FPSCR_SZ == '\0') {
          uVar18 = CONCAT44(*(undefined4 *)puVar2,(float)uVar18);
        }
        else {
          uVar18 = *puVar2;
        }
        iVar3 = iVar3 + 1;
        puVar6 = (undefined8 *)(puVar10 + iVar32 + iVar1);
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar6 = (int)((ulonglong)uVar18 >> 0x20);
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    *(undefined4 *)((int)puVar2 + 4));
          *(undefined4 *)((int)puVar6 + 4) = *(undefined4 *)((int)puVar2 + 4);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar2 + 1);
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar2 + 3);
        }
        else {
          *puVar6 = uVar18;
          dVar28 = *(double *)((int)puVar2 + 4);
          *(double *)((int)puVar6 + 4) = dVar28;
          puVar6[1] = puVar2[1];
          puVar6[3] = puVar2[3];
        }
      }
      iVar7 = iVar4;
      iVar32 = iVar4 + 1;
    }
    if (in_FPSCR_SZ == '\0') {
      ar7[6] = *(undefined4 *)(puVar10 + iVar1 + 0x18);
      ar7[3] = *(undefined4 *)(puVar10 + iVar1 + 8);
      ar7[2] = *(undefined4 *)(puVar10 + iVar1 + 4);
      uVar26 = 0xe0000000;
      puVar8 = (undefined8 *)(ar7 + 1);
      *(undefined4 *)puVar8 = *(undefined4 *)(puVar10 + iVar1);
    }
    else {
      *(undefined8 *)(ar7 + 5) = *(undefined8 *)(puVar10 + iVar1 + 0x18);
      *(undefined8 *)(ar7 + 1) = *(undefined8 *)(puVar10 + iVar1 + 8);
      *(undefined8 *)(ar7 + -1) = *(undefined8 *)(puVar10 + iVar1 + 4);
      uVar26 = 0xe0000000;
      puVar8 = (undefined8 *)(ar7 + -3);
      *puVar8 = *(undefined8 *)(puVar10 + iVar1);
    }
    *(undefined4 *)((int)puVar8 + -4) = uVar26;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(puVar10 + iVar1 + 0x34);
      *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar10 + iVar1 + 0x24);
      *(undefined4 *)((int)puVar8 + 0x24) = *(undefined4 *)(puVar10 + iVar1 + 0x20);
      puVar8 = puVar8 + 4;
      *(undefined4 *)puVar8 = *(undefined4 *)(puVar10 + iVar1 + 0x1c);
    }
    else {
      puVar8[6] = *(undefined8 *)(puVar10 + iVar1 + 0x34);
      puVar8[4] = *(undefined8 *)(puVar10 + iVar1 + 0x24);
      puVar8[3] = *(undefined8 *)(puVar10 + iVar1 + 0x20);
      puVar8 = puVar8 + 2;
      *puVar8 = *(undefined8 *)(puVar10 + iVar1 + 0x1c);
    }
    *(undefined4 *)((int)puVar8 + -4) = uVar26;
    if (iVar3 != 3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(puVar10 + iVar1 + 0x6c);
        *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar10 + iVar1 + 0x5c);
        *(undefined4 *)((int)puVar8 + 0x24) = *(undefined4 *)(puVar10 + iVar1 + 0x58);
        puVar8 = puVar8 + 4;
        *(undefined4 *)puVar8 = *(undefined4 *)(puVar10 + iVar1 + 0x54);
      }
      else {
        puVar8[6] = *(undefined8 *)(puVar10 + iVar1 + 0x6c);
        puVar8[4] = *(undefined8 *)(puVar10 + iVar1 + 0x5c);
        puVar8[3] = *(undefined8 *)(puVar10 + iVar1 + 0x58);
        puVar8 = puVar8 + 2;
        *puVar8 = *(undefined8 *)(puVar10 + iVar1 + 0x54);
      }
      *(undefined4 *)((int)puVar8 + -4) = uVar26;
    }
    uVar26 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(puVar10 + iVar1 + 0x50);
      *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar10 + iVar1 + 0x40);
      *(undefined4 *)((int)puVar8 + 0x24) = *(undefined4 *)(puVar10 + iVar1 + 0x3c);
      puVar8 = puVar8 + 4;
      *(undefined4 *)puVar8 = *(undefined4 *)(puVar10 + iVar1 + 0x38);
    }
    else {
      puVar8[6] = *(undefined8 *)(puVar10 + iVar1 + 0x50);
      puVar8[4] = *(undefined8 *)(puVar10 + iVar1 + 0x40);
      puVar8[3] = *(undefined8 *)(puVar10 + iVar1 + 0x3c);
      puVar8 = puVar8 + 2;
      *puVar8 = *(undefined8 *)(puVar10 + iVar1 + 0x38);
    }
    *(undefined4 *)((int)puVar8 + -4) = uVar26;
    ar7 = (undefined4 *)((int)puVar8 + 0x1c);
    *(undefined4 *)0x8c4aa520 = *(undefined4 *)0x8c4aa520 + iVar3;
  }
  return ar7;
}

__asm__(".globl _FUN_8c2294a4\n.set _FUN_8c2294a4, _FUN_8c2294a4_def\n");
