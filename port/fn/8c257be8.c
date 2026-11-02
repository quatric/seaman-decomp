#include "../decls.h"
int FUN_8c257be8_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double *pdVar2;
  int in_r2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  byte bVar10;
  uint uVar12;
  double *pdVar13;
  undefined8 *puVar14;
  undefined8 *unaff_r14;
  undefined8 *puVar15;
  double dVar16;
  float in_fr3;
  double dVar17;
  double dVar19;
  double in_dr6;
  double dVar20;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar28;
  double dVar27;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar32;
  undefined8 uVar31;
  double in_xd0;
  double in_xd4;
  undefined8 in_xd6;
  double in_xd10;
  double dVar33;
  undefined8 in_xd12;
  double in_xd14;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dStack_80;
  int iStack_78;
  undefined1 auStack_74 [8];
  float fStack_6c;
  undefined8 auStack_68 [7];
  double dStack_30;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  byte bVar11;
  float fVar18;
  float fVar21;
  double dVar23;
  
  puVar8 = auStack_68;
  if (in_FPSCR_SZ == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),_DAT_8c4aa4a8);
    dVar30 = (double)CONCAT44(_DAT_8c4aa4dc,_DAT_8c4aa4e0);
    dVar19 = (double)CONCAT44(_DAT_8c4aa4b4,_DAT_8c4aa4b8);
    fVar28 = _DAT_8c4aa4d4;
  }
  else {
    in_xd6 = CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
    dVar30 = (double)CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
    dVar19 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
    fVar28 = _DAT_8c4aa4d8;
    in_xd10 = _DAT_8c4aa4bc;
  }
  if (in_FPSCR_PR == '\0') {
    dStack_80 = (double)CONCAT44(fVar28,1.0 / fVar28);
  }
  else {
    dStack_80 = (double)CONCAT44(fVar28,0x3f800000) / (double)CONCAT44(fVar28,0x3f800000);
  }
  fVar28 = SUB84(dVar19,0);
  fVar25 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    stack0xffffff90 = (double)CONCAT44(fVar28,(*(uint*)((uchar*)&auStack_74+4)));
    pdVar2 = (double *)auStack_74;
  }
  else {
    stack0xffffff90 = in_xd10;
    pdVar2 = &dStack_80;
  }
  if (in_FPSCR_PR == '\0') {
    fVar24 = (float)((ulonglong)dVar30 >> 0x20) * SUB84(in_dr6,0);
    fVar22 = SUB84(dVar30,0) * SUB84(in_dr6,0);
    dVar30 = (double)CONCAT44(1.0 / fVar24,1.0 / fVar22);
    dVar23 = (double)CONCAT44(fVar24 * SUB84(dStack_80,0),fVar22 * SUB84(dStack_80,0));
  }
  else {
    dVar23 = dVar30 * in_dr6 * in_dr6;
    dVar30 = (0.007812501848093234 / dVar23) / dVar23;
    dVar23 = dVar23 * dStack_80 * dStack_80;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(ar5 + 100),*(undefined4 *)(ar5 + 0x68));
    in_fr3 = *(float *)(ar5 + 0x6c);
    iVar4 = ar5 + 0x70;
  }
  else {
    dVar16 = *(double *)(ar5 + 100);
    in_xd0 = *(double *)(ar5 + 0x6c);
    iVar4 = ar5 + 0x7c;
  }
  fVar24 = (float)((ulonglong)dVar30 >> 0x20);
  fVar22 = SUB84(dVar30,0);
  if (in_FPSCR_PR == '\0') {
    fVar18 = 1.0 / in_fr3;
    dVar17 = (double)CONCAT44(fVar18,in_fr3);
    dStack_30 = (double)CONCAT44(((float)((ulonglong)dVar16 >> 0x20) - fVar25) * fVar24 * fVar18,
                                 (SUB84(dVar16,0) - fVar28) * fVar22 * fVar18);
  }
  else {
    dVar17 = (double)CONCAT44(0x3f800000,in_fr3) / (double)CONCAT44(0x3f800000,in_fr3);
    fVar18 = (float)((ulonglong)dVar17 >> 0x20);
    dStack_30 = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = (double)CONCAT44(fVar18,(undefined4)uStack_20);
    pdVar6 = (double *)(auStack_28 + 4);
    (*(uint*)((uchar*)&auStack_28+4)) = (int)((ulonglong)dStack_30 >> 0x20);
    dVar16 = (double)CONCAT44(*(undefined4 *)(iVar4 + -0x2c),*(undefined4 *)(iVar4 + -0x28));
    in_dr6 = (double)(ulonglong)*(uint *)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;
  }
  else {
    uStack_20 = dVar17;
    *(ulonglong *)auStack_28 = (ulonglong)in_xd0;
    pdVar6 = &dStack_30;
    dVar16 = *(double *)(iVar4 + -0x2c);
    in_xd4 = *(double *)(iVar4 + -0x24);
    in_xd6 = *(undefined8 *)(iVar4 + -0x1c);
    iVar4 = iVar4 + -0x14;
  }
  fVar18 = SUB84(in_dr6,0);
  if (in_FPSCR_PR == '\0') {
    fVar21 = 1.0 / fVar18;
    dVar20 = (double)CONCAT44(fVar21,fVar18);
    dVar16 = (double)CONCAT44(((float)((ulonglong)dVar16 >> 0x20) - fVar25) * fVar24 * fVar21,
                              (SUB84(dVar16,0) - fVar28) * fVar22 * fVar21);
  }
  else {
    dVar20 = (double)CONCAT44(0x3f800000,fVar18) / (double)CONCAT44(0x3f800000,fVar18);
    fVar21 = (float)((ulonglong)dVar20 >> 0x20);
    dVar16 = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar20 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)pdVar6 + -4) = fVar21;
    *(int *)(pdVar6 + -1) = SUB84(dVar16,0);
    pdVar6 = (double *)((int)pdVar6 + -0xc);
    *(int *)pdVar6 = (int)((ulonglong)dVar16 >> 0x20);
    dVar16 = (double)CONCAT44(*(undefined4 *)(iVar4 + -0x2c),*(undefined4 *)(iVar4 + -0x28));
    dVar17 = (double)(ulonglong)*(uint *)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;
  }
  else {
    pdVar6[-1] = dVar20;
    pdVar6[-2] = in_xd4;
    pdVar6 = pdVar6 + -3;
    *pdVar6 = dVar16;
    dVar16 = *(double *)(iVar4 + -0x2c);
    in_xd0 = *(double *)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x14;
  }
  fVar18 = SUB84(dVar17,0);
  if (in_FPSCR_PR == '\0') {
    fVar21 = 1.0 / fVar18;
    dVar17 = (double)CONCAT44(fVar21,fVar18);
    dVar16 = (double)CONCAT44(((float)((ulonglong)dVar16 >> 0x20) - fVar25) * fVar24 * fVar21,
                              (SUB84(dVar16,0) - fVar28) * fVar22 * fVar21);
  }
  else {
    dVar17 = (double)CONCAT44(0x3f800000,fVar18) / (double)CONCAT44(0x3f800000,fVar18);
    fVar21 = (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)pdVar6 + -4) = fVar21;
    *(int *)(pdVar6 + -1) = SUB84(dVar16,0);
    pdVar6 = (double *)((int)pdVar6 + -0xc);
    *(int *)pdVar6 = (int)((ulonglong)dVar16 >> 0x20);
    dVar16 = (double)CONCAT44(*(undefined4 *)(iVar4 + -0x2c),*(undefined4 *)(iVar4 + -0x28));
    dVar20 = (double)(ulonglong)*(uint *)(iVar4 + -0x24);
    iVar4 = iVar4 + -0x20;
  }
  else {
    pdVar6[-1] = dVar17;
    pdVar6[-2] = in_xd0;
    pdVar6 = pdVar6 + -3;
    *pdVar6 = dVar16;
    dVar16 = *(double *)(iVar4 + -0x2c);
    in_xd4 = *(double *)(iVar4 + -0x24);
    in_xd6 = *(undefined8 *)(iVar4 + -0x1c);
    iVar4 = iVar4 + -0x14;
  }
  fVar18 = SUB84(dVar20,0);
  if (in_FPSCR_PR == '\0') {
    fVar21 = 1.0 / fVar18;
    dVar20 = (double)CONCAT44(fVar21,fVar18);
    dVar30 = (double)CONCAT44(((float)((ulonglong)dVar16 >> 0x20) - fVar25) * fVar24 * fVar21,
                              (SUB84(dVar16,0) - fVar28) * fVar22 * fVar21);
  }
  else {
    dVar20 = (double)CONCAT44(0x3f800000,fVar18) / (double)CONCAT44(0x3f800000,fVar18);
    fVar21 = (float)((ulonglong)dVar20 >> 0x20);
    dVar30 = ((dVar16 - dVar19) - dVar19) * dVar30 * dVar30 * dVar20 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)pdVar6 + -4) = fVar21;
    *(int *)(pdVar6 + -1) = SUB84(dVar30,0);
    pdVar6 = (double *)((int)pdVar6 + -0xc);
    *(int *)pdVar6 = (int)((ulonglong)dVar30 >> 0x20);
  }
  else {
    pdVar6[-1] = dVar20;
    pdVar6[-2] = in_xd4;
    pdVar6 = pdVar6 + -3;
    *pdVar6 = dVar30;
  }
  puVar5 = (undefined8 *)(iVar4 + -0x10);
  iStack_78 = 2;
  uVar12 = ar4 >> 1;
  pdVar13 = pdVar6;
  do {
    pdVar7 = pdVar13 + 3;
    puVar14 = puVar5 + 8;
    bVar10 = (&DAT_8c271df8)[uVar12];
    uVar3 = 0xe0000000;
    iVar1 = 0;
    iVar9 = 3;
    puVar15 = unaff_r14;
    do {
      bVar11 = (char)bVar10 >> 1;
      if ((bVar10 & 1) != 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar19,0));
          pdVar2 = (double *)((int)pdVar2 + 4);
          dVar30 = (double)CONCAT44(*(undefined4 *)pdVar7,*(undefined4 *)((int)pdVar7 + 4));
          dVar17 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),SUB84(dVar17,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar13,*(undefined4 *)((int)pdVar13 + 4));
          dVar20 = (double)CONCAT44(*(undefined4 *)(pdVar13 + 1),SUB84(dVar20,0));
          pdVar13 = (double *)((int)pdVar13 + 0xc);
        }
        else {
          dVar16 = *pdVar2;
          pdVar2 = pdVar2 + 1;
          dVar30 = *pdVar7;
          dVar17 = pdVar7[2];
          dVar19 = *pdVar13;
          in_xd4 = pdVar13[1];
          dVar20 = pdVar13[2];
          pdVar13 = pdVar13 + 3;
        }
        fVar28 = (float)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar28,SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar17;
        }
        uVar26 = (undefined4)((ulonglong)dVar20 >> 0x20);
        dVar33 = dVar20;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar26);
          dVar33 = in_xd10;
        }
        if (in_FPSCR_PR == '\0') {
          fVar25 = SUB84(dVar16,0) - fVar28;
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) / fVar25,fVar25);
        }
        else {
          dVar16 = (dVar16 - dVar17) / (dVar16 - dVar17);
        }
        dVar27 = in_xd4;
        in_xd10 = dVar19;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                    (int)((ulonglong)dVar19 >> 0x20));
          dVar27 = (double)CONCAT44(SUB84(dVar19,0),SUB84(dStack_80,0));
          in_xd10 = dVar33;
        }
        fVar25 = (float)((ulonglong)dVar30 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar22 = (float)((ulonglong)dVar16 >> 0x20);
          dVar19 = (double)CONCAT44(fVar22,((SUB84(dVar16,0) - fVar25) * fVar22 + fVar25) *
                                           (float)((ulonglong)dVar23 >> 0x20));
          dStack_80 = (double)CONCAT44((((float)((ulonglong)dVar27 >> 0x20) - SUB84(dVar30,0)) *
                                        fVar22 + SUB84(dVar30,0)) * SUB84(dVar23,0),SUB84(dVar27,0))
          ;
        }
        else {
          dVar16 = (dVar16 - dVar30) * (dVar16 - dVar30);
          dVar19 = (dVar16 + dVar30) * dVar23;
          dStack_80 = ((dVar27 - dVar30) * dVar16 + dVar30) * dVar23;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar30 = (double)CONCAT44(*(undefined4 *)pdVar2,*(undefined4 *)((int)pdVar2 + 4));
          pdVar2 = pdVar2 + 1;
        }
        else {
          dVar30 = *pdVar2;
          in_xd14 = pdVar2[1];
          pdVar2 = pdVar2 + 2;
        }
        pdVar2 = (double *)((int)pdVar2 + -0xc);
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                    SUB84(dVar19,0) + (float)((ulonglong)dVar30 >> 0x20));
          dStack_80 = (double)CONCAT44((float)((ulonglong)dStack_80 >> 0x20) + SUB84(dVar30,0),
                                       SUB84(dStack_80,0));
        }
        else {
          dVar19 = dVar19 + dVar30;
          dStack_80 = dStack_80 + dVar30;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(fVar28,*(undefined4 *)(puVar14 + 2));
          dVar20 = (double)CONCAT44(uVar26,*(undefined4 *)((int)puVar14 + 0x14));
          dVar30 = (double)CONCAT44(*(undefined4 *)(puVar5 + 2),*(undefined4 *)((int)puVar5 + 0x14))
          ;
          puVar5 = puVar5 + 3;
        }
        else {
          in_xd6 = puVar14[3];
          dVar30 = (double)puVar5[2];
          in_xd14 = (double)puVar5[3];
          puVar5 = puVar5 + 4;
        }
        puVar5 = puVar5 + -3;
        fVar28 = (float)((ulonglong)dVar19 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar30 = (double)CONCAT44(((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar17,0)) * fVar28
                                    + SUB84(dVar17,0),
                                    (SUB84(dVar30,0) - SUB84(dVar20,0)) * fVar28 + SUB84(dVar20,0));
        }
        else {
          dVar30 = ((dVar30 - dVar17) - dVar20) * dVar19 * dVar19 + dVar17 + dVar20;
        }
        iVar1 = iVar1 + 1;
        uVar26 = SUB84(dVar19,0);
        uVar32 = (undefined4)((ulonglong)dVar30 >> 0x20);
        uVar29 = (undefined4)((ulonglong)dStack_80 >> 0x20);
        pdVar13 = (double *)((int)pdVar13 + -0xc);
        if (iVar1 == 3) {
          if ((char)bVar11 < '\0') {
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar8 + 0x14) = SUB84(dVar30,0);
              *(undefined4 *)(puVar8 + 2) = uVar32;
              *(int *)((int)puVar8 + 0xc) = SUB84(dStack_80,0);
              *(undefined4 *)(puVar8 + 1) = uVar29;
              pdVar7 = (double *)((int)puVar8 + 4);
              *(undefined4 *)pdVar7 = uVar26;
            }
            else {
              puVar8[2] = in_xd14;
              puVar8[1] = dVar30;
              *puVar8 = in_xd12;
              puVar8[-1] = dStack_80;
              pdVar7 = (double *)(puVar8 + -2);
              *pdVar7 = in_xd10;
            }
            puVar8 = (undefined8 *)((int)pdVar7 + -4);
            puVar15 = puVar8;
            goto LAB_8c257d74;
          }
          uVar3 = 0xf0000000;
        }
        dVar19 = (double)CONCAT44(0x3f800000,uVar26);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(in_r2 + 0x18) = 0x3f800000;
          *(int *)(in_r2 + 0x14) = SUB84(dVar30,0);
          *(undefined4 *)(in_r2 + 0x10) = uVar32;
          *(int *)(in_r2 + 0xc) = SUB84(dStack_80,0);
          *(undefined4 *)(in_r2 + 8) = uVar29;
          pdVar7 = (double *)(in_r2 + 4);
          *(undefined4 *)pdVar7 = uVar26;
        }
        else {
          *(double *)(in_r2 + 0x14) = dVar19;
          *(double *)(in_r2 + 0xc) = in_xd14;
          *(double *)(in_r2 + 4) = dVar30;
          *(undefined8 *)(in_r2 + -4) = in_xd12;
          *(double *)(in_r2 + -0xc) = dStack_80;
          pdVar7 = (double *)(in_r2 + -0x14);
          *pdVar7 = in_xd10;
        }
        *(undefined4 *)((int)pdVar7 + -4) = uVar3;
        in_r2 = (int)pdVar7 + 0x1c;
      }
