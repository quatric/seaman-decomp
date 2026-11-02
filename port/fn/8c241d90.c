#include "../decls.h"
undefined4 FUN_8c241d90_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  double *pdVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  double *ar5_00;
  double *unaff_r8;
  double *pdVar7;
  double *ar4_00;
  double *pdVar8;
  double *pdVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  double in_dr0;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  float fVar18;
  double dVar16;
  double dVar17;
  double in_dr4;
  double dVar19;
  undefined4 uVar20;
  undefined4 in_fr13;
  double dVar21;
  undefined4 uVar22;
  double in_dr14;
  double in_xd2;
  double in_xd12;
  bool bVar23;
  char cVar24;
  char cVar25;
  undefined4 in_stack_ffffffc0;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar21 = (double)CONCAT44(0x3f000000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffc0);
  iVar3 = _DAT_8c4aa510;
  puVar10 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  uStack_38 = 0;
  iStack_34 = 0;
  do {
    uVar20 = SUB84(in_dr14,0);
    puVar11 = puVar10 + 1;
    uVar6 = (uint)*puVar10;
    if (cVar25 == '\0') {
      uVar20 = 0x3f800000;
    }
    if ((*puVar10 & 0x8000) != 0) {
      uVar6 = uVar6 & 0x7fff;
      if (cVar24 == '\0') {
        uVar14 = 0xbf800000;
      }
      else {
        uVar14 = (undefined4)((ulonglong)-(double)CONCAT44(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar25 == '\0') {
        uVar20 = uVar14;
      }
    }
    iStack_34 = iStack_34 + uVar6;
    iVar5 = uVar6 - 2;
    puVar12 = puVar10 + 2;
    puVar10 = puVar10 + 3;
    ar4_00 = (double *)((uint)*puVar12 * 0x40 + iVar3);
    pdVar7 = (double *)((uint)*puVar11 * 0x40 + iVar3);
    pdVar8 = unaff_r8;
    if (cVar25 == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)ar4_00 + 4));
      in_dr14 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 1),uVar20);
      in_dr4 = *(double *)((int)pdVar7 + 4);
    }
    else {
      in_xd12 = *(double *)((int)ar4_00 + 4);
      in_dr14 = ar4_00[1];
      in_dr4 = pdVar7[1];
    }
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      pdVar9 = (double *)((uint)uVar1 * 0x40 + iVar3);
      if (cVar25 == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),SUB84(dVar21,0));
      }
      else {
        dVar15 = pdVar9[1];
        in_xd2 = in_xd12;
      }
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) - SUB84(in_dr4,0)
                                 );
      }
      else {
        dVar15 = dVar15 - in_dr4;
      }
      fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - fVar18,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 - in_dr14;
      }
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)((int)pdVar9 + 4))
        ;
      }
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar21,0)
                                 );
        fVar13 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 - dVar21;
        fVar13 = SUB84(dVar15 * dVar15,0);
      }
      dVar15 = in_dr14;
      if (cVar25 == '\0') {
        dVar15 = (double)CONCAT44(fVar18,fVar13);
      }
      if (cVar24 == '\0') {
        fVar18 = ((float)((ulonglong)dVar15 >> 0x20) - (float)((ulonglong)in_dr4 >> 0x20)) *
                 SUB84(in_dr0,0);
        dVar15 = (double)CONCAT44(fVar18,SUB84(dVar15,0) - fVar18);
      }
      else {
        dVar15 = (dVar15 - in_dr4) * in_dr0;
        dVar15 = dVar15 - dVar15;
      }
      dVar19 = in_xd2;
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44(SUB84(dVar15,0),SUB84(in_dr4,0));
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(in_dr14,0),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * in_dr14;
      }
      uVar6 = (uint)((ulonglong)dVar15 >> 0x20);
      fVar18 = (float)((ulonglong)dVar19 >> 0x20);
      if (pdVar8 < unaff_r8) {
        dVar15 = (double)((ulonglong)uVar6 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar15;
        }
        if (bVar23) {
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = _DAT_8c4c11b0;
          if (cVar25 == '\0') {
            uVar20 = _DAT_8c4c11b4;
          }
          uVar4 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
          uVar14 = SUB84(dVar15,0);
          uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
          dVar16 = dVar21;
          dVar15 = dVar21;
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar16 = (double)CONCAT44(uVar22,uVar20);
            dVar15 = in_xd2;
            uVar14 = uVar22;
            dVar19 = (double)CONCAT44(uVar22,SUB84(in_dr0,0));
          }
          *(undefined4 *)(ar4_00 + 5) = uVar4;
          if (cVar25 == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 6),uVar14);
            ar5 = (double *)((int)ar4_00 + 0x34);
          }
          else {
            dVar17 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar24 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
          }
          uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
          if (cVar25 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar17,0);
            dVar17 = (double)CONCAT44(*(undefined4 *)ar5,uVar20);
            in_xd2 = dVar15;
            dVar15 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = dVar15;
            dVar17 = *ar5;
            in_xd2 = dVar16;
            dVar15 = dVar16;
          }
          pdVar7 = (double *)((int)ar4_00 + 0x24);
          if (cVar24 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
          }
          uVar20 = SUB84(dVar17,0);
          if (cVar25 == '\0') {
            *(undefined4 *)pdVar7 = uVar20;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
          goto LAB_8c242008;
        }
        *(undefined4 *)ar4_00 = 0xf0000000;
        CacheBlockWriteBack(ar4_00);
        uVar20 = _DAT_8c4c11b0;
        if (cVar25 == '\0') {
          uVar20 = _DAT_8c4c11b4;
        }
        uVar4 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
        uVar14 = SUB84(dVar15,0);
        uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar16 = dVar21;
        dVar15 = dVar21;
        dVar19 = dVar21;
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(uVar22,uVar20);
          dVar15 = in_xd2;
          uVar14 = uVar22;
          dVar19 = (double)CONCAT44(uVar22,SUB84(in_dr0,0));
        }
        *(undefined4 *)(ar4_00 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 6),uVar14);
          ar5 = (double *)((int)ar4_00 + 0x34);
        }
        else {
          dVar17 = ar4_00[6];
          ar5 = ar4_00 + 7;
        }
        if (cVar24 == '\0') {
          dVar17 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                  (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
        }
        uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(ar4_00 + 4) = SUB84(dVar17,0);
          dVar17 = (double)CONCAT44(*(undefined4 *)ar5,uVar20);
          in_xd2 = dVar15;
          dVar15 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
        }
        else {
          ar4_00[4] = dVar15;
          dVar17 = *ar5;
          in_xd2 = dVar16;
          dVar15 = dVar16;
        }
        pdVar7 = (double *)((int)ar4_00 + 0x24);
        if (cVar24 == '\0') {
          dVar17 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                  (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
        }
        if (cVar25 == '\0') {
          *(int *)pdVar7 = SUB84(dVar17,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar15,0));
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),SUB84(dVar17,0));
          pdVar7 = ar4_00 + 1;
        }
        else {
          in_dr0 = *ar4_00;
          dVar15 = ar4_00[1];
          pdVar7 = ar4_00 + 2;
        }
        if (cVar25 == '\0') {
          uVar20 = *(undefined4 *)(pdVar7 + 2);
          dVar19 = (double)CONCAT44(uVar20,SUB84(dVar16,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar20;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar15 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar19 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar19;
          unaff_r8[1] = dVar15;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        uStack_38 = (int)unaff_r8 + uStack_38 + (0x20 - (int)pdVar8);
        pdVar8 = unaff_r8;
      }
      else {
        dVar15 = (double)((ulonglong)uVar6 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar15;
        }
        if (bVar23) {
          *(undefined4 *)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          uVar20 = _DAT_8c4c11b0;
          if (cVar25 == '\0') {
            uVar20 = _DAT_8c4c11b4;
          }
          uVar4 = float_to_color_u8(pdVar7,ar5,ar6,ar7);
          uVar14 = SUB84(dVar15,0);
          uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
          dVar17 = dVar21;
          dVar15 = dVar21;
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar17 = (double)CONCAT44(uVar22,uVar20);
            dVar15 = in_xd2;
            uVar14 = uVar22;
            dVar19 = (double)CONCAT44(uVar22,SUB84(in_dr0,0));
          }
          *(undefined4 *)(pdVar7 + 5) = uVar4;
          if (cVar25 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar14);
            ar5_00 = (double *)((int)pdVar7 + 0x34);
          }
          else {
            dVar16 = pdVar7[6];
            ar5_00 = pdVar7 + 7;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
          if (cVar25 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar16,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)ar5_00,uVar20);
            dVar17 = dVar15;
            dVar15 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
          }
          else {
            pdVar7[4] = dVar15;
            dVar16 = *ar5_00;
            dVar15 = dVar17;
          }
          pdVar2 = (double *)((int)pdVar7 + 0x24);
          if (cVar24 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          if (cVar25 == '\0') {
            *(int *)pdVar2 = SUB84(dVar16,0);
          }
          else {
            *pdVar2 = dVar17;
          }
          CacheBlockWriteBack(pdVar2);
          if (cVar25 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar15,0));
            dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar16,0));
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar15 = *pdVar7;
            dVar19 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(pdVar7 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar20;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar15 >> 0x20);
          }
          else {
            dVar16 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar16;
            unaff_r8[1] = dVar19;
            *unaff_r8 = dVar15;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = _DAT_8c4c11b0;
          if (cVar25 == '\0') {
            uVar20 = _DAT_8c4c11b4;
          }
          uVar4 = float_to_color_u8(ar4_00,ar5_00,ar6,ar7);
          uVar14 = SUB84(dVar19,0);
          uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
          dVar16 = dVar21;
          in_xd2 = dVar21;
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar16 = (double)CONCAT44(uVar22,uVar20);
            in_xd2 = dVar17;
            uVar14 = uVar22;
            dVar19 = (double)CONCAT44(uVar22,SUB84(dVar15,0));
          }
          *(undefined4 *)(ar4_00 + 5) = uVar4;
          if (cVar25 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 6),uVar14);
            ar5 = (double *)((int)ar4_00 + 0x34);
          }
          else {
            dVar15 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar24 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                    (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
          }
          uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
          if (cVar25 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar15,0);
            dVar17 = (double)CONCAT44(*(undefined4 *)ar5,uVar20);
            dVar15 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = in_xd2;
            dVar17 = *ar5;
            in_xd2 = dVar16;
            dVar15 = dVar16;
          }
          pdVar7 = (double *)((int)ar4_00 + 0x24);
          if (cVar24 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
          }
          uVar20 = SUB84(dVar17,0);
          if (cVar25 == '\0') {
            *(undefined4 *)pdVar7 = uVar20;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
LAB_8c242008:
          if (cVar25 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar15,0));
            dVar15 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),uVar20);
            pdVar7 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar15 = ar4_00[1];
            pdVar7 = ar4_00 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(pdVar7 + 2);
            dVar19 = (double)CONCAT44(uVar20,SUB84(dVar16,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar20;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar15 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar15;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      uVar20 = SUB84(dVar15,0);
      uVar14 = SUB84(dVar19,0);
      if (cVar25 == '\0') {
        uVar14 = SUB84(dVar21,0);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)pdVar9 + 4))
        ;
      }
      else {
        in_xd12 = *(double *)((int)pdVar9 + 4);
      }
      uVar4 = 8;
      if (cVar25 == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),SUB84(in_dr14,0));
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar14);
      }
      else {
        dVar15 = pdVar9[1];
        in_dr4 = in_dr14;
      }
      iVar5 = iVar5 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),-SUB84(dVar15,0));
      pdVar7 = ar4_00;
      ar4_00 = pdVar9;
    } while (iVar5 != 0);
    if (pdVar8 < unaff_r8) {
      *(undefined4 *)pdVar9 = 0xf0000000;
      CacheBlockWriteBack(pdVar9);
      uVar14 = _DAT_8c4c11b0;
      if (cVar25 == '\0') {
        uVar14 = _DAT_8c4c11b4;
      }
      uVar4 = float_to_color_u8(pdVar9,ar5,ar6,ar7);
      uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
      dVar16 = dVar21;
      dVar15 = dVar21;
      dVar19 = dVar21;
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44(uVar22,uVar14);
        dVar15 = in_xd2;
        uVar20 = uVar22;
        dVar19 = (double)CONCAT44(uVar22,SUB84(in_dr0,0));
      }
      *(undefined4 *)(pdVar9 + 5) = uVar4;
      if (cVar25 == '\0') {
        dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar20);
        ar5 = (double *)((int)pdVar9 + 0x34);
      }
      else {
        dVar17 = pdVar9[6];
        ar5 = pdVar9 + 7;
      }
      if (cVar24 == '\0') {
        dVar17 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar19 >> 0x20) *
                                (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
      }
      uVar20 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (cVar25 == '\0') {
        *(int *)(pdVar9 + 4) = SUB84(dVar17,0);
        dVar17 = (double)CONCAT44(*(undefined4 *)ar5,uVar20);
        in_xd2 = dVar15;
        dVar15 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
      }
      else {
        pdVar9[4] = dVar15;
        dVar17 = *ar5;
        in_xd2 = dVar16;
        dVar15 = dVar16;
      }
      pdVar7 = (double *)((int)pdVar9 + 0x24);
      if (cVar24 == '\0') {
        dVar17 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
      }
      if (cVar25 == '\0') {
        *(int *)pdVar7 = SUB84(dVar17,0);
      }
      else {
        *pdVar7 = in_xd2;
      }
      CacheBlockWriteBack(pdVar7);
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar15,0));
        dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar17,0));
        pdVar9 = pdVar9 + 1;
      }
      else {
        in_dr0 = *pdVar9;
        dVar15 = pdVar9[1];
        pdVar9 = pdVar9 + 2;
      }
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)(pdVar9 + 2);
        in_dr4 = (double)CONCAT44(uVar20,SUB84(dVar16,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar20;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar15 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar9[2];
        unaff_r8[3] = pdVar9[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar15;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      uStack_38 = (int)unaff_r8 + uStack_38 + (0x20 - (int)pdVar8);
    }
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + (uStack_38 >> 5);
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_34;
      return uVar4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c241d90\n.set _FUN_8c241d90, _FUN_8c241d90_def\n");
