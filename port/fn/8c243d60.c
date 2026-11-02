#include "../decls.h"
undefined4 FUN_8c243d60_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *pdVar7;
  double *ar6_00;
  uint ar7_00;
  double *unaff_r8;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  double in_dr0;
  float fVar14;
  double in_dr2;
  double dVar15;
  float fVar17;
  uint uVar18;
  double dVar16;
  float fVar19;
  uint uVar20;
  double in_dr4;
  double dVar21;
  undefined4 uVar22;
  double in_dr6;
  double dVar23;
  undefined4 in_fr13;
  double dVar24;
  double dVar25;
  double dVar26;
  double in_xd2;
  double in_xd12;
  bool bVar27;
  char cVar28;
  char cVar29;
  undefined4 in_stack_ffffffb4;
  uint uVar30;
  uint uStack_44;
  int iStack_38;
  uint uStack_30;
  
  cVar29 = '\0';
  cVar28 = '\0';
  dVar24 = (double)CONCAT44(0x3f000000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffb4);
  iVar2 = _DAT_8c4aa510;
  if ((_DAT_8c4ab308 & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar11 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  iStack_38 = 0;
  do {
    puVar12 = puVar11 + 1;
    uStack_44 = (uint)*puVar11;
    uVar3 = 0x3f800000;
    if ((*puVar11 & 0x8000) != 0) {
      uStack_44 = uStack_44 & 0x7fff;
      uVar3 = 0xbf800000;
    }
    iStack_38 = iStack_38 + uStack_44;
    uStack_44 = uStack_44 - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar9 = (double *)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = (double *)((uint)*puVar12 * 0x40 + iVar2);
    pdVar7 = unaff_r8;
    if (cVar29 == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)((int)pdVar9 + 4));
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(in_dr6,0));
      dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),uVar3);
      in_dr4 = (double)(ulonglong)*(uint *)(pdVar8 + 1);
      dVar26 = in_xd12;
    }
    else {
      in_dr6 = *(double *)((int)pdVar8 + 4);
      dVar25 = pdVar9[1];
      dVar26 = *(double *)((int)pdVar9 + 4);
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)((uint)uVar1 * 0x40 + iVar2);
      uVar30 = 0;
      fVar19 = SUB84(in_dr4,0);
      in_dr4 = (double)CONCAT44(0x3f800000,fVar19);
      if ((*(uint *)pdVar8 & *(uint *)pdVar9 & *(uint *)pdVar10 & 0x3f) == 0) {
        if (cVar29 == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(dVar24,0));
        }
        else {
          dVar15 = pdVar10[1];
          in_xd2 = dVar26;
        }
        fVar17 = (float)((ulonglong)dVar25 >> 0x20);
        if (cVar28 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - fVar17,
                                    SUB84(dVar15,0) - (float)((ulonglong)in_dr6 >> 0x20));
        }
        else {
          dVar15 = (dVar15 - in_dr6) - dVar25;
        }
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar10 + 4));
        }
        if (cVar28 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar24,0));
          fVar14 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          in_dr0 = in_dr0 - dVar24;
          fVar14 = SUB84(dVar15 * dVar15,0);
        }
        dVar15 = dVar25;
        if (cVar29 == '\0') {
          dVar15 = (double)CONCAT44(fVar17,fVar14);
        }
        if (cVar28 == '\0') {
          fVar17 = ((float)((ulonglong)dVar15 >> 0x20) - fVar19) * SUB84(in_dr0,0);
          in_dr2 = (double)CONCAT44(fVar17,SUB84(dVar15,0) - fVar17);
        }
        else {
          in_dr2 = (dVar15 - in_dr4) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar29 == '\0') {
          in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),fVar19);
        }
        if (cVar28 == '\0') {
          in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(dVar25,0),
                                    SUB84(in_dr4,0));
        }
        else {
          in_dr4 = in_dr4 * dVar25;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar28 == '\0') {
          bVar27 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
        }
        else {
          bVar27 = in_dr2 < in_dr4;
        }
        if ((bVar27) && (uVar4 != 0)) {
          uVar30 = uVar4;
          if (cVar28 == '\0') {
            in_dr4 = (double)CONCAT44(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -(double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar18 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar19 = (float)((ulonglong)in_dr4 >> 0x20);
      if (pdVar7 < unaff_r8) {
        if (cVar28 == '\0') {
          bVar27 = fVar19 < 0.0;
        }
        else {
          bVar27 = in_dr4 < (double)((ulonglong)uVar18 << 0x20);
        }
        if (bVar27) {
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar18 = uVar30;
          if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | uVar30)) {
            pdVar8 = pdVar9 + 2;
            *(uint *)((int)pdVar9 + 0x3c) = ar5 | uVar30;
            pdVar6 = pdVar9 + 6;
            puVar5 = &DAT_8c4c2620;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar6,uVar30);
            uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar6,uVar30);
            *(undefined4 *)(pdVar9 + 5) = uVar3;
            if (cVar29 == '\0') {
              in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
              in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
              in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar6,uVar30);
            *(undefined4 *)((int)pdVar9 + 0x2c) = uVar3;
          }
          uVar30 = SUB84(in_dr6,0);
          uVar3 = (undefined4)((ulonglong)dVar24 >> 0x20);
          if (cVar29 == '\0') {
            pdVar8 = (double *)((int)pdVar9 + 0x34);
            dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar3);
            dVar23 = (double)CONCAT44(uVar3,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
            dVar23 = dVar24;
            in_xd2 = dVar24;
          }
          if (cVar28 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar23 >> 0x20) *
                                    (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
          }
          if (cVar29 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar15,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar3);
            dVar15 = (double)CONCAT44(uVar3,SUB84(dVar23,0));
            dVar23 = (double)CONCAT44(uVar3,SUB84(in_dr4,0));
          }
          else {
            pdVar9[4] = in_xd2;
            dVar16 = *pdVar8;
            in_xd2 = dVar24;
            dVar15 = dVar24;
            dVar23 = dVar24;
          }
          uVar3 = SUB84(dVar23,0);
          pdVar8 = (double *)((int)pdVar9 + 0x24);
          if (cVar28 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          uVar22 = SUB84(dVar16,0);
          if (cVar29 == '\0') {
            *(undefined4 *)pdVar8 = uVar22;
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          goto LAB_8c244142;
        }
        *(undefined4 *)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        uVar18 = uVar30;
        if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | uVar30)) {
          pdVar8 = pdVar9 + 2;
          *(uint *)((int)pdVar9 + 0x3c) = ar5 | uVar30;
          pdVar7 = pdVar9 + 6;
          puVar5 = &DAT_8c4c2620;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar7,uVar30);
          uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30);
          *(undefined4 *)(pdVar9 + 5) = uVar3;
          if (cVar29 == '\0') {
            in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
            in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
          }
          else {
            in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
            in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
          }
          uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30);
          *(undefined4 *)((int)pdVar9 + 0x2c) = uVar3;
        }
        uVar3 = (undefined4)((ulonglong)dVar24 >> 0x20);
        if (cVar29 == '\0') {
          pdVar8 = (double *)((int)pdVar9 + 0x34);
          dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar3);
          dVar23 = (double)CONCAT44(uVar3,SUB84(in_dr0,0));
        }
        else {
          dVar15 = pdVar9[6];
          pdVar8 = pdVar9 + 7;
          dVar23 = dVar24;
          in_xd2 = dVar24;
        }
        if (cVar28 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar23 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        if (cVar29 == '\0') {
          *(int *)(pdVar9 + 4) = SUB84(dVar15,0);
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar3);
          dVar15 = (double)CONCAT44(uVar3,SUB84(dVar23,0));
          dVar23 = (double)CONCAT44(uVar3,SUB84(in_dr4,0));
        }
        else {
          pdVar9[4] = in_xd2;
          dVar16 = *pdVar8;
          in_xd2 = dVar24;
          dVar15 = dVar24;
          dVar23 = dVar24;
        }
        pdVar8 = (double *)((int)pdVar9 + 0x24);
        if (cVar28 == '\0') {
          dVar16 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                  (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
        }
        if (cVar29 == '\0') {
          *(int *)pdVar8 = SUB84(dVar16,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar15,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar16,0));
          pdVar8 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar8 = pdVar9 + 2;
        }
        if (cVar29 == '\0') {
          uVar3 = *(undefined4 *)(pdVar8 + 2);
          in_dr4 = (double)CONCAT44(uVar3,SUB84(dVar23,0));
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar3;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar8[2];
          in_dr6 = pdVar8[3];
          unaff_r8[3] = in_dr6;
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        pdVar7 = unaff_r8;
        uVar30 = uVar18;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar18 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar19 < 0.0;
        }
        else {
          bVar27 = in_dr4 < in_dr2;
        }
        if (bVar27) {
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          ar7_00 = uVar30;
          if (*(uint *)((int)pdVar8 + 0x3c) != (ar5 | uVar30)) {
            pdVar6 = pdVar8 + 2;
            *(uint *)((int)pdVar8 + 0x3c) = ar5 | uVar30;
            ar6_00 = pdVar8 + 6;
            puVar5 = &DAT_8c4c2620;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar6,ar6_00,uVar30);
            uVar3 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar30);
            *(undefined4 *)(pdVar8 + 5) = uVar3;
            if (cVar29 == '\0') {
              in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
              in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
              in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar3 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar30);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar3;
          }
          uVar3 = (undefined4)((ulonglong)dVar24 >> 0x20);
          if (cVar29 == '\0') {
            pdVar6 = (double *)((int)pdVar8 + 0x34);
            dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar3);
            dVar23 = (double)CONCAT44(uVar3,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar8[6];
            pdVar6 = pdVar8 + 7;
            dVar23 = dVar24;
            in_xd2 = dVar24;
          }
          if (cVar28 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar23 >> 0x20) *
                                    (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
          }
          if (cVar29 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar15,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar3);
            dVar15 = (double)CONCAT44(uVar3,SUB84(dVar23,0));
            dVar23 = (double)CONCAT44(uVar3,SUB84(in_dr4,0));
          }
          else {
            pdVar8[4] = in_xd2;
            dVar16 = *pdVar6;
            in_xd2 = dVar24;
            dVar15 = dVar24;
            dVar23 = dVar24;
          }
          pdVar6 = (double *)((int)pdVar8 + 0x24);
          if (cVar28 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          if (cVar29 == '\0') {
            *(int *)pdVar6 = SUB84(dVar16,0);
          }
          else {
            *pdVar6 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6);
          if (cVar29 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar15,0));
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar16,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar15 = *pdVar8;
            dVar16 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar29 == '\0') {
            uVar3 = *(undefined4 *)(pdVar8 + 2);
            dVar21 = (double)CONCAT44(uVar3,SUB84(dVar23,0));
            dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar3;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar16 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar15 >> 0x20);
          }
          else {
            dVar21 = pdVar8[2];
            dVar23 = pdVar8[3];
            unaff_r8[3] = dVar23;
            unaff_r8[2] = dVar21;
            unaff_r8[1] = dVar16;
            *unaff_r8 = dVar15;
          }
          uVar20 = SUB84(dVar21,0);
          uVar30 = SUB84(dVar23,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar18 = ar7_00;
          if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | ar7_00)) {
            pdVar8 = pdVar9 + 2;
            *(uint *)((int)pdVar9 + 0x3c) = ar5 | ar7_00;
            pdVar6 = pdVar9 + 6;
            puVar5 = &DAT_8c4c2620;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar6,ar7_00);
            uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00);
            *(undefined4 *)(pdVar9 + 5) = uVar3;
            uVar30 = _DAT_8c4c2638;
            uVar20 = _DAT_8c4c2630;
            if (cVar29 == '\0') {
              uVar30 = _DAT_8c4c263c;
              uVar20 = _DAT_8c4c2634;
            }
            uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00);
            *(undefined4 *)((int)pdVar9 + 0x2c) = uVar3;
          }
          uVar3 = (undefined4)((ulonglong)dVar24 >> 0x20);
          if (cVar29 == '\0') {
            pdVar8 = (double *)((int)pdVar9 + 0x34);
            dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar3);
            dVar15 = (double)CONCAT44(uVar3,SUB84(dVar15,0));
          }
          else {
            dVar23 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
            dVar15 = dVar24;
            in_xd2 = dVar24;
          }
          if (cVar28 == '\0') {
            dVar23 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar23 >> 0x20) + SUB84(dVar23,0));
          }
          if (cVar29 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar23,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar3);
            dVar15 = (double)CONCAT44(uVar3,SUB84(dVar15,0));
            dVar23 = (double)CONCAT44(uVar3,uVar20);
          }
          else {
            pdVar9[4] = in_xd2;
            dVar16 = *pdVar8;
            in_xd2 = dVar24;
            dVar15 = dVar24;
            dVar23 = dVar24;
          }
          uVar3 = SUB84(dVar23,0);
          pdVar8 = (double *)((int)pdVar9 + 0x24);
          if (cVar28 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          uVar22 = SUB84(dVar16,0);
          if (cVar29 == '\0') {
            *(undefined4 *)pdVar8 = uVar22;
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
LAB_8c244142:
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar15,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),uVar22);
            pdVar8 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            in_dr2 = pdVar9[1];
            pdVar8 = pdVar9 + 2;
          }
          if (cVar29 == '\0') {
            uVar22 = *(undefined4 *)(pdVar8 + 2);
            in_dr4 = (double)CONCAT44(uVar22,uVar3);
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar30);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar22;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            in_dr6 = pdVar8[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          uVar30 = uVar18;
        }
      }
      if (cVar29 == '\0') {
        uVar3 = SUB84(dVar24,0);
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
        in_xd12 = dVar26;
        in_dr6 = (double)CONCAT44(uVar3,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar10 + 4);
        in_dr6 = dVar26;
      }
      uVar3 = 8;
      if (cVar29 == '\0') {
        in_dr4 = (double)((ulonglong)dVar25 >> 0x20);
        uVar18 = (uint)((ulonglong)dVar25 >> 0x20);
        dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(dVar25,0));
      }
      else {
        uVar18 = SUB84(in_dr4,0);
        dVar26 = pdVar10[1];
      }
      uStack_44 = uStack_44 + -1;
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),-SUB84(dVar26,0));
      pdVar8 = pdVar9;
      pdVar9 = pdVar10;
      dVar26 = in_xd12;
    } while (uStack_44 != 0);
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | uVar30)) {
        pdVar8 = pdVar10 + 2;
        *(uint *)((int)pdVar10 + 0x3c) = ar5 | uVar30;
        pdVar7 = pdVar10 + 6;
        puVar5 = &DAT_8c4c2620;
        FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar7,uVar30);
        uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30);
        *(undefined4 *)(pdVar10 + 5) = uVar3;
        if (cVar29 == '\0') {
          in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
          uVar18 = _DAT_8c4c2634;
        }
        else {
          in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
          uVar18 = _DAT_8c4c2630;
        }
        uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30);
        *(undefined4 *)((int)pdVar10 + 0x2c) = uVar3;
      }
      uVar22 = (undefined4)((ulonglong)dVar24 >> 0x20);
      if (cVar29 == '\0') {
        pdVar8 = (double *)((int)pdVar10 + 0x34);
        dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 6),uVar22);
        dVar25 = (double)CONCAT44(uVar22,SUB84(in_dr0,0));
      }
      else {
        dVar26 = pdVar10[6];
        pdVar8 = pdVar10 + 7;
        dVar25 = dVar24;
        in_xd2 = dVar24;
      }
      if (cVar28 == '\0') {
        dVar26 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar25 >> 0x20) *
                                (float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0));
      }
      if (cVar29 == '\0') {
        *(int *)(pdVar10 + 4) = SUB84(dVar26,0);
        dVar15 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar22);
        dVar26 = (double)CONCAT44(uVar22,SUB84(dVar25,0));
        dVar25 = (double)CONCAT44(uVar22,uVar18);
      }
      else {
        pdVar10[4] = in_xd2;
        dVar15 = *pdVar8;
        in_xd2 = dVar24;
        dVar26 = dVar24;
        dVar25 = dVar24;
      }
      pdVar8 = (double *)((int)pdVar10 + 0x24);
      if (cVar28 == '\0') {
        dVar15 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
      }
      if (cVar29 == '\0') {
        *(int *)pdVar8 = SUB84(dVar15,0);
      }
      else {
        *pdVar8 = in_xd2;
      }
      CacheBlockWriteBack(pdVar8);
      if (cVar29 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar26,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar15,0));
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        in_dr2 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar29 == '\0') {
        uVar22 = *(undefined4 *)(pdVar10 + 2);
        in_dr4 = (double)CONCAT44(uVar22,SUB84(dVar25,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar22;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar10[2];
        in_dr6 = pdVar10[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_38;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_38;
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c243d60\n.set _FUN_8c243d60, _FUN_8c243d60_def\n");
