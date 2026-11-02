#include "../decls.h"
uint FUN_8c24df18_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  code *pcVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  uint *ar4_00;
  undefined4 *puVar13;
  double *pdVar14;
  int iVar15;
  double *pdVar16;
  undefined1 *puVar17;
  short *psVar18;
  uint uVar19;
  double *unaff_r8;
  double *pdVar20;
  double *pdVar21;
  uint uVar22;
  uint *ar6_00;
  ushort *puVar23;
  ushort *puVar24;
  short *psVar25;
  short *psVar26;
  double in_dr0;
  float fVar27;
  float fVar28;
  float fVar29;
  double in_dr2;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  double in_dr4;
  double dVar33;
  undefined4 uVar34;
  double in_dr6;
  double dVar35;
  double dVar36;
  double in_dr8;
  double in_dr12;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined8 in_dr14;
  double dVar41;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double dVar42;
  double in_xd8;
  double in_xd14;
  bool bVar43;
  undefined4 in_PR;
  char cVar44;
  char cVar45;
  uint *puStack_70;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [12];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uVar37;
  
  cVar45 = '\0';
  cVar44 = '\0';
  uStack_1c = (undefined4)in_dr14;
  uStack_20 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_24 = SUB84(in_dr12,0);
  uStack_28 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  dVar41 = 3.0517584889366844e-05;
  uVar1 = *ar4;
  uVar2 = uVar1 & 0xc000;
  psVar25 = *(short **)(ar4 + 10);
  puVar23 = *(ushort **)(ar4 + 2);
  uStack_2c = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    iStack_68 = 0;
    while( true ) {
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= iStack_68) break;
      puVar11 = puVar23 + 1;
      pdVar4 = (double *)((uint)*puVar23 * 0x40 + _DAT_8c4aa510);
      puVar24 = puVar23 + 2;
      puVar23 = puVar23 + 3;
      pdVar20 = (double *)((uint)*puVar24 * 0x40 + _DAT_8c4aa510);
      pdVar7 = (double *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar4 & *(uint *)pdVar7 & *(uint *)pdVar20 & 0x3f) == 0) {
        if (cVar45 == '\0') {
          in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),0x3eaaaa3b);
        }
        if (((*(uint *)pdVar4 | *(uint *)pdVar7 | *(uint *)pdVar20) & 1) == 0) {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)((int)pdVar7 + 4);
            dVar31 = (double)CONCAT44(uVar37,*(undefined4 *)((int)pdVar4 + 4));
            dVar42 = (double)CONCAT44(uVar37,SUB84(in_dr4,0));
          }
          else {
            dVar31 = *(double *)((int)pdVar7 + 4);
            in_xd2 = *(double *)((int)pdVar4 + 4);
            uVar37 = (undefined4)((ulonglong)dVar31 >> 0x20);
            dVar42 = dVar31;
          }
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) - SUB84(dVar31,0),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 - dVar31;
          }
          if (cVar45 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(pdVar20 + 1))
            ;
            dVar42 = (double)CONCAT44(uVar37,*(undefined4 *)(pdVar7 + 1));
          }
          else {
            in_xd2 = pdVar20[1];
            in_xd4 = pdVar7[1];
          }
          fVar28 = SUB84(dVar42,0);
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) - fVar28);
          }
          else {
            dVar31 = dVar31 - dVar42;
          }
          dVar36 = in_xd4;
          if (cVar45 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar28);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(dVar31,0),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * dVar31;
          }
          if (cVar45 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(pdVar4 + 1));
          }
          else {
            in_xd2 = pdVar4[1];
          }
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar31,0));
          }
          else {
            dVar36 = in_dr0 - dVar31;
          }
          if (cVar45 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                      *(undefined4 *)((int)pdVar20 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar20 + 4);
          }
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                      SUB84(dVar31,0) - (float)((ulonglong)dVar42 >> 0x20));
          }
          else {
            dVar31 = dVar31 - dVar42;
          }
          uVar2 = (uint)((ulonglong)dVar31 >> 0x20);
          dVar42 = dVar31;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar2,fVar28);
          }
          if (cVar44 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(dVar31,0));
          }
          else {
            in_dr0 = dVar36 * dVar31;
          }
          in_dr2 = (double)((ulonglong)uVar2 << 0x20);
          if (cVar44 == '\0') {
            fVar28 = (float)((ulonglong)dVar42 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar28,SUB84(dVar42,0));
            bVar43 = 0.0 < fVar28;
          }
          else {
            in_dr4 = dVar42 - in_dr0;
            bVar43 = in_dr2 < in_dr4;
          }
          iStack_64 = 0;
          if (bVar43) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24e3a2;
            iStack_64 = 0x8000;
          }
          pdVar21 = pdVar7 + 2;
          puVar10 = auStack_44;
          pdVar14 = pdVar20 + 2;
          FUN_8c2361a8(pdVar4 + 2,pdVar21,pdVar14,puVar10);
          uVar37 = SUB84(in_dr0,0);
          FUN_8c25ce48(auStack_44,pdVar21,pdVar14,puVar10,pdVar4);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 2),*(undefined4 *)(pdVar7 + 2));
          }
          else {
            in_xd2 = pdVar7[2];
            dVar42 = pdVar4[2];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar20 + 2))
            ;
          }
          else {
            in_xd2 = pdVar20[2];
          }
          fVar28 = SUB84(in_dr12,0);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            uStack_38 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),
                                      *(undefined4 *)((int)pdVar7 + 0x14));
          }
          else {
            uStack_38 = SUB84(dVar42,0);
            in_xd2 = *(double *)((int)pdVar7 + 0x14);
            dVar42 = *(double *)((int)pdVar4 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),
                                      *(undefined4 *)((int)pdVar20 + 0x14));
          }
          else {
            in_xd2 = *(double *)((int)pdVar20 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 3),*(undefined4 *)(pdVar7 + 3));
          }
          else {
            uStack_34 = SUB84(dVar42,0);
            in_xd2 = pdVar7[3];
            dVar42 = pdVar4[3];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar20 + 3))
            ;
          }
          else {
            in_xd2 = pdVar20[3];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          uStack_30 = uVar34;
          if (cVar45 != '\0') {
            uStack_30 = SUB84(dVar42,0);
            uStack_2c = uVar34;
          }
          puVar10 = &DAT_8c4c2620;
          puVar12 = auStack_44;
          puVar13 = &uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar12,iStack_64);
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          dVar42 = _DAT_8c4c2624;
          if (cVar45 == '\0') {
            dVar42 = in_xd4;
          }
          uStack_4c = float_to_color_u8(puVar10,puVar13,puVar12,iStack_64);
          uVar32 = _DAT_8c4c2634;
          in_xd4 = dVar42;
          if (cVar45 != '\0') {
            uVar32 = _DAT_8c4c2630;
            in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          }
          uStack_48 = float_to_color_u8(puVar10,puVar13,puVar12,iStack_64);
          uVar39 = SUB84(dVar41,0);
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar39,uVar32);
          }
          *(undefined4 *)pdVar4 = 0xe0000000;
          fVar28 = (float)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44(uVar34,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar31 = (double)CONCAT44(uVar34,(float)(int)*psVar25) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar4 + 4) = SUB84(dVar31,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[1] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),(float)(int)psVar25[1])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar4 + 0x24) = fVar28;
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar37);
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = in_xd2;
            dVar31 = *pdVar4;
            dVar36 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(pdVar4 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar34;
            *(undefined4 *)((int)unaff_r8 + 0x14) = uVar37;
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar31 >> 0x20);
            dVar42 = (double)CONCAT44(uVar39,SUB84(dVar42,0));
          }
          else {
            dVar42 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar42;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar31;
            dVar42 = in_xd14;
          }
          *(undefined4 *)pdVar7 = 0xe0000000;
          fVar28 = (float)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar36 = (double)CONCAT44(uVar37,(float)(int)psVar25[2]) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[3] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar25[3])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar7 + 0x24) = fVar28;
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar31,0));
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
            dVar31 = *pdVar7;
            dVar36 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(pdVar7 + 2);
            dVar42 = (double)CONCAT44(uVar34,SUB84(dVar42,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar34;
            *(undefined4 *)((int)unaff_r8 + 0x34) = uVar37;
            pdVar4 = unaff_r8 + 6;
            *(int *)pdVar4 = (int)((ulonglong)dVar31 >> 0x20);
          }
          else {
            dVar42 = pdVar7[2];
            unaff_r8[7] = pdVar7[3];
            unaff_r8[6] = dVar42;
            unaff_r8[5] = dVar36;
            pdVar4 = unaff_r8 + 4;
            *pdVar4 = dVar31;
          }
          dVar36 = in_xd14;
          if (cVar45 == '\0') {
            dVar36 = (double)CONCAT44(uVar39,SUB84(dVar42,0));
          }
          *(undefined4 *)pdVar20 = 0xf0000000;
          *(undefined4 *)(pdVar20 + 5) = uStack_4c;
          *(undefined4 *)((int)pdVar20 + 0x2c) = uStack_48;
          fVar28 = (float)((ulonglong)dVar36 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4]) * dVar36;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar20 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[5] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),(float)(int)psVar25[5])
                           * dVar36,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar20 + 0x24) = fVar28;
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar20,SUB84(dVar31,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 4),fVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)((int)pdVar20 + 0x24) = in_xd2;
            in_dr0 = *pdVar20;
            in_dr2 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(pdVar20 + 2);
            in_dr4 = (double)CONCAT44(uVar37,SUB84(dVar36,0));
            *(undefined4 *)((int)pdVar4 + 0x3c) = *(undefined4 *)((int)pdVar20 + 0x14);
            *(undefined4 *)(pdVar4 + 7) = uVar37;
            *(int *)((int)pdVar4 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar4 = pdVar4 + 6;
            *(int *)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar20[2];
            pdVar4[7] = pdVar20[3];
            pdVar4[6] = in_dr4;
            pdVar4[5] = in_dr2;
            pdVar4 = pdVar4 + 4;
            *pdVar4 = in_dr0;
          }
          unaff_r8 = pdVar4 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
        }
        else {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(pdVar7 + 3);
            uVar34 = *(undefined4 *)((int)pdVar7 + 0x14);
            pdVar21 = (double *)((int)pdVar4 + 0x14);
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar36 = (double)CONCAT44(uVar37,SUB84(in_dr0,0));
            dVar42 = in_xd2;
            dVar31 = (double)CONCAT44(uVar34,uVar37);
          }
          else {
            dVar36 = pdVar7[3];
            dVar42 = *(double *)((int)pdVar7 + 0x14);
            in_xd4 = *(double *)((int)pdVar4 + 0x14);
            pdVar21 = pdVar4 + 3;
            uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
            uVar37 = SUB84(dVar42,0);
            dVar31 = dVar42;
            in_xd8 = dVar36;
          }
          dVar33 = *pdVar21;
          fVar29 = (float)((ulonglong)dVar33 >> 0x20);
          fVar28 = SUB84(dVar33,0);
          if (cVar44 == '\0') {
            fVar27 = SUB84(in_dr2,0) * fVar29;
            dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * fVar28,SUB84(dVar36,0));
          }
          else {
            fVar27 = SUB84(in_dr2 * dVar33,0);
            dVar36 = dVar36 * dVar33;
          }
          if (cVar45 == '\0') {
            dVar35 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),*(undefined4 *)(pdVar4 + 2));
            dVar30 = (double)CONCAT44(uVar37,fVar27);
          }
          else {
            dVar35 = pdVar7[2];
            dVar30 = in_xd8;
          }
          if (cVar44 == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) * SUB84(dVar35,0),
                                      SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * dVar35;
          }
          uVar37 = (undefined4)((ulonglong)dVar35 >> 0x20);
          dVar38 = dVar35;
          if (cVar45 == '\0') {
            dVar38 = (double)CONCAT44(uVar37,SUB84(in_dr12,0));
          }
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar30,0),
                                      SUB84(dVar36,0));
          }
          else {
            dVar36 = dVar36 - dVar30;
          }
          in_xd2 = dVar35;
          if (cVar45 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),uVar37);
            in_xd2 = dVar42;
          }
          if (cVar44 == '\0') {
            dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),SUB84(dVar30,0) * fVar29);
          }
          else {
            dVar30 = dVar30 * dVar33;
          }
          if (cVar45 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),uVar34);
            dVar31 = in_xd0;
          }
          in_xd0 = dVar31;
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(dVar35,0));
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar38 >> 0x20) * fVar28,SUB84(dVar38,0));
            fVar29 = SUB84(dVar30,0) - (float)((ulonglong)dVar30 >> 0x20);
          }
          else {
            dVar36 = dVar36 * dVar35;
            in_dr12 = dVar38 * dVar33;
            fVar29 = SUB84(dVar30 - dVar30,0);
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 0x14),fVar29);
          }
          else {
            dVar42 = *(double *)((int)pdVar20 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) * SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar36 = dVar36 - in_dr12;
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar20 + 2))
            ;
          }
          else {
            in_xd2 = pdVar20[2];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * SUB84(dVar42,0) +
                                      (float)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0));
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar20 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar36,0),SUB84(dVar36,0));
          }
          else {
            in_xd2 = pdVar20[3];
            in_dr0 = in_xd0;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar42,0) +
                                    (float)((ulonglong)dVar42 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar42 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar45 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),fVar28);
          }
          if (cVar44 == '\0') {
            bVar43 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar43 = in_dr2 < in_dr4;
          }
          iStack_64 = 0;
          if (bVar43) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24e3a2;
            iStack_64 = 0x8000;
          }
          pdVar21 = pdVar7 + 2;
          puVar10 = auStack_44;
          pdVar14 = pdVar20 + 2;
          FUN_8c2361a8(pdVar4 + 2,pdVar21,pdVar14,puVar10);
          FUN_8c25ce48(auStack_44,pdVar21,pdVar14,puVar10,pdVar4);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 2),*(undefined4 *)(pdVar7 + 2));
          }
          else {
            in_xd2 = pdVar7[2];
            dVar42 = pdVar4[2];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar20 + 2))
            ;
          }
          else {
            in_xd2 = pdVar20[2];
          }
          fVar28 = SUB84(in_dr12,0);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            uStack_38 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),
                                      *(undefined4 *)((int)pdVar7 + 0x14));
          }
          else {
            uStack_38 = SUB84(dVar42,0);
            in_xd2 = *(double *)((int)pdVar7 + 0x14);
            dVar42 = *(double *)((int)pdVar4 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),
                                      *(undefined4 *)((int)pdVar20 + 0x14));
          }
          else {
            in_xd2 = *(double *)((int)pdVar20 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          if (cVar45 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar4 + 3),*(undefined4 *)(pdVar7 + 3));
          }
          else {
            uStack_34 = SUB84(dVar42,0);
            in_xd2 = pdVar7[3];
            dVar42 = pdVar4[3];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar20 + 3))
            ;
          }
          else {
            in_xd2 = pdVar20[3];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * in_dr12;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          uStack_30 = uVar37;
          if (cVar45 != '\0') {
            uStack_30 = SUB84(dVar42,0);
            uStack_2c = uVar37;
          }
          puVar10 = &DAT_8c4c2620;
          puVar12 = auStack_44;
          puVar13 = &uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar12,iStack_64);
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          dVar42 = _DAT_8c4c2624;
          if (cVar45 == '\0') {
            dVar42 = in_xd4;
          }
          uStack_4c = float_to_color_u8(puVar10,puVar13,puVar12,iStack_64);
          uVar34 = _DAT_8c4c2634;
          in_xd4 = dVar42;
          if (cVar45 != '\0') {
            uVar34 = _DAT_8c4c2630;
            in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          }
          uStack_48 = float_to_color_u8(puVar10,puVar13,puVar12,iStack_64);
          in_dr4 = in_xd14;
          if (cVar45 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(dVar41,0),uVar34);
          }
          fVar28 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar4 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[1] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[1]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)((int)pdVar4 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[2]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[3] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[3]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar20 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            in_dr2 = (double)CONCAT44(uVar37,(float)(int)psVar25[5] * fVar28);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar37,(float)(int)psVar25[5]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)((int)pdVar20 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)((int)pdVar20 + 0x24) = in_xd2;
          }
          FUN_8c247898(pdVar4,pdVar7,pdVar20,&uStack_4c);
        }
      }
