#include "../decls.h"
double * FUN_8c2306a0_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  double *ar4_00;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  double in_dr0;
  float fVar20;
  double dVar19;
  undefined8 in_dr4;
  double dVar21;
  float fVar22;
  double in_dr6;
  double dVar23;
  float fVar24;
  double in_dr10;
  double dVar25;
  undefined4 uVar26;
  double in_dr12;
  double dVar27;
  undefined4 uVar28;
  double in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd8;
  undefined8 in_xd10;
  bool bVar29;
  char cVar30;
  char cVar31;
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  double *pdVar18;
  
  cVar31 = '\0';
  cVar30 = '\0';
  uStack_20 = (int)((ulonglong)in_dr12 >> 0x20);
  uStack_24 = SUB84(in_dr12,0);
  uStack_28 = (int)((ulonglong)in_dr14 >> 0x20);
  uStack_2c = SUB84(in_dr14,0);
  puVar15 = auStack_34;
  auStack_34[0] = _DAT_8c4aa4f0;
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  dVar21 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),0x3f000000);
  do {
    iVar8 = (int)*ar4;
    fVar24 = 1.0;
    if ((*puVar15 & 0x80000000) != 0) {
      fVar24 = -1.0;
    }
    pdVar9 = (double *)(ar4[1] * 0x20 + ar5);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
      fVar24 = -fVar24;
    }
    iVar4 = iVar4 + iVar8;
    iVar8 = iVar8 + -2;
    iVar14 = 0;
    pdVar11 = (double *)(ar4[4] * 0x20 + ar5);
    if (cVar31 == '\0') {
      dVar25 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 3),SUB84(in_dr10,0));
    }
    else {
      dVar25 = pdVar9[3];
    }
    fVar20 = SUB84(dVar21,0);
    if (cVar30 == '\0') {
      dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar20 + fVar20,
                                SUB84(dVar25,0) * fVar20 + fVar20);
    }
    else {
      dVar25 = dVar25 * dVar21 * dVar21 + dVar21 + dVar21;
    }
    ar4 = ar4 + 7;
    if (cVar31 == '\0') {
      dVar27 = (double)CONCAT44(*(undefined4 *)(pdVar11 + 3),SUB84(in_dr12,0));
    }
    else {
      dVar27 = pdVar11[3];
    }
    if (cVar30 == '\0') {
      dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) * fVar20 + fVar20,
                                SUB84(dVar27,0) * fVar20 + fVar20);
    }
    else {
      dVar27 = dVar27 * dVar21 * dVar21 + dVar21 + dVar21;
    }
