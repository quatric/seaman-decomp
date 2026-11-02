#include "../decls.h"
uint FUN_8c2485bc_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  double *pdVar4;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar5;
  ushort *puVar6;
  int iVar7;
  uint *ar4_00;
  double *pdVar8;
  ushort uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  double *unaff_r8;
  double *pdVar15;
  uint uVar16;
  uint *ar6_00;
  double *pdVar17;
  uint uVar18;
  uint *ar5_00;
  ushort *puVar19;
  ushort *puVar20;
  double in_dr0;
  float fVar21;
  float fVar22;
  double in_dr2;
  double dVar23;
  double in_dr4;
  double dVar24;
  float fVar26;
  double dVar25;
  undefined4 uVar28;
  double in_dr6;
  double dVar29;
  double in_dr8;
  undefined4 uVar31;
  double dVar30;
  double in_dr12;
  double dVar33;
  double in_xd0;
  double in_xd4;
  double in_xd8;
  bool bVar34;
  char cVar35;
  char cVar36;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_28;
  undefined4 uVar27;
  undefined4 uVar32;
  
  cVar36 = '\0';
  cVar35 = '\0';
  uVar9 = *ar4;
  uVar2 = uVar9 & 0x3fff;
  uVar3 = uVar9 & 0xc000;
  puVar19 = *(ushort **)(ar4 + 2);
  if ((uVar9 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    iStack_30 = 0;
    while( true ) {
      uVar32 = SUB84(in_dr6,0);
      uVar27 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_30) break;
      puVar6 = puVar19 + 1;
      pdVar4 = (double *)((uint)*puVar19 * 0x40 + _DAT_8c4aa510);
      puVar20 = puVar19 + 2;
      puVar19 = puVar19 + 3;
      pdVar15 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
      pdVar5 = (double *)((uint)*puVar6 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar4 & *(uint *)pdVar5 & *(uint *)pdVar15 & 0x3f) == 0) {
        if (((*(uint *)pdVar4 | *(uint *)pdVar5 | *(uint *)pdVar15) & 1) == 0) {
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)((int)pdVar5 + 4);
            dVar30 = (double)CONCAT44(uVar27,*(undefined4 *)((int)pdVar4 + 4));
          }
          else {
            dVar30 = *(double *)((int)pdVar5 + 4);
            in_xd4 = dVar30;
          }
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar15 + 1))
            ;
            dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),uVar27);
          }
          else {
            dVar24 = pdVar5[1];
          }
          fVar26 = (float)((ulonglong)dVar24 >> 0x20);
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) - fVar26);
          }
          else {
            dVar30 = dVar30 - dVar24;
          }
          dVar25 = dVar24;
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar25 = in_xd0;
          }
          in_xd0 = dVar25;
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar4 + 1));
          }
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar30,0));
          }
          else {
            dVar25 = in_dr0 - dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      *(undefined4 *)((int)pdVar15 + 4));
          }
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) - SUB84(dVar24,0));
          }
          else {
            dVar30 = dVar30 - dVar24;
          }
          uVar3 = (uint)((ulonglong)dVar30 >> 0x20);
          dVar29 = dVar30;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(uVar3,SUB84(dVar24,0));
          }
          if (cVar35 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                      SUB84(dVar25,0) * SUB84(dVar30,0));
          }
          else {
            in_dr0 = dVar25 * dVar30;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar35 == '\0') {
            fVar26 = (float)((ulonglong)dVar29 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar29,0));
            bVar34 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar34 = in_dr2 < in_dr4;
          }
          uVar27 = SUB84(in_dr4,0);
          uStack_40 = 0;
          if (bVar34) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c2488be;
            uStack_40 = 0x8000;
          }
          *(undefined4 *)pdVar4 = 0xe0000000;
          CacheBlockWriteBack(pdVar4);
          if (*(uint *)((int)pdVar4 + 0x3c) != (uStack_40 | uVar2)) {
            *(uint *)((int)pdVar4 + 0x3c) = uStack_40 | uVar2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uStack_40);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
              pdVar17 = (double *)&DAT_8c4c2628;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              dVar30 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              pdVar17 = (double *)&DAT_8c4c2630;
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              dVar30 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                        SUB84(dVar30,0));
            }
            else {
              dVar30 = dVar30 + dVar30;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar30 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar30 = (double)CONCAT44(*(undefined4 *)pdVar17,*puVar11);
              pdVar17 = (double *)((int)pdVar17 + 4);
            }
            else {
              *(double *)((int)pdVar4 + 0x24) = dVar30;
              puVar10 = puVar11 + 2;
              dVar30 = *pdVar17;
              pdVar17 = pdVar17 + 1;
            }
            if (cVar35 == '\0') {
              dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                        SUB84(dVar30,0));
            }
            else {
              dVar30 = dVar30 + dVar30;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar30 >> 0x20);
              dVar30 = (double)CONCAT44(*(undefined4 *)pdVar17,*puVar10);
            }
            else {
              pdVar4[5] = dVar30;
              dVar30 = *pdVar17;
            }
            pdVar17 = (double *)((int)pdVar4 + 0x2c);
            if (cVar35 == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                        SUB84(dVar30,0));
            }
            else {
              in_dr2 = dVar30 + dVar30;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar17 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar17 = in_dr2;
            }
            CacheBlockWriteBack(pdVar17);
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(in_dr0,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(in_dr2,0));
            pdVar4 = pdVar4 + 1;
          }
          else {
            dVar30 = *pdVar4;
            dVar24 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar36 == '\0') {
            uVar28 = *(undefined4 *)(pdVar4 + 2);
            dVar29 = (double)CONCAT44(uVar28,uVar27);
            dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),uVar32);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar28;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar24 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar29 = pdVar4[2];
            dVar25 = pdVar4[3];
            unaff_r8[3] = dVar25;
            unaff_r8[2] = dVar29;
            unaff_r8[1] = dVar24;
            *unaff_r8 = dVar30;
          }
          uVar27 = SUB84(dVar25,0);
          uVar32 = SUB84(dVar29,0);
          *(undefined4 *)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (*(uint *)((int)pdVar5 + 0x3c) != (uStack_40 | uVar2)) {
            *(uint *)((int)pdVar5 + 0x3c) = uStack_40 | uVar2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar5 + 2,pdVar5 + 6,uStack_40);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c2620;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              pdVar4 = (double *)&DAT_8c4c2628;
              dVar24 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar5[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              pdVar4 = (double *)&DAT_8c4c2630;
              dVar24 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar5 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar4,*puVar11);
              pdVar4 = (double *)((int)pdVar4 + 4);
            }
            else {
              *(double *)((int)pdVar5 + 0x24) = dVar24;
              puVar10 = puVar11 + 2;
              dVar24 = *pdVar4;
              pdVar4 = pdVar4 + 1;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar5 + 5) = (int)((ulonglong)dVar24 >> 0x20);
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar4,*puVar10);
            }
            else {
              pdVar5[5] = dVar24;
              dVar24 = *pdVar4;
            }
            pdVar4 = (double *)((int)pdVar5 + 0x2c);
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar4 = (int)((ulonglong)dVar24 >> 0x20);
            }
            else {
              *pdVar4 = dVar24;
            }
            CacheBlockWriteBack(pdVar4);
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar30,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(dVar24,0));
            pdVar5 = pdVar5 + 1;
          }
          else {
            dVar30 = *pdVar5;
            dVar24 = pdVar5[1];
            pdVar5 = pdVar5 + 2;
          }
          if (cVar36 == '\0') {
            uVar28 = *(undefined4 *)(pdVar5 + 2);
            dVar29 = (double)CONCAT44(uVar28,uVar32);
            dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 0x14),uVar27);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar5 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar28;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar24 >> 0x20);
            pdVar4 = unaff_r8 + 6;
            *(int *)pdVar4 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar29 = pdVar5[2];
            dVar25 = pdVar5[3];
            unaff_r8[7] = dVar25;
            unaff_r8[6] = dVar29;
            unaff_r8[5] = dVar24;
            pdVar4 = unaff_r8 + 4;
            *pdVar4 = dVar30;
          }
          uVar27 = SUB84(dVar25,0);
          uVar32 = SUB84(dVar29,0);
          *(undefined4 *)pdVar15 = 0xf0000000;
          CacheBlockWriteBack(pdVar15);
          if (*(uint *)((int)pdVar15 + 0x3c) != (uStack_40 | uVar2)) {
            *(uint *)((int)pdVar15 + 0x3c) = uStack_40 | uVar2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar15 + 2,pdVar15 + 6,uStack_40);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar15 + 4) = _DAT_8c4c2620;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar24 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar15[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar24 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar15 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar11);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar15 + 0x24) = dVar24;
              puVar10 = puVar11 + 2;
              dVar24 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar15 + 5) = (int)((ulonglong)dVar24 >> 0x20);
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
            }
            else {
              pdVar15[5] = dVar24;
              dVar24 = *pdVar5;
            }
            pdVar5 = (double *)((int)pdVar15 + 0x2c);
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar5 = (int)((ulonglong)dVar24 >> 0x20);
            }
            else {
              *pdVar5 = dVar24;
            }
            CacheBlockWriteBack(pdVar5);
          }
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar30,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),SUB84(dVar24,0));
            pdVar15 = pdVar15 + 1;
          }
          else {
            in_dr0 = *pdVar15;
            in_dr2 = pdVar15[1];
            pdVar15 = pdVar15 + 2;
          }
          if (cVar36 == '\0') {
            uVar28 = *(undefined4 *)(pdVar15 + 2);
            in_dr4 = (double)CONCAT44(uVar28,uVar32);
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 0x14),uVar27);
            *(undefined4 *)((int)pdVar4 + 0x3c) = *(undefined4 *)((int)pdVar15 + 0x14);
            *(undefined4 *)(pdVar4 + 7) = uVar28;
            *(int *)((int)pdVar4 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar4 = pdVar4 + 6;
            *(int *)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar15[2];
            in_dr6 = pdVar15[3];
            pdVar4[7] = in_dr6;
            pdVar4[6] = in_dr4;
            pdVar4[5] = in_dr2;
            pdVar4 = pdVar4 + 4;
            *pdVar4 = in_dr0;
          }
          unaff_r8 = pdVar4 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
        }
        else {
          if (cVar36 == '\0') {
            uVar28 = *(undefined4 *)(pdVar5 + 3);
            uVar31 = *(undefined4 *)((int)pdVar5 + 0x14);
            dVar24 = (double)CONCAT44(uVar31,uVar28);
            dVar30 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),uVar27);
            in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 3),uVar32);
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar31);
            dVar25 = (double)CONCAT44(uVar28,SUB84(in_dr0,0));
          }
          else {
            dVar25 = pdVar5[3];
            dVar24 = *(double *)((int)pdVar5 + 0x14);
            dVar30 = *(double *)((int)pdVar4 + 0x14);
            in_dr6 = pdVar4[3];
            uVar31 = (undefined4)((ulonglong)dVar24 >> 0x20);
            uVar28 = SUB84(dVar24,0);
            in_xd8 = dVar25;
          }
          fVar22 = (float)((ulonglong)in_dr6 >> 0x20);
          fVar26 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar35 == '\0') {
            fVar21 = SUB84(in_dr2,0) * fVar22;
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar26,SUB84(dVar25,0));
          }
          else {
            fVar21 = SUB84(in_dr2 * in_dr6,0);
            dVar25 = dVar25 * dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(fVar26,*(undefined4 *)(pdVar5 + 2));
            in_dr6 = (double)CONCAT44(fVar22,*(undefined4 *)(pdVar4 + 2));
            dVar29 = (double)CONCAT44(uVar28,fVar21);
          }
          else {
            in_xd4 = pdVar5[2];
            dVar29 = in_xd8;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(in_dr6,0),
                                      SUB84(dVar29,0));
          }
          else {
            dVar29 = dVar29 * in_dr6;
          }
          uVar27 = SUB84(dVar30,0);
          dVar23 = in_xd4;
          if (cVar36 == '\0') {
            dVar23 = (double)CONCAT44(uVar27,SUB84(in_dr12,0));
          }
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar29,0),
                                      SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 - dVar29;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar27);
          }
          if (cVar35 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      SUB84(dVar29,0) * (float)((ulonglong)in_dr6 >> 0x20));
          }
          else {
            dVar29 = dVar29 * in_dr6;
          }
          if (cVar36 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),uVar31);
            dVar24 = in_xd0;
          }
          in_xd0 = dVar24;
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                      SUB84(dVar25,0) * SUB84(in_dr6,0));
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) *
                                       (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar23,0));
            fVar26 = SUB84(dVar29,0) - (float)((ulonglong)dVar29 >> 0x20);
          }
          else {
            dVar25 = dVar25 * in_dr6;
            in_dr12 = dVar23 * dVar30;
            fVar26 = SUB84(dVar29 - dVar29,0);
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 0x14),fVar26);
          }
          else {
            dVar30 = *(double *)((int)pdVar15 + 0x14);
          }
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                      SUB84(dVar25,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar25 = dVar25 - in_dr12;
            dVar30 = dVar30 * dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar15 + 2))
            ;
          }
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar30,0) +
                                      (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0));
          }
          in_dr0 = in_xd0;
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar15 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar25,0),SUB84(dVar25,0));
          }
          if (cVar35 == '\0') {
            dVar30 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar30,0) +
                                    (float)((ulonglong)dVar30 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar30 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar36 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uVar27);
          }
          if (cVar35 == '\0') {
            bVar34 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar34 = in_dr2 < in_dr4;
          }
          uStack_40 = 0;
          if (bVar34) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c2488be;
            uStack_40 = 0x8000;
          }
          FUN_8c23e7a8(pdVar4,pdVar5,pdVar15,uStack_40 | (int)(short)uVar2);
        }
      }
