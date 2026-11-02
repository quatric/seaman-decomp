/* functions that failed to decompile with the r4-r7 signature: old-signature output */

/* FUN_8c012090 @ 8c012090 callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c01217c) */
/* WARNING: Removing unreachable block (ram,0x8c012178) */
/* WARNING: Removing unreachable block (ram,0x8c012174) */
/* WARNING: Removing unreachable block (ram,0x8c01216a) */
/* WARNING: Removing unreachable block (ram,0x8c012164) */
/* WARNING: Removing unreachable block (ram,0x8c012160) */
/* WARNING: Removing unreachable block (ram,0x8c01215c) */
/* WARNING: Removing unreachable block (ram,0x8c012158) */
/* WARNING: Removing unreachable block (ram,0x8c01214e) */
/* WARNING: Removing unreachable block (ram,0x8c01214a) */
/* WARNING: Removing unreachable block (ram,0x8c012146) */
/* WARNING: Removing unreachable block (ram,0x8c01213c) */
/* WARNING: Removing unreachable block (ram,0x8c012132) */
/* WARNING: Removing unreachable block (ram,0x8c012116) */
/* WARNING: Removing unreachable block (ram,0x8c012102) */
/* WARNING: Removing unreachable block (ram,0x8c0120e8) */
/* WARNING: Removing unreachable block (ram,0x8c0120d4) */
/* WARNING: Removing unreachable block (ram,0x8c0120c8) */
/* WARNING: Removing unreachable block (ram,0x8c01209c) */
/* WARNING: Removing unreachable block (ram,0x8c012096) */
/* WARNING: Removing unreachable block (ram,0x8c0120aa) */
/* WARNING: Removing unreachable block (ram,0x8c0120cc) */
/* WARNING: Removing unreachable block (ram,0x8c0120f6) */
/* WARNING: Removing unreachable block (ram,0x8c012100) */
/* WARNING: Removing unreachable block (ram,0x8c012104) */
/* WARNING: Removing unreachable block (ram,0x8c012118) */
/* WARNING: Removing unreachable block (ram,0x8c012138) */
/* WARNING: Removing unreachable block (ram,0x8c012144) */
/* WARNING: Removing unreachable block (ram,0x8c012148) */
/* WARNING: Removing unreachable block (ram,0x8c01214c) */
/* WARNING: Removing unreachable block (ram,0x8c012152) */
/* WARNING: Removing unreachable block (ram,0x8c01215a) */
/* WARNING: Removing unreachable block (ram,0x8c01215e) */
/* WARNING: Removing unreachable block (ram,0x8c012162) */
/* WARNING: Removing unreachable block (ram,0x8c012166) */
/* WARNING: Removing unreachable block (ram,0x8c012176) */
/* WARNING: Removing unreachable block (ram,0x8c01217a) */
/* WARNING: Removing unreachable block (ram,0x8c01210a) */
/* WARNING: Removing unreachable block (ram,0x8c012170) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c012090(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong in_dr4;
  float fVar4;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) != 0) {
      return (undefined4 *)uVar2;
    }
    if ((uVar2 & 2) == 0) {
      if (fVar4 != 1.0) {
        iVar3 = 7;
        do {
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        return (undefined4 *)fVar4;
      }
      return (undefined4 *)8;
    }
    puVar1 = (undefined4 *)&DAT_8c125800;
  }
  else {
    puVar1 = &DAT_8c125830;
  }
  return puVar1;
}



/* FUN_8c024010 @ 8c024010 callers=2 callees=1 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_8c024010(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = *(undefined4 *)param_3;
    uStack_14 = *(undefined4 *)((int)param_3 + 4);
    uStack_10 = *(undefined4 *)(param_3 + 1);
    uStack_c = in_PR;
  }
  else {
    uStack_18 = (undefined4)*param_3;
    uStack_14 = (undefined4)*(undefined8 *)((int)param_3 + 4);
    uStack_10 = (undefined4)param_3[1];
    uStack_c = (undefined4)((ulonglong)param_3[1] >> 0x20);
  }
  (*(code *)PTR_FUN_8c024084)(param_1,&uStack_18,&uStack_24);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)param_2 = uStack_24;
    *(undefined4 *)((int)param_2 + 4) = uStack_20;
    *(undefined4 *)(param_2 + 1) = uStack_1c;
  }
  else {
    *param_2 = CONCAT44(uStack_20,uStack_24);
    *(ulonglong *)((int)param_2 + 4) = CONCAT44(uStack_1c,uStack_20);
    param_2[1] = CONCAT44(uStack_18,uStack_1c);
  }
  return;
}




/* FUN_8c0673cc @ 8c0673cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0673cc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}



/* FUN_8c0d6ee0 @ 8c0d6ee0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6ee2) */
/* WARNING: Removing unreachable block (ram,0x8c0d6ee4) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d6ee0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0x43160000;
  ar4[1] = 0;
  ar4[2] = 0;
  return ar4;
}



/* FUN_8c0e99e4 @ 8c0e99e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e99e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c10 [20];
  undefined1 auStack_1bfc [20];
  undefined1 auStack_1be8 [20];
  undefined1 auStack_1bd4 [20];
  undefined1 auStack_1bc0 [20];
  undefined1 auStack_1bac [20];
  undefined1 auStack_1b98 [20];
  undefined1 auStack_1b84 [20];
  undefined1 auStack_1b70 [20];
  undefined1 auStack_1b5c [20];
  undefined1 auStack_1b48 [20];
  undefined1 auStack_1b34 [20];
  undefined1 auStack_1b20 [20];
  undefined1 auStack_1b0c [20];
  undefined1 auStack_1af8 [20];
  undefined1 auStack_1ae4 [20];
  undefined1 auStack_1ad0 [20];
  undefined1 auStack_1abc [20];
  undefined1 auStack_1aa8 [20];
  undefined1 auStack_1a94 [20];
  undefined1 auStack_1a80 [20];
  undefined1 auStack_1a6c [20];
  undefined1 auStack_1a58 [20];
  undefined1 auStack_1a44 [20];
  undefined1 auStack_1a30 [20];
  undefined1 auStack_1a1c [20];
  undefined1 auStack_1a08 [20];
  undefined1 auStack_19f4 [20];
  undefined1 auStack_19e0 [20];
  undefined1 auStack_19cc [20];
  undefined1 auStack_19b8 [20];
  undefined1 auStack_19a4 [20];
  undefined1 auStack_1990 [20];
  undefined1 auStack_197c [20];
  undefined1 auStack_1968 [20];
  undefined1 auStack_1954 [20];
  undefined1 auStack_1940 [20];
  undefined1 auStack_192c [20];
  undefined1 auStack_1918 [20];
  undefined1 auStack_1904 [20];
  undefined1 auStack_18f0 [20];
  undefined1 auStack_18dc [20];
  undefined1 auStack_18c8 [20];
  undefined1 auStack_18b4 [20];
  undefined1 auStack_18a0 [20];
  undefined1 auStack_188c [20];
  undefined1 auStack_1878 [20];
  undefined1 auStack_1864 [20];
  undefined1 auStack_1850 [20];
  undefined1 auStack_183c [20];
  undefined1 auStack_1828 [20];
  undefined1 auStack_1814 [20];
  undefined1 auStack_1800 [20];
  undefined1 auStack_17ec [20];
  undefined1 auStack_17d8 [20];
  undefined1 auStack_17c4 [20];
  undefined1 auStack_17b0 [20];
  undefined1 auStack_179c [20];
  undefined1 auStack_1788 [20];
  undefined1 auStack_1774 [20];
  undefined1 auStack_1760 [20];
  undefined1 auStack_174c [20];
  undefined1 auStack_1738 [20];
  undefined1 auStack_1724 [20];
  undefined1 auStack_1710 [20];
  undefined1 auStack_16fc [20];
  undefined1 auStack_16e8 [20];
  undefined1 auStack_16d4 [20];
  undefined1 auStack_16c0 [20];
  undefined1 auStack_16ac [20];
  undefined1 auStack_1698 [20];
  undefined1 auStack_1684 [20];
  undefined1 auStack_1670 [20];
  undefined1 auStack_165c [20];
  undefined1 auStack_1648 [20];
  undefined1 auStack_1634 [20];
  undefined1 auStack_1620 [20];
  undefined1 auStack_160c [20];
  undefined1 auStack_15f8 [20];
  undefined1 auStack_15e4 [20];
  undefined1 auStack_15d0 [20];
  undefined1 auStack_15bc [20];
  undefined1 auStack_15a8 [20];
  undefined1 auStack_1594 [20];
  undefined1 auStack_1580 [20];
  undefined1 auStack_156c [20];
  undefined1 auStack_1558 [20];
  undefined1 auStack_1544 [20];
  undefined1 auStack_1530 [20];
  undefined1 auStack_151c [20];
  undefined1 auStack_1508 [20];
  undefined1 auStack_14f4 [20];
  undefined1 auStack_14e0 [20];
  undefined1 auStack_14cc [20];
  undefined1 auStack_14b8 [20];
  undefined1 auStack_14a4 [20];
  undefined1 auStack_1490 [20];
  undefined1 auStack_147c [20];
  undefined1 auStack_1468 [20];
  undefined1 auStack_1454 [20];
  undefined1 auStack_1440 [20];
  undefined1 auStack_142c [20];
  undefined1 auStack_1418 [20];
  undefined1 auStack_1404 [20];
  undefined1 auStack_13f0 [20];
  undefined1 auStack_13dc [20];
  undefined1 auStack_13c8 [20];
  undefined1 auStack_13b4 [20];
  undefined1 auStack_13a0 [20];
  undefined1 auStack_138c [20];
  undefined1 auStack_1378 [20];
  undefined1 auStack_1364 [20];
  undefined1 auStack_1350 [20];
  undefined1 auStack_133c [20];
  undefined1 auStack_1328 [20];
  undefined1 auStack_1314 [20];
  undefined1 auStack_1300 [20];
  undefined1 auStack_12ec [20];
  undefined1 auStack_12d8 [20];
  undefined1 auStack_12c4 [20];
  undefined1 auStack_12b0 [20];
  undefined1 auStack_129c [20];
  undefined1 auStack_1288 [20];
  undefined1 auStack_1274 [20];
  undefined1 auStack_1260 [20];
  undefined1 auStack_124c [20];
  undefined1 auStack_1238 [20];
  undefined1 auStack_1224 [20];
  undefined1 auStack_1210 [20];
  undefined1 auStack_11fc [20];
  undefined1 auStack_11e8 [20];
  undefined1 auStack_11d4 [20];
  undefined1 auStack_11c0 [20];
  undefined1 auStack_11ac [20];
  undefined1 auStack_1198 [20];
  undefined1 auStack_1184 [20];
  undefined1 auStack_1170 [20];
  undefined1 auStack_115c [20];
  undefined1 auStack_1148 [20];
  undefined1 auStack_1134 [20];
  undefined1 auStack_1120 [20];
  undefined1 auStack_110c [20];
  undefined1 auStack_10f8 [20];
  undefined1 auStack_10e4 [20];
  undefined1 auStack_10d0 [20];
  undefined1 auStack_10bc [20];
  undefined1 auStack_10a8 [20];
  undefined1 auStack_1094 [20];
  undefined1 auStack_1080 [20];
  undefined1 auStack_106c [20];
  undefined1 auStack_1058 [20];
  undefined1 auStack_1044 [20];
  undefined1 auStack_1030 [20];
  undefined1 auStack_101c [20];
  undefined1 auStack_1008 [20];
  undefined1 auStack_ff4 [20];
  undefined1 auStack_fe0 [20];
  undefined1 auStack_fcc [20];
  undefined1 auStack_fb8 [20];
  undefined1 auStack_fa4 [20];
  undefined1 auStack_f90 [20];
  undefined1 auStack_f7c [20];
  undefined1 auStack_f68 [20];
  undefined1 auStack_f54 [20];
  undefined1 auStack_f40 [20];
  undefined1 auStack_f2c [20];
  undefined1 auStack_f18 [20];
  undefined1 auStack_f04 [20];
  undefined1 auStack_ef0 [20];
  undefined1 auStack_edc [20];
  undefined1 auStack_ec8 [20];
  undefined1 auStack_eb4 [20];
  undefined1 auStack_ea0 [20];
  undefined1 auStack_e8c [20];
  undefined1 auStack_e78 [20];
  undefined1 auStack_e64 [20];
  undefined1 auStack_e50 [20];
  undefined1 auStack_e3c [20];
  undefined1 auStack_e28 [20];
  undefined1 auStack_e14 [20];
  undefined1 auStack_e00 [20];
  undefined1 auStack_dec [20];
  undefined1 auStack_dd8 [20];
  undefined1 auStack_dc4 [20];
  undefined1 auStack_db0 [20];
  undefined1 auStack_d9c [20];
  undefined1 auStack_d88 [20];
  undefined1 auStack_d74 [20];
  undefined1 auStack_d60 [20];
  undefined1 auStack_d4c [20];
  undefined1 auStack_d38 [20];
  undefined1 auStack_d24 [20];
  undefined1 auStack_d10 [20];
  undefined1 auStack_cfc [20];
  undefined1 auStack_ce8 [20];
  undefined1 auStack_cd4 [20];
  undefined1 auStack_cc0 [20];
  undefined1 auStack_cac [20];
  undefined1 auStack_c98 [20];
  undefined1 auStack_c84 [20];
  undefined1 auStack_c70 [20];
  undefined1 auStack_c5c [20];
  undefined1 auStack_c48 [20];
  undefined1 auStack_c34 [20];
  undefined1 auStack_c20 [20];
  undefined1 auStack_c0c [20];
  undefined1 auStack_bf8 [20];
  undefined1 auStack_be4 [20];
  undefined1 auStack_bd0 [20];
  undefined1 auStack_bbc [20];
  undefined1 auStack_ba8 [20];
  undefined1 auStack_b94 [20];
  undefined1 auStack_b80 [20];
  undefined1 auStack_b6c [20];
  undefined1 auStack_b58 [20];
  undefined1 auStack_b44 [20];
  undefined1 auStack_b30 [20];
  undefined1 auStack_b1c [20];
  undefined1 auStack_b08 [20];
  undefined1 auStack_af4 [20];
  undefined1 auStack_ae0 [20];
  undefined1 auStack_acc [20];
  undefined1 auStack_ab8 [20];
  undefined1 auStack_aa4 [20];
  undefined1 auStack_a90 [20];
  undefined1 auStack_a7c [20];
  undefined1 auStack_a68 [20];
  undefined1 auStack_a54 [20];
  undefined1 auStack_a40 [20];
  undefined1 auStack_a2c [20];
  undefined1 auStack_a18 [20];
  undefined1 auStack_a04 [20];
  undefined1 auStack_9f0 [20];
  undefined1 auStack_9dc [20];
  undefined1 auStack_9c8 [20];
  undefined1 auStack_9b4 [20];
  undefined1 auStack_9a0 [20];
  undefined1 auStack_98c [20];
  undefined1 auStack_978 [20];
  undefined1 auStack_964 [20];
  undefined1 auStack_950 [20];
  undefined1 auStack_93c [20];
  undefined1 auStack_928 [20];
  undefined1 auStack_914 [20];
  undefined1 auStack_900 [20];
  undefined1 auStack_8ec [20];
  undefined1 auStack_8d8 [20];
  undefined1 auStack_8c4 [20];
  undefined1 auStack_8b0 [20];
  undefined1 auStack_89c [20];
  undefined1 auStack_888 [20];
  undefined1 auStack_874 [20];
  undefined1 auStack_860 [20];
  undefined1 auStack_84c [20];
  undefined1 auStack_838 [20];
  undefined1 auStack_824 [20];
  undefined1 auStack_810 [20];
  undefined1 auStack_7fc [20];
  undefined1 auStack_7e8 [20];
  undefined1 auStack_7d4 [20];
  undefined1 auStack_7c0 [20];
  undefined1 auStack_7ac [20];
  undefined1 auStack_798 [20];
  undefined1 auStack_784 [20];
  undefined1 auStack_770 [20];
  undefined1 auStack_75c [20];
  undefined1 auStack_748 [20];
  undefined1 auStack_734 [20];
  undefined1 auStack_720 [20];
  undefined1 auStack_70c [20];
  undefined1 auStack_6f8 [20];
  undefined1 auStack_6e4 [20];
  undefined1 auStack_6d0 [20];
  undefined1 auStack_6bc [20];
  undefined1 auStack_6a8 [20];
  undefined1 auStack_694 [20];
  undefined1 auStack_680 [20];
  undefined1 auStack_66c [20];
  undefined1 auStack_658 [20];
  undefined1 auStack_644 [20];
  undefined1 auStack_630 [20];
  undefined1 auStack_61c [20];
  undefined1 auStack_608 [20];
  undefined1 auStack_5f4 [20];
  undefined1 auStack_5e0 [20];
  undefined1 auStack_5cc [20];
  undefined1 auStack_5b8 [20];
  undefined1 auStack_5a4 [20];
  undefined1 auStack_590 [20];
  undefined1 auStack_57c [20];
  undefined1 auStack_568 [20];
  undefined1 auStack_554 [20];
  undefined1 auStack_540 [20];
  undefined1 auStack_52c [20];
  undefined1 auStack_518 [20];
  undefined1 auStack_504 [20];
  undefined1 auStack_4f0 [20];
  undefined1 auStack_4dc [20];
  undefined1 auStack_4c8 [20];
  undefined1 auStack_4b4 [20];
  undefined1 auStack_4a0 [20];
  undefined1 auStack_48c [20];
  undefined1 auStack_478 [20];
  undefined1 auStack_464 [20];
  undefined1 auStack_450 [20];
  undefined1 auStack_43c [20];
  undefined1 auStack_428 [20];
  undefined1 auStack_414 [20];
  undefined1 auStack_400 [20];
  undefined1 auStack_3ec [20];
  undefined1 auStack_3d8 [20];
  undefined1 auStack_3c4 [20];
  undefined1 auStack_3b0 [20];
  undefined1 auStack_39c [20];
  undefined1 auStack_388 [20];
  undefined1 auStack_374 [20];
  undefined1 auStack_360 [20];
  undefined1 auStack_34c [20];
  undefined1 auStack_338 [20];
  undefined1 auStack_324 [20];
  undefined1 auStack_310 [20];
  undefined1 auStack_2fc [20];
  undefined1 auStack_2e8 [20];
  undefined1 auStack_2d4 [20];
  undefined1 auStack_2c0 [20];
  undefined1 auStack_2ac [20];
  undefined1 auStack_298 [20];
  undefined1 auStack_284 [20];
  undefined1 auStack_270 [20];
  undefined1 auStack_25c [20];
  undefined1 auStack_248 [20];
  undefined1 auStack_234 [20];
  undefined1 auStack_220 [20];
  undefined1 auStack_20c [20];
  undefined1 auStack_1f8 [20];
  undefined1 auStack_1e4 [20];
  undefined1 auStack_1d0 [20];
  undefined1 auStack_1bc [20];
  undefined1 auStack_1a8 [20];
  undefined1 auStack_194 [20];
  undefined1 auStack_180 [20];
  undefined1 auStack_16c [20];
  undefined1 auStack_158 [20];
  undefined1 auStack_144 [20];
  undefined1 auStack_130 [20];
  undefined1 auStack_11c [20];
  undefined1 auStack_108 [20];
  undefined1 auStack_f4 [20];
  undefined1 auStack_e0 [20];
  undefined1 auStack_cc [20];
  undefined1 auStack_b8 [20];
  undefined1 auStack_a4 [20];
  undefined1 auStack_90 [20];
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  undefined1 auStack_18 [24];
  
  uVar1 = Vec3_ctor_xyz(&DAT_8c126508,ar5,ar6,ar7);
  uVar3 = 0x8c438478;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c438478,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126518,pcVar2,uVar3,ar7);
  uVar3 = 0x8c438484;
  global_list_push(uVar1,Vec3_dtor,0x8c438484,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126528,Vec3_ctor_xyz,uVar3,ar7);
  uVar3 = 0x8c438490;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c438490,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126538,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43849c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43849c,ar7);
  FUN_8c0d7668(auStack_18,pcVar2,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43957c,auStack_18,uVar3,ar7);
  uVar3 = 0x8c4384a8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384a8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_18,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_2c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439590,auStack_2c,uVar3,ar7);
  uVar3 = 0x8c4384b4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384b4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_2c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_40,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4395a4,auStack_40,FUN_8c0f3df8,ar7);
  uVar3 = 0x8c4384c0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384c0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_40,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_54,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4395b8,auStack_54,uVar3,ar7);
  uVar3 = 0x8c4384cc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384cc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_54,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_68,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4395cc,auStack_68,uVar3,ar7);
  uVar3 = 0x8c4384d8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384d8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_68,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_7c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4395e0,auStack_7c,uVar3,ar7);
  uVar3 = 0x8c4384e4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384e4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_7c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_90,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4395f4,auStack_90,uVar3,ar7);
  uVar3 = 0x8c4384f0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384f0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_90,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439608,auStack_a4,uVar3,ar7);
  uVar3 = 0x8c4384fc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4384fc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43961c,auStack_b8,uVar3,ar7);
  uVar3 = 0x8c438508;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438508,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_cc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439630,auStack_cc,uVar3,ar7);
  uVar3 = 0x8c438514;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438514,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_cc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439644,auStack_e0,uVar3,ar7);
  uVar3 = 0x8c438520;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438520,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439658,auStack_f4,uVar3,ar7);
  uVar3 = 0x8c43852c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43852c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_108,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43966c,auStack_108,uVar3,ar7);
  uVar3 = 0x8c438538;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438538,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_108,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_11c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439680,auStack_11c,uVar3,ar7);
  uVar3 = 0x8c438544;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438544,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_11c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_130,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439694,auStack_130,uVar3,ar7);
  uVar3 = 0x8c438550;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438550,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_130,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_144,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4396a8,auStack_144,uVar3,ar7);
  uVar3 = 0x8c43855c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43855c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_144,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_158,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4396bc,auStack_158,uVar3,ar7);
  uVar3 = 0x8c438568;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438568,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_158,0xffffffff,uVar3,ar7);
  pcVar2 = FUN_8c0d7668;
  FUN_8c0d7668(auStack_16c,uVar1,FUN_8c0d7668,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4396d0,auStack_16c,pcVar2,ar7);
  uVar3 = 0x8c438574;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438574,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_16c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_180,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4396e4,auStack_180,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438580,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_180,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_194,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4396f8,auStack_194,uVar3,ar7);
  uVar3 = 0x8c43858c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43858c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_194,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43970c,auStack_1a8,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438598,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a8,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_1bc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439720,auStack_1bc,uVar3,ar7);
  uVar3 = 0x8c4385a4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385a4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1bc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1d0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439734,auStack_1d0,uVar3,ar7);
  uVar3 = 0x8c4385b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385b0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1d0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1e4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439748,auStack_1e4,uVar3,ar7);
  uVar3 = 0x8c4385bc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385bc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1e4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1f8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43975c,auStack_1f8,uVar3,ar7);
  uVar3 = 0x8c4385c8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385c8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1f8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_20c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439770,auStack_20c,uVar3,ar7);
  uVar3 = 0x8c4385d4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385d4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_20c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_220,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439784,auStack_220,uVar3,ar7);
  uVar3 = 0x8c4385e0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385e0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_220,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_234,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439798,auStack_234,uVar3,ar7);
  uVar3 = 0x8c4385ec;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385ec,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_234,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_248,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4397ac,auStack_248,uVar3,ar7);
  uVar3 = 0x8c4385f8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4385f8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_248,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_25c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4397c0,auStack_25c,uVar3,ar7);
  uVar3 = 0x8c438604;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438604,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_25c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_270,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4397d4,auStack_270,uVar3,ar7);
  uVar3 = 0x8c438610;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438610,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_270,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_284,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4397e8,auStack_284,uVar3,ar7);
  uVar3 = 0x8c43861c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43861c,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_284,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_298,auStack_298,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4397fc,auStack_298,uVar3,ar7);
  uVar3 = 0x8c438628;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438628,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_298,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_2ac,auStack_2ac,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439810,auStack_2ac,0x294,ar7);
  uVar3 = 0x8c438634;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438634,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_2ac,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_2c0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439824,auStack_2c0,uVar3,ar7);
  uVar3 = 0x8c438640;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438640,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_2c0,0xffffffff,uVar3,ar7);
  puVar4 = auStack_2d4;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439838,auStack_2d4,puVar4,ar7);
  uVar3 = 0x8c43864c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43864c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_2d4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_2e8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43984c,auStack_2e8,uVar3,ar7);
  uVar3 = 0x8c438658;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438658,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_2e8,0xffffffff,uVar3,ar7);
  puVar4 = auStack_2fc;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439860,auStack_2fc,puVar4,ar7);
  uVar3 = 0x8c438664;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438664,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_2fc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_310,auStack_310,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439874,auStack_310,uVar3,ar7);
  uVar3 = 0x8c438670;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438670,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_310,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_324,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439888,auStack_324,uVar3,ar7);
  uVar3 = 0x8c43867c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43867c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_324,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_338,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43989c,auStack_338,uVar3,ar7);
  uVar3 = 0x8c438688;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438688,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_338,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_34c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4398b0,auStack_34c,uVar3,ar7);
  uVar3 = 0x8c438694;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438694,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_34c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_360,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4398c4,auStack_360,uVar3,ar7);
  uVar3 = 0x8c4386a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386a0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_360,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_374,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4398d8,auStack_374,uVar3,ar7);
  uVar3 = 0x8c4386ac;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386ac,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_374,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_388,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4398ec,auStack_388,uVar3,ar7);
  uVar3 = 0x8c4386b8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386b8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_388,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_39c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439900,auStack_39c,uVar3,ar7);
  uVar3 = 0x8c4386c4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386c4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_39c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_3b0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439914,auStack_3b0,uVar3,ar7);
  uVar3 = 0x8c4386d0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386d0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_3b0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_3c4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439928,auStack_3c4,uVar3,ar7);
  uVar3 = 0x8c4386dc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386dc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_3c4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_3d8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43993c,auStack_3d8,uVar3,ar7);
  uVar3 = 0x8c4386e8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386e8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_3d8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_3ec,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439950,auStack_3ec,FUN_8c0f3df8,ar7);
  uVar3 = 0x8c4386f4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4386f4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_3ec,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_400,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439964,auStack_400,uVar3,ar7);
  uVar3 = 0x8c438700;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438700,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_400,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_414,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439978,auStack_414,auStack_414,ar7);
  uVar3 = 0x8c43870c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43870c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_414,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_428,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43998c,auStack_428,uVar3,ar7);
  uVar3 = 0x8c438718;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438718,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_428,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_43c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4399a0,auStack_43c,auStack_43c,ar7);
  uVar3 = 0x8c438724;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438724,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_43c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_450,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4399b4,auStack_450,uVar3,ar7);
  uVar3 = 0x8c438730;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438730,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_450,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_464,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4399c8,auStack_464,uVar3,ar7);
  uVar3 = 0x8c43873c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43873c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_464,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_478,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4399dc,auStack_478,uVar3,ar7);
  uVar3 = 0x8c438748;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438748,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_478,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_48c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c4399f0,auStack_48c,uVar3,ar7);
  uVar3 = 0x8c438754;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438754,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_48c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_4a0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a04,auStack_4a0,uVar3,ar7);
  uVar3 = 0x8c438760;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438760,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_4a0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_4b4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a18,auStack_4b4,uVar3,ar7);
  uVar3 = 0x8c43876c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43876c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_4b4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_4c8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a2c,auStack_4c8,uVar3,ar7);
  uVar3 = 0x8c438778;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438778,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_4c8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_4dc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a40,auStack_4dc,uVar3,ar7);
  uVar3 = 0x8c438784;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438784,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_4dc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_4f0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a54,auStack_4f0,uVar3,ar7);
  uVar3 = 0x8c438790;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438790,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_4f0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_504,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a68,auStack_504,uVar3,ar7);
  uVar3 = 0x8c43879c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43879c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_504,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_518,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a7c,auStack_518,uVar3,ar7);
  uVar3 = 0x8c4387a8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387a8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_518,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_52c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439a90,auStack_52c,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387b4,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_52c,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_540,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439aa4,auStack_540,uVar3,ar7);
  uVar3 = 0x8c4387c0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387c0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_540,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_554,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ab8,auStack_554,uVar3,ar7);
  uVar3 = 0x8c4387cc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387cc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_554,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_568,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439acc,auStack_568,uVar3,ar7);
  uVar3 = 0x8c4387d8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387d8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_568,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_57c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ae0,auStack_57c,uVar3,ar7);
  uVar3 = 0x8c4387e4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387e4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_57c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_590,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439af4,auStack_590,uVar3,ar7);
  uVar3 = 0x8c4387f0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387f0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_590,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_5a4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b08,auStack_5a4,uVar3,ar7);
  uVar3 = 0x8c4387fc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4387fc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_5a4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_5b8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b1c,auStack_5b8,uVar3,ar7);
  uVar3 = 0x8c438808;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438808,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_5b8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_5cc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b30,auStack_5cc,uVar3,ar7);
  uVar3 = 0x8c438814;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438814,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_5cc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_5e0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b44,auStack_5e0,uVar3,ar7);
  uVar3 = 0x8c438820;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438820,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_5e0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_5f4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b58,auStack_5f4,uVar3,ar7);
  uVar3 = 0x8c43882c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43882c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_5f4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_608,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b6c,auStack_608,uVar3,ar7);
  uVar3 = 0x8c438838;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438838,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_608,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_61c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b80,auStack_61c,uVar3,ar7);
  uVar3 = 0x8c438844;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438844,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_61c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_630,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439b94,auStack_630,uVar3,ar7);
  uVar3 = 0x8c438850;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438850,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_630,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_644,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ba8,auStack_644,uVar3,ar7);
  uVar3 = 0x8c43885c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43885c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_644,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_658,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439bbc,auStack_658,uVar3,ar7);
  uVar3 = 0x8c438868;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438868,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_658,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_66c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439bd0,auStack_66c,uVar3,ar7);
  uVar3 = 0x8c438874;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438874,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_66c,0xffffffff,uVar3,ar7);
  pcVar2 = FUN_8c0d7668;
  FUN_8c0d7668(auStack_680,uVar1,FUN_8c0d7668,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439be4,auStack_680,pcVar2,ar7);
  uVar3 = 0x8c438880;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438880,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_680,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_694,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439bf8,auStack_694,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43888c,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_694,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_6a8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c0c,auStack_6a8,uVar3,ar7);
  uVar3 = 0x8c438898;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438898,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_6a8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_6bc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c20,auStack_6bc,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388a4,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_6bc,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_6d0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c34,auStack_6d0,uVar3,ar7);
  uVar3 = 0x8c4388b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388b0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_6d0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_6e4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c48,auStack_6e4,uVar3,ar7);
  uVar3 = 0x8c4388bc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388bc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_6e4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_6f8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c5c,auStack_6f8,uVar3,ar7);
  uVar3 = 0x8c4388c8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388c8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_6f8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_70c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c70,auStack_70c,uVar3,ar7);
  uVar3 = 0x8c4388d4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388d4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_70c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_720,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c84,auStack_720,uVar3,ar7);
  uVar3 = 0x8c4388e0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388e0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_720,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_734,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439c98,auStack_734,uVar3,ar7);
  uVar3 = 0x8c4388ec;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388ec,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_734,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_748,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439cac,auStack_748,uVar3,ar7);
  uVar3 = 0x8c4388f8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4388f8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_748,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_75c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439cc0,auStack_75c,uVar3,ar7);
  uVar3 = 0x8c438904;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438904,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_75c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_770,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439cd4,auStack_770,uVar3,ar7);
  uVar3 = 0x8c438910;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438910,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_770,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_784,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ce8,auStack_784,uVar3,ar7);
  uVar3 = 0x8c43891c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43891c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_784,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_798,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439cfc,auStack_798,uVar3,ar7);
  uVar3 = 0x8c438928;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438928,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_798,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_7ac,auStack_7ac,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d10,auStack_7ac,uVar3,ar7);
  uVar3 = 0x8c438934;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438934,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_7ac,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_7c0,auStack_7c0,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d24,auStack_7c0,0x7a8,ar7);
  uVar3 = 0x8c438940;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438940,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_7c0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_7d4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d38,auStack_7d4,uVar3,ar7);
  uVar3 = 0x8c43894c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43894c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_7d4,0xffffffff,uVar3,ar7);
  puVar4 = auStack_7e8;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d4c,auStack_7e8,puVar4,ar7);
  uVar3 = 0x8c438958;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438958,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_7e8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_7fc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d60,auStack_7fc,uVar3,ar7);
  uVar3 = 0x8c438964;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438964,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_7fc,0xffffffff,uVar3,ar7);
  puVar4 = auStack_810;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d74,auStack_810,puVar4,ar7);
  uVar3 = 0x8c438970;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438970,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_810,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_824,auStack_824,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d88,auStack_824,uVar3,ar7);
  uVar3 = 0x8c43897c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43897c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_824,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_838,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439d9c,auStack_838,uVar3,ar7);
  uVar3 = 0x8c438988;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438988,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_838,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_84c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439db0,auStack_84c,uVar3,ar7);
  uVar3 = 0x8c438994;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438994,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_84c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_860,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439dc4,auStack_860,uVar3,ar7);
  uVar3 = 0x8c4389a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389a0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_860,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_874,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439dd8,auStack_874,uVar3,ar7);
  uVar3 = 0x8c4389ac;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389ac,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_874,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_888,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439dec,auStack_888,uVar3,ar7);
  uVar3 = 0x8c4389b8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389b8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_888,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_89c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e00,auStack_89c,uVar3,ar7);
  uVar3 = 0x8c4389c4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389c4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_89c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_8b0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e14,auStack_8b0,uVar3,ar7);
  uVar3 = 0x8c4389d0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389d0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_8b0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_8c4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e28,auStack_8c4,uVar3,ar7);
  uVar3 = 0x8c4389dc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389dc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_8c4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_8d8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e3c,auStack_8d8,uVar3,ar7);
  uVar3 = 0x8c4389e8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389e8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_8d8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_8ec,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e50,auStack_8ec,uVar3,ar7);
  uVar3 = 0x8c4389f4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4389f4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_8ec,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_900,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e64,auStack_900,FUN_8c0f3df8,ar7);
  uVar3 = 0x8c438a00;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a00,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_900,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_914,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e78,auStack_914,uVar3,ar7);
  uVar3 = 0x8c438a0c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a0c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_914,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_928,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439e8c,auStack_928,auStack_928,ar7);
  uVar3 = 0x8c438a18;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a18,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_928,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_93c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ea0,auStack_93c,uVar3,ar7);
  uVar3 = 0x8c438a24;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a24,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_93c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_950,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439eb4,auStack_950,auStack_950,ar7);
  uVar3 = 0x8c438a30;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a30,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_950,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_964,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ec8,auStack_964,uVar3,ar7);
  uVar3 = 0x8c438a3c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a3c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_964,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_978,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439edc,auStack_978,uVar3,ar7);
  uVar3 = 0x8c438a48;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a48,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_978,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_98c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ef0,auStack_98c,uVar3,ar7);
  uVar3 = 0x8c438a54;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a54,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_98c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_9a0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f04,auStack_9a0,uVar3,ar7);
  uVar3 = 0x8c438a60;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a60,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_9a0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_9b4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f18,auStack_9b4,uVar3,ar7);
  uVar3 = 0x8c438a6c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a6c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_9b4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_9c8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f2c,auStack_9c8,uVar3,ar7);
  uVar3 = 0x8c438a78;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a78,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_9c8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_9dc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f40,auStack_9dc,uVar3,ar7);
  uVar3 = 0x8c438a84;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a84,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_9dc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_9f0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f54,auStack_9f0,uVar3,ar7);
  uVar3 = 0x8c438a90;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a90,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_9f0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a04,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f68,auStack_a04,uVar3,ar7);
  uVar3 = 0x8c438a9c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438a9c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a04,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a18,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f7c,auStack_a18,uVar3,ar7);
  uVar3 = 0x8c438aa8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438aa8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a18,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a2c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439f90,auStack_a2c,uVar3,ar7);
  uVar3 = 0x8c438ab4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ab4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a2c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a40,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439fa4,auStack_a40,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ac0,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a40,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_a54,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439fb8,auStack_a54,uVar3,ar7);
  uVar3 = 0x8c438acc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438acc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a54,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a68,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439fcc,auStack_a68,uVar3,ar7);
  uVar3 = 0x8c438ad8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ad8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a68,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a7c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439fe0,auStack_a7c,uVar3,ar7);
  uVar3 = 0x8c438ae4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ae4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a7c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_a90,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c439ff4,auStack_a90,uVar3,ar7);
  uVar3 = 0x8c438af0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438af0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_a90,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_aa4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a008,auStack_aa4,uVar3,ar7);
  uVar3 = 0x8c438afc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438afc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_aa4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ab8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a01c,auStack_ab8,uVar3,ar7);
  uVar3 = 0x8c438b08;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b08,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ab8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_acc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a030,auStack_acc,uVar3,ar7);
  uVar3 = 0x8c438b14;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b14,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_acc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ae0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a044,auStack_ae0,uVar3,ar7);
  uVar3 = 0x8c438b20;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b20,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ae0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_af4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a058,auStack_af4,uVar3,ar7);
  uVar3 = 0x8c438b2c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b2c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_af4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b08,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a06c,auStack_b08,uVar3,ar7);
  uVar3 = 0x8c438b38;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b38,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b08,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b1c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a080,auStack_b1c,uVar3,ar7);
  uVar3 = 0x8c438b44;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b44,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b1c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b30,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a094,auStack_b30,uVar3,ar7);
  uVar3 = 0x8c438b50;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b50,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b30,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b44,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a0a8,auStack_b44,uVar3,ar7);
  uVar3 = 0x8c438b5c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b5c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b44,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b58,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a0bc,auStack_b58,uVar3,ar7);
  uVar3 = 0x8c438b68;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b68,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b58,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b6c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a0d0,auStack_b6c,uVar3,ar7);
  uVar3 = 0x8c438b74;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b74,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b6c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_b80,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a0e4,auStack_b80,uVar3,ar7);
  uVar3 = 0x8c438b80;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b80,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b80,0xffffffff,uVar3,ar7);
  pcVar2 = FUN_8c0d7668;
  FUN_8c0d7668(auStack_b94,uVar1,FUN_8c0d7668,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a0f8,auStack_b94,pcVar2,ar7);
  uVar3 = 0x8c438b8c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b8c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_b94,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ba8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a10c,auStack_ba8,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438b98,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ba8,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_bbc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a120,auStack_bbc,uVar3,ar7);
  uVar3 = 0x8c438ba4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ba4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_bbc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_bd0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a134,auStack_bd0,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438bb0,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_bd0,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_be4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a148,auStack_be4,uVar3,ar7);
  uVar3 = 0x8c438bbc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438bbc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_be4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_bf8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a15c,auStack_bf8,uVar3,ar7);
  uVar3 = 0x8c438bc8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438bc8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_bf8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c0c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a170,auStack_c0c,uVar3,ar7);
  uVar3 = 0x8c438bd4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438bd4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c0c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c20,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a184,auStack_c20,uVar3,ar7);
  uVar3 = 0x8c438be0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438be0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c20,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c34,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a198,auStack_c34,uVar3,ar7);
  uVar3 = 0x8c438bec;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438bec,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c34,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c48,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a1ac,auStack_c48,uVar3,ar7);
  uVar3 = 0x8c438bf8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438bf8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c48,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c5c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a1c0,auStack_c5c,uVar3,ar7);
  uVar3 = 0x8c438c04;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c04,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c5c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c70,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a1d4,auStack_c70,uVar3,ar7);
  uVar3 = 0x8c438c10;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c10,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c70,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c84,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a1e8,auStack_c84,uVar3,ar7);
  uVar3 = 0x8c438c1c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c1c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c84,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_c98,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a1fc,auStack_c98,uVar3,ar7);
  uVar3 = 0x8c438c28;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c28,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_c98,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_cac,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a210,auStack_cac,uVar3,ar7);
  uVar3 = 0x8c438c34;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c34,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_cac,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_cc0,auStack_cc0,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a224,auStack_cc0,uVar3,ar7);
  uVar3 = 0x8c438c40;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c40,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_cc0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_cd4,auStack_cd4,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a238,auStack_cd4,0xcbc,ar7);
  uVar3 = 0x8c438c4c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c4c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_cd4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ce8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a24c,auStack_ce8,uVar3,ar7);
  uVar3 = 0x8c438c58;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c58,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ce8,0xffffffff,uVar3,ar7);
  puVar4 = auStack_cfc;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a260,auStack_cfc,puVar4,ar7);
  uVar3 = 0x8c438c64;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c64,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_cfc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_d10,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a274,auStack_d10,uVar3,ar7);
  uVar3 = 0x8c438c70;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c70,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_d10,0xffffffff,uVar3,ar7);
  puVar4 = auStack_d24;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a288,auStack_d24,puVar4,ar7);
  uVar3 = 0x8c438c7c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c7c,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_d24,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_d38,auStack_d38,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a29c,auStack_d38,uVar3,ar7);
  uVar3 = 0x8c438c88;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c88,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_d38,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_d4c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a2b0,auStack_d4c,uVar3,ar7);
  uVar3 = 0x8c438c94;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438c94,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_d4c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_d60,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a2c4,auStack_d60,uVar3,ar7);
  uVar3 = 0x8c438ca0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ca0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_d60,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_d74,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a2d8,auStack_d74,uVar3,ar7);
  uVar3 = 0x8c438cac;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438cac,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_d74,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_d88,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a2ec,auStack_d88,uVar3,ar7);
  uVar3 = 0x8c438cb8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438cb8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_d88,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_d9c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a300,auStack_d9c,uVar3,ar7);
  uVar3 = 0x8c438cc4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438cc4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_d9c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_db0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a314,auStack_db0,uVar3,ar7);
  uVar3 = 0x8c438cd0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438cd0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_db0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_dc4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a328,auStack_dc4,uVar3,ar7);
  uVar3 = 0x8c438cdc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438cdc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_dc4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_dd8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a33c,auStack_dd8,uVar3,ar7);
  uVar3 = 0x8c438ce8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ce8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_dd8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_dec,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a350,auStack_dec,uVar3,ar7);
  uVar3 = 0x8c438cf4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438cf4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_dec,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e00,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a364,auStack_e00,uVar3,ar7);
  uVar3 = 0x8c438d00;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d00,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e00,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e14,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a378,auStack_e14,FUN_8c0f3df8,ar7);
  uVar3 = 0x8c438d0c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d0c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e14,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e28,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a38c,auStack_e28,uVar3,ar7);
  uVar3 = 0x8c438d18;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d18,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e28,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e3c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a3a0,auStack_e3c,auStack_e3c,ar7);
  uVar3 = 0x8c438d24;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d24,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e3c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e50,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a3b4,auStack_e50,uVar3,ar7);
  uVar3 = 0x8c438d30;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d30,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e50,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e64,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a3c8,auStack_e64,auStack_e64,ar7);
  uVar3 = 0x8c438d3c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d3c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e64,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e78,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a3dc,auStack_e78,uVar3,ar7);
  uVar3 = 0x8c438d48;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d48,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e78,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_e8c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a3f0,auStack_e8c,uVar3,ar7);
  uVar3 = 0x8c438d54;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d54,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_e8c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ea0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a404,auStack_ea0,uVar3,ar7);
  uVar3 = 0x8c438d60;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d60,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ea0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_eb4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a418,auStack_eb4,uVar3,ar7);
  uVar3 = 0x8c438d6c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d6c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_eb4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ec8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a42c,auStack_ec8,uVar3,ar7);
  uVar3 = 0x8c438d78;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d78,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ec8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_edc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a440,auStack_edc,uVar3,ar7);
  uVar3 = 0x8c438d84;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d84,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_edc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ef0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a454,auStack_ef0,uVar3,ar7);
  uVar3 = 0x8c438d90;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d90,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ef0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f04,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a468,auStack_f04,uVar3,ar7);
  uVar3 = 0x8c438d9c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438d9c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f04,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f18,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a47c,auStack_f18,uVar3,ar7);
  uVar3 = 0x8c438da8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438da8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f18,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f2c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a490,auStack_f2c,uVar3,ar7);
  uVar3 = 0x8c438db4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438db4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f2c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f40,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a4a4,auStack_f40,uVar3,ar7);
  uVar3 = 0x8c438dc0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438dc0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f40,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f54,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a4b8,auStack_f54,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438dcc,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f54,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_f68,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a4cc,auStack_f68,uVar3,ar7);
  uVar3 = 0x8c438dd8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438dd8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f68,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f7c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a4e0,auStack_f7c,uVar3,ar7);
  uVar3 = 0x8c438de4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438de4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f7c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_f90,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a4f4,auStack_f90,uVar3,ar7);
  uVar3 = 0x8c438df0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438df0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_f90,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_fa4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a508,auStack_fa4,uVar3,ar7);
  uVar3 = 0x8c438dfc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438dfc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_fa4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_fb8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a51c,auStack_fb8,uVar3,ar7);
  uVar3 = 0x8c438e08;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e08,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_fb8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_fcc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a530,auStack_fcc,uVar3,ar7);
  uVar3 = 0x8c438e14;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e14,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_fcc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_fe0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a544,auStack_fe0,uVar3,ar7);
  uVar3 = 0x8c438e20;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e20,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_fe0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_ff4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a558,auStack_ff4,uVar3,ar7);
  uVar3 = 0x8c438e2c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e2c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_ff4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1008,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a56c,auStack_1008,uVar3,ar7);
  uVar3 = 0x8c438e38;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e38,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1008,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_101c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a580,auStack_101c,uVar3,ar7);
  uVar3 = 0x8c438e44;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e44,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_101c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1030,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a594,auStack_1030,uVar3,ar7);
  uVar3 = 0x8c438e50;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e50,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1030,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1044,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a5a8,auStack_1044,uVar3,ar7);
  uVar3 = 0x8c438e5c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e5c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1044,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1058,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a5bc,auStack_1058,uVar3,ar7);
  uVar3 = 0x8c438e68;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e68,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1058,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_106c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a5d0,auStack_106c,uVar3,ar7);
  uVar3 = 0x8c438e74;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e74,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_106c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1080,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a5e4,auStack_1080,uVar3,ar7);
  uVar3 = 0x8c438e80;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e80,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1080,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1094,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a5f8,auStack_1094,uVar3,ar7);
  uVar3 = 0x8c438e8c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e8c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1094,0xffffffff,uVar3,ar7);
  pcVar2 = FUN_8c0d7668;
  FUN_8c0d7668(auStack_10a8,uVar1,FUN_8c0d7668,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a60c,auStack_10a8,pcVar2,ar7);
  uVar3 = 0x8c438e98;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438e98,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_10a8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_10bc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a620,auStack_10bc,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ea4,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_10bc,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_10d0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a634,auStack_10d0,uVar3,ar7);
  uVar3 = 0x8c438eb0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438eb0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_10d0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_10e4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a648,auStack_10e4,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ebc,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_10e4,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_10f8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a65c,auStack_10f8,uVar3,ar7);
  uVar3 = 0x8c438ec8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ec8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_10f8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_110c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a670,auStack_110c,uVar3,ar7);
  uVar3 = 0x8c438ed4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ed4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_110c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1120,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a684,auStack_1120,uVar3,ar7);
  uVar3 = 0x8c438ee0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ee0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1120,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1134,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a698,auStack_1134,uVar3,ar7);
  uVar3 = 0x8c438eec;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438eec,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1134,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1148,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a6ac,auStack_1148,uVar3,ar7);
  uVar3 = 0x8c438ef8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ef8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1148,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_115c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a6c0,auStack_115c,uVar3,ar7);
  uVar3 = 0x8c438f04;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f04,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_115c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1170,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a6d4,auStack_1170,uVar3,ar7);
  uVar3 = 0x8c438f10;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f10,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1170,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1184,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a6e8,auStack_1184,uVar3,ar7);
  uVar3 = 0x8c438f1c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f1c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1184,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1198,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a6fc,auStack_1198,uVar3,ar7);
  uVar3 = 0x8c438f28;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f28,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1198,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_11ac,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a710,auStack_11ac,uVar3,ar7);
  uVar3 = 0x8c438f34;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f34,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_11ac,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_11c0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a724,auStack_11c0,uVar3,ar7);
  uVar3 = 0x8c438f40;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f40,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_11c0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_11d4,auStack_11d4,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a738,auStack_11d4,uVar3,ar7);
  uVar3 = 0x8c438f4c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f4c,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_11d4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_11e8,auStack_11e8,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a74c,auStack_11e8,0x11d0,ar7);
  uVar3 = 0x8c438f58;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f58,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_11e8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_11fc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a760,auStack_11fc,uVar3,ar7);
  uVar3 = 0x8c438f64;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f64,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_11fc,0xffffffff,uVar3,ar7);
  puVar4 = auStack_1210;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a774,auStack_1210,puVar4,ar7);
  uVar3 = 0x8c438f70;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f70,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1210,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1224,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a788,auStack_1224,uVar3,ar7);
  uVar3 = 0x8c438f7c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f7c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1224,0xffffffff,uVar3,ar7);
  puVar4 = auStack_1238;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a79c,auStack_1238,puVar4,ar7);
  uVar3 = 0x8c438f88;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f88,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_1238,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_124c,auStack_124c,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a7b0,auStack_124c,uVar3,ar7);
  uVar3 = 0x8c438f94;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438f94,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_124c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1260,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a7c4,auStack_1260,uVar3,ar7);
  uVar3 = 0x8c438fa0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438fa0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1260,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1274,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a7d8,auStack_1274,uVar3,ar7);
  uVar3 = 0x8c438fac;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438fac,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1274,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1288,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a7ec,auStack_1288,uVar3,ar7);
  uVar3 = 0x8c438fb8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438fb8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1288,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_129c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a800,auStack_129c,uVar3,ar7);
  uVar3 = 0x8c438fc4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438fc4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_129c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_12b0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a814,auStack_12b0,uVar3,ar7);
  uVar3 = 0x8c438fd0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438fd0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_12b0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_12c4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a828,auStack_12c4,uVar3,ar7);
  uVar3 = 0x8c438fdc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438fdc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_12c4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_12d8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a83c,auStack_12d8,uVar3,ar7);
  uVar3 = 0x8c438fe8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438fe8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_12d8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_12ec,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a850,auStack_12ec,uVar3,ar7);
  uVar3 = 0x8c438ff4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c438ff4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_12ec,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1300,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a864,auStack_1300,uVar3,ar7);
  uVar3 = 0x8c439000;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439000,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1300,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1314,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a878,auStack_1314,uVar3,ar7);
  uVar3 = 0x8c43900c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43900c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1314,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1328,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a88c,auStack_1328,FUN_8c0f3df8,ar7);
  uVar3 = 0x8c439018;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439018,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1328,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_133c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a8a0,auStack_133c,uVar3,ar7);
  uVar3 = 0x8c439024;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439024,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_133c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1350,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a8b4,auStack_1350,auStack_1350,ar7);
  uVar3 = 0x8c439030;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439030,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1350,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1364,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a8c8,auStack_1364,uVar3,ar7);
  uVar3 = 0x8c43903c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43903c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1364,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1378,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a8dc,auStack_1378,auStack_1378,ar7);
  uVar3 = 0x8c439048;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439048,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1378,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_138c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a8f0,auStack_138c,uVar3,ar7);
  uVar3 = 0x8c439054;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439054,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_138c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_13a0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a904,auStack_13a0,uVar3,ar7);
  uVar3 = 0x8c439060;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439060,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_13a0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_13b4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a918,auStack_13b4,uVar3,ar7);
  uVar3 = 0x8c43906c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43906c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_13b4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_13c8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a92c,auStack_13c8,uVar3,ar7);
  uVar3 = 0x8c439078;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439078,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_13c8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_13dc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a940,auStack_13dc,uVar3,ar7);
  uVar3 = 0x8c439084;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439084,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_13dc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_13f0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a954,auStack_13f0,uVar3,ar7);
  uVar3 = 0x8c439090;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439090,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_13f0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1404,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a968,auStack_1404,uVar3,ar7);
  uVar3 = 0x8c43909c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43909c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1404,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1418,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a97c,auStack_1418,uVar3,ar7);
  uVar3 = 0x8c4390a8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390a8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1418,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_142c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a990,auStack_142c,uVar3,ar7);
  uVar3 = 0x8c4390b4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390b4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_142c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1440,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a9a4,auStack_1440,uVar3,ar7);
  uVar3 = 0x8c4390c0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390c0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1440,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1454,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a9b8,auStack_1454,uVar3,ar7);
  uVar3 = 0x8c4390cc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390cc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1454,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1468,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a9cc,auStack_1468,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390d8,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1468,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_147c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a9e0,auStack_147c,uVar3,ar7);
  uVar3 = 0x8c4390e4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390e4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_147c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1490,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43a9f4,auStack_1490,uVar3,ar7);
  uVar3 = 0x8c4390f0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390f0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1490,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_14a4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa08,auStack_14a4,uVar3,ar7);
  uVar3 = 0x8c4390fc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4390fc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_14a4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_14b8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa1c,auStack_14b8,uVar3,ar7);
  uVar3 = 0x8c439108;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439108,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_14b8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_14cc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa30,auStack_14cc,uVar3,ar7);
  uVar3 = 0x8c439114;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439114,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_14cc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_14e0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa44,auStack_14e0,uVar3,ar7);
  uVar3 = 0x8c439120;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439120,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_14e0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_14f4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa58,auStack_14f4,uVar3,ar7);
  uVar3 = 0x8c43912c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43912c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_14f4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1508,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa6c,auStack_1508,uVar3,ar7);
  uVar3 = 0x8c439138;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439138,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1508,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_151c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa80,auStack_151c,uVar3,ar7);
  uVar3 = 0x8c439144;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439144,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_151c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1530,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aa94,auStack_1530,uVar3,ar7);
  uVar3 = 0x8c439150;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439150,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1530,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1544,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aaa8,auStack_1544,uVar3,ar7);
  uVar3 = 0x8c43915c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43915c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1544,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1558,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aabc,auStack_1558,uVar3,ar7);
  uVar3 = 0x8c439168;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439168,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1558,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_156c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aad0,auStack_156c,uVar3,ar7);
  uVar3 = 0x8c439174;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439174,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_156c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1580,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aae4,auStack_1580,uVar3,ar7);
  uVar3 = 0x8c439180;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439180,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1580,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1594,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aaf8,auStack_1594,uVar3,ar7);
  uVar3 = 0x8c43918c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43918c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1594,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_15a8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab0c,auStack_15a8,uVar3,ar7);
  uVar3 = 0x8c439198;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439198,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_15a8,0xffffffff,uVar3,ar7);
  pcVar2 = FUN_8c0d7668;
  FUN_8c0d7668(auStack_15bc,uVar1,FUN_8c0d7668,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab20,auStack_15bc,pcVar2,ar7);
  uVar3 = 0x8c4391a4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391a4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_15bc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_15d0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab34,auStack_15d0,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391b0,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_15d0,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_15e4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab48,auStack_15e4,uVar3,ar7);
  uVar3 = 0x8c4391bc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391bc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_15e4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_15f8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab5c,auStack_15f8,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391c8,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_15f8,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_160c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab70,auStack_160c,uVar3,ar7);
  uVar3 = 0x8c4391d4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391d4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_160c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1620,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab84,auStack_1620,uVar3,ar7);
  uVar3 = 0x8c4391e0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391e0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1620,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1634,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ab98,auStack_1634,uVar3,ar7);
  uVar3 = 0x8c4391ec;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391ec,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1634,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1648,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43abac,auStack_1648,uVar3,ar7);
  uVar3 = 0x8c4391f8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4391f8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1648,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_165c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43abc0,auStack_165c,uVar3,ar7);
  uVar3 = 0x8c439204;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439204,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_165c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1670,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43abd4,auStack_1670,uVar3,ar7);
  uVar3 = 0x8c439210;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439210,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1670,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1684,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43abe8,auStack_1684,uVar3,ar7);
  uVar3 = 0x8c43921c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43921c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1684,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1698,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43abfc,auStack_1698,uVar3,ar7);
  uVar3 = 0x8c439228;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439228,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1698,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_16ac,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac10,auStack_16ac,uVar3,ar7);
  uVar3 = 0x8c439234;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439234,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_16ac,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_16c0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac24,auStack_16c0,uVar3,ar7);
  uVar3 = 0x8c439240;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439240,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_16c0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_16d4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac38,auStack_16d4,uVar3,ar7);
  uVar3 = 0x8c43924c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43924c,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_16d4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_16e8,auStack_16e8,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac4c,auStack_16e8,uVar3,ar7);
  uVar3 = 0x8c439258;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439258,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_16e8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_16fc,auStack_16fc,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac60,auStack_16fc,0x16e4,ar7);
  uVar3 = 0x8c439264;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439264,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_16fc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1710,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac74,auStack_1710,uVar3,ar7);
  uVar3 = 0x8c439270;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439270,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1710,0xffffffff,uVar3,ar7);
  puVar4 = auStack_1724;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac88,auStack_1724,puVar4,ar7);
  uVar3 = 0x8c43927c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43927c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1724,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1738,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ac9c,auStack_1738,uVar3,ar7);
  uVar3 = 0x8c439288;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439288,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1738,0xffffffff,uVar3,ar7);
  puVar4 = auStack_174c;
  FUN_8c0d7668(puVar4,uVar1,puVar4,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43acb0,auStack_174c,puVar4,ar7);
  uVar3 = 0x8c439294;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439294,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_174c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1760,auStack_1760,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43acc4,auStack_1760,uVar3,ar7);
  uVar3 = 0x8c4392a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392a0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1760,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1774,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43acd8,auStack_1774,uVar3,ar7);
  uVar3 = 0x8c4392ac;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392ac,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1774,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1788,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43acec,auStack_1788,uVar3,ar7);
  uVar3 = 0x8c4392b8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392b8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1788,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_179c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad00,auStack_179c,uVar3,ar7);
  uVar3 = 0x8c4392c4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392c4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_179c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_17b0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad14,auStack_17b0,uVar3,ar7);
  uVar3 = 0x8c4392d0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392d0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_17b0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_17c4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad28,auStack_17c4,uVar3,ar7);
  uVar3 = 0x8c4392dc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392dc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_17c4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_17d8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad3c,auStack_17d8,uVar3,ar7);
  uVar3 = 0x8c4392e8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392e8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_17d8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_17ec,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad50,auStack_17ec,uVar3,ar7);
  uVar3 = 0x8c4392f4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4392f4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_17ec,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1800,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad64,auStack_1800,uVar3,ar7);
  uVar3 = 0x8c439300;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439300,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1800,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1814,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad78,auStack_1814,uVar3,ar7);
  uVar3 = 0x8c43930c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43930c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1814,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1828,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ad8c,auStack_1828,uVar3,ar7);
  uVar3 = 0x8c439318;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439318,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1828,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_183c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ada0,auStack_183c,FUN_8c0f3df8,ar7);
  uVar3 = 0x8c439324;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439324,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_183c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1850,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43adb4,auStack_1850,uVar3,ar7);
  uVar3 = 0x8c439330;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439330,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1850,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1864,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43adc8,auStack_1864,auStack_1864,ar7);
  uVar3 = 0x8c43933c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43933c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1864,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1878,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43addc,auStack_1878,uVar3,ar7);
  uVar3 = 0x8c439348;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439348,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1878,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_188c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43adf0,auStack_188c,auStack_188c,ar7);
  uVar3 = 0x8c439354;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439354,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_188c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_18a0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae04,auStack_18a0,uVar3,ar7);
  uVar3 = 0x8c439360;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439360,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_18a0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_18b4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae18,auStack_18b4,uVar3,ar7);
  uVar3 = 0x8c43936c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43936c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_18b4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_18c8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae2c,auStack_18c8,uVar3,ar7);
  uVar3 = 0x8c439378;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439378,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_18c8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_18dc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae40,auStack_18dc,uVar3,ar7);
  uVar3 = 0x8c439384;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439384,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_18dc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_18f0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae54,auStack_18f0,uVar3,ar7);
  uVar3 = 0x8c439390;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439390,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_18f0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1904,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae68,auStack_1904,uVar3,ar7);
  uVar3 = 0x8c43939c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43939c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1904,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1918,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae7c,auStack_1918,uVar3,ar7);
  uVar3 = 0x8c4393a8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393a8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1918,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_192c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43ae90,auStack_192c,uVar3,ar7);
  uVar3 = 0x8c4393b4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393b4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_192c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1940,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aea4,auStack_1940,uVar3,ar7);
  uVar3 = 0x8c4393c0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393c0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1940,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1954,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aeb8,auStack_1954,uVar3,ar7);
  uVar3 = 0x8c4393cc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393cc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1954,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1968,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aecc,auStack_1968,uVar3,ar7);
  uVar3 = 0x8c4393d8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393d8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1968,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_197c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aee0,auStack_197c,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393e4,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_197c,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_1990,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aef4,auStack_1990,uVar3,ar7);
  uVar3 = 0x8c4393f0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393f0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1990,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_19a4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af08,auStack_19a4,uVar3,ar7);
  uVar3 = 0x8c4393fc;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4393fc,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_19a4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_19b8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af1c,auStack_19b8,uVar3,ar7);
  uVar3 = 0x8c439408;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439408,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_19b8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_19cc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af30,auStack_19cc,uVar3,ar7);
  uVar3 = 0x8c439414;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439414,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_19cc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_19e0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af44,auStack_19e0,uVar3,ar7);
  uVar3 = 0x8c439420;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439420,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_19e0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_19f4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af58,auStack_19f4,uVar3,ar7);
  uVar3 = 0x8c43942c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43942c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_19f4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a08,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af6c,auStack_1a08,uVar3,ar7);
  uVar3 = 0x8c439438;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439438,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a08,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a1c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af80,auStack_1a1c,uVar3,ar7);
  uVar3 = 0x8c439444;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439444,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a1c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a30,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43af94,auStack_1a30,uVar3,ar7);
  uVar3 = 0x8c439450;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439450,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a30,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a44,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43afa8,auStack_1a44,uVar3,ar7);
  uVar3 = 0x8c43945c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43945c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a44,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a58,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43afbc,auStack_1a58,uVar3,ar7);
  uVar3 = 0x8c439468;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439468,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a58,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a6c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43afd0,auStack_1a6c,uVar3,ar7);
  uVar3 = 0x8c439474;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439474,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a6c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a80,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43afe4,auStack_1a80,uVar3,ar7);
  uVar3 = 0x8c439480;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439480,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a80,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1a94,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43aff8,auStack_1a94,uVar3,ar7);
  uVar3 = 0x8c43948c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43948c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1a94,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1aa8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b00c,auStack_1aa8,uVar3,ar7);
  uVar3 = 0x8c439498;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439498,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1aa8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1abc,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b020,auStack_1abc,uVar3,ar7);
  uVar3 = 0x8c4394a4;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394a4,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1abc,0xffffffff,uVar3,ar7);
  pcVar2 = FUN_8c0d7668;
  FUN_8c0d7668(auStack_1ad0,uVar1,FUN_8c0d7668,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b034,auStack_1ad0,pcVar2,ar7);
  uVar3 = 0x8c4394b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394b0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1ad0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1ae4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b048,auStack_1ae4,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394bc,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1ae4,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_1af8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b05c,auStack_1af8,uVar3,ar7);
  uVar3 = 0x8c4394c8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394c8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1af8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1b0c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b070,auStack_1b0c,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394d4,ar7);
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b0c,0xffffffff,0xffffffff,ar7);
  FUN_8c0d7668(auStack_1b20,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b084,auStack_1b20,uVar3,ar7);
  uVar3 = 0x8c4394e0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394e0,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b20,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1b34,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b098,auStack_1b34,uVar3,ar7);
  uVar3 = 0x8c4394ec;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394ec,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b34,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1b48,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b0ac,auStack_1b48,uVar3,ar7);
  uVar3 = 0x8c4394f8;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c4394f8,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b48,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1b5c,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b0c0,auStack_1b5c,uVar3,ar7);
  uVar3 = 0x8c439504;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439504,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b5c,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1b70,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b0d4,auStack_1b70,uVar3,ar7);
  uVar3 = 0x8c439510;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439510,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b70,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1b84,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b0e8,auStack_1b84,uVar3,ar7);
  uVar3 = 0x8c43951c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43951c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b84,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1b98,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b0fc,auStack_1b98,uVar3,ar7);
  uVar3 = 0x8c439528;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439528,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1b98,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1bac,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b110,auStack_1bac,uVar3,ar7);
  uVar3 = 0x8c439534;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439534,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1bac,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1bc0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b124,auStack_1bc0,uVar3,ar7);
  uVar3 = 0x8c439540;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439540,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1bc0,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1bd4,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b138,auStack_1bd4,uVar3,ar7);
  uVar3 = 0x8c43954c;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c43954c,ar7);
  uVar1 = 0xffffffff;
  free_if_nonnull_wrap_0d76b8(auStack_1bd4,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1be8,uVar1,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b14c,auStack_1be8,uVar3,ar7);
  uVar3 = 0x8c439558;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439558,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_1be8,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1bfc,auStack_1bfc,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b160,auStack_1bfc,uVar3,ar7);
  uVar3 = 0x8c439564;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439564,ar7);
  free_if_nonnull_wrap_0d76b8(auStack_1bfc,0xffffffff,uVar3,ar7);
  FUN_8c0d7668(auStack_1c10,auStack_1c10,uVar3,ar7);
  uVar1 = FUN_8c0f3df8(0x8c43b174,auStack_1c10,0x1bf8,ar7);
  uVar3 = 0x8c439570;
  global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c439570,ar7);
  uVar1 = free_if_nonnull_wrap_0d76b8(auStack_1c10,0xffffffff,uVar3,ar7);
  return uVar1;
}



/* FUN_8c024508 @ 8c024508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c024508(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}



/* FUN_8c1fb4c2 @ 8c1fb4c2 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c1fb4c2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = (ar4 + 0x1fU >> 5) + 1;
  puVar1 = (undefined4 *)*_DAT_8c475f04;
  puVar5 = _DAT_8c475f04;
  while( true ) {
    puVar3 = puVar1;
    if (uVar4 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar4) {
        *puVar5 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar4;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
        puVar3[1] = uVar4;
      }
      _DAT_8c475f04 = puVar5;
      return puVar3 + 8;
    }
    if (puVar3 == _DAT_8c475f04) break;
    puVar1 = (undefined4 *)*puVar3;
    puVar5 = puVar3;
  }
  return (undefined4 *)0;
}



/* FUN_8c26b5c6 @ 8c26b5c6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b5c6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (ar4 != 0) {
    in_r0 = memset(ar4,0,0x30,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
  }
  return in_r0;
}



/* FUN_8c0107f0 @ 8c0107f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0107f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0108fc @ 8c0108fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint * FUN_8c0108fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint *in_r0;
  uint *puVar2;
  uint *in_r1;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *in_r1;
  puVar2 = in_r0;
  do {
    puVar3 = in_r1 + 1;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
LAB_8c010934:
      uVar4 = puVar3[-1];
      *(char *)puVar2 = (char)uVar4;
      if ((char)uVar4 != '\0') {
        cVar1 = *(char *)((int)puVar3 + -3);
        *(char *)((int)puVar2 + 1) = cVar1;
        if (cVar1 != '\0') {
          cVar1 = *(char *)((int)puVar3 + -2);
          *(char *)((int)puVar2 + 2) = cVar1;
          if (cVar1 != '\0') {
            *(char *)((int)puVar2 + 3) = *(char *)((int)puVar3 + -1);
          }
        }
      }
      return in_r0;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 2;
    *puVar2 = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar3 = in_r1 + 3;
    puVar2[1] = uVar5;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_8c010934;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 4;
    puVar2[2] = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar2[3] = uVar5;
    puVar2 = puVar2 + 4;
    in_r1 = puVar3;
  } while( true );
}



/* FUN_8c1f231a @ 8c1f231a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f231a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))();
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}



/* FUN_8c1f1ffa @ 8c1f1ffa callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c1f1ffa(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  int ar6_00;
  int ar7_00;
  
  if (ar5 == 0) {
    ar5 = *(int *)(DAT_8c2739e0 + 0x10);
  }
  if ((*ar4 == '/') || (*ar4 == '\\')) {
    if (*_DAT_8c470f90 == 1) {
      iVar1 = FUN_8c1f2e3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),ar4,_DAT_8c470f90 + 4);
    }
    else {
      iVar1 = FUN_8c1f2d3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),ar4);
    }
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    ar7_00 = 0x800;
  }
  else {
    iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    piVar3 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    if ((*(byte *)(piVar3 + 2) & 2) == 0) {
      return 0xfffffff5;
    }
    iVar1 = *piVar3;
    ar7_00 = piVar3[1];
  }
  iVar1 = iVar1 + 0x96;
  ar5_00 = iVar1;
  ar6_00 = ar5;
  iVar2 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar1,ar5,ar7_00);
  if (((*_DAT_8c470f90 == 1) && (*(int *)(_DAT_8c470f90 + 2) == iVar1)) &&
     ((iVar1 = 1, iVar2 == 0 || (iVar1 = iVar2, iVar2 == -0xc)))) {
    FUN_8c1f1a52(ar5,ar5_00,ar6_00,ar7_00,iVar1);
  }
  return iVar2;
}



/* FUN_8c1f22a8 @ 8c1f22a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f22a8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar7_00;
  int ar4_00;
  
  if (ar4 < 0xb05e) {
    FUN_8c1f175c(0xffffffe0,ar5,ar6,ar7);
  }
  else {
    ar4_00 = DAT_8c2739e0[6];
    ar7_00 = ar5 << 0xb;
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(ar4_00 + 0x4c) == 0) {
        ar5_00 = 0;
        FUN_8c1f21bc(ar4_00,0,ar4,ar7_00);
        FUN_8c1f175c(0,ar5_00,ar4,ar7_00);
        return ar4_00;
      }
      ar4_00 = ar4_00 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5,DAT_8c2739e0,ar7);
  }
  return 0;
}



/* FUN_8c26b5fc @ 8c26b5fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26b5fc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if (ar5 == 0) {
    return *(undefined4 *)(ar4 + 0x10);
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
  }
  return 0;
}



/* FUN_8c1f210a @ 8c1f210a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f210a(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *ar4_00;
  int *ar5_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = *ar4;
  piVar5 = *(int **)(DAT_8c2739e0 + 0x10);
  iVar4 = piVar5[1];
  iVar2 = iVar4;
  if (iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  iVar6 = 0;
  piVar5[2] = ar4[2];
  ar4_00 = ar4 + 4;
  ar5_00 = piVar5 + 4;
  if (0 < iVar2) {
    do {
      in_r0 = FUN_8c1f2a5c(ar4_00,ar5_00,0x2c,ar7,in_r0);
      iVar6 = iVar6 + 1;
      ar4_00 = ar4_00 + 0xb;
      ar5_00 = ar5_00 + 0xb;
    } while (iVar6 < iVar2);
  }
  *piVar5 = iVar6;
  if (iVar4 < iVar3) {
    uVar1 = 0xfffffff4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c1f9a14 @ 8c1f9a14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c1f9a26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c1f9a14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  int unaff_r12;
  uint uVar3;
  int unaff_r13;
  uint uVar4;
  uint unaff_r14;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte bVar5;
  ushort in_stack_00000000;
  
  uVar3 = (unaff_r12 + unaff_r13) - 1U & 0x1fffffe0;
  uVar4 = _DAT_ff00001c >> 5 & 1;
  for (uVar1 = 0; uVar1 < 0x2000; uVar1 = uVar1 + 0x20) {
    uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
    if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
      CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
    }
    if ((uVar4 != 0) && (uVar1 == 0xfe0)) break;
  }
  if ((_DAT_ff00001c >> 7 & 1) == 0) {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  else {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1 | uVar1 & 0x1fff | uVar3;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  return (in_stack_00000000 & 0xf) << 4 |
         ((uint)bVar5 | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
         (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
         (uint)in_MD << 0x1e;
}



/* FUN_8c26a812 @ 8c26a812 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a812(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}



/* FUN_8c26a80a @ 8c26a80a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c26a80a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}



/* FUN_8c26a772 @ 8c26a772 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26a772(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x40),*(undefined4 *)(ar4 + 0x10));
  return iVar1 << 3;
}



/* FUN_8c1f222c @ 8c1f222c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f222c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  undefined4 ar6_00;
  int *piVar2;
  int ar4_00;
  int iVar3;
  
  ar6_00 = 0;
  if (ar5 == 0) {
    ar5 = DAT_8c2739e0[4];
  }
  ar5_00 = FUN_8c1f2cce(ar4,ar5,0,ar7);
  if (ar5_00 == 0) {
    FUN_8c1f175c(0xfffffff8,0,ar6_00,ar7);
  }
  else {
    iVar3 = (ar5_00 + -1) * 0x2c;
    ar4_00 = DAT_8c2739e0[6];
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(ar4_00 + 0x4c) == 0) {
        piVar2 = (int *)(ar5 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        FUN_8c1f21bc(ar4_00,ar5_00,iVar1,iVar3);
        FUN_8c1f175c(0,ar5_00,iVar1,iVar3);
        return ar4_00;
      }
      ar4_00 = ar4_00 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5_00,DAT_8c2739e0,iVar3);
  }
  return 0;
}



/* FUN_8c02df08 @ 8c02df08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c02df08(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return ar4;
}



/* FUN_8c1f1a2a @ 8c1f1a2a callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1a2a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(ar4 + 0x1c);
  uVar2 = 0;
  uVar1 = 0;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x2c) != 0)) {
    uVar2 = *(undefined4 *)(iVar3 + 0x30);
    uVar1 = *(undefined4 *)(iVar3 + 0x2c);
  }
                    /* WARNING: Could not recover jumptable at 0x8c1f1144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*_DAT_8c0000bc)(uVar1,uVar2,0,5);
  return uVar1;
}



/* FUN_8c1f1a44 @ 8c1f1a44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f1a44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(ar4 + 0x20) == 1) {
    return 1;
  }
  uVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))();
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}



/* FUN_8c1f64b6 @ 8c1f64b6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c1f64b6(int ar4,undefined4 ar5,int ar6,uint *ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*ar7 & 4) == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (*(char *)(ar6 + 4) == '\a') {
    uVar2 = 0;
  }
  else if (*(char *)(ar6 + 4) == -4) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  if (*(int *)(iVar1 + -0x73b8d2b8) == 0) {
    return &DAT_8c26c80c;
  }
                    /* WARNING: Could not emulate address calculation at 0x8c1f6508 */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(iVar1 + -0x73b8d2b8))(uVar2,*(undefined4 *)(iVar1 + -0x73b8d2bc));
  return (undefined *)uVar2;
}



