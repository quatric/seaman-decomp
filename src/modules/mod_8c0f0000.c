/* Seaman (USA) region 0x8c0f0000-0x8c100000 (Ghidra decompiler) */

/* FUN_8c0f3df8 @ 8c0f3df8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f3e26) */
/* WARNING: Removing unreachable block (ram,0x8c0f3e1c) */
/* WARNING: Removing unreachable block (ram,0x8c0f3e10) */
/* WARNING: Removing unreachable block (ram,0x8c0f3e04) */
/* WARNING: Removing unreachable block (ram,0x8c0f3df8) */
/* WARNING: Removing unreachable block (ram,0x8c0f3dfa) */
/* WARNING: Removing unreachable block (ram,0x8c0f3e06) */
/* WARNING: Removing unreachable block (ram,0x8c0f3e12) */
/* WARNING: Removing unreachable block (ram,0x8c0f3e1e) */
/* WARNING: Removing unreachable block (ram,0x8c0f3e28) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f3df8(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  ar4[4] = ar5[4];
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
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0xb0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x6c,free_if_nonnull_wrap_0f3ffc,8,3,ain0);
    ar7_00 = 3;
    ar6_00 = 8;
    vec_delete_array(ar4 + 0x4c,free_if_nonnull_wrap_0f3ffc,8,3,ain0);
    ar5_00 = 0xffffffff;
    Class_129974_m0_016c2c(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0f3ffc @ 8c0f3ffc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0f3ffc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
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

int FUN_8c0f4040(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  *(undefined **)(ar4 + 8) = &DAT_8c12c1f0;
  Vec3_ctor_zero(ar4 + 0x30,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x40,ar5_00,ar6_00,ar7_00);
  Vec3_set_zero(ar4 + 0x50,ar5_00,ar6_00,ar7_00);
  FUN_8c023dac(ar4 + 0x5c,ar5_00,ar6_00,ar7_00);
  FUN_8c102800(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
  FUN_8c102800(ar4 + 0x90,ar5_00,ar6_00,ar7_00);
  FUN_8c0f78d8(ar4 + 0xa0,ar5_00,ar6_00,ar7_00);
  FUN_8c0f50b4(ar4,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(ar4 + 0x24) = ar5;
  *(undefined4 *)(ar4 + 0x28) = ar6;
  *(undefined4 *)(ar4 + 0x20) = s0;
  *(undefined4 *)(ar4 + 0x2c) = ar7;
  if (cVar1 == '\0') {
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12c1f0;
    FUN_8c0f3f58(ar4 + 0xa0,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d8168(ar4 + 0x90,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d8168(ar4 + 0x80,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016ac4(ar4 + 0x5c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x50,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x40,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x30,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* CAnimal_m1_0f41c8 @ 8c0f41c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f41ec) */
/* WARNING: Removing unreachable block (ram,0x8c0f41e4) */
/* WARNING: Removing unreachable block (ram,0x8c0f41dc) */
/* WARNING: Removing unreachable block (ram,0x8c0f41d4) */
/* WARNING: Removing unreachable block (ram,0x8c0f41d8) */
/* WARNING: Removing unreachable block (ram,0x8c0f41e0) */
/* WARNING: Removing unreachable block (ram,0x8c0f41e8) */
/* WARNING: Removing unreachable block (ram,0x8c0f41f0) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m1_0f41c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  char cVar3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined8 uStack_34;
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
  
  cVar3 = '\0';
  uStack_28 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uStack_24 = (undefined4)in_dr4;
  uStack_20 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uStack_1c = (undefined4)in_dr6;
  uStack_18 = (undefined4)((ulonglong)in_dr8 >> 0x20);
  uStack_14 = (undefined4)in_dr8;
  uStack_10 = (undefined4)((ulonglong)in_dr10 >> 0x20);
  uStack_c = (undefined4)in_dr10;
  uStack_34 = CONCAT44(ar5,&DAT_8c1401fa);
  uStack_2c = ar5;
  FUN_8c014334(ar4 + 0xc,ar5,ar6,ar7,&DAT_8c1401fa);
  if (cVar3 == '\0') {
    puVar2 = &uStack_30;
    uStack_34 = CONCAT44(in_stack_00000000,(undefined4)uStack_34);
  }
  else {
    uStack_34 = CONCAT44(in_stack_00000004,in_stack_00000000);
    puVar2 = (undefined4 *)&stack0xffffffcc;
  }
  uVar1 = FUN_8c0f528c(ar4,ar5,ar6,ar7,*puVar2,puVar2[1]);
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
  int *ar5_00;
  undefined4 uVar2;
  int iVar3;
  int *a5;
  int iVar4;
  int iVar5;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)PTR_get_field_bb4_0e06e4_8c0f438c)(ar5,ar5,ar6,ar7);
  iVar4 = 0;
  do {
    if (iVar1 <= iVar4) {
LAB_8c0f42f4:
      iVar1 = (**(code **)(DAT_8c0f43a8 + *ar5))(ar5,ar5_00,ar6,ar7);
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
    ar5_00 = (int *)(**(code **)(DAT_8c0f4390 + *ar5))(ar5,iVar4,ar6,ar7);
    iVar5 = (**(code **)(**(int **)(DAT_8c0f4398 + ar4) + 0x14))
                      (*(int **)(DAT_8c0f4398 + ar4),(int)ar5_00 + DAT_8c0f4394,ar6,ar7);
    if (iVar5 == 1) {
      (*(code *)PTR_FUN_8c0f439c)(ar4,ar5_00,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    a5 = (int *)((int)ar5_00 + DAT_8c0f4394);
    iVar5 = (**(code **)(*(int *)(ar4 + DAT_8c0f43a0) + 0x14))
                      ((int *)(ar4 + DAT_8c0f43a0),a5,ar6,ar7);
    if (iVar5 == 1) {
      (*(code *)PTR_FUN_8c0f43a4)(ar4,ar5_00,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    iVar4 = iVar4 + 1;
    ar5_00 = a5;
  } while( true );
}



/* FUN_8c0f43bc @ 8c0f43bc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f43bc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f43bc(int ar4,int *ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *ar5_00;
  float *a6;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar10;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar11;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar12;
  char cVar13;
  char cVar14;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float afStack_80 [25];
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_90,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_a0,ar5_00,ar6,ar7);
  Vec3_ctor_zero(&fStack_b0,ar5_00,ar6,ar7);
  fVar11 = 0.0;
  uVar1 = (**(code **)(*ar5 + 0x1d4))(ar5,ar5_00,ar6,ar7);
  iVar2 = get_field_24_026024(ar5,ar5_00,ar6,ar7);
  a6 = &fStack_a0;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_90,a6,ar7);
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x38))(*(int **)(ar4 + 0xa4),afStack_80,a6,ar7);
  pfVar4 = afStack_80;
  iVar5 = 0;
  do {
    if (7 < iVar5) {
LAB_8c0f4912:
      Vec3_dtor(&fStack_b0,0xffffffff,a6,ar7);
      Vec3_dtor(&fStack_a0,0xffffffff,a6,ar7);
      uVar1 = Vec3_dtor(&uStack_90,0xffffffff,a6,ar7);
      return uVar1;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(uStack_90,*pfVar4);
    }
    else {
      uVar7 = CONCAT44(uStack_8c,uStack_90);
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && fVar6 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x140) = CONCAT44(0x3f800000,fVar6);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44(uStack_90,fVar6);
        *(undefined4 *)(ar4 + 0x150) = uStack_90;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = uVar7 & 0xffffffff;
        uVar7 = CONCAT44(uStack_8c,uStack_90);
        *(ulonglong *)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    fVar6 = fStack_a0;
    fVar10 = fStack_9c;
    if (cVar14 == '\0') {
      fVar6 = *pfVar4;
      fVar10 = fStack_a0;
    }
    if (cVar13 == '\0' && fVar10 < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0xbf800000;
      }
      else {
        fVar6 = -1.0;
        *(undefined8 *)(ar4 + 0x140) = 0x144bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44(fStack_a0,fVar6);
        *(float *)(ar4 + 0x150) = fStack_a0;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44(fStack_9c,fStack_a0);
        *(ulonglong *)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(uStack_88,pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44(uStack_84,uStack_88);
    }
    if (cVar13 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x148) = CONCAT44(0x3f800000,(float)uVar7);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
        *(undefined4 *)(ar4 + 0x158) = uStack_88;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(ar4 + 0x158) = CONCAT44(uStack_84,uStack_88);
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(uStack_98,pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44(uStack_94,uStack_98);
    }
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < (float)uVar7) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
        uVar7 = CONCAT44(0xbf800000,(float)uVar7);
        *(undefined4 *)(ar4 + 0x148) = 0xbf800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = uVar7 & 0xffffffff;
        uVar7 = 0x150bf800000;
        *(undefined8 *)(ar4 + 0x148) = 0x150bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
        *(undefined4 *)(ar4 + 0x158) = uStack_98;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(ar4 + 0x158) = CONCAT44(uStack_94,uStack_98);
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(fStack_9c,pfVar4[1]);
    }
    else {
      uVar7 = CONCAT44(uStack_98,fStack_9c);
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
        *(undefined4 *)(ar4 + 0x144) = 0xbf800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = uVar7 & 0xffffffff;
        fVar6 = -1.0;
        *(undefined8 *)(ar4 + 0x144) = 0x148bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x150) = 0;
        uVar7 = CONCAT44(fStack_9c,fVar6);
        *(float *)(ar4 + 0x154) = fStack_9c;
      }
      else {
        *(ulonglong *)(ar4 + 0x150) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44(uStack_98,fStack_9c);
        *(ulonglong *)(ar4 + 0x154) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      fStack_b0 = *pfVar4;
      fStack_ac = pfVar4[1];
      fStack_a8 = pfVar4[2];
      uVar8 = CONCAT44(fStack_a8,fVar6);
    }
    else {
      fStack_b0 = (float)*(undefined8 *)pfVar4;
      fStack_ac = (float)*(undefined8 *)(pfVar4 + 1);
      uVar8 = *(undefined8 *)(pfVar4 + 2);
      fStack_a8 = (float)uVar8;
      uStack_a4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    if (iVar2 == 0) {
      iVar3 = (**(code **)(*ar5 + 0x130))(ar5,&fStack_b0,a6,ar7);
      if (iVar3 == 2) {
        ar7 = ar4 + 0x150;
        a6 = (float *)(ar4 + 0x140);
        iVar3 = FUN_8c017900(uVar1,&fStack_b0,a6,ar7);
        if (iVar3 == 1) {
          *(int *)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        *(undefined4 *)(ar4 + 0x13c) = 0xffffffff;
      }
      else {
        (**(code **)(*ar5 + 0x128))(ar5,&fStack_b0,a6,ar7);
        if (cVar14 == '\0') {
          fVar11 = (float)((ulonglong)uVar8 >> 0x20);
          dVar9 = (double)CONCAT44(pfVar4[1],(int)uVar8);
        }
        else {
          dVar9 = *(double *)(pfVar4 + 1);
          in_xd14 = uVar8;
        }
        if (cVar13 == '\0') {
          bVar12 = (float)((ulonglong)dVar9 >> 0x20) < fVar11;
        }
        else {
          bVar12 = dVar9 < (double)CONCAT44(in_fr14,fVar11);
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x140) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x144) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x148) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x150) = 0;
            *(float *)(ar4 + 0x154) = fVar11;
          }
          else {
            *(ulonglong *)(ar4 + 0x150) = (ulonglong)dVar9 & 0xffffffff;
            *(undefined8 *)(ar4 + 0x154) = in_xd14;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x158) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x158) = (ulonglong)dVar9 & 0xffffffff;
          }
          *(int *)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x144) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x144) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x148) = 0;
          *(undefined4 *)(ar4 + 0x150) = 0xbf800000;
          *(undefined4 *)(ar4 + 0x154) = 0xbf800000;
          *(undefined4 *)(ar4 + 0x158) = 0xbf800000;
        }
        else {
          *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
          *(undefined8 *)(ar4 + 0x150) = 0x154bf800000;
          *(undefined8 *)(ar4 + 0x154) = 0x154bf800000;
          *(undefined8 *)(ar4 + 0x158) = 0x154bf800000;
        }
        *(undefined4 *)(ar4 + 0x13c) = 0xffffffff;
      }
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) {
      (**(code **)(*ar5 + 0x128))(ar5,&fStack_b0,a6,ar7);
      if (cVar14 == '\0') {
        fVar11 = (float)((ulonglong)uVar8 >> 0x20);
        dVar9 = (double)CONCAT44(pfVar4[1],(int)uVar8);
      }
      else {
        dVar9 = *(double *)(pfVar4 + 1);
        in_xd14 = uVar8;
      }
      if (cVar13 == '\0') {
        bVar12 = (float)((ulonglong)dVar9 >> 0x20) < fVar11;
      }
      else {
        bVar12 = dVar9 < (double)CONCAT44(in_fr14,fVar11);
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x144) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x148) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x150) = 0;
          *(float *)(ar4 + 0x154) = fVar11;
        }
        else {
          *(ulonglong *)(ar4 + 0x150) = (ulonglong)dVar9 & 0xffffffff;
          *(undefined8 *)(ar4 + 0x154) = in_xd14;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x158) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x158) = (ulonglong)dVar9 & 0xffffffff;
        }
        *(int *)(ar4 + 0x13c) = iVar5;
        goto LAB_8c0f4912;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = (ulonglong)dVar9 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
        *(undefined4 *)(ar4 + 0x150) = 0xbf800000;
        *(undefined4 *)(ar4 + 0x154) = 0xbf800000;
        *(undefined4 *)(ar4 + 0x158) = 0xbf800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
        *(undefined8 *)(ar4 + 0x150) = 0x154bf800000;
        *(undefined8 *)(ar4 + 0x154) = 0x154bf800000;
        *(undefined8 *)(ar4 + 0x158) = 0x154bf800000;
      }
      *(undefined4 *)(ar4 + 0x13c) = 0xffffffff;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 3;
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

/* WARNING: Removing unreachable block (ram,0x8c0f49ba) */
/* WARNING: Removing unreachable block (ram,0x8c0f49b8) */
/* WARNING: Removing unreachable block (ram,0x8c0f49bc) */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m7_0f49b8(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  double in_dr0;
  double dVar4;
  double dVar5;
  float fVar6;
  double in_dr12;
  undefined4 in_fr15;
  double dVar7;
  double in_xd12;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_38,ar5_00,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x170))(ar4,ar5_00,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = uStack_38;
  }
  uStack_38 = uVar2;
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,ar5_00,ar6,ar7);
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,ar5_00,ar6,ar7);
  if (iVar1 == 0) {
    dVar7 = (double)CONCAT44(0x3f800000,SUB84(dVar7,0));
  }
  a6 = &uStack_38;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_28,a6,ar7);
  if (cVar10 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar7,0);
  if (cVar9 == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = (double)CONCAT44(uStack_28,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_24,uStack_28);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(uStack_38,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_34,uStack_38);
    }
    if (cVar9 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(uStack_38,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(fStack_34,uStack_38);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(uStack_28,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_24,uStack_28);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar10 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (cVar9 == '\0') {
    fVar3 = SUB84(dVar4,0) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = (double)CONCAT44(uStack_20,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(uStack_1c,uStack_20);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fStack_30,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_2c,fStack_30);
    }
    if (cVar9 != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = (double)CONCAT44(fStack_30,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(uStack_2c,fStack_30);
      }
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(uStack_20,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(uStack_1c,uStack_20);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar4;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,a6,ar7);
  if (cVar10 == '\0') {
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(int)((ulonglong)dVar4 >> 0x20));
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
    dVar4 = in_xd12;
  }
  else {
    dVar5 = *(double *)(ar4 + 0x34);
  }
  fVar6 = (float)((ulonglong)dVar7 >> 0x20);
  if (cVar9 == '\0') {
    bVar8 = SUB84(in_dr12,0) < (float)((ulonglong)dVar5 >> 0x20) - fVar6;
  }
  else {
    bVar8 = in_dr12 < dVar5 - dVar7;
  }
  if (bVar8) {
    fVar6 = fStack_34;
    fVar3 = fStack_30;
    if (cVar10 == '\0') {
      fVar6 = *(float *)(ar4 + 0x34);
      fVar3 = fStack_34;
    }
    if (cVar9 != '\0' || fVar3 <= fVar6) {
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x34) = fStack_34;
      }
      else {
        *(ulonglong *)(ar4 + 0x34) = CONCAT44(fStack_30,fStack_34);
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      fVar6 = SUB84(in_dr12,0) + fVar6;
    }
    else {
      fVar6 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x34) = fVar6;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar4;
    }
  }
  Vec3_dtor(&uStack_38,0xffffffff,a6,ar7);
  uVar2 = Vec3_dtor(&uStack_28,0xffffffff,a6,ar7);
  return uVar2;
}



/* FUN_8c0f4b44 @ 8c0f4b44 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f4b7a) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b70) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b68) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b5c) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b4e) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b52) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b5e) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b6a) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b76) */
/* WARNING: Removing unreachable block (ram,0x8c0f4b7c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f4b44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  *(int *)(ar4 + 0x78) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 0x7c) = (int)in_dr4;
  uVar1 = FUN_8c219070(ar4,ar5,ar6,ar7);
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
  int ar5_00;
  undefined1 auStack_14 [16];
  
  ar5_00 = ar4 + 0x5c;
  (*(code *)PTR_FUN_8c0f4be0)(auStack_14,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c0f4be4)(ar4 + 0x5c,ar5_00,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,ar5_00,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c0f4d2a) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d24) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d16) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d0e) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d00) */
/* WARNING: Removing unreachable block (ram,0x8c0f4cfc) */
/* WARNING: Removing unreachable block (ram,0x8c0f4cfe) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d02) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d14) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d18) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d28) */
/* WARNING: Removing unreachable block (ram,0x8c0f4d2c) */
/* WARNING: Unknown calling convention */

float * FUN_8c0f4cf0(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 0x50) = *(float *)(ar4 + 0x50) + *ar5;
  *(float *)(ar4 + 0x54) = *(float *)(ar4 + 0x54) + ar5[1];
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) + ar5[2];
  return (float *)(ar4 + 0x58);
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
  (*(code *)PTR_FUN_8c0f4eac)
            (ar4 + 0xc,ar5,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f4ea8 + 0x16);
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
  (*(code *)PTR_FUN_8c0f4f94)(ar5,ar5,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c1401e2_2_8c0f4f90 + 0x16);
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
  undefined4 ar7_00;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_ac [164];
  
  cVar3 = '\0';
  _uStack_b8 = *(undefined8 *)(ar4 + 0x6c);
  uStack_bc = *(undefined4 *)(ar4 + 0x28);
  FUN_8c014334(auStack_ac,ar5,ar6,ar7,s_No__2ld_kind__d_cat__d_food__d_r_8c140230);
  _uStack_b8 = CONCAT44(0xffffffff,uStack_b8);
  ar7_00 = 0xd;
  uVar1 = ar6;
  noop_102824(auStack_ac,ar5,ar6,0xd,0xffffffff);
  if (cVar3 == '\0') {
    _uStack_b8 = CONCAT44(*(undefined4 *)(ar4 + 0x38),uStack_b8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_b8 = *(undefined4 *)(ar4 + 0x34);
    uStack_bc = *(undefined4 *)(ar4 + 0x30);
    puVar2 = &uStack_bc;
  }
  else {
    _uStack_b8 = *(undefined8 *)(ar4 + 0x38);
    uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x34) >> 0x20);
    puVar2 = (undefined4 *)&stack0xffffff38;
  }
  *(char **)((int)puVar2 + -4) = s_pos_x__lf_y__lf_z__lf_8c140256;
  FUN_8c014334((undefined1 *)((int)puVar2 + 0x10),ar5,uVar1,ar7_00,*(undefined4 *)((int)puVar2 + -4)
              );
  *(undefined4 *)((int)puVar2 + 8) = 0xffffffff;
  uVar1 = noop_102824((undefined1 *)((int)puVar2 + 0x10),0xfa,ar6,0xd,
                      *(undefined4 *)((int)puVar2 + 8));
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

/* WARNING: Removing unreachable block (ram,0x8c0f5120) */
/* WARNING: Removing unreachable block (ram,0x8c0f511c) */
/* WARNING: Removing unreachable block (ram,0x8c0f511e) */
/* WARNING: Removing unreachable block (ram,0x8c0f51ae) */
/* WARNING: Unknown calling convention */

double * CAnimal_m8_0f511c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  int a5;
  undefined4 uVar2;
  double in_dr0;
  float fVar4;
  double dVar3;
  float in_fr13;
  undefined4 in_fr12;
  undefined4 in_fr15;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  (**(code **)(*ar5 + 0x184))(ar5,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr13 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  a5 = ar4 + 0x30;
  (**(code **)(*ar5 + 0x128))(ar5,a5,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr15 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,a5,ar6,ar7);
  uVar2 = SUB84(in_dr0,0);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  if (cVar9 == '\0') {
    fVar4 = 1.1754944e-38;
  }
  else {
    uVar2 = 0x800000;
    fVar4 = -NAN;
  }
  fVar5 = SUB84(in_dr0,0);
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
  if (in_fr13 == fVar4) {
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(fVar6,fVar5 + fVar6);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = SUB84(in_dr0,0) < (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      bVar7 = in_dr0 < dVar3;
    }
    if (bVar7) {
      pdVar1 = (double *)0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
    }
    else {
      pdVar1 = (double *)0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr13 < (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      bVar7 = (double)CONCAT44(in_fr12,in_fr13) < dVar3;
    }
    if (bVar7) {
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
      }
      else {
        dVar3 = *(double *)(ar4 + 0x34);
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (bVar7) {
        pdVar1 = (double *)0x74;
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
      }
      else {
        pdVar1 = (double *)0x74;
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
      }
    }
    else {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      pdVar1 = (double *)(ar4 + 0x34);
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar3,0));
      }
      else {
        dVar3 = *pdVar1;
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (!bVar7) {
        pdVar1 = (double *)0x74;
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
      }
    }
  }
  return pdVar1;
}



/* FUN_8c0f528c @ 8c0f528c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f52c0) */
/* WARNING: Removing unreachable block (ram,0x8c0f52b4) */
/* WARNING: Removing unreachable block (ram,0x8c0f52a8) */
/* WARNING: Removing unreachable block (ram,0x8c0f529c) */
/* WARNING: Removing unreachable block (ram,0x8c0f5290) */
/* WARNING: Removing unreachable block (ram,0x8c0f5296) */
/* WARNING: Removing unreachable block (ram,0x8c0f52a2) */
/* WARNING: Removing unreachable block (ram,0x8c0f52ae) */
/* WARNING: Removing unreachable block (ram,0x8c0f52ba) */
/* WARNING: Removing unreachable block (ram,0x8c0f52c2) */
/* WARNING: Unknown calling convention */

