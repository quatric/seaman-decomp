#include "../decls.h"
uint FUN_8c2499ec_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double *pdVar7;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar8;
  uint uVar9;
  uint *ar6_00;
  undefined1 *puVar10;
  ushort *puVar11;
  uint *ar4_00;
  double *pdVar12;
  short *psVar13;
  double *ar6_01;
  int iVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  double *unaff_r8;
  double *pdVar18;
  ushort *puVar19;
  ushort *puVar20;
  double *pdVar21;
  uint uVar22;
  int iVar23;
  uint *ar5_00;
  short *psVar24;
  double in_dr0;
  float fVar25;
  float fVar26;
  double in_dr2;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double in_dr4;
  undefined4 uVar31;
  double dVar30;
  double in_dr6;
  double dVar32;
  double dVar33;
  double in_dr8;
  double in_dr12;
  double dVar35;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double dVar36;
  double in_xd6;
  double in_xd14;
  bool bVar37;
  char cVar38;
  char cVar39;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_2c;
  undefined4 uVar34;
  
  cVar39 = '\0';
  cVar38 = '\0';
  uVar6 = 0x3b800000;
  uVar15 = *ar4;
  uVar3 = uVar15 & 0x3fff;
  uVar4 = uVar15 & 0xc000;
  psVar24 = *(short **)(ar4 + 10);
  puVar19 = *(ushort **)(ar4 + 2);
  if ((uVar15 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    uStack_38 = 0;
    while( true ) {
      uVar29 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= (int)uStack_38) break;
      puVar11 = puVar19 + 1;
      pdVar7 = (double *)((uint)*puVar19 * 0x40 + _DAT_8c4aa510);
      puVar20 = puVar19 + 2;
      puVar19 = puVar19 + 3;
      pdVar18 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
      pdVar8 = (double *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar7 & *(uint *)pdVar8 & *(uint *)pdVar18 & 0x3f) == 0) {
        if (((*(uint *)pdVar7 | *(uint *)pdVar8 | *(uint *)pdVar18) & 1) == 0) {
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)((int)pdVar8 + 4);
            dVar33 = (double)CONCAT44(uVar29,*(undefined4 *)((int)pdVar7 + 4));
          }
          else {
            dVar33 = *(double *)((int)pdVar8 + 4);
            in_xd2 = *(double *)((int)pdVar7 + 4);
            in_xd4 = dVar33;
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar18 + 1))
            ;
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),uVar29);
          }
          else {
            in_xd2 = pdVar18[1];
            dVar30 = pdVar8[1];
          }
          fVar26 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) - fVar26);
          }
          else {
            dVar33 = dVar33 - dVar30;
          }
          dVar36 = dVar30;
          if (cVar39 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar7 + 1));
          }
          else {
            in_xd2 = pdVar7[1];
          }
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar33,0));
          }
          else {
            dVar36 = in_dr0 - dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      *(undefined4 *)((int)pdVar18 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar18 + 4);
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      SUB84(dVar33,0) - SUB84(dVar30,0));
          }
          else {
            dVar33 = dVar33 - dVar30;
          }
          uVar4 = (uint)((ulonglong)dVar33 >> 0x20);
          dVar27 = dVar33;
          if (cVar39 == '\0') {
            dVar27 = (double)CONCAT44(uVar4,SUB84(dVar30,0));
          }
          if (cVar38 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(dVar33,0));
          }
          else {
            in_dr0 = dVar36 * dVar33;
          }
          in_dr2 = (double)((ulonglong)uVar4 << 0x20);
          if (cVar38 == '\0') {
            fVar26 = (float)((ulonglong)dVar27 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar27,0));
            bVar37 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar27 - in_dr0;
            bVar37 = in_dr2 < in_dr4;
          }
          uVar29 = SUB84(in_dr4,0);
          uStack_3c = 0;
          if (bVar37) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c249e2e;
            uStack_3c = 0x8000;
          }
          *(undefined4 *)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          if (*(uint *)((int)pdVar7 + 0x3c) != (uStack_3c | uVar3)) {
            *(uint *)((int)pdVar7 + 0x3c) = uStack_3c | uVar3;
            puVar10 = &DAT_8c4c2620;
            pdVar12 = pdVar7 + 6;
            pdVar21 = pdVar7 + 2;
            uVar4 = uStack_3c;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar21,pdVar12,uStack_3c);
            if (cVar39 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = _DAT_8c4c2624;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar21,pdVar12,uVar4);
            *(undefined4 *)(pdVar7 + 5) = uVar29;
            uVar29 = _DAT_8c4c2634;
            if (cVar39 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar29 = _DAT_8c4c2630;
            }
            uVar31 = float_to_color_u8(puVar10,pdVar21,pdVar12,uVar4);
            *(undefined4 *)((int)pdVar7 + 0x2c) = uVar31;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar29);
          }
          uVar29 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44(uVar29,(float)(int)*psVar24 * fVar26);
          }
          else {
            dVar30 = (double)CONCAT44(uVar29,(float)(int)*psVar24) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar30,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)psVar24[1] * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),(float)(int)psVar24[1])
                           * dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar7 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr0,0));
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar26);
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar30 = *pdVar7;
            dVar36 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)(pdVar7 + 2);
            dVar33 = (double)CONCAT44(uVar29,SUB84(dVar33,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar29;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar36 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar33 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar33;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar30;
          }
          uVar29 = SUB84(dVar33,0);
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)((int)pdVar8 + 0x3c) != (uStack_3c | uVar3)) {
            *(uint *)((int)pdVar8 + 0x3c) = uStack_3c | uVar3;
            pdVar21 = pdVar8 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar7 = pdVar8 + 2;
            uVar4 = uStack_3c;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar7,pdVar21,uStack_3c);
            if (cVar39 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = _DAT_8c4c2624;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar7,pdVar21,uVar4);
            *(undefined4 *)(pdVar8 + 5) = uVar29;
            uVar29 = _DAT_8c4c2634;
            if (cVar39 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar29 = _DAT_8c4c2630;
            }
            uVar31 = float_to_color_u8(puVar10,pdVar7,pdVar21,uVar4);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar31;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar29);
          }
          uVar29 = (undefined4)((ulonglong)dVar36 >> 0x20);
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44(uVar29,(float)(int)psVar24[2] * fVar26);
          }
          else {
            dVar36 = (double)CONCAT44(uVar29,(float)(int)psVar24[2]) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)psVar24[3] * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar24[3])
                           * dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar8 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar30,0));
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar26);
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar30 = *pdVar8;
            dVar36 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)(pdVar8 + 2);
            dVar33 = (double)CONCAT44(uVar29,SUB84(dVar33,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar29;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar36 >> 0x20);
            pdVar7 = unaff_r8 + 6;
            *(int *)pdVar7 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar33 = pdVar8[2];
            unaff_r8[7] = pdVar8[3];
            unaff_r8[6] = dVar33;
            unaff_r8[5] = dVar36;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar30;
          }
          uVar29 = SUB84(dVar33,0);
          *(undefined4 *)pdVar18 = 0xf0000000;
          CacheBlockWriteBack(pdVar18);
          if (*(uint *)((int)pdVar18 + 0x3c) != (uStack_3c | uVar3)) {
            *(uint *)((int)pdVar18 + 0x3c) = uStack_3c | uVar3;
            pdVar21 = pdVar18 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar8 = pdVar18 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar21,uStack_3c);
            if (cVar39 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = _DAT_8c4c2624;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar8,pdVar21,uStack_3c);
            *(undefined4 *)(pdVar18 + 5) = uVar29;
            uVar29 = _DAT_8c4c2634;
            if (cVar39 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar29 = _DAT_8c4c2630;
            }
            uVar31 = float_to_color_u8(puVar10,pdVar8,pdVar21,uStack_3c);
            *(undefined4 *)((int)pdVar18 + 0x2c) = uVar31;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar29);
          }
          uVar29 = (undefined4)((ulonglong)dVar36 >> 0x20);
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44(uVar29,(float)(int)psVar24[4] * fVar26);
          }
          else {
            dVar36 = (double)CONCAT44(uVar29,(float)(int)psVar24[4]) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)psVar24[5] * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar24[5])
                           * dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar18 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar18 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar18 + 4);
          if (cVar39 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar18,SUB84(dVar30,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 4),fVar26);
            pdVar18 = pdVar18 + 1;
          }
          else {
            in_dr0 = *pdVar18;
            in_dr2 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)(pdVar18 + 2);
            in_dr4 = (double)CONCAT44(uVar29,SUB84(dVar33,0));
            *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar18 + 0x14);
            *(undefined4 *)(pdVar7 + 7) = uVar29;
            *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar18[2];
            pdVar7[7] = pdVar18[3];
            pdVar7[6] = in_dr4;
            pdVar7[5] = in_dr2;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
        }
        else {
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)(pdVar8 + 3);
            uVar31 = *(undefined4 *)((int)pdVar8 + 0x14);
            dVar30 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),
                                      *(undefined4 *)(pdVar7 + 3));
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar31);
            dVar27 = (double)CONCAT44(uVar29,SUB84(in_dr0,0));
            dVar33 = in_xd2;
            dVar36 = *(double *)((int)pdVar8 + 0x14);
          }
          else {
            dVar27 = pdVar8[3];
            dVar33 = *(double *)((int)pdVar8 + 0x14);
            dVar30 = *(double *)((int)pdVar7 + 0x14);
            uVar31 = SUB84(dVar27,0);
            uVar29 = (undefined4)((ulonglong)dVar27 >> 0x20);
            dVar36 = dVar27;
            in_xd4 = dVar33;
          }
          fVar26 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar38 == '\0') {
            fVar25 = SUB84(in_dr2,0) * SUB84(dVar30,0);
            dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar26,SUB84(dVar27,0));
          }
          else {
            fVar25 = SUB84(in_dr2 * dVar30,0);
            dVar27 = dVar27 * dVar30;
          }
          if (cVar39 == '\0') {
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),*(undefined4 *)(pdVar8 + 2));
            dVar36 = (double)CONCAT44(uVar29,fVar25);
          }
          else {
            in_xd6 = pdVar8[2];
            dVar32 = pdVar7[2];
          }
          fVar25 = (float)((ulonglong)dVar32 >> 0x20);
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * fVar25,SUB84(dVar36,0));
          }
          else {
            dVar36 = dVar36 * dVar32;
          }
          dVar35 = in_xd6;
          if (cVar39 == '\0') {
            dVar35 = (double)CONCAT44(SUB84(dVar32,0),SUB84(in_dr12,0));
          }
          if (cVar38 == '\0') {
            dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - SUB84(dVar36,0),
                                      SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 - dVar36;
          }
          in_xd2 = in_xd6;
          if (cVar39 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),SUB84(dVar32,0));
            in_xd2 = dVar33;
          }
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(dVar30,0));
          }
          else {
            dVar36 = dVar36 * dVar30;
          }
          dVar33 = in_xd4;
          if (cVar39 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),uVar31);
            dVar33 = in_xd0;
          }
          in_xd0 = dVar33;
          if (cVar38 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * fVar25);
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) * fVar26,SUB84(dVar35,0));
            fVar26 = SUB84(dVar36,0) - (float)((ulonglong)dVar36 >> 0x20);
          }
          else {
            dVar27 = dVar27 * dVar32;
            in_dr12 = dVar35 * dVar30;
            fVar26 = SUB84(dVar36 - dVar36,0);
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 0x14),fVar26);
          }
          else {
            dVar33 = *(double *)((int)pdVar18 + 0x14);
          }
          if (cVar38 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),
                                      SUB84(dVar27,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar27 = dVar27 - in_dr12;
            dVar33 = dVar33 * dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar18 + 2))
            ;
          }
          else {
            in_xd2 = pdVar18[2];
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * SUB84(dVar33,0) +
                                      (float)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0));
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar18 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            in_xd2 = pdVar18[3];
            in_dr0 = in_xd0;
          }
          if (cVar38 == '\0') {
            dVar33 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar33,0) +
                                    (float)((ulonglong)dVar33 >> 0x20)) << 0x20);
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          in_dr2 = (double)((ulonglong)dVar33 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar39 == '\0') {
            in_dr4 = (double)CONCAT44(uVar29,uVar31);
          }
          if (cVar38 == '\0') {
            bVar37 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar37 = in_dr2 < in_dr4;
          }
          uStack_3c = 0;
          if (bVar37) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c249e2e;
            uStack_3c = 0x8000;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,SUB84(in_dr4,0));
          }
          in_dr4 = dVar33;
          fVar26 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)*psVar24 * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)*psVar24) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[1] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[1]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = SUB84(dVar33,0);
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[2] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[2]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[3] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[3]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)((int)pdVar8 + 0x24) = SUB84(dVar33,0);
          }
          else {
            *(double *)((int)pdVar8 + 0x24) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[4] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[4]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[5] * fVar26);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[5]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)((int)pdVar18 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)((int)pdVar18 + 0x24) = in_xd2;
          }
          FUN_8c23d698(pdVar7,pdVar8,pdVar18,uStack_3c | (int)(short)uVar3);
        }
      }