/* FUN_8c1f65e8 @ 8c1f65e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c1f65e8(int ar4,undefined4 ar5,int ar6,uint *ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = *ar7;
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  piVar5 = (int *)(iVar1 + -0x73b8d2c0);
  if (((uVar2 & 4) == 0) || (uVar2 = (uint)*(byte *)(ar6 + 4), uVar2 != 8)) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar4 = *(int *)(ar6 + 8);
    *(ushort *)*piVar5 = (ushort)*(byte *)(iVar4 + 9) * 0x100 + (ushort)*(byte *)(iVar4 + 8);
    *(undefined1 *)(*piVar5 + 2) = *(undefined1 *)(iVar4 + 10);
    *(undefined1 *)(*piVar5 + 3) = *(undefined1 *)(iVar4 + 0xb);
    *(undefined1 *)(*piVar5 + 4) = *(undefined1 *)(iVar4 + 0xc);
    *(undefined1 *)(*piVar5 + 5) = *(undefined1 *)(iVar4 + 0xd);
    *(undefined1 *)(*piVar5 + 6) = *(undefined1 *)(iVar4 + 0xe);
    if ((*(char *)(*piVar5 + 2) == '\x02') && (0x1d < *(byte *)(*piVar5 + 3))) {
      *(undefined1 *)(*piVar5 + 3) = 0x1d;
    }
    uVar3 = 0;
    uVar2 = (uint)(char)(&DAT_8c26c82c)[*(byte *)(iVar4 + 0xf) & 7];
    *(undefined *)(*piVar5 + 7) = (&DAT_8c26c82c)[*(byte *)(iVar4 + 0xf) & 7];
  }
  if (*(int *)(iVar1 + -0x73b8d2b8) != 0) {
                    /* WARNING: Could not emulate address calculation at 0x8c1f6674 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(iVar1 + -0x73b8d2b8))(uVar3,*(undefined4 *)(iVar1 + -0x73b8d2bc));
    return uVar3;
  }
  return uVar2;
}



/* FUN_8c1f692a @ 8c1f692a callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1f692a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(_DAT_8c474898 + 0xd78) + 0xc) = 3;
  uVar1 = FUN_8c1f69f2(0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c218fdc @ 8c218fdc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c218fdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 in_xd2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4dc);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c4aa4e0,_DAT_8c4aa4dc);
    dVar1 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) * SUB84(dVar1,0),SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 * dVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aa2c0 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar1 = (double)CONCAT44(_DAT_8c4aa4a8,_DAT_8c4aa4e0);
  }
  else {
    _DAT_8c4aa2c0 = SUB84(dVar1,0);
    dVar1 = (double)CONCAT44(_DAT_8c4aa4ac,_DAT_8c4aa4a8);
    in_xd2 = CONCAT44(_DAT_8c4aa4e4,_DAT_8c4aa4e0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) * SUB84(dVar1,0),SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 * dVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4aa2c4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    _DAT_8c4aa2cc = _DAT_8c4aa4b8;
  }
  else {
    _DAT_8c4aa2c4 = SUB84(dVar1,0);
    in_xd2 = CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
    _DAT_8c4aa2cc = _DAT_8c4aa2c4;
  }
  _DAT_8c4aa2c8 = _DAT_8c4aa4b4;
  if (in_FPSCR_SZ != '\0') {
    _DAT_8c4aa2cc = (undefined4)in_xd2;
    _DAT_8c4aa2d0 = (undefined4)((ulonglong)in_xd2 >> 0x20);
  }
  return 0x1c;
}



/* FUN_8c21d108 @ 8c21d108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c21d108(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  uVar1 = noop_25b638(ar4 + 8,ar5,ar6,ar7,in_r0);
  return uVar1;
}



/* FUN_8c21d112 @ 8c21d112 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c21d112(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  uVar1 = FUN_8c2569e0(ar4 + 0x14,0,ar6,ar7,in_r0);
  return uVar1;
}



/* FUN_8c21d11e @ 8c21d11e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c21d11e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  uVar1 = FUN_8c2569e0(ar4 + 0x14,1,ar6,ar7,in_r0);
  return uVar1;
}



/* FUN_8c21d13c @ 8c21d13c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c21d13c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  uVar1 = FUN_8c257098(ar4 + 0x20,ar5,ar6,ar7,in_r0);
  return uVar1;
}



/* FUN_8c23a982 @ 8c23a982 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23a9bc) */
/* WARNING: Removing unreachable block (ram,0x8c23a9b8) */
/* WARNING: Removing unreachable block (ram,0x8c23a9ae) */
/* WARNING: Removing unreachable block (ram,0x8c23a9a8) */
/* WARNING: Removing unreachable block (ram,0x8c23a99e) */
/* WARNING: Removing unreachable block (ram,0x8c23a998) */
/* WARNING: Removing unreachable block (ram,0x8c23a990) */
/* WARNING: Removing unreachable block (ram,0x8c23a988) */
/* WARNING: Removing unreachable block (ram,0x8c23a98c) */
/* WARNING: Removing unreachable block (ram,0x8c23a994) */
/* WARNING: Removing unreachable block (ram,0x8c23a99a) */
/* WARNING: Removing unreachable block (ram,0x8c23a9a2) */
/* WARNING: Removing unreachable block (ram,0x8c23a9aa) */
/* WARNING: Removing unreachable block (ram,0x8c23a9b2) */
/* WARNING: Removing unreachable block (ram,0x8c23a9ba) */
/* WARNING: Removing unreachable block (ram,0x8c23a9be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23a982(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *_DAT_8c4ab278 = *_DAT_8c4ab278 + *(float *)(ar4 + 0x104);
  _DAT_8c4ab278[1] = _DAT_8c4ab278[1] + *(float *)(ar4 + 0x108);
  _DAT_8c4ab278[2] = _DAT_8c4ab278[2] + *(float *)(ar4 + 0x10c);
  _DAT_8c4ab278[3] = _DAT_8c4ab278[3] + *(float *)(ar4 + 0x110);
  return 0xc;
}



/* FUN_8c23a9d0 @ 8c23a9d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23a9ee) */
/* WARNING: Removing unreachable block (ram,0x8c23a9ea) */
/* WARNING: Removing unreachable block (ram,0x8c23a9e4) */
/* WARNING: Removing unreachable block (ram,0x8c23a9e0) */
/* WARNING: Removing unreachable block (ram,0x8c23a9da) */
/* WARNING: Removing unreachable block (ram,0x8c23a9d6) */
/* WARNING: Removing unreachable block (ram,0x8c23a9d8) */
/* WARNING: Removing unreachable block (ram,0x8c23a9dc) */
/* WARNING: Removing unreachable block (ram,0x8c23a9e2) */
/* WARNING: Removing unreachable block (ram,0x8c23a9e6) */
/* WARNING: Removing unreachable block (ram,0x8c23a9ec) */
/* WARNING: Removing unreachable block (ram,0x8c23a9f0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23a9d0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
  return 0xc;
}



/* FUN_8c23a9fc @ 8c23a9fc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23aa0e) */
/* WARNING: Removing unreachable block (ram,0x8c23aa0c) */
/* WARNING: Removing unreachable block (ram,0x8c23aa06) */
/* WARNING: Removing unreachable block (ram,0x8c23aa02) */
/* WARNING: Removing unreachable block (ram,0x8c23aa04) */
/* WARNING: Removing unreachable block (ram,0x8c23aa0a) */
/* WARNING: Removing unreachable block (ram,0x8c23aa24) */
/* WARNING: Removing unreachable block (ram,0x8c23aa30) */
/* WARNING: Removing unreachable block (ram,0x8c23aa2c) */
/* WARNING: Removing unreachable block (ram,0x8c23aa1c) */
/* WARNING: Removing unreachable block (ram,0x8c23aa26) */
/* WARNING: Removing unreachable block (ram,0x8c23aa3c) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23a9fc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float in_fr11;
  float fVar3;
  
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar2 = *(float *)(ar4 + 0x10c);
  fVar1 = *(float *)(ar4 + 0x110);
  fVar3 = -in_fr11;
  if (0.0 < fVar3) {
    *(float *)(ar5 + 4) = fVar3 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
    *(float *)(ar5 + 8) = fVar3 * fVar2 + *(float *)(ar5 + 8);
    *(float *)(ar5 + 0xc) = fVar3 * fVar1 + *(float *)(ar5 + 0xc);
  }
  return 4;
}



/* FUN_8c23aa50 @ 8c23aa50 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23aa5e) */
/* WARNING: Removing unreachable block (ram,0x8c23aa58) */
/* WARNING: Removing unreachable block (ram,0x8c23aa56) */
/* WARNING: Removing unreachable block (ram,0x8c23aa5a) */
/* WARNING: Removing unreachable block (ram,0x8c23aa60) */
/* WARNING: Removing unreachable block (ram,0x8c23aa62) */
/* WARNING: Removing unreachable block (ram,0x8c23aa7c) */
/* WARNING: Removing unreachable block (ram,0x8c23aa76) */
/* WARNING: Removing unreachable block (ram,0x8c23aa74) */
/* WARNING: Removing unreachable block (ram,0x8c23aa92) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c23aa50(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_fr11;
  
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar1 = (1.0 - in_fr11) * 0.5;
  fVar3 = *(float *)(ar4 + 0x10c);
  fVar2 = *(float *)(ar4 + 0x110);
  *(float *)(ar5 + 4) = fVar1 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
  *(float *)(ar5 + 8) = fVar1 * fVar3 + *(float *)(ar5 + 8);
  *(float *)(ar5 + 0xc) = fVar1 * fVar2 + *(float *)(ar5 + 0xc);
  return &DAT_8c23aaa0;
}



/* FUN_8c23aaa8 @ 8c23aaa8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23aac6) */
/* WARNING: Removing unreachable block (ram,0x8c23aac0) */
/* WARNING: Removing unreachable block (ram,0x8c23aabc) */
/* WARNING: Removing unreachable block (ram,0x8c23aab8) */
/* WARNING: Removing unreachable block (ram,0x8c23aab4) */
/* WARNING: Removing unreachable block (ram,0x8c23aab0) */
/* WARNING: Removing unreachable block (ram,0x8c23aab2) */
/* WARNING: Removing unreachable block (ram,0x8c23aab6) */
/* WARNING: Removing unreachable block (ram,0x8c23aaba) */
/* WARNING: Removing unreachable block (ram,0x8c23aabe) */
/* WARNING: Removing unreachable block (ram,0x8c23aac4) */
/* WARNING: Removing unreachable block (ram,0x8c23aac8) */
/* WARNING: Removing unreachable block (ram,0x8c23aaca) */
/* WARNING: Removing unreachable block (ram,0x8c23ab06) */
/* WARNING: Removing unreachable block (ram,0x8c23ab02) */
/* WARNING: Removing unreachable block (ram,0x8c23aaf4) */
/* WARNING: Removing unreachable block (ram,0x8c23aaea) */
/* WARNING: Removing unreachable block (ram,0x8c23aae2) */
/* WARNING: Removing unreachable block (ram,0x8c23aad0) */
/* WARNING: Removing unreachable block (ram,0x8c23aade) */
/* WARNING: Removing unreachable block (ram,0x8c23aaee) */
/* WARNING: Removing unreachable block (ram,0x8c23aaf8) */
/* WARNING: Removing unreachable block (ram,0x8c23ab1c) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

uint FUN_8c23aaa8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  float in_fr3;
  float fVar3;
  float fVar4;
  float in_fr11;
  
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < in_fr3);
  if (uVar1 == 3) {
    uVar1 = 4;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      in_fr3 = (in_fr3 / in_fr11) * *(float *)(ar4 + 0x68);
    }
    fVar2 = in_fr3 * (1.0 / SQRT(in_fr11));
    fVar4 = *(float *)(ar4 + 0x10c);
    fVar3 = *(float *)(ar4 + 0x110);
    *(float *)(ar5 + 4) = fVar2 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
    *(float *)(ar5 + 8) = fVar2 * fVar4 + *(float *)(ar5 + 8);
    *(float *)(ar5 + 0xc) = fVar2 * fVar3 + *(float *)(ar5 + 0xc);
  }
  return uVar1;
}



/* FUN_8c23ab30 @ 8c23ab30 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23ab48) */
/* WARNING: Removing unreachable block (ram,0x8c23ab42) */
/* WARNING: Removing unreachable block (ram,0x8c23ab3c) */
/* WARNING: Removing unreachable block (ram,0x8c23ab3a) */
/* WARNING: Removing unreachable block (ram,0x8c23ab40) */
/* WARNING: Removing unreachable block (ram,0x8c23ab44) */
/* WARNING: Removing unreachable block (ram,0x8c23ab4a) */
/* WARNING: Removing unreachable block (ram,0x8c23ab4c) */
/* WARNING: Removing unreachable block (ram,0x8c23ab6e) */
/* WARNING: Removing unreachable block (ram,0x8c23ab68) */
/* WARNING: Removing unreachable block (ram,0x8c23ab5a) */
/* WARNING: Removing unreachable block (ram,0x8c23ab64) */
/* WARNING: Removing unreachable block (ram,0x8c23ab7c) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23ab30(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  float fVar1;
  float fVar2;
  float in_fr11;
  float fVar3;
  
  if (*(float *)(ar4 + 0x60) != 0.0) {
    in_r0 = 4;
                    /* WARNING: Ignoring partial resolution of indirect */
    fVar2 = *(float *)(ar4 + 0x10c);
    fVar1 = *(float *)(ar4 + 0x110);
    if (0.0 < in_fr11) {
      fVar3 = in_fr11 * *(float *)(ar4 + 0x60);
      *(float *)(ar5 + 4) = fVar3 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
      *(float *)(ar5 + 8) = fVar3 * fVar2 + *(float *)(ar5 + 8);
      *(float *)(ar5 + 0xc) = fVar3 * fVar1 + *(float *)(ar5 + 0xc);
    }
  }
  return in_r0;
}