undefined4
FUN_8c0f528c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  
  *(undefined4 *)(ar4 + 0x30) = in_fr4;
  *(undefined4 *)(ar4 + 0x34) = in_fr5;
  *(undefined4 *)(ar4 + 0x38) = in_fr6;
  *(undefined4 *)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(ar4 + 0x58) = in_fr9;
  *(undefined4 *)(ar4 + 0x5c) = in_fr10;
  *(undefined4 *)(ar4 + 0x60) = in_fr11;
  *(undefined4 *)(ar4 + 100) = s0;
  return 0;
}



/* FUN_8c0f52c8 @ 8c0f52c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f52ec) */
/* WARNING: Removing unreachable block (ram,0x8c0f52e6) */
/* WARNING: Removing unreachable block (ram,0x8c0f52de) */
/* WARNING: Removing unreachable block (ram,0x8c0f52d4) */
/* WARNING: Removing unreachable block (ram,0x8c0f52c8) */
/* WARNING: Removing unreachable block (ram,0x8c0f52da) */
/* WARNING: Removing unreachable block (ram,0x8c0f52e0) */
/* WARNING: Removing unreachable block (ram,0x8c0f52e8) */
/* WARNING: Removing unreachable block (ram,0x8c0f52ee) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f52c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c219070(ar4,ar5,ar6,ar7);
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

/* WARNING: Removing unreachable block (ram,0x8c0f5464) */
/* WARNING: Removing unreachable block (ram,0x8c0f53d0) */
/* WARNING: Removing unreachable block (ram,0x8c0f53c8) */
/* WARNING: Removing unreachable block (ram,0x8c0f53e4) */
/* WARNING: Removing unreachable block (ram,0x8c0f53dc) */
/* WARNING: Removing unreachable block (ram,0x8c0f53f8) */
/* WARNING: Removing unreachable block (ram,0x8c0f53f0) */
/* WARNING: Removing unreachable block (ram,0x8c0f539e) */
/* WARNING: Removing unreachable block (ram,0x8c0f539a) */
/* WARNING: Removing unreachable block (ram,0x8c0f5398) */
/* WARNING: Removing unreachable block (ram,0x8c0f539c) */
/* WARNING: Removing unreachable block (ram,0x8c0f53ec) */
/* WARNING: Removing unreachable block (ram,0x8c0f53f4) */
/* WARNING: Removing unreachable block (ram,0x8c0f53d8) */
/* WARNING: Removing unreachable block (ram,0x8c0f53e0) */
/* WARNING: Removing unreachable block (ram,0x8c0f53c4) */
/* WARNING: Removing unreachable block (ram,0x8c0f53cc) */
/* WARNING: Removing unreachable block (ram,0x8c0f545c) */
/* WARNING: Removing unreachable block (ram,0x8c0f546a) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f5398(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_fr1;
  undefined4 uVar4;
  double dVar5;
  double in_dr12;
  double in_dr14;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (ar6 == 0) {
    in_dr14 = 2.508760045925733e+21;
    in_dr12 = 3.062442976448328e+17;
  }
  else if (ar6 == 1) {
    in_dr14 = 5.879900592671609e+19;
    in_dr12 = 1.1709360855239885e+17;
  }
  else if (ar6 == 2) {
    in_dr14 = 1.9172811027428727e+24;
    in_dr12 = 1924145626640.0;
  }
  if (ar6 == 3) {
    *(undefined4 *)ar5 = 0;
    puVar3 = (undefined4 *)((int)ar5 + 4);
    *puVar3 = 0;
    *(undefined4 *)(ar5 + 1) = 0;
  }
  else {
    uVar1 = rand(ar4,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      iVar6 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar2 = libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7);
    if (cVar8 == '\0') {
      iVar7 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar7 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar7 + iVar2),in_fr1);
    }
    else {
      dVar5 = (double)(iVar7 + iVar2);
    }
    if (cVar9 == '\0') {
      *(int *)ar5 = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *ar5 = dVar5;
    }
    uVar1 = rand(uVar1,iVar6,ar6,ar7);
    uVar4 = SUB84(dVar5,0);
    if (cVar8 == '\0') {
      iVar6 = (int)(float)((ulonglong)in_dr12 >> 0x20);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar6 = libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7);
    if (cVar8 == '\0') {
      iVar2 = (int)(float)((ulonglong)in_dr14 >> 0x20);
    }
    else {
      iVar2 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar2 + iVar6),uVar4);
    }
    else {
      dVar5 = (double)(iVar2 + iVar6);
    }
    if (cVar9 == '\0') {
      *(int *)(ar5 + 1) = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)(ar4 + 0x34);
    }
    else {
      ar5[1] = dVar5;
      *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)(ar4 + 0x34);
    }
    puVar3 = (undefined4 *)(ar4 + 0x34);
  }
  return puVar3;
}



/* FUN_8c0f54b8 @ 8c0f54b8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f54c2) */
/* WARNING: Removing unreachable block (ram,0x8c0f54ba) */
/* WARNING: Removing unreachable block (ram,0x8c0f54be) */
/* WARNING: Removing unreachable block (ram,0x8c0f54c4) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f54b8(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = 0;
  *ar6 = 0;
  *ar7 = 0x42c80000;
  return &DAT_8c0f54cc;
}



/* FUN_8c0f54d0 @ 8c0f54d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f54e2) */
/* WARNING: Removing unreachable block (ram,0x8c0f54dc) */
/* WARNING: Removing unreachable block (ram,0x8c0f54d4) */
/* WARNING: Removing unreachable block (ram,0x8c0f54d6) */
/* WARNING: Removing unreachable block (ram,0x8c0f54de) */
/* WARNING: Removing unreachable block (ram,0x8c0f54e4) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f54d0(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  *ar6 = *(undefined4 *)(ar4 + 0x34);
  *ar7 = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
}



/* FUN_8c0f54ec @ 8c0f54ec callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f5514) */
/* WARNING: Removing unreachable block (ram,0x8c0f550c) */
/* WARNING: Removing unreachable block (ram,0x8c0f5504) */
/* WARNING: Removing unreachable block (ram,0x8c0f54fc) */
/* WARNING: Removing unreachable block (ram,0x8c0f5500) */
/* WARNING: Removing unreachable block (ram,0x8c0f5508) */
/* WARNING: Removing unreachable block (ram,0x8c0f5510) */
/* WARNING: Removing unreachable block (ram,0x8c0f5518) */
/* WARNING: Unknown calling convention */

int FUN_8c0f54ec(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint *puVar1;
  char cVar2;
  uint uStackY_38;
  
  cVar2 = '\0';
  _uStackY_38 = (ulonglong)uStackY_38;
  ar7_00 = 0xffffffff;
  ar6_00 = 2;
  ar5_00 = ar6;
  FUN_8c0f4040(ar4,ar6,2,0xffffffff,0);
  *(undefined **)(ar4 + 8) = &DAT_8c12c058;
  FUN_8c015224(ar4 + 0x170,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x178,ar5_00,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x17c,ar5_00,ar6_00,ar7_00);
  noop_0f58a0(ar4,ar5_00,ar6_00,ar7_00,ar5);
  if (cVar2 == '\0') {
    puVar1 = (uint *)&stack0xffffffcc;
    _uStackY_38 = CONCAT44(s0,uStackY_38);
  }
  else {
    _uStackY_38 = CONCAT44(s4,s0);
    puVar1 = &uStackY_38;
  }
  Class_12c058_m1_0f5660(ar4,*(undefined4 *)((int)puVar1 + 4),ar6_00,ar7_00);
  if (ar6 == 0x10) {
    *(undefined4 *)(ar4 + 0x16c) = 0;
  }
  return ar4;
}



/* Class_12c058_m0_0f55d8 @ 8c0f55d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12c058_m0_0f55d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12c058;
    Class_129938_m0_017084(ar4 + 0x17c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x178,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x170,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12c058_m1_0f5660 @ 8c0f5660 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f56aa) */
/* WARNING: Removing unreachable block (ram,0x8c0f56a2) */
/* WARNING: Removing unreachable block (ram,0x8c0f569a) */
/* WARNING: Removing unreachable block (ram,0x8c0f5692) */
/* WARNING: Removing unreachable block (ram,0x8c0f568c) */
/* WARNING: Removing unreachable block (ram,0x8c0f5684) */
/* WARNING: Removing unreachable block (ram,0x8c0f567c) */
/* WARNING: Removing unreachable block (ram,0x8c0f5674) */
/* WARNING: Removing unreachable block (ram,0x8c0f566c) */
/* WARNING: Removing unreachable block (ram,0x8c0f5670) */
/* WARNING: Removing unreachable block (ram,0x8c0f5678) */
/* WARNING: Removing unreachable block (ram,0x8c0f5680) */
/* WARNING: Removing unreachable block (ram,0x8c0f5688) */
/* WARNING: Removing unreachable block (ram,0x8c0f568e) */
/* WARNING: Removing unreachable block (ram,0x8c0f5696) */
/* WARNING: Removing unreachable block (ram,0x8c0f569e) */
/* WARNING: Removing unreachable block (ram,0x8c0f56a6) */
/* WARNING: Removing unreachable block (ram,0x8c0f56ae) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 Class_12c058_m1_0f5660(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  CAnimal_m1_0f41c8(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c0f532c(ar4,0x8c43b2a4,ar4 + 0x17c,ar7);
  return uVar1;
}



/* FUN_8c0f56e8 @ 8c0f56e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f5706) */
/* WARNING: Removing unreachable block (ram,0x8c0f56fc) */
/* WARNING: Removing unreachable block (ram,0x8c0f56f8) */
/* WARNING: Removing unreachable block (ram,0x8c0f56f4) */
/* WARNING: Removing unreachable block (ram,0x8c0f56fa) */
/* WARNING: Removing unreachable block (ram,0x8c0f5702) */
/* WARNING: Removing unreachable block (ram,0x8c0f5708) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f56e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - 0.1;
  if (*(float *)(ar4 + 0x34) <= -100.0) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
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
  
  uVar1 = FUN_8c015ad4(ar4 + 0x178,ar5,ar6,ar7,ar4);
  return uVar1;
}



/* FUN_8c0f577c @ 8c0f577c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f577c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c019088(uVar1,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x178,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0f57f0 @ 8c0f57f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f57f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c01538c(ar4 + 0x170,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c019088(uVar1,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x178,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
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
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = 3;
  ar5_00 = 0xf;
  (*(code *)PTR_FUN_8c0f5a04)(ar4,0xf,3,ar5,ar6);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0f5a08;
  (*(code *)PTR_FUN_8c0f5a10)(ar4 + DAT_8c0f5a0c,ar5_00,ar6_00,ar5);
  (*(code *)PTR_FUN_8c0f5a18)(ar4 + DAT_8c0f5a14,ar5_00,ar6_00,ar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0f5a20)(ar4 + DAT_8c0f5a1c,ar5_00,ar6_00,ar5);
  (*(code *)PTR_FUN_8c0f5a28)(ar4 + DAT_8c0f5a24,ar5_00,ar6_00,ar5);
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
  (*(code *)PTR_FUN_8c0f5a3c)(ar4,ar5_00,ar6_00,ar5);
  (*(code *)PTR_FUN_8c0f5a44)(ar4,DAT_8c0f5a40,ar4 + DAT_8c0f5a24,ar5);
  return ar4;
}



/* Class_12bec0_m0_0f5a48 @ 8c0f5a48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12bec0_m0_0f5a48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12bec0;
    Class_129938_m0_017084(ar4 + 0x1dc,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x1bc,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x1b4,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0f5ad0 @ 8c0f5ad0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f5ae0) */
/* WARNING: Removing unreachable block (ram,0x8c0f5aea) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5ad0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1cc) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 0;
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  return 0x74;
}



/* s_Failed_to_load_textuer_FOOD_0f5b18 @ 8c0f5b10 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f5b40) */
/* WARNING: Unknown calling convention */

int s_Failed_to_load_textuer_FOOD_0f5b18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined1 *ar5_01;
  undefined **ar5_02;
  undefined *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  uint uVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar7_00 = 4;
  ar6_00 = &DAT_8c1401b4;
  ar5_00 = &DAT_8c140184;
  iVar1 = ar4 + 0x170;
  FUN_8c016464(iVar1,&DAT_8c140184,&DAT_8c1401b4,4);
  iVar1 = rand(iVar1,ar5_00,ar6_00,ar7_00);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 512.0001354217529;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x40800000,fVar3);
  }
  else {
    dVar4 = -1.3757563587465766e-249;
  }
  if (cVar5 == '\0') {
    iVar1 = (int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar4 * dVar4);
  }
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
    ar6_01 = 4;
    ar5_01 = &DAT_8c43b338 + iVar1 * 0x10;
    FUN_8c0164c8(ar4 + 0x170,ar5_01,4,ar7_00);
  }
  else {
    ar6_01 = 4;
    ar5_01 = &DAT_8c43b368;
    FUN_8c0164c8(ar4 + 0x170,&DAT_8c43b368,4,ar7_00);
  }
  FUN_8c014790(ar4 + 0x170,ar5_01,ar6_01,ar7_00);
  FUN_8c014764(ar4 + 0x170,ar5_01,ar6_01,ar7_00);
  FUN_8c014a64(ar4 + 0x170,ar5_01,ar6_01,ar7_00);
  ar5_02 = &PTR_PTR_8c1401d0;
  (**(code **)(*(int *)(ar4 + 0x1b4) + 8))((int *)(ar4 + 0x1b4),&PTR_PTR_8c1401d0,ar6_01,ar7_00);
  iVar1 = get_field_4_0253e4(ar4 + 0x1b4,ar5_02,ar6_01,ar7_00);
  for (uVar2 = 0; uVar2 < *(uint *)(iVar1 + 4); uVar2 = uVar2 + 1) {
  }
  iVar1 = FUN_8c020ef0(ar5,&DAT_8c14026d,s___GRAPHICS_COMMON_8c1401e2 + 2,iVar1);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_textuer___FOOD__8c140272,&DAT_8c140291,0,2);
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
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (**(code **)(*(int *)(ar4 + 8) + 0x28))(ar4,ar7,ar6,ar7);
  (*(code *)PTR_FUN_8c0f5d08)(ar4,ar7,ar6,ar7_00);
  iVar1 = (*(code *)PTR_get_field_6c_02f46c_8c0f5d0c)(ar4,ar7,ar6,ar7_00);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_get_field_70_05f490_8c0f5d10)(ar4,ar7,ar6,ar7_00);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c0f5d14)(ar4,ar7,ar6,ar7_00);
    }
  }
  (*(code *)PTR_FUN_8c0f5d18)(ar4,ar7,ar6,ar7_00);
  return 1;
}