LAB_8c257d74:
      pdVar7 = pdVar13;
      uVar26 = SUB84(dVar19,0);
      bVar10 = (char)bVar10 >> 2;
      puVar14 = puVar5;
      unaff_r14 = puVar15;
      if ((bVar11 & 1) != 0) {
        iVar1 = iVar1 + 1;
        if (iVar1 == 3) {
          unaff_r14 = puVar5;
          if ((char)bVar10 < '\0') goto LAB_8c257db2;
          uVar3 = 0xf0000000;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar26 = *(undefined4 *)((int)puVar5 + 4);
          dStack_80 = (double)CONCAT44(*(undefined4 *)(puVar5 + 1),SUB84(dStack_80,0));
          dVar20 = (double)(ulonglong)*(uint *)((int)puVar5 + 0xc);
          uVar31 = CONCAT44(*(undefined4 *)(puVar5 + 2),*(undefined4 *)((int)puVar5 + 0x14));
          puVar5 = puVar5 + 3;
        }
        else {
          in_xd10 = *(double *)((int)puVar5 + 4);
          dStack_80 = *(double *)((int)puVar5 + 0xc);
          in_xd6 = *(undefined8 *)((int)puVar5 + 0x14);
          uVar31 = *(undefined8 *)((int)puVar5 + 0x1c);
          in_xd14 = *(double *)((int)puVar5 + 0x24);
          puVar5 = (undefined8 *)((int)puVar5 + 0x2c);
        }
        dVar19 = (double)CONCAT44(0x3f800000,uVar26);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(in_r2 + 0x18) = 0x3f800000;
          *(int *)(in_r2 + 0x14) = (int)uVar31;
          *(int *)(in_r2 + 0x10) = (int)((ulonglong)uVar31 >> 0x20);
          *(int *)(in_r2 + 0xc) = SUB84(dVar20,0);
          *(int *)(in_r2 + 8) = (int)((ulonglong)dStack_80 >> 0x20);
          pdVar13 = (double *)(in_r2 + 4);
          *(undefined4 *)pdVar13 = uVar26;
        }
        else {
          *(double *)(in_r2 + 0x14) = dVar19;
          *(double *)(in_r2 + 0xc) = in_xd14;
          *(undefined8 *)(in_r2 + 4) = uVar31;
          *(undefined8 *)(in_r2 + -4) = in_xd6;
          *(double *)(in_r2 + -0xc) = dStack_80;
          pdVar13 = (double *)(in_r2 + -0x14);
          *pdVar13 = in_xd10;
        }
        *(undefined4 *)((int)pdVar13 + -4) = uVar3;
        in_r2 = (int)pdVar13 + 0x1c;
        puVar14 = puVar5 + -3;
        unaff_r14 = puVar15;
      }