/* FUN_8c23ab90 @ 8c23ab90 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23abb4) */
/* WARNING: Removing unreachable block (ram,0x8c23abb2) */
/* WARNING: Removing unreachable block (ram,0x8c23abae) */
/* WARNING: Removing unreachable block (ram,0x8c23aba8) */
/* WARNING: Removing unreachable block (ram,0x8c23aba4) */
/* WARNING: Removing unreachable block (ram,0x8c23aba0) */
/* WARNING: Removing unreachable block (ram,0x8c23ab9c) */
/* WARNING: Removing unreachable block (ram,0x8c23ab9a) */
/* WARNING: Removing unreachable block (ram,0x8c23ab9e) */
/* WARNING: Removing unreachable block (ram,0x8c23aba2) */
/* WARNING: Removing unreachable block (ram,0x8c23aba6) */
/* WARNING: Removing unreachable block (ram,0x8c23abaa) */
/* WARNING: Removing unreachable block (ram,0x8c23abb0) */
/* WARNING: Removing unreachable block (ram,0x8c23abe8) */
/* WARNING: Removing unreachable block (ram,0x8c23ac50) */
/* WARNING: Removing unreachable block (ram,0x8c23ac1c) */
/* WARNING: Removing unreachable block (ram,0x8c23ac14) */
/* WARNING: Removing unreachable block (ram,0x8c23ac06) */
/* WARNING: Removing unreachable block (ram,0x8c23abfa) */
/* WARNING: Removing unreachable block (ram,0x8c23abf2) */
/* WARNING: Removing unreachable block (ram,0x8c23abe4) */
/* WARNING: Removing unreachable block (ram,0x8c23abd8) */
/* WARNING: Removing unreachable block (ram,0x8c23abca) */
/* WARNING: Removing unreachable block (ram,0x8c23abc6) */
/* WARNING: Removing unreachable block (ram,0x8c23abba) */
/* WARNING: Removing unreachable block (ram,0x8c23abd6) */
/* WARNING: Removing unreachable block (ram,0x8c23abda) */
/* WARNING: Removing unreachable block (ram,0x8c23abea) */
/* WARNING: Removing unreachable block (ram,0x8c23abf6) */
/* WARNING: Removing unreachable block (ram,0x8c23ac02) */
/* WARNING: Removing unreachable block (ram,0x8c23ac0a) */
/* WARNING: Removing unreachable block (ram,0x8c23ac16) */
/* WARNING: Removing unreachable block (ram,0x8c23ac6e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff4 : 0x8c23ac22 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

uint FUN_8c23ab90(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float fVar6;
  double dVar5;
  float in_fr3;
  undefined8 uVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float in_fr11;
  undefined8 in_xd4;
  char cVar13;
  char cVar14;
  int iStack_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  cVar14 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  cVar13 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar12 = 1.0 / in_fr11;
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar10 = 0.0;
  fVar6 = in_fr3 * in_fr3 * fVar12;
  fVar9 = in_fr3 * in_fr3 * fVar12;
  uVar1 = (((uint)(0.0 < in_fr3) << 1 | (uint)(in_fr11 < *(float *)(ar4 + 0x6c))) << 1 |
          (uint)(0.0 < -in_fr3)) << 1 | (uint)(*(float *)(ar4 + 0x74) < fVar9);
  if (uVar1 == 0xf) {
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar6 = fVar6 * *(float *)(ar4 + 0x68) * fVar12;
    }
    if (*(float *)(ar4 + 0x70) <= fVar9) {
      fVar10 = *(float *)(ar4 + 0x114);
      dVar5 = (double)CONCAT44(fVar6,*(float *)(ar4 + 0x118));
      fVar12 = *(float *)(ar4 + 0x11c);
      fVar9 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar6 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar6 * fVar12 + ar5[6];
      ar5[7] = fVar6 * fVar9 + ar5[7];
      *ar5 = fVar6 * fVar10 + *ar5;
    }
    else {
      dVar5 = (double)CONCAT44(fVar6 * *(float *)(ar4 + 0x80),*(undefined4 *)(ar4 + 0xa0));
      FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),iStack_c);
        piVar4 = (int *)auStack_8;
      }
      else {
        piVar4 = (int *)auStack_4;
      }
      ar4 = *piVar4;
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 * dVar5;
      }
    }
    uVar1 = 4;
    pfVar3 = ar5 + 1;
    if (cVar14 == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x108));
      uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x10c),*(undefined4 *)(ar4 + 0x110));
      uVar8 = CONCAT44(*pfVar3,ar5[2]);
      pfVar2 = ar5 + 3;
      uVar11 = CONCAT44(*pfVar2,fVar10);
    }
    else {
      uVar7 = *(undefined8 *)(ar4 + 0x110);
      uVar8 = *(undefined8 *)pfVar3;
      in_xd4 = *(undefined8 *)(ar5 + 3);
      pfVar2 = ar5 + 5;
      uVar11 = *(undefined8 *)pfVar2;
    }
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar13 == '\0') {
      uVar8 = CONCAT44(fVar6 * SUB84(dVar5,0) + (float)((ulonglong)uVar8 >> 0x20),
                       fVar6 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar8);
      uVar11 = CONCAT44(fVar6 * (float)uVar7 + (float)((ulonglong)uVar11 >> 0x20),(int)uVar11);
    }
    if (cVar14 == '\0') {
      *pfVar3 = (float)((ulonglong)uVar8 >> 0x20);
      ar5[2] = (float)uVar8;
      *pfVar2 = (float)((ulonglong)uVar11 >> 0x20);
    }
    else {
      *(undefined8 *)pfVar3 = uVar8;
      *(undefined8 *)(ar5 + 2) = in_xd4;
      *(undefined8 *)pfVar2 = uVar11;
    }
  }
  return uVar1;
}



/* FUN_8c23aca8 @ 8c23aca8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23accc) */
/* WARNING: Removing unreachable block (ram,0x8c23acca) */
/* WARNING: Removing unreachable block (ram,0x8c23acc6) */
/* WARNING: Removing unreachable block (ram,0x8c23acc0) */
/* WARNING: Removing unreachable block (ram,0x8c23acbc) */
/* WARNING: Removing unreachable block (ram,0x8c23acb8) */
/* WARNING: Removing unreachable block (ram,0x8c23acb4) */
/* WARNING: Removing unreachable block (ram,0x8c23acb2) */
/* WARNING: Removing unreachable block (ram,0x8c23acb6) */
/* WARNING: Removing unreachable block (ram,0x8c23acba) */
/* WARNING: Removing unreachable block (ram,0x8c23acbe) */
/* WARNING: Removing unreachable block (ram,0x8c23acc2) */
/* WARNING: Removing unreachable block (ram,0x8c23acc8) */
/* WARNING: Removing unreachable block (ram,0x8c23ad00) */
/* WARNING: Removing unreachable block (ram,0x8c23ad7c) */
/* WARNING: Removing unreachable block (ram,0x8c23ad6c) */
/* WARNING: Removing unreachable block (ram,0x8c23ad2a) */
/* WARNING: Removing unreachable block (ram,0x8c23ad22) */
/* WARNING: Removing unreachable block (ram,0x8c23ad1a) */
/* WARNING: Removing unreachable block (ram,0x8c23ad0e) */
/* WARNING: Removing unreachable block (ram,0x8c23ad02) */
/* WARNING: Removing unreachable block (ram,0x8c23acf2) */
/* WARNING: Removing unreachable block (ram,0x8c23acee) */
/* WARNING: Removing unreachable block (ram,0x8c23acd2) */
/* WARNING: Removing unreachable block (ram,0x8c23acde) */
/* WARNING: Removing unreachable block (ram,0x8c23ace2) */
/* WARNING: Removing unreachable block (ram,0x8c23acf0) */
/* WARNING: Removing unreachable block (ram,0x8c23acfc) */
/* WARNING: Removing unreachable block (ram,0x8c23ad0a) */
/* WARNING: Removing unreachable block (ram,0x8c23ad12) */
/* WARNING: Removing unreachable block (ram,0x8c23ad1e) */
/* WARNING: Removing unreachable block (ram,0x8c23ad28) */
/* WARNING: Removing unreachable block (ram,0x8c23ad2c) */
/* WARNING: Removing unreachable block (ram,0x8c23ad4e) */
/* WARNING: Removing unreachable block (ram,0x8c23ad94) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

uint FUN_8c23aca8(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  float in_fr3;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_fr11;
  
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar5 = 1.0 / in_fr11;
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar2 = in_fr3 * in_fr3 * fVar5;
  fVar3 = in_fr3 * in_fr3 * fVar5;
  uVar1 = (((uint)(0.0 < in_fr3) << 1 | (uint)(in_fr11 < *(float *)(ar4 + 0x6c))) << 1 |
          (uint)(0.0 < -in_fr3)) << 1 | (uint)(*(float *)(ar4 + 0x74) < fVar3);
  if (uVar1 == 0xf) {
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar2 = fVar2 * *(float *)(ar4 + 0x68) * fVar5;
    }
    if (*(float *)(ar4 + 0x70) <= fVar3) {
      fVar4 = *(float *)(ar4 + 0x114);
      fVar5 = *(float *)(ar4 + 0x11c);
      fVar3 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar2 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar2 * fVar5 + ar5[6];
      ar5[7] = fVar2 * fVar3 + ar5[7];
      *ar5 = fVar2 * fVar4 + *ar5;
    }
    else {
      fVar2 = fVar2 * *(float *)(ar4 + 0x80) * (fVar3 - *(float *)(ar4 + 0x74));
    }
    uVar1 = 4;
    fVar5 = *(float *)(ar4 + 0x10c);
    fVar3 = *(float *)(ar4 + 0x110);
    ar5[1] = fVar2 * *(float *)(ar4 + 0x108) + ar5[1];
    ar5[2] = fVar2 * fVar5 + ar5[2];
    ar5[3] = fVar2 * fVar3 + ar5[3];
  }
  return uVar1;
}



/* FUN_8c23ada8 @ 8c23ada8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23adc0) */
/* WARNING: Removing unreachable block (ram,0x8c23adba) */
/* WARNING: Removing unreachable block (ram,0x8c23adb4) */
/* WARNING: Removing unreachable block (ram,0x8c23adb2) */
/* WARNING: Removing unreachable block (ram,0x8c23adb8) */
/* WARNING: Removing unreachable block (ram,0x8c23adbc) */
/* WARNING: Removing unreachable block (ram,0x8c23adc2) */
/* WARNING: Removing unreachable block (ram,0x8c23adc4) */
/* WARNING: Removing unreachable block (ram,0x8c23ae16) */
/* WARNING: Removing unreachable block (ram,0x8c23ae06) */
/* WARNING: Removing unreachable block (ram,0x8c23add2) */
/* WARNING: Removing unreachable block (ram,0x8c23adce) */
/* WARNING: Removing unreachable block (ram,0x8c23adda) */
/* WARNING: Removing unreachable block (ram,0x8c23ade8) */
/* WARNING: Removing unreachable block (ram,0x8c23ae2e) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23ada8(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_fr11;
  
  if (*(float *)(ar4 + 0x60) != 0.0) {
                    /* WARNING: Ignoring partial resolution of indirect */
    in_r0 = 4;
    fVar1 = *(float *)(ar4 + 0x60) * in_fr11 * in_fr11;
    if (0.0 < in_fr11) {
      if (*(float *)(ar4 + 0x70) < *(float *)(ar4 + 100)) {
        fVar4 = *(float *)(ar4 + 0x114);
        fVar3 = *(float *)(ar4 + 0x11c);
        fVar2 = *(float *)(ar4 + 0x120);
        ar5[5] = fVar1 * *(float *)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar1 * fVar3 + ar5[6];
        ar5[7] = fVar1 * fVar2 + ar5[7];
        *ar5 = fVar1 * fVar4 + *ar5;
      }
      fVar3 = *(float *)(ar4 + 0x10c);
      fVar2 = *(float *)(ar4 + 0x110);
      ar5[1] = fVar1 * *(float *)(ar4 + 0x108) + ar5[1];
      ar5[2] = fVar1 * fVar3 + ar5[2];
      ar5[3] = fVar1 * fVar2 + ar5[3];
    }
  }
  return in_r0;
}



