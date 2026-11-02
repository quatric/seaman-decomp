/* Seaman (USA) region 0x8c0e0000-0x8c0f0000 (Ghidra decompiler) */

/* FUN_8c0e000c @ 8c0e000c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e000c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c0d1458(ar4 + 0x13b8c,ar5,ar6,ar7);
  uVar1 = FUN_8c0de6b0(ar4 + 0x13b70,ar5,ar6,ar7,in_PR);
  return uVar1;
}



/* FUN_8c0e004c @ 8c0e004c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e004c(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  uint a5;
  undefined4 in_PR;
  
  FUN_8c0db008(ar4,ar5,ar6,ar7);
  ar5_00 = 0;
  FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
  FUN_8c0d064c(ar4 + 0x4ec9,ar5_00,ar6,ar7);
  noop_0d98f4(ar4 + 0x89c1,ar5_00,ar6,ar7,in_PR);
  a5 = ar5;
  FUN_8c0d50ec(ar4 + 0x42b,ar5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    (**(code **)(*ar4 + 0x1c4))(ar4,a5,ar6,ar7);
  }
  else {
    (**(code **)(*ar4 + 0x7c))(ar4,a5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c0e00ec @ 8c0e00ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e00ec(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  noop_0d09f8(ar4 + 0x4edc,ar5,ar6,ar7,in_PR);
  (**(code **)(*ar4 + 0x15c))(ar4,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c0e0124 @ 8c0e0124 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0124(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0e0154)(ar4 + DAT_8c0e0150,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0158)(ar4 + DAT_8c0e0150,0,ar6,ar7);
  return 0;
}



/* FUN_8c0e015c @ 8c0e015c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e015c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0e0164;
  *(undefined4 *)(DAT_8c0e0164 + ar4) = ar5;
  return iVar1;
}



/* noop_0e0168 @ 8c0e0168 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e0168(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0e016c @ 8c0e016c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e016c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e01ec)((int)ar4 + DAT_8c0e01e8,ar5,ar6,ar7);
  (*(code *)PTR_s_GRAPHICS_ENV_0d0bd2_8c0e01f4)((int)ar4 + DAT_8c0e01f0,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_to_set_texture_wrap_0d14b0_8c0e01f8)((int)ar4 + DAT_8c0e01f0,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0e01fc + (int)ar4) = 3;
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0e0204)((int)ar4 + DAT_8c0e0200,0,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0208)((int)ar4 + DAT_8c0e0200,uVar1,ar6,ar7);
  (**(code **)(DAT_8c0e020c + *ar4))(ar4,uVar1,ar6,ar7);
  *(undefined4 *)(DAT_8c0e0210 + (int)ar4) = 0;
  uVar1 = (*(code *)PTR_FUN_8c0e0218)((int)ar4 + DAT_8c0e0214,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e021c @ 8c0e021c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e021c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e0284)(ar4 + DAT_8c0e0280,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0e028c)(ar4 + DAT_8c0e0288,0,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0290)(ar4 + DAT_8c0e0288,uVar1,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0e0298)(ar4 + DAT_8c0e0294,0,ar6,ar7);
  *(undefined4 *)(DAT_8c0e029c + ar4) = 3;
  *(undefined4 *)(DAT_8c0e02a0 + ar4) = 0;
  uVar1 = (*(code *)PTR_FUN_8c0e02a8)(ar4 + DAT_8c0e02a4,uVar1,ar6,ar7);
  return uVar1;
}



/* noop_0e02ac @ 8c0e02ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e02ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0e02b0 @ 8c0e02b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e02b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_8c0e02d8 + ar4) = 0;
  uVar1 = (*(code *)PTR_s_GRAPHICS_ENV_0d5220_8c0e02e0)(ar4 + DAT_8c0e02dc,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0e02e4 @ 8c0e02e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e02e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0e02e8 @ 8c0e02e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e0302) */
/* WARNING: Removing unreachable block (ram,0x8c0e02f8) */
/* WARNING: Removing unreachable block (ram,0x8c0e02ee) */
/* WARNING: Removing unreachable block (ram,0x8c0e02fa) */
/* WARNING: Removing unreachable block (ram,0x8c0e0304) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e02e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(ar4 + 0xa6c) = 0x43d6fe14;
  *(undefined4 *)(ar4 + 0xa70) = 0x4523bfd7;
  return &DAT_8c0e031c;
}



/* FUN_8c0e0320 @ 8c0e0320 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0320(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0e03a0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0e03a8)(ar4 + DAT_8c0e03a4,uVar2,ar6,ar7);
  (*(code *)PTR_s_Failed_to_set_texture_wrap_0d068c_8c0e03b0)(ar4 + DAT_8c0e03ac,uVar2,ar6,ar7);
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0e03b8)(ar4 + DAT_8c0e03b4,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_to_set_texture_wrap_0d97b4_8c0e03c0)(ar4 + DAT_8c0e03bc,uVar2,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    (*(code *)PTR_s_Failed_to_set_texture_wrap_0d09fc_8c0e03c8)(ar4 + DAT_8c0e03c4,uVar2,ar6,ar7);
  }
  else {
    (*(code *)PTR_s_Failed_to_set_texture_wrap_0d14b0_8c0e03d0)(ar4 + DAT_8c0e03cc,uVar2,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0e03a8)(ar4 + 4,uVar2,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e03d4 @ 8c0e03d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e03d4(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (*(code *)PTR_s_Failed_wrap_0d9b8c_8c0e0454)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_s_015312_8c0e045c)(ar4 + DAT_8c0e0458,uVar2,ar6,ar7);
  (*(code *)PTR_s_Failed_wrap_0d06a8_8c0e0464)(ar4 + DAT_8c0e0460,uVar2,ar6,ar7);
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0e046c)(ar4 + DAT_8c0e0468,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_wrap_0d97d0_8c0e0474)(ar4 + DAT_8c0e0470,uVar2,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    (*(code *)PTR_s_Failed_wrap_0d0a18_8c0e047c)(ar4 + DAT_8c0e0478,uVar2,ar6,ar7);
  }
  else {
    (*(code *)PTR_s_Failed_wrap_0d14cc_8c0e0484)(ar4 + DAT_8c0e0480,uVar2,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0e045c)(ar4 + 4,uVar2,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e0488 @ 8c0e0488 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0488(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  FUN_8c0db090(ar4,ar5,ar6,ar7);
  ar5_00 = ar5;
  FUN_8c0d5614(ar4 + 0x10ac,ar5,ar6,ar7);
  FUN_8c0d06c4(ar4 + 0x13b24,ar5_00,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = noop_0d0a34(ar4 + 0x13b70,ar5_00,ar6,ar7,in_PR);
  }
  else {
    uVar1 = FUN_8c0d14e8(ar4 + 0x13b8c,ar5_00,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0e0508 @ 8c0e0508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0508(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  FUN_8c0d55d0(ar4 + 0x10ac,ar5,ar6,ar7);
  FUN_8c0d06ec(ar4 + 0x13b24,ar5_00,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = noop_0d0a38(ar4 + 0x13b70,ar5_00,ar6,ar7,in_PR);
  }
  else {
    uVar1 = FUN_8c0d1518(ar4 + 0x13b8c,ar5_00,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0e057c @ 8c0e057c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e057c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  
  uVar1 = 0x1b;
  a4 = (*(code *)PTR_s_Shell_0fef9c_8c0e0604)(DAT_8c0e0600,0x10,0x1b,ar7);
  (**(code **)(*(int *)(a4 + 8) + 0x30))(a4,ar5,uVar1,ar7);
  (**(code **)(*(int *)(a4 + 8) + 0x2c))(a4,ar6,uVar1,ar7);
  (*(code *)PTR_FUN_8c0e0608)(a4,ar6,uVar1,ar7);
  (*(code *)PTR_FUN_8c0e060c)(a4,ar6,uVar1,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e0610)(ar4,a4,uVar1,ar7);
  return uVar1;
}



/* FUN_8c0e0614 @ 8c0e0614 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e0614) */
/* WARNING: Removing unreachable block (ram,0x8c0e0626) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0614(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  undefined1 auStack_5c [72];
  
  uVar3 = ar5;
  iVar1 = get_field_bb4_0e06e4(ar4,ar5,ar6,ar7);
  FUN_8c0db304(auStack_5c,uVar3,ar6,ar7);
  FUN_8c018f80(auStack_5c,ar5,ar6,ar7);
  iVar4 = 0;
  while( true ) {
    if (iVar1 <= iVar4) {
      uVar3 = FUN_8c0db224(ar4,ar5,ar6,ar7);
      Class_129974_m0_016c2c(auStack_5c,0xffffffff,ar6,ar7);
      return uVar3;
    }
    a4 = (int *)(ar4 + iVar4 * 0x16c + 0x22e0c);
    iVar2 = (**(code **)(*a4 + 0x14))(a4,auStack_5c,ar6,ar7);
    if (iVar2 == 1) break;
    iVar4 = iVar4 + 1;
  }
  Class_129974_m0_016c2c(auStack_5c,0xffffffff,ar6,ar7);
  return 2;
}



/* get_field_bb4_0e06e4 @ 8c0e06e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_bb4_0e06e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e06ec + ar4);
}



/* FUN_8c0e06f0 @ 8c0e06f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e06f0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(ar4 + DAT_8c0e0708);
  uVar1 = ar5[1];
  *puVar2 = *ar5;
  puVar2[1] = uVar1;
  uVar1 = ar5[3];
  puVar2[2] = ar5[2];
  puVar2[3] = uVar1;
  return uVar1;
}



/* FUN_8c0e070c @ 8c0e070c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e070c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(DAT_8c0e074c + ar4) = 1;
  uVar1 = (*(code *)PTR_pack_find_by_name_buffered_8c0e0758)
                    (DAT_8c0e0754,*(undefined4 *)(DAT_8c0e0750 + ar4),ar6,ar7);
  *(undefined4 *)(DAT_8c0e075c + ar4) = uVar1;
  iVar2 = *(int *)(DAT_8c0e075c + ar4);
  if (iVar2 != -1) {
    iVar2 = (*(code *)PTR_FUN_8c0e0760)(DAT_8c0e0754,*(undefined4 *)(DAT_8c0e075c + ar4),ar6,ar7);
  }
  return iVar2;
}



/* FUN_8c0e0764 @ 8c0e0764 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e07d6) */
/* WARNING: Removing unreachable block (ram,0x8c0e07ca) */
/* WARNING: Removing unreachable block (ram,0x8c0e07be) */
/* WARNING: Removing unreachable block (ram,0x8c0e07ba) */
/* WARNING: Removing unreachable block (ram,0x8c0e080e) */
/* WARNING: Removing unreachable block (ram,0x8c0e080c) */
/* WARNING: Removing unreachable block (ram,0x8c0e07b6) */
/* WARNING: Removing unreachable block (ram,0x8c0e07bc) */
/* WARNING: Removing unreachable block (ram,0x8c0e07c6) */
/* WARNING: Removing unreachable block (ram,0x8c0e07cc) */
/* WARNING: Removing unreachable block (ram,0x8c0e07d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0e0764(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  
  if (DAT_8c438258 == '\0') {
    _DAT_8c438254 = 0;
    DAT_8c438258 = '\x01';
  }
  if (DAT_8c438260 == '\0') {
    _DAT_8c43825c = (undefined8 *)0x0;
    DAT_8c438260 = '\x01';
  }
  if (_DAT_8c43825c == (undefined8 *)0x0) {
    *(float *)(ar4 + 0x2324c) = *(float *)(ar4 + 0x2324c) - 8.9;
    puVar1 = &DAT_8c0e0860;
    if (*(float *)(ar4 + 0x2324c) < -1314.45) {
      *(undefined4 *)(ar4 + 0x2324c) = 0xc4a214cc;
      _DAT_8c438254 = 0;
      _DAT_8c43825c = (undefined8 *)0x1;
      puVar1 = (undefined8 *)0x1;
    }
  }
  else {
    puVar1 = _DAT_8c43825c;
    if (_DAT_8c43825c == (undefined8 *)0x1) {
      _DAT_8c438254 = _DAT_8c438254 + 1;
      puVar1 = (undefined8 *)0x5a;
      if (0x5a < _DAT_8c438254) {
        *(undefined4 *)(ar4 + 0x23254) = 0;
        *(undefined4 *)(ar4 + 0x2324c) = 0xc4a44e66;
        puVar1 = *(undefined8 **)(ar4 + 0x2325c);
        if (*(undefined8 **)(ar4 + 0x2325c) != (undefined8 *)0xffffffff) {
          FUN_8c022104(0x8c2b59d0,*(undefined4 *)(ar4 + 0x2325c),ar6,ar7);
          FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(ar4 + 0x2325c),ar6,ar7);
          *(undefined4 *)(ar4 + 0x2325c) = 0xffffffff;
          _DAT_8c43825c = (undefined8 *)0x0;
          puVar1 = (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar1;
}



/* FUN_8c0e087c @ 8c0e087c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e0884) */
/* WARNING: Removing unreachable block (ram,0x8c0e0880) */
/* WARNING: Removing unreachable block (ram,0x8c0e0886) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e087c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (-1314.45 < *(float *)(ar4 + 0x2324c)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0e08a0 @ 8c0e08a0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e08a4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e08a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x10ac) = in_fr4;
  return 0x10ac;
}



/* FUN_8c0e08b0 @ 8c0e08b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e08b0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = DAT_8c0e08cc;
    *(undefined4 *)(DAT_8c0e08cc + ar4) = 1;
    return iVar1;
  }
  iVar1 = DAT_8c0e08cc;
  *(undefined4 *)(DAT_8c0e08cc + ar4) = 0;
  return iVar1;
}



/* FUN_8c0e08d0 @ 8c0e08d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e08d0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = DAT_8c0e08ec;
    *(undefined4 *)(DAT_8c0e08ec + ar4) = 1;
    return iVar1;
  }
  iVar1 = DAT_8c0e08ec;
  *(undefined4 *)(DAT_8c0e08ec + ar4) = 0;
  return iVar1;
}



/* FUN_8c0e08f0 @ 8c0e08f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0e08f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *s0)

{
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc;
  if (*(int *)(DAT_8c0e0948 + ar4) == 1) {
    uStack_4 = uStack_4 | 2;
  }
  if (*(int *)(DAT_8c0e094c + ar4) == 1) {
    uStack_4 = uStack_4 | 1;
  }
  *s0 = uStack_4;
  return uStack_4;
}



/* FUN_8c0e0950 @ 8c0e0950 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e0950(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0e095c;
}



/* FUN_8c0e0960 @ 8c0e0960 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0960(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_164_0d5c94_8c0e0984)(ar4 + DAT_8c0e0980,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e0988 @ 8c0e0988 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e0988) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0988(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *ar6_00;
  double dVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  puVar2 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,puVar2,ar6,ar7);
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(0x43608ba3,*ar5);
  }
  else {
    dVar3 = 1548112654508776.8;
  }
  if (cVar6 == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(0x43160000,ar5[2]);
  }
  else {
    dVar3 = 2.999234411734574e-309;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar3 / dVar3);
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (10 < iVar4) {
    iVar4 = 10;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (9 < iVar5) {
    iVar5 = 9;
  }
  if ((*(int *)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 0) ||
     (*(int *)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 1)) {
    if (cVar7 != '\0') {
      auStack_38[0] =
           (undefined4)
           ((ulonglong)*(undefined8 *)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x22818) >> 0x20);
    }
    Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
    uVar1 = 0x20;
  }
  else {
    puVar2 = auStack_38;
    ar6_00 = auStack_28;
    FUN_8c0185a4(ar4 + 0x2274c,ar5,ar6_00,puVar2);
    FUN_8c016a20(auStack_28,auStack_38,ar6_00,puVar2);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,puVar2);
    Vec3_dtor(auStack_28,0xffffffff,ar6_00,puVar2);
    uVar1 = 0x1c;
  }
  return uVar1;
}



/* FUN_8c0e0b2c @ 8c0e0b2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0b2c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar5 == 0) {
    uVar1 = (*(code *)PTR_FUN_8c0e0b94)(ar4 + DAT_8c0e0b90,0,ar6,ar7);
  }
  else if (ar5 == 1) {
    uVar1 = (*(code *)PTR_FUN_8c0e0b9c)(ar4 + DAT_8c0e0b98,1,ar6,ar7);
  }
  else if (ar5 == 4) {
    uVar1 = (*(code *)PTR_FUN_8c0e0ba4)(ar4 + DAT_8c0e0ba0,4,ar6,ar7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c0e0ba8 @ 8c0e0ba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0e0ba8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)(*(int *)(DAT_8c0e0bb4 + ar4) == 1);
}



/* FUN_8c0e0bb8 @ 8c0e0bb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0bb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(ar4 + 0x18) == 1) && (*(int *)(ar4 + 0x14) == 1)) {
    return 1;
  }
  return 0;
}



/* FUN_8c0e0bd0 @ 8c0e0bd0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e0bd2) */
/* WARNING: Removing unreachable block (ram,0x8c0e0bd6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0bd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x10) <= 0.0) {
    return 0;
  }
  return 1;
}



/* s_GRAPHICS_ENV_0e0bee @ 8c0e0be8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e0bee(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 uVar1;
  int ar7_00;
  
  (*(code *)PTR_FUN_8c0e0d38)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d34,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d3c)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d34,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d38)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d40,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d3c)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d40,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d38)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d44,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d3c)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d44,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d38)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d48,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d3c)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d48,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d38)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d4c,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  (*(code *)PTR_FUN_8c0e0d3c)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d4c,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  ar7_00 = ar4;
  (*(code *)PTR_FUN_8c0e0d38)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d50,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  ar6_00 = (uint)(byte)ar6;
  (*(code *)PTR_s_GRAPHICS_ENV_0d57ee_8c0e0d58)(ar4 + DAT_8c0e0d54,ar5,ar6_00,ar7_00);
  (*(code *)PTR_s_GRAPHICS_ENV_0d076c_8c0e0d60)(ar4 + DAT_8c0e0d5c,ar5,ar6_00,ar7_00);
  uVar1 = (*(code *)PTR_s_GRAPHICS_ENV_0d9912_8c0e0d68)(ar4 + DAT_8c0e0d64,ar5,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0e0d6c @ 8c0e0d6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e0d6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0e0d78;
}



/* FUN_8c0e0d7c @ 8c0e0d7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0d7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + DAT_8c0e0da0) + 0x28))
                    ((int *)(ar4 + DAT_8c0e0da0),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e0da4 @ 8c0e0da4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0da4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  (**(code **)(DAT_8c0e0ed4 + *ar4))(ar4,1,ar6,ar7);
  *(undefined4 *)(DAT_8c0e0ed8 + (int)ar4) = 1;
  *(undefined4 *)(DAT_8c0e0edc + (int)ar4) = 1;
  (*(code *)PTR_FUN_8c0e0efc)((int)ar4 + DAT_8c0e0ef8,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0efc)((int)ar4 + DAT_8c0e0f08,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0efc)((int)ar4 + DAT_8c0e0f18,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0efc)((int)ar4 + DAT_8c0e0f24,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0efc)((int)ar4 + DAT_8c0e0f34,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e0f44)((int)ar4 + DAT_8c0e0f40,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e0f48 @ 8c0e0f48 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e0f48) */
