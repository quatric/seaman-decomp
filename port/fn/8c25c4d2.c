#include "../decls.h"
int FUN_8c25c4d2_def(uint *ar4,uint *ar5,int ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  double *pdVar2;
  uint unaff_r12;
  double *pdVar3;
  undefined4 *puVar4;
  double in_dr0;
  double dVar5;
  float fVar6;
  double in_dr2;
  double dVar7;
  undefined4 uVar10;
  double dVar8;
  double dVar9;
  undefined4 in_fr5;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar17;
  double dVar15;
  double dVar18;
  undefined4 in_fr9;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined4 in_fr11;
  double dVar22;
  double in_dr12;
  undefined4 uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  undefined8 in_dr14;
  double dVar27;
  undefined8 in_xd0;
  double in_xd2;
  double dVar28;
  double in_xd4;
  double dVar29;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  double in_xd12;
  double in_xd14;
  double dVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_24 [12];
  undefined4 auStack_18 [3];
  undefined4 uVar16;
  
  uVar10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar4 = auStack_18;
    stack0xffffffe4 = CONCAT44(SUB84(in_dr12,0),(*(uint*)((uchar*)&auStack_24+8)));
  }
  else {
    puVar4 = (undefined4 *)auStack_24;
  }
  bVar32 = false;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = *(undefined4 *)0x8c4aa4a8;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)0x8c4aa4dc);
    in_fr9 = *(undefined4 *)(0x8c4aa4a8 + 2);
    dVar14 = (double)CONCAT44(uVar16,*(undefined4 *)((int)0x8c4aa4a8 + 0xc));
    dVar7 = (double)CONCAT44(uVar16,in_fr5);
  }
  else {
    in_xd6 = *(double *)((int)0x8c4aa4a8 + 0xc);
    dVar14 = *(undefined4 *)0x8c4aa4a8;
    in_xd2 = *(undefined4 *)0x8c4aa4dc;
    in_xd8 = ((undefined1 *)2)[0x8c4aa4a8];
    uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
    dVar7 = dVar14;
  }
  if (in_FPSCR_PR == '\0') {
    dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(in_dr2,0),SUB84(dVar14,0));
  }
  else {
    dVar14 = dVar14 * in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),ar4[1]);
  }
  else {
    in_xd2 = *(double *)(ar4 + 1);
  }
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44(1.0 / SUB84(in_dr2,0),in_fr11);
  }
  else {
    dVar22 = (double)CONCAT44(0x3f800000,in_fr11) / in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),ar5[1]);
    dVar21 = (double)CONCAT44(uVar16,in_fr9);
  }
  else {
    in_xd2 = *(double *)(ar5 + 1);
    dVar21 = dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    dVar27 = (double)CONCAT44(uVar10,1.0 / SUB84(in_dr2,0));
  }
  else {
    dVar27 = (double)CONCAT44(uVar10,0x3f800000) / in_dr2;
  }
  fVar20 = (float)((ulonglong)dVar14 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar17 = 1.0 / fVar20;
  }
  else {
    fVar17 = (float)((ulonglong)((double)CONCAT44(0x3f800000,SUB84(dVar7,0)) / dVar14) >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)0x8c4aa4e0,*(undefined4 *)0x8c4aa4d4);
  }
  else {
    dVar7 = *(undefined4 *)0x8c4aa4e0;
    in_xd2 = *(undefined4 *)0x8c4aa4d4;
  }
  fVar26 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * fVar26,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 * dVar7;
  }
  fVar12 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar31 = (float)((ulonglong)dVar22 >> 0x20) < SUB84(dVar7,0);
    dVar15 = (double)CONCAT44(fVar17,1.0 / fVar12);
  }
  else {
    bVar31 = dVar22 < dVar7;
    dVar15 = (double)CONCAT44(fVar17,0x3f800000) / dVar21;
  }
  uVar23 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  fVar6 = SUB84(dVar14,0);
  uVar16 = SUB84(dVar22,0);
  fVar19 = SUB84(dVar21,0);
  uVar10 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  fVar11 = SUB84(dVar15,0);
  fVar13 = (float)((ulonglong)dVar15 >> 0x20);
  fVar24 = SUB84(dVar27,0);
  fVar17 = SUB84(in_xd4,0);
  if (bVar31) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(uVar10,ar4[1]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44(1.0 / SUB84(in_dr0,0),uVar16);
    }
    else {
      dVar22 = (double)CONCAT44(0x3f800000,uVar16) / in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(ar4[2],fVar24);
    }
    else {
      dVar27 = *(double *)(ar4 + 2);
    }
    pdVar3 = (double *)*ar4;
    uVar10 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar18 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar26,uVar10);
      dVar18 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar25 = ar4[3];
      *(float *)((int)puVar4 + -0x28) = SUB84(in_dr0,0);
      *(undefined4 *)((int)puVar4 + -0x1c) = uVar10;
      *(uint *)((int)puVar4 + -0x18) = uVar25;
    }
    else {
      in_xd14 = *(double *)(ar4 + 3);
      *(undefined8 *)((int)puVar4 + -0x28) = in_xd0;
      *(double *)((int)puVar4 + -0x1c) = dVar27;
      uVar25 = SUB84(dVar27,0);
      *(double *)((int)puVar4 + -0x18) = in_xd14;
    }
    unaff_r12 = *ar5;
    fVar26 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * fVar26);
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar8 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar26,SUB84(dVar7,0));
      dVar8 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) * fVar11);
    }
    else {
      dVar22 = dVar22 * dVar15;
    }
    dVar28 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),uVar25);
      dVar28 = dVar18;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar6);
    }
    else {
      dVar7 = dVar7 - dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) * (float)((ulonglong)dVar22 >> 0x20));
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar18 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)CONCAT44(uVar23,SUB84(dVar7,0));
      dVar18 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) * fVar13);
    }
    else {
      in_dr12 = in_dr12 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),ar5[1]);
    }
    else {
      dVar28 = *(double *)(ar5 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = 1.0 / SUB84(dVar7,0);
    }
    else {
      fVar26 = SUB84((double)CONCAT44(uVar10,0x3f800000) / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x10) = SUB84(dVar7,0);
      fVar17 = (float)ar5[2];
      *(float *)((int)puVar4 + -4) = fVar17;
      dVar7 = (double)CONCAT44(fVar11,fVar17);
    }
    else {
      *(double *)((int)puVar4 + -0x10) = dVar28;
      dVar28 = *(double *)(ar5 + 2);
      *(double *)((int)puVar4 + -4) = dVar28;
      dVar7 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar17 - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(ar5[3],fVar26);
    }
    else {
      dVar27 = *(double *)(ar5 + 3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * SUB84(dVar27,0));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    dVar29 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar13,SUB84(dVar7,0));
      dVar29 = in_xd4;
    }
    fVar17 = (float)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * fVar17);
    }
    else {
      dVar15 = dVar15 * dVar7;
    }
    in_xd2 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar17,(int)((ulonglong)dVar27 >> 0x20));
      in_xd2 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = SUB84(dVar7,0) - fVar6;
    }
    else {
      fVar17 = SUB84(dVar7 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)((int)puVar4 + -0x10);
      dVar7 = (double)CONCAT44(uVar10,fVar17);
      *(undefined4 *)((int)puVar4 + -0x14) = uVar10;
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0x10);
      uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(double *)((int)puVar4 + -0x14) = dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44(uVar10,SUB84(dVar7,0) * SUB84(dVar27,0));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                SUB84(in_dr0,0) * (float)((ulonglong)dVar15 >> 0x20));
    }
    else {
      in_dr0 = in_dr0 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)((int)puVar4 + -4));
    }
    else {
      in_xd2 = *(double *)((int)puVar4 + -4);
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar31 = fVar24 < SUB84(dVar7,0);
    }
    else {
      bVar31 = dVar27 < dVar7;
    }
    pdVar3 = 0x8c4aa4a8;
    if (!bVar31) goto LAB_8c25c5fc;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(uVar10,ar5[1]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar5 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44(1.0 / SUB84(in_dr0,0),uVar16);
    }
    else {
      dVar22 = (double)CONCAT44(0x3f800000,uVar16) / in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(ar5[2],fVar24);
    }
    else {
      dVar27 = *(double *)(ar5 + 2);
    }
    pdVar3 = (double *)*ar5;
    uVar10 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar18 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar26,uVar10);
      dVar18 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar25 = ar5[3];
      *(float *)((int)puVar4 + -0x28) = SUB84(in_dr0,0);
      *(undefined4 *)((int)puVar4 + -0x1c) = uVar10;
      *(uint *)((int)puVar4 + -0x18) = uVar25;
    }
    else {
      in_xd14 = *(double *)(ar5 + 3);
      *(undefined8 *)((int)puVar4 + -0x28) = in_xd0;
      *(double *)((int)puVar4 + -0x1c) = dVar27;
      uVar25 = SUB84(dVar27,0);
      *(double *)((int)puVar4 + -0x18) = in_xd14;
    }
    unaff_r12 = *ar4;
    fVar26 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * fVar26);
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar8 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar26,SUB84(dVar7,0));
      dVar8 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) * fVar11);
    }
    else {
      dVar22 = dVar22 * dVar15;
    }
    dVar28 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),uVar25);
      dVar28 = dVar18;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar6);
    }
    else {
      dVar7 = dVar7 - dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) * (float)((ulonglong)dVar22 >> 0x20));
    }
    else {
      dVar7 = dVar7 * dVar22;
    }
    dVar18 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)CONCAT44(uVar23,SUB84(dVar7,0));
      dVar18 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) * fVar13);
    }
    else {
      in_dr12 = in_dr12 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),ar4[1]);
    }
    else {
      dVar28 = *(double *)(ar4 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = 1.0 / SUB84(dVar7,0);
    }
    else {
      fVar26 = SUB84((double)CONCAT44(uVar10,0x3f800000) / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0xc) = SUB84(dVar7,0);
      fVar17 = (float)ar4[2];
      *(float *)((int)puVar4 + -8) = fVar17;
      dVar7 = (double)CONCAT44(fVar11,fVar17);
    }
    else {
      *(double *)((int)puVar4 + -0xc) = dVar28;
      dVar28 = *(double *)(ar4 + 2);
      *(double *)((int)puVar4 + -8) = dVar28;
      dVar7 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar17 - fVar19);
    }
    else {
      dVar7 = dVar7 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44(ar4[3],fVar26);
    }
    else {
      dVar27 = *(double *)(ar4 + 3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * SUB84(dVar27,0));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    dVar29 = dVar28;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar13,SUB84(dVar7,0));
      dVar29 = in_xd4;
    }
    fVar17 = (float)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * fVar17);
    }
    else {
      dVar15 = dVar15 * dVar7;
    }
    in_xd2 = dVar27;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar17,(int)((ulonglong)dVar27 >> 0x20));
      in_xd2 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = SUB84(dVar7,0) - fVar6;
    }
    else {
      fVar17 = SUB84(dVar7 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)((int)puVar4 + -0xc);
      dVar7 = (double)CONCAT44(uVar10,fVar17);
      *(undefined4 *)((int)puVar4 + -0x14) = uVar10;
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0xc);
      uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(double *)((int)puVar4 + -0x14) = dVar7;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44(uVar10,SUB84(dVar7,0) * SUB84(dVar27,0));
    }
    else {
      dVar7 = dVar7 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                SUB84(in_dr0,0) * (float)((ulonglong)dVar15 >> 0x20));
    }
    else {
      in_dr0 = in_dr0 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)((int)puVar4 + -8));
    }
    else {
      in_xd2 = *(double *)((int)puVar4 + -8);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar4 + -0x20) = SUB84(dVar7,0);
  }
  else {
    *(double *)((int)puVar4 + -0x20) = in_xd2;
  }
  bVar32 = true;
  in_xd10 = dVar8;
  in_xd4 = dVar29;
  in_xd12 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar4 + -0x24) = (int)((ulonglong)dVar27 >> 0x20);
  }
  else {
    *(double *)((int)puVar4 + -0x24) = dVar27;
  }
