#include "../decls.h"
undefined4 FUN_8c24296c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

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
  double in_dr2;
  double dVar16;
  uint uVar17;
  double in_dr4;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double in_dr6;
  undefined4 in_fr13;
  double dVar21;
  double in_dr14;
  undefined8 uVar22;
  double in_xd2;
  double in_xd12;
  bool bVar23;
  char cVar24;
  char cVar25;
  undefined4 in_stack_ffffffbc;
  uint uVar26;
  uint uStack_40;
  int iStack_38;
  uint uStack_30;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar21 = (double)CONCAT44(0x3f800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffbc);
  iVar2 = _DAT_8c4aa510;
  if ((_DAT_8c4ab308 & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar12 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  iStack_38 = 0;
  do {
    uVar19 = SUB84(in_dr14,0);
    puVar13 = puVar12 + 1;
    uStack_40 = (uint)*puVar12;
    uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
    if (cVar25 == '\0') {
      uVar19 = uVar3;
    }
    if ((*puVar12 & 0x8000) != 0) {
      uStack_40 = uStack_40 & 0x7fff;
      uVar19 = 0xbf800000;
    }
    iStack_38 = iStack_38 + uStack_40;
    uStack_40 = uStack_40 - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    pdVar10 = (double *)((uint)*puVar14 * 0x40 + iVar2);
    pdVar9 = (double *)((uint)*puVar13 * 0x40 + iVar2);
    pdVar6 = unaff_r8;
    if (cVar25 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),uVar19);
      in_dr4 = (double)(ulonglong)*(uint *)((int)pdVar9 + 4);
      dVar21 = (double)CONCAT44(uVar3,*(undefined4 *)(pdVar10 + 1));
      in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),SUB84(in_dr6,0));
    }
    else {
      in_dr14 = *(double *)((int)pdVar10 + 4);
      in_xd12 = pdVar10[1];
      in_dr6 = pdVar9[1];
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)((uint)uVar1 * 0x40 + iVar2);
      uVar26 = 0;
      dVar18 = dVar21;
      if (cVar25 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(in_dr4,0));
      }
      if ((*(uint *)pdVar9 & *(uint *)pdVar10 & *(uint *)pdVar11 & 0x3f) == 0) {
        fVar15 = (float)((ulonglong)in_dr14 >> 0x20);
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),fVar15);
        }
        else {
          dVar16 = pdVar11[1];
          in_xd2 = in_dr14;
        }
        if (cVar24 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar21,0),
                                    SUB84(dVar16,0) - SUB84(dVar18,0));
        }
        else {
          dVar16 = (dVar16 - dVar18) - dVar21;
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar11 + 4));
        }
        if (cVar24 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar15);
          fVar15 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          in_dr0 = in_dr0 - in_dr14;
          fVar15 = SUB84(dVar16 * dVar16,0);
        }
        dVar16 = in_xd12;
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(SUB84(dVar21,0),fVar15);
        }
        if (cVar24 == '\0') {
          fVar15 = ((float)((ulonglong)dVar16 >> 0x20) - (float)((ulonglong)in_dr6 >> 0x20)) *
                   SUB84(in_dr0,0);
          in_dr2 = (double)CONCAT44(fVar15,SUB84(dVar16,0) - fVar15);
        }
        else {
          in_dr2 = (dVar16 - in_dr6) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        dVar16 = in_xd2;
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(SUB84(in_dr2,0),SUB84(dVar18,0));
        }
        if (cVar24 == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(in_dr14,0),
                                    SUB84(dVar16,0));
        }
        else {
          dVar18 = dVar16 * in_dr14;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar24 == '\0') {
          bVar23 = 0.0 < (float)((ulonglong)dVar18 >> 0x20);
        }
        else {
          bVar23 = in_dr2 < dVar18;
        }
        if ((bVar23) && (uVar4 != 0)) {
          uVar26 = uVar4;
          if (cVar24 == '\0') {
            dVar18 = (double)CONCAT44(0xbf800000,SUB84(dVar18,0));
          }
          else {
            dVar18 = -(double)CONCAT44(0x3f800000,SUB84(dVar18,0));
          }
        }
      }
      uVar17 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar15 = (float)((ulonglong)dVar18 >> 0x20);
      if (pdVar6 < unaff_r8) {
        dVar16 = (double)((ulonglong)uVar17 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar15 < 0.0;
        }
        else {
          bVar23 = dVar18 < dVar16;
        }
        if (bVar23) {
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | uVar26)) {
            *(uint *)((int)pdVar10 + 0x3c) = ar5 | uVar26;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,uVar26);
            if (cVar25 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar9 = (double *)&DAT_8c4c2638;
              pdVar7 = (double *)&DAT_8c4c2628;
              dVar16 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar9 = (double *)&DAT_8c4c263c;
              pdVar7 = (double *)&DAT_8c4c2630;
              dVar16 = _DAT_8c4c2628;
            }
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar16 >> 0x20);
              pdVar5 = (double *)((int)pdVar9 + 4);
              dVar16 = (double)CONCAT44(*(undefined4 *)pdVar7,*(undefined4 *)pdVar9);
              pdVar7 = (double *)((int)pdVar7 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar16;
              in_xd2 = *pdVar9;
              pdVar5 = pdVar9 + 1;
              dVar16 = *pdVar7;
              pdVar7 = pdVar7 + 1;
            }
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar16 >> 0x20);
              dVar16 = (double)CONCAT44(*(undefined4 *)pdVar7,*(undefined4 *)pdVar5);
            }
            else {
              pdVar10[5] = dVar16;
              dVar16 = *pdVar7;
              in_xd2 = *pdVar5;
            }
            pdVar9 = (double *)((int)pdVar10 + 0x2c);
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)pdVar9 = (int)((ulonglong)dVar16 >> 0x20);
            }
            else {
              *pdVar9 = dVar16;
            }
            CacheBlockWriteBack(pdVar9);
          }
          goto LAB_8c242c66;
        }
        *(undefined4 *)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | uVar26)) {
          *(uint *)((int)pdVar10 + 0x3c) = ar5 | uVar26;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,uVar26);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
            pdVar9 = (double *)&DAT_8c4c2638;
            pdVar6 = (double *)&DAT_8c4c2628;
            dVar16 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            pdVar9 = (double *)&DAT_8c4c263c;
            pdVar6 = (double *)&DAT_8c4c2630;
            dVar16 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar16 >> 0x20);
            pdVar7 = (double *)((int)pdVar9 + 4);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar9);
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          else {
            *(double *)((int)pdVar10 + 0x24) = dVar16;
            in_xd2 = *pdVar9;
            pdVar7 = pdVar9 + 1;
            dVar16 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar7);
          }
          else {
            pdVar10[5] = dVar16;
            dVar16 = *pdVar6;
            in_xd2 = *pdVar7;
          }
          pdVar9 = (double *)((int)pdVar10 + 0x2c);
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar9 = (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            *pdVar9 = dVar16;
          }
          CacheBlockWriteBack(pdVar9);
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar16,0));
          pdVar9 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          in_dr2 = pdVar10[1];
          pdVar9 = pdVar10 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(pdVar9 + 2);
          dVar18 = (double)CONCAT44(uVar19,SUB84(dVar18,0));
          in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar19;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar18 = pdVar9[2];
          in_dr6 = pdVar9[3];
          unaff_r8[3] = in_dr6;
          unaff_r8[2] = dVar18;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        pdVar6 = unaff_r8;
        dVar16 = in_xd12;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar17 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar15 < 0.0;
        }
        else {
          bVar23 = dVar18 < in_dr2;
        }
        dVar16 = in_xd12;
        if (bVar23) {
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | uVar26)) {
            *(uint *)((int)pdVar9 + 0x3c) = ar5 | uVar26;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar9 + 2,pdVar9 + 6,uVar26);
            if (cVar25 == '\0') {
              *(undefined4 *)(pdVar9 + 4) = _DAT_8c4c2620;
              pdVar7 = (double *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar16 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar9[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar7 = (double *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar16 = _DAT_8c4c2628;
            }
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)((int)pdVar9 + 0x24) = (int)((ulonglong)dVar16 >> 0x20);
              pdVar8 = (double *)((int)pdVar7 + 4);
              dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar7);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar9 + 0x24) = dVar16;
              in_xd2 = *pdVar7;
              pdVar8 = pdVar7 + 1;
              dVar16 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(pdVar9 + 5) = (int)((ulonglong)dVar16 >> 0x20);
              in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar8);
            }
            else {
              pdVar9[5] = dVar16;
              in_dr2 = *pdVar5;
              in_xd2 = *pdVar8;
            }
            pdVar7 = (double *)((int)pdVar9 + 0x2c);
            if (cVar24 == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0),
                                        SUB84(in_dr2,0));
            }
            else {
              in_dr2 = in_dr2 + in_dr2;
            }
            if (cVar25 == '\0') {
              *(int *)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar7 = in_dr2;
            }
            CacheBlockWriteBack(pdVar7);
          }
          if (cVar25 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr2,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            dVar16 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar25 == '\0') {
            uVar19 = *(undefined4 *)(pdVar9 + 2);
            dVar18 = (double)CONCAT44(uVar19,SUB84(dVar18,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar16 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar18 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar18;
            unaff_r8[1] = dVar16;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | uVar26)) {
            *(uint *)((int)pdVar10 + 0x3c) = ar5 | uVar26;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,uVar26);
            if (cVar25 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar9 = (double *)&DAT_8c4c2638;
              pdVar7 = (double *)&DAT_8c4c2628;
              dVar16 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar9 = (double *)&DAT_8c4c263c;
              pdVar7 = (double *)&DAT_8c4c2630;
              dVar16 = _DAT_8c4c2628;
            }
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar16 >> 0x20);
              pdVar5 = (double *)((int)pdVar9 + 4);
              dVar16 = (double)CONCAT44(*(undefined4 *)pdVar7,*(undefined4 *)pdVar9);
              pdVar7 = (double *)((int)pdVar7 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar16;
              in_xd2 = *pdVar9;
              pdVar5 = pdVar9 + 1;
              dVar16 = *pdVar7;
              pdVar7 = pdVar7 + 1;
            }
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar16 >> 0x20);
              dVar16 = (double)CONCAT44(*(undefined4 *)pdVar7,*(undefined4 *)pdVar5);
            }
            else {
              pdVar10[5] = dVar16;
              dVar16 = *pdVar7;
              in_xd2 = *pdVar5;
            }
            pdVar9 = (double *)((int)pdVar10 + 0x2c);
            if (cVar24 == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)pdVar9 = (int)((ulonglong)dVar16 >> 0x20);
            }
            else {
              *pdVar9 = dVar16;
            }
            CacheBlockWriteBack(pdVar9);
          }
