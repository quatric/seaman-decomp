#include "../decls.h"
undefined8 * FUN_8c2319cc_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 in_fr1;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double in_dr4;
  undefined4 in_fr7;
  double dVar20;
  float fVar21;
  undefined4 in_fr9;
  double dVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  undefined4 uVar26;
  double in_dr12;
  double dVar27;
  undefined4 uVar28;
  double dVar29;
  undefined4 uVar30;
  double in_xd0;
  double dVar31;
  double in_xd2;
  double dVar32;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  bool bVar33;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_ac [8];
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [8];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [88];
  undefined1 auStack_34 [16];
  undefined8 auStack_24 [2];
  
  uVar26 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar9 = auStack_24;
    auStack_24[0] = CONCAT44(SUB84(in_dr12,0),uVar26);
  }
  else {
    puVar9 = (undefined8 *)auStack_34;
  }
  if ((_DAT_8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)CONCAT44(uVar26,0x3f000000);
    }
    else {
      in_xd12 = 2.78134754523302e-309;
    }
    fVar14 = SUB84(in_dr12,0);
    if ((_DAT_8c4aa4f0 & 0x20000) == 0) {
      dVar24 = in_xd12;
      dVar10 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(fVar14,fVar14);
        dVar10 = in_xd10;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(DAT_8c277af8,DAT_8c277afc);
      }
      else {
        dVar24 = (double)CONCAT44(DAT_8c277afc,DAT_8c277af8);
        in_xd10 = (double)CONCAT44((*(uint *)0x8c277b00),DAT_8c277afc);
      }
      dVar10 = in_xd10;
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + fVar14,
                                  SUB84(dVar24,0) + fVar14);
      }
      else {
        dVar24 = dVar24 + in_dr12 + in_dr12;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar29 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      dVar22 = (double)CONCAT44(_DAT_8c4aa4a8,in_fr9);
      in_fr7 = _DAT_8c4aa4a8;
    }
    else {
      dVar22 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
      dVar29 = (double)CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
      in_xd2 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
      in_xd6 = dVar22;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) *
                                (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar22,0));
    }
    else {
      dVar22 = dVar22 * dVar29;
    }
    dVar20 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(in_fr7,in_fr7);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar29,0),SUB84(dVar20,0)
                               );
    }
    else {
      dVar20 = dVar20 * dVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),_DAT_8c4aa4b4);
    }
    else {
      in_xd6 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
    }
    fVar23 = (float)((ulonglong)dVar22 >> 0x20);
    fVar21 = (float)((ulonglong)dVar20 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar29 = (double)CONCAT44(1.0 / fVar23,1.0 / fVar21);
    }
    else {
      dVar29 = (0.007812501848093234 / dVar22) / dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar23,_DAT_8c4aa4b8);
      *(undefined4 *)((int)puVar9 + -0x78) = *(undefined4 *)((int)ar4 + 4);
      *(undefined4 *)((int)puVar9 + -0x74) = *(undefined4 *)(ar4 + 1);
      *(undefined4 *)((int)puVar9 + -0x70) = *(undefined4 *)((int)ar4 + 0xc);
      in_xd12 = (double)CONCAT44(fVar14,in_fr1);
      *(undefined4 *)((int)puVar9 + -100) = *(undefined4 *)ar4;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 4));
    }
    else {
      in_xd8 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      *(undefined8 *)((int)puVar9 + -0x78) = *(undefined8 *)((int)ar4 + 4);
      *(double *)((int)puVar9 + -0x74) = ar4[1];
      *(undefined8 *)((int)puVar9 + -0x70) = *(undefined8 *)((int)ar4 + 0xc);
      *(double *)((int)puVar9 + -100) = *ar4;
      in_xd2 = *(double *)((int)ar4 + 4);
      dVar16 = *ar4;
    }
    fVar23 = SUB84(dVar20,0);
    fVar14 = SUB84(dVar29,0);
    if (in_FPSCR_PR == '\0') {
      fVar11 = (SUB84(dVar16,0) - fVar23) * (float)((ulonglong)dVar16 >> 0x20) * fVar14;
    }
    else {
      fVar11 = SUB84((dVar16 - dVar20) * (dVar16 - dVar20) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -0x6c) = fVar11;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar4,*(undefined4 *)(ar4 + 1));
    }
    else {
      *(double *)((int)puVar9 + -0x6c) = in_xd2;
      in_xd2 = ar4[1];
      dVar16 = *ar4;
    }
    fVar11 = SUB84(dVar22,0);
    fVar15 = (float)((ulonglong)dVar29 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (SUB84(dVar16,0) - fVar11) * (float)((ulonglong)dVar16 >> 0x20) * fVar15;
    }
    else {
      fVar12 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar29,0);
    }
    fVar25 = (float)((ulonglong)dVar24 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -0x68) = fVar12;
      dVar16 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),fVar25);
    }
    else {
      *(double *)((int)puVar9 + -0x68) = in_xd2;
      dVar16 = ar4[3];
      in_xd2 = dVar24;
    }
    fVar12 = (float)((ulonglong)in_xd12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)(ulonglong)
                       (uint)(fVar12 * (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
    }
    uVar26 = SUB84(dVar24,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x60) = SUB84(dVar16,0);
      uVar17 = CONCAT44(*(undefined4 *)((int)ar4 + 0x1c),uVar26);
    }
    else {
      *(double *)((int)puVar9 + -0x60) = in_xd2;
      uVar17 = *(ulonglong *)((int)ar4 + 0x1c);
      in_xd2 = dVar10;
    }
    if (in_FPSCR_PR == '\0') {
      uVar17 = (ulonglong)(uint)(fVar12 * (float)(uVar17 >> 0x20) + (float)uVar17);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x5c) = (int)uVar17;
      *(undefined4 *)((int)puVar9 + -0x50) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)((int)puVar9 + -0x4c) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)((int)puVar9 + -0x48) = *(undefined4 *)((int)ar5 + 0xc);
      *(undefined4 *)((int)puVar9 + -0x3c) = *(undefined4 *)ar5;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      *(double *)((int)puVar9 + -0x5c) = in_xd2;
      *(undefined8 *)((int)puVar9 + -0x50) = *(undefined8 *)((int)ar5 + 4);
      *(double *)((int)puVar9 + -0x4c) = ar5[1];
      *(undefined8 *)((int)puVar9 + -0x48) = *(undefined8 *)((int)ar5 + 0xc);
      *(double *)((int)puVar9 + -0x3c) = *ar5;
      in_xd2 = *(double *)((int)ar5 + 4);
      dVar16 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar16,0) - fVar23) * (float)((ulonglong)dVar16 >> 0x20) * fVar14;
    }
    else {
      fVar13 = SUB84((dVar16 - dVar20) * (dVar16 - dVar20) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -0x44) = fVar13;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar5 + 1));
    }
    else {
      *(double *)((int)puVar9 + -0x44) = in_xd2;
      in_xd2 = ar5[1];
      dVar16 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (SUB84(dVar16,0) - fVar11) * (float)((ulonglong)dVar16 >> 0x20) * fVar15;
    }
    else {
      fVar13 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -0x40) = fVar13;
      dVar16 = (double)CONCAT44(*(undefined4 *)(ar5 + 3),fVar25);
    }
    else {
      *(double *)((int)puVar9 + -0x40) = in_xd2;
      dVar16 = ar5[3];
      in_xd2 = dVar24;
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)(ulonglong)
                       (uint)(fVar12 * (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x38) = SUB84(dVar16,0);
      uVar17 = CONCAT44(*(undefined4 *)((int)ar5 + 0x1c),uVar26);
    }
    else {
      *(double *)((int)puVar9 + -0x38) = in_xd2;
      uVar17 = *(ulonglong *)((int)ar5 + 0x1c);
      in_xd2 = dVar10;
    }
    if (in_FPSCR_PR == '\0') {
      uVar17 = (ulonglong)(uint)(fVar12 * (float)(uVar17 >> 0x20) + (float)uVar17);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x34) = (int)uVar17;
      *(undefined4 *)((int)puVar9 + -0x28) = *(undefined4 *)((int)ar6 + 4);
      *(undefined4 *)((int)puVar9 + -0x24) = *(undefined4 *)(ar6 + 1);
      *(undefined4 *)((int)puVar9 + -0x20) = *(undefined4 *)((int)ar6 + 0xc);
      *(undefined4 *)((int)puVar9 + -0x14) = *(undefined4 *)ar6;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      *(double *)((int)puVar9 + -0x34) = in_xd2;
      *(undefined8 *)((int)puVar9 + -0x28) = *(undefined8 *)((int)ar6 + 4);
      *(double *)((int)puVar9 + -0x24) = ar6[1];
      *(undefined8 *)((int)puVar9 + -0x20) = *(undefined8 *)((int)ar6 + 0xc);
      *(double *)((int)puVar9 + -0x14) = *ar6;
      in_xd2 = *(double *)((int)ar6 + 4);
      dVar16 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (SUB84(dVar16,0) - fVar23) * (float)((ulonglong)dVar16 >> 0x20) * fVar14;
    }
    else {
      fVar14 = SUB84((dVar16 - dVar20) * (dVar16 - dVar20) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar9 + -0x1c) = fVar14;
      dVar16 = (double)CONCAT44(*(undefined4 *)ar6,*(undefined4 *)(ar6 + 1));
    }
    else {
      *(double *)((int)puVar9 + -0x1c) = in_xd2;
      dVar16 = *ar6;
      in_xd2 = ar6[1];
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (float)((ulonglong)dVar16 >> 0x20);
      dVar29 = (double)CONCAT44(fVar14,(SUB84(dVar16,0) - fVar11) * fVar14 * fVar15);
    }
    else {
      dVar29 = (dVar16 - dVar22) * (dVar16 - dVar22) * dVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x18) = SUB84(dVar29,0);
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)(ar6 + 3));
    }
    else {
      *(double *)((int)puVar9 + -0x18) = in_xd2;
      in_xd2 = ar6[3];
    }
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44(fVar12 * SUB84(dVar29,0) + fVar25,uVar26);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0x10) = (int)((ulonglong)dVar24 >> 0x20);
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)((int)ar6 + 0x1c));
    }
    else {
      *(double *)((int)puVar9 + -0x10) = dVar24;
      in_xd2 = *(double *)((int)ar6 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)(ulonglong)(uint)(fVar12 * SUB84(dVar29,0) + SUB84(dVar24,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + -0xc) = SUB84(dVar24,0);
      uVar26 = *(undefined4 *)((int)puVar9 + -0x3c);
      uVar30 = *(undefined4 *)((int)puVar9 + -0x40);
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                 *(undefined4 *)((int)puVar9 + -100));
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar30);
      dVar16 = (double)CONCAT44(uVar26,SUB84(in_xd12,0));
      dVar10 = (double)CONCAT44(uVar30,*(undefined4 *)((int)puVar9 + -0x68));
      dVar24 = (double)CONCAT44(uVar26,SUB84(dVar24,0));
    }
    else {
      *(double *)((int)puVar9 + -0xc) = dVar10;
      dVar16 = *(double *)((int)puVar9 + -0x3c);
      in_xd2 = *(double *)((int)puVar9 + -0x40);
      uVar30 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      uVar26 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar10 = in_xd2;
      dVar24 = dVar16;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) * SUB84(in_dr12,0))
      ;
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar10,0),SUB84(dVar16,0)
                               );
    }
    else {
      dVar29 = dVar29 * in_dr12;
      dVar16 = dVar16 * dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar9 + -0x44),SUB84(in_dr12,0));
    }
    else {
      dVar27 = *(double *)((int)puVar9 + -0x44);
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar29,0),SUB84(dVar16,0)
                               );
    }
    else {
      dVar16 = dVar16 - dVar29;
    }
    uVar28 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar32 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar28);
      dVar32 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar29,0) * SUB84(dVar27,0);
    }
    else {
      fVar14 = SUB84(dVar29 * dVar27,0);
    }
    dVar29 = dVar24;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44(uVar26,fVar14);
      dVar29 = (double)CONCAT44(uVar26,*(undefined4 *)((int)puVar9 + -0x6c));
    }
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar29,0),SUB84(dVar24,0)
                               );
    }
    else {
      dVar24 = dVar24 * dVar29;
    }
    dVar31 = dVar10;
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar30);
      dVar31 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) * SUB84(dVar29,0));
      fVar14 = SUB84(dVar24,0) - (float)((ulonglong)dVar24 >> 0x20);
    }
    else {
      dVar16 = dVar16 * dVar29;
      fVar14 = SUB84(dVar24 - dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44(*(undefined4 *)((int)puVar9 + -0x18),fVar14);
    }
    else {
      dVar24 = *(double *)((int)puVar9 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar24,0),SUB84(dVar24,0)
                               );
    }
    else {
      dVar24 = dVar24 * dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                *(undefined4 *)((int)puVar9 + -0x1c));
    }
    else {
      dVar32 = *(double *)((int)puVar9 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar24,0) +
                                (float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar28);
      dVar27 = dVar32;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar24,0) * SUB84(dVar10,0);
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),fVar14);
      fVar14 = SUB84(dVar16,0) - fVar14;
    }
    else {
      dVar24 = dVar24 * dVar10;
      fVar14 = SUB84(dVar16 - dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(fVar14,*(undefined4 *)((int)puVar9 + -0x14));
      dVar16 = dVar31;
    }
    else {
      dVar16 = *(double *)((int)puVar9 + -0x14);
      dVar10 = dVar31;
    }
    fVar14 = (float)((ulonglong)dVar10 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)((ulonglong)
                        (uint)((fVar14 * SUB84(dVar10,0) + (float)((ulonglong)dVar24 >> 0x20)) *
                              SUB84(in_dr4,0)) << 0x20);
    }
    else {
      dVar24 = (double)((ulonglong)dVar24 & 0xffffffff00000000) * in_dr4;
    }
    fVar15 = SUB84(dVar24,0);
    fVar12 = (float)((ulonglong)in_dr4 >> 0x20);
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar24 >> 0x20) < fVar15) {
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(fVar14,fVar12);
        dVar24 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar15);
      }
      else {
        dVar24 = ar4[2];
        dVar16 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                  SUB84(dVar10,0) + (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar10 = dVar10 + dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x58) = SUB84(dVar10,0);
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar12);
      }
      else {
        *(double *)((int)puVar9 + -0x58) = dVar16;
        dVar16 = in_dr4;
      }
      *(undefined1 **)((int)puVar9 + -0x120) = (undefined1 *)((int)puVar9 + -0x50);
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(*(undefined4 *)(ar5 + 2),SUB84(dVar24,0));
      }
      else {
        dVar24 = ar5[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                  SUB84(dVar10,0) + (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar10 = dVar10 + dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x30) = SUB84(dVar10,0);
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar12);
      }
      else {
        *(double *)((int)puVar9 + -0x30) = dVar16;
        dVar16 = in_dr4;
      }
      *(undefined1 **)((int)puVar9 + -0x11c) = (undefined1 *)((int)puVar9 + -0x28);
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(*(undefined4 *)(ar6 + 2),SUB84(dVar24,0));
      }
      else {
        dVar24 = ar6[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                  SUB84(dVar10,0) + (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar10 = dVar10 + dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -8) = SUB84(dVar10,0);
        *(undefined4 *)((int)puVar9 + -0x54) = *(undefined4 *)((int)ar4 + 0x14);
        uVar18 = CONCAT44(*(undefined4 *)((int)ar5 + 0x14),SUB84(dVar24,0));
      }
      else {
        *(double *)((int)puVar9 + -8) = dVar16;
        *(undefined8 *)((int)puVar9 + -0x54) = *(undefined8 *)((int)ar4 + 0x14);
        uVar18 = *(undefined8 *)((int)ar5 + 0x14);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar9 + -0x120) + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
        dVar24 = (double)CONCAT44(*(undefined4 *)((int)ar6 + 0x14),(int)uVar18);
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar9 + -0x120) + 0x24) = uVar18;
        dVar24 = *(double *)((int)ar6 + 0x14);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar9 + -0x11c) + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar9 + -0x11c) + 0x24) = dVar24;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(fVar14,fVar12);
        dVar24 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar15);
      }
      else {
        dVar24 = ar4[2];
        dVar16 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                  SUB84(dVar10,0) - (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar10 = dVar10 - dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x58) = SUB84(dVar10,0);
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar12);
      }
      else {
        *(double *)((int)puVar9 + -0x58) = dVar16;
        dVar16 = in_dr4;
      }
      *(undefined1 **)((int)puVar9 + -0x120) = (undefined1 *)((int)puVar9 + -0x50);
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(*(undefined4 *)(ar5 + 2),SUB84(dVar24,0));
      }
      else {
        dVar24 = ar5[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                  SUB84(dVar10,0) - (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar10 = dVar10 - dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x30) = SUB84(dVar10,0);
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar12);
      }
      else {
        *(double *)((int)puVar9 + -0x30) = dVar16;
        dVar16 = in_dr4;
      }
      *(undefined1 **)((int)puVar9 + -0x11c) = (undefined1 *)((int)puVar9 + -0x28);
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(*(undefined4 *)(ar6 + 2),SUB84(dVar24,0));
      }
      else {
        dVar24 = ar6[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                  SUB84(dVar10,0) - (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar10 = dVar10 - dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -8) = SUB84(dVar10,0);
        dVar24 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),SUB84(dVar24,0));
      }
      else {
        *(double *)((int)puVar9 + -8) = dVar16;
        dVar24 = *(double *)((int)ar4 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44(-(float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
      }
      else {
        dVar24 = -dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + -0x54) = (int)((ulonglong)dVar24 >> 0x20);
        dVar24 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 0x14),SUB84(dVar24,0));
      }
      else {
        *(double *)((int)puVar9 + -0x54) = dVar24;
        dVar24 = *(double *)((int)ar5 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44(-(float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
      }
      else {
        dVar24 = -dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar9 + -0x120) + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
        dVar24 = (double)CONCAT44(*(undefined4 *)((int)ar6 + 0x14),SUB84(dVar24,0));
      }
      else {
        *(double *)(*(int *)((int)puVar9 + -0x120) + 0x24) = dVar24;
        dVar24 = *(double *)((int)ar6 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44(-(float)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0));
      }
      else {
        dVar24 = -dVar24;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar9 + -0x11c) + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar9 + -0x11c) + 0x24) = dVar24;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                *(undefined4 *)((int)puVar9 + -0x58));
    }
    else {
      dVar27 = *(double *)((int)puVar9 + -0x58);
    }
    if (in_FPSCR_PR == '\0') {
      bVar33 = SUB84(dVar24,0) < fVar12;
    }
    else {
      bVar33 = dVar24 < in_dr4;
    }
    if (bVar33) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar9 + -0x58) = fVar12;
      }
      else {
        *(double *)((int)puVar9 + -0x58) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                *(undefined4 *)((int)puVar9 + -0x30));
    }
    else {
      dVar27 = *(double *)((int)puVar9 + -0x30);
    }
    if (in_FPSCR_PR == '\0') {
      bVar33 = SUB84(dVar24,0) < fVar12;
    }
    else {
      bVar33 = dVar24 < in_dr4;
    }
    if (bVar33) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar9 + -0x30) = fVar12;
      }
      else {
        *(double *)((int)puVar9 + -0x30) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)((int)puVar9 + -8));
    }
    else {
      dVar27 = *(double *)((int)puVar9 + -8);
    }
    if (in_FPSCR_PR == '\0') {
      bVar33 = SUB84(dVar24,0) < fVar12;
    }
    else {
      bVar33 = dVar24 < in_dr4;
    }
    if (bVar33) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar9 + -8) = fVar12;
      }
      else {
        *(double *)((int)puVar9 + -8) = in_dr4;
      }
    }
    iVar1 = 0;
    puVar8 = (undefined8 *)((int)puVar9 + -0x118);
    iVar5 = 0;
    iVar6 = 2;
    while (iVar2 = iVar5, iVar2 < 3) {
      iVar6 = iVar6 * 0x28;
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)((int)puVar9 + iVar6 + -100),0x3f800000);
      }
      else {
        uVar18 = *(undefined8 *)((int)puVar9 + iVar6 + -100);
      }
      iVar5 = iVar2 * 0x28;
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)((int)puVar9 + iVar5 + -100),(float)uVar18);
      }
      else {
        uVar19 = *(undefined8 *)((int)puVar9 + iVar5 + -100);
      }
      fVar14 = (float)uVar19;
      if (((in_FPSCR_PR == '\0' && (float)uVar18 < (float)((ulonglong)uVar18 >> 0x20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar14 < (float)((ulonglong)uVar19 >> 0x20)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar14 = *(float *)((int)puVar9 + iVar6 + -100);
          dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                                    *(undefined4 *)((int)puVar9 + iVar5 + -100));
          fVar15 = fVar14;
          dVar24 = (double)CONCAT44(fVar14,SUB84(in_dr4,0));
        }
        else {
          dVar27 = *(double *)((int)puVar9 + iVar6 + -100);
          fVar15 = (float)((ulonglong)dVar27 >> 0x20);
          dVar24 = dVar27;
        }
        dVar16 = (double)CONCAT44(0x3f800000,-fVar14);
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44(0x3f800000,-fVar14 + 1.0);
          dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(dVar10,0) - fVar15);
        }
        else {
          dVar16 = dVar16 + dVar16;
          dVar10 = dVar10 - dVar24;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44(SUB84(dVar16,0),*(undefined4 *)((int)puVar9 + iVar6 + -0x6c));
        }
        else {
          in_xd4 = *(double *)((int)puVar9 + iVar6 + -0x6c);
          dVar24 = dVar27;
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) / SUB84(dVar10,0),
                                    SUB84(dVar24,0));
        }
        else {
          dVar24 = dVar24 / dVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    *(undefined4 *)((int)puVar9 + iVar5 + -0x6c));
          dVar10 = (double)((ulonglong)dVar24 & 0xffffffff);
        }
        else {
          dVar27 = *(double *)((int)puVar9 + iVar5 + -0x6c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    SUB84(dVar16,0) - SUB84(dVar24,0));
        }
        else {
          dVar16 = dVar16 - dVar24;
        }
        uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44(*(undefined4 *)((int)puVar9 + iVar6 + -0x68),SUB84(dVar29,0));
          dVar24 = (double)CONCAT44(uVar26,SUB84(dVar10,0));
          in_dr4 = (double)CONCAT44(uVar26,fVar23);
        }
        else {
          dVar32 = *(double *)((int)puVar9 + iVar6 + -0x68);
          in_dr4 = dVar24;
          in_xd4 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar16,0) +
                                 SUB84(dVar24,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    *(undefined4 *)((int)puVar9 + iVar5 + -0x68));
          dVar24 = (double)CONCAT44(fVar21,SUB84(dVar24,0));
        }
        else {
          dVar27 = *(double *)((int)puVar9 + iVar5 + -0x68);
          dVar24 = dVar20;
        }
        fVar14 = (float)((ulonglong)dVar32 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) - fVar14);
          in_dr4 = (double)CONCAT44(uVar26,(float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar24,0) +
                                           SUB84(in_dr4,0));
        }
        else {
          dVar16 = dVar16 - dVar32;
        }
        uVar26 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        dVar29 = in_xd8;
        dVar24 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          dVar29 = (double)CONCAT44(fVar11,SUB84(dVar32,0));
          dVar24 = (double)CONCAT44(uVar26,fVar14);
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar16,0) +
                                 SUB84(dVar24,0));
        }
        dVar32 = dVar22;
        if (in_FPSCR_SZ == '\0') {
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar24,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar29 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(dVar32,0) +
                                    (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
        }
        dVar10 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(uVar26,SUB84(dVar32,0));
        }
        pdVar7 = (double *)(puVar8 + iVar1 * 5);
        uVar30 = (undefined4)((ulonglong)dVar16 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar7 = SUB84(in_dr4,0);
          *(int *)((int)pdVar7 + 4) = (int)((ulonglong)dVar29 >> 0x20);
          *(undefined4 *)(pdVar7 + 1) = uVar30;
          dVar16 = (double)CONCAT44(uVar30,*(undefined4 *)((int)puVar9 + iVar5 + -0x60));
          in_dr4 = (double)CONCAT44(uVar26,*(undefined4 *)((int)puVar9 + iVar6 + -0x60));
        }
        else {
          *pdVar7 = in_xd4;
          *(double *)((int)pdVar7 + 4) = dVar29;
          pdVar7[1] = dVar16;
          dVar27 = *(double *)((int)puVar9 + iVar5 + -0x60);
          in_xd4 = *(double *)((int)puVar9 + iVar6 + -0x60);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar16,0) - SUB84(in_dr4,0);
        }
        else {
          fVar14 = SUB84(dVar16 - in_dr4,0);
        }
        dVar24 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44(SUB84(in_dr4,0),fVar14);
        }
        fVar14 = (float)((ulonglong)dVar10 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24,0) + (float)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0));
        }
        uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(pdVar7 + 3) = uVar26;
          dVar24 = (double)CONCAT44(uVar26,*(undefined4 *)((int)puVar9 + iVar5 + -0x5c));
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                    *(undefined4 *)((int)puVar9 + iVar6 + -0x5c));
        }
        else {
          pdVar7[3] = dVar24;
          dVar27 = *(double *)((int)puVar9 + iVar5 + -0x5c);
          in_xd4 = *(double *)((int)puVar9 + iVar6 + -0x5c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(dVar24,0) - SUB84(in_dr4,0);
        }
        else {
          fVar15 = SUB84(dVar24 - in_dr4,0);
        }
        dVar24 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44(SUB84(in_dr4,0),fVar15);
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24,0) + (float)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0));
        }
        uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)pdVar7 + 0x1c) = uVar26;
          dVar24 = (double)CONCAT44(uVar26,*(undefined4 *)((int)puVar9 + iVar5 + -0x58));
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                    *(undefined4 *)((int)puVar9 + iVar6 + -0x58));
        }
        else {
          *(double *)((int)pdVar7 + 0x1c) = dVar24;
          dVar27 = *(double *)((int)puVar9 + iVar5 + -0x58);
          in_xd4 = *(double *)((int)puVar9 + iVar6 + -0x58);
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(dVar24,0) - SUB84(in_dr4,0);
        }
        else {
          fVar15 = SUB84(dVar24 - in_dr4,0);
        }
        dVar24 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44(SUB84(in_dr4,0),fVar15);
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24,0) + (float)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0));
        }
        uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(pdVar7 + 4) = uVar26;
          dVar24 = (double)CONCAT44(uVar26,*(undefined4 *)((int)puVar9 + iVar5 + -0x54));
          in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                    *(undefined4 *)((int)puVar9 + iVar6 + -0x54));
        }
        else {
          pdVar7[4] = dVar24;
          dVar27 = *(double *)((int)puVar9 + iVar5 + -0x54);
          in_xd4 = *(double *)((int)puVar9 + iVar6 + -0x54);
        }
        iVar1 = iVar1 + 1;
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(dVar24,0) - SUB84(in_dr4,0);
        }
        else {
          fVar15 = SUB84(dVar24 - in_dr4,0);
        }
        dVar24 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44(SUB84(in_dr4,0),fVar15);
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44(fVar14 * SUB84(dVar24,0) + (float)((ulonglong)dVar24 >> 0x20),
                                    SUB84(dVar24,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar7 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
        }
        else {
          *(double *)((int)pdVar7 + 0x24) = dVar24;
        }
      }
      pdVar7 = (double *)((int)puVar9 + iVar2 * 0x28 + -0x78);
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),0x3f800000);
      }
      else {
        uVar18 = *(undefined8 *)((int)pdVar7 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar18 < (float)((ulonglong)uVar18 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = (double)CONCAT44(*(undefined4 *)pdVar7,*(undefined4 *)((int)pdVar7 + 4));
        }
        else {
          in_dr4 = *pdVar7;
          in_xd4 = *(double *)((int)pdVar7 + 4);
        }
        pdVar3 = (double *)(puVar8 + iVar1 * 5);
        iVar1 = iVar1 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar3 = (int)((ulonglong)in_dr4 >> 0x20);
          *(int *)((int)pdVar3 + 4) = SUB84(in_dr4,0);
          *(undefined4 *)(pdVar3 + 1) = *(undefined4 *)(pdVar7 + 1);
          *(undefined4 *)(pdVar3 + 3) = *(undefined4 *)(pdVar7 + 3);
          *(undefined4 *)((int)pdVar3 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x1c);
          *(undefined4 *)(pdVar3 + 4) = *(undefined4 *)(pdVar7 + 4);
          *(undefined4 *)((int)pdVar3 + 0x24) = *(undefined4 *)((int)pdVar7 + 0x24);
        }
        else {
          *pdVar3 = in_dr4;
          *(double *)((int)pdVar3 + 4) = in_xd4;
          pdVar3[1] = pdVar7[1];
          pdVar3[3] = pdVar7[3];
          *(undefined8 *)((int)pdVar3 + 0x1c) = *(undefined8 *)((int)pdVar7 + 0x1c);
          pdVar3[4] = pdVar7[4];
          *(undefined8 *)((int)pdVar3 + 0x24) = *(undefined8 *)((int)pdVar7 + 0x24);
        }
      }
      iVar6 = iVar2;
      iVar5 = iVar2 + 1;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar7 + 0x1c) = *(undefined4 *)((int)puVar9 + -0xf4);
      *(undefined4 *)(ar7 + 3) = *(undefined4 *)((int)puVar9 + -0xf8);
      *(undefined4 *)((int)ar7 + 0x14) = *(undefined4 *)((int)puVar9 + -0xfc);
      *(undefined4 *)(ar7 + 2) = *(undefined4 *)((int)puVar9 + -0x100);
      *(undefined4 *)((int)ar7 + 0xc) = *(undefined4 *)((int)puVar9 + -0x110);
      *(undefined4 *)(ar7 + 1) = *(undefined4 *)((int)puVar9 + -0x114);
      puVar4 = (undefined8 *)((int)ar7 + 4);
      *(undefined4 *)puVar4 = *(undefined4 *)puVar8;
    }
    else {
      ar7[3] = *(undefined8 *)((int)puVar9 + -0xf4);
      ar7[2] = *(undefined8 *)((int)puVar9 + -0xf8);
      ar7[1] = *(undefined8 *)((int)puVar9 + -0xfc);
      *ar7 = *(undefined8 *)((int)puVar9 + -0x100);
      ar7[-1] = *(undefined8 *)((int)puVar9 + -0x110);
      ar7[-2] = *(undefined8 *)((int)puVar9 + -0x114);
      puVar4 = ar7 + -3;
      *puVar4 = *puVar8;
    }
    *(undefined4 *)((int)puVar4 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)((int)puVar9 + -0xcc);
      *(undefined4 *)((int)puVar4 + 0x34) = *(undefined4 *)((int)puVar9 + -0xd0);
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)((int)puVar9 + -0xd4);
      *(undefined4 *)((int)puVar4 + 0x2c) = *(undefined4 *)((int)puVar9 + -0xd8);
      *(undefined4 *)(puVar4 + 5) = *(undefined4 *)((int)puVar9 + -0xe8);
      *(undefined4 *)((int)puVar4 + 0x24) = *(undefined4 *)((int)puVar9 + -0xec);
      puVar4 = puVar4 + 4;
      *(undefined4 *)puVar4 = *(undefined4 *)((int)puVar9 + -0xf0);
    }
    else {
      *(undefined8 *)((int)puVar4 + 0x34) = *(undefined8 *)((int)puVar9 + -0xcc);
      *(undefined8 *)((int)puVar4 + 0x2c) = *(undefined8 *)((int)puVar9 + -0xd0);
      *(undefined8 *)((int)puVar4 + 0x24) = *(undefined8 *)((int)puVar9 + -0xd4);
      *(undefined8 *)((int)puVar4 + 0x1c) = *(undefined8 *)((int)puVar9 + -0xd8);
      *(undefined8 *)((int)puVar4 + 0x14) = *(undefined8 *)((int)puVar9 + -0xe8);
      *(undefined8 *)((int)puVar4 + 0xc) = *(undefined8 *)((int)puVar9 + -0xec);
      puVar4 = (undefined8 *)((int)puVar4 + 4);
      *puVar4 = *(undefined8 *)((int)puVar9 + -0xf0);
    }
    *(undefined4 *)((int)puVar4 + -4) = 0xe0000000;
    if (iVar1 != 3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar4 + 7) = *(undefined4 *)((int)puVar9 + -0x7c);
        *(undefined4 *)((int)puVar4 + 0x34) = *(undefined4 *)((int)puVar9 + -0x80);
        *(undefined4 *)(puVar4 + 6) = *(undefined4 *)((int)puVar9 + -0x84);
        *(undefined4 *)((int)puVar4 + 0x2c) = *(undefined4 *)((int)puVar9 + -0x88);
        *(undefined4 *)(puVar4 + 5) = *(undefined4 *)((int)puVar9 + -0x98);
        *(undefined4 *)((int)puVar4 + 0x24) = *(undefined4 *)((int)puVar9 + -0x9c);
        puVar4 = puVar4 + 4;
        *(undefined4 *)puVar4 = *(undefined4 *)((int)puVar9 + -0xa0);
      }
      else {
        *(undefined8 *)((int)puVar4 + 0x34) = *(undefined8 *)((int)puVar9 + -0x7c);
        *(undefined8 *)((int)puVar4 + 0x2c) = *(undefined8 *)((int)puVar9 + -0x80);
        *(undefined8 *)((int)puVar4 + 0x24) = *(undefined8 *)((int)puVar9 + -0x84);
        *(undefined8 *)((int)puVar4 + 0x1c) = *(undefined8 *)((int)puVar9 + -0x88);
        *(undefined8 *)((int)puVar4 + 0x14) = *(undefined8 *)((int)puVar9 + -0x98);
        *(undefined8 *)((int)puVar4 + 0xc) = *(undefined8 *)((int)puVar9 + -0x9c);
        puVar4 = (undefined8 *)((int)puVar4 + 4);
        *puVar4 = *(undefined8 *)((int)puVar9 + -0xa0);
      }
      *(undefined4 *)((int)puVar4 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)((int)puVar9 + -0xa4);
      *(undefined4 *)((int)puVar4 + 0x34) = *(undefined4 *)((int)puVar9 + -0xa8);
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)((int)puVar9 + -0xac);
      *(undefined4 *)((int)puVar4 + 0x2c) = *(undefined4 *)((int)puVar9 + -0xb0);
      *(undefined4 *)(puVar4 + 5) = *(undefined4 *)((int)puVar9 + -0xc0);
      *(undefined4 *)((int)puVar4 + 0x24) = *(undefined4 *)((int)puVar9 + -0xc4);
      puVar4 = puVar4 + 4;
      *(undefined4 *)puVar4 = *(undefined4 *)((int)puVar9 + -200);
    }
    else {
      *(undefined8 *)((int)puVar4 + 0x34) = *(undefined8 *)((int)puVar9 + -0xa4);
      *(undefined8 *)((int)puVar4 + 0x2c) = *(undefined8 *)((int)puVar9 + -0xa8);
      *(undefined8 *)((int)puVar4 + 0x24) = *(undefined8 *)((int)puVar9 + -0xac);
      *(undefined8 *)((int)puVar4 + 0x1c) = *(undefined8 *)((int)puVar9 + -0xb0);
      *(undefined8 *)((int)puVar4 + 0x14) = *(undefined8 *)((int)puVar9 + -0xc0);
      *(undefined8 *)((int)puVar4 + 0xc) = *(undefined8 *)((int)puVar9 + -0xc4);
      puVar4 = (undefined8 *)((int)puVar4 + 4);
      *puVar4 = *(undefined8 *)((int)puVar9 + -200);
    }
    *(undefined4 *)((int)puVar4 + -4) = 0xf0000000;
    ar7 = (undefined8 *)((int)puVar4 + 0x1c);
    _DAT_8c4aa520 = _DAT_8c4aa520 + iVar1;
  }
  return ar7;
}

__asm__(".globl _FUN_8c2319cc\n.set _FUN_8c2319cc, _FUN_8c2319cc_def\n");
