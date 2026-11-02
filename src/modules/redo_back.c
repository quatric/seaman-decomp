
/* sh4_dmac_202c60 @ 8c202c60 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c202cb8) */
/* WARNING: Unknown calling convention */

undefined4 sh4_dmac_202c60(int ar4,int ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint auStack_1c [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auStack_1c[0] = *(uint *)PTR_DAT_8c202ce8;
  auStack_1c[1] = *(undefined4 *)(PTR_DAT_8c202ce8 + 4);
  auStack_1c[2] = *(undefined4 *)(PTR_DAT_8c202ce8 + 8);
  auStack_1c[3] = *(undefined4 *)(PTR_DAT_8c202ce8 + 0xc);
  uStack_c = *(undefined4 *)(PTR_DAT_8c202ce8 + 0x10);
  uStack_8 = *(undefined4 *)(PTR_DAT_8c202ce8 + 0x14);
  sVar1 = DAT_8c202ce0;
  if ((*DAT_8c202cec != 1) && ((*DAT_8c202cf0 & 0x10) == 0)) {
    sVar1 = DAT_8c202ce2;
  }
  if (ar5 == 1) {
    uVar3 = ar6 + 0x1fU & 0xffffffe0;
    *DAT_8c202cf8 = *DAT_8c202cf8 & DAT_8c202cf4 | 0x400000 | (ar6 + 0x1fU >> 5 & 0x1f) << 0x10;
  }
  else if (*DAT_8c202cec == 1) {
    uVar3 = (uint)DAT_8c202ce4;
  }
  else if (((*DAT_8c202d84 & 1) == 1) || ((*DAT_8c202d84 & 0x2c) != 0x20)) {
    if ((*DAT_8c202d84 & 0x20) == 0) {
      if ((*DAT_8c202d84 & 0x62) == 0x42) {
        iVar4 = *(int *)(DAT_8c202d88 + *DAT_8c202d8c * 4);
        uVar3 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
      }
      else {
        uVar3 = (uint)DAT_8c202e00;
      }
    }
    else if ((*DAT_8c202d84 & 0x42) == 0x42) {
      uVar3 = *(uint *)(DAT_8c202d88 + *DAT_8c202d8c * 4);
    }
    else {
      uVar3 = (uint)DAT_8c202d82;
    }
  }
  else {
    uVar3 = (uint)DAT_8c202d80;
  }
  iVar4 = DAT_8c202e04;
  iVar2 = (int)DAT_8c202e02;
  *(int *)(DAT_8c202e04 + 0x48) = (int)sVar1;
  *(uint *)(iVar4 + 0x4c) = uVar3;
  if (ar4 == iVar2) {
    ar4 = *DAT_8c202e08;
  }
  *(uint *)(iVar4 + 0x50) = auStack_1c[ar4] >> 3;
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x48) * *(int *)(iVar4 + 0x4c) * *(int *)(iVar4 + 0x50);
  return 0x60;
}



/* FUN_8c258604 @ 8c258604 callers=0 callees=4 */