/* FUN_8c23ae70 @ 8c23ae70 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23ae82) */
/* WARNING: Removing unreachable block (ram,0x8c23ae7c) */
/* WARNING: Removing unreachable block (ram,0x8c23ae7a) */
/* WARNING: Removing unreachable block (ram,0x8c23ae7e) */
/* WARNING: Removing unreachable block (ram,0x8c23ae84) */
/* WARNING: Removing unreachable block (ram,0x8c23ae86) */
/* WARNING: Removing unreachable block (ram,0x8c23aed0) */
/* WARNING: Removing unreachable block (ram,0x8c23aec0) */
/* WARNING: Removing unreachable block (ram,0x8c23aea0) */
/* WARNING: Removing unreachable block (ram,0x8c23ae9e) */
/* WARNING: Removing unreachable block (ram,0x8c23ae9a) */
/* WARNING: Removing unreachable block (ram,0x8c23ae94) */
/* WARNING: Removing unreachable block (ram,0x8c23ae96) */
/* WARNING: Removing unreachable block (ram,0x8c23ae9c) */
/* WARNING: Removing unreachable block (ram,0x8c23aeba) */
/* WARNING: Removing unreachable block (ram,0x8c23aec6) */
/* WARNING: Removing unreachable block (ram,0x8c23aed8) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23ae70(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar5;
  double dVar4;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11;
  undefined8 in_xd4;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  cVar14 = '\0';
  if (in_fr11 < 0.0) {
    fVar13 = *(float *)(ar4 + 0x70);
    fVar5 = -in_fr11;
    fVar11 = *(float *)(ar4 + 0x74);
    fVar3 = *(float *)(ar4 + 0x108);
    fVar8 = *(float *)(ar4 + 0x10c);
    fVar6 = *(float *)(ar4 + 0x110);
    *(float *)((int)ar5 + 4) = fVar5 * fVar3 + *(float *)((int)ar5 + 4);
    *(float *)(ar5 + 1) = fVar5 * fVar8 + *(float *)(ar5 + 1);
    *(float *)((int)ar5 + 0xc) = fVar5 * fVar6 + *(float *)((int)ar5 + 0xc);
    if (fVar11 < in_fr11 * in_fr11) {
      dVar4 = (double)CONCAT44(0x3f800000,fVar3);
      if (in_fr11 * in_fr11 < fVar13) {
        dVar4 = (double)CONCAT44(0x3f800000,*(undefined4 *)(ar4 + 0x80));
        FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0)
                                  );
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
      }
      puVar2 = (undefined8 *)((int)ar5 + 0x14);
      if (cVar15 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)ar5,fVar11);
        dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x11c),*(undefined4 *)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar5 + 3));
        puVar1 = (undefined8 *)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)puVar1,*(undefined4 *)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(ar4 + 0x124);
        uVar9 = *puVar2;
        in_xd4 = *(undefined8 *)((int)ar5 + 0x1c);
        puVar1 = (undefined8 *)((int)ar5 + 0x24);
        uVar10 = *puVar1;
      }
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      if (cVar14 == '\0') {
        uVar9 = CONCAT44(fVar3 * SUB84(dVar4,0) + (float)((ulonglong)uVar9 >> 0x20),
                         fVar3 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar9);
        fVar5 = (float)uVar10;
        uVar10 = CONCAT44(fVar3 * (float)uVar7 + (float)((ulonglong)uVar10 >> 0x20),fVar5);
        uVar12 = CONCAT44(fVar3 * fVar5 + (float)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      }
      if (cVar15 == '\0') {
        *(int *)puVar2 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(ar5 + 3) = (int)uVar9;
        *(int *)puVar1 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar2 = uVar9;
        ar5[3] = in_xd4;
        *puVar1 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return 4;
}



/* FUN_8c23af2c @ 8c23af2c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23af3e) */
/* WARNING: Removing unreachable block (ram,0x8c23af38) */
/* WARNING: Removing unreachable block (ram,0x8c23af36) */
/* WARNING: Removing unreachable block (ram,0x8c23af3a) */
/* WARNING: Removing unreachable block (ram,0x8c23af40) */
/* WARNING: Removing unreachable block (ram,0x8c23af42) */
/* WARNING: Removing unreachable block (ram,0x8c23afb6) */
/* WARNING: Removing unreachable block (ram,0x8c23afaa) */
/* WARNING: Removing unreachable block (ram,0x8c23af98) */
/* WARNING: Removing unreachable block (ram,0x8c23af8c) */
/* WARNING: Removing unreachable block (ram,0x8c23af82) */
/* WARNING: Removing unreachable block (ram,0x8c23af76) */
/* WARNING: Removing unreachable block (ram,0x8c23af58) */
/* WARNING: Removing unreachable block (ram,0x8c23af52) */
/* WARNING: Removing unreachable block (ram,0x8c23af50) */
/* WARNING: Removing unreachable block (ram,0x8c23af56) */
/* WARNING: Removing unreachable block (ram,0x8c23af5a) */
/* WARNING: Removing unreachable block (ram,0x8c23af5c) */
/* WARNING: Removing unreachable block (ram,0x8c23af7c) */
/* WARNING: Removing unreachable block (ram,0x8c23af88) */
/* WARNING: Removing unreachable block (ram,0x8c23af8e) */
/* WARNING: Removing unreachable block (ram,0x8c23afa8) */
/* WARNING: Removing unreachable block (ram,0x8c23afd4) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23af2c(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11;
  float fVar7;
  
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = 4;
  if (in_fr11 < 0.0) {
    fVar7 = in_fr11 * in_fr11;
    fVar6 = *(float *)(ar4 + 0x70);
    fVar2 = -in_fr11;
    fVar5 = *(float *)(ar4 + 0x74);
    fVar4 = *(float *)(ar4 + 0x10c);
    fVar3 = *(float *)(ar4 + 0x110);
    ar5[1] = fVar2 * *(float *)(ar4 + 0x108) + ar5[1];
    ar5[2] = fVar2 * fVar4 + ar5[2];
    ar5[3] = fVar2 * fVar3 + ar5[3];
    if (fVar5 < fVar7) {
      fVar2 = 1.0;
      if (fVar7 < fVar6) {
        fVar2 = 1.0;
        uVar1 = 0x100;
        if ((int)(fVar7 * 256.0) < 0x100) {
          fVar2 = *(float *)(&DAT_8c26d970 +
                            (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                  *(float *)(ar4 + 0x80);
        }
      }
      fVar5 = *(float *)(ar4 + 0x114);
      fVar4 = *(float *)(ar4 + 0x11c);
      fVar3 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar2 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar2 * fVar4 + ar5[6];
      ar5[7] = fVar2 * fVar3 + ar5[7];
      *ar5 = fVar2 * fVar5 + *ar5;
    }
  }
  return uVar1;
}



/* FUN_8c23affc @ 8c23affc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b01a) */
/* WARNING: Removing unreachable block (ram,0x8c23b014) */
/* WARNING: Removing unreachable block (ram,0x8c23b010) */
/* WARNING: Removing unreachable block (ram,0x8c23b00c) */
/* WARNING: Removing unreachable block (ram,0x8c23b008) */
/* WARNING: Removing unreachable block (ram,0x8c23b004) */
/* WARNING: Removing unreachable block (ram,0x8c23b006) */
/* WARNING: Removing unreachable block (ram,0x8c23b00a) */
/* WARNING: Removing unreachable block (ram,0x8c23b00e) */
/* WARNING: Removing unreachable block (ram,0x8c23b012) */
/* WARNING: Removing unreachable block (ram,0x8c23b018) */
/* WARNING: Removing unreachable block (ram,0x8c23b01c) */
/* WARNING: Removing unreachable block (ram,0x8c23b01e) */
/* WARNING: Removing unreachable block (ram,0x8c23b098) */
/* WARNING: Removing unreachable block (ram,0x8c23b08c) */
/* WARNING: Removing unreachable block (ram,0x8c23b080) */
/* WARNING: Removing unreachable block (ram,0x8c23b068) */
/* WARNING: Removing unreachable block (ram,0x8c23b058) */
/* WARNING: Removing unreachable block (ram,0x8c23b052) */
/* WARNING: Removing unreachable block (ram,0x8c23b044) */
/* WARNING: Removing unreachable block (ram,0x8c23b032) */
/* WARNING: Removing unreachable block (ram,0x8c23b024) */
/* WARNING: Removing unreachable block (ram,0x8c23b036) */
/* WARNING: Removing unreachable block (ram,0x8c23b03e) */
/* WARNING: Removing unreachable block (ram,0x8c23b04e) */
/* WARNING: Removing unreachable block (ram,0x8c23b054) */
/* WARNING: Removing unreachable block (ram,0x8c23b064) */
/* WARNING: Removing unreachable block (ram,0x8c23b076) */
/* WARNING: Removing unreachable block (ram,0x8c23b078) */
/* WARNING: Removing unreachable block (ram,0x8c23b088) */
/* WARNING: Removing unreachable block (ram,0x8c23b096) */
/* WARNING: Removing unreachable block (ram,0x8c23b0a0) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

uint FUN_8c23affc(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  float in_fr3;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11;
  float fVar14;
  float fVar15;
  undefined8 in_xd4;
  char cVar16;
  char cVar17;
  
  cVar17 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  cVar16 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < in_fr3);
  if (uVar1 == 3) {
    fVar14 = 1.0 / SQRT(in_fr11);
    uVar1 = 4;
    fVar15 = 1.0;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar15 = fVar14 * fVar14 * *(float *)(ar4 + 0x68);
    }
    fVar13 = *(float *)(ar4 + 0x70);
    fVar11 = *(float *)(ar4 + 0x74);
    fVar4 = *(float *)(ar4 + 0x108);
    fVar14 = in_fr3 * fVar14;
    fVar8 = *(float *)(ar4 + 0x10c);
    fVar6 = *(float *)(ar4 + 0x110);
    *(float *)((int)ar5 + 4) = fVar14 * fVar4 + *(float *)((int)ar5 + 4);
    *(float *)(ar5 + 1) = fVar14 * fVar8 + *(float *)(ar5 + 1);
    dVar5 = (double)CONCAT44(fVar15,fVar4);
    *(float *)((int)ar5 + 0xc) = fVar14 * fVar6 + *(float *)((int)ar5 + 0xc);
    if (fVar11 < fVar14 * fVar14) {
      if (fVar14 * fVar14 < fVar13) {
        dVar5 = (double)CONCAT44(fVar15,*(float *)(ar4 + 0x80) * fVar15);
        FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
        if (cVar16 == '\0') {
          dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0)
                                  );
        }
        else {
          dVar5 = dVar5 * dVar5;
        }
      }
      uVar1 = 4;
      puVar3 = (undefined8 *)((int)ar5 + 0x14);
      if (cVar17 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)ar5,fVar11);
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x11c),*(undefined4 *)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)puVar3,*(undefined4 *)(ar5 + 3));
        puVar2 = (undefined8 *)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(ar4 + 0x124);
        uVar9 = *puVar3;
        in_xd4 = *(undefined8 *)((int)ar5 + 0x1c);
        puVar2 = (undefined8 *)((int)ar5 + 0x24);
        uVar10 = *puVar2;
      }
      fVar14 = (float)((ulonglong)dVar5 >> 0x20);
      if (cVar16 == '\0') {
        uVar9 = CONCAT44(fVar14 * SUB84(dVar5,0) + (float)((ulonglong)uVar9 >> 0x20),
                         fVar14 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar9);
        fVar15 = (float)uVar10;
        uVar10 = CONCAT44(fVar14 * (float)uVar7 + (float)((ulonglong)uVar10 >> 0x20),fVar15);
        uVar12 = CONCAT44(fVar14 * fVar15 + (float)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      }
      if (cVar17 == '\0') {
        *(int *)puVar3 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(ar5 + 3) = (int)uVar9;
        *(int *)puVar2 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar3 = uVar9;
        ar5[3] = in_xd4;
        *puVar2 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return uVar1;
}



/* FUN_8c23b0f8 @ 8c23b0f8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b116) */
/* WARNING: Removing unreachable block (ram,0x8c23b110) */
/* WARNING: Removing unreachable block (ram,0x8c23b10c) */
/* WARNING: Removing unreachable block (ram,0x8c23b108) */
/* WARNING: Removing unreachable block (ram,0x8c23b104) */
/* WARNING: Removing unreachable block (ram,0x8c23b100) */
/* WARNING: Removing unreachable block (ram,0x8c23b102) */
/* WARNING: Removing unreachable block (ram,0x8c23b106) */
/* WARNING: Removing unreachable block (ram,0x8c23b10a) */
/* WARNING: Removing unreachable block (ram,0x8c23b10e) */
/* WARNING: Removing unreachable block (ram,0x8c23b114) */
/* WARNING: Removing unreachable block (ram,0x8c23b118) */
/* WARNING: Removing unreachable block (ram,0x8c23b11a) */
/* WARNING: Removing unreachable block (ram,0x8c23b1c0) */
/* WARNING: Removing unreachable block (ram,0x8c23b1b2) */
/* WARNING: Removing unreachable block (ram,0x8c23b1a0) */
/* WARNING: Removing unreachable block (ram,0x8c23b194) */
/* WARNING: Removing unreachable block (ram,0x8c23b18e) */
/* WARNING: Removing unreachable block (ram,0x8c23b184) */
/* WARNING: Removing unreachable block (ram,0x8c23b174) */
/* WARNING: Removing unreachable block (ram,0x8c23b172) */
/* WARNING: Removing unreachable block (ram,0x8c23b160) */
/* WARNING: Removing unreachable block (ram,0x8c23b150) */
/* WARNING: Removing unreachable block (ram,0x8c23b14a) */
/* WARNING: Removing unreachable block (ram,0x8c23b13a) */
/* WARNING: Removing unreachable block (ram,0x8c23b132) */
/* WARNING: Removing unreachable block (ram,0x8c23b120) */
/* WARNING: Removing unreachable block (ram,0x8c23b12e) */
/* WARNING: Removing unreachable block (ram,0x8c23b140) */
/* WARNING: Removing unreachable block (ram,0x8c23b14e) */
/* WARNING: Removing unreachable block (ram,0x8c23b154) */
/* WARNING: Removing unreachable block (ram,0x8c23b164) */
/* WARNING: Removing unreachable block (ram,0x8c23b17c) */
/* WARNING: Removing unreachable block (ram,0x8c23b188) */
/* WARNING: Removing unreachable block (ram,0x8c23b192) */
/* WARNING: Removing unreachable block (ram,0x8c23b19a) */
/* WARNING: Removing unreachable block (ram,0x8c23b1b0) */
/* WARNING: Removing unreachable block (ram,0x8c23b1de) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

uint FUN_8c23b0f8(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float in_fr3;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11;
  float fVar7;
  float fVar8;
  
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < in_fr3);
  if (uVar1 == 3) {
    fVar7 = 1.0 / SQRT(in_fr11);
    uVar1 = 4;
    fVar8 = 1.0;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar8 = fVar7 * fVar7 * *(float *)(ar4 + 0x68);
    }
    fVar6 = *(float *)(ar4 + 0x70);
    fVar5 = *(float *)(ar4 + 0x74);
    fVar7 = in_fr3 * fVar7;
    fVar3 = *(float *)(ar4 + 0x10c);
    fVar2 = *(float *)(ar4 + 0x110);
    fVar4 = fVar7 * fVar7;
    ar5[1] = fVar7 * *(float *)(ar4 + 0x108) + ar5[1];
    ar5[2] = fVar7 * fVar3 + ar5[2];
    ar5[3] = fVar7 * fVar2 + ar5[3];
    if (fVar5 < fVar4) {
      if (fVar4 < fVar6) {
        if ((int)(fVar4 * 256.0) < 0x100) {
          fVar8 = *(float *)(&DAT_8c26d970 +
                            (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar4 * 256.0)) * 4) *
                  *(float *)(ar4 + 0x80) * fVar8;
        }
      }
      uVar1 = 4;
      fVar3 = *(float *)(ar4 + 0x114);
      fVar2 = *(float *)(ar4 + 0x11c);
      fVar7 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar8 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar8 * fVar2 + ar5[6];
      ar5[7] = fVar8 * fVar7 + ar5[7];
      *ar5 = fVar8 * fVar3 + *ar5;
    }
  }
  return uVar1;
}



/* FUN_8c23b208 @ 8c23b208 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b220) */
/* WARNING: Removing unreachable block (ram,0x8c23b21a) */
/* WARNING: Removing unreachable block (ram,0x8c23b214) */
/* WARNING: Removing unreachable block (ram,0x8c23b212) */
/* WARNING: Removing unreachable block (ram,0x8c23b218) */
/* WARNING: Removing unreachable block (ram,0x8c23b21c) */
/* WARNING: Removing unreachable block (ram,0x8c23b222) */
/* WARNING: Removing unreachable block (ram,0x8c23b224) */
/* WARNING: Removing unreachable block (ram,0x8c23b29e) */
/* WARNING: Removing unreachable block (ram,0x8c23b292) */
/* WARNING: Removing unreachable block (ram,0x8c23b280) */
/* WARNING: Removing unreachable block (ram,0x8c23b274) */
/* WARNING: Removing unreachable block (ram,0x8c23b26e) */
/* WARNING: Removing unreachable block (ram,0x8c23b266) */
/* WARNING: Removing unreachable block (ram,0x8c23b25c) */
/* WARNING: Removing unreachable block (ram,0x8c23b23a) */
/* WARNING: Removing unreachable block (ram,0x8c23b236) */
/* WARNING: Removing unreachable block (ram,0x8c23b23e) */
/* WARNING: Removing unreachable block (ram,0x8c23b240) */
/* WARNING: Removing unreachable block (ram,0x8c23b262) */
/* WARNING: Removing unreachable block (ram,0x8c23b268) */
/* WARNING: Removing unreachable block (ram,0x8c23b272) */
/* WARNING: Removing unreachable block (ram,0x8c23b27a) */
/* WARNING: Removing unreachable block (ram,0x8c23b290) */
/* WARNING: Removing unreachable block (ram,0x8c23b2bc) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23b208(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_fr11;
  float fVar6;
  
  fVar1 = *(float *)(ar4 + 0x60);
  if (fVar1 != 0.0) {
                    /* WARNING: Ignoring partial resolution of indirect */
    in_r0 = 4;
    if (0.0 < in_fr11) {
      fVar6 = in_fr11 * in_fr11;
      fVar5 = *(float *)(ar4 + 0x70);
      fVar4 = *(float *)(ar4 + 0x74);
      fVar3 = *(float *)(ar4 + 0x10c);
      fVar2 = *(float *)(ar4 + 0x110);
      ar5[1] = in_fr11 * *(float *)(ar4 + 0x108) + ar5[1];
      ar5[2] = in_fr11 * fVar3 + ar5[2];
      ar5[3] = in_fr11 * fVar2 + ar5[3];
      if (fVar4 < fVar6) {
        if (fVar6 < fVar5) {
          in_r0 = 0x100;
          if ((int)(fVar6 * 256.0) < 0x100) {
            fVar1 = *(float *)(&DAT_8c26d970 +
                              (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar6 * 256.0)) * 4) *
                    *(float *)(ar4 + 0x80) * fVar1;
          }
        }
        fVar4 = *(float *)(ar4 + 0x114);
        fVar3 = *(float *)(ar4 + 0x11c);
        fVar2 = *(float *)(ar4 + 0x120);
        ar5[5] = fVar1 * *(float *)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar1 * fVar3 + ar5[6];
        ar5[7] = fVar1 * fVar2 + ar5[7];
        *ar5 = fVar1 * fVar4 + *ar5;
      }
    }
  }
  return in_r0;
}



