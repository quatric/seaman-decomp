#include "../decls.h"
undefined4 FUN_8c23efac_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *unaff_r8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  double in_dr0;
  float fVar16;
  double dVar17;
  float fVar18;
  double in_dr4;
  double dVar19;
  undefined4 uVar20;
  float in_fr13;
  undefined4 in_fr12;
  double in_dr14;
  double dVar21;
  double in_xd2;
  double in_xd12;
  bool bVar22;
  char cVar23;
  char cVar24;
  undefined4 in_stack_ffffffc0;
  uint uStack_3c;
  int iStack_30;
  uint uStack_2c;
  
  cVar24 = '\0';
  cVar23 = '\0';
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffc0);
  iVar2 = _DAT_8c4aa510;
  puVar13 = *(ushort **)(ar4 + 4);
  uStack_2c = (uint)*(ushort *)(ar4 + 2);
  uStack_3c = 0;
  iStack_30 = 0;
  do {
    uVar3 = SUB84(in_dr14,0);
    puVar14 = puVar13 + 1;
    uVar5 = (uint)*puVar13;
    if (cVar24 == '\0') {
      uVar3 = 0x3f800000;
    }
    if ((*puVar13 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      if (cVar23 == '\0') {
        uVar20 = 0xbf800000;
      }
      else {
        uVar20 = (undefined4)((ulonglong)-(double)CONCAT44(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar24 == '\0') {
        uVar3 = uVar20;
      }
    }
    iStack_30 = iStack_30 + uVar5;
    iVar4 = uVar5 - 2;
    puVar15 = puVar13 + 2;
    puVar13 = puVar13 + 3;
    pdVar9 = (double *)((uint)*puVar14 * 0x40 + iVar2);
    if (cVar24 == '\0') {
      in_dr4 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),*(undefined4 *)(pdVar9 + 1));
    }
    else {
      in_dr4 = *(double *)((int)pdVar9 + 4);
    }
    pdVar10 = (double *)((uint)*puVar15 * 0x40 + iVar2);
    pdVar11 = unaff_r8;
    if (cVar24 == '\0') {
      in_fr13 = *(float *)((int)pdVar10 + 4);
      in_dr14 = (double)CONCAT44(*(undefined4 *)(pdVar10 + 1),uVar3);
      dVar21 = in_xd12;
    }
    else {
      in_dr14 = pdVar10[1];
      dVar21 = *(double *)((int)pdVar10 + 4);
    }
    do {
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      pdVar12 = (double *)((uint)uVar1 * 0x40 + iVar2);
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar12 + 1),in_fr13);
      }
      else {
        dVar17 = pdVar12[1];
        in_xd2 = dVar21;
      }
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0) - (float)((ulonglong)in_dr4 >> 0x20));
      }
      else {
        dVar17 = dVar17 - in_dr4;
      }
      fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar18,SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 - in_dr14;
      }
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)((int)pdVar12 + 4)
                                 );
      }
      if (cVar23 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - in_fr13);
        fVar16 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 - (double)CONCAT44(in_fr12,in_fr13);
        fVar16 = SUB84(dVar17 * dVar17,0);
      }
      dVar17 = in_dr14;
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(fVar18,fVar16);
      }
      if (cVar23 == '\0') {
        fVar18 = ((float)((ulonglong)dVar17 >> 0x20) - SUB84(in_dr4,0)) * SUB84(in_dr0,0);
        dVar17 = (double)CONCAT44(fVar18,SUB84(dVar17,0) - fVar18);
      }
      else {
        dVar17 = (dVar17 - in_dr4) * in_dr0;
        dVar17 = dVar17 - dVar17;
      }
      dVar19 = in_xd2;
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(SUB84(dVar17,0),SUB84(in_dr4,0));
      }
      if (cVar23 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(in_dr14,0),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * in_dr14;
      }
      uVar5 = (uint)((ulonglong)dVar17 >> 0x20);
      fVar18 = (float)((ulonglong)dVar19 >> 0x20);
      if (pdVar11 < unaff_r8) {
        dVar17 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar19 < dVar17;
        }
        if (bVar22) {
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(int *)((int)pdVar10 + 0x3c) != ar5) {
            *(int *)((int)pdVar10 + 0x3c) = ar5;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,0);
            if (cVar24 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar9 = (double *)&DAT_8c4c2638;
              pdVar8 = (double *)&DAT_8c4c2628;
              dVar17 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar9 = (double *)&DAT_8c4c263c;
              pdVar8 = (double *)&DAT_8c4c2630;
              dVar17 = _DAT_8c4c2628;
            }
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar17 >> 0x20);
              pdVar6 = (double *)((int)pdVar9 + 4);
              dVar17 = (double)CONCAT44(*(undefined4 *)pdVar8,*(undefined4 *)pdVar9);
              pdVar8 = (double *)((int)pdVar8 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar17;
              in_xd2 = *pdVar9;
              pdVar6 = pdVar9 + 1;
              dVar17 = *pdVar8;
              pdVar8 = pdVar8 + 1;
            }
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar17 >> 0x20);
              dVar17 = (double)CONCAT44(*(undefined4 *)pdVar8,*(undefined4 *)pdVar6);
            }
            else {
              pdVar10[5] = dVar17;
              dVar17 = *pdVar8;
              in_xd2 = *pdVar6;
            }
            pdVar9 = (double *)((int)pdVar10 + 0x2c);
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)pdVar9 = (int)((ulonglong)dVar17 >> 0x20);
            }
            else {
              *pdVar9 = dVar17;
            }
            CacheBlockWriteBack(pdVar9);
          }
          goto LAB_8c23f25a;
        }
        *(undefined4 *)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(int *)((int)pdVar10 + 0x3c) != ar5) {
          *(int *)((int)pdVar10 + 0x3c) = ar5;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,0);
          if (cVar24 == '\0') {
            *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
            pdVar9 = (double *)&DAT_8c4c2638;
            pdVar8 = (double *)&DAT_8c4c2628;
            dVar17 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            pdVar9 = (double *)&DAT_8c4c263c;
            pdVar8 = (double *)&DAT_8c4c2630;
            dVar17 = _DAT_8c4c2628;
          }
          if (cVar23 == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + dVar17;
          }
          if (cVar24 == '\0') {
            *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar17 >> 0x20);
            pdVar6 = (double *)((int)pdVar9 + 4);
            dVar17 = (double)CONCAT44(*(undefined4 *)pdVar8,*(undefined4 *)pdVar9);
            pdVar8 = (double *)((int)pdVar8 + 4);
          }
          else {
            *(double *)((int)pdVar10 + 0x24) = dVar17;
            in_xd2 = *pdVar9;
            pdVar6 = pdVar9 + 1;
            dVar17 = *pdVar8;
            pdVar8 = pdVar8 + 1;
          }
          if (cVar23 == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + dVar17;
          }
          if (cVar24 == '\0') {
            *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar17 >> 0x20);
            dVar17 = (double)CONCAT44(*(undefined4 *)pdVar8,*(undefined4 *)pdVar6);
          }
          else {
            pdVar10[5] = dVar17;
            dVar17 = *pdVar8;
            in_xd2 = *pdVar6;
          }
          pdVar9 = (double *)((int)pdVar10 + 0x2c);
          if (cVar23 == '\0') {
            dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + dVar17;
          }
          if (cVar24 == '\0') {
            *(int *)pdVar9 = (int)((ulonglong)dVar17 >> 0x20);
          }
          else {
            *pdVar9 = dVar17;
          }
          CacheBlockWriteBack(pdVar9);
        }
        if (cVar24 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
          dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar17,0));
          pdVar9 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          dVar17 = pdVar10[1];
          pdVar9 = pdVar10 + 2;
        }
        if (cVar24 == '\0') {
          uVar3 = *(undefined4 *)(pdVar9 + 2);
          dVar19 = (double)CONCAT44(uVar3,SUB84(dVar19,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar3;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar19 = pdVar9[2];
          unaff_r8[3] = pdVar9[3];
          unaff_r8[2] = dVar19;
          unaff_r8[1] = dVar17;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar11);
        pdVar11 = unaff_r8;
      }
      else {
        dVar17 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar19 < dVar17;
        }
        if (bVar22) {
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          if (*(int *)((int)pdVar9 + 0x3c) != ar5) {
            *(int *)((int)pdVar9 + 0x3c) = ar5;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar9 + 2,pdVar9 + 6,0);
            if (cVar24 == '\0') {
              *(undefined4 *)(pdVar9 + 4) = _DAT_8c4c2620;
              pdVar8 = (double *)&DAT_8c4c2638;
              pdVar6 = (double *)&DAT_8c4c2628;
              dVar17 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar9[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar8 = (double *)&DAT_8c4c263c;
              pdVar6 = (double *)&DAT_8c4c2630;
              dVar17 = _DAT_8c4c2628;
            }
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)((int)pdVar9 + 0x24) = (int)((ulonglong)dVar17 >> 0x20);
              pdVar7 = (double *)((int)pdVar8 + 4);
              dVar17 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar8);
              pdVar6 = (double *)((int)pdVar6 + 4);
            }
            else {
              *(double *)((int)pdVar9 + 0x24) = dVar17;
              in_xd2 = *pdVar8;
              pdVar7 = pdVar8 + 1;
              dVar17 = *pdVar6;
              pdVar6 = pdVar6 + 1;
            }
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(pdVar9 + 5) = (int)((ulonglong)dVar17 >> 0x20);
              dVar17 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar7);
            }
            else {
              pdVar9[5] = dVar17;
              dVar17 = *pdVar6;
              in_xd2 = *pdVar7;
            }
            pdVar8 = (double *)((int)pdVar9 + 0x2c);
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)pdVar8 = (int)((ulonglong)dVar17 >> 0x20);
            }
            else {
              *pdVar8 = dVar17;
            }
            CacheBlockWriteBack(pdVar8);
          }
          if (cVar24 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
            dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar17,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            dVar17 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar24 == '\0') {
            uVar3 = *(undefined4 *)(pdVar9 + 2);
            dVar19 = (double)CONCAT44(uVar3,SUB84(dVar19,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar3;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar17;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(int *)((int)pdVar10 + 0x3c) != ar5) {
            *(int *)((int)pdVar10 + 0x3c) = ar5;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,0);
            if (cVar24 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar9 = (double *)&DAT_8c4c2638;
              pdVar8 = (double *)&DAT_8c4c2628;
              dVar17 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar9 = (double *)&DAT_8c4c263c;
              pdVar8 = (double *)&DAT_8c4c2630;
              dVar17 = _DAT_8c4c2628;
            }
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar17 >> 0x20);
              pdVar6 = (double *)((int)pdVar9 + 4);
              dVar17 = (double)CONCAT44(*(undefined4 *)pdVar8,*(undefined4 *)pdVar9);
              pdVar8 = (double *)((int)pdVar8 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar17;
              in_xd2 = *pdVar9;
              pdVar6 = pdVar9 + 1;
              dVar17 = *pdVar8;
              pdVar8 = pdVar8 + 1;
            }
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar17 >> 0x20);
              dVar17 = (double)CONCAT44(*(undefined4 *)pdVar8,*(undefined4 *)pdVar6);
            }
            else {
              pdVar10[5] = dVar17;
              dVar17 = *pdVar8;
              in_xd2 = *pdVar6;
            }
            pdVar9 = (double *)((int)pdVar10 + 0x2c);
            if (cVar23 == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)pdVar9 = (int)((ulonglong)dVar17 >> 0x20);
            }
            else {
              *pdVar9 = dVar17;
            }
            CacheBlockWriteBack(pdVar9);
          }
