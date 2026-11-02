#include "../decls.h"
undefined4 FUN_8c2424f6_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *unaff_r8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  double in_dr0;
  float fVar15;
  float fVar16;
  double in_dr2;
  double dVar17;
  uint uVar18;
  float fVar19;
  double in_dr4;
  double dVar20;
  double in_dr6;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 in_fr13;
  double dVar23;
  double in_dr14;
  undefined8 uVar24;
  double in_xd0;
  double in_xd2;
  double dVar25;
  double in_xd8;
  double dVar26;
  double in_xd12;
  bool bVar27;
  char cVar28;
  char cVar29;
  undefined4 in_stack_ffffffb8;
  uint ar7_00;
  uint uStack_40;
  int iStack_3c;
  uint uStack_34;
  uint uStack_30;
  
  cVar29 = '\0';
  cVar28 = '\0';
  dVar23 = (double)CONCAT44(0x3f800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffb8);
  iVar2 = _DAT_8c4aa510;
  if ((_DAT_8c4ab308 & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar12 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  iStack_3c = 0;
  do {
    uVar3 = SUB84(in_dr14,0);
    puVar13 = puVar12 + 1;
    uStack_40 = (uint)*puVar12;
    uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
    if (cVar29 == '\0') {
      uVar3 = uVar21;
    }
    if ((*puVar12 & 0x8000) != 0) {
      uStack_40 = uStack_40 & 0x7fff;
      uVar3 = 0xbf800000;
    }
    iStack_3c = iStack_3c + uStack_40;
    uStack_40 = uStack_40 - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    pdVar10 = (double *)((uint)*puVar14 * 0x40 + iVar2);
    pdVar9 = (double *)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = unaff_r8;
    if (cVar29 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),uVar3);
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr6,0));
      dVar23 = (double)CONCAT44(uVar21,*(undefined4 *)(pdVar10 + 1));
      in_dr4 = (double)(ulonglong)*(uint *)(pdVar9 + 1);
    }
    else {
      in_dr14 = *(double *)((int)pdVar10 + 4);
      in_dr6 = *(double *)((int)pdVar9 + 4);
      in_xd12 = pdVar10[1];
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)((uint)uVar1 * 0x40 + iVar2);
      uStack_34 = 0;
      ar7_00 = 0;
      uVar3 = (undefined4)((ulonglong)dVar23 >> 0x20);
      dVar20 = dVar23;
      if (cVar29 == '\0') {
        dVar20 = (double)CONCAT44(uVar3,SUB84(in_dr4,0));
      }
      in_dr4 = dVar20;
      if ((*(uint *)pdVar9 & *(uint *)pdVar10 & *(uint *)pdVar11 & 0x3f) == 0) {
        if (((*(uint *)pdVar9 | *(uint *)pdVar10 | *(uint *)pdVar11) & 1) == 0) {
          fVar16 = (float)((ulonglong)in_dr14 >> 0x20);
          if (cVar29 == '\0') {
            dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),fVar16);
          }
          else {
            dVar25 = pdVar11[1];
            in_xd2 = in_dr14;
          }
          if (cVar28 == '\0') {
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar23,0),
                                      SUB84(dVar25,0) - (float)((ulonglong)in_dr6 >> 0x20));
          }
          else {
            dVar25 = (dVar25 - in_dr6) - dVar23;
          }
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)((int)pdVar11 + 4));
          }
          else {
            in_xd0 = *(double *)((int)pdVar11 + 4);
          }
          if (cVar28 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar16);
            fVar16 = SUB84(dVar25,0) * (float)((ulonglong)dVar25 >> 0x20);
          }
          else {
            in_dr0 = in_dr0 - in_dr14;
            fVar16 = SUB84(dVar25 * dVar25,0);
          }
          dVar25 = in_xd12;
          if (cVar29 == '\0') {
            dVar25 = (double)CONCAT44(SUB84(dVar23,0),fVar16);
          }
          if (cVar28 == '\0') {
            fVar16 = ((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar20,0)) * SUB84(in_dr0,0);
            in_dr2 = (double)CONCAT44(fVar16,SUB84(dVar25,0) - fVar16);
          }
          else {
            in_dr2 = (dVar25 - dVar20) * in_dr0;
            in_dr2 = in_dr2 - in_dr2;
          }
          in_dr4 = in_xd2;
          if (cVar29 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),SUB84(dVar20,0));
          }
          if (cVar28 == '\0') {
            in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(in_dr14,0),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * in_dr14;
          }
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
          if (cVar28 == '\0') {
            bVar27 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar27 = in_dr2 < in_dr4;
          }
          if ((bVar27) && (uVar4 != 0)) {
            if (cVar28 == '\0') {
              in_dr4 = (double)CONCAT44(0xbf800000,SUB84(in_dr4,0));
              ar7_00 = uVar4;
            }
            else {
              in_dr4 = -(double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
              ar7_00 = uVar4;
            }
          }
        }
        else {
          if (cVar29 == '\0') {
            uVar21 = *(undefined4 *)(pdVar10 + 3);
            uVar22 = *(undefined4 *)((int)pdVar10 + 0x14);
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),
                                      *(undefined4 *)(pdVar9 + 3));
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar22);
            dVar26 = (double)CONCAT44(uVar21,SUB84(in_dr0,0));
            dVar25 = (double)CONCAT44(uVar22,uVar21);
          }
          else {
            dVar26 = pdVar10[3];
            in_xd2 = *(double *)((int)pdVar10 + 0x14);
            dVar20 = *(double *)((int)pdVar9 + 0x14);
            uVar22 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            uVar21 = SUB84(in_xd2,0);
            dVar25 = in_xd2;
            in_xd8 = dVar26;
          }
          fVar19 = SUB84(dVar20,0);
          fVar16 = (float)((ulonglong)dVar20 >> 0x20);
          if (cVar28 == '\0') {
            fVar15 = SUB84(in_dr2,0) * fVar19;
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * fVar16,SUB84(dVar26,0));
          }
          else {
            fVar15 = SUB84(in_dr2 * dVar20,0);
            dVar26 = dVar26 * dVar20;
          }
          if (cVar29 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 2),*(undefined4 *)(pdVar9 + 2));
            dVar17 = (double)CONCAT44(uVar21,fVar15);
          }
          else {
            in_dr6 = pdVar10[2];
            dVar17 = in_xd8;
          }
          if (cVar28 == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(in_dr6,0),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 * in_dr6;
          }
          if (cVar29 == '\0') {
            dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uVar22);
            dVar25 = in_xd0;
          }
          in_xd0 = dVar25;
          if (cVar28 == '\0') {
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - SUB84(dVar17,0),
                                      SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 - dVar17;
          }
          uVar21 = (undefined4)((ulonglong)in_dr6 >> 0x20);
          dVar25 = in_dr6;
          if (cVar29 == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar21);
            dVar25 = in_xd2;
          }
          if (cVar28 == '\0') {
            dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                      SUB84(dVar26,0) * SUB84(in_dr6,0));
            fVar15 = SUB84(dVar17,0) * fVar19 - (float)((ulonglong)dVar17 >> 0x20);
          }
          else {
            dVar26 = dVar26 * in_dr6;
            fVar15 = SUB84(dVar17 * dVar20 - dVar17 * dVar20,0);
          }
          if (cVar29 == '\0') {
            dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),fVar15);
          }
          else {
            dVar17 = *(double *)((int)pdVar11 + 0x14);
          }
          if (cVar28 == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 * dVar17;
          }
          if (cVar29 == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)(pdVar11 + 2))
            ;
          }
          else {
            dVar25 = pdVar11[2];
          }
          if (cVar28 == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar17,0) +
                                      (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
          }
          in_xd2 = in_dr6;
          if (cVar29 == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar21);
            in_xd2 = dVar25;
          }
          if (cVar28 == '\0') {
            fVar16 = SUB84(dVar17,0) * fVar16;
            dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar16);
            fVar16 = SUB84(dVar26,0) - fVar16;
          }
          else {
            dVar17 = dVar17 * dVar20;
            fVar16 = SUB84(dVar26 - dVar17,0);
          }
          in_dr0 = in_xd0;
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44(fVar16,fVar16);
          }
          in_dr2 = (double)((ulonglong)dVar17 & 0xffffffff00000000);
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(pdVar11 + 3))
            ;
          }
          else {
            in_xd0 = pdVar11[3];
          }
          if (cVar28 == '\0') {
            in_dr2 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr0,0) +
                                    (float)((ulonglong)dVar17 >> 0x20)) << 0x20);
          }
          dVar20 = in_dr2;
          if (cVar29 == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar19);
          }
          if (cVar28 == '\0') {
            fVar16 = (float)((ulonglong)dVar20 >> 0x20) * SUB84(in_dr14,0);
            dVar20 = (double)CONCAT44(fVar16,SUB84(dVar20,0));
            bVar27 = 0.0 < fVar16;
          }
          else {
            dVar20 = dVar20 * in_dr14;
            bVar27 = in_dr2 < dVar20;
          }
          if (bVar27) {
            in_dr4 = dVar20;
            if (uVar4 != 0) {
              ar7_00 = uVar4;
              uStack_34 = uVar4;
            }
          }
          else {
            uStack_34 = 1;
            in_dr4 = dVar23;
            if (cVar29 == '\0') {
              in_dr4 = (double)CONCAT44(uVar3,SUB84(dVar20,0));
            }
          }
        }
      }
      uVar3 = SUB84(in_dr6,0);
      uVar18 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar16 = (float)((ulonglong)in_dr4 >> 0x20);
      if (pdVar8 < unaff_r8) {
        dVar20 = (double)((ulonglong)uVar18 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar16 < 0.0;
        }
        else {
          bVar27 = in_dr4 < dVar20;
        }
        if (bVar27) {
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)((int)pdVar10 + 0x3c) = ar5 | ar7_00;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,ar7_00);
            if (cVar29 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar6 = (double *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar20 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar6 = (double *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar20 = _DAT_8c4c2628;
            }
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar20 >> 0x20);
              pdVar7 = (double *)((int)pdVar6 + 4);
              dVar20 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar6);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar20;
              in_xd2 = *pdVar6;
              pdVar7 = pdVar6 + 1;
              dVar20 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar20 >> 0x20);
              dVar20 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar7);
            }
            else {
              pdVar10[5] = dVar20;
              dVar20 = *pdVar5;
              in_xd2 = *pdVar7;
            }
            pdVar6 = (double *)((int)pdVar10 + 0x2c);
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              *pdVar6 = dVar20;
            }
            CacheBlockWriteBack(pdVar6);
          }
          goto LAB_8c242864;
        }
        *(undefined4 *)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | ar7_00)) {
          *(uint *)((int)pdVar10 + 0x3c) = ar5 | ar7_00;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,ar7_00);
          if (cVar29 == '\0') {
            *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
            pdVar8 = (double *)&DAT_8c4c2638;
            pdVar6 = (double *)&DAT_8c4c2628;
            dVar20 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            pdVar8 = (double *)&DAT_8c4c263c;
            pdVar6 = (double *)&DAT_8c4c2630;
            dVar20 = _DAT_8c4c2628;
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                      SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 + dVar20;
          }
          if (cVar29 == '\0') {
            *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar20 >> 0x20);
            pdVar5 = (double *)((int)pdVar8 + 4);
            dVar20 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar8);
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          else {
            *(double *)((int)pdVar10 + 0x24) = dVar20;
            in_xd2 = *pdVar8;
            pdVar5 = pdVar8 + 1;
            dVar20 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                      SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 + dVar20;
          }
          if (cVar29 == '\0') {
            *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar20 >> 0x20);
            dVar20 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar5);
          }
          else {
            pdVar10[5] = dVar20;
            dVar20 = *pdVar6;
            in_xd2 = *pdVar5;
          }
          pdVar8 = (double *)((int)pdVar10 + 0x2c);
          if (cVar28 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                      SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 + dVar20;
          }
          if (cVar29 == '\0') {
            *(int *)pdVar8 = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            *pdVar8 = dVar20;
          }
          CacheBlockWriteBack(pdVar8);
        }
        if (cVar29 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar20,0));
          pdVar8 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          in_dr2 = pdVar10[1];
          pdVar8 = pdVar10 + 2;
        }
        if (cVar29 == '\0') {
          uVar21 = *(undefined4 *)(pdVar8 + 2);
          in_dr4 = (double)CONCAT44(uVar21,SUB84(in_dr4,0));
          dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar3);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar21;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar8[2];
          dVar20 = pdVar8[3];
          unaff_r8[3] = dVar20;
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        uVar3 = SUB84(dVar20,0);
        unaff_r8 = unaff_r8 + 4;
        pdVar8 = unaff_r8;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar18 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar16 < 0.0;
        }
        else {
          bVar27 = in_dr4 < in_dr2;
        }
        if (bVar27) {
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)((int)pdVar9 + 0x3c) = ar5 | ar7_00;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar9 + 2,pdVar9 + 6,ar7_00);
            if (cVar29 == '\0') {
              *(undefined4 *)(pdVar9 + 4) = _DAT_8c4c2620;
              pdVar6 = (double *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar20 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar9[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar6 = (double *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar20 = _DAT_8c4c2628;
            }
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)((int)pdVar9 + 0x24) = (int)((ulonglong)dVar20 >> 0x20);
              pdVar7 = (double *)((int)pdVar6 + 4);
              dVar20 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar6);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar9 + 0x24) = dVar20;
              in_xd2 = *pdVar6;
              pdVar7 = pdVar6 + 1;
              dVar20 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)(pdVar9 + 5) = (int)((ulonglong)dVar20 >> 0x20);
              in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar7);
            }
            else {
              pdVar9[5] = dVar20;
              in_dr2 = *pdVar5;
              in_xd2 = *pdVar7;
            }
            pdVar6 = (double *)((int)pdVar9 + 0x2c);
            if (cVar28 == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0),
                                        SUB84(in_dr2,0));
            }
            else {
              in_dr2 = in_dr2 + in_dr2;
            }
            if (cVar29 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar6 = in_dr2;
            }
            CacheBlockWriteBack(pdVar6);
          }
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr2,0));
            pdVar6 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            dVar20 = pdVar9[1];
            pdVar6 = pdVar9 + 2;
          }
          if (cVar29 == '\0') {
            uVar21 = *(undefined4 *)(pdVar6 + 2);
            in_dr4 = (double)CONCAT44(uVar21,SUB84(in_dr4,0));
            dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),uVar3);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar21;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar20 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            dVar25 = pdVar6[3];
            unaff_r8[3] = dVar25;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = dVar20;
            *unaff_r8 = in_dr0;
          }
          uVar3 = SUB84(dVar25,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)((int)pdVar10 + 0x3c) = ar5 | ar7_00;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,ar7_00);
            if (cVar29 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar6 = (double *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar20 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar6 = (double *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar20 = _DAT_8c4c2628;
            }
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar20 >> 0x20);
              pdVar7 = (double *)((int)pdVar6 + 4);
              dVar20 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar6);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar20;
              in_xd2 = *pdVar6;
              pdVar7 = pdVar6 + 1;
              dVar20 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar20 >> 0x20);
              dVar20 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar7);
            }
            else {
              pdVar10[5] = dVar20;
              dVar20 = *pdVar5;
              in_xd2 = *pdVar7;
            }
            pdVar6 = (double *)((int)pdVar10 + 0x2c);
            if (cVar28 == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (cVar29 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)dVar20 >> 0x20);
            }
            else {
              *pdVar6 = dVar20;
            }
            CacheBlockWriteBack(pdVar6);
          }
