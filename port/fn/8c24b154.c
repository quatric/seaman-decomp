#include "../decls.h"
uint FUN_8c24b154_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  double dVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar8;
  uint uVar9;
  uint *ar6_00;
  undefined1 *puVar10;
  ushort *puVar11;
  int iVar12;
  uint *ar4_00;
  double *pdVar13;
  ushort uVar14;
  double *ar6_01;
  int iVar15;
  uint uVar16;
  int iVar17;
  double *unaff_r8;
  double *pdVar18;
  double *pdVar19;
  ushort *puVar20;
  ushort *puVar21;
  double *pdVar22;
  uint uVar23;
  uint *ar5_00;
  double in_dr0;
  float fVar24;
  float fVar25;
  float fVar26;
  double in_dr2;
  double dVar27;
  undefined4 uVar28;
  double in_dr4;
  double dVar29;
  double in_dr6;
  double dVar30;
  undefined4 uVar31;
  double in_dr8;
  double dVar32;
  double in_dr12;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double dVar33;
  double in_xd6;
  double in_xd8;
  double dVar34;
  double in_xd14;
  bool bVar35;
  char cVar36;
  char cVar37;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_2c;
  
  cVar37 = '\0';
  cVar36 = '\0';
  uVar7 = 0x3f000000;
  uVar14 = *ar4;
  uVar3 = uVar14 & 0x3fff;
  uVar4 = uVar14 & 0xc000;
  puVar20 = *(ushort **)(ar4 + 2);
  if ((uVar14 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    uStack_38 = 0;
    while( true ) {
      uVar28 = SUB84(in_dr6,0);
      uVar31 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= (int)uStack_38) break;
      uVar14 = *puVar20;
      puVar11 = puVar20 + 1;
      puVar21 = puVar20 + 2;
      puVar20 = puVar20 + 3;
      pdVar19 = (double *)((uint)*puVar21 * 0x40 + _DAT_8c4aa510);
      pdVar8 = (double *)((uint)uVar14 * 0x40 + _DAT_8c4aa510);
      pdVar18 = (double *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar8 & *(uint *)pdVar18 & *(uint *)pdVar19 & 0x3f) == 0) {
        if (((*(uint *)pdVar8 | *(uint *)pdVar18 | *(uint *)pdVar19) & 1) == 0) {
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)((int)pdVar18 + 4);
            dVar33 = (double)CONCAT44(uVar31,*(undefined4 *)((int)pdVar8 + 4));
          }
          else {
            dVar33 = *(double *)((int)pdVar18 + 4);
            in_xd2 = *(double *)((int)pdVar8 + 4);
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar19 + 1))
            ;
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 1),uVar31);
          }
          else {
            in_xd2 = pdVar19[1];
            dVar29 = pdVar18[1];
          }
          fVar26 = (float)((ulonglong)dVar29 >> 0x20);
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) - fVar26);
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          dVar32 = dVar29;
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar32 = in_xd0;
          }
          in_xd0 = dVar32;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar8 + 1));
          }
          else {
            in_xd2 = pdVar8[1];
          }
          if (cVar36 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar33,0));
          }
          else {
            dVar32 = in_dr0 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      *(undefined4 *)((int)pdVar19 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar19 + 4);
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      SUB84(dVar33,0) - SUB84(dVar29,0));
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          uVar4 = (uint)((ulonglong)dVar33 >> 0x20);
          dVar34 = dVar33;
          if (cVar37 == '\0') {
            dVar34 = (double)CONCAT44(uVar4,SUB84(dVar29,0));
          }
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      SUB84(dVar32,0) * SUB84(dVar33,0));
          }
          else {
            in_dr0 = dVar32 * dVar33;
          }
          in_dr2 = (double)((ulonglong)uVar4 << 0x20);
          if (cVar36 == '\0') {
            fVar26 = (float)((ulonglong)dVar34 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar34,0));
            bVar35 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar34 - in_dr0;
            bVar35 = in_dr2 < in_dr4;
          }
          uVar31 = SUB84(in_dr4,0);
          uStack_3c = 0;
          if (bVar35) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24b51a;
            uStack_3c = 0x8000;
          }
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)((int)pdVar8 + 0x3c) != (uStack_3c | uVar3)) {
            *(uint *)((int)pdVar8 + 0x3c) = uStack_3c | uVar3;
            pdVar13 = pdVar8 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar22 = pdVar8 + 2;
            uVar4 = uStack_3c;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar22,pdVar13,uStack_3c);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar22,pdVar13,uVar4);
            *(undefined4 *)(pdVar8 + 5) = uVar31;
            uVar28 = _DAT_8c4c263c;
            uVar31 = _DAT_8c4c2634;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              uVar28 = _DAT_8c4c2638;
              uVar31 = _DAT_8c4c2630;
            }
            uVar5 = float_to_color_u8(puVar10,pdVar22,pdVar13,uVar4);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar5;
          }
          if (cVar37 == '\0') {
            pdVar22 = (double *)((int)pdVar8 + 0x34);
            dVar33 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar7);
            dVar29 = (double)CONCAT44(uVar7,SUB84(in_dr0,0));
          }
          else {
            dVar33 = pdVar8[6];
            pdVar22 = pdVar8 + 7;
            dVar29 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar33 >> 0x20) + SUB84(dVar33,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar33,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar22,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
            dVar29 = (double)CONCAT44(uVar7,uVar31);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar32 = *pdVar22;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar22 = (double *)((int)pdVar8 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar22 = SUB84(dVar32,0);
          }
          else {
            *pdVar22 = in_xd2;
          }
          CacheBlockWriteBack(pdVar22);
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar33,0));
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar32,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar33 = *pdVar8;
            dVar32 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(pdVar8 + 2);
            dVar34 = (double)CONCAT44(uVar31,SUB84(dVar29,0));
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar28);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar31;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar32 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar33 >> 0x20);
          }
          else {
            dVar34 = pdVar8[2];
            dVar29 = pdVar8[3];
            unaff_r8[3] = dVar29;
            unaff_r8[2] = dVar34;
            unaff_r8[1] = dVar32;
            *unaff_r8 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          uVar28 = SUB84(dVar34,0);
          *(undefined4 *)pdVar18 = 0xe0000000;
          CacheBlockWriteBack(pdVar18);
          if (*(uint *)((int)pdVar18 + 0x3c) != (uStack_3c | uVar3)) {
            *(uint *)((int)pdVar18 + 0x3c) = uStack_3c | uVar3;
            pdVar22 = pdVar18 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar8 = pdVar18 + 2;
            uVar4 = uStack_3c;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar8,pdVar22,uStack_3c);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar8,pdVar22,uVar4);
            *(undefined4 *)(pdVar18 + 5) = uVar31;
            uVar28 = _DAT_8c4c2634;
            uVar31 = _DAT_8c4c263c;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              uVar28 = _DAT_8c4c2630;
              uVar31 = _DAT_8c4c2638;
            }
            uVar5 = float_to_color_u8(puVar10,pdVar8,pdVar22,uVar4);
            *(undefined4 *)((int)pdVar18 + 0x2c) = uVar5;
          }
          if (cVar37 == '\0') {
            pdVar8 = (double *)((int)pdVar18 + 0x34);
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 6),uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar18[6];
            pdVar8 = pdVar18 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar29,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
            dVar29 = (double)CONCAT44(uVar7,uVar28);
          }
          else {
            pdVar18[4] = in_xd2;
            dVar32 = *pdVar8;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar8 = (double *)((int)pdVar18 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar8 = SUB84(dVar32,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)pdVar18,SUB84(dVar33,0));
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 4),SUB84(dVar32,0));
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar33 = *pdVar18;
            dVar32 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(pdVar18 + 2);
            dVar34 = (double)CONCAT44(uVar28,SUB84(dVar29,0));
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 0x14),uVar31);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar18 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar28;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar32 >> 0x20);
            pdVar8 = unaff_r8 + 6;
            *(int *)pdVar8 = (int)((ulonglong)dVar33 >> 0x20);
          }
          else {
            dVar34 = pdVar18[2];
            dVar29 = pdVar18[3];
            unaff_r8[7] = dVar29;
            unaff_r8[6] = dVar34;
            unaff_r8[5] = dVar32;
            pdVar8 = unaff_r8 + 4;
            *pdVar8 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          uVar28 = SUB84(dVar34,0);
          *(undefined4 *)pdVar19 = 0xf0000000;
          CacheBlockWriteBack(pdVar19);
          if (*(uint *)((int)pdVar19 + 0x3c) != (uStack_3c | uVar3)) {
            *(uint *)((int)pdVar19 + 0x3c) = uStack_3c | uVar3;
            pdVar22 = pdVar19 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar18 = pdVar19 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar18,pdVar22,uStack_3c);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar18,pdVar22,uStack_3c);
            *(undefined4 *)(pdVar19 + 5) = uVar31;
            uVar28 = _DAT_8c4c2634;
            uVar31 = _DAT_8c4c263c;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              uVar28 = _DAT_8c4c2630;
              uVar31 = _DAT_8c4c2638;
            }
            uVar5 = float_to_color_u8(puVar10,pdVar18,pdVar22,uStack_3c);
            *(undefined4 *)((int)pdVar19 + 0x2c) = uVar5;
          }
          if (cVar37 == '\0') {
            pdVar18 = (double *)((int)pdVar19 + 0x34);
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar19 + 6),uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar19[6];
            pdVar18 = pdVar19 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar19 + 4) = SUB84(dVar29,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar18,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
            dVar29 = (double)CONCAT44(uVar7,uVar28);
          }
          else {
            pdVar19[4] = in_xd2;
            dVar32 = *pdVar18;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar18 = (double *)((int)pdVar19 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar18 = SUB84(dVar32,0);
          }
          else {
            *pdVar18 = in_xd2;
          }
          CacheBlockWriteBack(pdVar18);
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar19,SUB84(dVar33,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar19 + 4),SUB84(dVar32,0));
            pdVar19 = pdVar19 + 1;
          }
          else {
            in_dr0 = *pdVar19;
            in_dr2 = pdVar19[1];
            pdVar19 = pdVar19 + 2;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(pdVar19 + 2);
            in_dr4 = (double)CONCAT44(uVar28,SUB84(dVar29,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar19 + 0x14),uVar31);
            *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar19 + 0x14);
            *(undefined4 *)(pdVar8 + 7) = uVar28;
            *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar8 = pdVar8 + 6;
            *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar19[2];
            in_dr6 = pdVar19[3];
            pdVar8[7] = in_dr6;
            pdVar8[6] = in_dr4;
            pdVar8[5] = in_dr2;
            pdVar8 = pdVar8 + 4;
            *pdVar8 = in_dr0;
          }
          unaff_r8 = pdVar8 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
        }
        else {
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(pdVar18 + 3);
            uVar31 = *(undefined4 *)((int)pdVar18 + 0x14);
            pdVar22 = (double *)((int)pdVar8 + 0x14);
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar31);
            dVar29 = (double)CONCAT44(uVar28,SUB84(in_dr0,0));
            dVar33 = in_xd2;
            in_dr8 = (double)CONCAT44(uVar31,SUB84(in_dr8,0));
          }
          else {
            dVar29 = pdVar18[3];
            dVar33 = *(double *)((int)pdVar18 + 0x14);
            pdVar22 = pdVar8 + 3;
            uVar31 = (undefined4)((ulonglong)dVar33 >> 0x20);
            in_dr8 = dVar33;
            in_xd6 = dVar29;
          }
          dVar32 = *pdVar22;
          fVar24 = (float)((ulonglong)dVar32 >> 0x20);
          fVar26 = SUB84(dVar32,0);
          if (cVar36 == '\0') {
            fVar25 = SUB84(in_dr2,0) * fVar24;
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * fVar26,SUB84(dVar29,0));
          }
          else {
            fVar25 = SUB84(in_dr2 * dVar32,0);
            dVar29 = dVar29 * dVar32;
          }
          if (cVar37 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 2),uVar28);
            in_dr8 = (double)CONCAT44(uVar31,*(undefined4 *)(pdVar8 + 2));
            dVar34 = (double)CONCAT44(uVar28,fVar25);
          }
          else {
            in_dr6 = pdVar18[2];
            dVar34 = in_xd6;
          }
          if (cVar36 == '\0') {
            dVar34 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * SUB84(in_dr8,0),
                                      SUB84(dVar34,0));
          }
          else {
            dVar34 = dVar34 * in_dr8;
          }
          dVar30 = in_dr8;
          if (cVar37 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      (int)((ulonglong)in_dr8 >> 0x20));
            dVar30 = in_xd0;
          }
          in_xd0 = dVar30;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) - SUB84(dVar34,0),
                                      SUB84(dVar29,0));
          }
          else {
            dVar29 = dVar29 - dVar34;
          }
          uVar31 = (undefined4)((ulonglong)in_dr6 >> 0x20);
          in_xd2 = in_dr6;
          if (cVar37 == '\0') {
            dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),uVar31);
            in_xd2 = dVar33;
          }
          if (cVar36 == '\0') {
            dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),SUB84(dVar34,0) * fVar24);
          }
          else {
            dVar34 = dVar34 * dVar32;
          }
          dVar33 = in_dr6;
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(uVar31,SUB84(in_dr12,0));
          }
          if (cVar36 == '\0') {
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * fVar26,SUB84(dVar33,0));
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      SUB84(dVar29,0) * SUB84(in_dr8,0));
            fVar24 = SUB84(dVar34,0) - (float)((ulonglong)dVar34 >> 0x20);
          }
          else {
            in_dr12 = dVar33 * dVar32;
            dVar29 = dVar29 * in_dr8;
            fVar24 = SUB84(dVar34 - dVar34,0);
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar19 + 0x14),fVar24);
          }
          else {
            dVar33 = *(double *)((int)pdVar19 + 0x14);
          }
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      SUB84(dVar29,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar29 = dVar29 - in_dr12;
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar19 + 2))
            ;
          }
          else {
            in_xd2 = pdVar19[2];
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar33,0) +
                                      (float)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0));
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar19 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar29,0),SUB84(dVar29,0));
          }
          else {
            in_xd2 = pdVar19[3];
            in_dr0 = in_xd0;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar33,0) +
                                    (float)((ulonglong)dVar33 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar33 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar37 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),fVar26);
          }
          if (cVar36 == '\0') {
            bVar35 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar35 = in_dr2 < in_dr4;
          }
          uStack_3c = 0;
          if (bVar35) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24b51a;
            uStack_3c = 0x8000;
          }
          FUN_8c23dc42(pdVar8,pdVar18,pdVar19,uStack_3c | (int)(short)uVar3);
        }
      }