LAB_8c23f25a:
          if (cVar24 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
            dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar17,0));
            pdVar9 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            dVar17 = pdVar10[1];
            pdVar9 = pdVar10 + 2;
          }
          if (cVar24 == '\0') {
            uVar3 = *(undefined4 *)(pdVar9 + 2);
            dVar19 = (double)CONCAT44(uVar3,SUB84(dVar19,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar3;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar17 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar17;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      if (cVar24 == '\0') {
        in_dr4 = (double)CONCAT44(in_fr13,SUB84(dVar19,0));
        in_fr13 = *(float *)((int)pdVar12 + 4);
        in_xd12 = dVar21;
      }
      else {
        in_xd12 = *(double *)((int)pdVar12 + 4);
        in_dr4 = dVar21;
      }
      uVar3 = 8;
      if (cVar24 == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)((ulonglong)in_dr14 >> 0x20)
                                 );
        dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar12 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar21 = pdVar12[1];
      }
      iVar4 = iVar4 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),-SUB84(dVar21,0));
      pdVar9 = pdVar10;
      pdVar10 = pdVar12;
      dVar21 = in_xd12;
    } while (iVar4 != 0);
    if (pdVar11 < unaff_r8) {
      *(undefined4 *)pdVar12 = 0xf0000000;
      CacheBlockWriteBack(pdVar12);
      if (*(int *)((int)pdVar12 + 0x3c) != ar5) {
        *(int *)((int)pdVar12 + 0x3c) = ar5;
        uVar3 = FUN_8c23bae2(&DAT_8c4c2620,pdVar12 + 2,pdVar12 + 6,0);
        if (cVar24 == '\0') {
          *(undefined4 *)(pdVar12 + 4) = _DAT_8c4c2620;
          pdVar9 = (double *)&DAT_8c4c2638;
          pdVar10 = (double *)&DAT_8c4c2628;
          dVar21 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          pdVar12[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          pdVar9 = (double *)&DAT_8c4c263c;
          pdVar10 = (double *)&DAT_8c4c2630;
          dVar21 = _DAT_8c4c2628;
        }
        if (cVar23 == '\0') {
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 + dVar21;
        }
        if (cVar24 == '\0') {
          *(int *)((int)pdVar12 + 0x24) = (int)((ulonglong)dVar21 >> 0x20);
          pdVar8 = (double *)((int)pdVar9 + 4);
          dVar21 = (double)CONCAT44(*(undefined4 *)pdVar10,*(undefined4 *)pdVar9);
          pdVar10 = (double *)((int)pdVar10 + 4);
        }
        else {
          *(double *)((int)pdVar12 + 0x24) = dVar21;
          in_xd2 = *pdVar9;
          pdVar8 = pdVar9 + 1;
          dVar21 = *pdVar10;
          pdVar10 = pdVar10 + 1;
        }
        if (cVar23 == '\0') {
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 + dVar21;
        }
        if (cVar24 == '\0') {
          *(int *)(pdVar12 + 5) = (int)((ulonglong)dVar21 >> 0x20);
          dVar17 = (double)CONCAT44(*(undefined4 *)pdVar10,*(undefined4 *)pdVar8);
        }
        else {
          pdVar12[5] = dVar21;
          dVar17 = *pdVar10;
          in_xd2 = *pdVar8;
        }
        pdVar9 = (double *)((int)pdVar12 + 0x2c);
        if (cVar23 == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 + dVar17;
        }
        if (cVar24 == '\0') {
          *(int *)pdVar9 = (int)((ulonglong)dVar17 >> 0x20);
        }
        else {
          *pdVar9 = dVar17;
        }
        CacheBlockWriteBack(pdVar9);
      }
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(in_dr0,0));
        dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + 4),SUB84(dVar17,0));
        pdVar12 = pdVar12 + 1;
      }
      else {
        in_dr0 = *pdVar12;
        dVar21 = pdVar12[1];
        pdVar12 = pdVar12 + 2;
      }
      if (cVar24 == '\0') {
        uVar20 = *(undefined4 *)(pdVar12 + 2);
        in_dr4 = (double)CONCAT44(uVar20,SUB84(in_dr4,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar12 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar20;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar21 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar12[2];
        unaff_r8[3] = pdVar12[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar21;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      uStack_3c = (int)unaff_r8 + uStack_3c + (0x20 - (int)pdVar11);
    }
    uStack_2c = uStack_2c - 1;
    if (uStack_2c == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + (uStack_3c >> 5);
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_30;
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c23efac\n.set _FUN_8c23efac, _FUN_8c23efac_def\n");