/* Class_12bec0_m3_0f5d1c @ 8c0f5d1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bec0_m3_0f5d1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (**(code **)(*(int *)(ar4 + 8) + 0x28))(ar4,ar7,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_6c_02f46c_8c0f5d70)(ar4,ar7,ar6,ar7_00);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_get_field_70_05f490_8c0f5d74)(ar4,ar7,ar6,ar7_00);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c0f5d78)(ar4,ar7,ar6,ar7_00);
    }
  }
  (*(code *)PTR_FUN_8c0f5d7c)(ar4,ar7,ar6,ar7_00);
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
  char cVar5;
  char cVar6;
  undefined8 uStack_4c;
  undefined1 auStack_48 [68];
  
  cVar6 = '\0';
  cVar5 = '\0';
  FUN_8c0191c8((undefined1 *)((int)register0x0000003c + -0x48),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,(undefined4)uStack_4c);
  uVar1 = 0;
  FUN_8c25b5d0(0,ar5,ar6,ar7,(undefined4)uStack_4c);
  FUN_8c013b3c(uVar1,ar5,ar6,ar7);
  if (cVar6 == '\0') {
    uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_4c._0_4_ = uVar1;
    dVar3 = (double)CONCAT44(0x47800000,uVar1);
  }
  else {
    dVar3 = 12831.689682006836;
    uStack_4c = in_dr0;
  }
  if (cVar5 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(0x40c90fd8,fVar2);
  }
  else {
    dVar3 = 1.0382059669001045e+34;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(0x46fffe00,(float)iVar4);
  }
  else {
    dVar3 = -3.738952064572566e-250;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar3 - dVar3);
  }
  FUN_8c256a78(0,iVar4,ar6,ar7,(undefined4)uStack_4c);
  FUN_8c256fec(0,iVar4,ar6,ar7,(undefined4)uStack_4c);
  FUN_8c01538c(ar4 + 0x1b4,iVar4,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x1b4,0,ar6,ar7);
  FUN_8c016524(ar4 + 0x170,uVar1,ar6,ar7);
  uVar1 = FUN_8c256210(1,uVar1,ar6,ar7);
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
/* WARNING: Removing unreachable block (ram,0x8c0f5fdc) */
/* WARNING: Removing unreachable block (ram,0x8c0f5fde) */
/* WARNING: Removing unreachable block (ram,0x8c0f65b0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f5fdc(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float *ar5_00;
  undefined *puVar7;
  float *a6;
  undefined4 uVar8;
  float fVar9;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  double in_dr14;
  double dVar13;
  undefined8 in_xd0;
  char cVar14;
  char cVar15;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [20];
  
  cVar15 = '\0';
  cVar14 = '\0';
  pfVar5 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  uVar8 = 0;
  Vec3_ctor_zero(&fStack_38,pfVar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_48,pfVar5,ar6,ar7);
  a6 = &fStack_48;
  pfVar5 = ar5;
  (**(code **)((int)*ar5 + 0x124))(ar5,&fStack_38,a6,ar7);
  if (cVar15 == '\0') {
    fVar9 = *(float *)(ar4 + 0x30);
    fVar12 = fStack_38;
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x30);
    fVar9 = fStack_38;
    fVar12 = fStack_34;
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    pfVar5 = (float *)(ar4 + 0x30);
    if (cVar15 == '\0') {
      fVar9 = *pfVar5;
      fVar12 = fStack_48;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar5;
      fVar9 = fStack_48;
      fVar12 = fStack_44;
    }
    if (cVar14 != '\0' || fVar12 <= fVar9) {
      if (cVar15 != '\0') {
        in_xd0 = CONCAT44(fStack_44,fStack_48);
        fStack_48 = fVar9;
      }
      if (cVar14 == '\0') {
        fStack_48 = fStack_48 - 1.0;
      }
      else {
        fStack_48 = SUB84((double)CONCAT44(0x3f800000,fStack_48) -
                          (double)CONCAT44(0x3f800000,fStack_48),0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x30) = fStack_48;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44(fStack_34,fStack_38);
      fStack_38 = fVar9;
    }
    if (cVar14 == '\0') {
      fStack_38 = fStack_38 + 1.0;
    }
    else {
      fStack_38 = SUB84((double)CONCAT44(0x3f800000,fStack_38) +
                        (double)CONCAT44(0x3f800000,fStack_38),0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x30) = fStack_38;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
  }
  ar5_00 = (float *)(ar4 + 0x38);
  if (cVar15 == '\0') {
    fVar9 = *ar5_00;
    fVar12 = fStack_30;
  }
  else {
    in_xd0 = *(undefined8 *)ar5_00;
    fVar9 = fStack_30;
    fVar12 = fStack_2c;
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(uStack_40,*(undefined4 *)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x38);
      dVar10 = (double)CONCAT44(uStack_3c,uStack_40);
    }
    if (cVar14 != '\0' || (float)((ulonglong)dVar10 >> 0x20) <= SUB84(dVar10,0)) {
      if (cVar15 == '\0') {
        dVar10 = (double)(ulonglong)uStack_40;
      }
      else {
        in_xd0 = CONCAT44(uStack_3c,uStack_40);
      }
      dVar13 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0) - 1.0);
      }
      else {
        dVar10 = dVar13 - dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x38) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    pfVar5 = (float *)(ar4 + 0x38);
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44(fStack_2c,fStack_30);
      fStack_30 = fVar9;
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x3f800000,fStack_30 + 1.0);
    }
    else {
      dVar10 = (double)CONCAT44(0x3f800000,fStack_30) + (double)CONCAT44(0x3f800000,fStack_30);
    }
    if (cVar15 == '\0') {
      *pfVar5 = SUB84(dVar10,0);
    }
    else {
      *(undefined8 *)pfVar5 = in_xd0;
    }
  }
  iVar1 = *(int *)(ar4 + 0x1cc);
  if (iVar1 == 0) {
    if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
      uVar4 = rand(pfVar5,ar5_00,a6,ar7);
      uVar3 = SUB84(in_dr14,0);
      fVar9 = SUB84(dVar10,0);
      uVar2 = rand(pfVar5,ar5_00,a6,ar7);
      libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7);
      uVar4 = 0x14;
      libgcc_divide_helper_01031c(uVar2,0x14,a6,ar7);
      FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7);
      puVar7 = &DAT_8c1401d8;
      iVar1 = ar4 + 0x1bc;
      FUN_8c023c98(iVar1,&DAT_8c1401d8,a6,ar7);
      uVar4 = rand(iVar1,puVar7,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1bc);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = rand(uVar4,uVar2,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1c4);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x1d0) = uVar11;
      }
      uVar4 = rand(uVar4,uVar2,a6,ar7);
      uVar2 = (undefined4)uVar11;
      iVar1 = libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7);
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) /
                                   (float)((ulonglong)dVar10 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x1d4) = in_dr14;
      }
      *(int *)(ar4 + 0x1cc) = *(int *)(ar4 + 0x1cc) + 1;
    }
    else {
      uVar4 = rand(pfVar5,ar5_00,a6,ar7);
      uVar3 = SUB84(in_dr14,0);
      fVar9 = SUB84(dVar10,0);
      uVar2 = rand(pfVar5,ar5_00,a6,ar7);
      libgcc_divide_helper_01031c(uVar4,0x32,a6,ar7);
      uVar4 = 0x32;
      libgcc_divide_helper_01031c(uVar2,0x32,a6,ar7);
      FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7);
      puVar7 = &DAT_8c1401dc;
      iVar1 = ar4 + 0x1bc;
      FUN_8c023c98(iVar1,&DAT_8c1401dc,a6,ar7);
      uVar4 = rand(iVar1,puVar7,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1bc);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = rand(uVar4,uVar2,a6,ar7);
      uVar2 = 2;
      iVar1 = libgcc_divide_helper_01031c(uVar4,2,a6,ar7);
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x1c4);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x1d0) = uVar11;
      }
      uStack_94 = rand(uVar4,uVar2,a6,ar7);
      uVar4 = (undefined4)uVar11;
      iVar1 = libgcc_divide_helper_01031c(uStack_94,0x14,a6,ar7);
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(0x41200000,uVar4);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) /
                                   (float)((ulonglong)dVar10 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x1d4) = in_dr14;
      }
      *(undefined4 *)(ar4 + 0x1cc) = 2;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar1 = ar4 + 0x30;
      (**(code **)((int)*ar5 + 0x128))(ar5,iVar1,a6,ar7);
      uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
      uStack_a4 = uVar4;
      if (cVar15 != '\0') {
        uStack_a4 = SUB84(dVar10,0);
        uStack_a0 = uVar4;
      }
      iVar6 = ar4;
      (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,iVar1,a6,ar7);
      uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(uVar4,uStack_a4);
      }
      else {
        in_xd0 = CONCAT44(uStack_a0,uVar4);
      }
      if (cVar14 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar15 == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar9);
      }
      else {
        uVar11 = *(ulonglong *)(ar4 + 0x34);
      }
      if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
        iVar6 = ar4 + 0x1bc;
        FUN_8c022d04(iVar6,iVar1,a6,ar7);
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x1d4) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
        }
        uVar8 = 1;
        uVar11 = uVar11 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x1d0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x1d0) = uVar11;
        }
      }
      uVar3 = (undefined4)uVar11;
      uVar4 = rand(iVar6,iVar1,a6,ar7);
      iVar1 = libgcc_divide_helper_01031c(uVar4,100,a6,ar7);
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(0x461c4000,uVar3);
      }
      else {
        dVar10 = 3.23124508159998e-312;
      }
      if (cVar14 == '\0') {
        dVar13 = (double)CONCAT44(uVar2,(float)iVar1 / (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        dVar13 = (double)CONCAT44(uVar2,(float)iVar1) / dVar10;
      }
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),SUB84(dVar10,0));
      }
      else {
        dVar10 = *(double *)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar13,0),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 + dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x1d0) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x1d0) = dVar10;
      }
      Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7,auStack_68);
      uVar4 = SUB84(dVar10,0);
      FUN_8c023aa0(ar4 + 0x30,auStack_68,a6,ar7);
      Vec3_dtor(auStack_68,0xffffffff,a6,ar7);
      if (cVar15 == '\0') {
        uVar4 = *(undefined4 *)(ar4 + 0x34);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x34);
      }
      a6 = (float *)0x1d0;
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),uVar4);
      }
      else {
        dVar10 = *(double *)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x34) = fVar9;
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = in_xd0;
      }
    }
    goto LAB_8c0f6620;
  }
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  iVar1 = ar4 + 0x30;
  (**(code **)((int)*ar5 + 0x128))(ar5,iVar1,a6,ar7);
  uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
  uStack_98 = uVar4;
  if (cVar15 != '\0') {
    uStack_98 = SUB84(dVar10,0);
    uStack_94 = uVar4;
  }
  iVar6 = ar4;
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,iVar1,a6,ar7);
  uVar4 = (undefined4)((ulonglong)dVar10 >> 0x20);
  if (cVar15 == '\0') {
    dVar10 = (double)CONCAT44(uVar4,uStack_98);
  }
  else {
    in_xd0 = CONCAT44(uStack_94,uVar4);
  }
  if (cVar14 == '\0') {
    fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar10 + dVar10,0);
  }
  if (cVar15 == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar9);
  }
  else {
    uVar11 = *(ulonglong *)(ar4 + 0x34);
  }
  if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
    iVar6 = ar4 + 0x1bc;
    FUN_8c022d04(iVar6,iVar1,a6,ar7);
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    uVar8 = 1;
    uVar11 = uVar11 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d0) = uVar11;
    }
  }
  uVar4 = (undefined4)uVar11;
  if ((*(uint *)(ar4 + 0x74) & 0x10) == 0x10) {
    *(undefined4 *)(ar4 + 0x1cc) = 2;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x1d0) = uVar11 & 0xffffffff;
    }
    FUN_8c023bf4(ar4 + 0x1bc,&DAT_8c1401e0,a6,ar7);
  }
  else {
    uVar3 = rand(iVar6,iVar1,a6,ar7);
    iVar1 = libgcc_divide_helper_01031c(uVar3,100,a6,ar7);
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(0x42c80000,uVar4);
    }
    else {
      dVar10 = 9.85159599864978e-312;
    }
    if (cVar14 == '\0') {
      dVar13 = (double)CONCAT44(uVar2,(float)iVar1 / (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      dVar13 = (double)CONCAT44(uVar2,(float)iVar1) / dVar10;
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),SUB84(dVar10,0));
    }
    else {
      dVar10 = *(double *)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar13,0),SUB84(dVar10,0)
                               );
    }
    else {
      dVar10 = dVar10 + dVar13;
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x1d0) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x1d0) = dVar10;
    }
    Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7,auStack_58);
    FUN_8c023aa0(ar4 + 0x30,auStack_58,a6,ar7);
    Vec3_dtor(auStack_58,0xffffffff,a6,ar7);
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1d0),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar10 = *(double *)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x34) = fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
    }
  }
LAB_8c0f6620:
  Vec3_dtor(&fStack_48,0xffffffff,a6,ar7);
  Vec3_dtor(&fStack_38,0xffffffff,a6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,a6,ar7);
  return uVar8;
}



/* FUN_8c0f66ac @ 8c0f66ac callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f6788) */
/* WARNING: Removing unreachable block (ram,0x8c0f66f4) */
/* WARNING: Removing unreachable block (ram,0x8c0f66ee) */
/* WARNING: Removing unreachable block (ram,0x8c0f66e8) */
/* WARNING: Removing unreachable block (ram,0x8c0f66e2) */
/* WARNING: Removing unreachable block (ram,0x8c0f66dc) */
/* WARNING: Removing unreachable block (ram,0x8c0f6708) */
/* WARNING: Removing unreachable block (ram,0x8c0f6700) */
/* WARNING: Removing unreachable block (ram,0x8c0f671c) */
/* WARNING: Removing unreachable block (ram,0x8c0f6714) */
/* WARNING: Removing unreachable block (ram,0x8c0f66b2) */
/* WARNING: Removing unreachable block (ram,0x8c0f66ae) */
/* WARNING: Removing unreachable block (ram,0x8c0f66ac) */
/* WARNING: Removing unreachable block (ram,0x8c0f66b0) */
/* WARNING: Removing unreachable block (ram,0x8c0f6710) */
/* WARNING: Removing unreachable block (ram,0x8c0f6718) */
/* WARNING: Removing unreachable block (ram,0x8c0f66fc) */
/* WARNING: Removing unreachable block (ram,0x8c0f6704) */
/* WARNING: Removing unreachable block (ram,0x8c0f66d8) */
/* WARNING: Removing unreachable block (ram,0x8c0f66e0) */
/* WARNING: Removing unreachable block (ram,0x8c0f66e6) */
/* WARNING: Removing unreachable block (ram,0x8c0f66ec) */
/* WARNING: Removing unreachable block (ram,0x8c0f66f2) */
/* WARNING: Removing unreachable block (ram,0x8c0f6780) */
/* WARNING: Removing unreachable block (ram,0x8c0f678e) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0f66ac(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_fr1;
  undefined4 uVar4;
  double dVar5;
  double in_dr12;
  double in_dr14;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (ar6 == 0) {
    in_dr14 = 8.854438670043751e+20;
    in_dr12 = 5.879900608187177e+19;
  }
  else if (ar6 == 1) {
    in_dr14 = 5.879900592671609e+19;
    in_dr12 = 1.1709360855239885e+17;
  }
  else if (ar6 == 2) {
    in_dr14 = 1.9172811027428727e+24;
    in_dr12 = 1924145626640.0;
  }
  if (ar6 == 3) {
    *(undefined4 *)ar5 = 0;
    puVar3 = (undefined4 *)((int)ar5 + 4);
    *puVar3 = 0;
    *(undefined4 *)(ar5 + 1) = 0;
  }
  else {
    uVar1 = rand(ar4,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      iVar6 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar2 = libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7);
    if (cVar8 == '\0') {
      iVar7 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar7 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar7 + iVar2),in_fr1);
    }
    else {
      dVar5 = (double)(iVar7 + iVar2);
    }
    if (cVar9 == '\0') {
      *(int *)ar5 = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *ar5 = dVar5;
    }
    uVar1 = rand(uVar1,iVar6,ar6,ar7);
    uVar4 = SUB84(dVar5,0);
    if (cVar8 == '\0') {
      iVar6 = (int)(float)((ulonglong)in_dr12 >> 0x20);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar6 = libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7);
    if (cVar8 == '\0') {
      iVar2 = (int)(float)((ulonglong)in_dr14 >> 0x20);
    }
    else {
      iVar2 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar2 + iVar6),uVar4);
    }
    else {
      dVar5 = (double)(iVar2 + iVar6);
    }
    if (cVar9 == '\0') {
      *(int *)(ar5 + 1) = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)(ar4 + 0x34);
    }
    else {
      ar5[1] = dVar5;
      *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)(ar4 + 0x34);
    }
    puVar3 = (undefined4 *)(ar4 + 0x34);
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x34,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016ac4(ar4 + 0x1c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0f692c @ 8c0f692c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f698a) */
/* WARNING: Removing unreachable block (ram,0x8c0f697c) */
/* WARNING: Removing unreachable block (ram,0x8c0f6970) */
/* WARNING: Removing unreachable block (ram,0x8c0f6962) */
/* WARNING: Removing unreachable block (ram,0x8c0f695c) */
/* WARNING: Removing unreachable block (ram,0x8c0f694e) */
/* WARNING: Removing unreachable block (ram,0x8c0f6948) */
/* WARNING: Removing unreachable block (ram,0x8c0f693e) */
/* WARNING: Removing unreachable block (ram,0x8c0f694a) */
/* WARNING: Removing unreachable block (ram,0x8c0f6952) */
/* WARNING: Removing unreachable block (ram,0x8c0f695e) */
/* WARNING: Removing unreachable block (ram,0x8c0f6966) */
/* WARNING: Removing unreachable block (ram,0x8c0f6972) */
/* WARNING: Removing unreachable block (ram,0x8c0f697e) */
/* WARNING: Removing unreachable block (ram,0x8c0f6992) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f692c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x5c) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x58) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x54) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x48) = 0;
  }
  vec3_clear(ar4,ar5,ar6,ar7);
  FUN_8c02a1fc(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c08a9b8(ar4 + 0x1c,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 100) = 0;
  return 100;
}



/* FUN_8c0f69ec @ 8c0f69ec callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f69fc) */
/* WARNING: Unknown calling convention */

int FUN_8c0f69ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 in_fr1;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 in_fr4;
  char cVar6;
  char cVar7;
  undefined4 uStack_24;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  Vec3_assign(ar4,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = in_fr4;
    *(undefined4 *)(ar4 + 0x20) = in_fr4;
    uVar4 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(ar4 + 0x1c) = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = CONCAT44(uStack_24,in_fr4);
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uStack_24,in_fr4);
    uVar4 = CONCAT44(uStack_24,in_fr4);
    *(undefined8 *)(ar4 + 0x1c) = uVar4;
  }
  Vec3_length_sq(ar6,ar5,ar6_00,ar7);
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x30) = (int)((ulonglong)uVar4 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = uVar4;
  }
  uVar3 = (undefined4)uVar4;
  uVar1 = Vec3_length(ar6,ar5,ar6_00,ar7);
  iVar2 = ar4 + 0x34;
  Vec3_assign(iVar2,uVar1,ar6_00,ar7);
  *(undefined4 *)(ar4 + 0x2c) = 2;
  uVar1 = rand(iVar2,uVar1,ar6_00,ar7);
  iVar2 = libgcc_divide_helper_01031c(uVar1,0x28,ar6_00,ar7);
  iVar2 = iVar2 + -0x14;
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)iVar2,uVar3);
  }
  else {
    dVar5 = (double)iVar2;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x18) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x18) = dVar5;
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
/* WARNING: Removing unreachable block (ram,0x8c0f6ac4) */
/* WARNING: Removing unreachable block (ram,0x8c0f6ac6) */
/* WARNING: Removing unreachable block (ram,0x8c0f6dc0) */
/* WARNING: Removing unreachable block (ram,0x8c0f6efc) */
/* WARNING: Removing unreachable block (ram,0x8c0f7050) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f6ac4(ulonglong *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *piVar2;
  uint *a5;
  float *a6;
  float *a7;
  uint uVar3;
  float fVar4;
  ulonglong in_dr0;
  double dVar5;
  float fVar9;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined4 in_fr15;
  ulonglong in_xd0;
  ulonglong in_xd14;
  bool bVar10;
  undefined4 in_PR;
  char cVar11;
  char cVar12;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [4];
  float fStack_30;
  float afStack_2c [2];
  uint uStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar12 = '\0';
  cVar11 = '\0';
  piVar2 = ar5;
  uStack_18 = in_PR;
  FUN_8c102748(&uStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_34,piVar2,ar6,ar7);
  Vec3_ctor_zero(auStack_44,piVar2,ar6,ar7);
  a7 = &fStack_1c;
  a6 = &fStack_20;
  a5 = &uStack_24;
  piVar2 = ar5;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  dVar8 = (double)CONCAT44(0x3f800000,in_fr15);
  uVar3 = (uint)in_dr0;
  if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
    if (cVar12 == '\0') {
      dVar5 = (double)CONCAT44(*(uint *)((int)ar4 + 0x44),uVar3);
    }
    else {
      dVar5 = *(double *)((int)ar4 + 0x44);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + dVar8;
    }
    if (cVar12 == '\0') {
      *(uint *)((int)ar4 + 0x44) = (uint)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *(double *)((int)ar4 + 0x44) = dVar5;
    }
  }
  else {
    *(uint *)(ar4 + 5) = (uint)ar4[5] + 1;
    if ((int)(uint)ar4[5] < 0xb5) {
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = in_dr0 & 0xffffffff;
      }
    }
    else {
      ar4_00 = rand(piVar2,a5,a6,a7);
      iVar1 = libgcc_divide_helper_01031c(ar4_00,10,a6,a7);
      if ((iVar1 == 0) || (iVar1 = FUN_8c0f72ec(ar4,ar5,a6,a7), iVar1 != 0)) {
        if (cVar12 == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)uVar3;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3dcccccd,*(uint *)((int)ar4 + 0x44));
        }
        else {
          in_xd0 = *(ulonglong *)((int)ar4 + 0x44);
          dVar5 = 4.07935454911844e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x44) = fVar4;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = in_xd0;
        }
      }
    }
    if (*(uint *)((int)ar4 + 100) == 0) {
      a7 = afStack_2c;
      a6 = &fStack_30;
      (**(code **)(*ar5 + 0x13c))(ar5,auStack_34,a6,a7);
      Vec3_sub(ar4,auStack_34,a6,a7,auStack_54);
      Vec3_assign(auStack_44,auStack_54,a6,a7);
      Vec3_dtor(auStack_54,0xffffffff,a6,a7);
      FUN_8c02174c(0x8c2b59d0,0x28,a6,a7);
      *(uint *)((int)ar4 + 100) = 1;
    }
  }
  Vec3_scale((uint *)((int)ar4 + 0x34),ar4 + 6,a6,a7,auStack_64);
  FUN_8c023aa0(ar4,auStack_64,a6,a7);
  Vec3_dtor(auStack_64,0xffffffff,a6,a7);
  if (cVar12 == '\0') {
    dVar5 = (double)CONCAT44(*(uint *)((int)ar4 + 0x44),*(uint *)((int)ar4 + 4));
  }
  else {
    in_xd0 = *(ulonglong *)((int)ar4 + 4);
    dVar5 = *(double *)((int)ar4 + 0x44);
  }
  if (cVar11 == '\0') {
    fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (cVar12 == '\0') {
    *(float *)((int)ar4 + 4) = fVar4;
    uVar6 = CONCAT44(uStack_24,(uint)*ar4);
  }
  else {
    *(ulonglong *)((int)ar4 + 4) = in_xd0;
    in_xd0 = *ar4;
    uVar6 = CONCAT44(fStack_20,uStack_24);
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)*ar4;
    }
    else {
      in_xd0 = *ar4;
    }
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)ar4 = 0;
      }
      else {
        *ar4 = uVar6 & 0xffffffff;
      }
      fVar4 = (float)(int)(uint)ar4[9];
      if (cVar12 == '\0') {
        fVar9 = 3.0;
      }
      else {
        fVar4 = 3.0;
        fVar9 = 1.8;
      }
      if (cVar11 == '\0' && fVar4 < fVar9) {
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
        }
        else {
          in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x1c) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 4) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
        }
        else {
          ar4[4] = in_xd0;
          in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x24) = fVar4;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(ar4 + 9) = (uint)ar4[9] + 1;
        if (cVar12 == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(uint *)ar4 = uStack_24;
    }
    else {
      *ar4 = CONCAT44(fStack_20,uStack_24);
    }
    fVar4 = (float)(int)(uint)ar4[9];
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x1c) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 4) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(ar4 + 9) = (uint)ar4[9] + 1;
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  if (cVar12 == '\0') {
    uVar6 = CONCAT44(fStack_1c,(uint)ar4[1]);
  }
  else {
    in_xd0 = ar4[1];
    uVar6 = CONCAT44(uStack_18,fStack_1c);
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)ar4[1];
    }
    else {
      in_xd0 = ar4[1];
    }
    uVar7 = uVar6 & 0xffffffff;
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 1) = 0;
      }
      else {
        ar4[1] = uVar6 & 0xffffffff;
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
      }
      else {
        uVar7 = 0x3fe6666640400000;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
        }
        else {
          in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x24) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
        }
        else {
          *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
          in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)((int)ar4 + 0x1c) = fVar4;
          dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 4) = fVar4;
        }
        else {
          ar4[4] = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(ar4 + 10) = (uint)ar4[10] + 1;
        uVar7 = (ulonglong)(uint)fVar4;
        if (cVar12 == '\0') {
          *(uint *)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)((int)ar4 + 0x44) = uVar7;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)(ar4 + 1) = fStack_1c;
    }
    else {
      ar4[1] = CONCAT44(uStack_18,fStack_1c);
    }
    if (cVar12 == '\0') {
      uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
    }
    else {
      uVar7 = 0x3fe6666640400000;
    }
    if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x24) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
      }
      else {
        *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x1c) = fVar4;
        dVar5 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 4) = fVar4;
      }
      else {
        ar4[4] = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(ar4 + 10) = (uint)ar4[10] + 1;
      uVar7 = (ulonglong)(uint)fVar4;
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = uVar7;
      }
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4,a6,a7);
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),(int)(uVar7 >> 0x20));
    uVar7 = in_xd14;
    fVar4 = *(float *)((int)ar4 + 4);
    fVar9 = fStack_20;
  }
  else {
    in_xd0 = *(ulonglong *)((int)ar4 + 4);
    fVar4 = fStack_20;
    fVar9 = fStack_1c;
  }
  if (cVar11 == '\0' && fVar4 < fVar9) {
    if (cVar12 == '\0') {
      dVar5 = (double)CONCAT44(*(uint *)((int)ar4 + 4),fVar4);
    }
    else {
      dVar5 = *(double *)((int)ar4 + 4);
    }
    if (cVar11 == '\0') {
      bVar10 = SUB84(dVar8,0) < (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      bVar10 = dVar8 < dVar5;
    }
    if (!bVar10) {
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 4) = SUB84(dVar8,0);
      }
      else {
        *(ulonglong *)((int)ar4 + 4) = uVar7;
      }
      *(uint *)((int)ar4 + 0x2c) = *(uint *)((int)ar4 + 0x2c) + 1;
      if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
        fVar4 = (float)(int)*(uint *)((int)ar4 + 0x4c);
        if (cVar12 == '\0') {
          fVar9 = 3.0;
        }
        else {
          fVar4 = 3.0;
          fVar9 = 1.8;
        }
        if (cVar11 == '\0' && fVar4 < fVar9) {
          if (cVar12 == '\0') {
            dVar8 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
          }
          else {
            in_xd0 = ar4[4];
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar8 / dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 4) = fVar4;
            dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
          }
          else {
            ar4[4] = in_xd0;
            in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)((int)ar4 + 0x1c) = fVar4;
            dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
          }
          else {
            *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
            in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)((int)ar4 + 0x24) = fVar4;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
          }
          if (cVar12 == '\0') {
            *(uint *)(ar4 + 6) = 0;
          }
          else {
            ar4[6] = (ulonglong)(uint)fVar4;
          }
          *(uint *)((int)ar4 + 0x4c) = *(uint *)((int)ar4 + 0x4c) + 1;
          if (cVar12 == '\0') {
            *(uint *)((int)ar4 + 0x44) = 0;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)((int)ar4 + 4) = fStack_20;
    }
    else {
      *(ulonglong *)((int)ar4 + 4) = CONCAT44(fStack_1c,fStack_20);
    }
    fVar4 = (float)(int)*(uint *)((int)ar4 + 0x4c);
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x3fe66666,(uint)ar4[4]);
      }
      else {
        in_xd0 = ar4[4];
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 4) = fVar4;
        dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x1c));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x1c);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x1c) = fVar4;
        dVar8 = (double)CONCAT44(0x3fe66666,*(uint *)((int)ar4 + 0x24));
      }
      else {
        *(ulonglong *)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)((int)ar4 + 0x4c) = *(uint *)((int)ar4 + 0x4c) + 1;
      if (cVar12 == '\0') {
        *(uint *)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  Vec3_dtor(auStack_44,0xffffffff,a6,a7);
  Vec3_dtor(auStack_34,0xffffffff,a6,a7);
  free_if_nonnull_wrap_102790(&uStack_24,0xffffffff,a6,a7);
  return 0;
}



/* FUN_8c0f7118 @ 8c0f7118 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7118(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 ain0;
  
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = ar6;
  ain0 = ar5;
  FUN_8c233dac(ar4 + 0x54,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,uVar1,ar7,ain0);
  FUN_8c25b5d0(0,ar5,uVar1,ar7,ain0);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00,ain0);
  FUN_8c256fec(0,ar5_00,ar6_00,ar7_00,ain0);
  FUN_8c01538c(ar6,ar5_00,ar6_00,ar7_00);
  FUN_8c015adc(ain0,ar5_00,ar6_00,ar7_00);
  FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  uVar1 = FUN_8c233dac(&DAT_8c140174,ar5_00,ar6_00,ar7_00);
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

/* WARNING: Removing unreachable block (ram,0x8c0f72d0) */
/* WARNING: Removing unreachable block (ram,0x8c0f72c8) */
/* WARNING: Removing unreachable block (ram,0x8c0f72bc) */
/* WARNING: Removing unreachable block (ram,0x8c0f72ae) */
/* WARNING: Removing unreachable block (ram,0x8c0f72a8) */
/* WARNING: Removing unreachable block (ram,0x8c0f729a) */
/* WARNING: Removing unreachable block (ram,0x8c0f7294) */
/* WARNING: Removing unreachable block (ram,0x8c0f7286) */
/* WARNING: Removing unreachable block (ram,0x8c0f7280) */
/* WARNING: Removing unreachable block (ram,0x8c0f7284) */
/* WARNING: Removing unreachable block (ram,0x8c0f728a) */
/* WARNING: Removing unreachable block (ram,0x8c0f7296) */
/* WARNING: Removing unreachable block (ram,0x8c0f729e) */
/* WARNING: Removing unreachable block (ram,0x8c0f72aa) */
/* WARNING: Removing unreachable block (ram,0x8c0f72b2) */
/* WARNING: Removing unreachable block (ram,0x8c0f72be) */
/* WARNING: Removing unreachable block (ram,0x8c0f72ca) */
/* WARNING: Removing unreachable block (ram,0x8c0f72d4) */
/* WARNING: Unknown calling convention */

