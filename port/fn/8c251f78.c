#include "../decls.h"
uint FUN_8c251f78_def(ushort *ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ushort uVar1;
  double *pdVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  uint *ar6_00;
  uint *ar4_00;
  double *pdVar11;
  uint ar6_01;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  double *unaff_r8;
  double *pdVar15;
  int iVar16;
  double *pdVar17;
  uint uVar18;
  uint *ar5_00;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  double in_dr0;
  float fVar22;
  float fVar23;
  float fVar24;
  double in_dr2;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  double in_dr4;
  double dVar28;
  double dVar29;
  double in_dr6;
  double in_dr8;
  double dVar31;
  double in_dr12;
  double dVar32;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double dVar33;
  double in_xd6;
  double in_xd8;
  double in_xd14;
  bool bVar34;
  char cVar35;
  char cVar36;
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  undefined4 uVar30;
  
  cVar36 = '\0';
  cVar35 = '\0';
  uVar7 = 0x3f000000;
  uVar1 = *ar4;
  (*(uint*)((uchar*)&iStack_38+0)) = uVar1 & 0x3fff;
  uVar3 = uVar1 & 0xc000;
  puVar19 = *(ushort **)(ar4 + 2);
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    iStack_34 = 0;
    while( true ) {
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_34) break;
      puVar14 = puVar19 + 1;
      pdVar8 = (double *)((uint)*puVar19 * 0x40 + _DAT_8c4aa510);
      puVar20 = puVar19 + 2;
      puVar19 = puVar19 + 3;
      pdVar15 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
      pdVar9 = (double *)((uint)*puVar14 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar8 & *(uint *)pdVar9 & *(uint *)pdVar15 & 0x3f) == 0) {
        if (((*(uint *)pdVar8 | *(uint *)pdVar9 | *(uint *)pdVar15) & 1) == 0) {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)((int)pdVar9 + 4);
              dVar28 = (double)CONCAT44(uVar27,*(undefined4 *)((int)pdVar8 + 4));
              dVar29 = (double)CONCAT44(uVar27,SUB84(in_dr4,0));
            }
            else {
              dVar28 = *(double *)((int)pdVar9 + 4);
              in_xd2 = *(double *)((int)pdVar8 + 4);
              uVar27 = (undefined4)((ulonglong)dVar28 >> 0x20);
              dVar29 = dVar28;
            }
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar28,0),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        *(undefined4 *)(pdVar15 + 1));
              dVar29 = (double)CONCAT44(uVar27,*(undefined4 *)(pdVar9 + 1));
            }
            else {
              in_xd2 = pdVar15[1];
              in_xd4 = pdVar9[1];
            }
            fVar24 = SUB84(dVar29,0);
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) - fVar24);
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            dVar33 = in_xd4;
            if (cVar36 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar24);
              dVar33 = in_xd0;
            }
            in_xd0 = dVar33;
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * SUB84(dVar28,0),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 * dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)(pdVar8 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar8[1];
            }
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        SUB84(in_dr0,0) - SUB84(dVar28,0));
            }
            else {
              dVar33 = in_dr0 - dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        *(undefined4 *)((int)pdVar15 + 4));
            }
            else {
              in_xd2 = *(double *)((int)pdVar15 + 4);
            }
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        SUB84(dVar28,0) - (float)((ulonglong)dVar29 >> 0x20));
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            uVar3 = (uint)((ulonglong)dVar28 >> 0x20);
            dVar29 = dVar28;
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44(uVar3,fVar24);
            }
            if (cVar35 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                        SUB84(dVar33,0) * SUB84(dVar28,0));
            }
            else {
              in_dr0 = dVar33 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar3 << 0x20);
            if (cVar35 == '\0') {
              fVar24 = (float)((ulonglong)dVar29 >> 0x20) - SUB84(in_dr0,0);
              in_dr4 = (double)CONCAT44(fVar24,SUB84(dVar29,0));
              bVar34 = 0.0 < fVar24;
            }
            else {
              in_dr4 = dVar29 - in_dr0;
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25223c;
          }
          uVar27 = SUB84(in_dr2,0);
          uVar5 = SUB84(in_dr0,0);
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          uVar30 = _DAT_8c4c11b4;
          if (cVar36 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar30 = _DAT_8c4c11b0;
          }
          uVar4 = float_to_color_u8(pdVar8,ar5,ar6,ar7);
          dVar33 = in_xd14;
          dVar29 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44(uVar7,uVar30);
            dVar29 = in_xd2;
            uVar27 = uVar7;
            dVar28 = (double)CONCAT44(uVar7,uVar5);
          }
          *(undefined4 *)(pdVar8 + 5) = uVar4;
          if (cVar36 == '\0') {
            dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar27);
            pdVar17 = (double *)((int)pdVar8 + 0x34);
          }
          else {
            dVar25 = pdVar8[6];
            pdVar17 = pdVar8 + 7;
          }
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar28 >> 0x20) *
                                    (float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar25,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar25,0);
            dVar25 = (double)CONCAT44(*(undefined4 *)pdVar17,uVar27);
            dVar33 = dVar29;
            dVar29 = (double)CONCAT44(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar8[4] = dVar29;
            dVar25 = *pdVar17;
            dVar29 = dVar33;
          }
          pdVar11 = (double *)((int)pdVar8 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar25,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar11 = SUB84(dVar25,0);
          }
          else {
            *pdVar11 = dVar33;
          }
          CacheBlockWriteBack(pdVar11);
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar29,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar25,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar29 = *pdVar8;
            dVar28 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar8 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar27;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar28 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar29 >> 0x20);
          }
          else {
            dVar25 = pdVar8[2];
            unaff_r8[3] = pdVar8[3];
            unaff_r8[2] = dVar25;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar29;
          }
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar27 = _DAT_8c4c11b4;
          if (cVar36 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar27 = _DAT_8c4c11b0;
          }
          uVar5 = float_to_color_u8(pdVar9,pdVar17,ar6,ar7);
          uVar30 = SUB84(dVar28,0);
          dVar31 = in_xd14;
          dVar28 = in_xd14;
          dVar25 = in_xd14;
          if (cVar36 == '\0') {
            dVar31 = (double)CONCAT44(uVar7,uVar27);
            dVar28 = dVar33;
            uVar30 = uVar7;
            dVar25 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(pdVar9 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar30);
            pdVar8 = (double *)((int)pdVar9 + 0x34);
          }
          else {
            dVar29 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar25 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar31 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar29,0);
            dVar33 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar27);
            dVar31 = dVar28;
            dVar29 = (double)CONCAT44(uVar27,SUB84(dVar25,0));
          }
          else {
            pdVar9[4] = dVar28;
            dVar33 = *pdVar8;
            dVar29 = dVar31;
          }
          pdVar17 = (double *)((int)pdVar9 + 0x24);
          if (cVar35 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar33 >> 0x20) + SUB84(dVar33,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar17 = SUB84(dVar33,0);
          }
          else {
            *pdVar17 = dVar31;
          }
          CacheBlockWriteBack(pdVar17);
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar29,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar33,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            dVar29 = *pdVar9;
            dVar28 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar9 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar27;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar28 >> 0x20);
            pdVar9 = unaff_r8 + 6;
            *(int *)pdVar9 = (int)((ulonglong)dVar29 >> 0x20);
          }
          else {
            dVar33 = pdVar9[2];
            unaff_r8[7] = pdVar9[3];
            unaff_r8[6] = dVar33;
            unaff_r8[5] = dVar28;
            pdVar9 = unaff_r8 + 4;
            *pdVar9 = dVar29;
          }
          *(undefined4 *)pdVar15 = 0xf0000000;
          CacheBlockWriteBack(pdVar15);
          uVar27 = _DAT_8c4c11b4;
          if (cVar36 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar27 = _DAT_8c4c11b0;
          }
          uVar5 = float_to_color_u8(pdVar15,pdVar8,ar6,ar7);
          uVar30 = SUB84(dVar28,0);
          dVar33 = in_xd14;
          in_xd2 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44(uVar7,uVar27);
            in_xd2 = dVar31;
            uVar30 = uVar7;
            dVar28 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(pdVar15 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 6),uVar30);
            ar5 = (double *)((int)pdVar15 + 0x34);
          }
          else {
            dVar29 = pdVar15[6];
            ar5 = pdVar15 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar28 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar15 + 4) = SUB84(dVar29,0);
            dVar25 = (double)CONCAT44(*(undefined4 *)ar5,uVar27);
            dVar29 = (double)CONCAT44(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar15[4] = in_xd2;
            dVar25 = *ar5;
            in_xd2 = dVar33;
            dVar29 = dVar33;
          }
          pdVar8 = (double *)((int)pdVar15 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar25,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar8 = SUB84(dVar25,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar29,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),SUB84(dVar25,0));
            pdVar15 = pdVar15 + 1;
          }
          else {
            in_dr0 = *pdVar15;
            in_dr2 = pdVar15[1];
            pdVar15 = pdVar15 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar15 + 2);
            in_dr4 = (double)CONCAT44(uVar27,SUB84(dVar33,0));
            *(undefined4 *)((int)pdVar9 + 0x3c) = *(undefined4 *)((int)pdVar15 + 0x14);
            *(undefined4 *)(pdVar9 + 7) = uVar27;
            *(int *)((int)pdVar9 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar9 = pdVar9 + 6;
            *(int *)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar15[2];
            pdVar9[7] = pdVar15[3];
            pdVar9[6] = in_dr4;
            pdVar9[5] = in_dr2;
            pdVar9 = pdVar9 + 4;
            *pdVar9 = in_dr0;
          }
          unaff_r8 = pdVar9 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
        }
        else {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(pdVar9 + 3);
              uVar30 = *(undefined4 *)((int)pdVar9 + 0x14);
              pdVar17 = (double *)((int)pdVar8 + 0x14);
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar33 = (double)CONCAT44(uVar27,SUB84(in_dr0,0));
              dVar29 = in_xd2;
              dVar28 = *(double *)((int)pdVar9 + 0x14);
            }
            else {
              dVar33 = pdVar9[3];
              dVar29 = *(double *)((int)pdVar9 + 0x14);
              in_xd4 = *(double *)((int)pdVar8 + 0x14);
              pdVar17 = pdVar8 + 3;
              uVar30 = SUB84(dVar33,0);
              uVar27 = (undefined4)((ulonglong)dVar33 >> 0x20);
              dVar28 = dVar33;
              in_xd6 = dVar29;
            }
            dVar25 = *pdVar17;
            fVar23 = (float)((ulonglong)dVar25 >> 0x20);
            fVar24 = SUB84(dVar25,0);
            if (cVar35 == '\0') {
              fVar22 = SUB84(in_dr2,0) * fVar23;
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * fVar24,SUB84(dVar33,0))
              ;
            }
            else {
              fVar22 = SUB84(in_dr2 * dVar25,0);
              dVar33 = dVar33 * dVar25;
            }
            if (cVar36 == '\0') {
              dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 2),*(undefined4 *)(pdVar9 + 2));
              dVar28 = (double)CONCAT44(uVar27,fVar22);
            }
            else {
              in_xd8 = pdVar9[2];
              dVar31 = pdVar8[2];
            }
            fVar22 = (float)((ulonglong)dVar31 >> 0x20);
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar22,SUB84(dVar28,0))
              ;
            }
            else {
              dVar28 = dVar28 * dVar31;
            }
            dVar26 = in_xd8;
            if (cVar36 == '\0') {
              dVar26 = (double)CONCAT44(SUB84(dVar31,0),SUB84(in_dr12,0));
            }
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar28,0),
                                        SUB84(dVar33,0));
            }
            else {
              dVar33 = dVar33 - dVar28;
            }
            in_xd2 = in_xd8;
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar31,0));
              in_xd2 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) * fVar23);
            }
            else {
              dVar28 = dVar28 * dVar25;
            }
            dVar29 = in_xd6;
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),uVar30);
              dVar29 = in_xd0;
            }
            in_xd0 = dVar29;
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) * fVar22);
              in_dr12 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * fVar24,SUB84(dVar26,0)
                                        );
              fVar23 = SUB84(dVar28,0) - (float)((ulonglong)dVar28 >> 0x20);
            }
            else {
              dVar33 = dVar33 * dVar31;
              in_dr12 = dVar26 * dVar25;
              fVar23 = SUB84(dVar28 - dVar28,0);
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 0x14),fVar23);
            }
            else {
              dVar29 = *(double *)((int)pdVar15 + 0x14);
            }
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                        SUB84(dVar33,0) - (float)((ulonglong)in_dr12 >> 0x20));
              dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar29,0),
                                        SUB84(dVar29,0));
            }
            else {
              dVar33 = dVar33 - in_dr12;
              dVar29 = dVar29 * dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                        *(undefined4 *)(pdVar15 + 2));
            }
            else {
              in_xd2 = pdVar15[2];
            }
            if (cVar35 == '\0') {
              dVar29 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar29,0) +
                                        (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                        *(undefined4 *)(pdVar15 + 3));
              in_dr0 = (double)CONCAT44(SUB84(dVar33,0),SUB84(dVar33,0));
            }
            else {
              in_xd2 = pdVar15[3];
              in_dr0 = in_xd0;
            }
            if (cVar35 == '\0') {
              dVar29 = (double)((ulonglong)
                                (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar29,0) +
                                      (float)((ulonglong)dVar29 >> 0x20)) << 0x20);
            }
            in_dr2 = (double)((ulonglong)dVar29 & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar36 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),fVar24);
            }
            if (cVar35 == '\0') {
              bVar34 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
            }
            else {
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25223c;
          }
          FUN_8c23e4c8(pdVar8,pdVar9,pdVar15,ar7);
          ar5 = pdVar9;
          ar6 = pdVar15;
        }
      }