LAB_8c23072e:
    in_dr12 = dVar27;
    in_dr10 = dVar25;
    if (cVar31 == '\0') {
      dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr0,0));
      dVar27 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),SUB84(in_dr6,0));
      iVar10 = (int)pdVar9 + 0xc;
    }
    else {
      dVar25 = *(double *)((int)pdVar9 + 4);
      dVar27 = *(double *)((int)pdVar9 + 0xc);
      iVar10 = (int)pdVar9 + 0x14;
    }
    if (cVar31 == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)((int)pdVar11 + 4));
      pdVar11 = pdVar11 + 1;
    }
    else {
      pdVar11 = (double *)((int)pdVar11 + 0xc);
    }
    iVar13 = *ar4 * 0x20 + ar5;
    if (cVar31 == '\0') {
      dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),*(undefined4 *)pdVar11);
      pdVar12 = (double *)((int)pdVar11 + 4);
    }
    else {
      pdVar12 = pdVar11 + 1;
    }
    ar4_00 = (double *)(iVar10 + -0xc);
    if (cVar30 == '\0') {
      dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) - SUB84(dVar25,0),SUB84(dVar25,0)
                               );
      in_dr6 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - SUB84(dVar27,0),SUB84(dVar27,0)
                               );
    }
    else {
      dVar25 = dVar25 - dVar25;
      in_dr6 = dVar27 - dVar27;
    }
    pdVar9 = (double *)((int)pdVar12 + -0xc);
    if (cVar31 == '\0') {
      fVar20 = *(float *)(iVar13 + 4);
      dVar27 = (double)CONCAT44(*(undefined4 *)(iVar13 + 8),fVar24);
      iVar13 = iVar13 + 0xc;
    }
    else {
      fVar20 = (float)((ulonglong)*(undefined8 *)(iVar13 + 4) >> 0x20);
      dVar27 = *(double *)(iVar13 + 0xc);
      iVar13 = iVar13 + 0x14;
    }
    if (cVar30 == '\0') {
      dVar19 = (double)CONCAT44(fVar20 - SUB84(dVar25,0),0x3f800000);
    }
    else {
      dVar19 = (double)CONCAT44(fVar20,0x3f800000) - dVar25;
    }
    if (cVar31 == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)ar4_00);
    }
    if (cVar30 == '\0') {
      dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) - SUB84(in_dr6,0),SUB84(dVar27,0)
                               );
    }
    else {
      dVar27 = dVar27 - in_dr6;
    }
    if (cVar31 == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)pdVar9);
    }
    if (cVar30 == '\0') {
      dVar27 = (double)CONCAT44((float)((ulonglong)dVar27 >> 0x20) *
                                (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar27,0));
    }
    else {
      dVar27 = dVar27 * dVar25;
    }
    if (cVar31 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(iVar13 + -0xc),SUB84(dVar25,0));
    }
    else {
      in_dr0 = *(double *)(iVar13 + -0xc);
    }
    psVar5 = ar4 + 3;
    fVar24 = SUB84(in_dr0,0);
    fVar20 = SUB84(dVar19,0);
    if (cVar30 == '\0') {
      bVar29 = fVar24 < fVar20;
    }
    else {
      bVar29 = in_dr0 < dVar19;
    }
    if (cVar31 == '\0') {
      dVar25 = (double)CONCAT44(*(undefined4 *)(iVar13 + 0xc),SUB84(in_dr14,0));
    }
    else {
      dVar25 = *(double *)(iVar13 + 0xc);
    }
    pdVar11 = (double *)(iVar13 + -0xc);
    bVar1 = true;
    uVar26 = (undefined4)((ulonglong)in_dr10 >> 0x20);
    fVar22 = (float)((ulonglong)dVar21 >> 0x20);
    uVar28 = (undefined4)((ulonglong)in_dr12 >> 0x20);
    if (bVar29) {
LAB_8c2307e4:
      if (iVar14 != 0) {
        if (cVar31 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,fVar24);
          dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar12 + -1),SUB84(dVar19,0));
          dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + -4),SUB84(in_dr6,0));
        }
        else {
          in_dr0 = *pdVar9;
          dVar19 = *(double *)((int)pdVar12 + -4);
          dVar23 = *(double *)((int)pdVar12 + 4);
          pdVar12 = (double *)((int)pdVar12 + 0xc);
        }
        pdVar9 = pdVar12 + -3;
        if (cVar31 == '\0') {
          pdVar12 = (double *)((int)ar7 + 0x14);
          *(undefined4 *)pdVar12 = uVar28;
        }
        else {
          pdVar12 = ar7 + 2;
          *pdVar12 = in_dr12;
        }
        if (cVar30 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar22,SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar21;
        }
        if (cVar31 == '\0') {
          pdVar12 = (double *)((int)pdVar12 + -4);
          *(int *)pdVar12 = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          pdVar12 = pdVar12 + -1;
          *pdVar12 = dVar19;
        }
        if (cVar30 == '\0') {
          bVar29 = (float)((ulonglong)dVar23 >> 0x20) < fVar22;
        }
        else {
          bVar29 = dVar23 < dVar21;
        }
        if (cVar31 == '\0') {
          pdVar12 = (double *)((int)pdVar12 + -4);
          *(int *)pdVar12 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar12 = pdVar12 + -1;
          *pdVar12 = in_dr0;
        }
        in_dr6 = dVar23;
        if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
          in_dr6 = (double)CONCAT44(fVar22,SUB84(dVar23,0));
        }
        iVar3 = iVar3 + iVar14 + 1;
        *(undefined4 *)pdVar12 = 0xf0000000;
        iVar14 = 0;
        if (cVar31 == '\0') {
          *(int *)(pdVar12 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar12[3] = in_dr6;
        }
        ar7 = pdVar12 + 4;
      }
    }
    else {
      if (cVar30 == '\0') {
        bVar29 = SUB84(in_dr6,0) < fVar20;
        in_dr6 = (double)CONCAT44((float)((ulonglong)in_dr6 >> 0x20) *
                                  (float)((ulonglong)dVar19 >> 0x20),SUB84(in_dr6,0));
      }
      else {
        bVar29 = in_dr6 < dVar19;
        in_dr6 = in_dr6 * dVar19;
      }
      if (bVar29) goto LAB_8c2307e4;
      dVar19 = (double)((ulonglong)dVar19 & 0xffffffff);
      if (cVar30 == '\0') {
        bVar29 = (float)((ulonglong)in_dr0 >> 0x20) < fVar20;
        in_dr6 = (double)CONCAT44(((float)((ulonglong)in_dr6 >> 0x20) -
                                  (float)((ulonglong)dVar27 >> 0x20)) * SUB84(dVar27,0),
                                  SUB84(in_dr6,0));
      }
      else {
        bVar29 = in_dr0 < dVar19;
        in_dr6 = (in_dr6 - dVar27) * dVar27;
      }
      if (bVar29) goto LAB_8c2307e4;
      if (cVar30 == '\0') {
        bVar29 = (float)((ulonglong)in_dr6 >> 0x20) < 0.0;
      }
      else {
        bVar29 = in_dr6 < dVar19;
      }
      bVar1 = false;
      if (!bVar29) goto LAB_8c2307e4;
      if (iVar14 == 0) {
        if (cVar31 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)ar4_00,fVar24);
          dVar19 = (double)CONCAT44(*(undefined4 *)(iVar10 + -8),fVar20);
          dVar23 = (double)CONCAT44(*(undefined4 *)(iVar10 + -4),SUB84(in_dr6,0));
        }
        else {
          in_dr0 = *ar4_00;
          dVar19 = *(double *)(iVar10 + -4);
          dVar23 = *(double *)(iVar10 + 4);
          iVar10 = iVar10 + 0xc;
        }
        iVar14 = 1;
        ar4_00 = (double *)(iVar10 + -0x18);
        if (cVar31 == '\0') {
          pdVar7 = (double *)((int)ar7 + 0x14);
          *(undefined4 *)pdVar7 = uVar26;
        }
        else {
          pdVar7 = ar7 + 2;
          *pdVar7 = in_dr10;
        }
        if (cVar30 == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar22,SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar21;
        }
        if (cVar31 == '\0') {
          pdVar7 = (double *)((int)pdVar7 + -4);
          *(int *)pdVar7 = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = dVar19;
        }
        if (cVar30 == '\0') {
          bVar29 = (float)((ulonglong)dVar23 >> 0x20) < fVar22;
        }
        else {
          bVar29 = dVar23 < dVar21;
        }
        if (cVar31 == '\0') {
          pdVar7 = (double *)((int)pdVar7 + -4);
          *(int *)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = in_dr0;
        }
        in_dr6 = dVar23;
        if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
          in_dr6 = (double)CONCAT44(fVar22,SUB84(dVar23,0));
        }
        *(undefined4 *)pdVar7 = 0xe0000000;
        if (cVar31 == '\0') {
          *(int *)(pdVar7 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar7[3] = in_dr6;
        }
        ar7 = pdVar7 + 4;
      }
      if (cVar31 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
        dVar19 = (double)CONCAT44(*(undefined4 *)(pdVar12 + -1),SUB84(dVar19,0));
        dVar23 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + -4),SUB84(in_dr6,0));
      }
      else {
        in_dr0 = *pdVar9;
        dVar19 = *(double *)((int)pdVar12 + -4);
        dVar23 = *(double *)((int)pdVar12 + 4);
        pdVar12 = (double *)((int)pdVar12 + 0xc);
      }
      iVar14 = iVar14 + 1;
      pdVar9 = pdVar12 + -3;
      if (cVar31 == '\0') {
        pdVar12 = (double *)((int)ar7 + 0x14);
        *(undefined4 *)pdVar12 = uVar28;
      }
      else {
        pdVar12 = ar7 + 2;
        *pdVar12 = in_dr12;
      }
      if (cVar30 == '\0') {
        dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar22,SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 + dVar21;
      }
      if (cVar31 == '\0') {
        pdVar12 = (double *)((int)pdVar12 + -4);
        *(int *)pdVar12 = (int)((ulonglong)dVar19 >> 0x20);
      }
      else {
        pdVar12 = pdVar12 + -1;
        *pdVar12 = dVar19;
      }
      if (cVar30 == '\0') {
        bVar29 = (float)((ulonglong)dVar23 >> 0x20) < fVar22;
      }
      else {
        bVar29 = dVar23 < dVar21;
      }
      if (cVar31 == '\0') {
        pdVar12 = (double *)((int)pdVar12 + -4);
        *(int *)pdVar12 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar12 = pdVar12 + -1;
        *pdVar12 = in_dr0;
      }
      in_dr6 = dVar23;
      if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
        in_dr6 = (double)CONCAT44(fVar22,SUB84(dVar23,0));
      }
      *(undefined4 *)pdVar12 = 0xe0000000;
      if (cVar31 == '\0') {
        *(int *)(pdVar12 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar12[3] = in_dr6;
      }
      ar7 = pdVar12 + 4;
    }
    if (bVar1) {
      if (cVar31 == '\0') {
        dVar23 = (double)CONCAT44(*(undefined4 *)ar4_00,SUB84(in_dr0,0));
      }
      else {
        dVar23 = *ar4_00;
      }
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),0x3f800000);
      if (cVar30 == '\0') {
        bVar29 = 1.0 < (float)((ulonglong)dVar23 >> 0x20);
      }
      else {
        bVar29 = dVar19 < dVar23;
      }
      if (cVar31 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar23,0));
      }
      else {
        in_dr0 = *pdVar9;
      }
      if (!bVar29) {
        if (cVar30 == '\0') {
          bVar29 = 1.0 < (float)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          bVar29 = dVar19 < in_dr0;
        }
        if (cVar31 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr0,0));
        }
        else {
          in_dr0 = *pdVar11;
        }
        if (!bVar29) {
          if (cVar30 == '\0') {
            bVar29 = 1.0 < (float)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            bVar29 = dVar19 < in_dr0;
          }
          if (!bVar29) goto LAB_8c230818;
        }
      }
      *(uint *)((int)puVar15 + -4) = uVar2;
      *(int *)((int)puVar15 + -8) = iVar3;
      *(int *)((int)puVar15 + -0xc) = iVar4;
      *(short **)((int)puVar15 + -0x10) = psVar5;
      *(int *)((int)puVar15 + -0x14) = ar5;
      *(int *)((int)puVar15 + -0x18) = iVar6;
      if (cVar31 == '\0') {
        *(float *)((int)puVar15 + -0x1c) = fVar22;
        *(int *)((int)puVar15 + -0x20) = SUB84(dVar21,0);
        *(float *)((int)puVar15 + -0x24) = SUB84(dVar27,0);
        *(undefined4 *)((int)puVar15 + -0x28) = uVar26;
        puVar16 = (uint *)((int)puVar15 + -0x2c);
        *(int *)((int)puVar15 + -0x2c) = SUB84(in_dr10,0);
      }
      else {
        *(double *)((int)puVar15 + -0x20) = dVar21;
        *(undefined8 *)((int)puVar15 + -0x28) = in_xd4;
        *(undefined8 *)((int)puVar15 + -0x30) = in_xd8;
        *(double *)((int)puVar15 + -0x38) = in_dr10;
        puVar16 = (uint *)((int)puVar15 + -0x40);
        *(undefined8 *)((int)puVar15 + -0x40) = in_xd10;
        in_xd4 = in_xd8;
      }
      ar7 = (double *)FUN_8c231eac(ar4_00,pdVar9,pdVar11,ar7);
      if (cVar31 == '\0') {
        in_dr10 = (double)(ulonglong)*puVar16;
        dVar27 = (double)(ulonglong)puVar16[2];
        pdVar18 = (double *)(puVar16 + 3);
        puVar17 = puVar16 + 5;
      }
      else {
        in_xd10 = *(undefined8 *)puVar16;
        in_dr10 = *(double *)(puVar16 + 2);
        in_xd8 = *(undefined8 *)(puVar16 + 4);
        in_xd4 = *(undefined8 *)(puVar16 + 6);
        pdVar18 = (double *)(puVar16 + 8);
        puVar17 = puVar16 + 10;
      }
      dVar21 = *pdVar18;
      iVar6 = *puVar17;
      ar5 = puVar17[1];
      psVar5 = (short *)puVar17[2];
      iVar4 = puVar17[3];
      iVar3 = puVar17[4];
      uVar2 = puVar17[5];
      puVar15 = puVar17 + 6;
    }