LAB_8c2488be:
      iStack_30 = iStack_30 + 1;
    }
  }
  else if (uVar3 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_28 = 0;
    while( true ) {
      uVar27 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_28) break;
      pdVar5 = (double *)((uint)*puVar19 * 0x40 + _DAT_8c4aa510);
      puVar6 = puVar19 + 3;
      pdVar15 = (double *)((uint)puVar19[1] * 0x40 + _DAT_8c4aa510);
      pdVar17 = (double *)((uint)puVar19[2] * 0x40 + _DAT_8c4aa510);
      puVar19 = puVar19 + 4;
      pdVar4 = (double *)((uint)*puVar6 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar5 & *(uint *)pdVar15 & *(uint *)pdVar17 & *(uint *)pdVar4 & 0x3f) == 0) {
        if (((*(uint *)pdVar5 | *(uint *)pdVar15 | *(uint *)pdVar17 | *(uint *)pdVar4) & 1) == 0) {
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)((int)pdVar15 + 4);
            dVar30 = (double)CONCAT44(uVar27,*(undefined4 *)((int)pdVar5 + 4));
          }
          else {
            dVar30 = *(double *)((int)pdVar15 + 4);
          }
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar17 + 1))
            ;
            dVar24 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 1),uVar27);
          }
          else {
            dVar24 = pdVar15[1];
          }
          fVar26 = (float)((ulonglong)dVar24 >> 0x20);
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) - fVar26);
          }
          else {
            dVar30 = dVar30 - dVar24;
          }
          dVar25 = dVar24;
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar25 = in_xd0;
          }
          in_xd0 = dVar25;
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar5 + 1));
          }
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar30,0));
          }
          else {
            dVar25 = in_dr0 - dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      *(undefined4 *)((int)pdVar17 + 4));
          }
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) - SUB84(dVar24,0));
          }
          else {
            dVar30 = dVar30 - dVar24;
          }
          uVar3 = (uint)((ulonglong)dVar30 >> 0x20);
          dVar29 = dVar30;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(uVar3,SUB84(dVar24,0));
          }
          if (cVar35 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                      SUB84(dVar25,0) * SUB84(dVar30,0));
          }
          else {
            in_dr0 = dVar25 * dVar30;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar35 == '\0') {
            fVar26 = (float)((ulonglong)dVar29 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar29,0));
            bVar34 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar34 = in_dr2 < in_dr4;
          }
          uVar27 = SUB84(in_dr4,0);
          uStack_3c = 0;
          if (bVar34) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c248c90;
            uStack_3c = 0x8000;
          }
          *(undefined4 *)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (*(uint *)((int)pdVar5 + 0x3c) != (uStack_3c | uVar2)) {
            *(uint *)((int)pdVar5 + 0x3c) = uStack_3c | uVar2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar5 + 2,pdVar5 + 6,uStack_3c);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c2620;
              pdVar8 = (double *)&DAT_8c4c2628;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              dVar30 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar5[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              pdVar8 = (double *)&DAT_8c4c2630;
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              dVar30 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                        SUB84(dVar30,0));
            }
            else {
              dVar30 = dVar30 + dVar30;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar5 + 0x24) = (int)((ulonglong)dVar30 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar30 = (double)CONCAT44(*(undefined4 *)pdVar8,*puVar11);
              pdVar8 = (double *)((int)pdVar8 + 4);
            }
            else {
              *(double *)((int)pdVar5 + 0x24) = dVar30;
              puVar10 = puVar11 + 2;
              dVar30 = *pdVar8;
              pdVar8 = pdVar8 + 1;
            }
            if (cVar35 == '\0') {
              dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                        SUB84(dVar30,0));
            }
            else {
              dVar30 = dVar30 + dVar30;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar5 + 5) = (int)((ulonglong)dVar30 >> 0x20);
              dVar30 = (double)CONCAT44(*(undefined4 *)pdVar8,*puVar10);
            }
            else {
              pdVar5[5] = dVar30;
              dVar30 = *pdVar8;
            }
            pdVar8 = (double *)((int)pdVar5 + 0x2c);
            if (cVar35 == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                        SUB84(dVar30,0));
            }
            else {
              in_dr2 = dVar30 + dVar30;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar8 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar8 = in_dr2;
            }
            CacheBlockWriteBack(pdVar8);
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr0,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(in_dr2,0));
            pdVar5 = pdVar5 + 1;
          }
          else {
            dVar30 = *pdVar5;
            dVar24 = pdVar5[1];
            pdVar5 = pdVar5 + 2;
          }
          if (cVar36 == '\0') {
            uVar32 = *(undefined4 *)(pdVar5 + 2);
            dVar25 = (double)CONCAT44(uVar32,uVar27);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar5 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar32;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar24 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar25 = pdVar5[2];
            unaff_r8[3] = pdVar5[3];
            unaff_r8[2] = dVar25;
            unaff_r8[1] = dVar24;
            *unaff_r8 = dVar30;
          }
          uVar27 = SUB84(dVar25,0);
          *(undefined4 *)pdVar15 = 0xe0000000;
          CacheBlockWriteBack(pdVar15);
          if (*(uint *)((int)pdVar15 + 0x3c) != (uStack_3c | uVar2)) {
            *(uint *)((int)pdVar15 + 0x3c) = uStack_3c | uVar2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar15 + 2,pdVar15 + 6,uStack_3c);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar15 + 4) = _DAT_8c4c2620;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar24 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar15[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar24 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar15 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar11);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar15 + 0x24) = dVar24;
              puVar10 = puVar11 + 2;
              dVar24 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar15 + 5) = (int)((ulonglong)dVar24 >> 0x20);
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
            }
            else {
              pdVar15[5] = dVar24;
              dVar24 = *pdVar5;
            }
            pdVar5 = (double *)((int)pdVar15 + 0x2c);
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar5 = (int)((ulonglong)dVar24 >> 0x20);
            }
            else {
              *pdVar5 = dVar24;
            }
            CacheBlockWriteBack(pdVar5);
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar30,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),SUB84(dVar24,0));
            pdVar15 = pdVar15 + 1;
          }
          else {
            dVar30 = *pdVar15;
            dVar24 = pdVar15[1];
            pdVar15 = pdVar15 + 2;
          }
          if (cVar36 == '\0') {
            uVar32 = *(undefined4 *)(pdVar15 + 2);
            dVar25 = (double)CONCAT44(uVar32,uVar27);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar15 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar32;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar24 >> 0x20);
            pdVar5 = unaff_r8 + 6;
            *(int *)pdVar5 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar25 = pdVar15[2];
            unaff_r8[7] = pdVar15[3];
            unaff_r8[6] = dVar25;
            unaff_r8[5] = dVar24;
            pdVar5 = unaff_r8 + 4;
            *pdVar5 = dVar30;
          }
          uVar27 = SUB84(dVar25,0);
          *(undefined4 *)pdVar17 = 0xe0000000;
          CacheBlockWriteBack(pdVar17);
          if (*(uint *)((int)pdVar17 + 0x3c) != (uStack_3c | uVar2)) {
            *(uint *)((int)pdVar17 + 0x3c) = uStack_3c | uVar2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar17 + 2,pdVar17 + 6,uStack_3c);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar17 + 4) = _DAT_8c4c2620;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              pdVar15 = (double *)&DAT_8c4c2628;
              dVar24 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar17[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              pdVar15 = (double *)&DAT_8c4c2630;
              dVar24 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar17 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar15,*puVar11);
              pdVar15 = (double *)((int)pdVar15 + 4);
            }
            else {
              *(double *)((int)pdVar17 + 0x24) = dVar24;
              puVar10 = puVar11 + 2;
              dVar24 = *pdVar15;
              pdVar15 = pdVar15 + 1;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar17 + 5) = (int)((ulonglong)dVar24 >> 0x20);
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar15,*puVar10);
            }
            else {
              pdVar17[5] = dVar24;
              dVar24 = *pdVar15;
            }
            pdVar15 = (double *)((int)pdVar17 + 0x2c);
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar15 = (int)((ulonglong)dVar24 >> 0x20);
            }
            else {
              *pdVar15 = dVar24;
            }
            CacheBlockWriteBack(pdVar15);
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar17,SUB84(dVar30,0));
            dVar24 = (double)CONCAT44(*(undefined4 *)((int)pdVar17 + 4),SUB84(dVar24,0));
            pdVar17 = pdVar17 + 1;
          }
          else {
            dVar30 = *pdVar17;
            dVar24 = pdVar17[1];
            pdVar17 = pdVar17 + 2;
          }
          if (cVar36 == '\0') {
            uVar32 = *(undefined4 *)(pdVar17 + 2);
            dVar25 = (double)CONCAT44(uVar32,uVar27);
            *(undefined4 *)((int)pdVar5 + 0x3c) = *(undefined4 *)((int)pdVar17 + 0x14);
            *(undefined4 *)(pdVar5 + 7) = uVar32;
            *(int *)((int)pdVar5 + 0x34) = (int)((ulonglong)dVar24 >> 0x20);
            pdVar5 = pdVar5 + 6;
            *(int *)pdVar5 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar25 = pdVar17[2];
            pdVar5[7] = pdVar17[3];
            pdVar5[6] = dVar25;
            pdVar5[5] = dVar24;
            pdVar5 = pdVar5 + 4;
            *pdVar5 = dVar30;
          }
          uVar27 = SUB84(dVar25,0);
          *(undefined4 *)pdVar4 = 0xf0000000;
          CacheBlockWriteBack(pdVar4);
          if (*(uint *)((int)pdVar4 + 0x3c) != (uStack_3c | uVar2)) {
            *(uint *)((int)pdVar4 + 0x3c) = uStack_3c | uVar2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uStack_3c);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              pdVar15 = (double *)&DAT_8c4c2628;
              dVar24 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              pdVar15 = (double *)&DAT_8c4c2630;
              dVar24 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar15,*puVar11);
              pdVar15 = (double *)((int)pdVar15 + 4);
            }
            else {
              *(double *)((int)pdVar4 + 0x24) = dVar24;
              puVar10 = puVar11 + 2;
              dVar24 = *pdVar15;
              pdVar15 = pdVar15 + 1;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar24 >> 0x20);
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar15,*puVar10);
            }
            else {
              pdVar4[5] = dVar24;
              dVar24 = *pdVar15;
            }
            pdVar15 = (double *)((int)pdVar4 + 0x2c);
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar15 = (int)((ulonglong)dVar24 >> 0x20);
            }
            else {
              *pdVar15 = dVar24;
            }
            CacheBlockWriteBack(pdVar15);
          }
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar30,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(dVar24,0));
            pdVar4 = pdVar4 + 1;
          }
          else {
            in_dr0 = *pdVar4;
            in_dr2 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar36 == '\0') {
            uVar32 = *(undefined4 *)(pdVar4 + 2);
            in_dr4 = (double)CONCAT44(uVar32,uVar27);
            *(undefined4 *)((int)pdVar5 + 0x3c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(pdVar5 + 7) = uVar32;
            *(int *)((int)pdVar5 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar5 = pdVar5 + 6;
            *(int *)pdVar5 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar4[2];
            pdVar5[7] = pdVar4[3];
            pdVar5[6] = in_dr4;
            pdVar5[5] = in_dr2;
            pdVar5 = pdVar5 + 4;
            *pdVar5 = in_dr0;
          }
          unaff_r8 = pdVar5 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
        }
        else {
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar15 + 3);
            uVar32 = *(undefined4 *)((int)pdVar15 + 0x14);
            dVar30 = (double)CONCAT44(uVar32,*(undefined4 *)(pdVar5 + 3));
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar32);
            dVar25 = (double)CONCAT44(uVar27,SUB84(in_dr0,0));
            dVar24 = (double)CONCAT44(uVar27,*(undefined4 *)((int)pdVar5 + 0x14));
          }
          else {
            dVar25 = pdVar15[3];
            dVar30 = *(double *)((int)pdVar15 + 0x14);
            uVar32 = (undefined4)((ulonglong)dVar30 >> 0x20);
            uVar27 = (undefined4)((ulonglong)dVar25 >> 0x20);
            dVar24 = dVar25;
          }
          fVar26 = SUB84(dVar24,0);
          if (cVar35 == '\0') {
            fVar22 = SUB84(in_dr2,0) * SUB84(dVar30,0);
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar26,SUB84(dVar25,0));
          }
          else {
            fVar22 = SUB84(in_dr2 * dVar30,0);
            dVar25 = dVar25 * dVar24;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 2),*(undefined4 *)(pdVar5 + 2));
            dVar23 = (double)CONCAT44(uVar27,fVar22);
          }
          else {
            dVar29 = pdVar15[2];
            dVar23 = dVar24;
          }
          if (cVar35 == '\0') {
            dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(dVar29,0),
                                      SUB84(dVar23,0));
          }
          else {
            dVar23 = dVar23 * dVar29;
          }
          uVar27 = (undefined4)((ulonglong)dVar29 >> 0x20);
          dVar33 = dVar29;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44(uVar27,SUB84(in_dr12,0));
          }
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar23,0),
                                      SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 - dVar23;
          }
          if (cVar36 == '\0') {
            dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),uVar27);
          }
          if (cVar35 == '\0') {
            dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),
                                      SUB84(dVar23,0) * SUB84(dVar30,0));
          }
          else {
            dVar23 = dVar23 * dVar30;
          }
          if (cVar36 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),uVar32);
            dVar30 = in_xd0;
          }
          in_xd0 = dVar30;
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                      SUB84(dVar25,0) * SUB84(dVar29,0));
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * fVar26,SUB84(dVar33,0));
            fVar22 = SUB84(dVar23,0) - (float)((ulonglong)dVar23 >> 0x20);
          }
          else {
            dVar25 = dVar25 * dVar29;
            in_dr12 = dVar33 * dVar24;
            fVar22 = SUB84(dVar23 - dVar23,0);
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)((int)pdVar17 + 0x14),fVar22);
          }
          else {
            dVar30 = *(double *)((int)pdVar17 + 0x14);
          }
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                      SUB84(dVar25,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar25 = dVar25 - in_dr12;
            dVar30 = dVar30 * dVar30;
          }
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar17 + 2))
            ;
          }
          if (cVar35 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar30,0) +
                                      (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0));
          }
          in_dr0 = in_xd0;
          if (cVar36 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(pdVar17 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar25,0),SUB84(dVar25,0));
          }
          if (cVar35 == '\0') {
            dVar30 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar30,0) +
                                    (float)((ulonglong)dVar30 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar30 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar36 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar26);
          }
          if (cVar35 == '\0') {
            bVar34 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar34 = in_dr2 < in_dr4;
          }
          uStack_3c = 0;
          if (bVar34) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c248c90;
            uStack_3c = 0x8000;
          }
          if ((*(uint *)pdVar5 & *(uint *)pdVar15 & *(uint *)pdVar17 & 1) == 0) {
            FUN_8c23e7a8(pdVar5,pdVar15,pdVar17,uStack_3c | (int)(short)uVar2);
          }
          if ((*(uint *)pdVar15 & *(uint *)pdVar17 & *(uint *)pdVar4 & 1) == 0) {
            FUN_8c23e7a8(pdVar15,pdVar17,pdVar4,uStack_3c | (int)(short)uVar2);
          }
        }
      }
