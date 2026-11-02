#include "../decls.h"
uint FUN_8c24f64c_def(double *ar4,undefined4 ar5,double *ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint *ar6_00;
  ushort *puVar9;
  uint *ar4_00;
  double *pdVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  uint ar7_00;
  int iVar14;
  short *psVar15;
  double *unaff_r8;
  double *pdVar16;
  int iVar17;
  double *pdVar18;
  uint uVar19;
  int iVar20;
  uint *ar5_00;
  ushort *puVar21;
  ushort *puVar22;
  short *psVar23;
  double in_dr0;
  float fVar24;
  float fVar25;
  double in_dr2;
  undefined4 uVar27;
  double dVar26;
  double in_dr4;
  float fVar29;
  double dVar28;
  undefined4 uVar30;
  double in_dr6;
  double dVar31;
  double in_dr8;
  double dVar33;
  double in_dr12;
  double dVar34;
  double in_xd0;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  double dVar35;
  double in_xd8;
  double in_xd14;
  bool bVar36;
  char cVar37;
  char cVar38;
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  undefined4 uVar32;
  
  cVar38 = '\0';
  cVar37 = '\0';
  uVar5 = 0x3b800000;
  uVar1 = *(ushort *)ar4;
  (*(uint*)((uchar*)&iStack_38+0)) = uVar1 & 0x3fff;
  psVar23 = *(short **)((int)ar4 + 0x14);
  uVar2 = uVar1 & 0xc000;
  puVar21 = *(ushort **)((int)ar4 + 4);
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)*(ushort *)((int)ar4 + 2) * 3;
    pdVar10 = ar4;
    for (iStack_34 = 0; uVar2 = (uint)*(ushort *)((int)ar4 + 2), iStack_34 < (int)uVar2;
        iStack_34 = iStack_34 + 1) {
      pdVar7 = (double *)((uint)*puVar21 * 0x40 + _DAT_8c4aa510);
      puVar9 = puVar21 + 2;
      pdVar6 = (double *)((uint)puVar21[1] * 0x40 + _DAT_8c4aa510);
      puVar21 = puVar21 + 3;
      pdVar16 = (double *)((uint)*puVar9 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar7 & *(uint *)pdVar6 & *(uint *)pdVar16 & 0x3f) == 0) {
        if (((*(uint *)pdVar7 | *(uint *)pdVar6 | *(uint *)pdVar16) & 1) == 0) {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar38 == '\0') {
              fVar29 = *(float *)((int)pdVar6 + 4);
              dVar35 = *(double *)((int)pdVar6 + 4);
              dVar28 = (double)CONCAT44(fVar29,*(undefined4 *)((int)pdVar7 + 4));
            }
            else {
              in_xd2 = *(double *)((int)pdVar7 + 4);
              dVar28 = *(double *)((int)pdVar6 + 4);
              dVar35 = pdVar6[1];
              fVar29 = SUB84(dVar35,0);
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar28,0),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            fVar25 = (float)((ulonglong)dVar35 >> 0x20);
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        *(undefined4 *)(pdVar16 + 1));
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar25);
            }
            else {
              in_xd2 = pdVar16[1];
              in_xd0 = dVar35;
            }
            if (cVar37 == '\0') {
              fVar25 = SUB84(dVar28,0) - fVar25;
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar25,fVar25);
            }
            else {
              dVar28 = (dVar28 - dVar35) * (dVar28 - dVar35);
            }
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)(pdVar7 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar7[1];
            }
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        SUB84(in_dr0,0) - SUB84(dVar28,0));
            }
            else {
              dVar26 = in_dr0 - dVar28;
            }
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        *(undefined4 *)((int)pdVar16 + 4));
            }
            else {
              in_xd2 = *(double *)((int)pdVar16 + 4);
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) - fVar29);
            }
            else {
              dVar28 = dVar28 - dVar35;
            }
            uVar2 = (uint)((ulonglong)dVar28 >> 0x20);
            dVar35 = dVar28;
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44(uVar2,fVar29);
            }
            if (cVar37 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                        SUB84(dVar26,0) * SUB84(dVar28,0));
            }
            else {
              in_dr0 = dVar26 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar2 << 0x20);
            if (cVar37 == '\0') {
              fVar29 = (float)((ulonglong)dVar35 >> 0x20) - SUB84(in_dr0,0);
              in_dr4 = (double)CONCAT44(fVar29,SUB84(dVar35,0));
              bVar36 = 0.0 < fVar29;
            }
            else {
              in_dr4 = dVar35 - in_dr0;
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24f980;
          }
          uVar30 = SUB84(in_dr0,0);
          uVar27 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          *(undefined4 *)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          uVar32 = _DAT_8c4c11b4;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            uVar32 = _DAT_8c4c11b0;
          }
          uVar3 = float_to_color_u8(pdVar7,pdVar10,ar6,ar7);
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(uVar5,uVar32);
          }
          *(undefined4 *)(pdVar7 + 5) = uVar3;
          fVar29 = (float)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar27,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar27,(float)(int)*psVar23) * dVar35;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          pdVar10 = (double *)((int)pdVar7 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[1] * fVar29;
          }
          else {
            fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),(float)(int)psVar23[1])
                           * dVar35,0);
          }
          if (cVar38 == '\0') {
            *(float *)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar30);
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar29);
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar35 = *pdVar7;
            dVar28 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(pdVar7 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar32;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar28 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar35 >> 0x20);
          }
          else {
            dVar26 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar26;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar35;
          }
          *(undefined4 *)pdVar6 = 0xe0000000;
          CacheBlockWriteBack(pdVar6);
          uVar32 = _DAT_8c4c11b4;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            uVar32 = _DAT_8c4c11b0;
          }
          uVar30 = float_to_color_u8(pdVar6,pdVar10,ar6,ar7);
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = (double)CONCAT44(uVar5,uVar32);
          }
          *(undefined4 *)(pdVar6 + 5) = uVar30;
          uVar32 = (undefined4)((ulonglong)dVar28 >> 0x20);
          fVar29 = (float)((ulonglong)dVar26 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[2]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar6 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          pdVar10 = (double *)((int)pdVar6 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[3] * fVar29;
          }
          else {
            fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),(float)(int)psVar23[3])
                           * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6 + 4);
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar35,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),fVar29);
            pdVar6 = pdVar6 + 1;
          }
          else {
            dVar35 = *pdVar6;
            dVar28 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(pdVar6 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar32;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar28 >> 0x20);
            pdVar6 = unaff_r8 + 6;
            *(int *)pdVar6 = (int)((ulonglong)dVar35 >> 0x20);
          }
          else {
            dVar26 = pdVar6[2];
            unaff_r8[7] = pdVar6[3];
            unaff_r8[6] = dVar26;
            unaff_r8[5] = dVar28;
            pdVar6 = unaff_r8 + 4;
            *pdVar6 = dVar35;
          }
          *(undefined4 *)pdVar16 = 0xf0000000;
          CacheBlockWriteBack(pdVar16);
          uVar32 = _DAT_8c4c11b4;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            uVar32 = _DAT_8c4c11b0;
          }
          uVar30 = float_to_color_u8(pdVar16,pdVar10,ar6,ar7);
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = (double)CONCAT44(uVar5,uVar32);
          }
          *(undefined4 *)(pdVar16 + 5) = uVar30;
          uVar32 = (undefined4)((ulonglong)dVar28 >> 0x20);
          fVar29 = (float)((ulonglong)dVar26 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[4]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar16 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          pdVar10 = (double *)((int)pdVar16 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[5] * fVar29;
          }
          else {
            fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),(float)(int)psVar23[5])
                           * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar16 + 4);
          if (cVar38 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar16,SUB84(dVar35,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 4),fVar29);
            pdVar16 = pdVar16 + 1;
          }
          else {
            in_dr0 = *pdVar16;
            in_dr2 = pdVar16[1];
            pdVar16 = pdVar16 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(pdVar16 + 2);
            in_dr4 = (double)CONCAT44(uVar32,SUB84(dVar26,0));
            *(undefined4 *)((int)pdVar6 + 0x3c) = *(undefined4 *)((int)pdVar16 + 0x14);
            *(undefined4 *)(pdVar6 + 7) = uVar32;
            *(int *)((int)pdVar6 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar6 = pdVar6 + 6;
            *(int *)pdVar6 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar16[2];
            pdVar6[7] = pdVar16[3];
            pdVar6[6] = in_dr4;
            pdVar6[5] = in_dr2;
            pdVar6 = pdVar6 + 4;
            *pdVar6 = in_dr0;
          }
          unaff_r8 = pdVar6 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
        }
        else {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)(pdVar6 + 3);
              uVar30 = *(undefined4 *)((int)pdVar6 + 0x14);
              in_dr8 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),
                                        *(undefined4 *)((int)pdVar7 + 0x14));
              in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(pdVar7 + 3)
                                       );
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar26 = (double)CONCAT44(uVar32,SUB84(in_dr0,0));
              dVar35 = in_xd2;
              dVar28 = *(double *)((int)pdVar6 + 0x14);
            }
            else {
              dVar26 = pdVar6[3];
              dVar35 = *(double *)((int)pdVar6 + 0x14);
              uVar30 = SUB84(dVar26,0);
              uVar32 = (undefined4)((ulonglong)dVar26 >> 0x20);
              dVar28 = dVar26;
              in_xd6 = dVar35;
            }
            if (cVar37 == '\0') {
              fVar29 = SUB84(in_dr2,0) * SUB84(in_dr4,0);
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(in_dr8,0),
                                        SUB84(dVar26,0));
            }
            else {
              fVar29 = SUB84(in_dr2 * in_dr4,0);
              dVar26 = dVar26 * in_dr8;
            }
            if (cVar38 == '\0') {
              dVar31 = (double)CONCAT44(*(undefined4 *)(pdVar6 + 2),SUB84(in_dr4,0));
              in_dr8 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),SUB84(in_dr8,0));
              dVar28 = (double)CONCAT44(uVar32,fVar29);
            }
            else {
              dVar31 = pdVar6[2];
              in_dr8 = pdVar7[2];
            }
            fVar29 = (float)((ulonglong)in_dr8 >> 0x20);
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar29,SUB84(dVar28,0))
              ;
            }
            else {
              dVar28 = dVar28 * in_dr8;
            }
            uVar32 = (undefined4)((ulonglong)dVar31 >> 0x20);
            dVar33 = dVar31;
            if (cVar38 == '\0') {
              dVar33 = (double)CONCAT44(uVar32,SUB84(in_dr12,0));
            }
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - SUB84(dVar28,0),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 - dVar28;
            }
            in_xd2 = dVar31;
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),uVar32);
              in_xd2 = dVar35;
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        SUB84(dVar28,0) * SUB84(dVar31,0));
            }
            else {
              dVar28 = dVar28 * dVar31;
            }
            dVar35 = in_xd6;
            if (cVar38 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uVar30);
              dVar35 = in_xd0;
            }
            in_xd0 = dVar35;
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) * fVar29);
              in_dr12 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * SUB84(in_dr8,0),
                                         SUB84(dVar33,0));
              fVar29 = SUB84(dVar28,0) - (float)((ulonglong)dVar28 >> 0x20);
            }
            else {
              dVar26 = dVar26 * in_dr8;
              in_dr12 = dVar33 * in_dr8;
              fVar29 = SUB84(dVar28 - dVar28,0);
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 0x14),fVar29);
            }
            else {
              dVar35 = *(double *)((int)pdVar16 + 0x14);
            }
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                        SUB84(dVar26,0) - (float)((ulonglong)in_dr12 >> 0x20));
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) * SUB84(dVar35,0),
                                        SUB84(dVar35,0));
            }
            else {
              dVar26 = dVar26 - in_dr12;
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)(pdVar16 + 2));
            }
            else {
              in_xd2 = pdVar16[2];
            }
            if (cVar37 == '\0') {
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar35,0) +
                                        (float)((ulonglong)dVar35 >> 0x20),SUB84(dVar35,0));
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)(pdVar16 + 3));
              in_dr0 = (double)CONCAT44(SUB84(dVar26,0),SUB84(dVar26,0));
            }
            else {
              in_xd2 = pdVar16[3];
              in_dr0 = in_xd0;
            }
            if (cVar37 == '\0') {
              dVar35 = (double)((ulonglong)
                                (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar35,0) +
                                      (float)((ulonglong)dVar35 >> 0x20)) << 0x20);
            }
            in_dr2 = (double)((ulonglong)dVar35 & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar38 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),SUB84(dVar31,0));
            }
            if (cVar37 == '\0') {
              bVar36 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
            }
            else {
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24f980;
          }
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(uVar5,SUB84(in_dr4,0));
          }
          in_dr4 = dVar35;
          uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar29 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar23) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[1] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[1]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[2]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar6 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[3] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[3]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)((int)pdVar6 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)((int)pdVar6 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[4]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar16 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            in_dr2 = (double)CONCAT44(uVar32,(float)(int)psVar23[5] * fVar29);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar32,(float)(int)psVar23[5]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)((int)pdVar16 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)((int)pdVar16 + 0x24) = in_xd2;
          }
          FUN_8c23e228(pdVar7,pdVar6,pdVar16,ar7);
          pdVar10 = pdVar6;
          ar6 = pdVar16;
        }
      }