/* FUN_8c23b2e4 @ 8c23b2e4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b318) */
/* WARNING: Removing unreachable block (ram,0x8c23b316) */
/* WARNING: Removing unreachable block (ram,0x8c23b310) */
/* WARNING: Removing unreachable block (ram,0x8c23b30c) */
/* WARNING: Removing unreachable block (ram,0x8c23b302) */
/* WARNING: Removing unreachable block (ram,0x8c23b2fe) */
/* WARNING: Removing unreachable block (ram,0x8c23b2f8) */
/* WARNING: Removing unreachable block (ram,0x8c23b2f4) */
/* WARNING: Removing unreachable block (ram,0x8c23b2ee) */
/* WARNING: Removing unreachable block (ram,0x8c23b2ea) */
/* WARNING: Removing unreachable block (ram,0x8c23b2ec) */
/* WARNING: Removing unreachable block (ram,0x8c23b2f0) */
/* WARNING: Removing unreachable block (ram,0x8c23b2f6) */
/* WARNING: Removing unreachable block (ram,0x8c23b2fa) */
/* WARNING: Removing unreachable block (ram,0x8c23b300) */
/* WARNING: Removing unreachable block (ram,0x8c23b304) */
/* WARNING: Removing unreachable block (ram,0x8c23b30e) */
/* WARNING: Removing unreachable block (ram,0x8c23b314) */
/* WARNING: Removing unreachable block (ram,0x8c23b332) */
/* WARNING: Removing unreachable block (ram,0x8c23b33a) */
/* WARNING: Removing unreachable block (ram,0x8c23b336) */
/* WARNING: Removing unreachable block (ram,0x8c23b326) */
/* WARNING: Removing unreachable block (ram,0x8c23b32e) */
/* WARNING: Removing unreachable block (ram,0x8c23b346) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23b2e4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float in_fr11;
  float fVar3;
  
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar2 = *(float *)(ar4 + 0x10c);
  fVar1 = *(float *)(ar4 + 0x110);
  if (in_fr11 <= 0.0) {
    fVar3 = -in_fr11;
    *(float *)(ar5 + 4) = fVar3 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
    *(float *)(ar5 + 8) = fVar3 * fVar2 + *(float *)(ar5 + 8);
    *(float *)(ar5 + 0xc) = fVar3 * fVar1 + *(float *)(ar5 + 0xc);
  }
  return 4;
}



/* FUN_8c23b35c @ 8c23b35c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b38c) */
/* WARNING: Removing unreachable block (ram,0x8c23b386) */
/* WARNING: Removing unreachable block (ram,0x8c23b37c) */
/* WARNING: Removing unreachable block (ram,0x8c23b378) */
/* WARNING: Removing unreachable block (ram,0x8c23b372) */
/* WARNING: Removing unreachable block (ram,0x8c23b36e) */
/* WARNING: Removing unreachable block (ram,0x8c23b368) */
/* WARNING: Removing unreachable block (ram,0x8c23b364) */
/* WARNING: Removing unreachable block (ram,0x8c23b362) */
/* WARNING: Removing unreachable block (ram,0x8c23b366) */
/* WARNING: Removing unreachable block (ram,0x8c23b36c) */
/* WARNING: Removing unreachable block (ram,0x8c23b370) */
/* WARNING: Removing unreachable block (ram,0x8c23b376) */
/* WARNING: Removing unreachable block (ram,0x8c23b37a) */
/* WARNING: Removing unreachable block (ram,0x8c23b384) */
/* WARNING: Removing unreachable block (ram,0x8c23b388) */
/* WARNING: Removing unreachable block (ram,0x8c23b38e) */
/* WARNING: Removing unreachable block (ram,0x8c23b390) */
/* WARNING: Removing unreachable block (ram,0x8c23b3aa) */
/* WARNING: Removing unreachable block (ram,0x8c23b3a4) */
/* WARNING: Removing unreachable block (ram,0x8c23b3a2) */
/* WARNING: Removing unreachable block (ram,0x8c23b3c0) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c23b35c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_fr11;
  
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
                    /* WARNING: Ignoring partial resolution of indirect */
  fVar1 = (1.0 - in_fr11) * 0.5;
  fVar3 = *(float *)(ar4 + 0x10c);
  fVar2 = *(float *)(ar4 + 0x110);
  *(float *)(ar5 + 4) = fVar1 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
  *(float *)(ar5 + 8) = fVar1 * fVar3 + *(float *)(ar5 + 8);
  *(float *)(ar5 + 0xc) = fVar1 * fVar2 + *(float *)(ar5 + 0xc);
  return &DAT_8c23b3d0;
}



