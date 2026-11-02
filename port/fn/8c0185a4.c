#include "../decls.h"
undefined4 FUN_8c0185a4_def(int ar4,double *ar5,float *ar6,float *ar7)

{
  undefined8 uVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  double *pdVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *ar5_00;
  float *ar7_00;
  short sVar9;
  undefined4 in_fr1;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float in_fr4;
  undefined4 in_fr12;
  double in_dr14;
  double dVar14;
  undefined8 in_xd0;
  bool bVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  short asStack_16a [5];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  short *psStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  
  cVar18 = '\0';
  cVar17 = '\0';
  psVar3 = *(short **)(ar4 + 4);
  psStack_b4 = (short *)0x0;
  asStack_16a[3] = 0;
  sVar2 = 0;
  pdVar5 = ar5;
  pfVar6 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_3c,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_4c,pdVar5,pfVar6,ar7_00);
  Vec3_ctor_zero(&uStack_5c,pdVar5,pfVar6,ar7_00);
  Vec3_ctor_zero(&uStack_6c,pdVar5,pfVar6,ar7_00);
  iVar8 = *(int *)(ar4 + 8);
  if (cVar18 == '\0') {
    uStack_90 = *(undefined4 *)ar5;
    uStack_8c = *(undefined4 *)((int)ar5 + 4);
    uStack_88 = *(undefined4 *)(ar5 + 1);
    dVar12 = (double)CONCAT44(uStack_88,in_fr1);
  }
  else {
    uStack_90 = SUB84(*ar5,0);
    uStack_8c = (undefined4)*(undefined8 *)((int)ar5 + 4);
    dVar12 = ar5[1];
    uStack_88 = SUB84(dVar12,0);
    fStack_84 = (float)((ulonglong)dVar12 >> 0x20);
  }
  asStack_16a[4] = 0;
  do {
    if (*(int *)(ar4 + 0xc) <= (int)asStack_16a[4]) {
      if (cVar18 == '\0') {
        ar6[2] = 0.0;
        uStack_160 = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        uStack_15c = SUB84(dVar12,0);
        iStack_158 = 0;
        *(ulonglong *)(ar6 + 2) = (ulonglong)dVar12 & 0xffffffff;
        uStack_160 = uStack_15c;
        *(ulonglong *)(ar6 + 1) = (ulonglong)dVar12 & 0xffffffff;
        *(ulonglong *)ar6 = (ulonglong)dVar12 & 0xffffffff;
      }
      uStack_15c = 0;
      (*(uint*)((uchar*)&uStack_c0+4)) = 0xffffffff;
      Vec3_dtor(&uStack_6c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(&uStack_5c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,pfVar6,ar7_00);
      return (*(uint*)((uchar*)&uStack_c0+4));
    }
    asStack_16a[3] = *psVar3;
    bVar15 = asStack_16a[3] < 0;
    if (bVar15) {
      iStack_c4 = (int)asStack_16a[3];
      asStack_16a[3] = -asStack_16a[3];
    }
    psVar3 = psVar3 + 1;
    psStack_b4 = psVar3;
    while( true ) {
      iStack_158 = libgcc_divide_helper_0101e4((int)psVar3 - (int)psStack_b4,2,pfVar6,ar7_00);
      uVar10 = SUB84(dVar12,0);
      if (asStack_16a[3] <= iStack_158) break;
      if (psVar3 == psStack_b4) {
        asStack_16a[0] = *psVar3;
        asStack_16a[1] = psVar3[1];
        asStack_16a[2] = psVar3[2];
        psVar3 = psVar3 + 3;
      }
      else {
        asStack_16a[0] = asStack_16a[1];
        asStack_16a[1] = asStack_16a[2];
        asStack_16a[2] = *psVar3;
        psVar3 = psVar3 + 1;
      }
      iStack_c8 = (int)asStack_16a[2];
      iStack_cc = (int)asStack_16a[0];
      iStack_d0 = (int)asStack_16a[1];
      puVar4 = (undefined8 *)(iStack_cc * 0x18 + iVar8);
      if (cVar18 == '\0') {
        uVar10 = *(undefined4 *)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar5 = (double *)(iStack_d0 * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar10);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_c8 * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_84 = fVar11;
      if (cVar18 != '\0') {
        fStack_84 = (float)in_xd0;
      }
      iStack_d4 = (int)asStack_16a[2];
      iStack_d8 = (int)asStack_16a[0];
      iStack_dc = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_d8 * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_dc * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_d4 * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_80 = fVar11;
      if (cVar18 != '\0') {
        fStack_80 = (float)in_xd0;
      }
      iStack_e0 = (int)asStack_16a[2];
      iStack_e4 = (int)asStack_16a[0];
      iStack_e8 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_e4 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_e8 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_e0 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_7c = fVar11;
      if (cVar18 != '\0') {
        fStack_7c = (float)in_xd0;
      }
      iStack_ec = (int)asStack_16a[2];
      iStack_f0 = (int)asStack_16a[0];
      iStack_f4 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_f0 * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_f4 * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_ec * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_78 = fVar11;
      if (cVar18 != '\0') {
        fStack_78 = (float)in_xd0;
      }
      iStack_f8 = (int)asStack_16a[2];
      iStack_fc = (int)asStack_16a[0];
      iStack_100 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_fc * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_100 * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_f8 * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_74 = fVar11;
      if (cVar18 != '\0') {
        fStack_74 = (float)in_xd0;
      }
      iStack_104 = (int)asStack_16a[2];
      iStack_108 = (int)asStack_16a[0];
      iStack_10c = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_108 * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_10c * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_104 * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = (float)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(fVar11,SUB84(dVar12,0) / fVar11);
      }
      else {
        dVar12 = dVar12 / dVar12;
      }
      if (cVar18 == '\0') {
        fStack_70 = SUB84(dVar12,0);
      }
      else {
        fStack_70 = (float)in_xd0;
        uStack_6c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar6 = (float *)0x0;
      ar5_00 = &fStack_84;
      FUN_8c234a68(&uStack_90,ar5_00,0,ar7_00);
      fVar11 = (float)((ulonglong)dVar12 >> 0x20);
      dVar14 = dVar12;
      if (cVar18 == '\0') {
        uStack_c0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c0+4)),fVar11);
        dVar14 = uStack_c0;
      }
      uStack_c0 = dVar14;
      if (cVar17 == '\0') {
        bVar16 = in_fr4 < fVar11;
      }
      else {
        bVar16 = (double)CONCAT44(in_fr12,in_fr4) < dVar12;
      }
      if (!bVar16) {
        sVar9 = 0;
        while( true ) {
          uVar10 = SUB84(in_dr14,0);
          fVar11 = SUB84(dVar12,0);
          if (2 < sVar9) break;
          if (sVar9 == 0) {
            iStack_110 = (int)asStack_16a[1];
            iStack_114 = (int)asStack_16a[0];
            pfVar7 = (float *)(iStack_110 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_114 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),fVar11);
              uVar1 = uStack_5c;
            }
            uStack_5c = uVar1;
            iStack_118 = (int)asStack_16a[1];
            iStack_11c = (int)asStack_16a[0];
            pfVar7 = (float *)(iStack_118 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_11c * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),fVar11);
              uVar1 = uStack_54;
            }
          }
          else if (sVar9 == 1) {
            iStack_120 = (int)asStack_16a[2];
            iStack_124 = (int)asStack_16a[1];
            pfVar7 = (float *)(iStack_120 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_124 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),fVar11);
              uVar1 = uStack_5c;
            }
            uStack_5c = uVar1;
            iStack_128 = (int)asStack_16a[2];
            iStack_12c = (int)asStack_16a[1];
            pfVar7 = (float *)(iStack_128 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_12c * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),fVar11);
              uVar1 = uStack_54;
            }
          }
          else {
            uVar1 = uStack_54;
            if (sVar9 == 2) {
              iStack_130 = (int)asStack_16a[0];
              iStack_134 = (int)asStack_16a[2];
              pfVar7 = (float *)(iStack_130 * 0x18 + iVar8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)pfVar7;
              }
              pdVar5 = (double *)(iStack_134 * 0x18 + iVar8);
              if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),fVar11);
                uVar1 = uStack_5c;
              }
              uStack_5c = uVar1;
              iStack_138 = (int)asStack_16a[0];
              iStack_13c = (int)asStack_16a[2];
              pfVar7 = (float *)(iStack_138 * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)pfVar7;
              }
              pdVar5 = (double *)(iStack_13c * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),fVar11);
                uVar1 = uStack_54;
              }
            }
          }
          uStack_54 = uVar1;
          Vec3_length(&uStack_5c,ar5_00,pfVar6,ar7_00);
          if (bVar15) {
            FUN_8c022d3c(auStack_4c,&uStack_5c,pfVar6,ar7_00,auStack_b0);
            Vec3_assign(&uStack_6c,auStack_b0,pfVar6,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_b0,0xffffffff,pfVar6,ar7_00);
          }
          else {
            FUN_8c022d3c(&uStack_5c,auStack_4c,pfVar6,ar7_00,auStack_a0);
            Vec3_assign(&uStack_6c,auStack_a0,pfVar6,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_a0,0xffffffff,pfVar6,ar7_00);
          }
          iStack_144 = (int)sVar9;
          iStack_140 = (int)asStack_16a[sVar9];
          iStack_14c = (int)sVar9;
          iStack_148 = (int)asStack_16a[sVar9];
          iStack_154 = (int)sVar9;
          iStack_150 = (int)asStack_16a[sVar9];
          pdVar5 = (double *)(asStack_16a[sVar9] * 0x18 + iVar8);
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar10);
            dVar12 = (double)CONCAT44(uStack_6c,fVar11);
          }
          else {
            dVar14 = *pdVar5;
            dVar12 = (double)CONCAT44(uStack_68,uStack_6c);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) *
                                      (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          puVar4 = (undefined8 *)(iStack_150 * 0x18 + iVar8 + 4);
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(uStack_68,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = (double)CONCAT44(uStack_64,uStack_68);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) +
                                      SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20),
                                      SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          puVar4 = (undefined8 *)(asStack_16a[sVar9] * 0x18 + iVar8 + 8);
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(uStack_64,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = (double)CONCAT44(uStack_60,uStack_64);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar11,SUB84(dVar14,0));
          }
          else {
            fVar11 = SUB84(dVar12 * dVar12,0);
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uStack_6c);
            dVar12 = (double)CONCAT44(*(undefined4 *)ar5,fVar11);
          }
          else {
            dVar12 = *ar5;
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar14,0) * (float)((ulonglong)dVar12 >> 0x20));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uStack_68);
          }
          else {
            in_xd0 = CONCAT44(uStack_64,uStack_68);
            dVar12 = *(double *)((int)ar5 + 4);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar14,0) +
                                      SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),uStack_64);
          }
          else {
            in_xd0 = CONCAT44(uStack_60,uStack_64);
            dVar12 = ar5[1];
          }
          if (cVar17 == '\0') {
            fVar13 = (float)((ulonglong)dVar12 >> 0x20);
            fVar11 = SUB84(dVar12,0) * fVar13;
            dVar12 = (double)CONCAT44(fVar13,fVar11);
            fVar13 = (float)((ulonglong)dVar14 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar13,(SUB84(dVar14,0) + fVar11) - fVar13);
          }
          else {
            dVar12 = dVar12 * dVar12;
            in_dr14 = (dVar14 + dVar12) - (dVar14 + dVar12);
          }
          dVar12 = (double)((ulonglong)dVar12 & 0xffffffff);
          if (cVar17 == '\0') {
            bVar16 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar16 = dVar12 < in_dr14;
          }
          if (bVar16) {
            sVar2 = 0;
            break;
          }
          sVar2 = sVar2 + 1;
          if (sVar2 == 3) {
            if (cVar18 == '\0') {
              *ar6 = fStack_78;
              ar6[1] = fStack_74;
              ar6[2] = fStack_70;
              *ar7 = fStack_84;
              ar7[1] = fStack_80;
              ar7[2] = fStack_7c;
            }
            else {
              *(ulonglong *)ar6 = CONCAT44(fStack_74,fStack_78);
              *(ulonglong *)(ar6 + 1) = CONCAT44(fStack_70,fStack_74);
              *(ulonglong *)(ar6 + 2) = CONCAT44(uStack_6c,fStack_70);
              *(ulonglong *)ar7 = CONCAT44(fStack_80,fStack_84);
              *(ulonglong *)(ar7 + 1) = CONCAT44(fStack_7c,fStack_80);
              *(ulonglong *)(ar7 + 2) = CONCAT44(fStack_78,fStack_7c);
            }
            uStack_b8 = 1;
            Vec3_dtor(&uStack_6c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(&uStack_5c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(auStack_4c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(auStack_3c,0xffffffff,pfVar6,ar7_00);
            return uStack_b8;
          }
          sVar9 = sVar9 + 1;
        }
        bVar15 = (bool)(bVar15 ^ 1);
      }
    }
    asStack_16a[4] = asStack_16a[4] + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0185a4\n.set _FUN_8c0185a4, _FUN_8c0185a4_def\n");
