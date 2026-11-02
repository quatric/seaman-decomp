#include "../decls.h"
undefined4 FUN_8c23dc42_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 *unaff_r8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  double in_dr0;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  double in_dr2;
  ulonglong uVar19;
  double dVar20;
  undefined8 uVar21;
  float fVar22;
  double in_dr4;
  double dVar23;
  double dVar24;
  double in_dr6;
  undefined4 uVar25;
  double in_xd2;
  double in_xd4;
  double in_xd14;
  char cVar26;
  char cVar27;
  undefined1 *puStack_50;
  int *piStack_40;
  int aiStack_2c [5];
  
  cVar27 = '\0';
  cVar26 = '\0';
  aiStack_2c[0] = ar4;
  iVar11 = 0;
  aiStack_2c[1] = ar5;
  aiStack_2c[2] = ar6;
  puStack_50 = &DAT_8c4c2620;
  uVar25 = 0x3f000000;
  uVar18 = ar7;
  piVar10 = aiStack_2c;
  piStack_40 = aiStack_2c;
  do {
    uVar15 = SUB84(in_dr2,0);
    uVar14 = SUB84(in_dr0,0);
    if (*(uint *)(aiStack_2c[iVar11] + 0x3c) == (ar7 & 0xffff)) {
      FUN_8c2475f2(*(undefined4 *)(*piVar10 + 0x28),puStack_50,ar6,uVar18);
      FUN_8c2475f2(*(undefined4 *)(*piVar10 + 0x2c),puStack_50 + 0x10,ar6,uVar18);
    }
    else {
      piVar8 = aiStack_2c + iVar11;
      iVar12 = iVar11 * 0x20;
      puVar13 = &DAT_8c4c2620 + iVar12;
      ar6 = *piVar8 + 0x30;
      iVar7 = *piVar8 + 0x10;
      uVar18 = ar7 & 0x8000;
      FUN_8c23bae2(puVar13,iVar7,ar6,ar7 & 0x8000);
      iVar5 = *piVar8;
      if (cVar27 != '\0') {
        in_xd4 = *(double *)(&DAT_8c4c2624 + iVar12);
      }
      uVar4 = float_to_color_u8(puVar13,iVar7,ar6,uVar18);
      *(undefined4 *)(iVar5 + 0x28) = uVar4;
      iVar5 = *piVar8;
      if (cVar27 == '\0') {
        in_dr6 = (double)(ulonglong)*(uint *)(&DAT_8c4c263c + iVar12);
        in_dr4 = (double)(ulonglong)*(uint *)(&DAT_8c4c2634 + iVar12);
      }
      else {
        in_dr6 = *(double *)(&DAT_8c4c2638 + iVar12);
        in_xd4 = *(double *)(&DAT_8c4c2634 + iVar12);
        in_dr4 = *(double *)(&DAT_8c4c2630 + iVar12);
      }
      uVar4 = float_to_color_u8(puVar13,iVar7,ar6,uVar18);
      *(undefined4 *)(iVar5 + 0x2c) = uVar4;
      *(uint *)(*piVar8 + 0x3c) = ar7 & 0xffff;
    }
    dVar23 = in_xd14;
    if (cVar27 == '\0') {
      dVar23 = in_xd2;
      uVar15 = uVar25;
    }
    iVar11 = iVar11 + 1;
    iVar5 = *piStack_40;
    if (cVar27 == '\0') {
      uVar19 = CONCAT44(*(undefined4 *)(iVar5 + 0x30),uVar15);
      dVar20 = (double)CONCAT44(uVar25,uVar14);
    }
    else {
      uVar19 = *(ulonglong *)(iVar5 + 0x30);
      dVar20 = in_xd14;
    }
    piVar10 = piVar10 + 1;
    if (cVar26 == '\0') {
      uVar19 = (ulonglong)
               (uint)((float)((ulonglong)dVar20 >> 0x20) * (float)(uVar19 >> 0x20) + (float)uVar19);
    }
    uVar15 = (undefined4)uVar19;
    if (cVar27 == '\0') {
      *(undefined4 *)(iVar5 + 0x20) = uVar15;
      in_xd2 = dVar23;
      uVar15 = uVar25;
      in_dr0 = (double)CONCAT44(uVar25,SUB84(dVar20,0));
    }
    else {
      *(double *)(iVar5 + 0x20) = dVar23;
      in_xd2 = in_xd14;
      in_dr0 = in_xd14;
    }
    puVar13 = (undefined1 *)*piStack_40;
    if (cVar27 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)(puVar13 + 0x34),uVar15);
    }
    else {
      in_dr2 = *(double *)(puVar13 + 0x34);
    }
    if (cVar26 == '\0') {
      in_dr2 = (double)(ulonglong)
                       (uint)((float)((ulonglong)in_dr0 >> 0x20) *
                              (float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0));
    }
    if (cVar27 == '\0') {
      *(int *)(puVar13 + 0x24) = SUB84(in_dr2,0);
    }
    else {
      *(double *)(puVar13 + 0x24) = in_xd2;
    }
    puStack_50 = puStack_50 + 0x20;
    piStack_40 = piStack_40 + 1;
  } while (iVar11 < 3);
  puStack_50 = (undefined1 *)0x2;
  uVar25 = 1;
  iVar11 = 0;
  iVar5 = 0;
  do {
    iVar7 = iVar11;
    iVar11 = iVar7 * 0x20;
    piVar8 = aiStack_2c + iVar7;
    piVar10 = aiStack_2c + (int)puStack_50;
    if ((*(uint *)*piVar10 & 1 ^ *(uint *)*piVar8 & 1) == 1) {
      iVar12 = *piVar10;
      iVar6 = *piVar8;
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x18),SUB84(in_dr4,0));
        dVar20 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x18),_DAT_8c4aa4d4);
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c4aa4d8,_DAT_8c4aa4d4);
        dVar23 = *(double *)(iVar12 + 0x18);
        dVar20 = *(double *)(iVar6 + 0x18);
      }
      fVar22 = (float)((ulonglong)dVar23 >> 0x20);
      if (cVar26 == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - fVar22);
      }
      else {
        dVar20 = dVar20 - dVar23;
      }
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44(fVar22,*(undefined4 *)(iVar12 + 0x10));
      }
      else {
        in_xd4 = *(double *)(iVar12 + 0x10);
      }
      if (cVar26 == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                                  (float)((ulonglong)dVar23 >> 0x20),SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 - dVar23;
      }
      dVar24 = in_xd2;
      dVar3 = in_xd4;
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(SUB84(dVar20,0),SUB84(dVar23,0));
        dVar3 = (double)CONCAT44(SUB84(dVar23,0),SUB84(in_dr6,0));
      }
      in_dr6 = dVar3;
      fVar22 = (float)((ulonglong)dVar20 >> 0x20);
      if (cVar26 == '\0') {
        dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) / fVar22,SUB84(dVar24,0));
      }
      else {
        dVar24 = dVar24 / dVar20;
      }
      if (cVar27 == '\0') {
        dVar20 = (double)CONCAT44(fVar22,*(undefined4 *)(iVar6 + 0x10));
      }
      else {
        in_xd2 = *(double *)(iVar6 + 0x10);
      }
      fVar22 = SUB84(dVar24,0);
      if (cVar26 == '\0') {
        fVar16 = SUB84(dVar20,0) - fVar22;
      }
      else {
        fVar16 = SUB84(dVar20 - dVar24,0);
      }
      uVar15 = (undefined4)((ulonglong)dVar24 >> 0x20);
      if (cVar27 == '\0') {
        fVar22 = *(float *)(iVar12 + 0x14);
        dVar23 = (double)CONCAT44(fVar22,fVar16);
        dVar24 = (double)CONCAT44(uVar15,SUB84(in_dr0,0));
        in_dr4 = (double)CONCAT44(uVar15,fVar22);
      }
      else {
        dVar23 = *(double *)(iVar12 + 0x14);
        in_dr4 = dVar24;
        in_xd4 = dVar23;
      }
      fVar16 = (float)((ulonglong)dVar24 >> 0x20);
      if (cVar26 == '\0') {
        in_dr6 = (double)CONCAT44(fVar16 * SUB84(dVar23,0) + (float)((ulonglong)in_dr6 >> 0x20),
                                  SUB84(in_dr6,0));
      }
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(iVar6 + 0x14));
      }
      else {
        in_xd2 = *(double *)(iVar6 + 0x14);
      }
      if (cVar26 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) - fVar22);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      iVar12 = iVar5 * 0x40;
      puVar13 = &DAT_8c4c2420 + iVar12;
      if (cVar26 == '\0') {
        dVar23 = (double)CONCAT44(fVar16 * SUB84(dVar23,0) + (float)((ulonglong)dVar23 >> 0x20),
                                  SUB84(dVar23,0));
      }
      uVar14 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar27 == '\0') {
        in_dr4 = (double)CONCAT44(uVar15,uVar14);
        dVar20 = (double)CONCAT44(_DAT_8c4ab320,SUB84(dVar24,0));
        dVar23 = (double)CONCAT44(uVar14,_DAT_8c4ab31c);
      }
      else {
        dVar20 = (double)CONCAT44(_DAT_8c4ab324,_DAT_8c4ab320);
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar22 = SUB84(dVar23,0) * (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar22 = SUB84(dVar23 * dVar20,0);
      }
      if (cVar27 == '\0') {
        uVar21 = CONCAT44(_DAT_8c4aa4b4,fVar22);
        dVar23 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar20,0));
      }
      else {
        uVar21 = CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
        dVar23 = in_dr6;
      }
      if (cVar26 == '\0') {
        uVar21 = CONCAT44((float)((ulonglong)dVar23 >> 0x20) * (float)uVar21 +
                          (float)((ulonglong)uVar21 >> 0x20),(float)uVar21);
      }
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c2424 + iVar12) = (int)((ulonglong)uVar21 >> 0x20);
        dVar23 = (double)CONCAT44(_DAT_8c4ab324,SUB84(dVar23,0));
        dVar20 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4ab31c);
      }
      else {
        *(undefined8 *)(&DAT_8c4c2424 + iVar12) = uVar21;
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar23 = (double)CONCAT44(_DAT_8c4ab328,_DAT_8c4ab324);
        dVar20 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      }
      if (cVar26 == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                  SUB84(dVar20,0) * (float)((ulonglong)dVar23 >> 0x20));
      }
      else {
        dVar20 = dVar20 * dVar23;
      }
      dVar24 = in_xd4;
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(SUB84(in_dr4,0),SUB84(dVar23,0));
      }
      if (cVar26 == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar20,0) +
                                  (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0));
      }
      uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
      uVar15 = (undefined4)((ulonglong)dVar20 >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(&DAT_8c4c2428 + iVar12) = uVar15;
        dVar20 = (double)CONCAT44(uVar15,_DAT_8c4ab31c);
        *(undefined4 *)(&DAT_8c4c242c + iVar12) = _DAT_8c4ab31c;
        in_dr0 = (double)CONCAT44(uVar14,SUB84(dVar24,0));
      }
      else {
        *(double *)(&DAT_8c4c2428 + iVar12) = dVar20;
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        *(double *)(&DAT_8c4c242c + iVar12) = in_xd2;
        in_dr0 = in_dr4;
      }
      if (cVar27 == '\0') {
        in_dr4 = (double)CONCAT44(uVar14,*(undefined4 *)(*piVar10 + 0x20));
      }
      else {
        in_xd4 = *(double *)(*piVar10 + 0x20);
      }
      if (cVar27 == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(*piVar8 + 0x20));
      }
      else {
        in_xd2 = *(double *)(*piVar8 + 0x20);
      }
      if (cVar26 == '\0') {
        fVar22 = SUB84(dVar20,0) - SUB84(in_dr4,0);
      }
      else {
        fVar22 = SUB84(dVar20 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44(SUB84(in_dr4,0),fVar22);
      }
      fVar22 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar26 == '\0') {
        dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23,0) + (float)((ulonglong)dVar23 >> 0x20),
                                  SUB84(dVar23,0));
      }
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c2430 + iVar12) = (int)((ulonglong)dVar23 >> 0x20);
      }
      else {
        *(double *)(&DAT_8c4c2430 + iVar12) = dVar23;
      }
      if (cVar27 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(*piVar10 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(*piVar10 + 0x24);
      }
      fVar16 = SUB84(in_dr4,0);
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44(fVar16,*(undefined4 *)(*piVar8 + 0x24));
      }
      else {
        in_xd2 = *(double *)(*piVar8 + 0x24);
        dVar23 = in_xd4;
      }
      if (cVar26 == '\0') {
        fVar17 = SUB84(dVar23,0) - fVar16;
        dVar23 = (double)CONCAT44(fVar22 * fVar17 + (float)((ulonglong)dVar23 >> 0x20),fVar17);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(iVar12 + -0x73b3dbcc) = (int)((ulonglong)dVar23 >> 0x20);
      }
      else {
        *(double *)(iVar12 + -0x73b3dbcc) = dVar23;
      }
      iVar6 = (int)puStack_50 * 0x20;
      if (cVar27 == '\0') {
        fVar16 = *(float *)(&DAT_8c4c2620 + iVar6);
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = (double)CONCAT44(fVar16,*(undefined4 *)(&DAT_8c4c2620 + iVar11));
      }
      else {
        dVar23 = *(double *)(&DAT_8c4c2620 + iVar6);
        in_xd2 = *(double *)(&DAT_8c4c2620 + iVar11);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = SUB84(dVar23,0) - fVar16;
        dVar23 = (double)CONCAT44(fVar22 * fVar16 + (float)((ulonglong)dVar23 >> 0x20),fVar16);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      uVar15 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(&DAT_8c4c2440 + iVar12) = uVar15;
        dVar23 = (double)CONCAT44(uVar15,*(undefined4 *)(&DAT_8c4c2624 + iVar11));
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(&DAT_8c4c2624 + iVar6));
      }
      else {
        *(double *)(&DAT_8c4c2440 + iVar12) = dVar23;
        in_xd2 = *(double *)(&DAT_8c4c2624 + iVar11);
        in_xd4 = *(double *)(&DAT_8c4c2624 + iVar6);
      }
      if (cVar26 == '\0') {
        fVar16 = SUB84(dVar23,0) - SUB84(in_dr4,0);
      }
      else {
        fVar16 = SUB84(dVar23 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44(SUB84(in_dr4,0),fVar16);
      }
      if (cVar26 == '\0') {
        dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23,0) + (float)((ulonglong)dVar23 >> 0x20),
                                  SUB84(dVar23,0));
      }
      uVar15 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(&DAT_8c4c2444 + iVar12) = uVar15;
        dVar23 = (double)CONCAT44(uVar15,*(undefined4 *)(&DAT_8c4c2628 + iVar11));
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(&DAT_8c4c2628 + iVar6));
      }
      else {
        *(double *)(&DAT_8c4c2444 + iVar12) = dVar23;
        in_xd2 = *(double *)(&DAT_8c4c2628 + iVar11);
        in_xd4 = *(double *)(&DAT_8c4c2628 + iVar6);
      }
      if (cVar26 == '\0') {
        fVar16 = SUB84(dVar23,0) - SUB84(in_dr4,0);
      }
      else {
        fVar16 = SUB84(dVar23 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44(SUB84(in_dr4,0),fVar16);
      }
      if (cVar26 == '\0') {
        dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23,0) + (float)((ulonglong)dVar23 >> 0x20),
                                  SUB84(dVar23,0));
      }
      uVar15 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar27 == '\0') {
        *(undefined4 *)(&DAT_8c4c2448 + iVar12) = uVar15;
        dVar23 = (double)CONCAT44(uVar15,*(undefined4 *)(&DAT_8c4c262c + iVar11));
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(&DAT_8c4c262c + iVar6));
      }
      else {
        *(double *)(&DAT_8c4c2448 + iVar12) = dVar23;
        in_xd2 = *(double *)(&DAT_8c4c262c + iVar11);
        in_xd4 = *(double *)(&DAT_8c4c262c + iVar6);
      }
      fVar16 = SUB84(in_dr4,0);
      if (cVar26 == '\0') {
        fVar17 = SUB84(dVar23,0) - fVar16;
      }
      else {
        fVar17 = SUB84(dVar23 - in_dr4,0);
      }
      dVar23 = in_xd4;
      if (cVar27 == '\0') {
        dVar23 = (double)CONCAT44(fVar16,fVar17);
      }
      if (cVar26 == '\0') {
        dVar23 = (double)CONCAT44(fVar22 * SUB84(dVar23,0) + (float)((ulonglong)dVar23 >> 0x20),
                                  SUB84(dVar23,0));
      }
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c244c + iVar12) = (int)((ulonglong)dVar23 >> 0x20);
        fVar16 = *(float *)(&DAT_8c4c2630 + iVar6);
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = (double)CONCAT44(fVar16,*(undefined4 *)(&DAT_8c4c2630 + iVar11));
      }
      else {
        *(double *)(&DAT_8c4c244c + iVar12) = dVar23;
        dVar23 = *(double *)(&DAT_8c4c2630 + iVar6);
        in_xd2 = *(double *)(&DAT_8c4c2630 + iVar11);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar17 = SUB84(dVar23,0) - fVar16;
        dVar23 = (double)CONCAT44(fVar22 * fVar17 + (float)((ulonglong)dVar23 >> 0x20),fVar17);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c2450 + iVar12) = (int)((ulonglong)dVar23 >> 0x20);
        fVar16 = *(float *)(&DAT_8c4c2634 + iVar6);
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = (double)CONCAT44(fVar16,*(undefined4 *)(&DAT_8c4c2634 + iVar11));
      }
      else {
        *(double *)(&DAT_8c4c2450 + iVar12) = dVar23;
        dVar23 = *(double *)(&DAT_8c4c2634 + iVar6);
        in_xd2 = *(double *)(&DAT_8c4c2634 + iVar11);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = SUB84(dVar23,0) - fVar16;
        dVar23 = (double)CONCAT44(fVar22 * fVar16 + (float)((ulonglong)dVar23 >> 0x20),fVar16);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c2454 + iVar12) = (int)((ulonglong)dVar23 >> 0x20);
        fVar16 = *(float *)(&DAT_8c4c2638 + iVar6);
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = (double)CONCAT44(fVar16,*(undefined4 *)(&DAT_8c4c2638 + iVar11));
      }
      else {
        *(double *)(&DAT_8c4c2454 + iVar12) = dVar23;
        dVar23 = *(double *)(&DAT_8c4c2638 + iVar6);
        in_xd2 = *(double *)(&DAT_8c4c2638 + iVar11);
        fVar16 = SUB84(in_dr4,0);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = SUB84(dVar23,0) - fVar16;
        dVar23 = (double)CONCAT44(fVar22 * fVar16 + (float)((ulonglong)dVar23 >> 0x20),fVar16);
      }
      else {
        dVar23 = dVar23 - in_dr4;
      }
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c2458 + iVar12) = (int)((ulonglong)dVar23 >> 0x20);
        fVar16 = *(float *)(&DAT_8c4c263c + iVar6);
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar16);
        dVar23 = (double)CONCAT44(fVar16,*(undefined4 *)(&DAT_8c4c263c + iVar11));
      }
      else {
        *(double *)(&DAT_8c4c2458 + iVar12) = dVar23;
        dVar23 = *(double *)(&DAT_8c4c263c + iVar6);
        in_xd2 = *(double *)(&DAT_8c4c263c + iVar11);
        fVar16 = SUB84(in_dr4,0);
        in_xd4 = dVar23;
      }
      if (cVar26 == '\0') {
        fVar16 = SUB84(dVar23,0) - fVar16;
        in_dr2 = (double)CONCAT44(fVar22 * fVar16 + (float)((ulonglong)dVar23 >> 0x20),fVar16);
      }
      else {
        in_dr2 = dVar23 - in_dr4;
      }
      iVar5 = iVar5 + 1;
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c245c + iVar12) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(&DAT_8c4c245c + iVar12) = in_dr2;
      }
    }
    piVar10 = aiStack_2c + iVar7;
    iVar12 = iVar5;
    if ((*(uint *)*piVar10 & 1) == 0) {
      if (cVar27 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(*piVar10 + 4);
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 4);
      }
      iVar6 = iVar5 * 0x40;
      puVar13 = &DAT_8c4c2420 + iVar6;
      if (cVar27 == '\0') {
        *(int *)(&DAT_8c4c2424 + iVar6) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(&DAT_8c4c2424 + iVar6) = in_xd2;
      }
      if (cVar27 == '\0') {
        uVar18 = *(uint *)(*piVar10 + 8);
        in_dr2 = (double)(ulonglong)uVar18;
        *(uint *)(&DAT_8c4c2428 + iVar6) = uVar18;
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 8);
        *(double *)(&DAT_8c4c2428 + iVar6) = in_xd2;
      }
      if (cVar27 == '\0') {
        uVar18 = *(uint *)(*piVar10 + 0xc);
        in_dr2 = (double)(ulonglong)uVar18;
        *(uint *)(&DAT_8c4c242c + iVar6) = uVar18;
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 0xc);
        *(double *)(&DAT_8c4c242c + iVar6) = in_xd2;
      }
      if (cVar27 == '\0') {
        uVar18 = *(uint *)(*piVar10 + 0x20);
        in_dr2 = (double)(ulonglong)uVar18;
        *(uint *)(&DAT_8c4c2430 + iVar6) = uVar18;
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 0x20);
        *(double *)(&DAT_8c4c2430 + iVar6) = in_xd2;
      }
      iVar12 = iVar5 + 1;
      if (cVar27 == '\0') {
        *(undefined4 *)(iVar6 + -0x73b3dbcc) = *(undefined4 *)(*piVar10 + 0x24);
        *(undefined4 *)(&DAT_8c4c2440 + iVar6) = *(undefined4 *)(&DAT_8c4c2620 + iVar11);
        *(undefined4 *)(&DAT_8c4c2444 + iVar6) = *(undefined4 *)(&DAT_8c4c2624 + iVar11);
        *(undefined4 *)(&DAT_8c4c2448 + iVar6) = *(undefined4 *)(&DAT_8c4c2628 + iVar11);
        *(undefined4 *)(&DAT_8c4c244c + iVar6) = *(undefined4 *)(&DAT_8c4c262c + iVar11);
        *(undefined4 *)(&DAT_8c4c2450 + iVar6) = *(undefined4 *)(&DAT_8c4c2630 + iVar11);
        *(undefined4 *)(&DAT_8c4c2454 + iVar6) = *(undefined4 *)(&DAT_8c4c2634 + iVar11);
        *(undefined4 *)(&DAT_8c4c2458 + iVar6) = *(undefined4 *)(&DAT_8c4c2638 + iVar11);
        in_dr2 = (double)(ulonglong)*(uint *)(&DAT_8c4c263c + iVar11);
        *(uint *)(&DAT_8c4c245c + iVar6) = *(uint *)(&DAT_8c4c263c + iVar11);
        iVar12 = iVar5 + 1;
      }
      else {
        *(undefined8 *)(iVar6 + -0x73b3dbcc) = *(undefined8 *)(*piVar10 + 0x24);
        *(undefined8 *)(&DAT_8c4c2440 + iVar6) = *(undefined8 *)(&DAT_8c4c2620 + iVar11);
        *(undefined8 *)(&DAT_8c4c2444 + iVar6) = *(undefined8 *)(&DAT_8c4c2624 + iVar11);
        *(undefined8 *)(&DAT_8c4c2448 + iVar6) = *(undefined8 *)(&DAT_8c4c2628 + iVar11);
        *(undefined8 *)(&DAT_8c4c244c + iVar6) = *(undefined8 *)(&DAT_8c4c262c + iVar11);
        *(undefined8 *)(&DAT_8c4c2450 + iVar6) = *(undefined8 *)(&DAT_8c4c2630 + iVar11);
        *(undefined8 *)(&DAT_8c4c2454 + iVar6) = *(undefined8 *)(&DAT_8c4c2634 + iVar11);
        *(undefined8 *)(&DAT_8c4c2458 + iVar6) = *(undefined8 *)(&DAT_8c4c2638 + iVar11);
        in_xd2 = *(double *)(&DAT_8c4c263c + iVar11);
        *(double *)(&DAT_8c4c245c + iVar6) = in_xd2;
      }
    }
    iVar11 = iVar7 + 1;
    iVar5 = iVar12;
    puStack_50 = (undefined1 *)iVar7;
  } while (iVar11 < 3);
  if (iVar12 == 3) {
    _DAT_8c4c2420 = 0xe0000000;
    _DAT_8c4c2438 = float_to_color_u8(puVar13,iVar11,1,3);
    _DAT_8c4c243c = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar21 = _DAT_8c4c2430;
    uVar4 = _DAT_8c4c2428;
    uVar14 = _DAT_8c4c2424;
    uVar15 = _DAT_8c4c2420;
    if (cVar27 == '\0') {
      puVar13 = &DAT_8c4c2430;
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c242c;
      *(undefined4 *)(unaff_r8 + 3) = uVar4;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar14;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar15;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2424,_DAT_8c4c2420);
      uVar2 = CONCAT44(_DAT_8c4c242c,_DAT_8c4c2428);
      puVar13 = &DAT_8c4c2440;
      unaff_r8[3] = CONCAT44(_DAT_8c4c243c,_DAT_8c4c2438);
      unaff_r8[2] = uVar21;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    _DAT_8c4c2460 = 0xe0000000;
    _DAT_8c4c2478 = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    _DAT_8c4c247c = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar21 = _DAT_8c4c2470;
    uVar4 = _DAT_8c4c2468;
    uVar14 = _DAT_8c4c2464;
    uVar15 = _DAT_8c4c2460;
    if (cVar27 == '\0') {
      puVar13 = &DAT_8c4c2470;
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c246c;
      *(undefined4 *)(unaff_r8 + 7) = uVar4;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar14;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)puVar9 = uVar15;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2464,_DAT_8c4c2460);
      uVar2 = CONCAT44(_DAT_8c4c246c,_DAT_8c4c2468);
      puVar13 = &DAT_8c4c2480;
      unaff_r8[7] = CONCAT44(_DAT_8c4c247c,_DAT_8c4c2478);
      unaff_r8[6] = uVar21;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    _DAT_8c4c24a0 = 0xf0000000;
    _DAT_8c4c24b8 = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar4 = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar21 = _DAT_8c4c24b0;
    uVar14 = _DAT_8c4c24a8;
    uVar15 = _DAT_8c4c24a4;
    uVar25 = _DAT_8c4c24a0;
    _DAT_8c4c24bc = uVar4;
    if (cVar27 == '\0') {
      *(undefined4 *)((int)puVar9 + 0x3c) = _DAT_8c4c24ac;
      *(undefined4 *)(puVar9 + 7) = uVar14;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar15;
      *(undefined4 *)(puVar9 + 6) = uVar25;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24a4,_DAT_8c4c24a0);
      uVar2 = CONCAT44(_DAT_8c4c24ac,_DAT_8c4c24a8);
      puVar9[7] = CONCAT44(uVar4,_DAT_8c4c24b8);
      puVar9[6] = uVar21;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
  }
  else {
    _DAT_8c4c2420 = 0xe0000000;
    _DAT_8c4c2438 = float_to_color_u8(puVar13,iVar11,1,iVar12);
    _DAT_8c4c243c = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar21 = _DAT_8c4c2430;
    uVar4 = _DAT_8c4c2428;
    uVar14 = _DAT_8c4c2424;
    uVar15 = _DAT_8c4c2420;
    if (cVar27 == '\0') {
      puVar13 = &DAT_8c4c2430;
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c242c;
      *(undefined4 *)(unaff_r8 + 3) = uVar4;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar14;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar15;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2424,_DAT_8c4c2420);
      uVar2 = CONCAT44(_DAT_8c4c242c,_DAT_8c4c2428);
      puVar13 = &DAT_8c4c2440;
      unaff_r8[3] = CONCAT44(_DAT_8c4c243c,_DAT_8c4c2438);
      unaff_r8[2] = uVar21;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    _DAT_8c4c2460 = 0xe0000000;
    _DAT_8c4c2478 = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    _DAT_8c4c247c = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar21 = _DAT_8c4c2470;
    uVar4 = _DAT_8c4c2468;
    uVar14 = _DAT_8c4c2464;
    uVar15 = _DAT_8c4c2460;
    if (cVar27 == '\0') {
      puVar13 = &DAT_8c4c2470;
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c246c;
      *(undefined4 *)(unaff_r8 + 7) = uVar4;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar14;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)puVar9 = uVar15;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2464,_DAT_8c4c2460);
      uVar2 = CONCAT44(_DAT_8c4c246c,_DAT_8c4c2468);
      puVar13 = &DAT_8c4c2480;
      unaff_r8[7] = CONCAT44(_DAT_8c4c247c,_DAT_8c4c2478);
      unaff_r8[6] = uVar21;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    _DAT_8c4c24e0 = 0xe0000000;
    _DAT_8c4c24f8 = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    _DAT_8c4c24fc = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar21 = _DAT_8c4c24f0;
    uVar4 = _DAT_8c4c24e8;
    uVar14 = _DAT_8c4c24e4;
    uVar15 = _DAT_8c4c24e0;
    if (cVar27 == '\0') {
      puVar13 = &DAT_8c4c24f0;
      *(undefined4 *)((int)puVar9 + 0x3c) = _DAT_8c4c24ec;
      *(undefined4 *)(puVar9 + 7) = uVar4;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar14;
      puVar9 = puVar9 + 6;
      *(undefined4 *)puVar9 = uVar15;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24e4,_DAT_8c4c24e0);
      uVar2 = CONCAT44(_DAT_8c4c24ec,_DAT_8c4c24e8);
      puVar13 = &DAT_8c4c2500;
      puVar9[7] = CONCAT44(_DAT_8c4c24fc,_DAT_8c4c24f8);
      puVar9[6] = uVar21;
      puVar9[5] = uVar2;
      puVar9 = puVar9 + 4;
      *puVar9 = uVar1;
    }
    _DAT_8c4c24a0 = 0xf0000000;
    _DAT_8c4c24b8 = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar4 = float_to_color_u8(puVar13,iVar11,uVar25,iVar12);
    uVar21 = _DAT_8c4c24b0;
    uVar14 = _DAT_8c4c24a8;
    uVar15 = _DAT_8c4c24a4;
    uVar25 = _DAT_8c4c24a0;
    _DAT_8c4c24bc = uVar4;
    if (cVar27 == '\0') {
      *(undefined4 *)((int)puVar9 + 0x3c) = _DAT_8c4c24ac;
      *(undefined4 *)(puVar9 + 7) = uVar14;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar15;
      *(undefined4 *)(puVar9 + 6) = uVar25;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24a4,_DAT_8c4c24a0);
      uVar2 = CONCAT44(_DAT_8c4c24ac,_DAT_8c4c24a8);
      puVar9[7] = CONCAT44(uVar4,_DAT_8c4c24b8);
      puVar9[6] = uVar21;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c23dc42\n.set _FUN_8c23dc42, _FUN_8c23dc42_def\n");