LAB_8c230818:
    fVar24 = -SUB84(dVar27,0);
    fVar20 = SUB84(dVar21,0);
    if (cVar30 == '\0') {
      dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * fVar20,SUB84(dVar25,0));
    }
    else {
      dVar25 = dVar25 * dVar21;
    }
    ar4 = (short *)((int)psVar5 + iVar6);
    if (cVar30 == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) * fVar20);
    }
    else {
      dVar25 = dVar25 * dVar21;
    }
    iVar8 = iVar8 + -1;
    if (cVar30 == '\0') {
      in_dr14 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + fVar20,
                                 SUB84(dVar25,0) + fVar20);
    }
    else {
      in_dr14 = dVar25 + dVar21 + dVar21;
    }
    uVar26 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    if (iVar8 != 0) {
      dVar25 = in_dr12;
      dVar27 = in_dr14;
      if (cVar31 == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr10,0));
        dVar27 = (double)CONCAT44(uVar26,SUB84(in_dr12,0));
      }
      goto LAB_8c23072e;
    }
    if (iVar14 != 0) {
      if (cVar31 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(in_dr0,0));
        pdVar9 = (double *)(iVar13 + -8);
      }
      else {
        in_dr0 = *pdVar11;
        pdVar9 = (double *)(iVar13 + -4);
      }
      if (cVar31 == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(dVar19,0));
        dVar25 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),SUB84(in_dr6,0));
        pdVar9 = (double *)((int)ar7 + 0x14);
        *(undefined4 *)pdVar9 = uVar26;
      }
      else {
        dVar27 = *pdVar9;
        dVar25 = pdVar9[1];
        pdVar9 = ar7 + 2;
        *pdVar9 = in_dr14;
      }
      fVar24 = (float)((ulonglong)dVar21 >> 0x20);
      if (cVar30 == '\0') {
        dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + fVar24,SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 + dVar21;
      }
      if (cVar31 == '\0') {
        pdVar9 = (double *)((int)pdVar9 + -4);
        *(int *)pdVar9 = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        pdVar9 = pdVar9 + -1;
        *pdVar9 = dVar27;
      }
      if (cVar30 == '\0') {
        bVar29 = (float)((ulonglong)dVar25 >> 0x20) < fVar24;
      }
      else {
        bVar29 = dVar25 < dVar21;
      }
      if (cVar31 == '\0') {
        pdVar9 = (double *)((int)pdVar9 + -4);
        *(int *)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar9 = pdVar9 + -1;
        *pdVar9 = in_dr0;
      }
      in_dr6 = dVar25;
      if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
        in_dr6 = (double)CONCAT44(fVar24,SUB84(dVar25,0));
      }
      iVar3 = iVar3 + iVar14 + 1;
      *(undefined4 *)pdVar9 = 0xf0000000;
      if (cVar31 == '\0') {
        *(int *)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar9[3] = in_dr6;
      }
      ar7 = pdVar9 + 4;
    }
    uVar2 = uVar2 - 1;
    if (uVar2 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + iVar3;
      _DAT_8c4aa51c = _DAT_8c4aa51c + iVar4;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2306a0\n.set _FUN_8c2306a0, _FUN_8c2306a0_def\n");
