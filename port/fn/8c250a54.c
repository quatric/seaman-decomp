#include "../decls.h"
uint FUN_8c250a54_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  uint *ar4_00;
  undefined4 *puVar13;
  double *pdVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  double *unaff_r8;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  uint uVar23;
  uint *ar6_00;
  ushort *puVar24;
  ushort *puVar25;
  double in_dr0;
  float fVar26;
  float fVar27;
  double in_dr2;
  ulonglong uVar28;
  double dVar29;
  double in_dr4;
  double dVar30;
  float fVar34;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar36;
  undefined4 uVar37;
  double in_dr6;
  double in_dr8;
  double in_dr12;
  undefined8 in_dr14;
  double dVar38;
  double in_xd0;
  double in_xd2;
  double dVar39;
  double in_xd4;
  double in_xd6;
  double dVar40;
  double in_xd8;
  double in_xd14;
  bool bVar41;
  float in_PR;
  char cVar42;
  char cVar43;
  undefined4 *puVar44;
  uint *puStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uVar35;
  
  cVar43 = '\0';
  cVar42 = '\0';
  uStack_1c = (undefined4)in_dr14;
  uStack_20 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_24 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  dVar38 = (double)CONCAT44(uStack_20,0x3f000000);
  uVar1 = *ar4;
  puVar24 = *(ushort **)(ar4 + 2);
  uVar3 = uVar1 & 0xc000;
  fStack_28 = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    puVar11 = &DAT_8c4c2620;
    dVar38 = 7.946779287948402e-07;
    for (iStack_64 = 0; uVar3 = (uint)ar4[1], iStack_64 < (int)uVar3; iStack_64 = iStack_64 + 1) {
      uVar1 = *puVar24;
      puVar12 = puVar24 + 1;
      puVar25 = puVar24 + 2;
      puVar24 = puVar24 + 3;
      pdVar21 = (double *)((uint)*puVar25 * 0x40 + _DAT_8c4aa510);
      pdVar7 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
      pdVar20 = (double *)((uint)*puVar12 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar7 & *(uint *)pdVar20 & *(uint *)pdVar21 & 0x3f) == 0) {
        if (((*(uint *)pdVar7 | *(uint *)pdVar20 | *(uint *)pdVar21) & 1) == 0) {
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)((int)pdVar20 + 4);
            dVar32 = (double)CONCAT44(uVar35,*(undefined4 *)((int)pdVar7 + 4));
          }
          else {
            dVar32 = *(double *)((int)pdVar20 + 4);
            in_xd2 = *(double *)((int)pdVar7 + 4);
            uVar35 = SUB84(in_dr4,0);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) - SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar21 + 1))
            ;
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 1),uVar35);
          }
          else {
            in_xd2 = pdVar21[1];
            dVar30 = pdVar20[1];
          }
          fVar34 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar32,0) - fVar34);
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          dVar40 = dVar30;
          if (cVar43 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar34);
            dVar40 = in_xd0;
          }
          in_xd0 = dVar40;
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar7 + 1));
          }
          else {
            in_xd2 = pdVar7[1];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar32,0));
          }
          else {
            dVar40 = in_dr0 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      *(undefined4 *)((int)pdVar21 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar21 + 4);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      SUB84(dVar32,0) - SUB84(dVar30,0));
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          uVar3 = (uint)((ulonglong)dVar32 >> 0x20);
          dVar29 = dVar32;
          if (cVar43 == '\0') {
            dVar29 = (double)CONCAT44(uVar3,SUB84(dVar30,0));
          }
          if (cVar42 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),
                                      SUB84(dVar40,0) * SUB84(dVar32,0));
          }
          else {
            in_dr0 = dVar40 * dVar32;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar42 == '\0') {
            fVar34 = (float)((ulonglong)dVar29 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar34,SUB84(dVar29,0));
            bVar41 = 0.0 < fVar34;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar41 = in_dr2 < in_dr4;
          }
          iStack_5c = 0;
          if (bVar41) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c250e3e;
            iStack_5c = 0x8000;
          }
          pdVar22 = pdVar20 + 2;
          puVar10 = auStack_40;
          pdVar14 = pdVar21 + 2;
          FUN_8c2361a8(pdVar7 + 2,pdVar22,pdVar14,puVar10);
          uVar35 = SUB84(in_dr0,0);
          FUN_8c25ce48(auStack_40,pdVar22,pdVar14,puVar10,puVar11);
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),*(undefined4 *)(pdVar20 + 2));
          }
          else {
            dVar32 = pdVar7[2];
            in_xd2 = pdVar20[2];
          }
          puVar16 = auStack_40;
          puVar10 = &DAT_8c4c2620;
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          fVar34 = (float)((ulonglong)dVar38 >> 0x20);
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),
                                      *(undefined4 *)((int)pdVar20 + 0x14));
          }
          else {
            uStack_34 = SUB84(dVar32,0);
            dVar32 = *(double *)((int)pdVar7 + 0x14);
            in_xd2 = *(double *)((int)pdVar20 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      *(undefined4 *)((int)pdVar21 + 0x14));
          }
          else {
            in_xd2 = *(double *)((int)pdVar21 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_30 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 3),*(undefined4 *)(pdVar20 + 3));
          }
          else {
            uStack_30 = SUB84(dVar32,0);
            dVar32 = pdVar7[3];
            in_xd2 = pdVar20[3];
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar21 + 3))
            ;
          }
          else {
            in_xd2 = pdVar21[3];
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = (float)((ulonglong)dVar32 >> 0x20);
          fStack_2c = fVar34;
          if (cVar43 != '\0') {
            fStack_2c = SUB84(dVar32,0);
            fStack_28 = fVar34;
          }
          puVar13 = &uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar16,iStack_5c);
          uVar37 = SUB84(dVar32,0);
          if (cVar43 != '\0') {
            in_xd6 = *(double *)(puVar11 + 0xc);
          }
          uStack_48 = float_to_color_u8(puVar10,puVar13,puVar16,iStack_5c);
          uVar3 = _DAT_8c4c2634;
          if (cVar43 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
            uVar3 = _DAT_8c4c2630;
          }
          uStack_44 = float_to_color_u8(puVar10,puVar13,puVar16,iStack_5c);
          uVar36 = SUB84(dVar38,0);
          dVar32 = in_xd14;
          dVar30 = in_xd14;
          if (cVar43 == '\0') {
            dVar32 = in_xd2;
            uVar37 = uVar36;
            dVar30 = (double)CONCAT44(uVar36,uVar35);
          }
          *(undefined4 *)pdVar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),uVar37);
          }
          else {
            dVar40 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar30 >> 0x20) *
                                    (float)((ulonglong)dVar40 >> 0x20) + SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar7 + 0x34),uVar36);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar7[4] = dVar32;
            uVar28 = *(ulonglong *)((int)pdVar7 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar30,0));
            dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = dVar32;
            dVar30 = *pdVar7;
            dVar40 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar7 + 2);
            dVar29 = (double)CONCAT44(uVar35,uVar3);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar35;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar40 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar30 >> 0x20);
            dVar40 = (double)((ulonglong)dVar38 & 0xffffffff);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar29 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar29;
            unaff_r8[1] = dVar40;
            *unaff_r8 = dVar30;
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          *(undefined4 *)pdVar20 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar20[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar30 >> 0x20) *
                                    (float)((ulonglong)dVar40 >> 0x20) + SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar20 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar20 + 0x34),uVar36);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar20[4] = dVar32;
            uVar28 = *(ulonglong *)((int)pdVar20 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar20,SUB84(dVar30,0));
            dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 4),(int)uVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)((int)pdVar20 + 0x24) = dVar32;
            dVar30 = *pdVar20;
            dVar40 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar20 + 2);
            dVar29 = (double)CONCAT44(uVar35,SUB84(dVar29,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar20 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar35;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar40 >> 0x20);
            pdVar7 = unaff_r8 + 6;
            *(int *)pdVar7 = (int)((ulonglong)dVar30 >> 0x20);
            dVar40 = (double)((ulonglong)dVar38 & 0xffffffff);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar29 = pdVar20[2];
            unaff_r8[7] = pdVar20[3];
            unaff_r8[6] = dVar29;
            unaff_r8[5] = dVar40;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar30;
            dVar30 = in_xd14;
            dVar32 = in_xd14;
          }
          *(undefined4 *)pdVar21 = 0xf0000000;
          *(undefined4 *)(pdVar21 + 5) = uStack_48;
          *(undefined4 *)((int)pdVar21 + 0x2c) = uStack_44;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar21[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar30 >> 0x20) *
                                    (float)((ulonglong)dVar40 >> 0x20) + SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar21 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar21 + 0x34),uVar36);
            in_xd2 = dVar32;
            dVar32 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar21[4] = dVar32;
            uVar28 = *(ulonglong *)((int)pdVar21 + 0x34);
            in_xd2 = in_xd14;
            dVar32 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar32 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar21 + 0x24) = (int)uVar28;
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar21,SUB84(dVar32,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 4),(int)uVar28);
            pdVar21 = pdVar21 + 1;
          }
          else {
            *(double *)((int)pdVar21 + 0x24) = in_xd2;
            in_dr0 = *pdVar21;
            in_dr2 = pdVar21[1];
            pdVar21 = pdVar21 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar21 + 2);
            in_dr4 = (double)CONCAT44(uVar35,SUB84(dVar29,0));
            *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar21 + 0x14);
            *(undefined4 *)(pdVar7 + 7) = uVar35;
            *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar21[2];
            pdVar7[7] = pdVar21[3];
            pdVar7[6] = in_dr4;
            pdVar7[5] = in_dr2;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
        }
        else {
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar20 + 3);
            uVar37 = *(undefined4 *)((int)pdVar20 + 0x14);
            in_dr8 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),SUB84(in_dr8,0));
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(pdVar7 + 3));
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar37);
            dVar40 = (double)CONCAT44(uVar35,SUB84(in_dr0,0));
            dVar32 = in_xd2;
            dVar30 = (double)CONCAT44(uVar37,uVar35);
          }
          else {
            dVar40 = pdVar20[3];
            dVar32 = *(double *)((int)pdVar20 + 0x14);
            in_dr8 = *(double *)((int)pdVar7 + 0x14);
            uVar37 = (undefined4)((ulonglong)dVar32 >> 0x20);
            uVar35 = SUB84(dVar32,0);
            dVar30 = dVar32;
            in_xd6 = dVar40;
          }
          fVar34 = (float)((ulonglong)in_dr8 >> 0x20);
          if (cVar42 == '\0') {
            fVar26 = SUB84(in_dr2,0) * SUB84(in_dr4,0);
            dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) * fVar34,SUB84(dVar40,0));
          }
          else {
            fVar26 = SUB84(in_dr2 * in_dr4,0);
            dVar40 = dVar40 * in_dr8;
          }
          if (cVar43 == '\0') {
            in_dr8 = (double)CONCAT44(fVar34,*(undefined4 *)(pdVar20 + 2));
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),SUB84(in_dr4,0));
            dVar31 = (double)CONCAT44(uVar35,fVar26);
          }
          else {
            in_xd8 = pdVar20[2];
            dVar29 = pdVar7[2];
            dVar31 = in_xd6;
          }
          fVar34 = (float)((ulonglong)dVar29 >> 0x20);
          if (cVar42 == '\0') {
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar34,SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * dVar29;
          }
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),uVar37);
            dVar30 = in_xd0;
          }
          in_xd0 = dVar30;
          if (cVar42 == '\0') {
            dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) - SUB84(dVar31,0),
                                      SUB84(dVar40,0));
          }
          else {
            dVar40 = dVar40 - dVar31;
          }
          in_xd2 = in_xd8;
          if (cVar43 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(in_dr8,0));
            in_xd2 = dVar32;
          }
          if (cVar42 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                      SUB84(dVar31,0) * SUB84(dVar29,0));
          }
          else {
            dVar31 = dVar31 * dVar29;
          }
          dVar32 = in_xd8;
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(SUB84(in_dr8,0),SUB84(in_dr12,0));
          }
          if (cVar42 == '\0') {
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) *
                                       (float)((ulonglong)in_dr8 >> 0x20),SUB84(dVar32,0));
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),SUB84(dVar40,0) * fVar34);
            fVar34 = SUB84(dVar31,0) - (float)((ulonglong)dVar31 >> 0x20);
          }
          else {
            in_dr12 = dVar32 * in_dr8;
            dVar40 = dVar40 * dVar29;
            fVar34 = SUB84(dVar31 - dVar31,0);
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 0x14),fVar34);
          }
          else {
            dVar32 = *(double *)((int)pdVar21 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),
                                      SUB84(dVar40,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar40 = dVar40 - in_dr12;
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) * SUB84(dVar32,0) +
                                      (float)((ulonglong)dVar32 >> 0x20),SUB84(dVar32,0));
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar21 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar40,0),SUB84(dVar40,0));
          }
          else {
            in_xd2 = pdVar21[3];
            in_dr0 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar32 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar32,0) +
                                    (float)((ulonglong)dVar32 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar32 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar43 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar29,0));
          }
          if (cVar42 == '\0') {
            bVar41 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar41 = in_dr2 < in_dr4;
          }
          iStack_5c = 0;
          if (bVar41) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c250e3e;
            iStack_5c = 0x8000;
          }
          pdVar22 = pdVar20 + 2;
          puVar10 = auStack_40;
          pdVar14 = pdVar21 + 2;
          FUN_8c2361a8(pdVar7 + 2,pdVar22,pdVar14,puVar10);
          FUN_8c25ce48(auStack_40,pdVar22,pdVar14,puVar10,puVar11);
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),*(undefined4 *)(pdVar20 + 2));
          }
          else {
            dVar32 = pdVar7[2];
            in_xd2 = pdVar20[2];
          }
          puVar16 = auStack_40;
          puVar10 = &DAT_8c4c2620;
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          fVar34 = (float)((ulonglong)dVar38 >> 0x20);
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),
                                      *(undefined4 *)((int)pdVar20 + 0x14));
          }
          else {
            uStack_34 = SUB84(dVar32,0);
            dVar32 = *(double *)((int)pdVar7 + 0x14);
            in_xd2 = *(double *)((int)pdVar20 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      *(undefined4 *)((int)pdVar21 + 0x14));
          }
          else {
            in_xd2 = *(double *)((int)pdVar21 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_30 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 3),*(undefined4 *)(pdVar20 + 3));
          }
          else {
            uStack_30 = SUB84(dVar32,0);
            dVar32 = pdVar7[3];
            in_xd2 = pdVar20[3];
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 + dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar21 + 3))
            ;
          }
          else {
            in_xd2 = pdVar21[3];
          }
          if (cVar42 == '\0') {
            in_dr2 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            in_dr2 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = (float)((ulonglong)in_dr2 >> 0x20);
          fStack_2c = fVar34;
          if (cVar43 != '\0') {
            fStack_2c = SUB84(in_dr2,0);
            fStack_28 = fVar34;
          }
          puVar13 = &uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar16,iStack_5c);
          if (cVar43 != '\0') {
            in_xd6 = *(double *)(puVar11 + 0xc);
          }
          uStack_48 = float_to_color_u8(puVar10,puVar13,puVar16,iStack_5c);
          if (cVar43 == '\0') {
            in_dr4 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c2634);
          }
          else {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
            in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
          }
          uStack_44 = float_to_color_u8(puVar10,puVar13,puVar16,iStack_5c);
          FUN_8c247b20(pdVar7,pdVar20,pdVar21,&uStack_48);
        }
      }
