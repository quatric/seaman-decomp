#include "../decls.h"
undefined4 FUN_8c246f1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  double *unaff_r8;
  double *ar4_00;
  double *ar5_00;
  double *pdVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  float fVar12;
  double in_dr0;
  double dVar13;
  double in_dr2;
  float fVar17;
  double dVar15;
  ulonglong uVar16;
  double in_dr4;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double in_dr6;
  double dVar22;
  float fVar23;
  double dVar24;
  double in_dr10;
  float fVar25;
  undefined4 in_fr13;
  double dVar26;
  double in_dr14;
  undefined8 uVar27;
  double in_xd2;
  double in_xd12;
  bool bVar28;
  char cVar29;
  char cVar30;
  undefined4 in_stack_ffffffbc;
  int iStack_3c;
  int iStack_34;
  uint uStack_30;
  float fVar14;
  
  cVar30 = '\0';
  cVar29 = '\0';
  dVar26 = (double)CONCAT44(0x3f800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffbc);
  iVar2 = _DAT_8c4aa510;
  if ((_DAT_8c4ab308 & 0x800000) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0x8000;
  }
  puVar9 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  iStack_3c = 0;
  do {
    uVar21 = SUB84(in_dr14,0);
    puVar10 = puVar9 + 1;
    uVar5 = (uint)*puVar9;
    uVar20 = (undefined4)((ulonglong)dVar26 >> 0x20);
    if (cVar30 == '\0') {
      uVar21 = uVar20;
    }
    if ((*puVar9 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      uVar21 = 0xbf800000;
    }
    iStack_3c = iStack_3c + uVar5;
    iVar3 = uVar5 - 2;
    puVar11 = puVar9 + 2;
    puVar9 = puVar9 + 3;
    ar5_00 = (double *)((uint)*puVar11 * 0x40 + iVar2);
    ar4_00 = (double *)((uint)*puVar10 * 0x40 + iVar2);
    pdVar6 = unaff_r8;
    if (cVar30 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)((int)ar5_00 + 4),uVar21);
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),SUB84(in_dr6,0));
      dVar26 = (double)CONCAT44(uVar20,*(undefined4 *)(ar5_00 + 1));
      in_dr4 = (double)(ulonglong)*(uint *)(ar4_00 + 1);
    }
    else {
      in_dr14 = *(double *)((int)ar5_00 + 4);
      in_dr6 = *(double *)((int)ar4_00 + 4);
      in_xd12 = ar5_00[1];
    }
    do {
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      pdVar8 = (double *)((uint)uVar1 * 0x40 + iVar2);
      iStack_34 = 0;
      uVar21 = (undefined4)((ulonglong)dVar26 >> 0x20);
      dVar22 = dVar26;
      if (cVar30 == '\0') {
        dVar22 = (double)CONCAT44(uVar21,SUB84(in_dr4,0));
      }
      in_dr4 = dVar22;
      if ((*(uint *)ar4_00 & *(uint *)ar5_00 & *(uint *)pdVar8 & 0x3f) == 0) {
        if (((*(uint *)ar4_00 | *(uint *)ar5_00 | *(uint *)pdVar8) & 1) == 0) {
          fVar17 = (float)((ulonglong)in_dr14 >> 0x20);
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),fVar17);
          }
          else {
            dVar18 = pdVar8[1];
            in_xd2 = in_dr14;
          }
          if (cVar29 == '\0') {
            dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) - SUB84(dVar26,0),
                                      SUB84(dVar18,0) - (float)((ulonglong)in_dr6 >> 0x20));
          }
          else {
            dVar18 = (dVar18 - in_dr6) - dVar26;
          }
          if (cVar30 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)((int)pdVar8 + 4));
          }
          if (cVar29 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar17);
            fVar17 = SUB84(dVar18,0) * (float)((ulonglong)dVar18 >> 0x20);
          }
          else {
            in_dr0 = in_dr0 - in_dr14;
            fVar17 = SUB84(dVar18 * dVar18,0);
          }
          dVar18 = in_xd12;
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44(SUB84(dVar26,0),fVar17);
          }
          if (cVar29 == '\0') {
            fVar17 = ((float)((ulonglong)dVar18 >> 0x20) - SUB84(dVar22,0)) * SUB84(in_dr0,0);
            in_dr2 = (double)CONCAT44(fVar17,SUB84(dVar18,0) - fVar17);
          }
          else {
            in_dr2 = (dVar18 - dVar22) * in_dr0;
            in_dr2 = in_dr2 - in_dr2;
          }
          in_dr4 = in_xd2;
          if (cVar30 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),SUB84(dVar22,0));
          }
          if (cVar29 == '\0') {
            in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(in_dr14,0),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * in_dr14;
          }
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
          if (cVar29 == '\0') {
            bVar28 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar28 = in_dr2 < in_dr4;
          }
          if ((bVar28) && (iVar4 != 0)) {
            if (cVar29 == '\0') {
              in_dr4 = (double)CONCAT44(0xbf800000,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = -(double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
            }
          }
        }
        else {
          if (cVar30 == '\0') {
            fVar14 = *(float *)(ar5_00 + 2);
            fVar12 = *(float *)((int)ar5_00 + 0x14);
            dVar13 = (double)CONCAT44(fVar14,fVar12);
            fVar17 = *(float *)(ar5_00 + 3);
            dVar18 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 2),
                                      *(undefined4 *)((int)ar4_00 + 0x14));
            dVar22 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 3),SUB84(in_dr6,0));
            in_dr10 = (double)CONCAT44(fVar17,SUB84(in_dr10,0));
            dVar15 = (double)CONCAT44(fVar17,SUB84(in_dr2,0));
          }
          else {
            dVar13 = ar5_00[2];
            in_dr10 = ar5_00[4];
            dVar18 = ar4_00[2];
            dVar22 = ar4_00[4];
            fVar14 = (float)((ulonglong)dVar13 >> 0x20);
            fVar12 = SUB84(dVar13,0);
            fVar17 = (float)((ulonglong)in_dr10 >> 0x20);
            dVar15 = in_dr10;
          }
          fVar23 = (float)((ulonglong)dVar22 >> 0x20);
          fVar19 = (float)((ulonglong)dVar18 >> 0x20);
          if (cVar29 == '\0') {
            fVar25 = (float)((ulonglong)in_dr10 >> 0x20) * fVar19;
            in_dr10 = (double)CONCAT44(fVar25,SUB84(in_dr10,0));
            dVar15 = (double)((ulonglong)(uint)(fVar17 * SUB84(dVar18,0) - SUB84(dVar13,0) * fVar23)
                             << 0x20);
            dVar24 = (double)CONCAT44(fVar14 * fVar23 - fVar25,
                                      fVar12 * fVar19 -
                                      (float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar18,0));
          }
          else {
            in_dr10 = in_dr10 * dVar18;
            dVar24 = dVar13 * dVar22 * dVar18;
            dVar15 = dVar15 * dVar18 - dVar24;
            dVar24 = (dVar13 * dVar22 * dVar18 - in_dr10) - dVar24;
          }
          if (cVar30 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 2),SUB84(dVar22,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),
                                      *(undefined4 *)(pdVar8 + 3));
          }
          else {
            in_dr6 = pdVar8[2];
            dVar22 = pdVar8[3];
          }
          uVar16 = (ulonglong)dVar15 & 0xffffffff00000000;
                    
          if (cVar29 == '\0') {
            fVar17 = SUB84(dVar24,0) * SUB84(dVar22,0) +
                     (float)((ulonglong)dVar24 >> 0x20) * (float)((ulonglong)dVar22 >> 0x20) +
                     SUB84(in_dr6,0) * 0.0 +
                     (float)(uVar16 >> 0x20) * (float)((ulonglong)in_dr6 >> 0x20);
          }
          dVar18 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar30 == '\0') {
            dVar18 = (double)CONCAT44((int)uVar16,SUB84(dVar22,0));
            in_dr0 = (double)CONCAT44((int)uVar16,SUB84(dVar24,0));
          }
          if (cVar29 == '\0') {
            dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * SUB84(in_dr14,0),
                                      SUB84(dVar18,0));
          }
          else {
            dVar18 = dVar18 * in_dr14;
          }
          in_dr2 = (double)(uVar16 & 0xffffffff00000000);
          if (cVar29 == '\0') {
            bVar28 = 0.0 < (float)((ulonglong)dVar18 >> 0x20);
          }
          else {
            bVar28 = in_dr2 < dVar18;
          }
          in_dr4 = dVar18;
          iStack_34 = iVar4;
          if ((!bVar28) && (iStack_34 = 1, in_dr4 = dVar26, cVar30 == '\0')) {
            in_dr4 = (double)CONCAT44(uVar21,SUB84(dVar18,0));
          }
        }
      }
      uVar5 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar17 = (float)((ulonglong)in_dr4 >> 0x20);
      uVar21 = SUB84(in_dr6,0);
      if (pdVar6 < unaff_r8) {
        if (cVar29 == '\0') {
          bVar28 = fVar17 < 0.0;
        }
        else {
          bVar28 = in_dr4 < (double)((ulonglong)uVar5 << 0x20);
        }
        if (bVar28) {
          *(undefined4 *)ar5_00 = 0xe0000000;
          CacheBlockWriteBack(ar5_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(ar5_00 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)ar5_00 + 0x24) = _DAT_8c4c11b4;
            uVar20 = _DAT_8c4c11b8;
            *(undefined4 *)(ar5_00 + 5) = _DAT_8c4c11b8;
            uVar27 = CONCAT44(_DAT_8c4c11bc,uVar20);
            *(undefined4 *)((int)ar5_00 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            ar5_00[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)ar5_00 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            ar5_00[5] = _DAT_8c4c11c0;
            uVar27 = _DAT_8c4c11c8;
            *(undefined8 *)((int)ar5_00 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar20 = (undefined4)uVar27;
          CacheBlockWriteBack((undefined4 *)((int)ar5_00 + 0x2c));
LAB_8c2471aa:
          if (cVar30 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar5_00,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5_00 + 4),uVar20);
            pdVar7 = ar5_00 + 1;
          }
          else {
            in_dr0 = *ar5_00;
            in_dr2 = ar5_00[1];
            pdVar7 = ar5_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar20 = *(undefined4 *)(pdVar7 + 2);
            in_dr4 = (double)CONCAT44(uVar20,SUB84(in_dr4,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar21);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar20;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            dVar22 = pdVar7[3];
            unaff_r8[3] = dVar22;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar21 = SUB84(dVar22,0);
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)ar5_00 = 0xf0000000;
          CacheBlockWriteBack(ar5_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(ar5_00 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)ar5_00 + 0x24) = _DAT_8c4c11b4;
            uVar20 = _DAT_8c4c11b8;
            *(undefined4 *)(ar5_00 + 5) = _DAT_8c4c11b8;
            uVar27 = CONCAT44(_DAT_8c4c11bc,uVar20);
            *(undefined4 *)((int)ar5_00 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            ar5_00[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)ar5_00 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            ar5_00[5] = _DAT_8c4c11c0;
            uVar27 = _DAT_8c4c11c8;
            *(undefined8 *)((int)ar5_00 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)ar5_00 + 0x2c));
          if (cVar30 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar5_00,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5_00 + 4),(int)uVar27);
            pdVar6 = ar5_00 + 1;
          }
          else {
            in_dr0 = *ar5_00;
            in_dr2 = ar5_00[1];
            pdVar6 = ar5_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar20 = *(undefined4 *)(pdVar6 + 2);
            in_dr4 = (double)CONCAT44(uVar20,SUB84(in_dr4,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),uVar21);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar20;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            dVar22 = pdVar6[3];
            unaff_r8[3] = dVar22;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar21 = SUB84(dVar22,0);
          unaff_r8 = unaff_r8 + 4;
          pdVar6 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar29 == '\0') {
          bVar28 = fVar17 < 0.0;
        }
        else {
          bVar28 = in_dr4 < in_dr2;
        }
        if (bVar28) {
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(ar4_00 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)ar4_00 + 0x24) = _DAT_8c4c11b4;
            uVar20 = _DAT_8c4c11b8;
            *(undefined4 *)(ar4_00 + 5) = _DAT_8c4c11b8;
            uVar27 = CONCAT44(_DAT_8c4c11bc,uVar20);
            *(undefined4 *)((int)ar4_00 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            ar4_00[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)ar4_00 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            ar4_00[5] = _DAT_8c4c11c0;
            uVar27 = _DAT_8c4c11c8;
            *(undefined8 *)((int)ar4_00 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)ar4_00 + 0x2c));
          if (cVar30 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(in_dr0,0));
            dVar22 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),(int)uVar27);
            pdVar7 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar22 = ar4_00[1];
            pdVar7 = ar4_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar20 = *(undefined4 *)(pdVar7 + 2);
            in_dr4 = (double)CONCAT44(uVar20,SUB84(in_dr4,0));
            dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 0x14),uVar21);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar20;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar22 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            dVar18 = pdVar7[3];
            unaff_r8[3] = dVar18;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = dVar22;
            *unaff_r8 = in_dr0;
          }
          uVar21 = SUB84(dVar18,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)ar5_00 = 0xe0000000;
          CacheBlockWriteBack(ar5_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(ar5_00 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)ar5_00 + 0x24) = _DAT_8c4c11b4;
            uVar20 = _DAT_8c4c11b8;
            *(undefined4 *)(ar5_00 + 5) = _DAT_8c4c11b8;
            uVar27 = CONCAT44(_DAT_8c4c11bc,uVar20);
            *(undefined4 *)((int)ar5_00 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            ar5_00[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)ar5_00 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            ar5_00[5] = _DAT_8c4c11c0;
            uVar27 = _DAT_8c4c11c8;
            *(undefined8 *)((int)ar5_00 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar20 = (undefined4)uVar27;
          CacheBlockWriteBack((undefined4 *)((int)ar5_00 + 0x2c));
          goto LAB_8c2471aa;
        }
      }
      if (iStack_34 != 0) {
        FUN_8c23eb44(ar4_00,ar5_00,pdVar8,ar7);
        pdVar6 = unaff_r8;
      }
      if (cVar30 == '\0') {
        uVar27 = CONCAT44(*(undefined4 *)((int)pdVar8 + 4),SUB84(in_dr14,0));
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar21);
      }
      else {
        uVar27 = *(undefined8 *)((int)pdVar8 + 4);
        in_dr6 = in_dr14;
      }
      if (cVar30 == '\0') {
        in_dr4 = (double)((ulonglong)dVar26 & 0xffffffff);
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)(pdVar8 + 1));
      }
      else {
        in_xd12 = pdVar8[1];
      }
      iVar3 = iVar3 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)uVar27 >> 0x20),-(float)uVar27);
      ar4_00 = ar5_00;
      ar5_00 = pdVar8;
    } while (iVar3 != 0);
    if (pdVar6 < unaff_r8) {
      *(undefined4 *)pdVar8 = 0xf0000000;
      CacheBlockWriteBack(pdVar8);
      if (cVar30 == '\0') {
        *(undefined4 *)(pdVar8 + 4) = _DAT_8c4c11b0;
        *(undefined4 *)((int)pdVar8 + 0x24) = _DAT_8c4c11b4;
        uVar21 = _DAT_8c4c11b8;
        *(undefined4 *)(pdVar8 + 5) = _DAT_8c4c11b8;
        uVar27 = CONCAT44(_DAT_8c4c11bc,uVar21);
        *(undefined4 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11bc;
      }
      else {
        pdVar8[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
        *(ulonglong *)((int)pdVar8 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
        in_xd2 = _DAT_8c4c11c0;
        pdVar8[5] = _DAT_8c4c11c0;
        uVar27 = _DAT_8c4c11c8;
        *(undefined8 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11c8;
      }
      CacheBlockWriteBack((undefined4 *)((int)pdVar8 + 0x2c));
      if (cVar30 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),(int)uVar27);
        pdVar8 = pdVar8 + 1;
      }
      else {
        in_dr0 = *pdVar8;
        in_dr2 = pdVar8[1];
        pdVar8 = pdVar8 + 2;
      }
      if (cVar30 == '\0') {
        uVar21 = *(undefined4 *)(pdVar8 + 2);
        in_dr4 = (double)CONCAT44(uVar21,SUB84(in_dr4,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar21;
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
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_3c;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_3c;
      return 8;
    }
  } while( true );
}

__asm__(".globl _FUN_8c246f1a\n.set _FUN_8c246f1a, _FUN_8c246f1a_def\n");