/* WARNING: Removing unreachable block (ram,0x8c0e0f4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0f48(int *ar4,undefined4 ar5,float *ar6,float *ar7)

{
  int ar4_00;
  int iVar1;
  int iVar2;
  int *ar5_00;
  float *ar5_01;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  uint uVar9;
  double dVar8;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  double dVar10;
  double in_xd14;
  bool bVar11;
  char cVar12;
  char cVar13;
  float afStack_4c [3];
  float fStack_40;
  float fStack_3c;
  double dStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  get_field_300_0bf154(ar4 + 0x29,ar5,ar6,ar7);
  ar4_00 = FUN_8c0da588(ar4 + 0x29,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_30,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_40,ar5,ar6,ar7);
  Vec3_set_xyz(afStack_4c,ar5,ar6,ar7);
  FUN_8c023040(ar4 + 0x8bae,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
    dVar7 = (double)CONCAT44(0x3f400000,ar4[0x8c03]);
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x8c03);
    dVar7 = 7.38978817419112e-312;
  }
  if (cVar12 == '\0') {
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    fVar5 = SUB84(dVar7,0) * fVar6;
    dVar7 = (double)CONCAT44(fVar6,fVar5);
    bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < fVar5;
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar11 = in_dr0 < dVar7;
  }
  if (bVar11) {
    (**(code **)(*ar4 + 0x15c))(ar4,ar5,ar6,ar7);
    FUN_8c0d56b4(ar4 + 0x42b,ar5,ar6,ar7);
  }
  ar5_00 = ar4 + 0x8bad;
  iVar1 = FUN_8c0d3d6c(ar4 + 0x42b,ar5_00,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c0e1320(ar4 + 0x4edc,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0d0aac(ar4 + 0x4edc,ar5_00,ar6,ar7);
    FUN_8c0d568c(ar4 + 0x42b,ar5_00,ar6,ar7);
  }
  FUN_8c0d08c0(ar4 + 0x4edc,ar5_00,ar6,ar7);
  iVar1 = get_field_14_0e1318(ar4 + 0x4edc,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = get_field_300_0bf154(ar4 + 0x29,ar5_00,ar6,ar7);
    for (iVar4 = 0; uVar3 = SUB84(in_dr14,0), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7 = &fStack_28;
      ar6 = &fStack_2c;
      ar5_01 = &fStack_30;
      FUN_8c0507a4(ar4_00,ar5_01,ar6,ar7);
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44(fStack_2c,uVar3);
      }
      else {
        in_dr14 = (double)CONCAT44(fStack_28,fStack_2c);
      }
      FUN_8c0e130c(ar4 + 0x42b,ar5_01,ar6,ar7);
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar7 >> 0x20) < (float)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        bVar11 = dVar7 < in_dr14;
      }
      if ((!bVar11) &&
         (iVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 200))(ar4_00,ar5_01,ar6,ar7), iVar2 == 1)) {
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x44861000,fStack_30);
        }
        else {
          in_xd0 = (double)CONCAT44(fStack_2c,fStack_30);
          dVar7 = 3.03513869969298e-309;
        }
        if (cVar12 == '\0') {
          fStack_30 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_30 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x43320000,fStack_2c);
        }
        else {
          fStack_30 = SUB84(in_xd0,0);
          fStack_2c = (float)((ulonglong)in_xd0 >> 0x20);
          in_xd0 = (double)CONCAT44(fStack_28,fStack_2c);
          dVar7 = 1.3023403680263821e+22;
        }
        if (cVar12 == '\0') {
          fStack_2c = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_2c = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x44358000,fStack_28);
        }
        else {
          fStack_2c = SUB84(in_xd0,0);
          fStack_28 = (float)((ulonglong)in_xd0 >> 0x20);
          in_xd0 = (double)CONCAT44(uStack_24,fStack_28);
          dVar7 = 5066550725148672.0;
        }
        if (cVar12 == '\0') {
          fStack_28 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_28 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dStack_38 = (double)CONCAT44(dStack_38._4_4_,fStack_28);
          dVar10 = (double)CONCAT44(fStack_28,fStack_28);
        }
        else {
          fStack_28 = SUB84(in_xd0,0);
          uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
          dVar10 = in_xd0;
          dStack_38 = in_xd0;
          fStack_3c = fStack_2c;
        }
        _fStack_40 = CONCAT44(fStack_3c,fStack_30);
        Vec3_length_sq(&fStack_40,ar5_01,ar6,ar7);
        uVar3 = SUB84(in_dr0,0);
        if (cVar13 == '\0') {
          dVar7 = (double)CONCAT44(0x443b8000,(int)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar7 = -7.937140160381387e-251;
          in_xd0 = dVar10;
        }
        if (cVar12 == '\0' && SUB84(dVar7,0) < (float)((ulonglong)dVar7 >> 0x20)) {
          Vec3_length(&fStack_30,ar5_01,ar6,ar7);
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x43320000,SUB84(dVar7,0));
          }
          else {
            dVar7 = 1.3023403680263821e+22;
          }
          fVar5 = (float)((ulonglong)dVar7 >> 0x20);
          if (cVar12 == '\0') {
            in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) - fVar5,SUB84(in_dr14,0))
            ;
          }
          else {
            in_dr14 = in_dr14 - dVar7;
          }
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(fVar5,0x44348000);
          }
          else {
            in_xd0 = 0.008437501388982582;
          }
          fVar5 = (float)((ulonglong)in_dr14 >> 0x20);
          if (cVar12 == '\0') {
            fVar6 = SUB84(dVar7,0) - fVar5;
          }
          else {
            fVar6 = SUB84(dVar7 - in_dr14,0);
          }
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x44348000,fVar6);
          }
          else {
            dVar7 = 0.008437501388982582;
          }
          if (cVar12 == '\0') {
            fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x3f8147ae,fVar6);
          }
          else {
            dVar7 = 5.377642808889976e-19;
          }
          if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 - dVar7;
          }
          dVar10 = dVar7;
          dVar8 = dVar7;
          if (cVar13 == '\0') {
            uVar9 = (uint)((ulonglong)dVar7 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar5,uVar9);
            dVar7 = (double)(ulonglong)uVar9;
            dVar10 = in_xd0;
            dVar8 = in_xd14;
          }
          in_xd14 = dVar8;
          if (cVar12 == '\0' && SUB84(dVar7,0) < 0.0) {
            if (cVar13 == '\0') {
              in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0x3c23d70a);
            }
            else {
              in_xd14 = 134217758.07;
            }
          }
          fVar5 = SUB84(in_dr14,0);
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(fStack_30,uVar3);
            dVar8 = (double)CONCAT44(fVar5,0x41a00000);
          }
          else {
            dVar7 = (double)CONCAT44(fStack_2c,fStack_30);
            dVar10 = -1.362436379967432e-249;
            dVar8 = in_xd14;
          }
          if (cVar12 == '\0') {
            dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                     (float)((ulonglong)dVar8 >> 0x20) * SUB84(dVar8,0),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 * dVar8 * dVar8;
          }
          fStack_30 = SUB84(dVar7,0);
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          if (cVar13 == '\0') {
            in_dr0 = (double)CONCAT44(fStack_2c,fStack_30);
            dVar7 = (double)CONCAT44(fVar5,0x41a00000);
            fStack_30 = fVar6;
          }
          else {
            in_dr0 = (double)CONCAT44(fStack_28,fVar6);
            dVar10 = -1.362436379967432e-249;
            dVar7 = in_xd14;
          }
          if (cVar12 == '\0') {
            in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) *
                                      (float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0),
                                      SUB84(in_dr0,0));
          }
          else {
            in_dr0 = in_dr0 * dVar7 * dVar7;
          }
          fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
          if (cVar13 == '\0') {
            dVar7 = (double)CONCAT44(0x41a00000,fStack_28);
            in_xd0 = dVar10;
            fStack_2c = fVar6;
          }
          else {
            fStack_2c = SUB84(in_dr0,0);
            in_xd0 = (double)CONCAT44(uStack_24,fVar6);
            dVar7 = -1.362436379967432e-249;
          }
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          if (cVar12 == '\0') {
            fVar5 = fVar5 * fVar6;
            in_dr14 = (double)(ulonglong)(uint)fVar5;
            dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) * fVar5);
          }
          else {
            in_dr14 = in_dr14 * dVar7;
            dVar7 = dVar7 * in_dr14;
          }
          if (cVar13 == '\0') {
            fStack_28 = SUB84(dVar7,0);
          }
          else {
            fStack_28 = SUB84(in_xd0,0);
            uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          FUN_8c023bf4(&fStack_30,&DAT_8c438264,ar6,ar7);
          (**(code **)(*(int *)(ar4_00 + 8) + 0x9c))(ar4_00,&fStack_30,ar6,ar7);
          ar5_01 = afStack_4c;
          (**(code **)(*(int *)(ar4_00 + 8) + 0xa0))(ar4_00,ar5_01,ar6,ar7);
        }
      }
      ar4_00 = list_node_next(ar4_00,ar5_01,ar6,ar7);
    }
    dVar10 = _DAT_8c438264;
    if (cVar13 == '\0') {
      dVar7 = (double)((ulonglong)_DAT_8c438264 & 0xffffffff);
      dVar10 = in_xd0;
    }
    dVar8 = _DAT_8c438264;
    if (cVar12 == '\0' && SUB84(dVar7,0) < 1.0) {
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x3dcccccd,SUB84(_DAT_8c438264,0));
      }
      else {
        dVar7 = -1.2971028142978771e-250;
        dVar10 = _DAT_8c438264;
      }
      if (cVar12 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      dVar8 = dVar10;
      if (cVar13 == '\0') {
        _DAT_8c438264 = (double)CONCAT44(_DAT_8c438268,fVar5);
        dVar8 = _DAT_8c438264;
      }
    }
  }
  else {
    dVar8 = (double)((ulonglong)dVar7 & 0xffffffff);
    if (cVar13 == '\0') {
      _DAT_8c438264 = (double)((ulonglong)_DAT_8c438264 & 0xffffffff00000000);
      dVar8 = _DAT_8c438264;
    }
  }
  _DAT_8c438264 = dVar8;
  FUN_8c0db7d4(ar4,1,ar6,ar7);
  uVar3 = 3;
  FUN_8c0db7d4(ar4,3,ar6,ar7);
  FUN_8c0d0a44(ar4 + 0x4edc,uVar3,ar6,ar7);
  object_dtor_delete(afStack_4c,0xffffffff,ar6,ar7);
  Vec3_dtor(&fStack_40,0xffffffff,ar6,ar7);
  uVar3 = Vec3_dtor(&fStack_30,0xffffffff,ar6,ar7);
  return uVar3;
}



/* FUN_8c0e130c @ 8c0e130c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e130c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0e1314;
}



/* get_field_14_0e1318 @ 8c0e1318 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_14_0e1318(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x14);
}



/* FUN_8c0e1320 @ 8c0e1320 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e1320(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  return 0;
}



/* FUN_8c0e132c @ 8c0e132c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e132c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e1388)(ar4 + DAT_8c0e1384,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e138c)(ar4,1,ar6,ar7);
  uVar1 = 3;
  (*(code *)PTR_FUN_8c0e138c)(ar4,3,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e1394)(ar4 + DAT_8c0e1384,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e1398 @ 8c0e1398 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e1398(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_dr0;
  undefined4 uVar5;
  undefined8 uVar4;
  char cVar6;
  char cVar7;
  
  uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = ar4 + 0x22eb4;
  FUN_8c0d3d6c(ar4 + 0x10ac,uVar2,ar6,ar7);
  FUN_8c023040(ar4 + 0x22eb8,uVar2,ar6,ar7);
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x2300c),uVar5);
  }
  else {
    uVar4 = *(undefined8 *)(ar4 + 0x2300c);
  }
  if (cVar6 == '\0' && (float)uVar4 < (float)((ulonglong)uVar4 >> 0x20)) {
    uVar2 = 0;
    FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7);
  }
  FUN_8c0d0d1c(ar4 + 0x13b8c,uVar2,ar6,ar7);
  ar4_00 = FUN_8c101154(*(undefined4 *)(ar5 + 0x7cc),uVar2,ar6,ar7);
  if (ar4_00 == 1) {
    iVar1 = get_field_38_0db5a0(ar4 + 0x4d4,uVar2,ar6,ar7);
    ar4_00 = 0;
    if (iVar1 != 0) {
      ar4_00 = FUN_8c0db580(ar4 + 0x4d4,uVar2,ar6,ar7);
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = get_field_b8_101178(*(undefined4 *)(ar5 + 0x7cc),uVar2,ar6,ar7);
        uVar2 = uVar2 & 0xff;
        (**(code **)(*(int *)(*(int *)(ar4_00 + 8) + 8) + 0x50))(*(int *)(ar4_00 + 8),uVar2,ar6,ar7)
        ;
        ar4_00 = list_node_next(ar4_00,uVar2,ar6,ar7);
      }
    }
  }
  return ar4_00;
}



/* FUN_8c0e14d8 @ 8c0e14d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e14d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e14f8)(ar4 + DAT_8c0e14f4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e14fc @ 8c0e14fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e14fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  (*(code *)PTR_FUN_8c0e155c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1564)(ar4 + DAT_8c0e1560,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e156c)(ar4 + DAT_8c0e1568,ar5,ar6,ar7);
  ar4_00 = ar4 + DAT_8c0e1570;
  (*(code *)PTR_FUN_8c0e156c)(ar4_00,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1574)(ar4_00,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e156c)(ar4 + DAT_8c0e1578,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1564)(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e156c)(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e157c @ 8c0e157c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e157c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  (*(code *)PTR_FUN_8c0e15dc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15e4)(ar4 + DAT_8c0e15e0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15ec)(ar4 + DAT_8c0e15e8,ar5,ar6,ar7);
  ar4_00 = ar4 + DAT_8c0e15f0;
  (*(code *)PTR_FUN_8c0e15ec)(ar4_00,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15f4)(ar4_00,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15ec)(ar4 + DAT_8c0e15f8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15e4)(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e15ec)(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e15fc @ 8c0e15fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e15fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c01538c(ar4 + 0x106c,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x107c,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1074,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1078,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_ENV_0e16a0 @ 8c0e1698 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e16a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint a7;
  code *pcVar6;
  int *piVar7;
  code *ar7_00;
  uint uVar8;
  undefined4 in_fr1;
  char cVar9;
  undefined4 in_stack_ffffff64;
  undefined4 uStack_3c;
  int aiStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar9 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_set_zero(aiStack_38 + 2,uVar3,ar6,ar7);
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  uStack_3c = 0;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_nj_8c13fdbf,s_GRAPHICS_ENV_8c13f8cb,aiStack_38);
  if (iVar1 == 0) {
    report_error_message(s_suisou_nj_8c13fdbf,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,2);
  }
  puVar4 = &uStack_3c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_nj_8c13fdbf,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message(s_suisou_nj_8c13fdbf,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,2);
  }
  FUN_8c015ad4(ar4 + 0x30,aiStack_38[0],pcVar2,puVar4,in_stack_ffffff64);
  uVar5 = 5;
  uVar3 = 0x8c4312a8;
  FUN_8c239170(0x8c437554,0x8c43755c,0x8c4312a8,5);
  for (uVar8 = 0; uVar8 < 5; uVar8 = uVar8 + 1) {
    uVar5 = 0x8c43755c;
    *(uint *)(uVar8 * 0xc + -0x73bc8aa0) = *(uint *)(uVar8 * 0xc + -0x73bc8aa0) | 0x80000000;
  }
  ar5_00 = 0x8c437554;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),0x8c437554,uVar3,uVar5);
  uVar3 = get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,uVar5);
  iVar1 = FUN_8c02100c(ar5,s_suisou_pvm_8c13fe91,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_water_tank_textue_8c13fe9c,s_CWaterTank__CreateStage___8c13fec0,0,2)
    ;
  }
  iVar1 = FUN_8c0209fc(ar5,s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_GRAPHICS_ENV_8c13f8cb,aiStack_38
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,
               2);
  }
  puVar4 = &uStack_3c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message
              (s_suisou_parts_S_GlassB_Up_nj_8c13fdc9,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,
               2);
  }
  FUN_8c015ad4(ar4 + 0x1074,aiStack_38[0],pcVar2,puVar4,in_stack_ffffff64);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_GRAPHICS_ENV_8c13f8cb,aiStack_38
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,
               2);
  }
  puVar4 = &uStack_3c;
  iVar1 = FUN_8c020af4(ar5,s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    report_error_message
              (s_suisou_parts_S_GlassB_Dn_nj_8c13fde5,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,
               2);
  }
  FUN_8c015ad4(ar4 + 0x1078,aiStack_38[0],0x1078,puVar4,in_stack_ffffff64);
  iVar1 = FUN_8c0209fc(ar5,s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_GRAPHICS_ENV_8c13f8cb,aiStack_38
                      );
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,
               2);
  }
  puVar4 = &uStack_3c;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message
              (s_suisou_parts_S_GlassS_Up_nj_8c13fe01,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,
               2);
  }
  FUN_8c015ad4(ar4 + 0x107c,aiStack_38[0],pcVar2,puVar4,in_stack_ffffff64);
  a7 = 3;
  FUN_8c239170(ar4 + 0x1080,ar4 + 0x1088,0x8c4312a8,3);
  uVar8 = 0;
  while (uVar8 < 3) {
    *(uint *)(uVar8 * 0xc + ar4 + 0x108c) = *(uint *)(uVar8 * 0xc + ar4 + 0x108c) | 0x80000000;
    a7 = uVar8 + 1;
    uVar8 = a7;
  }
  iVar1 = ar4 + 0x1080;
  (**(code **)(*(int *)(ar4 + 0x106c) + 8))((int *)(ar4 + 0x106c),iVar1,3,a7);
  uVar3 = get_field_4_0253e4(ar4 + 0x106c,iVar1,get_field_4_0253e4,ar4 + 0x106c);
  iVar1 = FUN_8c02100c(ar5,s_SuisouParts_pvm_8c13feda,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_water_tank_upper_t_8c13feea,s_CWaterTank__CreateStage___8c13fec0,0,2
              );
  }
  iVar1 = FUN_8c0209fc(ar5,s_suisou_TempMeter_nj_8c13fe1d,s_GRAPHICS_ENV_8c13f8cb,aiStack_38);
  if (iVar1 == 0) {
    report_error_message
              (s_suisou_TempMeter_nj_8c13fe1d,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,2);
  }
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_suisou_TempMeter_nj_8c13fe1d,s_GRAPHICS_ENV_8c13f8cb,&uStack_3c);
  if (iVar1 == 0) {
    pcVar2 = (char *)0x0;
    report_error_message
              (s_suisou_TempMeter_nj_8c13fe1d,s_Failed_NJTL_CWaterTank__CreateSt_8c13fe6b,0,2);
  }
  pcVar6 = FUN_8c015ad4;
  FUN_8c015ad4(ar4 + 0x226f8,aiStack_38[0],pcVar2,FUN_8c015ad4);
  uVar3 = uStack_3c;
  uVar5 = uStack_3c;
  (**(code **)(*(int *)(ar4 + 0x226fc) + 8))((int *)(ar4 + 0x226fc),uStack_3c,uStack_3c,pcVar6);
  uVar3 = get_field_4_0253e4(ar4 + 0x226fc,uVar3,uVar5,pcVar6);
  pcVar2 = s_THERMOMETER_8c13ff14;
  iVar1 = FUN_8c020ef0(ar5,s_THERMOMETER_8c13ff14,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = s_CWaterTank__CreateStage___8c13fec0;
    report_error_message
              (s_Failed_to_load_thermometer_textu_8c13ff20,s_CWaterTank__CreateStage___8c13fec0,0,2)
    ;
  }
  uVar3 = get_field_4_0253e4(ar4 + 0x22d40,pcVar2,get_field_4_0253e4,uVar3);
  iVar1 = FUN_8c020ef0(ar5,s_WATER_ROCK_8c13ff45,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    report_error_message
              (s_Failed_to_load_rock_textuer___8c13ff50,s_CWaterTank__CreateStage___8c13fec0,0,2);
  }
  piVar7 = aiStack_38;
  iVar1 = FUN_8c0209fc(ar5,s_suisou_Collision_nj_8c13fe31,s_GRAPHICS_ENV_8c13f8cb,piVar7);
  if (iVar1 == 0) {
    piVar7 = (int *)0x2;
    report_error_message
              (s_suisou_Collision_nj_8c13fe31,s_Failed_NJCM_CWaterTank__CreateSt_8c13fe45,0,2);
  }
  uVar3 = 0x2274c;
  FUN_8c0178b4(ar4 + 0x2274c,*(undefined4 *)(aiStack_38[0] + 4),0x2274c,piVar7);
  s_GRAPHICS_ENV_0d0006(ar4 + 0x13b24,ar5,uVar3,piVar7);
  pcVar6 = s_GRAPHICS_ENV_0d07f2;
  s_GRAPHICS_ENV_0d07f2(ar4 + 0x13b70,ar5,uVar3,s_GRAPHICS_ENV_0d07f2);
  uVar3 = 0x22704;
  s_GRAPHICS_ENV_0d93b0(ar4 + 0x22704,ar5,0x22704,pcVar6);
  s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,uVar3,pcVar6);
  if (cVar9 == '\0') {
    uStack_20 = 0;
    uVar3 = in_fr1;
  }
  else {
    uStack_18 = 0x80;
    uVar3 = 0xc23c0000;
    uStack_20 = in_fr1;
  }
  uStack_1c = 0xbf800000;
  aiStack_38[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
    uStack_24 = uStack_20;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar3;
  }
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x227d0,aiStack_38 + 2,pcVar6);
  if (cVar9 != '\0') {
    uVar3 = 0x423c0000;
  }
  aiStack_38[2] = 0x423c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar3;
  }
  puVar4 = &uStack_24;
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(puVar4,ar4 + 0x227e0,aiStack_38 + 2,puVar4);
  if (cVar9 == '\0') {
    uStack_20 = 0;
    uVar5 = uVar3;
  }
  else {
    uStack_18 = 0x80;
    uVar5 = 0xc23c0000;
    uStack_20 = uVar3;
  }
  uStack_1c = 0xbf800000;
  aiStack_38[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
    uStack_24 = uStack_20;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar5;
  }
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x227f0,aiStack_38 + 2,puVar4);
  uStack_28 = uVar5;
  if (cVar9 != '\0') {
    uStack_28 = 0x423c0000;
  }
  aiStack_38[2] = 0x423c0000;
  if (cVar9 == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
  }
  ar7_00 = FUN_8c0d167c;
  aiStack_38[3] = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x22800,aiStack_38 + 2,FUN_8c0d167c);
  pcVar6 = (code *)0x0;
  while (pcVar6 < (code *)0x3) {
    FUN_8c0d70e4(ar4 + (int)pcVar6 * 0x16c + 0x22d48,(int)pcVar6 * 0x16c,3,ar7_00);
    ar7_00 = pcVar6 + 1;
    pcVar6 = ar7_00;
  }
  piVar7 = aiStack_38 + 2;
  object_dtor_delete(piVar7,0xffffffff,piVar7,ar7_00);
  uVar3 = Vec3_dtor(&uStack_24,0xffffffff,piVar7,ar7_00);
  return uVar3;
}



/* FUN_8c0e1f90 @ 8c0e1f90 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e1fc4) */
/* WARNING: Removing unreachable block (ram,0x8c0e1fb8) */
/* WARNING: Removing unreachable block (ram,0x8c0e2428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e1f90(int ar4,undefined4 *ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_dr2;
  undefined8 in_xd0;
  bool bVar11;
  undefined4 in_PR;
  char cVar12;
  char cVar13;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uStack_1c = 0;
  uStack_20 = 0;
  if (DAT_8c43826c == '\0') {
    _DAT_8c438268 = CONCAT35((int3)(_DAT_8c438268 >> 0x28),0x100000000);
  }
  uStack_28 = 0;
  if (DAT_8c438270 == '\0') {
    _DAT_8c438268 = _DAT_8c438268 & 0xffffffffffff;
    DAT_8c438270 = '\x01';
  }
  puVar6 = ar5;
  uStack_c = in_PR;
  FUN_8c0dc61c(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1003b0(ar5,puVar6,ar6,ar7);
  if ((iVar1 != 1) && (*(int *)(ar4 + 0x9d8) != 0)) {
    *(undefined4 *)(ar4 + 0x9d8) = 0;
  }
  iVar1 = FUN_8c100ce8(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x88))(*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7);
  }
  puVar6 = &uStack_28;
  iVar1 = FUN_8c100e4c(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x184))(*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7)
    ;
  }
  else {
    puVar6 = &uStack_28;
    iVar1 = FUN_8c100e4c(ar5,puVar6,ar6,ar7);
    if ((iVar1 == 2) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x188))
                (*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7);
    }
  }
  FUN_8c0dc8fc(ar4,ar5,ar6,ar7);
  puVar6 = ar5;
  FUN_8c0dc7e8(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c10031c(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 200))
                      (*(int *)(ar4 + 0x9d4),puVar6,ar6,ar7);
    if (iVar1 == 1) {
      puVar6 = ar5;
      FUN_8c0e4298(ar4,ar5,ar6,ar7);
    }
    else {
      puVar6 = (undefined4 *)0x2;
      FUN_8c021720(0x8c2b59d0,2,ar6,ar7);
    }
  }
  iVar1 = FUN_8c1003b0(ar5,puVar6,ar6,ar7);
  if (((iVar1 == 1) && (*(int *)(ar4 + 0x9d8) != 0)) && (*(int *)(ar4 + 0x9d4) == 0)) {
    puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 4);
    if (cVar13 == '\0') {
      uStack_18 = *(undefined4 *)puVar2;
    }
    else {
      uStack_18 = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 8);
    if (cVar13 == '\0') {
      uStack_14 = *(undefined4 *)puVar2;
    }
    else {
      uStack_14 = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0xc);
    if (cVar13 == '\0') {
      uStack_10 = *(undefined4 *)puVar2;
    }
    else {
      uVar8 = *puVar2;
      uStack_10 = (undefined4)uVar8;
      uStack_c = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    ar6 = auStack_30;
    puVar6 = &uStack_18;
    FUN_8c256294(0,puVar6,ar6,ar7);
    FUN_8c0c90d0(ar5,puVar6,ar6,ar7);
  }
  FUN_8c0d723c(ar4 + 0x22d48,puVar6,ar6,ar7);
  if ((*(int *)(ar4 + 0x9d8) == 0) || (*(int *)(ar4 + 0x9d8) == ar4 + 0x22d48)) {
    if (*(int *)(ar4 + 0x9d8) == ar4 + 0x22d48) {
      iVar1 = FUN_8c100850(ar5,puVar6,ar6,ar7);
      if (iVar1 == 1) {
        FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7);
      }
      else {
        iVar1 = FUN_8c100874(ar5,puVar6,ar6,ar7);
        if (iVar1 == 1) {
          FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7);
        }
      }
      if (cVar13 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x22d74),_DAT_8c438268);
      }
      else {
        uVar8 = *(undefined8 *)(ar4 + 0x22d74);
      }
      if (((float)uVar8 != (float)((ulonglong)uVar8 >> 0x20)) && (_DAT_8c43826e == 0)) {
        uStack_24 = FUN_8c02190c(0x8c2b59d0,puVar6,ar6,ar7);
        ar6 = (undefined1 *)0x10;
        FUN_8c021994(0x8c2b59d0,uStack_24,0x10,ar7);
        puVar6 = &uStack_24;
        FUN_8c021a8c(0x8c2b59d0,puVar6,ar6,ar7);
        _DAT_8c438268 = CONCAT26(8,_DAT_8c438268);
      }
    }
  }
  else {
    iVar1 = FUN_8c100808(ar5,puVar6,ar6,ar7);
    if (iVar1 == 1) {
      pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *pdVar3;
      }
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = -1.701787568380408e+78;
      }
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)in_dr2 >> 0x20) <
                 SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        bVar11 = in_dr2 < dVar9 - dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.701787568380408e+78;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = FUN_8c10082c(ar5,puVar6,ar6,ar7);
      if (iVar1 == 1) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *pdVar3;
        }
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          bVar11 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20) <
                   (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar11 = dVar9 + dVar9 < in_dr2;
        }
        if (bVar11) {
          pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 0xc);
          puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x1c);
          if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = -1.3995363365918915e-250;
          }
          if (cVar12 == '\0') {
            fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 + dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)pfVar5 = in_xd0;
          }
        }
      }
    }
    uVar4 = SUB84(in_dr2,0);
    iVar1 = FUN_8c100850(ar5,puVar6,ar6,ar7);
    if (iVar1 == 1) {
      pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)pdVar3,uVar4);
      }
      else {
        dVar9 = *pdVar3;
      }
      puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
      if (cVar13 == '\0') {
        dVar10 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar10 = -1.3995363365918915e-250;
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20) <
                 (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        bVar11 = dVar10 + dVar10 < dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = FUN_8c100874(ar5,puVar6,ar6,ar7);
      if (iVar1 == 1) {
        pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(*(int *)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)pdVar3,uVar4);
        }
        else {
          dVar9 = *pdVar3;
        }
        puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar10 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar10 = 9.880610002640478e-290;
        }
        if (cVar12 == '\0') {
          bVar11 = (float)((ulonglong)dVar9 >> 0x20) <
                   SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          bVar11 = dVar9 < dVar10 - dVar10;
        }
        if (bVar11) {
          pfVar5 = (float *)(*(int *)(ar4 + 0x9d8) + 4);
          puVar2 = (undefined8 *)(*(int *)(ar4 + 0x9d8) + 0x14);
          if (cVar13 == '\0') {
            dVar9 = (double)CONCAT44(0x428c0000,*(undefined4 *)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = 9.880610002640478e-290;
          }
          if (cVar12 == '\0') {
            fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)pfVar5 = in_xd0;
          }
        }
      }
    }
  }
  if (cVar13 == '\0') {
    _DAT_8c438268 = CONCAT44(_DAT_8c43826c,*(undefined4 *)(ar4 + 0x22d74));
  }
  else {
    _DAT_8c438268 = *(undefined8 *)(ar4 + 0x22d74);
  }
  if (_DAT_8c43826e != 0) {
    _DAT_8c438268 = CONCAT26(_DAT_8c43826e + -1,_DAT_8c438268);
  }
  iVar1 = FUN_8c0e2554(ar5,puVar6,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d8) == 0)) {
    puVar6 = ar5;
    FUN_8c0e4348(ar4,ar5,ar6,ar7);
  }
  iVar1 = FUN_8c0e252c(ar5,puVar6,ar6,ar7);
  if (iVar1 == 1) {
    uVar4 = get_field_cc_0dfee8(ar5,puVar6,ar6,ar7);
    uVar4 = FUN_8c01f528(uVar4,puVar6,ar6,ar7);
    FUN_8c01d9e0(uVar4,puVar6,ar6,ar7);
  }
  return 1;
}



/* FUN_8c0e252c @ 8c0e252c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e252c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e2550)(*(undefined4 *)(DAT_8c0e254c + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e2554 @ 8c0e2554 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e2554(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_4_0637f8_8c0e25b0)(ar4 + DAT_8c0e25ac,ar5,ar6,ar7);
  if (((iVar1 == 0) &&
      (iVar1 = (*(code *)PTR_input_is_mask_set_20000_01ebd8_8c0e25b8)
                         (*(undefined4 *)(DAT_8c0e25b4 + ar4),ar5,ar6,ar7), iVar1 == 1)) &&
     (iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c0e25bc)
                        (*(undefined4 *)(DAT_8c0e25b4 + ar4),ar5,ar6,ar7), iVar1 == 1)) {
    return 1;
  }
  return 0;
}



/* FUN_8c0e25c0 @ 8c0e25c0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e25d8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e25c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *ar5_00;
  int iVar4;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = 0;
  if (*(int *)(ar4 + 0xac8) != 0) {
    uVar3 = ar5;
    iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 0xac8),ar5,ar6,ar7);
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (**(code **)(*(int *)(*(int *)(ar4 + 0xac8) + 8) + 0x84))(*(int *)(ar4 + 0xac8),0,ar6,ar7);
    }
    iVar1 = FUN_8c100cb4(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7);
      a4 = FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7);
      for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
        uVar3 = 2;
        (**(code **)(*(int *)(a4 + 8) + 0x84))(a4,2,ar6,ar7);
        a4 = list_node_next(a4,uVar3,ar6,ar7);
      }
    }
    ar5_00 = auStack_20;
    iVar1 = FUN_8c100e4c(ar5,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x184))
                (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
    }
    else {
      ar5_00 = auStack_20;
      iVar1 = FUN_8c100e4c(ar5,ar5_00,ar6,ar7);
      if ((iVar1 == 2) && (*(int *)(ar4 + 0x9d4) != 0)) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x188))
                  (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
      }
    }
    iVar1 = FUN_8c100ce8(ar5,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x88))
                (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
    }
    FUN_8c0dc8fc(ar4,ar5,ar6,ar7);
    uVar3 = ar5;
    FUN_8c0dc7e8(ar4,ar5,ar6,ar7);
    iVar1 = FUN_8c10031c(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0xac8) + 8) + 200))
                        (*(int *)(ar4 + 0xac8),uVar3,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) == *(int *)(ar4 + 0xac8))) {
        uVar3 = ar5;
        FUN_8c0e4298(ar4,ar5,ar6,ar7);
        for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
          uVar3 = 0;
          FUN_8c0e2838(ar4 + iVar1 * 0x16c + 0x22d48,0,ar6,ar7);
        }
      }
      else {
        uVar3 = 2;
        FUN_8c021720(0x8c2b59d0,2,ar6,ar7);
      }
    }
    iVar1 = FUN_8c0e252c(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      uVar2 = get_field_cc_0dfee8(ar5,uVar3,ar6,ar7);
      uVar2 = FUN_8c01f528(uVar2,uVar3,ar6,ar7);
      FUN_8c01d9e0(uVar2,uVar3,ar6,ar7);
    }
  }
  return 1;
}



/* FUN_8c0e2838 @ 8c0e2838 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e2838(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0e2840;
  *(undefined4 *)(DAT_8c0e2840 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0e2844 @ 8c0e2844 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e2844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_ret_const_1_0dc548_8c0e2890)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (*(code *)PTR_FUN_8c0e289c)(ar4 + iVar1 * DAT_8c0e2894 + DAT_8c0e2898,0,ar6,ar7);
  }
  return 1;
}



/* FUN_8c0e28a0 @ 8c0e28a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e28a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  float fVar2;
  undefined8 in_dr0;
  undefined4 uVar5;
  double dVar3;
  float fVar6;
  double dVar4;
  undefined4 uVar7;
  double in_dr2;
  char cVar8;
  char cVar9;
  
  uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  iVar1 = FUN_8c100b20(ar5,ar5,ar6,ar7);
  uVar7 = SUB84(in_dr2,0);
  if (iVar1 == 1) {
    FUN_8c0dc27c(ar5,ar5_00,ar6,ar7);
    if (cVar9 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa70),uVar7);
      dVar3 = (double)CONCAT44(0x40000000,uVar5);
    }
    else {
      in_dr2 = *(double *)(ar4 + 0xa70);
      dVar3 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      fVar6 = (float)((ulonglong)dVar3 >> 0x20);
      fVar2 = SUB84(dVar3,0) * fVar6;
      dVar3 = (double)CONCAT44(fVar6,fVar2);
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + fVar2,SUB84(in_dr2,0));
    }
    else {
      dVar3 = dVar3 * dVar3;
      in_dr2 = in_dr2 + dVar3;
    }
    uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0xa70) = in_dr2;
    }
  }
  else {
    iVar1 = FUN_8c100b84(ar5,ar5_00,ar6,ar7);
    uVar7 = SUB84(in_dr2,0);
    if (iVar1 == 1) {
      FUN_8c0dc27c(ar5,ar5_00,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa70),uVar7);
        dVar3 = (double)CONCAT44(0x40000000,uVar5);
      }
      else {
        in_dr2 = *(double *)(ar4 + 0xa70);
        dVar3 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        fVar6 = (float)((ulonglong)dVar3 >> 0x20);
        fVar2 = SUB84(dVar3,0) * fVar6;
        dVar3 = (double)CONCAT44(fVar6,fVar2);
        in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + fVar2,SUB84(in_dr2,0));
      }
      else {
        dVar3 = dVar3 * dVar3;
        in_dr2 = in_dr2 + dVar3;
      }
      uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0xa70) = in_dr2;
      }
    }
  }
  uVar7 = SUB84(in_dr2,0);
  iVar1 = FUN_8c100be8(ar5,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c0dc26c(ar5,ar5_00,ar6,ar7);
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa68),uVar7);
      dVar4 = (double)CONCAT44(0x40000000,uVar5);
    }
    else {
      dVar3 = *(double *)(ar4 + 0xa68);
      dVar4 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) +
                               SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4 * dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0xa68) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0xa68) = dVar3;
    }
  }
  else {
    iVar1 = FUN_8c100c34(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c0dc26c(ar5,ar5_00,ar6,ar7);
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa68),uVar7);
        dVar4 = (double)CONCAT44(0x40000000,uVar5);
      }
      else {
        dVar3 = *(double *)(ar4 + 0xa68);
        dVar4 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) +
                                 SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 + dVar4 * dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0xa68) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0xa68) = dVar3;
      }
    }
  }
  FUN_8c0dc558(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0e29dc @ 8c0e29dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e29dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0e2a0c)(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0e2a10)(ar4,ar5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c0e2a14 @ 8c0e2a14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e2be2) */