LAB_8c249e2e:
      psVar24 = psVar24 + 6;
      uStack_38 = uStack_38 + 1;
    }
  }
  else if (uVar4 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_2c = 0;
    while( true ) {
      uVar31 = SUB84(in_dr6,0);
      uVar29 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= iStack_2c) break;
      pdVar8 = (double *)((uint)*puVar19 * 0x40 + _DAT_8c4aa510);
      puVar11 = puVar19 + 3;
      pdVar18 = (double *)((uint)puVar19[1] * 0x40 + _DAT_8c4aa510);
      pdVar21 = (double *)((uint)puVar19[2] * 0x40 + _DAT_8c4aa510);
      puVar19 = puVar19 + 4;
      pdVar7 = (double *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar8 & *(uint *)pdVar18 & *(uint *)pdVar21 & *(uint *)pdVar7 & 0x3f) == 0) {
        if (((*(uint *)pdVar8 | *(uint *)pdVar18 | *(uint *)pdVar21 | *(uint *)pdVar7) & 1) == 0) {
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)((int)pdVar18 + 4);
            dVar33 = (double)CONCAT44(uVar29,*(undefined4 *)((int)pdVar8 + 4));
          }
          else {
            dVar33 = *(double *)((int)pdVar18 + 4);
            in_xd2 = *(double *)((int)pdVar8 + 4);
            in_xd4 = dVar33;
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar21 + 1))
            ;
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 1),uVar29);
          }
          else {
            in_xd2 = pdVar21[1];
            dVar30 = pdVar18[1];
          }
          fVar26 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) - fVar26);
          }
          else {
            dVar33 = dVar33 - dVar30;
          }
          dVar36 = dVar30;
          if (cVar39 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar8 + 1));
          }
          else {
            in_xd2 = pdVar8[1];
          }
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar33,0));
          }
          else {
            dVar36 = in_dr0 - dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      *(undefined4 *)((int)pdVar21 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar21 + 4);
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      SUB84(dVar33,0) - SUB84(dVar30,0));
          }
          else {
            dVar33 = dVar33 - dVar30;
          }
          uVar4 = (uint)((ulonglong)dVar33 >> 0x20);
          dVar27 = dVar33;
          if (cVar39 == '\0') {
            dVar27 = (double)CONCAT44(uVar4,SUB84(dVar30,0));
          }
          if (cVar38 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(dVar33,0));
          }
          else {
            in_dr0 = dVar36 * dVar33;
          }
          in_dr2 = (double)((ulonglong)uVar4 << 0x20);
          if (cVar38 == '\0') {
            fVar26 = (float)((ulonglong)dVar27 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar27,0));
            bVar37 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar27 - in_dr0;
            bVar37 = in_dr2 < in_dr4;
          }
          uVar29 = SUB84(in_dr4,0);
          uStack_38 = 0;
          if (bVar37) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24a358;
            uStack_38 = 0x8000;
          }
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)((int)pdVar8 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar8 + 0x3c) = uStack_38 | uVar3;
            puVar10 = &DAT_8c4c2620;
            ar6_01 = pdVar8 + 6;
            pdVar12 = pdVar8 + 2;
            uVar4 = uStack_38;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar12,ar6_01,uStack_38);
            dVar33 = _DAT_8c4c2624;
            if (cVar39 == '\0') {
              dVar33 = in_xd4;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar12,ar6_01,uVar4);
            *(undefined4 *)(pdVar8 + 5) = uVar29;
            in_xd4 = dVar33;
            uVar31 = _DAT_8c4c263c;
            uVar29 = _DAT_8c4c2634;
            if (cVar39 != '\0') {
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2638;
              uVar29 = _DAT_8c4c2630;
            }
            uVar34 = float_to_color_u8(puVar10,pdVar12,ar6_01,uVar4);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar34;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar29);
          }
          uVar29 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44(uVar29,(float)(int)*psVar24 * fVar26);
          }
          else {
            dVar30 = (double)CONCAT44(uVar29,(float)(int)*psVar24) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar30,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)psVar24[1] * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),(float)(int)psVar24[1])
                           * dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar8 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar26);
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar30 = *pdVar8;
            dVar36 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)(pdVar8 + 2);
            dVar27 = (double)CONCAT44(uVar29,SUB84(dVar33,0));
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar31);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar29;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar36 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar27 = pdVar8[2];
            dVar33 = pdVar8[3];
            unaff_r8[3] = dVar33;
            unaff_r8[2] = dVar27;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar30;
          }
          uVar29 = SUB84(dVar33,0);
          uVar31 = SUB84(dVar27,0);
          *(undefined4 *)pdVar18 = 0xe0000000;
          CacheBlockWriteBack(pdVar18);
          if (*(uint *)((int)pdVar18 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar18 + 0x3c) = uStack_38 | uVar3;
            pdVar12 = pdVar18 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar8 = pdVar18 + 2;
            uVar4 = uStack_38;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar12,uStack_38);
            dVar33 = _DAT_8c4c2624;
            if (cVar39 == '\0') {
              dVar33 = in_xd4;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar8,pdVar12,uVar4);
            *(undefined4 *)(pdVar18 + 5) = uVar29;
            in_xd4 = dVar33;
            uVar31 = _DAT_8c4c2634;
            uVar29 = _DAT_8c4c263c;
            if (cVar39 != '\0') {
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2630;
              uVar29 = _DAT_8c4c2638;
            }
            uVar34 = float_to_color_u8(puVar10,pdVar8,pdVar12,uVar4);
            *(undefined4 *)((int)pdVar18 + 0x2c) = uVar34;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar31);
          }
          uVar31 = (undefined4)((ulonglong)dVar36 >> 0x20);
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44(uVar31,(float)(int)psVar24[2] * fVar26);
          }
          else {
            dVar36 = (double)CONCAT44(uVar31,(float)(int)psVar24[2]) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)psVar24[3] * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar24[3])
                           * dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar18 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar18 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar18 + 4);
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar18,SUB84(dVar30,0));
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 4),fVar26);
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar30 = *pdVar18;
            dVar36 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar39 == '\0') {
            uVar31 = *(undefined4 *)(pdVar18 + 2);
            dVar27 = (double)CONCAT44(uVar31,SUB84(dVar33,0));
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 0x14),uVar29);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar18 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar31;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar36 >> 0x20);
            pdVar8 = unaff_r8 + 6;
            *(int *)pdVar8 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar27 = pdVar18[2];
            dVar33 = pdVar18[3];
            unaff_r8[7] = dVar33;
            unaff_r8[6] = dVar27;
            unaff_r8[5] = dVar36;
            pdVar8 = unaff_r8 + 4;
            *pdVar8 = dVar30;
          }
          uVar29 = SUB84(dVar33,0);
          uVar31 = SUB84(dVar27,0);
          *(undefined4 *)pdVar21 = 0xe0000000;
          CacheBlockWriteBack(pdVar21);
          if (*(uint *)((int)pdVar21 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar21 + 0x3c) = uStack_38 | uVar3;
            pdVar12 = pdVar21 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar18 = pdVar21 + 2;
            uVar4 = uStack_38;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar18,pdVar12,uStack_38);
            dVar33 = _DAT_8c4c2624;
            if (cVar39 == '\0') {
              dVar33 = in_xd4;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar18,pdVar12,uVar4);
            *(undefined4 *)(pdVar21 + 5) = uVar29;
            in_xd4 = dVar33;
            uVar31 = _DAT_8c4c2634;
            uVar29 = _DAT_8c4c263c;
            if (cVar39 != '\0') {
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2630;
              uVar29 = _DAT_8c4c2638;
            }
            uVar34 = float_to_color_u8(puVar10,pdVar18,pdVar12,uVar4);
            *(undefined4 *)((int)pdVar21 + 0x2c) = uVar34;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar31);
          }
          uVar31 = (undefined4)((ulonglong)dVar36 >> 0x20);
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44(uVar31,(float)(int)psVar24[4] * fVar26);
          }
          else {
            dVar36 = (double)CONCAT44(uVar31,(float)(int)psVar24[4]) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar21 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar21[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)psVar24[5] * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar24[5])
                           * dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar21 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar21 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar21 + 4);
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar21,SUB84(dVar30,0));
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 4),fVar26);
            pdVar21 = pdVar21 + 1;
          }
          else {
            dVar30 = *pdVar21;
            dVar36 = pdVar21[1];
            pdVar21 = pdVar21 + 2;
          }
          if (cVar39 == '\0') {
            uVar31 = *(undefined4 *)(pdVar21 + 2);
            dVar27 = (double)CONCAT44(uVar31,SUB84(dVar33,0));
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 0x14),uVar29);
            *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar21 + 0x14);
            *(undefined4 *)(pdVar8 + 7) = uVar31;
            *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)dVar36 >> 0x20);
            pdVar8 = pdVar8 + 6;
            *(int *)pdVar8 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar27 = pdVar21[2];
            dVar33 = pdVar21[3];
            pdVar8[7] = dVar33;
            pdVar8[6] = dVar27;
            pdVar8[5] = dVar36;
            pdVar8 = pdVar8 + 4;
            *pdVar8 = dVar30;
          }
          uVar29 = SUB84(dVar33,0);
          uVar31 = SUB84(dVar27,0);
          *(undefined4 *)pdVar7 = 0xf0000000;
          CacheBlockWriteBack(pdVar7);
          if (*(uint *)((int)pdVar7 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar7 + 0x3c) = uStack_38 | uVar3;
            puVar10 = &DAT_8c4c2620;
            pdVar21 = pdVar7 + 6;
            pdVar18 = pdVar7 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar18,pdVar21,uStack_38);
            dVar33 = _DAT_8c4c2624;
            if (cVar39 == '\0') {
              dVar33 = in_xd4;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar18,pdVar21,uStack_38);
            *(undefined4 *)(pdVar7 + 5) = uVar29;
            in_xd4 = dVar33;
            uVar31 = _DAT_8c4c2634;
            uVar29 = _DAT_8c4c263c;
            if (cVar39 != '\0') {
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2630;
              uVar29 = _DAT_8c4c2638;
            }
            uVar34 = float_to_color_u8(puVar10,pdVar18,pdVar21,uStack_38);
            *(undefined4 *)((int)pdVar7 + 0x2c) = uVar34;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar31);
          }
          uVar31 = (undefined4)((ulonglong)dVar36 >> 0x20);
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44(uVar31,(float)(int)psVar24[6] * fVar26);
          }
          else {
            dVar36 = (double)CONCAT44(uVar31,(float)(int)psVar24[6]) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)psVar24[7] * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar24[7])
                           * dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar7 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar39 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar30,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar26);
            pdVar7 = pdVar7 + 1;
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar39 == '\0') {
            uVar31 = *(undefined4 *)(pdVar7 + 2);
            in_dr4 = (double)CONCAT44(uVar31,SUB84(dVar33,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar29);
            *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(pdVar8 + 7) = uVar31;
            *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar8 = pdVar8 + 6;
            *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            in_dr6 = pdVar7[3];
            pdVar8[7] = in_dr6;
            pdVar8[6] = in_dr4;
            pdVar8[5] = in_dr2;
            pdVar8 = pdVar8 + 4;
            *pdVar8 = in_dr0;
          }
          unaff_r8 = pdVar8 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
        }
        else {
          if (cVar39 == '\0') {
            uVar29 = *(undefined4 *)(pdVar18 + 3);
            uVar34 = *(undefined4 *)((int)pdVar18 + 0x14);
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                      *(undefined4 *)((int)pdVar8 + 0x14));
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 3),uVar29);
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar36 = (double)CONCAT44(uVar29,SUB84(in_dr0,0));
            dVar33 = in_xd2;
            in_dr6 = (double)CONCAT44(uVar34,uVar31);
          }
          else {
            dVar36 = pdVar18[3];
            dVar33 = *(double *)((int)pdVar18 + 0x14);
            dVar30 = pdVar8[3];
            uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
            uVar29 = SUB84(dVar30,0);
            in_dr6 = dVar33;
            in_xd4 = dVar36;
          }
          fVar26 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar38 == '\0') {
            fVar25 = SUB84(in_dr2,0) * fVar26;
            dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * SUB84(in_dr8,0),
                                      SUB84(dVar36,0));
          }
          else {
            fVar25 = SUB84(in_dr2 * dVar30,0);
            dVar36 = dVar36 * in_dr8;
          }
          if (cVar39 == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 2),SUB84(in_dr8,0));
            in_dr6 = (double)CONCAT44(uVar34,*(undefined4 *)(pdVar8 + 2));
            dVar27 = (double)CONCAT44(uVar29,fVar25);
          }
          else {
            in_dr8 = pdVar18[2];
            dVar27 = in_xd4;
          }
          if (cVar38 == '\0') {
            dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * SUB84(in_dr6,0),
                                      SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 * in_dr6;
          }
          uVar31 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          dVar32 = in_dr8;
          if (cVar39 == '\0') {
            dVar32 = (double)CONCAT44(uVar31,SUB84(in_dr12,0));
          }
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar27,0),
                                      SUB84(dVar36,0));
          }
          else {
            dVar36 = dVar36 - dVar27;
          }
          in_xd2 = in_dr8;
          if (cVar39 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),uVar31);
            in_xd2 = dVar33;
          }
          if (cVar38 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * fVar26);
          }
          else {
            dVar27 = dVar27 * dVar30;
          }
          dVar33 = in_dr6;
          if (cVar39 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      (int)((ulonglong)in_dr6 >> 0x20));
            dVar33 = in_xd0;
          }
          in_xd0 = dVar33;
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(in_dr6,0));
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(in_dr8,0),
                                       SUB84(dVar32,0));
            fVar26 = SUB84(dVar27,0) - (float)((ulonglong)dVar27 >> 0x20);
          }
          else {
            dVar36 = dVar36 * in_dr6;
            in_dr12 = dVar32 * in_dr8;
            fVar26 = SUB84(dVar27 - dVar27,0);
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 0x14),fVar26);
          }
          else {
            dVar33 = *(double *)((int)pdVar21 + 0x14);
          }
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar36 = dVar36 - in_dr12;
            dVar33 = dVar33 * dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * SUB84(dVar33,0) +
                                      (float)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0));
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar21 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar36,0),SUB84(dVar36,0));
          }
          else {
            in_xd2 = pdVar21[3];
            in_dr0 = in_xd0;
          }
          if (cVar38 == '\0') {
            dVar33 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar33,0) +
                                    (float)((ulonglong)dVar33 >> 0x20)) << 0x20);
          }
          uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
          in_dr2 = (double)((ulonglong)dVar33 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar39 == '\0') {
            in_dr4 = (double)CONCAT44(uVar31,uVar29);
          }
          if (cVar38 == '\0') {
            bVar37 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar37 = in_dr2 < in_dr4;
          }
          uStack_38 = 0;
          if (bVar37) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24a358;
            uStack_38 = 0x8000;
          }
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,SUB84(in_dr4,0));
          }
          in_dr4 = dVar33;
          fVar26 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar31,(float)(int)*psVar24 * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar31,(float)(int)*psVar24) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[1] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[1]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)((int)pdVar8 + 0x24) = SUB84(dVar33,0);
          }
          else {
            *(double *)((int)pdVar8 + 0x24) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[2] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[2]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[3] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[3]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)((int)pdVar18 + 0x24) = SUB84(dVar33,0);
          }
          else {
            *(double *)((int)pdVar18 + 0x24) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[4] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[4]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar21 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar21[4] = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[5] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[5]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)((int)pdVar21 + 0x24) = SUB84(dVar33,0);
          }
          else {
            *(double *)((int)pdVar21 + 0x24) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[6] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[6]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[7] * fVar26);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[7]) * in_dr4;
          }
          if (cVar39 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          if ((*(uint *)pdVar8 & *(uint *)pdVar18 & *(uint *)pdVar21 & 1) == 0) {
            FUN_8c23d698(pdVar8,pdVar18,pdVar21,uStack_38 | (int)(short)uVar3);
          }
          if ((*(uint *)pdVar18 & *(uint *)pdVar21 & *(uint *)pdVar7 & 1) == 0) {
            FUN_8c23d698(pdVar18,pdVar21,pdVar7,uStack_38 | (int)(short)uVar3);
          }
        }
      }