LAB_8c250e3e:
    }
  }
  else if (uVar3 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_5c = 0;
    while( true ) {
      uVar37 = SUB84(in_dr6,0);
      uVar35 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_5c) break;
      puVar12 = puVar24 + 3;
      pdVar22 = (double *)((uint)puVar24[2] * 0x40 + _DAT_8c4aa510);
      pdVar20 = (double *)((uint)*puVar24 * 0x40 + _DAT_8c4aa510);
      pdVar21 = (double *)((uint)puVar24[1] * 0x40 + _DAT_8c4aa510);
      puVar24 = puVar24 + 4;
      pdVar7 = (double *)((uint)*puVar12 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar20 & *(uint *)pdVar21 & *(uint *)pdVar22 & *(uint *)pdVar7 & 0x3f) == 0) {
        if (((*(uint *)pdVar20 | *(uint *)pdVar21 | *(uint *)pdVar22 | *(uint *)pdVar7) & 1) == 0) {
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)((int)pdVar21 + 4);
            dVar32 = (double)CONCAT44(uVar35,*(undefined4 *)((int)pdVar20 + 4));
          }
          else {
            dVar32 = *(double *)((int)pdVar21 + 4);
            in_xd2 = *(double *)((int)pdVar20 + 4);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) - SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar22 + 1))
            ;
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 1),uVar35);
          }
          else {
            in_xd2 = pdVar22[1];
            dVar30 = pdVar21[1];
          }
          fVar34 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),SUB84(dVar32,0) - fVar34);
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          dVar40 = dVar30;
          if (cVar43 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar34);
            dVar40 = in_xd0;
          }
          in_xd0 = dVar40;
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar20 + 1))
            ;
          }
          else {
            in_xd2 = pdVar20[1];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar32,0));
          }
          else {
            dVar40 = in_dr0 - dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      *(undefined4 *)((int)pdVar22 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar22 + 4);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),
                                      SUB84(dVar32,0) - SUB84(dVar30,0));
          }
          else {
            dVar32 = dVar32 - dVar30;
          }
          uVar3 = (uint)((ulonglong)dVar32 >> 0x20);
          dVar29 = dVar32;
          if (cVar43 == '\0') {
            dVar29 = (double)CONCAT44(uVar3,SUB84(dVar30,0));
          }
          if (cVar42 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),
                                      SUB84(dVar40,0) * SUB84(dVar32,0));
          }
          else {
            in_dr0 = dVar40 * dVar32;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar42 == '\0') {
            fVar34 = (float)((ulonglong)dVar29 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar34,SUB84(dVar29,0));
            bVar41 = 0.0 < fVar34;
          }
          else {
            in_dr4 = dVar29 - in_dr0;
            bVar41 = in_dr2 < in_dr4;
          }
          uStack_58 = 0;
          if (bVar41) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c25127e;
            uStack_58 = 0x8000;
          }
          pdVar14 = pdVar21 + 2;
          puVar11 = auStack_40;
          pdVar17 = pdVar22 + 2;
          FUN_8c2361a8(pdVar20 + 2,pdVar14,pdVar17,puVar11);
          uVar35 = SUB84(in_dr0,0);
          FUN_8c25ce48(auStack_40,pdVar14,pdVar17,puVar11,pdVar7);
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 2),*(undefined4 *)(pdVar22 + 2));
          }
          else {
            dVar32 = pdVar21[2];
            in_xd2 = pdVar22[2];
          }
          puVar11 = &DAT_8c4c2620;
          puVar10 = auStack_40;
          fVar34 = SUB84(dVar38,0);
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 0x14),
                                      *(undefined4 *)((int)pdVar22 + 0x14));
          }
          else {
            uStack_34 = SUB84(dVar32,0);
            dVar32 = *(double *)((int)pdVar21 + 0x14);
            in_xd2 = *(double *)((int)pdVar22 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_30 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 3),*(undefined4 *)(pdVar22 + 3));
          }
          else {
            uStack_30 = SUB84(dVar32,0);
            dVar32 = pdVar21[3];
            in_xd2 = pdVar22[3];
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = (float)((ulonglong)dVar32 >> 0x20);
          fStack_2c = fVar34;
          if (cVar43 != '\0') {
            fStack_2c = SUB84(dVar32,0);
            fStack_28 = fVar34;
          }
          puVar13 = &uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar10,uStack_58);
          uVar37 = SUB84(dVar32,0);
          if (cVar43 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
          }
          uStack_48 = float_to_color_u8(puVar11,puVar13,puVar10,uStack_58);
          uVar19 = _DAT_8c4c2634;
          uVar3 = _DAT_8c4c263c;
          if (cVar43 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
            uVar19 = _DAT_8c4c2630;
            uVar3 = _DAT_8c4c2638;
          }
          uStack_44 = float_to_color_u8(puVar11,puVar13,puVar10,uStack_58);
          uVar36 = SUB84(dVar38,0);
          dVar32 = in_xd14;
          dVar30 = in_xd14;
          if (cVar43 == '\0') {
            dVar32 = in_xd2;
            uVar37 = uVar36;
            dVar30 = (double)CONCAT44(uVar36,uVar35);
          }
          *(undefined4 *)pdVar20 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 6),uVar37);
          }
          else {
            dVar40 = pdVar20[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar30 >> 0x20) *
                                    (float)((ulonglong)dVar40 >> 0x20) + SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar20 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar20 + 0x34),uVar36);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar20[4] = dVar32;
            uVar28 = *(ulonglong *)((int)pdVar20 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar20,SUB84(dVar30,0));
            dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 4),(int)uVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)((int)pdVar20 + 0x24) = dVar32;
            dVar30 = *pdVar20;
            dVar40 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar20 + 2);
            dVar31 = (double)CONCAT44(uVar35,uVar19);
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 0x14),uVar3);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar20 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar35;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar40 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar30 >> 0x20);
            dVar40 = (double)((ulonglong)dVar38 & 0xffffffff);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar31 = pdVar20[2];
            dVar29 = pdVar20[3];
            unaff_r8[3] = dVar29;
            unaff_r8[2] = dVar31;
            unaff_r8[1] = dVar40;
            *unaff_r8 = dVar30;
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          *(undefined4 *)pdVar21 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar21[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar30 >> 0x20) *
                                    (float)((ulonglong)dVar40 >> 0x20) + SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar21 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar21 + 0x34),uVar36);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar21[4] = dVar32;
            uVar28 = *(ulonglong *)((int)pdVar21 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar21 + 0x24) = (int)uVar28;
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar21,SUB84(dVar30,0));
            dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 4),(int)uVar28);
            pdVar21 = pdVar21 + 1;
          }
          else {
            *(double *)((int)pdVar21 + 0x24) = dVar32;
            dVar30 = *pdVar21;
            dVar40 = pdVar21[1];
            pdVar21 = pdVar21 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar21 + 2);
            dVar31 = (double)CONCAT44(uVar35,SUB84(dVar31,0));
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 0x14),SUB84(dVar29,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar21 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar35;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar40 >> 0x20);
            pdVar20 = unaff_r8 + 6;
            *(int *)pdVar20 = (int)((ulonglong)dVar30 >> 0x20);
            dVar40 = (double)((ulonglong)dVar38 & 0xffffffff);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            dVar31 = pdVar21[2];
            dVar29 = pdVar21[3];
            unaff_r8[7] = dVar29;
            unaff_r8[6] = dVar31;
            unaff_r8[5] = dVar40;
            pdVar20 = unaff_r8 + 4;
            *pdVar20 = dVar30;
            dVar30 = in_xd14;
            dVar32 = in_xd14;
          }
          *(undefined4 *)pdVar22 = 0xe0000000;
          *(undefined4 *)(pdVar22 + 5) = uStack_48;
          *(undefined4 *)((int)pdVar22 + 0x2c) = uStack_44;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)(pdVar22 + 6),SUB84(dVar40,0));
          }
          else {
            dVar40 = pdVar22[6];
          }
          if (cVar42 == '\0') {
            dVar40 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar30 >> 0x20) *
                                    (float)((ulonglong)dVar40 >> 0x20) + SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar22 + 4) = SUB84(dVar40,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar22 + 0x34),uVar36);
            dVar30 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          else {
            pdVar22[4] = dVar32;
            uVar28 = *(ulonglong *)((int)pdVar22 + 0x34);
            dVar32 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar22 + 0x24) = (int)uVar28;
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar22,SUB84(dVar30,0));
            dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar22 + 4),(int)uVar28);
            pdVar22 = pdVar22 + 1;
          }
          else {
            *(double *)((int)pdVar22 + 0x24) = dVar32;
            dVar30 = *pdVar22;
            dVar40 = pdVar22[1];
            pdVar22 = pdVar22 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar22 + 2);
            dVar31 = (double)CONCAT44(uVar35,SUB84(dVar31,0));
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar22 + 0x14),SUB84(dVar29,0));
            *(undefined4 *)((int)pdVar20 + 0x3c) = *(undefined4 *)((int)pdVar22 + 0x14);
            *(undefined4 *)(pdVar20 + 7) = uVar35;
            *(int *)((int)pdVar20 + 0x34) = (int)((ulonglong)dVar40 >> 0x20);
            pdVar20 = pdVar20 + 6;
            *(int *)pdVar20 = (int)((ulonglong)dVar30 >> 0x20);
            dVar40 = (double)((ulonglong)dVar38 & 0xffffffff);
          }
          else {
            dVar31 = pdVar22[2];
            dVar29 = pdVar22[3];
            pdVar20[7] = dVar29;
            pdVar20[6] = dVar31;
            pdVar20[5] = dVar40;
            pdVar20 = pdVar20 + 4;
            *pdVar20 = dVar30;
            dVar32 = in_xd14;
          }
          *(undefined4 *)pdVar7 = 0xf0000000;
          dVar33 = in_xd14;
          if (cVar43 == '\0') {
            dVar33 = (double)CONCAT44(uVar36,SUB84(dVar30,0));
          }
          *(undefined4 *)(pdVar7 + 5) = uStack_48;
          *(undefined4 *)((int)pdVar7 + 0x2c) = uStack_44;
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),SUB84(dVar40,0));
          }
          else {
            dVar30 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar30,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar7 + 0x34),uVar36);
            in_xd2 = dVar32;
            dVar32 = (double)CONCAT44(uVar36,SUB84(dVar33,0));
          }
          else {
            pdVar7[4] = dVar32;
            uVar28 = *(ulonglong *)((int)pdVar7 + 0x34);
            in_xd2 = in_xd14;
            dVar32 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar32 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar32,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar7 + 2);
            in_dr4 = (double)CONCAT44(uVar35,SUB84(dVar31,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),SUB84(dVar29,0));
            *(undefined4 *)((int)pdVar20 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(pdVar20 + 7) = uVar35;
            *(int *)((int)pdVar20 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar20 = pdVar20 + 6;
            *(int *)pdVar20 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            in_dr6 = pdVar7[3];
            pdVar20[7] = in_dr6;
            pdVar20[6] = in_dr4;
            pdVar20[5] = in_dr2;
            pdVar20 = pdVar20 + 4;
            *pdVar20 = in_dr0;
          }
          unaff_r8 = pdVar20 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
        }
        else {
          if (cVar43 == '\0') {
            uVar37 = *(undefined4 *)(pdVar21 + 3);
            uVar35 = *(undefined4 *)((int)pdVar21 + 0x14);
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                      *(undefined4 *)((int)pdVar20 + 0x14));
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar35);
            dVar40 = (double)CONCAT44(uVar37,SUB84(in_dr0,0));
            dVar32 = in_xd2;
            dVar30 = (double)CONCAT44(uVar35,*(undefined4 *)(pdVar20 + 3));
          }
          else {
            dVar40 = pdVar21[3];
            dVar32 = *(double *)((int)pdVar21 + 0x14);
            uVar35 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar30 = dVar32;
            in_xd6 = dVar40;
          }
          fVar34 = SUB84(dVar30,0);
          if (cVar42 == '\0') {
            fVar26 = SUB84(in_dr2,0) * fVar34;
            dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) * SUB84(in_dr8,0),
                                      SUB84(dVar40,0));
          }
          else {
            fVar26 = SUB84(in_dr2 * dVar30,0);
            dVar40 = dVar40 * in_dr8;
          }
          if (cVar43 == '\0') {
            in_dr8 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 2),SUB84(in_dr8,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 2),uVar37);
            dVar29 = (double)CONCAT44(uVar37,fVar26);
          }
          else {
            in_dr8 = pdVar21[2];
            in_dr6 = pdVar20[2];
            dVar29 = in_xd6;
          }
          fVar26 = (float)((ulonglong)in_dr6 >> 0x20);
          if (cVar42 == '\0') {
            dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * fVar26,SUB84(dVar29,0));
          }
          else {
            dVar29 = dVar29 * in_dr6;
          }
          dVar31 = dVar30;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),uVar35);
            dVar31 = in_xd0;
          }
          in_xd0 = dVar31;
          if (cVar42 == '\0') {
            dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) - SUB84(dVar29,0),
                                      SUB84(dVar40,0));
          }
          else {
            dVar40 = dVar40 - dVar29;
          }
          uVar35 = (undefined4)((ulonglong)in_dr8 >> 0x20);
          in_xd2 = in_dr8;
          if (cVar43 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar35);
            in_xd2 = dVar32;
          }
          if (cVar42 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) * fVar34);
          }
          else {
            dVar29 = dVar29 * dVar30;
          }
          dVar32 = in_dr8;
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(uVar35,SUB84(in_dr12,0));
          }
          if (cVar42 == '\0') {
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(in_dr8,0),
                                       SUB84(dVar32,0));
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),SUB84(dVar40,0) * fVar26);
            fVar26 = SUB84(dVar29,0) - (float)((ulonglong)dVar29 >> 0x20);
          }
          else {
            in_dr12 = dVar32 * in_dr8;
            dVar40 = dVar40 * in_dr6;
            fVar26 = SUB84(dVar29 - dVar29,0);
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar22 + 0x14),fVar26);
          }
          else {
            dVar32 = *(double *)((int)pdVar22 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),
                                      SUB84(dVar40,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(dVar32,0),
                                      SUB84(dVar32,0));
          }
          else {
            dVar40 = dVar40 - in_dr12;
            dVar32 = dVar32 * dVar32;
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar22 + 2))
            ;
          }
          else {
            in_xd2 = pdVar22[2];
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) * SUB84(dVar32,0) +
                                      (float)((ulonglong)dVar32 >> 0x20),SUB84(dVar32,0));
          }
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar22 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar40,0),SUB84(dVar40,0));
          }
          else {
            in_xd2 = pdVar22[3];
            in_dr0 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar32 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar32,0) +
                                    (float)((ulonglong)dVar32 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar32 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar43 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),fVar34);
          }
          if (cVar42 == '\0') {
            bVar41 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar41 = in_dr2 < in_dr4;
          }
          uStack_58 = 0;
          if (bVar41) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c25127e;
            uStack_58 = 0x8000;
          }
          pdVar14 = pdVar21 + 2;
          puVar11 = auStack_40;
          pdVar17 = pdVar22 + 2;
          FUN_8c2361a8(pdVar20 + 2,pdVar14,pdVar17,puVar11);
          FUN_8c25ce48(auStack_40,pdVar14,pdVar17,puVar11,pdVar7);
          if (cVar43 == '\0') {
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 2),*(undefined4 *)(pdVar22 + 2));
          }
          else {
            dVar32 = pdVar21[2];
            in_xd2 = pdVar22[2];
          }
          puVar11 = &DAT_8c4c2620;
          puVar10 = auStack_40;
          fVar34 = SUB84(dVar38,0);
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 0x14),
                                      *(undefined4 *)((int)pdVar22 + 0x14));
          }
          else {
            uStack_34 = SUB84(dVar32,0);
            dVar32 = *(double *)((int)pdVar21 + 0x14);
            in_xd2 = *(double *)((int)pdVar22 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar32 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            dVar32 = (dVar32 + dVar32) * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_30 = (undefined4)((ulonglong)dVar32 >> 0x20);
            dVar32 = (double)CONCAT44(*(undefined4 *)(pdVar21 + 3),*(undefined4 *)(pdVar22 + 3));
          }
          else {
            uStack_30 = SUB84(dVar32,0);
            dVar32 = pdVar21[3];
            in_xd2 = pdVar22[3];
          }
          if (cVar42 == '\0') {
            in_dr2 = (double)CONCAT44(((float)((ulonglong)dVar32 >> 0x20) + SUB84(dVar32,0)) *
                                      fVar34,SUB84(dVar32,0));
          }
          else {
            in_dr2 = (dVar32 + dVar32) * dVar38;
          }
          fVar34 = (float)((ulonglong)in_dr2 >> 0x20);
          fStack_2c = fVar34;
          if (cVar43 != '\0') {
            fStack_2c = SUB84(in_dr2,0);
            fStack_28 = fVar34;
          }
          puVar13 = &uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar10,uStack_58);
          if (cVar43 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
          }
          uStack_48 = float_to_color_u8(puVar11,puVar13,puVar10,uStack_58);
          if (cVar43 == '\0') {
            in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
            in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
          }
          else {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
            in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
            in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
          }
          uStack_44 = float_to_color_u8(puVar11,puVar13,puVar10,uStack_58);
          if ((*(uint *)pdVar20 & *(uint *)pdVar21 & *(uint *)pdVar22 & 1) == 0) {
            FUN_8c247b20(pdVar20,pdVar21,pdVar22,&uStack_48);
          }
          if ((*(uint *)pdVar21 & *(uint *)pdVar22 & *(uint *)pdVar7 & 1) == 0) {
            FUN_8c247b20(pdVar21,pdVar22,pdVar7,&uStack_48);
          }
        }
      }
