/* Seaman (USA) region 0x8c0e0000-0x8c0f0000 (Ghidra decompiler) */

/* FUN_8c0e000c @ 8c0e000c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e000c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0e003c)(ar4 + DAT_8c0e0038,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e0048)(ar4 + DAT_8c0e0040._4_4_,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e004c @ 8c0e004c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e004c(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  uint a5_00;
  
  (*(code *)PTR_FUN_8c0e00c8)(ar4,ar5,ar6,ar7);
  a5 = 0;
  (*(code *)PTR_FUN_8c0e00d0)((int)ar4 + DAT_8c0e00cc,0,ar6,ar7);
  (*(code *)PTR_FUN_8c0e00d4)((int)ar4 + DAT_8c0e00cc,a5,ar6,ar7);
  (*(code *)PTR_noop_0d98f4_8c0e00dc)((int)ar4 + DAT_8c0e00d8,a5,ar6,ar7);
  a5_00 = ar5;
  (*(code *)PTR_FUN_8c0e00e4)((int)ar4 + DAT_8c0e00e0,ar5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    (**(code **)(DAT_8c0e00e8 + *ar4))(ar4,a5_00,ar6,ar7);
  }
  else {
    (**(code **)(*ar4 + 0x7c))(ar4,a5_00,ar6,ar7);
  }
  return 0;
}



/* FUN_8c0e00ec @ 8c0e00ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e00ec(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_noop_0d09f8_8c0e011c)((int)ar4 + DAT_8c0e0118,ar5,ar6,ar7);
  (**(code **)(DAT_8c0e0120 + *ar4))(ar4,ar5,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e02e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e030c) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e030c) = CONCAT44(in_fr4,in_fr5);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e0310) = DAT_8c0e0314;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e0310) = CONCAT44(DAT_8c0e0318,DAT_8c0e0314);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e0318) = DAT_8c0e031c;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e0318) = CONCAT44(_FUN_8c0e0320,DAT_8c0e031c);
  }
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
  uint a5;
  
  (*(code *)PTR_FUN_8c0e04e4)(ar4,ar5,ar6,ar7);
  a5 = ar5;
  (*(code *)PTR_FUN_8c0e04ec)(ar4 + DAT_8c0e04e8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e04f4)(ar4 + DAT_8c0e04f0,a5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = (*(code *)PTR_noop_0d0a34_8c0e04fc)(ar4 + DAT_8c0e04f8,a5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0e0504)(ar4 + DAT_8c0e0500,a5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0e0508 @ 8c0e0508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0508(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a5;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c0e0560)(ar4 + DAT_8c0e055c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e0568)(ar4 + DAT_8c0e0564,a5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = (*(code *)PTR_noop_0d0a38_8c0e0570)(ar4 + DAT_8c0e056c,a5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0e0578)(ar4 + DAT_8c0e0574,a5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0614(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *a4;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar3;
  undefined4 unaff_r14;
  int iVar4;
  undefined1 *puVar5;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = in_PR;
  uVar2 = ar5;
  uVar1 = (*(code *)PTR_get_field_bb4_0e06e4_8c0e06c8)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(puVar5 + -100) = uVar1;
  iVar3 = *(int *)(puVar5 + -100);
  (*(code *)PTR_FUN_8c0e06cc)(puVar5 + -0x58,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0e06d0)(puVar5 + -0x58,ar5,ar6,ar7);
  iVar4 = 0;
  while( true ) {
    if (iVar3 <= iVar4) {
      uVar2 = (*(code *)PTR_FUN_8c0e06e0)(ar4,ar5,ar6,ar7);
      *(undefined4 *)(puVar5 + -0x6c) = uVar2;
      *(undefined4 *)(puVar5 + -0x60) = *(undefined4 *)(puVar5 + -0x6c);
      (*(code *)PTR_Class_129974_m0_016c2c_8c0e06dc)(puVar5 + -0x58,0xffffffff,ar6,ar7);
      return *(undefined4 *)(puVar5 + -0x60);
    }
    *(int *)(puVar5 + -0x70) = iVar4;
    a4 = (int *)(ar4 + *(int *)(puVar5 + -0x70) * DAT_8c0e06d4 + DAT_8c0e06d8);
    uVar2 = (**(code **)(*a4 + 0x14))(a4,puVar5 + -0x58,ar6,ar7);
    *(undefined4 *)(puVar5 + -0x68) = uVar2;
    if (*(int *)(puVar5 + -0x68) == 1) break;
    iVar4 = iVar4 + 1;
  }
  *(undefined4 *)(puVar5 + -0x5c) = 2;
  (*(code *)PTR_Class_129974_m0_016c2c_8c0e06dc)(puVar5 + -0x58,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar5 + -0x5c);
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

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0e0764(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*DAT_8c0e0848 == '\0') {
    *DAT_8c0e084c = 0;
    *DAT_8c0e0848 = '\x01';
  }
  if (*DAT_8c0e0850 == '\0') {
    *DAT_8c0e0854 = 0;
    *DAT_8c0e0850 = '\x01';
  }
  puVar1 = (undefined8 *)*DAT_8c0e0854;
  if (puVar1 == (undefined8 *)0x0) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0e085c,*(undefined4 *)(ar4 + DAT_8c0e0858));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e0858);
      dVar4 = (double)CONCAT44((float)DAT_8c0e0860,DAT_8c0e085c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar4 - dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0e0858) = fVar2;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0e0858) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar2 = *(float *)(ar4 + DAT_8c0e0858);
    }
    puVar1 = &DAT_8c0e0860;
    fVar3 = (float)DAT_8c0e0860;
    fVar5 = DAT_8c0e0860._4_4_;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = fVar2;
      fVar5 = (float)DAT_8c0e0860;
    }
    if (in_FPSCR_PR == '\0' && fVar3 < fVar5) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0e0858) = DAT_8c0e0860._4_4_;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0e0858) = CONCAT44(DAT_8c0e0868,DAT_8c0e0860._4_4_);
      }
      *DAT_8c0e084c = 0;
      puVar1 = (undefined8 *)0x1;
      *DAT_8c0e0854 = 1;
    }
  }
  else if (puVar1 == (undefined8 *)0x1) {
    *DAT_8c0e084c = *DAT_8c0e084c + 1;
    puVar1 = (undefined8 *)0x5a;
    if (0x5a < *DAT_8c0e084c) {
      *(undefined4 *)(DAT_8c0e0868 + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0e0858) = (float)DAT_8c0e0860;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0e0858) = CONCAT44(DAT_8c0e0860._4_4_,(float)DAT_8c0e0860);
      }
      puVar1 = *(undefined8 **)(DAT_8c0e086c + ar4);
      if (puVar1 != (undefined8 *)0xffffffff) {
        (*(code *)PTR_FUN_8c0e0874)(DAT_8c0e0870,*(undefined4 *)(DAT_8c0e086c + ar4),ar6,ar7);
        (*(code *)PTR_FUN_8c0e0878)(DAT_8c0e0870,*(undefined4 *)(DAT_8c0e086c + ar4),ar6,ar7);
        *(undefined4 *)(DAT_8c0e086c + ar4) = 0xffffffff;
        puVar1 = (undefined8 *)0x0;
        *DAT_8c0e0854 = 0;
      }
    }
  }
  return puVar1;
}



/* FUN_8c0e087c @ 8c0e087c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e087c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  fVar1 = DAT_8c0e089c;
  fVar2 = _FUN_8c0e08a0;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c0e0898);
    fVar2 = DAT_8c0e089c;
  }
  if (in_FPSCR_PR == '\0' && fVar2 < fVar1) {
    return 0;
  }
  return 1;
}



/* FUN_8c0e08a0 @ 8c0e08a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e08a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  iVar1 = DAT_8c0e08ac;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e08ac) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e08ac) = CONCAT44(in_fr4,in_fr5);
  }
  return iVar1;
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

uint FUN_8c0e08f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *in_stack_00000000;
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc;
  if (*(int *)(DAT_8c0e0948 + ar4) == 1) {
    uStack_4 = uStack_4 | 2;
  }
  if (*(int *)(DAT_8c0e094c + ar4) == 1) {
    uStack_4 = uStack_4 | 1;
  }
  *in_stack_00000000 = uStack_4;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0988(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined4 *a5;
  undefined1 *a6;
  undefined1 *a7;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  float fVar3;
  float fVar5;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar6;
  undefined4 in_PR;
  int iVar7;
  int iVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  double dVar4;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = auStack_4;
  }
  else {
    puVar2 = auStack_8;
  }
  *(undefined4 *)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(puVar2 + -8) = unaff_r13;
  *(undefined4 *)(puVar2 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar2 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar2 + -0x14) = in_PR;
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0e0b00)(puVar2 + -0x24,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0e0b00)(puVar2 + -0x34,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0e0b04,*ar5);
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c0e0b08,DAT_8c0e0b04);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar4 / dVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0e0b08,ar5[2]);
  }
  else {
    dVar4 = (double)CONCAT44(_DAT_8c0e0b0c,DAT_8c0e0b08);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)dVar4 >> 0x20);
    fVar3 = SUB84(dVar4,0) / fVar5;
    dVar4 = (double)CONCAT44(fVar5,fVar3);
    iVar8 = (int)fVar3;
  }
  else {
    dVar4 = dVar4 / dVar4;
    iVar8 = (int)dVar4;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (10 < iVar7) {
    iVar7 = 10;
  }
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (9 < iVar8) {
    iVar8 = 9;
  }
  *(int *)(puVar2 + -0x44) = iVar7;
  *(int *)(puVar2 + -0x48) = iVar8;
  if (*(int *)(_DAT_8c0e0b0c +
              (*(int *)(puVar2 + -0x44) * 0x10 - *(int *)(puVar2 + -0x44)) * 8 + ar4 +
              (*(int *)(puVar2 + -0x48) * 2 + *(int *)(puVar2 + -0x48)) * 4) != 0) {
    *(int *)(puVar2 + -0x4c) = iVar7;
    *(int *)(puVar2 + -0x50) = iVar8;
    if (*(int *)(_DAT_8c0e0b0c +
                (*(int *)(puVar2 + -0x4c) * 0x10 - *(int *)(puVar2 + -0x4c)) * 8 + ar4 +
                (*(int *)(puVar2 + -0x50) * 2 + *(int *)(puVar2 + -0x50)) * 4) != 1) {
      a7 = puVar2 + -0x34;
      a6 = puVar2 + -0x24;
      (*(code *)PTR_FUN_8c0e0b20)(ar4 + DAT_8c0e0b18._4_4_,ar5,a6,a7);
      (*(code *)PTR_FUN_8c0e0b24)(puVar2 + -0x24,puVar2 + -0x34,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar2 + -0x40) = (int)((ulonglong)dVar4 >> 0x20);
        in_fr15 = *(float *)(puVar2 + -0x40);
        dVar4 = (double)CONCAT44(DAT_8c0e0b28,SUB84(dVar4,0));
      }
      else {
        *(double *)(puVar2 + -0x40) = dVar4;
        in_xd14 = *(undefined8 *)(puVar2 + -0x40);
        dVar4 = (double)CONCAT44(_FUN_8c0e0b2c,DAT_8c0e0b28);
      }
      if (in_FPSCR_PR == '\0') {
        bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
      }
      fVar3 = in_fr15;
      if ((bVar6) && (fVar3 = DAT_8c0e0b28, in_FPSCR_SZ != '\0')) {
        in_xd14 = CONCAT44(_FUN_8c0e0b2c,DAT_8c0e0b28);
        fVar3 = in_fr15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar2 + -0x3c) = fVar3;
      }
      else {
        *(undefined8 *)(puVar2 + -0x3c) = in_xd14;
      }
      (*(code *)PTR_Vec3_dtor_8c0e0b14)(puVar2 + -0x34,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c0e0b14)(puVar2 + -0x24,0xffffffff,a6,a7);
      return 0x1c;
    }
  }
  *(int *)(puVar2 + -0x54) = iVar7;
  *(int *)(puVar2 + -0x58) = iVar8;
  puVar1 = (undefined8 *)
           ((*(int *)(puVar2 + -0x54) * 0x10 - *(int *)(puVar2 + -0x54)) * 8 + ar4 +
            (*(int *)(puVar2 + -0x58) * 2 + *(int *)(puVar2 + -0x58)) * 4 + DAT_8c0e0b10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar2 + -0x38) = *(undefined4 *)puVar1;
  }
  else {
    *(undefined8 *)(puVar2 + -0x38) = *puVar1;
  }
  (*(code *)PTR_Vec3_dtor_8c0e0b14)(puVar2 + -0x34,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0e0b14)(puVar2 + -0x24,0xffffffff,ar6,ar7);
  return 0x20;
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0bd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float in_fr1;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + 0x10);
  }
  if (in_FPSCR_PR == '\0' && 0.0 < in_fr1) {
    return 1;
  }
  return 0;
}



/* s_GRAPHICS_ENV_0e0bee @ 8c0e0be8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e0bee(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint a6;
  undefined4 uVar1;
  int a7;
  
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
  a7 = ar4;
  (*(code *)PTR_FUN_8c0e0d38)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d50,
             PTR_s_GRAPHICS_COMMON_8c0e0d2c + DAT_8c0e0d30,ar4);
  a6 = (uint)(byte)ar6;
  (*(code *)PTR_s_GRAPHICS_ENV_0d57ee_8c0e0d58)(ar4 + DAT_8c0e0d54,ar5,a6,a7);
  (*(code *)PTR_s_GRAPHICS_ENV_0d076c_8c0e0d60)(ar4 + DAT_8c0e0d5c,ar5,a6,a7);
  uVar1 = (*(code *)PTR_s_GRAPHICS_ENV_0d9912_8c0e0d68)(ar4 + DAT_8c0e0d64,ar5,a6,a7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e0f48(int *ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *a5;
  undefined4 a5_00;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int iVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int a4;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar8;
  undefined4 in_fr3;
  double dVar9;
  double in_dr14;
  double dVar10;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  double dVar7;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar4 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar4 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar4 + -0x18) = in_PR;
  uVar1 = (*(code *)PTR_get_field_300_0bf154_8c0e1254)((int)ar4 + DAT_8c0e1250,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x48) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c0e1258)((int)ar4 + DAT_8c0e1250,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x4c) = uVar1;
  a4 = *(int *)((int)puVar4 + -0x4c);
  (*(code *)PTR_Vec3_ctor_zero_8c0e125c)((undefined1 *)((int)puVar4 + -0x28),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0e125c)((undefined1 *)((int)puVar4 + -0x38),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_xyz_8c0e126c)((undefined1 *)((int)puVar4 + -0x44),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1280)((int)ar4 + DAT_8c0e127c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar4 + -0x50) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x50),in_fr3);
  }
  else {
    *(undefined8 *)((int)puVar4 + -0x50) = in_dr0;
    dVar9 = *(double *)((int)puVar4 + -0x50);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0e1288,*(undefined4 *)((int)ar4 + DAT_8c0e1284));
  }
  else {
    in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c0e1284);
    dVar7 = (double)CONCAT44(DAT_8c0e128c,DAT_8c0e1288);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    fVar5 = SUB84(dVar7,0) * fVar6;
    dVar7 = (double)CONCAT44(fVar6,fVar5);
    bVar11 = (float)((ulonglong)dVar9 >> 0x20) < fVar5;
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar11 = dVar9 < dVar7;
  }
  if (bVar11) {
    (**(code **)(DAT_8c0e128c + *ar4))(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0e1294)((int)ar4 + DAT_8c0e1290,ar5,ar6,ar7);
  }
  iVar2 = (int)ar4 + DAT_8c0e1298;
  uVar1 = (*(code *)PTR_FUN_8c0e129c)((int)ar4 + DAT_8c0e1290,iVar2,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x54) = uVar1;
  if (*(int *)((int)puVar4 + -0x54) == 0) {
    (*(code *)PTR_FUN_8c0e12a4)((int)ar4 + DAT_8c0e12a0,iVar2,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c0e12a8)((int)ar4 + DAT_8c0e12a0,iVar2,ar6,ar7);
    (*(code *)PTR_FUN_8c0e12ac)((int)ar4 + DAT_8c0e1290,iVar2,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0e12b0)((int)ar4 + DAT_8c0e12a0,iVar2,ar6,ar7);
  uVar1 = (*(code *)PTR_get_field_14_0e1318_8c0e12b4)((int)ar4 + DAT_8c0e12a0,iVar2,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x58) = uVar1;
  if (*(int *)((int)puVar4 + -0x58) == 1) {
    uVar1 = (*(code *)PTR_get_field_300_0bf154_8c0e1254)((int)ar4 + DAT_8c0e1250,iVar2,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0x5c) = uVar1;
    iVar2 = *(int *)((int)puVar4 + -0x5c);
    for (iVar3 = 0; uVar1 = SUB84(in_dr14,0), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      ar7 = (undefined1 *)((int)puVar4 + -0x20);
      ar6 = (undefined1 *)((int)puVar4 + -0x24);
      a5 = (undefined1 *)((int)puVar4 + -0x28);
      (*(code *)PTR_FUN_8c0e12b8)(a4,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x24),uVar1);
      }
      else {
        in_dr14 = *(double *)((int)puVar4 + -0x24);
      }
      (*(code *)PTR_FUN_8c0e12bc)((int)ar4 + DAT_8c0e1290,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x60) = (int)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x60),SUB84(dVar7,0));
      }
      else {
        *(double *)((int)puVar4 + -0x60) = dVar7;
        dVar7 = *(double *)((int)puVar4 + -0x60);
      }
      if (in_FPSCR_PR == '\0') {
        bVar11 = (float)((ulonglong)dVar7 >> 0x20) < (float)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        bVar11 = dVar7 < in_dr14;
      }
      if (!bVar11) {
        uVar1 = (**(code **)(DAT_8c0e12c0 + *(int *)(a4 + 8)))(a4,a5,ar6,ar7);
        *(undefined4 *)((int)puVar4 + -100) = uVar1;
        if (*(int *)((int)puVar4 + -100) == 1) {
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(DAT_8c0e1278,*(undefined4 *)((int)puVar4 + -0x28));
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar4 + -0x28);
            dVar7 = (double)CONCAT44(DAT_8c0e127c,DAT_8c0e1278);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 - dVar7,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar4 + -0x28) = fVar5;
            dVar7 = (double)CONCAT44(DAT_8c0e1270._4_4_,*(undefined4 *)((int)puVar4 + -0x24));
          }
          else {
            *(undefined8 *)((int)puVar4 + -0x28) = in_xd0;
            in_xd0 = *(undefined8 *)((int)puVar4 + -0x24);
            dVar7 = (double)CONCAT44(DAT_8c0e1278,DAT_8c0e1270._4_4_);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 - dVar7,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar4 + -0x24) = fVar5;
            dVar7 = (double)CONCAT44((undefined4)DAT_8c0e1270,*(undefined4 *)((int)puVar4 + -0x20));
          }
          else {
            *(undefined8 *)((int)puVar4 + -0x24) = in_xd0;
            in_xd0 = *(undefined8 *)((int)puVar4 + -0x20);
            dVar7 = (double)CONCAT44(DAT_8c0e1270._4_4_,(undefined4)DAT_8c0e1270);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 - dVar7,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar4 + -0x20) = fVar5;
            *(undefined4 *)((int)puVar4 + -0x38) = *(undefined4 *)((int)puVar4 + -0x28);
            uVar8 = CONCAT44(*(undefined4 *)((int)puVar4 + -0x20),fVar5);
            *(undefined4 *)((int)puVar4 + -0x30) = *(undefined4 *)((int)puVar4 + -0x20);
          }
          else {
            *(undefined8 *)((int)puVar4 + -0x20) = in_xd0;
            *(undefined8 *)((int)puVar4 + -0x38) = *(undefined8 *)((int)puVar4 + -0x28);
            uVar8 = *(undefined8 *)((int)puVar4 + -0x20);
            *(undefined8 *)((int)puVar4 + -0x30) = uVar8;
          }
          (*(code *)PTR_Vec3_length_sq_8c0e12c4)((undefined1 *)((int)puVar4 + -0x38),a5,ar6,ar7);
          uVar1 = SUB84(dVar9,0);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar4 + -0x68) = (int)((ulonglong)uVar8 >> 0x20);
            dVar7 = (double)CONCAT44(DAT_8c0e12c8,*(undefined4 *)((int)puVar4 + -0x68));
          }
          else {
            *(undefined8 *)((int)puVar4 + -0x68) = uVar8;
            in_xd0 = *(undefined8 *)((int)puVar4 + -0x68);
            dVar7 = (double)CONCAT44(PTR_Vec3_length_8c0e12cc,DAT_8c0e12c8);
          }
          if (in_FPSCR_PR == '\0' && SUB84(dVar7,0) < (float)((ulonglong)dVar7 >> 0x20)) {
            (*(code *)PTR_Vec3_length_8c0e12cc)((undefined1 *)((int)puVar4 + -0x28),a5,ar6,ar7);
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(DAT_8c0e1270._4_4_,SUB84(dVar7,0));
            }
            else {
              dVar9 = (double)CONCAT44(DAT_8c0e1278,DAT_8c0e1270._4_4_);
            }
            fVar5 = (float)((ulonglong)dVar9 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              dVar10 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) - fVar5,SUB84(in_dr14,0)
                                       );
            }
            else {
              dVar10 = in_dr14 - dVar9;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(fVar5,DAT_8c0e12d0);
            }
            else {
              in_xd0 = CONCAT44(DAT_8c0e12d4,DAT_8c0e12d0);
            }
            fVar5 = (float)((ulonglong)dVar10 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              fVar6 = SUB84(dVar9,0) - fVar5;
            }
            else {
              fVar6 = SUB84(dVar9 - dVar10,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(DAT_8c0e12d0,fVar6);
            }
            else {
              dVar9 = (double)CONCAT44(DAT_8c0e12d4,DAT_8c0e12d0);
            }
            if (in_FPSCR_PR == '\0') {
              fVar6 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar9 / dVar9,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(DAT_8c0e12d4,fVar6);
            }
            else {
              dVar9 = (double)CONCAT44(DAT_8c0e12d8,DAT_8c0e12d4);
            }
            if (in_FPSCR_PR == '\0') {
              dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0),
                                       SUB84(dVar9,0));
            }
            else {
              dVar9 = dVar9 - dVar9;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar4 + -0x78) = (int)((ulonglong)dVar9 >> 0x20);
              dVar10 = (double)CONCAT44(fVar5,*(undefined4 *)((int)puVar4 + -0x78));
              dVar9 = (double)(ulonglong)*(uint *)((int)puVar4 + -0x78);
            }
            else {
              *(double *)((int)puVar4 + -0x78) = dVar9;
              in_xd14 = *(double *)((int)puVar4 + -0x78);
              in_xd0 = *(undefined8 *)((int)puVar4 + -0x78);
            }
            if (in_FPSCR_PR == '\0' && SUB84(dVar9,0) < 0.0) {
              if (in_FPSCR_SZ == '\0') {
                dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),DAT_8c0e12d8);
              }
              else {
                in_xd14 = (double)CONCAT44(DAT_8c0e12dc,DAT_8c0e12d8);
              }
            }
            fVar5 = SUB84(dVar10,0);
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x28),uVar1);
              dVar7 = (double)CONCAT44(fVar5,DAT_8c0e12dc);
            }
            else {
              dVar9 = *(double *)((int)puVar4 + -0x28);
              in_xd0 = CONCAT44(_DAT_8c0e12e0,DAT_8c0e12dc);
              dVar7 = in_xd14;
            }
            if (in_FPSCR_PR == '\0') {
              dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) *
                                       (float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0),
                                       SUB84(dVar9,0));
            }
            else {
              dVar9 = dVar9 * dVar7 * dVar7;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar4 + -0x28) = (int)((ulonglong)dVar9 >> 0x20);
              dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x24),SUB84(dVar9,0));
              dVar7 = (double)CONCAT44(fVar5,DAT_8c0e12dc);
            }
            else {
              *(double *)((int)puVar4 + -0x28) = dVar9;
              dVar9 = *(double *)((int)puVar4 + -0x24);
              in_xd0 = CONCAT44(_DAT_8c0e12e0,DAT_8c0e12dc);
              dVar7 = in_xd14;
            }
            if (in_FPSCR_PR == '\0') {
              dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) *
                                       (float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0),
                                       SUB84(dVar9,0));
            }
            else {
              dVar9 = dVar9 * dVar7 * dVar7;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar4 + -0x24) = (int)((ulonglong)dVar9 >> 0x20);
              dVar7 = (double)CONCAT44(DAT_8c0e12dc,*(undefined4 *)((int)puVar4 + -0x20));
            }
            else {
              *(double *)((int)puVar4 + -0x24) = dVar9;
              in_xd0 = *(undefined8 *)((int)puVar4 + -0x20);
              dVar7 = (double)CONCAT44(_DAT_8c0e12e0,DAT_8c0e12dc);
            }
            fVar6 = (float)((ulonglong)dVar7 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              fVar5 = fVar5 * fVar6;
              in_dr14 = (double)(ulonglong)(uint)fVar5;
              dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) * fVar5);
            }
            else {
              in_dr14 = dVar10 * dVar7;
              dVar7 = dVar7 * in_dr14;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar4 + -0x20) = SUB84(dVar7,0);
            }
            else {
              *(undefined8 *)((int)puVar4 + -0x20) = in_xd0;
            }
            (*(code *)PTR_FUN_8c0e12e4)((undefined1 *)((int)puVar4 + -0x28),_DAT_8c0e12e0,ar6,ar7);
            (**(code **)(DAT_8c0e12e8 + *(int *)(a4 + 8)))
                      (a4,(undefined1 *)((int)puVar4 + -0x28),ar6,ar7);
            a5 = (undefined1 *)((int)puVar4 + -0x44);
            (**(code **)(DAT_8c0e12ec + *(int *)(a4 + 8)))(a4,a5,ar6,ar7);
          }
        }
      }
      uVar1 = (*(code *)PTR_list_node_next_8c0e12f0)(a4,a5,ar6,ar7);
      *(undefined4 *)((int)puVar4 + -0x6c) = uVar1;
      a4 = *(int *)((int)puVar4 + -0x6c);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)(ulonglong)(uint)*_DAT_8c0e12e0;
    }
    else {
      in_xd0 = *(undefined8 *)_DAT_8c0e12e0;
    }
    if (in_FPSCR_PR == '\0' && SUB84(dVar7,0) < 1.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c0e12f4,*_DAT_8c0e12e0);
      }
      else {
        in_xd0 = *(undefined8 *)_DAT_8c0e12e0;
        dVar9 = (double)CONCAT44(PTR_FUN_8c0e12f8,DAT_8c0e12f4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar9 + dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *_DAT_8c0e12e0 = fVar5;
      }
      else {
        *(undefined8 *)_DAT_8c0e12e0 = in_xd0;
      }
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    *_DAT_8c0e12e0 = 0.0;
  }
  else {
    *(ulonglong *)_DAT_8c0e12e0 = (ulonglong)dVar7 & 0xffffffff;
  }
  uVar1 = (*(code *)PTR_FUN_8c0e12f8)(ar4,1,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x70) = uVar1;
  a5_00 = 3;
  uVar1 = (*(code *)PTR_FUN_8c0e12f8)(ar4,3,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x74) = uVar1;
  (*(code *)PTR_FUN_8c0e1300)((int)ar4 + DAT_8c0e12a0,a5_00,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c0e1304)((undefined1 *)((int)puVar4 + -0x44),0xffffffff,ar6,ar7)
  ;
  (*(code *)PTR_Vec3_dtor_8c0e1308)((undefined1 *)((int)puVar4 + -0x38),0xffffffff,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0e1308)((undefined1 *)((int)puVar4 + -0x28),0xffffffff,ar6,ar7);
  return uVar1;
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
  int a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_dr0;
  undefined8 uVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar2 = ar4 + DAT_8c0e148c;
  (*(code *)PTR_FUN_8c0e1494)(ar4 + DAT_8c0e1490,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0e14a8)(ar4 + DAT_8c0e14a4,uVar2,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = in_dr0 >> 0x20;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c0e14ac),(int)in_dr0);
  }
  else {
    uVar4 = *(undefined8 *)(ar4 + DAT_8c0e14ac);
  }
  if (in_FPSCR_PR == '\0' && (float)uVar4 < (float)((ulonglong)uVar4 >> 0x20)) {
    uVar2 = 0;
    (*(code *)PTR_FUN_8c0e14b4)(ar4 + DAT_8c0e14b0,0,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0e14b8)(ar4 + DAT_8c0e14b0,uVar2,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0e14c0)(*(undefined4 *)(DAT_8c0e14bc + ar5),uVar2,ar6,ar7);
  if (a4 == 1) {
    iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0e14c8)(ar4 + DAT_8c0e14c4,uVar2,ar6,ar7);
    a4 = 0;
    if (iVar1 != 0) {
      a4 = (*(code *)PTR_FUN_8c0e14cc)(ar4 + DAT_8c0e14c4,uVar2,ar6,ar7);
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = (*(code *)PTR_get_field_b8_101178_8c0e14d0)
                          (*(undefined4 *)(DAT_8c0e14bc + ar5),uVar2,ar6,ar7);
        uVar2 = uVar2 & 0xff;
        (**(code **)(*(int *)(*(int *)(a4 + 8) + 8) + 0x50))(*(int *)(a4 + 8),uVar2,ar6,ar7);
        a4 = (*(code *)PTR_list_node_next_8c0e14d4)(a4,uVar2,ar6,ar7);
      }
    }
  }
  return a4;
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
  int a4;
  
  (*(code *)PTR_FUN_8c0e155c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1564)(ar4 + DAT_8c0e1560,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e156c)(ar4 + DAT_8c0e1568,ar5,ar6,ar7);
  a4 = ar4 + DAT_8c0e1570;
  (*(code *)PTR_FUN_8c0e156c)(a4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1574)(a4,ar5,ar6,ar7);
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
  int a4;
  
  (*(code *)PTR_FUN_8c0e15dc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15e4)(ar4 + DAT_8c0e15e0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15ec)(ar4 + DAT_8c0e15e8,ar5,ar6,ar7);
  a4 = ar4 + DAT_8c0e15f0;
  (*(code *)PTR_FUN_8c0e15ec)(a4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e15f4)(a4,ar5,ar6,ar7);
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
  
  (*(code *)PTR_FUN_8c0e1674)(ar4 + DAT_8c0e1670,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e167c)(ar4 + DAT_8c0e1678,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0e1680)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1688)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e167c)(ar4 + DAT_8c0e168c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e167c)(ar4 + DAT_8c0e1690,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1694)(1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e1674)(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e167c)(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_ENV_0e16a0 @ 8c0e1698 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e16a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  int *piVar10;
  uint uVar11;
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  undefined *puStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [3];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0e1788)(&uStack_24,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0e178c)(aiStack_38 + 2,uVar3,ar6,ar7);
  aiStack_38[1] = 0;
  aiStack_38[0] = 0;
  uStack_3c = 0;
  iStack_40 = (*(code *)PTR_FUN_8c0e179c)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e1798,
                         PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e1794,aiStack_38);
  if (iStack_40 == 0) {
    (*(code *)PTR_report_error_message_8c0e17a4)
              (PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e1798,
               PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e17a0,0,2);
  }
  puVar6 = &uStack_3c;
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e1794;
  iStack_44 = (*(code *)PTR_FUN_8c0e17a8)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e1798,puVar5,puVar6);
  if (iStack_44 == 0) {
    puVar6 = (undefined4 *)0x2;
    puVar5 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e17a4)
              (PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e1798,
               PTR_s_GRAPHICS_COMMON_8c0e1790 + DAT_8c0e17ac,0,2);
  }
  (*(code *)PTR_FUN_8c0e17b0)(ar4 + 0x30,aiStack_38[0],puVar5,puVar6);
  iVar7 = 5;
  uVar3 = DAT_8c0e17b4;
  (*(code *)PTR_FUN_8c0e17c0)(DAT_8c0e17bc,DAT_8c0e17b8,DAT_8c0e17b4,5);
  uVar2 = 0;
  while (uVar8 = uVar2, iVar1 = DAT_8c0e1a60, uVar8 < 5) {
    *(uint *)(uVar8 * 0xc + DAT_8c0e1a60 + 4) =
         *(uint *)(uVar8 * 0xc + DAT_8c0e1a60 + 4) | DAT_8c0e1a64;
    iVar7 = iVar1;
    uStack_90 = uVar8;
    uStack_8c = uVar8;
    uVar2 = uVar8 + 1;
  }
  uVar4 = DAT_8c0e1a68;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),DAT_8c0e1a68,uVar3,iVar7);
  uStack_48 = (*(code *)PTR_get_field_4_0253e4_8c0e1a6c)(ar4 + 0x28,uVar4,uVar3,iVar7);
  iStack_4c = (*(code *)PTR_FUN_8c0e1a7c)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a78,
                         PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a74,uStack_48);
  if (iStack_4c == 0) {
    (*(code *)PTR_report_error_message_8c0e1a88)
              (PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a84,
               PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a80,0,2);
  }
  iStack_50 = (*(code *)PTR_FUN_8c0e1a90)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a8c,
                         PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a74,aiStack_38);
  if (iStack_50 == 0) {
    (*(code *)PTR_report_error_message_8c0e1a88)
              (PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a8c,
               PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a94,0,2);
  }
  puVar6 = &uStack_3c;
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a74;
  iStack_54 = (*(code *)PTR_FUN_8c0e1a98)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a8c,puVar5,puVar6);
  if (iStack_54 == 0) {
    puVar6 = (undefined4 *)0x2;
    puVar5 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e1a88)
              (PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a8c,
               PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a9c,0,2);
  }
  (*(code *)PTR_FUN_8c0e1aa4)(ar4 + DAT_8c0e1aa0,aiStack_38[0],puVar5,puVar6);
  iStack_58 = (*(code *)PTR_FUN_8c0e1a90)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1aa8,
                         PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a74,aiStack_38);
  if (iStack_58 == 0) {
    (*(code *)PTR_report_error_message_8c0e1a88)
              (PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1aa8,
               PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a94,0,2);
  }
  puVar6 = &uStack_3c;
  iStack_5c = (*(code *)PTR_FUN_8c0e1a98)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1aa8,
                         PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a74,puVar6);
  if (iStack_5c == 0) {
    puVar6 = (undefined4 *)0x2;
    (*(code *)PTR_report_error_message_8c0e1a88)
              (PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1aa8,
               PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a9c,0,2);
  }
  (*(code *)PTR_FUN_8c0e1aa4)(ar4 + DAT_8c0e1aac,aiStack_38[0],DAT_8c0e1aac,puVar6);
  iStack_60 = (*(code *)PTR_FUN_8c0e1a90)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1ab0,
                         PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a74,aiStack_38);
  if (iStack_60 == 0) {
    (*(code *)PTR_report_error_message_8c0e1a88)
              (PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1ab0,
               PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a94,0,2);
  }
  puVar6 = &uStack_3c;
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a74;
  iStack_64 = (*(code *)PTR_FUN_8c0e1a98)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1ab0,puVar5,puVar6);
  if (iStack_64 == 0) {
    puVar6 = (undefined4 *)0x2;
    puVar5 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e1a88)
              (PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1ab0,
               PTR_s_GRAPHICS_COMMON_8c0e1a70 + DAT_8c0e1a9c,0,2);
  }
  (*(code *)PTR_FUN_8c0e1aa4)(ar4 + DAT_8c0e1ab4,aiStack_38[0],puVar5,puVar6);
  uVar8 = 3;
  (*(code *)PTR_FUN_8c0e1ac4)(ar4 + DAT_8c0e1ac0,ar4 + DAT_8c0e1abc,DAT_8c0e1ab8,3);
  uVar2 = 0;
  while (uVar11 = uVar2, uVar11 < 3) {
    *(uint *)(DAT_8c0e1de8 + uVar11 * 0xc + ar4) =
         *(uint *)(DAT_8c0e1de8 + uVar11 * 0xc + ar4) | DAT_8c0e1dec;
    uVar8 = uVar11 + 1;
    uStack_98 = uVar11;
    uStack_94 = uVar11;
    uVar2 = uVar8;
  }
  iVar7 = ar4 + DAT_8c0e1df0;
  (**(code **)(*(int *)(ar4 + DAT_8c0e1df4) + 8))((int *)(ar4 + DAT_8c0e1df4),iVar7,3,uVar8);
  uStack_68 = (*(code *)PTR_get_field_4_0253e4_8c0e1df8)
                        (ar4 + DAT_8c0e1df4,iVar7,PTR_get_field_4_0253e4_8c0e1df8,ar4 + DAT_8c0e1df4
                        );
  iStack_6c = (*(code *)PTR_FUN_8c0e1e08)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e04,
                         PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e00,uStack_68);
  if (iStack_6c == 0) {
    (*(code *)PTR_report_error_message_8c0e1e14)
              (PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e10,
               PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e0c,0,2);
  }
  iStack_70 = (*(code *)PTR_FUN_8c0e1e1c)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e18,
                         PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e00,aiStack_38);
  if (iStack_70 == 0) {
    (*(code *)PTR_report_error_message_8c0e1e14)
              (PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e18,
               PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e20,0,2);
  }
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e00;
  iStack_74 = (*(code *)PTR_FUN_8c0e1e24)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e18,puVar5,&uStack_3c);
  if (iStack_74 == 0) {
    puVar5 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e1e14)
              (PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e18,
               PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e28,0,2);
  }
  puVar9 = PTR_FUN_8c0e1e30;
  (*(code *)PTR_FUN_8c0e1e30)(ar4 + DAT_8c0e1e2c,aiStack_38[0],puVar5,PTR_FUN_8c0e1e30);
  uVar3 = uStack_3c;
  uVar4 = uStack_3c;
  (**(code **)(*(int *)(ar4 + DAT_8c0e1e34) + 8))
            ((int *)(ar4 + DAT_8c0e1e34),uStack_3c,uStack_3c,puVar9);
  uVar3 = (*(code *)PTR_get_field_4_0253e4_8c0e1df8)(ar4 + DAT_8c0e1e34,uVar3,uVar4,puVar9);
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e38;
  uStack_78 = uVar3;
  iStack_7c = (*(code *)PTR_FUN_8c0e1e3c)
                        (ar5,puVar5,PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e00,uVar3);
  if (iStack_7c == 0) {
    uVar3 = 2;
    puVar5 = PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e0c;
    (*(code *)PTR_report_error_message_8c0e1e14)
              (PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e40,puVar5,0,2);
  }
  uStack_80 = (*(code *)PTR_get_field_4_0253e4_8c0e1df8)
                        (ar4 + DAT_8c0e1e44,puVar5,PTR_get_field_4_0253e4_8c0e1df8,uVar3);
  iStack_84 = (*(code *)PTR_FUN_8c0e1e3c)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e48,
                         PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e00,uStack_80);
  if (iStack_84 == 0) {
    (*(code *)PTR_report_error_message_8c0e1e14)
              (PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e4c,
               PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e0c,0,2);
  }
  piVar10 = aiStack_38;
  iStack_88 = (*(code *)PTR_FUN_8c0e1e1c)
                        (ar5,PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e50,
                         PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e00,piVar10);
  if (iStack_88 == 0) {
    piVar10 = (int *)0x2;
    (*(code *)PTR_report_error_message_8c0e1e14)
              (PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e50,
               PTR_s_GRAPHICS_COMMON_8c0e1dfc + DAT_8c0e1e20,0,2);
  }
  iVar7 = DAT_8c0e1e54;
  (*(code *)PTR_FUN_8c0e1e58)
            (ar4 + DAT_8c0e1e54,*(undefined4 *)(aiStack_38[0] + 4),DAT_8c0e1e54,piVar10);
  (*(code *)PTR_s_GRAPHICS_ENV_0d0006_8c0e1e60)(ar4 + DAT_8c0e1e5c,ar5,iVar7,piVar10);
  puVar5 = PTR_s_GRAPHICS_ENV_0d07f2_8c0e1e68;
  (*(code *)PTR_s_GRAPHICS_ENV_0d07f2_8c0e1e68)
            (ar4 + DAT_8c0e1e64,ar5,iVar7,PTR_s_GRAPHICS_ENV_0d07f2_8c0e1e68);
  iVar7 = DAT_8c0e1e6c;
  (*(code *)PTR_s_GRAPHICS_ENV_0d93b0_8c0e1e70)(ar4 + DAT_8c0e1e6c,ar5,DAT_8c0e1e6c,puVar5);
  (*(code *)PTR_s_GRAPHICS_COMMON_0dbb1a_8c0e1e74)(ar4,ar5,iVar7,puVar5);
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = 0;
    uStack_20 = 0;
    *(undefined4 *)((int)&puStack_9c + DAT_8c0e1e7c) = DAT_8c0e1e78;
  }
  else {
    uStack_1c = 0;
    uStack_24 = in_fr1;
    uStack_20 = in_fr1;
    *(ulonglong *)((int)&puStack_9c + DAT_8c0e1e7c) = CONCAT44(DAT_8c0e1e7c,DAT_8c0e1e78);
    in_fr1 = DAT_8c0e1e80;
  }
  aiStack_38[2] = DAT_8c0e1e80;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
    uStack_28 = in_fr1;
  }
  uStack_2c = uStack_28;
  (*(code *)PTR_FUN_8c0e1e88)(&uStack_24,ar4 + DAT_8c0e1e84,aiStack_38 + 2,puVar5);
  uVar3 = (undefined4)DAT_8c0e1e8c;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = in_fr1;
  }
  aiStack_38[2] = (undefined4)DAT_8c0e1e8c;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar3;
  }
  puVar6 = &uStack_24;
  uStack_2c = uStack_28;
  (*(code *)PTR_FUN_8c0e1f0c)(puVar6,ar4 + DAT_8c0e1e8c._4_4_,aiStack_38 + 2,puVar6);
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = 0;
    uStack_20 = 0;
    *(undefined4 *)((int)&puStack_9c + DAT_8c0e1f14) = DAT_8c0e1f10;
  }
  else {
    uStack_1c = 0;
    uStack_24 = uVar3;
    uStack_20 = uVar3;
    *(ulonglong *)((int)&puStack_9c + DAT_8c0e1f14) = CONCAT44(DAT_8c0e1f14,DAT_8c0e1f10);
    uVar3 = DAT_8c0e1f18;
  }
  aiStack_38[2] = DAT_8c0e1f18;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
    uStack_28 = uVar3;
  }
  uStack_2c = uStack_28;
  (*(code *)PTR_FUN_8c0e1f0c)(&uStack_24,ar4 + DAT_8c0e1f1c,aiStack_38 + 2,puVar6);
  uStack_28 = (undefined4)DAT_8c0e1f20;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = uVar3;
  }
  aiStack_38[2] = (undefined4)DAT_8c0e1f20;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = 0;
  }
  else {
    uStack_24 = 0;
  }
  puVar5 = PTR_FUN_8c0e1f0c;
  uStack_2c = uStack_28;
  (*(code *)PTR_FUN_8c0e1f0c)(&uStack_24,ar4 + DAT_8c0e1f20._4_4_,aiStack_38 + 2,PTR_FUN_8c0e1f0c);
  puVar9 = (undefined *)0x0;
  while (puVar9 < (undefined *)0x3) {
    puStack_9c = puVar9;
    (*(code *)PTR_FUN_8c0e1f84)
              (ar4 + (int)puVar9 * DAT_8c0e1f7c + DAT_8c0e1f80,(int)puVar9 * DAT_8c0e1f7c,3,puVar5);
    puVar5 = puVar9 + 1;
    puVar9 = puVar5;
  }
  piVar10 = aiStack_38 + 2;
  (*(code *)PTR_object_dtor_delete_8c0e1f88)(piVar10,0xffffffff,piVar10,puVar5);
  uVar3 = (*(code *)PTR_Vec3_dtor_8c0e1f8c)(&uStack_24,0xffffffff,piVar10,puVar5);
  return uVar3;
}



/* FUN_8c0e1f90 @ 8c0e1f90 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e2428) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e1f90(int ar4,undefined4 *ar5,undefined1 *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  double *pdVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong in_dr0;
  ulonglong uVar9;
  undefined8 uVar10;
  double dVar11;
  double in_dr2;
  double dVar12;
  undefined8 in_xd0;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_1c = 0;
  uStack_20 = 0;
  if (*DAT_8c0e2070 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0e2074 = 0;
    }
    else {
      *DAT_8c0e2074 = in_dr0;
    }
    *DAT_8c0e2070 = '\x01';
  }
  uVar9 = in_dr0 & 0xffffffff;
  uVar1 = uVar9;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = uStack_28 & 0xffffffff00000000;
    uVar1 = uStack_28;
  }
  uStack_28 = uVar1;
  if (*DAT_8c0e2078 == '\0') {
    *DAT_8c0e207c = 0;
    *DAT_8c0e2078 = '\x01';
  }
  puVar6 = ar5;
  uStack_c = in_PR;
  (*(code *)PTR_FUN_8c0e2080)(ar4,ar5,ar6,ar7);
  uVar8 = (undefined4)uVar9;
  iVar2 = (*(code *)PTR_FUN_8c0e2084)(ar5,puVar6,ar6,ar7);
  if ((iVar2 != 1) && (*(int *)(DAT_8c0e2088 + ar4) != 0)) {
    *(undefined4 *)(DAT_8c0e2088 + ar4) = 0;
  }
  iVar2 = (*(code *)PTR_FUN_8c0e208c)(ar5,puVar6,ar6,ar7);
  if ((iVar2 == 1) && (*(int *)(DAT_8c0e2090 + ar4) != 0)) {
    (**(code **)(DAT_8c0e2094 + *(int *)(*(int *)(DAT_8c0e2090 + ar4) + 8)))
              (*(int *)(DAT_8c0e2090 + ar4),puVar6,ar6,ar7);
  }
  puVar3 = &uStack_28;
  iVar2 = (*(code *)PTR_FUN_8c0e2098)(ar5,puVar3,ar6,ar7);
  if ((iVar2 == 1) && (*(int *)(DAT_8c0e2090 + ar4) != 0)) {
    (**(code **)(DAT_8c0e209c + *(int *)(*(int *)(DAT_8c0e2090 + ar4) + 8)))
              (*(int *)(DAT_8c0e2090 + ar4),puVar3,ar6,ar7);
  }
  else {
    puVar3 = &uStack_28;
    iVar2 = (*(code *)PTR_FUN_8c0e2134)(ar5,puVar3,ar6,ar7);
    if ((iVar2 == 2) && (*(int *)(DAT_8c0e2138 + ar4) != 0)) {
      (**(code **)(DAT_8c0e213c + *(int *)(*(int *)(DAT_8c0e2138 + ar4) + 8)))
                (*(int *)(DAT_8c0e2138 + ar4),puVar3,ar6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0e2140)(ar4,ar5,ar6,ar7);
  puVar6 = ar5;
  (*(code *)PTR_FUN_8c0e2144)(ar4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0e2148)(ar5,puVar6,ar6,ar7);
  if ((iVar2 == 1) && (*(int *)(DAT_8c0e2138 + ar4) != 0)) {
    iVar2 = (**(code **)(DAT_8c0e214c + *(int *)(*(int *)(DAT_8c0e2138 + ar4) + 8)))
                      (*(int *)(DAT_8c0e2138 + ar4),puVar6,ar6,ar7);
    if (iVar2 == 1) {
      puVar6 = ar5;
      (*(code *)PTR_FUN_8c0e2150)(ar4,ar5,ar6,ar7);
    }
    else {
      puVar6 = (undefined4 *)0x2;
      (*(code *)PTR_FUN_8c0e224c)(DAT_8c0e2248,2,ar6,ar7);
    }
  }
  iVar2 = (*(code *)PTR_FUN_8c0e2250)(ar5,puVar6,ar6,ar7);
  if (((iVar2 == 1) && (*(int *)(DAT_8c0e2254 + ar4) != 0)) && (*(int *)(DAT_8c0e2258 + ar4) == 0))
  {
    puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2254 + ar4) + 4);
    if (in_FPSCR_SZ == '\0') {
      uStack_18 = *(undefined4 *)puVar3;
    }
    else {
      uStack_18 = (undefined4)*puVar3;
      uVar8 = uStack_18;
    }
    puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2254 + ar4) + 8);
    if (in_FPSCR_SZ == '\0') {
      uStack_14 = *(undefined4 *)puVar3;
    }
    else {
      uStack_14 = (undefined4)*puVar3;
      uVar8 = uStack_14;
    }
    puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2254 + ar4) + 0xc);
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = *(undefined4 *)puVar3;
      uVar10 = CONCAT44(uStack_10,uVar8);
    }
    else {
      uVar10 = *puVar3;
      uStack_10 = (undefined4)uVar10;
      uStack_c = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    uVar8 = (undefined4)uVar10;
    ar6 = auStack_30;
    puVar6 = &uStack_18;
    (*(code *)PTR_FUN_8c0e225c)(0,puVar6,ar6,ar7);
    (*(code *)PTR_FUN_8c0e2260)(ar5,puVar6,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0e2268)(ar4 + DAT_8c0e2264,puVar6,ar6,ar7);
  if ((*(int *)(DAT_8c0e2254 + ar4) == 0) || (*(int *)(DAT_8c0e2254 + ar4) == ar4 + DAT_8c0e2264)) {
    if (*(int *)(DAT_8c0e23e8 + ar4) == ar4 + DAT_8c0e23ec) {
      iVar2 = (*(code *)PTR_FUN_8c0e23f0)(ar5,puVar6,ar6,ar7);
      if (iVar2 == 1) {
        (*(code *)PTR_FUN_8c0e23f8)(ar4 + DAT_8c0e23ec,puVar6,ar6,ar7);
      }
      else {
        iVar2 = (*(code *)PTR_FUN_8c0e24e4)(ar5,puVar6,ar6,ar7);
        if (iVar2 == 1) {
          (*(code *)PTR_FUN_8c0e24f0)(ar4 + DAT_8c0e24e8._4_4_,puVar6,ar6,ar7);
        }
      }
      if (in_FPSCR_SZ == '\0') {
        uVar8 = *(undefined4 *)DAT_8c0e24f4;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c0e24f8),uVar8);
      }
      else {
        uVar10 = *(undefined8 *)(ar4 + DAT_8c0e24f8);
      }
      if (((float)uVar10 != (float)((ulonglong)uVar10 >> 0x20)) && (*DAT_8c0e24fc == 0)) {
        uVar8 = (*(code *)PTR_FUN_8c0e2504)(DAT_8c0e2500,puVar6,ar6,ar7);
        uStack_28 = CONCAT44(uVar8,(undefined4)uStack_28);
        ar6 = (undefined1 *)0x10;
        (*(code *)PTR_FUN_8c0e2508)(DAT_8c0e2500,uVar8,0x10,ar7);
        puVar6 = (undefined4 *)((int)&uStack_28 + 4);
        (*(code *)PTR_FUN_8c0e250c)(DAT_8c0e2500,puVar6,ar6,ar7);
        *DAT_8c0e24fc = 8;
      }
    }
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c0e226c)(ar5,puVar6,ar6,ar7);
    if (iVar2 == 1) {
      pfVar5 = (float *)(*(int *)(DAT_8c0e2254 + ar4) + 0xc);
      puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2254 + ar4) + 0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0e2270,*(undefined4 *)puVar3);
      }
      else {
        in_xd0 = *puVar3;
        dVar12 = (double)CONCAT44(DAT_8c0e2274,DAT_8c0e2270);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)pfVar5 = in_xd0;
      }
      pdVar4 = (double *)(*(int *)(DAT_8c0e2254 + ar4) + 0xc);
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *pdVar4;
      }
      puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2254 + ar4) + 0x1c);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0e2274,*(undefined4 *)puVar3);
      }
      else {
        in_xd0 = *puVar3;
        dVar12 = (double)CONCAT44(uRam8c0e2278,DAT_8c0e2274);
      }
      if (in_FPSCR_PR == '\0') {
        bVar13 = (float)((ulonglong)in_dr2 >> 0x20) <
                 SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar13 = in_dr2 < dVar12 - dVar12;
      }
      if (bVar13) {
        pfVar5 = (float *)(*(int *)(DAT_8c0e2254 + ar4) + 0xc);
        puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2254 + ar4) + 0x1c);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0e2274,*(undefined4 *)puVar3);
        }
        else {
          in_xd0 = *puVar3;
          dVar12 = (double)CONCAT44(uRam8c0e2278,DAT_8c0e2274);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c0e2330)(ar5,puVar6,ar6,ar7);
      if (iVar2 == 1) {
        pfVar5 = (float *)(*(int *)(DAT_8c0e2334 + ar4) + 0xc);
        puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2334 + ar4) + 0xc);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0e2338,*(undefined4 *)puVar3);
        }
        else {
          in_xd0 = *puVar3;
          dVar12 = (double)CONCAT44(DAT_8c0e233c,DAT_8c0e2338);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar12 + dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
        pdVar4 = (double *)(*(int *)(DAT_8c0e2334 + ar4) + 0xc);
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *pdVar4;
        }
        puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2334 + ar4) + 0x1c);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0e233c,*(undefined4 *)puVar3);
        }
        else {
          in_xd0 = *puVar3;
          dVar12 = (double)CONCAT44(PTR_FUN_8c0e2340,DAT_8c0e233c);
        }
        if (in_FPSCR_PR == '\0') {
          bVar13 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20) <
                   (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar13 = dVar12 + dVar12 < in_dr2;
        }
        if (bVar13) {
          pfVar5 = (float *)(*(int *)(DAT_8c0e2334 + ar4) + 0xc);
          puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2334 + ar4) + 0x1c);
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c0e233c,*(undefined4 *)puVar3);
          }
          else {
            in_xd0 = *puVar3;
            dVar12 = (double)CONCAT44(PTR_FUN_8c0e2340,DAT_8c0e233c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar12 + dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)pfVar5 = in_xd0;
          }
        }
      }
    }
    uVar8 = SUB84(in_dr2,0);
    iVar2 = (*(code *)PTR_FUN_8c0e2340)(ar5,puVar6,ar6,ar7);
    if (iVar2 == 1) {
      pfVar5 = (float *)(*(int *)(DAT_8c0e2334 + ar4) + 4);
      puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2334 + ar4) + 4);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0e2338,*(undefined4 *)puVar3);
      }
      else {
        in_xd0 = *puVar3;
        dVar12 = (double)CONCAT44(DAT_8c0e233c,DAT_8c0e2338);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)pfVar5 = in_xd0;
      }
      pdVar4 = (double *)(*(int *)(DAT_8c0e2334 + ar4) + 4);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar8);
      }
      else {
        dVar12 = *pdVar4;
      }
      puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2334 + ar4) + 0x14);
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(DAT_8c0e233c,*(undefined4 *)puVar3);
      }
      else {
        in_xd0 = *puVar3;
        dVar11 = (double)CONCAT44(PTR_FUN_8c0e2340,DAT_8c0e233c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar13 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20) <
                 (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar13 = dVar11 + dVar11 < dVar12;
      }
      if (bVar13) {
        pfVar5 = (float *)(*(int *)(DAT_8c0e2334 + ar4) + 4);
        puVar3 = (undefined8 *)(*(int *)(DAT_8c0e2334 + ar4) + 0x14);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0e233c,*(undefined4 *)puVar3);
        }
        else {
          in_xd0 = *puVar3;
          dVar12 = (double)CONCAT44(PTR_FUN_8c0e2340,DAT_8c0e233c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar12 + dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c0e23a4)(ar5,puVar6,ar6,ar7);
      if (iVar2 == 1) {
        pfVar5 = (float *)(*(int *)(DAT_8c0e23a8 + ar4) + 4);
        puVar3 = (undefined8 *)(*(int *)(DAT_8c0e23a8 + ar4) + 4);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0e23ac,*(undefined4 *)puVar3);
        }
        else {
          in_xd0 = *puVar3;
          dVar12 = (double)CONCAT44(DAT_8c0e23b0,DAT_8c0e23ac);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)pfVar5 = in_xd0;
        }
        pdVar4 = (double *)(*(int *)(DAT_8c0e23a8 + ar4) + 4);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar8);
        }
        else {
          dVar12 = *pdVar4;
        }
        puVar3 = (undefined8 *)(*(int *)(DAT_8c0e23a8 + ar4) + 0x14);
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(DAT_8c0e23b0,*(undefined4 *)puVar3);
        }
        else {
          in_xd0 = *puVar3;
          dVar11 = (double)CONCAT44(uRam8c0e23b4,DAT_8c0e23b0);
        }
        if (in_FPSCR_PR == '\0') {
          bVar13 = (float)((ulonglong)dVar12 >> 0x20) <
                   SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          bVar13 = dVar12 < dVar11 - dVar11;
        }
        if (bVar13) {
          pfVar5 = (float *)(*(int *)(DAT_8c0e23a8 + ar4) + 4);
          puVar3 = (undefined8 *)(*(int *)(DAT_8c0e23a8 + ar4) + 0x14);
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c0e23b0,*(undefined4 *)puVar3);
          }
          else {
            in_xd0 = *puVar3;
            dVar12 = (double)CONCAT44(uRam8c0e23b4,DAT_8c0e23b0);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar12 - dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)pfVar5 = in_xd0;
          }
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)DAT_8c0e24f4 = *(undefined4 *)(ar4 + DAT_8c0e24f8);
  }
  else {
    *DAT_8c0e24f4 = *(undefined8 *)(ar4 + DAT_8c0e24f8);
  }
  if (*DAT_8c0e24fc != 0) {
    *DAT_8c0e24fc = *DAT_8c0e24fc + -1;
  }
  iVar2 = (*(code *)PTR_FUN_8c0e2510)(ar5,puVar6,ar6,ar7);
  if ((iVar2 == 1) && (*(int *)(DAT_8c0e2514 + ar4) == 0)) {
    puVar6 = ar5;
    (*(code *)PTR_FUN_8c0e2518)(ar4,ar5,ar6,ar7);
  }
  iVar2 = (*(code *)PTR_FUN_8c0e251c)(ar5,puVar6,ar6,ar7);
  if (iVar2 == 1) {
    uVar8 = (*(code *)PTR_get_field_cc_0dfee8_8c0e2520)(ar5,puVar6,ar6,ar7);
    uVar8 = (*(code *)PTR_FUN_8c0e2524)(uVar8,puVar6,ar6,ar7);
    (*(code *)PTR_FUN_8c0e2528)(uVar8,puVar6,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e25c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *a5;
  int iVar4;
  uint in_fr1;
  uint in_PR;
  char in_FPSCR_SZ;
  ulonglong uStack_20;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = (ulonglong)in_PR << 0x20;
  }
  else {
    uStack_20 = (ulonglong)in_fr1;
  }
  if (*(int *)(DAT_8c0e27c8 + ar4) != 0) {
    uVar3 = ar5;
    iVar1 = (*(code *)PTR_get_field_24_05c284_8c0e27cc)
                      (*(undefined4 *)(DAT_8c0e27c8 + ar4),ar5,ar6,ar7);
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (**(code **)(DAT_8c0e27d0 + *(int *)(*(int *)(DAT_8c0e27c8 + ar4) + 8)))
                (*(int *)(DAT_8c0e27c8 + ar4),0,ar6,ar7);
    }
    iVar1 = (*(code *)PTR_FUN_8c0e27d4)(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0e27dc)(ar4 + DAT_8c0e27d8,uVar3,ar6,ar7);
      a4 = (*(code *)PTR_FUN_8c0e27e0)(ar4 + DAT_8c0e27d8,uVar3,ar6,ar7);
      for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
        uVar3 = 2;
        (**(code **)(DAT_8c0e27d0 + *(int *)(a4 + 8)))(a4,2,ar6,ar7);
        a4 = (*(code *)PTR_list_node_next_8c0e27e4)(a4,uVar3,ar6,ar7);
      }
    }
    a5 = &uStack_20;
    iVar1 = (*(code *)PTR_FUN_8c0e27e8)(ar5,a5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c0e27ec + ar4) != 0)) {
      (**(code **)(DAT_8c0e27f0 + *(int *)(*(int *)(DAT_8c0e27ec + ar4) + 8)))
                (*(int *)(DAT_8c0e27ec + ar4),a5,ar6,ar7);
    }
    else {
      a5 = &uStack_20;
      iVar1 = (*(code *)PTR_FUN_8c0e27e8)(ar5,a5,ar6,ar7);
      if ((iVar1 == 2) && (*(int *)(DAT_8c0e27ec + ar4) != 0)) {
        (**(code **)(DAT_8c0e27f4 + *(int *)(*(int *)(DAT_8c0e27ec + ar4) + 8)))
                  (*(int *)(DAT_8c0e27ec + ar4),a5,ar6,ar7);
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0e27f8)(ar5,a5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c0e27ec + ar4) != 0)) {
      (**(code **)(DAT_8c0e27fc + *(int *)(*(int *)(DAT_8c0e27ec + ar4) + 8)))
                (*(int *)(DAT_8c0e27ec + ar4),a5,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0e2800)(ar4,ar5,ar6,ar7);
    uVar3 = ar5;
    (*(code *)PTR_FUN_8c0e2804)(ar4,ar5,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0e2808)(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (**(code **)(DAT_8c0e280c + *(int *)(*(int *)(DAT_8c0e27c8 + ar4) + 8)))
                        (*(int *)(DAT_8c0e27c8 + ar4),uVar3,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(DAT_8c0e27ec + ar4) == *(int *)(DAT_8c0e27c8 + ar4))) {
        uVar3 = ar5;
        (*(code *)PTR_FUN_8c0e2810)(ar4,ar5,ar6,ar7);
        for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
          uVar3 = 0;
          (*(code *)PTR_FUN_8c0e281c)(ar4 + iVar1 * DAT_8c0e2814 + DAT_8c0e2818,0,ar6,ar7);
        }
      }
      else {
        uVar3 = 2;
        (*(code *)PTR_FUN_8c0e2824)(DAT_8c0e2820,2,ar6,ar7);
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0e2828)(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      uVar2 = (*(code *)PTR_get_field_cc_0dfee8_8c0e282c)(ar5,uVar3,ar6,ar7);
      uVar2 = (*(code *)PTR_FUN_8c0e2830)(uVar2,uVar3,ar6,ar7);
      (*(code *)PTR_FUN_8c0e2834)(uVar2,uVar3,ar6,ar7);
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
  undefined4 a5;
  float fVar2;
  double in_dr0;
  float fVar4;
  double dVar3;
  undefined4 uVar5;
  double in_dr2;
  double dVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0e29b4)(ar5,ar5,ar6,ar7);
  uVar5 = SUB84(in_dr2,0);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0e29b8)(ar5,a5,ar6,ar7);
    uStack_14 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_14 = (double)CONCAT44(1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0e29bc),uVar5);
      in_dr0 = (double)CONCAT44(DAT_8c0e29c0,SUB84(uStack_14,0));
    }
    else {
      in_dr2 = *(double *)(ar4 + DAT_8c0e29bc);
      in_dr0 = (double)CONCAT44(PTR_FUN_8c0e29c4,DAT_8c0e29c0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar2 = SUB84(in_dr0,0) * fVar4;
      in_dr0 = (double)CONCAT44(fVar4,fVar2);
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + fVar2,SUB84(in_dr2,0));
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
      in_dr2 = in_dr2 + in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c0e29bc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c0e29bc) = in_dr2;
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0e29c4)(ar5,a5,ar6,ar7);
    uVar5 = SUB84(in_dr2,0);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0e29b8)(ar5,a5,ar6,ar7);
      uStack_1c = in_dr0;
      if (in_FPSCR_SZ == '\0') {
        uStack_1c = (double)CONCAT44(1,(int)((ulonglong)in_dr0 >> 0x20));
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0e29bc),uVar5);
        in_dr0 = (double)CONCAT44(DAT_8c0e29c0,SUB84(uStack_1c,0));
      }
      else {
        in_dr2 = *(double *)(ar4 + DAT_8c0e29bc);
        in_dr0 = (double)CONCAT44(PTR_FUN_8c0e29c4,DAT_8c0e29c0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
        fVar2 = SUB84(in_dr0,0) * fVar4;
        in_dr0 = (double)CONCAT44(fVar4,fVar2);
        in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + fVar2,SUB84(in_dr2,0));
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
        in_dr2 = in_dr2 + in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0e29bc) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c0e29bc) = in_dr2;
      }
    }
  }
  uVar5 = SUB84(in_dr2,0);
  iVar1 = (*(code *)PTR_FUN_8c0e29c8)(ar5,a5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0e29cc)(ar5,a5,ar6,ar7);
    uStack_24 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_24 = (double)CONCAT44(1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0e29d0),uVar5);
      dVar3 = (double)CONCAT44(DAT_8c0e29c0,SUB84(uStack_24,0));
    }
    else {
      dVar6 = *(double *)(ar4 + DAT_8c0e29d0);
      dVar3 = (double)CONCAT44(PTR_FUN_8c0e29c4,DAT_8c0e29c0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                               SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar3 * dVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c0e29d0) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c0e29d0) = dVar6;
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0e29d4)(ar5,a5,ar6,ar7);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0e29cc)(ar5,a5,ar6,ar7);
      uStack_2c = in_dr0;
      if (in_FPSCR_SZ == '\0') {
        uStack_2c = (double)CONCAT44(1,(int)((ulonglong)in_dr0 >> 0x20));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0e29d0),uVar5);
        dVar3 = (double)CONCAT44(DAT_8c0e29c0,SUB84(uStack_2c,0));
      }
      else {
        dVar6 = *(double *)(ar4 + DAT_8c0e29d0);
        dVar3 = (double)CONCAT44(PTR_FUN_8c0e29c4,DAT_8c0e29c0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                                 SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar3 * dVar3;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0e29d0) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c0e29d0) = dVar6;
      }
    }
  }
  (*(code *)PTR_FUN_8c0e29d8)(ar4,ar5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c0e2be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0e2a14(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  double in_dr0;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr3;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 auStack_18 [2];
  
  uVar4 = 0;
  uVar3 = (undefined2)DAT_8c0e2a4c;
  iVar1 = *(int *)(DAT_8c0e2a50 + (int)ar4);
  if (iVar1 == 0) {
    uVar2 = 0;
    (*(code *)PTR_FUN_8c0e2aa8)((int)ar4 + DAT_8c0e2aa4,0,ar6,ar7);
    (**(code **)(DAT_8c0e2aac + *ar4))(ar4,uVar2,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0e2ab0)(ar5,uVar2,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c0e2ab4 + (int)ar4) = 1;
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0e2abc,SUB84(in_dr0,0));
        *(undefined4 *)((int)ar4 + DAT_8c0e2ab8) = DAT_8c0e2abc;
      }
      else {
        uVar5 = CONCAT44(_DAT_8c0e2ac0,DAT_8c0e2abc);
        *(undefined8 *)((int)ar4 + DAT_8c0e2ab8) = uVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0e2abc,(int)uVar5);
        *(undefined4 *)((int)ar4 + _DAT_8c0e2ac0) = DAT_8c0e2abc;
      }
      else {
        in_dr0 = (double)CONCAT44(_DAT_8c0e2ac0,DAT_8c0e2abc);
        *(double *)((int)ar4 + _DAT_8c0e2ac0) = in_dr0;
      }
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0e2ae8)(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = *(int *)(DAT_8c0e2aec + (int)ar4);
        if (iVar1 == 0) {
          *(undefined4 *)(DAT_8c0e2afc + (int)ar4) = 1;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(DAT_8c0e2b0c + (int)ar4) = 3;
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(DAT_8c0e2b38 + (int)ar4) = 0;
        }
        *(undefined4 *)(DAT_8c0e2b3c + (int)ar4) = 1;
        if (in_FPSCR_SZ == '\0') {
          uVar5 = CONCAT44(DAT_8c0e2b44,SUB84(in_dr0,0));
          *(undefined4 *)((int)ar4 + DAT_8c0e2b40) = DAT_8c0e2b44;
        }
        else {
          uVar5 = CONCAT44(DAT_8c0e2b48,DAT_8c0e2b44);
          *(undefined8 *)((int)ar4 + DAT_8c0e2b40) = uVar5;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(DAT_8c0e2b44,(int)uVar5);
          *(undefined4 *)((int)ar4 + DAT_8c0e2b48) = DAT_8c0e2b44;
        }
        else {
          in_dr0 = (double)CONCAT44(DAT_8c0e2b48,DAT_8c0e2b44);
          *(double *)((int)ar4 + DAT_8c0e2b48) = in_dr0;
        }
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0e2b74)(ar5,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = *(int *)(DAT_8c0e2b78 + (int)ar4);
          if (iVar1 == 0) {
            *(undefined4 *)(DAT_8c0e2b88 + (int)ar4) = 3;
          }
          else if (iVar1 == 1) {
            *(undefined4 *)(DAT_8c0e2b98 + (int)ar4) = 0;
          }
          else if (iVar1 == 3) {
            *(undefined4 *)(DAT_8c0e2bc4 + (int)ar4) = 1;
          }
          *(undefined4 *)(DAT_8c0e2bc8 + (int)ar4) = 1;
          if (in_FPSCR_SZ == '\0') {
            uVar5 = CONCAT44(DAT_8c0e2bd0,SUB84(in_dr0,0));
            *(undefined4 *)((int)ar4 + DAT_8c0e2bcc) = DAT_8c0e2bd0;
          }
          else {
            uVar5 = CONCAT44(DAT_8c0e2bd4,DAT_8c0e2bd0);
            *(undefined8 *)((int)ar4 + DAT_8c0e2bcc) = uVar5;
          }
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(DAT_8c0e2bd0,(int)uVar5);
            *(undefined4 *)((int)ar4 + DAT_8c0e2bd4) = DAT_8c0e2bd0;
          }
          else {
            in_dr0 = (double)CONCAT44(DAT_8c0e2bd4,DAT_8c0e2bd0);
            *(double *)((int)ar4 + DAT_8c0e2bd4) = in_dr0;
          }
        }
      }
    }
  }
  else {
    uVar2 = ar5;
    if (iVar1 == 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0e2c08,*(undefined4 *)((int)ar4 + DAT_8c0e2c04));
      }
      else {
        in_dr0 = (double)CONCAT44(PTR_FUN_8c0e2c0c,DAT_8c0e2c08);
      }
      if ((SUB84(in_dr0,0) == (float)((ulonglong)in_dr0 >> 0x20)) &&
         (iVar1 = (*(code *)PTR_FUN_8c0e2c0c)(ar5,ar5,ar6,ar7), iVar1 == 1)) {
        *(undefined4 *)(DAT_8c0e2c10 + (int)ar4) = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = (*(code *)PTR_FUN_8c0e2c38)(ar5,ar5,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = *(int *)(DAT_8c0e2c3c + (int)ar4);
        if (iVar1 == 0) {
          *(undefined4 *)(DAT_8c0e2c4c + (int)ar4) = 1;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(DAT_8c0e2c5c + (int)ar4) = 3;
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(DAT_8c0e2c6c + (int)ar4) = 0;
        }
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0e2c94)(ar5,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = *(int *)(DAT_8c0e2c98 + (int)ar4);
          if (iVar1 == 0) {
            *(undefined4 *)(DAT_8c0e2ca8 + (int)ar4) = 3;
          }
          else if (iVar1 == 1) {
            *(undefined4 *)(DAT_8c0e2cb8 + (int)ar4) = 0;
          }
          else if (iVar1 == 3) {
            *(undefined4 *)(DAT_8c0e2d48 + (int)ar4) = 1;
          }
        }
      }
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0e2d4c)(ar5,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(DAT_8c0e2d50 + (int)ar4) = 3;
  }
  if (*(int *)(DAT_8c0e2d50 + (int)ar4) == 2) {
    if (*(int *)(DAT_8c0e2d48 + (int)ar4) == 3) {
      uVar2 = 0;
      (*(code *)PTR_FUN_8c0e2d58)((int)ar4 + DAT_8c0e2d54,0,ar6,ar7);
      (**(code **)(DAT_8c0e2d5c + *ar4))(ar4,uVar2,ar6,ar7);
    }
    if ((*(int *)(DAT_8c0e2d48 + (int)ar4) == 3) &&
       (iVar1 = (*(code *)PTR_FUN_8c0e2d60)(ar5,uVar2,ar6,ar7), iVar1 == 1)) {
      if ((*(int *)(DAT_8c0e2d64 + (int)ar4) == 1) && (*(int *)(DAT_8c0e2d68 + (int)ar4) == 1)) {
        *(undefined4 *)(DAT_8c0e2d64 + (int)ar4) = 0;
        *(undefined4 *)(DAT_8c0e2d68 + (int)ar4) = 1;
      }
      else if ((*(int *)(DAT_8c0e2d8c + (int)ar4) == 0) && (*(int *)(DAT_8c0e2d90 + (int)ar4) == 1))
      {
        *(undefined4 *)(DAT_8c0e2d8c + (int)ar4) = 0;
        *(undefined4 *)(DAT_8c0e2d90 + (int)ar4) = 0;
      }
      else if ((*(int *)(DAT_8c0e2dd0 + (int)ar4) == 0) && (*(int *)(DAT_8c0e2dd4 + (int)ar4) == 0))
      {
        *(undefined4 *)(DAT_8c0e2dd0 + (int)ar4) = 1;
        *(undefined4 *)(DAT_8c0e2dd4 + (int)ar4) = 1;
      }
      if ((*(int *)(DAT_8c0e2dd0 + (int)ar4) == 1) || (*(int *)(DAT_8c0e2dd4 + (int)ar4) == 1)) {
        (*(code *)PTR_FUN_8c0e2ddc)((int)ar4 + DAT_8c0e2dd8,uVar2,ar6,ar7);
      }
      else {
        (*(code *)PTR_FUN_8c0e2e20)((int)ar4 + DAT_8c0e2e1c,uVar2,ar6,ar7);
      }
      uVar4 = (undefined2)DAT_8c0e2e24;
      uVar3 = (undefined2)DAT_8c0e2e28;
      auStack_18[0] = (*(code *)PTR_FUN_8c0e2e30)(DAT_8c0e2e2c,uVar2,ar6,ar7);
      uVar2 = 3;
      (*(code *)PTR_FUN_8c0e2e34)(DAT_8c0e2e2c,auStack_18[0],3,ar7);
      (*(code *)PTR_FUN_8c0e2e38)(DAT_8c0e2e2c,auStack_18,uVar2,ar7);
    }
    else if (*(int *)(DAT_8c0e2e6c + (int)ar4) == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0e2e70)(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        uVar2 = 1;
        (*(code *)PTR_FUN_8c0e2e78)((int)ar4 + DAT_8c0e2e74,1,ar6,ar7);
        uVar3 = (undefined2)DAT_8c0e2e80;
        uVar4 = (short)DAT_8c0e2e7c;
      }
      else {
        uVar2 = 0;
        (*(code *)PTR_FUN_8c0e2ea8)((int)ar4 + DAT_8c0e2ea4,0,ar6,ar7);
        uVar4 = 0;
      }
      (**(code **)(DAT_8c0e2eac + *ar4))(ar4,uVar2,ar6,ar7);
    }
    else if (*(int *)(DAT_8c0e2f1c + (int)ar4) == 1) {
      iVar1 = (*(code *)PTR_FUN_8c0e2f20)(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        (**(code **)(DAT_8c0e2f24 + *ar4))(ar4,uVar2,ar6,ar7);
        uVar4 = (undefined2)DAT_8c0e2f28;
        uVar3 = (undefined2)DAT_8c0e2f2c;
        (*(code *)PTR_FUN_8c0e2f40)((int)ar4 + DAT_8c0e2f3c,uVar2,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0e2f48,*(undefined4 *)((int)ar4 + DAT_8c0e2f44));
        }
        else {
          dVar6 = (double)CONCAT44(DAT_8c0e2f4c,DAT_8c0e2f48);
        }
        if (in_FPSCR_PR == '\0') {
          bVar7 = (float)((ulonglong)in_dr0 >> 0x20) <
                  SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar7 = in_dr0 < dVar6 * dVar6;
        }
        if (bVar7) {
          (*(code *)PTR_FUN_8c0e2f50)((int)ar4 + DAT_8c0e2f4c,uVar2,ar6,ar7);
        }
      }
      else {
        (**(code **)(DAT_8c0e2f9c + *ar4))(ar4,uVar2,ar6,ar7);
        uVar4 = 0;
      }
      (*(code *)PTR_FUN_8c0e2fa4)((int)ar4 + DAT_8c0e2fa0,0,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (*(int *)(DAT_8c0e2fa8 + (int)ar4) != 0) {
    *(undefined2 *)(DAT_8c0e2fac + (int)ar4) = uVar4;
    *(undefined2 *)(DAT_8c0e2fb0 + (int)ar4) = uVar4;
    *(undefined2 *)(DAT_8c0e2fb4 + (int)ar4) = uVar3;
    *(undefined2 *)(DAT_8c0e2fb8 + (int)ar4) = uVar3;
    iVar1 = *(int *)(DAT_8c0e2fbc + (int)ar4);
    if (iVar1 == 0) {
      *(undefined2 *)(DAT_8c0e2fdc + (int)ar4) = 0x40;
      *(undefined2 *)(DAT_8c0e2fe0 + (int)ar4) = 0x20;
      *(undefined2 *)(DAT_8c0e2fe4 + (int)ar4) = 0x20;
      iVar1 = DAT_8c0e2fe8;
      *(undefined2 *)(DAT_8c0e2fe8 + (int)ar4) = 0x40;
    }
    else if (iVar1 == 1) {
      *(undefined2 *)(DAT_8c0e3008 + (int)ar4) = 0x60;
      *(undefined2 *)(DAT_8c0e300c + (int)ar4) = 0x40;
      *(undefined2 *)(DAT_8c0e3010 + (int)ar4) = 0x40;
      iVar1 = DAT_8c0e3014;
      *(undefined2 *)(DAT_8c0e3014 + (int)ar4) = 0x60;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)(DAT_8c0e3040 + (int)ar4) = 0x20;
      *(undefined2 *)(DAT_8c0e3044 + (int)ar4) = 0;
      *(undefined2 *)(DAT_8c0e3048 + (int)ar4) = 0;
      iVar1 = DAT_8c0e304c;
      *(undefined2 *)(DAT_8c0e304c + (int)ar4) = 0x20;
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

/* WARNING: Removing unreachable block (ram,0x8c0e341c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0e3210(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  double in_dr0;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr3;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 auStack_18 [2];
  
  uVar4 = 0;
  uVar3 = (undefined2)DAT_8c0e3248;
  iVar1 = *(int *)(DAT_8c0e324c + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c0e32a4)(ar4 + DAT_8c0e32a0,0,ar6,ar7);
    uVar2 = 0;
    (*(code *)PTR_FUN_8c0e32ac)(ar4 + DAT_8c0e32a8,0,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0e32b0)(ar5,uVar2,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c0e32b4 + ar4) = 1;
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0e32bc,SUB84(in_dr0,0));
        *(undefined4 *)(ar4 + DAT_8c0e32b8) = DAT_8c0e32bc;
      }
      else {
        uVar5 = CONCAT44(_DAT_8c0e32c0,DAT_8c0e32bc);
        *(undefined8 *)(ar4 + DAT_8c0e32b8) = uVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0e32bc,(int)uVar5);
        *(undefined4 *)(ar4 + _DAT_8c0e32c0) = DAT_8c0e32bc;
      }
      else {
        in_dr0 = (double)CONCAT44(_DAT_8c0e32c0,DAT_8c0e32bc);
        *(double *)(ar4 + _DAT_8c0e32c0) = in_dr0;
      }
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0e32e8)(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = *(int *)(DAT_8c0e32ec + ar4);
        if (iVar1 == 0) {
          if (*(int *)(DAT_8c0e3304 + ar4) == 1) {
            *(undefined4 *)(DAT_8c0e3308 + ar4) = 4;
          }
          else {
            *(undefined4 *)(DAT_8c0e3318 + ar4) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(DAT_8c0e3354 + ar4) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(DAT_8c0e3328 + ar4) = 3;
        }
        *(undefined4 *)(DAT_8c0e3358 + ar4) = 1;
        if (in_FPSCR_SZ == '\0') {
          uVar5 = CONCAT44(DAT_8c0e3360,SUB84(in_dr0,0));
          *(undefined4 *)(ar4 + DAT_8c0e335c) = DAT_8c0e3360;
        }
        else {
          uVar5 = CONCAT44(DAT_8c0e3364,DAT_8c0e3360);
          *(undefined8 *)(ar4 + DAT_8c0e335c) = uVar5;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(DAT_8c0e3360,(int)uVar5);
          *(undefined4 *)(ar4 + DAT_8c0e3364) = DAT_8c0e3360;
        }
        else {
          in_dr0 = (double)CONCAT44(DAT_8c0e3364,DAT_8c0e3360);
          *(double *)(ar4 + DAT_8c0e3364) = in_dr0;
        }
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0e3390)(ar5,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = *(int *)(DAT_8c0e3394 + ar4);
          if (iVar1 == 0) {
            *(undefined4 *)(DAT_8c0e33a4 + ar4) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(DAT_8c0e33bc + ar4) == 1) {
              *(undefined4 *)(DAT_8c0e33c0 + ar4) = 4;
            }
            else {
              *(undefined4 *)(DAT_8c0e33d0 + ar4) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(DAT_8c0e33fc + ar4) = 0;
          }
          *(undefined4 *)(DAT_8c0e3400 + ar4) = 1;
          if (in_FPSCR_SZ == '\0') {
            uVar5 = CONCAT44(DAT_8c0e3408,SUB84(in_dr0,0));
            *(undefined4 *)(ar4 + DAT_8c0e3404) = DAT_8c0e3408;
          }
          else {
            uVar5 = CONCAT44(DAT_8c0e340c,DAT_8c0e3408);
            *(undefined8 *)(ar4 + DAT_8c0e3404) = uVar5;
          }
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(DAT_8c0e3408,(int)uVar5);
            *(undefined4 *)(ar4 + DAT_8c0e340c) = DAT_8c0e3408;
          }
          else {
            in_dr0 = (double)CONCAT44(DAT_8c0e340c,DAT_8c0e3408);
            *(double *)(ar4 + DAT_8c0e340c) = in_dr0;
          }
        }
      }
    }
  }
  else {
    uVar2 = ar5;
    if (iVar1 == 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0e3448,*(undefined4 *)(ar4 + DAT_8c0e3444));
      }
      else {
        in_dr0 = (double)CONCAT44(PTR_FUN_8c0e344c,DAT_8c0e3448);
      }
      if ((SUB84(in_dr0,0) == (float)((ulonglong)in_dr0 >> 0x20)) &&
         (iVar1 = (*(code *)PTR_FUN_8c0e344c)(ar5,ar5,ar6,ar7), iVar1 == 1)) {
        *(undefined4 *)(DAT_8c0e3450 + ar4) = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = (*(code *)PTR_FUN_8c0e3478)(ar5,ar5,ar6,ar7);
      if (iVar1 == 1) {
        iVar1 = *(int *)(DAT_8c0e347c + ar4);
        if (iVar1 == 0) {
          if (*(int *)(DAT_8c0e3494 + ar4) == 1) {
            *(undefined4 *)(DAT_8c0e3498 + ar4) = 4;
          }
          else {
            *(undefined4 *)(DAT_8c0e34a8 + ar4) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(DAT_8c0e34c8 + ar4) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(DAT_8c0e34b8 + ar4) = 3;
        }
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0e34f0)(ar5,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          iVar1 = *(int *)(DAT_8c0e34f4 + ar4);
          if (iVar1 == 0) {
            *(undefined4 *)(DAT_8c0e3504 + ar4) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(DAT_8c0e351c + ar4) == 1) {
              *(undefined4 *)(DAT_8c0e3520 + ar4) = 4;
            }
            else {
              *(undefined4 *)(DAT_8c0e3530 + ar4) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(DAT_8c0e35b8 + ar4) = 0;
          }
        }
      }
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0e35bc)(ar5,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(DAT_8c0e35c0 + ar4) = 3;
  }
  if (*(int *)(DAT_8c0e35c0 + ar4) == 2) {
    if (*(int *)(DAT_8c0e35b8 + ar4) == 3) {
      (*(code *)PTR_FUN_8c0e35c8)(ar4 + DAT_8c0e35c4,0,ar6,ar7);
      uVar2 = 0;
      (*(code *)PTR_FUN_8c0e35d0)(ar4 + DAT_8c0e35cc,0,ar6,ar7);
    }
    if ((*(int *)(DAT_8c0e35b8 + ar4) == 3) &&
       (iVar1 = (*(code *)PTR_FUN_8c0e35d4)(ar5,uVar2,ar6,ar7), iVar1 == 1)) {
      if ((*(int *)(DAT_8c0e35d8 + ar4) == 1) && (*(int *)(DAT_8c0e35dc + ar4) == 1)) {
        *(undefined4 *)(DAT_8c0e35d8 + ar4) = 0;
        *(undefined4 *)(DAT_8c0e35dc + ar4) = 1;
      }
      else if ((*(int *)(DAT_8c0e3600 + ar4) == 0) && (*(int *)(DAT_8c0e3604 + ar4) == 1)) {
        *(undefined4 *)(DAT_8c0e3600 + ar4) = 0;
        *(undefined4 *)(DAT_8c0e3604 + ar4) = 0;
      }
      else if ((*(int *)(DAT_8c0e3654 + ar4) == 0) && (*(int *)(DAT_8c0e3658 + ar4) == 0)) {
        *(undefined4 *)(DAT_8c0e3654 + ar4) = 1;
        *(undefined4 *)(DAT_8c0e3658 + ar4) = 1;
      }
      uVar4 = (undefined2)DAT_8c0e365c;
      uVar3 = (undefined2)DAT_8c0e3660;
      auStack_18[0] = (*(code *)PTR_FUN_8c0e3668)(DAT_8c0e3664,uVar2,ar6,ar7);
      uVar2 = 3;
      (*(code *)PTR_FUN_8c0e366c)(DAT_8c0e3664,auStack_18[0],3,ar7);
      (*(code *)PTR_FUN_8c0e3670)(DAT_8c0e3664,auStack_18,uVar2,ar7);
    }
    else if (*(int *)(DAT_8c0e36a4 + ar4) == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0e36a8)(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        (*(code *)PTR_FUN_8c0e36b0)(ar4 + DAT_8c0e36ac,1,ar6,ar7);
        uVar3 = (undefined2)DAT_8c0e36b8;
        uVar4 = (short)DAT_8c0e36b4;
      }
      else {
        (*(code *)PTR_FUN_8c0e36e0)(ar4 + DAT_8c0e36dc,0,ar6,ar7);
        uVar4 = 0;
      }
      (*(code *)PTR_FUN_8c0e36e8)(ar4 + DAT_8c0e36e4,0,ar6,ar7);
    }
    else if (*(int *)(DAT_8c0e3758 + ar4) == 4) {
      iVar1 = (*(code *)PTR_FUN_8c0e375c)(ar5,uVar2,ar6,ar7);
      if (iVar1 == 1) {
        uVar2 = 1;
        (*(code *)PTR_FUN_8c0e3764)(ar4 + DAT_8c0e3760,1,ar6,ar7);
        uVar4 = (undefined2)DAT_8c0e3768;
        uVar3 = (undefined2)DAT_8c0e376c;
        (*(code *)PTR_FUN_8c0e3780)(ar4 + DAT_8c0e377c,uVar2,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0e3788,*(undefined4 *)(ar4 + DAT_8c0e3784));
        }
        else {
          dVar6 = (double)CONCAT44(DAT_8c0e378c,DAT_8c0e3788);
        }
        if (in_FPSCR_PR == '\0') {
          bVar7 = (float)((ulonglong)in_dr0 >> 0x20) <
                  SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar7 = in_dr0 < dVar6 * dVar6;
        }
        if (bVar7) {
          (*(code *)PTR_FUN_8c0e3790)(ar4 + DAT_8c0e378c,uVar2,ar6,ar7);
        }
      }
      else {
        (*(code *)PTR_FUN_8c0e37e0)(ar4 + DAT_8c0e37dc,0,ar6,ar7);
        uVar4 = 0;
      }
      (*(code *)PTR_FUN_8c0e37e8)(ar4 + DAT_8c0e37e4,0,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (*(int *)(DAT_8c0e37ec + ar4) != 0) {
    *(undefined2 *)(DAT_8c0e37f0 + ar4) = uVar4;
    *(undefined2 *)(DAT_8c0e37f4 + ar4) = uVar4;
    *(undefined2 *)(DAT_8c0e37f8 + ar4) = uVar3;
    *(undefined2 *)(DAT_8c0e37fc + ar4) = uVar3;
    iVar1 = *(int *)(DAT_8c0e3800 + ar4);
    if (iVar1 == 0) {
      *(undefined2 *)(DAT_8c0e3820 + ar4) = 0x40;
      *(undefined2 *)(DAT_8c0e3824 + ar4) = 0x20;
      *(undefined2 *)(DAT_8c0e3828 + ar4) = 0x20;
      iVar1 = DAT_8c0e382c;
      *(undefined2 *)(DAT_8c0e382c + ar4) = 0x40;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)(DAT_8c0e388c + ar4) = 0x20;
      *(undefined2 *)(DAT_8c0e3890 + ar4) = 0;
      *(undefined2 *)(DAT_8c0e3894 + ar4) = 0;
      iVar1 = DAT_8c0e3898;
      *(undefined2 *)(DAT_8c0e3898 + ar4) = 0x20;
    }
    else if (iVar1 == 4) {
      *(short *)(DAT_8c0e384c + ar4) = (short)DAT_8c0e3850;
      *(short *)(DAT_8c0e3854 + ar4) = (short)DAT_8c0e3858;
      *(short *)(DAT_8c0e385c + ar4) = (short)DAT_8c0e3858;
      iVar1 = DAT_8c0e3860;
      *(short *)(DAT_8c0e3860 + ar4) = (short)DAT_8c0e3850;
    }
  }
  return iVar1;
}



/* FUN_8c0e389c @ 8c0e389c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e389c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_14;
  int iStack_10;
  float fStack_8;
  int iStack_4;
  
  puVar2 = *(undefined4 **)((int)DAT_8c0e397c + ar4);
  if (puVar2 == (undefined4 *)0x1) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0e3984,*(undefined4 *)(ar4 + DAT_8c0e3980));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e3980);
      dVar5 = (double)CONCAT44(DAT_8c0e3988,DAT_8c0e3984);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    fStack_8 = fVar4;
    iStack_4 = ar4;
    if (in_FPSCR_SZ != '\0') {
      fStack_8 = (float)in_xd0;
      iStack_4 = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(fStack_8,fVar4);
      *(float *)(iStack_4 + DAT_8c0e3980) = fStack_8;
    }
    else {
      uVar6 = CONCAT44(iStack_4,fStack_8);
      *(undefined8 *)(iStack_4 + DAT_8c0e3980) = uVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(fStack_8,(int)uVar6);
      *(float *)(ar4 + DAT_8c0e3988) = fStack_8;
    }
    else {
      uVar6 = CONCAT44(iStack_4,fStack_8);
      *(undefined8 *)(ar4 + DAT_8c0e3988) = uVar6;
    }
    fVar1 = DAT_8c0e398c;
    fVar4 = (float)uVar6;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c0e3988);
    }
    puVar2 = &DAT_8c0e398c;
    fVar3 = DAT_8c0e398c;
    fVar7 = _DAT_8c0e3990;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = fVar4;
      fVar7 = DAT_8c0e398c;
    }
    if (in_FPSCR_PR != '\0' || fVar3 <= fVar7) {
      if (in_FPSCR_SZ != '\0') {
        fStack_8 = _DAT_8c0e3990;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0e3980) = DAT_8c0e398c;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0e3980) = CONCAT44(fStack_8,DAT_8c0e398c);
      }
      puVar2 = (undefined4 *)0xc;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0e3988) = fVar1;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0e3988) = CONCAT44(fStack_8,fVar1);
      }
    }
  }
  else if (puVar2 == (undefined4 *)0x3) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0e3984,*(undefined4 *)(ar4 + DAT_8c0e3980));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e3980);
      dVar5 = (double)CONCAT44(DAT_8c0e3988,DAT_8c0e3984);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    fStack_14 = fVar4;
    iStack_10 = ar4;
    if (in_FPSCR_SZ != '\0') {
      fStack_14 = (float)in_xd0;
      iStack_10 = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(fStack_14,fVar4);
      *(float *)(iStack_10 + DAT_8c0e3980) = fStack_14;
    }
    else {
      uVar6 = CONCAT44(iStack_10,fStack_14);
      *(undefined8 *)(iStack_10 + DAT_8c0e3980) = uVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(fStack_14,(int)uVar6);
      *(float *)(ar4 + DAT_8c0e3988) = fStack_14;
    }
    else {
      uVar6 = CONCAT44(iStack_10,fStack_14);
      *(undefined8 *)(ar4 + DAT_8c0e3988) = uVar6;
    }
    fVar1 = _DAT_8c0e3990;
    fVar4 = (float)uVar6;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c0e3988);
    }
    puVar2 = (undefined4 *)&DAT_8c0e3990;
    fVar3 = _DAT_8c0e3990;
    fVar7 = _FUN_8c0e3994;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = fVar4;
      fVar7 = _DAT_8c0e3990;
    }
    if (in_FPSCR_PR != '\0' || fVar7 <= fVar3) {
      if (in_FPSCR_SZ != '\0') {
        fStack_14 = _FUN_8c0e3994;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0e3980) = _DAT_8c0e3990;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0e3980) = CONCAT44(fStack_14,_DAT_8c0e3990);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0e3988) = fVar1;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0e3988) = CONCAT44(fStack_14,fVar1);
      }
      puVar2 = DAT_8c0e397c;
      *(undefined4 *)((int)DAT_8c0e397c + ar4) = 0;
    }
  }
  return puVar2;
}



/* FUN_8c0e3994 @ 8c0e3994 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3994(int ar4,undefined8 *ar5,undefined4 ar6,int ar7)

{
  undefined8 *puVar1;
  int iVar2;
  int a4;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 *puVar12;
  float fVar13;
  double in_dr2;
  bool bVar14;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined8 *puStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_ac;
  undefined8 *puStack_a8;
  undefined8 *puStack_a4;
  undefined8 *puStack_a0;
  undefined8 *puStack_9c;
  undefined8 *puStack_98;
  undefined8 *puStack_94;
  undefined8 *puStack_90;
  int *piStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [52];
  double dVar11;
  
  puVar5 = ar5;
  iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0e3a54)(ar4 + DAT_8c0e3a50,ar5,ar6,ar7);
  iStack_70 = iVar2;
  a4 = (*(code *)PTR_FUN_8c0e3a58)(ar4 + DAT_8c0e3a50,puVar5,ar6,ar7);
  iStack_74 = a4;
  (*(code *)PTR_Vec3_ctor_zero_8c0e3a60)((int)&uStack_c8 + DAT_8c0e3a5c,puVar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0e3a60)((int)&uStack_c8 + DAT_8c0e3a64,puVar5,ar6,ar7);
  if (*DAT_8c0e3a68 == '\0') {
    uStack_78 = (*(code *)PTR_Vec3_ctor_xyz_8c0e3a74)(DAT_8c0e3a6c._4_4_,puVar5,ar6,ar7);
    puVar5 = (undefined8 *)PTR_Vec3_dtor_8c0e3a7c;
    ar6 = DAT_8c0e3a78;
    (*(code *)PTR_global_list_push_8c0e3a80)(uStack_78,PTR_Vec3_dtor_8c0e3a7c,DAT_8c0e3a78,ar7);
    *DAT_8c0e3a68 = '\x01';
  }
  if (*DAT_8c0e3a84 == '\0') {
    uStack_7c = (*(code *)PTR_Vec3_ctor_zero_8c0e3a60)(DAT_8c0e3a88,puVar5,ar6,ar7);
    puVar5 = (undefined8 *)PTR_Vec3_dtor_8c0e3a7c;
    ar6 = DAT_8c0e3a8c;
    (*(code *)PTR_global_list_push_8c0e3a80)(uStack_7c,PTR_Vec3_dtor_8c0e3a7c,DAT_8c0e3a8c,ar7);
    *DAT_8c0e3a84 = '\x01';
  }
  iVar6 = 0;
  do {
    if (iVar2 <= iVar6) {
      (*(code *)PTR_Vec3_dtor_8c0e3e94)((int)&uStack_c8 + DAT_8c0e3e90,0xffffffff,ar6,ar7);
      uVar4 = (*(code *)PTR_Vec3_dtor_8c0e3e94)((int)&uStack_c8 + DAT_8c0e3e84,0xffffffff,ar6,ar7);
      return uVar4;
    }
    iVar3 = (*(code *)PTR_get_field_24_05c284_8c0e3bd8)(a4,puVar5,ar6,ar7);
    uStack_c8._0_4_ = iVar3;
    iStack_80 = iVar3;
    if (iVar3 != 0xe) {
      (*(code *)PTR_FUN_8c0e3bdc)(a4,puVar5,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0e3be4)((int)&uStack_c8 + DAT_8c0e3be0,auStack_4c,ar6,ar7);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0e3be8)(auStack_4c,0xffffffff,ar6,ar7);
      (*(code *)PTR_FUN_8c0e3bec)(a4,uVar4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0e3be4)((int)&uStack_c8 + DAT_8c0e3bf0,auStack_5c,ar6,ar7);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0e3be8)(auStack_5c,0xffffffff,ar6,ar7);
      (**(code **)(DAT_8c0e3bf4 + *(int *)(a4 + 8)))(a4,uVar4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0e3be4)(DAT_8c0e3bf8,auStack_6c,ar6,ar7);
      puVar5 = (undefined8 *)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0e3be8)(auStack_6c,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)&uStack_c8 + DAT_8c0e3bfc));
      }
      else {
        uVar10 = *ar5;
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar10 >> 0x20) <= (float)uVar10) {
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)&uStack_c8 + DAT_8c0e3c00));
        }
        else {
          uVar10 = *ar5;
        }
        if (in_FPSCR_PR != '\0' || (float)uVar10 <= (float)((ulonglong)uVar10 >> 0x20)) {
          iStack_84 = (**(code **)(DAT_8c0e3c04 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
          if (iStack_84 == 1) {
            iStack_88 = (**(code **)(DAT_8c0e3c08 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
            if (iStack_88 != 0) {
              piStack_8c = (int *)(**(code **)(DAT_8c0e3c08 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
              puStack_90 = (undefined8 *)
                           (**(code **)(*piStack_8c + 0x28))(piStack_8c,puVar5,ar6,ar7);
              if (puStack_90 == (undefined8 *)0x1) {
                (**(code **)(DAT_8c0e3c0c + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
                puVar5 = (undefined8 *)((ulonglong)uVar10 >> 0x20);
                puStack_94 = puVar5;
                if (in_FPSCR_SZ != '\0') {
                  puStack_94 = (undefined8 *)uVar10;
                  puStack_90 = puVar5;
                }
                ar6 = 4;
                puVar5 = (undefined8 *)((int)&uStack_c8 + DAT_8c0e3be0);
                ar7 = a4;
                (*(code *)PTR_FUN_8c0e3c10)(ar5,puVar5,4,a4);
                goto LAB_8c0e3d7e;
              }
            }
            if (iVar3 == 5) {
              (**(code **)(DAT_8c0e3c44 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
              puVar5 = (undefined8 *)((ulonglong)uVar10 >> 0x20);
              puStack_98 = puVar5;
              if (in_FPSCR_SZ != '\0') {
                puStack_98 = (undefined8 *)uVar10;
                puStack_94 = puVar5;
              }
              ar6 = 3;
              puVar5 = (undefined8 *)((int)&uStack_c8 + DAT_8c0e3c48);
              ar7 = a4;
              (*(code *)PTR_FUN_8c0e3c4c)(ar5,puVar5,3,a4);
            }
            else {
              (**(code **)(DAT_8c0e3cb4 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
              puVar7 = (undefined8 *)((ulonglong)uVar10 >> 0x20);
              puStack_9c = puVar7;
              puVar12 = DAT_8c0e3cb8;
              if (in_FPSCR_SZ != '\0') {
                puStack_9c = (undefined8 *)uVar10;
                puStack_98 = puVar7;
                puVar7 = DAT_8c0e3cb8;
                puVar12 = DAT_8c0e3cbc;
              }
              if (in_FPSCR_PR == '\0' && (float)puVar12 < (float)puVar7) {
                puVar5 = DAT_8c0e3cbc;
                (*(code *)PTR_FUN_8c0e3cc4)(DAT_8c0e3cc0,DAT_8c0e3cbc,ar6,ar7);
                puStack_a0 = puVar7;
                puVar1 = puVar12;
                puVar7 = DAT_8c0e3cc8;
                puVar8 = _DAT_8c0e3ccc;
                if (in_FPSCR_SZ == '\0') {
                  puStack_a0 = puVar12;
                  puVar1 = puStack_9c;
                  puVar7 = puVar12;
                  puVar8 = DAT_8c0e3cc8;
                }
                puVar12 = puVar8;
                puStack_9c = puVar1;
                if (in_FPSCR_PR == '\0' && (float)puVar7 < (float)puVar12) {
                  (**(code **)(DAT_8c0e3cb4 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
                  puStack_a4 = puVar7;
                  if (in_FPSCR_SZ == '\0') {
                    puStack_a4 = puVar12;
                    puVar12 = puStack_a0;
                  }
                  puStack_a0 = puVar12;
                  ar6 = 3;
                  puVar5 = (undefined8 *)((int)_DAT_8c0e3ccc + (int)&uStack_c8);
                  ar7 = a4;
                  (*(code *)PTR_FUN_8c0e3cd0)(ar5,puVar5,3,a4);
                  goto LAB_8c0e3d7e;
                }
              }
              (**(code **)(DAT_8c0e3d38 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
              puStack_a8 = puVar7;
              puVar1 = puVar12;
              puVar8 = DAT_8c0e3d3c;
              puVar7 = DAT_8c0e3d40;
              if (in_FPSCR_SZ == '\0') {
                puStack_a8 = puVar12;
                puVar1 = puStack_a4;
                puVar8 = puVar12;
                puVar7 = DAT_8c0e3d3c;
              }
              puStack_a4 = puVar1;
              if (in_FPSCR_PR == '\0' && (float)puVar8 < (float)puVar7) {
                puVar5 = DAT_8c0e3d40;
                (*(code *)PTR_FUN_8c0e3d48)(DAT_8c0e3d44,DAT_8c0e3d40,ar6,ar7);
                puStack_ac = puVar8;
                puVar12 = puVar7;
                puVar8 = DAT_8c0e3d4c;
                puVar1 = _DAT_8c0e3d50;
                if (in_FPSCR_SZ == '\0') {
                  puStack_ac = puVar7;
                  puVar12 = puStack_a8;
                  puVar8 = puVar7;
                  puVar1 = DAT_8c0e3d4c;
                }
                puVar7 = puVar1;
                puStack_a8 = puVar12;
                if (in_FPSCR_PR == '\0' && (float)puVar8 < (float)puVar7) {
                  (**(code **)(DAT_8c0e3d38 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
                  puStack_b0 = puVar8;
                  if (in_FPSCR_SZ == '\0') {
                    puStack_b0 = puVar7;
                    puVar7 = puStack_ac;
                  }
                  puStack_ac = puVar7;
                  ar6 = 2;
                  puVar5 = (undefined8 *)((int)_DAT_8c0e3d50 + (int)&uStack_c8);
                  ar7 = a4;
                  (*(code *)PTR_FUN_8c0e3d54)(ar5,puVar5,2,a4);
                  goto LAB_8c0e3d7e;
                }
              }
              (**(code **)(DAT_8c0e3dd8 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
              puStack_b4 = puVar8;
              if (in_FPSCR_SZ == '\0') {
                puStack_b4 = puVar7;
                puVar7 = puStack_b0;
              }
              puStack_b0 = puVar7;
              ar6 = 0;
              puVar5 = (undefined8 *)((int)&uStack_c8 + DAT_8c0e3ddc);
              ar7 = a4;
              (*(code *)PTR_FUN_8c0e3de0)(ar5,puVar5,0,a4);
            }
          }
        }
      }
LAB_8c0e3d7e:
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)&uStack_c8 + DAT_8c0e3de4));
      }
      else {
        uVar10 = *ar5;
      }
      if (in_FPSCR_PR != '\0' || (float)uVar10 <= (float)((ulonglong)uVar10 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)&uStack_c8 + DAT_8c0e3de8));
        }
        else {
          uVar10 = *ar5;
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar10 >> 0x20) <= (float)uVar10) {
          iStack_b8 = (**(code **)(DAT_8c0e3dec + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
          if (iStack_b8 == 1) {
            if (iVar3 == 5) {
              (**(code **)(DAT_8c0e3dd8 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
              iVar3 = (int)((ulonglong)uVar10 >> 0x20);
              iStack_bc = iVar3;
              if (in_FPSCR_SZ != '\0') {
                iStack_bc = (int)uVar10;
                iStack_b8 = iVar3;
              }
              ar6 = 1;
              puVar5 = (undefined8 *)((int)&uStack_c8 + DAT_8c0e3df0);
              ar7 = a4;
              (*(code *)PTR_FUN_8c0e3de0)(ar5,puVar5,1,a4);
            }
            goto LAB_8c0e3e34;
          }
        }
      }
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)&uStack_c8 + DAT_8c0e3e78));
      }
      else {
        uVar10 = *ar5;
      }
      if (in_FPSCR_PR != '\0' || (float)uVar10 <= (float)((ulonglong)uVar10 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)&uStack_c8 + DAT_8c0e3e78),SUB84(in_dr2,0))
          ;
          dVar11 = (double)CONCAT44(DAT_8c0e3e7c,*(undefined4 *)ar5);
        }
        else {
          in_dr2 = *(double *)((int)&uStack_c8 + DAT_8c0e3e78);
          dVar11 = (double)CONCAT44(DAT_8c0e3e80,DAT_8c0e3e7c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = (float)((ulonglong)dVar11 >> 0x20);
          fVar9 = SUB84(dVar11,0) - fVar13;
          dVar11 = (double)CONCAT44(fVar13,fVar9);
          bVar14 = (float)((ulonglong)in_dr2 >> 0x20) < fVar9;
        }
        else {
          dVar11 = dVar11 - dVar11;
          bVar14 = in_dr2 < dVar11;
        }
        if (!bVar14) {
          (**(code **)(DAT_8c0e3e80 + *(int *)(a4 + 8)))(a4,puVar5,ar6,ar7);
          iVar3 = (int)((ulonglong)dVar11 >> 0x20);
          iStack_c0 = iVar3;
          if (in_FPSCR_SZ != '\0') {
            iStack_c0 = SUB84(dVar11,0);
            iStack_bc = iVar3;
          }
          ar6 = 0;
          puVar5 = (undefined8 *)((int)&uStack_c8 + DAT_8c0e3e84);
          ar7 = a4;
          (*(code *)PTR_FUN_8c0e3e88)(ar5,puVar5,0,a4);
        }
      }
    }
LAB_8c0e3e34:
    a4 = (*(code *)PTR_list_node_next_8c0e3e8c)(a4,puVar5,ar6,ar7);
    iVar6 = iVar6 + 1;
    uStack_c8._4_4_ = a4;
  } while( true );
}



/* FUN_8c0e3e98 @ 8c0e3e98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3e98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c0e3eb8)(in_stack_00000000,ar4 + 0x40,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e3ebc @ 8c0e3ebc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e3ebc(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  if ((*(int *)(DAT_8c0e3f0c + ar4) == 1) && (*(int *)(DAT_8c0e3f10 + ar4) == 1)) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar5 = 0x3f800000;
    }
    else {
      *ar5 = CONCAT44(0x3f800000,in_fr1);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar6 = DAT_8c0e3f14;
    }
    else {
      *ar6 = CONCAT44(DAT_8c0e3f18,DAT_8c0e3f14);
    }
    return &DAT_8c0e3f14;
  }
  if ((*(int *)(DAT_8c0e3f0c + ar4) == 0) && (*(int *)(DAT_8c0e3f10 + ar4) == 1)) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar5 = DAT_8c0e3f18;
    }
    else {
      *ar5 = CONCAT44(DAT_8c0e3f1c,DAT_8c0e3f18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar6 = DAT_8c0e3f1c;
    }
    else {
      *ar6 = CONCAT44(DAT_8c0e3f20,DAT_8c0e3f1c);
    }
    return &DAT_8c0e3f1c;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = DAT_8c0e3f20;
  }
  else {
    *ar5 = CONCAT44(_FUN_8c0e3f24,DAT_8c0e3f20);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = DAT_8c0e3f20;
  }
  else {
    *ar6 = CONCAT44(_FUN_8c0e3f24,DAT_8c0e3f20);
  }
  return &DAT_8c0e3f20;
}



/* FUN_8c0e3f24 @ 8c0e3f24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e3f24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *a5;
  undefined1 *a6;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar3 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar3 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = in_PR;
  a6 = (undefined1 *)((int)puVar3 + -0x20);
  iVar1 = ar4;
  if ((*(int *)(DAT_8c0e4124 + ar4) == 1) && (*(int *)(DAT_8c0e4128 + ar4) == 1)) {
    (*(code *)PTR_FUN_8c0e4138)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0e413c)(iVar1,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0x14) = *(undefined4 *)(ar4 + DAT_8c0e4140);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x14) = *(undefined8 *)(ar4 + DAT_8c0e4140);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0x10) = *(undefined4 *)(ar4 + DAT_8c0e4144);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x10) = *(undefined8 *)(ar4 + DAT_8c0e4144);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0xc) = *(undefined4 *)(ar4 + DAT_8c0e4148);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xc) = *(undefined8 *)(ar4 + DAT_8c0e4148);
    }
  }
  else if ((*(int *)(DAT_8c0e4124 + ar4) == 0) && (*(int *)(DAT_8c0e4128 + ar4) == 1)) {
    (*(code *)PTR_FUN_8c0e4138)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0e413c)(iVar1,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0x14) = *(undefined4 *)(ar4 + DAT_8c0e4158);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x14) = *(undefined8 *)(ar4 + DAT_8c0e4158);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0x10) = *(undefined4 *)(ar4 + DAT_8c0e415c);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x10) = *(undefined8 *)(ar4 + DAT_8c0e415c);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0xc) = *(undefined4 *)(ar4 + DAT_8c0e4160);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xc) = *(undefined8 *)(ar4 + DAT_8c0e4160);
    }
  }
  else {
    (*(code *)PTR_FUN_8c0e4138)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0e413c)(iVar1,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0x14) = *(undefined4 *)(ar4 + DAT_8c0e4140);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x14) = *(undefined8 *)(ar4 + DAT_8c0e4140);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0x10) = *(undefined4 *)(ar4 + DAT_8c0e4144);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x10) = *(undefined8 *)(ar4 + DAT_8c0e4144);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0xc) = *(undefined4 *)(ar4 + DAT_8c0e4148);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xc) = *(undefined8 *)(ar4 + DAT_8c0e4148);
    }
  }
  (*(code *)PTR_FUN_8c0e4164)(iVar1,ar5,ar6,ar7);
  uVar2 = 1;
  (*(code *)PTR_FUN_8c0e4168)(1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e416c)(uVar2,ar5,ar6,ar7);
  uVar2 = 1;
  (*(code *)PTR_FUN_8c0e4170)(1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e4174)(uVar2,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e4178)(uVar2,ar5,ar6,ar7);
  a5 = (undefined1 *)((int)puVar3 + -0x14);
  uVar2 = 0;
  (*(code *)PTR_FUN_8c0e417c)(0,a5,(undefined1 *)((int)puVar3 + -0x20),ar7);
  (*(code *)PTR_FUN_8c0e4180)(uVar2,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e4184)(uVar2,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e4188)(uVar2,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e418c)(uVar2,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e4190)(uVar2,a5,a6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0e4194)(uVar2,a5,a6,ar7);
  return uVar2;
}



/* FUN_8c0e4198 @ 8c0e4198 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e4198(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined8 *puVar2;
  undefined4 unaff_r13;
  int iVar3;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 in_dr0;
  double dVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined4 in_fr15;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar5 + -0x1c) = in_PR;
  a5 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c0e4264)(ar5,ar5,ar6,ar7);
  *(undefined4 *)(puVar5 + -0x20) = uVar1;
  iVar3 = **(int **)(*(int *)(*(int *)(puVar5 + -0x20) + 0x2c) + 4);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *(undefined4 *)(iVar3 + 0x24);
  }
  else {
    in_xd14 = *(undefined8 *)(iVar3 + 0x24);
  }
  puVar2 = (undefined8 *)(iVar3 + 0x24);
  puVar4 = (undefined8 *)(iVar3 + 0x54);
  (*(code *)PTR_FUN_8c0e426c)(ar4 + DAT_8c0e4268,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0x24) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar5 + -0x24) = in_dr0;
  }
  *(undefined8 **)(puVar5 + -0x28) = puVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar5 + -0x28),in_fr3);
    dVar6 = (double)CONCAT44(DAT_8c0e4270,*(undefined4 *)(puVar5 + -0x24));
  }
  else {
    dVar7 = **(double **)(puVar5 + -0x28);
    dVar6 = (double)CONCAT44(DAT_8c0e4274,DAT_8c0e4270);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                             SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + dVar6 * dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)*(double **)(puVar5 + -0x28) = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined4 *)puVar4 = *(undefined4 *)puVar2;
  }
  else {
    **(double **)(puVar5 + -0x28) = dVar7;
    *puVar4 = *puVar2;
  }
  (*(code *)PTR_FUN_8c0e4278)(ar4 + DAT_8c0e4274,a5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0e427c)(0,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e428c)(uVar1,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e4290)(ar5,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e4294)(1,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar5 + -0x2c) = in_fr15;
    *(undefined4 *)puVar4 = *(undefined4 *)(puVar5 + -0x2c);
  }
  else {
    *(undefined8 *)(puVar5 + -0x2c) = in_xd14;
    *puVar4 = *(undefined8 *)(puVar5 + -0x2c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar2 = *(undefined4 *)(puVar5 + -0x2c);
  }
  else {
    *puVar2 = *(undefined8 *)(puVar5 + -0x2c);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * s_SoilTank_0e437e(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_fr1;
  undefined8 uVar7;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0e4570)(ar4,PTR_s_GRAPHICS_COMMON_8c0e4568 + DAT_8c0e456c,1,0);
  *ar4 = PTR_DAT_8c0e4574;
  uVar4 = 0x24;
  puVar2 = PTR_FUN_8c0e457c;
  puVar3 = PTR_FUN_8c0e4578;
  (*(code *)PTR_FUN_8c0e4584)((int)ar4 + DAT_8c0e4580,PTR_FUN_8c0e457c,PTR_FUN_8c0e4578,0x24);
  (*(code *)PTR_FUN_8c0e458c)((int)ar4 + DAT_8c0e4588,puVar2,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0e4594)((int)ar4 + DAT_8c0e4590,puVar2,puVar3,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0e459c)((int)ar4 + DAT_8c0e4598,puVar2,puVar3,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0e459c)((int)ar4 + DAT_8c0e45a0,puVar2,puVar3,uVar4);
  uVar4 = 0xc;
  puVar2 = PTR_LAB_8c0e45a8;
  puVar3 = PTR_free_if_nonnull_wrap_0d6ef8_8c0e45a4;
  (*(code *)PTR_FUN_8c0e4584)
            ((int)ar4 + DAT_8c0e45ac,PTR_LAB_8c0e45a8,PTR_free_if_nonnull_wrap_0d6ef8_8c0e45a4,0xc);
  (*(code *)PTR_FUN_8c0e45b4)((int)ar4 + DAT_8c0e45b0,puVar2,puVar3,uVar4);
  uVar4 = 0x18;
  puVar2 = PTR_FUN_8c0e45bc;
  puVar3 = PTR_free_if_nonnull_wrap_0cffc8_8c0e45b8;
  (*(code *)PTR_FUN_8c0e4584)
            ((int)ar4 + DAT_8c0e45c0,PTR_FUN_8c0e45bc,PTR_free_if_nonnull_wrap_0cffc8_8c0e45b8,0x18)
  ;
  (*(code *)PTR_FUN_8c0e45c4)(ar4,puVar2,puVar3,uVar4);
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44((undefined4)DAT_8c0e45cc,in_fr1);
    *(undefined4 *)((int)ar4 + DAT_8c0e45c8) = (undefined4)DAT_8c0e45cc;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0e45cc._4_4_,(undefined4)DAT_8c0e45cc);
    *(undefined8 *)((int)ar4 + DAT_8c0e45c8) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0e45d4,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e45cc._4_4_) = DAT_8c0e45d4;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0e45d8,DAT_8c0e45d4);
    *(undefined8 *)((int)ar4 + DAT_8c0e45cc._4_4_) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0e45dc,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e45d8) = DAT_8c0e45dc;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0e45e0,DAT_8c0e45dc);
    *(undefined8 *)((int)ar4 + DAT_8c0e45d8) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0e45e4,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e45e0) = DAT_8c0e45e4;
  }
  else {
    uVar7 = CONCAT44(_DAT_8c0e45e8,DAT_8c0e45e4);
    *(undefined8 *)((int)ar4 + DAT_8c0e45e0) = uVar7;
  }
  for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
    for (iVar6 = 0; iVar6 < 10; iVar6 = iVar6 + 1) {
      puVar1 = (undefined8 *)((int)ar4 + DAT_8c0e45ac + iVar6 * 0xc + iVar5 * 0x78);
      if (in_FPSCR_SZ == '\0') {
        uVar7 = CONCAT44(_DAT_8c0e45e8,(int)uVar7);
        *(undefined4 *)puVar1 = _DAT_8c0e45e8;
      }
      else {
        uVar7 = CONCAT44(_DAT_8c0e45ec,_DAT_8c0e45e8);
        *puVar1 = uVar7;
      }
    }
    *(undefined4 *)((int)ar4 + _DAT_8c0e45ec + iVar6 * 0xc + iVar5 * 0x78) = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44((undefined4)DAT_8c0e45f4,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e45f0) = (undefined4)DAT_8c0e45f4;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0e45f4._4_4_,(undefined4)DAT_8c0e45f4);
    *(undefined8 *)((int)ar4 + DAT_8c0e45f0) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(_DAT_8c0e45e8,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e45f4._4_4_) = _DAT_8c0e45e8;
  }
  else {
    uVar7 = CONCAT44(_DAT_8c0e45ec,_DAT_8c0e45e8);
    *(undefined8 *)((int)ar4 + DAT_8c0e45f4._4_4_) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0e4600,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e45fc) = DAT_8c0e4600;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0e4604,DAT_8c0e4600);
    *(undefined8 *)((int)ar4 + DAT_8c0e45fc) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0e4608,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e4604) = DAT_8c0e4608;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0e460c,DAT_8c0e4608);
    *(undefined8 *)((int)ar4 + DAT_8c0e4604) = uVar7;
  }
  *(undefined4 *)(DAT_8c0e460c + (int)ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0e4614,(int)uVar7);
    *(undefined4 *)((int)ar4 + DAT_8c0e4610) = DAT_8c0e4614;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0e4618,DAT_8c0e4614);
    *(undefined8 *)((int)ar4 + DAT_8c0e4610) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e4618) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e4618) = CONCAT44(0x3f800000,(int)uVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e461c) = DAT_8c0e4620;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e461c) = CONCAT44(DAT_8c0e4624,DAT_8c0e4620);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e4624) = DAT_8c0e4628;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e4624) = CONCAT44(_FUN_8c0e462c,DAT_8c0e4628);
  }
  return ar4;
}



/* FUN_8c0e462c @ 8c0e462c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e462c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_Vec3_dtor_8c0e467c)(ar4 + 0x10,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0e4680)(ar4 + 8,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0e4684)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0e4688)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0e468c @ 8c0e468c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e468c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0e46c4)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0e46c8)(ar4,a5,ar6,ar7);
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
  undefined4 a7;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0e4784;
    uVar2 = 1;
    uVar1 = 0x18;
    (*(code *)PTR_vec_delete_array_8c0e4790)
              ((int)ar4 + DAT_8c0e478c,PTR_free_if_nonnull_wrap_0cffc8_8c0e4788,0x18,1);
    (*(code *)PTR_FUN_8c0e4798)((int)ar4 + DAT_8c0e4794,0xffffffff,uVar1,uVar2);
    uVar2 = 100;
    uVar1 = 0xc;
    (*(code *)PTR_vec_delete_array_8c0e4790)
              ((int)ar4 + DAT_8c0e47a0,PTR_free_if_nonnull_wrap_0d6ef8_8c0e479c,0xc,100);
    (*(code *)PTR_Vec3_dtor_8c0e47a8)((int)ar4 + DAT_8c0e47a4,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_Vec3_dtor_8c0e47a8)((int)ar4 + DAT_8c0e47ac,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0e47b4)
              ((int)ar4 + DAT_8c0e47b0,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0e47bc)
              ((int)ar4 + DAT_8c0e47b8,0xffffffff,uVar1,uVar2);
    a7 = 3;
    uVar2 = 0x24;
    (*(code *)PTR_vec_delete_array_8c0e4790)((int)ar4 + DAT_8c0e47c4,PTR_FUN_8c0e47c0,0x24,3);
    uVar1 = 0;
    (*(code *)PTR_Class_12bb08_m0_0da208_8c0e47c8)(ar4,0,uVar2,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0e47cc)(ar4,uVar1,uVar2,a7);
    }
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0e47de @ 8c0e47d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e47de(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a7;
  undefined4 a5;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 a7_00;
  uint uVar6;
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0e4ab8)(&uStack_30,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0e4abc)(&uStack_3c,uVar2,ar6,ar7);
  uStack_40 = 0;
  uStack_44 = 0;
  iVar1 = (*(code *)PTR_FUN_8c0e4acc)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac8,
                     PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac4,&uStack_40);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0e4ad4)
              (PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac8,
               PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ad0,0,2);
  }
  puVar5 = &uStack_44;
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac4;
  iVar1 = (*(code *)PTR_FUN_8c0e4ad8)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac8,puVar4,puVar5);
  if (iVar1 == 0) {
    puVar5 = (undefined4 *)0x2;
    puVar4 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e4ad4)
              (PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac8,
               PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4adc,0,2);
  }
  (*(code *)PTR_FUN_8c0e4ae0)(ar4 + 0x30,uStack_40,puVar4,puVar5);
  a7_00 = 8;
  uVar2 = DAT_8c0e4ae4;
  (*(code *)PTR_FUN_8c0e4af0)(DAT_8c0e4aec,DAT_8c0e4ae8,DAT_8c0e4ae4,8);
  for (uVar6 = 0; uVar6 < 8; uVar6 = uVar6 + 1) {
    *(uint *)(uVar6 * 0xc + DAT_8c0e4ae8 + 4) =
         *(uint *)(uVar6 * 0xc + DAT_8c0e4ae8 + 4) | DAT_8c0e4af4;
  }
  a5 = DAT_8c0e4aec;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),DAT_8c0e4aec,uVar2,a7_00);
  (*(code *)PTR_get_field_4_0253e4_8c0e4af8)(ar4 + 0x28,a5,uVar2,a7_00);
  uVar2 = (*(code *)PTR_get_field_4_0253e4_8c0e4af8)(ar4 + 0x28,a5,uVar2,a7_00);
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac4;
  iVar1 = (*(code *)PTR_FUN_8c0e4b00)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4afc,puVar4,uVar2);
  if (iVar1 == 0) {
    uVar2 = 2;
    puVar4 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e4ad4)
              (PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4b08,
               PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4b04,0,2);
  }
  (*(code *)PTR_s_GRAPHICS_ENV_0d5ee6_8c0e4b10)(ar4 + DAT_8c0e4b0c,ar5,puVar4,uVar2);
  puVar3 = PTR_PTR_8c0e4b14;
  (**(code **)(*(int *)(ar4 + DAT_8c0e4b18) + 8))
            ((int *)(ar4 + DAT_8c0e4b18),PTR_PTR_8c0e4b14,puVar4,uVar2);
  a7 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0e4af8)(ar4 + DAT_8c0e4b18,puVar3,puVar4,uVar2);
  for (uVar6 = 0; uVar6 < (uint)a7[1]; uVar6 = uVar6 + 1) {
    *(uint *)(uVar6 * 0xc + *a7 + 4) = *(uint *)(uVar6 * 0xc + *a7 + 4) | DAT_8c0e4af4;
  }
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4ac4;
  iVar1 = (*(code *)PTR_FUN_8c0e4b20)(ar5,PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4b1c,puVar4,a7);
  if (iVar1 == 0) {
    a7 = (int *)0x2;
    puVar4 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e4ad4)
              (PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4b28,
               PTR_s_GRAPHICS_COMMON_8c0e4ac0 + DAT_8c0e4b24,0,2);
  }
  puVar3 = PTR_DAT_8c0e4b2c;
  (*(code *)PTR_FUN_8c0e4ae0)(ar4 + DAT_8c0e4b30,PTR_DAT_8c0e4b2c,puVar4,a7);
  iVar1 = (*(code *)PTR_FUN_8c0e4b34)(ar4 + DAT_8c0e4b30,puVar3,puVar4,a7);
  iVar1 = (*(code *)PTR_LAB_8c0e4b38)(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,puVar4,a7);
  *(int *)(DAT_8c0e4b3c + ar4) = iVar1 + 4;
  if (in_FPSCR_SZ == '\0') {
    uStack_2c = 0;
  }
  else {
    uStack_24 = DAT_8c0e4b44;
    uStack_2c = in_fr1;
    in_fr1 = DAT_8c0e4b44;
  }
  uStack_28 = DAT_8c0e4b40;
  uStack_3c = DAT_8c0e4b44;
  if (in_FPSCR_SZ == '\0') {
    uStack_34 = 0;
    uStack_30 = uStack_2c;
  }
  else {
    uStack_30 = 0;
    uStack_34 = in_fr1;
  }
  uStack_38 = uStack_34;
  (*(code *)PTR_FUN_8c0e4b4c)(&uStack_30,ar4 + DAT_8c0e4b48,&uStack_3c,a7);
  if (in_FPSCR_SZ == '\0') {
    uStack_2c = 0;
    uStack_34 = in_fr1;
  }
  else {
    uStack_24 = DAT_8c0e4b44;
    uStack_2c = in_fr1;
    uStack_34 = DAT_8c0e4b44;
  }
  uStack_28 = DAT_8c0e4b40;
  uStack_3c = DAT_8c0e4b44;
  if (in_FPSCR_SZ == '\0') {
    uStack_34 = 0;
    uStack_30 = uStack_2c;
  }
  else {
    uStack_30 = 0;
  }
  puVar5 = &uStack_3c;
  uStack_38 = uStack_34;
  (*(code *)PTR_FUN_8c0e4b4c)(&uStack_30,ar4 + DAT_8c0e4b50,puVar5,a7);
  (*(code *)PTR_object_dtor_delete_8c0e4b54)(&uStack_3c,0xffffffff,puVar5,a7);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0e4b58)(&uStack_30,0xffffffff,puVar5,a7);
  return uVar2;
}



/* Class_12b758_m1_0e4b5c @ 8c0e4b5c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 Class_12b758_m1_0e4b5c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  double dVar4;
  undefined *puVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined *puStack_20;
  int iStack_1c;
  undefined *puStack_14;
  int iStack_10;
  
  if (*(int *)(DAT_8c0e4cb0 + ar4) == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0e4cb8,*(undefined4 *)(ar4 + DAT_8c0e4cb4));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e4cb4);
      dVar4 = (double)CONCAT44(DAT_8c0e4cbc,DAT_8c0e4cb8);
    }
    if (in_FPSCR_PR == '\0') {
      puStack_14 = (undefined *)(SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      puStack_14 = SUB84(dVar4 - dVar4,0);
    }
    iStack_10 = ar4;
    if (in_FPSCR_SZ != '\0') {
      puStack_14 = (undefined *)in_xd0;
      iStack_10 = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined **)(iStack_10 + DAT_8c0e4cb4) = puStack_14;
    }
    else {
      *(undefined8 *)(iStack_10 + DAT_8c0e4cb4) = CONCAT44(iStack_10,puStack_14);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined **)(ar4 + DAT_8c0e4cbc) = puStack_14;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0e4cbc) = CONCAT44(iStack_10,puStack_14);
    }
    puVar1 = DAT_8c0e4cc0;
    if (in_FPSCR_SZ == '\0') {
      puVar2 = *(undefined **)(ar4 + DAT_8c0e4cbc);
      puVar5 = DAT_8c0e4cc0;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e4cbc);
      puVar2 = DAT_8c0e4cc0;
      puVar5 = _DAT_8c0e4cc4;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar2 <= (float)puVar5) {
      if (in_FPSCR_SZ != '\0') {
        puStack_14 = _DAT_8c0e4cc4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(ar4 + DAT_8c0e4cb4) = DAT_8c0e4cc0;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0e4cb4) = CONCAT44(puStack_14,DAT_8c0e4cc0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(ar4 + DAT_8c0e4cbc) = puVar1;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0e4cbc) = CONCAT44(puStack_14,puVar1);
      }
    }
  }
  else if (*(int *)(DAT_8c0e4cb0 + ar4) == 3) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0e4cb8,*(undefined4 *)(ar4 + DAT_8c0e4cb4));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e4cb4);
      dVar4 = (double)CONCAT44(DAT_8c0e4cbc,DAT_8c0e4cb8);
    }
    if (in_FPSCR_PR == '\0') {
      puStack_20 = (undefined *)(SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      puStack_20 = SUB84(dVar4 + dVar4,0);
    }
    iStack_1c = ar4;
    if (in_FPSCR_SZ != '\0') {
      puStack_20 = (undefined *)in_xd0;
      iStack_1c = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined **)(iStack_1c + DAT_8c0e4cb4) = puStack_20;
    }
    else {
      *(undefined8 *)(iStack_1c + DAT_8c0e4cb4) = CONCAT44(iStack_1c,puStack_20);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined **)(ar4 + DAT_8c0e4cbc) = puStack_20;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0e4cbc) = CONCAT44(iStack_1c,puStack_20);
    }
    puVar1 = _DAT_8c0e4cc4;
    if (in_FPSCR_SZ == '\0') {
      puVar2 = *(undefined **)(ar4 + DAT_8c0e4cbc);
      puVar5 = _DAT_8c0e4cc4;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e4cbc);
      puVar2 = _DAT_8c0e4cc4;
      puVar5 = PTR_FUN_8c0e4cc8;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar2) {
      if (in_FPSCR_SZ != '\0') {
        puStack_20 = PTR_FUN_8c0e4cc8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(ar4 + DAT_8c0e4cb4) = _DAT_8c0e4cc4;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0e4cb4) = CONCAT44(puStack_20,_DAT_8c0e4cc4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(ar4 + DAT_8c0e4cbc) = puVar1;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0e4cbc) = CONCAT44(puStack_20,puVar1);
      }
      *(undefined4 *)(DAT_8c0e4cb0 + ar4) = 0;
    }
  }
  (*(code *)PTR_FUN_8c0e4cc8)(ar4,*ar5,ar6,ar7);
  (*(code *)PTR_Class_12bb08_m1_0da338_8c0e4ccc)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0e4cd4,*(undefined4 *)(ar4 + DAT_8c0e4cd0));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e4cd0);
    dVar4 = (double)CONCAT44(PTR_FUN_8c0e4cd8,DAT_8c0e4cd4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0e4cd0) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e4cd0) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)(ar4 + DAT_8c0e4cd0);
  }
  if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0e4cd0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0e4cd0) = (ulonglong)(uint)fVar3;
    }
  }
  (*(code *)PTR_FUN_8c0e4cd8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e4ce0)(ar4 + DAT_8c0e4cdc,ar5,ar6,ar7);
  return 1;
}



/* Class_12b758_m2_0e4ce4 @ 8c0e4ce4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b758_m2_0e4ce4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0e4d50)(ar4,*ar5,ar6,ar7);
  (*(code *)PTR_Class_12bb08_m2_0da5a8_8c0e4d54)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0e4d5c,*(undefined4 *)(ar4 + DAT_8c0e4d58));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0e4d58);
    dVar2 = (double)CONCAT44(PTR_FUN_8c0e4d60,DAT_8c0e4d5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0e4d58) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e4d58) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar4 + DAT_8c0e4d58);
  }
  if (in_FPSCR_PR == '\0' && fVar1 < 0.0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0e4d58) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0e4d58) = (ulonglong)(uint)fVar1;
    }
  }
  (*(code *)PTR_FUN_8c0e4d60)(ar4,ar5,ar6,ar7);
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
  undefined4 *a5;
  undefined1 *a6;
  int iVar2;
  undefined8 uVar3;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = in_PR;
  (*(code *)PTR_FUN_8c0e4fcc)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = *(undefined4 *)(ar4 + DAT_8c0e4fd0);
  }
  else {
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + DAT_8c0e4fd0);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = *(undefined4 *)(ar4 + DAT_8c0e4fd4);
  }
  else {
    uStack_14 = (undefined4)*(undefined8 *)(ar4 + DAT_8c0e4fd4);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = *(undefined4 *)(ar4 + DAT_8c0e4fd8);
  }
  else {
    uVar3 = *(undefined8 *)(ar4 + DAT_8c0e4fd8);
    uStack_10 = (undefined4)uVar3;
    uStack_c = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  a6 = auStack_24;
  a5 = &uStack_18;
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0e4fdc)(0,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e4fe0)(uVar1,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e4fe4)(uVar1,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e4fe8)(uVar1,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e4fec)(uVar1,a5,a6,ar7);
  if (*(int *)(DAT_8c0e4ff0 + ar4) != 0) {
    (*(code *)PTR_FUN_8c0e4ff4)(uVar1,a5,a6,ar7);
    (*(code *)PTR_FUN_8c0e5000)(ar4 + DAT_8c0e4ff8._4_4_,a5,a6,ar7);
  }
  if (*(int *)(DAT_8c0e4ff0 + ar4) == 2) {
    (*(code *)PTR_FUN_8c0e500c)(PTR_DAT_8c0e5004,a5,a6,ar7);
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    if (*(int *)(DAT_8c0e5010 + iVar2 * 0x24 + ar4) == 1) {
      **(undefined4 **)(DAT_8c0e5014 + ar4) = *(undefined4 *)(DAT_8c0e5018 + iVar2 * 0x24 + ar4);
      (*(code *)PTR_FUN_8c0e5020)(ar4 + DAT_8c0e501c,a5,a6,ar7);
      uVar1 = 0;
      (*(code *)PTR_FUN_8c0e5024)(0,a5,a6,ar7);
      (*(code *)PTR_FUN_8c0e5034)(uVar1,a5,a6,ar7);
      (*(code *)PTR_FUN_8c0e503c)(uVar1,a5,a6,ar7);
      (*(code *)PTR_FUN_8c0e5044)(ar4 + DAT_8c0e5040,a5,a6,ar7);
      (*(code *)PTR_FUN_8c0e5048)(1,a5,a6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0e5020)(ar4 + 0x28,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0e5044)(ar4 + 0x30,a5,a6,ar7);
  if (*(int *)(DAT_8c0e504c + ar4) == 1) {
    (*(code *)PTR_FUN_8c0e5054)(ar4 + DAT_8c0e5050,a5,a6,ar7);
  }
  (*(code *)PTR_FUN_8c0e5058)(ar4,a5,a6,ar7);
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
  (*(code *)PTR_FUN_8c0e5178)(ar5,uVar1,ar6,ar7);
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
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0e5208)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5210)(ar4 + DAT_8c0e520c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5224)(ar4 + DAT_8c0e5220,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + DAT_8c0e5228) + 0x10))((int *)(ar4 + DAT_8c0e5228),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e522c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0e522c) = (ulonglong)extraout_fr1;
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

undefined4 FUN_8c0e5238(int *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a6;
  int a4;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint a6_00;
  undefined *puVar7;
  float fVar8;
  undefined *puVar10;
  double dVar9;
  float fVar11;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte abStack_bc [2];
  short sStack_ba;
  short sStack_b8;
  short sStack_b6;
  int *piStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  
  abStack_bc[0] = (byte)ar6;
  uVar6 = 0;
  uVar5 = (undefined2)DAT_8c0e52e0;
  uVar1 = (*(code *)PTR_FUN_8c0e52e8)(DAT_8c0e52e4,ar5,ar6,ar7);
  *(undefined4 *)(abStack_bc + DAT_8c0e52ec) = uVar1;
  *(undefined4 *)(abStack_bc + DAT_8c0e52f0) = *(undefined4 *)(abStack_bc + DAT_8c0e52ec);
  pbVar4 = abStack_bc + DAT_8c0e52f4;
  pbVar4[0] = 0;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  pbVar4[3] = 0;
  a6 = (uint)abStack_bc[0];
  (*(code *)PTR_FUN_8c0e52f8)(ar4,ar5,a6,ar7);
  pbVar4 = (byte *)*DAT_8c0e52fc;
  uVar1 = (*(code *)PTR_FUN_8c0e5300)(*(undefined4 *)(abStack_bc + DAT_8c0e52f0),pbVar4,a6,ar7);
  *(undefined4 *)(abStack_bc + DAT_8c0e52e0) = uVar1;
  if ((*(int *)(abStack_bc + DAT_8c0e52e0) != 4) ||
     (iStack_40 = (*(code *)PTR_FUN_8c0e5304)(ar5,pbVar4,a6,ar7), iStack_40 != 1))
  goto LAB_8c0e565a;
  if (*(int *)(DAT_8c0e5308 + (int)ar4) == 0) {
    if (*(int *)(DAT_8c0e53a8 + (int)ar4) != 0) {
      uStack_44 = (*(code *)PTR_get_field_24_05c284_8c0e53ac)
                            (*(undefined4 *)(DAT_8c0e53a8 + (int)ar4),pbVar4,a6,ar7);
      *(undefined4 *)(abStack_bc + DAT_8c0e53b0) = uStack_44;
      uStack_48 = (**(code **)(DAT_8c0e53b4 + *(int *)(*(int *)(DAT_8c0e53a8 + (int)ar4) + 8)))
                            (*(int *)(DAT_8c0e53a8 + (int)ar4),pbVar4,a6,ar7);
      *(undefined4 *)(abStack_bc + DAT_8c0e53b8) = uStack_48;
      if ((((*(int *)(abStack_bc + DAT_8c0e53b0) == 10) &&
           (*(int *)(abStack_bc + DAT_8c0e53b8) == 0x12)) ||
          (*(int *)(abStack_bc + DAT_8c0e53b0) == 0xb)) ||
         (*(int *)(abStack_bc + DAT_8c0e53b0) == 0xc)) {
LAB_8c0e539a:
        pbVar4 = (byte *)0x2;
        (*(code *)PTR_FUN_8c0e53c4)(DAT_8c0e53c0,2,a6,ar7);
      }
      else {
        if (*(int *)(abStack_bc + DAT_8c0e53b0) == 0xe) {
          uVar1 = (**(code **)(DAT_8c0e53bc + *(int *)(*(int *)(DAT_8c0e53a8 + (int)ar4) + 8)))
                            (*(int *)(DAT_8c0e53a8 + (int)ar4),pbVar4,a6,ar7);
          sStack_b6 = (short)uVar1;
          if (sStack_b6 != 0) goto LAB_8c0e539a;
        }
        iStack_4c = (**(code **)(DAT_8c0e5418 + *(int *)(*(int *)(DAT_8c0e5414 + (int)ar4) + 8)))
                              (*(int *)(DAT_8c0e5414 + (int)ar4),pbVar4,a6,ar7);
        if (iStack_4c == 1) {
          uStack_50 = (**(code **)(*ar4 + 0x58))(ar4,pbVar4,a6,ar7);
          (*(code *)PTR_FUN_8c0e541c)(ar5,uStack_50,a6,ar7);
          pbVar4 = (byte *)0x1;
          (*(code *)PTR_FUN_8c0e5420)(ar5,1,a6,ar7);
        }
        else {
          pbVar4 = (byte *)0x2;
          (*(code *)PTR_FUN_8c0e5438)(DAT_8c0e5434,2,a6,ar7);
        }
      }
    }
  }
  else if (*(int *)(DAT_8c0e5308 + (int)ar4) == 2) {
    uStack_54 = (*(code *)PTR_get_field_24_05c284_8c0e54cc)
                          (*(undefined4 *)(DAT_8c0e54c8 + (int)ar4),pbVar4,a6,ar7);
    *(undefined4 *)(abStack_bc + DAT_8c0e54d0) = uStack_54;
    uStack_58 = (**(code **)(DAT_8c0e54d4 + *(int *)(*(int *)(DAT_8c0e54c8 + (int)ar4) + 8)))
                          (*(int *)(DAT_8c0e54c8 + (int)ar4),pbVar4,a6,ar7);
    *(undefined4 *)(abStack_bc + DAT_8c0e54d8) = uStack_58;
    if (((*(int *)(abStack_bc + DAT_8c0e54d0) == 10) &&
        (*(int *)(abStack_bc + DAT_8c0e54d8) == 0x12)) ||
       ((*(int *)(abStack_bc + DAT_8c0e54d0) == 0xb || (*(int *)(abStack_bc + DAT_8c0e54d0) == 0xc))
       )) {
LAB_8c0e54b8:
      pbVar4 = (byte *)0x2;
      (*(code *)PTR_FUN_8c0e54e4)(DAT_8c0e54e0,2,a6,ar7);
    }
    else {
      if (*(int *)(abStack_bc + DAT_8c0e54d0) == 0xe) {
        uVar1 = (**(code **)(DAT_8c0e54dc + *(int *)(*(int *)(DAT_8c0e54c8 + (int)ar4) + 8)))
                          (*(int *)(DAT_8c0e54c8 + (int)ar4),pbVar4,a6,ar7);
        sStack_b8 = (short)uVar1;
        if (sStack_b8 != 0) goto LAB_8c0e54b8;
      }
      iStack_5c = (**(code **)(DAT_8c0e5554 + *(int *)(*(int *)(DAT_8c0e5550 + (int)ar4) + 8)))
                            (*(int *)(DAT_8c0e5550 + (int)ar4),pbVar4,a6,ar7);
      if ((iStack_5c == 1) &&
         (*(int *)(DAT_8c0e5558 + (int)ar4) == *(int *)(DAT_8c0e5550 + (int)ar4))) {
        (**(code **)(*ar4 + 0x58))(ar4,pbVar4,a6,ar7);
        (*(code *)PTR_FUN_8c0e555c)(ar5,*(undefined4 *)(DAT_8c0e5550 + (int)ar4),a6,ar7);
        (*(code *)PTR_FUN_8c0e5560)(ar5,1,a6,ar7);
        pbVar4 = ar5;
        (*(code *)PTR_FUN_8c0e5570)(ar4,ar5,a6,ar7);
      }
      else {
        pbVar4 = (byte *)0x2;
        (*(code *)PTR_FUN_8c0e55f8)(DAT_8c0e55f4,2,a6,ar7);
      }
    }
  }
  iVar2 = (*(code *)PTR_FUN_8c0e55fc)(ar5,pbVar4,a6,ar7);
  iStack_88 = iVar2;
  iStack_60 = iVar2;
  if ((iVar2 != 0) &&
     (iStack_64 = (*(code *)PTR_get_field_24_05c284_8c0e5600)(iVar2,pbVar4,a6,ar7), iStack_64 == 10)
     ) {
    uVar1 = (**(code **)(DAT_8c0e5604 + *(int *)(iVar2 + 8)))(iVar2,pbVar4,a6,ar7);
    sStack_ba = (short)uVar1;
    if (sStack_ba == 3) {
      pbVar4 = (byte *)0xd;
      iStack_68 = (*(code *)PTR_FUN_8c0e5608)(ar4,0xd,a6,ar7);
      iStack_8c = iStack_68;
      *(int *)(abStack_bc + DAT_8c0e560c) = iStack_68;
      if (iStack_8c != 0) {
        for (a6_00 = 0; (int)a6_00 < *(int *)(abStack_bc + DAT_8c0e5684); a6_00 = a6_00 + 1) {
          pbVar4 = (byte *)0xd;
          a6 = a6_00;
          a4 = (*(code *)PTR_FUN_8c0e5678)(ar4,0xd,a6_00,ar7);
          iStack_6c = a4;
          iStack_70 = (**(code **)(DAT_8c0e567c + *(int *)(a4 + 8)))(a4,pbVar4,a6,ar7);
          if (iStack_70 == iVar2) {
            (**(code **)(DAT_8c0e5680 + *(int *)(a4 + 8)))(a4,pbVar4,a6,ar7);
          }
        }
      }
    }
  }
LAB_8c0e565a:
  iVar2 = *(int *)(DAT_8c0e5688 + (int)ar4);
  if (iVar2 == 0) {
    iStack_74 = (*(code *)PTR_FUN_8c0e56c8)(ar5,pbVar4,a6,ar7);
    if (iStack_74 == 1) {
      *(undefined4 *)(DAT_8c0e56cc + (int)ar4) = 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c0e56d0) = DAT_8c0e56d4;
      }
      else {
        *(undefined8 *)((int)ar4 + DAT_8c0e56d0) = CONCAT44(_DAT_8c0e56d8,DAT_8c0e56d4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + _DAT_8c0e56d8) = DAT_8c0e56d4;
      }
      else {
        *(undefined8 *)((int)ar4 + _DAT_8c0e56d8) = CONCAT44(_DAT_8c0e56d8,DAT_8c0e56d4);
      }
    }
  }
  else if (iVar2 == 1) {
    puVar7 = DAT_8c0e5718;
    puVar10 = PTR_FUN_8c0e571c;
    if (in_FPSCR_SZ == '\0') {
      puVar7 = *(undefined **)((int)ar4 + DAT_8c0e5714);
      puVar10 = DAT_8c0e5718;
    }
    if (((float)puVar7 == (float)puVar10) &&
       (iStack_78 = (*(code *)PTR_FUN_8c0e571c)(ar5,pbVar4,a6,ar7), iStack_78 == 1)) {
      *(undefined4 *)(DAT_8c0e5720 + (int)ar4) = 2;
    }
  }
  else if ((iVar2 == 2) &&
          (iStack_7c = (*(code *)PTR_FUN_8c0e5744)(ar5,pbVar4,a6,ar7), iStack_7c == 1)) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      iStack_90 = iVar2;
      if (*(int *)((int)ar4 + DAT_8c0e589c + iVar2 * 0x24) == 0) {
        puVar3 = (undefined8 *)((int)ar4 + DAT_8c0e58a0 + iVar2 * 0x24);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar3 = (undefined4)DAT_8c0e58a4;
        }
        else {
          *puVar3 = CONCAT44(DAT_8c0e58a4._4_4_,(undefined4)DAT_8c0e58a4);
        }
        puVar3 = (undefined8 *)((int)ar4 + DAT_8c0e58a4._4_4_ + iVar2 * 0x24);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar3 = DAT_8c0e58ac;
        }
        else {
          *puVar3 = CONCAT44(_DAT_8c0e58b0,DAT_8c0e58ac);
        }
        puVar3 = (undefined8 *)((int)ar4 + _DAT_8c0e58b0 + iVar2 * 0x24);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar3 = DAT_8c0e58b4;
        }
        else {
          *puVar3 = CONCAT44(_DAT_8c0e58b8,DAT_8c0e58b4);
        }
        puVar3 = (undefined8 *)((int)ar4 + _DAT_8c0e58b8 + iVar2 * 0x24);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar3 = DAT_8c0e58bc;
        }
        else {
          *puVar3 = CONCAT44(_DAT_8c0e58c0,DAT_8c0e58bc);
        }
        puVar3 = (undefined8 *)((int)ar4 + _DAT_8c0e58c0 + iVar2 * 0x24);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar3 = DAT_8c0e58c4;
        }
        else {
          *puVar3 = CONCAT44(_DAT_8c0e58c8,DAT_8c0e58c4);
        }
        *(undefined4 *)((int)ar4 + _DAT_8c0e58c8 + iVar2 * 0x24) = DAT_8c0e58cc;
        *(undefined4 *)((int)ar4 + DAT_8c0e58d0 + iVar2 * 0x24) = 0;
        *(undefined4 *)((int)ar4 + DAT_8c0e589c + iVar2 * 0x24) = 1;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0e58d8,*(undefined4 *)((int)ar4 + DAT_8c0e58d4));
        }
        else {
          in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c0e58d4);
          dVar9 = (double)CONCAT44(DAT_8c0e58dc,DAT_8c0e58d8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar4 + DAT_8c0e58d4) = fVar8;
        }
        else {
          *(undefined8 *)((int)ar4 + DAT_8c0e58d4) = in_xd0;
        }
        fVar8 = DAT_8c0e58dc;
        fVar11 = DAT_8c0e58e0;
        if (in_FPSCR_SZ == '\0') {
          fVar8 = *(float *)((int)ar4 + DAT_8c0e58d4);
          fVar11 = DAT_8c0e58dc;
        }
        if (in_FPSCR_PR == '\0' && fVar11 < fVar8) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)ar4 + DAT_8c0e58d4) = DAT_8c0e58dc;
          }
          else {
            *(ulonglong *)((int)ar4 + DAT_8c0e58d4) = CONCAT44(DAT_8c0e58e0,DAT_8c0e58dc);
          }
        }
        uVar6 = SUB42(DAT_8c0e58e0,0);
        uVar5 = (undefined2)DAT_8c0e58e4;
        piStack_b4 = ar4;
        iStack_b0 = iVar2;
        iStack_ac = iVar2;
        iStack_a8 = iVar2;
        iStack_a4 = iVar2;
        iStack_a0 = iVar2;
        iStack_9c = iVar2;
        iStack_98 = iVar2;
        iStack_94 = iVar2;
        uStack_80 = (*(code *)PTR_FUN_8c0e58ec)(DAT_8c0e58e8,pbVar4,a6,ar7);
        *(undefined4 *)(abStack_bc + DAT_8c0e58f0) = uStack_80;
        a6 = 0xe;
        (*(code *)PTR_FUN_8c0e58f4)(DAT_8c0e58e8,*(undefined4 *)(abStack_bc + DAT_8c0e58f0),0xe,ar7)
        ;
        pbVar4 = abStack_bc + DAT_8c0e58f0;
        (*(code *)PTR_FUN_8c0e58f8)(DAT_8c0e58e8,pbVar4,a6,ar7);
        break;
      }
    }
  }
  if (*(int *)(DAT_8c0e596c + (int)ar4) != 0) {
    *(undefined2 *)(DAT_8c0e5970 + (int)ar4) = uVar6;
    *(short *)(DAT_8c0e5974 + (int)ar4) = (short)DAT_8c0e5978;
    *(undefined2 *)(DAT_8c0e597c + (int)ar4) = uVar6;
    *(undefined2 *)(DAT_8c0e5980 + (int)ar4) = 0x60;
    *(undefined2 *)(DAT_8c0e5984 + (int)ar4) = uVar5;
    *(undefined2 *)(DAT_8c0e5988 + (int)ar4) = 0x60;
    *(undefined2 *)(DAT_8c0e598c + (int)ar4) = uVar5;
    *(short *)(DAT_8c0e5990 + (int)ar4) = (short)DAT_8c0e5978;
  }
  iVar2 = (*(code *)PTR_FUN_8c0e5994)(ar5,pbVar4,a6,ar7);
  if (iVar2 == 1) {
    *(undefined4 *)(DAT_8c0e596c + (int)ar4) = 3;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e5aa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e5acc) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e5acc) = CONCAT44(in_fr4,in_fr5);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e5ad0) = DAT_8c0e5ad4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e5ad0) = CONCAT44(DAT_8c0e5ad8,DAT_8c0e5ad4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e5ad8) = DAT_8c0e5adc;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e5ad8) = CONCAT44(_FUN_8c0e5ae0,DAT_8c0e5adc);
  }
  return &DAT_8c0e5adc;
}



/* FUN_8c0e5ae0 @ 8c0e5ae0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5ae0(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a5;
  
  a5 = ar5;
  (*(code *)PTR_s_Failed_to_set_texture_wrap_0d6058_8c0e5b20)(ar4 + DAT_8c0e5b1c,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0e5b28)(ar4 + DAT_8c0e5b24,a5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e5b2c)(ar4,ar5 & 0xff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5b30 @ 8c0e5b30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5b30(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a5;
  
  a5 = ar5;
  (*(code *)PTR_s_Failed_wrap_0d6074_8c0e5b70)(ar4 + DAT_8c0e5b6c,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_s_015312_8c0e5b78)(ar4 + DAT_8c0e5b74,a5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_Failed_wrap_0d9b8c_8c0e5b7c)(ar4,ar5 & 0xff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e5b80 @ 8c0e5b80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0e5b80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *in_stack_00000000;
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc | 1;
  *in_stack_00000000 = uStack_4;
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
  undefined *a6;
  int a7;
  
  (*(code *)PTR_FUN_8c0e5c14)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c10,
             PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c0c,ar4);
  a6 = PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c0c;
  a7 = ar4;
  (*(code *)PTR_FUN_8c0e5c18)(ar5,PTR_s_GRAPHICS_COMMON_8c0e5c08 + DAT_8c0e5c10,a6,ar4);
  uVar1 = (*(code *)PTR_s_GRAPHICS_ENV_0d60cc_8c0e5c20)(ar4 + DAT_8c0e5c1c,ar5,a6,a7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e5c4c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  uVar1 = 1;
  (**(code **)(DAT_8c0e5d50 + *ar4))(ar4,1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = DAT_8c0e5d54;
  }
  else {
    *(ulonglong *)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x1f) = CONCAT44(DAT_8c0e5d58,DAT_8c0e5d54);
  }
  (*(code *)PTR_FUN_8c0e5d74)((int)ar4 + DAT_8c0e5d70,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5d74)((int)ar4 + DAT_8c0e5d80,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5d74)((int)ar4 + DAT_8c0e5d90,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e5d74)((int)ar4 + DAT_8c0e5d98,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e5da8)((int)ar4 + DAT_8c0e5da4,uVar1,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 * s_Outside_0e5e56(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *a6;
  undefined4 uVar5;
  undefined4 in_fr1;
  undefined8 uVar6;
  char in_FPSCR_SZ;
  
  uVar5 = 0;
  uVar4 = 2;
  puVar3 = PTR_s_GRAPHICS_COMMON_8c0e6030 + DAT_8c0e6034;
  (*(code *)PTR_FUN_8c0e6038)(ar4,puVar3,2,0);
  *ar4 = PTR_DAT_8c0e603c;
  (*(code *)PTR_FUN_8c0e6044)((int)ar4 + DAT_8c0e6040,puVar3,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0e604c)((int)ar4 + DAT_8c0e6048,puVar3,uVar4,uVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0e6054)((int)ar4 + DAT_8c0e6050,puVar3,uVar4,uVar5);
  (*(code *)PTR_s_66_JUNGLE_RAIN_5_0d7f1a_8c0e605c)((int)ar4 + DAT_8c0e6058,puVar3,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0e606c)
            ((int)ar4 + DAT_8c0e6068,PTR_LAB_8c0e6064,PTR_free_if_nonnull_wrap_0d6ef8_8c0e6060,0xc);
  uVar4 = 0x18;
  puVar3 = PTR_FUN_8c0e6074;
  a6 = PTR_free_if_nonnull_wrap_0cffc8_8c0e6070;
  (*(code *)PTR_FUN_8c0e606c)
            ((int)ar4 + DAT_8c0e6078,PTR_FUN_8c0e6074,PTR_free_if_nonnull_wrap_0cffc8_8c0e6070,0x18)
  ;
  (*(code *)PTR_FUN_8c0e607c)(ar4,puVar3,a6,uVar4);
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44((undefined4)DAT_8c0e6084,in_fr1);
    *(undefined4 *)((int)ar4 + DAT_8c0e6080) = (undefined4)DAT_8c0e6084;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e6084._4_4_,(undefined4)DAT_8c0e6084);
    *(undefined8 *)((int)ar4 + DAT_8c0e6080) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0e608c,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e6084._4_4_) = DAT_8c0e608c;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e6090,DAT_8c0e608c);
    *(undefined8 *)((int)ar4 + DAT_8c0e6084._4_4_) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44((undefined4)DAT_8c0e6018,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e6090) = (undefined4)DAT_8c0e6018;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e6018._4_4_,(undefined4)DAT_8c0e6018);
    *(undefined8 *)((int)ar4 + DAT_8c0e6090) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0e6098,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e6094) = DAT_8c0e6098;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e609c,DAT_8c0e6098);
    *(undefined8 *)((int)ar4 + DAT_8c0e6094) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0e60a0,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e609c) = DAT_8c0e60a0;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e60a4,DAT_8c0e60a0);
    *(undefined8 *)((int)ar4 + DAT_8c0e609c) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0e60a8,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e60a4) = DAT_8c0e60a8;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e60ac,DAT_8c0e60a8);
    *(undefined8 *)((int)ar4 + DAT_8c0e60a4) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0e60b0,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e60ac) = DAT_8c0e60b0;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e60b4,DAT_8c0e60b0);
    *(undefined8 *)((int)ar4 + DAT_8c0e60ac) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0e60b8,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e60b4) = DAT_8c0e60b8;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e60bc,DAT_8c0e60b8);
    *(undefined8 *)((int)ar4 + DAT_8c0e60b4) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0e60c0,(int)uVar6);
    *(undefined4 *)((int)ar4 + DAT_8c0e60bc) = DAT_8c0e60c0;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0e60c4,DAT_8c0e60c0);
    *(undefined8 *)((int)ar4 + DAT_8c0e60bc) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e60c4) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e60c4) = CONCAT44(0x3f800000,(int)uVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e60c8) = DAT_8c0e60cc;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e60c8) = CONCAT44(DAT_8c0e60d0,DAT_8c0e60cc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e60d0) = DAT_8c0e60d4;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e60d0) = CONCAT44(DAT_8c0e60d8,DAT_8c0e60d4);
  }
  puVar1 = PTR_DAT_8c0e60dc;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0e60d8);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0e60dc + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0e60dc;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0e60e4;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0e60e0);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0e60e4 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0e60e4;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0e60ec;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0e60e8);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0e60ec + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0e60ec;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0e60f4;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0e60f0);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0e60f4 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0e60f4;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0e60fc;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0e60f8);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0e60fc + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0e60fc;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar1 + 8);
  *(undefined4 *)(DAT_8c0e6100 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0e6078 + (int)ar4) =
       *(undefined4 *)(PTR_PTR_8c0e6104 + *(int *)(DAT_8c0e6100 + (int)ar4) * 4);
  *(undefined4 *)(DAT_8c0e6108 + (int)ar4) = DAT_8c0e610c;
  (*(code *)PTR_FUN_8c0e6110)(puVar2,puVar3,a6,uVar4);
  return ar4;
}



/* FUN_8c0e6114 @ 8c0e6114 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0e6114(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c0e61c0)(ar4 + DAT_8c0e61bc,0xffffffff,ar6,ar7);
    (*(code *)PTR_vec_delete_array_8c0e61cc)
              (ar4 + DAT_8c0e61c8,PTR_free_if_nonnull_wrap_0cffc8_8c0e61c4,0x18,2);
    a6 = 0x38;
    a7 = DAT_8c0e61d0;
    (*(code *)PTR_vec_delete_array_8c0e61cc)(ar4 + DAT_8c0e61d8,PTR_FUN_8c0e61d4,0x38,DAT_8c0e61d0);
    (*(code *)PTR_FUN_8c0e61dc)(ar4 + 0x78,0xffffffff,a6,a7);
    (*(code *)PTR_FUN_8c0e61e0)(ar4 + 0x50,0xffffffff,a6,a7);
    (*(code *)PTR_free_if_nonnull_wrap_0d8168_8c0e61e4)(ar4 + 0x34,0xffffffff,a6,a7);
    (*(code *)PTR_object_dtor_delete_8c0e61e8)(ar4 + 0x28,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0e61ec)(ar4 + 0x18,0xffffffff,a6,a7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0e61ec)(ar4 + 8,0xffffffff,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0e61f0)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* Class_12b580_m0_0e61f4 @ 8c0e61f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b580_m0_0e61f4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0e628c;
    (*(code *)PTR_vec_delete_array_8c0e6298)
              ((int)ar4 + DAT_8c0e6294,PTR_free_if_nonnull_wrap_0cffc8_8c0e6290,0x18,1);
    a7 = 100;
    a6 = 0xc;
    (*(code *)PTR_vec_delete_array_8c0e6298)
              ((int)ar4 + DAT_8c0e62a0,PTR_free_if_nonnull_wrap_0d6ef8_8c0e629c,0xc,100);
    (*(code *)PTR_FUN_8c0e62a8)((int)ar4 + DAT_8c0e62a4,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0e62b0)((int)ar4 + DAT_8c0e62ac,0xffffffff,a6,a7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0e62b8)((int)ar4 + DAT_8c0e62b4,0xffffffff,a6,a7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0e62c0)((int)ar4 + DAT_8c0e62bc,0xffffffff,a6,a7);
    a5 = 0;
    (*(code *)PTR_Class_12bb08_m0_0da208_8c0e62c4)(ar4,0,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0e62c8)(ar4,a5,a6,a7);
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
  int a4;
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
      a4 = (*(code *)PTR_FUN_8c0e6524)(ar4 + DAT_8c0e651c,uVar3,iVar4,ar7);
      for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        uVar3 = (*(code *)PTR_get_field_b8_101178_8c0e6528)
                          (*(undefined4 *)(DAT_8c0e6514 + ar5),uVar3,iVar4,ar7);
        uVar3 = uVar3 & 0xff;
        (**(code **)(*(int *)(*(int *)(a4 + 8) + 8) + 0x50))(*(int *)(a4 + 8),uVar3,iVar4,ar7);
        a4 = (*(code *)PTR_list_node_next_8c0e652c)(a4,uVar3,iVar4,ar7);
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
  undefined4 a5;
  int a6;
  int iVar2;
  
  (*(code *)PTR_Class_12bb08_m2_0da5a8_8c0e65e8)(ar4,ar5,ar6,ar7);
  a5 = *(undefined4 *)(DAT_8c0e65ec + ar4);
  (*(code *)PTR_s_64_JUNGLE_NIGHT_0e7062_8c0e65f0)(ar4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e65f4)(ar4,a5,ar6,ar7);
  a6 = ar4 + DAT_8c0e65f8;
  (*(code *)PTR_FUN_8c0e65fc)(ar4 + DAT_8c0e65ec,ar5,a6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0e6604)(ar4 + iVar2 * 0x68 + DAT_8c0e6600,ar5,a6,ar7);
    if (iVar1 == 1) {
      ar5 = ar4;
      (*(code *)PTR_FUN_8c0e6608)(ar4 + iVar2 * 0x68 + DAT_8c0e6600,ar4,a6,ar7);
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
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0e66cc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e66d4)(ar4 + DAT_8c0e66d0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x78) = *(undefined4 *)(ar4 + DAT_8c0e66d8);
  }
  else {
    *(undefined8 *)(ar4 + 0x78) = *(undefined8 *)(ar4 + DAT_8c0e66d8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)(ar4 + DAT_8c0e66dc);
  }
  else {
    *(undefined8 *)(ar4 + 0x7c) = *(undefined8 *)(ar4 + DAT_8c0e66dc);
  }
  (*(code *)PTR_FUN_8c0e66e0)(ar4 + DAT_8c0e66d0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e66e4)(ar4 + 0x28,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e66e8)(ar4 + 0x30,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0e66f0)(ar4 + iVar2 * 0x68 + DAT_8c0e66ec,ar5,ar6,ar7);
    if (iVar1 == 1) {
      ar6 = ar4 + 4;
      ar5 = ar4 + 0xc;
      (*(code *)PTR_FUN_8c0e66f4)(ar4 + iVar2 * 0x68 + DAT_8c0e66ec,ar5,ar6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0e66f8)(ar4,ar5,ar6,ar7);
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
  (*(code *)PTR_FUN_8c0e67f0)(ar5,uVar1,ar6,ar7);
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
  uint a6;
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  
  a6 = (uint)(byte)ar6;
  (*(code *)PTR_FUN_8c0e68ac)(ar4,ar5,a6,ar7);
  a5 = ar5;
  (*(code *)PTR_pure_virtual_stub_8c0e68b8)(ar4,ar5,a6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0e68bc)(ar5,a5,a6,ar7);
  if (iVar1 == 1) {
    uVar2 = (*(code *)PTR_get_field_cc_0dfee8_8c0e68c0)(ar5,a5,a6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0e68c4)(uVar2,a5,a6,ar7);
    (*(code *)PTR_FUN_8c0e68c8)(uVar2,a5,a6,ar7);
  }
  iVar1 = (*(code *)PTR_FUN_8c0e68cc)(ar5,a5,a6,ar7);
  if (iVar1 == 1) {
    uVar2 = (*(code *)PTR_get_field_cc_0dfee8_8c0e68c0)(ar5,a5,a6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0e68c4)(uVar2,a5,a6,ar7);
    (*(code *)PTR_FUN_8c0e68d0)(uVar2,a5,a6,ar7);
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
  undefined4 uVar2;
  undefined4 a5;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0e6b90)(&uStack_24,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0e6b94)(&uStack_30,uVar2,ar6,ar7);
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = (*(code *)PTR_FUN_8c0e6ba4)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6ba0,
                     PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6b9c,&uStack_34);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0e6bac)
              (PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6ba0,
               PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6ba8,0,2);
  }
  puVar4 = &uStack_38;
  puVar3 = PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6b9c;
  iVar1 = (*(code *)PTR_FUN_8c0e6bb0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6ba0,puVar3,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    puVar3 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e6bac)
              (PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6ba0,
               PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6bb4,0,2);
  }
  (*(code *)PTR_FUN_8c0e6bb8)(ar4 + 0x30,uStack_34,puVar3,puVar4);
  a7 = 0xd;
  uVar2 = DAT_8c0e6bbc;
  (*(code *)PTR_FUN_8c0e6bc8)(DAT_8c0e6bc4,DAT_8c0e6bc0,DAT_8c0e6bbc,0xd);
  for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
    *(uint *)(uVar5 * 0xc + DAT_8c0e6bc0 + 4) =
         *(uint *)(uVar5 * 0xc + DAT_8c0e6bc0 + 4) | DAT_8c0e6bcc;
  }
  a5 = DAT_8c0e6bc4;
  (**(code **)(*(int *)(ar4 + 0x28) + 8))((int *)(ar4 + 0x28),DAT_8c0e6bc4,uVar2,a7);
  (*(code *)PTR_get_field_4_0253e4_8c0e6bd0)(ar4 + 0x28,a5,uVar2,a7);
  uVar2 = (*(code *)PTR_get_field_4_0253e4_8c0e6bd0)(ar4 + 0x28,a5,uVar2,a7);
  puVar3 = PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6b9c;
  iVar1 = (*(code *)PTR_FUN_8c0e6bd8)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6bd4,puVar3,uVar2);
  if (iVar1 == 0) {
    uVar2 = 2;
    puVar3 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0e6bac)
              (PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6be0,
               PTR_s_GRAPHICS_COMMON_8c0e6b98 + DAT_8c0e6bdc,0,2);
  }
  (*(code *)PTR_s_GRAPHICS_COMMON_0dbb1a_8c0e6be4)(ar4,ar5,puVar3,uVar2);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = 0;
    uStack_28 = in_fr1;
  }
  else {
    uStack_18 = DAT_8c0e6bec;
    uStack_20 = in_fr1;
    uStack_28 = DAT_8c0e6bec;
  }
  uStack_1c = DAT_8c0e6be8;
  uStack_30 = DAT_8c0e6bec;
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = 0;
    uStack_24 = uStack_20;
  }
  else {
    uStack_24 = 0;
  }
  puVar4 = &uStack_30;
  uStack_2c = uStack_28;
  (*(code *)PTR_FUN_8c0e6bf4)(&uStack_24,ar4 + DAT_8c0e6bf0,puVar4,uVar2);
  (*(code *)PTR_object_dtor_delete_8c0e6bf8)(&uStack_30,0xffffffff,puVar4,uVar2);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0e6bfc)(&uStack_24,0xffffffff,puVar4,uVar2);
  return uVar2;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0e6c54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e6c78) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e6c78) = CONCAT44(in_fr4,in_fr5);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e6c7c) = DAT_8c0e6c80;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e6c7c) = CONCAT44(DAT_8c0e6c84,DAT_8c0e6c80);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0e6c84) = DAT_8c0e6c88;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0e6c84) = CONCAT44(_FUN_8c0e6c8c,DAT_8c0e6c88);
  }
  return &DAT_8c0e6c88;
}



/* FUN_8c0e6c8c @ 8c0e6c8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6c8c(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a5;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c0e6cc8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0e6ccc)(ar4 + 4,a5,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = (*(code *)PTR_noop_0d8458_8c0e6cd4)(ar4 + DAT_8c0e6cd0,a5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0e6cd8 @ 8c0e6cd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6cd8(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a5;
  
  a5 = ar5;
  (*(code *)PTR_s_Failed_wrap_0d9b8c_8c0e6d14)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_Failed_s_015312_8c0e6d18)(ar4 + 4,a5,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = (*(code *)PTR_noop_0d845c_8c0e6d20)(ar4 + DAT_8c0e6d1c,a5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0e6d24 @ 8c0e6d24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6d24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint a5;
  undefined4 uVar1;
  
  a5 = (uint)(byte)ar5;
  (*(code *)PTR_FUN_8c0e6d68)(ar4,a5,ar6,ar7);
  if (*(int *)(DAT_8c0e6d6c + ar4) != -1) {
    a5 = *(uint *)(DAT_8c0e6d6c + ar4);
    (*(code *)PTR_FUN_8c0e6d74)(DAT_8c0e6d70,a5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0e6d7c)(ar4 + DAT_8c0e6d78,a5,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e6ef0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  uVar1 = 1;
  (**(code **)(DAT_8c0e6ff4 + *ar4))(ar4,1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = DAT_8c0e6ff8;
  }
  else {
    *(ulonglong *)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x1f) = CONCAT44(DAT_8c0e6ffc,DAT_8c0e6ff8);
  }
  (*(code *)PTR_FUN_8c0e7018)((int)ar4 + DAT_8c0e7014,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e7018)((int)ar4 + DAT_8c0e7028,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e7018)((int)ar4 + DAT_8c0e7038,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0e7018)((int)ar4 + DAT_8c0e7048,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e7058)((int)ar4 + DAT_8c0e7054,uVar1,ar6,ar7);
  return uVar1;
}



/* s_64_JUNGLE_NIGHT_0e7062 @ 8c0e705c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e706e) */
/* WARNING: Unknown calling convention */

