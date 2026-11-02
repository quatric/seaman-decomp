#include "../decls.h"
undefined4 FUN_8c2336e8_def(double *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 *ar4_00;
  int *piVar6;
  undefined1 *ar5_00;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double in_dr0;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double in_dr2;
  double dVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 uVar21;
  double in_dr4;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  double in_dr6;
  undefined4 uVar25;
  double in_dr8;
  double dVar26;
  float fVar27;
  double in_dr12;
  float fVar28;
  undefined8 in_dr14;
  double dVar29;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd12;
  double in_xd14;
  bool bVar30;
  bool bVar31;
  char cVar32;
  char cVar33;
  undefined4 in_stack_fffffe20;
  float *ain0;
  undefined4 in_stack_fffffe24;
  int iStack_1d8;
  double *pdStack_1d4;
  int *piStack_1b4;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  int aiStack_194 [4];
  int iStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float afStack_168 [24];
  undefined1 auStack_108 [8];
  double adStack_100 [8];
  double adStack_c0 [12];
  double dStack_60;
  double dStack_54;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar33 = '\0';
  cVar32 = '\0';
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = SUB84(in_dr12,0);
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  dVar29 = (double)CONCAT44(0x3f800000,uStack_20);
  FUN_8c2360b0(ar4,auStack_3c,auStack_48,ar7);
  FUN_8c23620c(ar5,&dStack_54,&dStack_60,ar7);
  pdVar4 = &dStack_54;
  ar5_00 = auStack_48;
  pdVar9 = &dStack_60;
  ar4_00 = auStack_3c;
  iVar2 = FUN_8c212808(ar4_00,ar5_00,pdVar4,pdVar9);
  if (iVar2 != 0) {
    FUN_8c010838(ar4_00,ar5_00,pdVar4,pdVar9,in_stack_fffffe20,in_stack_fffffe24);
    FUN_8c010838(ar4_00,ar5_00,pdVar4,pdVar9,in_stack_fffffe20,in_stack_fffffe24);
    bVar1 = true;
    pdStack_1d4 = adStack_c0;
    for (pdVar10 = (double *)auStack_108; pdVar10 < adStack_c0;
        pdVar10 = (double *)((int)pdVar10 + 0xc)) {
      piVar6 = (int *)((int)pdStack_1d4 + 4);
      iVar3 = *piVar6;
      pdVar7 = pdStack_1d4 + 1;
      iVar2 = *(int *)pdStack_1d4;
      if (cVar33 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                  *(undefined4 *)((int)ar4 + iVar3 * 0xc + 4));
      }
      else {
        in_xd2 = *(double *)((int)ar4 + iVar3 * 0xc + 4);
      }
      iVar8 = *(int *)pdVar7;
      if (cVar33 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)((int)ar4 + iVar2 * 0xc + 4));
      }
      else {
        in_xd4 = *(double *)((int)ar4 + iVar2 * 0xc + 4);
      }
      if (cVar32 == '\0') {
        fVar14 = SUB84(in_dr2,0) - SUB84(in_dr4,0);
      }
      else {
        fVar14 = SUB84(in_dr2 - in_dr4,0);
      }
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)((int)ar4 + iVar2 * 0xc + 8),SUB84(in_dr4,0));
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)ar4 + iVar8 * 0xc + 8),fVar14);
      }
      else {
        dVar22 = *(double *)((int)ar4 + iVar2 * 0xc + 8);
        dVar16 = *(double *)((int)ar4 + iVar8 * 0xc + 8);
      }
      fVar14 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar32 == '\0') {
        fVar15 = SUB84(dVar16,0) * ((float)((ulonglong)dVar16 >> 0x20) - fVar14);
      }
      else {
        fVar15 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22),0);
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)ar4 + iVar3 * 0xc + 8),fVar15);
        dVar11 = (double)CONCAT44(*(undefined4 *)((int)ar4 + iVar8 * 0xc + 4),SUB84(in_dr0,0));
      }
      else {
        dVar16 = *(double *)((int)ar4 + iVar3 * 0xc + 8);
        dVar11 = *(double *)((int)ar4 + iVar8 * 0xc + 4);
      }
      if (cVar32 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar14,SUB84(dVar16,0));
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar11,0));
      }
      else {
        dVar16 = dVar16 - dVar22;
        dVar11 = dVar11 - dVar22;
      }
      fVar27 = (float)((ulonglong)dVar16 >> 0x20);
      fVar15 = -SUB84(dVar16,0);
      if (cVar32 == '\0') {
        fVar15 = (float)((ulonglong)dVar11 >> 0x20) * fVar27 + fVar15;
      }
      if (cVar33 == '\0') {
        *(float *)pdVar10 = fVar15;
      }
      else {
        *pdVar10 = in_xd2;
      }
      pdVar4 = (double *)(*piVar6 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        fVar15 = *(float *)(pdVar4 + 1);
      }
      else {
        in_xd2 = pdVar4[1];
      }
      pdVar9 = (double *)(*(int *)pdStack_1d4 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(fVar14,*(undefined4 *)(pdVar9 + 1));
      }
      else {
        in_xd4 = pdVar9[1];
      }
      if (cVar32 == '\0') {
        fVar15 = fVar15 - SUB84(dVar22,0);
      }
      else {
        fVar15 = SUB84((double)CONCAT44(fVar27,fVar15) - dVar22,0);
      }
      pdVar5 = (double *)(*(int *)pdVar7 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar22,0));
        dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar15);
      }
      else {
        dVar22 = *pdVar9;
        dVar16 = *pdVar5;
      }
      fVar14 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar32 == '\0') {
        fVar15 = SUB84(dVar16,0) * ((float)((ulonglong)dVar16 >> 0x20) - fVar14);
      }
      else {
        fVar15 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22),0);
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar15);
      }
      else {
        dVar16 = *pdVar4;
      }
      if (cVar32 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar14,SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar22;
      }
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),SUB84(dVar11,0));
      }
      else {
        dVar11 = pdVar5[1];
      }
      fVar15 = (float)((ulonglong)dVar16 >> 0x20);
      fVar14 = -SUB84(dVar16,0);
      if (cVar32 == '\0') {
        uVar25 = SUB84(dVar11,0);
        fVar14 = ((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar22,0)) * fVar15 + fVar14;
      }
      else {
        uVar25 = SUB84(dVar11 - dVar22,0);
      }
      if (cVar33 == '\0') {
        *(float *)((int)pdVar10 + 4) = fVar14;
      }
      else {
        *(double *)((int)pdVar10 + 4) = in_xd2;
      }
      pdVar4 = (double *)(*piVar6 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        fVar14 = *(float *)pdVar4;
      }
      else {
        in_xd2 = *pdVar4;
      }
      pdVar9 = (double *)(*(int *)pdStack_1d4 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar22,0));
      }
      else {
        dVar22 = *pdVar9;
      }
      pdVar5 = (double *)(*(int *)pdVar7 * 0xc + (int)ar4);
      fVar27 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar32 == '\0') {
        fVar14 = fVar14 - fVar27;
      }
      else {
        fVar14 = SUB84((double)CONCAT44(fVar15,fVar14) - dVar22,0);
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),fVar14);
        dVar22 = (double)CONCAT44(fVar27,*(undefined4 *)((int)pdVar9 + 4));
      }
      else {
        dVar16 = *(double *)((int)pdVar5 + 4);
        in_xd4 = *(double *)((int)pdVar9 + 4);
      }
      if (cVar32 == '\0') {
        fVar14 = SUB84(dVar16,0) * ((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar22,0));
      }
      else {
        fVar14 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22),0);
      }
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),fVar14);
      }
      else {
        dVar16 = *(double *)((int)pdVar4 + 4);
      }
      if (cVar32 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar22;
      }
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar25);
      }
      else {
        dVar11 = *pdVar5;
      }
      fVar15 = (float)((ulonglong)dVar16 >> 0x20);
      fVar14 = -SUB84(dVar16,0);
      if (cVar32 == '\0') {
        uVar25 = SUB84(dVar11,0);
        fVar14 = ((float)((ulonglong)dVar11 >> 0x20) - (float)((ulonglong)dVar22 >> 0x20)) * fVar15
                 + fVar14;
      }
      else {
        uVar25 = SUB84(dVar11 - dVar22,0);
      }
      if (cVar33 == '\0') {
        *(float *)(pdVar10 + 1) = fVar14;
        fVar28 = *(float *)pdVar10;
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),fVar28);
        fVar27 = *(float *)((int)pdVar10 + 4);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),fVar27);
        dVar16 = (double)CONCAT44(fVar28,uVar25);
        fVar14 = fVar27;
      }
      else {
        pdVar10[1] = in_xd2;
        dVar16 = *pdVar10;
        in_xd2 = *(double *)((int)pdVar10 + 4);
        fVar28 = SUB84(dVar29,0);
        fVar27 = SUB84(in_dr12,0);
        in_xd12 = in_xd2;
        in_xd14 = dVar16;
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44(fVar15,fVar14 * fVar27);
      }
      else {
        dVar11 = (double)CONCAT44(fVar15,fVar14) * in_dr12;
      }
      if (cVar33 == '\0') {
        in_dr12 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),fVar27);
      }
      else {
        in_dr12 = pdVar10[1];
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)dVar16 >> 0x20) * fVar28 + SUB84(dVar11,0));
      }
      fVar14 = (float)((ulonglong)in_dr12 >> 0x20);
      in_dr0 = in_dr12;
      if (cVar33 == '\0') {
        in_dr0 = (double)CONCAT44(fVar14,SUB84(dVar16,0));
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)in_dr0 >> 0x20) * fVar14 + SUB84(dVar11,0));
      }
      dVar16 = in_xd2;
      if (cVar33 == '\0') {
        dVar16 = (double)((ulonglong)dVar22 & 0xffffffff);
      }
      uVar25 = SUB84(dVar16,0);
      pdVar4 = ar4;
      FUN_8c258030(piVar6,pdVar7,ar4,pdVar9,pdVar5);
      in_dr4 = dVar29;
      if (cVar33 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar25);
      }
      if (cVar32 == '\0') {
        in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) /
                                  (float)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr4,0));
      }
      else {
        in_dr4 = in_dr4 / in_dr0;
      }
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(undefined4 *)pdVar10);
      }
      else {
        in_xd2 = *pdVar10;
      }
      fVar14 = (float)((ulonglong)in_dr4 >> 0x20);
      if (cVar32 == '\0') {
        fVar15 = SUB84(dVar11,0) * fVar14;
      }
      else {
        fVar15 = SUB84(dVar11 * in_dr4,0);
      }
      if (cVar33 == '\0') {
        *(float *)pdVar10 = fVar15;
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar15);
      }
      else {
        *pdVar10 = in_xd2;
        in_dr2 = *(double *)((int)pdVar10 + 4);
      }
      if (cVar32 == '\0') {
        in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) * fVar14,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = in_dr2 * in_dr4;
      }
      uVar25 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar33 == '\0') {
        *(undefined4 *)((int)pdVar10 + 4) = uVar25;
        in_dr2 = (double)CONCAT44(uVar25,*(undefined4 *)(pdVar10 + 1));
      }
      else {
        *(double *)((int)pdVar10 + 4) = in_dr2;
        in_xd2 = pdVar10[1];
      }
      if (cVar32 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * fVar14);
      }
      else {
        in_dr2 = in_dr2 * in_dr4;
      }
      if (cVar33 == '\0') {
        *(int *)(pdVar10 + 1) = SUB84(in_dr2,0);
      }
      else {
        pdVar10[1] = in_xd2;
      }
      pdStack_1d4 = pdStack_1d4 + 2;
    }
    piStack_1b4 = aiStack_194;
    for (iStack_1d8 = 0; iStack_1d8 < 6; iStack_1d8 = iStack_1d8 + 1) {
      bVar31 = true;
      iVar2 = iStack_1d8 * 0xc;
      pdVar10 = (double *)(iVar2 + (int)auStack_108);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr4,0));
      }
      else {
        dVar22 = *pdVar10;
      }
      pdVar7 = (double *)(*(int *)(adStack_c0 + iStack_1d8 * 2) * 0xc + (int)ar4);
      fVar14 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(fVar14,*(undefined4 *)pdVar7);
        dVar16 = (double)CONCAT44(fVar14,*(undefined4 *)(auStack_108 + iVar2 + 4));
        dVar11 = in_xd4;
      }
      else {
        dVar11 = *(double *)(auStack_108 + iVar2 + 4);
        in_xd2 = *pdVar7;
        dVar16 = dVar22;
      }
      if (cVar32 == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 * dVar22;
      }
      fVar15 = SUB84(dVar16,0);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)((int)pdVar7 + 4))
        ;
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar15);
      }
      else {
        in_xd2 = *(double *)((int)pdVar7 + 4);
      }
      if (cVar32 == '\0') {
        dVar22 = (double)CONCAT44(-(float)((ulonglong)dVar22 >> 0x20) -
                                  SUB84(in_dr0,0) * SUB84(dVar22,0),SUB84(dVar22,0));
      }
      else {
        dVar22 = -dVar22 - in_dr0 * dVar22;
      }
      if (cVar33 == '\0') {
        uVar25 = *(undefined4 *)((int)adStack_100 + iVar2);
        in_dr6 = (double)CONCAT44(uVar25,SUB84(in_dr6,0));
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar7 + 1));
        dVar12 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uVar25);
      }
      else {
        in_dr6 = *(double *)((int)adStack_100 + iVar2);
        in_xd2 = pdVar7[1];
        uVar25 = (undefined4)((ulonglong)in_dr6 >> 0x20);
        dVar12 = *(double *)((int)ar5 + 4);
      }
      if (cVar32 == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0) * SUB84(dVar22,0)
                                 );
      }
      else {
        dVar12 = dVar12 * dVar22;
      }
      dVar23 = dVar11;
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar15);
        dVar23 = in_xd2;
      }
      if (cVar32 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) * (float)((ulonglong)dVar12 >> 0x20));
      }
      else {
        dVar22 = dVar22 * dVar12;
      }
      if (cVar33 == '\0') {
        in_dr6 = (double)CONCAT44(uVar25,*(undefined4 *)ar5);
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(in_dr8,0));
        dVar12 = (double)CONCAT44(fVar14,SUB84(dVar12,0));
      }
      else {
        in_xd6 = *ar5;
        dVar26 = dVar22;
        dVar12 = dVar16;
      }
      if (cVar32 == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - SUB84(dVar12,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar12;
      }
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),SUB84(dVar22,0));
      }
      else {
        dVar22 = ar5[1];
      }
      if (cVar32 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  (float)((ulonglong)dVar12 >> 0x20) * SUB84(in_dr6,0) +
                                  SUB84(dVar22,0));
      }
      fVar27 = (float)((ulonglong)in_dr6 >> 0x20);
      dVar13 = in_dr6;
      if (cVar33 == '\0') {
        dVar13 = (double)CONCAT44(fVar27,SUB84(dVar12,0));
      }
      if (cVar32 == '\0') {
        dVar22 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar13 >> 0x20) *
                                (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
      }
      in_dr8 = dVar23;
      dVar12 = dVar16;
      if (cVar33 == '\0') {
        in_dr8 = (double)CONCAT44(SUB84(dVar22,0),SUB84(dVar26,0));
        dVar12 = (double)CONCAT44(fVar14,SUB84(dVar13,0));
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar22,0));
      }
      fVar28 = (float)((ulonglong)dVar26 >> 0x20);
      if (cVar32 == '\0') {
        in_dr8 = (double)CONCAT44((float)((ulonglong)in_dr8 >> 0x20) + fVar28,SUB84(in_dr8,0));
      }
      else {
        in_dr8 = in_dr8 + dVar26;
      }
      dVar22 = dVar11;
      if (cVar33 == '\0') {
        dVar26 = (double)CONCAT44(fVar28,fVar15);
        dVar22 = dVar23;
      }
      if (cVar32 == '\0') {
        in_dr8 = (double)CONCAT44(-(float)((ulonglong)in_dr8 >> 0x20),SUB84(in_dr8,0));
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                  (float)((ulonglong)dVar12 >> 0x20) * fVar14 +
                                  SUB84(dVar26,0) * fVar15);
      }
      else {
        dVar26 = dVar26 * dVar16;
        in_dr8 = -in_dr8;
      }
      in_xd4 = in_dr8;
      dVar23 = in_dr6;
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44(fVar14,(int)((ulonglong)in_dr8 >> 0x20));
        in_xd4 = dVar11;
        dVar23 = (double)CONCAT44(fVar27,SUB84(dVar12,0));
      }
      if (cVar32 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                  (float)((ulonglong)dVar23 >> 0x20) * fVar27 + SUB84(dVar26,0));
      }
      dVar11 = dVar16;
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar23,0));
      }
      if (cVar32 == '\0') {
        fVar14 = SUB84(dVar16,0) / SUB84(dVar26,0);
        in_dr6 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar11 >> 0x20) * fVar14 + SUB84(in_dr6,0));
      }
      else {
        fVar14 = SUB84(dVar16 / dVar26,0);
      }
      if (cVar33 == '\0') {
        uStack_180 = SUB84(in_dr6,0);
        uVar17 = CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)(auStack_108 + iVar2 + 4));
        dVar16 = (double)CONCAT44(fVar14,SUB84(dVar11,0));
      }
      else {
        uStack_180 = SUB84(in_xd6,0);
        dVar22 = *(double *)(auStack_108 + iVar2 + 4);
        uVar17 = *(undefined8 *)((int)ar5 + 4);
        dVar16 = in_xd4;
      }
      fVar15 = (float)((ulonglong)dVar16 >> 0x20);
      if (cVar32 == '\0') {
        uVar17 = CONCAT44(fVar15 * (float)uVar17 + (float)((ulonglong)uVar17 >> 0x20),(float)uVar17)
        ;
      }
      if (cVar33 == '\0') {
        uStack_17c = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar18 = CONCAT44(*(undefined4 *)((int)adStack_100 + iVar2),*(undefined4 *)(ar5 + 1));
      }
      else {
        uStack_17c = (undefined4)uVar17;
        uVar18 = *(ulonglong *)((int)adStack_100 + iVar2);
        dVar22 = ar5[1];
      }
      if (cVar32 == '\0') {
        uVar18 = (ulonglong)(uint)(fVar15 * (float)(uVar18 >> 0x20) + (float)uVar18);
      }
      uStack_178 = (undefined4)uVar18;
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(dVar16,0));
        in_xd2 = (double)CONCAT44(uStack_17c,SUB84(in_dr12,0));
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uStack_180);
      }
      else {
        uStack_178 = SUB84(dVar22,0);
        fStack_174 = (float)((ulonglong)dVar22 >> 0x20);
        dVar16 = *(double *)((int)ar5 + 4);
        in_xd2 = (double)CONCAT44(uStack_178,uStack_17c);
        in_xd14 = (double)CONCAT44(uStack_17c,uStack_180);
      }
      if (cVar32 == '\0') {
        in_xd2 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) -
                                  (float)((ulonglong)dVar16 >> 0x20),SUB84(in_xd2,0));
      }
      else {
        in_xd2 = in_xd2 - dVar16;
      }
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)ar5);
      }
      else {
        dVar22 = *ar5;
        dVar11 = ar5[1];
      }
      if (cVar32 == '\0') {
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) - SUB84(dVar11,0)
                                 );
      }
      else {
        dVar29 = dVar29 - dVar11;
      }
      fVar15 = (float)((ulonglong)in_xd2 >> 0x20);
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar15);
        in_xd2 = dVar22;
        dVar22 = (double)CONCAT44(fVar15,uStack_178);
      }
      else {
        in_xd12 = (double)CONCAT44(fStack_174,uStack_178);
        dVar22 = in_xd2;
      }
      if (cVar32 == '\0') {
        fVar27 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar27,SUB84(dVar11,0) * fVar15);
        fVar27 = SUB84(dVar22,0) - fVar27;
      }
      else {
        dVar11 = dVar11 * dVar22;
        fVar27 = SUB84(dVar22 - dVar11,0);
      }
      dVar22 = in_xd14;
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(SUB84(dVar29,0),SUB84(dVar16,0));
      }
      if (cVar32 == '\0') {
        dVar11 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar29,0) +
                               SUB84(dVar11,0));
      }
      dVar16 = in_xd12;
      if (cVar33 == '\0') {
        dVar16 = (double)CONCAT44(fVar27,SUB84(dVar22,0));
      }
      if (cVar32 == '\0') {
        dVar11 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar16 >> 0x20) * fVar27 + SUB84(dVar11,0));
      }
      dVar22 = in_xd2;
      if (cVar33 == '\0') {
        dVar22 = (double)(ulonglong)(uint)fVar14;
      }
      FUN_8c258030(pdVar10,pdVar7,pdVar4,pdVar9);
      pdStack_1d4 = (double *)piStack_1b4;
      dVar12 = dVar16;
      dVar23 = dVar16;
      if (cVar33 == '\0') {
        uVar25 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar12 = (double)CONCAT44(uVar25,uVar25);
        dVar23 = in_xd12;
      }
      in_xd12 = dVar23;
      ain0 = afStack_168 + iStack_1d8 * 4;
      iVar2 = iStack_1d8 * 0x10 + -0xc0;
      if (cVar32 == '\0') {
        dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar12,0),
                                  SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 * dVar12;
      }
      while( true ) {
        uVar21 = SUB84(dVar22,0);
        uVar24 = SUB84(in_dr6,0);
        uVar25 = SUB84(dVar11,0);
        if (cVar33 == '\0') {
          dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),0x3ccccccd);
        }
        else {
          in_xd14 = -1.5763811764977282e-226;
        }
        if (&iStack_184 <= pdStack_1d4) break;
        FUN_8c0107a0(0x14,aiStack_194,&DAT_8c26d940);
        iVar3 = *(int *)pdStack_1d4;
        pdVar10 = (double *)((int)adStack_c0 + iVar3 * 4 + iVar2 + 0xc0);
        piVar6 = (int *)((int)adStack_c0 + *(int *)((int)pdStack_1d4 + 4) * 4 + iVar2 + 0xc0);
        pdVar4 = (double *)(*(int *)pdVar10 * 0xc + (int)ar4);
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar25);
        }
        else {
          dVar22 = *pdVar4;
        }
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    *(undefined4 *)(*piVar6 * 0xc + (int)ar4));
        }
        else {
          in_xd2 = *(double *)(*piVar6 * 0xc + (int)ar4);
        }
        if (cVar32 == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        fStack_1ac = SUB84(dVar22,0);
        if (cVar33 == '\0') {
          fStack_1ac = (float)((ulonglong)dVar22 >> 0x20);
        }
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)((int)ar4 + *(int *)pdVar10 * 0xc + 4),
                                    *(undefined4 *)((int)ar4 + *piVar6 * 0xc + 4));
        }
        else {
          dVar22 = *(double *)((int)ar4 + *(int *)pdVar10 * 0xc + 4);
          in_xd2 = *(double *)((int)ar4 + *piVar6 * 0xc + 4);
        }
        if (cVar32 == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        if (cVar33 == '\0') {
          fStack_1a8 = (float)((ulonglong)dVar22 >> 0x20);
        }
        else {
          fStack_1a8 = SUB84(dVar22,0);
        }
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)((int)ar4 + *(int *)pdVar10 * 0xc + 8),
                                    *(undefined4 *)((int)ar4 + *piVar6 * 0xc + 8));
        }
        else {
          in_xd2 = *(double *)((int)ar4 + *piVar6 * 0xc + 8);
          dVar22 = *(double *)((int)ar4 + *(int *)pdVar10 * 0xc + 8);
        }
        if (cVar32 == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        fVar14 = (float)((ulonglong)dVar22 >> 0x20);
        fStack_1a4 = fVar14;
        if (cVar33 != '\0') {
          fStack_1a4 = SUB84(dVar22,0);
          fStack_1a0 = fVar14;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uStack_17c);
          in_dr6 = (double)CONCAT44(fStack_1a8,uVar24);
        }
        else {
          in_dr6 = (double)CONCAT44(fStack_1a4,fStack_1a8);
        }
        if (cVar33 == '\0') {
          dVar22 = (double)(ulonglong)uStack_180;
        }
        else {
          in_xd2 = (double)CONCAT44(uStack_17c,uStack_180);
        }
        pdVar7 = (double *)(*(int *)pdVar10 * 0xc + (int)ar4);
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44(fStack_1ac,uVar21);
          dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar22,0));
          in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)pdVar7);
        }
        else {
          dVar11 = (double)CONCAT44(fStack_1a8,fStack_1ac);
          dVar22 = *(double *)((int)pdVar7 + 4);
          in_xd6 = *pdVar7;
        }
        if (cVar32 == '\0') {
          fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar22 >> 0x20);
        }
        else {
          fVar14 = SUB84(dVar16 - dVar22,0);
        }
        fVar15 = (float)((ulonglong)in_dr6 >> 0x20);
        dVar16 = in_dr6;
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(fVar15,SUB84(dVar22,0));
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    SUB84(dVar16,0) - SUB84(in_dr6,0));
        }
        else {
          dVar16 = dVar16 - in_dr6;
        }
        uVar25 = (undefined4)((ulonglong)dVar11 >> 0x20);
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44(uVar25,fStack_1a4);
          dVar22 = (double)CONCAT44(uVar25,fVar14);
        }
        else {
          in_xd4 = (double)CONCAT44(fStack_1a0,fStack_1a4);
          dVar22 = dVar11;
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar22,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar22;
        }
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar7 + 1));
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar16,0) +
                                    (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
        }
        fVar14 = SUB84(dVar11,0);
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uStack_178);
          dVar22 = (double)CONCAT44(fVar14,SUB84(dVar22,0));
        }
        else {
          in_xd2 = (double)CONCAT44(fStack_174,uStack_178);
          dVar22 = in_xd4;
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    SUB84(dVar16,0) - SUB84(dVar22,0));
        }
        else {
          dVar16 = dVar16 - dVar22;
        }
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar15);
        }
        if (cVar32 == '\0') {
          fVar15 = SUB84(dVar22,0) * fVar15;
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar16,0) +
                                    (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
        }
        else {
          fVar15 = SUB84(dVar22 * in_dr6,0);
        }
        fVar27 = (float)((ulonglong)dVar11 >> 0x20);
        dVar22 = dVar11;
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44(fVar27,fVar15);
        }
        if (cVar32 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) * fVar27 + SUB84(dVar22,0));
        }
        dVar23 = in_xd4;
        if (cVar33 == '\0') {
          dVar23 = (double)CONCAT44(fVar14,SUB84(dVar22,0));
        }
        if (cVar32 == '\0') {
          dVar23 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar23 >> 0x20) * fVar14 + SUB84(dVar23,0));
        }
        dVar22 = dVar11;
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44(fVar27,SUB84(dVar23,0));
          dVar22 = (double)CONCAT44(fVar27,(int)((ulonglong)dVar16 >> 0x20));
          dVar16 = in_xd4;
        }
        in_xd4 = dVar16;
        if (cVar32 == '\0') {
          fVar14 = SUB84(dVar22,0) / SUB84(dVar11,0);
          in_dr6 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar11 >> 0x20) * fVar14 + SUB84(in_dr6,0));
        }
        else {
          fVar14 = SUB84(dVar22 / dVar11,0);
        }
        if (cVar33 == '\0') {
          fStack_1a0 = SUB84(in_dr6,0);
          dVar22 = (double)CONCAT44(fVar14,SUB84(dVar11,0));
        }
        else {
          fStack_1a0 = SUB84(in_xd6,0);
          dVar22 = in_xd4;
        }
        if (cVar33 == '\0') {
          fStack_19c = *(float *)((int)ar4 + *(int *)pdVar10 * 0xc + 4);
        }
        else {
          in_xd2 = *(double *)((int)ar4 + *(int *)pdVar10 * 0xc + 4);
          fStack_19c = fStack_1a8;
          fStack_1a8 = fStack_1a4;
        }
        fVar15 = (float)((ulonglong)dVar22 >> 0x20);
        if (cVar32 == '\0') {
          fStack_19c = fVar15 * fStack_1a8 + fStack_19c;
        }
        if (cVar33 != '\0') {
          fStack_19c = SUB84(in_xd2,0);
        }
        if (cVar33 == '\0') {
          fStack_198 = *(float *)((int)ar4 + *(int *)pdVar10 * 0xc + 8);
        }
        else {
          in_xd2 = *(double *)((int)ar4 + *(int *)pdVar10 * 0xc + 8);
          fStack_198 = fStack_1a4;
          fStack_1a4 = fStack_1a0;
        }
        if (cVar32 == '\0') {
          fStack_198 = fVar15 * fStack_1a4 + fStack_198;
        }
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(fStack_1a0,uStack_180);
        }
        else {
          fStack_198 = SUB84(in_xd2,0);
          aiStack_194[0] = (int)((ulonglong)in_xd2 >> 0x20);
          dVar16 = (double)CONCAT44(fStack_19c,fStack_1a0);
          in_xd2 = (double)CONCAT44(uStack_17c,uStack_180);
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar33 == '\0') {
          fStack_1ac = (float)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(fStack_19c,uStack_17c);
        }
        else {
          fStack_1ac = SUB84(dVar16,0);
          dVar16 = (double)CONCAT44(fStack_198,fStack_19c);
          in_xd2 = (double)CONCAT44(uStack_178,uStack_17c);
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar33 == '\0') {
          fStack_1a8 = (float)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(fStack_198,uStack_178);
        }
        else {
          fStack_1a8 = SUB84(dVar16,0);
          dVar16 = (double)CONCAT44(aiStack_194[0],fStack_198);
          in_xd2 = (double)CONCAT44(fStack_174,uStack_178);
        }
        if (cVar32 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        fVar15 = (float)((ulonglong)dVar16 >> 0x20);
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(fStack_1a8,fStack_1a8);
          fVar27 = fStack_1ac;
          fStack_1a4 = fVar15;
          fVar15 = SUB84(dVar22,0);
        }
        else {
          fStack_1a4 = SUB84(dVar16,0);
          dVar16 = (double)CONCAT44(fStack_1a4,fStack_1a8);
          in_xd2 = dVar16;
          fVar27 = fStack_1a8;
          fStack_1a0 = fVar15;
          fVar15 = fStack_1ac;
        }
        if (cVar32 == '\0') {
          fVar28 = fStack_1a8 * (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar28 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44(fStack_1a4,fVar28);
          fVar15 = fStack_1ac;
        }
        else {
          dVar11 = (double)CONCAT44(fStack_1a0,fStack_1a4);
        }
        if (cVar32 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                    fVar27 * fVar15 + SUB84(dVar11,0));
        }
        piVar19 = (int *)((ulonglong)dVar11 >> 0x20);
        dVar16 = dVar11;
        piVar6 = piVar19;
        if (cVar33 == '\0') {
          dVar16 = (double)CONCAT44(piVar19,piVar19);
          piVar6 = piStack_1b4;
        }
        piStack_1b4 = piVar6;
        if (cVar32 == '\0') {
          dVar11 = (double)CONCAT44(piVar19,(float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar16,0) +
                                            SUB84(dVar11,0));
        }
        dVar22 = in_xd2;
        if (cVar33 == '\0') {
          dVar22 = (double)(ulonglong)(uint)fVar14;
        }
        uVar25 = SUB84(dVar22,0);
        pdVar4 = ar4;
        pdVar9 = ar4;
        FUN_8c258030(pdVar10,pdVar7,ar4,ar4,ain0);
        dVar22 = dVar29;
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar25);
        }
        if (cVar32 == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) /
                                    (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 / dVar16;
        }
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fStack_1ac);
        }
        else {
          in_xd2 = (double)CONCAT44(fStack_1a8,fStack_1ac);
        }
        fVar14 = (float)((ulonglong)dVar22 >> 0x20);
        if (cVar32 == '\0') {
          fStack_1ac = SUB84(dVar11,0) * fVar14;
        }
        else {
          fStack_1ac = SUB84(dVar11 * dVar22,0);
        }
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44(fStack_1a8,fStack_1ac);
        }
        else {
          fStack_1ac = SUB84(in_xd2,0);
          fStack_1a8 = (float)((ulonglong)in_xd2 >> 0x20);
          dVar11 = (double)CONCAT44(fStack_1a4,fStack_1a8);
        }
        if (cVar32 == '\0') {
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * fVar14,SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 * dVar22;
        }
        uVar20 = (uint)((ulonglong)dVar11 >> 0x20);
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44(uVar20,fStack_1a4);
          fStack_1a8 = (float)uVar20;
        }
        else {
          fStack_1a8 = SUB84(dVar11,0);
          in_xd2 = (double)CONCAT44(fStack_1a0,uVar20);
        }
        if (cVar32 == '\0') {
          fVar14 = SUB84(dVar11,0) * fVar14;
        }
        else {
          fVar14 = SUB84(dVar11 * dVar22,0);
        }
        if (cVar33 != '\0') {
          fStack_1a4 = SUB84(in_xd2,0);
          fStack_1a0 = (float)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = (double)CONCAT44(fStack_1a8,fStack_1ac);
          fStack_1ac = fVar14;
          fVar14 = fStack_1a4;
        }
        pdVar5 = (double *)((int)ain0[iVar3] * 0xc + (int)auStack_108);
        if (cVar33 == '\0') {
          dVar11 = (double)CONCAT44(*(undefined4 *)pdVar5,fStack_1ac);
        }
        else {
          dVar11 = *pdVar5;
        }
        fVar15 = SUB84(dVar29,0);
        if (cVar32 == '\0') {
          fVar27 = ABS((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0));
          dVar11 = (double)CONCAT44(fVar27,SUB84(dVar11,0));
          bVar30 = fVar15 < fVar27;
        }
        else {
          dVar11 = ABS(dVar11 - dVar11);
          bVar30 = dVar29 < dVar11;
        }
        if (bVar30) {
LAB_8c233baa:
          if (cVar33 == '\0') {
            dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                      *(undefined4 *)((int)ar5 + 0xc));
          }
          else {
            in_xd2 = *(double *)((int)ar5 + 0xc);
          }
          if (cVar32 == '\0') {
            bVar30 = SUB84(dVar11,0) < SUB84(dVar12,0);
          }
          else {
            bVar30 = dVar11 < dVar12;
          }
          if (!bVar30) {
            if (cVar33 == '\0') {
              fVar14 = *(float *)((int)ar5 + 0xc);
              dVar16 = (double)CONCAT44(fStack_19c,SUB84(dVar16,0));
              dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar14);
              dVar22 = (double)CONCAT44(fVar14,SUB84(dVar22,0));
            }
            else {
              in_xd2 = *(double *)((int)ar5 + 0xc);
              dVar16 = (double)CONCAT44(fStack_198,fStack_19c);
              fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
              dVar22 = in_xd2;
            }
            if (cVar32 == '\0') {
              fVar14 = SUB84(dVar11,0) * fVar14;
            }
            else {
              fVar14 = SUB84(dVar11 * dVar22,0);
            }
            if (cVar33 == '\0') {
              in_dr6 = (double)CONCAT44(uStack_180,uStack_17c);
            }
            else {
              in_xd6 = (double)CONCAT44(uStack_178,uStack_17c);
              in_dr6 = (double)CONCAT44(uStack_17c,uStack_180);
            }
            if (cVar32 == '\0') {
              in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                        SUB84(in_dr6,0) - (float)((ulonglong)dVar16 >> 0x20));
            }
            else {
              in_dr6 = in_dr6 - dVar16;
            }
            if (cVar33 == '\0') {
              dVar23 = (double)CONCAT44(uStack_178,fVar14);
            }
            else {
              dVar23 = (double)CONCAT44(fStack_174,uStack_178);
              in_xd4 = in_xd2;
            }
            if (cVar32 == '\0') {
              dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                        SUB84(dVar23,0) - (float)((ulonglong)dVar12 >> 0x20));
            }
            else {
              dVar23 = dVar23 - dVar12;
            }
            if (cVar33 == '\0') {
              dVar11 = (double)CONCAT44(fStack_198,fStack_1a0);
              dVar22 = in_xd2;
            }
            else {
              dVar22 = (double)CONCAT44(fStack_19c,fStack_1a0);
              dVar11 = (double)CONCAT44(aiStack_194[0],fStack_198);
            }
            if (cVar32 == '\0') {
              in_dr6 = (double)CONCAT44((float)((ulonglong)in_dr6 >> 0x20) - SUB84(dVar11,0),
                                        SUB84(in_dr6,0));
            }
            else {
              in_dr6 = in_dr6 - dVar11;
            }
            in_xd2 = in_xd6;
            if (cVar33 == '\0') {
              dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(in_dr6,0));
              in_xd2 = dVar22;
            }
            if (cVar32 == '\0') {
              fVar14 = (float)((ulonglong)dVar11 >> 0x20);
              dVar11 = (double)CONCAT44(fVar14,SUB84(dVar11,0) * SUB84(in_dr6,0));
              dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - fVar14,SUB84(dVar23,0))
              ;
            }
            else {
              dVar11 = dVar11 * in_dr6;
              dVar23 = dVar23 - dVar11;
            }
            fVar14 = (float)((ulonglong)in_dr6 >> 0x20);
            dVar22 = in_dr6;
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44(fVar14,SUB84(dVar16,0));
            }
            if (cVar32 == '\0') {
              dVar11 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar22 >> 0x20) * fVar14 + SUB84(dVar11,0))
              ;
            }
            fVar14 = (float)((ulonglong)dVar23 >> 0x20);
            dVar16 = dVar23;
            if (cVar33 == '\0') {
              dVar16 = (double)CONCAT44(fVar14,SUB84(dVar22,0));
            }
            if (cVar32 == '\0') {
              dVar11 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar16 >> 0x20) * fVar14 + SUB84(dVar11,0))
              ;
            }
            dVar22 = in_xd2;
            if (cVar33 == '\0') {
              dVar22 = (double)CONCAT44(SUB84(dVar11,0),SUB84(dVar23,0));
            }
            if (cVar32 != '\0' || (float)((ulonglong)dVar22 >> 0x20) <= SUB84(dVar22,0))
            goto LAB_8c233bf0;
          }
          bVar31 = false;
        }
        else {
          if (cVar33 == '\0') {
            dVar11 = (double)(ulonglong)(uint)fStack_1a8;
          }
          else {
            in_xd2 = (double)CONCAT44(fVar14,fStack_1a8);
          }
          if (cVar33 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)(auStack_108 + (int)ain0[iVar3] * 0xc + 4),
                                      SUB84(dVar11,0));
          }
          else {
            dVar11 = *(double *)(auStack_108 + (int)ain0[iVar3] * 0xc + 4);
          }
          if (cVar32 == '\0') {
            fVar27 = ABS((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0));
            dVar11 = (double)CONCAT44(fVar27,SUB84(dVar11,0));
            bVar30 = fVar15 < fVar27;
          }
          else {
            dVar11 = ABS(dVar11 - dVar11);
            bVar30 = dVar29 < dVar11;
          }
          if (bVar30) goto LAB_8c233baa;
          if (cVar33 == '\0') {
            dVar11 = (double)(ulonglong)(uint)fVar14;
          }
          else {
            in_xd2 = (double)CONCAT44(fStack_1a0,fVar14);
          }
          if (cVar33 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)((int)adStack_100 + (int)ain0[iVar3] * 0xc),
                                      SUB84(dVar11,0));
          }
          else {
            dVar11 = *(double *)((int)adStack_100 + (int)ain0[iVar3] * 0xc);
          }
          if (cVar32 == '\0') {
            fVar14 = ABS((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0));
            dVar11 = (double)CONCAT44(fVar14,SUB84(dVar11,0));
            bVar30 = fVar15 < fVar14;
          }
          else {
            dVar11 = ABS(dVar11 - dVar11);
            fVar14 = (float)((ulonglong)dVar11 >> 0x20);
            bVar30 = dVar29 < dVar11;
          }
          if (bVar30) goto LAB_8c233baa;
          if (cVar33 == '\0') {
            dVar11 = (double)CONCAT44(fVar14,*(undefined4 *)((int)ar5 + 0xc));
          }
          else {
            in_xd2 = *(double *)((int)ar5 + 0xc);
          }
          if (cVar32 == '\0') {
            bVar30 = SUB84(dVar11,0) < SUB84(dVar12,0);
          }
          else {
            bVar30 = dVar11 < dVar12;
          }
          if (bVar30) goto LAB_8c233baa;
        }