LAB_8c25c5fc:
  if (bVar32) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)(ulonglong)*(uint *)0x8c4aa4d4;
      dVar18 = in_xd2;
    }
    else {
      dVar18 = *(undefined4 *)0x8c4aa4d4;
    }
    fVar17 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar17);
    }
    else {
      dVar27 = dVar27 - dVar22;
    }
    fVar26 = SUB84(dVar22,0);
    if (in_FPSCR_PR == '\0') {
      fVar11 = SUB84(dVar15,0) - fVar26;
      dVar22 = (double)CONCAT44(0x3f800000,SUB84(dVar7,0) - fVar17);
    }
    else {
      fVar11 = SUB84(dVar15 - dVar22,0);
      dVar22 = (double)CONCAT44(0x3f800000,SUB84(dVar7,0)) - dVar22;
    }
    dVar7 = in_xd10;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar26,fVar11);
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = SUB84(in_dr0,0) - SUB84(in_dr12,0);
    }
    else {
      fVar17 = SUB84(in_dr0 - in_dr12,0);
    }
    dVar15 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(SUB84(dVar22,0),fVar26);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar27,0),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 / dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)0x8c4aa4d4);
    }
    else {
      dVar18 = *(undefined4 *)0x8c4aa4d4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = (float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar22,0);
    }
    else {
      fVar26 = (float)((ulonglong)(dVar22 / dVar22) >> 0x20);
    }
    fVar11 = (float)((uint)pdVar3 >> 0x18);
    dVar8 = (double)CONCAT44(fVar26,fVar11);
    uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar22 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(uVar10,fVar17);
    }
    fVar17 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44(fVar17 * SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(in_dr12,0));
      in_xd12 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               fVar17 * SUB84(dVar22,0) + SUB84(dVar7,0));
    }
    dVar22 = dVar8;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)((ulonglong)(uint)fVar26 << 0x20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(fVar12 * (float)((ulonglong)dVar7 >> 0x20),fVar19);
    }
    else {
      dVar21 = dVar21 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0x28) = fVar26;
    }
    else {
      *(double *)((int)puVar4 + -0x28) = dVar8;
    }
    fVar17 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (float)((ulonglong)dVar21 >> 0x20);
      dVar21 = (double)CONCAT44(fVar12,fVar17 * fVar12 + SUB84(dVar21,0));
      fVar6 = fVar17 * fVar20 * SUB84(dVar7,0) + fVar6;
    }
    else {
      fVar6 = SUB84(dVar14 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x1c) = SUB84(dVar21,0);
      *(float *)((int)puVar4 + -0x18) = fVar6;
    }
    else {
      *(double *)((int)puVar4 + -0x1c) = in_xd8;
      *(double *)((int)puVar4 + -0x18) = in_xd6;
    }
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar11 < SUB84(dVar22,0);
    }
    else {
      bVar32 = dVar8 < dVar22;
    }
    dVar22 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(fVar11,SUB84(dVar7,0));
    }
    if (bVar32) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(fVar26,DAT_8c25c6a0);
      }
      else {
        dVar18 = (double)CONCAT44((*(uint *)0x8c25c6a4),DAT_8c25c6a0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar8,0),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 + dVar8;
      }
    }
    fVar20 = (float)((uint)pdVar3 >> 0x10 & 0xff);
    dVar14 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar20);
      dVar14 = in_xd12;
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = DAT_8c25c6a0;
      if (in_FPSCR_SZ != '\0') {
        dVar18 = (double)CONCAT44((*(uint *)0x8c25c6a4),DAT_8c25c6a0);
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) + fVar17);
      }
      else {
        dVar22 = dVar22 + (double)(ulonglong)(uint)fVar17;
      }
    }
    fVar20 = (float)((uint)pdVar3 >> 8 & 0xff);
    dVar7 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar20,fVar6);
    }
    uVar25 = (uint)((ulonglong)dVar7 >> 0x20);
    dVar8 = dVar7;
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)(ulonglong)uVar25;
        dVar8 = in_xd6;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(uVar25,uVar25);
        dVar8 = in_xd6;
        fVar20 = DAT_8c25c6a0;
      }
      else {
        dVar18 = (double)CONCAT44((*(uint *)0x8c25c6a4),DAT_8c25c6a0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) + fVar20);
      }
      else {
        dVar7 = dVar7 + (double)(ulonglong)(uint)fVar20;
      }
    }
    fVar20 = (float)((uint)pdVar3 & 0xff);
    dVar28 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(fVar20,SUB84(dVar7,0));
    }
    uVar25 = (uint)((ulonglong)dVar28 >> 0x20);
    dVar29 = dVar28;
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)(ulonglong)uVar25;
        dVar29 = in_xd8;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar25);
        dVar29 = in_xd8;
        fVar20 = DAT_8c25c854;
      }
      else {
        dVar18 = (double)CONCAT44(0x4f000000,DAT_8c25c854);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)(ulonglong)(uint)(SUB84(dVar21,0) + fVar20);
      }
      else {
        dVar21 = dVar21 + (double)(ulonglong)(uint)fVar20;
      }
    }
    fVar20 = (float)(unaff_r12 >> 0x18);
    dVar7 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(fVar20,SUB84(dVar28,0));
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = DAT_8c25c854;
      if (in_FPSCR_SZ != '\0') {
        dVar18 = (double)CONCAT44(0x4f000000,DAT_8c25c854);
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + fVar17,SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + (double)(ulonglong)(uint)fVar17;
      }
    }
    fVar20 = (float)(unaff_r12 >> 0x10 & 0xff);
    dVar28 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(fVar20,SUB84(dVar21,0));
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = DAT_8c25c854;
      if (in_FPSCR_SZ != '\0') {
        dVar18 = (double)CONCAT44(0x4f000000,DAT_8c25c854);
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) + fVar17,SUB84(dVar28,0));
      }
      else {
        dVar28 = dVar28 + (double)(ulonglong)(uint)fVar17;
      }
    }
    fVar20 = (float)(unaff_r12 >> 8 & 0xff);
    dVar21 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(uVar10,fVar20);
      dVar21 = in_xd10;
    }
    if (in_FPSCR_PR == '\0' && fVar20 < 0.0) {
      fVar17 = DAT_8c25c854;
      if (in_FPSCR_SZ != '\0') {
        dVar18 = (double)CONCAT44(0x4f000000,DAT_8c25c854);
        fVar17 = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) + fVar17);
      }
      else {
        dVar15 = dVar15 + (double)(ulonglong)(uint)fVar17;
      }
    }
    dVar9 = (double)(ulonglong)(uint)(float)(unaff_r12 & 0xff);
    dVar30 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = dVar9;
      dVar30 = in_xd14;
    }
    uVar10 = SUB84(dVar27,0);
    if (in_FPSCR_PR != '\0' || 0.0 <= (float)(unaff_r12 & 0xff)) {
      dVar27 = dVar30;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(uVar10,uVar10);
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)(ulonglong)(uint)DAT_8c25c854;
        dVar27 = (double)CONCAT44(uVar10,uVar10);
      }
      else {
        dVar18 = (double)CONCAT44(0x4f000000,DAT_8c25c854);
        dVar27 = dVar30;
      }
      if (in_FPSCR_PR == '\0') {
        dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) + SUB84(dVar9,0),
                                  SUB84(dVar27,0));
      }
      else {
        dVar27 = dVar27 + dVar9;
      }
    }
    fVar20 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - fVar20,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar22;
    }
    dVar5 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)((ulonglong)dVar15 & 0xffffffff00000000);
    }
    fVar17 = SUB84(dVar7,0);
    if (in_FPSCR_PR == '\0') {
      fVar26 = SUB84(dVar15,0) - fVar17;
    }
    else {
      fVar26 = SUB84(dVar15 - dVar7,0);
    }
    in_xd2 = dVar22;
    if (in_FPSCR_SZ == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar20);
      in_xd2 = dVar30;
    }
    fVar12 = SUB84(dVar22,0);
    fVar20 = (float)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar11 = SUB84(dVar28,0);
      dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - fVar12,fVar11);
      dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - fVar11,
                                fVar20 * (float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar27,0));
    }
    else {
      dVar28 = dVar28 - dVar22;
      fVar11 = SUB84(dVar28,0);
      dVar27 = dVar27 - dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)((ulonglong)dVar7 & 0xffffffff);
      in_xd4 = dVar14;
      dVar14 = (double)CONCAT44(fVar12,fVar17);
    }
    else {
      fVar17 = SUB84(dVar14,0);
      in_xd4 = dVar8;
    }
    fVar12 = SUB84(dVar22,0);
    fVar13 = SUB84(dVar9,0);
    if (in_FPSCR_PR == '\0') {
      fVar12 = fVar20 * fVar26 + fVar12;
      dVar14 = (double)CONCAT44(fVar20 * (float)((ulonglong)dVar28 >> 0x20) +
                                (float)((ulonglong)dVar14 >> 0x20),fVar17);
    }
    dVar15 = dVar29;
    if (in_FPSCR_SZ == '\0') {
      fVar13 = SUB84(dVar27,0);
      in_xd2 = dVar18;
      dVar15 = (double)CONCAT44(fVar11,fVar12);
    }
    dVar7 = (double)CONCAT44(0x4f000000,fVar13);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44(fVar20 * (float)((ulonglong)dVar27 >> 0x20) +
                                (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0));
    }
    if (in_FPSCR_PR != '\0' || 0x4f000000 <= fVar13) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(0x4f000000 + 0x4f000000,
                                 fVar13 - (0x4f000000 + 0x4f000000));
      }
      else {
        dVar7 = (dVar7 + dVar7) - (dVar7 + dVar7);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar33 = (int)SUB84(dVar7,0);
    }
    else {
      iVar33 = (int)dVar7;
    }
    uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(uVar10,0x4f000000);
    fVar20 = (float)((ulonglong)dVar14 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar20 < 0x4f000000;
    }
    else {
      bVar32 = dVar14 < dVar7;
    }
    if (!bVar32) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(uVar10,0x4f000000 + 0x4f000000);
        dVar14 = (double)CONCAT44(fVar20 - (0x4f000000 + 0x4f000000),SUB84(dVar14,0));
      }
      else {
        dVar7 = dVar7 + dVar7;
        dVar14 = dVar14 - dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar34 = (int)(float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      iVar34 = (int)dVar14;
    }
    uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(uVar10,0x4f000000);
    if (in_FPSCR_PR == '\0') {
      bVar32 = SUB84(dVar15,0) < 0x4f000000;
    }
    else {
      bVar32 = dVar15 < dVar7;
    }
    if (!bVar32) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(uVar10,0x4f000000 + 0x4f000000);
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                  SUB84(dVar15,0) - (0x4f000000 + 0x4f000000));
      }
      else {
        dVar7 = dVar7 + dVar7;
        dVar15 = dVar15 - dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar35 = (int)SUB84(dVar15,0);
    }
    else {
      iVar35 = (int)dVar15;
    }
    uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(uVar10,0x4f000000);
    fVar20 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar32 = fVar20 < 0x4f000000;
    }
    else {
      bVar32 = dVar15 < dVar7;
    }
    if (!bVar32) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(uVar10,0x4f000000 + 0x4f000000);
        dVar15 = (double)CONCAT44(fVar20 - (0x4f000000 + 0x4f000000),SUB84(dVar15,0));
      }
      else {
        dVar7 = dVar7 + dVar7;
        dVar15 = dVar15 - dVar7;
      }
    }
    if (in_FPSCR_PR == '\0') {
      uVar25 = (uint)(float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      uVar25 = (uint)dVar15;
    }
    pdVar3 = (double *)(iVar33 << 0x18 | iVar34 << 0x10 | iVar35 << 8 | uVar25);
    in_xd6 = dVar8;
    in_xd8 = dVar29;
    in_xd10 = dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x24),
                              *(undefined4 *)((int)puVar4 + -0x18));
    fVar20 = *(float *)((int)puVar4 + -0x1c);
    dVar22 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x20),fVar20);
    dVar27 = (double)CONCAT44(fVar20,SUB84(dVar15,0));
  }
  else {
    in_xd10 = *(double *)((int)puVar4 + -0x18);
    dVar21 = *(double *)((int)puVar4 + -0x24);
    dVar27 = *(double *)((int)puVar4 + -0x1c);
    dVar22 = *(double *)((int)puVar4 + -0x20);
    fVar20 = SUB84(dVar22,0);
    in_xd8 = dVar27;
  }
  fVar17 = (float)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - fVar17,SUB84(dVar27,0));
  }
  else {
    dVar27 = dVar27 - dVar22;
  }
  fVar26 = SUB84(dVar21,0);
  dVar15 = in_xd10;
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),fVar26);
    dVar15 = in_xd4;
  }
  fVar12 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) - fVar12);
  }
  else {
    dVar27 = dVar27 - dVar21;
  }
  fVar11 = DAT_8c25c85c;
  if (in_FPSCR_SZ != '\0') {
    in_xd6 = (double)CONCAT44(0xe0000000,DAT_8c25c85c);
    fVar11 = SUB84(dVar14,0);
  }
  *(double **)(ar6 + 0x18) = pdVar3;
  uVar10 = 0xe0000000;
  fVar13 = (float)((ulonglong)dVar27 >> 0x20);
  dVar14 = dVar27;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar13);
    dVar14 = in_xd2;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * fVar13);
  }
  else {
    dVar7 = dVar7 * dVar27;
  }
  fVar19 = SUB84(dVar27,0);
  fVar6 = fVar19;
  if (in_FPSCR_SZ != '\0') {
    fVar6 = (float)((ulonglong)dVar15 >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SQRT(fVar6 * fVar19 + SUB84(dVar7,0));
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar6);
    fVar6 = 1.0 / fVar6;
    dVar18 = (double)CONCAT44(fVar13 * fVar6 * fVar11,fVar19 * fVar6 * fVar11);
  }
  else {
    dVar7 = SQRT(dVar7);
    dVar18 = (double)CONCAT44(0x3f800000,fVar11) / dVar7;
    fVar11 = SUB84(dVar18,0);
    dVar18 = dVar27 * dVar18 * dVar18 * dVar18 * dVar18;
  }
  fVar6 = (float)((ulonglong)dVar18 >> 0x20);
  fVar13 = -SUB84(dVar18,0);
  dVar27 = (double)CONCAT44(fVar6,fVar13);
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(fVar13,fVar11);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar13,SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 + dVar27;
  }
  dVar18 = dVar27;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),fVar6);
    dVar18 = in_xd6;
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) + fVar6);
  }
  else {
    dVar15 = dVar15 + dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar1 = (undefined8 *)(ar6 + 0xc);
    *(undefined4 *)puVar1 = *(undefined4 *)((int)puVar4 + -0x28);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar20);
    in_xd8 = dVar14;
  }
  else {
    puVar1 = (undefined8 *)(ar6 + 8);
    *puVar1 = *(undefined8 *)((int)puVar4 + -0x28);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar13);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)((int)puVar1 + -4);
    *(int *)pdVar2 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar26);
    in_xd10 = in_xd8;
  }
  else {
    pdVar2 = (double *)(puVar1 + -1);
    *pdVar2 = in_xd8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar6);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7,0);
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
  }
  *(undefined4 *)((int)pdVar2 + -4) = uVar10;
  *(uint *)((int)pdVar2 + 0x34) = unaff_r12;
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = pdVar2 + 5;
    *(undefined4 *)pdVar2 = *(undefined4 *)((int)puVar4 + -0x14);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar17);
  }
  else {
    pdVar2 = (double *)((int)pdVar2 + 0x24);
    *pdVar2 = *(double *)((int)puVar4 + -0x14);
    in_xd10 = dVar22;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar13);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar12);
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
    in_xd10 = dVar21;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) - fVar6);
  }
  else {
    dVar7 = dVar7 - dVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7,0);
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
  }
  *(undefined4 *)((int)pdVar2 + -4) = uVar10;
  *(double **)((int)pdVar2 + 0x34) = pdVar3;
  fVar11 = (float)((ulonglong)dVar15 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = pdVar2 + 5;
    *(undefined4 *)pdVar2 = *(undefined4 *)((int)puVar4 + -0x28);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar11);
  }
  else {
    pdVar2 = (double *)((int)pdVar2 + 0x24);
    *pdVar2 = *(double *)((int)puVar4 + -0x28);
    in_xd10 = dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) + fVar20);
  }
  else {
    dVar7 = dVar7 + dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)((int)pdVar2 + -4);
    *(int *)pdVar2 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar15,0));
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
    in_xd10 = dVar18;
  }
  if (in_FPSCR_PR == '\0') {
    fVar26 = SUB84(dVar7,0) + fVar26;
  }
  else {
    fVar26 = SUB84(dVar7 + dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar2 = (double *)((int)pdVar2 + -4);
    *(float *)pdVar2 = fVar26;
  }
  else {
    pdVar2 = pdVar2 + -1;
    *pdVar2 = in_xd10;
  }
  *(undefined4 *)((int)pdVar2 + -4) = uVar10;
  if (in_FPSCR_PR == '\0') {
    dVar21 = (double)CONCAT44(fVar11 + fVar17,SUB84(dVar15,0) + fVar12);
  }
  else {
    dVar21 = dVar15 + dVar22 + dVar21;
  }
  *(uint *)((int)pdVar2 + 0x34) = unaff_r12;
  uVar10 = 0xf0000000;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(pdVar2 + 5) = *(undefined4 *)((int)puVar4 + -0x14);
    *(int *)((int)pdVar2 + 0x24) = (int)((ulonglong)dVar21 >> 0x20);
    pdVar2 = pdVar2 + 4;
    *(int *)pdVar2 = SUB84(dVar21,0);
  }
  else {
    *(undefined8 *)((int)pdVar2 + 0x24) = *(undefined8 *)((int)puVar4 + -0x14);
    *(double *)((int)pdVar2 + 0x1c) = dVar21;
    pdVar2 = (double *)((int)pdVar2 + 0x14);
    *pdVar2 = dVar18;
  }
  *(undefined4 *)((int)pdVar2 + -4) = uVar10;
  return (int)pdVar2 + 0x1c;
}

__asm__(".globl _FUN_8c25c4d2\n.set _FUN_8c25c4d2, _FUN_8c25c4d2_def\n");