float s_64_JUNGLE_NIGHT_0e7062(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  uint in_fr1;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 in_dr14;
  double dVar6;
  undefined8 in_xd14;
  bool bVar7;
  undefined4 in_PR;
  int iVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar2 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = uVar1;
  }
  else {
    puVar2 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = in_PR;
  *(undefined4 *)((int)puVar2 + -0x28) = ar5;
  fVar5 = (float)*(int *)((int)puVar2 + -0x28);
  dVar6 = (double)CONCAT44(uVar1,fVar5);
  dVar3 = (double)(ulonglong)in_fr1;
  if (in_FPSCR_PR == '\0') {
    bVar7 = fVar5 < 0.0;
  }
  else {
    bVar7 = dVar6 < dVar3;
  }
  if (bVar7) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0e714c,in_fr1);
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c0e7150,DAT_8c0e714c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(uVar1,fVar5 + (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar6 = dVar6 + dVar3;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0e7150,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0e7154,DAT_8c0e7150);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar6,0) * (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    dVar6 = dVar6 * dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0e7154,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0e7158,DAT_8c0e7154);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar6,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    dVar6 = dVar6 / dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0e7158,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0e715c,DAT_8c0e7158);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar6,0) * (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    dVar6 = dVar6 * dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0e7150,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0e7154,DAT_8c0e7150);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar3 >> 0x20);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar3;
    iVar8 = (int)dVar6;
  }
  (*(code *)PTR_FUN_8c0e715c)(iVar8,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0xc) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)((int)puVar2 + -0xc) = dVar3;
  }
  (*(code *)PTR_FUN_8c0e7160)(iVar8,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0x10) = (int)((ulonglong)dVar3 >> 0x20);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)((int)puVar2 + -0x10));
  }
  else {
    *(double *)((int)puVar2 + -0x10) = dVar3;
    in_xd14 = *(undefined8 *)((int)puVar2 + -0x10);
  }
  if (*(int *)(DAT_8c0e7164 + ar4) == 0) {
    uVar1 = (*(code *)PTR_rand_8c0e7168)(iVar8,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar2 + -0x14) = uVar1;
    uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0e716c)
                      (*(undefined4 *)((int)puVar2 + -0x14),2,ar6,ar7);
    *(undefined4 *)((int)puVar2 + -0x18) = uVar1;
    *(undefined4 *)(DAT_8c0e7170 + ar4) = *(undefined4 *)((int)puVar2 + -0x18);
    *(undefined4 *)((int)puVar2 + -0x1c) = *(undefined4 *)(DAT_8c0e7170 + ar4);
    *(undefined4 *)(DAT_8c0e7174 + ar4) =
         *(undefined4 *)(PTR_PTR_8c0e7178 + *(int *)((int)puVar2 + -0x1c) * 4);
  }
  else if (*(int *)(DAT_8c0e7164 + ar4) == DAT_8c0e717c) {
    *(undefined4 *)(DAT_8c0e7170 + ar4) = 2;
    *(undefined4 *)((int)puVar2 + -0x20) = *(undefined4 *)(DAT_8c0e7170 + ar4);
    *(undefined4 *)(DAT_8c0e7174 + ar4) =
         *(undefined4 *)(PTR_PTR_8c0e7178 + *(int *)((int)puVar2 + -0x20) * 4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0e7180,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0e7184,DAT_8c0e7180);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar2 + -0x24) = fVar5;
    dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x24),fVar5);
    fVar5 = *(float *)((int)puVar2 + -0x24);
    fVar4 = DAT_8c0e7184;
  }
  else {
    *(undefined8 *)((int)puVar2 + -0x24) = in_xd14;
    dVar6 = *(double *)((int)puVar2 + -0x24);
    fVar5 = DAT_8c0e7184;
    fVar4 = DAT_8c0e7188;
  }
  if (in_FPSCR_PR == '\0' && fVar4 < fVar5) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0e7184,SUB84(dVar6,0));
    }
    else {
      dVar6 = (double)CONCAT44(DAT_8c0e7188,DAT_8c0e7184);
    }
  }
  fVar5 = DAT_8c0e7188;
  if (in_FPSCR_PR == '\0') {
    iVar8 = (int)(float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    iVar8 = (int)dVar6;
  }
  *(int *)((int)DAT_8c0e7188 + ar4) = DAT_8c0e718c - iVar8;
  return fVar5;
}



