#include "../decls.h"
undefined4 FUN_8c017900_def(int ar4,double *ar5,float *ar6,float *ar7)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  double *pdVar6;
  float *pfVar7;
  float *ar5_00;
  float *ar7_00;
  short sVar8;
  undefined4 in_fr1;
  undefined4 uVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar14;
  float in_fr4;
  undefined4 in_fr12;
  double in_dr14;
  double dVar15;
  undefined8 in_xd0;
  bool bVar16;
  bool bVar17;
  char cVar18;
  char cVar19;
  short asStack_1ce [5];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  float *pfStack_148;
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
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  short *psStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [8];
  undefined8 uStack_64;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  undefined4 uVar13;
  
  cVar19 = '\0';
  cVar18 = '\0';
  psVar2 = *(short **)(ar4 + 4);
  psStack_d4 = (short *)0x0;
  asStack_1ce[3] = 0;
  sVar1 = 0;
  pdVar6 = ar5;
  pfVar7 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_3c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_6c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(auStack_5c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(auStack_4c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(&fStack_7c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(&uStack_8c,pdVar6,pfVar7,ar7_00);
  iVar3 = *(int *)(ar4 + 8);
  if (cVar19 == '\0') {
    uStack_b0 = *(undefined4 *)ar5;
    uStack_ac = *(undefined4 *)((int)ar5 + 4);
    uStack_a8 = *(undefined4 *)(ar5 + 1);
    dVar11 = (double)CONCAT44(uStack_a8,in_fr1);
  }
  else {
    uStack_b0 = SUB84(*ar5,0);
    uStack_ac = (undefined4)*(undefined8 *)((int)ar5 + 4);
    dVar11 = ar5[1];
    uStack_a8 = SUB84(dVar11,0);
    fStack_a4 = (float)((ulonglong)dVar11 >> 0x20);
  }
  asStack_1ce[4] = 0;
  do {
    if (*(int *)(ar4 + 0xc) <= (int)asStack_1ce[4]) {
      if (cVar19 == '\0') {
        ar6[2] = 0.0;
        uStack_1c4 = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        uStack_1c0 = SUB84(dVar11,0);
        iStack_1bc = 0;
        *(ulonglong *)(ar6 + 2) = (ulonglong)dVar11 & 0xffffffff;
        uStack_1c4 = uStack_1c0;
        *(ulonglong *)(ar6 + 1) = (ulonglong)dVar11 & 0xffffffff;
        *(ulonglong *)ar6 = (ulonglong)dVar11 & 0xffffffff;
      }
      uStack_1c0 = 0;
      (*(uint*)((uchar*)&uStack_e0+4)) = 0xffffffff;
      Vec3_dtor(&uStack_8c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(&fStack_7c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_5c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_6c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,pfVar7,ar7_00);
      return (*(uint*)((uchar*)&uStack_e0+4));
    }
    asStack_1ce[3] = *psVar2;
    bVar16 = asStack_1ce[3] < 0;
    if (bVar16) {
      iStack_e4 = (int)asStack_1ce[3];
      asStack_1ce[3] = -asStack_1ce[3];
    }
    psVar2 = psVar2 + 1;
    psStack_d4 = psVar2;
    while( true ) {
      iStack_1bc = libgcc_divide_helper_0101e4((int)psVar2 - (int)psStack_d4,2,pfVar7,ar7_00);
      uVar9 = SUB84(dVar11,0);
      if (asStack_1ce[3] <= iStack_1bc) break;
      if (psVar2 == psStack_d4) {
        asStack_1ce[0] = *psVar2;
        asStack_1ce[1] = psVar2[1];
        asStack_1ce[2] = psVar2[2];
        psVar2 = psVar2 + 3;
      }
      else {
        asStack_1ce[0] = asStack_1ce[1];
        asStack_1ce[1] = asStack_1ce[2];
        asStack_1ce[2] = *psVar2;
        psVar2 = psVar2 + 1;
      }
      iStack_e8 = (int)asStack_1ce[2];
      iStack_ec = (int)asStack_1ce[0];
      iStack_f0 = (int)asStack_1ce[1];
      puVar4 = (undefined8 *)(iStack_ec * 0x18 + iVar3);
      if (cVar19 == '\0') {
        uVar9 = *(undefined4 *)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar6 = (double *)(iStack_f0 * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar9);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_e8 * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_a4 = fVar10;
      if (cVar19 != '\0') {
        fStack_a4 = (float)in_xd0;
      }
      iStack_f4 = (int)asStack_1ce[2];
      iStack_f8 = (int)asStack_1ce[0];
      iStack_fc = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_f8 * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_fc * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_f4 * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_a0 = fVar10;
      if (cVar19 != '\0') {
        fStack_a0 = (float)in_xd0;
      }
      iStack_100 = (int)asStack_1ce[2];
      iStack_104 = (int)asStack_1ce[0];
      iStack_108 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_104 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_108 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_100 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_9c = fVar10;
      if (cVar19 != '\0') {
        fStack_9c = (float)in_xd0;
      }
      iStack_10c = (int)asStack_1ce[2];
      iStack_110 = (int)asStack_1ce[0];
      iStack_114 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_110 * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_114 * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_10c * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_98 = fVar10;
      if (cVar19 != '\0') {
        fStack_98 = (float)in_xd0;
      }
      iStack_118 = (int)asStack_1ce[2];
      iStack_11c = (int)asStack_1ce[0];
      iStack_120 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_11c * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_120 * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_118 * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_94 = fVar10;
      if (cVar19 != '\0') {
        fStack_94 = (float)in_xd0;
      }
      iStack_124 = (int)asStack_1ce[2];
      iStack_128 = (int)asStack_1ce[0];
      iStack_12c = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_128 * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_12c * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_124 * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar10,SUB84(dVar11,0) / fVar10);
      }
      else {
        dVar11 = dVar11 / dVar11;
      }
      if (cVar19 == '\0') {
        fStack_90 = SUB84(dVar11,0);
      }
      else {
        fStack_90 = (float)in_xd0;
        uStack_8c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar7 = (float *)0x0;
      ar5_00 = &fStack_a4;
      FUN_8c234a68(&uStack_b0,ar5_00,0,ar7_00);
      fVar10 = (float)((ulonglong)dVar11 >> 0x20);
      dVar15 = dVar11;
      if (cVar19 == '\0') {
        uStack_e0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_e0+4)),fVar10);
        dVar15 = uStack_e0;
      }
      uStack_e0 = dVar15;
      if (cVar18 == '\0') {
        bVar17 = in_fr4 < fVar10;
      }
      else {
        bVar17 = (double)CONCAT44(in_fr12,in_fr4) < dVar11;
      }
      if (!bVar17) {
        sVar8 = 0;
        while( true ) {
          uVar9 = SUB84(in_dr14,0);
          fVar10 = SUB84(dVar11,0);
          if (2 < sVar8) break;
          if (sVar8 == 0) {
            iStack_130 = (int)asStack_1ce[1];
            iStack_134 = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_130 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_134 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_138 = (int)asStack_1ce[1];
            iStack_13c = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_138 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_13c * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_140 = (int)asStack_1ce[1];
            iStack_144 = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_140 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_144 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 1) {
            ar5_00 = (float *)(int)asStack_1ce[2];
            iStack_14c = (int)asStack_1ce[1];
            pfVar5 = (float *)((int)ar5_00 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_14c * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_150 = (int)asStack_1ce[2];
            iStack_154 = (int)asStack_1ce[1];
            pfVar5 = (float *)(iStack_150 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_154 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_158 = (int)asStack_1ce[2];
            iStack_15c = (int)asStack_1ce[1];
            pfVar5 = (float *)(iStack_158 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_15c * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            pfStack_148 = ar5_00;
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 2) {
            iStack_160 = (int)asStack_1ce[0];
            iStack_164 = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_160 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_164 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_168 = (int)asStack_1ce[0];
            iStack_16c = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_168 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_16c * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_170 = (int)asStack_1ce[0];
            iStack_174 = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_170 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_174 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          Vec3_length(&fStack_7c,ar5_00,pfVar7,ar7_00);
          iStack_178 = (int)sVar8;
          iStack_180 = (int)sVar8;
          iStack_17c = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0xc);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,fVar10);
            *(undefined4 *)(auStack_6c + sVar8 * 0x10) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(auStack_6c + sVar8 * 0x10) = uVar12;
          }
          iStack_184 = (int)sVar8;
          iStack_18c = (int)sVar8;
          iStack_188 = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0x10);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar12;
          }
          iStack_190 = (int)sVar8;
          iStack_198 = (int)sVar8;
          iStack_194 = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(iStack_194 * 0x18 + iVar3 + 0x14);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(&uStack_64 + sVar8 * 2) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            (&uStack_64)[sVar8 * 2] = uVar12;
          }
          uVar13 = (undefined4)uVar12;
          if (bVar16) {
            iStack_1a0 = (int)sVar8;
            FUN_8c022d3c(auStack_6c + iStack_1a0 * 0x10,&fStack_7c,pfVar7,ar7_00,auStack_d0);
            Vec3_assign(&uStack_8c,auStack_d0,pfVar7,ar7_00);
            pfVar7 = (float *)0xffffffff;
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_d0,0xffffffff,0xffffffff,ar7_00);
          }
          else {
            iStack_19c = (int)sVar8;
            FUN_8c022d3c(&fStack_7c,auStack_6c + iStack_19c * 0x10,pfVar7,ar7_00,auStack_c0);
            Vec3_assign(&uStack_8c,auStack_c0,pfVar7,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_c0,0xffffffff,pfVar7,ar7_00);
          }
          iStack_1a8 = (int)sVar8;
          iStack_1a4 = (int)asStack_1ce[sVar8];
          iStack_1b0 = (int)sVar8;
          iStack_1ac = (int)asStack_1ce[sVar8];
          iStack_1b8 = (int)sVar8;
          iStack_1b4 = (int)asStack_1ce[sVar8];
          pdVar6 = (double *)(asStack_1ce[sVar8] * 0x18 + iVar3);
          if (cVar19 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar9);
            dVar11 = (double)CONCAT44(uStack_8c,uVar13);
          }
          else {
            dVar15 = *pdVar6;
            dVar11 = (double)CONCAT44(uStack_88,uStack_8c);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) *
                                      (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          puVar4 = (undefined8 *)(iStack_1b4 * 0x18 + iVar3 + 4);
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(uStack_88,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = (double)CONCAT44(uStack_84,uStack_88);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) +
                                      SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20),
                                      SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 8);
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(uStack_84,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = (double)CONCAT44(uStack_80,uStack_84);
          }
          if (cVar18 == '\0') {
            fVar10 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar10,SUB84(dVar15,0));
          }
          else {
            fVar10 = SUB84(dVar11 * dVar11,0);
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uStack_8c);
            dVar11 = (double)CONCAT44(*(undefined4 *)ar5,fVar10);
          }
          else {
            dVar11 = *ar5;
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) * (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uStack_88);
          }
          else {
            in_xd0 = CONCAT44(uStack_84,uStack_88);
            dVar11 = *(double *)((int)ar5 + 4);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) +
                                      SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),uStack_84);
          }
          else {
            in_xd0 = CONCAT44(uStack_80,uStack_84);
            dVar11 = ar5[1];
          }
          if (cVar18 == '\0') {
            fVar14 = (float)((ulonglong)dVar11 >> 0x20);
            fVar10 = SUB84(dVar11,0) * fVar14;
            dVar11 = (double)CONCAT44(fVar14,fVar10);
            fVar14 = (float)((ulonglong)dVar15 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar14,(SUB84(dVar15,0) + fVar10) - fVar14);
          }
          else {
            dVar11 = dVar11 * dVar11;
            in_dr14 = (dVar15 + dVar11) - (dVar15 + dVar11);
          }
          dVar11 = (double)((ulonglong)dVar11 & 0xffffffff);
          if (cVar18 == '\0') {
            bVar17 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar17 = dVar11 < in_dr14;
          }
          if (bVar17) {
            sVar1 = 0;
            break;
          }
          sVar1 = sVar1 + 1;
          if (sVar1 == 3) {
            if (cVar19 == '\0') {
              *ar6 = fStack_98;
              ar6[1] = fStack_94;
              ar6[2] = fStack_90;
              *ar7 = fStack_a4;
              ar7[1] = fStack_a0;
              ar7[2] = fStack_9c;
            }
            else {
              *(ulonglong *)ar6 = CONCAT44(fStack_94,fStack_98);
              *(ulonglong *)(ar6 + 1) = CONCAT44(fStack_90,fStack_94);
              *(ulonglong *)(ar6 + 2) = CONCAT44(uStack_8c,fStack_90);
              *(ulonglong *)ar7 = CONCAT44(fStack_a0,fStack_a4);
              *(ulonglong *)(ar7 + 1) = CONCAT44(fStack_9c,fStack_a0);
              *(ulonglong *)(ar7 + 2) = CONCAT44(fStack_98,fStack_9c);
            }
            uStack_d8 = 1;
            Vec3_dtor(&uStack_8c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(&fStack_7c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_4c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_5c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_6c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_3c,0xffffffff,pfVar7,ar7_00);
            return uStack_d8;
          }
          sVar8 = sVar8 + 1;
        }
        bVar16 = (bool)(bVar16 ^ 1);
      }
    }
    asStack_1ce[4] = asStack_1ce[4] + 1;
  } while( true );
}

__asm__(".globl _FUN_8c017900\n.set _FUN_8c017900, _FUN_8c017900_def\n");
