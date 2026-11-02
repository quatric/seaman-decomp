#include "../decls.h"
int FUN_8c23e7a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *unaff_r8;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  double in_dr0;
  double dVar12;
  undefined4 uVar13;
  float fVar14;
  uint uVar15;
  double in_dr2;
  double dVar16;
  double dVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  float fVar20;
  double in_dr4;
  double dVar21;
  double in_dr6;
  double in_xd2;
  double in_xd4;
  char cVar22;
  char cVar23;
  double *pdStack_40;
  double *pdStack_38;
  int aiStack_28 [4];
  
  cVar23 = '\0';
  cVar22 = '\0';
  iVar8 = 0;
  aiStack_28[0] = ar4;
  aiStack_28[1] = ar5;
  aiStack_28[2] = ar6;
  pdStack_40 = (double *)&DAT_8c4c2620;
  pdStack_38 = (double *)&DAT_8c4c2620;
  piVar11 = aiStack_28;
  do {
    uVar13 = SUB84(in_dr2,0);
    if (*(uint *)(aiStack_28[iVar8] + 0x3c) == (uint)(ushort)ar7) {
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 0x20);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)pdStack_40 = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 0x20);
        *pdStack_40 = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 0x24);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)((int)pdStack_40 + 4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 0x24);
        *(double *)((int)pdStack_40 + 4) = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 0x28);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(pdStack_40 + 1) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 0x28);
        pdStack_40[1] = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 0x2c);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)((int)pdStack_40 + 0xc) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 0x2c);
        *(double *)((int)pdStack_40 + 0xc) = in_xd2;
      }
    }
    else {
      piVar9 = aiStack_28 + iVar8;
      FUN_8c23bae2(pdStack_38,*piVar9 + 0x10,*piVar9 + 0x30,(ushort)ar7 & 0x8000);
      *(uint *)(*piVar9 + 0x3c) = (uint)(ushort)ar7;
      if (cVar23 == '\0') {
        uVar13 = *(undefined4 *)pdStack_38;
      }
      else {
        in_xd2 = *pdStack_38;
      }
      if (cVar23 == '\0') {
        *(undefined4 *)(*piVar9 + 0x20) = uVar13;
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdStack_38 + 4),
                                  *(undefined4 *)((int)pdStack_38 + 0x14));
      }
      else {
        *(double *)(*piVar9 + 0x20) = in_xd2;
        in_xd2 = *(double *)((int)pdStack_38 + 0x14);
        dVar16 = *(double *)((int)pdStack_38 + 4);
      }
      iVar4 = *piVar9;
      if (cVar22 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)((int)pdStack_38 + 4) = uVar13;
        *(undefined4 *)(iVar4 + 0x24) = uVar13;
        dVar16 = (double)CONCAT44(*(undefined4 *)(pdStack_38 + 1),*(undefined4 *)(pdStack_38 + 3));
      }
      else {
        *(double *)((int)pdStack_38 + 4) = dVar16;
        *(double *)(iVar4 + 0x24) = dVar16;
        dVar16 = pdStack_38[1];
        in_xd2 = pdStack_38[3];
      }
      iVar4 = *piVar9;
      if (cVar22 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(pdStack_38 + 1) = uVar13;
        *(undefined4 *)(iVar4 + 0x28) = uVar13;
      }
      else {
        pdStack_38[1] = dVar16;
        *(double *)(iVar4 + 0x28) = dVar16;
      }
      iVar4 = *piVar9;
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdStack_38 + 0xc),
                                  *(undefined4 *)((int)pdStack_38 + 0x1c));
      }
      else {
        dVar16 = *(double *)((int)pdStack_38 + 0xc);
        in_xd2 = *(double *)((int)pdStack_38 + 0x1c);
      }
      if (cVar22 == '\0') {
        in_dr2 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        in_dr2 = dVar16 + dVar16;
      }
      uVar13 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)((int)pdStack_38 + 0xc) = uVar13;
        *(undefined4 *)(iVar4 + 0x2c) = uVar13;
      }
      else {
        *(double *)((int)pdStack_38 + 0xc) = in_dr2;
        *(double *)(iVar4 + 0x2c) = in_dr2;
      }
    }
    iVar8 = iVar8 + 1;
    pdStack_40 = pdStack_40 + 4;
    piVar11 = piVar11 + 1;
    pdStack_38 = pdStack_38 + 4;
  } while (iVar8 < 3);
  iVar8 = 0;
  iVar4 = 0;
  iVar10 = 2;
  do {
    iVar6 = iVar8;
    piVar11 = aiStack_28 + iVar6;
    iVar8 = iVar6 * 0x20;
    piVar9 = aiStack_28 + iVar10;
    if ((*(uint *)*piVar9 & 1 ^ *(uint *)*piVar11 & 1) == 1) {
      iVar5 = *piVar9;
      iVar3 = *piVar11;
      if (cVar23 == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x18),SUB84(in_dr4,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x18),_DAT_8c4aa4d4);
        dVar16 = in_xd2;
      }
      else {
        dVar21 = *(double *)(iVar5 + 0x18);
        dVar16 = (double)CONCAT44(_DAT_8c4aa4d8,_DAT_8c4aa4d4);
        dVar17 = *(double *)(iVar3 + 0x18);
      }
      fVar20 = (float)((ulonglong)dVar21 >> 0x20);
      if (cVar22 == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar20,
                                  SUB84(dVar17,0) - fVar20);
      }
      else {
        dVar21 = (dVar17 - dVar21) - dVar21;
      }
      if (cVar23 == '\0') {
        uVar13 = SUB84(dVar21,0);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(iVar3 + 0x10));
        in_xd2 = dVar16;
        dVar16 = (double)CONCAT44(uVar13,*(undefined4 *)(iVar5 + 0x10));
      }
      else {
        in_xd4 = *(double *)(iVar5 + 0x10);
        in_xd2 = *(double *)(iVar3 + 0x10);
      }
      if (cVar22 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                  (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 / dVar21;
      }
      fVar20 = SUB84(dVar16,0);
      dVar17 = in_xd4;
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44(fVar20,SUB84(in_dr6,0));
      }
      in_dr6 = dVar17;
      if (cVar22 == '\0') {
        fVar14 = SUB84(dVar21,0) - fVar20;
      }
      else {
        fVar14 = SUB84(dVar21 - dVar16,0);
      }
      uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar23 == '\0') {
        fVar20 = *(float *)(iVar5 + 0x14);
        dVar21 = (double)CONCAT44(fVar20,fVar14);
        dVar16 = (double)CONCAT44(uVar13,SUB84(in_dr0,0));
        in_dr0 = (double)CONCAT44(uVar13,fVar20);
      }
      else {
        dVar21 = *(double *)(iVar5 + 0x14);
        in_dr0 = dVar16;
        in_xd4 = dVar21;
      }
      fVar14 = (float)((ulonglong)dVar16 >> 0x20);
      if (cVar22 == '\0') {
        in_dr6 = (double)CONCAT44(fVar14 * SUB84(dVar21,0) + (float)((ulonglong)in_dr6 >> 0x20),
                                  SUB84(in_dr6,0));
      }
      if (cVar23 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(iVar3 + 0x14));
      }
      else {
        in_xd2 = *(double *)(iVar3 + 0x14);
      }
      if (cVar22 == '\0') {
        fVar20 = SUB84(dVar21,0) - fVar20;
        dVar21 = (double)CONCAT44(fVar14 * fVar20 + (float)((ulonglong)dVar21 >> 0x20),fVar20);
      }
      else {
        dVar21 = dVar21 - in_dr0;
      }
      uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
      dVar17 = dVar21;
      if (cVar23 == '\0') {
        in_dr0 = (double)CONCAT44(uVar13,uVar19);
        dVar17 = in_xd4;
      }
      iVar3 = iVar4 * 0x20;
      if (cVar23 == '\0') {
        dVar21 = (double)CONCAT44(uVar19,_DAT_8c4ab31c);
        dVar16 = (double)CONCAT44(_DAT_8c4ab320,SUB84(dVar16,0));
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar16 = (double)CONCAT44(_DAT_8c4ab324,_DAT_8c4ab320);
      }
      if (cVar22 == '\0') {
        fVar20 = SUB84(dVar21,0) * (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar20 = SUB84(dVar21 * dVar16,0);
      }
      if (cVar23 == '\0') {
        uVar18 = CONCAT44(_DAT_8c4aa4b4,fVar20);
        dVar16 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar16,0));
      }
      else {
        uVar18 = CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
        dVar16 = in_dr6;
      }
      iVar10 = iVar10 * 0x20;
      if (cVar22 == '\0') {
        uVar18 = CONCAT44((float)((ulonglong)dVar16 >> 0x20) * (float)uVar18 +
                          (float)((ulonglong)uVar18 >> 0x20),(float)uVar18);
      }
      if (cVar23 == '\0') {
        *(int *)(&DAT_8c4c2524 + iVar3) = (int)((ulonglong)uVar18 >> 0x20);
        dVar16 = (double)CONCAT44(_DAT_8c4ab324,SUB84(dVar16,0));
        dVar21 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4ab31c);
      }
      else {
        *(undefined8 *)(&DAT_8c4c2524 + iVar3) = uVar18;
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar16 = (double)CONCAT44(_DAT_8c4ab328,_DAT_8c4ab324);
        dVar21 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      }
      if (cVar22 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                  SUB84(dVar21,0) * (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        dVar21 = dVar21 * dVar16;
      }
      fVar20 = SUB84(in_dr0,0);
      dVar12 = dVar17;
      if (cVar23 == '\0') {
        dVar12 = (double)CONCAT44(fVar20,SUB84(dVar16,0));
      }
      if (cVar22 == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar21,0) +
                                  (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0));
      }
      uVar13 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar23 == '\0') {
        *(int *)(&DAT_8c4c2528 + iVar3) = (int)((ulonglong)dVar21 >> 0x20);
        *(undefined4 *)(&DAT_8c4c252c + iVar3) = _DAT_8c4ab31c;
        fVar20 = *(float *)(&DAT_8c4c2620 + iVar10);
        dVar16 = (double)CONCAT44(fVar20,*(undefined4 *)(&DAT_8c4c2620 + iVar8));
        in_dr0 = (double)CONCAT44(uVar13,SUB84(dVar12,0));
        in_dr4 = (double)CONCAT44(uVar13,fVar20);
        in_xd4 = dVar17;
      }
      else {
        *(double *)(&DAT_8c4c2528 + iVar3) = dVar21;
        *(ulonglong *)(&DAT_8c4c252c + iVar3) = CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar16 = *(double *)(&DAT_8c4c2620 + iVar10);
        in_xd2 = *(double *)(&DAT_8c4c2620 + iVar8);
        in_dr4 = in_dr0;
        in_xd4 = dVar16;
      }
      fVar14 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar22 == '\0') {
        fVar20 = SUB84(dVar16,0) - fVar20;
        dVar16 = (double)CONCAT44(fVar14 * fVar20 + (float)((ulonglong)dVar16 >> 0x20),fVar20);
      }
      else {
        dVar16 = dVar16 - in_dr4;
      }
      uVar19 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(&DAT_8c4c2530 + iVar3) = uVar19;
        dVar16 = (double)CONCAT44(uVar19,*(undefined4 *)(&DAT_8c4c2624 + iVar8));
        in_dr4 = (double)CONCAT44(uVar13,*(undefined4 *)(&DAT_8c4c2624 + iVar10));
      }
      else {
        *(double *)(&DAT_8c4c2530 + iVar3) = dVar16;
        in_xd2 = *(double *)(&DAT_8c4c2624 + iVar8);
        in_xd4 = *(double *)(&DAT_8c4c2624 + iVar10);
      }
      if (cVar22 == '\0') {
        fVar20 = SUB84(dVar16,0) - SUB84(in_dr4,0);
      }
      else {
        fVar20 = SUB84(dVar16 - in_dr4,0);
      }
      dVar16 = in_xd4;
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44(SUB84(in_dr4,0),fVar20);
      }
      if (cVar22 == '\0') {
        dVar16 = (double)CONCAT44(fVar14 * SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20),
                                  SUB84(dVar16,0));
      }
      uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(iVar3 + -0x73b3dacc) = uVar13;
        dVar16 = (double)CONCAT44(uVar13,*(undefined4 *)(&DAT_8c4c2628 + iVar8));
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(&DAT_8c4c2628 + iVar10));
      }
      else {
        *(double *)(iVar3 + -0x73b3dacc) = dVar16;
        in_xd2 = *(double *)(&DAT_8c4c2628 + iVar8);
        in_xd4 = *(double *)(&DAT_8c4c2628 + iVar10);
      }
      if (cVar22 == '\0') {
        fVar20 = SUB84(dVar16,0) - SUB84(in_dr4,0);
      }
      else {
        fVar20 = SUB84(dVar16 - in_dr4,0);
      }
      dVar16 = in_xd4;
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44(SUB84(in_dr4,0),fVar20);
      }
      if (cVar22 == '\0') {
        dVar16 = (double)CONCAT44(fVar14 * SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20),
                                  SUB84(dVar16,0));
      }
      uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar23 == '\0') {
        *(undefined4 *)(&(*(uint *)0x8c4c2538) + iVar4 * 4) = uVar13;
        dVar16 = (double)CONCAT44(uVar13,*(undefined4 *)(&DAT_8c4c262c + iVar8));
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(&DAT_8c4c262c + iVar10));
      }
      else {
        (&(*(uint *)0x8c4c2538))[iVar4 * 4] = dVar16;
        in_xd2 = *(double *)(&DAT_8c4c262c + iVar8);
        in_xd4 = *(double *)(&DAT_8c4c262c + iVar10);
      }
      if (cVar22 == '\0') {
        fVar20 = SUB84(dVar16,0) - SUB84(in_dr4,0);
      }
      else {
        fVar20 = SUB84(dVar16 - in_dr4,0);
      }
      in_dr2 = in_xd4;
      if (cVar23 == '\0') {
        in_dr2 = (double)CONCAT44(SUB84(in_dr4,0),fVar20);
      }
      if (cVar22 == '\0') {
        in_dr2 = (double)CONCAT44(fVar14 * SUB84(in_dr2,0) + (float)((ulonglong)in_dr2 >> 0x20),
                                  SUB84(in_dr2,0));
      }
      iVar4 = iVar4 + 1;
      if (cVar23 == '\0') {
        *(int *)((int)&(*(uint *)0x8c4c2538) + iVar3 + 4) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)((int)&(*(uint *)0x8c4c2538) + iVar3 + 4) = in_dr2;
      }
    }
    piVar11 = aiStack_28 + iVar6;
    iVar3 = iVar4;
    if ((*(uint *)*piVar11 & 1) == 0) {
      if (cVar23 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(*piVar11 + 4);
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 4);
      }
      iVar10 = iVar4 * 0x20;
      if (cVar23 == '\0') {
        *(int *)(&DAT_8c4c2524 + iVar10) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(&DAT_8c4c2524 + iVar10) = in_xd2;
      }
      if (cVar23 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 8);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(&DAT_8c4c2528 + iVar10) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 8);
        *(double *)(&DAT_8c4c2528 + iVar10) = in_xd2;
      }
      iVar3 = iVar4 + 1;
      if (cVar23 == '\0') {
        *(undefined4 *)(&DAT_8c4c252c + iVar10) = *(undefined4 *)(*piVar11 + 0xc);
        *(undefined4 *)(&DAT_8c4c2530 + iVar10) = *(undefined4 *)(&DAT_8c4c2620 + iVar8);
        *(undefined4 *)(iVar10 + -0x73b3dacc) = *(undefined4 *)(&DAT_8c4c2624 + iVar8);
        *(undefined4 *)(&(*(uint *)0x8c4c2538) + iVar4 * 4) = *(undefined4 *)(&DAT_8c4c2628 + iVar8);
        in_dr2 = (double)(ulonglong)*(uint *)(&DAT_8c4c262c + iVar8);
        *(uint *)((int)&(*(uint *)0x8c4c2538) + iVar10 + 4) = *(uint *)(&DAT_8c4c262c + iVar8);
        iVar3 = iVar4 + 1;
      }
      else {
        *(undefined8 *)(&DAT_8c4c252c + iVar10) = *(undefined8 *)(*piVar11 + 0xc);
        *(undefined8 *)(&DAT_8c4c2530 + iVar10) = *(undefined8 *)(&DAT_8c4c2620 + iVar8);
        *(undefined8 *)(iVar10 + -0x73b3dacc) = *(undefined8 *)(&DAT_8c4c2624 + iVar8);
        (&(*(uint *)0x8c4c2538))[iVar4 * 4] = *(undefined8 *)(&DAT_8c4c2628 + iVar8);
        in_xd2 = *(double *)(&DAT_8c4c262c + iVar8);
        *(double *)((int)&(*(uint *)0x8c4c2538) + iVar10 + 4) = in_xd2;
      }
    }
    uVar18 = _DAT_8c4c2530;
    uVar19 = _DAT_8c4c2528;
    uVar13 = _DAT_8c4c2524;
    iVar8 = iVar6 + 1;
    iVar4 = iVar3;
    iVar10 = iVar6;
  } while (iVar6 + 1 < 3);
  if (iVar3 == 3) {
    _DAT_8c4c2520 = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c252c;
      *(undefined4 *)(unaff_r8 + 3) = uVar19;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar13;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2524,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c252c,_DAT_8c4c2528);
      unaff_r8[3] = (*(uint *)0x8c4c2538);
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = _DAT_8c4c2550;
    uVar19 = _DAT_8c4c2548;
    uVar13 = _DAT_8c4c2544;
    _DAT_8c4c2540 = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c254c;
      *(undefined4 *)(unaff_r8 + 7) = uVar19;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar13;
      puVar7 = unaff_r8 + 6;
      *(undefined4 *)puVar7 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2544,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c254c,_DAT_8c4c2548);
      unaff_r8[7] = (*(uint *)0x8c4c2558);
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar7 = unaff_r8 + 4;
      *puVar7 = uVar1;
    }
    uVar18 = _DAT_8c4c2570;
    uVar19 = _DAT_8c4c2568;
    uVar13 = _DAT_8c4c2564;
    _DAT_8c4c2560 = 0xf0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)((int)puVar7 + 0x3c) = _DAT_8c4c256c;
      *(undefined4 *)(puVar7 + 7) = uVar19;
      *(undefined4 *)((int)puVar7 + 0x34) = uVar13;
      *(undefined4 *)(puVar7 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2564,0xf0000000);
      uVar2 = CONCAT44(_DAT_8c4c256c,_DAT_8c4c2568);
      puVar7[7] = (*(uint *)0x8c4c2578);
      puVar7[6] = uVar18;
      puVar7[5] = uVar2;
      puVar7[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
  }
  else {
    _DAT_8c4c2520 = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c252c;
      *(undefined4 *)(unaff_r8 + 3) = uVar19;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar13;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2524,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c252c,_DAT_8c4c2528);
      unaff_r8[3] = (*(uint *)0x8c4c2538);
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = _DAT_8c4c2550;
    uVar19 = _DAT_8c4c2548;
    uVar13 = _DAT_8c4c2544;
    _DAT_8c4c2540 = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c254c;
      *(undefined4 *)(unaff_r8 + 7) = uVar19;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar13;
      puVar7 = unaff_r8 + 6;
      *(undefined4 *)puVar7 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2544,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c254c,_DAT_8c4c2548);
      unaff_r8[7] = (*(uint *)0x8c4c2558);
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar7 = unaff_r8 + 4;
      *puVar7 = uVar1;
    }
    uVar18 = _DAT_8c4c2590;
    uVar19 = _DAT_8c4c2588;
    uVar13 = _DAT_8c4c2584;
    _DAT_8c4c2580 = 0xe0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)((int)puVar7 + 0x3c) = _DAT_8c4c258c;
      *(undefined4 *)(puVar7 + 7) = uVar19;
      *(undefined4 *)((int)puVar7 + 0x34) = uVar13;
      puVar7 = puVar7 + 6;
      *(undefined4 *)puVar7 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2584,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c258c,_DAT_8c4c2588);
      puVar7[7] = (*(uint *)0x8c4c2598);
      puVar7[6] = uVar18;
      puVar7[5] = uVar2;
      puVar7 = puVar7 + 4;
      *puVar7 = uVar1;
    }
    uVar18 = _DAT_8c4c2570;
    uVar19 = _DAT_8c4c2568;
    uVar13 = _DAT_8c4c2564;
    _DAT_8c4c2560 = 0xf0000000;
    if (cVar23 == '\0') {
      *(undefined4 *)((int)puVar7 + 0x3c) = _DAT_8c4c256c;
      *(undefined4 *)(puVar7 + 7) = uVar19;
      *(undefined4 *)((int)puVar7 + 0x34) = uVar13;
      *(undefined4 *)(puVar7 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2564,0xf0000000);
      uVar2 = CONCAT44(_DAT_8c4c256c,_DAT_8c4c2568);
      puVar7[7] = (*(uint *)0x8c4c2578);
      puVar7[6] = uVar18;
      puVar7[5] = uVar2;
      puVar7[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c23e7a8\n.set _FUN_8c23e7a8, _FUN_8c23e7a8_def\n");
