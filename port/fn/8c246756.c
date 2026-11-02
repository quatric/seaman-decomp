#include "../decls.h"
undefined4 FUN_8c246756_def(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *unaff_r8;
  double *ar4_00;
  double *ar4_01;
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
  double in_dr4;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double in_dr6;
  double dVar25;
  float fVar26;
  double dVar27;
  double in_dr10;
  float fVar28;
  undefined4 in_fr13;
  double dVar29;
  undefined4 uVar30;
  double dVar31;
  undefined8 uVar32;
  double in_xd2;
  double in_xd12;
  bool bVar33;
  char cVar34;
  char cVar35;
  undefined4 in_stack_ffffffbc;
  int iStack_3c;
  int iStack_34;
  uint uStack_30;
  float fVar17;
  
  cVar35 = '\0';
  cVar34 = '\0';
  dVar29 = (double)CONCAT44(0x3f000000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffbc);
  iVar2 = _DAT_8c4aa510;
  if ((_DAT_8c4ab308 & 0x800000) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0x8000;
  }
  puVar12 = *(ushort **)(ar4 + 4);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  iStack_3c = 0;
  do {
    puVar13 = puVar12 + 1;
    uVar7 = (uint)*puVar12;
    uVar4 = 0x3f800000;
    if ((*puVar12 & 0x8000) != 0) {
      uVar7 = uVar7 & 0x7fff;
      uVar4 = 0xbf800000;
    }
    iStack_3c = iStack_3c + uVar7;
    iVar5 = uVar7 - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    ar4_01 = (double *)((uint)*puVar14 * 0x40 + iVar2);
    ar4_00 = (double *)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = unaff_r8;
    if (cVar35 == '\0') {
      dVar31 = (double)CONCAT44(*(undefined4 *)((int)ar4_01 + 4),uVar4);
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),SUB84(in_dr6,0));
      dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)(ar4_01 + 1));
      in_dr4 = (double)(ulonglong)*(uint *)(ar4_00 + 1);
    }
    else {
      dVar31 = *(double *)((int)ar4_01 + 4);
      in_dr6 = *(double *)((int)ar4_00 + 4);
      in_xd12 = ar4_01[1];
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)((uint)uVar1 * 0x40 + iVar2);
      iStack_34 = 0;
      fVar20 = SUB84(in_dr4,0);
      in_dr4 = (double)CONCAT44(0x3f800000,fVar20);
      if ((*(uint *)ar4_00 & *(uint *)ar4_01 & *(uint *)pdVar11 & 0x3f) == 0) {
        if (((*(uint *)ar4_00 | *(uint *)ar4_01 | *(uint *)pdVar11) & 1) == 0) {
          fVar15 = (float)((ulonglong)dVar31 >> 0x20);
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 1),fVar15);
          }
          else {
            dVar25 = pdVar11[1];
            in_xd2 = dVar31;
          }
          if (cVar34 == '\0') {
            dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar29,0),
                                      SUB84(dVar25,0) - (float)((ulonglong)in_dr6 >> 0x20));
          }
          else {
            dVar25 = (dVar25 - in_dr6) - dVar29;
          }
          if (cVar35 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)((int)pdVar11 + 4));
          }
          if (cVar34 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar15);
            fVar15 = SUB84(dVar25,0) * (float)((ulonglong)dVar25 >> 0x20);
          }
          else {
            in_dr0 = in_dr0 - dVar31;
            fVar15 = SUB84(dVar25 * dVar25,0);
          }
          dVar25 = in_xd12;
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44(SUB84(dVar29,0),fVar15);
          }
          if (cVar34 == '\0') {
            fVar15 = ((float)((ulonglong)dVar25 >> 0x20) - fVar20) * SUB84(in_dr0,0);
            in_dr2 = (double)CONCAT44(fVar15,SUB84(dVar25,0) - fVar15);
          }
          else {
            in_dr2 = (dVar25 - in_dr4) * in_dr0;
            in_dr2 = in_dr2 - in_dr2;
          }
          in_dr4 = in_xd2;
          if (cVar35 == '\0') {
            in_dr4 = (double)CONCAT44(SUB84(in_dr2,0),fVar20);
          }
          if (cVar34 == '\0') {
            in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(dVar31,0),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * dVar31;
          }
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
          if (cVar34 == '\0') {
            bVar33 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar33 = in_dr2 < in_dr4;
          }
          if ((bVar33) && (iVar6 != 0)) {
            if (cVar34 == '\0') {
              in_dr4 = (double)CONCAT44(0xbf800000,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = -(double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
            }
          }
        }
        else {
          if (cVar35 == '\0') {
            fVar17 = *(float *)(ar4_01 + 2);
            fVar15 = *(float *)((int)ar4_01 + 0x14);
            dVar16 = (double)CONCAT44(fVar17,fVar15);
            fVar20 = *(float *)(ar4_01 + 3);
            dVar21 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 2),
                                      *(undefined4 *)((int)ar4_00 + 0x14));
            dVar25 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 3),SUB84(in_dr6,0));
            ar5 = (double *)((int)ar4_00 + 0x1c);
            in_dr10 = (double)CONCAT44(fVar20,SUB84(in_dr10,0));
            dVar18 = (double)CONCAT44(fVar20,SUB84(in_dr2,0));
          }
          else {
            dVar16 = ar4_01[2];
            in_dr10 = ar4_01[4];
            dVar21 = ar4_00[2];
            dVar25 = ar4_00[4];
            ar5 = ar4_00 + 5;
            fVar17 = (float)((ulonglong)dVar16 >> 0x20);
            fVar15 = SUB84(dVar16,0);
            fVar20 = (float)((ulonglong)in_dr10 >> 0x20);
            dVar18 = in_dr10;
          }
          fVar26 = (float)((ulonglong)dVar25 >> 0x20);
          fVar22 = (float)((ulonglong)dVar21 >> 0x20);
          if (cVar34 == '\0') {
            fVar28 = (float)((ulonglong)in_dr10 >> 0x20) * fVar22;
            in_dr10 = (double)CONCAT44(fVar28,SUB84(in_dr10,0));
            dVar18 = (double)((ulonglong)(uint)(fVar20 * SUB84(dVar21,0) - SUB84(dVar16,0) * fVar26)
                             << 0x20);
            dVar27 = (double)CONCAT44(fVar17 * fVar26 - fVar28,
                                      fVar15 * fVar22 -
                                      (float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar21,0));
          }
          else {
            in_dr10 = in_dr10 * dVar21;
            dVar27 = dVar16 * dVar25 * dVar21;
            dVar18 = dVar18 * dVar21 - dVar27;
            dVar27 = (dVar16 * dVar25 * dVar21 - in_dr10) - dVar27;
          }
          if (cVar35 == '\0') {
            in_dr6 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 2),SUB84(dVar25,0));
            dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),
                                      *(undefined4 *)(pdVar11 + 3));
            ar6 = (double *)((int)pdVar11 + 0x1c);
          }
          else {
            in_dr6 = pdVar11[2];
            dVar25 = pdVar11[3];
            ar6 = pdVar11 + 5;
          }
          uVar19 = (ulonglong)dVar18 & 0xffffffff00000000;
                    
          if (cVar34 == '\0') {
            fVar20 = SUB84(dVar27,0) * SUB84(dVar25,0) +
                     (float)((ulonglong)dVar27 >> 0x20) * (float)((ulonglong)dVar25 >> 0x20) +
                     SUB84(in_dr6,0) * 0.0 +
                     (float)(uVar19 >> 0x20) * (float)((ulonglong)in_dr6 >> 0x20);
          }
          in_dr4 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar35 == '\0') {
            in_dr4 = (double)CONCAT44((int)uVar19,SUB84(dVar25,0));
            in_dr0 = (double)CONCAT44((int)uVar19,SUB84(dVar27,0));
          }
          if (cVar34 == '\0') {
            in_dr4 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) * SUB84(dVar31,0),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * dVar31;
          }
          in_dr2 = (double)(uVar19 & 0xffffffff00000000);
          if (cVar34 == '\0') {
            bVar33 = 0.0 < (float)((ulonglong)in_dr4 >> 0x20);
          }
          else {
            bVar33 = in_dr2 < in_dr4;
          }
          iStack_34 = iVar6;
          if (!bVar33) {
            iStack_34 = 1;
            in_dr4 = (double)CONCAT44(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar4 = SUB84(in_dr6,0);
      uVar7 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar20 = (float)((ulonglong)in_dr4 >> 0x20);
      if (pdVar8 < unaff_r8) {
        dVar25 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar34 == '\0') {
          bVar33 = fVar20 < 0.0;
        }
        else {
          bVar33 = in_dr4 < dVar25;
        }
        if (bVar33) {
          *(undefined4 *)ar4_01 = 0xe0000000;
          CacheBlockWriteBack(ar4_01);
          uVar23 = _DAT_8c4c11b0;
          uVar4 = _DAT_8c4c11b8;
          if (cVar35 == '\0') {
            uVar23 = _DAT_8c4c11b4;
            uVar4 = _DAT_8c4c11bc;
          }
          uVar3 = float_to_color_u8(ar4_01,ar5,ar6,ar7);
          uVar24 = SUB84(dVar25,0);
          uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
          dVar16 = dVar29;
          dVar25 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar16 = (double)CONCAT44(uVar30,uVar23);
            dVar25 = in_xd2;
            dVar21 = (double)CONCAT44(uVar30,SUB84(in_dr0,0));
            uVar24 = uVar30;
          }
          *(undefined4 *)(ar4_01 + 5) = uVar3;
          if (cVar35 == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)(ar4_01 + 6),uVar24);
            ar5 = (double *)((int)ar4_01 + 0x34);
          }
          else {
            dVar18 = ar4_01[6];
            ar5 = ar4_01 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar18 >> 0x20);
            dVar18 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar21 >> 0x20) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = (undefined4)((ulonglong)dVar16 >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(ar4_01 + 4) = SUB84(dVar18,0);
            dVar18 = (double)CONCAT44(*(undefined4 *)ar5,uVar23);
            in_xd2 = dVar25;
            dVar25 = (double)CONCAT44(uVar23,SUB84(dVar21,0));
          }
          else {
            ar4_01[4] = dVar25;
            dVar18 = *ar5;
            in_xd2 = dVar16;
            dVar25 = dVar16;
          }
          pdVar10 = (double *)((int)ar4_01 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar18 >> 0x20);
            dVar18 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar25 >> 0x20) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = SUB84(dVar18,0);
          if (cVar35 == '\0') {
            *(undefined4 *)pdVar10 = uVar23;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar10);
