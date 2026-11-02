#include "../decls.h"
undefined4 FUN_8c241722_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *ar6_00;
  double *unaff_r8;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  double in_dr0;
  float fVar14;
  double dVar15;
  float fVar18;
  uint uVar19;
  double dVar16;
  double dVar17;
  double in_dr4;
  double dVar20;
  undefined4 in_fr13;
  double dVar21;
  double in_dr14;
  double in_xd2;
  double in_xd12;
  bool bVar22;
  char cVar23;
  char cVar24;
  undefined4 in_stack_ffffffb4;
  uint uStack_48;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  
  cVar24 = '\0';
  cVar23 = '\0';
  dVar21 = (double)CONCAT44(0x3f000000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffb4);
  iVar2 = _DAT_8c4aa510;
  puVar11 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  uStack_38 = 0;
  iStack_34 = 0;
  do {
    uVar4 = SUB84(in_dr14,0);
    puVar12 = puVar11 + 1;
    uStack_48 = (uint)*puVar11;
    if (cVar24 == '\0') {
      uVar4 = 0x3f800000;
    }
    if ((*puVar11 & 0x8000) != 0) {
      uStack_48 = uStack_48 & 0x7fff;
      if (cVar23 == '\0') {
        uVar3 = 0xbf800000;
      }
      else {
        uVar3 = (undefined4)((ulonglong)-(double)CONCAT44(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar24 == '\0') {
        uVar4 = uVar3;
      }
    }
    iStack_34 = iStack_34 + uStack_48;
    uStack_48 = uStack_48 - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar8 = (double *)((uint)*puVar13 * 0x40 + iVar2);
    pdVar7 = (double *)((uint)*puVar12 * 0x40 + iVar2);
    pdVar9 = unaff_r8;
    if (cVar24 == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)pdVar8 + 4));
      in_dr14 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),uVar4);
      in_dr4 = *(double *)((int)pdVar7 + 4);
    }
    else {
      in_xd12 = *(double *)((int)pdVar8 + 4);
      in_dr14 = pdVar8[1];
      in_dr4 = pdVar7[1];
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)((uint)uVar1 * 0x40 + iVar2);
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(dVar21,0));
      }
      else {
        dVar15 = pdVar10[1];
        in_xd2 = in_xd12;
      }
      if (cVar23 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) - SUB84(in_dr4,0)
                                 );
      }
      else {
        dVar15 = dVar15 - in_dr4;
      }
      fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar23 == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - fVar18,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 - in_dr14;
      }
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
      }
      if (cVar23 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar21,0)
                                 );
        fVar14 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 - dVar21;
        fVar14 = SUB84(dVar15 * dVar15,0);
      }
      dVar15 = in_dr14;
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44(fVar18,fVar14);
      }
      if (cVar23 == '\0') {
        fVar18 = ((float)((ulonglong)dVar15 >> 0x20) - (float)((ulonglong)in_dr4 >> 0x20)) *
                 SUB84(in_dr0,0);
        dVar15 = (double)CONCAT44(fVar18,SUB84(dVar15,0) - fVar18);
      }
      else {
        dVar15 = (dVar15 - in_dr4) * in_dr0;
        dVar15 = dVar15 - dVar15;
      }
      dVar20 = in_xd2;
      if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44(SUB84(dVar15,0),SUB84(in_dr4,0));
      }
      if (cVar23 == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(in_dr14,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 * in_dr14;
      }
      uVar19 = (uint)((ulonglong)dVar15 >> 0x20);
      fVar18 = (float)((ulonglong)dVar20 >> 0x20);
      if (pdVar9 < unaff_r8) {
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar20 < (double)((ulonglong)uVar19 << 0x20);
        }
        if (bVar22) {
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)((int)pdVar8 + 0x3c) != ar5) {
            pdVar7 = pdVar8 + 2;
            *(int *)((int)pdVar8 + 0x3c) = ar5;
            uVar3 = 0;
            pdVar6 = pdVar8 + 6;
            puVar5 = &DAT_8c4c2620;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar6,0);
            uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3);
            *(undefined4 *)(pdVar8 + 5) = uVar4;
            if (cVar24 == '\0') {
              dVar20 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              dVar20 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar4;
          }
          uVar4 = (undefined4)((ulonglong)dVar21 >> 0x20);
          if (cVar24 == '\0') {
            pdVar7 = (double *)((int)pdVar8 + 0x34);
            dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar4);
            dVar17 = (double)CONCAT44(uVar4,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar8[6];
            pdVar7 = pdVar8 + 7;
            dVar17 = dVar21;
            in_xd2 = dVar21;
          }
          if (cVar23 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar17 >> 0x20) *
                                    (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
          }
          if (cVar24 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar15,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar4);
            dVar15 = (double)CONCAT44(uVar4,SUB84(dVar17,0));
            dVar20 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
          }
          else {
            pdVar8[4] = in_xd2;
            dVar16 = *pdVar7;
            in_xd2 = dVar21;
            dVar15 = dVar21;
            dVar20 = dVar21;
          }
          uVar4 = SUB84(dVar20,0);
          pdVar7 = (double *)((int)pdVar8 + 0x24);
          if (cVar23 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          uVar3 = SUB84(dVar16,0);
          if (cVar24 == '\0') {
            *(undefined4 *)pdVar7 = uVar3;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
          goto LAB_8c241ab6;
        }
        *(undefined4 *)pdVar8 = 0xf0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(int *)((int)pdVar8 + 0x3c) != ar5) {
          pdVar7 = pdVar8 + 2;
          *(int *)((int)pdVar8 + 0x3c) = ar5;
          uVar3 = 0;
          pdVar6 = pdVar8 + 6;
          puVar5 = &DAT_8c4c2620;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar6,0);
          uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3);
          *(undefined4 *)(pdVar8 + 5) = uVar4;
          if (cVar24 == '\0') {
            dVar20 = (double)(ulonglong)_DAT_8c4c2634;
          }
          else {
            dVar20 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
          }
          uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3);
          *(undefined4 *)((int)pdVar8 + 0x2c) = uVar4;
        }
        uVar4 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (cVar24 == '\0') {
          pdVar7 = (double *)((int)pdVar8 + 0x34);
          dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar4);
          dVar17 = (double)CONCAT44(uVar4,SUB84(in_dr0,0));
        }
        else {
          dVar15 = pdVar8[6];
          pdVar7 = pdVar8 + 7;
          dVar17 = dVar21;
          in_xd2 = dVar21;
        }
        if (cVar23 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar17 >> 0x20) *
                                  (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
        }
        if (cVar24 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar15,0);
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar4);
          dVar15 = (double)CONCAT44(uVar4,SUB84(dVar17,0));
          dVar20 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
        }
        else {
          pdVar8[4] = in_xd2;
          dVar16 = *pdVar7;
          in_xd2 = dVar21;
          dVar15 = dVar21;
          dVar20 = dVar21;
        }
        pdVar7 = (double *)((int)pdVar8 + 0x24);
        if (cVar23 == '\0') {
          dVar16 = (double)(ulonglong)
                           (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                  (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
        }
        if (cVar24 == '\0') {
          *(int *)pdVar7 = SUB84(dVar16,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar24 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar15,0));
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar16,0));
          pdVar7 = pdVar8 + 1;
        }
        else {
          in_dr0 = *pdVar8;
          dVar15 = pdVar8[1];
          pdVar7 = pdVar8 + 2;
        }
        if (cVar24 == '\0') {
          uVar4 = *(undefined4 *)(pdVar7 + 2);
          dVar20 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar4;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar15 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar20 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar20;
          unaff_r8[1] = dVar15;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        uStack_38 = (int)unaff_r8 + uStack_38 + (0x20 - (int)pdVar9);
        pdVar9 = unaff_r8;
      }
      else {
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar20 < (double)((ulonglong)uVar19 << 0x20);
        }
        if (bVar22) {
          *(undefined4 *)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          if (*(int *)((int)pdVar7 + 0x3c) != ar5) {
            pdVar6 = pdVar7 + 2;
            *(int *)((int)pdVar7 + 0x3c) = ar5;
            uVar3 = 0;
            ar6_00 = pdVar7 + 6;
            puVar5 = &DAT_8c4c2620;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar6,ar6_00,0);
            uVar4 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar3);
            *(undefined4 *)(pdVar7 + 5) = uVar4;
            if (cVar24 == '\0') {
              dVar20 = (double)(ulonglong)_DAT_8c4c2634;
            }
            else {
              dVar20 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
            }
            uVar4 = float_to_color_u8(puVar5,pdVar6,ar6_00,uVar3);
            *(undefined4 *)((int)pdVar7 + 0x2c) = uVar4;
          }
          uVar4 = (undefined4)((ulonglong)dVar21 >> 0x20);
          if (cVar24 == '\0') {
            pdVar6 = (double *)((int)pdVar7 + 0x34);
            dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar4);
            dVar17 = (double)CONCAT44(uVar4,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar7[6];
            pdVar6 = pdVar7 + 7;
            dVar17 = dVar21;
            in_xd2 = dVar21;
          }
          if (cVar23 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar17 >> 0x20) *
                                    (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
          }
          if (cVar24 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar15,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar4);
            dVar15 = (double)CONCAT44(uVar4,SUB84(dVar17,0));
            dVar20 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
          }
          else {
            pdVar7[4] = in_xd2;
            dVar16 = *pdVar6;
            in_xd2 = dVar21;
            dVar15 = dVar21;
            dVar20 = dVar21;
          }
          pdVar6 = (double *)((int)pdVar7 + 0x24);
          if (cVar23 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0));
          }
          if (cVar24 == '\0') {
            *(int *)pdVar6 = SUB84(dVar16,0);
          }
          else {
            *pdVar6 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6);
          if (cVar24 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar15,0));
            dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(dVar16,0));
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar15 = *pdVar7;
            dVar17 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar24 == '\0') {
            uVar4 = *(undefined4 *)(pdVar7 + 2);
            dVar20 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar4;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar15 >> 0x20);
          }
          else {
            dVar20 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar17;
            *unaff_r8 = dVar15;
          }
          uVar19 = SUB84(dVar20,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)((int)pdVar8 + 0x3c) != ar5) {
            pdVar7 = pdVar8 + 2;
            *(int *)((int)pdVar8 + 0x3c) = ar5;
            uVar3 = 0;
            pdVar6 = pdVar8 + 6;
            puVar5 = &DAT_8c4c2620;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar6,0);
            uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3);
            *(undefined4 *)(pdVar8 + 5) = uVar4;
            uVar19 = _DAT_8c4c2630;
            if (cVar24 == '\0') {
              uVar19 = _DAT_8c4c2634;
            }
            uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar4;
          }
          uVar4 = (undefined4)((ulonglong)dVar21 >> 0x20);
          if (cVar24 == '\0') {
            pdVar7 = (double *)((int)pdVar8 + 0x34);
            dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar4);
            dVar15 = (double)CONCAT44(uVar4,SUB84(dVar15,0));
          }
          else {
            dVar20 = pdVar8[6];
            pdVar7 = pdVar8 + 7;
            dVar15 = dVar21;
            in_xd2 = dVar21;
          }
          if (cVar23 == '\0') {
            dVar20 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0));
          }
          if (cVar24 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar20,0);
            dVar17 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar4);
            dVar15 = (double)CONCAT44(uVar4,SUB84(dVar15,0));
            dVar20 = (double)CONCAT44(uVar4,uVar19);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar17 = *pdVar7;
            in_xd2 = dVar21;
            dVar15 = dVar21;
            dVar20 = dVar21;
          }
          uVar4 = SUB84(dVar20,0);
          pdVar7 = (double *)((int)pdVar8 + 0x24);
          if (cVar23 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                    (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
          }
          uVar3 = SUB84(dVar17,0);
          if (cVar24 == '\0') {
            *(undefined4 *)pdVar7 = uVar3;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
LAB_8c241ab6:
          if (cVar24 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar15,0));
            dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),uVar3);
            pdVar7 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            dVar15 = pdVar8[1];
            pdVar7 = pdVar8 + 2;
          }
          if (cVar24 == '\0') {
            uVar3 = *(undefined4 *)(pdVar7 + 2);
            dVar20 = (double)CONCAT44(uVar3,uVar4);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar3;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar15 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar20 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar15;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      uVar4 = SUB84(dVar20,0);
      if (cVar24 == '\0') {
        uVar4 = SUB84(dVar21,0);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
      }
      else {
        in_xd12 = *(double *)((int)pdVar10 + 4);
      }
      uVar3 = 8;
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),SUB84(in_dr14,0));
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar4);
      }
      else {
        dVar15 = pdVar10[1];
        in_dr4 = in_dr14;
      }
      uStack_48 = uStack_48 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),-SUB84(dVar15,0));
      pdVar7 = pdVar8;
      pdVar8 = pdVar10;
    } while (uStack_48 != 0);
    if (pdVar9 < unaff_r8) {
      *(undefined4 *)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(int *)((int)pdVar10 + 0x3c) != ar5) {
        pdVar7 = pdVar10 + 2;
        *(int *)((int)pdVar10 + 0x3c) = ar5;
        uVar3 = 0;
        pdVar8 = pdVar10 + 6;
        puVar5 = &DAT_8c4c2620;
        FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar8,0);
        uVar4 = float_to_color_u8(puVar5,pdVar7,pdVar8,uVar3);
        *(undefined4 *)(pdVar10 + 5) = uVar4;
        if (cVar24 == '\0') {
          in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
        }
        else {
          in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
        }
        uVar3 = float_to_color_u8(puVar5,pdVar7,pdVar8,uVar3);
        *(undefined4 *)((int)pdVar10 + 0x2c) = uVar3;
      }
      uVar4 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (cVar24 == '\0') {
        pdVar7 = (double *)((int)pdVar10 + 0x34);
        dVar15 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 6),uVar4);
        dVar20 = (double)CONCAT44(uVar4,SUB84(in_dr0,0));
      }
      else {
        dVar15 = pdVar10[6];
        pdVar7 = pdVar10 + 7;
        dVar20 = dVar21;
        in_xd2 = dVar21;
      }
      if (cVar23 == '\0') {
        dVar15 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar20 >> 0x20) *
                                (float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0));
      }
      if (cVar24 == '\0') {
        *(int *)(pdVar10 + 4) = SUB84(dVar15,0);
        dVar17 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar4);
        dVar15 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
        dVar20 = (double)CONCAT44(uVar4,SUB84(in_dr4,0));
      }
      else {
        pdVar10[4] = in_xd2;
        dVar17 = *pdVar7;
        in_xd2 = dVar21;
        dVar15 = dVar21;
        dVar20 = dVar21;
      }
      pdVar7 = (double *)((int)pdVar10 + 0x24);
      if (cVar23 == '\0') {
        dVar17 = (double)(ulonglong)
                         (uint)((float)((ulonglong)dVar15 >> 0x20) *
                                (float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0));
      }
      if (cVar24 == '\0') {
        *(int *)pdVar7 = SUB84(dVar17,0);
      }
      else {
        *pdVar7 = in_xd2;
      }
      CacheBlockWriteBack(pdVar7);
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar15,0));
        dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar17,0));
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        dVar15 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar24 == '\0') {
        uVar4 = *(undefined4 *)(pdVar10 + 2);
        in_dr4 = (double)CONCAT44(uVar4,SUB84(dVar20,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar4;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar15 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar10[2];
        unaff_r8[3] = pdVar10[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar15;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      uStack_38 = (int)unaff_r8 + uStack_38 + (0x20 - (int)pdVar9);
    }
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + (uStack_38 >> 5);
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_34;
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c241722\n.set _FUN_8c241722, _FUN_8c241722_def\n");