float * FUN_8c0f7278(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(ar4 + 0x60) - 0.00018518518;
  *(float *)(ar4 + 0x60) = fVar2;
  *(float *)(ar4 + 0x5c) = fVar2;
  *(float *)(ar4 + 0x58) = fVar2;
  *(float *)(ar4 + 0x54) = fVar2;
  pfVar1 = (float *)(ar4 + 0x60);
  if (*pfVar1 <= 0.0) {
    pfVar1 = (float *)(*(int *)(ar4 + 0x2c) + 1);
    *(float **)(ar4 + 0x2c) = pfVar1;
  }
  return pfVar1;
}



/* FUN_8c0f72ec @ 8c0f72ec callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0f72ec) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f72ec(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double in_dr0;
  double in_dr14;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_2c [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (**(code **)(*ar5 + 0x1a0))(ar5,ar5,ar6,ar7);
  iVar3 = 0;
  do {
    if (7 < iVar3) {
      return 0;
    }
    iVar2 = FUN_8c0f6ab0(iVar1 + iVar3 * 0x68,ar5,ar6,ar7);
    if ((iVar2 == 1) && (iVar1 + iVar3 * 0x68 != ar4)) {
      if (cVar6 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(iVar1 + iVar3 * 0x68 + 0x1c));
        in_dr0 = (double)CONCAT44(0x3fc00000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.956826979325289e-251;
      }
      if (cVar5 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
      iVar2 = iVar1 + iVar3 * 0x68;
      Vec3_sub(ar4,iVar2,ar6,ar7,auStack_2c);
      Vec3_length_sq(auStack_2c,iVar2,ar6,ar7);
      if (cVar5 == '\0') {
        bVar4 = SUB84(in_dr14,0) < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        bVar4 = in_dr14 < in_dr0;
      }
      ar5 = (int *)0xffffffff;
      Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
      if (!bVar4) {
        if (cVar6 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),
                                    *(undefined4 *)(iVar1 + iVar3 * 0x68 + 4));
        }
        else {
          in_dr0 = *(double *)(ar4 + 4);
        }
        if (cVar5 != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* FUN_8c0f7408 @ 8c0f7408 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7408(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c0f742c)(s0,ar4 + DAT_8c0f7428,ar6,ar7);
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
  uVar3 = (*(code *)PTR_FUN_8c0f7854)
                    (DAT_8c0f7850,DAT_8c0f780c,DAT_8c0f7814._4_4_,DAT_8c0f7820,DAT_8c0f7828,
                     DAT_8c0f7830,DAT_8c0f7838,DAT_8c0f7840,DAT_8c0f7848);
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
  uVar1 = (*(code *)PTR_FUN_8c0f7854)
                    (DAT_8c0f78a8,DAT_8c0f7868,DAT_8c0f7870,DAT_8c0f7878,DAT_8c0f7880,DAT_8c0f7888,
                     DAT_8c0f7890,DAT_8c0f7898,DAT_8c0f78a0);
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
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (*(code *)PTR_FUN_8c0f7988)(ar4 + 2,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f7994)
            (ar4 + 0x13,PTR_FUN_8c0f7990,PTR_free_if_nonnull_wrap_0f3ffc_8c0f798c,8,3);
  ar7_00 = 8;
  ar5_00 = PTR_FUN_8c0f7990;
  ar6_00 = PTR_free_if_nonnull_wrap_0f3ffc_8c0f798c;
  (*(code *)PTR_FUN_8c0f7994)
            (ar4 + 0x1b,PTR_FUN_8c0f7990,PTR_free_if_nonnull_wrap_0f3ffc_8c0f798c,8,3);
  (*(code *)PTR_Vec3_ctor_zero_8c0f799c)((int)ar4 + DAT_8c0f7998,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_Vec3_ctor_zero_8c0f799c)((int)ar4 + DAT_8c0f79a0,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_Vec3_ctor_zero_8c0f799c)((int)ar4 + DAT_8c0f79a4,ar5_00,ar6_00,ar7_00);
  ar4[1] = 0;
  *ar4 = 0;
  ar4[0x19] = 0;
  ar4[0x1a] = 0;
  (*(code *)PTR_vec3_clear_8c0f79a8)((int)ar4 + DAT_8c0f7998,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(DAT_8c0f79ac + (int)ar4) = 0xffffffff;
  (*(code *)PTR_vec3_clear_8c0f79a8)((int)ar4 + DAT_8c0f79a0,ar5_00,ar6_00,ar7_00);
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
  undefined4 ar7_00;
  undefined4 in_stack_ffffffc0;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = DAT_8c14029c;
  uStack_14 = DAT_8c1402a0;
  uStack_10 = DAT_8c1402a4;
  uStack_c = DAT_8c1402a8;
  uStack_28 = DAT_8c1402ac;
  uStack_24 = DAT_8c1402b0;
  uStack_20 = DAT_8c1402b4;
  uStack_1c = DAT_8c1402b8;
  PTR_DAT_8c1f5a28 = (undefined *)((uint)PTR_DAT_8c1f5a28 | 0xa0000000);
  iVar1 = FUN_8c1f7ea8(&uStack_28,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar3 = 2;
    uVar2 = 0;
    FUN_8c102bd0(0x31,0,2,ar7);
  }
  else {
    uVar3 = 1;
    uVar2 = 0;
    FUN_8c102bd0(0x34,0,1,ar7);
  }
  FUN_8c259a1c(0,uVar2,uVar3,ar7);
  _DAT_8c43b578 = malloc_thunk(0x2b000,uVar2,uVar3,ar7);
  uVar2 = 0x2b000;
  FUN_8c25b334(_DAT_8c43b578,0x2b000,uVar3,ar7,in_stack_ffffffc0);
  _DAT_8c43b57c = malloc_thunk(0x1db000,uVar2,uVar3,ar7);
  FUN_8c236250(_DAT_8c43b57c,0x1db000,uVar3,ar7);
  ar7_00 = 0;
  FUN_8c258b26(0xfffaf6f0,0,0x4b320,0);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  FUN_8c233f98(0,0,0,ar7_00);
  FUN_8c2570ec(uVar2,uVar3,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b570 = malloc_thunk(0x1000,uVar3,uVar4,ar7_00);
  uVar4 = 0;
  uVar2 = 0x40;
  FUN_8c23633c(_DAT_8c43b570,0x40,0,ar7_00);
  FUN_8c255bea(0x8c42d408,uVar2,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b574 = malloc_thunk(0xabe00,uVar2,uVar4,ar7_00);
  FUN_8c233d6c(_DAT_8c43b574,11000,uVar4,ar7_00);
  uVar3 = 0x15e;
  uVar2 = 0x8c43b584;
  FUN_8c25b34a(0x8c43b584,0x15e,uVar4,ar7_00);
  FUN_8c213ee4(uVar2,uVar3,uVar4,ar7_00);
  uVar4 = 0xff000000;
  uVar2 = 0xff000000;
  FUN_8c259046(0xff000000,0xff000000,0xff000000,ar7_00);
  FUN_8c233d9c(0x820,uVar2,uVar4,ar7_00,in_stack_ffffffc0);
  uVar3 = 0x800;
  FUN_8c233da2(0xffffffff,0x800,uVar4,ar7_00,in_stack_ffffffc0);
  FUN_8c233dac(&uStack_28,uVar3,uVar4,ar7_00);
  FUN_8c259358(3,uVar3,uVar4,ar7_00);
  uVar2 = 1;
  FUN_8c2593ac(1,uVar3,uVar4,ar7_00);
  thunk_FUN_8c20a13a(uVar2,uVar3,uVar4,ar7_00);
  FUN_8c259556(2,uVar3,uVar4,ar7_00);
  FUN_8c259274(1,uVar3,uVar4,ar7_00);
  FUN_8c014370(5,uVar3,uVar4,ar7_00,in_stack_ffffffc0);
  _DAT_8c43b580 = malloc_thunk(0x4000,uVar3,uVar4,ar7_00);
  FUN_8c1f7ecc(_DAT_8c43b580,uVar3,uVar4,ar7_00);
  uVar2 = s_Tmcpack_idx_0c0448(0x8c286ebc,uVar3,uVar4,ar7_00);
  return uVar2;
}



/* game_shutdown_a @ 8c0f7df8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 game_shutdown_a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = DAT_8c0f7e74;
  (*(code *)PTR_FUN_8c0f7e78)(DAT_8c0f7e74,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f7e7c)(ar4_00,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0f7e80)(ar4_00,ar5,ar6,ar7);
  if (*DAT_8c0f7e84 != 0) {
    ar4_00 = *DAT_8c0f7e84;
    (*(code *)PTR_FUN_8c0f7e88)(ar4_00,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e8c != 0) {
    ar4_00 = *DAT_8c0f7e8c;
    (*(code *)PTR_FUN_8c0f7e88)(ar4_00,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e90 != 0) {
    ar4_00 = *DAT_8c0f7e90;
    (*(code *)PTR_FUN_8c0f7e88)(ar4_00,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e94 != 0) {
    ar4_00 = *DAT_8c0f7e94;
    (*(code *)PTR_FUN_8c0f7e88)(ar4_00,ar5,ar6,ar7);
  }
  if (*DAT_8c0f7e98 != 0) {
    ar4_00 = *DAT_8c0f7e98;
    (*(code *)PTR_FUN_8c0f7e88)(ar4_00,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0f7e9c)(ar4_00,ar5,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0f7ec0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265c8,ar5,ar6,ar7);
  uVar3 = 0x8c43b540;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43b540,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43b54c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43b54c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265e8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43b558;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43b558,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265f8,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c43b564,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126608 = CONCAT44(_UNK_8c12660c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c12660c) is written */
  }
  else {
    _DAT_8c126608 = 0xffffffff00800000;
  }
  return 0x8c125864;
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0fa80c(ar4 + 0x1054,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
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
  undefined4 ar5_00;
  
  *(undefined4 *)(DAT_8c0f80f4 + ar4) = ar5;
  ar5_00 = 0;
  uVar1 = (*(code *)PTR_FUN_8c0f80f8)(*(undefined4 *)(DAT_8c0f80f4 + ar4),0,ar6,ar7);
  *(undefined4 *)(DAT_8c0f80fc + ar4) = uVar1;
  uVar1 = (*(code *)PTR_get_field_c8_0bced0_8c0f8100)
                    (*(undefined4 *)(DAT_8c0f80f4 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(DAT_8c0f8104 + ar4) = uVar1;
  uVar1 = (*(code *)PTR_get_field_c4_0f8128_8c0f8108)
                    (*(undefined4 *)(DAT_8c0f80f4 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(DAT_8c0f810c + ar4) = uVar1;
  if (*(int *)(DAT_8c0f810c + ar4) < DAT_8c0f8110) {
    *(int *)(DAT_8c0f810c + ar4) = *(int *)(DAT_8c0f810c + ar4) + 1;
  }
  else {
    *(undefined4 *)(DAT_8c0f810c + ar4) = 0;
  }
  uVar1 = (*(code *)PTR_FUN_8c0f8114)(*(undefined4 *)(DAT_8c0f80f4 + ar4),ar5_00,ar6,ar7);
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
  undefined4 ar6_00;
  
  if (*(int *)(DAT_8c0f8308 + ar4) != 0) {
    if (*(int *)(DAT_8c0f8308 + ar4) != 1) {
      return 0;
    }
    uVar1 = ar5;
    ar6_00 = ar6;
    (*(code *)PTR_FUN_8c0f830c)(ar4,ar5,ar6,ar7);
    if (*(int *)(DAT_8c0f8310 + ar4) == 1) {
      (*(code *)PTR_FUN_8c0f8314)(ar4,uVar1,ar6_00,ar7);
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

/* WARNING: Unknown calling convention */

undefined4 s_HIGYOLINE0_0f8370(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *ar5_00;
  int ar6_00;
  undefined4 in_stack_fffffea4;
  undefined1 auStack_74 [32];
  undefined1 auStack_54 [32];
  undefined1 auStack_34 [36];
  
  ar6_00 = ar6;
  FUN_8c0fda80(ar4 + 0x1054,0x1054,ar6,ar7);
  *(int *)(ar4 + 0x89130) = ar5;
  *(int *)(ar4 + 0x104c) = ar4;
  *(int *)(ar4 + 0x1050) = ar6;
  *(undefined4 *)(ar4 + 0x89134) = 1;
  strcpy(auStack_34,&DAT_8c1408e4,ar6_00,ar7,in_stack_fffffea4);
  strcpy(auStack_54,&DAT_8c1408e9,ar6_00,ar7,in_stack_fffffea4);
  strcpy(auStack_74,&DAT_8c1408e9,ar6_00,ar7,in_stack_fffffea4);
  if (ar5 == 1) {
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x1044) = 0;
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x1044) = 1;
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7);
        if (iVar1 == 0) {
          *(undefined4 *)(ar4 + 0x1044) = 2;
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
          if ((((iVar1 == 0) ||
               (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7), iVar1 == 0)) ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7), iVar1 == 0)) ||
             ((iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7), iVar1 == 0 ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7), iVar1 == 0)))) {
            *(undefined4 *)(ar4 + 0x1044) = 3;
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
            if (((iVar1 == 0) ||
                (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7), iVar1 == 0))
               || (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7), iVar1 == 0
                  )) {
              *(undefined4 *)(ar4 + 0x1044) = 4;
            }
            else {
              iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
              if ((iVar1 == 0) ||
                 (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7), iVar1 == 0)
                 ) {
                *(undefined4 *)(ar4 + 0x1044) = 5;
              }
              else {
                iVar1 = s_FROGMANLINE2_0f970c(ar6,s_JUNGLE_8c1409e7,ar6_00,ar7);
                if (iVar1 != 0) {
                  return 0;
                }
                *(undefined4 *)(ar4 + 0x1044) = 6;
              }
            }
          }
        }
      }
    }
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if (((iVar1 == 0) ||
        (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7), iVar1 == 0)) ||
       (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7), iVar1 == 0)) {
      *(undefined4 *)(ar4 + 0x1048) = 0;
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x1048) = 1;
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7);
        if (iVar1 == 0) {
          *(undefined4 *)(ar4 + 0x1048) = 2;
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 0x1048) = 3;
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7);
            if (iVar1 == 0) {
              *(undefined4 *)(ar4 + 0x1048) = 4;
            }
            else {
              iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7);
              if (iVar1 == 0) {
                iVar1 = FUN_8c0fa658(ar4,0,ar6_00,ar7);
                if (iVar1 == 5) {
                  *(undefined4 *)(ar4 + 0x1048) = 5;
                  *(undefined4 *)(*(int *)(ar4 + 0x104c) + 8) = *(undefined4 *)(ar4 + 0x102c);
                }
                else if ((iVar1 == 6) &&
                        (*(undefined4 *)(ar4 + 0x1048) = 5,
                        *(int *)(*(int *)(ar4 + 0x104c) + 8) < *(int *)(ar4 + 0x102c))) {
                  *(undefined4 *)(ar4 + 0x1048) = 6;
                }
              }
              else {
                iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
                if (iVar1 == 0) {
                  *(undefined4 *)(ar4 + 0x1048) = 7;
                }
                else {
                  iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7);
                  if (iVar1 == 0) {
                    *(undefined4 *)(ar4 + 0x1048) = 8;
                  }
                  else {
                    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7);
                    if (iVar1 == 0) {
                      *(undefined4 *)(ar4 + 0x1048) = 10;
                    }
                    else {
                      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
                      if (iVar1 == 0) {
                        *(undefined4 *)(ar4 + 0x1048) = 0xc;
                      }
                      else {
                        pcVar3 = s_FROGMANLINE4_8c14098e;
                        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7);
                        if (iVar1 == 0) {
                          iVar1 = FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7);
                          if ((iVar1 < 0x13) && (0xc < iVar1)) {
                    /* WARNING: Switch is manually overridden */
                            switch(iVar1) {
                            default:
                              *(undefined4 *)(ar4 + 0x1048) = 0xe;
                              *(undefined4 *)(*(int *)(ar4 + 0x104c) + 8) =
                                   *(undefined4 *)(ar4 + 0x102c);
                              break;
                            case 0xf:
                            case 0x10:
                              *(undefined4 *)(ar4 + 0x1048) = 0xe;
                              if (*(int *)(*(int *)(ar4 + 0x104c) + 8) + 1 < *(int *)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(ar4 + 0x1048) = 0x10;
                              }
                              break;
                            case 0x11:
                              *(undefined4 *)(ar4 + 0x1048) = 0x10;
                              if (*(int *)(*(int *)(ar4 + 0x104c) + 8) + 2 < *(int *)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(ar4 + 0x1048) = 0x12;
                              }
                            }
                          }
                        }
                        else {
                          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_JUNGLE_8c1409e7,ar6_00,ar7);
                          if (iVar1 != 0) {
                            return 0;
                          }
                          *(undefined4 *)(ar4 + 0x1048) = 0x12;
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
    iVar1 = *(int *)(ar4 + 0x1044);
    if ((iVar1 < 7) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
      switch(iVar1) {
      case 0:
        strcpy(auStack_34,s_B_LEARNING0_8c1409ee,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c1409fa,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 1:
        strcpy(auStack_34,s_B_LEARNING1_8c1409fe,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a0a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 2:
        strcpy(auStack_34,s_B_LEARNING2_8c140a0e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a1a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 3:
        strcpy(auStack_34,s_A_LEARNING0_8c140a1e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a2a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 4:
        strcpy(auStack_34,s_A_LEARNING1_8c140a2e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a3a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 5:
        strcpy(auStack_34,s_A_LEARNING2_8c140a3e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a4a,ar6_00,ar7,in_stack_fffffea4);
        break;
      case 6:
        strcpy(auStack_34,s_A_LEARNINGJ_8c140a4e,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,&DAT_8c140a5a,ar6_00,ar7,in_stack_fffffea4);
      }
    }
    if (*(int *)(*(int *)(ar4 + 0x1050) + 0x94) == 1) {
      FUN_8c01437c(auStack_54,&DAT_8c140a5e,ar6_00,ar7);
    }
    else if (*(int *)(*(int *)(ar4 + 0x1050) + 0x68) < 2) {
      FUN_8c01437c(auStack_54,&DAT_8c140a63,ar6_00,ar7);
    }
    else {
      iVar1 = *(int *)(*(int *)(ar4 + 0x1050) + 0x7c);
      if ((9 < iVar1) || (iVar1 < 0)) {
switchD_8c0f933e_caseD_6:
        strcpy(auStack_54,&DAT_8c1408e9,ar6_00,ar7,in_stack_fffffea4);
        return 0;
      }
                    /* WARNING: Switch is manually overridden */
      switch(iVar1) {
      case 0:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,&DAT_8c140a68,ar6_00,ar7);
        }
        break;
      case 1:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,&DAT_8c140a73,ar6_00,ar7);
        }
        break;
      case 2:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,s_OXYGEN_8c140a78,ar6_00,ar7);
        }
        break;
      case 3:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,s_HUMIDITY_8c140a7f,ar6_00,ar7);
        }
        break;
      case 4:
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x60) < 1) {
          FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        }
        else {
          FUN_8c01437c(auStack_54,s_HUNGRY_8c140a88,ar6_00,ar7);
        }
        break;
      case 5:
        FUN_8c01437c(auStack_54,&DAT_8c140a5e,ar6_00,ar7);
        break;
      case 6:
        goto switchD_8c0f933e_caseD_6;
      case 7:
        pcVar3 = s_NORMAL_8c140a6c;
        FUN_8c01437c(auStack_54,s_NORMAL_8c140a6c,ar6_00,ar7);
        iVar1 = FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7);
        if ((1 < iVar1) && (*(undefined4 *)(ar4 + 0x1040) = 0, *(int *)(ar4 + 0xc) == 0)) {
          strcpy(auStack_34,s_CALENDAR_8c140a8f,ar6_00,ar7,in_stack_fffffea4);
          strcpy(auStack_54,&DAT_8c140a98,ar6_00,ar7,in_stack_fffffea4);
        }
        break;
      case 8:
        FUN_8c01437c(auStack_54,s_SLEEPY_8c140a9d,ar6_00,ar7);
        break;
      case 9:
        FUN_8c01437c(auStack_54,s_SLEEP_8c140aa4,ar6_00,ar7);
      }
    }
  }
  else if (ar5 == 4) {
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if ((iVar1 == 0) ||
       (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7), iVar1 == 0)) {
      strcpy(auStack_34,s_BIO_0_8c140900,ar6_00,ar7,in_stack_fffffea4);
      strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7);
      if (iVar1 == 0) {
        strcpy(auStack_34,s_BIO_1_8c140911,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
        if ((((iVar1 == 0) ||
             (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7), iVar1 == 0)) ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7), iVar1 == 0)) ||
           ((iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7), iVar1 == 0 ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7), iVar1 == 0)))) {
          strcpy(auStack_34,s_BIO_2_8c14094e,ar6_00,ar7,in_stack_fffffea4);
          strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
          if (((iVar1 == 0) ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7), iVar1 == 0))
             || (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7), iVar1 == 0))
          {
            strcpy(auStack_34,s_BIO_3_8c14097b,ar6_00,ar7,in_stack_fffffea4);
            strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
            if ((iVar1 == 0) ||
               (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7), iVar1 == 0))
            {
              strcpy(auStack_34,s_BIO_4_8c14099b,ar6_00,ar7,in_stack_fffffea4);
              strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
            }
          }
        }
      }
    }
  }
  else if (ar5 == 5) {
    iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE0_8c1408ea,ar6_00,ar7);
    if ((iVar1 == 0) ||
       (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE1_8c1408f5,ar6_00,ar7), iVar1 == 0)) {
      strcpy(auStack_34,s_BIO_0_EVENT_8c1409a1,ar6_00,ar7,in_stack_fffffea4);
      strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
    }
    else {
      iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE2_8c140906,ar6_00,ar7);
      if (iVar1 == 0) {
        strcpy(auStack_34,s_BIO_1_EVENT_8c1409ad,ar6_00,ar7,in_stack_fffffea4);
        strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
      }
      else {
        iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE3_8c140917,ar6_00,ar7);
        if ((((iVar1 == 0) ||
             (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE4_8c140922,ar6_00,ar7), iVar1 == 0)) ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE5_8c14092d,ar6_00,ar7), iVar1 == 0)) ||
           ((iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE6_8c140938,ar6_00,ar7), iVar1 == 0 ||
            (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_HIGYOLINE7_8c140943,ar6_00,ar7), iVar1 == 0)))) {
          strcpy(auStack_34,s_BIO_2_EVENT_8c1409b9,ar6_00,ar7,in_stack_fffffea4);
          strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
        }
        else {
          iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE0_8c140954,ar6_00,ar7);
          if (((iVar1 == 0) ||
              (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE1_8c140961,ar6_00,ar7), iVar1 == 0))
             || (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE2_8c14096e,ar6_00,ar7), iVar1 == 0))
          {
            strcpy(auStack_34,s_BIO_3_EVENT_8c1409c5,ar6_00,ar7,in_stack_fffffea4);
            strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
          }
          else {
            iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE3_8c140981,ar6_00,ar7);
            if ((iVar1 == 0) ||
               (iVar1 = s_FROGMANLINE2_0f970c(ar6,s_FROGMANLINE4_8c14098e,ar6_00,ar7), iVar1 == 0))
            {
              strcpy(auStack_34,s_BIO_4_EVENT_8c1409d1,ar6_00,ar7,in_stack_fffffea4);
              strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
            }
          }
        }
      }
    }
  }
  else if (ar5 == 6) {
    strcpy(auStack_34,s_NARRATION_8c1409dd,ar6_00,ar7,in_stack_fffffea4);
    strcpy(auStack_54,ar6 + 0x20,ar6_00,ar7,in_stack_fffffea4);
    strcpy(auStack_74,ar6 + 0x40,ar6_00,ar7,in_stack_fffffea4);
  }
  strcpy(*(undefined4 *)(ar4 + 0x1050),auStack_34,ar6_00,ar7,in_stack_fffffea4);
  strcpy(*(int *)(ar4 + 0x1050) + 0x20,auStack_54,ar6_00,ar7,in_stack_fffffea4);
  ar5_00 = auStack_74;
  strcpy(*(int *)(ar4 + 0x1050) + 0x40,ar5_00,ar6_00,ar7,in_stack_fffffea4);
  uVar2 = FUN_8c0f824c(ar4,ar5_00,ar6_00,ar7);
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