/* WARNING: Removing unreachable block (ram,0x8c0e2bde) */
/* WARNING: Removing unreachable block (ram,0x8c0e2be4) */
/* WARNING: Unknown calling convention */

int FUN_8c0e2a14(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  double in_dr0;
  double dVar6;
  undefined4 in_fr3;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 auStack_18 [2];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar5 = 0;
  uVar4 = 0x80;
  iVar1 = ar4[0x409];
  if (iVar1 == 0) {
    uVar3 = 0;
    FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
    (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
    iVar1 = FUN_8c0e31e8(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      ar4[0x409] = 1;
      piVar2 = ar4 + 0x412;
      if (cVar9 == '\0') {
        *piVar2 = 0x43df8000;
        in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
        ar4[0x414] = 0x43df8000;
      }
      else {
        piVar2[0] = 0x43df8000;
        piVar2[1] = 0x1050;
        in_dr0 = 8.86201702588265e-311;
        ar4[0x414] = 0x43df8000;
        ar4[0x415] = 0x1050;
      }
    }
    else {
      iVar1 = FUN_8c0e319c(ar5,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
        ar4[0x409] = 1;
        piVar2 = ar4 + 0x412;
        if (cVar9 == '\0') {
          *piVar2 = 0x43df8000;
          in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
          ar4[0x414] = 0x43df8000;
        }
        else {
          piVar2[0] = 0x43df8000;
          piVar2[1] = 0x1050;
          in_dr0 = 8.86201702588265e-311;
          ar4[0x414] = 0x43df8000;
          ar4[0x415] = 0x1050;
        }
      }
      else {
        iVar1 = FUN_8c0e3150(ar5,uVar3,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
          ar4[0x409] = 1;
          piVar2 = ar4 + 0x412;
          if (cVar9 == '\0') {
            *piVar2 = 0x43df8000;
            in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
            ar4[0x414] = 0x43df8000;
          }
          else {
            piVar2[0] = 0x43df8000;
            piVar2[1] = 0x1050;
            in_dr0 = 8.86201702588265e-311;
            ar4[0x414] = 0x43df8000;
            ar4[0x415] = 0x1050;
          }
        }
      }
    }
  }
  else {
    uVar3 = ar5;
    if (iVar1 == 1) {
      in_dr0 = (double)CONCAT44(0x43c58000,ar4[0x412]);
      if (((float)ar4[0x412] == 395.0) && (iVar1 = FUN_8c0e30f0(ar5,ar5,ar6,ar7), iVar1 == 1)) {
        ar4[0x409] = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_8c0e319c(ar5,ar5,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
      }
      else {
        iVar1 = FUN_8c0e3150(ar5,uVar3,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_8c0e30c8(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    ar4[0x409] = 3;
  }
  if (ar4[0x409] == 2) {
    if (ar4[0x408] == 3) {
      uVar3 = 0;
      FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
      (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
    }
    if ((ar4[0x408] == 3) && (iVar1 = FUN_8c0e30a0(ar5,uVar3,ar6,ar7), iVar1 == 1)) {
      if ((ar4[0x8a04] == 1) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 1;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 0;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 0)) {
        ar4[0x8a04] = 1;
        ar4[0x8a05] = 1;
      }
      if ((ar4[0x8a04] == 1) || (ar4[0x8a05] == 1)) {
        FUN_8c0d4f3c(ar4 + 0x42b,uVar3,ar6,ar7);
      }
      else {
        FUN_8c0d4f70(ar4 + 0x42b,uVar3,ar6,ar7);
      }
      uVar5 = 0x80;
      uVar4 = 0xff;
      auStack_18[0] = FUN_8c02190c(0x8c2b59d0,uVar3,ar6,ar7);
      uVar3 = 3;
      FUN_8c021994(0x8c2b59d0,auStack_18[0],3,ar7);
      FUN_8c021a8c(0x8c2b59d0,auStack_18,uVar3,ar7);
    }
    else if (ar4[0x408] == 0) {
      iVar1 = FUN_8c0e3078(ar5,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        uVar3 = 1;
        FUN_8c0d0538(ar4 + 0x4ec9,1,ar6,ar7);
        uVar5 = 0x80;
        uVar4 = 0xff;
      }
      else {
        uVar3 = 0;
        FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
        uVar5 = 0;
        uVar4 = 0x80;
      }
      (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
    }
    else if (ar4[0x408] == 1) {
      iVar1 = FUN_8c0e3050(ar5,uVar3,ar6,ar7);
      if (iVar1 == 1) {
        (**(code **)(*ar4 + 0x158))(ar4,uVar3,ar6,ar7);
        FUN_8c023040(ar4 + 0x8bae,uVar3,ar6,ar7);
        if (cVar9 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
          dVar6 = (double)CONCAT44(0x3f400000,ar4[0x8c03]);
        }
        else {
          dVar6 = 3.03505338272344e-309;
        }
        if (cVar8 == '\0') {
          bVar7 = (float)((ulonglong)in_dr0 >> 0x20) <
                  SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar7 = in_dr0 < dVar6 * dVar6;
        }
        uVar5 = 0x80;
        uVar4 = 0xff;
        if (bVar7) {
          FUN_8c0d7508(ar4 + 0x8bad,uVar3,ar6,ar7);
        }
      }
      else {
        (**(code **)(*ar4 + 0x15c))(ar4,uVar3,ar6,ar7);
        uVar5 = 0;
        uVar4 = 0x80;
      }
      FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (ar4[0x409] != 0) {
    *(undefined2 *)(ar4 + 0x417) = uVar5;
    *(undefined2 *)(ar4 + 0x418) = uVar5;
    *(undefined2 *)(ar4 + 0x419) = uVar4;
    *(undefined2 *)(ar4 + 0x41a) = uVar4;
    iVar1 = ar4[0x408];
    if (iVar1 == 0) {
      *(undefined2 *)((int)ar4 + 0x105e) = 0x40;
      *(undefined2 *)((int)ar4 + 0x1062) = 0x20;
      *(undefined2 *)((int)ar4 + 0x1066) = 0x20;
      iVar1 = 0x106a;
      *(undefined2 *)((int)ar4 + 0x106a) = 0x40;
    }
    else if (iVar1 == 1) {
      *(undefined2 *)((int)ar4 + 0x105e) = 0x60;
      *(undefined2 *)((int)ar4 + 0x1062) = 0x40;
      *(undefined2 *)((int)ar4 + 0x1066) = 0x40;
      iVar1 = 0x106a;
      *(undefined2 *)((int)ar4 + 0x106a) = 0x60;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)((int)ar4 + 0x105e) = 0x20;
      *(undefined2 *)((int)ar4 + 0x1062) = 0;
      *(undefined2 *)((int)ar4 + 0x1066) = 0;
      iVar1 = 0x106a;
      *(undefined2 *)((int)ar4 + 0x106a) = 0x20;
    }
  }
  return iVar1;
}



/* FUN_8c0e3050 @ 8c0e3050 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3050(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_input_is_mask_set_10_01f2b4_8c0e3074)
                    (*(undefined4 *)(DAT_8c0e3070 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e3078 @ 8c0e3078 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3078(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_input_is_mask_set_10_01f2b4_8c0e309c)
                    (*(undefined4 *)(DAT_8c0e3098 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e30a0 @ 8c0e30a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e30a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e30c4)(*(undefined4 *)(DAT_8c0e30c0 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e30c8 @ 8c0e30c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e30c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e30ec)(*(undefined4 *)(DAT_8c0e30e8 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e30f0 @ 8c0e30f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e30f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0e3144)(*(undefined4 *)(DAT_8c0e3140 + ar4),ar5,ar6,ar7);
  if (((iVar1 != 0) &&
      (iVar1 = (*(code *)PTR_FUN_8c0e3148)(*(undefined4 *)(DAT_8c0e3140 + ar4),ar5,ar6,ar7),
      iVar1 != 0)) &&
     (iVar1 = (*(code *)PTR_FUN_8c0e314c)(*(undefined4 *)(DAT_8c0e3140 + ar4),ar5,ar6,ar7),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c0e3150 @ 8c0e3150 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3150(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0e3194)(*(undefined4 *)(DAT_8c0e3190 + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0e3198)(*(undefined4 *)(DAT_8c0e3190 + ar4),ar5,ar6,ar7),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c0e319c @ 8c0e319c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e319c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0e31e0)(*(undefined4 *)(DAT_8c0e31dc + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0e31e4)(*(undefined4 *)(DAT_8c0e31dc + ar4),ar5,ar6,ar7),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c0e31e8 @ 8c0e31e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e31e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e320c)(*(undefined4 *)(DAT_8c0e3208 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e3210 @ 8c0e3210 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e341a) */
/* WARNING: Removing unreachable block (ram,0x8c0e3416) */
/* WARNING: Removing unreachable block (ram,0x8c0e341c) */
/* WARNING: Unknown calling convention */

int FUN_8c0e3210(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  double in_dr0;
  double dVar5;
  undefined4 in_fr3;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined4 auStack_18 [2];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar4 = 0;
  uVar3 = 0x80;
  iVar1 = *(int *)(ar4 + 0x1024);
  if (iVar1 == 0) {
    FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7);
    uVar2 = 0;
    FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7);
    iVar1 = FUN_8c0e31e8(ar5,uVar2,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x1024) = 1;
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x1048) = 0x43df8000;
        in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
        *(undefined4 *)(ar4 + 0x1050) = 0x43df8000;
      }
      else {
        *(undefined8 *)(ar4 + 0x1048) = 0x105043df8000;
        in_dr0 = 8.86201702588265e-311;
        *(undefined8 *)(ar4 + 0x1050) = 0x105043df8000;
      }
    }
    else {
      iVar1 = FUN_8c0e319c(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = *(int *)(ar4 + 0x1020);
        if (iVar1 == 0) {
          if (*(int *)(ar4 + 0x226f4) == 1) {
            *(undefined4 *)(ar4 + 0x1020) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x1020) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(ar4 + 0x1020) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(ar4 + 0x1020) = 3;
        }
        *(undefined4 *)(ar4 + 0x1024) = 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x1048) = 0x43df8000;
          in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
          *(undefined4 *)(ar4 + 0x1050) = 0x43df8000;
        }
        else {
          *(undefined8 *)(ar4 + 0x1048) = 0x105043df8000;
          in_dr0 = 8.86201702588265e-311;
          *(undefined8 *)(ar4 + 0x1050) = 0x105043df8000;
        }
      }
      else {
        iVar1 = FUN_8c0e3150(ar5,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = *(int *)(ar4 + 0x1020);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 0x1020) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(ar4 + 0x226f4) == 1) {
              *(undefined4 *)(ar4 + 0x1020) = 4;
            }
            else {
              *(undefined4 *)(ar4 + 0x1020) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(ar4 + 0x1020) = 0;
          }
          *(undefined4 *)(ar4 + 0x1024) = 1;
          if (cVar8 == '\0') {
            *(undefined4 *)(ar4 + 0x1048) = 0x43df8000;
            in_dr0 = (double)CONCAT44(0x43df8000,SUB84(in_dr0,0));
            *(undefined4 *)(ar4 + 0x1050) = 0x43df8000;
          }
          else {
            *(undefined8 *)(ar4 + 0x1048) = 0x105043df8000;
            in_dr0 = 8.86201702588265e-311;
            *(undefined8 *)(ar4 + 0x1050) = 0x105043df8000;
          }
        }
      }
    }
  }
  else {
    uVar2 = ar5;
    if (iVar1 == 1) {
      in_dr0 = (double)CONCAT44(0x43c58000,*(float *)(ar4 + 0x1048));
      if ((*(float *)(ar4 + 0x1048) == 395.0) && (iVar1 = FUN_8c0e30f0(ar5,ar5,ar6,ar7), iVar1 == 1)
         ) {
        *(undefined4 *)(ar4 + 0x1024) = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_8c0e319c(ar5,ar5,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = *(int *)(ar4 + 0x1020);
        if (iVar1 == 0) {
          if (*(int *)(ar4 + 0x226f4) == 1) {
            *(undefined4 *)(ar4 + 0x1020) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x1020) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(ar4 + 0x1020) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(ar4 + 0x1020) = 3;
        }
      }
      else {
        iVar1 = FUN_8c0e3150(ar5,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = *(int *)(ar4 + 0x1020);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 0x1020) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(ar4 + 0x226f4) == 1) {
              *(undefined4 *)(ar4 + 0x1020) = 4;
            }
            else {
              *(undefined4 *)(ar4 + 0x1020) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(ar4 + 0x1020) = 0;
          }
        }
      }
    }
  }
  iVar1 = FUN_8c0e30c8(ar5,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x1024) = 3;
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 3) {
      FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7);
      uVar2 = 0;
      FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7);
    }
    if ((*(int *)(ar4 + 0x1020) == 3) && (iVar1 = FUN_8c0e30a0(ar5,uVar2,ar6,ar7), iVar1 == 1)) {
      if ((*(int *)(ar4 + 0x22810) == 1) && (*(int *)(ar4 + 0x22814) == 1)) {
        *(undefined4 *)(ar4 + 0x22810) = 0;
        *(undefined4 *)(ar4 + 0x22814) = 1;
      }
      else if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 1)) {
        *(undefined4 *)(ar4 + 0x22810) = 0;
        *(undefined4 *)(ar4 + 0x22814) = 0;
      }
      else if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 0)) {
        *(undefined4 *)(ar4 + 0x22810) = 1;
        *(undefined4 *)(ar4 + 0x22814) = 1;
      }
      uVar4 = 0x80;
      uVar3 = 0xff;
      auStack_18[0] = FUN_8c02190c(0x8c2b59d0,uVar2,ar6,ar7);
      uVar2 = 3;
      FUN_8c021994(0x8c2b59d0,auStack_18[0],3,ar7);
      FUN_8c021a8c(0x8c2b59d0,auStack_18,uVar2,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 0) {
      iVar1 = FUN_8c0e3078(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        FUN_8c0d0538(ar4 + 0x13b24,1,ar6,ar7);
        uVar4 = 0x80;
        uVar3 = 0xff;
      }
      else {
        FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7);
        uVar4 = 0;
        uVar3 = 0x80;
      }
      FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 4) {
      iVar1 = FUN_8c0e3050(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        uVar2 = 1;
        FUN_8c0e015c(ar4 + 0x13b8c,1,ar6,ar7);
        FUN_8c023040(ar4 + 0x22eb8,uVar2,ar6,ar7);
        if (cVar8 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
          dVar5 = (double)CONCAT44(0x3f400000,*(undefined4 *)(ar4 + 0x2300c));
        }
        else {
          dVar5 = 3.03505338272344e-309;
        }
        if (cVar7 == '\0') {
          bVar6 = (float)((ulonglong)in_dr0 >> 0x20) <
                  SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          bVar6 = in_dr0 < dVar5 * dVar5;
        }
        uVar4 = 0x80;
        uVar3 = 0xff;
        if (bVar6) {
          FUN_8c0d7508(ar4 + 0x22eb4,uVar2,ar6,ar7);
        }
      }
      else {
        FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7);
        uVar4 = 0;
        uVar3 = 0x80;
      }
      FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (*(int *)(ar4 + 0x1024) != 0) {
    *(undefined2 *)(ar4 + 0x105c) = uVar4;
    *(undefined2 *)(ar4 + 0x1060) = uVar4;
    *(undefined2 *)(ar4 + 0x1064) = uVar3;
    *(undefined2 *)(ar4 + 0x1068) = uVar3;
    iVar1 = *(int *)(ar4 + 0x1020);
    if (iVar1 == 0) {
      *(undefined2 *)(ar4 + 0x105e) = 0x40;
      *(undefined2 *)(ar4 + 0x1062) = 0x20;
      *(undefined2 *)(ar4 + 0x1066) = 0x20;
      iVar1 = 0x106a;
      *(undefined2 *)(ar4 + 0x106a) = 0x40;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)(ar4 + 0x105e) = 0x20;
      *(undefined2 *)(ar4 + 0x1062) = 0;
      *(undefined2 *)(ar4 + 0x1066) = 0;
      iVar1 = 0x106a;
      *(undefined2 *)(ar4 + 0x106a) = 0x20;
    }
    else if (iVar1 == 4) {
      *(undefined2 *)(ar4 + 0x105e) = 0xa0;
      *(undefined2 *)(ar4 + 0x1062) = 0x80;
      *(undefined2 *)(ar4 + 0x1066) = 0x80;
      iVar1 = 0x106a;
      *(undefined2 *)(ar4 + 0x106a) = 0xa0;
    }
  }
  return iVar1;
}