LAB_8c25223c:
      iStack_34 = iStack_34 + 1;
    }
  }
  else if (uVar3 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    iStack_2c = 0;
    while( true ) {
      uVar27 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_2c) break;
      pdVar9 = (double *)((uint)*puVar19 * 0x40 + _DAT_8c4aa510);
      puVar14 = puVar19 + 3;
      pdVar15 = (double *)((uint)puVar19[1] * 0x40 + _DAT_8c4aa510);
      pdVar17 = (double *)((uint)puVar19[2] * 0x40 + _DAT_8c4aa510);
      puVar19 = puVar19 + 4;
      pdVar8 = (double *)((uint)*puVar14 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar9 & *(uint *)pdVar15 & *(uint *)pdVar17 & *(uint *)pdVar8 & 0x3f) == 0) {
        if (((*(uint *)pdVar9 | *(uint *)pdVar15 | *(uint *)pdVar17 | *(uint *)pdVar8) & 1) == 0) {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)((int)pdVar15 + 4);
              dVar29 = (double)CONCAT44(uVar27,*(undefined4 *)((int)pdVar9 + 4));
            }
            else {
              dVar29 = *(double *)((int)pdVar15 + 4);
              in_xd2 = *(double *)((int)pdVar9 + 4);
              in_xd4 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) - SUB84(dVar29,0),
                                        SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 - dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                        *(undefined4 *)(pdVar17 + 1));
              dVar28 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 1),uVar27);
            }
            else {
              in_xd2 = pdVar17[1];
              dVar28 = pdVar15[1];
            }
            fVar24 = (float)((ulonglong)dVar28 >> 0x20);
            if (cVar35 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0) - fVar24);
            }
            else {
              dVar29 = dVar29 - dVar28;
            }
            dVar33 = dVar28;
            if (cVar36 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar24);
              dVar33 = in_xd0;
            }
            in_xd0 = dVar33;
            if (cVar35 == '\0') {
              dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar29,0),
                                        SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 * dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)(pdVar9 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar9[1];
            }
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        SUB84(in_dr0,0) - SUB84(dVar29,0));
            }
            else {
              dVar33 = in_dr0 - dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                        *(undefined4 *)((int)pdVar17 + 4));
            }
            else {
              in_xd2 = *(double *)((int)pdVar17 + 4);
            }
            if (cVar35 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                        SUB84(dVar29,0) - SUB84(dVar28,0));
            }
            else {
              dVar29 = dVar29 - dVar28;
            }
            uVar3 = (uint)((ulonglong)dVar29 >> 0x20);
            dVar25 = dVar29;
            if (cVar36 == '\0') {
              dVar25 = (double)CONCAT44(uVar3,SUB84(dVar28,0));
            }
            if (cVar35 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                        SUB84(dVar33,0) * SUB84(dVar29,0));
            }
            else {
              in_dr0 = dVar33 * dVar29;
            }
            in_dr2 = (double)((ulonglong)uVar3 << 0x20);
            if (cVar35 == '\0') {
              fVar24 = (float)((ulonglong)dVar25 >> 0x20) - SUB84(in_dr0,0);
              in_dr4 = (double)CONCAT44(fVar24,SUB84(dVar25,0));
              bVar34 = 0.0 < fVar24;
            }
            else {
              in_dr4 = dVar25 - in_dr0;
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25258e;
          }
          uVar27 = SUB84(in_dr2,0);
          uVar5 = SUB84(in_dr0,0);
          *(undefined4 *)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar30 = _DAT_8c4c11b4;
          if (cVar36 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar30 = _DAT_8c4c11b0;
          }
          uVar4 = float_to_color_u8(pdVar9,ar5,ar6,ar7);
          dVar33 = in_xd14;
          dVar29 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44(uVar7,uVar30);
            dVar29 = in_xd2;
            uVar27 = uVar7;
            dVar28 = (double)CONCAT44(uVar7,uVar5);
          }
          *(undefined4 *)(pdVar9 + 5) = uVar4;
          if (cVar36 == '\0') {
            dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar27);
            pdVar11 = (double *)((int)pdVar9 + 0x34);
          }
          else {
            dVar25 = pdVar9[6];
            pdVar11 = pdVar9 + 7;
          }
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar28 >> 0x20) *
                                    (float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar25,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar25,0);
            dVar25 = (double)CONCAT44(*(undefined4 *)pdVar11,uVar27);
            dVar33 = dVar29;
            dVar29 = (double)CONCAT44(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar9[4] = dVar29;
            dVar25 = *pdVar11;
            dVar29 = dVar33;
          }
          pdVar2 = (double *)((int)pdVar9 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar25,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar2 = SUB84(dVar25,0);
          }
          else {
            *pdVar2 = dVar33;
          }
          CacheBlockWriteBack(pdVar2);
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar29,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar25,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            dVar29 = *pdVar9;
            dVar28 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar9 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar27;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar28 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar29 >> 0x20);
          }
          else {
            dVar25 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar25;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar29;
          }
          *(undefined4 *)pdVar15 = 0xe0000000;
          CacheBlockWriteBack(pdVar15);
          uVar27 = _DAT_8c4c11b4;
          if (cVar36 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar27 = _DAT_8c4c11b0;
          }
          uVar5 = float_to_color_u8(pdVar15,pdVar11,ar6,ar7);
          uVar30 = SUB84(dVar28,0);
          dVar31 = in_xd14;
          dVar28 = in_xd14;
          dVar25 = in_xd14;
          if (cVar36 == '\0') {
            dVar31 = (double)CONCAT44(uVar7,uVar27);
            dVar28 = dVar33;
            uVar30 = uVar7;
            dVar25 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(pdVar15 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 6),uVar30);
            pdVar9 = (double *)((int)pdVar15 + 0x34);
          }
          else {
            dVar29 = pdVar15[6];
            pdVar9 = pdVar15 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar25 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar31 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar15 + 4) = SUB84(dVar29,0);
            dVar33 = (double)CONCAT44(*(undefined4 *)pdVar9,uVar27);
            dVar31 = dVar28;
            dVar29 = (double)CONCAT44(uVar27,SUB84(dVar25,0));
          }
          else {
            pdVar15[4] = dVar28;
            dVar33 = *pdVar9;
            dVar29 = dVar31;
          }
          pdVar11 = (double *)((int)pdVar15 + 0x24);
          if (cVar35 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar33 >> 0x20) + SUB84(dVar33,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar11 = SUB84(dVar33,0);
          }
          else {
            *pdVar11 = dVar31;
          }
          CacheBlockWriteBack(pdVar11);
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar29,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),SUB84(dVar33,0));
            pdVar15 = pdVar15 + 1;
          }
          else {
            dVar29 = *pdVar15;
            dVar28 = pdVar15[1];
            pdVar15 = pdVar15 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar15 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar15 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar27;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar28 >> 0x20);
            pdVar15 = unaff_r8 + 6;
            *(int *)pdVar15 = (int)((ulonglong)dVar29 >> 0x20);
          }
          else {
            dVar33 = pdVar15[2];
            unaff_r8[7] = pdVar15[3];
            unaff_r8[6] = dVar33;
            unaff_r8[5] = dVar28;
            pdVar15 = unaff_r8 + 4;
            *pdVar15 = dVar29;
          }
          *(undefined4 *)pdVar17 = 0xe0000000;
          CacheBlockWriteBack(pdVar17);
          uVar27 = _DAT_8c4c11b4;
          if (cVar36 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar27 = _DAT_8c4c11b0;
          }
          uVar5 = float_to_color_u8(pdVar17,pdVar9,ar6,ar7);
          uVar30 = SUB84(dVar28,0);
          dVar25 = in_xd14;
          dVar28 = in_xd14;
          dVar33 = in_xd14;
          if (cVar36 == '\0') {
            dVar25 = (double)CONCAT44(uVar7,uVar27);
            dVar28 = dVar31;
            uVar30 = uVar7;
            dVar33 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(pdVar17 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar17 + 6),uVar30);
            pdVar9 = (double *)((int)pdVar17 + 0x34);
          }
          else {
            dVar29 = pdVar17[6];
            pdVar9 = pdVar17 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar25 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar17 + 4) = SUB84(dVar29,0);
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar9,uVar27);
            dVar25 = dVar28;
            dVar29 = (double)CONCAT44(uVar27,SUB84(dVar33,0));
          }
          else {
            pdVar17[4] = dVar28;
            dVar31 = *pdVar9;
            dVar29 = dVar25;
          }
          pdVar11 = (double *)((int)pdVar17 + 0x24);
          if (cVar35 == '\0') {
            dVar31 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar11 = SUB84(dVar31,0);
          }
          else {
            *pdVar11 = dVar25;
          }
          CacheBlockWriteBack(pdVar11);
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)pdVar17,SUB84(dVar29,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar17 + 4),SUB84(dVar31,0));
            pdVar17 = pdVar17 + 1;
          }
          else {
            dVar29 = *pdVar17;
            dVar28 = pdVar17[1];
            pdVar17 = pdVar17 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar17 + 2);
            *(undefined4 *)((int)pdVar15 + 0x3c) = *(undefined4 *)((int)pdVar17 + 0x14);
            *(undefined4 *)(pdVar15 + 7) = uVar27;
            *(int *)((int)pdVar15 + 0x34) = (int)((ulonglong)dVar28 >> 0x20);
            pdVar15 = pdVar15 + 6;
            *(int *)pdVar15 = (int)((ulonglong)dVar29 >> 0x20);
          }
          else {
            dVar33 = pdVar17[2];
            pdVar15[7] = pdVar17[3];
            pdVar15[6] = dVar33;
            pdVar15[5] = dVar28;
            pdVar15 = pdVar15 + 4;
            *pdVar15 = dVar29;
          }
          *(undefined4 *)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          uVar27 = _DAT_8c4c11b4;
          if (cVar36 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar27 = _DAT_8c4c11b0;
          }
          uVar5 = float_to_color_u8(pdVar8,pdVar9,ar6,ar7);
          uVar30 = SUB84(dVar28,0);
          dVar33 = in_xd14;
          in_xd2 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = (double)CONCAT44(uVar7,uVar27);
            in_xd2 = dVar25;
            uVar30 = uVar7;
            dVar28 = (double)CONCAT44(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(pdVar8 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 6),uVar30);
            ar5 = (double *)((int)pdVar8 + 0x34);
          }
          else {
            dVar29 = pdVar8[6];
            ar5 = pdVar8 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar28 >> 0x20) *
                                    (float)((ulonglong)dVar29 >> 0x20) + SUB84(dVar29,0));
          }
          uVar27 = (undefined4)((ulonglong)dVar33 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar8 + 4) = SUB84(dVar29,0);
            dVar25 = (double)CONCAT44(*(undefined4 *)ar5,uVar27);
            dVar29 = (double)CONCAT44(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar8[4] = in_xd2;
            dVar25 = *ar5;
            in_xd2 = dVar33;
            dVar29 = dVar33;
          }
          pdVar9 = (double *)((int)pdVar8 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                    (float)((ulonglong)dVar25 >> 0x20) + SUB84(dVar25,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar9 = SUB84(dVar25,0);
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(dVar29,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(dVar25,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(pdVar8 + 2);
            in_dr4 = (double)CONCAT44(uVar27,SUB84(dVar33,0));
            *(undefined4 *)((int)pdVar15 + 0x3c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(pdVar15 + 7) = uVar27;
            *(int *)((int)pdVar15 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar15 = pdVar15 + 6;
            *(int *)pdVar15 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            pdVar15[7] = pdVar8[3];
            pdVar15[6] = in_dr4;
            pdVar15[5] = in_dr2;
            pdVar15 = pdVar15 + 4;
            *pdVar15 = in_dr0;
          }
          unaff_r8 = pdVar15 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
        }
        else {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(pdVar15 + 3);
              uVar30 = *(undefined4 *)((int)pdVar15 + 0x14);
              pdVar11 = (double *)((int)pdVar9 + 0x14);
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar33 = (double)CONCAT44(uVar27,SUB84(in_dr0,0));
              dVar29 = in_xd2;
              dVar28 = (double)CONCAT44(uVar30,uVar27);
            }
            else {
              dVar33 = pdVar15[3];
              dVar29 = *(double *)((int)pdVar15 + 0x14);
              pdVar11 = pdVar9 + 3;
              uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
              uVar27 = SUB84(dVar29,0);
              dVar28 = dVar29;
              in_xd4 = dVar33;
            }
            dVar25 = *pdVar11;
            fVar24 = (float)((ulonglong)dVar25 >> 0x20);
            if (cVar35 == '\0') {
              fVar23 = SUB84(in_dr2,0) * fVar24;
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar25,0),
                                        SUB84(dVar33,0));
            }
            else {
              fVar23 = SUB84(in_dr2 * dVar25,0);
              dVar33 = dVar33 * dVar25;
            }
            if (cVar36 == '\0') {
              dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 2),*(undefined4 *)(pdVar15 + 2));
              dVar26 = (double)CONCAT44(uVar27,fVar23);
            }
            else {
              in_xd8 = pdVar15[2];
              dVar31 = pdVar9[2];
              dVar26 = in_xd4;
            }
            fVar23 = (float)((ulonglong)dVar31 >> 0x20);
            if (cVar35 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * fVar23,SUB84(dVar26,0))
              ;
            }
            else {
              dVar26 = dVar26 * dVar31;
            }
            dVar32 = in_xd8;
            if (cVar36 == '\0') {
              dVar32 = (double)CONCAT44(SUB84(dVar31,0),SUB84(in_dr12,0));
            }
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) - SUB84(dVar26,0),
                                        SUB84(dVar33,0));
            }
            else {
              dVar33 = dVar33 - dVar26;
            }
            in_xd2 = in_xd8;
            if (cVar36 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar31,0));
              in_xd2 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) * fVar24);
            }
            else {
              dVar26 = dVar26 * dVar25;
            }
            if (cVar36 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),uVar30);
              dVar28 = in_xd0;
            }
            in_xd0 = dVar28;
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(dVar33,0) * fVar23);
              in_dr12 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) * SUB84(dVar25,0),
                                         SUB84(dVar32,0));
              fVar24 = SUB84(dVar26,0) - (float)((ulonglong)dVar26 >> 0x20);
            }
            else {
              dVar33 = dVar33 * dVar31;
              in_dr12 = dVar32 * dVar25;
              fVar24 = SUB84(dVar26 - dVar26,0);
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44(*(undefined4 *)((int)pdVar17 + 0x14),fVar24);
            }
            else {
              dVar29 = *(double *)((int)pdVar17 + 0x14);
            }
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                        SUB84(dVar33,0) - (float)((ulonglong)in_dr12 >> 0x20));
              dVar29 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(dVar29,0),
                                        SUB84(dVar29,0));
            }
            else {
              dVar33 = dVar33 - in_dr12;
              dVar29 = dVar29 * dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                        *(undefined4 *)(pdVar17 + 2));
            }
            else {
              in_xd2 = pdVar17[2];
            }
            if (cVar35 == '\0') {
              dVar29 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(dVar29,0) +
                                        (float)((ulonglong)dVar29 >> 0x20),SUB84(dVar29,0));
            }
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),
                                        *(undefined4 *)(pdVar17 + 3));
              in_dr0 = (double)CONCAT44(SUB84(dVar33,0),SUB84(dVar33,0));
            }
            else {
              in_xd2 = pdVar17[3];
              in_dr0 = in_xd0;
            }
            if (cVar35 == '\0') {
              dVar29 = (double)((ulonglong)
                                (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar29,0) +
                                      (float)((ulonglong)dVar29 >> 0x20)) << 0x20);
            }
            in_dr2 = (double)((ulonglong)dVar29 & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar36 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),uVar27);
            }
            if (cVar35 == '\0') {
              bVar34 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
            }
            else {
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25258e;
          }
          if ((*(uint *)pdVar9 & *(uint *)pdVar15 & *(uint *)pdVar17 & 1) == 0) {
            ar5 = pdVar15;
            ar6 = pdVar17;
            FUN_8c23e4c8(pdVar9,pdVar15,pdVar17,ar7);
          }
          if ((*(uint *)pdVar15 & *(uint *)pdVar17 & *(uint *)pdVar8 & 1) == 0) {
            FUN_8c23e4c8(pdVar15,pdVar17,pdVar8,ar7);
            ar5 = pdVar17;
            ar6 = pdVar8;
          }
        }
      }