/* WARNING: Removing unreachable block (ram,0x8c2586e8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c258604(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined *a4;
  undefined4 uVar5;
  undefined4 ar6_00;
  uint uVar6;
  int ar5_00;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined8 in_dr2;
  double dVar9;
  float fVar10;
  float in_fr13;
  float fVar11;
  undefined8 in_dr14;
  undefined8 uVar12;
  undefined8 in_xd12;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  
  uVar8 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44((int)in_dr14,(undefined4)uStack_20);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar7 = auStack_24;
  }
  else {
    puVar7 = auStack_30;
    uStack_20 = in_xd14;
  }
  *(undefined4 *)(puVar7 + -4) = in_PR;
  *(undefined4 *)(puVar7 + -8) = ar5;
  *(undefined4 *)(puVar7 + -0xc) = ar6;
  (*(code *)PTR_thunk_FUN_8c207f80_8c258704)(ar4,ar5,ar6,ar7);
  uVar5 = (undefined4)in_dr14;
  (*(code *)PTR_FUN_8c258708)(1,ar5,ar6,ar7);
  piVar2 = DAT_8c258714._4_4_;
  *DAT_8c25870c = *(undefined4 *)(puVar7 + -8);
  ar5_00 = DAT_8c25871c;
  *DAT_8c258710 = *(undefined4 *)(puVar7 + -0xc);
  *(uint *)(puVar7 + -0xc) = (int)DAT_8c2586f2 & ar4;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44((undefined4)DAT_8c258714,uVar5);
  }
  else {
    uVar12 = CONCAT44(DAT_8c258714._4_4_,(undefined4)DAT_8c258714);
  }
  uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if ((ar4 & 0x10) == 0) {
    iVar4 = (int)DAT_8c2586f6;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5_00 + 4) = (undefined4)DAT_8c258720;
    }
    else {
      *(ulonglong *)(ar5_00 + 4) = CONCAT44(DAT_8c258720._4_4_,(undefined4)DAT_8c258720);
    }
  }
  else {
    iVar4 = (int)DAT_8c2586f4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5_00 + 4) = uVar5;
    }
    else {
      *(undefined8 *)(ar5_00 + 4) = uVar12;
    }
  }
  *piVar2 = iVar4;
  piVar3 = DAT_8c25872c;
  fVar11 = DAT_8c258720._4_4_;
  if (in_FPSCR_SZ != '\0') {
    in_xd12 = CONCAT44(DAT_8c258728,DAT_8c258720._4_4_);
    fVar11 = in_fr13;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(uVar5,DAT_8c258728);
  }
  else {
    in_xd14 = CONCAT44(DAT_8c25872c,DAT_8c258728);
  }
  if ((ar4 & 0x20) == 0) {
    iVar4 = (int)DAT_8c2586fa;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar5_00 + 8) = fVar11;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd12;
    }
  }
  else {
    iVar4 = (int)DAT_8c2586f8;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 8) = (int)uVar12;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd14;
    }
  }
  *piVar3 = iVar4;
  if ((ar4 & 3) == 1) {
    aica_reg_258104(0,ar5,ar6,ar7);
    iVar4 = (int)DAT_8c2586f4;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 4) = (int)((ulonglong)uVar12 >> 0x20);
    }
    else {
      *(undefined8 *)(ar5_00 + 4) = uVar12;
    }
    *piVar2 = iVar4;
    iVar4 = (int)DAT_8c2586f8;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 8) = (int)uVar12;
    }
    else {
      *(undefined8 *)(ar5_00 + 8) = in_xd14;
    }
    *piVar3 = iVar4;
  }
  else {
    iVar4 = (*(code *)PTR_FUN_8c258730)(ar4 & 3,ar5,ar6,ar7);
    if (iVar4 == 2) {
      iVar4 = (int)DAT_8c2586fc;
    }
    else if (iVar4 == 3) {
      iVar4 = (int)DAT_8c2586fe;
    }
    else if (iVar4 == 1) {
      iVar4 = (int)DAT_8c258700;
    }
    else {
      iVar4 = (int)DAT_8c2586fe;
    }
    aica_reg_258210(iVar4,ar5,ar6,ar7);
  }
  if ((DAT_8c258734 & ar4) == 0) {
    uVar8 = 0;
  }
  else {
    if (in_FPSCR_PR == '\0') {
      uVar8 = 0x40000000;
    }
    else {
      uVar8 = SUB84((double)CONCAT44(uVar8,0x3f800000) + (double)CONCAT44(uVar8,0x3f800000),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar5_00 + 4),uVar8);
    }
    else {
      dVar9 = *(double *)(ar5_00 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * SUB84(dVar9,0),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 * dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5_00 + 4) = (int)((ulonglong)dVar9 >> 0x20);
      fVar10 = *(float *)(ar5_00 + 8);
    }
    else {
      *(double *)(ar5_00 + 4) = dVar9;
      fVar10 = (float)((ulonglong)*(undefined8 *)(ar5_00 + 8) >> 0x20);
    }
    uVar8 = 1;
    if (fVar10 == fVar11) {
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar5_00 + 8) = (int)uVar12;
      }
      else {
        *(undefined8 *)(ar5_00 + 8) = in_xd14;
      }
    }
  }
  iVar4 = *(int *)(puVar7 + -8);
  if (iVar4 == 0) {
    ar5_00 = 0;
  }
  else if (iVar4 == 1) {
    ar5_00 = 1;
  }
  else if (iVar4 == 3) {
    ar5_00 = 3;
  }
  else if (iVar4 == 4) {
    ar5_00 = 4;
  }
  else if (iVar4 == 5) {
    ar5_00 = 5;
  }
  *DAT_8c2587e4 = *(undefined4 *)PTR_DAT_8c2587e0;
  if ((ar4 & 0x40) == 0) goto LAB_8c258846;
  uVar6 = DAT_8c2587e8 & ar4;
  *DAT_8c2587ec = (int)(short)((int)uVar6 >> 0x11);
  (*(code *)PTR_FUN_8c2587f4)(PTR_LAB_8c2587f0,0,ar6,ar7);
  if (*piVar3 == (int)DAT_8c2587d4) {
    sVar1 = DAT_8c2587d6;
    if (uVar6 != 0) {
      if (uVar6 == DAT_8c2587f8) {
        iVar4 = (int)DAT_8c2587d8;
LAB_8c25883e:
        *piVar3 = iVar4;
      }
      else {
        sVar1 = DAT_8c2587da;
        if (uVar6 != DAT_8c2587fc) {
          if (uVar6 == DAT_8c258800) {
            iVar4 = (int)DAT_8c2587dc;
            goto LAB_8c25883e;
          }
          sVar1 = DAT_8c2587de;
          if (uVar6 != DAT_8c258804) goto LAB_8c258846;
        }
        *piVar3 = (int)sVar1;
      }
      goto LAB_8c258846;
    }
  }
  else {
    sVar1 = DAT_8c2588a4;
    if (uVar6 != 0) {
      if (uVar6 != DAT_8c2588b0) {
        sVar1 = DAT_8c2588a8;
        if (uVar6 != DAT_8c2588b4) {
          if (uVar6 == DAT_8c2588b8) {
            iVar4 = (int)DAT_8c2588aa;
            goto LAB_8c25883e;
          }
          sVar1 = DAT_8c2588ac;
          if (uVar6 != DAT_8c2588bc) goto LAB_8c258846;
        }
        *piVar3 = (int)sVar1;
        goto LAB_8c258846;
      }
      iVar4 = (int)DAT_8c2588a6;
      goto LAB_8c25883e;
    }
  }
  *piVar3 = (int)sVar1;
LAB_8c258846:
  ar6_00 = 1;
  (*(code *)PTR_s_DisplayMode_207aaa_8c2588c0)(*(undefined4 *)(puVar7 + -0xc),ar5_00,1,uVar8);
  (*(code *)PTR_FUN_8c2588c8)(*DAT_8c2588c4,ar5_00,ar6_00,uVar8);
  *DAT_8c2588cc = 0;
  *DAT_8c2588d0 = 0;
  *DAT_8c2588d4 = 1;
  *DAT_8c2588d8 = 0;
  (*(code *)PTR_FUN_8c2588e0)(PTR_LAB_8c2588dc,0,ar6_00,uVar8);
  uVar5 = 0;
  (*(code *)PTR_FUN_8c2588e8)(PTR_LAB_8c2588e4,0,ar6_00,uVar8);
  a4 = PTR_LAB_8c2588ec;
  (*(code *)PTR_FUN_8c2588f0)(PTR_LAB_8c2588ec,uVar5,ar6_00,uVar8);
  FUN_8c258ac0(a4,uVar5,ar6_00,uVar8);
  uVar8 = (*(code *)PTR_FUN_8c2588f4)(0);
  return uVar8;
}



/* FUN_8c211ba4 @ 8c211ba4 callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c211bd2) */
/* WARNING: Removing unreachable block (ram,0x8c211be2) */
/* WARNING: Unknown calling convention */

int FUN_8c211ba4(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int aiStack_10 [4];
  
  aiStack_10[0] = *(int *)PTR_DAT_8c211c4c;
  aiStack_10[1] = *(undefined4 *)(PTR_DAT_8c211c4c + 4);
  aiStack_10[2] = *(undefined4 *)(PTR_DAT_8c211c4c + 8);
  aiStack_10[3] = *(undefined4 *)(PTR_DAT_8c211c4c + 0xc);
  uVar1 = ar4 >> 0x19 & 3;
  iVar2 = *DAT_8c211c54 * *DAT_8c211c50;
  if ((*DAT_8c211c58 & 0x20) != 0) {
    if (*DAT_8c211c5c == 0) {
      iVar2 = iVar2 * 2;
    }
    else {
      iVar2 = iVar2 * 4;
    }
  }
  *DAT_8c211de0 =
       ((aiStack_10[ar4 >> 0x11 & 3] + aiStack_10[ar4 >> 0x13 & 3] + aiStack_10[ar4 >> 0x15 & 3] +
         aiStack_10[ar4 >> 0x17 & 3] + aiStack_10[uVar1]) * 4 + 0x18) * iVar2;
  return uVar1 * 4;
}