undefined4 s_REQUEST_HOT_0f9780(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *pcVar2;
  code *ar5_00;
  char *pcVar3;
  uint uVar4;
  int ar4_00;
  undefined4 uVar5;
  bool bVar6;
  undefined4 in_stack_ffffff8c;
  uint uStack_2c;
  ushort auStack_28 [8];
  
  if (0 < *(int *)(ar4 + 0x1014)) {
    return 1;
  }
  uVar5 = *(undefined4 *)(ar4 + 0x1050);
  ar4_00 = *(int *)(ar4 + 0x1050) + 0x20;
  ar5_00 = (code *)&DAT_8c1408e9;
  strcpy(*(int *)(ar4 + 0x1050) + 0x40,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
  uVar4 = 0;
  iVar1 = *(int *)(ar4 + 0x89130);
  if (iVar1 == 0) goto LAB_8c0fa1a8;
  if ((iVar1 != 1) && (iVar1 != 2)) {
    if (iVar1 == 3) {
      pcVar3 = (char *)0x1050;
      bVar6 = *(int *)(*(int *)(ar4 + 0x1050) + 0x70) == 0x11;
      if (bVar6) {
        pcVar3 = s_ESCAPE_8c140bb2;
        strcpy(ar4_00,s_ESCAPE_8c140bb2,ar6,ar7,in_stack_ffffff8c);
        *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      }
      uVar4 = (uint)bVar6;
      pcVar2 = (code *)FUN_8c0fa658(ar4,pcVar3,ar6,ar7);
      ar5_00 = (code *)pcVar3;
      if ((((int)pcVar2 < 0x13) &&
          (ar5_00 = (code *)0x1, *(int *)(*(int *)(ar4 + 0x1050) + 0x78) != 1)) &&
         (ar5_00 = *(code **)(ar4 + 0x1048), (int)pcVar2 <= (int)*(code **)(ar4 + 0x1048))) {
        ar6 = (code *)&DAT_8c140ba6;
        s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140ba6,ar7);
        uVar4 = 1;
        ar5_00 = pcVar2;
      }
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(*(int *)(ar4 + 0x1050) + 0x70) == 0xb) {
    *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
    if (*(int *)(*(int *)(ar4 + 0x1050) + 0x7c) != 7) {
      pcVar2 = *(code **)(*(int *)(ar4 + 0x1050) + 0x7c);
      ar5_00 = pcVar2;
      if (((int)pcVar2 < 10) && (-1 < (int)pcVar2)) {
        ar5_00 = (code *)(&switchD_8c0f9836::switchdataD_8c0f9840)[(int)pcVar2];
                    /* WARNING: Switch is manually overridden */
        switch(pcVar2) {
        case (code *)0x0:
          pcVar3 = s_REQUEST_HOT_8c140aaa;
          strcpy(ar4_00,s_REQUEST_HOT_8c140aaa,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case (code *)0x1:
          pcVar3 = s_REQUEST_COLD_8c140ab6;
          strcpy(ar4_00,s_REQUEST_COLD_8c140ab6,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case (code *)0x2:
          pcVar3 = s_REQUEST_OXYGEN_8c140ac3;
          strcpy(ar4_00,s_REQUEST_OXYGEN_8c140ac3,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case (code *)0x3:
          pcVar3 = s_REQUEST_HUMIDITY_8c140ad2;
          strcpy(ar4_00,s_REQUEST_HUMIDITY_8c140ad2,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case (code *)0x4:
          pcVar3 = s_REQUEST_HUNGRY_8c140ae3;
          strcpy(ar4_00,s_REQUEST_HUNGRY_8c140ae3,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case (code *)0x5:
          pcVar3 = s_STATUS_SICK_8c140af2;
          strcpy(ar4_00,s_STATUS_SICK_8c140af2,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case (code *)0x8:
          pcVar3 = s_REQUEST_SLEEP_8c140afe;
          strcpy(ar4_00,s_REQUEST_SLEEP_8c140afe,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case (code *)0x9:
          pcVar3 = s_STATUS_SNORE_8c140b0c;
          ar6 = strcpy;
          strcpy(ar4_00,s_STATUS_SNORE_8c140b0c,strcpy,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
        }
      }
      iVar1 = *(int *)(ar4 + 0x1044);
      if ((iVar1 < 7) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar1) {
        case 0:
          pcVar3 = s_BIO_0_8c140900;
          strcpy(uVar5,s_BIO_0_8c140900,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 1:
          pcVar3 = s_BIO_0_8c140900;
          strcpy(uVar5,s_BIO_0_8c140900,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 2:
          pcVar3 = s_BIO_1_8c140911;
          strcpy(uVar5,s_BIO_1_8c140911,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 3:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 4:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 5:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 6:
          pcVar3 = s_BIO_2_8c14094e;
          strcpy(uVar5,s_BIO_2_8c14094e,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
        }
      }
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (((*(int *)(*(int *)(ar4 + 0x1050) + 0x7c) != 7) &&
      (0 < *(int *)(*(int *)(ar4 + 0x1050) + 0x60))) ||
     (*(int *)(*(int *)(ar4 + 0x1050) + 0x68) < 2)) goto LAB_8c0fa1a8;
  iVar1 = FUN_8c0fa658(ar4,ar5_00,ar6,ar7);
  if ((*(int *)(ar4 + 0xc) == 0) && (1 < iVar1)) {
    iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR_8c140a8f,ar6,ar7);
    if (iVar1 == 0) {
      ar5_00 = (code *)&DAT_8c140a98;
      iVar1 = s_FROGMANLINE2_0f970c(ar4_00,&DAT_8c140a98,ar6,ar7);
      if (iVar1 == 0) {
        if ((*(int *)(*(int *)(ar4 + 0x1050) + 0x74) == 1) || (*(int *)(ar4 + 0x1034) == 1)) {
          pcVar3 = s_GREETING_8c140b19;
          strcpy(ar4_00,s_GREETING_8c140b19,ar6,ar7,in_stack_ffffff8c);
          uVar4 = 1;
          ar5_00 = (code *)pcVar3;
        }
        else {
          *(undefined4 *)(ar4 + 0xc) = 1;
          *(undefined4 *)(ar4 + 0x1018) = 1;
        }
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR_8c140a8f,ar6,ar7);
    if (iVar1 == 0) {
      pcVar3 = s_GREETING_8c140b19;
      iVar1 = s_FROGMANLINE2_0f970c(ar4_00,s_GREETING_8c140b19,ar6,ar7);
      if (iVar1 == 0) {
        FUN_8c1f8176(auStack_28,pcVar3,ar6,ar7);
        if ((auStack_28[0] < 0x7d5) && (0x7ce < auStack_28[0])) {
                    /* WARNING: Switch is manually overridden */
          switch(auStack_28[0]) {
          case 1999:
            pcVar3 = s_CALENDAR1999_8c140b22;
            strcpy(uVar5,s_CALENDAR1999_8c140b22,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 2000:
            pcVar3 = s_CALENDAR2000_8c140b2f;
            ar6 = strcpy;
            strcpy(uVar5,s_CALENDAR2000_8c140b2f,strcpy,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d1:
            pcVar3 = s_CALENDAR2001_8c140b3c;
            strcpy(uVar5,s_CALENDAR2001_8c140b3c,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d2:
            pcVar3 = s_CALENDAR2002_8c140b49;
            strcpy(uVar5,s_CALENDAR2002_8c140b49,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d3:
            pcVar3 = s_CALENDAR2003_8c140b56;
            strcpy(uVar5,s_CALENDAR2003_8c140b56,ar6,ar7);
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d4:
            pcVar3 = s_CALENDAR2004_8c140b63;
            strcpy(uVar5,s_CALENDAR2004_8c140b63,ar6,ar7);
            ar5_00 = (code *)pcVar3;
          }
        }
        else {
          pcVar3 = s_CALENDARXXXX_8c140b70;
          strcpy(uVar5,s_CALENDARXXXX_8c140b70,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
        }
        FUN_8c014334(ar4_00,ar5_00,ar6,ar7,&DAT_8c140b7d);
        uVar4 = 1;
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR1999_8c140b22,ar6,ar7);
    if (((((iVar1 == 0) ||
          (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2000_8c140b2f,ar6,ar7), iVar1 == 0)) ||
         (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2001_8c140b3c,ar6,ar7), iVar1 == 0)) ||
        ((iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2002_8c140b49,ar6,ar7), iVar1 == 0 ||
         (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2003_8c140b56,ar6,ar7), iVar1 == 0)))) ||
       ((iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDAR2004_8c140b63,ar6,ar7), iVar1 == 0 ||
        (iVar1 = s_FROGMANLINE2_0f970c(uVar5,s_CALENDARXXXX_8c140b70,ar6,ar7), iVar1 == 0)))) {
      strcpy(uVar5,s_CALENDAR_8c140a8f,ar6,ar7,in_stack_ffffff8c);
      pcVar3 = s_USER_SPECIAL_DAY_8c140b82;
      strcpy(ar4_00,s_USER_SPECIAL_DAY_8c140b82,ar6,ar7,in_stack_ffffff8c);
      *(undefined4 *)(ar4 + 0xc) = 1;
      *(undefined4 *)(ar4 + 0x1018) = 1;
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
    else {
      strcpy(uVar5,s_CALENDAR_8c140a8f,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c140a98;
      strcpy(ar4_00,&DAT_8c140a98,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(*(int *)(ar4 + 0x1050) + 0x7c) != 7) goto LAB_8c0fa1a8;
  iVar1 = *(int *)(*(int *)(ar4 + 0x1050) + 0x70);
  if ((iVar1 < 0x12) && (8 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 9:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      ar5_00 = (code *)0x1048;
      if (0 < *(int *)(ar4 + 0x1048)) {
        ar5_00 = (code *)FUN_8c0fa658(ar4,FUN_8c0fa658,ar6,ar7);
        if (*(int *)(ar4 + 0x1048) < (int)ar5_00) {
          ar5_00 = *(code **)(ar4 + 0x1048);
        }
        ar6 = (code *)&DAT_8c140ba6;
        s_CHAPTER_02d_0fa206(ar4,ar5_00,&DAT_8c140ba6,ar7);
        uVar4 = 1;
      }
      break;
    case 10:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      strcpy(uVar5,s_TRAINING_8c140ba9,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c1408e9;
      strcpy(ar4_00,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      break;
    default:
      goto switchD_8c0f9e5a_caseD_b;
    case 0xc:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      strcpy(uVar5,s_Worry_8c140b93,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c1408e9;
      strcpy(ar4_00,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      break;
    case 0xd:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      strcpy(uVar5,s_Civilization_8c140b99,ar6,ar7,in_stack_ffffff8c);
      ar5_00 = (code *)&DAT_8c1408e9;
      strcpy(ar4_00,&DAT_8c1408e9,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      break;
    case 0x11:
      *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
      pcVar3 = s_ESCAPE_8c140bb2;
      strcpy(ar4_00,s_ESCAPE_8c140bb2,ar6,ar7,in_stack_ffffff8c);
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
  }
  else {
switchD_8c0f9e5a_caseD_b:
    ar5_00 = *(code **)(ar4 + 0x1048);
    if (0 < (int)ar5_00) {
      ar5_00 = FUN_8c0fa658;
      iVar1 = ar4;
      pcVar2 = (code *)FUN_8c0fa658(ar4,FUN_8c0fa658,ar6,ar7);
      if ((int)pcVar2 <= *(int *)(ar4 + 0x1048)) {
        if (*(int *)(*(int *)(ar4 + 0x1050) + 0x74) == 1) {
          uVar5 = rand(iVar1,ar5_00,ar6,ar7);
          ar5_00 = (code *)0x4;
          iVar1 = libgcc_divide_helper_01031c(uVar5,4,ar6,ar7);
          if (iVar1 == 0) {
            ar6 = (code *)&DAT_8c140bb9;
            s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140bb9,ar7);
            uVar4 = 1;
            ar5_00 = pcVar2;
          }
        }
        else {
          FUN_8c1f8176(auStack_28,auStack_28,ar6,ar7);
          FUN_8c1f826c(auStack_28,&uStack_2c,ar6,ar7);
          ar5_00 = (code *)get_field_c8_0fc440(ar4 + 0x1054,ar4 + 0x1054,ar6,ar7);
          uStack_2c = uStack_2c - (int)ar5_00;
          if (600 < uStack_2c) {
            if (*(int *)(ar4 + 0x1034) == 1) {
              ar6 = (code *)&DAT_8c140bb9;
              s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140bb9,ar7);
            }
            else {
              ar6 = (code *)&DAT_8c140a98;
              s_CHAPTER_02d_0fa206(ar4,pcVar2,&DAT_8c140a98,ar7);
            }
            ar5_00 = FUN_8c0fc40c;
            FUN_8c0fc40c(ar4 + 0x1054,FUN_8c0fc40c,ar6,ar7);
            uVar4 = 1;
          }
        }
      }
    }
  }
LAB_8c0fa1a8:
  if (uVar4 == 1) {
    FUN_8c0f824c(ar4,ar5_00,ar6,ar7);
  }
  else {
    FUN_8c0fa70c(ar4,ar5_00,ar6,ar7);
  }
  return uVar4;
}



/* s_CHAPTER_02d_0fa206 @ 8c0fa204 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CHAPTER_02d_0fa206(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  FUN_8c014334(*(undefined4 *)(ar4 + 0x1050),ar5,ar6,ar7,s_CHAPTER_02d_8c140bbd);
  strcpy(*(int *)(ar4 + 0x1050) + 0x20,*(undefined4 *)(ar4 + 0x1050),ar6_00,ar7,ar5);
  FUN_8c01437c(*(int *)(ar4 + 0x1050) + 0x20,&DAT_8c140bc9,ar6_00,ar7);
  FUN_8c01437c(*(int *)(ar4 + 0x1050) + 0x20,ar6,ar6_00,ar7);
  strcpy(*(int *)(ar4 + 0x1050) + 0x40,&DAT_8c1408e9,ar6_00,ar7,ar5);
  *(undefined4 *)(*(int *)(ar4 + 0x1050) + 0x70) = 0;
  FUN_8c0fda28(ar4 + 0x1054,0,ar6_00,ar7);
  *(undefined4 *)(ar4 + 0x89130) = 3;
  return 0x89130;
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
  undefined4 ar6_00;
  
  ar6_00 = DAT_8c0fa378;
  (*(code *)PTR_memmove_8c0fa37c)(ar4,ar5,DAT_8c0fa378,ar7);
  *(undefined4 *)(ar4 + 0xc) = 1;
  iVar1 = *(int *)(DAT_8c0fa380 + ar4);
  if (iVar1 == 1) {
    iVar2 = (*(code *)PTR_FUN_8c0fa384)(ar4,ar5,ar6_00,ar7);
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

undefined4 FUN_8c0fa388(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((ar5 < 0xd) && (-1 < ar5)) {
                    /* WARNING: Switch is manually overridden */
    switch(ar5) {
    case 0:
      iVar1 = FUN_8c0fa538(ar4,ar5,ar6,ar7);
      if (0 < iVar1) {
        return 1;
      }
      break;
    case 1:
      iVar1 = FUN_8c0fa538(ar4,ar5,ar6,ar7);
      if (1 < iVar1) {
        return 1;
      }
      break;
    case 2:
      iVar1 = FUN_8c0fa538(ar4,ar5,ar6,ar7);
      if (2 < iVar1) {
        return 1;
      }
      break;
    case 3:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (1 < iVar1) {
        return 1;
      }
      break;
    case 4:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (2 < iVar1) {
        return 1;
      }
      break;
    case 5:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (3 < iVar1) {
        return 1;
      }
      break;
    case 6:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (4 < iVar1) {
        return 1;
      }
      break;
    case 7:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (6 < iVar1) {
        return 1;
      }
      break;
    case 8:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (7 < iVar1) {
        return 1;
      }
      break;
    case 9:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (8 < iVar1) {
        return 1;
      }
      break;
    case 10:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (10 < iVar1) {
        return 1;
      }
      break;
    case 0xb:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (0xc < iVar1) {
        return 1;
      }
      break;
    case 0xc:
      iVar1 = FUN_8c0fa658(ar4,ar5,ar6,ar7);
      if (0x12 < iVar1) {
        return 1;
      }
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
  int ain0;
  
  iVar2 = 0;
  for (ain0 = 8; ain0 < 0x26; ain0 = ain0 + 1) {
    iVar1 = FUN_8c013bdc(ar4 + ain0 * 4 + 0x10,ar5,ar6,ar7);
    if (99 < iVar1) {
      ar5 = &DAT_8c140bcb;
      strcpy(ar4 + ain0 * 4 + 0x10,&DAT_8c140bcb,ar6,ar7,ain0);
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
  
  uVar1 = (*(code *)PTR_FUN_8c0fa5ec)
                    (ar4 + 0x10,ar5,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c0fa5e4 + DAT_8c0fa5e8);
  return uVar1;
}



/* FUN_8c0fa5f0 @ 8c0fa5f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa5f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fa620)
                    (ar4 + 0x14,ar5,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c0fa618 + DAT_8c0fa61c);
  return uVar1;
}



/* FUN_8c0fa624 @ 8c0fa624 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa624(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0fa654)
                    (ar4 + 0x18,ar5,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c0fa64c + DAT_8c0fa650);
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
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = (*(code *)PTR_FUN_8c0fa6bc)(DAT_8c0fa6b8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fa6c0)(ar4_00,ar5,ar6,ar7);
  iVar1 = DAT_8c0fa6c4;
  *(undefined4 *)(DAT_8c0fa6c4 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0fa6c8 @ 8c0fa6c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fa6c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = (*(code *)PTR_FUN_8c0fa6fc)(DAT_8c0fa6f8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0fa704)(ar4_00,PTR_DAT_8c0fa700,ar6,ar7);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa74c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126610,ar5,ar6,ar7);
  uVar3 = 0x8c441280;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c441280,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126620,pcVar2,uVar3,ar7);
  uVar3 = 0x8c44128c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c44128c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126630,pcVar2,uVar3,ar7);
  uVar3 = 0x8c441298;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c441298,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126640,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c4412a4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126650 = CONCAT44(_UNK_8c126654,0x800000);
                    /* WARNING: Read-only address (ram,0x8c126654) is written */
  }
  else {
    _DAT_8c126650 = 0xffffffff00800000;
  }
  return 0x8c125864;
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
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0fa83c @ 8c0fa83c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fa83c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
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
  ar5_00 = (int)ar4 + DAT_8c0fa8f0;
  (*(code *)PTR_FUN_8c0fa8f4)(auStack_14,ar5_00,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0fa8fc)(DAT_8c0fa8f8,ar5_00,ar6,ar7);
  ar4[2] = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c0fa900)(DAT_8c0fa8f8,ar5_00,ar6,ar7);
  ar4[3] = uVar1;
  *ar4 = 1;
  (*(code *)PTR_FUN_8c0fa904)(ar4,ar5_00,ar6,ar7);
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

undefined * s_SPEECH_0faa98(int *ar4,undefined4 ar5,char *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  char *ar6_00;
  int *ar7_00;
  int in_stack_ffffffb4;
  char acStack_2c [36];
  
  if (0 < ar4[0x2e]) {
    ar4[0x2e] = ar4[0x2e] + -1;
  }
  if (0 < ar4[0x2f]) {
    ar4[0x2f] = ar4[0x2f] + -1;
  }
  if ((ar4[0x22035] == 0) && (0 < ar4[0x22036])) {
    ar4[0x22036] = ar4[0x22036] + -1;
  }
  iVar2 = *ar4;
  if (8 < iVar2) {
    return (undefined *)8;
  }
  if (iVar2 < 1) {
    return (undefined *)1;
  }
  puVar1 = (&switchD_8c0fab12::switchdataD_8c0fab28)[iVar2 + -1];
                    /* WARNING: Switch is manually overridden */
  switch(iVar2) {
  case 1:
    break;
  case 2:
    *ar4 = 1;
    ar4[0x2c] = 0;
    FUN_8c0fda5c(ar4,ar5,ar6,ar7);
    puVar1 = (undefined *)0x0;
    if (ar4[4] != 0) {
      *(undefined4 *)(ar4[4] + 4) = 0;
      puVar1 = (undefined *)FUN_8c0fb7d0(ar4,ar5,ar6,ar7);
    }
    break;
  case 3:
    if (ar4[0x2c] == 1) {
      *ar4 = 2;
      return (undefined *)2;
    }
    ar7 = ar4 + 0xe;
    ar6 = s_SPEECH_8c141dd0;
    iVar2 = FUN_8c02126c(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,ar7);
    if (iVar2 == 2) {
      return (undefined *)2;
    }
    if (iVar2 == 0) {
      *(undefined1 *)(ar4 + 5) = 0;
      *ar4 = 2;
      return (undefined *)2;
    }
    ar4[0xd] = 0;
    while (in_stack_ffffffb4 = ar4[0xd], *(char *)(ar4[0xe] + in_stack_ffffffb4 * 0x28) != '\0') {
      ar4[0xd] = ar4[0xd] + 1;
    }
    *ar4 = 4;
  case 4:
    if (ar4[0x2c] == 1) {
      puVar1 = (undefined *)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = s_SPEECH_0faf9e(ar4,*(int *)(ar4[4] + 0x40) + 0x20,ar6,ar7);
      if (iVar2 == 0) {
        puVar1 = (undefined *)0x2;
        *ar4 = 2;
      }
      else {
        *ar4 = 5;
switchD_8c0fab12_caseD_5:
        if (ar4[0x2c] == 1) {
          puVar1 = (undefined *)0x2;
          *ar4 = 2;
        }
        else {
          ar7_00 = ar4 + 0x21;
          ar6_00 = s_SPEECH_8c141dd0;
          iVar2 = FUN_8c02126c(0x8c3eb334,ar4 + 0xf,s_SPEECH_8c141dd0,ar7_00);
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
            strcpy(acStack_2c,*(int *)(ar4[4] + 0x40) + 0x40,ar6_00,ar7_00,in_stack_ffffffb4);
            if (acStack_2c[0] == '\0') {
              strcpy(acStack_2c,&DAT_8c141dd7,ar6_00,ar7_00,in_stack_ffffffb4);
            }
            puVar1 = (undefined *)s_ERROR_0fb0de(ar4,acStack_2c,ar6_00,ar7_00);
          }
        }
      }
    }
    break;
  case 5:
    goto switchD_8c0fab12_caseD_5;
  case 6:
    if (ar4[0x2c] == 1) {
      puVar1 = (undefined *)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = *(int *)(ar4[0x22] + 0x20);
      if ((iVar2 < 9) && (0 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar2) {
        case 1:
          puVar1 = (undefined *)s_ERR_wrap_0fb1d4(ar4,ar5,ar6,ar7);
          break;
        case 2:
          puVar1 = (undefined *)FUN_8c0fb20c(ar4,ar5,ar6,ar7);
          break;
        case 3:
          FUN_8c0fda5c(ar4,ar5,ar6,ar7);
          puVar1 = (undefined *)FUN_8c0fb268(ar4,ar5,ar6,ar7);
          break;
        case 4:
          puVar1 = (undefined *)s_SPEECH_0fbe00(ar4,ar5,ar6,ar7);
          break;
        case 5:
          puVar1 = (undefined *)FUN_8c0fc5ac(ar4,ar5,ar6,ar7);
          break;
        case 6:
          puVar1 = (undefined *)FUN_8c0fc608(ar4,ar5,ar6,ar7);
          break;
        case 7:
          puVar1 = (undefined *)FUN_8c0fc69c(ar4,ar5,ar6,ar7);
          break;
        case 8:
          puVar1 = (undefined *)FUN_8c0fc7c4(ar4,ar5,ar6,ar7);
        }
      }
      else {
        puVar1 = (undefined *)0x2;
        *ar4 = 2;
      }
    }
    break;
  case 7:
    puVar1 = (undefined *)FUN_8c0fb494(ar4,ar5,ar6,ar7);
    break;
  case 8:
    puVar1 = (undefined *)s_SPEECH_0fbf2e(ar4,ar5,ar6,ar7);
  }
  return puVar1;
}



/* s_SPEECH_0fae26 @ 8c0fae24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fae26(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffffb0;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [36];
  
  ar4[0x2e] = 0;
  strcpy(auStack_28,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7,in_stack_ffffffb0);
  FUN_8c01437c(auStack_28,&DAT_8c141dd9,ar6,ar7);
  strcpy(auStack_48,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7,in_stack_ffffffb0);
  FUN_8c01437c(auStack_48,&DAT_8c141dde,ar6,ar7);
  iVar1 = FUN_8c0faf30(ar4 + 5,auStack_28,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(ar4 + 5) != '\0') {
      FUN_8c021338(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,1);
      ar7 = 1;
      ar6 = s_SPEECH_8c141dd0;
      FUN_8c021338(0x8c3eb334,ar4 + 0xf,s_SPEECH_8c141dd0,1);
    }
    strcpy(ar4 + 5,auStack_28,ar6,ar7,in_stack_ffffffb0);
    strcpy(ar4 + 0xf,auStack_48,ar6,ar7,in_stack_ffffffb0);
    iVar1 = FUN_8c02126c(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,ar4 + 0xe);
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

undefined4 s_SPEECH_0faf9e(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_ffffffb8;
  undefined1 auStack_30 [36];
  
  if (*(int *)(ar4 + 0x38) == 0) {
    return 0;
  }
  if (*ar5 == '\0') {
    strcpy(auStack_30,*(undefined4 *)(ar4 + 0x38),ar6,ar7,in_stack_ffffffb8);
    iVar2 = 0;
  }
  else {
    strcpy(auStack_30,ar5,ar6,ar7,in_stack_ffffffb8);
    iVar2 = 0;
    while ((iVar2 < *(int *)(ar4 + 0x34) &&
           (iVar1 = FUN_8c0faf30(iVar2 * 0x28 + *(int *)(ar4 + 0x38),auStack_30,ar6,ar7), iVar1 != 0
           ))) {
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(ar4 + 0x34) <= iVar2) {
      return 0;
    }
  }
  if ((*(char *)(ar4 + 0x5c) != '\0') &&
     ((*(int *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20) != *(int *)(ar4 + 0x7c) ||
      (iVar1 = FUN_8c0faf30(auStack_30,ar4 + 0x5c,ar6,ar7), iVar1 != 0)))) {
    ar7 = 1;
    ar6 = s_SPEECH_8c141dd0;
    FUN_8c021338(0x8c3eb334,ar4 + 0x3c,s_SPEECH_8c141dd0,1);
    *(undefined1 *)(ar4 + 0x5c) = 0;
  }
  strcpy(ar4 + 0x5c,auStack_30,ar6,ar7,in_stack_ffffffb8);
  *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20);
  *(undefined4 *)(ar4 + 0x80) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x24);
  return 1;
}



/* s_ERROR_0fb0de @ 8c0fb0d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_ERROR_0fb0de(undefined4 *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar4_00;
  
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
      for (ar4_00 = *(char **)(DAT_8c0fb1c4 + (int)ar4);
          (*(int *)(ar4_00 + 0x20) != 0 && (*ar4_00 != '\0'));
          ar4_00 = ar4_00 + *(int *)(ar4_00 + 0x24) + 0x28) {
        iVar2 = (*(code *)PTR_FUN_8c0fb1cc)(ar4_00,ar5,ar6,ar7);
        if (iVar2 == 0) {
          *(char **)(DAT_8c0fb1d0 + (int)ar4) = ar4_00;
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
  undefined4 in_PR;
  
  if (ar4[0x2c] == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = ar4[0x22];
    strcpy(*(int *)(ar4[4] + 0x40) + 0x20,iVar2 + 0x28,ar6,ar7,in_PR);
    strcpy(*(int *)(ar4[4] + 0x40) + 0x40,iVar2 + 0x48,ar6,ar7,in_PR);
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
  undefined4 ar4_00;
  int iVar3;
  
  iVar3 = ar4[0x22];
  ar4[0x2d] = 0xffffffff;
  *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x78) = 1;
  if (*(char *)(iVar3 + 0x48) == '#') {
    ar4[0x23] = 0;
  }
  else if (*(char *)(iVar3 + 0x48) == '@') {
    uVar1 = rand(ar4,ar5,ar6,ar7);
    uVar1 = libgcc_divide_helper_01031c(uVar1,*(undefined4 *)(iVar3 + 0x4c),ar6,ar7);
    ar4[0x23] = uVar1;
  }
  else {
    uVar1 = FUN_8c0fcd2c(ar4,iVar3 + 0x48,ar6,ar7);
    ar4[0x23] = uVar1;
    if ((int)ar4[0x23] < 0) {
      ar4[0x23] = 0;
    }
    if (*(int *)(iVar3 + 0x4c) <= (int)ar4[0x23]) {
      ar4[0x23] = *(int *)(iVar3 + 0x4c) + -1;
    }
  }
  iVar2 = FUN_8c0faf30(ar4[0x23] * 0x24 + iVar3 + 0x54,s__NONE_8c141dec,ar6,ar7);
  if (iVar2 == 0) {
    uVar1 = s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7);
    return uVar1;
  }
  iVar3 = ar4[0x23] * 0x24 + iVar3 + 0x54;
  ar4_00 = 0x8c2b59d0;
  uVar1 = pack_acquire_entry_handle(0x8c2b59d0,iVar3,ar6,ar7);
  ar4[0x2d] = uVar1;
  if (-1 < (int)ar4[0x2d]) goto LAB_8c0fb436;
  uVar1 = rand(ar4_00,iVar3,ar6,ar7);
  iVar3 = libgcc_divide_helper_01031c(uVar1,5,ar6,ar7);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar3) {
    case 0:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_02_8c141df2,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 1:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_04_8c141df8,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 2:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_06_8c141dfe,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 3:
      uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_07_8c141e04,ar6,ar7);
      ar4[0x2d] = uVar1;
      break;
    case 4:
      goto switchD_8c0fb390_caseD_4;
    }
  }
  else {
switchD_8c0fb390_caseD_4:
    uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_GU_09_8c141e0a,ar6,ar7);
    ar4[0x2d] = uVar1;
  }
  if ((int)ar4[0x2d] < 0) {
    uVar1 = s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6,ar7);
    return uVar1;
  }
LAB_8c0fb436:
  FUN_8c021d90(0x8c2b59d0,ar4[0x2d],*(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0xc0),0);
  *ar4 = 7;
  return 7;
}



/* FUN_8c0fb494 @ 8c0fb494 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0fb494(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  undefined *ar5_01;
  uint *ar6_00;
  uint *puVar2;
  undefined4 ar6_01;
  int *ar7_00;
  undefined4 ar7_01;
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
  if (ar4[0x2c] == 1) {
    pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6,ar7);
    puVar1 = (undefined *)0x2;
    *ar4 = 2;
  }
  else {
    iVar3 = ar4[0x22];
    ar7_00 = &iStack_18;
    ar6_00 = auStack_14;
    ar5_01 = (undefined *)ar4[0x2d];
    ar5_00 = FUN_8c021f4c(0x8c2b59d0,ar5_01,ar6_00,ar7_00,&iStack_1c);
    puVar1 = (undefined *)0x8;
    if ((ar5_00 < 9) && (-1 < ar5_00)) {
      puVar1 = (&switchD_8c0fb4fa::switchdataD_8c0fb500)[ar5_00];
      iStack_20 = ar5_00;
                    /* WARNING: Switch is manually overridden */
      switch(ar5_00) {
      default:
        break;
      case 2:
        pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6_00,ar7_00);
      case 1:
        FUN_8c0fb780(ar4,4,ar6_00,ar7_00);
        puVar1 = (undefined *)s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6_00,ar7_00);
        break;
      case 4:
        break;
      case 5:
        if ((auStack_14[0] < 0xb) && (-1 < (int)auStack_14[0])) {
                    /* WARNING: Switch is manually overridden */
          switch(auStack_14[0]) {
          case 1:
            iStack_24 = ar4[0x23];
            *(undefined4 *)(iStack_24 * 0x24 + iVar3 + 0x50) = 0x4e;
            break;
          case 2:
            iStack_28 = ar4[0x23];
            *(undefined4 *)(iStack_28 * 0x24 + iVar3 + 0x50) = 0x41;
            break;
          case 3:
            iStack_2c = ar4[0x23];
            *(undefined4 *)(iStack_2c * 0x24 + iVar3 + 0x50) = 0x4c;
            break;
          case 4:
            iStack_30 = ar4[0x23];
            *(undefined4 *)(iStack_30 * 0x24 + iVar3 + 0x50) = 0x50;
            break;
          case 5:
            iStack_34 = ar4[0x23];
            *(undefined4 *)(iStack_34 * 0x24 + iVar3 + 0x50) = 0x43;
            break;
          case 6:
            iStack_38 = ar4[0x23];
            *(undefined4 *)(iStack_38 * 0x24 + iVar3 + 0x50) = 0x46;
            break;
          case 7:
            iStack_3c = ar4[0x23];
            *(undefined4 *)(iStack_3c * 0x24 + iVar3 + 0x50) = 0x53;
            break;
          case 8:
            iStack_40 = ar4[0x23];
            *(undefined4 *)(iStack_40 * 0x24 + iVar3 + 0x50) = 0x49;
            break;
          case 9:
            iStack_44 = ar4[0x23];
            *(undefined4 *)(iStack_44 * 0x24 + iVar3 + 0x50) = 0x48;
            break;
          case 10:
            iStack_48 = ar4[0x23];
            *(undefined4 *)(iStack_48 * 0x24 + iVar3 + 0x50) = 0x55;
          }
        }
        if (iStack_18 != 0) {
          FUN_8c014334(auStack_50,ar5_01,ar6_00,ar7_00,&DAT_8c141e10);
          ar5_01 = &DAT_8c141e13;
          FUN_8c0fc94c(ar4,&DAT_8c141e13,auStack_50,ar7_00);
          ar6_00 = puVar2;
        }
        if (iStack_1c != 0) {
          FUN_8c014334(auStack_50,ar5_01,ar6_00,ar7_00,&DAT_8c141e10);
          FUN_8c0fc94c(ar4,&DAT_8c141e15,auStack_50,ar7_00);
        }
        ar7_01 = 0;
        ar6_01 = *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0xc0);
        FUN_8c021d90(0x8c2b59d0,ar4[0x2d],ar6_01,0);
        puVar1 = (undefined *)FUN_8c0fb780(ar4,ar5_00,ar6_01,ar7_01);
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
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x68);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      uVar2 = 0x43;
      break;
    case 1:
      uVar2 = 0x55;
      break;
    default:
      goto switchD_8c0fb7f2_caseD_2;
    case 4:
      uVar2 = 0x53;
    }
  }
  else {
switchD_8c0fb7f2_caseD_2:
    uVar2 = 0x4e;
  }
  uVar2 = FUN_8c0fb83c(ar4,uVar2,4,ar7);
  return uVar2;
}



/* FUN_8c0fb83c @ 8c0fb83c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fb83c(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 8;
  if ((ar6 < 9) && (3 < ar6)) {
                    /* WARNING: Switch is manually overridden */
    switch(ar6) {
    case 4:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    /* WARNING: Switch is manually overridden */
        switch(ar5) {
        case 0x41:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 5;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x14;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x19;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x28;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x23;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 10;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0xf;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1e;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2d;
          return 0xb8;
        }
      }
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0;
      return 0xb8;
    case 5:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    /* WARNING: Switch is manually overridden */
        switch(ar5) {
        case 0x41:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 6;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x15;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1a;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x29;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x24;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0xb;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x10;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1f;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2e;
          return 0xb8;
        }
      }
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 1;
      return 0xb8;
    case 6:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    /* WARNING: Switch is manually overridden */
        switch(ar5) {
        case 0x41:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 7;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x16;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1b;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2a;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x25;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0xc;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x11;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x20;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2f;
          return 0xb8;
        }
      }
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 2;
      return 0xb8;
    case 7:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    /* WARNING: Switch is manually overridden */
        switch(ar5) {
        case 0x41:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 8;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x17;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1c;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2b;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x26;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0xd;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x12;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x21;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x30;
          return 0xb8;
        }
      }
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 3;
      return 0xb8;
    case 8:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    /* WARNING: Switch is manually overridden */
        switch(ar5) {
        case 0x41:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 9;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x18;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1d;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2c;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x27;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0xe;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x13;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x22;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 0x31;
          return 0xb8;
        }
      }
      uVar1 = 0xb8;
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb8) = 4;
    }
  }
  return uVar1;
}



/* s_SPEECH_0fbe00 @ 8c0fbdfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fbe00(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  char *ar6_00;
  int ar5_01;
  undefined4 in_stack_ffffffe4;
  
  ar5_01 = ar4[0x22];
  iVar1 = FUN_8c0faf30(ar5_01 + 0x2c,ar4 + 0x24,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(ar4 + 0x24) != '\0') {
      ar6 = s_SPEECH_8c141dd0;
      FUN_8c01d658(ar4[2],ar4 + 0x24,s_SPEECH_8c141dd0,ar7);
    }
    strcpy(ar4 + 0x24,ar5_01 + 0x2c,ar6,ar7,in_stack_ffffffe4);
  }
  ar6_00 = s_SPEECH_8c141dd0;
  ar5_00 = ar4 + 0x24;
  iVar1 = asr_register_strings(ar4[2],ar5_00,s_SPEECH_8c141dd0,ar7);
  if (iVar1 == 0) {
    FUN_8c01d868(ar4[2],ar5_00,ar6_00,ar7);
    uVar2 = 2;
    *ar4 = 2;
  }
  else {
    iVar1 = FUN_8c01d71c(ar4[2],ar5_00,ar6_00,ar7);
    if (iVar1 == 0) {
      uVar2 = 2;
      *ar4 = 2;
    }
    else {
      ar4[0x2e] = 0x96;
      ar4[0x33] = 0;
      iVar1 = FUN_8c0fc4fc(ar4,ar5_01,ar6_00,ar7);
      if ((iVar1 == 1) || (*(int *)(ar5_01 + 0x28) == 4)) {
        ar4[0x2e] = 300;
        ar4[0x33] = 1;
      }
      else if (*(int *)(ar5_01 + 0x28) == 1) {
        ar4[0x2e] = 0x96;
      }
      else if (*(int *)(ar5_01 + 0x28) == 2) {
        ar4[0x2e] = 0x5a;
      }
      uVar2 = 8;
      *ar4 = 8;
    }
  }
  return uVar2;
}



/* s_SPEECH_0fbf2e @ 8c0fbf28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_SPEECH_0fbf2e(undefined4 *ar4,undefined4 ar5,char *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *ar5_00;
  char *ar5_01;
  undefined *ar5_02;
  char *ar5_03;
  undefined4 in_stack_fffffe94;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [128];
  int aiStack_9c [3];
  char acStack_90 [132];
  
  if (ar4[0x2c] == 1) {
    FUN_8c01d868(ar4[2],ar5,ar6,ar7);
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    if (ar4[0x22035] == 1) {
      ar4[0x2e] = 0;
      ar4[0x22035] = 0;
    }
    if (ar4[0x33] == 1) {
      strcpy(auStack_11c,ar4 + 0x24,ar6,ar7,in_stack_fffffe94);
      FUN_8c01437c(auStack_11c,&DAT_8c141e17,ar6,ar7);
      ar7 = auStack_120;
      ar6 = s_SPEECH_8c141dd0;
      iVar2 = FUN_8c02126c(0x8c3eb334,auStack_11c,s_SPEECH_8c141dd0,ar7);
      if (iVar2 == 1) {
        ar7 = (undefined1 *)0x1;
        ar6 = s_SPEECH_8c141dd0;
        ar5_00 = ar4 + 0x24;
        FUN_8c021338(0x8c3eb334,ar5_00,s_SPEECH_8c141dd0,1);
        if (ar4[0x22035] == 0) {
          FUN_8c01bcf4(ar4[3],ar5_00,ar6,ar7);
        }
        if (ar4[0x22035] == 0) {
          FUN_8c01bd88(ar4[3],ar5_00,ar6,ar7);
        }
        FUN_8c01c964(ar4[3],&DAT_8c140bd0,ar6,ar7);
        ar4[0x33] = 0;
      }
    }
    ar5_03 = (char *)ar4[0x22];
    acStack_90[0] = '\0';
    aiStack_9c[0] = 0;
    if ((int)ar4[0x2e] < 1) {
      strcpy(acStack_90,&DAT_8c141e1c,ar6,ar7,in_stack_fffffe94);
      aiStack_9c[0] = 1;
    }
    else {
      FUN_8c01d684(ar4[2],aiStack_9c,ar6,ar7);
      if (aiStack_9c[0] != 0) {
        *(int *)(*(int *)(ar4[4] + 0x3c) + 4) = *(int *)(*(int *)(ar4[4] + 0x3c) + 4) + 1;
      }
    }
    if (aiStack_9c[0] == 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = s__NAME_8c141e20;
      iVar2 = FUN_8c0faf30(acStack_90,s__NAME_8c141e20,ar6,ar7);
      if (((iVar2 == 0) && (0 < **(int **)(ar4[4] + 0x3c))) &&
         (*(int *)(*(int *)(ar4[4] + 0x40) + 100) != **(int **)(ar4[4] + 0x3c))) {
        FUN_8c01d868(ar4[2],ar5_01,ar6,ar7);
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
          ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
          iVar3 = FUN_8c0faf30(acStack_90,ar5_01,ar6,ar7);
          if (iVar3 == 0) break;
        }
        if (*(int *)(ar5_03 + 0x6c) <= iVar2) {
          ar5_01 = &DAT_8c141e26;
          strcpy(acStack_90,&DAT_8c141e26,ar6,ar7,in_stack_fffffe94);
          for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
            ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
            iVar3 = FUN_8c0faf30(acStack_90,ar5_01,ar6,ar7);
            if (iVar3 == 0) break;
          }
        }
        if (acStack_90[0] != '-') {
          if (acStack_90[0] == '?') {
            ar5_01 = &DAT_8c1417d0;
            FUN_8c01c978(ar4[3],&DAT_8c1417d0,ar6,ar7);
            FUN_8c0fc3e4(ar4,ar5_01,ar6,ar7);
          }
          else {
            ar5_02 = &DAT_8c1411d0;
            FUN_8c01c978(ar4[3],&DAT_8c1411d0,ar6,ar7);
            FUN_8c0fc3e4(ar4,ar5_02,ar6,ar7);
            ar5_01 = ar5_03;
            iVar3 = FUN_8c0fc4fc(ar4,ar5_03,ar6,ar7);
            if (iVar3 == 1) {
              ar5_01 = ar5_03;
              FUN_8c0fdaac(ar4,ar5_03,ar6,ar7);
            }
          }
        }
        if (iVar2 < *(int *)(ar5_03 + 0x6c)) {
          if (ar5_03[iVar2 * 0x68 + 0xb0] == '\0') {
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7);
          }
          else if (ar5_03[iVar2 * 0x68 + 0x90] == '\0') {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x70;
            FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7);
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7);
          }
          else {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x90;
            FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7);
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x90,ar6,ar7);
          }
          ar5_01 = *(char **)(ar5_03 + iVar2 * 0x68 + 0xd4);
          FUN_8c0fdd68(*(undefined4 *)(ar4[4] + 0x40),ar5_01,ar6,ar7);
        }
        FUN_8c01d868(ar4[2],ar5_01,ar6,ar7);
        if (acStack_90[0] == '!') {
          ar6 = s_SPEECH_8c141dd0;
          asr_register_strings(ar4[2],ar4 + 0x24,s_SPEECH_8c141dd0,ar7);
        }
        if (*(int *)(*(int *)(ar4[4] + 0x40) + 0x70) == 0x11) {
          uVar1 = 2;
          *ar4 = 2;
        }
        else {
          uVar1 = s_ERROR_0fb0de(ar4,ar5_03 + iVar2 * 0x68 + 0xb4,ar6,ar7);
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
    strcpy(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar2 * 0x20 + 200,
           *(int *)(*(int *)(ar4 + 0x10) + 0x40) + (iVar2 + -1) * 0x20 + 200,ar6,ar7,ar5);
  }
  uVar1 = strcpy(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 200,ar5,ar6,ar7,ar5);
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
  int ar5_00;
  int iVar2;
  undefined1 auStack_18 [16];
  
  if ((*(int *)(ar5 + 0x28) != 1) && (*(int *)(ar5 + 0x28) != 2)) {
    for (iVar2 = 0; iVar2 < *(int *)(ar5 + 0x6c); iVar2 = iVar2 + 1) {
      ar5_00 = ar5 + iVar2 * 0x68 + 0x70;
      iVar1 = (*(code *)PTR_FUN_8c0fc5a0)(PTR_s_SPEECH_8c0fc59c + 0x4c,ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        (*(code *)PTR_FUN_8c0fc5a4)(auStack_18,ar5_00,ar6,ar7,PTR_s_SPEECH_8c0fc59c + 0x40);
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
  
  iVar4 = *(int *)(ar4 + 0x88);
  for (iVar5 = 0; iVar5 < *(int *)(iVar4 + 0x68); iVar5 = iVar5 + 1) {
    unaff_r14 = 0;
    iVar6 = iVar4 + iVar5 * 0x2c;
    iVar3 = iVar6 + 0x70;
    iVar1 = FUN_8c0fcd2c(ar4,iVar3,ar6,ar7);
    if (*(char *)(iVar6 + 0x74) < '\x01') {
      iVar3 = FUN_8c013bdc(iVar6 + 0x78,iVar3,ar6,ar7);
    }
    else {
      iVar3 = FUN_8c0fcd2c(ar4,iVar6 + 0x74,ar6,ar7);
    }
    iVar6 = *(int *)(iVar6 + 0x6c);
    if ((iVar6 < 6) && (-1 < iVar6)) {
                    /* WARNING: Switch is manually overridden */
      switch(iVar6) {
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
    }
    if (unaff_r14 == 0) break;
  }
  if (unaff_r14 == 1) {
    uVar2 = s_ERROR_0fb0de(ar4,iVar4 + 0x28,ar6,ar7);
  }
  else {
    uVar2 = s_ERROR_0fb0de(ar4,iVar4 + 0x48,ar6,ar7);
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
  int iVar5;
  int ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffc8;
  
  iVar3 = *(int *)(ar4 + 0x88);
  for (iVar4 = 0; iVar4 < *(int *)(iVar3 + 0x48); iVar4 = iVar4 + 1) {
    iVar5 = iVar3 + iVar4 * 0x2c;
    ar5_00 = iVar5 + 0x4c;
    if (*(char *)(iVar5 + 0x74) == '\0') {
      strcpy(&stack0xffffffc8,iVar5 + 0x54,ar6,ar7,in_stack_ffffffc8);
    }
    else {
      ar6 = &stack0xffffffc8;
      FUN_8c0fd764(ar4,iVar5 + 0x74,&stack0xffffffc8,ar7);
    }
    if (*(int *)(iVar5 + 0x50) == 0) {
      ar6 = &stack0xffffffc8;
      FUN_8c0fc94c(ar4,ar5_00,&stack0xffffffc8,ar7);
    }
    else {
      ar5_01 = ar5_00;
      uVar1 = FUN_8c0fcd2c(ar4,ar5_00,ar6,ar7);
      iVar2 = FUN_8c013bdc(&stack0xffffffc8,ar5_01,ar6,ar7);
      iVar5 = *(int *)(iVar5 + 0x50);
      if ((iVar5 < 6) && (0 < iVar5)) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar5) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          libgcc_divide_helper_0101e4(uVar1,ar5_01,ar6,ar7);
          break;
        case 5:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          libgcc_divide_helper_01031c(uVar1,ar5_01,ar6,ar7);
        }
      }
      FUN_8c014334(&stack0xffffffc8,ar5_01,ar6,ar7,&DAT_8c141e10);
      ar6 = &stack0xffffffc8;
      FUN_8c0fc94c(ar4,ar5_00,&stack0xffffffc8,ar7);
    }
  }
  uVar1 = s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7);
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
  undefined1 *ar5_00;
  char *ar6_00;
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
        iVar4 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        if (8 < iVar4) {
          return 8;
        }
        if (iVar4 < 1) {
          return 1;
        }
                    /* WARNING: Switch is manually overridden */
        switch(iVar4) {
        case 1:
          *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb4) = iVar4;
          return 0xb4;
        }
        *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb0) = 1;
        iVar4 = *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb0);
        if (iVar4 != 1) {
          return iVar4;
        }
        *(undefined4 *)(ar4 + 0xbc) = 600;
        uVar3 = FUN_8c0fda5c(ar4,ar5,ar6,ar7);
        return uVar3;
      }
    }
  }
  else if (iVar4 < 0x57) {
    if (0x4a < iVar4) {
                    /* WARNING: Switch is manually overridden */
      switch(iVar4) {
      case 0x4b:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        uVar3 = FUN_8c0fdd98(*(undefined4 *)(*(int *)(ar4 + 0x10) + 0x40),uVar3,ar6,ar7);
        return uVar3;
      case 0x50:
        return (&switchD_8c0fc9ba::switchdataD_8c0fc9c0)[iVar4 + -0x4b];
      case 0x52:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        uVar3 = FUN_8c0fda28(ar4,uVar3,ar6,ar7);
        return uVar3;
      case 0x55:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0xc0) = uVar3;
        uVar3 = FUN_8c0fd8d0(ar4,ar5,ar6,ar7);
        return uVar3;
      case 0x56:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x70) = uVar3;
        return 0x70;
      }
    }
  }
  else if (iVar4 == 100) {
    FUN_8c1f8176(auStack_2a,ar5,ar6,ar7);
    uStack_26 = 0;
    uStack_25 = 0;
    uStack_24 = 0;
    FUN_8c1f8176(auStack_34,ar5,ar6,ar7);
    uVar3 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xc0,ar5,ar6,ar7);
    uStack_32 = (undefined1)uVar3;
    uVar3 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xc4,ar5,ar6,ar7);
    uStack_31 = (undefined1)uVar3;
    uStack_30 = 0;
    uStack_2f = 0;
    uStack_2e = 0;
    FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xbc,ar5,ar6,ar7);
    ar5_00 = auStack_34;
    FUN_8c1f823a(auStack_2a,ar5_00,ar6,ar7);
    uVar3 = FUN_8c014334(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x1c4,ar5_00,ar6,ar7,&DAT_8c141e10)
    ;
    return uVar3;
  }
  ar6_00 = ar6;
  iVar4 = FUN_8c013bdc(ar5,ar5,ar6,ar7);
  iVar1 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7);
  if (*ar6 == '+') {
    iVar2 = FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7);
    iVar1 = iVar1 + iVar2;
  }
  else if (*ar6 == '-') {
    iVar2 = FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7);
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar1 = FUN_8c013bdc(ar6,ar5,ar6_00,ar7);
  }
  if (999 < iVar1) {
    iVar1 = 999;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (((iVar4 == 6) &&
      (iVar2 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x28,ar5,ar6_00,ar7),
      iVar2 == iVar1)) && (0 < iVar2)) {
    *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x70) = 0x11;
  }
  uVar3 = FUN_8c014334(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7,
                       &DAT_8c141e10);
  return uVar3;
}