LAB_8c24f980:
      psVar23 = psVar23 + 6;
    }
  }
  else if (uVar2 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)*(ushort *)((int)ar4 + 2) * 4;
    iStack_2c = 0;
    pdVar10 = ar4;
    while( true ) {
      uVar32 = SUB84(in_dr4,0);
      uVar2 = (uint)*(ushort *)((int)ar4 + 2);
      if ((int)uVar2 <= iStack_2c) break;
      pdVar7 = (double *)((uint)*puVar21 * 0x40 + _DAT_8c4aa510);
      puVar9 = puVar21 + 3;
      pdVar16 = (double *)((uint)puVar21[1] * 0x40 + _DAT_8c4aa510);
      pdVar18 = (double *)((uint)puVar21[2] * 0x40 + _DAT_8c4aa510);
      puVar21 = puVar21 + 4;
      pdVar6 = (double *)((uint)*puVar9 * 0x40 + _DAT_8c4aa510);
      if ((*(uint *)pdVar7 & *(uint *)pdVar16 & *(uint *)pdVar18 & *(uint *)pdVar6 & 0x3f) == 0) {
        if (((*(uint *)pdVar7 | *(uint *)pdVar16 | *(uint *)pdVar18 | *(uint *)pdVar6) & 1) == 0) {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)((int)pdVar16 + 4);
              dVar35 = (double)CONCAT44(uVar32,*(undefined4 *)((int)pdVar7 + 4));
            }
            else {
              dVar35 = *(double *)((int)pdVar16 + 4);
              in_xd2 = *(double *)((int)pdVar7 + 4);
            }
            if (cVar37 == '\0') {
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) - SUB84(dVar35,0),
                                        SUB84(dVar35,0));
            }
            else {
              dVar35 = dVar35 - dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)(pdVar18 + 1));
              dVar28 = (double)CONCAT44(*(undefined4 *)(pdVar16 + 1),uVar32);
            }
            else {
              in_xd2 = pdVar18[1];
              dVar28 = pdVar16[1];
            }
            fVar29 = (float)((ulonglong)dVar28 >> 0x20);
            if (cVar37 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),SUB84(dVar35,0) - fVar29);
            }
            else {
              dVar35 = dVar35 - dVar28;
            }
            dVar26 = dVar28;
            if (cVar38 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar29);
              dVar26 = in_xd0;
            }
            in_xd0 = dVar26;
            if (cVar37 == '\0') {
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) * SUB84(dVar35,0),
                                        SUB84(dVar35,0));
            }
            else {
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),*(undefined4 *)(pdVar7 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar7[1];
            }
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        SUB84(in_dr0,0) - SUB84(dVar35,0));
            }
            else {
              dVar26 = in_dr0 - dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)((int)pdVar18 + 4));
            }
            else {
              in_xd2 = *(double *)((int)pdVar18 + 4);
            }
            if (cVar37 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        SUB84(dVar35,0) - SUB84(dVar28,0));
            }
            else {
              dVar35 = dVar35 - dVar28;
            }
            uVar2 = (uint)((ulonglong)dVar35 >> 0x20);
            dVar31 = dVar35;
            if (cVar38 == '\0') {
              dVar31 = (double)CONCAT44(uVar2,SUB84(dVar28,0));
            }
            if (cVar37 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                        SUB84(dVar26,0) * SUB84(dVar35,0));
            }
            else {
              in_dr0 = dVar26 * dVar35;
            }
            in_dr2 = (double)((ulonglong)uVar2 << 0x20);
            if (cVar37 == '\0') {
              fVar29 = (float)((ulonglong)dVar31 >> 0x20) - SUB84(in_dr0,0);
              in_dr4 = (double)CONCAT44(fVar29,SUB84(dVar31,0));
              bVar36 = 0.0 < fVar29;
            }
            else {
              in_dr4 = dVar31 - in_dr0;
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24fd68;
          }
          uVar30 = SUB84(in_dr0,0);
          uVar27 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          *(undefined4 *)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          uVar32 = _DAT_8c4c11b4;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            uVar32 = _DAT_8c4c11b0;
          }
          uVar3 = float_to_color_u8(pdVar7,pdVar10,ar6,ar7);
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(uVar5,uVar32);
          }
          *(undefined4 *)(pdVar7 + 5) = uVar3;
          fVar29 = (float)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar27,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar27,(float)(int)*psVar23) * dVar35;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          pdVar10 = (double *)((int)pdVar7 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[1] * fVar29;
          }
          else {
            fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),(float)(int)psVar23[1])
                           * dVar35,0);
          }
          if (cVar38 == '\0') {
            *(float *)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(*(undefined4 *)pdVar7,uVar30);
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),fVar29);
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar35 = *pdVar7;
            dVar28 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(pdVar7 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar32;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar28 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar35 >> 0x20);
          }
          else {
            dVar26 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar26;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar35;
          }
          *(undefined4 *)pdVar16 = 0xe0000000;
          CacheBlockWriteBack(pdVar16);
          uVar32 = _DAT_8c4c11b4;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            uVar32 = _DAT_8c4c11b0;
          }
          uVar30 = float_to_color_u8(pdVar16,pdVar10,ar6,ar7);
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = (double)CONCAT44(uVar5,uVar32);
          }
          *(undefined4 *)(pdVar16 + 5) = uVar30;
          uVar32 = (undefined4)((ulonglong)dVar28 >> 0x20);
          fVar29 = (float)((ulonglong)dVar26 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[2]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar16 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          pdVar10 = (double *)((int)pdVar16 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[3] * fVar29;
          }
          else {
            fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),(float)(int)psVar23[3])
                           * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar16 + 4);
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(*(undefined4 *)pdVar16,SUB84(dVar35,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar16 + 4),fVar29);
            pdVar16 = pdVar16 + 1;
          }
          else {
            dVar35 = *pdVar16;
            dVar28 = pdVar16[1];
            pdVar16 = pdVar16 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(pdVar16 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar16 + 0x14);
            *(undefined4 *)(unaff_r8 + 7) = uVar32;
            *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar28 >> 0x20);
            pdVar7 = unaff_r8 + 6;
            *(int *)pdVar7 = (int)((ulonglong)dVar35 >> 0x20);
          }
          else {
            dVar26 = pdVar16[2];
            unaff_r8[7] = pdVar16[3];
            unaff_r8[6] = dVar26;
            unaff_r8[5] = dVar28;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar35;
          }
          *(undefined4 *)pdVar18 = 0xe0000000;
          CacheBlockWriteBack(pdVar18);
          uVar32 = _DAT_8c4c11b4;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            uVar32 = _DAT_8c4c11b0;
          }
          uVar30 = float_to_color_u8(pdVar18,pdVar10,ar6,ar7);
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = (double)CONCAT44(uVar5,uVar32);
          }
          *(undefined4 *)(pdVar18 + 5) = uVar30;
          uVar32 = (undefined4)((ulonglong)dVar28 >> 0x20);
          fVar29 = (float)((ulonglong)dVar26 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[4]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          fVar25 = (float)(int)psVar23[5];
          if (cVar37 == '\0') {
            fVar25 = fVar25 * fVar29;
          }
          else {
            fVar25 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),fVar25) * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)((int)pdVar18 + 0x24) = fVar25;
          }
          else {
            *(double *)((int)pdVar18 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar18 + 4);
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(*(undefined4 *)pdVar18,SUB84(dVar35,0));
            dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 4),fVar25);
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar35 = *pdVar18;
            dVar28 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(pdVar18 + 2);
            *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar18 + 0x14);
            *(undefined4 *)(pdVar7 + 7) = uVar32;
            *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)dVar28 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)pdVar7 = (int)((ulonglong)dVar35 >> 0x20);
          }
          else {
            dVar26 = pdVar18[2];
            pdVar7[7] = pdVar18[3];
            pdVar7[6] = dVar26;
            pdVar7[5] = dVar28;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = dVar35;
          }
          *(undefined4 *)pdVar6 = 0xf0000000;
          CacheBlockWriteBack(pdVar6);
          uVar32 = _DAT_8c4c11b4;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            uVar32 = _DAT_8c4c11b0;
          }
          uVar30 = float_to_color_u8(pdVar6,psVar23 + 5,ar6,ar7);
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = (double)CONCAT44(uVar5,uVar32);
          }
          *(undefined4 *)(pdVar6 + 5) = uVar30;
          pdVar10 = (double *)(psVar23 + 7);
          uVar32 = (undefined4)((ulonglong)dVar28 >> 0x20);
          fVar29 = (float)((ulonglong)dVar26 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[6] * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar32,(float)(int)psVar23[6]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar6 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          if (cVar37 == '\0') {
            fVar29 = (float)(int)(short)*(ushort *)pdVar10 * fVar29;
          }
          else {
            fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                            (float)(int)(short)*(ushort *)pdVar10) * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)((int)pdVar6 + 0x24) = fVar29;
          }
          else {
            *(double *)((int)pdVar6 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar6 + 4);
          if (cVar38 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar35,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),fVar29);
            pdVar6 = pdVar6 + 1;
          }
          else {
            in_dr0 = *pdVar6;
            in_dr2 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(pdVar6 + 2);
            in_dr4 = (double)CONCAT44(uVar32,SUB84(dVar26,0));
            *(undefined4 *)((int)pdVar7 + 0x3c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(pdVar7 + 7) = uVar32;
            *(int *)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            pdVar7[7] = pdVar6[3];
            pdVar7[6] = in_dr4;
            pdVar7[5] = in_dr2;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
          _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
        }
        else {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)(pdVar16 + 3);
              uVar30 = *(undefined4 *)((int)pdVar16 + 0x14);
              dVar28 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),
                                        *(undefined4 *)(pdVar7 + 3));
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar31 = (double)CONCAT44(uVar32,SUB84(in_dr0,0));
              dVar35 = in_xd2;
              dVar26 = *(double *)((int)pdVar16 + 0x14);
            }
            else {
              dVar31 = pdVar16[3];
              dVar35 = *(double *)((int)pdVar16 + 0x14);
              dVar28 = *(double *)((int)pdVar7 + 0x14);
              uVar30 = SUB84(dVar31,0);
              uVar32 = (undefined4)((ulonglong)dVar31 >> 0x20);
              dVar26 = dVar31;
              in_xd6 = dVar35;
            }
            fVar29 = SUB84(dVar28,0);
            fVar25 = (float)((ulonglong)dVar28 >> 0x20);
            if (cVar37 == '\0') {
              fVar24 = SUB84(in_dr2,0) * fVar29;
              dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * fVar25,SUB84(dVar31,0))
              ;
            }
            else {
              fVar24 = SUB84(in_dr2 * dVar28,0);
              dVar31 = dVar31 * dVar28;
            }
            if (cVar38 == '\0') {
              dVar33 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 2),*(undefined4 *)(pdVar16 + 2));
              dVar26 = (double)CONCAT44(uVar32,fVar24);
            }
            else {
              in_xd8 = pdVar16[2];
              dVar33 = pdVar7[2];
            }
            fVar24 = (float)((ulonglong)dVar33 >> 0x20);
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * fVar24,SUB84(dVar26,0))
              ;
            }
            else {
              dVar26 = dVar26 * dVar33;
            }
            dVar34 = in_xd8;
            if (cVar38 == '\0') {
              dVar34 = (double)CONCAT44(SUB84(dVar33,0),SUB84(in_dr12,0));
            }
            if (cVar37 == '\0') {
              dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) - SUB84(dVar26,0),
                                        SUB84(dVar31,0));
            }
            else {
              dVar31 = dVar31 - dVar26;
            }
            in_xd2 = in_xd8;
            if (cVar38 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar33,0));
              in_xd2 = dVar35;
            }
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar26,0) * fVar29);
            }
            else {
              dVar26 = dVar26 * dVar28;
            }
            dVar35 = in_xd6;
            if (cVar38 == '\0') {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uVar30);
              dVar35 = in_xd0;
            }
            in_xd0 = dVar35;
            if (cVar37 == '\0') {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) * fVar24);
              in_dr12 = (double)CONCAT44((float)((ulonglong)dVar34 >> 0x20) * fVar25,SUB84(dVar34,0)
                                        );
              fVar25 = SUB84(dVar26,0) - (float)((ulonglong)dVar26 >> 0x20);
            }
            else {
              dVar31 = dVar31 * dVar33;
              in_dr12 = dVar34 * dVar28;
              fVar25 = SUB84(dVar26 - dVar26,0);
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44(*(undefined4 *)((int)pdVar18 + 0x14),fVar25);
            }
            else {
              dVar35 = *(double *)((int)pdVar18 + 0x14);
            }
            if (cVar37 == '\0') {
              dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                        SUB84(dVar31,0) - (float)((ulonglong)in_dr12 >> 0x20));
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) * SUB84(dVar35,0),
                                        SUB84(dVar35,0));
            }
            else {
              dVar31 = dVar31 - in_dr12;
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)(pdVar18 + 2));
            }
            else {
              in_xd2 = pdVar18[2];
            }
            if (cVar37 == '\0') {
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) * SUB84(dVar35,0) +
                                        (float)((ulonglong)dVar35 >> 0x20),SUB84(dVar35,0));
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)(pdVar18 + 3));
              in_dr0 = (double)CONCAT44(SUB84(dVar31,0),SUB84(dVar31,0));
            }
            else {
              in_xd2 = pdVar18[3];
              in_dr0 = in_xd0;
            }
            if (cVar37 == '\0') {
              dVar35 = (double)((ulonglong)
                                (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar35,0) +
                                      (float)((ulonglong)dVar35 >> 0x20)) << 0x20);
            }
            in_dr2 = (double)((ulonglong)dVar35 & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar38 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),fVar29);
            }
            if (cVar37 == '\0') {
              bVar36 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
            }
            else {
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24fd68;
          }
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(uVar5,SUB84(in_dr4,0));
          }
          in_dr4 = dVar35;
          uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar29 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar23) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar7 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[1] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[1]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)((int)pdVar7 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[2]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar16 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[3] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[3]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)((int)pdVar16 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)((int)pdVar16 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[4]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar18 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[5] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[5]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)((int)pdVar18 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)((int)pdVar18 + 0x24) = in_xd2;
          }
          pdVar10 = (double *)(psVar23 + 7);
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[6] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[6]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar6 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            in_dr2 = (double)CONCAT44(uVar32,(float)(int)(short)*(ushort *)pdVar10 * fVar29);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar32,(float)(int)(short)*(ushort *)pdVar10) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)((int)pdVar6 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)((int)pdVar6 + 0x24) = in_xd2;
          }
          if ((*(uint *)pdVar7 & *(uint *)pdVar16 & *(uint *)pdVar18 & 1) == 0) {
            pdVar10 = pdVar16;
            ar6 = pdVar18;
            FUN_8c23e228(pdVar7,pdVar16,pdVar18,ar7);
          }
          if ((*(uint *)pdVar16 & *(uint *)pdVar18 & *(uint *)pdVar6 & 1) == 0) {
            FUN_8c23e228(pdVar16,pdVar18,pdVar6,ar7);
            pdVar10 = pdVar18;
            ar6 = pdVar6;
          }
        }
      }
