#include "../decls.h"
undefined4 FUN_8c2432b6_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

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
  short *psVar14;
  short *psVar15;
  double in_dr0;
  float fVar16;
  float fVar17;
  double in_dr2;
  double dVar18;
  float fVar21;
  uint uVar22;
  double dVar19;
  double dVar20;
  uint uVar23;
  double in_dr4;
  double dVar24;
  undefined4 uVar25;
  double in_dr6;
  undefined4 in_fr13;
  double dVar26;
  double dVar27;
  double dVar28;
  double in_xd2;
  double in_xd12;
  bool bVar29;
  char cVar30;
  char cVar31;
  undefined4 in_stack_ffffffb0;
  uint uVar32;
  uint uStack_48;
  int iStack_3c;
  uint uStack_30;
  
  cVar31 = '\0';
  cVar30 = '\0';
  dVar26 = (double)CONCAT44(0x3b800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffb0);
  iVar2 = _DAT_8c4aa510;
  if ((_DAT_8c4ab308 & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar11 = *(ushort **)(ar4 + 4);
  psVar14 = *(short **)(ar4 + 0x14);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  iStack_3c = 0;
  do {
    puVar12 = puVar11 + 1;
    uStack_48 = (uint)*puVar11;
    uVar25 = 0x3f800000;
    if ((*puVar11 & 0x8000) != 0) {
      uStack_48 = uStack_48 & 0x7fff;
      uVar25 = 0xbf800000;
    }
    iStack_3c = iStack_3c + uStack_48;
    uStack_48 = uStack_48 - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar9 = (double *)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = (double *)((uint)*puVar12 * 0x40 + iVar2);
    pdVar7 = unaff_r8;
    if (cVar31 == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)((int)pdVar9 + 4));
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(in_dr6,0));
      dVar27 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),uVar25);
      in_dr4 = (double)(ulonglong)*(uint *)(pdVar8 + 1);
      dVar28 = in_xd12;
    }
    else {
      in_dr6 = *(double *)((int)pdVar8 + 4);
      dVar27 = pdVar9[1];
      dVar28 = *(double *)((int)pdVar9 + 4);
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)((uint)uVar1 * 0x40 + iVar2);
      uVar32 = 0;
      fVar17 = SUB84(in_dr4,0);
      in_dr4 = (double)CONCAT44(0x3f800000,fVar17);
      if ((*(uint *)pdVar8 & *(uint *)pdVar9 & *(uint *)pdVar10 & 0x3f) == 0) {
        if (cVar31 == '\0') {
          dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(dVar26,0));
        }
        else {
          dVar18 = pdVar10[1];
          in_xd2 = dVar28;
        }
        fVar21 = (float)((ulonglong)dVar27 >> 0x20);
        if (cVar30 == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) - fVar21,
                                    SUB84(dVar18,0) - (float)((ulonglong)in_dr6 >> 0x20));
        }
        else {
          dVar18 = (dVar18 - in_dr6) - dVar27;
        }
        if (cVar31 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar10 + 4));
        }
        if (cVar30 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    SUB84(in_dr0,0) - SUB84(dVar26,0));
          fVar16 = SUB84(dVar18,0) * (float)((ulonglong)dVar18 >> 0x20);
        }
        else {
          in_dr0 = in_dr0 - dVar26;
          fVar16 = SUB84(dVar18 * dVar18,0);
        }
        dVar18 = dVar27;
        if (cVar31 == '\0') {
          dVar18 = (double)CONCAT44(fVar21,fVar16);
        }
        if (cVar30 == '\0') {
          fVar21 = ((float)((ulonglong)dVar18 >> 0x20) - fVar17) * SUB84(in_dr0,0);
          in_dr2 = (double)CONCAT44(fVar21,SUB84(dVar18,0) - fVar21);
        }
        else {
          in_dr2 = (dVar18 - in_dr4) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar31 == '\0') {
          in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),fVar17);
        }
        if (cVar30 == '\0') {
          in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(dVar27,0),
                                    SUB84(in_dr4,0));
        }
        else {
          in_dr4 = in_dr4 * dVar27;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar30 == '\0') {
          bVar29 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
        }
        else {
          bVar29 = in_dr2 < in_dr4;
        }
        if ((bVar29) && (uVar4 != 0)) {
          uVar32 = uVar4;
          if (cVar30 == '\0') {
            in_dr4 = (double)CONCAT44(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -(double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar22 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar17 = (float)((ulonglong)in_dr4 >> 0x20);
      if (pdVar7 < unaff_r8) {
        dVar18 = (double)((ulonglong)uVar22 << 0x20);
        if (cVar30 == '\0') {
          bVar29 = fVar17 < 0.0;
        }
        else {
          bVar29 = in_dr4 < dVar18;
        }
        if (bVar29) {
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar22 = uVar32;
          if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | uVar32)) {
            *(uint *)((int)pdVar9 + 0x3c) = ar5 | uVar32;
            pdVar6 = pdVar9 + 6;
            puVar5 = &DAT_8c4c2620;
            pdVar8 = pdVar9 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar6,uVar32);
            uVar25 = float_to_color_u8(puVar5,pdVar8,pdVar6,uVar32);
            *(undefined4 *)(pdVar9 + 5) = uVar25;
            if (cVar31 == '\0') {
              in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
              in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
              in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar25 = float_to_color_u8(puVar5,pdVar8,pdVar6,uVar32);
            *(undefined4 *)((int)pdVar9 + 0x2c) = uVar25;
          }
          uVar32 = SUB84(in_dr6,0);
          uVar25 = SUB84(in_dr0,0);
          dVar19 = dVar26;
          if (cVar31 == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(in_dr4,0));
          }
          psVar15 = psVar14 + 2;
          uVar3 = (undefined4)((ulonglong)dVar18 >> 0x20);
          fVar17 = (float)((ulonglong)dVar19 >> 0x20);
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(uVar3,(float)(int)*psVar14 * fVar17);
          }
          else {
            dVar18 = (double)CONCAT44(uVar3,(float)(int)*psVar14) * dVar19;
          }
          if (cVar31 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar18,0);
          }
          else {
            pdVar9[4] = in_xd2;
          }
          if (cVar30 == '\0') {
            fVar17 = (float)(int)psVar14[1] * fVar17;
          }
          else {
            fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),(float)(int)psVar14[1])
                           * dVar19,0);
          }
          if (cVar31 == '\0') {
            *(float *)((int)pdVar9 + 0x24) = fVar17;
          }
          else {
            *(double *)((int)pdVar9 + 0x24) = in_xd2;
          }
          goto LAB_8c2436aa;
        }
        *(undefined4 *)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        uVar22 = uVar32;
        if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | uVar32)) {
          *(uint *)((int)pdVar9 + 0x3c) = ar5 | uVar32;
          pdVar7 = pdVar9 + 6;
          puVar5 = &DAT_8c4c2620;
          pdVar8 = pdVar9 + 2;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar7,uVar32);
          uVar25 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32);
          *(undefined4 *)(pdVar9 + 5) = uVar25;
          if (cVar31 == '\0') {
            in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
            in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
          }
          else {
            in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
            in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
          }
          uVar25 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32);
          *(undefined4 *)((int)pdVar9 + 0x2c) = uVar25;
        }
        dVar19 = dVar26;
        if (cVar31 == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(in_dr4,0));
        }
        uVar25 = (undefined4)((ulonglong)dVar18 >> 0x20);
        fVar17 = (float)((ulonglong)dVar19 >> 0x20);
        if (cVar30 == '\0') {
          dVar18 = (double)CONCAT44(uVar25,(float)(int)*psVar14 * fVar17);
        }
        else {
          dVar18 = (double)CONCAT44(uVar25,(float)(int)*psVar14) * dVar19;
        }
        if (cVar31 == '\0') {
          *(int *)(pdVar9 + 4) = SUB84(dVar18,0);
        }
        else {
          pdVar9[4] = in_xd2;
        }
        if (cVar30 == '\0') {
          fVar17 = (float)(int)psVar14[1] * fVar17;
        }
        else {
          fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),(float)(int)psVar14[1]) *
                         dVar19,0);
        }
        if (cVar31 == '\0') {
          *(float *)((int)pdVar9 + 0x24) = fVar17;
        }
        else {
          *(double *)((int)pdVar9 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar9 + 4);
        if (cVar31 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),fVar17);
          pdVar8 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar8 = pdVar9 + 2;
        }
        if (cVar31 == '\0') {
          uVar25 = *(undefined4 *)(pdVar8 + 2);
          in_dr4 = (double)CONCAT44(uVar25,SUB84(dVar19,0));
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar25;
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
        psVar15 = psVar14;
        uVar32 = uVar22;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar22 << 0x20);
        if (cVar30 == '\0') {
          bVar29 = fVar17 < 0.0;
        }
        else {
          bVar29 = in_dr4 < in_dr2;
        }
        psVar15 = psVar14 + 2;
        if (bVar29) {
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          ar7_00 = uVar32;
          if (*(uint *)((int)pdVar8 + 0x3c) != (ar5 | uVar32)) {
            *(uint *)((int)pdVar8 + 0x3c) = ar5 | uVar32;
            ar6_00 = pdVar8 + 6;
            puVar5 = &DAT_8c4c2620;
            pdVar6 = pdVar8 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar6,ar6_00,uVar32);
            uVar25 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar32);
            *(undefined4 *)(pdVar8 + 5) = uVar25;
            if (cVar31 == '\0') {
              in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
              in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
              in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar25 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar32);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar25;
          }
          dVar18 = dVar26;
          if (cVar31 == '\0') {
            dVar18 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(in_dr4,0));
          }
          uVar25 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar17 = (float)((ulonglong)dVar18 >> 0x20);
          if (cVar30 == '\0') {
            dVar19 = (double)CONCAT44(uVar25,(float)(int)*psVar14 * fVar17);
          }
          else {
            dVar19 = (double)CONCAT44(uVar25,(float)(int)*psVar14) * dVar18;
          }
          if (cVar31 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar19,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          if (cVar30 == '\0') {
            fVar17 = (float)(int)psVar14[1] * fVar17;
          }
          else {
            fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),(float)(int)psVar14[1])
                           * dVar18,0);
          }
          if (cVar31 == '\0') {
            *(float *)((int)pdVar8 + 0x24) = fVar17;
          }
          else {
            *(double *)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar31 == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar17);
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar19 = *pdVar8;
            dVar20 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar31 == '\0') {
            uVar25 = *(undefined4 *)(pdVar8 + 2);
            dVar24 = (double)CONCAT44(uVar25,SUB84(dVar18,0));
            dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar25;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            dVar24 = pdVar8[2];
            dVar18 = pdVar8[3];
            unaff_r8[3] = dVar18;
            unaff_r8[2] = dVar24;
            unaff_r8[1] = dVar20;
            *unaff_r8 = dVar19;
          }
          uVar23 = SUB84(dVar24,0);
          uVar32 = SUB84(dVar18,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar22 = ar7_00;
          if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)((int)pdVar9 + 0x3c) = ar5 | ar7_00;
            pdVar6 = pdVar9 + 6;
            puVar5 = &DAT_8c4c2620;
            pdVar8 = pdVar9 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar6,ar7_00);
            uVar25 = float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00);
            *(undefined4 *)(pdVar9 + 5) = uVar25;
            uVar32 = _DAT_8c4c2638;
            uVar23 = _DAT_8c4c2630;
            if (cVar31 == '\0') {
              uVar32 = _DAT_8c4c263c;
              uVar23 = _DAT_8c4c2634;
            }
            uVar25 = float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00);
            *(undefined4 *)((int)pdVar9 + 0x2c) = uVar25;
          }
          uVar25 = SUB84(dVar19,0);
          dVar19 = dVar26;
          if (cVar31 == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uVar23);
          }
          psVar15 = psVar14 + 4;
          uVar3 = (undefined4)((ulonglong)dVar20 >> 0x20);
          fVar17 = (float)((ulonglong)dVar19 >> 0x20);
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(uVar3,(float)(int)psVar14[2] * fVar17);
          }
          else {
            dVar18 = (double)CONCAT44(uVar3,(float)(int)psVar14[2]) * dVar19;
          }
          if (cVar31 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar18,0);
          }
          else {
            pdVar9[4] = in_xd2;
          }
          if (cVar30 == '\0') {
            fVar17 = (float)(int)psVar14[3] * fVar17;
          }
          else {
            fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),(float)(int)psVar14[3])
                           * dVar19,0);
          }
          if (cVar31 == '\0') {
            *(float *)((int)pdVar9 + 0x24) = fVar17;
          }
          else {
            *(double *)((int)pdVar9 + 0x24) = in_xd2;
          }