/* FUN_8c0e389c @ 8c0e389c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e3908) */
/* WARNING: Removing unreachable block (ram,0x8c0e38fe) */
/* WARNING: Removing unreachable block (ram,0x8c0e38ee) */
/* WARNING: Removing unreachable block (ram,0x8c0e38e6) */
/* WARNING: Removing unreachable block (ram,0x8c0e38da) */
/* WARNING: Removing unreachable block (ram,0x8c0e38cc) */
/* WARNING: Removing unreachable block (ram,0x8c0e38c0) */
/* WARNING: Removing unreachable block (ram,0x8c0e38ba) */
/* WARNING: Removing unreachable block (ram,0x8c0e3970) */
/* WARNING: Removing unreachable block (ram,0x8c0e3962) */
/* WARNING: Removing unreachable block (ram,0x8c0e3954) */
/* WARNING: Removing unreachable block (ram,0x8c0e394a) */
/* WARNING: Removing unreachable block (ram,0x8c0e3944) */
/* WARNING: Removing unreachable block (ram,0x8c0e393a) */
/* WARNING: Removing unreachable block (ram,0x8c0e392c) */
/* WARNING: Removing unreachable block (ram,0x8c0e391e) */
/* WARNING: Removing unreachable block (ram,0x8c0e3918) */
/* WARNING: Removing unreachable block (ram,0x8c0e391c) */
/* WARNING: Removing unreachable block (ram,0x8c0e3922) */
/* WARNING: Removing unreachable block (ram,0x8c0e392e) */
/* WARNING: Removing unreachable block (ram,0x8c0e393c) */
/* WARNING: Removing unreachable block (ram,0x8c0e3948) */
/* WARNING: Removing unreachable block (ram,0x8c0e3950) */
/* WARNING: Removing unreachable block (ram,0x8c0e3960) */
/* WARNING: Removing unreachable block (ram,0x8c0e396e) */
/* WARNING: Removing unreachable block (ram,0x8c0e38b6) */
/* WARNING: Removing unreachable block (ram,0x8c0e38bc) */
/* WARNING: Removing unreachable block (ram,0x8c0e38ca) */
/* WARNING: Removing unreachable block (ram,0x8c0e38d8) */
/* WARNING: Removing unreachable block (ram,0x8c0e38e2) */
/* WARNING: Removing unreachable block (ram,0x8c0e38e8) */
/* WARNING: Removing unreachable block (ram,0x8c0e38f2) */
/* WARNING: Removing unreachable block (ram,0x8c0e3900) */
/* WARNING: Removing unreachable block (ram,0x8c0e390a) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e389c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = *(undefined4 **)(ar4 + 0x1024);
  if (puVar1 == (undefined4 *)0x1) {
    fVar2 = *(float *)(ar4 + 0x1050) - 8.0;
    *(float *)(ar4 + 0x1050) = fVar2;
    *(float *)(ar4 + 0x1048) = fVar2;
    puVar1 = &DAT_8c0e398c;
    if (*(float *)(ar4 + 0x1048) <= 395.0) {
      *(undefined4 *)(ar4 + 0x1050) = 0x43c58000;
      puVar1 = (undefined4 *)0xc;
      *(undefined4 *)(ar4 + 0x1048) = 0x43c58000;
    }
  }
  else if (puVar1 == (undefined4 *)0x3) {
    fVar2 = *(float *)(ar4 + 0x1050) + 8.0;
    *(float *)(ar4 + 0x1050) = fVar2;
    *(float *)(ar4 + 0x1048) = fVar2;
    puVar1 = (undefined4 *)&DAT_8c0e3990;
    if (447.0 <= *(float *)(ar4 + 0x1048)) {
      *(undefined4 *)(ar4 + 0x1050) = 0x43df8000;
      *(undefined4 *)(ar4 + 0x1048) = 0x43df8000;
      puVar1 = (undefined4 *)0x1024;
      *(undefined4 *)(ar4 + 0x1024) = 0;
    }
  }
  return puVar1;
}



/* FUN_8c0e3994 @ 8c0e3994 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3994(int ar4,code *ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *a4;
  int iVar4;
  code *ar5_00;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar9;
  double dVar8;
  double in_dr2;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,ar5_00,ar6,ar7);
  Vec3_ctor_zero(auStack_3c,ar5_00,ar6,ar7);
  if (DAT_8c438280 == '\0') {
    uVar2 = Vec3_ctor_xyz(0x8c438284,ar5_00,ar6,ar7);
    ar6 = 0x8c438274;
    ar5_00 = Vec3_dtor;
    global_list_push(uVar2,Vec3_dtor,0x8c438274,ar7);
    DAT_8c438280 = '\x01';
  }
  if (DAT_8c4382a0 == '\0') {
    uVar2 = Vec3_ctor_zero(0x8c4382a4,ar5_00,ar6,ar7);
    ar6 = 0x8c438294;
    ar5_00 = Vec3_dtor;
    global_list_push(uVar2,Vec3_dtor,0x8c438294,ar7);
    DAT_8c4382a0 = '\x01';
  }
  iVar5 = 0;
  do {
    if (iVar1 <= iVar5) {
      Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
      uVar2 = Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
      return uVar2;
    }
    iVar3 = get_field_24_05c284(ar4_00,ar5_00,ar6,ar7);
    if (iVar3 != 0xe) {
      FUN_8c02f670(ar4_00,ar5_00,ar6,ar7,auStack_4c);
      Vec3_assign(auStack_2c,auStack_4c,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      FUN_8c0e3e98(ar4_00,uVar2,ar6,ar7,auStack_5c);
      Vec3_assign(auStack_3c,auStack_5c,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7);
      (**(code **)(*(int *)(ar4_00 + 8) + 0x13c))(ar4_00,uVar2,ar6,ar7);
      Vec3_assign(0x8c4382a4,auStack_6c,ar6,ar7);
      ar5_00 = (code *)0xffffffff;
      Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7);
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_38);
      }
      else {
        uVar7 = *(undefined8 *)ar5;
      }
      if (cVar11 != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_28);
        }
        else {
          uVar7 = *(undefined8 *)ar5;
        }
        if (cVar11 != '\0' || (float)uVar7 <= (float)((ulonglong)uVar7 >> 0x20)) {
          iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0xb4))(ar4_00,ar5_00,ar6,ar7);
          fVar6 = (float)((ulonglong)uVar7 >> 0x20);
          if (iVar4 == 1) {
            iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0x16c))(ar4_00,ar5_00,ar6,ar7);
            if (iVar4 != 0) {
              a4 = (int *)(**(code **)(*(int *)(ar4_00 + 8) + 0x16c))(ar4_00,ar5_00,ar6,ar7);
              iVar4 = (**(code **)(*a4 + 0x28))(a4,ar5_00,ar6,ar7);
              if (iVar4 == 1) {
                (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
                ar6 = 4;
                ar5_00 = (code *)auStack_2c;
                ar7 = ar4_00;
                FUN_8c0d4c74(ar5,ar5_00,4,ar4_00);
                goto LAB_8c0e3d7e;
              }
            }
            if (iVar3 == 5) {
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              ar6 = 3;
              ar5_00 = (code *)auStack_2c;
              ar7 = ar4_00;
              FUN_8c0d4c74(ar5,ar5_00,3,ar4_00);
            }
            else {
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              if (cVar12 == '\0') {
                fVar9 = 0.8;
              }
              else {
                fVar6 = 0.8;
                fVar9 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7);
                if (cVar12 == '\0') {
                  fVar6 = fVar9;
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
                  ar6 = 3;
                  ar5_00 = (code *)auStack_2c;
                  ar7 = ar4_00;
                  FUN_8c0d4c74(ar5,ar5_00,3,ar4_00);
                  goto LAB_8c0e3d7e;
                }
              }
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              if (cVar12 == '\0') {
                fVar6 = 0.8;
              }
              else {
                fVar9 = 0.8;
                fVar6 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7);
                if (cVar12 == '\0') {
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
                  ar6 = 2;
                  ar5_00 = (code *)auStack_2c;
                  ar7 = ar4_00;
                  FUN_8c0d4c74(ar5,ar5_00,2,ar4_00);
                  goto LAB_8c0e3d7e;
                }
              }
              (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
              ar6 = 0;
              ar5_00 = (code *)auStack_2c;
              ar7 = ar4_00;
              FUN_8c0d4c74(ar5,ar5_00,0,ar4_00);
            }
          }
        }
      }
LAB_8c0e3d7e:
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_38);
      }
      else {
        uVar7 = *(undefined8 *)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= (float)((ulonglong)uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_28);
        }
        else {
          uVar7 = *(undefined8 *)ar5;
        }
        if ((cVar11 != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) &&
           (iVar4 = (**(code **)(*(int *)(ar4_00 + 8) + 0xb4))(ar4_00,ar5_00,ar6,ar7), iVar4 == 1))
        {
          if (iVar3 == 5) {
            (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
            ar6 = 1;
            ar5_00 = (code *)auStack_3c;
            ar7 = ar4_00;
            FUN_8c0d4c74(ar5,ar5_00,1,ar4_00);
          }
          goto LAB_8c0e3e34;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)ar5,uStack_28);
      }
      else {
        uVar7 = *(undefined8 *)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= (float)((ulonglong)uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          in_dr2 = (double)CONCAT44(uStack_28,SUB84(in_dr2,0));
          dVar8 = (double)CONCAT44(0x41200000,*(undefined4 *)ar5);
        }
        else {
          in_dr2 = (double)CONCAT44(uStack_24,uStack_28);
          dVar8 = 5.94698645594833e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = (float)((ulonglong)in_dr2 >> 0x20) <
                   SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar10 = in_dr2 < dVar8 - dVar8;
        }
        if (!bVar10) {
          (**(code **)(*(int *)(ar4_00 + 8) + 0x118))(ar4_00,ar5_00,ar6,ar7);
          ar6 = 0;
          ar5_00 = (code *)auStack_2c;
          ar7 = ar4_00;
          FUN_8c0d4c74(ar5,ar5_00,0,ar4_00);
        }
      }
    }
LAB_8c0e3e34:
    ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    iVar5 = iVar5 + 1;
  } while( true );
}



/* FUN_8c0e3e98 @ 8c0e3e98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3e98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c0e3eb8)(s0,ar4 + 0x40,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e3ebc @ 8c0e3ebc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e3f02) */
/* WARNING: Removing unreachable block (ram,0x8c0e3efc) */
/* WARNING: Removing unreachable block (ram,0x8c0e3ed2) */
/* WARNING: Removing unreachable block (ram,0x8c0e3ed4) */
/* WARNING: Removing unreachable block (ram,0x8c0e3ef2) */
/* WARNING: Removing unreachable block (ram,0x8c0e3eec) */
/* WARNING: Removing unreachable block (ram,0x8c0e3eee) */
/* WARNING: Removing unreachable block (ram,0x8c0e3efe) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f04) */
/* WARNING: Removing unreachable block (ram,0x8c0e3ef4) */
/* WARNING: Removing unreachable block (ram,0x8c0e3ece) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e3ebc(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  if ((*(int *)(ar4 + 0x22810) == 1) && (*(int *)(ar4 + 0x22814) == 1)) {
    *ar5 = 0x3f800000;
    *ar6 = 0x3e99999a;
    return &DAT_8c0e3f14;
  }
  if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 1)) {
    *ar5 = 0x3f666666;
    *ar6 = 0x3e3851ec;
    return &DAT_8c0e3f1c;
  }
  *ar5 = 0x3dcccccd;
  *ar6 = 0x3dcccccd;
  return &DAT_8c0e3f20;
}



/* FUN_8c0e3f24 @ 8c0e3f24 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e4026) */
/* WARNING: Removing unreachable block (ram,0x8c0e3fcc) */
/* WARNING: Removing unreachable block (ram,0x8c0e3fbc) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f52) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f30) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f24) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f26) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f32) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f5a) */
/* WARNING: Removing unreachable block (ram,0x8c0e3fc4) */
/* WARNING: Removing unreachable block (ram,0x8c0e401e) */
/* WARNING: Removing unreachable block (ram,0x8c0e402e) */
/* WARNING: Removing unreachable block (ram,0x8c0e3f4a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3f24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 in_PR;
  char cVar3;
  undefined4 in_stack_ffffffd8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  ar6_00 = &stack0xffffffd8;
  iVar1 = ar4;
  uStack_10 = in_PR;
  if ((*(int *)(ar4 + 0x22810) == 1) && (*(int *)(ar4 + 0x22814) == 1)) {
    FUN_8c2219a8(ar4,ar5,ar6,ar7,in_stack_ffffffd8);
    FUN_8c214158(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
    if (cVar3 == '\0') {
      uStack_1c = *(undefined4 *)(ar4 + 0x227f0);
      uStack_18 = *(undefined4 *)(ar4 + 0x227f4);
      uStack_14 = *(undefined4 *)(ar4 + 0x227f8);
    }
    else {
      uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x227f0);
      uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x227f4);
      uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x227f8);
      uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x227f8) >> 0x20);
    }
  }
  else if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 1)) {
    FUN_8c2219a8(ar4,ar5,ar6,ar7,in_stack_ffffffd8);
    FUN_8c214158(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
    if (cVar3 == '\0') {
      uStack_1c = *(undefined4 *)(ar4 + 0x22800);
      uStack_18 = *(undefined4 *)(ar4 + 0x22804);
      uStack_14 = *(undefined4 *)(ar4 + 0x22808);
    }
    else {
      uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x22800);
      uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x22804);
      uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x22808);
      uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x22808) >> 0x20);
    }
  }
  else {
    FUN_8c2219a8(ar4,ar5,ar6,ar7,in_stack_ffffffd8);
    FUN_8c214158(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
    if (cVar3 == '\0') {
      uStack_1c = *(undefined4 *)(ar4 + 0x227f0);
      uStack_18 = *(undefined4 *)(ar4 + 0x227f4);
      uStack_14 = *(undefined4 *)(ar4 + 0x227f8);
    }
    else {
      uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x227f0);
      uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x227f4);
      uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x227f8);
      uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x227f8) >> 0x20);
    }
  }
  FUN_8c22194e(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
  uVar2 = 1;
  FUN_8c22195c(1,ar5,ar6,ar7,in_stack_ffffffd8);
  FUN_8c2140fe(uVar2,ar5,ar6,ar7,in_stack_ffffffd8);
  uVar2 = 1;
  FUN_8c21410c(1,ar5,ar6,ar7,in_stack_ffffffd8);
  FUN_8c2219f6(uVar2,ar5,ar6,ar7,in_stack_ffffffd8);
  FUN_8c2141a6(uVar2,ar5,ar6,ar7,in_stack_ffffffd8);
  ar5_00 = &uStack_1c;
  uVar2 = 0;
  FUN_8c21279c(0,ar5_00,&stack0xffffffd8,ar7,in_stack_ffffffd8);
  FUN_8c219038(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c21907e(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c219070(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c217ebc(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c217f02(uVar2,ar5_00,ar6_00,ar7);
  uVar2 = FUN_8c217ef4(uVar2,ar5_00,ar6_00,ar7);
  return uVar2;
}



/* FUN_8c0e4198 @ 8c0e4198 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e4198) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e4198(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double *pdVar3;
  double *pdVar4;
  undefined8 in_dr0;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 in_fr15;
  double in_xd14;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffffd0;
  double dStack_30;
  double *pdStack_2c;
  
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  iVar1 = FUN_8c015bb8(ar5,ar5,ar6,ar7);
  iVar1 = **(int **)(*(int *)(iVar1 + 0x2c) + 4);
  if (cVar8 == '\0') {
    in_fr15 = *(undefined4 *)(iVar1 + 0x24);
  }
  else {
    in_xd14 = *(double *)(iVar1 + 0x24);
  }
  pdVar3 = (double *)(iVar1 + 0x24);
  pdVar4 = (double *)(iVar1 + 0x54);
  FUN_8c0bf0e8(ar4 + 0x13b24,ar5_00,ar6,ar7,in_stack_ffffffd0);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)pdVar3,in_fr3);
    dVar5 = (double)CONCAT44(0x4101999a,uVar2);
  }
  else {
    dVar6 = *pdVar3;
    dVar5 = 2.99312289147034e-309;
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                             SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5 * dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)pdVar3 = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
  }
  else {
    *pdVar3 = dVar6;
    *pdVar4 = *pdVar3;
  }
  FUN_8c01538c(ar4 + 0x226fc,ar5_00,ar6,ar7);
  uVar2 = 0;
  FUN_8c256328(0,ar5_00,ar6,ar7,in_stack_ffffffd0);
  FUN_8c019058(uVar2,ar5_00,ar6,ar7);
  FUN_8c015af8(ar5,ar5_00,ar6,ar7);
  FUN_8c256210(1,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    dStack_30 = (double)CONCAT44(pdVar3,in_fr15);
    *(undefined4 *)pdVar4 = in_fr15;
  }
  else {
    *pdVar4 = in_xd14;
    dStack_30 = in_xd14;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)pdVar3 = in_stack_ffffffd0;
  }
  else {
    *pdVar3 = dStack_30;
  }
  return 0;
}



/* FUN_8c0e4298 @ 8c0e4298 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e4298(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  iVar1 = (*(code *)PTR_get_field_24_05c284_8c0e4318)
                    (*(undefined4 *)(DAT_8c0e4314 + (int)ar4),ar5,ar6,ar7);
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 5)) || (iVar1 == 1)) {
    uVar2 = (**(code **)(*ar4 + 0x58))(ar4,uVar2,ar6,ar7);
    (*(code *)PTR_FUN_8c0e431c)(ar5,uVar2,ar6,ar7);
    uVar2 = 0;
    (*(code *)PTR_FUN_8c0e4320)(ar5,0,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0e4324)(ar5,uVar2,ar6,ar7);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c0e432c)(DAT_8c0e4328,2,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c0e4330 @ 8c0e4330 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e4330(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0e4338;
  *(undefined4 *)(DAT_8c0e4338 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0e433c @ 8c0e433c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e433c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0e4344;
  *(undefined4 *)(DAT_8c0e4344 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0e4348 @ 8c0e4348 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e4348(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e436c)(ar5,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e4374)(ar4 + DAT_8c0e4370,ar5,ar6,ar7);
  return uVar1;
}



/* s_SoilTank_0e437e @ 8c0e4378 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e4398) */
/* WARNING: Removing unreachable block (ram,0x8c0e4390) */
/* WARNING: Removing unreachable block (ram,0x8c0e4388) */
/* WARNING: Removing unreachable block (ram,0x8c0e438c) */
/* WARNING: Removing unreachable block (ram,0x8c0e4394) */
/* WARNING: Removing unreachable block (ram,0x8c0e439c) */
/* WARNING: Unknown calling convention */

undefined4 * s_SoilTank_0e437e(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_fr1;
  char cVar6;
  
  cVar6 = '\0';
  FUN_8c0d9c80(ar4,s_SoilTank_8c13ff6e,1,0);
  *ar4 = &DAT_8c12b758;
  uVar3 = 0x24;
  pcVar2 = FUN_8c0e468c;
  pcVar1 = FUN_8c0d611c;
  FUN_8c010120(ar4 + 0x41c,FUN_8c0d611c,FUN_8c0e468c,0x24,3);
  FUN_8c015224(ar4 + 0x437,pcVar1,pcVar2,uVar3);
  FUN_8c015ab8(ar4 + 0x439,pcVar1,pcVar2,uVar3);
  Vec3_ctor_zero(ar4 + 0x43b,pcVar1,pcVar2,uVar3);
  Vec3_ctor_zero(ar4 + 0x43f,pcVar1,pcVar2,uVar3);
  uVar3 = 0xc;
  pcVar2 = free_if_nonnull_wrap_0d6ef8;
  pcVar1 = FUN_8c0d6ee0;
  FUN_8c010120(ar4 + 0x443,FUN_8c0d6ee0,free_if_nonnull_wrap_0d6ef8,0xc,100);
  FUN_8c0d5e9c(ar4 + 0x56f,pcVar1,pcVar2,uVar3);
  uVar3 = 0x18;
  pcVar2 = free_if_nonnull_wrap_0cffc8;
  pcVar1 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x578,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,1);
  FUN_8c0e5c4c(ar4,pcVar1,pcVar2,uVar3);
  if (cVar6 == '\0') {
    ar4[0x2e9] = 0x41f00000;
    ar4[0x2af] = 0x45176000;
    ar4[0x2b0] = 0x44898000;
    ar4[0x2b1] = 0x44c80000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2e9) = 0xabc41f00000;
    *(undefined8 *)(ar4 + 0x2af) = 0xac045176000;
    *(undefined8 *)(ar4 + 0x2b0) = 0xac444898000;
    in_fr1 = 0x44c80000;
    *(undefined8 *)(ar4 + 0x2b1) = 0x42c8000044c80000;
  }
  for (iVar4 = 0; iVar4 < 10; iVar4 = iVar4 + 1) {
    for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
      if (cVar6 == '\0') {
        ar4[iVar4 * 0x1e + iVar5 * 3 + 0x443] = 0x42c80000;
      }
      else {
        in_fr1 = 0x42c80000;
        *(undefined8 *)(ar4 + iVar4 * 0x1e + iVar5 * 3 + 0x443) = 0x111042c80000;
      }
    }
    ar4[iVar4 * 0x1e + iVar5 * 3 + 0x444] = 0;
  }
  if (cVar6 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(ar4 + 0x21) = 0x111042c80000;
    *(undefined8 *)(ar4 + 0x23) = 0x9043a00000;
    in_fr1 = 0x42e00000;
    *(undefined8 *)(ar4 + 0x24) = 0x10e842e00000;
  }
  ar4[0x43a] = 0;
  if (cVar6 == '\0') {
    ar4[0x25] = 0x41000000;
  }
  else {
    in_fr1 = 0x41000000;
    *(undefined8 *)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar6 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x27) = 0xa041300000;
    *(undefined8 *)(ar4 + 0x28) = 0x4f222fe640400000;
  }
  return ar4;
}



/* FUN_8c0e462c @ 8c0e462c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e462c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0e468c @ 8c0e468c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e468c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b758_m0_0e46cc @ 8c0e46cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b758_m0_0e46cc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b758;
    uVar2 = 1;
    uVar1 = 0x18;
    vec_delete_array(ar4 + 0x578,free_if_nonnull_wrap_0cffc8,0x18,1,ain0);
    FUN_8c0e462c(ar4 + 0x56f,0xffffffff,uVar1,uVar2);
    uVar2 = 100;
    uVar1 = 0xc;
    vec_delete_array(ar4 + 0x443,free_if_nonnull_wrap_0d6ef8,0xc,100,ain0);
    Vec3_dtor(ar4 + 0x43f,0xffffffff,uVar1,uVar2);
    Vec3_dtor(ar4 + 0x43b,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_016bfc(ar4 + 0x439,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x437,0xffffffff,uVar1,uVar2);
    ar7_00 = 3;
    uVar2 = 0x24;
    vec_delete_array(ar4 + 0x41c,FUN_8c0e468c,0x24,3,ain0);
    uVar1 = 0;
    Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0e47de @ 8c0e47d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e47de(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar7_00;
  undefined4 ar5_00;
  undefined **ar5_01;
  undefined *ar5_02;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  uint uVar6;
  undefined4 in_fr1;
  char cVar7;
  uint in_stack_ffffff88;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar7 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(&uStack_30,ar5,ar6,ar7);
  Vec3_set_zero(&uStack_3c,uVar3,ar6,ar7);
  uStack_40 = 0;
  uStack_44 = 0;
  iVar1 = FUN_8c0209fc(ar5,s_musikago_nj_8c13ff77,s_GRAPHICS_ENV_8c13f8cb,&uStack_40);
  if (iVar1 == 0) {
    report_error_message(s_musikago_nj_8c13ff77,s_Failed_to_load_CSoilTank__Create_8c13ff83,0,2);
  }
  puVar4 = &uStack_44;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_musikago_nj_8c13ff77,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message(s_musikago_nj_8c13ff77,s_Failed_NJTL_CSoilTank__Create___8c13ffa6,0,2);
  }
  FUN_8c015ad4(ar4 + 0x30,uStack_40,pcVar2,puVar4,in_stack_ffffff88);
  a7 = 8;
  uVar3 = 0x8c4312a8;
  FUN_8c239170(0x8c437598,0x8c4375a0,0x8c4312a8,8);
  for (uVar5 = 0; uVar5 < 8; uVar5 = uVar5 + 1) {
    *(uint *)(uVar5 * 0xc + -0x73bc8a5c) = *(uint *)(uVar5 * 0xc + -0x73bc8a5c) | 0x80000000;
  }
  ar5_00 = 0x8c437598;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),0x8c437598,uVar3,a7);
  get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  uVar3 = get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c02100c(ar5,s_musikago_pvm_8c13ffc6,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)0x0;
    report_error_message(s_Failed_to_load_soiltank_textuer__8c13ffd3,&DAT_8c13f91d,0,2);
  }
  s_GRAPHICS_ENV_0d5ee6(ar4 + 0x15bc,ar5,pcVar2,uVar3);
  ar5_01 = &PTR_PTR_8c13f1a4;
  (**(code **)(*(int *)(ar4 + 0x10dc) + 8))((int *)(ar4 + 0x10dc),&PTR_PTR_8c13f1a4,pcVar2,uVar3);
  ar7_00 = (int *)get_field_4_0253e4(ar4 + 0x10dc,ar5_01,pcVar2,uVar3);
  uVar5 = 0;
  while (uVar6 = uVar5, uVar6 < (uint)ar7_00[1]) {
    *(uint *)(uVar6 * 0xc + *ar7_00 + 4) = *(uint *)(uVar6 * 0xc + *ar7_00 + 4) | 0x80000000;
    in_stack_ffffff88 = uVar6;
    uVar5 = uVar6 + 1;
  }
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020ef0(ar5,s_SPRAY_MIST_8c13fff5,s_GRAPHICS_ENV_8c13f8cb,ar7_00);
  if (iVar1 == 0) {
    ar7_00 = (int *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message
              (s_Failed_to_load_mist_textuer___8c140000,s_CSoilTank__Create___8c14001e,0,2);
  }
  ar5_02 = &DAT_8c13f268;
  FUN_8c015ad4(ar4 + 0x10e4,&DAT_8c13f268,pcVar2,ar7_00,in_stack_ffffff88);
  iVar1 = FUN_8c015bb8(ar4 + 0x10e4,ar5_02,pcVar2,ar7_00);
  iVar1 = thunk_FUN_8c0151e8(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,pcVar2,ar7_00);
  *(int *)(ar4 + 0x10e8) = iVar1 + 4;
  if (cVar7 == '\0') {
    uStack_2c = 0;
    uVar3 = in_fr1;
  }
  else {
    uStack_24 = 0xc2700000;
    uVar3 = 0xc2700000;
    uStack_2c = in_fr1;
  }
  uStack_28 = 0xbf800000;
  uStack_3c = 0xc2700000;
  if (cVar7 == '\0') {
    uStack_34 = 0;
    uStack_30 = uStack_2c;
  }
  else {
    uStack_30 = 0;
    uStack_34 = uVar3;
  }
  uStack_38 = uStack_34;
  FUN_8c0d167c(&uStack_30,ar4 + 0x10fc,&uStack_3c,ar7_00);
  if (cVar7 == '\0') {
    uStack_2c = 0;
    uStack_34 = uVar3;
  }
  else {
    uStack_24 = 0xc2700000;
    uStack_34 = 0xc2700000;
    uStack_2c = uVar3;
  }
  uStack_28 = 0xbf800000;
  uStack_3c = 0xc2700000;
  if (cVar7 == '\0') {
    uStack_34 = 0;
    uStack_30 = uStack_2c;
  }
  else {
    uStack_30 = 0;
  }
  puVar4 = &uStack_3c;
  uStack_38 = uStack_34;
  FUN_8c0d167c(&uStack_30,ar4 + 0x10ec,puVar4,ar7_00);
  object_dtor_delete(&uStack_3c,0xffffffff,puVar4,ar7_00);
  uVar3 = Vec3_dtor(&uStack_30,0xffffffff,puVar4,ar7_00);
  return uVar3;
}



/* Class_12b758_m1_0e4b5c @ 8c0e4b5c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e4bd8) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bca) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bba) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bb2) */
/* WARNING: Removing unreachable block (ram,0x8c0e4ba6) */
/* WARNING: Removing unreachable block (ram,0x8c0e4b98) */
/* WARNING: Removing unreachable block (ram,0x8c0e4b8c) */
/* WARNING: Removing unreachable block (ram,0x8c0e4b86) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c40) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c32) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c24) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c1a) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c14) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c0a) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bfc) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bee) */
/* WARNING: Removing unreachable block (ram,0x8c0e4be8) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bec) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bf2) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bfe) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c0c) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c18) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c20) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c30) */
/* WARNING: Removing unreachable block (ram,0x8c0e4c3e) */
/* WARNING: Removing unreachable block (ram,0x8c0e4b82) */
/* WARNING: Removing unreachable block (ram,0x8c0e4b88) */
/* WARNING: Removing unreachable block (ram,0x8c0e4b96) */
/* WARNING: Removing unreachable block (ram,0x8c0e4ba4) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bae) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bb4) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bbe) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bcc) */
/* WARNING: Removing unreachable block (ram,0x8c0e4bda) */
/* WARNING: Unknown calling convention */