/* FUN_8c0e7190 @ 8c0e7190 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e7190(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  ulonglong *puVar2;
  uint in_fr1;
  uint in_PR;
  char in_FPSCR_SZ;
  ulonglong uStack_10;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = (ulonglong)in_PR << 0x20;
  }
  else {
    uStack_10 = (ulonglong)in_fr1;
  }
  a5 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0e7258)(ar5,ar5,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(DAT_8c0e725c + ar4) != 0)) {
    (**(code **)(DAT_8c0e7260 + *(int *)(*(int *)(DAT_8c0e725c + ar4) + 8)))
              (*(int *)(DAT_8c0e725c + ar4),a5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0e7264)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e7268)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e726c)(ar4,ar5,ar6,ar7);
  puVar2 = &uStack_10;
  iVar1 = (*(code *)PTR_FUN_8c0e7270)(ar5,puVar2,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(DAT_8c0e725c + ar4) != 0)) {
    (**(code **)(DAT_8c0e7274 + *(int *)(*(int *)(DAT_8c0e725c + ar4) + 8)))
              (*(int *)(DAT_8c0e725c + ar4),puVar2,ar6,ar7);
  }
  else {
    puVar2 = &uStack_10;
    iVar1 = (*(code *)PTR_FUN_8c0e7270)(ar5,puVar2,ar6,ar7);
    if ((iVar1 == 2) && (*(int *)(DAT_8c0e725c + ar4) != 0)) {
      (**(code **)(DAT_8c0e7278 + *(int *)(*(int *)(DAT_8c0e725c + ar4) + 8)))
                (*(int *)(DAT_8c0e725c + ar4),puVar2,ar6,ar7);
    }
  }
  return 1;
}



/* FUN_8c0e727c @ 8c0e727c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e727c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  ulonglong *a5;
  int iVar3;
  uint in_fr1;
  uint in_PR;
  char in_FPSCR_SZ;
  ulonglong uStack_20;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = (ulonglong)in_PR << 0x20;
  }
  else {
    uStack_20 = (ulonglong)in_fr1;
  }
  if (*(int *)(DAT_8c0e73dc + ar4) != 0) {
    uVar2 = ar5;
    iVar1 = (*(code *)PTR_get_field_24_05c284_8c0e73e0)
                      (*(undefined4 *)(DAT_8c0e73dc + ar4),ar5,ar6,ar7);
    if ((iVar1 == 5) || (iVar1 == 7)) {
      uVar2 = 0;
      (**(code **)(DAT_8c0e73e4 + *(int *)(*(int *)(DAT_8c0e73dc + ar4) + 8)))
                (*(int *)(DAT_8c0e73dc + ar4),0,ar6,ar7);
    }
    iVar1 = (*(code *)PTR_FUN_8c0e73e8)(ar5,uVar2,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0e73f0)(ar4 + DAT_8c0e73ec,uVar2,ar6,ar7);
      a4 = (*(code *)PTR_FUN_8c0e73f4)(ar4 + DAT_8c0e73ec,uVar2,ar6,ar7);
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = 2;
        (**(code **)(DAT_8c0e73e4 + *(int *)(a4 + 8)))(a4,2,ar6,ar7);
        a4 = (*(code *)PTR_list_node_next_8c0e73f8)(a4,uVar2,ar6,ar7);
      }
    }
    a5 = &uStack_20;
    iVar1 = (*(code *)PTR_FUN_8c0e73fc)(ar5,a5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c0e7400 + ar4) != 0)) {
      (**(code **)(DAT_8c0e7404 + *(int *)(*(int *)(DAT_8c0e7400 + ar4) + 8)))
                (*(int *)(DAT_8c0e7400 + ar4),a5,ar6,ar7);
    }
    else {
      a5 = &uStack_20;
      iVar1 = (*(code *)PTR_FUN_8c0e73fc)(ar5,a5,ar6,ar7);
      if ((iVar1 == 2) && (*(int *)(DAT_8c0e7400 + ar4) != 0)) {
        (**(code **)(DAT_8c0e7408 + *(int *)(*(int *)(DAT_8c0e7400 + ar4) + 8)))
                  (*(int *)(DAT_8c0e7400 + ar4),a5,ar6,ar7);
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0e740c)(ar5,a5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c0e7400 + ar4) != 0)) {
      (**(code **)(DAT_8c0e7410 + *(int *)(*(int *)(DAT_8c0e7400 + ar4) + 8)))
                (*(int *)(DAT_8c0e7400 + ar4),a5,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0e7414)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0e7418)(ar4,ar5,ar6,ar7);
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
  float *pfVar1;
  double *pdVar2;
  ulonglong *puVar3;
  undefined *a5;
  undefined4 uVar4;
  undefined8 *a5_00;
  undefined *a6;
  undefined4 *a6_00;
  undefined4 a7;
  int iVar5;
  int iVar6;
  undefined4 in_fr1;
  float fVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0e770c)(ar4,PTR_s_GRAPHICS_COMMON_8c0e7704 + DAT_8c0e7708,3,ar7);
  *ar4 = PTR_DAT_8c0e7710;
  a7 = 0x20;
  a5 = PTR_FUN_8c0e7718;
  a6 = PTR_FUN_8c0e7714;
  (*(code *)PTR_FUN_8c0e7720)((int)ar4 + DAT_8c0e771c,PTR_FUN_8c0e7718,PTR_FUN_8c0e7714,0x20);
  (*(code *)PTR_FUN_8c0e7728)((int)ar4 + DAT_8c0e7724,a5,a6,a7);
  (*(code *)PTR_FUN_8c0e7730)((int)ar4 + DAT_8c0e772c,a5,a6,a7);
  (*(code *)PTR_FUN_8c0e7738)((int)ar4 + DAT_8c0e7734,a5,a6,a7);
  uVar4 = 0;
  (*(code *)PTR_FUN_8c0e7740)((int)ar4 + DAT_8c0e773c,0,a6,a7);
  (*(code *)PTR_FUN_8c0e7748)((int)ar4 + DAT_8c0e7744,uVar4,a6,a7);
  (*(code *)PTR_FUN_8c0e7750)((int)ar4 + DAT_8c0e774c,uVar4,a6,a7);
  (*(code *)PTR_FUN_8c0e7754)(ar4,uVar4,a6,a7);
  (*(code *)PTR_FUN_8c0e7764)((int)ar4 + DAT_8c0e772c,uVar4,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c0e776c,in_fr1);
    *(undefined4 *)DAT_8c0e7768 = DAT_8c0e776c;
  }
  else {
    uVar8 = CONCAT44(_DAT_8c0e7770,DAT_8c0e776c);
    *DAT_8c0e7768 = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44(_DAT_8c0e7770,(int)uVar8);
    *(undefined4 *)((int)DAT_8c0e7768 + 4) = _DAT_8c0e7770;
  }
  else {
    uVar9 = CONCAT44(_DAT_8c0e7774,_DAT_8c0e7770);
    *(ulonglong *)((int)DAT_8c0e7768 + 4) = uVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0e7768 + 1) = 0;
  }
  else {
    DAT_8c0e7768[1] = uVar9 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c0e776c,(int)uVar9);
    *(undefined4 *)((int)DAT_8c0e7768 + 0xc) = DAT_8c0e776c;
  }
  else {
    uVar8 = CONCAT44(_DAT_8c0e7770,DAT_8c0e776c);
    *(undefined8 *)((int)DAT_8c0e7768 + 0xc) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44(_DAT_8c0e7774,(int)uVar8);
    *(undefined4 *)(DAT_8c0e7768 + 2) = _DAT_8c0e7774;
  }
  else {
    uVar9 = CONCAT44(DAT_8c0e7778,_DAT_8c0e7774);
    DAT_8c0e7768[2] = uVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)DAT_8c0e7768 + 0x14) = 0;
  }
  else {
    *(ulonglong *)((int)DAT_8c0e7768 + 0x14) = uVar9 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c0e7778,(int)uVar9);
    *(undefined4 *)(DAT_8c0e7768 + 3) = DAT_8c0e7778;
  }
  else {
    uVar8 = CONCAT44(_DAT_8c0e777c,DAT_8c0e7778);
    DAT_8c0e7768[3] = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44(_DAT_8c0e7774,(int)uVar8);
    *(undefined4 *)((int)DAT_8c0e7768 + 0x1c) = _DAT_8c0e7774;
  }
  else {
    uVar9 = CONCAT44(DAT_8c0e7778,_DAT_8c0e7774);
    *(ulonglong *)((int)DAT_8c0e7768 + 0x1c) = uVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0e7768 + 4) = 0;
  }
  else {
    DAT_8c0e7768[4] = uVar9 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c0e7778,(int)uVar9);
    *(undefined4 *)((int)DAT_8c0e7768 + 0x24) = DAT_8c0e7778;
  }
  else {
    uVar8 = CONCAT44(_DAT_8c0e777c,DAT_8c0e7778);
    *(undefined8 *)((int)DAT_8c0e7768 + 0x24) = uVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44(_DAT_8c0e7770,(int)uVar8);
    *(undefined4 *)(DAT_8c0e7768 + 5) = _DAT_8c0e7770;
  }
  else {
    uVar9 = CONCAT44(_DAT_8c0e7774,_DAT_8c0e7770);
    DAT_8c0e7768[5] = uVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)DAT_8c0e7768 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)((int)DAT_8c0e7768 + 0x2c) = uVar9 & 0xffffffff;
  }
  *_DAT_8c0e777c = DAT_8c0e7780;
  _DAT_8c0e777c[1] = DAT_8c0e7784;
  _DAT_8c0e777c[2] = DAT_8c0e7784;
  _DAT_8c0e777c[3] = DAT_8c0e7780;
  uVar4 = 4;
  a5_00 = DAT_8c0e7768;
  a6_00 = _DAT_8c0e777c;
  (*(code *)PTR_FUN_8c0e7788)((int)ar4 + DAT_8c0e7744,DAT_8c0e7768,_DAT_8c0e777c,4);
  (*(code *)PTR_FUN_8c0e778c)((int)ar4 + DAT_8c0e7744,a5_00,a6_00,uVar4);
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
      pfVar1 = (float *)((int)ar4 + DAT_8c0e7790 + iVar6 * 0x20 + iVar5 * 0x80);
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0e7794,(float)iVar6);
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c0e7798,DAT_8c0e7794);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 * dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0e7798,fVar7);
      }
      else {
        dVar10 = (double)CONCAT44(_DAT_8c0e779c,DAT_8c0e7798);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar1 = fVar7;
      }
      else {
        *(undefined8 *)pfVar1 = in_xd0;
      }
      pdVar2 = (double *)((int)ar4 + _DAT_8c0e779c + iVar6 * 0x20 + iVar5 * 0x80);
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0e77a0,(float)iVar5);
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c0e77a4,DAT_8c0e77a0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 * dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0e77a4,fVar7);
      }
      else {
        dVar10 = (double)CONCAT44(_DAT_8c0e77a8,DAT_8c0e77a4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - SUB84(dVar10,0),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 - dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)pdVar2 = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *pdVar2 = dVar10;
      }
      puVar3 = (ulonglong *)((int)ar4 + _DAT_8c0e77a8 + iVar6 * 0x20 + iVar5 * 0x80);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)puVar3 = 0;
      }
      else {
        *puVar3 = (ulonglong)dVar10 & 0xffffffff;
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77ac) = (undefined4)DAT_8c0e77b0;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77ac) = CONCAT44(DAT_8c0e77b0._4_4_,(undefined4)DAT_8c0e77b0)
    ;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77b0._4_4_) = DAT_8c0e77b8;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77b0._4_4_) = CONCAT44(DAT_8c0e77bc,DAT_8c0e77b8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77bc) = DAT_8c0e77c0;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77bc) = CONCAT44(DAT_8c0e77c4,DAT_8c0e77c0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77c4) = DAT_8c0e77c8;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77c4) = CONCAT44(DAT_8c0e77cc,DAT_8c0e77c8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77cc) = DAT_8c0e77d0;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77cc) = CONCAT44(DAT_8c0e77d4,DAT_8c0e77d0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77d4) = DAT_8c0e77d8;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77d4) = CONCAT44(DAT_8c0e77dc,DAT_8c0e77d8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77dc) = DAT_8c0e77e0;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77dc) = CONCAT44(DAT_8c0e77e4,DAT_8c0e77e0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0e77e4) = DAT_8c0e77e8;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0e77e4) = CONCAT44(_Class_12b3b8_m0_0e77ec,DAT_8c0e77e8);
  }
  return ar4;
}



/* Class_12b3b8_m0_0e77ec @ 8c0e77ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b3b8_m0_0e77ec(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0e7880;
    (*(code *)PTR_FUN_8c0e7888)((int)ar4 + DAT_8c0e7884,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_015c94_8c0e7890)((int)ar4 + DAT_8c0e788c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_1299ec_m0_01a0f8_8c0e7898)((int)ar4 + DAT_8c0e7894,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_019270_8c0e78a0)((int)ar4 + DAT_8c0e789c,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e78a8)((int)ar4 + DAT_8c0e78a4,0xffffffff,ar6,ar7);
    a7 = 0xc;
    a6 = 0x20;
    (*(code *)PTR_vec_delete_array_8c0e78b4)((int)ar4 + DAT_8c0e78b0,PTR_FUN_8c0e78ac,0x20,0xc);
    a5 = 0;
    (*(code *)PTR_Class_12bce0_m0_0d9a98_8c0e78b8)(ar4,0,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0e78bc)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0e78c4 @ 8c0e78c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0e78c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  int iVar4;
  
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0e7990)(ar4 + DAT_8c0e798c,ar5,ar6,ar7);
  a7 = 2;
  iVar3 = ar4 + DAT_8c0e7998;
  uVar2 = DAT_8c0e7994;
  (*(code *)PTR_FUN_8c0e799c)(uVar1,iVar3,DAT_8c0e7994,2);
  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
    *(undefined4 *)(DAT_8c0e79a0 + iVar4 * 0xc + ar4) = DAT_8c0e79a4;
  }
  uVar2 = (*(code *)PTR_get_field_4_0253e4_8c0e7990)(ar4 + DAT_8c0e798c,iVar3,uVar2,a7);
  a6 = PTR_s_GRAPHICS_COMMON_8c0e79a8 + DAT_8c0e79ac;
  a5 = PTR_s_GRAPHICS_COMMON_8c0e79a8 + DAT_8c0e79b0;
  iVar3 = (*(code *)PTR_FUN_8c0e79b4)(ar5,a5,a6,uVar2);
  if (iVar3 == 0) {
    uVar2 = 2;
    a6 = (undefined *)0x0;
    a5 = PTR_s_GRAPHICS_COMMON_8c0e79a8 + DAT_8c0e79b8;
    (*(code *)PTR_report_error_message_8c0e79c0)
              (PTR_s_GRAPHICS_COMMON_8c0e79a8 + DAT_8c0e79bc,a5,0,2);
  }
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0e7990)(ar4 + DAT_8c0e798c,a5,a6,uVar2);
  (*(code *)PTR_FUN_8c0e79c8)(ar4 + DAT_8c0e79c4,uVar1,a6,uVar2);
  uVar2 = (*(code *)PTR_FUN_8c0e79d0)(ar4 + DAT_8c0e79c4,PTR_DAT_8c0e79cc,a6,uVar2);
  return uVar2;
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
/* WARNING: Removing unreachable block (ram,0x8c0e7e8a) */
/* WARNING: Removing unreachable block (ram,0x8c0e7eaa) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e7a78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a4;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar3;
  undefined4 unaff_r14;
  int *piVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 in_dr0;
  undefined8 in_dr12;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar5 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar5 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar5 + -0x14) = in_PR;
  (*(code *)PTR_Vec3_set_zero_8c0e7b50)
            ((undefined1 *)((int)puVar5 + DAT_8c0e7b4c + -0xa0),ar5,ar6,ar7);
  uVar1 = *(undefined4 *)(PTR_DAT_8c0e7b54 + 4);
  *(undefined4 *)((int)puVar5 + -0x40) = *(undefined4 *)PTR_DAT_8c0e7b54;
  *(undefined4 *)((int)puVar5 + -0x3c) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0e7b54 + 0xc);
  *(undefined4 *)((int)puVar5 + -0x38) = *(undefined4 *)(PTR_DAT_8c0e7b54 + 8);
  *(undefined4 *)((int)puVar5 + -0x34) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0e7b54 + 0x14);
  *(undefined4 *)((int)puVar5 + -0x30) = *(undefined4 *)(PTR_DAT_8c0e7b54 + 0x10);
  *(undefined4 *)((int)puVar5 + -0x2c) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0e7b54 + 0x1c);
  *(undefined4 *)((int)puVar5 + -0x28) = *(undefined4 *)(PTR_DAT_8c0e7b54 + 0x18);
  *(undefined4 *)((int)puVar5 + -0x24) = uVar1;
  (*(code *)PTR_FUN_8c0e7b58)((undefined1 *)((int)puVar5 + -100),ar5,ar6,ar7);
  iVar2 = ar4 + DAT_8c0e7b68;
  (*(code *)PTR_FUN_8c0e7b6c)(iVar2,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e7b74)(iVar2,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0e7b7c)(iVar2,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + DAT_8c0e7b8c) + 0x14))((int *)(ar4 + DAT_8c0e7b8c),ar5,ar6,ar7);
  if (*(int *)(DAT_8c0e7b90 + ar4) == 0) {
    *(undefined4 *)((int)puVar5 + -0x74) = 1;
    (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0e7b94)
              ((undefined1 *)((int)puVar5 + -100),0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0e7b98)
              ((undefined1 *)((int)puVar5 + DAT_8c0e7b4c + -0xa0),0xffffffff,ar6,ar7);
    uVar1 = *(undefined4 *)((int)puVar5 + -0x74);
  }
  else {
    if ((*(short *)(DAT_8c0e7c8c + ar4) != -1) && (*(short *)(DAT_8c0e7c90 + ar4) != -1)) {
      *(int *)((int)puVar5 + -0x8c) = (int)*(short *)(DAT_8c0e7c90 + ar4);
      *(int *)((int)puVar5 + -0x90) = (int)*(short *)(DAT_8c0e7c8c + ar4);
      piVar4 = (int *)(ar4 + *(int *)((int)puVar5 + -0x8c) * 0x80 +
                       *(int *)((int)puVar5 + -0x90) * 0x20 + DAT_8c0e7c94);
      uVar1 = 0;
      (*(code *)PTR_FUN_8c0e7c98)(0,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0e7ca0)(uVar1,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0e7ca8)(ar4 + DAT_8c0e7ca4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0e7cac)(1,ar5,ar6,ar7);
      if (*piVar4 != 0) {
        ar7 = 4;
        ar6 = DAT_8c0e7cb0;
        (*(code *)PTR_FUN_8c0e7cb4)
                  ((undefined1 *)((int)puVar5 + -100),(undefined1 *)((int)puVar5 + -0x40),
                   DAT_8c0e7cb0,4);
        (*(code *)PTR_FUN_8c0e7cb8)
                  ((undefined1 *)((int)puVar5 + -100),(undefined1 *)((int)puVar5 + -0x50),ar6,ar7);
        uVar1 = DAT_8c0e7cbc;
        (*(code *)PTR_FUN_8c0e7cc0)((undefined1 *)((int)puVar5 + -100),DAT_8c0e7cbc,ar6,ar7);
        (*(code *)PTR_FUN_8c0e7cc8)(ar4 + DAT_8c0e7cc4,uVar1,ar6,ar7);
        ar5 = 1;
        (*(code *)PTR_FUN_8c0e7ccc)(ar4 + DAT_8c0e7cc4,1,ar6,ar7);
        uVar1 = (*(code *)PTR_get_field_24_05c284_8c0e7cd0)(*piVar4,ar5,ar6,ar7);
        *(undefined4 *)((int)puVar5 + -0x7c) = uVar1;
        iVar2 = *(int *)((int)puVar5 + -0x7c);
        if (iVar2 == 0) {
          *(undefined2 *)((int)puVar5 + -0x50) = 0;
          *(undefined2 *)((int)puVar5 + -0x4e) = 0x1f;
          *(undefined2 *)((int)puVar5 + -0x4c) = 0;
          *(undefined2 *)((int)puVar5 + -0x4a) = 0;
          *(short *)((int)puVar5 + -0x48) = (short)DAT_8c0e7d18;
          *(undefined2 *)((int)puVar5 + -0x46) = 0;
          *(short *)((int)puVar5 + -0x44) = (short)DAT_8c0e7d18;
          *(undefined2 *)((int)puVar5 + -0x42) = 0x1f;
        }
        else if (iVar2 == 10) {
          uVar1 = (**(code **)(DAT_8c0e7d78 + *(int *)(*piVar4 + 8)))(*piVar4,ar5,ar6,ar7);
          *(undefined4 *)((int)puVar5 + -0x80) = uVar1;
          if (*(int *)((int)puVar5 + -0x80) == 0x11) {
            *(undefined2 *)((int)puVar5 + -0x50) = 0;
            *(undefined2 *)((int)puVar5 + -0x4e) = 0x3f;
            *(undefined2 *)((int)puVar5 + -0x4c) = 0;
            *(undefined2 *)((int)puVar5 + -0x4a) = 0x20;
            *(short *)((int)puVar5 + -0x48) = (short)DAT_8c0e7d7c;
            *(undefined2 *)((int)puVar5 + -0x46) = 0x20;
            *(short *)((int)puVar5 + -0x44) = (short)DAT_8c0e7d7c;
            *(undefined2 *)((int)puVar5 + -0x42) = 0x3f;
          }
          else {
            *(undefined2 *)((int)puVar5 + -0x50) = 0;
            *(short *)((int)puVar5 + -0x4e) = (short)DAT_8c0e7dc4;
            *(undefined2 *)((int)puVar5 + -0x4c) = 0;
            *(short *)((int)puVar5 + -0x4a) = (short)DAT_8c0e7dc8;
            *(short *)((int)puVar5 + -0x48) = (short)DAT_8c0e7dcc;
            *(short *)((int)puVar5 + -0x46) = (short)DAT_8c0e7dc8;
            *(short *)((int)puVar5 + -0x44) = (short)DAT_8c0e7dcc;
            *(short *)((int)puVar5 + -0x42) = (short)DAT_8c0e7dc4;
          }
        }
        else if (iVar2 == 0xe) {
          *(undefined2 *)((int)puVar5 + -0x50) = 0;
          *(undefined2 *)((int)puVar5 + -0x4e) = 0x7f;
          *(undefined2 *)((int)puVar5 + -0x4c) = 0;
          *(undefined2 *)((int)puVar5 + -0x4a) = 0x60;
          *(short *)((int)puVar5 + -0x48) = (short)DAT_8c0e7e14;
          *(undefined2 *)((int)puVar5 + -0x46) = 0x60;
          *(short *)((int)puVar5 + -0x44) = (short)DAT_8c0e7e14;
          *(undefined2 *)((int)puVar5 + -0x42) = 0x7f;
        }
        else if (iVar2 == 0xf) {
          *(undefined2 *)((int)puVar5 + -0x50) = 0;
          *(undefined2 *)((int)puVar5 + -0x4e) = 0x5f;
          *(undefined2 *)((int)puVar5 + -0x4c) = 0;
          *(undefined2 *)((int)puVar5 + -0x4a) = 0x40;
          *(short *)((int)puVar5 + -0x48) = (short)DAT_8c0e7e70;
          *(undefined2 *)((int)puVar5 + -0x46) = 0x40;
          *(short *)((int)puVar5 + -0x44) = (short)DAT_8c0e7e70;
          *(undefined2 *)((int)puVar5 + -0x42) = 0x5f;
        }
        (*(code *)PTR_FUN_8c0e7e78)((undefined1 *)((int)puVar5 + -100),ar5,ar6,ar7);
      }
    }
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        *(int *)((int)puVar5 + -0x94) = iVar2;
        *(int *)((int)puVar5 + -0x98) = iVar3;
        if (*(int *)(DAT_8c0e7ff4 +
                    ar4 + *(int *)((int)puVar5 + -0x94) * 0x80 +
                    *(int *)((int)puVar5 + -0x98) * 0x20) != 0) {
          *(int *)((int)puVar5 + -0x9c) = iVar2;
          *(int *)((int)puVar5 + -0xa0) = iVar3;
          piVar4 = (int *)(ar4 + *(int *)((int)puVar5 + -0x9c) * 0x80 +
                           *(int *)((int)puVar5 + -0xa0) * 0x20 + DAT_8c0e7ff4);
          (**(code **)(DAT_8c0e7ff8 + *(int *)(*piVar4 + 8)))(*piVar4,ar5,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar5 + -0x84) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)((int)puVar5 + -0x84) = in_dr0;
          }
          (**(code **)(DAT_8c0e7ffc + *(int *)(*piVar4 + 8)))(*piVar4,ar5,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar5 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)((int)puVar5 + -0x88) = in_dr0;
          }
          *(undefined1 **)((int)puVar5 + -0xa4) = (undefined1 *)((int)puVar5 + -0x70);
          (**(code **)(DAT_8c0e8000 + *(int *)(*piVar4 + 8)))(*piVar4,ar5,ar6,ar7);
          uVar6 = (undefined4)in_dr0;
          (*(code *)PTR_vec3_copy_8c023d8c_8c0e8008)
                    ((undefined1 *)((int)puVar5 + DAT_8c0e8004 + -0xa0),
                     (undefined1 *)((int)puVar5 + -0x70),ar6,ar7);
          ar5 = 0xffffffff;
          (*(code *)PTR_object_dtor_delete_8c0e800c)
                    ((undefined1 *)((int)puVar5 + -0x70),0xffffffff,ar6,ar7);
          a4 = *piVar4;
          (*(code *)PTR_FUN_8c0e8014)(a4,ar5,ar6,ar7);
          (*(code *)PTR_FUN_8c0e8018)(a4,ar5,ar6,ar7);
          uVar1 = 0;
          (*(code *)PTR_FUN_8c0e801c)(0,ar5,ar6,ar7);
          (*(code *)PTR_FUN_8c0e8020)(uVar1,ar5,ar6,ar7);
          if (in_FPSCR_SZ != '\0') {
            uVar6 = (undefined4)*(undefined8 *)(piVar4 + 6);
          }
          (*(code *)PTR_FUN_8c0e8028)(uVar1,ar5,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44(piVar4[5],uVar6);
          }
          else {
            in_dr0 = *(undefined8 *)(piVar4 + 5);
          }
          (*(code *)PTR_FUN_8c0e802c)(uVar1,ar5,ar6,ar7);
          (*(code *)PTR_FUN_8c0e8030)(uVar1,ar5,ar6,ar7);
          (*(code *)PTR_FUN_8c0e8034)(uVar1,ar5,ar6,ar7);
          (**(code **)(*(int *)(*piVar4 + 8) + 0x3c))(*piVar4,ar5,ar6,ar7);
          (*(code *)PTR_FUN_8c0e8038)(1,ar5,ar6,ar7);
        }
      }
    }
    *(undefined4 *)((int)puVar5 + -0x78) = 1;
    (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0e803c)
              ((undefined1 *)((int)puVar5 + -100),0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0e800c)
              ((undefined1 *)((int)puVar5 + DAT_8c0e8004 + -0xa0),0xffffffff,ar6,ar7);
    uVar1 = *(undefined4 *)((int)puVar5 + -0x78);
  }
  return uVar1;
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
  
  (*(code *)PTR_FUN_8c0e80f8)(ar4,ar5,ar6,ar7);
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
  undefined4 a5;
  short *a6;
  
  a5 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0e81a4)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0e81a8 + ar4 + ar6[1] * 0x80 + *ar6 * 0x20) = ar5;
  (*(code *)PTR_FUN_8c0e81ac)(ar4 + ar6[1] * 0x80 + *ar6 * 0x20 + DAT_8c0e81a8,a5,a6,ar7);
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
  undefined4 a4;
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 *a6;
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
  a4 = (*(code *)PTR_FUN_8c0e8454)(DAT_8c0e8450,uVar2,ar6,ar7);
  uStack_30 = a4;
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
    a6 = auStack_1c;
    (*(code *)PTR_FUN_8c0e8484)(ar5,auStack_20,a6,ar7);
    (*(code *)PTR_FUN_8c0e8488)(ar4,auStack_20,a6,ar7);
    puVar1 = (undefined2 *)(ar4 + DAT_8c0e848c);
    *puVar1 = uStack_5c;
    puVar1[1] = uStack_5a;
    (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8490)(&uStack_5c,0xffffffff,a6,ar7);
    if ((*(short *)(DAT_8c0e848c + ar4) != -1) && (*(short *)(DAT_8c0e8494 + ar4) != -1)) {
      uVar2 = *DAT_8c0e8498;
      iStack_48 = (*(code *)PTR_FUN_8c0e849c)(a4,uVar2,a6,ar7);
      if (iStack_48 == 4) {
        iStack_54 = (int)*(short *)(DAT_8c0e8494 + ar4);
        iStack_58 = (int)*(short *)(DAT_8c0e848c + ar4);
        if ((*(int *)(DAT_8c0e84a0 + ar4 + iStack_54 * 0x80 + iStack_58 * 0x20) != 0) &&
           (iStack_4c = (*(code *)PTR_FUN_8c0e84a4)(ar5,uVar2,a6,ar7), iStack_4c == 1)) {
          (*(code *)PTR_FUN_8c0e84a8)(ar5,uVar2,a6,ar7);
          (*(code *)PTR_FUN_8c0e84ac)(auStack_60,ar4 + DAT_8c0e848c,a6,ar7);
          uStack_50 = (*(code *)PTR_FUN_8c0e84b0)(ar4,auStack_60,a6,ar7);
          (*(code *)PTR_FUN_8c0e84b4)(ar5,uStack_50,a6,ar7);
          (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8490)(auStack_60,0xffffffff,a6,ar7);
          uVar2 = 3;
          (*(code *)PTR_FUN_8c0e84b8)(ar5,3,a6,ar7);
          (*(code *)PTR_FUN_8c0e84c4)(ar5,uVar2,a6,ar7);
        }
      }
    }
    uStack_2c = 1;
    (*(code *)PTR_Vec3_dtor_8c0e845c)(auStack_20,0xffffffff,a6,ar7);
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
  undefined4 a6;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar4 = 0;
  for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
      if (*(int *)(iVar5 * 0x80 + ar5) != -1) {
        a6 = *(undefined4 *)(ar5 + iVar5 * 0x80 + 0x2c);
        uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c0e881c)
                          (DAT_8c0e8818,*(undefined4 *)(iVar5 * 0x80 + ar5),a6,ar7);
        *(undefined4 *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20) = uVar1;
        if (*(int *)(iVar5 * 0x80 + ar5) == 0xf) {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(DAT_8c0e8824 + *(int *)(iVar2 + 8)))(iVar2,iVar3,a6,ar7);
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (**(code **)(DAT_8c0e8828 + *(int *)(iVar2 + 8)))(iVar2,iVar3,a6,ar7);
          iVar3 = (int)(short)uVar1;
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(DAT_8c0e8830 + *(int *)(iVar2 + 8)))(iVar2,DAT_8c0e882c,iVar3,ar7);
        }
        else {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(DAT_8c0e8824 + *(int *)(iVar2 + 8)))(iVar2,iVar3,a6,ar7);
          iVar2 = *(int *)(DAT_8c0e8820 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (**(code **)(DAT_8c0e8828 + *(int *)(iVar2 + 8)))(iVar2,iVar3,a6,ar7);
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

undefined4 FUN_8c0e89c4(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a6;
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double in_dr2;
  bool bVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  a6 = 0xffffffff;
  (*(code *)PTR_FUN_8c0e8ab8)(&uStack_10,0xffffffff,0xffffffff,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(*(undefined4 *)PTR_DAT_8c0e8abc,*(undefined4 *)ar5);
  }
  else {
    uVar3 = *(undefined8 *)PTR_DAT_8c0e8abc;
  }
  if ((float)uVar3 == (float)((ulonglong)uVar3 >> 0x20)) {
    (*(code *)PTR_FUN_8c0e8ac0)(in_stack_00000000,&uStack_10,a6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8ac4)(&uStack_10,0xffffffff,a6,ar7);
  }
  else {
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *ar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0e8ac8,(float)iVar1);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0e8acc,DAT_8c0e8ac8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar4 * dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0e8acc,fVar2);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0e8ad0,DAT_8c0e8acc);
      }
      if (in_FPSCR_PR == '\0') {
        bVar5 = (float)((ulonglong)in_dr2 >> 0x20) <
                SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        bVar5 = in_dr2 < dVar4 + dVar4;
      }
      if (!bVar5) {
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *ar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c0e8ac8,(float)iVar1);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c0e8acc,DAT_8c0e8ac8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar4 * dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c0e8acc,fVar2);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c0e8ad0,DAT_8c0e8acc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar2 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar4 + dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c0e8ad0,fVar2);
        }
        else {
          dVar4 = (double)CONCAT44(_DAT_8c0e8ad4,DAT_8c0e8ad0);
        }
        if (in_FPSCR_PR == '\0') {
          bVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20) <
                  (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar5 = dVar4 + dVar4 < in_dr2;
        }
        if (!bVar5) {
          uStack_10 = (undefined2)iVar1;
          break;
        }
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *(double *)((int)ar5 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(_DAT_8c0e8ad4,(float)iVar1);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0e8ad8,_DAT_8c0e8ad4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar4 * dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0e8ad8,fVar2);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0e8adc,DAT_8c0e8ad8);
      }
      if (in_FPSCR_PR == '\0') {
        bVar5 = (float)((ulonglong)in_dr2 >> 0x20) <
                SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        bVar5 = in_dr2 < dVar4 + dVar4;
      }
      if (!bVar5) {
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)((int)ar5 + 4);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(_DAT_8c0e8ad4,(float)iVar1);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c0e8ad8,_DAT_8c0e8ad4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar4 * dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c0e8ad8,fVar2);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c0e8adc,DAT_8c0e8ad8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar2 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar4 + dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c0e8adc,fVar2);
        }
        else {
          dVar4 = (double)CONCAT44(_FUN_8c0e8ae0,DAT_8c0e8adc);
        }
        if (in_FPSCR_PR == '\0') {
          bVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20) <
                  (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar5 = dVar4 + dVar4 < in_dr2;
        }
        if (!bVar5) {
          uStack_e = (undefined2)iVar1;
          break;
        }
      }
    }
    (*(code *)PTR_FUN_8c0e8ac0)(in_stack_00000000,&uStack_10,a6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8ac4)(&uStack_10,0xffffffff,a6,ar7);
  }
  return 0;
}



/* FUN_8c0e8ae0 @ 8c0e8ae0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0e8b0c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8ae0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a6;
  int iVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int iStack_18;
  int iStack_14;
  
  a6 = 0xffffffff;
  (*(code *)PTR_FUN_8c0e8b64)(&uStack_1c,0xffffffff,0xffffffff,ar7);
  iVar1 = 0;
  do {
    if (2 < iVar1) {
LAB_8c0e8b40:
      (*(code *)PTR_FUN_8c0e8b6c)(in_stack_00000000,&uStack_1c,a6,ar7);
      (*(code *)PTR_free_if_nonnull_wrap_016660_8c0e8b70)(&uStack_1c,0xffffffff,a6,ar7);
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

/* WARNING: Unknown calling convention */