LAB_8c2436aa:
          CacheBlockWriteBack(pdVar9 + 4);
          if (cVar31 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,uVar25);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),fVar17);
            pdVar8 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            in_dr2 = pdVar9[1];
            pdVar8 = pdVar9 + 2;
          }
          if (cVar31 == '\0') {
            uVar25 = *(undefined4 *)(pdVar8 + 2);
            in_dr4 = (double)CONCAT44(uVar25,SUB84(dVar19,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar32);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar25;
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
          uVar32 = uVar22;
        }
      }
      uVar25 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar31 == '\0') {
        uVar3 = SUB84(dVar26,0);
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
        in_xd12 = dVar28;
        in_dr6 = (double)CONCAT44(uVar3,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar10 + 4);
        in_dr6 = dVar28;
      }
      uVar3 = 8;
      if (cVar31 == '\0') {
        in_dr4 = (double)((ulonglong)dVar27 >> 0x20);
        uVar22 = (uint)((ulonglong)dVar27 >> 0x20);
        dVar28 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(dVar27,0));
      }
      else {
        uVar22 = SUB84(in_dr4,0);
        dVar28 = pdVar10[1];
      }
      uStack_48 = uStack_48 + -1;
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),-SUB84(dVar28,0));
      pdVar8 = pdVar9;
      pdVar9 = pdVar10;
      psVar14 = psVar15;
      dVar28 = in_xd12;
    } while (uStack_48 != 0);
    psVar14 = psVar15 + 4;
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | uVar32)) {
        *(uint *)((int)pdVar10 + 0x3c) = ar5 | uVar32;
        pdVar7 = pdVar10 + 6;
        puVar5 = &DAT_8c4c2620;
        pdVar8 = pdVar10 + 2;
        FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar7,uVar32);
        uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32);
        *(undefined4 *)(pdVar10 + 5) = uVar3;
        if (cVar31 == '\0') {
          in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
          uVar22 = _DAT_8c4c2634;
        }
        else {
          in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
          uVar22 = _DAT_8c4c2630;
        }
        uVar3 = float_to_color_u8(puVar5,pdVar8,pdVar7,uVar32);
        *(undefined4 *)((int)pdVar10 + 0x2c) = uVar3;
      }
      dVar28 = dVar26;
      if (cVar31 == '\0') {
        dVar28 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uVar22);
      }
      psVar14 = psVar15 + 2;
      fVar17 = (float)((ulonglong)dVar28 >> 0x20);
      if (cVar30 == '\0') {
        dVar27 = (double)CONCAT44(uVar25,(float)(int)*psVar15 * fVar17);
      }
      else {
        dVar27 = (double)CONCAT44(uVar25,(float)(int)*psVar15) * dVar28;
      }
      if (cVar31 == '\0') {
        *(int *)(pdVar10 + 4) = SUB84(dVar27,0);
      }
      else {
        pdVar10[4] = in_xd2;
      }
      if (cVar30 == '\0') {
        fVar17 = (float)(int)psVar15[1] * fVar17;
      }
      else {
        fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),(float)(int)psVar15[1]) *
                       dVar28,0);
      }
      if (cVar31 == '\0') {
        *(float *)((int)pdVar10 + 0x24) = fVar17;
      }
      else {
        *(double *)((int)pdVar10 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar10 + 4);
      if (cVar31 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar17);
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        in_dr2 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar31 == '\0') {
        uVar25 = *(undefined4 *)(pdVar10 + 2);
        in_dr4 = (double)CONCAT44(uVar25,SUB84(dVar28,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar25;
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
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_3c;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_3c;
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2432b6\n.set _FUN_8c2432b6, _FUN_8c2432b6_def\n");
