/* Seaman (USA) region 0x8c0f0000-0x8c100000 (Ghidra decompiler) */

/* FUN_8c0f3df8 @ 8c0f3df8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0f3df8(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)((int)ar4 + 0xc) = *(undefined4 *)((int)ar5 + 0xc);
    *(undefined4 *)(ar4 + 2) = *(undefined4 *)(ar5 + 2);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
    *(undefined8 *)((int)ar4 + 0xc) = *(undefined8 *)((int)ar5 + 0xc);
    ar4[2] = ar5[2];
  }
  return ar4;
}



/* FUN_8c0f3e30 @ 8c0f3e30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0f3e30(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0f3e78)(ar4 + 0x1c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0f3e7c)(ar4 + 0x2c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f3e80)(ar4 + 0x38,ar5,ar6,ar7);
  *ar4 = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x44) = 0x32;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return ar4;
}



/* FUN_8c0f3e84 @ 8c0f3e84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f3e84(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_set_zero_8c0f3eb4)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f3eb8)(ar4 + 4,ar5,ar6,ar7);
  *ar4 = 0xffffffff;
  ar4[7] = 0x32;
  ar4[8] = 1;
  return ar4;
}



/* FUN_8c0f3ebc @ 8c0f3ebc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f3ebc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0f3f2c)(ar4,ar5,ar6,ar7);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0f3f30;
  (*(code *)PTR_Vec3_ctor_zero_8c0f3f34)(ar4 + 0x30,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f3f34)(ar4 + 0x40,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0f3f38)(ar4 + 0x50,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f3f3c)(ar4 + 0x5c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f3f44)(ar4 + DAT_8c0f3f40,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f3f44)(ar4 + DAT_8c0f3f48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f3f50)(ar4 + DAT_8c0f3f4c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f3f54)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0f3f58 @ 8c0f3f58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f3f58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != 0) {
    (*(code *)PTR_Vec3_dtor_8c0f3fe0)(ar4 + DAT_8c0f3fdc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0f3fe0)(ar4 + DAT_8c0f3fe4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0f3fe0)(ar4 + DAT_8c0f3fe8,0xffffffff,ar6,ar7);
    (*(code *)PTR_vec_delete_array_8c0f3ff0)
              (ar4 + 0x6c,PTR_free_if_nonnull_wrap_0f3ffc_8c0f3fec,8,3);
    a7 = 3;
    a6 = 8;
    (*(code *)PTR_vec_delete_array_8c0f3ff0)
              (ar4 + 0x4c,PTR_free_if_nonnull_wrap_0f3ffc_8c0f3fec,8,3);
    a5 = 0xffffffff;
    (*(code *)PTR_Class_129974_m0_016c2c_8c0f3ff4)(ar4 + 8,0xffffffff,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0f3ff8)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0f3ffc @ 8c0f3ffc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0f3ffc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0f4028)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0f402c @ 8c0f402c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f402c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}



/* FUN_8c0f4040 @ 8c0f4040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f4040(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_FUN_8c0f40dc)(ar4,ar5,ar6,ar7);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0f40e0;
  (*(code *)PTR_Vec3_ctor_zero_8c0f40e4)(ar4 + 0x30,a5,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f40e4)(ar4 + 0x40,a5,a6,a7);
  (*(code *)PTR_Vec3_set_zero_8c0f40e8)(ar4 + 0x50,a5,a6,a7);
  (*(code *)PTR_FUN_8c0f40ec)(ar4 + 0x5c,a5,a6,a7);
  (*(code *)PTR_FUN_8c0f40f4)(ar4 + DAT_8c0f40f0,a5,a6,a7);
  (*(code *)PTR_FUN_8c0f40f4)(ar4 + DAT_8c0f40f8,a5,a6,a7);
  (*(code *)PTR_FUN_8c0f4100)(ar4 + DAT_8c0f40fc,a5,a6,a7);
  (*(code *)PTR_FUN_8c0f4104)(ar4,a5,a6,a7);
  *(undefined4 *)(ar4 + 0x24) = ar5;
  *(undefined4 *)(ar4 + 0x28) = ar6;
  *(undefined4 *)(ar4 + 0x20) = in_stack_00000000;
  *(undefined4 *)(ar4 + 0x2c) = ar7;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x78) = 0;
    *(undefined4 *)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x78) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 0x7c) = (ulonglong)extraout_fr1;
  }
  return ar4;
}



/* Class_12c1f0_m0_0f4108 @ 8c0f4108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c1f0_m0_0f4108(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0f419c;
    (*(code *)PTR_FUN_8c0f41a4)(ar4 + DAT_8c0f41a0,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0d8168_8c0f41ac)(ar4 + DAT_8c0f41a8,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0d8168_8c0f41ac)(ar4 + DAT_8c0f41b0,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0f41b4)(ar4 + 0x5c,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0f41b8)(ar4 + 0x50,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0f41bc)(ar4 + 0x40,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0f41bc)(ar4 + 0x30,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_0c0264_8c0f41c0)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0f41c4)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* CAnimal_m1_0f41c8 @ 8c0f41c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m1_0f41c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0f4248)(ar4 + 0xc,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0f424c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0f4250 @ 8c0f4250 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f4250(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0f4254 @ 8c0f4254 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f4254(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0f4258 @ 8c0f4258 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4258(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a5;
  undefined4 uVar2;
  int iVar3;
  int *a5_00;
  int iVar4;
  int iVar5;
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_get_field_bb4_0e06e4_8c0f438c)(ar5,ar5,ar6,ar7);
  iVar4 = 0;
  do {
    if (iVar1 <= iVar4) {
LAB_8c0f42f4:
      iVar1 = (**(code **)(DAT_8c0f43a8 + *ar5))(ar5,a5,ar6,ar7);
      uVar2 = 1;
      if (1 < iVar1) {
        iVar1 = ar4;
        iVar4 = (*(code *)PTR_FUN_8c0f43ac)(ar5,ar4,ar6,ar7);
        uVar2 = (*(code *)PTR_list_node_next_8c0f43b0)(ar4,iVar1,ar6,ar7);
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          iVar1 = (*(code *)PTR_get_field_a4_032154_8c0f43b4)(uVar2,iVar1,ar6,ar7);
          iVar3 = (**(code **)(**(int **)(DAT_8c0f4398 + ar4) + 0x14))
                            (*(int **)(DAT_8c0f4398 + ar4),iVar1,ar6,ar7);
          if (iVar3 == 1) {
            (*(code *)PTR_FUN_8c0f43b8)(ar4,uVar2,ar6,ar7);
            uVar2 = (*(code *)PTR_FUN_8c0f43b8)(uVar2,ar4,ar6,ar7);
            return uVar2;
          }
          uVar2 = (*(code *)PTR_list_node_next_8c0f43b0)(uVar2,iVar1,ar6,ar7);
        }
      }
      return uVar2;
    }
    a5 = (int *)(**(code **)(DAT_8c0f4390 + *ar5))(ar5,iVar4,ar6,ar7);
    iVar5 = (**(code **)(**(int **)(DAT_8c0f4398 + ar4) + 0x14))
                      (*(int **)(DAT_8c0f4398 + ar4),(int)a5 + DAT_8c0f4394,ar6,ar7);
    if (iVar5 == 1) {
      (*(code *)PTR_FUN_8c0f439c)(ar4,a5,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    a5_00 = (int *)((int)a5 + DAT_8c0f4394);
    iVar5 = (**(code **)(*(int *)(ar4 + DAT_8c0f43a0) + 0x14))
                      ((int *)(ar4 + DAT_8c0f43a0),a5_00,ar6,ar7);
    if (iVar5 == 1) {
      (*(code *)PTR_FUN_8c0f43a4)(ar4,a5,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    iVar4 = iVar4 + 1;
    a5 = a5_00;
  } while( true );
}



/* FUN_8c0f43bc @ 8c0f43bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f43bc(int ar4,int *ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined1 *a6;
  undefined4 unaff_r9;
  int iVar2;
  undefined4 unaff_r10;
  undefined4 a4;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined8 *puVar3;
  undefined4 unaff_r13;
  int iVar4;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  float fVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar11;
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
  (*(code *)PTR_Vec3_ctor_zero_8c0f4444)(puVar5 + -0x8c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f4444)(puVar5 + -0x9c,a5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f4444)(puVar5 + -0xac,a5,ar6,ar7);
  fVar10 = 0.0;
  uVar1 = (**(code **)(DAT_8c0f4448 + *ar5))(ar5,a5,ar6,ar7);
  *(undefined4 *)(puVar5 + -0xb0) = uVar1;
  a4 = *(undefined4 *)(puVar5 + -0xb0);
  uVar1 = (*(code *)PTR_get_field_24_026024_8c0f444c)(ar5,a5,ar6,ar7);
  *(undefined4 *)(puVar5 + -0xb4) = uVar1;
  iVar2 = *(int *)(puVar5 + -0xb4);
  a6 = puVar5 + -0x9c;
  (**(code **)(DAT_8c0f4450 + *ar5))(ar5,puVar5 + -0x8c,a6,ar7);
  (**(code **)(**(int **)(DAT_8c0f4454 + ar4) + 0x38))
            (*(int **)(DAT_8c0f4454 + ar4),puVar5 + -0x7c,a6,ar7);
  puVar3 = (undefined8 *)(puVar5 + -0x7c);
  iVar4 = 0;
  do {
    if (7 < iVar4) {
LAB_8c0f4912:
      (*(code *)PTR_Vec3_dtor_8c0f4970)(puVar5 + -0xac,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0f4970)(puVar5 + -0x9c,0xffffffff,a6,ar7);
      uVar1 = (*(code *)PTR_Vec3_dtor_8c0f4970)(puVar5 + -0x8c,0xffffffff,a6,ar7);
      return uVar1;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(puVar5 + -0x8c),*(undefined4 *)puVar3);
    }
    else {
      uVar7 = *(ulonglong *)(puVar5 + -0x8c);
    }
    fVar6 = (float)uVar7;
    if (in_FPSCR_PR == '\0' && fVar6 < (float)(uVar7 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f44ac) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0f44ac) = CONCAT44(0x3f800000,fVar6);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f44b0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f44b0) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f44b4) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f44b4) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar1 = (undefined4)*(ulonglong *)(puVar5 + -0x8c);
        uVar7 = CONCAT44(uVar1,fVar6);
        *(undefined4 *)(ar4 + DAT_8c0f44b8) = uVar1;
      }
      else {
        uVar7 = *(ulonglong *)(puVar5 + -0x8c);
        *(ulonglong *)(ar4 + DAT_8c0f44b8) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f44bc) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f44bc) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f44c0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f44c0) = uVar7 & 0xffffffff;
      }
      *(int *)(DAT_8c0f44c4 + ar4) = iVar4;
      goto LAB_8c0f4912;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(puVar5 + -0x9c),*(undefined4 *)puVar3);
    }
    else {
      uVar8 = *(undefined8 *)(puVar5 + -0x9c);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
      if (in_FPSCR_SZ == '\0') {
        uVar7 = CONCAT44(DAT_8c0f4520,(float)uVar8);
        *(undefined4 *)(ar4 + DAT_8c0f451c) = DAT_8c0f4520;
      }
      else {
        uVar7 = CONCAT44(DAT_8c0f4524,DAT_8c0f4520);
        *(ulonglong *)(ar4 + DAT_8c0f451c) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4524) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4524) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4528) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4528) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar1 = (undefined4)*(ulonglong *)(puVar5 + -0x9c);
        uVar7 = CONCAT44(uVar1,(int)uVar7);
        *(undefined4 *)(ar4 + DAT_8c0f452c) = uVar1;
      }
      else {
        uVar7 = *(ulonglong *)(puVar5 + -0x9c);
        *(ulonglong *)(ar4 + DAT_8c0f452c) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4530) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4530) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4534) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4534) = uVar7 & 0xffffffff;
      }
      *(int *)(DAT_8c0f4538 + ar4) = iVar4;
      goto LAB_8c0f4912;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(puVar5 + -0x84),*(undefined4 *)(puVar3 + 1));
    }
    else {
      uVar7 = *(ulonglong *)(puVar5 + -0x84);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4594) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4594) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4598) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4598) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f459c) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0f459c) = CONCAT44(0x3f800000,(float)uVar7);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f45a0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f45a0) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f45a4) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f45a4) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f45a8) = *(undefined4 *)(puVar5 + -0x84);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0f45a8) = *(undefined8 *)(puVar5 + -0x84);
      }
      *(int *)(DAT_8c0f45ac + ar4) = iVar4;
      goto LAB_8c0f4912;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(puVar5 + -0x94),*(undefined4 *)(puVar3 + 1));
    }
    else {
      uVar7 = *(ulonglong *)(puVar5 + -0x94);
    }
    if (in_FPSCR_PR == '\0' && (float)(uVar7 >> 0x20) < (float)uVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4608) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4608) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f460c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f460c) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar7 = CONCAT44(DAT_8c0f4614,(float)uVar7);
        *(undefined4 *)(ar4 + DAT_8c0f4610) = DAT_8c0f4614;
      }
      else {
        uVar7 = CONCAT44(DAT_8c0f4618,DAT_8c0f4614);
        *(ulonglong *)(ar4 + DAT_8c0f4610) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4618) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4618) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f461c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f461c) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4620) = *(undefined4 *)(puVar5 + -0x94);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0f4620) = *(undefined8 *)(puVar5 + -0x94);
      }
      *(int *)(DAT_8c0f4624 + ar4) = iVar4;
      goto LAB_8c0f4912;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(puVar5 + -0x98),*(undefined4 *)((int)puVar3 + 4));
    }
    else {
      uVar7 = *(ulonglong *)(puVar5 + -0x98);
    }
    fVar6 = (float)uVar7;
    if (in_FPSCR_PR == '\0' && (float)(uVar7 >> 0x20) < fVar6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4680) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4680) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar7 = CONCAT44(DAT_8c0f4688,fVar6);
        *(undefined4 *)(ar4 + DAT_8c0f4684) = DAT_8c0f4688;
      }
      else {
        uVar7 = CONCAT44(DAT_8c0f468c,DAT_8c0f4688);
        *(ulonglong *)(ar4 + DAT_8c0f4684) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f468c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f468c) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4690) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4690) = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar1 = (undefined4)*(ulonglong *)(puVar5 + -0x98);
        uVar7 = CONCAT44(uVar1,(int)uVar7);
        *(undefined4 *)(ar4 + DAT_8c0f4694) = uVar1;
      }
      else {
        uVar7 = *(ulonglong *)(puVar5 + -0x98);
        *(ulonglong *)(ar4 + DAT_8c0f4694) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4698) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4698) = uVar7 & 0xffffffff;
      }
      *(int *)(DAT_8c0f469c + ar4) = iVar4;
      goto LAB_8c0f4912;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar5 + -0xac) = *(undefined4 *)puVar3;
      *(undefined4 *)(puVar5 + -0xa8) = *(undefined4 *)((int)puVar3 + 4);
      uVar8 = CONCAT44(*(undefined4 *)(puVar3 + 1),fVar6);
      *(undefined4 *)(puVar5 + -0xa4) = *(undefined4 *)(puVar3 + 1);
    }
    else {
      *(undefined8 *)(puVar5 + -0xac) = *puVar3;
      *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)((int)puVar3 + 4);
      uVar8 = puVar3[1];
      *(undefined8 *)(puVar5 + -0xa4) = uVar8;
    }
    if (iVar2 == 0) {
      uVar1 = (**(code **)(DAT_8c0f4758 + *ar5))(ar5,puVar5 + -0xac,a6,ar7);
      *(undefined4 *)(puVar5 + -0xb8) = uVar1;
      if (*(int *)(puVar5 + -0xb8) == 2) {
        ar7 = ar4 + DAT_8c0f4814;
        a6 = (undefined1 *)(ar4 + DAT_8c0f4818);
        uVar1 = (*(code *)PTR_FUN_8c0f481c)(a4,puVar5 + -0xac,a6,ar7);
        *(undefined4 *)(puVar5 + -0xc0) = uVar1;
        if (*(int *)(puVar5 + -0xc0) == 1) {
          *(int *)(DAT_8c0f4820 + ar4) = iVar4;
          goto LAB_8c0f4912;
        }
        *(undefined4 *)(DAT_8c0f4830 + ar4) = 0xffffffff;
      }
      else {
        (**(code **)(DAT_8c0f475c + *ar5))(ar5,puVar5 + -0xac,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar5 + -0xbc) = (int)((ulonglong)uVar8 >> 0x20);
          fVar10 = *(float *)(puVar5 + -0xbc);
          dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + 4),(int)uVar8);
        }
        else {
          *(undefined8 *)(puVar5 + -0xbc) = uVar8;
          in_xd14 = *(undefined8 *)(puVar5 + -0xbc);
          dVar9 = *(double *)((int)puVar3 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = (float)((ulonglong)dVar9 >> 0x20) < fVar10;
        }
        else {
          bVar11 = dVar9 < (double)CONCAT44(in_fr14,fVar10);
        }
        if (bVar11) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0f4760) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0f4760) = (ulonglong)dVar9 & 0xffffffff;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0f4764) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c0f4764) = CONCAT44(0x3f800000,SUB84(dVar9,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0f4768) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0f4768) = (ulonglong)dVar9 & 0xffffffff;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0f476c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0f476c) = (ulonglong)dVar9 & 0xffffffff;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c0f4770) = fVar10;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c0f4770) = in_xd14;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0f4774) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0f4774) = (ulonglong)dVar9 & 0xffffffff;
          }
          *(int *)(DAT_8c0f4778 + ar4) = iVar4;
          goto LAB_8c0f4912;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f47c8) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f47c8) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f47cc) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f47cc) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f47d0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f47d0) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f47d4) = DAT_8c0f47d8;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0f47d4) = CONCAT44(DAT_8c0f47dc,DAT_8c0f47d8);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f47dc) = DAT_8c0f47d8;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0f47dc) = CONCAT44(DAT_8c0f47dc,DAT_8c0f47d8);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f47e0) = DAT_8c0f47d8;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0f47e0) = CONCAT44(DAT_8c0f47dc,DAT_8c0f47d8);
        }
        *(undefined4 *)(DAT_8c0f47e4 + ar4) = 0xffffffff;
      }
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) {
      (**(code **)(DAT_8c0f489c + *ar5))(ar5,puVar5 + -0xac,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xc4) = (int)((ulonglong)uVar8 >> 0x20);
        fVar10 = *(float *)(puVar5 + -0xc4);
        dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + 4),(int)uVar8);
      }
      else {
        *(undefined8 *)(puVar5 + -0xc4) = uVar8;
        in_xd14 = *(undefined8 *)(puVar5 + -0xc4);
        dVar9 = *(double *)((int)puVar3 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        bVar11 = (float)((ulonglong)dVar9 >> 0x20) < fVar10;
      }
      else {
        bVar11 = dVar9 < (double)CONCAT44(in_fr14,fVar10);
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f48a0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f48a0) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f48a4) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0f48a4) = CONCAT44(0x3f800000,SUB84(dVar9,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f48a8) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f48a8) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f48ac) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f48ac) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0f48b0) = fVar10;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0f48b0) = in_xd14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f48b4) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f48b4) = (ulonglong)dVar9 & 0xffffffff;
        }
        *(int *)(DAT_8c0f48b8 + ar4) = iVar4;
        goto LAB_8c0f4912;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4950) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4950) = (ulonglong)dVar9 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4954) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4954) = (ulonglong)dVar9 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4958) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f4958) = (ulonglong)dVar9 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f495c) = DAT_8c0f4960;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0f495c) = CONCAT44(DAT_8c0f4964,DAT_8c0f4960);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4964) = DAT_8c0f4960;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0f4964) = CONCAT44(DAT_8c0f4964,DAT_8c0f4960);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f4968) = DAT_8c0f4960;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0f4968) = CONCAT44(DAT_8c0f4964,DAT_8c0f4960);
      }
      *(undefined4 *)(DAT_8c0f496c + ar4) = 0xffffffff;
    }
    iVar4 = iVar4 + 1;
    puVar3 = (undefined8 *)((int)puVar3 + 0xc);
  } while( true );
}



/* FUN_8c0f4974 @ 8c0f4974 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4974(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  a5 = ar4 + DAT_8c0f49ac;
  (**(code **)(DAT_8c0f49b0 + *(int *)(ar4 + 8)))(ar4,a5,ar5,ar7);
  (*(code *)PTR_FUN_8c0f49b4)(ar4 + DAT_8c0f49ac,a5,ar5,ar7);
  return 1;
}



/* CAnimal_m7_0f49b8 @ 8c0f49b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m7_0f49b8(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *a5;
  undefined1 *a6;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar1;
  float fVar2;
  double in_dr0;
  double dVar3;
  undefined8 uVar4;
  float fVar5;
  double in_dr12;
  undefined4 uVar6;
  undefined8 in_dr14;
  double dVar7;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar1 = (undefined1 *)((int)&uStack_10 + 4);
    uStack_10 = CONCAT44(SUB84(in_dr12,0),(undefined4)uStack_10);
  }
  else {
    puVar1 = auStack_18;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)(puVar1 + -4) = unaff_r14;
  *(undefined4 *)(puVar1 + -8) = unaff_r13;
  *(undefined4 *)(puVar1 + -0xc) = in_PR;
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0f4b28)(puVar1 + -0x1c,ar5,ar6,ar7);
  uVar6 = (undefined4)in_dr14;
  (*(code *)PTR_Vec3_ctor_zero_8c0f4b28)(puVar1 + -0x2c,a5,ar6,ar7);
  (**(code **)(DAT_8c0f4b2c + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x30) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar6 = *(undefined4 *)(puVar1 + -0x30);
  }
  else {
    *(double *)(puVar1 + -0x30) = in_dr0;
  }
  (**(code **)(DAT_8c0f4b30 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x34) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar7 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x34),uVar6);
  }
  else {
    *(double *)(puVar1 + -0x34) = in_dr0;
    dVar7 = *(double *)(puVar1 + -0x34);
  }
  uVar6 = (**(code **)(DAT_8c0f4b34 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  *(undefined4 *)(puVar1 + -0x38) = uVar6;
  if (*(int *)(puVar1 + -0x38) == 0) {
    dVar7 = (double)CONCAT44(0x3f800000,SUB84(dVar7,0));
  }
  a6 = puVar1 + -0x2c;
  (**(code **)(DAT_8c0f4b38 + *ar5))(ar5,puVar1 + -0x1c,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar5 = SUB84(dVar7,0);
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(in_dr0,0) - fVar5;
  }
  else {
    fVar2 = SUB84(in_dr0 - dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x1c),fVar2);
  }
  else {
    dVar3 = *(double *)(puVar1 + -0x1c);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x30));
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) + fVar5;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x2c),fVar2);
    }
    else {
      dVar3 = *(double *)(puVar1 + -0x2c);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar3 >> 0x20) <= SUB84(dVar3,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x2c),SUB84(dVar3,0));
      }
      else {
        dVar3 = *(double *)(puVar1 + -0x2c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar5,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar3;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x1c),SUB84(dVar3,0));
    }
    else {
      dVar3 = *(double *)(puVar1 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar5,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar3;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) - fVar5;
  }
  else {
    fVar2 = SUB84(dVar3 - dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x14),fVar2);
  }
  else {
    dVar3 = *(double *)(puVar1 + -0x14);
  }
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar2 < SUB84(dVar3,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(fVar2,*(undefined4 *)(ar4 + 0x38));
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) + fVar5;
    }
    else {
      fVar2 = SUB84(dVar3 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x24),fVar2);
    }
    else {
      dVar3 = *(double *)(puVar1 + -0x24);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar3 >> 0x20) <= SUB84(dVar3,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x24),SUB84(dVar3,0));
      }
      else {
        dVar3 = *(double *)(puVar1 + -0x24);
      }
      if (in_FPSCR_PR == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) - fVar5,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 - dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar3;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(puVar1 + -0x14),SUB84(dVar3,0));
    }
    else {
      dVar3 = *(double *)(puVar1 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar5,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar3;
    }
  }
  (**(code **)(DAT_8c0f4b3c + *ar5))(ar5,ar4 + 0x30,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x3c) = (int)((ulonglong)dVar3 >> 0x20);
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(puVar1 + -0x3c));
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar1 + -0x3c) = dVar3;
    in_xd12 = *(undefined8 *)(puVar1 + -0x3c);
    dVar3 = *(double *)(ar4 + 0x34);
  }
  fVar5 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar8 = SUB84(in_dr12,0) < (float)((ulonglong)dVar3 >> 0x20) - fVar5;
  }
  else {
    bVar8 = in_dr12 < dVar3 - dVar7;
  }
  if (bVar8) {
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(puVar1 + -0x28),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      uVar4 = *(undefined8 *)(puVar1 + -0x28);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar4 >> 0x20) <= (float)uVar4) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(puVar1 + -0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)(puVar1 + -0x28);
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(in_dr12,0) + fVar5;
    }
    else {
      fVar5 = SUB84(in_dr12 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x34) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd12;
    }
  }
  (*(code *)PTR_Vec3_dtor_8c0f4b40)(puVar1 + -0x2c,0xffffffff,a6,ar7);
  uVar6 = (*(code *)PTR_Vec3_dtor_8c0f4b40)(puVar1 + -0x1c,0xffffffff,a6,ar7);
  return uVar6;
}



/* FUN_8c0f4b44 @ 8c0f4b44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4b44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x78) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(ar4 + 0x7c) = (int)in_dr4;
  }
  else {
    uStack_c = (undefined4)in_xd4;
    *(ulonglong *)(ar4 + 0x78) = CONCAT44(uStack_c,(int)in_dr4);
    *(undefined8 *)(ar4 + 0x7c) = in_xd4;
  }
  uVar1 = (*(code *)PTR_FUN_8c0f4b90)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0f4b94 @ 8c0f4b94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f4b94(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0f4b98 @ 8c0f4b98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4b98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  undefined1 auStack_14 [16];
  
  a5 = ar4 + 0x5c;
  (*(code *)PTR_FUN_8c0f4be0)(auStack_14,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f4be4)(ar4 + 0x5c,a5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f4be8)(ar4 + 0x5c,auStack_14,ar6,ar7);
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0f4bec)(auStack_14,0xffffffff,ar6,ar7);
  return uVar1;
}



/* noop_0f4bf0 @ 8c0f4bf0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f4bf0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0f4bf4 @ 8c0f4bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4bf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f4c0c @ 8c0f4c0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4c0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}



/* FUN_8c0f4c5c @ 8c0f4c5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f4c5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x70);
  *(int *)(ar4 + 0x70) = iVar1 + 1;
  return iVar1;
}



/* s_CItem_BeNotReference_0f4c7a @ 8c0f4c78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CItem_BeNotReference_0f4c7a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(int *)(ar4 + 0x70) = *(int *)(ar4 + 0x70) + -1;
  if (*(int *)(ar4 + 0x70) < 0) {
    (*(code *)PTR_report_error_message_8c0f4ccc)
              (PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f4cc8 + 0x19,
               PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f4cc8 + 0x36,1,2);
    *(undefined4 *)(ar4 + 0x70) = 0;
  }
  return *(undefined4 *)(ar4 + 0x70);
}



/* FUN_8c0f4cd0 @ 8c0f4cd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4cd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0f4cec)(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f4cf0 @ 8c0f4cf0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f4cf0(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x50);
    dVar2 = *ar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x50) = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)(ar4 + 0x54));
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x54);
    dVar2 = *(double *)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x54) = fVar1;
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 0x58));
  }
  else {
    *(undefined8 *)(ar4 + 0x54) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x58);
    dVar2 = ar5[1];
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x58) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 0x58) = in_xd0;
  }
  return ar4 + 0x58;
}



/* FUN_8c0f4d34 @ 8c0f4d34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4d34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & DAT_8c0f4d50) == DAT_8c0f4d50) {
    return 1;
  }
  return 0;
}



/* ret_const_1_0f4d54 @ 8c0f4d54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0f4d54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* ret_const_0_0f4d5c @ 8c0f4d5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0f4d5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0f4d64 @ 8c0f4d64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0f4d64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0f4d6c @ 8c0f4d6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0f4d6c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_1_0f4d74 @ 8c0f4d74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0f4d74(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* ret_const_0_0f4d7c @ 8c0f4d7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0f4d7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0f4d84 @ 8c0f4d84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4d84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & DAT_8c0f4da0;
  return 1;
}



/* Vec3_assign_wrap_0f4da4 @ 8c0f4da4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_assign_wrap_0f4da4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_assign_8c0f4dc0)(ar4 + 0x40,ar4 + 0x30,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f4dc4 @ 8c0f4dc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f4dc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(DAT_8c0f4e14 + ar4);
  if (*(int *)(DAT_8c0f4e14 + ar4) != 3) {
    puVar3 = (undefined4 *)(ar4 + *(int *)(DAT_8c0f4e14 + ar4) * 8 + DAT_8c0f4e18);
    *puVar3 = 1;
    puVar3[1] = ar5;
    *(int *)(DAT_8c0f4e14 + ar4) = *(int *)(DAT_8c0f4e14 + ar4) + 1;
    iVar1 = DAT_8c0f4e14;
    iVar2 = 3;
    if (3 < *(int *)(DAT_8c0f4e14 + ar4)) {
      *(undefined4 *)(DAT_8c0f4e14 + ar4) = 3;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c0f4e1c @ 8c0f4e1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f4e1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0f4e24;
  *(undefined4 *)(DAT_8c0f4e24 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0f4e28 @ 8c0f4e28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f4e28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0f4e30;
  *(undefined4 *)(DAT_8c0f4e30 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0f4e34 @ 8c0f4e34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4e34(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0f4eac)(ar4 + 0xc,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x20) = *(undefined4 *)(ar5 + 0x14);
  *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar5 + 0x18);
  (*(code *)PTR_Vec3_assign_8c0f4eb0)(ar4 + 0x30,ar5 + 0x1c,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0f4eb4)(ar4 + 0x50,ar5 + 0x2c,ar6,ar7);
  (*(code *)PTR_FUN_8c0f4eb8)(ar4 + 0x5c,ar5 + 0x38,ar6,ar7);
  *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar5 + 0x44);
  *(undefined4 *)(ar4 + 0x74) = *(undefined4 *)(ar5 + 0x48);
  return 0x74;
}



/* FUN_8c0f4ebc @ 8c0f4ebc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4ebc(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x24) = *ar5;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0f4f04)(ar4 + 0x50,ar5 + 1,ar6,ar7);
  (*(code *)PTR_FUN_8c0f4f08)(ar4 + 0x5c,ar5 + 4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x6c) = ar5[7];
  *(undefined4 *)(ar4 + 0x74) = ar5[8];
  return 0x74;
}



/* FUN_8c0f4f0c @ 8c0f4f0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4f0c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0f4f94)(ar5,ar5,ar6,ar7);
  *(undefined4 *)(ar5 + 0x14) = *(undefined4 *)(ar4 + 0x20);
  *(undefined4 *)(ar5 + 0x18) = *(undefined4 *)(ar4 + 0x24);
  (*(code *)PTR_Vec3_assign_8c0f4f98)(ar5 + 0x1c,ar4 + 0x30,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0f4f9c)(ar5 + 0x2c,ar4 + 0x50,ar6,ar7);
  (*(code *)PTR_FUN_8c0f4fa0)(ar5 + 0x38,ar4 + 0x5c,ar6,ar7);
  *(undefined4 *)(ar5 + 0x44) = *(undefined4 *)(ar4 + 0x6c);
  *(uint *)(ar5 + 0x48) = *(uint *)(ar4 + 0x74) & 0xfffffffd;
  return 0x48;
}



/* FUN_8c0f4fa4 @ 8c0f4fa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0f4fa4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *ar5 = *(undefined4 *)(ar4 + 0x24);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0f4ffc)(ar5 + 1,ar4 + 0x50,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5000)(ar5 + 4,ar4 + 0x5c,ar6,ar7);
  ar5[7] = *(undefined4 *)(ar4 + 0x6c);
  uVar1 = *(uint *)(ar4 + 0x74) & 0xfffffffd;
  ar5[8] = uVar1;
  return uVar1;
}



/* s_No_2ld_kind_d_cat_d_food_d_r_0f5008 @ 8c0f5004 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_No_2ld_kind_d_cat_d_food_d_r_0f5008(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 a7;
  undefined **ppuVar2;
  char in_FPSCR_SZ;
  undefined *puStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_ac [164];
  
  uStack_b8 = *(undefined8 *)(ar4 + 0x6c);
  uStack_bc = *(undefined4 *)(ar4 + 0x28);
  uStack_c0 = *(undefined4 *)(ar4 + 0x24);
  uStack_c4 = *(undefined4 *)(ar4 + 0x20);
  puStack_c8 = PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f50a4 + 0x4c;
  uStack_b0 = ar5;
  (*(code *)PTR_FUN_8c0f50a8)(auStack_ac,ar5,ar6,ar7);
  uStack_b8 = CONCAT44(0xffffffff,(undefined4)uStack_b8);
  a7 = 0xd;
  uVar1 = uStack_b0;
  a6 = ar6;
  (*(code *)PTR_noop_102824_8c0f50ac)(auStack_ac,uStack_b0,ar6,0xd);
  if (in_FPSCR_SZ == '\0') {
    uStack_b8 = CONCAT44(*(undefined4 *)(ar4 + 0x38),(undefined4)uStack_b8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_b8._0_4_ = *(undefined4 *)(ar4 + 0x34);
    uStack_bc = *(undefined4 *)(ar4 + 0x30);
    ppuVar2 = (undefined **)&uStack_bc;
  }
  else {
    uStack_b8 = *(undefined8 *)(ar4 + 0x38);
    uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x34) >> 0x20);
    uStack_c0 = (undefined4)*(undefined8 *)(ar4 + 0x34);
    ppuVar2 = &puStack_c8;
    uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x30) >> 0x20);
    puStack_c8 = (undefined *)*(undefined8 *)(ar4 + 0x30);
  }
  *(undefined **)((int)ppuVar2 + -4) = PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f50a4 + 0x72;
  (*(code *)PTR_FUN_8c0f50a8)((undefined1 *)((int)ppuVar2 + 0x10),uVar1,a6,a7);
  *(undefined4 *)((int)ppuVar2 + 8) = 0xffffffff;
  uVar1 = (*(code *)PTR_noop_102824_8c0f50ac)
                    ((undefined1 *)((int)ppuVar2 + 0x10),DAT_8c0f50b0,ar6,0xd);
  return uVar1;
}



/* FUN_8c0f50b4 @ 8c0f50b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f50b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x28) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x6c) = 0x32;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(DAT_8c0f510c + ar4) = 0;
  *(undefined4 *)(DAT_8c0f5110 + ar4) = 0;
  *(undefined4 *)(DAT_8c0f5114 + ar4) = 1;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | DAT_8c0f5118;
  return 0x74;
}



/* CAnimal_m8_0f511c @ 8c0f511c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f51ae) */
/* WARNING: Unknown calling convention */

double * CAnimal_m8_0f511c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  int a5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  undefined8 in_dr0;
  undefined8 uVar3;
  double dVar4;
  float in_fr13;
  undefined4 in_fr12;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr14;
  double dVar7;
  float fVar8;
  undefined8 in_xd14;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar2 = auStack_c;
  }
  else {
    puVar2 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(puVar2 + -8) = unaff_r13;
  *(undefined4 *)(puVar2 + -0xc) = in_PR;
  (**(code **)(DAT_8c0f527c + *ar5))(ar5,ar5,ar6,ar7);
  uVar5 = (undefined4)in_dr14;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x10) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr13 = *(float *)(puVar2 + -0x10);
  }
  else {
    *(undefined8 *)(puVar2 + -0x10) = in_dr0;
  }
  a5 = ar4 + 0x30;
  (**(code **)(DAT_8c0f5280 + *ar5))(ar5,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar5 = *(undefined4 *)(puVar2 + -0x14);
  }
  else {
    *(undefined8 *)(puVar2 + -0x14) = in_dr0;
  }
  (**(code **)(DAT_8c0f5284 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x18) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar7 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x18),uVar5);
  }
  else {
    *(undefined8 *)(puVar2 + -0x18) = in_dr0;
    dVar7 = *(double *)(puVar2 + -0x18);
  }
  *(int *)(puVar2 + -0x1c) = ar4;
  *(uint *)(*(int *)(puVar2 + -0x1c) + 0x74) =
       *(uint *)(*(int *)(puVar2 + -0x1c) + 0x74) & 0xffffffbf;
  *(int *)(puVar2 + -0x20) = ar4;
  *(uint *)(*(int *)(puVar2 + -0x20) + 0x74) =
       *(uint *)(*(int *)(puVar2 + -0x20) + 0x74) & 0xffffffef;
  *(int *)(puVar2 + -0x24) = ar4;
  *(uint *)(*(int *)(puVar2 + -0x24) + 0x74) =
       *(uint *)(*(int *)(puVar2 + -0x24) + 0x74) & 0xffffffdf;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(*(undefined4 *)DAT_8c0f5288,(int)in_dr0);
  }
  else {
    uVar3 = *DAT_8c0f5288;
  }
  fVar6 = SUB84(dVar7,0);
  fVar8 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_fr13 == (float)((ulonglong)uVar3 >> 0x20)) {
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44(fVar8,fVar6 + fVar8);
    }
    else {
      dVar7 = dVar7 + dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),(int)uVar3);
    }
    else {
      dVar4 = *(double *)(ar4 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = SUB84(dVar7,0) < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar9 = dVar7 < dVar4;
    }
    if (bVar9) {
      *(int *)(puVar2 + -0x28) = ar4;
      pdVar1 = (double *)0x74;
      *(uint *)(*(int *)(puVar2 + -0x28) + 0x74) = *(uint *)(*(int *)(puVar2 + -0x28) + 0x74) | 0x40
      ;
    }
    else {
      *(int *)(puVar2 + -0x2c) = ar4;
      pdVar1 = (double *)0x74;
      *(uint *)(*(int *)(puVar2 + -0x2c) + 0x74) = *(uint *)(*(int *)(puVar2 + -0x2c) + 0x74) | 0x20
      ;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),(int)uVar3);
    }
    else {
      dVar4 = *(double *)(ar4 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = in_fr13 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar9 = (double)CONCAT44(in_fr12,in_fr13) < dVar4;
    }
    if (bVar9) {
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(fVar8,fVar6 + fVar8);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(ar4 + 0x34);
      }
      if (in_FPSCR_PR == '\0') {
        bVar9 = SUB84(dVar7,0) < (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        bVar9 = dVar7 < dVar4;
      }
      if (bVar9) {
        *(int *)(puVar2 + -0x30) = ar4;
        pdVar1 = (double *)0x74;
        *(uint *)(*(int *)(puVar2 + -0x30) + 0x74) =
             *(uint *)(*(int *)(puVar2 + -0x30) + 0x74) | 0x40;
      }
      else {
        *(int *)(puVar2 + -0x34) = ar4;
        pdVar1 = (double *)0x74;
        *(uint *)(*(int *)(puVar2 + -0x34) + 0x74) =
             *(uint *)(*(int *)(puVar2 + -0x34) + 0x74) | 0x20;
      }
    }
    else {
      *(int *)(puVar2 + -0x38) = ar4;
      *(uint *)(*(int *)(puVar2 + -0x38) + 0x74) = *(uint *)(*(int *)(puVar2 + -0x38) + 0x74) | 0x10
      ;
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(fVar8,fVar6 + fVar8);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      pdVar1 = (double *)(ar4 + 0x34);
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar4,0));
      }
      else {
        dVar4 = *pdVar1;
      }
      if (in_FPSCR_PR == '\0') {
        bVar9 = SUB84(dVar7,0) < (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        bVar9 = dVar7 < dVar4;
      }
      if (!bVar9) {
        *(int *)(puVar2 + -0x3c) = ar4;
        pdVar1 = (double *)0x74;
        *(uint *)(*(int *)(puVar2 + -0x3c) + 0x74) =
             *(uint *)(*(int *)(puVar2 + -0x3c) + 0x74) | 0x20;
      }
    }
  }
  return pdVar1;
}



/* FUN_8c0f528c @ 8c0f528c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f528c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd10;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = in_fr4;
    *(undefined4 *)(ar4 + 0x34) = in_fr5;
    *(undefined4 *)(ar4 + 0x38) = in_fr6;
    *(undefined4 *)(ar4 + 0x50) = in_fr7;
    *(undefined4 *)(ar4 + 0x54) = in_fr8;
    *(undefined4 *)(ar4 + 0x58) = in_fr9;
    *(undefined4 *)(ar4 + 0x5c) = in_fr10;
    *(undefined4 *)(ar4 + 0x60) = in_fr11;
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x34) = in_xd4;
    *(ulonglong *)(ar4 + 0x38) = CONCAT44(in_fr6,in_fr7);
    *(undefined8 *)(ar4 + 0x50) = in_xd6;
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(in_fr8,in_fr9);
    *(undefined8 *)(ar4 + 0x58) = in_xd8;
    *(ulonglong *)(ar4 + 0x5c) = CONCAT44(in_fr10,in_fr11);
    *(undefined8 *)(ar4 + 0x60) = in_xd10;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 100) = in_stack_00000000;
  }
  else {
    *(undefined8 *)(ar4 + 100) = CONCAT44(in_stack_00000004,in_stack_00000000);
  }
  return 0;
}



/* FUN_8c0f52c8 @ 8c0f52c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f52c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  undefined8 in_dr4;
  undefined4 in_PR;
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
  *(undefined4 *)(puVar2 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0xc) = (int)((ulonglong)in_dr4 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar2 + -0xc) = in_dr4;
  }
  uVar1 = (*(code *)PTR_FUN_8c0f5304)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5308 @ 8c0f5308 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5308(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0f5328)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f532c @ 8c0f532c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f532c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_8c0f5360 + ar4) = ar5;
  *(undefined4 *)(DAT_8c0f5364 + ar4) = ar6;
  uVar1 = (**(code **)(**(int **)(DAT_8c0f5364 + ar4) + 0x24))
                    (*(int **)(DAT_8c0f5364 + ar4),*(undefined4 *)(DAT_8c0f5360 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5368 @ 8c0f5368 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5368(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_8c0f5394 + ar4) + 0xc))
                    (*(int **)(DAT_8c0f5394 + ar4),ar4 + 0x30,ar4 + 0x50,
                     *(undefined4 *)(DAT_8c0f5390 + ar4));
  return uVar1;
}



/* FUN_8c0f5398 @ 8c0f5398 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

ulonglong * FUN_8c0f5398(undefined4 ar4,double *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar4;
  uint in_fr1;
  double dVar5;
  double in_dr12;
  double in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar6;
  int iVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar4 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar4 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar4 + -0xc) = in_PR;
  *(undefined4 *)((int)pdVar4 + -0x20) = ar4;
  if (ar6 == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(DAT_8c0f5480._4_4_,(undefined4)DAT_8c0f5480);
      in_dr12 = (double)CONCAT44(DAT_8c0f548c,DAT_8c0f5488);
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c0f5488,DAT_8c0f5480._4_4_);
      in_dr12 = (double)CONCAT44(_DAT_8c0f5490,DAT_8c0f548c);
    }
  }
  else if (ar6 == 1) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(_DAT_8c0f5494,_DAT_8c0f5490);
      in_dr12 = (double)CONCAT44(DAT_8c0f549c,DAT_8c0f5498);
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c0f5498,_DAT_8c0f5494);
      in_dr12 = (double)CONCAT44(_DAT_8c0f54a0,DAT_8c0f549c);
    }
  }
  else if (ar6 == 2) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(_DAT_8c0f54a4,_DAT_8c0f54a0);
      in_dr12 = (double)CONCAT44(DAT_8c0f54ac,DAT_8c0f54a8);
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c0f54a8,_DAT_8c0f54a4);
      in_dr12 = (double)CONCAT44(PTR_rand_8c0f54b0,DAT_8c0f54ac);
    }
  }
  if (ar6 == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar5 = 0;
    }
    else {
      *ar5 = (double)(ulonglong)in_fr1;
    }
    puVar2 = (ulonglong *)((int)ar5 + 4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      *puVar2 = (ulonglong)in_fr1;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + 1) = 0;
    }
    else {
      ar5[1] = (double)(ulonglong)in_fr1;
    }
  }
  else {
    uVar1 = (*(code *)PTR_rand_8c0f54b0)(ar4,ar5,ar6,ar7);
    *(undefined4 *)((int)pdVar4 + -0x10) = uVar1;
    if (in_FPSCR_PR == '\0') {
      iVar6 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    uVar3 = *(undefined4 *)((int)pdVar4 + -0x10);
    uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f54b4)(uVar3,iVar6,ar6,ar7);
    *(undefined4 *)((int)pdVar4 + -0x18) = uVar1;
    if (in_FPSCR_PR == '\0') {
      iVar7 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar7 = (int)in_dr14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar7 + *(int *)((int)pdVar4 + -0x18)),in_fr1);
    }
    else {
      dVar5 = (double)(iVar7 + *(int *)((int)pdVar4 + -0x18));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)ar5 = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *ar5 = dVar5;
    }
    uVar1 = (*(code *)PTR_rand_8c0f54b0)(uVar3,iVar6,ar6,ar7);
    uVar3 = SUB84(dVar5,0);
    *(undefined4 *)((int)pdVar4 + -0x14) = uVar1;
    if (in_FPSCR_PR == '\0') {
      iVar6 = (int)(float)((ulonglong)in_dr12 >> 0x20);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f54b4)
                      (*(undefined4 *)((int)pdVar4 + -0x14),iVar6,ar6,ar7);
    *(undefined4 *)((int)pdVar4 + -0x1c) = uVar1;
    if (in_FPSCR_PR == '\0') {
      iVar6 = (int)(float)((ulonglong)in_dr14 >> 0x20);
    }
    else {
      iVar6 = (int)in_dr14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar6 + *(int *)((int)pdVar4 + -0x1c)),uVar3);
    }
    else {
      dVar5 = (double)(iVar6 + *(int *)((int)pdVar4 + -0x1c));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5 + 1) = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      ar5[1] = dVar5;
    }
    puVar2 = (ulonglong *)(*(int *)((int)pdVar4 + -0x20) + 0x34);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)puVar2;
    }
    else {
      *(ulonglong *)((int)ar5 + 4) = *puVar2;
    }
  }
  return puVar2;
}



/* FUN_8c0f54b8 @ 8c0f54b8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f54b8(undefined4 ar4,ulonglong *ar5,ulonglong *ar6,undefined8 *ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = 0;
  }
  else {
    *ar5 = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = 0;
  }
  else {
    *ar6 = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar7 = DAT_8c0f54cc;
  }
  else {
    *ar7 = CONCAT44(_FUN_8c0f54d0,DAT_8c0f54cc);
  }
  return &DAT_8c0f54cc;
}



/* FUN_8c0f54d0 @ 8c0f54d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f54d0(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x30);
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + 0x34);
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + 0x38);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + 0x30);
    *ar6 = *(undefined8 *)(ar4 + 0x34);
    *ar7 = *(undefined8 *)(ar4 + 0x38);
  }
  return ar4 + 0x34;
}



/* FUN_8c0f54ec @ 8c0f54ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f54ec(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a5;
  undefined4 a6;
  undefined4 a7;
  undefined8 *puVar1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  undefined4 in_xf4;
  undefined4 in_xf6;
  undefined4 in_xf8;
  undefined8 in_xd10;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_28 = (undefined4)in_dr4;
  uStack_20 = (undefined4)in_dr6;
  uStack_18 = (undefined4)in_dr8;
  if (in_FPSCR_SZ == '\0') {
    uStack_2c = (int)((ulonglong)in_dr4 >> 0x20);
    uStack_24 = (int)((ulonglong)in_dr6 >> 0x20);
    uStack_1c = (int)((ulonglong)in_dr8 >> 0x20);
    uStack_14 = (int)((ulonglong)in_dr10 >> 0x20);
    uStack_10 = (int)in_dr10;
    uStack_c = in_PR;
  }
  else {
    uStack_10 = (undefined4)in_xd10;
    uStack_c = (undefined4)((ulonglong)in_xd10 >> 0x20);
    uStack_2c = uStack_28;
    uStack_28 = in_xf4;
    uStack_24 = uStack_20;
    uStack_20 = in_xf6;
    uStack_1c = uStack_18;
    uStack_18 = in_xf8;
    uStack_14 = (int)in_dr10;
  }
  uStack_38 = (ulonglong)(uint)uStack_38;
  a7 = 0xffffffff;
  a6 = 2;
  a5 = ar6;
  uStack_30 = ar5;
  (*(code *)PTR_FUN_8c0f55ac)(ar4,ar6,2,0xffffffff);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0f55b0;
  (*(code *)PTR_FUN_8c0f55b8)(ar4 + DAT_8c0f55b4,a5,a6,a7);
  (*(code *)PTR_FUN_8c0f55c0)(ar4 + DAT_8c0f55bc,a5,a6,a7);
  (*(code *)PTR_FUN_8c0f55c8)(ar4 + DAT_8c0f55c4,a5,a6,a7);
  (*(code *)PTR_noop_0f58a0_8c0f55cc)(ar4,a5,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    puVar1 = (undefined8 *)((int)&uStack_38 + 4);
    uStack_38 = CONCAT44(in_stack_00000000,(uint)uStack_38);
  }
  else {
    uStack_38 = CONCAT44(in_stack_00000004,in_stack_00000000);
    puVar1 = &uStack_38;
  }
  (*(code *)PTR_Class_12c058_m1_0f5660_8c0f55d0)(ar4,*(undefined4 *)((int)puVar1 + 4),a6,a7);
  if (ar6 == 0x10) {
    *(undefined4 *)(DAT_8c0f55d4 + ar4) = 0;
  }
  return ar4;
}



/* Class_12c058_m0_0f55d8 @ 8c0f55d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c058_m0_0f55d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0f563c;
    (*(code *)PTR_Class_129938_m0_017084_8c0f5644)(ar4 + DAT_8c0f5640,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0f564c)(ar4 + DAT_8c0f5648,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0f5654)(ar4 + DAT_8c0f5650,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_12c1f0_m0_0f4108_8c0f5658)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0f565c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12c058_m1_0f5660 @ 8c0f5660 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12c058_m1_0f5660(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  undefined4 in_xf4;
  undefined4 in_xf6;
  undefined4 in_xf8;
  undefined8 in_xd10;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_2c = ar5;
  uStack_24 = (undefined4)in_dr4;
  uStack_1c = (undefined4)in_dr6;
  uStack_14 = (undefined4)in_dr8;
  if (in_FPSCR_SZ == '\0') {
    puVar2 = auStack_30;
    uStack_28 = (int)((ulonglong)in_dr4 >> 0x20);
    uStack_20 = (int)((ulonglong)in_dr6 >> 0x20);
    uStack_18 = (int)((ulonglong)in_dr8 >> 0x20);
    uStack_10 = (int)((ulonglong)in_dr10 >> 0x20);
    uStack_c = (int)in_dr10;
    uStack_8 = in_PR;
  }
  else {
    uStack_c = (undefined4)in_xd10;
    uStack_8 = (undefined4)((ulonglong)in_xd10 >> 0x20);
    puVar2 = auStack_34;
    uStack_28 = uStack_24;
    uStack_24 = in_xf4;
    uStack_20 = uStack_1c;
    uStack_1c = in_xf6;
    uStack_18 = uStack_14;
    uStack_14 = in_xf8;
    uStack_10 = (int)in_dr10;
  }
  (*(code *)PTR_CAnimal_m1_0f41c8_8c0f56d8)(ar4,*(undefined4 *)(puVar2 + 4),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0f56e4)(ar4,DAT_8c0f56e0,ar4 + DAT_8c0f56dc,ar7);
  return uVar1;
}



/* FUN_8c0f56e8 @ 8c0f56e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f56e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0f5724,*(undefined4 *)(ar4 + 0x34));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x34);
    dVar2 = (double)CONCAT44(DAT_8c0f5728,DAT_8c0f5724);
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x34) = fVar1;
    fVar1 = *(float *)(ar4 + 0x34);
    fVar3 = DAT_8c0f5728;
  }
  else {
    *(undefined8 *)(ar4 + 0x34) = in_xd0;
    fVar1 = DAT_8c0f5728;
    fVar3 = DAT_8c0f572c;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fVar3) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & (uint)DAT_8c0f572c;
  }
  return 1;
}



/* FUN_8c0f5730 @ 8c0f5730 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5730(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + DAT_8c0f5750) + 8))((int *)(ar4 + DAT_8c0f5750),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5754 @ 8c0f5754 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5754(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0f5778)(ar4 + DAT_8c0f5774,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f577c @ 8c0f577c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f577c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0f57d8)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f57dc)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f57e0)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f57e8)(ar4 + DAT_8c0f57e4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0f57ec)(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f57f0 @ 8c0f57f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f57f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0f585c)(ar4 + DAT_8c0f5858,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0f5860)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5864)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5868)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5870)(ar4 + DAT_8c0f586c,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0f5874)(1,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_24_0f5878 @ 8c0f5878 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_24_0f5878(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}



/* FUN_8c0f5880 @ 8c0f5880 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f5880(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0f588c;
}



/* FUN_8c0f5890 @ 8c0f5890 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f5890(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + DAT_8c0f589c;
}



/* noop_0f58a0 @ 8c0f58a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f58a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0f58a4 @ 8c0f58a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f58a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  
  a6 = 3;
  a5 = 0xf;
  (*(code *)PTR_FUN_8c0f5a04)(ar4,0xf,3,ar5);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0f5a08;
  (*(code *)PTR_FUN_8c0f5a10)(ar4 + DAT_8c0f5a0c,a5,a6,ar5);
  (*(code *)PTR_FUN_8c0f5a18)(ar4 + DAT_8c0f5a14,a5,a6,ar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0f5a20)(ar4 + DAT_8c0f5a1c,a5,a6,ar5);
  (*(code *)PTR_FUN_8c0f5a28)(ar4 + DAT_8c0f5a24,a5,a6,ar5);
  *(undefined1 *)(DAT_8c0f5a2c + ar4) = 0;
  *DAT_8c0f5a30 = 0;
  DAT_8c0f5a30[1] = 0;
  DAT_8c0f5a30[2] = 0x7f;
  DAT_8c0f5a30[3] = 0;
  DAT_8c0f5a30[4] = 0x7f;
  DAT_8c0f5a30[5] = 0x7f;
  DAT_8c0f5a30[6] = 0;
  DAT_8c0f5a30[7] = 0x7f;
  DAT_8c0f5a30[8] = 0x7f;
  DAT_8c0f5a30[9] = 0;
  DAT_8c0f5a30[10] = (short)DAT_8c0f5a34;
  DAT_8c0f5a30[0xb] = 0;
  DAT_8c0f5a30[0xc] = (short)DAT_8c0f5a34;
  DAT_8c0f5a30[0xd] = 0x7f;
  DAT_8c0f5a30[0xe] = 0x7f;
  DAT_8c0f5a30[0xf] = 0x7f;
  DAT_8c0f5a30[0x10] = 0;
  DAT_8c0f5a30[0x11] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x12] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x13] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x14] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x15] = (short)DAT_8c0f5a34;
  DAT_8c0f5a30[0x16] = 0;
  DAT_8c0f5a30[0x17] = (short)DAT_8c0f5a34;
  DAT_8c0f5a30[0x18] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x19] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x1a] = (short)DAT_8c0f5a34;
  DAT_8c0f5a30[0x1b] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x1c] = (short)DAT_8c0f5a34;
  DAT_8c0f5a30[0x1d] = (short)DAT_8c0f5a34;
  DAT_8c0f5a30[0x1e] = (short)DAT_8c0f5a38;
  DAT_8c0f5a30[0x1f] = (short)DAT_8c0f5a34;
  (*(code *)PTR_FUN_8c0f5a3c)(ar4,a5,a6,ar5);
  (*(code *)PTR_FUN_8c0f5a44)(ar4,DAT_8c0f5a40,ar4 + DAT_8c0f5a24,ar5);
  return ar4;
}



/* Class_12bec0_m0_0f5a48 @ 8c0f5a48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12bec0_m0_0f5a48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0f5aac;
    (*(code *)PTR_Class_129938_m0_017084_8c0f5ab4)(ar4 + DAT_8c0f5ab0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0f5abc)(ar4 + DAT_8c0f5ab8,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0f5ac4)(ar4 + DAT_8c0f5ac0,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_12c1f0_m0_0f4108_8c0f5ac8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0f5acc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0f5ad0 @ 8c0f5ad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5ad0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c0f5b04 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0f5b08) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0f5b08) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0f5b0c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0f5b0c) = (ulonglong)in_fr1;
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  return 0x74;
}



/* s_Failed_to_load_textuer_FOOD_0f5b18 @ 8c0f5b10 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f5b40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_Failed_to_load_textuer_FOOD_0f5b18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined *a6;
  undefined4 a6_00;
  undefined4 a7;
  uint uVar3;
  float fVar4;
  double dVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a7 = 4;
  iVar1 = ar4 + DAT_8c0f5c3c;
  puVar2 = PTR_DAT_8c0f5c38;
  a6 = PTR_DAT_8c0f5c34;
  (*(code *)PTR_FUN_8c0f5c40)(iVar1,PTR_DAT_8c0f5c38,PTR_DAT_8c0f5c34,4);
  iVar1 = (*(code *)PTR_rand_8c0f5c44)(iVar1,puVar2,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0f5c48,(float)iVar1);
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c0f5c4c,DAT_8c0f5c48);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0f5c4c,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(_DAT_8c0f5c50,DAT_8c0f5c4c);
  }
  if (in_FPSCR_PR == '\0') {
    iVar1 = (int)(SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar5 * dVar5);
  }
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
    a6_00 = 4;
    iVar1 = iVar1 * 0x10 + _DAT_8c0f5c50;
    (*(code *)PTR_FUN_8c0f5c54)(ar4 + DAT_8c0f5c3c,iVar1,4,a7);
  }
  else {
    a6_00 = 4;
    iVar1 = _DAT_8c0f5c50 + 0x30;
    (*(code *)PTR_FUN_8c0f5c54)(ar4 + DAT_8c0f5c3c,iVar1,4,a7);
  }
  (*(code *)PTR_FUN_8c0f5c58)(ar4 + DAT_8c0f5c3c,iVar1,a6_00,a7);
  (*(code *)PTR_FUN_8c0f5c5c)(ar4 + DAT_8c0f5c3c,iVar1,a6_00,a7);
  (*(code *)PTR_FUN_8c0f5c60)(ar4 + DAT_8c0f5c3c,iVar1,a6_00,a7);
  puVar2 = PTR_PTR_8c0f5c64;
  (**(code **)(*(int *)(ar4 + DAT_8c0f5c68) + 8))
            ((int *)(ar4 + DAT_8c0f5c68),PTR_PTR_8c0f5c64,a6_00,a7);
  iVar1 = (*(code *)PTR_get_field_4_0253e4_8c0f5c6c)(ar4 + DAT_8c0f5c68,puVar2,a6_00,a7);
  for (uVar3 = 0; uVar3 < *(uint *)(iVar1 + 4); uVar3 = uVar3 + 1) {
  }
  iVar1 = (*(code *)PTR_FUN_8c0f5c78)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f5c70 + DAT_8c0f5c74,
                     PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f5c70,iVar1);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_report_error_message_8c0f5c84)
                      (PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f5c70 + DAT_8c0f5c80,
                       PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f5c70 + DAT_8c0f5c7c,0,2);
  }
  return iVar1;
}



/* s_Failed_to_load_textuer_FO_wrap_0f5c88 @ 8c0f5c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_load_textuer_FO_wrap_0f5c88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_load_textuer_FOOD_0f5b18_8c0f5ca4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12bec0_m2_0f5ca8 @ 8c0f5ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bec0_m2_0f5ca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a7;
  
  a7 = ar7;
  (**(code **)(*(int *)(ar4 + 8) + 0x28))(ar4,ar7,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5d08)(ar4,ar7,ar6,a7);
  iVar1 = (*(code *)PTR_get_field_6c_02f46c_8c0f5d0c)(ar4,ar7,ar6,a7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_get_field_70_05f490_8c0f5d10)(ar4,ar7,ar6,a7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c0f5d14)(ar4,ar7,ar6,a7);
    }
  }
  (*(code *)PTR_FUN_8c0f5d18)(ar4,ar7,ar6,a7);
  return 1;
}



/* Class_12bec0_m3_0f5d1c @ 8c0f5d1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bec0_m3_0f5d1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a7;
  
  a7 = ar7;
  (**(code **)(*(int *)(ar4 + 8) + 0x28))(ar4,ar7,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_6c_02f46c_8c0f5d70)(ar4,ar7,ar6,a7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_get_field_70_05f490_8c0f5d74)(ar4,ar7,ar6,a7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c0f5d78)(ar4,ar7,ar6,a7);
    }
  }
  (*(code *)PTR_FUN_8c0f5d7c)(ar4,ar7,ar6,a7);
  return 1;
}



/* FUN_8c0f5d80 @ 8c0f5d80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5d80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5d98 @ 8c0f5d98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5d98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}



/* FUN_8c0f5de8 @ 8c0f5de8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f5de8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0f5e04)(ar4,ar5,ar6,ar7);
  iVar1 = DAT_8c0f5e08;
  *(undefined4 *)(DAT_8c0f5e08 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0f5e0c @ 8c0f5e0c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f5e64) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5e0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0;
  double dVar3;
  int iVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_4c;
  
  (*(code *)PTR_FUN_8c0f5ecc)((int)&uStack_4c + 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5ed0)(0,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0f5ed4)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5ed8)(uVar1,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_4c = CONCAT44(uStack_4c._4_4_,uVar1);
    dVar3 = (double)CONCAT44(DAT_8c0f5edc,uVar1);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0f5ee0,DAT_8c0f5edc);
    uStack_4c = in_dr0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f5ee0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0f5ee4,DAT_8c0f5ee0);
  }
  if (in_FPSCR_PR == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f5ee4,(float)iVar4);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0f5ee8,DAT_8c0f5ee4);
  }
  if (in_FPSCR_PR == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 - dVar3);
  }
  (*(code *)PTR_FUN_8c0f5ee8)(0,iVar4,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5eec)(0,iVar4,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5ef4)(ar4 + DAT_8c0f5ef0,iVar4,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0f5ef8)(ar4 + DAT_8c0f5ef0,0,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5f00)(ar4 + DAT_8c0f5efc,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0f5f04)(1,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5f08 @ 8c0f5f08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5f08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0f5f40)(ar4 + DAT_8c0f5f3c,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0f5f44)(ar4 + DAT_8c0f5f3c,0,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0f5f4c)(ar4 + DAT_8c0f5f48,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5f50 @ 8c0f5f50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5f50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x40))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5f6c @ 8c0f5f6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5f6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x40))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5f88 @ 8c0f5f88 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f5f88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5f90;
}



/* FUN_8c0f5f94 @ 8c0f5f94 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f5f94(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5f9c;
}



/* FUN_8c0f5fa0 @ 8c0f5fa0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f5fa0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5fa8;
}



/* FUN_8c0f5fac @ 8c0f5fac callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f5fac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5fb4;
}



/* noop_0f5fb8 @ 8c0f5fb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f5fb8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0f5fbc @ 8c0f5fbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5fbc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0f5fd8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f5fdc @ 8c0f5fdc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f6498) */
/* WARNING: Removing unreachable block (ram,0x8c0f65b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5fdc(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *a5;
  undefined *puVar6;
  undefined1 *a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 uVar7;
  undefined4 unaff_r14;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined4 uVar13;
  double in_dr14;
  double dVar14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
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
  *(undefined4 *)((int)puVar8 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar8 + -0x10) = in_PR;
  piVar4 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0f604c)
            ((undefined1 *)((int)puVar8 + DAT_8c0f6048 + -0xf8),ar5,ar6,ar7);
  uVar7 = 0;
  (*(code *)PTR_Vec3_ctor_zero_8c0f604c)
            ((undefined1 *)((int)puVar8 + DAT_8c0f6050 + -0xf8),piVar4,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f604c)
            ((undefined1 *)((int)puVar8 + DAT_8c0f6054 + -0xf8),piVar4,ar6,ar7);
  a6 = (undefined1 *)((int)puVar8 + DAT_8c0f6054 + -0xf8);
  piVar4 = ar5;
  (**(code **)(DAT_8c0f6058 + *ar5))(ar5,(undefined1 *)((int)puVar8 + DAT_8c0f6050 + -0xf8),a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)((int)puVar8 + DAT_8c0f6050 + -0xf8),
                      *(undefined4 *)(ar4 + 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x30);
    uVar11 = *(ulonglong *)((int)puVar8 + DAT_8c0f6050 + -0xf8);
  }
  if (in_FPSCR_PR == '\0' && (float)(uVar11 >> 0x20) < (float)uVar11) {
    piVar4 = (int *)(ar4 + 0x30);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(*(undefined4 *)((int)puVar8 + DAT_8c0f609c + -0xf8),*piVar4);
    }
    else {
      in_xd0 = *(undefined8 *)piVar4;
      uVar11 = *(ulonglong *)((int)puVar8 + DAT_8c0f609c + -0xf8);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
      if (in_FPSCR_SZ == '\0') {
        uVar11 = (ulonglong)*(uint *)((int)puVar8 + DAT_8c0f609c + -0xf8);
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c0f609c + -0xf8);
      }
      dVar12 = (double)CONCAT44(0x3f800000,(float)uVar11);
      if (in_FPSCR_PR == '\0') {
        fVar9 = (float)uVar11 - 1.0;
      }
      else {
        fVar9 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x30) = fVar9;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      uVar11 = (ulonglong)*(uint *)((int)puVar8 + DAT_8c0f6050 + -0xf8);
    }
    else {
      in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c0f6050 + -0xf8);
    }
    dVar12 = (double)CONCAT44(0x3f800000,(float)uVar11);
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)uVar11 + 1.0;
    }
    else {
      fVar9 = SUB84(dVar12 + dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
  }
  a5 = (undefined8 *)(ar4 + 0x38);
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)((int)puVar8 + DAT_8c0f60a0 + -0xf8),*(undefined4 *)a5);
  }
  else {
    in_xd0 = *a5;
    uVar11 = *(ulonglong *)((int)puVar8 + DAT_8c0f60a0 + -0xf8);
  }
  if (in_FPSCR_PR == '\0' && (float)(uVar11 >> 0x20) < (float)uVar11) {
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + DAT_8c0f60e0 + -0xf8),
                                *(undefined4 *)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x38);
      dVar12 = *(double *)((int)puVar8 + DAT_8c0f60e0 + -0xf8);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar12 >> 0x20) <= SUB84(dVar12,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)(ulonglong)*(uint *)((int)puVar8 + DAT_8c0f60e0 + -0xf8);
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c0f60e0 + -0xf8);
      }
      dVar14 = (double)CONCAT44(0x3f800000,SUB84(dVar12,0));
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(0x3f800000,SUB84(dVar12,0) - 1.0);
      }
      else {
        dVar12 = dVar14 - dVar14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x38) = SUB84(dVar12,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    piVar4 = (int *)(ar4 + 0x38);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = (ulonglong)*(uint *)((int)puVar8 + DAT_8c0f60a0 + -0xf8);
    }
    else {
      in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c0f60a0 + -0xf8);
    }
    dVar12 = (double)CONCAT44(0x3f800000,(float)uVar11);
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(0x3f800000,(float)uVar11 + 1.0);
    }
    else {
      dVar12 = dVar12 + dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      *piVar4 = SUB84(dVar12,0);
    }
    else {
      *(undefined8 *)piVar4 = in_xd0;
    }
  }
  iVar1 = *(int *)(DAT_8c0f60e4 + ar4);
  if (iVar1 == 0) {
    if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
      uVar10 = (*(code *)PTR_rand_8c0f6240)(piVar4,a5,a6,ar7);
      uVar13 = SUB84(in_dr14,0);
      fVar9 = SUB84(dVar12,0);
      *(undefined4 *)((int)puVar8 + DAT_8c0f6244 + -0xf8) = uVar10;
      uVar10 = (*(code *)PTR_rand_8c0f6240)(piVar4,a5,a6,ar7);
      *(undefined4 *)((int)puVar8 + DAT_8c0f6248 + -0xf8) = uVar10;
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f624c)
                         (*(undefined4 *)((int)puVar8 + DAT_8c0f6244 + -0xf8),0x14,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xa8) = uVar10;
      uVar3 = 0x14;
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f624c)
                         (*(undefined4 *)((int)puVar8 + DAT_8c0f6248 + -0xf8),0x14,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xac) = uVar10;
      (*(code *)PTR_FUN_8c0f6254)(ar4 + DAT_8c0f6250,uVar3,a6,ar7);
      iVar1 = ar4 + DAT_8c0f6250;
      puVar6 = PTR_DAT_8c0f6258;
      (*(code *)PTR_FUN_8c0f625c)(iVar1,PTR_DAT_8c0f6258,a6,ar7);
      uVar10 = (*(code *)PTR_rand_8c0f6240)(iVar1,puVar6,a6,ar7);
      *(undefined4 *)((int)puVar8 + DAT_8c0f6260 + -0xf8) = uVar10;
      uVar2 = 2;
      uVar3 = *(undefined4 *)((int)puVar8 + DAT_8c0f6260 + -0xf8);
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f624c)(uVar3,2,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xb0) = uVar10;
      if (*(int *)((int)puVar8 + -0xb0) == 0) {
        *(int *)((int)puVar8 + -0xb4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0f6264,
                                    *(undefined4 *)(*(int *)((int)puVar8 + -0xb4) + DAT_8c0f6250));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0xb4) + DAT_8c0f6250);
          dVar12 = (double)CONCAT44(_DAT_8c0f6268,DAT_8c0f6264);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 * dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar8 + -0xb4) + DAT_8c0f6250) = fVar9;
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar8 + -0xb4) + DAT_8c0f6250) = in_xd0;
        }
      }
      uVar10 = (*(code *)PTR_rand_8c0f6240)(uVar3,uVar2,a6,ar7);
      *(undefined4 *)((int)puVar8 + _DAT_8c0f6268 + -0xf8) = uVar10;
      uVar2 = 2;
      uVar3 = *(undefined4 *)((int)puVar8 + _DAT_8c0f6268 + -0xf8);
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f624c)(uVar3,2,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xb8) = uVar10;
      if (*(int *)((int)puVar8 + -0xb8) == 0) {
        *(int *)((int)puVar8 + -0xbc) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0f6264,
                                    *(undefined4 *)(*(int *)((int)puVar8 + -0xbc) + DAT_8c0f626c));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0xbc) + DAT_8c0f626c);
          dVar12 = (double)CONCAT44(_DAT_8c0f6268,DAT_8c0f6264);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 * dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar8 + -0xbc) + DAT_8c0f626c) = fVar9;
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar8 + -0xbc) + DAT_8c0f626c) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f6270) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f6270) = uVar11;
      }
      uVar10 = (*(code *)PTR_rand_8c0f6240)(uVar3,uVar2,a6,ar7);
      uVar3 = (undefined4)uVar11;
      *(undefined4 *)((int)puVar8 + DAT_8c0f6274 + -0xf8) = uVar10;
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f624c)
                         (*(undefined4 *)((int)puVar8 + DAT_8c0f6274 + -0xf8),0x14,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xc0) = uVar10;
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((float)*(int *)((int)puVar8 + -0xc0),uVar13);
      }
      else {
        dVar14 = (double)*(int *)((int)puVar8 + -0xc0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0f627c,uVar3);
      }
      else {
        dVar12 = (double)CONCAT44(DAT_8c0f6280,DAT_8c0f627c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) /
                                  (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 / dVar12;
      }
      dVar12 = (double)CONCAT44(0x3f800000,SUB84(dVar12,0));
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + 1.0,SUB84(dVar14,0));
      }
      else {
        in_dr14 = dVar14 + dVar12;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0f6278) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c0f6278) = in_dr14;
      }
      *(int *)((int)puVar8 + -0xc4) = ar4;
      *(int *)(DAT_8c0f6280 + *(int *)((int)puVar8 + -0xc4)) =
           *(int *)(DAT_8c0f6280 + *(int *)((int)puVar8 + -0xc4)) + 1;
    }
    else {
      uVar10 = (*(code *)PTR_rand_8c0f6438)(piVar4,a5,a6,ar7);
      uVar13 = SUB84(in_dr14,0);
      fVar9 = SUB84(dVar12,0);
      *(undefined4 *)((int)puVar8 + -0x7c) = uVar10;
      uVar10 = (*(code *)PTR_rand_8c0f6438)(piVar4,a5,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0x80) = uVar10;
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f643c)
                         (*(undefined4 *)((int)puVar8 + -0x7c),0x32,a6,ar7);
      *(undefined4 *)((int)puVar8 + -200) = uVar10;
      uVar3 = 0x32;
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f643c)
                         (*(undefined4 *)((int)puVar8 + -0x80),0x32,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xcc) = uVar10;
      (*(code *)PTR_FUN_8c0f6444)(ar4 + DAT_8c0f6440,uVar3,a6,ar7);
      iVar1 = ar4 + DAT_8c0f6440;
      puVar6 = PTR_DAT_8c0f6448;
      (*(code *)PTR_FUN_8c0f644c)(iVar1,PTR_DAT_8c0f6448,a6,ar7);
      uVar10 = (*(code *)PTR_rand_8c0f6438)(iVar1,puVar6,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0x84) = uVar10;
      uVar2 = 2;
      uVar3 = *(undefined4 *)((int)puVar8 + -0x84);
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f643c)(uVar3,2,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xd0) = uVar10;
      if (*(int *)((int)puVar8 + -0xd0) == 0) {
        *(int *)((int)puVar8 + -0xd4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0f6450,
                                    *(undefined4 *)(*(int *)((int)puVar8 + -0xd4) + DAT_8c0f6440));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0xd4) + DAT_8c0f6440);
          dVar12 = (double)CONCAT44(_DAT_8c0f6454,DAT_8c0f6450);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 * dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar8 + -0xd4) + DAT_8c0f6440) = fVar9;
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar8 + -0xd4) + DAT_8c0f6440) = in_xd0;
        }
      }
      uVar10 = (*(code *)PTR_rand_8c0f6438)(uVar3,uVar2,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0x88) = uVar10;
      uVar2 = 2;
      uVar3 = *(undefined4 *)((int)puVar8 + -0x88);
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f643c)(uVar3,2,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xd8) = uVar10;
      if (*(int *)((int)puVar8 + -0xd8) == 0) {
        *(int *)((int)puVar8 + -0xdc) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0f6450,
                                    *(undefined4 *)(*(int *)((int)puVar8 + -0xdc) + _DAT_8c0f6454));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0xdc) + _DAT_8c0f6454);
          dVar12 = (double)CONCAT44(_DAT_8c0f6454,DAT_8c0f6450);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 * dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar8 + -0xdc) + _DAT_8c0f6454) = fVar9;
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar8 + -0xdc) + _DAT_8c0f6454) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0f6458) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0f6458) = uVar11;
      }
      uVar10 = (*(code *)PTR_rand_8c0f6438)(uVar3,uVar2,a6,ar7);
      uVar3 = (undefined4)uVar11;
      *(undefined4 *)((int)puVar8 + -0x8c) = uVar10;
      uVar10 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f643c)
                         (*(undefined4 *)((int)puVar8 + -0x8c),0x14,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xe0) = uVar10;
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((float)*(int *)((int)puVar8 + -0xe0),uVar13);
      }
      else {
        dVar14 = (double)*(int *)((int)puVar8 + -0xe0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0f6460,uVar3);
      }
      else {
        dVar12 = (double)CONCAT44(DAT_8c0f6464,DAT_8c0f6460);
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) /
                                  (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 / dVar12;
      }
      dVar12 = (double)CONCAT44(0x3f800000,SUB84(dVar12,0));
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + 1.0,SUB84(dVar14,0));
      }
      else {
        in_dr14 = dVar14 + dVar12;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0f645c) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c0f645c) = in_dr14;
      }
      *(undefined4 *)(DAT_8c0f6464 + ar4) = 2;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar1 = ar4 + 0x30;
      (**(code **)(DAT_8c0f6668 + *ar5))(ar5,iVar1,a6,ar7);
      uVar10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0x9c) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)((int)puVar8 + -0x9c) = dVar12;
      }
      iVar5 = ar4;
      (**(code **)(DAT_8c0f666c + *(int *)(ar4 + 8)))(ar4,iVar1,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0xa0) = (int)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0xa0),
                                  *(undefined4 *)((int)puVar8 + -0x9c));
      }
      else {
        *(double *)((int)puVar8 + -0xa0) = dVar12;
        in_xd0 = *(undefined8 *)((int)puVar8 + -0x9c);
        dVar12 = *(double *)((int)puVar8 + -0xa0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar9);
      }
      else {
        uVar11 = *(ulonglong *)(ar4 + 0x34);
      }
      if (in_FPSCR_PR != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
        iVar5 = ar4 + DAT_8c0f6670;
        (*(code *)PTR_FUN_8c0f6674)(iVar5,iVar1,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0f6678) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0f6678) = uVar11 & 0xffffffff;
        }
        uVar7 = 1;
        uVar11 = uVar11 & 0xffffffff;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(DAT_8c0f667c + ar4) = 0;
        }
        else {
          *(ulonglong *)(DAT_8c0f667c + ar4) = uVar11;
        }
      }
      uVar2 = (undefined4)uVar11;
      uVar3 = (*(code *)PTR_rand_8c0f6680)(iVar5,iVar1,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xa4) = uVar3;
      uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f6684)
                        (*(undefined4 *)((int)puVar8 + -0xa4),100,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0xf0) = uVar3;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0f6688,uVar2);
      }
      else {
        dVar12 = (double)CONCAT44(DAT_8c0f668c,DAT_8c0f6688);
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44(uVar10,(float)*(int *)((int)puVar8 + -0xf0) /
                                         (float)((ulonglong)dVar12 >> 0x20));
      }
      else {
        dVar14 = (double)CONCAT44(uVar10,(float)*(int *)((int)puVar8 + -0xf0)) / dVar12;
      }
      *(int *)((int)puVar8 + -0xf4) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c0f667c + *(int *)((int)puVar8 + -0xf4)),
                                  SUB84(dVar12,0));
      }
      else {
        dVar12 = *(double *)(DAT_8c0f667c + *(int *)((int)puVar8 + -0xf4));
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) + SUB84(dVar14,0),
                                  SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 + dVar14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c0f667c + *(int *)((int)puVar8 + -0xf4)) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)(DAT_8c0f667c + *(int *)((int)puVar8 + -0xf4)) = dVar12;
      }
      *(undefined1 **)((int)puVar8 + -0xfc) = (undefined1 *)((int)puVar8 + DAT_8c0f668c + -0xf8);
      (*(code *)PTR_Vec3_scale_8c0f6690)(ar4 + DAT_8c0f6670,ar4 + DAT_8c0f6678,a6,ar7);
      uVar10 = SUB84(dVar12,0);
      (*(code *)PTR_FUN_8c0f6694)
                (ar4 + 0x30,(undefined1 *)((int)puVar8 + DAT_8c0f668c + -0xf8),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0f6698)
                ((undefined1 *)((int)puVar8 + DAT_8c0f668c + -0xf8),0xffffffff,a6,ar7);
      a6 = DAT_8c0f667c;
      *(int *)((int)puVar8 + -0xf8) = ar4;
      if (in_FPSCR_SZ == '\0') {
        uVar10 = *(undefined4 *)(*(int *)((int)puVar8 + -0xf8) + 0x34);
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0xf8) + 0x34);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c0f667c + ar4),uVar10);
      }
      else {
        dVar12 = *(double *)(DAT_8c0f667c + ar4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar8 + -0xf8) + 0x34) = fVar9;
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar8 + -0xf8) + 0x34) = in_xd0;
      }
    }
    goto LAB_8c0f6620;
  }
  uVar10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  iVar1 = ar4 + 0x30;
  (**(code **)(DAT_8c0f6468 + *ar5))(ar5,iVar1,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar8 + -0x90) = (int)((ulonglong)dVar12 >> 0x20);
  }
  else {
    *(double *)((int)puVar8 + -0x90) = dVar12;
  }
  iVar5 = ar4;
  (**(code **)(DAT_8c0f646c + *(int *)(ar4 + 8)))(ar4,iVar1,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar8 + -0x94) = (int)((ulonglong)dVar12 >> 0x20);
    dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x94),
                              *(undefined4 *)((int)puVar8 + -0x90));
  }
  else {
    *(double *)((int)puVar8 + -0x94) = dVar12;
    in_xd0 = *(undefined8 *)((int)puVar8 + -0x90);
    dVar12 = *(double *)((int)puVar8 + -0x94);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 + dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar9);
  }
  else {
    uVar11 = *(ulonglong *)(ar4 + 0x34);
  }
  if (in_FPSCR_PR != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
    iVar5 = ar4 + DAT_8c0f6440;
    (*(code *)PTR_FUN_8c0f6444)(iVar5,iVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0f645c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0f645c) = uVar11 & 0xffffffff;
    }
    uVar7 = 1;
    uVar11 = uVar11 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0f6458) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0f6458) = uVar11;
    }
  }
  uVar3 = (undefined4)uVar11;
  if ((*(uint *)(ar4 + 0x74) & 0x10) == 0x10) {
    *(undefined4 *)(DAT_8c0f6464 + ar4) = 2;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0f645c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0f645c) = uVar11 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0f6458) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0f6458) = uVar11 & 0xffffffff;
    }
    (*(code *)PTR_FUN_8c0f6474)(ar4 + DAT_8c0f6440,PTR_DAT_8c0f6470,a6,ar7);
  }
  else {
    uVar2 = (*(code *)PTR_rand_8c0f6504)(iVar5,iVar1,a6,ar7);
    *(undefined4 *)((int)puVar8 + -0x98) = uVar2;
    uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f6508)
                      (*(undefined4 *)((int)puVar8 + -0x98),100,a6,ar7);
    *(undefined4 *)((int)puVar8 + -0xe4) = uVar2;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0f650c,uVar3);
    }
    else {
      dVar12 = (double)CONCAT44(DAT_8c0f6510,DAT_8c0f650c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44(uVar10,(float)*(int *)((int)puVar8 + -0xe4) /
                                       (float)((ulonglong)dVar12 >> 0x20));
    }
    else {
      dVar14 = (double)CONCAT44(uVar10,(float)*(int *)((int)puVar8 + -0xe4)) / dVar12;
    }
    *(int *)((int)puVar8 + -0xe8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar8 + -0xe8) + DAT_8c0f6510),
                                SUB84(dVar12,0));
    }
    else {
      dVar12 = *(double *)(*(int *)((int)puVar8 + -0xe8) + DAT_8c0f6510);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) + SUB84(dVar14,0),SUB84(dVar12,0)
                               );
    }
    else {
      dVar12 = dVar12 + dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar8 + -0xe8) + DAT_8c0f6510) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      *(double *)(*(int *)((int)puVar8 + -0xe8) + DAT_8c0f6510) = dVar12;
    }
    *(undefined1 **)((int)puVar8 + -0xfc) = (undefined1 *)((int)puVar8 + DAT_8c0f6514 + -0xf8);
    (*(code *)PTR_Vec3_scale_8c0f6520)(ar4 + DAT_8c0f651c,ar4 + DAT_8c0f6518,a6,ar7);
    uVar10 = SUB84(dVar12,0);
    (*(code *)PTR_FUN_8c0f6524)
              (ar4 + 0x30,(undefined1 *)((int)puVar8 + DAT_8c0f6514 + -0xf8),a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0f6528)
              ((undefined1 *)((int)puVar8 + DAT_8c0f6514 + -0xf8),0xffffffff,a6,ar7);
    *(int *)((int)puVar8 + -0xec) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)(*(int *)((int)puVar8 + -0xec) + 0x34);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0xec) + 0x34);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0f6510),uVar10);
    }
    else {
      dVar12 = *(double *)(ar4 + DAT_8c0f6510);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 - dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar8 + -0xec) + 0x34) = fVar9;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar8 + -0xec) + 0x34) = in_xd0;
    }
  }
LAB_8c0f6620:
  *(undefined4 *)((int)puVar8 + DAT_8c0f669c + -0xf8) = uVar7;
  (*(code *)PTR_Vec3_dtor_8c0f6698)
            ((undefined1 *)((int)puVar8 + DAT_8c0f66a0 + -0xf8),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0f6698)
            ((undefined1 *)((int)puVar8 + DAT_8c0f66a4 + -0xf8),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0f6698)
            ((undefined1 *)((int)puVar8 + DAT_8c0f66a8 + -0xf8),0xffffffff,a6,ar7);
  return *(undefined4 *)((int)puVar8 + DAT_8c0f669c + -0xf8);
}



/* FUN_8c0f66ac @ 8c0f66ac callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

ulonglong * FUN_8c0f66ac(undefined4 ar4,double *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 a4;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar4;
  double in_dr0;
  double dVar5;
  double dVar6;
  float fVar7;
  double in_dr12;
  double in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar8;
  int iVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  uVar2 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar4 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),uVar2);
  }
  else {
    pdVar4 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar4 + -0xc) = in_PR;
  *(undefined4 *)((int)pdVar4 + -0x20) = ar4;
  if (ar6 == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(DAT_8c0f67a4._4_4_,(undefined4)DAT_8c0f67a4);
      in_dr12 = (double)CONCAT44(uVar2,DAT_8c0f67ac);
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c0f67ac,DAT_8c0f67a4._4_4_);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) - SUB84(in_dr14,0)
                              );
    }
    else {
      dVar6 = in_dr12 - in_dr14;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0f67b0,SUB84(in_dr0,0));
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0f67b4,DAT_8c0f67b0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar6,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar6 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0f67b4,fVar7);
    }
    else {
      dVar6 = (double)CONCAT44(_DAT_8c0f67b8,DAT_8c0f67b4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                               (float)((ulonglong)in_dr14 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - in_dr14;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0f67b0,SUB84(dVar5,0));
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c0f67b4,DAT_8c0f67b0);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr12 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 (float)((ulonglong)in_dr0 >> 0x20),SUB84(dVar6,0));
    }
    else {
      in_dr12 = dVar6 - in_dr0;
    }
  }
  else if (ar6 == 1) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(_DAT_8c0f67bc,_DAT_8c0f67b8);
      in_dr12 = (double)CONCAT44(DAT_8c0f67c4,DAT_8c0f67c0);
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c0f67c0,_DAT_8c0f67bc);
      in_dr12 = (double)CONCAT44(_DAT_8c0f67c8,DAT_8c0f67c4);
    }
  }
  else if (ar6 == 2) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(_DAT_8c0f67cc,_DAT_8c0f67c8);
      in_dr12 = (double)CONCAT44(DAT_8c0f67d4,DAT_8c0f67d0);
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c0f67d0,_DAT_8c0f67cc);
      in_dr12 = (double)CONCAT44(PTR_rand_8c0f67d8,DAT_8c0f67d4);
    }
  }
  uVar2 = SUB84(in_dr0,0);
  if (ar6 == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)ar5 = 0;
    }
    else {
      *ar5 = (double)((ulonglong)in_dr0 & 0xffffffff);
    }
    puVar3 = (ulonglong *)((int)ar5 + 4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar3 = 0;
    }
    else {
      *puVar3 = (ulonglong)in_dr0 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar5 + 1) = 0;
    }
    else {
      ar5[1] = (double)((ulonglong)in_dr0 & 0xffffffff);
    }
  }
  else {
    uVar1 = (*(code *)PTR_rand_8c0f67d8)(ar4,ar5,ar6,ar7);
    *(undefined4 *)((int)pdVar4 + -0x10) = uVar1;
    if (in_FPSCR_PR == '\0') {
      iVar8 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar8 = (int)in_dr12;
    }
    a4 = *(undefined4 *)((int)pdVar4 + -0x10);
    uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f67dc)(a4,iVar8,ar6,ar7);
    *(undefined4 *)((int)pdVar4 + -0x18) = uVar1;
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar9 = (int)in_dr14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)(iVar9 + *(int *)((int)pdVar4 + -0x18)),uVar2);
    }
    else {
      dVar6 = (double)(iVar9 + *(int *)((int)pdVar4 + -0x18));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)ar5 = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *ar5 = dVar6;
    }
    uVar2 = (*(code *)PTR_rand_8c0f67d8)(a4,iVar8,ar6,ar7);
    uVar1 = SUB84(dVar6,0);
    *(undefined4 *)((int)pdVar4 + -0x14) = uVar2;
    if (in_FPSCR_PR == '\0') {
      iVar8 = (int)(float)((ulonglong)in_dr12 >> 0x20);
    }
    else {
      iVar8 = (int)in_dr12;
    }
    uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f67dc)
                      (*(undefined4 *)((int)pdVar4 + -0x14),iVar8,ar6,ar7);
    *(undefined4 *)((int)pdVar4 + -0x1c) = uVar2;
    if (in_FPSCR_PR == '\0') {
      iVar8 = (int)(float)((ulonglong)in_dr14 >> 0x20);
    }
    else {
      iVar8 = (int)in_dr14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)(iVar8 + *(int *)((int)pdVar4 + -0x1c)),uVar1);
    }
    else {
      dVar6 = (double)(iVar8 + *(int *)((int)pdVar4 + -0x1c));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar5 + 1) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      ar5[1] = dVar6;
    }
    puVar3 = (ulonglong *)(*(int *)((int)pdVar4 + -0x20) + 0x34);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)puVar3;
    }
    else {
      *(ulonglong *)((int)ar5 + 4) = *puVar3;
    }
  }
  return puVar3;
}



/* FUN_8c0f67e0 @ 8c0f67e0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f67e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f67e8;
}



/* FUN_8c0f67ec @ 8c0f67ec callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f6826) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f67ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [20];
  
  uVar1 = (*(code *)PTR_rand_8c0f685c)(ar4,ar5,ar6,ar7);
  uVar2 = 3;
  (*(code *)PTR_libgcc_divide_helper_01031c_8c0f6860)(uVar1,3,ar6,ar7);
  uVar1 = (*(code *)PTR_rand_8c0f685c)(uVar1,uVar2,ar6,ar7);
  uVar2 = 3;
  (*(code *)PTR_libgcc_divide_helper_01031c_8c0f6860)(uVar1,3,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c0f6864)(auStack_1c,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0f6868)(ar4 + 0x30,auStack_1c,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0f686c)(auStack_1c,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f6870 @ 8c0f6870 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f6870(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0f68b0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0f68b4)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f68b8)(ar4 + 0x1c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f68b0)(ar4 + 0x34,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f68bc)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0f68c0 @ 8c0f68c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f68c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_Vec3_dtor_8c0f691c)(ar4 + 0x34,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0f6920)(ar4 + 0x1c,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0f6924)(ar4 + 0x10,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0f691c)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0f6928)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0f692c @ 8c0f692c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f692c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 0x28) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x60) = 0x3f800000;
    *(undefined4 *)(ar4 + 0x5c) = 0x3f800000;
    *(undefined4 *)(ar4 + 0x58) = 0x3f800000;
    *(undefined4 *)(ar4 + 0x54) = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x60) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x5c) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(0x3f800000,in_fr1);
  }
  *(undefined4 *)(ar4 + 0x2c) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x30) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x44) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x44) = (ulonglong)in_fr1;
  }
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x48) = 0;
  }
  (*(code *)PTR_vec3_clear_8c0f69e0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f69e4)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f69e8)(ar4 + 0x1c,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 100) = 0;
  return 100;
}



/* FUN_8c0f69ec @ 8c0f69ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f69ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_fr1;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar3 = in_fr5;
  uVar4 = in_fr4;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = in_fr4;
    uVar4 = uStack_24;
  }
  uStack_24 = uVar4;
  uStack_28 = uVar3;
  uVar3 = ar6;
  (*(code *)PTR_Vec3_assign_8c0f6a9c)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uStack_28;
    *(undefined4 *)(ar4 + 0x20) = uStack_28;
    uVar5 = CONCAT44(uStack_28,in_fr1);
    *(undefined4 *)(ar4 + 0x1c) = uStack_28;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = CONCAT44(uStack_24,uStack_28);
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uStack_24,uStack_28);
    uVar5 = CONCAT44(uStack_24,uStack_28);
    *(undefined8 *)(ar4 + 0x1c) = uVar5;
  }
  (*(code *)PTR_Vec3_length_sq_8c0f6aa0)(ar6,ar5,uVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x30) = (int)((ulonglong)uVar5 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = uVar5;
  }
  uVar4 = (undefined4)uVar5;
  uVar1 = (*(code *)PTR_Vec3_length_8c0f6aa4)(ar6,ar5,uVar3,ar7);
  iVar2 = ar4 + 0x34;
  (*(code *)PTR_Vec3_assign_8c0f6a9c)(iVar2,uVar1,uVar3,ar7);
  *(undefined4 *)(ar4 + 0x2c) = 2;
  uVar1 = (*(code *)PTR_rand_8c0f6aa8)(iVar2,uVar1,uVar3,ar7);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f6aac)(uVar1,0x28,uVar3,ar7);
  iVar2 = iVar2 + -0x14;
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)iVar2,uVar4);
  }
  else {
    dVar6 = (double)iVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x18) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x18) = dVar6;
  }
  return iVar2;
}



/* FUN_8c0f6ab0 @ 8c0f6ab0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f6ab0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x2c) != 0) {
    return 1;
  }
  return 0;
}



/* FUN_8c0f6ac4 @ 8c0f6ac4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f6f9c) */
/* WARNING: Removing unreachable block (ram,0x8c0f6e62) */
/* WARNING: Removing unreachable block (ram,0x8c0f6d08) */
/* WARNING: Removing unreachable block (ram,0x8c0f6dc0) */
/* WARNING: Removing unreachable block (ram,0x8c0f6efc) */
/* WARNING: Removing unreachable block (ram,0x8c0f7050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f6ac4(ulonglong *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  float fVar11;
  double dVar10;
  undefined8 in_dr14;
  ulonglong in_xd0;
  undefined8 in_xd14;
  bool bVar12;
  undefined4 in_PR;
  char in_FPSCR_PR;
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
  *(undefined4 *)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar3 + -0x10) = in_PR;
  piVar2 = ar5;
  (*(code *)PTR_FUN_8c0f6b58)((undefined1 *)((int)puVar3 + DAT_8c0f6b54 + -0xe4),ar5,ar6,ar7);
  uVar1 = (undefined4)in_dr14;
  (*(code *)PTR_Vec3_ctor_zero_8c0f6b60)
            ((undefined1 *)((int)puVar3 + DAT_8c0f6b5c + -0xe4),piVar2,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f6b60)
            ((undefined1 *)((int)puVar3 + DAT_8c0f6b64 + -0xe4),piVar2,ar6,ar7);
  a7 = (undefined1 *)((int)puVar3 + DAT_8c0f6b68 + -0xe4);
  a6 = (undefined1 *)((int)puVar3 + DAT_8c0f6b6c + -0xe4);
  a5 = (undefined1 *)((int)puVar3 + DAT_8c0f6b54 + -0xe4);
  piVar2 = ar5;
  (**(code **)(DAT_8c0f6b70 + *ar5))(ar5,a5,a6,a7);
  dVar10 = (double)CONCAT44(0x3f800000,uVar1);
  uVar4 = (uint)in_dr0;
  if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
    *(ulonglong **)((int)puVar3 + -0x7c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x7c) + 0x44),uVar4);
    }
    else {
      dVar6 = *(double *)(*(int *)((int)puVar3 + -0x7c) + 0x44);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + 1.0,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar3 + -0x7c) + 0x44) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(*(int *)((int)puVar3 + -0x7c) + 0x44) = dVar6;
    }
    goto LAB_8c0f6ca6;
  }
  *(ulonglong **)((int)puVar3 + -0x70) = ar4;
  *(int *)(*(int *)((int)puVar3 + -0x70) + 0x28) =
       *(int *)(*(int *)((int)puVar3 + -0x70) + 0x28) + 1;
  if (DAT_8c0f6b74 < (int)(uint)ar4[5]) {
    uVar1 = (*(code *)PTR_rand_8c0f6bc4)(piVar2,a5,a6,a7);
    *(undefined4 *)((int)puVar3 + DAT_8c0f6bc8 + -0xe4) = uVar1;
    uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0f6bcc)
                      (*(undefined4 *)((int)puVar3 + DAT_8c0f6bc8 + -0xe4),10,a6,a7);
    *(undefined4 *)((int)puVar3 + -0x74) = uVar1;
    if (*(int *)((int)puVar3 + -0x74) != 0) {
      uVar1 = (*(code *)PTR_FUN_8c0f6bd0)(ar4,ar5,a6,a7);
      *(undefined4 *)((int)puVar3 + -0x68) = uVar1;
      if (*(int *)((int)puVar3 + -0x68) == 0) {
        *(ulonglong **)((int)puVar3 + -0x78) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0f6c5c,
                                   *(undefined4 *)(*(int *)((int)puVar3 + -0x78) + 0x44));
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x78) + 0x44);
          dVar6 = (double)CONCAT44(DAT_8c0f6c60,DAT_8c0f6c5c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 + dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar3 + -0x78) + 0x44) = fVar5;
        }
        else {
          *(ulonglong *)(*(int *)((int)puVar3 + -0x78) + 0x44) = in_xd0;
        }
        goto LAB_8c0f6bee;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(uint *)((int)ar4 + 0x44) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)uVar4;
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    *(uint *)((int)ar4 + 0x44) = 0;
  }
  else {
    *(ulonglong *)((int)ar4 + 0x44) = in_dr0 & 0xffffffff;
  }
LAB_8c0f6bee:
  if (*(uint *)((int)ar4 + 100) == 0) {
    a7 = (undefined1 *)((int)puVar3 + DAT_8c0f6c60 + -0xe4);
    a6 = (undefined1 *)((int)puVar3 + DAT_8c0f6c64 + -0xe4);
    (**(code **)(DAT_8c0f6c6c + *ar5))(ar5,(undefined1 *)((int)puVar3 + DAT_8c0f6c68 + -0xe4),a6,a7)
    ;
    *(undefined1 **)((int)puVar3 + -0xe8) = (undefined1 *)((int)puVar3 + DAT_8c0f6c70 + -0xe4);
    (*(code *)PTR_Vec3_sub_8c0f6c74)(ar4,(undefined1 *)((int)puVar3 + DAT_8c0f6c64 + -0xe8),a6,a7);
    (*(code *)PTR_Vec3_assign_8c0f6c7c)
              ((undefined1 *)((int)puVar3 + DAT_8c0f6c78 + -0xe4),
               (undefined1 *)((int)puVar3 + DAT_8c0f6c70 + -0xe4),a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0f6c80)
              ((undefined1 *)((int)puVar3 + DAT_8c0f6c70 + -0xe4),0xffffffff,a6,a7);
    (*(code *)PTR_FUN_8c0f6c8c)(DAT_8c0f6c88,0x28,a6,a7);
    *(uint *)((int)ar4 + 100) = 1;
  }
LAB_8c0f6ca6:
  *(undefined1 **)((int)puVar3 + -0xe8) = (undefined1 *)((int)puVar3 + DAT_8c0f6d90 + -0xe4);
  (*(code *)PTR_Vec3_scale_8c0f6d94)((uint *)((int)ar4 + 0x34),ar4 + 6,a6,a7);
  (*(code *)PTR_FUN_8c0f6d98)(ar4,(undefined1 *)((int)puVar3 + DAT_8c0f6d90 + -0xe4),a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0f6d9c)
            ((undefined1 *)((int)puVar3 + DAT_8c0f6d90 + -0xe4),0xffffffff,a6,a7);
  *(ulonglong **)((int)puVar3 + -0x80) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(uint *)((int)ar4 + 0x44),
                             *(undefined4 *)(*(int *)((int)puVar3 + -0x80) + 4));
  }
  else {
    in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x80) + 4);
    dVar6 = *(double *)((int)ar4 + 0x44);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 - dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar3 + -0x80) + 4) = fVar5;
    uVar7 = CONCAT44(*(undefined4 *)((int)puVar3 + DAT_8c0f6da0 + -0xe4),(uint)*ar4);
  }
  else {
    *(ulonglong *)(*(int *)((int)puVar3 + -0x80) + 4) = in_xd0;
    in_xd0 = *ar4;
    uVar7 = *(ulonglong *)((int)puVar3 + DAT_8c0f6da0 + -0xe4);
  }
  if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      uVar7 = (ulonglong)(uint)*ar4;
    }
    else {
      in_xd0 = *ar4;
    }
    if (in_FPSCR_PR != '\0' || (float)uVar7 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(uint *)ar4 = 0;
      }
      else {
        *ar4 = uVar7 & 0xffffffff;
      }
      fVar5 = DAT_8c0f6ed4;
      fVar11 = DAT_8c0f6ed8;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = (float)(int)(uint)ar4[9];
        fVar11 = DAT_8c0f6ed4;
      }
      if (in_FPSCR_PR == '\0' && fVar5 < fVar11) {
        *(ulonglong **)((int)puVar3 + -0x94) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0f6ed8,
                                   *(undefined4 *)(*(int *)((int)puVar3 + -0x94) + 0x1c));
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x94) + 0x1c);
          dVar6 = (double)CONCAT44(DAT_8c0f6edc,DAT_8c0f6ed8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 / dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar3 + -0x94) + 0x1c) = fVar5;
        }
        else {
          *(ulonglong *)(*(int *)((int)puVar3 + -0x94) + 0x1c) = in_xd0;
        }
        *(ulonglong **)((int)puVar3 + -0x98) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0f6ed8,
                                   *(undefined4 *)(*(int *)((int)puVar3 + -0x98) + 0x20));
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x98) + 0x20);
          dVar6 = (double)CONCAT44(DAT_8c0f6edc,DAT_8c0f6ed8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar3 + -0x98) + 0x20) = fVar5;
        }
        else {
          *(ulonglong *)(*(int *)((int)puVar3 + -0x98) + 0x20) = in_xd0;
        }
        *(ulonglong **)((int)puVar3 + -0x9c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0f6ed8,
                                   *(undefined4 *)(*(int *)((int)puVar3 + -0x9c) + 0x24));
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x9c) + 0x24);
          dVar6 = (double)CONCAT44(DAT_8c0f6edc,DAT_8c0f6ed8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar3 + -0x9c) + 0x24) = fVar5;
        }
        else {
          *(ulonglong *)(*(int *)((int)puVar3 + -0x9c) + 0x24) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          *(uint *)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar5;
        }
        *(ulonglong **)((int)puVar3 + -0xa0) = ar4;
        *(int *)(*(int *)((int)puVar3 + -0xa0) + 0x48) =
             *(int *)(*(int *)((int)puVar3 + -0xa0) + 0x48) + 1;
        if (in_FPSCR_SZ == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar5;
        }
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(uint *)ar4 = *(uint *)((int)puVar3 + DAT_8c0f6da0 + -0xe4);
    }
    else {
      *ar4 = *(ulonglong *)((int)puVar3 + DAT_8c0f6da0 + -0xe4);
    }
    fVar5 = DAT_8c0f6da4;
    fVar11 = _DAT_8c0f6da8;
    if (in_FPSCR_SZ == '\0') {
      fVar5 = (float)(int)(uint)ar4[9];
      fVar11 = DAT_8c0f6da4;
    }
    if (in_FPSCR_PR == '\0' && fVar5 < fVar11) {
      *(ulonglong **)((int)puVar3 + -0x84) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(_DAT_8c0f6da8,*(undefined4 *)(*(int *)((int)puVar3 + -0x84) + 0x1c)
                                );
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x84) + 0x1c);
        dVar6 = (double)CONCAT44(uRam8c0f6dac,_DAT_8c0f6da8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0x84) + 0x1c) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0x84) + 0x1c) = in_xd0;
      }
      *(ulonglong **)((int)puVar3 + -0x88) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(_DAT_8c0f6da8,*(undefined4 *)(*(int *)((int)puVar3 + -0x88) + 0x20)
                                );
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x88) + 0x20);
        dVar6 = (double)CONCAT44(uRam8c0f6dac,_DAT_8c0f6da8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0x88) + 0x20) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0x88) + 0x20) = in_xd0;
      }
      *(ulonglong **)((int)puVar3 + -0x8c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(_DAT_8c0f6da8,*(undefined4 *)(*(int *)((int)puVar3 + -0x8c) + 0x24)
                                );
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0x8c) + 0x24);
        dVar6 = (double)CONCAT44(uRam8c0f6dac,_DAT_8c0f6da8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0x8c) + 0x24) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0x8c) + 0x24) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar5;
      }
      *(ulonglong **)((int)puVar3 + -0x90) = ar4;
      *(int *)(*(int *)((int)puVar3 + -0x90) + 0x48) =
           *(int *)(*(int *)((int)puVar3 + -0x90) + 0x48) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar5;
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(*(undefined4 *)((int)puVar3 + DAT_8c0f6edc + -0xe4),(uint)ar4[1]);
  }
  else {
    in_xd0 = ar4[1];
    uVar7 = *(ulonglong *)((int)puVar3 + DAT_8c0f6edc + -0xe4);
  }
  if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      uVar7 = (ulonglong)(uint)ar4[1];
    }
    else {
      in_xd0 = ar4[1];
    }
    uVar8 = uVar7 & 0xffffffff;
    if (in_FPSCR_PR != '\0' || (float)uVar7 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(uint *)(ar4 + 1) = 0;
      }
      else {
        ar4[1] = uVar7 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(DAT_8c0f7008,(float)(int)(uint)ar4[10]);
      }
      else {
        uVar8 = CONCAT44(DAT_8c0f700c,DAT_8c0f7008);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        *(ulonglong **)((int)puVar3 + -0xb4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0f700c,
                                   *(undefined4 *)(*(int *)((int)puVar3 + -0xb4) + 0x24));
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xb4) + 0x24);
          dVar6 = (double)CONCAT44(DAT_8c0f7010,DAT_8c0f700c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 / dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar3 + -0xb4) + 0x24) = fVar5;
        }
        else {
          *(ulonglong *)(*(int *)((int)puVar3 + -0xb4) + 0x24) = in_xd0;
        }
        *(ulonglong **)((int)puVar3 + -0xb8) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0f700c,
                                   *(undefined4 *)(*(int *)((int)puVar3 + -0xb8) + 0x1c));
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xb8) + 0x1c);
          dVar6 = (double)CONCAT44(DAT_8c0f7010,DAT_8c0f700c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar3 + -0xb8) + 0x1c) = fVar5;
        }
        else {
          *(ulonglong *)(*(int *)((int)puVar3 + -0xb8) + 0x1c) = in_xd0;
        }
        *(ulonglong **)((int)puVar3 + -0xbc) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0f700c,
                                   *(undefined4 *)(*(int *)((int)puVar3 + -0xbc) + 0x20));
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xbc) + 0x20);
          dVar6 = (double)CONCAT44(DAT_8c0f7010,DAT_8c0f700c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar3 + -0xbc) + 0x20) = fVar5;
        }
        else {
          *(ulonglong *)(*(int *)((int)puVar3 + -0xbc) + 0x20) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          *(uint *)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar5;
        }
        *(ulonglong **)((int)puVar3 + -0xc0) = ar4;
        *(int *)(*(int *)((int)puVar3 + -0xc0) + 0x50) =
             *(int *)(*(int *)((int)puVar3 + -0xc0) + 0x50) + 1;
        uVar8 = (ulonglong)(uint)fVar5;
        if (in_FPSCR_SZ == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = uVar8;
        }
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(uint *)(ar4 + 1) = (uint)*(ulonglong *)((int)puVar3 + DAT_8c0f6edc + -0xe4);
    }
    else {
      ar4[1] = *(ulonglong *)((int)puVar3 + DAT_8c0f6edc + -0xe4);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44(DAT_8c0f6ed4,(float)(int)(uint)ar4[10]);
    }
    else {
      uVar8 = CONCAT44(DAT_8c0f6ed8,DAT_8c0f6ed4);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
      *(ulonglong **)((int)puVar3 + -0xa4) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0f6ed8,*(undefined4 *)(*(int *)((int)puVar3 + -0xa4) + 0x24))
        ;
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xa4) + 0x24);
        dVar6 = (double)CONCAT44(DAT_8c0f6edc,DAT_8c0f6ed8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0xa4) + 0x24) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0xa4) + 0x24) = in_xd0;
      }
      *(ulonglong **)((int)puVar3 + -0xa8) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0f6ed8,*(undefined4 *)(*(int *)((int)puVar3 + -0xa8) + 0x1c))
        ;
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xa8) + 0x1c);
        dVar6 = (double)CONCAT44(DAT_8c0f6edc,DAT_8c0f6ed8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0xa8) + 0x1c) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0xa8) + 0x1c) = in_xd0;
      }
      *(ulonglong **)((int)puVar3 + -0xac) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0f6ed8,*(undefined4 *)(*(int *)((int)puVar3 + -0xac) + 0x20))
        ;
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xac) + 0x20);
        dVar6 = (double)CONCAT44(DAT_8c0f6edc,DAT_8c0f6ed8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0xac) + 0x20) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0xac) + 0x20) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar5;
      }
      *(ulonglong **)((int)puVar3 + -0xb0) = ar4;
      *(int *)(*(int *)((int)puVar3 + -0xb0) + 0x50) =
           *(int *)(*(int *)((int)puVar3 + -0xb0) + 0x50) + 1;
      uVar8 = (ulonglong)(uint)fVar5;
      if (in_FPSCR_SZ == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = uVar8;
      }
    }
  }
  (**(code **)(DAT_8c0f7010 + *ar5))(ar5,ar4,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x6c) = (int)(uVar8 >> 0x20);
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)((int)puVar3 + -0x6c))
    ;
    uVar9 = CONCAT44(*(undefined4 *)((int)puVar3 + DAT_8c0f7014 + -0xe4),*(uint *)((int)ar4 + 4));
  }
  else {
    *(ulonglong *)((int)puVar3 + -0x6c) = uVar8;
    in_xd14 = *(undefined8 *)((int)puVar3 + -0x6c);
    in_xd0 = *(ulonglong *)((int)ar4 + 4);
    uVar9 = *(undefined8 *)((int)puVar3 + DAT_8c0f7014 + -0xe4);
  }
  if (in_FPSCR_PR == '\0' && (float)uVar9 < (float)((ulonglong)uVar9 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(uint *)((int)ar4 + 4),(float)uVar9);
    }
    else {
      dVar6 = *(double *)((int)ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar12 = SUB84(dVar10,0) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar12 = dVar10 < dVar6;
    }
    if (!bVar12) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + 4) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)((int)ar4 + 4) = in_xd14;
      }
      *(ulonglong **)((int)puVar3 + -0xd4) = ar4;
      *(int *)(*(int *)((int)puVar3 + -0xd4) + 0x2c) =
           *(int *)(*(int *)((int)puVar3 + -0xd4) + 0x2c) + 1;
      if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
        fVar5 = DAT_8c0f70f8;
        fVar11 = DAT_8c0f70fc;
        if (in_FPSCR_SZ == '\0') {
          fVar5 = (float)(int)*(uint *)((int)ar4 + 0x4c);
          fVar11 = DAT_8c0f70f8;
        }
        if (in_FPSCR_PR == '\0' && fVar5 < fVar11) {
          *(ulonglong **)((int)puVar3 + -0xd8) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(DAT_8c0f70fc,
                                      *(undefined4 *)(*(int *)((int)puVar3 + -0xd8) + 0x20));
          }
          else {
            in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xd8) + 0x20);
            dVar10 = (double)CONCAT44(DAT_8c0f7100,DAT_8c0f70fc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar10 / dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar3 + -0xd8) + 0x20) = fVar5;
          }
          else {
            *(ulonglong *)(*(int *)((int)puVar3 + -0xd8) + 0x20) = in_xd0;
          }
          *(ulonglong **)((int)puVar3 + -0xdc) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(DAT_8c0f70fc,
                                      *(undefined4 *)(*(int *)((int)puVar3 + -0xdc) + 0x1c));
          }
          else {
            in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xdc) + 0x1c);
            dVar10 = (double)CONCAT44(DAT_8c0f7100,DAT_8c0f70fc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar10 * dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar3 + -0xdc) + 0x1c) = fVar5;
          }
          else {
            *(ulonglong *)(*(int *)((int)puVar3 + -0xdc) + 0x1c) = in_xd0;
          }
          *(ulonglong **)((int)puVar3 + -0xe0) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(DAT_8c0f70fc,
                                      *(undefined4 *)(*(int *)((int)puVar3 + -0xe0) + 0x24));
          }
          else {
            in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xe0) + 0x24);
            dVar10 = (double)CONCAT44(DAT_8c0f7100,DAT_8c0f70fc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar10 * dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar3 + -0xe0) + 0x24) = fVar5;
          }
          else {
            *(ulonglong *)(*(int *)((int)puVar3 + -0xe0) + 0x24) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            *(uint *)(ar4 + 6) = 0;
          }
          else {
            ar4[6] = (ulonglong)(uint)fVar5;
          }
          *(ulonglong **)((int)puVar3 + -0xe4) = ar4;
          *(int *)(*(int *)((int)puVar3 + -0xe4) + 0x4c) =
               *(int *)(*(int *)((int)puVar3 + -0xe4) + 0x4c) + 1;
          if (in_FPSCR_SZ == '\0') {
            *(uint *)((int)ar4 + 0x44) = 0;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(uint *)((int)ar4 + 4) = *(uint *)((int)puVar3 + DAT_8c0f7014 + -0xe4);
    }
    else {
      *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)puVar3 + DAT_8c0f7014 + -0xe4);
    }
    fVar5 = DAT_8c0f7008;
    fVar11 = DAT_8c0f700c;
    if (in_FPSCR_SZ == '\0') {
      fVar5 = (float)(int)*(uint *)((int)ar4 + 0x4c);
      fVar11 = DAT_8c0f7008;
    }
    if (in_FPSCR_PR == '\0' && fVar5 < fVar11) {
      *(ulonglong **)((int)puVar3 + -0xc4) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0f700c,*(undefined4 *)(*(int *)((int)puVar3 + -0xc4) + 0x20)
                                 );
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xc4) + 0x20);
        dVar10 = (double)CONCAT44(DAT_8c0f7010,DAT_8c0f700c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar10 / dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0xc4) + 0x20) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0xc4) + 0x20) = in_xd0;
      }
      *(ulonglong **)((int)puVar3 + -200) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0f700c,*(undefined4 *)(*(int *)((int)puVar3 + -200) + 0x1c))
        ;
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -200) + 0x1c);
        dVar10 = (double)CONCAT44(DAT_8c0f7010,DAT_8c0f700c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar10 * dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -200) + 0x1c) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -200) + 0x1c) = in_xd0;
      }
      *(ulonglong **)((int)puVar3 + -0xcc) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0f700c,*(undefined4 *)(*(int *)((int)puVar3 + -0xcc) + 0x24)
                                 );
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar3 + -0xcc) + 0x24);
        dVar10 = (double)CONCAT44(DAT_8c0f7010,DAT_8c0f700c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar10 * dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0xcc) + 0x24) = fVar5;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar3 + -0xcc) + 0x24) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar5;
      }
      *(ulonglong **)((int)puVar3 + -0xd0) = ar4;
      *(int *)(*(int *)((int)puVar3 + -0xd0) + 0x4c) =
           *(int *)(*(int *)((int)puVar3 + -0xd0) + 0x4c) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar5;
      }
    }
  }
  *(undefined4 *)((int)puVar3 + DAT_8c0f7100 + -0xe4) = 0;
  (*(code *)PTR_Vec3_dtor_8c0f7108)
            ((undefined1 *)((int)puVar3 + DAT_8c0f7104 + -0xe4),0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0f7108)
            ((undefined1 *)((int)puVar3 + DAT_8c0f710c + -0xe4),0xffffffff,a6,a7);
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c0f7114)
            ((undefined1 *)((int)puVar3 + DAT_8c0f7110 + -0xe4),0xffffffff,a6,a7);
  return *(undefined4 *)((int)puVar3 + DAT_8c0f7100 + -0xe4);
}



/* FUN_8c0f7118 @ 8c0f7118 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7118(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  float fVar2;
  double dVar3;
  int a7;
  int a6_00;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0f71d8)(ar4 + 0x54,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f71dc)(0,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c0f71e0)(0,uVar1,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f71e4,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0f71e8,DAT_8c0f71e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f71e8,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0f71ec,DAT_8c0f71e8);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f71e4,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0f71e8,DAT_8c0f71e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f71e8,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0f71ec,DAT_8c0f71e8);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f71e4,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0f71e8,DAT_8c0f71e4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0f71e8,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0f71ec,DAT_8c0f71e8);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c0f71ec)(0,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c0f71f0)(0,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c0f71f4)(ar6,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c0f71f8)(ar5,a5,a6_00,a7);
  (*(code *)PTR_FUN_8c0f71fc)(1,a5,a6_00,a7);
  uVar1 = (*(code *)PTR_FUN_8c0f71d8)(PTR_DAT_8c0f7200,a5,a6_00,a7);
  return uVar1;
}



/* FUN_8c0f7204 @ 8c0f7204 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f7204(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x2c);
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c0f724c)(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 3) {
    iVar1 = (*(code *)PTR_FUN_8c0f7250)(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 4) {
    iVar1 = (*(code *)PTR_FUN_8c0f7254)(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0f7258 @ 8c0f7258 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7258(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0f7274)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0f7278 @ 8c0f7278 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0f7278(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_8;
  int iStack_4;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c0f72e8,*(undefined4 *)(ar4 + 0x60));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x60);
    dVar2 = (double)CONCAT44(_FUN_8c0f72ec,DAT_8c0f72e8);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_8 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fStack_8 = SUB84(dVar2 - dVar2,0);
  }
  iStack_4 = ar4;
  if (in_FPSCR_SZ != '\0') {
    fStack_8 = (float)in_xd0;
    iStack_4 = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(iStack_4 + 0x60) = fStack_8;
    *(float *)(ar4 + 0x5c) = fStack_8;
    *(float *)(ar4 + 0x58) = fStack_8;
    *(float *)(ar4 + 0x54) = fStack_8;
    uVar3 = (ulonglong)*(uint *)(ar4 + 0x60);
  }
  else {
    *(ulonglong *)(iStack_4 + 0x60) = CONCAT44(iStack_4,fStack_8);
    *(ulonglong *)(ar4 + 0x5c) = CONCAT44(iStack_4,fStack_8);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(iStack_4,fStack_8);
    uVar3 = CONCAT44(iStack_4,fStack_8);
    *(ulonglong *)(ar4 + 0x54) = uVar3;
  }
  iVar1 = ar4 + 0x60;
  if (in_FPSCR_PR != '\0' || (float)uVar3 <= 0.0) {
    iVar1 = *(int *)(ar4 + 0x2c) + 1;
    *(int *)(ar4 + 0x2c) = iVar1;
  }
  return iVar1;
}



/* FUN_8c0f72ec @ 8c0f72ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f72ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  int iVar2;
  undefined4 unaff_r14;
  int iVar3;
  undefined8 *puVar4;
  double in_dr0;
  double dVar5;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar6;
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
  *(undefined4 *)((int)puVar4 + -0xc) = 0;
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar4 + -0x18) = in_PR;
  *(undefined4 *)((int)puVar4 + -0x54) = ar5;
  *(undefined4 *)((int)puVar4 + -0x2c) = 0;
  uVar1 = (**(code **)(DAT_8c0f73f0 + **(int **)((int)puVar4 + -0x54)))
                    (*(int **)((int)puVar4 + -0x54),ar5,ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x34) = uVar1;
  iVar2 = *(int *)((int)puVar4 + -0x34);
  iVar3 = 0;
  do {
    if (7 < iVar3) {
      return 0;
    }
    *(int *)((int)puVar4 + -0x40) = iVar3;
    uVar1 = (*(code *)PTR_FUN_8c0f73f4)(iVar2 + *(int *)((int)puVar4 + -0x40) * 0x68,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0x38) = uVar1;
    if ((*(int *)((int)puVar4 + -0x38) == 1) &&
       (*(int *)((int)puVar4 + -0x44) = iVar3, iVar2 + *(int *)((int)puVar4 + -0x44) * 0x68 != ar4))
    {
      *(int *)((int)puVar4 + -0x48) = iVar3;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)
                                    (iVar2 + *(int *)((int)puVar4 + -0x48) * 0x68 + 0x1c));
        dVar5 = (double)CONCAT44(DAT_8c0f73f8,SUB84(in_dr0,0));
      }
      else {
        dVar5 = (double)CONCAT44(PTR_Vec3_sub_8c0f73fc,DAT_8c0f73f8);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)dVar5 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * dVar5;
      }
      *(int *)((int)puVar4 + -0x4c) = iVar3;
      *(undefined1 **)((int)puVar4 + -0x58) = (undefined1 *)((int)puVar4 + -0x28);
      a5 = iVar2 + *(int *)((int)puVar4 + -0x4c) * 0x68;
      (*(code *)PTR_Vec3_sub_8c0f73fc)(ar4,a5,ar6,ar7);
      (*(code *)PTR_Vec3_length_sq_8c0f7400)((undefined1 *)((int)puVar4 + -0x28),a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x3c) = (int)((ulonglong)dVar5 >> 0x20);
        in_dr0 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x3c),SUB84(dVar5,0));
      }
      else {
        *(double *)((int)puVar4 + -0x3c) = dVar5;
        in_dr0 = *(double *)((int)puVar4 + -0x3c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar6 = SUB84(in_dr14,0) < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        bVar6 = in_dr14 < in_dr0;
      }
      *(uint *)((int)puVar4 + -0x30) = 1 - (uint)bVar6;
      ar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0f7404)((undefined1 *)((int)puVar4 + -0x28),0xffffffff,ar6,ar7);
      if (*(int *)((int)puVar4 + -0x30) != 0) {
        *(int *)((int)puVar4 + -0x50) = iVar3;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),
                                    *(undefined4 *)
                                     (iVar2 + *(int *)((int)puVar4 + -0x50) * 0x68 + 4));
        }
        else {
          in_dr0 = *(double *)(ar4 + 4);
        }
        if (in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* FUN_8c0f7408 @ 8c0f7408 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7408(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c0f742c)(in_stack_00000000,ar4 + DAT_8c0f7428,ar6,ar7);
  return uVar1;
}



/* noop_0f7430 @ 8c0f7430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f7430(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0f7434 @ 8c0f7434 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f7434(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0f7438 @ 8c0f7438 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0f7438(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0f743c @ 8c0f743c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0f743c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_4_0253e4_8c0f746c)(ar4 + DAT_8c0f7468,ar5,ar6,ar7);
  return (uint)(iVar1 != 0);
}



/* FUN_8c0f7470 @ 8c0f7470 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0f7470(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0f74a0)(ar4 + DAT_8c0f749c,ar5,ar6,ar7);
  return (uint)(iVar1 != 0);
}



/* FUN_8c0f74a4 @ 8c0f74a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f74a4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(PTR_DAT_8c0f77d4,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f77dc;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f77dc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(PTR_DAT_8c0f77e8,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f77ec;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f77ec,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(PTR_DAT_8c0f77f0,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f77f4;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f77f4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(PTR_DAT_8c0f77f8,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f77fc;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f77fc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f780c,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f7810;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f7810,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7814._4_4_,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f781c;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f781c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7820,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f7824;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f7824,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7828,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f782c;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f782c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7830,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f7834;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f7834,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7838,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f783c;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f783c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7840,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f7844;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar1,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f7844,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7848,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar2,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f784c,ar7);
  uVar1 = DAT_8c0f7820;
  uVar3 = (*(code *)PTR_FUN_8c0f7854)(DAT_8c0f7850,DAT_8c0f780c,DAT_8c0f7814._4_4_,DAT_8c0f7820);
  puVar4 = PTR_Class_129938_m0_017084_8c0f785c;
  uVar2 = DAT_8c0f7858;
  (*(code *)PTR_global_list_push_8c0f77e4)
            (uVar3,PTR_Class_129938_m0_017084_8c0f785c,DAT_8c0f7858,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7868,puVar4,uVar2,uVar1);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f786c;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar3,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f786c,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7870,puVar4,uVar2,uVar1);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f7874;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar3,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f7874,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7878,puVar4,uVar2,uVar1);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f787c;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar3,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f787c,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7880,puVar4,uVar2,uVar1);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f7884;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar3,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f7884,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7888,puVar4,uVar2,uVar1);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f788c;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar3,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f788c,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7890,puVar4,uVar2,uVar1);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f7894;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar3,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f7894,uVar1);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f7898,puVar4,uVar2,uVar1);
  puVar4 = PTR_Vec3_dtor_8c0f77e0;
  uVar2 = DAT_8c0f789c;
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar3,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f789c,uVar1);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0f77d8)(DAT_8c0f78a0,puVar4,uVar2,uVar1);
  (*(code *)PTR_global_list_push_8c0f77e4)(uVar2,PTR_Vec3_dtor_8c0f77e0,DAT_8c0f78a4,uVar1);
  uVar2 = DAT_8c0f7878;
  uVar1 = (*(code *)PTR_FUN_8c0f7854)(DAT_8c0f78a8,DAT_8c0f7868,DAT_8c0f7870,DAT_8c0f7878);
  uVar2 = (*(code *)PTR_global_list_push_8c0f77e4)
                    (uVar1,PTR_Class_129938_m0_017084_8c0f785c,DAT_8c0f78ac,uVar2);
  return uVar2;
}



/* FUN_8c0f78b0 @ 8c0f78b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f78b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0f78c8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0f78cc @ 8c0f78cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f78cc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  return 0;
}



/* FUN_8c0f78d8 @ 8c0f78d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f78d8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  
  (*(code *)PTR_FUN_8c0f7988)(ar4 + 2,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f7994)
            (ar4 + 0x13,PTR_FUN_8c0f7990,PTR_free_if_nonnull_wrap_0f3ffc_8c0f798c,8);
  a7 = 8;
  a5 = PTR_FUN_8c0f7990;
  a6 = PTR_free_if_nonnull_wrap_0f3ffc_8c0f798c;
  (*(code *)PTR_FUN_8c0f7994)
            (ar4 + 0x1b,PTR_FUN_8c0f7990,PTR_free_if_nonnull_wrap_0f3ffc_8c0f798c,8);
  (*(code *)PTR_Vec3_ctor_zero_8c0f799c)((int)ar4 + DAT_8c0f7998,a5,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f799c)((int)ar4 + DAT_8c0f79a0,a5,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0f799c)((int)ar4 + DAT_8c0f79a4,a5,a6,a7);
  ar4[1] = 0;
  *ar4 = 0;
  ar4[0x19] = 0;
  ar4[0x1a] = 0;
  (*(code *)PTR_vec3_clear_8c0f79a8)((int)ar4 + DAT_8c0f7998,a5,a6,a7);
  *(undefined4 *)(DAT_8c0f79ac + (int)ar4) = 0xffffffff;
  (*(code *)PTR_vec3_clear_8c0f79a8)((int)ar4 + DAT_8c0f79a0,a5,a6,a7);
  *(undefined4 *)(DAT_8c0f79b0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0f79b4 + (int)ar4) = 0;
  return ar4;
}



/* FUN_8c0f79b8 @ 8c0f79b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f79b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ar4 + 100);
  for (iVar2 = ar4 + 0x4c; iVar2 != ar4 + iVar1 * 8 + 0x4c; iVar2 = iVar2 + 8) {
    (*(code *)PTR_FUN_8c0f7a5c)(iVar2,ar5,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  (*(code *)PTR_vec3_clear_8c0f7a64)(ar4 + DAT_8c0f7a60,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0f7a68 + ar4) = 0xffffffff;
  (*(code *)PTR_vec3_clear_8c0f7a64)(ar4 + DAT_8c0f7a6c,ar5,ar6,ar7);
  iVar1 = *(int *)(DAT_8c0f7a70 + ar4);
  for (iVar2 = ar4 + 0x6c; iVar2 != ar4 + iVar1 * 8 + 0x6c; iVar2 = iVar2 + 8) {
    (*(code *)PTR_FUN_8c0f7a5c)(iVar2,ar5,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c0f7a70 + ar4) = 0;
  iVar1 = DAT_8c0f7a74;
  *(undefined4 *)(DAT_8c0f7a74 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0f7a78 @ 8c0f7a78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7a78(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7af8)(PTR_DAT_8c0f7af4,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0f7b00;
  uVar2 = DAT_8c0f7afc;
  (*(code *)PTR_global_list_push_8c0f7b04)(uVar1,PTR_Vec3_dtor_8c0f7b00,DAT_8c0f7afc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7af8)(PTR_DAT_8c0f7b08,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0f7b00;
  uVar2 = DAT_8c0f7b0c;
  (*(code *)PTR_global_list_push_8c0f7b04)(uVar1,PTR_Vec3_dtor_8c0f7b00,DAT_8c0f7b0c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7af8)(PTR_DAT_8c0f7b10,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0f7b00;
  uVar2 = DAT_8c0f7b14;
  (*(code *)PTR_global_list_push_8c0f7b04)(uVar1,PTR_Vec3_dtor_8c0f7b00,DAT_8c0f7b14,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7af8)(PTR_DAT_8c0f7b18,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0f7b04)(uVar2,PTR_Vec3_dtor_8c0f7b00,DAT_8c0f7b1c,ar7);
  return uVar2;
}



/* main @ 8c0f7b20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 main(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_game_init_8c0f7b58)(ar4,ar5,ar6,ar7);
  while( true ) {
    uVar2 = DAT_8c0f7b5c;
    iVar1 = (*(code *)PTR_game_poll_exit_8c0f7b60)(DAT_8c0f7b5c,ar5,ar6,ar7);
    if (iVar1 < 0) break;
    (*(code *)PTR_game_frame_8c0f7b64)(uVar2,ar5,ar6,ar7);
  }
  (*(code *)PTR_game_shutdown_a_8c0f7b68)(uVar2,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_game_shutdown_b_8c0f7b6c)(uVar2,ar5,ar6,ar7);
  return uVar2;
}



/* game_init @ 8c0f7b70 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 game_init(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 a6;
  undefined4 a7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar2 = DAT_8c0f7d24;
  uStack_18 = *(undefined4 *)PTR_DAT_8c0f7d28;
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0f7d28 + 4);
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0f7d28 + 8);
  uStack_c = *(undefined4 *)(PTR_DAT_8c0f7d28 + 0xc);
  uStack_28 = *(undefined4 *)PTR_DAT_8c0f7d2c;
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0f7d2c + 4);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0f7d2c + 8);
  uStack_1c = *(undefined4 *)(PTR_DAT_8c0f7d2c + 0xc);
  *(uint *)PTR_PTR_8c0f7d30 = *(uint *)PTR_PTR_8c0f7d30 | DAT_8c0f7d34;
  iVar1 = (*(code *)PTR_FUN_8c0f7d38)(&uStack_28,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar4 = 2;
    uVar3 = 0;
    (*(code *)PTR_FUN_8c0f7d3c)(0x31,0,2,ar7);
  }
  else {
    uVar4 = 1;
    uVar3 = 0;
    (*(code *)PTR_FUN_8c0f7d3c)(0x34,0,1,ar7);
  }
  (*(code *)PTR_FUN_8c0f7d40)(0,uVar3,uVar4,ar7);
  uVar3 = (*(code *)PTR_malloc_thunk_8c0f7d48)(DAT_8c0f7d44,uVar3,uVar4,ar7);
  *DAT_8c0f7d4c = uVar3;
  uVar3 = DAT_8c0f7d44;
  (*(code *)PTR_FUN_8c0f7d50)(*DAT_8c0f7d4c,DAT_8c0f7d44,uVar4,ar7);
  uVar3 = (*(code *)PTR_malloc_thunk_8c0f7d48)(DAT_8c0f7d54,uVar3,uVar4,ar7);
  *DAT_8c0f7d58 = uVar3;
  (*(code *)PTR_FUN_8c0f7d5c)(*DAT_8c0f7d58,DAT_8c0f7d54,uVar4,ar7);
  a7 = 0;
  (*(code *)PTR_FUN_8c0f7d68)(DAT_8c0f7d64,0,DAT_8c0f7d60,0);
  a6 = 0;
  uVar4 = 0;
  uVar3 = 0;
  (*(code *)PTR_FUN_8c0f7d6c)(0,0,0,a7);
  (*(code *)PTR_FUN_8c0f7d70)(uVar3,uVar4,a6,a7);
  uVar3 = (*(code *)PTR_malloc_thunk_8c0f7d48)(DAT_8c0f7d74,uVar4,a6,a7);
  *DAT_8c0f7d78 = uVar3;
  uVar4 = 0;
  uVar3 = 0x40;
  (*(code *)PTR_FUN_8c0f7d7c)(*DAT_8c0f7d78,0x40,0,a7);
  (*(code *)PTR_FUN_8c0f7d84)(DAT_8c0f7d80,uVar3,uVar4,a7);
  uVar2 = (*(code *)PTR_malloc_thunk_8c0f7d48)(uVar2,uVar3,uVar4,a7);
  *DAT_8c0f7d88 = uVar2;
  (*(code *)PTR_FUN_8c0f7d90)(*DAT_8c0f7d88,DAT_8c0f7d8c,uVar4,a7);
  uVar2 = DAT_8c0f7d98;
  uVar3 = DAT_8c0f7d94;
  (*(code *)PTR_FUN_8c0f7d9c)(DAT_8c0f7d98,DAT_8c0f7d94,uVar4,a7);
  (*(code *)PTR_FUN_8c0f7da8)(uVar2,uVar3,uVar4,a7);
  uVar2 = DAT_8c0f7dac;
  uVar3 = DAT_8c0f7dac;
  (*(code *)PTR_FUN_8c0f7db0)(DAT_8c0f7dac,DAT_8c0f7dac,DAT_8c0f7dac,a7);
  (*(code *)PTR_FUN_8c0f7db8)(DAT_8c0f7db4,uVar2,uVar3,a7);
  uVar2 = DAT_8c0f7dbc;
  (*(code *)PTR_FUN_8c0f7dc0)(0xffffffff,DAT_8c0f7dbc,uVar3,a7);
  (*(code *)PTR_FUN_8c0f7dc4)(&uStack_28,uVar2,uVar3,a7);
  (*(code *)PTR_FUN_8c0f7dc8)(3,uVar2,uVar3,a7);
  uVar4 = 1;
  (*(code *)PTR_FUN_8c0f7dcc)(1,uVar2,uVar3,a7);
  (*(code *)PTR_thunk_FUN_8c20a13a_8c0f7dd4)(uVar4,uVar2,uVar3,a7);
  (*(code *)PTR_FUN_8c0f7dd8)(2,uVar2,uVar3,a7);
  (*(code *)PTR_FUN_8c0f7ddc)(1,uVar2,uVar3,a7);
  (*(code *)PTR_FUN_8c0f7de0)(5,uVar2,uVar3,a7);
  uVar4 = (*(code *)PTR_malloc_thunk_8c0f7d48)(DAT_8c0f7de4,uVar2,uVar3,a7);
  *DAT_8c0f7de8 = uVar4;
  (*(code *)PTR_FUN_8c0f7dec)(*DAT_8c0f7de8,uVar2,uVar3,a7);
  uVar2 = (*(code *)PTR_s_Tmcpack_idx_0c0448_8c0f7df4)(DAT_8c0f7df0,uVar2,uVar3,a7);
  return uVar2;
}



/* game_shutdown_a @ 8c0f7df8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 game_shutdown_a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  
  a4 = DAT_8c0f7e74;
  (*(code *)PTR_FUN_8c0f7e78)(DAT_8c0f7e74,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f7e7c)(a4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f7e80)(a4,ar5,ar6,ar7);
  if (*DAT_8c0f7e84 != 0) {
    a4 = *DAT_8c0f7e84;
    (*(code *)PTR_FUN_8c0f7e88)(a4,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e8c != 0) {
    a4 = *DAT_8c0f7e8c;
    (*(code *)PTR_FUN_8c0f7e88)(a4,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e90 != 0) {
    a4 = *DAT_8c0f7e90;
    (*(code *)PTR_FUN_8c0f7e88)(a4,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e94 != 0) {
    a4 = *DAT_8c0f7e94;
    (*(code *)PTR_FUN_8c0f7e88)(a4,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e98 != 0) {
    a4 = *DAT_8c0f7e98;
    (*(code *)PTR_FUN_8c0f7e88)(a4,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0f7e9c)(a4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f7ea0 @ 8c0f7ea0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7ea0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0f7ebc)(DAT_8c0f7eb8,DAT_8c0f7eb4,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f7ec0 @ 8c0f7ec0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0f7ec0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7f48)(PTR_DAT_8c0f7f44,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f7f50;
  uVar2 = DAT_8c0f7f4c;
  (*(code *)PTR_global_list_push_8c0f7f54)(uVar1,PTR_Vec3_dtor_8c0f7f50,DAT_8c0f7f4c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7f48)(PTR_DAT_8c0f7f58,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f7f50;
  uVar2 = DAT_8c0f7f5c;
  (*(code *)PTR_global_list_push_8c0f7f54)(uVar1,PTR_Vec3_dtor_8c0f7f50,DAT_8c0f7f5c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7f48)(PTR_DAT_8c0f7f60,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0f7f50;
  uVar2 = DAT_8c0f7f64;
  (*(code *)PTR_global_list_push_8c0f7f54)(uVar1,PTR_Vec3_dtor_8c0f7f50,DAT_8c0f7f64,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0f7f48)(PTR_DAT_8c0f7f68,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0f7f54)(uVar2,PTR_Vec3_dtor_8c0f7f50,DAT_8c0f7f6c,ar7);
  puVar3 = DAT_8c0f7f74;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0f7f70 = *(undefined4 *)DAT_8c0f7f74;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0f7f70 = *DAT_8c0f7f74;
  }
  return puVar3;
}



/* FUN_8c0f7f78 @ 8c0f7f78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f7f78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0f7f9c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f7fa4)(ar4 + DAT_8c0f7fa0,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0f7fa8 @ 8c0f7fa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f7fa8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0fa80c_8c0f7fe8)(ar4 + DAT_8c0f7fe4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0f7fec)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0f7ff0 @ 8c0f7ff0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7ff0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_8c0f8024 + ar4) = 0;
  *(undefined4 *)(DAT_8c0f8028 + ar4) = 0;
  *(undefined4 *)(DAT_8c0f802c + ar4) = 0;
  *(undefined4 *)(DAT_8c0f8030 + ar4) = 0;
  uVar1 = (*(code *)PTR_FUN_8c0f8038)(ar4 + DAT_8c0f8034,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f803c @ 8c0f803c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f803c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  
  *(undefined4 *)(DAT_8c0f80f4 + ar4) = ar5;
  a5 = 0;
  uVar1 = (*(code *)PTR_FUN_8c0f80f8)(*(undefined4 *)(DAT_8c0f80f4 + ar4),0,ar6,ar7);
  *(undefined4 *)(DAT_8c0f80fc + ar4) = uVar1;
  uVar1 = (*(code *)PTR_get_field_c8_0bced0_8c0f8100)
                    (*(undefined4 *)(DAT_8c0f80f4 + ar4),a5,ar6,ar7);
  *(undefined4 *)(DAT_8c0f8104 + ar4) = uVar1;
  uVar1 = (*(code *)PTR_get_field_c4_0f8128_8c0f8108)
                    (*(undefined4 *)(DAT_8c0f80f4 + ar4),a5,ar6,ar7);
  *(undefined4 *)(DAT_8c0f810c + ar4) = uVar1;
  if (*(int *)(DAT_8c0f810c + ar4) < DAT_8c0f8110) {
    *(int *)(DAT_8c0f810c + ar4) = *(int *)(DAT_8c0f810c + ar4) + 1;
  }
  else {
    *(undefined4 *)(DAT_8c0f810c + ar4) = 0;
  }
  uVar1 = (*(code *)PTR_FUN_8c0f8114)(*(undefined4 *)(DAT_8c0f80f4 + ar4),a5,ar6,ar7);
  *(undefined4 *)(DAT_8c0f8118 + ar4) = uVar1;
  *(undefined4 *)(DAT_8c0f811c + ar4) = 0;
  if (*(char *)(*(int *)(DAT_8c0f80f4 + ar4) + 0x2c) == '\x01') {
    *(undefined4 *)(DAT_8c0f811c + ar4) = 1;
  }
  uVar1 = (*(code *)PTR_FUN_8c0f8124)
                    (*(undefined4 *)(DAT_8c0f80f4 + ar4),ar4 + DAT_8c0f8120,ar6,ar7);
  return uVar1;
}



/* get_field_c4_0f8128 @ 8c0f8128 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c4_0f8128(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0f8130 + ar4);
}



/* FUN_8c0f8134 @ 8c0f8134 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f8134(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0f815c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f8164)(ar4 + DAT_8c0f8160,ar5,ar6,ar7);
  iVar1 = DAT_8c0f8168;
  *(undefined4 *)(DAT_8c0f8168 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0f816c @ 8c0f816c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f816c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  (*(code *)PTR_s_SPEECH_0faa98_8c0f81f0)(ar4 + DAT_8c0f81ec,ar5,ar6,ar7);
  iVar4 = 0;
  if (*(int *)(DAT_8c0f81f4 + ar4) != 0) {
    uVar2 = (*(code *)PTR_s_REQUEST_HOT_0f9780_8c0f81f8)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c0f81f4 + ar4) = uVar2;
    iVar4 = 0;
    if (*(int *)(DAT_8c0f81fc + ar4) != 0) {
      uVar3 = (*(code *)PTR_FUN_8c0f8200)(*(undefined4 *)(DAT_8c0f81fc + ar4),ar5,ar6,ar7);
      *(uint *)(DAT_8c0f8204 + ar4) = uVar3 & 0xffff;
      *(undefined4 *)(DAT_8c0f8208 + ar4) = 0;
      uVar2 = (*(code *)PTR_FUN_8c0f8210)
                        (*(undefined4 *)(DAT_8c0f820c + *(int *)(DAT_8c0f81fc + ar4)),ar5,ar6,ar7);
      iVar1 = DAT_8c0f8208;
      iVar4 = 0x3c;
      if ((ushort)uVar2 < 0x3d) {
        *(undefined4 *)(DAT_8c0f8208 + ar4) = 1;
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}



/* FUN_8c0f8214 @ 8c0f8214 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0f8214(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0f8240)(ar4 + DAT_8c0f823c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f8244)(ar4,ar5,ar6,ar7);
  iVar1 = DAT_8c0f8248;
  *(undefined4 *)(DAT_8c0f8248 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0f824c @ 8c0f824c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0f824c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0f829c)
                    (ar4 + DAT_8c0f8298,ar4 + DAT_8c0f8294,*(undefined4 *)(DAT_8c0f8290 + ar4),ar7);
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_8c0f8290 + ar4) = 0;
    *(undefined4 *)(DAT_8c0f82a0 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}



/* FUN_8c0f82a4 @ 8c0f82a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f82a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  
  if (*(int *)(DAT_8c0f8308 + ar4) != 0) {
    if (*(int *)(DAT_8c0f8308 + ar4) != 1) {
      return 0;
    }
    uVar1 = ar5;
    a6 = ar6;
    (*(code *)PTR_FUN_8c0f830c)(ar4,ar5,ar6,ar7);
    if (*(int *)(DAT_8c0f8310 + ar4) == 1) {
      (*(code *)PTR_FUN_8c0f8314)(ar4,uVar1,a6,ar7);
    }
  }
  *(undefined4 *)(DAT_8c0f8318 + ar4) = 2;
  uVar1 = (*(code *)PTR_s_HIGYOLINE0_0f8370_8c0f831c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f8320 @ 8c0f8320 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f8320(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_8c0f835c + ar4) == 0) {
    *(undefined4 *)(DAT_8c0f8360 + ar4) = 1;
    uVar1 = (*(code *)PTR_s_HIGYOLINE0_0f8370_8c0f8364)(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* s_HIGYOLINE0_0f8370 @ 8c0f8368 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c0f83f6 */
/* WARNING: Switch with 1 destination removed at 0x8c0f8486 */
/* WARNING: Switch with 1 destination removed at 0x8c0f84ea */
/* WARNING: Switch with 1 destination removed at 0x8c0f85bc */
/* WARNING: Switch with 1 destination removed at 0x8c0f8668 */
/* WARNING: Unknown calling convention */

undefined4 s_HIGYOLINE0_0f8370(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int a6;
  int aiStack_15c [4];
  int iStack_14c;
  int iStack_148;
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
  undefined4 uStack_114;
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
  int iStack_e0;
  
  a6 = ar6;
  (*(code *)PTR_FUN_8c0f8404)(ar4 + DAT_8c0f8400,DAT_8c0f8400,ar6,ar7);
  *(int *)(DAT_8c0f8408 + ar4) = ar5;
  *(int *)(DAT_8c0f840c + ar4) = ar4;
  *(int *)(DAT_8c0f8410 + ar4) = ar6;
  *(undefined4 *)(DAT_8c0f8414 + ar4) = 1;
  (*(code *)PTR_strcpy_8c0f8420)
            ((int)aiStack_15c + DAT_8c0f841c,PTR_s_GRAPHICS_COMMON_8c0f8418 + 0x10,a6,ar7);
  (*(code *)PTR_strcpy_8c0f8420)
            ((int)aiStack_15c + DAT_8c0f8424,PTR_s_GRAPHICS_COMMON_8c0f8418 + 0x15,a6,ar7);
  (*(code *)PTR_strcpy_8c0f8420)
            ((int)aiStack_15c + DAT_8c0f8428,PTR_s_GRAPHICS_COMMON_8c0f8418 + 0x15,a6,ar7);
  if (ar5 == 1) {
    iStack_e0 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8aa0)
                          (ar6,PTR_s_GRAPHICS_COMMON_8c0f8a9c + 0x16,a6,ar7);
    if (iStack_e0 == 0) {
      *(undefined4 *)(DAT_8c0f8aa4 + ar4) = 0;
    }
    else {
      iStack_e4 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8ad4)
                            (ar6,PTR_s_GRAPHICS_COMMON_8c0f8ad0 + 0x21,a6,ar7);
      if (iStack_e4 == 0) {
        *(undefined4 *)(DAT_8c0f8ad8 + ar4) = 1;
      }
      else {
        iStack_e8 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8b08)
                              (ar6,PTR_s_GRAPHICS_COMMON_8c0f8b04 + 0x32,a6,ar7);
        if (iStack_e8 == 0) {
          *(undefined4 *)(DAT_8c0f8b0c + ar4) = 2;
        }
        else {
          iStack_ec = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8bb0)
                                (ar6,PTR_s_GRAPHICS_COMMON_8c0f8bac + 0x43,a6,ar7);
          if ((((iStack_ec == 0) ||
               (iStack_f0 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8bb0)
                                      (ar6,PTR_s_GRAPHICS_COMMON_8c0f8bac + 0x4e,a6,ar7),
               iStack_f0 == 0)) ||
              (iStack_f4 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8bb0)
                                     (ar6,PTR_s_GRAPHICS_COMMON_8c0f8bac + 0x59,a6,ar7),
              iStack_f4 == 0)) ||
             ((iStack_f8 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8bb0)
                                     (ar6,PTR_s_GRAPHICS_COMMON_8c0f8bac + 100,a6,ar7),
              iStack_f8 == 0 ||
              (iStack_fc = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8bb0)
                                     (ar6,PTR_s_GRAPHICS_COMMON_8c0f8bac + 0x6f,a6,ar7),
              iStack_fc == 0)))) {
            *(undefined4 *)(DAT_8c0f8bb4 + ar4) = 3;
          }
          else {
            iStack_100 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8c24)
                                   (ar6,PTR_s_GRAPHICS_COMMON_8c0f8c1c + DAT_8c0f8c20,a6,ar7);
            if (((iStack_100 == 0) ||
                (iStack_104 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8c24)
                                        (ar6,PTR_s_GRAPHICS_COMMON_8c0f8c1c + DAT_8c0f8c28,a6,ar7),
                iStack_104 == 0)) ||
               (iStack_108 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8c24)
                                       (ar6,PTR_s_GRAPHICS_COMMON_8c0f8c1c + DAT_8c0f8c2c,a6,ar7),
               iStack_108 == 0)) {
              *(undefined4 *)(DAT_8c0f8c30 + ar4) = 4;
            }
            else {
              iStack_10c = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8c88)
                                     (ar6,PTR_s_GRAPHICS_COMMON_8c0f8c80 + DAT_8c0f8c84,a6,ar7);
              if ((iStack_10c == 0) ||
                 (iStack_110 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8c88)
                                         (ar6,PTR_s_GRAPHICS_COMMON_8c0f8c80 + DAT_8c0f8c8c,a6,ar7),
                 iStack_110 == 0)) {
                *(undefined4 *)(DAT_8c0f8c90 + ar4) = 5;
              }
              else {
                iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8cc4)
                                  (ar6,PTR_s_GRAPHICS_COMMON_8c0f8cbc + DAT_8c0f8cc0,a6,ar7);
                if (iVar1 != 0) {
                  return 0;
                }
                *(undefined4 *)(DAT_8c0f8cc8 + ar4) = 6;
                uStack_114 = 0;
              }
            }
          }
        }
      }
    }
    iStack_118 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8d34)
                           (ar6,PTR_s_GRAPHICS_COMMON_8c0f8d30 + 0x16,a6,ar7);
    if (((iStack_118 == 0) ||
        (iStack_11c = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8d34)
                                (ar6,PTR_s_GRAPHICS_COMMON_8c0f8d30 + 0x21,a6,ar7), iStack_11c == 0)
        ) || (iStack_120 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8d34)
                                     (ar6,PTR_s_GRAPHICS_COMMON_8c0f8d30 + 0x32,a6,ar7),
             iStack_120 == 0)) {
      *(undefined4 *)(DAT_8c0f8d38 + ar4) = 0;
    }
    else {
      iStack_124 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8d64)
                             (ar6,PTR_s_GRAPHICS_COMMON_8c0f8d60 + 0x43,a6,ar7);
      if (iStack_124 == 0) {
        *(undefined4 *)(DAT_8c0f8d68 + ar4) = 1;
      }
      else {
        iStack_128 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8d94)
                               (ar6,PTR_s_GRAPHICS_COMMON_8c0f8d90 + 0x4e,a6,ar7);
        if (iStack_128 == 0) {
          *(undefined4 *)(DAT_8c0f8d98 + ar4) = 2;
        }
        else {
          iStack_12c = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8dc4)
                                 (ar6,PTR_s_GRAPHICS_COMMON_8c0f8dc0 + 0x59,a6,ar7);
          if (iStack_12c == 0) {
            *(undefined4 *)(DAT_8c0f8dc8 + ar4) = 3;
          }
          else {
            iStack_130 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8df4)
                                   (ar6,PTR_s_GRAPHICS_COMMON_8c0f8df0 + 100,a6,ar7);
            if (iStack_130 == 0) {
              *(undefined4 *)(DAT_8c0f8df8 + ar4) = 4;
            }
            else {
              iStack_134 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8e34)
                                     (ar6,PTR_s_GRAPHICS_COMMON_8c0f8e30 + 0x6f,a6,ar7);
              if (iStack_134 == 0) {
                iStack_138 = (*(code *)PTR_FUN_8c0f8e38)(ar4,0,a6,ar7);
                if (iStack_138 == 5) {
                  *(undefined4 *)(DAT_8c0f8e54 + ar4) = 5;
                  *(undefined4 *)(*(int *)(DAT_8c0f8e58 + ar4) + 8) =
                       *(undefined4 *)(DAT_8c0f8e5c + ar4);
                }
                else if ((iStack_138 == 6) &&
                        (*(undefined4 *)(DAT_8c0f8e84 + ar4) = 5,
                        *(int *)(*(int *)(DAT_8c0f8e88 + ar4) + 8) < *(int *)(DAT_8c0f8e8c + ar4)))
                {
                  *(undefined4 *)(DAT_8c0f8e84 + ar4) = 6;
                }
              }
              else {
                iStack_13c = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8ebc)
                                       (ar6,PTR_s_GRAPHICS_COMMON_8c0f8eb4 + DAT_8c0f8eb8,a6,ar7);
                if (iStack_13c == 0) {
                  *(undefined4 *)(DAT_8c0f8ec0 + ar4) = 7;
                }
                else {
                  iStack_140 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8ef0)
                                         (ar6,PTR_s_GRAPHICS_COMMON_8c0f8ee8 + DAT_8c0f8eec,a6,ar7);
                  if (iStack_140 == 0) {
                    *(undefined4 *)(DAT_8c0f8ef4 + ar4) = 8;
                  }
                  else {
                    iStack_144 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8f24)
                                           (ar6,PTR_s_GRAPHICS_COMMON_8c0f8f1c + DAT_8c0f8f20,a6,ar7
                                           );
                    if (iStack_144 == 0) {
                      *(undefined4 *)(DAT_8c0f8f28 + ar4) = 10;
                    }
                    else {
                      iStack_148 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8f58)
                                             (ar6,PTR_s_GRAPHICS_COMMON_8c0f8f50 + DAT_8c0f8f54,a6,
                                              ar7);
                      if (iStack_148 == 0) {
                        *(undefined4 *)(DAT_8c0f8f5c + ar4) = 0xc;
                      }
                      else {
                        puVar3 = PTR_s_GRAPHICS_COMMON_8c0f8fa4 + DAT_8c0f8fa8;
                        iStack_14c = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8fac)
                                               (ar6,puVar3,a6,ar7);
                        if (iStack_14c == 0) {
                          aiStack_15c[3] = (*(code *)PTR_FUN_8c0f8fb0)(ar4,puVar3,a6,ar7);
                          switch(aiStack_15c[3]) {
                          case 0xd:
                          case 0xe:
                            *(undefined4 *)(DAT_8c0f8fe4 + ar4) = 0xe;
                            *(undefined4 *)(*(int *)(DAT_8c0f8fe8 + ar4) + 8) =
                                 *(undefined4 *)(DAT_8c0f8fec + ar4);
                            break;
                          case 0xf:
                          case 0x10:
                            *(undefined4 *)(DAT_8c0f9010 + ar4) = 0xe;
                            if (*(int *)(*(int *)(DAT_8c0f9014 + ar4) + 8) + 1 <
                                *(int *)(DAT_8c0f9018 + ar4)) {
                              *(undefined4 *)(DAT_8c0f9010 + ar4) = 0x10;
                            }
                            break;
                          case 0x11:
                          case 0x12:
                            *(undefined4 *)(DAT_8c0f9040 + ar4) = 0x10;
                            if (*(int *)(*(int *)(DAT_8c0f9044 + ar4) + 8) + 2 <
                                *(int *)(DAT_8c0f9048 + ar4)) {
                              *(undefined4 *)(DAT_8c0f9040 + ar4) = 0x12;
                            }
                          }
                        }
                        else {
                          iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f907c)
                                            (ar6,PTR_s_GRAPHICS_COMMON_8c0f9074 + DAT_8c0f9078,a6,
                                             ar7);
                          if (iVar1 != 0) {
                            return 0;
                          }
                          *(undefined4 *)(DAT_8c0f9080 + ar4) = 0x12;
                          aiStack_15c[2] = 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    switch(*(undefined4 *)(DAT_8c0f90ac + ar4)) {
    case 0:
      (*(code *)PTR_strcpy_8c0f9104)
                ((int)aiStack_15c + DAT_8c0f9100,PTR_s_GRAPHICS_COMMON_8c0f90f8 + DAT_8c0f90fc,a6,
                 ar7);
      (*(code *)PTR_strcpy_8c0f9104)
                ((int)aiStack_15c + DAT_8c0f910c,PTR_s_GRAPHICS_COMMON_8c0f90f8 + DAT_8c0f9108,a6,
                 ar7);
      break;
    case 1:
      (*(code *)PTR_strcpy_8c0f9148)
                ((int)aiStack_15c + DAT_8c0f9144,PTR_s_GRAPHICS_COMMON_8c0f913c + DAT_8c0f9140,a6,
                 ar7);
      (*(code *)PTR_strcpy_8c0f9148)
                ((int)aiStack_15c + DAT_8c0f9150,PTR_s_GRAPHICS_COMMON_8c0f913c + DAT_8c0f914c,a6,
                 ar7);
      break;
    case 2:
      (*(code *)PTR_strcpy_8c0f918c)
                ((int)aiStack_15c + DAT_8c0f9188,PTR_s_GRAPHICS_COMMON_8c0f9180 + DAT_8c0f9184,a6,
                 ar7);
      (*(code *)PTR_strcpy_8c0f918c)
                ((int)aiStack_15c + DAT_8c0f9194,PTR_s_GRAPHICS_COMMON_8c0f9180 + DAT_8c0f9190,a6,
                 ar7);
      break;
    case 3:
      (*(code *)PTR_strcpy_8c0f91d4)
                ((int)aiStack_15c + DAT_8c0f91d0,PTR_s_GRAPHICS_COMMON_8c0f91c8 + DAT_8c0f91cc,a6,
                 ar7);
      (*(code *)PTR_strcpy_8c0f91d4)
                ((int)aiStack_15c + DAT_8c0f91dc,PTR_s_GRAPHICS_COMMON_8c0f91c8 + DAT_8c0f91d8,a6,
                 ar7);
      break;
    case 4:
      (*(code *)PTR_strcpy_8c0f9218)
                ((int)aiStack_15c + DAT_8c0f9214,PTR_s_GRAPHICS_COMMON_8c0f920c + DAT_8c0f9210,a6,
                 ar7);
      (*(code *)PTR_strcpy_8c0f9218)
                ((int)aiStack_15c + DAT_8c0f9220,PTR_s_GRAPHICS_COMMON_8c0f920c + DAT_8c0f921c,a6,
                 ar7);
      break;
    case 5:
      (*(code *)PTR_strcpy_8c0f925c)
                ((int)aiStack_15c + DAT_8c0f9258,PTR_s_GRAPHICS_COMMON_8c0f9250 + DAT_8c0f9254,a6,
                 ar7);
      (*(code *)PTR_strcpy_8c0f925c)
                ((int)aiStack_15c + DAT_8c0f9264,PTR_s_GRAPHICS_COMMON_8c0f9250 + DAT_8c0f9260,a6,
                 ar7);
      break;
    case 6:
      (*(code *)PTR_strcpy_8c0f92c0)
                ((int)aiStack_15c + DAT_8c0f92bc,PTR_s_GRAPHICS_COMMON_8c0f92b4 + DAT_8c0f92b8,a6,
                 ar7);
      (*(code *)PTR_strcpy_8c0f92c0)
                ((int)aiStack_15c + DAT_8c0f92c8,PTR_s_GRAPHICS_COMMON_8c0f92b4 + DAT_8c0f92c4,a6,
                 ar7);
    }
    if (*(int *)(DAT_8c0f92d0 + *(int *)(DAT_8c0f92cc + ar4)) == 1) {
      (*(code *)PTR_FUN_8c0f92d8)
                ((int)aiStack_15c + DAT_8c0f92c8,PTR_s_GRAPHICS_COMMON_8c0f92b4 + DAT_8c0f92d4,a6,
                 ar7);
    }
    else if (*(int *)(*(int *)(DAT_8c0f9304 + ar4) + 0x68) < 2) {
      (*(code *)PTR_FUN_8c0f9314)
                ((int)aiStack_15c + DAT_8c0f9310,PTR_s_GRAPHICS_COMMON_8c0f9308 + DAT_8c0f930c,a6,
                 ar7);
    }
    else {
      switch(*(undefined4 *)(*(int *)(DAT_8c0f9344 + ar4) + 0x7c)) {
      case 0:
        if (*(int *)(*(int *)(DAT_8c0f9398 + ar4) + 0x60) < 1) {
          (*(code *)PTR_FUN_8c0f93d0)
                    ((int)aiStack_15c + DAT_8c0f93cc,PTR_s_GRAPHICS_COMMON_8c0f93c4 + DAT_8c0f93c8,
                     a6,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0f93a8)
                    ((int)aiStack_15c + DAT_8c0f93a4,PTR_s_GRAPHICS_COMMON_8c0f939c + DAT_8c0f93a0,
                     a6,ar7);
        }
        break;
      case 1:
        if (*(int *)(*(int *)(DAT_8c0f93fc + ar4) + 0x60) < 1) {
          (*(code *)PTR_FUN_8c0f9434)
                    ((int)aiStack_15c + DAT_8c0f9430,PTR_s_GRAPHICS_COMMON_8c0f9428 + DAT_8c0f942c,
                     a6,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0f940c)
                    ((int)aiStack_15c + DAT_8c0f9408,PTR_s_GRAPHICS_COMMON_8c0f9400 + DAT_8c0f9404,
                     a6,ar7);
        }
        break;
      case 2:
        if (*(int *)(*(int *)(DAT_8c0f9460 + ar4) + 0x60) < 1) {
          (*(code *)PTR_FUN_8c0f9498)
                    ((int)aiStack_15c + DAT_8c0f9494,PTR_s_GRAPHICS_COMMON_8c0f948c + DAT_8c0f9490,
                     a6,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0f9470)
                    ((int)aiStack_15c + DAT_8c0f946c,PTR_s_GRAPHICS_COMMON_8c0f9464 + DAT_8c0f9468,
                     a6,ar7);
        }
        break;
      case 3:
        if (*(int *)(*(int *)(DAT_8c0f94c4 + ar4) + 0x60) < 1) {
          (*(code *)PTR_FUN_8c0f9500)
                    ((int)aiStack_15c + DAT_8c0f94fc,PTR_s_GRAPHICS_COMMON_8c0f94f4 + DAT_8c0f94f8,
                     a6,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0f94d4)
                    ((int)aiStack_15c + DAT_8c0f94d0,PTR_s_GRAPHICS_COMMON_8c0f94c8 + DAT_8c0f94cc,
                     a6,ar7);
        }
        break;
      case 4:
        if (*(int *)(*(int *)(DAT_8c0f952c + ar4) + 0x60) < 1) {
          (*(code *)PTR_FUN_8c0f9564)
                    ((int)aiStack_15c + DAT_8c0f9560,PTR_s_GRAPHICS_COMMON_8c0f9558 + DAT_8c0f955c,
                     a6,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0f953c)
                    ((int)aiStack_15c + DAT_8c0f9538,PTR_s_GRAPHICS_COMMON_8c0f9530 + DAT_8c0f9534,
                     a6,ar7);
        }
        break;
      case 5:
        (*(code *)PTR_FUN_8c0f958c)
                  ((int)aiStack_15c + DAT_8c0f9588,PTR_s_GRAPHICS_COMMON_8c0f9580 + DAT_8c0f9584,a6,
                   ar7);
        break;
      default:
        (*(code *)PTR_strcpy_8c0f968c)
                  ((int)aiStack_15c + DAT_8c0f9688,PTR_s_GRAPHICS_COMMON_8c0f9684 + 0x15,a6,ar7);
        return 0;
      case 7:
        puVar3 = PTR_s_GRAPHICS_COMMON_8c0f95f0 + DAT_8c0f95f4;
        (*(code *)PTR_FUN_8c0f95fc)((int)aiStack_15c + DAT_8c0f95f8,puVar3,a6,ar7);
        aiStack_15c[1] = (*(code *)PTR_FUN_8c0f9600)(ar4,puVar3,a6,ar7);
        if ((1 < aiStack_15c[1]) &&
           (*(undefined4 *)(DAT_8c0f9604 + ar4) = 0, *(int *)(ar4 + 0xc) == 0)) {
          (*(code *)PTR_strcpy_8c0f9610)
                    ((int)aiStack_15c + DAT_8c0f960c,PTR_s_GRAPHICS_COMMON_8c0f95f0 + DAT_8c0f9608,
                     a6,ar7);
          (*(code *)PTR_strcpy_8c0f9610)
                    ((int)aiStack_15c + DAT_8c0f95f8,PTR_s_GRAPHICS_COMMON_8c0f95f0 + DAT_8c0f9614,
                     a6,ar7);
        }
        break;
      case 8:
        (*(code *)PTR_FUN_8c0f9640)
                  ((int)aiStack_15c + DAT_8c0f963c,PTR_s_GRAPHICS_COMMON_8c0f9634 + DAT_8c0f9638,a6,
                   ar7);
        break;
      case 9:
        (*(code *)PTR_FUN_8c0f9664)
                  ((int)aiStack_15c + DAT_8c0f9660,PTR_s_GRAPHICS_COMMON_8c0f9658 + DAT_8c0f965c,a6,
                   ar7);
      }
    }
  }
  else if (ar5 == 4) {
    uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8494)
                      (ar6,PTR_s_GRAPHICS_COMMON_8c0f8490 + 0x16,a6,ar7);
    *(undefined4 *)((int)aiStack_15c + DAT_8c0f8498) = uVar2;
    if (*(int *)((int)aiStack_15c + DAT_8c0f8498) != 0) {
      uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8494)
                        (ar6,PTR_s_GRAPHICS_COMMON_8c0f8490 + 0x21,a6,ar7);
      *(undefined4 *)((int)aiStack_15c + DAT_8c0f849c) = uVar2;
      if (*(int *)((int)aiStack_15c + DAT_8c0f849c) != 0) {
        uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f84f8)
                          (ar6,PTR_s_GRAPHICS_COMMON_8c0f84f4 + 0x32,a6,ar7);
        *(undefined4 *)((int)aiStack_15c + DAT_8c0f84fc) = uVar2;
        if (*(int *)((int)aiStack_15c + DAT_8c0f84fc) == 0) {
          (*(code *)PTR_strcpy_8c0f8504)
                    ((int)aiStack_15c + DAT_8c0f8500,PTR_s_GRAPHICS_COMMON_8c0f84f4 + 0x3d,a6,ar7);
          (*(code *)PTR_strcpy_8c0f8504)((int)aiStack_15c + DAT_8c0f8508,ar6 + 0x20,a6,ar7);
        }
        else {
          uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f85c8)
                            (ar6,PTR_s_GRAPHICS_COMMON_8c0f85c4 + 0x43,a6,ar7);
          *(undefined4 *)((int)aiStack_15c + DAT_8c0f85cc) = uVar2;
          if (*(int *)((int)aiStack_15c + DAT_8c0f85cc) != 0) {
            uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f85c8)
                              (ar6,PTR_s_GRAPHICS_COMMON_8c0f85c4 + 0x4e,a6,ar7);
            *(undefined4 *)((int)aiStack_15c + DAT_8c0f85d0) = uVar2;
            if (*(int *)((int)aiStack_15c + DAT_8c0f85d0) != 0) {
              uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f85c8)
                                (ar6,PTR_s_GRAPHICS_COMMON_8c0f85c4 + 0x59,a6,ar7);
              *(undefined4 *)((int)aiStack_15c + DAT_8c0f85d4) = uVar2;
              if (*(int *)((int)aiStack_15c + DAT_8c0f85d4) != 0) {
                uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f85c8)
                                  (ar6,PTR_s_GRAPHICS_COMMON_8c0f85c4 + 100,a6,ar7);
                *(undefined4 *)((int)aiStack_15c + DAT_8c0f85d8) = uVar2;
                if (*(int *)((int)aiStack_15c + DAT_8c0f85d8) != 0) {
                  uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f85c8)
                                    (ar6,PTR_s_GRAPHICS_COMMON_8c0f85c4 + 0x6f,a6,ar7);
                  *(undefined4 *)((int)aiStack_15c + DAT_8c0f85dc) = uVar2;
                  if (*(int *)((int)aiStack_15c + DAT_8c0f85dc) != 0) {
                    uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8678)
                                      (ar6,PTR_s_GRAPHICS_COMMON_8c0f8670 + DAT_8c0f8674,a6,ar7);
                    *(undefined4 *)((int)aiStack_15c + DAT_8c0f867c) = uVar2;
                    if (*(int *)((int)aiStack_15c + DAT_8c0f867c) != 0) {
                      uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8678)
                                        (ar6,PTR_s_GRAPHICS_COMMON_8c0f8670 + DAT_8c0f8680,a6,ar7);
                      *(undefined4 *)((int)aiStack_15c + DAT_8c0f8684) = uVar2;
                      if (*(int *)((int)aiStack_15c + DAT_8c0f8684) != 0) {
                        uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8678)
                                          (ar6,PTR_s_GRAPHICS_COMMON_8c0f8670 + DAT_8c0f8688,a6,ar7)
                        ;
                        *(undefined4 *)((int)aiStack_15c + DAT_8c0f868c) = uVar2;
                        if (*(int *)((int)aiStack_15c + DAT_8c0f868c) != 0) {
                          uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f870c)
                                            (ar6,PTR_s_GRAPHICS_COMMON_8c0f8704 + DAT_8c0f8708,a6,
                                             ar7);
                          *(undefined4 *)((int)aiStack_15c + DAT_8c0f8710) = uVar2;
                          if (*(int *)((int)aiStack_15c + DAT_8c0f8710) != 0) {
                            uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f870c)
                                              (ar6,PTR_s_GRAPHICS_COMMON_8c0f8704 + DAT_8c0f8714,a6,
                                               ar7);
                            *(undefined4 *)((int)aiStack_15c + DAT_8c0f8718) = uVar2;
                            if (*(int *)((int)aiStack_15c + DAT_8c0f8718) != 0) goto LAB_8c0f9690;
                          }
                          (*(code *)PTR_strcpy_8c0f8724)
                                    ((int)aiStack_15c + DAT_8c0f8720,
                                     PTR_s_GRAPHICS_COMMON_8c0f8704 + DAT_8c0f871c,a6,ar7);
                          (*(code *)PTR_strcpy_8c0f8724)
                                    ((int)aiStack_15c + DAT_8c0f8728,ar6 + 0x20,a6,ar7);
                          goto LAB_8c0f9690;
                        }
                      }
                    }
                    (*(code *)PTR_strcpy_8c0f8698)
                              ((int)aiStack_15c + DAT_8c0f8694,
                               PTR_s_GRAPHICS_COMMON_8c0f8670 + DAT_8c0f8690,a6,ar7);
                    (*(code *)PTR_strcpy_8c0f8698)
                              ((int)aiStack_15c + DAT_8c0f869c,ar6 + 0x20,a6,ar7);
                    goto LAB_8c0f9690;
                  }
                }
              }
            }
          }
          (*(code *)PTR_strcpy_8c0f85e4)
                    ((int)aiStack_15c + DAT_8c0f85e0,PTR_s_GRAPHICS_COMMON_8c0f85c4 + 0x7a,a6,ar7);
          (*(code *)PTR_strcpy_8c0f85e4)((int)aiStack_15c + DAT_8c0f85e8,ar6 + 0x20,a6,ar7);
        }
        goto LAB_8c0f9690;
      }
    }
    (*(code *)PTR_strcpy_8c0f84a4)
              ((int)aiStack_15c + DAT_8c0f84a0,PTR_s_GRAPHICS_COMMON_8c0f8490 + 0x2c,a6,ar7);
    (*(code *)PTR_strcpy_8c0f84a4)((int)aiStack_15c + DAT_8c0f84a8,ar6 + 0x20,a6,ar7);
  }
  else if (ar5 == 5) {
    uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8790)
                      (ar6,PTR_s_GRAPHICS_COMMON_8c0f878c + 0x16,a6,ar7);
    *(undefined4 *)((int)aiStack_15c + DAT_8c0f8794) = uVar2;
    if (*(int *)((int)aiStack_15c + DAT_8c0f8794) != 0) {
      uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8790)
                        (ar6,PTR_s_GRAPHICS_COMMON_8c0f878c + 0x21,a6,ar7);
      *(undefined4 *)((int)aiStack_15c + DAT_8c0f8798) = uVar2;
      if (*(int *)((int)aiStack_15c + DAT_8c0f8798) != 0) {
        uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f87f0)
                          (ar6,PTR_s_GRAPHICS_COMMON_8c0f87ec + 0x32,a6,ar7);
        *(undefined4 *)((int)aiStack_15c + DAT_8c0f87f4) = uVar2;
        if (*(int *)((int)aiStack_15c + DAT_8c0f87f4) == 0) {
          (*(code *)PTR_strcpy_8c0f8800)
                    ((int)aiStack_15c + DAT_8c0f87fc,PTR_s_GRAPHICS_COMMON_8c0f87ec + DAT_8c0f87f8,
                     a6,ar7);
          (*(code *)PTR_strcpy_8c0f8800)((int)aiStack_15c + DAT_8c0f8804,ar6 + 0x20,a6,ar7);
        }
        else {
          uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f88c0)
                            (ar6,PTR_s_GRAPHICS_COMMON_8c0f88bc + 0x43,a6,ar7);
          *(undefined4 *)((int)aiStack_15c + DAT_8c0f88c4) = uVar2;
          if (*(int *)((int)aiStack_15c + DAT_8c0f88c4) != 0) {
            uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f88c0)
                              (ar6,PTR_s_GRAPHICS_COMMON_8c0f88bc + 0x4e,a6,ar7);
            *(undefined4 *)((int)aiStack_15c + DAT_8c0f88c8) = uVar2;
            if (*(int *)((int)aiStack_15c + DAT_8c0f88c8) != 0) {
              uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f88c0)
                                (ar6,PTR_s_GRAPHICS_COMMON_8c0f88bc + 0x59,a6,ar7);
              *(undefined4 *)((int)aiStack_15c + DAT_8c0f88cc) = uVar2;
              if (*(int *)((int)aiStack_15c + DAT_8c0f88cc) != 0) {
                uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f88c0)
                                  (ar6,PTR_s_GRAPHICS_COMMON_8c0f88bc + 100,a6,ar7);
                *(undefined4 *)((int)aiStack_15c + DAT_8c0f88d0) = uVar2;
                if (*(int *)((int)aiStack_15c + DAT_8c0f88d0) != 0) {
                  uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f88c0)
                                    (ar6,PTR_s_GRAPHICS_COMMON_8c0f88bc + 0x6f,a6,ar7);
                  *(undefined4 *)((int)aiStack_15c + DAT_8c0f88d4) = uVar2;
                  if (*(int *)((int)aiStack_15c + DAT_8c0f88d4) != 0) {
                    uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f896c)
                                      (ar6,PTR_s_GRAPHICS_COMMON_8c0f8964 + DAT_8c0f8968,a6,ar7);
                    *(undefined4 *)((int)aiStack_15c + DAT_8c0f8970) = uVar2;
                    if (*(int *)((int)aiStack_15c + DAT_8c0f8970) != 0) {
                      uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f896c)
                                        (ar6,PTR_s_GRAPHICS_COMMON_8c0f8964 + DAT_8c0f8974,a6,ar7);
                      *(undefined4 *)((int)aiStack_15c + DAT_8c0f8978) = uVar2;
                      if (*(int *)((int)aiStack_15c + DAT_8c0f8978) != 0) {
                        uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f896c)
                                          (ar6,PTR_s_GRAPHICS_COMMON_8c0f8964 + DAT_8c0f897c,a6,ar7)
                        ;
                        *(undefined4 *)((int)aiStack_15c + DAT_8c0f8980) = uVar2;
                        if (*(int *)((int)aiStack_15c + DAT_8c0f8980) != 0) {
                          uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8a04)
                                            (ar6,PTR_s_GRAPHICS_COMMON_8c0f89fc + DAT_8c0f8a00,a6,
                                             ar7);
                          *(undefined4 *)((int)aiStack_15c + DAT_8c0f8a08) = uVar2;
                          if (*(int *)((int)aiStack_15c + DAT_8c0f8a08) != 0) {
                            uVar2 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f8a04)
                                              (ar6,PTR_s_GRAPHICS_COMMON_8c0f89fc + DAT_8c0f8a0c,a6,
                                               ar7);
                            *(undefined4 *)((int)aiStack_15c + DAT_8c0f8a10) = uVar2;
                            if (*(int *)((int)aiStack_15c + DAT_8c0f8a10) != 0) goto LAB_8c0f9690;
                          }
                          (*(code *)PTR_strcpy_8c0f8a1c)
                                    ((int)aiStack_15c + DAT_8c0f8a18,
                                     PTR_s_GRAPHICS_COMMON_8c0f89fc + DAT_8c0f8a14,a6,ar7);
                          (*(code *)PTR_strcpy_8c0f8a1c)
                                    ((int)aiStack_15c + DAT_8c0f8a20,ar6 + 0x20,a6,ar7);
                          goto LAB_8c0f9690;
                        }
                      }
                    }
                    (*(code *)PTR_strcpy_8c0f898c)
                              ((int)aiStack_15c + DAT_8c0f8988,
                               PTR_s_GRAPHICS_COMMON_8c0f8964 + DAT_8c0f8984,a6,ar7);
                    (*(code *)PTR_strcpy_8c0f898c)
                              ((int)aiStack_15c + DAT_8c0f8990,ar6 + 0x20,a6,ar7);
                    goto LAB_8c0f9690;
                  }
                }
              }
            }
          }
          (*(code *)PTR_strcpy_8c0f88e0)
                    ((int)aiStack_15c + DAT_8c0f88dc,PTR_s_GRAPHICS_COMMON_8c0f88bc + DAT_8c0f88d8,
                     a6,ar7);
          (*(code *)PTR_strcpy_8c0f88e0)((int)aiStack_15c + DAT_8c0f88e4,ar6 + 0x20,a6,ar7);
        }
        goto LAB_8c0f9690;
      }
    }
    (*(code *)PTR_strcpy_8c0f87a4)
              ((int)aiStack_15c + DAT_8c0f87a0,PTR_s_GRAPHICS_COMMON_8c0f878c + DAT_8c0f879c,a6,ar7)
    ;
    (*(code *)PTR_strcpy_8c0f87a4)((int)aiStack_15c + DAT_8c0f87a8,ar6 + 0x20,a6,ar7);
  }
  else if (ar5 == 6) {
    (*(code *)PTR_strcpy_8c0f8a68)
              ((int)aiStack_15c + DAT_8c0f8a64,PTR_s_GRAPHICS_COMMON_8c0f8a5c + DAT_8c0f8a60,a6,ar7)
    ;
    (*(code *)PTR_strcpy_8c0f8a68)((int)aiStack_15c + DAT_8c0f8a6c,ar6 + 0x20,a6,ar7);
    (*(code *)PTR_strcpy_8c0f8a68)((int)aiStack_15c + DAT_8c0f8a70,ar6 + 0x40,a6,ar7);
  }
LAB_8c0f9690:
  (*(code *)PTR_strcpy_8c0f96fc)
            (*(undefined4 *)(DAT_8c0f96f8 + ar4),(int)aiStack_15c + DAT_8c0f96f4,a6,ar7);
  (*(code *)PTR_strcpy_8c0f96fc)
            (*(int *)(DAT_8c0f96f8 + ar4) + 0x20,(int)aiStack_15c + DAT_8c0f9700,a6,ar7);
  iVar1 = (int)aiStack_15c + DAT_8c0f9704;
  (*(code *)PTR_strcpy_8c0f96fc)(*(int *)(DAT_8c0f96f8 + ar4) + 0x40,iVar1,a6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0f9708)(ar4,iVar1,a6,ar7);
  return uVar2;
}



/* s_FROGMANLINE2_0f970c @ 8c0f970c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_FROGMANLINE2_0f970c(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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



/* s_REQUEST_HOT_0f9780 @ 8c0f9774 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_REQUEST_HOT_0f9780(int ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int a4;
  undefined4 uVar5;
  bool bVar6;
  uint uStack_2c;
  ushort auStack_28 [8];
  
  if (0 < *(int *)(DAT_8c0f9794 + ar4)) {
    return 1;
  }
  uVar5 = *(undefined4 *)(DAT_8c0f97d8 + ar4);
  a4 = *(int *)(DAT_8c0f97d8 + ar4) + 0x20;
  puVar3 = PTR_s_GRAPHICS_COMMON_8c0f97dc + 0x15;
  (*(code *)PTR_strcpy_8c0f97e0)(*(int *)(DAT_8c0f97d8 + ar4) + 0x40,puVar3,ar6,ar7);
  uVar4 = 0;
  iVar1 = *(int *)(DAT_8c0f97e4 + ar4);
  if (iVar1 != 0) {
    if ((iVar1 == 1) || (iVar1 == 2)) {
      if (*(int *)(*(int *)(DAT_8c0f983c + ar4) + 0x70) == 0xb) {
        *(undefined4 *)(*(int *)(DAT_8c0f983c + ar4) + 0x70) = 0;
        if (*(int *)(*(int *)(DAT_8c0f983c + ar4) + 0x7c) != 7) {
          puVar2 = *(undefined **)(*(int *)(DAT_8c0f983c + ar4) + 0x7c);
          puVar3 = puVar2;
          if (((int)puVar2 < 10) && (-1 < (int)puVar2)) {
            puVar3 = (&switchD_8c0f9836::switchdataD_8c0f9840)[(int)puVar2];
            switch(puVar2) {
            case (undefined *)0x0:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f987c + DAT_8c0f9880;
              (*(code *)PTR_strcpy_8c0f9884)(a4,puVar3,ar6,ar7);
              break;
            case (undefined *)0x1:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f989c + DAT_8c0f98a0;
              (*(code *)PTR_strcpy_8c0f98a4)(a4,puVar3,ar6,ar7);
              break;
            case (undefined *)0x2:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f98bc + DAT_8c0f98c0;
              (*(code *)PTR_strcpy_8c0f98c4)(a4,puVar3,ar6,ar7);
              break;
            case (undefined *)0x3:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f98dc + DAT_8c0f98e0;
              (*(code *)PTR_strcpy_8c0f98e4)(a4,puVar3,ar6,ar7);
              break;
            case (undefined *)0x4:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f98fc + DAT_8c0f9900;
              (*(code *)PTR_strcpy_8c0f9904)(a4,puVar3,ar6,ar7);
              break;
            case (undefined *)0x5:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f991c + DAT_8c0f9920;
              (*(code *)PTR_strcpy_8c0f9924)(a4,puVar3,ar6,ar7);
              break;
            case (undefined *)0x8:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f993c + DAT_8c0f9940;
              (*(code *)PTR_strcpy_8c0f9944)(a4,puVar3,ar6,ar7);
              break;
            case (undefined *)0x9:
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9974 + DAT_8c0f9978;
              ar6 = PTR_strcpy_8c0f997c;
              (*(code *)PTR_strcpy_8c0f997c)(a4,puVar3,PTR_strcpy_8c0f997c,ar7);
            }
          }
          switch(*(undefined4 *)(DAT_8c0f9980 + ar4)) {
          case 0:
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f99b4 + 0x2c;
            (*(code *)PTR_strcpy_8c0f99b8)(uVar5,puVar3,ar6,ar7);
            break;
          case 1:
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f99d0 + 0x2c;
            (*(code *)PTR_strcpy_8c0f99d4)(uVar5,puVar3,ar6,ar7);
            break;
          case 2:
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f99ec + 0x3d;
            (*(code *)PTR_strcpy_8c0f99f0)(uVar5,puVar3,ar6,ar7);
            break;
          case 3:
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9a08 + 0x7a;
            (*(code *)PTR_strcpy_8c0f9a0c)(uVar5,puVar3,ar6,ar7);
            break;
          case 4:
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9a24 + 0x7a;
            (*(code *)PTR_strcpy_8c0f9a28)(uVar5,puVar3,ar6,ar7);
            break;
          case 5:
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9a40 + 0x7a;
            (*(code *)PTR_strcpy_8c0f9a44)(uVar5,puVar3,ar6,ar7);
            break;
          case 6:
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9a5c + 0x7a;
            (*(code *)PTR_strcpy_8c0f9a60)(uVar5,puVar3,ar6,ar7);
          }
          uVar4 = 1;
        }
      }
      else if (((*(int *)(*(int *)(DAT_8c0f9b14 + ar4) + 0x7c) == 7) ||
               (*(int *)(*(int *)(DAT_8c0f9b14 + ar4) + 0x60) < 1)) &&
              (1 < *(int *)(*(int *)(DAT_8c0f9b14 + ar4) + 0x68))) {
        iVar1 = (*(code *)PTR_FUN_8c0f9b18)(ar4,puVar3,ar6,ar7);
        if ((*(int *)(ar4 + 0xc) == 0) && (1 < iVar1)) {
          iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9b24)
                            (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9b1c + DAT_8c0f9b20,ar6,ar7);
          if (iVar1 == 0) {
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9b1c + DAT_8c0f9b28;
            iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9b24)(a4,puVar3,ar6,ar7);
            if (iVar1 == 0) {
              if ((*(int *)(*(int *)(DAT_8c0f9b14 + ar4) + 0x74) == 1) ||
                 (*(int *)(DAT_8c0f9b2c + ar4) == 1)) {
                puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9b1c + DAT_8c0f9b30;
                (*(code *)PTR_strcpy_8c0f9b34)(a4,puVar3,ar6,ar7);
                uVar4 = 1;
              }
              else {
                *(undefined4 *)(ar4 + 0xc) = 1;
                *(undefined4 *)(DAT_8c0f9b48 + ar4) = 1;
              }
              goto LAB_8c0fa1a8;
            }
          }
          iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9bbc)
                            (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9bb4 + DAT_8c0f9bb8,ar6,ar7);
          if (iVar1 == 0) {
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9bb4 + DAT_8c0f9bc0;
            iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9bbc)(a4,puVar3,ar6,ar7);
            if (iVar1 == 0) {
              (*(code *)PTR_FUN_8c0f9bc4)(auStack_28,puVar3,ar6,ar7);
              uVar4 = (uint)auStack_28[0];
              if ((uVar4 <= DAT_8c0f9bc8) && (DAT_8c0f9bcc <= uVar4)) {
                    /* WARNING: Could not recover jumptable at 0x8c0f9bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (*(code *)(&PTR_LAB_8c0f9bd0)[uVar4 - DAT_8c0f9bcc])();
                return uVar5;
              }
              puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9cd8 + DAT_8c0f9cdc;
              (*(code *)PTR_strcpy_8c0f9ce0)(uVar5,puVar3,ar6,ar7);
              (*(code *)PTR_FUN_8c0f9ce8)(a4,puVar3,ar6,ar7);
              uVar4 = 1;
              goto LAB_8c0fa1a8;
            }
          }
          iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9dc0)
                            (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9dbc,ar6,ar7);
          if (((((iVar1 == 0) ||
                (iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9dc0)
                                   (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9dc4,ar6,ar7),
                iVar1 == 0)) ||
               (iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9dc0)
                                  (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9dc8,ar6,ar7),
               iVar1 == 0)) ||
              ((iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9dc0)
                                  (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9dcc,ar6,ar7),
               iVar1 == 0 ||
               (iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9dc0)
                                  (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9dd0,ar6,ar7),
               iVar1 == 0)))) ||
             ((iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9dc0)
                                 (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9dd4,ar6,ar7),
              iVar1 == 0 ||
              (iVar1 = (*(code *)PTR_s_FROGMANLINE2_0f970c_8c0f9dc0)
                                 (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9dd8,ar6,ar7),
              iVar1 == 0)))) {
            (*(code *)PTR_strcpy_8c0f9de0)
                      (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9ddc,ar6,ar7);
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9db8 + DAT_8c0f9de4;
            (*(code *)PTR_strcpy_8c0f9de0)(a4,puVar3,ar6,ar7);
            *(undefined4 *)(ar4 + 0xc) = 1;
            *(undefined4 *)(DAT_8c0f9de8 + ar4) = 1;
            uVar4 = 1;
          }
          else {
            (*(code *)PTR_strcpy_8c0f9e1c)
                      (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9e14 + DAT_8c0f9e18,ar6,ar7);
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9e14 + DAT_8c0f9e20;
            (*(code *)PTR_strcpy_8c0f9e1c)(a4,puVar3,ar6,ar7);
            uVar4 = 1;
          }
        }
        else if (*(int *)(*(int *)(DAT_8c0f9e60 + ar4) + 0x7c) == 7) {
          switch(*(undefined4 *)(*(int *)(DAT_8c0f9e60 + ar4) + 0x70)) {
          case 9:
            *(undefined4 *)(*(int *)(DAT_8c0f9f54 + ar4) + 0x70) = 0;
            puVar3 = DAT_8c0f9f58;
            if (0 < *(int *)(DAT_8c0f9f58 + ar4)) {
              puVar3 = (undefined *)(*(code *)PTR_FUN_8c0f9f5c)(ar4,PTR_FUN_8c0f9f5c,ar6,ar7);
              if (*(int *)(DAT_8c0f9f58 + ar4) < (int)puVar3) {
                puVar3 = *(undefined **)(DAT_8c0f9f58 + ar4);
              }
              ar6 = PTR_s_GRAPHICS_COMMON_8c0f9f60 + DAT_8c0f9f64;
              (*(code *)PTR_s_CHAPTER_02d_0fa206_8c0f9f68)(ar4,puVar3,ar6,ar7);
              uVar4 = 1;
            }
            break;
          case 10:
            *(undefined4 *)(*(int *)(DAT_8c0f9f9c + ar4) + 0x70) = 0;
            (*(code *)PTR_strcpy_8c0f9fa8)
                      (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9fa0 + DAT_8c0f9fa4,ar6,ar7);
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9fa0 + 0x15;
            (*(code *)PTR_strcpy_8c0f9fa8)(a4,puVar3,ar6,ar7);
            uVar4 = 1;
            break;
          default:
            puVar3 = *(undefined **)(DAT_8c0fa04c + ar4);
            if ((0 < (int)puVar3) &&
               (iVar1 = ar4, puVar3 = PTR_FUN_8c0fa050,
               puVar2 = (undefined *)(*(code *)PTR_FUN_8c0fa050)(ar4,PTR_FUN_8c0fa050,ar6,ar7),
               (int)puVar2 <= *(int *)(DAT_8c0fa04c + ar4))) {
              if (*(int *)(*(int *)(DAT_8c0fa054 + ar4) + 0x74) == 1) {
                uVar5 = (*(code *)PTR_rand_8c0fa058)(iVar1,puVar3,ar6,ar7);
                puVar3 = (undefined *)0x4;
                iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fa05c)(uVar5,4,ar6,ar7);
                if (iVar1 == 0) {
                  ar6 = PTR_s_GRAPHICS_COMMON_8c0fa060 + DAT_8c0fa064;
                  (*(code *)PTR_s_CHAPTER_02d_0fa206_8c0fa068)(ar4,puVar2,ar6,ar7);
                  uVar4 = 1;
                  puVar3 = puVar2;
                }
              }
              else {
                (*(code *)PTR_FUN_8c0fa0d4)(auStack_28,auStack_28,ar6,ar7);
                (*(code *)PTR_FUN_8c0fa0d8)(auStack_28,&uStack_2c,ar6,ar7);
                puVar3 = (undefined *)
                         (*(code *)PTR_get_field_c8_0fc440_8c0fa0e0)
                                   (ar4 + DAT_8c0fa0dc,ar4 + DAT_8c0fa0dc,ar6,ar7);
                uStack_2c = uStack_2c - (int)puVar3;
                if (DAT_8c0fa0e4 < uStack_2c) {
                  if (*(int *)(DAT_8c0fa0e8 + ar4) == 1) {
                    ar6 = PTR_s_GRAPHICS_COMMON_8c0fa0ec + DAT_8c0fa0f0;
                    (*(code *)PTR_s_CHAPTER_02d_0fa206_8c0fa0f4)(ar4,puVar2,ar6,ar7);
                  }
                  else {
                    ar6 = PTR_s_GRAPHICS_COMMON_8c0fa120 + DAT_8c0fa124;
                    (*(code *)PTR_s_CHAPTER_02d_0fa206_8c0fa128)(ar4,puVar2,ar6,ar7);
                  }
                  puVar3 = PTR_FUN_8c0fa130;
                  (*(code *)PTR_FUN_8c0fa130)(ar4 + DAT_8c0fa12c,PTR_FUN_8c0fa130,ar6,ar7);
                  uVar4 = 1;
                }
              }
            }
            break;
          case 0xc:
            *(undefined4 *)(*(int *)(DAT_8c0f9eb4 + ar4) + 0x70) = 0;
            (*(code *)PTR_strcpy_8c0f9ec0)
                      (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9eb8 + DAT_8c0f9ebc,ar6,ar7);
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9eb8 + 0x15;
            (*(code *)PTR_strcpy_8c0f9ec0)(a4,puVar3,ar6,ar7);
            uVar4 = 1;
            break;
          case 0xd:
            *(undefined4 *)(*(int *)(DAT_8c0f9ef4 + ar4) + 0x70) = 0;
            (*(code *)PTR_strcpy_8c0f9f00)
                      (uVar5,PTR_s_GRAPHICS_COMMON_8c0f9ef8 + DAT_8c0f9efc,ar6,ar7);
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9ef8 + 0x15;
            (*(code *)PTR_strcpy_8c0f9f00)(a4,puVar3,ar6,ar7);
            uVar4 = 1;
            break;
          case 0x11:
            *(undefined4 *)(*(int *)(DAT_8c0f9fd0 + ar4) + 0x70) = 0;
            puVar3 = PTR_s_GRAPHICS_COMMON_8c0f9fd4 + DAT_8c0f9fd8;
            (*(code *)PTR_strcpy_8c0f9fdc)(a4,puVar3,ar6,ar7);
            uVar4 = 1;
          }
        }
      }
    }
    else if (iVar1 == 3) {
      bVar6 = *(int *)(*(int *)(DAT_8c0fa148 + ar4) + 0x70) == 0x11;
      puVar3 = DAT_8c0fa148;
      if (bVar6) {
        puVar3 = PTR_s_GRAPHICS_COMMON_8c0fa1bc + DAT_8c0fa1c0;
        (*(code *)PTR_strcpy_8c0fa1c4)(a4,puVar3,ar6,ar7);
        *(undefined4 *)(*(int *)(DAT_8c0fa1c8 + ar4) + 0x70) = 0;
      }
      uVar4 = (uint)bVar6;
      puVar2 = (undefined *)(*(code *)PTR_FUN_8c0fa1cc)(ar4,puVar3,ar6,ar7);
      if ((((int)puVar2 < 0x13) &&
          (puVar3 = (undefined *)0x1, *(int *)(*(int *)(DAT_8c0fa1c8 + ar4) + 0x78) != 1)) &&
         (puVar3 = *(undefined **)(DAT_8c0fa1d0 + ar4),
         (int)puVar2 <= (int)*(undefined **)(DAT_8c0fa1d0 + ar4))) {
        ar6 = PTR_s_GRAPHICS_COMMON_8c0fa1bc + DAT_8c0fa1d4;
        (*(code *)PTR_s_CHAPTER_02d_0fa206_8c0fa1d8)(ar4,puVar2,ar6,ar7);
        uVar4 = 1;
        puVar3 = puVar2;
      }
    }
  }
LAB_8c0fa1a8:
  if (uVar4 == 1) {
    (*(code *)PTR_FUN_8c0fa1dc)(ar4,puVar3,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c0fa200)(ar4,puVar3,ar6,ar7);
  }
  return uVar4;
}



/* s_CHAPTER_02d_0fa206 @ 8c0fa204 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CHAPTER_02d_0fa206(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  
  a6 = ar6;
  (*(code *)PTR_FUN_8c0fa29c)(*(undefined4 *)(DAT_8c0fa298 + ar4),ar5,ar6,ar7);
  (*(code *)PTR_strcpy_8c0fa2a0)
            (*(int *)(DAT_8c0fa298 + ar4) + 0x20,*(undefined4 *)(DAT_8c0fa298 + ar4),a6,ar7);
  (*(code *)PTR_FUN_8c0fa2a8)
            (*(int *)(DAT_8c0fa298 + ar4) + 0x20,PTR_s_GRAPHICS_COMMON_8c0fa290 + DAT_8c0fa2a4,a6,
             ar7);
  (*(code *)PTR_FUN_8c0fa2a8)(*(int *)(DAT_8c0fa298 + ar4) + 0x20,ar6,a6,ar7);
  (*(code *)PTR_strcpy_8c0fa2a0)
            (*(int *)(DAT_8c0fa298 + ar4) + 0x40,PTR_s_GRAPHICS_COMMON_8c0fa290 + 0x15,a6,ar7);
  *(undefined4 *)(*(int *)(DAT_8c0fa298 + ar4) + 0x70) = 0;
  (*(code *)PTR_FUN_8c0fa2b0)(ar4 + DAT_8c0fa2ac,0,a6,ar7);
  iVar1 = DAT_8c0fa2b4;
  *(undefined4 *)(DAT_8c0fa2b4 + ar4) = 3;
  return iVar1;
}



/* FUN_8c0fa2b8 @ 8c0fa2b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa2b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(DAT_8c0fa2d0 + ar4) == 0) {
    return 0;
  }
  return *(undefined4 *)(DAT_8c0fa2d4 + ar4);
}



/* FUN_8c0fa2d8 @ 8c0fa2d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa2d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(DAT_8c0fa2ec + ar4) == 0) {
    return 0;
  }
  return 0;
}



/* FUN_8c0fa2f0 @ 8c0fa2f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa2f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fa30c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fa310 @ 8c0fa310 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa310(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memmove_8c0fa330)(ar5,ar4,DAT_8c0fa32c,ar7);
  return uVar1;
}



/* FUN_8c0fa334 @ 8c0fa334 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa334(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = DAT_8c0fa378;
  (*(code *)PTR_memmove_8c0fa37c)(ar4,ar5,DAT_8c0fa378,ar7);
  *(undefined4 *)(ar4 + 0xc) = 1;
  iVar1 = *(int *)(DAT_8c0fa380 + ar4);
  if (iVar1 == 1) {
    iVar2 = (*(code *)PTR_FUN_8c0fa384)(ar4,ar5,a6,ar7);
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0fa388 @ 8c0fa388 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa388(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  switch(ar5) {
  case 0:
    iVar1 = (*(code *)PTR_FUN_8c0fa530)(ar4,ar5,ar6,ar7);
    if (0 < iVar1) {
      return 1;
    }
    break;
  case 1:
    iVar1 = (*(code *)PTR_FUN_8c0fa530)(ar4,ar5,ar6,ar7);
    if (1 < iVar1) {
      return 1;
    }
    break;
  case 2:
    iVar1 = (*(code *)PTR_FUN_8c0fa530)(ar4,ar5,ar6,ar7);
    if (2 < iVar1) {
      return 1;
    }
    break;
  case 3:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (1 < iVar1) {
      return 1;
    }
    break;
  case 4:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (2 < iVar1) {
      return 1;
    }
    break;
  case 5:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (3 < iVar1) {
      return 1;
    }
    break;
  case 6:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (4 < iVar1) {
      return 1;
    }
    break;
  case 7:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (6 < iVar1) {
      return 1;
    }
    break;
  case 8:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (7 < iVar1) {
      return 1;
    }
    break;
  case 9:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (8 < iVar1) {
      return 1;
    }
    break;
  case 10:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (10 < iVar1) {
      return 1;
    }
    break;
  case 0xb:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (0xc < iVar1) {
      return 1;
    }
    break;
  case 0xc:
    iVar1 = (*(code *)PTR_FUN_8c0fa534)(ar4,ar5,ar6,ar7);
    if (0x12 < iVar1) {
      return 1;
    }
  }
  return 0;
}



/* FUN_8c0fa538 @ 8c0fa538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa538(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar3 = 8; iVar3 < 0x26; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0fa5a4)(ar4 + iVar3 * 4 + 0x10,ar5,ar6,ar7);
    if (99 < iVar1) {
      ar5 = PTR_s_GRAPHICS_COMMON_8c0fa5a8 + DAT_8c0fa5ac;
      (*(code *)PTR_strcpy_8c0fa5b0)(ar4 + iVar3 * 4 + 0x10,ar5,ar6,ar7);
    }
    if (2 < iVar1) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



/* FUN_8c0fa5b4 @ 8c0fa5b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa5b4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c0fa5bc @ 8c0fa5bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa5bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fa5ec)(ar4 + 0x10,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fa5f0 @ 8c0fa5f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa5f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fa620)(ar4 + 0x14,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fa624 @ 8c0fa624 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa624(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fa654)(ar4 + 0x18,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fa658 @ 8c0fa658 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa658(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0fa684)(ar4 + DAT_8c0fa680,ar5,ar6,ar7);
  return iVar1 + 1;
}



/* FUN_8c0fa688 @ 8c0fa688 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa688(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int iVar1;
  
  a4 = (*(code *)PTR_FUN_8c0fa6bc)(DAT_8c0fa6b8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fa6c0)(a4,ar5,ar6,ar7);
  iVar1 = DAT_8c0fa6c4;
  *(undefined4 *)(DAT_8c0fa6c4 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0fa6c8 @ 8c0fa6c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa6c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int iVar1;
  
  a4 = (*(code *)PTR_FUN_8c0fa6fc)(DAT_8c0fa6f8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fa704)(a4,PTR_DAT_8c0fa700,ar6,ar7);
  iVar1 = DAT_8c0fa708;
  *(undefined4 *)(DAT_8c0fa708 + ar4) = 1;
  return iVar1;
}



/* FUN_8c0fa70c @ 8c0fa70c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa70c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c0fa734 + ar4);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0fa738)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c0fa734 + ar4) = 0;
    iVar1 = DAT_8c0fa73c;
    *(undefined4 *)(DAT_8c0fa73c + ar4) = 0;
  }
  return iVar1;
}



/* get_field_89130_0fa740 @ 8c0fa740 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_89130_0fa740(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0fa748 + ar4);
}



/* FUN_8c0fa74c @ 8c0fa74c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0fa74c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0fa7d4)(PTR_DAT_8c0fa7d0,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0fa7dc;
  uVar2 = DAT_8c0fa7d8;
  (*(code *)PTR_global_list_push_8c0fa7e0)(uVar1,PTR_Vec3_dtor_8c0fa7dc,DAT_8c0fa7d8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0fa7d4)(PTR_DAT_8c0fa7e4,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0fa7dc;
  uVar2 = DAT_8c0fa7e8;
  (*(code *)PTR_global_list_push_8c0fa7e0)(uVar1,PTR_Vec3_dtor_8c0fa7dc,DAT_8c0fa7e8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0fa7d4)(PTR_DAT_8c0fa7ec,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0fa7dc;
  uVar2 = DAT_8c0fa7f0;
  (*(code *)PTR_global_list_push_8c0fa7e0)(uVar1,PTR_Vec3_dtor_8c0fa7dc,DAT_8c0fa7f0,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0fa7d4)(PTR_DAT_8c0fa7f4,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0fa7e0)(uVar2,PTR_Vec3_dtor_8c0fa7dc,DAT_8c0fa7f8,ar7);
  puVar3 = DAT_8c0fa800;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0fa7fc = *(undefined4 *)DAT_8c0fa800;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0fa7fc = *DAT_8c0fa800;
  }
  return puVar3;
}



/* FUN_8c0fa804 @ 8c0fa804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa804(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}



/* free_if_nonnull_wrap_0fa80c @ 8c0fa80c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0fa80c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0fa838)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0fa83c @ 8c0fa83c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa83c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  undefined1 auStack_14 [16];
  
  *(undefined1 *)(ar4 + 5) = 0;
  *(undefined1 *)(ar4 + 0xf) = 0;
  ar4[0xe] = 0;
  ar4[0xd] = 0;
  *(undefined1 *)(ar4 + 0x17) = 0;
  *(undefined4 *)(DAT_8c0fa8d8 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0fa8dc + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c0fa8e0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0fa8e4 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0fa8e8 + (int)ar4) = 0;
  (*(code *)PTR_FUN_8c0fa8ec)(auStack_14,ar5,ar6,ar7);
  a5 = (int)ar4 + DAT_8c0fa8f0;
  (*(code *)PTR_FUN_8c0fa8f4)(auStack_14,a5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0fa8fc)(DAT_8c0fa8f8,a5,ar6,ar7);
  ar4[2] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c0fa900)(DAT_8c0fa8f8,a5,ar6,ar7);
  ar4[3] = uVar1;
  *ar4 = 1;
  (*(code *)PTR_FUN_8c0fa904)(ar4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fa90c)(ar4[3],(int)ar4 + DAT_8c0fa908,ar6,ar7);
  return 1;
}



/* FUN_8c0fa910 @ 8c0fa910 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa910(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0fa93c)(ar4,ar5,ar6,ar7);
  while (*ar4 != 1) {
    (*(code *)PTR_s_SPEECH_0faa98_8c0fa940)(ar4,ar5,ar6,ar7);
  }
  *ar4 = 1;
  return 1;
}



/* FUN_8c0fa944 @ 8c0fa944 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa944(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*ar4 == 1) {
    ar4[4] = ar5;
    uVar1 = ar6;
    iVar2 = (*(code *)PTR_s_SPEECH_0fae26_8c0fa9e8)(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(ar4[4] + 4) = ar6;
      *(undefined4 *)(ar4[4] + 8) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x3c) + 4) = 0;
      *(undefined1 *)(*(int *)(ar4[4] + 0x3c) + 0x28) = 0;
      *(undefined1 *)(*(int *)(ar4[4] + 0x3c) + 0x2c) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x70) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x74) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x78) = 0;
      *(undefined4 *)(DAT_8c0fa9ec + (int)ar4) = 0;
      *(undefined4 *)(DAT_8c0fa9f0 + (int)ar4) = 0;
      (*(code *)PTR_FUN_8c0fa9f8)(ar4[3],(int)ar4 + DAT_8c0fa9f4,uVar1,ar7);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c0fa9fc @ 8c0fa9fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa9fc(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((1 < *ar4) && (uVar1 = 1, *(int *)(DAT_8c0faa34 + (int)ar4) != 1)) {
    (*(code *)PTR_FUN_8c0faa38)(ar4,ar5,ar6,ar7);
    *ar4 = 1;
    *(undefined4 *)(ar4[4] + 4) = 0;
    uVar1 = (*(code *)PTR_FUN_8c0faa3c)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0faa40 @ 8c0faa40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0faa40(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (1 < *ar4) {
    if (*ar4 == 7) {
      ar5 = *(undefined4 *)(DAT_8c0faa80 + (int)ar4);
      (*(code *)PTR_pack_release_entry_handle_8c0faa88)(DAT_8c0faa84,ar5,ar6,ar7);
      *ar4 = 6;
    }
    *(undefined4 *)(DAT_8c0faa8c + (int)ar4) = 0;
    uVar1 = (*(code *)PTR_FUN_8c0faa90)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* s_SPEECH_0faa98 @ 8c0faa94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * s_SPEECH_0faa98(int *ar4,undefined4 ar5,undefined *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  int a7;
  char acStack_2c [36];
  
  if (0 < *(int *)(DAT_8c0fab18 + (int)ar4)) {
    *(int *)(DAT_8c0fab18 + (int)ar4) = *(int *)(DAT_8c0fab18 + (int)ar4) + -1;
  }
  if (0 < *(int *)(DAT_8c0fab1c + (int)ar4)) {
    *(int *)(DAT_8c0fab1c + (int)ar4) = *(int *)(DAT_8c0fab1c + (int)ar4) + -1;
  }
  if ((*(int *)(DAT_8c0fab20 + (int)ar4) == 0) && (0 < *(int *)(DAT_8c0fab24 + (int)ar4))) {
    *(int *)(DAT_8c0fab24 + (int)ar4) = *(int *)(DAT_8c0fab24 + (int)ar4) + -1;
  }
  iVar2 = *ar4;
  if (8 < iVar2) {
    return (undefined *)8;
  }
  if (iVar2 < 1) {
    return (undefined *)1;
  }
  puVar1 = (&switchD_8c0fab12::switchdataD_8c0fab28)[iVar2 + -1];
  switch(iVar2) {
  case 1:
    break;
  case 2:
    *ar4 = 1;
    *(undefined4 *)(DAT_8c0fae18 + (int)ar4) = 0;
    (*(code *)PTR_FUN_8c0fae1c)(ar4,ar5,ar6,ar7);
    puVar1 = (undefined *)0x0;
    if (ar4[4] != 0) {
      *(undefined4 *)(ar4[4] + 4) = 0;
      puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fae20)(ar4,ar5,ar6,ar7);
    }
    break;
  case 3:
    if (*(int *)(DAT_8c0fab5c + (int)ar4) == 1) {
      *ar4 = 2;
      return (undefined *)2;
    }
    ar7 = ar4 + 0xe;
    ar6 = PTR_s_SPEECH_8c0faba0;
    iVar2 = (*(code *)PTR_FUN_8c0faba8)(DAT_8c0faba4,ar4 + 5,PTR_s_SPEECH_8c0faba0,ar7);
    if (iVar2 == 2) {
      return (undefined *)2;
    }
    if (iVar2 == 0) {
      *(undefined1 *)(ar4 + 5) = 0;
      *ar4 = 2;
      return (undefined *)2;
    }
    ar4[0xd] = 0;
    while (*(char *)(ar4[0xe] + ar4[0xd] * 0x28) != '\0') {
      ar4[0xd] = ar4[0xd] + 1;
    }
    *ar4 = 4;
  case 4:
    if (*(int *)(DAT_8c0fabf0 + (int)ar4) == 1) {
      puVar1 = (undefined *)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = (*(code *)PTR_s_SPEECH_0faf9e_8c0fac14)(ar4,*(int *)(ar4[4] + 0x40) + 0x20,ar6,ar7);
      if (iVar2 == 0) {
        puVar1 = (undefined *)0x2;
        *ar4 = 2;
      }
      else {
        *ar4 = 5;
switchD_8c0fab12_caseD_5:
        if (*(int *)(DAT_8c0fac2c + (int)ar4) == 1) {
          puVar1 = (undefined *)0x2;
          *ar4 = 2;
        }
        else {
          a7 = (int)ar4 + DAT_8c0fac7c;
          puVar1 = PTR_s_SPEECH_8c0fac80;
          iVar2 = (*(code *)PTR_FUN_8c0fac88)(DAT_8c0fac84,ar4 + 0xf,PTR_s_SPEECH_8c0fac80,a7);
          if (iVar2 == 2) {
            puVar1 = (undefined *)0x2;
          }
          else if (iVar2 == 0) {
            *(undefined1 *)(ar4 + 0x17) = 0;
            puVar1 = (undefined *)0x2;
            *ar4 = 2;
          }
          else {
            *ar4 = 6;
            (*(code *)PTR_strcpy_8c0faccc)(acStack_2c,*(int *)(ar4[4] + 0x40) + 0x40,puVar1,a7);
            if (acStack_2c[0] == '\0') {
              (*(code *)PTR_strcpy_8c0faccc)(acStack_2c,PTR_s_SPEECH_8c0facd0 + 7,puVar1,a7);
            }
            puVar1 = (undefined *)(*(code *)PTR_s_ERROR_0fb0de_8c0facd4)(ar4,acStack_2c,puVar1,a7);
          }
        }
      }
    }
    break;
  case 5:
    goto switchD_8c0fab12_caseD_5;
  case 6:
    if (*(int *)(DAT_8c0face8 + (int)ar4) == 1) {
      puVar1 = (undefined *)0x2;
      *ar4 = 2;
    }
    else {
      switch(*(undefined4 *)(*(int *)(DAT_8c0fad0c + (int)ar4) + 0x20)) {
      case 1:
        puVar1 = (undefined *)(*(code *)PTR_s_ERR_wrap_0fb1d4_8c0fad3c)(ar4,ar5,ar6,ar7);
        break;
      case 2:
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fad4c)(ar4,ar5,ar6,ar7);
        break;
      case 3:
        (*(code *)PTR_FUN_8c0fad64)(ar4,ar5,ar6,ar7);
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fad68)(ar4,ar5,ar6,ar7);
        break;
      case 4:
        puVar1 = (undefined *)(*(code *)PTR_s_SPEECH_0fbe00_8c0fad78)(ar4,ar5,ar6,ar7);
        break;
      case 5:
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fad88)(ar4,ar5,ar6,ar7);
        break;
      case 6:
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fad98)(ar4,ar5,ar6,ar7);
        break;
      case 7:
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fada8)(ar4,ar5,ar6,ar7);
        break;
      case 8:
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fadb8)(ar4,ar5,ar6,ar7);
        break;
      default:
        puVar1 = (undefined *)0x2;
        *ar4 = 2;
      }
    }
    break;
  case 7:
    puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fadd0)(ar4,ar5,ar6,ar7);
    break;
  case 8:
    puVar1 = (undefined *)(*(code *)PTR_s_SPEECH_0fbf2e_8c0fade0)(ar4,ar5,ar6,ar7);
  }
  return puVar1;
}



/* s_SPEECH_0fae26 @ 8c0fae24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fae26(undefined4 *ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [36];
  
  *(undefined4 *)(DAT_8c0faf10 + (int)ar4) = 0;
  (*(code *)PTR_strcpy_8c0faf14)(auStack_28,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7);
  (*(code *)PTR_FUN_8c0faf1c)(auStack_28,PTR_s_SPEECH_8c0faf18 + 9,ar6,ar7);
  (*(code *)PTR_strcpy_8c0faf14)(auStack_48,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7);
  (*(code *)PTR_FUN_8c0faf1c)(auStack_48,PTR_s_SPEECH_8c0faf18 + 0xe,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0faf20)(ar4 + 5,auStack_28,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(ar4 + 5) != '\0') {
      (*(code *)PTR_FUN_8c0faf28)(DAT_8c0faf24,ar4 + 5,PTR_s_SPEECH_8c0faf18,1);
      ar7 = 1;
      ar6 = PTR_s_SPEECH_8c0faf18;
      (*(code *)PTR_FUN_8c0faf28)(DAT_8c0faf24,ar4 + 0xf,PTR_s_SPEECH_8c0faf18,1);
    }
    (*(code *)PTR_strcpy_8c0faf14)(ar4 + 5,auStack_28,ar6,ar7);
    (*(code *)PTR_strcpy_8c0faf14)(ar4 + 0xf,auStack_48,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0faf2c)(DAT_8c0faf24,ar4 + 5,PTR_s_SPEECH_8c0faf18,ar4 + 0xe);
    if (iVar1 == 0) {
      *(undefined1 *)(ar4 + 5) = 0;
      return 0;
    }
  }
  *ar4 = 3;
  return 1;
}



/* FUN_8c0faf30 @ 8c0faf30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0faf30(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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



/* s_SPEECH_0faf9e @ 8c0faf98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0faf9e(int ar4,char *ar5,undefined *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [36];
  
  if (*(int *)(ar4 + 0x38) == 0) {
    return 0;
  }
  if (*ar5 == '\0') {
    (*(code *)PTR_strcpy_8c0fb0bc)(auStack_30,*(undefined4 *)(ar4 + 0x38),ar6,ar7);
    iVar2 = 0;
  }
  else {
    (*(code *)PTR_strcpy_8c0fb0bc)(auStack_30,ar5,ar6,ar7);
    iVar2 = 0;
    while ((iVar2 < *(int *)(ar4 + 0x34) &&
           (iVar1 = (*(code *)PTR_FUN_8c0fb0c0)
                              (iVar2 * 0x28 + *(int *)(ar4 + 0x38),auStack_30,ar6,ar7), iVar1 != 0))
          ) {
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(ar4 + 0x34) <= iVar2) {
      return 0;
    }
  }
  if ((*(char *)(ar4 + 0x5c) != '\0') &&
     ((*(int *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20) != *(int *)(ar4 + 0x7c) ||
      (iVar1 = (*(code *)PTR_FUN_8c0fb0c0)(auStack_30,ar4 + 0x5c,ar6,ar7), iVar1 != 0)))) {
    ar7 = 1;
    ar6 = PTR_s_SPEECH_8c0fb0c4;
    (*(code *)PTR_FUN_8c0fb0cc)(DAT_8c0fb0c8,ar4 + 0x3c,PTR_s_SPEECH_8c0fb0c4,1);
    *(undefined1 *)(ar4 + 0x5c) = 0;
  }
  (*(code *)PTR_strcpy_8c0fb0bc)(ar4 + 0x5c,auStack_30,ar6,ar7);
  *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20);
  *(undefined4 *)(DAT_8c0fb0d0 + ar4) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x24);
  return 1;
}



/* s_ERROR_0fb0de @ 8c0fb0d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_ERROR_0fb0de(undefined4 *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *a4;
  
  if (*ar5 == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else if (**(char **)(DAT_8c0fb1c4 + (int)ar4) == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c0fb1cc)(ar5,PTR_s_SPEECH_8c0fb1c8 + 0x13,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = 2;
      *ar4 = 2;
    }
    else if (*ar5 == '#') {
      *(undefined4 *)(DAT_8c0fb1d0 + (int)ar4) = *(undefined4 *)(DAT_8c0fb1c4 + (int)ar4);
      uVar1 = 6;
      *ar4 = 6;
    }
    else if (*ar5 == '$') {
      iVar2 = *(int *)(DAT_8c0fb1d0 + (int)ar4) +
              *(int *)(*(int *)(DAT_8c0fb1d0 + (int)ar4) + 0x24) + 0x28;
      if (*(int *)(iVar2 + 0x20) == 0) {
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        *(int *)(DAT_8c0fb1d0 + (int)ar4) = iVar2;
        uVar1 = 6;
        *ar4 = 6;
      }
    }
    else {
      for (a4 = *(char **)(DAT_8c0fb1c4 + (int)ar4); (*(int *)(a4 + 0x20) != 0 && (*a4 != '\0'));
          a4 = a4 + *(int *)(a4 + 0x24) + 0x28) {
        iVar2 = (*(code *)PTR_FUN_8c0fb1cc)(a4,ar5,ar6,ar7);
        if (iVar2 == 0) {
          *(char **)(DAT_8c0fb1d0 + (int)ar4) = a4;
          *ar4 = 6;
          return 6;
        }
      }
      uVar1 = 2;
      *ar4 = 2;
    }
  }
  return uVar1;
}



/* s_ERR_wrap_0fb1d4 @ 8c0fb1d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_ERR_wrap_0fb1d4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_8c0fb200 + (int)ar4) == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    uVar1 = (*(code *)PTR_s_ERROR_0fb0de_8c0fb208)(ar4,PTR_s_SPEECH_8c0fb204 + 0x1a,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0fb20c @ 8c0fb20c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fb20c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_8c0fb25c + (int)ar4) == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = *(int *)(DAT_8c0fb260 + (int)ar4);
    (*(code *)PTR_strcpy_8c0fb264)(*(int *)(ar4[4] + 0x40) + 0x20,iVar2 + 0x28,ar6,ar7);
    (*(code *)PTR_strcpy_8c0fb264)(*(int *)(ar4[4] + 0x40) + 0x40,iVar2 + 0x48,ar6,ar7);
    uVar1 = 4;
    *ar4 = 4;
  }
  return uVar1;
}



/* FUN_8c0fb268 @ 8c0fb268 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fb268(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_8c0fb460 + (int)ar4);
  *(undefined4 *)(DAT_8c0fb464 + (int)ar4) = 0xffffffff;
  *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x78) = 1;
  if (*(char *)(iVar4 + 0x48) == '#') {
    *(undefined4 *)(DAT_8c0fb468 + (int)ar4) = 0;
  }
  else if (*(char *)(iVar4 + 0x48) == '@') {
    uVar1 = (*(code *)PTR_rand_8c0fb46c)(ar4,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fb470)
                      (uVar1,*(undefined4 *)(iVar4 + 0x4c),ar6,ar7);
    *(undefined4 *)(DAT_8c0fb468 + (int)ar4) = uVar1;
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0fb474)(ar4,iVar4 + 0x48,ar6,ar7);
    *(undefined4 *)(DAT_8c0fb468 + (int)ar4) = uVar1;
    if (*(int *)(DAT_8c0fb468 + (int)ar4) < 0) {
      *(undefined4 *)(DAT_8c0fb468 + (int)ar4) = 0;
    }
    if (*(int *)(iVar4 + 0x4c) <= *(int *)(DAT_8c0fb468 + (int)ar4)) {
      *(int *)(DAT_8c0fb468 + (int)ar4) = *(int *)(iVar4 + 0x4c) + -1;
    }
  }
  iVar2 = (*(code *)PTR_FUN_8c0fb47c)
                    (*(int *)(DAT_8c0fb468 + (int)ar4) * 0x24 + iVar4 + 0x54,
                     PTR_s_SPEECH_8c0fb478 + 0x1c,ar6,ar7);
  if (iVar2 == 0) {
    uVar1 = (*(code *)PTR_s_ERROR_0fb0de_8c0fb480)(ar4,iVar4 + 0x28,ar6,ar7);
  }
  else {
    iVar4 = *(int *)(DAT_8c0fb468 + (int)ar4) * 0x24 + iVar4 + 0x54;
    uVar1 = DAT_8c0fb484;
    uVar3 = (*(code *)PTR_pack_acquire_entry_handle_8c0fb488)(DAT_8c0fb484,iVar4,ar6,ar7);
    *(undefined4 *)(DAT_8c0fb464 + (int)ar4) = uVar3;
    if (*(int *)(DAT_8c0fb464 + (int)ar4) < 0) {
      uVar1 = (*(code *)PTR_rand_8c0fb46c)(uVar1,iVar4,ar6,ar7);
      uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fb470)(uVar1,5,ar6,ar7);
      switch(uVar1) {
      case 0:
        uVar1 = (*(code *)PTR_pack_acquire_entry_handle_8c0fb488)
                          (DAT_8c0fb484,PTR_s_SPEECH_8c0fb478 + 0x22,ar6,ar7);
        *(undefined4 *)(DAT_8c0fb464 + (int)ar4) = uVar1;
        break;
      case 1:
        uVar1 = (*(code *)PTR_pack_acquire_entry_handle_8c0fb488)
                          (DAT_8c0fb484,PTR_s_SPEECH_8c0fb478 + 0x28,ar6,ar7);
        *(undefined4 *)(DAT_8c0fb464 + (int)ar4) = uVar1;
        break;
      case 2:
        uVar1 = (*(code *)PTR_pack_acquire_entry_handle_8c0fb488)
                          (DAT_8c0fb484,PTR_s_SPEECH_8c0fb478 + 0x2e,ar6,ar7);
        *(undefined4 *)(DAT_8c0fb464 + (int)ar4) = uVar1;
        break;
      case 3:
        uVar1 = (*(code *)PTR_pack_acquire_entry_handle_8c0fb488)
                          (DAT_8c0fb484,PTR_s_SPEECH_8c0fb478 + 0x34,ar6,ar7);
        *(undefined4 *)(DAT_8c0fb464 + (int)ar4) = uVar1;
        break;
      default:
        uVar1 = (*(code *)PTR_pack_acquire_entry_handle_8c0fb488)
                          (DAT_8c0fb484,PTR_s_SPEECH_8c0fb478 + 0x3a,ar6,ar7);
        *(undefined4 *)(DAT_8c0fb464 + (int)ar4) = uVar1;
      }
      if (*(int *)(DAT_8c0fb464 + (int)ar4) < 0) {
        uVar1 = (*(code *)PTR_s_ERROR_0fb0de_8c0fb480)
                          (ar4,*(int *)(DAT_8c0fb460 + (int)ar4) + 0x28,ar6,ar7);
        return uVar1;
      }
    }
    (*(code *)PTR_FUN_8c0fb490)
              (DAT_8c0fb484,*(undefined4 *)(DAT_8c0fb464 + (int)ar4),
               *(undefined4 *)(DAT_8c0fb48c + *(int *)(ar4[4] + 0x40)),0);
    uVar1 = 7;
    *ar4 = 7;
  }
  return uVar1;
}



/* FUN_8c0fb494 @ 8c0fb494 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0fb494(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int a5;
  undefined *a5_00;
  uint *a6;
  uint *puVar2;
  undefined4 a6_00;
  int *a7;
  undefined4 a7_00;
  int iVar3;
  uint auStack_50 [2];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint auStack_14 [2];
  
  puVar2 = auStack_50;
  if (*(int *)(DAT_8c0fb748 + (int)ar4) == 1) {
    (*(code *)PTR_pack_release_entry_handle_8c0fb754)
              (DAT_8c0fb750,*(undefined4 *)(DAT_8c0fb74c + (int)ar4),ar6,ar7);
    puVar1 = (undefined *)0x2;
    *ar4 = 2;
  }
  else {
    iVar3 = *(int *)(DAT_8c0fb758 + (int)ar4);
    a7 = &iStack_18;
    a6 = auStack_14;
    a5_00 = *(undefined **)(DAT_8c0fb74c + (int)ar4);
    a5 = (*(code *)PTR_FUN_8c0fb75c)(DAT_8c0fb750,a5_00,a6,a7);
    puVar1 = (undefined *)0x8;
    if ((a5 < 9) && (-1 < a5)) {
      puVar1 = (&switchD_8c0fb4fa::switchdataD_8c0fb500)[a5];
      iStack_20 = a5;
      switch(a5) {
      case 0:
      case 3:
        break;
      case 2:
        (*(code *)PTR_pack_release_entry_handle_8c0fb754)
                  (DAT_8c0fb750,*(undefined4 *)(DAT_8c0fb74c + (int)ar4),a6,a7);
      case 1:
        (*(code *)PTR_FUN_8c0fb760)(ar4,4,a6,a7);
        puVar1 = (undefined *)
                 (*(code *)PTR_s_ERROR_0fb0de_8c0fb764)
                           (ar4,*(int *)(DAT_8c0fb758 + (int)ar4) + 0x28,a6,a7);
        break;
      case 4:
        break;
      default:
        switch(auStack_14[0]) {
        case 1:
          iStack_24 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_24 * 0x24 + iVar3 + 0x50) = 0x4e;
          break;
        case 2:
          iStack_28 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_28 * 0x24 + iVar3 + 0x50) = 0x41;
          break;
        case 3:
          iStack_2c = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_2c * 0x24 + iVar3 + 0x50) = 0x4c;
          break;
        case 4:
          iStack_30 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_30 * 0x24 + iVar3 + 0x50) = 0x50;
          break;
        case 5:
          iStack_34 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_34 * 0x24 + iVar3 + 0x50) = 0x43;
          break;
        case 6:
          iStack_38 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_38 * 0x24 + iVar3 + 0x50) = 0x46;
          break;
        case 7:
          iStack_3c = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_3c * 0x24 + iVar3 + 0x50) = 0x53;
          break;
        case 8:
          iStack_40 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_40 * 0x24 + iVar3 + 0x50) = 0x49;
          break;
        case 9:
          iStack_44 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_44 * 0x24 + iVar3 + 0x50) = 0x48;
          break;
        case 10:
          iStack_48 = *(int *)(DAT_8c0fb768 + (int)ar4);
          *(undefined4 *)(iStack_48 * 0x24 + iVar3 + 0x50) = 0x55;
        }
        if (iStack_18 != 0) {
          (*(code *)PTR_FUN_8c0fb770)(auStack_50,a5_00,a6,a7);
          a5_00 = PTR_s_SPEECH_8c0fb76c + 0x43;
          (*(code *)PTR_FUN_8c0fb774)(ar4,a5_00,auStack_50,a7);
          a6 = puVar2;
        }
        if (iStack_1c != 0) {
          (*(code *)PTR_FUN_8c0fb770)(auStack_50,a5_00,a6,a7);
          (*(code *)PTR_FUN_8c0fb774)(ar4,PTR_s_SPEECH_8c0fb76c + 0x45,auStack_50,a7);
        }
        a7_00 = 0;
        a6_00 = *(undefined4 *)(DAT_8c0fb778 + *(int *)(ar4[4] + 0x40));
        (*(code *)PTR_FUN_8c0fb77c)(DAT_8c0fb750,*(undefined4 *)(DAT_8c0fb74c + (int)ar4),a6_00,0);
        puVar1 = (undefined *)(*(code *)PTR_FUN_8c0fb760)(ar4,a5,a6_00,a7_00);
      }
    }
  }
  return puVar1;
}



/* FUN_8c0fb780 @ 8c0fb780 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fb780(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fb7cc)
                    (ar4,*(undefined4 *)
                          (*(int *)(DAT_8c0fb7c8 + ar4) * 0x24 + *(int *)(DAT_8c0fb7c4 + ar4) + 0x50
                          ),ar5,ar7);
  return uVar1;
}



/* FUN_8c0fb7d0 @ 8c0fb7d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fb7d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x68)) {
  case 0:
    uVar1 = 0x43;
    break;
  case 1:
    uVar1 = 0x55;
    break;
  default:
    uVar1 = 0x4e;
    break;
  case 4:
    uVar1 = 0x53;
  }
  uVar1 = (*(code *)PTR_FUN_8c0fb838)(ar4,uVar1,4,ar7);
  return uVar1;
}



/* FUN_8c0fb83c @ 8c0fb83c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fb83c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_8c0fbdf8;
  iVar1 = 8;
  switch(ar6) {
  case 4:
    switch(ar5) {
    case 0x41:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 5;
      return iVar2;
    default:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0;
      return iVar2;
    case 0x43:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x14;
      return iVar2;
    case 0x46:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x19;
      return iVar2;
    case 0x48:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x28;
      return iVar2;
    case 0x49:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x23;
      return iVar2;
    case 0x4c:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 10;
      return iVar2;
    case 0x50:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0xf;
      return iVar2;
    case 0x53:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x1e;
      return iVar2;
    case 0x55:
      iVar2 = DAT_8c0fb9ac;
      *(undefined4 *)(DAT_8c0fb9ac + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x2d;
      return iVar2;
    }
  case 5:
    switch(ar5) {
    case 0x41:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 6;
      return iVar2;
    default:
      iVar2 = DAT_8c0fbac4;
      *(undefined4 *)(DAT_8c0fbac4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 1;
      return iVar2;
    case 0x43:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x15;
      return iVar2;
    case 0x46:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x1a;
      return iVar2;
    case 0x48:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x29;
      return iVar2;
    case 0x49:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x24;
      return iVar2;
    case 0x4c:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0xb;
      return iVar2;
    case 0x50:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x10;
      return iVar2;
    case 0x53:
      iVar2 = DAT_8c0fba84;
      *(undefined4 *)(DAT_8c0fba84 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x1f;
      return iVar2;
    case 0x55:
      iVar2 = DAT_8c0fbac4;
      *(undefined4 *)(DAT_8c0fbac4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x2e;
      return iVar2;
    }
  case 6:
    switch(ar5) {
    case 0x41:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 7;
      return iVar2;
    default:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 2;
      return iVar2;
    case 0x43:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x16;
      return iVar2;
    case 0x46:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x1b;
      return iVar2;
    case 0x48:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x2a;
      return iVar2;
    case 0x49:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x25;
      return iVar2;
    case 0x4c:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0xc;
      return iVar2;
    case 0x50:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x11;
      return iVar2;
    case 0x53:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x20;
      return iVar2;
    case 0x55:
      iVar2 = DAT_8c0fbbd8;
      *(undefined4 *)(DAT_8c0fbbd8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x2f;
      return iVar2;
    }
  case 7:
    switch(ar5) {
    case 0x41:
      iVar2 = DAT_8c0fbc64;
      *(undefined4 *)(DAT_8c0fbc64 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 8;
      return iVar2;
    default:
      iVar2 = DAT_8c0fbcf4;
      *(undefined4 *)(DAT_8c0fbcf4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 3;
      return iVar2;
    case 0x43:
      iVar2 = DAT_8c0fbcf4;
      *(undefined4 *)(DAT_8c0fbcf4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x17;
      return iVar2;
    case 0x46:
      iVar2 = DAT_8c0fbcf4;
      *(undefined4 *)(DAT_8c0fbcf4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x1c;
      return iVar2;
    case 0x48:
      iVar2 = DAT_8c0fbcf4;
      *(undefined4 *)(DAT_8c0fbcf4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x2b;
      return iVar2;
    case 0x49:
      iVar2 = DAT_8c0fbcf4;
      *(undefined4 *)(DAT_8c0fbcf4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x26;
      return iVar2;
    case 0x4c:
      iVar2 = DAT_8c0fbc64;
      *(undefined4 *)(DAT_8c0fbc64 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0xd;
      return iVar2;
    case 0x50:
      iVar2 = DAT_8c0fbc64;
      *(undefined4 *)(DAT_8c0fbc64 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x12;
      return iVar2;
    case 0x53:
      iVar2 = DAT_8c0fbcf4;
      *(undefined4 *)(DAT_8c0fbcf4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x21;
      return iVar2;
    case 0x55:
      iVar2 = DAT_8c0fbcf4;
      *(undefined4 *)(DAT_8c0fbcf4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x30;
      return iVar2;
    }
  case 8:
    switch(ar5) {
    case 0x41:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 9;
      return iVar2;
    default:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 4;
      iVar1 = iVar2;
      break;
    case 0x43:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x18;
      return iVar2;
    case 0x46:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x1d;
      return iVar2;
    case 0x48:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x2c;
      return iVar2;
    case 0x49:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x27;
      return iVar2;
    case 0x4c:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0xe;
      return iVar2;
    case 0x50:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x13;
      return iVar2;
    case 0x53:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x22;
      return iVar2;
    case 0x55:
      *(undefined4 *)(DAT_8c0fbdf8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0x31;
      return iVar2;
    }
  }
  return iVar1;
}



/* s_SPEECH_0fbe00 @ 8c0fbdfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fbe00(undefined4 *ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  undefined *a6;
  int a5_00;
  
  a5_00 = *(int *)(DAT_8c0fbef0 + (int)ar4);
  iVar1 = (*(code *)PTR_FUN_8c0fbef8)(a5_00 + 0x2c,(int)ar4 + DAT_8c0fbef4,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(DAT_8c0fbef4 + (int)ar4) != '\0') {
      ar6 = PTR_s_SPEECH_8c0fbefc;
      (*(code *)PTR_FUN_8c0fbf00)(ar4[2],(int)ar4 + DAT_8c0fbef4,PTR_s_SPEECH_8c0fbefc,ar7);
    }
    (*(code *)PTR_strcpy_8c0fbf04)((int)ar4 + DAT_8c0fbef4,a5_00 + 0x2c,ar6,ar7);
  }
  a5 = (int)ar4 + DAT_8c0fbef4;
  a6 = PTR_s_SPEECH_8c0fbefc;
  iVar1 = (*(code *)PTR_asr_register_strings_8c0fbf08)(ar4[2],a5,PTR_s_SPEECH_8c0fbefc,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c0fbf0c)(ar4[2],a5,a6,ar7);
    uVar2 = 2;
    *ar4 = 2;
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0fbf10)(ar4[2],a5,a6,ar7);
    if (iVar1 == 0) {
      uVar2 = 2;
      *ar4 = 2;
    }
    else {
      *(undefined4 *)(DAT_8c0fbf14 + (int)ar4) = DAT_8c0fbf18;
      *(undefined4 *)(DAT_8c0fbf1c + (int)ar4) = 0;
      iVar1 = (*(code *)PTR_FUN_8c0fbf20)(ar4,a5_00,a6,ar7);
      if ((iVar1 == 1) || (*(int *)(a5_00 + 0x28) == 4)) {
        *(undefined4 *)(DAT_8c0fbf14 + (int)ar4) = DAT_8c0fbf24;
        *(undefined4 *)(DAT_8c0fbf1c + (int)ar4) = 1;
      }
      else if (*(int *)(a5_00 + 0x28) == 1) {
        *(undefined4 *)(DAT_8c0fbf14 + (int)ar4) = DAT_8c0fbf18;
      }
      else if (*(int *)(a5_00 + 0x28) == 2) {
        *(undefined4 *)(DAT_8c0fbf14 + (int)ar4) = 0x5a;
      }
      uVar2 = 8;
      *ar4 = 8;
    }
  }
  return uVar2;
}



/* s_SPEECH_0fbf2e @ 8c0fbf28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fbf2e(undefined4 *ar4,undefined4 ar5,undefined *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *a5;
  int aiStack_16c [4];
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
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [272];
  
  if (*(int *)(DAT_8c0fbf50 + (int)ar4) == 1) {
    (*(code *)PTR_FUN_8c0fbf54)(ar4[2],ar5,ar6,ar7);
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    if (*(int *)(DAT_8c0fc038 + (int)ar4) == 1) {
      *(undefined4 *)(DAT_8c0fc03c + (int)ar4) = 0;
      *(undefined4 *)(DAT_8c0fc038 + (int)ar4) = 0;
    }
    if (*(int *)(DAT_8c0fc040 + (int)ar4) == 1) {
      (*(code *)PTR_strcpy_8c0fc048)(auStack_11c,(int)ar4 + DAT_8c0fc044,ar6,ar7);
      (*(code *)PTR_FUN_8c0fc050)(auStack_11c,PTR_s_SPEECH_8c0fc04c + 0x47,ar6,ar7);
      ar7 = auStack_120;
      ar6 = PTR_s_SPEECH_8c0fc04c;
      iStack_124 = (*(code *)PTR_FUN_8c0fc058)(DAT_8c0fc054,auStack_11c,PTR_s_SPEECH_8c0fc04c,ar7);
      if (iStack_124 == 1) {
        ar7 = (undefined1 *)0x1;
        iVar2 = (int)ar4 + DAT_8c0fc044;
        ar6 = PTR_s_SPEECH_8c0fc04c;
        (*(code *)PTR_FUN_8c0fc05c)(DAT_8c0fc054,iVar2,PTR_s_SPEECH_8c0fc04c,1);
        if (*(int *)(DAT_8c0fc038 + (int)ar4) == 0) {
          (*(code *)PTR_FUN_8c0fc060)(ar4[3],iVar2,ar6,ar7);
        }
        if (*(int *)(DAT_8c0fc038 + (int)ar4) == 0) {
          (*(code *)PTR_FUN_8c0fc064)(ar4[3],iVar2,ar6,ar7);
        }
        (*(code *)PTR_FUN_8c0fc06c)(ar4[3],PTR_DAT_8c0fc068,ar6,ar7);
        *(undefined4 *)(DAT_8c0fc040 + (int)ar4) = 0;
      }
    }
    a5 = *(undefined **)(DAT_8c0fc070 + (int)ar4);
    *(undefined1 *)((int)aiStack_16c + DAT_8c0fc074) = 0;
    *(undefined4 *)((int)aiStack_16c + DAT_8c0fc078) = 0;
    if (*(int *)(DAT_8c0fc03c + (int)ar4) < 1) {
      (*(code *)PTR_strcpy_8c0fc048)
                ((int)aiStack_16c + DAT_8c0fc074,PTR_s_SPEECH_8c0fc04c + 0x4c,ar6,ar7);
      *(undefined4 *)((int)aiStack_16c + DAT_8c0fc078) = 1;
    }
    else {
      if (*(char *)((int)aiStack_16c + DAT_8c0fc100) == '\0') {
        (*(code *)PTR_FUN_8c0fc108)(ar4[2],(int)aiStack_16c + DAT_8c0fc104,ar6,ar7);
      }
      if (*(int *)((int)aiStack_16c + DAT_8c0fc104) != 0) {
        iStack_138 = *(int *)(ar4[4] + 0x3c);
        *(int *)(iStack_138 + 4) = *(int *)(iStack_138 + 4) + 1;
      }
    }
    if (*(int *)((int)aiStack_16c + DAT_8c0fc104) == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = PTR_s_SPEECH_8c0fc10c + 0x50;
      iStack_128 = (*(code *)PTR_FUN_8c0fc110)((int)aiStack_16c + DAT_8c0fc100,puVar3,ar6,ar7);
      if (((iStack_128 == 0) && (0 < **(int **)(ar4[4] + 0x3c))) &&
         (*(int *)(*(int *)(ar4[4] + 0x40) + 100) != **(int **)(ar4[4] + 0x3c))) {
        (*(code *)PTR_FUN_8c0fc114)(ar4[2],puVar3,ar6,ar7);
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        for (iVar2 = 0; iVar2 < *(int *)(a5 + 0x6c); iVar2 = iVar2 + 1) {
          puVar3 = a5 + iVar2 * 0x68 + 0x70;
          iStack_13c = iVar2;
          iStack_12c = (*(code *)PTR_FUN_8c0fc174)((int)aiStack_16c + DAT_8c0fc170,puVar3,ar6,ar7);
          if (iStack_12c == 0) break;
        }
        if (*(int *)(a5 + 0x6c) <= iVar2) {
          puVar3 = PTR_s_SPEECH_8c0fc178 + 0x56;
          (*(code *)PTR_strcpy_8c0fc17c)((int)aiStack_16c + DAT_8c0fc170,puVar3,ar6,ar7);
          for (iVar2 = 0; iVar2 < *(int *)(a5 + 0x6c); iVar2 = iVar2 + 1) {
            puVar3 = a5 + iVar2 * 0x68 + 0x70;
            iStack_140 = iVar2;
            iStack_130 = (*(code *)PTR_FUN_8c0fc1c8)((int)aiStack_16c + DAT_8c0fc1c4,puVar3,ar6,ar7)
            ;
            if (iStack_130 == 0) break;
          }
        }
        if (*(char *)((int)aiStack_16c + DAT_8c0fc1c4) != '-') {
          if (*(char *)((int)aiStack_16c + DAT_8c0fc1c4) == '?') {
            puVar3 = PTR_DAT_8c0fc1e4;
            (*(code *)PTR_FUN_8c0fc1e8)(ar4[3],PTR_DAT_8c0fc1e4,ar6,ar7);
            (*(code *)PTR_FUN_8c0fc1ec)(ar4,puVar3,ar6,ar7);
          }
          else {
            puVar3 = PTR_DAT_8c0fc2a8;
            (*(code *)PTR_FUN_8c0fc2ac)(ar4[3],PTR_DAT_8c0fc2a8,ar6,ar7);
            (*(code *)PTR_FUN_8c0fc2b0)(ar4,puVar3,ar6,ar7);
            puVar3 = a5;
            iStack_134 = (*(code *)PTR_FUN_8c0fc2b4)(ar4,a5,ar6,ar7);
            if (iStack_134 == 1) {
              puVar3 = a5;
              (*(code *)PTR_FUN_8c0fc2b8)(ar4,a5,ar6,ar7);
            }
          }
        }
        if (iVar2 < *(int *)(a5 + 0x6c)) {
          iStack_144 = iVar2;
          if (a5[DAT_8c0fc2bc + iVar2 * 0x68] == '\0') {
            aiStack_16c[2] = iVar2;
            (*(code *)PTR_FUN_8c0fc390)(ar4,a5 + iVar2 * 0x68 + 0x70,ar6,ar7);
          }
          else {
            iStack_148 = iVar2;
            if (a5[DAT_8c0fc2c0 + iVar2 * 0x68] == '\0') {
              ar6 = a5 + iVar2 * 0x68 + 0x70;
              iStack_15c = iVar2;
              iStack_158 = iVar2;
              (*(code *)PTR_FUN_8c0fc318)(ar4,a5 + DAT_8c0fc314 + iVar2 * 0x68,ar6,ar7);
              aiStack_16c[3] = iVar2;
              (*(code *)PTR_FUN_8c0fc31c)(ar4,a5 + iVar2 * 0x68 + 0x70,ar6,ar7);
            }
            else {
              ar6 = a5 + DAT_8c0fc2c0 + iVar2 * 0x68;
              iStack_150 = iVar2;
              iStack_14c = iVar2;
              (*(code *)PTR_FUN_8c0fc2c4)(ar4,a5 + DAT_8c0fc2bc + iVar2 * 0x68,ar6,ar7);
              iStack_154 = iVar2;
              (*(code *)PTR_FUN_8c0fc2c8)(ar4,a5 + DAT_8c0fc2c0 + iVar2 * 0x68,ar6,ar7);
            }
          }
          puVar3 = *(undefined **)(a5 + DAT_8c0fc394 + iVar2 * 0x68);
          aiStack_16c[1] = iVar2;
          (*(code *)PTR_FUN_8c0fc398)(*(undefined4 *)(ar4[4] + 0x40),puVar3,ar6,ar7);
        }
        (*(code *)PTR_FUN_8c0fc39c)(ar4[2],puVar3,ar6,ar7);
        if (*(char *)((int)aiStack_16c + DAT_8c0fc3a0) == '!') {
          ar6 = PTR_s_SPEECH_8c0fc3a4;
          (*(code *)PTR_asr_register_strings_8c0fc3ac)
                    (ar4[2],(int)ar4 + DAT_8c0fc3a8,PTR_s_SPEECH_8c0fc3a4,ar7);
        }
        if (*(int *)(*(int *)(ar4[4] + 0x40) + 0x70) == 0x11) {
          uVar1 = 2;
          *ar4 = 2;
        }
        else {
          aiStack_16c[0] = iVar2;
          uVar1 = (*(code *)PTR_s_ERROR_0fb0de_8c0fc3e0)
                            (ar4,a5 + DAT_8c0fc3dc + iVar2 * 0x68,ar6,ar7);
        }
      }
    }
  }
  return uVar1;
}



/* FUN_8c0fc3e4 @ 8c0fc3e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc3e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x74) = 1;
  uVar1 = (*(code *)PTR_FUN_8c0fc408)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fc40c @ 8c0fc40c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc40c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  (*(code *)PTR_FUN_8c0fc434)(auStack_10,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0fc43c)(auStack_10,ar4 + DAT_8c0fc438,ar6,ar7);
  return uVar1;
}



/* get_field_c8_0fc440 @ 8c0fc440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c8_0fc440(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0fc448 + ar4);
}



/* FUN_8c0fc44c @ 8c0fc44c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc44c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0xf; 0 < iVar2; iVar2 = iVar2 + -1) {
    (*(code *)PTR_strcpy_8c0fc4c0)
              (*(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar2 * 0x20 + DAT_8c0fc4bc,
               *(int *)(*(int *)(ar4 + 0x10) + 0x40) + (iVar2 + -1) * 0x20 + DAT_8c0fc4bc,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_strcpy_8c0fc4c0)
                    (*(int *)(*(int *)(ar4 + 0x10) + 0x40) + DAT_8c0fc4bc,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fc4c4 @ 8c0fc4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc4c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0fc4f8)(DAT_8c0fc4f4,ar5,ar6,ar7);
  if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c0fc4fc @ 8c0fc4fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc4fc(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  int iVar2;
  undefined1 auStack_18 [16];
  
  if ((*(int *)(ar5 + 0x28) != 1) && (*(int *)(ar5 + 0x28) != 2)) {
    for (iVar2 = 0; iVar2 < *(int *)(ar5 + 0x6c); iVar2 = iVar2 + 1) {
      a5 = ar5 + iVar2 * 0x68 + 0x70;
      iVar1 = (*(code *)PTR_FUN_8c0fc5a0)(PTR_s_SPEECH_8c0fc59c + 0x4c,a5,ar6,ar7);
      if (iVar1 == 0) {
        (*(code *)PTR_FUN_8c0fc5a4)(auStack_18,a5,ar6,ar7);
        iVar1 = (*(code *)PTR_FUN_8c0fc5a0)(auStack_18,ar5 + iVar2 * 0x68 + DAT_8c0fc5a8,ar6,ar7);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* FUN_8c0fc5ac @ 8c0fc5ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc5ac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_8c0fc5f8 + ar4);
  uVar1 = (*(code *)PTR_rand_8c0fc5fc)(ar4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fc600)
                    (uVar1,*(undefined4 *)(iVar3 + 0x28),ar6,ar7);
  uVar1 = (*(code *)PTR_s_ERROR_0fb0de_8c0fc604)(ar4,iVar3 + iVar2 * 0x20 + 0x2c,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fc608 @ 8c0fc608 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc608(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_8c0fc690 + ar4);
  iVar1 = (*(code *)PTR_FUN_8c0fc694)(ar4,iVar4 + 0x28,ar6,ar7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (*(int *)(iVar4 + 0x30) <= iVar1) {
    iVar1 = *(int *)(iVar4 + 0x30) + -1;
  }
  iVar2 = (*(code *)PTR_FUN_8c0fc694)(ar4,iVar4 + 0x2c,ar6,ar7);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (*(int *)(iVar4 + 0x34) <= iVar2) {
    iVar2 = *(int *)(iVar4 + 0x34) + -1;
  }
  uVar3 = (*(code *)PTR_s_ERROR_0fb0de_8c0fc698)
                    (ar4,iVar4 + (iVar2 * *(int *)(iVar4 + 0x30) + iVar1) * 0x20 + 0x38,ar6,ar7);
  return uVar3;
}



/* FUN_8c0fc69c @ 8c0fc69c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc69c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r14;
  
  iVar4 = *(int *)(DAT_8c0fc7b4 + ar4);
  for (iVar5 = 0; iVar5 < *(int *)(iVar4 + 0x68); iVar5 = iVar5 + 1) {
    unaff_r14 = 0;
    iVar6 = iVar4 + iVar5 * 0x2c;
    iVar3 = iVar6 + 0x70;
    iVar1 = (*(code *)PTR_FUN_8c0fc7b8)(ar4,iVar3,ar6,ar7);
    if (*(char *)(iVar6 + 0x74) < '\x01') {
      iVar3 = (*(code *)PTR_FUN_8c0fc7bc)(iVar6 + 0x78,iVar3,ar6,ar7);
    }
    else {
      iVar3 = (*(code *)PTR_FUN_8c0fc7b8)(ar4,iVar6 + 0x74,ar6,ar7);
    }
    switch(*(undefined4 *)(iVar6 + 0x6c)) {
    case 0:
      if (iVar1 == iVar3) {
        unaff_r14 = 1;
      }
      break;
    case 1:
      if (iVar1 != iVar3) {
        unaff_r14 = 1;
      }
      break;
    case 2:
      if (iVar1 < iVar3) {
        unaff_r14 = 1;
      }
      break;
    case 3:
      if (iVar1 <= iVar3) {
        unaff_r14 = 1;
      }
      break;
    case 4:
      if (iVar3 < iVar1) {
        unaff_r14 = 1;
      }
      break;
    case 5:
      if (iVar3 <= iVar1) {
        unaff_r14 = 1;
      }
    }
    if (unaff_r14 == 0) break;
  }
  if (unaff_r14 == 1) {
    uVar2 = (*(code *)PTR_s_ERROR_0fb0de_8c0fc7c0)(ar4,iVar4 + 0x28,ar6,ar7);
  }
  else {
    uVar2 = (*(code *)PTR_s_ERROR_0fb0de_8c0fc7c0)(ar4,iVar4 + 0x48,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c0fc7c4 @ 8c0fc7c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc7c4(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int a5;
  int a5_00;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar2 = *(int *)(DAT_8c0fc918 + ar4);
  for (iVar3 = 0; iVar3 < *(int *)(iVar2 + 0x48); iVar3 = iVar3 + 1) {
    iVar4 = iVar2 + iVar3 * 0x2c;
    a5 = iVar4 + 0x4c;
    iStack_28 = iVar3;
    if (*(char *)(iVar4 + 0x74) == '\0') {
      (*(code *)PTR_strcpy_8c0fc920)(auStack_38,iVar4 + 0x54,ar6,ar7);
    }
    else {
      ar6 = auStack_38;
      (*(code *)PTR_FUN_8c0fc91c)(ar4,iVar4 + 0x74,auStack_38,ar7);
    }
    if (*(int *)(iVar4 + 0x50) == 0) {
      ar6 = auStack_38;
      (*(code *)PTR_FUN_8c0fc924)(ar4,a5,auStack_38,ar7);
    }
    else {
      a5_00 = a5;
      uVar1 = (*(code *)PTR_FUN_8c0fc928)(ar4,a5,ar6,ar7);
      uStack_20 = uVar1;
      iStack_24 = (*(code *)PTR_FUN_8c0fc92c)(auStack_38,a5_00,ar6,ar7);
      switch(*(undefined4 *)(iVar4 + 0x50)) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        a5_00 = iStack_24;
        if (iStack_24 < 0) {
          a5_00 = 1;
        }
        uStack_2c = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0fc930)(uVar1,a5_00,ar6,ar7);
        break;
      case 5:
        a5_00 = iStack_24;
        if (iStack_24 < 0) {
          a5_00 = 1;
        }
        uStack_30 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fc934)(uVar1,a5_00,ar6,ar7);
      }
      (*(code *)PTR_FUN_8c0fc944)(auStack_38,a5_00,ar6,ar7);
      ar6 = auStack_38;
      (*(code *)PTR_FUN_8c0fc924)(ar4,a5,auStack_38,ar7);
    }
  }
  uVar1 = (*(code *)PTR_s_ERROR_0fb0de_8c0fc948)(ar4,iVar2 + 0x28,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fc94c @ 8c0fc94c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fc94c(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *a5;
  char *a6;
  undefined1 auStack_34 [2];
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 auStack_2a [4];
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  
  iVar4 = (int)*ar5;
  if (iVar4 < 0x4a) {
    if (0x48 < iVar4) {
      *(undefined4 *)(*(int *)(ar4 + 0x10) + 8) = 1;
      return 1;
    }
    if ((iVar4 < 0x44) && (0x40 < iVar4)) {
      if (iVar4 == 0x41) {
        return 0x41;
      }
      if (iVar4 == 0x43) {
        uVar3 = (*(code *)PTR_FUN_8c0fca5c)(ar6,ar5,ar6,ar7);
        iVar4 = DAT_8c0fca90;
        switch(uVar3) {
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          *(undefined4 *)(DAT_8c0fca90 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = uVar3;
          return iVar4;
        case 2:
          goto switchD_8c0fca58_caseD_2;
        default:
          return 1;
        }
      }
    }
  }
  else if (iVar4 < 0x57) {
    if (0x4a < iVar4) {
      switch(iVar4) {
      case 0x4b:
        uVar3 = (*(code *)PTR_FUN_8c0fca20)(ar6,ar5,ar6,ar7);
        uVar3 = (*(code *)PTR_FUN_8c0fca24)
                          (*(undefined4 *)(*(int *)(ar4 + 0x10) + 0x40),uVar3,ar6,ar7);
        return uVar3;
      case 0x50:
        return (&switchD_8c0fc9ba::switchdataD_8c0fc9c0)[iVar4 + -0x4b];
      case 0x52:
        uVar3 = (*(code *)PTR_FUN_8c0fcc28)(ar6,ar5,ar6,ar7);
        uVar3 = (*(code *)PTR_FUN_8c0fcc2c)(ar4,uVar3,ar6,ar7);
        return uVar3;
      case 0x55:
        uVar3 = (*(code *)PTR_FUN_8c0fcaf0)(ar6,ar5,ar6,ar7);
        *(undefined4 *)(DAT_8c0fcaf4 + ar4) = uVar3;
        uVar3 = (*(code *)PTR_FUN_8c0fcaf8)(ar4,ar5,ar6,ar7);
        return uVar3;
      case 0x56:
        uVar3 = (*(code *)PTR_FUN_8c0fcb18)(ar6,ar5,ar6,ar7);
        *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x70) = uVar3;
        return 0x70;
      }
    }
  }
  else if (iVar4 == 100) {
    (*(code *)PTR_FUN_8c0fcbec)(auStack_2a,ar5,ar6,ar7);
    uStack_26 = 0;
    uStack_25 = 0;
    uStack_24 = 0;
    (*(code *)PTR_FUN_8c0fcbec)(auStack_34,ar5,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c0fcbf4)
                      (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fcbf0,ar5,ar6,ar7);
    uStack_32 = (undefined1)uVar3;
    uVar3 = (*(code *)PTR_FUN_8c0fcbf4)
                      (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fcbf8,ar5,ar6,ar7);
    uStack_31 = (undefined1)uVar3;
    uStack_30 = 0;
    uStack_2f = 0;
    uStack_2e = 0;
    (*(code *)PTR_FUN_8c0fcbf4)(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fcbfc,ar5,ar6,ar7);
    a5 = auStack_34;
    (*(code *)PTR_FUN_8c0fcc00)(auStack_2a,a5,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c0fcc0c)
                      (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fcc08,a5,ar6,ar7);
    return uVar3;
  }
  a6 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c0fcc64)(ar5,ar5,ar6,ar7);
  iVar4 = (*(code *)PTR_FUN_8c0fcc64)
                    (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar1 * 4 + 0x10,ar5,a6,ar7);
  if (*ar6 == '+') {
    iVar2 = (*(code *)PTR_FUN_8c0fcc7c)(ar6 + 1,ar5,a6,ar7);
    iVar4 = iVar4 + iVar2;
  }
  else if (*ar6 == '-') {
    iVar2 = (*(code *)PTR_FUN_8c0fcc94)(ar6 + 1,ar5,a6,ar7);
    iVar4 = iVar4 - iVar2;
  }
  else {
    iVar4 = (*(code *)PTR_FUN_8c0fcd18)(ar6,ar5,a6,ar7);
  }
  if (DAT_8c0fcd1c <= iVar4) {
    iVar4 = DAT_8c0fcd20;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (((iVar1 == 6) &&
      (iVar2 = (*(code *)PTR_FUN_8c0fcd18)(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x28,ar5,a6,ar7),
      iVar2 == iVar4)) && (0 < iVar2)) {
    *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x70) = 0x11;
  }
  uVar3 = (*(code *)PTR_FUN_8c0fcd28)
                    (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar1 * 4 + 0x10,ar5,a6,ar7);
  return uVar3;
switchD_8c0fca58_caseD_2:
  *(undefined4 *)(DAT_8c0fcac4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 1;
  iVar4 = *(int *)(DAT_8c0fcac4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
  if (iVar4 != 1) {
    return iVar4;
  }
  *(undefined4 *)(DAT_8c0fcac8 + ar4) = DAT_8c0fcacc;
  uVar3 = (*(code *)PTR_FUN_8c0fcad0)(ar4,ar5,ar6,ar7);
  return uVar3;
}



/* FUN_8c0fcd2c @ 8c0fcd2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0fcd2c(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *a5;
  uint uVar7;
  int iStack_30;
  undefined1 auStack_2c [2];
  byte bStack_2a;
  byte bStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  ushort uStack_22;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  undefined1 uStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  
  uVar7 = 0;
  switch(*ar5) {
  case 0x41:
  case 0x4f:
  case 0x50:
  case 0x67:
  case 0x68:
    break;
  case 0x42:
    uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x18);
    break;
  case 0x43:
    if ((*(int *)(DAT_8c0fd050 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) == 1) &&
       (*(int *)(DAT_8c0fd054 + ar4) < 1)) {
      *(undefined4 *)(DAT_8c0fd050 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) = 0;
    }
    iVar6 = *(int *)(DAT_8c0fd050 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
    if (iVar6 == 0) {
      uVar7 = 0;
      *(undefined4 *)(DAT_8c0fd068 + ar4) = 0;
    }
    else if (iVar6 == 1) {
      uVar7 = 2;
    }
    break;
  case 0x44:
    (*(code *)PTR_FUN_8c0fce98)(&uStack_22,ar5,ar6,ar7);
    uVar7 = (uint)bStack_1f;
    break;
  case 0x45:
    uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x7c);
    break;
  case 0x46:
    uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x1c);
    break;
  case 0x47:
    (*(code *)PTR_FUN_8c0fcf08)(&uStack_22,ar5,ar6,ar7);
    uVar7 = (uint)bStack_1a;
    break;
  case 0x48:
    (*(code *)PTR_FUN_8c0fceb4)(&uStack_22,ar5,ar6,ar7);
    uVar7 = (uint)bStack_1e;
    break;
  default:
    iVar6 = (*(code *)PTR_FUN_8c0fd760)(ar5,ar5,ar6,ar7);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    uVar7 = (*(code *)PTR_FUN_8c0fd760)
                      (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar6 * 4 + 0x10,ar5,ar6,ar7);
    break;
  case 0x4b:
    uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x68);
    break;
  case 0x4c:
    uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x60);
    break;
  case 0x4d:
    (*(code *)PTR_FUN_8c0fce7c)(&uStack_22,ar5,ar6,ar7);
    uVar7 = (uint)bStack_20;
    break;
  case 0x4e:
    (*(code *)PTR_FUN_8c0fced0)(&uStack_22,ar5,ar6,ar7);
    uVar7 = (uint)bStack_1d;
    break;
  case 0x51:
    (*(code *)PTR_FUN_8c0fd270)(&uStack_22,ar5,ar6,ar7);
    uVar5 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fd278)
                      ((uint)uStack_22 + DAT_8c0fd274,0xc,ar6,ar7);
    switch(uVar5) {
    case 0:
      uVar7 = 0;
      break;
    case 1:
      uVar7 = 0xb;
      break;
    case 2:
      uVar7 = 10;
      break;
    case 3:
      uVar7 = 9;
      break;
    case 4:
      uVar7 = 8;
      break;
    case 5:
      uVar7 = 7;
      break;
    case 6:
      uVar7 = 6;
      break;
    case 7:
      uVar7 = 5;
      break;
    case 8:
      uVar7 = 4;
      break;
    case 9:
      uVar7 = 3;
      break;
    case 10:
      uVar7 = 2;
      break;
    case 0xb:
      uVar7 = 1;
    }
    break;
  case 0x52:
    if (*(char *)(DAT_8c0fcf48 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) != '\0') {
      iVar6 = 1;
      while ((iVar6 < 0x10 &&
             (iVar2 = (*(code *)PTR_FUN_8c0fcfa0)
                                (*(int *)(*(int *)(ar4 + 0x10) + 0x40) + DAT_8c0fcf9c,
                                 *(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + DAT_8c0fcf9c
                                 ,ar6,ar7), iVar2 == 0))) {
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 1;
      }
    }
    break;
  case 0x53:
    (*(code *)PTR_FUN_8c0fd104)(&uStack_22,PTR_FUN_8c0fd104,ar6,ar7);
    uVar3 = (uint)uStack_22;
    iVar6 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fd108)(uVar3,4,ar6,ar7);
    if (iVar6 == 0) {
      uVar7 = 1;
      iVar6 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fd108)(uVar3,100,ar6,ar7);
      if (iVar6 == 0) {
        uVar5 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0fd10c)(uVar3,100,ar6,ar7);
        iVar6 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0fd108)(uVar5,4,ar6,ar7);
        if (iVar6 != 0) {
          uVar7 = 0;
        }
      }
    }
    break;
  case 0x54:
    if (*(char *)(DAT_8c0fcfc0 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) != '\0') {
      for (iVar6 = 1; iVar6 < 0x10; iVar6 = iVar6 + 1) {
        iVar2 = (*(code *)PTR_FUN_8c0fd014)
                          (*(int *)(*(int *)(ar4 + 0x10) + 0x40) + DAT_8c0fd010,
                           *(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + DAT_8c0fd010,ar6,
                           ar7);
        if (iVar2 == 0) {
          uVar7 = uVar7 + 1;
        }
      }
    }
    break;
  case 0x55:
    (*(code *)PTR_FUN_8c0fd088)(ar4,ar5,ar6,ar7);
    uVar7 = *(uint *)(DAT_8c0fd08c + ar4);
    break;
  case 0x57:
    (*(code *)PTR_FUN_8c0fceec)(&uStack_22,ar5,ar6,ar7);
    uVar7 = (uint)bStack_1b;
    break;
  case 0x58:
    (*(code *)PTR_FUN_8c0fd338)(&uStack_22,ar5,ar6,ar7);
    if (*(char *)(DAT_8c0fd33c + *(int *)(*(int *)(ar4 + 0x10) + 0x3c)) != '\0') {
      uVar3 = (*(code *)PTR_FUN_8c0fd340)
                        (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fd33c,ar5,ar6,ar7);
      if (uVar3 == bStack_1b) {
        return 2;
      }
      uVar4 = bStack_1b + 1;
      if (6 < uVar4) {
        uVar4 = 0;
      }
      if (uVar3 == uVar4) {
        uVar7 = 1;
      }
    }
    if (*(char *)(DAT_8c0fd3a0 + *(int *)(*(int *)(ar4 + 0x10) + 0x3c)) != '\0') {
      uVar3 = (*(code *)PTR_FUN_8c0fd3a4)
                        (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fd3a0,ar5,ar6,ar7);
      if (uVar3 == bStack_1b) {
        return 2;
      }
      uVar4 = bStack_1b + 1;
      if (6 < uVar4) {
        uVar4 = 0;
      }
      if (uVar3 == uVar4) {
        uVar7 = 1;
      }
    }
    break;
  case 0x59:
    (*(code *)PTR_FUN_8c0fce5c)(&uStack_22,ar5,ar6,ar7);
    uVar7 = (uint)uStack_22 + DAT_8c0fce60;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    break;
  case 0x5a:
    uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x20);
    break;
  case 0x61:
    uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x28);
    break;
  case 0x62:
    uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x2c);
    break;
  case 99:
    uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x24);
    break;
  case 100:
    (*(code *)PTR_FUN_8c0fd58c)(&uStack_22,ar5,ar6,ar7);
    bStack_1e = 0;
    bStack_1d = 0;
    uStack_1c = 0;
    (*(code *)PTR_FUN_8c0fd58c)(auStack_2c,ar5,ar6,ar7);
    uVar5 = (*(code *)PTR_FUN_8c0fd594)
                      (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fd590,ar5,ar6,ar7);
    bStack_2a = (byte)uVar5;
    uVar5 = (*(code *)PTR_FUN_8c0fd594)
                      (*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fd598,PTR_FUN_8c0fd594,ar6,ar7
                      );
    bStack_29 = (byte)uVar5;
    uStack_28 = 0;
    uStack_27 = 0;
    uStack_26 = 0;
    a5 = auStack_2c;
    (*(code *)PTR_FUN_8c0fd59c)(&uStack_22,a5,ar6,ar7);
    if ((bStack_2a != '\0') && (bStack_29 != '\0')) {
      (*(code *)PTR_FUN_8c0fd594)(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + DAT_8c0fd5a0,a5,ar6,ar7);
      a5 = *(undefined1 **)(*(int *)(ar4 + 0x10) + 0x3c);
      (*(code *)PTR_FUN_8c0fd5ac)(a5 + DAT_8c0fd5a8,a5,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0fd58c)(&uStack_22,a5,ar6,ar7);
    bStack_1e = 0xc;
    bStack_1d = 0;
    uStack_1c = 0;
    (*(code *)PTR_FUN_8c0fd58c)(auStack_2c,a5,ar6,ar7);
    uVar5 = (*(code *)PTR_FUN_8c0fd594)(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x10,a5,ar6,ar7);
    bStack_2a = (byte)uVar5;
    uVar5 = (*(code *)PTR_FUN_8c0fd594)(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x14,a5,ar6,ar7);
    bStack_29 = (byte)uVar5;
    uStack_28 = 0xc;
    uStack_27 = 0;
    uStack_26 = 0;
    if ((bStack_2a == 0) || (bStack_29 == 0)) {
      return 0;
    }
    iVar6 = (*(code *)PTR_FUN_8c0fd5d0)(&uStack_22,auStack_2c,ar6,ar7);
    if (iVar6 == 0) {
      return 2;
    }
    (*(code *)PTR_FUN_8c0fd63c)(&uStack_22,&iStack_30,ar6,ar7);
    iStack_30 = iStack_30 + DAT_8c0fd640;
    (*(code *)PTR_FUN_8c0fd644)(iStack_30,&uStack_22,ar6,ar7);
    if ((bStack_2a == bStack_20) && (bStack_29 == bStack_1f)) {
      return 1;
    }
    break;
  case 0x65:
    switch(ar5[1]) {
    case 0x61:
      uVar7 = *(uint *)(DAT_8c0fd17c + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 0x62:
      uVar7 = *(uint *)(DAT_8c0fd190 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 99:
      uVar7 = *(uint *)(DAT_8c0fd1a4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 100:
      uVar7 = *(uint *)(DAT_8c0fd1b8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 0x65:
      uVar7 = *(uint *)(DAT_8c0fd1cc + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 0x66:
      uVar7 = *(uint *)(DAT_8c0fd1e0 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 0x67:
      uVar7 = *(uint *)(DAT_8c0fd1f4 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 0x68:
      uVar7 = *(uint *)(DAT_8c0fd208 + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
      break;
    case 0x69:
      uVar7 = *(uint *)(DAT_8c0fd21c + *(int *)(*(int *)(ar4 + 0x10) + 0x40));
    }
    break;
  case 0x69:
    if (*(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 100) < 1) {
      if (*(int *)(DAT_8c0fd694 + *(int *)(*(int *)(ar4 + 0x10) + 0x40)) < DAT_8c0fd698) {
        uVar7 = 0;
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
    break;
  case 0x6c:
    uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x34);
    break;
  case 0x6d:
    uVar7 = (*(code *)PTR_FUN_8c0fd658)(ar4,ar5,ar6,ar7);
    break;
  case 0x6e:
    uVar7 = 0;
    if ((0 < **(int **)(*(int *)(ar4 + 0x10) + 0x3c)) &&
       (*(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 100) ==
        **(int **)(*(int *)(ar4 + 0x10) + 0x3c))) {
      uVar7 = 1;
    }
    break;
  case 0x73:
    cVar1 = ar5[1];
    if (cVar1 == 'd') {
      uVar7 = (uint)*(byte *)(*(int *)(ar4 + 0x10) + 0xf);
    }
    else if (cVar1 == 'm') {
      uVar7 = (uint)*(byte *)(*(int *)(ar4 + 0x10) + 0xe);
    }
    else if (cVar1 == 'y') {
      uVar7 = (uint)*(ushort *)(*(int *)(ar4 + 0x10) + 0xc) + DAT_8c0fd6fc;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      if (6 < (int)uVar7) {
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}



/* FUN_8c0fd764 @ 8c0fd764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fd764(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*ar5) {
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x73:
    uVar2 = ar6;
    (*(code *)PTR_FUN_8c0fd8bc)(ar4,ar5,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0fd8c4)(ar6,ar5,uVar2,ar7);
    break;
  default:
    uVar2 = ar6;
    iVar1 = (*(code *)PTR_FUN_8c0fd8c8)(ar5,ar5,ar6,ar7);
    uVar2 = (*(code *)PTR_strcpy_8c0fd8cc)
                      (ar6,*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar1 * 4 + 0x10,uVar2,ar7);
  }
  return uVar2;
}



/* FUN_8c0fd8d0 @ 8c0fd8d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fd8d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_94 [8];
  int iStack_8c;
  
  if ((*(int *)(DAT_8c0fd9f8 + ar4) == 1) || (*(int *)(DAT_8c0fd9fc + ar4) == 0)) {
    if (*(int *)(ar4 + 4) == 0) {
      return 0;
    }
    *(undefined4 *)(ar4 + 4) = 3;
  }
  iVar1 = *(int *)(ar4 + 4);
  if (iVar1 == 0) {
    iVar2 = (*(code *)PTR_FUN_8c0fda00)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    iVar1 = DAT_8c0fd9fc;
    if (iVar2 == 0) {
      *(undefined4 *)(DAT_8c0fd9fc + ar4) = 0;
    }
    else {
      iVar1 = 1;
      *(undefined4 *)(ar4 + 4) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(DAT_8c0fd9fc + ar4) = 2;
    (*(code *)PTR_FUN_8c0fda04)(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0fda08)(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0fda10)(*(undefined4 *)(ar4 + 0xc),PTR_DAT_8c0fda0c,ar6,ar7);
    *(undefined4 *)(DAT_8c0fda14 + ar4) = DAT_8c0fda18;
    iVar1 = 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  else if (iVar1 == 2) {
    (*(code *)PTR_FUN_8c0fda1c)(*(undefined4 *)(ar4 + 8),auStack_94,ar6,ar7);
    if (iStack_8c != 0) {
      if (iStack_8c == 2) {
        *(undefined4 *)(DAT_8c0fd9fc + ar4) = 3;
        *(undefined4 *)(ar4 + 4) = 1;
        return 1;
      }
      if (iStack_8c != 3) {
        *(undefined4 *)(DAT_8c0fd9fc + ar4) = 4;
        if (0 < *(int *)(DAT_8c0fda14 + ar4)) {
          return *(int *)(DAT_8c0fda14 + ar4);
        }
        *(undefined4 *)(DAT_8c0fd9fc + ar4) = 5;
        *(undefined4 *)(ar4 + 4) = 1;
        return 1;
      }
      *(undefined4 *)(DAT_8c0fd9fc + ar4) = 6;
      piVar3 = *(int **)(*(int *)(ar4 + 0x10) + 0x3c);
      *piVar3 = *piVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 100) =
           **(undefined4 **)(*(int *)(ar4 + 0x10) + 0x3c);
    }
    iVar1 = 3;
    *(undefined4 *)(ar4 + 4) = 3;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(DAT_8c0fd9fc + ar4) = 0;
    (*(code *)PTR_FUN_8c0fda20)(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0fda24)(ar4,ar5,ar6,ar7);
    iVar1 = 0;
    *(undefined4 *)(ar4 + 4) = 0;
  }
  return iVar1;
}



/* FUN_8c0fda28 @ 8c0fda28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fda28(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  for (; ar5 < 0x10; ar5 = ar5 + 1) {
    *(undefined1 *)(DAT_8c0fda58 + *(int *)(*(int *)(ar4 + 0x10) + 0x40) + ar5 * 0x20) = 0;
  }
  return 0x10;
}



/* FUN_8c0fda5c @ 8c0fda5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fda5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fda7c)
                    (*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(DAT_8c0fda78 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0fda80 @ 8c0fda80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fda80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_memset_8c0fdaa8)(ar4 + DAT_8c0fdaa4,0,DAT_8c0fdaa0,ar7);
  return uVar1;
}



/* FUN_8c0fdaac @ 8c0fdaac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0fdbb2) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb74) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb24) */
/* WARNING: Removing unreachable block (ram,0x8c0fdad6) */
/* WARNING: Removing unreachable block (ram,0x8c0fdafe) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb54) */
/* WARNING: Removing unreachable block (ram,0x8c0fdb94) */
/* WARNING: Removing unreachable block (ram,0x8c0fdbce) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fdaac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)*(byte *)(DAT_8c0fdbf8 + ar4);
  iVar2 = (*(code *)PTR_FUN_8c0fdc00)(uVar1 * 0x880 + ar4 + DAT_8c0fdbfc,ar4 + 0x14,ar6,ar7);
  if (((iVar2 != 0) ||
      (iVar2 = (*(code *)PTR_FUN_8c0fdc00)(uVar1 * 0x880 + ar4 + DAT_8c0fdc04,ar4 + 0x5c,ar6,ar7),
      iVar2 != 0)) ||
     (iVar2 = (*(code *)PTR_FUN_8c0fdc00)(uVar1 * 0x880 + ar4 + DAT_8c0fdc08,ar5,ar6,ar7), uVar3 = 0
     , iVar2 != 0)) {
    uVar1 = (uint)*(byte *)(DAT_8c0fdbf8 + ar4);
    (*(code *)PTR_strcpy_8c0fdc0c)(uVar1 * 0x880 + ar4 + DAT_8c0fdbfc,ar4 + 0x14,ar6,ar7);
    (*(code *)PTR_strcpy_8c0fdc0c)(uVar1 * 0x880 + ar4 + DAT_8c0fdc10,ar4 + 0x3c,ar6,ar7);
    (*(code *)PTR_strcpy_8c0fdc0c)(uVar1 * 0x880 + ar4 + DAT_8c0fdc04,ar4 + 0x5c,ar6,ar7);
    (*(code *)PTR_strcpy_8c0fdc0c)(uVar1 * 0x880 + ar4 + DAT_8c0fdc08,ar5,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c0fdc1c)
                      (uVar1 * 0x880 + ar4 + DAT_8c0fdc14,
                       *(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x10,DAT_8c0fdc18,ar7);
  }
  return uVar3;
}



/* FUN_8c0fdc20 @ 8c0fdc20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0fdc20(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0xffffffff;
  for (iVar1 = 0; iVar1 < DAT_8c0fdc84; iVar1 = iVar1 + 1) {
    *(undefined1 *)(ar4 + iVar1 + 4) = 0;
  }
  (*(code *)PTR_strcpy_8c0fdc90)((int)ar4 + DAT_8c0fdc8c,PTR_s_SPEECH_8c0fdc88 + 0x5a,ar6,ar7);
  (*(code *)PTR_strcpy_8c0fdc90)((int)ar4 + DAT_8c0fdc94,PTR_s_SPEECH_8c0fdc88 + 0x5c,ar6,ar7);
  return ar4;
}



/* FUN_8c0fdc98 @ 8c0fdc98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0fdc98(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  ar4[0x20] = 0;
  ar4[0x40] = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 7;
  for (iVar1 = 0; iVar1 < 0xc; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + DAT_8c0fdd48 + iVar1 * 4) = 0;
  }
  *(undefined4 *)(ar4 + DAT_8c0fdd4c) = 0;
  *(undefined4 *)(ar4 + DAT_8c0fdd50) = 0;
  *(undefined4 *)(ar4 + DAT_8c0fdd54) = 0;
  *(undefined4 *)(ar4 + DAT_8c0fdd58) = 0;
  *(undefined4 *)(ar4 + DAT_8c0fdd5c) = 0;
  *(undefined4 *)(ar4 + DAT_8c0fdd60) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    ar4[DAT_8c0fdd64 + iVar1 * 0x20] = 0;
  }
  return ar4;
}



/* FUN_8c0fdd68 @ 8c0fdd68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fdd68(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fdd94)(ar4,*(int *)(ar4 + 0x68) + ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fdd98 @ 8c0fdd98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fdd98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0x68) = ar5;
  if (*(int *)(ar4 + 0x68) < 0) {
    *(undefined4 *)(ar4 + 0x68) = 0;
  }
  uVar1 = 4;
  if (4 < *(int *)(ar4 + 0x68)) {
    uVar1 = 0x68;
    *(undefined4 *)(ar4 + 0x68) = 4;
  }
  return uVar1;
}



/* FUN_8c0fddc4 @ 8c0fddc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fddc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0fdde0)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  return ar4;
}



/* FUN_8c0fdde4 @ 8c0fdde4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0fdde4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0fde24)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0fde28)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0fde28)(ar4 + 0x18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fde2c)(ar4 + 0x2c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x28) = DAT_8c0fde30;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(_FUN_8c0fde34,DAT_8c0fde30);
  }
  return ar4;
}



/* FUN_8c0fde34 @ 8c0fde34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fde34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0fde58)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  return ar4;
}



/* FUN_8c0fde5c @ 8c0fde5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fde5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint a6;
  undefined4 a5;
  int a5_00;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c0fdee8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fdee8)(ar4 + DAT_8c0fdeec,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fdef0)(ar4,ar4 + DAT_8c0fdeec,ar6,ar7);
  a5_00 = ar4;
  (*(code *)PTR_FUN_8c0fdef4)(ar4 + DAT_8c0fdeec,ar4,ar6,ar7);
  a6 = (*(code *)PTR_log_message_8c0fdef8)(ar5,a5_00,ar6,ar7);
  if (0x1d < a6) {
    a6 = 0x1d;
  }
  (*(code *)PTR_FUN_8c0fdf00)(ar4 + DAT_8c0fdefc,ar5,a6,ar7);
  *(undefined1 *)(DAT_8c0fdefc + ar4 + a6 + 1) = 0;
  *(undefined4 *)(DAT_8c0fdf04 + ar4) = 0;
  return ar4;
}



/* FUN_8c0fdf08 @ 8c0fdf08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fdf08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}



/* FUN_8c0fdf10 @ 8c0fdf10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fdf10(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}



/* FUN_8c0fdf18 @ 8c0fdf18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fdf18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined1 *)(DAT_8c0fdf64 + ar4) = 0;
    (*(code *)PTR_Class_12c1f0_m0_0f4108_8c0fdf6c)(ar4 + DAT_8c0fdf68,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Class_12c1f0_m0_0f4108_8c0fdf6c)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0fdf70)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0fdf74 @ 8c0fdf74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fdf74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fe004)(ar4 + DAT_8c0fe000,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe008)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe004)(ar5,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe00c)(uVar2,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe010)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe004)(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0fe010)(uVar2,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe00c)(ar5,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe008)(uVar1,ar5,ar6,ar7);
  *(int *)(DAT_8c0fe014 + ar4) = *(int *)(DAT_8c0fe014 + ar4) + 1;
  return ar4;
}



/* s_Item_pointer_is_NULL_CItemLi_0fe01c @ 8c0fe018 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Item_pointer_is_NULL_CItemLi_0fe01c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int a5;
  
  if (*(int *)(DAT_8c0fe0e0 + ar4) != 0) {
    if (ar5 == 0) {
      (*(code *)PTR_noop_102824_8c0fe0e8)(PTR_s_GRAPHICS_COMMON_8c0fe0e4 + 0x5b,0,0,0xd);
      (*(code *)PTR_report_error_message_8c0fe0f4)
                (PTR_s_GRAPHICS_COMMON_8c0fe0e4 + DAT_8c0fe0f0,
                 PTR_s_GRAPHICS_COMMON_8c0fe0e4 + DAT_8c0fe0ec,1,2);
    }
    else {
      a5 = ar5;
      uVar1 = (*(code *)PTR_list_node_next_8c0fe0f8)(ar5,ar5,ar6,ar7);
      uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe0fc)(ar5,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe100)(uVar1,uVar2,ar6,ar7);
      uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fe0fc)(ar5,uVar2,ar6,ar7);
      uVar2 = (*(code *)PTR_list_node_next_8c0fe0f8)(ar5,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe104)(uVar1,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe100)(ar5,0,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe104)(ar5,0,ar6,ar7);
      *(int *)(DAT_8c0fe0e0 + ar4) = *(int *)(DAT_8c0fe0e0 + ar4) + -1;
    }
  }
  return ar4;
}



/* s_Invalid_Item_number_CItemLis_0fe110 @ 8c0fe108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Invalid_Item_number_CItemLis_0fe110(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int a5;
  int iVar1;
  
  a5 = ar5;
  a4 = (*(code *)PTR_list_node_next_8c0fe198)(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(DAT_8c0fe19c + ar4) < ar5)) {
    (*(code *)PTR_noop_102824_8c0fe1a8)(PTR_s_GRAPHICS_COMMON_8c0fe1a0 + DAT_8c0fe1a4,0,0,0xd);
    (*(code *)PTR_report_error_message_8c0fe1b4)
              (PTR_s_GRAPHICS_COMMON_8c0fe1a0 + DAT_8c0fe1b0,
               PTR_s_GRAPHICS_COMMON_8c0fe1a0 + DAT_8c0fe1ac,1,2);
    a4 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      a4 = (*(code *)PTR_list_node_next_8c0fe198)(a4,a5,ar6,ar7);
    }
  }
  return a4;
}



/* FUN_8c0fe1b8 @ 8c0fe1b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe1b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint a6;
  undefined4 a5;
  int a5_00;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c0fe23c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe23c)(ar4 + 0xc,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe240)(ar4,ar4 + 0xc,ar6,ar7);
  a5_00 = ar4;
  (*(code *)PTR_FUN_8c0fe244)(ar4 + 0xc,ar4,ar6,ar7);
  a6 = (*(code *)PTR_log_message_8c0fe248)(ar5,a5_00,ar6,ar7);
  if (0x1d < a6) {
    a6 = 0x1d;
  }
  (*(code *)PTR_FUN_8c0fe24c)(ar4 + 0x18,ar5,a6,ar7);
  *(undefined1 *)(ar4 + a6 + 0x19) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  return ar4;
}



/* FUN_8c0fe250 @ 8c0fe250 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe250(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined1 *)(ar4 + 0x18) = 0;
    (*(code *)PTR_FUN_8c0fe298)(ar4 + 0xc,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_FUN_8c0fe298)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0fe29c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0fe2a0 @ 8c0fe2a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe2a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fe324)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe328)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe324)(ar5,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe32c)(uVar2,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe330)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe324)(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0fe330)(uVar2,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe32c)(ar5,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe328)(uVar1,ar5,ar6,ar7);
  *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
  return ar4;
}



/* s_Item_pointer_is_NULL_CNodePt_0fe338 @ 8c0fe334 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Item_pointer_is_NULL_CNodePt_0fe338(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int a5;
  
  if (*(int *)(ar4 + 0x38) != 0) {
    if (ar5 == 0) {
      (*(code *)PTR_noop_102824_8c0fe3fc)(PTR_s_GRAPHICS_COMMON_8c0fe3f4 + DAT_8c0fe3f8,0,0,0xd);
      (*(code *)PTR_report_error_message_8c0fe408)
                (PTR_s_GRAPHICS_COMMON_8c0fe3f4 + DAT_8c0fe404,
                 PTR_s_GRAPHICS_COMMON_8c0fe3f4 + DAT_8c0fe400,1,2);
    }
    else {
      a5 = ar5;
      uVar1 = (*(code *)PTR_list_node_next_8c0fe40c)(ar5,ar5,ar6,ar7);
      uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe410)(ar5,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe414)(uVar1,uVar2,ar6,ar7);
      uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fe410)(ar5,uVar2,ar6,ar7);
      uVar2 = (*(code *)PTR_list_node_next_8c0fe40c)(ar5,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe418)(uVar1,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe414)(ar5,0,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe418)(ar5,0,ar6,ar7);
      *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + -1;
    }
  }
  return ar4;
}



/* s_Invalid_Item_number_CNodePtr_0fe424 @ 8c0fe41c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Invalid_Item_number_CNodePtr_0fe424(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int a5;
  int iVar1;
  
  a5 = ar5;
  a4 = (*(code *)PTR_list_node_next_8c0fe4a8)(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x38) < ar5)) {
    (*(code *)PTR_noop_102824_8c0fe4b4)(PTR_s_GRAPHICS_COMMON_8c0fe4ac + DAT_8c0fe4b0,0,0,0xd);
    (*(code *)PTR_report_error_message_8c0fe4c0)
              (PTR_s_GRAPHICS_COMMON_8c0fe4ac + DAT_8c0fe4bc,
               PTR_s_GRAPHICS_COMMON_8c0fe4ac + DAT_8c0fe4b8,1,2);
    a4 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      a4 = (*(code *)PTR_list_node_next_8c0fe4a8)(a4,a5,ar6,ar7);
    }
  }
  return a4;
}



/* FUN_8c0fe4c4 @ 8c0fe4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fe4c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0fe4f0)(ar4,ar4 + 0xc,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe4f4)(ar4 + 0xc,ar4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0;
}



/* FUN_8c0fe4f8 @ 8c0fe4f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe4f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint a6;
  undefined4 a5;
  int a5_00;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c0fe580)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe580)(ar4 + 0x58,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe584)(ar4,ar4 + 0x58,ar6,ar7);
  a5_00 = ar4;
  (*(code *)PTR_FUN_8c0fe588)(ar4 + 0x58,ar4,ar6,ar7);
  a6 = (*(code *)PTR_log_message_8c0fe58c)(ar5,a5_00,ar6,ar7);
  if (0x1d < a6) {
    a6 = 0x1d;
  }
  (*(code *)PTR_FUN_8c0fe594)(ar4 + DAT_8c0fe590,ar5,a6,ar7);
  *(undefined1 *)(DAT_8c0fe590 + ar4 + a6 + 1) = 0;
  *(undefined4 *)(DAT_8c0fe598 + ar4) = 0;
  return ar4;
}



/* FUN_8c0fe59c @ 8c0fe59c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe59c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined1 *)(DAT_8c0fe5e4 + ar4) = 0;
    (*(code *)PTR_FUN_8c0fe5e8)(ar4 + 0x58,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_FUN_8c0fe5e8)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0fe5ec)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0fe5f0 @ 8c0fe5f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe5f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fe67c)(ar4 + 0x58,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe680)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe67c)(ar5,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe684)(uVar2,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe688)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe67c)(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0fe688)(uVar2,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe684)(ar5,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe680)(uVar1,ar5,ar6,ar7);
  *(int *)(DAT_8c0fe68c + ar4) = *(int *)(DAT_8c0fe68c + ar4) + 1;
  return ar4;
}



/* s_CWaterSnowList_TakeOut_0fe694 @ 8c0fe690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CWaterSnowList_TakeOut_0fe694(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int a5;
  
  if (*(int *)(DAT_8c0fe740 + ar4) != 0) {
    if (ar5 == 0) {
      (*(code *)PTR_report_error_message_8c0fe750)
                (PTR_s_GRAPHICS_COMMON_8c0fe744 + DAT_8c0fe74c,
                 PTR_s_GRAPHICS_COMMON_8c0fe744 + DAT_8c0fe748,1,2);
    }
    else {
      a5 = ar5;
      uVar1 = (*(code *)PTR_list_node_next_8c0fe754)(ar5,ar5,ar6,ar7);
      uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe758)(ar5,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe75c)(uVar1,uVar2,ar6,ar7);
      uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fe758)(ar5,uVar2,ar6,ar7);
      uVar2 = (*(code *)PTR_list_node_next_8c0fe754)(ar5,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe760)(uVar1,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe75c)(ar5,0,ar6,ar7);
      (*(code *)PTR_FUN_8c0fe760)(ar5,0,ar6,ar7);
      *(int *)(DAT_8c0fe740 + ar4) = *(int *)(DAT_8c0fe740 + ar4) + -1;
    }
  }
  return ar4;
}



/* s_CWaterSnowList_GetWaterSnowO_0fe76c @ 8c0fe764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CWaterSnowList_GetWaterSnowO_0fe76c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int a5;
  int iVar1;
  
  a5 = ar5;
  a4 = (*(code *)PTR_list_node_next_8c0fe7dc)(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(DAT_8c0fe7e0 + ar4) < ar5)) {
    (*(code *)PTR_report_error_message_8c0fe7f0)
              (PTR_s_GRAPHICS_COMMON_8c0fe7e4 + DAT_8c0fe7ec,
               PTR_s_GRAPHICS_COMMON_8c0fe7e4 + DAT_8c0fe7e8,1,2);
    a4 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      a4 = (*(code *)PTR_list_node_next_8c0fe7dc)(a4,a5,ar6,ar7);
    }
  }
  return a4;
}



/* FUN_8c0fe7f4 @ 8c0fe7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe7f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0fe820)(ar4,ar4 + 0x58,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe824)(ar4 + 0x58,ar4,ar6,ar7);
  iVar1 = DAT_8c0fe828;
  *(undefined4 *)(DAT_8c0fe828 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0fe82c @ 8c0fe82c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe82c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint a6;
  undefined4 a5;
  int a5_00;
  
  a5 = ar5;
  (*(code *)PTR_FUN_8c0fe8b0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe8b0)(ar4 + 0x14,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe8b4)(ar4,ar4 + 0x14,ar6,ar7);
  a5_00 = ar4;
  (*(code *)PTR_FUN_8c0fe8b8)(ar4 + 0x14,ar4,ar6,ar7);
  a6 = (*(code *)PTR_log_message_8c0fe8bc)(ar5,a5_00,ar6,ar7);
  if (0x1d < a6) {
    a6 = 0x1d;
  }
  (*(code *)PTR_FUN_8c0fe8c0)(ar4 + 0x28,ar5,a6,ar7);
  *(undefined1 *)(ar4 + a6 + 0x29) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return ar4;
}



/* FUN_8c0fe8c4 @ 8c0fe8c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe8c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fe94c)(ar4 + 0x14,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe950)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe94c)(ar5,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe954)(uVar2,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe958)(ar5,uVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fe94c)(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0fe958)(uVar2,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_list_node_next_8c0fe954)(ar5,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0fe950)(uVar1,ar5,ar6,ar7);
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
  return ar4;
}



/* s_CItemGLoadRequestList_TakeOu_0fe960 @ 8c0fe95c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CItemGLoadRequestList_TakeOu_0fe960(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int a5;
  
  if (*(int *)(ar4 + 0x48) != 0) {
    if (ar5 == 0) {
      (*(code *)PTR_report_error_message_8c0fea18)
                (PTR_s_GRAPHICS_COMMON_8c0fea0c + DAT_8c0fea14,
                 PTR_s_GRAPHICS_COMMON_8c0fea0c + DAT_8c0fea10,1,2);
    }
    else {
      a5 = ar5;
      uVar1 = (*(code *)PTR_list_node_next_8c0fea1c)(ar5,ar5,ar6,ar7);
      uVar2 = (*(code *)PTR_get_field_4_0dac48_8c0fea20)(ar5,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0fea24)(uVar1,uVar2,ar6,ar7);
      uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0fea20)(ar5,uVar2,ar6,ar7);
      uVar2 = (*(code *)PTR_list_node_next_8c0fea1c)(ar5,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fea28)(uVar1,uVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c0fea24)(ar5,0,ar6,ar7);
      (*(code *)PTR_FUN_8c0fea28)(ar5,0,ar6,ar7);
      *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + -1;
    }
  }
  return ar4;
}



/* s_CItemGLoadRequestList_GetPtr_0fea34 @ 8c0fea2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CItemGLoadRequestList_GetPtr_0fea34(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  int a5;
  int iVar1;
  
  a5 = ar5;
  a4 = (*(code *)PTR_list_node_next_8c0feaa4)(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x48) < ar5)) {
    (*(code *)PTR_report_error_message_8c0feab4)
              (PTR_s_GRAPHICS_COMMON_8c0feaa8 + DAT_8c0feab0,
               PTR_s_GRAPHICS_COMMON_8c0feaa8 + DAT_8c0feaac,1,2);
    a4 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      a4 = (*(code *)PTR_list_node_next_8c0feaa4)(a4,a5,ar6,ar7);
    }
  }
  return a4;
}



/* FUN_8c0feab8 @ 8c0feab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0feab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0feae4)(ar4,ar4 + 0x14,ar6,ar7);
  (*(code *)PTR_FUN_8c0feae8)(ar4 + 0x14,ar4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* FUN_8c0feaec @ 8c0feaec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0feaec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0feb08)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = 0;
  return ar4;
}



/* FUN_8c0feb0c @ 8c0feb0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0feb0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0feb38)(ar4,PTR_FUN_8c0feb34,PTR_FUN_8c0feb30,0x10);
  return ar4;
}



/* FUN_8c0feb3c @ 8c0feb3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0feb3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x22 < iVar1) {
      return 0;
    }
    if (*(int *)(ar4 + iVar1 * 0x10 + 0xc) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(ar4 + iVar1 * 0x10 + 0xc) = 1;
  return ar4 + iVar1 * 0x10;
}



/* FUN_8c0feb88 @ 8c0feb88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0feb88(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0xc) = 0;
  *ar5 = 0;
  return 0;
}



/* FUN_8c0feb98 @ 8c0feb98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0feb98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0febb8)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return ar4;
}



/* FUN_8c0febbc @ 8c0febbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0febbc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0febec)(ar4,PTR_FUN_8c0febe8,PTR_FUN_8c0febe4,0x5c);
  return ar4;
}



/* FUN_8c0febf0 @ 8c0febf0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0febf0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (DAT_8c0fec48 <= iVar1) {
      return 0;
    }
    if (*(int *)(ar4 + iVar1 * 0x5c + 0x58) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(ar4 + iVar1 * 0x5c + 0x58) = 1;
  return ar4 + iVar1 * 0x5c;
}



/* FUN_8c0fec4c @ 8c0fec4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fec4c(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0x58) = 0;
  *ar5 = 0;
  return 0;
}



/* FUN_8c0fec60 @ 8c0fec60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fec60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0fec7c)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = 0;
  return ar4;
}



/* FUN_8c0fec80 @ 8c0fec80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fec80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0fecac)(ar4,PTR_FUN_8c0feca8,PTR_FUN_8c0feca4,0x18);
  return ar4;
}



/* FUN_8c0fecb0 @ 8c0fecb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fecb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x18 < iVar1) {
      return 0;
    }
    if (*(int *)(iVar1 * 0x18 + ar4 + 0x14) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(iVar1 * 0x18 + ar4 + 0x14) = 1;
  return iVar1 * 0x18 + ar4;
}



/* FUN_8c0fed08 @ 8c0fed08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fed08(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0x14) = 0;
  *ar5 = 0;
  return 0;
}



/* FUN_8c0fed18 @ 8c0fed18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fed18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0fed3c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fed40)(ar4 + 0x4c,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0fed44 @ 8c0fed44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fed44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fed6c)(ar4,PTR_s_GRAPHICS_COMMON_8c0fed64 + DAT_8c0fed68,ar6,ar7);
  return uVar1;
}



/* s_CItemGLoader_RegistToLoad_0fed74 @ 8c0fed70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CItemGLoader_RegistToLoad_0fed74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined4 a6;
  
  a6 = ar6;
  a5 = (*(code *)PTR_FUN_8c0feddc)(ar4 + 0x4c,ar5,ar6,ar7);
  if (a5 == 0) {
    (*(code *)PTR_report_error_message_8c0fedf0)
              (PTR_s_GRAPHICS_COMMON_8c0fede4 + DAT_8c0fedec,
               PTR_s_GRAPHICS_COMMON_8c0fede4 + DAT_8c0fede8,1,2);
  }
  else {
    *(undefined4 *)(a5 + 8) = ar5;
    *(undefined4 *)(a5 + 0xc) = ar6;
    *(undefined4 *)(a5 + 0x10) = 1;
    (*(code *)PTR_FUN_8c0fede0)(ar4,a5,a6,ar7);
  }
  return a5;
}



/* FUN_8c0fedf4 @ 8c0fedf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fedf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 a5;
  int iVar3;
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_get_field_48_0feea8_8c0fee78)(ar4,ar5,ar6,ar7);
  a4 = 0;
  if (iVar1 != 0) {
    a4 = (*(code *)PTR_FUN_8c0fee7c)(ar4,a5,ar6,ar7);
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(int *)(a4 + 0x10) != 2) {
        ar6 = *(undefined4 *)(a4 + 0xc);
        a5 = ar5;
        iVar2 = (**(code **)(DAT_8c0fee80 + *(int *)(*(int *)(a4 + 8) + 8)))
                          (*(int *)(a4 + 8),ar5,ar6,ar7);
        if (iVar2 == 1) {
          *(undefined4 *)(a4 + 0x10) = 2;
        }
      }
      a4 = (*(code *)PTR_list_node_next_8c0fee84)(a4,a5,ar6,ar7);
    }
  }
  return a4;
}



/* FUN_8c0fee88 @ 8c0fee88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fee88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_list_node_next_8c0feea4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_48_0feea8 @ 8c0feea8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_48_0feea8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x48);
}



/* FUN_8c0feeb0 @ 8c0feeb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0feeb0(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int aiStack_14 [2];
  
  aiStack_14[0] = *ar5;
  uVar1 = *(undefined4 *)(aiStack_14[0] + 8);
  *ar5 = 0;
  (*(code *)PTR_s_CItemGLoadRequestList_TakeOu_0fe960_8c0feef0)(ar4,aiStack_14[0],ar6,ar7);
  (*(code *)PTR_FUN_8c0feef4)(ar4 + 0x4c,aiStack_14,ar6,ar7);
  return uVar1;
}



/* FUN_8c0feef8 @ 8c0feef8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0feef8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)(*(int *)(ar5 + 0x10) == 2);
}



/* FUN_8c0fef10 @ 8c0fef10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fef10(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_c [2];
  
  auStack_c[0] = 0;
  while( true ) {
    iVar1 = (*(code *)PTR_get_field_48_0feea8_8c0fef78)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    iVar1 = (*(code *)PTR_get_field_48_0feea8_8c0fef78)(ar4,ar5,ar6,ar7);
    auStack_c[0] = (*(code *)PTR_s_CItemGLoadRequestList_GetPtr_0fea34_8c0fef7c)
                             (ar4,iVar1 + -1,ar6,ar7);
    (*(code *)PTR_s_CItemGLoadRequestList_TakeOu_0fe960_8c0fef80)(ar4,auStack_c[0],ar6,ar7);
    ar5 = auStack_c;
    (*(code *)PTR_FUN_8c0fef84)(ar4 + 0x4c,ar5,ar6,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c0fef88)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0fef8c @ 8c0fef8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fef8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}



/* s_Shell_0fef9c @ 8c0fef94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Shell_0fef9c(undefined4 ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  int a4;
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_fr1;
  char in_FPSCR_SZ;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int aiStack_c4 [4];
  int iStack_b4;
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
  
  piVar2 = aiStack_c4;
  switch(ar5) {
  case (undefined *)0x0:
    iStack_50 = (*(code *)PTR_FUN_8c0ff058)(DAT_8c0ff054,ar5,ar6,ar7);
    iStack_88 = iStack_50;
    *(int *)((int)aiStack_c4 + DAT_8c0ff05c) = iStack_50;
    if (iStack_88 != 0) {
      (*(code *)PTR_s_GRAPHICS_MUSHROOMERLINE_09b8e8_8c0ff060)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff05c),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff05c);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,ar4,ar6,ar7);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0x1:
    iStack_54 = (*(code *)PTR_FUN_8c0ff0a0)(DAT_8c0ff09c,ar5,ar6,ar7);
    iStack_8c = iStack_54;
    *(int *)((int)aiStack_c4 + DAT_8c0ff0a4) = iStack_54;
    if (iStack_8c != 0) {
      (*(code *)PTR_s_GRAPHICS_MUSHROOMERLINE_09d9c2_8c0ff0a8)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff0a4),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff0a4);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0x2:
    iStack_58 = (*(code *)PTR_FUN_8c0ff0e8)(DAT_8c0ff0e4,ar5,ar6,ar7);
    iStack_90 = iStack_58;
    *(int *)((int)aiStack_c4 + DAT_8c0ff0ec) = iStack_58;
    if (iStack_90 != 0) {
      (*(code *)PTR_s_GRAPHICS_SQUIDLINE_0ac6a4_8c0ff0f0)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff0ec),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff0ec);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0x3:
    iStack_74 = (*(code *)PTR_FUN_8c0ff320)(DAT_8c0ff31c,ar5,ar6,ar7);
    iStack_ac = iStack_74;
    *(int *)((int)aiStack_c4 + DAT_8c0ff324) = iStack_74;
    if (iStack_ac != 0) {
      (*(code *)PTR_s_GRAPHICS_HIGYOLINE_0851fa_8c0ff328)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff324),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff324);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0x4:
    iStack_5c = (*(code *)PTR_FUN_8c0ff140)(DAT_8c0ff13c,ar5,ar6,ar7);
    iStack_94 = iStack_5c;
    *(int *)((int)aiStack_c4 + DAT_8c0ff144) = iStack_5c;
    if (iStack_94 != 0) {
      (*(code *)PTR_s_GRAPHICS_HIGYOLINE_087ed2_8c0ff148)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff144),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff144);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,ar4,ar6,ar7);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0x5:
    iStack_78 = (*(code *)PTR_FUN_8c0ff368)(DAT_8c0ff364,ar5,ar6,ar7);
    iStack_b0 = iStack_78;
    *(int *)((int)aiStack_c4 + DAT_8c0ff36c) = iStack_78;
    if (iStack_b0 != 0) {
      (*(code *)PTR_s_GRAPHICS_FROGMANLINE_036266_8c0ff370)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff36c),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff36c);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0x6:
    iStack_60 = (*(code *)PTR_FUN_8c0ff198)(DAT_8c0ff194,ar5,ar6,ar7);
    iStack_98 = iStack_60;
    *(int *)((int)aiStack_c4 + DAT_8c0ff19c) = iStack_60;
    if (iStack_98 != 0) {
      (*(code *)PTR_s_GRAPHICS_FROGMANLINE_0384fa_8c0ff1a0)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff19c),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff19c);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,ar4,ar6,ar7);
    piVar3 = aiStack_c4;
    break;
  default:
    _uStack_cc = CONCAT44(5,uStack_cc);
    (*(code *)PTR_report_error_message_8c0ff4f0)
              (PTR_s_GRAPHICS_COMMON_8c0ff4e4 + DAT_8c0ff4ec,
               PTR_s_GRAPHICS_COMMON_8c0ff4e4 + DAT_8c0ff4e8,1,2);
    a4 = 0;
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0xa:
    iStack_7c = (*(code *)PTR_FUN_8c0ff3b0)(DAT_8c0ff3ac,ar5,ar6,ar7);
    iStack_b4 = iStack_7c;
    *(int *)((int)aiStack_c4 + DAT_8c0ff3b4) = iStack_7c;
    if (iStack_b4 != 0) {
      (*(code *)PTR_s_GRAPHICS_MOTHLINE_08a182_8c0ff3b8)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff3b4),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff3b4);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0xb:
    iStack_64 = (*(code *)PTR_FUN_8c0ff1f0)(DAT_8c0ff1ec,ar5,ar6,ar7);
    iStack_9c = iStack_64;
    *(int *)((int)aiStack_c4 + DAT_8c0ff1f4) = iStack_64;
    if (iStack_9c != 0) {
      (*(code *)PTR_s_GRAPHICS_MOTHLINE_099e76_8c0ff1f8)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff1f4),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff1f4);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,ar4,ar6,ar7);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0xc:
    iStack_68 = (*(code *)PTR_FUN_8c0ff248)(DAT_8c0ff244,ar5,ar6,ar7);
    iStack_a0 = iStack_68;
    *(int *)((int)aiStack_c4 + DAT_8c0ff24c) = iStack_68;
    if (iStack_a0 != 0) {
      (*(code *)PTR_s_GRAPHICS_MOTHLINE_0a4dea_8c0ff250)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff24c),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff24c);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,ar4,ar6,ar7);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0xd:
    iStack_6c = (*(code *)PTR_FUN_8c0ff290)(DAT_8c0ff28c,ar5,ar6,ar7);
    iStack_a4 = iStack_6c;
    *(int *)((int)aiStack_c4 + DAT_8c0ff294) = iStack_6c;
    if (iStack_a4 != 0) {
      (*(code *)PTR_s_GRAPHICS_SPIDERLINE_0a4592_8c0ff298)
                (*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff294),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff294);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0xe:
    iStack_70 = (*(code *)PTR_FUN_8c0ff2d8)(DAT_8c0ff2d4,ar5,ar6,ar7);
    iStack_a8 = iStack_70;
    *(int *)((int)aiStack_c4 + DAT_8c0ff2dc) = iStack_70;
    if (iStack_a8 != 0) {
      (*(code *)PTR_FUN_8c0ff2e0)(*(undefined4 *)((int)aiStack_c4 + DAT_8c0ff2dc),0,ar6,ar7);
    }
    a4 = *(int *)((int)aiStack_c4 + DAT_8c0ff2dc);
    piVar3 = aiStack_c4;
    break;
  case (undefined *)0xf:
    iStack_84 = (*(code *)PTR_FUN_8c0ff474)(DAT_8c0ff470,ar5,ar6,ar7);
    aiStack_c4[2] = iStack_84;
    iStack_4c = iStack_84;
    a4 = iStack_4c;
    piVar3 = aiStack_c4;
    if (iStack_84 != 0) {
      (*(code *)PTR_FUN_8c0ff478)(iStack_84,0,0,ar7);
      a4 = iStack_4c;
      piVar3 = aiStack_c4;
    }
    break;
  case (undefined *)0x10:
    a5 = ar5;
    iStack_80 = (*(code *)PTR_FUN_8c0ff420)(DAT_8c0ff41c,ar5,ar6,ar7);
    aiStack_c4[3] = iStack_80;
    iStack_48 = iStack_80;
    if (iStack_80 != 0) {
      if (in_FPSCR_SZ == '\0') {
        puVar1 = &uStack_c8;
      }
      else {
        puVar1 = &uStack_cc;
        uStack_cc = extraout_fr1;
      }
      _uStack_cc = CONCAT44(0x3f800000,uStack_cc);
      ar6 = 0x10;
      a5 = PTR_s_GRAPHICS_COMMON_8c0ff424 + DAT_8c0ff428;
      (*(code *)PTR_FUN_8c0ff430)(*(undefined4 *)((int)puVar1 + DAT_8c0ff42c),a5,0x10,ar7);
      piVar2 = (int *)((int)puVar1 + 4);
    }
    a4 = *(int *)((int)piVar2 + 0x7c);
    (**(code **)(DAT_8c0ff434 + *(int *)(a4 + 8)))(a4,a5,ar6,ar7);
    piVar3 = piVar2;
  }
  if (a4 == 0) {
    piVar3[-1] = 5;
    (*(code *)PTR_report_error_message_8c0ff4f0)
              (PTR_s_GRAPHICS_COMMON_8c0ff4e4 + DAT_8c0ff4f8,
               PTR_s_GRAPHICS_COMMON_8c0ff4e4 + DAT_8c0ff4f4,1,2);
  }
  *piVar3 = (int)ar5;
  piVar3[1] = *piVar3 * 4 + DAT_8c0ff4fc;
  *(int *)piVar3[1] = *(int *)piVar3[1] + 1;
  return a4;
}



/* FUN_8c0ff500 @ 8c0ff500 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff500(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)PTR_get_field_24_05c284_8c0ff550)(*ar5,ar5,ar6,ar7);
  piVar2 = (int *)(iVar1 * 4 + DAT_8c0ff554);
  *piVar2 = *piVar2 + -1;
  iVar1 = *ar5;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,1,ar6,ar7);
  }
  *ar5 = 0;
  return 0;
}



/* FUN_8c0ff558 @ 8c0ff558 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0ff558(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ff620)(PTR_DAT_8c0ff61c,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0ff628;
  uVar2 = DAT_8c0ff624;
  (*(code *)PTR_global_list_push_8c0ff62c)(uVar1,PTR_Vec3_dtor_8c0ff628,DAT_8c0ff624,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ff620)(PTR_DAT_8c0ff630,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0ff628;
  uVar2 = DAT_8c0ff634;
  (*(code *)PTR_global_list_push_8c0ff62c)(uVar1,PTR_Vec3_dtor_8c0ff628,DAT_8c0ff634,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ff620)(PTR_DAT_8c0ff638,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0ff628;
  uVar2 = DAT_8c0ff63c;
  (*(code *)PTR_global_list_push_8c0ff62c)(uVar1,PTR_Vec3_dtor_8c0ff628,DAT_8c0ff63c,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0ff620)(PTR_DAT_8c0ff640,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0ff62c)(uVar2,PTR_Vec3_dtor_8c0ff628,DAT_8c0ff644,ar7);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0ff654)
            (DAT_8c0ff650,PTR_FUN_8c0ff64c,PTR_free_if_nonnull_wrap_0247b0_8c0ff648,4);
  (*(code *)PTR_global_list_push_8c0ff62c)(0,PTR_FUN_8c0ff65c,DAT_8c0ff658,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0ff654)
            (DAT_8c0ff668,PTR_FUN_8c0ff664,PTR_free_if_nonnull_wrap_03a3dc_8c0ff660,4);
  (*(code *)PTR_global_list_push_8c0ff62c)(0,PTR_FUN_8c0ff670,DAT_8c0ff66c,uVar2);
  puVar3 = DAT_8c0ff678;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0ff674 = *(undefined4 *)DAT_8c0ff678;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0ff674 = *DAT_8c0ff678;
  }
  return puVar3;
}



/* FUN_8c0ff67c @ 8c0ff67c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff67c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0ff69c)
                    (DAT_8c0ff698,PTR_free_if_nonnull_wrap_03a3dc_8c0ff694,4,9);
  return uVar1;
}



/* FUN_8c0ff6a0 @ 8c0ff6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff6a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0ff6c0)
                    (DAT_8c0ff6bc,PTR_free_if_nonnull_wrap_0247b0_8c0ff6b8,4,9);
  return uVar1;
}



/* FUN_8c0ff6c4 @ 8c0ff6c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ff6c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ff6e8)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_ret_const_1_0ffb90_8c0ff6ec)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0ff6f0 @ 8c0ff6f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ff6f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0ff728)(ar4 + 0xc,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ff72c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0ff730 @ 8c0ff730 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff730(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  uint in_fr1;
  ulonglong uVar2;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x20) = 0;
    uVar2 = CONCAT44(DAT_8c0ff7c0,in_fr1);
    *(undefined4 *)(ar4 + 0x24) = DAT_8c0ff7c0;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = (ulonglong)in_fr1;
    uVar2 = CONCAT44(_DAT_8c0ff7c4,DAT_8c0ff7c0);
    *(ulonglong *)(ar4 + 0x24) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x28) = uVar2 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
    uVar2 = CONCAT44(_DAT_8c0ff7c4,(int)uVar2);
    *(undefined4 *)(ar4 + 0x30) = _DAT_8c0ff7c4;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = uVar2 & 0xffffffff;
    uVar2 = CONCAT44(_DAT_8c0ff7c8,_DAT_8c0ff7c4);
    *(ulonglong *)(ar4 + 0x30) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x38) = _DAT_8c0ff7c4;
    *(undefined4 *)(ar4 + 0x3c) = DAT_8c0ff7c0;
  }
  else {
    *(ulonglong *)(ar4 + 0x34) = uVar2 & 0xffffffff;
    *(ulonglong *)(ar4 + 0x38) = CONCAT44(_DAT_8c0ff7c8,_DAT_8c0ff7c4);
    *(ulonglong *)(ar4 + 0x3c) = CONCAT44(_DAT_8c0ff7c4,DAT_8c0ff7c0);
  }
  *(undefined4 *)(ar4 + 0x40) = _DAT_8c0ff7c8;
  *(undefined4 *)(ar4 + 0x44) = _DAT_8c0ff7c8;
  *(undefined4 *)(ar4 + 0x48) = _DAT_8c0ff7c8;
  *(undefined4 *)(ar4 + 0x4c) = _DAT_8c0ff7c8;
  uVar1 = 4;
  a6 = ar4 + 0x40;
  (*(code *)PTR_FUN_8c0ff7cc)(ar4 + 0xc,ar4 + 0x20,a6,4);
  uVar1 = (*(code *)PTR_FUN_8c0ff7d0)(ar4 + 0xc,0x20,a6,uVar1);
  return uVar1;
}



/* FUN_8c0ff7d4 @ 8c0ff7d4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0ff7d4(int *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a5;
  undefined *puVar2;
  float fVar3;
  double dVar4;
  undefined *puVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0ff904)(auStack_1c,ar5,ar6,ar7);
  iVar1 = *ar4;
  if (iVar1 == 0) {
    if (in_FPSCR_SZ == '\0') {
      ar4[2] = (int)_DAT_8c0ff908;
    }
    else {
      *(ulonglong *)(ar4 + 2) = CONCAT44(PTR_FUN_8c0ff90c,_DAT_8c0ff908);
    }
    (*(code *)PTR_FUN_8c0ff90c)(ar4[1],a5,ar6,ar7);
    (*(code *)PTR_FUN_8c0ff910)(ar4[1],a5,ar6,ar7);
    (**(code **)(*(int *)(ar4[1] + 8) + 0x6c))(ar4[1],a5,ar6,ar7);
    *ar4 = 1;
  }
  else if (iVar1 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0ff914,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 2);
      dVar4 = (double)CONCAT44(PTR_FUN_8c0ff918,DAT_8c0ff914);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[2] = (int)fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 2) = in_xd0;
    }
    iVar1 = (*(code *)PTR_FUN_8c0ff918)(ar5,a5,ar6,ar7);
    if (iVar1 == 1) {
      *ar4 = 3;
    }
    puVar2 = DAT_8c0ff91c;
    puVar5 = PTR_FUN_8c0ff920;
    if (in_FPSCR_SZ == '\0') {
      puVar2 = (undefined *)ar4[2];
      puVar5 = DAT_8c0ff91c;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar2) {
      if (in_FPSCR_SZ == '\0') {
        ar4[2] = (int)DAT_8c0ff91c;
      }
      else {
        *(ulonglong *)(ar4 + 2) = CONCAT44(PTR_FUN_8c0ff920,DAT_8c0ff91c);
      }
      *ar4 = 2;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c0ff918)(ar5,a5,ar6,ar7);
    if (iVar1 == 1) {
      *ar4 = 3;
    }
  }
  else if (iVar1 == 3) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0ff914,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 2);
      dVar4 = (double)CONCAT44(PTR_FUN_8c0ff918,DAT_8c0ff914);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[2] = (int)fVar3;
      puVar2 = (undefined *)ar4[2];
      puVar5 = _DAT_8c0ff908;
    }
    else {
      *(undefined8 *)(ar4 + 2) = in_xd0;
      puVar2 = _DAT_8c0ff908;
      puVar5 = PTR_FUN_8c0ff90c;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar2 <= (float)puVar5) {
      (**(code **)(*(int *)(ar4[1] + 8) + 0x6c))(ar4[1],a5,ar6,ar7);
      *ar4 = 4;
      a5 = auStack_2c;
      (*(code *)PTR_FUN_8c0ff920)(0,a5,ar6,ar7);
    }
  }
  (**(code **)(*(int *)(ar4[1] + 8) + 0x1c))(ar4[1],a5,ar6,ar7);
  iVar1 = *ar4;
  (*(code *)PTR_Vec3_dtor_8c0ff924)(auStack_1c,0xffffffff,ar6,ar7);
  return iVar1;
}



/* FUN_8c0ff928 @ 8c0ff928 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff928(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *a4;
  undefined8 *a5;
  undefined4 uVar4;
  undefined8 *a6;
  undefined4 in_fr1;
  undefined8 uVar5;
  char in_FPSCR_SZ;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [18];
  undefined8 uStack_48;
  
  if (*DAT_8c0ffafc == '\0') {
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44((undefined4)DAT_8c0ffb04,in_fr1);
      *(undefined4 *)DAT_8c0ffb00 = (undefined4)DAT_8c0ffb04;
    }
    else {
      uVar5 = CONCAT44(DAT_8c0ffb04._4_4_,(undefined4)DAT_8c0ffb04);
      *DAT_8c0ffb00 = uVar5;
    }
    in_fr1 = (undefined4)uVar5;
    *DAT_8c0ffafc = '\x01';
  }
  if (*DAT_8c0ffb04._4_4_ == '\0') {
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(DAT_8c0ffb10,in_fr1);
      *(undefined4 *)DAT_8c0ffb0c = DAT_8c0ffb10;
    }
    else {
      uVar5 = CONCAT44(PTR_FUN_8c0ffb14,DAT_8c0ffb10);
      *DAT_8c0ffb0c = uVar5;
    }
    in_fr1 = (undefined4)uVar5;
    *DAT_8c0ffb04._4_4_ = '\x01';
  }
  a5 = ar5;
  a6 = ar6;
  uVar3 = ar7;
  (*(code *)PTR_FUN_8c0ffb14)(auStack_90,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_a0 = *(undefined4 *)ar5;
    uStack_9c = *(undefined4 *)((int)ar5 + 4);
    uStack_98 = *(undefined4 *)ar6;
    uStack_94 = *(undefined4 *)((int)ar6 + 4);
    uVar5 = CONCAT44(uStack_94,in_fr1);
  }
  else {
    uStack_a0 = (undefined4)*ar5;
    uStack_9c = (undefined4)*(undefined8 *)((int)ar5 + 4);
    uStack_98 = (undefined4)*ar6;
    uVar5 = *(undefined8 *)((int)ar6 + 4);
    uStack_94 = (undefined4)uVar5;
    auStack_90[0] = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  uStack_a4 = (undefined4)DAT_8c0ffb18;
  (**(code **)(DAT_8c0ffb18._4_4_ + *(int *)(*(int *)(ar4 + 4) + 8)))(*(int *)(ar4 + 4),a5,a6,uVar3)
  ;
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_48 = CONCAT44(uStack_48._4_4_,uVar4);
    uVar4 = uStack_a4;
    uVar5 = uStack_48;
  }
  uStack_48 = uVar5;
  uStack_a4 = uVar4;
  (*(code *)PTR_FUN_8c0ffb20)(&uStack_a4,a5,a6,uVar3);
  uVar4 = ar7;
  (*(code *)PTR_FUN_8c0ffb24)(2,ar7,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb2c)(DAT_8c0ffb28,uVar4,a6,uVar3);
  a4 = auStack_90;
  (*(code *)PTR_FUN_8c0ffb30)(a4,uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb38)(a4,uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb40)(a4,uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb44)(a4,uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb48)(*(undefined4 *)(ar4 + 4),uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb4c)(0,uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb50)(0,uVar4,a6,uVar3);
  iVar1 = (*(code *)PTR_get_field_24_05c284_8c0ffb54)(*(undefined4 *)(ar4 + 4),uVar4,a6,uVar3);
  if (iVar1 == 0xd) {
    (*(code *)PTR_FUN_8c0ffb50)(0,uVar4,a6,uVar3);
  }
  if ((iVar1 == 10) &&
     (uVar2 = (**(code **)(DAT_8c0ffb58 + *(int *)(*(int *)(ar4 + 4) + 8)))
                        (*(int *)(ar4 + 4),uVar4,a6,uVar3), (short)uVar2 != 3)) {
    (*(code *)PTR_FUN_8c0ffb50)(0,uVar4,a6,uVar3);
  }
  (**(code **)(*(int *)(*(int *)(ar4 + 4) + 8) + 0x38))(*(int *)(ar4 + 4),uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb5c)(1,uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb64)(ar4 + 0xc,uVar4,a6,uVar3);
  if (in_FPSCR_SZ != '\0') {
    auStack_90[0] = _DAT_8c0ffb7c;
  }
  uStack_94 = DAT_8c0ffb78;
  uStack_98 = DAT_8c0ffb74;
  uStack_9c = DAT_8c0ffb70;
  uStack_a0 = DAT_8c0ffb68._4_4_;
  uStack_a4 = (undefined4)DAT_8c0ffb68;
  (*(code *)PTR_FUN_8c0ffb20)(&uStack_a4,uVar4,a6,uVar3);
  (*(code *)PTR_FUN_8c0ffb24)(0,ar7,a6,uVar3);
  uVar3 = (*(code *)PTR_FUN_8c0ffb80)(_DAT_8c0ffb7c,_DAT_8c0ffb7c,_DAT_8c0ffb7c,uVar3);
  return uVar3;
}



/* FUN_8c0ffb84 @ 8c0ffb84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ffb84(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = ar5;
  *ar4 = 0;
  return 0;
}



/* ret_const_1_0ffb90 @ 8c0ffb90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0ffb90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0ffb98 @ 8c0ffb98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ffb98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ffbf8)(ar4 + DAT_8c0ffbf4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0ffc00)(ar4 + DAT_8c0ffbfc,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0ffc00)(ar4 + DAT_8c0ffc04,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0ffc00)(ar4 + DAT_8c0ffc08,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ffc10)(ar4 + DAT_8c0ffc0c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ffc14)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0ffc18 + ar4) = 0;
  return ar4;
}



/* FUN_8c0ffc1c @ 8c0ffc1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ffc1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_015c94_8c0ffc94)(ar4 + DAT_8c0ffc90,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ffc9c)(ar4 + DAT_8c0ffc98,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ffc9c)(ar4 + DAT_8c0ffca0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ffc9c)(ar4 + DAT_8c0ffca4,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_FUN_8c0ffcac)(ar4 + DAT_8c0ffca8,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ffcb0)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* s_GRAPHICS_0ffcb6 @ 8c0ffcb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_0ffcb6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *a5;
  undefined4 a7;
  
  a7 = 2;
  uVar1 = DAT_8c0ffd40;
  (*(code *)PTR_FUN_8c0ffd4c)(DAT_8c0ffd48,DAT_8c0ffd44,DAT_8c0ffd40,2);
  (*(code *)PTR_FUN_8c0ffd54)(ar4 + DAT_8c0ffd50,DAT_8c0ffd48,uVar1,a7);
  a5 = PTR_u____8c0ffd58;
  (*(code *)PTR_FUN_8c0ffd5c)(ar4 + DAT_8c0ffd50,PTR_u____8c0ffd58,uVar1,a7);
  (*(code *)PTR_FUN_8c0ffd60)(ar4 + DAT_8c0ffd50,a5,uVar1,a7);
  uVar1 = (*(code *)PTR_get_field_1c_0ffd74_8c0ffd64)(ar4 + DAT_8c0ffd50,a5,uVar1,a7);
  iVar2 = (*(code *)PTR_FUN_8c0ffd6c)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0ffd68 + 0x10,PTR_s_GRAPHICS_COMMON_8c0ffd68 + 0x1f
                     ,uVar1);
  if (iVar2 == -1) {
    (*(code *)PTR_report_error_message_8c0ffd70)
              (PTR_s_GRAPHICS_COMMON_8c0ffd68 + 0x28,PTR_s_GRAPHICS_COMMON_8c0ffd68 + 0x4e,1,2);
  }
  return 1;
}



/* get_field_1c_0ffd74 @ 8c0ffd74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_1c_0ffd74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x1c);
}



/* FUN_8c0ffd7c @ 8c0ffd7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ffd7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(DAT_8c0ffda4 + ar4) = ar5;
  uVar1 = (*(code *)PTR_FUN_8c0ffdac)(ar4 + DAT_8c0ffda8,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0ffdb0 @ 8c0ffdb0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ffe56) */
/* WARNING: Removing unreachable block (ram,0x8c0ffe68) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ffdb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c0ffee8)
                    (*(undefined4 *)(DAT_8c0ffee4 + ar4),ar5,ar6,ar7);
  if ((((iVar1 == 0) &&
       (iVar1 = (*(code *)PTR_input_is_mask_set_400_01ef20_8c0ffeec)
                          (*(undefined4 *)(DAT_8c0ffee4 + ar4),ar5,ar6,ar7), iVar1 == 0)) &&
      (*(int *)(DAT_8c0ffef0 + ar4) == 0)) && (*(int *)(DAT_8c0ffef4 + ar4) != 6)) {
    *(undefined4 *)(DAT_8c0ffef4 + ar4) = 0;
  }
  if (((-1 < *(short *)(DAT_8c0ffef8 + ar4)) && (*(int *)(DAT_8c0ffef4 + ar4) == 0)) &&
     ((*(short *)(DAT_8c0ffef8 + ar4) = *(short *)(DAT_8c0ffef8 + ar4) + -1,
      *(int *)(DAT_8c0ffef4 + ar4) == 0 && (*(short *)(DAT_8c0ffef8 + ar4) < 1)))) {
    *(undefined4 *)(DAT_8c0ffef4 + ar4) = 6;
  }
  iVar1 = (*(code *)PTR_input_get_word_a538_8c0ffefc)
                    (*(undefined4 *)(DAT_8c0ffee4 + ar4),ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_input_get_word_a53c_8c0fff00)
                    (*(undefined4 *)(DAT_8c0ffee4 + ar4),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0fff08,(float)iVar1);
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c0fff0c,DAT_8c0fff08);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0fff04) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0fff04) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0fff08,(float)iVar2);
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c0fff0c,DAT_8c0fff08);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0fff0c) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0fff0c) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0fff14,*(undefined4 *)(ar4 + DAT_8c0fff04));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0fff04);
    dVar4 = (double)CONCAT44(DAT_8c0fff18,DAT_8c0fff14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0fff10) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0fff10) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0fff14,*(undefined4 *)(ar4 + DAT_8c0fff0c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0fff0c);
    dVar4 = (double)CONCAT44(DAT_8c0fff18,DAT_8c0fff14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0fff18) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0fff18) = in_xd0;
  }
  iVar1 = (*(code *)PTR_FUN_8c0fff1c)(*(undefined4 *)(DAT_8c0ffee4 + ar4),ar5,ar6,ar7);
  if (iVar1 == 0) {
    *(short *)(DAT_8c0fff20 + ar4) = *(short *)(DAT_8c0fff20 + ar4) + 1;
  }
  else {
    *(undefined2 *)(DAT_8c0fff20 + ar4) = 0;
  }
  (*(code *)PTR_FUN_8c0fff24)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0fff28 @ 8c0fff28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fff28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fff50)(ar4 + DAT_8c0fff4c,ar4,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fff54 @ 8c0fff54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fff54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fff80)(ar4 + DAT_8c0fff7c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0fff84 @ 8c0fff84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fff84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (*(int *)(DAT_8c0fffd4 + ar4) != 6) {
    a5 = *(undefined4 *)(DAT_8c0fffd4 + ar4);
    (*(code *)PTR_FUN_8c0fffdc)(ar4 + DAT_8c0fffd8,a5,ar6,ar7);
    (**(code **)(*(int *)(ar4 + DAT_8c0fffd8) + 0x14))((int *)(ar4 + DAT_8c0fffd8),a5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c0fffec @ 8c0fffec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fffec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x24) = ar5;
  return in_r0;
}



/* FUN_8c0ffff4 @ 8c0ffff4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0ffff4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_get_field_a528_100030_8c100028)
                    (*(undefined4 *)(DAT_8c100024 + ar4),ar5,ar6,ar7);
  return (uint)((uVar1 & DAT_8c10002c) == DAT_8c10002c);
}