LAB_8c233bf0:
        pdStack_1d4 = (double *)((int)pdStack_1d4 + 4);
      }
      if (bVar31) {
        return 1;
      }
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44(uStack_180,*(undefined4 *)ar5);
      }
      else {
        in_xd2 = *ar5;
        dVar11 = (double)CONCAT44(uStack_17c,uStack_180);
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      if (cVar33 == '\0') {
        fStack_174 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(uStack_17c,*(undefined4 *)((int)ar5 + 4));
      }
      else {
        fStack_174 = SUB84(dVar11,0);
        dVar11 = (double)CONCAT44(uStack_178,uStack_17c);
        in_xd2 = *(double *)((int)ar5 + 4);
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      if (cVar33 == '\0') {
        fStack_170 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(uStack_178,*(undefined4 *)(ar5 + 1));
      }
      else {
        fStack_170 = SUB84(dVar11,0);
        dVar11 = (double)CONCAT44(fStack_174,uStack_178);
        in_xd2 = ar5[1];
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      fVar14 = (float)((ulonglong)dVar11 >> 0x20);
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44(fVar14,fStack_170);
        in_dr12 = (double)CONCAT44(fStack_174,SUB84(dVar12,0));
        dVar16 = (double)CONCAT44(fStack_170,SUB84(dVar16,0));
        fVar15 = fStack_170;
        fStack_16c = fVar14;
      }
      else {
        fStack_16c = SUB84(dVar11,0);
        dVar16 = (double)CONCAT44(fStack_16c,fStack_170);
        in_dr12 = (double)CONCAT44(fStack_170,fStack_174);
        fVar15 = fStack_16c;
        in_xd2 = dVar16;
        afStack_168[0] = fVar14;
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  fVar15 * (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        dVar11 = dVar11 * dVar16;
      }
      uVar25 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      if (cVar33 == '\0') {
        in_dr12 = (double)CONCAT44(uVar25,fStack_16c);
        dVar16 = (double)CONCAT44(uVar25,SUB84(dVar16,0));
      }
      else {
        in_xd12 = (double)CONCAT44(afStack_168[0],fStack_16c);
        dVar16 = in_dr12;
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)dVar16 >> 0x20) *
                                  (float)((ulonglong)in_dr12 >> 0x20) + SUB84(dVar11,0));
      }
      in_dr0 = in_xd12;
      if (cVar33 == '\0') {
        in_dr0 = (double)CONCAT44(SUB84(in_dr12,0),SUB84(dVar16,0));
      }
      if (cVar32 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  (float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr12,0) +
                                  SUB84(dVar11,0));
      }
      dVar16 = in_xd2;
      if (cVar33 == '\0') {
        dVar16 = (double)((ulonglong)dVar22 & 0xffffffff);
      }
      uVar25 = SUB84(dVar16,0);
      FUN_8c258030(pdVar10,pdVar7,pdVar4,pdVar9);
      in_dr4 = dVar29;
      if (cVar33 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar25);
      }
      if (cVar32 == '\0') {
        in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) /
                                  (float)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr4,0));
      }
      else {
        in_dr4 = in_dr4 / in_dr0;
      }
      if (cVar33 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fStack_174);
      }
      else {
        in_xd2 = (double)CONCAT44(fStack_170,fStack_174);
      }
      fVar14 = (float)((ulonglong)in_dr4 >> 0x20);
      if (cVar32 == '\0') {
        fStack_174 = SUB84(dVar11,0) * fVar14;
      }
      else {
        fStack_174 = SUB84(dVar11 * in_dr4,0);
      }
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(fStack_170,fStack_174);
      }
      else {
        fStack_174 = SUB84(in_xd2,0);
        fStack_170 = (float)((ulonglong)in_xd2 >> 0x20);
        dVar22 = (double)CONCAT44(fStack_16c,fStack_170);
      }
      if (cVar32 == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar14,SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 * in_dr4;
      }
      uVar25 = (undefined4)((ulonglong)dVar22 >> 0x20);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(uVar25,fStack_16c);
        fStack_170 = (float)uVar25;
      }
      else {
        fStack_170 = SUB84(dVar22,0);
        in_xd2 = (double)CONCAT44(afStack_168[0],uVar25);
      }
      if (cVar32 == '\0') {
        fVar14 = SUB84(dVar22,0) * fVar14;
      }
      else {
        fVar14 = SUB84(dVar22 * in_dr4,0);
      }
      fVar15 = fStack_174;
      fStack_16c = fVar14;
      if (cVar33 != '\0') {
        fStack_16c = SUB84(in_xd2,0);
        afStack_168[0] = (float)((ulonglong)in_xd2 >> 0x20);
        in_xd2 = (double)CONCAT44(fStack_170,fStack_174);
        fVar15 = fVar14;
      }
      pdVar10 = (double *)(iStack_1d8 * 0xc + (int)auStack_108);
      if (cVar33 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)pdVar10,fVar15);
      }
      else {
        dVar22 = *pdVar10;
      }
      fVar14 = SUB84(dVar29,0);
      if (cVar32 == '\0') {
        fVar15 = ABS((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0));
        dVar22 = (double)CONCAT44(fVar15,SUB84(dVar22,0));
        bVar31 = fVar14 < fVar15;
      }
      else {
        dVar22 = ABS(dVar22 - dVar22);
        bVar31 = dVar29 < dVar22;
      }
      if (bVar31) {
LAB_8c233cbe:
        bVar1 = false;
      }
      else {
        fVar15 = fStack_170;
        if (cVar33 != '\0') {
          in_xd2 = (double)CONCAT44(fStack_16c,fStack_170);
          fVar15 = (float)SUB84(dVar22,0);
        }
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(auStack_108 + iStack_1d8 * 0xc + 4),fVar15);
        }
        else {
          dVar22 = *(double *)(auStack_108 + iStack_1d8 * 0xc + 4);
        }
        if (cVar32 == '\0') {
          fVar15 = ABS((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0));
          dVar22 = (double)CONCAT44(fVar15,SUB84(dVar22,0));
          bVar31 = fVar14 < fVar15;
        }
        else {
          dVar22 = ABS(dVar22 - dVar22);
          bVar31 = dVar29 < dVar22;
        }
        if (bVar31) goto LAB_8c233cbe;
        fVar15 = fStack_16c;
        if (cVar33 != '\0') {
          in_xd2 = (double)CONCAT44(afStack_168[0],fStack_16c);
          fVar15 = SUB84(dVar22,0);
        }
        if (cVar33 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)((int)adStack_100 + iStack_1d8 * 0xc),fVar15);
        }
        else {
          dVar22 = *(double *)((int)adStack_100 + iStack_1d8 * 0xc);
        }
        if (cVar32 == '\0') {
          bVar31 = fVar14 < ABS((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0));
        }
        else {
          bVar31 = dVar29 < ABS(dVar22 - dVar22);
        }
        if (bVar31) goto LAB_8c233cbe;
      }
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c2336e8\n.set _FUN_8c2336e8, _FUN_8c2336e8_def\n");