/* FUN_8c23b3d8 @ 8c23b3d8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b418) */
/* WARNING: Removing unreachable block (ram,0x8c23b412) */
/* WARNING: Removing unreachable block (ram,0x8c23b40e) */
/* WARNING: Removing unreachable block (ram,0x8c23b40a) */
/* WARNING: Removing unreachable block (ram,0x8c23b406) */
/* WARNING: Removing unreachable block (ram,0x8c23b402) */
/* WARNING: Removing unreachable block (ram,0x8c23b3f6) */
/* WARNING: Removing unreachable block (ram,0x8c23b3f2) */
/* WARNING: Removing unreachable block (ram,0x8c23b3ec) */
/* WARNING: Removing unreachable block (ram,0x8c23b3e8) */
/* WARNING: Removing unreachable block (ram,0x8c23b3e2) */
/* WARNING: Removing unreachable block (ram,0x8c23b3de) */
/* WARNING: Removing unreachable block (ram,0x8c23b3e0) */
/* WARNING: Removing unreachable block (ram,0x8c23b3e4) */
/* WARNING: Removing unreachable block (ram,0x8c23b3ea) */
/* WARNING: Removing unreachable block (ram,0x8c23b3ee) */
/* WARNING: Removing unreachable block (ram,0x8c23b3f4) */
/* WARNING: Removing unreachable block (ram,0x8c23b3f8) */
/* WARNING: Removing unreachable block (ram,0x8c23b404) */
/* WARNING: Removing unreachable block (ram,0x8c23b408) */
/* WARNING: Removing unreachable block (ram,0x8c23b40c) */
/* WARNING: Removing unreachable block (ram,0x8c23b410) */
/* WARNING: Removing unreachable block (ram,0x8c23b416) */
/* WARNING: Removing unreachable block (ram,0x8c23b41a) */
/* WARNING: Removing unreachable block (ram,0x8c23b41c) */
/* WARNING: Removing unreachable block (ram,0x8c23b458) */
/* WARNING: Removing unreachable block (ram,0x8c23b454) */
/* WARNING: Removing unreachable block (ram,0x8c23b446) */
/* WARNING: Removing unreachable block (ram,0x8c23b43c) */
/* WARNING: Removing unreachable block (ram,0x8c23b434) */
/* WARNING: Removing unreachable block (ram,0x8c23b422) */
/* WARNING: Removing unreachable block (ram,0x8c23b430) */
/* WARNING: Removing unreachable block (ram,0x8c23b440) */
/* WARNING: Removing unreachable block (ram,0x8c23b44a) */
/* WARNING: Removing unreachable block (ram,0x8c23b46e) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

uint FUN_8c23b3d8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_fr11;
  
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  fVar2 = *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + fVar2;
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < fVar2);
  if (uVar1 == 3) {
    uVar1 = 4;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar2 = (fVar2 / in_fr11) * *(float *)(ar4 + 0x68);
    }
    fVar2 = fVar2 * (1.0 / SQRT(in_fr11));
    fVar4 = *(float *)(ar4 + 0x10c);
    fVar3 = *(float *)(ar4 + 0x110);
    *(float *)(ar5 + 4) = fVar2 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
    *(float *)(ar5 + 8) = fVar2 * fVar4 + *(float *)(ar5 + 8);
    *(float *)(ar5 + 0xc) = fVar2 * fVar3 + *(float *)(ar5 + 0xc);
  }
  return uVar1;
}



/* FUN_8c23b484 @ 8c23b484 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b4be) */
/* WARNING: Removing unreachable block (ram,0x8c23b4b8) */
/* WARNING: Removing unreachable block (ram,0x8c23b4b2) */
/* WARNING: Removing unreachable block (ram,0x8c23b4a4) */
/* WARNING: Removing unreachable block (ram,0x8c23b4a0) */
/* WARNING: Removing unreachable block (ram,0x8c23b49a) */
/* WARNING: Removing unreachable block (ram,0x8c23b496) */
/* WARNING: Removing unreachable block (ram,0x8c23b490) */
/* WARNING: Removing unreachable block (ram,0x8c23b48c) */
/* WARNING: Removing unreachable block (ram,0x8c23b48a) */
/* WARNING: Removing unreachable block (ram,0x8c23b48e) */
/* WARNING: Removing unreachable block (ram,0x8c23b494) */
/* WARNING: Removing unreachable block (ram,0x8c23b498) */
/* WARNING: Removing unreachable block (ram,0x8c23b49e) */
/* WARNING: Removing unreachable block (ram,0x8c23b4a2) */
/* WARNING: Removing unreachable block (ram,0x8c23b4b0) */
/* WARNING: Removing unreachable block (ram,0x8c23b4b6) */
/* WARNING: Removing unreachable block (ram,0x8c23b4ba) */
/* WARNING: Removing unreachable block (ram,0x8c23b4c0) */
/* WARNING: Removing unreachable block (ram,0x8c23b4c2) */
/* WARNING: Removing unreachable block (ram,0x8c23b4e4) */
/* WARNING: Removing unreachable block (ram,0x8c23b4de) */
/* WARNING: Removing unreachable block (ram,0x8c23b4d0) */
/* WARNING: Removing unreachable block (ram,0x8c23b4da) */
/* WARNING: Removing unreachable block (ram,0x8c23b4f2) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23b484(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float in_fr11;
  float fVar4;
  
  *(float *)(ar5 + 4) = *(float *)(ar5 + 4) + *(float *)(ar4 + 0xf8);
  *(float *)(ar5 + 8) = *(float *)(ar5 + 8) + *(float *)(ar4 + 0xfc);
  uVar1 = 0xc;
  *(float *)(ar5 + 0xc) = *(float *)(ar5 + 0xc) + *(float *)(ar4 + 0x100);
  if (*(float *)(ar4 + 0x60) != 0.0) {
    uVar1 = 4;
                    /* WARNING: Ignoring partial resolution of indirect */
    fVar3 = *(float *)(ar4 + 0x10c);
    fVar2 = *(float *)(ar4 + 0x110);
    if (0.0 < in_fr11) {
      fVar4 = in_fr11 * *(float *)(ar4 + 0x60);
      *(float *)(ar5 + 4) = fVar4 * *(float *)(ar4 + 0x108) + *(float *)(ar5 + 4);
      *(float *)(ar5 + 8) = fVar4 * fVar3 + *(float *)(ar5 + 8);
      *(float *)(ar5 + 0xc) = fVar4 * fVar2 + *(float *)(ar5 + 0xc);
    }
  }
  return uVar1;
}