undefined4 Class_12b758_m1_0e4b5c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  if (*(int *)(ar4 + 0x1024) == 1) {
    fVar1 = *(float *)(ar4 + 0x1050) - 8.0;
    *(float *)(ar4 + 0x1050) = fVar1;
    *(float *)(ar4 + 0x1048) = fVar1;
    if (*(float *)(ar4 + 0x1048) <= 395.0) {
      *(undefined4 *)(ar4 + 0x1050) = 0x43c58000;
      *(undefined4 *)(ar4 + 0x1048) = 0x43c58000;
    }
  }
  else if (*(int *)(ar4 + 0x1024) == 3) {
    fVar1 = *(float *)(ar4 + 0x1050) + 8.0;
    *(float *)(ar4 + 0x1050) = fVar1;
    *(float *)(ar4 + 0x1048) = fVar1;
    if (447.0 <= *(float *)(ar4 + 0x1048)) {
      *(undefined4 *)(ar4 + 0x1050) = 0x43df8000;
      *(undefined4 *)(ar4 + 0x1048) = 0x43df8000;
      *(undefined4 *)(ar4 + 0x1024) = 0;
    }
  }
  FUN_8c0e4d64(ar4,*ar5,ar6,ar7);
  Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x3a03126f,*(undefined4 *)(ar4 + 0x106c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x106c);
    dVar2 = -1.2980698352425083e-250;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (cVar4 == '\0') {
    *(float *)(ar4 + 0x106c) = fVar1;
    fVar1 = *(float *)(ar4 + 0x106c);
  }
  else {
    *(undefined8 *)(ar4 + 0x106c) = in_xd0;
  }
  if (cVar3 == '\0' && fVar1 < 0.0) {
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x106c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x106c) = (ulonglong)(uint)fVar1;
    }
  }
  FUN_8c0dbd80(ar4,ar5,ar6,ar7);
  FUN_8c0d64a0(ar4 + 0xa68,ar5,ar6,ar7);
  return 1;
}



/* Class_12b758_m2_0e4ce4 @ 8c0e4ce4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b758_m2_0e4ce4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c0e4d64(ar4,*ar5,ar6,ar7);
  Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x3a03126f,*(undefined4 *)(ar4 + 0x106c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x106c);
    dVar2 = -1.2980698352425083e-250;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (cVar4 == '\0') {
    *(float *)(ar4 + 0x106c) = fVar1;
    fVar1 = *(float *)(ar4 + 0x106c);
  }
  else {
    *(undefined8 *)(ar4 + 0x106c) = in_xd0;
  }
  if (cVar3 == '\0' && fVar1 < 0.0) {
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x106c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x106c) = (ulonglong)(uint)fVar1;
    }
  }
  FUN_8c0dbd80(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0e4d64 @ 8c0e4d64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e4d64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c0e4dc4 + iVar1 * 0x24 + ar4) == 1) {
      (*(code *)PTR_FUN_8c0e4dcc)(iVar1 * 0x24 + ar4 + DAT_8c0e4dc8,ar5,ar6,ar7);
    }
  }
  return 3;
}



/* FUN_8c0e4dd0 @ 8c0e4dd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e4dd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  undefined4 in_PR;
  char cVar3;
  int in_stack_ffffffbc;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar3 = '\0';
  uStack_c = in_PR;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    uStack_18 = *(undefined4 *)(ar4 + 0x10fc);
    uStack_14 = *(undefined4 *)(ar4 + 0x1100);
    uStack_10 = *(undefined4 *)(ar4 + 0x1104);
  }
  else {
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x10fc);
    uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x1100);
    uStack_10 = (undefined4)*(undefined8 *)(ar4 + 0x1104);
    uStack_c = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x1104) >> 0x20);
  }
  ar6_00 = auStack_24;
  ar5_00 = &uStack_18;
  uVar1 = 0;
  FUN_8c21279c(0,ar5_00,ar6_00,ar7,in_stack_ffffffbc);
  FUN_8c217ebc(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c219038(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c217ef4(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c219070(uVar1,ar5_00,ar6_00,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(uVar1,ar5_00,ar6_00,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5_00,ar6_00,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    FUN_8c0d1858(&DAT_8c13f450,ar5_00,ar6_00,ar7);
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    if (*(int *)(iVar2 * 0x24 + ar4 + 0x1090) == 1) {
      **(undefined4 **)(ar4 + 0x10e8) = *(undefined4 *)(iVar2 * 0x24 + ar4 + 0x108c);
      FUN_8c01538c(ar4 + 0x10dc,ar5_00,ar6_00,ar7);
      uVar1 = 0;
      FUN_8c256328(0,ar5_00,ar6_00,ar7,in_stack_ffffffbc);
      FUN_8c019058(uVar1,ar5_00,ar6_00,ar7);
      in_stack_ffffffbc = iVar2;
      FUN_8c019198(uVar1,ar5_00,ar6_00,ar7);
      FUN_8c015adc(ar4 + 0x10e4,ar5_00,ar6_00,ar7);
      FUN_8c256210(1,ar5_00,ar6_00,ar7);
    }
  }
  FUN_8c01538c(ar4 + 0x28,ar5_00,ar6_00,ar7);
  FUN_8c015adc(ar4 + 0x30,ar5_00,ar6_00,ar7);
  if (*(int *)(ar4 + 0x15c8) == 1) {
    FUN_8c0d6090(ar4 + 0x15bc,ar5_00,ar6_00,ar7);
  }
  FUN_8c0da754(ar4,ar5_00,ar6_00,ar7);
  return 1;
}



/* FUN_8c0e505c @ 8c0e505c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e505c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e5090)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5094)(ar4 + 0x28,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5098)(ar4 + 0x30,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e509c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e50a0 @ 8c0e50a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e50a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0e50ec)(ar4 + DAT_8c0e50e8,ar5,ar6,ar7);
  if (iVar1 != 0x19) {
    ar5 = (*(code *)PTR_s_CEnv_AddItem_0da93a_8c0e50f0)(ar4,ar5,ar6,ar7);
  }
  return ar5;
}



/* FUN_8c0e50f4 @ 8c0e50f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e50f4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  uVar1 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0e5174)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5178)(ar5,uVar1,ar6,ar7,auStack_28);
  (*(code *)PTR_Vec3_assign_8c0e517c)(auStack_18,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0e5180)(auStack_28,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5188)(ar5,uVar1,ar6,ar7);
  uVar1 = (**(code **)(*ar4 + 0x4c))(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0e5180)(auStack_18,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e518c @ 8c0e518c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e518c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(DAT_8c0e51a8 + ar4) == 0) {
    *(undefined4 *)(DAT_8c0e51a8 + ar4) = 1;
    return 1;
  }
  return 0;
}



/* FUN_8c0e51ac @ 8c0e51ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e51ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0db8d4(ar4,ar5,ar6,ar7);
  FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7);
  FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x9e8) + 0x10))((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x106c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x106c) = (ulonglong)extraout_fr1;
  }
  return 1;
}



/* noop_0e5230 @ 8c0e5230 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5230(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e5234 @ 8c0e5234 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5234(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0e5238 @ 8c0e5238 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e56e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5238(int *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar6_00;
  int iVar2;
  int iVar3;
  int a4;
  int iVar4;
  int *piVar5;
  undefined4 *ar5_00;
  undefined2 uVar6;
  undefined2 uVar7;
  uint ar6_01;
  float fVar8;
  code *pcVar10;
  double dVar9;
  float fVar11;
  undefined8 in_xd0;
  char cVar12;
  char cVar13;
  undefined4 auStack_24 [2];
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar7 = 0;
  uVar6 = 0x80;
  uVar1 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  ar6_00 = ar6 & 0xff;
  FUN_8c0daf3c(ar4,ar5,ar6_00,ar7);
  ar5_00 = _DAT_8c431a58;
  iVar2 = FUN_8c01ad9c(uVar1,_DAT_8c431a58,ar6_00,ar7);
  if ((iVar2 == 4) && (iVar2 = FUN_8c10031c(ar5,ar5_00,ar6_00,ar7), iVar2 == 1)) {
    if (ar4[0x2b3] == 0) {
      if (ar4[0x275] != 0) {
        iVar2 = get_field_24_05c284(ar4[0x275],ar5_00,ar6_00,ar7);
        iVar3 = (**(code **)(*(int *)(ar4[0x275] + 8) + 0x114))(ar4[0x275],ar5_00,ar6_00,ar7);
        if (((((iVar2 == 10) && (iVar3 == 0x12)) || (iVar2 == 0xb)) || (iVar2 == 0xc)) ||
           ((iVar2 == 0xe &&
            (uVar1 = (**(code **)(*(int *)(ar4[0x275] + 8) + 0x148))(ar4[0x275],ar5_00,ar6_00,ar7),
            (short)uVar1 != 0)))) {
          ar5_00 = (undefined4 *)0x2;
          FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7);
        }
        else {
          iVar2 = (**(code **)(*(int *)(ar4[0x275] + 8) + 200))(ar4[0x275],ar5_00,ar6_00,ar7);
          if (iVar2 == 1) {
            uVar1 = (**(code **)(*ar4 + 0x58))(ar4,ar5_00,ar6_00,ar7);
            FUN_8c0e59c0(ar5,uVar1,ar6_00,ar7);
            ar5_00 = (undefined4 *)0x1;
            FUN_8c0e4330(ar5,1,ar6_00,ar7);
          }
          else {
            ar5_00 = (undefined4 *)0x2;
            FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7);
          }
        }
      }
    }
    else if (ar4[0x2b3] == 2) {
      iVar2 = get_field_24_05c284(ar4[0x2b2],ar5_00,ar6_00,ar7);
      iVar3 = (**(code **)(*(int *)(ar4[0x2b2] + 8) + 0x114))(ar4[0x2b2],ar5_00,ar6_00,ar7);
      if ((((iVar2 == 10) && (iVar3 == 0x12)) || ((iVar2 == 0xb || (iVar2 == 0xc)))) ||
         ((iVar2 == 0xe &&
          (uVar1 = (**(code **)(*(int *)(ar4[0x2b2] + 8) + 0x148))(ar4[0x2b2],ar5_00,ar6_00,ar7),
          (short)uVar1 != 0)))) {
        ar5_00 = (undefined4 *)0x2;
        FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7);
      }
      else {
        iVar2 = (**(code **)(*(int *)(ar4[0x2b2] + 8) + 200))(ar4[0x2b2],ar5_00,ar6_00,ar7);
        if ((iVar2 == 1) && (ar4[0x275] == ar4[0x2b2])) {
          (**(code **)(*ar4 + 0x58))(ar4,ar5_00,ar6_00,ar7);
          FUN_8c0e59c0(ar5,ar4[0x2b2],ar6_00,ar7);
          FUN_8c0e4330(ar5,1,ar6_00,ar7);
          ar5_00 = ar5;
          FUN_8c0dca2c(ar4,ar5,ar6_00,ar7);
        }
        else {
          ar5_00 = (undefined4 *)0x2;
          FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7);
        }
      }
    }
    iVar2 = FUN_8c0637d0(ar5,ar5_00,ar6_00,ar7);
    if (((iVar2 != 0) && (iVar3 = get_field_24_05c284(iVar2,ar5_00,ar6_00,ar7), iVar3 == 10)) &&
       (uVar1 = (**(code **)(*(int *)(iVar2 + 8) + 0x148))(iVar2,ar5_00,ar6_00,ar7),
       (short)uVar1 == 3)) {
      ar5_00 = (undefined4 *)0xd;
      iVar3 = FUN_8c0db7d4(ar4,0xd,ar6_00,ar7);
      if (iVar3 != 0) {
        for (ar6_01 = 0; (int)ar6_01 < iVar3; ar6_01 = ar6_01 + 1) {
          ar5_00 = (undefined4 *)0xd;
          ar6_00 = ar6_01;
          a4 = FUN_8c0db790(ar4,0xd,ar6_01,ar7);
          iVar4 = (**(code **)(*(int *)(a4 + 8) + 0xb0))(a4,ar5_00,ar6_00,ar7);
          if (iVar4 == iVar2) {
            (**(code **)(*(int *)(a4 + 8) + 0xac))(a4,ar5_00,ar6_00,ar7);
          }
        }
      }
    }
  }
  iVar2 = ar4[0x409];
  if (iVar2 == 0) {
    iVar2 = FUN_8c0e31e8(ar5,ar5_00,ar6_00,ar7);
    if (iVar2 == 1) {
      ar4[0x409] = 1;
      piVar5 = ar4 + 0x412;
      if (cVar13 == '\0') {
        *piVar5 = 0x43df8000;
        ar4[0x414] = 0x43df8000;
      }
      else {
        piVar5[0] = 0x43df8000;
        piVar5[1] = 0x1050;
        ar4[0x414] = 0x43df8000;
        ar4[0x415] = 0x1050;
      }
    }
  }
  else if (iVar2 == 1) {
    if (cVar13 == '\0') {
      fVar8 = (float)ar4[0x412];
      pcVar10 = (code *)0x43c58000;
    }
    else {
      fVar8 = 395.0;
      pcVar10 = FUN_8c0e30f0;
    }
    if ((fVar8 == (float)pcVar10) && (iVar2 = FUN_8c0e30f0(ar5,ar5_00,ar6_00,ar7), iVar2 == 1)) {
      ar4[0x409] = 2;
    }
  }
  else if ((iVar2 == 2) && (iVar2 = FUN_8c0e5998(ar5,ar5_00,ar6_00,ar7), iVar2 == 1)) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      if (ar4[iVar2 * 9 + 0x424] == 0) {
        piVar5 = ar4 + iVar2 * 9 + 0x41c;
        if (cVar13 == '\0') {
          *piVar5 = 0x43bb8000;
        }
        else {
          piVar5[0] = 0x43bb8000;
          piVar5[1] = 0x1074;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x41d;
        if (cVar13 == '\0') {
          *piVar5 = 0x43f78000;
        }
        else {
          piVar5[0] = 0x43f78000;
          piVar5[1] = 0x1078;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x41e;
        if (cVar13 == '\0') {
          *piVar5 = 0x44548000;
        }
        else {
          piVar5[0] = 0x44548000;
          piVar5[1] = 0x1084;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x421;
        if (cVar13 == '\0') {
          *piVar5 = -0x41000000;
        }
        else {
          piVar5[0] = -0x41000000;
          piVar5[1] = 0x1080;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x420;
        if (cVar13 == '\0') {
          *piVar5 = 0x3dcccccd;
        }
        else {
          piVar5[0] = 0x3dcccccd;
          piVar5[1] = 0x108c;
        }
        ar4[iVar2 * 9 + 0x423] = 0xffffff;
        ar4[iVar2 * 9 + 0x422] = 0;
        ar4[iVar2 * 9 + 0x424] = 1;
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x40800000,ar4[0x41b]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x41b);
          dVar9 = 52776566587392.0;
        }
        if (cVar12 == '\0') {
          fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          ar4[0x41b] = (int)fVar8;
          fVar8 = (float)ar4[0x41b];
          fVar11 = 100.0;
        }
        else {
          *(undefined8 *)(ar4 + 0x41b) = in_xd0;
          fVar8 = 100.0;
          fVar11 = 1.79366e-43;
        }
        if (cVar12 == '\0' && fVar11 < fVar8) {
          piVar5 = ar4 + 0x41b;
          if (cVar13 == '\0') {
            *piVar5 = 0x42c80000;
          }
          else {
            piVar5[0] = 0x42c80000;
            piVar5[1] = 0x80;
          }
        }
        uVar7 = 0x80;
        uVar6 = 0xff;
        auStack_24[0] = FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7);
        ar6_00 = 0xe;
        FUN_8c021994(0x8c2b59d0,auStack_24[0],0xe,ar7);
        ar5_00 = auStack_24;
        FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7);
        break;
      }
    }
  }
  if (ar4[0x409] != 0) {
    *(undefined2 *)(ar4 + 0x417) = uVar7;
    *(undefined2 *)((int)ar4 + 0x105e) = 0x80;
    *(undefined2 *)(ar4 + 0x418) = uVar7;
    *(undefined2 *)((int)ar4 + 0x1062) = 0x60;
    *(undefined2 *)(ar4 + 0x419) = uVar6;
    *(undefined2 *)((int)ar4 + 0x1066) = 0x60;
    *(undefined2 *)(ar4 + 0x41a) = uVar6;
    *(undefined2 *)((int)ar4 + 0x106a) = 0x80;
  }
  iVar2 = FUN_8c0e30c8(ar5,ar5_00,ar6_00,ar7);
  if (iVar2 == 1) {
    ar4[0x409] = 3;
  }
  return 1;
}



/* FUN_8c0e5998 @ 8c0e5998 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5998(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e59bc)(*(undefined4 *)(DAT_8c0e59b8 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e59c0 @ 8c0e59c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e59c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0e59e4)(ar4 + DAT_8c0e59e0,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0e59e8 @ 8c0e59e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e59e8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(DAT_8c0e5a04 + *ar4))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5a08 @ 8c0e5a08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5a08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e5a48)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5a4c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5a54)(ar4 + DAT_8c0e5a50,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5a58)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0e5a5c + ar4) = 5;
  uVar1 = (*(code *)PTR_FUN_8c0e5a60)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5a64 @ 8c0e5a64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5a64(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(DAT_8c0e5a84 + *ar4))(ar4,ar5,ar6,ar7);
  return 0;
}



/* ret_const_0_0e5a88 @ 8c0e5a88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e5a88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_0e5a90 @ 8c0e5a90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5a90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e5a94 @ 8c0e5a94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5a94(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e5a98 @ 8c0e5a98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5a98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e5a9c @ 8c0e5a9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5a9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e5aa0 @ 8c0e5aa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5aa0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e5aa4 @ 8c0e5aa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e5aa4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0e5aa8 @ 8c0e5aa8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e5ac2) */
/* WARNING: Removing unreachable block (ram,0x8c0e5ab8) */
/* WARNING: Removing unreachable block (ram,0x8c0e5aae) */
/* WARNING: Removing unreachable block (ram,0x8c0e5aba) */
/* WARNING: Removing unreachable block (ram,0x8c0e5ac4) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e5aa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(ar4 + 0xa6c) = 0x43898000;
  *(undefined4 *)(ar4 + 0xa70) = 0x44ed8000;
  return &DAT_8c0e5adc;
}



/* FUN_8c0e5ae0 @ 8c0e5ae0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5ae0(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  
  ar5_00 = ar5;
  (*(code *)PTR_s_Failed_to_set_texture_wrap_0d6058_8c0e5b20)(ar4 + DAT_8c0e5b1c,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0e5b28)(ar4 + DAT_8c0e5b24,ar5_00,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e5b2c)(ar4,ar5 & 0xff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5b30 @ 8c0e5b30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5b30(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  
  ar5_00 = ar5;
  (*(code *)PTR_s_Failed_wrap_0d6074_8c0e5b70)(ar4 + DAT_8c0e5b6c,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_s_015312_8c0e5b78)(ar4 + DAT_8c0e5b74,ar5_00,ar6,ar7);
  uVar1 = (*(code *)PTR_s_Failed_wrap_0d9b8c_8c0e5b7c)(ar4,ar5 & 0xff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5b80 @ 8c0e5b80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0e5b80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *s0)

{
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc | 1;
  *s0 = uStack_4;
  return uStack_4;
}



/* get_field_15c8_0e5ba8 @ 8c0e5ba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_15c8_0e5ba8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e5bb0 + ar4);
}



/* s_GRAPHICS_ENV_0e5bba @ 8c0e5bb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e5bba(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *ar6_00;
  int ar7_00;
  
  (*(code *)PTR_FUN_8c0e5c14)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c10,
             PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c0c,ar4);
  ar6_00 = PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c0c;
  ar7_00 = ar4;
  (*(code *)PTR_FUN_8c0e5c18)(ar5,PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c10,ar6_00,ar4);
  uVar1 = (*(code *)PTR_s_GRAPHICS_ENV_0d60cc_8c0e5c20)(ar4 + DAT_8c0e5c1c,ar5,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0e5c24 @ 8c0e5c24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5c24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + DAT_8c0e5c48) + 0x28))
                    ((int *)(ar4 + DAT_8c0e5c48),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5c4c @ 8c0e5c4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5c4c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = 1;
  (**(code **)(*ar4 + 0x1b0))(ar4,1,ar6,ar7);
  if (cVar2 == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = 0x3f19999a;
  }
  else {
    *(ulonglong *)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    ar4[0x1f] = 0x3f19999a;
    ar4[0x20] = 0x443a3e67;
  }
  FUN_8c102a7c(ar4 + 0x2c4,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 0x2cc,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 0x2b4,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 700,uVar1,ar6,ar7);
  uVar1 = FUN_8c102974(ar4 + 0x2dc,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5dac @ 8c0e5dac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5dac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e5e3c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5e40)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5e44)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5e48)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5e4c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e5e50)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Outside_0e5e56 @ 8c0e5e54 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e5e70) */
/* WARNING: Removing unreachable block (ram,0x8c0e5e68) */
/* WARNING: Removing unreachable block (ram,0x8c0e5e60) */
/* WARNING: Removing unreachable block (ram,0x8c0e5e64) */
/* WARNING: Removing unreachable block (ram,0x8c0e5e6c) */
/* WARNING: Removing unreachable block (ram,0x8c0e5e74) */
/* WARNING: Unknown calling convention */