LAB_8c24fd68:
      psVar23 = psVar23 + 8;
      iStack_2c = iStack_2c + 1;
    }
  }
  else if (uVar2 == 0x8000) {
    iVar17 = 0;
    while( true ) {
      uVar32 = SUB84(in_dr6,0);
      uVar2 = (uint)*(ushort *)((int)ar4 + 2);
      if ((int)uVar2 <= iVar17) break;
      ar7_00 = 0;
      puVar22 = puVar21 + 1;
      iVar13 = 0;
      uVar19 = 0xffffffff;
      uVar2 = (uint)*puVar21;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar2;
      puVar9 = puVar22;
      if (uVar2 != 0) {
        do {
          uVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar13 = iVar13 + 1;
          uVar8 = *(uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
          uVar19 = uVar19 & uVar8;
          ar7_00 = ar7_00 | uVar8;
        } while (iVar13 < (int)uVar2);
      }
      iVar13 = uVar2 * 2;
      if ((uVar19 & 0x3f) == 0) {
        if ((ar7_00 & 1) == 0) {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            iVar14 = (uint)puVar21[2] * 0x40 + _DAT_8c4aa510;
            ar7_00 = (uint)*puVar22 * 0x40 + _DAT_8c4aa510;
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44(*(undefined4 *)(iVar14 + 4),SUB84(in_dr4,0));
            }
            else {
              dVar35 = *(double *)(iVar14 + 4);
            }
            uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44(uVar32,*(undefined4 *)(ar7_00 + 4));
            }
            else {
              in_xd2 = *(double *)(ar7_00 + 4);
              dVar28 = dVar35;
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar28,0),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            iVar20 = (uint)puVar21[3] * 0x40 + _DAT_8c4aa510;
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)(iVar20 + 8)
                                       );
              dVar35 = (double)CONCAT44(uVar32,*(undefined4 *)(iVar14 + 8));
            }
            else {
              in_xd2 = *(double *)(iVar20 + 8);
              in_xd4 = *(double *)(iVar14 + 8);
            }
            fVar29 = SUB84(dVar35,0);
            if (cVar37 == '\0') {
              fVar25 = SUB84(dVar28,0) - fVar29;
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar25,fVar25);
            }
            else {
              dVar28 = (dVar28 - dVar35) * (dVar28 - dVar35);
            }
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)(ar7_00 + 8)
                                       );
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar29);
            }
            else {
              in_xd2 = *(double *)(ar7_00 + 8);
              in_xd0 = in_xd4;
            }
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                        SUB84(in_dr0,0) - SUB84(dVar28,0));
            }
            else {
              dVar26 = in_dr0 - dVar28;
            }
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*(undefined4 *)(iVar20 + 4)
                                       );
            }
            else {
              in_xd2 = *(double *)(iVar20 + 4);
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        SUB84(dVar28,0) - (float)((ulonglong)dVar35 >> 0x20));
            }
            else {
              dVar28 = dVar28 - dVar35;
            }
            uVar19 = (uint)((ulonglong)dVar28 >> 0x20);
            dVar35 = dVar28;
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44(uVar19,fVar29);
            }
            if (cVar37 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                        SUB84(dVar26,0) * SUB84(dVar28,0));
            }
            else {
              in_dr0 = dVar26 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar19 << 0x20);
            if (cVar37 == '\0') {
              fVar29 = (float)((ulonglong)dVar35 >> 0x20) - SUB84(in_dr0,0);
              in_dr4 = (double)CONCAT44(fVar29,SUB84(dVar35,0));
              bVar36 = 0.0 < fVar29;
            }
            else {
              in_dr4 = dVar35 - in_dr0;
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24fffa;
          }
          _DAT_8c4aa520 = _DAT_8c4aa520 + uVar2;
          psVar11 = (short *)(uVar2 - 1);
          iStack_38 = 0;
          psVar12 = psVar11;
          psVar15 = psVar23;
          if (0 < (int)psVar11) {
            do {
              uVar30 = SUB84(in_dr0,0);
              uVar27 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              uVar1 = *puVar22;
              puVar22 = puVar22 + 1;
              pdVar10 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              *(undefined4 *)pdVar10 = 0xe0000000;
              CacheBlockWriteBack(pdVar10);
              uVar32 = _DAT_8c4c11b4;
              if (cVar38 != '\0') {
                in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
                in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
                uVar32 = _DAT_8c4c11b0;
              }
              uVar3 = float_to_color_u8(pdVar10,psVar12,iVar13,ar7_00);
              dVar35 = in_xd14;
              if (cVar38 == '\0') {
                dVar35 = (double)CONCAT44(uVar5,uVar32);
              }
              psVar23 = psVar15 + 2;
              *(undefined4 *)(pdVar10 + 5) = uVar3;
              psVar12 = psVar15 + 1;
              fVar29 = (float)((ulonglong)dVar35 >> 0x20);
              if (cVar37 == '\0') {
                dVar28 = (double)CONCAT44(uVar27,(float)(int)*psVar15 * fVar29);
              }
              else {
                dVar28 = (double)CONCAT44(uVar27,(float)(int)*psVar15) * dVar35;
              }
              if (cVar38 == '\0') {
                *(int *)(pdVar10 + 4) = SUB84(dVar28,0);
              }
              else {
                pdVar10[4] = in_xd2;
              }
              if (cVar37 == '\0') {
                fVar29 = (float)(int)*psVar12 * fVar29;
              }
              else {
                fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                                (float)(int)*psVar12) * dVar35,0);
              }
              if (cVar38 == '\0') {
                *(float *)((int)pdVar10 + 0x24) = fVar29;
              }
              else {
                *(double *)((int)pdVar10 + 0x24) = in_xd2;
              }
              CacheBlockWriteBack(pdVar10 + 4);
              if (cVar38 == '\0') {
                in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,uVar30);
                in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar29);
                pdVar10 = pdVar10 + 1;
              }
              else {
                in_dr0 = *pdVar10;
                in_dr2 = pdVar10[1];
                pdVar10 = pdVar10 + 2;
              }
              if (cVar38 == '\0') {
                uVar32 = *(undefined4 *)(pdVar10 + 2);
                *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
                *(undefined4 *)(unaff_r8 + 3) = uVar32;
                *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                dVar35 = pdVar10[2];
                unaff_r8[3] = pdVar10[3];
                unaff_r8[2] = dVar35;
                unaff_r8[1] = in_dr2;
                *unaff_r8 = in_dr0;
              }
              unaff_r8 = unaff_r8 + 4;
              iStack_38 = iStack_38 + 1;
              psVar15 = psVar23;
            } while (iStack_38 < (int)psVar11);
          }
          uVar27 = SUB84(in_dr0,0);
          uVar3 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          puVar21 = puVar22 + 1;
          pdVar10 = (double *)((uint)*puVar22 * 0x40 + _DAT_8c4aa510);
          *(undefined4 *)pdVar10 = 0xf0000000;
          CacheBlockWriteBack(pdVar10);
          uVar30 = _DAT_8c4c11b4;
          uVar32 = _DAT_8c4c11bc;
          if (cVar38 != '\0') {
            in_xd6 = (double)CONCAT44(_DAT_8c4c11c0,_DAT_8c4c11bc);
            in_xd4 = (double)CONCAT44(_DAT_8c4c11b8,_DAT_8c4c11b4);
            uVar30 = _DAT_8c4c11b0;
            uVar32 = _DAT_8c4c11b8;
          }
          uVar4 = float_to_color_u8(pdVar10,psVar12,iVar13,ar7_00);
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(uVar5,uVar30);
          }
          psVar12 = psVar23 + 2;
          *(undefined4 *)(pdVar10 + 5) = uVar4;
          fVar29 = (float)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(uVar3,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar28 = (double)CONCAT44(uVar3,(float)(int)*psVar23) * dVar35;
          }
          if (cVar38 == '\0') {
            *(int *)(pdVar10 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar10[4] = in_xd2;
          }
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[1] * fVar29;
          }
          else {
            fVar29 = SUB84((double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),(float)(int)psVar23[1])
                           * dVar35,0);
          }
          if (cVar38 == '\0') {
            *(float *)((int)pdVar10 + 0x24) = fVar29;
          }
          else {
            *(double *)((int)pdVar10 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar10 + 4);
          if (cVar38 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar10,uVar27);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 4),fVar29);
            pdVar10 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            in_dr2 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
          }
          if (cVar38 == '\0') {
            uVar30 = *(undefined4 *)(pdVar10 + 2);
            in_dr4 = (double)CONCAT44(uVar30,SUB84(dVar35,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 0x14),uVar32);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar30;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar10[2];
            in_dr6 = pdVar10[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          if ((_DAT_8c4ab308 & 0x800000) == 0) {
            iVar14 = (uint)*puVar22 * 0x40 + _DAT_8c4aa510;
            iVar20 = _DAT_8c4aa510 + (uint)puVar21[2] * 0x40;
            iVar13 = (uint)puVar21[3] * 0x40 + _DAT_8c4aa510;
            if (cVar38 == '\0') {
              uVar30 = *(undefined4 *)(iVar20 + 0x18);
              dVar35 = (double)CONCAT44(*(undefined4 *)(iVar14 + 0x14),SUB84(in_dr4,0));
              dVar28 = (double)CONCAT44(uVar30,SUB84(in_dr0,0));
              in_dr8 = (double)CONCAT44(uVar30,SUB84(in_dr8,0));
            }
            else {
              dVar28 = *(double *)(iVar20 + 0x18);
              dVar35 = *(double *)(iVar14 + 0x14);
              uVar30 = (undefined4)((ulonglong)dVar28 >> 0x20);
              in_dr8 = dVar28;
            }
            fVar29 = (float)((ulonglong)dVar35 >> 0x20);
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * fVar29,SUB84(dVar28,0))
              ;
            }
            else {
              dVar28 = dVar28 * dVar35;
            }
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)(iVar20 + 0x14);
              in_dr8 = (double)CONCAT44(uVar30,*(undefined4 *)(iVar14 + 0x18));
              in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar32);
            }
            else {
              in_xd2 = *(double *)(iVar20 + 0x14);
              in_xd6 = in_xd2;
            }
            if (cVar37 == '\0') {
              fVar25 = SUB84(in_dr2,0) * SUB84(in_dr8,0);
            }
            else {
              fVar25 = SUB84(in_dr2 * in_dr8,0);
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44(fVar29,*(undefined4 *)(iVar20 + 0x10));
              in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar14 + 0x10),uVar32);
              dVar26 = (double)CONCAT44((int)((ulonglong)in_dr8 >> 0x20),fVar25);
            }
            else {
              in_xd4 = *(double *)(iVar20 + 0x10);
              in_dr6 = *(double *)(iVar14 + 0x10);
              dVar26 = in_dr8;
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) - SUB84(dVar26,0),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar26;
            }
            uVar32 = SUB84(dVar35,0);
            dVar31 = in_xd4;
            if (cVar38 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uVar32);
              dVar31 = in_xd2;
            }
            fVar29 = (float)((ulonglong)in_dr6 >> 0x20);
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * fVar29,SUB84(dVar26,0))
              ;
            }
            else {
              dVar26 = dVar26 * in_dr6;
            }
            dVar33 = in_xd4;
            if (cVar38 == '\0') {
              dVar33 = (double)CONCAT44(uVar32,SUB84(in_dr12,0));
            }
            if (cVar37 == '\0') {
              dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                        SUB84(dVar26,0) * SUB84(in_dr8,0));
            }
            else {
              dVar26 = dVar26 * in_dr8;
            }
            dVar34 = in_xd6;
            if (cVar38 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(in_dr6,0));
              dVar34 = in_xd0;
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) * fVar29);
              in_dr12 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) *
                                         (float)((ulonglong)dVar35 >> 0x20),SUB84(dVar33,0));
              fVar29 = SUB84(dVar26,0) - (float)((ulonglong)dVar26 >> 0x20);
            }
            else {
              dVar28 = dVar28 * in_dr6;
              in_dr12 = dVar33 * dVar35;
              fVar29 = SUB84(dVar26 - dVar26,0);
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44(*(undefined4 *)(iVar13 + 0x14),fVar29);
            }
            else {
              dVar35 = *(double *)(iVar13 + 0x14);
            }
            if (cVar37 == '\0') {
              dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                        SUB84(dVar28,0) - (float)((ulonglong)in_dr12 >> 0x20));
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar35 >> 0x20) * SUB84(dVar35,0),
                                        SUB84(dVar35,0));
            }
            else {
              dVar28 = dVar28 - in_dr12;
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)(iVar13 + 0x10));
            }
            else {
              dVar31 = *(double *)(iVar13 + 0x10);
            }
            if (cVar37 == '\0') {
              dVar35 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * SUB84(dVar35,0) +
                                        (float)((ulonglong)dVar35 >> 0x20),SUB84(dVar35,0));
            }
            if (cVar38 == '\0') {
              dVar35 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),
                                        *(undefined4 *)(iVar13 + 0x18));
              in_dr0 = (double)CONCAT44(SUB84(dVar28,0),SUB84(dVar28,0));
              in_xd2 = dVar31;
            }
            else {
              in_xd2 = *(double *)(iVar13 + 0x18);
              in_dr0 = dVar34;
            }
            if (cVar37 == '\0') {
              dVar35 = (double)((ulonglong)
                                (uint)((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar35,0) +
                                      (float)((ulonglong)dVar35 >> 0x20)) << 0x20);
            }
            in_dr2 = (double)((ulonglong)dVar35 & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar38 == '\0') {
              in_dr4 = (double)CONCAT44((int)((ulonglong)dVar35 >> 0x20),uVar32);
            }
            if (cVar37 == '\0') {
              bVar36 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
            }
            else {
              bVar36 = in_dr2 < in_dr4;
            }
            in_xd0 = dVar34;
            if (bVar36) {
LAB_8c24fffa:
              puVar21 = puVar22 + uVar2;
              psVar12 = psVar23 + uVar2 * 2;
              goto LAB_8c2500dc;
            }
          }
          puVar9 = puVar21 + 2;
          puVar21 = puVar21 + 3;
          uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = (double)CONCAT44(uVar5,SUB84(in_dr4,0));
          }
          in_dr4 = dVar35;
          fVar29 = (float)((ulonglong)in_dr4 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar23) * in_dr4;
          }
          ar4_00 = (uint *)((uint)*puVar22 * 0x40 + _DAT_8c4aa510);
          ar5_00 = (uint *)((uint)*puVar9 * 0x40 + _DAT_8c4aa510);
          if (cVar38 == '\0') {
            ar4_00[8] = SUB84(dVar35,0);
          }
          else {
            *(double *)(ar4_00 + 8) = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[1] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[1]) * in_dr4;
          }
          if (cVar38 == '\0') {
            ar4_00[9] = SUB84(dVar35,0);
          }
          else {
            *(double *)(ar4_00 + 9) = in_xd2;
          }
          psVar15 = psVar23 + 3;
          psVar12 = psVar23 + 4;
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar35 = (double)CONCAT44(uVar32,(float)(int)psVar23[2]) * in_dr4;
          }
          if (cVar38 == '\0') {
            ar5_00[8] = SUB84(dVar35,0);
          }
          else {
            *(double *)(ar5_00 + 8) = in_xd2;
          }
          uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
          if (cVar37 == '\0') {
            in_dr2 = (double)CONCAT44(uVar32,(float)(int)*psVar15 * fVar29);
          }
          else {
            in_dr2 = (double)CONCAT44(uVar32,(float)(int)*psVar15) * in_dr4;
          }
          if (cVar38 == '\0') {
            ar5_00[9] = SUB84(in_dr2,0);
          }
          else {
            *(double *)(ar5_00 + 9) = in_xd2;
          }
          iStack_34 = 0;
          if (0 < (int)(uVar2 - 2)) {
            do {
              uVar1 = *puVar21;
              puVar21 = puVar21 + 1;
              dVar35 = in_xd14;
              if (cVar38 == '\0') {
                dVar35 = (double)CONCAT44(uVar5,SUB84(in_dr4,0));
              }
              in_dr4 = dVar35;
              ar6_00 = (uint *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
              uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              fVar29 = (float)((ulonglong)in_dr4 >> 0x20);
              if (cVar37 == '\0') {
                dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar12 * fVar29);
              }
              else {
                dVar35 = (double)CONCAT44(uVar32,(float)(int)*psVar12) * in_dr4;
              }
              if (cVar38 == '\0') {
                ar6_00[8] = SUB84(dVar35,0);
              }
              else {
                *(double *)(ar6_00 + 8) = in_xd2;
              }
              uVar32 = (undefined4)((ulonglong)dVar35 >> 0x20);
              if (cVar37 == '\0') {
                in_dr2 = (double)CONCAT44(uVar32,(float)(int)psVar12[1] * fVar29);
              }
              else {
                in_dr2 = (double)CONCAT44(uVar32,(float)(int)psVar12[1]) * in_dr4;
              }
              if (cVar38 == '\0') {
                ar6_00[9] = SUB84(in_dr2,0);
              }
              else {
                *(double *)(ar6_00 + 9) = in_xd2;
              }
              psVar12 = psVar12 + 2;
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                FUN_8c23e228(ar4_00,ar5_00,ar6_00,psVar15);
              }
              iStack_34 = iStack_34 + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while (iStack_34 < (int)(uVar2 - 2));
          }
        }
      }
      else {
        psVar12 = psVar23 + uVar2 * 2;
        puVar21 = puVar22 + uVar2;
      }
LAB_8c2500dc:
      iVar17 = iVar17 + 1;
      psVar23 = psVar12;
    }
  }
  else if (uVar2 == 0xc000) {
    if ((_DAT_8c4ab318 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c2458f6;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c24553e;
    }
                    
                    
    uVar5 = (*UNRECOVERED_JUMPTABLE)(ar4,(ushort)iStack_38);
    return uVar5;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24f64c\n.set _FUN_8c24f64c, _FUN_8c24f64c_def\n");