LAB_8c257db2:
      uVar26 = SUB84(dVar19,0);
      pdVar13 = (double *)((int)pdVar7 + 0xc);
      iVar9 = iVar9 + -1;
      puVar5 = puVar14 + 4;
      puVar15 = unaff_r14;
    } while (iVar9 != 0);
    if ((char)bVar10 < '\0') {
      if (in_FPSCR_SZ == '\0') {
        uVar26 = *(undefined4 *)((int)unaff_r14 + 4);
        dStack_80 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 1),
                                     *(undefined4 *)((int)unaff_r14 + 0xc));
        uVar31 = CONCAT44(*(undefined4 *)(unaff_r14 + 2),*(undefined4 *)((int)unaff_r14 + 0x14));
        unaff_r14 = unaff_r14 + 3;
      }
      else {
        in_xd10 = *(double *)((int)unaff_r14 + 4);
        dStack_80 = *(double *)((int)unaff_r14 + 0xc);
        in_xd12 = *(undefined8 *)((int)unaff_r14 + 0x14);
        uVar31 = *(undefined8 *)((int)unaff_r14 + 0x1c);
        in_xd14 = *(double *)((int)unaff_r14 + 0x24);
        unaff_r14 = (undefined8 *)((int)unaff_r14 + 0x2c);
      }
      dVar19 = (double)CONCAT44(0x3f800000,uVar26);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(in_r2 + 0x18) = 0x3f800000;
        *(int *)(in_r2 + 0x14) = (int)uVar31;
        *(int *)(in_r2 + 0x10) = (int)((ulonglong)uVar31 >> 0x20);
        *(int *)(in_r2 + 0xc) = SUB84(dStack_80,0);
        *(int *)(in_r2 + 8) = (int)((ulonglong)dStack_80 >> 0x20);
        pdVar13 = (double *)(in_r2 + 4);
        *(undefined4 *)pdVar13 = uVar26;
      }
      else {
        *(double *)(in_r2 + 0x14) = dVar19;
        *(double *)(in_r2 + 0xc) = in_xd14;
        *(undefined8 *)(in_r2 + 4) = uVar31;
        *(undefined8 *)(in_r2 + -4) = in_xd12;
        *(double *)(in_r2 + -0xc) = dStack_80;
        pdVar13 = (double *)(in_r2 + -0x14);
        *pdVar13 = in_xd10;
      }
      *(undefined4 *)((int)pdVar13 + -4) = 0xf0000000;
      in_r2 = (int)pdVar13 + 0x1c;
    }
    iStack_78 = iStack_78 + -1;
    if (iStack_78 == 0) {
      return iVar1;
    }
    puVar5 = (undefined8 *)(iVar4 + 0x10);
    pdVar13 = (double *)((int)pdVar6 + 0xc);
    uVar12 = ar4 & 7;
  } while( true );
}

__asm__(".globl _FUN_8c257be8\n.set _FUN_8c257be8, _FUN_8c257be8_def\n");
