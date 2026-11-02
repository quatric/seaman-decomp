#include "../decls.h"
undefined4 FUN_8c246b7a_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  double *ar5_00;
  double *unaff_r8;
  double *pdVar9;
  double *pdVar10;
  double *ar4_00;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  double in_dr0;
  float fVar15;
  double in_dr2;
  double dVar16;
  float fVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar21;
  double in_dr4;
  undefined4 uVar22;
  undefined4 uVar23;
  double in_dr6;
  undefined4 in_fr13;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double in_xd2;
  double in_xd12;
  bool bVar28;
  char cVar29;
  char cVar30;
  undefined4 in_stack_ffffffc0;
  int iStack_38;
  uint uStack_34;
  
  cVar30 = '\0';
  cVar29 = '\0';
  dVar24 = (double)CONCAT44(0x3f000000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffc0);
  iVar4 = _DAT_8c4aa510;
  uVar2 = _DAT_8c4ab308 & 0x800000;
  puVar12 = *(ushort **)(ar4 + 4);
  uStack_34 = (uint)*(ushort *)(ar4 + 2);
  iStack_38 = 0;
  do {
    puVar13 = puVar12 + 1;
    uVar8 = (uint)*puVar12;
    uVar6 = 0x3f800000;
    if ((*puVar12 & 0x8000) != 0) {
      uVar8 = uVar8 & 0x7fff;
      uVar6 = 0xbf800000;
    }
    iStack_38 = iStack_38 + uVar8;
    iVar7 = uVar8 - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    ar4_00 = (double *)((uint)*puVar14 * 0x40 + iVar4);
    pdVar9 = (double *)((uint)*puVar13 * 0x40 + iVar4);
    pdVar10 = unaff_r8;
    if (cVar30 == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)((int)ar4_00 + 4));
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr6,0));
      dVar26 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 1),uVar6);
      in_dr4 = (double)(ulonglong)*(uint *)(pdVar9 + 1);
      dVar27 = in_xd12;
    }
    else {
      in_dr6 = *(double *)((int)pdVar9 + 4);
      dVar26 = ar4_00[1];
      dVar27 = *(double *)((int)ar4_00 + 4);
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)((uint)uVar1 * 0x40 + iVar4);
      fVar21 = SUB84(in_dr4,0);
      in_dr4 = (double)CONCAT44(0x3f800000,fVar21);
      if ((*(uint *)pdVar9 & *(uint *)ar4_00 & *(uint *)pdVar11 & 0x3f) == 0) {
        if (cVar30 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),SUB84(dVar24,0));
        }
        else {
          dVar16 = pdVar11[1];
          in_xd2 = dVar27;
        }
        fVar20 = (float)((ulonglong)dVar26 >> 0x20);
        if (cVar29 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar20,
                                    SUB84(dVar16,0) - (float)((ulonglong)in_dr6 >> 0x20));
        }
        else {
          dVar16 = (dVar16 - in_dr6) - dVar26;
        }
        if (cVar30 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar11 + 4));
        }
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar24,0));
          fVar15 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          in_dr0 = in_dr0 - dVar24;
          fVar15 = SUB84(dVar16 * dVar16,0);
        }
        dVar16 = dVar26;
        if (cVar30 == '\0') {
          dVar16 = (double)CONCAT44(fVar20,fVar15);
        }
        if (cVar29 == '\0') {
          fVar20 = ((float)((ulonglong)dVar16 >> 0x20) - fVar21) * SUB84(in_dr0,0);
          in_dr2 = (double)CONCAT44(fVar20,SUB84(dVar16,0) - fVar20);
        }
        else {
          in_dr2 = (dVar16 - in_dr4) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar30 == '\0') {
          in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),fVar21);
        }
        if (cVar29 == '\0') {
          in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(dVar26,0),
                                    SUB84(in_dr4,0));
        }
        else {
          in_dr4 = in_dr4 * dVar26;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar29 == '\0') {
          bVar28 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
        }
        else {
          bVar28 = in_dr2 < in_dr4;
        }
        if ((bVar28) && (uVar2 != 0)) {
          if (cVar29 == '\0') {
            in_dr4 = (double)CONCAT44(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -(double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar8 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar21 = (float)((ulonglong)in_dr4 >> 0x20);
      if (pdVar10 < unaff_r8) {
        dVar16 = (double)((ulonglong)uVar8 << 0x20);
        if (cVar29 == '\0') {
          bVar28 = fVar21 < 0.0;
        }
        else {
          bVar28 = in_dr4 < dVar16;
        }
        if (bVar28) {
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar22 = _DAT_8c4c11b0;
          uVar6 = _DAT_8c4c11b8;
          if (cVar30 == '\0') {
            uVar22 = _DAT_8c4c11b4;
            uVar6 = _DAT_8c4c11bc;
          }
          uVar5 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
          uVar23 = SUB84(dVar16,0);
          uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
          dVar18 = dVar24;
          dVar16 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(uVar25,uVar22);
            dVar16 = in_xd2;
            uVar23 = uVar25;
            dVar19 = (double)CONCAT44(uVar25,SUB84(in_dr0,0));
          }
          *(undefined4 *)(ar4_00 + 5) = uVar5;
          if (cVar30 == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 6),uVar23);
            ar5 = (double *)((int)ar4_00 + 0x34);
          }
          else {
            dVar17 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar29 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
          }
          uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar17,0);
            dVar17 = (double)CONCAT44(*(undefined4 *)ar5,uVar22);
            in_xd2 = dVar16;
            dVar16 = (double)CONCAT44(uVar22,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = dVar16;
            dVar17 = *ar5;
            in_xd2 = dVar18;
            dVar16 = dVar18;
          }
          pdVar9 = (double *)((int)ar4_00 + 0x24);
          if (cVar29 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar16 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
          }
          uVar22 = SUB84(dVar17,0);
          if (cVar30 == '\0') {
            *(undefined4 *)pdVar9 = uVar22;
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
LAB_8c246e36:
          if (cVar30 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar16,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),uVar22);
            pdVar9 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = ar4_00[1];
            pdVar9 = ar4_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar22 = *(undefined4 *)(pdVar9 + 2);
            in_dr4 = (double)CONCAT44(uVar22,SUB84(dVar18,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),uVar6);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar22;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)ar4_00 = 0xf0000000;
          CacheBlockWriteBack(ar4_00);
          uVar22 = _DAT_8c4c11b0;
          uVar6 = _DAT_8c4c11b8;
          if (cVar30 == '\0') {
            uVar22 = _DAT_8c4c11b4;
            uVar6 = _DAT_8c4c11bc;
          }
          uVar5 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
          uVar23 = SUB84(dVar16,0);
          uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
          dVar17 = dVar24;
          dVar16 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar17 = (double)CONCAT44(uVar25,uVar22);
            dVar16 = in_xd2;
            uVar23 = uVar25;
            dVar19 = (double)CONCAT44(uVar25,SUB84(in_dr0,0));
          }
          *(undefined4 *)(ar4_00 + 5) = uVar5;
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 6),uVar23);
            ar5 = (double *)((int)ar4_00 + 0x34);
          }
          else {
            dVar18 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0));
          }
          uVar22 = (undefined4)((ulonglong)dVar17 >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar18,0);
            dVar18 = (double)CONCAT44(*(undefined4 *)ar5,uVar22);
            in_xd2 = dVar16;
            dVar16 = (double)CONCAT44(uVar22,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = dVar16;
            dVar18 = *ar5;
            in_xd2 = dVar17;
            dVar16 = dVar17;
          }
          pdVar9 = (double *)((int)ar4_00 + 0x24);
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar16 >> 0x20) *
                                    (float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0));
          }
          if (cVar30 == '\0') {
            *(int *)pdVar9 = SUB84(dVar18,0);
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
          if (cVar30 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar16,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),SUB84(dVar18,0));
            pdVar9 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = ar4_00[1];
            pdVar9 = ar4_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar22 = *(undefined4 *)(pdVar9 + 2);
            in_dr4 = (double)CONCAT44(uVar22,SUB84(dVar17,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),uVar6);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar22;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          pdVar10 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar8 << 0x20);
        if (cVar29 == '\0') {
          bVar28 = fVar21 < 0.0;
        }
        else {
          bVar28 = in_dr4 < in_dr2;
        }
        if (bVar28) {
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar6 = _DAT_8c4c11b0;
          if (cVar30 == '\0') {
            uVar6 = _DAT_8c4c11b4;
          }
          uVar23 = float_to_color_u8(pdVar9,ar5,ar6,ar7);
          uVar22 = SUB84(in_dr2,0);
          uVar5 = (undefined4)((ulonglong)dVar24 >> 0x20);
          dVar17 = dVar24;
          dVar16 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar17 = (double)CONCAT44(uVar5,uVar6);
            dVar16 = in_xd2;
            uVar22 = uVar5;
            dVar19 = (double)CONCAT44(uVar5,SUB84(in_dr0,0));
          }
          *(undefined4 *)(pdVar9 + 5) = uVar23;
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar22);
            ar5_00 = (double *)((int)pdVar9 + 0x34);
          }
          else {
            dVar18 = pdVar9[6];
            ar5_00 = pdVar9 + 7;
          }
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0));
          }
          uVar6 = (undefined4)((ulonglong)dVar17 >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar18,0);
            dVar18 = (double)CONCAT44(*(undefined4 *)ar5_00,uVar6);
            dVar17 = dVar16;
            dVar16 = (double)CONCAT44(uVar6,SUB84(dVar19,0));
          }
          else {
            pdVar9[4] = dVar16;
            dVar18 = *ar5_00;
            dVar16 = dVar17;
          }
          pdVar3 = (double *)((int)pdVar9 + 0x24);
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar16 >> 0x20) *
                                    (float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0));
          }
          if (cVar30 == '\0') {
            *(int *)pdVar3 = SUB84(dVar18,0);
          }
          else {
            *pdVar3 = dVar17;
          }
          CacheBlockWriteBack(pdVar3);
          if (cVar30 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar16,0));
            dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar18,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            dVar16 = *pdVar9;
            dVar19 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar30 == '\0') {
            uVar6 = *(undefined4 *)(pdVar9 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar6;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            dVar18 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar18;
            unaff_r8[1] = dVar19;
            *unaff_r8 = dVar16;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar22 = _DAT_8c4c11b0;
          uVar6 = _DAT_8c4c11b8;
          if (cVar30 == '\0') {
            uVar22 = _DAT_8c4c11b4;
            uVar6 = _DAT_8c4c11bc;
          }
          uVar5 = float_to_color_u8(ar4_00,ar5_00,ar6,ar7);
          uVar23 = SUB84(dVar19,0);
          uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
          dVar18 = dVar24;
          in_xd2 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(uVar25,uVar22);
            in_xd2 = dVar17;
            uVar23 = uVar25;
            dVar19 = (double)CONCAT44(uVar25,SUB84(dVar16,0));
          }
          *(undefined4 *)(ar4_00 + 5) = uVar5;
          if (cVar30 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 6),uVar23);
            ar5 = (double *)((int)ar4_00 + 0x34);
          }
          else {
            dVar16 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar29 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          uVar22 = (undefined4)((ulonglong)dVar18 >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar16,0);
            dVar17 = (double)CONCAT44(*(undefined4 *)ar5,uVar22);
            dVar16 = (double)CONCAT44(uVar22,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = in_xd2;
            dVar17 = *ar5;
            in_xd2 = dVar18;
            dVar16 = dVar18;
          }
          pdVar9 = (double *)((int)ar4_00 + 0x24);
          if (cVar29 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar16 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
          }
          uVar22 = SUB84(dVar17,0);
          if (cVar30 == '\0') {
            *(undefined4 *)pdVar9 = uVar22;
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
          goto LAB_8c246e36;
        }
      }
      if (cVar30 == '\0') {
        uVar6 = SUB84(dVar24,0);
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)((int)pdVar11 + 4)
                                 );
        in_xd12 = dVar27;
        in_dr6 = (double)CONCAT44(uVar6,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar11 + 4);
        in_dr6 = dVar27;
      }
      uVar6 = 8;
      if (cVar30 == '\0') {
        in_dr4 = (double)((ulonglong)dVar26 >> 0x20);
        dVar27 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),SUB84(dVar26,0));
      }
      else {
        dVar27 = pdVar11[1];
      }
      iVar7 = iVar7 + -1;
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),-SUB84(dVar27,0));
      pdVar9 = ar4_00;
      ar4_00 = pdVar11;
      dVar27 = in_xd12;
    } while (iVar7 != 0);
    if (pdVar10 < unaff_r8) {
      *(undefined4 *)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      uVar23 = _DAT_8c4c11b0;
      uVar22 = _DAT_8c4c11b8;
      if (cVar30 == '\0') {
        uVar23 = _DAT_8c4c11b4;
        uVar22 = _DAT_8c4c11bc;
      }
      uVar6 = float_to_color_u8(pdVar11,ar5,ar6,ar7);
      uVar5 = SUB84(in_dr2,0);
      uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar16 = dVar24;
      dVar27 = dVar24;
      dVar26 = dVar24;
      if (cVar30 == '\0') {
        dVar16 = (double)CONCAT44(uVar25,uVar23);
        dVar27 = in_xd2;
        uVar5 = uVar25;
        dVar26 = (double)CONCAT44(uVar25,SUB84(in_dr0,0));
      }
      *(undefined4 *)(pdVar11 + 5) = uVar6;
      if (cVar30 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 6),uVar5);
        ar5 = (double *)((int)pdVar11 + 0x34);
      }
      else {
        dVar19 = pdVar11[6];
        ar5 = pdVar11 + 7;
      }
      if (cVar29 == '\0') {
        dVar19 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar26 >> 0x20) *
                                (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
      }
      uVar23 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar30 == '\0') {
        *(int *)(pdVar11 + 4) = SUB84(dVar19,0);
        dVar19 = (double)CONCAT44(*(undefined4 *)ar5,uVar23);
        in_xd2 = dVar27;
        dVar27 = (double)CONCAT44(uVar23,SUB84(dVar26,0));
      }
      else {
        pdVar11[4] = dVar27;
        dVar19 = *ar5;
        in_xd2 = dVar16;
        dVar27 = dVar16;
      }
      pdVar9 = (double *)((int)pdVar11 + 0x24);
      if (cVar29 == '\0') {
        dVar19 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar27 >> 0x20) *
                                (float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0));
      }
      if (cVar30 == '\0') {
        *(int *)pdVar9 = SUB84(dVar19,0);
      }
      else {
        *pdVar9 = in_xd2;
      }
      CacheBlockWriteBack(pdVar9);
      if (cVar30 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar27,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(dVar19,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar30 == '\0') {
        uVar23 = *(undefined4 *)(pdVar11 + 2);
        in_dr4 = (double)CONCAT44(uVar23,SUB84(dVar16,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),uVar22);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar23;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar11[2];
        in_dr6 = pdVar11[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    uStack_34 = uStack_34 - 1;
    if (uStack_34 == 0) {
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_38;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_38;
      return uVar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c246b7a\n.set _FUN_8c246b7a, _FUN_8c246b7a_def\n");