LAB_8c24b51a:
      uStack_38 = uStack_38 + 1;
    }
  }
  else if (uVar4 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_2c = 0;
    while( true ) {
      uVar31 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= iStack_2c) break;
      puVar11 = puVar20 + 3;
      pdVar22 = (double *)((uint)puVar20[2] * 0x40 + _DAT_8c4aa510);
      pdVar18 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
      pdVar19 = (double *)((uint)puVar20[1] * 0x40 + _DAT_8c4aa510);
      puVar20 = puVar20 + 4;
      pdVar8 = (double *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar18 & *(uint *)pdVar19 & *(uint *)pdVar22 & *(uint *)pdVar8 & 0x3f) == 0) {
        if (((*(uint *)pdVar18 | *(uint *)pdVar19 | *(uint *)pdVar22 | *(uint *)pdVar8) & 1) == 0) {
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)((int)pdVar19 + 4);
            dVar33 = (double)CONCAT44(uVar31,*(undefined4 *)((int)pdVar18 + 4));
          }
          else {
            dVar33 = *(double *)((int)pdVar19 + 4);
            in_xd2 = *(double *)((int)pdVar18 + 4);
            in_xd4 = dVar33;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar22 + 1))
            ;
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar19 + 1),uVar31);
          }
          else {
            in_xd2 = pdVar22[1];
            dVar29 = pdVar19[1];
          }
          fVar26 = (float)((ulonglong)dVar29 >> 0x20);
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) - fVar26);
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          dVar32 = dVar29;
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar32 = in_xd0;
          }
          in_xd0 = dVar32;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar18 + 1))
            ;
          }
          else {
            in_xd2 = pdVar18[1];
          }
          if (cVar36 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar33,0));
          }
          else {
            dVar32 = in_dr0 - dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      *(undefined4 *)((int)pdVar22 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar22 + 4);
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      SUB84(dVar33,0) - SUB84(dVar29,0));
          }
          else {
            dVar33 = dVar33 - dVar29;
          }
          uVar4 = (uint)((ulonglong)dVar33 >> 0x20);
          dVar34 = dVar33;
          if (cVar37 == '\0') {
            dVar34 = (double)CONCAT44(uVar4,SUB84(dVar29,0));
          }
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      SUB84(dVar32,0) * SUB84(dVar33,0));
          }
          else {
            in_dr0 = dVar32 * dVar33;
          }
          in_dr2 = (double)((ulonglong)uVar4 << 0x20);
          if (cVar36 == '\0') {
            fVar26 = (float)((ulonglong)dVar34 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar34,0));
            bVar35 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar34 - in_dr0;
            bVar35 = in_dr2 < in_dr4;
          }
          uVar31 = SUB84(in_dr4,0);
          uStack_38 = 0;
          if (bVar35) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24b9a2;
            uStack_38 = 0x8000;
          }
          *(undefined4 *)pdVar18 = 0xe0000000;
          CacheBlockWriteBack(pdVar18);
          if (*(uint *)((int)pdVar18 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar18 + 0x3c) = uStack_38 | uVar3;
            ar6_01 = pdVar18 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar13 = pdVar18 + 2;
            uVar4 = uStack_38;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar13,ar6_01,uStack_38);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar13,ar6_01,uVar4);
            *(undefined4 *)(pdVar18 + 5) = uVar31;
            uVar31 = _DAT_8c4c2634;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2630;
            }
            uVar28 = float_to_color_u8(puVar10,pdVar13,ar6_01,uVar4);
            *(undefined4 *)((int)pdVar18 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            pdVar13 = (double *)((int)pdVar18 + 0x34);
            dVar33 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 6),uVar7);
            dVar29 = (double)CONCAT44(uVar7,SUB84(in_dr0,0));
          }
          else {
            dVar33 = pdVar18[6];
            pdVar13 = pdVar18 + 7;
            dVar29 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar33 >> 0x20) + SUB84(dVar33,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar33,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar13,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
            dVar29 = (double)CONCAT44(uVar7,uVar31);
          }
          else {
            pdVar18[4] = in_xd2;
            dVar32 = *pdVar13;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar13 = (double *)((int)pdVar18 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar13 = SUB84(dVar32,0);
          }
          else {
            *pdVar13 = in_xd2;
          }
          CacheBlockWriteBack(pdVar13);
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)pdVar18,SUB84(dVar33,0));
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 4),SUB84(dVar32,0));
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar33 = *pdVar18;
            dVar32 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(pdVar18 + 2);
            dVar29 = (double)CONCAT44(uVar31,SUB84(dVar29,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar18 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar31;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar32 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar33 >> 0x20);
          }
          else {
            dVar29 = pdVar18[2];
            unaff_r8[3] = pdVar18[3];
            unaff_r8[2] = dVar29;
            unaff_r8[1] = dVar32;
            *unaff_r8 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          *(undefined4 *)pdVar19 = 0xe0000000;
          CacheBlockWriteBack(pdVar19);
          if (*(uint *)((int)pdVar19 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar19 + 0x3c) = uStack_38 | uVar3;
            pdVar13 = pdVar19 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar18 = pdVar19 + 2;
            uVar4 = uStack_38;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar18,pdVar13,uStack_38);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar18,pdVar13,uVar4);
            *(undefined4 *)(pdVar19 + 5) = uVar31;
            uVar31 = _DAT_8c4c2634;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2630;
            }
            uVar28 = float_to_color_u8(puVar10,pdVar18,pdVar13,uVar4);
            *(undefined4 *)((int)pdVar19 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            pdVar18 = (double *)((int)pdVar19 + 0x34);
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar19 + 6),uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar19[6];
            pdVar18 = pdVar19 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar19 + 4) = SUB84(dVar29,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar18,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
            dVar29 = (double)CONCAT44(uVar7,uVar31);
          }
          else {
            pdVar19[4] = in_xd2;
            dVar32 = *pdVar18;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar18 = (double *)((int)pdVar19 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar18 = SUB84(dVar32,0);
          }
          else {
            *pdVar18 = in_xd2;
          }
          CacheBlockWriteBack(pdVar18);
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)pdVar19,SUB84(dVar33,0));
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar19 + 4),SUB84(dVar32,0));
            pdVar19 = pdVar19 + 1;
          }
          else {
            dVar33 = *pdVar19;
            dVar32 = pdVar19[1];
            pdVar19 = pdVar19 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(pdVar19 + 2);
            dVar29 = (double)CONCAT44(uVar31,SUB84(dVar29,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar19 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar31;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar32 >> 0x20);
            pdVar18 = unaff_r8 + 6;
            *(int *)pdVar18 = (int)((ulonglong)dVar33 >> 0x20);
          }
          else {
            dVar29 = pdVar19[2];
            unaff_r8[7] = pdVar19[3];
            unaff_r8[6] = dVar29;
            unaff_r8[5] = dVar32;
            pdVar18 = unaff_r8 + 4;
            *pdVar18 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          *(undefined4 *)pdVar22 = 0xe0000000;
          CacheBlockWriteBack(pdVar22);
          if (*(uint *)((int)pdVar22 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar22 + 0x3c) = uStack_38 | uVar3;
            pdVar13 = pdVar22 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar19 = pdVar22 + 2;
            uVar4 = uStack_38;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar19,pdVar13,uStack_38);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar19,pdVar13,uVar4);
            *(undefined4 *)(pdVar22 + 5) = uVar31;
            uVar31 = _DAT_8c4c2634;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2630;
            }
            uVar28 = float_to_color_u8(puVar10,pdVar19,pdVar13,uVar4);
            *(undefined4 *)((int)pdVar22 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            pdVar19 = (double *)((int)pdVar22 + 0x34);
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar22 + 6),uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar22[6];
            pdVar19 = pdVar22 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar22 + 4) = SUB84(dVar29,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar19,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
            dVar29 = (double)CONCAT44(uVar7,uVar31);
          }
          else {
            pdVar22[4] = in_xd2;
            dVar32 = *pdVar19;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar19 = (double *)((int)pdVar22 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar19 = SUB84(dVar32,0);
          }
          else {
            *pdVar19 = in_xd2;
          }
          CacheBlockWriteBack(pdVar19);
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)pdVar22,SUB84(dVar33,0));
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar22 + 4),SUB84(dVar32,0));
            pdVar22 = pdVar22 + 1;
          }
          else {
            dVar33 = *pdVar22;
            dVar32 = pdVar22[1];
            pdVar22 = pdVar22 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(pdVar22 + 2);
            dVar29 = (double)CONCAT44(uVar31,SUB84(dVar29,0));
            *(undefined4 *)((int)pdVar18 + 0x3c) = *(undefined4 *)((int)pdVar22 + 0x14);
            *(undefined4 *)(pdVar18 + 7) = uVar31;
            *(int *)((int)pdVar18 + 0x34) = (int)((ulonglong)dVar32 >> 0x20);
            pdVar18 = pdVar18 + 6;
            *(int *)pdVar18 = (int)((ulonglong)dVar33 >> 0x20);
          }
          else {
            dVar29 = pdVar22[2];
            pdVar18[7] = pdVar22[3];
            pdVar18[6] = dVar29;
            pdVar18[5] = dVar32;
            pdVar18 = pdVar18 + 4;
            *pdVar18 = dVar33;
          }
          uVar31 = SUB84(dVar29,0);
          *(undefined4 *)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)((int)pdVar8 + 0x3c) != (uStack_38 | uVar3)) {
            *(uint *)((int)pdVar8 + 0x3c) = uStack_38 | uVar3;
            puVar10 = &DAT_8c4c2620;
            pdVar22 = pdVar8 + 6;
            pdVar19 = pdVar8 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar19,pdVar22,uStack_38);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar19,pdVar22,uStack_38);
            *(undefined4 *)(pdVar8 + 5) = uVar31;
            uVar31 = _DAT_8c4c2634;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar31 = _DAT_8c4c2630;
            }
            uVar28 = float_to_color_u8(puVar10,pdVar19,pdVar22,uStack_38);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar28;
          }
          if (cVar37 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar7);
            pdVar19 = (double *)((int)pdVar8 + 0x34);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
          }
          else {
            dVar29 = pdVar8[6];
            pdVar19 = pdVar8 + 7;
            dVar33 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar29,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar19,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar33,0));
            dVar29 = (double)CONCAT44(uVar7,uVar31);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar32 = *pdVar19;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar19 = (double *)((int)pdVar8 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar19 = SUB84(dVar32,0);
          }
          else {
            *pdVar19 = in_xd2;
          }
          CacheBlockWriteBack(pdVar19);
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar33,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar32,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(pdVar8 + 2);
            in_dr4 = (double)CONCAT44(uVar31,SUB84(dVar29,0));
            *(undefined4 *)((int)pdVar18 + 0x3c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(pdVar18 + 7) = uVar31;
            *(int *)((int)pdVar18 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar18 = pdVar18 + 6;
            *(int *)pdVar18 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            pdVar18[7] = pdVar8[3];
            pdVar18[6] = in_dr4;
            pdVar18[5] = in_dr2;
            pdVar18 = pdVar18 + 4;
            *pdVar18 = in_dr0;
          }
          unaff_r8 = pdVar18 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
        }
        else {
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(pdVar19 + 3);
            uVar28 = *(undefined4 *)((int)pdVar19 + 0x14);
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 0x14),uVar31);
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 3),uVar28);
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar28);
            dVar34 = (double)CONCAT44(uVar31,SUB84(in_dr0,0));
            dVar33 = in_xd2;
          }
          else {
            dVar34 = pdVar19[3];
            dVar33 = *(double *)((int)pdVar19 + 0x14);
            dVar32 = *(double *)((int)pdVar18 + 0x14);
            dVar29 = pdVar18[3];
            uVar28 = SUB84(dVar29,0);
            uVar31 = SUB84(dVar32,0);
            in_xd4 = dVar33;
            in_xd8 = dVar34;
          }
          fVar26 = (float)((ulonglong)dVar29 >> 0x20);
          fVar24 = (float)((ulonglong)dVar32 >> 0x20);
          if (cVar36 == '\0') {
            fVar25 = SUB84(in_dr2,0) * fVar26;
            dVar34 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * fVar24,SUB84(dVar34,0));
          }
          else {
            fVar25 = SUB84(in_dr2 * dVar29,0);
            dVar34 = dVar34 * dVar32;
          }
          if (cVar37 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar18 + 2),*(undefined4 *)(pdVar19 + 2));
            dVar27 = (double)CONCAT44(uVar31,fVar25);
          }
          else {
            in_xd6 = pdVar19[2];
            dVar30 = pdVar18[2];
            dVar27 = in_xd8;
          }
          fVar25 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar36 == '\0') {
            dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar25,SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 * dVar30;
          }
          dVar2 = in_xd4;
          if (cVar37 == '\0') {
            dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),uVar28);
            dVar2 = in_xd0;
          }
          in_xd0 = dVar2;
          if (cVar36 == '\0') {
            dVar34 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) - SUB84(dVar27,0),
                                      SUB84(dVar34,0));
          }
          else {
            dVar34 = dVar34 - dVar27;
          }
          in_xd2 = in_xd6;
          if (cVar37 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar30,0));
            in_xd2 = dVar33;
          }
          if (cVar36 == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar27,0) * fVar26);
          }
          else {
            dVar27 = dVar27 * dVar29;
          }
          dVar33 = in_xd6;
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(SUB84(dVar30,0),SUB84(in_dr12,0));
          }
          if (cVar36 == '\0') {
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * fVar24,SUB84(dVar33,0));
            dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),SUB84(dVar34,0) * fVar25);
            fVar26 = SUB84(dVar27,0) - (float)((ulonglong)dVar27 >> 0x20);
          }
          else {
            in_dr12 = dVar33 * dVar32;
            dVar34 = dVar34 * dVar30;
            fVar26 = SUB84(dVar27 - dVar27,0);
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar22 + 0x14),fVar26);
          }
          else {
            dVar33 = *(double *)((int)pdVar22 + 0x14);
          }
          if (cVar36 == '\0') {
            dVar34 = (double)CONCAT44((int)((ulonglong)dVar34 >> 0x20),
                                      SUB84(dVar34,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar34 = dVar34 - in_dr12;
            dVar33 = dVar33 * dVar33;
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar22 + 2))
            ;
          }
          else {
            in_xd2 = pdVar22[2];
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * SUB84(dVar33,0) +
                                      (float)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0));
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(pdVar22 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar34,0),SUB84(dVar34,0));
          }
          else {
            in_xd2 = pdVar22[3];
            in_dr0 = in_xd0;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar33,0) +
                                    (float)((ulonglong)dVar33 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar33 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar37 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),uVar28);
          }
          if (cVar36 == '\0') {
            bVar35 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar35 = in_dr2 < in_dr4;
          }
          uStack_38 = 0;
          if (bVar35) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24b9a2;
            uStack_38 = 0x8000;
          }
          if ((*(uint *)pdVar18 & *(uint *)pdVar19 & *(uint *)pdVar22 & 1) == 0) {
            FUN_8c23dc42(pdVar18,pdVar19,pdVar22,uStack_38 | (int)(short)uVar3);
          }
          if ((*(uint *)pdVar19 & *(uint *)pdVar22 & *(uint *)pdVar8 & 1) == 0) {
            FUN_8c23dc42(pdVar19,pdVar22,pdVar8,uStack_38 | (int)(short)uVar3);
          }
        }
      }
