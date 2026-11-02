#include "../decls.h"
undefined4 s_gm1_Home_njd_085f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_fffffeb4;
  undefined1 auStack_12c [12];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [12];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [16];
  
  _DAT_8c28107c = (ulonglong)_DAT_8c28107c;
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
    *(undefined1 **)(iVar8 * 0x124 + -0x73d7f04c) = &DAT_8c27d1fc;
  }
  _DAT_8c280fb8 = &PTR_s_gm1_Hover_njm_8c137b58;
  _DAT_8c280fbc = &PTR_s_gm1_Hover_njs_8c137ba0;
  _DAT_8c280fc0 = PTR_s_gm1_Home_njd_8c137b34;
  _DAT_8c280fc4 = PTR_s_GM1_FACE_8c137b4c;
  _DAT_8c280fc8 = PTR_s_GM1_BODY_8c137b50;
  _DAT_8c280fcc = PTR_s_Gm1_MotionPack_npd_8c137b38;
  _DAT_8c280fd0 = PTR_s_hand_for_gm1_njm_8c137b54;
  _DAT_8c281068 = 0x8c283444;
  _DAT_8c28107c = CONCAT44(0x3ca3d70a,_DAT_8c28107c);
  _DAT_8c281084 = 0x3f4ccccd;
  _DAT_8c281088 = 0x42f00000;
  _DAT_8c28108c = 0;
  uVar2 = 0xdc;
  _DAT_8c281090 = 0;
  _DAT_8c281094 = 0x41100000;
  Class_129920_m0_015248(0x8c28103c,&PTR_PTR_8c13841c,0xdc,0x8c280fb4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c281044,&PTR_PTR_8c13841c,uVar2,0x8c281044,in_stack_fffffeb4);
  _DAT_8c280fd4 = PTR_s_gm1_PVM_8c137b3c;
  _DAT_8c280fd8 = 3;
  _DAT_8c280fe4 = 0x8c282160;
  _DAT_8c280fe8 = PTR_s_gm1_PVM_8c137b40;
  _DAT_8c280fec = 3;
  _DAT_8c280ff8 = 0x8c282184;
  _DAT_8c280ffc = PTR_s_gm1_head_normal_PVM_8c137b44;
  _DAT_8c281000 = 10;
  _DAT_8c28100c = 0x8c2821a8;
  _DAT_8c281010 = PTR_s_gm1_head_normal_PVM_8c137b48;
  _DAT_8c281014 = 10;
  _DAT_8c281020 = 0x8c282220;
  _DAT_8c281054 = 0x8c28191c;
  _DAT_8c281058 = 0x12;
  _DAT_8c28105c = 0x8c281970;
  _DAT_8c281060 = 0x12;
  Vec3_set_xyz(auStack_18,0x12,0x8c28191c,0x8c282220);
  uVar5 = 0x8c280fb4;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c2810ac,auStack_18,vec3_copy_8c023d8c,0x8c280fb4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_18,0xffffffff,pcVar3,uVar5);
  Vec3_set_xyz(auStack_24,uVar2,pcVar3,uVar5);
  uVar4 = 0x8c2810b8;
  vec3_copy_8c023d8c(0x8c2810b8,auStack_24,0x8c2810b8,uVar5);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_24,0xffffffff,uVar4,uVar5);
  Vec3_set_xyz(auStack_30,uVar2,uVar4,uVar5);
  uVar2 = 0x8c2810c4;
  vec3_copy_8c023d8c(0x8c2810c4,auStack_30,0x8c2810c4,uVar5);
  object_dtor_delete(auStack_30,0xffffffff,uVar2,uVar5);
  if (cVar12 == '\0') {
    _DAT_8c2810d4 = CONCAT44(DAT_8c2810d4_4,0x42b40000);
    _DAT_8c2810a0 = CONCAT44(DAT_8c2810a0_4,0x41600000);
    dVar10 = (double)CONCAT44(0x3f000000,_DAT_8c28107c);
  }
  else {
    _DAT_8c2810d4 = 0x12842b40000;
    _DAT_8c2810a0 = 0xc841600000;
    dVar10 = -1.7008876239802676e-250;
    in_xd0 = _DAT_8c28107c;
  }
  if (cVar11 == '\0') {
    _DAT_8c281194 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c281194 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c28107c = CONCAT44(_DAT_8c281080,_DAT_8c281194);
    uVar1 = _DAT_8c28107c;
  }
  _DAT_8c28107c = uVar1;
  _DAT_8c2810dc = &PTR_s_gm2_Hover_njm_8c137c10;
  _DAT_8c2810e0 = &PTR_s_gm2_Hover_njs_8c137c60;
  _DAT_8c2810e4 = PTR_s_gm2_Home_njd_8c137bec;
  _DAT_8c2810e8 = PTR_s_BABYGILLMAN_FACE_8c137c04;
  _DAT_8c2810ec = PTR_s_BABYGILLMAN_BODY_8c137c08;
  _DAT_8c2810f0 = PTR_s_Gm2_MotionPack_npd_8c137bf0;
  _DAT_8c2810f4 = PTR_s_Hand_for_gm2_njm_8c137c0c;
  _DAT_8c2810f8 = PTR_s_gm2_PVM_8c137bf4;
  _DAT_8c2810fc = 3;
  _DAT_8c281108 = 0x8c282298;
  _DAT_8c28110c = PTR_s_gm2_PVM_8c137bf8;
  _DAT_8c281110 = 3;
  _DAT_8c28111c = 0x8c2822bc;
  _DAT_8c281120 = PTR_s_gm2_head_normal_PVM_8c137bfc;
  _DAT_8c281124 = 10;
  _DAT_8c281130 = 0x8c2822e0;
  _DAT_8c281134 = PTR_s_gm2_head_normal_PVM_8c137c00;
  _DAT_8c281138 = 10;
  _DAT_8c281144 = 0x8c282358;
  _DAT_8c28118c = 0x8c2834e4;
  if (cVar12 != '\0') {
    _DAT_8c281194 = 0.75;
  }
  _DAT_8c281190 = 0x3f400000;
  if (cVar12 == '\0') {
    _DAT_8c281194 = 1.0;
    dVar10 = 0.0004882813655058271;
  }
  else {
    _DAT_8c281198 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c281194);
    dVar10 = (double)CONCAT44(_DAT_8c281194,0x3f400000);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281198,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c28119e),CONCAT24(_DAT_8c28119c,_DAT_8c281198));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c28119c = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c28119c = (short)(int)dVar10;
  }
  if (_DAT_8c28119c == 0) {
    _DAT_8c28119c = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c2811b4 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c2811b4 = 0x430c0000;
  }
  _DAT_8c2811ac = 0x430c0000;
  _DAT_8c2811a8 = 0x3f4ccccd;
  _DAT_8c2811a0 = CONCAT44(0x3ca3d70a,(int)_DAT_8c2811a0);
  if (cVar12 == '\0') {
    _DAT_8c2811b4 = 0;
  }
  else {
    ppuRam8c2811bc = &PTR_PTR_8c138460;
  }
  _DAT_8c2811b8 = 0x4179999a;
  uVar4 = 0x8c281160;
  _DAT_8c2811b0 = _DAT_8c2811b4;
  Class_129920_m0_015248
            (0x8c281160,&PTR_PTR_8c138460,Class_129920_m0_015248,0x8c281160,in_stack_fffffeb4);
  uVar2 = 0x8c280fb4;
  Class_129920_m0_015248(0x8c281168,&PTR_PTR_8c138460,0x8c280fb4,uVar4,in_stack_fffffeb4);
  _DAT_8c281178 = 0x8c2819c4;
  _DAT_8c28117c = 0x14;
  _DAT_8c281180 = 0x8c281a20;
  _DAT_8c281184 = 0x14;
  Vec3_set_xyz(auStack_3c,0x14,uVar2,uVar4);
  puVar6 = auStack_3c;
  uVar4 = 0x8c280fb4;
  vec3_copy_8c023d8c(&(*(uint *)0x8c2811d0),puVar6,0x8c280fb4,puVar6);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_3c,0xffffffff,uVar4,puVar6);
  Vec3_set_xyz(auStack_48,uVar2,uVar4,puVar6);
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c2811dc,auStack_48,uVar4,vec3_copy_8c023d8c);
  uVar2 = 0xffffffff;
  puVar6 = auStack_48;
  object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar3);
  Vec3_set_xyz(auStack_54,uVar2,puVar6,pcVar3);
  puVar6 = auStack_54;
  vec3_copy_8c023d8c(0x8c2811e8,puVar6,puVar6,pcVar3);
  object_dtor_delete(auStack_54,0xffffffff,puVar6,pcVar3);
  if (cVar12 == '\0') {
    _DAT_8c2811f8 = CONCAT44(DAT_8c2811f8_4,0x42c80000);
    _DAT_8c2811c8 = 0x43938000;
  }
  else {
    _DAT_8c2811f8 = 0x21442c80000;
    (*(uint *)0x8c2811d0) = 0x210;
    _DAT_8c2811c8 = 0x1ec;
  }
  _DAT_8c2811cc = 0x43960000;
  _DAT_8c2811c4 = 0x41b00000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3f333333,_DAT_8c2811a0);
  }
  else {
    dVar10 = 1.24825739279838e-311;
    in_xd0 = _DAT_8c2811a0;
  }
  if (cVar11 == '\0') {
    _DAT_8c2812b8 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c2812b8 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c2811a0 = CONCAT44(_DAT_8c2811a4,_DAT_8c2812b8);
    uVar1 = _DAT_8c2811a0;
  }
  _DAT_8c2811a0 = uVar1;
  _DAT_8c281200 = &PTR_s_gm3_SlowHover_njm_8c137cd8;
  _DAT_8c281204 = &PTR_s_gm3_SlowHover_njs_8c137d44;
  _DAT_8c281208 = PTR_s_gm3_Home_njd_8c137cb4;
  _DAT_8c28120c = PTR_s_GM3_FACE_8c137ccc;
  _DAT_8c281210 = PTR_s_GM3_BODY_8c137cd0;
  _DAT_8c281214 = PTR_s_Gm3_MotionPack_npd_8c137cb8;
  _DAT_8c281218 = PTR_s_hand_for_gm3_njm_8c137cd4;
  _DAT_8c28121c = PTR_s_gm3_normal_PVM_8c137cbc;
  _DAT_8c281220 = 6;
  _DAT_8c28122c = 0x8c2823d0;
  _DAT_8c281230 = PTR_s_gm3_special_PVM_8c137cc0;
  _DAT_8c281234 = 6;
  _DAT_8c281240 = 0x8c282418;
  _DAT_8c281244 = PTR_s_gm3_head_normal_PVM_8c137cc4;
  _DAT_8c281248 = 10;
  _DAT_8c281254 = 0x8c282460;
  _DAT_8c281258 = PTR_s_gm3_head_special_PVM_8c137cc8;
  _DAT_8c28125c = 10;
  _DAT_8c281268 = 0x8c2824d8;
  _DAT_8c2812b0 = 0x8c283584;
  if (cVar12 != '\0') {
    _DAT_8c2812b8 = 0.85;
  }
  _DAT_8c2812b4 = 0x3f59999a;
  if (cVar12 == '\0') {
    _DAT_8c2812b8 = 1.0;
  }
  else {
    _DAT_8c2812bc = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c2812b8);
  }
  puVar6 = &DAT_8c2812b4;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3f59999a,_DAT_8c2812b8);
  }
  else {
    dVar10 = (double)CONCAT44(_DAT_8c2812b8,0x3f59999a);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c2812bc,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c2812c2),CONCAT24(_DAT_8c2812c0,_DAT_8c2812bc));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c2812c0 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c2812c0 = (short)(int)dVar10;
  }
  if (_DAT_8c2812c0 == 0) {
    _DAT_8c2812c0 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c2812d4 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c2812d4 = 0x430c0000;
  }
  _DAT_8c2812d0 = 0x430c0000;
  _DAT_8c2812cc = 0x3f4ccccd;
  _DAT_8c2812c4 = CONCAT44(0x3ca3d70a,(int)_DAT_8c2812c4);
  if (cVar12 == '\0') {
    _DAT_8c2812d4 = 0;
  }
  else {
    ppuRam8c2812e0 = &PTR_PTR_8c1384a4;
  }
  _DAT_8c2812dc = 0x41b40000;
  _DAT_8c2812d8 = 0xbfa66666;
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248
            (0x8c281284,&PTR_PTR_8c1384a4,Class_129920_m0_015248,&DAT_8c2812b4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c28128c,&PTR_PTR_8c1384a4,pcVar3,puVar6,in_stack_fffffeb4);
  _DAT_8c28129c = 0x8c281a7c;
  _DAT_8c2812a0 = 0x1b;
  _DAT_8c2812a4 = 0x8c281af4;
  uVar4 = 0x1b;
  _DAT_8c2812a8 = 0x1b;
  puVar6 = auStack_60;
  Vec3_set_xyz(puVar6,0x8c281af4,puVar6,0x1b);
  vec3_copy_8c023d8c(&(*(uint *)0x8c2812f4),auStack_60,puVar6,uVar4);
  object_dtor_delete(auStack_60,0xffffffff,puVar6,uVar4);
  Vec3_set_xyz(auStack_6c,Vec3_set_xyz,puVar6,uVar4);
  vec3_copy_8c023d8c(0x8c281300,auStack_6c,puVar6,uVar4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_6c,0xffffffff,puVar6,uVar4);
  Vec3_set_xyz(auStack_78,uVar2,puVar6,uVar4);
  vec3_copy_8c023d8c(0x8c28130c,auStack_78,puVar6,uVar4);
  object_dtor_delete(auStack_78,0xffffffff,puVar6,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c28131c = CONCAT44(DAT_8c28131c_4,0x430c0000);
    _DAT_8c2812ec = 0x43938000;
  }
  else {
    _DAT_8c28131c = 0x338430c0000;
    (*(uint *)0x8c2812f4) = 0x334;
    _DAT_8c2812ec = 0x310;
  }
  _DAT_8c2812f0 = 0x43960000;
  _DAT_8c2812e8 = 0x42040000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3f333333,_DAT_8c2812c4);
  }
  else {
    dVar10 = 1.86788016376024e-311;
    in_xd0 = _DAT_8c2812c4;
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c2812c4 = CONCAT44(_DAT_8c2812c8,fVar9);
    uVar1 = _DAT_8c2812c4;
  }
  _DAT_8c2812c4 = uVar1;
  _DAT_8c281324 = &PTR_s_gm5_SlowHover_njm_8c137e08;
  _DAT_8c281328 = &PTR_s_gm5_SlowHover_njs_8c137e78;
  _DAT_8c28132c = PTR_s_gm5_Home_njd_8c137db4;
  _DAT_8c281330 = PTR_s_GILLMAN_FACE_8c137df4;
  _DAT_8c281334 = PTR_s_GILLMAN_BODY_8c137df8;
  _DAT_8c281338 = PTR_s_Gm4_MotionPack_npd_8c137db8;
  _DAT_8c28133c = PTR_s_Hand_for_gm4_njm_8c137dfc;
  _DAT_8c281340 = PTR_s_gm4_normal_PVM_8c137dc4;
  _DAT_8c281344 = 9;
  _DAT_8c281350 = 0x8c282550;
  _DAT_8c281354 = PTR_s_gm4_special_PVM_8c137dc8;
  _DAT_8c281358 = 9;
  _DAT_8c281364 = 0x8c2825bc;
  _DAT_8c281368 = PTR_s_gm4_head_normal_PVM_8c137ddc;
  _DAT_8c28136c = 10;
  _DAT_8c281378 = 0x8c2827d8;
  _DAT_8c28137c = PTR_s_gm4_head_special_PVM_8c137de0;
  _DAT_8c281380 = 10;
  _DAT_8c28138c = 0x8c282850;
  _DAT_8c2813d4 = 0x8c283624;
  if (cVar12 == '\0') {
    dVar10 = 5.004884578511337e-05;
  }
  else {
    _DAT_8c2813e0 = 0x430;
    in_xd0 = 0x4303f2e147b;
    dVar10 = 0.00022949223013711163;
  }
  _DAT_8c2813dc = 0x3f2e147b;
  _DAT_8c2813d8 = 0x3f0a3d71;
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c2813e0,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c2813e6),CONCAT24(_DAT_8c2813e4,_DAT_8c2813e0));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.29233882823794e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c2813e4 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c2813e4 = (short)(int)dVar10;
  }
  if (_DAT_8c2813e4 == 0) {
    _DAT_8c2813e4 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c2813f8 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c2813f8 = 0x435c0000;
  }
  _DAT_8c2813f4 = 0x435c0000;
  _DAT_8c2813f0 = 0x3e99999a;
  _DAT_8c2813e8 = CONCAT44(0x3a1d4952,(int)_DAT_8c2813e8);
  if (cVar12 == '\0') {
    _DAT_8c2813f8 = 0;
  }
  else {
    ppuRam8c281404 = &PTR_PTR_8c1384e8;
  }
  _DAT_8c281400 = 0x42630000;
  _DAT_8c2813fc = 0x3f400000;
  uVar4 = 0x8c280fb4;
  Class_129920_m0_015248(0x8c2813a8,&PTR_PTR_8c1384e8,&DAT_8c2813f4,0x8c280fb4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c2813b0,&PTR_PTR_8c1384e8,0x3fc,uVar4,in_stack_fffffeb4);
  _DAT_8c2813c0 = 0x8c281b6c;
  uVar2 = 0x410;
  _DAT_8c2813c4 = 0x1c;
  _DAT_8c2813c8 = 0x8c281be8;
  _DAT_8c2813cc = 0x1c;
  Vec3_set_xyz(auStack_84,0x418,0x410,uVar4);
  uVar5 = 0x464;
  vec3_copy_8c023d8c(0x8c281418,auStack_84,uVar2,0x464);
  uVar4 = 0xffffffff;
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_84,0xffffffff,0xffffffff,uVar5);
  Vec3_set_xyz(auStack_90,uVar2,uVar4,uVar5);
  vec3_copy_8c023d8c(0x8c281424,auStack_90,uVar4,uVar5);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_90,0xffffffff,uVar4,uVar5);
  Vec3_set_xyz(auStack_9c,uVar2,uVar4,uVar5);
  uVar2 = 0x8c281430;
  vec3_copy_8c023d8c(0x8c281430,auStack_9c,0x8c281430,uVar5);
  object_dtor_delete(auStack_9c,0xffffffff,uVar2,uVar5);
  if (cVar12 == '\0') {
    _DAT_8c281440 = CONCAT44(DAT_8c281440_4,0x43160000);
    _DAT_8c28140c = CONCAT44(DAT_8c28140c_4,0x427c0000);
    dVar10 = (double)CONCAT44(0x3f333333,_DAT_8c2813e8);
  }
  else {
    _DAT_8c281440 = 0x45843160000;
    _DAT_8c28140c = 0x434427c0000;
    dVar10 = 2.48750293472209e-311;
    in_xd0 = _DAT_8c2813e8;
  }
  if (cVar11 == '\0') {
    _DAT_8c281500 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c281500 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c2813e8 = CONCAT44(_DAT_8c2813ec,_DAT_8c281500);
    uVar1 = _DAT_8c2813e8;
  }
  _DAT_8c2813e8 = uVar1;
  _DAT_8c281448 = &PTR_s_gm5_SlowHover_njm_8c137ee8;
  _DAT_8c28144c = &PTR_s_gm5_SlowHover_njs_8c137f58;
  _DAT_8c281450 = PTR_s_gm5_Home_njd_8c137db4;
  _DAT_8c281454 = PTR_s_GILLMAN_FACE_8c137df4;
  _DAT_8c281458 = PTR_s_GILLMAN_BODY_8c137df8;
  _DAT_8c28145c = PTR_s_Gm5_MotionPack_npd_8c137dbc;
  _DAT_8c281460 = PTR_s_Hand_for_gm5_njm_8c137e00;
  _DAT_8c281464 = PTR_s_gm5_normal_PVM_8c137dcc;
  _DAT_8c281468 = 9;
  _DAT_8c281474 = 0x8c282628;
  _DAT_8c281478 = PTR_s_gm5_special_PVM_8c137dd0;
  _DAT_8c28147c = 9;
  _DAT_8c281488 = 0x8c282694;
  _DAT_8c28148c = PTR_s_gm5_head_normal_PVM_8c137de4;
  _DAT_8c281490 = 10;
  _DAT_8c28149c = 0x8c2828c8;
  _DAT_8c2814a0 = PTR_s_gm5_head_special_PVM_8c137de8;
  _DAT_8c2814a4 = 10;
  _DAT_8c2814b0 = 0x8c282940;
  _DAT_8c2814f8 = 0x8c283624;
  if (cVar12 != '\0') {
    _DAT_8c281500 = 0.68;
  }
  _DAT_8c2814fc = 0x3f2e147b;
  if (cVar12 == '\0') {
    _DAT_8c281500 = 1.0;
    dVar10 = 0.0002294922303462954;
  }
  else {
    _DAT_8c281504 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c281500);
    dVar10 = (double)CONCAT44(_DAT_8c281500,0x3f2e147b);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281504,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c28150a),CONCAT24(_DAT_8c281508,_DAT_8c281504));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.9119615991998e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c281508 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c281508 = (short)(int)dVar10;
  }
  iVar8 = (int)_DAT_8c281508;
  if (_DAT_8c281508 == 0) {
    _DAT_8c281508 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c28151c = SUB84(dVar10,0);
  }
  else {
    _DAT_8c28151c = 0x435c0000;
  }
  _DAT_8c281518 = 0x435c0000;
  _DAT_8c281514 = 0x3e99999a;
  _DAT_8c28150c = CONCAT44(0x3a03126f,(int)_DAT_8c28150c);
  if (cVar12 == '\0') {
    _DAT_8c28151c = 0;
  }
  else {
    ppuRam8c281528 = &PTR_PTR_8c1384e8;
  }
  _DAT_8c281524 = 0x42630000;
  _DAT_8c281520 = 0x3f400000;
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248
            (0x8c2814cc,&PTR_PTR_8c1384e8,Class_129920_m0_015248,iVar8,in_stack_fffffeb4);
  Class_129920_m0_015248
            (0x8c2814d4,&PTR_PTR_8c1384e8,pcVar3,Class_129920_m0_015248,in_stack_fffffeb4);
  _DAT_8c2814e4 = 0x8c281c64;
  uVar2 = 0x1c;
  _DAT_8c2814e8 = 0x1c;
  _DAT_8c2814ec = 0x8c281ce0;
  _DAT_8c2814f0 = 0x1c;
  Vec3_set_xyz(auStack_a8,0x8c280fb4,0x1c,0x8c281c64);
  pcVar7 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c28153c,auStack_a8,uVar2,vec3_copy_8c023d8c);
  pcVar3 = object_dtor_delete;
  object_dtor_delete(auStack_a8,0xffffffff,object_dtor_delete,pcVar7);
  Vec3_set_xyz(auStack_b4,auStack_b4,pcVar3,pcVar7);
  vec3_copy_8c023d8c(0x8c281548,auStack_b4,vec3_copy_8c023d8c,pcVar7);
  puVar6 = auStack_b4;
  object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar7);
  Vec3_set_xyz(auStack_c0,auStack_c0,puVar6,pcVar7);
  vec3_copy_8c023d8c(0x8c281554,auStack_c0,vec3_copy_8c023d8c,pcVar7);
  object_dtor_delete(auStack_c0,0xffffffff,auStack_c0,pcVar7);
  if (cVar12 == '\0') {
    _DAT_8c281564 = CONCAT44(DAT_8c281564_4,0x43160000);
    _DAT_8c281530 = CONCAT44(DAT_8c281530_4,0x427c0000);
    dVar10 = (double)CONCAT44(0x3f666666,_DAT_8c28150c);
  }
  else {
    _DAT_8c281564 = 0x8c280fb443160000;
    _DAT_8c281530 = 0x558427c0000;
    dVar10 = 3.10712736349307e-311;
    in_xd0 = _DAT_8c28150c;
  }
  if (cVar11 == '\0') {
    _DAT_8c281620 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c281620 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c28150c = CONCAT44(_DAT_8c281510,_DAT_8c281620);
    uVar1 = _DAT_8c28150c;
  }
  _DAT_8c28150c = uVar1;
  _DAT_8c28156c = &PTR_s_gm5_SlowHover_njm_8c137fc8;
  _DAT_8c281570 = &PTR_s_gm5_SlowHover_njs_8c138038;
  _DAT_8c281574 = PTR_s_gm5_Home_njd_8c137db4;
  _DAT_8c281578 = PTR_s_GILLMAN_FACE_8c137df4;
  _DAT_8c28157c = PTR_s_GILLMAN_BODY_8c137df8;
  _DAT_8c281580 = PTR_s_Gm6_MotionPack_npd_8c137dc0;
  _DAT_8c281584 = PTR_s_Hand_for_gm6_njm_8c137e04;
  _DAT_8c281588 = PTR_s_gm6_normal_PVM_8c137dd4;
  _DAT_8c28158c = 9;
  _DAT_8c281598 = 0x8c282700;
  _DAT_8c28159c = PTR_s_gm6_special_PVM_8c137dd8;
  _DAT_8c2815a0 = 9;
  _DAT_8c2815ac = 0x8c28276c;
  _DAT_8c2815b0 = PTR_s_gm6_head_normal_PVM_8c137dec;
  _DAT_8c2815b4 = 10;
  _DAT_8c2815c0 = 0x8c2829b8;
  _DAT_8c2815c4 = PTR_s_gm6_head_special_PVM_8c137df0;
  _DAT_8c2815c8 = 10;
  _DAT_8c2815d4 = 0x8c282a30;
  _DAT_8c28161c = 0x8c283624;
  if (cVar12 == '\0') {
    _DAT_8c281620 = 1.0;
    dVar10 = 0.007812501854205038;
  }
  else {
    _DAT_8c281628 = 0x678;
    in_xd0 = 0x6783fb5c28f;
    dVar10 = (double)CONCAT44(0x3fb5c28f,_DAT_8c281620);
  }
  _DAT_8c281624 = 0x3fb5c28f;
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281628,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c28162e),CONCAT24(_DAT_8c28162c,_DAT_8c281628));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 3.53158437016166e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c28162c = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c28162c = (short)(int)dVar10;
  }
  if (_DAT_8c28162c == 0) {
    _DAT_8c28162c = 1;
  }
  if (cVar12 == '\0') {
    uVar2 = SUB84(dVar10,0);
  }
  else {
    uVar2 = 0x435c0000;
  }
  _DAT_8c28163c = 0x435c0000;
  _DAT_8c281638 = 0x3e99999a;
  _DAT_8c281634 = 0x3a03126f;
  if (cVar12 == '\0') {
    _DAT_8c281640 = 0;
    uVar4 = uVar2;
  }
  else {
    uVar4 = 0x42630000;
    ppuRam8c28164c = &PTR_PTR_8c1384e8;
    _DAT_8c281640 = uVar2;
  }
  _DAT_8c281648 = 0x42630000;
  _DAT_8c281644 = 0x3f400000;
  Class_129920_m0_015248
            (0x8c2815f0,&PTR_PTR_8c1384e8,&DAT_8c281624,Class_129920_m0_015248,in_stack_fffffeb4);
  uVar2 = 0x8c280fb4;
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248(0x8c2815f8,&PTR_PTR_8c1384e8,Class_129920_m0_015248,0x8c280fb4);
  _DAT_8c281608 = 0x8c281d5c;
  _DAT_8c28160c = 0x1c;
  _DAT_8c281610 = 0x8c281dd8;
  _DAT_8c281614 = 0x1c;
  Vec3_set_xyz(auStack_cc,0x65c,pcVar3,uVar2);
  uVar5 = 0x8c281660;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c281660,auStack_cc,vec3_copy_8c023d8c,0x8c281660);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_cc,0xffffffff,pcVar3,uVar5);
  Vec3_set_xyz(auStack_d8,uVar2,pcVar3,uVar5);
  vec3_copy_8c023d8c(0x8c28166c,auStack_d8,pcVar3,uVar5);
  uVar2 = 0xffffffff;
  pcVar7 = object_dtor_delete;
  object_dtor_delete(auStack_d8,0xffffffff,pcVar3,object_dtor_delete);
  Vec3_set_xyz(auStack_e4,uVar2,Vec3_set_xyz,pcVar7);
  uVar2 = 0x8c281678;
  vec3_copy_8c023d8c(0x8c281678,auStack_e4,0x8c281678,pcVar7);
  object_dtor_delete(auStack_e4,0xffffffff,uVar2,pcVar7);
  if (cVar12 == '\0') {
    _DAT_8c281654 = CONCAT44(DAT_8c281654_4,0x427c0000);
  }
  else {
    uVar4 = 0x427c0000;
    _DAT_8c281654 = 0x558427c0000;
  }
  _DAT_8c281690 = &PTR_s_hg1_W_Hover_njm_8c1380d0;
  _DAT_8c281694 = &PTR_s_hg1_W_Hover_njs_8c138174;
  _DAT_8c281698 = PTR_s_Hg1_Home_njd_8c1380ac;
  _DAT_8c28169c = PTR_s_HG1_FACE_8c1380c4;
  _DAT_8c2816a0 = PTR_s_HG1_BODY_8c1380c8;
  _DAT_8c2816a4 = PTR_s_Hg1_MotionPack_npd_8c1380b0;
  _DAT_8c2816a8 = PTR_s_Hand_for_hg1_njm_8c1380cc;
  _DAT_8c2816ac = PTR_s_hg1_normal_PVM_8c1380b4;
  _DAT_8c2816b0 = 0xd;
  _DAT_8c2816bc = 0x8c282aa8;
  _DAT_8c2816c0 = PTR_s_hg1_special_PVM_8c1380b8;
  _DAT_8c2816c4 = 0xd;
  _DAT_8c2816d0 = 0x8c282b44;
  _DAT_8c2816d4 = PTR_s_hg1_head_normal_PVM_8c1380bc;
  _DAT_8c2816d8 = 10;
  _DAT_8c2816e4 = 0x8c282be0;
  _DAT_8c2816e8 = PTR_s_hg1_head_special_PVM_8c1380c0;
  _DAT_8c2816ec = 10;
  _DAT_8c2816f8 = 0x8c282c58;
  _DAT_8c281740 = 0x8c2836c4;
  _DAT_8c281748 = uVar4;
  if (cVar12 != '\0') {
    _DAT_8c281748 = 0x3f5374bc;
  }
  _DAT_8c281744 = 0x3f5374bc;
  if (cVar12 == '\0') {
    _DAT_8c281748 = 0x3f800000;
    dVar10 = 0.0011874998435814632;
  }
  else {
    _DAT_8c28174c = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c281748);
    dVar10 = (double)CONCAT44(_DAT_8c281748,0x3f5374bc);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c28174c,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c281752),CONCAT24(_DAT_8c281750,_DAT_8c28174c));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.15120714112352e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c281750 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c281750 = (short)(int)dVar10;
  }
  if (_DAT_8c281750 == 0) {
    _DAT_8c281750 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c281764 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c281764 = 0x3e19999a;
  }
  _DAT_8c28175c = 0x3e19999a;
  _DAT_8c281754 = CONCAT44(0x3ba3d70a,(int)_DAT_8c281754);
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    _DAT_8c281764 = 0x43b40000;
  }
  _DAT_8c281760 = 0x43b40000;
  if (cVar12 == '\0') {
    _DAT_8c281764 = 0;
  }
  else {
    (*(uint *)0x8c281770) = 0x7c0;
    _DAT_8c281778 = &PTR_PTR_8c13852c;
  }
  _DAT_8c281774 = 0x41ec0000;
  _DAT_8c28176c = 0x429f0000;
  _DAT_8c281768 = 0x3fd33333;
  Class_129920_m0_015248
            (0x8c281714,&PTR_PTR_8c13852c,Class_129920_m0_015248,0x8c280fb4,in_stack_fffffeb4);
  Class_129920_m0_015248(0x8c28171c,&PTR_PTR_8c13852c,0x8c280fb4,uVar2,in_stack_fffffeb4);
  _DAT_8c28172c = 0x8c281e54;
  _DAT_8c281730 = 0x29;
  _DAT_8c281734 = 0x8c281f04;
  uVar4 = 0x784;
  _DAT_8c281738 = 0x29;
  Vec3_set_xyz(auStack_f0,0x29,0x784,uVar2);
  vec3_copy_8c023d8c(0x8c281784,auStack_f0,uVar4,uVar2);
  uVar4 = 0xffffffff;
  pcVar3 = object_dtor_delete;
  object_dtor_delete(auStack_f0,0xffffffff,object_dtor_delete,uVar2);
  Vec3_set_xyz(auStack_fc,uVar4,pcVar3,uVar2);
  uVar4 = 0x8c281790;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c281790,auStack_fc,vec3_copy_8c023d8c,0x8c281790);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_fc,0xffffffff,pcVar3,uVar4);
  Vec3_set_xyz(auStack_108,uVar2,pcVar3,uVar4);
  vec3_copy_8c023d8c(0x8c28179c,auStack_108,pcVar3,uVar4);
  object_dtor_delete(auStack_108,0xffffffff,pcVar3,uVar4);
  if (cVar12 == '\0') {
    _DAT_8c2817ac = CONCAT44(DAT_8c2817ac_4,0x437a0000);
  }
  else {
    _DAT_8c2817ac = 0x7c4437a0000;
    (*(uint *)0x8c28177c) = 0x7a0;
  }
  _DAT_8c281778 = (undefined **)0x42e40000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3fa66666,_DAT_8c281754);
  }
  else {
    dVar10 = 4.3463749776783e-311;
    in_xd0 = _DAT_8c281754;
  }
  if (cVar11 == '\0') {
    _DAT_8c28186c = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    _DAT_8c28186c = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c281754 = CONCAT44(_DAT_8c281758,_DAT_8c28186c);
    uVar1 = _DAT_8c281754;
  }
  _DAT_8c281754 = uVar1;
  _DAT_8c2817b4 = &PTR_s_hg2_W_Hover_njm_8c138240;
  _DAT_8c2817b8 = &PTR_s_hg2_W_Hover_njs_8c138310;
  _DAT_8c2817bc = PTR_s_Hg2_Home_njd_8c13821c;
  _DAT_8c2817c0 = PTR_s_HIGYO_FACE_8c138234;
  _DAT_8c2817c4 = PTR_s_HIGYO_BODY_8c138238;
  _DAT_8c2817c8 = PTR_s_Hg2_MotionPack_npd_8c138220;
  _DAT_8c2817cc = PTR_s_Hand_for_hg2_njm_8c13823c;
  _DAT_8c2817d0 = PTR_s_hg2_normal_PVM_8c138224;
  _DAT_8c2817d4 = 0xd;
  _DAT_8c2817e0 = 0x8c282cd0;
  _DAT_8c2817e4 = PTR_s_hg2_special_PVM_8c138228;
  _DAT_8c2817e8 = 0xd;
  _DAT_8c2817f4 = 0x8c282d6c;
  _DAT_8c2817f8 = PTR_s_hg2_head_normal_PVM_8c13822c;
  _DAT_8c2817fc = 10;
  _DAT_8c281808 = 0x8c282e08;
  _DAT_8c28180c = PTR_s_hg2_head_special_PVM_8c138230;
  _DAT_8c281810 = 10;
  _DAT_8c28181c = 0x8c282e80;
  _DAT_8c281864 = 0x8c283764;
  if (cVar12 == '\0') {
    _DAT_8c28186c = 1.0;
    dVar10 = 0.007812501848093234;
  }
  else {
    _DAT_8c281870 = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,_DAT_8c28186c);
    dVar10 = (double)CONCAT44(_DAT_8c28186c,_DAT_8c28186c);
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(_DAT_8c281870,fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)0x8c281876),CONCAT24(_DAT_8c281874,_DAT_8c281870));
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.77082991208538e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0));
    _DAT_8c281874 = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    _DAT_8c281874 = (short)(int)dVar10;
  }
  if (_DAT_8c281874 == 0) {
    _DAT_8c281874 = 1;
  }
  if (cVar12 == '\0') {
    _DAT_8c281888 = SUB84(dVar10,0);
  }
  else {
    _DAT_8c281888 = 0x3ba3d70a;
  }
  _DAT_8c281878 = CONCAT44(0x3ba3d70a,(int)_DAT_8c281878);
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    _DAT_8c281888 = 0x43be0000;
  }
  _DAT_8c281884 = 0x43be0000;
  _DAT_8c281880 = 0x3e19999a;
  if (cVar12 == '\0') {
    _DAT_8c281888 = 0;
  }
  else {
    (*(uint *)0x8c281894) = 0x8e4;
    _DAT_8c28189c = &PTR_PTR_8c138570;
  }
  _DAT_8c281898 = 0x42120000;
  _DAT_8c281890 = 0x42c00000;
  _DAT_8c28188c = 0x40000000;
  _DAT_8c281868 = _DAT_8c28186c;
  Class_129920_m0_015248
            (0x8c281838,&PTR_PTR_8c138570,Class_129920_m0_015248,0x8c280fb4,in_stack_fffffeb4);
  pcVar3 = Class_129920_m0_015248;
  Class_129920_m0_015248(0x8c281840,&PTR_PTR_8c138570,Class_129920_m0_015248,uVar2);
  _DAT_8c281850 = 0x8c281fb4;
  _DAT_8c281854 = 0x34;
  _DAT_8c281858 = 0x8c282090;
  uVar4 = 0x8a8;
  _DAT_8c28185c = 0x34;
  Vec3_set_xyz(auStack_114,0x8c280fb4,pcVar3,0x8a8);
  vec3_copy_8c023d8c(0x8c2818a8,auStack_114,0x8f4,uVar4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_114,0xffffffff,auStack_114,uVar4);
  pcVar3 = Vec3_set_xyz;
  Vec3_set_xyz(auStack_120,uVar2,Vec3_set_xyz,uVar4);
  vec3_copy_8c023d8c(0x8c2818b4,auStack_120,pcVar3,uVar4);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_120,0xffffffff,pcVar3,uVar4);
  Vec3_set_xyz(auStack_12c,uVar2,pcVar3,Vec3_set_xyz);
  uVar2 = 0x8c280fb4;
  pcVar3 = vec3_copy_8c023d8c;
  vec3_copy_8c023d8c(0x8c2818c0,auStack_12c,vec3_copy_8c023d8c,0x8c280fb4);
  object_dtor_delete(auStack_12c,0xffffffff,pcVar3,uVar2);
  if (cVar12 == '\0') {
    _DAT_8c2818d0 = CONCAT44(DAT_8c2818d0_4,0x43960000);
  }
  else {
    _DAT_8c2818d0 = 0x8e843960000;
    (*(uint *)0x8c2818a0) = 0x8c4;
  }
  _DAT_8c28189c = (undefined **)0x42fe0000;
  if (cVar12 == '\0') {
    dVar10 = (double)CONCAT44(0x3fc00000,_DAT_8c281878);
  }
  else {
    dVar10 = -4.2070694879144825e-250;
    in_xd0 = _DAT_8c281878;
  }
  if (cVar11 == '\0') {
    fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    _DAT_8c281878 = CONCAT44(_DAT_8c28187c,fVar9);
    uVar1 = _DAT_8c281878;
  }
  _DAT_8c281878 = uVar1;
  _DAT_8c2818e0 = 3;
  _DAT_8c2818e4 = 1;
  _DAT_8c2818e8 = 0;
  _DAT_8c2818ec = 0;
  _DAT_8c2818f0 = 6;
  _DAT_8c2818f4 = 1;
  _DAT_8c2818f8 = 0;
  _DAT_8c2818fc = 0;
  _DAT_8c281900 = 0xffff;
  _DAT_8c281904 = 1;
  _DAT_8c281908 = 0;
  _DAT_8c28190c = 0;
  return 0x20;
}

__asm__(".globl _s_gm1_Home_njd_085f50\n.set _s_gm1_Home_njd_085f50, _s_gm1_Home_njd_085f50_def\n");