/* FUN_8c23b508 @ 8c23b508 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b53c) */
/* WARNING: Removing unreachable block (ram,0x8c23b536) */
/* WARNING: Removing unreachable block (ram,0x8c23b528) */
/* WARNING: Removing unreachable block (ram,0x8c23b524) */
/* WARNING: Removing unreachable block (ram,0x8c23b51e) */
/* WARNING: Removing unreachable block (ram,0x8c23b51a) */
/* WARNING: Removing unreachable block (ram,0x8c23b514) */
/* WARNING: Removing unreachable block (ram,0x8c23b510) */
/* WARNING: Removing unreachable block (ram,0x8c23b50e) */
/* WARNING: Removing unreachable block (ram,0x8c23b512) */
/* WARNING: Removing unreachable block (ram,0x8c23b518) */
/* WARNING: Removing unreachable block (ram,0x8c23b51c) */
/* WARNING: Removing unreachable block (ram,0x8c23b522) */
/* WARNING: Removing unreachable block (ram,0x8c23b526) */
/* WARNING: Removing unreachable block (ram,0x8c23b534) */
/* WARNING: Removing unreachable block (ram,0x8c23b538) */
/* WARNING: Removing unreachable block (ram,0x8c23b53e) */
/* WARNING: Removing unreachable block (ram,0x8c23b540) */
/* WARNING: Removing unreachable block (ram,0x8c23b58a) */
/* WARNING: Removing unreachable block (ram,0x8c23b57a) */
/* WARNING: Removing unreachable block (ram,0x8c23b55a) */
/* WARNING: Removing unreachable block (ram,0x8c23b558) */
/* WARNING: Removing unreachable block (ram,0x8c23b554) */
/* WARNING: Removing unreachable block (ram,0x8c23b54e) */
/* WARNING: Removing unreachable block (ram,0x8c23b550) */
/* WARNING: Removing unreachable block (ram,0x8c23b556) */
/* WARNING: Removing unreachable block (ram,0x8c23b574) */
/* WARNING: Removing unreachable block (ram,0x8c23b580) */
/* WARNING: Removing unreachable block (ram,0x8c23b592) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23b508(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar5;
  double dVar4;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11;
  undefined8 in_xd4;
  char cVar14;
  char cVar15;
  
  *(float *)((int)ar5 + 4) = *(float *)((int)ar5 + 4) + *(float *)(ar4 + 0xf8);
  *(float *)(ar5 + 1) = *(float *)(ar5 + 1) + *(float *)(ar4 + 0xfc);
  *(float *)((int)ar5 + 0xc) = *(float *)((int)ar5 + 0xc) + *(float *)(ar4 + 0x100);
  cVar15 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  cVar14 = '\0';
  if (in_fr11 < 0.0) {
    fVar13 = *(float *)(ar4 + 0x70);
    fVar5 = -in_fr11;
    fVar11 = *(float *)(ar4 + 0x74);
    fVar3 = *(float *)(ar4 + 0x108);
    fVar8 = *(float *)(ar4 + 0x10c);
    fVar6 = *(float *)(ar4 + 0x110);
    *(float *)((int)ar5 + 4) = fVar5 * fVar3 + *(float *)((int)ar5 + 4);
    *(float *)(ar5 + 1) = fVar5 * fVar8 + *(float *)(ar5 + 1);
    *(float *)((int)ar5 + 0xc) = fVar5 * fVar6 + *(float *)((int)ar5 + 0xc);
    if (fVar11 < in_fr11 * in_fr11) {
      dVar4 = (double)CONCAT44(0x3f800000,fVar3);
      if (in_fr11 * in_fr11 < fVar13) {
        dVar4 = (double)CONCAT44(0x3f800000,*(undefined4 *)(ar4 + 0x80));
        FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0)
                                  );
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
      }
      puVar2 = (undefined8 *)((int)ar5 + 0x14);
      if (cVar15 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)ar5,fVar11);
        dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x11c),*(undefined4 *)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar5 + 3));
        puVar1 = (undefined8 *)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)puVar1,*(undefined4 *)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(ar4 + 0x124);
        uVar9 = *puVar2;
        in_xd4 = *(undefined8 *)((int)ar5 + 0x1c);
        puVar1 = (undefined8 *)((int)ar5 + 0x24);
        uVar10 = *puVar1;
      }
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      if (cVar14 == '\0') {
        uVar9 = CONCAT44(fVar3 * SUB84(dVar4,0) + (float)((ulonglong)uVar9 >> 0x20),
                         fVar3 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar9);
        fVar5 = (float)uVar10;
        uVar10 = CONCAT44(fVar3 * (float)uVar7 + (float)((ulonglong)uVar10 >> 0x20),fVar5);
        uVar12 = CONCAT44(fVar3 * fVar5 + (float)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      }
      if (cVar15 == '\0') {
        *(int *)puVar2 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(ar5 + 3) = (int)uVar9;
        *(int *)puVar1 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar2 = uVar9;
        ar5[3] = in_xd4;
        *puVar1 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return 4;
}



/* FUN_8c23b5e8 @ 8c23b5e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b61c) */
/* WARNING: Removing unreachable block (ram,0x8c23b616) */
/* WARNING: Removing unreachable block (ram,0x8c23b608) */
/* WARNING: Removing unreachable block (ram,0x8c23b604) */
/* WARNING: Removing unreachable block (ram,0x8c23b5fe) */
/* WARNING: Removing unreachable block (ram,0x8c23b5fa) */
/* WARNING: Removing unreachable block (ram,0x8c23b5f4) */
/* WARNING: Removing unreachable block (ram,0x8c23b5f0) */
/* WARNING: Removing unreachable block (ram,0x8c23b5ee) */
/* WARNING: Removing unreachable block (ram,0x8c23b5f2) */
/* WARNING: Removing unreachable block (ram,0x8c23b5f8) */
/* WARNING: Removing unreachable block (ram,0x8c23b5fc) */
/* WARNING: Removing unreachable block (ram,0x8c23b602) */
/* WARNING: Removing unreachable block (ram,0x8c23b606) */
/* WARNING: Removing unreachable block (ram,0x8c23b614) */
/* WARNING: Removing unreachable block (ram,0x8c23b618) */
/* WARNING: Removing unreachable block (ram,0x8c23b61e) */
/* WARNING: Removing unreachable block (ram,0x8c23b620) */
/* WARNING: Removing unreachable block (ram,0x8c23b694) */
/* WARNING: Removing unreachable block (ram,0x8c23b688) */
/* WARNING: Removing unreachable block (ram,0x8c23b676) */
/* WARNING: Removing unreachable block (ram,0x8c23b66a) */
/* WARNING: Removing unreachable block (ram,0x8c23b660) */
/* WARNING: Removing unreachable block (ram,0x8c23b654) */
/* WARNING: Removing unreachable block (ram,0x8c23b636) */
/* WARNING: Removing unreachable block (ram,0x8c23b630) */
/* WARNING: Removing unreachable block (ram,0x8c23b62e) */
/* WARNING: Removing unreachable block (ram,0x8c23b634) */
/* WARNING: Removing unreachable block (ram,0x8c23b638) */
/* WARNING: Removing unreachable block (ram,0x8c23b63a) */
/* WARNING: Removing unreachable block (ram,0x8c23b65a) */
/* WARNING: Removing unreachable block (ram,0x8c23b666) */
/* WARNING: Removing unreachable block (ram,0x8c23b66c) */
/* WARNING: Removing unreachable block (ram,0x8c23b686) */
/* WARNING: Removing unreachable block (ram,0x8c23b6b2) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23b5e8(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11;
  float fVar7;
  
  ar5[1] = ar5[1] + *(float *)(ar4 + 0xf8);
  ar5[2] = ar5[2] + *(float *)(ar4 + 0xfc);
  ar5[3] = ar5[3] + *(float *)(ar4 + 0x100);
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = 4;
  if (in_fr11 < 0.0) {
    fVar7 = in_fr11 * in_fr11;
    fVar6 = *(float *)(ar4 + 0x70);
    fVar2 = -in_fr11;
    fVar5 = *(float *)(ar4 + 0x74);
    fVar4 = *(float *)(ar4 + 0x10c);
    fVar3 = *(float *)(ar4 + 0x110);
    ar5[1] = fVar2 * *(float *)(ar4 + 0x108) + ar5[1];
    ar5[2] = fVar2 * fVar4 + ar5[2];
    ar5[3] = fVar2 * fVar3 + ar5[3];
    if (fVar5 < fVar7) {
      fVar2 = 1.0;
      if (fVar7 < fVar6) {
        fVar2 = 1.0;
        uVar1 = 0x100;
        if ((int)(fVar7 * 256.0) < 0x100) {
          fVar2 = *(float *)(&DAT_8c26d970 +
                            (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                  *(float *)(ar4 + 0x80);
        }
      }
      fVar5 = *(float *)(ar4 + 0x114);
      fVar4 = *(float *)(ar4 + 0x11c);
      fVar3 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar2 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar2 * fVar4 + ar5[6];
      ar5[7] = fVar2 * fVar3 + ar5[7];
      *ar5 = fVar2 * fVar5 + *ar5;
    }
  }
  return uVar1;
}



/* FUN_8c23b6dc @ 8c23b6dc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b71c) */
/* WARNING: Removing unreachable block (ram,0x8c23b716) */
/* WARNING: Removing unreachable block (ram,0x8c23b712) */
/* WARNING: Removing unreachable block (ram,0x8c23b70e) */
/* WARNING: Removing unreachable block (ram,0x8c23b70a) */
/* WARNING: Removing unreachable block (ram,0x8c23b706) */
/* WARNING: Removing unreachable block (ram,0x8c23b6fa) */
/* WARNING: Removing unreachable block (ram,0x8c23b6f6) */
/* WARNING: Removing unreachable block (ram,0x8c23b6f0) */
/* WARNING: Removing unreachable block (ram,0x8c23b6ec) */
/* WARNING: Removing unreachable block (ram,0x8c23b6e6) */
/* WARNING: Removing unreachable block (ram,0x8c23b6e2) */
/* WARNING: Removing unreachable block (ram,0x8c23b6e4) */
/* WARNING: Removing unreachable block (ram,0x8c23b6e8) */
/* WARNING: Removing unreachable block (ram,0x8c23b6ee) */
/* WARNING: Removing unreachable block (ram,0x8c23b6f2) */
/* WARNING: Removing unreachable block (ram,0x8c23b6f8) */
/* WARNING: Removing unreachable block (ram,0x8c23b6fc) */
/* WARNING: Removing unreachable block (ram,0x8c23b708) */
/* WARNING: Removing unreachable block (ram,0x8c23b70c) */
/* WARNING: Removing unreachable block (ram,0x8c23b710) */
/* WARNING: Removing unreachable block (ram,0x8c23b714) */
/* WARNING: Removing unreachable block (ram,0x8c23b71a) */
/* WARNING: Removing unreachable block (ram,0x8c23b71e) */
/* WARNING: Removing unreachable block (ram,0x8c23b720) */
/* WARNING: Removing unreachable block (ram,0x8c23b79a) */
/* WARNING: Removing unreachable block (ram,0x8c23b78e) */
/* WARNING: Removing unreachable block (ram,0x8c23b782) */
/* WARNING: Removing unreachable block (ram,0x8c23b76a) */
/* WARNING: Removing unreachable block (ram,0x8c23b75a) */
/* WARNING: Removing unreachable block (ram,0x8c23b754) */
/* WARNING: Removing unreachable block (ram,0x8c23b746) */
/* WARNING: Removing unreachable block (ram,0x8c23b734) */
/* WARNING: Removing unreachable block (ram,0x8c23b726) */
/* WARNING: Removing unreachable block (ram,0x8c23b738) */
/* WARNING: Removing unreachable block (ram,0x8c23b740) */
/* WARNING: Removing unreachable block (ram,0x8c23b750) */
/* WARNING: Removing unreachable block (ram,0x8c23b756) */
/* WARNING: Removing unreachable block (ram,0x8c23b766) */
/* WARNING: Removing unreachable block (ram,0x8c23b778) */
/* WARNING: Removing unreachable block (ram,0x8c23b77a) */
/* WARNING: Removing unreachable block (ram,0x8c23b78a) */
/* WARNING: Removing unreachable block (ram,0x8c23b798) */
/* WARNING: Removing unreachable block (ram,0x8c23b7a2) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

uint FUN_8c23b6dc(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11;
  float fVar14;
  float fVar15;
  undefined8 in_xd4;
  char cVar16;
  char cVar17;
  
  *(float *)((int)ar5 + 4) = *(float *)((int)ar5 + 4) + *(float *)(ar4 + 0xf8);
  fVar6 = *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 1) = *(float *)(ar5 + 1) + fVar6;
  *(float *)((int)ar5 + 0xc) = *(float *)((int)ar5 + 0xc) + *(float *)(ar4 + 0x100);
  cVar17 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  cVar16 = '\0';
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < fVar6);
  if (uVar1 == 3) {
    fVar14 = 1.0 / SQRT(in_fr11);
    uVar1 = 4;
    fVar15 = 1.0;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar15 = fVar14 * fVar14 * *(float *)(ar4 + 0x68);
    }
    fVar13 = *(float *)(ar4 + 0x70);
    fVar11 = *(float *)(ar4 + 0x74);
    fVar4 = *(float *)(ar4 + 0x108);
    fVar6 = fVar6 * fVar14;
    fVar8 = *(float *)(ar4 + 0x10c);
    fVar14 = *(float *)(ar4 + 0x110);
    *(float *)((int)ar5 + 4) = fVar6 * fVar4 + *(float *)((int)ar5 + 4);
    *(float *)(ar5 + 1) = fVar6 * fVar8 + *(float *)(ar5 + 1);
    dVar5 = (double)CONCAT44(fVar15,fVar4);
    *(float *)((int)ar5 + 0xc) = fVar6 * fVar14 + *(float *)((int)ar5 + 0xc);
    if (fVar11 < fVar6 * fVar6) {
      if (fVar6 * fVar6 < fVar13) {
        dVar5 = (double)CONCAT44(fVar15,*(float *)(ar4 + 0x80) * fVar15);
        FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
        if (cVar16 == '\0') {
          dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0)
                                  );
        }
        else {
          dVar5 = dVar5 * dVar5;
        }
      }
      uVar1 = 4;
      puVar3 = (undefined8 *)((int)ar5 + 0x14);
      if (cVar17 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)ar5,fVar11);
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x11c),*(undefined4 *)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)puVar3,*(undefined4 *)(ar5 + 3));
        puVar2 = (undefined8 *)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(ar4 + 0x124);
        uVar9 = *puVar3;
        in_xd4 = *(undefined8 *)((int)ar5 + 0x1c);
        puVar2 = (undefined8 *)((int)ar5 + 0x24);
        uVar10 = *puVar2;
      }
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      if (cVar16 == '\0') {
        uVar9 = CONCAT44(fVar6 * SUB84(dVar5,0) + (float)((ulonglong)uVar9 >> 0x20),
                         fVar6 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar9);
        fVar14 = (float)uVar10;
        uVar10 = CONCAT44(fVar6 * (float)uVar7 + (float)((ulonglong)uVar10 >> 0x20),fVar14);
        uVar12 = CONCAT44(fVar6 * fVar14 + (float)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      }
      if (cVar17 == '\0') {
        *(int *)puVar3 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(ar5 + 3) = (int)uVar9;
        *(int *)puVar2 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar3 = uVar9;
        ar5[3] = in_xd4;
        *puVar2 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return uVar1;
}



/* FUN_8c23b7fc @ 8c23b7fc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b83c) */
/* WARNING: Removing unreachable block (ram,0x8c23b836) */
/* WARNING: Removing unreachable block (ram,0x8c23b832) */
/* WARNING: Removing unreachable block (ram,0x8c23b82e) */
/* WARNING: Removing unreachable block (ram,0x8c23b82a) */
/* WARNING: Removing unreachable block (ram,0x8c23b826) */
/* WARNING: Removing unreachable block (ram,0x8c23b81a) */
/* WARNING: Removing unreachable block (ram,0x8c23b816) */
/* WARNING: Removing unreachable block (ram,0x8c23b810) */
/* WARNING: Removing unreachable block (ram,0x8c23b80c) */
/* WARNING: Removing unreachable block (ram,0x8c23b806) */
/* WARNING: Removing unreachable block (ram,0x8c23b802) */
/* WARNING: Removing unreachable block (ram,0x8c23b804) */
/* WARNING: Removing unreachable block (ram,0x8c23b808) */
/* WARNING: Removing unreachable block (ram,0x8c23b80e) */
/* WARNING: Removing unreachable block (ram,0x8c23b812) */
/* WARNING: Removing unreachable block (ram,0x8c23b818) */
/* WARNING: Removing unreachable block (ram,0x8c23b81c) */
/* WARNING: Removing unreachable block (ram,0x8c23b828) */
/* WARNING: Removing unreachable block (ram,0x8c23b82c) */
/* WARNING: Removing unreachable block (ram,0x8c23b830) */
/* WARNING: Removing unreachable block (ram,0x8c23b834) */
/* WARNING: Removing unreachable block (ram,0x8c23b83a) */
/* WARNING: Removing unreachable block (ram,0x8c23b83e) */
/* WARNING: Removing unreachable block (ram,0x8c23b840) */
/* WARNING: Removing unreachable block (ram,0x8c23b8e6) */
/* WARNING: Removing unreachable block (ram,0x8c23b8d8) */
/* WARNING: Removing unreachable block (ram,0x8c23b8c6) */
/* WARNING: Removing unreachable block (ram,0x8c23b8ba) */
/* WARNING: Removing unreachable block (ram,0x8c23b8b4) */
/* WARNING: Removing unreachable block (ram,0x8c23b8aa) */
/* WARNING: Removing unreachable block (ram,0x8c23b89a) */
/* WARNING: Removing unreachable block (ram,0x8c23b898) */
/* WARNING: Removing unreachable block (ram,0x8c23b888) */
/* WARNING: Removing unreachable block (ram,0x8c23b876) */
/* WARNING: Removing unreachable block (ram,0x8c23b870) */
/* WARNING: Removing unreachable block (ram,0x8c23b860) */
/* WARNING: Removing unreachable block (ram,0x8c23b858) */
/* WARNING: Removing unreachable block (ram,0x8c23b846) */
/* WARNING: Removing unreachable block (ram,0x8c23b854) */
/* WARNING: Removing unreachable block (ram,0x8c23b866) */
/* WARNING: Removing unreachable block (ram,0x8c23b874) */
/* WARNING: Removing unreachable block (ram,0x8c23b87a) */
/* WARNING: Removing unreachable block (ram,0x8c23b88a) */
/* WARNING: Removing unreachable block (ram,0x8c23b8a2) */
/* WARNING: Removing unreachable block (ram,0x8c23b8ae) */
/* WARNING: Removing unreachable block (ram,0x8c23b8b8) */
/* WARNING: Removing unreachable block (ram,0x8c23b8c0) */
/* WARNING: Removing unreachable block (ram,0x8c23b8d6) */
/* WARNING: Removing unreachable block (ram,0x8c23b904) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

uint FUN_8c23b7fc(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11;
  float fVar7;
  float fVar8;
  
  ar5[1] = ar5[1] + *(float *)(ar4 + 0xf8);
  fVar2 = *(float *)(ar4 + 0xfc);
  ar5[2] = ar5[2] + fVar2;
  ar5[3] = ar5[3] + *(float *)(ar4 + 0x100);
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < fVar2);
  if (uVar1 == 3) {
    fVar7 = 1.0 / SQRT(in_fr11);
    uVar1 = 4;
    fVar8 = 1.0;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar8 = fVar7 * fVar7 * *(float *)(ar4 + 0x68);
    }
    fVar6 = *(float *)(ar4 + 0x70);
    fVar5 = *(float *)(ar4 + 0x74);
    fVar2 = fVar2 * fVar7;
    fVar3 = *(float *)(ar4 + 0x10c);
    fVar7 = *(float *)(ar4 + 0x110);
    fVar4 = fVar2 * fVar2;
    ar5[1] = fVar2 * *(float *)(ar4 + 0x108) + ar5[1];
    ar5[2] = fVar2 * fVar3 + ar5[2];
    ar5[3] = fVar2 * fVar7 + ar5[3];
    if (fVar5 < fVar4) {
      if (fVar4 < fVar6) {
        if ((int)(fVar4 * 256.0) < 0x100) {
          fVar8 = *(float *)(&DAT_8c26d970 +
                            (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar4 * 256.0)) * 4) *
                  *(float *)(ar4 + 0x80) * fVar8;
        }
      }
      uVar1 = 4;
      fVar3 = *(float *)(ar4 + 0x114);
      fVar7 = *(float *)(ar4 + 0x11c);
      fVar2 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar8 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar8 * fVar7 + ar5[6];
      ar5[7] = fVar8 * fVar2 + ar5[7];
      *ar5 = fVar8 * fVar3 + *ar5;
    }
  }
  return uVar1;
}



/* FUN_8c23b930 @ 8c23b930 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c23b96a) */
/* WARNING: Removing unreachable block (ram,0x8c23b964) */
/* WARNING: Removing unreachable block (ram,0x8c23b95e) */
/* WARNING: Removing unreachable block (ram,0x8c23b950) */
/* WARNING: Removing unreachable block (ram,0x8c23b94c) */
/* WARNING: Removing unreachable block (ram,0x8c23b946) */
/* WARNING: Removing unreachable block (ram,0x8c23b942) */
/* WARNING: Removing unreachable block (ram,0x8c23b93c) */
/* WARNING: Removing unreachable block (ram,0x8c23b938) */
/* WARNING: Removing unreachable block (ram,0x8c23b936) */
/* WARNING: Removing unreachable block (ram,0x8c23b93a) */
/* WARNING: Removing unreachable block (ram,0x8c23b940) */
/* WARNING: Removing unreachable block (ram,0x8c23b944) */
/* WARNING: Removing unreachable block (ram,0x8c23b94a) */
/* WARNING: Removing unreachable block (ram,0x8c23b94e) */
/* WARNING: Removing unreachable block (ram,0x8c23b95c) */
/* WARNING: Removing unreachable block (ram,0x8c23b962) */
/* WARNING: Removing unreachable block (ram,0x8c23b966) */
/* WARNING: Removing unreachable block (ram,0x8c23b96c) */
/* WARNING: Removing unreachable block (ram,0x8c23b96e) */
/* WARNING: Removing unreachable block (ram,0x8c23b9e8) */
/* WARNING: Removing unreachable block (ram,0x8c23b9dc) */
/* WARNING: Removing unreachable block (ram,0x8c23b9ca) */
/* WARNING: Removing unreachable block (ram,0x8c23b9be) */
/* WARNING: Removing unreachable block (ram,0x8c23b9b8) */
/* WARNING: Removing unreachable block (ram,0x8c23b9b0) */
/* WARNING: Removing unreachable block (ram,0x8c23b9a6) */
/* WARNING: Removing unreachable block (ram,0x8c23b984) */
/* WARNING: Removing unreachable block (ram,0x8c23b980) */
/* WARNING: Removing unreachable block (ram,0x8c23b988) */
/* WARNING: Removing unreachable block (ram,0x8c23b98a) */
/* WARNING: Removing unreachable block (ram,0x8c23b9ac) */
/* WARNING: Removing unreachable block (ram,0x8c23b9b2) */
/* WARNING: Removing unreachable block (ram,0x8c23b9bc) */
/* WARNING: Removing unreachable block (ram,0x8c23b9c4) */
/* WARNING: Removing unreachable block (ram,0x8c23b9da) */
/* WARNING: Removing unreachable block (ram,0x8c23ba06) */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c23b930(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_fr11;
  float fVar7;
  
  ar5[1] = ar5[1] + *(float *)(ar4 + 0xf8);
  ar5[2] = ar5[2] + *(float *)(ar4 + 0xfc);
  uVar1 = 0xc;
  ar5[3] = ar5[3] + *(float *)(ar4 + 0x100);
  fVar2 = *(float *)(ar4 + 0x60);
  if (fVar2 != 0.0) {
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar1 = 4;
    if (0.0 < in_fr11) {
      fVar7 = in_fr11 * in_fr11;
      fVar6 = *(float *)(ar4 + 0x70);
      fVar5 = *(float *)(ar4 + 0x74);
      fVar4 = *(float *)(ar4 + 0x10c);
      fVar3 = *(float *)(ar4 + 0x110);
      ar5[1] = in_fr11 * *(float *)(ar4 + 0x108) + ar5[1];
      ar5[2] = in_fr11 * fVar4 + ar5[2];
      ar5[3] = in_fr11 * fVar3 + ar5[3];
      if (fVar5 < fVar7) {
        if (fVar7 < fVar6) {
          uVar1 = 0x100;
          if ((int)(fVar7 * 256.0) < 0x100) {
            fVar2 = *(float *)(&DAT_8c26d970 +
                              (*(int *)(ar4 + 0x88) * 0x100 + (int)(fVar7 * 256.0)) * 4) *
                    *(float *)(ar4 + 0x80) * fVar2;
          }
        }
        fVar5 = *(float *)(ar4 + 0x114);
        fVar4 = *(float *)(ar4 + 0x11c);
        fVar3 = *(float *)(ar4 + 0x120);
        ar5[5] = fVar2 * *(float *)(ar4 + 0x118) + ar5[5];
        ar5[6] = fVar2 * fVar4 + ar5[6];
        ar5[7] = fVar2 * fVar3 + ar5[7];
        *ar5 = fVar2 * fVar5 + *ar5;
      }
    }
  }
  return uVar1;
}