LAB_8c246a84:
          if (cVar35 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_01,SUB84(dVar25,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_01 + 4),uVar23);
            pdVar10 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar10 = ar4_01 + 2;
          }
          if (cVar35 == '\0') {
            uVar23 = *(undefined4 *)(pdVar10 + 2);
            in_dr4 = (double)CONCAT44(uVar23,SUB84(dVar16,0));
            dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 0x14),uVar4);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar23;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar10[2];
            dVar25 = pdVar10[3];
            unaff_r8[3] = dVar25;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar4 = SUB84(dVar25,0);
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)ar4_01 = 0xf0000000;
          CacheBlockWriteBack(ar4_01);
          uVar23 = _DAT_8c4c11b0;
          uVar4 = _DAT_8c4c11b8;
          if (cVar35 == '\0') {
            uVar23 = _DAT_8c4c11b4;
            uVar4 = _DAT_8c4c11bc;
          }
          uVar3 = float_to_color_u8(ar4_01,ar5,ar6,ar7);
          uVar24 = SUB84(dVar25,0);
          uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
          dVar18 = dVar29;
          dVar25 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar18 = (double)CONCAT44(uVar30,uVar23);
            dVar25 = in_xd2;
            dVar21 = (double)CONCAT44(uVar30,SUB84(in_dr0,0));
            uVar24 = uVar30;
          }
          *(undefined4 *)(ar4_01 + 5) = uVar3;
          if (cVar35 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)(ar4_01 + 6),uVar24);
            ar5 = (double *)((int)ar4_01 + 0x34);
          }
          else {
            dVar16 = ar4_01[6];
            ar5 = ar4_01 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar21 >> 0x20) * fVar20 +
                                             SUB84(dVar16,0));
          }
          uVar23 = (undefined4)((ulonglong)dVar18 >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(ar4_01 + 4) = SUB84(dVar16,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)ar5,uVar23);
            in_xd2 = dVar25;
            dVar25 = (double)CONCAT44(uVar23,SUB84(dVar21,0));
          }
          else {
            ar4_01[4] = dVar25;
            dVar16 = *ar5;
            in_xd2 = dVar18;
            dVar25 = dVar18;
          }
          pdVar8 = (double *)((int)ar4_01 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar25 >> 0x20) * fVar20 +
                                             SUB84(dVar16,0));
          }
          if (cVar35 == '\0') {
            *(int *)pdVar8 = SUB84(dVar16,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar35 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_01,SUB84(dVar25,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_01 + 4),SUB84(dVar16,0));
            pdVar8 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar8 = ar4_01 + 2;
          }
          if (cVar35 == '\0') {
            uVar23 = *(undefined4 *)(pdVar8 + 2);
            in_dr4 = (double)CONCAT44(uVar23,SUB84(dVar18,0));
            dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 0x14),uVar4);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar8 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar23;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            dVar25 = pdVar8[3];
            unaff_r8[3] = dVar25;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar4 = SUB84(dVar25,0);
          unaff_r8 = unaff_r8 + 4;
          pdVar8 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar34 == '\0') {
          bVar33 = fVar20 < 0.0;
        }
        else {
          bVar33 = in_dr4 < in_dr2;
        }
        if (bVar33) {
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar4 = _DAT_8c4c11b0;
          if (cVar35 == '\0') {
            uVar4 = _DAT_8c4c11b4;
          }
          uVar24 = float_to_color_u8(ar4_00,ar5,ar6,ar7);
          uVar23 = SUB84(in_dr2,0);
          uVar3 = (undefined4)((ulonglong)dVar29 >> 0x20);
          dVar18 = dVar29;
          dVar25 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar18 = (double)CONCAT44(uVar3,uVar4);
            dVar25 = in_xd2;
            dVar21 = (double)CONCAT44(uVar3,SUB84(in_dr0,0));
            uVar23 = uVar3;
          }
          *(undefined4 *)(ar4_00 + 5) = uVar24;
          if (cVar35 == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 6),uVar23);
            pdVar10 = (double *)((int)ar4_00 + 0x34);
          }
          else {
            dVar16 = ar4_00[6];
            pdVar10 = ar4_00 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar21 >> 0x20) * fVar20 +
                                             SUB84(dVar16,0));
          }
          uVar4 = (undefined4)((ulonglong)dVar18 >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(ar4_00 + 4) = SUB84(dVar16,0);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar10,uVar4);
            dVar18 = dVar25;
            dVar25 = (double)CONCAT44(uVar4,SUB84(dVar21,0));
          }
          else {
            ar4_00[4] = dVar25;
            dVar16 = *pdVar10;
            dVar25 = dVar18;
          }
          pdVar9 = (double *)((int)ar4_00 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar25 >> 0x20) * fVar20 +
                                             SUB84(dVar16,0));
          }
          if (cVar35 == '\0') {
            *(int *)pdVar9 = SUB84(dVar16,0);
          }
          else {
            *pdVar9 = dVar18;
          }
          CacheBlockWriteBack(pdVar9);
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(dVar25,0));
            dVar21 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),SUB84(dVar16,0));
            pdVar9 = ar4_00 + 1;
          }
          else {
            dVar25 = *ar4_00;
            dVar21 = ar4_00[1];
            pdVar9 = ar4_00 + 2;
          }
          if (cVar35 == '\0') {
            uVar4 = *(undefined4 *)(pdVar9 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar4;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar21 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)dVar25 >> 0x20);
          }
          else {
            dVar16 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar16;
            unaff_r8[1] = dVar21;
            *unaff_r8 = dVar25;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)ar4_01 = 0xe0000000;
          CacheBlockWriteBack(ar4_01);
          uVar23 = _DAT_8c4c11b0;
          uVar4 = _DAT_8c4c11b8;
          if (cVar35 == '\0') {
            uVar23 = _DAT_8c4c11b4;
            uVar4 = _DAT_8c4c11bc;
          }
          uVar3 = float_to_color_u8(ar4_01,pdVar10,ar6,ar7);
          uVar24 = SUB84(dVar21,0);
          uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
          dVar16 = dVar29;
          in_xd2 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar16 = (double)CONCAT44(uVar30,uVar23);
            in_xd2 = dVar18;
            dVar21 = (double)CONCAT44(uVar30,SUB84(dVar25,0));
            uVar24 = uVar30;
          }
          *(undefined4 *)(ar4_01 + 5) = uVar3;
          if (cVar35 == '\0') {
            dVar25 = (double)CONCAT44(*(undefined4 *)(ar4_01 + 6),uVar24);
            ar5 = (double *)((int)ar4_01 + 0x34);
          }
          else {
            dVar25 = ar4_01[6];
            ar5 = ar4_01 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar25 >> 0x20);
            dVar25 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar21 >> 0x20) * fVar20 +
                                             SUB84(dVar25,0));
          }
          uVar23 = (undefined4)((ulonglong)dVar16 >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(ar4_01 + 4) = SUB84(dVar25,0);
            dVar18 = (double)CONCAT44(*(undefined4 *)ar5,uVar23);
            dVar25 = (double)CONCAT44(uVar23,SUB84(dVar21,0));
          }
          else {
            ar4_01[4] = in_xd2;
            dVar18 = *ar5;
            in_xd2 = dVar16;
            dVar25 = dVar16;
          }
          pdVar10 = (double *)((int)ar4_01 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = (float)((ulonglong)dVar18 >> 0x20);
            dVar18 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar25 >> 0x20) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = SUB84(dVar18,0);
          if (cVar35 == '\0') {
            *(undefined4 *)pdVar10 = uVar23;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar10);
          goto LAB_8c246a84;
        }
      }
      if (iStack_34 != 0) {
        ar5 = ar4_01;
        ar6 = pdVar11;
        FUN_8c23e4c8(ar4_00,ar4_01,pdVar11,ar7);
        pdVar8 = unaff_r8;
      }
      if (cVar35 == '\0') {
        uVar32 = CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(dVar31,0));
        in_dr6 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),uVar4);
      }
      else {
        uVar32 = *(undefined8 *)((int)pdVar11 + 4);
        in_dr6 = dVar31;
      }
      uVar4 = 8;
      if (cVar35 == '\0') {
        in_dr4 = (double)((ulonglong)dVar29 & 0xffffffff);
        dVar29 = (double)CONCAT44((int)((ulonglong)dVar29 >> 0x20),*(undefined4 *)(pdVar11 + 1));
      }
      else {
        in_xd12 = pdVar11[1];
      }
      iVar5 = iVar5 + -1;
      dVar31 = (double)CONCAT44((int)((ulonglong)uVar32 >> 0x20),-(float)uVar32);
      ar4_00 = ar4_01;
      ar4_01 = pdVar11;
    } while (iVar5 != 0);
    if (pdVar8 < unaff_r8) {
      *(undefined4 *)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      uVar24 = _DAT_8c4c11b0;
      uVar23 = _DAT_8c4c11b8;
      if (cVar35 == '\0') {
        uVar24 = _DAT_8c4c11b4;
        uVar23 = _DAT_8c4c11bc;
      }
      uVar4 = float_to_color_u8(pdVar11,ar5,ar6,ar7);
      uVar3 = SUB84(in_dr2,0);
      uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
      dVar21 = dVar29;
      dVar31 = dVar29;
      dVar25 = dVar29;
      if (cVar35 == '\0') {
        dVar21 = (double)CONCAT44(uVar30,uVar24);
        dVar31 = in_xd2;
        dVar25 = (double)CONCAT44(uVar30,SUB84(in_dr0,0));
        uVar3 = uVar30;
      }
      *(undefined4 *)(pdVar11 + 5) = uVar4;
      if (cVar35 == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 6),uVar3);
        ar5 = (double *)((int)pdVar11 + 0x34);
      }
      else {
        dVar18 = pdVar11[6];
        ar5 = pdVar11 + 7;
      }
      if (cVar34 == '\0') {
        fVar20 = (float)((ulonglong)dVar18 >> 0x20);
        dVar18 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar25 >> 0x20) * fVar20 +
                                         SUB84(dVar18,0));
      }
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (cVar35 == '\0') {
        *(int *)(pdVar11 + 4) = SUB84(dVar18,0);
        dVar18 = (double)CONCAT44(*(undefined4 *)ar5,uVar24);
        in_xd2 = dVar31;
        dVar31 = (double)CONCAT44(uVar24,SUB84(dVar25,0));
      }
      else {
        pdVar11[4] = dVar31;
        dVar18 = *ar5;
        in_xd2 = dVar21;
        dVar31 = dVar21;
      }
      pdVar8 = (double *)((int)pdVar11 + 0x24);
      if (cVar34 == '\0') {
        fVar20 = (float)((ulonglong)dVar18 >> 0x20);
        dVar18 = (double)CONCAT44(fVar20,(float)((ulonglong)dVar31 >> 0x20) * fVar20 +
                                         SUB84(dVar18,0));
      }
      if (cVar35 == '\0') {
        *(int *)pdVar8 = SUB84(dVar18,0);
      }
      else {
        *pdVar8 = in_xd2;
      }
      CacheBlockWriteBack(pdVar8);
      if (cVar35 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar31,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 4),SUB84(dVar18,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar35 == '\0') {
        uVar24 = *(undefined4 *)(pdVar11 + 2);
        in_dr4 = (double)CONCAT44(uVar24,SUB84(dVar21,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),uVar23);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar24;
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
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_3c;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_3c;
      return uVar4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c246756\n.set _FUN_8c246756, _FUN_8c246756_def\n");
