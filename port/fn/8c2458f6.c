#include "../decls.h"
undefined4 FUN_8c2458f6_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  double *unaff_r8;
  double *pdVar8;
  double *pdVar9;
  double *ar4_00;
  double *pdVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  short *psVar14;
  short *psVar15;
  undefined4 uVar16;
  double in_dr0;
  float fVar17;
  float fVar18;
  double in_dr2;
  double dVar19;
  double dVar20;
  double dVar21;
  double in_dr4;
  double dVar22;
  undefined4 uVar23;
  double in_dr6;
  undefined4 in_fr13;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double in_xd2;
  double in_xd12;
  bool bVar27;
  char cVar28;
  char cVar29;
  undefined4 in_stack_ffffffbc;
  int iStack_3c;
  uint uStack_34;
  
  cVar29 = '\0';
  cVar28 = '\0';
  dVar24 = (double)CONCAT44(0x3b800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffbc);
  iVar3 = _DAT_8c4aa510;
  uVar2 = _DAT_8c4ab308 & 0x800000;
  puVar11 = *(ushort **)(ar4 + 4);
  psVar14 = *(short **)(ar4 + 0x14);
  uStack_34 = (uint)*(ushort *)(ar4 + 2);
  iStack_3c = 0;
  do {
    puVar12 = puVar11 + 1;
    uVar7 = (uint)*puVar11;
    uVar23 = 0x3f800000;
    if ((*puVar11 & 0x8000) != 0) {
      uVar7 = uVar7 & 0x7fff;
      uVar23 = 0xbf800000;
    }
    iStack_3c = iStack_3c + uVar7;
    iVar6 = uVar7 - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    ar4_00 = (double *)((uint)*puVar13 * 0x40 + iVar3);
    pdVar8 = (double *)((uint)*puVar12 * 0x40 + iVar3);
    pdVar9 = unaff_r8;
    if (cVar29 == '\0') {
      dVar25 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),uVar23);
      in_dr4 = (double)(ulonglong)*(uint *)((int)pdVar8 + 4);
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)(ar4_00 + 1));
      in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),SUB84(in_dr6,0));
      dVar22 = in_xd12;
    }
    else {
      dVar25 = *(double *)((int)ar4_00 + 4);
      in_dr6 = pdVar8[1];
      dVar22 = ar4_00[1];
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)((uint)uVar1 * 0x40 + iVar3);
      fVar18 = SUB84(in_dr4,0);
      in_dr4 = (double)CONCAT44(0x3f800000,fVar18);
      if ((*(uint *)pdVar8 & *(uint *)ar4_00 & *(uint *)pdVar10 & 0x3f) == 0) {
        fVar17 = (float)((ulonglong)dVar25 >> 0x20);
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),fVar17);
        }
        else {
          dVar19 = pdVar10[1];
          in_xd2 = dVar25;
        }
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar24,0),
                                    SUB84(dVar19,0) - fVar18);
        }
        else {
          dVar19 = (dVar19 - in_dr4) - dVar24;
        }
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar10 + 4));
        }
        if (cVar28 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar17);
          fVar17 = SUB84(dVar19,0) * (float)((ulonglong)dVar19 >> 0x20);
        }
        else {
          in_dr0 = in_dr0 - dVar25;
          fVar17 = SUB84(dVar19 * dVar19,0);
        }
        dVar19 = dVar22;
        if (cVar29 == '\0') {
          dVar19 = (double)CONCAT44(SUB84(dVar24,0),fVar17);
        }
        if (cVar28 == '\0') {
          fVar17 = ((float)((ulonglong)dVar19 >> 0x20) - (float)((ulonglong)in_dr6 >> 0x20)) *
                   SUB84(in_dr0,0);
          in_dr2 = (double)CONCAT44(fVar17,SUB84(dVar19,0) - fVar17);
        }
        else {
          in_dr2 = (dVar19 - in_dr6) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar29 == '\0') {
          in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),fVar18);
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
        if ((bVar27) && (uVar2 != 0)) {
          if (cVar28 == '\0') {
            in_dr4 = (double)CONCAT44(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -(double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar7 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar18 = (float)((ulonglong)in_dr4 >> 0x20);
      if (pdVar9 < unaff_r8) {
        dVar19 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar18 < 0.0;
        }
        else {
          bVar27 = in_dr4 < dVar19;
        }
        if (bVar27) {
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar5 = _DAT_8c4c11b0;
          uVar23 = _DAT_8c4c11b8;
          if (cVar29 == '\0') {
            uVar5 = _DAT_8c4c11b4;
            uVar23 = _DAT_8c4c11bc;
          }
          uVar4 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
          uVar16 = SUB84(in_dr0,0);
          dVar20 = dVar24;
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar5);
          }
          psVar15 = psVar14 + 2;
          *(undefined4 *)(ar4_00 + 5) = uVar4;
          ar5 = (double *)(psVar14 + 1);
          uVar5 = (undefined4)((ulonglong)dVar19 >> 0x20);
          fVar18 = (float)((ulonglong)dVar20 >> 0x20);
          if (cVar28 == '\0') {
            dVar19 = (double)CONCAT44(uVar5,(float)(int)*psVar14 * fVar18);
          }
          else {
            dVar19 = (double)CONCAT44(uVar5,(float)(int)*psVar14) * dVar20;
          }
          if (cVar29 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar19,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          if (cVar28 == '\0') {
            fVar18 = (float)(int)*(short *)ar5 * fVar18;
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                            (float)(int)*(short *)ar5) * dVar20,0);
          }
          if (cVar29 == '\0') {
            *(float *)((int)ar4_00 + 0x24) = fVar18;
          }
          else {
            *(double *)((int)ar4_00 + 0x24) = in_xd2;
          }
          goto LAB_8c245bd8;
        }
        *(undefined4 *)ar4_00 = 0xf0000000;
        CacheBlockWriteBack(ar4_00);
        uVar5 = _DAT_8c4c11b0;
        uVar23 = _DAT_8c4c11b8;
        if (cVar29 == '\0') {
          uVar5 = _DAT_8c4c11b4;
          uVar23 = _DAT_8c4c11bc;
        }
        uVar4 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
        dVar20 = dVar24;
        if (cVar29 == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar5);
        }
        *(undefined4 *)(ar4_00 + 5) = uVar4;
        uVar5 = (undefined4)((ulonglong)dVar19 >> 0x20);
        fVar18 = (float)((ulonglong)dVar20 >> 0x20);
        if (cVar28 == '\0') {
          dVar19 = (double)CONCAT44(uVar5,(float)(int)*psVar14 * fVar18);
        }
        else {
          dVar19 = (double)CONCAT44(uVar5,(float)(int)*psVar14) * dVar20;
        }
        if (cVar29 == '\0') {
          *(int *)(ar4_00 + 4) = SUB84(dVar19,0);
        }
        else {
          ar4_00[4] = in_xd2;
        }
        ar5 = (double *)((int)ar4_00 + 0x24);
        if (cVar28 == '\0') {
          fVar18 = (float)(int)psVar14[1] * fVar18;
        }
        else {
          fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),(float)(int)psVar14[1]) *
                         dVar20,0);
        }
        if (cVar29 == '\0') {
          *(float *)ar5 = fVar18;
        }
        else {
          *ar5 = in_xd2;
        }
        CacheBlockWriteBack(ar4_00 + 4);
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(in_dr0,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),fVar18);
          pdVar8 = ar4_00 + 1;
        }
        else {
          in_dr0 = *ar4_00;
          in_dr2 = ar4_00[1];
          pdVar8 = ar4_00 + 2;
        }
        if (cVar29 == '\0') {
          uVar5 = *(undefined4 *)(pdVar8 + 2);
          in_dr4 = (double)CONCAT44(uVar5,SUB84(dVar20,0));
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar23);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar5;
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
        pdVar9 = unaff_r8;
        psVar15 = psVar14;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar18 < 0.0;
        }
        else {
          bVar27 = in_dr4 < in_dr2;
        }
        psVar15 = psVar14 + 2;
        if (bVar27) {
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          uVar23 = _DAT_8c4c11b0;
          if (cVar29 == '\0') {
            uVar23 = _DAT_8c4c11b4;
          }
          uVar5 = float_to_color_u8(pdVar8,ar5,ar6,ar7);
          dVar19 = dVar24;
          if (cVar29 == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar23);
          }
          *(undefined4 *)(pdVar8 + 5) = uVar5;
          uVar23 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar18 = (float)((ulonglong)dVar19 >> 0x20);
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44(uVar23,(float)(int)*psVar14 * fVar18);
          }
          else {
            dVar20 = (double)CONCAT44(uVar23,(float)(int)*psVar14) * dVar19;
          }
          if (cVar29 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar20,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          fVar17 = (float)(int)psVar14[1];
          if (cVar28 == '\0') {
            fVar17 = fVar17 * fVar18;
          }
          else {
            fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar17) * dVar19,0);
          }
          if (cVar29 == '\0') {
            *(float *)((int)pdVar8 + 0x24) = fVar17;
          }
          else {
            *(double *)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar29 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
            dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar17);
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar19 = *pdVar8;
            dVar21 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar29 == '\0') {
            uVar23 = *(undefined4 *)(pdVar8 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar23;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar21 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            dVar20 = pdVar8[2];
            unaff_r8[3] = pdVar8[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar21;
            *unaff_r8 = dVar19;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar5 = _DAT_8c4c11b0;
          uVar23 = _DAT_8c4c11b8;
          if (cVar29 == '\0') {
            uVar5 = _DAT_8c4c11b4;
            uVar23 = _DAT_8c4c11bc;
          }
          uVar4 = float_to_color_u8(ar4_00,psVar14 + 1,ar6,ar7);
          uVar16 = SUB84(dVar19,0);
          dVar20 = dVar24;
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar5);
          }
          psVar15 = psVar14 + 4;
          *(undefined4 *)(ar4_00 + 5) = uVar4;
          uVar5 = (undefined4)((ulonglong)dVar21 >> 0x20);
          fVar18 = (float)((ulonglong)dVar20 >> 0x20);
          if (cVar28 == '\0') {
            dVar19 = (double)CONCAT44(uVar5,(float)(int)psVar14[2] * fVar18);
          }
          else {
            dVar19 = (double)CONCAT44(uVar5,(float)(int)psVar14[2]) * dVar20;
          }
          if (cVar29 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar19,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          ar5 = (double *)((int)ar4_00 + 0x24);
          if (cVar28 == '\0') {
            fVar18 = (float)(int)psVar14[3] * fVar18;
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),(float)(int)psVar14[3])
                           * dVar20,0);
          }
          if (cVar29 == '\0') {
            *(float *)ar5 = fVar18;
          }
          else {
            *ar5 = in_xd2;
          }
