#include "../decls.h"
undefined4 FUN_8c244262_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

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
  float fVar15;
  double in_dr0;
  double dVar16;
  double in_dr2;
  float fVar20;
  double dVar18;
  ulonglong uVar19;
  uint uVar21;
  double in_dr4;
  double dVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double in_dr6;
  double dVar26;
  float fVar27;
  double dVar28;
  double in_dr10;
  float fVar29;
  undefined4 in_fr13;
  double dVar30;
  double in_dr14;
  undefined8 uVar31;
  double in_xd2;
  double in_xd12;
  bool bVar32;
  char cVar33;
  char cVar34;
  undefined4 in_stack_ffffffb4;
  uint ar7_00;
  uint uStack_44;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  float fVar17;
  
  cVar34 = '\0';
  cVar33 = '\0';
  dVar30 = (double)CONCAT44(0x3f800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffb4);
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
    uVar3 = SUB84(in_dr14,0);
    puVar13 = puVar12 + 1;
    uStack_44 = (uint)*puVar12;
    uVar24 = (undefined4)((ulonglong)dVar30 >> 0x20);
    if (cVar34 == '\0') {
      uVar3 = uVar24;
    }
    if ((*puVar12 & 0x8000) != 0) {
      uStack_44 = uStack_44 & 0x7fff;
      uVar3 = 0xbf800000;
    }
    iStack_38 = iStack_38 + uStack_44;
    uStack_44 = uStack_44 - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    pdVar10 = (double *)((uint)*puVar14 * 0x40 + iVar2);
    pdVar9 = (double *)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = unaff_r8;
    if (cVar34 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),uVar3);
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr6,0));
      dVar30 = (double)CONCAT44(uVar24,*(undefined4 *)(pdVar10 + 1));
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
      uVar3 = (undefined4)((ulonglong)dVar30 >> 0x20);
      dVar26 = dVar30;
      if (cVar34 == '\0') {
        dVar26 = (double)CONCAT44(uVar3,SUB84(in_dr4,0));
      }
      in_dr4 = dVar26;
      if ((*(uint *)pdVar9 & *(uint *)pdVar10 & *(uint *)pdVar11 & 0x3f) == 0) {
        if (((*(uint *)pdVar9 | *(uint *)pdVar10 | *(uint *)pdVar11) & 1) == 0) {
          fVar20 = (float)((ulonglong)in_dr14 >> 0x20);
          if (cVar34 == '\0') {
            dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),fVar20);
          }
          else {
            dVar22 = pdVar11[1];
            in_xd2 = in_dr14;
          }
          if (cVar33 == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar30,0),
                                      SUB84(dVar22,0) - (float)((ulonglong)in_dr6 >> 0x20));
          }
          else {
            dVar22 = (dVar22 - in_dr6) - dVar30;
          }
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)((int)pdVar11 + 4));
          }
          if (cVar33 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar20);
            fVar20 = SUB84(dVar22,0) * (float)((ulonglong)dVar22 >> 0x20);
          }
          else {
            in_dr0 = in_dr0 - in_dr14;
            fVar20 = SUB84(dVar22 * dVar22,0);
          }
          dVar22 = in_xd12;
          if (cVar34 == '\0') {
            dVar22 = (double)CONCAT44(SUB84(dVar30,0),fVar20);
          }
          if (cVar33 == '\0') {
            fVar20 = ((float)((ulonglong)dVar22 >> 0x20) - SUB84(dVar26,0)) * SUB84(in_dr0,0);
            in_dr2 = (double)CONCAT44(fVar20,SUB84(dVar22,0) - fVar20);
          }
          else {
            in_dr2 = (dVar22 - dVar26) * in_dr0;
            in_dr2 = in_dr2 - in_dr2;
          }
          in_dr4 = in_xd2;
          if (cVar34 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),SUB84(dVar26,0));
          }
          if (cVar33 == '\0') {
            in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(in_dr14,0),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * in_dr14;
          }
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
          if (cVar33 == '\0') {
            bVar32 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar32 = in_dr2 < in_dr4;
          }
          if ((bVar32) && (uVar4 != 0)) {
            if (cVar33 == '\0') {
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
          if (cVar34 == '\0') {
            fVar17 = *(float *)(pdVar10 + 2);
            fVar15 = *(float *)((int)pdVar10 + 0x14);
            dVar16 = (double)CONCAT44(fVar17,fVar15);
            fVar20 = *(float *)(pdVar10 + 3);
            dVar22 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 2),
                                      *(undefined4 *)((int)pdVar9 + 0x14));
            dVar26 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 3),SUB84(in_dr6,0));
            in_dr10 = (double)CONCAT44(fVar20,SUB84(in_dr10,0));
            dVar18 = (double)CONCAT44(fVar20,SUB84(in_dr2,0));
          }
          else {
            dVar16 = pdVar10[2];
            in_dr10 = pdVar10[4];
            dVar22 = pdVar9[2];
            dVar26 = pdVar9[4];
            fVar17 = (float)((ulonglong)dVar16 >> 0x20);
            fVar15 = SUB84(dVar16,0);
            fVar20 = (float)((ulonglong)in_dr10 >> 0x20);
            dVar18 = in_dr10;
          }
          fVar27 = (float)((ulonglong)dVar26 >> 0x20);
          fVar23 = (float)((ulonglong)dVar22 >> 0x20);
          if (cVar33 == '\0') {
            fVar29 = (float)((ulonglong)in_dr10 >> 0x20) * fVar23;
            in_dr10 = (double)CONCAT44(fVar29,SUB84(in_dr10,0));
            dVar18 = (double)((ulonglong)(uint)(fVar20 * SUB84(dVar22,0) - SUB84(dVar16,0) * fVar27)
                             << 0x20);
            dVar28 = (double)CONCAT44(fVar17 * fVar27 - fVar29,
                                      fVar15 * fVar23 -
                                      (float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar22,0));
          }
          else {
            in_dr10 = in_dr10 * dVar22;
            dVar28 = dVar16 * dVar26 * dVar22;
            dVar18 = dVar18 * dVar22 - dVar28;
            dVar28 = (dVar16 * dVar26 * dVar22 - in_dr10) - dVar28;
          }
          if (cVar34 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 2),SUB84(dVar26,0));
            dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),
                                      *(undefined4 *)(pdVar11 + 3));
          }
          else {
            in_dr6 = pdVar11[2];
            dVar26 = pdVar11[3];
          }
          uVar19 = (ulonglong)dVar18 & 0xffffffff00000000;
                    
          if (cVar33 == '\0') {
            fVar20 = SUB84(dVar28,0) * SUB84(dVar26,0) +
                     (float)((ulonglong)dVar28 >> 0x20) * (float)((ulonglong)dVar26 >> 0x20) +
                     SUB84(in_dr6,0) * 0.0 +
                     (float)(uVar19 >> 0x20) * (float)((ulonglong)in_dr6 >> 0x20);
          }
          dVar22 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar34 == '\0') {
            dVar22 = (double)CONCAT44((int)uVar19,SUB84(dVar26,0));
            in_dr0 = (double)CONCAT44((int)uVar19,SUB84(dVar28,0));
          }
          if (cVar33 == '\0') {
            dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(in_dr14,0),
                                      SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 * in_dr14;
          }
          in_dr2 = (double)(uVar19 & 0xffffffff00000000);
          if (cVar33 == '\0') {
            bVar32 = 0.0 < (float)((ulonglong)dVar22 >> 0x20);
          }
          else {
            bVar32 = in_dr2 < dVar22;
          }
          if (bVar32) {
            in_dr4 = dVar22;
            if (uVar4 != 0) {
              ar7_00 = uVar4;
              uStack_34 = uVar4;
            }
          }
          else {
            uStack_34 = 1;
            in_dr4 = dVar30;
            if (cVar34 == '\0') {
              in_dr4 = (double)CONCAT44(uVar3,SUB84(dVar22,0));
            }
          }
        }
      }
      uVar3 = SUB84(in_dr6,0);
      uVar21 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar20 = (float)((ulonglong)in_dr4 >> 0x20);
      if (pdVar8 < unaff_r8) {
        dVar26 = (double)((ulonglong)uVar21 << 0x20);
        if (cVar33 == '\0') {
          bVar32 = fVar20 < 0.0;
        }
        else {
          bVar32 = in_dr4 < dVar26;
        }
        if (bVar32) {
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)((int)pdVar10 + 0x3c) = ar5 | ar7_00;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,ar7_00);
            if (cVar34 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar6 = (double *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar6 = (double *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar26 = _DAT_8c4c2628;
            }
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar26 >> 0x20);
              pdVar7 = (double *)((int)pdVar6 + 4);
              dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar6);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar26;
              in_xd2 = *pdVar6;
              pdVar7 = pdVar6 + 1;
              dVar26 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar26 >> 0x20);
              dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar7);
            }
            else {
              pdVar10[5] = dVar26;
              dVar26 = *pdVar5;
              in_xd2 = *pdVar7;
            }
            pdVar6 = (double *)((int)pdVar10 + 0x2c);
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)dVar26 >> 0x20);
            }
            else {
              *pdVar6 = dVar26;
            }
            CacheBlockWriteBack(pdVar6);
          }
          goto LAB_8c2445d0;
        }
        *(undefined4 *)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | ar7_00)) {
          *(uint *)((int)pdVar10 + 0x3c) = ar5 | ar7_00;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,ar7_00);
          if (cVar34 == '\0') {
            *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
            pdVar8 = (double *)&DAT_8c4c2638;
            pdVar6 = (double *)&DAT_8c4c2628;
            dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            pdVar8 = (double *)&DAT_8c4c263c;
            pdVar6 = (double *)&DAT_8c4c2630;
            dVar26 = _DAT_8c4c2628;
          }
          if (cVar33 == '\0') {
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                      SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + dVar26;
          }
          if (cVar34 == '\0') {
            *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar26 >> 0x20);
            pdVar5 = (double *)((int)pdVar8 + 4);
            dVar26 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar8);
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          else {
            *(double *)((int)pdVar10 + 0x24) = dVar26;
            in_xd2 = *pdVar8;
            pdVar5 = pdVar8 + 1;
            dVar26 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar33 == '\0') {
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                      SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + dVar26;
          }
          if (cVar34 == '\0') {
            *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar26 >> 0x20);
            dVar26 = (double)CONCAT44(*(undefined4 *)pdVar6,*(undefined4 *)pdVar5);
          }
          else {
            pdVar10[5] = dVar26;
            dVar26 = *pdVar6;
            in_xd2 = *pdVar5;
          }
          pdVar8 = (double *)((int)pdVar10 + 0x2c);
          if (cVar33 == '\0') {
            dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                      SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + dVar26;
          }
          if (cVar34 == '\0') {
            *(int *)pdVar8 = (int)((ulonglong)dVar26 >> 0x20);
          }
          else {
            *pdVar8 = dVar26;
          }
          CacheBlockWriteBack(pdVar8);
        }
        if (cVar34 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar26,0));
          pdVar8 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          in_dr2 = pdVar10[1];
          pdVar8 = pdVar10 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(pdVar8 + 2);
          in_dr4 = (double)CONCAT44(uVar24,SUB84(in_dr4,0));
          dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar3);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar24;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar8[2];
          dVar26 = pdVar8[3];
          unaff_r8[3] = dVar26;
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        uVar3 = SUB84(dVar26,0);
        unaff_r8 = unaff_r8 + 4;
        pdVar8 = unaff_r8;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar21 << 0x20);
        if (cVar33 == '\0') {
          bVar32 = fVar20 < 0.0;
        }
        else {
          bVar32 = in_dr4 < in_dr2;
        }
        if (bVar32) {
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          if (*(uint *)((int)pdVar9 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)((int)pdVar9 + 0x3c) = ar5 | ar7_00;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar9 + 2,pdVar9 + 6,ar7_00);
            if (cVar34 == '\0') {
              *(undefined4 *)(pdVar9 + 4) = _DAT_8c4c2620;
              pdVar6 = (double *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar9[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar6 = (double *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar26 = _DAT_8c4c2628;
            }
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)((int)pdVar9 + 0x24) = (int)((ulonglong)dVar26 >> 0x20);
              pdVar7 = (double *)((int)pdVar6 + 4);
              dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar6);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar9 + 0x24) = dVar26;
              in_xd2 = *pdVar6;
              pdVar7 = pdVar6 + 1;
              dVar26 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)(pdVar9 + 5) = (int)((ulonglong)dVar26 >> 0x20);
              in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar7);
            }
            else {
              pdVar9[5] = dVar26;
              in_dr2 = *pdVar5;
              in_xd2 = *pdVar7;
            }
            pdVar6 = (double *)((int)pdVar9 + 0x2c);
            if (cVar33 == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0),
                                        SUB84(in_dr2,0));
            }
            else {
              in_dr2 = in_dr2 + in_dr2;
            }
            if (cVar34 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar6 = in_dr2;
            }
            CacheBlockWriteBack(pdVar6);
          }
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
            dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr2,0));
            pdVar6 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            dVar26 = pdVar9[1];
            pdVar6 = pdVar9 + 2;
          }
          if (cVar34 == '\0') {
            uVar24 = *(undefined4 *)(pdVar6 + 2);
            in_dr4 = (double)CONCAT44(uVar24,SUB84(in_dr4,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),uVar3);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar24;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar26 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            dVar22 = pdVar6[3];
            unaff_r8[3] = dVar22;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = dVar26;
            *unaff_r8 = in_dr0;
          }
          uVar3 = SUB84(dVar22,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)((int)pdVar10 + 0x3c) != (ar5 | ar7_00)) {
            *(uint *)((int)pdVar10 + 0x3c) = ar5 | ar7_00;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar10 + 2,pdVar10 + 6,ar7_00);
            if (cVar34 == '\0') {
              *(undefined4 *)(pdVar10 + 4) = _DAT_8c4c2620;
              pdVar6 = (double *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar10[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              pdVar6 = (double *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar26 = _DAT_8c4c2628;
            }
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)((int)pdVar10 + 0x24) = (int)((ulonglong)dVar26 >> 0x20);
              pdVar7 = (double *)((int)pdVar6 + 4);
              dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar6);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar10 + 0x24) = dVar26;
              in_xd2 = *pdVar6;
              pdVar7 = pdVar6 + 1;
              dVar26 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)(pdVar10 + 5) = (int)((ulonglong)dVar26 >> 0x20);
              dVar26 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar7);
            }
            else {
              pdVar10[5] = dVar26;
              dVar26 = *pdVar5;
              in_xd2 = *pdVar7;
            }
            pdVar6 = (double *)((int)pdVar10 + 0x2c);
            if (cVar33 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)dVar26 >> 0x20);
            }
            else {
              *pdVar6 = dVar26;
            }
            CacheBlockWriteBack(pdVar6);
          }