int FUN_8c0e8c64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  undefined4 in_fr5;
  float in_fr4;
  bool bVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_PR == '\0') {
    bVar2 = in_fr4 < 0.0;
  }
  else {
    bVar2 = (double)CONCAT44(in_fr4,in_fr5) < (double)(ulonglong)in_fr1;
  }
  if (bVar2) {
    in_fr4 = 0.0;
  }
  iVar1 = DAT_8c0e8c78;
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0e8c78) = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0e8c78) = CONCAT44(in_fr4,in_fr5);
  }
  return iVar1;
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
  
  uVar1 = (*(code *)PTR_FUN_8c0e8d24)(ar4 + DAT_8c0e8d20,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0e8d28 @ 8c0e8d28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8d28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0e8d50)(ar4 + DAT_8c0e8d4c,ar5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

int FUN_8c0e8d80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  undefined4 in_fr5;
  float in_fr4;
  bool bVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_PR == '\0') {
    bVar2 = in_fr4 < 0.0;
  }
  else {
    bVar2 = (double)CONCAT44(in_fr4,in_fr5) < (double)(ulonglong)in_fr1;
  }
  if (bVar2) {
    in_fr4 = 0.0;
  }
  iVar1 = DAT_8c0e8d94;
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0e8d94) = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0e8d94) = CONCAT44(in_fr4,in_fr5);
  }
  return iVar1;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8df8(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  int iVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(DAT_8c0e8e68,*ar5);
  }
  else {
    dVar1 = (double)CONCAT44(DAT_8c0e8e6c,DAT_8c0e8e68);
  }
  if (in_FPSCR_PR == '\0') {
    iVar2 = (int)(SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar1 / dVar1);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(DAT_8c0e8e6c,ar5[2]);
  }
  else {
    dVar1 = (double)CONCAT44(_DAT_8c0e8e70,DAT_8c0e8e6c);
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)(SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar1 / dVar1);
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (10 < iVar2) {
    iVar2 = 10;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (9 < iVar3) {
    iVar3 = 9;
  }
  return *(undefined4 *)(_DAT_8c0e8e70 + iVar2 * 0x78 + ar4 + iVar3 * 0xc);
}