/* FUN_8c0fcd2c @ 8c0fcd2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0fcd2c(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *ar5_00;
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
  iVar6 = (int)*ar5;
  if ((iVar6 < 0x74) && (0x40 < iVar6)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar6) {
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
      if ((*(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb0) == 1) &&
         (*(int *)(ar4 + 0xbc) < 1)) {
        *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb0) = 0;
      }
      iVar6 = *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xb0);
      if (iVar6 == 0) {
        uVar7 = 0;
        *(undefined4 *)(ar4 + 0xbc) = 0;
      }
      else if (iVar6 == 1) {
        uVar7 = 2;
      }
      break;
    case 0x44:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      uVar7 = (uint)bStack_1f;
      break;
    case 0x45:
      uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x7c);
      break;
    case 0x46:
      uVar7 = *(uint *)(*(int *)(ar4 + 0x10) + 0x1c);
      break;
    case 0x47:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      uVar7 = (uint)bStack_1a;
      break;
    case 0x48:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      uVar7 = (uint)bStack_1e;
      break;
    default:
      goto switchD_8c0fcd62_caseD_49;
    case 0x4b:
      uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x68);
      break;
    case 0x4c:
      uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x60);
      break;
    case 0x4d:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      uVar7 = (uint)bStack_20;
      break;
    case 0x4e:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      uVar7 = (uint)bStack_1d;
      break;
    case 0x51:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      iVar6 = libgcc_divide_helper_01031c(uStack_22 - 0x7a8,0xc,ar6,ar7);
      if ((iVar6 < 0xc) && (-1 < iVar6)) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar6) {
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
      }
      break;
    case 0x52:
      if (*(char *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 200) != '\0') {
        iVar6 = 1;
        while ((iVar6 < 0x10 &&
               (iVar2 = FUN_8c0faf30(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 200,
                                     *(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + 200,ar6,
                                     ar7), iVar2 == 0))) {
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 1;
        }
      }
      break;
    case 0x53:
      FUN_8c1f8176(&uStack_22,FUN_8c1f8176,ar6,ar7);
      uVar3 = (uint)uStack_22;
      iVar6 = libgcc_divide_helper_01031c(uVar3,4,ar6,ar7);
      if (iVar6 == 0) {
        uVar7 = 1;
        iVar6 = libgcc_divide_helper_01031c(uVar3,100,ar6,ar7);
        if (iVar6 == 0) {
          uVar5 = libgcc_divide_helper_0101e4(uVar3,100,ar6,ar7);
          iVar6 = libgcc_divide_helper_01031c(uVar5,4,ar6,ar7);
          if (iVar6 != 0) {
            uVar7 = 0;
          }
        }
      }
      break;
    case 0x54:
      if (*(char *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 200) != '\0') {
        for (iVar6 = 1; iVar6 < 0x10; iVar6 = iVar6 + 1) {
          iVar2 = FUN_8c0faf30(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 200,
                               *(int *)(*(int *)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + 200,ar6,ar7);
          if (iVar2 == 0) {
            uVar7 = uVar7 + 1;
          }
        }
      }
      break;
    case 0x55:
      FUN_8c0fd8d0(ar4,ar5,ar6,ar7);
      uVar7 = *(uint *)(ar4 + 0xc0);
      break;
    case 0x57:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      uVar7 = (uint)bStack_1b;
      break;
    case 0x58:
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      if (*(char *)(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xac) != '\0') {
        uVar3 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xac,ar5,ar6,ar7);
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
      if (*(char *)(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xb0) != '\0') {
        uVar3 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xb0,ar5,ar6,ar7);
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
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      uVar7 = uStack_22 - 0x7ce;
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
      FUN_8c1f8176(&uStack_22,ar5,ar6,ar7);
      bStack_1e = 0;
      bStack_1d = 0;
      uStack_1c = 0;
      FUN_8c1f8176(auStack_2c,ar5,ar6,ar7);
      uVar5 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xc0,ar5,ar6,ar7);
      bStack_2a = (byte)uVar5;
      uVar5 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0xc4,FUN_8c013bdc,ar6,ar7);
      bStack_29 = (byte)uVar5;
      uStack_28 = 0;
      uStack_27 = 0;
      uStack_26 = 0;
      ar5_00 = auStack_2c;
      FUN_8c1f823a(&uStack_22,ar5_00,ar6,ar7);
      if ((bStack_2a != '\0') && (bStack_29 != '\0')) {
        FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x1c4,ar5_00,ar6,ar7);
        ar5_00 = *(undefined1 **)(*(int *)(ar4 + 0x10) + 0x3c);
        FUN_8c014334(ar5_00 + 0xbc,ar5_00,ar6,ar7,&DAT_8c141e10);
      }
      FUN_8c1f8176(&uStack_22,ar5_00,ar6,ar7);
      bStack_1e = 0xc;
      bStack_1d = 0;
      uStack_1c = 0;
      FUN_8c1f8176(auStack_2c,ar5_00,ar6,ar7);
      uVar5 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x10,ar5_00,ar6,ar7);
      bStack_2a = (byte)uVar5;
      uVar5 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x14,ar5_00,ar6,ar7);
      bStack_29 = (byte)uVar5;
      uStack_28 = 0xc;
      uStack_27 = 0;
      uStack_26 = 0;
      if ((bStack_2a == 0) || (bStack_29 == 0)) {
        return 0;
      }
      iVar6 = FUN_8c1f823a(&uStack_22,auStack_2c,ar6,ar7);
      if (iVar6 == 0) {
        return 2;
      }
      FUN_8c1f826c(&uStack_22,&iStack_30,ar6,ar7);
      iStack_30 = iStack_30 + 0x15180;
      FUN_8c1f8300(iStack_30,&uStack_22,ar6,ar7);
      if ((bStack_2a == bStack_20) && (bStack_29 == bStack_1f)) {
        return 1;
      }
      break;
    case 0x65:
      iVar6 = (int)ar5[1];
      if ((iVar6 < 0x6a) && (0x60 < iVar6)) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar6) {
        case 0x61:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x80);
          break;
        case 0x62:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x84);
          break;
        case 99:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x88);
          break;
        case 100:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x8c);
          break;
        case 0x65:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x90);
          break;
        case 0x66:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x94);
          break;
        case 0x67:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xa0);
          break;
        case 0x68:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xa4);
          break;
        case 0x69:
          uVar7 = *(uint *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xac);
        }
      }
      break;
    case 0x69:
      if (*(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 100) < 1) {
        if (*(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0xc0) < 900) {
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
      uVar7 = FUN_8c0fc4c4(ar4,ar5,ar6,ar7);
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
        uVar7 = *(ushort *)(*(int *)(ar4 + 0x10) + 0xc) - 1999;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        if (6 < (int)uVar7) {
          uVar7 = 0;
        }
      }
    }
  }
  else {
switchD_8c0fcd62_caseD_49:
    iVar6 = FUN_8c013bdc(ar5,ar5,ar6,ar7);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    uVar7 = FUN_8c013bdc(*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar6 * 4 + 0x10,ar5,ar6,ar7);
  }
  return uVar7;
}



/* FUN_8c0fd764 @ 8c0fd764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fd764(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*ar5;
  if ((iVar2 < 0x74) && (0x40 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    default:
      uVar1 = ar6;
      FUN_8c0fcd2c(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c014334(ar6,ar5,uVar1,ar7,&DAT_8c141e10);
      return uVar1;
    case 0x49:
      break;
    }
  }
  uVar1 = ar6;
  iVar2 = FUN_8c013bdc(ar5,ar5,ar6,ar7);
  uVar1 = strcpy(ar6,*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + iVar2 * 4 + 0x10,uVar1,ar7,iVar2);
  return uVar1;
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
  undefined4 in_stack_ffffffc0;
  
  uVar1 = (uint)*(byte *)(ar4 + 0xd0);
  iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7);
  if (((iVar2 != 0) ||
      (iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7), iVar2 != 0)) ||
     (iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7), uVar3 = 0, iVar2 != 0)) {
    uVar1 = (uint)*(byte *)(ar4 + 0xd0);
    strcpy(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x8f1,ar4 + 0x3c,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7,in_stack_ffffffc0);
    uVar3 = FUN_8c013fb4(uVar1 * 0x880 + ar4 + 0xd1,*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x10,
                         0x800,ar7);
  }
  return uVar3;
}



/* FUN_8c0fdc20 @ 8c0fdc20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0fdc20(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int in_stack_fffffff0;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0xffffffff;
  iVar1 = 0;
  while (iVar2 = iVar1, iVar2 < 0x400) {
    *(undefined1 *)(ar4 + iVar2 + 4) = 0;
    in_stack_fffffff0 = iVar2;
    iVar1 = iVar2 + 1;
  }
  strcpy(ar4 + 0x2b,&DAT_8c141e2a,ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x2c,&DAT_8c141e2c,ar6,ar7,in_stack_fffffff0);
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

/* WARNING: Unknown calling convention */

