/* Seaman (USA) region 0x8c0b0000-0x8c0c0000 (Ghidra decompiler) */

/* FUN_8c0b0784 @ 8c0b0784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b0784(int ar4,undefined4 ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a6;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int *piStack_84;
  int aiStack_80 [4];
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined8 uStack_54;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  int aiStack_38 [4];
  int aiStack_28 [5];
  
  iVar4 = 1;
  piStack_84 = aiStack_38;
  a6 = ar6;
  piVar3 = ar7;
  (*(code *)PTR_FUN_8c0b0a64)(ar5,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0b0a68)(aiStack_28,aiStack_38,a6,piVar3);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0b0a6c)(aiStack_38,0xffffffff,a6,piVar3);
  switch(*(undefined4 *)(DAT_8c0b0a70 + ar4)) {
  case 0:
    if (*(int *)(DAT_8c0b0a74 + ar4) == 1) {
      piStack_84 = ar7;
      a6 = aiStack_28;
      iVar4 = (*(code *)PTR_FUN_8c0b0a7c)
                        (ar4,*(undefined4 *)((int)&piStack_84 + DAT_8c0b0a78),a6,ar6);
      piVar3 = ar6;
      iStack_44 = iVar4;
    }
    else if (*(int *)(DAT_8c0b0a80 + ar4) == 0) {
      iVar4 = (*(code *)PTR_FUN_8c0b0a84)(ar4,uVar2,a6,piVar3);
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0b0a88,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = (double)CONCAT44(PTR_rand_range_8c0b0a8c,DAT_8c0b0a88);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      aiStack_80[3] = ar4;
      iStack_48 = iVar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      piStack_84 = ar7;
      a6 = aiStack_28;
      iVar4 = (*(code *)PTR_FUN_8c0b0a7c)
                        (ar4,*(undefined4 *)((int)&piStack_84 + DAT_8c0b0a78),a6,ar6);
      piVar3 = ar6;
      iStack_4c = iVar4;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(DAT_8c0b0a74 + ar4) = 0;
      a6 = (int *)0x64;
      iVar1 = (*(code *)PTR_rand_range_8c0b0a8c)(ar4,0,100,piVar3);
      uStack_54 = CONCAT44(iVar1,(undefined4)uStack_54);
      if (iVar1 < 0x50) {
        *(undefined4 *)(DAT_8c0b0a80 + ar4) = 0;
      }
      else {
        *(undefined4 *)(DAT_8c0b0a80 + ar4) = 1;
      }
    }
    break;
  case 1:
    (**(code **)(DAT_8c0b0a94 + *ar7))
              (ar7,*(undefined4 *)((int)aiStack_80 + DAT_8c0b0a90),a6,piVar3);
    if (in_FPSCR_SZ == '\0') {
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      uStack_54 = CONCAT44(uStack_54._4_4_,uVar2);
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
    }
    else {
      uStack_54 = in_dr0;
      uStack_40 = in_dr0;
    }
    piStack_84 = (int *)&uStack_40;
    a6 = aiStack_28;
    iVar4 = (*(code *)PTR_FUN_8c0b0a98)(ar4,*(undefined4 *)((int)&piStack_84 + DAT_8c0b0a78),a6,ar6)
    ;
    piVar3 = ar6;
    iStack_58 = iVar4;
    break;
  case 2:
    *(undefined4 *)(DAT_8c0b0a9c + ar4) = 0;
    iVar4 = (*(code *)PTR_FUN_8c0b0aa0)
                      (ar4,*(undefined4 *)((int)aiStack_80 + DAT_8c0b0a90),ar5,piVar3);
    iStack_5c = iVar4;
    a6 = *(int **)((int)aiStack_80 + DAT_8c0b0a90);
    (*(code *)PTR_FUN_8c0b0aa4)(ar4,aiStack_28,a6,piVar3);
    break;
  case 3:
    if (0 < *(int *)(DAT_8c0b0aa8 + ar4)) {
      *(undefined4 *)(DAT_8c0b0a9c + ar4) = 0;
    }
    piStack_84 = ar7;
    a6 = *(int **)((int)&piStack_84 + DAT_8c0b0aac);
    iVar4 = (*(code *)PTR_FUN_8c0b0ab0)(ar4,*(undefined4 *)((int)&piStack_84 + DAT_8c0b0a78),a6,ar6)
    ;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0b0a88,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = (double)CONCAT44(PTR_rand_range_8c0b0a8c,DAT_8c0b0a88);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    piVar3 = ar6;
    aiStack_80[2] = ar4;
    iStack_60 = iVar4;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
    }
    break;
  case 4:
    piStack_84 = ar7;
    piVar3 = *(int **)((int)&piStack_84 + DAT_8c0b0aac);
    a6 = *(int **)((int)&piStack_84 + DAT_8c0b0a78);
    iVar4 = (*(code *)PTR_FUN_8c0b0ab4)(ar4,ar5,a6,piVar3);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0b0a88,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = (double)CONCAT44(PTR_rand_range_8c0b0a8c,DAT_8c0b0a88);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    aiStack_80[1] = ar4;
    iStack_64 = iVar4;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
    }
    break;
  case 5:
    *(undefined4 *)(DAT_8c0b0a9c + ar4) = 0;
    iVar4 = (*(code *)PTR_FUN_8c0b0ab8)(ar4,uVar2,a6,piVar3);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0b0a88,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = (double)CONCAT44(PTR_rand_range_8c0b0a8c,DAT_8c0b0a88);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    aiStack_80[0] = ar4;
    iStack_68 = iVar4;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
    }
    break;
  case 6:
    *(undefined4 *)(DAT_8c0b0a9c + ar4) = 0;
    iVar4 = (*(code *)PTR_FUN_8c0b0ad0)(ar4,uVar2,a6,piVar3);
    iStack_70 = iVar4;
    break;
  case 7:
    *(undefined4 *)(DAT_8c0b0a9c + ar4) = 0;
    if (*(int *)(DAT_8c0b0aa8 + ar4) < 2) {
      a6 = *(int **)((int)aiStack_80 + DAT_8c0b0a78);
      iVar4 = (*(code *)PTR_FUN_8c0b0abc)
                        (ar4,*(undefined4 *)((int)aiStack_80 + DAT_8c0b0a90),a6,ar7);
      piVar3 = ar7;
      iStack_6c = iVar4;
    }
    else {
      iVar4 = 0;
    }
    break;
  case 8:
    *(undefined4 *)(DAT_8c0b0a9c + ar4) = 0;
    piVar3 = (int *)0x0;
    a6 = (int *)0xffffffff;
    uVar2 = 5;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0b0ac8)(ar4 + DAT_8c0b0ac0._4_4_,5,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0b0acc)(ar4 + DAT_8c0b0ac0._4_4_,uVar2,a6,piVar3);
  }
  uStack_40._4_4_ = iVar4;
  (*(code *)PTR_Vec3_dtor_8c0b0a6c)(aiStack_28,0xffffffff,a6,piVar3);
  return uStack_40._4_4_;
}



/* FUN_8c0b0ad4 @ 8c0b0ad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b0ad4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float in_fr1;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_90;
  float fStack_58;
  float fStack_54;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  uVar3 = 1;
  iVar1 = *(int *)(DAT_8c0b0afc + ar4);
  if (iVar1 == 0) {
    ar6 = 100;
    iVar1 = (*(code *)PTR_rand_range_8c0b0b20)(ar4,0,100,ar7);
    if (iVar1 < 0x1e) {
      *(undefined4 *)(DAT_8c0b0b24 + ar4) = 0;
    }
    else if (iVar1 < 0x3c) {
      *(undefined4 *)(DAT_8c0b0b38 + ar4) = 1;
    }
    else if (iVar1 < 0x46) {
      *(undefined4 *)(DAT_8c0b0b4c + ar4) = 2;
    }
    else if (iVar1 < 0x5a) {
      *(undefined4 *)(DAT_8c0b0b60 + ar4) = 4;
    }
    else {
      *(undefined4 *)(DAT_8c0b0b9c + ar4) = 3;
    }
    *(int *)(DAT_8c0b0ba0 + ar4) = *(int *)(DAT_8c0b0ba0 + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c0b0ca4)(ar4 + DAT_8c0b0ca0,ar5,ar6,ar7);
    switch(uVar2) {
    case 3:
    case 4:
      iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b0da4)
                        (ar4 + DAT_8c0b0da0,ar5,ar6,ar7);
      if (iVar1 == 7) {
        uVar3 = 0;
        *(undefined4 *)(DAT_8c0b0da8 + ar4) = 0;
      }
      break;
    default:
      iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b0ec0)
                        (ar4 + DAT_8c0b0ebc,ar5,ar6,ar7);
      if (iVar1 == 7) {
        uVar3 = 0;
        *(undefined4 *)(DAT_8c0b0ec4 + ar4) = 0;
      }
      break;
    case 6:
      iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b0d64)
                        (ar4 + DAT_8c0b0d60,ar5,ar6,ar7);
      if (iVar1 == 7) {
        uVar3 = 0;
        *(undefined4 *)(DAT_8c0b0d68 + ar4) = 0;
      }
      break;
    case 7:
      iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b0ce4)(ar4 + DAT_8c0b0ce0,ar5,ar6,ar7)
      ;
      if (iVar1 == 1) {
        uVar3 = 0;
        *(undefined4 *)(DAT_8c0b0ce8 + ar4) = 0;
      }
      break;
    case 8:
      iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b0d24)
                        (ar4 + DAT_8c0b0d20,ar5,ar6,ar7);
      if (iVar1 == 7) {
        uVar3 = 0;
        *(undefined4 *)(DAT_8c0b0d28 + ar4) = 0;
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0b0ed0)(ar4 + DAT_8c0b0ecc,ar4 + DAT_8c0b0ec8,ar6,ar7);
    if (iVar1 == 0) {
      return uVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(float *)(ar4 + DAT_8c0b0ed4);
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + DAT_8c0b0ed4);
    }
    if (in_FPSCR_PR == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
    }
    uStack_90 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_90 = CONCAT44(ar4,in_fr1);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(uStack_90._4_4_ + DAT_8c0b0ed4) = (undefined4)uStack_90;
      uStack_90 = uStack_90 & 0xffffffff;
    }
    else {
      *(ulonglong *)(uStack_90._4_4_ + DAT_8c0b0ed4) = uStack_90;
      in_xd0 = uStack_90;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0b0ed8),(int)uStack_90);
    }
    else {
      dVar6 = *(double *)(ar4 + DAT_8c0b0ed8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 / dVar6,0);
    }
    fStack_54 = fVar4;
    if (in_FPSCR_SZ != '\0') {
      fStack_54 = (float)in_xd0;
      auStack_50[0] = (undefined4)(in_xd0 >> 0x20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(1.0 - fVar4,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4);
    }
    fVar4 = (float)((ulonglong)dVar6 >> 0x20);
    fStack_58 = fVar4;
    if (in_FPSCR_SZ != '\0') {
      fStack_58 = SUB84(dVar6,0);
      fStack_54 = fVar4;
    }
    (*(code *)PTR_Vec3_scale_8c0b0edc)(ar4 + DAT_8c0b0ecc,&fStack_58,ar6,ar7);
    (*(code *)PTR_Vec3_scale_8c0b0edc)(ar4 + DAT_8c0b0ec8,&fStack_54,ar6,ar7);
    (*(code *)PTR_Vec3_add_8c0b0ee0)(auStack_30,auStack_40,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b0ee4)(ar4 + DAT_8c0b0ecc,auStack_50,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0ee8)(auStack_50,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0ee8)(auStack_40,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0ee8)(auStack_30,0xffffffff,ar6,ar7);
    return uVar3;
  }
  uVar3 = *(undefined4 *)(DAT_8c0b0b9c + ar4);
  iVar1 = (*(code *)PTR_FUN_8c0b0ba8)(ar4 + DAT_8c0b0ba4,uVar3,ar6,ar7);
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b0c38)(ar4 + DAT_8c0b0c34,uVar3,ar6,ar7);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c0b0c40,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c0b0c3c) = DAT_8c0b0c40;
  }
  else {
    uVar5 = CONCAT44(PTR_FUN_8c0b0c44,DAT_8c0b0c40);
    *(undefined8 *)(ar4 + DAT_8c0b0c3c) = uVar5;
  }
  uVar2 = (undefined4)uVar5;
  (*(code *)PTR_FUN_8c0b0c44)(ar4,uVar3,ar6,ar7);
  *(int *)(DAT_8c0b0c48 + ar4) = *(int *)(DAT_8c0b0c48 + ar4) + 1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0b0c4c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0b0c4c) = CONCAT44(0x3f800000,uVar2);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0b0c50) = DAT_8c0b0c54;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0b0c50) = CONCAT44(DAT_8c0b0c58,DAT_8c0b0c54);
  }
  (*(code *)PTR_FUN_8c0b0c5c)(ar4 + DAT_8c0b0c58,uVar3,ar6,ar7);
  uVar3 = (*(code *)PTR_Vec3_length_8c0b0c60)(auStack_20,uVar3,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0b0c68)(ar4 + DAT_8c0b0c64,uVar3,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b0c6c)(auStack_20,0xffffffff,ar6,ar7);
  return 1;
}



/* FUN_8c0b0eec @ 8c0b0eec callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b0eec(int ar4,float *ar5,float *ar6,int ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 a5;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined *a5_00;
  int a7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 uVar6;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int *a5_01;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar7;
  float fVar8;
  ulonglong in_dr0;
  float fVar12;
  undefined8 uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar7 = auStack_4;
  }
  else {
    puVar7 = auStack_8;
  }
  *(undefined4 *)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar7 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar7 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar7 + -0x1c) = in_PR;
  *(float **)(puVar7 + -0x20c) = ar6;
  uVar6 = 1;
  pfVar4 = ar5;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c0b0f5c)(puVar7 + DAT_8c0b0f58 + -0x20c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0b0f5c)(puVar7 + DAT_8c0b0f60 + -0x20c,pfVar4,ar6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0b0f5c)(puVar7 + DAT_8c0b0f64 + -0x20c,pfVar4,ar6,a7);
  switch(*(undefined4 *)(DAT_8c0b0f68 + ar4)) {
  case 0:
    uVar5 = 0xc;
    uVar1 = (*(code *)PTR_FUN_8c0b0fbc)(ar4 + DAT_8c0b0fb8,0xc,ar6,a7);
    *(undefined4 *)(puVar7 + DAT_8c0b0fc0 + -0x20c) = uVar1;
    if (*(int *)(puVar7 + DAT_8c0b0fc0 + -0x20c) != 1) {
      if (*(int *)(puVar7 + DAT_8c0b0fc0 + -0x20c) != 2) break;
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b0ffc)(ar4 + DAT_8c0b0ff8,uVar5,ar6,a7);
    }
    *(int *)(puVar7 + -0x1e4) = ar4;
    *(int *)(DAT_8c0b1000 + *(int *)(puVar7 + -0x1e4)) =
         *(int *)(DAT_8c0b1000 + *(int *)(puVar7 + -0x1e4)) + 1;
    (*(code *)PTR_Vec3_assign_8c0b1008)(ar4 + 0x14,ar4 + DAT_8c0b1004,ar6,a7);
    break;
  case 1:
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *ar5;
      fVar12 = DAT_8c0b1050;
    }
    else {
      in_xd0 = *(undefined8 *)ar5;
      fVar8 = DAT_8c0b1050;
      fVar12 = DAT_8c0b1054;
    }
    if (in_FPSCR_PR == '\0' && fVar12 < fVar8) {
      (*(code *)PTR_Vec3_ctor_xyz_8c0b1238)
                (puVar7 + DAT_8c0b1234 + -0x20c,PTR_Vec3_ctor_xyz_8c0b1238,ar6,a7);
      (*(code *)PTR_Vec3_assign_8c0b1240)(ar4 + DAT_8c0b123c,puVar7 + DAT_8c0b1234 + -0x20c,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c0b1244)(puVar7 + DAT_8c0b1234 + -0x20c,0xffffffff,ar6,a7);
    }
    else {
      (*(code *)PTR_Vec3_ctor_xyz_8c0b1064)(puVar7 + DAT_8c0b1060 + -0x20c,pfVar4,ar6,a7);
      (*(code *)PTR_Vec3_assign_8c0b106c)(ar4 + DAT_8c0b1068,puVar7 + DAT_8c0b1060 + -0x20c,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c0b1070)(puVar7 + DAT_8c0b1060 + -0x20c,0xffffffff,ar6,a7);
    }
    (*(code *)PTR_FUN_8c0b124c)(ar4,DAT_8c0b1248,ar6,a7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    in_dr0 = (ulonglong)(uint)fVar8;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = in_dr0;
    }
    *(int *)(puVar7 + -0x1e8) = ar4;
    *(int *)(DAT_8c0b1250 + *(int *)(puVar7 + -0x1e8)) =
         *(int *)(DAT_8c0b1250 + *(int *)(puVar7 + -0x1e8)) + 1;
  case 2:
    if (in_FPSCR_SZ == '\0') {
      uVar9 = CONCAT44(DAT_8c0b1254,(int)in_dr0);
      *(undefined4 *)(ar4 + 0x28) = DAT_8c0b1254;
    }
    else {
      uVar9 = CONCAT44(DAT_8c0b1258,DAT_8c0b1254);
      *(undefined8 *)(ar4 + 0x28) = uVar9;
    }
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b125c)
              (ar4 + DAT_8c0b1258,PTR_CAnimBody_AdvanceFrame_wrapper_8c0b125c,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1260 + -0x20c;
    pfVar4 = ar5;
    (*(code *)PTR_Vec3_sub_8c0b1264)(ar4 + DAT_8c0b123c,ar5,ar6,a7);
    uVar1 = (*(code *)PTR_Vec3_length_8c0b1268)(puVar7 + DAT_8c0b1260 + -0x20c,pfVar4,ar6,a7);
    *(undefined4 *)(puVar7 + -400) = uVar1;
    (*(code *)PTR_Vec3_assign_8c0b1240)
              (puVar7 + DAT_8c0b126c + -0x20c,*(undefined4 *)(puVar7 + -400),ar6,a7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b1244)(puVar7 + DAT_8c0b1260 + -0x20c,0xffffffff,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1270 + -0x20c;
    (*(code *)PTR_FUN_8c0b1274)(ar4 + 0x14,uVar1,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1278 + -0x20c;
    (*(code *)PTR_FUN_8c0b1274)(puVar7 + DAT_8c0b127c + -0x210,uVar1,ar6,a7);
    (*(code *)PTR_FUN_8c0b1280)
              (puVar7 + DAT_8c0b1270 + -0x20c,puVar7 + DAT_8c0b1278 + -0x20c,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0x194) = (int)((ulonglong)uVar9 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar7 + -0x194) = uVar9;
    }
    (*(code *)PTR_Vec3_dtor_8c0b1244)(puVar7 + DAT_8c0b1278 + -0x20c,0xffffffff,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0b1244)(puVar7 + DAT_8c0b1270 + -0x20c,0xffffffff,ar6,a7);
    (*(code *)PTR_FUN_8c0b1284)(ar5,ar4 + DAT_8c0b123c,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0x198) = (int)((ulonglong)uVar9 >> 0x20);
      dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)(puVar7 + -0x198));
    }
    else {
      *(undefined8 *)(puVar7 + -0x198) = uVar9;
      in_xd0 = *(undefined8 *)(puVar7 + -0x198);
      dVar11 = *(double *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar8;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    uVar1 = (*(code *)PTR_FUN_8c0b1288)(ar4,ar4 + DAT_8c0b123c,ar5,a7);
    iVar3 = DAT_8c0b1250;
    *(undefined4 *)(puVar7 + -0x19c) = uVar1;
    if (*(int *)(puVar7 + -0x19c) == 0) {
      *(int *)(puVar7 + -0x1ec) = ar4;
      *(int *)(DAT_8c0b1250 + *(int *)(puVar7 + -0x1ec)) =
           *(int *)(DAT_8c0b1250 + *(int *)(puVar7 + -0x1ec)) + 1;
      *(undefined4 *)(ar4 + 0x40) = 0;
      a7 = iVar3;
    }
    ar6 = (float *)0x1e;
    uVar1 = (*(code *)PTR_rand_range_8c0b128c)(ar4,0,0x1e,a7);
    *(undefined4 *)(puVar7 + -0x1a0) = uVar1;
    if (*(int *)(puVar7 + -0x1a0) == 0) {
      *(undefined4 *)(DAT_8c0b1290 + ar4) = 1;
      (*(code *)PTR_FUN_8c0b1294)(ar4,0xb,ar5,ar7);
      ar6 = ar5;
      a7 = ar7;
    }
    (*(code *)PTR_Vec3_assign_8c0b1240)(ar4 + DAT_8c0b1298,ar4 + 0x14,ar6,a7);
    break;
  case 3:
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *ar5;
      fVar12 = DAT_8c0b12e4;
    }
    else {
      in_xd0 = *(undefined8 *)ar5;
      fVar8 = DAT_8c0b12e4;
      fVar12 = DAT_8c0b12e8;
    }
    if (in_FPSCR_PR == '\0' && fVar12 < fVar8) {
      (*(code *)PTR_Vec3_ctor_xyz_8c0b14c8)(puVar7 + DAT_8c0b14c4 + -0x20c,pfVar4,ar6,a7);
      (*(code *)PTR_Vec3_assign_8c0b14d0)(ar4 + DAT_8c0b14cc,puVar7 + DAT_8c0b14c4 + -0x20c,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c0b14d4)(puVar7 + DAT_8c0b14c4 + -0x20c,0xffffffff,ar6,a7);
    }
    else {
      (*(code *)PTR_Vec3_ctor_xyz_8c0b12f8)
                (puVar7 + DAT_8c0b12f4 + -0x20c,PTR_Vec3_ctor_xyz_8c0b12f8,ar6,a7);
      (*(code *)PTR_Vec3_assign_8c0b1300)(ar4 + DAT_8c0b12fc,puVar7 + DAT_8c0b12f4 + -0x20c,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c0b1304)(puVar7 + DAT_8c0b12f4 + -0x20c,0xffffffff,ar6,a7);
    }
    (*(code *)PTR_FUN_8c0b14dc)(ar4,DAT_8c0b14d8,ar6,a7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    pfVar4 = (float *)(ar4 + 0x2c);
    in_dr0 = (ulonglong)(uint)fVar8;
    if (in_FPSCR_SZ == '\0') {
      *pfVar4 = 0.0;
    }
    else {
      *(ulonglong *)pfVar4 = in_dr0;
    }
    *(int *)(puVar7 + -0x1f0) = ar4;
    *(int *)(DAT_8c0b14e0 + *(int *)(puVar7 + -0x1f0)) =
         *(int *)(DAT_8c0b14e0 + *(int *)(puVar7 + -0x1f0)) + 1;
  case 4:
    if (in_FPSCR_SZ == '\0') {
      uVar9 = CONCAT44(DAT_8c0b14e4,(int)in_dr0);
      *(undefined4 *)(ar4 + 0x28) = DAT_8c0b14e4;
    }
    else {
      uVar9 = CONCAT44(DAT_8c0b14e8,DAT_8c0b14e4);
      *(undefined8 *)(ar4 + 0x28) = uVar9;
    }
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b14ec)(ar4 + DAT_8c0b14e8,pfVar4,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b14f0 + -0x20c;
    pfVar4 = ar5;
    (*(code *)PTR_Vec3_sub_8c0b14f4)(ar4 + DAT_8c0b14cc,ar5,ar6,a7);
    uVar1 = (*(code *)PTR_Vec3_length_8c0b14f8)(puVar7 + DAT_8c0b14f0 + -0x20c,pfVar4,ar6,a7);
    *(undefined4 *)(puVar7 + -0x1a4) = uVar1;
    (*(code *)PTR_Vec3_assign_8c0b14d0)
              (puVar7 + DAT_8c0b14fc + -0x20c,*(undefined4 *)(puVar7 + -0x1a4),ar6,a7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b14d4)(puVar7 + DAT_8c0b14f0 + -0x20c,0xffffffff,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1500 + -0x20c;
    (*(code *)PTR_FUN_8c0b1504)(ar4 + 0x14,uVar1,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1508 + -0x20c;
    (*(code *)PTR_FUN_8c0b1504)(puVar7 + DAT_8c0b150c + -0x210,uVar1,ar6,a7);
    (*(code *)PTR_FUN_8c0b1510)
              (puVar7 + DAT_8c0b1500 + -0x20c,puVar7 + DAT_8c0b1508 + -0x20c,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0x1a8) = (int)((ulonglong)uVar9 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar7 + -0x1a8) = uVar9;
    }
    (*(code *)PTR_Vec3_dtor_8c0b14d4)(puVar7 + DAT_8c0b1508 + -0x20c,0xffffffff,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0b14d4)(puVar7 + DAT_8c0b1500 + -0x20c,0xffffffff,ar6,a7);
    (*(code *)PTR_FUN_8c0b1514)(ar5,ar4 + DAT_8c0b14cc,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0x1ac) = (int)((ulonglong)uVar9 >> 0x20);
      dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)(puVar7 + -0x1ac));
    }
    else {
      *(undefined8 *)(puVar7 + -0x1ac) = uVar9;
      in_xd0 = *(undefined8 *)(puVar7 + -0x1ac);
      dVar11 = *(double *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar8;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    uVar1 = (*(code *)PTR_FUN_8c0b1518)(ar4,ar4 + DAT_8c0b14cc,ar5,a7);
    *(undefined4 *)(puVar7 + -0x1b0) = uVar1;
    if (*(int *)(puVar7 + -0x1b0) == 0) {
      *(int *)(puVar7 + -500) = ar4;
      *(int *)(DAT_8c0b14e0 + *(int *)(puVar7 + -500)) =
           *(int *)(DAT_8c0b14e0 + *(int *)(puVar7 + -500)) + 1;
      *(undefined4 *)(ar4 + 0x40) = 0;
    }
    ar6 = (float *)0x1e;
    uVar1 = (*(code *)PTR_rand_range_8c0b151c)(ar4,0,0x1e,a7);
    *(undefined4 *)(puVar7 + -0x1b4) = uVar1;
    if (*(int *)(puVar7 + -0x1b4) == 0) {
      *(undefined4 *)(DAT_8c0b1520 + ar4) = 1;
      (*(code *)PTR_FUN_8c0b1524)(ar4,0xb,ar5,ar7);
      ar6 = ar5;
      a7 = ar7;
    }
    (*(code *)PTR_Vec3_assign_8c0b14d0)(ar4 + DAT_8c0b1528,ar4 + 0x14,ar6,a7);
    break;
  case 5:
    *(undefined4 *)(DAT_8c0b171c + ar4) = 1;
    uVar1 = 0xb;
    (*(code *)PTR_FUN_8c0b1720)(ar4,0xb,ar5,ar7);
    uVar5 = (undefined4)in_dr0;
    (*(code *)PTR_vec3_clear_8c0b1724)(ar4 + 0x54,uVar1,ar5,ar7);
    ar6 = ar5;
    a7 = ar7;
    if (*DAT_8c0b1728 == 0) {
      a5 = 0xd;
      uVar1 = (*(code *)PTR_FUN_8c0b1730)(ar4 + DAT_8c0b172c,0xd,ar5,ar7);
      *(undefined4 *)(puVar7 + -0x1b8) = uVar1;
      uVar1 = (*(code *)PTR_deref_u32_8c0b1734)(*(undefined4 *)(puVar7 + -0x1b8),a5,ar5,ar7);
      *(undefined4 *)(puVar7 + -0x1bc) = uVar1;
      a5_01 = *(int **)(puVar7 + -0x1bc);
      ar6 = (float *)0x1;
      uVar1 = (*(code *)PTR_FUN_8c0b1738)(ar4 + DAT_8c0b172c,a5_01,1,ar7);
      *(undefined4 *)(puVar7 + -0x1c0) = uVar1;
      if (*(int *)(puVar7 + -0x1c0) != 0) {
        *DAT_8c0b1728 = *(int *)(puVar7 + -0x1c0);
      }
      *(undefined4 *)(*a5_01 + 0x18) = 0;
      a7 = ar7;
    }
    *(int *)(puVar7 + -0x1f8) = ar4;
    *(int *)(DAT_8c0b173c + *(int *)(puVar7 + -0x1f8)) =
         *(int *)(DAT_8c0b173c + *(int *)(puVar7 + -0x1f8)) + 1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0b1740) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0b1740) = CONCAT44(0x3f800000,uVar5);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c0b1748,uVar5);
      *(undefined4 *)(ar4 + DAT_8c0b1744) = DAT_8c0b1748;
    }
    else {
      in_dr0 = CONCAT44(DAT_8c0b174c,DAT_8c0b1748);
      *(ulonglong *)(ar4 + DAT_8c0b1744) = in_dr0;
    }
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b174c + -0x20c;
    iVar3 = ar4 + DAT_8c0b1750;
    (*(code *)PTR_FUN_8c0b1754)(iVar3,iVar3,ar6,a7);
    uVar1 = (*(code *)PTR_Vec3_length_8c0b1758)(puVar7 + DAT_8c0b174c + -0x20c,iVar3,ar6,a7);
    *(undefined4 *)(puVar7 + -0x1c4) = uVar1;
    (*(code *)PTR_Vec3_assign_8c0b1760)(ar4 + DAT_8c0b175c,*(undefined4 *)(puVar7 + -0x1c4),ar6,a7);
    pfVar4 = (float *)0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b1764)(puVar7 + DAT_8c0b174c + -0x20c,0xffffffff,ar6,a7);
  case 6:
    fVar8 = (float)in_dr0;
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b1768)(ar4 + DAT_8c0b172c,pfVar4,ar6,a7);
    *(int *)(puVar7 + -0x1fc) = ar4;
    if (in_FPSCR_SZ == '\0') {
      fVar8 = *(float *)(*(int *)(puVar7 + -0x1fc) + DAT_8c0b1740);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar7 + -0x1fc) + DAT_8c0b1740);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = fVar8 + 1.0;
    }
    else {
      fVar8 = SUB84((double)CONCAT44(0x3f800000,fVar8) + (double)CONCAT44(0x3f800000,fVar8),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar7 + -0x200) = fVar8;
    }
    else {
      *(undefined8 *)(puVar7 + -0x200) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar7 + -0x1fc) + DAT_8c0b1740) = (int)*(ulonglong *)(puVar7 + -0x200);
      uVar10 = (ulonglong)*(uint *)(puVar7 + -0x200);
    }
    else {
      uVar10 = *(ulonglong *)(puVar7 + -0x200);
      *(ulonglong *)(*(int *)(puVar7 + -0x1fc) + DAT_8c0b1740) = uVar10;
      in_xd0 = *(undefined8 *)(puVar7 + -0x200);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0b1744),(int)uVar10);
    }
    else {
      dVar11 = *(double *)(ar4 + DAT_8c0b1744);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar7 + DAT_8c0b176c + -0x20c) = fVar8;
      fVar8 = *(float *)(puVar7 + DAT_8c0b176c + -0x20c);
    }
    else {
      *(undefined8 *)(puVar7 + DAT_8c0b176c + -0x20c) = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44(1.0 - fVar8,fVar8);
    }
    else {
      dVar11 = (double)CONCAT44(0x3f800000,fVar8) - (double)CONCAT44(0x3f800000,fVar8);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + DAT_8c0b1770 + -0x20c) = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *(double *)(puVar7 + DAT_8c0b1770 + -0x20c) = dVar11;
    }
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1774 + -0x20c;
    (*(code *)PTR_Vec3_scale_8c0b177c)(ar4 + DAT_8c0b1750,puVar7 + DAT_8c0b1778 + -0x210,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1780 + -0x20c;
    (*(code *)PTR_Vec3_scale_8c0b177c)(ar4 + DAT_8c0b175c,puVar7 + DAT_8c0b1784 + -0x210,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1788 + -0x20c;
    (*(code *)PTR_Vec3_add_8c0b1794)
              (puVar7 + DAT_8c0b1790 + -0x210,puVar7 + DAT_8c0b178c + -0x210,ar6,a7);
    (*(code *)PTR_Vec3_assign_8c0b1760)(ar4 + DAT_8c0b1750,puVar7 + DAT_8c0b1788 + -0x20c,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0b1764)(puVar7 + DAT_8c0b1788 + -0x20c,0xffffffff,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0b1764)(puVar7 + DAT_8c0b1780 + -0x20c,0xffffffff,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0b1764)(puVar7 + DAT_8c0b1774 + -0x20c,0xffffffff,ar6,a7);
    (*(code *)PTR_FUN_8c0b1798)(ar4 + DAT_8c0b1750,ar4 + DAT_8c0b175c,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0x1c8) = (int)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)(ulonglong)*(uint *)(puVar7 + -0x1c8);
    }
    else {
      *(double *)(puVar7 + -0x1c8) = dVar11;
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar11,0) <= 0.0) {
      *(int *)(puVar7 + -0x204) = ar4;
      *(int *)(DAT_8c0b173c + *(int *)(puVar7 + -0x204)) =
           *(int *)(DAT_8c0b173c + *(int *)(puVar7 + -0x204)) + 1;
    }
    break;
  case 7:
    uVar5 = 0xd;
    uVar1 = (*(code *)PTR_FUN_8c0b17cc)(ar4 + DAT_8c0b17c8,0xd,ar6,a7);
    *(undefined4 *)(puVar7 + -0x1cc) = uVar1;
    if (*(int *)(puVar7 + -0x1cc) != 1) {
      if (*(int *)(puVar7 + -0x1cc) != 2) break;
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b17fc)(ar4 + DAT_8c0b17f8,uVar5,ar6,a7);
    }
    *(int *)(puVar7 + -0x208) = ar4;
    *(int *)(DAT_8c0b1800 + *(int *)(puVar7 + -0x208)) =
         *(int *)(DAT_8c0b1800 + *(int *)(puVar7 + -0x208)) + 1;
    *(undefined4 *)(DAT_8c0b1804 + ar4) = 1;
    break;
  case 8:
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b1a34)(ar4 + DAT_8c0b1a30,pfVar4,ar6,a7)
    ;
    *(undefined4 *)(puVar7 + -0x1d0) = uVar1;
    if (*(int *)(puVar7 + -0x1d0) == 1) {
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
      (*(code *)PTR_vec3_clear_8c0b1a38)(ar4 + 0x54,uVar1,ar6,a7);
      uVar6 = 0;
      *(undefined4 *)(DAT_8c0b1a3c + ar4) = 0;
      *(undefined4 *)(DAT_8c0b1a40 + ar4) = 2;
      a7 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0b1a48)(ar4 + DAT_8c0b1a30,0xe,0xffffffff,0);
      ar6 = (float *)(ar4 + DAT_8c0b1a30);
      a5_00 = PTR_s_CAnimBody_SetFrame_033e6e_8c0b1a4c;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0b1a4c)
                (ar6,PTR_s_CAnimBody_SetFrame_033e6e_8c0b1a4c,ar6,a7);
      (*(code *)PTR_FUN_8c0b1a58)(ar4 + DAT_8c0b1a50._4_4_,a5_00,ar6,a7);
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0b1a5c)
              (ar4 + DAT_8c0b1a30,PTR_CAnimBody_GetCurFrame_8c0b1a5c,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0x1d4) = (int)(in_dr0 >> 0x20);
    }
    else {
      *(ulonglong *)(puVar7 + -0x1d4) = in_dr0;
    }
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1a60 + -0x20c;
    (*(code *)PTR_FUN_8c0b1a68)(ar4 + DAT_8c0b1a30,*DAT_8c0b1a64,ar6,a7);
    (*(code *)PTR_Vec3_assign_8c0b1a70)
              (puVar7 + DAT_8c0b1a6c + -0x20c,puVar7 + DAT_8c0b1a60 + -0x20c,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0b1a74)(puVar7 + DAT_8c0b1a60 + -0x20c,0xffffffff,ar6,a7);
    *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1a78 + -0x20c;
    (*(code *)PTR_Vec3_sub_8c0b1a80)(puVar7 + DAT_8c0b1a7c + -0x210,ar4 + 0x54,ar6,a7);
    (*(code *)PTR_Vec3_assign_8c0b1a70)
              (puVar7 + DAT_8c0b1a84 + -0x20c,puVar7 + DAT_8c0b1a78 + -0x20c,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0b1a74)(puVar7 + DAT_8c0b1a78 + -0x20c,0xffffffff,ar6,a7);
    puVar2 = puVar7 + DAT_8c0b1a6c + -0x20c;
    (*(code *)PTR_Vec3_assign_8c0b1a70)(ar4 + 0x54,puVar2,ar6,a7);
    (*(code *)PTR_Vec3_ctor_xyz_8c0b1a88)(puVar7 + DAT_8c0b1a30 + -0x20c,puVar2,ar6,a7);
    uVar1 = (*(code *)PTR_FUN_8c0b1a8c)
                      (puVar7 + DAT_8c0b1a84 + -0x20c,puVar7 + DAT_8c0b1a30 + -0x20c,ar6,a7);
    *(undefined4 *)(puVar7 + -0x1d8) = uVar1;
    *(undefined4 *)(puVar7 + DAT_8c0b1a90 + -0x20c) = *(undefined4 *)(puVar7 + -0x1d8);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b1a74)(puVar7 + DAT_8c0b1a30 + -0x20c,0xffffffff,ar6,a7);
    if (*(int *)(puVar7 + DAT_8c0b1a90 + -0x20c) != 0) {
      (*(code *)PTR_vec3_copy_8c02b5fc_8c0b1a98)
                (puVar7 + DAT_8c0b1a94 + -0x20c,*(undefined4 *)(puVar7 + -0x20c),ar6,a7);
      *(undefined1 **)(puVar7 + -0x210) = puVar7 + DAT_8c0b1a9c + -0x20c;
      puVar2 = puVar7 + DAT_8c0b1aa0 + -0x210;
      (*(code *)PTR_FUN_8c0b1aa8)(puVar7 + DAT_8c0b1aa4 + -0x210,puVar2,ar6,a7);
      uVar1 = (*(code *)PTR_Vec3_length_8c0b1aac)(puVar7 + DAT_8c0b1a9c + -0x20c,puVar2,ar6,a7);
      *(undefined4 *)(puVar7 + -0x1dc) = uVar1;
      (*(code *)PTR_Vec3_assign_8c0b1a70)(ar4 + 0x14,*(undefined4 *)(puVar7 + -0x1dc),ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c0b1a74)(puVar7 + DAT_8c0b1a9c + -0x20c,0xffffffff,ar6,a7);
      uVar1 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c0b1ab0)(puVar7 + DAT_8c0b1a94 + -0x20c,0xffffffff,ar6,a7);
    }
    (*(code *)PTR_Vec3_length_sq_8c0b1ab4)(puVar7 + DAT_8c0b1a84 + -0x20c,uVar1,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0x1e0) = (int)(in_dr0 >> 0x20);
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(puVar7 + -0x1e0);
    }
    else {
      *(ulonglong *)(puVar7 + -0x1e0) = in_dr0;
      *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(puVar7 + -0x1e0);
    }
  }
  *(undefined4 *)(puVar7 + DAT_8c0b1ab8 + -0x20c) = uVar6;
  (*(code *)PTR_Vec3_dtor_8c0b1a74)(puVar7 + DAT_8c0b1abc + -0x20c,0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c0b1a74)(puVar7 + DAT_8c0b1a84 + -0x20c,0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c0b1a74)(puVar7 + DAT_8c0b1a6c + -0x20c,0xffffffff,ar6,a7);
  return *(undefined4 *)(puVar7 + DAT_8c0b1ab8 + -0x20c);
}



/* FUN_8c0b1ac0 @ 8c0b1ac0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b1f92) */
/* WARNING: Removing unreachable block (ram,0x8c0b1f4e) */
/* WARNING: Removing unreachable block (ram,0x8c0b237a) */
/* WARNING: Removing unreachable block (ram,0x8c0b22d6) */
/* WARNING: Removing unreachable block (ram,0x8c0b2236) */
/* WARNING: Removing unreachable block (ram,0x8c0b1b3e) */
/* WARNING: Removing unreachable block (ram,0x8c0b2c3e) */
/* WARNING: Removing unreachable block (ram,0x8c0b222a) */
/* WARNING: Removing unreachable block (ram,0x8c0b22e2) */
/* WARNING: Removing unreachable block (ram,0x8c0b2384) */
/* WARNING: Removing unreachable block (ram,0x8c0b1f5a) */
/* WARNING: Removing unreachable block (ram,0x8c0b1f9e) */
/* WARNING: Switch with 1 destination removed at 0x8c0b1c02 */
/* WARNING: Switch with 1 destination removed at 0x8c0b1c34 */
/* WARNING: Switch with 1 destination removed at 0x8c0b1c92 */
/* WARNING: Switch with 1 destination removed at 0x8c0b1ce8 */
/* WARNING: Switch with 1 destination removed at 0x8c0b1d04 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b1ac0(int ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 a5;
  ulonglong *a5_00;
  int *a6;
  undefined4 unaff_r8;
  undefined4 uVar9;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int *piVar10;
  undefined4 unaff_r11;
  int iVar11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar12;
  float fVar13;
  double in_dr0;
  undefined8 uVar14;
  double dVar15;
  float fVar17;
  ulonglong uVar16;
  undefined4 in_fr3;
  double dVar18;
  float in_fr15;
  undefined8 in_xd0;
  bool bVar19;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = auStack_4;
  }
  else {
    puVar12 = auStack_8;
  }
  *(undefined4 *)(puVar12 + -4) = unaff_r14;
  *(undefined4 *)(puVar12 + -8) = unaff_r13;
  *(undefined4 *)(puVar12 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar12 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar12 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar12 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar12 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar12 + -0x20) = in_PR;
  iVar1 = -DAT_8c0b1b1c;
  *(int **)(puVar12 + iVar1 + -0x20) = ar6;
  *(int **)(puVar12 + iVar1 + -0x1c) = ar7;
  piVar10 = *(int **)(puVar12 + DAT_8c0b1b20 + iVar1 + -0x20);
  uVar7 = 1;
  uVar9 = 1;
  (*(code *)PTR_Vec3_ctor_zero_8c0b1b28)(puVar12 + DAT_8c0b1b24 + iVar1 + -0x20,1,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0b1b28)(puVar12 + DAT_8c0b1b2c + iVar1 + -0x20,uVar7,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0b1b28)(puVar12 + DAT_8c0b1b30 + iVar1 + -0x20,uVar7,ar6,ar7);
  if (*(int *)(DAT_8c0b1b34 + ar4) < 2) {
    puVar8 = (undefined *)0xc;
    iVar11 = 0xc;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c0b1bb0,(float)*DAT_8c0b1bac);
    }
    else {
      dVar15 = (double)CONCAT44(DAT_8c0b1bb4,DAT_8c0b1bb0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar15 / dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0b1bb4,fVar13);
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c0b1bb8,DAT_8c0b1bb4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar13 = SUB84(in_dr0,0) * fVar17;
      in_dr0 = (double)CONCAT44(fVar17,fVar13);
      iVar11 = (int)fVar13;
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
      iVar11 = (int)in_dr0;
    }
    *(int *)(puVar12 + DAT_8c0b1bb8 + iVar1 + -0x20) = 100 - iVar11;
    if (*(int *)(puVar12 + DAT_8c0b1bb8 + iVar1 + -0x20) < 0) {
      *(undefined4 *)(puVar12 + DAT_8c0b1bb8 + iVar1 + -0x20) = 0;
    }
    ar7 = *(int **)(puVar12 + DAT_8c0b1bb8 + iVar1 + -0x20);
    ar6 = (int *)0x6;
    puVar8 = (undefined *)0x0;
    uVar7 = (*(code *)PTR_FUN_8c0b1bbc)(ar4,0,6,ar7);
    *(undefined4 *)(puVar12 + DAT_8c0b1bc0 + iVar1 + -0x20) = uVar7;
    *(undefined4 *)(puVar12 + DAT_8c0b1bc4 + iVar1 + -0x20) =
         *(undefined4 *)(puVar12 + DAT_8c0b1bc0 + iVar1 + -0x20);
    iVar11 = *(int *)(puVar12 + DAT_8c0b1bc4 + iVar1 + -0x20);
    if (iVar11 == 0) {
      iVar11 = 0x13;
    }
    else if ((iVar11 == 1) || (iVar11 == 2)) {
      iVar11 = 0x14;
    }
    else if (iVar11 == 3) {
      iVar11 = 0xf;
    }
    else {
      puVar8 = (undefined *)0xe;
      iVar11 = 0xe;
    }
  }
  iVar2 = *(int *)(DAT_8c0b1c0c + ar4);
  if (iVar2 == 0) {
    uVar7 = (*(code *)PTR_FUN_8c0b1c40)(ar4 + DAT_8c0b1c3c,iVar11,ar6,ar7);
    *(undefined4 *)(puVar12 + DAT_8c0b1c44 + iVar1 + -0x20) = uVar7;
    if (*(int *)(puVar12 + DAT_8c0b1c44 + iVar1 + -0x20) != 1) {
      if (*(int *)(puVar12 + DAT_8c0b1c44 + iVar1 + -0x20) != 2) goto LAB_8c0b30ba;
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b1ca0)(ar4 + DAT_8c0b1c9c,iVar11,ar6,ar7);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0b1ca4) = DAT_8c0b1ca8;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0b1ca4) = CONCAT44(PTR_FUN_8c0b1cac,DAT_8c0b1ca8);
    }
    (*(code *)PTR_FUN_8c0b1cac)(ar4,iVar11,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c0b1cb0)(ar4 + 0x54,ar4 + 0x54,ar6,ar7);
    *(int *)(puVar12 + iVar1 + 0x20) = ar4;
    *(int *)(DAT_8c0b1cb4 + *(int *)(puVar12 + iVar1 + 0x20)) =
         *(int *)(DAT_8c0b1cb4 + *(int *)(puVar12 + iVar1 + 0x20)) + 1;
    goto LAB_8c0b30ba;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      (*(code *)PTR_Vec3_assign_8c0b282c)(ar4 + 0x14,ar4 + DAT_8c0b2828,ar6,ar7);
      uVar7 = (*(code *)PTR_FUN_8c0b2834)(ar4 + DAT_8c0b2830,9,ar6,ar7);
      *(undefined4 *)(puVar12 + iVar1 + 0x4c) = uVar7;
      if ((*(int *)(puVar12 + iVar1 + 0x4c) != 1) && (*(int *)(puVar12 + iVar1 + 0x4c) != 2)) {
        *(undefined4 *)(puVar12 + DAT_8c0b2838 + iVar1 + -0x20) = 1;
        (*(code *)PTR_Vec3_dtor_8c0b2840)(puVar12 + DAT_8c0b283c + iVar1 + -0x20,0xffffffff,ar6,ar7)
        ;
        (*(code *)PTR_Vec3_dtor_8c0b2840)(puVar12 + DAT_8c0b2844 + iVar1 + -0x20,0xffffffff,ar6,ar7)
        ;
        (*(code *)PTR_Vec3_dtor_8c0b2840)(puVar12 + DAT_8c0b2848 + iVar1 + -0x20,0xffffffff,ar6,ar7)
        ;
        return *(undefined4 *)(puVar12 + DAT_8c0b2838 + iVar1 + -0x20);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x24) = DAT_8c0b296c;
      }
      else {
        *(undefined8 *)(ar4 + 0x24) = CONCAT44(PTR_DAT_8c0b2970,DAT_8c0b296c);
      }
      (*(code *)PTR_FUN_8c0b2974)(ar4 + 0x14,PTR_DAT_8c0b2970,ar6,ar7);
      *(undefined4 *)(DAT_8c0b2978 + ar4) = 0;
      *(undefined **)(puVar12 + iVar1 + -0x24) = PTR_DAT_8c0b297c;
      *(undefined1 **)(puVar12 + iVar1 + -0x28) = puVar12 + DAT_8c0b2980 + iVar1 + -0x24;
      ar6 = *(int **)(puVar12 + iVar1 + -0x1c);
      (*(code *)PTR_FUN_8c0b2994)(ar4,ar5,ar6,piVar10);
      (*(code *)PTR_Vec3_assign_8c0b29a0)
                (ar4 + DAT_8c0b299c,puVar12 + DAT_8c0b2998 + iVar1 + -0x20,ar6,piVar10);
      (*(code *)PTR_Vec3_dtor_8c0b29a4)
                (puVar12 + DAT_8c0b2998 + iVar1 + -0x20,0xffffffff,ar6,piVar10);
      *(int *)(puVar12 + iVar1 + 0x10) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c0b2988,
                                  *(undefined4 *)(*(int *)(puVar12 + iVar1 + 0x10) + DAT_8c0b29a8));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar12 + iVar1 + 0x10) + DAT_8c0b29a8);
        dVar15 = (double)CONCAT44(DAT_8c0b298c,DAT_8c0b2988);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar15 + dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar12 + iVar1 + 0x10) + DAT_8c0b29a8) = fVar13;
      }
      else {
        *(undefined8 *)(*(int *)(puVar12 + iVar1 + 0x10) + DAT_8c0b29a8) = in_xd0;
      }
      *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b29ac + iVar1 + -0x20;
      (*(code *)PTR_Vec3_sub_8c0b29b0)(ar4 + DAT_8c0b299c,ar5,ar6,piVar10);
      (*(code *)PTR_Vec3_assign_8c0b29a0)
                (ar4 + DAT_8c0b29b4,puVar12 + DAT_8c0b29ac + iVar1 + -0x20,ar6,piVar10);
      (*(code *)PTR_Vec3_dtor_8c0b29a4)
                (puVar12 + DAT_8c0b29ac + iVar1 + -0x20,0xffffffff,ar6,piVar10);
      iVar11 = DAT_8c0b29b8 + 0x18;
      (*(code *)PTR_FUN_8c0b29bc)(ar4,iVar11,ar6,piVar10);
      (*(code *)PTR_FUN_8c0b29c0)(ar4,iVar11,ar6,piVar10);
      a5_00 = (ulonglong *)(ar4 + 0x2c);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)a5_00 = 0;
      }
      else {
        *a5_00 = (ulonglong)(uint)fVar13;
      }
      (*(code *)PTR_FUN_8c0b29c4)(ar4,a5_00,ar6,piVar10);
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined4 *)(ar4 + 0x44) = 0;
      *(undefined4 *)(DAT_8c0b29c8 + ar4) = 0;
      *(int *)(puVar12 + iVar1 + 0xc) = ar4;
      *(int *)(DAT_8c0b29cc + *(int *)(puVar12 + iVar1 + 0xc)) =
           *(int *)(DAT_8c0b29cc + *(int *)(puVar12 + iVar1 + 0xc)) + 1;
      ar7 = piVar10;
    }
    else if (iVar2 == 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar14 = CONCAT44(DAT_8c0b2b34,SUB84(in_dr0,0));
      }
      else {
        uVar14 = CONCAT44(DAT_8c0b2b38,DAT_8c0b2b34);
      }
      (*(code *)PTR_Vec3_ctor_xyz_8c0b2b3c)(puVar12 + DAT_8c0b2b38 + iVar1 + -0x20,puVar8,ar6,ar7);
      *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2b40 + iVar1 + -0x20;
      puVar6 = puVar12 + DAT_8c0b2b44 + iVar1 + -0x24;
      (*(code *)PTR_Vec3_add_8c0b2b4c)(ar4 + DAT_8c0b2b48,puVar6,ar6,ar7);
      uVar7 = (*(code *)PTR_Vec3_length_8c0b2b50)
                        (puVar12 + DAT_8c0b2b40 + iVar1 + -0x20,puVar6,ar6,ar7);
      *(undefined4 *)(puVar12 + iVar1 + 0x48) = uVar7;
      (*(code *)PTR_Vec3_length_sq_8c0b2b54)(ar4 + DAT_8c0b2b48,ar4 + DAT_8c0b2b48,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar12 + iVar1 + 0x44) = (int)((ulonglong)uVar14 >> 0x20);
        dVar15 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar1 + 0x44),(int)uVar14);
        *(undefined4 *)(puVar12 + DAT_8c0b2b58 + iVar1 + -0x20) =
             *(undefined4 *)(puVar12 + iVar1 + 0x44);
      }
      else {
        *(undefined8 *)(puVar12 + iVar1 + 0x44) = uVar14;
        dVar15 = *(double *)(puVar12 + iVar1 + 0x44);
        *(double *)(puVar12 + DAT_8c0b2b58 + iVar1 + -0x20) = dVar15;
      }
      *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2b5c + iVar1 + -0x20;
      (*(code *)PTR_Vec3_scale_8c0b2b64)
                (*(undefined4 *)(puVar12 + iVar1 + 0x48),puVar12 + DAT_8c0b2b60 + iVar1 + -0x24,ar6,
                 ar7);
      (*(code *)PTR_Vec3_assign_8c0b2b68)
                (ar4 + DAT_8c0b2b48,puVar12 + DAT_8c0b2b5c + iVar1 + -0x20,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b2b6c)(puVar12 + DAT_8c0b2b5c + iVar1 + -0x20,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b2b6c)(puVar12 + DAT_8c0b2b40 + iVar1 + -0x20,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b2b6c)(puVar12 + DAT_8c0b2b38 + iVar1 + -0x20,0xffffffff,ar6,ar7);
      *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2b70 + iVar1 + -0x20;
      (*(code *)PTR_Vec3_add_8c0b2b4c)(ar4 + DAT_8c0b2b48,ar5,ar6,ar7);
      ar7 = (int *)(puVar12 + DAT_8c0b2b74 + iVar1 + -0x20);
      a6 = (int *)PTR_Vec3_assign_8c0b2b68;
      (*(code *)PTR_Vec3_assign_8c0b2b68)
                (ar7,puVar12 + DAT_8c0b2b70 + iVar1 + -0x20,PTR_Vec3_assign_8c0b2b68,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b2b6c)(puVar12 + DAT_8c0b2b70 + iVar1 + -0x20,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0b2b68)
                (ar4 + DAT_8c0b2b78,puVar12 + DAT_8c0b2b74 + iVar1 + -0x20,a6,ar7);
      *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2b7c + iVar1 + -0x20;
      (*(code *)PTR_Vec3_scale_8c0b2b64)(ar4 + 0x14,PTR_DAT_8c0b2b80,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0b2b68)
                (ar4 + DAT_8c0b2b84,puVar12 + DAT_8c0b2b7c + iVar1 + -0x20,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b2b6c)(puVar12 + DAT_8c0b2b7c + iVar1 + -0x20,0xffffffff,a6,ar7);
      iVar2 = *(int *)(DAT_8c0b2b88 + ar4);
      if (iVar2 == 0) {
        (*(code *)PTR_Vec3_length_sq_8c0b2ca8)
                  (ar4 + DAT_8c0b2ca4,PTR_Vec3_length_sq_8c0b2ca8,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar12 + iVar1 + 0x40) = (int)((ulonglong)dVar15 >> 0x20);
          *(undefined4 *)(puVar12 + DAT_8c0b2cac + iVar1 + -0x20) =
               *(undefined4 *)(puVar12 + iVar1 + 0x40);
        }
        else {
          *(double *)(puVar12 + iVar1 + 0x40) = dVar15;
          *(undefined8 *)(puVar12 + DAT_8c0b2cac + iVar1 + -0x20) =
               *(undefined8 *)(puVar12 + iVar1 + 0x40);
        }
        *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2cb0 + iVar1 + -0x20;
        (*(code *)PTR_Vec3_scale_8c0b2cb8)(ar4 + 0x14,puVar12 + DAT_8c0b2cb4 + iVar1 + -0x24,a6,ar7)
        ;
        *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2cbc + iVar1 + -0x20;
        (*(code *)PTR_Vec3_add_8c0b2cc4)(ar5,puVar12 + DAT_8c0b2cc0 + iVar1 + -0x24,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c0b2ccc)
                  (puVar12 + DAT_8c0b2cc8 + iVar1 + -0x20,puVar12 + DAT_8c0b2cbc + iVar1 + -0x20,a6,
                   ar7);
        (*(code *)PTR_Vec3_dtor_8c0b2cd0)(puVar12 + DAT_8c0b2cbc + iVar1 + -0x20,0xffffffff,a6,ar7);
        uVar7 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c0b2cd0)(puVar12 + DAT_8c0b2cb0 + iVar1 + -0x20,0xffffffff,a6,ar7);
        *(int *)(puVar12 + iVar1 + 8) = ar4;
        ar7 = *(int **)(puVar12 + iVar1 + 8);
        a6 = ar7 + 10;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c0b2cd4,
                                    *(undefined4 *)(*(int *)(puVar12 + iVar1 + 8) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar12 + iVar1 + 8) + 0x28);
          dVar15 = (double)CONCAT44(DAT_8c0b2cd8,DAT_8c0b2cd4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = (float)((ulonglong)dVar15 >> 0x20);
          dVar15 = (double)CONCAT44(fVar13,SUB84(dVar15,0) * fVar13);
        }
        else {
          dVar15 = dVar15 * dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          *a6 = SUB84(dVar15,0);
        }
        else {
          *(undefined8 *)a6 = in_xd0;
        }
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b2cdc)(ar4 + DAT_8c0b2cd8,uVar7,a6,ar7);
        (*(code *)PTR_CAnimBody_GetCurFrame_8c0b2ce0)(ar4 + DAT_8c0b2cd8,uVar7,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar12 + iVar1 + 0x3c) = (int)((ulonglong)dVar15 >> 0x20);
          in_fr15 = *(float *)(puVar12 + iVar1 + 0x3c);
          dVar15 = (double)CONCAT44(DAT_8c0b2ce4,SUB84(dVar15,0));
        }
        else {
          *(double *)(puVar12 + iVar1 + 0x3c) = dVar15;
          dVar15 = (double)CONCAT44(_DAT_8c0b2ce8,DAT_8c0b2ce4);
        }
        if (in_fr15 == (float)((ulonglong)dVar15 >> 0x20)) {
          *(undefined4 *)(ar4 + 0x44) = 1;
          a6 = _DAT_8c0b2ce8;
          *(int *)(puVar12 + iVar1 + 4) = ar4;
          *(int *)((int)_DAT_8c0b2ce8 + *(int *)(puVar12 + iVar1 + 4)) =
               *(int *)((int)_DAT_8c0b2ce8 + *(int *)(puVar12 + iVar1 + 4)) + 1;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(_DAT_8c0b2cf0,SUB84(dVar15,0));
            *(undefined4 *)(ar4 + DAT_8c0b2cec) = _DAT_8c0b2cf0;
          }
          else {
            dVar15 = (double)CONCAT44(PTR_FUN_8c0b2cf4,_DAT_8c0b2cf0);
            *(double *)(ar4 + DAT_8c0b2cec) = dVar15;
          }
          *(undefined4 *)(DAT_8c0b2cac + ar4) = 1;
          (*(code *)PTR_FUN_8c0b2cf4)(ar4,PTR_FUN_8c0b2cf4,a6,ar7);
          if (*(int *)(DAT_8c0b2cf8 + ar4) == 0) {
            *(undefined4 *)(DAT_8c0b2cfc + ar4) = 1;
            a6 = ar5;
            (*(code *)PTR_FUN_8c0b2d00)(ar4,0xb,ar5,piVar10);
            ar7 = piVar10;
          }
        }
      }
      else if (iVar2 == 1) {
        *(int *)(puVar12 + iVar1) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c0b2d88,*(undefined4 *)(*(int *)(puVar12 + iVar1) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar12 + iVar1) + 0x28);
          dVar15 = (double)CONCAT44(DAT_8c0b2d8c,DAT_8c0b2d88);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar15 - dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar12 + iVar1) + 0x28) = fVar13;
          dVar15 = (double)CONCAT44(DAT_8c0b2d8c,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(*(int *)(puVar12 + iVar1) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar15 = (double)CONCAT44(DAT_8c0b2d90,DAT_8c0b2d8c);
        }
        if (in_FPSCR_PR == '\0' && SUB84(dVar15,0) < (float)((ulonglong)dVar15 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c0b2d8c,SUB84(dVar15,0));
            *(undefined4 *)(ar4 + 0x28) = DAT_8c0b2d8c;
          }
          else {
            dVar15 = (double)CONCAT44(DAT_8c0b2d90,DAT_8c0b2d8c);
            *(double *)(ar4 + 0x28) = dVar15;
          }
        }
        uVar7 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b2d94)
                          (ar4 + DAT_8c0b2d90,PTR_CAnimBody_AdvanceFrame_wrapper_8c0b2d94,a6,ar7);
        *(undefined4 *)(puVar12 + iVar1 + 0x38) = uVar7;
        if (*(int *)(puVar12 + iVar1 + 0x38) == 1) {
          *(int *)(puVar12 + iVar1 + -4) = ar4;
          *(int *)(DAT_8c0b2d98 + *(int *)(puVar12 + iVar1 + -4)) =
               *(int *)(DAT_8c0b2d98 + *(int *)(puVar12 + iVar1 + -4)) + 1;
          ar7 = (int *)0x0;
          a6 = (int *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0b2da0)
                    (ar4 + DAT_8c0b2d90,iVar11,0xffffffff,0);
        }
      }
      else if (iVar2 == 2) {
        *(int *)(puVar12 + iVar1 + -8) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c0b2df4,
                                    *(undefined4 *)(*(int *)(puVar12 + iVar1 + -8) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar12 + iVar1 + -8) + 0x28);
          dVar15 = (double)CONCAT44(DAT_8c0b2df8,DAT_8c0b2df4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar15 - dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar12 + iVar1 + -8) + 0x28) = fVar13;
          uVar14 = CONCAT44(DAT_8c0b2df8,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(*(int *)(puVar12 + iVar1 + -8) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar14 = CONCAT44(DAT_8c0b2dfc,DAT_8c0b2df8);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar14 < (float)((ulonglong)uVar14 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            uVar14 = CONCAT44(DAT_8c0b2df8,(float)uVar14);
            *(undefined4 *)(ar4 + 0x28) = DAT_8c0b2df8;
          }
          else {
            uVar14 = CONCAT44(DAT_8c0b2dfc,DAT_8c0b2df8);
            *(undefined8 *)(ar4 + 0x28) = uVar14;
          }
        }
        if (iVar11 == 0xc) {
          (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b2e08)
                    (ar4 + DAT_8c0b2e04,DAT_8c0b2e04,a6,ar7);
        }
        else {
          (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b2ef4)
                    (ar4 + DAT_8c0b2ef0,DAT_8c0b2ef0,a6,ar7);
          a6 = (int *)0x1e;
          uVar7 = (*(code *)PTR_rand_range_8c0b2ef8)(ar4,0,0x1e,ar7);
          *(undefined4 *)(puVar12 + iVar1 + 0x34) = uVar7;
          if (*(int *)(puVar12 + iVar1 + 0x34) == 0) {
            *(undefined4 *)(DAT_8c0b2efc + ar4) = 1;
            a6 = ar5;
            ar7 = piVar10;
            (*(code *)PTR_FUN_8c0b2f00)(ar4,0xb,ar5,piVar10);
          }
        }
        (**(code **)(DAT_8c0b2f04 + *piVar10))(piVar10,ar5,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar12 + iVar1 + 0x30) = (int)((ulonglong)uVar14 >> 0x20);
          dVar18 = (double)CONCAT44(ar5[1],in_fr3);
          dVar15 = (double)CONCAT44(DAT_8c0b2f08,*(undefined4 *)(puVar12 + iVar1 + 0x30));
        }
        else {
          *(undefined8 *)(puVar12 + iVar1 + 0x30) = uVar14;
          dVar18 = *(double *)(ar5 + 1);
          in_xd0 = *(undefined8 *)(puVar12 + iVar1 + 0x30);
          dVar15 = (double)CONCAT44(_DAT_8c0b2f0c,DAT_8c0b2f08);
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = (float)((ulonglong)dVar15 >> 0x20);
          fVar13 = SUB84(dVar15,0) + fVar17;
          dVar15 = (double)CONCAT44(fVar17,fVar13);
          bVar19 = fVar13 < (float)((ulonglong)dVar18 >> 0x20);
        }
        else {
          dVar15 = dVar15 + dVar15;
          fVar13 = SUB84(dVar15,0);
          bVar19 = dVar15 < dVar18;
        }
        if (!bVar19) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + _DAT_8c0b2f0c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + _DAT_8c0b2f0c) = CONCAT44(0x3f800000,fVar13);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c0b2f14,fVar13);
            *(undefined4 *)(ar4 + DAT_8c0b2f10) = DAT_8c0b2f14;
          }
          else {
            dVar15 = (double)CONCAT44(DAT_8c0b2f18,DAT_8c0b2f14);
            *(double *)(ar4 + DAT_8c0b2f10) = dVar15;
          }
          *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2f18 + iVar1 + -0x20;
          puVar8 = PTR_FUN_8c0b2f20;
          (*(code *)PTR_FUN_8c0b2f20)(ar4 + DAT_8c0b2f1c,PTR_FUN_8c0b2f20,a6,ar7);
          uVar7 = (*(code *)PTR_Vec3_length_8c0b2f24)
                            (puVar12 + DAT_8c0b2f18 + iVar1 + -0x20,puVar8,a6,ar7);
          *(undefined4 *)(puVar12 + iVar1 + 0x2c) = uVar7;
          (*(code *)PTR_Vec3_assign_8c0b2f2c)
                    (ar4 + DAT_8c0b2f28,*(undefined4 *)(puVar12 + iVar1 + 0x2c),a6,ar7);
          (*(code *)PTR_Vec3_dtor_8c0b2f30)
                    (puVar12 + DAT_8c0b2f18 + iVar1 + -0x20,0xffffffff,a6,ar7);
          *(int *)(puVar12 + iVar1 + -0xc) = ar4;
          *(int *)(DAT_8c0b2f34 + *(int *)(puVar12 + iVar1 + -0xc)) =
               *(int *)(DAT_8c0b2f34 + *(int *)(puVar12 + iVar1 + -0xc)) + 1;
        }
      }
      else if (iVar2 == 3) {
        *(int *)(puVar12 + iVar1 + -0x10) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c0b310c,
                                    *(undefined4 *)(*(int *)(puVar12 + iVar1 + -0x10) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar12 + iVar1 + -0x10) + 0x28);
          dVar15 = (double)CONCAT44(DAT_8c0b3110,DAT_8c0b310c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar15 - dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar12 + iVar1 + -0x10) + 0x28) = fVar13;
          fVar13 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)(puVar12 + iVar1 + -0x10) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR != '\0' || fVar13 <= 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar13;
          }
        }
        (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b311c)
                  (ar4 + DAT_8c0b3118,DAT_8c0b3118,a6,ar7);
        *(int *)(puVar12 + iVar1 + -0x14) = ar4;
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)(*(int *)(puVar12 + iVar1 + -0x14) + DAT_8c0b3120);
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar12 + iVar1 + -0x14) + DAT_8c0b3120);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = fVar13 + 1.0;
        }
        else {
          fVar13 = SUB84((double)CONCAT44(0x3f800000,fVar13) + (double)CONCAT44(0x3f800000,fVar13),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + iVar1 + -0x18) = fVar13;
        }
        else {
          *(undefined8 *)(puVar12 + iVar1 + -0x18) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)(puVar12 + iVar1 + -0x14) + DAT_8c0b3120) =
               (int)*(ulonglong *)(puVar12 + iVar1 + -0x18);
          uVar16 = (ulonglong)*(uint *)(puVar12 + iVar1 + -0x18);
        }
        else {
          uVar16 = *(ulonglong *)(puVar12 + iVar1 + -0x18);
          *(ulonglong *)(*(int *)(puVar12 + iVar1 + -0x14) + DAT_8c0b3120) = uVar16;
          in_xd0 = *(undefined8 *)(puVar12 + iVar1 + -0x18);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0b3124),(int)uVar16);
        }
        else {
          dVar15 = *(double *)(ar4 + DAT_8c0b3124);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar15 / dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + DAT_8c0b3128 + iVar1 + -0x20) = fVar13;
          fVar13 = *(float *)(puVar12 + DAT_8c0b3128 + iVar1 + -0x20);
        }
        else {
          *(undefined8 *)(puVar12 + DAT_8c0b3128 + iVar1 + -0x20) = in_xd0;
          in_xd0 = *(undefined8 *)(puVar12 + DAT_8c0b3128 + iVar1 + -0x20);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44(1.0 - fVar13,fVar13);
        }
        else {
          dVar18 = (double)CONCAT44(0x3f800000,fVar13) - (double)CONCAT44(0x3f800000,fVar13);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar12 + DAT_8c0b312c + iVar1 + -0x20) = (int)((ulonglong)dVar18 >> 0x20);
        }
        else {
          *(double *)(puVar12 + DAT_8c0b312c + iVar1 + -0x20) = dVar18;
        }
        *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b3130 + iVar1 + -0x20;
        (*(code *)PTR_Vec3_scale_8c0b313c)
                  (ar4 + DAT_8c0b3138,puVar12 + DAT_8c0b3134 + iVar1 + -0x24,a6,ar7);
        a6 = (int *)(puVar12 + DAT_8c0b3140 + iVar1 + -0x20);
        *(int **)(puVar12 + iVar1 + -0x24) = a6;
        (*(code *)PTR_Vec3_scale_8c0b313c)
                  (ar4 + DAT_8c0b3148,puVar12 + DAT_8c0b3144 + iVar1 + -0x24,a6,ar7);
        *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b3144 + iVar1 + -0x20;
        (*(code *)PTR_Vec3_add_8c0b3154)
                  (puVar12 + DAT_8c0b3150 + iVar1 + -0x24,puVar12 + DAT_8c0b314c + iVar1 + -0x24,a6,
                   ar7);
        (*(code *)PTR_Vec3_assign_8c0b3158)
                  (ar4 + DAT_8c0b3138,puVar12 + DAT_8c0b3144 + iVar1 + -0x20,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0b315c)(puVar12 + DAT_8c0b3144 + iVar1 + -0x20,0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0b315c)(puVar12 + DAT_8c0b3140 + iVar1 + -0x20,0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0b315c)(puVar12 + DAT_8c0b3130 + iVar1 + -0x20,0xffffffff,a6,ar7);
        (*(code *)PTR_FUN_8c0b3160)(ar4 + DAT_8c0b3138,ar4 + DAT_8c0b3148,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar12 + iVar1 + 0x28) = (int)((ulonglong)dVar18 >> 0x20);
          dVar18 = (double)(ulonglong)*(uint *)(puVar12 + iVar1 + 0x28);
        }
        else {
          *(double *)(puVar12 + iVar1 + 0x28) = dVar18;
          in_xd0 = *(undefined8 *)(puVar12 + iVar1 + 0x28);
        }
        dVar15 = (double)((ulonglong)dVar18 & 0xffffffff);
        if (in_FPSCR_PR != '\0' || SUB84(dVar18,0) <= 0.0) {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)(DAT_8c0b3164 + ar4) = 0;
          uVar9 = 0;
          (*(code *)PTR_FUN_8c0b3168)(ar4,0,a6,ar7);
        }
      }
      (*(code *)PTR_FUN_8c0b3170)(ar5,puVar12 + DAT_8c0b316c + iVar1 + -0x20,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar12 + iVar1 + 0x24) = (int)((ulonglong)dVar15 >> 0x20);
        dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),
                                  *(undefined4 *)(puVar12 + iVar1 + 0x24));
      }
      else {
        *(double *)(puVar12 + iVar1 + 0x24) = dVar15;
        in_xd0 = *(undefined8 *)(puVar12 + iVar1 + 0x24);
        dVar15 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar15 / dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x30) = fVar13;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
      (*(code *)PTR_FUN_8c0b3174)(ar4,puVar12 + DAT_8c0b316c + iVar1 + -0x20,ar5,ar7);
      ar6 = ar5;
    }
    goto LAB_8c0b30ba;
  }
  if (*(int *)(DAT_8c0b1d0c + ar4) < 2) {
    uVar7 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b1d1c)
                      (ar4 + DAT_8c0b1d18,puVar8,ar6,ar7);
    piVar10 = DAT_8c0b1d24;
    *(undefined4 *)(puVar12 + DAT_8c0b1d20 + iVar1 + -0x20) = uVar7;
    if (*(int *)(puVar12 + DAT_8c0b1d20 + iVar1 + -0x20) == 7) {
      *(int *)(puVar12 + iVar1 + 0x1c) = ar4;
      ar6 = *(int **)(puVar12 + iVar1 + 0x1c);
      *(int *)((int)DAT_8c0b1d24 + *(int *)(puVar12 + iVar1 + 0x1c)) =
           *(int *)((int)DAT_8c0b1d24 + (int)ar6) + 1;
      ar7 = piVar10;
    }
    goto LAB_8c0b30ba;
  }
  (*(code *)PTR_vec3_clear_8c0b1e74)(puVar12 + DAT_8c0b1e70 + iVar1 + -0x20,puVar8,ar6,ar7);
  uVar7 = (*(code *)PTR_get_field_1c_026dd8_8c0b1e7c)(ar4 + DAT_8c0b1e78,puVar8,ar6,ar7);
  *(undefined4 *)(puVar12 + DAT_8c0b1e80 + iVar1 + -0x20) = uVar7;
  iVar11 = *(int *)(puVar12 + DAT_8c0b1e80 + iVar1 + -0x20);
  if (((iVar11 == 0x12) || (iVar11 == 0x13)) || (iVar11 == 0x14)) {
    uVar7 = (*(code *)PTR_FUN_8c0b1e84)(ar4,puVar8,ar6,ar7);
    *(undefined4 *)(puVar12 + DAT_8c0b1e88 + iVar1 + -0x20) = uVar7;
    a5 = *(undefined4 *)(puVar12 + DAT_8c0b1e88 + iVar1 + -0x20);
    uVar3 = (*(code *)PTR_FUN_8c0b1e8c)(ar4 + DAT_8c0b1e78,a5,uVar7,ar7);
    *(undefined4 *)(puVar12 + DAT_8c0b1e90 + iVar1 + -0x20) = uVar3;
    uVar3 = (*(code *)PTR_deref_u32_8c0b1e94)
                      (*(undefined4 *)(puVar12 + DAT_8c0b1e90 + iVar1 + -0x20),a5,uVar7,ar7);
    *(undefined4 *)(puVar12 + DAT_8c0b1e98 + iVar1 + -0x20) = uVar3;
    puVar5 = (undefined4 *)(ar4 + DAT_8c0b1e9c);
    puVar4 = *(undefined4 **)(puVar12 + DAT_8c0b1e98 + iVar1 + -0x20);
    uVar3 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar3;
    puVar5[2] = puVar4[2];
    *(int *)(puVar12 + iVar1 + 0x18) = iVar11 + -0x12;
    *(undefined **)(DAT_8c0b1e9c + ar4) =
         PTR_DAT_8c0b1ea0 +
         (*(int *)(puVar12 + iVar1 + 0x18) * 2 + *(int *)(puVar12 + iVar1 + 0x18)) * 8;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0b1ea4)(ar4 + DAT_8c0b1e78,DAT_8c0b1e78,uVar7,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar12 + DAT_8c0b1ea8 + iVar1 + -0x20) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(puVar12 + DAT_8c0b1ea8 + iVar1 + -0x20) = in_dr0;
    }
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b1eac + iVar1 + -0x20;
    ar7 = (int *)PTR_FUN_8c0b1eb0;
    (*(code *)PTR_FUN_8c0b1eb0)
              (ar4 + DAT_8c0b1e78,**(undefined4 **)(DAT_8c0b1e9c + ar4),uVar7,PTR_FUN_8c0b1eb0);
    (*(code *)PTR_Vec3_assign_8c0b1eb8)
              (puVar12 + DAT_8c0b1eb4 + iVar1 + -0x20,puVar12 + DAT_8c0b1eac + iVar1 + -0x20,uVar7,
               ar7);
    (*(code *)PTR_Vec3_dtor_8c0b1ebc)(puVar12 + DAT_8c0b1eac + iVar1 + -0x20,0xffffffff,uVar7,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b1ec0 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_sub_8c0b1ec8)(puVar12 + DAT_8c0b1ec4 + iVar1 + -0x24,ar4 + 0x54,uVar7,ar7);
    (*(code *)PTR_Vec3_assign_8c0b1eb8)
              (puVar12 + DAT_8c0b1e70 + iVar1 + -0x20,puVar12 + DAT_8c0b1ec0 + iVar1 + -0x20,uVar7,
               ar7);
    (*(code *)PTR_Vec3_dtor_8c0b1ebc)(puVar12 + DAT_8c0b1ec0 + iVar1 + -0x20,0xffffffff,uVar7,ar7);
    ar6 = (int *)(puVar12 + DAT_8c0b1eb4 + iVar1 + -0x20);
    (*(code *)PTR_Vec3_assign_8c0b1eb8)(ar4 + 0x54,ar6,ar6,ar7);
    puVar8 = PTR_DAT_8c0b1ecc;
    (*(code *)PTR_FUN_8c0b1ed0)(puVar12 + DAT_8c0b1e70 + iVar1 + -0x20,PTR_DAT_8c0b1ecc,ar6,ar7);
  }
  else {
    *(int *)(puVar12 + iVar1 + 0x14) = ar4;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0b1f20,
                                *(undefined4 *)(*(int *)(puVar12 + iVar1 + 0x14) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar12 + iVar1 + 0x14) + 0x28);
      in_dr0 = (double)CONCAT44(DAT_8c0b1f24,DAT_8c0b1f20);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar13,SUB84(in_dr0,0) * fVar13);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar12 + iVar1 + 0x14) + 0x28) = SUB84(in_dr0,0);
    }
    else {
      *(undefined8 *)(*(int *)(puVar12 + iVar1 + 0x14) + 0x28) = in_xd0;
    }
  }
  (*(code *)PTR_CAnimBody_GetCurFrame_8c0b1f28)(ar4 + DAT_8c0b1f24,puVar8,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar12 + iVar1 + 0x5c) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar15 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar1 + 0x5c),SUB84(in_dr0,0));
  }
  else {
    *(double *)(puVar12 + iVar1 + 0x5c) = in_dr0;
    dVar15 = *(double *)(puVar12 + iVar1 + 0x5c);
  }
  if (in_FPSCR_PR == '\0') {
    iVar2 = (int)(float)((ulonglong)dVar15 >> 0x20);
  }
  else {
    iVar2 = (int)dVar15;
  }
  if (iVar11 == 0x12) {
    if ((iVar2 == 0x1e) || (iVar2 == 0x54)) {
      *(undefined4 *)(DAT_8c0b1f78 + ar4) = 1;
      (*(code *)PTR_FUN_8c0b1f7c)(ar4,0xb,ar5,piVar10);
      ar6 = ar5;
      ar7 = piVar10;
    }
    fVar13 = DAT_8c0b1f80;
    fVar17 = DAT_8c0b1f84;
    if (in_FPSCR_SZ == '\0') {
      fVar13 = (float)iVar2;
      fVar17 = DAT_8c0b1f80;
    }
    if (in_FPSCR_PR == '\0' && fVar17 < fVar13) {
      fVar13 = DAT_8c0b1f84;
      fVar17 = DAT_8c0b1f88;
      if (in_FPSCR_SZ == '\0') {
        fVar13 = (float)iVar2;
        fVar17 = DAT_8c0b1f84;
      }
      if (in_FPSCR_PR == '\0' && fVar13 < fVar17) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c0b1f8c,
                                    *(undefined4 *)(puVar12 + (int)DAT_8c0b1f88 + iVar1 + -0x20));
        }
        else {
          in_xd0 = *(undefined8 *)(puVar12 + (int)DAT_8c0b1f88 + iVar1 + -0x20);
          dVar15 = (double)CONCAT44(uRam8c0b1f90,DAT_8c0b1f8c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar15 - dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + (int)DAT_8c0b1f88 + iVar1 + -0x20) = fVar13;
        }
        else {
          *(undefined8 *)(puVar12 + (int)DAT_8c0b1f88 + iVar1 + -0x20) = in_xd0;
        }
        goto LAB_8c0b262a;
      }
    }
    fVar13 = DAT_8c0b1fbc;
    fVar17 = DAT_8c0b1fc0;
    if (in_FPSCR_SZ == '\0') {
      fVar13 = (float)iVar2;
      fVar17 = DAT_8c0b1fbc;
    }
    if (in_FPSCR_PR == '\0' && fVar17 < fVar13) {
      fVar13 = DAT_8c0b1fc0;
      fVar17 = DAT_8c0b1fc4;
      if (in_FPSCR_SZ == '\0') {
        fVar13 = (float)iVar2;
        fVar17 = DAT_8c0b1fc0;
      }
      if (in_FPSCR_PR == '\0' && fVar13 < fVar17) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c0b1fc8,
                                    *(undefined4 *)(puVar12 + (int)DAT_8c0b1fc4 + iVar1 + -0x20));
        }
        else {
          in_xd0 = *(undefined8 *)(puVar12 + (int)DAT_8c0b1fc4 + iVar1 + -0x20);
          dVar15 = (double)CONCAT44(uRam8c0b1fcc,DAT_8c0b1fc8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar15 + dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar12 + (int)DAT_8c0b1fc4 + iVar1 + -0x20) = fVar13;
        }
        else {
          *(undefined8 *)(puVar12 + (int)DAT_8c0b1fc4 + iVar1 + -0x20) = in_xd0;
        }
        goto LAB_8c0b262a;
      }
    }
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2088 + iVar1 + -0x20;
    puVar8 = PTR_DAT_8c0b208c;
    (*(code *)PTR_Vec3_scale_8c0b2090)(ar4 + 0x14,PTR_DAT_8c0b208c,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2094 + iVar1 + -0x20;
    (*(code *)PTR_FUN_8c0b2098)(ar4 + 0x14,puVar8,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b209c + iVar1 + -0x20;
    (*(code *)PTR_Vec3_scale_8c0b2090)
              (puVar12 + DAT_8c0b20a4 + iVar1 + -0x24,PTR_DAT_8c0b20a0,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b20a8 + iVar1 + -0x20;
    puVar6 = puVar12 + DAT_8c0b20ac + iVar1 + -0x24;
    (*(code *)PTR_Vec3_add_8c0b20b4)(puVar12 + DAT_8c0b20b0 + iVar1 + -0x24,puVar6,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b20b8 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_normalize_8c0b20c0)(puVar12 + DAT_8c0b20bc + iVar1 + -0x24,puVar6,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b20c4)(ar4 + 0x14,puVar12 + DAT_8c0b20b8 + iVar1 + -0x20,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b20c8)(puVar12 + DAT_8c0b20b8 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b20c8)(puVar12 + DAT_8c0b20a8 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b20c8)(puVar12 + DAT_8c0b209c + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b20c8)(puVar12 + DAT_8c0b2094 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b20c8)(puVar12 + DAT_8c0b2088 + iVar1 + -0x20,0xffffffff,ar6,ar7);
  }
  else if (iVar11 == 0x13) {
    if ((iVar2 == 0x26) || (iVar2 == 0x3c)) {
      *(undefined4 *)(DAT_8c0b21b8 + ar4) = 1;
      (*(code *)PTR_FUN_8c0b21bc)(ar4,0xb,ar5,piVar10);
      ar7 = piVar10;
    }
    fVar13 = SUB84(dVar15,0);
    ar6 = (int *)(puVar12 + DAT_8c0b21c0 + iVar1 + -0x20);
    *(int **)(puVar12 + iVar1 + -0x24) = ar6;
    (*(code *)PTR_Vec3_scale_8c0b21c8)(ar4 + 0x14,PTR_DAT_8c0b21c4,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b21cc + iVar1 + -0x20;
    (*(code *)PTR_FUN_8c0b21d0)(ar4 + 0x14,PTR_FUN_8c0b21d0,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b21d4 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_scale_8c0b21c8)
              (puVar12 + DAT_8c0b21dc + iVar1 + -0x24,PTR_DAT_8c0b21d8,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b21e0 + iVar1 + -0x20;
    puVar6 = puVar12 + DAT_8c0b21e4 + iVar1 + -0x24;
    (*(code *)PTR_Vec3_add_8c0b21ec)(puVar12 + DAT_8c0b21e8 + iVar1 + -0x24,puVar6,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b21f0 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_normalize_8c0b21f8)(puVar12 + DAT_8c0b21f4 + iVar1 + -0x24,puVar6,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b21fc)(ar4 + 0x14,puVar12 + DAT_8c0b21f0 + iVar1 + -0x20,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2200)(puVar12 + DAT_8c0b21f0 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2200)(puVar12 + DAT_8c0b21e0 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2200)(puVar12 + DAT_8c0b21d4 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2200)(puVar12 + DAT_8c0b21cc + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2200)(puVar12 + DAT_8c0b21c0 + iVar1 + -0x20,0xffffffff,ar6,ar7);
  }
  else if (iVar11 == 0x14) {
    if ((iVar2 == 0x10) || (iVar2 == 0x47)) {
      *(undefined4 *)(DAT_8c0b22a0 + ar4) = 1;
      puVar8 = (undefined *)0xb;
      (*(code *)PTR_FUN_8c0b22a4)(ar4,0xb,ar5,piVar10);
      ar6 = ar5;
      ar7 = piVar10;
    }
    fVar13 = DAT_8c0b22a8;
    fVar17 = DAT_8c0b22ac;
    if (in_FPSCR_SZ == '\0') {
      fVar13 = (float)iVar2;
      fVar17 = DAT_8c0b22a8;
    }
    if (in_FPSCR_PR == '\0' && fVar17 < fVar13) {
      fVar13 = DAT_8c0b22ac;
      fVar17 = DAT_8c0b22b0;
      if (in_FPSCR_SZ == '\0') {
        fVar13 = (float)iVar2;
        fVar17 = DAT_8c0b22ac;
      }
      if (in_FPSCR_PR == '\0' && fVar13 < fVar17) {
        (*(code *)PTR_Vec3_set_xyz_8c0b22b8)(puVar12 + DAT_8c0b22b4 + iVar1 + -0x20,puVar8,ar6,ar7);
        *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b22bc + iVar1 + -0x20;
        (*(code *)PTR_FUN_8c0b22c4)(ar4 + 0x14,puVar12 + DAT_8c0b22c0 + iVar1 + -0x24,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c0b22c8)
                  (ar4 + 0x14,puVar12 + DAT_8c0b22bc + iVar1 + -0x20,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0b22cc)(puVar12 + DAT_8c0b22bc + iVar1 + -0x20,0xffffffff,ar6,ar7)
        ;
        (*(code *)PTR_object_dtor_delete_8c0b22d0)
                  (puVar12 + DAT_8c0b22b4 + iVar1 + -0x20,0xffffffff,ar6,ar7);
        goto LAB_8c0b262a;
      }
    }
    fVar13 = DAT_8c0b234c;
    fVar17 = DAT_8c0b2350;
    if (in_FPSCR_SZ == '\0') {
      fVar13 = (float)iVar2;
      fVar17 = DAT_8c0b234c;
    }
    if (in_FPSCR_PR == '\0' && fVar17 < fVar13) {
      fVar13 = DAT_8c0b2350;
      fVar17 = DAT_8c0b2354;
      if (in_FPSCR_SZ == '\0') {
        fVar13 = (float)iVar2;
        fVar17 = DAT_8c0b2350;
      }
      if (in_FPSCR_PR == '\0' && fVar13 < fVar17) {
        (*(code *)PTR_Vec3_set_xyz_8c0b235c)(puVar12 + DAT_8c0b2358 + iVar1 + -0x20,puVar8,ar6,ar7);
        *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2360 + iVar1 + -0x20;
        (*(code *)PTR_FUN_8c0b2368)(ar4 + 0x14,puVar12 + DAT_8c0b2364 + iVar1 + -0x24,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c0b236c)
                  (ar4 + 0x14,puVar12 + DAT_8c0b2360 + iVar1 + -0x20,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0b2370)(puVar12 + DAT_8c0b2360 + iVar1 + -0x20,0xffffffff,ar6,ar7)
        ;
        (*(code *)PTR_object_dtor_delete_8c0b2374)
                  (puVar12 + DAT_8c0b2358 + iVar1 + -0x20,0xffffffff,ar6,ar7);
        goto LAB_8c0b262a;
      }
    }
    fVar13 = (float)iVar2;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar13) {
      fVar13 = DAT_8c0b23f4;
      fVar17 = DAT_8c0b23f8;
      if (in_FPSCR_SZ == '\0') {
        fVar13 = (float)iVar2;
        fVar17 = DAT_8c0b23f4;
      }
      if (in_FPSCR_PR == '\0' && fVar13 < fVar17) {
        (*(code *)PTR_Vec3_set_xyz_8c0b2404)
                  (puVar12 + DAT_8c0b2400 + iVar1 + -0x20,PTR_Vec3_set_xyz_8c0b2404,ar6,ar7);
        *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2408 + iVar1 + -0x20;
        (*(code *)PTR_FUN_8c0b2410)(ar4 + 0x14,puVar12 + DAT_8c0b240c + iVar1 + -0x24,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c0b2414)
                  (ar4 + 0x14,puVar12 + DAT_8c0b2408 + iVar1 + -0x20,ar6,ar7);
        uVar7 = 0xffffffff;
        ar6 = (int *)(puVar12 + DAT_8c0b2408 + iVar1 + -0x20);
        (*(code *)PTR_Vec3_dtor_8c0b2418)(ar6,0xffffffff,ar6,0xffffffff);
        (*(code *)PTR_object_dtor_delete_8c0b241c)
                  (puVar12 + DAT_8c0b2400 + iVar1 + -0x20,0xffffffff,ar6,uVar7);
        goto LAB_8c0b262a;
      }
    }
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b24f4 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_scale_8c0b24fc)(ar4 + 0x14,PTR_DAT_8c0b24f8,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2500 + iVar1 + -0x20;
    (*(code *)PTR_FUN_8c0b2504)(ar4 + 0x14,puVar12 + DAT_8c0b2500 + iVar1 + -0x20,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2508 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_scale_8c0b24fc)
              (puVar12 + DAT_8c0b2510 + iVar1 + -0x24,PTR_DAT_8c0b250c,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2514 + iVar1 + -0x20;
    puVar6 = puVar12 + DAT_8c0b2518 + iVar1 + -0x24;
    (*(code *)PTR_Vec3_add_8c0b2520)(puVar12 + DAT_8c0b251c + iVar1 + -0x24,puVar6,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2524 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_normalize_8c0b252c)(puVar12 + DAT_8c0b2528 + iVar1 + -0x24,puVar6,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b2530)(ar4 + 0x14,puVar12 + DAT_8c0b2524 + iVar1 + -0x20,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2534)(puVar12 + DAT_8c0b2524 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2534)(puVar12 + DAT_8c0b2514 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2534)(puVar12 + DAT_8c0b2508 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2534)(puVar12 + DAT_8c0b2500 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b2534)
              (puVar12 + DAT_8c0b24f4 + iVar1 + -0x20,0xffffffff,ar6,PTR_Vec3_dtor_8c0b2534);
  }
  else {
    uVar7 = (*(code *)PTR_rand_range_8c0b2720)(ar4,0,0x1e,ar7);
    fVar13 = SUB84(dVar15,0);
    *(undefined4 *)(puVar12 + iVar1 + 0x58) = uVar7;
    if (*(int *)(puVar12 + iVar1 + 0x58) == 0) {
      *(undefined4 *)(DAT_8c0b2724 + ar4) = 1;
      (*(code *)PTR_FUN_8c0b2728)(ar4,0xb,ar5,piVar10);
      ar7 = piVar10;
    }
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b272c + iVar1 + -0x20;
    ar6 = (int *)PTR_Vec3_scale_8c0b2734;
    (*(code *)PTR_Vec3_scale_8c0b2734)(ar4 + 0x14,PTR_DAT_8c0b2730,PTR_Vec3_scale_8c0b2734,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2738 + iVar1 + -0x20;
    (*(code *)PTR_FUN_8c0b273c)(ar4 + 0x14,puVar12 + DAT_8c0b2738 + iVar1 + -0x20,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b2740 + iVar1 + -0x20;
    (*(code *)PTR_Vec3_scale_8c0b2734)
              (puVar12 + DAT_8c0b2748 + iVar1 + -0x24,PTR_DAT_8c0b2744,ar6,ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b274c + iVar1 + -0x20;
    (*(code *)PTR_Vec3_add_8c0b2758)
              (puVar12 + DAT_8c0b2754 + iVar1 + -0x24,puVar12 + DAT_8c0b2750 + iVar1 + -0x24,ar6,ar7
              );
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b275c + iVar1 + -0x20;
    (*(code *)PTR_Vec3_normalize_8c0b2764)
              (puVar12 + DAT_8c0b2760 + iVar1 + -0x24,PTR_Vec3_normalize_8c0b2764,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b2768)(ar4 + 0x14,puVar12 + DAT_8c0b275c + iVar1 + -0x20,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b276c)(puVar12 + DAT_8c0b275c + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b276c)(puVar12 + DAT_8c0b274c + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b276c)(puVar12 + DAT_8c0b2740 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b276c)(puVar12 + DAT_8c0b2738 + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b276c)(puVar12 + DAT_8c0b272c + iVar1 + -0x20,0xffffffff,ar6,ar7);
  }
LAB_8c0b262a:
  ar7 = (int *)(puVar12 + DAT_8c0b2770 + iVar1 + -0x20);
  (*(code *)PTR_Vec3_ctor_xyz_8c0b2774)(ar7,PTR_Vec3_ctor_xyz_8c0b2774,ar6,ar7);
  uVar7 = (*(code *)PTR_FUN_8c0b277c)
                    (puVar12 + DAT_8c0b2778 + iVar1 + -0x20,puVar12 + DAT_8c0b2770 + iVar1 + -0x20,
                     ar6,ar7);
  *(undefined4 *)(puVar12 + iVar1 + 0x54) = uVar7;
  *(undefined4 *)(puVar12 + DAT_8c0b2780 + iVar1 + -0x20) = *(undefined4 *)(puVar12 + iVar1 + 0x54);
  (*(code *)PTR_Vec3_dtor_8c0b276c)(puVar12 + DAT_8c0b2770 + iVar1 + -0x20,0xffffffff,ar6,ar7);
  if (*(int *)(puVar12 + DAT_8c0b2780 + iVar1 + -0x20) != 0) {
    (*(code *)PTR_vec3_copy_8c02b5fc_8c0b2788)
              (puVar12 + DAT_8c0b2784 + iVar1 + -0x20,*(undefined4 *)(puVar12 + iVar1 + -0x20),ar6,
               ar7);
    *(undefined1 **)(puVar12 + iVar1 + -0x24) = puVar12 + DAT_8c0b278c + iVar1 + -0x20;
    ar6 = (int *)PTR_FUN_8c0b2798;
    (*(code *)PTR_FUN_8c0b2798)
              (puVar12 + DAT_8c0b2794 + iVar1 + -0x24,puVar12 + DAT_8c0b2790 + iVar1 + -0x24,
               PTR_FUN_8c0b2798,ar7);
    (*(code *)PTR_Vec3_assign_8c0b2768)
              (ar4 + DAT_8c0b279c,puVar12 + DAT_8c0b278c + iVar1 + -0x20,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b276c)(puVar12 + DAT_8c0b278c + iVar1 + -0x20,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0b27a0)
              (puVar12 + DAT_8c0b2784 + iVar1 + -0x20,0xffffffff,ar6,ar7);
  }
  (*(code *)PTR_Vec3_assign_8c0b2768)(ar4 + DAT_8c0b27a4,ar4 + 0x14,ar6,ar7);
  uVar7 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b27ac)
                    (ar4 + DAT_8c0b27a8,ar4 + DAT_8c0b27a8,ar6,ar7);
  *(undefined4 *)(puVar12 + iVar1 + 0x50) = uVar7;
  if (*(int *)(puVar12 + iVar1 + 0x50) == 1) {
    *DAT_8c0b27b0 = *DAT_8c0b27b0 + 1;
    uVar9 = 0;
    *(undefined4 *)(DAT_8c0b27b4 + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0b27b8) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0b27b8) = (ulonglong)(uint)fVar13;
    }
  }
LAB_8c0b30ba:
  *(undefined4 *)(puVar12 + DAT_8c0b3118 + iVar1 + -0x20) = uVar9;
  (*(code *)PTR_Vec3_dtor_8c0b315c)(puVar12 + DAT_8c0b3178 + iVar1 + -0x20,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b315c)(puVar12 + DAT_8c0b317c + iVar1 + -0x20,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b315c)(puVar12 + DAT_8c0b316c + iVar1 + -0x20,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar12 + DAT_8c0b3118 + iVar1 + -0x20);
}



/* FUN_8c0b3184 @ 8c0b3184 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b3184(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int a5;
  undefined8 *a6;
  undefined4 unaff_r11;
  undefined4 uVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 in_xd0;
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
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = in_PR;
  uVar3 = 1;
  *(undefined1 **)(puVar4 + -0xcc) = puVar4 + DAT_8c0b3248 + -200;
  puVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_sub_8c0b324c)(ar6,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_length_8c0b3250)(puVar4 + DAT_8c0b3248 + -200,puVar2,a6,ar7);
  *(undefined4 *)(puVar4 + -0x94) = uVar1;
  (*(code *)PTR_Vec3_ctor_copy_8c0b3258)
            (puVar4 + DAT_8c0b3254 + -200,*(undefined4 *)(puVar4 + -0x94),a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0b325c)(puVar4 + DAT_8c0b3248 + -200,0xffffffff,a6,ar7);
  *(undefined1 **)(puVar4 + -0xcc) = puVar4 + DAT_8c0b3260 + -200;
  (*(code *)PTR_FUN_8c0b3264)(ar4 + 0x14,uVar1,a6,ar7);
  *(undefined1 **)(puVar4 + -0xcc) = puVar4 + -0x54;
  (*(code *)PTR_FUN_8c0b3264)(puVar4 + DAT_8c0b3268 + -0xcc,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c0b326c)(puVar4 + DAT_8c0b3260 + -200,puVar4 + -0x54,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar4 + -0x98) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar4 + -0x98) = in_dr0;
  }
  (*(code *)PTR_Vec3_dtor_8c0b325c)(puVar4 + -0x54,0xffffffff,a6,ar7);
  fVar5 = (float)in_dr0;
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0b325c)(puVar4 + DAT_8c0b3260 + -200,0xffffffff,a6,ar7);
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    uVar3 = 0;
    uVar1 = (*(code *)PTR_FUN_8c0b32bc)(ar4 + DAT_8c0b32b8,0,a6,ar7);
    *(undefined4 *)(puVar4 + -0x9c) = uVar1;
    if ((*(int *)(puVar4 + -0x9c) != 1) && (*(int *)(puVar4 + -0x9c) != 2)) {
      *(undefined4 *)(puVar4 + -0x8c) = 1;
      (*(code *)PTR_Vec3_dtor_8c0b32c4)(puVar4 + DAT_8c0b32c0 + -200,0xffffffff,a6,ar7);
      return *(undefined4 *)(puVar4 + -0x8c);
    }
    (*(code *)PTR_FUN_8c0b3388)(ar4,uVar3,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b3390)(ar4 + 0x14,ar4 + DAT_8c0b338c,a6,ar7);
    a6 = (undefined8 *)0x3;
    uVar1 = (*(code *)PTR_rand_range_8c0b3394)(ar4,0,3,ar7);
    *(undefined4 *)(puVar4 + -0xa0) = uVar1;
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)(*(int *)(puVar4 + -0xa0) + 1),fVar5);
    }
    else {
      dVar6 = (double)(*(int *)(puVar4 + -0xa0) + 1);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x24) = dVar6;
    }
    uVar1 = DAT_8c0b3398;
    (*(code *)PTR_FUN_8c0b339c)(ar4,DAT_8c0b3398,a6,ar7);
    uVar7 = (ulonglong)dVar6 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar7;
    }
    (*(code *)PTR_FUN_8c0b33a0)(ar4,uVar1,a6,ar7);
    fVar5 = (float)uVar7;
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(undefined4 *)(ar4 + 0x44) = 0;
    *(undefined4 *)(DAT_8c0b33a4 + ar4) = 0;
  case 1:
  case 3:
    a5 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c0b3390)(ar4 + DAT_8c0b338c,a5,a6,ar7);
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0b33b4)(ar4 + DAT_8c0b33b0,a5,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR == '\0' && 1.0 < fVar5) {
      *(int *)(puVar4 + -200) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0b34f8,*(undefined4 *)(*(int *)(puVar4 + -200) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -200) + 0x28);
        dVar6 = (double)CONCAT44(DAT_8c0b34fc,DAT_8c0b34f8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) - fVar5);
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)(puVar4 + -200) + 0x28) = SUB84(dVar6,0);
      }
      else {
        *(undefined8 *)(*(int *)(puVar4 + -200) + 0x28) = in_xd0;
      }
    }
    else {
      uVar8 = CONCAT44(0x3f800000,fVar5);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = uVar8;
      }
      a6 = (undefined8 *)0x3;
      a5 = 0;
      uVar1 = (*(code *)PTR_rand_range_8c0b3394)(ar4,0,3,ar7);
      *(undefined4 *)(puVar4 + -0xa4) = uVar1;
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)(*(int *)(puVar4 + -0xa4) + 1),(int)uVar8);
      }
      else {
        dVar6 = (double)(*(int *)(puVar4 + -0xa4) + 1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x24) = dVar6;
      }
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0b3500)(ar4 + DAT_8c0b34fc,a5,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0xa8) = (int)((ulonglong)dVar6 >> 0x20);
      uVar8 = CONCAT44(*(undefined4 *)(puVar4 + -0xa8),SUB84(dVar6,0));
      *(undefined4 *)(puVar4 + -0x88) = *(undefined4 *)(puVar4 + -0xa8);
    }
    else {
      *(double *)(puVar4 + -0xa8) = dVar6;
      uVar8 = *(undefined8 *)(puVar4 + -0xa8);
      *(undefined8 *)(puVar4 + -0x88) = uVar8;
    }
    *(undefined4 *)(ar4 + 0x44) = 1;
    *(undefined1 **)(puVar4 + -0xcc) = puVar4 + -100;
    puVar2 = ar5;
    (*(code *)PTR_Vec3_sub_8c0b3504)(ar6,ar5,a6,ar7);
    uVar1 = (*(code *)PTR_Vec3_length_8c0b3508)(puVar4 + -100,puVar2,a6,ar7);
    *(undefined4 *)(puVar4 + -0xac) = uVar1;
    (*(code *)PTR_Vec3_assign_8c0b3510)
              (puVar4 + DAT_8c0b350c + -200,*(undefined4 *)(puVar4 + -0xac),a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b3514)(puVar4 + -100,0xffffffff,a6,ar7);
    *(undefined1 **)(puVar4 + -0xcc) = puVar4 + -0x74;
    (*(code *)PTR_FUN_8c0b3518)(ar4 + 0x14,uVar1,a6,ar7);
    *(undefined1 **)(puVar4 + -0xcc) = puVar4 + -0x84;
    (*(code *)PTR_FUN_8c0b3518)(puVar4 + DAT_8c0b351c + -0xcc,uVar1,a6,ar7);
    (*(code *)PTR_FUN_8c0b3520)(puVar4 + -0x74,puVar4 + -0x84,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0xb0) = (int)((ulonglong)uVar8 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar4 + -0xb0) = uVar8;
    }
    (*(code *)PTR_Vec3_dtor_8c0b3514)(puVar4 + -0x84,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b3514)(puVar4 + -0x74,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c0b3524)(ar5,ar6,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0xb4) = (int)((ulonglong)uVar8 >> 0x20);
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)(puVar4 + -0xb4));
    }
    else {
      *(undefined8 *)(puVar4 + -0xb4) = uVar8;
      in_xd0 = *(undefined8 *)(puVar4 + -0xb4);
      dVar6 = *(double *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    a6 = ar5;
    uVar1 = (*(code *)PTR_FUN_8c0b3528)(ar4,ar6,ar5,ar7);
    *(undefined4 *)(puVar4 + -0xb8) = uVar1;
    uVar3 = *(undefined4 *)(puVar4 + -0xb8);
    if (*(int *)(DAT_8c0b352c + ar4) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0b3530) = *(undefined4 *)ar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0b3530) = *ar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0b3534) = *(undefined4 *)((int)ar5 + 4);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0b3534) = *(undefined8 *)((int)ar5 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0b3538) = *(undefined4 *)(ar5 + 1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0b3538) = ar5[1];
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0b353c) = *(undefined4 *)ar6;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0b353c) = *ar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0b3540) = *(undefined4 *)((int)ar6 + 4);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0b3540) = *(undefined8 *)((int)ar6 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0b3544) = *(undefined4 *)(ar6 + 1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0b3544) = ar6[1];
      }
    }
    break;
  case 4:
    uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c0b359c)(ar4 + DAT_8c0b3598,uVar1,a6,ar7);
    *(undefined4 *)(puVar4 + -0xbc) = uVar3;
    if (*(int *)(puVar4 + -0xbc) == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b35f4)(ar4 + DAT_8c0b35f0,uVar1,a6,ar7);
    }
    else {
      uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b35a0)
                        (ar4 + DAT_8c0b3598,uVar1,a6,ar7);
      *(undefined4 *)(puVar4 + -0xc0) = uVar1;
      if (*(int *)(puVar4 + -0xc0) == 1) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0b35a8)(ar4 + DAT_8c0b3598,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0b35ac)(ar4 + DAT_8c0b3598,uVar1,uVar3,ar7);
      }
    }
    uVar1 = (*(code *)PTR_FUN_8c0b35f8)(ar4,ar6,ar5,ar7);
    *(undefined4 *)(puVar4 + -0xc4) = uVar1;
    uVar3 = *(undefined4 *)(puVar4 + -0xc4);
    a6 = ar5;
  }
  *(undefined4 *)(puVar4 + -0x90) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c0b3600)(puVar4 + DAT_8c0b35fc + -200,0xffffffff,a6,ar7);
  return *(undefined4 *)(puVar4 + -0x90);
}



/* FUN_8c0b3604 @ 8c0b3604 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c0b3652 */
/* WARNING: Switch with 1 destination removed at 0x8c0b3662 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b3604(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  undefined4 in_PR;
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
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar4 + -0x18) = in_PR;
  iVar1 = -DAT_8c0b367c;
  (*(code *)PTR_Vec3_ctor_zero_8c0b3688)(puVar4 + DAT_8c0b3684 + iVar1 + -0x18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0b3694)(puVar4 + DAT_8c0b3690 + iVar1 + -0x18,ar5,ar6,ar7);
  iVar3 = *(int *)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    /* WARNING: Could not recover jumptable at 0x8c0b3676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_LAB_8c0b3698)[iVar3])();
    return uVar2;
  }
  *(undefined4 *)(puVar4 + DAT_8c0b4b8c + iVar1 + -0x18) = 1;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c0b4b94)
            (puVar4 + DAT_8c0b4b90 + iVar1 + -0x18,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b4b98)(puVar4 + DAT_8c0b4b84 + iVar1 + -0x18,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar4 + DAT_8c0b4b8c + iVar1 + -0x18);
}



/* FUN_8c0b4ba0 @ 8c0b4ba0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b4ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  undefined4 uVar3;
  undefined4 in_fr1;
  ulonglong uVar4;
  char in_FPSCR_SZ;
  
  uVar3 = 1;
  if (*(int *)(DAT_8c0b4c5c + ar4) == 0) {
    uVar2 = 0x17;
    iVar1 = (*(code *)PTR_FUN_8c0b4c64)(ar4 + DAT_8c0b4c60,0x17,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b4c68)(ar4 + DAT_8c0b4c60,uVar2,ar6,ar7);
    }
    *(int *)(DAT_8c0b4c5c + ar4) = *(int *)(DAT_8c0b4c5c + ar4) + 1;
  }
  else if (*(int *)(DAT_8c0b4c5c + ar4) == 1) {
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44((undefined4)DAT_8c0b4c6c,in_fr1);
      *(undefined4 *)(ar4 + 0x28) = (undefined4)DAT_8c0b4c6c;
    }
    else {
      uVar4 = CONCAT44(DAT_8c0b4c6c._4_4_,(undefined4)DAT_8c0b4c6c);
      *(ulonglong *)(ar4 + 0x28) = uVar4;
    }
    iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b4c68)(ar4 + DAT_8c0b4c60,ar5,ar6,ar7);
    if (iVar1 == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar4 & 0xffffffff;
      }
      a7 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0b4c74)(ar4 + DAT_8c0b4c60,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0b4c78)(ar4 + DAT_8c0b4c60,uVar3,uVar2,a7);
      uVar3 = 0;
      *(undefined4 *)(DAT_8c0b4c5c + ar4) = 0;
    }
  }
  return uVar3;
}



/* FUN_8c0b4c7c @ 8c0b4c7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b4c7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(DAT_8c0b4d04 + ar4) == 0) {
    a5 = 5;
    iVar1 = (*(code *)PTR_FUN_8c0b4d0c)(ar4 + DAT_8c0b4d08,5,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b4d10)(ar4 + DAT_8c0b4d08,a5,ar6,ar7);
    }
    *(int *)(DAT_8c0b4d04 + ar4) = *(int *)(DAT_8c0b4d04 + ar4) + 1;
  }
  else if ((*(int *)(DAT_8c0b4d04 + ar4) == 1) &&
          (iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b4d10)
                             (ar4 + DAT_8c0b4d08,ar5,ar6,ar7), iVar1 == 1)) {
    uVar2 = 0;
    *(undefined4 *)(DAT_8c0b4d04 + ar4) = 0;
  }
  return uVar2;
}



/* FUN_8c0b4d14 @ 8c0b4d14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b4e60) */
/* WARNING: Removing unreachable block (ram,0x8c0b4e86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b4d14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 a6;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int iVar4;
  undefined4 unaff_r13;
  undefined4 uVar5;
  undefined4 unaff_r14;
  undefined8 *puVar6;
  float fVar7;
  undefined8 in_dr0;
  float fVar11;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  double in_dr14;
  double dVar12;
  undefined8 in_xd14;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
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
  *(undefined4 *)((int)puVar6 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar6 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar6 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar6 + -0x18) = in_PR;
  *(undefined4 *)((int)puVar6 + -0xb4) = ar7;
  uVar5 = 1;
  uVar3 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0b5018)
            ((undefined1 *)((int)puVar6 + DAT_8c0b5014 + -0xb4),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0b5020)
            ((undefined1 *)((int)puVar6 + DAT_8c0b501c + -0xb4),uVar3,a6,ar7);
  uVar1 = (*(code *)PTR_get_field_6c_028cc4_8c0b5024)(ar5,uVar3,a6,ar7);
  *(undefined4 *)((int)puVar6 + -0x7c) = uVar1;
  iVar4 = *(int *)((int)puVar6 + -0x7c);
  if (iVar4 == 0) {
    *(undefined4 *)((int)puVar6 + -0x74) = 2;
    (*(code *)PTR_object_dtor_delete_8c0b5028)
              ((undefined1 *)((int)puVar6 + DAT_8c0b501c + -0xb4),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b502c)
              ((undefined1 *)((int)puVar6 + DAT_8c0b5014 + -0xb4),0xffffffff,a6,ar7);
    return *(undefined4 *)((int)puVar6 + -0x74);
  }
  iVar2 = *(int *)(DAT_8c0b5030 + ar4);
  if (iVar2 == 0) {
    ar7 = 0;
    a6 = 0xffffffff;
    uVar3 = 0xb;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0b503c)
              (ar4 + DAT_8c0b5034._4_4_,0xb,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0b5040)(ar4 + DAT_8c0b5034._4_4_,uVar3,a6,ar7);
    *(int *)((int)puVar6 + -0xa4) = ar4;
    *(int *)(DAT_8c0b5030 + *(int *)((int)puVar6 + -0xa4)) =
         *(int *)(DAT_8c0b5030 + *(int *)((int)puVar6 + -0xa4)) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0b5048)(ar4 + DAT_8c0b5034._4_4_,uVar3,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar6 + -0x84) = (int)((ulonglong)in_dr0 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)puVar6 + -0x84));
      }
      else {
        *(undefined8 *)((int)puVar6 + -0x84) = in_dr0;
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) + 1.0);
      }
      else {
        dVar12 = in_dr14 + (double)CONCAT44(0x3f800000,(int)in_dr0);
      }
      uVar3 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0b505c)
                        (ar4 + DAT_8c0b5034._4_4_,0x16,a6,ar7);
      *(undefined4 *)((int)puVar6 + -0x88) = uVar3;
      fVar7 = (float)*(int *)((int)puVar6 + -0x88);
      dVar8 = (double)(ulonglong)(uint)fVar7;
      if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(DAT_8c0b5060,fVar7);
        }
        else {
          dVar8 = (double)CONCAT44(PTR_FUN_8c0b5064,DAT_8c0b5060);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) + fVar7);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (in_FPSCR_PR == '\0') {
        bVar13 = SUB84(dVar12,0) < SUB84(dVar8,0);
      }
      else {
        bVar13 = dVar12 < dVar8;
      }
      dVar9 = dVar8;
      if (!bVar13) {
        uVar3 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0b505c)
                          (ar4 + DAT_8c0b5034._4_4_,0x16,a6,ar7);
        *(undefined4 *)((int)puVar6 + -0x8c) = uVar3;
        dVar9 = (double)((ulonglong)dVar8 & 0xffffffff);
        if (in_FPSCR_PR == '\0') {
          bVar13 = (float)*(int *)((int)puVar6 + -0x8c) < 0.0;
        }
        else {
          bVar13 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                    (float)*(int *)((int)puVar6 + -0x8c)) < dVar9;
        }
        if (bVar13) {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(DAT_8c0b5060,SUB84(dVar8,0));
          }
          else {
            dVar9 = (double)CONCAT44(PTR_FUN_8c0b5064,DAT_8c0b5060);
          }
        }
      }
      uVar1 = 0x16;
      uVar3 = (*(code *)PTR_FUN_8c0b5064)(ar4 + DAT_8c0b5034._4_4_,0x16,a6,ar7);
      *(undefined4 *)((int)puVar6 + -0x90) = uVar3;
      uVar3 = (*(code *)PTR_deref_u32_8c0b5068)(*(undefined4 *)((int)puVar6 + -0x90),uVar1,a6,ar7);
      *(undefined4 *)((int)puVar6 + -0x94) = uVar3;
      *(undefined1 **)((int)puVar6 + -0xb8) = (undefined1 *)((int)puVar6 + -0x44);
      (*(code *)PTR_FUN_8c0b506c)
                (ar4 + DAT_8c0b5034._4_4_,*(undefined4 *)**(undefined4 **)((int)puVar6 + -0x94),a6,
                 ar7);
      (*(code *)PTR_Vec3_assign_8c0b5070)
                ((undefined1 *)((int)puVar6 + DAT_8c0b5014 + -0xb4),
                 (undefined1 *)((int)puVar6 + -0x44),a6,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0b502c)((undefined1 *)((int)puVar6 + -0x44),0xffffffff,a6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0b5048)(ar4 + DAT_8c0b5034._4_4_,uVar3,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar6 + -0x98) = (int)((ulonglong)dVar9 >> 0x20);
        uVar10 = CONCAT44(DAT_8c0b5074,*(undefined4 *)((int)puVar6 + -0x98));
      }
      else {
        *(double *)((int)puVar6 + -0x98) = dVar9;
        uVar10 = CONCAT44(DAT_8c0b5078,DAT_8c0b5074);
      }
      if (in_FPSCR_PR != '\0' || (float)(uVar10 >> 0x20) <= (float)uVar10) {
        uVar10 = uVar10 & 0xffffffff;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar6 + DAT_8c0b5078 + -0xb4) = 0;
        }
        else {
          *(ulonglong *)((int)puVar6 + DAT_8c0b5078 + -0xb4) = uVar10;
        }
      }
      (*(code *)PTR_vec3_copy_8c02b5fc_8c0b507c)
                ((undefined1 *)((int)puVar6 + -0x50),*(undefined4 *)((int)puVar6 + -0xb4),a6,ar7);
      *(undefined1 **)((int)puVar6 + -0xb8) = (undefined1 *)((int)puVar6 + -0x60);
      (*(code *)PTR_FUN_8c0b5084)
                ((undefined1 *)((int)puVar6 + DAT_8c0b5080 + -0xb8),
                 (undefined1 *)((int)puVar6 + -0x50),a6,ar7);
      *(undefined1 **)((int)puVar6 + -0xb8) = (undefined1 *)((int)puVar6 + -0x70);
      (*(code *)PTR_Vec3_add_8c0b5088)((undefined1 *)((int)puVar6 + -0x60),ar6,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0b5070)
                ((undefined1 *)((int)puVar6 + DAT_8c0b5014 + -0xb4),
                 (undefined1 *)((int)puVar6 + -0x70),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b502c)((undefined1 *)((int)puVar6 + -0x70),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b502c)((undefined1 *)((int)puVar6 + -0x60),0xffffffff,a6,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c0b5028)
                ((undefined1 *)((int)puVar6 + -0x50),0xffffffff,a6,ar7);
      (*(code *)PTR_FUN_8c0b508c)(iVar4,uVar3,a6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0b5048)(ar4 + DAT_8c0b5034._4_4_,uVar3,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar6 + -0x9c) = (int)(uVar10 >> 0x20);
        dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar6 + -0x9c),(int)uVar10);
      }
      else {
        *(ulonglong *)((int)puVar6 + -0x9c) = uVar10;
        dVar12 = *(double *)((int)puVar6 + -0x9c);
      }
      if (in_FPSCR_PR == '\0') {
        iVar4 = (int)(float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        iVar4 = (int)dVar12;
      }
      if (iVar4 == 0x28) {
        (*(code *)PTR_FUN_8c0b5090)(ar5,uVar3,a6,ar7);
        *(undefined4 *)(DAT_8c0b5094 + ar4) = 1;
      }
      uVar3 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b5044)
                        (ar4 + DAT_8c0b5034._4_4_,uVar3,a6,ar7);
      *(undefined4 *)((int)puVar6 + -0xa0) = uVar3;
      if (*(int *)((int)puVar6 + -0xa0) == 1) {
        uVar5 = 0;
        *(int *)((int)puVar6 + -0xb0) = ar4;
        *(byte *)(DAT_8c0b5058 + *(int *)((int)puVar6 + -0xb0)) =
             *(byte *)(DAT_8c0b5058 + *(int *)((int)puVar6 + -0xb0)) & 0xfb | 4;
        *(undefined4 *)(DAT_8c0b5030 + ar4) = 0;
      }
    }
    goto LAB_8c0b4fe2;
  }
  (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b5044)(ar4 + DAT_8c0b5034._4_4_,uVar3,a6,ar7);
  (*(code *)PTR_CAnimBody_GetCurFrame_8c0b5048)(ar4 + DAT_8c0b5034._4_4_,uVar3,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar6 + -0x80) = (int)((ulonglong)in_dr0 >> 0x20);
    fVar7 = *(float *)((int)puVar6 + -0x80);
    fVar11 = DAT_8c0b504c;
  }
  else {
    *(undefined8 *)((int)puVar6 + -0x80) = in_dr0;
    fVar7 = DAT_8c0b504c;
    fVar11 = _DAT_8c0b5050;
  }
  if (in_FPSCR_PR != '\0' || fVar11 <= fVar7) {
    *(int *)((int)puVar6 + -0xa8) = ar4;
    *(int *)(DAT_8c0b5030 + *(int *)((int)puVar6 + -0xa8)) =
         *(int *)(DAT_8c0b5030 + *(int *)((int)puVar6 + -0xa8)) + 1;
    ar7 = *(undefined4 *)((int)puVar6 + (int)_DAT_8c0b5050 + -0xb4);
    (*(code *)PTR_FUN_8c0b5054)(ar4,0xc,ar6,ar7);
    *(int *)((int)puVar6 + -0xac) = ar4;
    *(byte *)(DAT_8c0b5058 + *(int *)((int)puVar6 + -0xac)) =
         *(byte *)(DAT_8c0b5058 + *(int *)((int)puVar6 + -0xac)) & 0xfb;
    a6 = ar6;
  }
LAB_8c0b4fe2:
  *(undefined4 *)((int)puVar6 + -0x78) = uVar5;
  (*(code *)PTR_object_dtor_delete_8c0b5028)
            ((undefined1 *)((int)puVar6 + DAT_8c0b501c + -0xb4),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b502c)
            ((undefined1 *)((int)puVar6 + DAT_8c0b5014 + -0xb4),0xffffffff,a6,ar7);
  return *(undefined4 *)((int)puVar6 + -0x78);
}



/* FUN_8c0b5098 @ 8c0b5098 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b5098(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  double dVar8;
  undefined4 in_fr5;
  undefined8 in_xd0;
  bool bVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined8 uStack_74;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  uVar4 = 1;
  uStack_98 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0b52ec)(auStack_1c,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0b52f0 + ar4) = 0xffffffff;
  iVar2 = *(int *)(DAT_8c0b52f4 + ar4);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iStack_6c = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b5300)
                            (ar4 + DAT_8c0b52f8,ar5,ar6,ar7);
      if (iStack_6c == 1) {
        ar5 = 0x15;
        iVar2 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0b5308)
                          (ar4 + DAT_8c0b52f8,0x15,ar6,ar7);
        uStack_74 = (double)CONCAT44(iVar2,(undefined4)uStack_74);
        if (in_FPSCR_PR == '\0') {
          dVar8 = (double)CONCAT44((float)iVar2,in_fr5);
        }
        else {
          dVar8 = (double)iVar2;
        }
        dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (in_FPSCR_PR == '\0') {
          bVar9 = (float)((ulonglong)dVar8 >> 0x20) < 0.0;
        }
        else {
          bVar9 = dVar8 < dVar7;
        }
        if (bVar9) {
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            dVar7 = (double)CONCAT44(PTR_s_CAnimBody_SetFrame_033e6e_8c0b5310,DAT_8c0b530c);
          }
        }
        in_dr0 = (double)((ulonglong)dVar7 & 0xffffffff);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0b5310)(ar4 + DAT_8c0b52f8,ar5,ar6,ar7);
        *(undefined4 *)(DAT_8c0b52f4 + ar4) = 2;
        *(undefined4 *)(DAT_8c0b5304 + ar4) = 0;
        uVar4 = 0;
        (*(code *)PTR_FUN_8c0b5314)(uStack_98,ar5,ar6,ar7);
      }
      else {
        (*(code *)PTR_CAnimBody_GetCurFrame_8c0b5318)(ar4 + DAT_8c0b52f8,ar5,ar6,ar7);
        dVar8 = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          uStack_74 = (double)CONCAT44(uStack_74._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
          dVar8 = uStack_74;
        }
        uStack_74 = dVar8;
        iStack_78 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0b5308)
                              (ar4 + DAT_8c0b52f8,0x15,ar6,ar7);
        uVar3 = SUB84(in_dr0,0);
        ar5 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0b531c)(iStack_78 + -1,8,ar6,ar7);
        in_dr0 = uStack_74;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44((undefined4)uStack_74,uVar3);
        }
        if (in_FPSCR_PR == '\0') {
          iVar2 = (int)(float)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          iVar2 = (int)in_dr0;
        }
        uStack_84 = ar5;
        iStack_80 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b5320)(iVar2,ar5,ar6,ar7);
        if (iStack_80 == 0) {
          iStack_8c = *(int *)(DAT_8c0b5304 + ar4);
          *(int *)(DAT_8c0b5304 + ar4) = iStack_8c + 1;
          *(int *)(DAT_8c0b52f0 + ar4) = iStack_8c;
          iStack_88 = ar4;
        }
      }
    }
    else if (iVar2 == 2) {
      uVar4 = 0;
    }
    goto LAB_8c0b51e6;
  }
  ar5 = 0x15;
  iStack_68 = (*(code *)PTR_FUN_8c0b52fc)(ar4 + DAT_8c0b52f8,0x15,ar6,ar7);
  uVar5 = SUB84(in_dr0,0);
  if (iStack_68 == 1) {
LAB_8c0b50fa:
    *(undefined4 *)(DAT_8c0b5304 + ar4) = 0;
    *(int *)(DAT_8c0b52f4 + ar4) = *(int *)(DAT_8c0b52f4 + ar4) + 1;
    iStack_7c = ar4;
  }
  else if (iStack_68 == 2) {
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b5300)(ar4 + DAT_8c0b52f8,ar5,ar6,ar7);
    goto LAB_8c0b50fa;
  }
  in_dr0 = (double)(ulonglong)uVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(double *)(ar4 + 0x2c) = in_dr0;
  }
LAB_8c0b51e6:
  fVar6 = SUB84(in_dr0,0);
  puStack_9c = auStack_2c;
  (*(code *)PTR_FUN_8c0b5324)(ar4 + 0x14,ar5,ar6,ar7);
  puStack_9c = auStack_3c;
  (*(code *)PTR_Vec3_normalize_8c0b5328)(auStack_2c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0b532c)(auStack_1c,auStack_3c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b5330)(auStack_3c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b5330)(auStack_2c,0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    fVar6 = *(float *)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = fVar6 + 1.0;
  }
  else {
    fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
  }
  uStack_94 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    uStack_94 = CONCAT44(ar4,fVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(uStack_94._4_4_ + 0x2c) = (undefined4)uStack_94;
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),(undefined4)uStack_94);
  }
  else {
    *(undefined8 *)(uStack_94._4_4_ + 0x2c) = uStack_94;
    dVar8 = *(double *)(ar4 + 0x38);
    in_xd0 = uStack_94;
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0b5334,fVar6);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c0b5338,DAT_8c0b5334);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 * dVar8,0);
  }
  uVar1 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    uStack_60 = CONCAT44(uStack_60._4_4_,fVar6);
    uVar1 = uStack_60;
  }
  uStack_60 = uVar1;
  puStack_9c = auStack_4c;
  (*(code *)PTR_Vec3_scale_8c0b533c)((int)&puStack_9c + DAT_8c0b5338,&uStack_60,ar6,ar7);
  (*(code *)PTR_FUN_8c0b5340)(ar4 + 0x14,auStack_4c,ar6,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0b5330)(auStack_4c,0xffffffff,ar6,ar7);
  puStack_9c = (undefined1 *)((int)&uStack_60 + 4);
  (*(code *)PTR_Vec3_normalize_8c0b5328)(ar4 + 0x14,uVar3,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0b532c)(ar4 + 0x14,(int)&uStack_60 + 4,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0b5330)((int)&uStack_60 + 4,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0b532c)(ar4 + DAT_8c0b5338,ar4 + 0x14,ar6,ar7);
  uStack_64 = uVar4;
  (*(code *)PTR_Vec3_dtor_8c0b5330)(auStack_1c,0xffffffff,ar6,ar7);
  return uStack_64;
}



/* FUN_8c0b5344 @ 8c0b5344 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0b5344(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  uint uVar3;
  float fVar4;
  double in_dr0;
  ulonglong uVar5;
  double dVar6;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = ar4[0x1a];
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    a5 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0b54b8)
              ((int)ar4 + DAT_8c0b54b0._4_4_,0,0xffffffff,0);
    uVar3 = SUB84(in_dr0,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0b54bc)((int)ar4 + DAT_8c0b54b0._4_4_,a5,ar6,ar7);
    uVar5 = (ulonglong)uVar3;
    if (in_FPSCR_SZ == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = uVar5;
    }
    (*(code *)PTR_FUN_8c0b54c0)(ar4 + 5,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(_DAT_8c0b54c8,(int)uVar5);
      *(undefined4 *)((int)ar4 + DAT_8c0b54c4) = _DAT_8c0b54c8;
    }
    else {
      in_dr0 = (double)CONCAT44(PTR_FUN_8c0b54cc,_DAT_8c0b54c8);
      *(double *)((int)ar4 + DAT_8c0b54c4) = in_dr0;
    }
    (*(code *)PTR_FUN_8c0b54cc)(ar4,a5,ar6,ar7);
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else {
    a5 = ar5;
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return iVar1;
      }
      (*(code *)PTR_FUN_8c0b54e4)(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),ar4[10]);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 10);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar4 = SUB84(in_dr0 * in_dr0,0);
      }
      if (in_FPSCR_SZ == '\0') {
        ar4[10] = (int)fVar4;
        fVar4 = (float)ar4[10];
      }
      else {
        *(ulonglong *)(ar4 + 10) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0b54e8,fVar4);
      }
      else {
        uVar5 = CONCAT44(DAT_8c0b54ec,DAT_8c0b54e8);
      }
      if (in_FPSCR_PR != '\0' || (float)(uVar5 >> 0x20) <= (float)uVar5) {
        return (int)&DAT_8c0b54e8;
      }
      if (in_FPSCR_SZ == '\0') {
        ar4[10] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 10) = uVar5 & 0xffffffff;
      }
      iVar1 = (int)ar4 + DAT_8c0b54ec;
      (*(code *)PTR_Vec3_assign_8c0b54f0)(ar4 + 5,iVar1,ar6,ar7);
      ar4[0x1a] = 0;
      uVar2 = (**(code **)(*ar4 + 0x2c))(ar4,iVar1,ar6,ar7);
      return uVar2;
    }
  }
  uVar3 = SUB84(in_dr0,0);
  if (ar5 == 0) {
    (*(code *)PTR_FUN_8c0b54d0)(ar4,a5,ar6,ar7);
    uVar5 = (ulonglong)uVar3;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c0b54c4) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + DAT_8c0b54c4) = uVar5;
    }
    (*(code *)PTR_Vec3_length_sq_8c0b54d4)(ar4 + 1,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0b54d8,(int)(uVar5 >> 0x20));
      uVar5 = in_xd0;
    }
    else {
      dVar6 = (double)CONCAT44(_DAT_8c0b54dc,DAT_8c0b54d8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[10] = (int)fVar4;
    }
    else {
      *(ulonglong *)(ar4 + 10) = uVar5;
    }
    ar5 = 0x68;
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else if ((ar5 == 1) || (ar5 == 2)) {
    ar4[0x1a] = 0;
    if (in_FPSCR_SZ == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = (ulonglong)in_dr0 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c0b54c4) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + DAT_8c0b54c4) = (ulonglong)in_dr0 & 0xffffffff;
    }
    ar5 = (*(code *)PTR_FUN_8c0b54d0)(ar4,a5,ar6,ar7);
  }
  return ar5;
}



/* FUN_8c0b54f4 @ 8c0b54f4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b57f8) */
/* WARNING: Removing unreachable block (ram,0x8c0b5562) */
/* WARNING: Removing unreachable block (ram,0x8c0b5566) */
/* WARNING: Removing unreachable block (ram,0x8c0b57fc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b54f4(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  int a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  uint in_fr1;
  undefined4 uVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = auStack_4;
  }
  else {
    puVar2 = auStack_8;
  }
  *(undefined4 *)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(puVar2 + -8) = unaff_r13;
  *(undefined4 *)(puVar2 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar2 + -0x10) = in_PR;
  uVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0b5850)(ar4 + DAT_8c0b584c,ar5,ar6,ar7);
  uVar5 = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar2 + -0xd8) = 0;
  }
  else {
    *(ulonglong *)(puVar2 + -0xd8) = uVar5;
  }
  fVar6 = 1.0;
  (*(code *)PTR_Vec3_ctor_zero_8c0b5858)(puVar2 + DAT_8c0b5854 + -0xe0,uVar1,a6,ar7);
  uVar3 = (undefined4)uVar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0b5858)(puVar2 + DAT_8c0b585c + -0xe0,uVar1,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0b5858)(puVar2 + DAT_8c0b5860 + -0xe0,uVar1,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0b5858)(puVar2 + DAT_8c0b5864 + -0xe0,uVar1,a6,ar7);
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(DAT_8c0b5868 + ar4) << 0x1e))) {
    if ((*(int *)(DAT_8c0b58cc + ar6) != 0) &&
       ((int)((uint)*(byte *)(DAT_8c0b5868 + ar4) << 0x1b) < 0)) {
      *(undefined4 *)(DAT_8c0b586c + ar4) = 2;
    }
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b5864 + -0xe0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b5860 + -0xe0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b585c + -0xe0,0xffffffff,a6,ar7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b5854 + -0xe0,0xffffffff,a6,ar7);
  }
  else {
    *(undefined4 *)(DAT_8c0b586c + ar4) = 1;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(*(int *)(ar6 + 0x68) + DAT_8c0b5870);
    }
    (*(code *)PTR_Vec3_assign_8c0b5874)
              (puVar2 + DAT_8c0b5854 + -0xe0,*(int *)(ar6 + 0x68) + 4,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + DAT_8c0b5878 + -0xe0),uVar3);
    }
    else {
      dVar4 = *(double *)(puVar2 + DAT_8c0b5878 + -0xe0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + (double)CONCAT44(in_fr14,fVar6);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar2 + DAT_8c0b5878 + -0xe0) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(puVar2 + DAT_8c0b5878 + -0xe0) = dVar4;
    }
    *(undefined1 **)(puVar2 + -0xe4) = puVar2 + DAT_8c0b587c + -0xe0;
    (*(code *)PTR_Vec3_sub_8c0b5880)(ar5,puVar2 + DAT_8c0b5878 + -0xe4,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b5874)(ar4 + DAT_8c0b584c,puVar2 + DAT_8c0b587c + -0xe0,a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b587c + -0xe0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0b5888)(ar4 + DAT_8c0b584c,uVar1,a6,ar7);
    uVar3 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar2 + -0xdc) = uVar3;
      dVar4 = (double)CONCAT44(uVar3,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)(puVar2 + -0xdc) = dVar4;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar6 = SUB84(dVar4 + (double)CONCAT44(in_fr14,fVar6),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0xdc),fVar6);
    }
    else {
      dVar4 = *(double *)(puVar2 + -0xdc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar4 - dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0b588c,fVar6);
    }
    else {
      dVar4 = (double)CONCAT44(PTR_Vec3_length_8c0b5890,DAT_8c0b588c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar4 * dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar2 + -0xd8) = fVar6;
      fVar6 = *(float *)(puVar2 + -0xd8);
    }
    else {
      *(undefined8 *)(puVar2 + -0xd8) = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar2 + -0xd8) = 0;
      }
      else {
        *(ulonglong *)(puVar2 + -0xd8) = (ulonglong)(uint)fVar6;
      }
    }
    uVar5 = (ulonglong)(uint)fVar6;
    (*(code *)PTR_Vec3_length_8c0b5890)(ar4 + DAT_8c0b584c,uVar1,a6,ar7);
    (*(code *)PTR_FUN_8c0b5894)(ar4 + DAT_8c0b584c,puVar2 + -0xd8,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b5874)(puVar2 + DAT_8c0b585c + -0xe0,ar5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b5874)
              (puVar2 + DAT_8c0b5860 + -0xe0,*(int *)(ar6 + 0x68) + 4,a6,ar7);
    *(undefined1 **)(puVar2 + -0xe4) = puVar2 + -0x70;
    (*(code *)PTR_Vec3_sub_8c0b5880)
              (puVar2 + DAT_8c0b589c + -0xe4,puVar2 + DAT_8c0b5898 + -0xe4,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b5874)(puVar2 + DAT_8c0b5864 + -0xe0,puVar2 + -0x70,a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + -0x70,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c0b58a4)(puVar2 + -0x7c,uVar1,a6,ar7);
    *(undefined1 **)(puVar2 + -0xe4) = puVar2 + -0x8c;
    (*(code *)PTR_FUN_8c0b58ac)(puVar2 + DAT_8c0b58a8 + -0xe4,puVar2 + -0x7c,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b5874)(puVar2 + DAT_8c0b5864 + -0xe0,puVar2 + -0x8c,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + -0x8c,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0b58b0)(puVar2 + -0x7c,0xffffffff,a6,ar7);
    a5 = puVar2 + DAT_8c0b5864 + -0xe0;
    (*(code *)PTR_FUN_8c0b58b4)(ar4 + 0x14,a5,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar2 + -0xe0) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)(puVar2 + -0xe0);
    }
    else {
      *(ulonglong *)(puVar2 + -0xe0) = uVar5;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < (float)uVar5) {
      (*(code *)PTR_Vec3_set_xyz_8c0b58a4)(puVar2 + -0xb4,a5,a6,ar7);
      *(undefined1 **)(puVar2 + -0xe4) = puVar2 + -0xc4;
      (*(code *)PTR_FUN_8c0b58ac)(ar4 + 0x14,puVar2 + -0xb4,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0b5874)(ar4 + 0x14,puVar2 + -0xc4,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + -0xc4,0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c0b58b0)(puVar2 + -0xb4,0xffffffff,a6,ar7);
    }
    else {
      (*(code *)PTR_Vec3_set_xyz_8c0b58a4)(puVar2 + -0x98,a5,a6,ar7);
      *(undefined1 **)(puVar2 + -0xe4) = puVar2 + -0xa8;
      (*(code *)PTR_FUN_8c0b58ac)(ar4 + 0x14,puVar2 + -0x98,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0b5874)(ar4 + 0x14,puVar2 + -0xa8,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + -0xa8,0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c0b58b0)(puVar2 + -0x98,0xffffffff,a6,ar7);
      (*(code *)PTR_FUN_8c0b5894)(puVar2 + DAT_8c0b5864 + -0xe0,PTR_DAT_8c0b58bc,a6,ar7);
    }
    *(undefined1 **)(puVar2 + -0xe4) = puVar2 + -0xd4;
    (*(code *)PTR_Vec3_scale_8c0b58c4)(puVar2 + DAT_8c0b58a8 + -0xe4,PTR_DAT_8c0b58c0,a6,ar7);
    (*(code *)PTR_FUN_8c0b58c8)(ar4 + DAT_8c0b584c,puVar2 + -0xd4,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + -0xd4,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b5864 + -0xe0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b5860 + -0xe0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b585c + -0xe0,0xffffffff,a6,ar7);
    uVar1 = (*(code *)PTR_Vec3_dtor_8c0b5884)(puVar2 + DAT_8c0b5854 + -0xe0,0xffffffff,a6,ar7);
  }
  return uVar1;
}



/* get_field_314_0b58d0 @ 8c0b58d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_314_0b58d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0b58d8 + ar4);
}



/* FUN_8c0b58dc @ 8c0b58dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b58dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0b58e4;
  *(undefined4 *)(DAT_8c0b58e4 + ar4) = ar5;
  return iVar1;
}



/* Class_12b2ac_m7_0b58e8 @ 8c0b58e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12b2ac_m7_0b58e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0b5904)(ar4,ar5,ar6,ar7);
  iVar1 = DAT_8c0b5908;
  *(undefined4 *)(DAT_8c0b5908 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0b590c @ 8c0b590c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b590c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b59e0,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b59e8;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b59e8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b59f4,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b59f8;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b59f8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b59fc,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b5a00;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b5a00,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b5a04,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b5a08;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b5a08,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0b5a1c)(auStack_1c,puVar3,uVar2,ar7);
  (*(code *)PTR_FUN_8c0b5a24)(DAT_8c0b5a20,uVar1,uVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0b5a1c)(auStack_34,uVar1,uVar2,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0b5a24)(DAT_8c0b5a20 + 0x18,uVar1,uVar2,ar7);
  return uVar2;
}



/* FUN_8c0b5a30 @ 8c0b5a30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0b5a30(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0b5a6c)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0b5a70;
  *(undefined1 *)(DAT_8c0b5a74 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c0b5a78 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c0b5a7c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b5a80 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b5a84 + (int)ar4) = 0;
  return ar4;
}



/* Class_12b2e8_m0_0b5a88 @ 8c0b5a88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b2e8_m0_0b5a88(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0b5ac4;
    a5 = 0;
    (*(code *)PTR_Class_129c70_m0_02f1b8_8c0b5ac8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0b5acc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12b2e8_m1_0b5ad0 @ 8c0b5ad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b2e8_m1_0b5ad0(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 a5;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  int *a6;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [20];
  
  (*(code *)PTR_Vec3_ctor_zero_8c0b5bd4)(auStack_28,PTR_Vec3_ctor_zero_8c0b5bd4,ar6,ar7);
  puVar7 = auStack_48;
  iVar6 = 0x10;
  puVar5 = PTR_DAT_8c0b5bd8;
  do {
    puVar4 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar4;
    puVar7 = puVar7 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0;
  piVar8 = ar5;
  piVar9 = ar6;
  (*(code *)PTR_FUN_8c0b5bdc)(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x40) != 2) {
    uVar1 = (*(code *)PTR_FUN_8c0b5be0)(ar6[6],piVar8,piVar9,ar7);
    piVar8 = (int *)0xf;
    iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b5be4)(uVar1 & 0xffff,0xf,piVar9,ar7);
    if (((iVar3 == 0) && (*(int *)(ar4 + 0x40) == 0)) &&
       (uVar1 = (*(code *)PTR_FUN_8c0b5be0)(ar6[6],piVar8,piVar9,ar7),
       *(uint *)(DAT_8c0b5be8 + ar4) != (uVar1 & 0xffff))) {
      *(undefined4 *)(DAT_8c0b5bec + ar4) = 1;
    }
    if (((*(int *)(ar4 + 0x6c) == 0) && (*(int *)(ar4 + 0x40) == 0)) &&
       ((*(char *)(DAT_8c0b5bf0 + ar4) == '\x03' &&
        ((piVar8 = ar6, iVar3 = (*(code *)PTR_FUN_8c0b5bf4)(ar4,ar6,piVar9,ar7), iVar3 == 1 &&
         (*(int *)(DAT_8c0b5bec + ar4) == 1)))))) {
      piVar8 = ar5;
      piVar9 = ar6;
      uVar2 = (*(code *)PTR_FUN_8c0b5bf8)(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = uVar2;
    }
    if (*(int *)(DAT_8c0b5bec + ar4) == 1) {
      a6 = (int *)0x0;
      while( true ) {
        piVar8 = (int *)0x1;
        iVar3 = (**(code **)(DAT_8c0b5d10 + *ar5))(ar5,1,piVar9,ar7);
        if (iVar3 <= (int)a6) break;
        uVar2 = 1;
        piVar9 = a6;
        iVar3 = (**(code **)(DAT_8c0b5d08 + *ar5))(ar5,1,a6,ar7);
        iVar3 = (**(code **)(DAT_8c0b5d0c + *(int *)(iVar3 + 8)))(iVar3,uVar2,piVar9,ar7);
        if (iVar3 == 1) {
          iVar6 = iVar6 + 1;
        }
        a6 = (int *)((int)a6 + 1);
      }
      if (((iVar6 == 0) && (*(char *)(DAT_8c0b5d14 + ar4) < '\x04')) &&
         ('\x01' < *(char *)(DAT_8c0b5d18 + ar4))) {
        *(undefined1 *)(DAT_8c0b5d18 + ar4) = 1;
      }
    }
    if ((*(int *)(ar4 + 0x6c) != 0) && (*(int *)(ar4 + 4) != 6)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))
                (*(int *)(ar4 + 0x6c),piVar8,piVar9,ar7);
      *(undefined4 *)(ar4 + 0x40) = 4;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0xc) = 0;
      piVar8 = DAT_8c0b5d1c;
      (*(code *)PTR_FUN_8c0b5d20)(ar4,DAT_8c0b5d1c,piVar9,ar7);
      *(undefined4 *)(DAT_8c0b5d24 + ar4) = 0;
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0b5d28)(ar6[6],piVar8,piVar9,ar7);
  *(uint *)(DAT_8c0b5d2c + ar4) = uVar1 & 0xffff;
  piVar8 = ar6;
  (*(code *)PTR_FUN_8c0b5d30)(ar4,ar6,piVar9,ar7);
  uVar2 = (*(code *)PTR_get_field_4_05eed8_8c0b5d34)(ar4,piVar8,piVar9,ar7);
  piVar8 = ar5;
  piVar9 = ar6;
  (*(code *)PTR_FUN_8c0b5d38)(ar4,ar5,ar6,uVar2);
  switch(*(undefined1 *)(DAT_8c0b5d18 + ar4)) {
  case 0:
  case 1:
    piVar9 = ar6;
    iVar6 = (*(code *)PTR_FUN_8c0b5dc4)(ar4,ar5,ar6,uVar2);
    piVar8 = ar5;
    if ((iVar6 == 0) ||
       (piVar8 = ar6, iVar6 = (*(code *)PTR_FUN_8c0b5dc8)(ar4,ar6,piVar9,uVar2), iVar6 != 1)) {
      if (*(int *)(ar4 + 0x40) != 5) {
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 0x40) = 8;
        *(undefined4 *)(PTR_DAT_8c0b5e0c + DAT_8c0b5e10) = 8;
      }
    }
    else {
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(undefined4 *)(PTR_DAT_8c0b5dcc + DAT_8c0b5dd0) = 5;
      piVar9 = (int *)0x1b;
      piVar8 = (int *)0x6;
      (*(code *)PTR_FUN_8c0b5dd4)(ar6[6],6,0x1b,uVar2);
      if ('\0' < *(char *)(DAT_8c0b5dd8 + ar4)) {
        *(undefined1 *)(DAT_8c0b5ddc + ar4) = 2;
      }
    }
    break;
  case 2:
    if (*(char *)(DAT_8c0b5e88 + ar4) < '\x01') {
      *(undefined1 *)(DAT_8c0b5e88 + ar4) = 1;
    }
    piVar9 = ar6;
    iVar6 = (*(code *)PTR_FUN_8c0b5e8c)(ar4,ar5,ar6,uVar2);
    if (((iVar6 == 0) || (*(int *)(ar4 + 0x40) == 6)) ||
       (ar5 = ar6, iVar6 = (*(code *)PTR_FUN_8c0b5e90)(ar4,ar6,piVar9,uVar2), iVar6 != 1)) {
      piVar8 = ar5;
      if (*(int *)(ar4 + 0x40) != 6) {
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 0x40) = 8;
        *(undefined4 *)(PTR_DAT_8c0b5ec4 + DAT_8c0b5ec8) = 8;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x40) = 6;
      *(undefined4 *)(PTR_DAT_8c0b5e94 + DAT_8c0b5e98) = 6;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(char *)(DAT_8c0b5e88 + ar4) = *(char *)(DAT_8c0b5e88 + ar4) + '\x01';
      piVar8 = ar5;
    }
    break;
  case 4:
  case 6:
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(PTR_DAT_8c0b5f1c + DAT_8c0b5f20) = 3;
    iVar6 = (**(code **)(DAT_8c0b5f24 + *ar5))(ar5,1,piVar9,uVar2);
    if (iVar6 == 0) {
      piVar9 = (int *)0x1b;
      (*(code *)PTR_FUN_8c0b5f28)(ar6[6],8,0x1b,uVar2);
    }
    piVar8 = (int *)0x1;
    (*(code *)PTR_FUN_8c0b5f30)(ar6[1] + DAT_8c0b5f2c,1,piVar9,uVar2);
    break;
  case 5:
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 0x40) = 7;
    *(undefined4 *)(PTR_DAT_8c0b5f60 + DAT_8c0b5f64) = 7;
    piVar8 = (int *)0x1;
    (*(code *)PTR_FUN_8c0b5f6c)(ar6[1] + DAT_8c0b5f68,1,piVar9,uVar2);
    break;
  case 7:
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 0x40) = 2;
    *(undefined4 *)(PTR_DAT_8c0b6004 + DAT_8c0b6008) = 2;
    piVar9 = (int *)0x1b;
    piVar8 = (int *)0x9;
    (*(code *)PTR_FUN_8c0b600c)(ar6[6],9,0x1b,uVar2);
  }
  (*(code *)PTR_FUN_8c0b6010)(ar4,piVar8,piVar9,uVar2);
  (*(code *)PTR_FUN_8c0b6014)(ar6[2],piVar8,piVar9,uVar2);
  iVar6 = (*(code *)PTR_get_field_124_027930_8c0b6018)(ar6[2],piVar8,piVar9,uVar2);
  iVar3 = (*(code *)PTR_get_field_40_05eea0_8c0b601c)(ar4,piVar8,piVar9,uVar2);
  if (iVar6 != iVar3) {
    a5 = (*(code *)PTR_get_field_40_05eea0_8c0b601c)(ar4,piVar8,piVar9,uVar2);
    piVar9 = (int *)0x1;
    (*(code *)PTR_FUN_8c0b6020)(ar6[2],a5,1,uVar2);
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0b6024)(auStack_28,0xffffffff,piVar9,uVar2);
  return uVar2;
}



/* Class_12b2e8_m2_0b6028 @ 8c0b6028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b2e8_m2_0b6028(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_44 [32];
  undefined1 auStack_24 [20];
  
  uVar2 = ar5;
  iVar7 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0b617c)(auStack_24,ar5,ar6,ar7);
  puVar6 = auStack_44;
  iVar3 = 0x10;
  puVar5 = PTR_DAT_8c0b6180;
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = (*(code *)PTR_FUN_8c0b6188)(*(undefined4 *)(ar6 + 0x18),uVar2,iVar7,ar7);
  *(uint *)(DAT_8c0b618c + ar4) = uVar1 & 0xffff;
  iVar3 = ar6;
  (*(code *)PTR_FUN_8c0b6190)(ar4,ar5,ar6,ar7);
  iVar7 = ar6;
  (*(code *)PTR_FUN_8c0b6194)(ar4,ar6,iVar3,ar7);
  uVar2 = (*(code *)PTR_get_field_4_05eed8_8c0b6198)(ar4,iVar7,iVar3,ar7);
  iVar7 = ar6;
  (*(code *)PTR_FUN_8c0b619c)(ar4,ar5,ar6,uVar2);
  switch(*(undefined1 *)(DAT_8c0b61a0 + ar4)) {
  case 0:
    *(undefined4 *)(ar4 + 0x40) = 8;
    *(undefined4 *)(PTR_DAT_8c0b61a4 + DAT_8c0b6184) = 8;
    break;
  case 4:
  case 6:
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(undefined4 *)(PTR_DAT_8c0b61a4 + DAT_8c0b6184) = 3;
    break;
  case 5:
    *(undefined4 *)(ar4 + 0x40) = 7;
    *(undefined4 *)(PTR_DAT_8c0b61a4 + DAT_8c0b6184) = 7;
    break;
  case 7:
    *(undefined4 *)(ar4 + 0x40) = 2;
    *(undefined4 *)(PTR_DAT_8c0b61a4 + DAT_8c0b6184) = 2;
  }
  (*(code *)PTR_FUN_8c0b61a8)(ar4,ar5,iVar7,uVar2);
  (*(code *)PTR_FUN_8c0b61ac)(*(undefined4 *)(ar6 + 8),ar5,iVar7,uVar2);
  iVar3 = (*(code *)PTR_get_field_124_027930_8c0b61b0)(*(undefined4 *)(ar6 + 8),ar5,iVar7,uVar2);
  if (*(int *)(ar4 + 0x40) != iVar3) {
    iVar7 = 1;
    (*(code *)PTR_FUN_8c0b61b4)(*(undefined4 *)(ar6 + 8),*(undefined4 *)(ar4 + 0x40),1,uVar2);
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0b61b8)(auStack_24,0xffffffff,iVar7,uVar2);
  return uVar2;
}



/* FUN_8c0b61bc @ 8c0b61bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b61bc(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a6;
  undefined4 a6_00;
  
  uVar2 = ar5;
  a6 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c0b62f8 + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (*(code *)PTR_FUN_8c0b62fc)(ar4,ar5,ar6,ar7);
    uVar2 = 1;
    (*(code *)PTR_FUN_8c0b6300)(ar4,1,a6,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0b6300)(ar4,3,a6,ar7);
      (*(code *)PTR_FUN_8c0b6324)(ar4,ar5,a6,ar7);
    }
    else if (iVar1 == 2) {
      iVar1 = (**(code **)(DAT_8c0b6304 + *(int *)(*ar6 + 8)))(*ar6,uVar2,a6,ar7);
      if (iVar1 == 1) {
        (*(code *)PTR_FUN_8c0b6308)(*ar6,uVar2,a6,ar7);
      }
    }
    else if (iVar1 == 4) {
      iVar1 = (*(code *)PTR_FUN_8c0b630c)(ar4,uVar2,a6,ar7);
      if (iVar1 == 1) {
        if (*(int *)(DAT_8c0b6310 + ar4) == 1) {
          a6_00 = 0x1b;
          uVar2 = 7;
          (*(code *)PTR_FUN_8c0b6314)(ar6[6],7,0x1b,ar7);
          uVar2 = (*(code *)PTR_get_field_6c_02f46c_8c0b6318)
                            (*(undefined4 *)(ar4 + 0x6c),uVar2,a6_00,ar7);
          (*(code *)PTR_FUN_8c0b631c)(*(undefined4 *)(ar4 + 0x6c),uVar2,a6_00,ar7);
          *(char *)(DAT_8c0b6320 + ar4) = *(char *)(DAT_8c0b6320 + ar4) + '\x01';
          if (*(int *)(ar4 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                      (*(int *)(ar4 + 0x6c),uVar2,a6_00,ar7);
            *(undefined4 *)(ar4 + 0x6c) = 0;
          }
          *(undefined4 *)(DAT_8c0b6310 + ar4) = 0;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  return 1;
}



/* FUN_8c0b6328 @ 8c0b6328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6328(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    a6 = ar6;
    (*(code *)PTR_FUN_8c0b63d0)(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c0b63d4 + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 9) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      (*(code *)PTR_FUN_8c0b63d8)(ar4,0,a6,ar7);
      ar6 = a6;
    }
    else {
      (*(code *)PTR_FUN_8c0b63d8)(ar4,3,a6,ar7);
      (*(code *)PTR_FUN_8c0b63dc)(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c0b63d8)(ar4,2,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0b63e0 @ 8c0b63e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b63e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_FUN_8c0b6438)(ar4,ar5,ar6,ar7);
  }
  else if (((iVar1 != 2) && (iVar1 == 4)) && (iVar1 = *(int *)(ar4 + 0x6c), iVar1 == 0)) {
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
    iVar1 = (*(code *)PTR_FUN_8c0b643c)(ar4,2,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0b6440 @ 8c0b6440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0b6440(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 a6;
  
  puVar2 = DAT_8c0b6584;
  puVar1 = DAT_8c0b6580;
  iVar4 = *(int *)(ar4 + 0x40);
  puVar3 = (undefined *)0x7;
  if ((iVar4 < 8) && (puVar3 = (undefined *)0x2, 1 < iVar4)) {
    puVar3 = (&switchD_8c0b646e::switchdataD_8c0b6474)[iVar4 + -2];
    switch(iVar4) {
    case 2:
      puVar3 = *(undefined **)(DAT_8c0b6580 + ar4);
      if (*(undefined **)(DAT_8c0b6580 + ar4) == (undefined *)0x1) {
        *(undefined4 *)(DAT_8c0b6580 + ar4) = 0;
        puVar3 = puVar1;
      }
      break;
    case 4:
      puVar3 = (undefined *)(*(code *)PTR_FUN_8c0b6590)(ar4,ar5,ar6,ar7);
      if ((puVar3 == (undefined *)0x1) &&
         (puVar3 = *(undefined **)(DAT_8c0b6594 + ar4),
         *(undefined **)(DAT_8c0b6594 + ar4) == (undefined *)0x1)) {
        a6 = 0x1b;
        uVar5 = 7;
        (*(code *)PTR_FUN_8c0b6598)(*(undefined4 *)(ar6 + 0x18),7,0x1b,ar7);
        uVar5 = (*(code *)PTR_get_field_6c_02f46c_8c0b659c)
                          (*(undefined4 *)(ar4 + 0x6c),uVar5,a6,ar7);
        (*(code *)PTR_FUN_8c0b65a0)(*(undefined4 *)(ar4 + 0x6c),uVar5,a6,ar7);
        *(char *)(DAT_8c0b65a4 + ar4) = *(char *)(DAT_8c0b65a4 + ar4) + '\x01';
        if (*(char *)(DAT_8c0b65a4 + ar4) == '\b') {
          uVar5 = 1;
          (*(code *)PTR_FUN_8c0b65ac)(*(int *)(ar6 + 4) + DAT_8c0b65a8,1,a6,ar7);
        }
        if (*(int *)(ar4 + 0x6c) != 0) {
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                    (*(int *)(ar4 + 0x6c),uVar5,a6,ar7);
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
        puVar3 = DAT_8c0b6594;
        *(undefined4 *)(DAT_8c0b6594 + ar4) = 0;
      }
      break;
    case 5:
      DAT_8c0b6584[ar4] = DAT_8c0b6584[ar4] + '\x01';
      puVar3 = puVar2;
      break;
    case 6:
      puVar3 = (undefined *)0x2;
      if ('\x01' < (char)DAT_8c0b6584[ar4]) {
        *(undefined1 *)(DAT_8c0b6588 + ar4) = 3;
        puVar3 = (undefined *)(*(code *)PTR_FUN_8c0b658c)(ar4,ar5,ar6,ar7);
      }
      break;
    case 7:
      *(undefined1 *)(DAT_8c0b6588 + ar4) = 6;
      puVar3 = (undefined *)(*(code *)PTR_FUN_8c0b658c)(ar4,ar5,ar6,ar7);
    }
  }
  return puVar3;
}



/* FUN_8c0b65b0 @ 8c0b65b0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0b65b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    (*(code *)PTR_get_field_8_066620_8c0b65f8)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0b65fc;
  }
  else {
    (*(code *)PTR_get_field_8_066620_8c0b65f8)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0b6600;
  }
  return puVar1;
}



/* FUN_8c0b6604 @ 8c0b6604 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6604(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *a5;
  undefined4 *a6;
  undefined4 *a7;
  float fVar4;
  double in_dr0;
  float fVar6;
  undefined4 in_fr3;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [20];
  double dVar5;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0b679c)(auStack_1c,ar5,ar6,ar7);
  uStack_20 = 0;
  a7 = &uStack_2c;
  a6 = &uStack_28;
  a5 = &uStack_24;
  (**(code **)(DAT_8c0b67a0 + *ar5))(ar5,a5,a6,a7);
  iVar9 = ar4;
  iVar1 = (*(code *)PTR_get_field_4_05eed8_8c0b67a4)(ar4,a5,a6,a7);
  if ((iVar1 != 1) && (iVar1 == 8)) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(uStack_24,in_fr3);
      dVar5 = (double)CONCAT44(DAT_8c0b67a8,uStack_24);
    }
    else {
      dVar8 = (double)CONCAT44(uStack_20,uStack_24);
      dVar5 = (double)CONCAT44(DAT_8c0b67ac,DAT_8c0b67a8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                               SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    uStack_24 = SUB84(dVar8,0);
    uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(uStack_28,uStack_24);
      dVar5 = (double)CONCAT44(DAT_8c0b67ac,uStack_28);
      uStack_24 = uVar3;
    }
    else {
      dVar8 = (double)CONCAT44(uStack_24,uStack_28);
      dVar5 = (double)CONCAT44(PTR_rand_8c0b67b0,DAT_8c0b67ac);
      uStack_20 = uVar3;
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                               SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    uStack_28 = SUB84(dVar8,0);
    uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(uStack_2c,uStack_28);
      dVar5 = (double)CONCAT44(DAT_8c0b67a8,uStack_2c);
      uStack_28 = uVar3;
    }
    else {
      dVar8 = (double)CONCAT44(uStack_28,uStack_2c);
      dVar5 = (double)CONCAT44(DAT_8c0b67ac,DAT_8c0b67a8);
      uStack_24 = uVar3;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) * fVar6;
      dVar5 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
      dVar8 = dVar8 - dVar5;
    }
    uVar3 = SUB84(dVar5,0);
    uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
    uStack_2c = uVar2;
    if (in_FPSCR_SZ != '\0') {
      uStack_2c = SUB84(dVar8,0);
      uStack_28 = uVar2;
    }
    uVar2 = (*(code *)PTR_rand_8c0b67b0)(iVar9,a5,a6,a7);
    uVar7 = SUB84(dVar8,0);
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(uStack_24,uVar3);
    }
    else {
      dVar8 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b67b4)(uVar2,iVar9,a6,a7);
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)iVar1,uVar7);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0b67b8,uStack_24);
    }
    else {
      dVar5 = (double)CONCAT44(_DAT_8c0b67bc,DAT_8c0b67b8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) / fVar6;
      dVar5 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 - dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x28) = dVar8;
    }
    uVar3 = (*(code *)PTR_rand_8c0b67b0)(uVar2,iVar9,a6,a7);
    uVar2 = SUB84(dVar8,0);
    (**(code **)(_DAT_8c0b67bc + *ar5))(ar5,iVar9,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      uStack_3c = (double)CONCAT44(uVar3,(int)((ulonglong)dVar5 >> 0x20));
      dVar8 = (double)CONCAT44(uStack_28,SUB84(dVar5,0));
    }
    else {
      dVar8 = (double)CONCAT44(uStack_24,uStack_28);
      uStack_3c = dVar5;
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar9 = (int)dVar8;
    }
    uVar3 = uStack_3c._4_4_;
    iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b67b4)(uStack_3c._4_4_,iVar9,a6,a7);
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)iVar1,uVar2);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0b67c0,(undefined4)uStack_3c);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0b67c4,DAT_8c0b67c0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) / fVar6;
      dVar5 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 * dVar5;
    }
    uVar2 = SUB84(dVar5,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x2c) = dVar8;
    }
    uVar3 = (*(code *)PTR_rand_8c0b67b0)(uVar3,iVar9,a6,a7);
    uVar7 = SUB84(dVar8,0);
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(uStack_2c,uVar2);
    }
    else {
      dVar8 = (double)CONCAT44(uStack_28,uStack_2c);
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar9 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b67b4)(uVar3,iVar9,a6,a7);
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)iVar9,uVar7);
    }
    else {
      dVar8 = (double)iVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0b67b8,uStack_2c);
    }
    else {
      in_dr0 = (double)CONCAT44(_DAT_8c0b67bc,DAT_8c0b67b8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar4 = SUB84(in_dr0,0) / fVar6;
      in_dr0 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar4,SUB84(dVar8,0));
    }
    else {
      in_dr0 = in_dr0 / in_dr0;
      dVar8 = dVar8 - in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar8;
    }
  }
  (**(code **)(DAT_8c0b67c4 + *ar5))(ar5,ar4 + 0x28,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x2c));
  }
  if (in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
    (**(code **)(DAT_8c0b67c4 + *ar5))(ar5,ar4 + 0x28,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x2c) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x2c) = in_dr0;
    }
  }
  uVar3 = (*(code *)PTR_Vec3_dtor_8c0b67c8)(auStack_1c,0xffffffff,a6,a7);
  return uVar3;
}



/* FUN_8c0b67cc @ 8c0b67cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b67cc(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *a6;
  undefined1 *a6_00;
  undefined1 *a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  uint in_fr1;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar6;
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
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar4 + -0x18) = in_PR;
  a5 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0b6a84)(puVar4 + DAT_8c0b6a80 + -0xe8,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)DAT_8c0b6a88;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c0b6a98)(puVar4 + DAT_8c0b6a94 + -0xe8,a5,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar4 + -0xe4) = 0;
    *(undefined4 *)(puVar4 + DAT_8c0b6a9c + -0xe8) = *(undefined4 *)(puVar4 + -0xe4);
    *(undefined4 *)(puVar4 + -0xe8) = *(undefined4 *)(puVar4 + -0xe4);
    *(undefined4 *)(puVar4 + DAT_8c0b6aa0 + -0xe8) = *(undefined4 *)(puVar4 + -0xe8);
    dVar5 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0xe8),in_fr1);
    *(undefined4 *)(puVar4 + DAT_8c0b6a80 + -0xe8) = *(undefined4 *)(puVar4 + -0xe8);
  }
  else {
    *(ulonglong *)(puVar4 + -0xe4) = (ulonglong)in_fr1;
    *(undefined8 *)(puVar4 + DAT_8c0b6a9c + -0xe8) = *(undefined8 *)(puVar4 + -0xe4);
    *(undefined8 *)(puVar4 + -0xe8) = *(undefined8 *)(puVar4 + -0xe4);
    *(undefined8 *)(puVar4 + DAT_8c0b6aa0 + -0xe8) = *(undefined8 *)(puVar4 + -0xe8);
    dVar5 = *(double *)(puVar4 + -0xe8);
    *(double *)(puVar4 + DAT_8c0b6a80 + -0xe8) = dVar5;
  }
  a7 = puVar4 + -0xbc;
  a6_00 = puVar4 + -0xb8;
  puVar2 = puVar4 + -0xb4;
  (*(code *)PTR_FUN_8c0b6aa4)(*ar6,puVar2,a6_00,a7);
  (*(code *)PTR_Vec3_set_xyz_8c0b6aac)(puVar4 + DAT_8c0b6aa8 + -0xe8,puVar2,a6_00,a7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c0b6ab4)
            (puVar4 + DAT_8c0b6ab0 + -0xe8,puVar4 + DAT_8c0b6aa8 + -0xe8,a6_00,a7);
  *(undefined1 **)(puVar4 + -0xec) = puVar4 + -0x70;
  (*(code *)PTR_FUN_8c0b6ac0)(puVar4 + DAT_8c0b6abc + -0xec,puVar4 + DAT_8c0b6ab8 + -0xec,a6_00,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c0b6ac8)(puVar4 + DAT_8c0b6ac4 + -0xe8,puVar4 + -0x70,a6_00,a7);
  (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + -0x70,0xffffffff,a6_00,a7);
  (*(code *)PTR_object_dtor_delete_8c0b6ad0)(puVar4 + DAT_8c0b6ab0 + -0xe8,0xffffffff,a6_00,a7);
  if (*(int *)(ar4 + 0x6c) == 0) {
    puVar2 = (undefined1 *)0x0;
    while( true ) {
      uVar1 = (**(code **)(DAT_8c0b6af4 + *ar5))(ar5,1,a6_00,a7);
      *(undefined4 *)(puVar4 + -0xe0) = uVar1;
      if (*(int *)(puVar4 + -0xe0) <= (int)puVar2) break;
      uVar3 = 1;
      a6_00 = puVar2;
      uVar1 = (**(code **)(DAT_8c0b6ad4 + *ar5))(ar5,1,puVar2,a7);
      *(undefined4 *)(puVar4 + -0xcc) = uVar1;
      uVar1 = (*(code *)PTR_get_field_6c_02f46c_8c0b6ad8)
                        (*(undefined4 *)(puVar4 + -0xcc),uVar3,a6_00,a7);
      *(undefined4 *)(puVar4 + -0xd0) = uVar1;
      if (*(int *)(puVar4 + -0xd0) != 0) {
        *(undefined1 **)(puVar4 + -0xec) = puVar4 + -0x80;
        (*(code *)PTR_FUN_8c0b6adc)(*ar6,uVar3,a6_00,a7);
        *(undefined1 **)(puVar4 + -0xec) = puVar4 + -0x90;
        (*(code *)PTR_Vec3_add_8c0b6ae4)(puVar4 + -0x80,puVar4 + DAT_8c0b6ae0 + -0xec,a6_00,a7);
        uVar3 = 1;
        a6_00 = puVar2;
        uVar1 = (**(code **)(DAT_8c0b6ad4 + *ar5))(ar5,1,puVar2,a7);
        *(undefined4 *)(puVar4 + -0xd4) = uVar1;
        *(undefined1 **)(puVar4 + -0xec) = puVar4 + -0xa0;
        (*(code *)PTR_FUN_8c0b6adc)(*(undefined4 *)(puVar4 + -0xd4),uVar3,a6_00,a7);
        *(undefined1 **)(puVar4 + -0xec) = puVar4 + -0xb0;
        (*(code *)PTR_Vec3_sub_8c0b6ae8)(puVar4 + -0x90,puVar4 + -0xa0,a6_00,a7);
        (*(code *)PTR_Vec3_assign_8c0b6aec)(puVar4 + DAT_8c0b6a80 + -0xe8,puVar4 + -0xb0,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + -0xb0,0xffffffff,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + -0xa0,0xffffffff,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + -0x90,0xffffffff,a6_00,a7);
        uVar1 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + -0x80,0xffffffff,a6_00,a7);
        (*(code *)PTR_Vec3_length_sq_8c0b6af0)(puVar4 + DAT_8c0b6a80 + -0xe8,uVar1,a6_00,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar4 + -0xd8) = (int)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0xd8),SUB84(dVar5,0));
        }
        else {
          *(double *)(puVar4 + -0xd8) = dVar5;
          dVar5 = *(double *)(puVar4 + -0xd8);
        }
        if (in_FPSCR_PR == '\0') {
          bVar6 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
        }
        else {
          bVar6 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar6) {
          uVar1 = (**(code **)(DAT_8c0b6ad4 + *ar5))(ar5,1,puVar2,a7);
          *(undefined4 *)(puVar4 + -0xdc) = uVar1;
          *(undefined4 *)(puVar4 + -0xc4) = *(undefined4 *)(puVar4 + -0xdc);
          (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6ac4 + -0xe8,0xffffffff,puVar2,a7);
          (*(code *)PTR_object_dtor_delete_8c0b6ad0)
                    (puVar4 + DAT_8c0b6aa8 + -0xe8,0xffffffff,puVar2,a7);
          (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6a94 + -0xe8,0xffffffff,puVar2,a7);
          (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6a80 + -0xe8,0xffffffff,puVar2,a7);
          return *(undefined4 *)(puVar4 + -0xc4);
        }
      }
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(puVar4 + -200) = 0;
    (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6ac4 + -0xe8,0xffffffff,a6_00,a7);
    (*(code *)PTR_object_dtor_delete_8c0b6ad0)(puVar4 + DAT_8c0b6aa8 + -0xe8,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6a94 + -0xe8,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6a80 + -0xe8,0xffffffff,a6_00,a7);
    uVar1 = *(undefined4 *)(puVar4 + -200);
  }
  else {
    *(undefined4 *)(puVar4 + -0xc0) = *(undefined4 *)(ar4 + 0x6c);
    (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6ac4 + -0xe8,0xffffffff,a6_00,a7);
    (*(code *)PTR_object_dtor_delete_8c0b6ad0)(puVar4 + DAT_8c0b6aa8 + -0xe8,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6a94 + -0xe8,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c0b6acc)(puVar4 + DAT_8c0b6a80 + -0xe8,0xffffffff,a6_00,a7);
    uVar1 = *(undefined4 *)(puVar4 + -0xc0);
  }
  return uVar1;
}



/* FUN_8c0b6af8 @ 8c0b6af8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6af8(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c0b6b08 + ar4) = *ar5;
  iVar1 = DAT_8c0b6b0c;
  *(char *)(DAT_8c0b6b0c + ar4) = (char)*(undefined4 *)(ar5 + 4);
  return iVar1;
}



/* FUN_8c0b6b10 @ 8c0b6b10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6b10(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *ar5 = *(undefined1 *)(DAT_8c0b6b24 + ar4);
  cVar1 = *(char *)(DAT_8c0b6b28 + ar4);
  *(int *)(ar5 + 4) = (int)cVar1;
  return (int)cVar1;
}



/* FUN_8c0b6b2c @ 8c0b6b2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6b2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c0b6b38 + ar4);
}



/* FUN_8c0b6b3c @ 8c0b6b3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0b6b3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b6bc4)(PTR_DAT_8c0b6bc0,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0b6bcc;
  uVar2 = DAT_8c0b6bc8;
  (*(code *)PTR_global_list_push_8c0b6bd0)(uVar1,PTR_Vec3_dtor_8c0b6bcc,DAT_8c0b6bc8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b6bc4)(PTR_DAT_8c0b6bd4,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0b6bcc;
  uVar2 = DAT_8c0b6bd8;
  (*(code *)PTR_global_list_push_8c0b6bd0)(uVar1,PTR_Vec3_dtor_8c0b6bcc,DAT_8c0b6bd8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b6bc4)(PTR_DAT_8c0b6bdc,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0b6bcc;
  uVar2 = DAT_8c0b6be0;
  (*(code *)PTR_global_list_push_8c0b6bd0)(uVar1,PTR_Vec3_dtor_8c0b6bcc,DAT_8c0b6be0,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0b6bc4)(PTR_DAT_8c0b6be4,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0b6bd0)(uVar2,PTR_Vec3_dtor_8c0b6bcc,DAT_8c0b6be8,ar7);
  puVar3 = DAT_8c0b6bf0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0b6bec = *(undefined4 *)DAT_8c0b6bf0;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0b6bec = *DAT_8c0b6bf0;
  }
  return puVar3;
}



/* FUN_8c0b6bf4 @ 8c0b6bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6bf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0b6c0c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b6c10 @ 8c0b6c10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6c10(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8c0b6c2c;
  (*(code *)PTR_FUN_8c0b6c30)(DAT_8c0b6c2c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0b6c34)(uVar1,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_game_shutdown_b_8c0b6c38)(uVar1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b6c3c @ 8c0b6c3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6c3c(undefined4 ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  undefined4 uVar1;
  undefined *a6;
  int iVar2;
  undefined *a5;
  undefined4 uVar3;
  undefined1 auStack_30 [24];
  
  a5 = ar5;
  a6 = ar6;
  uVar1 = (*(code *)PTR_get_field_a510_01f538_8c0b6dc8)(DAT_8c0b6dc4,ar5,ar6,ar7);
  uVar3 = 1;
  (*(code *)PTR_FUN_8c0b6dcc)(auStack_30,a5,a6,ar7);
  switch(uVar1) {
  case 0:
    ar7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6dd0 + 0x41;
    a6 = (undefined *)0x0;
    uVar1 = 0xb;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b6de0)(DAT_8c0b6ddc,0xb,0,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0b6de8)(DAT_8c0b6dc4,uVar1,a6,ar7);
    iVar2 = (*(code *)PTR_FUN_8c0b6dec)(ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6dd0 + 0x42,a6,ar7)
    ;
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_FUN_8c0b6df0)(uVar1,ar4,ar5,ar6);
      *DAT_8c0b6df4 = uVar1;
      a6 = ar5;
      ar7 = ar6;
    }
    else {
      iVar2 = (*(code *)PTR_FUN_8c0b6dec)
                        (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6dd0 + 0x4f,a6,ar7);
      if (iVar2 == 0) {
        uVar1 = (*(code *)PTR_FUN_8c0b6df8)
                          (uVar1,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6dd0 + 0x5c,ar5,ar6);
        *DAT_8c0b6df4 = uVar1;
        a6 = ar5;
        ar7 = ar6;
      }
    }
    uVar3 = 0;
    break;
  case 1:
    ar7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6dd0 + 0x41;
    a6 = (undefined *)0x0;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b6de0)(DAT_8c0b6ddc,1,0,ar7);
    break;
  case 3:
  case 5:
    a6 = (undefined *)(*(code *)PTR_get_field_a524_01f514_8c0b6de4)(DAT_8c0b6dc4,a5,a6,ar7);
    ar7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6dd0 + 0x41;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b6de0)(DAT_8c0b6ddc,2,a6,ar7);
    break;
  case 4:
    a6 = (undefined *)(*(code *)PTR_get_field_a524_01f514_8c0b6de4)(DAT_8c0b6dc4,a5,a6,ar7);
    ar7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6dd0 + 0x41;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b6de0)(DAT_8c0b6ddc,4,a6,ar7);
  }
  (*(code *)PTR_FUN_8c0b6dfc)(DAT_8c0b6ddc,1,a6,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0b6e00)(auStack_30,0xffffffff,a6,ar7);
  return uVar3;
}



/* FUN_8c0b6e04 @ 8c0b6e04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6e04(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}



/* FUN_8c0b6e6c @ 8c0b6e6c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6e6c(undefined *ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  undefined *a6;
  undefined *a5;
  undefined4 uVar1;
  undefined4 a5_00;
  undefined *a7;
  undefined4 a7_00;
  undefined *a7_01;
  undefined4 uVar2;
  int aiStack_9c [4];
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
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined auStack_48 [20];
  undefined1 auStack_34 [24];
  
  a7_01 = *(undefined **)((int)aiStack_9c + DAT_8c0b6ed0);
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  uStack_54 = (*(code *)PTR_get_field_a510_01f538_8c0b6ed8)(DAT_8c0b6ed4,ar5,ar6,ar7);
  uVar2 = 1;
  uStack_4c = uStack_54;
  (*(code *)PTR_FUN_8c0b6edc)(auStack_34,a5,a6,a7);
  switch(uStack_4c) {
  case 0:
    a7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7030 + 0x41;
    a6 = (undefined *)0x0;
    uVar1 = 0xb;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b7038)(DAT_8c0b7034,0xb,0,a7);
    uVar1 = (*(code *)PTR_FUN_8c0b7040)(DAT_8c0b703c,uVar1,a6,a7);
    uStack_60 = uVar1;
    if (*(int *)((int)aiStack_9c + DAT_8c0b7044) == 1) {
      iStack_64 = (*(code *)PTR_FUN_8c0b7048)
                            (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7030 + 0x5c,a6,a7);
      if (iStack_64 == 0) {
        a6 = auStack_48;
        iStack_68 = (*(code *)PTR_FUN_8c0b704c)
                              (uVar1,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7030 + 0x5c,a6,a7);
        if (iStack_68 == 1) {
          iStack_6c = (*(code *)PTR_FUN_8c0b7050)(uVar1,ar4,ar7,a7_01);
          a6 = ar7;
          a7 = a7_01;
          if (iStack_6c == 1) {
            uVar2 = 0;
          }
          break;
        }
      }
      iStack_70 = (*(code *)PTR_FUN_8c0b70a8)
                            (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b70a4 + 0x42,a6,a7);
      if ((iStack_70 == 0) &&
         (iStack_74 = (*(code *)PTR_FUN_8c0b70ac)
                                (uVar1,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b70a4 + 0x42,a6,a7),
         iStack_74 == 1)) {
        iStack_78 = (*(code *)PTR_FUN_8c0b70b0)(uVar1,ar4,ar5,ar6);
        a6 = ar5;
        a7 = ar6;
        if (iStack_78 == 1) {
          uVar2 = 0;
          a6 = ar5;
        }
      }
      else {
        iStack_7c = (*(code *)PTR_FUN_8c0b7108)
                              (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7104 + 0x4f,a6,a7);
        if ((iStack_7c == 0) &&
           (iStack_80 = (*(code *)PTR_FUN_8c0b710c)
                                  (uVar1,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7104 + 0x5c,auStack_48
                                   ,a7), iStack_80 == 1)) {
          iStack_84 = (*(code *)PTR_FUN_8c0b7110)
                                (uVar1,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7104 + 0x5c,ar5,ar6);
          a6 = ar5;
          a7 = ar6;
          if (iStack_84 == 1) {
            uVar2 = 0;
            a6 = ar5;
          }
        }
        else {
          a7_00 = 4;
          uVar1 = DAT_8c0b7158;
          (*(code *)PTR_FUN_8c0b7160)(auStack_34,DAT_8c0b715c,DAT_8c0b7158,4);
          a5_00 = 0x60;
          (*(code *)PTR_FUN_8c0b7164)(auStack_34,0x60,uVar1,a7_00);
          (*(code *)PTR_FUN_8c0b716c)(auStack_34,a5_00,uVar1,a7_00);
          a6 = (undefined *)0x0;
          (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b717c)(DAT_8c0b7178,3,0,ar4);
          a7 = ar4;
        }
      }
    }
    else {
      iStack_88 = (*(code *)PTR_FUN_8c0b71b4)
                            (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b71b0 + 0x5c,a6,a7);
      if (iStack_88 == 0) {
        iStack_8c = (*(code *)PTR_FUN_8c0b71b8)(uVar1,ar4,ar7,a7_01);
        a6 = ar7;
        a7 = a7_01;
        if (iStack_8c == 1) {
          uVar2 = 0;
        }
      }
      else {
        aiStack_9c[3] =
             (*(code *)PTR_FUN_8c0b71f8)(ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b71f4 + 0x42,a6,a7)
        ;
        if (aiStack_9c[3] == 0) {
          aiStack_9c[2] = (*(code *)PTR_FUN_8c0b71fc)(uVar1,ar4,ar5,ar6);
          a6 = ar5;
          a7 = ar6;
          if (aiStack_9c[2] == 1) {
            uVar2 = 0;
            a6 = ar5;
          }
        }
        else {
          aiStack_9c[1] =
               (*(code *)PTR_FUN_8c0b7260)
                         (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b725c + 0x4f,a6,a7);
          if ((aiStack_9c[1] == 0) &&
             (aiStack_9c[0] =
                   (*(code *)PTR_FUN_8c0b7264)
                             (uVar1,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b725c + 0x5c,ar5,ar6),
             a6 = ar5, a7 = ar6, aiStack_9c[0] == 1)) {
            uVar2 = 0;
            a6 = ar5;
          }
        }
      }
    }
    break;
  case 1:
    a7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6f14 + 0x41;
    a6 = (undefined *)0x0;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b6f24)(DAT_8c0b6f20,1,0,a7);
    break;
  case 3:
  case 5:
    a6 = (undefined *)(*(code *)PTR_get_field_a524_01f514_8c0b6f58)(DAT_8c0b6f54,a5,a6,a7);
    a7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6f5c + 0x41;
    puStack_58 = a6;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b6f6c)(DAT_8c0b6f68,2,a6,a7);
    break;
  case 4:
    a6 = (undefined *)(*(code *)PTR_get_field_a524_01f514_8c0b6fa0)(DAT_8c0b6f9c,a5,a6,a7);
    a7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b6fa4 + 0x41;
    puStack_5c = a6;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b6fb4)(DAT_8c0b6fb0,4,a6,a7);
  }
  uStack_50 = uVar2;
  (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0b7268)(auStack_34,0xffffffff,a6,a7);
  return uStack_50;
}



/* FUN_8c0b726c @ 8c0b726c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b726c(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 a4;
  int iVar1;
  undefined1 *a6;
  undefined4 a7;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined1 auStack_34 [24];
  
  uVar2 = 1;
  a6 = ar6;
  a7 = ar7;
  a4 = (*(code *)PTR_FUN_8c0b7434)(DAT_8c0b7430,ar5,ar6,ar7);
  if (in_stack_00000004 == 1) {
    iVar1 = (*(code *)PTR_FUN_8c0b743c)(ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,a6,a7);
    if (iVar1 == 0) {
      a6 = auStack_34;
      iVar1 = (*(code *)PTR_FUN_8c0b7440)(a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,a6,a7)
      ;
      if (iVar1 == 1) {
        iVar1 = (*(code *)PTR_FUN_8c0b7444)(a4,ar4,ar7,in_stack_00000000);
        if (iVar1 != 1) {
          return 1;
        }
        return 0;
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0b743c)(ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x42,a6,a7);
    if ((iVar1 == 0) &&
       (iVar1 = (*(code *)PTR_FUN_8c0b7448)
                          (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x42,a6,a7), iVar1 == 1))
    {
      iVar1 = (*(code *)PTR_FUN_8c0b744c)(a4,ar4,ar5,ar6);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0b743c)
                        (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x4f,a6,a7);
      if ((iVar1 == 0) &&
         ((iVar1 = (*(code *)PTR_FUN_8c0b7440)
                             (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,auStack_34,a7),
          iVar1 == 1 &&
          (iVar1 = (*(code *)PTR_FUN_8c0b7450)
                             (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,ar5,ar6),
          iVar1 == 1)))) {
        uVar2 = 0;
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0b743c)(ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,a6,a7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0b7444)(a4,ar4,ar7,in_stack_00000000);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0b743c)
                        (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x42,a6,a7);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_FUN_8c0b744c)(a4,ar4,ar5,ar6);
        if (iVar1 == 1) {
          uVar2 = 0;
        }
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0b743c)
                          (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x4f,a6,a7);
        if ((iVar1 == 0) &&
           (iVar1 = (*(code *)PTR_FUN_8c0b7450)
                              (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,ar5,ar6),
           iVar1 == 1)) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}



/* FUN_8c0b7454 @ 8c0b7454 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7454(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *a6;
  undefined *a7;
  undefined4 uVar5;
  undefined1 auStack_30 [24];
  
  uVar2 = ar5;
  uVar4 = ar6;
  uVar1 = (*(code *)PTR_get_field_a510_01f538_8c0b75f4)(DAT_8c0b75f0,ar5,ar6,ar7);
  uVar5 = 1;
  switch(uVar1) {
  case 0:
    a7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x41;
    uVar4 = 0;
    uVar2 = 0xb;
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b7608)(DAT_8c0b7604,0xb,0,a7);
    uVar2 = (*(code *)PTR_FUN_8c0b7610)(DAT_8c0b75f0,uVar2,uVar4,a7);
    iVar3 = (*(code *)PTR_FUN_8c0b7614)(uVar2,ar4,uVar4,a7);
    if (iVar3 == 1) {
      iVar3 = (*(code *)PTR_FUN_8c0b7618)
                        (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x42,uVar4,a7);
      if ((iVar3 == 0) && (iVar3 = (*(code *)PTR_FUN_8c0b761c)(uVar2,ar4,ar5,ar6), iVar3 == 1)) {
        uVar5 = 0;
      }
    }
    else {
      a6 = auStack_30;
      iVar3 = (*(code *)PTR_FUN_8c0b7620)
                        (uVar2,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x5c,a6,a7);
      if (iVar3 == 1) {
        iVar3 = (*(code *)PTR_FUN_8c0b7618)
                          (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x4f,a6,a7);
        if ((iVar3 == 0) &&
           (iVar3 = (*(code *)PTR_FUN_8c0b7624)
                              (uVar2,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x5c,ar5,ar6),
           iVar3 == 1)) {
          uVar5 = 0;
        }
      }
      else {
        (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b7608)(DAT_8c0b7604,3,0,ar4);
      }
    }
    break;
  case 1:
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b7608)
              (DAT_8c0b7604,1,0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x41);
    break;
  case 3:
  case 5:
    uVar2 = (*(code *)PTR_get_field_a524_01f514_8c0b760c)(DAT_8c0b75f0,uVar2,uVar4,ar7);
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b7608)
              (DAT_8c0b7604,2,uVar2,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x41);
    break;
  case 4:
    uVar2 = (*(code *)PTR_get_field_a524_01f514_8c0b760c)(DAT_8c0b75f0,uVar2,uVar4,ar7);
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b7608)
              (DAT_8c0b7604,4,uVar2,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b75f8 + 0x41);
  }
  return uVar5;
}



/* FUN_8c0b7628 @ 8c0b7628 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7628(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int iVar1;
  undefined4 a6;
  undefined4 uVar2;
  
  uVar2 = 1;
  a6 = ar6;
  a4 = (*(code *)PTR_FUN_8c0b76c4)(DAT_8c0b76c0,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0b76cc)(ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b76c8 + 0x42,a6,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0b76d0)(a4,ar4,ar5,ar6);
    if (iVar1 == 1) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0b76cc)(ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b76c8 + 0x4f,a6,ar7)
    ;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0b76d4)
                        (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b76c8 + 0x5c,ar5,ar6);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* s_SEAMANDC_USR_0b76dc @ 8c0b76d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint s_SEAMANDC_USR_0b76dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_20 [24];
  
  a4 = (*(code *)PTR_FUN_8c0b7790)(DAT_8c0b778c,ar5,ar6,ar7);
  uVar3 = 0;
  puVar2 = auStack_20;
  iVar1 = (*(code *)PTR_FUN_8c0b7798)
                    (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x5c,puVar2,ar7);
  if (iVar1 == 5) {
    uVar3 = 4;
  }
  iVar1 = (*(code *)PTR_FUN_8c0b779c)
                    (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x69,puVar2,ar7);
  if (iVar1 == 1) {
    uVar3 = uVar3 | 8;
  }
  puVar2 = auStack_20;
  iVar1 = (*(code *)PTR_FUN_8c0b7798)
                    (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x76,puVar2,ar7);
  if (iVar1 == 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar1 = (*(code *)PTR_FUN_8c0b779c)
                    (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x42,puVar2,ar7);
  if (iVar1 == 0) {
    uVar3 = uVar3 | 1;
  }
  iVar1 = (*(code *)PTR_FUN_8c0b7798)
                    (a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x5c,auStack_20,ar7);
  if (iVar1 == 4) {
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}



/* FUN_8c0b77a0 @ 8c0b77a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0b77a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a6;
  int iStack_c;
  int aiStack_8 [2];
  
  aiStack_8[0] = 0;
  iStack_c = 0;
  a6 = DAT_8c0b77f0;
  (*(code *)PTR_FUN_8c0b77fc)
            (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b77f8 + 0x42,DAT_8c0b77f4,DAT_8c0b77f0,ar7);
  (*(code *)PTR_FUN_8c0b7800)(ar4,aiStack_8,a6,ar7);
  (*(code *)PTR_FUN_8c0b7800)(DAT_8c0b77f4 + 0x1e,&iStack_c,a6,ar7);
  return (uint)(aiStack_8[0] == iStack_c);
}



/* FUN_8c0b7804 @ 8c0b7804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7804(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_10;
  int aiStack_c [2];
  
  aiStack_c[0] = 0;
  iStack_10 = 0;
  uVar2 = DAT_8c0b7868;
  iVar1 = (*(code *)PTR_FUN_8c0b7874)
                    (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7870 + 0x42,DAT_8c0b786c,DAT_8c0b7868,ar7)
  ;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    (*(code *)PTR_FUN_8c0b7878)(ar4,aiStack_c,uVar2,ar7);
    (*(code *)PTR_FUN_8c0b7878)(DAT_8c0b786c + 0x1e,&iStack_10,uVar2,ar7);
    if (aiStack_c[0] == iStack_10) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* FUN_8c0b787c @ 8c0b787c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b787c(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined8 *puVar1;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar1 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar1 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar1 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar1 + -8) = in_PR;
  if ((ar4 & 1) == 1) {
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b791c)
              (DAT_8c0b7918,3,0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7914 + 0x42);
  }
  else if ((ar4 & 2) == 2) {
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b791c)
              (DAT_8c0b7918,3,0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7914 + 0x4f);
  }
  else {
    if ((ar4 & 4) != 4) {
      (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b791c)
                (DAT_8c0b7918,0xb,0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7914 + 0x41);
      return 1;
    }
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b791c)
              (DAT_8c0b7918,3,0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7914 + 0x4f);
  }
  return 0;
}



/* FUN_8c0b7920 @ 8c0b7920 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7920(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
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
  if (ar4 != 2) {
    *DAT_8c0b79d8 = ar4;
  }
  if (ar4 == 0) {
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b79e4)
              (DAT_8c0b79e0,0xb,0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b79dc + 0x41);
    return 1;
  }
  iVar1 = *DAT_8c0b79d8;
  if (iVar1 == 1) {
    (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b79e4)
              (DAT_8c0b79e0,1,0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b79dc + 0x41);
    return 0;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      uVar2 = (*(code *)PTR_get_field_a524_01f514_8c0b79ec)(DAT_8c0b79e8,ar5,ar6,ar7);
      *(undefined4 *)((int)puVar3 + -0x10) = uVar2;
      (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b79e4)
                (DAT_8c0b79e0,4,*(undefined4 *)((int)puVar3 + -0x10),
                 PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b79dc + 0x41);
      return 0;
    }
    if (iVar1 != 5) {
      return 0;
    }
  }
  uVar2 = (*(code *)PTR_get_field_a524_01f514_8c0b79ec)(DAT_8c0b79e8,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0xc) = uVar2;
  (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0b79e4)
            (DAT_8c0b79e0,2,*(undefined4 *)((int)puVar3 + -0xc),
             PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b79dc + 0x41);
  return 0;
}



/* FUN_8c0b79f0 @ 8c0b79f0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b79f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a7;
  undefined1 auStack_18 [24];
  
  (*(code *)PTR_FUN_8c0b7a34)(auStack_18,ar5,ar6,ar7);
  a7 = 4;
  uVar1 = DAT_8c0b7a38;
  (*(code *)PTR_FUN_8c0b7a40)(auStack_18,DAT_8c0b7a3c,DAT_8c0b7a38,4);
  a5 = 0x60;
  (*(code *)PTR_FUN_8c0b7a44)(auStack_18,0x60,uVar1,a7);
  (*(code *)PTR_FUN_8c0b7a4c)(auStack_18,a5,uVar1,a7);
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0b7a50)(auStack_18,0xffffffff,uVar1,a7);
  return uVar1;
}



/* FUN_8c0b7a54 @ 8c0b7a54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b7a54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0b7aac)(ar4 + DAT_8c0b7aa8,ar5,ar6,ar7);
  *(undefined1 *)(DAT_8c0b7ab0 + ar4) = *DAT_8c0b7ab4;
  *(undefined2 *)(DAT_8c0b7ab8 + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7aa8 + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7abc + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7ac0 + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7ac4 + ar4) = 0;
  *(undefined1 *)(DAT_8c0b7ac8 + ar4) = 0;
  (*(code *)PTR_FUN_8c0b7acc)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0b7ad0 @ 8c0b7ad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7ad0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_sh4_tmu_1f8b34_8c0b7e80)(0,ar5,ar6,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7e8c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7e88,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7e98,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7e94,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ea0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7e9c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ea8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ea4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7eb0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7eac,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7eb8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7eb4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ec0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ebc,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ec8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ec4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ed0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ecc,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ed8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ed4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ee0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7edc,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ee8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ee4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ef0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7eec,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ef4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ec8,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7efc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ef8,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f04,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f00,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f0c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f08,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f14,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f10,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f1c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f18,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f24,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f20,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f2c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f28,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f34,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f30,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f3c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f38,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f40,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f1c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f48,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f44,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f50,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f4c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f58,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f54,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f60,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f5c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f68,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f64,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f70,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f6c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f78,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f74,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f80,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f7c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f88,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f84,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f8c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f70,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f94,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f90,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f9c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f98,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7fa4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7fa0,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7fac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7fa8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8368,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7fb0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8378,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8374,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8380,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b837c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8388,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8384,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8390,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b838c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8394,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8380,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b839c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8398,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83a0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83ac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83a8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83b4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83b0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83bc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83b8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83c4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83c0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83cc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83c8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83d4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83d0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83dc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83d8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83e0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83d4,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83e8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83e4,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83f0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83ec,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83f8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83f4,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8400,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83fc,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8408,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8404,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8410,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b840c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8418,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8414,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8420,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b841c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8428,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8424,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b842c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8428,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8434,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8430,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b843c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8438,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8444,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8440,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b844c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8448,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8454,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8450,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b845c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8458,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8464,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8460,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b846c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8468,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8474,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8470,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8478,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8478,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8830,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b847c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8840,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b883c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8848,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8844,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8850,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b884c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8858,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8854,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8860,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b885c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8868,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8864,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8870,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b886c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8878,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8874,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8880,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b887c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b887c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8884,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b888c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8888,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8894,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8890,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b889c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8898,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88a0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88ac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88a8,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88b4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88b0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88bc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88b8,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88c4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88c0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88cc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88c8,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88c8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88d0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88d8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88d4,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88e0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88dc,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88e8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88e4,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88f0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88ec,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88f8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88f4,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8900,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88fc,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8908,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8904,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8910,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b890c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8918,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8914,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8920,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b891c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8914,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8924,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b892c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8928,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8934,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8930,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b893c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8938,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8944,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8940,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8cfc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8948,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d0c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d08,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d14,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d10,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d1c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d18,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d24,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d20,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d2c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d28,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d18,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d30,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d38,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d34,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d40,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d3c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d48,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d44,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d50,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d4c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d58,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d54,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d60,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d5c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d68,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d64,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d70,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d6c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d78,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d74,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d80,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d7c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d64,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d84,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d8c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d88,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d94,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d90,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d9c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d98,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8da4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8da0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8da8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8db4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8db0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dbc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8db8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dc4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dc0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dcc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dc8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dd4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dd0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8db0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dd8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8de0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8ddc,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8de8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8de4,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8df0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dec,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8df8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8df4,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8e00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dfc,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8e08,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8e04,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8e10,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8e0c,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b913c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8e14,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b914c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9148,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9154,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9150,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b915c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9158,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9164,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9160,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b916c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9168,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9174,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9170,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b917c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9178,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9184,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9180,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b918c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9188,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9194,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9190,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b919c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9198,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91a0,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91ac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91a8,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9178,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91b0,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91b8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91b4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91c0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91bc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91c8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91c4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91d0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91cc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91d8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91d4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91e0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91dc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91e8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91e4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91f0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91ec,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91f8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91f4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9200,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91fc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91c4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9204,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b920c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9208,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9214,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9210,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b921c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9218,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9224,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9220,10,ar7);
  uVar1 = (*(code *)PTR_memmove_8c0b9140)
                    (ar4 + DAT_8c0b922c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9228,10,
                     ar7);
  return uVar1;
}



/* FUN_8c0b9230 @ 8c0b9230 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9230(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_sh4_tmu_1f8a64_8c0b9240)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b9244 @ 8c0b9244 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9244(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 a5;
  
  uVar1 = (*(code *)PTR_sh4_tmu_1f8b88_8c0b933c)(ar4,ar5,ar6,ar7);
  a5 = 0;
  uVar2 = (*(code *)PTR_FUN_8c0b9340)(uVar1,0,ar6,ar7);
  if (DAT_8c0b9344 <= uVar2) {
    *(int *)(DAT_8c0b9348 + ar4) = *(int *)(DAT_8c0b9348 + ar4) + 1;
    *(short *)(DAT_8c0b934c + ar4) = *(short *)(DAT_8c0b934c + ar4) + 1;
    (*(code *)PTR_sh4_tmu_1f8b6e_8c0b9350)(0,a5,ar6,ar7);
    *(uint *)(DAT_8c0b9354 + ar4) = *(int *)(DAT_8c0b9354 + ar4) + uVar2 + DAT_8c0b9358;
    if (DAT_8c0b9344 <= *(uint *)(DAT_8c0b9354 + ar4)) {
      *(int *)(DAT_8c0b9348 + ar4) = *(int *)(DAT_8c0b9348 + ar4) + 1;
      *(short *)(DAT_8c0b934c + ar4) = *(short *)(DAT_8c0b934c + ar4) + 1;
      *(undefined4 *)(DAT_8c0b9354 + ar4) = 0;
    }
  }
  if (*(ushort *)(DAT_8c0b934c + ar4) < DAT_8c0b935c) {
    uVar1 = 0;
  }
  else {
    *(short *)(DAT_8c0b9360 + ar4) = *(short *)(DAT_8c0b9360 + ar4) + 1;
    if (DAT_8c0b9364 <= *(ushort *)(DAT_8c0b9360 + ar4)) {
      *(short *)(DAT_8c0b9360 + ar4) = (short)DAT_8c0b9364;
    }
    *(undefined2 *)(DAT_8c0b934c + ar4) = 0;
    (*(code *)PTR_FUN_8c0b9368)(ar4,a5,ar6,ar7);
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c0b936c @ 8c0b936c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b936c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c0b93a4 + (int)ar4) = *DAT_8c0b93a8;
  *(undefined2 *)(DAT_8c0b93ac + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b93b0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b93b4 + (int)ar4) = 0;
  *ar4 = 0;
  *(undefined4 *)(DAT_8c0b93b8 + (int)ar4) = 0;
  iVar1 = DAT_8c0b93bc;
  *(undefined4 *)(DAT_8c0b93bc + (int)ar4) = 0;
  return iVar1;
}



/* FUN_8c0b93c0 @ 8c0b93c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b93c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iStack_2c;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar5 = 0;
  iVar2 = 4;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    iVar3 = (uint)*(byte *)(ar4 + iVar6 + 4) + iVar3;
  }
  if (iVar3 < 5) {
    iVar2 = 3;
  }
  else {
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
      if (bVar5 < *(byte *)(ar4 + iVar3 + 4)) {
        bVar5 = *(byte *)(ar4 + iVar3 + 4);
        iVar4 = iVar3;
      }
    }
    iVar6 = (*(code *)PTR_FUN_8c0b9510)(ar4,ar5,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0b9510)(ar4,ar5,ar6,ar7);
    iVar3 = iVar6;
    if (((iVar6 != iVar1) &&
        (((iVar3 = iVar4, iVar6 != iVar4 || (iVar1 != iVar4)) &&
         (iVar2 = 3, *(int *)(DAT_8c0b9514 + ar4) != iVar6)))) &&
       (*(int *)(DAT_8c0b9514 + ar4) != iVar1)) {
      iVar2 = 0;
    }
    iStack_2c = (*(code *)PTR_FUN_8c0b9518)(iVar3 - *(int *)(DAT_8c0b9514 + ar4),ar5,ar6,ar7);
    if (4 < iStack_2c) {
      iStack_2c = 8 - iStack_2c;
    }
    if (iVar2 == 4) {
      if (iStack_2c == 0) {
        iVar2 = 1;
      }
      else if (iStack_2c == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}



/* FUN_8c0b951c @ 8c0b951c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b951c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [16];
  
  uVar2 = 10;
  (*(code *)PTR_memmove_8c0b9594)
            (auStack_18,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b958c + DAT_8c0b9590,10,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0b9598)(ar4,auStack_18,uVar2,ar7);
  if (iVar1 < 1) {
    uVar2 = 10;
    (*(code *)PTR_memmove_8c0b9594)
              (auStack_18,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b958c + DAT_8c0b959c,10,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0b9598)(ar4,auStack_18,uVar2,ar7);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c0b95a0 @ 8c0b95a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0b95a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 a7;
  undefined1 *puStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined1 *puStack_128;
  int iStack_124;
  undefined1 *puStack_120;
  int iStack_11c;
  undefined1 auStack_118 [2];
  byte bStack_116;
  undefined1 auStack_10c [2];
  undefined1 auStack_10a [258];
  
  uVar4 = ar5;
  iStack_134 = (*(code *)PTR_FUN_8c0b96b4)(DAT_8c0b96b0,ar5,ar6,ar7);
  if (iStack_134 == 0) {
    uVar1 = 0;
  }
  else {
    iStack_124 = iStack_134;
    iStack_11c = iStack_134;
    puVar2 = (undefined1 *)(*(code *)PTR_FUN_8c0b96b4)(0x3c,uVar4,ar6,ar7);
    puStack_138 = puVar2;
    puStack_128 = puVar2;
    puStack_120 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      (*(code *)PTR_FUN_8c0b96b8)(&iStack_11c,uVar4,ar6,ar7);
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      a7 = 0;
      uVar4 = 0;
      iVar3 = iStack_11c;
      iStack_12c = (*(code *)PTR_FUN_8c0b96bc)(iStack_11c,puVar2,0,0);
      if (iStack_12c != 0) {
        (*(code *)PTR_memset_8c0b96c4)(auStack_10c,0,DAT_8c0b96c0,a7);
        uVar4 = 10;
        (*(code *)PTR_memmove_8c0b96cc)((int)&puStack_138 + DAT_8c0b96c8,ar5,10,a7);
        (*(code *)PTR_FUN_8c0b96d0)((int)&puStack_138 + DAT_8c0b96c8,auStack_10c,uVar4,a7);
        uVar4 = 10;
        puVar2 = auStack_10a;
        iVar3 = (int)&puStack_138 + DAT_8c0b96c8;
        iStack_130 = (*(code *)PTR_FUN_8c0b96d4)(iVar3,puVar2,10,a7);
        if (iStack_130 != 0) {
          (*(code *)PTR_FUN_8c0b96d8)(iVar3,puVar2,uVar4,a7);
          (*(code *)PTR_FUN_8c0b96b8)(&iStack_11c,puVar2,uVar4,a7);
          (*(code *)PTR_FUN_8c0b96b8)(&puStack_120,puVar2,uVar4,a7);
          return 0;
        }
        puVar2 = auStack_118;
        iVar3 = *(int *)((int)&puStack_138 + DAT_8c0b96dc);
        (*(code *)PTR_FUN_8c0b96e0)(iVar3,puVar2,uVar4,a7);
        uVar1 = (uint)bStack_116;
      }
      (*(code *)PTR_FUN_8c0b96d8)(iVar3,puVar2,uVar4,a7);
      (*(code *)PTR_FUN_8c0b96b8)(&iStack_11c,puVar2,uVar4,a7);
      (*(code *)PTR_FUN_8c0b96b8)(&puStack_120,puVar2,uVar4,a7);
    }
  }
  return uVar1;
}



/* FUN_8c0b96e4 @ 8c0b96e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b96e4(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a4;
  int iVar1;
  undefined *a4_00;
  uint *a5;
  undefined1 *a5_00;
  undefined4 a6;
  undefined4 a7;
  ushort uVar2;
  uint unaff_r12;
  int iVar3;
  uint auStack_170 [4];
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  undefined *puStack_134;
  int iStack_130;
  int iStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined1 auStack_120 [2];
  undefined1 auStack_11e [262];
  
  auStack_170[0] = ar5;
  (*(code *)PTR_FUN_8c0b9738)((int)auStack_170 + DAT_8c0b9734,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0b973c)((int)auStack_170 + DAT_8c0b9734,&uStack_124,ar6,ar7);
  a5 = &uStack_128;
  (*(code *)PTR_FUN_8c0b973c)(auStack_170[0],a5,ar6,ar7);
  iVar1 = DAT_8c0b9740;
  if (uStack_128 < uStack_124) {
    iStack_15c = (*(code *)PTR_malloc_thunk_8c0b9770)(DAT_8c0b976c,a5,ar6,ar7);
    *DAT_8c0b9774 = iStack_15c;
    iVar1 = DAT_8c0b9778;
    if (iStack_15c != 0) {
      iStack_12c = iStack_15c;
      iStack_160 = (*(code *)PTR_malloc_thunk_8c0b97ac)(0x3c,a5,ar6,ar7);
      *DAT_8c0b97b0 = iStack_160;
      iStack_130 = iStack_160;
      if (iStack_160 == 0) {
        (*(code *)PTR_FUN_8c0b97b8)(*DAT_8c0b97b4,a5,ar6,ar7);
        iVar1 = DAT_8c0b97bc;
      }
      else {
        a4 = (undefined *)(*(code *)PTR_malloc_thunk_8c0b97f0)(DAT_8c0b97ec,a5,ar6,ar7);
        iVar1 = DAT_8c0b982c;
        puStack_134 = a4;
        if (a4 == (undefined *)0x0) {
          (*(code *)PTR_FUN_8c0b97f8)(*DAT_8c0b97f4,a5,ar6,ar7);
          (*(code *)PTR_FUN_8c0b97f8)(*DAT_8c0b97fc,a5,ar6,ar7);
          iVar1 = DAT_8c0b9800;
        }
        else {
          a7 = 0;
          a6 = 0;
          a5_00 = (undefined1 *)*DAT_8c0b9830;
          a4_00 = (undefined *)*DAT_8c0b9834;
          iStack_138 = (*(code *)PTR_FUN_8c0b9838)(a4_00,a5_00,0,0);
          if (iStack_138 != 0) {
            for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
              *(undefined1 *)((int)auStack_170 + iVar3 + DAT_8c0b9868) = 0x20;
            }
            uVar2 = 0;
            a4_00 = a4;
            iStack_13c = (*(code *)PTR_FUN_8c0b986c)(a4,a5_00,a6,a7);
            if (iStack_13c != 0) {
              for (iVar3 = 0; iVar3 < 100; iVar3 = iVar3 + 1) {
                auStack_170[3] = iVar3;
                if ((byte)a4[iVar3 * 0xb] != DAT_8c0b9980) {
                  a5_00 = auStack_120;
                  a4_00 = a4 + iVar3 * 0xb;
                  auStack_170[2] = iVar3;
                  iStack_140 = (*(code *)PTR_FUN_8c0b9984)(a4_00,a5_00,a6,a7);
                  if (iStack_140 != 0) {
                    a6 = 10;
                    a5_00 = auStack_11e;
                    a4_00 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9988 + DAT_8c0b998c;
                    iStack_144 = (*(code *)PTR_FUN_8c0b9990)(a4_00,a5_00,10,a7);
                    if (iStack_144 != 0) {
                      a6 = 10;
                      a5_00 = auStack_11e;
                      a4_00 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9988 + DAT_8c0b9994;
                      iStack_148 = (*(code *)PTR_FUN_8c0b9990)(a4_00,a5_00,10,a7);
                      if (iStack_148 != 0) {
                        a6 = 10;
                        a5_00 = auStack_11e;
                        a4_00 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9988 + DAT_8c0b9998;
                        iStack_14c = (*(code *)PTR_FUN_8c0b9990)(a4_00,a5_00,10,a7);
                        if (iStack_14c != 0) {
                          a6 = 10;
                          a5_00 = auStack_11e;
                          a4_00 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9988 + DAT_8c0b999c;
                          iStack_150 = (*(code *)PTR_FUN_8c0b9990)(a4_00,a5_00,10,a7);
                          if (iStack_150 != 0) {
                            a6 = 10;
                            a5_00 = auStack_11e;
                            a4_00 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9988 + DAT_8c0b99a0;
                            iStack_154 = (*(code *)PTR_FUN_8c0b9990)(a4_00,a5_00,10,a7);
                            if ((((iStack_154 != 0) &&
                                 (*(uint *)((int)auStack_170 + DAT_8c0b99a4) < uStack_124)) &&
                                (uStack_128 < *(uint *)((int)auStack_170 + DAT_8c0b99a4))) &&
                               (uVar2 < *(ushort *)((int)auStack_170 + DAT_8c0b99a8))) {
                              a6 = 10;
                              a5_00 = auStack_11e;
                              a4_00 = (undefined *)((int)auStack_170 + DAT_8c0b99ac);
                              (*(code *)PTR_memmove_8c0b99b0)(a4_00,a5_00,10,a7);
                              uVar2 = *(ushort *)((int)auStack_170 + DAT_8c0b99a8);
                              unaff_r12 = *(uint *)((int)auStack_170 + DAT_8c0b99b4);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              for (iVar3 = 0; iVar3 < DAT_8c0b9aac; iVar3 = iVar3 + 1) {
                a6 = 10;
                a5_00 = (undefined1 *)((int)auStack_170 + DAT_8c0b9aa0);
                a4_00 = (undefined *)(iVar3 * 10 + ar4 + DAT_8c0b9aa4);
                auStack_170[1] = iVar3;
                iStack_158 = (*(code *)PTR_FUN_8c0b9aa8)(a4_00,a5_00,10,a7);
                if (iStack_158 == 0) {
                  iVar1 = iVar3;
                }
              }
              if (iVar1 == DAT_8c0b9ab0) {
                if ((unaff_r12 & DAT_8c0b9ab4) != 0) {
                  iVar1 = DAT_8c0b9ab8;
                }
                if ((unaff_r12 & DAT_8c0b9abc) != 0) {
                  iVar1 = DAT_8c0b9ac0;
                }
                if ((unaff_r12 & DAT_8c0b9ac4) != 0) {
                  iVar1 = DAT_8c0b9ac8;
                }
                if ((unaff_r12 & DAT_8c0b9acc) != 0) {
                  iVar1 = DAT_8c0b9ab0;
                }
                if ((unaff_r12 & 0x40) != 0) {
                  iVar1 = DAT_8c0b9ad0;
                }
                if ((unaff_r12 & 0x20) != 0) {
                  iVar1 = DAT_8c0b9ad4;
                }
                if ((unaff_r12 & 0x10) != 0) {
                  iVar1 = DAT_8c0b9ad8;
                }
                if ((unaff_r12 & 8) != 0) {
                  iVar1 = DAT_8c0b9adc;
                }
                if ((unaff_r12 & 4) != 0) {
                  iVar1 = DAT_8c0b9ae0;
                }
                if ((unaff_r12 & 2) != 0) {
                  iVar1 = DAT_8c0b9ae4;
                }
                if ((unaff_r12 & 1) != 0) {
                  iVar1 = DAT_8c0b9ae8;
                }
              }
            }
          }
          (*(code *)PTR_FUN_8c0b9aec)(a4_00,a5_00,a6,a7);
          (*(code *)PTR_FUN_8c0b9af4)(*DAT_8c0b9af0,a5_00,a6,a7);
          (*(code *)PTR_FUN_8c0b9af4)(*DAT_8c0b9af8,a5_00,a6,a7);
          (*(code *)PTR_FUN_8c0b9af4)(a4,a5_00,a6,a7);
        }
      }
    }
  }
  return iVar1;
}



/* FUN_8c0b9afc @ 8c0b9afc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9afc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 in_stack_00000004;
  
  switch(in_stack_00000004) {
  case 0:
  case 1:
  case 0x17:
    return 6;
  case 2:
  case 3:
  case 4:
    return 7;
  case 5:
  case 6:
  case 7:
    return 0;
  case 8:
  case 9:
  case 10:
    return 1;
  case 0xb:
  case 0xc:
  case 0xd:
    return 2;
  case 0xe:
  case 0xf:
  case 0x10:
    return 3;
  case 0x11:
  case 0x12:
  case 0x13:
    return 4;
  case 0x14:
  case 0x15:
  case 0x16:
    return 5;
  default:
    return 8;
  }
}



/* FUN_8c0b9bb0 @ 8c0b9bb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0b9bb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1c [16];
  
  (*(code *)PTR_FUN_8c0b9cfc)(ar4,auStack_1c,ar6,ar7);
  *(undefined2 *)(ar4 + 0x20) = *(undefined2 *)(ar4 + 0x16);
  *(undefined2 *)(ar4 + 0x22) = *(undefined2 *)(ar4 + 0x18);
  *(undefined2 *)(ar4 + 0x24) = *(undefined2 *)(ar4 + 0x1a);
  *(undefined2 *)(ar4 + 0x26) = *(undefined2 *)(ar4 + 0x1c);
  *(undefined2 *)(ar4 + 0x28) = *(undefined2 *)(ar4 + 0x1e);
  *(undefined2 *)(ar4 + 0x16) = *(undefined2 *)(ar4 + 0xc);
  *(undefined2 *)(ar4 + 0x18) = *(undefined2 *)(ar4 + 0xe);
  *(undefined2 *)(ar4 + 0x1a) = *(undefined2 *)(ar4 + 0x10);
  *(undefined2 *)(ar4 + 0x1c) = *(undefined2 *)(ar4 + 0x12);
  *(undefined2 *)(ar4 + 0x1e) = *(undefined2 *)(ar4 + 0x14);
  iVar3 = ar4 + 0xc;
  (*(code *)PTR_FUN_8c0b9cfc)(ar4,iVar3,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0b9d00)(ar4,iVar3,ar6,ar7);
  *(undefined4 *)(DAT_8c0b9d04 + ar4) = uVar1;
  iVar3 = ar4 + *(int *)(DAT_8c0b9d04 + ar4);
  *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + '\x01';
  uVar1 = (*(code *)PTR_FUN_8c0b9d0c)(ar4,auStack_1c,DAT_8c0b9d08 + 0x14,ar7);
  *(undefined4 *)(DAT_8c0b9d10 + ar4) = uVar1;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar3 = (uint)*(byte *)(ar4 + iVar4 + 4) + iVar3;
  }
  if (((*(short *)(ar4 + 0xc) == *(short *)(ar4 + 0x16)) &&
      (*(char *)(ar4 + 0xe) == *(char *)(ar4 + 0x18))) &&
     (*(char *)(ar4 + 0xf) == *(char *)(ar4 + 0x19))) {
    *(char *)(ar4 + 0x2c) = *(char *)(ar4 + 0x2c) + '\x01';
  }
  else {
    *(undefined1 *)(ar4 + 0x2c) = 1;
  }
  uVar2 = *(uint *)(DAT_8c0b9d10 + ar4);
  if (((uVar2 == 0) && (uVar2 = (uint)*(byte *)(ar4 + 0x2c), uVar2 == 1)) && (uVar2 = 1, iVar3 != 1)
     ) {
    uVar2 = 0x2c;
    *(undefined1 *)(ar4 + 0x2c) = 2;
  }
  return uVar2;
}



/* FUN_8c0b9d14 @ 8c0b9d14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9d14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0b9d2c)(ar5,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b9d30 @ 8c0b9d30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b9d30(undefined4 ar4,ushort *ar5,ushort *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  ushort *a6;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar3 = 0;
  a6 = ar6;
  for (iVar7 = DAT_8c0b9ec0; iVar7 < (int)(uint)*ar5; iVar7 = iVar7 + 1) {
    iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b9ec4)(iVar7,4,a6,ar7);
    iVar2 = DAT_8c0b9ecc;
    if (iVar1 == 0) {
      iVar2 = DAT_8c0b9ec8;
    }
    iVar5 = iVar5 + iVar2;
  }
  iVar7 = iVar5;
  switch((char)ar5[1]) {
  case '\f':
    iVar5 = iVar5 + 0x1e;
  case '\v':
    iVar5 = iVar5 + 0x1f;
  case '\n':
    iVar5 = iVar5 + 0x1e;
  case '\t':
    iVar5 = iVar5 + 0x1f;
  case '\b':
    iVar5 = iVar5 + 0x1f;
  case '\a':
    iVar5 = iVar5 + 0x1e;
  case '\x06':
    iVar5 = iVar5 + 0x1f;
  case '\x05':
    iVar5 = iVar5 + 0x1e;
  case '\x04':
    iVar7 = iVar5 + 0x1f;
  case '\x03':
    iVar5 = iVar7 + 0x1c;
    iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b9ec4)((uint)*ar5,4,a6,ar7);
    if (iVar2 == 0) {
      iVar5 = iVar7 + 0x1d;
    }
  case '\x02':
    iVar5 = iVar5 + 0x1f;
  default:
    uVar6 = iVar5 + (uint)*(byte *)((int)ar5 + 3);
    for (iVar7 = DAT_8c0b9ec0; iVar7 < (int)(uint)*ar6; iVar7 = iVar7 + 1) {
      iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b9ec4)(iVar7,4,a6,ar7);
      iVar5 = DAT_8c0b9ecc;
      if (iVar2 == 0) {
        iVar5 = DAT_8c0b9ec8;
      }
      iVar3 = iVar3 + iVar5;
    }
  }
  iVar7 = iVar3;
  switch((char)ar6[1]) {
  case '\f':
    iVar3 = iVar3 + 0x1e;
  case '\v':
    iVar3 = iVar3 + 0x1f;
  case '\n':
    iVar3 = iVar3 + 0x1e;
  case '\t':
    iVar3 = iVar3 + 0x1f;
  case '\b':
    iVar3 = iVar3 + 0x1f;
  case '\a':
    iVar3 = iVar3 + 0x1e;
  case '\x06':
    iVar3 = iVar3 + 0x1f;
  case '\x05':
    iVar3 = iVar3 + 0x1e;
  case '\x04':
    iVar7 = iVar3 + 0x1f;
  case '\x03':
    iVar3 = iVar7 + 0x1c;
    iVar5 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0b9ec4)((uint)*ar6,4,a6,ar7);
    if (iVar5 == 0) {
      iVar3 = iVar7 + 0x1d;
    }
  case '\x02':
    iVar3 = iVar3 + 0x1f;
  default:
    uVar4 = iVar3 + (uint)*(byte *)((int)ar6 + 3);
    iVar7 = DAT_8c0b9ed0;
    if (uVar4 <= uVar6) {
      iVar7 = uVar6 - uVar4;
    }
    return iVar7;
  }
}



/* FUN_8c0b9ed4 @ 8c0b9ed4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9ed4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(ar4 + ar5 + 0x44) == '\0') {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      if (*(int *)(ar4 + iVar2 * 4 + 0x30) == ar5) {
        return 0;
      }
    }
    iVar2 = ar4 + *(int *)(ar4 + 0x40);
    *(char *)(iVar2 + 0x44) = *(char *)(iVar2 + 0x44) + '\x01';
    for (iVar2 = 4; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined4 *)(ar4 + iVar2 * 4 + 0x30) = *(undefined4 *)(ar4 + (iVar2 + -1) * 4 + 0x30);
    }
    *(int *)(ar4 + 0x30) = ar5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c0b9f5c @ 8c0b9f5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0b9f5c(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = *ar5;
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 4) = *(undefined4 *)(ar5 + iVar1 * 4 + 4);
  }
  for (iVar1 = 0; iVar1 < 0x3e; iVar1 = iVar1 + 1) {
    ar4[iVar1 + 0x18] = ar5[iVar1 + 0x18];
  }
  return ar4;
}



/* FUN_8c0b9fb4 @ 8c0b9fb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b9fb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint in_fr1;
  uint in_PR;
  char in_FPSCR_SZ;
  ulonglong uStack_c;
  
  (*(code *)PTR_FUN_8c0ba0f8)(ar4 + DAT_8c0ba0f4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba108)
            (ar4 + DAT_8c0ba104,PTR_Vec3_ctor_zero_8c0ba100,PTR_Vec3_dtor_8c0ba0fc,0x10);
  puVar2 = PTR_FUN_8c0ba0f8;
  puVar3 = PTR_FUN_8c0ba110;
  uVar4 = DAT_8c0ba10c;
  (*(code *)PTR_FUN_8c0ba108)(ar4 + DAT_8c0ba114,PTR_FUN_8c0ba0f8,PTR_FUN_8c0ba110,DAT_8c0ba10c);
  (*(code *)PTR_FUN_8c0ba11c)(ar4 + DAT_8c0ba118,puVar2,puVar3,uVar4);
  puVar2 = PTR_FUN_8c0ba0f8;
  puVar3 = PTR_FUN_8c0ba110;
  uVar4 = DAT_8c0ba10c;
  (*(code *)PTR_FUN_8c0ba108)(ar4 + DAT_8c0ba120,PTR_FUN_8c0ba0f8,PTR_FUN_8c0ba110,DAT_8c0ba10c);
  (*(code *)PTR_FUN_8c0ba11c)(ar4 + DAT_8c0ba124,puVar2,puVar3,uVar4);
  puVar2 = PTR_FUN_8c0ba0f8;
  puVar3 = PTR_FUN_8c0ba110;
  uVar4 = DAT_8c0ba10c;
  (*(code *)PTR_FUN_8c0ba108)(ar4 + DAT_8c0ba128,PTR_FUN_8c0ba0f8,PTR_FUN_8c0ba110,DAT_8c0ba10c);
  (*(code *)PTR_FUN_8c0ba130)(ar4 + DAT_8c0ba12c,puVar2,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0ba138)(ar4 + DAT_8c0ba134,puVar2,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0ba140)(ar4,puVar2,puVar3,uVar4);
  *(undefined2 *)(ar4 + 0x28) = 0;
  *(undefined1 *)(DAT_8c0ba144 + ar4) = *DAT_8c0ba148;
  *(undefined4 *)(DAT_8c0ba14c + ar4) = 0;
  uStack_c = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = (ulonglong)in_PR << 0x20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0ba150) = (undefined4)uStack_c;
    uVar1 = CONCAT44((undefined4)uStack_c,in_fr1);
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0ba150) = uStack_c;
    uVar1 = uStack_c;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0ba154) = (undefined4)uStack_c;
    uStack_c = CONCAT44((undefined4)uStack_c,(int)uVar1);
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0ba154) = uStack_c;
  }
  *(undefined4 *)(DAT_8c0ba158 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba15c + ar4) = 0;
  *(undefined1 *)(DAT_8c0ba160 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba164 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba168 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba16c + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0ba170) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0ba170) = uStack_c & 0xffffffff;
  }
  *(undefined1 *)(DAT_8c0ba174 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba178 + ar4) = 0;
  *(undefined1 *)(DAT_8c0ba17c + ar4) = 0;
  return ar4;
}



/* FUN_8c0ba180 @ 8c0ba180 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba180(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_FUN_8c0ba1b8)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ba1bc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0ba1c0 @ 8c0ba1c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba1c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ba1f0)(ar4,PTR_FUN_8c0ba1ec,PTR_FUN_8c0ba1e8,DAT_8c0ba1e4);
  return ar4;
}



/* FUN_8c0ba1f4 @ 8c0ba1f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba1f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_FUN_8c0ba22c)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ba230)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0ba234 @ 8c0ba234 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba234(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0ba278)(ar4 + 0x10,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c0ba27c)(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ba280)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0ba284 @ 8c0ba284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba284(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ba2bc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba2c0)(ar4 + 0x24,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba2c4)(ar4 + 0x48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba2c8)(ar4 + 0x58,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0ba2cc @ 8c0ba2cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba2cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ba308)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0ba30c + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba310 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba314 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba318 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba31c + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba320 + ar4) = 0;
  return ar4;
}



/* FUN_8c0ba324 @ 8c0ba324 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba324(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ba348)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0ba34c @ 8c0ba34c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba34c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  return in_r0;
}



/* FUN_8c0ba354 @ 8c0ba354 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba354(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0ba374)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba378)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0ba37c @ 8c0ba37c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba37c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0ba3a8)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0ba3b4)(DAT_8c0ba3b0,DAT_8c0ba3ac,DAT_8c0ba3ac,DAT_8c0ba3ac);
  return uVar1;
}



/* FUN_8c0ba3b8 @ 8c0ba3b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba3b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_00000000;
  
  *(undefined4 *)(DAT_8c0ba3d0 + ar4) = ar5;
  *(undefined4 *)(DAT_8c0ba3d4 + ar4) = ar6;
  *(undefined4 *)(DAT_8c0ba3d8 + ar4) = ar7;
  iVar1 = DAT_8c0ba3dc;
  *(undefined4 *)(DAT_8c0ba3dc + ar4) = in_stack_00000000;
  return iVar1;
}



/* FUN_8c0ba3e0 @ 8c0ba3e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ba3e0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 a5;
  float fVar2;
  undefined *puVar3;
  double dVar4;
  undefined *puVar5;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_10;
  
  if (*DAT_8c0ba474 == '\0') {
    *DAT_8c0ba478 = 1;
    *DAT_8c0ba474 = '\x01';
  }
  if (*(int *)(ar4 + 0x10) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0ba47c,*(undefined4 *)(ar4 + 4));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + 4);
      dVar4 = (double)CONCAT44(DAT_8c0ba480,DAT_8c0ba47c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar4 - dVar4,0);
    }
    uStack_10 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = CONCAT44(ar4,fVar2);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(uStack_10._4_4_ + 4) = (undefined4)uStack_10;
      uStack_10 = uStack_10 & 0xffffffff;
    }
    else {
      *(ulonglong *)(uStack_10._4_4_ + 4) = uStack_10;
    }
    puVar1 = &DAT_8c0ba480;
    puVar3 = DAT_8c0ba480;
    puVar5 = PTR_FUN_8c0ba484;
    if (in_FPSCR_SZ == '\0') {
      puVar3 = (undefined *)uStack_10;
      puVar5 = DAT_8c0ba480;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar3 < (float)puVar5) {
      puVar1 = (undefined4 *)(*(code *)PTR_FUN_8c0ba484)(ar4,ar5,ar6,ar7);
    }
  }
  else {
    a5 = DAT_8c0ba488;
    puVar1 = (undefined4 *)
             (*(code *)PTR_libgcc_divide_helper_0103d0_8c0ba48c)(*ar5,DAT_8c0ba488,ar6,ar7);
    if ((puVar1 == (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)*DAT_8c0ba478, puVar1 == (undefined4 *)0x1)) {
      *DAT_8c0ba478 = 0;
      puVar1 = (undefined4 *)(*(code *)PTR_FUN_8c0ba490)(ar4,a5,ar6,ar7);
    }
  }
  return puVar1;
}



/* FUN_8c0ba494 @ 8c0ba494 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba494(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_1c = *(undefined4 *)PTR_DAT_8c0ba5a0;
  uStack_18 = *(undefined4 *)(PTR_DAT_8c0ba5a0 + 4);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0ba5a0 + 8);
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0ba5a0 + 0xc);
  uStack_2c = *(undefined4 *)PTR_DAT_8c0ba5a4;
  uStack_28 = *(undefined4 *)(PTR_DAT_8c0ba5a4 + 4);
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0ba5a4 + 8);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0ba5a4 + 0xc);
  (*(code *)PTR_FUN_8c0ba5a8)(2,&uStack_1c,ar6,ar7);
  if (*(int *)(ar4 + 0x10) == 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      (*(code *)PTR_FUN_8c0ba5b4)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0ba5b8)(ar4,ar5,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c0ba5b8)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0ba5b4)(ar4,ar5,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x14) == 1) {
    (*(code *)PTR_FUN_8c0ba5b4)(ar4,ar5,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c0ba5b8)(ar4,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0ba5a8)(0,&uStack_2c,ar6,ar7);
  return uVar1;
}



/* FUN_8c0ba5bc @ 8c0ba5bc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba5bc(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = (undefined4)DAT_8c0ba5d8;
    *(undefined4 *)((int)ar4 + 4) = DAT_8c0ba5d8._4_4_;
  }
  else {
    *ar4 = CONCAT44(DAT_8c0ba5d8._4_4_,(undefined4)DAT_8c0ba5d8);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(_FUN_8c0ba5e0,DAT_8c0ba5d8._4_4_);
  }
  *(undefined4 *)(ar4 + 2) = 1;
  *(undefined4 *)((int)ar4 + 0x14) = 1;
  return 1;
}



/* FUN_8c0ba5e0 @ 8c0ba5e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba5e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 a7;
  undefined8 in_dr6;
  char in_FPSCR_SZ;
  undefined4 auStack_3c [5];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = (int)((ulonglong)in_dr6 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uVar1 = auStack_3c[0];
  }
  auStack_3c[0] = uVar1;
  uStack_28 = *(undefined4 *)PTR_DAT_8c0ba68c;
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0ba68c + 4);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0ba68c + 8);
  uStack_1c = *(undefined4 *)(PTR_DAT_8c0ba68c + 0xc);
  uStack_18 = *(undefined4 *)(PTR_DAT_8c0ba68c + 0x10);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0ba68c + 0x14);
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0ba68c + 0x18);
  uStack_c = *(undefined4 *)(PTR_DAT_8c0ba68c + 0x1c);
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0ba690)(auStack_3c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba694)(ar5,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba698)(ar5,0xf,ar6,ar7);
  a7 = 4;
  a6 = DAT_8c0ba69c;
  (*(code *)PTR_FUN_8c0ba6a0)(auStack_3c,&uStack_28,DAT_8c0ba69c,4);
  (*(code *)PTR_FUN_8c0ba6a8)(auStack_3c,DAT_8c0ba6a4,a6,a7);
  uVar1 = DAT_8c0ba6ac;
  (*(code *)PTR_FUN_8c0ba6b0)(auStack_3c,DAT_8c0ba6ac,a6,a7);
  (*(code *)PTR_FUN_8c0ba6b4)(auStack_3c,uVar1,a6,a7);
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0ba6b8)(auStack_3c,0xffffffff,a6,a7);
  return uVar1;
}



/* FUN_8c0ba6bc @ 8c0ba6bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba6bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [20];
  undefined1 auStack_10 [4];
  byte bStack_c;
  
  if (*DAT_8c0ba808 == '\0') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0ba80c = DAT_8c0ba810;
    }
    else {
      *DAT_8c0ba80c = CONCAT44(PTR_FUN_8c0ba814,DAT_8c0ba810);
    }
    *DAT_8c0ba808 = '\x01';
  }
  (*(code *)PTR_FUN_8c0ba814)(auStack_10,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)DAT_8c0ba818 = (undefined4)DAT_8c0ba81c;
    *(undefined4 *)DAT_8c0ba81c._4_4_ = DAT_8c0ba824;
  }
  else {
    *DAT_8c0ba818 = CONCAT44(DAT_8c0ba81c._4_4_,(undefined4)DAT_8c0ba81c);
    *DAT_8c0ba81c._4_4_ = CONCAT44(PTR_PTR_8c0ba828,DAT_8c0ba824);
  }
  if (bStack_c < 0xc) {
    if (bStack_c == 0) {
      bStack_c = 0xc;
    }
    (*(code *)PTR_FUN_8c0ba834)(auStack_24,ar5,ar6,ar7);
  }
  else {
    if (bStack_c != 0xc) {
      bStack_c = bStack_c - 0xc;
    }
    (*(code *)PTR_FUN_8c0ba834)(auStack_24,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0ba840)(DAT_8c0ba83c,auStack_24,0,0xe);
  return uVar1;
}



/* FUN_8c0ba844 @ 8c0ba844 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 4) = DAT_8c0ba86c;
    }
    else {
      *(undefined8 *)(ar4 + 4) = CONCAT44(_FUN_8c0ba870,DAT_8c0ba86c);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 4) = DAT_8c0ba86c;
  }
  else {
    *(undefined8 *)(ar4 + 4) = CONCAT44(_FUN_8c0ba870,DAT_8c0ba86c);
  }
  *(undefined4 *)(ar4 + 0x10) = 0;
  return 0;
}



/* FUN_8c0ba870 @ 8c0ba870 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba870(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 4) = DAT_8c0ba894;
  }
  else {
    *(undefined8 *)(ar4 + 4) = CONCAT44(_FUN_8c0ba898,DAT_8c0ba894);
  }
  *(undefined4 *)(ar4 + 0x10) = 1;
  return 1;
}



/* FUN_8c0ba898 @ 8c0ba898 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ba898(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c0ba8a8;
  ar4[1] = 0;
  return ar4;
}



/* free_if_nonnull_wrap_0ba8ac @ 8c0ba8ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_0ba8ac(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c0ba8dc, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0ba8e0)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0ba8e4 @ 8c0ba8e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ba8e4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0ba990)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0ba994;
  (*(code *)PTR_FUN_8c0ba998)(ar4 + 0x12,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba99c)(ar4 + 0x14,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba9a4)((int)ar4 + DAT_8c0ba9a0,ar5,ar6,ar7);
  ar4[2] = 0;
  ar4[0xc] = 2;
  *(short *)(ar4 + 0xe) = (short)DAT_8c0ba9a8;
  ar4[0xf] = 1;
  ar4[0x10] = 0;
  ar4[0x11] = 0;
  if (in_FPSCR_SZ == '\0') {
    ar4[0xd] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xd) = CONCAT44(0x3f800000,extraout_fr1);
  }
  puVar1 = PTR_DAT_8c0ba9ac;
  uVar2 = *(undefined4 *)(PTR_DAT_8c0ba9ac + 4);
  ar4[3] = *(undefined4 *)PTR_DAT_8c0ba9ac;
  ar4[4] = uVar2;
  ar4[5] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0ba9b0;
  uVar2 = *(undefined4 *)(PTR_DAT_8c0ba9b0 + 4);
  ar4[6] = *(undefined4 *)PTR_DAT_8c0ba9b0;
  ar4[7] = uVar2;
  ar4[8] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0ba9b4;
  uVar2 = *(undefined4 *)(PTR_DAT_8c0ba9b4 + 4);
  ar4[9] = *(undefined4 *)PTR_DAT_8c0ba9b4;
  ar4[10] = uVar2;
  ar4[0xb] = *(undefined4 *)(puVar1 + 8);
  *(undefined4 *)(DAT_8c0ba9b8 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0ba9bc + (int)ar4) = 1;
  *(undefined4 *)(DAT_8c0ba9c0 + (int)ar4) = DAT_8c0ba9c4;
  return ar4;
}



/* FUN_8c0ba9c8 @ 8c0ba9c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba9c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0baa00)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0baa04)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12b350_m0_0baa08 @ 8c0baa08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b350_m0_0baa08(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0baa68;
    (*(code *)PTR_FUN_8c0baa70)((int)ar4 + DAT_8c0baa6c,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0baa74)(ar4 + 0x14,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0baa78)(ar4 + 0x12,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_0ba8ac_8c0baa7c)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0baa80)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12b350_m1_0baa84 @ 8c0baa84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b350_m1_0baa84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pure_virtual_stub_8c0baab4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_0baac0 @ 8c0baab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_0baac0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 *a5;
  undefined *a5_00;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_fr1;
  char in_FPSCR_SZ;
  
  *ar5 = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  uVar4 = 0;
  a5 = ar5;
  (*(code *)PTR_FUN_8c0bacd8)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0bacdc)(uVar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x34) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x34) = CONCAT44(0x3f800000,extraout_fr1);
  }
  for (iVar6 = 0; iVar6 < 0x12; iVar6 = iVar6 + 1) {
    *(undefined4 *)(iVar6 * 0xc + ar4 + 0x68) = 0;
  }
  uVar5 = 0x12;
  uVar4 = DAT_8c0bace0;
  (*(code *)PTR_FUN_8c0bace8)(ar4 + DAT_8c0bace4,ar4 + 100,DAT_8c0bace0,0x12);
  iVar6 = ar4 + DAT_8c0bace4;
  (**(code **)(*(int *)(ar4 + 0x48) + 8))((int *)(ar4 + 0x48),iVar6,uVar4,uVar5);
  uVar4 = (*(code *)PTR_get_field_4_0253e4_8c0bacec)(ar4 + 0x48,iVar6,uVar4,uVar5);
  iVar6 = (*(code *)PTR_FUN_8c0bad00)
                    (DAT_8c0bacfc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + DAT_8c0bacf8,
                     PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + DAT_8c0bacf4,uVar4);
  if (iVar6 == 0) {
    uVar4 = 2;
    (*(code *)PTR_report_error_message_8c0bad0c)
              (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + DAT_8c0bad08,
               PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + DAT_8c0bad04,0,2);
  }
  *(short *)(ar4 + 0x38) = (short)DAT_8c0bad10;
  *(undefined4 *)(ar4 + 0x3c) = 1;
  *(undefined4 *)(ar4 + 0x40) = 0;
  iVar1 = DAT_8c0bad14;
  (*(code *)PTR_FUN_8c0bad1c)
            (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + 0x42,DAT_8c0bad18,DAT_8c0bad14,uVar4);
  iVar6 = DAT_8c0bad18;
  puVar3 = (undefined2 *)((int)ar5 + DAT_8c0bad20);
  *puVar3 = *(undefined2 *)(DAT_8c0bad18 + 0x1e);
  puVar3[1] = *(undefined2 *)(iVar6 + 0x20);
  puVar3[2] = *(undefined2 *)(iVar6 + 0x22);
  puVar3[3] = *(undefined2 *)(iVar6 + 0x24);
  puVar3[4] = *(undefined2 *)(iVar6 + 0x26);
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    *(undefined1 *)((int)ar5 + iVar6 + 4) = *(undefined1 *)(iVar6 + DAT_8c0bad18 + 0x2a);
  }
  for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
    iVar2 = iVar6 * 10 + DAT_8c0bad18;
    *(undefined2 *)((int)ar5 + iVar6 * 10 + 0xc) = *(undefined2 *)(iVar2 + 0x32);
    *(undefined2 *)((int)ar5 + iVar6 * 10 + 0xe) = *(undefined2 *)(iVar2 + 0x34);
    *(undefined2 *)((int)ar5 + iVar6 * 10 + 0x10) = *(undefined2 *)(iVar2 + 0x36);
    *(undefined2 *)((int)ar5 + iVar6 * 10 + 0x12) = *(undefined2 *)(iVar2 + 0x38);
    *(undefined2 *)((int)ar5 + iVar6 * 10 + 0x14) = *(undefined2 *)(iVar2 + 0x3a);
  }
  iVar6 = DAT_8c0bad18 + 0x50;
  (*(code *)PTR_FUN_8c0bad24)(ar5 + 0xb,iVar6,iVar1,uVar4);
  (*(code *)PTR_FUN_8c0bad28)(ar5,iVar6,iVar1,uVar4);
  uVar5 = (*(code *)PTR_FUN_8c0bad2c)(ar5,0,iVar1,uVar4);
  *(undefined4 *)(DAT_8c0bad30 + (int)ar5) = uVar5;
  uVar5 = (*(code *)PTR_FUN_8c0bad34)(ar5,DAT_8c0bad18 + 0x14,iVar1,uVar4);
  *(undefined4 *)(DAT_8c0bad38 + (int)ar5) = uVar5;
  *(int *)(DAT_8c0bad3c + ar4) = *(int *)(DAT_8c0bad3c + ar4) + 1;
  iVar6 = DAT_8c0bad14;
  iVar1 = (*(code *)PTR_FUN_8c0bad1c)
                    (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + 0x42,DAT_8c0bad18,DAT_8c0bad14,
                     uVar4);
  if (iVar1 == 0) {
    iVar6 = DAT_8c0bad18;
    (*(code *)PTR_FUN_8c0bad44)(*(undefined4 *)(DAT_8c0bad40 + (int)ar5),ar5,DAT_8c0bad18,uVar4);
  }
  uVar5 = (*(code *)PTR_pack_acquire_entry_handle_8c0bad50)
                    (DAT_8c0bad4c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + DAT_8c0bad48,iVar6,
                     uVar4);
  *(undefined4 *)(DAT_8c0bad54 + ar4) = uVar5;
  a5_00 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bacf0 + DAT_8c0bad58;
  uVar5 = (*(code *)PTR_pack_acquire_entry_handle_8c0bad50)(DAT_8c0bad4c,a5_00,iVar6,uVar4);
  *(undefined4 *)(DAT_8c0bad5c + ar4) = uVar5;
  (*(code *)PTR_FUN_8c0bad64)(ar4 + DAT_8c0bad60,a5_00,iVar6,uVar4);
  *(undefined4 *)(ar4 + 8) = 1;
  return 1;
}



/* FUN_8c0bad68 @ 8c0bad68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bad68(int ar4,undefined1 *ar5,int ar6,undefined *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *a4;
  undefined4 a4_00;
  undefined1 *a5;
  int iVar3;
  int a4_01;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [24];
  
  a5 = ar5;
  uVar1 = (*(code *)PTR_get_field_a510_01f538_8c0baeac)(DAT_8c0baea8,ar5,ar6,ar7);
  a4_01 = 0;
  a4 = auStack_40;
  (*(code *)PTR_FUN_8c0baeb0)(a4,a5,ar6,ar7);
  iVar3 = 1;
  if (*DAT_8c0baeb4 == '\0') {
    *DAT_8c0baeb8 = '\0';
    *DAT_8c0baeb4 = '\x01';
  }
  if (*(int *)(ar4 + 0x30) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0baebc,*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar5 = (double)CONCAT44(PTR_FUN_8c0baec0,DAT_8c0baebc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x34) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
    }
    (*(code *)PTR_FUN_8c0baec0)(a4,a5,ar6,ar7);
    fVar4 = DAT_8c0baec4;
    fVar6 = DAT_8c0baec8;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + 0x34);
      fVar6 = DAT_8c0baec4;
    }
    if (in_FPSCR_PR != '\0' || fVar4 <= fVar6) {
      *(undefined4 *)(ar4 + 0x30) = 2;
    }
  }
  a4_00 = *(undefined4 *)(ar5 + (int)DAT_8c0baec8);
  iVar2 = (*(code *)PTR_FUN_8c0baecc)(a4_00,a5,ar6,ar7);
  if (iVar2 == 1) {
    *(undefined4 *)(ar4 + 0x40) = 1;
  }
  if (*(int *)(ar4 + 0x40) == 1) {
    a4_00 = *(undefined4 *)(ar5 + (int)DAT_8c0baec8);
    iVar2 = (*(code *)PTR_FUN_8c0baed0)(a4_00,a5,ar6,ar7);
    if (iVar2 == 1) {
      (*(code *)PTR_pack_release_entry_handle_8c0baedc)
                (DAT_8c0baed8,*(undefined4 *)(DAT_8c0baed4 + ar4),ar6,ar7);
      a5 = *(undefined1 **)(DAT_8c0baee0 + ar4);
      (*(code *)PTR_pack_release_entry_handle_8c0baedc)(DAT_8c0baed8,a5,ar6,ar7);
      a4_00 = DAT_8c0baee4;
      iVar2 = (*(code *)PTR_FUN_8c0baee8)(DAT_8c0baee4,a5,ar6,ar7);
      if (iVar2 == 1) {
        a4_00 = DAT_8c0baee4;
        (*(code *)PTR_FUN_8c0baeec)(DAT_8c0baee4,a5,ar6,ar7);
      }
      *(undefined4 *)(ar5 + DAT_8c0baef0) = 4;
    }
  }
  if (*(int *)(ar4 + 0x30) == 2) {
    iVar3 = (*(code *)PTR_FUN_8c0baefc)(uVar1,a5,ar6,ar7);
    a4_01 = (*(code *)PTR_s_SEAMANDC_USR_0b76dc_8c0baf00)(uVar1,a5,ar6,ar7);
    a4_00 = uVar1;
  }
  if (iVar3 == 1) {
    if (*DAT_8c0baeb8 == '\0') {
      if (a4_01 == 0) {
        if (*(int *)(ar4 + 0x30) != 1) {
          a5 = ar5;
          (*(code *)PTR_FUN_8c0baf98)(ar4,ar5,ar6,ar7);
        }
        if ((*(int *)(DAT_8c0baf9c + ar4) == 0) || (*(int *)(DAT_8c0baf9c + ar4) == 1)) {
          a5 = ar5;
          (*(code *)PTR_FUN_8c0bafa4)(ar4 + DAT_8c0bafa0,ar5,ar6,ar7);
        }
        if (((*(int *)(DAT_8c0baf9c + ar4) != 0) &&
            (iVar3 = (*(code *)PTR_FUN_8c0bafac)(*(undefined4 *)(ar5 + DAT_8c0bafa8),a5,ar6,ar7),
            iVar3 == 1)) && (*(int *)(ar4 + 0x30) == 2)) {
          a5 = auStack_4c;
          (*(code *)PTR_FUN_8c0bafb0)(ar5,a5,ar6,ar7);
          iVar3 = (*(code *)PTR_FUN_8c0bafb4)(auStack_4c,a5,ar6,ar7);
          if (iVar3 == 0) {
            *DAT_8c0bafb8 = 1;
          }
          else {
            *(undefined4 *)(ar4 + 0x30) = 1;
            iVar3 = (*(code *)PTR_FUN_8c0bb008)(DAT_8c0bb004,a5,ar6,ar7);
            if (iVar3 == 1) {
              (*(code *)PTR_FUN_8c0bb00c)(DAT_8c0bb004,a5,ar6,ar7);
              (*(code *)PTR_strcpy_8c0bb018)
                        (auStack_2c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bb010 + DAT_8c0bb014,ar6,ar7
                        );
              (*(code *)PTR_strcpy_8c0bb018)(DAT_8c0bb01c + 0x20,auStack_2c,ar6,ar7);
              a5 = ar5;
              (*(code *)PTR_FUN_8c0bb020)(ar4,ar5,ar6,ar7);
            }
          }
        }
      }
      else {
        (*(code *)PTR_FUN_8c0bb048)(a4_01,a5,ar6,ar7);
        (*(code *)PTR_FUN_8c0bb04c)(a4_01,a5,ar6,ar7);
      }
    }
    else {
      (*(code *)PTR_FUN_8c0baf04)(a4_00,a5,ar6,ar7);
      ar7 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0baf08 + 0x41;
      ar6 = 0;
      a5 = (undefined1 *)0x5;
      (*(code *)PTR_s_WARNING_NOPAD_0c2f08_8c0baf10)(DAT_8c0baf0c,5,0,ar7);
    }
  }
  else {
    (*(code *)PTR_FUN_8c0bb110)(a4_00,a5,ar6,ar7);
    *DAT_8c0bb114 = 0;
  }
  if (*(int *)(ar4 + 0x30) == 1) {
    *(int *)(DAT_8c0bb118 + ar4) = *(int *)(DAT_8c0bb118 + ar4) + DAT_8c0bb11c;
    if (((*(uint *)(DAT_8c0bb118 + ar4) <= DAT_8c0bb120) &&
        (iVar3 = (*(code *)PTR_FUN_8c0bb128)(DAT_8c0bb124,a5,ar6,ar7), iVar3 == 0)) &&
       ((iVar3 = (*(code *)PTR_FUN_8c0bb138)
                           (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bb130 + DAT_8c0bb134,
                            DAT_8c0bb12c + 0x20,ar6,ar7), iVar3 == 0 &&
        (*(int *)(DAT_8c0bb13c + ar4) != 4)))) {
      (*(code *)PTR_strcpy_8c0bb140)
                (DAT_8c0bb12c + 0x40,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bb130 + 0x41,ar6,ar7);
      ar6 = DAT_8c0bb12c;
      uVar1 = (*(code *)PTR_FUN_8c0bb144)(DAT_8c0bb124,6,DAT_8c0bb12c,ar7);
      *DAT_8c0bb148 = uVar1;
    }
    if (DAT_8c0bb14c <= *(uint *)(DAT_8c0bb118 + ar4)) {
      *(undefined4 *)(ar4 + 8) = 2;
    }
  }
  (*(code *)PTR_s_AMB_FOREST_0bb1f2_8c0bb150)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0bb154)(auStack_40,0xffffffff,ar6,ar7);
  return 1;
}



/* FUN_8c0bb158 @ 8c0bb158 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0bb158(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  *ar5 = *(undefined2 *)(DAT_8c0bb19c + ar4);
  *(undefined1 *)(ar5 + 1) = *(undefined1 *)(DAT_8c0bb1a0 + ar4);
  *(undefined1 *)((int)ar5 + 3) = *(undefined1 *)(DAT_8c0bb1a4 + ar4);
  *(undefined1 *)(ar5 + 2) = *(undefined1 *)(DAT_8c0bb1a8 + ar4);
  *(undefined1 *)((int)ar5 + 5) = *(undefined1 *)(DAT_8c0bb1ac + ar4);
  *(undefined1 *)(ar5 + 3) = *(undefined1 *)(DAT_8c0bb1b0 + ar4);
  *(undefined1 *)((int)ar5 + 7) = *(undefined1 *)(DAT_8c0bb1b4 + ar4);
  bVar1 = *(byte *)(DAT_8c0bb1b8 + ar4);
  *(byte *)(ar5 + 4) = bVar1;
  return (uint)bVar1;
}



/* FUN_8c0bb1bc @ 8c0bb1bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bb1bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0bb1e0)(*(undefined4 *)(DAT_8c0bb1dc + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* s_AMB_FOREST_0bb1f2 @ 8c0bb1e4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0bc1d8) */
/* WARNING: Removing unreachable block (ram,0x8c0bbd9e) */
/* WARNING: Removing unreachable block (ram,0x8c0bbbe4) */
/* WARNING: Removing unreachable block (ram,0x8c0bb60a) */
/* WARNING: Removing unreachable block (ram,0x8c0bbcda) */
/* WARNING: Removing unreachable block (ram,0x8c0bbfac) */
/* WARNING: Removing unreachable block (ram,0x8c0bc212) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_AMB_FOREST_0bb1f2(int ar4,int ar5,ulonglong *ar6,char *ar7)

{
  short sVar1;
  ulonglong *puVar2;
  double *pdVar3;
  uint *a4;
  short *a5;
  short *a4_00;
  undefined *puVar4;
  short sVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  float *a6;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 a5_00;
  double *pdVar14;
  uint uVar15;
  short *a6_00;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  ulonglong in_dr0;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  int *piVar24;
  double in_dr2;
  double in_xd0;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined *puVar29;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined *puStack_1c0;
  int iStack_1bc;
  int aiStack_1b8 [3];
  int *piStack_1ac;
  int aiStack_1a8 [7];
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  float *pfStack_180;
  int iStack_17c;
  int iStack_178;
  float fStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  uint uStack_160;
  uint uStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  undefined8 uStack_140;
  float fVar23;
  
  if (*DAT_8c0bb378 == '\0') {
    *(char *)DAT_8c0bb37c = '\0';
    *DAT_8c0bb378 = '\x01';
  }
  puVar2 = DAT_8c0bb384;
  if (*DAT_8c0bb380 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0bb384 = 0;
    }
    else {
      *DAT_8c0bb384 = in_dr0;
    }
    *DAT_8c0bb380 = '\x01';
    ar6 = puVar2;
  }
  uVar8 = *(undefined4 *)(PTR_DAT_8c0bb38c + 4);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb388) = *(undefined4 *)PTR_DAT_8c0bb38c;
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb388 + 4) = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c0bb38c + 0xc);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb388 + 8) = *(undefined4 *)(PTR_DAT_8c0bb38c + 8);
  *(undefined4 *)((int)&piStack_1ac + DAT_8c0bb388) = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c0bb38c + 0x14);
  *(undefined4 *)((int)aiStack_1a8 + DAT_8c0bb388) = *(undefined4 *)(PTR_DAT_8c0bb38c + 0x10);
  *(undefined4 *)((int)aiStack_1a8 + DAT_8c0bb388 + 4) = uVar8;
  uVar12 = *(undefined4 *)(PTR_DAT_8c0bb38c + 0x18);
  uVar8 = *(undefined4 *)(PTR_DAT_8c0bb38c + 0x1c);
  *(undefined4 *)((int)aiStack_1a8 + DAT_8c0bb388 + 8) = uVar12;
  *(undefined4 *)((int)aiStack_1a8 + DAT_8c0bb388 + 0xc) = uVar8;
  (*(code *)PTR_FUN_8c0bb394)((int)aiStack_1b8 + DAT_8c0bb390,uVar12,ar6,ar7);
  if (*DAT_8c0bb398 == '\0') {
    uVar8 = (*(code *)PTR_rand_8c0bb39c)(DAT_8c0bb398,uVar12,ar6,ar7);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb3a0) = uVar8;
    uVar8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bb3a4)
                      (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb3a0),0x2e,ar6,ar7);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb3a8) = uVar8;
    *DAT_8c0bb3ac = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb3a8);
    uVar12 = 1;
    *DAT_8c0bb398 = '\x01';
  }
  if (*DAT_8c0bb3b0 == '\0') {
    *DAT_8c0bb3b4 = 0;
    *DAT_8c0bb3b0 = '\x01';
  }
  if (*DAT_8c0bb3b8 == '\0') {
    *DAT_8c0bb3bc = 0;
    ar7 = DAT_8c0bb3b8;
    uVar12 = 1;
    *DAT_8c0bb3b8 = '\x01';
  }
  if (*DAT_8c0bb3c0 == '\0') {
    *DAT_8c0bb3c4 = 1;
    *DAT_8c0bb3c0 = '\x01';
  }
  uVar8 = (*(code *)PTR_get_field_a510_01f538_8c0bb3cc)(DAT_8c0bb3c8,uVar12,ar6,ar7);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb3d0) = uVar8;
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb3d4) =
       *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb3d0);
  if (*DAT_8c0bb3d8 == '\0') {
    *DAT_8c0bb3dc = 0;
    *DAT_8c0bb3d8 = '\x01';
  }
  piVar16 = (int *)0x4;
  iVar26 = DAT_8c0bb3e0;
  (*(code *)PTR_FUN_8c0bb3e4)
            ((int)aiStack_1b8 + DAT_8c0bb390,(int)aiStack_1b8 + DAT_8c0bb388,DAT_8c0bb3e0,4);
  (*(code *)PTR_FUN_8c0bb3ec)
            ((int)aiStack_1b8 + DAT_8c0bb390,(int)aiStack_1b8 + DAT_8c0bb3e8,iVar26,piVar16);
  (*(code *)PTR_FUN_8c0bb3f4)((int)aiStack_1b8 + DAT_8c0bb390,DAT_8c0bb3f0,iVar26,piVar16);
  if (*(int *)(DAT_8c0bb3f8 + ar4) != *DAT_8c0bb3bc) {
    *(char *)DAT_8c0bb37c = '\0';
    iVar26 = DAT_8c0bb3f8;
    piVar16 = DAT_8c0bb3bc;
    *DAT_8c0bb3bc = *(int *)(DAT_8c0bb3f8 + ar4);
  }
  (*(code *)PTR_FUN_8c0bb400)(ar5,(int)aiStack_1b8 + DAT_8c0bb3fc,iVar26,piVar16);
  pdVar14 = DAT_8c0bb37c;
  if (*(char *)DAT_8c0bb37c == '\0') {
    for (iVar26 = 0; iVar26 < 4; iVar26 = iVar26 + 1) {
      *(int *)((int)aiStack_1b8 + DAT_8c0bb4c0) = iVar26;
      *(undefined4 *)(DAT_8c0bb4c4 + *(int *)((int)aiStack_1b8 + DAT_8c0bb4c0) * 4) = DAT_8c0bb4c8;
      *(int *)((int)aiStack_1b8 + DAT_8c0bb4cc) = iVar26;
      *(undefined4 *)(DAT_8c0bb4d0 + *(int *)((int)aiStack_1b8 + DAT_8c0bb4cc) * 4) = DAT_8c0bb4c8;
      *(int *)((int)aiStack_1b8 + DAT_8c0bb4d4) = iVar26;
      *(undefined4 *)(DAT_8c0bb4d8 + *(int *)((int)aiStack_1b8 + DAT_8c0bb4d4) * 4) = DAT_8c0bb4c8;
      *(int *)((int)aiStack_1b8 + DAT_8c0bb4dc) = iVar26;
      *(undefined4 *)(DAT_8c0bb4e0 + *(int *)((int)aiStack_1b8 + DAT_8c0bb4dc) * 4) = 0xffffffff;
      *(int *)((int)aiStack_1b8 + DAT_8c0bb4e4) = iVar26;
      *(undefined4 *)(*(int *)((int)aiStack_1b8 + DAT_8c0bb4e4) * 4 + DAT_8c0bb4e0 + 0x10) =
           DAT_8c0bb4c8;
    }
    *DAT_8c0bb4e8 = 0;
    DAT_8c0bb4e8[1] = (short)DAT_8c0bb4ec;
    DAT_8c0bb4e8[2] = 0;
    DAT_8c0bb4e8[3] = 0;
    DAT_8c0bb4e8[4] = (short)DAT_8c0bb4ec;
    DAT_8c0bb4e8[5] = 0;
    DAT_8c0bb4e8[6] = (short)DAT_8c0bb4ec;
    DAT_8c0bb4e8[7] = (short)DAT_8c0bb4ec;
    piVar16 = (int *)0x4;
    pdVar14 = DAT_8c0bb4f0;
    (*(code *)PTR_FUN_8c0bb4f4)(ar4 + 0x50,0,DAT_8c0bb4f0,4);
    (*(code *)PTR_FUN_8c0bb4fc)(ar4 + 0x50,DAT_8c0bb4f8,pdVar14,piVar16);
    iVar26 = 0;
    for (iVar27 = 0; iVar27 < 8; iVar27 = iVar27 + 1) {
      piVar16 = (int *)(ar5 + iVar27);
      iVar26 = (uint)*(byte *)(piVar16 + 1) + iVar26;
    }
    iVar27 = (int)aiStack_1b8 + DAT_8c0bb540;
    (*(code *)PTR_FUN_8c0bb544)(ar5,iVar27,pdVar14,piVar16);
    uVar8 = (*(code *)PTR_get_field_c8_0bced0_8c0bb548)(ar5,iVar27,pdVar14,piVar16);
    puVar11 = DAT_8c0bb550;
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb54c) = uVar8;
    *DAT_8c0bb550 = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb54c);
    for (iVar28 = 0; iVar28 < 0x14; iVar28 = iVar28 + 1) {
      *(int *)((int)aiStack_1b8 + DAT_8c0bb5b0) = iVar28;
      iVar27 = *(int *)((int)aiStack_1b8 + DAT_8c0bb5b0);
      if (*(int *)(DAT_8c0bb5b8 +
                  (iVar27 * 0x10 - *(int *)((int)aiStack_1b8 + DAT_8c0bb5b0)) * 0x10 + DAT_8c0bb5b4)
          == -1) {
        *(int *)((int)aiStack_1b8 + DAT_8c0bb5bc) = iVar28;
      }
    }
    for (iVar28 = 0; iVar28 < (int)(uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bb850);
        iVar28 = iVar28 + 1) {
      pdVar14 = (double *)PTR_rand_8c0bb84c;
      (*(code *)PTR_rand_8c0bb84c)(puVar11,iVar27,PTR_rand_8c0bb84c,piVar16);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)*(byte *)((int)aiStack_1b8 + DAT_8c0bb858),SUB84(in_dr2,0));
    }
    else {
      in_dr2 = (double)*(byte *)((int)aiStack_1b8 + DAT_8c0bb858);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bb85c,(int)in_dr0);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bb860,DAT_8c0bb85c);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (float)((ulonglong)dVar20 >> 0x20),SUB84(in_dr2,0));
    }
    else {
      in_dr2 = in_dr2 * dVar20;
    }
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)*(byte *)((int)aiStack_1b8 + DAT_8c0bb860);
      dVar20 = (double)CONCAT44(fVar19,SUB84(dVar20,0));
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + fVar19,SUB84(in_dr2,0));
    }
    else {
      dVar20 = (double)*(byte *)((int)aiStack_1b8 + DAT_8c0bb860);
      in_dr2 = in_dr2 + dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bb864,SUB84(dVar20,0));
    }
    else {
      dVar20 = (double)CONCAT44(_DAT_8c0bb868,DAT_8c0bb864);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (float)((ulonglong)dVar20 >> 0x20),SUB84(in_dr2,0));
    }
    else {
      in_dr2 = in_dr2 * dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bb85c,(float)*(byte *)((int)aiStack_1b8 + DAT_8c0bb860));
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bb860,DAT_8c0bb85c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar19 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar19 = SUB84(dVar20 * dVar20,0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = (float)*(byte *)((int)aiStack_1b8 + DAT_8c0bb850);
      fVar19 = fVar19 + fVar18;
      dVar20 = (double)CONCAT44(fVar18,fVar19);
      fVar19 = (float)((ulonglong)in_dr2 >> 0x20) - fVar19;
      in_dr2 = (double)CONCAT44(fVar19,SUB84(in_dr2,0));
      iVar28 = (int)fVar19;
    }
    else {
      dVar20 = (double)*(byte *)((int)aiStack_1b8 + DAT_8c0bb850);
      dVar20 = dVar20 + dVar20;
      in_dr2 = in_dr2 - dVar20;
      iVar28 = (int)in_dr2;
    }
    uVar8 = SUB84(dVar20,0);
    *DAT_8c0bb854 = iVar28;
    iVar28 = *DAT_8c0bb854;
    if (iVar28 < 0) {
      iVar28 = *DAT_8c0bb854 + _DAT_8c0bb868;
      *DAT_8c0bb854 = iVar28;
    }
    uVar12 = (*(code *)PTR_rand_8c0bb84c)(iVar28,iVar27,pdVar14,piVar16);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb86c) = uVar12;
    uVar13 = 0x3c;
    uVar12 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bb870)
                       (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb86c),0x3c,pdVar14,piVar16);
    puVar11 = DAT_8c0bb878;
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb874) = uVar12;
    *DAT_8c0bb878 = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb874);
    *(int *)((int)aiStack_1b8 + DAT_8c0bb87c) = ar5 + 0x30;
    *(int *)((int)aiStack_1b8 + DAT_8c0bb880) = ar5 + 0x44;
    uVar12 = (*(code *)PTR_rand_8c0bb84c)(puVar11,uVar13,pdVar14,piVar16);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb884) = uVar12;
    a5_00 = 0x41;
    uVar13 = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb884);
    uVar12 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bb870)(uVar13,0x41,pdVar14,piVar16);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb888) = uVar12;
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)*(int *)((int)aiStack_1b8 + DAT_8c0bb888),uVar8);
    }
    else {
      dVar20 = (double)*(int *)((int)aiStack_1b8 + DAT_8c0bb888);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)DAT_8c0bb88c = (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      *DAT_8c0bb88c = dVar20;
    }
    uVar8 = (*(code *)PTR_rand_8c0bb84c)(uVar13,a5_00,pdVar14,piVar16);
    uVar12 = SUB84(dVar20,0);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb890) = uVar8;
    uVar15 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bb870)
                       (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb890),0x46,pdVar14,piVar16);
    uStack_140 = (double)CONCAT44(uVar15,(float)uStack_140);
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)(int)uVar15,uVar12);
    }
    else {
      dVar20 = (double)(int)uVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)DAT_8c0bb88c + 4) = (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      *(double *)((int)DAT_8c0bb88c + 4) = dVar20;
    }
    if (iVar26 == 1) {
      if (in_FPSCR_SZ == '\0') {
        uStack_140 = (double)((ulonglong)uVar15 << 0x20);
      }
      else {
        uStack_140 = (double)((ulonglong)dVar20 & 0xffffffff);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)DAT_8c0bb88c + 4) = (float)uStack_140;
        *(float *)DAT_8c0bb88c = (float)uStack_140;
        dVar20 = (double)CONCAT44((float)uStack_140,SUB84(dVar20,0));
      }
      else {
        *(double *)((int)DAT_8c0bb88c + 4) = uStack_140;
        *DAT_8c0bb88c = uStack_140;
        dVar20 = uStack_140;
      }
      uStack_144 = (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bb860);
      *DAT_8c0bb854 =
           DAT_8c0bb894 -
           ((uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bb860) * 0x3c +
           (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bb850));
      if (*DAT_8c0bb854 < 0) {
        *DAT_8c0bb854 = *DAT_8c0bb854 + _DAT_8c0bb868;
      }
    }
    pdVar3 = DAT_8c0bb88c;
    if (4 < *DAT_8c0bb898) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb85c,SUB84(dVar20,0));
        *(float *)DAT_8c0bb88c = DAT_8c0bb85c;
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bb860,DAT_8c0bb85c);
        *DAT_8c0bb88c = dVar20;
      }
      pdVar14 = pdVar3;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb89c,SUB84(dVar20,0));
        *(float *)((int)DAT_8c0bb88c + 4) = DAT_8c0bb89c;
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bb8a0,DAT_8c0bb89c);
        *(double *)((int)DAT_8c0bb88c + 4) = dVar20;
      }
    }
    if (10 < *DAT_8c0bb898) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb85c,SUB84(dVar20,0));
        *(float *)DAT_8c0bb88c = DAT_8c0bb85c;
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bb860,DAT_8c0bb85c);
        *DAT_8c0bb88c = dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb8a0,SUB84(dVar20,0));
        *(float *)((int)DAT_8c0bb88c + 4) = DAT_8c0bb8a0;
      }
      else {
        dVar20 = (double)CONCAT44(_DAT_8c0bb8a4,DAT_8c0bb8a0);
        *(double *)((int)DAT_8c0bb88c + 4) = dVar20;
      }
    }
    if ((((**(int **)((int)aiStack_1b8 + DAT_8c0bb87c) == 0x25) ||
         (*(int *)(*(int *)((int)aiStack_1b8 + DAT_8c0bb87c) + 4) == 0x25)) ||
        (*(int *)(*(int *)((int)aiStack_1b8 + DAT_8c0bb87c) + 8) == 0x25)) &&
       (*(char *)(*(int *)((int)aiStack_1b8 + DAT_8c0bb880) + 0x25) == '\0')) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)DAT_8c0bb88c + 4) = 0.0;
      }
      else {
        *(ulonglong *)((int)DAT_8c0bb88c + 4) = (ulonglong)dVar20 & 0xffffffff;
      }
      uStack_148 = (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bb860);
      *DAT_8c0bb854 =
           _DAT_8c0bb8a4 -
           ((uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bb860) * 0x3c +
           (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bb850));
      if (*DAT_8c0bb854 < 0) {
        piVar16 = (int *)(*DAT_8c0bb854 + _DAT_8c0bb868);
        *DAT_8c0bb854 = (int)piVar16;
      }
    }
    *DAT_8c0bb8a8 = 0;
    *DAT_8c0bb8ac = 1;
  }
  if (*DAT_8c0bb8b0 != 0) {
    if (in_FPSCR_SZ == '\0') {
      fVar19 = *(float *)DAT_8c0bb88c;
      fVar18 = DAT_8c0bb8b4;
    }
    else {
      in_xd0 = *DAT_8c0bb88c;
      fVar19 = DAT_8c0bb8b4;
      fVar18 = DAT_8c0bb8b8;
    }
    if (in_FPSCR_PR == '\0' && fVar19 < fVar18) {
      (*(code *)PTR_pack_release_entry_handle_8c0bb8c0)
                (DAT_8c0bb8bc,*(undefined4 *)((int)DAT_8c0bb8b8 + ar4),pdVar14,piVar16);
    }
    (*(code *)PTR_pack_release_entry_handle_8c0bb8c0)
              (DAT_8c0bb8bc,*(undefined4 *)(DAT_8c0bb8c4 + ar4),pdVar14,piVar16);
  }
  *DAT_8c0bb8b0 = *(int *)((int)aiStack_1b8 + DAT_8c0bb8c8);
  if (in_FPSCR_SZ == '\0') {
    fVar19 = *(float *)DAT_8c0bb88c;
    fVar18 = DAT_8c0bb8cc;
  }
  else {
    in_xd0 = *DAT_8c0bb88c;
    fVar19 = DAT_8c0bb8cc;
    fVar18 = fRam8c0bb8d0;
  }
  if (in_FPSCR_PR == '\0' && fVar19 < fVar18) {
    pdVar14 = (double *)0x0;
    piVar16 = DAT_8c0bb930;
    (*(code *)PTR_FUN_8c0bb93c)
              (DAT_8c0bb938,*(undefined4 *)((int)DAT_8c0bb934 + ar4),0,DAT_8c0bb930);
  }
  uVar8 = (*(code *)PTR_FUN_8c0bb940)
                    (DAT_8c0bb938,*(undefined4 *)((int)DAT_8c0bb934 + ar4),pdVar14,piVar16);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb944) = uVar8;
  if (*(int *)((int)aiStack_1b8 + DAT_8c0bb944) == 2) {
    uVar8 = (*(code *)PTR_pack_acquire_entry_handle_8c0bb950)
                      (DAT_8c0bb938,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bb948 + DAT_8c0bb94c,pdVar14
                       ,piVar16);
    piVar16 = DAT_8c0bb934;
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bb954) = uVar8;
    pdVar14 = *(double **)((int)aiStack_1b8 + DAT_8c0bb954);
    *(double **)((int)DAT_8c0bb934 + ar4) = pdVar14;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      fVar19 = *(float *)DAT_8c0bb9dc;
      fVar18 = DAT_8c0bb9e0;
    }
    else {
      in_xd0 = *DAT_8c0bb9dc;
      fVar19 = DAT_8c0bb9e0;
      fVar18 = DAT_8c0bb9e4;
    }
    if (in_FPSCR_PR != '\0' || fVar18 <= fVar19) {
      if (in_FPSCR_SZ == '\0') {
        fVar19 = *(float *)DAT_8c0bba9c;
        fVar18 = DAT_8c0bbaa0;
      }
      else {
        in_xd0 = *DAT_8c0bba9c;
        fVar19 = DAT_8c0bbaa0;
        fVar18 = DAT_8c0bbaa4;
      }
      if (in_FPSCR_PR == '\0' && fVar19 < fVar18) {
        (*(code *)PTR_pack_release_entry_handle_8c0bbaac)
                  (DAT_8c0bbaa8,*(undefined4 *)((int)DAT_8c0bbaa4 + ar4),pdVar14,piVar16);
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb9e4,*(float *)DAT_8c0bb9dc);
      }
      else {
        in_xd0 = *DAT_8c0bb9dc;
        dVar20 = (double)CONCAT44(DAT_8c0bb9e8,DAT_8c0bb9e4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar20 - dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb9e8,fVar19);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bb9ec,DAT_8c0bb9e8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar20 * dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb9ec,fVar19);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bb9f0,DAT_8c0bb9ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar20 / dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bb9f0,fVar19);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bb9f4,DAT_8c0bb9f0);
      }
      if (in_FPSCR_PR == '\0') {
        piVar16 = (int *)(int)(SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20));
      }
      else {
        piVar16 = (int *)(int)(dVar20 + dVar20);
      }
      pdVar14 = (double *)0x0;
      (*(code *)PTR_FUN_8c0bb9fc)(DAT_8c0bb9f8,*(undefined4 *)(DAT_8c0bb9f4 + ar4),0,piVar16);
      uVar8 = (*(code *)PTR_FUN_8c0bba00)
                        (DAT_8c0bb9f8,*(undefined4 *)(DAT_8c0bb9f4 + ar4),pdVar14,piVar16);
      *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bba04) = uVar8;
      if (*(int *)((int)aiStack_1b8 + DAT_8c0bba04) == 2) {
        pdVar14 = (double *)(PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bba08 + (int)DAT_8c0bba0c);
        piVar16 = DAT_8c0bba0c;
        uVar8 = (*(code *)PTR_pack_acquire_entry_handle_8c0bba10)
                          (DAT_8c0bb9f8,pdVar14,pdVar14,DAT_8c0bba0c);
        *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bba14) = uVar8;
        *(undefined4 *)(DAT_8c0bb9f4 + ar4) = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bba14);
      }
    }
  }
  uVar8 = (*(code *)PTR_FUN_8c0bbab4)
                    (DAT_8c0bbaa8,*(undefined4 *)(DAT_8c0bbab0 + ar4),pdVar14,piVar16);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bbab8) = uVar8;
  if (*(int *)((int)aiStack_1b8 + DAT_8c0bbab8) == 2) {
    uVar8 = (*(code *)PTR_pack_acquire_entry_handle_8c0bbac4)
                      (DAT_8c0bbaa8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bbabc + DAT_8c0bbac0,pdVar14
                       ,piVar16);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bbac8) = uVar8;
    *(undefined4 *)(DAT_8c0bbab0 + ar4) = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bbac8);
  }
  if (in_FPSCR_SZ == '\0') {
    fVar19 = *(float *)DAT_8c0bba9c;
    fVar18 = DAT_8c0bbacc;
  }
  else {
    in_xd0 = *DAT_8c0bba9c;
    fVar19 = DAT_8c0bbacc;
    fVar18 = DAT_8c0bbad0;
  }
  if (in_FPSCR_PR != '\0' || fVar18 <= fVar19) {
    if (in_FPSCR_SZ == '\0') {
      fVar19 = *(float *)DAT_8c0bbb20;
      fVar18 = DAT_8c0bbb24;
    }
    else {
      in_xd0 = *DAT_8c0bbb20;
      fVar19 = DAT_8c0bbb24;
      fVar18 = DAT_8c0bbb28;
    }
    if (in_FPSCR_PR != '\0' || fVar18 <= fVar19) {
      uVar15 = 0;
      fVar19 = DAT_8c0bbc10;
      (*(code *)PTR_FUN_8c0bbc1c)(DAT_8c0bbc18,*(undefined4 *)(DAT_8c0bbc14 + ar4),0,DAT_8c0bbc10);
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(float *)DAT_8c0bbb20,DAT_8c0bbb24);
      }
      else {
        dVar20 = *DAT_8c0bbb20;
        in_xd0 = (double)CONCAT44(DAT_8c0bbb28,DAT_8c0bbb24);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar20 - dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bbb28,fVar19);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bbb2c,DAT_8c0bbb28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar20 * dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bbb2c,fVar19);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bbb30,DAT_8c0bbb2c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar20 / dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bbb30,fVar19);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bbb34,DAT_8c0bbb30);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)(int)(SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20));
      }
      else {
        fVar19 = (float)(int)(dVar20 + dVar20);
      }
      uVar15 = 0;
      (*(code *)PTR_FUN_8c0bbb3c)(DAT_8c0bbb38,*(undefined4 *)(DAT_8c0bbb34 + ar4),0,fVar19);
    }
  }
  else {
    uVar15 = 0;
    fVar19 = DAT_8c0bbad0;
    (*(code *)PTR_FUN_8c0bbad4)(DAT_8c0bbaa8,*(undefined4 *)(DAT_8c0bbab0 + ar4),0,DAT_8c0bbad0);
  }
  *DAT_8c0bbc20 = *DAT_8c0bbc20 + 1;
  if (2 < *DAT_8c0bbc20) {
    *DAT_8c0bbc20 = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(DAT_8c0bbc28,*(float *)DAT_8c0bbc24);
  }
  else {
    in_xd0 = *DAT_8c0bbc24;
    dVar20 = (double)CONCAT44(DAT_8c0bbc2c,DAT_8c0bbc28);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar20 + dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)DAT_8c0bbc24 = fVar18;
    dVar20 = (double)CONCAT44(DAT_8c0bbc2c,*(float *)DAT_8c0bbc24);
  }
  else {
    *DAT_8c0bbc24 = in_xd0;
    in_xd0 = *DAT_8c0bbc24;
    dVar20 = (double)CONCAT44(DAT_8c0bbc30,DAT_8c0bbc2c);
  }
  if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar20 >> 0x20) <= SUB84(dVar20,0)) {
    dVar20 = (double)((ulonglong)dVar20 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(float *)DAT_8c0bbc24 = 0.0;
    }
    else {
      *DAT_8c0bbc24 = dVar20;
    }
  }
  uStack_14c = (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bbc30);
  uVar9 = (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bbc30) * 0x3c +
          (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bbc34) + *DAT_8c0bbc38;
  if (DAT_8c0bbc3c < uVar9) {
    uVar9 = uVar9 - DAT_8c0bbc3c;
  }
  if ((DAT_8c0bbc40 < uVar9) && (uVar15 = DAT_8c0bbc44, uVar9 < DAT_8c0bbc44)) {
    fVar18 = (float)(int)uVar9;
    if (in_FPSCR_PR == '\0' && fVar18 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bbc48,fVar18);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bbc4c,DAT_8c0bbc48);
      }
      if (in_FPSCR_PR == '\0') {
        fVar18 = SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar18 = SUB84(dVar20 + dVar20,0);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbc4c,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbc50,DAT_8c0bbc4c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 - dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbc50,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbc54,DAT_8c0bbc50);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 / dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbc54,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(uRam8c0bbc58,DAT_8c0bbc54);
    }
    if (in_FPSCR_PR == '\0') {
      fVar23 = (float)((ulonglong)dVar20 >> 0x20);
      fVar18 = SUB84(dVar20,0) * fVar23;
      dVar20 = (double)CONCAT44(fVar23,fVar18);
      iVar26 = (int)fVar18;
    }
    else {
      dVar20 = dVar20 * dVar20;
      iVar26 = (int)dVar20;
    }
  }
  else if ((DAT_8c0bbc90 < uVar9) && (uVar9 < DAT_8c0bbc94)) {
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)(int)uVar9,SUB84(in_dr2,0));
    }
    else {
      in_dr2 = (double)(int)uVar9;
    }
    dVar21 = (double)((ulonglong)dVar20 & 0xffffffff);
    fVar18 = (float)((ulonglong)in_dr2 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar25 = fVar18 < 0.0;
    }
    else {
      bVar25 = in_dr2 < dVar21;
    }
    if (bVar25) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(DAT_8c0bbc98,SUB84(dVar20,0));
      }
      else {
        dVar21 = (double)CONCAT44(DAT_8c0bbc9c,DAT_8c0bbc98);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr2 = (double)CONCAT44(fVar18 + (float)((ulonglong)dVar21 >> 0x20),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = in_dr2 + dVar21;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),DAT_8c0bbc9c);
    }
    else {
      in_xd0 = (double)CONCAT44(DAT_8c0bbca0,DAT_8c0bbc9c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar21,0) - (float)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar21 - in_dr2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbca0,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbca4,DAT_8c0bbca0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 / dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbca4,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(uRam8c0bbca8,DAT_8c0bbca4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar23 = (float)((ulonglong)dVar20 >> 0x20);
      fVar18 = SUB84(dVar20,0) * fVar23;
      dVar20 = (double)CONCAT44(fVar23,fVar18);
      iVar26 = (int)fVar18;
    }
    else {
      dVar20 = dVar20 * dVar20;
      iVar26 = (int)dVar20;
    }
  }
  else if ((uVar9 < DAT_8c0bbcbc) || (iVar26 = DAT_8c0bbcc4, DAT_8c0bbcc0 < uVar9)) {
    iVar26 = 0;
  }
  if ((DAT_8c0bbd04 < uVar9) && (uVar9 < DAT_8c0bbd08)) {
    fVar18 = (float)(int)uVar9;
    if (in_FPSCR_PR == '\0' && fVar18 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bbd0c,fVar18);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bbd10,DAT_8c0bbd0c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar18 = SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar18 = SUB84(dVar20 + dVar20,0);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbd10,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbd14,DAT_8c0bbd10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 - dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbd14,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbd18,DAT_8c0bbd14);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 / dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbd18,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(uRam8c0bbd1c,DAT_8c0bbd18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar23 = (float)((ulonglong)dVar20 >> 0x20);
      fVar18 = SUB84(dVar20,0) * fVar23;
      dVar20 = (double)CONCAT44(fVar23,fVar18);
      iVar27 = (int)fVar18;
    }
    else {
      dVar20 = dVar20 * dVar20;
      iVar27 = (int)dVar20;
    }
  }
  else if ((DAT_8c0bbd54 < uVar9) && (uVar9 < DAT_8c0bbd58)) {
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)(int)uVar9,SUB84(in_dr2,0));
    }
    else {
      in_dr2 = (double)(int)uVar9;
    }
    dVar21 = (double)((ulonglong)dVar20 & 0xffffffff);
    fVar18 = (float)((ulonglong)in_dr2 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar25 = fVar18 < 0.0;
    }
    else {
      bVar25 = in_dr2 < dVar21;
    }
    if (bVar25) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(DAT_8c0bbd5c,SUB84(dVar20,0));
      }
      else {
        dVar21 = (double)CONCAT44(DAT_8c0bbd60,DAT_8c0bbd5c);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr2 = (double)CONCAT44(fVar18 + (float)((ulonglong)dVar21 >> 0x20),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = in_dr2 + dVar21;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),DAT_8c0bbd60);
    }
    else {
      in_xd0 = (double)CONCAT44(DAT_8c0bbd64,DAT_8c0bbd60);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar21,0) - (float)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar21 - in_dr2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbd64,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbd68,DAT_8c0bbd64);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 / dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbd68,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(uRam8c0bbd6c,DAT_8c0bbd68);
    }
    if (in_FPSCR_PR == '\0') {
      fVar23 = (float)((ulonglong)dVar20 >> 0x20);
      fVar18 = SUB84(dVar20,0) * fVar23;
      dVar20 = (double)CONCAT44(fVar23,fVar18);
      iVar27 = (int)fVar18;
    }
    else {
      dVar20 = dVar20 * dVar20;
      iVar27 = (int)dVar20;
    }
  }
  else if ((uVar9 < DAT_8c0bbd80) || (iVar27 = DAT_8c0bbd88, DAT_8c0bbd84 < uVar9)) {
    iVar27 = 0;
  }
  if ((DAT_8c0bbdcc < uVar9) && (uVar9 < DAT_8c0bbdd0)) {
    fVar18 = (float)(int)uVar9;
    if (in_FPSCR_PR == '\0' && fVar18 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0bbdd4,fVar18);
      }
      else {
        dVar20 = (double)CONCAT44(DAT_8c0bbdd8,DAT_8c0bbdd4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar18 = SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar18 = SUB84(dVar20 + dVar20,0);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbdd8,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbddc,DAT_8c0bbdd8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 - dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbddc,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbde0,DAT_8c0bbddc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 / dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbde0,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbde4,DAT_8c0bbde0);
    }
    if (in_FPSCR_PR == '\0') {
      iVar28 = (int)(SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20));
    }
    else {
      iVar28 = (int)(dVar20 * dVar20);
    }
    *(int *)((int)aiStack_1b8 + DAT_8c0bbde4) = iVar28;
  }
  else if ((DAT_8c0bbe24 < uVar9) && (uVar9 < DAT_8c0bbe28)) {
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)(int)uVar9,SUB84(in_dr2,0));
    }
    else {
      in_dr2 = (double)(int)uVar9;
    }
    dVar21 = (double)((ulonglong)dVar20 & 0xffffffff);
    fVar18 = (float)((ulonglong)in_dr2 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar25 = fVar18 < 0.0;
    }
    else {
      bVar25 = in_dr2 < dVar21;
    }
    if (bVar25) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(DAT_8c0bbe2c,SUB84(dVar20,0));
      }
      else {
        dVar21 = (double)CONCAT44(DAT_8c0bbe30,DAT_8c0bbe2c);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr2 = (double)CONCAT44(fVar18 + (float)((ulonglong)dVar21 >> 0x20),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = in_dr2 + dVar21;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),DAT_8c0bbe30);
    }
    else {
      in_xd0 = (double)CONCAT44(DAT_8c0bbe34,DAT_8c0bbe30);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar21,0) - (float)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar21 - in_dr2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbe34,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbe38,DAT_8c0bbe34);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 / dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bbe38,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bbe3c,DAT_8c0bbe38);
    }
    if (in_FPSCR_PR == '\0') {
      iVar28 = (int)(SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20));
    }
    else {
      iVar28 = (int)(dVar20 * dVar20);
    }
    *(int *)((int)aiStack_1b8 + DAT_8c0bbe3c) = iVar28;
  }
  else if ((uVar9 < DAT_8c0bbe58) || (DAT_8c0bbe5c < uVar9)) {
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bbf0c) = 0;
  }
  else {
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bbe64) = DAT_8c0bbe60;
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)iVar26,SUB84(in_dr2,0));
  }
  else {
    dVar20 = (double)iVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)DAT_8c0bbf10,DAT_8c0bbf14);
  }
  else {
    dVar21 = *DAT_8c0bbf10;
    in_xd0 = (double)CONCAT44(DAT_8c0bbf18,DAT_8c0bbf14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar21 - dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bbf14,fVar18);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bbf18,DAT_8c0bbf14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar21,0) / (float)((ulonglong)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar18,SUB84(dVar20,0));
  }
  else {
    fVar18 = SUB84(dVar21 / dVar21,0);
    dVar20 = dVar20 * (dVar21 / dVar21);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bbf18,fVar18);
  }
  else {
    dVar21 = (double)CONCAT44(_DAT_8c0bbf1c,DAT_8c0bbf18);
  }
  if (in_FPSCR_PR == '\0') {
    iVar26 = (int)((float)((ulonglong)dVar20 >> 0x20) + (float)((ulonglong)dVar21 >> 0x20));
    dVar20 = (double)CONCAT44((float)iVar27,SUB84(dVar20,0));
  }
  else {
    iVar26 = (int)(dVar20 + dVar21);
    dVar20 = (double)iVar27;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)DAT_8c0bbf10,DAT_8c0bbf14);
  }
  else {
    dVar21 = *DAT_8c0bbf10;
    in_xd0 = (double)CONCAT44(DAT_8c0bbf18,DAT_8c0bbf14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar21 - dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bbf14,fVar18);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bbf18,DAT_8c0bbf14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar21,0) / (float)((ulonglong)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar18,SUB84(dVar20,0));
  }
  else {
    fVar18 = SUB84(dVar21 / dVar21,0);
    dVar20 = dVar20 * (dVar21 / dVar21);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bbf18,fVar18);
  }
  else {
    dVar21 = (double)CONCAT44(_DAT_8c0bbf1c,DAT_8c0bbf18);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)((ulonglong)dVar20 >> 0x20) + (float)((ulonglong)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44(fVar18,SUB84(dVar20,0));
    iVar27 = (int)fVar18;
  }
  else {
    dVar20 = dVar20 + dVar21;
    iVar27 = (int)dVar20;
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)*(int *)((int)aiStack_1b8 + DAT_8c0bbf0c),SUB84(dVar20,0));
  }
  else {
    dVar20 = (double)*(int *)((int)aiStack_1b8 + DAT_8c0bbf0c);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)DAT_8c0bbf10,DAT_8c0bbf14);
  }
  else {
    dVar21 = *DAT_8c0bbf10;
    in_xd0 = (double)CONCAT44(DAT_8c0bbf18,DAT_8c0bbf14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar21 - dVar21,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bbf14,fVar18);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bbf18,DAT_8c0bbf14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar21,0) / (float)((ulonglong)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar18,SUB84(dVar20,0));
  }
  else {
    fVar18 = SUB84(dVar21 / dVar21,0);
    dVar20 = dVar20 * (dVar21 / dVar21);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(_DAT_8c0bbf1c,fVar18);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bbf20,_DAT_8c0bbf1c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)((ulonglong)dVar20 >> 0x20) + (float)((ulonglong)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44(fVar18,SUB84(dVar20,0));
    iVar28 = (int)fVar18;
  }
  else {
    dVar20 = dVar20 + dVar21;
    iVar28 = (int)dVar20;
  }
  uVar8 = SUB84(dVar20,0);
  *(int *)((int)aiStack_1b8 + DAT_8c0bbf0c) = iVar28;
  iStack_150 = iVar26;
  iStack_154 = iVar27;
  iVar28 = iVar26 * 0x10000 + DAT_8c0bbf20;
  iVar10 = *(int *)((int)aiStack_1b8 + DAT_8c0bbf0c);
  pdVar14 = DAT_8c0bbf10;
  for (iVar26 = 0; iVar26 < 4; iVar26 = iVar26 + 1) {
    iStack_158 = iVar26;
    pdVar14 = (double *)(iVar26 * 4);
    *(int *)(DAT_8c0bc010 + (int)pdVar14) = iVar28 + iVar27 * 0x100 + iVar10;
  }
  uVar9 = (uint)*(byte *)((int)aiStack_1b8 + DAT_8c0bc018);
  if (*DAT_8c0bc014 == uVar9) {
    uVar12 = (*(code *)PTR_rand_8c0bc01c)(pdVar14,uVar9,uVar15,fVar19);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc020) = uVar12;
    uVar12 = 0x3c;
    uStack_15c = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc024)
                           (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc020),0x3c,uVar15,fVar19);
    a4 = DAT_8c0bc014;
    *DAT_8c0bc014 = uStack_15c;
    uVar12 = (*(code *)PTR_rand_8c0bc01c)(a4,uVar12,uVar15,fVar19);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc028) = uVar12;
    uVar9 = 0xb;
    uVar15 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc024)
                       (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc028),0xb,uVar15,fVar19);
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bc030,(float)(int)uVar15);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bc034,DAT_8c0bc030);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 * dVar20,0);
    }
    uStack_160 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)DAT_8c0bc02c + 4) = fVar18;
    }
    else {
      *(double *)((int)DAT_8c0bc02c + 4) = in_xd0;
    }
  }
  pdVar14 = (double *)((int)DAT_8c0bc02c + 4);
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(*(float *)DAT_8c0bc02c,*(float *)pdVar14);
  }
  else {
    in_xd0 = *pdVar14;
    dVar20 = *DAT_8c0bc02c;
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar20 - dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(DAT_8c0bc034,fVar18);
  }
  else {
    dVar20 = (double)CONCAT44(DAT_8c0bc038,DAT_8c0bc034);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar20 * dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(*(float *)DAT_8c0bc02c,fVar18);
  }
  else {
    dVar20 = *DAT_8c0bc02c;
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar20 + dVar20,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)DAT_8c0bc02c = fVar18;
    fVar18 = *(float *)DAT_8c0bc02c;
    fVar23 = DAT_8c0bc038;
  }
  else {
    *DAT_8c0bc02c = in_xd0;
    fVar18 = DAT_8c0bc038;
    fVar23 = DAT_8c0bc03c;
  }
  if (in_FPSCR_PR != '\0' || fVar18 <= fVar23) {
    uVar12 = (*(code *)PTR_rand_8c0bc248)(pdVar14,uVar9,uVar15,fVar19);
    *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc24c) = uVar12;
    iVar27 = 0x1e;
    iVar26 = *(int *)((int)aiStack_1b8 + DAT_8c0bc24c);
    fVar19 = (float)(*(code *)PTR_libgcc_divide_helper_01031c_8c0bc250)(iVar26,0x1e,uVar15,fVar19);
    *DAT_8c0bc254 = fVar19;
    fStack_174 = fVar19;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bc038,*(float *)DAT_8c0bc02c);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bc03c,DAT_8c0bc038);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 - dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bc03c,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bc040,DAT_8c0bc03c);
    }
    if (in_FPSCR_PR == '\0') {
      iStack_164 = (int)(SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20));
    }
    else {
      iStack_164 = (int)(dVar20 * dVar20);
    }
    iVar27 = iStack_164 * 0x1000000 + DAT_8c0bc040;
    iVar26 = 0;
    while (iVar28 = iVar26, iVar26 = DAT_8c0bc0a0, iVar28 < 4) {
      *(int *)(DAT_8c0bc090 + iVar28 * 4) = iVar27;
      iStack_168 = iVar28;
      iVar26 = iVar28 + 1;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bc098,*DAT_8c0bc094);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bc09c,DAT_8c0bc098);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 - dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bc09c,fVar18);
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c0bc0a0,DAT_8c0bc09c);
    }
    if (in_FPSCR_PR == '\0') {
      iStack_16c = (int)(SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20));
    }
    else {
      iStack_16c = (int)(dVar20 * dVar20);
    }
    iVar10 = iStack_16c * 0x1000000 + DAT_8c0bc0a0;
    iVar27 = 0;
    iVar28 = 0;
    while (iVar17 = iVar28, iVar17 < 4) {
      iVar27 = iVar17 * 4;
      *(int *)(DAT_8c0bc0c8 + iVar27) = iVar10;
      iStack_170 = iVar17;
      iVar28 = iVar17 + 1;
    }
  }
  uVar12 = (*(code *)PTR_rand_8c0bc248)(iVar26,iVar27,uVar15,fVar19);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc258) = uVar12;
  iStack_178 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc250)
                         (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc258),100,uVar15,uVar12);
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)(iStack_178 + 0x69),uVar8);
  }
  else {
    dVar20 = (double)(iStack_178 + 0x69);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bc260,*DAT_8c0bc25c);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bc264,DAT_8c0bc260);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar21,0) / (float)((ulonglong)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + fVar19,SUB84(dVar20,0));
  }
  else {
    fVar19 = SUB84(dVar21 / dVar21,0);
    dVar20 = dVar20 + dVar21 / dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bc264,fVar19);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bc268,DAT_8c0bc264);
  }
  fVar19 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar25 = (float)((ulonglong)dVar21 >> 0x20) < fVar19;
  }
  else {
    bVar25 = dVar21 < dVar20;
  }
  if (bVar25) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(DAT_8c0bc268,SUB84(dVar21,0));
    }
    else {
      dVar21 = (double)CONCAT44(DAT_8c0bc26c,DAT_8c0bc268);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(fVar19 + (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar20,0));
    }
    else {
      dVar20 = dVar20 + dVar21;
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar26 = (int)(float)((ulonglong)dVar20 >> 0x20);
  }
  else {
    iVar26 = (int)dVar20;
  }
  sVar1 = (short)iStack_178;
  *DAT_8c0bc26c = sVar1 + SUB42(*DAT_8c0bc254,0);
  sVar5 = (short)iVar26;
  DAT_8c0bc26c[1] = sVar5;
  DAT_8c0bc26c[2] = sVar1;
  DAT_8c0bc26c[3] = sVar1;
  iVar26 = iVar26 - (int)*DAT_8c0bc254;
  DAT_8c0bc26c[4] = (short)iVar26;
  a6_00 = DAT_8c0bc26c;
  DAT_8c0bc26c[5] = sVar1;
  a5 = DAT_8c0bc26c;
  DAT_8c0bc26c[6] = sVar5;
  a4_00 = DAT_8c0bc26c;
  DAT_8c0bc26c[7] = sVar5;
  uVar8 = (*(code *)PTR_rand_8c0bc248)(a4_00,a5,a6_00,iVar26);
  uVar12 = SUB84(dVar20,0);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc270) = uVar8;
  iStack_17c = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc250)
                         (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc270),0x32,a6_00,iVar26);
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)(iStack_17c + DAT_8c0bc274),uVar12);
  }
  else {
    dVar20 = (double)(iStack_17c + DAT_8c0bc274);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bc260,*DAT_8c0bc25c);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bc264,DAT_8c0bc260);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar21,0) / (float)((ulonglong)dVar21 >> 0x20);
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + fVar19,SUB84(dVar20,0));
  }
  else {
    fVar19 = SUB84(dVar21 / dVar21,0);
    dVar20 = dVar20 + dVar21 / dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bc264,fVar19);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c0bc268,DAT_8c0bc264);
  }
  fVar19 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar25 = (float)((ulonglong)dVar21 >> 0x20) < fVar19;
  }
  else {
    bVar25 = dVar21 < dVar20;
  }
  if (bVar25) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(DAT_8c0bc268,SUB84(dVar21,0));
    }
    else {
      dVar21 = (double)CONCAT44(DAT_8c0bc26c,DAT_8c0bc268);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(fVar19 + (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar20,0));
    }
    else {
      dVar20 = dVar20 + dVar21;
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar26 = (int)(float)((ulonglong)dVar20 >> 0x20);
    dVar20 = (double)CONCAT44((float)iStack_17c,SUB84(dVar20,0));
  }
  else {
    iVar26 = (int)dVar20;
    dVar20 = (double)iStack_17c;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bc27c,(float)(int)*DAT_8c0bc254);
  }
  else {
    dVar21 = (double)CONCAT44(_DAT_8c0bc280,DAT_8c0bc27c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)((ulonglong)dVar21 >> 0x20);
    fVar19 = SUB84(dVar21,0) * fVar18;
    dVar21 = (double)CONCAT44(fVar18,fVar19);
    fVar18 = (float)((ulonglong)dVar20 >> 0x20) + fVar19;
    dVar20 = (double)CONCAT44(fVar18,SUB84(dVar20,0));
    puVar29 = (undefined *)(int)fVar18;
  }
  else {
    dVar21 = dVar21 * dVar21;
    fVar19 = SUB84(dVar21,0);
    dVar20 = dVar20 + dVar21;
    puVar29 = (undefined *)(int)dVar20;
  }
  *DAT_8c0bc278 = (short)puVar29;
  uVar6 = (undefined2)iVar26;
  DAT_8c0bc278[1] = uVar6;
  uVar7 = (undefined2)iStack_17c;
  DAT_8c0bc278[2] = uVar7;
  DAT_8c0bc278[3] = uVar7;
  a6 = DAT_8c0bc254;
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)iVar26,SUB84(dVar20,0));
  }
  else {
    dVar20 = (double)iVar26;
  }
  fVar18 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar25 = fVar18 < 0.0;
  }
  else {
    bVar25 = dVar20 < (double)((ulonglong)dVar21 & 0xffffffff);
  }
  if (bVar25) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(_DAT_8c0bc280,fVar19);
    }
    else {
      dVar21 = (double)CONCAT44(_DAT_8c0bc284,_DAT_8c0bc280);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(fVar18 + (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar20,0));
    }
    else {
      dVar20 = dVar20 + dVar21;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(DAT_8c0bc27c,(float)(int)*DAT_8c0bc254);
  }
  else {
    dVar21 = (double)CONCAT44(_DAT_8c0bc280,DAT_8c0bc27c);
  }
  if (in_FPSCR_PR == '\0') {
    iVar26 = (int)((float)((ulonglong)dVar20 >> 0x20) -
                  SUB84(dVar21,0) * (float)((ulonglong)dVar21 >> 0x20));
  }
  else {
    iVar26 = (int)(dVar20 - dVar21 * dVar21);
  }
  DAT_8c0bc278[4] = (short)iVar26;
  DAT_8c0bc278[5] = uVar7;
  DAT_8c0bc278[6] = uVar6;
  DAT_8c0bc278[7] = uVar6;
  fVar19 = *_DAT_8c0bc284;
  if (fVar19 != DAT_8c0bc288) {
    iVar27 = 0;
    while (iVar28 = iVar27, puVar4 = DAT_8c0bc2ec, iVar28 < 4) {
      a6 = (float *)(DAT_8c0bc2ec + iVar28 * 4);
      fVar19 = (float)((int)*a6 - DAT_8c0bc2f0);
      *a6 = fVar19;
      puVar29 = puVar4;
      iStack_184 = iVar28;
      pfStack_180 = a6;
      iVar27 = iVar28 + 1;
    }
  }
  uVar8 = (*(code *)PTR_rand_8c0bc2f4)(fVar19,iVar26,a6,puVar29);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc2f8) = uVar8;
  piVar16 = DAT_8c0bc2fc;
  iStack_188 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc300)
                         (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc2f8),DAT_8c0bc2fc,a6,puVar29);
  iVar26 = iStack_188;
  if (iStack_188 == 0) {
    fVar19 = DAT_8c0bc308;
    fVar18 = fRam8c0bc30c;
    if (in_FPSCR_SZ == '\0') {
      fVar19 = *DAT_8c0bc304;
      fVar18 = DAT_8c0bc308;
    }
    if (in_FPSCR_PR == '\0' && fVar18 < fVar19) {
      iVar26 = 0;
      while (iVar27 = iVar26, iVar27 < 4) {
        *(undefined4 *)(DAT_8c0bc55c + iVar27 * 4) = 0xffffffff;
        iStack_18c = iVar27;
        iVar26 = iVar27 + 1;
      }
      iVar26 = DAT_8c0bc564;
      puVar29 = PTR_FUN_8c0bc568;
      uVar8 = (*(code *)PTR_FUN_8c0bc568)
                        (DAT_8c0bc564,*(undefined4 *)(DAT_8c0bc560 + ar4),a6,PTR_FUN_8c0bc568);
      *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc56c) = uVar8;
      piVar16 = *(int **)((int)aiStack_1b8 + DAT_8c0bc56c);
      if (piVar16 == (int *)0x2) {
        uVar8 = (*(code *)PTR_rand_8c0bc570)(iVar26,2,a6,puVar29);
        *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc574) = uVar8;
        aiStack_1a8[6] =
             (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc578)
                       (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc574),2,a6,puVar29);
        iStack_1bc = aiStack_1a8[6] + 1;
        puStack_1c0 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bc57c + DAT_8c0bc580;
        puVar29 = (undefined *)((int)&puStack_1c0 + DAT_8c0bc584);
        (*(code *)PTR_FUN_8c0bc588)(puVar29,aiStack_1a8[6],a6,puVar29);
        iVar27 = DAT_8c0bc564;
        uVar8 = (*(code *)PTR_pack_acquire_entry_handle_8c0bc590)
                          (DAT_8c0bc564,(int)aiStack_1b8 + DAT_8c0bc58c,a6,puVar29);
        iVar26 = DAT_8c0bc560;
        *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc594) = uVar8;
        *(undefined4 *)(DAT_8c0bc560 + ar4) = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc594);
        uVar8 = (*(code *)PTR_rand_8c0bc570)(iVar27,iVar26,a6,puVar29);
        *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc598) = uVar8;
        iVar26 = *(int *)((int)aiStack_1b8 + DAT_8c0bc598);
        aiStack_1a8[5] =
             (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc578)(iVar26,DAT_8c0bc59c,a6,puVar29);
        piVar16 = DAT_8c0bc5a0;
        *DAT_8c0bc5a0 = aiStack_1a8[5] + DAT_8c0bc5a4;
      }
    }
  }
  uVar8 = (*(code *)PTR_rand_8c0bc570)(iVar26,piVar16,a6,puVar29);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5a8) = uVar8;
  aiStack_1a8[4] =
       (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc578)
                 (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5a8),DAT_8c0bc5ac,a6,puVar29);
  if (aiStack_1a8[4] == 0) {
    fVar19 = DAT_8c0bc5b4;
    fVar18 = _DAT_8c0bc5b8;
    if (in_FPSCR_SZ == '\0') {
      fVar19 = *DAT_8c0bc5b0;
      fVar18 = DAT_8c0bc5b4;
    }
    if (in_FPSCR_PR == '\0' && fVar18 < fVar19) {
      uVar12 = *(undefined4 *)(DAT_8c0bc560 + ar4);
      iVar26 = DAT_8c0bc564;
      uVar8 = (*(code *)PTR_FUN_8c0bc568)(DAT_8c0bc564,uVar12,a6,puVar29);
      *(undefined4 *)((int)aiStack_1b8 + (int)_DAT_8c0bc5b8) = uVar8;
      if (*(int *)((int)aiStack_1b8 + (int)_DAT_8c0bc5b8) == 2) {
        uVar8 = (*(code *)PTR_rand_8c0bc570)(iVar26,uVar12,a6,puVar29);
        *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5bc) = uVar8;
        uVar8 = 2;
        a6 = (float *)PTR_libgcc_divide_helper_01031c_8c0bc578;
        aiStack_1a8[3] =
             (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc578)
                       (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5bc),2,
                        PTR_libgcc_divide_helper_01031c_8c0bc578,puVar29);
        iStack_1bc = aiStack_1a8[3] + 3;
        puStack_1c0 = PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bc57c + DAT_8c0bc580;
        (*(code *)PTR_FUN_8c0bc588)((int)&puStack_1c0 + DAT_8c0bc584,uVar8,a6,puVar29);
        iVar26 = (int)aiStack_1b8 + DAT_8c0bc58c;
        uVar8 = (*(code *)PTR_pack_acquire_entry_handle_8c0bc590)(DAT_8c0bc564,iVar26,a6,puVar29);
        *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5c0) = uVar8;
        *(undefined4 *)(DAT_8c0bc560 + ar4) = *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5c0);
        uVar8 = (*(code *)PTR_rand_8c0bc570)(PTR_rand_8c0bc570,iVar26,a6,puVar29);
        *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5c4) = uVar8;
        aiStack_1a8[2] =
             (*(code *)PTR_libgcc_divide_helper_01031c_8c0bc578)
                       (*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5c4),DAT_8c0bc5c8,a6,puVar29);
        *DAT_8c0bc5a0 = aiStack_1a8[2] + DAT_8c0bc5cc;
      }
    }
  }
  uVar8 = (*(code *)PTR_FUN_8c0bc568)(DAT_8c0bc564,*(undefined4 *)(DAT_8c0bc560 + ar4),a6,puVar29);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5d0) = uVar8;
  if (*(int *)((int)aiStack_1b8 + DAT_8c0bc5d0) != 2) {
    fVar19 = DAT_8c0bc5b4;
    fVar18 = _DAT_8c0bc5b8;
    if (in_FPSCR_SZ == '\0') {
      fVar19 = *DAT_8c0bc5b0;
      fVar18 = DAT_8c0bc5b4;
    }
    if (in_FPSCR_PR == '\0' && fVar18 < fVar19) {
      a6 = (float *)*DAT_8c0bc5a0;
      puVar29 = DAT_8c0bc5d4;
      (*(code *)PTR_FUN_8c0bc5d8)(DAT_8c0bc564,*(undefined4 *)(DAT_8c0bc560 + ar4),a6,DAT_8c0bc5d4);
    }
  }
  uVar8 = (*(code *)PTR_FUN_8c0bc568)(DAT_8c0bc564,*(undefined4 *)(DAT_8c0bc560 + ar4),a6,puVar29);
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc5dc) = uVar8;
  if (*(int *)((int)aiStack_1b8 + DAT_8c0bc5dc) == 2) {
    (*(code *)PTR_pack_release_entry_handle_8c0bc5e0)
              (DAT_8c0bc564,*(undefined4 *)(DAT_8c0bc560 + ar4),a6,puVar29);
  }
  uVar15 = DAT_8c0bc5e8;
  if (((*DAT_8c0bc5e4 == 0) || (uVar9 = *DAT_8c0bc5e4, *DAT_8c0bc5e4 == 1)) &&
     (uVar9 = uVar15, *(int *)(DAT_8c0bc5e8 + ar4) == 2)) {
    *DAT_8c0bc5ec = 1;
  }
  if (*(int *)(DAT_8c0bc5e8 + ar4) == 3) {
    iVar26 = 0;
    while (iVar27 = iVar26, a6 = (float *)0x4, iVar27 < 4) {
      DAT_8c0bc644[iVar27] = DAT_8c0bc648;
      DAT_8c0bc644[iVar27 + 4] = 0xffffffff;
      aiStack_1a8[0] = iVar27;
      aiStack_1a8[1] = iVar27;
      iVar26 = iVar27 + 1;
    }
    *DAT_8c0bc64c = 2;
    *(undefined4 *)(DAT_8c0bc650 + ar4) = 2;
  }
  if (*DAT_8c0bc64c == 1) {
    uVar9 = *DAT_8c0bc644;
    if (DAT_8c0bc648 < uVar9) {
      iVar26 = 0;
      while (iVar27 = iVar26, iVar27 < 4) {
        piStack_1ac = (int *)(iVar27 * 4 + DAT_8c0bc698);
        *piStack_1ac = *piStack_1ac - DAT_8c0bc69c;
        uVar9 = DAT_8c0bc69c;
        aiStack_1b8[1] = iVar27 * 4 + DAT_8c0bc698;
        *(uint *)(aiStack_1b8[1] + 0x10) = *(int *)(aiStack_1b8[1] + 0x10) + DAT_8c0bc69c;
        aiStack_1b8[0] = iVar27;
        aiStack_1b8[2] = iVar27;
        iVar26 = iVar27 + 1;
      }
    }
    else {
      *DAT_8c0bc860 = 2;
    }
  }
  (*(code *)PTR_FUN_8c0bc864)(ar4 + 0x48,uVar9,a6,puVar29);
  (*(code *)PTR_FUN_8c0bc868)(ar4 + 0x48,0,a6,puVar29);
  (*(code *)PTR_FUN_8c0bc870)(ar4 + 0x50,DAT_8c0bc86c,a6,PTR_FUN_8c0bc870);
  uVar8 = 4;
  puVar29 = PTR_DAT_8c0bc878;
  fVar19 = DAT_8c0bc874;
  (*(code *)PTR_FUN_8c0bc87c)(ar4 + 0x50,PTR_DAT_8c0bc878,DAT_8c0bc874,4);
  (*(code *)PTR_FUN_8c0bc884)(ar4 + 0x50,puVar29,fVar19,uVar8);
  if (in_FPSCR_SZ == '\0') {
    uVar22 = CONCAT44(DAT_8c0bc88c,*DAT_8c0bc888);
  }
  else {
    uVar22 = CONCAT44(_DAT_8c0bc890,DAT_8c0bc88c);
  }
  if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar22 >> 0x20) < (float)uVar22) {
    (*(code *)PTR_FUN_8c0bc864)(ar4 + 0x48,puVar29,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bc868)(ar4 + 0x48,*_DAT_8c0bc890 + 10,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bc870)(ar4 + 0x50,DAT_8c0bc894,fVar19,uVar8);
    uVar8 = 4;
    fVar19 = DAT_8c0bc898;
    (*(code *)PTR_FUN_8c0bc87c)(ar4 + 0x50,PTR_DAT_8c0bc878,DAT_8c0bc898,4);
    puVar29 = PTR_FUN_8c0bc884;
    (*(code *)PTR_FUN_8c0bc884)(ar4 + 0x50,PTR_FUN_8c0bc884,fVar19,uVar8);
  }
  if (*DAT_8c0bc89c._4_4_ < 2) {
    (*(code *)PTR_FUN_8c0bc864)(ar4 + 0x48,puVar29,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bc868)(ar4 + 0x48,1,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bc870)(ar4 + 0x50,DAT_8c0bc86c,fVar19,uVar8);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bc878;
    (*(code *)PTR_FUN_8c0bc87c)(ar4 + 0x50,PTR_DAT_8c0bc878,DAT_8c0bc874,4);
    iVar28 = ar4 + 0x50;
    (*(code *)PTR_FUN_8c0bc884)(iVar28,puVar29,iVar28,uVar8);
    iVar27 = ar4 + 0x48;
    iVar26 = iVar27;
    (*(code *)PTR_FUN_8c0bc864)(iVar27,iVar27,iVar28,uVar8);
    (*(code *)PTR_FUN_8c0bc8ac)(iVar27,iVar26,iVar28,uVar8);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)aiStack_1b8 + DAT_8c0bc8b0) = (int)((ulonglong)uVar22 >> 0x20);
      dVar20 = (double)CONCAT44(DAT_8c0bc8b4,*(undefined4 *)((int)aiStack_1b8 + DAT_8c0bc8b0));
    }
    else {
      *(undefined8 *)((int)aiStack_1b8 + DAT_8c0bc8b0) = uVar22;
      dVar20 = (double)CONCAT44(DAT_8c0bc8b8,DAT_8c0bc8b4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar19 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar19 = SUB84(dVar20 * dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c0bc8b8,fVar19);
    }
    else {
      dVar20 = (double)CONCAT44(_DAT_8c0bc8bc,DAT_8c0bc8b8);
    }
    if (in_FPSCR_PR == '\0') {
      iVar26 = (int)(SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20));
    }
    else {
      iVar26 = (int)(dVar20 + dVar20);
    }
    (*(code *)PTR_FUN_8c0bc868)(ar4 + 0x48,iVar26,iVar28,uVar8);
    (*(code *)PTR_FUN_8c0bc870)(ar4 + 0x50,DAT_8c0bc86c,PTR_FUN_8c0bc870,uVar8);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bc878 + 0x20;
    fVar19 = DAT_8c0bc874;
    (*(code *)PTR_FUN_8c0bc87c)(ar4 + 0x50,puVar29,DAT_8c0bc874,4);
    (*(code *)PTR_FUN_8c0bc884)(ar4 + 0x50,puVar29,fVar19,uVar8);
    *(undefined2 *)((int)aiStack_1b8 + _DAT_8c0bc8c0) = 0;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc8c4) = 0x7f;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc8c8) = 0;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc8cc) = 0;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc8d0) = 0x7f;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc8d4) = 0;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc8d8) = 0x7f;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc8dc) = 0x7f;
  }
  else if (*DAT_8c0bc988 < 4) {
    (*(code *)PTR_FUN_8c0bc98c)(ar4 + 0x48,puVar29,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bc990)(ar4 + 0x48,2,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bc998)(ar4 + 0x50,DAT_8c0bc994,fVar19,uVar8);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bc9a0;
    fVar19 = DAT_8c0bc99c;
    (*(code *)PTR_FUN_8c0bc9a4)(ar4 + 0x50,PTR_DAT_8c0bc9a0,DAT_8c0bc99c,4);
    (*(code *)PTR_FUN_8c0bc9ac)(ar4 + 0x50,puVar29,fVar19,uVar8);
    *(short *)((int)aiStack_1b8 + DAT_8c0bc9b4) = (short)DAT_8c0bc9b0;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc9b8) = 0x7f;
    *(short *)((int)aiStack_1b8 + DAT_8c0bc9bc) = (short)DAT_8c0bc9b0;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc9c0) = 0;
    *(short *)((int)aiStack_1b8 + DAT_8c0bc9c8) = (short)DAT_8c0bc9c4;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc9cc) = 0;
    *(short *)((int)aiStack_1b8 + DAT_8c0bc9d0) = (short)DAT_8c0bc9c4;
    uVar8 = 0x7f;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bc9d4) = 0x7f;
    puVar29 = DAT_8c0bc9b0;
  }
  else if (*DAT_8c0bca80 < 7) {
    (*(code *)PTR_FUN_8c0bca84)(ar4 + 0x48,puVar29,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bca88)(ar4 + 0x48,3,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bca90)(ar4 + 0x50,DAT_8c0bca8c,fVar19,uVar8);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bca98;
    fVar19 = DAT_8c0bca94;
    (*(code *)PTR_FUN_8c0bca9c)(ar4 + 0x50,PTR_DAT_8c0bca98,DAT_8c0bca94,4);
    (*(code *)PTR_FUN_8c0bcaa4)(ar4 + 0x50,puVar29,fVar19,uVar8);
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcaa8) = 0;
    *(short *)((int)aiStack_1b8 + DAT_8c0bcab0) = (short)DAT_8c0bcaac;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcab4) = 0;
    *(short *)((int)aiStack_1b8 + DAT_8c0bcabc) = (short)DAT_8c0bcab8;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcac0) = 0x7f;
    *(short *)((int)aiStack_1b8 + DAT_8c0bcac4) = (short)DAT_8c0bcab8;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcac8) = 0x7f;
    *(short *)((int)aiStack_1b8 + DAT_8c0bcacc) = (short)DAT_8c0bcaac;
  }
  else {
    (*(code *)PTR_FUN_8c0bccd8)(ar4 + 0x48,puVar29,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bccdc)(ar4 + 0x48,4,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bcce4)(ar4 + 0x50,DAT_8c0bcce0,fVar19,uVar8);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bccec;
    fVar19 = DAT_8c0bcce8;
    (*(code *)PTR_FUN_8c0bccf0)(ar4 + 0x50,PTR_DAT_8c0bccec,DAT_8c0bcce8,4);
    (*(code *)PTR_FUN_8c0bccf8)(ar4 + 0x50,puVar29,fVar19,uVar8);
    uVar6 = (undefined2)DAT_8c0bccfc;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd00) = uVar6;
    uVar7 = (undefined2)DAT_8c0bcd04;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd08) = uVar7;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd0c) = uVar6;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd10) = uVar6;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd14) = uVar7;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd18) = uVar6;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd1c) = uVar7;
    *(undefined2 *)((int)aiStack_1b8 + DAT_8c0bcd20) = uVar7;
  }
  piVar16 = DAT_8c0bcd28;
  piVar24 = _DAT_8c0bcd2c;
  if (in_FPSCR_SZ == '\0') {
    piVar16 = (int *)*DAT_8c0bcd24;
    piVar24 = DAT_8c0bcd28;
  }
  if (in_FPSCR_PR == '\0' && (float)piVar24 < (float)piVar16) {
    (*(code *)PTR_FUN_8c0bccd8)(ar4 + 0x48,puVar29,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bccdc)(ar4 + 0x48,*_DAT_8c0bcd2c + 10,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bcce4)(ar4 + 0x50,DAT_8c0bcd30,fVar19,uVar8);
    uVar12 = 4;
    puVar29 = PTR_DAT_8c0bccec;
    uVar8 = DAT_8c0bcd34;
    (*(code *)PTR_FUN_8c0bccf0)(ar4 + 0x50,PTR_DAT_8c0bccec,DAT_8c0bcd34,4);
    (*(code *)PTR_FUN_8c0bccf8)(ar4 + 0x50,puVar29,uVar8,uVar12);
    (*(code *)PTR_FUN_8c0bccd8)(ar4 + 0x48,PTR_FUN_8c0bccd8,uVar8,uVar12);
    (*(code *)PTR_FUN_8c0bccdc)(ar4 + 0x48,0xd,uVar8,uVar12);
    (*(code *)PTR_FUN_8c0bcce4)(ar4 + 0x50,DAT_8c0bcce0,uVar8,uVar12);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bccec;
    fVar19 = DAT_8c0bcd38._4_4_;
    (*(code *)PTR_FUN_8c0bccf0)(ar4 + 0x50,PTR_DAT_8c0bccec,DAT_8c0bcd38._4_4_,4);
    (*(code *)PTR_FUN_8c0bccf8)(ar4 + 0x50,puVar29,fVar19,uVar8);
  }
  fVar18 = DAT_8c0bcd40._4_4_;
  fVar23 = _DAT_8c0bcd48;
  if (in_FPSCR_SZ == '\0') {
    fVar18 = *DAT_8c0bcd24;
    fVar23 = DAT_8c0bcd40._4_4_;
  }
  if (in_FPSCR_PR == '\0' && fVar23 < fVar18) {
    (*(code *)PTR_FUN_8c0bccd8)(ar4 + 0x48,puVar29,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bccdc)(ar4 + 0x48,9,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bcce4)(ar4 + 0x50,DAT_8c0bcce0,fVar19,uVar8);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bccec;
    fVar19 = _DAT_8c0bcd48;
    (*(code *)PTR_FUN_8c0bccf0)(ar4 + 0x50,PTR_DAT_8c0bccec,_DAT_8c0bcd48,4);
    (*(code *)PTR_FUN_8c0bccf8)(ar4 + 0x50,puVar29,fVar19,uVar8);
  }
  (*(code *)PTR_FUN_8c0bccd8)(ar4 + 0x48,puVar29,fVar19,uVar8);
  uVar12 = 0x11;
  (*(code *)PTR_FUN_8c0bccdc)(ar4 + 0x48,0x11,fVar19,uVar8);
  (*(code *)PTR_FUN_8c0bccf8)((int)aiStack_1b8 + DAT_8c0bcd54,uVar12,fVar19,uVar8);
  if (*(int *)(ar4 + 0x30) == 1) {
    fVar19 = 0.0;
    (*(code *)PTR_FUN_8c0bcd5c)(DAT_8c0bcd58,*(undefined4 *)(DAT_8c0bcd00 + ar4),0,uVar8);
  }
  switch(*(undefined4 *)(DAT_8c0bcd60 + ar4)) {
  case 0:
  case 1:
    (*(code *)PTR_FUN_8c0bcd90)(ar4 + DAT_8c0bcd8c,ar4 + 0x48,fVar19,uVar8);
    break;
  case 2:
  case 3:
    (*(code *)PTR_FUN_8c0bcdec)(ar4 + 0x48,4,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bcdf0)(ar4 + 0x48,0xe,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bcdf8)(ar4 + 0x50,DAT_8c0bcdf4,fVar19,uVar8);
    uVar8 = 4;
    fVar19 = (float)(DAT_8c0bcdfc + 0x10);
    puVar29 = PTR_DAT_8c0bce00 + 0x40;
    (*(code *)PTR_FUN_8c0bce04)(ar4 + 0x50,puVar29,fVar19,4);
    (*(code *)PTR_FUN_8c0bce0c)(ar4 + 0x50,puVar29,fVar19,uVar8);
    break;
  case 4:
    (*(code *)PTR_FUN_8c0bcea0)(ar4 + 0x48,4,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bcea4)(ar4 + 0x48,0x10,fVar19,uVar8);
    (*(code *)PTR_FUN_8c0bceac)(ar4 + 0x50,DAT_8c0bcea8,fVar19,ar4 + 0x50);
    uVar8 = 4;
    puVar29 = PTR_DAT_8c0bceb4 + 0x40;
    fVar19 = DAT_8c0bceb0;
    (*(code *)PTR_FUN_8c0bceb8)(ar4 + 0x50,puVar29,DAT_8c0bceb0,4);
    (*(code *)PTR_FUN_8c0bcec0)(ar4 + 0x50,puVar29,fVar19,uVar8);
  }
  *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bcec4) = 1;
  (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0bcecc)
            ((int)aiStack_1b8 + DAT_8c0bcec8,0xffffffff,fVar19,uVar8);
  return *(undefined4 *)((int)aiStack_1b8 + DAT_8c0bcec4);
}



/* get_field_c8_0bced0 @ 8c0bced0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c8_0bced0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0bced8 + ar4);
}



/* FUN_8c0bcedc @ 8c0bcedc callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c0bcf0c */
/* WARNING: Switch with 1 destination removed at 0x8c0bcf32 */
/* WARNING: Switch with 1 destination removed at 0x8c0bcf58 */
/* WARNING: Switch with 1 destination removed at 0x8c0bcf66 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bcedc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar3 = auStack_c;
  }
  else {
    puVar3 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar3 + -4) = unaff_r14;
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar3 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar3 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar3 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar3 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar3 + -0x20) = in_PR;
  if (*(int *)(ar4 + 0x44) != 0x12) {
    uVar1 = (*(code *)PTR_FUN_8c0bcf40)(DAT_8c0bcf3c,ar5,ar6,ar7);
    *(undefined4 *)(puVar3 + DAT_8c0bcf44 + -0x1d0) = uVar1;
    if (((*(int *)(puVar3 + DAT_8c0bcf44 + -0x1d0) != 1) &&
        (iVar2 = *(int *)(ar4 + 0x44), iVar2 < 0x15)) && (-1 < iVar2)) {
                    /* WARNING: Could not recover jumptable at 0x8c0bcf7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&PTR_LAB_8c0bcf80)[iVar2])();
      return uVar1;
    }
  }
  return 1;
}



/* FUN_8c0bf064 @ 8c0bf064 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0bf064(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  
  if (*(int *)(DAT_8c0bf09c + ar4) == 0) {
    puVar1 = &DAT_8c0bf0a0;
  }
  else {
    (*(code *)PTR_FUN_8c0bf0a8)(ar4 + DAT_8c0bf0a0._4_4_,ar5,ar6,ar7);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



/* FUN_8c0bf0ac @ 8c0bf0ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0bf0b8;
}



/* FUN_8c0bf0bc @ 8c0bf0bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0bf0e4)(ar4 + DAT_8c0bf0e0,ar5,ar6,ar7);
  return 4;
}



/* FUN_8c0bf0e8 @ 8c0bf0e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0bf0f0 @ 8c0bf0f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0bf118)(ar4 + DAT_8c0bf114,ar5,ar6,ar7);
  return 4;
}



/* FUN_8c0bf11c @ 8c0bf11c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf11c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* get_field_28_0bf124 @ 8c0bf124 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_28_0bf124(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x28);
}



/* FUN_8c0bf12c @ 8c0bf12c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf12c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_300_0bf154_8c0bf150)(ar4 + DAT_8c0bf14c,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_300_0bf154 @ 8c0bf154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_300_0bf154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0bf15c + ar4);
}



/* FUN_8c0bf160 @ 8c0bf160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf160(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + ar5 * 4 + 8);
}



/* FUN_8c0bf170 @ 8c0bf170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf170(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_8c0bf1b4 + 0x70) = 0;
  uVar1 = ar6;
  (*(code *)PTR_strcpy_8c0bf1b8)(DAT_8c0bf1b4 + 0x20,ar5,ar6,ar7);
  (*(code *)PTR_strcpy_8c0bf1b8)(DAT_8c0bf1b4 + 0x40,ar6,uVar1,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0bf1c0)(DAT_8c0bf1bc,6,DAT_8c0bf1b4,ar7);
  *DAT_8c0bf1c4 = uVar1;
  return uVar1;
}



/* FUN_8c0bf1c8 @ 8c0bf1c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0bf1c8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ar5 + 0x30;
  for (iVar3 = 4; -1 < iVar3; iVar3 = iVar3 + -1) {
    if ((0x29 < *(int *)(iVar3 * 4 + iVar2)) && (*(int *)(iVar3 * 4 + iVar2) < 0x30)) {
      *(undefined4 *)(iVar3 * 4 + iVar2) = 0;
    }
    pcVar1 = (char *)(*(int *)(iVar3 * 4 + iVar2) + ar5 + 0x44);
    in_r0 = *pcVar1 + 1;
    *pcVar1 = (char)in_r0;
  }
  return in_r0;
}



/* FUN_8c0bf22c @ 8c0bf22c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf22c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 uVar1;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    a4 = (int *)(*(code *)PTR_FUN_8c0bf2f0)(*(undefined4 *)(DAT_8c0bf2ec + ar5),iVar2,ar6,ar7);
    (**(code **)(DAT_8c0bf2f4 + *a4))(a4,0,ar6,ar7);
  }
  (*(code *)PTR_pack_release_entry_handle_8c0bf300)
            (DAT_8c0bf2fc,*(undefined4 *)(DAT_8c0bf2f8 + ar4),ar6,ar7);
  uVar1 = *(undefined4 *)(DAT_8c0bf304 + ar4);
  (*(code *)PTR_pack_release_entry_handle_8c0bf300)(DAT_8c0bf2fc,uVar1,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0bf30c)(DAT_8c0bf308,uVar1,ar6,ar7);
  if (iVar2 == 1) {
    (*(code *)PTR_FUN_8c0bf310)(DAT_8c0bf308,uVar1,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c0bf314 + ar4) = DAT_8c0bf318;
  a6 = 0;
  uVar1 = 0xffffffff;
  (*(code *)PTR_FUN_8c0bf320)(DAT_8c0bf31c,0xffffffff,0,ar7);
  (*(code *)PTR_s_Failed_s_015312_8c0bf324)(ar4 + 0x48,uVar1,a6,ar7);
  *(undefined4 *)(DAT_8c0bf328 + ar4) = 4;
  *(undefined4 *)(ar4 + 0x44) = 0x12;
  (*(code *)PTR_FUN_8c0bf330)(ar4 + DAT_8c0bf32c,uVar1,a6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(DAT_8c0bf334 + ar5) = 1;
  return 1;
}



/* FUN_8c0bf338 @ 8c0bf338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0bf338(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_8c0bf37c)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0bf380;
  ar4[2] = 0;
  puVar1 = PTR_DAT_8c0bf384;
  uVar2 = *(undefined4 *)(PTR_DAT_8c0bf384 + 4);
  ar4[3] = *(undefined4 *)PTR_DAT_8c0bf384;
  ar4[4] = uVar2;
  ar4[5] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0bf388;
  uVar2 = *(undefined4 *)(PTR_DAT_8c0bf388 + 4);
  ar4[6] = *(undefined4 *)PTR_DAT_8c0bf388;
  ar4[7] = uVar2;
  ar4[8] = *(undefined4 *)(puVar1 + 8);
  return ar4;
}



/* Class_12b334_m0_0bf38c @ 8c0bf38c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b334_m0_0bf38c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0bf3c8;
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_0ba8ac_8c0bf3cc)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0bf3d0)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12b334_m1_0bf3d4 @ 8c0bf3d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12b334_m1_0bf3d4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar5;
  (*(code *)PTR_pure_virtual_stub_8c0bf424)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0bf42c)(*(undefined4 *)(DAT_8c0bf428 + ar5),iVar1,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 8) = 0;
    iVar1 = DAT_8c0bf430;
    *(undefined4 *)(DAT_8c0bf430 + ar5) = 0;
  }
  return iVar1;
}



/* s_EPILOG_0bf440 @ 8c0bf440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_EPILOG_0bf440(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_noop_102824_8c0bf474)
            (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bf46c + DAT_8c0bf470,DAT_8c0bf468,DAT_8c0bf464,0xd)
  ;
  return 1;
}



/* FUN_8c0bf478 @ 8c0bf478 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0bf478(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0bf49c)(ar4 + 0x28,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0bf4a0)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0bf4a4 @ 8c0bf4a4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0bf4a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined *puVar2;
  float fVar3;
  undefined *puVar4;
  double dVar5;
  undefined *puVar6;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar2 = *(undefined **)(ar4 + 4);
  if (puVar2 == (undefined *)0x1) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0bf53c,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + 0x2c);
      dVar5 = (double)CONCAT44(_DAT_8c0bf540,DAT_8c0bf53c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    uStack_10 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = CONCAT44(ar4,fVar3);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(uStack_10._4_4_ + 0x2c) = (float)uStack_10;
      uVar1 = CONCAT44((float)uStack_10,fVar3);
    }
    else {
      *(ulonglong *)(uStack_10._4_4_ + 0x2c) = uStack_10;
      uVar1 = uStack_10;
    }
    fVar3 = (float)uVar1;
    puVar2 = (undefined *)0x8;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = (float)uStack_10;
    }
    if (in_FPSCR_PR != '\0' || fVar3 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar3;
      }
      puVar2 = (undefined *)0x0;
      *(undefined4 *)(ar4 + 4) = 0;
    }
  }
  else if (puVar2 == (undefined *)0x2) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0bf53c,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + 0x2c);
      dVar5 = (double)CONCAT44(_DAT_8c0bf540,DAT_8c0bf53c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 + dVar5,0);
    }
    uStack_18 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_18 = CONCAT44(ar4,fVar3);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(uStack_18._4_4_ + 0x2c) = (undefined4)uStack_18;
      uStack_18 = uStack_18 & 0xffffffff;
    }
    else {
      *(ulonglong *)(uStack_18._4_4_ + 0x2c) = uStack_18;
    }
    puVar2 = &DAT_8c0bf540;
    puVar4 = _DAT_8c0bf540;
    puVar6 = PTR_FUN_8c0bf544;
    if (in_FPSCR_SZ == '\0') {
      puVar4 = (undefined *)uStack_18;
      puVar6 = _DAT_8c0bf540;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar6 <= (float)puVar4) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(ar4 + 0x2c) = _DAT_8c0bf540;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c) = CONCAT44(PTR_FUN_8c0bf544,_DAT_8c0bf540);
      }
      *(undefined4 *)(ar4 + 4) = 0;
      puVar2 = (undefined *)(*(code *)PTR_FUN_8c0bf544)(ar4,ar5,ar6,ar7);
    }
  }
  return puVar2;
}



/* FUN_8c0bf548 @ 8c0bf548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf548(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}



/* FUN_8c0bf550 @ 8c0bf550 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf550(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    (*(code *)PTR_FUN_8c0bf580)(ar4,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0bf584)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0bf588 @ 8c0bf588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf588(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (*(int *)(ar4 + 4) == 0) {
    a5 = ar5;
    iVar1 = (*(code *)PTR_FUN_8c0bf60c)(ar5,ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x24) == 1)) {
      *(undefined4 *)(ar4 + 0x24) = 0;
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0bf610)(ar5,a5,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(ar4 + 0x24) == 0)) {
        *(undefined4 *)(ar4 + 0x24) = 1;
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0bf614)(ar5,a5,ar6,ar7);
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x24) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c0bf618 @ 8c0bf618 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf618(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf684)
                    (*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 1) ||
     (iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf684)
                        (*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c0bf688)(*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0bf68c)(*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0bf690 @ 8c0bf690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf690(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf6fc)
                    (*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 1) ||
     (iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf6fc)
                        (*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c0bf700)(*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0bf704)(*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0bf708 @ 8c0bf708 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf708(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf774)
                    (*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 1) ||
     (iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf774)
                        (*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c0bf778)(*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0bf77c)(*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0bf780 @ 8c0bf780 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf780(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0bf7a4)(*(undefined4 *)(DAT_8c0bf7a0 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0bf7a8 @ 8c0bf7a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf7a8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 2;
  ar4[3] = 1;
  ar4[9] = 0;
  if (in_FPSCR_SZ == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xb) = (ulonglong)in_fr1;
  }
  return 0;
}



/* FUN_8c0bf7c8 @ 8c0bf7c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf7c8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 1;
  return 1;
}



/* FUN_8c0bf7d0 @ 8c0bf7d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf7d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0bf800)(ar4 + 0x10,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0bf804 @ 8c0bf804 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf804(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [20];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_2c = *(undefined4 *)PTR_DAT_8c0bf9f8;
  uStack_28 = *(undefined4 *)(PTR_DAT_8c0bf9f8 + 4);
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0bf9f8 + 8);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0bf9f8 + 0xc);
  uStack_1c = *(undefined4 *)(PTR_DAT_8c0bf9f8 + 0x10);
  uStack_18 = *(undefined4 *)(PTR_DAT_8c0bf9f8 + 0x14);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0bf9f8 + 0x18);
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0bf9f8 + 0x1c);
  uStack_4c = *(undefined4 *)PTR_DAT_8c0bf9fc;
  uStack_48 = *(undefined4 *)(PTR_DAT_8c0bf9fc + 4);
  uStack_44 = *(undefined4 *)(PTR_DAT_8c0bf9fc + 8);
  uStack_40 = *(undefined4 *)(PTR_DAT_8c0bf9fc + 0xc);
  uStack_3c = *(undefined4 *)(PTR_DAT_8c0bf9fc + 0x10);
  uStack_38 = *(undefined4 *)(PTR_DAT_8c0bf9fc + 0x14);
  uStack_34 = *(undefined4 *)(PTR_DAT_8c0bf9fc + 0x18);
  uStack_30 = *(undefined4 *)(PTR_DAT_8c0bf9fc + 0x1c);
  (*(code *)PTR_FUN_8c0bfa00)(auStack_60,ar5,ar6,ar7);
  uVar4 = 4;
  uVar3 = DAT_8c0bfa04;
  (*(code *)PTR_FUN_8c0bfa08)(auStack_60,&uStack_2c,DAT_8c0bfa04,4);
  (*(code *)PTR_FUN_8c0bfa10)(auStack_60,DAT_8c0bfa0c,uVar3,uVar4);
  uVar2 = DAT_8c0bfa14;
  (*(code *)PTR_FUN_8c0bfa18)(auStack_60,DAT_8c0bfa14,uVar3,uVar4);
  (*(code *)PTR_FUN_8c0bfa2c)(DAT_8c0bfa28,uVar2,uVar3,uVar4);
  (*(code *)PTR_FUN_8c0bfa30)(ar5,uVar2,uVar3,uVar4);
  uVar2 = *(undefined4 *)(ar4 + 8);
  (*(code *)PTR_FUN_8c0bfa34)(ar5,uVar2,uVar3,uVar4);
  (*(code *)PTR_FUN_8c0bfa3c)(auStack_60,uVar2,uVar3,uVar4);
  uVar4 = 4;
  uVar2 = DAT_8c0bfa04;
  (*(code *)PTR_FUN_8c0bfa08)(auStack_60,&uStack_4c,DAT_8c0bfa04,4);
  uVar3 = 1;
  (*(code *)PTR_FUN_8c0bfa34)(ar5,1,uVar2,uVar4);
  (*(code *)PTR_FUN_8c0bfa3c)(auStack_60,uVar3,uVar2,uVar4);
  iVar1 = *(int *)(ar4 + 8);
  if (iVar1 == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0bfa40._4_4_ = (undefined4)DAT_8c0bfa48;
      dVar6 = (double)CONCAT44(DAT_8c0bfa50,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      *DAT_8c0bfa40._4_4_ = CONCAT44(DAT_8c0bfa48._4_4_,(undefined4)DAT_8c0bfa48);
      in_xd0 = *(undefined8 *)(ar4 + 0x2c);
      dVar6 = (double)CONCAT44(DAT_8c0bfa54,DAT_8c0bfa50);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *DAT_8c0bfa48._4_4_ = fVar5;
    }
    else {
      *(undefined8 *)DAT_8c0bfa48._4_4_ = in_xd0;
    }
    (*(code *)PTR_FUN_8c0bfa58)(DAT_8c0bfa28,uVar3,uVar2,uVar4);
  }
  else if (iVar1 == 5) {
    (*(code *)PTR_FUN_8c0bfa5c)(auStack_6c,uVar3,uVar2,uVar4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0bfa40._4_4_ = (undefined4)DAT_8c0bfa48;
      dVar6 = (double)CONCAT44(DAT_8c0bfa60,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      *DAT_8c0bfa40._4_4_ = CONCAT44(DAT_8c0bfa48._4_4_,(undefined4)DAT_8c0bfa48);
      in_xd0 = *(undefined8 *)(ar4 + 0x2c);
      dVar6 = (double)CONCAT44(_DAT_8c0bfa64,DAT_8c0bfa60);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *DAT_8c0bfa48._4_4_ = fVar5;
    }
    else {
      *(undefined8 *)DAT_8c0bfa48._4_4_ = in_xd0;
    }
    (*(code *)PTR_FUN_8c0bfa58)(DAT_8c0bfa28,uVar3,uVar2,uVar4);
  }
  else if (iVar1 == 9) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0bfa40._4_4_ = _DAT_8c0bfa64;
      *DAT_8c0bfa48._4_4_ = _DAT_8c0bfa68;
    }
    else {
      *DAT_8c0bfa40._4_4_ = CONCAT44(_DAT_8c0bfa68,_DAT_8c0bfa64);
      *(ulonglong *)DAT_8c0bfa48._4_4_ = CONCAT44(DAT_8c0bfa6c,_DAT_8c0bfa68);
    }
    uVar4 = 0x10;
    uVar2 = 0;
    (*(code *)PTR_FUN_8c0bfa70)(DAT_8c0bfa28,ar4 + 0x10,0,0x10);
  }
  uVar2 = (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0bfa74)(auStack_60,0xffffffff,uVar2,uVar4);
  return uVar2;
}



/* FUN_8c0bfa78 @ 8c0bfa78 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bfa78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_a0 [20];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_2c = *(undefined4 *)PTR_DAT_8c0bfbb4;
  uStack_28 = *(undefined4 *)(PTR_DAT_8c0bfbb4 + 4);
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0bfbb4 + 8);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0bfbb4 + 0xc);
  uStack_1c = *(undefined4 *)(PTR_DAT_8c0bfbb4 + 0x10);
  uStack_18 = *(undefined4 *)(PTR_DAT_8c0bfbb4 + 0x14);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0bfbb4 + 0x18);
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0bfbb4 + 0x1c);
  fStack_4c = *(float *)PTR_DAT_8c0bfbb8;
  fStack_48 = *(float *)(PTR_DAT_8c0bfbb8 + 4);
  fStack_44 = *(float *)(PTR_DAT_8c0bfbb8 + 8);
  fStack_40 = *(float *)(PTR_DAT_8c0bfbb8 + 0xc);
  fStack_3c = *(float *)(PTR_DAT_8c0bfbb8 + 0x10);
  fStack_38 = *(float *)(PTR_DAT_8c0bfbb8 + 0x14);
  fStack_34 = *(float *)(PTR_DAT_8c0bfbb8 + 0x18);
  fStack_30 = *(float *)(PTR_DAT_8c0bfbb8 + 0x1c);
  fStack_6c = *(float *)PTR_DAT_8c0bfbbc;
  fStack_68 = *(float *)(PTR_DAT_8c0bfbbc + 4);
  fStack_64 = *(float *)(PTR_DAT_8c0bfbbc + 8);
  fStack_60 = *(float *)(PTR_DAT_8c0bfbbc + 0xc);
  fStack_5c = *(float *)(PTR_DAT_8c0bfbbc + 0x10);
  fStack_58 = *(float *)(PTR_DAT_8c0bfbbc + 0x14);
  fStack_54 = *(float *)(PTR_DAT_8c0bfbbc + 0x18);
  fStack_50 = *(float *)(PTR_DAT_8c0bfbbc + 0x1c);
  uStack_8c = *(undefined4 *)PTR_DAT_8c0bfbc0;
  uStack_88 = *(undefined4 *)(PTR_DAT_8c0bfbc0 + 4);
  uStack_84 = *(undefined4 *)(PTR_DAT_8c0bfbc0 + 8);
  uStack_80 = *(undefined4 *)(PTR_DAT_8c0bfbc0 + 0xc);
  (*(code *)PTR_FUN_8c0bfbc4)(auStack_a0,ar5,ar6,ar7);
  uStack_7c = 0;
  uStack_7a = (undefined2)DAT_8c0bfbc8;
  uStack_78 = 0;
  uStack_76 = (undefined2)DAT_8c0bfbcc;
  uVar4 = 4;
  puVar3 = DAT_8c0bfbd0;
  uStack_74 = uStack_7a;
  uStack_72 = uStack_76;
  uStack_70 = uStack_7a;
  uStack_6e = uStack_7a;
  (*(code *)PTR_FUN_8c0bfbd4)(auStack_a0,&uStack_2c,DAT_8c0bfbd0,4);
  (*(code *)PTR_FUN_8c0bfbd8)(auStack_a0,&uStack_7c,puVar3,uVar4);
  uVar1 = DAT_8c0bfbdc;
  (*(code *)PTR_FUN_8c0bfbe0)(auStack_a0,DAT_8c0bfbdc,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0bfbe4)(ar5,uVar1,puVar3,uVar4);
  uVar1 = 0xc;
  (*(code *)PTR_FUN_8c0bfbe8)(ar5,0xc,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0bfbf0)(auStack_a0,uVar1,puVar3,uVar4);
  if (*(int *)(ar4 + 0xc) == 0) {
    (*(code *)PTR_FUN_8c0bfd5c)(ar5,0xc,puVar3,uVar4);
    if (*(int *)(ar4 + 0x24) == 1) {
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_4c);
      }
      else {
        in_xd0 = CONCAT44(fStack_48,fStack_4c);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_4c = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_4c = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_48);
      }
      else {
        fStack_4c = (float)in_xd0;
        fStack_48 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_44,fStack_48);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_48 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_48 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_44);
      }
      else {
        fStack_48 = (float)in_xd0;
        fStack_44 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_40,fStack_44);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_44 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_44 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_40);
      }
      else {
        fStack_44 = (float)in_xd0;
        fStack_40 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_3c,fStack_40);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_40 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_40 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_3c);
      }
      else {
        fStack_40 = (float)in_xd0;
        fStack_3c = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_38,fStack_3c);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_3c = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_3c = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_38);
      }
      else {
        fStack_3c = (float)in_xd0;
        fStack_38 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_34,fStack_38);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_38 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_38 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_34);
      }
      else {
        fStack_38 = (float)in_xd0;
        fStack_34 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_30,fStack_34);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_34 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_34 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfd60,fStack_30);
      }
      else {
        fStack_34 = (float)in_xd0;
        fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(uStack_2c,fStack_30);
        dVar5 = (double)CONCAT44(PTR_FUN_8c0bfd64,DAT_8c0bfd60);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_30 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_30 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ != '\0') {
        fStack_30 = (float)in_xd0;
        uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      uStack_7c = 0;
      uStack_7a = 0x7f;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0x7f;
      uStack_72 = 0;
      uStack_70 = 0x7f;
      uStack_6e = 0x7f;
      uVar1 = 4;
      puVar3 = &uStack_8c;
      (*(code *)PTR_FUN_8c0bfd64)(auStack_a0,&fStack_4c,puVar3,4);
      puVar2 = &uStack_7c;
      (*(code *)PTR_FUN_8c0bfd68)(auStack_a0,puVar2,puVar3,uVar1);
      (*(code *)PTR_FUN_8c0bfd70)(auStack_a0,puVar2,puVar3,uVar1);
      uStack_7c = (undefined2)DAT_8c0bfd74;
      uStack_7a = 0x7f;
      uStack_76 = 0;
      uStack_74 = (undefined2)DAT_8c0bfd78;
      uStack_72 = 0;
      uStack_6e = 0x7f;
      uVar4 = 4;
      puVar3 = DAT_8c0bfd7c;
      uStack_78 = uStack_7c;
      uStack_70 = uStack_74;
      (*(code *)PTR_FUN_8c0bfd64)(auStack_a0,&fStack_6c,DAT_8c0bfd7c,4);
      puVar2 = &uStack_7c;
      (*(code *)PTR_FUN_8c0bfd68)(auStack_a0,puVar2,puVar3,uVar4);
      (*(code *)PTR_FUN_8c0bfd70)(auStack_a0,puVar2,puVar3,uVar4);
    }
    else {
      uStack_7c = 0;
      uStack_7a = 0x7f;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0x7f;
      uStack_72 = 0;
      uStack_70 = 0x7f;
      uStack_6e = 0x7f;
      uVar4 = 4;
      uVar1 = DAT_8c0bfed4;
      (*(code *)PTR_FUN_8c0bfed8)(auStack_a0,&fStack_4c,DAT_8c0bfed4,4);
      puVar2 = &uStack_7c;
      (*(code *)PTR_FUN_8c0bfedc)(auStack_a0,puVar2,uVar1,uVar4);
      (*(code *)PTR_FUN_8c0bfee4)(auStack_a0,puVar2,uVar1,uVar4);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_6c);
      }
      else {
        in_xd0 = CONCAT44(fStack_68,fStack_6c);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_6c = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_6c = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_68);
      }
      else {
        fStack_6c = (float)in_xd0;
        fStack_68 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_64,fStack_68);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_68 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_68 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_64);
      }
      else {
        fStack_68 = (float)in_xd0;
        fStack_64 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_60,fStack_64);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_64 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_64 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_60);
      }
      else {
        fStack_64 = (float)in_xd0;
        fStack_60 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_5c,fStack_60);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_60 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_60 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_5c);
      }
      else {
        fStack_60 = (float)in_xd0;
        fStack_5c = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_58,fStack_5c);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_5c = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_5c = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_58);
      }
      else {
        fStack_5c = (float)in_xd0;
        fStack_58 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_54,fStack_58);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_58 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_58 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_54);
      }
      else {
        fStack_58 = (float)in_xd0;
        fStack_54 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_50,fStack_54);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_54 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_54 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0bfee8,fStack_50);
      }
      else {
        fStack_54 = (float)in_xd0;
        fStack_50 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_4c,fStack_50);
        dVar5 = (double)CONCAT44(_DAT_8c0bfeec,DAT_8c0bfee8);
      }
      if (in_FPSCR_PR == '\0') {
        fStack_50 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_50 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ != '\0') {
        fStack_50 = (float)in_xd0;
        fStack_4c = (float)((ulonglong)in_xd0 >> 0x20);
      }
      uStack_7c = (undefined2)_DAT_8c0bfeec;
      uStack_7a = 0x7f;
      uStack_76 = 0;
      uStack_74 = (undefined2)DAT_8c0bfef0;
      uStack_72 = 0;
      uStack_6e = 0x7f;
      uVar4 = 4;
      puVar3 = &uStack_8c;
      uStack_78 = uStack_7c;
      uStack_70 = uStack_74;
      (*(code *)PTR_FUN_8c0bfed8)(auStack_a0,&fStack_6c,puVar3,4);
      puVar2 = &uStack_7c;
      (*(code *)PTR_FUN_8c0bfedc)(auStack_a0,puVar2,puVar3,uVar4);
      (*(code *)PTR_FUN_8c0bfee4)(auStack_a0,puVar2,puVar3,uVar4);
    }
  }
  else if (*(int *)(ar4 + 0xc) == 1) {
    (*(code *)PTR_FUN_8c0bff74)(ar5,0xb,puVar3,uVar4);
    uStack_7c = 0;
    uStack_7a = (undefined2)DAT_8c0bff78;
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_72 = 0;
    puVar2 = &uStack_7c;
    uStack_74 = uStack_7a;
    uStack_70 = uStack_7a;
    uStack_6e = uStack_7a;
    (*(code *)PTR_FUN_8c0bff7c)(auStack_a0,puVar2,puVar3,uVar4);
    (*(code *)PTR_FUN_8c0bff84)(auStack_a0,puVar2,puVar3,uVar4);
  }
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0bff88)(auStack_a0,0xffffffff,puVar3,uVar4);
  return uVar1;
}



/* FUN_8c0bff8c @ 8c0bff8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c0bff8c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  (*(code *)PTR_FUN_8c0c00bc)(ar4 + 3,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00c4)((int)ar4 + DAT_8c0c00c0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00cc)((int)ar4 + DAT_8c0c00c8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00d4)((int)ar4 + DAT_8c0c00d0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00dc)((int)ar4 + DAT_8c0c00d8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00e4)((int)ar4 + DAT_8c0c00e0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00ec)((int)ar4 + DAT_8c0c00e8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00f4)((int)ar4 + DAT_8c0c00f0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00fc)((int)ar4 + DAT_8c0c00f8,ar5,ar6,ar7);
  puVar1 = PTR_DAT_8c0c0104;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0100);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c0104 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c0104;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c010c;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0108);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c010c + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c010c;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c0114;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0110);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c0114 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c0114;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c011c;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0118);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c011c + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c011c;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c0124;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0120);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c0124 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c0124;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  *ar4 = (int)(ar4 + 3);
  ar4[1] = (int)ar4 + DAT_8c0c00c0;
  ar4[2] = (int)ar4 + DAT_8c0c00c8;
  *(int *)(DAT_8c0c0128 + (int)ar4) = (int)ar4 + DAT_8c0c00e0;
  *(int *)(DAT_8c0c012c + (int)ar4) = (int)ar4 + DAT_8c0c00e8;
  *(int *)(DAT_8c0c0130 + (int)ar4) = (int)ar4 + DAT_8c0c00c0;
  *(undefined4 *)(DAT_8c0c0134 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c0138 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c013c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c0140 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c0144 + (int)ar4) = 0;
  return ar4;
}