LAB_8c248c90:
      iStack_28 = iStack_28 + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    uStack_3c = 0;
    while( true ) {
      uVar27 = SUB84(in_dr6,0);
      uVar32 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (int)uStack_3c) break;
      iVar12 = 0;
      puVar20 = puVar19 + 1;
      uVar13 = 0;
      uVar18 = 0xffffffff;
      uVar3 = (uint)*puVar19;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar3;
      puVar6 = puVar20;
      if (uVar3 != 0) {
        do {
          uVar9 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar12 = iVar12 + 1;
          uVar16 = *(uint *)((uint)uVar9 * 0x40 + _DAT_8c4aa510);
          uVar18 = uVar18 & uVar16;
          uVar13 = uVar13 | uVar16;
        } while (iVar12 < (int)uVar3);
      }
      dVar30 = in_xd0;
      if ((uVar18 & 0x3f) == 0) {
        if ((uVar13 & 1) == 0) {
          iVar12 = _DAT_8c4aa510 + (uint)puVar19[2] * 0x40;
          if (cVar36 == '\0') {
            uVar32 = *(undefined4 *)(iVar12 + 4);
          }
          else {
            in_xd4 = *(double *)(iVar12 + 4);
          }
          iVar7 = (uint)*puVar20 * 0x40 + _DAT_8c4aa510;
          dVar24 = in_xd4;
          if (cVar36 == '\0') {
            dVar24 = (double)CONCAT44(uVar32,*(undefined4 *)(iVar7 + 4));
          }
          if (cVar35 == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - SUB84(dVar24,0),
                                      SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 - dVar24;
          }
          iVar14 = (uint)puVar19[3] * 0x40 + _DAT_8c4aa510;
          if (cVar36 == '\0') {
            fVar26 = *(float *)(iVar12 + 8);
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)(iVar14 + 8));
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar25 = (double)CONCAT44(fVar26,uVar32);
          }
          else {
            dVar30 = *(double *)(iVar12 + 8);
            fVar26 = (float)((ulonglong)dVar30 >> 0x20);
            dVar25 = dVar30;
          }
          if (cVar35 == '\0') {
            fVar26 = SUB84(dVar24,0) - fVar26;
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * fVar26,fVar26);
          }
          else {
            dVar24 = (dVar24 - dVar25) * (dVar24 - dVar25);
          }
          if (cVar36 == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)(iVar7 + 8));
          }
          if (cVar35 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar24,0));
          }
          else {
            dVar29 = in_dr0 - dVar24;
          }
          uVar32 = (undefined4)((ulonglong)dVar24 >> 0x20);
          dVar23 = dVar24;
          if (cVar36 == '\0') {
            dVar24 = (double)CONCAT44(uVar32,SUB84(dVar25,0));
            dVar23 = (double)CONCAT44(uVar32,*(undefined4 *)(iVar14 + 4));
          }
          if (cVar35 == '\0') {
            fVar26 = SUB84(dVar23,0) - SUB84(dVar24,0);
            dVar23 = (double)CONCAT44(uVar32,fVar26);
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) * fVar26);
          }
          else {
            dVar23 = dVar23 - dVar24;
            in_dr0 = dVar29 * dVar23;
          }
          in_dr2 = (double)((ulonglong)dVar23 & 0xffffffff00000000);
          if (cVar35 == '\0') {
            fVar26 = (float)((ulonglong)dVar24 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar24,0));
            bVar34 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar24 - in_dr0;
            bVar34 = in_dr2 < in_dr4;
          }
          uVar32 = SUB84(in_dr4,0);
          uVar13 = 0;
          if (bVar34) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c248f32;
            uVar13 = 0x8000;
          }
          _DAT_8c4aa520 = _DAT_8c4aa520 + uVar3;
          iStack_30 = 0;
          if (0 < (int)(uVar3 - 1)) {
            do {
              uVar28 = SUB84(in_dr6,0);
              uVar32 = SUB84(in_dr4,0);
              uVar27 = SUB84(in_dr0,0);
              uVar9 = *puVar20;
              puVar20 = puVar20 + 1;
              pdVar4 = (double *)((uint)uVar9 * 0x40 + _DAT_8c4aa510);
              *(undefined4 *)pdVar4 = 0xe0000000;
              CacheBlockWriteBack(pdVar4);
              if (*(uint *)((int)pdVar4 + 0x3c) != (uVar2 | uVar13)) {
                *(uint *)((int)pdVar4 + 0x3c) = uVar2 | uVar13;
                FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uVar13);
                if (cVar36 == '\0') {
                  *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
                  puVar11 = (undefined4 *)&DAT_8c4c2638;
                  pdVar5 = (double *)&DAT_8c4c2628;
                  dVar24 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
                }
                else {
                  pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
                  puVar11 = (undefined4 *)&DAT_8c4c263c;
                  pdVar5 = (double *)&DAT_8c4c2630;
                  dVar24 = _DAT_8c4c2628;
                }
                if (cVar35 == '\0') {
                  dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                            SUB84(dVar24,0));
                }
                else {
                  dVar24 = dVar24 + dVar24;
                }
                if (cVar36 == '\0') {
                  *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
                  puVar10 = puVar11 + 1;
                  dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar11);
                  pdVar5 = (double *)((int)pdVar5 + 4);
                }
                else {
                  *(double *)((int)pdVar4 + 0x24) = dVar24;
                  puVar10 = puVar11 + 2;
                  dVar24 = *pdVar5;
                  pdVar5 = pdVar5 + 1;
                }
                if (cVar35 == '\0') {
                  dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                            SUB84(dVar24,0));
                }
                else {
                  dVar24 = dVar24 + dVar24;
                }
                if (cVar36 == '\0') {
                  *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar24 >> 0x20);
                  dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
                }
                else {
                  pdVar4[5] = dVar24;
                  dVar24 = *pdVar5;
                }
                pdVar5 = (double *)((int)pdVar4 + 0x2c);
                if (cVar35 == '\0') {
                  in_dr2 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                            SUB84(dVar24,0));
                }
                else {
                  in_dr2 = dVar24 + dVar24;
                }
                if (cVar36 == '\0') {
                  *(int *)pdVar5 = (int)((ulonglong)in_dr2 >> 0x20);
                }
                else {
                  *pdVar5 = in_dr2;
                }
                CacheBlockWriteBack(pdVar5);
              }
              if (cVar36 == '\0') {
                in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar27);
                in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(in_dr2,0));
                pdVar4 = pdVar4 + 1;
              }
              else {
                in_dr0 = *pdVar4;
                in_dr2 = pdVar4[1];
                pdVar4 = pdVar4 + 2;
              }
              if (cVar36 == '\0') {
                uVar27 = *(undefined4 *)(pdVar4 + 2);
                in_dr4 = (double)CONCAT44(uVar27,uVar32);
                in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),uVar28);
                *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
                *(undefined4 *)(unaff_r8 + 3) = uVar27;
                *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                in_dr4 = pdVar4[2];
                in_dr6 = pdVar4[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = in_dr2;
                *unaff_r8 = in_dr0;
              }
              uVar27 = SUB84(in_dr6,0);
              uVar32 = SUB84(in_dr4,0);
              unaff_r8 = unaff_r8 + 4;
              iStack_30 = iStack_30 + 1;
            } while (iStack_30 < (int)(uVar3 - 1));
          }
          uVar28 = SUB84(in_dr0,0);
          puVar19 = puVar20 + 1;
          pdVar4 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar4 = 0xf0000000;
          CacheBlockWriteBack(pdVar4);
          if (*(uint *)((int)pdVar4 + 0x3c) != (uVar2 | uVar13)) {
            *(uint *)((int)pdVar4 + 0x3c) = uVar2 | uVar13;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uVar13);
            if (cVar36 == '\0') {
              *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
              puVar11 = (undefined4 *)&DAT_8c4c2638;
              pdVar5 = (double *)&DAT_8c4c2628;
              dVar24 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
            }
            else {
              pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
              puVar11 = (undefined4 *)&DAT_8c4c263c;
              pdVar5 = (double *)&DAT_8c4c2630;
              dVar24 = _DAT_8c4c2628;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
              puVar10 = puVar11 + 1;
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar11);
              pdVar5 = (double *)((int)pdVar5 + 4);
            }
            else {
              *(double *)((int)pdVar4 + 0x24) = dVar24;
              puVar10 = puVar11 + 2;
              dVar24 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar35 == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar24 >> 0x20);
              dVar24 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
            }
            else {
              pdVar4[5] = dVar24;
              dVar24 = *pdVar5;
            }
            pdVar5 = (double *)((int)pdVar4 + 0x2c);
            if (cVar35 == '\0') {
              in_dr2 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + SUB84(dVar24,0),
                                        SUB84(dVar24,0));
            }
            else {
              in_dr2 = dVar24 + dVar24;
            }
            if (cVar36 == '\0') {
              *(int *)pdVar5 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar5 = in_dr2;
            }
            CacheBlockWriteBack(pdVar5);
          }
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar28);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(in_dr2,0));
            pdVar4 = pdVar4 + 1;
          }
          else {
            in_dr0 = *pdVar4;
            in_dr2 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar36 == '\0') {
            uVar28 = *(undefined4 *)(pdVar4 + 2);
            in_dr4 = (double)CONCAT44(uVar28,uVar32);
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),uVar27);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar28;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar4[2];
            in_dr6 = pdVar4[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          iVar12 = _DAT_8c4aa510 + (uint)puVar19[2] * 0x40;
          if (cVar36 == '\0') {
            uVar32 = *(undefined4 *)(iVar12 + 0x18);
          }
          else {
            in_xd4 = *(double *)(iVar12 + 0x18);
          }
          dVar24 = in_xd4;
          if (cVar36 == '\0') {
            dVar24 = (double)CONCAT44(uVar32,SUB84(in_dr0,0));
          }
          iVar7 = (uint)*puVar20 * 0x40 + _DAT_8c4aa510;
          if (cVar36 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x14),uVar27);
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(iVar7 + 0x14)
                                     );
            dVar25 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x18),uVar32);
          }
          else {
            in_dr6 = *(double *)(iVar12 + 0x14);
            dVar25 = *(double *)(iVar7 + 0x18);
          }
          uVar27 = (undefined4)((ulonglong)in_dr6 >> 0x20);
          if (cVar36 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar27);
          }
          fVar26 = (float)((ulonglong)dVar25 >> 0x20);
          if (cVar35 == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(in_dr8,0),
                                      SUB84(dVar24,0));
            dVar30 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * fVar26);
          }
          else {
            dVar24 = dVar24 * in_dr8;
            dVar30 = in_dr2 * dVar25;
          }
          iVar14 = (uint)puVar19[3] * 0x40 + _DAT_8c4aa510;
          if (cVar35 == '\0') {
            dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - SUB84(dVar30,0),
                                      SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 - dVar30;
          }
          if (cVar36 == '\0') {
            uVar32 = *(undefined4 *)(iVar12 + 0x10);
            in_dr8 = (double)CONCAT44(uVar32,SUB84(in_dr8,0));
            in_dr6 = (double)CONCAT44(uVar27,*(undefined4 *)(iVar7 + 0x10));
            dVar30 = (double)CONCAT44(SUB84(dVar25,0),uVar32);
          }
          else {
            in_dr8 = *(double *)(iVar12 + 0x10);
            uVar32 = (undefined4)((ulonglong)in_dr8 >> 0x20);
            dVar30 = in_xd4;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(in_dr6,0),
                                      SUB84(dVar30,0) * fVar26);
          }
          else {
            dVar29 = dVar30 * dVar25 * in_dr6;
          }
          dVar30 = in_dr6;
          dVar23 = in_dr8;
          if (cVar36 == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                      (int)((ulonglong)in_dr6 >> 0x20));
            dVar30 = in_xd0;
            dVar23 = (double)CONCAT44(uVar32,SUB84(in_dr12,0));
          }
          if (cVar35 == '\0') {
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * SUB84(in_dr8,0),
                                       SUB84(dVar23,0));
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                      SUB84(dVar24,0) * SUB84(in_dr6,0));
            fVar26 = SUB84(dVar29,0) - (float)((ulonglong)dVar29 >> 0x20);
          }
          else {
            in_dr12 = dVar23 * in_dr8;
            dVar24 = dVar24 * in_dr6;
            fVar26 = SUB84(dVar29 - dVar29,0);
          }
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(iVar14 + 0x14),fVar26);
          }
          else {
            dVar29 = *(double *)(iVar14 + 0x14);
          }
          if (cVar35 == '\0') {
            dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                      SUB84(dVar24,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar29,0),
                                      SUB84(dVar29,0));
          }
          else {
            dVar24 = dVar24 - in_dr12;
            dVar29 = dVar29 * dVar29;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      *(undefined4 *)(iVar14 + 0x10));
          }
          if (cVar35 == '\0') {
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * SUB84(dVar29,0) +
                                      (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
          }
          in_dr0 = dVar30;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      *(undefined4 *)(iVar14 + 0x18));
            in_dr0 = (double)CONCAT44(SUB84(dVar24,0),SUB84(dVar24,0));
          }
          if (cVar35 == '\0') {
            dVar29 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar29,0) +
                                    (float)((ulonglong)dVar29 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar29 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar36 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar25,0));
          }
          if (cVar35 == '\0') {
            bVar34 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar34 = in_dr2 < in_dr4;
          }
          uVar9 = 0;
          if (bVar34) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c248f32;
            uVar9 = 0x8000;
          }
          puVar6 = puVar19 + 2;
          puVar19 = puVar19 + 3;
          iStack_38 = 0;
          ar4_00 = (uint *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
          ar5_00 = (uint *)((uint)*puVar6 * 0x40 + _DAT_8c4aa510);
          if (0 < (int)(uVar3 - 2)) {
            do {
              uVar1 = *puVar19;
              puVar19 = puVar19 + 1;
              ar6_00 = (uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                FUN_8c23e7a8(ar4_00,ar5_00,ar6_00,(int)(short)(uVar2 | uVar9));
              }
              iStack_38 = iStack_38 + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while (iStack_38 < (int)(uVar3 - 2));
          }
        }
      }
      else {
LAB_8c248f32:
        puVar19 = puVar20 + uVar3;
      }
      uStack_3c = uStack_3c + 1;
      in_xd0 = dVar30;
    }
  }
  else if (uVar3 == 0xc000) {
    if ((_DAT_8c4ab318 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c24296c;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c2424f6;
    }
                    
                    
    uVar27 = (*UNRECOVERED_JUMPTABLE)(ar4,uVar2);
    return uVar27;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c2485bc\n.set _FUN_8c2485bc, _FUN_8c2485bc_def\n");