int FUN_8c0fdde4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 8,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x18,ar5,ar6,ar7);
  FUN_8c015ff0(ar4 + 0x2c,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0x40400000;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = 0x4f222fe640400000;
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
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0f3ebc(ar4,ar5,ar6,ar7);
  FUN_8c0f3ebc(ar4 + 0x170,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0x170,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0x170,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0x2e0,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0x2e1) = 0;
  *(undefined4 *)(ar4 + 0x300) = 0;
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(ar4 + 0x2e0) = 0;
    Class_12c1f0_m0_0f4108(ar4 + 0x170,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Class_12c1f0_m0_0f4108(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
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
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0x170,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0x300) = *(int *)(ar4 + 0x300) + 1;
  return ar4;
}



/* s_Item_pointer_is_NULL_CItemLi_0fe01c @ 8c0fe018 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Item_pointer_is_NULL_CItemLi_0fe01c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0x300) != 0) {
    if (ar5 == 0) {
      noop_102824(s_Item_pointer_is_NULL_CItemList___8c141e8f,0,0,0xd,0xffffffff);
      report_error_message
                (s_Item_pointer_is_NULL___8c141ebb,s_CItemList__TakeOutItem___8c141ed2,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0x300) = *(int *)(ar4 + 0x300) + -1;
    }
  }
  return ar4;
}



/* s_Invalid_Item_number_CItemLis_0fe110 @ 8c0fe108 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Invalid_Item_number_CItemLis_0fe110(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x300) < ar5)) {
    noop_102824(s_Invalid_Item_number__CItemList___8c141eeb,0,0,0xd,0xffffffff);
    report_error_message(s_Invalid_Item_number_8c141f18,s_CItemList__DeleteItem___8c141f2c,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}



/* FUN_8c0fe1b8 @ 8c0fe1b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe1b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0fddc4(ar4,ar5,ar6,ar7);
  FUN_8c0fddc4(ar4 + 0xc,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0x18,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0x19) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  return ar4;
}



/* FUN_8c0fe250 @ 8c0fe250 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe250(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(ar4 + 0x18) = 0;
    FUN_8c0da170(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0da170(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
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
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0xc,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
  return ar4;
}



/* s_Item_pointer_is_NULL_CNodePt_0fe338 @ 8c0fe334 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Item_pointer_is_NULL_CNodePt_0fe338(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0x38) != 0) {
    if (ar5 == 0) {
      noop_102824(s_Item_pointer_is_NULL_CNodePtrLis_8c141f84,0,0,0xd,0xffffffff);
      report_error_message
                (s_Item_pointer_is_NULL___8c141ebb,s_CNodePtrList__TakeOutItem___8c141fb3,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + -1;
    }
  }
  return ar4;
}



/* s_Invalid_Item_number_CNodePtr_0fe424 @ 8c0fe41c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Invalid_Item_number_CNodePtr_0fe424(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x38) < ar5)) {
    noop_102824(s_Invalid_Item_number__CNodePtrLis_8c141fcf,0,0,0xd,0xffffffff);
    report_error_message(s_Invalid_Item_number_8c141f18,s_CNodePtrList__DeleteItem___8c141fff,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}



/* FUN_8c0fe4c4 @ 8c0fe4c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fe4c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0;
}



/* FUN_8c0fe4f8 @ 8c0fe4f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe4f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0fdde4(ar4,ar5,ar6,ar7);
  FUN_8c0fdde4(ar4 + 0x58,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0xb0,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0xb1) = 0;
  *(undefined4 *)(ar4 + 0xd0) = 0;
  return ar4;
}



/* FUN_8c0fe59c @ 8c0fe59c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe59c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(ar4 + 0xb0) = 0;
    FUN_8c0c4ad0(ar4 + 0x58,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0c4ad0(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
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
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0x58,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0xd0) = *(int *)(ar4 + 0xd0) + 1;
  return ar4;
}



/* s_CWaterSnowList_TakeOut_0fe694 @ 8c0fe690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CWaterSnowList_TakeOut_0fe694(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0xd0) != 0) {
    if (ar5 == 0) {
      report_error_message
                (s_POne_pointer_is_NULL___8c14201a,s_CWaterSnowList__TakeOut___8c142031,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0xd0) = *(int *)(ar4 + 0xd0) + -1;
    }
  }
  return ar4;
}



/* s_CWaterSnowList_GetWaterSnowO_0fe76c @ 8c0fe764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CWaterSnowList_GetWaterSnowO_0fe76c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (*(code *)PTR_list_node_next_8c0fe7dc)(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(DAT_8c0fe7e0 + ar4) < ar5)) {
    (*(code *)PTR_report_error_message_8c0fe7f0)
              (PTR_s_GRAPHICS_COMMON_8c0fe7e4 + DAT_8c0fe7ec,
               PTR_s_GRAPHICS_COMMON_8c0fe7e4 + DAT_8c0fe7e8,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = (*(code *)PTR_list_node_next_8c0fe7dc)(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}



/* FUN_8c0fe7f4 @ 8c0fe7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0fe7f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0xd0) = 0;
  return 0xd0;
}



/* FUN_8c0fe82c @ 8c0fe82c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe82c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0fde34(ar4,ar5,ar6,ar7);
  FUN_8c0fde34(ar4 + 0x14,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0x28,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0x29) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return ar4;
}



/* FUN_8c0fe8c4 @ 8c0fe8c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fe8c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0x14,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
  return ar4;
}



/* s_CItemGLoadRequestList_TakeOu_0fe960 @ 8c0fe95c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CItemGLoadRequestList_TakeOu_0fe960(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0x48) != 0) {
    if (ar5 == 0) {
      report_error_message
                (s_GLoad_Unit_pointer_is_NULL___8c142084,s_CItemGLoadRequestList__TakeOut___8c1420a1
                 ,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + -1;
    }
  }
  return ar4;
}



/* s_CItemGLoadRequestList_GetPtr_0fea34 @ 8c0fea2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CItemGLoadRequestList_GetPtr_0fea34(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (*(code *)PTR_list_node_next_8c0feaa4)(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x48) < ar5)) {
    (*(code *)PTR_report_error_message_8c0feab4)
              (PTR_s_GRAPHICS_COMMON_8c0feaa8 + DAT_8c0feab0,
               PTR_s_GRAPHICS_COMMON_8c0feaa8 + DAT_8c0feaac,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = (*(code *)PTR_list_node_next_8c0feaa4)(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}



/* FUN_8c0feab8 @ 8c0feab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0feab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7,in_PR);
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
  (*(code *)PTR_FUN_8c0feb38)(ar4,PTR_FUN_8c0feb34,PTR_FUN_8c0feb30,0x10,0x23);
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
  (*(code *)PTR_FUN_8c0febec)(ar4,PTR_FUN_8c0febe8,PTR_FUN_8c0febe4,0x5c,DAT_8c0febe0);
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
  (*(code *)PTR_FUN_8c0fecac)(ar4,PTR_FUN_8c0feca8,PTR_FUN_8c0feca4,0x18,0x19);
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
  int ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = (*(code *)PTR_FUN_8c0feddc)(ar4 + 0x4c,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    (*(code *)PTR_report_error_message_8c0fedf0)
              (PTR_s_GRAPHICS_COMMON_8c0fede4 + DAT_8c0fedec,
               PTR_s_GRAPHICS_COMMON_8c0fede4 + DAT_8c0fede8,1,2);
  }
  else {
    *(undefined4 *)(ar5_00 + 8) = ar5;
    *(undefined4 *)(ar5_00 + 0xc) = ar6;
    *(undefined4 *)(ar5_00 + 0x10) = 1;
    (*(code *)PTR_FUN_8c0fede0)(ar4,ar5_00,ar6_00,ar7);
  }
  return ar5_00;
}



/* FUN_8c0fedf4 @ 8c0fedf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0fedf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)PTR_get_field_48_0feea8_8c0fee78)(ar4,ar5,ar6,ar7);
  ar4_00 = 0;
  if (iVar1 != 0) {
    ar4_00 = (*(code *)PTR_FUN_8c0fee7c)(ar4,ar5_00,ar6,ar7);
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(int *)(ar4_00 + 0x10) != 2) {
        ar6 = *(undefined4 *)(ar4_00 + 0xc);
        ar5_00 = ar5;
        iVar2 = (**(code **)(DAT_8c0fee80 + *(int *)(*(int *)(ar4_00 + 8) + 8)))
                          (*(int *)(ar4_00 + 8),ar5,ar6,ar7);
        if (iVar2 == 1) {
          *(undefined4 *)(ar4_00 + 0x10) = 2;
        }
      }
      ar4_00 = (*(code *)PTR_list_node_next_8c0fee84)(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
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

int s_Shell_0fef9c(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char *a5;
  int a4;
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_fr1;
  char cVar4;
  undefined8 uStack_cc;
  undefined1 auStack_c4 [8];
  int iStack_bc;
  int iStack_b8;
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
  
  cVar4 = '\0';
  puVar2 = (undefined4 *)auStack_c4;
  if (((int)ar5 < 0x11) && (-1 < (int)ar5)) {
                    /* WARNING: Switch is manually overridden */
    switch(ar5) {
    case (char *)0x0:
      iStack_88 = FUN_8c014028(0x9d8,ar5,ar6,ar7);
      iStack_50 = iStack_88;
      iStack_18 = iStack_88;
      if (iStack_88 != 0) {
        s_GRAPHICS_MUSHROOMERLINE_09b8e8(iStack_88,0,ar6,ar7);
      }
      a4 = iStack_18;
      (**(code **)(*(int *)(iStack_18 + 8) + 0x54))(iStack_18,ar4,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      break;
    case (char *)0x1:
      a4 = FUN_8c014028(0xfd4,ar5,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      iStack_8c = a4;
      iStack_54 = a4;
      iStack_1c = a4;
      if (a4 != 0) {
        s_GRAPHICS_MUSHROOMERLINE_09d9c2(a4,0,ar6,ar7);
        a4 = iStack_1c;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0x2:
      a4 = FUN_8c014028(0x1718,ar5,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      iStack_90 = a4;
      iStack_58 = a4;
      iStack_20 = a4;
      if (a4 != 0) {
        s_GRAPHICS_SQUIDLINE_0ac6a4(a4,0,ar6,ar7);
        a4 = iStack_20;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0x3:
      a4 = FUN_8c014028(0x10dc,ar5,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      iStack_ac = a4;
      iStack_74 = a4;
      iStack_3c = a4;
      if (a4 != 0) {
        s_GRAPHICS_HIGYOLINE_0851fa(a4,0,ar6,ar7);
        a4 = iStack_3c;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0x4:
      iStack_94 = FUN_8c014028(0x7e4,ar5,ar6,ar7);
      iStack_5c = iStack_94;
      iStack_24 = iStack_94;
      if (iStack_94 != 0) {
        s_GRAPHICS_HIGYOLINE_087ed2(iStack_94,0,ar6,ar7);
      }
      a4 = iStack_24;
      (**(code **)(*(int *)(iStack_24 + 8) + 0x54))(iStack_24,ar4,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      break;
    case (char *)0x5:
      a4 = FUN_8c014028(0x1150,ar5,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      iStack_b0 = a4;
      iStack_78 = a4;
      iStack_40 = a4;
      if (a4 != 0) {
        s_GRAPHICS_FROGMANLINE_036266(a4,0,ar6,ar7);
        a4 = iStack_40;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0x6:
      iStack_98 = FUN_8c014028(0x7e4,ar5,ar6,ar7);
      iStack_60 = iStack_98;
      iStack_28 = iStack_98;
      if (iStack_98 != 0) {
        s_GRAPHICS_FROGMANLINE_0384fa(iStack_98,0,ar6,ar7);
      }
      a4 = iStack_28;
      (**(code **)(*(int *)(iStack_28 + 8) + 0x54))(iStack_28,ar4,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      break;
    default:
      goto switchD_8c0fefc4_caseD_7;
    case (char *)0xa:
      a4 = FUN_8c014028(0x92c,ar5,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      iStack_b4 = a4;
      iStack_7c = a4;
      iStack_44 = a4;
      if (a4 != 0) {
        s_GRAPHICS_MOTHLINE_08a182(a4,0,ar6,ar7);
        a4 = iStack_44;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0xb:
      iStack_9c = FUN_8c014028(0x7ec,ar5,ar6,ar7);
      iStack_64 = iStack_9c;
      iStack_2c = iStack_9c;
      if (iStack_9c != 0) {
        s_GRAPHICS_MOTHLINE_099e76(iStack_9c,0,ar6,ar7);
      }
      a4 = iStack_2c;
      (**(code **)(*(int *)(iStack_2c + 8) + 0x54))(iStack_2c,ar4,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      break;
    case (char *)0xc:
      iStack_a0 = FUN_8c014028(0x7ec,ar5,ar6,ar7);
      iStack_68 = iStack_a0;
      iStack_30 = iStack_a0;
      if (iStack_a0 != 0) {
        s_GRAPHICS_MOTHLINE_0a4dea(iStack_a0,0,ar6,ar7);
      }
      a4 = iStack_30;
      (**(code **)(*(int *)(iStack_30 + 8) + 0x54))(iStack_30,ar4,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      break;
    case (char *)0xd:
      a4 = FUN_8c014028(0x2790,ar5,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      iStack_a4 = a4;
      iStack_6c = a4;
      iStack_34 = a4;
      if (a4 != 0) {
        s_GRAPHICS_SPIDERLINE_0a4592(a4,0,ar6,ar7);
        a4 = iStack_34;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0xe:
      a4 = FUN_8c014028(0x294,ar5,ar6,ar7);
      piVar3 = (int *)auStack_c4;
      iStack_a8 = a4;
      iStack_70 = a4;
      iStack_38 = a4;
      if (a4 != 0) {
        FUN_8c06740c(a4,0,ar6,ar7);
        a4 = iStack_38;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0xf:
      iStack_bc = FUN_8c014028(0x270,ar5,ar6,ar7);
      iStack_4c = iStack_bc;
      a4 = iStack_4c;
      piVar3 = (int *)auStack_c4;
      iStack_84 = iStack_bc;
      if (iStack_bc != 0) {
        FUN_8c0f58a4(iStack_bc,0,0,ar7);
        a4 = iStack_4c;
        piVar3 = (int *)auStack_c4;
      }
      break;
    case (char *)0x10:
      a5 = ar5;
      iStack_b8 = FUN_8c014028(0x210,ar5,ar6,ar7);
      iStack_48 = iStack_b8;
      iStack_80 = iStack_b8;
      if (iStack_b8 != 0) {
        if (cVar4 == '\0') {
          puVar1 = (undefined8 *)((int)&uStack_cc + 4);
          uStack_cc = CONCAT44(0x3f800000,(undefined4)uStack_cc);
        }
        else {
          puVar1 = &uStack_cc;
          uStack_cc = CONCAT44(0x3f800000,extraout_fr1);
        }
        ar6 = 0x10;
        a5 = s_Shell_8c14212e;
        FUN_8c0f54ec(*(undefined4 *)((int)puVar1 + 0x80),s_Shell_8c14212e,0x10,ar7,
                     *(undefined4 *)puVar1,*(undefined4 *)((int)puVar1 + 4));
        puVar2 = (undefined4 *)((int)puVar1 + 4);
      }
      a4 = *(int *)((int)puVar2 + 0x7c);
      (**(code **)(*(int *)(a4 + 8) + 0xf8))(a4,a5,ar6,ar7);
      piVar3 = puVar2;
    }
  }
  else {
switchD_8c0fefc4_caseD_7:
    uStack_cc = CONCAT44(5,(undefined4)uStack_cc);
    report_error_message(s_Invalid_item_no_8c142134,s_CHeapForItem__NewMemory___8c142144,1,2);
    a4 = 0;
    piVar3 = (int *)auStack_c4;
  }
  if (a4 == 0) {
    piVar3[-1] = 5;
    report_error_message(s_Luck_of_memory___8c14215e,s_CHeapForItem__NewItemMemory___8c14216f,1,2);
  }
  *piVar3 = (int)ar5;
  piVar3[1] = *piVar3 * 4 + -0x73bbecb8;
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff558(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126658,ar5,ar6,ar7);
  uVar3 = 0x8c4412b8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4412b8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126668,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4412c4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4412c4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126678,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4412d0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4412d0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126688,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c4412dc,ar7);
  uVar1 = 4;
  FUN_8c010120(0x8c4412f4,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0ff6a0,0x8c4412e8,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c441324,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  global_list_push(0,FUN_8c0ff67c,0x8c441318,uVar1);
  if (cVar4 == '\0') {
    _DAT_8c126698 = CONCAT44(_UNK_8c12669c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c12669c) is written */
  }
  else {
    _DAT_8c126698 = 0xffffffff00800000;
  }
  return 0x8c125864;
}



/* FUN_8c0ff67c @ 8c0ff67c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff67c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c441324,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}



/* FUN_8c0ff6a0 @ 8c0ff6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff6a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c4412f4,free_if_nonnull_wrap_0247b0,4,9,in_PR);
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ff730 @ 8c0ff730 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ff77a) */
/* WARNING: Removing unreachable block (ram,0x8c0ff770) */
/* WARNING: Removing unreachable block (ram,0x8c0ff760) */
/* WARNING: Removing unreachable block (ram,0x8c0ff756) */
/* WARNING: Removing unreachable block (ram,0x8c0ff746) */
/* WARNING: Removing unreachable block (ram,0x8c0ff73c) */
/* WARNING: Removing unreachable block (ram,0x8c0ff744) */
/* WARNING: Removing unreachable block (ram,0x8c0ff74e) */
/* WARNING: Removing unreachable block (ram,0x8c0ff75e) */
/* WARNING: Removing unreachable block (ram,0x8c0ff768) */
/* WARNING: Removing unreachable block (ram,0x8c0ff772) */
/* WARNING: Removing unreachable block (ram,0x8c0ff77c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff730(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  undefined4 uVar1;
  undefined4 in_PR;
  
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0x43f00000;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0x44200000;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0x44200000;
  *(undefined4 *)(ar4 + 0x3c) = 0x43f00000;
  *(undefined4 *)(ar4 + 0x40) = 0xff000000;
  *(undefined4 *)(ar4 + 0x44) = 0xff000000;
  *(undefined4 *)(ar4 + 0x48) = 0xff000000;
  *(undefined4 *)(ar4 + 0x4c) = 0xff000000;
  uVar1 = 4;
  ar6_00 = ar4 + 0x40;
  FUN_8c016318(ar4 + 0xc,ar4 + 0x20,ar6_00,4,in_PR);
  uVar1 = FUN_8c015198(ar4 + 0xc,0x20,ar6_00,uVar1,in_PR);
  return uVar1;
}



/* FUN_8c0ff7d4 @ 8c0ff7d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ff7d4(int *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  undefined1 *ar5_00;
  float fVar3;
  code *pcVar5;
  double dVar4;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  iVar1 = *ar4;
  if (iVar1 == 0) {
    piVar2 = ar4 + 2;
    if (cVar7 == '\0') {
      *piVar2 = -0x3de00000;
    }
    else {
      piVar2[0] = -0x3de00000;
      piVar2[1] = -0x73fc9678;
    }
    FUN_8c036988(ar4[1],ar5_00,ar6,ar7);
    FUN_8c078fb8(ar4[1],ar5_00,ar6,ar7);
    (**(code **)(*(int *)(ar4[1] + 8) + 0x6c))(ar4[1],ar5_00,ar6,ar7);
    *ar4 = 1;
  }
  else if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 2) = in_xd0;
    }
    iVar1 = FUN_8c1001e0(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      *ar4 = 3;
    }
    if (cVar7 == '\0') {
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0x41700000;
    }
    else {
      fVar3 = 15.0;
      pcVar5 = FUN_8c2595aa;
    }
    if (cVar6 != '\0' || (float)pcVar5 <= fVar3) {
      piVar2 = ar4 + 2;
      if (cVar7 == '\0') {
        *piVar2 = 0x41700000;
      }
      else {
        piVar2[0] = 0x41700000;
        piVar2[1] = -0x73da6a56;
      }
      *ar4 = 2;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_8c1001e0(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      *ar4 = 3;
    }
  }
  else if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0xc2200000;
    }
    else {
      *(undefined8 *)(ar4 + 2) = in_xd0;
      fVar3 = -40.0;
      pcVar5 = FUN_8c036988;
    }
    if (cVar6 != '\0' || fVar3 <= (float)pcVar5) {
      (**(code **)(*(int *)(ar4[1] + 8) + 0x6c))(ar4[1],ar5_00,ar6,ar7);
      *ar4 = 4;
      ar5_00 = auStack_2c;
      FUN_8c2595aa(0,ar5_00,ar6,ar7);
    }
  }
  (**(code **)(*(int *)(ar4[1] + 8) + 0x1c))(ar4[1],ar5_00,ar6,ar7);
  iVar1 = *ar4;
  Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return iVar1;
}



/* FUN_8c0ff928 @ 8c0ff928 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ff966) */
/* WARNING: Removing unreachable block (ram,0x8c0ff94e) */
/* WARNING: Removing unreachable block (ram,0x8c0ff950) */
/* WARNING: Removing unreachable block (ram,0x8c0ff968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ff928(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined8 *a5;
  undefined4 uVar4;
  undefined8 *a6;
  undefined4 in_fr1;
  undefined8 uVar5;
  char cVar6;
  undefined4 in_stack_ffffff50;
  undefined2 uVar7;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [18];
  undefined8 uStack_48;
  
  cVar6 = '\0';
  if (DAT_8c4413c8 == '\0') {
    _DAT_8c4413c4 = 0xc1700000;
    _DAT_8c4413c8 = CONCAT31(DAT_8c4413c8_1,1);
  }
  if (DAT_8c4413d0 == '\0') {
    _DAT_8c4413cc = 0xc1400000;
    _DAT_8c4413d0 = CONCAT31(DAT_8c4413d0_1,1);
  }
  a5 = ar5;
  a6 = ar6;
  uVar3 = ar7;
  FUN_8c2363e8(auStack_90,ar5,ar6,ar7,in_stack_ffffff50);
  if (cVar6 == '\0') {
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
  uStack_a4 = 0x42c80000;
  (**(code **)(*(int *)(*(int *)(ar4 + 4) + 8) + 0x120))(*(int *)(ar4 + 4),a5,a6,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (cVar6 == '\0') {
    uStack_48 = CONCAT44(uStack_48._4_4_,uVar4);
    uVar4 = uStack_a4;
    uVar5 = uStack_48;
  }
  uStack_48 = uVar5;
  uStack_a4 = uVar4;
  FUN_8c257170(&uStack_a4,a5,a6,uVar3);
  uVar4 = ar7;
  FUN_8c2595aa(2,ar7,a6,uVar3);
  FUN_8c257148(0x2e38,uVar4,a6,uVar3);
  ar4_00 = auStack_90;
  FUN_8c2572ec(ar4_00,uVar4,a6,uVar3);
  FUN_8c219038(ar4_00,uVar4,a6,uVar3);
  FUN_8c219070(ar4_00,uVar4,a6,uVar3);
  FUN_8c21907e(ar4_00,uVar4,a6,uVar3);
  FUN_8c0f4b44(*(undefined4 *)(ar4 + 4),uVar4,a6,uVar3);
  FUN_8c256328(0,uVar4,a6,uVar3,in_stack_ffffff50);
  FUN_8c25b5d0(0,uVar4,a6,uVar3,in_stack_ffffff50);
  iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 4),uVar4,a6,uVar3);
  if (iVar1 == 0xd) {
    FUN_8c25b5d0(0,uVar4,a6,uVar3,in_stack_ffffff50);
  }
  uVar7 = (undefined2)((uint)in_stack_ffffff50 >> 0x10);
  if (iVar1 == 10) {
    uVar2 = (**(code **)(*(int *)(*(int *)(ar4 + 4) + 8) + 0x148))(*(int *)(ar4 + 4),uVar4,a6,uVar3)
    ;
    if ((short)uVar2 != 3) {
      FUN_8c25b5d0(0,uVar4,a6,uVar3,CONCAT22(uVar7,(short)uVar2));
    }
  }
  (**(code **)(*(int *)(*(int *)(ar4 + 4) + 8) + 0x38))(*(int *)(ar4 + 4),uVar4,a6,uVar3);
  FUN_8c256210(1,uVar4,a6,uVar3);
  FUN_8c016340(ar4 + 0xc,uVar4,a6,uVar3);
  if (cVar6 != '\0') {
    auStack_90[0] = 0xff000000;
  }
  uStack_94 = 0x43700000;
  uStack_98 = 0x43a00000;
  uStack_9c = 0x43f00000;
  uStack_a0 = 0x44200000;
  uStack_a4 = 0x43fa0000;
  FUN_8c257170(&uStack_a4,uVar4,a6,uVar3);
  FUN_8c2595aa(0,ar7,a6,uVar3);
  uVar3 = FUN_8c259046(0xff000000,0xff000000,0xff000000,uVar3);
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
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_015c94(ar4 + 0x15c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x14c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x13c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 300,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0ff6f0(ar4 + 0xd8,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_0ffcb6 @ 8c0ffcb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_0ffcb6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  wchar16 *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 2;
  uVar2 = 0x8c4413f4;
  FUN_8c239170(0x8c4413d4,0x8c4413dc,0x8c4413f4,2);
  FUN_8c015ccc(ar4 + 0x15c,0x8c4413d4,uVar2,ar7_00,ar5);
  ar5_00 = u____8c1421cc;
  FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,uVar2,ar7_00,ar5);
  FUN_8c014a0c(ar4 + 0x15c,ar5_00,uVar2,ar7_00);
  uVar2 = get_field_1c_0ffd74(ar4 + 0x15c,ar5_00,uVar2,ar7_00);
  iVar1 = FUN_8c02100c(ar5,s_UsrPointer_pvm_8c142254,s_GRAPHICS_8c142263,uVar2);
  if (iVar1 == -1) {
    report_error_message(s_Failed_to_load_user_pointer_text_8c14226c,&DAT_8c142292,1,2);
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
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = input_is_mask_set_10000_01ec68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
  if ((((iVar1 == 0) &&
       (iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0))
      && (*(int *)(ar4 + 0x59c) == 0)) && (*(int *)(ar4 + 0x188) != 6)) {
    *(undefined4 *)(ar4 + 0x188) = 0;
  }
  if (((-1 < *(short *)(ar4 + 0x18c)) && (*(int *)(ar4 + 0x188) == 0)) &&
     ((*(short *)(ar4 + 0x18c) = *(short *)(ar4 + 0x18c) + -1, *(int *)(ar4 + 0x188) == 0 &&
      (*(short *)(ar4 + 0x18c) < 1)))) {
    *(undefined4 *)(ar4 + 0x188) = 6;
  }
  iVar1 = input_get_word_a538(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
  iVar2 = input_get_word_a53c(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x42fe0000,(float)iVar1);
  }
  else {
    dVar4 = 7.13545887092076e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x14c) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x14c) = in_xd0;
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x42fe0000,(float)iVar2);
  }
  else {
    dVar4 = 7.13545887092076e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x150) = fVar3;
    dVar4 = (double)CONCAT44(0x41000000,*(undefined4 *)(ar4 + 0x14c));
  }
  else {
    *(undefined8 *)(ar4 + 0x150) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x14c);
    dVar4 = 6.79577441102687e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x13c) = fVar3;
    dVar4 = (double)CONCAT44(0x41000000,*(undefined4 *)(ar4 + 0x150));
  }
  else {
    *(undefined8 *)(ar4 + 0x13c) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x150);
    dVar4 = 6.79577441102687e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x140) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x140) = in_xd0;
  }
  iVar1 = FUN_8c01f398(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
  if (iVar1 == 0) {
    *(short *)(ar4 + 0x18e) = *(short *)(ar4 + 0x18e) + 1;
  }
  else {
    *(undefined2 *)(ar4 + 0x18e) = 0;
  }
  FUN_8c1016f0(ar4,ar5,ar6,ar7);
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
  undefined4 ar5_00;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0x188) != 6) {
    ar5_00 = *(undefined4 *)(ar4 + 0x188);
    FUN_8c0fffec(ar4 + 0x15c,ar5_00,ar6,ar7,in_PR);
    (**(code **)(*(int *)(ar4 + 0x15c) + 0x14))((int *)(ar4 + 0x15c),ar5_00,ar6,ar7);
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


