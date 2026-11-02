#include "../decls.h"
undefined4 s_Tm1_Home_njd_0372a2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined **ar5_00;
  undefined1 *ar6_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff34;
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [16];
  
  _DAT_8c27e09c = (ulonglong)_DAT_8c27e09c;
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    *(undefined1 **)(iVar6 * 0x124 + -0x73d8202c) = &DAT_8c27d1fc;
  }
  _DAT_8c27dfd8 = &PTR_s_Tm1_Idle1_njm_8c1336b8;
  _DAT_8c27dfdc = &PTR_s_Tm1_Idle1_njs_8c133718;
  _DAT_8c27dfe0 = PTR_s_Tm1_Home_njd_8c133694;
  _DAT_8c27dfe4 = PTR_s_TM1_FACE_8c1336ac;
  _DAT_8c27dfe8 = PTR_s_TM1_BODY_TEX_8c1336b0;
  _DAT_8c27dfec = PTR_s_Tm1_MotionPack_npd_8c133698;
  _DAT_8c27dff0 = PTR_s_Hand_for_tm1_njm_8c1336b4;
  _DAT_8c27dff4 = PTR_s_Tm1_normal_PVM_8c13369c;
  _DAT_8c27dff8 = 2;
  _DAT_8c27e004 = 0x8c27eea4;
  _DAT_8c27e008 = PTR_s_Tm1_special_PVM_8c1336a0;
  _DAT_8c27e00c = 2;
  _DAT_8c27e018 = 0x8c27eebc;
  _DAT_8c27e01c = PTR_s_Tm1_head_normal_PVM_8c1336a4;
  _DAT_8c27e020 = 10;
  _DAT_8c27e02c = 0x8c27eed4;
  _DAT_8c27e030 = PTR_s_Tm1_head_special_PVM_8c1336a8;
  _DAT_8c27e034 = 10;
  _DAT_8c27e040 = 0x8c27ef4c;
  _DAT_8c27e088 = 0x8c27fd30;
  _DAT_8c27e08c = 0x3f000000;
  _DAT_8c27e090 = 0x3f800000;
  uVar4 = 0x8c27dfd4;
  _DAT_8c27e098 = (short)(int)(14400.0 / (0.5 / _DAT_8c27e094));
  if (_DAT_8c27e098 == 0) {
    _DAT_8c27e098 = 1;
  }
  _DAT_8c27e09c = CONCAT44(0x3ca3d70a,_DAT_8c27e09c);
  _DAT_8c27e0a4 = 0x3f4ccccd;
  _DAT_8c27e0a8 = 0x43480000;
  _DAT_8c27e0ac = 0;
  ar6_00 = &DAT_8c27e0b0;
  _DAT_8c27e0b0 = 0;
  _DAT_8c27e0b4 = 0x41400000;
  Class_129920_m0_015248(0x8c27e05c,&PTR_PTR_8c13400c,&DAT_8c27e0b0,0x8c27dfd4,in_stack_ffffff34);
  Class_129920_m0_015248(0x8c27e064,&PTR_PTR_8c13400c,ar6_00,uVar4,in_stack_ffffff34);
  _DAT_8c27e074 = 0x8c27e5c0;
  _DAT_8c27e078 = 0x18;
  _DAT_8c27e07c = 0x8c27e62c;
  _DAT_8c27e080 = 0x18;
  Vec3_set_xyz(auStack_14,0x8c27e62c,ar6_00,uVar4);
  vec3_copy_8c023d8c(0x8c27e0cc,auStack_14,ar6_00,uVar4);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_14,0xffffffff,ar6_00,uVar4);
  Vec3_set_xyz(auStack_20,uVar1,ar6_00,uVar4);
  vec3_copy_8c023d8c(0x8c27e0d8,auStack_20,ar6_00,uVar4);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_20,0xffffffff,ar6_00,uVar4);
  Vec3_set_xyz(auStack_2c,uVar1,ar6_00,uVar4);
  vec3_copy_8c023d8c(0x8c27e0e4,auStack_2c,ar6_00,uVar4);
  object_dtor_delete(auStack_2c,0xffffffff,ar6_00,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c27e0f4 = CONCAT44(DAT_8c27e0f4_4,0x42dc0000);
    _DAT_8c27e0c0 = CONCAT44(DAT_8c27e0c0_4,0x41c00000);
    dVar9 = (double)CONCAT44(0x3f000000,_DAT_8c27e09c);
  }
  else {
    _DAT_8c27e0f4 = 0xec42dc0000;
    _DAT_8c27e0c0 = 0xc841c00000;
    dVar9 = 3.99457418603154e-312;
    in_xd0 = _DAT_8c27e09c;
  }
  if (cVar11 == '\0') {
    _DAT_8c27e1b4 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    _DAT_8c27e1b4 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c27e09c = CONCAT44(_DAT_8c27e0a0,_DAT_8c27e1b4);
    uVar10 = _DAT_8c27e09c;
  }
  _DAT_8c27e09c = uVar10;
  _DAT_8c27e0fc = &PTR_s_Tm2_Idle1_njm_8c1337a0;
  _DAT_8c27e100 = &PTR_s_Tm2_Idle1_njs_8c1337f8;
  _DAT_8c27e104 = PTR_s_Tm2_Home_njd_8c13377c;
  uVar4 = 0x134;
  _DAT_8c27e108 = PTR_s_TM2_FACE_8c133794;
  _DAT_8c27e10c = PTR_s_TM2_BODY_TEX_8c133798;
  _DAT_8c27e110 = PTR_s_Tm2_MotionPack_npd_8c133780;
  _DAT_8c27e114 = PTR_s_Hand_for_tm2_njm_8c13379c;
  _DAT_8c27e118 = PTR_s_Tm2_normal_PVM_8c133784;
  _DAT_8c27e11c = 9;
  _DAT_8c27e128 = 0x8c27efc4;
  _DAT_8c27e12c = PTR_s_Tm2_special_PVM_8c133788;
  _DAT_8c27e130 = 9;
  _DAT_8c27e13c = 0x8c27f030;
  _DAT_8c27e140 = PTR_s_Tm2_head_normal_PVM_8c13378c;
  _DAT_8c27e144 = 10;
  _DAT_8c27e150 = 0x8c27f09c;
  _DAT_8c27e154 = PTR_s_Tm2_head_special_PVM_8c133790;
  _DAT_8c27e158 = 10;
  _DAT_8c27e164 = 0x8c27f114;
  _DAT_8c27e1ac = 0x8c27fdd0;
  if (cVar12 != '\0') {
    _DAT_8c27e1b4 = 0.55;
  }
  _DAT_8c27e1b0 = 0x3f0ccccd;
  if (cVar12 == '\0') {
    _DAT_8c27e1b4 = 1.0;
    dVar9 = 5.493165366488029e-05;
  }
  else {
    _DAT_8c27e1b8 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c27e1b4);
    dVar9 = (double)CONCAT44(_DAT_8c27e1b4,0x3f0ccccd);
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(_DAT_8c27e1b8,fVar7);
  }
  else {
    dVar9 = (double)CONCAT26((*(uint *)0x8c27e1be),CONCAT24(_DAT_8c27e1bc,_DAT_8c27e1b8));
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = (float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0);
    dVar9 = (double)CONCAT44(fVar7,SUB84(dVar9,0));
    _DAT_8c27e1bc = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    _DAT_8c27e1bc = (short)(int)dVar9;
  }
  uVar1 = 0x8c27dfd4;
  if (_DAT_8c27e1bc == 0) {
    _DAT_8c27e1bc = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c27e1d4 = SUB84(dVar9,0);
  }
  else {
    _DAT_8c27e1d4 = 0x437a0000;
  }
  _DAT_8c27e1cc = 0x437a0000;
  _DAT_8c27e1c8 = 0x3f4ccccd;
  _DAT_8c27e1c0 = CONCAT44(0x3ca3d70a,(int)_DAT_8c27e1c0);
  if (cVar12 == '\0') {
    _DAT_8c27e1d4 = 0;
  }
  else {
    ppuRam8c27e1dc = &PTR_PTR_8c134050;
  }
  _DAT_8c27e1d8 = 0x41900000;
  _DAT_8c27e1d0 = _DAT_8c27e1d4;
  Class_129920_m0_015248(0x8c27e180,&PTR_PTR_8c134050,0x8c27dfd4,0x134,in_stack_ffffff34);
  Class_129920_m0_015248(0x8c27e188,&PTR_PTR_8c134050,uVar1,uVar4,in_stack_ffffff34);
  _DAT_8c27e198 = 0x8c27e698;
  _DAT_8c27e19c = 0x16;
  _DAT_8c27e1a0 = 0x8c27e6fc;
  _DAT_8c27e1a4 = 0x16;
  Vec3_set_xyz(auStack_38,0x16,0x8c27dfd4,uVar4);
  uVar1 = 0x8c27e1f0;
  pcVar2 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c27e1f0,auStack_38,vec3_copy_8c023d8c,0x8c27e1f0);
  object_dtor_delete(auStack_38,0xffffffff,pcVar2,uVar1);
  Vec3_set_xyz(auStack_44,auStack_44,pcVar2,uVar1);
  vec3_copy_8c023d8c(0x8c27e1fc,auStack_44,pcVar2,uVar1);
  uVar4 = 0xffffffff;
  object_dtor_delete(auStack_44,0xffffffff,pcVar2,uVar1);
  Vec3_set_xyz(auStack_50,uVar4,pcVar2,uVar1);
  vec3_copy_8c023d8c(0x8c27e208,auStack_50,pcVar2,uVar1);
  object_dtor_delete(auStack_50,0xffffffff,auStack_50,uVar1);
  if (cVar12 == '\0') {
    _DAT_8c27e218 = CONCAT44(DAT_8c27e218_4,0x43200000);
    _DAT_8c27e1e4 = CONCAT44(DAT_8c27e1e4_4,0x42200000);
    dVar9 = (double)CONCAT44(0x3f19999a,_DAT_8c27e1c0);
  }
  else {
    _DAT_8c27e218 = 0x21043200000;
    _DAT_8c27e1e4 = 0x1ec42200000;
    dVar9 = 1.24825656389407e-311;
    in_xd0 = _DAT_8c27e1c0;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c27e1c0 = CONCAT44(_DAT_8c27e1c4,fVar7);
    uVar10 = _DAT_8c27e1c0;
  }
  _DAT_8c27e1c0 = uVar10;
  _DAT_8c27e220 = &PTR_s_Tm3_Idle_njm_8c133878;
  _DAT_8c27e224 = &PTR_s_Tm3_Idle_njs_8c1338d4;
  _DAT_8c27e228 = PTR_s_Tm3_Home_njd_8c133854;
  _DAT_8c27e22c = PTR_s_TM3_FACE_8c13386c;
  _DAT_8c27e230 = PTR_s_TM3_BODY_TEX_8c133870;
  _DAT_8c27e234 = PTR_s_Tm3_MotionPack_npd_8c133858;
  _DAT_8c27e238 = PTR_s_Hand_for_tm3_njm_8c133874;
  _DAT_8c27e23c = PTR_s_Tm3_normal_PVM_8c13385c;
  _DAT_8c27e240 = 0xf;
  _DAT_8c27e24c = 0x8c27f18c;
  _DAT_8c27e250 = PTR_s_Tm3_special_PVM_8c133860;
  _DAT_8c27e254 = 0xf;
  _DAT_8c27e260 = 0x8c27f240;
  _DAT_8c27e264 = PTR_s_Tm3_head_normal_PVM_8c133864;
  _DAT_8c27e268 = 10;
  _DAT_8c27e274 = 0x8c27f2f4;
  _DAT_8c27e278 = PTR_s_Tm3_head_special_PVM_8c133868;
  _DAT_8c27e27c = 10;
  _DAT_8c27e288 = 0x8c27f36c;
  _DAT_8c27e2d0 = 0x8c27fe70;
  if (cVar12 == '\0') {
    _DAT_8c27e2d8 = 1.0;
  }
  else {
    _DAT_8c27e2d8 = 0.7;
    _DAT_8c27e2dc = 0x3f800000;
  }
  uVar4 = 0x30c;
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x3f333333,_DAT_8c27e2d8);
  }
  else {
    in_xd0 = CONCAT44(_DAT_8c27e2dc,_DAT_8c27e2d8);
    dVar9 = (double)CONCAT44(_DAT_8c27e2d8,0x3f333333);
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(_DAT_8c27e2dc,fVar7);
  }
  else {
    dVar9 = (double)CONCAT26((*(uint *)0x8c27e2e2),CONCAT24(_DAT_8c27e2e0,_DAT_8c27e2dc));
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = (float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0);
    dVar9 = (double)CONCAT44(fVar7,SUB84(dVar9,0));
    _DAT_8c27e2e0 = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    _DAT_8c27e2e0 = (short)(int)dVar9;
  }
  if (_DAT_8c27e2e0 == 0) {
    _DAT_8c27e2e0 = 1;
  }
  if (cVar12 == '\0') {
    uVar1 = SUB84(dVar9,0);
  }
  else {
    uVar1 = 0x43660000;
  }
  _DAT_8c27e2f0 = 0x43660000;
  _DAT_8c27e2ec = 0x3f4ccccd;
  _DAT_8c27e2e4 = CONCAT44(0x3ca3d70a,(int)_DAT_8c27e2e4);
  if (cVar12 == '\0') {
    _DAT_8c27e2f8 = 0;
    _DAT_8c27e2d8 = (float)uVar1;
  }
  else {
    (*(uint *)0x8c27e300) = 0x300;
    _DAT_8c27e2d8 = 0.92;
    _DAT_8c27e2f8 = uVar1;
  }
  _DAT_8c27e2fc = 0x41ec0000;
  _DAT_8c27e2d4 = 0x3f6b851f;
  if (cVar12 == '\0') {
    _DAT_8c27e2d8 = 1.0;
  }
  else {
    _DAT_8c27e2dc = 0x3f800000;
  }
  _DAT_8c27e2f4 = _DAT_8c27e2f8;
  Class_129920_m0_015248
            (0x8c27e2a4,&PTR_PTR_8c134094,Class_129920_m0_015248,0x30c,in_stack_ffffff34);
  ar5_00 = &PTR_PTR_8c134094;
  Class_129920_m0_015248
            (0x8c27e2ac,&PTR_PTR_8c134094,Class_129920_m0_015248,uVar4,in_stack_ffffff34);
  _DAT_8c27e2bc = 0x8c27e760;
  _DAT_8c27e2c0 = 0x17;
  _DAT_8c27e2c4 = 0x8c27e7c8;
  uVar1 = 0x2f4;
  _DAT_8c27e2c8 = 0x17;
  Vec3_set_xyz(auStack_5c,ar5_00,0x2f4,uVar4);
  vec3_copy_8c023d8c(0x8c27e314,auStack_5c,uVar1,uVar4);
  uVar1 = 0xffffffff;
  pcVar2 = object_dtor_delete;
  object_dtor_delete(auStack_5c,0xffffffff,object_dtor_delete,uVar4);
  Vec3_set_xyz(auStack_68,uVar1,pcVar2,uVar4);
  vec3_copy_8c023d8c(0x8c27e320,auStack_68,pcVar2,uVar4);
  object_dtor_delete(auStack_68,0xffffffff,pcVar2,uVar4);
  Vec3_set_xyz(auStack_74,auStack_74,pcVar2,uVar4);
  vec3_copy_8c023d8c(0x8c27e32c,auStack_74,pcVar2,uVar4);
  object_dtor_delete(auStack_74,0xffffffff,pcVar2,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c27e33c = CONCAT44(DAT_8c27e33c_4,0x435c0000);
    _DAT_8c27e308 = CONCAT44(DAT_8c27e308_4,0x42820000);
  }
  else {
    _DAT_8c27e33c = 0x334435c0000;
    _DAT_8c27e308 = 0x31042820000;
  }
  uVar4 = 0x8c27dfd4;
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x3f4ccccd,_DAT_8c27e2e4);
  }
  else {
    dVar9 = 1.68963334622396e-311;
    in_xd0 = _DAT_8c27e2e4;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c27e2e4 = CONCAT44(_DAT_8c27e2e8,fVar7);
    uVar10 = _DAT_8c27e2e4;
  }
  _DAT_8c27e2e4 = uVar10;
  _DAT_8c27e344 = &PTR_s_fm1_W_Idle_njm_8c133958;
  _DAT_8c27e348 = &PTR_DAT_8c133aec;
  _DAT_8c27e34c = PTR_s_Fm1_G_Home_njd_8c133934;
  _DAT_8c27e350 = PTR_s_FM1_FACE_8c13394c;
  _DAT_8c27e354 = PTR_s_FM1_BODY_TEX_8c133950;
  uVar5 = 900;
  _DAT_8c27e358 = PTR_s_fm1_MotionPack_npd_8c133938;
  _DAT_8c27e35c = PTR_s_Hand_for_fm1_njm_8c133954;
  _DAT_8c27e360 = PTR_s_fm1_normal_PVM_8c13393c;
  _DAT_8c27e364 = 0x11;
  _DAT_8c27e370 = 0x8c27f3e4;
  _DAT_8c27e374 = PTR_s_fm1_special_PVM_8c133940;
  _DAT_8c27e378 = 0x11;
  _DAT_8c27e384 = 0x8c27f4b0;
  _DAT_8c27e388 = PTR_s_Fm1_head_normal_PVM_8c133944;
  _DAT_8c27e38c = 10;
  uVar1 = 0x8c27dfd4;
  _DAT_8c27e398 = 0x8c27f57c;
  _DAT_8c27e39c = PTR_s_Fm1_head_special_PVM_8c133948;
  _DAT_8c27e3a0 = 10;
  _DAT_8c27e3ac = 0x8c27f5f4;
  _DAT_8c27e3f4 = 0x8c27ff10;
  uVar10 = CONCAT44(0x3f800000,fVar7);
  if (cVar12 == '\0') {
    _DAT_8c27e3fc = CONCAT44(DAT_8c27e3fc_4,0x3f800000);
  }
  else {
    fVar7 = 240.0;
    _DAT_8c27e3fc = uVar10;
  }
  _DAT_8c27e414 = 0x43700000;
  _DAT_8c27e410 = 0x3e99999a;
  _DAT_8c27e40c = 0x3a1d4952;
  if (cVar12 == '\0') {
    _DAT_8c27e418 = 0.0;
    fVar8 = fVar7;
  }
  else {
    ppuRam8c27e424 = &PTR_PTR_8c1340d8;
    fVar8 = 0.8;
    _DAT_8c27e418 = fVar7;
  }
  _DAT_8c27e420 = 0x427e0000;
  _DAT_8c27e41c = 0x42600000;
  _DAT_8c27e2d4 = 0x3f4ccccd;
  if (cVar12 == '\0') {
    _DAT_8c27e2d8 = 1.0;
  }
  else {
    _DAT_8c27e2dc = 0x3f800000;
    _DAT_8c27e2d8 = fVar8;
  }
  Class_129920_m0_015248(0x8c27e3c8,&PTR_PTR_8c1340d8,0x8c27dfd4,900,0x8c27dfd4);
  Class_129920_m0_015248(0x8c27e3d0,&PTR_PTR_8c1340d8,uVar1,uVar5,uVar4);
  _DAT_8c27e3e0 = 0x8c27e830;
  _DAT_8c27e3e4 = 0x65;
  _DAT_8c27e3e8 = 0x8c27e9d0;
  _DAT_8c27e3ec = 0x65;
  Vec3_set_xyz(auStack_80,0x414,Vec3_set_xyz,uVar5);
  uVar3 = 0x8c27e438;
  vec3_copy_8c023d8c(0x8c27e438,auStack_80,0x8c27e438,uVar5);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_80,0xffffffff,uVar3,uVar5);
  Vec3_set_xyz(auStack_8c,uVar1,uVar3,uVar5);
  uVar5 = 0x470;
  uVar3 = 0x8c27e444;
  vec3_copy_8c023d8c(0x8c27e444,auStack_8c,0x470,0x8c27e444);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_8c,0xffffffff,uVar5,uVar3);
  Vec3_set_xyz(auStack_98,uVar1,uVar5,uVar3);
  vec3_copy_8c023d8c(0x8c27e450,auStack_98,uVar5,uVar3);
  object_dtor_delete(auStack_98,0xffffffff,uVar5,uVar3);
  if (cVar12 == '\0') {
    _DAT_8c27e460 = CONCAT44(DAT_8c27e460_4,0x43660000);
    _DAT_8c27e42c = CONCAT44(DAT_8c27e42c_4,0x42a00000);
  }
  else {
    _DAT_8c27e460 = 0x45843660000;
    fVar8 = 80.0;
    _DAT_8c27e42c = 0x49442a00000;
  }
  _DAT_8c27e468 = &PTR_s_fm2_W_Idle1_njm_8c133ca8;
  _DAT_8c27e46c = &PTR_s_fm2_W_Idle1_njs_8c133e3c;
  _DAT_8c27e470 = PTR_s_Fm2_G_Home_njd_8c133c84;
  _DAT_8c27e474 = PTR_s_FM2_FACE_8c133c9c;
  _DAT_8c27e478 = PTR_s_FM2_BODY_TEX_8c133ca0;
  _DAT_8c27e47c = PTR_s_fm2_MotionPack_npd_8c133c88;
  _DAT_8c27e480 = PTR_s_Hand_for_fm2_njm_8c133ca4;
  _DAT_8c27e484 = PTR_s_fm2_normal_PVM_8c133c8c;
  _DAT_8c27e488 = 0xf;
  _DAT_8c27e494 = 0x8c27f66c;
  _DAT_8c27e498 = PTR_s_fm2_special_PVM_8c133c90;
  _DAT_8c27e49c = 0xf;
  _DAT_8c27e4a8 = 0x8c27f720;
  _DAT_8c27e4ac = PTR_s_Fm2_head_normal_PVM_8c133c94;
  _DAT_8c27e4b0 = 10;
  _DAT_8c27e4bc = 0x8c27f7d4;
  _DAT_8c27e4c0 = PTR_s_Fm2_head_special_PVM_8c133c98;
  _DAT_8c27e4c4 = 10;
  _DAT_8c27e4d0 = 0x8c27f84c;
  _DAT_8c27e518 = 0x8c27ffb0;
  if (cVar12 == '\0') {
    _DAT_8c27e520 = CONCAT44(DAT_8c27e520_4,0x3f800000);
    _DAT_8c27e53c = fVar8;
  }
  else {
    _DAT_8c27e53c = 270.0;
    _DAT_8c27e520 = CONCAT44(0x3f800000,fVar8);
  }
  _DAT_8c27e538 = 0x43870000;
  _DAT_8c27e534 = 0x3e99999a;
  _DAT_8c27e530 = 0x3a03126f;
  if (cVar12 == '\0') {
    _DAT_8c27e53c = 0.0;
  }
  else {
    ppuRam8c27e548 = &PTR_PTR_8c1340d8;
  }
  _DAT_8c27e544 = 0x42880000;
  _DAT_8c27e540 = 0x429a0000;
  Class_129920_m0_015248(0x8c27e4ec,&PTR_PTR_8c1340d8,Class_129920_m0_015248,uVar3,uVar4);
  Class_129920_m0_015248(0x8c27e4f4,&PTR_PTR_8c1340d8,Class_129920_m0_015248,uVar3,uVar4);
  _DAT_8c27e504 = 0x8c27eb70;
  _DAT_8c27e508 = 0x65;
  uVar5 = 0x538;
  uVar1 = 0x8c27ed10;
  _DAT_8c27e50c = 0x8c27ed10;
  _DAT_8c27e510 = 0x65;
  Vec3_set_xyz(auStack_a4,auStack_a4,0x8c27ed10,0x538);
  vec3_copy_8c023d8c(0x8c27e55c,auStack_a4,uVar1,uVar5);
  uVar4 = 0xffffffff;
  object_dtor_delete(auStack_a4,0xffffffff,uVar1,uVar5);
  Vec3_set_xyz(auStack_b0,uVar4,uVar1,uVar5);
  vec3_copy_8c023d8c(0x8c27e568,auStack_b0,uVar1,uVar5);
  uVar4 = 0xffffffff;
  object_dtor_delete(auStack_b0,0xffffffff,auStack_b0,uVar5);
  Vec3_set_xyz(auStack_bc,uVar4,auStack_bc,uVar5);
  vec3_copy_8c023d8c(0x8c27e574,auStack_bc,auStack_bc,uVar5);
  object_dtor_delete(auStack_bc,0xffffffff,object_dtor_delete,uVar5);
  if (cVar12 == '\0') {
    _DAT_8c27e584 = CONCAT44(DAT_8c27e584_4,0x43870000);
    _DAT_8c27e550 = CONCAT44(DAT_8c27e550_4,0x42c80000);
  }
  else {
    _DAT_8c27e584 = 0x56843870000;
    _DAT_8c27e550 = 0x8c27e59442c80000;
  }
  _DAT_8c27e594 = 3;
  _DAT_8c27e598 = 1;
  _DAT_8c27e59c = 0;
  _DAT_8c27e5a0 = 0;
  _DAT_8c27e5a4 = 0xffff;
  _DAT_8c27e5a8 = 1;
  _DAT_8c27e5ac = 0;
  _DAT_8c27e5b0 = 0;
  return 0xffffffff;
}

__asm__(".globl _s_Tm1_Home_njd_0372a2\n.set _s_Tm1_Home_njd_0372a2, _s_Tm1_Home_njd_0372a2_def\n");