undefined4 * s_Outside_0e5e56(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *ar5_00;
  code *ar5_01;
  undefined4 uVar1;
  code *ar6_00;
  undefined4 uVar2;
  undefined4 in_fr1;
  char cVar3;
  
  cVar3 = '\0';
  uVar2 = 0;
  uVar1 = 2;
  ar5_00 = s_Outside_8c140040;
  FUN_8c0d9c80(ar4,s_Outside_8c140040,2,0);
  *ar4 = &DAT_8c12b580;
  FUN_8c015224(ar4 + 0x430,ar5_00,uVar1,uVar2);
  FUN_8c015ab8(ar4 + 0x432,ar5_00,uVar1,uVar2);
  Vec3_ctor_zero(ar4 + 0x433,ar5_00,uVar1,uVar2);
  s_66_JUNGLE_RAIN_5_0d7f1a(ar4 + 0x437,ar5_00,uVar1,uVar2);
  FUN_8c010120(ar4 + 0x1fd2,FUN_8c0d6ee0,free_if_nonnull_wrap_0d6ef8,0xc,100);
  uVar1 = 0x18;
  ar6_00 = free_if_nonnull_wrap_0cffc8;
  ar5_01 = FUN_8c02145c;
  FUN_8c010120(ar4 + 0x20fe,FUN_8c02145c,free_if_nonnull_wrap_0cffc8,0x18,1);
  FUN_8c0e6ef0(ar4,ar5_01,ar6_00,uVar1);
  if (cVar3 == '\0') {
    ar4[0x2e9] = 0x425dae14;
    ar4[0x2af] = 0x453b7ff4;
    ar4[0x2b0] = 0x4506eccd;
    ar4[0x2b1] = 0x45520000;
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
    ar4[0x25] = 0x41000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2e9) = 0xabc425dae14;
    *(undefined8 *)(ar4 + 0x2af) = 0xac0453b7ff4;
    *(undefined8 *)(ar4 + 0x2b0) = 0x440ea6664506eccd;
    *(undefined8 *)(ar4 + 0x2b1) = 0x8045520000;
    *(undefined8 *)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(ar4 + 0x23) = 0x9043a00000;
    *(undefined8 *)(ar4 + 0x24) = 0x9442e00000;
    in_fr1 = 0x41000000;
    *(undefined8 *)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar3 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x27) = 0xa041300000;
    *(undefined8 *)(ar4 + 0x28) = 0x106c40400000;
  }
  uVar2 = DAT_8c13f718;
  ar4[0x41b] = DAT_8c13f714;
  ar4[0x41c] = uVar2;
  ar4[0x41d] = PTR_FUN_8c13f71c;
  uVar2 = DAT_8c13f724;
  ar4[0x41e] = DAT_8c13f720;
  ar4[0x41f] = uVar2;
  ar4[0x420] = PTR_FUN_8c13f728;
  uVar2 = DAT_8c13f730;
  ar4[0x421] = DAT_8c13f72c;
  ar4[0x422] = uVar2;
  ar4[0x423] = PTR_FUN_8c13f734;
  uVar2 = DAT_8c13f73c;
  ar4[0x42a] = DAT_8c13f738;
  ar4[0x42b] = uVar2;
  ar4[0x42c] = PTR_FUN_8c13f740;
  uVar2 = DAT_8c13f748;
  ar4[0x427] = DAT_8c13f744;
  ar4[0x428] = uVar2;
  ar4[0x429] = PTR_FUN_8c13f74c;
  ar4[0x2104] = 0;
  ar4[0x20fe] = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[ar4[0x2104]];
  ar4[0x2100] = 500;
  FUN_8c0d76e8(ar4 + 0x427,ar5_01,ar6_00,uVar1);
  return ar4;
}



/* FUN_8c0e6114 @ 8c0e6114 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e6114(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c015428(ar4 + 0x6e50,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x6e20,free_if_nonnull_wrap_0cffc8,0x18,2,ain0);
    ar7_00 = 500;
    ar6_00 = 0x38;
    vec_delete_array(ar4 + 0xbc,FUN_8c0d8094,0x38,500,ain0);
    FUN_8c0d80dc(ar4 + 0x78,0xffffffff,ar6_00,ar7_00);
    FUN_8c0d8128(ar4 + 0x50,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0d8168(ar4 + 0x34,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(ar4 + 0x28,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x18,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* Class_12b580_m0_0e61f4 @ 8c0e61f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b580_m0_0e61f4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b580;
    vec_delete_array(ar4 + 0x20fe,free_if_nonnull_wrap_0cffc8,0x18,1,ain0);
    ar7_00 = 100;
    ar6_00 = 0xc;
    vec_delete_array(ar4 + 0x1fd2,free_if_nonnull_wrap_0d6ef8,0xc,100,ain0);
    FUN_8c0e6114(ar4 + 0x437,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x433,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x432,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x430,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0;
    Class_12bb08_m0_0da208(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0e62cc @ 8c0e62cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e62cc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(DAT_8c0e632c + *ar4))(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_GRAPHICS_ENV_0d819c_8c0e6334)((int)ar4 + DAT_8c0e6330,ar5,ar6,ar7);
  (*(code *)PTR_s_64_JUNGLE_NIGHT_0e7062_8c0e6338)
            (ar4,*(undefined4 *)(DAT_8c0e6330 + (int)ar4),ar6,ar7);
  iVar1 = *(int *)(DAT_8c0e633c + (int)ar4);
  if (iVar1 == -1) {
    uVar2 = (*(code *)PTR_pack_find_by_name_buffered_8c0e6348)
                      (DAT_8c0e6344,*(undefined4 *)(DAT_8c0e6340 + (int)ar4),ar6,ar7);
    iVar1 = DAT_8c0e633c;
    *(undefined4 *)(DAT_8c0e633c + (int)ar4) = uVar2;
  }
  return iVar1;
}



/* Class_12b580_m1_0e634c @ 8c0e634c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b580_m1_0e634c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = ar4 + DAT_8c0e64dc;
  (*(code *)PTR_FUN_8c0e64e4)(ar4 + DAT_8c0e64e0,ar5,iVar4,ar7);
  uVar3 = *(uint *)(DAT_8c0e64e0 + ar4);
  (*(code *)PTR_s_64_JUNGLE_NIGHT_0e7062_8c0e64e8)(ar4,uVar3,iVar4,ar7);
  if ((*(int *)(DAT_8c0e64e0 + ar4) == 0) || (*(int *)(DAT_8c0e64e0 + ar4) == DAT_8c0e64ec)) {
    if (*(int *)(DAT_8c0e64f0 + ar4) != -1) {
      (*(code *)PTR_FUN_8c0e64f8)(DAT_8c0e64f4,*(undefined4 *)(DAT_8c0e64f0 + ar4),iVar4,ar7);
      (*(code *)PTR_FUN_8c0e64fc)(DAT_8c0e64f4,*(undefined4 *)(DAT_8c0e64f0 + ar4),iVar4,ar7);
    }
    uVar1 = (*(code *)PTR_pack_find_by_name_buffered_8c0e6504)
                      (DAT_8c0e64f4,*(undefined4 *)(DAT_8c0e6500 + ar4),iVar4,ar7);
    *(undefined4 *)(DAT_8c0e64f0 + ar4) = uVar1;
    uVar3 = *(uint *)(DAT_8c0e64f0 + ar4);
    (*(code *)PTR_FUN_8c0e6508)(DAT_8c0e64f4,uVar3,iVar4,ar7);
  }
  if ((*(uint *)(DAT_8c0e64e0 + ar4) & 1) == 0) {
    uVar3 = *(uint *)(DAT_8c0e650c + ar4);
    (*(code *)PTR_FUN_8c0e6510)(DAT_8c0e64f4,uVar3,iVar4,ar7);
  }
  iVar2 = (*(code *)PTR_FUN_8c0e6518)(*(undefined4 *)(DAT_8c0e6514 + ar5),uVar3,iVar4,ar7);
  if (iVar2 == 1) {
    iVar2 = (*(code *)PTR_get_field_38_0db5a0_8c0e6520)(ar4 + DAT_8c0e651c,uVar3,iVar4,ar7);
    if (iVar2 != 0) {
      ar4_00 = (*(code *)PTR_FUN_8c0e6524)(ar4 + DAT_8c0e651c,uVar3,iVar4,ar7);
      for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        uVar3 = (*(code *)PTR_get_field_b8_101178_8c0e6528)
                          (*(undefined4 *)(DAT_8c0e6514 + ar5),uVar3,iVar4,ar7);
        uVar3 = uVar3 & 0xff;
        (**(code **)(*(int *)(*(int *)(ar4_00 + 8) + 8) + 0x50))
                  (*(int *)(ar4_00 + 8),uVar3,iVar4,ar7);
        ar4_00 = (*(code *)PTR_list_node_next_8c0e652c)(ar4_00,uVar3,iVar4,ar7);
      }
    }
  }
  (*(code *)PTR_Class_12bb08_m1_0da338_8c0e6530)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e6534)(ar4,ar5,ar6,ar7);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar2 = (*(code *)PTR_FUN_8c0e653c)(ar4 + iVar4 * 0x68 + DAT_8c0e6538,ar5,ar6,ar7);
    if (iVar2 == 1) {
      ar5 = ar4;
      (*(code *)PTR_FUN_8c0e6540)(ar4 + iVar4 * 0x68 + DAT_8c0e6538,ar4,ar6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0e6544)(ar4 + DAT_8c0e64dc,ar5,ar6,ar7);
  return 1;
}



/* Class_12b580_m2_0e6548 @ 8c0e6548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b580_m2_0e6548(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  int iVar2;
  
  (*(code *)PTR_Class_12bb08_m2_0da5a8_8c0e65e8)(ar4,ar5,ar6,ar7);
  ar5_00 = *(undefined4 *)(DAT_8c0e65ec + ar4);
  (*(code *)PTR_s_64_JUNGLE_NIGHT_0e7062_8c0e65f0)(ar4,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0e65f4)(ar4,ar5_00,ar6,ar7);
  ar6_00 = ar4 + DAT_8c0e65f8;
  (*(code *)PTR_FUN_8c0e65fc)(ar4 + DAT_8c0e65ec,ar5,ar6_00,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0e6604)(ar4 + iVar2 * 0x68 + DAT_8c0e6600,ar5,ar6_00,ar7);
    if (iVar1 == 1) {
      ar5 = ar4;
      (*(code *)PTR_FUN_8c0e6608)(ar4 + iVar2 * 0x68 + DAT_8c0e6600,ar4,ar6_00,ar7);
    }
  }
  return 1;
}



/* FUN_8c0e660c @ 8c0e660c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e660c(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  FUN_8c0d8808(ar4 + 0x10dc,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x78) = *(undefined4 *)(ar4 + 0x1120);
    *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)(ar4 + 0x1124);
  }
  else {
    *(undefined8 *)(ar4 + 0x78) = *(undefined8 *)(ar4 + 0x1120);
    *(undefined8 *)(ar4 + 0x7c) = *(undefined8 *)(ar4 + 0x1124);
  }
  FUN_8c0d89d8(ar4 + 0x10dc,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7);
    if (iVar1 == 1) {
      ar6 = ar4 + 4;
      ar5 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7);
    }
  }
  FUN_8c0da754(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0e66fc @ 8c0e66fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e66fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e6714)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e6718 @ 8c0e6718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6718(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0e6764)(ar4 + DAT_8c0e6760,ar5,ar6,ar7);
  if (iVar1 != 0xf) {
    ar5 = (*(code *)PTR_s_CEnv_AddItem_0da93a_8c0e6768)(ar4,ar5,ar6,ar7);
  }
  return ar5;
}



/* FUN_8c0e676c @ 8c0e676c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e676c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  uVar1 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0e67ec)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e67f0)(ar5,uVar1,ar6,ar7,auStack_28);
  (*(code *)PTR_Vec3_assign_8c0e67f4)(auStack_18,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0e67f8)(auStack_28,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c0e6800)(ar5,uVar1,ar6,ar7);
  uVar1 = (**(code **)(*ar4 + 0x4c))(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0e67f8)(auStack_18,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e6804 @ 8c0e6804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6804(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  ar6_00 = (uint)(byte)ar6;
  (*(code *)PTR_FUN_8c0e68ac)(ar4,ar5,ar6_00,ar7);
  ar5_00 = ar5;
  (*(code *)PTR_pure_virtual_stub_8c0e68b8)(ar4,ar5,ar6_00,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0e68bc)(ar5,ar5_00,ar6_00,ar7);
  if (iVar1 == 1) {
    uVar2 = (*(code *)PTR_get_field_cc_0dfee8_8c0e68c0)(ar5,ar5_00,ar6_00,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0e68c4)(uVar2,ar5_00,ar6_00,ar7);
    (*(code *)PTR_FUN_8c0e68c8)(uVar2,ar5_00,ar6_00,ar7);
  }
  iVar1 = (*(code *)PTR_FUN_8c0e68cc)(ar5,ar5_00,ar6_00,ar7);
  if (iVar1 == 1) {
    uVar2 = (*(code *)PTR_get_field_cc_0dfee8_8c0e68c0)(ar5,ar5_00,ar6_00,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0e68c4)(uVar2,ar5_00,ar6_00,ar7);
    (*(code *)PTR_FUN_8c0e68d0)(uVar2,ar5_00,ar6_00,ar7);
  }
  return 1;
}



/* FUN_8c0e68d4 @ 8c0e68d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e68d4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(DAT_8c0e68f0 + *ar4))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e68f4 @ 8c0e68f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e68f4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e6944)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e694c)((int)ar4 + DAT_8c0e6948,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e6950)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e6954)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e695c)((int)ar4 + DAT_8c0e6958,ar5,ar6,ar7);
  uVar1 = (**(code **)(DAT_8c0e6960 + *ar4))(ar4,3,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e6964 @ 8c0e6964 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6964(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(DAT_8c0e6984 + *ar4))(ar4,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c0e6988 @ 8c0e6988 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6988(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0e69b8)((int)ar4 + DAT_8c0e69b4,ar5,ar6,ar7);
  (**(code **)(DAT_8c0e69bc + *ar4))(ar4,3,ar6,ar7);
  return 0;
}



/* s_GRAPHICS_ENV_0e69c8 @ 8c0e69c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e69c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  undefined4 in_fr1;
  char cVar6;
  undefined4 in_stack_ffffffac;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar6 = '\0';
  uVar3 = ar5;
  Vec3_ctor_zero(&uStack_24,ar5,ar6,ar7);
  Vec3_set_zero(&uStack_30,uVar3,ar6,ar7);
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = FUN_8c0209fc(ar5,s_amazon_nj_8c140048,s_GRAPHICS_ENV_8c13f8cb,&uStack_34);
  if (iVar1 == 0) {
    report_error_message(s_amazon_nj_8c140048,s_Failed_to_load_COutside__Create__8c140052,0,2);
  }
  puVar4 = &uStack_38;
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c020af4(ar5,s_amazon_nj_8c140048,s_GRAPHICS_ENV_8c13f8cb,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    pcVar2 = (char *)0x0;
    report_error_message(s_amazon_nj_8c140048,s_Failed_NJTL_COutside__Create___8c140074,0,2);
  }
  FUN_8c015ad4(ar4 + 0x30,uStack_34,pcVar2,puVar4,in_stack_ffffffac);
  a7 = 0xd;
  uVar3 = 0x8c4312a8;
  FUN_8c239170(0x8c437600,0x8c437608,0x8c4312a8,0xd);
  for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
    *(uint *)(uVar5 * 0xc + -0x73bc89f4) = *(uint *)(uVar5 * 0xc + -0x73bc89f4) | 0x80000000;
  }
  ar5_00 = 0x8c437600;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),0x8c437600,uVar3,a7);
  get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  uVar3 = get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7);
  pcVar2 = s_GRAPHICS_ENV_8c13f8cb;
  iVar1 = FUN_8c02100c(ar5,s_amazon_pvm_8c140093,s_GRAPHICS_ENV_8c13f8cb,uVar3);
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)0x0;
    report_error_message(s_Failed_to_load_outside_pvm_textu_8c14009e,&DAT_8c13f91d,0,2);
  }
  s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,pcVar2,uVar3);
  if (cVar6 == '\0') {
    uStack_20 = 0;
    uStack_28 = in_fr1;
  }
  else {
    uStack_18 = 0xc2700000;
    uStack_28 = 0xc2700000;
    uStack_20 = in_fr1;
  }
  uStack_1c = 0xbf800000;
  uStack_30 = 0xc2700000;
  if (cVar6 == '\0') {
    uStack_28 = 0;
    uStack_24 = uStack_20;
  }
  else {
    uStack_24 = 0;
  }
  puVar4 = &uStack_30;
  uStack_2c = uStack_28;
  FUN_8c0d167c(&uStack_24,ar4 + 0x10cc,puVar4,uVar3);
  object_dtor_delete(&uStack_30,0xffffffff,puVar4,uVar3);
  uVar3 = Vec3_dtor(&uStack_24,0xffffffff,puVar4,uVar3);
  return uVar3;
}



/* FUN_8c0e6c00 @ 8c0e6c00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e6c00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_s_64_JUNGLE_NIGHT_0e7062_8c0e6c40)(ar4,*(undefined4 *)(DAT_8c0e6c3c + ar4),ar6,ar7);
  iVar1 = *(int *)(DAT_8c0e6c44 + ar4);
  if (iVar1 == -1) {
    uVar2 = (*(code *)PTR_pack_find_by_name_buffered_8c0e6c50)
                      (DAT_8c0e6c4c,*(undefined4 *)(DAT_8c0e6c48 + ar4),ar6,ar7);
    iVar1 = DAT_8c0e6c44;
    *(undefined4 *)(DAT_8c0e6c44 + ar4) = uVar2;
  }
  return iVar1;
}



/* FUN_8c0e6c54 @ 8c0e6c54 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e6c6e) */
/* WARNING: Removing unreachable block (ram,0x8c0e6c64) */
/* WARNING: Removing unreachable block (ram,0x8c0e6c5a) */
/* WARNING: Removing unreachable block (ram,0x8c0e6c66) */
/* WARNING: Removing unreachable block (ram,0x8c0e6c70) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e6c54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(ar4 + 0xa6c) = 0x44610000;
  *(undefined4 *)(ar4 + 0xa70) = 0x4544e000;
  return &DAT_8c0e6c88;
}



/* FUN_8c0e6c8c @ 8c0e6c8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6c8c(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  FUN_8c0d9b60(ar4,ar5,ar6,ar7);
  s_Failed_to_set_texture_s_015252(ar4 + 4,ar5_00,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = noop_0d8458(ar4 + 0x10dc,ar5_00,ar6,ar7,in_PR);
  }
  return uVar1;
}



/* FUN_8c0e6cd8 @ 8c0e6cd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6cd8(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  s_Failed_wrap_0d9b8c(ar4,ar5,ar6,ar7);
  s_Failed_s_015312(ar4 + 4,ar5_00,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = noop_0d845c(ar4 + 0x10dc,ar5_00,ar6,ar7,in_PR);
  }
  return uVar1;
}



/* FUN_8c0e6d24 @ 8c0e6d24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6d24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  undefined4 uVar1;
  
  ar5_00 = (uint)(byte)ar5;
  (*(code *)PTR_FUN_8c0e6d68)(ar4,ar5_00,ar6,ar7);
  if (*(int *)(DAT_8c0e6d6c + ar4) != -1) {
    ar5_00 = *(uint *)(DAT_8c0e6d6c + ar4);
    (*(code *)PTR_FUN_8c0e6d74)(DAT_8c0e6d70,ar5_00,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0e6d7c)(ar4 + DAT_8c0e6d78,ar5_00,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e6d80 @ 8c0e6d80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6d80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_8c0e6db0 + ar4) != -1) {
    ar5 = *(undefined4 *)(DAT_8c0e6db0 + ar4);
    (*(code *)PTR_FUN_8c0e6db8)(DAT_8c0e6db4,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0e6dc0)(ar4 + DAT_8c0e6dbc,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e6dc4 @ 8c0e6dc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6dc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0e6e3c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e6e44)(ar4 + DAT_8c0e6e40,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e6e58)(ar4 + DAT_8c0e6e54,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + DAT_8c0e6e5c) + 0x10))((int *)(ar4 + DAT_8c0e6e5c),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e6e64)(ar4 + DAT_8c0e6e60,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0e6e68 + ar4) != -1) {
    (*(code *)PTR_FUN_8c0e6e70)(DAT_8c0e6e6c,*(undefined4 *)(DAT_8c0e6e68 + ar4),ar6,ar7);
    *(undefined4 *)(DAT_8c0e6e68 + ar4) = 0xffffffff;
  }
  return 1;
}



/* s_GRAPHICS_ENV_0e6e78 @ 8c0e6e74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e6e78(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e6ec0)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e6eb4 + DAT_8c0e6ebc,
             PTR_s_GRAPHICS_COMMON_8c0e6eb4 + DAT_8c0e6eb8,ar4);
  uVar1 = (*(code *)PTR_FUN_8c0e6ec4)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0e6eb4 + DAT_8c0e6ebc,
                     PTR_s_GRAPHICS_COMMON_8c0e6eb4 + DAT_8c0e6eb8,ar4);
  return uVar1;
}



/* FUN_8c0e6ec8 @ 8c0e6ec8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6ec8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + DAT_8c0e6eec) + 0x28))
                    ((int *)(ar4 + DAT_8c0e6eec),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e6ef0 @ 8c0e6ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6ef0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = 1;
  (**(code **)(*ar4 + 0x1b0))(ar4,1,ar6,ar7);
  if (cVar2 == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    ar4[0x1f] = 0x3e4ccccd;
    ar4[0x20] = 0x458ca000;
  }
  FUN_8c102a7c(ar4 + 0x2c4,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 0x2cc,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 0x2b4,uVar1,ar6,ar7);
  FUN_8c102a7c(ar4 + 700,uVar1,ar6,ar7);
  uVar1 = FUN_8c102974(ar4 + 0x2dc,uVar1,ar6,ar7);
  return uVar1;
}



/* s_64_JUNGLE_NIGHT_0e7062 @ 8c0e705c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e7092) */
/* WARNING: Removing unreachable block (ram,0x8c0e708c) */
/* WARNING: Removing unreachable block (ram,0x8c0e7086) */
/* WARNING: Removing unreachable block (ram,0x8c0e7080) */
/* WARNING: Removing unreachable block (ram,0x8c0e707a) */
/* WARNING: Removing unreachable block (ram,0x8c0e7072) */
/* WARNING: Removing unreachable block (ram,0x8c0e705e) */
/* WARNING: Removing unreachable block (ram,0x8c0e705c) */
/* WARNING: Removing unreachable block (ram,0x8c0e706e) */
/* WARNING: Removing unreachable block (ram,0x8c0e7078) */
/* WARNING: Removing unreachable block (ram,0x8c0e707e) */
/* WARNING: Removing unreachable block (ram,0x8c0e7084) */
/* WARNING: Removing unreachable block (ram,0x8c0e708a) */
/* WARNING: Removing unreachable block (ram,0x8c0e7090) */
/* WARNING: Removing unreachable block (ram,0x8c0e7094) */
/* WARNING: Unknown calling convention */

undefined4 s_64_JUNGLE_NIGHT_0e7062(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  double in_xd14;
  int ar4_00;
  int iVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar4 = (float)ar5;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  uVar1 = 0x43b40000;
  fVar4 = (((fVar4 * 360.0) / 72000.0) * 65536.0) / 360.0;
  dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar4);
  ar4_00 = (int)fVar4;
  iVar6 = ar5;
  FUN_8c25747c(ar4_00,ar5,ar6,ar7,ar5);
  FUN_8c010e38(ar4_00,ar5,ar6,ar7,iVar6);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),uVar1);
  }
  else {
    in_xd14 = (double)CONCAT44(uVar1,in_fr1);
  }
  if (*(int *)(ar4 + 0x10dc) == 0) {
    uVar1 = rand(ar4_00,ar5,ar6,ar7);
    uVar1 = libgcc_divide_helper_01031c(uVar1,2,ar6,ar7);
    *(undefined4 *)(ar4 + 0x8410) = uVar1;
    *(undefined **)(ar4 + 0x83f8) = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[*(int *)(ar4 + 0x8410)];
  }
  else if (*(int *)(ar4 + 0x10dc) == 36000) {
    *(undefined4 *)(ar4 + 0x8410) = 2;
    *(undefined **)(ar4 + 0x83f8) = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[*(int *)(ar4 + 0x8410)];
  }
  if (cVar8 == '\0') {
    dVar2 = (double)CONCAT44(0x461ba000,in_fr1);
  }
  else {
    dVar2 = 8.349145204665365e+24;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar2,0);
  }
  if (cVar8 == '\0') {
    in_xd14 = (double)CONCAT44(fVar4,fVar4);
    fVar3 = 2490.0;
  }
  else {
    fVar4 = 2490.0;
    fVar3 = 4.73527e-41;
  }
  if (cVar7 == '\0' && fVar3 < fVar4) {
    if (cVar8 == '\0') {
      in_xd14 = (double)CONCAT44(0x451ba000,SUB84(in_xd14,0));
    }
    else {
      in_xd14 = 7.17070546069488e-310;
    }
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(float)((ulonglong)in_xd14 >> 0x20);
  }
  else {
    iVar6 = (int)in_xd14;
  }
  *(int *)(ar4 + 0x8400) = 0xbae - iVar6;
  return 0x8400;
}