LAB_8c25258e:
      iStack_2c = iStack_2c + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    iVar16 = 0;
    while( true ) {
      uVar27 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iVar16) break;
      ar6_01 = 0;
      puVar20 = puVar19 + 1;
      iVar13 = 0;
      uVar18 = 0xffffffff;
      uVar3 = (uint)*puVar19;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar3;
      puVar14 = puVar20;
      if (uVar3 != 0) {
        do {
          uVar1 = *puVar14;
          puVar14 = puVar14 + 1;
          iVar13 = iVar13 + 1;
          uVar10 = *(uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
          uVar18 = uVar18 & uVar10;
          ar6_01 = ar6_01 | uVar10;
        } while (iVar13 < (int)uVar3);
      }
      if ((uVar18 & 0x3f) == 0) {
        puVar14 = puVar19 + 3;
        if ((ar6_01 & 1) == 0) {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            ar6_01 = (uint)puVar19[2] * 0x40 + _DAT_8c4aa510;
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44(*(undefined4 *)(ar6_01 + 4),uVar27);
            }
            else {
              dVar29 = *(double *)(ar6_01 + 4);
            }
            iVar13 = (uint)*puVar20 * 0x40 + _DAT_8c4aa510;
            uVar27 = (undefined4)((ulonglong)dVar29 >> 0x20);
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44(uVar27,*(undefined4 *)(iVar13 + 4));
            }
            else {
              in_xd2 = *(double *)(iVar13 + 4);
              dVar28 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar28,0),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            puVar14 = (ushort *)(_DAT_8c4aa510 + (uint)*puVar14 * 0x40);
            if (cVar36 == '\0') {
              fVar24 = *(float *)(ar6_01 + 8);
              dVar29 = (double)CONCAT44(uVar27,fVar24);
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        *(undefined4 *)(puVar14 + 4));
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar24);
            }
            else {
              in_xd0 = *(double *)(ar6_01 + 8);
              in_xd2 = *(double *)(puVar14 + 4);
              fVar24 = SUB84(dVar29,0);
              in_xd4 = in_xd0;
            }
            if (cVar35 == '\0') {
              fVar23 = SUB84(dVar28,0) - fVar24;
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar23,fVar23);
            }
            else {
              dVar28 = (dVar28 - dVar29) * (dVar28 - dVar29);
            }
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)(iVar13 + 8)
                                       );
            }
            else {
              in_xd2 = *(double *)(iVar13 + 8);
            }
            if (cVar35 == '\0') {
              dVar33 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        SUB84(in_dr0,0) - SUB84(dVar28,0));
            }
            else {
              dVar33 = in_dr0 - dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        *(undefined4 *)(puVar14 + 2));
            }
            else {
              in_xd2 = *(double *)(puVar14 + 2);
            }
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        SUB84(dVar28,0) - (float)((ulonglong)dVar29 >> 0x20));
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            uVar18 = (uint)((ulonglong)dVar28 >> 0x20);
            dVar29 = dVar28;
            if (cVar36 == '\0') {
              dVar29 = (double)CONCAT44(uVar18,fVar24);
            }
            if (cVar35 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                        SUB84(dVar33,0) * SUB84(dVar28,0));
            }
            else {
              in_dr0 = dVar33 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar18 << 0x20);
            if (cVar35 == '\0') {
              fVar24 = (float)((ulonglong)dVar29 >> 0x20) - SUB84(in_dr0,0);
              in_dr4 = (double)CONCAT44(fVar24,SUB84(dVar29,0));
              bVar34 = 0.0 < fVar24;
            }
            else {
              in_dr4 = dVar29 - in_dr0;
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25280c;
          }
          _DAT_8c4aa520 = _DAT_8c4aa520 + uVar3;
          pdVar9 = (double *)(uVar3 - 1);
          iStack_38 = 0;
          pdVar8 = pdVar9;
          dVar29 = in_xd0;
          dVar28 = in_xd2;
          if (0 < (int)pdVar9) {
            do {
              uVar27 = SUB84(in_dr2,0);
              uVar5 = SUB84(in_dr0,0);
              uVar1 = *puVar20;
              puVar20 = puVar20 + 1;
              pdVar15 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              *(undefined4 *)pdVar15 = 0xe0000000;
              CacheBlockWriteBack(pdVar15);
              uVar30 = _DAT_8c4c11b4;
              if (cVar36 != '\0') {
                in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
                uVar30 = _DAT_8c4c11b0;
              }
              uVar4 = float_to_color_u8(pdVar15,pdVar8,ar6_01,puVar14);
              in_xd2 = in_xd14;
              dVar29 = in_xd14;
              dVar33 = in_xd14;
              if (cVar36 == '\0') {
                in_xd2 = (double)CONCAT44(uVar7,uVar30);
                dVar29 = dVar28;
                uVar27 = uVar7;
                dVar33 = (double)CONCAT44(uVar7,uVar5);
              }
              *(undefined4 *)(pdVar15 + 5) = uVar4;
              if (cVar36 == '\0') {
                dVar28 = (double)CONCAT44(*(undefined4 *)(pdVar15 + 6),uVar27);
                pdVar8 = (double *)((int)pdVar15 + 0x34);
              }
              else {
                dVar28 = pdVar15[6];
                pdVar8 = pdVar15 + 7;
              }
              if (cVar35 == '\0') {
                dVar28 = (double)(ulonglong)
                                 (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                        (float)((ulonglong)dVar28 >> 0x20) + SUB84(dVar28,0));
              }
              uVar27 = (undefined4)((ulonglong)in_xd2 >> 0x20);
              if (cVar36 == '\0') {
                *(int *)(pdVar15 + 4) = SUB84(dVar28,0);
                dVar28 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar27);
                in_xd2 = dVar29;
                dVar29 = (double)CONCAT44(uVar27,SUB84(dVar33,0));
              }
              else {
                pdVar15[4] = dVar29;
                dVar28 = *pdVar8;
                dVar29 = in_xd2;
              }
              pdVar17 = (double *)((int)pdVar15 + 0x24);
              if (cVar35 == '\0') {
                dVar28 = (double)(ulonglong)
                                 (uint)((float)((ulonglong)dVar29 >> 0x20) *
                                        (float)((ulonglong)dVar28 >> 0x20) + SUB84(dVar28,0));
              }
              if (cVar36 == '\0') {
                *(int *)pdVar17 = SUB84(dVar28,0);
              }
              else {
                *pdVar17 = in_xd2;
              }
              CacheBlockWriteBack(pdVar17);
              if (cVar36 == '\0') {
                in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar15,SUB84(dVar29,0));
                in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar15 + 4),SUB84(dVar28,0));
                pdVar15 = pdVar15 + 1;
              }
              else {
                in_dr0 = *pdVar15;
                in_dr2 = pdVar15[1];
                pdVar15 = pdVar15 + 2;
              }
              if (cVar36 == '\0') {
                uVar27 = *(undefined4 *)(pdVar15 + 2);
                *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar15 + 0x14);
                *(undefined4 *)(unaff_r8 + 3) = uVar27;
                *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                dVar29 = pdVar15[2];
                unaff_r8[3] = pdVar15[3];
                unaff_r8[2] = dVar29;
                unaff_r8[1] = in_dr2;
                *unaff_r8 = in_dr0;
              }
              unaff_r8 = unaff_r8 + 4;
              iStack_38 = iStack_38 + 1;
              dVar29 = in_xd0;
              dVar28 = in_xd2;
            } while (iStack_38 < (int)pdVar9);
          }
          uVar30 = SUB84(in_dr2,0);
          uVar4 = SUB84(in_dr0,0);
          puVar19 = puVar20 + 1;
          pdVar9 = (double *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar9 = 0xf0000000;
          CacheBlockWriteBack(pdVar9);
          uVar5 = _DAT_8c4c11b4;
          uVar27 = _DAT_8c4c11bc;
          if (cVar36 != '\0') {
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar5 = _DAT_8c4c11b0;
            uVar27 = _DAT_8c4c11b8;
          }
          uVar6 = float_to_color_u8(pdVar9,pdVar8,ar6_01,puVar14);
          dVar25 = in_xd14;
          dVar28 = in_xd14;
          dVar33 = in_xd14;
          if (cVar36 == '\0') {
            dVar25 = (double)CONCAT44(uVar7,uVar5);
            dVar28 = in_xd2;
            uVar30 = uVar7;
            dVar33 = (double)CONCAT44(uVar7,uVar4);
          }
          *(undefined4 *)(pdVar9 + 5) = uVar6;
          if (cVar36 == '\0') {
            dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 6),uVar30);
            pdVar8 = (double *)((int)pdVar9 + 0x34);
          }
          else {
            dVar31 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
          }
          if (cVar35 == '\0') {
            dVar31 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar33 >> 0x20) *
                                    (float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0));
          }
          uVar30 = (undefined4)((ulonglong)dVar25 >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(pdVar9 + 4) = SUB84(dVar31,0);
            dVar31 = (double)CONCAT44(*(undefined4 *)pdVar8,uVar30);
            in_xd2 = dVar28;
            dVar28 = (double)CONCAT44(uVar30,SUB84(dVar33,0));
          }
          else {
            pdVar9[4] = dVar28;
            dVar31 = *pdVar8;
            in_xd2 = dVar25;
            dVar28 = dVar25;
          }
          pdVar8 = (double *)((int)pdVar9 + 0x24);
          if (cVar35 == '\0') {
            dVar31 = (double)(ulonglong)
                             (uint)((float)((ulonglong)dVar28 >> 0x20) *
                                    (float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0));
          }
          if (cVar36 == '\0') {
            *(int *)pdVar8 = SUB84(dVar31,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar28,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(dVar31,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            in_dr2 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar36 == '\0') {
            uVar30 = *(undefined4 *)(pdVar9 + 2);
            in_dr4 = (double)CONCAT44(uVar30,SUB84(dVar25,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),uVar27);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar30;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          dVar29 = in_xd0;
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            iVar13 = (uint)puVar19[2] * 0x40 + _DAT_8c4aa510;
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(iVar13 + 0x18);
            }
            else {
              in_xd4 = *(double *)(iVar13 + 0x18);
            }
            dVar28 = in_xd4;
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44(uVar27,SUB84(in_dr0,0));
            }
            iVar12 = (uint)*puVar20 * 0x40 + _DAT_8c4aa510;
            if (cVar36 == '\0') {
              in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar13 + 0x14),SUB84(in_dr6,0));
              in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                        *(undefined4 *)(iVar12 + 0x14));
              dVar33 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x18),uVar27);
            }
            else {
              in_dr6 = *(double *)(iVar13 + 0x14);
              dVar33 = *(double *)(iVar12 + 0x18);
            }
            uVar27 = (undefined4)((ulonglong)in_dr6 >> 0x20);
            dVar25 = in_dr6;
            if (cVar36 == '\0') {
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar27);
              dVar25 = in_xd2;
            }
            fVar24 = (float)((ulonglong)dVar33 >> 0x20);
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * SUB84(in_dr8,0),
                                        SUB84(dVar28,0));
              dVar29 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * fVar24);
            }
            else {
              dVar28 = dVar28 * in_dr8;
              dVar29 = in_dr2 * dVar33;
            }
            puVar14 = (ushort *)(_DAT_8c4aa510 + (uint)*puVar14 * 0x40);
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar29,0),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            if (cVar36 == '\0') {
              uVar30 = *(undefined4 *)(iVar13 + 0x10);
              in_dr6 = (double)CONCAT44(uVar27,*(undefined4 *)(iVar12 + 0x10));
              dVar29 = (double)CONCAT44(SUB84(dVar33,0),uVar30);
              in_dr8 = (double)CONCAT44(uVar30,SUB84(in_dr8,0));
            }
            else {
              dVar25 = *(double *)(iVar13 + 0x10);
              uVar30 = (undefined4)((ulonglong)dVar25 >> 0x20);
              dVar29 = in_xd4;
              in_dr8 = dVar25;
            }
            if (cVar35 == '\0') {
              dVar31 = (double)CONCAT44((float)((ulonglong)dVar29 >> 0x20) * SUB84(in_dr6,0),
                                        SUB84(dVar29,0) * fVar24);
            }
            else {
              dVar31 = dVar29 * dVar33 * in_dr6;
            }
            dVar29 = in_dr6;
            dVar26 = in_dr8;
            if (cVar36 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        (int)((ulonglong)in_dr6 >> 0x20));
              dVar29 = in_xd0;
              dVar26 = (double)CONCAT44(uVar30,SUB84(in_dr12,0));
            }
            if (cVar35 == '\0') {
              in_dr12 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(in_dr8,0),
                                         SUB84(dVar26,0));
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        SUB84(dVar28,0) * SUB84(in_dr6,0));
              fVar24 = SUB84(dVar31,0) - (float)((ulonglong)dVar31 >> 0x20);
            }
            else {
              in_dr12 = dVar26 * in_dr8;
              dVar28 = dVar28 * in_dr6;
              fVar24 = SUB84(dVar31 - dVar31,0);
            }
            if (cVar36 == '\0') {
              dVar31 = (double)CONCAT44(*(undefined4 *)(puVar14 + 10),fVar24);
            }
            else {
              dVar31 = *(double *)(puVar14 + 10);
            }
            if (cVar35 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        SUB84(dVar28,0) - (float)((ulonglong)in_dr12 >> 0x20));
              dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(dVar31,0),
                                        SUB84(dVar31,0));
            }
            else {
              dVar28 = dVar28 - in_dr12;
              dVar31 = dVar31 * dVar31;
            }
            if (cVar36 == '\0') {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                        *(undefined4 *)(puVar14 + 8));
            }
            else {
              dVar25 = *(double *)(puVar14 + 8);
            }
            if (cVar35 == '\0') {
              dVar31 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * SUB84(dVar31,0) +
                                        (float)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0));
            }
            if (cVar36 == '\0') {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                        *(undefined4 *)(puVar14 + 0xc));
              in_dr0 = (double)CONCAT44(SUB84(dVar28,0),SUB84(dVar28,0));
              in_xd2 = dVar25;
            }
            else {
              in_xd2 = *(double *)(puVar14 + 0xc);
              in_dr0 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar31 = (double)((ulonglong)
                                (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar31,0) +
                                      (float)((ulonglong)dVar31 >> 0x20)) << 0x20);
            }
            in_dr2 = (double)((ulonglong)dVar31 & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar36 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar33,0));
            }
            if (cVar35 == '\0') {
              bVar34 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
            }
            else {
              bVar34 = in_dr2 < in_dr4;
            }
            in_xd0 = dVar29;
            if (bVar34) goto LAB_8c25280c;
          }
          puVar21 = puVar19 + 2;
          puVar19 = puVar19 + 3;
          iStack_34 = 0;
          ar4_00 = (uint *)((uint)*puVar20 * 0x40 + _DAT_8c4aa510);
          ar5_00 = (uint *)((uint)*puVar21 * 0x40 + _DAT_8c4aa510);
          if (0 < (int)(uVar3 - 2)) {
            do {
              uVar1 = *puVar19;
              puVar19 = puVar19 + 1;
              ar6_00 = (uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                FUN_8c23e4c8(ar4_00,ar5_00,ar6_00,puVar14);
              }
              iStack_34 = iStack_34 + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while (iStack_34 < (int)(uVar3 - 2));
          }
        }
      }
      else {
LAB_8c25280c:
        puVar19 = puVar20 + uVar3;
        dVar29 = in_xd0;
      }
      iVar16 = iVar16 + 1;
      in_xd0 = dVar29;
    }
  }
  else if (uVar3 == 0xc000) {
    if ((_DAT_8c4ab318 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c246b7a;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c246756;
    }
                    
                    
    uVar7 = (*UNRECOVERED_JUMPTABLE)(ar4,(ushort)iStack_38);
    return uVar7;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c251f78\n.set _FUN_8c251f78, _FUN_8c251f78_def\n");