LAB_8c24a358:
      psVar24 = psVar24 + 8;
      iStack_2c = iStack_2c + 1;
    }
  }
  else if (uVar4 == 0x8000) {
    iStack_40 = 0;
    while( true ) {
      uVar29 = SUB84(in_dr6,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= iStack_40) break;
      iVar14 = 0;
      puVar20 = puVar19 + 1;
      uVar16 = 0;
      uVar22 = 0xffffffff;
      uVar4 = (uint)*puVar19;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar4;
      puVar11 = puVar20;
      if (uVar4 != 0) {
        do {
          uVar15 = *puVar11;
          puVar11 = puVar11 + 1;
          iVar14 = iVar14 + 1;
          uVar9 = *(uint *)((uint)uVar15 * 0x40 + _DAT_8c4aa510);
          uVar22 = uVar22 & uVar9;
          uVar16 = uVar16 | uVar9;
        } while (iVar14 < (int)uVar4);
      }
      if ((uVar22 & 0x3f) == 0) {
        if ((uVar16 & 1) == 0) {
          iVar14 = (uint)puVar19[2] * 0x40 + _DAT_8c4aa510;
          iVar17 = (uint)*puVar20 * 0x40 + _DAT_8c4aa510;
          iVar23 = _DAT_8c4aa510 + (uint)puVar19[3] * 0x40;
          if (cVar39 == '\0') {
            uVar31 = *(undefined4 *)(iVar14 + 4);
            dVar30 = (double)CONCAT44(uVar31,*(undefined4 *)(iVar17 + 4));
            dVar33 = (double)CONCAT44(uVar31,SUB84(in_dr4,0));
          }
          else {
            dVar30 = *(double *)(iVar14 + 4);
            in_xd2 = *(double *)(iVar17 + 4);
            uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
            dVar33 = dVar30;
          }
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar30;
          }
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(iVar23 + 8));
            dVar33 = (double)CONCAT44(uVar31,*(undefined4 *)(iVar14 + 8));
          }
          else {
            in_xd2 = *(double *)(iVar23 + 8);
            in_xd4 = *(double *)(iVar14 + 8);
          }
          fVar26 = SUB84(dVar33,0);
          if (cVar38 == '\0') {
            fVar25 = SUB84(dVar30,0) - fVar26;
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar25,fVar25);
          }
          else {
            dVar30 = (dVar30 - dVar33) * (dVar30 - dVar33);
          }
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(iVar17 + 8));
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
          }
          else {
            in_xd2 = *(double *)(iVar17 + 8);
            in_xd0 = in_xd4;
          }
          if (cVar38 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar30,0));
          }
          else {
            dVar36 = in_dr0 - dVar30;
          }
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(iVar23 + 4));
          }
          else {
            in_xd2 = *(double *)(iVar23 + 4);
          }
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) - (float)((ulonglong)dVar33 >> 0x20));
          }
          else {
            dVar30 = dVar30 - dVar33;
          }
          uVar16 = (uint)((ulonglong)dVar30 >> 0x20);
          dVar33 = dVar30;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar16,fVar26);
          }
          if (cVar38 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(dVar30,0));
          }
          else {
            in_dr0 = dVar36 * dVar30;
          }
          in_dr2 = (double)((ulonglong)uVar16 << 0x20);
          if (cVar38 == '\0') {
            fVar26 = (float)((ulonglong)dVar33 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar33,0));
            bVar37 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar33 - in_dr0;
            bVar37 = in_dr2 < in_dr4;
          }
          uVar31 = SUB84(in_dr4,0);
          uStack_44 = 0;
          if (bVar37) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24a698;
            uStack_44 = 0x8000;
          }
          _DAT_8c4aa520 = _DAT_8c4aa520 + uVar4;
          uStack_38 = 0;
          if (0 < (int)(uVar4 - 1)) {
            do {
              uVar29 = SUB84(in_dr6,0);
              uVar34 = SUB84(in_dr0,0);
              uVar28 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              uVar31 = SUB84(in_dr4,0);
              uVar15 = *puVar20;
              puVar20 = puVar20 + 1;
              pdVar7 = (double *)((uint)uVar15 * 0x40 + _DAT_8c4aa510);
              *(undefined4 *)pdVar7 = 0xe0000000;
              CacheBlockWriteBack(pdVar7);
              if (*(uint *)((int)pdVar7 + 0x3c) != (uVar3 | uStack_44)) {
                puVar10 = &DAT_8c4c2620;
                pdVar18 = pdVar7 + 6;
                *(uint *)((int)pdVar7 + 0x3c) = uVar3 | uStack_44;
                pdVar8 = pdVar7 + 2;
                uVar16 = uStack_44;
                FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar18,uStack_44);
                dVar33 = _DAT_8c4c2624;
                if (cVar39 == '\0') {
                  dVar33 = in_xd4;
                }
                uVar29 = float_to_color_u8(puVar10,pdVar8,pdVar18,uVar16);
                *(undefined4 *)(pdVar7 + 5) = uVar29;
                uVar31 = _DAT_8c4c2634;
                in_xd4 = dVar33;
                uVar29 = _DAT_8c4c263c;
                if (cVar39 != '\0') {
                  uVar31 = _DAT_8c4c2630;
                  in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
                  uVar29 = _DAT_8c4c2638;
                }
                uVar5 = float_to_color_u8(puVar10,pdVar8,pdVar18,uVar16);
                *(undefined4 *)((int)pdVar7 + 0x2c) = uVar5;
              }
              sVar1 = *psVar24;
              psVar13 = psVar24 + 1;
              dVar33 = in_xd14;
              if (cVar39 == '\0') {
                dVar33 = (double)CONCAT44(uVar6,uVar31);
              }
              psVar24 = psVar24 + 2;
              fVar26 = (float)((ulonglong)dVar33 >> 0x20);
              if (cVar38 == '\0') {
                dVar30 = (double)CONCAT44(uVar28,(float)(int)sVar1 * fVar26);
              }
              else {
                dVar30 = (double)CONCAT44(uVar28,(float)(int)sVar1) * dVar33;
              }
              if (cVar39 == '\0') {
                *(int *)(pdVar7 + 4) = SUB84(dVar30,0);
              }
              else {
                pdVar7[4] = in_xd2;
              }
              if (cVar38 == '\0') {
                fVar26 = (float)(int)*psVar13 * fVar26;
              }
              else {
                fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                                (float)(int)*psVar13) * dVar33,0);
              }
              if (cVar39 == '\0') {
                *(float *)((int)pdVar7 + 0x24) = fVar26;
              }
              else {
                *(double *)((int)pdVar7 + 0x24) = in_xd2;
              }
              CacheBlockWriteBack(pdVar7 + 4);
              if (cVar39 == '\0') {
                in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar34);
                in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar26);
                pdVar7 = pdVar7 + 1;
              }
              else {
                in_dr0 = *pdVar7;
                in_dr2 = pdVar7[1];
                pdVar7 = pdVar7 + 2;
              }
              if (cVar39 == '\0') {
                uVar31 = *(undefined4 *)(pdVar7 + 2);
                in_dr4 = (double)CONCAT44(uVar31,SUB84(dVar33,0));
                in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar29);
                *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
                *(undefined4 *)(unaff_r8 + 3) = uVar31;
                *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                in_dr4 = pdVar7[2];
                in_dr6 = pdVar7[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = in_dr2;
                *unaff_r8 = in_dr0;
              }
              uVar29 = SUB84(in_dr6,0);
              uVar31 = SUB84(in_dr4,0);
              unaff_r8 = unaff_r8 + 4;
              uStack_38 = uStack_38 + 1;
            } while ((int)uStack_38 < (int)(uVar4 - 1));
          }
          uVar34 = SUB84(in_dr0,0);
          uVar28 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          puVar19 = puVar20 + 1;
          pdVar7 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar7 = 0xf0000000;
          CacheBlockWriteBack(pdVar7);
          if (*(uint *)((int)pdVar7 + 0x3c) != (uStack_44 | uVar3)) {
            *(uint *)((int)pdVar7 + 0x3c) = uStack_44 | uVar3;
            pdVar18 = pdVar7 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar8 = pdVar7 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar18,uStack_44);
            dVar33 = _DAT_8c4c2624;
            if (cVar39 == '\0') {
              dVar33 = in_xd4;
            }
            uVar29 = float_to_color_u8(puVar10,pdVar8,pdVar18,uStack_44);
            *(undefined4 *)(pdVar7 + 5) = uVar29;
            uVar31 = _DAT_8c4c2634;
            in_xd4 = dVar33;
            uVar29 = _DAT_8c4c263c;
            if (cVar39 != '\0') {
              uVar31 = _DAT_8c4c2630;
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar29 = _DAT_8c4c2638;
            }
            uVar5 = float_to_color_u8(puVar10,pdVar8,pdVar18,uStack_44);
            *(undefined4 *)((int)pdVar7 + 0x2c) = uVar5;
          }
          sVar1 = *psVar24;
          psVar13 = psVar24 + 1;
          dVar33 = in_xd14;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar6,uVar31);
          }
          psVar24 = psVar24 + 2;
          fVar26 = (float)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44(uVar28,(float)(int)sVar1 * fVar26);
          }
          else {
            dVar30 = (double)CONCAT44(uVar28,(float)(int)sVar1) * dVar33;
          }
          if (cVar39 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar30,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar38 == '\0') {
            fVar26 = (float)(int)*psVar13 * fVar26;
          }
          else {
            fVar26 = SUB84((double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),(float)(int)*psVar13) *
                           dVar33,0);
          }
          if (cVar39 == '\0') {
            *(float *)((int)pdVar7 + 0x24) = fVar26;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar39 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar34);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar26);
            pdVar7 = pdVar7 + 1;
          }
          else {
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar39 == '\0') {
            uVar31 = *(undefined4 *)(pdVar7 + 2);
            in_dr4 = (double)CONCAT44(uVar31,SUB84(dVar33,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar29);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar31;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            in_dr6 = pdVar7[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          iVar14 = (uint)puVar19[2] * 0x40 + _DAT_8c4aa510;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)(iVar14 + 0x18),SUB84(in_dr4,0));
          }
          else {
            dVar33 = *(double *)(iVar14 + 0x18);
          }
          iVar17 = (uint)*puVar20 * 0x40 + _DAT_8c4aa510;
          uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
          dVar30 = dVar33;
          if (cVar39 == '\0') {
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                      *(undefined4 *)(iVar17 + 0x14));
            dVar30 = (double)CONCAT44(uVar31,SUB84(in_dr0,0));
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar31,*(undefined4 *)(iVar14 + 0x14));
          }
          else {
            in_xd4 = *(double *)(iVar14 + 0x14);
          }
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(in_dr8,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr8;
          }
          uVar31 = SUB84(dVar33,0);
          if (cVar39 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar31);
            in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar17 + 0x18),uVar29);
            dVar36 = in_xd2;
          }
          else {
            in_dr6 = *(double *)(iVar17 + 0x18);
            dVar36 = in_xd4;
          }
          iVar23 = _DAT_8c4aa510 + (uint)puVar19[3] * 0x40;
          fVar26 = (float)((ulonglong)in_dr6 >> 0x20);
          if (cVar38 == '\0') {
            fVar25 = SUB84(in_dr2,0) * fVar26;
          }
          else {
            fVar25 = SUB84(in_dr2 * in_dr6,0);
          }
          if (cVar39 == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)(iVar14 + 0x10),SUB84(in_dr8,0));
            in_dr6 = (double)CONCAT44(fVar26,*(undefined4 *)(iVar17 + 0x10));
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),fVar25);
          }
          else {
            in_dr8 = *(double *)(iVar14 + 0x10);
          }
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar33,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar33;
          }
          uVar29 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          in_xd2 = in_dr8;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),uVar29);
            in_xd2 = dVar36;
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(in_dr6,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * in_dr6;
          }
          dVar36 = in_dr8;
          if (cVar39 == '\0') {
            dVar36 = (double)CONCAT44(uVar29,SUB84(in_dr12,0));
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      SUB84(dVar33,0) * (float)((ulonglong)in_dr6 >> 0x20));
          }
          else {
            dVar33 = dVar33 * in_dr6;
          }
          dVar27 = in_xd4;
          if (cVar39 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uVar31);
            dVar27 = in_xd0;
          }
          in_xd0 = dVar27;
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) * SUB84(in_dr6,0));
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * SUB84(in_dr8,0),
                                       SUB84(dVar36,0));
            fVar26 = SUB84(dVar33,0) - (float)((ulonglong)dVar33 >> 0x20);
          }
          else {
            dVar30 = dVar30 * in_dr6;
            in_dr12 = dVar36 * in_dr8;
            fVar26 = SUB84(dVar33 - dVar33,0);
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)(iVar23 + 0x14),fVar26);
          }
          else {
            dVar33 = *(double *)(iVar23 + 0x14);
          }
          if (cVar38 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar30 = dVar30 - in_dr12;
            dVar33 = dVar33 * dVar33;
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      *(undefined4 *)(iVar23 + 0x10));
          }
          else {
            in_xd2 = *(double *)(iVar23 + 0x10);
          }
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar33,0) +
                                      (float)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0));
          }
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      *(undefined4 *)(iVar23 + 0x18));
            in_dr0 = (double)CONCAT44(SUB84(dVar30,0),SUB84(dVar30,0));
          }
          else {
            in_xd2 = *(double *)(iVar23 + 0x18);
            in_dr0 = in_xd0;
          }
          if (cVar38 == '\0') {
            dVar33 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar33,0) +
                                    (float)((ulonglong)dVar33 >> 0x20)) << 0x20);
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          in_dr2 = (double)((ulonglong)dVar33 & 0xffffffff00000000);
          dVar33 = in_dr2;
          if (cVar39 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,uVar31);
          }
          if (cVar38 == '\0') {
            bVar37 = 0.0 < (float)((ulonglong)dVar33 >> 0x20);
          }
          else {
            bVar37 = in_dr2 < dVar33;
          }
          uVar15 = 0;
          if (bVar37) {
            in_dr4 = dVar33;
            if ((_DAT_8c4ab308 & 0x800000) == 0) {
LAB_8c24a698:
              puVar19 = puVar20 + uVar4;
              psVar24 = psVar24 + uVar4 * 2;
              goto LAB_8c24a798;
            }
            uVar15 = 0x8000;
          }
          puVar11 = puVar19 + 2;
          puVar19 = puVar19 + 3;
          in_dr4 = in_xd14;
          if (cVar39 == '\0') {
            in_dr4 = (double)CONCAT44(uVar6,SUB84(dVar33,0));
          }
          ar4_00 = (uint *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
          ar5_00 = (uint *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
          fVar26 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)*psVar24 * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)*psVar24) * in_dr4;
          }
          if (cVar39 == '\0') {
            ar4_00[8] = SUB84(dVar33,0);
          }
          else {
            *(double *)(ar4_00 + 7) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[1] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[1]) * in_dr4;
          }
          if (cVar39 == '\0') {
            ar4_00[9] = SUB84(dVar33,0);
          }
          else {
            *(double *)(ar4_00 + 9) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[2] * fVar26);
          }
          else {
            dVar33 = (double)CONCAT44(uVar29,(float)(int)psVar24[2]) * in_dr4;
          }
          if (cVar39 == '\0') {
            ar5_00[8] = SUB84(dVar33,0);
          }
          else {
            *(double *)(ar5_00 + 7) = in_xd2;
          }
          uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar38 == '\0') {
            in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[3] * fVar26);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[3]) * in_dr4;
          }
          if (cVar39 == '\0') {
            ar5_00[9] = SUB84(in_dr2,0);
          }
          else {
            *(double *)(ar5_00 + 9) = in_xd2;
          }
          uStack_3c = 0;
          psVar24 = psVar24 + 4;
          if (0 < (int)(uVar4 - 2)) {
            do {
              uVar2 = *puVar19;
              puVar19 = puVar19 + 1;
              dVar33 = in_xd14;
              if (cVar39 == '\0') {
                dVar33 = (double)CONCAT44(uVar6,SUB84(in_dr4,0));
              }
              in_dr4 = dVar33;
              ar6_00 = (uint *)((uint)uVar2 * 0x40 + _DAT_8c4aa510);
              uVar29 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              fVar26 = (float)((ulonglong)in_dr4 >> 0x20);
              if (cVar38 == '\0') {
                dVar33 = (double)CONCAT44(uVar29,(float)(int)*psVar24 * fVar26);
              }
              else {
                dVar33 = (double)CONCAT44(uVar29,(float)(int)*psVar24) * in_dr4;
              }
              if (cVar39 == '\0') {
                ar6_00[8] = SUB84(dVar33,0);
              }
              else {
                *(double *)(ar6_00 + 8) = in_xd2;
              }
              uVar29 = (undefined4)((ulonglong)dVar33 >> 0x20);
              if (cVar38 == '\0') {
                in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[1] * fVar26);
              }
              else {
                in_dr2 = (double)CONCAT44(uVar29,(float)(int)psVar24[1]) * in_dr4;
              }
              if (cVar39 == '\0') {
                ar6_00[9] = SUB84(in_dr2,0);
              }
              else {
                *(double *)(ar6_00 + 9) = in_xd2;
              }
              psVar24 = psVar24 + 2;
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                FUN_8c23d698(ar4_00,ar5_00,ar6_00,(int)(short)(uVar3 | uVar15));
              }
              uStack_3c = uStack_3c + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while ((int)uStack_3c < (int)(uVar4 - 2));
          }
        }
      }
      else {
        psVar24 = psVar24 + uVar4 * 2;
        puVar19 = puVar20 + uVar4;
      }
LAB_8c24a798:
      iStack_40 = iStack_40 + 1;
    }
  }
  else if (uVar4 == 0xc000) {
    if ((_DAT_8c4ab318 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c2432b6;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c242d56;
    }
                    
                    
    uVar6 = (*UNRECOVERED_JUMPTABLE)(ar4,uVar3);
    return uVar6;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c2499ec\n.set _FUN_8c2499ec, _FUN_8c2499ec_def\n");