LAB_8c24e3a2:
      psVar25 = psVar25 + 6;
      iStack_68 = iStack_68 + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    for (iStack_64 = 0; uVar2 = (uint)ar4[1], iStack_64 < (int)uVar2; iStack_64 = iStack_64 + 1) {
      pdVar7 = (double *)((uint)*puVar23 * 0x40 + _DAT_8c4aa510);
      puVar11 = puVar23 + 3;
      pdVar20 = (double *)((uint)puVar23[1] * 0x40 + _DAT_8c4aa510);
      pdVar21 = (double *)((uint)puVar23[2] * 0x40 + _DAT_8c4aa510);
      puVar23 = puVar23 + 4;
      pdVar4 = (double *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar7 & *(uint *)pdVar20 & *(uint *)pdVar21 & *(uint *)pdVar4 & 0x3f) == 0) {
        if (((*(uint *)pdVar7 | *(uint *)pdVar20 | *(uint *)pdVar21 | *(uint *)pdVar4) & 1) == 0) {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)((int)pdVar20 + 4);
            dVar42 = (double)CONCAT44(uVar37,*(undefined4 *)((int)pdVar7 + 4));
          }
          else {
            dVar42 = *(double *)((int)pdVar20 + 4);
            in_xd2 = *(double *)((int)pdVar7 + 4);
            uVar37 = SUB84(in_dr4,0);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) - SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 - dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar21 + 1))
            ;
            dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 1),uVar37);
          }
          else {
            in_xd2 = pdVar21[1];
            dVar31 = pdVar20[1];
          }
          fVar28 = (float)((ulonglong)dVar31 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) - fVar28);
          }
          else {
            dVar42 = dVar42 - dVar31;
          }
          dVar36 = dVar31;
          if (cVar45 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar28);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) * SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar7 + 1));
          }
          else {
            in_xd2 = pdVar7[1];
          }
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar42,0));
          }
          else {
            dVar36 = in_dr0 - dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),
                                      *(undefined4 *)((int)pdVar21 + 4));
          }
          else {
            in_xd2 = *(double *)((int)pdVar21 + 4);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),
                                      SUB84(dVar42,0) - SUB84(dVar31,0));
          }
          else {
            dVar42 = dVar42 - dVar31;
          }
          uVar2 = (uint)((ulonglong)dVar42 >> 0x20);
          dVar33 = dVar42;
          if (cVar45 == '\0') {
            dVar33 = (double)CONCAT44(uVar2,SUB84(dVar31,0));
          }
          if (cVar44 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) * SUB84(dVar42,0));
          }
          else {
            in_dr0 = dVar36 * dVar42;
          }
          in_dr2 = (double)((ulonglong)uVar2 << 0x20);
          if (cVar44 == '\0') {
            fVar28 = (float)((ulonglong)dVar33 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar28,SUB84(dVar33,0));
            bVar43 = 0.0 < fVar28;
          }
          else {
            in_dr4 = dVar33 - in_dr0;
            bVar43 = in_dr2 < in_dr4;
          }
          uStack_60 = 0;
          if (bVar43) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24e86e;
            uStack_60 = 0x8000;
          }
          pdVar14 = pdVar20 + 2;
          puVar10 = auStack_44;
          pdVar16 = pdVar21 + 2;
          FUN_8c2361a8(pdVar7 + 2,pdVar14,pdVar16,puVar10);
          uVar37 = SUB84(in_dr0,0);
          FUN_8c25ce48(auStack_44,pdVar14,pdVar16,puVar10,pdVar7);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 2),*(undefined4 *)(pdVar21 + 2));
          }
          else {
            dVar42 = pdVar20[2];
            in_xd2 = pdVar21[2];
          }
          puVar10 = &DAT_8c4c2620;
          puVar12 = auStack_44;
          fVar28 = (float)((ulonglong)dVar41 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_38 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 0x14),
                                      *(undefined4 *)((int)pdVar21 + 0x14));
          }
          else {
            uStack_38 = SUB84(dVar42,0);
            dVar42 = *(double *)((int)pdVar20 + 0x14);
            in_xd2 = *(double *)((int)pdVar21 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 3),*(undefined4 *)(pdVar21 + 3));
          }
          else {
            uStack_34 = SUB84(dVar42,0);
            dVar42 = pdVar20[3];
            in_xd2 = pdVar21[3];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          uStack_30 = uVar34;
          if (cVar45 != '\0') {
            uStack_30 = SUB84(dVar42,0);
            uStack_2c = uVar34;
          }
          puVar13 = &uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar12,uStack_60);
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
          }
          uStack_4c = float_to_color_u8(puVar10,puVar13,puVar12,uStack_60);
          uVar32 = _DAT_8c4c2634;
          if (cVar45 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
            uVar32 = _DAT_8c4c2630;
          }
          uStack_48 = float_to_color_u8(puVar10,puVar13,puVar12,uStack_60);
          uVar39 = SUB84(dVar41,0);
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar39,uVar32);
          }
          *(undefined4 *)pdVar7 = 0xe0000000;
          fVar28 = (float)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44(uVar34,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar31 = (double)CONCAT44(uVar34,(float)(int)*psVar25) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar31,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[1] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),(float)(int)psVar25[1])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar7 + 0x24) = fVar28;
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar37);
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
            dVar31 = *pdVar7;
            dVar36 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(pdVar7 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar34;
            *(undefined4 *)((int)unaff_r8 + 0x14) = uVar37;
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar31 >> 0x20);
            dVar42 = (double)CONCAT44(uVar39,SUB84(dVar42,0));
          }
          else {
            dVar42 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar42;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar31;
            dVar42 = in_xd14;
          }
          *(undefined4 *)pdVar20 = 0xe0000000;
          fVar28 = (float)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar36 = (double)CONCAT44(uVar37,(float)(int)psVar25[2]) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar20 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[3] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar25[3])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar20 + 0x24) = fVar28;
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar20,SUB84(dVar31,0));
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 4),fVar28);
            pdVar20 = pdVar20 + 1;
          }
          else {
            *(double *)((int)pdVar20 + 0x24) = in_xd2;
            dVar31 = *pdVar20;
            dVar36 = pdVar20[1];
            pdVar20 = pdVar20 + 2;
          }
          uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(pdVar20 + 2);
            dVar42 = (double)CONCAT44(uVar34,SUB84(dVar42,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar20 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar34;
            *(undefined4 *)((int)unaff_r8 + 0x34) = uVar37;
            pdVar7 = unaff_r8 + 6;
            *(int *)pdVar7 = (int)((ulonglong)dVar31 >> 0x20);
          }
          else {
            dVar42 = pdVar20[2];
            unaff_r8[7] = pdVar20[3];
            unaff_r8[6] = dVar42;
            unaff_r8[5] = dVar36;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar31;
          }
          dVar36 = in_xd14;
          if (cVar45 == '\0') {
            dVar36 = (double)CONCAT44(uVar39,SUB84(dVar42,0));
          }
          *(undefined4 *)pdVar21 = 0xe0000000;
          *(undefined4 *)(pdVar21 + 5) = uStack_4c;
          *(undefined4 *)((int)pdVar21 + 0x2c) = uStack_48;
          fVar28 = (float)((ulonglong)dVar36 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4]) * dVar36;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar21 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar21[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[5] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),(float)(int)psVar25[5])
                           * dVar36,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar21 + 0x24) = fVar28;
            dVar42 = (double)CONCAT44(*(undefined4 *)pdVar21,SUB84(dVar31,0));
            dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 4),fVar28);
            pdVar21 = pdVar21 + 1;
          }
          else {
            *(double *)((int)pdVar21 + 0x24) = in_xd2;
            dVar42 = *pdVar21;
            dVar31 = pdVar21[1];
            pdVar21 = pdVar21 + 2;
          }
          uVar37 = (undefined4)((ulonglong)dVar31 >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(pdVar21 + 2);
            *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar21 + 0x14);
            *(undefined4 *)(pdVar7 + 7) = uVar34;
            *(undefined4 *)((int)pdVar7 + 0x34) = uVar37;
            pdVar7 = pdVar7 + 6;
            *(int *)pdVar7 = (int)((ulonglong)dVar42 >> 0x20);
            dVar31 = (double)CONCAT44(uVar39,SUB84(dVar36,0));
          }
          else {
            dVar36 = pdVar21[2];
            pdVar7[7] = pdVar21[3];
            pdVar7[6] = dVar36;
            pdVar7[5] = dVar31;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = dVar42;
            dVar31 = in_xd14;
          }
          *(undefined4 *)pdVar4 = 0xf0000000;
          *(undefined4 *)(pdVar4 + 5) = uStack_4c;
          *(undefined4 *)((int)pdVar4 + 0x2c) = uStack_48;
          fVar28 = (float)((ulonglong)dVar31 >> 0x20);
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44(uVar37,(float)(int)psVar25[6] * fVar28);
          }
          else {
            dVar36 = (double)CONCAT44(uVar37,(float)(int)psVar25[6]) * dVar31;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar4 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[7] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar25[7])
                           * dVar31,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar4 + 0x24) = fVar28;
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar42,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = in_xd2;
            in_dr0 = *pdVar4;
            in_dr2 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(pdVar4 + 2);
            in_dr4 = (double)CONCAT44(uVar37,SUB84(dVar31,0));
            *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(pdVar7 + 7) = uVar37;
            *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar4[2];
            pdVar7[7] = pdVar4[3];
            pdVar7[6] = in_dr4;
            pdVar7[5] = in_dr2;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
        }
        else {
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(pdVar20 + 3);
            uVar34 = *(undefined4 *)((int)pdVar20 + 0x14);
            in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                      *(undefined4 *)((int)pdVar7 + 0x14));
            in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(pdVar7 + 3));
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar36 = (double)CONCAT44(uVar37,SUB84(in_dr0,0));
            dVar42 = in_xd2;
            dVar31 = *(double *)((int)pdVar20 + 0x14);
          }
          else {
            dVar36 = pdVar20[3];
            dVar42 = *(double *)((int)pdVar20 + 0x14);
            uVar34 = SUB84(dVar36,0);
            uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
            dVar31 = dVar36;
            in_xd6 = dVar42;
          }
          if (cVar44 == '\0') {
            fVar28 = SUB84(in_dr2,0) * SUB84(in_dr4,0);
            dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * SUB84(in_dr8,0),
                                      SUB84(dVar36,0));
          }
          else {
            fVar28 = SUB84(in_dr2 * in_dr4,0);
            dVar36 = dVar36 * in_dr8;
          }
          if (cVar45 == '\0') {
            dVar33 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 2),SUB84(in_dr4,0));
            in_dr8 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),SUB84(in_dr8,0));
            dVar31 = (double)CONCAT44(uVar37,fVar28);
          }
          else {
            dVar33 = pdVar20[2];
            in_dr8 = pdVar7[2];
          }
          fVar28 = (float)((ulonglong)in_dr8 >> 0x20);
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar28,SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 * in_dr8;
          }
          uVar37 = (undefined4)((ulonglong)dVar33 >> 0x20);
          dVar35 = dVar33;
          if (cVar45 == '\0') {
            dVar35 = (double)CONCAT44(uVar37,SUB84(in_dr12,0));
          }
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) - SUB84(dVar31,0),
                                      SUB84(dVar36,0));
          }
          else {
            dVar36 = dVar36 - dVar31;
          }
          in_xd2 = dVar33;
          if (cVar45 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uVar37);
            in_xd2 = dVar42;
          }
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                      SUB84(dVar31,0) * SUB84(dVar33,0));
          }
          else {
            dVar31 = dVar31 * dVar33;
          }
          dVar42 = in_xd6;
          if (cVar45 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),uVar34);
            dVar42 = in_xd0;
          }
          in_xd0 = dVar42;
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),SUB84(dVar36,0) * fVar28);
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) * SUB84(in_dr8,0),
                                       SUB84(dVar35,0));
            fVar28 = SUB84(dVar31,0) - (float)((ulonglong)dVar31 >> 0x20);
          }
          else {
            dVar36 = dVar36 * in_dr8;
            in_dr12 = dVar35 * in_dr8;
            fVar28 = SUB84(dVar31 - dVar31,0);
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar21 + 0x14),fVar28);
          }
          else {
            dVar42 = *(double *)((int)pdVar21 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                      SUB84(dVar36,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) * SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar36 = dVar36 - in_dr12;
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar21 + 2))
            ;
          }
          else {
            in_xd2 = pdVar21[2];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar36 >> 0x20) * SUB84(dVar42,0) +
                                      (float)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0));
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(pdVar21 + 3))
            ;
            in_dr0 = (double)CONCAT44(SUB84(dVar36,0),SUB84(dVar36,0));
          }
          else {
            in_xd2 = pdVar21[3];
            in_dr0 = in_xd0;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar42,0) +
                                    (float)((ulonglong)dVar42 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar42 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar45 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar33,0));
          }
          if (cVar44 == '\0') {
            bVar43 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar43 = in_dr2 < in_dr4;
          }
          uStack_60 = 0;
          if (bVar43) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24e86e;
            uStack_60 = 0x8000;
          }
          pdVar14 = pdVar20 + 2;
          puVar10 = auStack_44;
          pdVar16 = pdVar21 + 2;
          FUN_8c2361a8(pdVar7 + 2,pdVar14,pdVar16,puVar10);
          FUN_8c25ce48(auStack_44,pdVar14,pdVar16,puVar10,pdVar7);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 2),*(undefined4 *)(pdVar21 + 2));
          }
          else {
            dVar42 = pdVar20[2];
            in_xd2 = pdVar21[2];
          }
          puVar10 = &DAT_8c4c2620;
          puVar12 = auStack_44;
          fVar28 = (float)((ulonglong)dVar41 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_38 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar20 + 0x14),
                                      *(undefined4 *)((int)pdVar21 + 0x14));
          }
          else {
            uStack_38 = SUB84(dVar42,0);
            dVar42 = *(double *)((int)pdVar20 + 0x14);
            in_xd2 = *(double *)((int)pdVar21 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_34 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar42 = (double)CONCAT44(*(undefined4 *)(pdVar20 + 3),*(undefined4 *)(pdVar21 + 3));
          }
          else {
            uStack_34 = SUB84(dVar42,0);
            dVar42 = pdVar20[3];
            in_xd2 = pdVar21[3];
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0)) *
                                      fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = (dVar42 + dVar42) * dVar41;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          uStack_30 = uVar37;
          if (cVar45 != '\0') {
            uStack_30 = SUB84(dVar42,0);
            uStack_2c = uVar37;
          }
          puVar13 = &uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar12,uStack_60);
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2630,_DAT_8c4c262c);
          }
          uStack_4c = float_to_color_u8(puVar10,puVar13,puVar12,uStack_60);
          uVar34 = _DAT_8c4c2634;
          if (cVar45 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c2640,_DAT_8c4c263c);
            uVar34 = _DAT_8c4c2630;
          }
          uStack_48 = float_to_color_u8(puVar10,puVar13,puVar12,uStack_60);
          in_dr4 = in_xd14;
          if (cVar45 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(dVar41,0),uVar34);
          }
          fVar28 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[1] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[1]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[2]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar20 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar20[4] = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[3] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[3]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)((int)pdVar20 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)((int)pdVar20 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[4]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar21 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar21[4] = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[5] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[5]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)((int)pdVar21 + 0x24) = SUB84(dVar42,0);
          }
          else {
            *(double *)((int)pdVar21 + 0x24) = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[6] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[6]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar4 + 4) = SUB84(dVar42,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            in_dr2 = (double)CONCAT44(uVar37,(float)(int)psVar25[7] * fVar28);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar37,(float)(int)psVar25[7]) * in_dr4;
          }
          if (cVar45 == '\0') {
            *(int *)((int)pdVar4 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = in_xd2;
          }
          if ((*(uint *)pdVar7 & *(uint *)pdVar20 & *(uint *)pdVar21 & 1) == 0) {
            FUN_8c247898(pdVar7,pdVar20,pdVar21,&uStack_4c);
          }
          if ((*(uint *)pdVar20 & *(uint *)pdVar21 & *(uint *)pdVar4 & 1) == 0) {
            FUN_8c247898(pdVar20,pdVar21,pdVar4,&uStack_4c);
          }
        }
      }
