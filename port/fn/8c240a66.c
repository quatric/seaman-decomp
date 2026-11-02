#include "../decls.h"
undefined4 FUN_8c240a66_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *ar6_00;
  undefined4 ar7_00;
  double *unaff_r8;
  double *pdVar7;
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
  double dVar17;
  float fVar18;
  uint uVar19;
  double in_dr4;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 in_fr13;
  double dVar23;
  double in_dr14;
  double dVar24;
  double in_xd2;
  double in_xd12;
  bool bVar25;
  char cVar26;
  char cVar27;
  undefined4 in_stack_ffffffb0;
  uint uStack_4c;
  uint uStack_3c;
  int iStack_34;
  uint uStack_30;
  
  cVar27 = '\0';
  cVar26 = '\0';
  dVar23 = (double)CONCAT44(0x3b800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffb0);
  iVar3 = _DAT_8c4aa510;
  psVar14 = *(short **)(ar4 + 0x14);
  puVar11 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  uStack_3c = 0;
  iStack_34 = 0;
  do {
    uVar22 = SUB84(in_dr14,0);
    puVar12 = puVar11 + 1;
    uStack_4c = (uint)*puVar11;
    if (cVar27 == '\0') {
      uVar22 = 0x3f800000;
    }
    if ((*puVar11 & 0x8000) != 0) {
      uStack_4c = uStack_4c & 0x7fff;
      if (cVar26 == '\0') {
        uVar4 = 0xbf800000;
      }
      else {
        uVar4 = (undefined4)((ulonglong)-(double)CONCAT44(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar27 == '\0') {
        uVar22 = uVar4;
      }
    }
    iStack_34 = iStack_34 + uStack_4c;
    uStack_4c = uStack_4c - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar8 = (double *)((uint)*puVar13 * 0x40 + iVar3);
    pdVar7 = (double *)((uint)*puVar12 * 0x40 + iVar3);
    pdVar9 = unaff_r8;
    if (cVar27 == '\0') {
      dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)((int)pdVar8 + 4));
      in_dr14 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),uVar22);
      in_dr4 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),*(undefined4 *)(pdVar7 + 1));
      dVar24 = in_xd12;
    }
    else {
      in_dr4 = *(double *)((int)pdVar7 + 4);
      in_dr14 = pdVar8[1];
      dVar24 = *(double *)((int)pdVar8 + 4);
    }
    do {
      uVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)((uint)uVar2 * 0x40 + iVar3);
      if (cVar27 == '\0') {
        dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(dVar23,0));
      }
      else {
        dVar17 = pdVar10[1];
        in_xd2 = dVar24;
      }
      fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar26 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar18,
                                  SUB84(dVar17,0) - (float)((ulonglong)in_dr4 >> 0x20));
      }
      else {
        dVar17 = (dVar17 - in_dr4) - in_dr14;
      }
      if (cVar27 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
      }
      if (cVar26 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar23,0)
                                 );
        fVar16 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 - dVar23;
        fVar16 = SUB84(dVar17 * dVar17,0);
      }
      dVar17 = in_dr14;
      if (cVar27 == '\0') {
        dVar17 = (double)CONCAT44(fVar18,fVar16);
      }
      if (cVar26 == '\0') {
        fVar18 = ((float)((ulonglong)dVar17 >> 0x20) - SUB84(in_dr4,0)) * SUB84(in_dr0,0);
        dVar17 = (double)CONCAT44(fVar18,SUB84(dVar17,0) - fVar18);
      }
      else {
        dVar17 = (dVar17 - in_dr4) * in_dr0;
        dVar17 = dVar17 - dVar17;
      }
      dVar20 = in_xd2;
      if (cVar27 == '\0') {
        dVar20 = (double)CONCAT44(SUB84(dVar17,0),SUB84(in_dr4,0));
      }
      if (cVar26 == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(in_dr14,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 * in_dr14;
      }
      uVar19 = (uint)((ulonglong)dVar17 >> 0x20);
      fVar18 = (float)((ulonglong)dVar20 >> 0x20);
      if (pdVar9 < unaff_r8) {
        dVar17 = (double)((ulonglong)uVar19 << 0x20);
        if (cVar26 == '\0') {
          bVar25 = fVar18 < 0.0;
        }
        else {
          bVar25 = dVar20 < dVar17;
        }
        if (bVar25) {
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)((int)pdVar8 + 0x3c) != ar5) {
            *(int *)((int)pdVar8 + 0x3c) = ar5;
            puVar5 = &DAT_8c4c2620;
            uVar4 = 0;
            pdVar6 = pdVar8 + 6;
            pdVar7 = pdVar8 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar6,0);
            uVar22 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4);
            *(undefined4 *)(pdVar8 + 5) = uVar22;
            if (cVar27 == '\0') {
              dVar20 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              dVar20 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar22 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar22;
          }
          uVar22 = SUB84(in_dr0,0);
          dVar21 = dVar23;
          if (cVar27 == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar20,0));
          }
          uVar4 = (undefined4)((ulonglong)dVar17 >> 0x20);
          if (cVar26 == '\0') {
            dVar17 = (double)CONCAT44(uVar4,(float)(int)*psVar14 *
                                            (float)((ulonglong)dVar21 >> 0x20));
          }
          else {
            dVar17 = (double)CONCAT44(uVar4,(float)(int)*psVar14) * dVar21;
          }
          if (cVar27 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar17,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          sVar1 = psVar14[1];
          goto LAB_8c240e08;
        }
        *(undefined4 *)pdVar8 = 0xf0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(int *)((int)pdVar8 + 0x3c) != ar5) {
          *(int *)((int)pdVar8 + 0x3c) = ar5;
          puVar5 = &DAT_8c4c2620;
          uVar4 = 0;
          pdVar6 = pdVar8 + 6;
          pdVar7 = pdVar8 + 2;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar6,0);
          uVar22 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4);
          *(undefined4 *)(pdVar8 + 5) = uVar22;
          if (cVar27 == '\0') {
            dVar20 = (double)(ulonglong)_DAT_8c4c2634;
          }
          else {
            dVar20 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
          }
          uVar22 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4);
          *(undefined4 *)((int)pdVar8 + 0x2c) = uVar22;
        }
        dVar21 = dVar23;
        if (cVar27 == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar20,0));
        }
        uVar22 = (undefined4)((ulonglong)dVar17 >> 0x20);
        fVar18 = (float)((ulonglong)dVar21 >> 0x20);
        if (cVar26 == '\0') {
          dVar17 = (double)CONCAT44(uVar22,(float)(int)*psVar14 * fVar18);
        }
        else {
          dVar17 = (double)CONCAT44(uVar22,(float)(int)*psVar14) * dVar21;
        }
        if (cVar27 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar17,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar26 == '\0') {
          fVar18 = (float)(int)psVar14[1] * fVar18;
        }
        else {
          fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)psVar14[1]) *
                         dVar21,0);
        }
        if (cVar27 == '\0') {
          *(float *)((int)pdVar8 + 0x24) = fVar18;
        }
        else {
          *(double *)((int)pdVar8 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar8 + 4);
        if (cVar27 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
          dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar18);
          pdVar7 = pdVar8 + 1;
        }
        else {
          in_dr0 = *pdVar8;
          dVar17 = pdVar8[1];
          pdVar7 = pdVar8 + 2;
        }
        if (cVar27 == '\0') {
          uVar22 = *(undefined4 *)(pdVar7 + 2);
          dVar20 = (double)CONCAT44(uVar22,SUB84(dVar21,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar22;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar20 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar20;
          unaff_r8[1] = dVar17;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar9);
        pdVar9 = unaff_r8;
        psVar15 = psVar14;
      }
      else {
        dVar17 = (double)((ulonglong)uVar19 << 0x20);
        if (cVar26 == '\0') {
          bVar25 = fVar18 < 0.0;
        }
        else {
          bVar25 = dVar20 < dVar17;
        }
        psVar15 = psVar14 + 2;
        if (bVar25) {
          *(undefined4 *)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          if (*(int *)((int)pdVar7 + 0x3c) != ar5) {
            *(int *)((int)pdVar7 + 0x3c) = ar5;
            puVar5 = &DAT_8c4c2620;
            uVar4 = 0;
            ar6_00 = pdVar7 + 6;
            pdVar6 = pdVar7 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar6,ar6_00,0);
            uVar22 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar4);
            *(undefined4 *)(pdVar7 + 5) = uVar22;
            if (cVar27 == '\0') {
              dVar20 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              dVar20 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar22 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar4);
            *(undefined4 *)((int)pdVar7 + 0x2c) = uVar22;
          }
          dVar21 = dVar23;
          if (cVar27 == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(dVar20,0));
          }
          uVar22 = (undefined4)((ulonglong)dVar17 >> 0x20);
          fVar18 = (float)((ulonglong)dVar21 >> 0x20);
          if (cVar26 == '\0') {
            dVar17 = (double)CONCAT44(uVar22,(float)(int)*psVar14 * fVar18);
          }
          else {
            dVar17 = (double)CONCAT44(uVar22,(float)(int)*psVar14) * dVar21;
          }
          if (cVar27 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar17,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar26 == '\0') {
            fVar18 = (float)(int)psVar14[1] * fVar18;
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)psVar14[1])
                           * dVar21,0);
          }
          if (cVar27 == '\0') {
            *(float *)((int)pdVar7 + 0x24) = fVar18;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar27 == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr0,0));
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar18);
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar17 = *pdVar7;
            dVar20 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar27 == '\0') {
            uVar22 = *(undefined4 *)(pdVar7 + 2);
            dVar21 = (double)CONCAT44(uVar22,SUB84(dVar21,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar22;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar17 >> 0x20);
          }
          else {
            dVar21 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar21;
            unaff_r8[1] = dVar20;
            *unaff_r8 = dVar17;
          }
          uVar19 = SUB84(dVar21,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)((int)pdVar8 + 0x3c) != ar5) {
            *(int *)((int)pdVar8 + 0x3c) = ar5;
            puVar5 = &DAT_8c4c2620;
            uVar4 = 0;
            pdVar6 = pdVar8 + 6;
            pdVar7 = pdVar8 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar6,0);
            uVar22 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4);
            *(undefined4 *)(pdVar8 + 5) = uVar22;
            uVar19 = _DAT_8c4c2630;
            if (cVar27 == '\0') {
              uVar19 = _DAT_8c4c2634;
            }
            uVar22 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar4);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar22;
          }
          uVar22 = SUB84(dVar17,0);
          dVar21 = dVar23;
          if (cVar27 == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),uVar19);
          }
          uVar4 = (undefined4)((ulonglong)dVar20 >> 0x20);
          fVar18 = (float)(int)psVar14[2];
          if (cVar26 == '\0') {
            dVar17 = (double)CONCAT44(uVar4,fVar18 * (float)((ulonglong)dVar21 >> 0x20));
          }
          else {
            dVar17 = (double)CONCAT44(uVar4,fVar18) * dVar21;
          }
          if (cVar27 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar17,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          sVar1 = psVar14[3];
          psVar14 = psVar14 + 2;
LAB_8c240e08:
          if (cVar26 == '\0') {
            fVar18 = (float)(int)sVar1 * (float)((ulonglong)dVar21 >> 0x20);
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)sVar1) *
                           dVar21,0);
          }
          if (cVar27 == '\0') {
            *(float *)((int)pdVar8 + 0x24) = fVar18;
          }
          else {
            *(double *)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar27 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar22);
            dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar18);
            pdVar7 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            dVar17 = pdVar8[1];
            pdVar7 = pdVar8 + 2;
          }
          if (cVar27 == '\0') {
            uVar22 = *(undefined4 *)(pdVar7 + 2);
            dVar20 = (double)CONCAT44(uVar22,SUB84(dVar21,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar22;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar20 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar17;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          psVar15 = psVar14 + 2;
        }
      }
      uVar22 = (undefined4)((ulonglong)dVar17 >> 0x20);
      if (cVar27 == '\0') {
        uVar4 = SUB84(dVar23,0);
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
        in_xd12 = dVar24;
        in_dr4 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar10 + 4);
        in_dr4 = dVar24;
      }
      uVar4 = 8;
      if (cVar27 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)((ulonglong)in_dr14 >> 0x20)
                                 );
        dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar24 = pdVar10[1];
      }
      uStack_4c = uStack_4c + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),-SUB84(dVar24,0));
      pdVar7 = pdVar8;
      pdVar8 = pdVar10;
      psVar14 = psVar15;
      dVar24 = in_xd12;
    } while (uStack_4c != 0);
    psVar14 = psVar15 + 4;
    if (pdVar9 < unaff_r8) {
      *(undefined4 *)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(int *)((int)pdVar10 + 0x3c) != ar5) {
        *(int *)((int)pdVar10 + 0x3c) = ar5;
        puVar5 = &DAT_8c4c2620;
        ar7_00 = 0;
        pdVar8 = pdVar10 + 6;
        pdVar7 = pdVar10 + 2;
        FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar8,0);
        uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar8,ar7_00);
        *(undefined4 *)(pdVar10 + 5) = uVar4;
        if (cVar27 == '\0') {
          in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
        }
        else {
          in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
        }
        uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar8,ar7_00);
        *(undefined4 *)((int)pdVar10 + 0x2c) = uVar4;
      }
      dVar24 = dVar23;
      if (cVar27 == '\0') {
        dVar24 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),SUB84(in_dr4,0));
      }
      psVar14 = psVar15 + 2;
      fVar18 = (float)((ulonglong)dVar24 >> 0x20);
      if (cVar26 == '\0') {
        dVar17 = (double)CONCAT44(uVar22,(float)(int)*psVar15 * fVar18);
      }
      else {
        dVar17 = (double)CONCAT44(uVar22,(float)(int)*psVar15) * dVar24;
      }
      if (cVar27 == '\0') {
        *(int *)(pdVar10 + 4) = SUB84(dVar17,0);
      }
      else {
        pdVar10[4] = in_xd2;
      }
      if (cVar26 == '\0') {
        fVar18 = (float)(int)psVar15[1] * fVar18;
      }
      else {
        fVar18 = SUB84((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)(int)psVar15[1]) *
                       dVar24,0);
      }
      if (cVar27 == '\0') {
        *(float *)((int)pdVar10 + 0x24) = fVar18;
      }
      else {
        *(double *)((int)pdVar10 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar10 + 4);
      if (cVar27 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar18);
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        dVar17 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar27 == '\0') {
        uVar22 = *(undefined4 *)(pdVar10 + 2);
        in_dr4 = (double)CONCAT44(uVar22,SUB84(dVar24,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar22;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar10[2];
        unaff_r8[3] = pdVar10[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar17;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar9);
    }
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + (uStack_3c >> 5);
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_34;
      return uVar4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c240a66\n.set _FUN_8c240a66, _FUN_8c240a66_def\n");
