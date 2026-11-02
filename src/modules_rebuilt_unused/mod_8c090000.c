/* Seaman (USA) region 0x8c090000-0x8c0a0000 (Ghidra decompiler) */

/* FUN_8c090bc4 @ 8c090bc4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c090bc4(int ar4,int ar5,int ar6,int ar7)

{
  undefined8 uVar1;
  int a5;
  int a6;
  undefined4 a7;
  int a4;
  undefined4 uVar2;
  uint in_fr1;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_150;
  int aiStack_14c [4];
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
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [200];
  
  aiStack_14c[0] = ar5;
  a4 = *(int *)((int)aiStack_14c + DAT_8c090c14);
  a6 = ar6;
  (*(code *)PTR_FUN_8c090c1c)((int)aiStack_14c + DAT_8c090c18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c090c24)((int)aiStack_14c + DAT_8c090c20,ar5,a6,ar7);
  uVar2 = 1;
  switch(*(undefined4 *)(DAT_8c090c28 + ar4)) {
  case 0:
    iStack_118 = (*(code *)PTR_get_field_24_026024_8c090ce8)(a4,ar5,a6,ar7);
    if (iStack_118 != 1) {
LAB_8c090c8a:
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
      }
      *(undefined4 *)(DAT_8c090cf8 + ar4) = 6;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c090d04)(ar4 + DAT_8c090d00,ar5,a6,ar7);
      a7 = 0;
      uVar2 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c090d0c)(ar4 + DAT_8c090d00,0,0xffffffff,0);
      uStack_10c = 1;
      (*(code *)PTR_Vec3_dtor_8c090d14)((int)aiStack_14c + DAT_8c090d10,0xffffffff,uVar2,a7);
      (*(code *)PTR_FUN_8c090d18)((int)aiStack_14c + DAT_8c090cec,0xffffffff,uVar2,a7);
      return uStack_10c;
    }
    ar5 = (*(code *)PTR_get_field_24_026024_8c090ce8)(a4,ar5,a6,ar7);
    a6 = 1;
    iStack_11c = ar5;
    iStack_120 = (*(code *)PTR_FUN_8c090cf0)((int)aiStack_14c + DAT_8c090cec,ar5,1,ar7);
    if ((iStack_120 == 0) ||
       (ar5 = a4, iStack_124 = (*(code *)PTR_FUN_8c090cf4)(ar4,a4,a6,ar7), iStack_124 == 1))
    goto LAB_8c090c8a;
    (*(code *)PTR_Vec3_assign_8c090f84)(ar4 + DAT_8c090f80,(int)aiStack_14c + DAT_8c090f7c,a6,ar7);
    puStack_150 = (undefined1 *)((int)aiStack_14c + DAT_8c090f88);
    (*(code *)PTR_Vec3_scale_8c090f94)
              ((int)&puStack_150 + DAT_8c090f90,(int)&puStack_150 + DAT_8c090f8c,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c090f84)(ar4 + DAT_8c090f98,(int)aiStack_14c + DAT_8c090f88,a6,ar7);
    ar5 = -1;
    (*(code *)PTR_Vec3_dtor_8c090f9c)((int)aiStack_14c + DAT_8c090f88,0xffffffff,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c090fa0) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fa4);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c090fa0) = *(undefined8 *)((int)aiStack_14c + DAT_8c090fa4);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c090fa8) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fac);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c090fa8) = *(undefined8 *)((int)aiStack_14c + DAT_8c090fac);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c090fb0) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fb4);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c090fb0) = *(undefined8 *)((int)aiStack_14c + DAT_8c090fb4);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c090fb8) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fbc);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c090fb8) = *(undefined8 *)((int)aiStack_14c + DAT_8c090fbc);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c090fc0) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fc4);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c090fc0) = *(undefined8 *)((int)aiStack_14c + DAT_8c090fc4);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c090fc8) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fcc);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c090fc8) = *(undefined8 *)((int)aiStack_14c + DAT_8c090fcc);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c090fd0) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fd4);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c090fd0) = *(undefined8 *)((int)aiStack_14c + DAT_8c090fd4);
    }
    *(undefined4 *)(DAT_8c090fd8 + ar4) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fdc);
    *(undefined4 *)(DAT_8c090fe0 + ar4) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fe4);
    *(undefined4 *)(DAT_8c090fe8 + ar4) = *(undefined4 *)((int)aiStack_14c + DAT_8c090fec);
    (*(code *)PTR_FUN_8c090ff8)(ar4 + DAT_8c090ff0._4_4_,ar5,a6,ar7);
    *(int *)(DAT_8c090ffc + ar4) = *(int *)(DAT_8c090ffc + ar4) + 1;
    iStack_13c = ar4;
  case 1:
    (*(code *)PTR_Vec3_set_xyz_8c091004)((int)aiStack_14c + DAT_8c091000,ar5,a6,ar7);
    puStack_150 = (undefined1 *)((int)aiStack_14c + DAT_8c091008);
    (*(code *)PTR_FUN_8c091010)(ar4 + DAT_8c090f98,(int)&puStack_150 + DAT_8c09100c,a6,ar7);
    puStack_150 = (undefined1 *)((int)aiStack_14c + DAT_8c091014);
    a5 = ar4 + DAT_8c090f80;
    (*(code *)PTR_Vec3_add_8c09101c)((int)&puStack_150 + DAT_8c091018,a5,a6,ar7);
    (*(code *)PTR_Vec3_ctor_xyz_8c091024)((int)aiStack_14c + DAT_8c091020,a5,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c091004)(auStack_d8,a5,a6,ar7);
    puStack_150 = auStack_e8;
    (*(code *)PTR_FUN_8c091010)((int)&puStack_150 + _DAT_8c09102c,auStack_d8,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c091030,*(undefined4 *)(ar4 + DAT_8c090fd0));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c090fd0);
      dVar4 = (double)CONCAT44(_DAT_8c091034,DAT_8c091030);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    uVar1 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_114 = CONCAT44(uStack_114._4_4_,fVar3);
      uVar1 = uStack_114;
    }
    uStack_114 = uVar1;
    puStack_150 = auStack_f8;
    (*(code *)PTR_Vec3_scale_8c090f94)(auStack_e8,&uStack_114,a6,ar7);
    puStack_150 = auStack_108;
    (*(code *)PTR_Vec3_sub_8c091038)((int)&puStack_150 + _DAT_8c091034,auStack_f8,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c090f84)((int)aiStack_14c + DAT_8c09103c,auStack_108,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c090f9c)(auStack_108,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c090f9c)(auStack_f8,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c090f9c)(auStack_e8,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c091040)(auStack_d8,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c090f9c)((int)aiStack_14c + DAT_8c091020,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c090f9c)((int)aiStack_14c + DAT_8c091014,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c090f9c)((int)aiStack_14c + DAT_8c091008,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c091040)((int)aiStack_14c + DAT_8c091000,0xffffffff,a6,ar7);
    a6 = (int)aiStack_14c + DAT_8c09103c;
    ar5 = aiStack_14c[0];
    iStack_128 = (*(code *)PTR_FUN_8c091044)(ar4,aiStack_14c[0],a6,ar6);
    ar7 = ar6;
    if (iStack_128 == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar3;
      }
      *(int *)(DAT_8c090ffc + ar4) = *(int *)(DAT_8c090ffc + ar4) + 1;
      aiStack_14c[3] = ar4;
    }
    break;
  case 2:
    iStack_12c = (*(code *)PTR_FUN_8c091090)(ar4,ar6,a6,ar7);
    ar5 = ar6;
    if (iStack_12c == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c091094) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c091094) = (ulonglong)in_fr1;
      }
      *(int *)(DAT_8c091098 + ar4) = *(int *)(DAT_8c091098 + ar4) + 1;
      *(undefined4 *)(DAT_8c09109c + ar4) = 1;
      *(undefined4 *)(DAT_8c0910a0 + ar4) = 1;
      aiStack_14c[2] = ar4;
    }
    break;
  case 3:
    ar5 = *(int *)(DAT_8c0910b8 + ar4);
    (*(code *)PTR_FUN_8c0910bc)(ar4,ar5,ar6,ar7);
    a6 = ar6;
    break;
  case 4:
    ar5 = *(int *)(DAT_8c0910ec + ar4);
    iStack_130 = (*(code *)PTR_FUN_8c0910f0)(ar4,ar5,ar6,ar7);
    a6 = ar6;
    if (iStack_130 == 0) {
      *(int *)(DAT_8c0910f4 + ar4) = *(int *)(DAT_8c0910f4 + ar4) + 1;
      aiStack_14c[1] = ar4;
    }
    break;
  case 5:
    uVar2 = 0;
    break;
  case 6:
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0911bc)(ar4 + DAT_8c0911b8,ar5,a6,ar7);
    uVar2 = 0;
  }
  if (((-1 < *(int *)(DAT_8c0911c0 + ar4)) && (-1 < *(int *)(DAT_8c0911c4 + ar4))) &&
     ((iStack_134 = (*(code *)PTR_FUN_8c0911c8)(*(undefined4 *)(DAT_8c0911c0 + ar4),ar5,a6,ar7),
      iStack_134 == 0 || (iStack_138 = (*(code *)PTR_FUN_8c0911cc)(ar4,a4,a6,ar7), iStack_138 == 1))
     )) {
    (*(code *)PTR_FUN_8c0911d0)
              (*(undefined4 *)(DAT_8c0911c0 + ar4),*(undefined4 *)(DAT_8c0911c4 + ar4),a6,ar7);
    uVar2 = 0;
    *(undefined4 *)(DAT_8c0911d4 + ar4) = 0;
    *(undefined4 *)(DAT_8c0911c0 + ar4) = 0xffffffff;
    *(undefined4 *)(DAT_8c0911c4 + ar4) = 0xffffffff;
    *(undefined4 *)(DAT_8c0911d8 + ar4) = 0;
    *(undefined4 *)(DAT_8c0911dc + ar4) = 0;
  }
  uStack_114._4_4_ = uVar2;
  (*(code *)PTR_Vec3_dtor_8c0911e4)((int)aiStack_14c + DAT_8c0911e0,0xffffffff,a6,ar7);
  (*(code *)PTR_FUN_8c0911ec)((int)aiStack_14c + DAT_8c0911e8,0xffffffff,a6,ar7);
  return uStack_114._4_4_;
}



/* FUN_8c0911f0 @ 8c0911f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0912de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0911f0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a5_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  int a5_01;
  float in_fr1;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [32];
  
  iVar1 = ar6;
  uStack_b8 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0914d4)((int)&uStack_b8 + DAT_8c0914d0,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0914d8)(auStack_3c,ar5,iVar1,ar7);
  iStack_a8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0914dc)(uStack_b8,3,iVar1,ar7);
  a5_01 = iStack_a8 + 0x11;
  uVar2 = 10;
  iStack_90 = (*(code *)PTR_FUN_8c0914e4)(ar4 + DAT_8c0914e0,10,iVar1,ar7);
  if ((iStack_90 == 1) || (iStack_90 == 2)) {
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0914f0)(ar4 + DAT_8c0914e0,uVar2,iVar1,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(float *)(ar4 + DAT_8c0914f4);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0914f4);
    }
    if (in_FPSCR_PR == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0914f4) = in_fr1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0914f4) = in_xd0;
    }
    iStack_ac = ar4;
    uStack_94 = (*(code *)PTR_FUN_8c0914f8)(ar4 + DAT_8c0914e0,a5_01,iVar1,ar7);
    uVar2 = (*(code *)PTR_deref_u32_8c0914fc)(uStack_94,a5_01,iVar1,ar7);
    uStack_98 = uVar2;
    a5 = (*(code *)PTR_FUN_8c091500)(ar4 + DAT_8c0914e0,uVar2,0,ar7);
    a6 = 0;
    uStack_9c = a5;
    a5_00 = (*(code *)PTR_FUN_8c091504)(ar4 + DAT_8c0914e0,uVar2,0,ar7);
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c0914f4);
      fVar3 = DAT_8c091508;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0914f4);
      fVar4 = DAT_8c091508;
      fVar3 = DAT_8c09150c;
    }
    uStack_a0 = a5_00;
    if (fVar4 == fVar3) {
      *(int *)((int)DAT_8c09150c + ar4) = *(int *)((int)DAT_8c09150c + ar4) + 1;
      iStack_b0 = ar4;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091514)(ar4 + DAT_8c0914e0,uVar2,a6,ar7);
      ar7 = 0;
      a6 = 0xffffffff;
      uVar2 = 0;
      iVar1 = ar4 + DAT_8c0914e0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c09151c)(iVar1,0,0xffffffff,0);
      uStack_a4 = (*(code *)PTR_rand_8c091520)(iVar1,uVar2,a6,ar7);
      iStack_b4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0914dc)(uStack_a4,DAT_8c091524,a6,ar7)
      ;
      *(int *)(DAT_8c091528 + ar4) = iStack_b4 + DAT_8c09152c;
    }
    (*(code *)PTR_FUN_8c091530)(ar4 + DAT_8c0914e0,a5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c091538)(ar4 + DAT_8c091534,auStack_4c,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0914ec)(auStack_4c,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c091540)(ar4 + DAT_8c091534,ar4 + DAT_8c09153c,a6,ar7);
    (*(code *)PTR_FUN_8c091548)(ar4 + DAT_8c091534,ar4 + DAT_8c091544,a6,ar7);
    (*(code *)PTR_FUN_8c091530)(ar4 + DAT_8c0914e0,a5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c091538)(ar4 + DAT_8c09153c,auStack_5c,a6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0914ec)(auStack_5c,0xffffffff,a6,ar7);
    fVar3 = DAT_8c091558;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = fVar4;
    }
    (*(code *)PTR_Vec3_set_xyz_8c091560)(auStack_68,uVar2,a6,ar7);
    (*(code *)PTR_FUN_8c091564)(ar4 + DAT_8c091534,auStack_68,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c091538)(ar4 + DAT_8c091534,auStack_78,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0914ec)(auStack_78,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0914e8)(auStack_68,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c091568)(ar4 + DAT_8c0914e0,a5_00,a6,ar7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c09156c)(ar6,auStack_84,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0914e8)(auStack_84,0xffffffff,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *(float *)(ar6 + 4);
    }
    else {
      in_xd0 = *(undefined8 *)(ar6 + 4);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c091550),fVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + DAT_8c091550);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c091554),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + DAT_8c091554);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c091558,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c09155c,DAT_8c091558);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar6 + 4) = fVar4;
    }
    else {
      *(undefined8 *)(ar6 + 4) = in_xd0;
    }
    uStack_8c = 1;
    (*(code *)PTR_object_dtor_delete_8c0914e8)(auStack_3c,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0914ec)((int)&uStack_b8 + DAT_8c0914d0,0xffffffff,a6,ar7);
    uStack_88 = uStack_8c;
  }
  else {
    uStack_88 = 1;
    (*(code *)PTR_object_dtor_delete_8c0914e8)(auStack_3c,0xffffffff,iVar1,ar7);
    (*(code *)PTR_Vec3_dtor_8c0914ec)((int)&uStack_b8 + DAT_8c0914d0,0xffffffff,iVar1,ar7);
  }
  return uStack_88;
}



/* FUN_8c091570 @ 8c091570 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c091570(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 a5;
  int a6;
  undefined4 a6_00;
  float in_fr1;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  undefined8 in_xd0;
  bool bVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  uVar4 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0917d4)(auStack_30,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0917d8)(auStack_3c,uVar4,a6,ar7);
  uVar4 = 3;
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0917dc)(ar5,3,a6,ar7);
  iVar2 = iVar2 + 0x11;
  (*(code *)PTR_FUN_8c0917ec)(ar4 + DAT_8c0917e8,uVar4,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + DAT_8c0917f0);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0917f0);
  }
  if (in_FPSCR_PR == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0917f0) = in_fr1;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0917f0) = in_xd0;
  }
  uVar4 = (*(code *)PTR_FUN_8c0917f4)(ar4 + DAT_8c0917e8,iVar2,a6,ar7);
  uVar4 = (*(code *)PTR_deref_u32_8c0917f8)(uVar4,iVar2,a6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c0917fc)(ar4 + DAT_8c0917e8,uVar4,0,ar7);
  a6_00 = 0;
  uVar4 = (*(code *)PTR_FUN_8c091800)(ar4 + DAT_8c0917e8,uVar4,0,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + DAT_8c0917f0);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0917f0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)*(int *)(DAT_8c091804 + ar4),in_fr1);
  }
  else {
    dVar7 = (double)*(int *)(DAT_8c091804 + ar4);
  }
  bVar1 = in_FPSCR_PR == '\0';
  bVar8 = SUB84(dVar7,0) < (float)((ulonglong)dVar7 >> 0x20);
  if (!bVar1 || !bVar8) {
    *(undefined4 *)(DAT_8c091808 + ar4) = 0;
  }
  (*(code *)PTR_FUN_8c09180c)(ar4 + DAT_8c0917e8,uVar3,a6_00,ar7);
  uVar5 = SUB84(dVar7,0);
  (*(code *)PTR_Vec3_assign_8c091814)(ar4 + DAT_8c091810,auStack_4c,a6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c091818)(auStack_4c,0xffffffff,a6_00,ar7);
  (*(code *)PTR_FUN_8c091820)(ar4 + DAT_8c091810,ar4 + DAT_8c09181c,a6_00,ar7);
  (*(code *)PTR_FUN_8c091828)(ar4 + DAT_8c091810,ar4 + DAT_8c091824,a6_00,ar7);
  (*(code *)PTR_FUN_8c09180c)(ar4 + DAT_8c0917e8,uVar3,a6_00,ar7);
  (*(code *)PTR_Vec3_assign_8c091814)(ar4 + DAT_8c09181c,auStack_5c,a6_00,ar7);
  a5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c091818)(auStack_5c,0xffffffff,a6_00,ar7);
  uVar3 = DAT_8c091838;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = uVar5;
  }
  (*(code *)PTR_Vec3_set_xyz_8c091840)(auStack_68,a5,a6_00,ar7);
  (*(code *)PTR_FUN_8c091844)(ar4 + DAT_8c091810,auStack_68,a6_00,ar7);
  (*(code *)PTR_Vec3_assign_8c091814)(ar4 + DAT_8c091810,auStack_78,a6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c091818)(auStack_78,0xffffffff,a6_00,ar7);
  (*(code *)PTR_object_dtor_delete_8c091848)(auStack_68,0xffffffff,a6_00,ar7);
  (*(code *)PTR_FUN_8c09184c)(ar4 + DAT_8c0917e8,uVar4,a6_00,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c091850)(ar6,auStack_84,a6_00,ar7);
  (*(code *)PTR_object_dtor_delete_8c091848)(auStack_84,0xffffffff,a6_00,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar3 = *(undefined4 *)(ar6 + 4);
  }
  else {
    in_xd0 = *(undefined8 *)(ar6 + 4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c091830),uVar3);
  }
  else {
    dVar7 = *(double *)(ar4 + DAT_8c091830);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c091834),fVar6);
  }
  else {
    dVar7 = *(double *)(ar4 + DAT_8c091834);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c091838,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c09183c,DAT_8c091838);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar6 + 4) = fVar6;
  }
  else {
    *(undefined8 *)(ar6 + 4) = in_xd0;
  }
  (*(code *)PTR_object_dtor_delete_8c091848)(auStack_3c,0xffffffff,a6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c091818)(auStack_30,0xffffffff,a6_00,ar7);
  return (uint)(bVar1 && bVar8);
}



/* FUN_8c091854 @ 8c091854 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c091854(undefined4 ar4,int *ar5,undefined **ar6,undefined1 *ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined1 *a5;
  int iVar3;
  int a6;
  undefined *puVar4;
  undefined *puVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [4];
  undefined *puStack_24;
  undefined1 auStack_20 [12];
  
  iVar3 = 0;
  a6 = 0;
  (*(code *)PTR_Vec3_ctor_zero_8c091908)(auStack_28,ar5,ar6,ar7);
  iVar1 = (**(code **)(DAT_8c09190c + *ar5))(ar5,10,ar6,ar7);
  while ((a6 < iVar1 && (iVar3 == 0))) {
    a4 = (**(code **)(DAT_8c091910 + *ar5))(ar5,10,a6,ar7);
    ar7 = auStack_20;
    ar6 = &puStack_24;
    a5 = auStack_28;
    (*(code *)PTR_FUN_8c091914)(a4,a5,ar6,ar7);
    uVar2 = (**(code **)(DAT_8c091918 + *(int *)(a4 + 8)))(a4,a5,ar6,ar7);
    if ((short)uVar2 == 2) {
      puVar4 = DAT_8c09191c;
      puVar5 = PTR_Vec3_dtor_8c091920;
      if (in_FPSCR_SZ == '\0') {
        puVar4 = puStack_24;
        puVar5 = DAT_8c09191c;
      }
      if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar4) {
        iVar3 = 1;
      }
    }
    a6 = a6 + 1;
  }
  (*(code *)PTR_Vec3_dtor_8c091920)(auStack_28,0xffffffff,ar6,ar7);
  return iVar3;
}



/* FUN_8c091924 @ 8c091924 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c091924(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 a7;
  undefined4 uVar4;
  float fVar5;
  float fVar8;
  double dVar6;
  ulonglong uVar7;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [4];
  float fStack_1c;
  undefined4 uStack_18;
  
  uVar4 = 1;
  uVar2 = ar5;
  uVar3 = ar6;
  (*(code *)PTR_Vec3_set_zero_8c091964)(auStack_20,ar5,ar6,ar7);
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    (*(code *)PTR_FUN_8c091a8c)(ar4 + 0x14,uVar2,uVar3,ar7);
    (*(code *)PTR_Vec3_assign_8c091a90)(ar4 + 0x14,auStack_30,uVar3,ar7);
    (*(code *)PTR_Vec3_dtor_8c091a94)(auStack_30,0xffffffff,uVar3,ar7);
    (*(code *)PTR_FUN_8c091a9c)(ar4,DAT_8c091a98,uVar3,ar7);
    uVar2 = ar5;
    uVar3 = ar6;
    (*(code *)PTR_FUN_8c091aa4)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = DAT_8c091aa8;
      *(undefined4 *)(ar4 + 0x24) = DAT_8c091aa8;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = CONCAT44(DAT_8c091aac,DAT_8c091aa8);
      *(ulonglong *)(ar4 + 0x24) = CONCAT44(DAT_8c091aac,DAT_8c091aa8);
    }
    iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c091ab0)(ar4 + DAT_8c091aac,uVar2,uVar3,ar7);
    if (iVar1 != 0) {
      a7 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091ab4)(ar4 + DAT_8c091aac,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091ab8)(ar4 + DAT_8c091aac,uVar2,uVar3,a7);
    }
    ar7 = ar4 + 0x14;
    (*(code *)PTR_FUN_8c091abc)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c091ac0)(auStack_20,auStack_3c,ar6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c091ac4)(auStack_3c,0xffffffff,ar6,ar7);
    fVar5 = fStack_1c;
    fVar8 = DAT_8c091ac8;
    if (in_FPSCR_SZ != '\0') {
      in_xd0 = CONCAT44(uStack_18,fStack_1c);
      fVar5 = DAT_8c091ac8;
      fVar8 = DAT_8c091acc;
    }
    if (in_FPSCR_PR != '\0' || fVar8 <= fVar5) {
LAB_8c091a60:
      fVar5 = DAT_8c091ac8;
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = CONCAT44(uStack_18,fStack_1c);
        fStack_1c = DAT_8c091ac8;
        fVar5 = DAT_8c091acc;
      }
      if (in_FPSCR_PR == '\0' && fStack_1c < fVar5) {
        *(undefined4 *)(DAT_8c091b60 + ar4) = 2;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 9;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091b6c)
                  (ar4 + DAT_8c091b64._4_4_,9,0xffffffff,0);
      }
      else {
        *(undefined4 *)((int)DAT_8c091ad0 + ar4) = 1;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 8;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091ab4)(ar4 + DAT_8c091aac,8,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091b70)(ar4 + DAT_8c091b64._4_4_,uVar2,ar6,ar7);
    }
    else {
      fVar5 = fStack_1c;
      fVar8 = DAT_8c091acc;
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = CONCAT44(uStack_18,fStack_1c);
        fVar5 = DAT_8c091acc;
        fVar8 = DAT_8c091ad0;
      }
      if (in_FPSCR_PR != '\0' || fVar5 <= fVar8) goto LAB_8c091a60;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar3 = ar6;
  case 1:
    if (*(int *)(DAT_8c091b60 + ar4) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c091b78,*(undefined4 *)(ar4 + DAT_8c091b74));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c091b74);
        dVar6 = (double)CONCAT44(DAT_8c091b7c,DAT_8c091b78);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c091b74) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c091b74) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar7 = CONCAT44(DAT_8c091b7c,*(undefined4 *)(ar4 + DAT_8c091b74));
      }
      else {
        uVar7 = CONCAT44(_DAT_8c091b80,DAT_8c091b7c);
      }
      if (in_FPSCR_PR != '\0' || (float)uVar7 <= (float)(uVar7 >> 0x20)) {
        (*(code *)PTR_FUN_8c091b88)(ar4 + DAT_8c091b64._4_4_,uVar2,uVar3,ar7);
        if (*(int *)(DAT_8c091b60 + ar4) == 1) {
          (*(code *)PTR_Vec3_set_xyz_8c091be4)(auStack_48,uVar2,uVar3,ar7);
          (*(code *)PTR_FUN_8c091be8)(ar4 + 0x14,auStack_48,uVar3,ar7);
          (*(code *)PTR_Vec3_assign_8c091bec)(ar4 + 0x14,auStack_58,uVar3,ar7);
          (*(code *)PTR_Vec3_dtor_8c091bf0)(auStack_58,0xffffffff,uVar3,ar7);
          (*(code *)PTR_object_dtor_delete_8c091bf4)(auStack_48,0xffffffff,uVar3,ar7);
        }
        else if (*(int *)(DAT_8c091b60 + ar4) == 2) {
          (*(code *)PTR_Vec3_set_xyz_8c091c50)(auStack_64,uVar2,uVar3,ar7);
          (*(code *)PTR_FUN_8c091c54)(ar4 + 0x14,auStack_64,uVar3,ar7);
          (*(code *)PTR_Vec3_assign_8c091c58)(ar4 + 0x14,auStack_74,uVar3,ar7);
          (*(code *)PTR_Vec3_dtor_8c091c5c)(auStack_74,0xffffffff,uVar3,ar7);
          (*(code *)PTR_object_dtor_delete_8c091c60)(auStack_64,0xffffffff,uVar3,ar7);
        }
      }
      else {
        iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c091cc0)
                          (ar4 + DAT_8c091cbc,uVar2,uVar3,ar7);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 3;
          *(undefined4 *)(DAT_8c091cc4 + ar4) = 0;
          *(undefined4 *)(ar4 + 0x40) = 3;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c091cc8) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c091cc8) = uVar7 & 0xffffffff;
          }
          ar7 = 0;
          uVar3 = 0xffffffff;
          uVar2 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091cd0)(ar4 + DAT_8c091cbc,0,0xffffffff,0)
          ;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091cd4)(ar4 + DAT_8c091cbc,uVar2,uVar3,ar7);
        }
      }
    }
    break;
  case 3:
    (*(code *)PTR_FUN_8c091d34)(ar4 + DAT_8c091d30,uVar2,uVar3,ar7);
    uVar4 = (*(code *)PTR_FUN_8c091d38)(ar4,ar6,ar5,ar7);
    uVar3 = ar5;
  }
  (*(code *)PTR_object_dtor_delete_8c091d3c)(auStack_20,0xffffffff,uVar3,ar7);
  return uVar4;
}



/* FUN_8c091d40 @ 8c091d40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c091d40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(DAT_8c091e38 + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c091e40)(ar4 + DAT_8c091e3c,ar5,ar6,ar7);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 5;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091e4c)(ar4 + DAT_8c091e44._4_4_,5,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091e50)(ar4 + DAT_8c091e44._4_4_,uVar2,uVar3,uVar4);
    *(int *)(DAT_8c091e38 + ar4) = *(int *)(DAT_8c091e38 + ar4) + 1;
  }
  else if (iVar1 != 1) {
    uVar2 = ar5;
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      return 0;
    }
    goto LAB_8c091dca;
  }
  *(int *)(DAT_8c091e38 + ar4) = *(int *)(DAT_8c091e38 + ar4) + 1;
  uVar2 = 0x21;
  ar7 = ar6;
  (*(code *)PTR_FUN_8c091e54)(ar4,0x21,ar5,ar6);
  ar6 = ar5;
LAB_8c091dca:
  iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c091e58)
                    (ar4 + DAT_8c091e44._4_4_,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c091e5c)(ar4 + DAT_8c091e3c,uVar2,ar6,ar7);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091e4c)(ar4 + DAT_8c091e44._4_4_,0,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091e50)(ar4 + DAT_8c091e44._4_4_,uVar2,uVar3,uVar4);
    *(int *)(DAT_8c091e38 + ar4) = *(int *)(DAT_8c091e38 + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}



/* FUN_8c091e60 @ 8c091e60 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0926fe) */
/* WARNING: Removing unreachable block (ram,0x8c09261e) */
/* WARNING: Removing unreachable block (ram,0x8c092816) */
/* WARNING: Removing unreachable block (ram,0x8c0920e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c091e60(ulonglong *ar4,ulonglong *ar5,int *ar6,ulonglong *ar7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *a5;
  ulonglong *a5_00;
  int *a6;
  ulonglong *a7;
  uint uVar3;
  float fVar4;
  ulonglong in_dr0;
  int iVar9;
  float fVar10;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_154;
  ulonglong *apuStack_150 [4];
  ulonglong *puStack_140;
  ulonglong *puStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [204];
  
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c091eb0)((int)apuStack_150 + DAT_8c091eac,ar5,ar6,ar7);
  uVar3 = (uint)in_dr0;
  uStack_100 = 1;
  a5_00 = ar4 + 0xd;
  switch((int)*a5_00) {
  case 0:
    while( true ) {
      uVar3 = (uint)in_dr0;
      uVar2 = DAT_8c091f70;
      (*(code *)PTR_FUN_8c091f74)(ar4,DAT_8c091f70,a6,a7);
      (*(code *)PTR_FUN_8c091f78)(ar4,uVar2,a6,a7);
      a7 = (ulonglong *)0x0;
      a6 = (int *)0xffffffff;
      uVar2 = 1;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091f84)
                ((int)ar4 + DAT_8c091f7c._4_4_,1,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091f88)((int)ar4 + DAT_8c091f7c._4_4_,uVar2,a6,a7)
      ;
      uVar5 = (ulonglong)uVar3;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c091f8c) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c091f8c) = uVar5;
      }
      (*(code *)PTR_Vec3_assign_8c091f94)((int)ar4 + DAT_8c091f90,(int *)((int)ar4 + 0x14),a6,a7);
      uVar5 = uVar5 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c091f98) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c091f98) = uVar5;
      }
      (*(code *)PTR_Vec3_assign_8c091f94)((int *)((int)ar4 + 0x54),ar5,a6,a7);
      a5_00 = ar5;
      (**(code **)(DAT_8c091f9c + (int)*ar7))(ar7,ar5,a6,a7);
      iVar9 = (int)(uVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0xb) = iVar9;
        dVar7 = (double)CONCAT44(DAT_8c091fa0,*(int *)((int)ar4 + 0x54));
        iStack_120 = iVar9;
      }
      else {
        iStack_120 = (int)uVar5;
        ar4[0xb] = uVar5;
        in_xd0 = *(undefined8 *)((int)ar4 + 0x54);
        dVar7 = (double)CONCAT44(uRam8c091fa4,DAT_8c091fa0);
        iStack_11c = iVar9;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + 0x54) = fVar4;
      }
      else {
        *(undefined8 *)((int)ar4 + 0x54) = in_xd0;
      }
      puStack_13c = ar4;
      if (ar6 != (int *)0x0) {
        if (ar6 == (int *)0x3) {
          if (in_FPSCR_SZ == '\0') {
            uVar5 = CONCAT44(DAT_8c092040,fVar4);
            *(undefined4 *)((int)ar4 + DAT_8c09203c) = DAT_8c092040;
          }
          else {
            uVar5 = CONCAT44(DAT_8c092044,DAT_8c092040);
            *(ulonglong *)((int)ar4 + DAT_8c09203c) = uVar5;
          }
          a5_00 = ar4 + 5;
          if (in_FPSCR_SZ == '\0') {
            *(int *)a5_00 = 0;
          }
          else {
            *a5_00 = uVar5 & 0xffffffff;
          }
          *(int *)(ar4 + 0xd) = (int)ar4[0xd] + 1;
          puStack_140 = ar4;
        }
        goto switchD_8c091ea8_caseD_1;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c091fc8,fVar4);
        *(undefined4 *)((int)ar4 + DAT_8c091fc4) = DAT_8c091fc8;
      }
      else {
        in_dr0 = CONCAT44(uRam8c091fcc,DAT_8c091fc8);
        *(ulonglong *)((int)ar4 + DAT_8c091fc4) = in_dr0;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 5) = 0;
      }
      else {
        ar4[5] = in_dr0;
      }
      a5_00 = (ulonglong *)0x2;
      *(int *)(ar4 + 0xd) = 2;
switchD_8c091ea8_caseD_2:
      iStack_12c = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0922cc)
                             ((int)ar4 + DAT_8c0922c4._4_4_,a5_00,a6,a7);
      if (iStack_12c == 1) {
        iStack_130 = (*(code *)PTR_rand_range_8c0922d0)(ar4,0,100,a7);
        if (iStack_130 < 0x32) {
          a7 = (ulonglong *)0x0;
          a6 = (int *)0xffffffff;
          a5_00 = (ulonglong *)0x1;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0922d8)
                    ((int)ar4 + DAT_8c0922c4._4_4_,1,0xffffffff,0);
        }
        else {
          a7 = (ulonglong *)0x0;
          a6 = (int *)0xffffffff;
          a5_00 = (ulonglong *)0x7;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c092330)
                    ((int)ar4 + DAT_8c092328._4_4_,7,0xffffffff,0);
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c092334)
                  ((int)ar4 + DAT_8c092328._4_4_,a5_00,a6,a7);
      }
      fVar4 = (float)in_dr0;
      if (ar6 != (int *)0x3) break;
      *(int *)(ar4 + 0xd) = 0;
      *(undefined4 *)(DAT_8c092338 + (int)ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = in_dr0 & 0xffffffff;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c09233c) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c09233c) = in_dr0;
      }
    }
    (*(code *)PTR_Vec3_set_xyz_8c092454)((int)apuStack_150 + DAT_8c09244c._4_4_,a5_00,a6,a7);
    puStack_154 = (undefined1 *)((int)apuStack_150 + DAT_8c09244c._4_4_);
    a7 = (ulonglong *)((int)ar4 + 0x14);
    a6 = (int *)((int)ar4 + 0x54);
    (*(code *)PTR_FUN_8c09245c)(ar4,ar5,a6,a7);
    (*(code *)PTR_Vec3_assign_8c092464)
              ((int *)((int)ar4 + 0x14),(int)apuStack_150 + DAT_8c092460,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c092468)((int)apuStack_150 + DAT_8c092460,0xffffffff,a6,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c09246c)
              ((int)apuStack_150 + DAT_8c09244c._4_4_,0xffffffff,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)((int)ar4 + DAT_8c092470);
    }
    else {
      in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c092470);
    }
    if (in_FPSCR_PR != '\0' || fVar4 <= 1.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c092474,*(undefined4 *)((int)ar4 + DAT_8c092470));
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c092470);
        dVar7 = (double)CONCAT44(DAT_8c092478,DAT_8c092474);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar7,0);
      }
      apuStack_150[2] = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + DAT_8c092470) = fVar4;
      }
      else {
        *(undefined8 *)((int)ar4 + DAT_8c092470) = in_xd0;
      }
    }
    (*(code *)PTR_Vec3_set_xyz_8c092454)((int)apuStack_150 + DAT_8c092478,uVar2,a6,a7);
    puStack_154 = (undefined1 *)((int)apuStack_150 + DAT_8c09247c);
    (*(code *)PTR_FUN_8c092484)((int *)((int)ar4 + 0x14),(int)&puStack_154 + DAT_8c092480,a6,a7);
    (*(code *)PTR_Vec3_assign_8c092464)
              ((int *)((int)ar4 + 0x14),(int)apuStack_150 + DAT_8c09247c,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c092468)((int)apuStack_150 + DAT_8c09247c,0xffffffff,a6,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c09246c)((int)apuStack_150 + DAT_8c092478,0xffffffff,a6,a7);
    if ((ar6 != (int *)0x1) && (ar6 != (int *)0x2)) {
      (*(code *)PTR_FUN_8c0924ac)(ar4,uVar2,a6,a7);
      break;
    }
    *(int *)(ar4 + 0xd) = 4;
    *(undefined4 *)(DAT_8c092488 + (int)ar4) = 0;
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c09248c) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + DAT_8c09248c) = uVar5;
    }
    a5_00 = (ulonglong *)((int)ar4 + 0x14);
    (*(code *)PTR_Vec3_assign_8c092464)((int)ar4 + DAT_8c092490,a5_00,a6,a7);
    uVar3 = (uint)uVar5;
    *(undefined4 *)(DAT_8c092494 + (int)ar4) = 0;
  case 4:
    uVar5 = (ulonglong)uVar3;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c0926d8) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + DAT_8c0926d8) = uVar5;
    }
    (*(code *)PTR_FUN_8c0926dc)(ar4,a5_00,a6,a7);
    uVar6 = uVar5 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)0x1) || (ar6 == (int *)0x2)) {
      a6 = DAT_8c092854;
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c092858)
                ((int)ar4 + (int)DAT_8c092854,(int)ar4 + (int)DAT_8c092854,DAT_8c092854,a7);
      fVar4 = (float)uVar6;
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)(ar4 + 3);
      }
      else {
        in_xd0 = ar4[3];
      }
      uVar5 = (ulonglong)(uint)fVar4;
      if (fVar4 != 0.0) {
        piVar1 = (int *)((int)ar4 + 0x14);
        (*(code *)PTR_Vec3_assign_8c092860)((int)apuStack_150 + DAT_8c09285c,piVar1,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)apuStack_150 + DAT_8c092864) = 0;
        }
        else {
          *(ulonglong *)((int)apuStack_150 + DAT_8c092864) = uVar5 & 0xffffffff;
        }
        uStack_138 = (*(code *)PTR_Vec3_length_8c092868)
                               ((int)apuStack_150 + DAT_8c09285c,piVar1,a6,a7);
        (*(code *)PTR_Vec3_assign_8c092860)((int)apuStack_150 + DAT_8c09285c,uStack_138,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c092870,*(undefined4 *)((int)ar4 + DAT_8c09286c));
        }
        else {
          in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c09286c);
          dVar7 = (double)CONCAT44(_DAT_8c092874,DAT_8c092870);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar4 + DAT_8c09286c) = fVar4;
        }
        else {
          *(undefined8 *)((int)ar4 + DAT_8c09286c) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar4 = *(float *)((int)ar4 + DAT_8c09286c);
        }
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar4) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + DAT_8c09286c) = 0x3f800000;
          }
          else {
            *(undefined8 *)((int)ar4 + DAT_8c09286c) = CONCAT44(0x3f800000,fVar4);
          }
        }
        if (in_FPSCR_SZ == '\0') {
          fVar4 = *(float *)((int)ar4 + DAT_8c09286c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar7 = (double)CONCAT44(1.0 - fVar4,fVar4);
        }
        else {
          dVar7 = (double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4);
        }
        uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
        uStack_118 = uVar2;
        if (in_FPSCR_SZ != '\0') {
          uStack_118 = SUB84(dVar7,0);
          uStack_114 = uVar2;
        }
        puStack_154 = auStack_dc;
        apuStack_150[0] = ar4;
        (*(code *)PTR_Vec3_scale_8c092878)((int)ar4 + _DAT_8c092874,&uStack_118,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          iStack_11c = *(int *)((int)ar4 + DAT_8c09286c);
          uVar8 = CONCAT44(iStack_11c,SUB84(dVar7,0));
        }
        else {
          uVar8 = *(undefined8 *)((int)ar4 + DAT_8c09286c);
          iStack_11c = (int)uVar8;
          uStack_118 = (undefined4)((ulonglong)uVar8 >> 0x20);
        }
        fVar4 = (float)uVar8;
        puStack_154 = auStack_ec;
        (*(code *)PTR_Vec3_scale_8c092878)((int)&puStack_154 + DAT_8c092864,&iStack_11c,a6,a7);
        puStack_154 = auStack_fc;
        (*(code *)PTR_Vec3_add_8c09287c)(auStack_dc,auStack_ec,a6,a7);
        (*(code *)PTR_Vec3_assign_8c092860)((int *)((int)ar4 + 0x14),auStack_fc,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c092880)(auStack_fc,0xffffffff,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c092880)(auStack_ec,0xffffffff,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c092880)(auStack_dc,0xffffffff,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          fVar4 = *(float *)((int)ar4 + DAT_8c09286c);
        }
        if (fVar4 == 1.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + DAT_8c09286c) = 0;
          }
          else {
            *(ulonglong *)((int)ar4 + DAT_8c09286c) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      a6 = (int *)0x0;
      *(int *)(ar4 + 0xd) = 0;
      *(undefined4 *)(DAT_8c0926e0 + (int)ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar5 & 0xffffffff;
      }
      a7 = (ulonglong *)((int)ar4 + DAT_8c0926e4);
      if (in_FPSCR_SZ == '\0') {
        *(int *)a7 = 0;
      }
      else {
        *a7 = uVar5 & 0xffffffff;
      }
    }
    break;
  case 1:
switchD_8c091ea8_caseD_1:
    iStack_124 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c092048)
                           ((int)ar4 + DAT_8c092044,a5_00,a6,a7);
    if (iStack_124 == 1) {
      iStack_128 = (*(code *)PTR_rand_range_8c09204c)(ar4,0,100,a7);
      if (iStack_128 < 0x32) {
        a7 = (ulonglong *)0x0;
        a6 = (int *)0xffffffff;
        a5_00 = (ulonglong *)0x1;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c092054)
                  ((int)ar4 + DAT_8c092044,1,0xffffffff,0);
      }
      else {
        a7 = (ulonglong *)0x0;
        a6 = (int *)0xffffffff;
        a5_00 = (ulonglong *)0x7;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c09209c)
                  ((int)ar4 + DAT_8c092094._4_4_,7,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0920a0)((int)ar4 + DAT_8c092094._4_4_,a5_00,a6,a7)
      ;
    }
    if (ar6 == (int *)0x0) {
      (*(code *)PTR_FUN_8c0920a4)(ar4,a5_00,a6,a7);
      *(int *)(ar4 + 0xd) = 0;
      break;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c092214,*(undefined4 *)((int)ar4 + DAT_8c092210));
    }
    else {
      in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c092210);
      dVar7 = (double)CONCAT44(DAT_8c092218,DAT_8c092214);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar4 + DAT_8c092210) = fVar4;
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c092210) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)((int)ar4 + DAT_8c092210);
      fVar10 = DAT_8c092218;
    }
    else {
      in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c092210);
      fVar4 = DAT_8c092218;
      fVar10 = _DAT_8c09221c;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar4) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + DAT_8c092210) = DAT_8c092218;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c092210) = CONCAT44(_DAT_8c09221c,DAT_8c092218);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(DAT_8c092218,*(undefined4 *)((int)ar4 + DAT_8c092210));
    }
    else {
      in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c092210);
      uVar5 = CONCAT44(_DAT_8c09221c,DAT_8c092218);
    }
    apuStack_150[3] = ar4;
    if ((float)uVar5 != (float)(uVar5 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = (ulonglong)*(uint *)((int)ar4 + DAT_8c092210);
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c092210);
      }
      fVar4 = (float)uVar5;
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar4,fVar4);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4);
      }
      uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
      uStack_108 = uVar2;
      if (in_FPSCR_SZ != '\0') {
        uStack_108 = SUB84(dVar7,0);
        uStack_104 = uVar2;
      }
      puStack_154 = (undefined1 *)((int)apuStack_150 + (int)_DAT_8c09221c);
      a5 = &uStack_108;
      (*(code *)PTR_Vec3_scale_8c092224)((int)ar4 + DAT_8c092220,a5,a6,a7);
      uVar2 = SUB84(dVar7,0);
      (*(code *)PTR_Vec3_ctor_xyz_8c092230)((int)apuStack_150 + DAT_8c092228._4_4_,a5,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        uStack_10c = (undefined4)*(ulonglong *)((int)ar4 + DAT_8c092210);
        uVar5 = CONCAT44(uStack_10c,uVar2);
      }
      else {
        uVar5 = *(ulonglong *)((int)ar4 + DAT_8c092210);
        uStack_10c = (undefined4)uVar5;
        uStack_108 = (undefined4)(uVar5 >> 0x20);
      }
      puStack_154 = (undefined1 *)((int)apuStack_150 + DAT_8c092234);
      (*(code *)PTR_Vec3_scale_8c092224)((int)&puStack_154 + DAT_8c092238,&uStack_10c,a6,a7);
      puStack_154 = (undefined1 *)((int)apuStack_150 + DAT_8c09223c);
      (*(code *)PTR_Vec3_add_8c092248)
                ((int)&puStack_154 + DAT_8c092244,(int)&puStack_154 + DAT_8c092240,a6,a7);
      (*(code *)PTR_Vec3_assign_8c09224c)
                ((int *)((int)ar4 + 0x14),(int)apuStack_150 + DAT_8c09223c,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c092250)((int)apuStack_150 + DAT_8c09223c,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c092250)((int)apuStack_150 + DAT_8c092234,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c092250)((int)apuStack_150 + DAT_8c092228._4_4_,0xffffffff,a6,a7);
      a5_00 = (ulonglong *)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c092250)((int)apuStack_150 + (int)_DAT_8c09221c,0xffffffff,a6,a7);
    }
    if ((ar6 != (int *)0x1) && (ar6 != (int *)0x2)) {
      (*(code *)PTR_FUN_8c092278)(ar4,a5_00,a6,a7);
      break;
    }
    *(int *)(ar4 + 0xd) = 3;
    uVar5 = uVar5 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c092210) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + DAT_8c092210) = uVar5;
    }
    a5_00 = (ulonglong *)((int)ar4 + 0x14);
    (*(code *)PTR_Vec3_assign_8c09224c)((int)ar4 + DAT_8c092220,a5_00,a6,a7);
    uVar3 = (uint)uVar5;
    *(undefined4 *)(DAT_8c092254 + (int)ar4) = 0;
    if ((ar6 == (int *)0x1) && (*(char *)((int)apuStack_150 + DAT_8c092258) == '\x01')) {
      a7 = (ulonglong *)0xa;
      a6 = (int *)0x1;
      (**(code **)(DAT_8c09225c._4_4_ + (int)*ar7))(ar7,ar5,1,10);
      a5_00 = ar5;
    }
  case 3:
    uVar5 = (ulonglong)uVar3;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c0924f8) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + DAT_8c0924f8) = uVar5;
    }
    (*(code *)PTR_FUN_8c0924fc)(ar4,a5_00,a6,a7);
    uVar6 = uVar5 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)0x1) || (ar6 == (int *)0x2)) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c092648)((int)ar4 + DAT_8c092644,a5_00,a6,a7);
      uVar3 = (uint)uVar6;
      piVar1 = (int *)((int)ar4 + 0x14);
      (*(code *)PTR_Vec3_assign_8c092650)((int)apuStack_150 + DAT_8c09264c,piVar1,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)apuStack_150 + DAT_8c092654) = 0;
      }
      else {
        *(ulonglong *)((int)apuStack_150 + DAT_8c092654) = (ulonglong)uVar3;
      }
      uStack_134 = (*(code *)PTR_Vec3_length_8c092658)
                             ((int)apuStack_150 + DAT_8c09264c,piVar1,a6,a7);
      (*(code *)PTR_Vec3_assign_8c092650)((int)apuStack_150 + DAT_8c09264c,uStack_134,a6,a7);
      a6 = DAT_8c09265c;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c092660,*(undefined4 *)((int)ar4 + (int)DAT_8c09265c));
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar4 + (int)DAT_8c09265c);
        dVar7 = (double)CONCAT44(_DAT_8c092664,DAT_8c092660);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + (int)DAT_8c09265c) = fVar4;
      }
      else {
        *(undefined8 *)((int)ar4 + (int)DAT_8c09265c) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)((int)ar4 + (int)DAT_8c09265c);
      }
      if (in_FPSCR_PR != '\0' || 1.0 <= fVar4) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar4 + (int)DAT_8c09265c) = 0x3f800000;
        }
        else {
          *(undefined8 *)((int)ar4 + (int)DAT_8c09265c) = CONCAT44(0x3f800000,fVar4);
        }
      }
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)((int)ar4 + (int)DAT_8c09265c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar4,fVar4);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4);
      }
      uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
      uStack_110 = uVar2;
      if (in_FPSCR_SZ != '\0') {
        uStack_110 = SUB84(dVar7,0);
        uStack_10c = uVar2;
      }
      puStack_154 = (undefined1 *)((int)apuStack_150 + _DAT_8c092664);
      a7 = ar4;
      apuStack_150[1] = ar4;
      (*(code *)PTR_Vec3_scale_8c09266c)((int)ar4 + DAT_8c092668,&uStack_110,a6,ar4);
      if (in_FPSCR_SZ == '\0') {
        uStack_114 = *(undefined4 *)((int)ar4 + (int)DAT_8c09265c);
        uVar8 = CONCAT44(uStack_114,SUB84(dVar7,0));
      }
      else {
        uVar8 = *(undefined8 *)((int)ar4 + (int)DAT_8c09265c);
        uStack_114 = (undefined4)uVar8;
        uStack_110 = (undefined4)((ulonglong)uVar8 >> 0x20);
      }
      fVar4 = (float)uVar8;
      puStack_154 = (undefined1 *)((int)apuStack_150 + DAT_8c092670);
      (*(code *)PTR_Vec3_scale_8c09266c)((int)&puStack_154 + DAT_8c092654,&uStack_114,a6,a7);
      puStack_154 = (undefined1 *)((int)apuStack_150 + DAT_8c092674);
      (*(code *)PTR_Vec3_add_8c092680)
                ((int)&puStack_154 + DAT_8c09267c,(int)&puStack_154 + DAT_8c092678,a6,a7);
      (*(code *)PTR_Vec3_assign_8c092650)
                ((int *)((int)ar4 + 0x14),(int)apuStack_150 + DAT_8c092674,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c092684)((int)apuStack_150 + DAT_8c092674,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c092684)((int)apuStack_150 + DAT_8c092670,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c092684)((int)apuStack_150 + _DAT_8c092664,0xffffffff,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)((int)ar4 + (int)DAT_8c09265c);
      }
      if (fVar4 == 1.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)ar4 + (int)DAT_8c09265c) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + (int)DAT_8c09265c) = (ulonglong)(uint)fVar4;
        }
        *(undefined4 *)(DAT_8c092688 + (int)ar4) = 1;
        a6 = (int *)0x40;
        *(int *)(ar4 + 8) = 5;
      }
    }
    else {
      *(int *)(ar4 + 0xd) = 0;
      *(undefined4 *)(DAT_8c092500 + (int)ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar5 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c092504) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c092504) = uVar5 & 0xffffffff;
      }
    }
    break;
  case 2:
    goto switchD_8c091ea8_caseD_2;
  }
  uStack_104 = 0;
  (*(code *)PTR_Vec3_dtor_8c092880)((int)apuStack_150 + DAT_8c09285c,0xffffffff,a6,a7);
  return uStack_104;
}



/* FUN_8c092884 @ 8c092884 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c092884(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *a5;
  undefined4 a7;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_80 [4];
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  a7 = ar7;
  aiStack_80[0] = ar5;
  aiStack_80[1] = ar6;
  (*(code *)PTR_Vec3_set_zero_8c0929f0)(&fStack_14,ar5,ar6,ar7);
  iVar1 = aiStack_80[0];
  (*(code *)PTR_Vec3_sub_8c0929f4)(aiStack_80[1],aiStack_80[0],ar6,a7);
  (*(code *)PTR_Vec3_normalize_8c0929f8)(auStack_34,iVar1,ar6,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c0929fc)(auStack_24,auStack_44,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c092a00)(auStack_44,0xffffffff,ar6,a7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c092a00)(auStack_34,0xffffffff,ar6,a7);
  (*(code *)PTR_FUN_8c092a04)(ar7,uVar2,ar6,a7);
  (*(code *)PTR_FUN_8c092a04)(auStack_24,uVar2,ar6,a7);
  (*(code *)PTR_FUN_8c092a08)(auStack_54,(int)&uStack_68 + 4,ar6,a7);
  uStack_10 = SUB84(in_dr0,0);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  dVar4 = in_dr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_68 = (double)CONCAT44(uStack_68._4_4_,uVar2);
    dVar4 = uStack_68;
    uStack_10 = uVar2;
    uVar2 = uStack_c;
  }
  uStack_c = uVar2;
  uStack_68 = dVar4;
  (*(code *)PTR_Vec3_dtor_8c092a00)((int)&uStack_68 + 4,0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c092a00)(auStack_54,0xffffffff,ar6,a7);
  a5 = auStack_24;
  iStack_6c = (*(code *)PTR_FUN_8c092a0c)(ar7,a5,ar6,a7);
  if (iStack_6c == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c092a10,uStack_10);
    }
    else {
      in_xd0 = CONCAT44(uStack_c,uStack_10);
      in_dr0 = (double)CONCAT44(PTR_FUN_8c092a14,DAT_8c092a10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = SUB84(in_dr0,0);
    }
    else {
      uStack_10 = (undefined4)in_xd0;
      uStack_c = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  (*(code *)PTR_FUN_8c092a14)(auStack_24,a5,ar6,a7);
  iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_70 = iVar1;
  if (in_FPSCR_SZ != '\0') {
    iStack_70 = SUB84(in_dr0,0);
    iStack_6c = iVar1;
  }
  (*(code *)PTR_FUN_8c092a14)(ar7,a5,ar6,a7);
  iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44(iVar1,iStack_70);
    aiStack_80[3] = iVar1;
  }
  else {
    aiStack_80[3] = SUB84(in_dr0,0);
    in_xd0 = CONCAT44(iStack_6c,iVar1);
    iStack_70 = iVar1;
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    fVar3 = SUB84(in_dr0 - in_dr0,0);
  }
  fStack_14 = fVar3;
  if (in_FPSCR_SZ != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c092a10,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = (double)CONCAT44(PTR_FUN_8c092a14,DAT_8c092a10);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (in_FPSCR_SZ != '\0') {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  aiStack_80[2] = (*(code *)PTR_FUN_8c092a18)(ar7,auStack_24,ar6,a7);
  if (aiStack_80[2] == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c092a10,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = (double)CONCAT44(PTR_FUN_8c092a14,DAT_8c092a10);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
    }
    else {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  (*(code *)PTR_vec3_copy_8c02b5fc_8c092a20)
            (*(undefined4 *)((int)aiStack_80 + DAT_8c092a1c),&fStack_14,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c092a00)(auStack_24,0xffffffff,ar6,a7);
  (*(code *)PTR_object_dtor_delete_8c092a24)(&fStack_14,0xffffffff,ar6,a7);
  return 0;
}



/* FUN_8c092a28 @ 8c092a28 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c092a28(int *ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int *a6;
  int *a7;
  undefined4 uVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *piStack_124;
  int iStack_120;
  int *apiStack_11c [4];
  int *piStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  uVar5 = 1;
  piStack_128 = (int *)((int)&piStack_124 + DAT_8c092a9c);
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_FUN_8c092aa0)(ar5,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c092aa8)
            ((int)&piStack_124 + DAT_8c092aa4,(int)&piStack_124 + DAT_8c092a9c,a6,a7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c092aac)((int)&piStack_124 + DAT_8c092a9c,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c092ab4)((int)&piStack_124 + DAT_8c092ab0,uVar3,a6,a7);
  switch(*(undefined4 *)(DAT_8c092ab8 + (int)ar4)) {
  case 0:
    uVar5 = 0;
    break;
  default:
    uVar5 = 0;
    break;
  case 2:
  case 7:
    uStack_130 = *(undefined4 *)((int)&piStack_124 + DAT_8c093034);
    piStack_12c = *(int **)((int)&iStack_120 + DAT_8c093034);
    piStack_128 = *(int **)((int)apiStack_11c + DAT_8c093034);
    uVar5 = (*(code *)PTR_FUN_8c09303c)(ar4,(int)&uStack_130 + DAT_8c093038,ar6,ar7);
    a6 = ar6;
    a7 = ar7;
    uStack_e0 = uVar5;
    break;
  case 4:
    uVar3 = (*(code *)PTR_get_field_24_026024_8c092bb0)(ar7,0xb,a6,a7);
    fVar6 = SUB84(in_dr0,0);
    *(undefined4 *)((int)&piStack_124 + DAT_8c092bb4) = uVar3;
    if (*(int *)((int)&piStack_124 + DAT_8c092bb4) != 0) {
      piStack_128 = ar7;
      a6 = (int *)((int)&piStack_128 + DAT_8c092ff4);
      uVar5 = (*(code *)PTR_FUN_8c092ffc)
                        (ar4,*(undefined4 *)((int)&piStack_128 + DAT_8c092ff8),a6,ar6);
      a7 = ar6;
      uStack_dc = uVar5;
      break;
    }
    iVar1 = *(int *)(DAT_8c092bb8 + (int)ar4);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(DAT_8c092d7c + *ar7))(ar7,2,a6,a7);
      *(undefined4 *)((int)&piStack_124 + DAT_8c092d80) = uVar3;
      puVar2 = (undefined8 *)(*(int *)((int)&piStack_124 + DAT_8c092d80) + 4);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c092d84) = *(undefined4 *)puVar2;
      }
      else {
        *(undefined8 *)((int)ar4 + DAT_8c092d84) = *puVar2;
      }
      uVar3 = (**(code **)(DAT_8c092d7c + *ar7))(ar7,2,a6,a7);
      *(undefined4 *)((int)&piStack_124 + DAT_8c092d88) = uVar3;
      puVar2 = (undefined8 *)(*(int *)((int)&piStack_124 + DAT_8c092d88) + 8);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c092d8c) = *(undefined4 *)puVar2;
      }
      else {
        *(undefined8 *)((int)ar4 + DAT_8c092d8c) = *puVar2;
      }
      uVar3 = (**(code **)(DAT_8c092d7c + *ar7))(ar7,2,a6,a7);
      *(undefined4 *)((int)&piStack_124 + DAT_8c092d90) = uVar3;
      puVar2 = (undefined8 *)(*(int *)((int)&piStack_124 + DAT_8c092d90) + 0xc);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c092d94) = *(undefined4 *)puVar2;
      }
      else {
        *(undefined8 *)((int)ar4 + DAT_8c092d94) = *puVar2;
      }
      a7 = (int *)0x5;
      ar4[0x10] = 5;
      *(int *)(DAT_8c092d98 + (int)ar4) = *(int *)(DAT_8c092d98 + (int)ar4) + 1;
      a6 = ar4;
      piStack_108 = ar4;
LAB_8c092c4e:
      iStack_a8 = (**(code **)(DAT_8c092d7c + *ar7))(ar7,2,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&piStack_124 + DAT_8c092d9c) = *(undefined4 *)(iStack_a8 + 4);
      }
      else {
        *(undefined8 *)((int)&piStack_124 + DAT_8c092d9c) = *(undefined8 *)(iStack_a8 + 4);
      }
      iStack_ac = (**(code **)(DAT_8c092d7c + *ar7))(ar7,2,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c092da0,*(undefined4 *)(iStack_ac + 8));
      }
      else {
        in_xd0 = *(undefined8 *)(iStack_ac + 8);
        dVar7 = (double)CONCAT44(DAT_8c092da4,DAT_8c092da0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)&piStack_124 + DAT_8c092da4) = fVar6;
      }
      else {
        *(undefined8 *)((int)&piStack_124 + DAT_8c092da4) = in_xd0;
      }
      iStack_b0 = (**(code **)(DAT_8c092d7c + *ar7))(ar7,2,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c092da8,*(undefined4 *)(iStack_b0 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(iStack_b0 + 0xc);
        dVar7 = (double)CONCAT44(DAT_8c092dac,DAT_8c092da8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c092dac,fVar6);
      }
      else {
        dVar7 = (double)CONCAT44(DAT_8c092db0,DAT_8c092dac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)&piStack_124 + DAT_8c092db0) = fVar6;
      }
      else {
        *(undefined8 *)((int)&piStack_124 + DAT_8c092db0) = in_xd0;
      }
      if (0 < *(int *)(DAT_8c092db4 + (int)ar4)) {
        (*(code *)PTR_Vec3_assign_8c092dbc)
                  ((undefined *)((int)ar4 + DAT_8c092db8),(int)&piStack_124 + DAT_8c092d9c,a6,a7);
      }
      puVar4 = PTR_Vec3_ctor_xyz_8c092dcc;
      (*(code *)PTR_Vec3_ctor_xyz_8c092dcc)
                ((int)&piStack_124 + DAT_8c092dc8,PTR_Vec3_ctor_xyz_8c092dcc,a6,a7);
      piStack_128 = (int *)((int)&piStack_124 + DAT_8c092dd0);
      (*(code *)PTR_Vec3_normalize_8c092dd8)((int)&piStack_128 + DAT_8c092dd4,puVar4,a6,a7);
      piStack_128 = ar7;
      piStack_12c = ar6;
      a7 = (int *)((int)&piStack_12c + DAT_8c092ddc);
      iStack_b4 = (*(code *)PTR_FUN_8c092de0)
                            (ar4,*(undefined4 *)((int)&piStack_12c + DAT_8c092d98),
                             (int)&piStack_12c + DAT_8c092db0,a7);
      *(uint *)((int)&piStack_124 + DAT_8c092de4) = (uint)(iStack_b4 == 0);
      (*(code *)PTR_Vec3_dtor_8c092de8)
                ((int)&piStack_124 + DAT_8c092dd0,0xffffffff,PTR_Vec3_dtor_8c092de8,a7);
      a6 = (int *)PTR_Vec3_dtor_8c092de8;
      (*(code *)PTR_Vec3_dtor_8c092de8)
                ((int)&piStack_124 + DAT_8c092dc8,0xffffffff,PTR_Vec3_dtor_8c092de8,a7);
      if (*(int *)((int)&piStack_124 + DAT_8c092de4) != 0) {
        ar4[0x10] = 5;
        *(int *)(DAT_8c092d98 + (int)ar4) = *(int *)(DAT_8c092d98 + (int)ar4) + 1;
        piStack_10c = ar4;
      }
    }
    else {
      if (iVar1 == 1) goto LAB_8c092c4e;
      if (iVar1 == 2) {
        if (in_FPSCR_SZ == '\0') {
          ar4[10] = 0;
        }
        else {
          *(ulonglong *)(ar4 + 10) = (ulonglong)in_dr0 & 0xffffffff;
        }
        iStack_b8 = (**(code **)(DAT_8c092e80 + *ar7))(ar7,2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)&piStack_124 + DAT_8c092e84) = *(undefined4 *)(iStack_b8 + 4);
        }
        else {
          *(undefined8 *)((int)&piStack_124 + DAT_8c092e84) = *(undefined8 *)(iStack_b8 + 4);
        }
        iStack_bc = (**(code **)(DAT_8c092e80 + *ar7))(ar7,2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c092e88,*(undefined4 *)(iStack_bc + 8));
        }
        else {
          in_xd0 = *(undefined8 *)(iStack_bc + 8);
          dVar7 = (double)CONCAT44(DAT_8c092e8c,DAT_8c092e88);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)&piStack_124 + DAT_8c092e8c) = fVar6;
        }
        else {
          *(undefined8 *)((int)&piStack_124 + DAT_8c092e8c) = in_xd0;
        }
        iStack_c0 = (**(code **)(DAT_8c092e80 + *ar7))(ar7,2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c092e90,*(undefined4 *)(iStack_c0 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)(iStack_c0 + 0xc);
          dVar7 = (double)CONCAT44(DAT_8c092e94,DAT_8c092e90);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c092e94,fVar6);
        }
        else {
          dVar7 = (double)CONCAT44(DAT_8c092e98,DAT_8c092e94);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)&piStack_124 + DAT_8c092e98) = fVar6;
        }
        else {
          *(undefined8 *)((int)&piStack_124 + DAT_8c092e98) = in_xd0;
        }
        (*(code *)PTR_FUN_8c092e9c)(ar4,1,a6,a7);
        uVar5 = 0;
      }
      else {
        *(undefined4 *)(DAT_8c092fac + (int)ar4) = 0;
      }
    }
    iStack_c4 = (**(code **)(DAT_8c092fb0 + *ar7))(ar7,2,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(iStack_c4 + 4);
    }
    else {
      in_xd0 = *(undefined8 *)(iStack_c4 + 4);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c092fb8),fVar6);
    }
    else {
      dVar7 = *(double *)((int)ar4 + DAT_8c092fb8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar4 + DAT_8c092fb4) = fVar6;
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c092fb4) = in_xd0;
    }
    iStack_c8 = (**(code **)(DAT_8c092fb0 + *ar7))(ar7,2,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(iStack_c8 + 8);
    }
    else {
      in_xd0 = *(undefined8 *)(iStack_c8 + 8);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c092fc0),fVar6);
    }
    else {
      dVar7 = *(double *)((int)ar4 + DAT_8c092fc0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar4 + DAT_8c092fbc) = fVar6;
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c092fbc) = in_xd0;
    }
    iStack_cc = (**(code **)(DAT_8c092fb0 + *ar7))(ar7,2,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(iStack_cc + 0xc);
    }
    else {
      in_xd0 = *(undefined8 *)(iStack_cc + 0xc);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c092fc8),fVar6);
    }
    else {
      dVar7 = *(double *)((int)ar4 + DAT_8c092fc8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar4 + DAT_8c092fc4) = fVar6;
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c092fc4) = in_xd0;
    }
    iStack_d0 = (**(code **)(DAT_8c092fb0 + *ar7))(ar7,2,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c092fb8) = *(undefined4 *)(iStack_d0 + 4);
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c092fb8) = *(undefined8 *)(iStack_d0 + 4);
    }
    iStack_d4 = (**(code **)(DAT_8c092fb0 + *ar7))(ar7,2,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c092fc0) = *(undefined4 *)(iStack_d4 + 8);
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c092fc0) = *(undefined8 *)(iStack_d4 + 8);
    }
    iStack_d8 = (**(code **)(DAT_8c092fb0 + *ar7))(ar7,2,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c092fc8) = *(undefined4 *)(iStack_d8 + 0xc);
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c092fc8) = *(undefined8 *)(iStack_d8 + 0xc);
    }
    break;
  case 6:
    piStack_128 = ar7;
    a6 = (int *)((int)&piStack_128 + DAT_8c0933e8);
    uVar5 = (*(code *)PTR_FUN_8c0933f0)
                      (ar4,*(undefined4 *)((int)&piStack_128 + DAT_8c0933ec),a6,ar6);
    a7 = ar6;
    uStack_104 = uVar5;
    break;
  case 8:
    (*(code *)PTR_FUN_8c093058)(ar4,*(undefined4 *)((int)&piStack_124 + DAT_8c093054),ar7,a7);
    a6 = ar7;
    break;
  case 9:
    *(undefined4 *)(DAT_8c09334c + (int)ar4) = 0;
    if (*(int *)(DAT_8c093350 + (int)ar4) == 0) {
      a7 = (int *)0x0;
      a6 = (int *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c09335c)
                ((undefined *)((int)ar4 + DAT_8c093354._4_4_),5,0xffffffff,0);
      puVar4 = (undefined *)((int)ar4 + DAT_8c093354._4_4_);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c093360)(puVar4,puVar4,a6,a7);
      (*(code *)PTR_FUN_8c093368)((undefined *)((int)ar4 + DAT_8c093354._4_4_),puVar4,a6,a7);
      *(int *)(DAT_8c093350 + (int)ar4) = *(int *)(DAT_8c093350 + (int)ar4) + 1;
      piStack_124 = ar4;
    }
    uVar3 = 5;
    iVar1 = (*(code *)PTR_FUN_8c09336c)(ar4,5,a6,a7);
    uStack_100 = (double)CONCAT44(iVar1,(undefined4)uStack_100);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_8c093350 + (int)ar4) = 0;
      (*(code *)PTR_FUN_8c093368)((undefined *)((int)ar4 + DAT_8c093354._4_4_),uVar3,a6,a7);
      uVar5 = 0;
      if ((-1 < *(int *)((int)DAT_8c093370 + (int)ar4)) && (-1 < *(int *)(DAT_8c093374 + (int)ar4)))
      {
        (*(code *)PTR_FUN_8c093378)
                  (*(undefined4 *)((int)DAT_8c093370 + (int)ar4),
                   *(undefined4 *)(DAT_8c093374 + (int)ar4),a6,a7);
        a7 = DAT_8c093370;
        *(undefined4 *)((int)DAT_8c093370 + (int)ar4) = 0xffffffff;
        *(undefined4 *)(DAT_8c093374 + (int)ar4) = 0xffffffff;
      }
    }
    else {
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0933b0)
                ((undefined *)((int)ar4 + DAT_8c0933ac),uVar3,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        uStack_100 = (double)CONCAT44(uStack_100._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        uStack_100 = in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)ar4 + DAT_8c0933b4) = SUB84(uStack_100,0);
      }
      else {
        *(double *)((int)ar4 + DAT_8c0933b4) = uStack_100;
      }
    }
    a6 = *(int **)((int)&piStack_124 + DAT_8c0933b8);
    (*(code *)PTR_FUN_8c0933c0)(ar4,(int)&piStack_124 + DAT_8c0933bc,a6,a7);
    break;
  case 10:
    *(undefined4 *)(DAT_8c093084 + (int)ar4) = 0;
    *(undefined4 *)(DAT_8c093088 + (int)ar4) = 0xffffffff;
    iVar1 = *(int *)(DAT_8c09308c + (int)ar4);
    if (iVar1 == 0) {
      iStack_e4 = (*(code *)PTR_FUN_8c0930d0)
                            (ar4,*(undefined4 *)((int)&piStack_124 + DAT_8c0930cc),ar6,ar7);
      a6 = ar6;
      a7 = ar7;
      if (iStack_e4 == 0) {
        *(int *)(DAT_8c0930d4 + (int)ar4) = *(int *)(DAT_8c0930d4 + (int)ar4) + 1;
        a7 = ar7;
        apiStack_11c[3] = ar4;
      }
    }
    else if (iVar1 == 1) {
      piStack_128 = ar7;
      a6 = (int *)((int)&piStack_128 + DAT_8c093114);
      iStack_e8 = (*(code *)PTR_FUN_8c09311c)
                            (ar4,*(undefined4 *)((int)&piStack_128 + DAT_8c093118),a6,ar6);
      a7 = ar6;
      if (iStack_e8 == 0) {
        *(int *)(DAT_8c093120 + (int)ar4) = *(int *)(DAT_8c093120 + (int)ar4) + 1;
        apiStack_11c[2] = ar4;
      }
    }
    else if (iVar1 == 2) {
      iStack_ec = (*(code *)PTR_FUN_8c0931b8)((undefined *)((int)ar4 + DAT_8c0931b4),6,a6,a7);
      iVar1 = DAT_8c0931bc;
      if (0 < iStack_ec) {
        *(int *)(DAT_8c0931bc + (int)ar4) = *(int *)(DAT_8c0931bc + (int)ar4) + 1;
        piStack_128 = (int *)((int)&piStack_124 + DAT_8c0931c0);
        apiStack_11c[1] = ar4;
        (*(code *)PTR_FUN_8c0931c4)(ar4 + 5,iVar1,a6,a7);
        uStack_f0 = (*(code *)PTR_Vec3_length_8c0931c8)
                              ((int)&piStack_124 + DAT_8c0931c0,iVar1,a6,a7);
        (*(code *)PTR_Vec3_assign_8c0931cc)(ar4 + 5,uStack_f0,a6,a7);
        uVar3 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c0931d0)((int)&piStack_124 + DAT_8c0931c0,0xffffffff,a6,a7);
        (*(code *)PTR_FUN_8c0931d4)(ar4,uVar3,a6,a7);
        *(undefined4 *)(DAT_8c0931d8 + (int)ar4) = 0;
        a6 = (int *)PTR_FUN_8c0931dc;
        (*(code *)PTR_FUN_8c0931dc)((undefined *)((int)ar4 + DAT_8c0931b4),0,PTR_FUN_8c0931dc,a7);
      }
    }
    else if (iVar1 == 3) {
      iVar1 = (*(code *)PTR_FUN_8c093238)(ar4,6,a6,a7);
      uStack_f8 = (double)CONCAT44(iVar1,(undefined4)uStack_f8);
      if (iVar1 == 0) {
        iStack_120 = *(int *)(DAT_8c09323c + (int)ar4);
        *(int *)(DAT_8c09323c + (int)ar4) = iStack_120 + 1;
        apiStack_11c[0] = ar4;
        if (1 < iStack_120 + 1) {
          *(undefined4 *)(DAT_8c09323c + (int)ar4) = 0;
          *(undefined4 *)(DAT_8c093240 + (int)ar4) = 0;
          uVar5 = 0;
          *(undefined4 *)(DAT_8c093244 + (int)ar4) = 0;
          ar4[0x10] = 5;
        }
      }
      else {
        (*(code *)PTR_CAnimBody_GetCurFrame_8c09327c)
                  ((undefined *)((int)ar4 + DAT_8c093278),PTR_CAnimBody_GetCurFrame_8c09327c,a6,a7);
        fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
        dVar7 = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          uStack_f8 = (double)CONCAT44(uStack_f8._4_4_,fVar6);
          dVar7 = uStack_f8;
        }
        uStack_f8 = dVar7;
        if (in_FPSCR_PR == '\0') {
          iVar1 = (int)fVar6;
        }
        else {
          iVar1 = (int)in_dr0;
        }
        if (iVar1 == 0x38) {
          *(undefined4 *)(DAT_8c093280 + (int)ar4) = *(undefined4 *)(DAT_8c093284 + (int)ar4);
        }
      }
    }
    break;
  case 0xb:
    (*(code *)PTR_Vec3_ctor_xyz_8c092b5c)((int)&piStack_124 + DAT_8c092b58,0xb,a6,a7);
    (*(code *)PTR_Vec3_assign_8c092b64)
              ((int)&piStack_124 + DAT_8c092b60,(int)&piStack_124 + DAT_8c092b58,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c092b68)((int)&piStack_124 + DAT_8c092b58,0xffffffff,a6,a7);
    piStack_128 = ar5;
    piStack_12c = ar7;
    a6 = (int *)((int)&piStack_12c + DAT_8c092b6c);
    uVar5 = (*(code *)PTR_FUN_8c092b74)
                      (ar4,*(undefined4 *)((int)&piStack_12c + DAT_8c092b70),a6,ar6);
    *(undefined4 *)((int)&piStack_124 + DAT_8c092b78) = uVar5;
    uVar5 = *(undefined4 *)((int)&piStack_124 + DAT_8c092b78);
    a7 = ar6;
  }
  *(undefined4 *)((int)&piStack_124 + DAT_8c09343c) = uVar5;
  (*(code *)PTR_Vec3_dtor_8c093444)((int)&piStack_124 + DAT_8c093440,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c093444)((int)&piStack_124 + DAT_8c093448,0xffffffff,a6,a7);
  return *(undefined4 *)((int)&piStack_124 + DAT_8c09343c);
}



/* FUN_8c09344c @ 8c09344c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09344c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  int iVar8;
  undefined4 unaff_r14;
  undefined8 *puVar9;
  undefined4 in_fr1;
  undefined8 uVar10;
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
    puVar9 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar9 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar9 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar9 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar9 + -0xc) = 1;
  *(undefined4 *)((int)puVar9 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar9 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar9 + -0x18) = in_PR;
  iVar8 = 1;
  iVar1 = *(int *)(DAT_8c093488 + ar4);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)((int)puVar9 + DAT_8c09350c + -0x144);
    iVar1 = ar4;
    uVar5 = (*(code *)PTR_FUN_8c093510)(ar4,uVar3,ar6,ar7);
    *(undefined4 *)((int)puVar9 + -0xfc) = uVar5;
    iVar8 = *(int *)((int)puVar9 + -0xfc);
    if (iVar8 == 0) {
      uVar5 = (*(code *)PTR_rand_8c093514)(iVar1,uVar3,ar6,ar7);
      *(undefined4 *)((int)puVar9 + -0x100) = uVar5;
      uVar4 = 100;
      uVar3 = *(undefined4 *)((int)puVar9 + -0x100);
      uVar5 = (*(code *)PTR_libgcc_divide_helper_01031c_8c093518)(uVar3,100,ar6,ar7);
      *(undefined4 *)((int)puVar9 + -0x140) = uVar5;
      if (*(int *)((int)puVar9 + -0x140) < 0xf) {
        *(undefined4 *)(DAT_8c09351c + ar4) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
        uVar5 = (*(code *)PTR_rand_8c093514)(uVar3,uVar4,ar6,ar7);
        *(undefined4 *)((int)puVar9 + -0x104) = uVar5;
        uVar5 = (*(code *)PTR_libgcc_divide_helper_01031c_8c093518)
                          (*(undefined4 *)((int)puVar9 + -0x104),10,ar6,ar7);
        *(undefined4 *)((int)puVar9 + -0x144) = uVar5;
        *(undefined4 *)(DAT_8c093520 + ar4) = *(undefined4 *)((int)puVar9 + -0x144);
      }
    }
  }
  else if (iVar1 == 2) {
    if (*(char *)(DAT_8c093550 + ar4) == '\x01') {
      *(undefined4 *)(DAT_8c093a18 + ar4) = 1;
      *(undefined1 **)((int)puVar9 + -0x148) = (undefined1 *)((int)puVar9 + -0xe8);
      (*(code *)PTR_FUN_8c093a20)(ar4 + DAT_8c093a1c,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c093a24)(ar4 + 0x14,(undefined1 *)((int)puVar9 + -0xe8),ar6,ar7);
      uVar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c093a28)((undefined1 *)((int)puVar9 + -0xe8),0xffffffff,ar6,ar7);
      *(undefined4 *)(DAT_8c093a2c + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c093a34)(ar4 + DAT_8c093a30,uVar5,ar6,ar7);
    }
    else {
      uVar5 = ar5;
      uVar3 = ar6;
      uVar4 = ar7;
      uVar2 = (*(code *)PTR_get_field_24_026024_8c093554)(ar7,ar5,ar6,ar7);
      *(undefined4 *)((int)puVar9 + -0x108) = uVar2;
      iVar1 = *(int *)((int)puVar9 + -0x108);
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 == 2)) {
        *(undefined4 *)(DAT_8c0935cc + ar4) = 10;
      }
      iVar1 = *(int *)(DAT_8c0935cc + ar4);
      if (iVar1 == 0) {
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(DAT_8c093688,in_fr1);
        }
        else {
          uVar10 = CONCAT44(PTR_FUN_8c09368c,DAT_8c093688);
        }
        (*(code *)PTR_FUN_8c09368c)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x10c) = (int)((ulonglong)uVar10 >> 0x20);
          uVar10 = CONCAT44(DAT_8c093688,(int)uVar10);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x10c) = uVar10;
          uVar10 = CONCAT44(PTR_FUN_8c09368c,DAT_8c093688);
        }
        (*(code *)PTR_FUN_8c09368c)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x110) = (int)((ulonglong)uVar10 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x110) = uVar10;
        }
        (*(code *)PTR_Vec3_ctor_xyz_8c093698)
                  ((undefined1 *)((int)puVar9 + DAT_8c093694 + -0x144),uVar5,uVar3,uVar4);
        (*(code *)PTR_Vec3_ctor_xyz_8c093698)
                  ((undefined1 *)((int)puVar9 + DAT_8c09369c._4_4_ + -0x144),uVar5,uVar3,uVar4);
        *(undefined1 **)((int)puVar9 + -0x148) = (undefined1 *)((int)puVar9 + DAT_8c0936a4 + -0x144)
        ;
        (*(code *)PTR_Vec3_normalize_8c0936ac)
                  ((undefined1 *)((int)puVar9 + DAT_8c0936a8 + -0x148),uVar5,uVar3,uVar4);
        *(undefined4 *)((int)puVar9 + -0x148) = ar7;
        *(undefined4 *)((int)puVar9 + -0x14c) = ar6;
        puVar7 = (undefined1 *)((int)puVar9 + DAT_8c0936b0 + -0x14c);
        puVar6 = (undefined1 *)((int)puVar9 + DAT_8c0936b4 + -0x14c);
        uVar5 = (*(code *)PTR_FUN_8c0936bc)
                          (ar4,*(undefined4 *)((int)puVar9 + DAT_8c0936b8 + -0x14c),puVar6,puVar7);
        *(undefined4 *)((int)puVar9 + -0x114) = uVar5;
        iVar8 = *(int *)((int)puVar9 + -0x114);
        (*(code *)PTR_Vec3_dtor_8c0936c0)
                  ((undefined1 *)((int)puVar9 + DAT_8c0936a4 + -0x144),0xffffffff,puVar6,puVar7);
        (*(code *)PTR_Vec3_dtor_8c0936c0)
                  ((undefined1 *)((int)puVar9 + DAT_8c09369c._4_4_ + -0x144),0xffffffff,puVar6,
                   puVar7);
        (*(code *)PTR_Vec3_dtor_8c0936c0)
                  ((undefined1 *)((int)puVar9 + DAT_8c093694 + -0x144),0xffffffff,puVar6,puVar7);
      }
      else if (iVar1 == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(DAT_8c093780,in_fr1);
        }
        else {
          uVar10 = CONCAT44(PTR_FUN_8c093784,DAT_8c093780);
        }
        (*(code *)PTR_FUN_8c093784)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x118) = (int)((ulonglong)uVar10 >> 0x20);
          uVar10 = CONCAT44(DAT_8c093780,(int)uVar10);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x118) = uVar10;
          uVar10 = CONCAT44(PTR_FUN_8c093784,DAT_8c093780);
        }
        (*(code *)PTR_FUN_8c093784)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x11c) = (int)((ulonglong)uVar10 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x11c) = uVar10;
        }
        (*(code *)PTR_Vec3_ctor_xyz_8c093790)
                  ((undefined1 *)((int)puVar9 + DAT_8c09378c + -0x144),uVar5,uVar3,uVar4);
        (*(code *)PTR_Vec3_ctor_xyz_8c093790)
                  ((undefined1 *)((int)puVar9 + DAT_8c093794._4_4_ + -0x144),uVar5,uVar3,uVar4);
        *(undefined1 **)((int)puVar9 + -0x148) = (undefined1 *)((int)puVar9 + DAT_8c09379c + -0x144)
        ;
        (*(code *)PTR_Vec3_normalize_8c0937a4)
                  ((undefined1 *)((int)puVar9 + DAT_8c0937a0 + -0x148),uVar5,uVar3,uVar4);
        *(undefined4 *)((int)puVar9 + -0x148) = ar7;
        *(undefined4 *)((int)puVar9 + -0x14c) = ar6;
        puVar7 = (undefined1 *)((int)puVar9 + DAT_8c0937a8 + -0x14c);
        puVar6 = (undefined1 *)((int)puVar9 + DAT_8c0937ac + -0x14c);
        uVar5 = (*(code *)PTR_FUN_8c0937b4)
                          (ar4,*(undefined4 *)((int)puVar9 + DAT_8c0937b0 + -0x14c),puVar6,puVar7);
        *(undefined4 *)((int)puVar9 + -0x120) = uVar5;
        iVar8 = *(int *)((int)puVar9 + -0x120);
        (*(code *)PTR_Vec3_dtor_8c0937b8)
                  ((undefined1 *)((int)puVar9 + DAT_8c09379c + -0x144),0xffffffff,puVar6,puVar7);
        (*(code *)PTR_Vec3_dtor_8c0937b8)
                  ((undefined1 *)((int)puVar9 + DAT_8c093794._4_4_ + -0x144),0xffffffff,puVar6,
                   puVar7);
        (*(code *)PTR_Vec3_dtor_8c0937b8)
                  ((undefined1 *)((int)puVar9 + DAT_8c09378c + -0x144),0xffffffff,puVar6,puVar7);
      }
      else if (iVar1 == 2) {
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(DAT_8c093874,in_fr1);
        }
        else {
          uVar10 = CONCAT44(PTR_FUN_8c093878,DAT_8c093874);
        }
        (*(code *)PTR_FUN_8c093878)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x124) = (int)((ulonglong)uVar10 >> 0x20);
          uVar10 = CONCAT44(DAT_8c093874,(int)uVar10);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x124) = uVar10;
          uVar10 = CONCAT44(PTR_FUN_8c093878,DAT_8c093874);
        }
        (*(code *)PTR_FUN_8c093878)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x128) = (int)((ulonglong)uVar10 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x128) = uVar10;
        }
        (*(code *)PTR_Vec3_ctor_xyz_8c093884)
                  ((undefined1 *)((int)puVar9 + DAT_8c093880 + -0x144),uVar5,uVar3,uVar4);
        (*(code *)PTR_Vec3_ctor_xyz_8c093884)
                  ((undefined1 *)((int)puVar9 + DAT_8c093888._4_4_ + -0x144),uVar5,uVar3,uVar4);
        *(undefined1 **)((int)puVar9 + -0x148) = (undefined1 *)((int)puVar9 + DAT_8c093890 + -0x144)
        ;
        (*(code *)PTR_Vec3_normalize_8c093898)
                  ((undefined1 *)((int)puVar9 + DAT_8c093894 + -0x148),uVar5,uVar3,uVar4);
        *(undefined4 *)((int)puVar9 + -0x148) = ar7;
        *(undefined4 *)((int)puVar9 + -0x14c) = ar6;
        puVar7 = (undefined1 *)((int)puVar9 + DAT_8c09389c + -0x14c);
        puVar6 = (undefined1 *)((int)puVar9 + DAT_8c0938a0 + -0x14c);
        uVar5 = (*(code *)PTR_FUN_8c0938a8)
                          (ar4,*(undefined4 *)((int)puVar9 + DAT_8c0938a4 + -0x14c),puVar6,puVar7);
        *(undefined4 *)((int)puVar9 + -300) = uVar5;
        iVar8 = *(int *)((int)puVar9 + -300);
        (*(code *)PTR_Vec3_dtor_8c0938ac)
                  ((undefined1 *)((int)puVar9 + DAT_8c093890 + -0x144),0xffffffff,puVar6,puVar7);
        (*(code *)PTR_Vec3_dtor_8c0938ac)
                  ((undefined1 *)((int)puVar9 + DAT_8c093888._4_4_ + -0x144),0xffffffff,puVar6,
                   puVar7);
        (*(code *)PTR_Vec3_dtor_8c0938ac)
                  ((undefined1 *)((int)puVar9 + DAT_8c093880 + -0x144),0xffffffff,puVar6,puVar7);
      }
      else if (iVar1 == 3) {
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(DAT_8c09396c,in_fr1);
        }
        else {
          uVar10 = CONCAT44(PTR_FUN_8c093970,DAT_8c09396c);
        }
        (*(code *)PTR_FUN_8c093970)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x130) = (int)((ulonglong)uVar10 >> 0x20);
          uVar10 = CONCAT44(DAT_8c09396c,(int)uVar10);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x130) = uVar10;
          uVar10 = CONCAT44(PTR_FUN_8c093970,DAT_8c09396c);
        }
        (*(code *)PTR_FUN_8c093970)(ar4,uVar5,uVar3,uVar4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + -0x134) = (int)((ulonglong)uVar10 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar9 + -0x134) = uVar10;
        }
        (*(code *)PTR_Vec3_ctor_xyz_8c09397c)
                  ((undefined1 *)((int)puVar9 + DAT_8c093978 + -0x144),uVar5,uVar3,uVar4);
        (*(code *)PTR_Vec3_ctor_xyz_8c09397c)((undefined1 *)((int)puVar9 + -200),uVar5,uVar3,uVar4);
        *(undefined1 **)((int)puVar9 + -0x148) = (undefined1 *)((int)puVar9 + -0xd8);
        (*(code *)PTR_Vec3_normalize_8c093988)
                  ((undefined1 *)((int)puVar9 + DAT_8c093980._4_4_ + -0x148),uVar5,uVar3,uVar4);
        *(undefined4 *)((int)puVar9 + -0x148) = ar7;
        *(undefined4 *)((int)puVar9 + -0x14c) = ar6;
        puVar7 = (undefined1 *)((int)puVar9 + -0xd8);
        puVar6 = (undefined1 *)((int)puVar9 + DAT_8c09398c + -0x14c);
        uVar5 = (*(code *)PTR_FUN_8c093994)
                          (ar4,*(undefined4 *)((int)puVar9 + DAT_8c093990 + -0x14c),puVar6,puVar7);
        *(undefined4 *)((int)puVar9 + -0x138) = uVar5;
        iVar8 = *(int *)((int)puVar9 + -0x138);
        (*(code *)PTR_Vec3_dtor_8c093998)
                  ((undefined1 *)((int)puVar9 + -0xd8),0xffffffff,puVar6,puVar7);
        (*(code *)PTR_Vec3_dtor_8c093998)
                  ((undefined1 *)((int)puVar9 + -200),0xffffffff,puVar6,puVar7);
        (*(code *)PTR_Vec3_dtor_8c093998)
                  ((undefined1 *)((int)puVar9 + DAT_8c093978 + -0x144),0xffffffff,puVar6,puVar7);
      }
      else {
        *(undefined4 *)((int)puVar9 + -0x148) = ar7;
        uVar5 = (*(code *)PTR_FUN_8c0939c0)
                          (ar4,*(undefined4 *)((int)puVar9 + DAT_8c0939bc + -0x148),ar5,ar6);
        *(undefined4 *)((int)puVar9 + -0x13c) = uVar5;
        iVar8 = *(int *)((int)puVar9 + -0x13c);
      }
    }
  }
  else if (iVar1 == 3) {
    if (*(char *)(DAT_8c093a5c + ar4) == '\x01') {
      *(undefined1 **)((int)puVar9 + -0x148) = (undefined1 *)((int)puVar9 + -0xf8);
      (*(code *)PTR_FUN_8c093ad4)(ar4 + DAT_8c093ad0,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c093ad8)(ar4 + 0x14,(undefined1 *)((int)puVar9 + -0xf8),ar6,ar7);
      uVar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c093adc)((undefined1 *)((int)puVar9 + -0xf8),0xffffffff,ar6,ar7);
      *(undefined4 *)(DAT_8c093ae0 + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c093ae8)(ar4 + DAT_8c093ae4,uVar5,ar6,ar7);
    }
    else {
      *(undefined4 *)((int)puVar9 + -0x148) = ar7;
      (*(code *)PTR_FUN_8c093a64)(ar4,*(undefined4 *)((int)puVar9 + DAT_8c093a60 + -0x148),ar5,ar6);
    }
  }
  return iVar8;
}



/* FUN_8c093aec @ 8c093aec callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c093aec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  double in_dr0;
  double dVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
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
  *(undefined4 *)(puVar5 + -0xc) = 1;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = in_PR;
  uVar2 = ar6;
  uVar4 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c093de8)(puVar5 + DAT_8c093de4 + -0xbc,ar5,ar6,ar7);
  a5 = ar4 + DAT_8c093dec;
  (*(code *)PTR_Vec3_assign_8c093df0)(puVar5 + DAT_8c093de4 + -0xbc,a5,uVar2,uVar4);
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093b3c:
    if (*(char *)(DAT_8c093df4 + ar4) == '\x01') {
      uVar4 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c093e00)(ar4 + DAT_8c093dfc,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c093e04)(ar4 + DAT_8c093dfc,uVar3,uVar2,uVar4);
      *(undefined1 *)(DAT_8c093df4 + ar4) = 0;
    }
    else {
      uVar3 = (*(code *)PTR_FUN_8c093e08)(ar4 + DAT_8c093dfc,0,uVar2,uVar4);
      *(undefined4 *)(puVar5 + -0xa8) = uVar3;
      if ((*(int *)(puVar5 + -0xa8) != 1) && (*(int *)(puVar5 + -0xa8) != 2)) {
        *(undefined4 *)(puVar5 + -0xa0) = 1;
        (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + DAT_8c093de4 + -0xbc,0xffffffff,uVar2,uVar4);
        return *(undefined4 *)(puVar5 + -0xa0);
      }
    }
    (*(code *)PTR_FUN_8c093e10)(ar5,puVar5 + DAT_8c093de4 + -0xbc,uVar2,uVar4);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -0xac) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(puVar5 + -0xac));
    }
    else {
      *(double *)(puVar5 + -0xac) = in_dr0;
      in_xd0 = *(undefined8 *)(puVar5 + -0xac);
      dVar8 = *(double *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 / dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar6;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    *(undefined **)(puVar5 + -0xc0) = PTR_DAT_8c093e14;
    *(undefined1 **)(puVar5 + -0xc4) = puVar5 + -0x48;
    fVar7 = DAT_8c093e18;
    if (in_FPSCR_SZ == '\0') {
      fVar7 = fVar6;
    }
    uVar2 = ar6;
    uVar4 = ar7;
    (*(code *)PTR_FUN_8c093e28)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c093df0)(ar4 + DAT_8c093dec,puVar5 + -0x48,uVar2,uVar4);
    (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + -0x48,0xffffffff,uVar2,uVar4);
    *(undefined **)(puVar5 + -0xc0) = PTR_DAT_8c093e14;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c093e2c,fVar7);
    }
    else {
      in_dr0 = (double)CONCAT44(PTR_FUN_8c093e30,DAT_8c093e2c);
    }
    uVar4 = ar7;
    uVar2 = (*(code *)PTR_FUN_8c093e30)(ar4,ar4 + DAT_8c093dec,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xb0) = uVar2;
    (*(code *)PTR_Vec3_assign_8c093df0)
              (ar4 + DAT_8c093dec,*(undefined4 *)(puVar5 + -0xb0),ar6,uVar4);
    (*(code *)PTR_Vec3_assign_8c093df0)(puVar5 + DAT_8c093de4 + -0xbc,ar4 + DAT_8c093dec,ar6,uVar4);
    uVar2 = DAT_8c093e34;
    (*(code *)PTR_FUN_8c093e38)(ar4,DAT_8c093e34,ar6,uVar4);
    (*(code *)PTR_FUN_8c093e3c)(ar4,uVar2,ar6,uVar4);
    *(undefined4 *)(ar4 + 0x40) = 3;
    a5 = 0x24;
    uVar2 = ar5;
    (*(code *)PTR_FUN_8c093e40)(ar4,0x24,ar5,ar7);
    uVar4 = ar7;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c093cfc;
    goto LAB_8c093b3c;
  }
  (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c093e44)(ar4 + DAT_8c093dfc,a5,uVar2,uVar4);
  (*(code *)PTR_FUN_8c093e48)(ar4 + 0x14,a5,uVar2,uVar4);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0xb4) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar5 + -0xb4);
    dVar8 = (double)CONCAT44(DAT_8c093e4c,SUB84(in_dr0,0));
  }
  else {
    *(double *)(puVar5 + -0xb4) = in_dr0;
    dVar8 = (double)CONCAT44(_DAT_8c093e50,DAT_8c093e4c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar9 = in_fr15 < (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    bVar9 = (double)CONCAT44(in_fr14,in_fr15) < dVar8;
  }
  if (bVar9) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c093e4c,SUB84(dVar8,0));
    }
    else {
      in_dr0 = (double)CONCAT44(_DAT_8c093e50,DAT_8c093e4c);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - in_fr15,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = in_dr0 - (double)CONCAT44(in_fr14,in_fr15);
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(_DAT_8c093e50,SUB84(dVar8,0));
    }
    else {
      in_dr0 = (double)CONCAT44(PTR_FUN_8c093e54,_DAT_8c093e50);
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
    }
    else {
      bVar9 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar9) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(_DAT_8c093e50,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = (double)CONCAT44(PTR_FUN_8c093e54,_DAT_8c093e50);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - (double)CONCAT44(in_fr14,in_fr15);
      }
    }
  }
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x58;
  (*(code *)PTR_FUN_8c093e54)(ar4 + 0x14,a5,uVar2,uVar4);
  (*(code *)PTR_Vec3_assign_8c093df0)(ar4 + DAT_8c093e58,puVar5 + -0x58,uVar2,uVar4);
  (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + -0x58,0xffffffff,uVar2,uVar4);
LAB_8c093cfc:
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x68;
  uVar3 = ar5;
  (*(code *)PTR_Vec3_sub_8c093e60)(puVar5 + DAT_8c093e5c + -0xc0,ar5,uVar2,uVar4);
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x78;
  (*(code *)PTR_Vec3_normalize_8c093e64)(puVar5 + -0x68,uVar3,uVar2,uVar4);
  (*(code *)PTR_Vec3_ctor_copy_8c093e6c)(puVar5 + DAT_8c093e68 + -0xbc,puVar5 + -0x78,uVar2,uVar4);
  (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + -0x78,0xffffffff,uVar2,uVar4);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + -0x68,0xffffffff,uVar2,uVar4);
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x88;
  (*(code *)PTR_FUN_8c093e70)(ar4 + 0x14,uVar3,uVar2,uVar4);
  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x98;
  (*(code *)PTR_FUN_8c093e70)(puVar5 + DAT_8c093e74 + -0xc0,uVar3,uVar2,uVar4);
  (*(code *)PTR_FUN_8c093e78)(puVar5 + -0x88,puVar5 + -0x98,uVar2,uVar4);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0xb8) = (int)((ulonglong)in_dr0 >> 0x20);
    *(undefined4 *)(puVar5 + -0x9c) = *(undefined4 *)(puVar5 + -0xb8);
  }
  else {
    *(double *)(puVar5 + -0xb8) = in_dr0;
    *(undefined8 *)(puVar5 + -0x9c) = *(undefined8 *)(puVar5 + -0xb8);
  }
  (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + -0x98,0xffffffff,uVar2,uVar4);
  (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + -0x88,0xffffffff,uVar2,uVar4);
  uVar2 = (*(code *)PTR_FUN_8c093e7c)(ar4,puVar5 + DAT_8c093de4 + -0xbc,ar5,uVar4);
  *(undefined4 *)(puVar5 + -0xbc) = uVar2;
  *(undefined4 *)(puVar5 + -0xa4) = *(undefined4 *)(puVar5 + -0xbc);
  (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + DAT_8c093e68 + -0xbc,0xffffffff,ar5,uVar4);
  (*(code *)PTR_Vec3_dtor_8c093e0c)(puVar5 + DAT_8c093de4 + -0xbc,0xffffffff,ar5,uVar4);
  return *(undefined4 *)(puVar5 + -0xa4);
}



/* FUN_8c093e80 @ 8c093e80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c093e80(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  undefined1 *a5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int a7;
  undefined4 unaff_r11;
  int iVar5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar6;
  float fVar7;
  undefined8 in_dr0;
  float fVar10;
  undefined8 uVar9;
  undefined4 in_fr3;
  double dVar11;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  double dVar8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = auStack_4;
  }
  else {
    puVar6 = auStack_8;
  }
  *(undefined4 *)(puVar6 + -4) = unaff_r14;
  *(undefined4 *)(puVar6 + -8) = unaff_r13;
  *(undefined4 *)(puVar6 + -0xc) = 1;
  *(undefined4 *)(puVar6 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar6 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar6 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar6 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar6 + -0x20) = in_PR;
  a7 = *(int *)(puVar6 + DAT_8c093f14 + -0x19c);
  uVar3 = ar5;
  iVar5 = ar6;
  iVar4 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c093f1c)(puVar6 + DAT_8c093f18 + -0x19c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c093f1c)(puVar6 + DAT_8c093f20 + -0x19c,uVar3,iVar5,iVar4);
  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c093f24 + -0x19c;
  uVar3 = ar5;
  (*(code *)PTR_Vec3_sub_8c093f28)(ar6,ar5,iVar5,iVar4);
  (*(code *)PTR_Vec3_length_sq_8c093f2c)(puVar6 + DAT_8c093f24 + -0x19c,uVar3,iVar5,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar6 + -0x170) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar11 = (double)CONCAT44(*(undefined4 *)(puVar6 + -0x170),in_fr3);
    dVar8 = (double)CONCAT44(DAT_8c093f30,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    *(undefined8 *)(puVar6 + -0x170) = in_dr0;
    dVar11 = *(double *)(puVar6 + -0x170);
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar8 = (double)CONCAT44(PTR_Vec3_dtor_8c093f34,DAT_8c093f30);
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = (float)((ulonglong)dVar8 >> 0x20);
    fVar7 = SUB84(dVar8,0) * fVar10;
    dVar8 = (double)CONCAT44(fVar10,fVar7);
    bVar12 = fVar7 < (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    dVar8 = dVar8 * dVar8;
    bVar12 = dVar8 < dVar11;
  }
  *(uint *)(puVar6 + -0x164) = 1 - (uint)bVar12;
  (*(code *)PTR_Vec3_dtor_8c093f34)(puVar6 + DAT_8c093f24 + -0x19c,0xffffffff,iVar5,iVar4);
  uVar3 = SUB84(dVar11,0);
  if (*(int *)(puVar6 + -0x164) == 0) {
    a5 = ar4 + DAT_8c093f68;
    (*(code *)PTR_Vec3_assign_8c093f70)(puVar6 + DAT_8c093f6c + -0x19c,a5,iVar5,iVar4);
  }
  else {
    a5 = ar6;
    (*(code *)PTR_Vec3_assign_8c093f38)(puVar6 + DAT_8c093f18 + -0x19c,ar6,iVar5,iVar4);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093f74:
    uVar2 = (*(code *)PTR_FUN_8c093fb8)(ar4 + DAT_8c093fb4,0,iVar5,iVar4);
    *(undefined4 *)(puVar6 + -0x174) = uVar2;
    if ((*(int *)(puVar6 + -0x174) != 1) && (*(int *)(puVar6 + -0x174) != 2)) {
      *(undefined4 *)(puVar6 + -0x15c) = 1;
      (*(code *)PTR_Vec3_dtor_8c093fc0)(puVar6 + DAT_8c093fbc + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c093fc0)(puVar6 + DAT_8c093fc4 + -0x19c,0xffffffff,iVar5,iVar4);
      return *(undefined4 *)(puVar6 + -0x15c);
    }
    *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c09403c + -0x19c;
    uVar2 = ar5;
    (*(code *)PTR_Vec3_sub_8c094040)(ar6,ar5,iVar5,iVar4);
    (*(code *)PTR_Vec3_length_sq_8c094044)(puVar6 + DAT_8c09403c + -0x19c,uVar2,iVar5,iVar4);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar6 + -0x178) = (int)((ulonglong)dVar8 >> 0x20);
      dVar11 = (double)CONCAT44(*(undefined4 *)(puVar6 + -0x178),uVar3);
      dVar8 = (double)CONCAT44(DAT_8c094048,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)(puVar6 + -0x178) = dVar8;
      dVar11 = *(double *)(puVar6 + -0x178);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar8 = (double)CONCAT44(PTR_Vec3_dtor_8c09404c,DAT_8c094048);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = (float)((ulonglong)dVar8 >> 0x20);
      fVar7 = SUB84(dVar8,0) * fVar10;
      dVar8 = (double)CONCAT44(fVar10,fVar7);
      bVar12 = fVar7 < (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      dVar8 = dVar8 * dVar8;
      bVar12 = dVar8 < dVar11;
    }
    *(uint *)(puVar6 + -0x19c) = -(uint)bVar12;
    *(int *)(puVar6 + -0x19c) = *(int *)(puVar6 + -0x19c) + 1;
    *(undefined4 *)(puVar6 + -0x168) = *(undefined4 *)(puVar6 + -0x19c);
    (*(code *)PTR_Vec3_dtor_8c09404c)(puVar6 + DAT_8c09403c + -0x19c,0xffffffff,iVar5,iVar4);
    if (*(int *)(puVar6 + -0x168) == 0) {
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c0942a4 + -0x19c;
      (*(code *)PTR_Vec3_sub_8c0942a8)(ar6,ar5,iVar5,iVar4);
      (*(code *)PTR_Vec3_assign_8c0942b0)
                (puVar6 + DAT_8c0942ac + -0x19c,puVar6 + DAT_8c0942a4 + -0x19c,iVar5,iVar4);
      uVar3 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c0942a4 + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_length_sq_8c0942b8)(puVar6 + DAT_8c0942ac + -0x19c,uVar3,iVar5,iVar4);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar6 + -0x180) = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined4 *)(puVar6 + -0x154) = *(undefined4 *)(puVar6 + -0x180);
      }
      else {
        *(double *)(puVar6 + -0x180) = dVar8;
        *(undefined8 *)(puVar6 + -0x154) = *(undefined8 *)(puVar6 + -0x180);
      }
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c0942bc + -0x19c;
      (*(code *)PTR_Vec3_scale_8c0942c4)(puVar6 + DAT_8c0942c0 + -0x1a0,ar4 + 0x48,iVar5,iVar4);
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c0942c8 + -0x19c;
      (*(code *)PTR_Vec3_scale_8c0942c4)
                (puVar6 + DAT_8c0942d0 + -0x1a0,PTR_DAT_8c0942cc,iVar5,iVar4);
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c0942d4 + -0x19c;
      (*(code *)PTR_FUN_8c0942dc)(puVar6 + DAT_8c0942d8 + -0x1a0,puVar6 + -0x154,iVar5,iVar4);
      *(undefined **)(puVar6 + -0x1a0) = PTR_DAT_8c0942e0;
      *(undefined1 **)(puVar6 + -0x1a4) = puVar6 + DAT_8c0942e4 + -0x1a0;
      iVar5 = ar7;
      iVar4 = a7;
      (*(code *)PTR_FUN_8c0942f4)(ar4,ar5,ar7,a7);
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c0942f8 + -0x19c;
      (*(code *)PTR_Vec3_sub_8c0942a8)(puVar6 + DAT_8c0942e4 + -0x1a0,ar5,iVar5,iVar4);
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(puVar6 + -0x154),DAT_8c0942ec);
      }
      else {
        dVar11 = *(double *)(puVar6 + -0x154);
        in_xd0 = CONCAT44(DAT_8c0942f0,DAT_8c0942ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar11 / dVar11,0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44(1.0 - fVar7,fVar7);
      }
      else {
        dVar11 = (double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar6 + -0x16c) = (int)((ulonglong)dVar11 >> 0x20);
      }
      else {
        *(double *)(puVar6 + -0x16c) = dVar11;
      }
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c0942fc + -0x19c;
      (*(code *)PTR_Vec3_scale_8c0942c4)(puVar6 + DAT_8c094300 + -0x1a0,puVar6 + -0x16c,iVar5,iVar4)
      ;
      uVar3 = SUB84(dVar11,0);
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c094304 + -0x19c;
      (*(code *)PTR_Vec3_add_8c094310)
                (puVar6 + DAT_8c09430c + -0x1a0,puVar6 + DAT_8c094308 + -0x1a0,iVar5,iVar4);
      *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c094314 + -0x19c;
      (*(code *)PTR_FUN_8c0942dc)(puVar6 + DAT_8c09431c + -0x1a0,PTR_DAT_8c094318,iVar5,iVar4);
      (*(code *)PTR_Vec3_assign_8c0942b0)
                (ar4 + DAT_8c094320,puVar6 + DAT_8c094314 + -0x19c,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c094314 + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c094304 + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c0942fc + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c0942f8 + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c094324 + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c0942d4 + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c0942c8 + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_Vec3_dtor_8c0942b4)(puVar6 + DAT_8c0942bc + -0x19c,0xffffffff,iVar5,iVar4);
      (*(code *)PTR_FUN_8c094328)(ar4 + DAT_8c094320,ar5,iVar5,iVar4);
      *(undefined **)(puVar6 + -0x1a0) = PTR_DAT_8c0942e0;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0942e8,uVar3);
      }
      else {
        dVar8 = (double)CONCAT44(DAT_8c0942ec,DAT_8c0942e8);
      }
      (*(code *)PTR_FUN_8c09432c)(ar4,ar4 + DAT_8c094320,ar7,a7);
      (*(code *)PTR_Vec3_assign_8c0942b0)(puVar6 + DAT_8c094330 + -0x19c,ar4 + DAT_8c094320,ar7,a7);
    }
    else {
      uVar3 = (*(code *)PTR_Vec3_assign_8c094054)(ar4 + DAT_8c094050,ar6,iVar5,iVar4);
      *(undefined4 *)(puVar6 + -0x17c) = uVar3;
      (*(code *)PTR_Vec3_assign_8c094054)
                (puVar6 + DAT_8c094058 + -0x19c,*(undefined4 *)(puVar6 + -0x17c),iVar5,iVar4);
      ar7 = iVar5;
      a7 = iVar4;
    }
    a5_00 = puVar6 + DAT_8c094330 + -0x19c;
    (*(code *)PTR_FUN_8c094334)(ar5,a5_00,ar7,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar6 + -0x184) = (int)((ulonglong)dVar8 >> 0x20);
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(puVar6 + -0x184));
    }
    else {
      *(double *)(puVar6 + -0x184) = dVar8;
      in_xd0 = *(undefined8 *)(puVar6 + -0x184);
      dVar8 = *(double *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = (float)((ulonglong)dVar8 >> 0x20);
      dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) / fVar7);
    }
    else {
      dVar8 = dVar8 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x30) = SUB84(dVar8,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    (*(code *)PTR_FUN_8c094338)(ar4,a5_00,ar7,a7);
    a5 = DAT_8c09433c;
    (*(code *)PTR_FUN_8c094340)(ar4,DAT_8c09433c,ar7,a7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    iVar5 = ar7;
    iVar4 = a7;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c094390;
    goto LAB_8c093f74;
  }
  (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c094344)(ar4 + DAT_8c09431c,a5,iVar5,iVar4);
  (*(code *)PTR_FUN_8c094348)(ar4 + 0x14,a5,iVar5,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar6 + -0x188) = (int)((ulonglong)dVar8 >> 0x20);
    in_fr15 = *(float *)(puVar6 + -0x188);
    dVar11 = (double)CONCAT44(DAT_8c09434c,SUB84(dVar8,0));
  }
  else {
    *(double *)(puVar6 + -0x188) = dVar8;
    dVar11 = (double)CONCAT44(uRam8c094350,DAT_8c09434c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = in_fr15 < (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    bVar12 = (double)CONCAT44(in_fr14,in_fr15) < dVar11;
  }
  if (bVar12) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c09434c,SUB84(dVar11,0));
    }
    else {
      dVar8 = (double)CONCAT44(uRam8c094350,DAT_8c09434c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - in_fr15,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - (double)CONCAT44(in_fr14,in_fr15);
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c0944c8,SUB84(dVar11,0));
    }
    else {
      dVar8 = (double)CONCAT44(DAT_8c0944cc,DAT_8c0944c8);
    }
    if (in_FPSCR_PR == '\0') {
      bVar12 = (float)((ulonglong)dVar8 >> 0x20) < in_fr15;
    }
    else {
      bVar12 = dVar8 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar12) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0944c8,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)CONCAT44(DAT_8c0944cc,DAT_8c0944c8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - in_fr15,SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - (double)CONCAT44(in_fr14,in_fr15);
      }
    }
  }
  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + DAT_8c0944cc + -0x19c;
  (*(code *)PTR_FUN_8c0944d0)(ar4 + 0x14,a5,iVar5,iVar4);
  (*(code *)PTR_Vec3_assign_8c0944d8)(ar4 + DAT_8c0944d4,puVar6 + DAT_8c0944cc + -0x19c,iVar5,iVar4)
  ;
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + DAT_8c0944cc + -0x19c,0xffffffff,iVar5,iVar4);
LAB_8c094390:
  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -0x120;
  uVar3 = ar5;
  (*(code *)PTR_Vec3_sub_8c0944e4)(puVar6 + DAT_8c0944e0 + -0x1a0,ar5,iVar5,iVar4);
  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -0x130;
  (*(code *)PTR_Vec3_normalize_8c0944e8)(puVar6 + DAT_8c0944d4 + -0x1a0,uVar3,iVar5,iVar4);
  (*(code *)PTR_Vec3_ctor_copy_8c0944f0)(puVar6 + DAT_8c0944ec + -0x19c,puVar6 + -0x130,iVar5,iVar4)
  ;
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + -0x130,0xffffffff,iVar5,iVar4);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + -0x120,0xffffffff,iVar5,iVar4);
  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -0x140;
  (*(code *)PTR_FUN_8c0944f4)(ar4 + 0x14,uVar3,iVar5,iVar4);
  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -0x150;
  (*(code *)PTR_FUN_8c0944f4)(puVar6 + DAT_8c0944f8 + -0x1a0,uVar3,iVar5,iVar4);
  (*(code *)PTR_FUN_8c0944fc)(puVar6 + -0x140,puVar6 + -0x150,iVar5,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar6 + -0x18c) = (int)((ulonglong)dVar8 >> 0x20);
    uVar9 = CONCAT44(*(undefined4 *)(puVar6 + -0x18c),SUB84(dVar8,0));
    *(undefined4 *)(puVar6 + -0x158) = *(undefined4 *)(puVar6 + -0x18c);
  }
  else {
    *(double *)(puVar6 + -0x18c) = dVar8;
    uVar9 = *(undefined8 *)(puVar6 + -0x18c);
    *(undefined8 *)(puVar6 + -0x158) = uVar9;
  }
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + -0x150,0xffffffff,iVar5,iVar4);
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + -0x140,0xffffffff,iVar5,iVar4);
  uVar3 = ar5;
  uVar2 = (*(code *)PTR_FUN_8c094504)(ar4,puVar6 + DAT_8c094500 + -0x19c,ar5,iVar4);
  *(undefined4 *)(puVar6 + -400) = uVar2;
  iVar5 = *(int *)(puVar6 + -400);
  if (iVar5 == 0) {
    (*(code *)PTR_FUN_8c094508)(ar5,ar6,uVar3,iVar4);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar6 + -0x194) = (int)((ulonglong)uVar9 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar6 + -0x194) = uVar9;
    }
    (*(code *)PTR_Vec3_length_sq_8c09450c)(ar4 + 4,ar6,uVar3,iVar4);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar6 + -0x198) = (int)((ulonglong)uVar9 >> 0x20);
      dVar11 = (double)CONCAT44(*(undefined4 *)(puVar6 + -0x198),*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(undefined8 *)(puVar6 + -0x198) = uVar9;
      dVar11 = *(double *)(puVar6 + -0x198);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar11 + dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar9 = CONCAT44(*(undefined4 *)(puVar6 + -0x194),fVar7);
    }
    else {
      uVar9 = *(undefined8 *)(puVar6 + -0x194);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar9 < (float)((ulonglong)uVar9 >> 0x20)) {
      iVar5 = 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  *(int *)(puVar6 + -0x160) = iVar5;
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + DAT_8c0944ec + -0x19c,0xffffffff,uVar3,iVar4);
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + DAT_8c094510 + -0x19c,0xffffffff,uVar3,iVar4);
  (*(code *)PTR_Vec3_dtor_8c0944dc)(puVar6 + DAT_8c094500 + -0x19c,0xffffffff,uVar3,iVar4);
  return *(undefined4 *)(puVar6 + -0x160);
}



/* FUN_8c094514 @ 8c094514 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c094514(int ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int *a6;
  undefined4 unaff_r12;
  int iVar6;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  ulonglong in_dr0;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  undefined4 in_fr3;
  undefined8 in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  float fVar15;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar7 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar7 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar7 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar7 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar7 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar7 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar7 + -0x1c) = in_PR;
  iVar1 = -DAT_8c094574;
  a6 = *(int **)((int)puVar7 + DAT_8c094578 + iVar1 + -0x1c);
  piVar3 = ar5;
  piVar5 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c094580)
            ((undefined1 *)((int)puVar7 + DAT_8c09457c + iVar1 + -0x1c),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c094580)
            ((undefined1 *)((int)puVar7 + DAT_8c094584 + iVar1 + -0x1c),piVar3,ar6,piVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c094580)
            ((undefined1 *)((int)puVar7 + DAT_8c094588 + iVar1 + -0x1c),piVar3,ar6,piVar5);
  iVar6 = 1;
  piVar3 = (int *)(ar4 + 0x40);
  iVar2 = *piVar3;
  if (iVar2 == 0) {
LAB_8c09458c:
    uVar8 = (*(code *)PTR_FUN_8c0945f4)(ar4 + DAT_8c0945f0,0,ar6,piVar5);
    *(undefined4 *)((int)puVar7 + iVar1 + 0x48) = uVar8;
    if ((*(int *)((int)puVar7 + iVar1 + 0x48) != 1) && (*(int *)((int)puVar7 + iVar1 + 0x48) != 2))
    {
      *(undefined4 *)((int)puVar7 + iVar1 + 0x5c) = 1;
      (*(code *)PTR_Vec3_dtor_8c0945fc)
                ((undefined1 *)((int)puVar7 + DAT_8c0945f8 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      (*(code *)PTR_Vec3_dtor_8c0945fc)
                ((undefined1 *)((int)puVar7 + DAT_8c094600 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      (*(code *)PTR_Vec3_dtor_8c0945fc)
                ((undefined1 *)((int)puVar7 + DAT_8c094604 + iVar1 + -0x1c),0xffffffff,
                 PTR_Vec3_dtor_8c0945fc,piVar5);
      return *(undefined4 *)((int)puVar7 + iVar1 + 0x5c);
    }
    *(undefined4 *)(DAT_8c0948b0 + ar4) = 0;
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0948b4 + iVar1 + -0x1c);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(DAT_8c0948b8,(int)in_dr0);
    }
    else {
      uVar11 = CONCAT44(PTR_FUN_8c0948bc,DAT_8c0948b8);
    }
    piVar3 = a6;
    (*(code *)PTR_FUN_8c0948bc)(ar4,ar7,a6,piVar5);
    (*(code *)PTR_Vec3_assign_8c0948c4)
              (ar4 + DAT_8c0948c0,(undefined1 *)((int)puVar7 + DAT_8c0948b4 + iVar1 + -0x1c),piVar3,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c0948c8)
              ((undefined1 *)((int)puVar7 + DAT_8c0948b4 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5);
    *(undefined **)((int)puVar7 + iVar1 + -0x20) = PTR_DAT_8c0948cc;
    ar6 = ar7;
    piVar5 = a6;
    uVar8 = (*(code *)PTR_FUN_8c0948d4)(ar4,ar4 + DAT_8c0948c0,ar7,a6);
    *(undefined4 *)((int)puVar7 + iVar1 + 0x44) = uVar8;
    (*(code *)PTR_Vec3_assign_8c0948c4)
              (ar4 + DAT_8c0948c0,*(undefined4 *)((int)puVar7 + iVar1 + 0x44),ar6,piVar5);
    (**(code **)(DAT_8c0948d8 + *a6))(a6,ar4 + DAT_8c0948c0,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x40) = (int)((ulonglong)uVar11 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar7 + iVar1 + 0x40) = uVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0948e0,*(undefined4 *)((int)puVar7 + iVar1 + 0x40));
    }
    else {
      in_xd0 = *(undefined8 *)((int)puVar7 + iVar1 + 0x40);
      dVar12 = (double)CONCAT44(DAT_8c0948e4,DAT_8c0948e0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)dVar12 >> 0x20);
      dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0) + fVar9);
    }
    else {
      dVar12 = dVar12 + dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c0948dc) = SUB84(dVar12,0);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0948dc) = in_xd0;
    }
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0948e4 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_sub_8c0948e8)(ar4 + DAT_8c0948c0,ar5,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c0948c4)
              ((undefined1 *)((int)puVar7 + DAT_8c0948ec + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c0948e4 + iVar1 + -0x1c),ar6,piVar5);
    uVar8 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0948c8)
              ((undefined1 *)((int)puVar7 + DAT_8c0948e4 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_length_sq_8c0948f0)
              ((undefined1 *)((int)puVar7 + DAT_8c0948ec + iVar1 + -0x1c),uVar8,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x3c) = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined4 *)((int)puVar7 + iVar1 + 0x60) = *(undefined4 *)((int)puVar7 + iVar1 + 0x3c);
      uVar11 = CONCAT44(DAT_8c0948f4,*(undefined4 *)((int)puVar7 + iVar1 + 0x60));
    }
    else {
      *(double *)((int)puVar7 + iVar1 + 0x3c) = dVar12;
      *(undefined8 *)((int)puVar7 + iVar1 + 0x60) = *(undefined8 *)((int)puVar7 + iVar1 + 0x3c);
      in_xd0 = *(undefined8 *)((int)puVar7 + iVar1 + 0x60);
      uVar11 = CONCAT44(_DAT_8c0948f8,DAT_8c0948f4);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar11 >> 0x20) < (float)uVar11) {
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + _DAT_8c0948f8 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c094900)
                ((undefined1 *)((int)puVar7 + DAT_8c0948fc + iVar1 + -0x20),ar4 + 0x48,ar6,piVar5);
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c094904 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c094900)
                ((undefined1 *)((int)puVar7 + DAT_8c09490c + iVar1 + -0x20),PTR_DAT_8c094908,ar6,
                 piVar5);
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c094910 + iVar1 + -0x1c);
      (*(code *)PTR_FUN_8c09491c)
                ((undefined1 *)((int)puVar7 + DAT_8c094918 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar7 + DAT_8c094914 + iVar1 + -0x20),ar6,piVar5);
      *(undefined **)((int)puVar7 + iVar1 + -0x20) = PTR_DAT_8c0948cc;
      *(undefined1 **)((int)puVar7 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar7 + DAT_8c094920 + iVar1 + -0x20);
      piVar3 = ar7;
      piVar5 = a6;
      (*(code *)PTR_FUN_8c094930)(ar4,ar5,ar7,a6);
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c0948b0 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_sub_8c0948e8)
                ((undefined1 *)((int)puVar7 + DAT_8c094920 + iVar1 + -0x20),ar5,piVar3,piVar5);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar7 + iVar1 + 0x60),DAT_8c0948f4);
      }
      else {
        dVar12 = *(double *)((int)puVar7 + iVar1 + 0x60);
        in_xd0 = CONCAT44(_DAT_8c0948f8,DAT_8c0948f4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar12 / dVar12,0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(1.0 - fVar9,fVar9);
      }
      else {
        dVar12 = (double)CONCAT44(0x3f800000,fVar9) - (double)CONCAT44(0x3f800000,fVar9);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar7 + iVar1 + 0x54) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)((int)puVar7 + iVar1 + 0x54) = dVar12;
      }
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c094934 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c094900)
                ((undefined1 *)((int)puVar7 + DAT_8c0948c0 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar7 + iVar1 + 0x54),piVar3,piVar5);
      uVar8 = SUB84(dVar12,0);
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c094938 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_add_8c094944)
                ((undefined1 *)((int)puVar7 + DAT_8c094940 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar7 + DAT_8c09493c + iVar1 + -0x20),piVar3,piVar5);
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c094948 + iVar1 + -0x1c);
      (*(code *)PTR_FUN_8c09491c)
                ((undefined1 *)((int)puVar7 + DAT_8c094950 + iVar1 + -0x20),PTR_DAT_8c09494c,piVar3,
                 piVar5);
      (*(code *)PTR_Vec3_assign_8c0948c4)
                (ar4 + DAT_8c094954,(undefined1 *)((int)puVar7 + DAT_8c094948 + iVar1 + -0x1c),
                 piVar3,piVar5);
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + DAT_8c094948 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5
                );
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + DAT_8c094938 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5
                );
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + DAT_8c094934 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5
                );
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + DAT_8c0948b0 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5
                );
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + DAT_8c094958 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5
                );
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + DAT_8c094910 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5
                );
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + DAT_8c094904 + iVar1 + -0x1c),0xffffffff,piVar3,piVar5
                );
      (*(code *)PTR_Vec3_dtor_8c0948c8)
                ((undefined1 *)((int)puVar7 + _DAT_8c0948f8 + iVar1 + -0x1c),0xffffffff,piVar3,
                 piVar5);
      (*(code *)PTR_FUN_8c09495c)(ar4 + DAT_8c094954,ar5,PTR_FUN_8c09495c,piVar5);
      *(undefined **)((int)puVar7 + iVar1 + -0x20) = PTR_DAT_8c0948cc;
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(DAT_8c0948b8,uVar8);
      }
      else {
        uVar11 = CONCAT44(PTR_FUN_8c0948bc,DAT_8c0948b8);
      }
      ar6 = ar7;
      piVar5 = a6;
      (*(code *)PTR_FUN_8c0948d4)(ar4,ar4 + DAT_8c094954,ar7,a6);
      (*(code *)PTR_Vec3_assign_8c0948c4)
                ((undefined1 *)((int)puVar7 + DAT_8c094960 + iVar1 + -0x1c),ar4 + DAT_8c094954,ar6,
                 piVar5);
    }
    else {
      (*(code *)PTR_Vec3_assign_8c0949ec)
                ((undefined1 *)((int)puVar7 + DAT_8c0949e8 + iVar1 + -0x1c),ar4 + DAT_8c0949e4,ar6,
                 piVar5);
    }
    (*(code *)PTR_FUN_8c0949f0)
              (ar5,(undefined1 *)((int)puVar7 + DAT_8c0949e8 + iVar1 + -0x1c),ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x38) = (int)((ulonglong)uVar11 >> 0x20);
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),
                                *(undefined4 *)((int)puVar7 + iVar1 + 0x38));
    }
    else {
      *(undefined8 *)((int)puVar7 + iVar1 + 0x38) = uVar11;
      in_xd0 = *(undefined8 *)((int)puVar7 + iVar1 + 0x38);
      dVar12 = *(double *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 / dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar9;
      in_dr0 = CONCAT44(DAT_8c0949f4,fVar9);
      *(undefined4 *)(ar4 + 0x30) = DAT_8c0949f4;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
      in_dr0 = CONCAT44(PTR_FUN_8c0949f8,DAT_8c0949f4);
      *(ulonglong *)(ar4 + 0x30) = in_dr0;
    }
    (*(code *)PTR_FUN_8c0949f8)(ar4,ar4 + 0x24,ar6,piVar5);
    piVar3 = DAT_8c0949fc;
    (*(code *)PTR_FUN_8c094a00)(ar4,DAT_8c0949fc,ar6,piVar5);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar2 != 3) {
    if (iVar2 != 5) goto LAB_8c0954c6;
    goto LAB_8c09458c;
  }
  iVar2 = *(int *)(DAT_8c094a04 + ar4);
  if (iVar2 == 0) {
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c094a8c)
              (ar4 + DAT_8c094a84._4_4_,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c094a8c,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c094a90 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_sub_8c094a98)(ar4 + DAT_8c094a94,ar5,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c094aa0)
              ((undefined1 *)((int)puVar7 + DAT_8c094a9c + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c094a90 + iVar1 + -0x1c),ar6,piVar5);
    uVar8 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c094aa4)
              ((undefined1 *)((int)puVar7 + DAT_8c094a90 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_length_sq_8c094aa8)
              ((undefined1 *)((int)puVar7 + DAT_8c094a9c + iVar1 + -0x1c),uVar8,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x34) = (int)(in_dr0 >> 0x20);
      *(undefined4 *)((int)puVar7 + iVar1 + 0x60) = *(undefined4 *)((int)puVar7 + iVar1 + 0x34);
      uVar11 = CONCAT44(DAT_8c094aac,*(undefined4 *)((int)puVar7 + iVar1 + 0x60));
    }
    else {
      *(ulonglong *)((int)puVar7 + iVar1 + 0x34) = in_dr0;
      *(undefined8 *)((int)puVar7 + iVar1 + 0x60) = *(undefined8 *)((int)puVar7 + iVar1 + 0x34);
      in_xd0 = *(undefined8 *)((int)puVar7 + iVar1 + 0x60);
      uVar11 = CONCAT44(DAT_8c094ab0,DAT_8c094aac);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar11 <= (float)((ulonglong)uVar11 >> 0x20)) {
      (*(code *)PTR_Vec3_assign_8c094e54)
                ((undefined1 *)((int)puVar7 + DAT_8c094e50 + iVar1 + -0x1c),ar4 + DAT_8c094e4c,ar6,
                 piVar5);
    }
    else {
      (*(code *)PTR_Vec3_assign_8c094aa0)
                ((undefined1 *)((int)puVar7 + DAT_8c094ab4 + iVar1 + -0x1c),ar4 + DAT_8c094ab0,ar6,
                 piVar5);
    }
    (*(code *)PTR_FUN_8c094e58)(ar4 + DAT_8c094e4c,ar5,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x30) = (int)((ulonglong)uVar11 >> 0x20);
      dVar12 = (double)CONCAT44(DAT_8c094e5c,*(undefined4 *)((int)puVar7 + iVar1 + 0x30));
    }
    else {
      *(undefined8 *)((int)puVar7 + iVar1 + 0x30) = uVar11;
      in_xd0 = *(undefined8 *)((int)puVar7 + iVar1 + 0x30);
      dVar12 = (double)CONCAT44(DAT_8c094e60,DAT_8c094e5c);
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar12,0) <= (float)((ulonglong)dVar12 >> 0x20)) {
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c094e60 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_sub_8c094e64)(ar4 + DAT_8c094e4c,ar5,ar6,piVar5);
      (*(code *)PTR_FUN_8c094e68)
                (ar4 + 0x14,(undefined1 *)((int)puVar7 + DAT_8c094e60 + iVar1 + -0x1c),ar6,piVar5);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar7 + iVar1 + 0x2c) = (int)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(DAT_8c094e6c,*(undefined4 *)((int)puVar7 + iVar1 + 0x2c));
      }
      else {
        *(double *)((int)puVar7 + iVar1 + 0x2c) = dVar12;
        in_xd0 = *(undefined8 *)((int)puVar7 + iVar1 + 0x2c);
        dVar12 = (double)CONCAT44(PTR_Vec3_dtor_8c094e70,DAT_8c094e6c);
      }
      *(uint *)((int)puVar7 + iVar1 + 0x50) =
           (uint)(in_FPSCR_PR != '\0' || SUB84(dVar12,0) <= (float)((ulonglong)dVar12 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c094e70)
                ((undefined1 *)((int)puVar7 + DAT_8c094e60 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      if (*(int *)((int)puVar7 + iVar1 + 0x50) != 0) {
        (*(code *)PTR_FUN_8c094e58)
                  ((undefined1 *)((int)puVar7 + DAT_8c094e50 + iVar1 + -0x1c),ar5,ar6,piVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar7 + iVar1 + 0x28) = (int)((ulonglong)dVar12 >> 0x20);
        }
        else {
          *(double *)((int)puVar7 + iVar1 + 0x28) = dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c094e74) = *(undefined4 *)((int)puVar7 + iVar1 + 0x28);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c094e74) = *(undefined8 *)((int)puVar7 + iVar1 + 0x28);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c094e7c,*(undefined4 *)(ar4 + DAT_8c094e74));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + DAT_8c094e74);
          dVar12 = (double)CONCAT44(DAT_8c094e80,DAT_8c094e7c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 * dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar9);
        }
        else {
          dVar12 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 / dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c094e78) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c094e78) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar9 = *(float *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c094e78),fVar9);
        }
        else {
          dVar12 = *(double *)(ar4 + DAT_8c094e78);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar12 >> 0x20);
          dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0) / fVar9);
        }
        else {
          dVar12 = dVar12 / dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c094e80) = SUB84(dVar12,0);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c094e80) = in_xd0;
        }
        *(int *)((int)puVar7 + iVar1 + -4) = ar4;
        *(int *)(DAT_8c094e84 + *(int *)((int)puVar7 + iVar1 + -4)) =
             *(int *)(DAT_8c094e84 + *(int *)((int)puVar7 + iVar1 + -4)) + 1;
      }
    }
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c094e88 + iVar1 + -0x1c);
    piVar3 = ar5;
    (*(code *)PTR_Vec3_sub_8c094e64)
              ((undefined1 *)((int)puVar7 + DAT_8c094e8c + iVar1 + -0x20),ar5,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c094e90 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_normalize_8c094e98)
              ((undefined1 *)((int)puVar7 + DAT_8c094e94 + iVar1 + -0x20),piVar3,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c094e54)
              ((undefined1 *)((int)puVar7 + DAT_8c094e9c + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c094e90 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c094e70)
              ((undefined1 *)((int)puVar7 + DAT_8c094e90 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    uVar8 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c094e70)
              ((undefined1 *)((int)puVar7 + DAT_8c094e88 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c094ea0 + iVar1 + -0x1c);
    piVar5 = (int *)PTR_FUN_8c094ea4;
    (*(code *)PTR_FUN_8c094ea4)(ar4 + 0x14,uVar8,ar6,PTR_FUN_8c094ea4);
    puVar4 = (undefined1 *)((int)puVar7 + DAT_8c094ea8 + iVar1 + -0x1c);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) = puVar4;
    (*(code *)PTR_FUN_8c094ea4)
              ((undefined1 *)((int)puVar7 + DAT_8c094eac + iVar1 + -0x20),uVar8,puVar4,piVar5);
    (*(code *)PTR_FUN_8c094e68)
              ((undefined1 *)((int)puVar7 + DAT_8c094ea0 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c094ea8 + iVar1 + -0x1c),puVar4,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x24) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      *(double *)((int)puVar7 + iVar1 + 0x24) = dVar12;
    }
    (*(code *)PTR_Vec3_dtor_8c094e70)
              ((undefined1 *)((int)puVar7 + DAT_8c094ea8 + iVar1 + -0x1c),0xffffffff,puVar4,piVar5);
    (*(code *)PTR_Vec3_dtor_8c094e70)
              ((undefined1 *)((int)puVar7 + DAT_8c094ea0 + iVar1 + -0x1c),0xffffffff,puVar4,piVar5);
    puVar4 = (undefined1 *)((int)puVar7 + DAT_8c094e50 + iVar1 + -0x1c);
    ar6 = ar5;
    uVar8 = (*(code *)PTR_FUN_8c094eb0)(ar4,puVar4,ar5,piVar5);
    *(undefined4 *)((int)puVar7 + iVar1 + 0x20) = uVar8;
    if (*(int *)((int)puVar7 + iVar1 + 0x20) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar7 + DAT_8c094eb4 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_sub_8c094e64)(ar4 + DAT_8c094e4c,ar5,ar6,piVar5);
      (*(code *)PTR_Vec3_assign_8c094e54)
                ((undefined1 *)((int)puVar7 + DAT_8c094eb8 + iVar1 + -0x1c),
                 (undefined1 *)((int)puVar7 + DAT_8c094eb4 + iVar1 + -0x1c),ar6,piVar5);
      uVar8 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c094e70)
                ((undefined1 *)((int)puVar7 + DAT_8c094eb4 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      (*(code *)PTR_Vec3_length_sq_8c094ebc)
                ((undefined1 *)((int)puVar7 + DAT_8c094eb8 + iVar1 + -0x1c),uVar8,ar6,piVar5);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar7 + iVar1 + 0x1c) = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined4 *)((int)puVar7 + iVar1 + 0x60) = *(undefined4 *)((int)puVar7 + iVar1 + 0x1c);
        dVar12 = (double)CONCAT44(DAT_8c094e5c,*(undefined4 *)((int)puVar7 + iVar1 + 0x60));
      }
      else {
        *(double *)((int)puVar7 + iVar1 + 0x1c) = dVar12;
        *(undefined8 *)((int)puVar7 + iVar1 + 0x60) = *(undefined8 *)((int)puVar7 + iVar1 + 0x1c);
        dVar12 = (double)CONCAT44(DAT_8c094e60,DAT_8c094e5c);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar12 >> 0x20) < SUB84(dVar12,0)) {
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c094ec0 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_scale_8c094ec8)
                  ((undefined1 *)((int)puVar7 + DAT_8c094ec4 + iVar1 + -0x20),ar4 + 0x48,ar6,piVar5)
        ;
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c094ecc + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_scale_8c094ec8)
                  ((undefined1 *)((int)puVar7 + DAT_8c094ed4 + iVar1 + -0x20),PTR_DAT_8c094ed0,ar6,
                   piVar5);
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c094ed8 + iVar1 + -0x1c);
        (*(code *)PTR_FUN_8c094ee4)
                  ((undefined1 *)((int)puVar7 + DAT_8c094ee0 + iVar1 + -0x20),
                   (undefined1 *)((int)puVar7 + DAT_8c094edc + iVar1 + -0x20),
                   (undefined1 *)((int)puVar7 + DAT_8c094ed8 + iVar1 + -0x1c),piVar5);
        *(undefined **)((int)puVar7 + iVar1 + -0x20) = PTR_DAT_8c094ee8;
        *(undefined1 **)((int)puVar7 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar7 + DAT_8c094eec + iVar1 + -0x20);
        piVar3 = ar7;
        piVar5 = a6;
        (*(code *)PTR_FUN_8c094efc)(ar4,ar5,ar7,a6);
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c094f00 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_sub_8c094e64)
                  ((undefined1 *)((int)puVar7 + DAT_8c094eec + iVar1 + -0x20),ar5,piVar3,piVar5);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar7 + iVar1 + 0x60),DAT_8c094e5c);
        }
        else {
          dVar12 = *(double *)((int)puVar7 + iVar1 + 0x60);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 / dVar12,0);
        }
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44(1.0 - fVar9,fVar9);
        }
        else {
          dVar12 = (double)CONCAT44(0x3f800000,fVar9) - (double)CONCAT44(0x3f800000,fVar9);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar7 + iVar1 + 0x4c) = (int)((ulonglong)dVar12 >> 0x20);
        }
        else {
          *(double *)((int)puVar7 + iVar1 + 0x4c) = dVar12;
        }
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c094f04 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_scale_8c094ec8)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f08 + iVar1 + -0x20),
                   (undefined1 *)((int)puVar7 + iVar1 + 0x4c),piVar3,piVar5);
        uVar8 = SUB84(dVar12,0);
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c094f0c + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_add_8c094f18)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f14 + iVar1 + -0x20),
                   (undefined1 *)((int)puVar7 + DAT_8c094f10 + iVar1 + -0x20),piVar3,piVar5);
        *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar7 + DAT_8c094f1c + iVar1 + -0x1c);
        (*(code *)PTR_FUN_8c094ee4)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f24 + iVar1 + -0x20),PTR_DAT_8c094f20,
                   piVar3,piVar5);
        (*(code *)PTR_Vec3_assign_8c094e54)
                  (ar4 + DAT_8c094f28,(undefined1 *)((int)puVar7 + DAT_8c094f1c + iVar1 + -0x1c),
                   piVar3,piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f1c + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f0c + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f04 + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f00 + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f2c + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094ed8 + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094ecc + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_Vec3_dtor_8c094e70)
                  ((undefined1 *)((int)puVar7 + DAT_8c094ec0 + iVar1 + -0x1c),0xffffffff,piVar3,
                   piVar5);
        (*(code *)PTR_FUN_8c094f30)(ar4 + DAT_8c094f28,ar5,piVar3,piVar5);
        *(undefined **)((int)puVar7 + iVar1 + -0x20) = PTR_DAT_8c094ee8;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c094f6c,uVar8);
        }
        else {
          dVar12 = (double)CONCAT44(DAT_8c094f70,DAT_8c094f6c);
        }
        (*(code *)PTR_FUN_8c094f74)(ar4,ar4 + DAT_8c094f70,ar7,a6);
        puVar4 = (undefined1 *)(ar4 + DAT_8c094f70);
        (*(code *)PTR_Vec3_assign_8c094f7c)
                  ((undefined1 *)((int)puVar7 + DAT_8c094f78 + iVar1 + -0x1c),puVar4,ar7,a6);
        ar6 = ar7;
        piVar5 = a6;
      }
      else {
        puVar4 = (undefined1 *)(ar4 + DAT_8c094fb8);
        (*(code *)PTR_Vec3_assign_8c094fc0)
                  ((undefined1 *)((int)puVar7 + DAT_8c094fbc + iVar1 + -0x1c),puVar4,ar6,piVar5);
      }
    }
    (*(code *)PTR_FUN_8c094fc4)(ar4 + 0x14,puVar4,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x18) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      *(double *)((int)puVar7 + iVar1 + 0x18) = dVar12;
    }
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c095014 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c095018)
              (ar4 + 0x14,(undefined1 *)((int)puVar7 + DAT_8c095014 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c095020)
              (ar4 + DAT_8c09501c,(undefined1 *)((int)puVar7 + DAT_8c095014 + iVar1 + -0x1c),ar6,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c095024)
              ((undefined1 *)((int)puVar7 + DAT_8c095014 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  }
  else if (iVar2 == 1) {
    (*(code *)PTR_Vec3_assign_8c0951b0)
              ((undefined1 *)((int)puVar7 + DAT_8c0951ac + iVar1 + -0x1c),ar4 + DAT_8c0951a8,ar6,
               piVar5);
    uVar8 = (undefined4)in_dr0;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0951bc)
              (ar4 + DAT_8c0951b4._4_4_,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0951bc,ar6,piVar5);
    *(int *)((int)puVar7 + iVar1 + -8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar8 = *(undefined4 *)(*(int *)((int)puVar7 + iVar1 + -8) + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar7 + iVar1 + -8) + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0951c0),uVar8);
    }
    else {
      dVar12 = *(double *)(ar4 + DAT_8c0951c0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 - dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar7 + iVar1 + -8) + 0x28) = fVar9;
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),in_fr3);
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar7 + iVar1 + -8) + 0x28) = in_xd0;
      dVar12 = *(double *)(ar4 + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(DAT_8c0951c4,*(undefined4 *)(ar4 + DAT_8c0951c0));
    }
    else {
      dVar13 = (double)CONCAT44(DAT_8c0951c8,DAT_8c0951c4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar13 * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44((undefined4)DAT_8c0951b4,fVar9);
    }
    else {
      dVar13 = (double)CONCAT44(DAT_8c0951b4._4_4_,(undefined4)DAT_8c0951b4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = (float)((ulonglong)dVar13 >> 0x20);
      fVar9 = SUB84(dVar13,0) / fVar15;
      dVar13 = (double)CONCAT44(fVar15,fVar9);
      bVar16 = (float)((ulonglong)dVar12 >> 0x20) < fVar9;
    }
    else {
      dVar13 = dVar13 / dVar13;
      bVar16 = dVar12 < dVar13;
    }
    if (bVar16) {
      *(int *)((int)puVar7 + iVar1 + -0xc) = ar4;
      *(int *)(DAT_8c0951c8 + *(int *)((int)puVar7 + iVar1 + -0xc)) =
           *(int *)(DAT_8c0951c8 + *(int *)((int)puVar7 + iVar1 + -0xc)) + 1;
      piVar5 = (int *)0x0;
      ar6 = (int *)0x0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0951d0)(ar4 + DAT_8c0951b4._4_4_,3,0,0);
    }
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0951d4 + iVar1 + -0x1c);
    piVar3 = ar5;
    (*(code *)PTR_Vec3_sub_8c0951dc)
              ((undefined1 *)((int)puVar7 + DAT_8c0951d8 + iVar1 + -0x20),ar5,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0951e0 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_normalize_8c0951e8)
              ((undefined1 *)((int)puVar7 + DAT_8c0951e4 + iVar1 + -0x20),piVar3,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c0951b0)
              ((undefined1 *)((int)puVar7 + DAT_8c0951ec + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c0951e0 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c0951f0)
              ((undefined1 *)((int)puVar7 + DAT_8c0951e0 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c0951f0)
              ((undefined1 *)((int)puVar7 + DAT_8c0951d4 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0951f4 + iVar1 + -0x1c);
    iVar2 = ar4 + 0x14;
    (*(code *)PTR_FUN_8c0951f8)(iVar2,iVar2,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0951fc + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c0951f8)
              ((undefined1 *)((int)puVar7 + DAT_8c095200 + iVar1 + -0x20),iVar2,ar6,piVar5);
    (*(code *)PTR_FUN_8c095204)
              ((undefined1 *)((int)puVar7 + DAT_8c0951f4 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c0951fc + iVar1 + -0x1c),ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      *(double *)((int)puVar7 + iVar1 + 0x14) = dVar13;
    }
    (*(code *)PTR_Vec3_dtor_8c0951f0)
              ((undefined1 *)((int)puVar7 + DAT_8c0951fc + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c0951f0)
              ((undefined1 *)((int)puVar7 + DAT_8c0951f4 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    uVar8 = (*(code *)PTR_FUN_8c095208)
                      (ar4,(undefined1 *)((int)puVar7 + DAT_8c0951ac + iVar1 + -0x1c),ar5,piVar5);
    *(undefined4 *)((int)puVar7 + iVar1 + 0x10) = uVar8;
    iVar6 = *(int *)((int)puVar7 + iVar1 + 0x10);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c09520c + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c0951f8)(ar4 + 0x14,uVar8,ar5,piVar5);
    (*(code *)PTR_Vec3_assign_8c0951b0)
              (ar4 + DAT_8c095210,(undefined1 *)((int)puVar7 + DAT_8c09520c + iVar1 + -0x1c),ar5,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c0951f0)
              ((undefined1 *)((int)puVar7 + DAT_8c09520c + iVar1 + -0x1c),0xffffffff,ar5,piVar5);
    ar6 = ar5;
  }
  else if (iVar2 == 2) {
    iVar2 = ar4 + DAT_8c0953d8;
    (*(code *)PTR_Vec3_assign_8c0953e0)
              ((undefined1 *)((int)puVar7 + DAT_8c0953dc + iVar1 + -0x1c),iVar2,ar6,piVar5);
    uVar8 = (undefined4)in_dr0;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0953ec)
              (ar4 + DAT_8c0953e4._4_4_,iVar2,ar6,piVar5);
    uVar14 = CONCAT44(0x3f800000,uVar8);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(ulonglong *)(ar4 + 0x48) = uVar14;
    }
    *(int *)((int)puVar7 + iVar1 + -0x10) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = (ulonglong)*(uint *)(*(int *)((int)puVar7 + iVar1 + -0x10) + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar7 + iVar1 + -0x10) + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0953f0),(int)uVar14);
    }
    else {
      dVar12 = *(double *)(ar4 + DAT_8c0953f0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 - dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar7 + iVar1 + -0x10) + 0x28) = fVar9;
      uVar11 = CONCAT44(DAT_8c0953f4,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar7 + iVar1 + -0x10) + 0x28) = in_xd0;
      uVar11 = CONCAT44(DAT_8c0953f8,DAT_8c0953f4);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(DAT_8c0953f4,(float)uVar11);
        *(undefined4 *)(ar4 + 0x28) = DAT_8c0953f4;
      }
      else {
        uVar11 = CONCAT44(DAT_8c0953f8,DAT_8c0953f4);
        *(undefined8 *)(ar4 + 0x28) = uVar11;
      }
    }
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0953f8 + iVar1 + -0x1c);
    piVar3 = ar5;
    (*(code *)PTR_Vec3_sub_8c095400)
              ((undefined1 *)((int)puVar7 + DAT_8c0953fc + iVar1 + -0x20),ar5,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c095404 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_normalize_8c09540c)
              ((undefined1 *)((int)puVar7 + DAT_8c095408 + iVar1 + -0x20),piVar3,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c0953e0)
              ((undefined1 *)((int)puVar7 + DAT_8c095410 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c095404 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c095414)
              ((undefined1 *)((int)puVar7 + DAT_8c095404 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    uVar8 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c095414)
              ((undefined1 *)((int)puVar7 + DAT_8c0953f8 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c0953e4._4_4_ + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c095418)(ar4 + 0x14,uVar8,ar6,piVar5);
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c09541c + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c095418)
              ((undefined1 *)((int)puVar7 + DAT_8c095420 + iVar1 + -0x20),uVar8,ar6,piVar5);
    (*(code *)PTR_FUN_8c095424)
              ((undefined1 *)((int)puVar7 + DAT_8c0953e4._4_4_ + iVar1 + -0x1c),
               (undefined1 *)((int)puVar7 + DAT_8c09541c + iVar1 + -0x1c),ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar7 + iVar1 + 0xc) = (int)((ulonglong)uVar11 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar7 + iVar1 + 0xc) = uVar11;
    }
    (*(code *)PTR_Vec3_dtor_8c095414)
              ((undefined1 *)((int)puVar7 + DAT_8c09541c + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    uVar10 = (uint)uVar11;
    (*(code *)PTR_Vec3_dtor_8c095414)
              ((undefined1 *)((int)puVar7 + DAT_8c0953e4._4_4_ + iVar1 + -0x1c),0xffffffff,ar6,
               piVar5);
    uVar8 = (*(code *)PTR_FUN_8c095428)
                      (ar4,(undefined1 *)((int)puVar7 + DAT_8c0953dc + iVar1 + -0x1c),ar5,piVar5);
    *(undefined4 *)((int)puVar7 + iVar1 + 8) = uVar8;
    iVar6 = *(int *)((int)puVar7 + iVar1 + 8);
    ar6 = ar5;
    if (iVar6 == 0) {
      iVar6 = 1;
      *(undefined4 *)(ar4 + 0x40) = 3;
      piVar5 = (int *)0x0;
      ar6 = (int *)0x0;
      iVar2 = ar4 + DAT_8c0953e4._4_4_;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c095430)(iVar2,1,0,0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar10;
      }
      uVar8 = (*(code *)PTR_rand_8c095434)(iVar2,PTR_rand_8c095434,ar6,piVar5);
      *(undefined4 *)((int)puVar7 + iVar1 + 4) = uVar8;
      uVar8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c095438)
                        (*(undefined4 *)((int)puVar7 + iVar1 + 4),10,ar6,piVar5);
      *(undefined4 *)((int)puVar7 + iVar1 + -0x14) = uVar8;
      *(int *)(DAT_8c09543c + ar4) = *(int *)((int)puVar7 + iVar1 + -0x14) + 0xf;
      *(int *)((int)puVar7 + iVar1 + -0x18) = ar4;
      *(int *)(DAT_8c095440 + *(int *)((int)puVar7 + iVar1 + -0x18)) =
           *(int *)(DAT_8c095440 + *(int *)((int)puVar7 + iVar1 + -0x18)) + 1;
    }
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c095444 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c095418)(ar4 + 0x14,ar4 + 0x14,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c0953e0)
              (ar4 + DAT_8c095448,(undefined1 *)((int)puVar7 + DAT_8c095444 + iVar1 + -0x1c),ar6,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c095414)
              ((undefined1 *)((int)puVar7 + DAT_8c095444 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  }
  else if (iVar2 == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    uVar8 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c09551c)
                      (ar4 + DAT_8c095518,piVar3,ar6,piVar5);
    piVar3 = DAT_8c095520;
    *(undefined4 *)((int)puVar7 + iVar1) = uVar8;
    if (*(int *)((int)puVar7 + iVar1) == 1) {
      *(int *)((int)puVar7 + iVar1 + -0x1c) = ar4;
      *(int *)((int)DAT_8c095520 + *(int *)((int)puVar7 + iVar1 + -0x1c)) =
           *(int *)((int)DAT_8c095520 + *(int *)((int)puVar7 + iVar1 + -0x1c)) + -1;
      ar6 = piVar3;
      if (*(int *)((int)DAT_8c095520 + ar4) < 1) {
        *(undefined4 *)(DAT_8c095524 + ar4) = 3;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    *(undefined1 **)((int)puVar7 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar7 + DAT_8c095528 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c09552c)
              (ar4 + 0x14,(undefined1 *)((int)puVar7 + DAT_8c095528 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c095530)
              (ar4 + DAT_8c095528,(undefined1 *)((int)puVar7 + DAT_8c095528 + iVar1 + -0x1c),ar6,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c095534)
              ((undefined1 *)((int)puVar7 + DAT_8c095528 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  }
LAB_8c0954c6:
  *(int *)((int)puVar7 + iVar1 + 0x58) = iVar6;
  (*(code *)PTR_Vec3_dtor_8c095534)
            ((undefined1 *)((int)puVar7 + DAT_8c095538 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  (*(code *)PTR_Vec3_dtor_8c095534)
            ((undefined1 *)((int)puVar7 + DAT_8c09553c + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  (*(code *)PTR_Vec3_dtor_8c095534)
            ((undefined1 *)((int)puVar7 + DAT_8c095540 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  return *(undefined4 *)((int)puVar7 + iVar1 + 0x58);
}



/* FUN_8c095548 @ 8c095548 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c096580) */
/* WARNING: Switch with 1 destination removed at 0x8c0955aa */
/* WARNING: Switch with 1 destination removed at 0x8c09562a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c095548(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined *a6;
  undefined4 uVar6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined *a6_00;
  undefined4 unaff_r11;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar9;
  float fVar10;
  uint uVar11;
  ulonglong in_dr0;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined4 in_fr3;
  undefined8 in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  float fVar16;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar9 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar9 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar9 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar9 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar9 + -0xc) = 1;
  *(undefined4 *)((int)puVar9 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar9 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar9 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar9 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar9 + -0x20) = in_PR;
  iVar1 = -DAT_8c0955b4;
  *(undefined4 *)((int)puVar9 + iVar1 + -0x20) = ar6;
  a6_00 = *(undefined **)((int)puVar9 + DAT_8c0955b8 + iVar1 + -0x20);
  uVar7 = *(undefined4 *)((int)puVar9 + DAT_8c0955bc + iVar1 + -0x20);
  puVar3 = PTR_Vec3_ctor_zero_8c0955c4;
  uVar6 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c0955c4)
            ((undefined1 *)((int)puVar9 + DAT_8c0955c0 + iVar1 + -0x20),PTR_Vec3_ctor_zero_8c0955c4,
             ar6,ar7);
  a6 = PTR_Vec3_ctor_zero_8c0955c4;
  (*(code *)PTR_Vec3_ctor_zero_8c0955c4)
            ((undefined1 *)((int)puVar9 + DAT_8c0955c8 + iVar1 + -0x20),puVar3,
             PTR_Vec3_ctor_zero_8c0955c4,uVar6);
  (*(code *)PTR_Vec3_ctor_zero_8c0955c4)
            ((undefined1 *)((int)puVar9 + DAT_8c0955cc + iVar1 + -0x20),puVar3,a6,uVar6);
  iVar8 = 1;
  iVar2 = *(int *)(ar4 + 0x40);
  if (iVar2 == 0) {
LAB_8c0955d0:
    uVar4 = (*(code *)PTR_FUN_8c095638)(ar4 + DAT_8c095634,0,a6,uVar6);
    *(undefined4 *)((int)puVar9 + iVar1 + 0x50) = uVar4;
    if ((*(int *)((int)puVar9 + iVar1 + 0x50) != 1) && (*(int *)((int)puVar9 + iVar1 + 0x50) != 2))
    {
      *(undefined4 *)((int)puVar9 + DAT_8c09563c + iVar1 + -0x20) = 1;
      (*(code *)PTR_Vec3_dtor_8c095644)
                ((undefined1 *)((int)puVar9 + DAT_8c095640 + iVar1 + -0x20),0xffffffff,a6,uVar6);
      (*(code *)PTR_Vec3_dtor_8c095644)
                ((undefined1 *)((int)puVar9 + DAT_8c095648 + iVar1 + -0x20),0xffffffff,a6,uVar6);
      (*(code *)PTR_Vec3_dtor_8c095644)
                ((undefined1 *)((int)puVar9 + DAT_8c09564c + iVar1 + -0x20),0xffffffff,a6,uVar6);
      return *(undefined4 *)((int)puVar9 + DAT_8c09563c + iVar1 + -0x20);
    }
    *(undefined4 *)(DAT_8c095880 + ar4) = 0;
    (*(code *)PTR_Vec3_assign_8c095888)
              (ar4 + DAT_8c095884,*(undefined4 *)((int)puVar9 + iVar1 + -0x20),a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c09588c + iVar1 + -0x20);
    (*(code *)PTR_Vec3_sub_8c095890)(ar4 + DAT_8c095884,ar5,a6,uVar6);
    (*(code *)PTR_Vec3_assign_8c095888)
              ((undefined1 *)((int)puVar9 + DAT_8c095894 + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c09588c + iVar1 + -0x20),a6,uVar6);
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c095898)
              ((undefined1 *)((int)puVar9 + DAT_8c09588c + iVar1 + -0x20),0xffffffff,a6,uVar6);
    (*(code *)PTR_Vec3_length_sq_8c09589c)
              ((undefined1 *)((int)puVar9 + DAT_8c095894 + iVar1 + -0x20),uVar4,a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x4c) = (int)(in_dr0 >> 0x20);
      *(undefined4 *)((int)puVar9 + DAT_8c0958a0 + iVar1 + -0x20) =
           *(undefined4 *)((int)puVar9 + iVar1 + 0x4c);
      uVar12 = CONCAT44(DAT_8c0958a4,*(undefined4 *)((int)puVar9 + DAT_8c0958a0 + iVar1 + -0x20));
    }
    else {
      *(ulonglong *)((int)puVar9 + iVar1 + 0x4c) = in_dr0;
      *(undefined8 *)((int)puVar9 + DAT_8c0958a0 + iVar1 + -0x20) =
           *(undefined8 *)((int)puVar9 + iVar1 + 0x4c);
      in_xd0 = *(undefined8 *)((int)puVar9 + DAT_8c0958a0 + iVar1 + -0x20);
      uVar12 = CONCAT44(_DAT_8c0958a8,DAT_8c0958a4);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar12 >> 0x20) < (float)uVar12) {
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + _DAT_8c0958a8 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c0958b0)
                ((undefined1 *)((int)puVar9 + DAT_8c0958ac + iVar1 + -0x24),ar4 + 0x48,a6,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0958b4 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c0958b0)
                ((undefined1 *)((int)puVar9 + DAT_8c0958bc + iVar1 + -0x24),PTR_DAT_8c0958b8,a6,
                 uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0958c0 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0958cc)
                ((undefined1 *)((int)puVar9 + DAT_8c0958c8 + iVar1 + -0x24),
                 (undefined1 *)((int)puVar9 + DAT_8c0958c4 + iVar1 + -0x24),a6,uVar6);
      *(undefined **)((int)puVar9 + iVar1 + -0x24) = PTR_DAT_8c0958d0;
      *(undefined1 **)((int)puVar9 + iVar1 + -0x28) =
           (undefined1 *)((int)puVar9 + DAT_8c0958d4 + iVar1 + -0x24);
      puVar3 = a6_00;
      uVar6 = uVar7;
      (*(code *)PTR_FUN_8c0958e8)(ar4,ar5,a6_00,uVar7);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0958ec + iVar1 + -0x20);
      (*(code *)PTR_Vec3_sub_8c095890)
                ((undefined1 *)((int)puVar9 + DAT_8c0958d4 + iVar1 + -0x24),ar5,puVar3,uVar6);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar9 + DAT_8c0958a0 + iVar1 + -0x20),
                                  DAT_8c0958a4);
      }
      else {
        dVar13 = *(double *)((int)puVar9 + DAT_8c0958a0 + iVar1 + -0x20);
        in_xd0 = CONCAT44(_DAT_8c0958a8,DAT_8c0958a4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44(1.0 - fVar10,fVar10);
      }
      else {
        dVar13 = (double)CONCAT44(0x3f800000,fVar10) - (double)CONCAT44(0x3f800000,fVar10);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + DAT_8c0958f0 + iVar1 + -0x20) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)puVar9 + DAT_8c0958f0 + iVar1 + -0x20) = dVar13;
      }
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0958f4 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c0958b0)
                ((undefined1 *)((int)puVar9 + DAT_8c0958fc + iVar1 + -0x24),
                 (undefined1 *)((int)puVar9 + DAT_8c0958f8 + iVar1 + -0x24),puVar3,uVar6);
      uVar4 = SUB84(dVar13,0);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c095900 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_add_8c09590c)
                ((undefined1 *)((int)puVar9 + DAT_8c095908 + iVar1 + -0x24),
                 (undefined1 *)((int)puVar9 + DAT_8c095904 + iVar1 + -0x24),puVar3,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c095910 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0958cc)
                ((undefined1 *)((int)puVar9 + DAT_8c095918 + iVar1 + -0x24),PTR_DAT_8c095914,puVar3,
                 uVar6);
      (*(code *)PTR_Vec3_assign_8c095888)
                (ar4 + DAT_8c09591c,(undefined1 *)((int)puVar9 + DAT_8c095910 + iVar1 + -0x20),
                 puVar3,uVar6);
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + DAT_8c095910 + iVar1 + -0x20),0xffffffff,puVar3,uVar6)
      ;
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + DAT_8c095900 + iVar1 + -0x20),0xffffffff,puVar3,uVar6)
      ;
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + DAT_8c0958f4 + iVar1 + -0x20),0xffffffff,puVar3,uVar6)
      ;
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + DAT_8c0958ec + iVar1 + -0x20),0xffffffff,puVar3,uVar6)
      ;
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + DAT_8c095920 + iVar1 + -0x20),0xffffffff,puVar3,uVar6)
      ;
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + DAT_8c0958c0 + iVar1 + -0x20),0xffffffff,puVar3,uVar6)
      ;
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + DAT_8c0958b4 + iVar1 + -0x20),0xffffffff,puVar3,uVar6)
      ;
      (*(code *)PTR_Vec3_dtor_8c095898)
                ((undefined1 *)((int)puVar9 + _DAT_8c0958a8 + iVar1 + -0x20),0xffffffff,puVar3,uVar6
                );
      (*(code *)PTR_FUN_8c095924)(ar4 + DAT_8c09591c,ar5,puVar3,uVar6);
      *(undefined **)((int)puVar9 + iVar1 + -0x24) = PTR_DAT_8c0958d0;
      if (in_FPSCR_SZ == '\0') {
        uVar12 = CONCAT44(DAT_8c0958d8,uVar4);
      }
      else {
        uVar12 = CONCAT44(DAT_8c0958dc,DAT_8c0958d8);
      }
      a6 = a6_00;
      uVar6 = uVar7;
      (*(code *)PTR_FUN_8c095928)(ar4,ar4 + DAT_8c09591c,a6_00,uVar7);
      (*(code *)PTR_Vec3_assign_8c095888)
                ((undefined1 *)((int)puVar9 + DAT_8c09592c + iVar1 + -0x20),ar4 + DAT_8c09591c,a6,
                 uVar6);
    }
    else {
      (*(code *)PTR_Vec3_assign_8c0959bc)
                ((undefined1 *)((int)puVar9 + DAT_8c0959b8 + iVar1 + -0x20),ar4 + DAT_8c0959b4,a6,
                 uVar6);
    }
    puVar5 = (undefined1 *)((int)puVar9 + DAT_8c0959b8 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c0959c0)(ar5,puVar5,a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x48) = (int)((ulonglong)uVar12 >> 0x20);
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),
                                *(undefined4 *)((int)puVar9 + iVar1 + 0x48));
    }
    else {
      *(undefined8 *)((int)puVar9 + iVar1 + 0x48) = uVar12;
      in_xd0 = *(undefined8 *)((int)puVar9 + iVar1 + 0x48);
      dVar13 = *(double *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar13 / dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar10;
      in_dr0 = CONCAT44(DAT_8c0959c4,fVar10);
      *(undefined4 *)(ar4 + 0x30) = DAT_8c0959c4;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
      in_dr0 = CONCAT44(PTR_FUN_8c0959c8,DAT_8c0959c4);
      *(ulonglong *)(ar4 + 0x30) = in_dr0;
    }
    (*(code *)PTR_FUN_8c0959c8)(ar4,puVar5,a6,uVar6);
    puVar3 = DAT_8c0959cc;
    (*(code *)PTR_FUN_8c0959d0)(ar4,DAT_8c0959cc,a6,uVar6);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar2 != 3) {
    if (iVar2 != 5) goto LAB_8c096760;
    goto LAB_8c0955d0;
  }
  iVar2 = *(int *)(DAT_8c0959d4 + ar4);
  if (iVar2 == 0) {
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c095a5c)
              (ar4 + DAT_8c095a54._4_4_,puVar3,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c095a60 + iVar1 + -0x20);
    (*(code *)PTR_Vec3_sub_8c095a68)(ar4 + DAT_8c095a64,ar5,a6,uVar6);
    (*(code *)PTR_Vec3_assign_8c095a70)
              ((undefined1 *)((int)puVar9 + DAT_8c095a6c + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c095a60 + iVar1 + -0x20),a6,uVar6);
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c095a74)
              ((undefined1 *)((int)puVar9 + DAT_8c095a60 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    (*(code *)PTR_Vec3_length_sq_8c095a78)
              ((undefined1 *)((int)puVar9 + DAT_8c095a6c + iVar1 + -0x20),uVar4,a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x44) = (int)(in_dr0 >> 0x20);
      *(undefined4 *)((int)puVar9 + DAT_8c095a7c + iVar1 + -0x20) =
           *(undefined4 *)((int)puVar9 + iVar1 + 0x44);
      uVar12 = CONCAT44(DAT_8c095a80,*(undefined4 *)((int)puVar9 + DAT_8c095a7c + iVar1 + -0x20));
    }
    else {
      *(ulonglong *)((int)puVar9 + iVar1 + 0x44) = in_dr0;
      *(undefined8 *)((int)puVar9 + DAT_8c095a7c + iVar1 + -0x20) =
           *(undefined8 *)((int)puVar9 + iVar1 + 0x44);
      in_xd0 = *(undefined8 *)((int)puVar9 + DAT_8c095a7c + iVar1 + -0x20);
      uVar12 = CONCAT44(DAT_8c095a84,DAT_8c095a80);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar12 <= (float)((ulonglong)uVar12 >> 0x20)) {
      (*(code *)PTR_Vec3_assign_8c095e28)
                ((undefined1 *)((int)puVar9 + DAT_8c095e24 + iVar1 + -0x20),ar4 + DAT_8c095e20,a6,
                 uVar6);
    }
    else {
      (*(code *)PTR_Vec3_assign_8c095a70)
                ((undefined1 *)((int)puVar9 + DAT_8c095a88 + iVar1 + -0x20),ar4 + DAT_8c095a84,a6,
                 uVar6);
    }
    (*(code *)PTR_FUN_8c095e2c)(ar4 + DAT_8c095e20,ar5,a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x40) = (int)((ulonglong)uVar12 >> 0x20);
      dVar13 = (double)CONCAT44(DAT_8c095e30,*(undefined4 *)((int)puVar9 + iVar1 + 0x40));
    }
    else {
      *(undefined8 *)((int)puVar9 + iVar1 + 0x40) = uVar12;
      in_xd0 = *(undefined8 *)((int)puVar9 + iVar1 + 0x40);
      dVar13 = (double)CONCAT44(DAT_8c095e34,DAT_8c095e30);
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar13,0) <= (float)((ulonglong)dVar13 >> 0x20)) {
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c095e34 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_sub_8c095e38)(ar4 + DAT_8c095e20,ar5,a6,uVar6);
      (*(code *)PTR_FUN_8c095e3c)
                (ar4 + 0x14,(undefined1 *)((int)puVar9 + DAT_8c095e34 + iVar1 + -0x20),a6,uVar6);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + iVar1 + 0x3c) = (int)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(DAT_8c095e40,*(undefined4 *)((int)puVar9 + iVar1 + 0x3c));
      }
      else {
        *(double *)((int)puVar9 + iVar1 + 0x3c) = dVar13;
        in_xd0 = *(undefined8 *)((int)puVar9 + iVar1 + 0x3c);
        dVar13 = (double)CONCAT44(DAT_8c095e44,DAT_8c095e40);
      }
      *(uint *)((int)puVar9 + DAT_8c095e44 + iVar1 + -0x20) =
           (uint)(in_FPSCR_PR != '\0' || SUB84(dVar13,0) <= (float)((ulonglong)dVar13 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c095e48)
                ((undefined1 *)((int)puVar9 + DAT_8c095e34 + iVar1 + -0x20),0xffffffff,a6,uVar6);
      if (*(int *)((int)puVar9 + DAT_8c095e44 + iVar1 + -0x20) != 0) {
        (*(code *)PTR_FUN_8c095e2c)
                  ((undefined1 *)((int)puVar9 + DAT_8c095e24 + iVar1 + -0x20),ar5,a6,uVar6);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + iVar1 + 0x38) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar9 + iVar1 + 0x38) = dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c095e4c) = *(undefined4 *)((int)puVar9 + iVar1 + 0x38);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c095e4c) = *(undefined8 *)((int)puVar9 + iVar1 + 0x38);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c095e54,*(undefined4 *)(ar4 + DAT_8c095e4c));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + DAT_8c095e4c);
          dVar13 = (double)CONCAT44(DAT_8c095e58,DAT_8c095e54);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar13 * dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar10);
        }
        else {
          dVar13 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c095e50) = fVar10;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c095e50) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar10 = *(float *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c095e50),fVar10);
        }
        else {
          dVar13 = *(double *)(ar4 + DAT_8c095e50);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar10,SUB84(dVar13,0) / fVar10);
        }
        else {
          dVar13 = dVar13 / dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c095e58) = SUB84(dVar13,0);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c095e58) = in_xd0;
        }
        *(int *)((int)puVar9 + iVar1 + 4) = ar4;
        *(int *)(DAT_8c095e5c + *(int *)((int)puVar9 + iVar1 + 4)) =
             *(int *)(DAT_8c095e5c + *(int *)((int)puVar9 + iVar1 + 4)) + 1;
      }
    }
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c095e60 + iVar1 + -0x20);
    puVar3 = ar5;
    (*(code *)PTR_Vec3_sub_8c095e38)
              ((undefined1 *)((int)puVar9 + DAT_8c095e64 + iVar1 + -0x24),ar5,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c095e50 + iVar1 + -0x20);
    (*(code *)PTR_Vec3_normalize_8c095e6c)
              ((undefined1 *)((int)puVar9 + DAT_8c095e68 + iVar1 + -0x24),puVar3,a6,uVar6);
    (*(code *)PTR_Vec3_assign_8c095e28)
              ((undefined1 *)((int)puVar9 + DAT_8c095e70 + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c095e50 + iVar1 + -0x20),a6,uVar6);
    (*(code *)PTR_Vec3_dtor_8c095e48)
              ((undefined1 *)((int)puVar9 + DAT_8c095e50 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c095e48)
              ((undefined1 *)((int)puVar9 + DAT_8c095e60 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c095e74 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c095e78)(ar4 + 0x14,uVar4,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c095e7c + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c095e78)
              ((undefined1 *)((int)puVar9 + DAT_8c095e80 + iVar1 + -0x24),uVar4,a6,uVar6);
    (*(code *)PTR_FUN_8c095e3c)
              ((undefined1 *)((int)puVar9 + DAT_8c095e74 + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c095e7c + iVar1 + -0x20),a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x34) = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      *(double *)((int)puVar9 + iVar1 + 0x34) = dVar13;
    }
    (*(code *)PTR_Vec3_dtor_8c095e48)
              ((undefined1 *)((int)puVar9 + DAT_8c095e7c + iVar1 + -0x20),0xffffffff,a6,uVar6);
    (*(code *)PTR_Vec3_dtor_8c095e48)
              ((undefined1 *)((int)puVar9 + DAT_8c095e74 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    a6 = ar5;
    uVar4 = (*(code *)PTR_FUN_8c095e84)
                      (ar4,(undefined1 *)((int)puVar9 + DAT_8c095e24 + iVar1 + -0x20),ar5,uVar6);
    *(undefined4 *)((int)puVar9 + iVar1 + 0x30) = uVar4;
    if (*(int *)((int)puVar9 + iVar1 + 0x30) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c095e88 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_sub_8c095e38)(ar4 + DAT_8c095e20,ar5,a6,uVar6);
      (*(code *)PTR_Vec3_assign_8c095e28)
                ((undefined1 *)((int)puVar9 + DAT_8c095e8c + iVar1 + -0x20),
                 (undefined1 *)((int)puVar9 + DAT_8c095e88 + iVar1 + -0x20),a6,uVar6);
      (*(code *)PTR_Vec3_dtor_8c095e48)
                ((undefined1 *)((int)puVar9 + DAT_8c095e88 + iVar1 + -0x20),0xffffffff,a6,uVar6);
      (*(code *)PTR_Vec3_length_sq_8c095e90)
                ((undefined1 *)((int)puVar9 + DAT_8c095e8c + iVar1 + -0x20),
                 PTR_Vec3_length_sq_8c095e90,a6,uVar6);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + iVar1 + 0x2c) = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined4 *)((int)puVar9 + DAT_8c095e94 + iVar1 + -0x20) =
             *(undefined4 *)((int)puVar9 + iVar1 + 0x2c);
        dVar13 = (double)CONCAT44(DAT_8c095e30,
                                  *(undefined4 *)((int)puVar9 + DAT_8c095e94 + iVar1 + -0x20));
      }
      else {
        *(double *)((int)puVar9 + iVar1 + 0x2c) = dVar13;
        *(undefined8 *)((int)puVar9 + DAT_8c095e94 + iVar1 + -0x20) =
             *(undefined8 *)((int)puVar9 + iVar1 + 0x2c);
        dVar13 = (double)CONCAT44(DAT_8c095e34,DAT_8c095e30);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) {
        *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar9 + DAT_8c095e98 + iVar1 + -0x20);
        (*(code *)PTR_Vec3_scale_8c095ea0)
                  ((undefined1 *)((int)puVar9 + DAT_8c095e9c + iVar1 + -0x24),ar4 + 0x48,a6,uVar6);
        *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar9 + DAT_8c095ea4 + iVar1 + -0x20);
        puVar3 = PTR_Vec3_scale_8c095ea0;
        (*(code *)PTR_Vec3_scale_8c095ea0)
                  ((undefined1 *)((int)puVar9 + DAT_8c095eac + iVar1 + -0x24),PTR_DAT_8c095ea8,
                   PTR_Vec3_scale_8c095ea0,uVar6);
        *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar9 + DAT_8c095eb0 + iVar1 + -0x20);
        (*(code *)PTR_FUN_8c095ebc)
                  ((undefined1 *)((int)puVar9 + DAT_8c095eb8 + iVar1 + -0x24),
                   (undefined1 *)((int)puVar9 + DAT_8c095eb4 + iVar1 + -0x24),puVar3,uVar6);
        *(undefined **)((int)puVar9 + iVar1 + -0x24) = PTR_DAT_8c095ec0;
        *(undefined1 **)((int)puVar9 + iVar1 + -0x28) =
             (undefined1 *)((int)puVar9 + DAT_8c095ec4 + iVar1 + -0x24);
        puVar3 = a6_00;
        uVar6 = uVar7;
        (*(code *)PTR_FUN_8c095ed4)(ar4,ar5,a6_00,uVar7);
        *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar9 + DAT_8c095ed8 + iVar1 + -0x20);
        (*(code *)PTR_Vec3_sub_8c095e38)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ec4 + iVar1 + -0x24),ar5,puVar3,uVar6);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar9 + DAT_8c095e94 + iVar1 + -0x20),
                                    DAT_8c095e30);
        }
        else {
          dVar13 = *(double *)((int)puVar9 + DAT_8c095e94 + iVar1 + -0x20);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44(1.0 - fVar10,fVar10);
        }
        else {
          dVar13 = (double)CONCAT44(0x3f800000,fVar10) - (double)CONCAT44(0x3f800000,fVar10);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar9 + DAT_8c095edc + iVar1 + -0x20) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar9 + DAT_8c095edc + iVar1 + -0x20) = dVar13;
        }
        *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar9 + DAT_8c095ee0 + iVar1 + -0x20);
        (*(code *)PTR_Vec3_scale_8c095ea0)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ee4 + iVar1 + -0x24),
                   (undefined1 *)((int)puVar9 + DAT_8c095e44 + iVar1 + -0x24),puVar3,uVar6);
        uVar4 = SUB84(dVar13,0);
        *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar9 + DAT_8c095ee8 + iVar1 + -0x20);
        (*(code *)PTR_Vec3_add_8c095ef4)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ef0 + iVar1 + -0x24),
                   (undefined1 *)((int)puVar9 + DAT_8c095eec + iVar1 + -0x24),puVar3,uVar6);
        *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar9 + DAT_8c095ef8 + iVar1 + -0x20);
        (*(code *)PTR_FUN_8c095ebc)
                  ((undefined1 *)((int)puVar9 + DAT_8c095f00 + iVar1 + -0x24),PTR_DAT_8c095efc,
                   puVar3,uVar6);
        (*(code *)PTR_Vec3_assign_8c095e28)
                  (ar4 + DAT_8c095f04,(undefined1 *)((int)puVar9 + DAT_8c095ef8 + iVar1 + -0x20),
                   puVar3,uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ef8 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ee8 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ee0 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ed8 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095f08 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095eb0 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095ea4 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_Vec3_dtor_8c095e48)
                  ((undefined1 *)((int)puVar9 + DAT_8c095e98 + iVar1 + -0x20),0xffffffff,puVar3,
                   uVar6);
        (*(code *)PTR_FUN_8c095f54)(ar4 + DAT_8c095f04,ar5,puVar3,uVar6);
        *(undefined **)((int)puVar9 + iVar1 + -0x24) = PTR_DAT_8c095f58;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c095f5c,uVar4);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c095f60,DAT_8c095f5c);
        }
        (*(code *)PTR_FUN_8c095f64)(ar4,ar4 + DAT_8c095f60,a6_00,uVar7);
        (*(code *)PTR_Vec3_assign_8c095f6c)
                  ((undefined1 *)((int)puVar9 + DAT_8c095f68 + iVar1 + -0x20),ar4 + DAT_8c095f60,
                   a6_00,uVar7);
        a6 = a6_00;
        uVar6 = uVar7;
      }
      else {
        (*(code *)PTR_Vec3_assign_8c095fb4)
                  ((undefined1 *)((int)puVar9 + DAT_8c095fb0 + iVar1 + -0x20),ar4 + DAT_8c095fac,a6,
                   uVar6);
      }
    }
    (*(code *)PTR_FUN_8c095fb8)(ar4 + 0x14,ar4 + 0x14,a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x28) = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      *(double *)((int)puVar9 + iVar1 + 0x28) = dVar13;
    }
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c096010 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c096014)(ar4 + 0x14,ar4 + 0x14,a6,uVar6);
    (*(code *)PTR_Vec3_assign_8c09601c)
              (ar4 + DAT_8c096018,(undefined1 *)((int)puVar9 + DAT_8c096010 + iVar1 + -0x20),a6,
               uVar6);
    (*(code *)PTR_Vec3_dtor_8c096020)
              ((undefined1 *)((int)puVar9 + DAT_8c096010 + iVar1 + -0x20),0xffffffff,a6,uVar6);
  }
  else if (iVar2 == 1) {
    (*(code *)PTR_Vec3_assign_8c096178)
              ((undefined1 *)((int)puVar9 + DAT_8c096174 + iVar1 + -0x20),ar4 + DAT_8c096170,a6,
               uVar6);
    uVar7 = (undefined4)in_dr0;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c096184)
              (ar4 + DAT_8c09617c._4_4_,DAT_8c09617c._4_4_,a6,uVar6);
    *(int *)((int)puVar9 + iVar1) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar7 = *(undefined4 *)(*(int *)((int)puVar9 + iVar1) + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar9 + iVar1) + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c096188),uVar7);
    }
    else {
      dVar13 = *(double *)(ar4 + DAT_8c096188);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar13 - dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar9 + iVar1) + 0x28) = fVar10;
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),in_fr3);
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar9 + iVar1) + 0x28) = in_xd0;
      dVar13 = *(double *)(ar4 + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(DAT_8c09618c,*(undefined4 *)(ar4 + DAT_8c096188));
    }
    else {
      dVar14 = (double)CONCAT44(_DAT_8c096190,DAT_8c09618c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar14 * dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44((undefined4)DAT_8c09617c,fVar10);
    }
    else {
      dVar14 = (double)CONCAT44(DAT_8c09617c._4_4_,(undefined4)DAT_8c09617c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (float)((ulonglong)dVar14 >> 0x20);
      fVar10 = SUB84(dVar14,0) / fVar16;
      dVar14 = (double)CONCAT44(fVar16,fVar10);
      bVar17 = (float)((ulonglong)dVar13 >> 0x20) < fVar10;
    }
    else {
      dVar14 = dVar14 / dVar14;
      bVar17 = dVar13 < dVar14;
    }
    if (bVar17) {
      *(int *)((int)puVar9 + iVar1 + -4) = ar4;
      *(int *)(_DAT_8c096190 + *(int *)((int)puVar9 + iVar1 + -4)) =
           *(int *)(_DAT_8c096190 + *(int *)((int)puVar9 + iVar1 + -4)) + 1;
      uVar6 = 0;
      a6 = (undefined *)0x0;
      uVar7 = 3;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c096198)(ar4 + DAT_8c09617c._4_4_,3,0,0);
      *(undefined4 *)(DAT_8c09619c + ar4) = 0;
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0961a0 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0961a4)(ar7,uVar7,a6,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0961a8 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_normalize_8c0961b0)
                ((undefined1 *)((int)puVar9 + DAT_8c0961ac + iVar1 + -0x24),uVar7,a6,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0961b4 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0961a4)(ar4 + DAT_8c0961b8,uVar7,a6,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c0961bc + iVar1 + -0x20);
      (*(code *)PTR_Vec3_normalize_8c0961b0)
                ((undefined1 *)((int)puVar9 + DAT_8c0961c0 + iVar1 + -0x24),uVar7,a6,uVar6);
      (*(code *)PTR_FUN_8c0961c4)
                ((undefined1 *)((int)puVar9 + DAT_8c0961a8 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar9 + DAT_8c0961bc + iVar1 + -0x20),a6,uVar6);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + iVar1 + 0x24) = (int)((ulonglong)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(DAT_8c0961c8,*(undefined4 *)((int)puVar9 + iVar1 + 0x24));
      }
      else {
        *(double *)((int)puVar9 + iVar1 + 0x24) = dVar14;
        dVar14 = (double)CONCAT44(PTR_Vec3_dtor_8c0961cc,DAT_8c0961c8);
      }
      *(uint *)((int)puVar9 + iVar1 + 0x5c) =
           (uint)(in_FPSCR_PR == '\0' && SUB84(dVar14,0) < (float)((ulonglong)dVar14 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c0961cc)
                ((undefined1 *)((int)puVar9 + DAT_8c0961bc + iVar1 + -0x20),0xffffffff,a6,uVar6);
      (*(code *)PTR_Vec3_dtor_8c0961cc)
                ((undefined1 *)((int)puVar9 + DAT_8c0961b4 + iVar1 + -0x20),0xffffffff,a6,uVar6);
      (*(code *)PTR_Vec3_dtor_8c0961cc)
                ((undefined1 *)((int)puVar9 + DAT_8c0961a8 + iVar1 + -0x20),0xffffffff,a6,uVar6);
      (*(code *)PTR_Vec3_dtor_8c0961cc)
                ((undefined1 *)((int)puVar9 + DAT_8c0961a0 + iVar1 + -0x20),0xffffffff,a6,uVar6);
      if (*(int *)((int)puVar9 + iVar1 + 0x5c) == 0) {
        *(undefined4 *)(DAT_8c0962d4 + ar4) = 0;
      }
      else {
        *(undefined4 *)(DAT_8c0961d0 + ar4) = 0x1e;
      }
    }
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c0962d8 + iVar1 + -0x20);
    (*(code *)PTR_Vec3_sub_8c0962e0)
              ((undefined1 *)((int)puVar9 + DAT_8c0962dc + iVar1 + -0x24),ar5,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c0962e4 + iVar1 + -0x20);
    (*(code *)PTR_Vec3_normalize_8c0962ec)
              ((undefined1 *)((int)puVar9 + DAT_8c0962e8 + iVar1 + -0x24),
               PTR_Vec3_normalize_8c0962ec,a6,uVar6);
    (*(code *)PTR_Vec3_assign_8c0962f4)
              ((undefined1 *)((int)puVar9 + DAT_8c0962f0 + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c0962e4 + iVar1 + -0x20),a6,uVar6);
    (*(code *)PTR_Vec3_dtor_8c0962f8)
              ((undefined1 *)((int)puVar9 + DAT_8c0962e4 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    (*(code *)PTR_Vec3_dtor_8c0962f8)
              ((undefined1 *)((int)puVar9 + DAT_8c0962d8 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c0962fc + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c096300)
              (ar4 + 0x14,(undefined1 *)((int)puVar9 + DAT_8c0962fc + iVar1 + -0x20),a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c096304 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c096300)
              ((undefined1 *)((int)puVar9 + DAT_8c096308 + iVar1 + -0x24),
               (undefined1 *)((int)puVar9 + DAT_8c096308 + iVar1 + -0x24),a6,uVar6);
    (*(code *)PTR_FUN_8c09630c)
              ((undefined1 *)((int)puVar9 + DAT_8c0962fc + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c096304 + iVar1 + -0x20),a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x20) = (int)((ulonglong)dVar14 >> 0x20);
    }
    else {
      *(double *)((int)puVar9 + iVar1 + 0x20) = dVar14;
    }
    (*(code *)PTR_Vec3_dtor_8c0962f8)
              ((undefined1 *)((int)puVar9 + DAT_8c096304 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    (*(code *)PTR_Vec3_dtor_8c0962f8)
              ((undefined1 *)((int)puVar9 + DAT_8c0962fc + iVar1 + -0x20),0xffffffff,a6,uVar6);
    puVar5 = (undefined1 *)((int)puVar9 + DAT_8c096310 + iVar1 + -0x20);
    uVar7 = (*(code *)PTR_FUN_8c096314)(ar4,puVar5,ar5,uVar6);
    *(undefined4 *)((int)puVar9 + iVar1 + 0x1c) = uVar7;
    iVar8 = *(int *)((int)puVar9 + iVar1 + 0x1c);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c096318 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c096300)(ar4 + 0x14,puVar5,ar5,uVar6);
    (*(code *)PTR_Vec3_assign_8c0962f4)
              (ar4 + DAT_8c09631c,(undefined1 *)((int)puVar9 + DAT_8c096318 + iVar1 + -0x20),ar5,
               uVar6);
    (*(code *)PTR_Vec3_dtor_8c0962f8)
              ((undefined1 *)((int)puVar9 + DAT_8c096318 + iVar1 + -0x20),0xffffffff,ar5,uVar6);
    a6 = ar5;
  }
  else if (iVar2 == 2) {
    (*(code *)PTR_Vec3_assign_8c0964cc)
              ((undefined1 *)((int)puVar9 + DAT_8c0964c8 + iVar1 + -0x20),ar4 + DAT_8c0964c4,a6,
               uVar6);
    uVar7 = (undefined4)in_dr0;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0964d8)
              (ar4 + DAT_8c0964d0._4_4_,ar4 + DAT_8c0964d0._4_4_,a6,uVar6);
    uVar15 = CONCAT44(0x3f800000,uVar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(ulonglong *)(ar4 + 0x48) = uVar15;
    }
    *(int *)((int)puVar9 + iVar1 + -8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = (ulonglong)*(uint *)(*(int *)((int)puVar9 + iVar1 + -8) + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar9 + iVar1 + -8) + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0964dc),(int)uVar15);
    }
    else {
      dVar13 = *(double *)(ar4 + DAT_8c0964dc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar13 - dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar9 + iVar1 + -8) + 0x28) = fVar10;
      uVar12 = CONCAT44(DAT_8c0964e0,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar9 + iVar1 + -8) + 0x28) = in_xd0;
      uVar12 = CONCAT44(DAT_8c0964e4,DAT_8c0964e0);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar12 < (float)((ulonglong)uVar12 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar12 = CONCAT44(DAT_8c0964e0,(float)uVar12);
        *(undefined4 *)(ar4 + 0x28) = DAT_8c0964e0;
      }
      else {
        uVar12 = CONCAT44(DAT_8c0964e4,DAT_8c0964e0);
        *(undefined8 *)(ar4 + 0x28) = uVar12;
      }
    }
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c0964e4 + iVar1 + -0x20);
    (*(code *)PTR_Vec3_sub_8c0964ec)
              ((undefined1 *)((int)puVar9 + DAT_8c0964e8 + iVar1 + -0x24),ar5,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c0964f0 + iVar1 + -0x20);
    (*(code *)PTR_Vec3_normalize_8c0964f8)
              ((undefined1 *)((int)puVar9 + DAT_8c0964f4 + iVar1 + -0x24),
               (undefined1 *)((int)puVar9 + DAT_8c0964f4 + iVar1 + -0x24),a6,uVar6);
    (*(code *)PTR_Vec3_assign_8c0964cc)
              ((undefined1 *)((int)puVar9 + DAT_8c0964fc + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c0964f0 + iVar1 + -0x20),a6,uVar6);
    (*(code *)PTR_Vec3_dtor_8c096500)
              ((undefined1 *)((int)puVar9 + DAT_8c0964f0 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    uVar7 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c096500)
              ((undefined1 *)((int)puVar9 + DAT_8c0964e4 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c096504 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c096508)(ar4 + 0x14,uVar7,a6,uVar6);
    *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
         (undefined1 *)((int)puVar9 + DAT_8c09650c + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c096508)
              ((undefined1 *)((int)puVar9 + DAT_8c096510 + iVar1 + -0x24),uVar7,a6,uVar6);
    (*(code *)PTR_FUN_8c096514)
              ((undefined1 *)((int)puVar9 + DAT_8c096504 + iVar1 + -0x20),
               (undefined1 *)((int)puVar9 + DAT_8c09650c + iVar1 + -0x20),a6,uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar9 + iVar1 + 0x18) = (int)((ulonglong)uVar12 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar9 + iVar1 + 0x18) = uVar12;
    }
    (*(code *)PTR_Vec3_dtor_8c096500)
              ((undefined1 *)((int)puVar9 + DAT_8c09650c + iVar1 + -0x20),0xffffffff,a6,uVar6);
    uVar11 = (uint)uVar12;
    (*(code *)PTR_Vec3_dtor_8c096500)
              ((undefined1 *)((int)puVar9 + DAT_8c096504 + iVar1 + -0x20),0xffffffff,a6,uVar6);
    uVar7 = (*(code *)PTR_FUN_8c096518)
                      (ar4,(undefined1 *)((int)puVar9 + DAT_8c0964c8 + iVar1 + -0x20),ar5,uVar6);
    *(undefined4 *)((int)puVar9 + iVar1 + 0x14) = uVar7;
    iVar8 = *(int *)((int)puVar9 + iVar1 + 0x14);
    if (iVar8 == 0) {
      iVar8 = 1;
      *(undefined4 *)(ar4 + 0x40) = 3;
      uVar6 = 0;
      a6 = (undefined *)0x0;
      iVar2 = ar4 + DAT_8c0964d0._4_4_;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c096520)(iVar2,1,0,0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar11;
      }
      uVar7 = (*(code *)PTR_rand_8c096524)(iVar2,PTR_rand_8c096524,a6,uVar6);
      *(undefined4 *)((int)puVar9 + iVar1 + 0x10) = uVar7;
      uVar7 = (*(code *)PTR_libgcc_divide_helper_01031c_8c096528)
                        (*(undefined4 *)((int)puVar9 + iVar1 + 0x10),10,a6,uVar6);
      *(undefined4 *)((int)puVar9 + iVar1 + -0xc) = uVar7;
      *(int *)(DAT_8c09652c + ar4) = *(int *)((int)puVar9 + iVar1 + -0xc) + 0xf;
      *(int *)((int)puVar9 + iVar1 + -0x10) = ar4;
      *(int *)(DAT_8c096530 + *(int *)((int)puVar9 + iVar1 + -0x10)) =
           *(int *)(DAT_8c096530 + *(int *)((int)puVar9 + iVar1 + -0x10)) + 1;
      (*(code *)PTR_Vec3_assign_8c0964cc)(ar4 + DAT_8c096534,ar7,a6,uVar6);
    }
    else {
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)*(int *)(DAT_8c096658 + ar4),uVar11);
      }
      else {
        dVar13 = (double)*(int *)(DAT_8c096658 + ar4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + iVar1 + 0x58) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)puVar9 + iVar1 + 0x58) = dVar13;
      }
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c09665c + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c096664)
                (ar4 + DAT_8c096660,(undefined1 *)((int)puVar9 + iVar1 + 0x58),ar5,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c096668 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c096674)
                ((undefined1 *)((int)puVar9 + DAT_8c096670 + iVar1 + -0x24),PTR_DAT_8c09666c,ar5,
                 uVar6);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(DAT_8c096678,(float)*(int *)(DAT_8c096658 + ar4));
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c09667c,DAT_8c096678);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44(1.0 - fVar10,fVar10);
      }
      else {
        dVar13 = (double)CONCAT44(0x3f800000,fVar10) - (double)CONCAT44(0x3f800000,fVar10);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar9 + iVar1 + 0x54) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)puVar9 + iVar1 + 0x54) = dVar13;
      }
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c09667c + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c096664)(ar7,(undefined1 *)((int)puVar9 + iVar1 + 0x54),ar5,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c096680 + iVar1 + -0x20);
      puVar5 = (undefined1 *)((int)puVar9 + DAT_8c096684 + iVar1 + -0x24);
      (*(code *)PTR_Vec3_add_8c09668c)
                ((undefined1 *)((int)puVar9 + DAT_8c096688 + iVar1 + -0x24),puVar5,ar5,uVar6);
      *(undefined1 **)((int)puVar9 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar9 + DAT_8c096690 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_normalize_8c096698)
                ((undefined1 *)((int)puVar9 + DAT_8c096694 + iVar1 + -0x24),puVar5,ar5,uVar6);
      (*(code *)PTR_Vec3_assign_8c09669c)
                (ar4 + DAT_8c096660,(undefined1 *)((int)puVar9 + DAT_8c096690 + iVar1 + -0x20),ar5,
                 uVar6);
      (*(code *)PTR_Vec3_dtor_8c0966a0)
                ((undefined1 *)((int)puVar9 + DAT_8c096690 + iVar1 + -0x20),0xffffffff,ar5,uVar6);
      (*(code *)PTR_Vec3_dtor_8c0966a0)
                ((undefined1 *)((int)puVar9 + DAT_8c096680 + iVar1 + -0x20),0xffffffff,ar5,uVar6);
      (*(code *)PTR_Vec3_dtor_8c0966a0)
                ((undefined1 *)((int)puVar9 + DAT_8c09667c + iVar1 + -0x20),0xffffffff,ar5,uVar6);
      (*(code *)PTR_Vec3_dtor_8c0966a0)
                ((undefined1 *)((int)puVar9 + DAT_8c096668 + iVar1 + -0x20),0xffffffff,ar5,uVar6);
      (*(code *)PTR_Vec3_dtor_8c0966a0)
                ((undefined1 *)((int)puVar9 + DAT_8c09665c + iVar1 + -0x20),0xffffffff,ar5,uVar6);
      *(int *)((int)puVar9 + iVar1 + -0x14) = ar4;
      *(int *)(DAT_8c096658 + *(int *)((int)puVar9 + iVar1 + -0x14)) =
           *(int *)(DAT_8c096658 + *(int *)((int)puVar9 + iVar1 + -0x14)) + -1;
      a6 = ar5;
      if (*(int *)(DAT_8c096658 + ar4) < 0) {
        *(undefined4 *)(DAT_8c096658 + ar4) = 0;
      }
    }
  }
  else if (iVar2 == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    uVar7 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c096730)
                      (ar4 + DAT_8c09672c,puVar3,a6,uVar6);
    *(undefined4 *)((int)puVar9 + iVar1 + 0xc) = uVar7;
    if (*(int *)((int)puVar9 + iVar1 + 0xc) == 1) {
      *(int *)((int)puVar9 + iVar1 + -0x18) = ar4;
      *(int *)(DAT_8c096734 + *(int *)((int)puVar9 + iVar1 + -0x18)) =
           *(int *)(DAT_8c096734 + *(int *)((int)puVar9 + iVar1 + -0x18)) + -1;
      if (*(int *)(DAT_8c096734 + ar4) < 1) {
        iVar8 = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
        a5 = ar4 + DAT_8c096738;
        (*(code *)PTR_Vec3_assign_8c09673c)(ar4 + 0x14,a5,a6,uVar6);
        iVar2 = DAT_8c096740;
        *(undefined4 *)(DAT_8c096740 + ar4) = 1;
        uVar6 = (*(code *)PTR_rand_8c096744)(iVar2,a5,a6,uVar6);
        *(undefined4 *)((int)puVar9 + iVar1 + 8) = uVar6;
        uVar6 = *(undefined4 *)((int)puVar9 + iVar1 + 8);
        a6 = PTR_libgcc_divide_helper_01031c_8c096748;
        uVar7 = (*(code *)PTR_libgcc_divide_helper_01031c_8c096748)
                          (uVar6,10,PTR_libgcc_divide_helper_01031c_8c096748,uVar6);
        *(undefined4 *)((int)puVar9 + iVar1 + -0x1c) = uVar7;
        *(undefined4 *)(DAT_8c09674c + ar4) = *(undefined4 *)((int)puVar9 + iVar1 + -0x1c);
      }
      else {
        (*(code *)PTR_Vec3_assign_8c0967bc)(ar4 + DAT_8c0967b8,ar7,a6,uVar6);
      }
    }
  }
LAB_8c096760:
  *(int *)((int)puVar9 + DAT_8c0967c0 + iVar1 + -0x20) = iVar8;
  (*(code *)PTR_Vec3_dtor_8c0967c8)
            ((undefined1 *)((int)puVar9 + DAT_8c0967c4 + iVar1 + -0x20),0xffffffff,a6,uVar6);
  (*(code *)PTR_Vec3_dtor_8c0967c8)
            ((undefined1 *)((int)puVar9 + DAT_8c0967cc + iVar1 + -0x20),0xffffffff,a6,uVar6);
  (*(code *)PTR_Vec3_dtor_8c0967c8)
            ((undefined1 *)((int)puVar9 + DAT_8c0967d0 + iVar1 + -0x20),0xffffffff,a6,uVar6);
  return *(undefined4 *)((int)puVar9 + DAT_8c0967c0 + iVar1 + -0x20);
}



/* FUN_8c0967d8 @ 8c0967d8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0967d8(int ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined1 *a5;
  int iVar2;
  ulonglong *a4;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int *piVar6;
  int iVar7;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  uint uVar11;
  undefined8 in_dr0;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined4 in_fr3;
  undefined8 in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  float fVar16;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar8 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar8 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar8 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar8 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar8 + -0xc) = 1;
  *(undefined4 *)((int)puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar8 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar8 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar8 + -0x1c) = in_PR;
  iVar1 = -DAT_8c096844;
  piVar6 = *(int **)((int)puVar8 + DAT_8c096848 + iVar1 + -0x1c);
  piVar5 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c096850)
            ((undefined1 *)((int)puVar8 + DAT_8c09684c + iVar1 + -0x1c),ar5,ar6,ar7);
  puVar3 = PTR_Vec3_ctor_zero_8c096850;
  (*(code *)PTR_Vec3_ctor_zero_8c096850)
            ((undefined1 *)((int)puVar8 + DAT_8c096854 + iVar1 + -0x1c),PTR_Vec3_ctor_zero_8c096850,
             ar6,piVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c096850)
            ((undefined1 *)((int)puVar8 + DAT_8c096858 + iVar1 + -0x1c),puVar3,ar6,piVar5);
  (*(code *)PTR_FUN_8c096860)
            ((undefined1 *)((int)puVar8 + DAT_8c09685c + iVar1 + -0x1c),puVar3,ar6,piVar5);
  iVar7 = 1;
  iVar2 = *(int *)(ar4 + 0x40);
  if (iVar2 == 0) {
LAB_8c096864:
    uVar9 = (*(code *)PTR_FUN_8c0968d4)(ar4 + DAT_8c0968d0,0,ar6,piVar5);
    *(undefined4 *)((int)puVar8 + iVar1 + 0x4c) = uVar9;
    if ((*(int *)((int)puVar8 + iVar1 + 0x4c) != 1) && (*(int *)((int)puVar8 + iVar1 + 0x4c) != 2))
    {
      *(undefined4 *)((int)puVar8 + iVar1 + 0x60) = 1;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0968dc)
                ((undefined1 *)((int)puVar8 + DAT_8c0968d8 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      (*(code *)PTR_Vec3_dtor_8c0968e4)
                ((undefined1 *)((int)puVar8 + DAT_8c0968e0 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      (*(code *)PTR_Vec3_dtor_8c0968e4)
                ((undefined1 *)((int)puVar8 + DAT_8c0968e8 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      (*(code *)PTR_Vec3_dtor_8c0968e4)
                ((undefined1 *)((int)puVar8 + DAT_8c0968ec + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      return *(undefined4 *)((int)puVar8 + iVar1 + 0x60);
    }
    *(undefined4 *)(DAT_8c096bcc + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar8 + DAT_8c096bd4 + iVar1 + -0x1c) = DAT_8c096bd0;
      *(undefined4 *)((int)puVar8 + DAT_8c096bdc + iVar1 + -0x1c) = DAT_8c096bd8;
      *(undefined4 *)((int)puVar8 + DAT_8c096be4 + iVar1 + -0x1c) = DAT_8c096be0;
    }
    else {
      *(ulonglong *)((int)puVar8 + DAT_8c096bd4 + iVar1 + -0x1c) =
           CONCAT44(DAT_8c096bd4,DAT_8c096bd0);
      *(ulonglong *)((int)puVar8 + DAT_8c096bdc + iVar1 + -0x1c) =
           CONCAT44(DAT_8c096bdc,DAT_8c096bd8);
      *(ulonglong *)((int)puVar8 + DAT_8c096be4 + iVar1 + -0x1c) =
           CONCAT44(DAT_8c096be4,DAT_8c096be0);
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c096be8 + iVar1 + -0x1c);
    piVar4 = piVar6;
    (*(code *)PTR_FUN_8c096bf0)
              (ar4,(undefined1 *)((int)puVar8 + DAT_8c096bdc + iVar1 + -0x20),piVar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c096bf8)
              (ar4 + DAT_8c096bf4,(undefined1 *)((int)puVar8 + DAT_8c096be8 + iVar1 + -0x1c),piVar4,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c096bfc)
              ((undefined1 *)((int)puVar8 + DAT_8c096be8 + iVar1 + -0x1c),0xffffffff,piVar4,piVar5);
    *(undefined **)((int)puVar8 + iVar1 + -0x20) = PTR_DAT_8c096c00;
    ar6 = ar7;
    piVar5 = piVar6;
    uVar9 = (*(code *)PTR_FUN_8c096c08)(ar4,ar4 + DAT_8c096bf4,ar7,piVar6);
    *(undefined4 *)((int)puVar8 + iVar1 + 0x48) = uVar9;
    (*(code *)PTR_Vec3_assign_8c096bf8)
              (ar4 + DAT_8c096bf4,*(undefined4 *)((int)puVar8 + iVar1 + 0x48),ar6,piVar5);
    *(int *)((int)puVar8 + iVar1) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(DAT_8c096c10,
                                *(undefined4 *)(*(int *)((int)puVar8 + iVar1) + DAT_8c096c0c));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + iVar1) + DAT_8c096c0c);
      dVar13 = (double)CONCAT44(DAT_8c096c14,DAT_8c096c10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = (float)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(fVar10,SUB84(dVar13,0) + fVar10);
    }
    else {
      dVar13 = dVar13 + dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar8 + iVar1) + DAT_8c096c0c) = SUB84(dVar13,0);
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar8 + iVar1) + DAT_8c096c0c) = in_xd0;
    }
    (**(code **)(DAT_8c096c14 + *piVar6))(piVar6,ar4 + DAT_8c096bf4,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x44) = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      *(double *)((int)puVar8 + iVar1 + 0x44) = dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(DAT_8c096c1c,*(undefined4 *)((int)puVar8 + iVar1 + 0x44));
    }
    else {
      in_xd0 = *(undefined8 *)((int)puVar8 + iVar1 + 0x44);
      dVar13 = (double)CONCAT44(DAT_8c096c20,DAT_8c096c1c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = (float)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(fVar10,SUB84(dVar13,0) + fVar10);
    }
    else {
      dVar13 = dVar13 + dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c096c18) = SUB84(dVar13,0);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c096c18) = in_xd0;
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c096c20 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_sub_8c096c24)(ar4 + DAT_8c096bf4,ar5,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c096bf8)
              ((undefined1 *)((int)puVar8 + DAT_8c096c28 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c096c20 + iVar1 + -0x1c),ar6,piVar5);
    uVar9 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c096bfc)
              ((undefined1 *)((int)puVar8 + DAT_8c096c20 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_length_sq_8c096c2c)
              ((undefined1 *)((int)puVar8 + DAT_8c096c28 + iVar1 + -0x1c),uVar9,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x40) = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined4 *)((int)puVar8 + DAT_8c096c30 + iVar1 + -0x1c) =
           *(undefined4 *)((int)puVar8 + iVar1 + 0x40);
      uVar12 = CONCAT44(DAT_8c096c34,*(undefined4 *)((int)puVar8 + DAT_8c096c30 + iVar1 + -0x1c));
    }
    else {
      *(double *)((int)puVar8 + iVar1 + 0x40) = dVar13;
      *(undefined8 *)((int)puVar8 + DAT_8c096c30 + iVar1 + -0x1c) =
           *(undefined8 *)((int)puVar8 + iVar1 + 0x40);
      in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c096c30 + iVar1 + -0x1c);
      uVar12 = CONCAT44(_DAT_8c096c38,DAT_8c096c34);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar12 >> 0x20) < (float)uVar12) {
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + _DAT_8c096c38 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c096c40)
                ((undefined1 *)((int)puVar8 + DAT_8c096c3c + iVar1 + -0x20),ar4 + 0x48,ar6,piVar5);
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c096c44 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c096c40)
                ((undefined1 *)((int)puVar8 + DAT_8c096c4c + iVar1 + -0x20),PTR_DAT_8c096c48,ar6,
                 piVar5);
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c096c50 + iVar1 + -0x1c);
      (*(code *)PTR_FUN_8c096c5c)
                ((undefined1 *)((int)puVar8 + DAT_8c096c58 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar8 + DAT_8c096c54 + iVar1 + -0x20),ar6,piVar5);
      *(undefined **)((int)puVar8 + iVar1 + -0x20) = PTR_DAT_8c096c00;
      *(undefined1 **)((int)puVar8 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar8 + DAT_8c096c60 + iVar1 + -0x20);
      piVar5 = ar7;
      piVar4 = piVar6;
      (*(code *)PTR_FUN_8c096c6c)(ar4,ar5,ar7,piVar6);
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c096bf4 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_sub_8c096c24)
                ((undefined1 *)((int)puVar8 + DAT_8c096c60 + iVar1 + -0x20),ar5,piVar5,piVar4);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + DAT_8c096c30 + iVar1 + -0x1c),
                                  DAT_8c096c34);
      }
      else {
        dVar13 = *(double *)((int)puVar8 + DAT_8c096c30 + iVar1 + -0x1c);
        in_xd0 = CONCAT44(_DAT_8c096c38,DAT_8c096c34);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar13 / dVar13,0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44(1.0 - fVar10,fVar10);
      }
      else {
        dVar13 = (double)CONCAT44(0x3f800000,fVar10) - (double)CONCAT44(0x3f800000,fVar10);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + iVar1 + 0x58) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)((int)puVar8 + iVar1 + 0x58) = dVar13;
      }
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c096c70 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c096c40)
                ((undefined1 *)((int)puVar8 + DAT_8c096c18 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar8 + iVar1 + 0x58),piVar5,piVar4);
      uVar9 = SUB84(dVar13,0);
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c096c74 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_add_8c096c80)
                ((undefined1 *)((int)puVar8 + DAT_8c096c7c + iVar1 + -0x20),
                 (undefined1 *)((int)puVar8 + DAT_8c096c78 + iVar1 + -0x20),piVar5,piVar4);
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c096c84 + iVar1 + -0x1c);
      (*(code *)PTR_FUN_8c096c5c)
                ((undefined1 *)((int)puVar8 + DAT_8c096c8c + iVar1 + -0x20),PTR_DAT_8c096c88,piVar5,
                 piVar4);
      (*(code *)PTR_Vec3_assign_8c096bf8)
                (ar4 + DAT_8c096c90,(undefined1 *)((int)puVar8 + DAT_8c096c84 + iVar1 + -0x1c),
                 piVar5,piVar4);
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + DAT_8c096c84 + iVar1 + -0x1c),0xffffffff,piVar5,piVar4
                );
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + DAT_8c096c74 + iVar1 + -0x1c),0xffffffff,piVar5,piVar4
                );
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + DAT_8c096c70 + iVar1 + -0x1c),0xffffffff,piVar5,piVar4
                );
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + DAT_8c096bf4 + iVar1 + -0x1c),0xffffffff,piVar5,piVar4
                );
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + DAT_8c096c94 + iVar1 + -0x1c),0xffffffff,piVar5,piVar4
                );
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + DAT_8c096c50 + iVar1 + -0x1c),0xffffffff,piVar5,piVar4
                );
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + DAT_8c096c44 + iVar1 + -0x1c),0xffffffff,piVar5,piVar4
                );
      (*(code *)PTR_Vec3_dtor_8c096bfc)
                ((undefined1 *)((int)puVar8 + _DAT_8c096c38 + iVar1 + -0x1c),0xffffffff,piVar5,
                 piVar4);
      (*(code *)PTR_FUN_8c096c98)(ar4 + DAT_8c096c90,ar5,PTR_FUN_8c096c98,piVar4);
      *(undefined **)((int)puVar8 + iVar1 + -0x20) = PTR_DAT_8c096c00;
      if (in_FPSCR_SZ == '\0') {
        uVar12 = CONCAT44(DAT_8c096bec,uVar9);
      }
      else {
        uVar12 = CONCAT44(PTR_FUN_8c096bf0,DAT_8c096bec);
      }
      ar6 = ar7;
      piVar5 = piVar6;
      (*(code *)PTR_FUN_8c096c08)(ar4,ar4 + DAT_8c096c90,ar7,piVar6);
      (*(code *)PTR_Vec3_assign_8c096bf8)
                ((undefined1 *)((int)puVar8 + DAT_8c096c9c + iVar1 + -0x1c),ar4 + DAT_8c096c90,ar6,
                 piVar5);
    }
    else {
      (*(code *)PTR_Vec3_assign_8c096d28)
                ((undefined1 *)((int)puVar8 + DAT_8c096d24 + iVar1 + -0x1c),ar4 + DAT_8c096d20,ar6,
                 piVar5);
    }
    (*(code *)PTR_FUN_8c096d2c)
              (ar5,(undefined1 *)((int)puVar8 + DAT_8c096d24 + iVar1 + -0x1c),ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x3c) = (int)((ulonglong)uVar12 >> 0x20);
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),
                                *(undefined4 *)((int)puVar8 + iVar1 + 0x3c));
    }
    else {
      *(undefined8 *)((int)puVar8 + iVar1 + 0x3c) = uVar12;
      in_xd0 = *(undefined8 *)((int)puVar8 + iVar1 + 0x3c);
      dVar13 = *(double *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar13 / dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar10;
      in_dr0 = CONCAT44(DAT_8c096d30,fVar10);
      *(undefined4 *)(ar4 + 0x30) = DAT_8c096d30;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
      in_dr0 = CONCAT44(PTR_FUN_8c096d34,DAT_8c096d30);
      *(undefined8 *)(ar4 + 0x30) = in_dr0;
    }
    (*(code *)PTR_FUN_8c096d34)(ar4,ar4 + 0x24,ar6,piVar5);
    (*(code *)PTR_FUN_8c096d3c)(ar4,DAT_8c096d38,ar6,piVar5);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar2 != 3) {
    if (iVar2 != 5) goto LAB_8c0977f2;
    goto LAB_8c096864;
  }
  iVar2 = *(int *)(DAT_8c096d40 + ar4);
  if (iVar2 == 0) {
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c096dc8)
              (ar4 + DAT_8c096dc0._4_4_,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c096dc8,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c096dcc + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_sub_8c096dd4)(ar4 + DAT_8c096dd0,ar5,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c096ddc)
              ((undefined1 *)((int)puVar8 + DAT_8c096dd8 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c096dcc + iVar1 + -0x1c),ar6,piVar5);
    uVar9 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c096de0)
              ((undefined1 *)((int)puVar8 + DAT_8c096dcc + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_length_sq_8c096de4)
              ((undefined1 *)((int)puVar8 + DAT_8c096dd8 + iVar1 + -0x1c),uVar9,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x38) = (int)((ulonglong)in_dr0 >> 0x20);
      *(undefined4 *)((int)puVar8 + DAT_8c096de8 + iVar1 + -0x1c) =
           *(undefined4 *)((int)puVar8 + iVar1 + 0x38);
      uVar12 = CONCAT44(DAT_8c096dec,*(undefined4 *)((int)puVar8 + DAT_8c096de8 + iVar1 + -0x1c));
    }
    else {
      *(undefined8 *)((int)puVar8 + iVar1 + 0x38) = in_dr0;
      *(undefined8 *)((int)puVar8 + DAT_8c096de8 + iVar1 + -0x1c) =
           *(undefined8 *)((int)puVar8 + iVar1 + 0x38);
      in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c096de8 + iVar1 + -0x1c);
      uVar12 = CONCAT44(DAT_8c096df0,DAT_8c096dec);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar12 <= (float)((ulonglong)uVar12 >> 0x20)) {
      (*(code *)PTR_Vec3_assign_8c097194)
                ((undefined1 *)((int)puVar8 + DAT_8c097190 + iVar1 + -0x1c),ar4 + DAT_8c09718c,ar6,
                 piVar5);
    }
    else {
      (*(code *)PTR_Vec3_assign_8c096ddc)
                ((undefined1 *)((int)puVar8 + DAT_8c096df4 + iVar1 + -0x1c),ar4 + DAT_8c096df0,ar6,
                 piVar5);
    }
    (*(code *)PTR_FUN_8c097198)(ar4 + DAT_8c09718c,ar5,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x34) = (int)((ulonglong)uVar12 >> 0x20);
      dVar13 = (double)CONCAT44(DAT_8c09719c,*(undefined4 *)((int)puVar8 + iVar1 + 0x34));
    }
    else {
      *(undefined8 *)((int)puVar8 + iVar1 + 0x34) = uVar12;
      in_xd0 = *(undefined8 *)((int)puVar8 + iVar1 + 0x34);
      dVar13 = (double)CONCAT44(DAT_8c0971a0,DAT_8c09719c);
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar13,0) <= (float)((ulonglong)dVar13 >> 0x20)) {
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c0971a0 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_sub_8c0971a4)(ar4 + DAT_8c09718c,ar5,ar6,piVar5);
      (*(code *)PTR_FUN_8c0971a8)
                (ar4 + 0x14,(undefined1 *)((int)puVar8 + DAT_8c0971a0 + iVar1 + -0x1c),ar6,piVar5);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + iVar1 + 0x30) = (int)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(DAT_8c0971ac,*(undefined4 *)((int)puVar8 + iVar1 + 0x30));
      }
      else {
        *(double *)((int)puVar8 + iVar1 + 0x30) = dVar13;
        in_xd0 = *(undefined8 *)((int)puVar8 + iVar1 + 0x30);
        dVar13 = (double)CONCAT44(PTR_Vec3_dtor_8c0971b0,DAT_8c0971ac);
      }
      *(uint *)((int)puVar8 + iVar1 + 0x54) =
           (uint)(in_FPSCR_PR != '\0' || SUB84(dVar13,0) <= (float)((ulonglong)dVar13 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c0971b0)
                ((undefined1 *)((int)puVar8 + DAT_8c0971a0 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      if (*(int *)((int)puVar8 + iVar1 + 0x54) != 0) {
        (*(code *)PTR_FUN_8c097198)
                  ((undefined1 *)((int)puVar8 + DAT_8c097190 + iVar1 + -0x1c),ar5,ar6,piVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + iVar1 + 0x2c) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar8 + iVar1 + 0x2c) = dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0971b4) = *(undefined4 *)((int)puVar8 + iVar1 + 0x2c);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0971b4) = *(undefined8 *)((int)puVar8 + iVar1 + 0x2c);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c0971bc,*(undefined4 *)(ar4 + DAT_8c0971b4));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + DAT_8c0971b4);
          dVar13 = (double)CONCAT44(DAT_8c0971c0,DAT_8c0971bc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar13 * dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar10);
        }
        else {
          dVar13 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0971b8) = fVar10;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0971b8) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar10 = *(float *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0971b8),fVar10);
        }
        else {
          dVar13 = *(double *)(ar4 + DAT_8c0971b8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar10,SUB84(dVar13,0) / fVar10);
        }
        else {
          dVar13 = dVar13 / dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c0971c0) = SUB84(dVar13,0);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0971c0) = in_xd0;
        }
        *(int *)((int)puVar8 + iVar1 + -4) = ar4;
        *(int *)(DAT_8c0971c4 + *(int *)((int)puVar8 + iVar1 + -4)) =
             *(int *)(DAT_8c0971c4 + *(int *)((int)puVar8 + iVar1 + -4)) + 1;
      }
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c0971c8 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_sub_8c0971a4)
              ((undefined1 *)((int)puVar8 + DAT_8c0971cc + iVar1 + -0x20),ar5,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c0971d0 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_normalize_8c0971d8)
              ((undefined1 *)((int)puVar8 + DAT_8c0971d4 + iVar1 + -0x20),
               PTR_Vec3_normalize_8c0971d8,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c097194)
              ((undefined1 *)((int)puVar8 + DAT_8c0971dc + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c0971d0 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c0971b0)
              ((undefined1 *)((int)puVar8 + DAT_8c0971d0 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c0971b0)
              ((undefined1 *)((int)puVar8 + DAT_8c0971c8 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    piVar5 = (int *)((int)puVar8 + DAT_8c0971e0 + iVar1 + -0x1c);
    *(int **)((int)puVar8 + iVar1 + -0x20) = piVar5;
    puVar3 = PTR_FUN_8c0971e4;
    (*(code *)PTR_FUN_8c0971e4)(ar4 + 0x14,PTR_FUN_8c0971e4,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c0971e8 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c0971e4)
              ((undefined1 *)((int)puVar8 + DAT_8c0971ec + iVar1 + -0x20),puVar3,ar6,piVar5);
    (*(code *)PTR_FUN_8c0971a8)
              ((undefined1 *)((int)puVar8 + DAT_8c0971e0 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c0971e8 + iVar1 + -0x1c),ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x28) = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      *(double *)((int)puVar8 + iVar1 + 0x28) = dVar13;
    }
    (*(code *)PTR_Vec3_dtor_8c0971b0)
              ((undefined1 *)((int)puVar8 + DAT_8c0971e8 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c0971b0)
              ((undefined1 *)((int)puVar8 + DAT_8c0971e0 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    ar6 = ar5;
    iVar2 = (*(code *)PTR_FUN_8c0971f0)
                      (ar4,(undefined1 *)((int)puVar8 + DAT_8c097190 + iVar1 + -0x1c),ar5,piVar5);
    *(int *)((int)puVar8 + iVar1 + 0x24) = iVar2;
    if (*(int *)((int)puVar8 + iVar1 + 0x24) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar8 + DAT_8c0971f4 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_sub_8c0971a4)(ar4 + DAT_8c09718c,ar5,ar6,piVar5);
      (*(code *)PTR_Vec3_assign_8c097194)
                ((undefined1 *)((int)puVar8 + DAT_8c0971f8 + iVar1 + -0x1c),
                 (undefined1 *)((int)puVar8 + DAT_8c0971f4 + iVar1 + -0x1c),ar6,piVar5);
      (*(code *)PTR_Vec3_dtor_8c0971b0)
                ((undefined1 *)((int)puVar8 + DAT_8c0971f4 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
      (*(code *)PTR_Vec3_length_sq_8c0971fc)
                ((undefined1 *)((int)puVar8 + DAT_8c0971f8 + iVar1 + -0x1c),
                 PTR_Vec3_length_sq_8c0971fc,ar6,piVar5);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + iVar1 + 0x20) = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined4 *)((int)puVar8 + DAT_8c097200 + iVar1 + -0x1c) =
             *(undefined4 *)((int)puVar8 + iVar1 + 0x20);
        dVar13 = (double)CONCAT44(DAT_8c09719c,
                                  *(undefined4 *)((int)puVar8 + DAT_8c097200 + iVar1 + -0x1c));
      }
      else {
        *(double *)((int)puVar8 + iVar1 + 0x20) = dVar13;
        *(undefined8 *)((int)puVar8 + DAT_8c097200 + iVar1 + -0x1c) =
             *(undefined8 *)((int)puVar8 + iVar1 + 0x20);
        dVar13 = (double)CONCAT44(DAT_8c0971a0,DAT_8c09719c);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) {
        *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar8 + DAT_8c097204 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_scale_8c09720c)
                  ((undefined1 *)((int)puVar8 + DAT_8c097208 + iVar1 + -0x20),ar4 + 0x48,ar6,piVar5)
        ;
        *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar8 + DAT_8c097210 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_scale_8c09720c)
                  ((undefined1 *)((int)puVar8 + DAT_8c097218 + iVar1 + -0x20),PTR_DAT_8c097214,ar6,
                   piVar5);
        *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar8 + DAT_8c09721c + iVar1 + -0x1c);
        (*(code *)PTR_FUN_8c097228)
                  ((undefined1 *)((int)puVar8 + DAT_8c097224 + iVar1 + -0x20),
                   (undefined1 *)((int)puVar8 + DAT_8c097220 + iVar1 + -0x20),ar6,piVar5);
        *(undefined **)((int)puVar8 + iVar1 + -0x20) = PTR_DAT_8c09722c;
        *(undefined1 **)((int)puVar8 + iVar1 + -0x24) =
             (undefined1 *)((int)puVar8 + DAT_8c097230 + iVar1 + -0x20);
        piVar5 = ar7;
        piVar4 = piVar6;
        (*(code *)PTR_FUN_8c097240)(ar4,ar5,ar7,piVar6);
        *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar8 + DAT_8c097244 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_sub_8c0971a4)
                  ((undefined1 *)((int)puVar8 + DAT_8c097230 + iVar1 + -0x20),ar5,piVar5,piVar4);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + DAT_8c097200 + iVar1 + -0x1c),
                                    DAT_8c09719c);
        }
        else {
          dVar13 = *(double *)((int)puVar8 + DAT_8c097200 + iVar1 + -0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44(1.0 - fVar10,fVar10);
        }
        else {
          dVar13 = (double)CONCAT44(0x3f800000,fVar10) - (double)CONCAT44(0x3f800000,fVar10);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + iVar1 + 0x50) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar8 + iVar1 + 0x50) = dVar13;
        }
        *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar8 + DAT_8c097248 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_scale_8c09720c)
                  ((undefined1 *)((int)puVar8 + DAT_8c09724c + iVar1 + -0x20),
                   (undefined1 *)((int)puVar8 + iVar1 + 0x50),piVar5,piVar4);
        uVar9 = SUB84(dVar13,0);
        *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar8 + DAT_8c097250 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_add_8c09725c)
                  ((undefined1 *)((int)puVar8 + DAT_8c097258 + iVar1 + -0x20),
                   (undefined1 *)((int)puVar8 + DAT_8c097254 + iVar1 + -0x20),piVar5,piVar4);
        *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar8 + DAT_8c097260 + iVar1 + -0x1c);
        (*(code *)PTR_FUN_8c097228)
                  ((undefined1 *)((int)puVar8 + DAT_8c097268 + iVar1 + -0x20),PTR_DAT_8c097264,
                   piVar5,piVar4);
        (*(code *)PTR_Vec3_assign_8c097194)
                  (ar4 + DAT_8c09726c,(undefined1 *)((int)puVar8 + DAT_8c097260 + iVar1 + -0x1c),
                   piVar5,piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c097260 + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c097250 + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c097248 + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c097244 + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c097270 + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c09721c + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c097210 + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_Vec3_dtor_8c0971b0)
                  ((undefined1 *)((int)puVar8 + DAT_8c097204 + iVar1 + -0x1c),0xffffffff,piVar5,
                   piVar4);
        (*(code *)PTR_FUN_8c0972bc)(ar4 + DAT_8c09726c,ar5,piVar5,piVar4);
        *(undefined **)((int)puVar8 + iVar1 + -0x20) = PTR_DAT_8c0972c0;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c0972c4,uVar9);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c0972c8,DAT_8c0972c4);
        }
        (*(code *)PTR_FUN_8c0972cc)(ar4,ar4 + DAT_8c0972c8,ar7,piVar6);
        iVar2 = ar4 + DAT_8c0972c8;
        (*(code *)PTR_Vec3_assign_8c0972d4)
                  ((undefined1 *)((int)puVar8 + DAT_8c0972d0 + iVar1 + -0x1c),iVar2,ar7,piVar6);
        ar6 = ar7;
        piVar5 = piVar6;
      }
      else {
        iVar2 = ar4 + DAT_8c097310;
        (*(code *)PTR_Vec3_assign_8c097318)
                  ((undefined1 *)((int)puVar8 + DAT_8c097314 + iVar1 + -0x1c),iVar2,ar6,piVar5);
      }
    }
    (*(code *)PTR_FUN_8c09731c)(ar4 + 0x14,iVar2,ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x1c) = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      *(double *)((int)puVar8 + iVar1 + 0x1c) = dVar13;
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c09736c + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c097370)
              (ar4 + 0x14,(undefined1 *)((int)puVar8 + DAT_8c09736c + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c097378)
              (ar4 + DAT_8c097374,(undefined1 *)((int)puVar8 + DAT_8c09736c + iVar1 + -0x1c),ar6,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c09737c)
              ((undefined1 *)((int)puVar8 + DAT_8c09736c + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  }
  else if (iVar2 == 1) {
    (*(code *)PTR_Vec3_assign_8c097508)
              ((undefined1 *)((int)puVar8 + DAT_8c097504 + iVar1 + -0x1c),ar4 + DAT_8c097500,ar6,
               piVar5);
    uVar9 = (undefined4)in_dr0;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c097514)
              (ar4 + DAT_8c09750c._4_4_,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c097514,ar6,piVar5);
    *(int *)((int)puVar8 + iVar1 + -8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar9 = *(undefined4 *)(*(int *)((int)puVar8 + iVar1 + -8) + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + iVar1 + -8) + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c097518),uVar9);
    }
    else {
      dVar13 = *(double *)(ar4 + DAT_8c097518);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar13 - dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar8 + iVar1 + -8) + 0x28) = fVar10;
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),in_fr3);
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar8 + iVar1 + -8) + 0x28) = in_xd0;
      dVar13 = *(double *)(ar4 + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(DAT_8c09751c,*(undefined4 *)(ar4 + DAT_8c097518));
    }
    else {
      dVar14 = (double)CONCAT44(DAT_8c097520,DAT_8c09751c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar14 * dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44((undefined4)DAT_8c09750c,fVar10);
    }
    else {
      dVar14 = (double)CONCAT44(DAT_8c09750c._4_4_,(undefined4)DAT_8c09750c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (float)((ulonglong)dVar14 >> 0x20);
      fVar10 = SUB84(dVar14,0) / fVar16;
      dVar14 = (double)CONCAT44(fVar16,fVar10);
      bVar17 = (float)((ulonglong)dVar13 >> 0x20) < fVar10;
    }
    else {
      dVar14 = dVar14 / dVar14;
      bVar17 = dVar13 < dVar14;
    }
    if (bVar17) {
      *(int *)((int)puVar8 + iVar1 + -0xc) = ar4;
      *(int *)(DAT_8c097520 + *(int *)((int)puVar8 + iVar1 + -0xc)) =
           *(int *)(DAT_8c097520 + *(int *)((int)puVar8 + iVar1 + -0xc)) + 1;
      piVar5 = (int *)0x0;
      ar6 = (int *)0x0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c097528)(ar4 + DAT_8c09750c._4_4_,3,0,0);
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c09752c + iVar1 + -0x1c);
    piVar6 = ar5;
    (*(code *)PTR_Vec3_sub_8c097534)
              ((undefined1 *)((int)puVar8 + DAT_8c097530 + iVar1 + -0x20),ar5,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097538 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_normalize_8c097540)
              ((undefined1 *)((int)puVar8 + DAT_8c09753c + iVar1 + -0x20),piVar6,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c097508)
              ((undefined1 *)((int)puVar8 + DAT_8c097544 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c097538 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c097548)
              ((undefined1 *)((int)puVar8 + DAT_8c097538 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c097548)
              ((undefined1 *)((int)puVar8 + DAT_8c09752c + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c09754c + iVar1 + -0x1c);
    iVar7 = ar4 + 0x14;
    (*(code *)PTR_FUN_8c097550)(iVar7,iVar7,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097554 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c097550)
              ((undefined1 *)((int)puVar8 + DAT_8c097558 + iVar1 + -0x20),iVar7,ar6,piVar5);
    (*(code *)PTR_FUN_8c09755c)
              ((undefined1 *)((int)puVar8 + DAT_8c09754c + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c097554 + iVar1 + -0x1c),ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x18) = (int)((ulonglong)dVar14 >> 0x20);
    }
    else {
      *(double *)((int)puVar8 + iVar1 + 0x18) = dVar14;
    }
    (*(code *)PTR_Vec3_dtor_8c097548)
              ((undefined1 *)((int)puVar8 + DAT_8c097554 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c097548)
              ((undefined1 *)((int)puVar8 + DAT_8c09754c + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    uVar9 = (*(code *)PTR_FUN_8c097560)
                      (ar4,(undefined1 *)((int)puVar8 + DAT_8c097504 + iVar1 + -0x1c),ar5,piVar5);
    *(undefined4 *)((int)puVar8 + iVar1 + 0x14) = uVar9;
    iVar7 = *(int *)((int)puVar8 + iVar1 + 0x14);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097564 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c097550)(ar4 + 0x14,uVar9,ar5,piVar5);
    (*(code *)PTR_Vec3_assign_8c097508)
              (ar4 + DAT_8c097568,(undefined1 *)((int)puVar8 + DAT_8c097564 + iVar1 + -0x1c),ar5,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c097548)
              ((undefined1 *)((int)puVar8 + DAT_8c097564 + iVar1 + -0x1c),0xffffffff,ar5,piVar5);
    ar6 = ar5;
  }
  else if (iVar2 == 2) {
    iVar7 = ar4 + DAT_8c09770c;
    (*(code *)PTR_Vec3_assign_8c097714)
              ((undefined1 *)((int)puVar8 + DAT_8c097710 + iVar1 + -0x1c),iVar7,ar6,piVar5);
    uVar9 = (undefined4)in_dr0;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c097720)
              (ar4 + DAT_8c097718._4_4_,iVar7,ar6,piVar5);
    uVar15 = CONCAT44(0x3f800000,uVar9);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(ulonglong *)(ar4 + 0x48) = uVar15;
    }
    *(int *)((int)puVar8 + iVar1 + -0x10) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = (ulonglong)*(uint *)(*(int *)((int)puVar8 + iVar1 + -0x10) + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + iVar1 + -0x10) + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c097724),(int)uVar15);
    }
    else {
      dVar13 = *(double *)(ar4 + DAT_8c097724);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = (float)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(fVar10,SUB84(dVar13,0) - fVar10);
    }
    else {
      dVar13 = dVar13 - dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar8 + iVar1 + -0x10) + 0x28) = SUB84(dVar13,0);
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar8 + iVar1 + -0x10) + 0x28) = in_xd0;
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097728 + iVar1 + -0x1c);
    piVar6 = ar5;
    (*(code *)PTR_Vec3_sub_8c097730)
              ((undefined1 *)((int)puVar8 + DAT_8c09772c + iVar1 + -0x20),ar5,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097734 + iVar1 + -0x1c);
    (*(code *)PTR_Vec3_normalize_8c09773c)
              ((undefined1 *)((int)puVar8 + DAT_8c097738 + iVar1 + -0x20),piVar6,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c097714)
              ((undefined1 *)((int)puVar8 + DAT_8c097740 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c097734 + iVar1 + -0x1c),ar6,piVar5);
    (*(code *)PTR_Vec3_dtor_8c097744)
              ((undefined1 *)((int)puVar8 + DAT_8c097734 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    uVar9 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c097744)
              ((undefined1 *)((int)puVar8 + DAT_8c097728 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097748 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c09774c)(ar4 + 0x14,uVar9,ar6,piVar5);
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097750 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c09774c)
              ((undefined1 *)((int)puVar8 + DAT_8c097754 + iVar1 + -0x20),PTR_FUN_8c09774c,ar6,
               piVar5);
    (*(code *)PTR_FUN_8c097758)
              ((undefined1 *)((int)puVar8 + DAT_8c097748 + iVar1 + -0x1c),
               (undefined1 *)((int)puVar8 + DAT_8c097750 + iVar1 + -0x1c),ar6,piVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar8 + iVar1 + 0x10) = (int)((ulonglong)dVar13 >> 0x20);
    }
    else {
      *(double *)((int)puVar8 + iVar1 + 0x10) = dVar13;
    }
    (*(code *)PTR_Vec3_dtor_8c097744)
              ((undefined1 *)((int)puVar8 + DAT_8c097750 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    uVar11 = SUB84(dVar13,0);
    (*(code *)PTR_Vec3_dtor_8c097744)
              ((undefined1 *)((int)puVar8 + DAT_8c097748 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
    a5 = (undefined1 *)((int)puVar8 + DAT_8c097710 + iVar1 + -0x1c);
    uVar9 = (*(code *)PTR_FUN_8c09775c)(ar4,a5,ar5,piVar5);
    *(undefined4 *)((int)puVar8 + iVar1 + 0xc) = uVar9;
    iVar7 = *(int *)((int)puVar8 + iVar1 + 0xc);
    ar6 = ar5;
    if (iVar7 == 0) {
      iVar7 = 1;
      *(undefined4 *)(ar4 + 0x40) = 3;
      piVar5 = (int *)0x0;
      ar6 = (int *)0x0;
      uVar9 = 1;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c097764)(ar4 + DAT_8c097718._4_4_,1,0,0);
      a4 = (ulonglong *)(ar4 + 0x28);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)a4 = 0;
      }
      else {
        *a4 = (ulonglong)uVar11;
      }
      uVar9 = (*(code *)PTR_rand_8c097768)(a4,uVar9,ar6,piVar5);
      *(undefined4 *)((int)puVar8 + iVar1 + 8) = uVar9;
      uVar9 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09776c)
                        (*(undefined4 *)((int)puVar8 + iVar1 + 8),10,ar6,piVar5);
      *(undefined4 *)((int)puVar8 + iVar1 + -0x14) = uVar9;
      *(int *)(DAT_8c097770 + ar4) = *(int *)((int)puVar8 + iVar1 + -0x14) + 0xf;
      a5 = DAT_8c097774;
      *(int *)((int)puVar8 + iVar1 + -0x18) = ar4;
      *(int *)(DAT_8c097774 + *(int *)((int)puVar8 + iVar1 + -0x18)) =
           *(int *)(DAT_8c097774 + *(int *)((int)puVar8 + iVar1 + -0x18)) + 1;
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c097778 + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c09774c)(ar4 + 0x14,a5,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c097714)
              (ar4 + DAT_8c09777c,(undefined1 *)((int)puVar8 + DAT_8c097778 + iVar1 + -0x1c),ar6,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c097744)
              ((undefined1 *)((int)puVar8 + DAT_8c097778 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  }
  else if (iVar2 == 3) {
    iVar2 = DAT_8c097850;
    uVar9 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c097854)
                      (ar4 + DAT_8c097850,DAT_8c097850,ar6,piVar5);
    *(undefined4 *)((int)puVar8 + iVar1 + 4) = uVar9;
    if (*(int *)((int)puVar8 + iVar1 + 4) == 1) {
      *(int *)((int)puVar8 + iVar1 + -0x1c) = ar4;
      iVar2 = *(int *)(DAT_8c097858 + *(int *)((int)puVar8 + iVar1 + -0x1c)) + -1;
      *(int *)(DAT_8c097858 + *(int *)((int)puVar8 + iVar1 + -0x1c)) = iVar2;
      if (*(int *)(DAT_8c097858 + ar4) < 1) {
        iVar7 = 0;
        iVar2 = 0x40;
        *(undefined4 *)(ar4 + 0x40) = 0;
      }
    }
    *(undefined1 **)((int)puVar8 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar8 + DAT_8c09785c + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c097860)(ar4 + 0x14,iVar2,ar6,piVar5);
    (*(code *)PTR_Vec3_assign_8c097868)
              (ar4 + DAT_8c097864,(undefined1 *)((int)puVar8 + DAT_8c09785c + iVar1 + -0x1c),ar6,
               piVar5);
    (*(code *)PTR_Vec3_dtor_8c09786c)
              ((undefined1 *)((int)puVar8 + DAT_8c09785c + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  }
LAB_8c0977f2:
  *(int *)((int)puVar8 + iVar1 + 0x5c) = iVar7;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c097874)
            ((undefined1 *)((int)puVar8 + DAT_8c097870 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  (*(code *)PTR_Vec3_dtor_8c09786c)
            ((undefined1 *)((int)puVar8 + DAT_8c097878 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  (*(code *)PTR_Vec3_dtor_8c09786c)
            ((undefined1 *)((int)puVar8 + DAT_8c09787c + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  (*(code *)PTR_Vec3_dtor_8c09786c)
            ((undefined1 *)((int)puVar8 + DAT_8c097880 + iVar1 + -0x1c),0xffffffff,ar6,piVar5);
  return *(undefined4 *)((int)puVar8 + iVar1 + 0x5c);
}



/* FUN_8c097888 @ 8c097888 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c097888(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a5;
  undefined4 uVar2;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 uVar3;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  double dVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = auStack_4;
  }
  else {
    puVar4 = auStack_8;
  }
  *(undefined4 *)(puVar4 + -4) = unaff_r14;
  *(undefined4 *)(puVar4 + -8) = unaff_r13;
  *(undefined4 *)(puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar4 + -0x10) = in_PR;
  *(undefined4 *)(puVar4 + -0xb8) = ar7;
  uVar2 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c097b38)(puVar4 + DAT_8c097b34 + -0xb8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c097b38)(puVar4 + DAT_8c097b3c + -0xb8,uVar2,ar6,ar7);
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0978d0:
    uVar2 = (*(code *)PTR_FUN_8c097b44)(ar4 + DAT_8c097b40,4,ar6,ar7);
    uVar5 = (undefined4)in_dr0;
    *(undefined4 *)(puVar4 + -0xa0) = uVar2;
    if ((*(int *)(puVar4 + -0xa0) != 1) && (*(int *)(puVar4 + -0xa0) != 2)) {
      *(undefined4 *)(puVar4 + -0x98) = 1;
      (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + DAT_8c097b3c + -0xb8,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + DAT_8c097b34 + -0xb8,0xffffffff,ar6,ar7);
      return *(undefined4 *)(puVar4 + -0x98);
    }
    uVar2 = DAT_8c097b4c;
    (*(code *)PTR_FUN_8c097b50)(ar4,DAT_8c097b4c,ar6,ar7);
    in_dr0 = CONCAT44(0x3f800000,uVar5);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_dr0;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 3) {
      iVar1 = ar4 + DAT_8c097b74;
      (*(code *)PTR_Vec3_assign_8c097b68)(puVar4 + DAT_8c097b34 + -0xb8,iVar1,ar6,ar7);
      (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c097b58)(ar4 + DAT_8c097b40,iVar1,ar6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c097b5c)(ar4 + DAT_8c097b40,iVar1,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar4 + -0xac) = (int)((ulonglong)in_dr0 >> 0x20);
        in_fr15 = *(float *)(puVar4 + -0xac);
        dVar8 = (double)CONCAT44(DAT_8c097b80,(int)in_dr0);
      }
      else {
        *(undefined8 *)(puVar4 + -0xac) = in_dr0;
        dVar8 = (double)CONCAT44(DAT_8c097b84,DAT_8c097b80);
      }
      if (in_FPSCR_PR == '\0') {
        bVar9 = in_fr15 < (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        bVar9 = (double)CONCAT44(in_fr14,in_fr15) < dVar8;
      }
      if (!bVar9) {
        *(undefined4 *)(DAT_8c097b84 + ar4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      *(undefined1 **)(puVar4 + -0xbc) = puVar4 + -0x50;
      (*(code *)PTR_FUN_8c097b88)(ar4 + 0x14,iVar1,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c097b68)(ar4 + _DAT_8c097b64,puVar4 + -0x50,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + -0x50,0xffffffff,ar6,ar7);
      *(undefined1 **)(puVar4 + -0xbc) = puVar4 + -0x60;
      uVar2 = ar5;
      (*(code *)PTR_Vec3_sub_8c097b90)(puVar4 + DAT_8c097b8c + -0xbc,ar5,ar6,ar7);
      *(undefined1 **)(puVar4 + -0xbc) = puVar4 + -0x70;
      (*(code *)PTR_Vec3_normalize_8c097b94)(puVar4 + -0x60,uVar2,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c097b68)(puVar4 + DAT_8c097b3c + -0xb8,puVar4 + -0x70,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + -0x70,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + -0x60,0xffffffff,ar6,ar7);
      *(undefined1 **)(puVar4 + -0xbc) = puVar4 + -0x80;
      (*(code *)PTR_FUN_8c097b88)(ar4 + 0x14,uVar2,ar6,ar7);
      *(undefined1 **)(puVar4 + -0xbc) = puVar4 + -0x90;
      (*(code *)PTR_FUN_8c097b88)(puVar4 + DAT_8c097b98 + -0xbc,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c097b9c)(puVar4 + -0x80,puVar4 + -0x90,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar4 + -0xb0) = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined4 *)(puVar4 + -0x94) = *(undefined4 *)(puVar4 + -0xb0);
      }
      else {
        *(double *)(puVar4 + -0xb0) = dVar8;
        *(undefined8 *)(puVar4 + -0x94) = *(undefined8 *)(puVar4 + -0xb0);
      }
      (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + -0x90,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + -0x80,0xffffffff,ar6,ar7);
      uVar2 = (*(code *)PTR_FUN_8c097ba0)(ar4,puVar4 + DAT_8c097b34 + -0xb8,ar5,ar7);
      *(undefined4 *)(puVar4 + -0xb4) = uVar2;
      uVar3 = *(undefined4 *)(puVar4 + -0xb4);
      ar6 = ar5;
      goto LAB_8c097b04;
    }
    if (iVar1 != 5) goto LAB_8c097b04;
    goto LAB_8c0978d0;
  }
  (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c097b58)(ar4 + DAT_8c097b40,uVar2,ar6,ar7);
  (*(code *)PTR_CAnimBody_GetCurFrame_8c097b5c)(ar4 + DAT_8c097b40,uVar2,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar4 + -0xa4) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar4 + -0xa4);
    dVar8 = (double)CONCAT44(DAT_8c097b60,(int)in_dr0);
  }
  else {
    *(undefined8 *)(puVar4 + -0xa4) = in_dr0;
    dVar8 = (double)CONCAT44(_DAT_8c097b64,DAT_8c097b60);
  }
  if (in_FPSCR_PR == '\0') {
    bVar9 = (float)((ulonglong)dVar8 >> 0x20) < in_fr15;
  }
  else {
    bVar9 = dVar8 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar9) {
    (*(code *)PTR_Vec3_assign_8c097b68)(ar4 + 0x14,ar4 + _DAT_8c097b64,ar6,ar7);
    *(undefined1 **)(puVar4 + -0xbc) = puVar4 + -0x40;
    ar6 = *(undefined4 *)(puVar4 + DAT_8c097b6c + -0xbc);
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(DAT_8c097b54,SUB84(dVar8,0));
    }
    else {
      uVar7 = CONCAT44(PTR_s_CAnimBody_AdvanceFrame_033ba0_8c097b58,DAT_8c097b54);
    }
    (*(code *)PTR_FUN_8c097b70)(ar4,*(undefined4 *)(puVar4 + -0xb8),ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c097b68)(ar4 + DAT_8c097b74,puVar4 + -0x40,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + -0x40,0xffffffff,ar6,ar7);
    a5 = puVar4 + DAT_8c097b34 + -0xb8;
    (*(code *)PTR_FUN_8c097b78)(ar5,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0xa8) = (int)((ulonglong)uVar7 >> 0x20);
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(puVar4 + -0xa8));
    }
    else {
      *(undefined8 *)(puVar4 + -0xa8) = uVar7;
      in_xd0 = *(undefined8 *)(puVar4 + -0xa8);
      dVar8 = *(double *)(ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 / dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar6;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    (*(code *)PTR_FUN_8c097b7c)(ar4,a5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
LAB_8c097b04:
  *(undefined4 *)(puVar4 + -0x9c) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + DAT_8c097b3c + -0xb8,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c097b48)(puVar4 + DAT_8c097b34 + -0xb8,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar4 + -0x9c);
}



/* FUN_8c097ba4 @ 8c097ba4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c097ce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c097ba4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 a6;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  uVar3 = ar6;
  a6 = ar6;
  (*(code *)PTR_Vec3_sub_8c097dd8)(ar5,ar6,ar6,ar7);
  (*(code *)PTR_Vec3_normalize_8c097ddc)(auStack_34,uVar3,a6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c097de0)(auStack_24,auStack_44,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c097de4)(auStack_44,0xffffffff,a6,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c097de4)(auStack_34,0xffffffff,a6,ar7);
  uVar3 = 1;
  if (*(int *)(ar4 + 0x40) == 0) {
    (*(code *)PTR_Vec3_dtor_8c097de4)(auStack_24,0xffffffff,a6,ar7);
    uVar3 = 0;
  }
  else {
    if ((*(int *)(ar4 + 0x40) == 1) || (*(int *)(ar4 + 0x40) == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        (*(code *)PTR_FUN_8c097de8)(ar4,uVar2,a6,ar7);
      }
      pdVar1 = (double *)(ar4 + 0x2c);
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      dVar5 = in_xd0;
      if (in_FPSCR_SZ == '\0') {
        uStack_88 = (double)CONCAT44(uStack_88._4_4_,fVar4);
        dVar5 = uStack_88;
      }
      uStack_88 = dVar5;
      (*(code *)PTR_Vec3_scale_8c097dec)(auStack_24,&uStack_88,a6,ar7);
      (*(code *)PTR_Vec3_add_8c097df0)(ar4 + 0x14,auStack_54,a6,ar7);
      (*(code *)PTR_FUN_8c097df4)(ar4 + 0x14,auStack_64,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c097de4)(auStack_64,0xffffffff,a6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c097de4)(auStack_54,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_normalize_8c097ddc)(ar4 + 0x14,uVar2,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c097df8)(ar4 + 0x14,auStack_74,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c097de4)(auStack_74,0xffffffff,a6,ar7);
      pdVar1 = (double *)(ar4 + 0x2c);
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (SUB84(dVar5,0) != (float)((ulonglong)dVar5 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0' && 0.0 < SUB84(dVar5,0)) {
          if (in_FPSCR_SZ == '\0') {
            dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar5 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 / dVar5,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar4);
          }
          else {
            dVar5 = *(double *)(ar4 + 0x2c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + 0x2c) = fVar4;
          }
          else {
            *(double *)(ar4 + 0x2c) = in_xd0;
          }
        }
        pdVar1 = (double *)(ar4 + 0x2c);
        if (in_FPSCR_SZ != '\0') {
          in_xd0 = *pdVar1;
          pdVar1 = (double *)(ar4 + 0x30);
        }
        dVar5 = *pdVar1;
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar5,0)) {
          if (in_FPSCR_SZ == '\0') {
            uVar2 = *(undefined4 *)(ar4 + 0x30);
            dVar5 = (double)CONCAT44(uVar2,SUB84(dVar5,0));
            *(undefined4 *)(ar4 + 0x2c) = uVar2;
          }
          else {
            dVar5 = *(double *)(ar4 + 0x30);
            *(double *)(ar4 + 0x2c) = dVar5;
          }
        }
      }
      (*(code *)PTR_FUN_8c097dfc)(ar6,ar5,a6,ar7);
      uVar2 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
        uStack_94 = uVar2;
      }
      else {
        uStack_94 = SUB84(dVar5,0);
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar5 = *(double *)(ar4 + 0x48);
        uStack_90 = uVar2;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(uStack_94,fVar4);
      }
      else {
        uVar6 = CONCAT44(uStack_90,uStack_94);
      }
      if (in_FPSCR_PR != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        dVar5 = (double)(uVar6 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(double *)(ar4 + 0x2c) = dVar5;
        }
        (*(code *)PTR_FUN_8c097e00)(ar4 + 0x14,ar5,a6,ar7);
        (*(code *)PTR_FUN_8c097e04)(ar4 + 0x14,(int)&uStack_88 + 4,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c097e08,(int)((ulonglong)dVar5 >> 0x20));
          dVar5 = in_xd0;
        }
        else {
          dVar7 = (double)CONCAT44(_FUN_8c097e0c,DAT_8c097e08);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x38) = fVar4;
        }
        else {
          *(double *)(ar4 + 0x38) = dVar5;
        }
        (*(code *)PTR_Vec3_dtor_8c097de4)((int)&uStack_88 + 4,0xffffffff,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          dVar5 = *(double *)(ar4 + 0x28);
          dVar7 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar4;
        }
        else {
          *(double *)(ar4 + 0x3c) = dVar5;
        }
        *(undefined4 *)(ar4 + 0x40) = 0;
        uVar3 = 0;
      }
    }
    (*(code *)PTR_Vec3_dtor_8c097de4)(auStack_24,0xffffffff,a6,ar7);
  }
  return uVar3;
}



/* FUN_8c097e0c @ 8c097e0c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c097e0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  iVar1 = *(int *)(DAT_8c097ed0 + ar4);
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c097edc)(ar4 + DAT_8c097ed4._4_4_,2,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c097ee0)(ar4 + DAT_8c097ed4._4_4_,ar5,ar6,ar7);
    *(int *)(DAT_8c097ed0 + ar4) = *(int *)(DAT_8c097ed0 + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    return 0;
  }
  iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c097ee4)
                    (ar4 + DAT_8c097ed4._4_4_,ar5,ar6,ar7);
  if (iVar1 == 1) {
    a5 = 2;
    (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c097ee8)(ar4 + DAT_8c097ed4._4_4_,2,ar6,ar7);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c097ee0)(ar4 + DAT_8c097ed4._4_4_,a5,ar6,ar7);
    *(int *)(DAT_8c097ed0 + ar4) = *(int *)(DAT_8c097ed0 + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}



/* FUN_8c097ef0 @ 8c097ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c097ef0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  *(undefined4 *)(DAT_8c097f8c + ar4) = 0;
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(undefined4 *)(DAT_8c097f90 + ar4) = 0;
  (*(code *)PTR_FUN_8c097f98)(ar4 + DAT_8c097f94,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c097f9c)(ar4 + DAT_8c097f94,ar5,ar6,ar7);
  a5 = 1;
  (*(code *)PTR_FUN_8c097fa0)(ar4 + DAT_8c097f94,1,ar6,ar7);
  *(undefined4 *)(DAT_8c097fa4 + ar4) = 0;
  *(undefined4 *)(DAT_8c097fa8 + ar4) = 0;
  (*(code *)PTR_FUN_8c097fb0)(ar4 + DAT_8c097fac,a5,ar6,ar7);
  *(undefined4 *)(DAT_8c097fb4 + ar4) = 1;
  if ((-1 < *(int *)(DAT_8c097fb8 + ar4)) && (-1 < *(int *)(DAT_8c097fbc + ar4))) {
    (*(code *)PTR_FUN_8c097fc0)
              (*(undefined4 *)(DAT_8c097fb8 + ar4),*(undefined4 *)(DAT_8c097fbc + ar4),ar6,ar7);
    *(undefined4 *)(DAT_8c097fb8 + ar4) = 0xffffffff;
    *(undefined4 *)(DAT_8c097fbc + ar4) = 0xffffffff;
  }
  *(undefined4 *)(DAT_8c097fc4 + ar4) = 0;
  iVar1 = DAT_8c097fc8;
  *(undefined4 *)(DAT_8c097fc8 + ar4) = 0;
  return iVar1;
}



/* FUN_8c097fcc @ 8c097fcc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c097fcc(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  double dVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  float fVar9;
  ulonglong uVar8;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_a4;
  undefined1 *apuStack_a0 [3];
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [32];
  
  apuStack_a0[0] = ar5;
  apuStack_a0[1] = ar6;
  apuStack_a0[2] = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c098234)((int)apuStack_a0 + DAT_8c098230,ar5,ar6,ar7);
  uVar4 = (undefined4)in_dr0;
  if (*(int *)(DAT_8c098238 + ar4) == 0) {
    (*(code *)PTR_FUN_8c09823c)((int)apuStack_a0 + DAT_8c098230,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c098248)(auStack_28,ar5,ar6,ar7);
    puStack_a4 = auStack_38;
    (*(code *)PTR_FUN_8c098250)((int)&puStack_a4 + DAT_8c09824c,auStack_28,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c098254)((int)apuStack_a0 + DAT_8c098230,auStack_38,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c098258)(auStack_38,0xffffffff,ar6,ar7);
    uVar3 = 0xffffffff;
    puVar2 = auStack_28;
    (*(code *)PTR_object_dtor_delete_8c09825c)(puVar2,0xffffffff,ar6,ar7);
    uStack_78 = (*(code *)PTR_rand_8c098260)(puVar2,uVar3,ar6,ar7);
    uVar3 = DAT_8c098264;
    uStack_84 = (*(code *)PTR_libgcc_divide_helper_01031c_8c098268)(uStack_78,DAT_8c098264,ar6,ar7);
    puStack_a4 = auStack_48;
    (*(code *)PTR_FUN_8c09826c)((int)&puStack_a4 + DAT_8c09824c,uVar3,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c098254)((int)apuStack_a0 + DAT_8c098230,auStack_48,ar6,ar7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c098258)(auStack_48,0xffffffff,ar6,ar7);
    puStack_a4 = auStack_58;
    (*(code *)PTR_Vec3_normalize_8c098270)((int)&puStack_a4 + DAT_8c09824c,uVar3,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c098254)((int)apuStack_a0 + DAT_8c098230,auStack_58,ar6,ar7);
    uVar3 = 0xffffffff;
    puVar2 = auStack_58;
    (*(code *)PTR_Vec3_dtor_8c098258)(puVar2,0xffffffff,ar6,ar7);
    uStack_7c = (*(code *)PTR_rand_8c098260)(puVar2,uVar3,ar6,ar7);
    iStack_88 = (*(code *)PTR_libgcc_divide_helper_01031c_8c098268)(uStack_7c,0x50,ar6,ar7);
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)iStack_88,uVar4);
    }
    else {
      dVar7 = (double)iStack_88;
    }
    dVar1 = dVar7;
    if (in_FPSCR_SZ == '\0') {
      uStack_70 = (double)CONCAT44(uStack_70._4_4_,(int)((ulonglong)dVar7 >> 0x20));
      dVar1 = uStack_70;
    }
    uStack_70 = dVar1;
    (*(code *)PTR_FUN_8c098274)((int)apuStack_a0 + DAT_8c098230,&uStack_70,ar6,ar7);
    uVar5 = SUB84(dVar7,0);
    puStack_a4 = auStack_68;
    (*(code *)PTR_Vec3_add_8c098278)(apuStack_a0[1],(int)&puStack_a4 + DAT_8c09824c,ar6,ar7);
    puStack_a4 = *(undefined1 **)((int)apuStack_a0 + DAT_8c09827c);
    ar6 = auStack_68;
    ar7 = apuStack_a0[2];
    iStack_80 = (*(code *)PTR_FUN_8c098280)(ar4,apuStack_a0[0],ar6,apuStack_a0[2]);
    uStack_74 = (uint)(iStack_80 == 0);
    (*(code *)PTR_Vec3_dtor_8c098258)(auStack_68,0xffffffff,ar6,ar7);
    if (uStack_74 != 0) {
      *(int *)(DAT_8c098238 + ar4) = *(int *)(DAT_8c098238 + ar4) + 1;
      ar7 = (undefined1 *)0x0;
      ar6 = (undefined1 *)0x0;
      uVar4 = 0;
      iStack_8c = ar4;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c09828c)(ar4 + DAT_8c098284._4_4_,0,0,0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c098290) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c098290) = (ulonglong)uVar5;
      }
      (*(code *)PTR_FUN_8c098298)(ar4 + DAT_8c098294,uVar4,ar6,ar7);
      (*(code *)PTR_FUN_8c0982a0)(*(undefined4 *)((int)apuStack_a0 + DAT_8c09829c),uVar4,ar6,ar7);
    }
  }
  else if (*(int *)(DAT_8c098238 + ar4) == 1) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + DAT_8c098290);
      fVar9 = DAT_8c0982a4;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c098290);
      fVar6 = DAT_8c0982a4;
      fVar9 = DAT_8c0982a8;
    }
    if (in_FPSCR_PR != '\0' || fVar9 <= fVar6) {
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0982b0)(ar4 + DAT_8c098284._4_4_,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + DAT_8c098290);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c098290);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c098290) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c098290) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(DAT_8c0982b4,*(undefined4 *)(ar4 + DAT_8c098290));
      }
      else {
        uVar8 = CONCAT44(_FUN_8c0982b8,DAT_8c0982b4);
      }
      iStack_94 = ar4;
      if (in_FPSCR_PR == '\0' && (float)(uVar8 >> 0x20) < (float)uVar8) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c098290) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c098290) = uVar8 & 0xffffffff;
        }
      }
    }
    else {
      (*(code *)PTR_FUN_8c0982ac)(ar4 + DAT_8c098284._4_4_,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + DAT_8c098290);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c098290);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
      }
      iStack_90 = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c098290) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c098290) = in_xd0;
      }
    }
  }
  uStack_70._4_4_ = 1;
  (*(code *)PTR_Vec3_dtor_8c098258)((int)apuStack_a0 + DAT_8c098230,0xffffffff,ar6,ar7);
  return uStack_70._4_4_;
}



/* FUN_8c0982b8 @ 8c0982b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0982b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0982c0;
  *(undefined1 *)(DAT_8c0982c0 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c0982c4 @ 8c0982c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c098474) */
/* WARNING: Removing unreachable block (ram,0x8c098322) */
/* WARNING: Removing unreachable block (ram,0x8c098326) */
/* WARNING: Removing unreachable block (ram,0x8c098478) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0982c4(int *ar4,float *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined1 *puVar3;
  int a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  float fVar5;
  double in_dr0;
  undefined4 uVar8;
  ulonglong uVar6;
  double dVar7;
  double in_dr14;
  double dVar9;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = in_PR;
  *(undefined4 *)((int)puVar4 + -0xf4) = ar7;
  pfVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0984c8)((int)ar4 + DAT_8c0984c4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0984d0)
            ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),pfVar2,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0984d0)
            ((undefined1 *)((int)puVar4 + DAT_8c0984d4 + -0xf4),pfVar2,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0984d0)
            ((undefined1 *)((int)puVar4 + DAT_8c0984d8 + -0xf4),pfVar2,a6,ar7);
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(DAT_8c0984dc + (int)ar4) << 0x1e) < 0))
  {
    (*(code *)PTR_Vec3_assign_8c0984e0)
              ((undefined1 *)((int)puVar4 + DAT_8c0984d4 + -0xf4),ar5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0984e0)
              ((undefined1 *)((int)puVar4 + DAT_8c0984d8 + -0xf4),*(int *)(ar6 + 0x68) + 4,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + DAT_8c0984e4));
    }
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + DAT_8c0984e8 + -0xf4);
    (*(code *)PTR_Vec3_sub_8c0984f4)
              ((undefined1 *)((int)puVar4 + DAT_8c0984f0 + -0xf8),
               (undefined1 *)((int)puVar4 + DAT_8c0984ec + -0xf8),a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0984e0)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),
               (undefined1 *)((int)puVar4 + DAT_8c0984e8 + -0xf4),a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0984f8)
              ((undefined1 *)((int)puVar4 + DAT_8c0984e8 + -0xf4),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0984fc)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),uVar1,a6,ar7);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + -200) = uVar8;
      in_dr0 = (double)CONCAT44(uVar8,ar4[0x12]);
    }
    else {
      *(double *)((int)puVar4 + -200) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -200),fVar5);
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)((int)puVar4 + -0xc4) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0xc4);
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c098500,fVar5);
        *(undefined4 *)((int)puVar4 + -0xc4) = DAT_8c098500;
      }
      else {
        uVar6 = CONCAT44(PTR_Vec3_length_8c098504,DAT_8c098500);
        *(ulonglong *)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (*(code *)PTR_Vec3_length_8c098504)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),uVar1,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0984fc)(ar4 + 1,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xcc) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)((int)puVar4 + -0xcc);
    }
    else {
      *(ulonglong *)((int)puVar4 + -0xcc) = uVar6;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0xcc);
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + DAT_8c098508 + -0xf4);
      (*(code *)PTR_Vec3_scale_8c098510)(ar4 + 5,PTR_DAT_8c09850c,a6,ar7);
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + DAT_8c098514 + -0xf4);
      puVar3 = (undefined1 *)((int)puVar4 + DAT_8c098518 + -0xf8);
      (*(code *)PTR_Vec3_add_8c098520)
                ((undefined1 *)((int)puVar4 + DAT_8c09851c + -0xf8),puVar3,a6,ar7);
      uVar1 = (*(code *)PTR_Vec3_length_8c098504)
                        ((undefined1 *)((int)puVar4 + DAT_8c098514 + -0xf4),puVar3,a6,ar7);
      *(undefined4 *)((int)puVar4 + -0xd0) = uVar1;
      (*(code *)PTR_Vec3_assign_8c0984e0)
                ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),
                 *(undefined4 *)((int)puVar4 + -0xd0),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0984f8)
                ((undefined1 *)((int)puVar4 + DAT_8c098514 + -0xf4),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0984f8)
                ((undefined1 *)((int)puVar4 + DAT_8c098508 + -0xf4),0xffffffff,a6,ar7);
    }
    (*(code *)PTR_FUN_8c098524)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),
               (undefined1 *)((int)puVar4 + -0xc4),a6,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + DAT_8c09851c + -0xf4) = 0;
    }
    else {
      *(double *)((int)puVar4 + DAT_8c09851c + -0xf4) = in_dr0;
    }
    pfVar2 = (float *)((int)puVar4 + DAT_8c0984cc + -0xf4);
    (*(code *)PTR_Vec3_assign_8c0984e0)((int)ar4 + DAT_8c0984c4,pfVar2,a6,ar7);
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(DAT_8c0984dc + (int)ar4) << 0x1d) < 0)) {
    if ((-1 < *(int *)(DAT_8c098528 + (int)ar4)) && (-1 < *(int *)(DAT_8c09852c + (int)ar4))) {
      uVar1 = (**(code **)(DAT_8c098530 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                        (*(int *)(ar6 + 0x50),pfVar2,a6,ar7);
      *(undefined4 *)((int)puVar4 + -0xd4) = uVar1;
      if (*(int *)((int)puVar4 + -0xd4) == 0x12) {
        (**(code **)(*ar4 + 0x2c))(ar4,pfVar2,a6,ar7);
      }
      else {
        uVar1 = (**(code **)(DAT_8c098598 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                          (*(int *)(ar6 + 0x50),pfVar2,a6,ar7);
        *(undefined4 *)((int)puVar4 + -0xd8) = uVar1;
        if (*(int *)((int)puVar4 + -0xd8) == 0x13) {
          uVar1 = (**(code **)(DAT_8c09859c + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                            (*(int *)(ar6 + 0x50),pfVar2,a6,ar7);
          *(undefined4 *)((int)puVar4 + -0xdc) = uVar1;
          if (*(int *)((int)puVar4 + -0xdc) == 9) {
            (**(code **)(*ar4 + 0x2c))(ar4,pfVar2,a6,ar7);
          }
        }
      }
      (*(code *)PTR_Vec3_dtor_8c0985a4)
                ((undefined1 *)((int)puVar4 + DAT_8c0985a0 + -0xf4),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0985a4)
                ((undefined1 *)((int)puVar4 + DAT_8c0985a8 + -0xf4),0xffffffff,a6,ar7);
      uVar1 = (*(code *)PTR_Vec3_dtor_8c0985a4)
                        ((undefined1 *)((int)puVar4 + DAT_8c0985ac + -0xf4),0xffffffff,a6,ar7);
      return uVar1;
    }
    (**(code **)(DAT_8c098738 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
              (*(int *)(ar6 + 0x50),pfVar2,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xe0) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + -0xe0));
      dVar7 = (double)CONCAT44(DAT_8c09873c,SUB84(in_dr0,0));
    }
    else {
      *(double *)((int)puVar4 + -0xe0) = in_dr0;
      dVar7 = (double)CONCAT44(DAT_8c098740,DAT_8c09873c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar9 = in_dr14 + dVar7;
    }
    pfVar2 = ar5;
    (*(code *)PTR_Vec3_assign_8c098744)
              ((undefined1 *)((int)puVar4 + DAT_8c098740 + -0xf4),ar5,a6,ar7);
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0x80);
    (*(code *)PTR_FUN_8c098748)(*(undefined4 *)(ar6 + 0x50),pfVar2,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c098744)
              ((undefined1 *)((int)puVar4 + DAT_8c09874c + -0xf4),
               (undefined1 *)((int)puVar4 + -0x80),a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0x80),0xffffffff,a6,ar7);
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0x90);
    (*(code *)PTR_Vec3_sub_8c09875c)
              ((undefined1 *)((int)puVar4 + DAT_8c098758 + -0xf8),
               (undefined1 *)((int)puVar4 + DAT_8c098754 + -0xf8),a6,ar7);
    (*(code *)PTR_Vec3_assign_8c098744)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),
               (undefined1 *)((int)puVar4 + -0x90),a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0x90),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c098764)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),uVar1,a6,ar7);
    uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + -0xe4) = uVar8;
      dVar7 = (double)CONCAT44(uVar8,ar4[0x12]);
    }
    else {
      *(double *)((int)puVar4 + -0xe4) = dVar7;
      in_xd0 = *(undefined8 *)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) + SUB84(dVar9,0);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0xe4),fVar5);
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0xe4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c098768,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c09876c,DAT_8c098768);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)((int)puVar4 + -0xc4) = in_xd0;
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c09876c,fVar5);
        *(undefined4 *)((int)puVar4 + -0xc4) = DAT_8c09876c;
      }
      else {
        uVar6 = CONCAT44(PTR_Vec3_length_8c098770,DAT_8c09876c);
        *(ulonglong *)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (*(code *)PTR_Vec3_length_8c098770)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),uVar1,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c098764)(ar4 + 1,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xe8) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)((int)puVar4 + -0xe8);
    }
    else {
      *(ulonglong *)((int)puVar4 + -0xe8) = uVar6;
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xa0);
      (*(code *)PTR_Vec3_scale_8c098778)(ar4 + 5,PTR_DAT_8c098774,a6,ar7);
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xb0);
      puVar3 = (undefined1 *)((int)puVar4 + -0xa0);
      (*(code *)PTR_Vec3_add_8c098780)
                ((undefined1 *)((int)puVar4 + DAT_8c09877c + -0xf8),puVar3,a6,ar7);
      uVar1 = (*(code *)PTR_Vec3_length_8c098770)((undefined1 *)((int)puVar4 + -0xb0),puVar3,a6,ar7)
      ;
      *(undefined4 *)((int)puVar4 + -0xec) = uVar1;
      (*(code *)PTR_Vec3_assign_8c098744)
                ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),
                 *(undefined4 *)((int)puVar4 + -0xec),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0xb0),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0xa0),0xffffffff,a6,ar7);
    }
    (*(code *)PTR_FUN_8c098784)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),
               (undefined1 *)((int)puVar4 + -0xc4),a6,ar7);
    puVar3 = (undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4);
    (*(code *)PTR_FUN_8c09878c)((int)ar4 + DAT_8c098788,puVar3,a6,ar7);
    if (*(int *)(DAT_8c098790 + (int)ar4) == 3) {
      if ((*(int *)(DAT_8c098794 + (int)ar4) == 10) && (*(int *)(DAT_8c098798 + (int)ar4) < 2)) {
        *(undefined4 *)(DAT_8c098798 + (int)ar4) = 0;
        ar4[0x10] = 5;
      }
      else if ((*(int *)(DAT_8c098800 + (int)ar4) == 2) && (*(int *)(DAT_8c098804 + (int)ar4) != 10)
              ) {
        *(undefined4 *)(DAT_8c098808 + (int)ar4) = 1;
        *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xc0);
        (*(code *)PTR_FUN_8c098810)((int)ar4 + DAT_8c09880c,puVar3,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c098814)(ar4 + 5,(undefined1 *)((int)puVar4 + -0xc0),a6,ar7);
        uVar1 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c098818)((undefined1 *)((int)puVar4 + -0xc0),0xffffffff,a6,ar7);
        *(undefined4 *)(DAT_8c098800 + (int)ar4) = 0;
        ar4[0x10] = 5;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c098820)((int)ar4 + DAT_8c09881c,uVar1,a6,ar7);
      }
    }
    else {
      uVar1 = (*(code *)PTR_get_field_24_026024_8c098888)
                        (*(undefined4 *)((int)puVar4 + -0xf4),puVar3,a6,ar7);
      *(undefined4 *)((int)puVar4 + -0xf0) = uVar1;
      if (*(int *)((int)puVar4 + -0xf0) == 0) {
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *ar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c09888c),fVar5);
        }
        else {
          dVar7 = *(double *)((int)ar4 + DAT_8c09888c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(DAT_8c098890,fVar5);
        }
        else {
          uVar6 = CONCAT44(DAT_8c098894,DAT_8c098890);
        }
        if (in_FPSCR_PR == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + DAT_8c09888c) = 0;
          }
          else {
            *(ulonglong *)((int)ar4 + DAT_8c09888c) = uVar6 & 0xffffffff;
          }
        }
      }
    }
  }
  (*(code *)PTR_Vec3_dtor_8c098898)
            ((undefined1 *)((int)puVar4 + DAT_8c098894 + -0xf4),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c098898)
            ((undefined1 *)((int)puVar4 + DAT_8c09889c + -0xf4),0xffffffff,a6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c098898)
                    ((undefined1 *)((int)puVar4 + DAT_8c0988a0 + -0xf4),0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c0988a4 @ 8c0988a4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0988a4(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int *a6;
  float fVar2;
  ulonglong in_dr0;
  double dVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = *(int *)(DAT_8c0989bc + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c0989c4)(ar4 + DAT_8c0989c0,ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c0989c8 + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(DAT_8c0989cc + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0989d0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0989d0) = in_dr0 & 0xffffffff;
    }
    *(int *)(DAT_8c0989bc + ar4) = *(int *)(DAT_8c0989bc + ar4) + 1;
    (*(code *)PTR_FUN_8c0989d4)(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    a6 = ar6;
    (*(code *)PTR_FUN_8c0989e0)(ar4,ar5,ar6,ar7);
    iVar1 = ar5;
    (**(code **)(DAT_8c0989e4 + *ar6))(ar6,ar5,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44((int)(in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(ar5 + 4);
    }
    if (in_FPSCR_PR != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
      *(undefined4 *)(DAT_8c0989bc + ar4) = 0;
      *(undefined4 *)(DAT_8c0989cc + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0989d0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0989d0) = in_dr0 & 0xffffffff;
      }
      (*(code *)PTR_FUN_8c0989e8)(ar4,iVar1,a6,ar7);
      return 0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0989ec,*(undefined4 *)(ar4 + DAT_8c0989d0));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0989d0);
      dVar3 = (double)CONCAT44(_FUN_8c0989f0,DAT_8c0989ec);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 + dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0989d0) = fVar2;
      return 1;
    }
    *(undefined8 *)(ar4 + DAT_8c0989d0) = in_xd0;
    return 1;
  }
  iVar1 = *(int *)(DAT_8c0989cc + ar4);
  *(int *)(DAT_8c0989cc + ar4) = iVar1 + 1;
  if (DAT_8c0989d8 <= iVar1 + 1) {
    *(int *)(DAT_8c0989bc + ar4) = *(int *)(DAT_8c0989bc + ar4) + 1;
  }
  return 1;
}



/* FUN_8c0989f0 @ 8c0989f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0989f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 a7;
  undefined8 in_dr0;
  undefined4 uVar4;
  char in_FPSCR_SZ;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  if (*(int *)(DAT_8c098b38 + ar4) == 3) {
    iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c098b44)(ar4 + DAT_8c098b40,ar5,ar6,ar7);
    if (iVar1 == 1) {
      uVar3 = 100;
      uVar2 = 0;
      iStack_10 = (*(code *)PTR_rand_range_8c098b48)(ar4,0,100,ar7);
      if (iStack_10 < 0x3c) {
        (*(code *)PTR_FUN_8c098b54)(ar4,uVar2,uVar3,ar7);
        iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
        iStack_14 = iVar1;
        if (in_FPSCR_SZ != '\0') {
          iStack_14 = (int)in_dr0;
          iStack_10 = iVar1;
        }
        iVar1 = 0x14;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c098b3c) = iStack_14;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c098b3c) = CONCAT44(iStack_10,iStack_14);
        }
      }
      else {
        (*(code *)PTR_FUN_8c098b54)(ar4,uVar2,uVar3,ar7);
        uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        uStack_18 = uVar2;
        if (in_FPSCR_SZ != '\0') {
          uStack_18 = (undefined4)in_dr0;
          iStack_14 = uVar2;
        }
        iVar1 = 0x10;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c098b3c) = uStack_18;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c098b3c) = CONCAT44(iStack_14,uStack_18);
        }
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c098b44)(ar4 + DAT_8c098b40,ar5,ar6,ar7);
    if (iVar1 == 1) {
      iStack_20 = (*(code *)PTR_rand_range_8c098b48)(ar4,0,100,ar7);
      if (iStack_20 < 0x50) {
        a7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 1;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c098b60)(ar4 + DAT_8c098b40,1,0xffffffff,0);
        (*(code *)PTR_FUN_8c098b54)(ar4,uVar2,uVar3,a7);
        iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
        iStack_24 = iVar1;
        if (in_FPSCR_SZ != '\0') {
          iStack_24 = (int)in_dr0;
          iStack_20 = iVar1;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c098b3c) = iStack_24;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c098b3c) = CONCAT44(iStack_20,iStack_24);
        }
      }
      else {
        a7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 7;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c098b60)(ar4 + DAT_8c098b40,7,0xffffffff,0);
        (*(code *)PTR_FUN_8c098b54)(ar4,uVar2,uVar3,a7);
        uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        uStack_28 = uVar4;
        if (in_FPSCR_SZ != '\0') {
          uStack_28 = (undefined4)in_dr0;
          iStack_24 = uVar4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c098b3c) = uStack_28;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c098b3c) = CONCAT44(iStack_24,uStack_28);
        }
      }
      iVar1 = (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c098b68)(ar4 + DAT_8c098b40,uVar2,uVar3,a7)
      ;
    }
  }
  return iVar1;
}



/* FUN_8c098b6c @ 8c098b6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c098b6c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c098c4c)(PTR_DAT_8c098c48,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c098c54;
  uVar2 = DAT_8c098c50;
  (*(code *)PTR_global_list_push_8c098c58)(uVar1,PTR_Vec3_dtor_8c098c54,DAT_8c098c50,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c098c4c)(PTR_DAT_8c098c5c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c098c54;
  uVar2 = DAT_8c098c60;
  (*(code *)PTR_global_list_push_8c098c58)(uVar1,PTR_Vec3_dtor_8c098c54,DAT_8c098c60,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c098c4c)(PTR_DAT_8c098c64,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c098c54;
  uVar2 = DAT_8c098c68;
  (*(code *)PTR_global_list_push_8c098c58)(uVar1,PTR_Vec3_dtor_8c098c54,DAT_8c098c68,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c098c4c)(PTR_DAT_8c098c6c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c098c54;
  uVar2 = DAT_8c098c70;
  (*(code *)PTR_global_list_push_8c098c58)(uVar1,PTR_Vec3_dtor_8c098c54,DAT_8c098c70,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c098c74 = *(undefined4 *)DAT_8c098c78;
  }
  else {
    *(undefined8 *)PTR_DAT_8c098c74 = *DAT_8c098c78;
  }
  uVar1 = (*(code *)PTR_FUN_8c098c8c)(auStack_1c,puVar3,uVar2,ar7);
  (*(code *)PTR_FUN_8c098c94)(DAT_8c098c90,uVar1,uVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c098c8c)(auStack_34,uVar1,uVar2,ar7);
  uVar2 = (*(code *)PTR_FUN_8c098c94)(DAT_8c098ca4,uVar1,uVar2,ar7);
  return uVar2;
}



/* FUN_8c098ca8 @ 8c098ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c098ca8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c098cc4)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c098cc8;
  return ar4;
}



/* Class_12a7a8_m0_098ccc @ 8c098ccc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a7a8_m0_098ccc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c098d08;
    a5 = 0;
    (*(code *)PTR_Class_129c70_m0_02f1b8_8c098d0c)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c098d10)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12a7a8_m1_098d14 @ 8c098d14 callers=0 callees=0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int Class_12a7a8_m1_098d14(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *a6;
  undefined *a7;
  int iVar5;
  int iVar6;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  char cStack_f8;
  char cStack_f7;
  short sStack_f6;
  short sStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  undefined8 uStack_7c;
  
  iVar6 = 0;
  iVar5 = 0;
  *(undefined4 *)(PTR_DAT_8c098e4c + DAT_8c098e50) = *(undefined4 *)(DAT_8c098e50 + ar4);
  *(undefined4 *)(PTR_DAT_8c098e4c + DAT_8c098e54) = *(undefined4 *)(DAT_8c098e54 + ar4);
  *(undefined4 *)(PTR_DAT_8c098e4c + DAT_8c098e58) = *(undefined4 *)(DAT_8c098e58 + ar4);
  piVar3 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c098e5c)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_get_field_24_026024_8c098e60)(ar5,piVar3,a6,ar7);
  *(undefined4 *)((int)&cStack_f8 + DAT_8c098e64) = uVar1;
  if (*(int *)((int)&cStack_f8 + DAT_8c098e64) == 0) {
    iVar2 = ar6[1];
    uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c098e68)(iVar2,piVar3,a6,ar7);
    *(undefined4 *)((int)&cStack_f8 + DAT_8c098e6c) = uVar1;
    if (*(int *)((int)&cStack_f8 + DAT_8c098e6c) == 0x13) {
      uVar1 = (*(code *)PTR_rand_8c098e70)(iVar2,piVar3,a6,ar7);
      *(undefined4 *)((int)&cStack_f8 + DAT_8c098e74) = uVar1;
      piVar3 = (int *)0x64;
      iStack_8c = (*(code *)PTR_libgcc_divide_helper_01031c_8c098e78)
                            (*(undefined4 *)((int)&cStack_f8 + DAT_8c098e74),100,a6,ar7);
      if ((iStack_8c < 1) && (*(int *)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        (*(code *)PTR_FUN_8c098e7c)(ar4,ar5,a6,ar7);
        piVar3 = DAT_8c098e80;
        (*(code *)PTR_FUN_8c098e84)(ar4,DAT_8c098e80,a6,ar7);
      }
    }
  }
  uVar1 = (*(code *)PTR_get_field_24_026024_8c098e60)(ar5,piVar3,a6,ar7);
  *(undefined4 *)((int)&cStack_f8 + DAT_8c098e88) = uVar1;
  if (*(int *)((int)&cStack_f8 + DAT_8c098e88) == 1) {
    iVar2 = ar6[1];
    uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c098e68)(iVar2,piVar3,a6,ar7);
    *(undefined4 *)((int)&cStack_f8 + DAT_8c098e8c) = uVar1;
    if (*(int *)((int)&cStack_f8 + DAT_8c098e8c) == 0x13) {
      uVar1 = (*(code *)PTR_rand_8c098e70)(iVar2,piVar3,a6,ar7);
      *(undefined4 *)((int)&cStack_f8 + DAT_8c098e90) = uVar1;
      iStack_90 = (*(code *)PTR_libgcc_divide_helper_01031c_8c098e78)
                            (*(undefined4 *)((int)&cStack_f8 + DAT_8c098e90),DAT_8c098e94,a6,ar7);
      if (iStack_90 < 1) {
        piVar3 = (int *)0x0;
        while( true ) {
          uVar4 = 10;
          uVar1 = (**(code **)(DAT_8c0990f0 + *ar5))(ar5,10,a6,ar7);
          *(undefined4 *)((int)&cStack_f8 + DAT_8c0990f4) = uVar1;
          if (*(int *)((int)&cStack_f8 + DAT_8c0990f4) <= (int)piVar3) break;
          uVar4 = 10;
          a6 = piVar3;
          uVar1 = (**(code **)(DAT_8c0990cc + *ar5))(ar5,10,piVar3,ar7);
          *(undefined4 *)((int)&cStack_f8 + DAT_8c0990d0) = uVar1;
          uVar1 = (**(code **)(DAT_8c0990d4 + *(int *)(*(int *)((int)&cStack_f8 + DAT_8c0990d0) + 8)
                              ))(*(int *)((int)&cStack_f8 + DAT_8c0990d0),uVar4,a6,ar7);
          *(undefined4 *)((int)&cStack_f8 + DAT_8c0990d8) = uVar1;
          if (*(int *)((int)&cStack_f8 + DAT_8c0990d8) == 0x13) {
            uVar4 = 10;
            a6 = piVar3;
            uVar1 = (**(code **)(DAT_8c0990cc + *ar5))(ar5,10,piVar3,ar7);
            *(undefined4 *)((int)&cStack_f8 + DAT_8c0990dc) = uVar1;
            uVar1 = (**(code **)(DAT_8c0990e0 +
                                *(int *)(*(int *)((int)&cStack_f8 + DAT_8c0990dc) + 8)))
                              (*(int *)((int)&cStack_f8 + DAT_8c0990dc),uVar4,a6,ar7);
            *(undefined4 *)((int)&cStack_f8 + DAT_8c0990e0) = uVar1;
            if (*(int *)((int)&cStack_f8 + DAT_8c0990e0) == 1) {
              iVar5 = iVar5 + 1;
              uVar4 = 10;
              a6 = piVar3;
              uVar1 = (**(code **)(DAT_8c0990cc + *ar5))(ar5,10,piVar3,ar7);
              *(undefined4 *)((int)&cStack_f8 + DAT_8c0990e4) = uVar1;
              uVar1 = (**(code **)(DAT_8c0990e8 +
                                  *(int *)(*(int *)((int)&cStack_f8 + DAT_8c0990e4) + 8)))
                                (*(int *)((int)&cStack_f8 + DAT_8c0990e4),uVar4,a6,ar7);
              *(undefined4 *)((int)&cStack_f8 + DAT_8c0990ec) = uVar1;
              if (*(int *)((int)&cStack_f8 + DAT_8c0990ec) == 0xb) {
                iVar6 = iVar6 + 1;
              }
            }
          }
          piVar3 = (int *)((int)piVar3 + 1);
        }
        if (((iVar6 == 0) && (3 < iVar5)) && (*(int *)(ar4 + 4) == 0)) {
          uVar1 = (**(code **)(DAT_8c0990f8 + *ar5))(ar5,uVar4,a6,ar7);
          *(undefined4 *)((int)&cStack_f8 + DAT_8c0990fc) = uVar1;
          if (*(int *)((int)&cStack_f8 + DAT_8c0990fc) == 1) {
            (*(code *)PTR_FUN_8c099100)(ar6[3],*ar6,a6,ar7);
            *(undefined4 *)(ar4 + 4) = 0xd;
            *(undefined4 *)(ar4 + 8) = 0x5f;
            *(undefined4 *)(ar4 + 0xc) = 0;
            *(undefined4 *)(ar4 + 0x40) = 0xb;
            uStack_94 = 0xb;
            *(undefined4 *)(DAT_8c099104 + ar4) = 0xb;
            *(undefined4 *)(PTR_DAT_8c099108 + DAT_8c099104) = 0xb;
            uStack_98 = 0xc;
            *(undefined4 *)(DAT_8c09910c + ar4) = 0xc;
            *(undefined4 *)(PTR_DAT_8c099108 + DAT_8c09910c) = 0xc;
            uStack_9c = 0xc;
            *(undefined4 *)(DAT_8c0990fc + ar4) = 0xc;
            *(undefined4 *)(PTR_DAT_8c099108 + DAT_8c0990fc) = 0xc;
          }
        }
      }
    }
  }
  piVar3 = ar6;
  (*(code *)PTR_FUN_8c099110)(ar4,ar6,a6,ar7);
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c099114)(ar4,piVar3,a6,ar7);
  *(undefined4 *)((int)&cStack_f8 + DAT_8c09910c) = uVar1;
  a7 = *(undefined **)((int)&cStack_f8 + DAT_8c09910c);
  piVar3 = ar6;
  (*(code *)PTR_FUN_8c099118)(ar4,ar5,ar6,a7);
  uVar1 = (*(code *)PTR_FUN_8c09911c)(ar6[1],ar5,piVar3,a7);
  sStack_f4 = (short)uVar1;
  if (sStack_f4 == 1) {
    uVar1 = (*(code *)PTR_FUN_8c099120)(ar6[3],ar5,piVar3,a7);
    cStack_f7 = (char)uVar1;
    if (cStack_f7 == '\0') {
      uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c099124)(ar6[1],ar5,piVar3,a7);
      *(undefined4 *)((int)&cStack_f8 + DAT_8c099104) = uVar1;
      if (*(int *)((int)&cStack_f8 + DAT_8c099104) == 0x11) {
        *(undefined1 *)(DAT_8c099128 + ar4) = 3;
      }
    }
  }
  uVar1 = (**(code **)(DAT_8c0990dc + *(int *)(*ar6 + 8)))(*ar6,ar5,piVar3,a7);
  *(undefined4 *)((int)&cStack_f8 + DAT_8c099128) = uVar1;
  if ((*(int *)((int)&cStack_f8 + DAT_8c099128) == 1) && (*(char *)(DAT_8c099128 + ar4) < '\t')) {
    *(undefined1 *)(DAT_8c099128 + ar4) = 8;
  }
  switch(*(char *)(DAT_8c099128 + ar4)) {
  case '\0':
  case '\x01':
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    uStack_a0 = 1;
    *(undefined4 *)(DAT_8c0991d0 + ar4) = 1;
    *(undefined4 *)(ar4 + 0x40) = 1;
    *(undefined4 *)(PTR_DAT_8c0991d4 + DAT_8c0991d0) = 1;
    uStack_a4 = 0xc;
    *(undefined4 *)(DAT_8c0991d8 + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c0991d4 + DAT_8c0991d8) = 0xc;
    uStack_a8 = 0xc;
    *(undefined4 *)(DAT_8c0991dc + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c0991d4 + DAT_8c0991dc) = 0xc;
    piVar3 = (int *)0x1b;
    ar5 = (int *)0x26;
    (*(code *)PTR_FUN_8c0991e0)(ar6[6],0x26,0x1b,a7);
    break;
  case '\x03':
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    uStack_ac = 3;
    *(undefined4 *)(DAT_8c0992a4 + ar4) = 3;
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(undefined4 *)(PTR_DAT_8c0992a8 + DAT_8c0992a4) = 3;
    uStack_b0 = 0xc;
    *(undefined4 *)(DAT_8c0992ac + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c0992a8 + DAT_8c0992ac) = 0xc;
    uStack_b4 = 0xc;
    *(undefined4 *)(DAT_8c0992b0 + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c0992a8 + DAT_8c0992b0) = 0xc;
    uVar1 = (*(code *)PTR_FUN_8c0992b4)(ar6[1],ar5,piVar3,a7);
    sStack_f6 = (short)uVar1;
    if (sStack_f6 == 1) {
      uVar1 = (*(code *)PTR_FUN_8c0992b8)(ar6[3],ar5,piVar3,a7);
      cStack_f8 = (char)uVar1;
      if ('\0' < cStack_f8) {
        uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c0992bc)(ar6[1],ar5,piVar3,a7);
        *(undefined4 *)((int)&cStack_f8 + DAT_8c0992c0) = uVar1;
        if (*(int *)((int)&cStack_f8 + DAT_8c0992c0) == 0x11) {
          *(undefined1 *)(DAT_8c0992c4 + ar4) = 2;
        }
      }
    }
    break;
  case '\x04':
    uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c099350)(ar6[1],ar5,piVar3,a7);
    *(undefined4 *)((int)&cStack_f8 + DAT_8c099354) = uVar1;
    if (*(int *)((int)&cStack_f8 + DAT_8c099354) == 0x13) {
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      uStack_b8 = 9;
      *(undefined4 *)(DAT_8c099358 + ar4) = 9;
      *(undefined4 *)(ar4 + 0x40) = 9;
      *(undefined4 *)(PTR_DAT_8c09935c + DAT_8c099358) = 9;
      uStack_bc = 0xc;
      *(undefined4 *)(DAT_8c099360 + ar4) = 0xc;
      *(undefined4 *)(PTR_DAT_8c09935c + DAT_8c099360) = 0xc;
      uStack_c0 = 0xc;
      *(undefined4 *)(DAT_8c099364 + ar4) = 0xc;
      *(undefined4 *)(PTR_DAT_8c09935c + DAT_8c099364) = 0xc;
      piVar3 = (int *)0x1b;
      ar5 = (int *)0x28;
      (*(code *)PTR_FUN_8c099368)(ar6[6],0x28,0x1b,a7);
    }
    break;
  case '\x06':
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    uStack_c4 = 10;
    *(undefined4 *)(DAT_8c0993cc + ar4) = 10;
    *(undefined4 *)(ar4 + 0x40) = 10;
    *(undefined4 *)(PTR_DAT_8c0993d0 + DAT_8c0993cc) = 10;
    uStack_c8 = 0xc;
    *(undefined4 *)(DAT_8c0993d4 + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c0993d0 + DAT_8c0993d4) = 0xc;
    uStack_cc = 0xc;
    *(undefined4 *)(DAT_8c0993d8 + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c0993d0 + DAT_8c0993d8) = 0xc;
    piVar3 = (int *)0x1b;
    ar5 = (int *)0x29;
    (*(code *)PTR_FUN_8c0993dc)(ar6[6],0x29,0x1b,a7);
    break;
  case '\a':
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    uStack_d0 = 8;
    *(undefined4 *)(DAT_8c099430 + ar4) = 8;
    *(undefined4 *)(ar4 + 0x40) = 8;
    *(undefined4 *)(PTR_DAT_8c099434 + DAT_8c099430) = 8;
    uStack_d4 = 0xc;
    *(undefined4 *)(DAT_8c099438 + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c099434 + DAT_8c099438) = 0xc;
    uStack_d8 = 0xc;
    *(undefined4 *)(DAT_8c09943c + ar4) = 0xc;
    ar5 = (int *)PTR_DAT_8c099434;
    *(undefined4 *)(PTR_DAT_8c099434 + DAT_8c09943c) = 0xc;
    break;
  case '\b':
    if (*(int *)(ar4 + 0x40) == 0xb) {
      uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c099470)(ar6[1],ar5,piVar3,a7);
      *(undefined4 *)((int)&cStack_f8 + DAT_8c099474) = uVar1;
      if (*(int *)((int)&cStack_f8 + DAT_8c099474) == 0x13) {
        ar5 = (int *)0x9;
        *(undefined1 *)(DAT_8c099478 + ar4) = 9;
        break;
      }
    }
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 8) = 99;
    uStack_dc = 6;
    *(undefined4 *)(DAT_8c099538 + ar4) = 6;
    *(undefined4 *)(ar4 + 0x40) = 6;
    *(undefined4 *)(PTR_DAT_8c09953c + DAT_8c099538) = 6;
    uStack_e0 = 0xc;
    *(undefined4 *)(DAT_8c099540 + ar4) = 0xc;
    *(undefined4 *)(PTR_DAT_8c09953c + DAT_8c099540) = 0xc;
    uStack_e4 = 0xc;
    *(undefined4 *)(DAT_8c099544 + ar4) = 0xc;
    ar5 = (int *)PTR_DAT_8c09953c;
    *(undefined4 *)(PTR_DAT_8c09953c + DAT_8c099544) = 0xc;
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,piVar3,a7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    uVar1 = (*(code *)PTR_get_field_6c_02f46c_8c099548)(*ar6,ar5,piVar3,a7);
    *(undefined4 *)((int)&cStack_f8 + DAT_8c09954c) = uVar1;
    if (*(int *)((int)&cStack_f8 + DAT_8c09954c) == 0) {
      uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c099550)(ar6[1],ar5,piVar3,a7);
      *(undefined4 *)((int)&cStack_f8 + DAT_8c099554) = uVar1;
      if (*(int *)((int)&cStack_f8 + DAT_8c099554) == 0x13) {
        ar5 = (int *)0x0;
        (*(code *)PTR_FUN_8c099558)(ar6[3],0,piVar3,a7);
        (*(code *)PTR_FUN_8c09955c)(ar6[3],ar5,piVar3,a7);
      }
      else {
        uVar1 = (*(code *)PTR_get_field_13c_028d9c_8c099590)(ar6[1],ar5,piVar3,a7);
        *(undefined4 *)((int)&cStack_f8 + DAT_8c099594) = uVar1;
        if (*(int *)((int)&cStack_f8 + DAT_8c099594) == 0x11) {
          a7 = PTR_FUN_8c099598;
          (*(code *)PTR_FUN_8c099598)(ar6[3],ar5,piVar3,PTR_FUN_8c099598);
        }
      }
      (*(code *)PTR_FUN_8c09959c)(*ar6,ar5,piVar3,a7);
    }
    break;
  case '\t':
    if (*(int *)(ar4 + 0x40) != 8) {
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 8) = 99;
      uStack_e8 = 8;
      *(undefined4 *)(_UNK_8c09969c + ar4) = 8;
      *(undefined4 *)(ar4 + 0x40) = 8;
      *(undefined4 *)(_UNK_8c09969c + _UNK_8c0996a0) = 8;
      uStack_ec = 0xc;
      *(undefined4 *)(_UNK_8c0996a4 + ar4) = 0xc;
      *(undefined4 *)(_UNK_8c0996a4 + _UNK_8c0996a0) = 0xc;
      uStack_f0 = 0xc;
      *(undefined4 *)(_UNK_8c0996a8 + ar4) = 0xc;
      *(undefined4 *)(_UNK_8c0996a8 + _UNK_8c0996a0) = 0xc;
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))();
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
      (*_UNK_8c0996ac)(ar6[3]);
    }
  }
  (*(code *)PTR_FUN_8c0996b0)(ar4,ar5,piVar3,a7);
  if (in_FPSCR_SZ == '\0') {
    uStack_7c = CONCAT44(uStack_7c._4_4_,extraout_fr0);
  }
  else {
    uStack_7c = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (*(code *)PTR_FUN_8c0996b4)(ar6[2],ar5,piVar3,a7);
  iStack_80 = (*(code *)PTR_get_field_124_027930_8c0996b8)(ar6[2],ar5,piVar3,a7);
  iStack_84 = (*(code *)PTR_get_field_40_05eea0_8c0996bc)(ar4,ar5,piVar3,a7);
  if (iStack_80 != iStack_84) {
    uStack_88 = (*(code *)PTR_get_field_40_05eea0_8c0996bc)(ar4,ar5,piVar3,a7);
    iStack_84 = (*(code *)PTR_FUN_8c0996c0)(ar6[2],uStack_88,1,a7);
  }
  return iStack_84;
}



/* FUN_8c0996c4 @ 8c0996c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0996c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x50) = *(char *)(ar4 + 0x50) + -1;
  return 0x50;
}



/* FUN_8c0996dc @ 8c0996dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0996dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}



/* FUN_8c0996e4 @ 8c0996e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0996e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  return 0x48;
}



/* ret_const_0_0996ec @ 8c0996ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0996ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* Class_12a7a8_m2_0996f4 @ 8c0996f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a7a8_m2_0996f4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar4 + 0xc))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c099714 @ 8c099714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c099714(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  undefined4 a5;
  int *piVar2;
  
  piVar2 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c099828 + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (*(code *)PTR_FUN_8c09982c)(ar4,ar5,ar6,ar7);
    a5 = 1;
    (*(code *)PTR_FUN_8c099830)(ar4,1,piVar2,ar7);
  }
  else {
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c099828 + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    a5 = ar5;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    (*(code *)PTR_FUN_8c099830)(ar4,3,piVar2,ar7);
  }
  else if (iVar1 == 4) {
    if (*(int *)(DAT_8c099840 + ar4) == 1) {
      *(undefined1 *)(DAT_8c099844 + ar4) = 7;
      *(undefined4 *)(DAT_8c099840 + ar4) = 0;
    }
    (*(code *)PTR_FUN_8c099848)(ar4,ar5,piVar2,ar7);
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(DAT_8c099834 + *(int *)(*ar6 + 8)))(*ar6,a5,piVar2,ar7);
    if (iVar1 == 1) {
      iVar1 = *ar6;
      (*(code *)PTR_FUN_8c099838)(iVar1,a5,piVar2,ar7);
      (*(code *)PTR_FUN_8c09983c)(iVar1,a5,piVar2,ar7);
    }
  }
  else if ((iVar1 == 0xb) && (*(int *)(DAT_8c099840 + ar4) == 1)) {
    (*(code *)PTR_FUN_8c09984c)(ar6[3],1,piVar2,ar7);
    *(undefined4 *)(DAT_8c099840 + ar4) = 0;
  }
  return 1;
}



/* FUN_8c099850 @ 8c099850 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c099850(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x45) = (undefined1)ar5;
  return 0x45;
}



/* FUN_8c099858 @ 8c099858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c099858(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    a6 = ar6;
    (*(code *)PTR_FUN_8c099904)(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c099908 + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0xc) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 2;
      (*(code *)PTR_FUN_8c09990c)(ar4,0,a6,ar7);
      ar6 = a6;
    }
    else {
      (*(code *)PTR_FUN_8c09990c)(ar4,3,a6,ar7);
      (*(code *)PTR_FUN_8c099910)(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c09990c)(ar4,2,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c099914 @ 8c099914 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c099914(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  int *a6;
  
  a5 = ar5;
  a6 = ar6;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 4) {
    iVar1 = (*(code *)PTR_FUN_8c09999c)(ar4,ar5,a6,ar7);
  }
  else if ((iVar1 == 8) &&
          (iVar1 = (**(code **)(DAT_8c0999a0 + *(int *)(*ar6 + 8)))(*ar6,a5,a6,ar7), iVar1 == 1)) {
    iVar1 = *ar6;
    (*(code *)PTR_FUN_8c0999a4)(iVar1,a5,a6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0999a8)(iVar1,a5,a6,ar7);
  }
  return iVar1;
}



/* FUN_8c0999ac @ 8c0999ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0999ac(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 a5;
  int *a6;
  undefined4 a6_00;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0xa;
  if ((iVar2 < 0xb) && (puVar1 = (undefined *)0x1, 0 < iVar2)) {
    puVar1 = (&switchD_8c0999d2::switchdataD_8c0999d8)[iVar2 + -1];
    switch(iVar2) {
    case 1:
      DAT_8c099aa8[ar4] = 2;
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c099aa4)(ar4,ar5,ar6,ar7);
      break;
    case 3:
      puVar1 = (undefined *)(*(code *)PTR_get_field_13c_028d9c_8c099aac)(ar6[1],ar5,ar6,ar7);
      if (puVar1 == (undefined *)0x12) {
        a6_00 = 0x1b;
        a5 = 0x27;
        iVar2 = ar6[6];
        (*(code *)PTR_FUN_8c099ab0)(iVar2,0x27,0x1b,ar7);
        DAT_8c099aa8[ar4] = 5;
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c099aa4)(iVar2,a5,a6_00,ar7);
      }
      break;
    case 4:
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c099ab4)(ar6[3],1,ar6,ar7);
      break;
    case 8:
      a6 = ar6;
      puVar1 = (undefined *)(**(code **)(DAT_8c099a9c + *(int *)(*ar6 + 8)))(*ar6,ar5,ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        iVar2 = *ar6;
        (*(code *)PTR_FUN_8c099aa0)(iVar2,ar5,a6,ar7);
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c099aa4)(iVar2,ar5,a6,ar7);
      }
      break;
    case 9:
      DAT_8c099aa8[ar4] = 5;
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c099aa4)(ar4,ar5,ar6,ar7);
      break;
    case 10:
      (*(code *)PTR_FUN_8c099aa4)(ar4,ar5,ar6,ar7);
      puVar1 = DAT_8c099aa8;
      DAT_8c099aa8[ar4] = 5;
    }
  }
  return puVar1;
}



/* FUN_8c099ab8 @ 8c099ab8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c099ab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    (*(code *)PTR_get_field_8_066620_8c099b00)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c099b04;
  }
  else {
    (*(code *)PTR_get_field_8_066620_8c099b00)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c099b08;
  }
  return puVar1;
}



/* FUN_8c099b0c @ 8c099b0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c099b0c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined1 *puVar2;
  undefined1 *a6;
  undefined1 *a7;
  undefined1 *puVar3;
  char in_FPSCR_SZ;
  undefined1 *puStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [64];
  
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c099d50)((int)&iStack_c4 + DAT_8c099d4c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c099d60)((int)&iStack_c4 + DAT_8c099d5c,a5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c099d60)((int)&iStack_c4 + DAT_8c099d6c,a5,ar6,ar7);
  a7 = auStack_a4;
  puVar2 = auStack_a0;
  puVar3 = auStack_9c;
  (**(code **)(DAT_8c099d70 + *ar5))(ar5,puVar3,puVar2,a7);
  iStack_b4 = (*(code *)PTR_get_field_4_05eed8_8c099d74)(ar4,puVar3,puVar2,a7);
  if (((iStack_b4 != 1) && (iStack_b4 != 8)) && (iStack_b4 == 0xb)) {
    iStack_b8 = (**(code **)(DAT_8c099d78 + *ar5))(ar5,5,puVar2,a7);
    if (iStack_b8 == 0) {
      (*(code *)PTR_FUN_8c099d7c)(ar4,2,puVar2,a7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = DAT_8c099d80;
        *(undefined4 *)(ar4 + 0x2c) = DAT_8c099d80;
        *(undefined4 *)(ar4 + 0x30) = DAT_8c099d80;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(DAT_8c099d84,DAT_8c099d80);
        *(ulonglong *)(ar4 + 0x2c) = CONCAT44(DAT_8c099d84,DAT_8c099d80);
        *(ulonglong *)(ar4 + 0x30) = CONCAT44(DAT_8c099d84,DAT_8c099d80);
      }
    }
    else {
      for (puVar3 = (undefined1 *)0x0;
          iStack_c4 = (**(code **)(DAT_8c099d78 + *ar5))(ar5,5,puVar2,a7), (int)puVar3 < iStack_c4;
          puVar3 = puVar3 + 1) {
        uStack_bc = (**(code **)(DAT_8c099d84 + *ar5))(ar5,5,puVar3,a7);
        a7 = auStack_b0;
        a6 = auStack_ac;
        puVar2 = auStack_a8;
        (*(code *)PTR_FUN_8c099d88)(uStack_bc,puVar2,a6,a7);
        (*(code *)PTR_Vec3_set_xyz_8c099d8c)(auStack_4c,puVar2,a6,a7);
        (*(code *)PTR_vec3_copy_8c02b5fc_8c099d90)(auStack_68,auStack_4c,a6,a7);
        puStack_c8 = auStack_78;
        (*(code *)PTR_FUN_8c099d98)((int)&puStack_c8 + DAT_8c099d94,auStack_68,a6,a7);
        (*(code *)PTR_Vec3_ctor_copy_8c099d9c)(auStack_5c,auStack_78,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c099da0)(auStack_78,0xffffffff,a6,a7);
        (*(code *)PTR_object_dtor_delete_8c099da4)(auStack_68,0xffffffff,a6,a7);
        uVar1 = 5;
        puVar2 = puVar3;
        uStack_c0 = (**(code **)(DAT_8c099d84 + *ar5))(ar5,5,puVar3,a7);
        puStack_c8 = auStack_88;
        (*(code *)PTR_FUN_8c099da8)(uStack_c0,uVar1,puVar2,a7);
        puStack_c8 = auStack_98;
        (*(code *)PTR_Vec3_add_8c099dac)(auStack_88,auStack_5c,puVar2,a7);
        (*(code *)PTR_Vec3_assign_8c099db0)((int)&iStack_c4 + DAT_8c099d4c,auStack_98,puVar2,a7);
        (*(code *)PTR_Vec3_dtor_8c099da0)(auStack_98,0xffffffff,puVar2,a7);
        (*(code *)PTR_Vec3_dtor_8c099da0)(auStack_88,0xffffffff,puVar2,a7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)&iStack_c4 + DAT_8c099d4c);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)((int)&iStack_c4 + DAT_8c099d4c);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)((int)&iStack_c4 + DAT_8c099db4);
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)((int)&iStack_c4 + DAT_8c099db4);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)((int)&iStack_c4 + DAT_8c099db8);
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = *(undefined8 *)((int)&iStack_c4 + DAT_8c099db8);
        }
        (*(code *)PTR_Vec3_dtor_8c099da0)(auStack_5c,0xffffffff,puVar2,a7);
        (*(code *)PTR_object_dtor_delete_8c099da4)(auStack_4c,0xffffffff,puVar2,a7);
      }
    }
  }
  (*(code *)PTR_Vec3_dtor_8c099da0)((int)&iStack_c4 + DAT_8c099d6c,0xffffffff,puVar2,a7);
  (*(code *)PTR_Vec3_dtor_8c099da0)((int)&iStack_c4 + DAT_8c099d5c,0xffffffff,puVar2,a7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c099da0)((int)&iStack_c4 + DAT_8c099d4c,0xffffffff,puVar2,a7);
  return uVar1;
}



/* FUN_8c099dbc @ 8c099dbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c099dbc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c099e44)(PTR_DAT_8c099e40,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c099e4c;
  uVar2 = DAT_8c099e48;
  (*(code *)PTR_global_list_push_8c099e50)(uVar1,PTR_Vec3_dtor_8c099e4c,DAT_8c099e48,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c099e44)(PTR_DAT_8c099e54,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c099e4c;
  uVar2 = DAT_8c099e58;
  (*(code *)PTR_global_list_push_8c099e50)(uVar1,PTR_Vec3_dtor_8c099e4c,DAT_8c099e58,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c099e44)(PTR_DAT_8c099e5c,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c099e4c;
  uVar2 = DAT_8c099e60;
  (*(code *)PTR_global_list_push_8c099e50)(uVar1,PTR_Vec3_dtor_8c099e4c,DAT_8c099e60,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c099e44)(PTR_DAT_8c099e64,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c099e50)(uVar2,PTR_Vec3_dtor_8c099e4c,DAT_8c099e68,ar7);
  puVar3 = DAT_8c099e70;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c099e6c = *(undefined4 *)DAT_8c099e70;
  }
  else {
    *(undefined8 *)PTR_DAT_8c099e6c = *DAT_8c099e70;
  }
  return puVar3;
}



/* s_GRAPHICS_MOTHLINE_099e76 @ 8c099e74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MOTHLINE_099e76(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  int a6_00;
  undefined4 a7;
  uint in_fr1;
  uint uVar2;
  char in_FPSCR_SZ;
  
  a7 = 0x17;
  a6 = 1;
  uVar1 = 0xb;
  (*(code *)PTR_FUN_8c099f80)(ar4,0xb,1,0x17);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c099f84;
  (*(code *)PTR_FUN_8c099f8c)(ar4 + DAT_8c099f88,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c099f94)(ar4 + DAT_8c099f90,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c099f9c)(ar4 + DAT_8c099f98,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c099fa4)(ar4 + 0xc,uVar1,a6,a7);
  *(int *)(DAT_8c099fa8 + ar4) = ar4 + DAT_8c099f90;
  *(int *)(DAT_8c099fac + ar4) = ar4 + DAT_8c099f98;
  *(undefined1 *)(DAT_8c099fb0 + ar4) = 0xff;
  a6_00 = ar4 + DAT_8c099f88;
  uVar1 = *(undefined4 *)(DAT_8c099fb8 + *(int *)(DAT_8c099fb4 + ar4));
  (*(code *)PTR_FUN_8c099fbc)(ar4,uVar1,a6_00,a7);
  (*(code *)PTR_FUN_8c099fc0)(ar4 + DAT_8c099f98,uVar1,a6_00,a7);
  uVar2 = DAT_8c099fc4;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = in_fr1;
  }
  (**(code **)(*(int *)(ar4 + DAT_8c099fc8) + 0x28))
            ((int *)(ar4 + DAT_8c099fc8),ar4 + 0x30,a6_00,a7);
  *(undefined4 *)(DAT_8c099fcc + ar4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c099fd0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c099fd0) = (ulonglong)uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c099fd4) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c099fd4) = (ulonglong)uVar2;
  }
  return ar4;
}



/* Class_12a7f4_m0_099fd8 @ 8c099fd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a7f4_m0_099fd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c09a03c;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c09a044)(ar4 + DAT_8c09a040,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129c24_m0_02ff90_8c09a04c)(ar4 + DAT_8c09a048,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c09a054)(ar4 + DAT_8c09a050,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c09a058)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c09a05c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12a7f4_m2_09a060 @ 8c09a060 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09a44a) */
/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m2_09a060(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *a7;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar5;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3;
  undefined8 in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar10;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar5 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar5 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar5 + -0x14) = in_PR;
  *(undefined4 *)((int)puVar5 + -0x5c) = ar6;
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(int *)((int)puVar5 + -0x38) = ar4;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (ulonglong)*(uint *)(*(int *)((int)puVar5 + -0x38) + 0x34);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x38) + 0x34);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09a0f8),(int)in_dr0);
    }
    else {
      dVar7 = *(double *)(ar4 + DAT_8c09a0f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar5 + -0x38) + 0x34) = fVar6;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar5 + -0x38) + 0x34) = in_xd0;
    }
    *(int *)((int)puVar5 + -0x3c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c09a0fc,
                               *(undefined4 *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a0f8));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a0f8);
      dVar7 = (double)CONCAT44(DAT_8c09a100,DAT_8c09a0fc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a0f8) = fVar6;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a0f8) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c09a100,*(undefined4 *)(ar4 + DAT_8c09a0f8));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c09a0f8);
      in_dr0 = CONCAT44(DAT_8c09a104,DAT_8c09a100);
    }
    if (in_FPSCR_PR == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c09a100,(float)in_dr0);
        *(undefined4 *)(ar4 + DAT_8c09a0f8) = DAT_8c09a100;
      }
      else {
        in_dr0 = CONCAT44(DAT_8c09a104,DAT_8c09a100);
        *(ulonglong *)(ar4 + DAT_8c09a0f8) = in_dr0;
      }
    }
  }
  a7 = ar7;
  switch(*(undefined1 *)(DAT_8c09a104 + ar4)) {
  case 0:
    uVar4 = ar5;
    uVar3 = (*(code *)PTR_FUN_8c09a33c)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar5 + -0x50) = (short)uVar3;
    uVar3 = (*(code *)PTR_get_field_c_02d1b8_8c09a344)(ar4 + DAT_8c09a340,uVar4,ar6,a7);
    *(undefined4 *)((int)puVar5 + -0x1c) = uVar3;
    uVar1 = *(ushort *)((int)puVar5 + -0x50);
    iVar2 = *(int *)((int)puVar5 + -0x1c);
    if (*(int *)(DAT_8c09a348 + ar4) != 0) {
      (**(code **)(DAT_8c09a34c + *(int *)(*(int *)(DAT_8c09a348 + ar4) + 8)))
                (*(int *)(DAT_8c09a348 + ar4),ar5,ar6,a7);
      uVar4 = 1;
      (**(code **)(DAT_8c09a350 + *(int *)(*(int *)(DAT_8c09a348 + ar4) + 8)))
                (*(int *)(DAT_8c09a348 + ar4),1,ar6,a7);
      (*(code *)PTR_FUN_8c09a354)(*(undefined4 *)(DAT_8c09a348 + ar4),uVar4,ar6,a7);
      uVar3 = (**(code **)(DAT_8c09a358 + *(int *)(*(int *)(DAT_8c09a348 + ar4) + 8)))
                        (*(int *)(DAT_8c09a348 + ar4),uVar4,ar6,a7);
      *(undefined4 *)((int)puVar5 + -0x20) = uVar3;
      (*(code *)PTR_FUN_8c09a360)(*(undefined4 *)(DAT_8c09a348 + ar4),uVar4,ar6,a7);
    }
    (**(code **)(DAT_8c09a364 + *ar7))(ar7,uVar4,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x24) = (int)(in_dr0 >> 0x20);
      fVar6 = *(float *)((int)puVar5 + -0x24);
      fVar9 = DAT_8c09a368;
    }
    else {
      *(ulonglong *)((int)puVar5 + -0x24) = in_dr0;
      fVar6 = DAT_8c09a368;
      fVar9 = DAT_8c09a36c;
    }
    if (in_FPSCR_PR != '\0' || fVar9 <= fVar6) {
      uVar3 = (**(code **)((int)DAT_8c09a36c + *ar7))(ar7,uVar4,ar6,a7);
      *(undefined4 *)((int)puVar5 + -0x28) = uVar3;
      uVar3 = (*(code *)PTR_FUN_8c09a370)(*(undefined4 *)((int)puVar5 + -0x28),uVar4,ar6,a7);
      *(char *)((int)puVar5 + -0x58) = (char)uVar3;
      if (*(char *)((int)puVar5 + -0x58) < '\x04') {
        ar5 = 0x3c;
        uVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c09a3bc)((uint)uVar1 - iVar2,0x3c,ar6,a7)
        ;
        *(undefined4 *)((int)puVar5 + -0x40) = uVar3;
        if (0 < *(int *)((int)puVar5 + -0x40)) {
          *(undefined1 *)(DAT_8c09a3c0 + ar4) = 1;
          uVar3 = (**(code **)(DAT_8c09a3c4 + *ar7))(ar7,ar5,ar6,a7);
          *(undefined4 *)((int)puVar5 + -0x2c) = uVar3;
          (*(code *)PTR_FUN_8c09a3c8)(*(undefined4 *)((int)puVar5 + -0x2c),ar5,ar6,a7);
        }
        break;
      }
    }
    uVar3 = (*(code *)PTR_FUN_8c09a374)(ar5,uVar4,ar6,a7);
    *(short *)((int)puVar5 + -0x52) = (short)uVar3;
    uVar4 = (uint)*(ushort *)((int)puVar5 + -0x52);
    (*(code *)PTR_FUN_8c09a378)(ar4 + DAT_8c09a340,uVar4,ar6,a7);
    uVar3 = (*(code *)PTR_FUN_8c09a33c)(ar5,uVar4,ar6,a7);
    *(short *)((int)puVar5 + -0x54) = (short)uVar3;
    ar5 = (uint)*(ushort *)((int)puVar5 + -0x54);
    (*(code *)PTR_FUN_8c09a37c)(ar4 + DAT_8c09a340,ar5,ar6,a7);
    break;
  case 1:
    ar6 = *(undefined4 *)((int)puVar5 + -0x5c);
    (**(code **)(*(int *)(*(int *)(DAT_8c09a468 + ar4) + 8) + 0x10))
              (*(int *)(DAT_8c09a468 + ar4),ar5,ar6,ar7);
    (**(code **)(DAT_8c09a46c + *(int *)(*(int *)(DAT_8c09a468 + ar4) + 8)))
              (*(int *)(DAT_8c09a468 + ar4),0,ar6,a7);
    ar5 = *(uint *)(DAT_8c09a468 + ar4);
    (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
    (*(code *)PTR_FUN_8c09a470)(ar4,ar5,ar6,a7);
    *(undefined4 *)(DAT_8c09a468 + ar4) = 0;
    *(undefined1 *)(DAT_8c09a474 + ar4) = 2;
  case 2:
    fVar6 = (float)in_dr0;
    *(int *)((int)puVar5 + -0x44) = ar4;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a478);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a478);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = fVar6 + 1.0;
    }
    else {
      fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a478) = fVar6;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a478) = in_xd0;
    }
    uVar3 = (*(code *)PTR_FUN_8c09a484)
                      (*(undefined4 *)(DAT_8c09a480 + *(int *)(DAT_8c09a47c + ar4)),ar5,ar6,a7);
    *(undefined4 *)((int)puVar5 + -0x30) = uVar3;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09a478),in_fr3);
    }
    else {
      dVar7 = *(double *)(ar4 + DAT_8c09a478);
    }
    fVar6 = (float)(*(int *)((int)puVar5 + -0x30) + -1);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c09a488,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(uRam8c09a48c,DAT_8c09a488);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar8,0);
    }
    else {
      bVar10 = dVar7 < dVar8;
    }
    if (!bVar10) {
      *(undefined1 *)(DAT_8c09a474 + ar4) = 3;
    }
    break;
  case 3:
    uVar3 = (*(code *)PTR_FUN_8c09a504)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar5 + -0x56) = (short)uVar3;
    ar5 = 100;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09a508)
                      ((uint)*(ushort *)((int)puVar5 + -0x56),100,ar6,a7);
    *(undefined4 *)((int)puVar5 + -0x48) = uVar3;
    if (*(int *)((int)puVar5 + -0x48) == 0) {
      (*(code *)PTR_FUN_8c09a50c)(ar4,ar5,ar6,a7);
      *(undefined1 *)(DAT_8c09a510 + ar4) = 4;
      uVar3 = (**(code **)(DAT_8c09a514 + *ar7))(ar7,ar5,ar6,a7);
      *(undefined4 *)((int)puVar5 + -0x34) = uVar3;
      (*(code *)PTR_FUN_8c09a518)(*(undefined4 *)((int)puVar5 + -0x34),ar5,ar6,a7);
    }
    break;
  case 0xff:
    uVar3 = (*(code *)PTR_FUN_8c09a1f0)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar5 + -0x4a) = (short)uVar3;
    uVar4 = (uint)*(ushort *)((int)puVar5 + -0x4a);
    (*(code *)PTR_FUN_8c09a1f8)(ar4 + DAT_8c09a1f4,uVar4,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c09a1fc)(ar5,uVar4,ar6,ar7);
    *(short *)((int)puVar5 + -0x4c) = (short)uVar3;
    uVar4 = (uint)*(ushort *)((int)puVar5 + -0x4c);
    (*(code *)PTR_FUN_8c09a200)(ar4 + DAT_8c09a1f4,uVar4,ar6,ar7);
    if (*(int *)(DAT_8c09a204 + ar4) != 0) {
      (**(code **)(DAT_8c09a208 + *(int *)(*(int *)(DAT_8c09a204 + ar4) + 8)))
                (*(int *)(DAT_8c09a204 + ar4),ar5,ar6,ar7);
      uVar4 = 1;
      (**(code **)(DAT_8c09a20c + *(int *)(*(int *)(DAT_8c09a204 + ar4) + 8)))
                (*(int *)(DAT_8c09a204 + ar4),1,ar6,ar7);
      (*(code *)PTR_FUN_8c09a210)(*(undefined4 *)(DAT_8c09a204 + ar4),uVar4,ar6,ar7);
      uVar3 = (**(code **)(DAT_8c09a214 + *(int *)(*(int *)(DAT_8c09a204 + ar4) + 8)))
                        (*(int *)(DAT_8c09a204 + ar4),uVar4,ar6,ar7);
      *(undefined4 *)((int)puVar5 + -0x18) = uVar3;
      (*(code *)PTR_FUN_8c09a21c)(*(undefined4 *)(DAT_8c09a204 + ar4),uVar4,ar6,ar7);
    }
    uVar3 = (*(code *)PTR_FUN_8c09a1fc)(ar5,uVar4,ar6,ar7);
    *(short *)((int)puVar5 + -0x4e) = (short)uVar3;
    ar5 = uVar4;
    a7 = ar7;
    if (*(ushort *)((int)puVar5 + -0x4e) < 5) {
      *(undefined1 *)(DAT_8c09a220 + ar4) = 0;
    }
  }
  (**(code **)(DAT_8c09a51c + *(int *)(ar4 + 8)))(ar4,ar5,ar6,a7);
  (*(code *)PTR_FUN_8c09a524)(ar4 + DAT_8c09a520,ar5,ar6,a7);
  return 1;
}



/* FUN_8c09a528 @ 8c09a528 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09a528(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4d) = *(char *)(ar4 + 0x4d) + -1;
  return 0x4d;
}



/* FUN_8c09a540 @ 8c09a540 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09a540(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4e) = *(char *)(ar4 + 0x4e) + '\x01';
  return 0x4e;
}



/* Class_12a7f4_m3_09a558 @ 8c09a558 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09a942) */
/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m3_09a558(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *a7;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar5;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3;
  undefined8 in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar10;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar5 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar5 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar5 + -0x14) = in_PR;
  *(undefined4 *)((int)puVar5 + -0x5c) = ar6;
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(int *)((int)puVar5 + -0x38) = ar4;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (ulonglong)*(uint *)(*(int *)((int)puVar5 + -0x38) + 0x34);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x38) + 0x34);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09a5f0),(int)in_dr0);
    }
    else {
      dVar7 = *(double *)(ar4 + DAT_8c09a5f0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar5 + -0x38) + 0x34) = fVar6;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar5 + -0x38) + 0x34) = in_xd0;
    }
    *(int *)((int)puVar5 + -0x3c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c09a5f4,
                               *(undefined4 *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a5f0));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a5f0);
      dVar7 = (double)CONCAT44(DAT_8c09a5f8,DAT_8c09a5f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a5f0) = fVar6;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar5 + -0x3c) + DAT_8c09a5f0) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c09a5f8,*(undefined4 *)(ar4 + DAT_8c09a5f0));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c09a5f0);
      in_dr0 = CONCAT44(DAT_8c09a5fc,DAT_8c09a5f8);
    }
    if (in_FPSCR_PR == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c09a5f8,(float)in_dr0);
        *(undefined4 *)(ar4 + DAT_8c09a5f0) = DAT_8c09a5f8;
      }
      else {
        in_dr0 = CONCAT44(DAT_8c09a5fc,DAT_8c09a5f8);
        *(ulonglong *)(ar4 + DAT_8c09a5f0) = in_dr0;
      }
    }
  }
  a7 = ar7;
  switch(*(undefined1 *)(DAT_8c09a5fc + ar4)) {
  case 0:
    uVar4 = ar5;
    uVar3 = (*(code *)PTR_FUN_8c09a834)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar5 + -0x50) = (short)uVar3;
    uVar3 = (*(code *)PTR_get_field_c_02d1b8_8c09a83c)(ar4 + DAT_8c09a838,uVar4,ar6,a7);
    *(undefined4 *)((int)puVar5 + -0x1c) = uVar3;
    uVar1 = *(ushort *)((int)puVar5 + -0x50);
    iVar2 = *(int *)((int)puVar5 + -0x1c);
    if (*(int *)(DAT_8c09a840 + ar4) != 0) {
      (**(code **)(DAT_8c09a844 + *(int *)(*(int *)(DAT_8c09a840 + ar4) + 8)))
                (*(int *)(DAT_8c09a840 + ar4),ar5,ar6,a7);
      uVar4 = 1;
      (**(code **)(DAT_8c09a848 + *(int *)(*(int *)(DAT_8c09a840 + ar4) + 8)))
                (*(int *)(DAT_8c09a840 + ar4),1,ar6,a7);
      (*(code *)PTR_FUN_8c09a84c)(*(undefined4 *)(DAT_8c09a840 + ar4),uVar4,ar6,a7);
      uVar3 = (**(code **)(DAT_8c09a850 + *(int *)(*(int *)(DAT_8c09a840 + ar4) + 8)))
                        (*(int *)(DAT_8c09a840 + ar4),uVar4,ar6,a7);
      *(undefined4 *)((int)puVar5 + -0x20) = uVar3;
      (*(code *)PTR_FUN_8c09a858)(*(undefined4 *)(DAT_8c09a840 + ar4),uVar4,ar6,a7);
    }
    (**(code **)(DAT_8c09a85c + *ar7))(ar7,uVar4,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x24) = (int)(in_dr0 >> 0x20);
      fVar6 = *(float *)((int)puVar5 + -0x24);
      fVar9 = DAT_8c09a860;
    }
    else {
      *(ulonglong *)((int)puVar5 + -0x24) = in_dr0;
      fVar6 = DAT_8c09a860;
      fVar9 = DAT_8c09a864;
    }
    if (in_FPSCR_PR != '\0' || fVar9 <= fVar6) {
      uVar3 = (**(code **)((int)DAT_8c09a864 + *ar7))(ar7,uVar4,ar6,a7);
      *(undefined4 *)((int)puVar5 + -0x28) = uVar3;
      uVar3 = (*(code *)PTR_FUN_8c09a868)(*(undefined4 *)((int)puVar5 + -0x28),uVar4,ar6,a7);
      *(char *)((int)puVar5 + -0x58) = (char)uVar3;
      if (*(char *)((int)puVar5 + -0x58) < '\x04') {
        ar5 = 0x3c;
        uVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c09a8b4)((uint)uVar1 - iVar2,0x3c,ar6,a7)
        ;
        *(undefined4 *)((int)puVar5 + -0x40) = uVar3;
        if (0 < *(int *)((int)puVar5 + -0x40)) {
          *(undefined1 *)(DAT_8c09a8b8 + ar4) = 1;
          uVar3 = (**(code **)(DAT_8c09a8bc + *ar7))(ar7,ar5,ar6,a7);
          *(undefined4 *)((int)puVar5 + -0x2c) = uVar3;
          (*(code *)PTR_FUN_8c09a8c0)(*(undefined4 *)((int)puVar5 + -0x2c),ar5,ar6,a7);
        }
        break;
      }
    }
    uVar3 = (*(code *)PTR_FUN_8c09a86c)(ar5,uVar4,ar6,a7);
    *(short *)((int)puVar5 + -0x52) = (short)uVar3;
    uVar4 = (uint)*(ushort *)((int)puVar5 + -0x52);
    (*(code *)PTR_FUN_8c09a870)(ar4 + DAT_8c09a838,uVar4,ar6,a7);
    uVar3 = (*(code *)PTR_FUN_8c09a834)(ar5,uVar4,ar6,a7);
    *(short *)((int)puVar5 + -0x54) = (short)uVar3;
    ar5 = (uint)*(ushort *)((int)puVar5 + -0x54);
    (*(code *)PTR_FUN_8c09a874)(ar4 + DAT_8c09a838,ar5,ar6,a7);
    break;
  case 1:
    ar6 = *(undefined4 *)((int)puVar5 + -0x5c);
    (**(code **)(*(int *)(*(int *)(DAT_8c09a960 + ar4) + 8) + 0x14))
              (*(int *)(DAT_8c09a960 + ar4),ar5,ar6,ar7);
    (**(code **)(DAT_8c09a964 + *(int *)(*(int *)(DAT_8c09a960 + ar4) + 8)))
              (*(int *)(DAT_8c09a960 + ar4),0,ar6,a7);
    ar5 = *(uint *)(DAT_8c09a960 + ar4);
    (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
    (*(code *)PTR_FUN_8c09a968)(ar4,ar5,ar6,a7);
    *(undefined4 *)(DAT_8c09a960 + ar4) = 0;
    *(undefined1 *)(DAT_8c09a96c + ar4) = 2;
  case 2:
    fVar6 = (float)in_dr0;
    *(int *)((int)puVar5 + -0x44) = ar4;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a970);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a970);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = fVar6 + 1.0;
    }
    else {
      fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a970) = fVar6;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar5 + -0x44) + DAT_8c09a970) = in_xd0;
    }
    uVar3 = (*(code *)PTR_FUN_8c09a97c)
                      (*(undefined4 *)(DAT_8c09a978 + *(int *)(DAT_8c09a974 + ar4)),ar5,ar6,a7);
    *(undefined4 *)((int)puVar5 + -0x30) = uVar3;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09a970),in_fr3);
    }
    else {
      dVar7 = *(double *)(ar4 + DAT_8c09a970);
    }
    fVar6 = (float)(*(int *)((int)puVar5 + -0x30) + -1);
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c09a980,fVar6);
      }
      else {
        dVar8 = (double)CONCAT44(uRam8c09a984,DAT_8c09a980);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0) + fVar6);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar8,0);
    }
    else {
      bVar10 = dVar7 < dVar8;
    }
    if (!bVar10) {
      *(undefined1 *)(DAT_8c09a96c + ar4) = 3;
    }
    break;
  case 3:
    uVar3 = (*(code *)PTR_FUN_8c09a9fc)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar5 + -0x56) = (short)uVar3;
    ar5 = 100;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09aa00)
                      ((uint)*(ushort *)((int)puVar5 + -0x56),100,ar6,a7);
    *(undefined4 *)((int)puVar5 + -0x48) = uVar3;
    if (*(int *)((int)puVar5 + -0x48) == 0) {
      (*(code *)PTR_FUN_8c09aa04)(ar4,ar5,ar6,a7);
      *(undefined1 *)(DAT_8c09aa08 + ar4) = 4;
      uVar3 = (**(code **)(DAT_8c09aa0c + *ar7))(ar7,ar5,ar6,a7);
      *(undefined4 *)((int)puVar5 + -0x34) = uVar3;
      (*(code *)PTR_FUN_8c09aa10)(*(undefined4 *)((int)puVar5 + -0x34),ar5,ar6,a7);
    }
    break;
  case 0xff:
    uVar3 = (*(code *)PTR_FUN_8c09a6e8)(ar5,ar5,ar6,ar7);
    *(short *)((int)puVar5 + -0x4a) = (short)uVar3;
    uVar4 = (uint)*(ushort *)((int)puVar5 + -0x4a);
    (*(code *)PTR_FUN_8c09a6f0)(ar4 + DAT_8c09a6ec,uVar4,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c09a6f4)(ar5,uVar4,ar6,ar7);
    *(short *)((int)puVar5 + -0x4c) = (short)uVar3;
    uVar4 = (uint)*(ushort *)((int)puVar5 + -0x4c);
    (*(code *)PTR_FUN_8c09a6f8)(ar4 + DAT_8c09a6ec,uVar4,ar6,ar7);
    if (*(int *)(DAT_8c09a6fc + ar4) != 0) {
      (**(code **)(DAT_8c09a700 + *(int *)(*(int *)(DAT_8c09a6fc + ar4) + 8)))
                (*(int *)(DAT_8c09a6fc + ar4),ar5,ar6,ar7);
      uVar4 = 1;
      (**(code **)(DAT_8c09a704 + *(int *)(*(int *)(DAT_8c09a6fc + ar4) + 8)))
                (*(int *)(DAT_8c09a6fc + ar4),1,ar6,ar7);
      (*(code *)PTR_FUN_8c09a708)(*(undefined4 *)(DAT_8c09a6fc + ar4),uVar4,ar6,ar7);
      uVar3 = (**(code **)(DAT_8c09a70c + *(int *)(*(int *)(DAT_8c09a6fc + ar4) + 8)))
                        (*(int *)(DAT_8c09a6fc + ar4),uVar4,ar6,ar7);
      *(undefined4 *)((int)puVar5 + -0x18) = uVar3;
      (*(code *)PTR_FUN_8c09a714)(*(undefined4 *)(DAT_8c09a6fc + ar4),uVar4,ar6,ar7);
    }
    uVar3 = (*(code *)PTR_FUN_8c09a6f4)(ar5,uVar4,ar6,ar7);
    *(short *)((int)puVar5 + -0x4e) = (short)uVar3;
    ar5 = uVar4;
    a7 = ar7;
    if (*(ushort *)((int)puVar5 + -0x4e) < 5) {
      *(undefined1 *)(DAT_8c09a718 + ar4) = 0;
    }
  }
  (**(code **)(DAT_8c09aa14 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,a7);
  (*(code *)PTR_FUN_8c09aa1c)(ar4 + DAT_8c09aa18,ar5,ar6,a7);
  return 1;
}



/* ret_const_1_09aa20 @ 8c09aa20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_09aa20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* Class_12a7f4_m6_09aa28 @ 8c09aa28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m6_09aa28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09aa44)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12a7f4_m5_09aa48 @ 8c09aa48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m5_09aa48(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  iVar1 = -DAT_8c09aa7c;
  *(undefined4 *)((int)&uStack_4 + iVar1) = ar4;
  (*(code *)PTR_FUN_8c09aa80)((int)&stack0x00000000 + iVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09aa84)
            (*(undefined4 *)((int)&uStack_4 + iVar1),(int)&stack0x00000000 + iVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c09aa88)((int)&stack0x00000000 + iVar1,0xffffffff,ar6,ar7);
  return uVar2;
}



/* Class_12a7f4_m4_09aa8c @ 8c09aa8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m4_09aa8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09aaa8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09aaac @ 8c09aaac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09aaac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09aac4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_09aac8 @ 8c09aac8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09aac8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_09aacc @ 8c09aacc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09aacc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c09aad0 @ 8c09aad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09aad0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  float fVar2;
  double dVar3;
  int a7;
  int a6_00;
  int a5_00;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c09abc0)(*(int *)(DAT_8c09abbc + ar4) + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09abc4)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09abc8)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09abcc,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c09abd0,DAT_8c09abcc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09abd0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c09abd4,DAT_8c09abd0);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09abcc,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c09abd0,DAT_8c09abcc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09abd0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c09abd4,DAT_8c09abd0);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09abcc,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c09abd0,DAT_8c09abcc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09abd0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c09abd4,DAT_8c09abd0);
  }
  if (in_FPSCR_PR == '\0') {
    a5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5_00 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c09abd4)(0,a5_00,a6_00,a7);
  (*(code *)PTR_FUN_8c09abd8)(0,a5_00,a6_00,a7);
  uVar1 = (*(code *)PTR_FUN_8c09abdc)(*(int *)(DAT_8c09abbc + ar4) + 0x70,a5_00,a6_00,a7);
  a5 = (*(code *)PTR_deref_u32_8c09abe4)
                 (*(undefined4 *)(DAT_8c09abe0 + *(int *)(DAT_8c09abbc + ar4)),a5_00,a6_00,a7);
  a6 = (*(code *)PTR_FUN_8c09abec)
                 (*(undefined4 *)(DAT_8c09abe8 + *(int *)(DAT_8c09abbc + ar4)),a5_00,a6_00,a7);
  (*(code *)PTR_FUN_8c09abf4)(uVar1,a5,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c09abf8)(1,a5,a6,a7);
  return uVar1;
}



/* FUN_8c09abfc @ 8c09abfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09abfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ac48)(*(int *)(DAT_8c09ac44 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ac4c)(*(int *)(DAT_8c09ac44 + ar4) + 0x70,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ac50)(uVar1,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c09ac54 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c09ac54 + ar4) + 8) + 0x3c))
                      (*(int *)(DAT_8c09ac54 + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c09ac58 @ 8c09ac58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ac58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09ac70 @ 8c09ac70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ac70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_noop_038c8c_8c09aca0)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c09aca4 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c09aca4 + ar4) + 8) + 0x5c))
                      (*(int *)(DAT_8c09aca4 + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c09aca8 @ 8c09aca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09aca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = (*(code *)PTR_s_Shell_0fef9c_8c09acec)(ar5,10,0x11,ar7);
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (**(code **)(DAT_8c09acf0 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c09acf4 @ 8c09acf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09acf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c09acfc;
  *(undefined4 *)(DAT_8c09acfc + ar4) = ar6;
  return iVar1;
}



/* FUN_8c09ad00 @ 8c09ad00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ad00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_8c09ad2c + ar4) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c09ad30)(ar5,ar4 + DAT_8c09ad2c,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c09ad34 @ 8c09ad34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ad34(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ad7c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ad84)(ar4 + DAT_8c09ad80,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ad90)(ar4 + DAT_8c09ad8c,ar5 + DAT_8c09ad88,ar6,ar7);
  return uVar1;
}



/* FUN_8c09ad94 @ 8c09ad94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ad94(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09add8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ade0)(ar4 + DAT_8c09addc,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ade8)(ar4 + DAT_8c09ade4,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c09adec @ 8c09adec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09adec(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ae34)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ae3c)(ar4 + DAT_8c09ae38,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ae48)(ar4 + DAT_8c09ae44,ar5 + DAT_8c09ae40,ar6,ar7);
  return uVar1;
}



/* FUN_8c09ae4c @ 8c09ae4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ae4c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ae90)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ae98)(ar4 + DAT_8c09ae94,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09aea0)(ar4 + DAT_8c09ae9c,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* s_CMothEgg_LoadGRReq_09aeaa @ 8c09aea4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CMothEgg_LoadGRReq_09aeaa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_8c09af4c + ar4) == 0) {
    iVar1 = (*(code *)PTR_s_Failed_to_load_Pack_CAnimal__027a86_8c09af50)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c09af4c + ar4) = 1;
    }
  }
  else if (*(int *)(DAT_8c09af4c + ar4) == 1) {
    if (*(int *)(DAT_8c09af54 + ar4) == 0) {
      (*(code *)PTR_report_error_message_8c09af5c)
                (PTR_s_GRAPHICS_COMMON_8c09af58 + 0x69,PTR_s_GRAPHICS_COMMON_8c09af58 + 0x7b,0,2);
      *(undefined4 *)(DAT_8c09af4c + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(DAT_8c09af60 + *(int *)(*(int *)(DAT_8c09af54 + ar4) + 8)))
                        (*(int *)(DAT_8c09af54 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(DAT_8c09af64 + ar4) = 0;
        *(undefined4 *)(DAT_8c09af4c + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c09af68 @ 8c09af68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09af68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c09afac)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c09afb0 + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c09afb4 + *(int *)(*(int *)(DAT_8c09afb0 + ar4) + 8)))
                      (*(int *)(DAT_8c09afb0 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* FUN_8c09afb8 @ 8c09afb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09afb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09affc)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c09b000 + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c09b004 + *(int *)(*(int *)(DAT_8c09b000 + ar4) + 8)))
                      (*(int *)(DAT_8c09b000 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* s_Cpe_Home_nj_09b008 @ 8c09b008 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_Cpe_Home_nj_09b008(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_dr0;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined **)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + 4) = PTR_PTR_8c09b1b8;
    *(undefined **)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + 8) = PTR_PTR_8c09b1bc;
    *(undefined4 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + 0xc) = *(undefined4 *)PTR_PTR_8c09b1c0;
    *(undefined4 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + 0x10) = 0;
    *(undefined4 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + 0x14) = *(undefined4 *)PTR_PTR_8c09b1c4;
    *(undefined4 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + 0x18) = 0;
    *(undefined4 *)(DAT_8c09b1c8 + iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4) = DAT_8c09b1cc;
    *(undefined2 *)(DAT_8c09b1d0 + iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4) = 1;
    *(undefined4 *)(DAT_8c09b1d4 + iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4) = DAT_8c09b1d8;
    *(undefined2 *)(DAT_8c09b1dc + iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4) = 1;
    *(undefined4 *)(DAT_8c09b1e0 + iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4) = DAT_8c09b1e4;
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + DAT_8c09b1e8);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,(int)in_dr0);
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + DAT_8c09b1ec);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c09b1f0,(int)in_dr0);
      *(undefined4 *)puVar1 = DAT_8c09b1f0;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c09b1f4,DAT_8c09b1f0);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + _DAT_8c09b1f4);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c09b1f8,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c09b1f8;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c09b1fc,DAT_8c09b1f8);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09b1b0 + DAT_8c09b1b4 + _DAT_8c09b1fc);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c09b200,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c09b200;
    }
    else {
      in_dr0 = CONCAT44(_DAT_8c09b204,DAT_8c09b200);
      *puVar1 = in_dr0;
    }
  }
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined2 *)(_DAT_8c09b204 + iVar2 * 0x10) = 0xffff;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c09b204 + 4) = 0;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c09b204 + 8) = 1;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c09b204 + 0xc) = 0;
  }
  return 1;
}



/* ret_const_1_09b208 @ 8c09b208 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_09b208(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c09b210 @ 8c09b210 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09b210(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(PTR_DAT_8c09b430,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b438;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b438,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(PTR_DAT_8c09b444,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b448;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b448,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(PTR_DAT_8c09b44c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b450;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b450,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(PTR_DAT_8c09b454,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b458;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b458,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c09b45c = *(undefined4 *)DAT_8c09b460;
  }
  else {
    *(undefined8 *)PTR_DAT_8c09b45c = *DAT_8c09b460;
  }
  uVar1 = (*(code *)PTR_FUN_8c09b468)(DAT_8c09b464,puVar3,uVar2,ar7);
  puVar3 = PTR_FUN_8c09b470;
  uVar2 = DAT_8c09b46c;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_FUN_8c09b470,DAT_8c09b46c,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09b478)(DAT_8c09b474,puVar3,uVar2,ar7);
  puVar3 = PTR_free_if_nonnull_wrap_03a454_8c09b480;
  uVar2 = DAT_8c09b47c;
  (*(code *)PTR_global_list_push_8c09b440)
            (uVar1,PTR_free_if_nonnull_wrap_03a454_8c09b480,DAT_8c09b47c,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09b488)(DAT_8c09b484,puVar3,uVar2,ar7);
  puVar3 = PTR_free_if_nonnull_wrap_0247b0_8c09b490;
  uVar2 = DAT_8c09b48c;
  (*(code *)PTR_global_list_push_8c09b440)
            (uVar1,PTR_free_if_nonnull_wrap_0247b0_8c09b490,DAT_8c09b48c,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09b498)(DAT_8c09b494,puVar3,uVar2,ar7);
  puVar3 = PTR_free_if_nonnull_wrap_03a3dc_8c09b4a0;
  uVar2 = DAT_8c09b49c;
  (*(code *)PTR_global_list_push_8c09b440)
            (uVar1,PTR_free_if_nonnull_wrap_03a3dc_8c09b4a0,DAT_8c09b49c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4b0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b4b4;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4b4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4b8._4_4_,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b4c0;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4c0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4c8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b4cc;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4cc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4d0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b4d4;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4d4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4d8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b4dc;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4dc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4e0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b4e4;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4e4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4e8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09b43c;
  uVar2 = DAT_8c09b4ec;
  (*(code *)PTR_global_list_push_8c09b440)(uVar1,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4ec,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c09b434)(DAT_8c09b4f0,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c09b440)(uVar2,PTR_Vec3_dtor_8c09b43c,DAT_8c09b4f4,ar7);
  uVar2 = DAT_8c09b4c8;
  uVar1 = (*(code *)PTR_FUN_8c09b4fc)(DAT_8c09b4f8,DAT_8c09b4b0,DAT_8c09b4b8._4_4_,DAT_8c09b4c8);
  uVar2 = (*(code *)PTR_global_list_push_8c09b440)
                    (uVar1,PTR_Class_129938_m0_017084_8c09b504,DAT_8c09b500,uVar2);
  return uVar2;
}



/* FUN_8c09b508 @ 8c09b508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09b508(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c09b53c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b53c)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b53c)(ar4 + 0x18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b540)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c09b544 @ 8c09b544 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09b646) */
/* WARNING: Removing unreachable block (ram,0x8c09b616) */
/* WARNING: Removing unreachable block (ram,0x8c09b5be) */
/* WARNING: Removing unreachable block (ram,0x8c09b58e) */
/* WARNING: Removing unreachable block (ram,0x8c09b56c) */
/* WARNING: Removing unreachable block (ram,0x8c09b59e) */
/* WARNING: Removing unreachable block (ram,0x8c09b5dc) */
/* WARNING: Removing unreachable block (ram,0x8c09b626) */
/* WARNING: Removing unreachable block (ram,0x8c09b664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

float * FUN_8c09b544(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  int iVar2;
  undefined8 *a4;
  float fVar3;
  double dVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  float fVar8;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fVar7;
  
  pfVar1 = *(float **)((int)ar4 + 0x24);
  if ((int)pfVar1 <= *(int *)((int)ar4 + 0x2c) - *(int *)(ar4 + 5)) {
    *(undefined4 *)(ar4 + 5) = *(undefined4 *)((int)ar4 + 0x2c);
    a4 = ar4;
    iVar2 = (*(code *)PTR_rand_8c09b6a0)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c09b6a4,(float)iVar2);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c09b6a8,DAT_8c09b6a4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c09b6a8,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c09b6ac,DAT_8c09b6a8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c09b6ac,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(_DAT_8c09b6b0,DAT_8c09b6ac);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = (float)((ulonglong)dVar4 >> 0x20);
      fVar3 = SUB84(dVar4,0) + fVar7;
      dVar4 = (double)CONCAT44(fVar7,fVar3);
      iVar2 = (int)fVar3;
    }
    else {
      dVar4 = dVar4 + dVar4;
      iVar2 = (int)dVar4;
    }
    *(int *)((int)ar4 + 0x24) = iVar2;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(ar4 + 3);
    }
    else {
      in_xd0 = ar4[3];
    }
    uVar5 = (ulonglong)dVar4 & 0xffffffff;
    if (SUB84(dVar4,0) == 0.0) {
      iVar2 = (*(code *)PTR_rand_8c09b6a0)(a4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c09b6a4,(float)iVar2);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c09b6a8,DAT_8c09b6a4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(_DAT_8c09b6b0,fVar3);
      }
      else {
        uVar5 = CONCAT44(_DAT_8c09b6b4,_DAT_8c09b6b0);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)(uVar5 >> 0x20)) {
        iVar2 = (*(code *)PTR_rand_8c09b6a0)(a4,ar5,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c09b6a4,(float)iVar2);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c09b6a8,DAT_8c09b6a4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(_DAT_8c09b6b4,fVar3);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c09b6b8,_DAT_8c09b6b4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c09b6b8,fVar3);
        }
        else {
          dVar4 = (double)CONCAT44(_DAT_8c09b6bc,DAT_8c09b6b8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar4 + 0xc) = fVar3;
          fVar3 = *(float *)((int)ar4 + 0xc);
        }
        else {
          *(undefined8 *)((int)ar4 + 0xc) = in_xd0;
          in_xd0 = *(undefined8 *)((int)ar4 + 0xc);
        }
        if (fVar3 == 1.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + 0xc) = DAT_8c09b6b8;
          }
          else {
            *(undefined8 *)((int)ar4 + 0xc) = CONCAT44(_DAT_8c09b6bc,DAT_8c09b6b8);
          }
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)((int)ar4 + 0xc);
          uVar6 = *ar4;
        }
        fVar3 = (float)uVar6;
        if (in_FPSCR_PR != '\0' || fVar3 <= (float)((ulonglong)uVar6 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            uVar5 = CONCAT44(_DAT_8c09b6c0,fVar3);
            *(undefined4 *)(ar4 + 3) = _DAT_8c09b6c0;
          }
          else {
            uVar5 = CONCAT44(_FUN_8c09b6c4,_DAT_8c09b6c0);
            ar4[3] = uVar5;
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          uVar5 = CONCAT44(_DAT_8c09b6bc,fVar3);
          *(undefined4 *)(ar4 + 3) = _DAT_8c09b6bc;
        }
        else {
          uVar5 = CONCAT44(_DAT_8c09b6c0,_DAT_8c09b6bc);
          ar4[3] = uVar5;
        }
      }
    }
    fVar3 = (float)uVar5;
    pfVar1 = (float *)((int)ar4 + 0x1c);
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
    }
    if (fVar3 == 0.0) {
      iVar2 = (*(code *)PTR_rand_8c09b6a0)(a4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c09b6a4,(float)iVar2);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c09b6a8,DAT_8c09b6a4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      pfVar1 = (float *)&DAT_8c09b6b0;
      fVar7 = _DAT_8c09b6b0;
      fVar8 = _DAT_8c09b6b4;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = fVar3;
        fVar8 = _DAT_8c09b6b0;
      }
      if (in_FPSCR_PR == '\0' && fVar7 < fVar8) {
        iVar2 = (*(code *)PTR_rand_8c09b6a0)(a4,ar5,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c09b6a4,(float)iVar2);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c09b6a8,DAT_8c09b6a4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(_DAT_8c09b6b4,fVar3);
        }
        else {
          dVar4 = (double)CONCAT44(DAT_8c09b6b8,_DAT_8c09b6b4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c09b6b8,fVar3);
        }
        else {
          dVar4 = (double)CONCAT44(_DAT_8c09b6bc,DAT_8c09b6b8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 2) = fVar3;
          fVar3 = *(float *)(ar4 + 2);
        }
        else {
          ar4[2] = in_xd0;
        }
        if (fVar3 == 1.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 2) = DAT_8c09b6b8;
          }
          else {
            ar4[2] = CONCAT44(_DAT_8c09b6bc,DAT_8c09b6b8);
          }
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)(ar4 + 2));
        }
        else {
          uVar6 = *(undefined8 *)((int)ar4 + 4);
        }
        if (in_FPSCR_PR != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
          pfVar1 = (float *)&DAT_8c09b6c0;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + 0x1c) = _DAT_8c09b6c0;
          }
          else {
            *(undefined8 *)((int)ar4 + 0x1c) = CONCAT44(_FUN_8c09b6c4,_DAT_8c09b6c0);
          }
        }
        else {
          pfVar1 = (float *)&DAT_8c09b6bc;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + 0x1c) = _DAT_8c09b6bc;
          }
          else {
            *(undefined8 *)((int)ar4 + 0x1c) = CONCAT44(_DAT_8c09b6c0,_DAT_8c09b6bc);
          }
        }
      }
    }
  }
  return pfVar1;
}



/* FUN_8c09b6c4 @ 8c09b6c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09b732) */
/* WARNING: Removing unreachable block (ram,0x8c09b7e2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

float FUN_8c09b6c4(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  float *a4;
  float fVar2;
  ulonglong in_dr0;
  double dVar3;
  ulonglong uVar4;
  float fVar5;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a4 = ar4;
  (*(code *)PTR_FUN_8c09b83c)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c09b840,(int)(in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar4 = CONCAT44(_FUN_8c09b844,DAT_8c09b840);
  }
  if (in_FPSCR_PR != '\0' || (float)(uVar4 >> 0x20) <= (float)uVar4) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(ar4[6],*ar4);
    }
    else {
      in_dr0 = *(ulonglong *)ar4;
      dVar3 = *(double *)(ar4 + 6);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 + dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *ar4 = fVar2;
      fVar2 = ar4[6];
    }
    else {
      *(ulonglong *)ar4 = in_dr0;
      in_dr0 = *(ulonglong *)(ar4 + 6);
    }
    uVar4 = (ulonglong)(uint)fVar2;
    if (in_FPSCR_PR == '\0' && fVar2 < 0.0) {
LAB_8c09b712:
      fVar2 = (float)uVar4;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = ar4[6];
      }
      else {
        in_dr0 = *(ulonglong *)(ar4 + 6);
      }
      uVar4 = (ulonglong)(uint)fVar2;
      if (in_FPSCR_PR == '\0' && fVar2 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          uVar4 = CONCAT44(ar4[3],*ar4);
        }
        else {
          in_dr0 = *(ulonglong *)ar4;
          uVar4 = *(ulonglong *)(ar4 + 3);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar4 < (float)(uVar4 >> 0x20)) goto LAB_8c09b72a;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        uVar4 = CONCAT44(ar4[3],*ar4);
      }
      else {
        in_dr0 = *(ulonglong *)ar4;
        uVar4 = *(ulonglong *)(ar4 + 3);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar4 < (float)(uVar4 >> 0x20)) goto LAB_8c09b712;
LAB_8c09b72a:
      fVar2 = (float)uVar4;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = ar4[3];
      }
      else {
        in_dr0 = *(ulonglong *)(ar4 + 3);
      }
      if (fVar2 == 1.0) {
        if (in_FPSCR_SZ == '\0') {
          ar4[3] = 1.0;
          *ar4 = 1.0;
        }
        else {
          *(ulonglong *)(ar4 + 3) = CONCAT44(0x3f800000,fVar2);
          *(ulonglong *)ar4 = CONCAT44(0x3f800000,fVar2);
        }
        uVar4 = (ulonglong)(uint)fVar2;
        if (in_FPSCR_SZ == '\0') {
          ar4[6] = 0.0;
        }
        else {
          *(ulonglong *)(ar4 + 6) = uVar4;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar3 = (double)CONCAT44(ar4[6],fVar2);
        }
        else {
          dVar3 = *(double *)(ar4 + 6);
        }
        if (in_FPSCR_PR == '\0') {
          dVar3 = (double)CONCAT44(-(float)((ulonglong)dVar3 >> 0x20),SUB84(dVar3,0));
        }
        else {
          dVar3 = -dVar3;
        }
        if (in_FPSCR_SZ == '\0') {
          ar4[6] = (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          *(double *)(ar4 + 6) = dVar3;
        }
        uVar4 = CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (in_FPSCR_SZ == '\0') {
          ar4[3] = 1.0;
        }
        else {
          *(ulonglong *)(ar4 + 3) = uVar4;
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c09b83c)(a4,ar5,ar6,ar7);
  uVar1 = uVar4 >> 0x20;
  fVar2 = DAT_8c09b840;
  fVar5 = _FUN_8c09b844;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = in_dr0;
    fVar2 = (float)uVar1;
    fVar5 = DAT_8c09b840;
  }
  if (in_FPSCR_PR == '\0' && fVar2 < fVar5) goto LAB_8c09b826;
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(ar4[7],ar4[1]);
  }
  else {
    uVar4 = *(ulonglong *)(ar4 + 1);
    dVar3 = *(double *)(ar4 + 7);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[1] = fVar2;
    fVar2 = ar4[7];
  }
  else {
    *(ulonglong *)(ar4 + 1) = uVar4;
  }
  uVar4 = (ulonglong)(uint)fVar2;
  if (in_FPSCR_PR == '\0' && fVar2 < 0.0) {
LAB_8c09b7be:
    fVar2 = (float)uVar4;
    if (in_FPSCR_SZ == '\0') {
      fVar2 = ar4[7];
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar2) goto LAB_8c09b826;
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar4 = *(ulonglong *)(ar4 + 4);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar4 >> 0x20) <= (float)uVar4) goto LAB_8c09b826;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar4 = *(ulonglong *)(ar4 + 4);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar4 < (float)(uVar4 >> 0x20)) goto LAB_8c09b7be;
  }
  fVar2 = (float)uVar4;
  if (in_FPSCR_SZ == '\0') {
    fVar2 = ar4[4];
  }
  if (fVar2 == 1.0) {
    if (in_FPSCR_SZ == '\0') {
      ar4[4] = 1.0;
      ar4[1] = 1.0;
    }
    else {
      *(ulonglong *)(ar4 + 4) = CONCAT44(0x3f800000,fVar2);
      *(ulonglong *)(ar4 + 1) = CONCAT44(0x3f800000,fVar2);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[7] = 0.0;
    }
    else {
      *(ulonglong *)(ar4 + 7) = (ulonglong)(uint)fVar2;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(ar4[7],fVar2);
    }
    else {
      dVar3 = *(double *)(ar4 + 7);
    }
    if (in_FPSCR_PR == '\0') {
      dVar3 = (double)CONCAT44(-(float)((ulonglong)dVar3 >> 0x20),SUB84(dVar3,0));
    }
    else {
      dVar3 = -dVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[7] = (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 7) = dVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[4] = 1.0;
    }
    else {
      *(ulonglong *)(ar4 + 4) = CONCAT44(0x3f800000,SUB84(dVar3,0));
    }
  }
LAB_8c09b826:
  fVar2 = ar4[0xb];
  ar4[0xb] = (float)((int)fVar2 + 1);
  return (float)((int)fVar2 + 1);
}



/* FUN_8c09b844 @ 8c09b844 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09b844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c09b884)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b884)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b888)(ar4 + 0x18,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24) = 0x2d;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}



/* FUN_8c09b88c @ 8c09b88c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09b88c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c09b8dc)(ar4 + 0x18,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c09b8dc)(ar4 + 0xc,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c09b8dc)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c09b8e0)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* s_GRAPHICS_MUSHROOMERLINE_09b8e8 @ 8c09b8e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MUSHROOMERLINE_09b8e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *a5;
  undefined4 uVar2;
  undefined *a6;
  int iVar3;
  undefined4 a7;
  uint in_fr1;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char in_FPSCR_SZ;
  
  a7 = 0;
  uVar2 = 1;
  uVar1 = 0;
  (*(code *)PTR_FUN_8c09baa8)(ar4,0,1,0);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c09baac;
  (*(code *)PTR_FUN_8c09bab4)(ar4 + DAT_8c09bab0,uVar1,uVar2,a7);
  (*(code *)PTR_FUN_8c09bac4)
            (ar4 + DAT_8c09bac0,PTR_Vec3_ctor_zero_8c09babc,PTR_Vec3_dtor_8c09bab8,0x10);
  (*(code *)PTR_FUN_8c09bac4)
            (ar4 + DAT_8c09bac8,PTR_Vec3_ctor_zero_8c09babc,PTR_Vec3_dtor_8c09bab8,0x10);
  uVar2 = 0x10;
  a5 = PTR_Vec3_ctor_zero_8c09babc;
  a6 = PTR_Vec3_dtor_8c09bab8;
  (*(code *)PTR_FUN_8c09bac4)
            (ar4 + DAT_8c09bacc,PTR_Vec3_ctor_zero_8c09babc,PTR_Vec3_dtor_8c09bab8,0x10);
  (*(code *)PTR_FUN_8c09bad4)(ar4 + DAT_8c09bad0,a5,a6,uVar2);
  (*(code *)PTR_FUN_8c09badc)(ar4 + DAT_8c09bad8,a5,a6,uVar2);
  (*(code *)PTR_FUN_8c09bae4)(ar4 + DAT_8c09bae0,a5,a6,uVar2);
  (*(code *)PTR_FUN_8c09baec)(ar4 + 0xc,a5,a6,uVar2);
  *(undefined1 *)(DAT_8c09baf0 + ar4) = 0xff;
  iVar3 = ar4 + DAT_8c09bab0;
  uVar1 = *(undefined4 *)(DAT_8c09baf8 + *(int *)(DAT_8c09baf4 + ar4));
  (*(code *)PTR_FUN_8c09bafc)(ar4,uVar1,iVar3,uVar2);
  (*(code *)PTR_FUN_8c09bb00)(ar4 + DAT_8c09bad8,uVar1,iVar3,uVar2);
  uVar4 = DAT_8c09bb04;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = in_fr1;
  }
  (**(code **)(*(int *)(ar4 + DAT_8c09bb08) + 0x28))
            ((int *)(ar4 + DAT_8c09bb08),ar4 + 0x30,iVar3,uVar2);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(DAT_8c09bb0c + ar4 + iVar3 * 4) = 0;
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  *(int *)(DAT_8c09bb10 + ar4) = ar4 + DAT_8c09bad0;
  *(int *)(DAT_8c09bb14 + ar4) = ar4 + DAT_8c09bad8;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c09bb18) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c09bb18) = (ulonglong)uVar4;
  }
  *(undefined1 *)(DAT_8c09bb1c + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c09bb20) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c09bb20) = (ulonglong)uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c09bb28,uVar4);
    *(undefined4 *)(ar4 + DAT_8c09bb24) = DAT_8c09bb28;
  }
  else {
    uVar5 = CONCAT44(DAT_8c09bb2c,DAT_8c09bb28);
    *(undefined8 *)(ar4 + DAT_8c09bb24) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c09bb30,(int)uVar5);
    *(undefined4 *)(ar4 + DAT_8c09bb2c) = DAT_8c09bb30;
  }
  else {
    uVar6 = CONCAT44(DAT_8c09bb34,DAT_8c09bb30);
    *(ulonglong *)(ar4 + DAT_8c09bb2c) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c09bb34) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c09bb34) = uVar6 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c09bb38) = DAT_8c09bb28;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c09bb38) = CONCAT44(DAT_8c09bb2c,DAT_8c09bb28);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c09bb3c) = DAT_8c09bb30;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c09bb3c) = CONCAT44(DAT_8c09bb34,DAT_8c09bb30);
  }
  *(undefined4 *)(DAT_8c09bb40 + ar4) = 0;
  return ar4;
}



/* Class_12a990_m0_09bb44 @ 8c09bb44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a990_m0_09bb44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c09bbec;
    (*(code *)PTR_FUN_8c09bbf4)(ar4 + DAT_8c09bbf0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c09bbfc)(ar4 + DAT_8c09bbf8,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129c24_m0_02ff90_8c09bc04)(ar4 + DAT_8c09bc00,0xffffffff,ar6,ar7);
    (*(code *)PTR_vec_delete_array_8c09bc10)(ar4 + DAT_8c09bc0c,PTR_Vec3_dtor_8c09bc08,0x10,8);
    (*(code *)PTR_vec_delete_array_8c09bc10)(ar4 + DAT_8c09bc14,PTR_Vec3_dtor_8c09bc08,0x10,8);
    a7 = 8;
    a6 = 0x10;
    (*(code *)PTR_vec_delete_array_8c09bc10)(ar4 + DAT_8c09bc18,PTR_Vec3_dtor_8c09bc08,0x10,8);
    (*(code *)PTR_Class_129938_m0_017084_8c09bc20)(ar4 + DAT_8c09bc1c,0xffffffff,a6,a7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c09bc24)(ar4,0,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c09bc28)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* Class_12a990_m2_09bc2c @ 8c09bc2c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09c104) */
/* WARNING: Removing unreachable block (ram,0x8c09c442) */
/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m2_09bc2c(int ar4,float *ar5,double *ar6,double *ar7)

{
  char cVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 unaff_r9;
  int iVar9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 in_dr0;
  undefined8 uVar13;
  ulonglong uVar14;
  double dVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 in_dr2;
  double dVar18;
  undefined8 in_xd0;
  bool bVar19;
  undefined4 in_PR;
  int iVar20;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&uStack_8 + 4);
  }
  else {
    puVar11 = &uStack_8;
  }
  *(undefined4 *)((int)puVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar11 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar11 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar11 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar11 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar11 + -0x1c) = in_PR;
  pfVar6 = (float *)0x0;
  cVar1 = *(char *)(DAT_8c09bc74 + ar4);
  pdVar8 = ar7;
  if (cVar1 == -1) {
    pdVar7 = ar6;
    uVar4 = (*(code *)PTR_FUN_8c09bcc8)(ar5,0,ar6,ar7);
    *(short *)((int)puVar11 + -0xd2) = (short)uVar4;
    uVar5 = (uint)*(ushort *)((int)puVar11 + -0xd2);
    (*(code *)PTR_FUN_8c09bcd0)(ar4 + DAT_8c09bccc,uVar5,pdVar7,pdVar8);
    uVar4 = (*(code *)PTR_FUN_8c09bcd4)(ar5,uVar5,pdVar7,pdVar8);
    *(short *)((int)puVar11 + -0xd4) = (short)uVar4;
    (*(code *)PTR_FUN_8c09bcd8)
              (ar4 + DAT_8c09bccc,(uint)*(ushort *)((int)puVar11 + -0xd4),pdVar7,pdVar8);
    pdVar7 = (double *)0x0;
    pfVar6 = (float *)0x4;
    (*(code *)PTR_FUN_8c09bcdc)(ar5,4,0,pdVar8);
    for (iVar9 = 0; iVar9 < 8; iVar9 = iVar9 + 1) {
      *(int *)((int)puVar11 + DAT_8c09bd90 + -0xdc) = iVar9;
      if (*(int *)(DAT_8c09bd94 + ar4 + *(int *)((int)puVar11 + DAT_8c09bd90 + -0xdc) * 4) != 0) {
        *(int *)((int)puVar11 + DAT_8c09bd98 + -0xdc) = iVar9;
        iVar10 = *(int *)(DAT_8c09bd94 + ar4 + *(int *)((int)puVar11 + DAT_8c09bd98 + -0xdc) * 4);
        pfVar6 = ar5;
        (**(code **)(DAT_8c09bd9c + *(int *)(iVar10 + 8)))(iVar10,ar5,pdVar7,pdVar8);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44((undefined4)DAT_8c09bda4,(int)in_dr0);
      *(undefined4 *)(ar4 + DAT_8c09bda0) = (undefined4)DAT_8c09bda4;
    }
    else {
      uVar13 = CONCAT44(DAT_8c09bda4._4_4_,(undefined4)DAT_8c09bda4);
      *(undefined8 *)(ar4 + DAT_8c09bda0) = uVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c09bdac,(int)uVar13);
      *(undefined4 *)(ar4 + DAT_8c09bda4._4_4_) = DAT_8c09bdac;
    }
    else {
      in_dr0 = CONCAT44(DAT_8c09bdb0,DAT_8c09bdac);
      *(undefined8 *)(ar4 + DAT_8c09bda4._4_4_) = in_dr0;
    }
    *(undefined1 *)(DAT_8c09bdb0 + ar4) = 0;
  }
  else {
    pdVar7 = ar6;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar4 = (*(code *)PTR_FUN_8c09c270)(ar5,0,ar6,ar7);
        *(short *)((int)puVar11 + -0xdc) = (short)uVar4;
        uVar4 = (*(code *)PTR_get_field_c_02d1b8_8c09c278)(ar4 + DAT_8c09c274,pfVar6,pdVar7,pdVar8);
        *(undefined4 *)((int)puVar11 + DAT_8c09c27c + -0xdc) = uVar4;
        iVar9 = (uint)*(ushort *)((int)puVar11 + -0xdc) -
                *(int *)((int)puVar11 + DAT_8c09c27c + -0xdc);
        for (iVar10 = 0; uVar4 = (undefined4)in_dr0, iVar10 < 8; iVar10 = iVar10 + 1) {
          *(int *)((int)puVar11 + -0x94) = iVar10;
          if (*(int *)(DAT_8c09c39c + ar4 + *(int *)((int)puVar11 + -0x94) * 4) != 0) {
            *(int *)((int)puVar11 + -0x98) = iVar10;
            iVar20 = *(int *)(DAT_8c09c39c + ar4 + *(int *)((int)puVar11 + -0x98) * 4);
            (**(code **)(DAT_8c09c3a0 + *(int *)(iVar20 + 8)))(iVar20,1,pdVar7,pdVar8);
            *(int *)((int)puVar11 + -0x9c) = iVar10;
            iVar20 = *(int *)(DAT_8c09c39c + ar4 + *(int *)((int)puVar11 + -0x9c) * 4);
            pfVar6 = ar5;
            pdVar7 = ar6;
            pdVar8 = ar7;
            (**(code **)(*(int *)(iVar20 + 8) + 0x10))(iVar20,ar5,ar6,ar7);
          }
        }
        ar6 = *(double **)(DAT_8c09c3a4 + *(int *)(ar4 + 8));
        iVar10 = (*(code *)ar6)(ar4,pfVar6,ar6,pdVar8);
        *(int *)((int)puVar11 + DAT_8c09c3a8 + -0xdc) = iVar10;
        if (*(int *)((int)puVar11 + DAT_8c09c3a8 + -0xdc) != 0) {
          iVar10 = iVar9;
          (*(code *)PTR_FUN_8c09c3b0)(ar4 + DAT_8c09c3ac,iVar9,ar7,pdVar8);
          ar6 = ar7;
        }
        if (*(char *)(DAT_8c09c3b4 + ar4) == '\x01') {
          *(int *)((int)puVar11 + -0xa0) = ar4;
          if (in_FPSCR_SZ == '\0') {
            uVar4 = *(undefined4 *)(*(int *)((int)puVar11 + -0xa0) + DAT_8c09c3b8);
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + -0xa0) + DAT_8c09c3b8);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09c3bc),uVar4);
          }
          else {
            dVar15 = *(double *)(ar4 + DAT_8c09c3bc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar11 + -0xa0) + DAT_8c09c3b8) = fVar12;
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar11 + -0xa0) + DAT_8c09c3b8) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c09c3c0,*(undefined4 *)(ar4 + DAT_8c09c3b8));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + DAT_8c09c3b8);
            dVar15 = (double)CONCAT44(DAT_8c09c3c4,DAT_8c09c3c0);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 * dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c09c3c4,fVar12);
          }
          else {
            dVar15 = (double)CONCAT44(PTR_FUN_8c09c3c8,DAT_8c09c3c4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)((ulonglong)dVar15 >> 0x20);
            fVar12 = SUB84(dVar15,0) / fVar16;
            dVar15 = (double)CONCAT44(fVar16,fVar12);
            iVar20 = (int)fVar12;
          }
          else {
            dVar15 = dVar15 / dVar15;
            iVar20 = (int)dVar15;
          }
          (*(code *)PTR_FUN_8c09c3c8)(iVar20,iVar10,ar6,pdVar8);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar11 + DAT_8c09c3cc + -0xdc) = (int)((ulonglong)dVar15 >> 0x20);
          }
          else {
            *(double *)((int)puVar11 + DAT_8c09c3cc + -0xdc) = dVar15;
          }
          *(int *)((int)puVar11 + -0xa4) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)(ulonglong)*(uint *)(ar4 + DAT_8c09c3d0);
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + DAT_8c09c3d0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + DAT_8c09c3cc + -0xdc),
                                      SUB84(dVar15,0));
          }
          else {
            dVar15 = *(double *)((int)puVar11 + DAT_8c09c3cc + -0xdc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 * dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar11 + -0xa4) + 0x30),fVar12)
            ;
          }
          else {
            dVar15 = *(double *)(*(int *)((int)puVar11 + -0xa4) + 0x30);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar11 + -0xa4) + 0x30) = fVar12;
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar11 + -0xa4) + 0x30) = in_xd0;
          }
          fVar12 = DAT_8c09c3d4;
          fVar16 = fRam8c09c3d8;
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)(ar4 + DAT_8c09c3b8);
            fVar16 = DAT_8c09c3d4;
          }
          if (in_FPSCR_PR != '\0' || fVar16 <= fVar12) {
            *(undefined1 *)(DAT_8c09c3b4 + ar4) = 0;
          }
        }
        else {
          *(int *)((int)puVar11 + -0xa8) = ar4;
          if (in_FPSCR_SZ == '\0') {
            uVar4 = *(undefined4 *)(*(int *)((int)puVar11 + -0xa8) + DAT_8c09c494);
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + -0xa8) + DAT_8c09c494);
          }
          ar6 = (double *)(ar4 + DAT_8c09c498);
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(int *)ar6,uVar4);
          }
          else {
            dVar15 = *ar6;
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar11 + -0xa8) + DAT_8c09c494) = fVar12;
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar11 + -0xa8) + DAT_8c09c494) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c09c49c,*(undefined4 *)(ar4 + DAT_8c09c494));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + DAT_8c09c494);
            dVar15 = (double)CONCAT44(DAT_8c09c4a0,DAT_8c09c49c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 * dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c09c4a0,fVar12);
          }
          else {
            dVar15 = (double)CONCAT44(PTR_FUN_8c09c4a4,DAT_8c09c4a0);
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)((ulonglong)dVar15 >> 0x20);
            fVar12 = SUB84(dVar15,0) / fVar16;
            dVar15 = (double)CONCAT44(fVar16,fVar12);
            iVar10 = (int)fVar12;
          }
          else {
            dVar15 = dVar15 / dVar15;
            iVar10 = (int)dVar15;
          }
          (*(code *)PTR_FUN_8c09c4a4)(iVar10,DAT_8c09c494,ar6,pdVar8);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar11 + DAT_8c09c4a8 + -0xdc) = (int)((ulonglong)dVar15 >> 0x20);
          }
          else {
            *(double *)((int)puVar11 + DAT_8c09c4a8 + -0xdc) = dVar15;
          }
          *(int *)((int)puVar11 + -0xac) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + DAT_8c09c4a8 + -0xdc),
                                      *(undefined4 *)(ar4 + DAT_8c09c4ac));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + DAT_8c09c4ac);
            dVar15 = *(double *)((int)puVar11 + DAT_8c09c4a8 + -0xdc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 * dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar11 + -0xac) + 0x34),fVar12)
            ;
          }
          else {
            dVar15 = *(double *)(*(int *)((int)puVar11 + -0xac) + 0x34);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar11 + -0xac) + 0x34) = fVar12;
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar11 + -0xac) + 0x34) = in_xd0;
          }
        }
        *(int *)((int)puVar11 + -0xb0) = ar4;
        *(int *)(DAT_8c09c4b0 + *(int *)((int)puVar11 + -0xb0)) =
             *(int *)(DAT_8c09c4b0 + *(int *)((int)puVar11 + -0xb0)) + 1;
        for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
          (*(code *)PTR_FUN_8c09c5a8)(ar4,iVar10,ar6,pdVar8);
          *(int *)((int)puVar11 + -0xb4) = iVar10;
          *(int *)((int)puVar11 + -0xb8) = iVar10;
          *(int *)((int)puVar11 + -0xbc) = iVar10;
          *(int *)((int)puVar11 + -0xc0) = iVar10;
          (*(code *)PTR_FUN_8c09c5bc)
                    (*(undefined4 *)(DAT_8c09c5b8 + ar4 + *(int *)((int)puVar11 + -0xb4) * 4),
                     *(int *)((int)puVar11 + -0xb4),ar6,pdVar8);
        }
        pfVar6 = (float *)0x3c;
        uVar4 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c09c5c0)(iVar9,0x3c,ar6,pdVar8);
        *(undefined4 *)((int)puVar11 + -0xc4) = uVar4;
        if (2 < *(int *)((int)puVar11 + -0xc4)) {
          *(undefined1 *)(DAT_8c09c5c4 + ar4) = 2;
        }
        if (*(char *)(DAT_8c09c5c8 + ar4) == '\0') {
          uVar4 = (*(code *)PTR_FUN_8c09c5d0)(ar4 + DAT_8c09c5cc,pfVar6,ar6,pdVar8);
          *(undefined4 *)((int)puVar11 + DAT_8c09c5d4 + -0xdc) = uVar4;
          if (*(int *)((int)puVar11 + DAT_8c09c5d4 + -0xdc) != -1) {
            *(undefined1 *)(DAT_8c09c5c4 + ar4) = 0xff;
            *(undefined4 *)(DAT_8c09c5d8 + ar4) = 0;
          }
        }
      }
      else if (cVar1 == '\x02') {
        ar6 = (double *)0x1b;
        pfVar6 = (float *)0x5;
        (*(code *)PTR_FUN_8c09c5f0)(ar5,5,0x1b,ar7);
        for (iVar9 = 0; iVar9 < 8; iVar9 = iVar9 + 1) {
          *(int *)((int)puVar11 + -200) = iVar9;
          iVar10 = *(int *)(DAT_8c09c68c + ar4 + *(int *)((int)puVar11 + -200) * 4);
          (**(code **)(DAT_8c09c690 + *(int *)(iVar10 + 8)))(iVar10,0,ar6,pdVar8);
          *(int *)((int)puVar11 + -0xcc) = iVar9;
          pfVar6 = *(float **)(DAT_8c09c68c + ar4 + *(int *)((int)puVar11 + -0xcc) * 4);
          (**(code **)(*(int *)ar7 + 0x4c))(ar7,pfVar6,ar6,pdVar8);
          *(int *)((int)puVar11 + -0xd0) = iVar9;
          *(undefined4 *)(DAT_8c09c68c + ar4 + *(int *)((int)puVar11 + -0xd0) * 4) = 0;
        }
        (*(code *)PTR_FUN_8c09c694)(ar4,pfVar6,ar6,pdVar8);
      }
      goto LAB_8c09c65a;
    }
  }
  uVar4 = (*(code *)PTR_FUN_8c09bdb4)(ar5,pfVar6,pdVar7,pdVar8);
  *(short *)((int)puVar11 + -0xd6) = (short)uVar4;
  uVar5 = (uint)*(ushort *)((int)puVar11 + -0xd6);
  (*(code *)PTR_FUN_8c09bdbc)(ar4 + DAT_8c09bdb8,uVar5,pdVar7,pdVar8);
  uVar4 = (*(code *)PTR_FUN_8c09bdc0)(ar5,uVar5,pdVar7,pdVar8);
  *(short *)((int)puVar11 + -0xd8) = (short)uVar4;
  (*(code *)PTR_FUN_8c09bdc4)
            (ar4 + DAT_8c09bdb8,(uint)*(ushort *)((int)puVar11 + -0xd8),pdVar7,pdVar8);
  pdVar7 = (double *)0x0;
  pfVar6 = (float *)0x4;
  (*(code *)PTR_FUN_8c09bdc8)(ar5,4,0,pdVar8);
  for (iVar9 = 0; uVar4 = (undefined4)in_dr0, iVar9 < 8; iVar9 = iVar9 + 1) {
    *(int *)((int)puVar11 + DAT_8c09be64 + -0xdc) = iVar9;
    if (*(int *)(DAT_8c09be68 + ar4 + *(int *)((int)puVar11 + DAT_8c09be64 + -0xdc) * 4) != 0) {
      *(int *)((int)puVar11 + DAT_8c09be6c + -0xdc) = iVar9;
      iVar10 = *(int *)(DAT_8c09be68 + ar4 + *(int *)((int)puVar11 + DAT_8c09be6c + -0xdc) * 4);
      pfVar6 = ar5;
      (**(code **)(DAT_8c09be70 + *(int *)(iVar10 + 8)))(iVar10,ar5,pdVar7,pdVar8);
    }
  }
  *(int *)((int)puVar11 + DAT_8c09be74 + -0xdc) = ar4;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = *(undefined4 *)(*(int *)((int)puVar11 + DAT_8c09be74 + -0xdc) + DAT_8c09be78);
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + DAT_8c09be74 + -0xdc) + DAT_8c09be78);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09be7c),uVar4);
  }
  else {
    dVar15 = *(double *)(ar4 + DAT_8c09be7c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)(ulonglong)(uint)(SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20));
  }
  else {
    dVar15 = dVar15 + dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(*(int *)((int)puVar11 + DAT_8c09be74 + -0xdc) + DAT_8c09be78) = SUB84(dVar15,0);
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar11 + DAT_8c09be74 + -0xdc) + DAT_8c09be78) = in_xd0;
  }
  uVar4 = (*(code *)PTR_FUN_8c09be80)(ar5,pfVar6,pdVar7,pdVar8);
  *(short *)((int)puVar11 + -0xda) = (short)uVar4;
  uVar4 = (*(code *)PTR_get_field_c_02d1b8_8c09be88)(ar4 + DAT_8c09be84,pfVar6,pdVar7,pdVar8);
  *(undefined4 *)((int)puVar11 + DAT_8c09be8c + -0xdc) = uVar4;
  pfVar2 = (float *)((uint)*(ushort *)((int)puVar11 + -0xda) -
                    *(int *)((int)puVar11 + DAT_8c09be8c + -0xdc));
  iVar9 = 0;
  while( true ) {
    uVar17 = (undefined4)in_dr2;
    uVar4 = SUB84(dVar15,0);
    if (7 < iVar9) break;
    *(int *)((int)puVar11 + -0x60) = iVar9;
    if (*(int *)(DAT_8c09bf9c + ar4 + *(int *)((int)puVar11 + -0x60) * 4) != 0) {
      *(int *)((int)puVar11 + -100) = iVar9;
      iVar10 = *(int *)(DAT_8c09bf9c + ar4 + *(int *)((int)puVar11 + -100) * 4);
      (**(code **)(DAT_8c09bfa0 + *(int *)(iVar10 + 8)))(iVar10,1,pdVar7,pdVar8);
      *(int *)((int)puVar11 + -0x68) = iVar9;
      iVar10 = *(int *)(DAT_8c09bf9c + ar4 + *(int *)((int)puVar11 + -0x68) * 4);
      pfVar6 = ar5;
      pdVar7 = ar6;
      pdVar8 = ar7;
      (**(code **)(*(int *)(iVar10 + 8) + 0x10))(iVar10,ar5,ar6,ar7);
    }
    iVar9 = iVar9 + 1;
  }
  uVar3 = (**(code **)(DAT_8c09bfa4 + *(int *)(ar4 + 8)))(ar4,pfVar6,pdVar7,pdVar8);
  *(undefined4 *)((int)puVar11 + DAT_8c09bfa8 + -0xdc) = uVar3;
  ar6 = pdVar7;
  if (*(int *)((int)puVar11 + DAT_8c09bfa8 + -0xdc) != 0) {
    ar6 = ar7;
    (*(code *)PTR_FUN_8c09bfb0)(ar4 + DAT_8c09bfac,pfVar2,ar7,pdVar8);
    pfVar6 = pfVar2;
  }
  uVar3 = (*(code *)PTR_FUN_8c09bfb4)(ar4,pfVar6,ar6,pdVar8);
  *(undefined4 *)((int)puVar11 + DAT_8c09bfa4 + -0xdc) = uVar3;
  if (*(int *)((int)puVar11 + DAT_8c09bfa4 + -0xdc) == 1) {
    *(int *)((int)puVar11 + -0x6c) = ar4;
    pfVar6 = (float *)(*(int *)((int)puVar11 + -0x6c) + 0x34);
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)(*(int *)((int)puVar11 + -0x6c) + 0x34);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + -0x6c) + 0x34);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09bfb8),uVar4);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c09bfb8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar15 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *pfVar6 = fVar12;
    }
    else {
      *(undefined8 *)pfVar6 = in_xd0;
    }
    *(int *)((int)puVar11 + -0x70) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c09bfbc,
                                *(undefined4 *)(*(int *)((int)puVar11 + -0x70) + DAT_8c09bfb8));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + -0x70) + DAT_8c09bfb8);
      dVar15 = (double)CONCAT44(DAT_8c09bfc0,DAT_8c09bfbc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar15 + dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar11 + -0x70) + DAT_8c09bfb8) = fVar12;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar11 + -0x70) + DAT_8c09bfb8) = in_xd0;
    }
    fVar12 = DAT_8c09bfc0;
    fVar16 = fRam8c09bfc4;
    if (in_FPSCR_SZ == '\0') {
      fVar12 = *(float *)(ar4 + DAT_8c09bfb8);
      fVar16 = DAT_8c09bfc0;
    }
    if (in_FPSCR_PR == '\0' && fVar16 < fVar12) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c09bfb8) = DAT_8c09bfc0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c09bfb8) = CONCAT44(fRam8c09bfc4,DAT_8c09bfc0);
      }
    }
  }
  else {
    *(int *)((int)puVar11 + -0x74) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)(*(int *)((int)puVar11 + -0x74) + 0x34);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + -0x74) + 0x34);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c09c134),uVar4);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c09c134);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar15 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar11 + -0x74) + 0x34) = fVar12;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar11 + -0x74) + 0x34) = in_xd0;
    }
    *(int *)((int)puVar11 + -0x78) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c09c138,
                                *(undefined4 *)(*(int *)((int)puVar11 + -0x78) + DAT_8c09c134));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + -0x78) + DAT_8c09c134);
      dVar15 = (double)CONCAT44(DAT_8c09c13c,DAT_8c09c138);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar15 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar11 + -0x78) + DAT_8c09c134) = fVar12;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar11 + -0x78) + DAT_8c09c134) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar12 = *(float *)(ar4 + DAT_8c09c134);
      fVar16 = DAT_8c09c13c;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c09c134);
      fVar12 = DAT_8c09c13c;
      fVar16 = DAT_8c09c140;
    }
    if (in_FPSCR_PR == '\0' && fVar12 < fVar16) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c09c134) = DAT_8c09c13c;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c09c134) = CONCAT44(DAT_8c09c140,DAT_8c09c13c);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c09c144,*(undefined4 *)(ar4 + (int)DAT_8c09c140));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + (int)DAT_8c09c140);
      dVar15 = (double)CONCAT44(DAT_8c09c148,DAT_8c09c144);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar15 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c09c148,fVar12);
    }
    else {
      dVar15 = (double)CONCAT44(PTR_FUN_8c09c14c,DAT_8c09c148);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (float)((ulonglong)dVar15 >> 0x20);
      fVar12 = SUB84(dVar15,0) / fVar16;
      dVar15 = (double)CONCAT44(fVar16,fVar12);
      iVar9 = (int)fVar12;
    }
    else {
      dVar15 = dVar15 / dVar15;
      iVar9 = (int)dVar15;
    }
    (*(code *)PTR_FUN_8c09c14c)(iVar9,pfVar6,ar6,pdVar8);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + DAT_8c09c150 + -0xdc) = (int)((ulonglong)dVar15 >> 0x20);
    }
    else {
      *(double *)((int)puVar11 + DAT_8c09c150 + -0xdc) = dVar15;
    }
    *(int *)((int)puVar11 + -0x7c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + DAT_8c09c150 + -0xdc),
                                *(undefined4 *)(ar4 + DAT_8c09c154));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c09c154);
      dVar15 = *(double *)((int)puVar11 + DAT_8c09c150 + -0xdc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar15 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar11 + -0x7c) + 0x34),fVar12);
    }
    else {
      dVar15 = *(double *)(*(int *)((int)puVar11 + -0x7c) + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      dVar15 = (double)CONCAT44(fVar12,SUB84(dVar15,0) + fVar12);
    }
    else {
      dVar15 = dVar15 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar11 + -0x7c) + 0x34) = SUB84(dVar15,0);
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar11 + -0x7c) + 0x34) = in_xd0;
    }
    pfVar6 = (float *)(ar4 + 0x30);
    (**(code **)(DAT_8c09c158 + *(int *)ar7))(ar7,pfVar6,ar6,pdVar8);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + DAT_8c09c15c + -0xdc) = (int)((ulonglong)dVar15 >> 0x20);
      dVar18 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar17);
      dVar15 = (double)CONCAT44(DAT_8c09c160,*(undefined4 *)((int)puVar11 + DAT_8c09c15c + -0xdc));
    }
    else {
      *(double *)((int)puVar11 + DAT_8c09c15c + -0xdc) = dVar15;
      dVar18 = *(double *)(ar4 + 0x34);
      dVar15 = (double)CONCAT44(DAT_8c09c164,DAT_8c09c160);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (float)((ulonglong)dVar15 >> 0x20);
      fVar12 = SUB84(dVar15,0) + fVar16;
      dVar15 = (double)CONCAT44(fVar16,fVar12);
      bVar19 = fVar12 < (float)((ulonglong)dVar18 >> 0x20);
    }
    else {
      dVar15 = dVar15 + dVar15;
      bVar19 = dVar15 < dVar18;
    }
    if (!bVar19) {
      uVar14 = (ulonglong)dVar15 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c09c134) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c09c134) = uVar14;
      }
      uVar4 = (*(code *)PTR_FUN_8c09c168)(ar4 + DAT_8c09c164,pfVar6,ar6,pdVar8);
      *(undefined4 *)((int)puVar11 + DAT_8c09c16c + -0xdc) = uVar4;
      if (*(int *)((int)puVar11 + DAT_8c09c16c + -0xdc) == -1) {
        if (in_FPSCR_SZ == '\0') {
          uVar13 = CONCAT44((undefined4)DAT_8c09c170,(int)uVar14);
          *(undefined4 *)(ar4 + DAT_8c09c154) = (undefined4)DAT_8c09c170;
        }
        else {
          uVar13 = CONCAT44(DAT_8c09c170._4_4_,(undefined4)DAT_8c09c170);
          *(undefined8 *)(ar4 + DAT_8c09c154) = uVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar14 = CONCAT44(DAT_8c09c178,(int)uVar13);
          *(undefined4 *)(ar4 + DAT_8c09c170._4_4_) = DAT_8c09c178;
        }
        else {
          uVar14 = CONCAT44(DAT_8c09c17c,DAT_8c09c178);
          *(ulonglong *)(ar4 + DAT_8c09c170._4_4_) = uVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + (int)DAT_8c09c140) = 0;
        }
        else {
          *(ulonglong *)(ar4 + (int)DAT_8c09c140) = uVar14 & 0xffffffff;
        }
        *(undefined1 *)(DAT_8c09c17c + ar4) = 1;
      }
    }
  }
  *(int *)((int)puVar11 + -0x80) = ar4;
  *(int *)(DAT_8c09c180 + *(int *)((int)puVar11 + -0x80)) =
       *(int *)(DAT_8c09c180 + *(int *)((int)puVar11 + -0x80)) + -5;
  if (*(int *)(DAT_8c09c180 + ar4) < 0) {
    *(undefined4 *)(DAT_8c09c180 + ar4) = 0;
  }
  for (pfVar2 = (float *)0x0; (int)pfVar2 < 8; pfVar2 = (float *)((int)pfVar2 + 1)) {
    pfVar6 = pfVar2;
    (*(code *)PTR_FUN_8c09c228)(ar4,pfVar2,ar6,pdVar8);
    *(float **)((int)puVar11 + -0x84) = pfVar2;
    *(float **)((int)puVar11 + -0x88) = pfVar2;
    *(float **)((int)puVar11 + -0x8c) = pfVar2;
    *(float **)((int)puVar11 + -0x90) = pfVar2;
    (*(code *)PTR_FUN_8c09c23c)
              (*(undefined4 *)(DAT_8c09c238 + ar4 + *(int *)((int)puVar11 + -0x84) * 4),pfVar6,ar6,
               pdVar8);
  }
LAB_8c09c65a:
  (**(code **)(DAT_8c09c698 + *(int *)(ar4 + 8)))(ar4,pfVar6,ar6,pdVar8);
  (*(code *)PTR_FUN_8c09c6a0)(ar4 + DAT_8c09c69c,pfVar6,ar6,pdVar8);
  return 1;
}



/* Class_12a990_m6_09c6a4 @ 8c09c6a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a990_m6_09c6a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 a5;
  int iVar1;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c09c720)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09c724 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(DAT_8c09c724 + ar4 + iVar1 * 4);
      a5 = ar5;
      (**(code **)(*(int *)(a4 + 8) + 0x20))(a4,ar5,ar6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c09c72c)(ar4 + DAT_8c09c728,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c730)(ar4 + DAT_8c09c728,a5,ar6,ar7);
  iVar1 = DAT_8c09c734;
  *(undefined1 *)(DAT_8c09c734 + ar4) = 0xff;
  return iVar1;
}



/* Class_12a990_m5_09c738 @ 8c09c738 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m5_09c738(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iVar1 = -DAT_8c09c770;
  *(undefined4 *)((int)&iStack_4 + iVar1) = ar4;
  (*(code *)PTR_FUN_8c09c774)((int)&stack0x00000000 + iVar1,ar5,ar6,ar7);
  (**(code **)(*(int *)(*(int *)((int)&iStack_4 + iVar1) + 8) + 0x20))
            (*(int *)((int)&iStack_4 + iVar1),(int)&stack0x00000000 + iVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c09c778)((int)&stack0x00000000 + iVar1,0xffffffff,ar6,ar7);
  return uVar2;
}



/* Class_12a990_m4_09c77c @ 8c09c77c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m4_09c77c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09c798)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c79c @ 8c09c79c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c79c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09c7b4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_09c7b8 @ 8c09c7b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09c7b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_09c7bc @ 8c09c7bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09c7bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c09c7c0 @ 8c09c7c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c7c0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c808)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c810)(ar4 + DAT_8c09c80c,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c81c)(ar4 + DAT_8c09c818,ar5 + DAT_8c09c814,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c820 @ 8c09c820 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c820(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c864)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c86c)(ar4 + DAT_8c09c868,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c874)(ar4 + DAT_8c09c870,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c878 @ 8c09c878 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c878(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c8c0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c8c8)(ar4 + DAT_8c09c8c4,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c8d4)(ar4 + DAT_8c09c8d0,ar5 + DAT_8c09c8cc,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c8d8 @ 8c09c8d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c8d8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c91c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c924)(ar4 + DAT_8c09c920,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c92c)(ar4 + DAT_8c09c928,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c930 @ 8c09c930 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c930(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int a4_00;
  int iVar1;
  float fVar2;
  double dVar3;
  int a7;
  int a6;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c09ca50)(*(int *)(DAT_8c09ca4c + ar4) + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ca54)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ca58)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09ca5c,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c09ca60,DAT_8c09ca5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09ca60,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c09ca64,DAT_8c09ca60);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09ca5c,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c09ca60,DAT_8c09ca5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09ca60,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c09ca64,DAT_8c09ca60);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09ca5c,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c09ca60,DAT_8c09ca5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c09ca60,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c09ca64,DAT_8c09ca60);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c09ca64)(0,a5,a6,a7);
  (*(code *)PTR_FUN_8c09ca68)(0,a5,a6,a7);
  a4 = (*(code *)PTR_FUN_8c09ca6c)(*(int *)(DAT_8c09ca4c + ar4) + 0x70,a5,a6,a7);
  (*(code *)PTR_FUN_8c09ca70)(a4,a5,a6,a7);
  (*(code *)PTR_FUN_8c09ca74)(1,a5,a6,a7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09ca78 + ar4 + iVar1 * 4) != 0) {
      (*(code *)PTR_FUN_8c09ca7c)(*(undefined4 *)(DAT_8c09ca78 + ar4 + iVar1 * 4),a5,a6,a7);
      a4_00 = *(int *)(DAT_8c09ca78 + ar4 + iVar1 * 4);
      (**(code **)(*(int *)(a4_00 + 8) + 0x34))(a4_00,a5,a6,a7);
    }
  }
  return 8;
}



/* FUN_8c09ca80 @ 8c09ca80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ca80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  int iVar2;
  
  (*(code *)PTR_FUN_8c09cb1c)(*(int *)(DAT_8c09cb18 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c09cb20)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09cb2c)(uVar1,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09cb30)(*(int *)(DAT_8c09cb18 + ar4) + 0x70,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09cb34)(uVar1,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    if (*(int *)(DAT_8c09cb38 + ar4 + iVar2 * 4) != 0) {
      a4 = *(int *)(DAT_8c09cb38 + ar4 + iVar2 * 4);
      (**(code **)(*(int *)(a4 + 8) + 0x3c))(a4,ar5,ar6,ar7);
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c09cb3c)(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09cb40 @ 8c09cb40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cb40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09cb58 @ 8c09cb58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cb58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  
  (*(code *)PTR_noop_038c8c_8c09cbb0)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09cbb4 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(DAT_8c09cbb4 + ar4 + iVar1 * 4);
      (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,ar5,ar6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09cbb8 @ 8c09cbb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cbb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  int a5;
  
  for (a5 = 0; a5 < 8; a5 = a5 + 1) {
    a6 = (*(code *)PTR_s_Shell_0fef9c_8c09cc24)(ar5,1,1,ar7);
    if (a6 != 0) {
      (**(code **)(DAT_8c09cc28 + *(int *)(ar4 + 8)))(ar4,a5,a6,ar7);
      (*(code *)PTR_FUN_8c09cc30)(ar4,a5,a6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09cc34 @ 8c09cc34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09cc34(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c09cc48;
  *(undefined4 *)(DAT_8c09cc48 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}



/* FUN_8c09cc4c @ 8c09cc4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cc4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09cca0 + ar4 + iVar1 * 4) != 0) {
      (*(code *)PTR_FUN_8c09cca4)(ar5,ar4 + iVar1 * 4 + DAT_8c09cca0,ar6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09cca8 @ 8c09cca8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09cd6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c09cca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  float *pfVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined4 a4;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar6;
  undefined4 in_fr1;
  float fVar7;
  double dVar8;
  undefined4 in_fr3;
  undefined4 uVar10;
  double dVar11;
  undefined4 in_fr5;
  undefined4 in_fr4;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  float fVar9;
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar6 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar6 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar6 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar6 + -0xc) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
  }
  uVar1 = (*(code *)PTR_rand_8c09cdcc)(ar4,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar6 + -0x10) = uVar1;
  *(undefined4 *)((int)puVar6 + -0x1c) = ar5;
  if (in_FPSCR_PR == '\0') {
    iVar12 = (int)SUB84(in_dr14,0);
  }
  else {
    iVar12 = (int)in_dr14;
  }
  uVar5 = *(undefined4 *)((int)puVar6 + -0x10);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09cdd0)(uVar5,iVar12,ar6,ar7);
  *(undefined4 *)((int)puVar6 + -0x20) = uVar1;
  pdVar2 = (double *)(ar4 + *(int *)((int)puVar6 + -0x1c) * 0x10 + DAT_8c09cdd4);
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)*(int *)((int)puVar6 + -0x20),in_fr3);
  }
  else {
    dVar11 = (double)*(int *)((int)puVar6 + -0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09cdd8,in_fr1);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c09cddc,DAT_8c09cdd8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09cdd8,SUB84(in_dr14,0));
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c09cddc,DAT_8c09cdd8);
    in_xd0 = in_xd14;
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 / dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09cddc,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(_DAT_8c09cde0,DAT_8c09cddc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    fVar7 = SUB84(dVar8,0) / fVar9;
    dVar8 = (double)CONCAT44(fVar9,fVar7);
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar7,SUB84(dVar11,0));
  }
  else {
    dVar8 = dVar8 / dVar8;
    dVar11 = dVar11 - dVar8;
  }
  uVar1 = SUB84(dVar8,0);
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar11 >> 0x20);
  }
  else {
    *pdVar2 = dVar11;
  }
  uVar5 = (*(code *)PTR_rand_8c09cdcc)(uVar5,iVar12,ar6,ar7);
  uVar10 = SUB84(dVar11,0);
  *(undefined4 *)((int)puVar6 + -0x14) = uVar5;
  *(undefined4 *)((int)puVar6 + -0x24) = ar5;
  if (in_FPSCR_PR == '\0') {
    iVar12 = (int)SUB84(in_dr14,0);
  }
  else {
    iVar12 = (int)in_dr14;
  }
  a4 = *(undefined4 *)((int)puVar6 + -0x14);
  uVar5 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09cdd0)(a4,iVar12,ar6,ar7);
  *(undefined4 *)((int)puVar6 + -0x28) = uVar5;
  pdVar2 = (double *)(ar4 + *(int *)((int)puVar6 + -0x24) * 0x10 + _DAT_8c09cde0);
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)*(int *)((int)puVar6 + -0x28),uVar10);
  }
  else {
    dVar11 = (double)*(int *)((int)puVar6 + -0x28);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09cdd8,uVar1);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c09cddc,DAT_8c09cdd8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09cdd8,SUB84(in_dr14,0));
    in_xd14 = in_xd0;
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c09cddc,DAT_8c09cdd8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 / dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09cddc,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(_DAT_8c09cde0,DAT_8c09cddc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) -
                              SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - dVar8 / dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar11 >> 0x20);
  }
  else {
    *pdVar2 = dVar11;
  }
  uVar1 = (*(code *)PTR_rand_8c09cdcc)(a4,iVar12,ar6,ar7);
  *(undefined4 *)((int)puVar6 + -0x18) = uVar1;
  *(undefined4 *)((int)puVar6 + -0x2c) = ar5;
  if (in_FPSCR_PR == '\0') {
    iVar12 = (int)SUB84(in_dr14,0);
  }
  else {
    iVar12 = (int)in_dr14;
  }
  uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09cdd0)
                    (*(undefined4 *)((int)puVar6 + -0x18),iVar12,ar6,ar7);
  *(undefined4 *)((int)puVar6 + -0x30) = uVar1;
  pfVar3 = (float *)(ar4 + *(int *)((int)puVar6 + -0x2c) * 0x10 + DAT_8c09cde4);
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(DAT_8c09cdd8,(float)*(int *)((int)puVar6 + -0x30));
  }
  else {
    dVar11 = (double)CONCAT44(DAT_8c09cddc,DAT_8c09cdd8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar11 / dVar11,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(DAT_8c09cdd8,fVar7);
  }
  else {
    dVar11 = (double)CONCAT44(DAT_8c09cddc,DAT_8c09cdd8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                             SUB84(in_dr14,0) / (float)((ulonglong)dVar11 >> 0x20));
  }
  else {
    dVar8 = in_dr14 / dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(DAT_8c09cddc,SUB84(dVar11,0));
  }
  else {
    dVar11 = (double)CONCAT44(_DAT_8c09cde0,DAT_8c09cddc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar11,0) - SUB84(dVar8,0) / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar11 - dVar8 / dVar11,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar3 = fVar7;
  }
  else {
    *(undefined8 *)pfVar3 = in_xd14;
  }
  *(undefined4 *)((int)puVar6 + -0x34) = ar5;
  puVar4 = (ulonglong *)(ar4 + *(int *)((int)puVar6 + -0x34) * 0x10 + DAT_8c09cde8);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar4 = 0;
  }
  else {
    *puVar4 = (ulonglong)(uint)fVar7;
  }
  *(undefined4 *)((int)puVar6 + -0x38) = ar5;
  puVar4 = (ulonglong *)(ar4 + *(int *)((int)puVar6 + -0x38) * 0x10 + DAT_8c09cdec);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar4 = 0;
  }
  else {
    *puVar4 = (ulonglong)(uint)fVar7;
  }
  *(undefined4 *)((int)puVar6 + -0x3c) = ar5;
  iVar12 = DAT_8c09cdf0;
  puVar4 = (ulonglong *)(ar4 + *(int *)((int)puVar6 + -0x3c) * 0x10 + DAT_8c09cdf0);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar4 = 0;
  }
  else {
    *puVar4 = (ulonglong)(uint)fVar7;
  }
  return iVar12;
}



/* FUN_8c09cdf4 @ 8c09cdf4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c09cdf4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  double *pdVar6;
  float *pfVar7;
  undefined4 in_fr1;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined4 in_fr3;
  double in_dr4;
  undefined8 in_xd0;
  bool bVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_b8 [30];
  int iStack_40;
  int iStack_3c;
  
  *(int *)((int)aiStack_b8 + DAT_8c09d140) = ar5;
  *(int *)((int)aiStack_b8 + DAT_8c09d144) = ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d140) * 0x10;
  *(int *)((int)aiStack_b8 + DAT_8c09d148) = ar5;
  *(int *)((int)aiStack_b8 + DAT_8c09d14c) = ar5;
  pfVar1 = (float *)(*(int *)((int)aiStack_b8 + DAT_8c09d144) + DAT_8c09d150);
  puVar5 = (undefined8 *)(ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d148) * 0x10 + DAT_8c09d154);
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(undefined4 *)puVar5;
  }
  else {
    in_xd0 = *puVar5;
  }
  pdVar6 = (double *)(ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d14c) * 0x10 + DAT_8c09d150);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,in_fr1);
  }
  else {
    dVar10 = *pdVar6;
  }
  fVar9 = (float)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar8 = (SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20)) / fVar9;
  }
  else {
    fVar8 = SUB84((dVar10 - dVar10) / in_dr4,0);
  }
  pdVar6 = (double *)(*(int *)((int)aiStack_b8 + DAT_8c09d144) + DAT_8c09d150);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar10 + dVar10,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar1 = fVar8;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd0;
  }
  *(int *)((int)aiStack_b8 + DAT_8c09d158) = ar5;
  *(int *)((int)aiStack_b8 + DAT_8c09d15c) = ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d158) * 0x10;
  *(int *)((int)aiStack_b8 + DAT_8c09d160) = ar5;
  *(int *)((int)aiStack_b8 + DAT_8c09d164) = ar5;
  pfVar1 = (float *)(*(int *)((int)aiStack_b8 + DAT_8c09d15c) + DAT_8c09d168);
  pfVar7 = (float *)(ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d160) * 0x10 + DAT_8c09d16c);
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *pfVar7;
  }
  else {
    in_xd0 = *(undefined8 *)pfVar7;
  }
  pdVar6 = (double *)(ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d164) * 0x10 + DAT_8c09d168);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20)) / fVar9;
  }
  else {
    fVar8 = SUB84((dVar10 - dVar10) / in_dr4,0);
  }
  pdVar6 = (double *)(*(int *)((int)aiStack_b8 + DAT_8c09d15c) + DAT_8c09d168);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar10 + dVar10,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar1 = fVar8;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd0;
  }
  *(int *)((int)aiStack_b8 + DAT_8c09d170) = ar5;
  *(int *)((int)aiStack_b8 + DAT_8c09d174) = ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d170) * 0x10;
  *(int *)((int)aiStack_b8 + DAT_8c09d178) = ar5;
  *(int *)((int)aiStack_b8 + DAT_8c09d17c) = ar5;
  pfVar1 = (float *)(*(int *)((int)aiStack_b8 + DAT_8c09d174) + DAT_8c09d180);
  pfVar7 = (float *)(ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d178) * 0x10 + DAT_8c09d184);
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *pfVar7;
  }
  else {
    in_xd0 = *(undefined8 *)pfVar7;
  }
  pdVar6 = (double *)(ar4 + *(int *)((int)aiStack_b8 + DAT_8c09d17c) * 0x10 + DAT_8c09d180);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20)) / fVar9;
  }
  else {
    fVar8 = SUB84((dVar10 - dVar10) / in_dr4,0);
  }
  pdVar6 = (double *)(*(int *)((int)aiStack_b8 + DAT_8c09d174) + DAT_8c09d180);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar10 + dVar10,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar1 = fVar8;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd0;
  }
  iStack_3c = ar5;
  *(int *)((int)aiStack_b8 + DAT_8c09d188) = ar4 + ar5 * 0x10;
  iStack_40 = ar5;
  pfVar7 = (float *)(*(int *)((int)aiStack_b8 + DAT_8c09d188) + DAT_8c09d18c);
  pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d150);
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *pfVar1;
  }
  else {
    in_xd0 = *(undefined8 *)pfVar1;
  }
  pdVar6 = (double *)(*(int *)((int)aiStack_b8 + DAT_8c09d188) + DAT_8c09d18c);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar10 + dVar10,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar7 = fVar8;
  }
  else {
    *(undefined8 *)pfVar7 = in_xd0;
  }
  iVar2 = ar4 + ar5 * 0x10;
  pfVar7 = (float *)(iVar2 + DAT_8c09d190);
  pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d168);
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *pfVar1;
  }
  else {
    in_xd0 = *(undefined8 *)pfVar1;
  }
  pdVar6 = (double *)(iVar2 + DAT_8c09d190);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar10 + dVar10,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar7 = fVar8;
  }
  else {
    *(undefined8 *)pfVar7 = in_xd0;
  }
  iVar2 = ar4 + ar5 * 0x10;
  pfVar7 = (float *)(iVar2 + DAT_8c09d194);
  pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d180);
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *pfVar1;
  }
  else {
    in_xd0 = *(undefined8 *)pfVar1;
  }
  pdVar6 = (double *)(iVar2 + DAT_8c09d194);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar8);
  }
  else {
    dVar10 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar10 + dVar10,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar7 = fVar8;
  }
  else {
    *(undefined8 *)pfVar7 = in_xd0;
  }
  pdVar6 = (double *)(ar4 + ar5 * 0x10 + DAT_8c09d18c);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,in_fr3);
    dVar11 = (double)CONCAT44(fVar9,DAT_8c09d198);
  }
  else {
    dVar10 = *pdVar6;
    in_xd0 = CONCAT44(_DAT_8c09d19c,DAT_8c09d198);
    dVar11 = in_dr4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar11 >> 0x20) / SUB84(dVar11,0);
    dVar11 = (double)CONCAT44(fVar8,SUB84(dVar11,0));
    bVar12 = fVar8 < (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    dVar11 = dVar11 / dVar11;
    bVar12 = dVar11 < dVar10;
  }
  fVar8 = SUB84(dVar11,0);
  if (bVar12) {
    pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d154);
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar8) {
      iVar2 = ar4 + ar5 * 0x10;
      pfVar1 = (float *)(iVar2 + DAT_8c09d154);
      puVar5 = (undefined8 *)(iVar2 + DAT_8c09d154);
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(_DAT_8c09d19c,*(undefined4 *)puVar5);
      }
      else {
        in_xd0 = *puVar5;
        dVar11 = (double)CONCAT44(_DAT_8c09d1a0,_DAT_8c09d19c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar11 * dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar1 = fVar8;
      }
      else {
        *(undefined8 *)pfVar1 = in_xd0;
      }
    }
  }
  pdVar6 = (double *)(ar4 + ar5 * 0x10 + DAT_8c09d190);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar10,0));
    dVar11 = (double)CONCAT44(fVar9,DAT_8c09d198);
  }
  else {
    dVar10 = *pdVar6;
    in_xd0 = CONCAT44(_DAT_8c09d19c,DAT_8c09d198);
    dVar11 = in_dr4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar11 >> 0x20) / SUB84(dVar11,0);
    dVar11 = (double)CONCAT44(fVar8,SUB84(dVar11,0));
    bVar12 = fVar8 < (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    dVar11 = dVar11 / dVar11;
    bVar12 = dVar11 < dVar10;
  }
  fVar8 = SUB84(dVar11,0);
  if (bVar12) {
    pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d16c);
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar8) {
      iVar2 = ar4 + ar5 * 0x10;
      pfVar1 = (float *)(iVar2 + DAT_8c09d16c);
      puVar5 = (undefined8 *)(iVar2 + DAT_8c09d16c);
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(_DAT_8c09d19c,*(undefined4 *)puVar5);
      }
      else {
        in_xd0 = *puVar5;
        dVar11 = (double)CONCAT44(_DAT_8c09d1a0,_DAT_8c09d19c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar11 * dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar1 = fVar8;
      }
      else {
        *(undefined8 *)pfVar1 = in_xd0;
      }
    }
  }
  pdVar6 = (double *)(ar4 + ar5 * 0x10 + DAT_8c09d194);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar10,0));
    dVar11 = (double)CONCAT44(fVar9,DAT_8c09d198);
  }
  else {
    dVar10 = *pdVar6;
    in_xd0 = CONCAT44(_DAT_8c09d19c,DAT_8c09d198);
    dVar11 = in_dr4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar11 >> 0x20) / SUB84(dVar11,0);
    dVar11 = (double)CONCAT44(fVar8,SUB84(dVar11,0));
    bVar12 = fVar8 < (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    dVar11 = dVar11 / dVar11;
    bVar12 = dVar11 < dVar10;
  }
  fVar8 = SUB84(dVar11,0);
  if (bVar12) {
    pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d184);
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar8) {
      iVar2 = ar4 + ar5 * 0x10;
      pfVar1 = (float *)(iVar2 + DAT_8c09d184);
      puVar5 = (undefined8 *)(iVar2 + DAT_8c09d184);
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(_DAT_8c09d19c,*(undefined4 *)puVar5);
      }
      else {
        in_xd0 = *puVar5;
        dVar11 = (double)CONCAT44(_DAT_8c09d1a0,_DAT_8c09d19c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar11 * dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar1 = fVar8;
      }
      else {
        *(undefined8 *)pfVar1 = in_xd0;
      }
    }
  }
  pdVar6 = (double *)(ar4 + ar5 * 0x10 + DAT_8c09d18c);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar10,0));
    dVar11 = (double)CONCAT44(fVar9,_DAT_8c09d1a0);
  }
  else {
    dVar10 = *pdVar6;
    in_xd0 = CONCAT44(uRam8c09d1a4,_DAT_8c09d1a0);
    dVar11 = in_dr4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar11 >> 0x20) / SUB84(dVar11,0);
    dVar11 = (double)CONCAT44(fVar8,SUB84(dVar11,0));
    bVar12 = (float)((ulonglong)dVar10 >> 0x20) < fVar8;
  }
  else {
    dVar11 = dVar11 / dVar11;
    bVar12 = dVar10 < dVar11;
  }
  fVar8 = SUB84(dVar11,0);
  if (bVar12) {
    pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d298);
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
    }
    if (in_FPSCR_PR == '\0' && fVar8 < 0.0) {
      iVar2 = ar4 + ar5 * 0x10;
      pfVar1 = (float *)(iVar2 + DAT_8c09d298);
      puVar5 = (undefined8 *)(iVar2 + DAT_8c09d298);
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(DAT_8c09d29c,*(undefined4 *)puVar5);
      }
      else {
        in_xd0 = *puVar5;
        dVar11 = (double)CONCAT44(DAT_8c09d2a0,DAT_8c09d29c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar11 * dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar1 = fVar8;
      }
      else {
        *(undefined8 *)pfVar1 = in_xd0;
      }
    }
  }
  pdVar6 = (double *)(ar4 + ar5 * 0x10 + DAT_8c09d2a0);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar10,0));
    dVar11 = (double)CONCAT44(fVar9,DAT_8c09d2a4);
  }
  else {
    dVar10 = *pdVar6;
    in_xd0 = CONCAT44(DAT_8c09d2a8,DAT_8c09d2a4);
    dVar11 = in_dr4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar11 >> 0x20) / SUB84(dVar11,0);
    dVar11 = (double)CONCAT44(fVar8,SUB84(dVar11,0));
    bVar12 = (float)((ulonglong)dVar10 >> 0x20) < fVar8;
  }
  else {
    dVar11 = dVar11 / dVar11;
    bVar12 = dVar10 < dVar11;
  }
  fVar8 = SUB84(dVar11,0);
  if (bVar12) {
    pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d2a8);
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
    }
    if (in_FPSCR_PR == '\0' && fVar8 < 0.0) {
      iVar2 = ar4 + ar5 * 0x10;
      pfVar1 = (float *)(iVar2 + DAT_8c09d2a8);
      puVar5 = (undefined8 *)(iVar2 + DAT_8c09d2a8);
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c09d29c,*(undefined4 *)puVar5);
      }
      else {
        in_xd0 = *puVar5;
        dVar10 = (double)CONCAT44(DAT_8c09d2a0,DAT_8c09d29c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar10 * dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar1 = fVar8;
      }
      else {
        *(undefined8 *)pfVar1 = in_xd0;
      }
    }
  }
  pfVar1 = (float *)(ar4 + ar5 * 0x10 + DAT_8c09d2ac);
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *pfVar1;
  }
  else {
    in_xd0 = *(undefined8 *)pfVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c09d2a4,fVar8);
  }
  else {
    dVar10 = (double)CONCAT44(DAT_8c09d2a8,DAT_8c09d2a4);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = SUB84(dVar10,0) < fVar9 / (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    bVar12 = dVar10 < in_dr4 / dVar10;
  }
  puVar3 = &DAT_8c09d2a4;
  if (bVar12) {
    puVar4 = (uint *)(ar4 + ar5 * 0x10 + (int)DAT_8c09d2b0);
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)(ulonglong)*puVar4;
    }
    else {
      in_xd0 = *(undefined8 *)puVar4;
    }
    fVar9 = SUB84(dVar10,0);
    puVar3 = DAT_8c09d2b0;
    if (in_FPSCR_PR == '\0' && fVar9 < 0.0) {
      iVar2 = ar4 + ar5 * 0x10;
      pfVar7 = (float *)(iVar2 + (int)DAT_8c09d2b0);
      pfVar1 = (float *)(iVar2 + (int)DAT_8c09d2b0);
      if (in_FPSCR_SZ == '\0') {
        fVar9 = *pfVar1;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar1;
      }
      puVar3 = &DAT_8c09d29c;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c09d29c,fVar9);
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c09d2a0,DAT_8c09d29c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 * dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar9;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd0;
      }
    }
  }
  return puVar3;
}



/* FUN_8c09d2b4 @ 8c09d2b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09d2b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  undefined8 uVar2;
  ulonglong uVar3;
  char in_FPSCR_SZ;
  
  iVar1 = 1;
  if ((*(char *)(DAT_8c09d2f4 + ar4) != '\x01') &&
     (iVar1 = (int)*(char *)(DAT_8c09d2f8 + ar4), iVar1 == 1)) {
    *(undefined1 *)(DAT_8c09d2f4 + ar4) = 1;
    if (in_FPSCR_SZ == '\0') {
      uVar2 = CONCAT44((undefined4)DAT_8c09d300,in_fr1);
      *(undefined4 *)(ar4 + DAT_8c09d2fc) = (undefined4)DAT_8c09d300;
    }
    else {
      uVar2 = CONCAT44(DAT_8c09d300._4_4_,(undefined4)DAT_8c09d300);
      *(undefined8 *)(ar4 + DAT_8c09d2fc) = uVar2;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c09d308,(int)uVar2);
      *(undefined4 *)(ar4 + DAT_8c09d300._4_4_) = DAT_8c09d308;
    }
    else {
      uVar3 = CONCAT44(DAT_8c09d30c,DAT_8c09d308);
      *(ulonglong *)(ar4 + DAT_8c09d300._4_4_) = uVar3;
    }
    iVar1 = DAT_8c09d30c;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c09d30c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c09d30c) = uVar3 & 0xffffffff;
    }
  }
  return iVar1;
}



/* FUN_8c09d310 @ 8c09d310 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d310(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c09d378)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09d37c + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(DAT_8c09d37c + ar4 + iVar1 * 4);
      (**(code **)(DAT_8c09d380 + *(int *)(a4 + 8)))(a4,ar5,0,ar7);
    }
  }
  return 8;
}



/* FUN_8c09d384 @ 8c09d384 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d384(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  
  (*(code *)PTR_FUN_8c09d3ec)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09d3f0 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(DAT_8c09d3f0 + ar4 + iVar1 * 4);
      (**(code **)(DAT_8c09d3f4 + *(int *)(a4 + 8)))(a4,ar5,0,ar7);
    }
  }
  return 8;
}



/* Class_12a990_m8_09d3f8 @ 8c09d3f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m8_09d3f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_CAnimal_m8_0f511c_8c09d45c)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09d460 + ar4 + iVar1 * 4) != 0) {
      ar5 = (*(code *)PTR_get_field_74_09d474_8c09d464)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c09d468)(*(undefined4 *)(DAT_8c09d460 + ar4 + iVar1 * 4),ar5,ar6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09d46c @ 8c09d46c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d46c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x74) = ar5;
  return 0x74;
}



/* get_field_74_09d474 @ 8c09d474 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_74_09d474(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x74);
}



/* s_MrEgg_Home_nj_09d47c @ 8c09d47c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_MrEgg_Home_nj_09d47c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_dr0;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + 4) = 0;
    *(undefined4 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + 8) = 0;
    *(undefined4 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + 0xc) = *(undefined4 *)PTR_PTR_8c09d604;
    *(undefined4 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + 0x10) = 0;
    *(undefined4 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + 0x14) = *(undefined4 *)PTR_PTR_8c09d608;
    *(undefined4 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + 0x18) = 0;
    *(undefined4 *)(DAT_8c09d60c + iVar2 * DAT_8c09d5fc + DAT_8c09d600) = DAT_8c09d610;
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + DAT_8c09d614);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,(int)in_dr0);
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + DAT_8c09d618);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c09d61c,(int)in_dr0);
      *(undefined4 *)puVar1 = DAT_8c09d61c;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c09d620,DAT_8c09d61c);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + _DAT_8c09d620);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c09d624,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c09d624;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c09d628,DAT_8c09d624);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + _DAT_8c09d628);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c09d62c,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c09d62c;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c09d630,DAT_8c09d62c);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + _DAT_8c09d630);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c09d634,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c09d634;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c09d638,DAT_8c09d634);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c09d5fc + DAT_8c09d600 + _DAT_8c09d638);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c09d63c,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c09d63c;
    }
    else {
      in_dr0 = CONCAT44(_DAT_8c09d640,DAT_8c09d63c);
      *puVar1 = in_dr0;
    }
  }
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined2 *)(_DAT_8c09d640 + iVar2 * 0x10) = 0xffff;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c09d640 + 4) = 1;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c09d640 + 8) = 0;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c09d640 + 0xc) = 0;
  }
  return 1;
}



/* FUN_8c09d644 @ 8c09d644 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d644(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  (*(code *)PTR_FUN_8c09d6a8)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09d6ac)(ar4 + 4,ar5,ar6,ar7);
  ar4[7] = 10;
  ar4[8] = ar4[8] | DAT_8c09d6b0;
  (*(code *)PTR_FUN_8c09d6b4)(ar4 + 9,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar4 + iVar1 + 0x58) = 0;
  }
  return 0xf;
}



/* FUN_8c09d6b8 @ 8c09d6b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d6b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined2 *)(ar4 + 0x1c) = 0;
  *(undefined2 *)(ar4 + 0x1e) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  return 0;
}



/* Class_12a990_m3_09d6e8 @ 8c09d6e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m3_09d6e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_09d710 @ 8c09d710 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_09d710(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c09d718 @ 8c09d718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d718(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(PTR_DAT_8c09d90c,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d914;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d914,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(PTR_DAT_8c09d920,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d924;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d924,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(PTR_DAT_8c09d928,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d92c;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d92c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(PTR_DAT_8c09d930,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d934;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d934,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c09d938 = *(undefined4 *)DAT_8c09d93c;
  }
  else {
    *(undefined8 *)PTR_DAT_8c09d938 = *DAT_8c09d93c;
  }
  uVar1 = (*(code *)PTR_FUN_8c09d944)(DAT_8c09d940,puVar3,uVar2,ar7);
  puVar3 = PTR_FUN_8c09d94c;
  uVar2 = DAT_8c09d948;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_FUN_8c09d94c,DAT_8c09d948,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09d954)(DAT_8c09d950,puVar3,uVar2,ar7);
  puVar3 = PTR_free_if_nonnull_wrap_03a454_8c09d95c;
  uVar2 = DAT_8c09d958;
  (*(code *)PTR_global_list_push_8c09d91c)
            (uVar1,PTR_free_if_nonnull_wrap_03a454_8c09d95c,DAT_8c09d958,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d96c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d970;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d970,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d974._4_4_,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d97c;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d97c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d980,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d984;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d984,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d988,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d98c;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d98c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d990,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d994;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d994,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d998,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d99c;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d99c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d9a0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09d918;
  uVar2 = DAT_8c09d9a4;
  (*(code *)PTR_global_list_push_8c09d91c)(uVar1,PTR_Vec3_dtor_8c09d918,DAT_8c09d9a4,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c09d910)(DAT_8c09d9a8,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c09d91c)(uVar2,PTR_Vec3_dtor_8c09d918,DAT_8c09d9ac,ar7);
  uVar2 = DAT_8c09d980;
  uVar1 = (*(code *)PTR_FUN_8c09d9b4)(DAT_8c09d9b0,DAT_8c09d96c,DAT_8c09d974._4_4_,DAT_8c09d980);
  uVar2 = (*(code *)PTR_global_list_push_8c09d91c)
                    (uVar1,PTR_Class_129938_m0_017084_8c09d9bc,DAT_8c09d9b8,uVar2);
  return uVar2;
}



/* s_GRAPHICS_MUSHROOMERLINE_09d9c2 @ 8c09d9c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MUSHROOMERLINE_09d9c2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 1;
  a6 = 1;
  a5 = 1;
  (*(code *)PTR_FUN_8c09da74)(ar4,1,1,1);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c09da78;
  (*(code *)PTR_FUN_8c09da80)(ar4 + DAT_8c09da7c,a5,a6,a7);
  (*(code *)PTR_FUN_8c09da88)(ar4 + DAT_8c09da84,a5,a6,a7);
  (*(code *)PTR_FUN_8c09da90)(ar4 + DAT_8c09da8c,a5,a6,a7);
  (*(code *)PTR_FUN_8c09da9c)(ar4 + 0xc,a5,a6,a7);
  *(int *)(DAT_8c09daa0 + ar4) = ar4 + DAT_8c09da7c;
  *(int *)(DAT_8c09daa4 + ar4) = ar4 + DAT_8c09da84;
  (*(code *)PTR_FUN_8c09dab0)
            (ar4,*(undefined4 *)(DAT_8c09daac + *(int *)(DAT_8c09daa8 + ar4)),ar4 + DAT_8c09da8c,a7)
  ;
  *(undefined4 *)(DAT_8c09dab4 + ar4) = 0;
  return ar4;
}



/* Class_12ab2c_m0_09dab8 @ 8c09dab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12ab2c_m0_09dab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c09db24;
    (*(code *)PTR_FUN_8c09db28)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c09db30)(ar4 + DAT_8c09db2c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12ad14_m0_0a0950_8c09db38)(ar4 + DAT_8c09db34,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12acc8_m0_09f428_8c09db40)(ar4 + DAT_8c09db3c,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c09db44)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c09db48)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12ab2c_m2_09db4c @ 8c09db4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09dbc6) */
/* WARNING: Removing unreachable block (ram,0x8c09db9a) */
/* WARNING: Removing unreachable block (ram,0x8c09db8a) */
/* WARNING: Removing unreachable block (ram,0x8c09db8e) */
/* WARNING: Removing unreachable block (ram,0x8c09db9e) */
/* WARNING: Removing unreachable block (ram,0x8c09dc28) */
/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m2_09db4c(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  int *a7;
  float extraout_fr1;
  float fVar2;
  float extraout_fr1_00;
  char in_FPSCR_SZ;
  byte bStack_10;
  
  a7 = ar7;
  (*(code *)PTR_CAnimal_m2_02573c_8c09dc44)(ar4,ar5,ar6,ar7);
  (**(code **)(DAT_8c09dc48 + *ar7))(ar7,ar5,ar6,a7);
  if (((bStack_10 & 3) >> 1) - ((int)((uint)bStack_10 << 0x1f) >> 0x1f) == 2) {
    if (0 < *(int *)(DAT_8c09dc4c + ar4)) {
      fVar2 = extraout_fr1;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = *(float *)(PTR_DAT_8c09dc50 + (*(int *)(DAT_8c09dc4c + ar4) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        (*(code *)PTR_FUN_8c09dc54)(ar4,ar5,ar6,a7);
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_get_field_124_027930_8c09dc5c)(ar4 + DAT_8c09dc58,ar5,ar6,a7);
    if ((iVar1 == 2) ||
       (iVar1 = (*(code *)PTR_get_field_124_027930_8c09dc5c)(ar4 + DAT_8c09dc58,ar5,ar6,a7),
       iVar1 == 9)) {
      (*(code *)PTR_FUN_8c09dc60)(ar4,ar5,ar6,a7);
    }
    else if (0 < *(int *)(DAT_8c09dc4c + ar4)) {
      fVar2 = extraout_fr1_00;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = *(float *)(PTR_DAT_8c09dc50 + (*(int *)(DAT_8c09dc4c + ar4) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        (*(code *)PTR_FUN_8c09dc54)(ar4,ar5,ar6,a7);
      }
    }
  }
  return 1;
}



/* FUN_8c09dc64 @ 8c09dc64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09dc64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09dc88)(*(undefined4 *)(DAT_8c09dc84 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ab2c_m4_09dc8c @ 8c09dc8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m4_09dc8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(DAT_8c09dcf4 + ar4) + 0x14))
                    (*(int **)(DAT_8c09dcf4 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ab2c_m5_09dcf8 @ 8c09dcf8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m5_09dcf8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(DAT_8c09dd60 + ar4) + 0x14))
                    (*(int **)(DAT_8c09dd60 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ab2c_m6_09dd64 @ 8c09dd64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m6_09dd64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)PTR_FUN_8c09dddc)(ar4 + DAT_8c09ddd8,ar5,ar6,ar7);
  uVar1 = (**(code **)(**(int **)(DAT_8c09dde0 + ar4) + 0x14))
                    (*(int **)(DAT_8c09dde0 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09dde4 @ 8c09dde4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09dde4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_8c09de68 + ar4) != 0) {
    ar5 = 1;
    (*(code *)PTR_FUN_8c09de6c)(*(int *)(DAT_8c09de68 + ar4) + 1,1,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c09de74)(2,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09de74)(3,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09de74)(4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09de78)(2,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09de78)(3,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09de78)(4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09de7c @ 8c09de7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09de7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09dec0)(2,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec0)(3,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec0)(4,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec4)(2,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec4)(3,0,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09dec4)(4,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c09dec8 @ 8c09dec8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09dec8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  int iVar10;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_4c;
  undefined4 uStack_34;
  float fVar9;
  
  iVar1 = (**(code **)(DAT_8c09e18c + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c09e194)(ar4 + DAT_8c09e190,ar5,ar6,ar7);
  }
  iVar1 = (*(code *)PTR_get_field_24c_09e1f8_8c09e19c)(ar4 + DAT_8c09e198,ar5,ar6,ar7);
  *DAT_8c09e1a0 = iVar1;
  piVar2 = (int *)(*(code *)PTR_get_field_4_0253e4_8c09e1a8)
                            (*(int *)(DAT_8c09e1a4 + ar4) + 0x78,ar5,ar6,ar7);
  uVar6 = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*DAT_8c09e1a0 * 0xc + *piVar2 + 8);
  *(undefined4 *)(*DAT_8c09e1a0 * 0xc + *piVar2 + 8) = uVar6;
  (*(code *)PTR_FUN_8c09e1ac)(*(int *)(DAT_8c09e1a4 + ar4) + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09e1b0)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09e1b4)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09e1b8,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c09e1bc,DAT_8c09e1b8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09e1bc,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(PTR_FUN_8c09e1c0,DAT_8c09e1bc);
  }
  if (in_FPSCR_PR == '\0') {
    iVar1 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar8 / dVar8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09e1b8,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c09e1bc,DAT_8c09e1b8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09e1bc,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(PTR_FUN_8c09e1c0,DAT_8c09e1bc);
  }
  if (in_FPSCR_PR == '\0') {
    iVar10 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar10 = (int)(dVar8 / dVar8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09e1b8,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c09e1bc,DAT_8c09e1b8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c09e1bc,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(PTR_FUN_8c09e1c0,DAT_8c09e1bc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    fVar7 = SUB84(dVar8,0) / fVar9;
    dVar8 = (double)CONCAT44(fVar9,fVar7);
    a5 = (int)fVar7;
  }
  else {
    dVar8 = dVar8 / dVar8;
    a5 = (int)dVar8;
  }
  uStack_4c = (undefined4)((ulonglong)dVar8 >> 0x20);
  (*(code *)PTR_FUN_8c09e1c0)(0,a5,iVar10,iVar1);
  (*(code *)PTR_FUN_8c09e1c4)(0,a5,iVar10,iVar1);
  iVar3 = (**(code **)(DAT_8c09e18c + *(int *)(ar4 + 8)))(ar4,a5,iVar10,iVar1);
  if (iVar3 == 0) {
    uStack_34 = uStack_4c;
    uVar4 = (*(code *)PTR_FUN_8c09e1c8)(*(int *)(DAT_8c09e1a4 + ar4) + 0x70,a5,iVar10,iVar1);
    iVar3 = (*(code *)PTR_FUN_8c09e1d0)(*(undefined4 *)(DAT_8c09e1cc + ar4),a5,iVar10,iVar1);
    uVar6 = (*(code *)PTR_deref_u32_8c09e1d8)
                      (*(int *)(DAT_8c09e1d4 + *(int *)(DAT_8c09e1a4 + ar4)) + iVar3 * 4,a5,iVar10,
                       iVar1);
    iVar3 = (*(code *)PTR_FUN_8c09e1d0)(*(undefined4 *)(DAT_8c09e1cc + ar4),a5,iVar10,iVar1);
    uVar5 = (*(code *)PTR_FUN_8c09e1e0)
                      (*(int *)(DAT_8c09e1dc + *(int *)(DAT_8c09e1a4 + ar4)) + iVar3 * 4,a5,iVar10,
                       iVar1);
    (*(code *)PTR_FUN_8c09e1e4)(*(undefined4 *)(DAT_8c09e1cc + ar4),a5,iVar10,iVar1);
    if (in_FPSCR_SZ == '\0') {
      uStack_34 = uVar5;
    }
    (*(code *)PTR_FUN_8c09e1e8)(uVar4,uVar6,uStack_34,iVar1);
  }
  else {
    uVar4 = (*(code *)PTR_FUN_8c09e1c8)(*(int *)(DAT_8c09e1a4 + ar4) + 0x70,a5,iVar10,iVar1);
    iVar3 = (*(code *)PTR_FUN_8c09e1d0)(*(undefined4 *)(DAT_8c09e1cc + ar4),a5,iVar10,iVar1);
    uVar6 = (*(code *)PTR_deref_u32_8c09e1d8)
                      (*(int *)(DAT_8c09e1d4 + *(int *)(DAT_8c09e1a4 + ar4)) + iVar3 * 4,a5,iVar10,
                       iVar1);
    iVar3 = (*(code *)PTR_FUN_8c09e1d0)(*(undefined4 *)(DAT_8c09e1cc + ar4),a5,iVar10,iVar1);
    uVar5 = (*(code *)PTR_FUN_8c09e1e0)
                      (*(int *)(DAT_8c09e1dc + *(int *)(DAT_8c09e1a4 + ar4)) + iVar3 * 4,a5,iVar10,
                       iVar1);
    (*(code *)PTR_FUN_8c09e1e4)(*(undefined4 *)(DAT_8c09e1cc + ar4),a5,iVar10,iVar1);
    if (in_FPSCR_SZ == '\0') {
      uStack_4c = uVar5;
    }
    (*(code *)PTR_FUN_8c09e1ec)(uVar4,uVar6,uStack_4c,iVar1);
    uStack_34 = uStack_4c;
  }
  (*(code *)PTR_FUN_8c09e1f0)(1,uVar6,uStack_34,iVar1);
  uVar4 = *(undefined4 *)(*DAT_8c09e1a0 * 0xc + *piVar2 + 8);
  *(undefined4 *)(*DAT_8c09e1a0 * 0xc + *piVar2 + 8) = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = uVar4;
  iVar10 = (**(code **)(DAT_8c09e18c + *(int *)(ar4 + 8)))(ar4,uVar6,uStack_34,iVar1);
  if (iVar10 == 0) {
    iVar10 = (*(code *)PTR_FUN_8c09e194)(PTR_DAT_8c09e1f4,uVar6,uStack_34,iVar1);
  }
  return iVar10;
}



/* get_field_24c_09e1f8 @ 8c09e1f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_24c_09e1f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c09e200 + ar4);
}



/* FUN_8c09e204 @ 8c09e204 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09e204(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  int a6;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [16];
  
  iVar2 = ar4 + 0x5c;
  (*(code *)PTR_FUN_8c09e2c0)(auStack_14,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c09e2c4)(ar4 + 0x5c,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c09e2c8)(0,iVar2,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c09e2cc,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c09e2d0,DAT_8c09e2cc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c09e2d0,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(PTR_FUN_8c09e2d4,DAT_8c09e2d0);
  }
  if (in_FPSCR_PR == '\0') {
    iVar2 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar4 / dVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c09e2cc,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c09e2d0,DAT_8c09e2cc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c09e2d0,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(PTR_FUN_8c09e2d4,DAT_8c09e2d0);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    a6 = (int)(dVar4 / dVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c09e2cc,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c09e2d0,DAT_8c09e2cc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c09e2d0,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(PTR_FUN_8c09e2d4,DAT_8c09e2d0);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    a5 = (int)(dVar4 / dVar4);
  }
  (*(code *)PTR_FUN_8c09e2d4)(0,a5,a6,iVar2);
  (*(code *)PTR_FUN_8c09e2d8)(0,a5,a6,iVar2);
  (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,a5,a6,iVar2);
  (*(code *)PTR_FUN_8c09e2dc)(1,a5,a6,iVar2);
  (*(code *)PTR_FUN_8c09e2e0)(ar4 + 0x5c,auStack_14,a6,iVar2);
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c09e2e4)(auStack_14,0xffffffff,a6,iVar2);
  return uVar1;
}



/* FUN_8c09e2e8 @ 8c09e2e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09e2e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 a5;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  int a6;
  int a5_00;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_2c;
  float fVar8;
  
  iVar1 = (*(code *)PTR_get_field_24c_09e1f8_8c09e4a8)(ar4 + DAT_8c09e4a4,ar5,ar6,ar7);
  *DAT_8c09e4ac = iVar1;
  piVar2 = (int *)(*(code *)PTR_get_field_4_0253e4_8c09e4b4)
                            (*(int *)(DAT_8c09e4b0 + ar4) + 0x78,ar5,ar6,ar7);
  uVar5 = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*DAT_8c09e4ac * 0xc + *piVar2 + 8);
  *(undefined4 *)(*DAT_8c09e4ac * 0xc + *piVar2 + 8) = uVar5;
  (*(code *)PTR_FUN_8c09e4b8)(*(int *)(DAT_8c09e4b0 + ar4) + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09e4bc)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09e4c0)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c09e4c4,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c09e4c8,DAT_8c09e4c4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c09e4c8,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c09e4cc,DAT_8c09e4c8);
  }
  if (in_FPSCR_PR == '\0') {
    iVar1 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c09e4c4,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c09e4c8,DAT_8c09e4c4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c09e4c8,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c09e4cc,DAT_8c09e4c8);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    a6 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c09e4c4,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c09e4c8,DAT_8c09e4c4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c09e4c8,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c09e4cc,DAT_8c09e4c8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar8;
    dVar7 = (double)CONCAT44(fVar8,fVar6);
    a5_00 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    a5_00 = (int)dVar7;
  }
  uStack_2c = (undefined4)((ulonglong)dVar7 >> 0x20);
  (*(code *)PTR_FUN_8c09e4cc)(0,a5_00,a6,iVar1);
  (*(code *)PTR_FUN_8c09e4d0)(0,a5_00,a6,iVar1);
  uVar5 = (*(code *)PTR_FUN_8c09e4d4)(*(int *)(DAT_8c09e4b0 + ar4) + 0x70,a5_00,a6,iVar1);
  iVar3 = (*(code *)PTR_FUN_8c09e4dc)(*(undefined4 *)(DAT_8c09e4d8 + ar4),a5_00,a6,iVar1);
  a5 = (*(code *)PTR_deref_u32_8c09e4e4)
                 (*(int *)(DAT_8c09e4e0 + *(int *)(DAT_8c09e4b0 + ar4)) + iVar3 * 4,a5_00,a6,iVar1);
  iVar3 = (*(code *)PTR_FUN_8c09e4dc)(*(undefined4 *)(DAT_8c09e4d8 + ar4),a5_00,a6,iVar1);
  uVar4 = (*(code *)PTR_FUN_8c09e4ec)
                    (*(int *)(DAT_8c09e4e8 + *(int *)(DAT_8c09e4b0 + ar4)) + iVar3 * 4,a5_00,a6,
                     iVar1);
  (*(code *)PTR_FUN_8c09e4f0)(*(undefined4 *)(DAT_8c09e4d8 + ar4),a5_00,a6,iVar1);
  if (in_FPSCR_SZ == '\0') {
    uStack_2c = uVar4;
  }
  (*(code *)PTR_FUN_8c09e4f4)(uVar5,a5,uStack_2c,iVar1);
  (*(code *)PTR_FUN_8c09e4f8)(1,a5,uStack_2c,iVar1);
  uVar5 = *(undefined4 *)(*DAT_8c09e4ac * 0xc + *piVar2 + 8);
  *(undefined4 *)(*DAT_8c09e4ac * 0xc + *piVar2 + 8) = *(undefined4 *)(*piVar2 + 8);
  iVar1 = *piVar2;
  *(undefined4 *)(iVar1 + 8) = uVar5;
  return iVar1;
}



/* FUN_8c09e4fc @ 8c09e4fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09e4fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  undefined4 uVar3;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  undefined4 uStack_1c;
  
  (*(code *)PTR_FUN_8c09e598)(*(int *)(DAT_8c09e594 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09e59c)(*(int *)(DAT_8c09e594 + ar4) + 0x70,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c09e5a4)(*(undefined4 *)(DAT_8c09e5a0 + ar4),ar5,ar6,ar7);
  a5 = (*(code *)PTR_deref_u32_8c09e5ac)
                 (*(int *)(DAT_8c09e5a8 + *(int *)(DAT_8c09e594 + ar4)) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c09e5a4)(*(undefined4 *)(DAT_8c09e5a0 + ar4),ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c09e5b4)
                    (*(int *)(DAT_8c09e5b0 + *(int *)(DAT_8c09e594 + ar4)) + iVar2 * 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09e5b8)(*(undefined4 *)(DAT_8c09e5a0 + ar4),ar5,ar6,ar7);
  uStack_1c = extraout_fr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = uVar3;
  }
  uVar1 = (*(code *)PTR_FUN_8c09e5bc)(uVar1,a5,uStack_1c,ar7);
  return uVar1;
}



/* s_Mr3_Home_njd_09e5c2 @ 8c09e5c0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_Mr3_Home_njd_09e5c2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_bc [4];
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
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  
  for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
    *(int *)((int)aiStack_bc + DAT_8c09e654) = iVar3;
    *(undefined4 *)(DAT_8c09e65c + *(int *)((int)aiStack_bc + DAT_8c09e654) * DAT_8c09e658) = 0;
    *(int *)((int)aiStack_bc + DAT_8c09e660) = iVar3;
    *(undefined4 *)
     (DAT_8c09e664 + *(int *)((int)aiStack_bc + DAT_8c09e660) * DAT_8c09e658 + DAT_8c09e65c) = 0;
    *(int *)((int)aiStack_bc + DAT_8c09e668) = iVar3;
    *(undefined4 *)
     (DAT_8c09e66c + *(int *)((int)aiStack_bc + DAT_8c09e668) * DAT_8c09e658 + DAT_8c09e65c) = 0;
    *(int *)((int)aiStack_bc + DAT_8c09e670) = iVar3;
    *(undefined2 *)
     (DAT_8c09e674 + *(int *)((int)aiStack_bc + DAT_8c09e670) * DAT_8c09e658 + DAT_8c09e65c) = 0;
    iStack_40 = iVar3;
    *(undefined2 *)(DAT_8c09e678 + iVar3 * DAT_8c09e658 + DAT_8c09e65c) = 0;
  }
  iVar3 = 0;
  while (iVar4 = iVar3, iVar4 < 1) {
    *(undefined **)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 4) = PTR_PTR_8c09e970;
    *(undefined **)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 8) = PTR_PTR_8c09e974;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0xc) = *(undefined4 *)PTR_PTR_8c09e978;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0x10) = 0;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0x14) = *(undefined4 *)PTR_PTR_8c09e97c;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0x18) = *(undefined4 *)PTR_PTR_8c09e980;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0x1c) = *(undefined4 *)PTR_PTR_8c09e984;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0x20) = *(undefined4 *)PTR_PTR_8c09e988;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0x24) = 7;
    *(undefined4 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + 0x30) = DAT_8c09e98c;
    *(undefined4 *)(DAT_8c09e990 + iVar4 * DAT_8c09e968 + DAT_8c09e96c) = DAT_8c09e994;
    puVar1 = (undefined8 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e998);
    uVar2 = (undefined4)in_dr0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,uVar2);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e99c);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,uVar2);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e9a0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,uVar2);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e9a4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = DAT_8c09e9a8;
    }
    else {
      *puVar1 = CONCAT44(_DAT_8c09e9ac,DAT_8c09e9a8);
    }
    *(undefined4 *)(_DAT_8c09e9ac + iVar4 * DAT_8c09e968 + DAT_8c09e96c) = DAT_8c09e9b0;
    *(undefined2 *)(DAT_8c09e9b4 + iVar4 * DAT_8c09e968 + DAT_8c09e96c) = 0xf;
    *(undefined4 *)(DAT_8c09e9b8 + iVar4 * DAT_8c09e968 + DAT_8c09e96c) = DAT_8c09e9bc;
    *(undefined2 *)(DAT_8c09e9c0 + iVar4 * DAT_8c09e968 + DAT_8c09e96c) = 0xf;
    iStack_8c = iVar4;
    iStack_88 = iVar4;
    iStack_84 = iVar4;
    iStack_80 = iVar4;
    iStack_7c = iVar4;
    iStack_78 = iVar4;
    iStack_74 = iVar4;
    iStack_70 = iVar4;
    iStack_6c = iVar4;
    iStack_68 = iVar4;
    iStack_64 = iVar4;
    iStack_60 = iVar4;
    iStack_5c = iVar4;
    iStack_58 = iVar4;
    iStack_54 = iVar4;
    iStack_50 = iVar4;
    iStack_4c = iVar4;
    iStack_48 = iVar4;
    iStack_44 = iVar4;
    (*(code *)PTR_Vec3_set_xyz_8c09e9c8)((int)aiStack_bc + DAT_8c09e9b8,ar5,ar6,ar7);
    iStack_90 = iVar4;
    (*(code *)PTR_vec3_copy_8c023d8c_8c09e9d0)
              (iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e9cc,(int)aiStack_bc + DAT_8c09e9b8,ar6
               ,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c09e9d4)((int)aiStack_bc + DAT_8c09e9b8,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c09e9c8)((int)aiStack_bc + DAT_8c09e9dc,uVar2,ar6,ar7);
    iStack_94 = iVar4;
    (*(code *)PTR_vec3_copy_8c023d8c_8c09e9d0)
              (iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e9e0,(int)aiStack_bc + DAT_8c09e9dc,ar6
               ,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c09e9d4)((int)aiStack_bc + DAT_8c09e9dc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c09e9c8)((int)aiStack_bc + DAT_8c09e9ec,uVar2,ar6,ar7);
    iStack_98 = iVar4;
    (*(code *)PTR_vec3_copy_8c023d8c_8c09e9d0)
              (iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e9f0,(int)aiStack_bc + DAT_8c09e9ec,ar6
               ,ar7);
    ar5 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c09e9d4)((int)aiStack_bc + DAT_8c09e9ec,0xffffffff,ar6,ar7);
    puVar1 = (undefined8 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e9f4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = (undefined4)DAT_8c09e9f8;
    }
    else {
      *puVar1 = CONCAT44(DAT_8c09e9f8._4_4_,(undefined4)DAT_8c09e9f8);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09e9f8._4_4_);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = DAT_8c09ea00;
    }
    else {
      *puVar1 = CONCAT44(_DAT_8c09ea04,DAT_8c09ea00);
    }
    iStack_a4 = iVar4 * DAT_8c09e968 + DAT_8c09e96c;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c09ea08,*(undefined4 *)(iStack_a4 + _DAT_8c09ea04));
    }
    else {
      in_xd0 = *(undefined8 *)(iStack_a4 + _DAT_8c09ea04);
      dVar6 = (double)CONCAT44(DAT_8c09ea0c,DAT_8c09ea08);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(iStack_a4 + _DAT_8c09ea04) = fVar5;
    }
    else {
      *(undefined8 *)(iStack_a4 + _DAT_8c09ea04) = in_xd0;
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c09e968 + DAT_8c09e96c + DAT_8c09ea0c);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c09ea10,fVar5);
      *(undefined4 *)puVar1 = DAT_8c09ea10;
    }
    else {
      in_dr0 = CONCAT44(uRam8c09ea14,DAT_8c09ea10);
      *puVar1 = in_dr0;
    }
    iStack_ac = iVar4;
    iStack_a8 = iVar4;
    iStack_a0 = iVar4;
    iStack_9c = iVar4;
    iVar3 = iVar4 + 1;
  }
  for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
    *(undefined2 *)(DAT_8c09ea74 + iVar3 * 0x10) = 0xffff;
    *(undefined4 *)(iVar3 * 0x10 + DAT_8c09ea74 + 4) = 1;
    *(undefined4 *)(iVar3 * 0x10 + DAT_8c09ea74 + 8) = 0;
    *(undefined4 *)(iVar3 * 0x10 + DAT_8c09ea74 + 0xc) = 0;
  }
  return 1;
}



/* FUN_8c09ea78 @ 8c09ea78 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09ead6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ea78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *a4;
  int a5;
  undefined4 a5_00;
  float fVar5;
  undefined *puVar6;
  ulonglong in_dr0;
  double dVar7;
  undefined *puVar8;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_1c [8];
  undefined8 uStack_14;
  
  a4 = auStack_1c;
  (*(code *)PTR_Vec3_ctor_zero_8c09eda8)(a4,ar5,ar6,ar7);
  if (*DAT_8c09edac < 3) {
    uVar2 = (*(code *)PTR_rand_8c09edb0)(a4,ar5,ar6,ar7);
    ar5 = 5;
    iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09edb4)(uVar2,5,ar6,ar7);
    if (iVar3 == 0) {
      for (iVar3 = 0; fVar5 = (float)in_dr0, iVar3 < 3; iVar3 = iVar3 + 1) {
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)(PTR_DAT_8c09edb8 + iVar3 * 4);
        }
        else {
          in_xd0 = *(undefined8 *)(PTR_DAT_8c09edb8 + iVar3 * 4);
        }
        in_dr0 = (ulonglong)(uint)fVar5;
        if ((fVar5 == 0.0) && (*(int *)(DAT_8c09edbc + ar4) == 0)) {
          (*(code *)PTR_FUN_8c09edc4)(iVar3 + 2,ar5,ar6,ar7);
          a5 = ar4 + 0x30;
          (*(code *)PTR_Vec3_assign_8c09edc8)(auStack_1c,a5,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(DAT_8c09edcc,(undefined4)uStack_14);
          }
          else {
            dVar7 = (double)CONCAT44(PTR_FUN_8c09edd0,DAT_8c09edcc);
            in_xd0 = uStack_14;
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 + dVar7,0);
          }
          uVar1 = in_xd0;
          if (in_FPSCR_SZ == '\0') {
            uStack_14 = CONCAT44(uStack_14._4_4_,fVar5);
            uVar1 = uStack_14;
          }
          uStack_14 = uVar1;
          (*(code *)PTR_FUN_8c09edd0)(iVar3 + 2,a5,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined **)(PTR_DAT_8c09edb8 + iVar3 * 4) = DAT_8c09edc0;
          }
          else {
            *(ulonglong *)(PTR_DAT_8c09edb8 + iVar3 * 4) = CONCAT44(PTR_FUN_8c09edc4,DAT_8c09edc0);
          }
          *(undefined4 *)(PTR_DAT_8c09edd4 + iVar3 * 4) = 1;
          *DAT_8c09edac = *DAT_8c09edac + 1;
          *(int *)(DAT_8c09edbc + ar4) = iVar3 + 1;
          ar5 = 1;
          (*(code *)PTR_FUN_8c09edd8)(*(int *)(DAT_8c09edbc + ar4) + 1,1,ar6,ar7);
          break;
        }
      }
    }
  }
  if (*(int *)(DAT_8c09edbc + ar4) != 0) {
    (*(code *)PTR_FUN_8c09edc4)(*(int *)(DAT_8c09edbc + ar4) + 1,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c09eddc)(*(int *)(DAT_8c09edbc + ar4) + 1,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c09edd0)(*(int *)(DAT_8c09edbc + ar4) + 1,ar5,ar6,ar7);
    iVar3 = *(int *)(DAT_8c09edbc + ar4) + 1;
    (*(code *)PTR_FUN_8c09ede0)(iVar3,ar5,ar6,ar7);
    if (*(int *)(PTR_DAT_8c09edd4 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4) == 1) {
      pfVar4 = (float *)(PTR_DAT_8c09edb8 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c09ede4,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)pfVar4;
        dVar7 = (double)CONCAT44(PTR_FUN_8c09ede8,DAT_8c09ede4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)pfVar4 = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(PTR_DAT_8c09edb8 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4);
      }
      if (in_FPSCR_PR != '\0' || 1.0 <= fVar5) {
        *(undefined4 *)(PTR_DAT_8c09edd4 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4) = 0;
      }
    }
    else {
      pfVar4 = (float *)(PTR_DAT_8c09edb8 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c09ede4,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)pfVar4;
        dVar7 = (double)CONCAT44(PTR_FUN_8c09ede8,DAT_8c09ede4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)pfVar4 = in_xd0;
      }
      puVar6 = DAT_8c09edc0;
      puVar8 = PTR_FUN_8c09edc4;
      if (in_FPSCR_SZ == '\0') {
        puVar6 = *(undefined **)(PTR_DAT_8c09edb8 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4);
        puVar8 = DAT_8c09edc0;
      }
      if (in_FPSCR_PR != '\0' || (float)puVar6 <= (float)puVar8) {
        uVar2 = (*(code *)PTR_rand_8c09edb0)(iVar3,ar5,ar6,ar7);
        a5_00 = 10;
        iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09edb4)(uVar2,10,ar6,ar7);
        if (iVar3 == 0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(PTR_DAT_8c09edb8 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4) = 0;
          }
          else {
            *(ulonglong *)(PTR_DAT_8c09edb8 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4) =
                 ZEXT48(puVar6);
          }
          (*(code *)PTR_FUN_8c09edc4)(*(int *)(DAT_8c09edbc + ar4) + 1,a5_00,ar6,ar7);
          (*(code *)PTR_FUN_8c09eddc)(*(int *)(DAT_8c09edbc + ar4) + 1,a5_00,ar6,ar7);
          *DAT_8c09edac = *DAT_8c09edac + -1;
          (*(code *)PTR_FUN_8c09edd8)(*(int *)(DAT_8c09edbc + ar4) + 1,0,ar6,ar7);
          (*(code *)PTR_FUN_8c09ede8)(*(int *)(DAT_8c09edbc + ar4) + 1,0,ar6,ar7);
          *(undefined4 *)(DAT_8c09edbc + ar4) = 0;
        }
        else {
          *(undefined4 *)(PTR_DAT_8c09edd4 + (*(int *)(DAT_8c09edbc + ar4) + -1) * 4) = 1;
        }
      }
    }
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c09edec)(auStack_1c,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c09edf0 @ 8c09edf0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c09edf0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  undefined *puVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c09ef88)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ef90)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ef94)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ef98)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,ar5,ar6,ar7);
  puVar2 = (undefined8 *)(PTR_DAT_8c09ef8c + (*(int *)((int)DAT_8c09ef84 + ar4) + -1) * 4);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c09ef9c,*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar5 = (double)CONCAT44(DAT_8c09efa0,DAT_8c09ef9c);
  }
  if (in_FPSCR_PR == '\0') {
    puVar3 = (undefined *)(SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    puVar3 = SUB84(dVar5 - dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined **)puVar2 = puVar3;
  }
  else {
    *puVar2 = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3 = *(undefined **)(PTR_DAT_8c09ef8c + (*(int *)((int)DAT_8c09ef84 + ar4) + -1) * 4);
  }
  puVar1 = &DAT_8c09efa0;
  puVar4 = DAT_8c09efa0;
  puVar6 = PTR_FUN_8c09efa4;
  if (in_FPSCR_SZ == '\0') {
    puVar4 = puVar3;
    puVar6 = DAT_8c09efa0;
  }
  if (in_FPSCR_PR != '\0' || (float)puVar4 <= (float)puVar6) {
    (*(code *)PTR_FUN_8c09ef90)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c09ef98)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c09efa4)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,0,ar6,ar7);
    (*(code *)PTR_FUN_8c09efa8)(*(int *)((int)DAT_8c09ef84 + ar4) + 1,0,ar6,ar7);
    *DAT_8c09efac = *DAT_8c09efac + -1;
    *(undefined4 *)(PTR_DAT_8c09efb0 + (*(int *)((int)DAT_8c09ef84 + ar4) + -1) * 4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(PTR_DAT_8c09ef8c + (*(int *)((int)DAT_8c09ef84 + ar4) + -1) * 4) = 0;
    }
    else {
      *(ulonglong *)(PTR_DAT_8c09ef8c + (*(int *)((int)DAT_8c09ef84 + ar4) + -1) * 4) =
           ZEXT48(puVar4);
    }
    puVar1 = DAT_8c09ef84;
    *(undefined4 *)((int)DAT_8c09ef84 + ar4) = 0;
  }
  return puVar1;
}



/* FUN_8c09efb4 @ 8c09efb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09efb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  iVar1 = 0;
  if (*(int *)(DAT_8c09f020 + ar4) != 0) {
    *DAT_8c09f024 = *DAT_8c09f024 + -1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(PTR_DAT_8c09f028 + (*(int *)(DAT_8c09f020 + ar4) + -1) * 4) = 0;
    }
    else {
      *(ulonglong *)(PTR_DAT_8c09f028 + (*(int *)(DAT_8c09f020 + ar4) + -1) * 4) = (ulonglong)in_fr1
      ;
    }
    *(undefined4 *)(PTR_DAT_8c09f02c + (*(int *)(DAT_8c09f020 + ar4) + -1) * 4) = 0;
    (*(code *)PTR_FUN_8c09f030)(*(int *)(DAT_8c09f020 + ar4) + 1,1,ar6,ar7);
    (*(code *)PTR_FUN_8c09f034)(*(int *)(DAT_8c09f020 + ar4) + 1,1,ar6,ar7);
    iVar1 = DAT_8c09f020;
    *(undefined4 *)(DAT_8c09f020 + ar4) = 0;
  }
  return iVar1;
}



/* Class_12ab2c_m3_09f038 @ 8c09f038 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m3_09f038(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09f060 @ 8c09f060 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f060(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 a7;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(PTR_DAT_8c09f294,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f29c;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f29c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(PTR_DAT_8c09f2a8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f2ac;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f2ac,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(PTR_DAT_8c09f2b0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f2b4;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f2b4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(PTR_DAT_8c09f2b8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f2bc;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f2bc,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c09f2c0 = *(undefined4 *)DAT_8c09f2c4;
  }
  else {
    *(undefined8 *)PTR_DAT_8c09f2c0 = *DAT_8c09f2c4;
  }
  uVar1 = (*(code *)PTR_FUN_8c09f2cc)(DAT_8c09f2c8,puVar3,uVar2,ar7);
  puVar3 = PTR_FUN_8c09f2d4;
  uVar2 = DAT_8c09f2d0;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_FUN_8c09f2d4,DAT_8c09f2d0,ar7);
  uVar2 = (*(code *)PTR_FUN_8c09f2dc)(DAT_8c09f2d8,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c09f2a4)
            (uVar2,PTR_free_if_nonnull_wrap_03a454_8c09f2e4,DAT_8c09f2e0,ar7);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c09f2f4)
            (DAT_8c09f2f0,PTR_FUN_8c09f2ec,PTR_free_if_nonnull_wrap_0247b0_8c09f2e8,4);
  (*(code *)PTR_global_list_push_8c09f2a4)(0,PTR_FUN_8c09f2fc,DAT_8c09f2f8,uVar2);
  a7 = 4;
  (*(code *)PTR_FUN_8c09f2f4)
            (DAT_8c09f308,PTR_FUN_8c09f304,PTR_free_if_nonnull_wrap_03a3dc_8c09f300,4);
  puVar3 = PTR_FUN_8c09f310;
  uVar2 = DAT_8c09f30c;
  (*(code *)PTR_global_list_push_8c09f2a4)(0,PTR_FUN_8c09f310,DAT_8c09f30c,a7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f31c,puVar3,uVar2,a7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f320;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f320,a7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f324,puVar3,uVar2,a7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f328;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f328,a7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f32c,puVar3,uVar2,a7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f330;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f330,a7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f334,puVar3,uVar2,a7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f338;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f338,a7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f33c,puVar3,uVar2,a7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f340;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f340,a7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f344,puVar3,uVar2,a7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f348;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f348,a7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f34c,puVar3,uVar2,a7);
  puVar3 = PTR_Vec3_dtor_8c09f2a0;
  uVar2 = DAT_8c09f350;
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar1,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f350,a7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c09f298)(DAT_8c09f354,puVar3,uVar2,a7);
  (*(code *)PTR_global_list_push_8c09f2a4)(uVar2,PTR_Vec3_dtor_8c09f2a0,DAT_8c09f358,a7);
  uVar2 = DAT_8c09f32c;
  uVar1 = (*(code *)PTR_FUN_8c09f360)(DAT_8c09f35c,DAT_8c09f31c,DAT_8c09f324,DAT_8c09f32c);
  uVar2 = (*(code *)PTR_global_list_push_8c09f2a4)
                    (uVar1,PTR_Class_129938_m0_017084_8c09f368,DAT_8c09f364,uVar2);
  return uVar2;
}



/* FUN_8c09f36c @ 8c09f36c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f36c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c09f38c)
                    (DAT_8c09f388,PTR_free_if_nonnull_wrap_03a3dc_8c09f384,4,0xf);
  return uVar1;
}



/* FUN_8c09f390 @ 8c09f390 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f390(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c09f3b0)
                    (DAT_8c09f3ac,PTR_free_if_nonnull_wrap_0247b0_8c09f3a8,4,0xf);
  return uVar1;
}



/* FUN_8c09f3b4 @ 8c09f3b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c09f3b4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c09f400)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c09f404;
  (*(code *)PTR_FUN_8c09f40c)((int)ar4 + DAT_8c09f408,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c09f410 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c09f414 + (int)ar4) = 0xf;
  *(undefined4 *)(DAT_8c09f418 + (int)ar4) = 0xf;
  *(undefined4 *)(DAT_8c09f41c + (int)ar4) = 0xf;
  *(undefined1 *)(DAT_8c09f420 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c09f424 + (int)ar4) = 0;
  return ar4;
}



/* Class_12acc8_m0_09f428 @ 8c09f428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12acc8_m0_09f428(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c09f464;
    a5 = 0;
    (*(code *)PTR_Class_129c70_m0_02f1b8_8c09f468)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c09f46c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12acc8_m1_09f470 @ 8c09f470 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09fa58) */
/* WARNING: Removing unreachable block (ram,0x8c09fc44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 Class_12acc8_m1_09f470(int *ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 a6;
  int *a6_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar10;
  uint in_fr1;
  float fVar11;
  ulonglong uVar12;
  double dVar13;
  undefined8 uVar14;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar10 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar10 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar10 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar10 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar10 + -0x10) = in_PR;
  piVar8 = ar5;
  piVar6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c09f598)
            ((undefined1 *)((int)puVar10 + DAT_8c09f594 + -0x144),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c09f598)
            ((undefined1 *)((int)puVar10 + DAT_8c09f59c + -0x144),piVar8,piVar6,ar7);
  puVar7 = (undefined1 *)((int)puVar10 + DAT_8c09f5a0 + -0x144);
  iVar3 = 0x10;
  puVar5 = PTR_DAT_8c09f5a4;
  do {
    puVar4 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar4;
    puVar7 = puVar7 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)DAT_8c09f5a8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar10 + DAT_8c09f5a8._4_4_ + -0x144) = 0;
  }
  else {
    *(ulonglong *)((int)puVar10 + DAT_8c09f5a8._4_4_ + -0x144) = (ulonglong)in_fr1;
  }
  uVar12 = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar10 + DAT_8c09f5b0 + -0x144) = 0;
  }
  else {
    *(ulonglong *)((int)puVar10 + DAT_8c09f5b0 + -0x144) = uVar12;
  }
  *(undefined4 *)(PTR_DAT_8c09f5b4 + DAT_8c09f5b8) = *(undefined4 *)(DAT_8c09f5bc + (int)ar4);
  iVar3 = DAT_8c09f5c0;
  *(undefined4 *)(PTR_DAT_8c09f5b4 + DAT_8c09f5c0) = *(undefined4 *)(DAT_8c09f5c4 + (int)ar4);
  *(undefined4 *)(PTR_DAT_8c09f5b4 + DAT_8c09f5c8) = *(undefined4 *)(DAT_8c09f5cc + (int)ar4);
  uVar1 = (*(code *)PTR_FUN_8c09f5d4)(*(undefined4 *)(DAT_8c09f5d0 + ar6[6]),iVar3,piVar6,ar7);
  uVar2 = (undefined4)uVar12;
  *(short *)((int)puVar10 + -0x144) = (short)uVar1;
  if (0x78 < *(ushort *)((int)puVar10 + -0x144)) {
    *(undefined4 *)(DAT_8c09f5b8 + (int)ar4) = 0;
  }
  uVar1 = (**(code **)(DAT_8c09f5d8 + *ar5))(ar5,2,piVar6,ar7);
  *(undefined4 *)((int)puVar10 + DAT_8c09f5dc + -0x144) = uVar1;
  if (*(int *)((int)puVar10 + DAT_8c09f5dc + -0x144) == 1) {
    uVar9 = 0;
    uVar1 = (**(code **)(DAT_8c09f5e0 + *ar5))(ar5,2,0,ar7);
    *(undefined4 *)((int)puVar10 + DAT_8c09f5e4 + -0x144) = uVar1;
    *(undefined1 **)((int)puVar10 + -0x148) = (undefined1 *)((int)puVar10 + DAT_8c09f5e8 + -0x144);
    (*(code *)PTR_FUN_8c09f5ec)
              (*(undefined4 *)((int)puVar10 + DAT_8c09f5dc + -0x148),PTR_FUN_8c09f5ec,uVar9,ar7);
    (*(code *)PTR_Vec3_assign_8c09f5f0)
              ((undefined1 *)((int)puVar10 + DAT_8c09f594 + -0x144),
               (undefined1 *)((int)puVar10 + DAT_8c09f5e8 + -0x144),uVar9,ar7);
    (*(code *)PTR_Vec3_dtor_8c09f5f4)
              ((undefined1 *)((int)puVar10 + DAT_8c09f5e8 + -0x144),0xffffffff,uVar9,ar7);
    if (in_FPSCR_SZ == '\0') {
      ar4[0x1c] = *(int *)((int)puVar10 + DAT_8c09f594 + -0x144);
      ar4[0x1d] = *(int *)((int)puVar10 + DAT_8c09f5f8 + -0x144);
      dVar13 = (double)CONCAT44(*(int *)((int)puVar10 + DAT_8c09f5fc + -0x144),uVar2);
      ar4[0x1e] = *(int *)((int)puVar10 + DAT_8c09f5fc + -0x144);
    }
    else {
      *(undefined8 *)(ar4 + 0x1c) = *(undefined8 *)((int)puVar10 + DAT_8c09f594 + -0x144);
      *(undefined8 *)(ar4 + 0x1d) = *(undefined8 *)((int)puVar10 + DAT_8c09f5f8 + -0x144);
      dVar13 = *(double *)((int)puVar10 + DAT_8c09f5fc + -0x144);
      *(double *)(ar4 + 0x1e) = dVar13;
    }
    piVar6 = ar4 + 0x1d;
  }
  else if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar10 + -0x120) = (undefined4)DAT_8c09f6cc;
    ar4[0x1e] = *(int *)((int)puVar10 + -0x120);
    *(undefined4 *)((int)puVar10 + -0x124) = *(undefined4 *)((int)puVar10 + -0x120);
    ar4[0x1d] = *(int *)((int)puVar10 + -0x124);
    dVar13 = (double)CONCAT44(*(int *)((int)puVar10 + -0x124),uVar2);
    ar4[0x1c] = *(int *)((int)puVar10 + -0x124);
  }
  else {
    *(ulonglong *)((int)puVar10 + -0x120) = CONCAT44(DAT_8c09f6cc._4_4_,(undefined4)DAT_8c09f6cc);
    *(undefined8 *)(ar4 + 0x1e) = *(undefined8 *)((int)puVar10 + -0x120);
    *(undefined8 *)((int)puVar10 + -0x124) = *(undefined8 *)((int)puVar10 + -0x120);
    *(undefined8 *)(ar4 + 0x1d) = *(undefined8 *)((int)puVar10 + -0x124);
    dVar13 = *(double *)((int)puVar10 + -0x124);
    *(double *)(ar4 + 0x1c) = dVar13;
  }
  uVar1 = (**(code **)(DAT_8c09f6cc._4_4_ + *ar5))(ar5,3,piVar6,ar7);
  *(undefined4 *)((int)puVar10 + -200) = uVar1;
  if (0 < *(int *)((int)puVar10 + -200)) {
    (*(code *)PTR_FUN_8c09f6dc)(ar6[1] + DAT_8c09f6d8,DAT_8c09f6d4,piVar6,ar7);
  }
  piVar6 = ar6;
  (*(code *)PTR_FUN_8c09f6e0)(ar4,ar5,ar6,ar7);
  iVar3 = (int)*(char *)(DAT_8c09f6e4 + (int)ar4);
  if ((*(char *)(DAT_8c09f6e4 + (int)ar4) == '\x01') && (ar4[1] != 1)) {
    (**(code **)(DAT_8c09f6e8 + *ar5))(ar5,1,piVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0xcc) = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(DAT_8c09f6ec,*(undefined4 *)((int)puVar10 + -0xcc));
    }
    else {
      *(double *)((int)puVar10 + -0xcc) = dVar13;
      in_xd0 = *(undefined8 *)((int)puVar10 + -0xcc);
      dVar13 = (double)CONCAT44(DAT_8c09f6f0,DAT_8c09f6ec);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) {
      if (*(char *)(DAT_8c09f6f0 + (int)ar4) == '\0') {
        *(undefined1 *)(DAT_8c09f6f0 + (int)ar4) = 1;
        ar4[1] = 0xc;
        ar4[0x10] = 4;
        ar4[2] = 0x55;
        ar4[3] = 0;
        iVar3 = DAT_8c09f6f4;
        (*(code *)PTR_FUN_8c09f6f8)(ar4,DAT_8c09f6f4,piVar6,ar7);
      }
      else {
        uVar1 = (*(code *)PTR_rand_8c09f748)
                          ((int)*(char *)(DAT_8c09f6f0 + (int)ar4),iVar3,piVar6,ar7);
        *(undefined4 *)((int)puVar10 + -0xd0) = uVar1;
        iVar3 = DAT_8c09f74c;
        uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09f750)
                          (*(undefined4 *)((int)puVar10 + -0xd0),DAT_8c09f74c,piVar6,ar7);
        *(undefined4 *)((int)puVar10 + -0x128) = uVar1;
        if (*(int *)((int)puVar10 + -0x128) == 1) {
          ar4[1] = 0xc;
          ar4[0x10] = 4;
          ar4[2] = 0x55;
          ar4[3] = 0;
          iVar3 = DAT_8c09f754;
          (*(code *)PTR_FUN_8c09f758)(ar4,DAT_8c09f754,piVar6,ar7);
        }
      }
      *(undefined1 *)(DAT_8c09f75c + (int)ar4) = 0;
      goto LAB_8c09f768;
    }
  }
  *(undefined1 *)(DAT_8c09f894 + (int)ar4) = 0;
LAB_8c09f768:
  uVar1 = (**(code **)(DAT_8c09f898 + *(int *)(*ar6 + 8)))(*ar6,iVar3,piVar6,ar7);
  *(undefined4 *)((int)puVar10 + -0xd4) = uVar1;
  if ((*(int *)((int)puVar10 + -0xd4) == 1) && (ar4[1] != 1)) {
    ar4[1] = 0xb;
    ar4[2] = 99;
    if (ar4[0x1b] != 0) {
      (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],iVar3,piVar6,ar7);
      ar4[0x1b] = 0;
    }
    piVar6 = (int *)PTR_get_field_6c_02f46c_8c09f89c;
    uVar1 = (*(code *)PTR_get_field_6c_02f46c_8c09f89c)
                      (*ar6,iVar3,PTR_get_field_6c_02f46c_8c09f89c,ar7);
    *(undefined4 *)((int)puVar10 + -0xd8) = uVar1;
    if (*(int *)((int)puVar10 + -0xd8) == 0) {
      uVar1 = (*(code *)PTR_get_field_70_05f490_8c09f8a0)(*ar6,iVar3,piVar6,ar7);
      *(undefined4 *)((int)puVar10 + -0xdc) = uVar1;
      if (*(int *)((int)puVar10 + -0xdc) == 0) {
        (*(code *)PTR_FUN_8c09f8a4)(*ar6,PTR_FUN_8c09f8a4,piVar6,ar7);
      }
    }
  }
  piVar8 = ar6;
  (*(code *)PTR_FUN_8c09f8a8)(ar4,ar6,piVar6,ar7);
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c09f8ac)(ar4,piVar8,piVar6,ar7);
  *(undefined4 *)((int)puVar10 + -0xe0) = uVar1;
  uVar1 = *(undefined4 *)((int)puVar10 + -0xe0);
  piVar6 = ar4;
  piVar8 = ar5;
  a6_00 = ar6;
  (*(code *)PTR_FUN_8c09f8b0)(ar4,ar5,ar6,uVar1);
  if (ar4[1] != 1) {
    piVar6 = ar5;
    (**(code **)(DAT_8c09f8b4 + *ar5))(ar5,piVar8,a6_00,uVar1);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar10 + -0xe4) = (int)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(DAT_8c09f8b8,*(undefined4 *)((int)puVar10 + -0xe4));
    }
    else {
      *(double *)((int)puVar10 + -0xe4) = dVar13;
      in_xd0 = *(undefined8 *)((int)puVar10 + -0xe4);
      dVar13 = (double)CONCAT44(_DAT_8c09f8bc,DAT_8c09f8b8);
    }
    if ((in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) &&
       (((*(char *)(_DAT_8c09f8bc + (int)ar4) == '\x01' ||
         (*(char *)(DAT_8c09f8c0 + (int)ar4) == '\x02')) ||
        (*(char *)(DAT_8c09f8c0 + (int)ar4) == '\x03')))) {
      a6_00 = (int *)0x2;
      piVar8 = (int *)0x0;
      (*(code *)PTR_FUN_8c09f8c8)(ar6[3],0,2,uVar1);
      switch(*(undefined4 *)(DAT_8c09f8cc + (int)ar4)) {
      case 0:
      case 1:
      case 2:
      case 3:
        *(undefined4 *)((int)puVar10 + -300) = 8;
        *(undefined4 *)(DAT_8c09f914 + (int)ar4) = *(undefined4 *)((int)puVar10 + -300);
        ar4[0x10] = *(int *)((int)puVar10 + -300);
        *(undefined4 *)(PTR_DAT_8c09f918 + DAT_8c09f91c) = 8;
        ar4[1] = 0xd;
        ar4[2] = 0x5f;
        ar4[3] = 0;
        break;
      case 4:
      case 5:
        uVar2 = (**(code **)(DAT_8c09fa88 + *ar5))(ar5,2,a6_00,uVar1);
        uVar9 = SUB84(dVar13,0);
        *(undefined4 *)((int)puVar10 + -0xe8) = uVar2;
        if (*(int *)((int)puVar10 + -0xe8) == 1) {
          (*(code *)PTR_Vec3_assign_8c09fa90)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fa8c + -0x144),ar6[5] + 0x10,a6_00,uVar1)
          ;
          a6 = 0;
          uVar9 = 2;
          uVar2 = (**(code **)(DAT_8c09fa94 + *ar5))(ar5,2,0,uVar1);
          *(undefined4 *)((int)puVar10 + -0xec) = uVar2;
          *(undefined1 **)((int)puVar10 + -0x148) =
               (undefined1 *)((int)puVar10 + DAT_8c09fa98 + -0x144);
          (*(code *)PTR_FUN_8c09fa9c)(*(undefined4 *)((int)puVar10 + -0xec),uVar9,a6,uVar1);
          (*(code *)PTR_Vec3_assign_8c09fa90)
                    ((undefined1 *)((int)puVar10 + DAT_8c09faa0 + -0x144),
                     (undefined1 *)((int)puVar10 + DAT_8c09fa98 + -0x144),a6,uVar1);
          (*(code *)PTR_Vec3_dtor_8c09faa4)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fa98 + -0x144),0xffffffff,a6,uVar1);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)puVar10 + DAT_8c09faa8 + -0x144) =
                 *(undefined4 *)((int)puVar10 + DAT_8c09faa0 + -0x144);
            *(undefined4 *)((int)puVar10 + DAT_8c09fab0 + -0x144) =
                 *(undefined4 *)((int)puVar10 + DAT_8c09faac + -0x144);
            *(undefined4 *)((int)puVar10 + DAT_8c09fab8 + -0x144) =
                 *(undefined4 *)((int)puVar10 + DAT_8c09fab4 + -0x144);
          }
          else {
            *(undefined8 *)((int)puVar10 + DAT_8c09faa8 + -0x144) =
                 *(undefined8 *)((int)puVar10 + DAT_8c09faa0 + -0x144);
            *(undefined8 *)((int)puVar10 + DAT_8c09fab0 + -0x144) =
                 *(undefined8 *)((int)puVar10 + DAT_8c09faac + -0x144);
            *(undefined8 *)((int)puVar10 + DAT_8c09fab8 + -0x144) =
                 *(undefined8 *)((int)puVar10 + DAT_8c09fab4 + -0x144);
          }
          puVar4 = (undefined1 *)((int)puVar10 + DAT_8c09fabc + -0x144);
          puVar7 = (undefined1 *)((int)puVar10 + DAT_8c09faa8 + -0x144);
          (*(code *)PTR_FUN_8c09fac0)(0,puVar7,puVar4,uVar1);
          (*(code *)PTR_Vec3_ctor_zero_8c09fac8)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fac4 + -0x144),puVar7,puVar4,uVar1);
          a6_00 = (int *)((int)puVar10 + DAT_8c09facc + -0x144);
          (*(code *)PTR_FUN_8c09fad8)
                    (*(undefined4 *)(DAT_8c09fad4 + ar6[6]),
                     (undefined1 *)((int)puVar10 + DAT_8c09fad0 + -0x144),a6_00,uVar1);
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c09fabc + -0x144),
                                      *(undefined4 *)((int)puVar10 + DAT_8c09fad0 + -0x144));
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09fad0 + -0x144);
            dVar13 = *(double *)((int)puVar10 + DAT_8c09fabc + -0x144);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 - dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + DAT_8c09fa8c + -0x144) = fVar11;
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c09fadc + -0x144),
                                      *(undefined4 *)((int)puVar10 + DAT_8c09facc + -0x144));
          }
          else {
            *(undefined8 *)((int)puVar10 + DAT_8c09fa8c + -0x144) = in_xd0;
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09facc + -0x144);
            dVar13 = *(double *)((int)puVar10 + DAT_8c09fadc + -0x144);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 - dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + DAT_8c09fae0 + -0x144) = fVar11;
            fVar11 = *(float *)((int)puVar10 + DAT_8c09fa8c + -0x144);
          }
          else {
            *(undefined8 *)((int)puVar10 + DAT_8c09fae0 + -0x144) = in_xd0;
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09fa8c + -0x144);
          }
          if (in_FPSCR_PR == '\0' && fVar11 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(DAT_8c09fae4,
                                        *(undefined4 *)((int)puVar10 + DAT_8c09fa8c + -0x144));
            }
            else {
              in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09fa8c + -0x144);
              dVar13 = (double)CONCAT44(DAT_8c09fae8,DAT_8c09fae4);
            }
            if (in_FPSCR_PR == '\0') {
              fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar13 * dVar13,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)puVar10 + DAT_8c09fa8c + -0x144) = fVar11;
            }
            else {
              *(undefined8 *)((int)puVar10 + DAT_8c09fa8c + -0x144) = in_xd0;
            }
          }
          if (in_FPSCR_SZ == '\0') {
            fVar11 = *(float *)((int)puVar10 + DAT_8c09fae0 + -0x144);
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09fae0 + -0x144);
          }
          if (in_FPSCR_PR == '\0' && fVar11 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(DAT_8c09fae4,
                                        *(undefined4 *)((int)puVar10 + DAT_8c09fae0 + -0x144));
            }
            else {
              in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09fae0 + -0x144);
              dVar13 = (double)CONCAT44(DAT_8c09fae8,DAT_8c09fae4);
            }
            if (in_FPSCR_PR == '\0') {
              fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar13 * dVar13,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)puVar10 + DAT_8c09fae0 + -0x144) = fVar11;
            }
            else {
              *(undefined8 *)((int)puVar10 + DAT_8c09fae0 + -0x144) = in_xd0;
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(DAT_8c09fae8,
                                      *(undefined4 *)((int)puVar10 + DAT_8c09fa8c + -0x144));
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09fa8c + -0x144);
            dVar13 = (double)CONCAT44(PTR_FUN_8c09faec,DAT_8c09fae8);
          }
          if (in_FPSCR_PR == '\0' && SUB84(dVar13,0) < (float)((ulonglong)dVar13 >> 0x20)) {
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(DAT_8c09fae8,
                                        *(undefined4 *)((int)puVar10 + DAT_8c09fae0 + -0x144));
            }
            else {
              in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c09fae0 + -0x144);
              dVar13 = (double)CONCAT44(PTR_FUN_8c09faec,DAT_8c09fae8);
            }
            if (in_FPSCR_PR == '\0' && SUB84(dVar13,0) < (float)((ulonglong)dVar13 >> 0x20)) {
              if (in_FPSCR_SZ == '\0') {
                in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                           *(undefined4 *)((int)puVar10 + DAT_8c09fa8c + -0x144));
                dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c09fae0 + -0x144),
                                          SUB84(dVar13,0));
              }
              else {
                dVar13 = *(double *)((int)puVar10 + DAT_8c09fae0 + -0x144);
              }
              if (in_FPSCR_PR == '\0') {
                in_dr14 = (double)(ulonglong)
                                  (uint)(SUB84(in_dr14,0) + (float)((ulonglong)dVar13 >> 0x20));
              }
              else {
                in_dr14 = in_dr14 + dVar13;
              }
            }
          }
          uVar9 = SUB84(dVar13,0);
          (*(code *)PTR_Vec3_dtor_8c09faa4)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fac4 + -0x144),0xffffffff,a6_00,uVar1);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c09fae4,uVar9);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c09fae8,DAT_8c09fae4);
        }
        if (SUB84(in_dr14,0) == (float)((ulonglong)dVar13 >> 0x20)) {
          (*(code *)PTR_Vec3_ctor_copy_8c09fb74)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fb70 + -0x144),ar6[5] + 0x10,a6_00,uVar1)
          ;
          uVar2 = SUB84(dVar13,0);
          (*(code *)PTR_Vec3_assign_wrap_063818_8c09fb78)
                    (ar4,(undefined1 *)((int)puVar10 + DAT_8c09fb70 + -0x144),a6_00,uVar1);
          (*(code *)PTR_Vec3_dtor_8c09fb7c)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fb70 + -0x144),0xffffffff,a6_00,uVar1);
          (*(code *)PTR_Vec3_ctor_copy_8c09fb74)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fb80 + -0x144),ar6[5] + 0x10,a6_00,uVar1)
          ;
          (*(code *)PTR_Vec3_assign_wrap_05f640_8c09fb84)
                    (ar4,(undefined1 *)((int)puVar10 + DAT_8c09fb80 + -0x144),a6_00,uVar1);
          piVar8 = (int *)0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c09fb7c)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fb80 + -0x144),0xffffffff,a6_00,uVar1);
          if (in_FPSCR_SZ == '\0') {
            ar4[0xc] = (int)DAT_8c09fb88;
            dVar13 = (double)CONCAT44(DAT_8c09fb88._4_4_,uVar2);
            ar4[0x1e] = DAT_8c09fb88._4_4_;
          }
          else {
            *(ulonglong *)(ar4 + 0xc) = CONCAT44(DAT_8c09fb88._4_4_,(int)DAT_8c09fb88);
            dVar13 = (double)CONCAT44(uRam8c09fb90,DAT_8c09fb88._4_4_);
            *(double *)(ar4 + 0x1e) = dVar13;
          }
          ar4[1] = 8;
          ar4[0x10] = 3;
          ar4[2] = 0x55;
          ar4[3] = 0;
        }
        else {
          ar4[1] = 0xb;
          ar4[0x10] = 3;
          ar4[2] = 0x55;
          ar4[3] = 0;
          (*(code *)PTR_FUN_8c09faec)(ar4,ar5,a6_00,uVar1);
          piVar8 = DAT_8c09faf0;
          (*(code *)PTR_FUN_8c09faf4)(ar4,DAT_8c09faf0,a6_00,uVar1);
        }
        break;
      case 6:
        *(undefined4 *)((int)puVar10 + -0x130) = 5;
        *(undefined4 *)(DAT_8c09fc9c + (int)ar4) = *(undefined4 *)((int)puVar10 + -0x130);
        ar4[0x10] = *(int *)((int)puVar10 + -0x130);
        *(undefined4 *)(PTR_DAT_8c09fca0 + DAT_8c09fca4) = 5;
        ar4[1] = 0xd;
        ar4[2] = 0x5f;
        piVar8 = (int *)0x0;
        ar4[3] = 0;
      }
      piVar6 = (int *)0x0;
      *(undefined1 *)(DAT_8c09fca8 + (int)ar4) = 0;
    }
  }
  if ((ar4[1] == 0) && (ar4[1] != 1)) {
    uVar2 = (*(code *)PTR_rand_8c09fcac)(piVar6,piVar8,a6_00,uVar1);
    *(undefined4 *)((int)puVar10 + -0xf0) = uVar2;
    uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09fcb4)
                      (*(undefined4 *)((int)puVar10 + -0xf0),DAT_8c09fcb0,a6_00,uVar1);
    *(undefined4 *)((int)puVar10 + -0x134) = uVar2;
    if (*(int *)((int)puVar10 + -0x134) < 1) {
      *(undefined4 *)((int)puVar10 + -0x138) = 9;
      *(undefined4 *)(DAT_8c09fc9c + (int)ar4) = *(undefined4 *)((int)puVar10 + -0x138);
      ar4[0x10] = *(int *)((int)puVar10 + -0x138);
      *(undefined4 *)(PTR_DAT_8c09fca0 + DAT_8c09fca4) = 9;
      ar4[1] = 0xd;
      ar4[2] = 0x4b;
      ar4[3] = 0;
      uVar2 = 2;
      (*(code *)PTR_FUN_8c09fcb8)(ar6[3],0,2,uVar1);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar10 + -0xf4) = (int)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(DAT_8c09fcbc,*(undefined4 *)((int)puVar10 + -0xf4));
      }
      else {
        *(double *)((int)puVar10 + -0xf4) = dVar13;
        in_xd0 = *(undefined8 *)((int)puVar10 + -0xf4);
        dVar13 = (double)CONCAT44(PTR_FUN_8c09fcc0,DAT_8c09fcbc);
      }
      if (SUB84(dVar13,0) == (float)((ulonglong)dVar13 >> 0x20)) {
        (*(code *)PTR_FUN_8c09fcc0)(ar4,ar5,uVar2,uVar1);
        (*(code *)PTR_FUN_8c09fcc4)(ar6[3],0,0,uVar1);
        (*(code *)PTR_FUN_8c09fcc4)(ar6[3],0,1,uVar1);
        a6_00 = (int *)0x2;
        (*(code *)PTR_FUN_8c09fcc4)(ar6[3],0,2,uVar1);
      }
      else {
        (*(code *)PTR_FUN_8c09fdb4)(ar6[3],0,0,uVar1);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + -0xf8) = (int)((ulonglong)dVar13 >> 0x20);
          uVar14 = CONCAT44(*(int *)((int)puVar10 + -0xf8),SUB84(dVar13,0));
          ar4[10] = *(int *)((int)puVar10 + -0xf8);
        }
        else {
          *(double *)((int)puVar10 + -0xf8) = dVar13;
          uVar14 = *(undefined8 *)((int)puVar10 + -0xf8);
          *(undefined8 *)(ar4 + 10) = uVar14;
        }
        uVar9 = 1;
        uVar2 = 0;
        iVar3 = ar6[3];
        (*(code *)PTR_FUN_8c09fdb4)(iVar3,0,1,uVar1);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + -0xfc) = (int)((ulonglong)uVar14 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar10 + -0xfc) = uVar14;
        }
        uVar2 = (*(code *)PTR_rand_8c09fdb8)(iVar3,uVar2,uVar9,uVar1);
        fVar11 = (float)uVar14;
        *(undefined4 *)((int)puVar10 + -0x100) = uVar2;
        uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09fdc0)
                          (*(undefined4 *)((int)puVar10 + -0x100),DAT_8c09fdbc,uVar9,uVar1);
        *(undefined4 *)((int)puVar10 + -0x13c) = uVar2;
        if (in_FPSCR_SZ == '\0') {
          fVar11 = *(float *)((int)puVar10 + -0xfc);
        }
        else {
          in_xd0 = *(undefined8 *)((int)puVar10 + -0xfc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = fVar11 + (float)*(int *)((int)puVar10 + -0x13c);
        }
        else {
          dVar13 = (double)*(int *)((int)puVar10 + -0x13c);
          fVar11 = SUB84(dVar13 + dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c09fdc4,fVar11);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c09fdc8,DAT_8c09fdc4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar11,SUB84(dVar13,0) - fVar11);
        }
        else {
          dVar13 = dVar13 - dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          ar4[0xb] = SUB84(dVar13,0);
        }
        else {
          *(undefined8 *)(ar4 + 0xb) = in_xd0;
        }
        a6_00 = (int *)0x2;
        uVar2 = 0;
        iVar3 = ar6[3];
        (*(code *)PTR_FUN_8c09fdb4)(iVar3,0,2,uVar1);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + -0x104) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar10 + -0x104) = dVar13;
        }
        uVar2 = (*(code *)PTR_rand_8c09fdb8)(iVar3,uVar2,a6_00,uVar1);
        fVar11 = SUB84(dVar13,0);
        *(undefined4 *)((int)puVar10 + -0x108) = uVar2;
        uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c09fdc0)
                          (*(undefined4 *)((int)puVar10 + -0x108),DAT_8c09fdbc,a6_00,uVar1);
        *(undefined4 *)((int)puVar10 + -0x140) = uVar2;
        if (in_FPSCR_SZ == '\0') {
          fVar11 = *(float *)((int)puVar10 + -0x104);
        }
        else {
          in_xd0 = *(undefined8 *)((int)puVar10 + -0x104);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = fVar11 + (float)*(int *)((int)puVar10 + -0x140);
        }
        else {
          dVar13 = (double)*(int *)((int)puVar10 + -0x140);
          fVar11 = SUB84(dVar13 + dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c09fdc4,fVar11);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c09fdc8,DAT_8c09fdc4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar11,SUB84(dVar13,0) - fVar11);
        }
        else {
          dVar13 = dVar13 - dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          ar4[0xc] = SUB84(dVar13,0);
        }
        else {
          *(undefined8 *)(ar4 + 0xc) = in_xd0;
        }
      }
    }
  }
  if (*(char *)(DAT_8c09fdc8 + (int)ar4) == '\0') {
    iVar3 = *(int *)(*ar6 + 8);
    uVar2 = (**(code **)(DAT_8c09fdcc + iVar3))(*ar6,iVar3,a6_00,uVar1);
    *(undefined4 *)((int)puVar10 + -0x10c) = uVar2;
    if (*(int *)((int)puVar10 + -0x10c) == 1) {
      ar4[0x10] = 0xb;
      *(undefined4 *)(PTR_DAT_8c09fdd0 + DAT_8c09fdd4) = 0xb;
      ar4[1] = 0xd;
      ar4[2] = 0x5f;
      ar4[3] = 0;
    }
    else {
      *(undefined1 *)(DAT_8c09fde4 + (int)ar4) = 1;
    }
  }
  else if (*(char *)(DAT_8c09fea0 + (int)ar4) == '\x01') {
    ar4[0x10] = 0xc;
    *(undefined4 *)(PTR_DAT_8c09fea4 + DAT_8c09fea8) = 0xc;
    ar4[1] = 0xd;
    ar4[2] = 0x5f;
    ar4[3] = 0;
  }
  piVar6 = ar6;
  (*(code *)PTR_FUN_8c09feac)(ar4,ar6,a6_00,uVar1);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + -0x110) = (int)((ulonglong)dVar13 >> 0x20);
  }
  else {
    *(double *)((int)puVar10 + -0x110) = dVar13;
  }
  (*(code *)PTR_FUN_8c09feb0)(ar6[2],piVar6,a6_00,uVar1);
  uVar2 = (*(code *)PTR_get_field_124_027930_8c09feb4)(ar6[2],piVar6,a6_00,uVar1);
  *(undefined4 *)((int)puVar10 + -0x114) = uVar2;
  uVar2 = (*(code *)PTR_get_field_40_05eea0_8c09feb8)(ar4,piVar6,a6_00,uVar1);
  *(undefined4 *)((int)puVar10 + -0x118) = uVar2;
  if (*(int *)((int)puVar10 + -0x114) != *(int *)((int)puVar10 + -0x118)) {
    uVar2 = (*(code *)PTR_get_field_40_05eea0_8c09feb8)(ar4,piVar6,a6_00,uVar1);
    *(undefined4 *)((int)puVar10 + -0x11c) = uVar2;
    a6_00 = (int *)0x1;
    (*(code *)PTR_FUN_8c09febc)(ar6[2],*(undefined4 *)((int)puVar10 + -0x11c),1,uVar1);
  }
  *(undefined1 *)(DAT_8c09fec0 + (int)ar4) = 4;
  *(undefined1 *)(DAT_8c09fec4 + (int)ar4) = 0;
  (*(code *)PTR_Vec3_dtor_8c09fecc)
            ((undefined1 *)((int)puVar10 + DAT_8c09fec8 + -0x144),0xffffffff,a6_00,uVar1);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c09fecc)
                    ((undefined1 *)((int)puVar10 + DAT_8c09fed0 + -0x144),0xffffffff,a6_00,
                     (undefined1 *)((int)puVar10 + DAT_8c09fed0 + -0x144));
  return uVar1;
}



/* FUN_8c09fed4 @ 8c09fed4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09fed4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)(short)ar6 << 2;
}



/* FUN_8c09fef8 @ 8c09fef8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09fef8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  puVar1 = (undefined8 *)((short)ar5 * 0xc + ar4 + (short)ar6 * 4 + 0x14);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar1 = in_fr4;
  }
  else {
    *puVar1 = CONCAT44(in_fr4,in_fr5);
  }
  return (short)ar6 * 4;
}



/* FUN_8c09ff1c @ 8c09ff1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ff1c(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  undefined4 a5;
  int *a6;
  
  a5 = ar5;
  a6 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c0a001c + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (*(code *)PTR_FUN_8c0a0020)(ar4,ar5,ar6,ar7);
    a5 = 1;
    (*(code *)PTR_FUN_8c0a0024)(ar4,1,a6,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    (*(code *)PTR_FUN_8c0a0024)(ar4,3,a6,ar7);
  }
  else if (iVar1 == 3) {
    if (*(int *)(ar4 + 4) == 0xb) {
      (*(code *)PTR_FUN_8c0a0038)(ar4,ar5,a6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c0a0024)(ar4,3,a6,ar7);
      (*(code *)PTR_FUN_8c0a003c)(ar4,ar5,a6,ar7);
    }
  }
  else if (iVar1 == 6) {
    iVar1 = (**(code **)(DAT_8c0a0028 + *(int *)(*ar6 + 8)))(*ar6,a5,a6,ar7);
    if (iVar1 == 1) {
      iVar1 = *ar6;
      (*(code *)PTR_FUN_8c0a002c)(iVar1,a5,a6,ar7);
      (*(code *)PTR_FUN_8c0a0030)(iVar1,a5,a6,ar7);
    }
  }
  else if (((iVar1 == 10) && (iVar1 = (*(code *)PTR_FUN_8c0a0034)(ar6[1],a5,a6,ar7), iVar1 != 0)) &&
          (iVar1 == 1)) {
    *(undefined4 *)(ar4 + 0x40) = 0xe;
  }
  return 1;
}


