#include "../decls.h"
uint FUN_8c250144_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  double *pdVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  double *pdVar14;
  double *ar6_00;
  undefined1 *ar6_01;
  double *unaff_r8;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  double in_dr0;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  uint uVar25;
  double in_dr4;
  double dVar26;
  float fVar29;
  double dVar27;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 in_dr14;
  double dVar33;
  double in_xd2;
  double dVar34;
  double in_xd4;
  double in_xd14;
  bool bVar35;
  float in_PR;
  char cVar36;
  char cVar37;
  undefined8 *ain0;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uVar28;
  
  cVar37 = '\0';
  cVar36 = '\0';
  uStack_1c = (undefined4)in_dr14;
  uStack_20 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar1 = *ar4;
  puVar18 = *(ushort **)(ar4 + 2);
  dVar33 = (double)CONCAT44(uStack_20,0x3f000000);
  uVar2 = uVar1 & 0xc000;
  fStack_24 = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    iStack_5c = 0;
    dVar33 = 7.946779287948402e-07;
    ain0 = (undefined8 *)&DAT_8c4c2630;
    while( true ) {
      uVar28 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= iStack_5c) break;
      uVar1 = *puVar18;
      puVar20 = puVar18 + 1;
      puVar19 = puVar18 + 2;
      puVar18 = puVar18 + 3;
      pdVar10 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
      if (cVar37 == '\0') {
        uVar28 = *(undefined4 *)((int)pdVar10 + 4);
      }
      else {
        in_xd4 = *(double *)((int)pdVar10 + 4);
      }
      pdVar15 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
      if (cVar37 == '\0') {
        dVar23 = (double)CONCAT44(uVar28,*(undefined4 *)((int)pdVar15 + 4));
      }
      else {
        in_xd2 = *(double *)((int)pdVar15 + 4);
        dVar23 = in_xd4;
      }
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - SUB84(dVar23,0),
                                  SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 - dVar23;
      }
      pdVar16 = (double *)((uint)*puVar19 * 0x40 + _DAT_8c4aa510);
      if (cVar37 == '\0') {
        fVar29 = *(float *)(pdVar10 + 1);
        dVar26 = (double)CONCAT44(fVar29,uVar28);
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(pdVar16 + 1));
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar29);
      }
      else {
        dVar26 = pdVar10[1];
        in_xd2 = pdVar16[1];
        fVar29 = (float)((ulonglong)dVar26 >> 0x20);
      }
      if (cVar36 == '\0') {
        fVar29 = SUB84(dVar23,0) - fVar29;
        dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * fVar29,fVar29);
      }
      else {
        dVar23 = (dVar23 - dVar26) * (dVar23 - dVar26);
      }
      if (cVar37 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(pdVar15 + 1));
      }
      else {
        in_xd2 = pdVar15[1];
      }
      if (cVar36 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar23,0)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar23;
      }
      uVar28 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar37 == '\0') {
        dVar23 = (double)CONCAT44(uVar28,*(undefined4 *)((int)pdVar16 + 4));
        dVar26 = (double)CONCAT44(uVar28,SUB84(dVar26,0));
      }
      else {
        in_xd2 = *(double *)((int)pdVar16 + 4);
        dVar26 = dVar23;
      }
      iStack_54 = 0;
      if (cVar36 == '\0') {
        fVar29 = SUB84(dVar23,0) - SUB84(dVar26,0);
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),fVar29);
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * fVar29);
      }
      else {
        dVar23 = dVar23 - dVar26;
        in_dr0 = dVar21 * dVar23;
      }
      if (cVar36 == '\0') {
        fVar29 = (float)((ulonglong)dVar26 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar29,SUB84(dVar26,0));
        bVar35 = 0.0 < fVar29;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar35 = (double)((ulonglong)dVar23 & 0xffffffff00000000) < in_dr4;
      }
      if (bVar35) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          iStack_54 = 0x8000;
          goto LAB_8c250264;
        }
      }
      else {
LAB_8c250264:
        pdVar17 = pdVar10 + 2;
        puVar11 = auStack_3c;
        pdVar14 = pdVar16 + 2;
        FUN_8c2361a8(pdVar15 + 2,pdVar17,pdVar14,puVar11);
        uVar28 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_3c,pdVar17,pdVar14,puVar11,ain0);
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 2),*(undefined4 *)(pdVar10 + 2));
        }
        else {
          dVar23 = pdVar15[2];
          in_xd2 = pdVar10[2];
        }
        puVar12 = auStack_3c;
        puVar11 = &DAT_8c4c2620;
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(pdVar16 + 2));
        }
        else {
          in_xd2 = pdVar16[2];
        }
        fVar29 = (float)((ulonglong)dVar33 >> 0x20);
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          uStack_30 = (undefined4)((ulonglong)dVar23 >> 0x20);
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 0x14),
                                    *(undefined4 *)((int)pdVar10 + 0x14));
        }
        else {
          uStack_30 = SUB84(dVar23,0);
          dVar23 = *(double *)((int)pdVar15 + 0x14);
          in_xd2 = *(double *)((int)pdVar10 + 0x14);
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                    *(undefined4 *)((int)pdVar16 + 0x14));
        }
        else {
          in_xd2 = *(double *)((int)pdVar16 + 0x14);
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          uStack_2c = (undefined4)((ulonglong)dVar23 >> 0x20);
          dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 3),*(undefined4 *)(pdVar10 + 3));
        }
        else {
          uStack_2c = SUB84(dVar23,0);
          dVar23 = pdVar15[3];
          in_xd2 = pdVar10[3];
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(pdVar16 + 3));
        }
        else {
          in_xd2 = pdVar16[3];
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        fVar29 = (float)((ulonglong)dVar23 >> 0x20);
        fStack_28 = fVar29;
        if (cVar37 != '\0') {
          fStack_28 = SUB84(dVar23,0);
          fStack_24 = fVar29;
        }
        puVar13 = &uStack_30;
        FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar12,iStack_54);
        uVar30 = SUB84(dVar23,0);
        dVar23 = _DAT_8c4c2624;
        if (cVar37 == '\0') {
          dVar23 = in_xd4;
        }
        uVar7 = float_to_color_u8(puVar11,puVar13,puVar12,iStack_54);
        if (cVar37 == '\0') {
          uVar3 = *(undefined4 *)((int)ain0 + 4);
          in_xd4 = dVar23;
        }
        else {
          in_xd4 = *(double *)((int)ain0 + 4);
          uVar3 = (undefined4)*ain0;
        }
        uVar4 = float_to_color_u8(puVar11,puVar13,puVar12,iStack_54);
        uVar31 = SUB84(dVar33,0);
        dVar23 = in_xd14;
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          dVar23 = in_xd2;
          uVar30 = uVar31;
          dVar26 = (double)CONCAT44(uVar31,uVar28);
        }
        *(undefined4 *)pdVar15 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 6),uVar30);
        }
        else {
          dVar21 = pdVar15[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                  (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar15 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar15 + 0x34),uVar31);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar15[4] = dVar23;
          uVar24 = *(ulonglong *)((int)pdVar15 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar26,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),(int)uVar24);
          pdVar15 = pdVar15 + 1;
        }
        else {
          *(double *)((int)pdVar15 + 0x24) = dVar23;
          dVar26 = *pdVar15;
          dVar21 = pdVar15[1];
          pdVar15 = pdVar15 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar15 + 2);
          dVar27 = (double)CONCAT44(uVar28,uVar3);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar15 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar28;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar21 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar26 >> 0x20);
          dVar21 = (double)((ulonglong)dVar33 & 0xffffffff);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar15[2];
          unaff_r8[3] = pdVar15[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar26;
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        *(undefined4 *)pdVar10 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                  (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar10 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar10 + 0x34),uVar31);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar10[4] = dVar23;
          uVar24 = *(ulonglong *)((int)pdVar10 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar26,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)((int)pdVar10 + 0x24) = dVar23;
          dVar26 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar10 + 2);
          dVar27 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar28;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar21 >> 0x20);
          pdVar10 = unaff_r8 + 6;
          *(int *)pdVar10 = (int)((ulonglong)dVar26 >> 0x20);
          dVar21 = (double)((ulonglong)dVar33 & 0xffffffff);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar10[2];
          unaff_r8[7] = pdVar10[3];
          unaff_r8[6] = dVar27;
          unaff_r8[5] = dVar21;
          pdVar10 = unaff_r8 + 4;
          *pdVar10 = dVar26;
          dVar26 = in_xd14;
          dVar23 = in_xd14;
        }
        *(undefined4 *)pdVar16 = 0xf0000000;
        *(undefined4 *)(pdVar16 + 5) = uVar7;
        *(undefined4 *)((int)pdVar16 + 0x2c) = uVar4;
        if (cVar37 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar16 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar16[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                  (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar16 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar16 + 0x34),uVar31);
          in_xd2 = dVar23;
          dVar23 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar16[4] = dVar23;
          uVar24 = *(ulonglong *)((int)pdVar16 + 0x34);
          in_xd2 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar16 + 0x24) = (int)uVar24;
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar16,SUB84(dVar23,0));
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 4),(int)uVar24);
          pdVar16 = pdVar16 + 1;
        }
        else {
          *(double *)((int)pdVar16 + 0x24) = in_xd2;
          in_dr0 = *pdVar16;
          dVar23 = pdVar16[1];
          pdVar16 = pdVar16 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar16 + 2);
          in_dr4 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
          *(undefined4 *)((int)pdVar10 + 0x3c) = *(undefined4 *)((int)pdVar16 + 0x14);
          *(undefined4 *)(pdVar10 + 7) = uVar28;
          *(int *)((int)pdVar10 + 0x34) = (int)((ulonglong)dVar23 >> 0x20);
          pdVar10 = pdVar10 + 6;
          *(int *)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar16[2];
          pdVar10[7] = pdVar16[3];
          pdVar10[6] = in_dr4;
          pdVar10[5] = dVar23;
          pdVar10 = pdVar10 + 4;
          *pdVar10 = in_dr0;
        }
        unaff_r8 = pdVar10 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
      }
      iStack_5c = iStack_5c + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    for (iStack_54 = 0; uVar2 = (uint)ar4[1], iStack_54 < (int)uVar2; iStack_54 = iStack_54 + 1) {
      puVar20 = puVar18 + 3;
      pdVar17 = (double *)((uint)puVar18[2] * 0x40 + _DAT_8c4aa510);
      pdVar15 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
      pdVar16 = (double *)((uint)puVar18[1] * 0x40 + _DAT_8c4aa510);
      puVar18 = puVar18 + 4;
      pdVar10 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
      if (cVar37 == '\0') {
        uVar28 = *(undefined4 *)((int)pdVar16 + 4);
        dVar26 = (double)CONCAT44(uVar28,*(undefined4 *)((int)pdVar15 + 4));
        dVar23 = (double)CONCAT44(uVar28,SUB84(in_dr4,0));
      }
      else {
        dVar26 = *(double *)((int)pdVar16 + 4);
        in_xd2 = *(double *)((int)pdVar15 + 4);
        uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar23 = dVar26;
      }
      if (cVar36 == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - SUB84(dVar26,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar26;
      }
      if (cVar37 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(pdVar17 + 1));
        dVar23 = (double)CONCAT44(uVar28,*(undefined4 *)(pdVar16 + 1));
      }
      else {
        in_xd2 = pdVar17[1];
      }
      fVar29 = SUB84(dVar23,0);
      if (cVar36 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) - fVar29);
      }
      else {
        dVar26 = dVar26 - dVar23;
      }
      if (cVar37 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar29);
      }
      if (cVar36 == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar26,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 * dVar26;
      }
      if (cVar37 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(pdVar15 + 1));
      }
      else {
        in_xd2 = pdVar15[1];
      }
      if (cVar36 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar26,0)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar26;
      }
      if (cVar37 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)((int)pdVar17 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)((int)pdVar17 + 4);
      }
      uStack_4c = 0;
      if (cVar36 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                  SUB84(dVar26,0) - (float)((ulonglong)dVar23 >> 0x20));
      }
      else {
        dVar26 = dVar26 - dVar23;
      }
      uVar2 = (uint)((ulonglong)dVar26 >> 0x20);
      dVar23 = dVar26;
      if (cVar37 == '\0') {
        dVar23 = (double)CONCAT44(uVar2,fVar29);
      }
      if (cVar36 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * SUB84(dVar26,0)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar26;
      }
      if (cVar36 == '\0') {
        fVar29 = (float)((ulonglong)dVar23 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar29,SUB84(dVar23,0));
        bVar35 = 0.0 < fVar29;
      }
      else {
        in_dr4 = dVar23 - in_dr0;
        bVar35 = (double)((ulonglong)uVar2 << 0x20) < in_dr4;
      }
      if (bVar35) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_4c = 0x8000;
          goto LAB_8c2504bc;
        }
      }
      else {
LAB_8c2504bc:
        pdVar14 = pdVar16 + 2;
        puVar11 = auStack_3c;
        ar6_00 = pdVar17 + 2;
        FUN_8c2361a8(pdVar15 + 2,pdVar14,ar6_00,puVar11);
        uVar28 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_3c,pdVar14,ar6_00,puVar11,pdVar10);
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar16 + 2),*(undefined4 *)(pdVar17 + 2));
        }
        else {
          dVar23 = pdVar16[2];
          in_xd2 = pdVar17[2];
        }
        puVar11 = &DAT_8c4c2620;
        puVar12 = auStack_3c;
        fVar29 = SUB84(dVar33,0);
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          uStack_30 = (undefined4)((ulonglong)dVar23 >> 0x20);
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 0x14),
                                    *(undefined4 *)((int)pdVar17 + 0x14));
        }
        else {
          uStack_30 = SUB84(dVar23,0);
          dVar23 = *(double *)((int)pdVar16 + 0x14);
          in_xd2 = *(double *)((int)pdVar17 + 0x14);
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        if (cVar37 == '\0') {
          uStack_2c = (undefined4)((ulonglong)dVar23 >> 0x20);
          dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar16 + 3),*(undefined4 *)(pdVar17 + 3));
        }
        else {
          uStack_2c = SUB84(dVar23,0);
          dVar23 = pdVar16[3];
          in_xd2 = pdVar17[3];
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44(((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0)) * fVar29,
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = (dVar23 + dVar23) * dVar33;
        }
        fVar29 = (float)((ulonglong)dVar23 >> 0x20);
        fStack_28 = fVar29;
        if (cVar37 != '\0') {
          fStack_28 = SUB84(dVar23,0);
          fStack_24 = fVar29;
        }
        puVar13 = &uStack_30;
        FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar12,uStack_4c);
        uVar30 = SUB84(dVar23,0);
        uVar3 = float_to_color_u8(puVar11,puVar13,puVar12,uStack_4c);
        uVar7 = _DAT_8c4c2630;
        if (cVar37 == '\0') {
          uVar7 = _DAT_8c4c2634;
        }
        uVar4 = float_to_color_u8(puVar11,puVar13,puVar12,uStack_4c);
        uVar31 = SUB84(dVar33,0);
        dVar23 = in_xd14;
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          dVar23 = in_xd2;
          uVar30 = uVar31;
          dVar26 = (double)CONCAT44(uVar31,uVar28);
        }
        *(undefined4 *)pdVar15 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 6),uVar30);
        }
        else {
          dVar21 = pdVar15[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                  (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar15 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar15 + 0x34),uVar31);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar15[4] = dVar23;
          uVar24 = *(ulonglong *)((int)pdVar15 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar26,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),(int)uVar24);
          pdVar15 = pdVar15 + 1;
        }
        else {
          *(double *)((int)pdVar15 + 0x24) = dVar23;
          dVar26 = *pdVar15;
          dVar21 = pdVar15[1];
          pdVar15 = pdVar15 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar15 + 2);
          dVar27 = (double)CONCAT44(uVar28,uVar7);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar15 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar28;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar21 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar26 >> 0x20);
          dVar21 = (double)((ulonglong)dVar33 & 0xffffffff);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar15[2];
          unaff_r8[3] = pdVar15[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar26;
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        *(undefined4 *)pdVar16 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar16 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar16[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                  (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar16 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar16 + 0x34),uVar31);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar16[4] = dVar23;
          uVar24 = *(ulonglong *)((int)pdVar16 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar16 + 0x24) = (int)uVar24;
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar16,SUB84(dVar26,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 4),(int)uVar24);
          pdVar16 = pdVar16 + 1;
        }
        else {
          *(double *)((int)pdVar16 + 0x24) = dVar23;
          dVar26 = *pdVar16;
          dVar21 = pdVar16[1];
          pdVar16 = pdVar16 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar16 + 2);
          dVar27 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar16 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar28;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar21 >> 0x20);
          pdVar15 = unaff_r8 + 6;
          *(int *)pdVar15 = (int)((ulonglong)dVar26 >> 0x20);
          dVar21 = (double)((ulonglong)dVar33 & 0xffffffff);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          dVar27 = pdVar16[2];
          unaff_r8[7] = pdVar16[3];
          unaff_r8[6] = dVar27;
          unaff_r8[5] = dVar21;
          pdVar15 = unaff_r8 + 4;
          *pdVar15 = dVar26;
          dVar26 = in_xd14;
          dVar23 = in_xd14;
        }
        *(undefined4 *)pdVar17 = 0xe0000000;
        *(undefined4 *)(pdVar17 + 5) = uVar3;
        *(undefined4 *)((int)pdVar17 + 0x2c) = uVar4;
        if (cVar37 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar17 + 6),SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar17[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                  (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar17 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar17 + 0x34),uVar31);
          dVar26 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        else {
          pdVar17[4] = dVar23;
          uVar24 = *(ulonglong *)((int)pdVar17 + 0x34);
          dVar23 = in_xd14;
          dVar26 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar26 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar17 + 0x24) = (int)uVar24;
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar17,SUB84(dVar26,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar17 + 4),(int)uVar24);
          pdVar17 = pdVar17 + 1;
        }
        else {
          *(double *)((int)pdVar17 + 0x24) = dVar23;
          dVar26 = *pdVar17;
          dVar21 = pdVar17[1];
          pdVar17 = pdVar17 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar17 + 2);
          dVar27 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
          *(undefined4 *)((int)pdVar15 + 0x3c) = *(undefined4 *)((int)pdVar17 + 0x14);
          *(undefined4 *)(pdVar15 + 7) = uVar28;
          *(int *)((int)pdVar15 + 0x34) = (int)((ulonglong)dVar21 >> 0x20);
          pdVar15 = pdVar15 + 6;
          *(int *)pdVar15 = (int)((ulonglong)dVar26 >> 0x20);
          dVar21 = (double)((ulonglong)dVar33 & 0xffffffff);
        }
        else {
          dVar27 = pdVar17[2];
          pdVar15[7] = pdVar17[3];
          pdVar15[6] = dVar27;
          pdVar15[5] = dVar21;
          pdVar15 = pdVar15 + 4;
          *pdVar15 = dVar26;
          dVar23 = in_xd14;
        }
        *(undefined4 *)pdVar10 = 0xf0000000;
        dVar22 = in_xd14;
        if (cVar37 == '\0') {
          dVar22 = (double)CONCAT44(uVar31,SUB84(dVar26,0));
        }
        *(undefined4 *)(pdVar10 + 5) = uVar3;
        *(undefined4 *)((int)pdVar10 + 0x2c) = uVar4;
        if (cVar37 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 6),SUB84(dVar21,0));
        }
        else {
          dVar26 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar26 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar10 + 4) = SUB84(dVar26,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar10 + 0x34),uVar31);
          in_xd2 = dVar23;
          dVar23 = (double)CONCAT44(uVar31,SUB84(dVar22,0));
        }
        else {
          pdVar10[4] = dVar23;
          uVar24 = *(ulonglong *)((int)pdVar10 + 0x34);
          in_xd2 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar23,0));
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)((int)pdVar10 + 0x24) = in_xd2;
          in_dr0 = *pdVar10;
          dVar23 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar10 + 2);
          in_dr4 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
          *(undefined4 *)((int)pdVar15 + 0x3c) = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)(pdVar15 + 7) = uVar28;
          *(int *)((int)pdVar15 + 0x34) = (int)((ulonglong)dVar23 >> 0x20);
          pdVar15 = pdVar15 + 6;
          *(int *)pdVar15 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar15[7] = pdVar10[3];
          pdVar15[6] = in_dr4;
          pdVar15[5] = dVar23;
          pdVar15 = pdVar15 + 4;
          *pdVar15 = in_dr0;
        }
        unaff_r8 = pdVar15 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
      }
    }
  }
  else if (uVar2 == 0x8000) {
    puVar11 = &DAT_8c4c2620;
    for (iStack_58 = 0; uVar2 = (uint)ar4[1], iStack_58 < (int)uVar2; iStack_58 = iStack_58 + 1) {
      puVar20 = puVar18 + 1;
      uVar2 = (uint)*puVar18;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar2;
      iVar8 = (uint)*puVar20 * 0x40 + _DAT_8c4aa510;
      iVar5 = (uint)puVar18[2] * 0x40 + _DAT_8c4aa510;
      iVar6 = (uint)puVar18[3] * 0x40 + _DAT_8c4aa510;
      if (cVar37 == '\0') {
        uVar28 = *(undefined4 *)(iVar5 + 4);
        dVar23 = (double)CONCAT44(uVar28,*(undefined4 *)(iVar8 + 4));
        dVar26 = (double)CONCAT44(uVar28,SUB84(in_dr4,0));
      }
      else {
        dVar23 = *(double *)(iVar5 + 4);
        in_xd2 = *(double *)(iVar8 + 4);
        uVar28 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar26 = dVar23;
      }
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - SUB84(dVar23,0),
                                  SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 - dVar23;
      }
      if (cVar37 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(iVar6 + 8));
        dVar26 = (double)CONCAT44(uVar28,*(undefined4 *)(iVar5 + 8));
      }
      else {
        in_xd2 = *(double *)(iVar6 + 8);
      }
      fVar29 = SUB84(dVar26,0);
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) - fVar29);
      }
      else {
        dVar23 = dVar23 - dVar26;
      }
      if (cVar37 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar29);
      }
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar23,0),
                                  SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 * dVar23;
      }
      if (cVar37 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(iVar8 + 8));
      }
      else {
        in_xd2 = *(double *)(iVar8 + 8);
      }
      if (cVar36 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar23,0)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar23;
      }
      if (cVar37 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(iVar6 + 4));
      }
      else {
        in_xd2 = *(double *)(iVar6 + 4);
      }
      uStack_48 = 0;
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                  SUB84(dVar23,0) - (float)((ulonglong)dVar26 >> 0x20));
      }
      else {
        dVar23 = dVar23 - dVar26;
      }
      uVar25 = (uint)((ulonglong)dVar23 >> 0x20);
      dVar26 = dVar23;
      if (cVar37 == '\0') {
        dVar26 = (double)CONCAT44(uVar25,fVar29);
      }
      if (cVar36 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * SUB84(dVar23,0)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar23;
      }
      if (cVar36 == '\0') {
        fVar29 = (float)((ulonglong)dVar26 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar29,SUB84(dVar26,0));
        bVar35 = 0.0 < fVar29;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar35 = (double)((ulonglong)uVar25 << 0x20) < in_dr4;
      }
      if (bVar35) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_48 = 0x8000;
          goto LAB_8c250778;
        }
        puVar18 = puVar20 + uVar2;
      }
      else {
LAB_8c250778:
        puVar12 = auStack_3c;
        _DAT_8c4aa520 = _DAT_8c4aa520 + uVar2;
        iVar6 = iVar6 + 0x10;
        iVar5 = iVar5 + 0x10;
        FUN_8c2361a8(iVar8 + 0x10,iVar5,iVar6,puVar12);
        uVar28 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_3c,iVar5,iVar6,puVar12,puVar11);
        iVar5 = (uint)puVar20[((int)uVar2 >> 1) + -1] * 0x40 + _DAT_8c4aa510;
        if (cVar37 == '\0') {
          uStack_30 = *(undefined4 *)(iVar5 + 0x10);
          uStack_2c = *(undefined4 *)(iVar5 + 0x14);
          fStack_28 = *(float *)(iVar5 + 0x18);
        }
        else {
          uStack_30 = (undefined4)*(undefined8 *)(iVar5 + 0x10);
          uStack_2c = (undefined4)*(undefined8 *)(iVar5 + 0x14);
          in_xd2 = *(double *)(iVar5 + 0x18);
          fStack_28 = SUB84(in_xd2,0);
          fStack_24 = (float)((ulonglong)in_xd2 >> 0x20);
        }
        iVar5 = (uint)puVar20[(int)uVar2 >> 1] * 0x40 + _DAT_8c4aa510;
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(uStack_30,*(undefined4 *)(iVar5 + 0x10));
        }
        else {
          in_xd2 = *(double *)(iVar5 + 0x10);
          dVar23 = (double)CONCAT44(uStack_2c,uStack_30);
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        uVar30 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(uStack_2c,*(undefined4 *)(iVar5 + 0x14));
          uStack_30 = uVar30;
        }
        else {
          uStack_30 = SUB84(dVar23,0);
          in_xd2 = *(double *)(iVar5 + 0x14);
          dVar23 = (double)CONCAT44(fStack_28,uVar30);
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        uVar30 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(fStack_28,*(undefined4 *)(iVar5 + 0x18));
          uStack_2c = uVar30;
        }
        else {
          uStack_2c = SUB84(dVar23,0);
          in_xd2 = *(double *)(iVar5 + 0x18);
          dVar23 = (double)CONCAT44(fStack_24,uVar30);
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar23;
        }
        fVar29 = (float)((ulonglong)dVar23 >> 0x20);
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(fVar29,uStack_30);
          fStack_28 = fVar29;
        }
        else {
          fStack_28 = SUB84(dVar23,0);
          in_xd2 = (double)CONCAT44(uStack_2c,uStack_30);
          fStack_24 = fVar29;
        }
        fVar29 = SUB84(dVar33,0);
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) * fVar29);
        }
        else {
          dVar23 = dVar23 * dVar33;
        }
        if (cVar37 == '\0') {
          uStack_30 = SUB84(dVar23,0);
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),uStack_2c);
        }
        else {
          uStack_30 = SUB84(in_xd2,0);
          uStack_2c = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = (double)CONCAT44(fStack_28,uStack_2c);
        }
        if (cVar36 == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar23,0) * fVar29);
        }
        else {
          dVar23 = dVar23 * dVar33;
        }
        puVar12 = &DAT_8c4c2620;
        ar6_01 = auStack_3c;
        if (cVar37 == '\0') {
          uStack_2c = SUB84(dVar23,0);
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),fStack_28);
        }
        else {
          uStack_2c = SUB84(in_xd2,0);
          fStack_28 = (float)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = (double)CONCAT44(fStack_24,fStack_28);
        }
        if (cVar36 == '\0') {
          fVar29 = SUB84(dVar23,0) * fVar29;
        }
        else {
          fVar29 = SUB84(dVar23 * dVar33,0);
        }
        fStack_28 = fVar29;
        if (cVar37 != '\0') {
          fStack_28 = SUB84(in_xd2,0);
          fStack_24 = (float)((ulonglong)in_xd2 >> 0x20);
        }
        puVar13 = &uStack_30;
        FUN_8c23bae2(&DAT_8c4c2620,puVar13,ar6_01,uStack_48);
        uVar7 = float_to_color_u8(puVar12,puVar13,ar6_01,uStack_48);
        uVar30 = _DAT_8c4c2630;
        if (cVar37 == '\0') {
          uVar30 = _DAT_8c4c2634;
        }
        uVar3 = float_to_color_u8(puVar12,puVar13,ar6_01,uStack_48);
        fVar32 = SUB84(dVar33,0);
        dVar23 = in_xd14;
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(fVar32,uVar28);
        }
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          dVar26 = in_xd2;
          fVar29 = fVar32;
        }
        pdVar10 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar10 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 6),fVar29);
        }
        else {
          dVar21 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar21 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar23 >> 0x20) *
                                  (float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar10 + 4) = SUB84(dVar21,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar10 + 0x34),fVar32);
          dVar23 = (double)CONCAT44(fVar32,SUB84(dVar23,0));
        }
        else {
          pdVar10[4] = dVar26;
          uVar24 = *(ulonglong *)((int)pdVar10 + 0x34);
          dVar26 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
          dVar23 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar23,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)((int)pdVar10 + 0x24) = dVar26;
          dVar23 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar10 + 2);
          dVar27 = (double)CONCAT44(uVar28,uVar30);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar28;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar21 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar23 >> 0x20);
        }
        else {
          dVar27 = pdVar10[2];
          unaff_r8[3] = pdVar10[3];
          unaff_r8[2] = dVar27;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar23;
        }
        puVar20 = puVar18 + 3;
        dVar34 = in_xd14;
        dVar22 = in_xd14;
        if (cVar37 == '\0') {
          dVar21 = (double)((ulonglong)dVar33 & 0xffffffff);
          dVar34 = dVar26;
          dVar22 = (double)CONCAT44(fVar32,SUB84(dVar23,0));
        }
        pdVar10 = (double *)((uint)puVar18[2] * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar10 = 0xe0000000;
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 6),SUB84(dVar21,0));
        }
        else {
          dVar23 = pdVar10[6];
        }
        if (cVar36 == '\0') {
          dVar23 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar10 + 4) = SUB84(dVar23,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar10 + 0x34),fVar32);
          dVar23 = (double)CONCAT44(fVar32,SUB84(dVar22,0));
        }
        else {
          pdVar10[4] = dVar34;
          uVar24 = *(ulonglong *)((int)pdVar10 + 0x34);
          dVar34 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar10 + 0x24) = (int)uVar24;
          dVar23 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar23,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),(int)uVar24);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)((int)pdVar10 + 0x24) = dVar34;
          dVar23 = *pdVar10;
          dVar26 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar37 == '\0') {
          uVar28 = *(undefined4 *)(pdVar10 + 2);
          dVar21 = (double)CONCAT44(uVar28,SUB84(dVar27,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar28;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar26 >> 0x20);
          pdVar10 = unaff_r8 + 6;
          *(int *)pdVar10 = (int)((ulonglong)dVar23 >> 0x20);
        }
        else {
          dVar21 = pdVar10[2];
          unaff_r8[7] = pdVar10[3];
          unaff_r8[6] = dVar21;
          unaff_r8[5] = dVar26;
          pdVar10 = unaff_r8 + 4;
          *pdVar10 = dVar23;
        }
        uVar28 = SUB84(dVar21,0);
        pdVar10 = pdVar10 + 4;
        iStack_60 = 2;
        if (2 < (int)(uVar2 - 1)) {
          do {
            fVar29 = SUB84(dVar26,0);
            uVar1 = *puVar20;
            puVar20 = puVar20 + 1;
            dVar27 = in_xd14;
            dVar26 = in_xd14;
            if (cVar37 == '\0') {
              dVar27 = dVar34;
              fVar29 = fVar32;
              dVar26 = (double)CONCAT44(fVar32,SUB84(dVar23,0));
            }
            pdVar15 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
            *(undefined4 *)pdVar15 = 0xe0000000;
            *(undefined4 *)(pdVar15 + 5) = uVar7;
            *(undefined4 *)((int)pdVar15 + 0x2c) = uVar3;
            if (cVar37 == '\0') {
              dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 6),fVar29);
            }
            else {
              dVar23 = pdVar15[6];
            }
            if (cVar36 == '\0') {
              dVar23 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                      (float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0));
            }
            if (cVar37 == '\0') {
              *(int *)(pdVar15 + 4) = SUB84(dVar23,0);
              uVar24 = CONCAT44(*(undefined4 *)((int)pdVar15 + 0x34),fVar32);
              dVar34 = dVar27;
              dVar23 = (double)CONCAT44(fVar32,SUB84(dVar26,0));
            }
            else {
              pdVar15[4] = dVar27;
              uVar24 = *(ulonglong *)((int)pdVar15 + 0x34);
              dVar34 = in_xd14;
              dVar23 = in_xd14;
            }
            if (cVar36 == '\0') {
              uVar24 = (ulonglong)
                       (uint)((float)((ulonglong)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) +
                             (float)uVar24);
            }
            if (cVar37 == '\0') {
              *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
              dVar23 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar23,0));
              dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),(int)uVar24);
              pdVar15 = pdVar15 + 1;
            }
            else {
              *(double *)((int)pdVar15 + 0x24) = dVar34;
              dVar23 = *pdVar15;
              dVar26 = pdVar15[1];
              pdVar15 = pdVar15 + 2;
            }
            if (cVar37 == '\0') {
              uVar28 = *(undefined4 *)(pdVar15 + 2);
              dVar21 = (double)CONCAT44(uVar28,SUB84(dVar21,0));
              *(undefined4 *)((int)pdVar10 + 0x1c) = *(undefined4 *)((int)pdVar15 + 0x14);
              *(undefined4 *)(pdVar10 + 3) = uVar28;
              *(int *)((int)pdVar10 + 0x14) = (int)((ulonglong)dVar26 >> 0x20);
              pdVar10 = pdVar10 + 2;
              *(int *)pdVar10 = (int)((ulonglong)dVar23 >> 0x20);
            }
            else {
              dVar21 = pdVar15[2];
              pdVar10[3] = pdVar15[3];
              pdVar10[2] = dVar21;
              pdVar10[1] = dVar26;
              *pdVar10 = dVar23;
            }
            uVar28 = SUB84(dVar21,0);
            pdVar10 = pdVar10 + 4;
            iStack_60 = iStack_60 + 1;
          } while (iStack_60 < (int)(uVar2 - 1));
        }
        fVar29 = SUB84(dVar26,0);
        puVar18 = puVar20 + 1;
        in_xd2 = in_xd14;
        dVar26 = in_xd14;
        if (cVar37 == '\0') {
          in_xd2 = dVar34;
          fVar29 = fVar32;
          dVar26 = (double)CONCAT44(fVar32,SUB84(dVar23,0));
        }
        pdVar15 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar15 = 0xf0000000;
        *(undefined4 *)(pdVar15 + 5) = uVar7;
        *(undefined4 *)((int)pdVar15 + 0x2c) = uVar3;
        if (cVar37 == '\0') {
          dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 6),fVar29);
        }
        else {
          dVar23 = pdVar15[6];
        }
        if (cVar36 == '\0') {
          dVar23 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                  (float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0));
        }
        if (cVar37 == '\0') {
          *(int *)(pdVar15 + 4) = SUB84(dVar23,0);
          uVar24 = CONCAT44(*(undefined4 *)((int)pdVar15 + 0x34),fVar32);
          dVar23 = (double)CONCAT44(fVar32,SUB84(dVar26,0));
        }
        else {
          pdVar15[4] = in_xd2;
          uVar24 = *(ulonglong *)((int)pdVar15 + 0x34);
          in_xd2 = in_xd14;
          dVar23 = in_xd14;
        }
        if (cVar36 == '\0') {
          uVar24 = (ulonglong)
                   (uint)((float)((ulonglong)dVar23 >> 0x20) * (float)(uVar24 >> 0x20) +
                         (float)uVar24);
        }
        if (cVar37 == '\0') {
          *(int *)((int)pdVar15 + 0x24) = (int)uVar24;
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar23,0));
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),(int)uVar24);
          pdVar15 = pdVar15 + 1;
        }
        else {
          *(double *)((int)pdVar15 + 0x24) = in_xd2;
          in_dr0 = *pdVar15;
          dVar23 = pdVar15[1];
          pdVar15 = pdVar15 + 2;
        }
        if (cVar37 == '\0') {
          uVar30 = *(undefined4 *)(pdVar15 + 2);
          in_dr4 = (double)CONCAT44(uVar30,uVar28);
          *(undefined4 *)((int)pdVar10 + 0x1c) = *(undefined4 *)((int)pdVar15 + 0x14);
          *(undefined4 *)(pdVar10 + 3) = uVar30;
          *(int *)((int)pdVar10 + 0x14) = (int)((ulonglong)dVar23 >> 0x20);
          pdVar10 = pdVar10 + 2;
          *(int *)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar15[2];
          pdVar10[3] = pdVar15[3];
          pdVar10[2] = in_dr4;
          pdVar10[1] = dVar23;
          *pdVar10 = in_dr0;
        }
        unaff_r8 = pdVar10 + 4;
      }
    }
  }
  else if (uVar2 == 0xc000) {
    if ((_DAT_8c4ab308 & 0x800000) == 0) {
      pcVar9 = FUN_8c241722;
    }
    else {
      pcVar9 = FUN_8c24149e;
    }
    uVar2 = (*pcVar9)(ar4,uVar1 & 0x3fff,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c250144\n.set _FUN_8c250144, _FUN_8c250144_def\n");