/* FUN_8c0e7190 @ 8c0e7190 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e71a0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e7190(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 *puVar2;
  undefined4 auStack_10 [2];
  
  auStack_10[0] = 0;
  a5 = ar5;
  iVar1 = FUN_8c100ce8(ar5,ar5,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x88))(*(int *)(ar4 + 0x9d4),a5,ar6,ar7);
  }
  FUN_8c0dc61c(ar4,ar5,ar6,ar7);
  FUN_8c0dc8fc(ar4,ar5,ar6,ar7);
  FUN_8c0dc7e8(ar4,ar5,ar6,ar7);
  puVar2 = auStack_10;
  iVar1 = FUN_8c100e4c(ar5,puVar2,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x184))(*(int *)(ar4 + 0x9d4),puVar2,ar6,ar7)
    ;
  }
  else {
    puVar2 = auStack_10;
    iVar1 = FUN_8c100e4c(ar5,puVar2,ar6,ar7);
    if ((iVar1 == 2) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x188))
                (*(int *)(ar4 + 0x9d4),puVar2,ar6,ar7);
    }
  }
  return 1;
}



/* FUN_8c0e727c @ 8c0e727c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e7294) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e727c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined4 *ar5_00;
  int iVar3;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = 0;
  if (*(int *)(ar4 + 0xac8) != 0) {
    uVar2 = ar5;
    iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 0xac8),ar5,ar6,ar7);
    if ((iVar1 == 5) || (iVar1 == 7)) {
      uVar2 = 0;
      (**(code **)(*(int *)(*(int *)(ar4 + 0xac8) + 8) + 0x84))(*(int *)(ar4 + 0xac8),0,ar6,ar7);
    }
    iVar1 = FUN_8c100cb4(ar5,uVar2,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = get_field_300_0bf154(ar4 + 0xa4,uVar2,ar6,ar7);
      a4 = FUN_8c0da588(ar4 + 0xa4,uVar2,ar6,ar7);
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = 2;
        (**(code **)(*(int *)(a4 + 8) + 0x84))(a4,2,ar6,ar7);
        a4 = list_node_next(a4,uVar2,ar6,ar7);
      }
    }
    ar5_00 = auStack_20;
    iVar1 = FUN_8c100e4c(ar5,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x184))
                (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
    }
    else {
      ar5_00 = auStack_20;
      iVar1 = FUN_8c100e4c(ar5,ar5_00,ar6,ar7);
      if ((iVar1 == 2) && (*(int *)(ar4 + 0x9d4) != 0)) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x188))
                  (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
      }
    }
    iVar1 = FUN_8c100ce8(ar5,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x9d4) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x88))
                (*(int *)(ar4 + 0x9d4),ar5_00,ar6,ar7);
    }
    FUN_8c0dc7e8(ar4,ar5,ar6,ar7);
    FUN_8c0dc8fc(ar4,ar5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c0e741c @ 8c0e741c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e741c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_ret_const_1_0dc548_8c0e7438)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0e743c @ 8c0e743c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e743c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e7490)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e7494)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e7498)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_11940_0e749c @ 8c0e749c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_11940_0e749c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0e74a4;
}



/* s_INCUBATOR_0e74ae @ 8c0e74a8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e766c) */
/* WARNING: Removing unreachable block (ram,0x8c0e7610) */
/* WARNING: Removing unreachable block (ram,0x8c0e763e) */
/* WARNING: Removing unreachable block (ram,0x8c0e7654) */
/* WARNING: Removing unreachable block (ram,0x8c0e7626) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * s_INCUBATOR_0e74ae(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 uVar1;
  undefined1 *ar5_01;
  code *ar6_00;
  undefined1 *ar6_01;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_fr1;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  FUN_8c0d99e8(ar4,s_INCUBATOR_8c1400c3,3,ar7);
  *ar4 = &DAT_8c12b3b8;
  uVar2 = 0x20;
  ar6_00 = FUN_8c0d6f68;
  ar5_00 = FUN_8c0d6f28;
  FUN_8c010120(ar4 + 0x29,FUN_8c0d6f28,FUN_8c0d6f68,0x20,0xc);
  FUN_8c016690(ar4 + 0x89,ar5_00,ar6_00,uVar2);
  FUN_8c0191e4(ar4 + 0x8a,ar5_00,ar6_00,uVar2);
  FUN_8c01a0cc(ar4 + 0xaa,ar5_00,ar6_00,uVar2);
  uVar1 = 0;
  FUN_8c015c58(ar4 + 0x105,0,ar6_00,uVar2);
  FUN_8c016410(ar4 + 0x111,uVar1,ar6_00,uVar2);
  FUN_8c0153b8(ar4 + 0x122,uVar1,ar6_00,uVar2);
  FUN_8c0e89a0(ar4,uVar1,ar6_00,uVar2);
  FUN_8c019384(ar4 + 0x8a,uVar1,ar6_00,uVar2);
  if (cVar8 != '\0') {
    in_fr1 = 0xc1200000;
  }
  _DAT_8c4383c8 = 0xc1200000;
  _DAT_8c4383c4 = 0xc1880000;
  if (cVar8 == '\0') {
    _DAT_8c4383cc = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x41800000;
    _DAT_8c4383cc = in_fr1;
  }
  _DAT_8c4383d4 = 0x41800000;
  _DAT_8c4383d0 = 0xc1880000;
  if (cVar8 == '\0') {
    _DAT_8c4383d8 = 0;
    uVar2 = uVar1;
  }
  else {
    uVar2 = 0x41800000;
    _DAT_8c4383d8 = uVar1;
  }
  _DAT_8c4383e0 = 0x41800000;
  _DAT_8c4383dc = 0x41880000;
  if (cVar8 == '\0') {
    _DAT_8c4383e4 = 0;
    _DAT_8c4383f0 = uVar2;
  }
  else {
    _DAT_8c4383f0 = 0xc1200000;
    _DAT_8c4383e4 = uVar2;
  }
  _DAT_8c4383ec = 0xc1200000;
  _DAT_8c4383e8 = 0x41880000;
  if (cVar8 == '\0') {
    _DAT_8c4383f0 = 0;
  }
  _DAT_8c4383f4 = 0xff0f0f0f;
  _DAT_8c4383f8 = 0xff00008f;
  _DAT_8c4383fc = 0xff00008f;
  _DAT_8c438400 = 0xff0f0f0f;
  uVar1 = 4;
  ar6_01 = &DAT_8c4383f4;
  ar5_01 = &DAT_8c4383c4;
  FUN_8c016464(ar4 + 0x111,&DAT_8c4383c4,&DAT_8c4383f4,4);
  FUN_8c014790(ar4 + 0x111,ar5_01,ar6_01,uVar1);
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x42140000,(float)iVar4);
      }
      else {
        dVar6 = -3023657517696.0;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0xc2860000,fVar5);
      }
      else {
        dVar6 = 3.66595689778914e-312;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2a] = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2a) = in_xd0;
      }
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x41e00000,(float)iVar3);
      }
      else {
        dVar6 = 60129550576.0;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x422c0000,fVar5);
      }
      else {
        dVar6 = 3.74019760929537e-312;
      }
      if (cVar7 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2b] = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2b) = dVar6;
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2c] = 0;
      }
      else {
        *(ulonglong *)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2c) = (ulonglong)dVar6 & 0xffffffff;
      }
    }
  }
  if (cVar8 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x44048000;
    ar4[0x24] = 0x43cd0000;
    ar4[0x25] = 0x41600000;
    ar4[0x26] = 0x41200000;
    ar4[0x27] = 0x41900000;
    ar4[0x28] = 0x41500000;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(ar4 + 0x23) = 0x9044048000;
    *(undefined8 *)(ar4 + 0x24) = 0x9443cd0000;
    *(undefined8 *)(ar4 + 0x25) = 0x9841600000;
    *(undefined8 *)(ar4 + 0x26) = 0x9c41200000;
    *(undefined8 *)(ar4 + 0x27) = 0xa041900000;
    *(undefined8 *)(ar4 + 0x28) = 0x4f222fe641500000;
  }
  return ar4;
}



/* Class_12b3b8_m0_0e77ec @ 8c0e77ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b3b8_m0_0e77ec(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b3b8;
    FUN_8c015428(ar4 + 0x122,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_015c94(ar4 + 0x105,0xffffffff,ar6,ar7);
    Class_1299ec_m0_01a0f8(ar4 + 0xaa,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_019270(ar4 + 0x8a,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016660(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar7_00 = 0xc;
    ar6_00 = 0x20;
    vec_delete_array(ar4 + 0x29,FUN_8c0d6f68,0x20,0xc,ain0);
    ar5_00 = 0;
    Class_12bce0_m0_0d9a98(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0e78c4 @ 8c0e78c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e78c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 uVar3;
  char *ar6_00;
  undefined4 ar7_00;
  int iVar4;
  
  uVar1 = get_field_4_0253e4(ar4 + 0x488,ar5,ar6,ar7);
  ar7_00 = 2;
  uVar3 = 0x8c4312a8;
  iVar2 = ar4 + 0x498;
  FUN_8c239170(uVar1,iVar2,0x8c4312a8,2);
  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0xc + ar4 + 0x49c) = 0x80000000;
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x488,iVar2,uVar3,ar7_00);
  ar6_00 = s_GRAPHICS_ENV_8c13f8cb;
  ar5_00 = s_Incubater_pvm_8c1400cd;
  iVar2 = FUN_8c02100c(ar5,s_Incubater_pvm_8c1400cd,s_GRAPHICS_ENV_8c13f8cb,uVar1);
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)0x0;
    ar5_00 = s_CIncubater__Create___8c1400ff;
    report_error_message
              (s_Failed_to_load_incubater_textuer_8c1400db,s_CIncubater__Create___8c1400ff,0,2);
  }
  uVar3 = get_field_4_0253e4(ar4 + 0x488,ar5_00,ar6_00,uVar1);
  FUN_8c015ccc(ar4 + 0x414,uVar3,ar6_00,uVar1,ar5);
  uVar1 = FUN_8c015cd4(ar4 + 0x414,&DAT_8c13f750,ar6_00,uVar1,ar5);
  return uVar1;
}



/* Class_12b3b8_m1_0e79d4 @ 8c0e79d4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e7a06) */
/* WARNING: Removing unreachable block (ram,0x8c0e7a28) */
/* WARNING: Unknown calling convention */

undefined4 Class_12b3b8_m1_0e79d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c0e7a68 + ar4) != 0) {
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        if (*(int *)(DAT_8c0e7a6c + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
          a4 = *(int *)(DAT_8c0e7a6c + ar4 + iVar1 * 0x80 + iVar2 * 0x20);
          (**(code **)(*(int *)(a4 + 8) + 0x20))(a4,ar5,ar6,ar7);
        }
      }
    }
  }
  return 1;
}



/* ret_const_1_0e7a70 @ 8c0e7a70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0e7a70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0e7a78 @ 8c0e7a78 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e7bcc) */
/* WARNING: Removing unreachable block (ram,0x8c0e7a7c) */
/* WARNING: Removing unreachable block (ram,0x8c0e7a78) */
/* WARNING: Removing unreachable block (ram,0x8c0e7a7a) */
/* WARNING: Removing unreachable block (ram,0x8c0e7a7e) */
/* WARNING: Removing unreachable block (ram,0x8c0e7e8a) */
/* WARNING: Removing unreachable block (ram,0x8c0e7eaa) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e7a78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_stack_ffffff50;
  int ain0;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [20];
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  
  Vec3_set_zero(auStack_30,ar5,ar6,ar7);
  uStack_50 = DAT_8c13f764;
  uStack_4c = DAT_8c13f768;
  uStack_48 = DAT_8c13f76c;
  uStack_44 = DAT_8c13f770;
  uStack_40 = DAT_8c13f774;
  uStack_3c = DAT_8c13f778;
  uStack_38 = DAT_8c13f77c;
  uStack_34 = DAT_8c13f780;
  FUN_8c0162f8(auStack_74,ar5,ar6,ar7);
  iVar1 = ar4 + 0x228;
  FUN_8c0194c0(iVar1,ar5,ar6,ar7);
  FUN_8c219038(iVar1,ar5,ar6,ar7);
  FUN_8c21907e(iVar1,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0x414) + 0x14))((int *)(ar4 + 0x414),ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x410) == 0) {
    free_if_nonnull_wrap_0151a0(auStack_74,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  }
  else {
    if ((*(short *)(ar4 + 0x224) != -1) && (*(short *)(ar4 + 0x226) != -1)) {
      piVar4 = (int *)(ar4 + *(short *)(ar4 + 0x226) * 0x80 + *(short *)(ar4 + 0x224) * 0x20 + 0xa4)
      ;
      uVar2 = 0;
      FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffff50);
      FUN_8c019058(uVar2,ar5,ar6,ar7);
      FUN_8c016524(ar4 + 0x444,ar5,ar6,ar7);
      FUN_8c256210(1,ar5,ar6,ar7);
      if (*piVar4 != 0) {
        ar7 = 4;
        ar6 = 0x8c437c48;
        FUN_8c016318(auStack_74,&uStack_50,0x8c437c48,4,in_stack_ffffff50);
        FUN_8c016324(auStack_74,&uStack_60,ar6,ar7);
        uVar2 = 0x80000060;
        FUN_8c015198(auStack_74,0x80000060,ar6,ar7,in_stack_ffffff50);
        FUN_8c01538c(ar4 + 0x488,uVar2,ar6,ar7);
        ar5 = 1;
        FUN_8c014a94(ar4 + 0x488,1,ar6,ar7);
        iVar1 = get_field_24_05c284(*piVar4,ar5,ar6,ar7);
        if (iVar1 == 0) {
          uStack_60 = 0;
          uStack_5e = 0x1f;
          uStack_5c = 0;
          uStack_5a = 0;
          uStack_58 = 0xff;
          uStack_56 = 0;
          uStack_54 = 0xff;
          uStack_52 = 0x1f;
        }
        else if (iVar1 == 10) {
          iVar1 = (**(code **)(*(int *)(*piVar4 + 8) + 0x114))(*piVar4,ar5,ar6,ar7);
          if (iVar1 == 0x11) {
            uStack_60 = 0;
            uStack_5e = 0x3f;
            uStack_5c = 0;
            uStack_5a = 0x20;
            uStack_58 = 0xff;
            uStack_56 = 0x20;
            uStack_54 = 0xff;
            uStack_52 = 0x3f;
          }
          else {
            uStack_60 = 0;
            uStack_5e = 0x9f;
            uStack_5c = 0;
            uStack_5a = 0x80;
            uStack_58 = 0xff;
            uStack_56 = 0x80;
            uStack_54 = 0xff;
            uStack_52 = 0x9f;
          }
        }
        else if (iVar1 == 0xe) {
          uStack_60 = 0;
          uStack_5e = 0x7f;
          uStack_5c = 0;
          uStack_5a = 0x60;
          uStack_58 = 0xff;
          uStack_56 = 0x60;
          uStack_54 = 0xff;
          uStack_52 = 0x7f;
        }
        else if (iVar1 == 0xf) {
          uStack_60 = 0;
          uStack_5e = 0x5f;
          uStack_5c = 0;
          uStack_5a = 0x40;
          uStack_58 = 0xff;
          uStack_56 = 0x40;
          uStack_54 = 0xff;
          uStack_52 = 0x5f;
        }
        FUN_8c01636c(auStack_74,ar5,ar6,ar7);
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        if (*(int *)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4) != 0) {
          piVar4 = (int *)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4);
          ain0 = iVar3;
          (**(code **)(*(int *)(*piVar4 + 8) + 0x124))(*piVar4,ar5,ar6,ar7);
          (**(code **)(*(int *)(*piVar4 + 8) + 0x128))(*piVar4,ar5,ar6,ar7);
          (**(code **)(*(int *)(*piVar4 + 8) + 300))(*piVar4,ar5,ar6,ar7);
          vec3_copy_8c023d8c(auStack_30,auStack_80,ar6,ar7);
          ar5 = 0xffffffff;
          object_dtor_delete(auStack_80,0xffffffff,ar6,ar7);
          ar4_00 = *piVar4;
          FUN_8c0f4b44(ar4_00,ar5,ar6,ar7);
          FUN_8c219070(ar4_00,ar5,ar6,ar7);
          uVar2 = 0;
          FUN_8c256328(0,ar5,ar6,ar7,ain0);
          FUN_8c019058(uVar2,ar5,ar6,ar7);
          FUN_8c019128(uVar2,ar5,ar6,ar7);
          FUN_8c0190f0(uVar2,ar5,ar6,ar7);
          FUN_8c019160(uVar2,ar5,ar6,ar7);
          FUN_8c019198(uVar2,ar5,ar6,ar7);
          (**(code **)(*(int *)(*piVar4 + 8) + 0x3c))(*piVar4,ar5,ar6,ar7);
          FUN_8c256210(1,ar5,ar6,ar7);
        }
      }
    }
    free_if_nonnull_wrap_0151a0(auStack_74,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  }
  return 1;
}



/* ret_const_3f800000_0e8040 @ 8c0e8040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_3f800000_0e8040(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* s_Failed_to_set_texture_wrap_0e8048 @ 8c0e8048 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_to_set_texture_wrap_0e8048(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0e8068)(ar4 + DAT_8c0e8064,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0e806c @ 8c0e806c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0e806c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0e808c)(ar4 + DAT_8c0e8088,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e8090 @ 8c0e8090 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8090(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 *puVar1;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  (*(code *)PTR_FUN_8c0e80f8)(ar4,ar5,ar6,ar7,&uStack_10);
  puVar1 = (undefined2 *)(ar4 + DAT_8c0e80fc);
  *puVar1 = uStack_10;
  puVar1[1] = uStack_e;
  (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8100)(&uStack_10,0xffffffff,ar6,ar7);
  if ((*(short *)(DAT_8c0e80fc + ar4) != -1) && (*(short *)(DAT_8c0e8104 + ar4) != -1)) {
    (*(code *)PTR_FUN_8c0e8108)(ar4,ar5,ar4 + DAT_8c0e80fc,ar7);
    ar5 = 0;
  }
  return ar5;
}



/* FUN_8c0e810c @ 8c0e810c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8136) */
/* WARNING: Removing unreachable block (ram,0x8c0e815a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e810c(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  short *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  (*(code *)PTR_FUN_8c0e81a4)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0e81a8 + ar4 + ar6[1] * 0x80 + *ar6 * 0x20) = ar5;
  (*(code *)PTR_FUN_8c0e81ac)(ar4 + ar6[1] * 0x80 + *ar6 * 0x20 + DAT_8c0e81a8,ar5_00,ar6_00,ar7);
  *(int *)(DAT_8c0e81b0 + ar4) = *(int *)(DAT_8c0e81b0 + ar4) + 1;
  ar6[1] = -1;
  *ar6 = -1;
  return ar5;
}



/* FUN_8c0e81b4 @ 8c0e81b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e81b4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e81ec)(ar5,ar5,ar6,ar7);
  uVar1 = (**(code **)(*ar4 + 0x4c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e81f0 @ 8c0e81f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8208) */
