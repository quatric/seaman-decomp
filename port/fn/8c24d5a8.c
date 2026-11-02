#include "../decls.h"
uint FUN_8c24d5a8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  code *pcVar9;
  double *pdVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  double *pdVar15;
  double *ar6_00;
  undefined1 *ar6_01;
  double *unaff_r8;
  double *pdVar16;
  ushort *puVar17;
  ushort *puVar18;
  short *psVar19;
  short *psVar20;
  double in_dr0;
  double dVar21;
  double in_dr2;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  double in_dr4;
  double dVar25;
  float fVar27;
  undefined4 uVar28;
  double dVar26;
  undefined4 uVar29;
  undefined8 in_dr14;
  double dVar30;
  double in_xd2;
  double dVar31;
  double in_xd14;
  bool bVar32;
  undefined4 in_PR;
  char cVar33;
  char cVar34;
  int iStack_60;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_48;
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar34 = '\0';
  cVar33 = '\0';
  uStack_1c = (undefined4)in_dr14;
  uStack_20 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uVar1 = *ar4;
  dVar30 = 3.0517584889366844e-05;
  uVar2 = uVar1 & 0xc000;
  puVar17 = *(ushort **)(ar4 + 2);
  psVar19 = *(short **)(ar4 + 10);
  uStack_24 = in_PR;
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    iStack_58 = 0;
    dVar30 = 7.946779225775913e-07;
    while( true ) {
      uVar24 = SUB84(in_dr2,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= iStack_58) break;
      pdVar8 = (double *)((uint)*puVar17 * 0x40 + _DAT_8c4aa510);
      puVar18 = puVar17 + 2;
      pdVar7 = (double *)((uint)puVar17[1] * 0x40 + _DAT_8c4aa510);
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar31 = *(double *)((int)pdVar7 + 4);
      }
      puVar17 = puVar17 + 3;
      if (cVar34 == '\0') {
        uVar24 = *(undefined4 *)((int)pdVar8 + 4);
      }
      else {
        in_xd2 = *(double *)((int)pdVar8 + 4);
      }
      uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar25 = dVar31;
      if (cVar34 == '\0') {
        dVar25 = (double)CONCAT44(uVar28,uVar24);
      }
      if (cVar33 == '\0') {
        dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar25,0),
                                  SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 - dVar25;
      }
      pdVar10 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
      if (cVar34 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)(pdVar10 + 1));
        dVar31 = (double)CONCAT44(uVar28,*(undefined4 *)(pdVar7 + 1));
      }
      else {
        in_xd2 = pdVar10[1];
      }
      fVar27 = SUB84(dVar31,0);
      if (cVar33 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) - fVar27);
      }
      else {
        dVar25 = dVar25 - dVar31;
      }
      if (cVar34 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar27);
      }
      if (cVar33 == '\0') {
        dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * SUB84(dVar25,0),
                                  SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 * dVar25;
      }
      if (cVar34 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)(pdVar8 + 1));
      }
      else {
        in_xd2 = pdVar8[1];
      }
      if (cVar33 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar25,0)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar25;
      }
      if (cVar34 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)((int)pdVar10 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)((int)pdVar10 + 4);
      }
      if (cVar33 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                  SUB84(dVar25,0) - (float)((ulonglong)dVar31 >> 0x20));
      }
      else {
        dVar25 = dVar25 - dVar31;
      }
      uVar2 = (uint)((ulonglong)dVar25 >> 0x20);
      dVar31 = dVar25;
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44(uVar2,fVar27);
      }
      iStack_50 = 0;
      if (cVar33 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * SUB84(dVar25,0)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar25;
      }
      in_dr2 = (double)((ulonglong)uVar2 << 0x20);
      if (cVar33 == '\0') {
        fVar27 = (float)((ulonglong)dVar31 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar27,SUB84(dVar31,0));
        bVar32 = 0.0 < fVar27;
      }
      else {
        in_dr4 = dVar31 - in_dr0;
        bVar32 = in_dr2 < in_dr4;
      }
      if (bVar32) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          iStack_50 = 0x8000;
          goto LAB_8c24d6e8;
        }
      }
      else {
LAB_8c24d6e8:
        pdVar16 = pdVar7 + 2;
        puVar12 = auStack_3c;
        pdVar15 = pdVar10 + 2;
        FUN_8c2361a8(pdVar8 + 2,pdVar16,pdVar15,puVar12);
        uVar24 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_3c,pdVar16,pdVar15,puVar12,pdVar8);
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 2),*(undefined4 *)(pdVar7 + 2));
        }
        else {
          in_xd2 = pdVar7[2];
          dVar31 = pdVar8[2];
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(pdVar10 + 2));
        }
        else {
          in_xd2 = pdVar10[2];
        }
        fVar27 = (float)((ulonglong)dVar30 >> 0x20);
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          uStack_30 = (undefined4)((ulonglong)dVar31 >> 0x20);
          dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),
                                    *(undefined4 *)((int)pdVar7 + 0x14));
        }
        else {
          uStack_30 = SUB84(dVar31,0);
          in_xd2 = *(double *)((int)pdVar7 + 0x14);
          dVar31 = *(double *)((int)pdVar8 + 0x14);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                    *(undefined4 *)((int)pdVar10 + 0x14));
        }
        else {
          in_xd2 = *(double *)((int)pdVar10 + 0x14);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          uStack_2c = (undefined4)((ulonglong)dVar31 >> 0x20);
          dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 3),*(undefined4 *)(pdVar7 + 3));
        }
        else {
          uStack_2c = SUB84(dVar31,0);
          in_xd2 = pdVar7[3];
          dVar31 = pdVar8[3];
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(pdVar10 + 3));
        }
        else {
          in_xd2 = pdVar10[3];
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        puVar12 = &DAT_8c4c2620;
        uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
        uStack_28 = uVar28;
        if (cVar34 != '\0') {
          uStack_28 = SUB84(dVar31,0);
          uStack_24 = uVar28;
        }
        puVar13 = auStack_3c;
        puVar14 = &uStack_30;
        FUN_8c23bae2(&DAT_8c4c2620,puVar14,puVar13,iStack_50);
        uVar22 = (undefined4)((ulonglong)dVar31 >> 0x20);
        uVar3 = float_to_color_u8(puVar12,puVar14,puVar13,iStack_50);
        uVar28 = _DAT_8c4c2630;
        if (cVar34 == '\0') {
          uVar28 = _DAT_8c4c2634;
        }
        uVar4 = float_to_color_u8(puVar12,puVar14,puVar13,iStack_50);
        uVar29 = SUB84(dVar30,0);
        dVar31 = in_xd14;
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(uVar29,uVar28);
        }
        *(undefined4 *)pdVar8 = 0xe0000000;
        fVar27 = (float)((ulonglong)dVar31 >> 0x20);
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44(uVar22,(float)(int)*psVar19 * fVar27);
        }
        else {
          dVar25 = (double)CONCAT44(uVar22,(float)(int)*psVar19) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[1] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(float)(int)psVar19[1]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar8 + 0x24) = fVar27;
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar24);
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar27);
          pdVar8 = pdVar8 + 1;
        }
        else {
          *(double *)((int)pdVar8 + 0x24) = in_xd2;
          dVar25 = *pdVar8;
          dVar21 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(pdVar8 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar28;
          *(undefined4 *)((int)unaff_r8 + 0x14) = uVar24;
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar25 >> 0x20);
          dVar31 = (double)CONCAT44(uVar29,SUB84(dVar31,0));
        }
        else {
          dVar31 = pdVar8[2];
          unaff_r8[3] = pdVar8[3];
          unaff_r8[2] = dVar31;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar25;
          dVar31 = in_xd14;
        }
        *(undefined4 *)pdVar7 = 0xe0000000;
        fVar27 = (float)((ulonglong)dVar31 >> 0x20);
        if (cVar33 == '\0') {
          dVar21 = (double)CONCAT44(uVar24,(float)(int)psVar19[2] * fVar27);
        }
        else {
          dVar21 = (double)CONCAT44(uVar24,(float)(int)psVar19[2]) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar21,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[3] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),(float)(int)psVar19[3]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar7 + 0x24) = fVar27;
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar25,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)((int)pdVar7 + 0x24) = in_xd2;
          dVar25 = *pdVar7;
          dVar21 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(pdVar7 + 2);
          dVar31 = (double)CONCAT44(uVar28,SUB84(dVar31,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar28;
          *(undefined4 *)((int)unaff_r8 + 0x34) = uVar24;
          pdVar7 = unaff_r8 + 6;
          *(int *)pdVar7 = (int)((ulonglong)dVar25 >> 0x20);
        }
        else {
          dVar31 = pdVar7[2];
          unaff_r8[7] = pdVar7[3];
          unaff_r8[6] = dVar31;
          unaff_r8[5] = dVar21;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar25;
        }
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = (double)CONCAT44(uVar29,SUB84(dVar31,0));
        }
        *(undefined4 *)pdVar10 = 0xf0000000;
        *(undefined4 *)(pdVar10 + 5) = uVar3;
        *(undefined4 *)((int)pdVar10 + 0x2c) = uVar4;
        fVar27 = (float)((ulonglong)dVar21 >> 0x20);
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(uVar24,(float)(int)psVar19[4] * fVar27);
        }
        else {
          dVar31 = (double)CONCAT44(uVar24,(float)(int)psVar19[4]) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar10 + 4) = SUB84(dVar31,0);
        }
        else {
          pdVar10[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[5] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),(float)(int)psVar19[5]) *
                         dVar21,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar10 + 0x24) = fVar27;
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,SUB84(dVar25,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar27);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)((int)pdVar10 + 0x24) = in_xd2;
          in_dr0 = *pdVar10;
          in_dr2 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(pdVar10 + 2);
          in_dr4 = (double)CONCAT44(uVar24,SUB84(dVar21,0));
          *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)(pdVar7 + 7) = uVar24;
          *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar7[7] = pdVar10[3];
          pdVar7[6] = in_dr4;
          pdVar7[5] = in_dr2;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
      }
      psVar19 = psVar19 + 6;
      iStack_58 = iStack_58 + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_50 = 0;
    while( true ) {
      uVar24 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= iStack_50) break;
      pdVar10 = (double *)((uint)*puVar17 * 0x40 + _DAT_8c4aa510);
      pdVar8 = (double *)((uint)puVar17[1] * 0x40 + _DAT_8c4aa510);
      puVar18 = puVar17 + 3;
      pdVar16 = (double *)((uint)puVar17[2] * 0x40 + _DAT_8c4aa510);
      puVar17 = puVar17 + 4;
      pdVar7 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
      if (cVar34 == '\0') {
        uVar24 = *(undefined4 *)((int)pdVar8 + 4);
        dVar31 = (double)CONCAT44(uVar24,*(undefined4 *)((int)pdVar10 + 4));
      }
      else {
        dVar31 = *(double *)((int)pdVar8 + 4);
        in_xd2 = *(double *)((int)pdVar10 + 4);
      }
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) - SUB84(dVar31,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(pdVar16 + 1));
        dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),uVar24);
      }
      else {
        in_xd2 = pdVar16[1];
        dVar25 = pdVar8[1];
      }
      fVar27 = (float)((ulonglong)dVar25 >> 0x20);
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) - fVar27);
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      if (cVar34 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar27);
      }
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(dVar31,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 * dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(pdVar10 + 1));
      }
      else {
        in_xd2 = pdVar10[1];
      }
      if (cVar33 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar31,0)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)((int)pdVar16 + 4)
                                 );
      }
      else {
        in_xd2 = *(double *)((int)pdVar16 + 4);
      }
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) - SUB84(dVar25,0)
                                 );
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      uVar2 = (uint)((ulonglong)dVar31 >> 0x20);
      dVar26 = dVar31;
      if (cVar34 == '\0') {
        dVar26 = (double)CONCAT44(uVar2,SUB84(dVar25,0));
      }
      uStack_48 = 0;
      if (cVar33 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * SUB84(dVar31,0)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar31;
      }
      if (cVar33 == '\0') {
        fVar27 = (float)((ulonglong)dVar26 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar27,SUB84(dVar26,0));
        bVar32 = 0.0 < fVar27;
      }
      else {
        in_dr4 = dVar26 - in_dr0;
        bVar32 = (double)((ulonglong)uVar2 << 0x20) < in_dr4;
      }
      if (bVar32) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_48 = 0x8000;
          goto LAB_8c24d96c;
        }
      }
      else {
LAB_8c24d96c:
        pdVar15 = pdVar8 + 2;
        puVar12 = auStack_3c;
        ar6_00 = pdVar16 + 2;
        FUN_8c2361a8(pdVar10 + 2,pdVar15,ar6_00,puVar12);
        uVar24 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_3c,pdVar15,ar6_00,puVar12,pdVar8);
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 2),*(undefined4 *)(pdVar16 + 2));
        }
        else {
          in_xd2 = pdVar16[2];
          dVar31 = pdVar8[2];
        }
        puVar12 = &DAT_8c4c2620;
        puVar13 = auStack_3c;
        fVar27 = (float)((ulonglong)dVar30 >> 0x20);
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          uStack_30 = (undefined4)((ulonglong)dVar31 >> 0x20);
          dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),
                                    *(undefined4 *)((int)pdVar16 + 0x14));
        }
        else {
          uStack_30 = SUB84(dVar31,0);
          in_xd2 = *(double *)((int)pdVar16 + 0x14);
          dVar31 = *(double *)((int)pdVar8 + 0x14);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        if (cVar34 == '\0') {
          uStack_2c = (undefined4)((ulonglong)dVar31 >> 0x20);
          dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 3),*(undefined4 *)(pdVar16 + 3));
        }
        else {
          uStack_2c = SUB84(dVar31,0);
          in_xd2 = pdVar16[3];
          dVar31 = pdVar8[3];
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0)) * fVar27,
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = (dVar31 + dVar31) * dVar30;
        }
        uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
        uStack_28 = uVar28;
        if (cVar34 != '\0') {
          uStack_28 = SUB84(dVar31,0);
          uStack_24 = uVar28;
        }
        puVar14 = &uStack_30;
        FUN_8c23bae2(&DAT_8c4c2620,puVar14,puVar13,uStack_48);
        uVar22 = (undefined4)((ulonglong)dVar31 >> 0x20);
        uVar3 = float_to_color_u8(puVar12,puVar14,puVar13,uStack_48);
        uVar28 = _DAT_8c4c2630;
        if (cVar34 == '\0') {
          uVar28 = _DAT_8c4c2634;
        }
        uVar4 = float_to_color_u8(puVar12,puVar14,puVar13,uStack_48);
        uVar29 = SUB84(dVar30,0);
        dVar31 = in_xd14;
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(uVar29,uVar28);
        }
        *(undefined4 *)pdVar10 = 0xe0000000;
        fVar27 = (float)((ulonglong)dVar31 >> 0x20);
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44(uVar22,(float)(int)*psVar19 * fVar27);
        }
        else {
          dVar25 = (double)CONCAT44(uVar22,(float)(int)*psVar19) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar10 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar10[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[1] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(float)(int)psVar19[1]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar10 + 0x24) = fVar27;
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar10,uVar24);
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar27);
          pdVar10 = pdVar10 + 1;
        }
        else {
          *(double *)((int)pdVar10 + 0x24) = in_xd2;
          dVar25 = *pdVar10;
          dVar21 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(pdVar10 + 2);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar28;
          *(undefined4 *)((int)unaff_r8 + 0x14) = uVar24;
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar25 >> 0x20);
          dVar31 = (double)CONCAT44(uVar29,SUB84(dVar31,0));
        }
        else {
          dVar31 = pdVar10[2];
          unaff_r8[3] = pdVar10[3];
          unaff_r8[2] = dVar31;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar25;
          dVar31 = in_xd14;
        }
        *(undefined4 *)pdVar8 = 0xe0000000;
        fVar27 = (float)((ulonglong)dVar31 >> 0x20);
        if (cVar33 == '\0') {
          dVar21 = (double)CONCAT44(uVar24,(float)(int)psVar19[2] * fVar27);
        }
        else {
          dVar21 = (double)CONCAT44(uVar24,(float)(int)psVar19[2]) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar21,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[3] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),(float)(int)psVar19[3]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar8 + 0x24) = fVar27;
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar25,0));
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar27);
          pdVar8 = pdVar8 + 1;
        }
        else {
          *(double *)((int)pdVar8 + 0x24) = in_xd2;
          dVar25 = *pdVar8;
          dVar21 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(pdVar8 + 2);
          dVar31 = (double)CONCAT44(uVar28,SUB84(dVar31,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar28;
          *(undefined4 *)((int)unaff_r8 + 0x34) = uVar24;
          pdVar8 = unaff_r8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)dVar25 >> 0x20);
        }
        else {
          dVar31 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar31;
          unaff_r8[5] = dVar21;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar25;
        }
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = (double)CONCAT44(uVar29,SUB84(dVar31,0));
        }
        *(undefined4 *)pdVar16 = 0xe0000000;
        *(undefined4 *)(pdVar16 + 5) = uVar3;
        *(undefined4 *)((int)pdVar16 + 0x2c) = uVar4;
        fVar27 = (float)((ulonglong)dVar21 >> 0x20);
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(uVar24,(float)(int)psVar19[4] * fVar27);
        }
        else {
          dVar31 = (double)CONCAT44(uVar24,(float)(int)psVar19[4]) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar16 + 4) = SUB84(dVar31,0);
        }
        else {
          pdVar16[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[5] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),(float)(int)psVar19[5]) *
                         dVar21,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar16 + 0x24) = fVar27;
          dVar31 = (double)CONCAT44(*(undefined4 *)pdVar16,SUB84(dVar25,0));
          dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 4),fVar27);
          pdVar16 = pdVar16 + 1;
        }
        else {
          *(double *)((int)pdVar16 + 0x24) = in_xd2;
          dVar31 = *pdVar16;
          dVar25 = pdVar16[1];
          pdVar16 = pdVar16 + 2;
        }
        uVar24 = (undefined4)((ulonglong)dVar25 >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(pdVar16 + 2);
          *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar16 + 0x14);
          *(undefined4 *)(pdVar8 + 7) = uVar28;
          *(undefined4 *)((int)pdVar8 + 0x34) = uVar24;
          pdVar8 = pdVar8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)dVar31 >> 0x20);
          dVar25 = (double)CONCAT44(uVar29,SUB84(dVar21,0));
        }
        else {
          dVar21 = pdVar16[2];
          pdVar8[7] = pdVar16[3];
          pdVar8[6] = dVar21;
          pdVar8[5] = dVar25;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar31;
          dVar25 = in_xd14;
        }
        *(undefined4 *)pdVar7 = 0xf0000000;
        *(undefined4 *)(pdVar7 + 5) = uVar3;
        *(undefined4 *)((int)pdVar7 + 0x2c) = uVar4;
        fVar27 = (float)((ulonglong)dVar25 >> 0x20);
        if (cVar33 == '\0') {
          dVar21 = (double)CONCAT44(uVar24,(float)(int)psVar19[6] * fVar27);
        }
        else {
          dVar21 = (double)CONCAT44(uVar24,(float)(int)psVar19[6]) * dVar25;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar21,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[7] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),(float)(int)psVar19[7]) *
                         dVar25,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar7 + 0x24) = fVar27;
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar31,0));
          dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)((int)pdVar7 + 0x24) = in_xd2;
          in_dr0 = *pdVar7;
          dVar31 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(pdVar7 + 2);
          in_dr4 = (double)CONCAT44(uVar24,SUB84(dVar25,0));
          *(undefined4 *)((int)pdVar8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(pdVar8 + 7) = uVar24;
          *(int *)((int)pdVar8 + 0x34) = (int)((ulonglong)dVar31 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          pdVar8[7] = pdVar7[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = dVar31;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
      }
      psVar19 = psVar19 + 8;
      iStack_50 = iStack_50 + 1;
    }
  }
  else if (uVar2 == 0x8000) {
    puVar12 = &DAT_8c4c2620;
    for (iStack_54 = 0; uVar2 = (uint)ar4[1], iStack_54 < (int)uVar2; iStack_54 = iStack_54 + 1) {
      puVar18 = puVar17 + 1;
      uVar2 = (uint)*puVar17;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar2;
      iVar11 = (uint)*puVar18 * 0x40 + _DAT_8c4aa510;
      iVar5 = (uint)puVar17[2] * 0x40 + _DAT_8c4aa510;
      iVar6 = (uint)puVar17[3] * 0x40 + _DAT_8c4aa510;
      if (cVar34 == '\0') {
        uVar24 = *(undefined4 *)(iVar5 + 4);
        dVar31 = (double)CONCAT44(uVar24,*(undefined4 *)(iVar11 + 4));
        dVar25 = (double)CONCAT44(uVar24,SUB84(in_dr4,0));
      }
      else {
        dVar31 = *(double *)(iVar5 + 4);
        in_xd2 = *(double *)(iVar11 + 4);
        uVar24 = (undefined4)((ulonglong)dVar31 >> 0x20);
        dVar25 = dVar31;
      }
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) - SUB84(dVar31,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(iVar6 + 8));
        dVar25 = (double)CONCAT44(uVar24,*(undefined4 *)(iVar5 + 8));
      }
      else {
        in_xd2 = *(double *)(iVar6 + 8);
      }
      fVar27 = SUB84(dVar25,0);
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) - fVar27);
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      if (cVar34 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar27);
      }
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(dVar31,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 * dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(iVar11 + 8));
      }
      else {
        in_xd2 = *(double *)(iVar11 + 8);
      }
      if (cVar33 == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar31,0)
                                 );
      }
      else {
        dVar21 = in_dr0 - dVar31;
      }
      if (cVar34 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(iVar6 + 4));
      }
      else {
        in_xd2 = *(double *)(iVar6 + 4);
      }
      uStack_48 = 0;
      if (cVar33 == '\0') {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                  SUB84(dVar31,0) - (float)((ulonglong)dVar25 >> 0x20));
      }
      else {
        dVar31 = dVar31 - dVar25;
      }
      uVar23 = (uint)((ulonglong)dVar31 >> 0x20);
      dVar25 = dVar31;
      if (cVar34 == '\0') {
        dVar25 = (double)CONCAT44(uVar23,fVar27);
      }
      if (cVar33 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) * SUB84(dVar31,0)
                                 );
      }
      else {
        in_dr0 = dVar21 * dVar31;
      }
      if (cVar33 == '\0') {
        fVar27 = (float)((ulonglong)dVar25 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar27,SUB84(dVar25,0));
        bVar32 = 0.0 < fVar27;
      }
      else {
        in_dr4 = dVar25 - in_dr0;
        bVar32 = (double)((ulonglong)uVar23 << 0x20) < in_dr4;
      }
      if (bVar32) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_48 = 0x8000;
          goto LAB_8c24dc38;
        }
        puVar17 = puVar18 + uVar2;
        psVar19 = psVar19 + uVar2 * 2;
      }
      else {
LAB_8c24dc38:
        puVar13 = auStack_3c;
        _DAT_8c4aa520 = _DAT_8c4aa520 + uVar2;
        iVar6 = iVar6 + 0x10;
        iVar5 = iVar5 + 0x10;
        FUN_8c2361a8(iVar11 + 0x10,iVar5,iVar6,puVar13);
        uVar24 = SUB84(in_dr0,0);
        FUN_8c25ce48(auStack_3c,iVar5,iVar6,puVar13,puVar12);
        iVar5 = (uint)puVar18[((int)uVar2 >> 1) + -1] * 0x40 + _DAT_8c4aa510;
        if (cVar34 == '\0') {
          uStack_30 = *(undefined4 *)(iVar5 + 0x10);
          uStack_2c = *(undefined4 *)(iVar5 + 0x14);
          uStack_28 = *(undefined4 *)(iVar5 + 0x18);
        }
        else {
          uStack_30 = (undefined4)*(undefined8 *)(iVar5 + 0x10);
          uStack_2c = (undefined4)*(undefined8 *)(iVar5 + 0x14);
          in_xd2 = *(double *)(iVar5 + 0x18);
          uStack_28 = SUB84(in_xd2,0);
          uStack_24 = (undefined4)((ulonglong)in_xd2 >> 0x20);
        }
        iVar5 = (uint)puVar18[(int)uVar2 >> 1] * 0x40 + _DAT_8c4aa510;
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(uStack_30,*(undefined4 *)(iVar5 + 0x10));
        }
        else {
          in_xd2 = *(double *)(iVar5 + 0x10);
          dVar31 = (double)CONCAT44(uStack_2c,uStack_30);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(uStack_2c,*(undefined4 *)(iVar5 + 0x14));
          uStack_30 = uVar28;
        }
        else {
          uStack_30 = SUB84(dVar31,0);
          in_xd2 = *(double *)(iVar5 + 0x14);
          dVar31 = (double)CONCAT44(uStack_28,uVar28);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(uStack_28,*(undefined4 *)(iVar5 + 0x18));
          uStack_2c = uVar28;
        }
        else {
          uStack_2c = SUB84(dVar31,0);
          in_xd2 = *(double *)(iVar5 + 0x18);
          dVar31 = (double)CONCAT44(uStack_24,uVar28);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(uVar28,uStack_30);
          uStack_28 = uVar28;
        }
        else {
          uStack_28 = SUB84(dVar31,0);
          in_xd2 = (double)CONCAT44(uStack_2c,uStack_30);
          uStack_24 = uVar28;
        }
        fVar27 = (float)((ulonglong)dVar30 >> 0x20);
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar27);
        }
        else {
          dVar31 = dVar31 * dVar30;
        }
        if (cVar34 == '\0') {
          uStack_30 = SUB84(dVar31,0);
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uStack_2c);
        }
        else {
          uStack_30 = SUB84(in_xd2,0);
          uStack_2c = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = (double)CONCAT44(uStack_28,uStack_2c);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar27);
        }
        else {
          dVar31 = dVar31 * dVar30;
        }
        puVar13 = &DAT_8c4c2620;
        ar6_01 = auStack_3c;
        if (cVar34 == '\0') {
          uStack_2c = SUB84(dVar31,0);
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uStack_28);
        }
        else {
          uStack_2c = SUB84(in_xd2,0);
          uStack_28 = (undefined4)((ulonglong)in_xd2 >> 0x20);
          in_xd2 = (double)CONCAT44(uStack_24,uStack_28);
        }
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar27);
        }
        else {
          dVar31 = dVar31 * dVar30;
        }
        if (cVar34 == '\0') {
          uStack_28 = SUB84(dVar31,0);
        }
        else {
          uStack_28 = SUB84(in_xd2,0);
          uStack_24 = (undefined4)((ulonglong)in_xd2 >> 0x20);
        }
        puVar14 = &uStack_30;
        FUN_8c23bae2(&DAT_8c4c2620,puVar14,ar6_01,uStack_48);
        uVar22 = (undefined4)((ulonglong)dVar31 >> 0x20);
        uVar3 = float_to_color_u8(puVar13,puVar14,ar6_01,uStack_48);
        uVar28 = _DAT_8c4c2630;
        if (cVar34 == '\0') {
          uVar28 = _DAT_8c4c2634;
        }
        uVar4 = float_to_color_u8(puVar13,puVar14,ar6_01,uStack_48);
        uVar29 = SUB84(dVar30,0);
        dVar31 = in_xd14;
        if (cVar34 == '\0') {
          dVar31 = (double)CONCAT44(uVar29,uVar28);
        }
        pdVar7 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar7 = 0xe0000000;
        fVar27 = (float)((ulonglong)dVar31 >> 0x20);
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44(uVar22,(float)(int)*psVar19 * fVar27);
        }
        else {
          dVar25 = (double)CONCAT44(uVar22,(float)(int)*psVar19) * dVar31;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[1] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(float)(int)psVar19[1]) *
                         dVar31,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar7 + 0x24) = fVar27;
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar24);
          dVar21 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)((int)pdVar7 + 0x24) = in_xd2;
          dVar25 = *pdVar7;
          dVar21 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (cVar34 == '\0') {
          uVar28 = *(undefined4 *)(pdVar7 + 2);
          dVar31 = (double)CONCAT44(uVar28,SUB84(dVar31,0));
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar28;
          *(undefined4 *)((int)unaff_r8 + 0x14) = uVar24;
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar25 >> 0x20);
        }
        else {
          dVar31 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar31;
          unaff_r8[1] = dVar21;
          *unaff_r8 = dVar25;
        }
        puVar18 = puVar17 + 3;
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = (double)CONCAT44(uVar29,SUB84(dVar31,0));
        }
        pdVar7 = (double *)((uint)puVar17[2] * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar7 = 0xe0000000;
        fVar27 = (float)((ulonglong)dVar21 >> 0x20);
        if (cVar33 == '\0') {
          dVar31 = (double)CONCAT44(uVar24,(float)(int)psVar19[2] * fVar27);
        }
        else {
          dVar31 = (double)CONCAT44(uVar24,(float)(int)psVar19[2]) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar7 + 4) = SUB84(dVar31,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        psVar20 = psVar19 + 4;
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar19[3] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),(float)(int)psVar19[3]) *
                         dVar21,0);
        }
        if (cVar34 == '\0') {
          *(float *)((int)pdVar7 + 0x24) = fVar27;
          dVar31 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(dVar25,0));
          dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar27);
          pdVar7 = pdVar7 + 1;
        }
        else {
          *(double *)((int)pdVar7 + 0x24) = in_xd2;
          dVar31 = *pdVar7;
          dVar25 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(pdVar7 + 2);
          dVar21 = (double)CONCAT44(uVar24,SUB84(dVar21,0));
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar7 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar24;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar25 >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)pdVar7 = (int)((ulonglong)dVar31 >> 0x20);
        }
        else {
          dVar21 = pdVar7[2];
          unaff_r8[7] = pdVar7[3];
          unaff_r8[6] = dVar21;
          unaff_r8[5] = dVar25;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar31;
        }
        uVar24 = SUB84(dVar21,0);
        pdVar7 = pdVar7 + 4;
        iStack_60 = 2;
        if (2 < (int)(uVar2 - 1)) {
          do {
            uVar1 = *puVar18;
            puVar18 = puVar18 + 1;
            dVar26 = in_xd14;
            if (cVar34 == '\0') {
              dVar26 = (double)CONCAT44(uVar29,SUB84(dVar21,0));
            }
            pdVar8 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
            *(undefined4 *)pdVar8 = 0xe0000000;
            *(undefined4 *)(pdVar8 + 5) = uVar3;
            *(undefined4 *)((int)pdVar8 + 0x2c) = uVar4;
            uVar24 = (undefined4)((ulonglong)dVar25 >> 0x20);
            fVar27 = (float)((ulonglong)dVar26 >> 0x20);
            if (cVar33 == '\0') {
              dVar25 = (double)CONCAT44(uVar24,(float)(int)*psVar20 * fVar27);
            }
            else {
              dVar25 = (double)CONCAT44(uVar24,(float)(int)*psVar20) * dVar26;
            }
            if (cVar34 == '\0') {
              *(int *)(pdVar8 + 4) = SUB84(dVar25,0);
            }
            else {
              pdVar8[4] = in_xd2;
            }
            if (cVar33 == '\0') {
              fVar27 = (float)(int)psVar20[1] * fVar27;
            }
            else {
              fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                              (float)(int)psVar20[1]) * dVar26,0);
            }
            if (cVar34 == '\0') {
              *(float *)((int)pdVar8 + 0x24) = fVar27;
            }
            else {
              *(double *)((int)pdVar8 + 0x24) = in_xd2;
            }
            psVar20 = psVar20 + 2;
            if (cVar34 == '\0') {
              dVar31 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar31,0));
              dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar27);
              pdVar8 = pdVar8 + 1;
            }
            else {
              dVar31 = *pdVar8;
              dVar25 = pdVar8[1];
              pdVar8 = pdVar8 + 2;
            }
            if (cVar34 == '\0') {
              uVar24 = *(undefined4 *)(pdVar8 + 2);
              dVar21 = (double)CONCAT44(uVar24,SUB84(dVar26,0));
              *(undefined4 *)((int)pdVar7 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
              *(undefined4 *)(pdVar7 + 3) = uVar24;
              *(int *)((int)pdVar7 + 0x14) = (int)((ulonglong)dVar25 >> 0x20);
              pdVar7 = pdVar7 + 2;
              *(int *)pdVar7 = (int)((ulonglong)dVar31 >> 0x20);
            }
            else {
              dVar21 = pdVar8[2];
              pdVar7[3] = pdVar8[3];
              pdVar7[2] = dVar21;
              pdVar7[1] = dVar25;
              *pdVar7 = dVar31;
            }
            uVar24 = SUB84(dVar21,0);
            pdVar7 = pdVar7 + 4;
            iStack_60 = iStack_60 + 1;
          } while (iStack_60 < (int)(uVar2 - 1));
        }
        puVar17 = puVar18 + 1;
        dVar21 = in_xd14;
        if (cVar34 == '\0') {
          dVar21 = (double)CONCAT44(uVar29,uVar24);
        }
        pdVar8 = (double *)((uint)*puVar18 * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar8 = 0xf0000000;
        *(undefined4 *)(pdVar8 + 5) = uVar3;
        *(undefined4 *)((int)pdVar8 + 0x2c) = uVar4;
        uVar24 = (undefined4)((ulonglong)dVar25 >> 0x20);
        fVar27 = (float)((ulonglong)dVar21 >> 0x20);
        if (cVar33 == '\0') {
          dVar25 = (double)CONCAT44(uVar24,(float)(int)*psVar20 * fVar27);
        }
        else {
          dVar25 = (double)CONCAT44(uVar24,(float)(int)*psVar20) * dVar21;
        }
        if (cVar34 == '\0') {
          *(int *)(pdVar8 + 4) = SUB84(dVar25,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        if (cVar33 == '\0') {
          fVar27 = (float)(int)psVar20[1] * fVar27;
        }
        else {
          fVar27 = SUB84((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(float)(int)psVar20[1]) *
                         dVar21,0);
        }
        psVar19 = psVar20 + 2;
        if (cVar34 == '\0') {
          *(float *)((int)pdVar8 + 0x24) = fVar27;
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar31,0));
          dVar31 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),fVar27);
          pdVar8 = pdVar8 + 1;
        }
        else {
          *(double *)((int)pdVar8 + 0x24) = in_xd2;
          in_dr0 = *pdVar8;
          dVar31 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar34 == '\0') {
          uVar24 = *(undefined4 *)(pdVar8 + 2);
          in_dr4 = (double)CONCAT44(uVar24,SUB84(dVar21,0));
          *(undefined4 *)((int)pdVar7 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
          *(undefined4 *)(pdVar7 + 3) = uVar24;
          *(int *)((int)pdVar7 + 0x14) = (int)((ulonglong)dVar31 >> 0x20);
          pdVar7 = pdVar7 + 2;
          *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar8[2];
          pdVar7[3] = pdVar8[3];
          pdVar7[2] = in_dr4;
          pdVar7[1] = dVar31;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
      }
    }
  }
  else if (uVar2 == 0xc000) {
    if ((_DAT_8c4ab308 & 0x800000) == 0) {
      pcVar9 = FUN_8c240a66;
    }
    else {
      pcVar9 = FUN_8c2407e2;
    }
    uVar2 = (*pcVar9)(ar4,uVar1 & 0x3fff,ar4,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24d5a8\n.set _FUN_8c24d5a8, _FUN_8c24d5a8_def\n");