LAB_8c24e86e:
      psVar25 = psVar25 + 8;
    }
  }
  else if (uVar2 == 0x8000) {
    iStack_5c = 0;
    puVar10 = &DAT_8c4c2620;
    while( true ) {
      uVar37 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= iStack_5c) break;
      iVar15 = 0;
      puVar24 = puVar23 + 1;
      uVar2 = 0;
      uVar19 = 0xffffffff;
      uVar22 = (uint)*puVar23;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar22;
      puVar11 = puVar24;
      if (uVar22 != 0) {
        do {
          uVar1 = *puVar11;
          puVar11 = puVar11 + 1;
          iVar15 = iVar15 + 1;
          uVar8 = *(uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
          uVar19 = uVar19 & uVar8;
          uVar2 = uVar2 | uVar8;
        } while (iVar15 < (int)uVar22);
      }
      if ((uVar19 & 0x3f) == 0) {
        iVar15 = (int)uVar22 >> 1;
        if ((uVar2 & 1) == 0) {
          iVar3 = (uint)*puVar24 * 0x40 + _DAT_8c4aa510;
          iVar9 = (uint)puVar23[2] * 0x40 + _DAT_8c4aa510;
          iVar5 = (uint)puVar23[3] * 0x40 + _DAT_8c4aa510;
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(iVar9 + 4);
            dVar42 = (double)CONCAT44(uVar37,*(undefined4 *)(iVar3 + 4));
          }
          else {
            dVar42 = *(double *)(iVar9 + 4);
            in_xd2 = *(double *)(iVar3 + 4);
            in_xd4 = dVar42;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) - SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 - dVar42;
          }
          if (cVar45 == '\0') {
            dVar31 = (double)CONCAT44(*(undefined4 *)(iVar9 + 8),uVar37);
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(iVar5 + 8));
          }
          else {
            dVar31 = *(double *)(iVar9 + 8);
            in_xd2 = *(double *)(iVar5 + 8);
          }
          fVar28 = (float)((ulonglong)dVar31 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) - fVar28);
          }
          else {
            dVar42 = dVar42 - dVar31;
          }
          dVar36 = dVar31;
          if (cVar45 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar28);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) * SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(iVar3 + 8));
          }
          else {
            in_xd2 = *(double *)(iVar3 + 8);
          }
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      SUB84(in_dr0,0) - SUB84(dVar42,0));
          }
          else {
            dVar36 = in_dr0 - dVar42;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,SUB84(dVar31,0));
            dVar31 = (double)CONCAT44(uVar37,*(undefined4 *)(iVar5 + 4));
          }
          else {
            in_xd2 = *(double *)(iVar5 + 4);
            dVar31 = dVar42;
          }
          if (cVar44 == '\0') {
            fVar28 = SUB84(dVar31,0) - SUB84(dVar42,0);
            dVar31 = (double)CONCAT44(uVar37,fVar28);
            in_dr0 = (double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),SUB84(dVar36,0) * fVar28);
          }
          else {
            dVar31 = dVar31 - dVar42;
            in_dr0 = dVar36 * dVar31;
          }
          in_dr2 = (double)((ulonglong)dVar31 & 0xffffffff00000000);
          if (cVar44 == '\0') {
            fVar28 = (float)((ulonglong)dVar42 >> 0x20) - SUB84(in_dr0,0);
            in_dr4 = (double)CONCAT44(fVar28,SUB84(dVar42,0));
            bVar43 = 0.0 < fVar28;
          }
          else {
            in_dr4 = dVar42 - in_dr0;
            bVar43 = in_dr2 < in_dr4;
          }
          uStack_54 = 0;
          if (bVar43) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) goto LAB_8c24ecf6;
            uStack_54 = 0x8000;
          }
          puVar12 = auStack_44;
          _DAT_8c4aa520 = _DAT_8c4aa520 + uVar22;
          iVar5 = iVar5 + 0x10;
          iVar9 = iVar9 + 0x10;
          FUN_8c2361a8(iVar3 + 0x10,iVar9,iVar5,puVar12);
          uVar37 = SUB84(in_dr0,0);
          FUN_8c25ce48(auStack_44,iVar9,iVar5,puVar12,puVar10);
          iVar3 = (uint)puVar24[iVar15 + -1] * 0x40 + _DAT_8c4aa510;
          if (cVar45 == '\0') {
            uStack_38 = *(undefined4 *)(iVar3 + 0x10);
            uStack_34 = *(undefined4 *)(iVar3 + 0x14);
            uStack_30 = *(undefined4 *)(iVar3 + 0x18);
          }
          else {
            uStack_38 = (undefined4)*(undefined8 *)(iVar3 + 0x10);
            uStack_34 = (undefined4)*(undefined8 *)(iVar3 + 0x14);
            in_xd2 = *(double *)(iVar3 + 0x18);
            uStack_30 = SUB84(in_xd2,0);
            uStack_2c = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          iVar15 = (uint)puVar24[iVar15] * 0x40 + _DAT_8c4aa510;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uStack_38,*(undefined4 *)(iVar15 + 0x10));
          }
          else {
            in_xd2 = *(double *)(iVar15 + 0x10);
            dVar42 = (double)CONCAT44(uStack_34,uStack_38);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uStack_34,*(undefined4 *)(iVar15 + 0x14));
            uStack_38 = uVar34;
          }
          else {
            uStack_38 = SUB84(dVar42,0);
            in_xd2 = *(double *)(iVar15 + 0x14);
            dVar42 = (double)CONCAT44(uStack_30,uVar34);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uStack_30,*(undefined4 *)(iVar15 + 0x18));
            uStack_34 = uVar34;
          }
          else {
            uStack_34 = SUB84(dVar42,0);
            in_xd2 = *(double *)(iVar15 + 0x18);
            dVar42 = (double)CONCAT44(uStack_2c,uVar34);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar34,uStack_38);
            uStack_30 = uVar34;
          }
          else {
            uStack_30 = SUB84(dVar42,0);
            in_xd2 = (double)CONCAT44(uStack_34,uStack_38);
            uStack_2c = uVar34;
          }
          fVar28 = (float)((ulonglong)dVar41 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_38 = SUB84(dVar42,0);
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),uStack_34);
          }
          else {
            uStack_38 = SUB84(in_xd2,0);
            uStack_34 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(uStack_30,uStack_34);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_34 = SUB84(dVar42,0);
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),uStack_30);
          }
          else {
            uStack_34 = SUB84(in_xd2,0);
            uStack_30 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(uStack_2c,uStack_30);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          puVar12 = &DAT_8c4c2620;
          puVar17 = auStack_44;
          if (cVar45 == '\0') {
            uStack_30 = SUB84(dVar42,0);
          }
          else {
            uStack_30 = SUB84(in_xd2,0);
            uStack_2c = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          puVar13 = &uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar17,uStack_54);
          uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 != '\0') {
            in_xd4 = *(double *)(puVar10 + 4);
          }
          uStack_4c = float_to_color_u8(puVar12,puVar13,puVar17,uStack_54);
          uVar39 = _DAT_8c4c2634;
          uVar32 = _DAT_8c4c263c;
          if (cVar45 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            uVar39 = _DAT_8c4c2630;
            uVar32 = _DAT_8c4c2638;
          }
          uStack_48 = float_to_color_u8(puVar12,puVar13,puVar17,uStack_54);
          uVar40 = SUB84(dVar41,0);
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar40,uVar39);
          }
          pdVar4 = (double *)((uint)*puVar24 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar4 = 0xe0000000;
          fVar28 = (float)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44(uVar34,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar31 = (double)CONCAT44(uVar34,(float)(int)*psVar25) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar4 + 4) = SUB84(dVar31,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[1] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),(float)(int)psVar25[1])
                           * dVar42,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar4 + 0x24) = fVar28;
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar37);
            dVar36 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = in_xd2;
            dVar31 = *pdVar4;
            dVar36 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(pdVar4 + 2);
            dVar33 = (double)CONCAT44(uVar34,SUB84(dVar42,0));
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),uVar32);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar34;
            *(undefined4 *)((int)unaff_r8 + 0x14) = uVar37;
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar31 >> 0x20);
          }
          else {
            dVar33 = pdVar4[2];
            dVar42 = pdVar4[3];
            unaff_r8[3] = dVar42;
            unaff_r8[2] = dVar33;
            unaff_r8[1] = dVar36;
            *unaff_r8 = dVar31;
          }
          puVar11 = puVar23 + 3;
          dVar36 = in_xd14;
          if (cVar45 == '\0') {
            dVar36 = (double)CONCAT44(uVar40,SUB84(dVar33,0));
          }
          pdVar4 = (double *)((uint)puVar23[2] * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar4 = 0xe0000000;
          fVar28 = (float)((ulonglong)dVar36 >> 0x20);
          if (cVar44 == '\0') {
            dVar33 = (double)CONCAT44(uVar37,(float)(int)psVar25[2] * fVar28);
          }
          else {
            dVar33 = (double)CONCAT44(uVar37,(float)(int)psVar25[2]) * dVar36;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar4 + 4) = SUB84(dVar33,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          psVar26 = psVar25 + 4;
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar25[3] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),(float)(int)psVar25[3])
                           * dVar36,0);
          }
          if (cVar45 == '\0') {
            *(float *)((int)pdVar4 + 0x24) = fVar28;
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar31,0));
            dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),fVar28);
            pdVar4 = pdVar4 + 1;
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = in_xd2;
            dVar31 = *pdVar4;
            dVar33 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(pdVar4 + 2);
            dVar36 = (double)CONCAT44(uVar37,SUB84(dVar36,0));
            dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 0x14),SUB84(dVar42,0));
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar37;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar33 >> 0x20);
            pdVar4 = unaff_r8 + 6;
            *(int *)pdVar4 = (int)((ulonglong)dVar31 >> 0x20);
          }
          else {
            dVar36 = pdVar4[2];
            dVar42 = pdVar4[3];
            unaff_r8[7] = dVar42;
            unaff_r8[6] = dVar36;
            unaff_r8[5] = dVar33;
            pdVar4 = unaff_r8 + 4;
            *pdVar4 = dVar31;
          }
          uVar37 = SUB84(dVar42,0);
          uVar34 = SUB84(dVar36,0);
          pdVar4 = pdVar4 + 4;
          puStack_70 = (uint *)0x2;
          if (2 < (int)(uVar22 - 1)) {
            do {
              uVar1 = *puVar11;
              puVar11 = puVar11 + 1;
              dVar35 = in_xd14;
              if (cVar45 == '\0') {
                dVar35 = (double)CONCAT44(uVar40,SUB84(dVar36,0));
              }
              pdVar7 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              *(undefined4 *)pdVar7 = 0xe0000000;
              *(undefined4 *)(pdVar7 + 5) = uStack_4c;
              *(undefined4 *)((int)pdVar7 + 0x2c) = uStack_48;
              uVar37 = (undefined4)((ulonglong)dVar33 >> 0x20);
              fVar28 = (float)((ulonglong)dVar35 >> 0x20);
              if (cVar44 == '\0') {
                dVar36 = (double)CONCAT44(uVar37,(float)(int)*psVar26 * fVar28);
              }
              else {
                dVar36 = (double)CONCAT44(uVar37,(float)(int)*psVar26) * dVar35;
              }
              if (cVar45 == '\0') {
                *(int *)(pdVar7 + 4) = SUB84(dVar36,0);
              }
              else {
                pdVar7[4] = in_xd2;
              }
              if (cVar44 == '\0') {
                fVar28 = (float)(int)psVar26[1] * fVar28;
              }
              else {
                fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),
                                                (float)(int)psVar26[1]) * dVar35,0);
              }
              psVar26 = psVar26 + 2;
              if (cVar45 == '\0') {
                *(float *)((int)pdVar7 + 0x24) = fVar28;
                dVar31 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar31,0));
                dVar33 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar28);
                pdVar7 = pdVar7 + 1;
              }
              else {
                *(double *)((int)pdVar7 + 0x24) = in_xd2;
                dVar31 = *pdVar7;
                dVar33 = pdVar7[1];
                pdVar7 = pdVar7 + 2;
              }
              if (cVar45 == '\0') {
                uVar37 = *(undefined4 *)(pdVar7 + 2);
                dVar36 = (double)CONCAT44(uVar37,SUB84(dVar35,0));
                dVar42 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),SUB84(dVar42,0));
                *(undefined4 *)((int)pdVar4 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
                *(undefined4 *)(pdVar4 + 3) = uVar37;
                *(int *)((int)pdVar4 + 0x14) = (int)((ulonglong)dVar33 >> 0x20);
                pdVar4 = pdVar4 + 2;
                *(int *)pdVar4 = (int)((ulonglong)dVar31 >> 0x20);
              }
              else {
                dVar36 = pdVar7[2];
                dVar42 = pdVar7[3];
                pdVar4[3] = dVar42;
                pdVar4[2] = dVar36;
                pdVar4[1] = dVar33;
                *pdVar4 = dVar31;
              }
              uVar37 = SUB84(dVar42,0);
              uVar34 = SUB84(dVar36,0);
              pdVar4 = pdVar4 + 4;
              puStack_70 = (uint *)((int)puStack_70 + 1);
            } while ((int)puStack_70 < (int)(uVar22 - 1));
          }
          puVar23 = puVar11 + 1;
          dVar42 = in_xd14;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar40,uVar34);
          }
          pdVar7 = (double *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar7 = 0xf0000000;
          *(undefined4 *)(pdVar7 + 5) = uStack_4c;
          *(undefined4 *)((int)pdVar7 + 0x2c) = uStack_48;
          uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
          fVar28 = (float)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar36 = (double)CONCAT44(uVar34,(float)(int)*psVar26 * fVar28);
          }
          else {
            dVar36 = (double)CONCAT44(uVar34,(float)(int)*psVar26) * dVar42;
          }
          if (cVar45 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar36,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          if (cVar44 == '\0') {
            fVar28 = (float)(int)psVar26[1] * fVar28;
          }
          else {
            fVar28 = SUB84((double)CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)(int)psVar26[1])
                           * dVar42,0);
          }
          psVar25 = psVar26 + 2;
          if (cVar45 == '\0') {
            *(float *)((int)pdVar7 + 0x24) = fVar28;
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar31,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar28);
            pdVar7 = pdVar7 + 1;
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
            in_dr0 = *pdVar7;
            in_dr2 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar45 == '\0') {
            uVar34 = *(undefined4 *)(pdVar7 + 2);
            in_dr4 = (double)CONCAT44(uVar34,SUB84(dVar42,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar37);
            *(undefined4 *)((int)pdVar4 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(pdVar4 + 3) = uVar34;
            *(int *)((int)pdVar4 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar4 = pdVar4 + 2;
            *(int *)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            in_dr6 = pdVar7[3];
            pdVar4[3] = in_dr6;
            pdVar4[2] = in_dr4;
            pdVar4[1] = in_dr2;
            *pdVar4 = in_dr0;
          }
          unaff_r8 = pdVar4 + 4;
        }
        else {
          iVar9 = (uint)*puVar24 * 0x40 + _DAT_8c4aa510;
          iVar5 = (uint)puVar23[2] * 0x40 + _DAT_8c4aa510;
          iVar3 = (uint)puVar23[3] * 0x40 + _DAT_8c4aa510;
          if (cVar45 == '\0') {
            uVar37 = *(undefined4 *)(iVar5 + 0x18);
            in_dr8 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x14),SUB84(in_dr8,0));
            uVar34 = *(undefined4 *)(iVar5 + 0x14);
            in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(iVar9 + 0x18)
                                     );
            in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar34);
            dVar31 = (double)CONCAT44(uVar37,SUB84(in_dr0,0));
            dVar42 = *(double *)(iVar5 + 0x14);
          }
          else {
            dVar31 = *(double *)(iVar5 + 0x18);
            in_dr8 = *(double *)(iVar9 + 0x14);
            in_xd2 = *(double *)(iVar5 + 0x14);
            uVar34 = SUB84(dVar31,0);
            uVar37 = (undefined4)((ulonglong)dVar31 >> 0x20);
            dVar42 = dVar31;
            in_xd4 = in_xd2;
          }
          fVar28 = (float)((ulonglong)in_dr8 >> 0x20);
          if (cVar44 == '\0') {
            fVar29 = SUB84(in_dr2,0) * SUB84(in_dr6,0);
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar28,SUB84(dVar31,0));
          }
          else {
            fVar29 = SUB84(in_dr2 * in_dr6,0);
            dVar31 = dVar31 * in_dr8;
          }
          if (cVar45 == '\0') {
            in_dr8 = (double)CONCAT44(fVar28,*(undefined4 *)(iVar5 + 0x10));
            in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x10),SUB84(in_dr6,0));
            dVar42 = (double)CONCAT44(uVar37,fVar29);
          }
          else {
            in_xd8 = *(double *)(iVar5 + 0x10);
            in_dr6 = *(double *)(iVar9 + 0x10);
          }
          fVar28 = (float)((ulonglong)in_dr6 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) * fVar28,SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 * in_dr6;
          }
          dVar36 = in_xd4;
          if (cVar45 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uVar34);
            dVar36 = in_xd0;
          }
          in_xd0 = dVar36;
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) - SUB84(dVar42,0),
                                      SUB84(dVar31,0));
          }
          else {
            dVar31 = dVar31 - dVar42;
          }
          dVar36 = in_xd8;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(in_dr8,0));
            dVar36 = in_xd2;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),
                                      SUB84(dVar42,0) * SUB84(in_dr6,0));
          }
          else {
            dVar42 = dVar42 * in_dr6;
          }
          dVar33 = in_xd8;
          if (cVar45 == '\0') {
            dVar33 = (double)CONCAT44(SUB84(in_dr8,0),SUB84(in_dr12,0));
          }
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar28);
            in_dr12 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) *
                                       (float)((ulonglong)in_dr8 >> 0x20),SUB84(dVar33,0));
            fVar28 = SUB84(dVar42,0) - (float)((ulonglong)dVar42 >> 0x20);
          }
          else {
            dVar31 = dVar31 * in_dr6;
            in_dr12 = dVar33 * in_dr8;
            fVar28 = SUB84(dVar42 - dVar42,0);
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x14),fVar28);
          }
          else {
            dVar42 = *(double *)(iVar3 + 0x14);
          }
          if (cVar44 == '\0') {
            dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                      SUB84(dVar31,0) - (float)((ulonglong)in_dr12 >> 0x20));
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) * SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar31 = dVar31 - in_dr12;
            dVar42 = dVar42 * dVar42;
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(iVar3 + 0x10)
                                     );
          }
          else {
            dVar36 = *(double *)(iVar3 + 0x10);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(dVar42,0) +
                                      (float)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0));
          }
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),*(undefined4 *)(iVar3 + 0x18)
                                     );
            in_dr0 = (double)CONCAT44(SUB84(dVar31,0),SUB84(dVar31,0));
            in_xd2 = dVar36;
          }
          else {
            in_xd2 = *(double *)(iVar3 + 0x18);
            in_dr0 = in_xd0;
          }
          if (cVar44 == '\0') {
            dVar42 = (double)((ulonglong)
                              (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar42,0) +
                                    (float)((ulonglong)dVar42 >> 0x20)) << 0x20);
          }
          in_dr2 = (double)((ulonglong)dVar42 & 0xffffffff00000000);
          in_dr4 = in_dr2;
          if (cVar45 == '\0') {
            in_dr4 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),uVar34);
          }
          if (cVar44 == '\0') {
            bVar43 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar43 = in_dr2 < in_dr4;
          }
          uStack_54 = 0;
          if (bVar43) {
            if ((_DAT_8c4ab308 & 0x800000) == 0) {
LAB_8c24ecf6:
              puVar23 = puVar24 + uVar22;
              psVar25 = psVar25 + uVar22 * 2;
              goto LAB_8c24eeaa;
            }
            uStack_54 = 0x8000;
          }
          puVar12 = auStack_44;
          iVar3 = iVar3 + 0x10;
          iVar5 = iVar5 + 0x10;
          FUN_8c2361a8(iVar9 + 0x10,iVar5,iVar3,puVar12);
          FUN_8c25ce48(auStack_44,iVar5,iVar3,puVar12,puVar10);
          iVar3 = (uint)puVar24[iVar15 + -1] * 0x40 + _DAT_8c4aa510;
          if (cVar45 == '\0') {
            uStack_38 = *(undefined4 *)(iVar3 + 0x10);
            uStack_34 = *(undefined4 *)(iVar3 + 0x14);
            uStack_30 = *(undefined4 *)(iVar3 + 0x18);
          }
          else {
            uStack_38 = (undefined4)*(undefined8 *)(iVar3 + 0x10);
            uStack_34 = (undefined4)*(undefined8 *)(iVar3 + 0x14);
            in_xd2 = *(double *)(iVar3 + 0x18);
            uStack_30 = SUB84(in_xd2,0);
            uStack_2c = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          iVar15 = (uint)puVar24[iVar15] * 0x40 + _DAT_8c4aa510;
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uStack_38,*(undefined4 *)(iVar15 + 0x10));
          }
          else {
            in_xd2 = *(double *)(iVar15 + 0x10);
            dVar42 = (double)CONCAT44(uStack_34,uStack_38);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uStack_34,*(undefined4 *)(iVar15 + 0x14));
            uStack_38 = uVar37;
          }
          else {
            uStack_38 = SUB84(dVar42,0);
            in_xd2 = *(double *)(iVar15 + 0x14);
            dVar42 = (double)CONCAT44(uStack_30,uVar37);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uStack_30,*(undefined4 *)(iVar15 + 0x18));
            uStack_34 = uVar37;
          }
          else {
            uStack_34 = SUB84(dVar42,0);
            in_xd2 = *(double *)(iVar15 + 0x18);
            dVar42 = (double)CONCAT44(uStack_2c,uVar37);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((float)((ulonglong)dVar42 >> 0x20) + SUB84(dVar42,0),
                                      SUB84(dVar42,0));
          }
          else {
            dVar42 = dVar42 + dVar42;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,uStack_38);
            uStack_30 = uVar37;
          }
          else {
            uStack_30 = SUB84(dVar42,0);
            in_xd2 = (double)CONCAT44(uStack_34,uStack_38);
            uStack_2c = uVar37;
          }
          fVar28 = (float)((ulonglong)dVar41 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_38 = SUB84(dVar42,0);
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),uStack_34);
          }
          else {
            uStack_38 = SUB84(in_xd2,0);
            uStack_34 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(uStack_30,uStack_34);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          if (cVar45 == '\0') {
            uStack_34 = SUB84(dVar42,0);
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),uStack_30);
          }
          else {
            uStack_34 = SUB84(in_xd2,0);
            uStack_30 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            in_xd2 = (double)CONCAT44(uStack_2c,uStack_30);
          }
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44((int)((ulonglong)dVar42 >> 0x20),SUB84(dVar42,0) * fVar28);
          }
          else {
            dVar42 = dVar42 * dVar41;
          }
          puVar12 = &DAT_8c4c2620;
          puVar17 = auStack_44;
          if (cVar45 == '\0') {
            uStack_30 = SUB84(dVar42,0);
          }
          else {
            uStack_30 = SUB84(in_xd2,0);
            uStack_2c = (undefined4)((ulonglong)in_xd2 >> 0x20);
          }
          puVar13 = &uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,puVar13,puVar17,uStack_54);
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar45 != '\0') {
            in_xd4 = *(double *)(puVar10 + 4);
          }
          uStack_4c = float_to_color_u8(puVar12,puVar13,puVar17,uStack_54);
          if (cVar45 == '\0') {
            in_dr6 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c263c);
            uVar34 = _DAT_8c4c2634;
          }
          else {
            in_dr6 = (double)CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
            in_xd4 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
            uVar34 = _DAT_8c4c2630;
          }
          uStack_48 = float_to_color_u8(puVar12,puVar13,puVar17,uStack_54);
          in_dr4 = in_xd14;
          if (cVar45 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(dVar41,0),uVar34);
          }
          psVar26 = psVar25 + 2;
          puVar11 = puVar23 + 2;
          ar4_00 = (uint *)((uint)*puVar24 * 0x40 + _DAT_8c4aa510);
          puVar23 = puVar23 + 3;
          puStack_70 = (uint *)((uint)*puVar11 * 0x40 + _DAT_8c4aa510);
          fVar28 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25 * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25) * in_dr4;
          }
          if (cVar45 == '\0') {
            ar4_00[8] = SUB84(dVar42,0);
          }
          else {
            *(double *)(ar4_00 + 8) = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[1] * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)psVar25[1]) * in_dr4;
          }
          if (cVar45 == '\0') {
            ar4_00[9] = SUB84(dVar42,0);
          }
          else {
            *(double *)(ar4_00 + 9) = in_xd2;
          }
          psVar18 = psVar25 + 3;
          psVar25 = psVar25 + 4;
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar26 * fVar28);
          }
          else {
            dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar26) * in_dr4;
          }
          if (cVar45 == '\0') {
            puStack_70[8] = SUB84(dVar42,0);
          }
          else {
            *(double *)(puStack_70 + 8) = in_xd2;
          }
          uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
          if (cVar44 == '\0') {
            in_dr2 = (double)CONCAT44(uVar37,(float)(int)*psVar18 * fVar28);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar37,(float)(int)*psVar18) * in_dr4;
          }
          if (cVar45 == '\0') {
            puStack_70[9] = SUB84(in_dr2,0);
          }
          else {
            *(double *)(puStack_70 + 9) = in_xd2;
          }
          iStack_68 = 0;
          if (0 < (int)(uVar22 - 2)) {
            do {
              uVar1 = *puVar23;
              puVar23 = puVar23 + 1;
              dVar42 = in_xd14;
              if (cVar45 == '\0') {
                dVar42 = (double)CONCAT44(SUB84(dVar41,0),SUB84(in_dr4,0));
              }
              in_dr4 = dVar42;
              uVar37 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              ar6_00 = (uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              fVar28 = (float)((ulonglong)in_dr4 >> 0x20);
              if (cVar44 == '\0') {
                dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25 * fVar28);
              }
              else {
                dVar42 = (double)CONCAT44(uVar37,(float)(int)*psVar25) * in_dr4;
              }
              if (cVar45 == '\0') {
                ar6_00[8] = SUB84(dVar42,0);
              }
              else {
                *(double *)(ar6_00 + 8) = in_xd2;
              }
              uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
              if (cVar44 == '\0') {
                in_dr2 = (double)CONCAT44(uVar37,(float)(int)psVar25[1] * fVar28);
              }
              else {
                in_dr2 = (double)CONCAT44(uVar37,(float)(int)psVar25[1]) * in_dr4;
              }
              if (cVar45 == '\0') {
                ar6_00[9] = SUB84(in_dr2,0);
              }
              else {
                *(double *)(ar6_00 + 9) = in_xd2;
              }
              psVar25 = psVar25 + 2;
              if ((*ar4_00 & *puStack_70 & *ar6_00 & 1) == 0) {
                FUN_8c247898(ar4_00,puStack_70,ar6_00,&uStack_4c);
              }
              iStack_68 = iStack_68 + 1;
              ar4_00 = puStack_70;
              puStack_70 = ar6_00;
            } while (iStack_68 < (int)(uVar22 - 2));
          }
        }
      }
      else {
        psVar25 = psVar25 + uVar22 * 2;
        puVar23 = puVar24 + uVar22;
      }
LAB_8c24eeaa:
      iStack_5c = iStack_5c + 1;
    }
  }
  else if (uVar2 == 0xc000) {
    if ((_DAT_8c4ab318 & 1) == 0) {
      pcVar6 = FUN_8c24501e;
    }
    else {
      pcVar6 = FUN_8c244ac2;
    }
    uVar2 = (*pcVar6)(ar4,uVar1 & 0x3fff,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24df18\n.set _FUN_8c24df18, _FUN_8c24df18_def\n");
