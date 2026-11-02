#include "../decls.h"
undefined4 s_Mr3_Home_njd_09e5c2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  float in_fr1;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [16];
  
  cVar7 = '\0';
  cVar6 = '\0';
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b270) = 0;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1d0) = 0;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1bc) = 0;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1cc) = 0;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1c4) = 0;
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined ***)(iVar4 * 0x124 + -0x73d7b26c) = &PTR_s_Mr3_Breathe_njm_8c13ab18;
    *(undefined ***)(iVar4 * 0x124 + -0x73d7b268) = &PTR_s_Mr3_Breathe_njs_8c13ab54;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b264) = PTR_s_Mr3_Home_njd_8c13ab04;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b260) = 0;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b25c) = PTR_s_MUSHROOMER_LINE_BODY_8c13ab10;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b258) = PTR_s_mr_MotionPack_npd_8c13ab08;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b254) = PTR_s_Hand_for_mr3_njm_8c13ab14;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b250) = PTR_s_Mush_pvm_8c13ab0c;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b24c) = 7;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b240) = 0x8c284ed0;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1bc) = 0x8c2850a8;
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1b4);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1a4);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1a0);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b19c);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x43340000;
    }
    else {
      *puVar1 = 0xa043340000;
    }
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1d0) = 0x8c284f30;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1cc) = 0xf;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1c8) = 0x8c284f78;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1c4) = 0xf;
    Vec3_set_xyz(auStack_14,ar5,ar6,ar7);
    vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b178,auStack_14,ar6,ar7);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_14,0xffffffff,ar6,ar7);
    Vec3_set_xyz(auStack_20,uVar3,ar6,ar7);
    vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b16c,auStack_20,ar6,ar7);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_20,0xffffffff,ar6,ar7);
    Vec3_set_xyz(auStack_2c,uVar3,ar6,ar7);
    vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b160,auStack_2c,ar6,ar7);
    ar5 = 0xffffffff;
    object_dtor_delete(auStack_2c,0xffffffff,ar6,ar7);
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b150);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x43160000;
    }
    else {
      *puVar1 = 0xec43160000;
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b184);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x41100000;
    }
    else {
      *puVar1 = 0xc841100000;
    }
    pfVar2 = (float *)(iVar4 * 0x124 + -0x73d7b1a8);
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1a8);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 4.92819431073484e-312;
    }
    if (cVar6 == '\0') {
      in_fr1 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      in_fr1 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      *pfVar2 = in_fr1;
    }
    else {
      *(undefined8 *)pfVar2 = in_xd0;
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b188);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x41e80000;
    }
    else {
      in_fr1 = 29.0;
      *puVar1 = 0x54f31fe341e80000;
    }
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined2 *)(iVar4 * 0x10 + -0x73d7b140) = 0xffff;
    *(undefined4 *)(iVar4 * 0x10 + -0x73d7b13c) = 1;
    *(undefined4 *)(iVar4 * 0x10 + -0x73d7b138) = 0;
    *(undefined4 *)(iVar4 * 0x10 + -0x73d7b134) = 0;
  }
  return 1;
}

__asm__(".globl _s_Mr3_Home_njd_09e5c2\n.set _s_Mr3_Home_njd_09e5c2, _s_Mr3_Home_njd_09e5c2_def\n");
