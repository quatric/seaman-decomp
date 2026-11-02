#include "../decls.h"
uint FUN_8c24bdc8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  code *pcVar6;
  double *pdVar7;
  int ain0;
  undefined1 *puVar8;
  undefined4 *puVar9;
  double *pdVar10;
  undefined1 *puVar11;
  double *ar6_00;
  double *unaff_r8;
  double *pdVar12;
  double *pdVar13;
  ushort *puVar14;
  ushort *puVar15;
  double in_dr0;
  double dVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  double dVar20;
  uint uVar21;
  double in_dr4;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 in_fr14;
  double in_xd2;
  double dVar26;
  bool bVar27;
  float in_PR;
  char cVar28;
  char cVar29;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  
  cVar29 = '\0';
  cVar28 = '\0';
  uVar1 = *ar4;
  puVar14 = *(ushort **)(ar4 + 2);
  fVar25 = 0.5;
  uVar2 = uVar1 & 0xc000;
  fStack_20 = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    fVar25 = 0.33333;
    for (iStack_58 = 0; uVar2 = (uint)ar4[1], iStack_58 < (int)uVar2; iStack_58 = iStack_58 + 1) {
      pdVar7 = (double *)((uint)*puVar14 * 0x40 + _DAT_8c4aa510);
      puVar15 = puVar14 + 2;
      pdVar5 = (double *)((uint)puVar14[1] * 0x40 + _DAT_8c4aa510);
      puVar14 = puVar14 + 3;
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar26 = *(double *)((int)pdVar5 + 4);
      }
      uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
      dVar20 = dVar26;
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(uVar23,*(undefined4 *)((int)pdVar7 + 4));
      }
      if (cVar28 == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) - SUB84(dVar20,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 - dVar20;
      }
      pdVar12 = (double *)((uint)*puVar15 * 0x40 + _DAT_8c4aa510);
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44(uVar23,*(undefined4 *)(pdVar5 + 1));
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(pdVar12 + 1));
      }
      fVar18 = SUB84(dVar26,0);
      if (cVar28 == '\0') {
        fVar17 = SUB84(dVar20,0) - fVar18;
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar17,fVar17);
      }
      else {
        dVar20 = (dVar20 - dVar26) * (dVar20 - dVar26);
      }
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(pdVar7 + 1));
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar18);
      }
      if (cVar28 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar20,0)
                                 );
      }
      else {
        dVar16 = in_dr0 - dVar20;
      }
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)((int)pdVar12 + 4)
                                 );
      }
      iStack_4c = 0;
      if (cVar28 == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                  SUB84(dVar20,0) - (float)((ulonglong)dVar26 >> 0x20));
      }
      else {
        dVar20 = dVar20 - dVar26;
      }
      uVar2 = (uint)((ulonglong)dVar20 >> 0x20);
      dVar26 = dVar20;
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44(uVar2,fVar18);
      }
      if (cVar28 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) * SUB84(dVar20,0)
                                 );
      }
      else {
        in_dr0 = dVar16 * dVar20;
      }
      if (cVar28 == '\0') {
        fVar18 = (float)((ulonglong)dVar26 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar18,SUB84(dVar26,0));
        bVar27 = 0.0 < fVar18;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar27 = (double)((ulonglong)uVar2 << 0x20) < in_dr4;
      }
      if (bVar27) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          iStack_4c = 0x8000;
          goto LAB_8c24bee2;
        }
      }
      else {
LAB_8c24bee2:
        pdVar13 = pdVar5 + 2;
        puVar8 = auStack_38;
        pdVar10 = pdVar12 + 2;
        FUN_8c2361a8(pdVar7 + 2,pdVar13,pdVar10,puVar8);
        uVar23 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_38,pdVar13,pdVar10,puVar8,pdVar5);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),*(undefined4 *)(pdVar5 + 2));
        }
        else {
          dVar26 = pdVar7[2];
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(pdVar12 + 2));
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44(((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * (double)CONCAT44(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          uStack_2c = (undefined4)((ulonglong)dVar26 >> 0x20);
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),
                                    *(undefined4 *)((int)pdVar5 + 0x14));
        }
        else {
          uStack_2c = SUB84(dVar26,0);
          dVar26 = *(double *)((int)pdVar7 + 0x14);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                    *(undefined4 *)((int)pdVar12 + 0x14));
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44(((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * (double)CONCAT44(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          uStack_28 = (undefined4)((ulonglong)dVar26 >> 0x20);
          dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 3),*(undefined4 *)(pdVar5 + 3));
        }
        else {
          uStack_28 = SUB84(dVar26,0);
          dVar26 = pdVar7[3];
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(pdVar12 + 3));
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44(((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * (double)CONCAT44(in_fr14,fVar25);
        }
        fVar18 = (float)((ulonglong)dVar26 >> 0x20);
        fStack_24 = fVar18;
        if (cVar29 != '\0') {
          fStack_24 = SUB84(dVar26,0);
          fStack_20 = fVar18;
        }
        puVar8 = &DAT_8c4c2620;
        puVar11 = auStack_38;
        puVar9 = &uStack_2c;
        FUN_8c23bae2(&DAT_8c4c2620,puVar9,puVar11,iStack_4c);
        float_to_color_u8(puVar8,puVar9,puVar11,iStack_4c);
        uVar2 = _DAT_8c4c2630;
        if (cVar29 == '\0') {
          uVar2 = _DAT_8c4c2634;
        }
        float_to_color_u8(puVar8,puVar9,puVar11,iStack_4c);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          dVar26 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2638);
          _DAT_8c4c2624 = uVar24;
        }
        else {
          _DAT_8c4c2624 = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44(_DAT_8c4c262c,uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c263c);
          _DAT_8c4c2628 = uVar24;
        }
        else {
          _DAT_8c4c2628 = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44(_DAT_8c4c2630,uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar21 = (uint)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          _DAT_8c4c262c = uVar21;
          *(uint *)(pdVar7 + 4) = _DAT_8c4c2620;
          *(undefined4 *)((int)pdVar7 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar7 + 5) = _DAT_8c4c2628;
          uVar19 = _DAT_8c4c262c;
          *(uint *)((int)pdVar7 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          _DAT_8c4c262c = SUB84(dVar26,0);
          uVar19 = _DAT_8c4c262c;
          _DAT_8c4c2630 = uVar21;
          pdVar7[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          *(ulonglong *)((int)pdVar7 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar7[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          *(ulonglong *)((int)pdVar7 + 0x2c) = CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
        }
        *(undefined4 *)pdVar7 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar23);
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),uVar19);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar26 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar7 + 2);
          dVar16 = (double)CONCAT44(uVar23,uVar2);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar23;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar26 >> 0x20);
          *(uint *)(pdVar5 + 4) = _DAT_8c4c2620;
          *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c2628;
          uVar2 = _DAT_8c4c262c;
          *(uint *)((int)pdVar5 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          dVar16 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar16;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar5[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar5[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          *(ulonglong *)((int)pdVar5 + 0x2c) = CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
        }
        *(undefined4 *)pdVar5 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar26,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),uVar2);
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar26 = *pdVar5;
          dVar20 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar5 + 2);
          dVar16 = (double)CONCAT44(uVar23,SUB84(dVar16,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar5 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar23;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar5 = unaff_r8 + 6;
          *(int *)pdVar5 = (int)((ulonglong)dVar26 >> 0x20);
          *(uint *)(pdVar12 + 4) = _DAT_8c4c2620;
          *(undefined4 *)((int)pdVar12 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar12 + 5) = _DAT_8c4c2628;
          uVar2 = _DAT_8c4c262c;
          *(uint *)((int)pdVar12 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          dVar16 = pdVar5[2];
          unaff_r8[7] = pdVar5[3];
          unaff_r8[6] = dVar16;
          unaff_r8[5] = dVar20;
          pdVar5 = unaff_r8 + 4;
          *pdVar5 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar12[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          *(ulonglong *)((int)pdVar12 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar12[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          *(ulonglong *)((int)pdVar12 + 0x2c) = CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
        }
        *(undefined4 *)pdVar12 = 0xf0000000;
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar26,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + 4),uVar2);
          pdVar12 = pdVar12 + 1;
        }
        else {
          in_dr0 = *pdVar12;
          dVar26 = pdVar12[1];
          pdVar12 = pdVar12 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar12 + 2);
          in_dr4 = (double)CONCAT44(uVar23,SUB84(dVar16,0));
          *(undefined4 *)((int)pdVar5 + 0x3c) = *(undefined4 *)((int)pdVar12 + 0x14);
          *(undefined4 *)(pdVar5 + 7) = uVar23;
          *(int *)((int)pdVar5 + 0x34) = (int)((ulonglong)dVar26 >> 0x20);
          pdVar5 = pdVar5 + 6;
          *(int *)pdVar5 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar12[2];
          pdVar5[7] = pdVar12[3];
          pdVar5[6] = in_dr4;
          pdVar5[5] = dVar26;
          pdVar5 = pdVar5 + 4;
          *pdVar5 = in_dr0;
        }
        unaff_r8 = pdVar5 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
      }
    }
  }
  else if (uVar2 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    for (iStack_4c = 0; uVar2 = (uint)ar4[1], iStack_4c < (int)uVar2; iStack_4c = iStack_4c + 1) {
      pdVar7 = (double *)((uint)*puVar14 * 0x40 + _DAT_8c4aa510);
      puVar15 = puVar14 + 3;
      pdVar12 = (double *)((uint)puVar14[1] * 0x40 + _DAT_8c4aa510);
      pdVar13 = (double *)((uint)puVar14[2] * 0x40 + _DAT_8c4aa510);
      puVar14 = puVar14 + 4;
      pdVar5 = (double *)((uint)*puVar15 * 0x40 + _DAT_8c4aa510);
      if (cVar29 == '\0') {
        pdVar10 = (double *)((int)pdVar12 + 4);
        dVar26 = (double)CONCAT44(*(undefined4 *)pdVar10,*(undefined4 *)((int)pdVar7 + 4));
      }
      else {
        dVar26 = *(double *)((int)pdVar12 + 4);
        pdVar10 = pdVar12 + 1;
      }
      dVar20 = *pdVar10;
      if (cVar28 == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - SUB84(dVar26,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar26;
      }
      fVar18 = (float)((ulonglong)dVar20 >> 0x20);
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(pdVar13 + 1));
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar18);
      }
      if (cVar28 == '\0') {
        fVar18 = SUB84(dVar26,0) - fVar18;
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * fVar18,fVar18);
      }
      else {
        dVar26 = (dVar26 - dVar20) * (dVar26 - dVar20);
      }
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(pdVar7 + 1));
      }
      if (cVar28 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar26,0)
                                 );
      }
      else {
        dVar16 = in_dr0 - dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)((int)pdVar13 + 4)
                                 );
      }
      if (cVar28 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) - SUB84(dVar20,0)
                                 );
      }
      else {
        dVar26 = dVar26 - dVar20;
      }
      uVar2 = (uint)((ulonglong)dVar26 >> 0x20);
      dVar22 = dVar26;
      if (cVar29 == '\0') {
        dVar22 = (double)CONCAT44(uVar2,SUB84(dVar20,0));
      }
      iStack_50 = 0;
      if (cVar28 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) * SUB84(dVar26,0)
                                 );
      }
      else {
        in_dr0 = dVar16 * dVar26;
      }
      if (cVar28 == '\0') {
        bVar27 = 0.0 < (float)((ulonglong)dVar22 >> 0x20) - SUB84(in_dr0,0);
      }
      else {
        bVar27 = (double)((ulonglong)uVar2 << 0x20) < dVar22 - in_dr0;
      }
      if (bVar27) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          iStack_50 = 0x8000;
          goto LAB_8c24c160;
        }
      }
      else {
LAB_8c24c160:
        pdVar10 = pdVar12 + 2;
        puVar8 = auStack_38;
        ar6_00 = pdVar13 + 2;
        FUN_8c2361a8(pdVar7 + 2,pdVar10,ar6_00,puVar8);
        uVar23 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_38,pdVar10,ar6_00,puVar8,pdVar7);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar12 + 2),*(undefined4 *)(pdVar13 + 2));
        }
        else {
          dVar26 = pdVar12[2];
        }
        puVar8 = &DAT_8c4c2620;
        puVar11 = auStack_38;
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44(((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * (double)CONCAT44(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          uStack_2c = (undefined4)((ulonglong)dVar26 >> 0x20);
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + 0x14),
                                    *(undefined4 *)((int)pdVar13 + 0x14));
        }
        else {
          uStack_2c = SUB84(dVar26,0);
          dVar26 = *(double *)((int)pdVar12 + 0x14);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44(((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * (double)CONCAT44(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          uStack_28 = (undefined4)((ulonglong)dVar26 >> 0x20);
          dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar12 + 3),*(undefined4 *)(pdVar13 + 3));
        }
        else {
          uStack_28 = SUB84(dVar26,0);
          dVar26 = pdVar12[3];
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44(((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0)) * fVar25,
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = (dVar26 + dVar26) * (double)CONCAT44(in_fr14,fVar25);
        }
        fVar18 = (float)((ulonglong)dVar26 >> 0x20);
        fStack_24 = fVar18;
        if (cVar29 != '\0') {
          fStack_24 = SUB84(dVar26,0);
          fStack_20 = fVar18;
        }
        puVar9 = &uStack_2c;
        FUN_8c23bae2(&DAT_8c4c2620,puVar9,puVar11,iStack_50);
        float_to_color_u8(puVar8,puVar9,puVar11,iStack_50);
        float_to_color_u8(puVar8,puVar9,puVar11,iStack_50);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          dVar26 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2638);
          _DAT_8c4c2624 = uVar24;
        }
        else {
          _DAT_8c4c2624 = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44(_DAT_8c4c262c,uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c263c);
          _DAT_8c4c2628 = uVar24;
        }
        else {
          _DAT_8c4c2628 = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44(_DAT_8c4c2630,uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar2 = (uint)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          _DAT_8c4c262c = uVar2;
          *(uint *)(pdVar7 + 4) = _DAT_8c4c2620;
          *(undefined4 *)((int)pdVar7 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar7 + 5) = _DAT_8c4c2628;
          uVar21 = _DAT_8c4c262c;
          *(uint *)((int)pdVar7 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          _DAT_8c4c262c = SUB84(dVar26,0);
          uVar21 = _DAT_8c4c262c;
          _DAT_8c4c2630 = uVar2;
          pdVar7[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          *(ulonglong *)((int)pdVar7 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar7[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          *(ulonglong *)((int)pdVar7 + 0x2c) = CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
        }
        *(undefined4 *)pdVar7 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar23);
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),uVar21);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar26 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar7 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar23;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar26 >> 0x20);
          *(uint *)(pdVar12 + 4) = _DAT_8c4c2620;
          *(undefined4 *)((int)pdVar12 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar12 + 5) = _DAT_8c4c2628;
          uVar2 = _DAT_8c4c262c;
          *(uint *)((int)pdVar12 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          dVar16 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar16;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar12[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          *(ulonglong *)((int)pdVar12 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar12[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          *(ulonglong *)((int)pdVar12 + 0x2c) = CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
        }
        *(undefined4 *)pdVar12 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar26,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + 4),uVar2);
          pdVar12 = pdVar12 + 1;
        }
        else {
          dVar26 = *pdVar12;
          dVar20 = pdVar12[1];
          pdVar12 = pdVar12 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar12 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar12 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar23;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)pdVar7 = (int)((ulonglong)dVar26 >> 0x20);
          *(uint *)(pdVar13 + 4) = _DAT_8c4c2620;
          *(undefined4 *)((int)pdVar13 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar13 + 5) = _DAT_8c4c2628;
          uVar2 = _DAT_8c4c262c;
          *(uint *)((int)pdVar13 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          dVar16 = pdVar12[2];
          unaff_r8[7] = pdVar12[3];
          unaff_r8[6] = dVar16;
          unaff_r8[5] = dVar20;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar13[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          *(ulonglong *)((int)pdVar13 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar13[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          *(ulonglong *)((int)pdVar13 + 0x2c) = CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
        }
        *(undefined4 *)pdVar13 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar26,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar13 + 4),uVar2);
          pdVar13 = pdVar13 + 1;
        }
        else {
          dVar26 = *pdVar13;
          dVar20 = pdVar13[1];
          pdVar13 = pdVar13 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar13 + 2);
          *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar13 + 0x14);
          *(undefined4 *)(pdVar7 + 7) = uVar23;
          *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)pdVar7 = (int)((ulonglong)dVar26 >> 0x20);
          *(uint *)(pdVar5 + 4) = _DAT_8c4c2620;
          *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c2628;
          uVar2 = _DAT_8c4c262c;
          *(uint *)((int)pdVar5 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          dVar16 = pdVar13[2];
          pdVar7[7] = pdVar13[3];
          pdVar7[6] = dVar16;
          pdVar7[5] = dVar20;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = dVar26;
          uVar2 = SUB84(dVar20,0);
          pdVar5[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar5[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          *(ulonglong *)((int)pdVar5 + 0x2c) = CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
        }
        *(undefined4 *)pdVar5 = 0xf0000000;
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar26,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),uVar2);
          pdVar5 = pdVar5 + 1;
        }
        else {
          in_dr0 = *pdVar5;
          dVar26 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar5 + 2);
          *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar5 + 0x14);
          *(undefined4 *)(pdVar7 + 7) = uVar23;
          *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)dVar26 >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar20 = pdVar5[2];
          pdVar7[7] = pdVar5[3];
          pdVar7[6] = dVar20;
          pdVar7[5] = dVar26;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
      }
    }
  }
  else if (uVar2 == 0x8000) {
    for (iStack_50 = 0; uVar2 = (uint)ar4[1], iStack_50 < (int)uVar2; iStack_50 = iStack_50 + 1) {
      puVar15 = puVar14 + 1;
      uVar2 = (uint)*puVar14;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar2;
      ain0 = (uint)*puVar15 * 0x40 + _DAT_8c4aa510;
      iVar3 = (uint)puVar14[2] * 0x40 + _DAT_8c4aa510;
      iVar4 = (uint)puVar14[3] * 0x40 + _DAT_8c4aa510;
      if (cVar29 == '\0') {
        uVar23 = *(undefined4 *)(iVar3 + 4);
        dVar26 = (double)CONCAT44(uVar23,*(undefined4 *)(ain0 + 4));
        dVar20 = (double)CONCAT44(uVar23,SUB84(in_dr4,0));
      }
      else {
        dVar26 = *(double *)(iVar3 + 4);
        in_xd2 = *(double *)(ain0 + 4);
        uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
        dVar20 = dVar26;
      }
      if (cVar28 == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - SUB84(dVar26,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(iVar4 + 8));
        dVar20 = (double)CONCAT44(uVar23,*(undefined4 *)(iVar3 + 8));
      }
      else {
        in_xd2 = *(double *)(iVar4 + 8);
      }
      fVar18 = SUB84(dVar20,0);
      if (cVar28 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) - fVar18);
      }
      else {
        dVar26 = dVar26 - dVar20;
      }
      if (cVar29 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar18);
      }
      if (cVar28 == '\0') {
        dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar26,0),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 * dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(ain0 + 8));
      }
      else {
        in_xd2 = *(double *)(ain0 + 8);
      }
      if (cVar28 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar26,0)
                                 );
      }
      else {
        dVar16 = in_dr0 - dVar26;
      }
      if (cVar29 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(iVar4 + 4));
      }
      else {
        in_xd2 = *(double *)(iVar4 + 4);
      }
      iStack_4c = 0;
      if (cVar28 == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                  SUB84(dVar26,0) - (float)((ulonglong)dVar20 >> 0x20));
      }
      else {
        dVar26 = dVar26 - dVar20;
      }
      uVar21 = (uint)((ulonglong)dVar26 >> 0x20);
      dVar20 = dVar26;
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(uVar21,fVar18);
      }
      if (cVar28 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) * SUB84(dVar26,0)
                                 );
      }
      else {
        in_dr0 = dVar16 * dVar26;
      }
      if (cVar28 == '\0') {
        fVar18 = (float)((ulonglong)dVar20 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar18,SUB84(dVar20,0));
        bVar27 = 0.0 < fVar18;
      }
      else {
        in_dr4 = dVar20 - in_dr0;
        bVar27 = (double)((ulonglong)uVar21 << 0x20) < in_dr4;
      }
      if (bVar27) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          iStack_4c = 0x8000;
          goto LAB_8c24c420;
        }
        puVar14 = puVar15 + uVar2;
      }
      else {
LAB_8c24c420:
        puVar8 = auStack_38;
        _DAT_8c4aa520 = _DAT_8c4aa520 + uVar2;
        iVar4 = iVar4 + 0x10;
        iVar3 = iVar3 + 0x10;
        FUN_8c2361a8(ain0 + 0x10,iVar3,iVar4,puVar8);
        uVar23 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_38,iVar3,iVar4,puVar8,ain0);
        iVar3 = (uint)puVar15[((int)uVar2 >> 1) + -1] * 0x40 + _DAT_8c4aa510;
        if (cVar29 == '\0') {
          uStack_2c = *(undefined4 *)(iVar3 + 0x10);
          uStack_28 = *(undefined4 *)(iVar3 + 0x14);
          fStack_24 = *(float *)(iVar3 + 0x18);
        }
        else {
          uStack_2c = (undefined4)*(undefined8 *)(iVar3 + 0x10);
          uStack_28 = (undefined4)*(undefined8 *)(iVar3 + 0x14);
          in_xd2 = *(double *)(iVar3 + 0x18);
          fStack_24 = SUB84(in_xd2,0);
          fStack_20 = (float)((ulonglong)in_xd2 >> 0x20);
        }
        iVar3 = (uint)puVar15[(int)uVar2 >> 1] * 0x40 + _DAT_8c4aa510;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(uStack_2c,*(undefined4 *)(iVar3 + 0x10));
        }
        else {
          in_xd2 = *(double *)(iVar3 + 0x10);
          dVar26 = (double)CONCAT44(uStack_28,uStack_2c);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(uStack_28,*(undefined4 *)(iVar3 + 0x14));
          uStack_2c = uVar24;
        }
        else {
          uStack_2c = SUB84(dVar26,0);
          in_xd2 = *(double *)(iVar3 + 0x14);
          dVar26 = (double)CONCAT44(fStack_24,uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(fStack_24,*(undefined4 *)(iVar3 + 0x18));
          uStack_28 = uVar24;
        }
        else {
          uStack_28 = SUB84(dVar26,0);
          in_xd2 = *(double *)(iVar3 + 0x18);
          dVar26 = (double)CONCAT44(fStack_20,uVar24);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        fVar18 = (float)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(fVar18,uStack_2c);
          fStack_24 = fVar18;
        }
        else {
          fStack_24 = SUB84(dVar26,0);
          in_xd2 = (double)CONCAT44(uStack_28,uStack_2c);
          fStack_20 = fVar18;
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) * fVar25);
        }
        else {
          dVar26 = dVar26 * (double)CONCAT44(in_fr14,fVar25);
        }
        if (cVar29 == '\0') {
          uStack_2c = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uStack_28);
        }
        else {
          uStack_2c = SUB84(in_xd2,0);
          uStack_28 = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = (double)CONCAT44(fStack_24,uStack_28);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) * fVar25);
        }
        else {
          dVar26 = dVar26 * (double)CONCAT44(in_fr14,fVar25);
        }
        puVar8 = &DAT_8c4c2620;
        puVar11 = auStack_38;
        if (cVar29 == '\0') {
          uStack_28 = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),fStack_24);
        }
        else {
          uStack_28 = SUB84(in_xd2,0);
          fStack_24 = (float)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = (double)CONCAT44(fStack_20,fStack_24);
        }
        if (cVar28 == '\0') {
          fStack_24 = SUB84(dVar26,0) * fVar25;
        }
        else {
          fStack_24 = SUB84(dVar26 * (double)CONCAT44(in_fr14,fVar25),0);
        }
        if (cVar29 != '\0') {
          fStack_24 = SUB84(in_xd2,0);
          fStack_20 = (float)((ulonglong)in_xd2 >> 0x20);
        }
        puVar9 = &uStack_2c;
        FUN_8c23bae2(&DAT_8c4c2620,puVar9,puVar11,iStack_4c);
        float_to_color_u8(puVar8,puVar9,puVar11,iStack_4c);
        uVar21 = _DAT_8c4c2630;
        if (cVar29 == '\0') {
          uVar21 = _DAT_8c4c2634;
        }
        float_to_color_u8(puVar8,puVar9,puVar11,iStack_4c);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          dVar26 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2638);
          _DAT_8c4c2624 = uVar24;
        }
        else {
          _DAT_8c4c2624 = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44(_DAT_8c4c262c,uVar24);
          in_xd2 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar24 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c263c);
          _DAT_8c4c2628 = uVar24;
        }
        else {
          _DAT_8c4c2628 = SUB84(dVar26,0);
          dVar26 = (double)CONCAT44(_DAT_8c4c2630,uVar24);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
        }
        if (cVar28 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        uVar19 = (uint)((ulonglong)dVar26 >> 0x20);
        _DAT_8c4c262c = uVar19;
        if (cVar29 != '\0') {
          _DAT_8c4c262c = SUB84(dVar26,0);
          _DAT_8c4c2630 = uVar19;
        }
        if (cVar29 == '\0') {
          dVar26 = (double)(ulonglong)_DAT_8c4c2620;
        }
        else {
          in_xd2 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
        }
        uVar19 = SUB84(dVar26,0);
        pdVar5 = (double *)((uint)*puVar15 * 0x40 + _DAT_8c4aa510);
        if (cVar29 == '\0') {
          *(uint *)(pdVar5 + 4) = uVar19;
          *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c2628;
          uVar19 = _DAT_8c4c262c;
          *(uint *)((int)pdVar5 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          pdVar5[4] = in_xd2;
          *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar5[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
          *(double *)((int)pdVar5 + 0x2c) = in_xd2;
        }
        *(undefined4 *)pdVar5 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar23);
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),uVar19);
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar26 = *pdVar5;
          dVar20 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar5 + 2);
          dVar16 = (double)CONCAT44(uVar23,uVar21);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar5 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar23;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar26 >> 0x20);
        }
        else {
          dVar16 = pdVar5[2];
          unaff_r8[3] = pdVar5[3];
          unaff_r8[2] = dVar16;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar26;
        }
        puVar15 = puVar14 + 3;
        if (cVar29 == '\0') {
          dVar20 = (double)(ulonglong)_DAT_8c4c2620;
        }
        else {
          in_xd2 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
        }
        uVar21 = SUB84(dVar20,0);
        pdVar5 = (double *)((uint)puVar14[2] * 0x40 + _DAT_8c4aa510);
        if (cVar29 == '\0') {
          *(uint *)(pdVar5 + 4) = uVar21;
          *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c2628;
          uVar21 = _DAT_8c4c262c;
          *(uint *)((int)pdVar5 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          pdVar5[4] = in_xd2;
          *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar5[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
          *(double *)((int)pdVar5 + 0x2c) = in_xd2;
        }
        *(undefined4 *)pdVar5 = 0xe0000000;
        if (cVar29 == '\0') {
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar26,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),uVar21);
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar26 = *pdVar5;
          dVar20 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar29 == '\0') {
          uVar23 = *(undefined4 *)(pdVar5 + 2);
          dVar16 = (double)CONCAT44(uVar23,SUB84(dVar16,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar5 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar23;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar5 = unaff_r8 + 6;
          *(int *)pdVar5 = (int)((ulonglong)dVar26 >> 0x20);
        }
        else {
          dVar16 = pdVar5[2];
          unaff_r8[7] = pdVar5[3];
          unaff_r8[6] = dVar16;
          unaff_r8[5] = dVar20;
          pdVar5 = unaff_r8 + 4;
          *pdVar5 = dVar26;
        }
        uVar23 = SUB84(dVar16,0);
        pdVar5 = pdVar5 + 4;
        iVar3 = 2;
        if (2 < (int)(uVar2 - 1)) {
          do {
            uVar1 = *puVar15;
            puVar15 = puVar15 + 1;
            uVar21 = _DAT_8c4c2620;
            if (cVar29 != '\0') {
              in_xd2 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              uVar21 = SUB84(dVar20,0);
            }
            pdVar7 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
            if (cVar29 == '\0') {
              *(uint *)(pdVar7 + 4) = uVar21;
              *(undefined4 *)((int)pdVar7 + 0x24) = _DAT_8c4c2624;
              *(undefined4 *)(pdVar7 + 5) = _DAT_8c4c2628;
              uVar21 = _DAT_8c4c262c;
              *(uint *)((int)pdVar7 + 0x2c) = _DAT_8c4c262c;
            }
            else {
              pdVar7[4] = in_xd2;
              *(ulonglong *)((int)pdVar7 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
              pdVar7[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              *(double *)((int)pdVar7 + 0x2c) = in_xd2;
            }
            *(undefined4 *)pdVar7 = 0xe0000000;
            if (cVar29 == '\0') {
              dVar26 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar26,0));
              dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),uVar21);
              pdVar7 = pdVar7 + 1;
            }
            else {
              dVar26 = *pdVar7;
              dVar20 = pdVar7[1];
              pdVar7 = pdVar7 + 2;
            }
            if (cVar29 == '\0') {
              uVar23 = *(undefined4 *)(pdVar7 + 2);
              dVar16 = (double)CONCAT44(uVar23,SUB84(dVar16,0));
              *(undefined4 *)((int)pdVar5 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
              *(undefined4 *)(pdVar5 + 3) = uVar23;
              *(int *)((int)pdVar5 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
              pdVar5 = pdVar5 + 2;
              *(int *)pdVar5 = (int)((ulonglong)dVar26 >> 0x20);
            }
            else {
              dVar16 = pdVar7[2];
              pdVar5[3] = pdVar7[3];
              pdVar5[2] = dVar16;
              pdVar5[1] = dVar20;
              *pdVar5 = dVar26;
            }
            uVar23 = SUB84(dVar16,0);
            pdVar5 = pdVar5 + 4;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uVar2 - 1));
        }
        puVar14 = puVar15 + 1;
        uVar2 = _DAT_8c4c2620;
        if (cVar29 != '\0') {
          in_xd2 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          uVar2 = SUB84(dVar20,0);
        }
        pdVar7 = (double *)((uint)*puVar15 * 0x40 + _DAT_8c4aa510);
        if (cVar29 == '\0') {
          *(uint *)(pdVar7 + 4) = uVar2;
          *(undefined4 *)((int)pdVar7 + 0x24) = _DAT_8c4c2624;
          *(undefined4 *)(pdVar7 + 5) = _DAT_8c4c2628;
          uVar2 = _DAT_8c4c262c;
          *(uint *)((int)pdVar7 + 0x2c) = _DAT_8c4c262c;
        }
        else {
          pdVar7[4] = in_xd2;
          *(ulonglong *)((int)pdVar7 + 0x24) = CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          pdVar7[5] = (double)CONCAT44(_DAT_8c4c262c,_DAT_8c4c2628);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
          *(double *)((int)pdVar7 + 0x2c) = in_xd2;
        }
        *(undefined4 *)pdVar7 = 0xf0000000;
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar26,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),uVar2);
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          dVar26 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar29 == '\0') {
          uVar24 = *(undefined4 *)(pdVar7 + 2);
          in_dr4 = (double)CONCAT44(uVar24,uVar23);
          *(undefined4 *)((int)pdVar5 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(pdVar5 + 3) = uVar24;
          *(int *)((int)pdVar5 + 0x14) = (int)((ulonglong)dVar26 >> 0x20);
          pdVar5 = pdVar5 + 2;
          *(int *)pdVar5 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          pdVar5[3] = pdVar7[3];
          pdVar5[2] = in_dr4;
          pdVar5[1] = dVar26;
          *pdVar5 = in_dr0;
        }
        unaff_r8 = pdVar5 + 4;
      }
    }
  }
  else if (uVar2 == 0xc000) {
    if ((_DAT_8c4ab308 & 0x800000) == 0) {
      pcVar6 = FUN_8c240434;
    }
    else {
      pcVar6 = FUN_8c240222;
    }
    uVar2 = (*pcVar6)(ar4,uVar1 & 0x3fff,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24bdc8\n.set _FUN_8c24bdc8, _FUN_8c24bdc8_def\n");