/* FUN_8c258096 @ 8c258096 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined1 * FUN_8c258096(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  _DAT_8c4aa6d4 = 0;
  puVar1 = &DAT_8c4aa6dc;
  _DAT_8c4aa6dc = 1;
  if (DAT_8c277aec != (code *)0x0) {
    puVar1 = (undefined1 *)(*DAT_8c277aec)();
  }
  return puVar1;
}



/* FUN_8c2580b8 @ 8c2580b8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2580b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  _DAT_8c4aa6d8 = 0;
  return in_r0;
}



/* FUN_8c2580c0 @ 8c2580c0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2580c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  _DAT_8c4aa558 = ar4;
  return in_r0;
}



/* FUN_8c258252 @ 8c258252 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c258252(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = _DAT_8c4aa6e0;
  return in_r0;
}



/* FUN_8c25fba0 @ 8c25fba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c25fba0(int ar4,undefined4 *ar5,int *ar6,int *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x9c);
  *ar6 = *(int *)(ar4 + 0x40) - *(int *)(ar4 + 0x9c);
  *ar7 = *(int *)(ar4 + 0x18) - *(int *)(ar4 + 0x98);
  return *(undefined4 *)(ar4 + 0x3c);
}



/* FUN_8c25fbbe @ 8c25fbbe callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c25fbbe(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  *(int *)(ar4 + 0x9c) = *(int *)(ar4 + 0x9c) + ar6;
  *(int *)(ar4 + 0x98) = *(int *)(ar4 + 0x98) + ar6;
  return 0x98;
}



/* FUN_8c2664c4 @ 8c2664c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2664c4(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c266214(ar4,ar5 + 0x14,ar6,ar7);
    FUN_8c266288(ar4,ar5 + 0x18,ar6,ar7);
    *ar5 = 0;
    ar5[1] = 0;
    FUN_8c266620(ar4,ar5 + 2,ar6,ar7);
    FUN_8c266368(ar4,ar5 + 3,ar6,ar7);
    FUN_8c2663d8(ar4,ar5 + 6,ar6,ar7);
    FUN_8c266448(ar4,ar5 + 8,ar6,ar7);
    FUN_8c2662f8(ar4,ar5 + 4,ar6,ar7);
    FUN_8c2661a4(ar4,ar5 + 5,ar6,ar7);
    FUN_8c266134(ar4,ar5 + 0x10,ar6,ar7);
    in_r0 = FUN_8c2665b0(ar4,ar5 + 0xc,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2664c4,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c26686a @ 8c26686a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26686a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (((char)ar5 < '\0') || (' ' < (char)ar5)) {
    ar5_00 = 0x3000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c26686a,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}



/* FUN_8c26a860 @ 8c26a860 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c26a860(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar4_00;
  int ar5_00;
  int iVar2;
  int ar6_00;
  undefined4 uVar3;
  undefined4 in_PR;
  
  iVar2 = -0x7f;
  if (-0x3bf < ar5) {
    if (-1 < ar5) {
      iVar1 = 0x7f;
      goto LAB_8c26a8aa;
    }
    iVar1 = libgcc_divide_helper_010468(ar5 * -0xff + 0x80,0xfffffc41);
    in_r0 = libgcc_divide_helper_010468(iVar1 * 10,0x12);
    iVar1 = in_r0;
    if (iVar2 <= in_r0) goto LAB_8c26a8aa;
  }
  iVar1 = iVar2;
LAB_8c26a8aa:
  iVar2 = 0;
  while( true ) {
    if (*(int *)(ar4 + 0xc) <= iVar2) {
      return in_r0;
    }
    uVar3 = 0;
    ar5_00 = iVar2;
    ar6_00 = iVar1;
    ar4_00 = thunk_FUN_8c267e54(*(undefined4 *)(ar4 + 0x30),iVar2,iVar1,0);
    if (ar4_00 != 0) break;
    iVar2 = iVar2 + 1;
    in_r0 = 0;
  }
  uVar3 = debug_printf(ar4_00,ar5_00,ar6_00,uVar3,s_E1237_sdPstmSetVol_return_error_i_8c27377c,in_PR
                      );
  return uVar3;
}