LAB_8c2445d0:
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),SUB84(dVar26,0));
            pdVar6 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            in_dr2 = pdVar10[1];
            pdVar6 = pdVar10 + 2;
          }
          if (cVar34 == '\0') {
            uVar24 = *(undefined4 *)(pdVar6 + 2);
            in_dr4 = (double)CONCAT44(uVar24,SUB84(in_dr4,0));
            dVar26 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),uVar3);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar24;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            dVar26 = pdVar6[3];
            unaff_r8[3] = dVar26;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar3 = SUB84(dVar26,0);
          unaff_r8 = unaff_r8 + 4;
        }
      }
      if (uStack_34 != 0) {
        FUN_8c23e7a8(pdVar9,pdVar10,pdVar11,ar5 | ar7_00);
        pdVar8 = unaff_r8;
      }
      if (cVar34 == '\0') {
        uVar31 = CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr14,0));
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar3);
      }
      else {
        uVar31 = *(undefined8 *)((int)pdVar11 + 4);
        in_dr6 = in_dr14;
      }
      uVar3 = 8;
      if (cVar34 == '\0') {
        in_dr4 = (double)((ulonglong)dVar30 & 0xffffffff);
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar11 + 1));
      }
      else {
        in_xd12 = pdVar11[1];
      }
      uVar24 = SUB84(in_dr4,0);
      uStack_44 = uStack_44 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)uVar31 >> 0x20),-(float)uVar31);
      pdVar9 = pdVar10;
      pdVar10 = pdVar11;
    } while (uStack_44 != 0);
    if (pdVar8 < unaff_r8) {
      *(undefined4 *)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      if (*(uint *)((int)pdVar11 + 0x3c) != (ar5 | ar7_00)) {
        *(uint *)((int)pdVar11 + 0x3c) = ar5 | ar7_00;
        uVar3 = FUN_8c23bae2(&DAT_8c4c2620,pdVar11 + 2,pdVar11 + 6,ar7_00);
        if (cVar34 == '\0') {
          *(undefined4 *)(pdVar11 + 4) = _DAT_8c4c2620;
          pdVar8 = (double *)&DAT_8c4c2638;
          pdVar9 = (double *)&DAT_8c4c2628;
          dVar26 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          pdVar11[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          pdVar8 = (double *)&DAT_8c4c263c;
          pdVar9 = (double *)&DAT_8c4c2630;
          dVar26 = _DAT_8c4c2628;
        }
        if (cVar33 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar34 == '\0') {
          *(int *)((int)pdVar11 + 0x24) = (int)((ulonglong)dVar26 >> 0x20);
          pdVar10 = (double *)((int)pdVar8 + 4);
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar9,*(undefined4 *)pdVar8);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        else {
          *(double *)((int)pdVar11 + 0x24) = dVar26;
          in_xd2 = *pdVar8;
          pdVar10 = pdVar8 + 1;
          dVar26 = *pdVar9;
          pdVar9 = pdVar9 + 1;
        }
        if (cVar33 == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + SUB84(dVar26,0),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 + dVar26;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar11 + 5) = (int)((ulonglong)dVar26 >> 0x20);
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar9,*(undefined4 *)pdVar10);
        }
        else {
          pdVar11[5] = dVar26;
          in_dr2 = *pdVar9;
          in_xd2 = *pdVar10;
        }
        pdVar8 = (double *)((int)pdVar11 + 0x2c);
        if (cVar33 == '\0') {
          in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + in_dr2;
        }
        if (cVar34 == '\0') {
          *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *pdVar8 = in_dr2;
        }
        CacheBlockWriteBack(pdVar8);
      }
      if (cVar34 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(in_dr2,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar34 == '\0') {
        uVar25 = *(undefined4 *)(pdVar11 + 2);
        in_dr4 = (double)CONCAT44(uVar25,uVar24);
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar25;
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

__asm__(".globl _FUN_8c244262\n.set _FUN_8c244262, _FUN_8c244262_def\n");
