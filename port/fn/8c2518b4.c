#include "../decls.h"
uint FUN_8c2518b4_def(ushort *ar4,double *ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  double *pdVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double *pdVar7;
  double *pdVar8;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar9;
  double *pdVar10;
  int ar7_00;
  double *unaff_r8;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  double in_dr0;
  double dVar14;
  double in_dr2;
  double dVar15;
  double dVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double in_dr4;
  double dVar20;
  float fVar21;
  double in_xd2;
  double dVar22;
  double in_xd14;
  bool bVar23;
  char cVar24;
  char cVar25;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  
  cVar25 = '\0';
  cVar24 = '\0';
  uVar1 = *ar4;
  (*(uint*)((uchar*)&iStack_34+0)) = uVar1 & 0x3fff;
  uVar6 = 0x3f000000;
  uVar3 = uVar1 & 0xc000;
  puVar12 = *(ushort **)(ar4 + 2);
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    for (iStack_2c = 0; uVar3 = (uint)ar4[1], iStack_2c < (int)uVar3; iStack_2c = iStack_2c + 1) {
      pdVar8 = (double *)((uint)*puVar12 * 0x40 + _DAT_8c4aa510);
      puVar13 = puVar12 + 2;
      pdVar7 = (double *)((uint)puVar12[1] * 0x40 + _DAT_8c4aa510);
      puVar12 = puVar12 + 3;
      pdVar9 = (double *)((uint)*puVar13 * 0x40 + _DAT_8c4aa510);
      if ((_DAT_8c4ab308 & 0x800000) == 0) {
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)((int)pdVar7 + 4);
          dVar20 = (double)CONCAT44(uVar19,*(undefined4 *)((int)pdVar8 + 4));
          dVar22 = (double)CONCAT44(uVar19,SUB84(in_dr4,0));
        }
        else {
          dVar20 = *(double *)((int)pdVar7 + 4);
          in_xd2 = *(double *)((int)pdVar8 + 4);
          uVar19 = (undefined4)((ulonglong)dVar20 >> 0x20);
          dVar22 = dVar20;
        }
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar20,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(pdVar9 + 1));
          dVar22 = (double)CONCAT44(uVar19,*(undefined4 *)(pdVar7 + 1));
        }
        else {
          in_xd2 = pdVar9[1];
        }
        fVar21 = SUB84(dVar22,0);
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - fVar21);
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar21);
        }
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar20,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 * dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(pdVar8 + 1));
        }
        else {
          in_xd2 = pdVar8[1];
        }
        if (cVar24 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar20,0));
        }
        else {
          dVar14 = in_dr0 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    *(undefined4 *)((int)pdVar9 + 4));
        }
        else {
          in_xd2 = *(double *)((int)pdVar9 + 4);
        }
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0) - (float)((ulonglong)dVar22 >> 0x20));
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        uVar3 = (uint)((ulonglong)dVar20 >> 0x20);
        dVar22 = dVar20;
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(uVar3,fVar21);
        }
        if (cVar24 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                    SUB84(dVar14,0) * SUB84(dVar20,0));
        }
        else {
          in_dr0 = dVar14 * dVar20;
        }
        in_dr2 = (double)((ulonglong)uVar3 << 0x20);
        if (cVar24 == '\0') {
          fVar21 = (float)((ulonglong)dVar22 >> 0x20) - SUB84(in_dr0,0);
          in_dr4 = (double)CONCAT44(fVar21,SUB84(dVar22,0));
          bVar23 = 0.0 < fVar21;
        }
        else {
          in_dr4 = dVar22 - in_dr0;
          bVar23 = in_dr2 < in_dr4;
        }
        if (!bVar23) goto LAB_8c2519bc;
      }
      else {
LAB_8c2519bc:
        uVar19 = SUB84(in_dr2,0);
        uVar5 = SUB84(in_dr0,0);
        *(undefined4 *)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        uVar18 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar18 = _DAT_8c4c11b4;
        }
        uVar4 = float_to_color_u8(pdVar8,ar5,ar6,ar7);
        dVar14 = in_xd14;
        dVar22 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(uVar6,uVar18);
          dVar22 = in_xd2;
          uVar19 = uVar6;
          dVar20 = (double)CONCAT44(uVar6,uVar5);
        }
        *(undefined4 *)(pdVar8 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar19);
          pdVar11 = (double *)((int)pdVar8 + 0x34);
        }
        else {
          dVar15 = pdVar8[6];
          pdVar11 = pdVar8 + 7;
        }
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar15,0);
          dVar15 = (double)CONCAT44(*(undefined4 *)pdVar11,uVar19);
          dVar14 = dVar22;
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar8[4] = dVar22;
          dVar15 = *pdVar11;
          dVar22 = dVar14;
        }
        pdVar10 = (double *)((int)pdVar8 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar10 = SUB84(dVar15,0);
        }
        else {
          *pdVar10 = dVar14;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar22,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar15,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar22 = *pdVar8;
          dVar20 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar8 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar19;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar22 >> 0x20);
        }
        else {
          dVar15 = pdVar8[2];
          unaff_r8[3] = pdVar8[3];
          unaff_r8[2] = dVar15;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar22;
        }
        *(undefined4 *)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        uVar19 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar19 = _DAT_8c4c11b4;
        }
        uVar5 = float_to_color_u8(pdVar7,pdVar11,ar6,ar7);
        uVar18 = SUB84(dVar20,0);
        dVar16 = in_xd14;
        dVar20 = in_xd14;
        dVar15 = in_xd14;
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(uVar6,uVar19);
          dVar20 = dVar14;
          uVar18 = uVar6;
          dVar15 = (double)CONCAT44(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(pdVar7 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar18);
          pdVar8 = (double *)((int)pdVar7 + 0x34);
        }
        else {
          dVar22 = pdVar7[6];
          pdVar8 = pdVar7 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar16 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar14 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar19);
          dVar16 = dVar20;
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar15,0));
        }
        else {
          pdVar7[4] = dVar20;
          dVar14 = *pdVar8;
          dVar22 = dVar16;
        }
        pdVar11 = (double *)((int)pdVar7 + 0x24);
        if (cVar24 == '\0') {
          dVar14 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar14,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar11 = SUB84(dVar14,0);
        }
        else {
          *pdVar11 = dVar16;
        }
        CacheBlockWriteBack(pdVar11);
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar22,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar14,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar22 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar7 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar19;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)pdVar7 = (int)((ulonglong)dVar22 >> 0x20);
        }
        else {
          dVar14 = pdVar7[2];
          unaff_r8[7] = pdVar7[3];
          unaff_r8[6] = dVar14;
          unaff_r8[5] = dVar20;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar22;
        }
        *(undefined4 *)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        uVar19 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar19 = _DAT_8c4c11b4;
        }
        uVar5 = float_to_color_u8(pdVar9,pdVar8,ar6,ar7);
        uVar18 = SUB84(dVar20,0);
        dVar14 = in_xd14;
        in_xd2 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(uVar6,uVar19);
          in_xd2 = dVar16;
          uVar18 = uVar6;
          dVar20 = (double)CONCAT44(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(pdVar9 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar18);
          ar5 = (double *)((int)pdVar9 + 0x34);
        }
        else {
          dVar22 = pdVar9[6];
          ar5 = pdVar9 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar9 + 4) = SUB84(dVar22,0);
          dVar15 = (double)CONCAT44(*(undefined4 *)ar5,uVar19);
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar9[4] = in_xd2;
          dVar15 = *ar5;
          in_xd2 = dVar14;
          dVar22 = dVar14;
        }
        pdVar8 = (double *)((int)pdVar9 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar8 = SUB84(dVar15,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar22,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar15,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar9 + 2);
          in_dr4 = (double)CONCAT44(uVar19,SUB84(dVar14,0));
          *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar9 + 0x14);
          *(undefined4 *)(pdVar7 + 7) = uVar19;
          *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar9[2];
          pdVar7[7] = pdVar9[3];
          pdVar7[6] = in_dr4;
          pdVar7[5] = in_dr2;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
      }
    }
  }
  else if (uVar3 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_24 = 0;
    while( true ) {
      uVar19 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_24) break;
      pdVar9 = (double *)((uint)*puVar12 * 0x40 + _DAT_8c4aa510);
      pdVar8 = (double *)((uint)puVar12[1] * 0x40 + _DAT_8c4aa510);
      puVar13 = puVar12 + 3;
      pdVar11 = (double *)((uint)puVar12[2] * 0x40 + _DAT_8c4aa510);
      puVar12 = puVar12 + 4;
      pdVar7 = (double *)((uint)*puVar13 * 0x40 + _DAT_8c4aa510);
      if ((_DAT_8c4ab308 & 0x800000) == 0) {
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)((int)pdVar8 + 4);
          dVar22 = (double)CONCAT44(uVar19,*(undefined4 *)((int)pdVar9 + 4));
        }
        else {
          dVar22 = *(double *)((int)pdVar8 + 4);
          in_xd2 = *(double *)((int)pdVar9 + 4);
        }
        if (cVar24 == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar11 + 1));
          dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),uVar19);
        }
        else {
          in_xd2 = pdVar11[1];
          dVar20 = pdVar8[1];
        }
        fVar21 = (float)((ulonglong)dVar20 >> 0x20);
        if (cVar24 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0) - fVar21);
        }
        else {
          dVar22 = dVar22 - dVar20;
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar21);
        }
        if (cVar24 == '\0') {
          dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar22,0),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 * dVar22;
        }
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar9 + 1));
        }
        else {
          in_xd2 = pdVar9[1];
        }
        if (cVar24 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar22,0));
        }
        else {
          dVar14 = in_dr0 - dVar22;
        }
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    *(undefined4 *)((int)pdVar11 + 4));
        }
        else {
          in_xd2 = *(double *)((int)pdVar11 + 4);
        }
        if (cVar24 == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                    SUB84(dVar22,0) - SUB84(dVar20,0));
        }
        else {
          dVar22 = dVar22 - dVar20;
        }
        uVar3 = (uint)((ulonglong)dVar22 >> 0x20);
        dVar15 = dVar22;
        if (cVar25 == '\0') {
          dVar15 = (double)CONCAT44(uVar3,SUB84(dVar20,0));
        }
        if (cVar24 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                    SUB84(dVar14,0) * SUB84(dVar22,0));
        }
        else {
          in_dr0 = dVar14 * dVar22;
        }
        in_dr2 = (double)((ulonglong)uVar3 << 0x20);
        if (cVar24 == '\0') {
          fVar21 = (float)((ulonglong)dVar15 >> 0x20) - SUB84(in_dr0,0);
          in_dr4 = (double)CONCAT44(fVar21,SUB84(dVar15,0));
          bVar23 = 0.0 < fVar21;
        }
        else {
          in_dr4 = dVar15 - in_dr0;
          bVar23 = in_dr2 < in_dr4;
        }
        if (!bVar23) goto LAB_8c251bbc;
      }
      else {
LAB_8c251bbc:
        uVar19 = SUB84(in_dr2,0);
        uVar5 = SUB84(in_dr0,0);
        *(undefined4 *)pdVar9 = 0xe0000000;
        CacheBlockWriteBack(pdVar9);
        uVar18 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar18 = _DAT_8c4c11b4;
        }
        uVar4 = float_to_color_u8(pdVar9,ar5,ar6,ar7);
        dVar14 = in_xd14;
        dVar22 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(uVar6,uVar18);
          dVar22 = in_xd2;
          uVar19 = uVar6;
          dVar20 = (double)CONCAT44(uVar6,uVar5);
        }
        *(undefined4 *)(pdVar9 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar19);
          pdVar10 = (double *)((int)pdVar9 + 0x34);
        }
        else {
          dVar15 = pdVar9[6];
          pdVar10 = pdVar9 + 7;
        }
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar9 + 4) = SUB84(dVar15,0);
          dVar15 = (double)CONCAT44(*(undefined4 *)pdVar10,uVar19);
          dVar14 = dVar22;
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar9[4] = dVar22;
          dVar15 = *pdVar10;
          dVar22 = dVar14;
        }
        pdVar2 = (double *)((int)pdVar9 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar2 = SUB84(dVar15,0);
        }
        else {
          *pdVar2 = dVar14;
        }
        CacheBlockWriteBack(pdVar2);
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar22,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar15,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          dVar22 = *pdVar9;
          dVar20 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar9 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar19;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar22 >> 0x20);
        }
        else {
          dVar15 = pdVar9[2];
          unaff_r8[3] = pdVar9[3];
          unaff_r8[2] = dVar15;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar22;
        }
        *(undefined4 *)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        uVar19 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar19 = _DAT_8c4c11b4;
        }
        uVar5 = float_to_color_u8(pdVar8,pdVar10,ar6,ar7);
        uVar18 = SUB84(dVar20,0);
        dVar16 = in_xd14;
        dVar20 = in_xd14;
        dVar15 = in_xd14;
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(uVar6,uVar19);
          dVar20 = dVar14;
          uVar18 = uVar6;
          dVar15 = (double)CONCAT44(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(pdVar8 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar18);
          pdVar9 = (double *)((int)pdVar8 + 0x34);
        }
        else {
          dVar22 = pdVar8[6];
          pdVar9 = pdVar8 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar16 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar22,0);
          dVar14 = (double)CONCAT44(*(undefined4 *)pdVar9,uVar19);
          dVar16 = dVar20;
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar15,0));
        }
        else {
          pdVar8[4] = dVar20;
          dVar14 = *pdVar9;
          dVar22 = dVar16;
        }
        pdVar10 = (double *)((int)pdVar8 + 0x24);
        if (cVar24 == '\0') {
          dVar14 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar14,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar10 = SUB84(dVar14,0);
        }
        else {
          *pdVar10 = dVar16;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar22,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar14,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar22 = *pdVar8;
          dVar20 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar8 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar19;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar8 = unaff_r8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)dVar22 >> 0x20);
        }
        else {
          dVar14 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar14;
          unaff_r8[5] = dVar20;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar22;
        }
        *(undefined4 *)pdVar11 = 0xe0000000;
        CacheBlockWriteBack(pdVar11);
        uVar19 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar19 = _DAT_8c4c11b4;
        }
        uVar5 = float_to_color_u8(pdVar11,pdVar9,ar6,ar7);
        uVar18 = SUB84(dVar20,0);
        dVar15 = in_xd14;
        dVar20 = in_xd14;
        dVar14 = in_xd14;
        if (cVar25 == '\0') {
          dVar15 = (double)CONCAT44(uVar6,uVar19);
          dVar20 = dVar16;
          uVar18 = uVar6;
          dVar14 = (double)CONCAT44(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(pdVar11 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 6),uVar18);
          pdVar9 = (double *)((int)pdVar11 + 0x34);
        }
        else {
          dVar22 = pdVar11[6];
          pdVar9 = pdVar11 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar14 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar15 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar11 + 4) = SUB84(dVar22,0);
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar9,uVar19);
          dVar15 = dVar20;
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar14,0));
        }
        else {
          pdVar11[4] = dVar20;
          dVar16 = *pdVar9;
          dVar22 = dVar15;
        }
        pdVar10 = (double *)((int)pdVar11 + 0x24);
        if (cVar24 == '\0') {
          dVar16 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar10 = SUB84(dVar16,0);
        }
        else {
          *pdVar10 = dVar15;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar22,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(dVar16,0));
          pdVar11 = pdVar11 + 1;
        }
        else {
          dVar22 = *pdVar11;
          dVar20 = pdVar11[1];
          pdVar11 = pdVar11 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar11 + 2);
          *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar11 + 0x14);
          *(undefined4 *)(pdVar8 + 7) = uVar19;
          *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)dVar22 >> 0x20);
        }
        else {
          dVar14 = pdVar11[2];
          pdVar8[7] = pdVar11[3];
          pdVar8[6] = dVar14;
          pdVar8[5] = dVar20;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar22;
        }
        *(undefined4 *)pdVar7 = 0xf0000000;
        CacheBlockWriteBack(pdVar7);
        uVar19 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar19 = _DAT_8c4c11b4;
        }
        uVar5 = float_to_color_u8(pdVar7,pdVar9,ar6,ar7);
        uVar18 = SUB84(dVar20,0);
        dVar14 = in_xd14;
        in_xd2 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(uVar6,uVar19);
          in_xd2 = dVar15;
          uVar18 = uVar6;
          dVar20 = (double)CONCAT44(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(pdVar7 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar18);
          ar5 = (double *)((int)pdVar7 + 0x34);
        }
        else {
          dVar22 = pdVar7[6];
          ar5 = pdVar7 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar15 = (double)CONCAT44(*(undefined4 *)ar5,uVar19);
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar7[4] = in_xd2;
          dVar15 = *ar5;
          in_xd2 = dVar14;
          dVar22 = dVar14;
        }
        pdVar9 = (double *)((int)pdVar7 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar9 = SUB84(dVar15,0);
        }
        else {
          *pdVar9 = in_xd2;
        }
        CacheBlockWriteBack(pdVar9);
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar22,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar15,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          in_dr2 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar7 + 2);
          in_dr4 = (double)CONCAT44(uVar19,SUB84(dVar14,0));
          *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(pdVar8 + 7) = uVar19;
          *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          pdVar8[7] = pdVar7[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = in_dr2;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
      }
      iStack_24 = iStack_24 + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    for (iStack_30 = 0; uVar3 = (uint)ar4[1], iStack_30 < (int)uVar3; iStack_30 = iStack_30 + 1) {
      puVar13 = puVar12 + 1;
      uVar3 = (uint)*puVar12;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar3;
      ar7_00 = _DAT_8c4aa510;
      if ((_DAT_8c4ab308 & 0x800000) == 0) {
        ar6 = (uint)puVar12[2] * 0x40 + _DAT_8c4aa510;
        ar5 = (double *)((uint)*puVar13 * 0x40 + _DAT_8c4aa510);
        ar7_00 = _DAT_8c4aa510 + (uint)puVar12[3] * 0x40;
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(ar6 + 4);
          dVar20 = (double)CONCAT44(uVar19,*(undefined4 *)((int)ar5 + 4));
          dVar22 = (double)CONCAT44(uVar19,SUB84(in_dr4,0));
        }
        else {
          dVar20 = *(double *)(ar6 + 4);
          in_xd2 = *(double *)((int)ar5 + 4);
          uVar19 = (undefined4)((ulonglong)dVar20 >> 0x20);
          dVar22 = dVar20;
        }
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar20,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(ar7_00 + 8));
          dVar22 = (double)CONCAT44(uVar19,*(undefined4 *)(ar6 + 8));
        }
        else {
          in_xd2 = *(double *)(ar7_00 + 8);
        }
        fVar21 = SUB84(dVar22,0);
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - fVar21);
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar21);
        }
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar20,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 * dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(ar5 + 1));
        }
        else {
          in_xd2 = ar5[1];
        }
        if (cVar24 == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar20,0));
        }
        else {
          dVar14 = in_dr0 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(ar7_00 + 4));
        }
        else {
          in_xd2 = *(double *)(ar7_00 + 4);
        }
        if (cVar24 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                    SUB84(dVar20,0) - (float)((ulonglong)dVar22 >> 0x20));
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        uVar17 = (uint)((ulonglong)dVar20 >> 0x20);
        dVar22 = dVar20;
        if (cVar25 == '\0') {
          dVar22 = (double)CONCAT44(uVar17,fVar21);
        }
        if (cVar24 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                    SUB84(dVar14,0) * SUB84(dVar20,0));
        }
        else {
          in_dr0 = dVar14 * dVar20;
        }
        in_dr2 = (double)((ulonglong)uVar17 << 0x20);
        if (cVar24 == '\0') {
          fVar21 = (float)((ulonglong)dVar22 >> 0x20) - SUB84(in_dr0,0);
          in_dr4 = (double)CONCAT44(fVar21,SUB84(dVar22,0));
          bVar23 = 0.0 < fVar21;
        }
        else {
          in_dr4 = dVar22 - in_dr0;
          bVar23 = in_dr2 < in_dr4;
        }
        if (!bVar23) goto LAB_8c251dfc;
        puVar12 = puVar13 + uVar3;
      }
      else {
LAB_8c251dfc:
        _DAT_8c4aa520 = _DAT_8c4aa520 + uVar3;
        iStack_34 = 0;
        dVar22 = in_xd2;
        if (0 < (int)(uVar3 - 1)) {
          do {
            uVar19 = SUB84(in_dr2,0);
            uVar5 = SUB84(in_dr0,0);
            uVar1 = *puVar13;
            puVar13 = puVar13 + 1;
            pdVar7 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
            *(undefined4 *)pdVar7 = 0xe0000000;
            CacheBlockWriteBack(pdVar7);
            uVar18 = _DAT_8c4c11b0;
            if (cVar25 == '\0') {
              uVar18 = _DAT_8c4c11b4;
            }
            uVar4 = float_to_color_u8(pdVar7,ar5,ar6,ar7_00);
            in_xd2 = in_xd14;
            dVar20 = in_xd14;
            dVar14 = in_xd14;
            if (cVar25 == '\0') {
              in_xd2 = (double)CONCAT44(uVar6,uVar18);
              dVar20 = dVar22;
              uVar19 = uVar6;
              dVar14 = (double)CONCAT44(uVar6,uVar5);
            }
            *(undefined4 *)(pdVar7 + 5) = uVar4;
            if (cVar25 == '\0') {
              dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar19);
              ar5 = (double *)((int)pdVar7 + 0x34);
            }
            else {
              dVar22 = pdVar7[6];
              ar5 = pdVar7 + 7;
            }
            if (cVar24 == '\0') {
              dVar22 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar14 >> 0x20) *
                                      (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
            }
            uVar19 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            if (cVar25 == '\0') {
              *(int *)(pdVar7 + 4) = SUB84(dVar22,0);
              dVar15 = (double)CONCAT44(*(undefined4 *)ar5,uVar19);
              in_xd2 = dVar20;
              dVar22 = (double)CONCAT44(uVar19,SUB84(dVar14,0));
            }
            else {
              pdVar7[4] = dVar20;
              dVar15 = *ar5;
              dVar22 = in_xd2;
            }
            pdVar8 = (double *)((int)pdVar7 + 0x24);
            if (cVar24 == '\0') {
              dVar15 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                      (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
            }
            if (cVar25 == '\0') {
              *(int *)pdVar8 = SUB84(dVar15,0);
            }
            else {
              *pdVar8 = in_xd2;
            }
            CacheBlockWriteBack(pdVar8);
            if (cVar25 == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar22,0));
              in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar15,0));
              pdVar7 = pdVar7 + 1;
            }
            else {
              in_dr0 = *pdVar7;
              in_dr2 = pdVar7[1];
              pdVar7 = pdVar7 + 2;
            }
            if (cVar25 == '\0') {
              uVar19 = *(undefined4 *)(pdVar7 + 2);
              *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
              *(undefined4 *)(unaff_r8 + 3) = uVar19;
              *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
              unaff_r8 = unaff_r8 + 2;
              *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              dVar22 = pdVar7[2];
              unaff_r8[3] = pdVar7[3];
              unaff_r8[2] = dVar22;
              unaff_r8[1] = in_dr2;
              *unaff_r8 = in_dr0;
            }
            unaff_r8 = unaff_r8 + 4;
            iStack_34 = iStack_34 + 1;
            dVar22 = in_xd2;
          } while (iStack_34 < (int)(uVar3 - 1));
        }
        uVar19 = SUB84(in_dr2,0);
        uVar5 = SUB84(in_dr0,0);
        puVar12 = puVar13 + 1;
        pdVar7 = (double *)((uint)*puVar13 * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar7 = 0xf0000000;
        CacheBlockWriteBack(pdVar7);
        uVar18 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar18 = _DAT_8c4c11b4;
        }
        uVar4 = float_to_color_u8(pdVar7,ar5,ar6,ar7_00);
        dVar14 = in_xd14;
        dVar22 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(uVar6,uVar18);
          dVar22 = in_xd2;
          uVar19 = uVar6;
          dVar20 = (double)CONCAT44(uVar6,uVar5);
        }
        *(undefined4 *)(pdVar7 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar19);
          ar5 = (double *)((int)pdVar7 + 0x34);
        }
        else {
          dVar15 = pdVar7[6];
          ar5 = pdVar7 + 7;
        }
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar15,0);
          dVar15 = (double)CONCAT44(*(undefined4 *)ar5,uVar19);
          in_xd2 = dVar22;
          dVar22 = (double)CONCAT44(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar7[4] = dVar22;
          dVar15 = *ar5;
          in_xd2 = dVar14;
          dVar22 = dVar14;
        }
        pdVar8 = (double *)((int)pdVar7 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar8 = SUB84(dVar15,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar22,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar15,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          in_dr2 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar7 + 2);
          in_dr4 = (double)CONCAT44(uVar19,SUB84(dVar14,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar19;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
      }
    }
  }
  else if (uVar3 == 0xc000) {
    if ((_DAT_8c4ab308 & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c241d90;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c241be8;
    }
                    
                    
    uVar6 = (*UNRECOVERED_JUMPTABLE)(ar4,(ushort)iStack_34);
    return uVar6;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c2518b4\n.set _FUN_8c2518b4, _FUN_8c2518b4_def\n");