LAB_8c24b9a2:
      iStack_2c = iStack_2c + 1;
    }
  }
  else if (uVar4 == 0x8000) {
    iStack_40 = 0;
    while( true ) {
      uVar31 = SUB84(in_dr6,0);
      uVar28 = SUB84(in_dr4,0);
      uVar4 = (uint)ar4[1];
      if ((int)uVar4 <= iStack_40) break;
      iVar15 = 0;
      puVar21 = puVar20 + 1;
      uVar16 = 0;
      uVar23 = 0xffffffff;
      uVar4 = (uint)*puVar20;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar4;
      puVar11 = puVar21;
      if (uVar4 != 0) {
        do {
          uVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          iVar15 = iVar15 + 1;
          uVar9 = *(uint *)((uint)uVar14 * 0x40 + _DAT_8c4aa510);
          uVar23 = uVar23 & uVar9;
          uVar16 = uVar16 | uVar9;
        } while (iVar15 < (int)uVar4);
      }
      if ((uVar23 & 0x3f) == 0) {
        if ((uVar16 & 1) == 0) {
          iVar15 = (uint)puVar20[2] * 0x40 + _DAT_8c4aa510;
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(iVar15 + 4);
          }
          else {
            in_xd4 = *(double *)(iVar15 + 4);
          }
          iVar12 = (uint)*puVar21 * 0x40 + _DAT_8c4aa510;
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(uVar28,*(undefined4 *)(iVar12 + 4));
          }
          else {
            in_xd2 = *(double *)(iVar12 + 4);
            dVar33 = in_xd4;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar33,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar33;
          }
          iVar17 = (uint)puVar20[3] * 0x40 + _DAT_8c4aa510;
          if (cVar37 == '\0') {
            fVar26 = *(float *)(iVar15 + 8);
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(iVar17 + 8));
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar26);
            dVar29 = (double)CONCAT44(fVar26,uVar28);
          }
          else {
            in_xd0 = *(double *)(iVar15 + 8);
            in_xd2 = *(double *)(iVar17 + 8);
            fVar26 = (float)((ulonglong)in_xd0 >> 0x20);
            dVar29 = in_xd0;
          }
          if (cVar36 == '\0') {
            fVar26 = SUB84(dVar33,0) - fVar26;
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * fVar26,fVar26);
          }
          else {
            dVar33 = (dVar33 - dVar29) * (dVar33 - dVar29);
          }
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),*(undefined4 *)(iVar12 + 8));
          }
          else {
            in_xd2 = *(double *)(iVar12 + 8);
          }
          if (cVar36 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar33,0));
          }
          else {
            dVar32 = in_dr0 - dVar33;
          }
          uVar28 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44(uVar28,*(undefined4 *)(iVar17 + 4));
            dVar29 = (double)CONCAT44(uVar28,SUB84(dVar29,0));
          }
          else {
            in_xd2 = *(double *)(iVar17 + 4);
            dVar29 = dVar33;
          }
          if (cVar36 == '\0') {
            fVar26 = SUB84(dVar33,0) - SUB84(dVar29,0);
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),fVar26);
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar32,0) * fVar26);
          }
          else {
            dVar33 = dVar33 - dVar29;
            in_dr0 = dVar32 * dVar33;
          }
          in_dr2 = (double)((ulonglong)dVar33 & 0xffffffff00000000);
          if (cVar36 == '\0') {
            fVar26 = (float)((ulonglong)dVar29 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar26,SUB84(dVar29,0));
            bVar35 = 0.0 < fVar26;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar35 = in_dr2 < in_dr4;
          }
          uVar28 = SUB84(in_dr4,0);
          uStack_44 = 0;
          if (bVar35) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24bcd6;
            uStack_44 = 0x8000;
          }
          _DAT_8c4aa520 = _DAT_8c4aa520 + uVar4;
          uStack_38 = 0;
          if (0 < (int)(uVar4 - 1)) {
            do {
              uVar31 = SUB84(in_dr6,0);
              uVar28 = SUB84(in_dr4,0);
              uVar5 = SUB84(in_dr0,0);
              uVar14 = *puVar21;
              puVar21 = puVar21 + 1;
              pdVar8 = (double *)((uint)uVar14 * 0x40 + _DAT_8c4aa510);
              *(undefined4 *)pdVar8 = 0xe0000000;
              CacheBlockWriteBack(pdVar8);
              if (*(uint *)((int)pdVar8 + 0x3c) != (uVar3 | uStack_44)) {
                puVar10 = &DAT_8c4c2620;
                pdVar19 = pdVar8 + 6;
                *(uint *)((int)pdVar8 + 0x3c) = uVar3 | uStack_44;
                pdVar18 = pdVar8 + 2;
                uVar16 = uStack_44;
                FUN_8c23bae2(&DAT_8c4c2620,pdVar18,pdVar19,uStack_44);
                if (cVar37 != '\0') {
                  in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
                  in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
                }
                uVar31 = float_to_color_u8(puVar10,pdVar18,pdVar19,uVar16);
                *(undefined4 *)(pdVar8 + 5) = uVar31;
                uVar28 = _DAT_8c4c2634;
                uVar31 = _DAT_8c4c263c;
                if (cVar37 != '\0') {
                  in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
                  in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
                  uVar28 = _DAT_8c4c2630;
                  uVar31 = _DAT_8c4c2638;
                }
                uVar6 = float_to_color_u8(puVar10,pdVar18,pdVar19,uVar16);
                *(undefined4 *)((int)pdVar8 + 0x2c) = uVar6;
              }
              if (cVar37 == '\0') {
                pdVar18 = (double *)((int)pdVar8 + 0x34);
                dVar33 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar7);
                dVar29 = (double)CONCAT44(uVar7,uVar5);
              }
              else {
                dVar33 = pdVar8[6];
                pdVar18 = pdVar8 + 7;
                dVar29 = in_xd14;
                in_xd2 = in_xd14;
              }
              if (cVar36 == '\0') {
                dVar33 = (double)(ulonglong)
                                 (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                        (float)((ulonglong)dVar33 >> 0x20) + SUB84(dVar33,0));
              }
              if (cVar37 == '\0') {
                *(int *)(pdVar8 + 4) = SUB84(dVar33,0);
                dVar32 = (double)CONCAT44(*(undefined4 *)pdVar18,uVar7);
                dVar33 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
                dVar29 = (double)CONCAT44(uVar7,uVar28);
              }
              else {
                pdVar8[4] = in_xd2;
                dVar32 = *pdVar18;
                in_xd2 = in_xd14;
                dVar33 = in_xd14;
                dVar29 = in_xd14;
              }
              pdVar18 = (double *)((int)pdVar8 + 0x24);
              if (cVar36 == '\0') {
                dVar32 = (double)(ulonglong)
                                 (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                        (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
              }
              if (cVar37 == '\0') {
                *(int *)pdVar18 = SUB84(dVar32,0);
              }
              else {
                *pdVar18 = in_xd2;
              }
              CacheBlockWriteBack(pdVar18);
              if (cVar37 == '\0') {
                in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar33,0));
                dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar32,0));
                pdVar8 = pdVar8 + 1;
              }
              else {
                in_dr0 = *pdVar8;
                dVar33 = pdVar8[1];
                pdVar8 = pdVar8 + 2;
              }
              if (cVar37 == '\0') {
                uVar28 = *(undefined4 *)(pdVar8 + 2);
                in_dr4 = (double)CONCAT44(uVar28,SUB84(dVar29,0));
                in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar31);
                *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
                *(undefined4 *)(unaff_r8 + 3) = uVar28;
                *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar33 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                in_dr4 = pdVar8[2];
                in_dr6 = pdVar8[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = dVar33;
                *unaff_r8 = in_dr0;
              }
              uVar31 = SUB84(in_dr6,0);
              uVar28 = SUB84(in_dr4,0);
              unaff_r8 = unaff_r8 + 4;
              uStack_38 = uStack_38 + 1;
            } while ((int)uStack_38 < (int)(uVar4 - 1));
          }
          uVar5 = SUB84(in_dr0,0);
          puVar20 = puVar21 + 1;
          pdVar8 = (double *)((uint)*puVar21 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(uint *)((int)pdVar8 + 0x3c) != (uStack_44 | uVar3)) {
            *(uint *)((int)pdVar8 + 0x3c) = uStack_44 | uVar3;
            pdVar19 = pdVar8 + 6;
            puVar10 = &DAT_8c4c2620;
            pdVar18 = pdVar8 + 2;
            FUN_8c23bae2(&DAT_8c4c2620,pdVar18,pdVar19,uStack_44);
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
            }
            uVar31 = float_to_color_u8(puVar10,pdVar18,pdVar19,uStack_44);
            *(undefined4 *)(pdVar8 + 5) = uVar31;
            uVar28 = _DAT_8c4c2634;
            uVar31 = _DAT_8c4c263c;
            if (cVar37 != '\0') {
              in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
              in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
              uVar28 = _DAT_8c4c2630;
              uVar31 = _DAT_8c4c2638;
            }
            uVar6 = float_to_color_u8(puVar10,pdVar18,pdVar19,uStack_44);
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar6;
          }
          if (cVar37 == '\0') {
            pdVar18 = (double *)((int)pdVar8 + 0x34);
            dVar33 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar7);
            dVar29 = (double)CONCAT44(uVar7,uVar5);
          }
          else {
            dVar33 = pdVar8[6];
            pdVar18 = pdVar8 + 7;
            dVar29 = in_xd14;
            in_xd2 = in_xd14;
          }
          if (cVar36 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar33 >> 0x20) + SUB84(dVar33,0));
          }
          if (cVar37 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar33,0);
            dVar32 = (double)CONCAT44(*(undefined4 *)pdVar18,uVar7);
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
            dVar29 = (double)CONCAT44(uVar7,uVar28);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar32 = *pdVar18;
            in_xd2 = in_xd14;
            dVar33 = in_xd14;
            dVar29 = in_xd14;
          }
          pdVar18 = (double *)((int)pdVar8 + 0x24);
          if (cVar36 == '\0') {
            dVar32 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0));
          }
          if (cVar37 == '\0') {
            *(int *)pdVar18 = SUB84(dVar32,0);
          }
          else {
            *pdVar18 = in_xd2;
          }
          CacheBlockWriteBack(pdVar18);
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar33,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar32,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(pdVar8 + 2);
            in_dr4 = (double)CONCAT44(uVar28,SUB84(dVar29,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar31);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar28;
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
        else {
          iVar15 = (uint)puVar20[2] * 0x40 + _DAT_8c4aa510;
          if (cVar37 == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)(iVar15 + 0x18),SUB84(in_dr8,0));
          }
          else {
            in_dr8 = *(double *)(iVar15 + 0x18);
          }
          iVar12 = (uint)*puVar21 * 0x40 + _DAT_8c4aa510;
          uVar5 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          if (cVar37 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x14),uVar28);
            dVar33 = (double)CONCAT44(uVar5,SUB84(in_dr0,0));
          }
          else {
            dVar29 = *(double *)(iVar12 + 0x14);
            dVar33 = in_dr8;
          }
          if (cVar37 == '\0') {
            uVar31 = *(undefined4 *)(iVar15 + 0x14);
            in_dr8 = (double)CONCAT44(uVar5,*(undefined4 *)(iVar12 + 0x18));
          }
          else {
            in_xd6 = *(double *)(iVar15 + 0x14);
          }
          fVar26 = (float)((ulonglong)dVar29 >> 0x20);
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * fVar26,SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 * dVar29;
          }
          dVar32 = in_xd6;
          if (cVar37 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar31);
            dVar32 = in_xd2;
          }
          if (cVar36 == '\0') {
            dVar34 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                      SUB84(in_dr2,0) * SUB84(in_dr8,0));
          }
          else {
            dVar34 = in_dr2 * in_dr8;
          }
          iVar17 = (uint)puVar20[3] * 0x40 + _DAT_8c4aa510;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar34,0),
                                      SUB84(dVar33,0));
          }
          else {
            dVar33 = dVar33 - dVar34;
          }
          if (cVar37 == '\0') {
            uVar28 = *(undefined4 *)(iVar15 + 0x10);
            dVar29 = (double)CONCAT44(fVar26,uVar28);
            in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x10),uVar31);
            dVar34 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),uVar28);
          }
          else {
            dVar32 = *(double *)(iVar15 + 0x10);
            in_dr6 = *(double *)(iVar12 + 0x10);
            uVar28 = SUB84(dVar29,0);
            dVar34 = in_dr8;
            in_xd4 = dVar32;
          }
          fVar26 = (float)((ulonglong)in_dr6 >> 0x20);
          if (cVar36 == '\0') {
            dVar34 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * fVar26,
                                      SUB84(dVar34,0) * SUB84(in_dr8,0));
          }
          else {
            dVar34 = dVar34 * in_dr6 * in_dr8;
          }
          dVar30 = in_xd4;
          dVar27 = in_xd6;
          if (cVar37 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(in_dr6,0));
            dVar30 = (double)CONCAT44(uVar28,SUB84(in_dr12,0));
            dVar27 = in_xd0;
          }
          in_xd0 = dVar27;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) * fVar26);
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) *
                                       (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar30,0));
            fVar26 = SUB84(dVar34,0) - (float)((ulonglong)dVar34 >> 0x20);
          }
          else {
            dVar33 = dVar33 * in_dr6;
            in_dr12 = dVar30 * dVar29;
            fVar26 = SUB84(dVar34 - dVar34,0);
          }
          if (cVar37 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(iVar17 + 0x14),fVar26);
          }
          else {
            dVar29 = *(double *)(iVar17 + 0x14);
          }
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                      SUB84(dVar33,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar29,0),
                                      SUB84(dVar29,0));
          }
          else {
            dVar33 = dVar33 - in_dr12;
            dVar29 = dVar29 * dVar29;
          }
          if (cVar37 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      *(undefined4 *)(iVar17 + 0x10));
          }
          else {
            dVar32 = *(double *)(iVar17 + 0x10);
          }
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar29,0) +
                                      (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
          }
          if (cVar37 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      *(undefined4 *)(iVar17 + 0x18));
            in_dr0 = (double)CONCAT44(SUB84(dVar33,0),SUB84(dVar33,0));
            in_xd2 = dVar32;
          }
          else {
            in_xd2 = *(double *)(iVar17 + 0x18);
            in_dr0 = in_xd0;
          }
          if (cVar36 == '\0') {
            dVar29 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar29,0) +
                                    (float)((ulonglong)dVar29 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar29 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar37 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar28);
          }
          if (cVar36 == '\0') {
            bVar35 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar35 = in_dr2 < in_dr4;
          }
          uVar14 = 0;
          if (bVar35) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24bcd6;
            uVar14 = 0x8000;
          }
          puVar11 = puVar20 + 2;
          puVar20 = puVar20 + 3;
          uStack_3c = 0;
          ar4_00 = (uint *)((uint)*puVar21 * 0x40 + _DAT_8c4aa510);
          ar5_00 = (uint *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
          if (0 < (int)(uVar4 - 2)) {
            do {
              uVar1 = *puVar20;
              puVar20 = puVar20 + 1;
              ar6_00 = (uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                FUN_8c23dc42(ar4_00,ar5_00,ar6_00,(int)(short)(uVar3 | uVar14));
              }
              uStack_3c = uStack_3c + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while ((int)uStack_3c < (int)(uVar4 - 2));
          }
        }
      }
      else {
LAB_8c24bcd6:
        puVar20 = puVar21 + uVar4;
      }
      iStack_40 = iStack_40 + 1;
    }
  }
  else if (uVar4 == 0xc000) {
    if ((_DAT_8c4ab318 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c243d60;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c2437d6;
    }
                    
                    
    uVar7 = (*UNRECOVERED_JUMPTABLE)(ar4,uVar3);
    return uVar7;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c24b154\n.set _FUN_8c24b154, _FUN_8c24b154_def\n");