/* WARNING: Removing unreachable block (ram,0x8c0e822c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e81f0(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)
           (DAT_8c0e826c +
           ar4 + *(short *)(DAT_8c0e8264 + ar4) * 0x80 + *(short *)(DAT_8c0e8268 + ar4) * 0x20);
  *(undefined4 *)(DAT_8c0e826c + ar4 + ar5[1] * 0x80 + *ar5 * 0x20) = 0;
  *(int *)(DAT_8c0e8270 + ar4) = *(int *)(DAT_8c0e8270 + ar4) + -1;
  *(undefined4 *)(DAT_8c0e8274 + ar4) = 1;
  return uVar1;
}



/* ret_const_1_0e8278 @ 8c0e8278 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0e8278(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0e8280 @ 8c0e8280 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e83b4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8280(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  undefined1 auStack_60 [4];
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [16];
  
  uStack_24 = 0;
  uVar2 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0e844c)(auStack_20,ar5,ar6,ar7);
  ar4_00 = (*(code *)PTR_FUN_8c0e8454)(DAT_8c0e8450,uVar2,ar6,ar7);
  uStack_30 = ar4_00;
  iStack_34 = (*(code *)PTR_FUN_8c0e8458)(ar5,uVar2,ar6,ar7);
  if (iStack_34 == 0) {
    iStack_38 = (*(code *)PTR_FUN_8c0e8460)(ar5,uVar2,ar6,ar7);
    if (iStack_38 == 1) {
      (*(code *)PTR_FUN_8c0e8464)(ar5,uVar2,ar6,ar7);
    }
    iStack_3c = (*(code *)PTR_FUN_8c0e8468)(ar5,uVar2,ar6,ar7);
    if (iStack_3c == 1) {
      (*(code *)PTR_FUN_8c0e846c)(ar5,uVar2,ar6,ar7);
    }
    iStack_40 = (*(code *)PTR_FUN_8c0e8470)(ar5,uVar2,ar6,ar7);
    if (iStack_40 == 1) {
      (*(code *)PTR_FUN_8c0e8474)(ar5,uVar2,ar6,ar7);
    }
    iStack_44 = (*(code *)PTR_FUN_8c0e8478)(ar5,uVar2,ar6,ar7);
    if (iStack_44 == 1) {
      (*(code *)PTR_FUN_8c0e847c)(ar5,uVar2,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0e8480)(ar5,uVar2,ar6,ar7);
    ar6_00 = auStack_1c;
    (*(code *)PTR_FUN_8c0e8484)(ar5,auStack_20,ar6_00,ar7);
    (*(code *)PTR_FUN_8c0e8488)(ar4,auStack_20,ar6_00,ar7,&uStack_5c);
    puVar1 = (undefined2 *)(ar4 + DAT_8c0e848c);
    *puVar1 = uStack_5c;
    puVar1[1] = uStack_5a;
    (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8490)(&uStack_5c,0xffffffff,ar6_00,ar7);
    if ((*(short *)(DAT_8c0e848c + ar4) != -1) && (*(short *)(DAT_8c0e8494 + ar4) != -1)) {
      uVar2 = *DAT_8c0e8498;
      iStack_48 = (*(code *)PTR_FUN_8c0e849c)(ar4_00,uVar2,ar6_00,ar7);
      if (iStack_48 == 4) {
        iStack_54 = (int)*(short *)(DAT_8c0e8494 + ar4);
        iStack_58 = (int)*(short *)(DAT_8c0e848c + ar4);
        if ((*(int *)(DAT_8c0e84a0 + ar4 + iStack_54 * 0x80 + iStack_58 * 0x20) != 0) &&
           (iStack_4c = (*(code *)PTR_FUN_8c0e84a4)(ar5,uVar2,ar6_00,ar7), iStack_4c == 1)) {
          (*(code *)PTR_FUN_8c0e84a8)(ar5,uVar2,ar6_00,ar7);
          (*(code *)PTR_FUN_8c0e84ac)(auStack_60,ar4 + DAT_8c0e848c,ar6_00,ar7);
          uStack_50 = (*(code *)PTR_FUN_8c0e84b0)(ar4,auStack_60,ar6_00,ar7);
          (*(code *)PTR_FUN_8c0e84b4)(ar5,uStack_50,ar6_00,ar7);
          (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8490)(auStack_60,0xffffffff,ar6_00,ar7);
          uVar2 = 3;
          (*(code *)PTR_FUN_8c0e84b8)(ar5,3,ar6_00,ar7);
          (*(code *)PTR_FUN_8c0e84c4)(ar5,uVar2,ar6_00,ar7);
        }
      }
    }
    uStack_2c = 1;
    (*(code *)PTR_Vec3_dtor_8c0e845c)(auStack_20,0xffffffff,ar6_00,ar7);
    uStack_28 = uStack_2c;
  }
  else {
    uStack_28 = 1;
    (*(code *)PTR_Vec3_dtor_8c0e845c)(auStack_20,0xffffffff,ar6,ar7);
  }
  return uStack_28;
}



/* FUN_8c0e84c8 @ 8c0e84c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined2 * FUN_8c0e84c8(undefined2 *ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  return ar4;
}



/* FUN_8c0e84d8 @ 8c0e84d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e84d8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(DAT_8c0e84f4 + *ar4))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e84f8 @ 8c0e84f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e84f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0e8524)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e8530)(ar4 + DAT_8c0e8528._4_4_,ar5,ar6,ar7);
  iVar1 = DAT_8c0e8534;
  *(undefined4 *)(DAT_8c0e8534 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0e8538 @ 8c0e8538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8538(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(DAT_8c0e8558 + *ar4))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e855c @ 8c0e855c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e855c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(DAT_8c0e8570 + ar4) == 1) {
    return 1;
  }
  return 0;
}



/* FUN_8c0e8574 @ 8c0e8574 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8574(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(*(int *)(ar4 + DAT_8c0e8594) + 0xc))((int *)(ar4 + DAT_8c0e8594),ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0e8598 @ 8c0e8598 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e865e) */
/* WARNING: Removing unreachable block (ram,0x8c0e8690) */
/* WARNING: Removing unreachable block (ram,0x8c0e879e) */
/* WARNING: Removing unreachable block (ram,0x8c0e876e) */
/* WARNING: Removing unreachable block (ram,0x8c0e87c6) */
/* WARNING: Removing unreachable block (ram,0x8c0e8612) */
/* WARNING: Removing unreachable block (ram,0x8c0e85c6) */
/* WARNING: Removing unreachable block (ram,0x8c0e8746) */
/* WARNING: Removing unreachable block (ram,0x8c0e85f2) */
/* WARNING: Removing unreachable block (ram,0x8c0e85e2) */
/* WARNING: Removing unreachable block (ram,0x8c0e8638) */
/* WARNING: Removing unreachable block (ram,0x8c0e873c) */
/* WARNING: Removing unreachable block (ram,0x8c0e8652) */
/* WARNING: Removing unreachable block (ram,0x8c0e86c4) */
/* WARNING: Removing unreachable block (ram,0x8c0e86ec) */
/* WARNING: Removing unreachable block (ram,0x8c0e8714) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8598(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar4 = 0;
  for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
      if (*(int *)(iVar5 * 0x80 + ar5) != -1) {
        ar6_00 = *(undefined4 *)(ar5 + iVar5 * 0x80 + 0x2c);
        uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c0e881c)
                          (DAT_8c0e8818,*(undefined4 *)(iVar5 * 0x80 + ar5),ar6_00,ar7);
        *(undefined4 *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20) = uVar1;
        if (*(int *)(iVar5 * 0x80 + ar5) == 0xf) {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(DAT_8c0e8824 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (**(code **)(DAT_8c0e8828 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar3 = (int)(short)uVar1;
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(DAT_8c0e8830 + *(int *)(iVar2 + 8)))(iVar2,DAT_8c0e882c,iVar3,ar7);
        }
        else {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(DAT_8c0e8824 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (**(code **)(DAT_8c0e8828 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar3 = (int)(short)uVar1;
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = DAT_8c0e882c;
          (**(code **)(DAT_8c0e8830 + *(int *)(iVar2 + 8)))(iVar2,DAT_8c0e882c,iVar3,ar7);
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,uVar1,iVar3,ar7);
          (*(code *)PTR_FUN_8c0e8834)
                    (ar4 + iVar6 * 0x80 + iVar7 * 0x20 + DAT_8c0e8820,uVar1,iVar3,ar7);
        }
        (*(code *)PTR_FUN_8c0e8838)
                  (ar4,*(undefined4 *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20),iVar3,ar7);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    }
  }
  *(int *)(DAT_8c0e883c + ar4) = iVar4;
  return 1;
}



/* FUN_8c0e8840 @ 8c0e8840 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e88ae) */
/* WARNING: Removing unreachable block (ram,0x8c0e8860) */
/* WARNING: Removing unreachable block (ram,0x8c0e8882) */
/* WARNING: Removing unreachable block (ram,0x8c0e88a4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8840(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * 0x80 + ar5) = 0xffffffff;
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if (*(int *)(DAT_8c0e88f4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20) != 0) {
        a4 = *(int *)(DAT_8c0e88f4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20);
        (**(code **)(DAT_8c0e88f8 + *(int *)(a4 + 8)))(a4,ar5 + iVar1 * 0x80,ar6,ar7);
        iVar1 = iVar1 + 1;
      }
    }
  }
  return 1;
}



/* noop_0e88fc @ 8c0e88fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e88fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0e8900 @ 8c0e8900 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8930) */
/* WARNING: Removing unreachable block (ram,0x8c0e8952) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8900(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(DAT_8c0e8990 + ar4) = 0;
  *(undefined4 *)(DAT_8c0e8994 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(int *)(DAT_8c0e8998 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
        (*(code *)PTR_FUN_8c0e899c)(ar4 + iVar1 * 0x80 + iVar2 * 0x20 + DAT_8c0e8998,ar5,ar6,ar7);
      }
    }
  }
  return 1;
}



/* FUN_8c0e89a0 @ 8c0e89a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e89a0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(DAT_8c0e89c0 + *ar4))(ar4,1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e89c4 @ 8c0e89c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8a54) */
/* WARNING: Removing unreachable block (ram,0x8c0e8a08) */
/* WARNING: Removing unreachable block (ram,0x8c0e89e0) */
/* WARNING: Removing unreachable block (ram,0x8c0e8a1e) */
/* WARNING: Removing unreachable block (ram,0x8c0e8a6e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e89c4(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 ar6_00;
  int iVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double in_dr2;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = 0xffffffff;
  FUN_8c10273c(&uStack_10,0xffffffff,0xffffffff,ar7);
  fVar2 = DAT_8c1264b8;
  fVar4 = _UNK_8c1264bc;
  if (cVar7 == '\0') {
    fVar2 = *(float *)ar5;
    fVar4 = DAT_8c1264b8;
  }
  if (fVar2 == fVar4) {
    FUN_8c0e84c8(s0,&uStack_10,ar6_00,ar7);
    free_if_nonnull_wrap_016660(&uStack_10,0xffffffff,ar6_00,ar7);
  }
  else {
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = (double)CONCAT44(*(float *)ar5,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *ar5;
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42f00000,(float)iVar1);
      }
      else {
        dVar3 = 206158464480.0;
      }
      if (cVar6 == '\0') {
        fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42480000,fVar2);
      }
      else {
        dVar3 = 123145319686144.0;
      }
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)in_dr2 >> 0x20) <
                SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = (double)CONCAT44(*(float *)ar5,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *ar5;
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42f00000,(float)iVar1);
        }
        else {
          dVar3 = 206158464480.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42480000,fVar2);
        }
        else {
          dVar3 = 123145319686144.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42dc0000,fVar2);
        }
        else {
          dVar3 = 32985353214976.0;
        }
        if (cVar6 == '\0') {
          bVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20) <
                  (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          uStack_10 = (undefined2)iVar1;
          break;
        }
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = (double)CONCAT44(*(float *)((int)ar5 + 4),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *(double *)((int)ar5 + 4);
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42be0000,(float)iVar1);
      }
      else {
        dVar3 = 8796095209216.0;
      }
      if (cVar6 == '\0') {
        fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42a00000,fVar2);
      }
      else {
        dVar3 = 14293653344256.0;
      }
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)in_dr2 >> 0x20) <
                SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = (double)CONCAT44(*(float *)((int)ar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)((int)ar5 + 4);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42be0000,(float)iVar1);
        }
        else {
          dVar3 = 8796095209216.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42a00000,fVar2);
        }
        else {
          dVar3 = 14293653344256.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42aa0000,fVar2);
        }
        else {
          dVar3 = 2.993931217461508e-78;
        }
        if (cVar6 == '\0') {
          bVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20) <
                  (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          uStack_e = (undefined2)iVar1;
          break;
        }
      }
    }
    FUN_8c0e84c8(s0,&uStack_10,ar6_00,ar7);
    free_if_nonnull_wrap_016660(&uStack_10,0xffffffff,ar6_00,ar7);
  }
  return 0;
}



/* FUN_8c0e8ae0 @ 8c0e8ae0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8b0c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8ae0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 ar6_00;
  int iVar1;
  int iVar2;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int iStack_18;
  int iStack_14;
  
  ar6_00 = 0xffffffff;
  (*(code *)PTR_FUN_8c0e8b64)(&uStack_1c,0xffffffff,0xffffffff,ar7);
  iVar1 = 0;
  do {
    if (2 < iVar1) {
LAB_8c0e8b40:
      (*(code *)PTR_FUN_8c0e8b6c)(s0,&uStack_1c,ar6_00,ar7);
      (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8b70)(&uStack_1c,0xffffffff,ar6_00,ar7);
      return 0;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      iStack_18 = iVar2;
      iStack_14 = iVar1;
      if (*(int *)(DAT_8c0e8b68 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) == 0) {
        uStack_1c = (undefined2)iVar2;
        uStack_1a = (undefined2)iVar1;
        goto LAB_8c0e8b40;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* get_field_410_0e8b74 @ 8c0e8b74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_410_0e8b74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e8b7c + ar4);
}



/* noop_0e8b80 @ 8c0e8b80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8b80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_0e8b84 @ 8c0e8b84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8b84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_0e8b8c @ 8c0e8b8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8b8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8b90 @ 8c0e8b90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8b90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_0e8b94 @ 8c0e8b94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8b94(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_0e8b9c @ 8c0e8b9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8b9c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8ba0 @ 8c0e8ba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8ba0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8ba4 @ 8c0e8ba4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8ba4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8ba8 @ 8c0e8ba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8ba8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_0e8bac @ 8c0e8bac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8bac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0e8bb4 @ 8c0e8bb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8bb4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_0e8bbc @ 8c0e8bbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8bbc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0e8bc4 @ 8c0e8bc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8bc4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0e8bcc @ 8c0e8bcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8bcc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_0e8bd4 @ 8c0e8bd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8bd4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_0e8bd8 @ 8c0e8bd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8bd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8be0 @ 8c0e8be0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8be0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8be4 @ 8c0e8be4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8be4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8be8 @ 8c0e8be8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8be8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_0e8bec @ 8c0e8bec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8bec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0e8bf4 @ 8c0e8bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8bf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0e8bfc;
  *(undefined4 *)(DAT_8c0e8bfc + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0e8c00 @ 8c0e8c00 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e8c00(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0e8c08;
}



/* FUN_8c0e8c0c @ 8c0e8c0c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e8c0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0e8c14;
}



/* get_field_10dc_0e8c18 @ 8c0e8c18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_10dc_0e8c18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e8c20 + ar4);
}



/* FUN_8c0e8c24 @ 8c0e8c24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8c24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0e8c30;
}



/* get_field_9d4_0e8c34 @ 8c0e8c34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_9d4_0e8c34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e8c3c + ar4);
}



/* get_field_acc_0e8c40 @ 8c0e8c40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_acc_0e8c40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e8c48 + ar4);
}



/* ret_const_0_0e8c4c @ 8c0e8c4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8c4c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0e8c54 @ 8c0e8c54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8c54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0e8c60;
}



/* FUN_8c0e8c64 @ 8c0e8c64 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8c66) */
/* WARNING: Removing unreachable block (ram,0x8c0e8c70) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8c64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float in_fr4;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(ar4 + 0x106c) = in_fr4;
  return 0x106c;
}



/* FUN_8c0e8c7c @ 8c0e8c7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8c7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0e8c88;
}



/* FUN_8c0e8c8c @ 8c0e8c8c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e8c8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0e8c94;
}



/* FUN_8c0e8c98 @ 8c0e8c98 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e8c98(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0e8ca0;
}



/* FUN_8c0e8ca4 @ 8c0e8ca4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8ca4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e8cc4)(ar4 + DAT_8c0e8cc0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e8cc8 @ 8c0e8cc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8cc8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0e8cd0;
  *(undefined4 *)(DAT_8c0e8cd0 + ar4) = ar5;
  return iVar1;
}



/* get_field_23250_0e8cd4 @ 8c0e8cd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_23250_0e8cd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e8cdc + ar4);
}



/* get_field_23254_0e8ce0 @ 8c0e8ce0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_23254_0e8ce0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e8ce8 + ar4);
}



/* FUN_8c0e8cec @ 8c0e8cec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8cec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0e8cf8;
}



/* FUN_8c0e8cfc @ 8c0e8cfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8cfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0de6c0(ar4 + 0x13b24,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c0e8d28 @ 8c0e8d28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8d28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0de6b0(ar4 + 0x13b70,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c0e8d54 @ 8c0e8d54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8d54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e8d7c)(ar4 + DAT_8c0e8d78,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e8d80 @ 8c0e8d80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8d82) */
/* WARNING: Removing unreachable block (ram,0x8c0e8d8c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8d80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float in_fr4;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(ar4 + 0xeb40) = in_fr4;
  return 0xeb40;
}



/* FUN_8c0e8d98 @ 8c0e8d98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8d98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0e8da0;
  *(undefined4 *)(DAT_8c0e8da0 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0e8da4 @ 8c0e8da4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e8da4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0e8dac;
}



/* FUN_8c0e8db0 @ 8c0e8db0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8db0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0e8dbc;
}



/* get_field_226f4_0e8dc0 @ 8c0e8dc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_226f4_0e8dc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0e8dc8 + ar4);
}



/* FUN_8c0e8dcc @ 8c0e8dcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8dcc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + ar5 * DAT_8c0e8de4 + DAT_8c0e8de8;
}



/* FUN_8c0e8dec @ 8c0e8dec callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e8dec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0e8df4;
}



/* FUN_8c0e8df8 @ 8c0e8df8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8e12) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e0c) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e04) */
/* WARNING: Removing unreachable block (ram,0x8c0e8dfe) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e02) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e06) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e10) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e14) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8df8(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*ar5 / 224.54546);
  iVar2 = (int)(ar5[2] / 150.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (9 < iVar2) {
    iVar2 = 9;
  }
  return *(undefined4 *)(iVar1 * 0x78 + ar4 + iVar2 * 0xc + 0x2281c);
}



/* FUN_8c0e8e74 @ 8c0e8e74 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8e8e) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e88) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e80) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e7a) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e7e) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e82) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e8c) */
/* WARNING: Removing unreachable block (ram,0x8c0e8e90) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8e74(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*ar5 / 224.54546);
  iVar2 = (int)(ar5[2] / 150.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (9 < iVar2) {
    iVar2 = 9;
  }
  return *(undefined4 *)(iVar1 * 0x78 + ar4 + iVar2 * 0xc + 0x22820);
}



/* FUN_8c0e8ef0 @ 8c0e8ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8ef0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0e8efc;
}



/* FUN_8c0e8f00 @ 8c0e8f00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e8f00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0e8f0c;
}



/* FUN_8c0e8f10 @ 8c0e8f10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8f10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_48_0e8f38_8c0e8f34)(ar4 + DAT_8c0e8f30,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_48_0e8f38 @ 8c0e8f38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_48_0e8f38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x48);
}



/* noop_0e8f40 @ 8c0e8f40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8f40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8f44 @ 8c0e8f44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8f44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0e8f48 @ 8c0e8f48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0e8f48(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* ret_const_0_0e8f4c @ 8c0e8f4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0e8f4c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0e8f54 @ 8c0e8f54 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8f54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126478,ar5,ar6,ar7);
  uVar3 = 0x8c437520;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437520,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126488,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43752c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43752c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126498,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437538;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437538,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264a8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437544;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437544,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1264b8 = CONCAT44(_UNK_8c1264bc,0x800000);
                    /* WARNING: Read-only address (ram,0x8c1264bc) is written */
  }
  else {
    _DAT_8c1264b8 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c015224(0x8c4377f4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4377e8;
  pcVar2 = free_if_nonnull_wrap_0153e4;
  global_list_push(uVar1,free_if_nonnull_wrap_0153e4,0x8c4377e8,ar7);
  uVar1 = FUN_8c102a08(0x8c437a78,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437a6c;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437a6c,ar7);
  uVar1 = FUN_8c102a08(0x8c437aa4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437a98;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437a98,ar7);
  uVar1 = FUN_8c102a08(0x8c437ad0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437ac4;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437ac4,ar7);
  uVar1 = FUN_8c102a08(0x8c437afc,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437af0;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437af0,ar7);
  uVar1 = FUN_8c10291c(0x8c437b28,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437b1c;
  pcVar2 = free_if_nonnull_wrap_0d63c0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d63c0,0x8c437b1c,ar7);
  uVar1 = FUN_8c0243b0(0x8c437b48,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,FUN_8c0ba180,0x8c437b3c,ar7);
  return uVar1;
}



/* FUN_8c0e91b8 @ 8c0e91b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0e91b8(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0e91ec)(ar4,ar5,ar6,ar7);
  ar4[0x39] = 0;
  ar4[0x3c] = 0;
  ar4[0x3b] = 0;
  ar4[0x3d] = 0;
  *ar4 = 0;
  return ar4;
}



/* free_if_nonnull_wrap_0e91f0 @ 8c0e91f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0e91f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0e9220 @ 8c0e9220 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e95ea) */
/* WARNING: Removing unreachable block (ram,0x8c0e95da) */
/* WARNING: Removing unreachable block (ram,0x8c0e92bc) */
/* WARNING: Removing unreachable block (ram,0x8c0e929c) */
/* WARNING: Removing unreachable block (ram,0x8c0e92a0) */
/* WARNING: Removing unreachable block (ram,0x8c0e92c0) */
/* WARNING: Removing unreachable block (ram,0x8c0e95de) */
/* WARNING: Removing unreachable block (ram,0x8c0e95ee) */
/* WARNING: Unknown calling convention */

int FUN_8c0e9220(int ar4,undefined4 ar5,int ar6,int *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *a7;
  char cVar8;
  byte bStack_40;
  undefined1 auStack_3c [36];
  
  puVar6 = auStack_3c;
  iVar3 = 0x10;
  puVar5 = PTR_DAT_8c0e92f4;
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar7 = ar5;
  a7 = ar7;
  uVar1 = (*(code *)PTR_FUN_8c0e92f8)(ar5,ar5,ar6,ar7);
  if (*(uint *)(DAT_8c0e92fc + ar4) != (uVar1 & 0xffff)) {
    if (*(uint *)(DAT_8c0e92fc + ar4) < 5) {
      (**(code **)(DAT_8c0e9300 + *ar7))(ar7,uVar7,ar6,a7);
      *(byte *)(DAT_8c0e9304 + ar4) = (byte)(((uint)bStack_40 << 0x1e) >> 0x1f);
      *(char *)(DAT_8c0e9304 + ar4) =
           *(char *)(DAT_8c0e9304 + ar4) - (char)((int)((uint)bStack_40 << 0x1f) >> 0x1f);
      uVar7 = (**(code **)(DAT_8c0e9308 + *ar7))(ar7,0xb,ar6,a7);
      *(char *)(ar4 + 0x4d) = (char)uVar7;
      *(undefined1 *)(ar4 + 0x4e) = 0;
      for (iVar3 = 0; iVar2 = (**(code **)(DAT_8c0e93c4 + *ar7))(ar7,10,ar6,a7), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (**(code **)(DAT_8c0e93b8 + *ar7))(ar7,10,iVar3,a7);
        iVar2 = (**(code **)(DAT_8c0e93bc + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
        if (iVar2 == 0x11) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (**(code **)(DAT_8c0e93b8 + *ar7))(ar7,10,iVar3,a7);
          iVar2 = (**(code **)(DAT_8c0e93c0 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
          if (iVar2 == 1) {
            *(char *)(ar4 + 0x4e) = *(char *)(ar4 + 0x4e) + '\x01';
          }
        }
      }
      *(undefined1 *)(ar4 + 0x4f) = 0;
      for (iVar3 = 0; iVar2 = (**(code **)(DAT_8c0e9480 + *ar7))(ar7,10,ar6,a7), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (**(code **)(DAT_8c0e9474 + *ar7))(ar7,10,iVar3,a7);
        iVar2 = (**(code **)(DAT_8c0e9478 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
        if (iVar2 == 0x12) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (**(code **)(DAT_8c0e9474 + *ar7))(ar7,10,iVar3,a7);
          iVar2 = (**(code **)(DAT_8c0e947c + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
          if (iVar2 == 1) {
            *(char *)(ar4 + 0x4f) = *(char *)(ar4 + 0x4f) + '\x01';
          }
        }
      }
      *(undefined1 *)(ar4 + 0x50) = 0;
      for (iVar3 = 0; iVar2 = (**(code **)(DAT_8c0e9514 + *ar7))(ar7,10,ar6,a7), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (**(code **)(DAT_8c0e9508 + *ar7))(ar7,10,iVar3,a7);
        iVar2 = (**(code **)(DAT_8c0e950c + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
        if (iVar2 == 0x13) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (**(code **)(DAT_8c0e9508 + *ar7))(ar7,10,iVar3,a7);
          iVar2 = (**(code **)(DAT_8c0e9510 + *(int *)(iVar2 + 8)))(iVar2,uVar7,ar6,a7);
          if (iVar2 == 1) {
            *(char *)(ar4 + 0x50) = *(char *)(ar4 + 0x50) + '\x01';
          }
        }
      }
      for (iVar3 = 0; iVar3 < 0x12; iVar3 = iVar3 + 1) {
        for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
          *(undefined1 *)(ar4 + iVar3 * 2 + iVar2 + 0x51) = 0;
          *(undefined1 *)(ar4 + iVar3 * 2 + iVar2 + 0x75) = 0;
        }
      }
    }
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
    iVar3 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c0e9648)
                      (*(undefined4 *)(DAT_8c0e9644 + ar4),DAT_8c0e9640,ar6,a7);
    if (iVar3 == DAT_8c0e964c) {
      *(undefined4 *)(ar4 + 4) = 1;
    }
    iVar3 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c0e9648)
                      (*(undefined4 *)(DAT_8c0e9644 + ar4),0x5a,ar6,a7);
    if (iVar3 == 0x4b) {
      *(undefined4 *)(ar4 + 8) = 1;
    }
    uVar7 = 100;
    iVar3 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c0e9648)
                      (*(undefined4 *)(DAT_8c0e9644 + ar4),100,ar6,a7);
    if (iVar3 == 0x41) {
      *(undefined4 *)(ar4 + 0xc) = 1;
    }
    *(undefined1 *)(DAT_8c0e9650 + ar4) = 0;
    (**(code **)(DAT_8c0e9654 + *ar7))(ar7,uVar7,ar6,a7);
    cVar8 = -(char)((int)((uint)bStack_40 << 0x1f) >> 0x1f) -
            (char)((int)((uint)bStack_40 << 0x1e) >> 0x1f);
    if (cVar8 != *(char *)(DAT_8c0e9658 + ar4)) {
      *(undefined1 *)(DAT_8c0e9650 + ar4) = 1;
    }
    *(char *)(DAT_8c0e9658 + ar4) = cVar8;
  }
  *(undefined4 *)(DAT_8c0e965c + ar4) = 1;
  *(undefined4 *)(DAT_8c0e9660 + ar4) = 1;
  uVar1 = (*(code *)PTR_FUN_8c0e9664)(ar5,uVar7,ar6,a7);
  iVar3 = DAT_8c0e9644;
  *(uint *)(DAT_8c0e9644 + ar4) = uVar1 & 0xffff;
  return iVar3;
}



/* FUN_8c0e9668 @ 8c0e9668 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e9668(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_8c0e968c;
  iVar2 = 2;
  if (*(char *)(DAT_8c0e968c + ar4) < '\x02') {
    *(char *)(DAT_8c0e968c + ar4) = *(char *)(DAT_8c0e968c + ar4) + '\x01';
    iVar2 = iVar1;
  }
  return iVar2;
}



/* FUN_8c0e9690 @ 8c0e9690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e9690(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_8c0e96b4;
  iVar2 = (int)*(char *)(DAT_8c0e96b4 + ar4);
  if (0 < *(char *)(DAT_8c0e96b4 + ar4)) {
    *(char *)(DAT_8c0e96b4 + ar4) = *(char *)(DAT_8c0e96b4 + ar4) + -1;
    iVar2 = iVar1;
  }
  return iVar2;
}



/* FUN_8c0e96b8 @ 8c0e96b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e97a6) */
/* WARNING: Removing unreachable block (ram,0x8c0e97a8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e96b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined1 *)(ar4 + 0x38) = 0;
  *(undefined1 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 0x45) = 0;
  *(undefined1 *)(ar4 + 0x3a) = 0;
  *(undefined4 *)(ar4 + 0xb0) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 0x4d) = 0;
  *(undefined1 *)(ar4 + 0x4e) = 0;
  *(undefined1 *)(ar4 + 0x4f) = 0;
  *(undefined1 *)(ar4 + 0x50) = 0;
  *(undefined1 *)(ar4 + 0xbe) = 0;
  *(undefined4 *)(ar4 + 0xc0) = 0;
  *(undefined4 *)(ar4 + 0xc4) = 0;
  *(undefined4 *)(ar4 + 200) = 0;
  *(undefined4 *)(ar4 + 0xcc) = 0;
  *(undefined4 *)(ar4 + 0xd0) = 0;
  *(undefined4 *)(ar4 + 0xac) = 4;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined1 *)(ar4 + 0xbc) = 0;
  *(undefined1 *)(ar4 + 0xbd) = 0;
  *(undefined1 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0xb4) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0xa4) = 0;
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x9c) = 0;
  }
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      *(undefined4 *)(iVar1 * 0xc + ar4 + iVar2 * 4 + 0x14) = 0x47c35000;
    }
  }
  for (iVar1 = 0; iVar1 < 0x12; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
      *(undefined1 *)(ar4 + iVar1 * 2 + iVar2 + 0x51) = 0;
      *(undefined1 *)(ar4 + iVar1 * 2 + iVar2 + 0x75) = 0;
    }
  }
  return 0x12;
}



/* FUN_8c0e983c @ 8c0e983c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e983c(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0e9880)(ar4,(int)*ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e9884)(ar4,(int)ar5[1],ar6,ar7);
  ar4[0x3d] = ar5[2];
  *ar4 = ar5[3];
  ar4[0x3b] = ar5[4];
  return 0x3b;
}



/* FUN_8c0e9888 @ 8c0e9888 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e9888(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x3c) = (undefined1)ar5;
  return 0x3c;
}



/* FUN_8c0e9890 @ 8c0e9890 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e9890(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x39) = (undefined1)ar5;
  return 0x39;
}



/* FUN_8c0e9898 @ 8c0e9898 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e9898(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = (*(code *)PTR_FUN_8c0e98e0)(ar4,ar5,ar6,ar7);
  *ar5 = (char)uVar2;
  uVar2 = (*(code *)PTR_FUN_8c0e98e4)(ar4,ar5_00,ar6,ar7);
  ar5[1] = (char)uVar2;
  ar5[2] = ar4[0x3d];
  ar5[3] = *ar4;
  cVar1 = ar4[0x3b];
  ar5[4] = cVar1;
  return (int)cVar1;
}



/* FUN_8c0e98e8 @ 8c0e98e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e98e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x3c);
}



/* FUN_8c0e98f0 @ 8c0e98f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e98f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x39);
}



/* FUN_8c0e98f8 @ 8c0e98f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e98f8(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  return 0;
}



/* FUN_8c0e9910 @ 8c0e9910 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0e9910(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  return ar4;
}



/* FUN_8c0e992c @ 8c0e992c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e992c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264c0,ar5,ar6,ar7);
  uVar3 = 0x8c438440;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c438440,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264d0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43844c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43844c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264e0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c438458;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c438458,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264f0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c438464,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126500 = CONCAT44(_UNK_8c126504,0x800000);
                    /* WARNING: Read-only address (ram,0x8c126504) is written */
  }
  else {
    _DAT_8c126500 = 0xffffffff00800000;
  }
  return 0x8c125864;
}