LAB_8c242c66:
          if (cVar25 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar16,0));
            pdVar9 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            in_dr2 = pdVar10[1];
            pdVar9 = pdVar10 + 2;
          }
          if (cVar25 == '\0') {
            uVar19 = *(undefined4 *)(pdVar9 + 2);
            dVar18 = (double)CONCAT44(uVar19,SUB84(dVar18,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar18 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar18;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          dVar16 = in_xd12;
        }
      }
      if (cVar25 == '\0') {
        uVar19 = (undefined4)((ulonglong)in_dr14 >> 0x20);
        uVar22 = CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr14,0));
        in_dr4 = (double)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        uVar19 = SUB84(dVar18,0);
        uVar22 = *(undefined8 *)((int)pdVar11 + 4);
        in_dr4 = dVar18;
      }
      uVar3 = 8;
      if (cVar25 == '\0') {
        uVar20 = SUB84(dVar21,0);
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(pdVar11 + 1));
        in_xd12 = dVar16;
        in_dr6 = (double)CONCAT44(uVar20,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = pdVar11[1];
        in_dr6 = dVar16;
      }
      uStack_40 = uStack_40 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)uVar22 >> 0x20),-(float)uVar22);
      pdVar9 = pdVar10;
      pdVar10 = pdVar11;
    } while (uStack_40 != 0);
    if (pdVar6 < unaff_r8) {
      *(undefined4 *)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      if (*(uint *)((int)pdVar11 + 0x3c) != (ar5 | uVar26)) {
        *(uint *)((int)pdVar11 + 0x3c) = ar5 | uVar26;
        uVar3 = FUN_8c23bae2(&DAT_8c4c2620,pdVar11 + 2,pdVar11 + 6,uVar26);
        if (cVar25 == '\0') {
          *(undefined4 *)(pdVar11 + 4) = _DAT_8c4c2620;
          pdVar9 = (double *)&DAT_8c4c2638;
          pdVar6 = (double *)&DAT_8c4c2628;
          dVar18 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          pdVar11[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          pdVar9 = (double *)&DAT_8c4c263c;
          pdVar6 = (double *)&DAT_8c4c2630;
          dVar18 = _DAT_8c4c2628;
        }
        if (cVar24 == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0),
                                    SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 + dVar18;
        }
        if (cVar25 == '\0') {
          *(int *)((int)pdVar11 + 0x24) = (int)((ulonglong)dVar18 >> 0x20);
          pdVar10 = (double *)((int)pdVar9 + 4);
          dVar18 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar9);
          pdVar6 = (double *)((int)pdVar6 + 4);
        }
        else {
          *(double *)((int)pdVar11 + 0x24) = dVar18;
          in_xd2 = *pdVar9;
          pdVar10 = pdVar9 + 1;
          dVar18 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        if (cVar24 == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0),
                                    SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 + dVar18;
        }
        if (cVar25 == '\0') {
          *(int *)(pdVar11 + 5) = (int)((ulonglong)dVar18 >> 0x20);
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar10);
        }
        else {
          pdVar11[5] = dVar18;
          in_dr2 = *pdVar6;
          in_xd2 = *pdVar10;
        }
        pdVar9 = (double *)((int)pdVar11 + 0x2c);
        if (cVar24 == '\0') {
          in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + in_dr2;
        }
        if (cVar25 == '\0') {
          *(int *)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *pdVar9 = in_dr2;
        }
        CacheBlockWriteBack(pdVar9);
      }
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr2,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)(pdVar11 + 2);
        in_dr4 = (double)CONCAT44(uVar20,uVar19);
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar20;
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
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_38;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_38;
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c24296c\n.set _FUN_8c24296c, _FUN_8c24296c_def\n");
