#include "../decls.h"
undefined4 FUN_8c24553e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  short *psVar12;
  double *ar5_00;
  double *ar6_00;
  double *unaff_r8;
  double *pdVar13;
  double *ar4_00;
  double *ar4_01;
  short *psVar14;
  short *psVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  float fVar19;
  double in_dr0;
  double dVar20;
  undefined4 uVar22;
  double in_dr2;
  double dVar23;
  float fVar25;
  ulonglong uVar24;
  float fVar26;
  double dVar27;
  double dVar28;
  double in_dr6;
  float fVar29;
  double dVar30;
  double in_dr10;
  float fVar31;
  undefined4 in_fr13;
  undefined4 uVar33;
  double dVar32;
  double in_dr14;
  undefined8 uVar34;
  double in_xd2;
  double in_xd12;
  bool bVar35;
  char cVar36;
  char cVar37;
  undefined4 in_stack_ffffffb8;
  int iStack_40;
  int iStack_34;
  uint uStack_30;
  float fVar21;
  
  cVar37 = '\0';
  cVar36 = '\0';
  dVar32 = (double)CONCAT44(0x3f800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffb8);
  iVar3 = _DAT_8c4aa510;
  if ((_DAT_8c4ab308 & 0x800000) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0x8000;
  }
  puVar16 = *(ushort **)(ar4 + 4);
  psVar14 = *(short **)(ar4 + 0x14);
  uStack_30 = (uint)*(ushort *)(ar4 + 2);
  iStack_40 = 0;
  do {
    uVar6 = SUB84(in_dr14,0);
    puVar17 = puVar16 + 1;
    uVar9 = (uint)*puVar16;
    uVar33 = (undefined4)((ulonglong)dVar32 >> 0x20);
    if (cVar37 == '\0') {
      uVar6 = uVar33;
    }
    if ((*puVar16 & 0x8000) != 0) {
      uVar9 = uVar9 & 0x7fff;
      uVar6 = 0xbf800000;
    }
    psVar15 = psVar14 + 2;
    iStack_40 = iStack_40 + uVar9;
    iVar7 = uVar9 - 2;
    puVar18 = puVar16 + 2;
    puVar16 = puVar16 + 3;
    ar4_00 = (double *)((uint)*puVar17 * 0x40 + iVar3);
    ar4_01 = (double *)((uint)*puVar18 * 0x40 + iVar3);
    if (cVar37 == '\0') {
      in_dr14 = (double)CONCAT44(*(undefined4 *)((int)ar4_01 + 4),uVar6);
      dVar27 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),*(undefined4 *)(ar4_00 + 1));
      dVar32 = (double)CONCAT44(uVar33,*(undefined4 *)(ar4_01 + 1));
      in_dr6 = (double)CONCAT44(0x3b800000,SUB84(in_dr6,0));
    }
    else {
      dVar27 = *(double *)((int)ar4_00 + 4);
      in_dr14 = *(double *)((int)ar4_01 + 4);
      in_xd12 = ar4_01[1];
      in_dr6 = -2.584224838040973e+250;
    }
    uVar6 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    fVar26 = (float)((ulonglong)in_dr6 >> 0x20);
    if (cVar36 == '\0') {
      dVar23 = (double)CONCAT44(uVar6,(float)(int)*psVar14 * fVar26);
    }
    else {
      dVar23 = (double)CONCAT44(uVar6,(float)(int)*psVar14) * in_dr6;
    }
    if (cVar37 == '\0') {
      *(int *)(ar4_00 + 4) = SUB84(dVar23,0);
    }
    else {
      ar4_00[4] = in_xd2;
    }
    uVar6 = (undefined4)((ulonglong)dVar23 >> 0x20);
    if (cVar36 == '\0') {
      dVar23 = (double)CONCAT44(uVar6,(float)(int)psVar14[1] * fVar26);
    }
    else {
      dVar23 = (double)CONCAT44(uVar6,(float)(int)psVar14[1]) * in_dr6;
    }
    if (cVar37 == '\0') {
      *(int *)((int)ar4_00 + 0x24) = SUB84(dVar23,0);
    }
    else {
      *(double *)((int)ar4_00 + 0x24) = in_xd2;
    }
    psVar12 = psVar14 + 3;
    psVar14 = psVar14 + 4;
    uVar6 = (undefined4)((ulonglong)dVar23 >> 0x20);
    if (cVar36 == '\0') {
      dVar23 = (double)CONCAT44(uVar6,(float)(int)*psVar15 * fVar26);
    }
    else {
      dVar23 = (double)CONCAT44(uVar6,(float)(int)*psVar15) * in_dr6;
    }
    if (cVar37 == '\0') {
      *(int *)(ar4_01 + 4) = SUB84(dVar23,0);
    }
    else {
      ar4_01[4] = in_xd2;
    }
    uVar6 = (undefined4)((ulonglong)dVar23 >> 0x20);
    if (cVar36 == '\0') {
      in_dr2 = (double)CONCAT44(uVar6,(float)(int)*psVar12 * fVar26);
    }
    else {
      in_dr2 = (double)CONCAT44(uVar6,(float)(int)*psVar12) * in_dr6;
    }
    pdVar10 = unaff_r8;
    if (cVar37 == '\0') {
      *(int *)((int)ar4_01 + 0x24) = SUB84(in_dr2,0);
    }
    else {
      *(double *)((int)ar4_01 + 0x24) = in_xd2;
    }
    do {
      uVar6 = SUB84(in_dr6,0);
      uVar1 = *puVar16;
      puVar16 = puVar16 + 1;
      pdVar13 = (double *)((uint)uVar1 * 0x40 + iVar3);
      iStack_34 = 0;
      if (cVar37 == '\0') {
        uVar6 = 0x3b800000;
      }
      uVar33 = (undefined4)((ulonglong)dVar32 >> 0x20);
      in_dr6 = dVar32;
      if (cVar37 == '\0') {
        in_dr6 = (double)CONCAT44(uVar33,uVar6);
      }
      ar6_00 = (double *)(*(uint *)ar4_00 & *(uint *)ar4_01 & *(uint *)pdVar13 & 0x3f);
      sVar2 = *psVar14;
      psVar15 = psVar14 + 1;
      psVar14 = psVar14 + 2;
      uVar6 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      fVar26 = SUB84(in_dr6,0);
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44(uVar6,(float)(int)sVar2 * fVar26);
      }
      else {
        dVar23 = (double)CONCAT44(uVar6,(float)(int)sVar2) * in_dr6;
      }
      if (cVar37 == '\0') {
        *(int *)(pdVar13 + 4) = SUB84(dVar23,0);
      }
      else {
        pdVar13[4] = in_xd2;
      }
      ar5_00 = (double *)((int)pdVar13 + 0x24);
      uVar6 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (cVar36 == '\0') {
        dVar23 = (double)CONCAT44(uVar6,(float)(int)*psVar15 * fVar26);
      }
      else {
        dVar23 = (double)CONCAT44(uVar6,(float)(int)*psVar15) * in_dr6;
      }
      if (cVar37 == '\0') {
        *(int *)ar5_00 = SUB84(dVar23,0);
      }
      else {
        *ar5_00 = in_xd2;
      }
      if (ar6_00 == (double *)0x0) {
        if (((*(uint *)ar4_00 | *(uint *)ar4_01 | *(uint *)pdVar13) & 1) == 0) {
          fVar25 = (float)((ulonglong)in_dr14 >> 0x20);
          if (cVar37 == '\0') {
            dVar23 = (double)CONCAT44(*(undefined4 *)(pdVar13 + 1),fVar25);
          }
          else {
            dVar23 = pdVar13[1];
            in_xd2 = in_dr14;
          }
          if (cVar36 == '\0') {
            dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) - SUB84(dVar32,0),
                                      SUB84(dVar23,0) - (float)((ulonglong)dVar27 >> 0x20));
          }
          else {
            dVar23 = (dVar23 - dVar27) - dVar32;
          }
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)((int)pdVar13 + 4));
          }
          if (cVar36 == '\0') {
            in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar25);
            fVar25 = SUB84(dVar23,0) * (float)((ulonglong)dVar23 >> 0x20);
          }
          else {
            in_dr0 = in_dr0 - in_dr14;
            fVar25 = SUB84(dVar23 * dVar23,0);
          }
          dVar23 = in_xd12;
          if (cVar37 == '\0') {
            dVar23 = (double)CONCAT44(SUB84(dVar32,0),fVar25);
          }
          if (cVar36 == '\0') {
            fVar25 = ((float)((ulonglong)dVar23 >> 0x20) - SUB84(dVar27,0)) * SUB84(in_dr0,0);
            dVar23 = (double)CONCAT44(fVar25,SUB84(dVar23,0) - fVar25);
          }
          else {
            dVar23 = (dVar23 - dVar27) * in_dr0;
            dVar23 = dVar23 - dVar23;
          }
          in_dr6 = in_xd2;
          if (cVar37 == '\0') {
            in_dr6 = (double)CONCAT44(SUB84(dVar23,0),fVar26);
          }
          if (cVar36 == '\0') {
            in_dr6 = (double)CONCAT44((float)((ulonglong)in_dr6 >> 0x20) * SUB84(in_dr14,0),
                                      SUB84(in_dr6,0));
          }
          else {
            in_dr6 = in_dr6 * in_dr14;
          }
          dVar23 = (double)((ulonglong)dVar23 & 0xffffffff00000000);
          if (cVar36 == '\0') {
            bVar35 = 0.0 < (float)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            bVar35 = dVar23 < in_dr6;
          }
          if ((bVar35) && (iVar8 != 0)) {
            if (cVar36 == '\0') {
              in_dr6 = (double)CONCAT44(0xbf800000,SUB84(in_dr6,0));
            }
            else {
              in_dr6 = -(double)CONCAT44(0x3f800000,SUB84(in_dr6,0));
            }
          }
        }
        else {
          if (cVar37 == '\0') {
            fVar21 = *(float *)(ar4_01 + 2);
            fVar19 = *(float *)((int)ar4_01 + 0x14);
            dVar20 = (double)CONCAT44(fVar21,fVar19);
            fVar25 = *(float *)(ar4_01 + 3);
            dVar28 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 2),
                                      *(undefined4 *)((int)ar4_00 + 0x14));
            dVar27 = (double)CONCAT44(*(undefined4 *)(ar4_00 + 3),fVar26);
            ar5_00 = (double *)((int)ar4_00 + 0x1c);
            in_dr10 = (double)CONCAT44(fVar25,SUB84(in_dr10,0));
            dVar23 = (double)CONCAT44(fVar25,SUB84(dVar23,0));
          }
          else {
            dVar20 = ar4_01[2];
            in_dr10 = ar4_01[4];
            dVar28 = ar4_00[2];
            dVar27 = ar4_00[4];
            ar5_00 = ar4_00 + 5;
            fVar21 = (float)((ulonglong)dVar20 >> 0x20);
            fVar19 = SUB84(dVar20,0);
            fVar25 = (float)((ulonglong)in_dr10 >> 0x20);
            dVar23 = in_dr10;
          }
          fVar29 = (float)((ulonglong)dVar27 >> 0x20);
          fVar26 = (float)((ulonglong)dVar28 >> 0x20);
          if (cVar36 == '\0') {
            fVar31 = (float)((ulonglong)in_dr10 >> 0x20) * fVar26;
            in_dr10 = (double)CONCAT44(fVar31,SUB84(in_dr10,0));
            dVar23 = (double)((ulonglong)(uint)(fVar25 * SUB84(dVar28,0) - SUB84(dVar20,0) * fVar29)
                             << 0x20);
            dVar30 = (double)CONCAT44(fVar21 * fVar29 - fVar31,
                                      fVar19 * fVar26 -
                                      (float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar28,0));
          }
          else {
            in_dr10 = in_dr10 * dVar28;
            dVar30 = dVar20 * dVar27 * dVar28;
            dVar23 = dVar23 * dVar28 - dVar30;
            dVar30 = (dVar20 * dVar27 * dVar28 - in_dr10) - dVar30;
          }
          if (cVar37 == '\0') {
            dVar28 = (double)CONCAT44(*(undefined4 *)(pdVar13 + 2),SUB84(dVar27,0));
            dVar27 = (double)CONCAT44(*(undefined4 *)((int)pdVar13 + 0x14),
                                      *(undefined4 *)(pdVar13 + 3));
            ar6_00 = (double *)((int)pdVar13 + 0x1c);
          }
          else {
            dVar28 = pdVar13[2];
            dVar27 = pdVar13[3];
            ar6_00 = pdVar13 + 5;
          }
          uVar24 = (ulonglong)dVar23 & 0xffffffff00000000;
                    
          if (cVar36 == '\0') {
            fVar26 = SUB84(dVar30,0) * SUB84(dVar27,0) +
                     (float)((ulonglong)dVar30 >> 0x20) * (float)((ulonglong)dVar27 >> 0x20) +
                     SUB84(dVar28,0) * 0.0 +
                     (float)(uVar24 >> 0x20) * (float)((ulonglong)dVar28 >> 0x20);
          }
          dVar20 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar37 == '\0') {
            dVar20 = (double)CONCAT44((int)uVar24,SUB84(dVar28,0));
            in_dr0 = (double)CONCAT44((int)uVar24,SUB84(dVar30,0));
          }
          if (cVar36 == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(in_dr14,0),
                                      SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 * in_dr14;
          }
          dVar23 = (double)(uVar24 & 0xffffffff00000000);
          if (cVar36 == '\0') {
            bVar35 = 0.0 < (float)((ulonglong)dVar20 >> 0x20);
          }
          else {
            bVar35 = dVar23 < dVar20;
          }
          in_dr6 = dVar20;
          iStack_34 = iVar8;
          if ((!bVar35) && (iStack_34 = 1, in_dr6 = dVar32, cVar37 == '\0')) {
            in_dr6 = (double)CONCAT44(uVar33,SUB84(dVar20,0));
          }
        }
      }
      uVar6 = SUB84(dVar27,0);
      uVar9 = (uint)((ulonglong)dVar23 >> 0x20);
      fVar26 = (float)((ulonglong)in_dr6 >> 0x20);
      if (pdVar10 < unaff_r8) {
        dVar27 = (double)((ulonglong)uVar9 << 0x20);
        if (cVar36 == '\0') {
          bVar35 = fVar26 < 0.0;
        }
        else {
          bVar35 = in_dr6 < dVar27;
        }
        if (bVar35) {
LAB_8c2457f2:
          uVar22 = SUB84(dVar27,0);
          uVar4 = SUB84(in_dr0,0);
          *(undefined4 *)ar4_01 = 0xe0000000;
          CacheBlockWriteBack(ar4_01);
          uVar33 = _DAT_8c4c11b0;
          uVar6 = _DAT_8c4c11b8;
          if (cVar37 == '\0') {
            uVar33 = _DAT_8c4c11b4;
            uVar6 = _DAT_8c4c11bc;
          }
          uVar5 = float_to_color_u8(ar4_01,ar5_00,ar6_00,ar7);
          *(undefined4 *)(ar4_01 + 5) = uVar5;
          CacheBlockWriteBack(ar4_01 + 4);
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_01,uVar4);
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_01 + 4),uVar22);
            pdVar11 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar11 = ar4_01 + 2;
          }
          if (cVar37 == '\0') {
            uVar4 = *(undefined4 *)(pdVar11 + 2);
            dVar27 = (double)CONCAT44(uVar4,uVar33);
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + 0x14),uVar6);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar4;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar27 = pdVar11[2];
            in_dr6 = pdVar11[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar27;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar6 = SUB84(dVar27,0);
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)ar4_01 = 0xf0000000;
          CacheBlockWriteBack(ar4_01);
          uVar33 = _DAT_8c4c11b0;
          uVar6 = _DAT_8c4c11b8;
          if (cVar37 == '\0') {
            uVar33 = _DAT_8c4c11b4;
            uVar6 = _DAT_8c4c11bc;
          }
          uVar4 = float_to_color_u8(ar4_01,ar5_00,ar6_00,ar7);
          *(undefined4 *)(ar4_01 + 5) = uVar4;
          CacheBlockWriteBack(ar4_01 + 4);
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_01,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar4_01 + 4),SUB84(dVar27,0));
            pdVar10 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar10 = ar4_01 + 2;
          }
          if (cVar37 == '\0') {
            uVar4 = *(undefined4 *)(pdVar10 + 2);
            dVar27 = (double)CONCAT44(uVar4,uVar33);
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar10 + 0x14),uVar6);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar10 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar4;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar27 = pdVar10[2];
            in_dr6 = pdVar10[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar27;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar6 = SUB84(dVar27,0);
          unaff_r8 = unaff_r8 + 4;
          pdVar10 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar9 << 0x20);
        if (cVar36 == '\0') {
          bVar35 = fVar26 < 0.0;
        }
        else {
          bVar35 = in_dr6 < in_dr2;
        }
        if (bVar35) {
          *(undefined4 *)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar6 = float_to_color_u8(ar4_00,ar5_00,ar6_00,ar7);
          *(undefined4 *)(ar4_00 + 5) = uVar6;
          CacheBlockWriteBack(ar4_00 + 4);
          if (cVar37 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(in_dr0,0));
            dVar27 = (double)CONCAT44(*(undefined4 *)((int)ar4_00 + 4),SUB84(in_dr2,0));
            pdVar11 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar27 = ar4_00[1];
            pdVar11 = ar4_00 + 2;
          }
          if (cVar37 == '\0') {
            uVar6 = *(undefined4 *)(pdVar11 + 2);
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar11 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar6;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar27 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar23 = pdVar11[2];
            unaff_r8[3] = pdVar11[3];
            unaff_r8[2] = dVar23;
            unaff_r8[1] = dVar27;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          goto LAB_8c2457f2;
        }
      }
      if (iStack_34 != 0) {
        ar5_00 = ar4_01;
        ar6_00 = pdVar13;
        FUN_8c23e228(ar4_00,ar4_01,pdVar13,ar7);
        pdVar10 = unaff_r8;
      }
      if (cVar37 == '\0') {
        uVar34 = CONCAT44(*(undefined4 *)((int)pdVar13 + 4),SUB84(in_dr14,0));
        dVar27 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar6);
      }
      else {
        uVar34 = *(undefined8 *)((int)pdVar13 + 4);
        dVar27 = in_dr14;
      }
      uVar6 = 8;
      if (cVar37 == '\0') {
        dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar32,0));
        dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)(pdVar13 + 1));
      }
      else {
        in_xd12 = pdVar13[1];
      }
      iVar7 = iVar7 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)uVar34 >> 0x20),-(float)uVar34);
      ar4_00 = ar4_01;
      ar4_01 = pdVar13;
    } while (iVar7 != 0);
    if (pdVar10 < unaff_r8) {
      *(undefined4 *)pdVar13 = 0xf0000000;
      CacheBlockWriteBack(pdVar13);
      uVar33 = _DAT_8c4c11b8;
      if (cVar37 == '\0') {
        uVar33 = _DAT_8c4c11bc;
      }
      uVar6 = float_to_color_u8(pdVar13,ar5_00,ar6_00,ar7);
      *(undefined4 *)(pdVar13 + 5) = uVar6;
      CacheBlockWriteBack(pdVar13 + 4);
      if (cVar37 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar13 + 4),SUB84(in_dr2,0));
        pdVar13 = pdVar13 + 1;
      }
      else {
        in_dr0 = *pdVar13;
        in_dr2 = pdVar13[1];
        pdVar13 = pdVar13 + 2;
      }
      if (cVar37 == '\0') {
        uVar4 = *(undefined4 *)(pdVar13 + 2);
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar13 + 0x14),uVar33);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar13 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar4;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar27 = pdVar13[2];
        in_dr6 = pdVar13[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = dVar27;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    uStack_30 = uStack_30 - 1;
    if (uStack_30 == 0) {
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_40;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_40;
      return uVar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c24553e\n.set _FUN_8c24553e, _FUN_8c24553e_def\n");