LAB_8c25127e:
      iStack_5c = iStack_5c + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    iStack_60 = 0;
    puVar13 = &uStack_48;
    while( true ) {
      uVar35 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_60) break;
      iVar18 = 0;
      puVar25 = puVar24 + 1;
      uVar19 = 0xffffffff;
      uVar23 = (uint)*puVar24;
      uVar3 = 0;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar23;
      puVar12 = puVar25;
      if (uVar23 != 0) {
        do {
          uVar1 = *puVar12;
          puVar12 = puVar12 + 1;
          iVar18 = iVar18 + 1;
          uVar8 = *(uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
          uVar19 = uVar19 & uVar8;
          uVar3 = uVar3 | uVar8;
        } while (iVar18 < (int)uVar23);
      }
      dVar32 = in_xd0;
      if ((uVar19 & 0x3f) == 0) {
        iVar18 = (int)uVar23 >> 1;
        if ((uVar3 & 1) == 0) {
          iVar4 = (uint)*puVar25 * 0x40 + _DAT_8c4aa510;
          iVar9 = (uint)puVar24[2] * 0x40 + _DAT_8c4aa510;
          iVar6 = (uint)puVar24[3] * 0x40 + _DAT_8c4aa510;
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(iVar9 + 4);
            dVar30 = (double)CONCAT44(uVar35,*(undefined4 *)(iVar4 + 4));
          }
          else {
            dVar30 = *(double *)(iVar9 + 4);
            in_xd2 = *(double *)(iVar4 + 4);
            in_xd4 = dVar30;
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar30;
          }
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(iVar6 + 8));
            dVar40 = (double)CONCAT44(*(undefined4 *)(iVar9 + 8),uVar35);
          }
          else {
            in_xd2 = *(double *)(iVar6 + 8);
            dVar40 = *(double *)(iVar9 + 8);
          }
          fVar34 = (float)((ulonglong)dVar40 >> 0x20);
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) - fVar34);
          }
          else {
            dVar30 = dVar30 - dVar40;
          }
          dVar32 = dVar40;
          if (cVar43 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar34);
            dVar32 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * dVar30;
          }
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(iVar4 + 8));
          }
          else {
            in_xd2 = *(double *)(iVar4 + 8);
          }
          if (cVar42 == '\0') {
            dVar29 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar30,0));
          }
          else {
            dVar29 = in_dr0 - dVar30;
          }
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(iVar6 + 4));
          }
          else {
            in_xd2 = *(double *)(iVar6 + 4);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) - SUB84(dVar40,0));
          }
          else {
            dVar30 = dVar30 - dVar40;
          }
          uVar3 = (uint)((ulonglong)dVar30 >> 0x20);
          dVar31 = dVar30;
          if (cVar43 == '\0') {
            dVar31 = (double)CONCAT44(uVar3,SUB84(dVar40,0));
          }
          if (cVar42 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                      SUB84(dVar29,0) * SUB84(dVar30,0));
          }
          else {
            in_dr0 = dVar29 * dVar30;
          }
          in_dr2 = (double)((ulonglong)uVar3 << 0x20);
          if (cVar42 == '\0') {
            fVar34 = (float)((ulonglong)dVar31 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar34,SUB84(dVar31,0));
            bVar41 = 0.0 < fVar34;
          }
          else {
            in_dr4 = dVar31 - in_dr0;
            bVar41 = in_dr2 < in_dr4;
          }
          uStack_50 = 0;
          if (bVar41) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c2516e6;
            uStack_50 = 0x8000;
          }
          puVar11 = auStack_40;
          _DAT_8c4aa520 = _DAT_8c4aa520 + uVar23;
          iVar6 = iVar6 + 0x10;
          iVar9 = iVar9 + 0x10;
          FUN_8c2361a8(iVar4 + 0x10,iVar9,iVar6,puVar11);
          uVar35 = SUB84(in_dr0,0);
          FUN_8c25ce48(auStack_40,iVar9,iVar6,puVar11,puVar13);
          iVar4 = (uint)puVar25[iVar18 + -1] * 0x40 + _DAT_8c4aa510;
          if (cVar43 == '\0') {
            uStack_34 = *(undefined4 *)(iVar4 + 0x10);
            uStack_30 = *(undefined4 *)(iVar4 + 0x14);
            fStack_2c = *(float *)(iVar4 + 0x18);
          }
          else {
            uStack_34 = (undefined4)*(undefined8 *)(iVar4 + 0x10);
            uStack_30 = (undefined4)*(undefined8 *)(iVar4 + 0x14);
            in_xd2 = *(double *)(iVar4 + 0x18);
            fStack_2c = SUB84(in_xd2,0);
            fStack_28 = (float)((ulonglong)in_xd2 >> 0x20);
          }
          iVar18 = (uint)puVar25[iVar18] * 0x40 + _DAT_8c4aa510;
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(uStack_34,*(undefined4 *)(iVar18 + 0x10));
          }
          else {
            in_xd2 = *(double *)(iVar18 + 0x10);
            dVar30 = (double)CONCAT44(uStack_30,uStack_34);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar37 = (undefined4)((ulonglong)dVar30 >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(uStack_30,*(undefined4 *)(iVar18 + 0x14));
            uStack_34 = uVar37;
          }
          else {
            uStack_34 = SUB84(dVar30,0);
            in_xd2 = *(double *)(iVar18 + 0x14);
            dVar30 = (double)CONCAT44(fStack_2c,uVar37);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar37 = (undefined4)((ulonglong)dVar30 >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(fStack_2c,*(undefined4 *)(iVar18 + 0x18));
            uStack_30 = uVar37;
          }
          else {
            uStack_30 = SUB84(dVar30,0);
            in_xd2 = *(double *)(iVar18 + 0x18);
            dVar30 = (double)CONCAT44(fStack_28,uVar37);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          fVar34 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(fVar34,uStack_34);
            fStack_2c = fVar34;
          }
          else {
            fStack_2c = SUB84(dVar30,0);
            in_xd2 = (double)CONCAT44(uStack_30,uStack_34);
            fStack_28 = fVar34;
          }
          fVar34 = SUB84(dVar38,0);
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_34 = SUB84(dVar30,0);
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uStack_30);
          }
          else {
            uStack_34 = SUB84(in_xd2,0);
            uStack_30 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(fStack_2c,uStack_30);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_30 = SUB84(dVar30,0);
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fStack_2c);
          }
          else {
            uStack_30 = SUB84(in_xd2,0);
            fStack_2c = (float)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(fStack_28,fStack_2c);
          }
          if (cVar42 == '\0') {
            fVar34 = SUB84(dVar30,0) * fVar34;
          }
          else {
            fVar34 = SUB84(dVar30 * dVar38,0);
          }
          puVar11 = &DAT_8c4c2620;
          puVar10 = auStack_40;
          fStack_2c = fVar34;
          if (cVar43 != '\0') {
            fStack_2c = SUB84(in_xd2,0);
            fStack_28 = (float)((ulonglong)in_xd2 >> 0x20);
          }
          puVar15 = &uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,puVar15,puVar10,uStack_50);
          if (cVar43 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          }
          puVar44 = puVar13;
          uVar37 = float_to_color_u8(puVar11,puVar15,puVar10,uStack_50);
          *puVar13 = uVar37;
          uVar19 = _DAT_8c4c2634;
          uVar3 = _DAT_8c4c263c;
          if (cVar43 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            uVar19 = _DAT_8c4c2630;
            uVar3 = _DAT_8c4c2638;
          }
          uStack_44 = float_to_color_u8(puVar11,puVar15,puVar10,uStack_50);
          fVar26 = SUB84(dVar38,0);
          dVar30 = in_xd14;
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(fVar26,uVar35);
          }
          dVar40 = in_xd14;
          if (cVar43 == '\0') {
            dVar40 = in_xd2;
            fVar34 = fVar26;
          }
          pdVar7 = (double *)((uint)*puVar25 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),fVar34);
          }
          else {
            dVar29 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar30 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar29,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar7 + 0x34),fVar26);
            dVar30 = (double)CONCAT44(fVar26,SUB84(dVar30,0));
          }
          else {
            pdVar7[4] = dVar40;
            uVar28 = *(ulonglong *)((int)pdVar7 + 0x34);
            dVar40 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar30,0));
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = dVar40;
            dVar30 = *pdVar7;
            dVar29 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar7 + 2);
            dVar33 = (double)CONCAT44(uVar35,uVar19);
            dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar3);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar35;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar29 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar33 = pdVar7[2];
            dVar31 = pdVar7[3];
            unaff_r8[3] = dVar31;
            unaff_r8[2] = dVar33;
            unaff_r8[1] = dVar29;
            *unaff_r8 = dVar30;
          }
          puVar12 = puVar24 + 3;
          dVar39 = in_xd14;
          dVar2 = in_xd14;
          if (cVar43 == '\0') {
            dVar29 = (double)((ulonglong)dVar38 & 0xffffffff);
            dVar39 = dVar40;
            dVar2 = (double)CONCAT44(fVar26,SUB84(dVar30,0));
          }
          pdVar7 = (double *)((uint)puVar24[2] * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar7 = 0xe0000000;
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 6),SUB84(dVar29,0));
          }
          else {
            dVar30 = pdVar7[6];
          }
          if (cVar42 == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar2 >> 0x20) *
                                    (float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar30,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar7 + 0x34),fVar26);
            dVar30 = (double)CONCAT44(fVar26,SUB84(dVar2,0));
          }
          else {
            pdVar7[4] = dVar39;
            uVar28 = *(ulonglong *)((int)pdVar7 + 0x34);
            dVar39 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = (int)uVar28;
            dVar30 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar30,0));
            dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),(int)uVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = dVar39;
            dVar30 = *pdVar7;
            dVar40 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar43 == '\0') {
            uVar35 = *(undefined4 *)(pdVar7 + 2);
            dVar33 = (double)CONCAT44(uVar35,SUB84(dVar33,0));
            dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),SUB84(dVar31,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar35;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar40 >> 0x20);
            pdVar7 = unaff_r8 + 6;
            *(int *)pdVar7 = (int)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar33 = pdVar7[2];
            dVar29 = pdVar7[3];
            unaff_r8[7] = dVar29;
            unaff_r8[6] = dVar33;
            unaff_r8[5] = dVar40;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar30;
          }
          uVar35 = SUB84(dVar29,0);
          uVar37 = SUB84(dVar33,0);
          pdVar7 = pdVar7 + 4;
          puStack_68 = (uint *)0x2;
          if (2 < (int)(uVar23 - 1)) {
            do {
              fVar34 = SUB84(dVar40,0);
              uVar1 = *puVar12;
              puVar12 = puVar12 + 1;
              dVar31 = in_xd14;
              dVar40 = in_xd14;
              if (cVar43 == '\0') {
                dVar31 = dVar39;
                fVar34 = fVar26;
                dVar40 = (double)CONCAT44(fVar26,SUB84(dVar30,0));
              }
              pdVar20 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              *(undefined4 *)pdVar20 = 0xe0000000;
              *(undefined4 *)(pdVar20 + 5) = *puVar44;
              *(undefined4 *)((int)pdVar20 + 0x2c) = uStack_44;
              if (cVar43 == '\0') {
                dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 6),fVar34);
              }
              else {
                dVar30 = pdVar20[6];
              }
              if (cVar42 == '\0') {
                dVar30 = (double)(ulonglong)
                                 (uint)((float)((ulonglong)dVar40 >> 0x20) *
                                        (float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0));
              }
              if (cVar43 == '\0') {
                *(int *)(pdVar20 + 4) = SUB84(dVar30,0);
                uVar28 = CONCAT44(*(undefined4 *)((int)pdVar20 + 0x34),fVar26);
                dVar39 = dVar31;
                dVar30 = (double)CONCAT44(fVar26,SUB84(dVar40,0));
              }
              else {
                pdVar20[4] = dVar31;
                uVar28 = *(ulonglong *)((int)pdVar20 + 0x34);
                dVar39 = in_xd14;
                dVar30 = in_xd14;
              }
              if (cVar42 == '\0') {
                uVar28 = (ulonglong)
                         (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                               (float)uVar28);
              }
              if (cVar43 == '\0') {
                *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
                dVar30 = (double)CONCAT44(*(undefined4 *)pdVar20,SUB84(dVar30,0));
                dVar40 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 4),(int)uVar28);
                pdVar20 = pdVar20 + 1;
              }
              else {
                *(double *)((int)pdVar20 + 0x24) = dVar39;
                dVar30 = *pdVar20;
                dVar40 = pdVar20[1];
                pdVar20 = pdVar20 + 2;
              }
              if (cVar43 == '\0') {
                uVar35 = *(undefined4 *)(pdVar20 + 2);
                dVar33 = (double)CONCAT44(uVar35,SUB84(dVar33,0));
                dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 0x14),SUB84(dVar29,0));
                *(undefined4 *)((int)pdVar7 + 0x1c) = *(undefined4 *)((int)pdVar20 + 0x14);
                *(undefined4 *)(pdVar7 + 3) = uVar35;
                *(int *)((int)pdVar7 + 0x14) = (int)((ulonglong)dVar40 >> 0x20);
                pdVar7 = pdVar7 + 2;
                *(int *)pdVar7 = (int)((ulonglong)dVar30 >> 0x20);
              }
              else {
                dVar33 = pdVar20[2];
                dVar29 = pdVar20[3];
                pdVar7[3] = dVar29;
                pdVar7[2] = dVar33;
                pdVar7[1] = dVar40;
                *pdVar7 = dVar30;
              }
              uVar35 = SUB84(dVar29,0);
              uVar37 = SUB84(dVar33,0);
              pdVar7 = pdVar7 + 4;
              puStack_68 = (uint *)((int)puStack_68 + 1);
            } while ((int)puStack_68 < (int)(uVar23 - 1));
          }
          fVar34 = SUB84(dVar40,0);
          puVar24 = puVar12 + 1;
          pdVar20 = (double *)((uint)*puVar12 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar20 = 0xf0000000;
          dVar40 = in_xd14;
          in_xd2 = in_xd14;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(fVar26,SUB84(dVar30,0));
            in_xd2 = dVar39;
            fVar34 = fVar26;
          }
          *(undefined4 *)(pdVar20 + 5) = *puVar44;
          *(undefined4 *)((int)pdVar20 + 0x2c) = uStack_44;
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 6),fVar34);
          }
          else {
            dVar30 = pdVar20[6];
          }
          if (cVar42 == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar40 >> 0x20) *
                                    (float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0));
          }
          if (cVar43 == '\0') {
            *(int *)(pdVar20 + 4) = SUB84(dVar30,0);
            uVar28 = CONCAT44(*(undefined4 *)((int)pdVar20 + 0x34),fVar26);
            dVar30 = (double)CONCAT44(fVar26,SUB84(dVar40,0));
          }
          else {
            pdVar20[4] = in_xd2;
            uVar28 = *(ulonglong *)((int)pdVar20 + 0x34);
            in_xd2 = in_xd14;
            dVar30 = in_xd14;
          }
          if (cVar42 == '\0') {
            uVar28 = (ulonglong)
                     (uint)((float)((ulonglong)dVar30 >> 0x20) * (float)(uVar28 >> 0x20) +
                           (float)uVar28);
          }
          if (cVar43 == '\0') {
            *(int *)((int)pdVar20 + 0x24) = (int)uVar28;
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar20,SUB84(dVar30,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 4),(int)uVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)((int)pdVar20 + 0x24) = in_xd2;
            in_dr0 = *pdVar20;
            in_dr2 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar43 == '\0') {
            uVar36 = *(undefined4 *)(pdVar20 + 2);
            in_dr4 = (double)CONCAT44(uVar36,uVar37);
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 0x14),uVar35);
            *(undefined4 *)((int)pdVar7 + 0x1c) = *(undefined4 *)((int)pdVar20 + 0x14);
            *(undefined4 *)(pdVar7 + 3) = uVar36;
            *(int *)((int)pdVar7 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 2;
            *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar20[2];
            in_dr6 = pdVar20[3];
            pdVar7[3] = in_dr6;
            pdVar7[2] = in_dr4;
            pdVar7[1] = in_dr2;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
        }
        else {
          iVar4 = (uint)*puVar25 * 0x40 + _DAT_8c4aa510;
          iVar9 = (uint)puVar24[2] * 0x40 + _DAT_8c4aa510;
          iVar6 = (uint)puVar24[3] * 0x40 + _DAT_8c4aa510;
          if (cVar43 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x14),SUB84(in_dr6,0));
            dVar30 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x18),SUB84(in_dr0,0));
            dVar32 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x14),*(undefined4 *)(iVar9 + 0x18));
            dVar40 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x18),uVar35);
          }
          else {
            dVar30 = *(double *)(iVar9 + 0x18);
            in_dr6 = *(double *)(iVar4 + 0x14);
            dVar32 = *(double *)(iVar9 + 0x14);
            dVar40 = *(double *)(iVar4 + 0x18);
            in_xd8 = dVar30;
          }
          fVar34 = (float)((ulonglong)in_dr6 >> 0x20);
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * fVar34,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr6;
          }
          uVar35 = (undefined4)((ulonglong)dVar32 >> 0x20);
          dVar29 = dVar32;
          if (cVar43 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar35);
            dVar29 = in_xd2;
          }
          fVar26 = (float)((ulonglong)dVar40 >> 0x20);
          if (cVar42 == '\0') {
            fVar27 = SUB84(in_dr2,0) * fVar26;
          }
          else {
            fVar27 = SUB84(in_dr2 * dVar40,0);
          }
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(fVar26,*(undefined4 *)(iVar9 + 0x10));
            in_dr6 = (double)CONCAT44(fVar34,*(undefined4 *)(iVar4 + 0x10));
            dVar31 = (double)CONCAT44(SUB84(dVar32,0),fVar27);
          }
          else {
            in_xd4 = *(double *)(iVar9 + 0x10);
            dVar31 = in_xd8;
          }
          if (cVar42 == '\0') {
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(in_dr6,0),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * in_dr6;
          }
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uVar35);
            dVar32 = in_xd0;
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar31,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 - dVar31;
          }
          uVar35 = SUB84(dVar40,0);
          in_xd2 = in_xd4;
          if (cVar43 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uVar35);
            in_xd2 = dVar29;
          }
          if (cVar42 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                      SUB84(dVar31,0) * (float)((ulonglong)dVar40 >> 0x20));
          }
          else {
            dVar31 = dVar31 * dVar40;
          }
          dVar40 = in_xd4;
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(uVar35,SUB84(in_dr12,0));
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) * SUB84(in_dr6,0));
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) *
                                       (float)((ulonglong)in_dr6 >> 0x20),SUB84(dVar40,0));
            fVar34 = SUB84(dVar31,0) - (float)((ulonglong)dVar31 >> 0x20);
          }
          else {
            dVar30 = dVar30 * in_dr6;
            in_dr12 = dVar40 * in_dr6;
            fVar34 = SUB84(dVar31 - dVar31,0);
          }
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),fVar34);
          }
          else {
            dVar40 = *(double *)(iVar6 + 0x14);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                      SUB84(dVar30,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar40 = (double)CONCAT44((float)((ulonglong)dVar40 >> 0x20) * SUB84(dVar40,0),
                                      SUB84(dVar40,0));
          }
          else {
            dVar30 = dVar30 - in_dr12;
            dVar40 = dVar40 * dVar40;
          }
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),*(undefined4 *)(iVar6 + 0x10)
                                     );
          }
          else {
            in_xd2 = *(double *)(iVar6 + 0x10);
          }
          if (cVar42 == '\0') {
            dVar40 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar40,0) +
                                      (float)((ulonglong)dVar40 >> 0x20),SUB84(dVar40,0));
          }
          if (cVar43 == '\0') {
            dVar40 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),*(undefined4 *)(iVar6 + 0x18)
                                     );
            in_dr0 = (double)CONCAT44(SUB84(dVar30,0),SUB84(dVar30,0));
          }
          else {
            in_xd2 = *(double *)(iVar6 + 0x18);
            in_dr0 = dVar32;
          }
          if (cVar42 == '\0') {
            dVar40 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar40,0) +
                                    (float)((ulonglong)dVar40 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar40 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar43 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar40 >> 0x20),uVar35);
          }
          if (cVar42 == '\0') {
            bVar41 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar41 = in_dr2 < in_dr4;
          }
          uStack_50 = 0;
          if (bVar41) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c2516e6;
            uStack_50 = 0x8000;
          }
          puVar11 = auStack_40;
          iVar6 = iVar6 + 0x10;
          iVar9 = iVar9 + 0x10;
          FUN_8c2361a8(iVar4 + 0x10,iVar9,iVar6,puVar11);
          FUN_8c25ce48(auStack_40,iVar9,iVar6,puVar11,puVar13);
          iVar4 = (uint)puVar25[iVar18 + -1] * 0x40 + _DAT_8c4aa510;
          if (cVar43 == '\0') {
            uStack_34 = *(undefined4 *)(iVar4 + 0x10);
            uStack_30 = *(undefined4 *)(iVar4 + 0x14);
            fStack_2c = *(float *)(iVar4 + 0x18);
          }
          else {
            uStack_34 = (undefined4)*(undefined8 *)(iVar4 + 0x10);
            uStack_30 = (undefined4)*(undefined8 *)(iVar4 + 0x14);
            in_xd2 = *(double *)(iVar4 + 0x18);
            fStack_2c = SUB84(in_xd2,0);
            fStack_28 = (float)((ulonglong)in_xd2 >> 0x20);
          }
          iVar18 = (uint)puVar25[iVar18] * 0x40 + _DAT_8c4aa510;
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(uStack_34,*(undefined4 *)(iVar18 + 0x10));
          }
          else {
            in_xd2 = *(double *)(iVar18 + 0x10);
            dVar30 = (double)CONCAT44(uStack_30,uStack_34);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar35 = (undefined4)((ulonglong)dVar30 >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(uStack_30,*(undefined4 *)(iVar18 + 0x14));
            uStack_34 = uVar35;
          }
          else {
            uStack_34 = SUB84(dVar30,0);
            in_xd2 = *(double *)(iVar18 + 0x14);
            dVar30 = (double)CONCAT44(fStack_2c,uVar35);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          uVar35 = (undefined4)((ulonglong)dVar30 >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(fStack_2c,*(undefined4 *)(iVar18 + 0x18));
            uStack_30 = uVar35;
          }
          else {
            uStack_30 = SUB84(dVar30,0);
            in_xd2 = *(double *)(iVar18 + 0x18);
            dVar30 = (double)CONCAT44(fStack_28,uVar35);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 + dVar30;
          }
          fVar34 = (float)((ulonglong)dVar30 >> 0x20);
          if (cVar43 == '\0') {
            dVar30 = (double)CONCAT44(fVar34,uStack_34);
            fStack_2c = fVar34;
          }
          else {
            fStack_2c = SUB84(dVar30,0);
            in_xd2 = (double)CONCAT44(uStack_30,uStack_34);
            fStack_28 = fVar34;
          }
          fVar34 = SUB84(dVar38,0);
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_34 = SUB84(dVar30,0);
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uStack_30);
          }
          else {
            uStack_34 = SUB84(in_xd2,0);
            uStack_30 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(fStack_2c,uStack_30);
          }
          if (cVar42 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar34);
          }
          else {
            dVar30 = dVar30 * dVar38;
          }
          if (cVar43 == '\0') {
            uStack_30 = SUB84(dVar30,0);
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fStack_2c);
          }
          else {
            uStack_30 = SUB84(in_xd2,0);
            fStack_2c = (float)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(fStack_28,fStack_2c);
          }
          if (cVar42 == '\0') {
            in_dr2 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar34);
          }
          else {
            in_dr2 = dVar30 * dVar38;
          }
          puVar11 = &DAT_8c4c2620;
          puVar10 = auStack_40;
          if (cVar43 == '\0') {
            fStack_2c = SUB84(in_dr2,0);
          }
          else {
            fStack_2c = SUB84(in_xd2,0);
            fStack_28 = (float)((ulonglong)in_xd2 >> 0x20);
          }
          puVar15 = &uStack_34;
          FUN_8c23bae2(&DAT_8c4c2620,puVar15,puVar10,uStack_50);
          if (cVar43 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c2628,_DAT_8c4c2624);
          }
          puVar44 = puVar13;
          uVar35 = float_to_color_u8(puVar11,puVar15,puVar10,uStack_50);
          *puVar13 = uVar35;
          if (cVar43 == '\0') {
            in_dr6 = (double)(ulonglong)_DAT_8c4c263c;
            in_dr4 = (double)(ulonglong)_DAT_8c4c2634;
          }
          else {
            in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
            in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            in_dr4 = (double)CONCAT44(_DAT_8c4c2634,_DAT_8c4c2630);
          }
          uStack_44 = float_to_color_u8(puVar11,puVar15,puVar10,uStack_50);
          puVar12 = puVar24 + 2;
          puVar24 = puVar24 + 3;
          iStack_64 = 0;
          ar4_00 = (uint *)((uint)*puVar25 * 0x40 + _DAT_8c4aa510);
          puStack_68 = (uint *)((uint)*puVar12 * 0x40 + _DAT_8c4aa510);
          if (0 < (int)(uVar23 - 2)) {
            do {
              uVar1 = *puVar24;
              puVar24 = puVar24 + 1;
              ar6_00 = (uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              if ((*ar4_00 & *puStack_68 & *ar6_00 & 1) == 0) {
                FUN_8c247b20(ar4_00,puStack_68,ar6_00,&uStack_48);
              }
              iStack_64 = iStack_64 + 1;
              ar4_00 = puStack_68;
              puStack_68 = ar6_00;
            } while (iStack_64 < (int)(uVar23 - 2));
          }
        }
      }
      else {
LAB_8c2516e6:
        puVar24 = puVar25 + uVar23;
        puVar44 = puVar13;
      }
      iStack_60 = iStack_60 + 1;
      in_xd0 = dVar32;
      puVar13 = puVar44;
    }
  }
  else if (uVar3 == 0xc000) {
    if ((_DAT_8c4ab318 & 1) == 0) {
      pcVar5 = FUN_8c246254;
    }
    else {
      pcVar5 = FUN_8c245cc8;
    }
    uVar3 = (*pcVar5)(ar4,uVar1 & 0x3fff,ar6,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c250a54\n.set _FUN_8c250a54, _FUN_8c250a54_def\n");