LAB_8c245bd8:
          CacheBlockWriteBack(ar4_00 + 4);
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,uVar16);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),fVar18);
            pdVar8 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = ar4_00[1];
            pdVar8 = ar4_00 + 2;
          }
          if (cVar29 == '\0') {
            uVar5 = *(undefined4 *)(pdVar8 + 2);
            in_dr4 = (double)CONCAT44(uVar5,SUB84(dVar20,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar23);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar5;
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
        }
      }
      uVar23 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar29 == '\0') {
        in_dr4 = (double)((ulonglong)dVar25 >> 0x20);
        uVar26 = CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar25,0));
      }
      else {
        uVar26 = *(undefined8 *)((int)pdVar10 + 4);
      }
      uVar5 = 8;
      if (cVar29 == '\0') {
        uVar4 = SUB84(dVar24,0);
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)(pdVar10 + 1));
        in_xd12 = dVar22;
        in_dr6 = (double)CONCAT44(uVar4,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = pdVar10[1];
        in_dr6 = dVar22;
      }
      iVar6 = iVar6 + -1;
      dVar25 = (double)CONCAT44((int)((ulonglong)uVar26 >> 0x20),-(float)uVar26);
      pdVar8 = ar4_00;
      ar4_00 = pdVar10;
      psVar14 = psVar15;
      dVar22 = in_xd12;
    } while (iVar6 != 0);
    psVar14 = psVar15 + 4;
    if (pdVar9 < unaff_r8) {
      *(undefined4 *)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      uVar16 = _DAT_8c4c11b0;
      uVar4 = _DAT_8c4c11b8;
      if (cVar29 == '\0') {
        uVar16 = _DAT_8c4c11b4;
        uVar4 = _DAT_8c4c11bc;
      }
      uVar5 = float_to_color_u8(pdVar10,ar5,ar6,ar7);
      dVar22 = dVar24;
      if (cVar29 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar16);
      }
      *(undefined4 *)(pdVar10 + 5) = uVar5;
      ar5 = (double *)(psVar15 + 1);
      psVar14 = psVar15 + 2;
      fVar18 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar28 == '\0') {
        dVar25 = (double)CONCAT44(uVar23,(float)(int)*psVar15 * fVar18);
      }
      else {
        dVar25 = (double)CONCAT44(uVar23,(float)(int)*psVar15) * dVar22;
      }
      if (cVar29 == '\0') {
        *(int *)(pdVar10 + 4) = SUB84(dVar25,0);
      }
      else {
        pdVar10[4] = in_xd2;
      }
      if (cVar28 == '\0') {
        fVar18 = (float)(int)*(short *)ar5 * fVar18;
      }
      else {
        fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(float)(int)*(short *)ar5)
                       * dVar22,0);
      }
      if (cVar29 == '\0') {
        *(float *)((int)pdVar10 + 0x24) = fVar18;
      }
      else {
        *(double *)((int)pdVar10 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar10 + 4);
      if (cVar29 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar18);
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        in_dr2 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar29 == '\0') {
        uVar23 = *(undefined4 *)(pdVar10 + 2);
        in_dr4 = (double)CONCAT44(uVar23,SUB84(dVar22,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 0x14),uVar4);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar23;
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
    uStack_34 = uStack_34 - 1;
    if (uStack_34 == 0) {
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_3c;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_3c;
      return uVar5;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2458f6\n.set _FUN_8c2458f6, _FUN_8c2458f6_def\n");
