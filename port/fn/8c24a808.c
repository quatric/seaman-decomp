#include "../decls.h"
uint FUN_8c24a808_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double *pdVar7;
  double *pdVar8;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar9;
  double *pdVar10;
  undefined1 *puVar11;
  double *pdVar12;
  int iVar13;
  double *a6;
  int iVar14;
  uint uVar15;
  double *unaff_r8;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  double in_dr0;
  double dVar19;
  float fVar20;
  double in_dr2;
  undefined4 uVar21;
  double in_dr4;
  double dVar22;
  float fVar23;
  double in_xd2;
  double dVar24;
  double in_xd14;
  bool bVar25;
  char cVar26;
  char cVar27;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_24;
  
  cVar27 = '\0';
  cVar26 = '\0';
  uVar1 = *ar4;
  uVar6 = 0x3f000000;
  uVar2 = (uint)(uVar1 & 0x3fff);
  puVar16 = *(ushort **)(ar4 + 2);
  uVar3 = uVar1 & 0xc000;
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    uStack_30 = 0;
    while( true ) {
      uVar21 = SUB84(in_dr2,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (int)uStack_30) break;
      puVar18 = puVar16 + 1;
      pdVar7 = (double *)((uint)*puVar16 * 0x40 + _DAT_8c4aa510);
      puVar17 = puVar16 + 2;
      puVar16 = puVar16 + 3;
      if (cVar27 == '\0') {
        uVar21 = *(undefined4 *)((int)pdVar7 + 4);
      }
      else {
        in_xd2 = *(double *)((int)pdVar7 + 4);
      }
      pdVar8 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
      if (cVar27 == '\0') {
        uVar4 = *(undefined4 *)((int)pdVar8 + 4);
        dVar22 = (double)CONCAT44(uVar4,uVar21);
        dVar24 = (double)CONCAT44(uVar4,SUB84(in_dr4,0));
      }
      else {
        dVar22 = *(double *)((int)pdVar8 + 4);
        uVar4 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar24 = dVar22;
      }
      if (cVar26 == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 - dVar22;
      }
      pdVar9 = (double *)((uint)*puVar17 * 0x40 + _DAT_8c4aa510);
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(uVar4,*(undefined4 *)(pdVar8 + 1));
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar9 + 1));
      }
      else {
        in_xd2 = pdVar9[1];
      }
      fVar23 = SUB84(dVar24,0);
      if (cVar26 == '\0') {
        fVar20 = SUB84(dVar22,0) - fVar23;
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar20,fVar20);
      }
      else {
        dVar22 = (dVar22 - dVar24) * (dVar22 - dVar24);
      }
      if (cVar27 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(pdVar7 + 1));
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar23);
      }
      else {
        in_xd2 = pdVar7[1];
      }
      if (cVar26 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar22,0)
                                 );
      }
      else {
        dVar19 = in_dr0 - dVar22;
      }
      if (cVar27 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)((int)pdVar9 + 4))
        ;
      }
      else {
        in_xd2 = *(double *)((int)pdVar9 + 4);
      }
      if (cVar26 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) - (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar22 = dVar22 - dVar24;
      }
      uVar3 = (uint)((ulonglong)dVar22 >> 0x20);
      dVar24 = dVar22;
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(uVar3,fVar23);
      }
      uStack_34 = 0;
      if (cVar26 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * SUB84(dVar22,0)
                                 );
      }
      else {
        in_dr0 = dVar19 * dVar22;
      }
      in_dr2 = (double)((ulonglong)uVar3 << 0x20);
      if (cVar26 == '\0') {
        fVar23 = (float)((ulonglong)dVar24 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar23,SUB84(dVar24,0));
        bVar25 = 0.0 < fVar23;
      }
      else {
        in_dr4 = dVar24 - in_dr0;
        bVar25 = in_dr2 < in_dr4;
      }
      uVar21 = SUB84(in_dr4,0);
      if (bVar25) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_34 = 0x8000;
          goto LAB_8c24a918;
        }
      }
      else {
LAB_8c24a918:
        *(undefined4 *)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)((int)pdVar7 + 0x3c) != (uVar2 | uStack_34)) {
          *(uint *)((int)pdVar7 + 0x3c) = uVar2 | uStack_34;
          pdVar12 = pdVar7 + 6;
          pdVar10 = pdVar7 + 2;
          puVar11 = &DAT_8c4c2620;
          uVar3 = uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar10,pdVar12,uStack_34);
          uVar21 = float_to_color_u8(puVar11,pdVar10,pdVar12,uVar3);
          *(undefined4 *)(pdVar7 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar4 = float_to_color_u8(puVar11,pdVar10,pdVar12,uVar3);
          *(undefined4 *)((int)pdVar7 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar6);
          pdVar10 = (double *)((int)pdVar7 + 0x34);
          dVar24 = (double)CONCAT44(uVar6,SUB84(in_dr0,0));
        }
        else {
          dVar22 = pdVar7[6];
          pdVar10 = pdVar7 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar10,uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
          dVar22 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar7[4] = in_xd2;
          dVar19 = *pdVar10;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar10 = (double *)((int)pdVar7 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar10 = SUB84(dVar19,0);
        }
        else {
          *pdVar10 = in_xd2;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar27 == '\0') {
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar24,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar19,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar24 = *pdVar7;
          dVar19 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar7 + 2);
          dVar22 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar21;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar24 >> 0x20);
        }
        else {
          dVar22 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar22;
          unaff_r8[1] = dVar19;
          *unaff_r8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(uint *)((int)pdVar8 + 0x3c) != (uVar2 | uStack_34)) {
          pdVar7 = pdVar8 + 2;
          *(uint *)((int)pdVar8 + 0x3c) = uVar2 | uStack_34;
          pdVar10 = pdVar8 + 6;
          puVar11 = &DAT_8c4c2620;
          uVar3 = uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar10,uStack_34);
          uVar21 = float_to_color_u8(puVar11,pdVar7,pdVar10,uVar3);
          *(undefined4 *)(pdVar8 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar4 = float_to_color_u8(puVar11,pdVar7,pdVar10,uVar3);
          *(undefined4 *)((int)pdVar8 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          pdVar7 = (double *)((int)pdVar8 + 0x34);
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar8[6];
          pdVar7 = pdVar8 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar22,0);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
          dVar22 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar8[4] = in_xd2;
          dVar19 = *pdVar7;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar7 = (double *)((int)pdVar8 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar7 = SUB84(dVar19,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar27 == '\0') {
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar24,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar19,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar24 = *pdVar8;
          dVar19 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar8 + 2);
          dVar22 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar21;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar19 >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)pdVar7 = (int)((ulonglong)dVar24 >> 0x20);
        }
        else {
          dVar22 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar22;
          unaff_r8[5] = dVar19;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        if (*(uint *)((int)pdVar9 + 0x3c) != (uVar2 | uStack_34)) {
          pdVar8 = pdVar9 + 2;
          *(uint *)((int)pdVar9 + 0x3c) = uVar2 | uStack_34;
          pdVar10 = pdVar9 + 6;
          puVar11 = &DAT_8c4c2620;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar10,uStack_34);
          uVar21 = float_to_color_u8(puVar11,pdVar8,pdVar10,uStack_34);
          *(undefined4 *)(pdVar9 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar4 = float_to_color_u8(puVar11,pdVar8,pdVar10,uStack_34);
          *(undefined4 *)((int)pdVar9 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)((int)pdVar9 + 0x34);
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar9[6];
          pdVar8 = pdVar9 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar9 + 4) = SUB84(dVar22,0);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
          dVar22 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar9[4] = in_xd2;
          dVar19 = *pdVar8;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar8 = (double *)((int)pdVar9 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar8 = SUB84(dVar19,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar27 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar24,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar19,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar9 + 2);
          in_dr4 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
          *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar9 + 0x14);
          *(undefined4 *)(pdVar7 + 7) = uVar21;
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
      uStack_30 = uStack_30 + 1;
    }
  }
  else if (uVar3 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_24 = 0;
    while( true ) {
      uVar21 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_24) break;
      pdVar9 = (double *)((uint)*puVar16 * 0x40 + _DAT_8c4aa510);
      pdVar8 = (double *)((uint)puVar16[1] * 0x40 + _DAT_8c4aa510);
      puVar18 = puVar16 + 3;
      pdVar7 = (double *)((uint)puVar16[2] * 0x40 + _DAT_8c4aa510);
      puVar16 = puVar16 + 4;
      pdVar10 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
      if (cVar27 == '\0') {
        uVar21 = *(undefined4 *)((int)pdVar8 + 4);
        dVar24 = (double)CONCAT44(uVar21,*(undefined4 *)((int)pdVar9 + 4));
      }
      else {
        dVar24 = *(double *)((int)pdVar8 + 4);
        in_xd2 = *(double *)((int)pdVar9 + 4);
      }
      if (cVar26 == '\0') {
        dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - SUB84(dVar24,0),
                                  SUB84(dVar24,0));
      }
      else {
        dVar24 = dVar24 - dVar24;
      }
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)(pdVar7 + 1));
        dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),uVar21);
      }
      else {
        in_xd2 = pdVar7[1];
        dVar22 = pdVar8[1];
      }
      fVar23 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar26 == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) - fVar23);
      }
      else {
        dVar24 = dVar24 - dVar22;
      }
      if (cVar27 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar23);
      }
      if (cVar26 == '\0') {
        dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar24,0),
                                  SUB84(dVar24,0));
      }
      else {
        dVar24 = dVar24 * dVar24;
      }
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)(pdVar9 + 1));
      }
      else {
        in_xd2 = pdVar9[1];
      }
      if (cVar26 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar24,0)
                                 );
      }
      else {
        dVar19 = in_dr0 - dVar24;
      }
      uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
        dVar22 = (double)CONCAT44(uVar21,*(undefined4 *)((int)pdVar7 + 4));
      }
      else {
        in_xd2 = *(double *)((int)pdVar7 + 4);
        dVar22 = dVar24;
      }
      if (cVar26 == '\0') {
        dVar22 = (double)CONCAT44(uVar21,SUB84(dVar22,0) - SUB84(dVar24,0));
      }
      else {
        dVar22 = dVar22 - dVar24;
      }
      uStack_30 = 0;
      if (cVar26 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * SUB84(dVar22,0)
                                 );
      }
      else {
        in_dr0 = dVar19 * dVar22;
      }
      if (cVar26 == '\0') {
        fVar23 = (float)((ulonglong)dVar24 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar23,SUB84(dVar24,0));
        bVar25 = 0.0 < fVar23;
      }
      else {
        in_dr4 = dVar24 - in_dr0;
        bVar25 = (double)((ulonglong)dVar22 & 0xffffffff00000000) < in_dr4;
      }
      uVar21 = SUB84(in_dr4,0);
      if (bVar25) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_30 = 0x8000;
          goto LAB_8c24ac00;
        }
      }
      else {
LAB_8c24ac00:
        *(undefined4 *)pdVar9 = 0xe0000000;
        CacheBlockWriteBack(pdVar9);
        if (*(uint *)((int)pdVar9 + 0x3c) != (uVar2 | uStack_30)) {
          *(uint *)((int)pdVar9 + 0x3c) = uVar2 | uStack_30;
          a6 = pdVar9 + 6;
          pdVar12 = pdVar9 + 2;
          puVar11 = &DAT_8c4c2620;
          uVar3 = uStack_30;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar12,a6,uStack_30);
          uVar21 = float_to_color_u8(puVar11,pdVar12,a6,uVar3);
          *(undefined4 *)(pdVar9 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar4 = float_to_color_u8(puVar11,pdVar12,a6,uVar3);
          *(undefined4 *)((int)pdVar9 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar6);
          pdVar12 = (double *)((int)pdVar9 + 0x34);
          dVar24 = (double)CONCAT44(uVar6,SUB84(in_dr0,0));
        }
        else {
          dVar22 = pdVar9[6];
          pdVar12 = pdVar9 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar9 + 4) = SUB84(dVar22,0);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar12,uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
          dVar22 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar9[4] = in_xd2;
          dVar19 = *pdVar12;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar12 = (double *)((int)pdVar9 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar12 = SUB84(dVar19,0);
        }
        else {
          *pdVar12 = in_xd2;
        }
        CacheBlockWriteBack(pdVar12);
        if (cVar27 == '\0') {
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar24,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar19,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          dVar24 = *pdVar9;
          dVar19 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar9 + 2);
          dVar22 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar21;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar24 >> 0x20);
        }
        else {
          dVar22 = pdVar9[2];
          unaff_r8[3] = pdVar9[3];
          unaff_r8[2] = dVar22;
          unaff_r8[1] = dVar19;
          *unaff_r8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(uint *)((int)pdVar8 + 0x3c) != (uVar2 | uStack_30)) {
          *(uint *)((int)pdVar8 + 0x3c) = uVar2 | uStack_30;
          pdVar12 = pdVar8 + 6;
          pdVar9 = pdVar8 + 2;
          puVar11 = &DAT_8c4c2620;
          uVar3 = uStack_30;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar9,pdVar12,uStack_30);
          uVar21 = float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3);
          *(undefined4 *)(pdVar8 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar4 = float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3);
          *(undefined4 *)((int)pdVar8 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar6);
          pdVar9 = (double *)((int)pdVar8 + 0x34);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar8[6];
          pdVar9 = pdVar8 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar22,0);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar9,uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
          dVar22 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar8[4] = in_xd2;
          dVar19 = *pdVar9;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar9 = (double *)((int)pdVar8 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar9 = SUB84(dVar19,0);
        }
        else {
          *pdVar9 = in_xd2;
        }
        CacheBlockWriteBack(pdVar9);
        if (cVar27 == '\0') {
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar24,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar19,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar24 = *pdVar8;
          dVar19 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar8 + 2);
          dVar22 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar21;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar19 >> 0x20);
          pdVar8 = unaff_r8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)dVar24 >> 0x20);
        }
        else {
          dVar22 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar22;
          unaff_r8[5] = dVar19;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)((int)pdVar7 + 0x3c) != (uVar2 | uStack_30)) {
          *(uint *)((int)pdVar7 + 0x3c) = uVar2 | uStack_30;
          pdVar12 = pdVar7 + 6;
          pdVar9 = pdVar7 + 2;
          puVar11 = &DAT_8c4c2620;
          uVar3 = uStack_30;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar9,pdVar12,uStack_30);
          uVar21 = float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3);
          *(undefined4 *)(pdVar7 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar4 = float_to_color_u8(puVar11,pdVar9,pdVar12,uVar3);
          *(undefined4 *)((int)pdVar7 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar6);
          pdVar9 = (double *)((int)pdVar7 + 0x34);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar7[6];
          pdVar9 = pdVar7 + 7;
          dVar24 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar9,uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
          dVar22 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar7[4] = in_xd2;
          dVar19 = *pdVar9;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar9 = (double *)((int)pdVar7 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar9 = SUB84(dVar19,0);
        }
        else {
          *pdVar9 = in_xd2;
        }
        CacheBlockWriteBack(pdVar9);
        if (cVar27 == '\0') {
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar24,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar19,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar24 = *pdVar7;
          dVar19 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar7 + 2);
          dVar22 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
          *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(pdVar8 + 7) = uVar21;
          *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)dVar19 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)dVar24 >> 0x20);
        }
        else {
          dVar22 = pdVar7[2];
          pdVar8[7] = pdVar7[3];
          pdVar8[6] = dVar22;
          pdVar8[5] = dVar19;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar24;
        }
        uVar21 = SUB84(dVar22,0);
        *(undefined4 *)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(uint *)((int)pdVar10 + 0x3c) != (uVar2 | uStack_30)) {
          *(uint *)((int)pdVar10 + 0x3c) = uVar2 | uStack_30;
          pdVar9 = pdVar10 + 6;
          pdVar7 = pdVar10 + 2;
          puVar11 = &DAT_8c4c2620;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar9,uStack_30);
          uVar21 = float_to_color_u8(puVar11,pdVar7,pdVar9,uStack_30);
          *(undefined4 *)(pdVar10 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar4 = float_to_color_u8(puVar11,pdVar7,pdVar9,uStack_30);
          *(undefined4 *)((int)pdVar10 + 0x2c) = uVar4;
        }
        if (cVar27 == '\0') {
          dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 6),uVar6);
          pdVar7 = (double *)((int)pdVar10 + 0x34);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
        }
        else {
          dVar22 = pdVar10[6];
          pdVar7 = pdVar10 + 7;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar10 + 4) = SUB84(dVar22,0);
          dVar22 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar6);
          dVar19 = (double)CONCAT44(uVar6,SUB84(dVar24,0));
          dVar24 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar10[4] = in_xd2;
          dVar22 = *pdVar7;
          dVar19 = in_xd14;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
        }
        pdVar7 = (double *)((int)pdVar10 + 0x24);
        if (cVar26 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                  (float)((ulonglong)dVar22 >> 0x20) + SUB84(dVar22,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar7 = SUB84(dVar22,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar27 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar19,0));
          dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar22,0));
          pdVar10 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          dVar22 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar10 + 2);
          in_dr4 = (double)CONCAT44(uVar21,SUB84(dVar24,0));
          *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)(pdVar8 + 7) = uVar21;
          *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)dVar22 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar8[7] = pdVar10[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = dVar22;
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
    for (uStack_34 = 0; uVar3 = (uint)ar4[1], (int)uStack_34 < (int)uVar3; uStack_34 = uStack_34 + 1
        ) {
      puVar18 = puVar16 + 1;
      uVar3 = (uint)*puVar16;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar3;
      iVar13 = (uint)puVar16[2] * 0x40 + _DAT_8c4aa510;
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(*(undefined4 *)(iVar13 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar24 = *(double *)(iVar13 + 4);
      }
      iVar14 = (uint)*puVar18 * 0x40 + _DAT_8c4aa510;
      uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
      if (cVar27 == '\0') {
        dVar22 = (double)CONCAT44(uVar21,*(undefined4 *)(iVar14 + 4));
      }
      else {
        in_xd2 = *(double *)(iVar14 + 4);
        dVar22 = dVar24;
      }
      if (cVar26 == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar22,0),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 - dVar22;
      }
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(uVar21,*(undefined4 *)(iVar13 + 8));
      }
      iVar13 = (uint)puVar16[3] * 0x40 + _DAT_8c4aa510;
      fVar23 = SUB84(dVar24,0);
      if (cVar27 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(iVar13 + 8));
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar23);
      }
      else {
        in_xd2 = *(double *)(iVar13 + 8);
      }
      if (cVar26 == '\0') {
        fVar20 = SUB84(dVar22,0) - fVar23;
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * fVar20,fVar20);
      }
      else {
        dVar22 = (dVar22 - dVar24) * (dVar22 - dVar24);
      }
      if (cVar27 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(iVar14 + 8));
      }
      else {
        in_xd2 = *(double *)(iVar14 + 8);
      }
      if (cVar26 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar22,0)
                                 );
      }
      else {
        dVar19 = in_dr0 - dVar22;
      }
      if (cVar27 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(iVar13 + 4));
      }
      else {
        in_xd2 = *(double *)(iVar13 + 4);
      }
      uStack_38 = 0;
      if (cVar26 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) - (float)((ulonglong)dVar24 >> 0x20));
      }
      else {
        dVar22 = dVar22 - dVar24;
      }
      uVar15 = (uint)((ulonglong)dVar22 >> 0x20);
      dVar24 = dVar22;
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44(uVar15,fVar23);
      }
      if (cVar26 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) * SUB84(dVar22,0)
                                 );
      }
      else {
        in_dr0 = dVar19 * dVar22;
      }
      if (cVar26 == '\0') {
        fVar23 = (float)((ulonglong)dVar24 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar23,SUB84(dVar24,0));
        bVar25 = 0.0 < fVar23;
      }
      else {
        in_dr4 = dVar24 - in_dr0;
        bVar25 = (double)((ulonglong)uVar15 << 0x20) < in_dr4;
      }
      uVar21 = SUB84(in_dr4,0);
      if (bVar25) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_38 = 0x8000;
          goto LAB_8c24af4e;
        }
        puVar16 = puVar18 + uVar3;
      }
      else {
LAB_8c24af4e:
        _DAT_8c4aa520 = _DAT_8c4aa520 + uVar3;
        uStack_30 = 0;
        if (0 < (int)(uVar3 - 1)) {
          do {
            uVar21 = SUB84(in_dr4,0);
            uVar4 = SUB84(in_dr0,0);
            uVar1 = *puVar18;
            puVar18 = puVar18 + 1;
            pdVar7 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
            *(undefined4 *)pdVar7 = 0xe0000000;
            CacheBlockWriteBack(pdVar7);
            if (*(uint *)((int)pdVar7 + 0x3c) != (uVar2 | uStack_38)) {
              pdVar8 = pdVar7 + 2;
              *(uint *)((int)pdVar7 + 0x3c) = uVar2 | uStack_38;
              pdVar9 = pdVar7 + 6;
              puVar11 = &DAT_8c4c2620;
              uVar15 = uStack_38;
              FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar9,uStack_38);
              uVar21 = float_to_color_u8(puVar11,pdVar8,pdVar9,uVar15);
              *(undefined4 *)(pdVar7 + 5) = uVar21;
              uVar21 = _DAT_8c4c2630;
              if (cVar27 == '\0') {
                uVar21 = _DAT_8c4c2634;
              }
              uVar5 = float_to_color_u8(puVar11,pdVar8,pdVar9,uVar15);
              *(undefined4 *)((int)pdVar7 + 0x2c) = uVar5;
            }
            if (cVar27 == '\0') {
              pdVar8 = (double *)((int)pdVar7 + 0x34);
              dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar6);
              dVar22 = (double)CONCAT44(uVar6,uVar4);
            }
            else {
              dVar24 = pdVar7[6];
              pdVar8 = pdVar7 + 7;
              dVar22 = in_xd14;
              in_xd2 = in_xd14;
            }
            if (cVar26 == '\0') {
              dVar24 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                      (float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0));
            }
            if (cVar27 == '\0') {
              *(int *)(pdVar7 + 4) = SUB84(dVar24,0);
              dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar6);
              dVar24 = (double)CONCAT44(uVar6,SUB84(dVar22,0));
              dVar22 = (double)CONCAT44(uVar6,uVar21);
            }
            else {
              pdVar7[4] = in_xd2;
              dVar19 = *pdVar8;
              in_xd2 = in_xd14;
              dVar24 = in_xd14;
              dVar22 = in_xd14;
            }
            pdVar8 = (double *)((int)pdVar7 + 0x24);
            if (cVar26 == '\0') {
              dVar19 = (double)(ulonglong)
                               (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                      (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
            }
            if (cVar27 == '\0') {
              *(int *)pdVar8 = SUB84(dVar19,0);
            }
            else {
              *pdVar8 = in_xd2;
            }
            CacheBlockWriteBack(pdVar8);
            if (cVar27 == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar24,0));
              dVar24 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar19,0));
              pdVar7 = pdVar7 + 1;
            }
            else {
              in_dr0 = *pdVar7;
              dVar24 = pdVar7[1];
              pdVar7 = pdVar7 + 2;
            }
            if (cVar27 == '\0') {
              uVar21 = *(undefined4 *)(pdVar7 + 2);
              in_dr4 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
              *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
              *(undefined4 *)(unaff_r8 + 3) = uVar21;
              *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar24 >> 0x20);
              unaff_r8 = unaff_r8 + 2;
              *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              in_dr4 = pdVar7[2];
              unaff_r8[3] = pdVar7[3];
              unaff_r8[2] = in_dr4;
              unaff_r8[1] = dVar24;
              *unaff_r8 = in_dr0;
            }
            uVar21 = SUB84(in_dr4,0);
            unaff_r8 = unaff_r8 + 4;
            uStack_30 = uStack_30 + 1;
          } while ((int)uStack_30 < (int)(uVar3 - 1));
        }
        uVar4 = SUB84(in_dr0,0);
        puVar16 = puVar18 + 1;
        pdVar7 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar7 = 0xf0000000;
        CacheBlockWriteBack(pdVar7);
        if (*(uint *)((int)pdVar7 + 0x3c) != (uVar2 | uStack_38)) {
          pdVar8 = pdVar7 + 2;
          *(uint *)((int)pdVar7 + 0x3c) = uVar2 | uStack_38;
          pdVar9 = pdVar7 + 6;
          puVar11 = &DAT_8c4c2620;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar9,uStack_38);
          uVar21 = float_to_color_u8(puVar11,pdVar8,pdVar9,uStack_38);
          *(undefined4 *)(pdVar7 + 5) = uVar21;
          uVar21 = _DAT_8c4c2630;
          if (cVar27 == '\0') {
            uVar21 = _DAT_8c4c2634;
          }
          uVar5 = float_to_color_u8(puVar11,pdVar8,pdVar9,uStack_38);
          *(undefined4 *)((int)pdVar7 + 0x2c) = uVar5;
        }
        if (cVar27 == '\0') {
          pdVar8 = (double *)((int)pdVar7 + 0x34);
          dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar6);
          dVar22 = (double)CONCAT44(uVar6,uVar4);
        }
        else {
          dVar24 = pdVar7[6];
          pdVar8 = pdVar7 + 7;
          dVar22 = in_xd14;
          in_xd2 = in_xd14;
        }
        if (cVar26 == '\0') {
          dVar24 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar22 >> 0x20) *
                                  (float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0));
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar24,0);
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar6);
          dVar24 = (double)CONCAT44(uVar6,SUB84(dVar22,0));
          dVar22 = (double)CONCAT44(uVar6,uVar21);
        }
        else {
          pdVar7[4] = in_xd2;
          dVar19 = *pdVar8;
          in_xd2 = in_xd14;
          dVar24 = in_xd14;
          dVar22 = in_xd14;
        }
        pdVar8 = (double *)((int)pdVar7 + 0x24);
        if (cVar26 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar24 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
        }
        if (cVar27 == '\0') {
          *(int *)pdVar8 = SUB84(dVar19,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar27 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar24,0));
          dVar24 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar19,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          dVar24 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar27 == '\0') {
          uVar21 = *(undefined4 *)(pdVar7 + 2);
          in_dr4 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar21;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar24 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = dVar24;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
      }
    }
  }
  else if (uVar3 == 0xc000) {
    if ((_DAT_8c4ab308 & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c23fd56;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c23fac8;
    }
                    
                    
    uVar6 = (*UNRECOVERED_JUMPTABLE)(ar4,uVar2);
    return uVar6;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c24a808\n.set _FUN_8c24a808, _FUN_8c24a808_def\n");