LAB_8c242864:
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar20,0));
            pdVar6 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            in_dr2 = pdVar10[1];
            pdVar6 = pdVar10 + 2;
          }
          if (cVar29 == '\0') {
            uVar21 = *(undefined4 *)(pdVar6 + 2);
            in_dr4 = (double)CONCAT44(uVar21,SUB84(in_dr4,0));
            dVar20 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),uVar3);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar21;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            dVar20 = pdVar6[3];
            unaff_r8[3] = dVar20;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar3 = SUB84(dVar20,0);
          unaff_r8 = unaff_r8 + 4;
        }
      }
      if (uStack_34 != 0) {
        FUN_8c23e7a8(pdVar9,pdVar10,pdVar11,ar5 | ar7_00);
        pdVar8 = unaff_r8;
      }
      if (cVar29 == '\0') {
        uVar24 = CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr14,0));
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar3);
      }
      else {
        uVar24 = *(undefined8 *)((int)pdVar11 + 4);
        in_dr6 = in_dr14;
      }
      uVar3 = 8;
      if (cVar29 == '\0') {
        in_dr4 = (double)((ulonglong)dVar23 & 0xffffffff);
        uVar21 = SUB84(dVar23,0);
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*(undefined4 *)(pdVar11 + 1));
      }
      else {
        uVar21 = SUB84(in_dr4,0);
        in_xd12 = pdVar11[1];
      }
      uStack_40 = uStack_40 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)uVar24 >> 0x20),-(float)uVar24);
      pdVar9 = pdVar10;
      pdVar10 = pdVar11;
    } while (uStack_40 != 0);
    if (pdVar8 < unaff_r8) {
      *(undefined4 *)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      if (*(uint *)((int)pdVar11 + 0x3c) != (ar5 | ar7_00)) {
        *(uint *)((int)pdVar11 + 0x3c) = ar5 | ar7_00;
        uVar3 = FUN_8c23bae2(&DAT_8c4c2620,pdVar11 + 2,pdVar11 + 6,ar7_00);
        if (cVar29 == '\0') {
          *(undefined4 *)(pdVar11 + 4) = _DAT_8c4c2620;
          pdVar8 = (double *)&DAT_8c4c2638;
          pdVar9 = (double *)&DAT_8c4c2628;
          dVar20 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          pdVar11[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          pdVar8 = (double *)&DAT_8c4c263c;
          pdVar9 = (double *)&DAT_8c4c2630;
          dVar20 = _DAT_8c4c2628;
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 + dVar20;
        }
        if (cVar29 == '\0') {
          *(int *)((int)pdVar11 + 0x24) = (int)((ulonglong)dVar20 >> 0x20);
          pdVar10 = (double *)((int)pdVar8 + 4);
          dVar20 = (double)CONCAT44(*(undefined4 *)pdVar9,*(undefined4 *)pdVar8);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        else {
          *(double *)((int)pdVar11 + 0x24) = dVar20;
          in_xd2 = *pdVar8;
          pdVar10 = pdVar8 + 1;
          dVar20 = *pdVar9;
          pdVar9 = pdVar9 + 1;
        }
        if (cVar28 == '\0') {
          dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 + dVar20;
        }
        if (cVar29 == '\0') {
          *(int *)(pdVar11 + 5) = (int)((ulonglong)dVar20 >> 0x20);
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar9,*(undefined4 *)pdVar10);
        }
        else {
          pdVar11[5] = dVar20;
          in_dr2 = *pdVar9;
          in_xd2 = *pdVar10;
        }
        pdVar8 = (double *)((int)pdVar11 + 0x2c);
        if (cVar28 == '\0') {
          in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + in_dr2;
        }
        if (cVar29 == '\0') {
          *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *pdVar8 = in_dr2;
        }
        CacheBlockWriteBack(pdVar8);
      }
      if (cVar29 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr2,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar29 == '\0') {
        uVar22 = *(undefined4 *)(pdVar11 + 2);
        in_dr4 = (double)CONCAT44(uVar22,uVar21);
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar22;
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
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_3c;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_3c;
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2424f6\n.set _FUN_8c2424f6, _FUN_8c2424f6_def\n");