/* FUN_8c0e8e74 @ 8c0e8e74 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e8e74(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  int iVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(DAT_8c0e8ee4,*ar5);
  }
  else {
    dVar1 = (double)CONCAT44(DAT_8c0e8ee8,DAT_8c0e8ee4);
  }
  if (in_FPSCR_PR == '\0') {
    iVar2 = (int)(SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar1 / dVar1);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(DAT_8c0e8ee8,ar5[2]);
  }
  else {
    dVar1 = (double)CONCAT44(_DAT_8c0e8eec,DAT_8c0e8ee8);
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)(SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar1 / dVar1);
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (10 < iVar2) {
    iVar2 = 10;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (9 < iVar3) {
    iVar3 = 9;
  }
  return *(undefined4 *)(_DAT_8c0e8eec + iVar2 * 0x78 + ar4 + iVar3 * 0xc);
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
  undefined4 uVar2;
  undefined *puVar3;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0e90f8)(PTR_DAT_8c0e90f4,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0e9100;
  uVar2 = DAT_8c0e90fc;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_Vec3_dtor_8c0e9100,DAT_8c0e90fc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0e90f8)(PTR_DAT_8c0e9108,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0e9100;
  uVar2 = DAT_8c0e910c;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_Vec3_dtor_8c0e9100,DAT_8c0e910c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0e90f8)(PTR_DAT_8c0e9110,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0e9100;
  uVar2 = DAT_8c0e9114;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_Vec3_dtor_8c0e9100,DAT_8c0e9114,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0e90f8)(PTR_DAT_8c0e9118,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0e9100;
  uVar2 = DAT_8c0e911c;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_Vec3_dtor_8c0e9100,DAT_8c0e911c,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0e9120 = *(undefined4 *)DAT_8c0e9124;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0e9120 = *DAT_8c0e9124;
  }
  uVar1 = (*(code *)PTR_FUN_8c0e912c)(DAT_8c0e9128,puVar3,uVar2,ar7);
  puVar3 = PTR_free_if_nonnull_wrap_0153e4_8c0e9134;
  uVar2 = DAT_8c0e9130;
  (*(code *)PTR_global_list_push_8c0e9104)
            (uVar1,PTR_free_if_nonnull_wrap_0153e4_8c0e9134,DAT_8c0e9130,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e9154)(DAT_8c0e9150,puVar3,uVar2,ar7);
  puVar3 = PTR_FUN_8c0e915c;
  uVar2 = DAT_8c0e9158;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_FUN_8c0e915c,DAT_8c0e9158,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e9154)(DAT_8c0e916c,puVar3,uVar2,ar7);
  puVar3 = PTR_FUN_8c0e915c;
  uVar2 = DAT_8c0e9170;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_FUN_8c0e915c,DAT_8c0e9170,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e9154)(DAT_8c0e917c,puVar3,uVar2,ar7);
  puVar3 = PTR_FUN_8c0e915c;
  uVar2 = DAT_8c0e9180;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_FUN_8c0e915c,DAT_8c0e9180,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e9154)(DAT_8c0e9188,puVar3,uVar2,ar7);
  puVar3 = PTR_FUN_8c0e915c;
  uVar2 = DAT_8c0e918c;
  (*(code *)PTR_global_list_push_8c0e9104)(uVar1,PTR_FUN_8c0e915c,DAT_8c0e918c,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0e919c)(DAT_8c0e9198,puVar3,uVar2,ar7);
  puVar3 = PTR_free_if_nonnull_wrap_0d63c0_8c0e91a4;
  uVar2 = DAT_8c0e91a0;
  (*(code *)PTR_global_list_push_8c0e9104)
            (uVar1,PTR_free_if_nonnull_wrap_0d63c0_8c0e91a4,DAT_8c0e91a0,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0e91ac)(DAT_8c0e91a8,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0e9104)(uVar2,PTR_FUN_8c0e91b4,DAT_8c0e91b0,ar7);
  return uVar2;
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
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0e921c)(ar4,ar5,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0e96b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined1 *)(ar4 + 0x38) = 0;
  *(undefined1 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 0x45) = 0;
  *(undefined1 *)(ar4 + 0x3a) = 0;
  *(undefined4 *)(DAT_8c0e9804 + ar4) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 0x4d) = 0;
  *(undefined1 *)(ar4 + 0x4e) = 0;
  *(undefined1 *)(ar4 + 0x4f) = 0;
  *(undefined1 *)(ar4 + 0x50) = 0;
  *(undefined1 *)(DAT_8c0e9808 + ar4) = 0;
  *(undefined4 *)(DAT_8c0e980c + ar4) = 0;
  *(undefined4 *)(DAT_8c0e9810 + ar4) = 0;
  *(undefined4 *)(DAT_8c0e9814 + ar4) = 0;
  *(undefined4 *)(DAT_8c0e9818 + ar4) = 0;
  *(undefined4 *)(DAT_8c0e981c + ar4) = 0;
  *(undefined4 *)(DAT_8c0e9820 + ar4) = 4;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined1 *)(DAT_8c0e9824 + ar4) = 0;
  *(undefined1 *)(DAT_8c0e9828 + ar4) = 0;
  *(undefined1 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(DAT_8c0e982c + ar4) = 0;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c0e9830 + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(DAT_8c0e9834 + ar4 + iVar2 * 4) = 0;
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      puVar1 = (undefined8 *)(iVar2 * 0xc + ar4 + iVar3 * 4 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)puVar1 = DAT_8c0e9838;
      }
      else {
        *puVar1 = CONCAT44(_FUN_8c0e983c,DAT_8c0e9838);
      }
    }
  }
  for (iVar2 = 0; iVar2 < 0x12; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
      *(undefined1 *)(ar4 + iVar2 * 2 + iVar3 + 0x51) = 0;
      *(undefined1 *)(ar4 + iVar2 * 2 + iVar3 + 0x75) = 0;
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
  undefined1 *a5;
  
  a5 = ar5;
  uVar2 = (*(code *)PTR_FUN_8c0e98e0)(ar4,ar5,ar6,ar7);
  *ar5 = (char)uVar2;
  uVar2 = (*(code *)PTR_FUN_8c0e98e4)(ar4,a5,ar6,ar7);
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

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0e992c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0e99b4)(PTR_DAT_8c0e99b0,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0e99bc;
  uVar2 = DAT_8c0e99b8;
  (*(code *)PTR_global_list_push_8c0e99c0)(uVar1,PTR_Vec3_dtor_8c0e99bc,DAT_8c0e99b8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0e99b4)(PTR_DAT_8c0e99c4,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0e99bc;
  uVar2 = DAT_8c0e99c8;
  (*(code *)PTR_global_list_push_8c0e99c0)(uVar1,PTR_Vec3_dtor_8c0e99bc,DAT_8c0e99c8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0e99b4)(PTR_DAT_8c0e99cc,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0e99bc;
  uVar2 = DAT_8c0e99d0;
  (*(code *)PTR_global_list_push_8c0e99c0)(uVar1,PTR_Vec3_dtor_8c0e99bc,DAT_8c0e99d0,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0e99b4)(PTR_DAT_8c0e99d4,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0e99c0)(uVar2,PTR_Vec3_dtor_8c0e99bc,DAT_8c0e99d8,ar7);
  puVar3 = DAT_8c0e99e0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0e99dc = *(undefined4 *)DAT_8c0e99e0;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0e99dc = *DAT_8c0e99e0;
  }
  return puVar3;
}


