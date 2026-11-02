/* Seaman (USA) region 0x8c0a0000-0x8c0b0000 (Ghidra decompiler) */

/* FUN_8c0a0040 @ 8c0a0040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a0040(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    a6 = ar6;
    (*(code *)PTR_FUN_8c0a00e8)(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c0a00ec + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0xf) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      (*(code *)PTR_FUN_8c0a00f0)(ar4,0,a6,ar7);
      ar6 = a6;
    }
    else {
      (*(code *)PTR_FUN_8c0a00f0)(ar4,3,a6,ar7);
      (*(code *)PTR_FUN_8c0a00f4)(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c0a00f0)(ar4,2,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0a00f8 @ 8c0a00f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a00f8(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  int a6;
  
  a5 = ar5;
  a6 = ar6;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 3) {
    iVar1 = (*(code *)PTR_FUN_8c0a017c)(ar4,ar5,a6,ar7);
  }
  else if ((((iVar1 != 6) && (iVar1 == 10)) &&
           (iVar1 = (*(code *)PTR_FUN_8c0a0180)(*(undefined4 *)(ar6 + 4),a5,a6,ar7), iVar1 != 0)) &&
          (iVar1 == 1)) {
    iVar1 = 0x40;
    *(undefined4 *)(ar4 + 0x40) = 0xe;
  }
  return iVar1;
}



/* FUN_8c0a0184 @ 8c0a0184 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0a0184(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0xc;
  if ((iVar2 < 0xd) && (puVar1 = (undefined *)0x5, 4 < iVar2)) {
    puVar1 = (&switchD_8c0a01a0::switchdataD_8c0a01a4)[iVar2 + -5];
    switch(iVar2) {
    case 5:
      *(undefined4 *)(ar4 + 0x40) = 2;
      *(undefined4 *)(ar4 + 4) = 0;
      puVar1 = (undefined *)0x1e;
      *(undefined4 *)(ar4 + 8) = 0x1e;
      break;
    case 8:
      *(undefined4 *)(ar4 + 0x40) = 2;
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x1e;
      puVar1 = DAT_8c0a021c;
      *(int *)(DAT_8c0a021c + ar4) = *(int *)(DAT_8c0a021c + ar4) + 1;
      break;
    case 9:
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
      puVar1 = (undefined *)0xf;
      *(undefined4 *)(ar4 + 8) = 0xf;
      break;
    case 0xc:
      *(undefined1 *)(DAT_8c0a0220 + ar4) = 2;
      puVar1 = (undefined *)0xf;
      *(undefined4 *)(ar4 + 8) = 0xf;
    }
  }
  return puVar1;
}



/* FUN_8c0a0224 @ 8c0a0224 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0a0224(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    (*(code *)PTR_get_field_8_066620_8c0a026c)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0a0270;
  }
  else {
    (*(code *)PTR_get_field_8_066620_8c0a026c)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0a0274;
  }
  return puVar1;
}



/* FUN_8c0a0278 @ 8c0a0278 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a045a) */
/* WARNING: Removing unreachable block (ram,0x8c0a048c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a0278(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *a5;
  undefined4 *a6;
  undefined1 *a6_00;
  undefined4 *a7;
  undefined4 *puVar3;
  float fVar4;
  ulonglong in_dr0;
  double dVar5;
  undefined4 in_fr3;
  undefined4 uVar7;
  double dVar8;
  undefined8 in_xd0;
  int iVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 *puStack_dc;
  int aiStack_d8 [4];
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 auStack_78 [4];
  undefined4 auStack_68 [23];
  float fVar6;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0a02e8)((int)aiStack_d8 + DAT_8c0a02e4,ar5,ar6,ar7);
  a7 = &uStack_84;
  a6 = &uStack_80;
  puVar3 = &uStack_7c;
  (**(code **)(DAT_8c0a02ec + *ar5))(ar5,puVar3,a6,a7);
  iVar9 = ar4;
  iStack_94 = (*(code *)PTR_get_field_4_05eed8_8c0a02f0)(ar4,puVar3,a6,a7);
  if (iStack_94 != 1) {
    if (iStack_94 == 8) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_7c,in_fr3);
        dVar5 = (double)CONCAT44(DAT_8c0a03d0,uStack_7c);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_78[0],uStack_7c);
        dVar5 = (double)CONCAT44(DAT_8c0a03d4,DAT_8c0a03d0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar5 * dVar5;
      }
      uStack_7c = SUB84(dVar8,0);
      uVar1 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_80,uStack_7c);
        dVar5 = (double)CONCAT44(DAT_8c0a03d4,uStack_80);
        uStack_7c = uVar1;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_7c,uStack_80);
        dVar5 = (double)CONCAT44(PTR_rand_8c0a03d8,DAT_8c0a03d4);
        auStack_78[0] = uVar1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar5 * dVar5;
      }
      uStack_80 = SUB84(dVar8,0);
      uVar1 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_84,uStack_80);
        dVar5 = (double)CONCAT44(DAT_8c0a03d0,uStack_84);
        uStack_80 = uVar1;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_80,uStack_84);
        dVar5 = (double)CONCAT44(DAT_8c0a03d4,DAT_8c0a03d0);
        uStack_7c = uVar1;
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
      uVar1 = SUB84(dVar5,0);
      uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uStack_84 = uVar2;
      if (in_FPSCR_SZ != '\0') {
        uStack_84 = SUB84(dVar8,0);
        uStack_80 = uVar2;
      }
      uVar2 = (*(code *)PTR_rand_8c0a03d8)(iVar9,puVar3,a6,a7);
      uVar7 = SUB84(dVar8,0);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_7c,uVar1);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_78[0],uStack_7c);
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar9 = (int)dVar8;
      }
      uStack_98 = uVar2;
      iStack_c4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0a03dc)(uVar2,iVar9,a6,a7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)iStack_c4,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iStack_c4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x28) = dVar8;
      }
      uStack_a0._4_4_ = (*(code *)PTR_rand_8c0a03d8)(uVar2,iVar9,a6,a7);
      (**(code **)(DAT_8c0a03e0 + *ar5))(ar5,iVar9,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        uStack_a0 = (double)CONCAT44(uStack_a0._4_4_,(int)((ulonglong)dVar8 >> 0x20));
        dVar5 = (double)CONCAT44(uStack_80,SUB84(dVar8,0));
      }
      else {
        dVar5 = (double)CONCAT44(uStack_7c,uStack_80);
        uStack_a0 = dVar8;
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        iVar9 = (int)dVar5;
      }
      uVar1 = uStack_a0._4_4_;
      iStack_c8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0a03dc)(uStack_a0._4_4_,iVar9,a6,a7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)iStack_c8,uVar7);
      }
      else {
        dVar8 = (double)iStack_c8;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0a03e4,(undefined4)uStack_a0);
      }
      else {
        dVar5 = (double)CONCAT44(uRam8c0a03e8,DAT_8c0a03e4);
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
      uStack_a4 = (*(code *)PTR_rand_8c0a03d8)(uVar1,iVar9,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_84,uVar2);
      }
      else {
        dVar8 = (double)CONCAT44(uStack_80,uStack_84);
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar9 = (int)dVar8;
      }
      aiStack_d8[3] = (*(code *)PTR_libgcc_divide_helper_01031c_8c0a03dc)(uStack_a4,iVar9,a6,a7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)aiStack_d8[3],SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)aiStack_d8[3];
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar8;
      }
    }
    else if (iStack_94 == 0xb) {
      iStack_b4 = (**(code **)(DAT_8c0a04f8 + *ar5))(ar5,2,a6,a7);
      if (iStack_b4 == 0) {
        (*(code *)PTR_FUN_8c0a04fc)(ar4,2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = DAT_8c0a0500;
          *(undefined4 *)(ar4 + 0x2c) = DAT_8c0a0500;
          *(undefined4 *)(ar4 + 0x30) = DAT_8c0a0500;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = CONCAT44(uRam8c0a0504,DAT_8c0a0500);
          *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uRam8c0a0504,DAT_8c0a0500);
          *(ulonglong *)(ar4 + 0x30) = CONCAT44(uRam8c0a0504,DAT_8c0a0500);
        }
      }
      else {
        for (puVar3 = (undefined4 *)0x0; iStack_c0 = (**(code **)(DAT_8c0a06bc + *ar5))(ar5,2,a6,a7)
            , (int)puVar3 < iStack_c0; puVar3 = (undefined4 *)((int)puVar3 + 1)) {
          uStack_b8 = (**(code **)(DAT_8c0a0668 + *ar5))(ar5,2,puVar3,a7);
          a7 = &uStack_90;
          a6_00 = auStack_8c;
          a5 = auStack_88;
          (*(code *)PTR_FUN_8c0a066c)(uStack_b8,a5,a6_00,a7);
          (*(code *)PTR_Vec3_set_xyz_8c0a0674)((int)aiStack_d8 + DAT_8c0a0670,a5,a6_00,a7);
          (*(code *)PTR_vec3_copy_8c02b5fc_8c0a067c)
                    ((int)aiStack_d8 + DAT_8c0a0678,(int)aiStack_d8 + DAT_8c0a0670,a6_00,a7);
          puStack_dc = (undefined4 *)((int)aiStack_d8 + DAT_8c0a0680);
          (*(code *)PTR_FUN_8c0a068c)(PTR_DAT_8c0a0688,(int)&puStack_dc + DAT_8c0a0684,a6_00,a7);
          (*(code *)PTR_Vec3_ctor_copy_8c0a0694)
                    ((int)aiStack_d8 + DAT_8c0a0690,(int)aiStack_d8 + DAT_8c0a0680,a6_00,a7);
          (*(code *)PTR_Vec3_dtor_8c0a0698)((int)aiStack_d8 + DAT_8c0a0680,0xffffffff,a6_00,a7);
          (*(code *)PTR_object_dtor_delete_8c0a069c)
                    ((int)aiStack_d8 + DAT_8c0a0678,0xffffffff,a6_00,a7);
          uVar1 = 2;
          a6 = puVar3;
          uStack_bc = (**(code **)(DAT_8c0a0668 + *ar5))(ar5,2,puVar3,a7);
          puStack_dc = auStack_68;
          (*(code *)PTR_FUN_8c0a06a0)(uStack_bc,uVar1,a6,a7);
          puStack_dc = auStack_78;
          (*(code *)PTR_Vec3_add_8c0a06a8)(auStack_68,(int)&puStack_dc + DAT_8c0a06a4,a6,a7);
          (*(code *)PTR_Vec3_assign_8c0a06b0)((int)aiStack_d8 + DAT_8c0a06ac,auStack_78,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c0a0698)(auStack_78,0xffffffff,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c0a0698)(auStack_68,0xffffffff,a6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)aiStack_d8 + DAT_8c0a06ac);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)((int)aiStack_d8 + DAT_8c0a06ac);
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)((int)aiStack_d8 + DAT_8c0a06b4);
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)((int)aiStack_d8 + DAT_8c0a06b4);
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)((int)aiStack_d8 + DAT_8c0a06b8);
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = *(undefined8 *)((int)aiStack_d8 + DAT_8c0a06b8);
          }
          (*(code *)PTR_Vec3_dtor_8c0a0698)((int)aiStack_d8 + DAT_8c0a0690,0xffffffff,a6,a7);
          (*(code *)PTR_object_dtor_delete_8c0a069c)
                    ((int)aiStack_d8 + DAT_8c0a0670,0xffffffff,a6,a7);
        }
      }
    }
    else if ((iStack_94 == 0xd) && (*(int *)(ar4 + 0x40) == 9)) {
      uVar1 = (*(code *)PTR_rand_8c0a0420)(iVar9,puVar3,a6,a7);
      uVar2 = 2;
      uStack_a8 = uVar1;
      aiStack_d8[2] = (*(code *)PTR_libgcc_divide_helper_01031c_8c0a0424)(uVar1,2,a6,a7);
      if (aiStack_d8[2] == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = uStack_7c;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(auStack_78[0],uStack_7c);
      }
      uVar1 = (*(code *)PTR_rand_8c0a049c)(uVar1,uVar2,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0a04a0,uStack_80);
      }
      else {
        in_xd0 = CONCAT44(uStack_7c,uStack_80);
        dVar8 = (double)CONCAT44(PTR_libgcc_divide_helper_01031c_8c0a04a4,DAT_8c0a04a0);
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        iVar9 = (int)(dVar8 - dVar8);
      }
      uStack_ac = uVar1;
      aiStack_d8[1] = (*(code *)PTR_libgcc_divide_helper_01031c_8c0a04a4)(uVar1,iVar9,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0a04a8,(float)aiStack_d8[1]);
      }
      else {
        dVar8 = (double)CONCAT44(_DAT_8c0a04ac,DAT_8c0a04a8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x2c) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c) = in_xd0;
      }
      uStack_b0 = (*(code *)PTR_rand_8c0a049c)(uVar1,iVar9,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(_DAT_8c0a04ac,uStack_84);
      }
      else {
        in_xd0 = CONCAT44(uStack_80,uStack_84);
        dVar8 = (double)CONCAT44(_DAT_8c0a04b0,_DAT_8c0a04ac);
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        iVar9 = (int)(dVar8 - dVar8);
      }
      aiStack_d8[0] = (*(code *)PTR_libgcc_divide_helper_01031c_8c0a04a4)(uStack_b0,iVar9,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(_DAT_8c0a04b0,(float)aiStack_d8[0]);
      }
      else {
        dVar8 = (double)CONCAT44(uRam8c0a04b4,_DAT_8c0a04b0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x30) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0a0698)((int)aiStack_d8 + DAT_8c0a06ac,0xffffffff,a6,a7);
  return uVar1;
}



/* FUN_8c0a06c0 @ 8c0a06c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a06c0(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined1 *)(DAT_8c0a06ec + ar4) = *ar5;
  uVar1 = (*(code *)PTR_FUN_8c0a06f4)(ar4 + DAT_8c0a06f0,ar5 + 8,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a06f8 @ 8c0a06f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a06f8(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar5 = *(undefined1 *)(DAT_8c0a0724 + ar4);
  uVar1 = (*(code *)PTR_FUN_8c0a072c)(ar4 + DAT_8c0a0728,ar5 + 8,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a0730 @ 8c0a0730 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a0730(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a07d8)(PTR_DAT_8c0a07d4,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a07e0;
  uVar2 = DAT_8c0a07dc;
  (*(code *)PTR_global_list_push_8c0a07e4)(uVar1,PTR_Vec3_dtor_8c0a07e0,DAT_8c0a07dc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a07d8)(PTR_DAT_8c0a07e8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a07e0;
  uVar2 = DAT_8c0a07ec;
  (*(code *)PTR_global_list_push_8c0a07e4)(uVar1,PTR_Vec3_dtor_8c0a07e0,DAT_8c0a07ec,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a07d8)(PTR_DAT_8c0a07f0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a07e0;
  uVar2 = DAT_8c0a07f4;
  (*(code *)PTR_global_list_push_8c0a07e4)(uVar1,PTR_Vec3_dtor_8c0a07e0,DAT_8c0a07f4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a07d8)(PTR_DAT_8c0a07f8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a07e0;
  uVar2 = DAT_8c0a07fc;
  (*(code *)PTR_global_list_push_8c0a07e4)(uVar1,PTR_Vec3_dtor_8c0a07e0,DAT_8c0a07fc,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0a0800 = *(undefined4 *)DAT_8c0a0804;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0a0800 = *DAT_8c0a0804;
  }
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0a07d8)(PTR_DAT_8c0a0810,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0a07e4)(uVar2,PTR_Vec3_dtor_8c0a07e0,DAT_8c0a0814,ar7);
  return uVar2;
}



/* FUN_8c0a0818 @ 8c0a0818 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0a0818(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0a086c)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0a0870;
  (*(code *)PTR_Vec3_ctor_zero_8c0a0878)((int)ar4 + DAT_8c0a0874,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0a0880)((int)ar4 + DAT_8c0a087c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0a0878)((int)ar4 + DAT_8c0a0884,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0a0878)((int)ar4 + DAT_8c0a0888,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a088c)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0a0890 @ 8c0a0890 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a0890(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint extraout_fr1;
  uint extraout_fr1_00;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [16];
  
  *(undefined **)(DAT_8c0a0910 + ar4) = PTR_PTR_8c0a0914;
  *(undefined4 *)(DAT_8c0a0918 + ar4) = 0xf;
  (*(code *)PTR_Vec3_set_xyz_8c0a091c)(auStack_14,ar5,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0a0924)(ar4 + DAT_8c0a0920,auStack_14,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c0a0928)(auStack_14,0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a092c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0a092c) = (ulonglong)extraout_fr1;
  }
  *(undefined4 *)(DAT_8c0a0930 + ar4) = 0;
  (*(code *)PTR_FUN_8c0a0938)(ar4,DAT_8c0a0934,ar6,ar7);
  *(undefined4 *)(DAT_8c0a093c + ar4) = 0;
  *(undefined4 *)(DAT_8c0a0940 + ar4) = 0;
  *(undefined4 *)(DAT_8c0a0944 + ar4) = 1;
  *(undefined4 *)(DAT_8c0a0948 + ar4) = 0;
  iVar1 = DAT_8c0a094c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a094c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0a094c) = (ulonglong)extraout_fr1_00;
  }
  return iVar1;
}



/* Class_12ad14_m0_0a0950 @ 8c0a0950 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12ad14_m0_0a0950(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0a09c4;
    (*(code *)PTR_Vec3_dtor_8c0a09cc)((int)ar4 + DAT_8c0a09c8,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a09cc)((int)ar4 + DAT_8c0a09d0,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0a09d8)((int)ar4 + DAT_8c0a09d4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a09cc)((int)ar4 + DAT_8c0a09dc,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c0a09e0)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0a09e4)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12ad14_m1_0a09e8 @ 8c0a09e8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int Class_12ad14_m1_0a09e8(int ar4,undefined4 *ar5,undefined4 ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0;
  float fVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined8 in_xd0;
  bool bVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_78;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  double dVar5;
  
  (*(code *)PTR_Class_129cbc_m1_031598_8c0a0bf0)(ar4,ar5,ar6,ar7);
  uVar3 = 1;
  *(undefined4 *)(DAT_8c0a0bf4 + ar4) = 1;
  if ((*(int *)(DAT_8c0a0bf8 + ar4) == 0xb) || (*(int *)(DAT_8c0a0bf8 + ar4) == 0xc)) {
    (*(code *)PTR_FUN_8c0a0bfc)(auStack_1c,ar5[3],ar6,ar7);
    ar7 = auStack_1c;
    ar6 = ar5[6];
    uVar3 = (*(code *)PTR_FUN_8c0a0c00)(ar4,*ar5,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a0c04)(auStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    iVar2 = (*(code *)PTR_FUN_8c0a0c08)(ar4,ar5,ar6,ar7);
    if (iVar2 != 3) {
      (*(code *)PTR_FUN_8c0a0bfc)(auStack_28,ar5[3],ar6,ar7);
      ar7 = auStack_28;
      ar6 = ar5[6];
      uVar3 = (*(code *)PTR_FUN_8c0a0c00)(ar4,*ar5,ar6,ar7);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a0c04)(auStack_28,0xffffffff,ar6,ar7);
      uStack_78._4_4_ = uVar3;
    }
  }
  (*(code *)PTR_FUN_8c0a0c0c)(*ar5,uVar3,ar6,ar7);
  if (*(int *)(DAT_8c0a0c10 + ar4) == 1) {
    uVar3 = 1;
    (*(code *)PTR_FUN_8c0a0c0c)(*ar5,1,ar6,ar7);
  }
  if ((*(int *)(DAT_8c0a0bf8 + ar4) != 6) && (*(int *)(DAT_8c0a0bf8 + ar4) != 0xb)) {
    uVar3 = *(undefined4 *)(ar5[1] + 4);
    (*(code *)PTR_FUN_8c0a0c14)(ar4,uVar3,ar6,ar7);
  }
  (**(code **)(DAT_8c0a0c18 + *(int *)ar5[6]))((int *)ar5[6],uVar3,ar6,ar7);
  uVar1 = in_dr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_78;
  }
  uStack_78 = uVar1;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),in_fr3);
    dVar5 = (double)CONCAT44(DAT_8c0a0c1c,(int)uStack_78);
  }
  else {
    dVar7 = *(double *)(*(int *)ar5[1] + 4);
    dVar5 = (double)CONCAT44(_DAT_8c0a0c20,DAT_8c0a0c1c);
    in_xd0 = uStack_78;
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) - fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    bVar8 = (float)((ulonglong)dVar7 >> 0x20) < fVar4;
  }
  else {
    dVar5 = dVar5 - dVar5;
    bVar8 = dVar7 < dVar5;
  }
  fVar4 = SUB84(dVar5,0);
  if (!bVar8) {
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x18);
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar4) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(_DAT_8c0a0c20,*(undefined4 *)(ar4 + 0x18));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x18);
        dVar7 = (double)CONCAT44(PTR_Vec3_length_8c0a0c24,_DAT_8c0a0c20);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x18) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x18) = in_xd0;
      }
      (*(code *)PTR_Vec3_length_8c0a0c24)(ar4 + 0x14,uVar3,ar6,ar7);
    }
  }
  (*(code *)PTR_Vec3_scale_8c0a0c28)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
  (*(code *)PTR_Vec3_add_8c0a0c30)(auStack_38,ar4 + DAT_8c0a0c2c,ar6,ar7);
  (*(code *)PTR_Vec3_add_8c0a0c30)(auStack_48,ar4 + DAT_8c0a0c34,ar6,ar7);
  (*(code *)PTR_Vec3_add_8c0a0c30)(auStack_58,ar4 + DAT_8c0a0c38,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0a0c3c)(ar4 + 4,auStack_68,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a0c40)(auStack_68,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a0c40)(auStack_58,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a0c40)(auStack_48,0xffffffff,ar6,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0a0c40)(auStack_38,0xffffffff,ar6,ar7);
  (*(code *)PTR_vec3_clear_8c0a0c44)(ar4 + DAT_8c0a0c38,uVar3,ar6,ar7);
  iVar2 = DAT_8c0a0c48;
  *(undefined4 *)(DAT_8c0a0c48 + ar4) = 0;
  return iVar2;
}



/* FUN_8c0a0c4c @ 8c0a0c4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a0c4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0a0c78)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0a0c7c + ar4) = 0;
  *(undefined4 *)(DAT_8c0a0c80 + ar4) = 1;
  iVar1 = DAT_8c0a0c84;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a0c84) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0a0c84) = (ulonglong)extraout_fr1;
  }
  return iVar1;
}



/* FUN_8c0a0c88 @ 8c0a0c88 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

float FUN_8c0a0c88(int ar4,undefined4 ar5,double *ar6,double *ar7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  double *pdVar4;
  undefined4 uVar5;
  double *pdVar6;
  float fVar7;
  uint in_fr1;
  uint uVar8;
  float fVar9;
  uint uVar10;
  undefined4 in_fr5;
  double dVar11;
  undefined8 in_xd0;
  bool bVar12;
  int iVar13;
  int iVar14;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  double *pdStack_134;
  double *pdStack_130;
  undefined8 uStack_12c;
  int iStack_124;
  undefined8 *puStack_120;
  float fStack_11c;
  int iStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int iStack_d0;
  float fStack_cc;
  double adStack_c8 [2];
  double adStack_b8 [21];
  
  fVar7 = 1.4013e-45;
  pdStack_130 = (double *)((int)&uStack_12c + DAT_8c0a0d20);
  pdVar4 = ar6;
  pdVar6 = ar7;
  uStack_12c._0_4_ = ar5;
  (*(code *)PTR_FUN_8c0a0d24)(ar5,PTR_FUN_8c0a0d24,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0a0d2c)
            ((int)&uStack_12c + DAT_8c0a0d28,(int)&uStack_12c + DAT_8c0a0d20,pdVar4,pdVar6);
  iVar2 = -1;
  (*(code *)PTR_Vec3_dtor_8c0a0d30)((int)&uStack_12c + DAT_8c0a0d20,0xffffffff,pdVar4,pdVar6);
  (*(code *)PTR_Vec3_ctor_zero_8c0a0d38)((int)&uStack_12c + DAT_8c0a0d34,iVar2,pdVar4,pdVar6);
  if (*(int *)(DAT_8c0a0d3c + ar4) == 1) {
    iVar2 = ar4 + DAT_8c0a0d40;
    (*(code *)PTR_Vec3_assign_8c0a0d44)((int)&uStack_12c + DAT_8c0a0d28,iVar2,pdVar4,pdVar6);
  }
  *(undefined4 *)(DAT_8c0a0d48 + ar4) = 1;
  switch(*(undefined4 *)(DAT_8c0a0d4c + ar4)) {
  case 2:
    (*(code *)PTR_FUN_8c0a0e74)((int)&uStack_12c + DAT_8c0a0e70,ar7,pdVar4,pdVar6);
    pdVar4 = (double *)((int)&uStack_12c + DAT_8c0a0e70);
    pdVar6 = ar6;
    fVar7 = (float)(*(code *)PTR_FUN_8c0a0e7c)
                             (ar4,*(undefined4 *)((int)&uStack_12c + DAT_8c0a0e78),pdVar4,ar6);
    fStack_d8 = fVar7;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a0e80)
              ((int)&uStack_12c + DAT_8c0a0e70,0xffffffff,pdVar4,pdVar6);
    break;
  case 3:
    pdStack_130 = (double *)PTR_DAT_8c0a0e08;
    pdVar4 = ar7;
    pdVar6 = ar6;
    iStack_d0 = (*(code *)PTR_FUN_8c0a0e14)(ar4,(int)&pdStack_130 + DAT_8c0a0e0c._4_4_,ar7,ar6);
    if (iStack_d0 == 0) {
      pdStack_130 = (double *)PTR_DAT_8c0a0e08;
      pdVar4 = ar7;
      pdVar6 = ar6;
      (*(code *)PTR_FUN_8c0a0e18)(ar4,(int)&pdStack_130 + DAT_8c0a0e0c._4_4_,ar7,ar6);
    }
    (*(code *)PTR_FUN_8c0a0e20)((int)&uStack_12c + DAT_8c0a0e1c,ar7,pdVar4,pdVar6);
    pdStack_130 = ar6;
    pdVar6 = (double *)((int)&pdStack_130 + DAT_8c0a0e24);
    pdVar4 = (double *)((int)&pdStack_130 + DAT_8c0a0e0c._4_4_);
    fVar7 = (float)(*(code *)PTR_FUN_8c0a0e2c)
                             (ar4,*(undefined4 *)((int)&pdStack_130 + DAT_8c0a0e28),pdVar4,pdVar6);
    fStack_d4 = fVar7;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a0e30)
              ((int)&uStack_12c + DAT_8c0a0e1c,0xffffffff,pdVar4,pdVar6);
    break;
  case 4:
    (*(code *)PTR_Vec3_assign_8c0a0f30)
              ((int)&uStack_12c + DAT_8c0a0f2c,*(undefined4 *)((int)&uStack_12c + DAT_8c0a0f28),
               pdVar4,pdVar6);
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c0a0f38,*(undefined4 *)((int)&uStack_12c + DAT_8c0a0f34));
    }
    else {
      in_xd0 = *(undefined8 *)((int)&uStack_12c + DAT_8c0a0f34);
      dVar11 = (double)CONCAT44(PTR_FUN_8c0a0f3c,DAT_8c0a0f38);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar11 + dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)&uStack_12c + DAT_8c0a0f34) = fVar7;
    }
    else {
      *(undefined8 *)((int)&uStack_12c + DAT_8c0a0f34) = in_xd0;
    }
    fVar7 = (float)(*(code *)PTR_FUN_8c0a0f3c)
                             (ar4,*(undefined4 *)((int)&uStack_12c + DAT_8c0a0f28),
                              (int)&uStack_12c + DAT_8c0a0f2c,pdVar6);
    fStack_e0 = fVar7;
    pdVar4 = *(double **)((int)&uStack_12c + DAT_8c0a0f28);
    (*(code *)PTR_FUN_8c0a0f40)(ar4,(int)&uStack_12c + DAT_8c0a0f2c,pdVar4,pdVar6);
    break;
  case 5:
    fVar7 = (float)(*(code *)PTR_FUN_8c0a111c)(ar4,6,pdVar4,pdVar6);
    fStack_f4 = fVar7;
    pdVar4 = *(double **)((int)&uStack_12c + DAT_8c0a1120);
    (*(code *)PTR_FUN_8c0a1128)(ar4,(int)&uStack_12c + DAT_8c0a1124,pdVar4,pdVar6);
    break;
  case 6:
    *(undefined4 *)(DAT_8c0a0ec0 + ar4) = 0;
    uVar3 = *(undefined4 *)((int)&uStack_12c + DAT_8c0a0ec4);
    pdVar4 = ar6;
    fVar7 = (float)(*(code *)PTR_FUN_8c0a0ec8)(ar4,uVar3,ar6,pdVar6);
    fStack_dc = fVar7;
    (*(code *)PTR_FUN_8c0a0ed8)(ar4,uVar3,pdVar4,pdVar6);
    break;
  case 8:
    (*(code *)PTR_Vec3_ctor_xyz_8c0a0fb0)((int)&uStack_12c + DAT_8c0a0fac,iVar2,pdVar4,pdVar6);
    (*(code *)PTR_FUN_8c0a0fb8)((int)&uStack_12c + DAT_8c0a0fb4,ar7,pdVar4,pdVar6);
    pdStack_130 = (double *)((int)&uStack_12c + DAT_8c0a0fb4);
    pdStack_134 = ar6;
    pdVar6 = (double *)((int)&pdStack_134 + DAT_8c0a0fbc);
    pdVar4 = (double *)0x1;
    fVar7 = (float)(*(code *)PTR_s_CMushroomerBody_AwayFrom_0a1ed0_8c0a0fc4)
                             (ar4,*(undefined4 *)((int)&pdStack_134 + DAT_8c0a0fc0),1,pdVar6);
    fStack_e4 = fVar7;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a0fc8)
              ((int)&uStack_12c + DAT_8c0a0fb4,0xffffffff,pdVar4,pdVar6);
    (*(code *)PTR_Vec3_dtor_8c0a0fcc)((int)&uStack_12c + DAT_8c0a0fac,0xffffffff,pdVar4,pdVar6);
    break;
  case 9:
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(*(undefined4 *)((int)&uStack_12c + DAT_8c0a0ff8),in_fr1);
    }
    else {
      dVar11 = *(double *)((int)&uStack_12c + DAT_8c0a0ff8);
    }
    if (in_FPSCR_PR == '\0') {
      iVar13 = (int)(float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      iVar13 = (int)dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(*(int *)(ar7 + 1),SUB84(dVar11,0));
    }
    else {
      dVar11 = ar7[1];
    }
    if (in_FPSCR_PR == '\0') {
      iVar14 = (int)(float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      iVar14 = (int)dVar11;
    }
    if (iVar13 == iVar14) {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(DAT_8c0a0ffc,*(undefined4 *)((int)&uStack_12c + DAT_8c0a0ff8));
      }
      else {
        in_xd0 = *(undefined8 *)((int)&uStack_12c + DAT_8c0a0ff8);
        dVar11 = (double)CONCAT44(uRam8c0a1000,DAT_8c0a0ffc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar7,SUB84(dVar11,0) - fVar7);
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&uStack_12c + DAT_8c0a0ff8) = SUB84(dVar11,0);
      }
      else {
        *(undefined8 *)((int)&uStack_12c + DAT_8c0a0ff8) = in_xd0;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)((int)&uStack_12c + DAT_8c0a1020),SUB84(dVar11,0));
      }
      else {
        dVar11 = *(double *)((int)&uStack_12c + DAT_8c0a1020);
      }
      if (in_FPSCR_PR == '\0') {
        iVar13 = (int)(float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        iVar13 = (int)dVar11;
      }
      if (iVar13 == 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(DAT_8c0a1024,*(undefined4 *)((int)&uStack_12c + DAT_8c0a1020));
        }
        else {
          in_xd0 = *(undefined8 *)((int)&uStack_12c + DAT_8c0a1020);
          dVar11 = (double)CONCAT44(uRam8c0a1028,DAT_8c0a1024);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = (float)((ulonglong)dVar11 >> 0x20);
          dVar11 = (double)CONCAT44(fVar7,SUB84(dVar11,0) + fVar7);
        }
        else {
          dVar11 = dVar11 + dVar11;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_12c + DAT_8c0a1020) = SUB84(dVar11,0);
        }
        else {
          *(undefined8 *)((int)&uStack_12c + DAT_8c0a1020) = in_xd0;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(*(undefined4 *)((int)&uStack_12c + DAT_8c0a104c),SUB84(dVar11,0)
                                   );
        }
        else {
          dVar11 = *(double *)((int)&uStack_12c + DAT_8c0a104c);
        }
        if (in_FPSCR_PR == '\0') {
          iVar13 = (int)(float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          iVar13 = (int)dVar11;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(*(int *)ar7,SUB84(dVar11,0));
        }
        else {
          dVar11 = *ar7;
        }
        if (in_FPSCR_PR == '\0') {
          iVar14 = (int)(float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          iVar14 = (int)dVar11;
        }
        if (iVar13 == iVar14) {
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44(DAT_8c0a1050,*(undefined4 *)((int)&uStack_12c + DAT_8c0a104c))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)((int)&uStack_12c + DAT_8c0a104c);
            dVar11 = (double)CONCAT44(uRam8c0a1054,DAT_8c0a1050);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = (float)((ulonglong)dVar11 >> 0x20);
            dVar11 = (double)CONCAT44(fVar7,SUB84(dVar11,0) - fVar7);
          }
          else {
            dVar11 = dVar11 - dVar11;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)&uStack_12c + DAT_8c0a104c) = SUB84(dVar11,0);
          }
          else {
            *(undefined8 *)((int)&uStack_12c + DAT_8c0a104c) = in_xd0;
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44((undefined4)DAT_8c0a10d4,SUB84(dVar11,0));
          *(undefined4 *)((int)&uStack_12c + DAT_8c0a10d4._4_4_) = (undefined4)DAT_8c0a10d4;
        }
        else {
          dVar11 = (double)CONCAT44(DAT_8c0a10d4._4_4_,(undefined4)DAT_8c0a10d4);
          *(double *)((int)&uStack_12c + DAT_8c0a10d4._4_4_) = dVar11;
        }
      }
    }
    (**(code **)(DAT_8c0a10dc + *(int *)ar6))(ar6,iVar2,pdVar4,pdVar6);
    fVar7 = (float)((ulonglong)dVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      fStack_e8 = fVar7;
      fVar9 = *(float *)((int)&uStack_12c + DAT_8c0a10e0);
      fVar7 = fStack_e8;
    }
    else {
      fStack_e8 = SUB84(dVar11,0);
      in_xd0 = *(undefined8 *)((int)&uStack_12c + DAT_8c0a10e0);
      fVar9 = fStack_e8;
      fStack_e4 = fVar7;
    }
    if (in_FPSCR_PR != '\0' || fVar7 <= fVar9) {
      fStack_ec = fVar9;
      (**(code **)(DAT_8c0a10dc + *(int *)ar6))(ar6,iVar2,pdVar4,pdVar6);
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar7);
        fStack_ec = fVar7;
      }
      else {
        in_xd0 = CONCAT44(fVar7,fStack_ec);
        dVar11 = *(double *)(ar4 + 0x48);
        fStack_e8 = fVar7;
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar11 - dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)&uStack_12c + DAT_8c0a10e0) = fVar7;
      }
      else {
        *(undefined8 *)((int)&uStack_12c + DAT_8c0a10e0) = in_xd0;
      }
    }
    (*(code *)PTR_FUN_8c0a10e8)((int)&uStack_12c + DAT_8c0a10e4,ar7,pdVar4,pdVar6);
    pdVar6 = (double *)((int)&uStack_12c + DAT_8c0a10e4);
    pdVar4 = (double *)((int)&uStack_12c + DAT_8c0a10d4._4_4_);
    fVar7 = (float)(*(code *)PTR_FUN_8c0a10f0)
                             (ar4,*(undefined4 *)((int)&uStack_12c + DAT_8c0a10ec),pdVar4,pdVar6);
    fStack_f0 = fVar7;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a10f4)
              ((int)&uStack_12c + DAT_8c0a10e4,0xffffffff,pdVar4,pdVar6);
    break;
  case 10:
    (*(code *)PTR_FUN_8c0a1390)((int)&uStack_12c + DAT_8c0a138c,ar7,pdVar4,pdVar6);
    pdVar4 = (double *)((int)&uStack_12c + DAT_8c0a138c);
    pdVar6 = ar6;
    fVar7 = (float)(*(code *)PTR_FUN_8c0a1398)
                             (ar4,*(undefined4 *)((int)&uStack_12c + DAT_8c0a1394),pdVar4,ar6);
    fStack_114 = fVar7;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a139c)
              ((int)&uStack_12c + DAT_8c0a138c,0xffffffff,pdVar4,pdVar6);
    break;
  case 0xb:
    *(undefined4 *)(DAT_8c0a1248 + ar4) = 0;
    *(undefined4 *)(DAT_8c0a124c + ar4) = 0;
    pdVar6 = (double *)0x0;
    uVar3 = (undefined4)DAT_8c0a1250;
    if (in_FPSCR_SZ == '\0') {
      uVar3 = in_fr5;
    }
    pdVar4 = (double *)0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1258)(ar4 + DAT_8c0a1250._4_4_,3,0xffffffff,0)
    ;
    uVar5 = 3;
    uStack_fc = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0a125c)
                          (ar4 + DAT_8c0a1250._4_4_,3,pdVar4,pdVar6);
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44((float)(int)uStack_fc,uVar3);
    }
    else {
      dVar11 = (double)(int)uStack_fc;
    }
    if (in_FPSCR_PR == '\0') {
      bVar12 = (float)((ulonglong)dVar11 >> 0x20) < 0.0;
    }
    else {
      bVar12 = dVar11 < (double)(ulonglong)in_fr1;
    }
    uVar8 = in_fr1;
    if ((bVar12) && (uVar8 = DAT_8c0a1260, in_FPSCR_SZ == '\0')) {
      uVar8 = in_fr1;
    }
    uVar10 = 0x3f800000;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a1264)
              (ar4 + DAT_8c0a1250._4_4_,uVar5,pdVar4,pdVar6);
    (*(code *)PTR_FUN_8c0a1268)(ar4,uVar5,pdVar4,pdVar6);
    if (in_FPSCR_SZ == '\0') {
      uStack_100 = uVar10;
    }
    else {
      uStack_100 = uVar8;
      uStack_fc = uVar10;
    }
    puStack_120 = *(undefined8 **)((int)&uStack_12c + DAT_8c0a126c);
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(uStack_100,*(undefined4 *)puStack_120);
    }
    else {
      in_xd0 = *puStack_120;
      dVar11 = (double)CONCAT44(uStack_fc,uStack_100);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)CONCAT44(fVar9,SUB84(dVar11,0) + fVar9);
    }
    else {
      dVar11 = dVar11 + dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)puStack_120 = SUB84(dVar11,0);
    }
    else {
      *puStack_120 = in_xd0;
    }
    (*(code *)PTR_FUN_8c0a1268)(ar4,uVar5,pdVar4,pdVar6);
    uVar8 = (uint)((ulonglong)dVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_104 = uVar8;
    }
    else {
      uStack_104 = SUB84(dVar11,0);
      uStack_100 = uVar8;
    }
    iStack_124 = *(int *)((int)&uStack_12c + DAT_8c0a126c);
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(uStack_104,*(undefined4 *)(iStack_124 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(iStack_124 + 4);
      dVar11 = (double)CONCAT44(uStack_100,uStack_104);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)CONCAT44(fVar9,SUB84(dVar11,0) + fVar9);
    }
    else {
      dVar11 = dVar11 + dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iStack_124 + 4) = SUB84(dVar11,0);
    }
    else {
      *(undefined8 *)(iStack_124 + 4) = in_xd0;
    }
    (*(code *)PTR_FUN_8c0a1268)(ar4,uVar5,pdVar4,pdVar6);
    uVar8 = (uint)((ulonglong)dVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_108 = uVar8;
    }
    else {
      uStack_108 = SUB84(dVar11,0);
      uStack_104 = uVar8;
    }
    uStack_12c._4_4_ = *(int *)((int)&uStack_12c + DAT_8c0a126c);
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(uStack_108,*(undefined4 *)(uStack_12c._4_4_ + 8));
    }
    else {
      in_xd0 = *(undefined8 *)(uStack_12c._4_4_ + 8);
      dVar11 = (double)CONCAT44(uStack_104,uStack_108);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 + dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(uStack_12c._4_4_ + 8) = fVar9;
    }
    else {
      *(undefined8 *)(uStack_12c._4_4_ + 8) = in_xd0;
    }
    break;
  case 0xc:
    *(undefined4 *)(DAT_8c0a131c + ar4) = 0;
    if (*(int *)(DAT_8c0a1320 + ar4) == 0) {
      pdVar6 = ar6;
      (*(code *)PTR_FUN_8c0a1324)(ar4,0,*(undefined4 *)((int)&uStack_12c + DAT_8c0a1320),ar6);
    }
    puVar1 = (ulonglong *)(*(int *)((int)&uStack_12c + DAT_8c0a1328) + 8);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *puVar1 = (ulonglong)in_fr1;
    }
    uVar5 = 0x1e;
    uVar3 = 0xffffffe2;
    uStack_10c = (*(code *)PTR_rand_range_8c0a132c)(ar4,0xffffffe2,0x1e,pdVar6);
    (*(code *)PTR_Vec3_ctor_xyz_8c0a1334)((int)&uStack_12c + DAT_8c0a1330,uVar3,uVar5,pdVar6);
    (*(code *)PTR_FUN_8c0a133c)((int)&uStack_12c + DAT_8c0a1338,ar7,uVar5,pdVar6);
    pdStack_130 = (double *)((int)&uStack_12c + DAT_8c0a1338);
    pdStack_134 = ar6;
    pdVar6 = (double *)((int)&pdStack_134 + DAT_8c0a1340);
    pdVar4 = (double *)0x0;
    fVar7 = (float)(*(code *)PTR_s_CMushroomerBody_AwayFrom_0a1ed0_8c0a1348)
                             (ar4,*(undefined4 *)((int)&pdStack_134 + DAT_8c0a1344),0,pdVar6);
    fStack_110 = fVar7;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a134c)
              ((int)&uStack_12c + DAT_8c0a1338,0xffffffff,pdVar4,pdVar6);
    (*(code *)PTR_Vec3_dtor_8c0a1350)((int)&uStack_12c + DAT_8c0a1330,0xffffffff,pdVar4,pdVar6);
    if (fVar7 == 0.0) {
      *(undefined4 *)(DAT_8c0a1354 + ar4) = 1;
    }
    break;
  case 0xd:
    pdStack_130 = (double *)PTR_DAT_8c0a1494;
    pdVar4 = ar7;
    pdVar6 = ar6;
    iStack_118 = (*(code *)PTR_FUN_8c0a14a0)(ar4,(int)&pdStack_130 + DAT_8c0a1498._4_4_,ar7,ar6);
    if (iStack_118 == 0) {
      pdStack_130 = (double *)PTR_DAT_8c0a1494;
      pdVar4 = ar7;
      pdVar6 = ar6;
      (*(code *)PTR_FUN_8c0a14a4)(ar4,(int)&pdStack_130 + DAT_8c0a1498._4_4_,ar7,ar6);
    }
    (*(code *)PTR_FUN_8c0a14a8)(adStack_b8,ar7,pdVar4,pdVar6);
    pdStack_130 = ar6;
    pdVar6 = adStack_b8;
    pdVar4 = (double *)((int)&pdStack_130 + DAT_8c0a1498._4_4_);
    fVar7 = (float)(*(code *)PTR_FUN_8c0a14b0)
                             (ar4,*(undefined4 *)((int)&pdStack_130 + DAT_8c0a14ac),pdVar4,pdVar6);
    fStack_11c = fVar7;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a14b4)(adStack_b8,0xffffffff,pdVar4,pdVar6);
    break;
  case 0xe:
    fVar7 = (float)(*(code *)PTR_FUN_8c0a115c)(ar4,2,pdVar4,pdVar6);
    fStack_f8 = fVar7;
    pdVar4 = *(double **)((int)&uStack_12c + DAT_8c0a1160);
    iVar2 = (int)&uStack_12c + DAT_8c0a1164;
    (*(code *)PTR_FUN_8c0a1168)(ar4,iVar2,pdVar4,pdVar6);
    (*(code *)PTR_vec3_clear_8c0a1170)(ar4 + DAT_8c0a116c,iVar2,pdVar4,pdVar6);
  }
  if ((*(int *)(DAT_8c0a14b8 + ar4) == 1) && (fVar7 == 0.0)) {
    pdStack_130 = adStack_c8;
    (*(code *)PTR_FUN_8c0a14c0)(ar4,ar7,ar6,pdVar6);
    (*(code *)PTR_Vec3_assign_8c0a14c8)(ar4 + DAT_8c0a14c4,adStack_c8,ar6,pdVar6);
    (*(code *)PTR_Vec3_dtor_8c0a14cc)(adStack_c8,0xffffffff,ar6,pdVar6);
    pdVar4 = ar6;
  }
  fStack_cc = fVar7;
  (*(code *)PTR_Vec3_dtor_8c0a14cc)((int)&uStack_12c + DAT_8c0a14d0,0xffffffff,pdVar4,pdVar6);
  (*(code *)PTR_Vec3_dtor_8c0a14cc)((int)&uStack_12c + DAT_8c0a14d4,0xffffffff,pdVar4,pdVar6);
  return fStack_cc;
}



/* FUN_8c0a14d8 @ 8c0a14d8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c0a14d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 a6;
  int a6_00;
  undefined4 uVar5;
  undefined1 *a7;
  float fVar6;
  undefined8 in_dr0;
  float fVar7;
  float fVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  iVar1 = *(int *)(DAT_8c0a1798 + ar4);
  uVar4 = ar6;
  uVar3 = ar7;
  uVar5 = ar7;
  if (iVar1 == 0) {
    a6 = 100;
    uVar2 = (*(code *)PTR_rand_range_8c0a179c)(ar4,0,100,ar7);
    *(undefined4 *)(DAT_8c0a17a0 + ar4) = uVar2;
    *(int *)(DAT_8c0a1798 + ar4) = *(int *)(DAT_8c0a1798 + ar4) + 1;
  }
  else {
    a6 = ar6;
    if (iVar1 != 1) {
      uVar3 = ar5;
      if (iVar1 == 2) goto LAB_8c0a15f4;
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c0a165a;
    }
  }
  if (*(int *)(DAT_8c0a17a0 + ar4) < 0x2d) {
    iVar1 = (*(code *)PTR_FUN_8c0a17a4)(ar4,ar5,a6,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(DAT_8c0a1798 + ar4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    return 0;
  }
  if (0x59 < *(int *)(DAT_8c0a17a0 + ar4)) {
    ar7 = 0;
    ar6 = 0;
    uVar3 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a17cc)(ar4 + DAT_8c0a17c4._4_4_,0,0,0);
    *(int *)(DAT_8c0a1798 + ar4) = *(int *)(DAT_8c0a1798 + ar4) + 1;
LAB_8c0a15f4:
    (*(code *)PTR_Vec3_ctor_xyz_8c0a17d0)(auStack_48,uVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c0a17d4)(ar4,auStack_48,ar5,ar7);
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a17c0)(auStack_48,0xffffffff,ar5,ar7);
    (*(code *)PTR_FUN_8c0a17e4)(ar4,uVar4,ar5,ar7);
    iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a17e8)
                      (ar4 + DAT_8c0a17c4._4_4_,uVar4,ar5,ar7);
    if (iVar1 != 1) {
      return 1;
    }
    *(undefined4 *)(DAT_8c0a1798 + ar4) = 0;
    return 0;
  }
  fVar7 = DAT_8c0a17b0;
  if (in_FPSCR_SZ == '\0') {
    fVar7 = DAT_8c0a17ac;
  }
  (*(code *)PTR_FUN_8c0a17b8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0a17bc)(ar4 + 0x54,auStack_38,uVar4,uVar5);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0a17c0)(auStack_38,0xffffffff,uVar4,uVar5);
  *(undefined4 *)(DAT_8c0a1798 + ar4) = 3;
LAB_8c0a165a:
  if (*(int *)(DAT_8c0a17ec + ar4) == 1) {
    uVar3 = (*(code *)PTR_Vec3_length_8c0a17f4)(ar4 + DAT_8c0a17f0,uVar3,uVar4,uVar5);
    (*(code *)PTR_Vec3_ctor_copy_8c0a17f8)(auStack_28,uVar3,uVar4,uVar5);
    (*(code *)PTR_FUN_8c0a17fc)(auStack_28,ar4 + 0x14,uVar4,uVar5);
    fVar6 = DAT_8c0a1800;
    fVar8 = _DAT_8c0a1804;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = fVar7;
      fVar8 = DAT_8c0a1800;
    }
    if (in_FPSCR_PR == '\0' && fVar8 < fVar6) {
      (*(code *)PTR_FUN_8c0a1810)(ar4,auStack_28,uVar4,uVar5);
      (*(code *)PTR_Vec3_add_8c0a1814)(auStack_58,ar5,uVar4,uVar5);
      (*(code *)PTR_Vec3_assign_8c0a17bc)(ar4 + 0x54,auStack_68,uVar4,uVar5);
      (*(code *)PTR_Vec3_dtor_8c0a17c0)(auStack_68,0xffffffff,uVar4,uVar5);
      (*(code *)PTR_Vec3_dtor_8c0a17c0)(auStack_58,0xffffffff,uVar4,uVar5);
      uVar4 = ar6;
      (*(code *)PTR_FUN_8c0a1818)(ar4,ar4 + 0x54,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      uVar5 = ar7;
    }
    (*(code *)PTR_Vec3_dtor_8c0a17c0)(auStack_28,0xffffffff,uVar4,uVar5);
  }
  (*(code *)PTR_FUN_8c0a181c)(auStack_74,ar6,uVar4,uVar5);
  a7 = auStack_74;
  a6_00 = ar4 + 0x54;
  iVar1 = (*(code *)PTR_FUN_8c0a1820)(ar4,ar5,a6_00,a7);
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a1824)(auStack_74,0xffffffff,a6_00,a7);
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_8c0a1798 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}



/* FUN_8c0a1828 @ 8c0a1828 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a1828(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *a5;
  undefined8 *a6;
  float fVar4;
  undefined8 in_dr0;
  float fVar7;
  undefined8 uVar5;
  float fVar8;
  double dVar6;
  undefined4 in_fr3;
  double dVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [20];
  
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  a5 = ar5;
  a6 = ar6;
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    if (*(int *)(DAT_8c0a1908 + ar4) == 1) {
      *(undefined4 *)(DAT_8c0a1908 + ar4) = 0;
    }
    if (*(int *)(DAT_8c0a190c + ar4) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a1910) = *(undefined4 *)ar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a1910) = *ar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a1914) = *(undefined4 *)((int)ar5 + 4);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a1914) = *(undefined8 *)((int)ar5 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a1918) = *(undefined4 *)(ar5 + 1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a1918) = ar5[1];
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a191c) = *(undefined4 *)ar6;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a191c) = *ar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a1920) = *(undefined4 *)((int)ar6 + 4);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a1920) = *(undefined8 *)((int)ar6 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a1924) = *(undefined4 *)(ar6 + 1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a1924) = ar6[1];
      }
    }
    fVar4 = DAT_8c0a1928;
    fVar7 = DAT_8c0a192c;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + 0x28);
      fVar7 = DAT_8c0a1928;
    }
    if (in_FPSCR_PR != '\0' || fVar7 <= fVar4) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x28) = DAT_8c0a1928;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = CONCAT44(DAT_8c0a192c,DAT_8c0a1928);
      }
    }
    if (*(int *)((int)DAT_8c0a192c + ar4) == 2) {
      (*(code *)PTR_FUN_8c0a1934)(ar4,DAT_8c0a1930,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c0a1988)(ar4,DAT_8c0a1984 + 0x18,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0a1990)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar6 + 4));
    }
    else {
      uVar5 = *(undefined8 *)((int)ar5 + 4);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar5 <= (float)((ulonglong)uVar5 >> 0x20)) {
      iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0a1a18)(ar4 + DAT_8c0a1a14,a5,a6,ar7);
      fVar4 = (float)((ulonglong)uVar5 >> 0x20);
      if (iVar1 != 9) {
        ar7 = 0;
        a6 = (undefined8 *)0xffffffff;
        a5 = (undefined8 *)0x9;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1a20)(ar4 + DAT_8c0a1a14,9,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a1a24)(ar4 + DAT_8c0a1a14,a5,a6,ar7);
      }
    }
    else {
      ar7 = 0;
      a6 = (undefined8 *)0x0;
      a5 = (undefined8 *)0x1;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1998)(ar4 + DAT_8c0a1994,1,0,0);
      fVar4 = (float)((ulonglong)uVar5 >> 0x20);
    }
    (*(code *)PTR_vec3_clear_8c0a1a2c)(ar4 + DAT_8c0a1a28,a5,a6,ar7);
    (*(code *)PTR_vec3_clear_8c0a1a2c)(ar4 + DAT_8c0a1a30,a5,a6,ar7);
  case 1:
    *(undefined4 *)(ar4 + 0x40) = 3;
  case 3:
    iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0a1a18)(ar4 + DAT_8c0a1a14,a5,a6,ar7);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a1a88)(ar4 + DAT_8c0a1a84,a5,a6,ar7);
      if (iVar1 == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar6 + 4));
        }
        else {
          uVar5 = *(undefined8 *)((int)ar5 + 4);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
          (*(code *)PTR_vec3_clear_8c0a1a90)(ar4 + DAT_8c0a1a8c,a5,a6,ar7);
          ar7 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1a98)(ar4 + DAT_8c0a1a84,9,0,0);
        }
      }
      else {
        (*(code *)PTR_CAnimBody_GetCurFrame_8c0a1b00)(ar4 + DAT_8c0a1afc,a5,a6,ar7);
        fVar7 = DAT_8c0a1b04;
        fVar8 = _DAT_8c0a1b08;
        if (in_FPSCR_SZ == '\0') {
          fVar7 = fVar4;
          fVar8 = DAT_8c0a1b04;
        }
        if (in_FPSCR_PR != '\0' || fVar8 <= fVar7) {
          (*(code *)PTR_CAnimBody_GetCurFrame_8c0a1b00)(ar4 + DAT_8c0a1afc,a5,a6,ar7);
          fVar4 = _DAT_8c0a1b08;
          fVar7 = DAT_8c0a1b0c;
          if (in_FPSCR_SZ == '\0') {
            fVar4 = fVar8;
            fVar7 = _DAT_8c0a1b08;
          }
          if (in_FPSCR_PR == '\0' && fVar4 < fVar7) {
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a1b3c),in_fr3);
              dVar6 = (double)CONCAT44(DAT_8c0a1b44,*(undefined4 *)PTR_DAT_8c0a1b40);
            }
            else {
              dVar9 = *(double *)(ar4 + DAT_8c0a1b3c);
              dVar6 = (double)CONCAT44(uRam8c0a1b48,DAT_8c0a1b44);
            }
            if (in_FPSCR_PR == '\0') {
              dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) +
                                       SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20),
                                       SUB84(dVar9,0));
            }
            else {
              dVar9 = dVar9 + dVar6 / dVar6;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(ar4 + DAT_8c0a1b3c) = (int)((ulonglong)dVar9 >> 0x20);
            }
            else {
              *(double *)(ar4 + DAT_8c0a1b3c) = dVar9;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + (int)DAT_8c0a1b0c),in_fr3);
              dVar6 = (double)CONCAT44(DAT_8c0a1b14,*(undefined4 *)PTR_DAT_8c0a1b10);
            }
            else {
              dVar9 = *(double *)(ar4 + (int)DAT_8c0a1b0c);
              dVar6 = (double)CONCAT44(uRam8c0a1b18,DAT_8c0a1b14);
            }
            if (in_FPSCR_PR == '\0') {
              dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) -
                                       SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20),
                                       SUB84(dVar9,0));
            }
            else {
              dVar9 = dVar9 - dVar6 / dVar6;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(ar4 + (int)DAT_8c0a1b0c) = (int)((ulonglong)dVar9 >> 0x20);
            }
            else {
              *(double *)(ar4 + (int)DAT_8c0a1b0c) = dVar9;
            }
          }
        }
      }
    }
    else if (iVar1 == 9) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar6 + 4));
      }
      else {
        uVar5 = *(undefined8 *)((int)ar5 + 4);
      }
      if (in_FPSCR_PR != '\0' || (float)uVar5 <= (float)((ulonglong)uVar5 >> 0x20)) {
        (*(code *)PTR_FUN_8c0a1bc8)(ar4 + DAT_8c0a1bc4,a5,a6,ar7);
      }
      else {
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a1b90)(ar4 + DAT_8c0a1b8c,a5,a6,ar7);
        ar7 = 0;
        uVar3 = 0;
        uVar2 = 1;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1b98)(ar4 + DAT_8c0a1b8c,1,0,0);
        (*(code *)PTR_vec3_clear_8c0a1ba0)(ar4 + DAT_8c0a1b9c,uVar2,uVar3,ar7);
      }
    }
    else {
      iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a1c10)(ar4 + DAT_8c0a1c0c,a5,a6,ar7);
      if (iVar1 == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar6 + 4));
        }
        else {
          uVar5 = *(undefined8 *)((int)ar5 + 4);
        }
        if (in_FPSCR_PR != '\0' || (float)uVar5 <= (float)((ulonglong)uVar5 >> 0x20)) {
          ar7 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1c40)(ar4 + DAT_8c0a1c38._4_4_,9,0,0);
        }
        else {
          ar7 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1c18)(ar4 + DAT_8c0a1c0c,1,0,0);
        }
      }
    }
    break;
  case 4:
    (*(code *)PTR_FUN_8c0a1cc0)(ar4 + DAT_8c0a1cbc,ar5,ar6,ar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c0a1cc4)(ar4,ar6,ar5,ar7);
  (*(code *)PTR_FUN_8c0a1cc8)(ar4 + 0x14,ar6,ar5,ar7);
  uVar3 = (*(code *)PTR_Vec3_length_8c0a1ccc)(auStack_24,ar6,ar5,ar7);
  (*(code *)PTR_Vec3_assign_8c0a1cd4)(ar4 + DAT_8c0a1cd0,uVar3,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a1cd8)(auStack_24,0xffffffff,ar5,ar7);
  return uVar2;
}



/* FUN_8c0a1cdc @ 8c0a1cdc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a1cdc(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined8 in_xd0;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar2 = 1;
  switch(*(undefined4 *)(DAT_8c0a1e8c + ar4)) {
  case 0:
    ar7 = 0;
    ar6 = (int *)0xffffffff;
    ar5 = 3;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a1e98)(ar4 + DAT_8c0a1e90._4_4_,3,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a1e9c)(ar4 + DAT_8c0a1e90._4_4_,ar5,ar6,ar7);
    *(int *)(DAT_8c0a1e8c + ar4) = *(int *)(DAT_8c0a1e8c + ar4) + 1;
    (*(code *)PTR_FUN_8c0a1ea0)(ar4 + 0x14,ar5,ar6,ar7);
  case 1:
    iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a1ea4)
                      (ar4 + DAT_8c0a1e90._4_4_,ar5,ar6,ar7);
    if (iVar1 == 1) {
      a5 = 3;
      (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0a1ea8)(ar4 + DAT_8c0a1e90._4_4_,3,ar6,ar7);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a1e9c)(ar4 + DAT_8c0a1e90._4_4_,a5,ar6,ar7);
      *(int *)(DAT_8c0a1e8c + ar4) = *(int *)(DAT_8c0a1e8c + ar4) + 1;
    }
    break;
  case 2:
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0a1eb4,*(undefined4 *)(ar4 + _DAT_8c0a1eb0));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + _DAT_8c0a1eb0);
      dVar4 = (double)CONCAT44(DAT_8c0a1eb8,DAT_8c0a1eb4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
    }
    else {
      dVar4 = dVar4 + dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + _DAT_8c0a1eb0) = SUB84(dVar4,0);
    }
    else {
      *(undefined8 *)(ar4 + _DAT_8c0a1eb0) = in_xd0;
    }
    (**(code **)(DAT_8c0a1eb8 + *ar6))(ar6,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
      dVar4 = (double)CONCAT44(DAT_8c0a1ebc,(int)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar6 = *(double *)(ar5 + 4);
      dVar4 = (double)CONCAT44(_DAT_8c0a1ec0,DAT_8c0a1ebc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)((ulonglong)dVar4 >> 0x20);
      fVar3 = SUB84(dVar4,0) - fVar5;
      dVar4 = (double)CONCAT44(fVar5,fVar3);
      bVar7 = fVar3 < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      dVar4 = dVar4 - dVar4;
      bVar7 = dVar4 < dVar6;
    }
    if (bVar7) {
      *(int *)(DAT_8c0a1e8c + ar4) = *(int *)(DAT_8c0a1e8c + ar4) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + _DAT_8c0a1eb0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + _DAT_8c0a1eb0) = (ulonglong)dVar4 & 0xffffffff;
      }
    }
    break;
  case 3:
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0a1eb4,*(undefined4 *)(ar4 + _DAT_8c0a1eb0));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + _DAT_8c0a1eb0);
      dVar4 = (double)CONCAT44(DAT_8c0a1eb8,DAT_8c0a1eb4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) - fVar3);
    }
    else {
      dVar4 = dVar4 - dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + _DAT_8c0a1eb0) = SUB84(dVar4,0);
    }
    else {
      *(undefined8 *)(ar4 + _DAT_8c0a1eb0) = in_xd0;
    }
    (**(code **)(_DAT_8c0a1ec0 + *ar6))(ar6,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
      dVar4 = (double)CONCAT44(DAT_8c0a1ebc,(int)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar6 = *(double *)(ar5 + 4);
      dVar4 = (double)CONCAT44(_DAT_8c0a1ec0,DAT_8c0a1ebc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)((ulonglong)dVar4 >> 0x20);
      fVar3 = SUB84(dVar4,0) + fVar5;
      dVar4 = (double)CONCAT44(fVar5,fVar3);
      bVar7 = fVar3 < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      dVar4 = dVar4 + dVar4;
      bVar7 = dVar4 < dVar6;
    }
    if (!bVar7) {
      *(int *)(DAT_8c0a1e8c + ar4) = *(int *)(DAT_8c0a1e8c + ar4) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + _DAT_8c0a1eb0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + _DAT_8c0a1eb0) = (ulonglong)dVar4 & 0xffffffff;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* s_CMushroomerBody_AwayFrom_0a1ed0 @ 8c0a1ec4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_CMushroomerBody_AwayFrom_0a1ed0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 a6;
  int a6_00;
  undefined4 a7;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_fr1;
  undefined8 uVar7;
  double dVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_b8 [4];
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [36];
  
  aiStack_b8[0] = ar6;
  uVar5 = *(undefined4 *)((int)aiStack_b8 + DAT_8c0a1f0c);
  uVar4 = *(undefined4 *)((int)aiStack_b8 + DAT_8c0a1f10);
  uVar6 = 1;
  iVar1 = *(int *)(DAT_8c0a1f14 + ar4);
  iVar3 = ar5;
  if (iVar1 == 0) {
    if (*(int *)(DAT_8c0a2010 + ar4) == 1) {
      (*(code *)PTR_FUN_8c0a2014)(ar4,1,ar5,uVar5);
      *(undefined4 *)(DAT_8c0a2010 + ar4) = 0;
    }
    a7 = 0;
    a6 = 0xffffffff;
    uVar2 = 5;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a2020)(ar4 + DAT_8c0a201c,5,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a2024)(ar4 + DAT_8c0a201c,uVar2,a6,a7);
    if (aiStack_b8[0] == 0) {
LAB_8c0a1f82:
      (*(code *)PTR_Vec3_sub_8c0a203c)(ar5,ar7,a6,a7);
      uStack_90 = (*(code *)PTR_Vec3_length_8c0a2040)((int)aiStack_b8 + DAT_8c0a2038,ar7,a6,a7);
      (*(code *)PTR_Vec3_assign_8c0a2044)(ar4 + 0x14,uStack_90,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c0a2048)((int)aiStack_b8 + DAT_8c0a2038,0xffffffff,a6,a7);
      uVar2 = DAT_8c0a2054;
      if (in_FPSCR_SZ == '\0') {
        uVar2 = in_fr1;
      }
      (*(code *)PTR_FUN_8c0a2064)(ar4,ar5,uVar4,uVar5);
      (*(code *)PTR_Vec3_assign_8c0a2044)(ar4 + DAT_8c0a2068,auStack_3c,uVar4,uVar5);
      (*(code *)PTR_Vec3_dtor_8c0a2048)(auStack_3c,0xffffffff,uVar4,uVar5);
      ar7 = uVar5;
    }
    else {
      if (aiStack_b8[0] != 1) {
        a7 = 2;
        a6 = 1;
        (*(code *)PTR_report_error_message_8c0a2034)
                  (PTR_s_GRAPHICS_COMMON_8c0a2028 + DAT_8c0a2030,
                   PTR_s_GRAPHICS_COMMON_8c0a2028 + DAT_8c0a202c,1,2);
        goto LAB_8c0a1f82;
      }
      (*(code *)PTR_Vec3_scale_8c0a21ec)(ar7,PTR_DAT_8c0a21e8,a6,a7);
      (*(code *)PTR_Vec3_assign_8c0a21f0)(ar4 + 0x14,auStack_4c,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c0a21f4)(auStack_4c,0xffffffff,a6,a7);
      uVar2 = DAT_8c0a21fc;
      if (in_FPSCR_SZ == '\0') {
        uVar2 = in_fr1;
      }
      (*(code *)PTR_FUN_8c0a2210)(ar4,ar5,uVar4,uVar5);
      (*(code *)PTR_Vec3_assign_8c0a21f0)(ar4 + DAT_8c0a2214,auStack_5c,uVar4,uVar5);
      (*(code *)PTR_Vec3_dtor_8c0a21f4)(auStack_5c,0xffffffff,uVar4,uVar5);
      ar7 = uVar5;
    }
    iVar1 = ar5;
    (*(code *)PTR_Vec3_sub_8c0a2218)(ar4 + DAT_8c0a2214,ar5,uVar4,ar7);
    uStack_94 = (*(code *)PTR_Vec3_length_8c0a221c)(auStack_6c,iVar1,uVar4,ar7);
    (*(code *)PTR_Vec3_assign_8c0a21f0)(ar4 + 0x14,uStack_94,uVar4,ar7);
    uVar5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a21f4)(auStack_6c,0xffffffff,uVar4,ar7);
    (*(code *)PTR_vec3_clear_8c0a2224)(ar4 + DAT_8c0a2220,uVar5,uVar4,ar7);
    (*(code *)PTR_FUN_8c0a222c)(ar4,DAT_8c0a2228,uVar4,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(_DAT_8c0a2230,uVar2);
      *(undefined4 *)(ar4 + 0x34) = _DAT_8c0a2230;
    }
    else {
      uVar7 = CONCAT44(PTR_rand_range_8c0a2234,_DAT_8c0a2230);
      *(undefined8 *)(ar4 + 0x34) = uVar7;
    }
    uVar4 = (undefined4)uVar7;
    uVar2 = 0x5a;
    uVar5 = 0x1e;
    uStack_9c._4_4_ = (*(code *)PTR_rand_range_8c0a2234)(ar4,0x1e,0x5a,ar7);
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)uStack_9c._4_4_,uVar4);
    }
    else {
      dVar8 = (double)uStack_9c._4_4_;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar8;
    }
    (*(code *)PTR_FUN_8c0a2240)(ar4,uVar5,uVar2,ar7);
    if (in_FPSCR_SZ == '\0') {
      uStack_9c = (double)CONCAT44(uStack_9c._4_4_,(int)((ulonglong)dVar8 >> 0x20));
      dVar8 = uStack_9c;
    }
    uStack_9c = dVar8;
    ar6 = ar4 + DAT_8c0a2214;
    (*(code *)PTR_FUN_8c0a2248)(ar4,ar5,ar6,ar7);
    *(int *)(DAT_8c0a224c + ar4) = *(int *)(DAT_8c0a224c + ar4) + 1;
    aiStack_b8[3] = ar4;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar3 = ar4 + DAT_8c0a22c4;
      (*(code *)PTR_FUN_8c0a22c8)(ar4,iVar3,ar5,ar7);
      iStack_a0 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a22d0)
                            (ar4 + DAT_8c0a22cc,iVar3,ar5,ar7);
      a6_00 = ar5;
      if (iStack_a0 == 1) {
        ar7 = 0;
        a6_00 = -1;
        iVar3 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a22d8)(ar4 + DAT_8c0a22cc,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a22dc)(ar4 + DAT_8c0a22cc,iVar3,a6_00,ar7);
        *(int *)(DAT_8c0a22e0 + ar4) = *(int *)(DAT_8c0a22e0 + ar4) + 1;
        aiStack_b8[1] = ar4;
      }
    }
    else {
      a6_00 = ar6;
      if (iVar1 == 3) {
        iVar3 = ar4 + DAT_8c0a238c;
        (*(code *)PTR_FUN_8c0a2390)(ar4,iVar3,ar5,ar7);
        iStack_a4 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a2398)
                              (ar4 + DAT_8c0a2394,iVar3,ar5,ar7);
        a6_00 = ar5;
        if (iStack_a4 == 1) {
          iVar3 = DAT_8c0a239c;
          (*(code *)PTR_FUN_8c0a23a0)(ar4,DAT_8c0a239c,ar5,ar7);
          uVar6 = 0;
          *(undefined4 *)(DAT_8c0a23a4 + ar4) = 0;
          a6_00 = ar5;
        }
      }
    }
    goto LAB_8c0a231a;
  }
  (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0a225c)(ar4 + DAT_8c0a2258,iVar3,ar6,ar7);
  iVar3 = ar4 + DAT_8c0a2214;
  (*(code *)PTR_FUN_8c0a2260)(ar4,iVar3,ar5,ar7);
  a6_00 = ar5;
  if (*(int *)(ar4 + 0x40) == 4) {
    *(int *)(DAT_8c0a224c + ar4) = *(int *)(DAT_8c0a224c + ar4) + 1;
    aiStack_b8[2] = ar4;
  }
LAB_8c0a231a:
  (*(code *)PTR_FUN_8c0a23a8)(ar4 + 0x14,iVar3,a6_00,ar7);
  uStack_a8 = (*(code *)PTR_Vec3_length_8c0a23ac)(auStack_7c,iVar3,a6_00,ar7);
  (*(code *)PTR_Vec3_scale_8c0a23b4)(uStack_a8,PTR_DAT_8c0a23b0,a6_00,ar7);
  (*(code *)PTR_Vec3_assign_8c0a23bc)(ar4 + DAT_8c0a23b8,auStack_8c,a6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a23c0)(auStack_8c,0xffffffff,a6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a23c0)(auStack_7c,0xffffffff,a6_00,ar7);
  return uVar6;
}



/* FUN_8c0a23c4 @ 8c0a23c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a293a) */
/* WARNING: Removing unreachable block (ram,0x8c0a28f2) */
/* WARNING: Removing unreachable block (ram,0x8c0a291a) */
/* WARNING: Removing unreachable block (ram,0x8c0a2aaa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a23c4(int ar4,double *ar5,double *ar6,double *ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined *a5;
  undefined4 a6;
  undefined1 *a6_00;
  double *a6_01;
  int iVar3;
  double *a7;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
  double in_dr0;
  float fVar11;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar12;
  double dVar10;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
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
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = in_PR;
  pdVar2 = ar5;
  a6_01 = ar6;
  a7 = ar7;
  if (*(char *)DAT_8c0a2434 == '\0') {
    uVar1 = (*(code *)PTR_Vec3_set_zero_8c0a243c)(DAT_8c0a2438,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0x9c) = uVar1;
    a6_01 = DAT_8c0a2440;
    (*(code *)PTR_global_list_push_8c0a2448)
              (*(undefined4 *)((int)puVar4 + -0x9c),PTR_object_dtor_delete_8c0a2444,DAT_8c0a2440,a7)
    ;
    pdVar2 = DAT_8c0a2434;
    *(char *)DAT_8c0a2434 = '\x01';
  }
  (*(code *)PTR_Vec3_ctor_zero_8c0a2450)
            ((undefined1 *)((int)puVar4 + DAT_8c0a244c + -0xe4),pdVar2,a6_01,a7);
  switch(*(undefined4 *)(DAT_8c0a2454 + ar4)) {
  case 0:
    a7 = (double *)0x0;
    a6 = 0xffffffff;
    uVar1 = 9;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a253c)(ar4 + DAT_8c0a2534._4_4_,9,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a2540)(ar4 + DAT_8c0a2534._4_4_,uVar1,a6,a7);
    (*(code *)PTR_vec3_clear_8c0a2548)(ar4 + DAT_8c0a2544,uVar1,a6,a7);
    (*(code *)PTR_FUN_8c0a2550)(ar4,DAT_8c0a254c,a6,a7);
    pdVar2 = ar5;
    a6_01 = ar6;
    (*(code *)PTR_FUN_8c0a2554)(ar4,ar5,ar6,a7);
    *(int *)((int)puVar4 + -200) = ar4;
    *(int *)(DAT_8c0a2558 + *(int *)((int)puVar4 + -200)) =
         *(int *)(DAT_8c0a2558 + *(int *)((int)puVar4 + -200)) + 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_8c0a242e_caseD_2;
  case 3:
    goto switchD_8c0a242e_caseD_3;
  case 4:
    goto switchD_8c0a242e_caseD_4;
  case 5:
    goto switchD_8c0a242e_caseD_5;
  default:
    goto switchD_8c0a242e_default;
  }
  (*(code *)PTR_FUN_8c0a2564)(ar4 + DAT_8c0a2534._4_4_,pdVar2,a6_01,a7);
  pdVar2 = ar6;
  a6_01 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c0a2568)(ar4,ar6,ar5,a7);
  *(undefined4 *)((int)puVar4 + -0xa0) = uVar1;
  if (*(int *)((int)puVar4 + -0xa0) == 0) {
    *(undefined4 *)(ar4 + 0x40) = 3;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a256c)(ar4 + DAT_8c0a2534._4_4_,pdVar2,a6_01,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xa4) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0xa4) = in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar1 = (undefined4)*(ulonglong *)((int)puVar4 + -0xa4);
      uVar7 = CONCAT44(uVar1,SUB84(in_dr0,0));
      *(undefined4 *)(ar4 + DAT_8c0a2570) = uVar1;
    }
    else {
      uVar7 = *(ulonglong *)((int)puVar4 + -0xa4);
      *(ulonglong *)(ar4 + DAT_8c0a2570) = uVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar7 & 0xffffffff;
    }
    *(undefined4 *)(DAT_8c0a2558 + ar4) = 3;
switchD_8c0a242e_caseD_3:
    (*(code *)PTR_Vec3_assign_8c0a2908)
              ((undefined1 *)((int)puVar4 + DAT_8c0a2904 + -0xe4),ar5,a6_01,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar6 + 1),in_fr3);
      dVar9 = (double)CONCAT44(DAT_8c0a290c,*(undefined4 *)(ar7 + 1));
    }
    else {
      dVar10 = ar6[1];
      in_xd0 = ar7[1];
      dVar9 = (double)CONCAT44(DAT_8c0a2910,DAT_8c0a290c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar9 - dVar9,0);
    }
    if ((float)((ulonglong)dVar10 >> 0x20) == fVar6) {
      if (in_FPSCR_SZ == '\0') {
        uVar1 = *(undefined4 *)(ar7 + 1);
        dVar9 = (double)CONCAT44(uVar1,fVar6);
        *(undefined4 *)((int)puVar4 + DAT_8c0a2910 + -0xe4) = uVar1;
      }
      else {
        dVar9 = ar7[1];
        *(double *)((int)puVar4 + DAT_8c0a2910 + -0xe4) = dVar9;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        uVar7 = CONCAT44(DAT_8c0a2928,*(undefined4 *)ar6);
      }
      else {
        in_xd0 = *ar6;
        uVar7 = CONCAT44(DAT_8c0a292c,DAT_8c0a2928);
      }
      if ((float)uVar7 == (float)(uVar7 >> 0x20)) {
        dVar9 = (double)(uVar7 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar4 + DAT_8c0a292c + -0xe4) = 0;
        }
        else {
          *(double *)((int)puVar4 + DAT_8c0a292c + -0xe4) = dVar9;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)ar6,SUB84(dVar10,0));
          dVar9 = (double)CONCAT44(DAT_8c0a2ac4,*(undefined4 *)ar7);
        }
        else {
          dVar10 = *ar6;
          in_xd0 = *ar7;
          dVar9 = (double)CONCAT44(DAT_8c0a2ac8,DAT_8c0a2ac4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = (float)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(fVar6,SUB84(dVar9,0) - fVar6);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        if ((float)((ulonglong)dVar10 >> 0x20) == SUB84(dVar9,0)) {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(*(undefined4 *)ar7,SUB84(dVar9,0));
            *(undefined4 *)((int)puVar4 + DAT_8c0a2ac8 + -0xe4) = *(undefined4 *)ar7;
          }
          else {
            dVar9 = *ar7;
            *(double *)((int)puVar4 + DAT_8c0a2ac8 + -0xe4) = dVar9;
          }
        }
      }
    }
    uVar1 = SUB84(dVar10,0);
    uVar5 = SUB84(dVar9,0);
    *(undefined1 **)((int)puVar4 + -0xe8) = (undefined1 *)((int)puVar4 + -0x6c);
    iVar3 = ar4 + 0x14;
    a6_00 = (undefined1 *)((int)puVar4 + DAT_8c0a2acc + -0xe8);
    (*(code *)PTR_FUN_8c0a2ad0)(ar4,ar5,a6_00,iVar3);
    (*(code *)PTR_vec3_copy_8c023d8c_8c0a2ad8)
              (ar4 + DAT_8c0a2ad4,(undefined1 *)((int)puVar4 + -0x6c),a6_00,iVar3);
    (*(code *)PTR_object_dtor_delete_8c0a2adc)
              ((undefined1 *)((int)puVar4 + -0x6c),0xffffffff,a6_00,iVar3);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a2ad4) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a2ad4) = (ulonglong)uVar5;
    }
    *(int *)((int)puVar4 + -0xd8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0xd8) + DAT_8c0a2ae0),uVar1)
      ;
    }
    else {
      dVar10 = *(double *)(*(int *)((int)puVar4 + -0xd8) + DAT_8c0a2ae0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0a2ae8,*(undefined4 *)(ar4 + DAT_8c0a2ae4));
    }
    else {
      in_xd0 = *(double *)(ar4 + DAT_8c0a2ae4);
      in_dr0 = (double)CONCAT44(DAT_8c0a2aec,DAT_8c0a2ae8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar6 = SUB84(in_dr0,0) + fVar12;
      in_dr0 = (double)CONCAT44(fVar12,fVar6);
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) / fVar6,SUB84(dVar10,0));
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      dVar10 = dVar10 / in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar4 + -0xd8) + DAT_8c0a2ae0) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(*(int *)((int)puVar4 + -0xd8) + DAT_8c0a2ae0) = dVar10;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + (int)DAT_8c0a2aec) = 0;
    }
    else {
      *(double *)(ar4 + (int)DAT_8c0a2aec) = in_dr0;
    }
    a7 = (double *)0x0;
    a6_01 = (double *)0x0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a2af8)(ar4 + DAT_8c0a2af4,7,0,0);
    *(int *)((int)puVar4 + -0xdc) = ar4;
    *(int *)(DAT_8c0a2afc + *(int *)((int)puVar4 + -0xdc)) =
         *(int *)(DAT_8c0a2afc + *(int *)((int)puVar4 + -0xdc)) + 1;
switchD_8c0a242e_caseD_4:
    fVar6 = SUB84(in_dr0,0);
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
      (*(code *)PTR_vec3_copy_8c02b5fc_8c0a2b00)
                ((undefined1 *)((int)puVar4 + -0x78),ar4 + DAT_8c0a2ad4,a6_01,a7);
      *(undefined1 **)((int)puVar4 + -0xe8) = (undefined1 *)((int)puVar4 + -0x88);
      (*(code *)PTR_FUN_8c0a2b08)(ar4 + DAT_8c0a2b04,(undefined1 *)((int)puVar4 + -0x78),a6_01,a7);
      (*(code *)PTR_Vec3_assign_8c0a2b0c)
                (ar4 + DAT_8c0a2b04,(undefined1 *)((int)puVar4 + -0x88),a6_01,a7);
      (*(code *)PTR_Vec3_dtor_8c0a2b10)((undefined1 *)((int)puVar4 + -0x88),0xffffffff,a6_01,a7);
      (*(code *)PTR_object_dtor_delete_8c0a2adc)
                ((undefined1 *)((int)puVar4 + -0x78),0xffffffff,a6_01,a7);
    }
    (*(code *)PTR_FUN_8c0a2b14)(ar4,ar6,ar5,a7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(int *)((int)puVar4 + -0xe0) = ar4;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(*(int *)((int)puVar4 + -0xe0) + 0x28);
    }
    else {
      in_xd0 = *(double *)(*(int *)((int)puVar4 + -0xe0) + 0x28);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a2b18),fVar6);
    }
    else {
      dVar10 = *(double *)(ar4 + DAT_8c0a2b18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar10 - dVar10,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar4 + -0xe0) + 0x28) = fVar6;
      fVar6 = *(float *)(ar4 + 0x28);
    }
    else {
      *(double *)(*(int *)((int)puVar4 + -0xe0) + 0x28) = in_xd0;
    }
    if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
      }
    }
    uVar7 = (ulonglong)(uint)fVar6;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a2b1c)(ar4 + DAT_8c0a2af4,ar6,ar5,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xc0) = (int)(uVar7 >> 0x20);
      fVar6 = *(float *)((int)puVar4 + -0xc0);
      fVar12 = DAT_8c0a2ae8;
    }
    else {
      *(ulonglong *)((int)puVar4 + -0xc0) = uVar7;
      fVar6 = DAT_8c0a2ae8;
      fVar12 = DAT_8c0a2aec;
    }
    if (in_FPSCR_PR != '\0' || fVar12 <= fVar6) {
      uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0a2b20)(ar4 + DAT_8c0a2af4,ar6,ar5,a7);
      *(undefined4 *)((int)puVar4 + -0xc4) = uVar1;
      if (*(int *)((int)puVar4 + -0xc4) == 7) {
        if (in_FPSCR_SZ == '\0') {
          fVar6 = *(float *)(ar4 + 0x28);
        }
        in_dr0 = (double)(ulonglong)(uint)fVar6;
        if (fVar6 == 0.0) {
          *(int *)((int)puVar4 + -0xe4) = ar4;
          *(int *)(DAT_8c0a2afc + *(int *)((int)puVar4 + -0xe4)) =
               *(int *)(DAT_8c0a2afc + *(int *)((int)puVar4 + -0xe4)) + 1;
switchD_8c0a242e_caseD_5:
          uVar5 = SUB84(in_dr0,0);
          *(undefined4 *)(DAT_8c0a2bc8 + ar4) = 1;
          iVar3 = ar4 + DAT_8c0a2bd4;
          a5 = PTR_FUN_8c0a2bd8;
          (*(code *)PTR_FUN_8c0a2bd8)(iVar3,PTR_FUN_8c0a2bd8,iVar3,a7);
          (*(code *)PTR_Vec3_set_xyz_8c0a2bdc)((undefined1 *)((int)puVar4 + -0x94),a5,iVar3,a7);
          (*(code *)PTR_vec3_copy_8c023d8c_8c0a2be4)
                    (ar4 + DAT_8c0a2be0,(undefined1 *)((int)puVar4 + -0x94),iVar3,a7);
          (*(code *)PTR_object_dtor_delete_8c0a2be8)
                    ((undefined1 *)((int)puVar4 + -0x94),0xffffffff,iVar3,a7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar5;
          }
          goto switchD_8c0a242e_default;
        }
      }
    }
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a2b38)(ar4 + DAT_8c0a2b34,ar6,ar5,a7);
  }
  else {
    (*(code *)PTR_Vec3_set_xyz_8c0a26c8)
              ((undefined1 *)((int)puVar4 + DAT_8c0a26c4 + -0xe4),pdVar2,a6_01,a7);
    *(undefined1 **)((int)puVar4 + -0xe8) = (undefined1 *)((int)puVar4 + DAT_8c0a26c4 + -0xe4);
    *(undefined1 **)((int)puVar4 + -0xec) = (undefined1 *)((int)puVar4 + DAT_8c0a26cc + -0xe8);
    a7 = (double *)(ar4 + 0x14);
    a6_01 = ar6;
    (*(code *)PTR_FUN_8c0a26d0)(ar4,ar5,ar6,a7);
    (*(code *)PTR_Vec3_assign_8c0a26dc)
              ((undefined1 *)((int)puVar4 + DAT_8c0a26d8 + -0xe4),
               (undefined1 *)((int)puVar4 + DAT_8c0a26d4 + -0xe4),a6_01,a7);
    (*(code *)PTR_Vec3_dtor_8c0a26e0)
              ((undefined1 *)((int)puVar4 + DAT_8c0a26d4 + -0xe4),0xffffffff,a6_01,a7);
    (*(code *)PTR_object_dtor_delete_8c0a26e4)
              ((undefined1 *)((int)puVar4 + DAT_8c0a26c4 + -0xe4),0xffffffff,a6_01,a7);
    pdVar2 = ar6;
    (*(code *)PTR_FUN_8c0a26e8)(ar5,ar6,a6_01,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xa8) = (int)((ulonglong)in_dr0 >> 0x20);
      fVar6 = *(float *)((int)puVar4 + -0xa8);
      fVar12 = DAT_8c0a26ec;
    }
    else {
      *(double *)((int)puVar4 + -0xa8) = in_dr0;
      in_xd0 = *(double *)((int)puVar4 + -0xa8);
      fVar6 = DAT_8c0a26ec;
      fVar12 = _DAT_8c0a26f0;
    }
    if (in_FPSCR_PR == '\0' && fVar6 < fVar12) {
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),
                                  *(undefined4 *)((int)puVar4 + DAT_8c0a26d8 + -0xe4));
      }
      else {
        in_xd0 = *(double *)((int)puVar4 + DAT_8c0a26d8 + -0xe4);
        dVar10 = *(double *)(ar4 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar10 - dVar10,0);
      }
      fVar12 = _DAT_8c0a26f0;
      fVar11 = _DAT_8c0a26f4;
      if (in_FPSCR_SZ == '\0') {
        fVar12 = fVar6;
        fVar11 = _DAT_8c0a26f0;
      }
      if (in_FPSCR_PR == '\0' && fVar12 < fVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),
                                    *(undefined4 *)((int)puVar4 + DAT_8c0a26d8 + -0xe4));
        }
        else {
          in_xd0 = *(double *)((int)puVar4 + DAT_8c0a26d8 + -0xe4);
          dVar10 = *(double *)(ar4 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar10 - dVar10,0);
        }
        fVar12 = _DAT_8c0a26f4;
        fVar11 = DAT_8c0a26f8;
        if (in_FPSCR_SZ == '\0') {
          fVar12 = fVar6;
          fVar11 = _DAT_8c0a26f4;
        }
        if (in_FPSCR_PR == '\0' && fVar11 < fVar12) {
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),
                                      *(undefined4 *)((int)puVar4 + (int)DAT_8c0a26f8 + -0xe4));
          }
          else {
            in_xd0 = *(double *)((int)puVar4 + (int)DAT_8c0a26f8 + -0xe4);
            dVar10 = *(double *)(ar4 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar10 - dVar10,0);
          }
          fVar12 = _DAT_8c0a26f0;
          fVar11 = _DAT_8c0a26f4;
          if (in_FPSCR_SZ == '\0') {
            fVar12 = fVar6;
            fVar11 = _DAT_8c0a26f0;
          }
          if (in_FPSCR_PR == '\0' && fVar12 < fVar11) {
            if (in_FPSCR_SZ == '\0') {
              dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),
                                        *(undefined4 *)((int)puVar4 + (int)DAT_8c0a26f8 + -0xe4));
            }
            else {
              in_xd0 = *(double *)((int)puVar4 + (int)DAT_8c0a26f8 + -0xe4);
              dVar10 = *(double *)(ar4 + 0x18);
            }
            if (in_FPSCR_PR == '\0') {
              fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
            }
            else {
              fVar6 = SUB84(dVar10 - dVar10,0);
            }
            fVar12 = _DAT_8c0a26f4;
            fVar11 = DAT_8c0a26f8;
            if (in_FPSCR_SZ == '\0') {
              fVar12 = fVar6;
              fVar11 = _DAT_8c0a26f4;
            }
            if (in_FPSCR_PR == '\0' && fVar11 < fVar12) {
              if (in_FPSCR_SZ == '\0') {
                dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),
                                          *(undefined4 *)((int)puVar4 + DAT_8c0a26fc + -0xe4));
              }
              else {
                in_xd0 = *(double *)((int)puVar4 + DAT_8c0a26fc + -0xe4);
                dVar10 = *(double *)(ar4 + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
              }
              else {
                fVar6 = SUB84(dVar10 - dVar10,0);
              }
              fVar12 = _DAT_8c0a26f0;
              fVar11 = _DAT_8c0a26f4;
              if (in_FPSCR_SZ == '\0') {
                fVar12 = fVar6;
                fVar11 = _DAT_8c0a26f0;
              }
              if (in_FPSCR_PR == '\0' && fVar12 < fVar11) {
                if (in_FPSCR_SZ == '\0') {
                  dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),
                                            *(undefined4 *)((int)puVar4 + DAT_8c0a26fc + -0xe4));
                }
                else {
                  in_xd0 = *(double *)((int)puVar4 + DAT_8c0a26fc + -0xe4);
                  dVar10 = *(double *)(ar4 + 0x1c);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
                }
                else {
                  fVar6 = SUB84(dVar10 - dVar10,0);
                }
                fVar12 = _DAT_8c0a26f4;
                fVar11 = DAT_8c0a26f8;
                if (in_FPSCR_SZ == '\0') {
                  fVar12 = fVar6;
                  fVar11 = _DAT_8c0a26f4;
                }
                if (in_FPSCR_PR == '\0' && fVar11 < fVar12) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar1 = *(undefined4 *)(ar4 + 0x28);
                    uVar8 = CONCAT44(uVar1,fVar12);
                    *(undefined4 *)(ar4 + 0x24) = uVar1;
                  }
                  else {
                    uVar8 = *(undefined8 *)(ar4 + 0x28);
                    *(undefined8 *)(ar4 + 0x24) = uVar8;
                  }
                  pdVar2 = ar5;
                  (*(code *)PTR_FUN_8c0a26e8)(ar6,ar5,a6_01,a7);
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)((int)puVar4 + -0xac) = (int)((ulonglong)uVar8 >> 0x20);
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                               *(undefined4 *)((int)puVar4 + -0xac));
                    dVar10 = (double)CONCAT44(DAT_8c0a2700,(int)uVar8);
                  }
                  else {
                    *(undefined8 *)((int)puVar4 + -0xac) = uVar8;
                    dVar10 = (double)CONCAT44(DAT_8c0a2704,DAT_8c0a2700);
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                             SUB84(in_dr14,0) * (float)((ulonglong)dVar10 >> 0x20));
                  }
                  else {
                    dVar9 = in_dr14 * dVar10;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar10,0));
                  }
                  else {
                    dVar10 = *(double *)(ar4 + 0x28);
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                             SUB84(dVar9,0) / (float)((ulonglong)dVar10 >> 0x20));
                  }
                  else {
                    dVar9 = dVar9 / dVar10;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar10,0));
                  }
                  else {
                    in_dr0 = *(double *)(ar4 + 0x28);
                  }
                  if (in_FPSCR_PR == '\0') {
                    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) / SUB84(dVar9,0),
                                              SUB84(in_dr0,0));
                  }
                  else {
                    in_dr0 = in_dr0 / dVar9;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(ar4 + DAT_8c0a2704) = (int)((ulonglong)in_dr0 >> 0x20);
                  }
                  else {
                    *(double *)(ar4 + DAT_8c0a2704) = in_dr0;
                  }
                  *(int *)((int)puVar4 + -0xcc) = ar4;
                  *(int *)(DAT_8c0a2708 + *(int *)((int)puVar4 + -0xcc)) =
                       *(int *)(DAT_8c0a2708 + *(int *)((int)puVar4 + -0xcc)) + 1;
switchD_8c0a242e_caseD_2:
                  fVar6 = SUB84(in_dr0,0);
                  if (in_FPSCR_SZ == '\0') {
                    fVar6 = *(float *)(ar4 + 0x28);
                  }
                  else {
                    in_xd0 = *(double *)(ar4 + 0x28);
                  }
                  uVar7 = (ulonglong)(uint)fVar6;
                  if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
                    if (in_FPSCR_SZ == '\0') {
                      dVar10 = (double)CONCAT44(DAT_8c0a27e8,*(undefined4 *)(ar4 + DAT_8c0a27e4));
                    }
                    else {
                      in_xd0 = *(double *)(ar4 + DAT_8c0a27e4);
                      dVar10 = (double)CONCAT44(DAT_8c0a27ec,DAT_8c0a27e8);
                    }
                    if (in_FPSCR_PR == '\0') {
                      fVar6 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
                    }
                    else {
                      fVar6 = SUB84(dVar10 + dVar10,0);
                    }
                    if (in_FPSCR_SZ == '\0') {
                      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a27ec),fVar6);
                    }
                    else {
                      dVar10 = *(double *)(ar4 + DAT_8c0a27ec);
                    }
                    if (in_FPSCR_PR == '\0') {
                      fVar6 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
                    }
                    else {
                      fVar6 = SUB84(dVar10 * dVar10,0);
                    }
                    if (in_FPSCR_SZ == '\0') {
                      uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar6);
                    }
                    else {
                      uVar8 = *(undefined8 *)(ar4 + 0x28);
                    }
                    if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)((ulonglong)uVar8 >> 0x20)) {
                      (*(code *)PTR_FUN_8c0a28a8)(ar4 + DAT_8c0a28a4,pdVar2,a6_01,a7);
                      uVar1 = (undefined4)uVar8;
                      (*(code *)PTR_FUN_8c0a28ac)(ar4,ar6,ar5,a7);
                      *(undefined4 *)(ar4 + 0x40) = 3;
                      *(int *)((int)puVar4 + -0xd4) = ar4;
                      if (in_FPSCR_SZ == '\0') {
                        uVar1 = *(undefined4 *)(*(int *)((int)puVar4 + -0xd4) + 0x28);
                      }
                      else {
                        in_xd0 = *(double *)(*(int *)((int)puVar4 + -0xd4) + 0x28);
                      }
                      if (in_FPSCR_SZ == '\0') {
                        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a28b0),uVar1);
                      }
                      else {
                        dVar10 = *(double *)(ar4 + DAT_8c0a28b0);
                      }
                      if (in_FPSCR_PR == '\0') {
                        fVar6 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
                      }
                      else {
                        fVar6 = SUB84(dVar10 - dVar10,0);
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(float *)(*(int *)((int)puVar4 + -0xd4) + 0x28) = fVar6;
                        fVar6 = *(float *)(ar4 + 0x28);
                      }
                      else {
                        *(double *)(*(int *)((int)puVar4 + -0xd4) + 0x28) = in_xd0;
                      }
                      if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
                        if (in_FPSCR_SZ == '\0') {
                          *(undefined4 *)(ar4 + 0x28) = 0;
                        }
                        else {
                          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
                        }
                      }
                      uVar7 = (ulonglong)(uint)fVar6;
                      *(undefined1 **)((int)puVar4 + -0xe8) =
                           (undefined1 *)((int)puVar4 + DAT_8c0a28b4 + -0xe4);
                      (*(code *)PTR_FUN_8c0a28b8)(ar4 + 0x14,ar6,ar5,a7);
                      uVar1 = (*(code *)PTR_Vec3_length_8c0a28bc)
                                        ((undefined1 *)((int)puVar4 + DAT_8c0a28b4 + -0xe4),ar6,ar5,
                                         a7);
                      *(undefined4 *)((int)puVar4 + -0xb8) = uVar1;
                      (*(code *)PTR_Vec3_assign_8c0a28c4)
                                (ar4 + DAT_8c0a28c0,*(undefined4 *)((int)puVar4 + -0xb8),ar5,a7);
                      uVar1 = 0xffffffff;
                      (*(code *)PTR_Vec3_dtor_8c0a28c8)
                                ((undefined1 *)((int)puVar4 + DAT_8c0a28b4 + -0xe4),0xffffffff,ar5,
                                 a7);
                      (*(code *)PTR_CAnimBody_GetCurFrame_8c0a28cc)(ar4 + DAT_8c0a28a4,uVar1,ar5,a7)
                      ;
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)((int)puVar4 + -0xbc) = (int)(uVar7 >> 0x20);
                      }
                      else {
                        *(ulonglong *)((int)puVar4 + -0xbc) = uVar7;
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(undefined4 *)(ar4 + DAT_8c0a28d0) = *(undefined4 *)((int)puVar4 + -0xbc);
                      }
                      else {
                        *(undefined8 *)(ar4 + DAT_8c0a28d0) = *(undefined8 *)((int)puVar4 + -0xbc);
                      }
                      goto switchD_8c0a242e_default;
                    }
                    *(int *)((int)puVar4 + -0xd0) = ar4;
                    *(int *)(DAT_8c0a27f0 + *(int *)((int)puVar4 + -0xd0)) =
                         *(int *)(DAT_8c0a27f0 + *(int *)((int)puVar4 + -0xd0)) + 1;
                  }
                  else {
                    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a27a0)
                              (ar4 + DAT_8c0a279c,pdVar2,a6_01,a7);
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)((int)puVar4 + -0xb4) = (int)(uVar7 >> 0x20);
                    }
                    else {
                      *(ulonglong *)((int)puVar4 + -0xb4) = uVar7;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      uVar1 = (undefined4)*(ulonglong *)((int)puVar4 + -0xb4);
                      uVar7 = CONCAT44(uVar1,(int)uVar7);
                      *(undefined4 *)(ar4 + DAT_8c0a27a4) = uVar1;
                    }
                    else {
                      uVar7 = *(ulonglong *)((int)puVar4 + -0xb4);
                      *(ulonglong *)(ar4 + DAT_8c0a27a4) = uVar7;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      *(undefined4 *)(ar4 + 0x28) = 0;
                    }
                    else {
                      *(ulonglong *)(ar4 + 0x28) = uVar7 & 0xffffffff;
                    }
                    *(undefined4 *)(DAT_8c0a27a8 + ar4) = 3;
                  }
                  goto switchD_8c0a242e_caseD_3;
                }
              }
            }
          }
        }
      }
    }
    *(undefined1 **)((int)puVar4 + -0xe8) = (undefined1 *)((int)puVar4 + DAT_8c0a2748 + -0xe4);
    (*(code *)PTR_FUN_8c0a274c)(ar4 + 0x14,pdVar2,a6_01,a7);
    uVar1 = (*(code *)PTR_Vec3_length_8c0a2750)
                      ((undefined1 *)((int)puVar4 + DAT_8c0a2748 + -0xe4),pdVar2,a6_01,a7);
    *(undefined4 *)((int)puVar4 + -0xb0) = uVar1;
    (*(code *)PTR_Vec3_assign_8c0a2758)
              (ar4 + DAT_8c0a2754,*(undefined4 *)((int)puVar4 + -0xb0),a6_01,a7);
    (*(code *)PTR_Vec3_dtor_8c0a275c)
              ((undefined1 *)((int)puVar4 + DAT_8c0a2748 + -0xe4),0xffffffff,a6_01,a7);
  }
switchD_8c0a242e_default:
  *(undefined4 *)((int)puVar4 + -0x98) = 1;
  (*(code *)PTR_Vec3_dtor_8c0a2bf0)
            ((undefined1 *)((int)puVar4 + DAT_8c0a2bec + -0xe4),0xffffffff,PTR_Vec3_dtor_8c0a2bf0,
             (undefined1 *)((int)puVar4 + DAT_8c0a2bec + -0xe4));
  return *(undefined4 *)((int)puVar4 + -0x98);
}



/* FUN_8c0a2bf4 @ 8c0a2bf4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a2cda) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a2bf4(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  double *a5;
  undefined4 uVar3;
  undefined4 unaff_r11;
  char cVar4;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar5;
  float fVar6;
  double in_dr0;
  float fVar10;
  undefined8 uVar7;
  double dVar8;
  ulonglong uVar9;
  double in_dr2;
  double dVar11;
  double in_dr4;
  undefined4 uVar12;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  uVar2 = SUB84(in_dr2,0);
  uVar3 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar5 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = uVar3;
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
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44(uVar3,(int)((ulonglong)in_dr4 >> 0x20));
    in_dr4 = in_xd14;
  }
  a5 = (double *)0x1;
  switch(*(undefined4 *)(DAT_8c0a2c34 + ar4)) {
  case 0:
    (*(code *)PTR_vec3_clear_8c0a2cf4)(ar4 + DAT_8c0a2cf0,1,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a2cf8)(ar4 + 0x54,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)DAT_8c0a2cfc);
    }
    else {
      in_xd0 = CONCAT44(DAT_8c0a2cfc._4_4_,(undefined4)DAT_8c0a2cfc);
      dVar8 = in_dr4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x58) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x58) = dVar8;
    }
    (*(code *)PTR_FUN_8c0a2d04)(ar4,DAT_8c0a2cfc._4_4_,ar6,ar7);
    iVar1 = ar4 + 0x54;
    (*(code *)PTR_FUN_8c0a2d0c)(ar4,ar5,iVar1,ar7);
    (*(code *)PTR_FUN_8c0a2d10)(ar5,ar4 + 0x54,iVar1,PTR_FUN_8c0a2d10);
    uVar2 = SUB84(in_dr2,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + DAT_8c0a2d14 + -0xa4) = (int)((ulonglong)dVar8 >> 0x20);
      fVar6 = *(float *)((int)puVar5 + DAT_8c0a2d14 + -0xa4);
      fVar10 = DAT_8c0a2d18;
    }
    else {
      *(double *)((int)puVar5 + DAT_8c0a2d14 + -0xa4) = dVar8;
      in_xd0 = *(undefined8 *)((int)puVar5 + DAT_8c0a2d14 + -0xa4);
      fVar6 = DAT_8c0a2d18;
      fVar10 = DAT_8c0a2d1c;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar6) {
      ar7 = 0;
      uVar3 = 1;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a2dac)
                (ar4 + (int)DAT_8c0a2da4._4_4_,1,0xffffffff,0);
      ar6 = DAT_8c0a2da4._4_4_;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a2db0)
                (ar4 + (int)DAT_8c0a2da4._4_4_,uVar3,DAT_8c0a2da4._4_4_,ar7);
      *(int *)((int)puVar5 + -0x60) = ar4;
      *(int *)(DAT_8c0a2db4 + *(int *)((int)puVar5 + -0x60)) =
           *(int *)(DAT_8c0a2db4 + *(int *)((int)puVar5 + -0x60)) + 1;
      goto switchD_8c0a2c2e_caseD_1;
    }
    ar7 = 0;
    ar6 = (double *)0x0;
    a5 = (double *)0x2;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a2d20)(ar4 + (int)DAT_8c0a2d1c,2,0,0);
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar6;
    if (fVar6 == 0.0) {
      in_dr0 = (double)CONCAT44(0x3f800000,fVar6);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(double *)(ar4 + 0x28) = in_dr0;
      }
    }
    *(undefined4 *)(DAT_8c0a2d24 + ar4) = 3;
  case 3:
switchD_8c0a2c2e_caseD_3:
    fVar6 = SUB84(in_dr0,0);
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c0a30dc)(ar4 + DAT_8c0a30d8,a5,ar6,ar7);
    *(undefined4 *)((int)puVar5 + -0x3c) = uVar2;
    if (*(int *)((int)puVar5 + -0x3c) == 2) {
      (*(code *)PTR_FUN_8c0a31ec)(ar4 + DAT_8c0a31e8,a5,ar6,ar7);
    }
    else {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a30e0)(ar4 + DAT_8c0a30d8,a5,ar6,ar7);
    }
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x18);
    }
    cVar4 = in_FPSCR_PR == '\0' && 0.0 < fVar6;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x54);
      dVar8 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 - dVar8,0);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x14);
      }
      if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
        cVar4 = cVar4 + '\x01';
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x54);
      dVar8 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 - dVar8,0);
    }
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x14);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
        cVar4 = cVar4 + '\x01';
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x5c);
      dVar8 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 - dVar8,0);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x1c);
      }
      if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
        cVar4 = cVar4 + '\x01';
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 0x5c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x5c);
      dVar8 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 - dVar8,0);
    }
    dVar8 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x1c);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x1c);
      }
      dVar8 = (double)(ulonglong)(uint)fVar6;
      if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
        cVar4 = cVar4 + '\x01';
      }
    }
    if (cVar4 == '\x03') {
      if (in_FPSCR_SZ == '\0') {
        uVar2 = *(undefined4 *)(ar4 + 0x28);
        uVar7 = CONCAT44(uVar2,SUB84(dVar8,0));
        *(undefined4 *)(ar4 + 0x24) = uVar2;
      }
      else {
        uVar7 = *(undefined8 *)(ar4 + 0x28);
        *(undefined8 *)(ar4 + 0x24) = uVar7;
      }
      a5 = (double *)(ar4 + 0x54);
      (*(code *)PTR_FUN_8c0a31f0)(ar5,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar5 + -0x40) = (int)((ulonglong)uVar7 >> 0x20);
        dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -0x40),SUB84(in_dr14,0));
        dVar11 = (double)CONCAT44(DAT_8c0a31f4,(int)uVar7);
      }
      else {
        *(undefined8 *)((int)puVar5 + -0x40) = uVar7;
        dVar8 = *(double *)((int)puVar5 + -0x40);
        dVar11 = (double)CONCAT44(DAT_8c0a31f8,DAT_8c0a31f4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) *
                                 (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 * dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar11 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) /
                                   (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar8,0));
      }
      else {
        in_dr14 = dVar8 / dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) /
                                  (float)((ulonglong)in_dr14 >> 0x20),SUB84(dVar8,0));
      }
      else {
        in_dr0 = dVar8 / in_dr14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0a31f8) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c0a31f8) = in_dr0;
      }
      *(int *)((int)puVar5 + -0x7c) = ar4;
      *(int *)(DAT_8c0a31fc + *(int *)((int)puVar5 + -0x7c)) =
           *(int *)(DAT_8c0a31fc + *(int *)((int)puVar5 + -0x7c)) + 1;
    }
    else {
      a5 = (double *)(ar4 + 0x54);
      ar6 = ar5;
      uVar2 = (*(code *)PTR_FUN_8c0a324c)(ar4,a5,ar5,ar7);
      *(undefined4 *)((int)puVar5 + -0x44) = uVar2;
      if (*(int *)((int)puVar5 + -0x44) != 0) {
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
          dVar8 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c0a3250);
        }
        else {
          in_dr2 = *(double *)((int)ar5 + 4);
          in_xd0 = CONCAT44(DAT_8c0a3254,DAT_8c0a3250);
          dVar8 = in_dr4;
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = (float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0);
          dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0));
          bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
        }
        else {
          dVar8 = dVar8 - dVar8;
          bVar13 = in_dr2 < dVar8;
        }
        uVar2 = SUB84(dVar8,0);
        if (bVar13) {
          *(int *)((int)puVar5 + -0x80) = ar4;
          if (in_FPSCR_SZ == '\0') {
            uVar2 = *(undefined4 *)(*(int *)((int)puVar5 + -0x80) + 0x28);
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x80) + 0x28);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a32d4),uVar2);
          }
          else {
            dVar8 = *(double *)(ar4 + DAT_8c0a32d4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 - dVar8,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar5 + -0x80) + 0x28) = fVar6;
            fVar6 = *(float *)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar5 + -0x80) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
          }
          if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
            return 1;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
          }
          in_dr0 = (double)(ulonglong)(uint)fVar6;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0a32d4) = 0;
          }
          else {
            *(double *)(ar4 + DAT_8c0a32d4) = in_dr0;
          }
          *(int *)((int)puVar5 + -0x84) = ar4;
          *(int *)(DAT_8c0a32d8 + *(int *)((int)puVar5 + -0x84)) =
               *(int *)(DAT_8c0a32d8 + *(int *)((int)puVar5 + -0x84)) + 1;
          break;
        }
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar8 & 0xffffffff;
      }
      in_dr0 = (double)((ulonglong)dVar8 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a3254) = 0;
      }
      else {
        *(double *)(ar4 + DAT_8c0a3254) = in_dr0;
      }
      *(undefined4 *)(DAT_8c0a3258 + ar4) = 4;
    }
    break;
  case 1:
switchD_8c0a2c2e_caseD_1:
    a5 = (double *)((int)ar5 + 4);
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)a5,uVar2);
      dVar8 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c0a2db8);
    }
    else {
      in_dr2 = *a5;
      in_xd0 = CONCAT44(DAT_8c0a2dbc,DAT_8c0a2db8);
      dVar8 = in_dr4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0);
      dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0));
      bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
    }
    else {
      dVar8 = dVar8 - dVar8;
      bVar13 = in_dr2 < dVar8;
    }
    if (bVar13) {
      a5 = (double *)(ar4 + 0x54);
      (*(code *)PTR_FUN_8c0a2e0c)(ar5,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar5 + DAT_8c0a2e10 + -0xa4) = (int)((ulonglong)dVar8 >> 0x20);
        in_dr0 = (double)CONCAT44(DAT_8c0a2e14,*(undefined4 *)((int)puVar5 + DAT_8c0a2e10 + -0xa4));
      }
      else {
        *(double *)((int)puVar5 + DAT_8c0a2e10 + -0xa4) = dVar8;
        in_xd0 = *(undefined8 *)((int)puVar5 + DAT_8c0a2e10 + -0xa4);
        in_dr0 = (double)CONCAT44(DAT_8c0a2e18,DAT_8c0a2e14);
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) {
LAB_8c0a2e1c:
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a2e8c)(ar4 + DAT_8c0a2e88,a5,ar6,ar7);
        (*(code *)PTR_CAnimBody_GetCurFrame_8c0a2e90)(ar4 + DAT_8c0a2e88,a5,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar5 + DAT_8c0a2e94 + -0xa4) = (int)((ulonglong)in_dr0 >> 0x20);
          uVar7 = CONCAT44(DAT_8c0a2e98,*(undefined4 *)((int)puVar5 + DAT_8c0a2e94 + -0xa4));
        }
        else {
          *(double *)((int)puVar5 + DAT_8c0a2e94 + -0xa4) = in_dr0;
          in_xd0 = *(undefined8 *)((int)puVar5 + DAT_8c0a2e94 + -0xa4);
          uVar7 = CONCAT44(_DAT_8c0a2e9c,DAT_8c0a2e98);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)((ulonglong)uVar7 >> 0x20)) {
          return 1;
        }
        (*(code *)PTR_CAnimBody_GetCurFrame_8c0a2e90)(ar4 + DAT_8c0a2e88,a5,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar5 + _DAT_8c0a2e9c + -0xa4) = (int)((ulonglong)uVar7 >> 0x20);
          fVar6 = *(float *)((int)puVar5 + _DAT_8c0a2e9c + -0xa4);
          fVar10 = DAT_8c0a2ea0;
        }
        else {
          *(undefined8 *)((int)puVar5 + _DAT_8c0a2e9c + -0xa4) = uVar7;
          in_xd0 = *(undefined8 *)((int)puVar5 + _DAT_8c0a2e9c + -0xa4);
          fVar6 = DAT_8c0a2ea0;
          fVar10 = DAT_8c0a2ea4;
        }
        if (in_FPSCR_PR == '\0' && fVar6 < fVar10) {
          *(int *)((int)puVar5 + -0x6c) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(DAT_8c0a2edc,
                                     *(undefined4 *)(*(int *)((int)puVar5 + -0x6c) + DAT_8c0a2ed8));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x6c) + DAT_8c0a2ed8);
            dVar8 = (double)CONCAT44(PTR_FUN_8c0a2ee0,DAT_8c0a2edc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 + dVar8,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar5 + -0x6c) + DAT_8c0a2ed8) = fVar6;
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar5 + -0x6c) + DAT_8c0a2ed8) = in_xd0;
          }
        }
        else {
          *(int *)((int)puVar5 + -0x68) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(DAT_8c0a2ea8,
                                     *(undefined4 *)
                                      (*(int *)((int)puVar5 + -0x68) + (int)DAT_8c0a2ea4));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x68) + (int)DAT_8c0a2ea4);
            dVar8 = (double)CONCAT44(uRam8c0a2eac,DAT_8c0a2ea8);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 - dVar8,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)puVar5 + -0x68) + (int)DAT_8c0a2ea4) = fVar6;
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar5 + -0x68) + (int)DAT_8c0a2ea4) = in_xd0;
          }
        }
        (*(code *)PTR_FUN_8c0a2ee0)(ar4,ar4 + 0x54,ar5,ar7);
        return 1;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)(ulonglong)*(uint *)(ar4 + 0x18);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x18);
        dVar8 = in_dr0;
      }
      in_dr0 = (double)((ulonglong)dVar8 & 0xffffffff);
      if (in_FPSCR_PR != '\0' || SUB84(dVar8,0) <= 0.0) goto LAB_8c0a2e1c;
      *(int *)((int)puVar5 + -100) = ar4;
      *(int *)(DAT_8c0a2e18 + *(int *)((int)puVar5 + -100)) =
           *(int *)(DAT_8c0a2e18 + *(int *)((int)puVar5 + -100)) + 1;
      goto switchD_8c0a2c2e_caseD_2;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar8 & 0xffffffff;
    }
    in_dr0 = (double)((ulonglong)dVar8 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a2dbc) = 0;
    }
    else {
      *(double *)(ar4 + DAT_8c0a2dbc) = in_dr0;
    }
    *(undefined4 *)(DAT_8c0a2db4 + ar4) = 4;
    (*(code *)PTR_vec3_clear_8c0a2dc4)(ar4 + DAT_8c0a2dc0,a5,ar6,ar7);
    break;
  case 2:
switchD_8c0a2c2e_caseD_2:
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a2f94)(ar4 + DAT_8c0a2f90,a5,ar6,ar7);
    *(undefined4 *)((int)puVar5 + -0x28) = uVar2;
    if (*(int *)((int)puVar5 + -0x28) == 1) {
      (*(code *)PTR_vec3_clear_8c0a2f9c)(ar4 + DAT_8c0a2f98,a5,ar6,ar7);
      uVar12 = SUB84(in_dr14,0);
      uVar3 = SUB84(in_dr0,0);
      ar7 = 0;
      ar6 = (double *)0xffffffff;
      uVar2 = 2;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a2fa4)(ar4 + DAT_8c0a2f90,2,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a2fa8)(ar4 + DAT_8c0a2f90,uVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar2 = *(undefined4 *)(ar4 + 0x28);
        uVar7 = CONCAT44(uVar2,uVar3);
        *(undefined4 *)(ar4 + 0x24) = uVar2;
      }
      else {
        uVar7 = *(undefined8 *)(ar4 + 0x28);
        *(undefined8 *)(ar4 + 0x24) = uVar7;
      }
      a5 = (double *)(ar4 + 0x54);
      (*(code *)PTR_FUN_8c0a2fac)(ar5,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar5 + -0x2c) = (int)((ulonglong)uVar7 >> 0x20);
        dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -0x2c),uVar12);
        dVar11 = (double)CONCAT44(DAT_8c0a2fb0,(int)uVar7);
      }
      else {
        *(undefined8 *)((int)puVar5 + -0x2c) = uVar7;
        dVar8 = *(double *)((int)puVar5 + -0x2c);
        dVar11 = (double)CONCAT44(DAT_8c0a2fb4,DAT_8c0a2fb0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) *
                                 (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 * dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar11 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) /
                                   (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar8,0));
      }
      else {
        in_dr14 = dVar8 / dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) /
                                  (float)((ulonglong)in_dr14 >> 0x20),SUB84(dVar8,0));
      }
      else {
        in_dr0 = dVar8 / in_dr14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0a2fb4) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c0a2fb4) = in_dr0;
      }
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a2f94)(ar4 + DAT_8c0a2f90,a5,ar6,ar7);
      *(int *)((int)puVar5 + -0x70) = ar4;
      *(int *)(DAT_8c0a2fb8 + *(int *)((int)puVar5 + -0x70)) =
           *(int *)(DAT_8c0a2fb8 + *(int *)((int)puVar5 + -0x70)) + 1;
      goto switchD_8c0a2c2e_caseD_3;
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a3018)(ar4 + DAT_8c0a3014,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x30) = (int)((ulonglong)in_dr0 >> 0x20);
      uVar7 = CONCAT44(DAT_8c0a301c,*(undefined4 *)((int)puVar5 + -0x30));
    }
    else {
      *(double *)((int)puVar5 + -0x30) = in_dr0;
      in_xd0 = *(undefined8 *)((int)puVar5 + -0x30);
      uVar7 = CONCAT44(_DAT_8c0a3020,DAT_8c0a301c);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)((ulonglong)uVar7 >> 0x20)) {
      return 1;
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a3018)(ar4 + DAT_8c0a3014,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x34) = (int)((ulonglong)uVar7 >> 0x20);
      fVar6 = *(float *)((int)puVar5 + -0x34);
      fVar10 = _DAT_8c0a3020;
    }
    else {
      *(undefined8 *)((int)puVar5 + -0x34) = uVar7;
      in_xd0 = *(undefined8 *)((int)puVar5 + -0x34);
      fVar6 = _DAT_8c0a3020;
      fVar10 = DAT_8c0a3024;
    }
    if (in_FPSCR_PR == '\0' && fVar6 < fVar10) {
      *(int *)((int)puVar5 + -0x78) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0a3098,
                                 *(undefined4 *)(*(int *)((int)puVar5 + -0x78) + DAT_8c0a3094));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x78) + DAT_8c0a3094);
        dVar8 = (double)CONCAT44(PTR_FUN_8c0a309c,DAT_8c0a3098);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)(ulonglong)(uint)(SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar5 + -0x78) + DAT_8c0a3094) = SUB84(dVar8,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar5 + -0x78) + DAT_8c0a3094) = in_xd0;
      }
    }
    else {
      *(int *)((int)puVar5 + -0x74) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0a3028,
                                 *(undefined4 *)(*(int *)((int)puVar5 + -0x74) + (int)DAT_8c0a3024))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x74) + (int)DAT_8c0a3024);
        dVar8 = (double)CONCAT44(uRam8c0a302c,DAT_8c0a3028);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)(ulonglong)(uint)(SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        dVar8 = dVar8 - dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar5 + -0x74) + (int)DAT_8c0a3024) = SUB84(dVar8,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar5 + -0x74) + (int)DAT_8c0a3024) = in_xd0;
      }
    }
    a5 = (double *)(ar4 + 0x54);
    ar6 = ar5;
    uVar2 = (*(code *)PTR_FUN_8c0a309c)(ar4,a5,ar5,ar7);
    *(undefined4 *)((int)puVar5 + -0x38) = uVar2;
    if (*(int *)((int)puVar5 + -0x38) != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),SUB84(in_dr2,0));
        dVar8 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c0a30a0);
      }
      else {
        in_dr2 = *(double *)((int)ar5 + 4);
        in_xd0 = CONCAT44(DAT_8c0a30a4,DAT_8c0a30a0);
        dVar8 = in_dr4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0);
        dVar8 = (double)CONCAT44(fVar6,SUB84(dVar8,0));
        bVar13 = (float)((ulonglong)in_dr2 >> 0x20) < fVar6;
      }
      else {
        dVar8 = dVar8 - dVar8;
        bVar13 = in_dr2 < dVar8;
      }
      if (bVar13) {
        return 1;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar8 & 0xffffffff;
    }
    in_dr0 = (double)((ulonglong)dVar8 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a30a4) = 0;
    }
    else {
      *(double *)(ar4 + DAT_8c0a30a4) = in_dr0;
    }
    *(undefined4 *)(DAT_8c0a30a8 + ar4) = 4;
    break;
  case 4:
    break;
  case 5:
    goto switchD_8c0a2c2e_caseD_5;
  case 6:
    goto switchD_8c0a2c2e_caseD_6;
  case 7:
    if (*(int *)(DAT_8c0a35b4 + ar4) <= DAT_8c0a35b8) {
      (*(code *)PTR_FUN_8c0a35c8)(ar4 + DAT_8c0a35c4,1,ar6,ar7);
      *(int *)((int)puVar5 + -0xa4) = ar4;
      *(int *)(DAT_8c0a35b4 + *(int *)((int)puVar5 + -0xa4)) =
           *(int *)(DAT_8c0a35b4 + *(int *)((int)puVar5 + -0xa4)) + 1;
      return 1;
    }
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a3618)(ar4 + DAT_8c0a3614,1,ar6,ar7);
    *(undefined4 *)((int)puVar5 + -0x5c) = uVar2;
    if (*(int *)((int)puVar5 + -0x5c) != 1) {
      return 1;
    }
    *(undefined4 *)(DAT_8c0a361c + ar4) = 0;
    *(undefined4 *)(DAT_8c0a3620 + ar4) = 0;
    return 0;
  default:
    goto switchD_8c0a2c2e_default;
  }
  uVar12 = SUB84(in_dr2,0);
  uVar3 = SUB84(in_dr0,0);
  uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c0a32e0)(ar4 + DAT_8c0a32dc,a5,ar6,ar7);
  *(undefined4 *)((int)puVar5 + -0x48) = uVar2;
  if (*(int *)((int)puVar5 + -0x48) == 2) {
    (*(code *)PTR_FUN_8c0a3354)(ar4 + DAT_8c0a3350,a5,ar6,ar7);
  }
  else {
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a32e4)(ar4 + DAT_8c0a32dc,a5,ar6,ar7);
  }
  *(int *)((int)puVar5 + -0x88) = ar4;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = *(undefined4 *)(*(int *)((int)puVar5 + -0x88) + 0x28);
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x88) + 0x28);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a3358),uVar3);
  }
  else {
    dVar8 = *(double *)(ar4 + DAT_8c0a3358);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar5 + -0x88) + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar5 + -0x88) + 0x28) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
  }
  dVar8 = (double)(ulonglong)(uint)fVar6;
  if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
    uVar2 = (*(code *)PTR_FUN_8c0a33ac)(ar4,ar4 + 0x54,ar5,ar7);
    *(undefined4 *)((int)puVar5 + -0x4c) = uVar2;
    if (*(int *)((int)puVar5 + -0x4c) != 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uVar12);
        in_dr4 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c0a33b0);
      }
      else {
        dVar11 = *(double *)((int)ar5 + 4);
        in_xd0 = CONCAT44(DAT_8c0a33b4,DAT_8c0a33b0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)((ulonglong)in_dr4 >> 0x20) - SUB84(in_dr4,0);
        dVar8 = (double)CONCAT44(fVar6,SUB84(in_dr4,0));
        bVar13 = (float)((ulonglong)dVar11 >> 0x20) < fVar6;
      }
      else {
        dVar8 = in_dr4 - in_dr4;
        bVar13 = dVar11 < dVar8;
      }
      if (bVar13) {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar11,0));
        }
        else {
          dVar8 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(DAT_8c0a33f4,*(undefined4 *)(ar4 + DAT_8c0a33f0));
        }
        else {
          dVar11 = (double)CONCAT44(_DAT_8c0a33f8,DAT_8c0a33f4);
        }
        if (in_FPSCR_PR == '\0') {
          bVar13 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20) <
                   (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar13 = dVar11 * dVar11 < dVar8;
        }
        if (bVar13) {
          return 1;
        }
        *(int *)((int)puVar5 + -0x90) = ar4;
        *(int *)(_DAT_8c0a33f8 + *(int *)((int)puVar5 + -0x90)) =
             *(int *)(_DAT_8c0a33f8 + *(int *)((int)puVar5 + -0x90)) + 1;
        return 1;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar8 & 0xffffffff;
    }
    in_dr0 = (double)((ulonglong)dVar8 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a33b4) = 0;
    }
    else {
      *(double *)(ar4 + DAT_8c0a33b4) = in_dr0;
    }
    *(undefined4 *)(DAT_8c0a33b8 + ar4) = 5;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    in_dr0 = (double)(ulonglong)(uint)fVar6;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a3358) = 0;
    }
    else {
      *(double *)(ar4 + DAT_8c0a3358) = in_dr0;
    }
    *(int *)((int)puVar5 + -0x8c) = ar4;
    *(int *)(DAT_8c0a335c + *(int *)((int)puVar5 + -0x8c)) =
         *(int *)(DAT_8c0a335c + *(int *)((int)puVar5 + -0x8c)) + 1;
  }
switchD_8c0a2c2e_caseD_5:
  uVar2 = SUB84(in_dr0,0);
  *(int *)((int)puVar5 + -0x94) = ar4;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(*(int *)((int)puVar5 + -0x94) + 0x28);
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x94) + 0x28);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a3550),uVar2);
  }
  else {
    dVar8 = *(double *)(ar4 + DAT_8c0a3550);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar5 + -0x94) + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar5 + -0x94) + 0x28) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
  }
  in_dr0 = (double)(ulonglong)(uint)fVar6;
  if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
LAB_8c0a3432:
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a3550) = 0;
    }
    else {
      *(double *)(ar4 + DAT_8c0a3550) = in_dr0;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0a3554,*(undefined4 *)((int)ar5 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)((int)ar5 + 4);
      in_dr0 = (double)CONCAT44(PTR_FUN_8c0a3558,DAT_8c0a3554);
    }
    if (in_FPSCR_PR == '\0') {
      bVar13 = SUB84(in_dr0,0) < SUB84(in_dr14,0) - (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar13 = in_dr0 < in_dr14 - in_dr0;
    }
    if (!bVar13) goto LAB_8c0a3432;
  }
  uVar2 = (*(code *)PTR_FUN_8c0a3558)(ar4,ar4 + 0x54,ar5,ar4 + 0x54);
  *(undefined4 *)((int)puVar5 + -0x50) = uVar2;
  if (*(int *)((int)puVar5 + -0x50) == 0) {
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(double *)(ar4 + 0x28) = in_dr0;
    }
  }
  ar7 = 0;
  uVar3 = 0xffffffff;
  uVar2 = 8;
  (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a3564)(ar4 + DAT_8c0a3560,8,0xffffffff,0);
  (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a3568)(ar4 + DAT_8c0a3560,uVar2,uVar3,ar7);
  *(int *)((int)puVar5 + -0x98) = ar4;
  *(int *)(DAT_8c0a356c + *(int *)((int)puVar5 + -0x98)) =
       *(int *)(DAT_8c0a356c + *(int *)((int)puVar5 + -0x98)) + 1;
switchD_8c0a2c2e_caseD_6:
  uVar2 = SUB84(in_dr0,0);
  *(int *)((int)puVar5 + -0x9c) = ar4;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(*(int *)((int)puVar5 + -0x9c) + 0x28);
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar5 + -0x9c) + 0x28);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a3550),uVar2);
  }
  else {
    dVar8 = *(double *)(ar4 + DAT_8c0a3550);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)((int)puVar5 + -0x9c) + 0x28) = fVar6;
    fVar6 = *(float *)(ar4 + 0x28);
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar5 + -0x9c) + 0x28) = in_xd0;
  }
  if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a3550) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a3550) = (ulonglong)(uint)fVar6;
    }
  }
  uVar9 = (ulonglong)(uint)fVar6;
  iVar1 = ar4 + 0x54;
  uVar2 = (*(code *)PTR_FUN_8c0a3558)(ar4,iVar1,ar5,ar7);
  *(undefined4 *)((int)puVar5 + -0x54) = uVar2;
  if (*(int *)((int)puVar5 + -0x54) == 0) {
    uVar9 = uVar9 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9;
    }
  }
  (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a3570)(ar4 + DAT_8c0a3560,iVar1,ar5,ar7);
  (*(code *)PTR_CAnimBody_GetCurFrame_8c0a3574)(ar4 + DAT_8c0a3560,iVar1,ar5,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar5 + -0x58) = (int)(uVar9 >> 0x20);
    uVar9 = CONCAT44(DAT_8c0a3578,*(undefined4 *)((int)puVar5 + -0x58));
  }
  else {
    *(ulonglong *)((int)puVar5 + -0x58) = uVar9;
    uVar9 = CONCAT44(uRam8c0a357c,DAT_8c0a3578);
  }
  if (in_FPSCR_PR != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar9 & 0xffffffff;
    }
    *(int *)((int)puVar5 + -0xa0) = ar4;
    *(int *)(DAT_8c0a356c + *(int *)((int)puVar5 + -0xa0)) =
         *(int *)(DAT_8c0a356c + *(int *)((int)puVar5 + -0xa0)) + 1;
  }
switchD_8c0a2c2e_default:
  return 1;
}



/* FUN_8c0a3624 @ 8c0a3624 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3624(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  undefined4 a6;
  undefined4 uVar3;
  float in_fr1;
  float extraout_fr1;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [20];
  
  uVar3 = 1;
  uVar2 = ar5;
  if (*(int *)(DAT_8c0a376c + ar4) == 0) {
    (*(code *)PTR_FUN_8c0a3780)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a3784)(ar4 + 0x54,auStack_20,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a3788)(auStack_20,0xffffffff,ar6,ar7);
    ar7 = 0;
    a6 = 0xffffffff;
    a5 = 1;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a3794)(ar4 + DAT_8c0a378c._4_4_,1,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a3798)(ar4 + DAT_8c0a378c._4_4_,a5,a6,ar7);
    (*(code *)PTR_FUN_8c0a37a0)(ar4,DAT_8c0a379c,a6,ar7);
    ar6 = ar4 + 0x54;
    (*(code *)PTR_FUN_8c0a37a4)(ar4,ar5,ar6,ar7);
    *(int *)(DAT_8c0a376c + ar4) = *(int *)(DAT_8c0a376c + ar4) + 1;
    in_fr1 = extraout_fr1;
  }
  else if (*(int *)(DAT_8c0a376c + ar4) != 1) {
    return 1;
  }
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + DAT_8c0a37a8);
  }
  if (in_FPSCR_PR == '\0' && in_fr1 < 0.0) {
    (*(code *)PTR_vec3_clear_8c0a37bc)(ar4 + DAT_8c0a37b8,uVar2,ar6,ar7);
    uVar2 = ar5;
    (*(code *)PTR_FUN_8c0a37c0)(ar4,ar5,ar5,ar7);
    iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a37c4)
                      (ar4 + DAT_8c0a378c._4_4_,ar5,uVar2,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c0a376c + ar4) = 0;
      uVar3 = 0;
    }
  }
  else {
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0a37b0)(ar4 + DAT_8c0a378c._4_4_,uVar2,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0a37b4)(ar4,ar4 + 0x54,ar5,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_8c0a376c + ar4) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* FUN_8c0a37c8 @ 8c0a37c8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a37c8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined8 in_dr0;
  ulonglong uVar5;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar3 = *(int *)(ar5 + 0x10);
  iVar1 = *(int *)(ar4 + 0x68);
  if (iVar1 == 0) {
    if (iVar3 != 3) {
      return iVar3;
    }
    (*(code *)PTR_FUN_8c0a3a3c)(ar4,ar5,ar6,ar7);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_44 = (int)in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_44 = uVar2;
      uVar2 = uStack_40;
    }
    uStack_40 = uVar2;
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(uStack_44,(int)in_dr0);
      *(undefined4 *)(ar4 + DAT_8c0a3a40) = uStack_44;
    }
    else {
      uVar5 = CONCAT44(uStack_40,uStack_44);
      *(ulonglong *)(ar4 + DAT_8c0a3a40) = uVar5;
    }
    (*(code *)PTR_vec3_clear_8c0a3a48)(ar4 + DAT_8c0a3a44,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar5 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a3a4c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a3a4c) = uVar5 & 0xffffffff;
    }
    (*(code *)PTR_FUN_8c0a3a50)(ar4,ar5,ar6,ar7);
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a3a5c)(ar4 + DAT_8c0a3a54._4_4_,2,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a3a60)(ar4 + DAT_8c0a3a54._4_4_,ar5,ar6,ar7);
    *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar3;
      }
      (*(code *)PTR_FUN_8c0a3aa0)(auStack_3c,*(undefined4 *)(ar5 + 0xc),ar6,ar7);
      iVar3 = ar4 + 0x54;
      uVar2 = 1;
      iVar1 = (*(code *)PTR_s_CMushroomerBody_AwayFrom_0a1ed0_8c0a3aa4)
                        (ar4,**(undefined4 **)(ar5 + 4),1,iVar3);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a3aa8)(auStack_3c,0xffffffff,uVar2,iVar3);
      if (iVar1 != 0) {
        return 3;
      }
      *(undefined4 *)(ar4 + 0x68) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      return 3;
    }
    goto LAB_8c0a38c6;
  }
  (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a3a64)(ar4 + DAT_8c0a3a54._4_4_,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a3a6c)(ar4,ar5,ar6,ar7);
  if (iVar3 == 3) {
    return 3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0a3a74,*(undefined4 *)(ar4 + DAT_8c0a3a70));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0a3a70);
    dVar6 = (double)CONCAT44(_DAT_8c0a3a78,DAT_8c0a3a74);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0a3a70) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0a3a70) = in_xd0;
  }
  *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
LAB_8c0a38c6:
  (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a3a64)(ar4 + DAT_8c0a3a54._4_4_,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(_DAT_8c0a3a78,*(undefined4 *)(ar4 + DAT_8c0a3a70));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0a3a70);
    dVar6 = (double)CONCAT44(PTR_FUN_8c0a3a7c,_DAT_8c0a3a78);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0a3a70) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0a3a70) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a3a40) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0a3a40) = (ulonglong)(uint)fVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44((undefined4)DAT_8c0a3a54,*(undefined4 *)(ar4 + DAT_8c0a3a70));
  }
  else {
    uVar5 = CONCAT44(DAT_8c0a3a54._4_4_,(undefined4)DAT_8c0a3a54);
  }
  if (in_FPSCR_PR != '\0' || (float)(uVar5 >> 0x20) <= (float)uVar5) {
    (*(code *)PTR_FUN_8c0a3a7c)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a3a70) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a3a70) = uVar5 & 0xffffffff;
    }
    *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(DAT_8c0a3a80 + ar4) = 0;
    (*(code *)PTR_FUN_8c0a3a3c)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0a3a3c)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0a3a3c)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_xyz_8c0a3a90)(auStack_20,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a3a94)(ar4 + 0x54,auStack_20,ar6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a3a98)(auStack_20,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_normalize_8c0a3a9c)(ar4 + 0x54,uVar2,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a3a94)(ar4 + 0x54,auStack_30,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a3a98)(auStack_30,0xffffffff,ar6,ar7);
  }
  return 3;
}



/* FUN_8c0a3aac @ 8c0a3aac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3aac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 a6;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_dr0;
  undefined *puVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  puVar6 = (undefined *)((ulonglong)in_dr0 >> 0x20);
  uVar4 = 1;
  if (*(int *)(DAT_8c0a3cbc + ar4) == 0) {
    ar7 = 0;
    a6 = 0;
    uVar3 = 4;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a3cc8)(ar4 + DAT_8c0a3cc0._4_4_,4,0,0);
    *(undefined4 *)(DAT_8c0a3ccc + ar4) = 1;
    *(int *)(DAT_8c0a3cbc + ar4) = *(int *)(DAT_8c0a3cbc + ar4) + 1;
  }
  else {
    uVar3 = ar5;
    a6 = ar6;
    if (*(int *)(DAT_8c0a3cbc + ar4) != 1) {
      return 1;
    }
  }
  iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0a3cd0)(ar4 + DAT_8c0a3cc0._4_4_,uVar3,a6,ar7);
  if (iVar1 == 4) {
    (*(code *)PTR_Vec3_set_xyz_8c0a3cdc)(auStack_18,uVar3,a6,ar7);
    iVar1 = ar4 + DAT_8c0a3ce0;
    (*(code *)PTR_FUN_8c0a3ce4)(ar4,ar5,ar6,iVar1);
    (*(code *)PTR_Vec3_assign_8c0a3ce8)(ar4 + DAT_8c0a3ce0,auStack_28,ar6,iVar1);
    (*(code *)PTR_Vec3_dtor_8c0a3cec)(auStack_28,0xffffffff,ar6,iVar1);
    uVar3 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c0a3cf0)(auStack_18,0xffffffff,ar6,iVar1);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a3cf4)(ar4 + DAT_8c0a3cc0._4_4_,uVar3,ar6,iVar1);
    puVar5 = DAT_8c0a3cd8;
    puVar7 = PTR_Vec3_set_xyz_8c0a3cdc;
    if (in_FPSCR_SZ == '\0') {
      puVar5 = puVar6;
      puVar7 = DAT_8c0a3cd8;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar7 <= (float)puVar5) {
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0a3cf4)(ar4 + DAT_8c0a3cc0._4_4_,uVar3,ar6,iVar1);
      puVar6 = DAT_8c0a3cf8;
      puVar5 = DAT_8c0a3cfc;
      if (in_FPSCR_SZ == '\0') {
        puVar6 = puVar7;
        puVar5 = DAT_8c0a3cf8;
      }
      puVar7 = puVar5;
      if (in_FPSCR_PR == '\0' && (float)puVar6 < (float)puVar7) {
        iVar2 = *(int *)(DAT_8c0a3cfc + ar4);
        *(int *)(DAT_8c0a3cfc + ar4) = iVar2 + 1;
        *(int *)(DAT_8c0a3cfc + ar4) = iVar2 + 2;
        if (4 < *(int *)(DAT_8c0a3cfc + ar4)) {
          *(undefined4 *)(DAT_8c0a3cfc + ar4) = 5;
        }
      }
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a3cf4)(ar4 + DAT_8c0a3cc0._4_4_,uVar3,ar6,iVar1);
    puVar6 = DAT_8c0a3cf8;
    puVar5 = DAT_8c0a3cfc;
    if (in_FPSCR_SZ == '\0') {
      puVar6 = puVar7;
      puVar5 = DAT_8c0a3cf8;
    }
    if ((in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar6) &&
       (*(int *)(DAT_8c0a3cfc + ar4) = *(int *)(DAT_8c0a3cfc + ar4) + -1,
       *(int *)(DAT_8c0a3cfc + ar4) < 3)) {
      *(undefined4 *)(DAT_8c0a3cfc + ar4) = 0;
    }
    iVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a3cd4)
                      (ar4 + DAT_8c0a3cc0._4_4_,uVar3,ar6,iVar1);
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(DAT_8c0a3cbc + ar4) = 0;
      *(undefined4 *)(DAT_8c0a3cfc + ar4) = 0;
    }
    else if (*(int *)(DAT_8c0a3ccc + ar4) != 0) {
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0a3cf4)(ar4 + DAT_8c0a3cc0._4_4_,uVar3,ar6,iVar1);
      puVar6 = DAT_8c0a3d00;
      puVar7 = DAT_8c0a3d04;
      if (in_FPSCR_SZ == '\0') {
        puVar6 = puVar5;
        puVar7 = DAT_8c0a3d00;
      }
      if (in_FPSCR_PR != '\0' || (float)puVar7 <= (float)puVar6) {
        *(int *)(DAT_8c0a3d04 + ar4) = *(int *)(DAT_8c0a3d04 + ar4) + *(int *)(DAT_8c0a3ccc + ar4);
        if (*(int *)(DAT_8c0a3d04 + ar4) < 7) {
          if (*(int *)(DAT_8c0a3d04 + ar4) < 2) {
            *(undefined4 *)(DAT_8c0a3ccc + ar4) = 0;
          }
        }
        else {
          *(int *)(DAT_8c0a3ccc + ar4) = -*(int *)(DAT_8c0a3ccc + ar4);
        }
      }
    }
  }
  else {
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a3cd4)(ar4 + DAT_8c0a3cc0._4_4_,uVar3,a6,ar7);
  }
  return uVar4;
}



/* FUN_8c0a3d08 @ 8c0a3d08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0a3d08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 a7;
  undefined1 *a7_00;
  undefined1 auStack_1c [16];
  
  uVar3 = ar6;
  a7 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c0a3da8)(ar4 + DAT_8c0a3da4,ar6,ar6,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c0a3db0)(auStack_1c,ar7,uVar3,a7);
    a7_00 = auStack_1c;
    uVar3 = ar6;
    iVar1 = (*(code *)PTR_FUN_8c0a3db4)(ar4,ar5,ar6,a7_00);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a3db8)(auStack_1c,0xffffffff,uVar3,a7_00);
    if (iVar1 == 0) {
      (*(code *)PTR_Vec3_assign_8c0a3dbc)(ar4 + DAT_8c0a3da4,ar6,uVar3,a7_00);
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c0a3dac)(ar4,0,uVar3,a7);
  }
  return uVar2;
}



/* FUN_8c0a3dc0 @ 8c0a3dc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3dc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *a5;
  undefined4 a6;
  undefined4 a7;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  int iStack_64;
  int iStack_60;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_set_zero_8c0a3f18)(&fStack_14,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_sub_8c0a3f1c)(ar6,ar5,a6,a7);
  uVar1 = (*(code *)PTR_Vec3_length_8c0a3f20)(auStack_34,ar5,a6,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c0a3f24)(auStack_24,uVar1,a6,a7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0a3f28)(auStack_34,0xffffffff,a6,a7);
  (*(code *)PTR_FUN_8c0a3f2c)(ar7,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0a3f2c)(auStack_24,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0a3f30)(auStack_44,auStack_54,a6,a7);
  uStack_10 = SUB84(in_dr0,0);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = uVar1;
    uVar1 = uStack_c;
  }
  uStack_c = uVar1;
  (*(code *)PTR_Vec3_dtor_8c0a3f28)(auStack_54,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0a3f28)(auStack_44,0xffffffff,a6,a7);
  a5 = auStack_24;
  iStack_60 = (*(code *)PTR_FUN_8c0a3f34)(ar7,a5,a6,a7);
  if (iStack_60 == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0a3f38,uStack_10);
    }
    else {
      in_xd0 = CONCAT44(uStack_c,uStack_10);
      in_dr0 = (double)CONCAT44(PTR_FUN_8c0a3f3c,DAT_8c0a3f38);
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
  (*(code *)PTR_FUN_8c0a3f3c)(auStack_24,a5,a6,a7);
  iVar2 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_64 = iVar2;
  if (in_FPSCR_SZ != '\0') {
    iStack_64 = SUB84(in_dr0,0);
    iStack_60 = iVar2;
  }
  (*(code *)PTR_FUN_8c0a3f3c)(ar7,a5,a6,a7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44(uVar1,iStack_64);
  }
  else {
    in_xd0 = CONCAT44(iStack_60,uVar1);
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
      dVar4 = (double)CONCAT44(DAT_8c0a3f38,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = (double)CONCAT44(PTR_FUN_8c0a3f3c,DAT_8c0a3f38);
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
  iVar2 = (*(code *)PTR_FUN_8c0a3f40)(ar7,auStack_24,a6,a7);
  if (iVar2 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0a3f38,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = (double)CONCAT44(PTR_FUN_8c0a3f3c,DAT_8c0a3f38);
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
  (*(code *)PTR_vec3_copy_8c02b5fc_8c0a3f44)(in_stack_00000000,&fStack_14,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0a3f28)(auStack_24,0xffffffff,a6,a7);
  (*(code *)PTR_object_dtor_delete_8c0a3f48)(&fStack_14,0xffffffff,a6,a7);
  return 0;
}



/* FUN_8c0a3f4c @ 8c0a3f4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a4076) */
/* WARNING: Removing unreachable block (ram,0x8c0a3f96) */
/* WARNING: Removing unreachable block (ram,0x8c0a3f9a) */
/* WARNING: Removing unreachable block (ram,0x8c0a407a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a3f4c(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int a6;
  undefined4 a6_00;
  undefined4 a7;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  uint in_fr1;
  undefined *puVar4;
  double dVar5;
  undefined *puVar6;
  float fVar7;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_4;
  }
  else {
    puVar3 = auStack_8;
  }
  *(undefined4 *)(puVar3 + -4) = unaff_r14;
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar3 + -0x10) = in_PR;
  uVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0a421c)(ar4 + DAT_8c0a4218,ar5,ar6,ar7);
  dVar5 = (double)(ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar3 + -0x54) = 0;
  }
  else {
    *(double *)(puVar3 + -0x54) = dVar5;
  }
  fVar7 = 1.0;
  (*(code *)PTR_Vec3_ctor_zero_8c0a4220)(puVar3 + -0x20,uVar2,a6,ar7);
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(DAT_8c0a4224 + ar4) << 0x1e))) {
    if ((*(int *)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(DAT_8c0a4224 + ar4) << 0x1d))) {
      uVar2 = (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x20,0xffffffff,a6,ar7);
    }
    else if ((*(int *)(DAT_8c0a424c + ar4) == 0xb) || (*(int *)(DAT_8c0a424c + ar4) == 0xc)) {
      uVar2 = (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x20,0xffffffff,a6,ar7);
    }
    else {
      uVar1 = (*(code *)PTR_get_field_24_05c284_8c0a4250)(*(undefined4 *)(ar6 + 0x50),uVar2,a6,ar7);
      *(undefined4 *)(puVar3 + -0x5c) = uVar1;
      if (*(int *)(puVar3 + -0x5c) == 2) {
        uVar1 = (**(code **)(DAT_8c0a4254 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                          (*(int *)(ar6 + 0x50),uVar2,a6,ar7);
        *(undefined4 *)(puVar3 + -0x60) = uVar1;
        if (*(int *)(puVar3 + -0x60) == 4) {
          *(undefined4 *)(DAT_8c0a4258 + ar4) = 0;
          a7 = 0;
          a6_00 = 0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a4264)
                    (ar4 + DAT_8c0a425c._4_4_,3,0xffffffff,0);
          uVar1 = 3;
          uVar2 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0a4268)
                            (ar4 + DAT_8c0a425c._4_4_,3,a6_00,a7);
          *(undefined4 *)(puVar3 + -100) = uVar2;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a4270)
                    (ar4 + DAT_8c0a425c._4_4_,uVar1,a6_00,a7);
          uVar2 = (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x20,0xffffffff,a6_00,a7);
          return uVar2;
        }
      }
      (**(code **)(DAT_8c0a4274 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                (*(int *)(ar6 + 0x50),uVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar3 + -0x68) = (int)((ulonglong)dVar5 >> 0x20);
        fVar7 = *(float *)(puVar3 + -0x68);
      }
      else {
        *(double *)(puVar3 + -0x68) = dVar5;
      }
      *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
      (*(code *)PTR_FUN_8c0a4278)(*(undefined4 *)(ar6 + 0x50),uVar2,a6,ar7);
      *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
      (*(code *)PTR_Vec3_sub_8c0a4234)(ar5,puVar3 + -0x40,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0a4230)(ar4 + DAT_8c0a4218,puVar3 + -0x50,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x50,0xffffffff,a6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x40,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_sq_8c0a423c)(ar4 + DAT_8c0a4218,uVar2,a6,ar7);
      uVar1 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar3 + -0x6c) = uVar1;
        dVar5 = (double)CONCAT44(uVar1,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        *(double *)(puVar3 + -0x6c) = dVar5;
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar5,0) + fVar7;
      }
      else {
        fVar7 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar7),0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(puVar3 + -0x6c),fVar7);
      }
      else {
        dVar5 = *(double *)(puVar3 + -0x6c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar3 + -0x54) = fVar7;
        puVar4 = *(undefined **)(puVar3 + -0x54);
        puVar6 = DAT_8c0a4240;
      }
      else {
        *(undefined8 *)(puVar3 + -0x54) = in_xd0;
        puVar4 = DAT_8c0a4240;
        puVar6 = PTR_Vec3_length_8c0a4244;
      }
      if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar6) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined **)(puVar3 + -0x54) = DAT_8c0a4240;
        }
        else {
          *(ulonglong *)(puVar3 + -0x54) = CONCAT44(PTR_Vec3_length_8c0a4244,DAT_8c0a4240);
        }
      }
      (*(code *)PTR_Vec3_length_8c0a4244)(ar4 + DAT_8c0a4218,uVar2,a6,ar7);
      (*(code *)PTR_FUN_8c0a4248)(ar4 + DAT_8c0a4218,puVar3 + -0x54,a6,ar7);
      uVar2 = (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x20,0xffffffff,a6,ar7);
    }
  }
  else {
    *(undefined4 *)(DAT_8c0a4228 + ar4) = 1;
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(*(int *)(ar6 + 0x68) + DAT_8c0a422c);
    }
    (*(code *)PTR_Vec3_assign_8c0a4230)(puVar3 + -0x20,*(int *)(ar6 + 0x68) + 4,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(puVar3 + -0x1c),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(puVar3 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + fVar7,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + (double)CONCAT44(in_fr14,fVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar3 + -0x1c) = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *(double *)(puVar3 + -0x1c) = dVar5;
    }
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x30;
    (*(code *)PTR_Vec3_sub_8c0a4234)(ar5,puVar3 + -0x20,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a4230)(ar4 + DAT_8c0a4218,puVar3 + -0x30,a6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x30,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0a423c)(ar4 + DAT_8c0a4218,uVar2,a6,ar7);
    uVar1 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar3 + -0x58) = uVar1;
      dVar5 = (double)CONCAT44(uVar1,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)(puVar3 + -0x58) = dVar5;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar5,0) + fVar7;
    }
    else {
      fVar7 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar7),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(puVar3 + -0x58),fVar7);
    }
    else {
      dVar5 = *(double *)(puVar3 + -0x58);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar3 + -0x54) = fVar7;
      puVar4 = *(undefined **)(puVar3 + -0x54);
      puVar6 = DAT_8c0a4240;
    }
    else {
      *(undefined8 *)(puVar3 + -0x54) = in_xd0;
      puVar4 = DAT_8c0a4240;
      puVar6 = PTR_Vec3_length_8c0a4244;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(puVar3 + -0x54) = DAT_8c0a4240;
      }
      else {
        *(ulonglong *)(puVar3 + -0x54) = CONCAT44(PTR_Vec3_length_8c0a4244,DAT_8c0a4240);
      }
    }
    (*(code *)PTR_Vec3_length_8c0a4244)(ar4 + DAT_8c0a4218,uVar2,a6,ar7);
    (*(code *)PTR_FUN_8c0a4248)(ar4 + DAT_8c0a4218,puVar3 + -0x54,a6,ar7);
    uVar2 = (*(code *)PTR_Vec3_dtor_8c0a4238)(puVar3 + -0x20,0xffffffff,a6,ar7);
  }
  return uVar2;
}



/* Class_12ad14_m3_0a427c @ 8c0a427c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12ad14_m3_0a427c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(DAT_8c0a43a4 + ar4) == 0) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a43b0)(ar4 + DAT_8c0a43a8._4_4_,3,0xffffffff,0)
    ;
    uVar2 = 3;
    (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0a43b4)(ar4 + DAT_8c0a43a8._4_4_,3,uVar3,uVar4);
    iVar1 = (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a43bc)
                      (ar4 + DAT_8c0a43a8._4_4_,uVar2,uVar3,uVar4);
  }
  else {
    iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0a43c0)(ar4 + DAT_8c0a43a8._4_4_,ar5,ar6,ar7);
    if ((iVar1 == 0xd) ||
       (iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0a43c0)(ar4 + DAT_8c0a43a8._4_4_,ar5,ar6,ar7),
       iVar1 == 0xe)) {
      iVar1 = (*(code *)PTR_FUN_8c0a43cc)(ar4 + DAT_8c0a43a8._4_4_,ar5,ar6,ar7);
      if (iVar1 == 7) {
        iVar1 = (*(code *)PTR_rand_range_8c0a43d0)(ar4,0,100,ar7);
        if (iVar1 < 0x50) {
          iVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a43b0)
                            (ar4 + DAT_8c0a43a8._4_4_,0xd,0xffffffff,0);
        }
        else {
          iVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a43b0)
                            (ar4 + DAT_8c0a43a8._4_4_,0xe,0xffffffff,0);
        }
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0xe;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a43b0)
                (ar4 + DAT_8c0a43a8._4_4_,0xe,0xffffffff,0);
      iVar1 = (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a43bc)
                        (ar4 + DAT_8c0a43a8._4_4_,uVar2,uVar3,uVar4);
    }
  }
  return iVar1;
}



/* Class_12ad14_m4_0a43d4 @ 8c0a43d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad14_m4_0a43d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0;
  a6 = 0xffffffff;
  (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a4438)(ar4 + DAT_8c0a4430._4_4_,3,0xffffffff,0);
  uVar1 = 3;
  (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0a443c)(ar4 + DAT_8c0a4430._4_4_,3,a6,a7);
  uVar1 = (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a4444)(ar4 + DAT_8c0a4430._4_4_,uVar1,a6,a7);
  return uVar1;
}



/* FUN_8c0a4448 @ 8c0a4448 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a4448(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a453c)(PTR_DAT_8c0a4538,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a4544;
  uVar2 = DAT_8c0a4540;
  (*(code *)PTR_global_list_push_8c0a4548)(uVar1,PTR_Vec3_dtor_8c0a4544,DAT_8c0a4540,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a453c)(PTR_DAT_8c0a454c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a4544;
  uVar2 = DAT_8c0a4550;
  (*(code *)PTR_global_list_push_8c0a4548)(uVar1,PTR_Vec3_dtor_8c0a4544,DAT_8c0a4550,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a453c)(PTR_DAT_8c0a4554,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a4544;
  uVar2 = DAT_8c0a4558;
  (*(code *)PTR_global_list_push_8c0a4548)(uVar1,PTR_Vec3_dtor_8c0a4544,DAT_8c0a4558,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a453c)(PTR_DAT_8c0a455c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a4544;
  uVar2 = DAT_8c0a4560;
  (*(code *)PTR_global_list_push_8c0a4548)(uVar1,PTR_Vec3_dtor_8c0a4544,DAT_8c0a4560,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a4574)(auStack_1c,puVar3,uVar2,ar7);
  (*(code *)PTR_FUN_8c0a457c)(DAT_8c0a4578,uVar1,uVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a4574)(auStack_34,uVar1,uVar2,ar7);
  (*(code *)PTR_FUN_8c0a457c)(DAT_8c0a4578 + 0x18,uVar1,uVar2,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0a453c)(_DAT_8c0a4588,uVar1,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0a4548)(uVar2,PTR_Vec3_dtor_8c0a4544,DAT_8c0a458c,ar7);
  return uVar2;
}



/* s_GRAPHICS_SPIDERLINE_0a4592 @ 8c0a4590 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_SPIDERLINE_0a4592(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0x18;
  a6 = 1;
  a5 = 0xd;
  (*(code *)PTR_FUN_8c0a4654)(ar4,0xd,1,0x18);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0a4658;
  (*(code *)PTR_FUN_8c0a4660)(ar4 + DAT_8c0a465c,a5,a6,a7);
  (*(code *)PTR_FUN_8c0a4668)(ar4 + DAT_8c0a4664,a5,a6,a7);
  (*(code *)PTR_FUN_8c0a4670)(ar4 + DAT_8c0a466c,a5,a6,a7);
  (*(code *)PTR_FUN_8c0a467c)(ar4 + 0xc,a5,a6,a7);
  *(int *)(DAT_8c0a4680 + ar4) = ar4 + DAT_8c0a465c;
  *(int *)(DAT_8c0a4684 + ar4) = ar4 + DAT_8c0a4664;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)PTR_FUN_8c0a4690)
            (ar4,*(undefined4 *)(DAT_8c0a468c + *(int *)(DAT_8c0a4688 + ar4)),ar4 + DAT_8c0a466c,a7)
  ;
  return ar4;
}



/* Class_12aeec_m0_0a4694 @ 8c0a4694 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12aeec_m0_0a4694(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0a46f8;
    (*(code *)PTR_Class_129938_m0_017084_8c0a4700)(ar4 + DAT_8c0a46fc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12b088_m0_0a62cc_8c0a4708)(ar4 + DAT_8c0a4704,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12b0c4_m0_0ab7ac_8c0a4710)(ar4 + DAT_8c0a470c,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c0a4714)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0a4718)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12aeec_m2_0a471c @ 8c0a471c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m2_0a471c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_CAnimal_m2_02573c_8c0a4740)(ar4,ar5,ar6,ar7);
  return 1;
}



/* Class_12aeec_m3_0a4744 @ 8c0a4744 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m3_0a4744(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_CAnimal_m3_026078_8c0a4768)(ar4,ar5,ar6,ar7);
  return 1;
}



/* Class_12aeec_m4_0a476c @ 8c0a476c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m4_0a476c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12aeec_m5_0a4784 @ 8c0a4784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m5_0a4784(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(DAT_8c0a47ec + ar4) + 0x14))
                    (*(int **)(DAT_8c0a47ec + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12aeec_m6_0a47f0 @ 8c0a47f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m6_0a47f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a4818)(ar4 + DAT_8c0a4814,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a481c @ 8c0a481c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a481c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  int a7;
  int a6;
  int iVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_2c;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fVar6;
  
  (*(code *)PTR_FUN_8c0a49cc)(ar4 + DAT_8c0a49c8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a49d0)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a49d4)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49d8,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,DAT_8c0a49d8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c0a49e0,DAT_8c0a49dc);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    a7 = (int)(dVar5 / dVar5);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49d8,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,DAT_8c0a49d8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c0a49e0,DAT_8c0a49dc);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    a6 = (int)(dVar5 / dVar5);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49d8,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,DAT_8c0a49d8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c0a49e0,DAT_8c0a49dc);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar5 / dVar5);
  }
  (*(code *)PTR_FUN_8c0a49e0)(0,iVar7,a6,a7);
  (*(code *)PTR_FUN_8c0a49e8)(ar4 + DAT_8c0a49e4,iVar7,a6,a7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c0a49ec)(&uStack_14,auStack_20,a6,a7);
  (*(code *)PTR_object_dtor_delete_8c0a49f0)(auStack_20,0xffffffff,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49d8,uStack_10);
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,DAT_8c0a49d8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c0a49e0,DAT_8c0a49dc);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar5 / dVar5);
  }
  (*(code *)PTR_FUN_8c0a49f4)(0,iVar7,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49d8,uStack_14);
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,DAT_8c0a49d8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c0a49e0,DAT_8c0a49dc);
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar7 = (int)(dVar5 / dVar5);
  }
  (*(code *)PTR_FUN_8c0a49f8)(0,iVar7,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49d8,uStack_c);
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,DAT_8c0a49d8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0a49dc,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(PTR_FUN_8c0a49e0,DAT_8c0a49dc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) / fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    iVar7 = (int)fVar4;
  }
  else {
    dVar5 = dVar5 / dVar5;
    iVar7 = (int)dVar5;
  }
  uStack_2c = (undefined4)((ulonglong)dVar5 >> 0x20);
  (*(code *)PTR_FUN_8c0a49fc)(0,iVar7,a6,a7);
  (*(code *)PTR_FUN_8c0a4a00)(0,iVar7,a6,a7);
  (*(code *)PTR_FUN_8c0a4a08)(*(int *)(DAT_8c0a4a04 + ar4) + 0x78,iVar7,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c0a4a0c)(*(int *)(DAT_8c0a4a04 + ar4) + 0x70,iVar7,a6,a7);
  iVar2 = (*(code *)PTR_FUN_8c0a4a14)(*(undefined4 *)(DAT_8c0a4a10 + ar4),iVar7,a6,a7);
  uVar3 = (*(code *)PTR_deref_u32_8c0a4a1c)
                    (*(int *)(DAT_8c0a4a18 + *(int *)(DAT_8c0a4a04 + ar4)) + iVar2 * 4,iVar7,a6,a7);
  (*(code *)PTR_FUN_8c0a4a20)(*(undefined4 *)(DAT_8c0a4a10 + ar4),iVar7,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    uStack_2c = uVar3;
  }
  (*(code *)PTR_FUN_8c0a4a24)(uVar1,uStack_2c,a6,a7);
  (*(code *)PTR_FUN_8c0a4a28)(1,uStack_2c,a6,a7);
  (*(code *)PTR_FUN_8c0a49cc)(PTR_DAT_8c0a4a2c,uStack_2c,a6,a7);
  (*(code *)PTR_FUN_8c0a4a30)(ar4 + DAT_8c0a49e4,uStack_2c,a6,a7);
  uVar1 = (*(code *)PTR_object_dtor_delete_8c0a49f0)(&uStack_14,0xffffffff,a6,a7);
  return uVar1;
}



/* FUN_8c0a4a34 @ 8c0a4a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a4a34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_vec3_copy_8c02b5fc_8c0a4a58)(in_stack_00000000,ar4 + DAT_8c0a4a54,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a4a5c @ 8c0a4a5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a4a5c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  undefined4 uStack_14;
  
  (*(code *)PTR_FUN_8c0a4ad0)(*(int *)(DAT_8c0a4acc + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a4ad4)(*(int *)(DAT_8c0a4acc + ar4) + 0x70,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0a4adc)(*(undefined4 *)(DAT_8c0a4ad8 + ar4),ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_deref_u32_8c0a4ae4)
                    (*(int *)(DAT_8c0a4ae0 + *(int *)(DAT_8c0a4acc + ar4)) + iVar2 * 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a4ae8)(*(undefined4 *)(DAT_8c0a4ad8 + ar4),ar5,ar6,ar7);
  uStack_14 = extraout_fr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = uVar3;
  }
  uVar1 = (*(code *)PTR_FUN_8c0a4aec)(uVar1,uStack_14,ar6,ar7);
  return uVar1;
}



/* s_Sp_Home_njd_0a4af0 @ 8c0a4af0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_Sp_Home_njd_0a4af0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined8 in_dr0;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined **)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 4) = PTR_PTR_8c0a4d5c;
    *(undefined **)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 8) = PTR_PTR_8c0a4d60;
    *(undefined4 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 0xc) = *(undefined4 *)PTR_PTR_8c0a4d64;
    *(undefined4 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 0x10) = 0;
    *(undefined4 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 0x14) = *(undefined4 *)PTR_PTR_8c0a4d68;
    *(undefined4 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 0x18) = *(undefined4 *)PTR_PTR_8c0a4d6c;
    *(undefined4 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 0x20) = *(undefined4 *)PTR_PTR_8c0a4d70;
    *(undefined4 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 0x24) = 7;
    *(undefined4 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + 0x30) = DAT_8c0a4d74;
    *(undefined4 *)(DAT_8c0a4d78 + iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58) = DAT_8c0a4d7c;
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + DAT_8c0a4d80);
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44((undefined4)DAT_8c0a4d84,(int)in_dr0);
      *(undefined4 *)puVar1 = (undefined4)DAT_8c0a4d84;
    }
    else {
      uVar6 = CONCAT44(DAT_8c0a4d84._4_4_,(undefined4)DAT_8c0a4d84);
      *puVar1 = uVar6;
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + DAT_8c0a4d84._4_4_);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,(int)uVar6);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + DAT_8c0a4d8c);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = DAT_8c0a4d90;
    }
    else {
      *puVar1 = CONCAT44(_DAT_8c0a4d94,DAT_8c0a4d90);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + _DAT_8c0a4d94);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = DAT_8c0a4d98;
    }
    else {
      *puVar1 = CONCAT44(_DAT_8c0a4d9c,DAT_8c0a4d98);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + _DAT_8c0a4d9c);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = DAT_8c0a4da0;
    }
    else {
      *puVar1 = CONCAT44(_DAT_8c0a4da4,DAT_8c0a4da0);
    }
    *(undefined4 *)(_DAT_8c0a4da4 + iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58) = DAT_8c0a4da8;
    *(undefined2 *)(DAT_8c0a4dac + iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58) = 9;
    *(undefined4 *)(DAT_8c0a4db0 + iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58) = DAT_8c0a4db4;
    *(undefined2 *)(DAT_8c0a4db8 + iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58) = 9;
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + DAT_8c0a4dbc);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = (undefined4)DAT_8c0a4dc0;
    }
    else {
      *puVar1 = CONCAT44(DAT_8c0a4dc0._4_4_,(undefined4)DAT_8c0a4dc0);
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + DAT_8c0a4dc0._4_4_);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = DAT_8c0a4dc8;
    }
    else {
      *puVar1 = CONCAT44(_DAT_8c0a4dcc,DAT_8c0a4dc8);
    }
    iVar2 = iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58;
    pfVar3 = (float *)(iVar2 + _DAT_8c0a4dcc);
    puVar1 = (undefined8 *)(iVar2 + _DAT_8c0a4dcc);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0a4dd0,*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar7 = (double)CONCAT44(DAT_8c0a4dd4,DAT_8c0a4dd0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *pfVar3 = fVar5;
    }
    else {
      *(undefined8 *)pfVar3 = in_xd0;
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + DAT_8c0a4dd4);
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(DAT_8c0a4dd8,fVar5);
      *(undefined4 *)puVar1 = DAT_8c0a4dd8;
    }
    else {
      uVar6 = CONCAT44(_DAT_8c0a4ddc,DAT_8c0a4dd8);
      *puVar1 = uVar6;
    }
    puVar1 = (undefined8 *)(iVar4 * DAT_8c0a4d54 + DAT_8c0a4d58 + _DAT_8c0a4ddc);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c0a4de0,(int)uVar6);
      *(undefined4 *)puVar1 = DAT_8c0a4de0;
    }
    else {
      in_dr0 = CONCAT44(_DAT_8c0a4de4,DAT_8c0a4de0);
      *puVar1 = in_dr0;
    }
  }
  *_DAT_8c0a4de4 = 0xffff;
  *(undefined4 *)(_DAT_8c0a4de4 + 2) = 1;
  *(undefined4 *)(_DAT_8c0a4de4 + 4) = 1;
  *(undefined4 *)(_DAT_8c0a4de4 + 6) = 0;
  return 0;
}



/* s_GRAPHICS_MOTHLINE_0a4dea @ 8c0a4de8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MOTHLINE_0a4dea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  int a6_00;
  undefined4 a7;
  uint in_fr1;
  uint uVar2;
  char in_FPSCR_SZ;
  
  a7 = 0x19;
  a6 = 1;
  uVar1 = 0xc;
  (*(code *)PTR_FUN_8c0a4ef8)(ar4,0xc,1,0x19);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0a4efc;
  (*(code *)PTR_FUN_8c0a4f04)(ar4 + DAT_8c0a4f00,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0a4f0c)(ar4 + DAT_8c0a4f08,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0a4f14)(ar4 + DAT_8c0a4f10,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0a4f20)(ar4 + 0xc,uVar1,a6,a7);
  *(int *)(DAT_8c0a4f24 + ar4) = ar4 + DAT_8c0a4f08;
  *(int *)(DAT_8c0a4f28 + ar4) = ar4 + DAT_8c0a4f10;
  *(undefined1 *)(DAT_8c0a4f2c + ar4) = 0xff;
  a6_00 = ar4 + DAT_8c0a4f00;
  uVar1 = *(undefined4 *)(DAT_8c0a4f34 + *(int *)(DAT_8c0a4f30 + ar4));
  (*(code *)PTR_FUN_8c0a4f38)(ar4,uVar1,a6_00,a7);
  (*(code *)PTR_FUN_8c0a4f3c)(ar4 + DAT_8c0a4f10,uVar1,a6_00,a7);
  uVar2 = DAT_8c0a4f40;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = in_fr1;
  }
  (**(code **)(*(int *)(ar4 + DAT_8c0a4f44) + 0x28))
            ((int *)(ar4 + DAT_8c0a4f44),ar4 + 0x30,a6_00,a7);
  *(undefined4 *)(DAT_8c0a4f48 + ar4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a4f4c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0a4f4c) = (ulonglong)uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a4f50) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0a4f50) = (ulonglong)uVar2;
  }
  return ar4;
}



/* Class_12ad50_m0_0a4f54 @ 8c0a4f54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12ad50_m0_0a4f54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0a4fb8;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c0a4fc0)(ar4 + DAT_8c0a4fbc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129c24_m0_02ff90_8c0a4fc8)(ar4 + DAT_8c0a4fc4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c0a4fd0)(ar4 + DAT_8c0a4fcc,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c0a4fd4)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0a4fd8)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12ad50_m2_0a4fdc @ 8c0a4fdc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a5220) */
/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m2_0a4fdc(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  uint uVar1;
  int *a7;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0;
  double dVar5;
  double dVar6;
  undefined4 in_fr3;
  undefined8 in_xd0;
  bool bVar7;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  uVar3 = (undefined4)in_dr0;
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
  *(undefined4 *)(puVar2 + -0x44) = ar6;
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(int *)(puVar2 + -0x24) = ar4;
    if (in_FPSCR_SZ == '\0') {
      uVar3 = *(undefined4 *)(*(int *)(puVar2 + -0x24) + 0x34);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar2 + -0x24) + 0x34);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a5298),uVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + DAT_8c0a5298);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x24) + 0x34) = fVar4;
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x24) + 0x34) = in_xd0;
    }
    *(int *)(puVar2 + -0x28) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0a529c,*(undefined4 *)(*(int *)(puVar2 + -0x28) + DAT_8c0a5298)
                              );
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar2 + -0x28) + DAT_8c0a5298);
      dVar5 = (double)CONCAT44(DAT_8c0a52a0,DAT_8c0a529c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x28) + DAT_8c0a5298) = fVar4;
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x28) + DAT_8c0a5298) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c0a52a0,*(undefined4 *)(ar4 + DAT_8c0a5298));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0a5298);
      in_dr0 = CONCAT44(DAT_8c0a52a4,DAT_8c0a52a0);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c0a52a0,(float)in_dr0);
        *(undefined4 *)(ar4 + DAT_8c0a5298) = DAT_8c0a52a0;
      }
      else {
        in_dr0 = CONCAT44(DAT_8c0a52a4,DAT_8c0a52a0);
        *(undefined8 *)(ar4 + DAT_8c0a5298) = in_dr0;
      }
    }
  }
  fVar4 = (float)in_dr0;
  uVar1 = ar5;
  a7 = ar7;
  switch(*(undefined1 *)(DAT_8c0a52a4 + ar4)) {
  case 0:
    uVar3 = (*(code *)PTR_FUN_8c0a52b4)(ar5,ar5,ar6,ar7);
    *(short *)(puVar2 + -0x3e) = (short)uVar3;
    uVar3 = (*(code *)PTR_get_field_c_02d1b8_8c0a52c4)(ar4 + DAT_8c0a52ac,uVar1,ar6,a7);
    *(undefined4 *)(puVar2 + -0x18) = uVar3;
    uVar1 = 0x3c;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0a52c8)
                      ((uint)*(ushort *)(puVar2 + -0x3e) - *(int *)(puVar2 + -0x18),0x3c,ar6,a7);
    *(undefined4 *)(puVar2 + -0x2c) = uVar3;
    if (0 < *(int *)(puVar2 + -0x2c)) {
      *(undefined1 *)(DAT_8c0a52a4 + ar4) = 1;
    }
    if (*(int *)(DAT_8c0a52bc + ar4) != 0) {
      (**(code **)(DAT_8c0a52cc + *(int *)(*(int *)(DAT_8c0a52bc + ar4) + 8)))
                (*(int *)(DAT_8c0a52bc + ar4),1,ar6,a7);
      ar6 = *(undefined4 *)(puVar2 + -0x44);
      (**(code **)(*(int *)(*(int *)(DAT_8c0a52bc + ar4) + 8) + 0x10))
                (*(int *)(DAT_8c0a52bc + ar4),ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0a52d0)(*(undefined4 *)(DAT_8c0a52bc + ar4),ar5,ar6,ar7);
      uVar3 = (**(code **)(DAT_8c0a52d4 + *(int *)(*(int *)(DAT_8c0a52bc + ar4) + 8)))
                        (*(int *)(DAT_8c0a52bc + ar4),ar5,ar6,ar7);
      *(undefined4 *)(puVar2 + -0x1c) = uVar3;
      (*(code *)PTR_FUN_8c0a52dc)(*(undefined4 *)(DAT_8c0a52bc + ar4),ar5,ar6,ar7);
      uVar1 = ar5;
      a7 = ar7;
    }
    break;
  case 1:
    (**(code **)(DAT_8c0a52cc + *(int *)(*(int *)(DAT_8c0a52bc + ar4) + 8)))
              (*(int *)(DAT_8c0a52bc + ar4),0,ar6,ar7);
    ar5 = *(uint *)(DAT_8c0a52bc + ar4);
    (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
    (*(code *)PTR_FUN_8c0a52e0)(ar4,ar5,ar6,a7);
    *(undefined4 *)(DAT_8c0a52bc + ar4) = 0;
    *(undefined1 *)(DAT_8c0a52a4 + ar4) = 2;
  case 2:
    *(int *)(puVar2 + -0x30) = ar4;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(*(int *)(puVar2 + -0x30) + DAT_8c0a52e4);
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar2 + -0x30) + DAT_8c0a52e4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = fVar4 + 1.0;
    }
    else {
      fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) + (double)CONCAT44(0x3f800000,fVar4),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x30) + DAT_8c0a52e4) = fVar4;
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x30) + DAT_8c0a52e4) = in_xd0;
    }
    uVar3 = (*(code *)PTR_FUN_8c0a52f0)
                      (*(undefined4 *)(DAT_8c0a52ec + *(int *)(DAT_8c0a52e8 + ar4)),ar5,ar6,a7);
    *(undefined4 *)(puVar2 + -0x20) = uVar3;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a52e4),in_fr3);
    }
    else {
      dVar5 = *(double *)(ar4 + DAT_8c0a52e4);
    }
    fVar4 = (float)(*(int *)(puVar2 + -0x20) + -1);
    dVar6 = (double)(ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0a52f4,fVar4);
      }
      else {
        dVar6 = (double)CONCAT44(PTR_libgcc_divide_helper_01031c_8c0a52f8,DAT_8c0a52f4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar6,0);
    }
    else {
      bVar7 = dVar5 < dVar6;
    }
    uVar1 = ar5;
    if (!bVar7) {
      *(undefined1 *)(DAT_8c0a52a4 + ar4) = 3;
    }
    break;
  case 3:
    uVar3 = (*(code *)PTR_FUN_8c0a52b4)(ar5,ar5,ar6,ar7);
    *(short *)(puVar2 + -0x40) = (short)uVar3;
    uVar1 = 100;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0a52f8)
                      ((uint)*(ushort *)(puVar2 + -0x40),100,ar6,ar7);
    *(undefined4 *)(puVar2 + -0x34) = uVar3;
    a7 = ar7;
    if (*(int *)(puVar2 + -0x34) == 0) {
      (*(code *)PTR_FUN_8c0a52fc)(ar4,uVar1,ar6,ar7);
      *(undefined1 *)(DAT_8c0a52a4 + ar4) = 4;
      a7 = ar7;
    }
    break;
  case 0xff:
    uVar3 = (*(code *)PTR_FUN_8c0a52a8)(ar5,ar5,ar6,ar7);
    *(short *)(puVar2 + -0x38) = (short)uVar3;
    uVar1 = (uint)*(ushort *)(puVar2 + -0x38);
    (*(code *)PTR_FUN_8c0a52b0)(ar4 + DAT_8c0a52ac,uVar1,ar6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c0a52b4)(ar5,uVar1,ar6,ar7);
    *(short *)(puVar2 + -0x3a) = (short)uVar3;
    uVar1 = (uint)*(ushort *)(puVar2 + -0x3a);
    (*(code *)PTR_FUN_8c0a52b8)(ar4 + DAT_8c0a52ac,uVar1,ar6,ar7);
    if (*(int *)(DAT_8c0a52bc + ar4) != 0) {
      uVar1 = ar5;
      (**(code **)(DAT_8c0a52c0 + *(int *)(*(int *)(DAT_8c0a52bc + ar4) + 8)))
                (*(int *)(DAT_8c0a52bc + ar4),ar5,ar6,ar7);
    }
    uVar3 = (*(code *)PTR_FUN_8c0a52b4)(ar5,uVar1,ar6,ar7);
    *(short *)(puVar2 + -0x3c) = (short)uVar3;
    a7 = ar7;
    if (*(ushort *)(puVar2 + -0x3c) < 5) {
      *(undefined1 *)(DAT_8c0a52a4 + ar4) = 0;
    }
  }
  (**(code **)(DAT_8c0a5300 + *(int *)(ar4 + 8)))(ar4,uVar1,ar6,a7);
  (*(code *)PTR_FUN_8c0a5304)(ar4 + DAT_8c0a52ec,uVar1,ar6,a7);
  return 1;
}



/* Class_12ad50_m6_0a5308 @ 8c0a5308 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m6_0a5308(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0a5324)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ad50_m5_0a5328 @ 8c0a5328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m5_0a5328(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  iVar1 = -DAT_8c0a535c;
  *(undefined4 *)((int)&uStack_4 + iVar1) = ar4;
  (*(code *)PTR_FUN_8c0a5360)((int)&stack0x00000000 + iVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a5364)
            (*(undefined4 *)((int)&uStack_4 + iVar1),(int)&stack0x00000000 + iVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0a5368)((int)&stack0x00000000 + iVar1,0xffffffff,ar6,ar7);
  return uVar2;
}



/* Class_12ad50_m4_0a536c @ 8c0a536c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m4_0a536c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0a5388)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a538c @ 8c0a538c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a538c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0a53a4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0a53a8 @ 8c0a53a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0a53a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0a53ac @ 8c0a53ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0a53ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0a53b0 @ 8c0a53b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a53b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  
  (*(code *)PTR_FUN_8c0a54a0)(*(int *)(DAT_8c0a549c + ar4) + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a54a4)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a54a8)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0a54ac,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0a54b0,DAT_8c0a54ac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0a54b0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0a54b4,DAT_8c0a54b0);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0a54ac,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0a54b0,DAT_8c0a54ac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0a54b0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0a54b4,DAT_8c0a54b0);
  }
  if (in_FPSCR_PR == '\0') {
    a6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6_00 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0a54ac,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0a54b0,DAT_8c0a54ac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0a54b0,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c0a54b4,DAT_8c0a54b0);
  }
  if (in_FPSCR_PR == '\0') {
    a5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5_00 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c0a54b4)(0,a5_00,a6_00,a7);
  (*(code *)PTR_FUN_8c0a54b8)(0,a5_00,a6_00,a7);
  uVar1 = (*(code *)PTR_FUN_8c0a54bc)(*(int *)(DAT_8c0a549c + ar4) + 0x70,a5_00,a6_00,a7);
  a5 = (*(code *)PTR_deref_u32_8c0a54c4)
                 (*(undefined4 *)(DAT_8c0a54c0 + *(int *)(DAT_8c0a549c + ar4)),a5_00,a6_00,a7);
  a6 = (*(code *)PTR_FUN_8c0a54cc)
                 (*(undefined4 *)(DAT_8c0a54c8 + *(int *)(DAT_8c0a549c + ar4)),a5_00,a6_00,a7);
  (*(code *)PTR_FUN_8c0a54d4)(uVar1,a5,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c0a54d8)(1,a5,a6,a7);
  return uVar1;
}



/* FUN_8c0a54dc @ 8c0a54dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a54dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0a5528)(*(int *)(DAT_8c0a5524 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a552c)(*(int *)(DAT_8c0a5524 + ar4) + 0x70,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a5530)(uVar1,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c0a5534 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c0a5534 + ar4) + 8) + 0x3c))
                      (*(int *)(DAT_8c0a5534 + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a5538 @ 8c0a5538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5538(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a5550 @ 8c0a5550 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5550(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_noop_038c8c_8c0a5580)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c0a5584 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c0a5584 + ar4) + 8) + 0x5c))
                      (*(int *)(DAT_8c0a5584 + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a5588 @ 8c0a5588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5588(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = (*(code *)PTR_s_Shell_0fef9c_8c0a55cc)(ar5,0xd,0x18,ar7);
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (**(code **)(DAT_8c0a55d0 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a55d4 @ 8c0a55d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a55d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0a55dc;
  *(undefined4 *)(DAT_8c0a55dc + ar4) = ar6;
  return iVar1;
}



/* FUN_8c0a55e0 @ 8c0a55e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a55e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_8c0a560c + ar4) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a5610)(ar5,ar4 + DAT_8c0a560c,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0a5614 @ 8c0a5614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5614(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0a565c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a5664)(ar4 + DAT_8c0a5660,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a5670)(ar4 + DAT_8c0a566c,ar5 + DAT_8c0a5668,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a5674 @ 8c0a5674 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5674(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0a56b8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a56c0)(ar4 + DAT_8c0a56bc,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a56c8)(ar4 + DAT_8c0a56c4,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a56cc @ 8c0a56cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a56cc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0a5714)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a571c)(ar4 + DAT_8c0a5718,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a5728)(ar4 + DAT_8c0a5724,ar5 + DAT_8c0a5720,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a572c @ 8c0a572c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a572c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0a5770)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0a5778)(ar4 + DAT_8c0a5774,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a5780)(ar4 + DAT_8c0a577c,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* s_CSpiderEgg_LoadGRReq_0a578a @ 8c0a5784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CSpiderEgg_LoadGRReq_0a578a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_8c0a5830 + ar4) == 0) {
    iVar1 = (*(code *)PTR_s_Failed_to_load_Pack_CAnimal__027a86_8c0a5834)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c0a5830 + ar4) = 1;
    }
  }
  else if (*(int *)(DAT_8c0a5830 + ar4) == 1) {
    if (*(int *)(DAT_8c0a5838 + ar4) == 0) {
      (*(code *)PTR_report_error_message_8c0a5848)
                (PTR_s_GRAPHICS_COMMON_8c0a583c + DAT_8c0a5844,
                 PTR_s_GRAPHICS_COMMON_8c0a583c + DAT_8c0a5840,0,2);
      *(undefined4 *)(DAT_8c0a5830 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(DAT_8c0a584c + *(int *)(*(int *)(DAT_8c0a5838 + ar4) + 8)))
                        (*(int *)(DAT_8c0a5838 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(DAT_8c0a5850 + ar4) = 0;
        *(undefined4 *)(DAT_8c0a5830 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c0a5854 @ 8c0a5854 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5854(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c0a5898)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c0a589c + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c0a58a0 + *(int *)(*(int *)(DAT_8c0a589c + ar4) + 8)))
                      (*(int *)(DAT_8c0a589c + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* FUN_8c0a58a4 @ 8c0a58a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a58a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0a58e8)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c0a58ec + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c0a58f0 + *(int *)(*(int *)(DAT_8c0a58ec + ar4) + 8)))
                      (*(int *)(DAT_8c0a58ec + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* s_Cpe_Home_nj_0a58f4 @ 8c0a58f4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_Cpe_Home_nj_0a58f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_dr0;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined **)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + 4) = PTR_PTR_8c0a5aa4;
    *(undefined **)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + 8) = PTR_PTR_8c0a5aa8;
    *(undefined4 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + 0xc) = *(undefined4 *)PTR_PTR_8c0a5aac;
    *(undefined4 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + 0x10) = 0;
    *(undefined4 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + 0x14) = *(undefined4 *)PTR_PTR_8c0a5ab0;
    *(undefined4 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + 0x18) = 0;
    *(undefined4 *)(DAT_8c0a5ab4 + iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0) = DAT_8c0a5ab8;
    *(undefined2 *)(DAT_8c0a5abc + iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0) = 1;
    *(undefined4 *)(DAT_8c0a5ac0 + iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0) = DAT_8c0a5ac4;
    *(undefined2 *)(DAT_8c0a5ac8 + iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0) = 1;
    *(undefined4 *)(DAT_8c0a5acc + iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0) = DAT_8c0a5ad0;
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + DAT_8c0a5ad4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,(int)in_dr0);
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + DAT_8c0a5ad8);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c0a5adc,(int)in_dr0);
      *(undefined4 *)puVar1 = DAT_8c0a5adc;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c0a5ae0,DAT_8c0a5adc);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + _DAT_8c0a5ae0);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c0a5ae4,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c0a5ae4;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c0a5ae8,DAT_8c0a5ae4);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0a5a9c + DAT_8c0a5aa0 + _DAT_8c0a5ae8);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c0a5aec,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c0a5aec;
    }
    else {
      in_dr0 = CONCAT44(_DAT_8c0a5af0,DAT_8c0a5aec);
      *puVar1 = in_dr0;
    }
  }
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined2 *)(_DAT_8c0a5af0 + iVar2 * 0x10) = 0xffff;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c0a5af0 + 4) = 0;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c0a5af0 + 8) = 1;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c0a5af0 + 0xc) = 0;
  }
  return 1;
}



/* Class_12aeec_m7_0a5af4 @ 8c0a5af4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12aeec_m7_0a5af4(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined1 *a6;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 in_dr14;
  double dVar7;
  undefined8 in_xd14;
  bool bVar8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar2 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar2 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = in_PR;
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0a5c1c)((undefined1 *)((int)puVar2 + -0x1c),ar5,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(code *)PTR_Vec3_ctor_zero_8c0a5c1c)((undefined1 *)((int)puVar2 + -0x2c),a5,ar6,ar7);
  dVar7 = (double)CONCAT44(uVar1,0x3f800000);
  a6 = (undefined1 *)((int)puVar2 + -0x2c);
  (**(code **)(DAT_8c0a5c20 + *ar5))(ar5,(undefined1 *)((int)puVar2 + -0x1c),a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  fVar6 = SUB84(dVar7,0);
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),fVar3);
  }
  else {
    dVar4 = *(double *)((int)puVar2 + -0x1c);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x2c),fVar3);
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x2c);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x2c),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)((int)puVar2 + -0x2c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x1c),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar4;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x14),fVar3);
  }
  else {
    dVar4 = *(double *)((int)puVar2 + -0x14);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x24),fVar3);
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x24);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar4 >> 0x20) <= SUB84(dVar4,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x24),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)((int)puVar2 + -0x24);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x14),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)puVar2 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x38) = dVar4;
    }
  }
  (**(code **)(DAT_8c0a5c24 + *ar5))(ar5,ar4 + 0x30,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0x30) = (int)((ulonglong)dVar4 >> 0x20);
    dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x30),SUB84(dVar7,0));
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
  }
  else {
    *(double *)((int)puVar2 + -0x30) = dVar4;
    dVar7 = *(double *)((int)puVar2 + -0x30);
    dVar4 = *(double *)(ar4 + 0x34);
  }
  fVar6 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar8 = fVar6 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar8 = dVar7 < dVar4;
  }
  if (bVar8) {
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)((int)puVar2 + -0x28),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      uVar5 = *(undefined8 *)((int)puVar2 + -0x28);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((int)puVar2 + -0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)((int)puVar2 + -0x28);
      }
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x34) = fVar6;
  }
  else {
    *(double *)(ar4 + 0x34) = dVar7;
  }
  (*(code *)PTR_Vec3_dtor_8c0a5c28)((undefined1 *)((int)puVar2 + -0x2c),0xffffffff,a6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0a5c28)((undefined1 *)((int)puVar2 + -0x1c),0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c0a5c2c @ 8c0a5c2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0a5c2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0a5c5c)(*(undefined4 *)(DAT_8c0a5c58 + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 == 1);
}



/* Class_12ad50_m3_0a5c60 @ 8c0a5c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ad50_m3_0a5c60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_0a5c88 @ 8c0a5c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0a5c88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0a5c90 @ 8c0a5c90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a5c90(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(PTR_DAT_8c0a5fac,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a5fb4;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a5fb4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(PTR_DAT_8c0a5fc0,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a5fc4;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a5fc4,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(PTR_DAT_8c0a5fc8,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a5fcc;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a5fcc,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(PTR_DAT_8c0a5fd0,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar2,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a5fd4,ar7);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0a5fe4)
            (DAT_8c0a5fe0,PTR_FUN_8c0a5fdc,PTR_free_if_nonnull_wrap_0247b0_8c0a5fd8,4);
  (*(code *)PTR_global_list_push_8c0a5fbc)(0,PTR_FUN_8c0a5fec,DAT_8c0a5fe8,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0a5fe4)
            (DAT_8c0a5ff8,PTR_FUN_8c0a5ff4,PTR_free_if_nonnull_wrap_03a3dc_8c0a5ff0,4);
  (*(code *)PTR_global_list_push_8c0a5fbc)(0,PTR_FUN_8c0a6000,DAT_8c0a5ffc,uVar2);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0a6004 = *(undefined4 *)DAT_8c0a6008;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0a6004 = *DAT_8c0a6008;
  }
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0a5fe4)
            (DAT_8c0a600c,PTR_FUN_8c0a5fdc,PTR_free_if_nonnull_wrap_0247b0_8c0a5fd8,4);
  (*(code *)PTR_global_list_push_8c0a5fbc)(0,PTR_FUN_8c0a6014,DAT_8c0a6010,uVar2);
  uVar4 = 4;
  (*(code *)PTR_FUN_8c0a5fe4)
            (DAT_8c0a6018,PTR_FUN_8c0a5ff4,PTR_free_if_nonnull_wrap_03a3dc_8c0a5ff0,4);
  puVar3 = PTR_FUN_8c0a6020;
  uVar2 = DAT_8c0a601c;
  (*(code *)PTR_global_list_push_8c0a5fbc)(0,PTR_FUN_8c0a6020,DAT_8c0a601c,uVar4);
  uVar1 = (*(code *)PTR_FUN_8c0a6028)(DAT_8c0a6024,puVar3,uVar2,uVar4);
  puVar3 = PTR_FUN_8c0a6030;
  uVar2 = DAT_8c0a602c;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_FUN_8c0a6030,DAT_8c0a602c,uVar4);
  uVar1 = (*(code *)PTR_FUN_8c0a6038)(DAT_8c0a6034,puVar3,uVar2,uVar4);
  puVar3 = PTR_free_if_nonnull_wrap_03a454_8c0a6040;
  uVar2 = DAT_8c0a603c;
  (*(code *)PTR_global_list_push_8c0a5fbc)
            (uVar1,PTR_free_if_nonnull_wrap_03a454_8c0a6040,DAT_8c0a603c,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a6050,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a6054;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a6054,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a6058._4_4_,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a6060;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a6060,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a6068,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a606c;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a606c,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a6070,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a6074;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a6074,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a607c,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a6080;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a6080,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a6084,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a6088;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a6088,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a608c,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0a5fb8;
  uVar2 = DAT_8c0a6090;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar1,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a6090,uVar4);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0a5fb0)(DAT_8c0a6094,puVar3,uVar2,uVar4);
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar2,PTR_Vec3_dtor_8c0a5fb8,DAT_8c0a6098,uVar4);
  uVar1 = DAT_8c0a6068;
  uVar4 = (*(code *)PTR_FUN_8c0a60a0)(DAT_8c0a609c,DAT_8c0a6050,DAT_8c0a6058._4_4_,DAT_8c0a6068);
  puVar3 = PTR_Class_129938_m0_017084_8c0a60a8;
  uVar2 = DAT_8c0a60a4;
  (*(code *)PTR_global_list_push_8c0a5fbc)
            (uVar4,PTR_Class_129938_m0_017084_8c0a60a8,DAT_8c0a60a4,uVar1);
  uVar4 = (*(code *)PTR_FUN_8c0a6028)(DAT_8c0a60ac,puVar3,uVar2,uVar1);
  puVar3 = PTR_FUN_8c0a6030;
  uVar2 = DAT_8c0a60b0;
  (*(code *)PTR_global_list_push_8c0a5fbc)(uVar4,PTR_FUN_8c0a6030,DAT_8c0a60b0,uVar1);
  uVar4 = (*(code *)PTR_FUN_8c0a6038)(DAT_8c0a60b4,puVar3,uVar2,uVar1);
  puVar3 = PTR_free_if_nonnull_wrap_03a454_8c0a6040;
  uVar2 = DAT_8c0a60b8;
  (*(code *)PTR_global_list_push_8c0a5fbc)
            (uVar4,PTR_free_if_nonnull_wrap_03a454_8c0a6040,DAT_8c0a60b8,uVar1);
  uVar4 = (*(code *)PTR_FUN_8c0a5fdc)(DAT_8c0a60bc,puVar3,uVar2,uVar1);
  puVar3 = PTR_free_if_nonnull_wrap_0247b0_8c0a5fd8;
  uVar2 = DAT_8c0a60c0;
  (*(code *)PTR_global_list_push_8c0a5fbc)
            (uVar4,PTR_free_if_nonnull_wrap_0247b0_8c0a5fd8,DAT_8c0a60c0,uVar1);
  uVar2 = (*(code *)PTR_FUN_8c0a5ff4)(DAT_8c0a60c4,puVar3,uVar2,uVar1);
  (*(code *)PTR_global_list_push_8c0a5fbc)
            (uVar2,PTR_free_if_nonnull_wrap_03a3dc_8c0a5ff0,DAT_8c0a60c8,uVar1);
  uVar2 = DAT_8c0a6068;
  uVar1 = (*(code *)PTR_FUN_8c0a60a0)(DAT_8c0a60cc,DAT_8c0a6050,DAT_8c0a6058._4_4_,DAT_8c0a6068);
  uVar2 = (*(code *)PTR_global_list_push_8c0a5fbc)
                    (uVar1,PTR_Class_129938_m0_017084_8c0a60a8,DAT_8c0a60d0,uVar2);
  return uVar2;
}



/* FUN_8c0a60d4 @ 8c0a60d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a60d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0a60f4)
                    (DAT_8c0a60f0,PTR_free_if_nonnull_wrap_03a3dc_8c0a60ec,4,9);
  return uVar1;
}



/* FUN_8c0a60f8 @ 8c0a60f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a60f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0a6118)
                    (DAT_8c0a6114,PTR_free_if_nonnull_wrap_0247b0_8c0a6110,4,9);
  return uVar1;
}



/* FUN_8c0a611c @ 8c0a611c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a611c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0a613c)
                    (DAT_8c0a6138,PTR_free_if_nonnull_wrap_03a3dc_8c0a6134,4,9);
  return uVar1;
}



/* FUN_8c0a6140 @ 8c0a6140 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a6140(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0a6160)
                    (DAT_8c0a615c,PTR_free_if_nonnull_wrap_0247b0_8c0a6158,4,9);
  return uVar1;
}



/* FUN_8c0a6164 @ 8c0a6164 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0a6164(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  
  (*(code *)PTR_FUN_8c0a61c8)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0a61cc;
  a7 = 0x10;
  a5 = PTR_Vec3_ctor_zero_8c0a61d8;
  a6 = PTR_Vec3_dtor_8c0a61d4;
  (*(code *)PTR_FUN_8c0a61e0)
            ((int)ar4 + DAT_8c0a61dc,PTR_Vec3_ctor_zero_8c0a61d8,PTR_Vec3_dtor_8c0a61d4,0x10);
  (*(code *)PTR_Vec3_ctor_zero_8c0a61d8)((int)ar4 + DAT_8c0a61e4,a5,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c0a61d8)((int)ar4 + DAT_8c0a61e8,a5,a6,a7);
  (*(code *)PTR_Vec3_set_zero_8c0a61f0)((int)ar4 + DAT_8c0a61ec,a5,a6,a7);
  (*(code *)PTR_FUN_8c0a61f4)(ar4,0,a6,a7);
  return ar4;
}



/* FUN_8c0a61f8 @ 8c0a61f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a61f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [16];
  
  *(undefined **)(DAT_8c0a6284 + ar4) = PTR_PTR_8c0a6288;
  *(undefined4 *)(DAT_8c0a628c + ar4) = 6;
  *(undefined4 *)(DAT_8c0a6290 + ar4) = 0;
  *(undefined4 *)(DAT_8c0a6294 + ar4) = 2;
  *(undefined4 *)(DAT_8c0a6298 + ar4) = 2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a629c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0a629c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(DAT_8c0a62a0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0a62a4 + ar4) = 0;
  (*(code *)PTR_Vec3_set_xyz_8c0a62a8)(auStack_14,ar5,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0a62b0)(ar4 + DAT_8c0a62ac,auStack_14,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c0a62b4)(auStack_14,0xffffffff,ar6,ar7);
  *(undefined4 *)(DAT_8c0a62b8 + ar4) = 0;
  *(undefined4 *)(DAT_8c0a62bc + ar4) = 0;
  *(undefined4 *)(DAT_8c0a62c0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0a62c4 + ar4) = 0;
  iVar1 = DAT_8c0a62c8;
  *(undefined4 *)(DAT_8c0a62c8 + ar4) = 1;
  return iVar1;
}



/* Class_12b088_m0_0a62cc @ 8c0a62cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b088_m0_0a62cc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0a6344;
    (*(code *)PTR_object_dtor_delete_8c0a634c)((int)ar4 + DAT_8c0a6348,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a6354)((int)ar4 + DAT_8c0a6350,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a6354)((int)ar4 + DAT_8c0a6358,0xffffffff,ar6,ar7);
    a6 = 0x10;
    a7 = DAT_8c0a635c;
    (*(code *)PTR_vec_delete_array_8c0a6364)
              ((int)ar4 + DAT_8c0a6360,PTR_Vec3_dtor_8c0a6354,0x10,DAT_8c0a635c);
    a5 = 0;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c0a6368)(ar4,0,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0a636c)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* FUN_8c0a6370 @ 8c0a6370 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a6370(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  (*(code *)PTR_FUN_8c0a6404)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0a6408 + ar4) = 0;
  *(undefined4 *)(DAT_8c0a640c + ar4) = 0;
  *(undefined4 *)(DAT_8c0a6410 + ar4) = 0;
  *(undefined4 *)(DAT_8c0a6414 + ar4) = 0;
  (*(code *)PTR_Vec3_ctor_xyz_8c0a6418)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0a6420)(ar4 + DAT_8c0a641c,auStack_18,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0a6424)(auStack_18,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c0a6418)(auStack_28,uVar1,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0a6420)(ar4 + 0x14,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0a6424)(auStack_28,0xffffffff,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0a642c)(ar4 + DAT_8c0a6428,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0a6430 @ 8c0a6430 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0a6430(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0a6458)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0a645c + ar4) = 0;
  *(undefined4 *)(DAT_8c0a6460 + ar4) = 0;
  iVar1 = DAT_8c0a6464;
  *(undefined4 *)(DAT_8c0a6464 + ar4) = 0;
  return iVar1;
}



/* Class_12b088_m1_0a6468 @ 8c0a6468 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b088_m1_0a6468(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *a5;
  undefined1 *a6;
  undefined4 uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  a5 = ar5;
  (*(code *)PTR_Class_129cbc_m1_031598_8c0a65e0)(ar4,ar5,ar6,ar7);
  uVar2 = 1;
  if ((*(int *)(DAT_8c0a65e4 + ar4) == 2) || (*(int *)(DAT_8c0a65e8 + ar4) != 0)) {
    if (*(int *)(DAT_8c0a65e8 + ar4) != 8) {
      iVar1 = (**(code **)(DAT_8c0a65f0 + *(int *)ar5[6]))((int *)ar5[6],a5,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(DAT_8c0a65f4 + ar4) != 4)) {
        ar7 = *(undefined4 *)(ar5[1] + 4);
        ar6 = ar5[6];
        (*(code *)PTR_FUN_8c0a65f8)(ar4,*(undefined4 *)ar5[1],ar6,ar7);
        goto LAB_8c0a64f8;
      }
    }
    uVar2 = (*(code *)PTR_FUN_8c0a65fc)(ar4,ar5,ar6,ar7);
  }
  else {
    ar7 = *(undefined4 *)(ar5[1] + 4);
    ar6 = ar5[4];
    (*(code *)PTR_FUN_8c0a65ec)(ar4,*(undefined4 *)ar5[1],ar6,ar7);
  }
LAB_8c0a64f8:
  (*(code *)PTR_FUN_8c0a6600)(*ar5,uVar2,ar6,ar7);
  if (*(int *)(DAT_8c0a6604 + ar4) == 1) {
    (*(code *)PTR_FUN_8c0a6600)(*ar5,1,ar6,ar7);
  }
  if ((*(int *)(DAT_8c0a65e8 + ar4) == 0) && (*(int *)(DAT_8c0a65e8 + ar4) != 8)) {
    (*(code *)PTR_FUN_8c0a6608)(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  }
  (*(code *)PTR_Vec3_scale_8c0a660c)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
  (*(code *)PTR_Vec3_add_8c0a6614)(auStack_20,ar4 + DAT_8c0a6610,ar6,ar7);
  (*(code *)PTR_Vec3_add_8c0a6614)(auStack_30,ar4 + 0x6c,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0a6618)(ar4 + 4,auStack_40,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a661c)(auStack_40,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0a661c)(auStack_30,0xffffffff,ar6,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0a661c)(auStack_20,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c0a6620)(*ar5,uVar2,ar6,ar7);
  a6 = auStack_50;
  (*(code *)PTR_FUN_8c0a6624)(ar4,ar5[1],a6,ar7);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0a661c)(auStack_50,0xffffffff,a6,ar7);
  return uVar2;
}



/* FUN_8c0a6628 @ 8c0a6628 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0a6628(float ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int a5;
  undefined4 a5_00;
  int iVar2;
  float fVar3;
  undefined8 in_dr0;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_a4;
  undefined8 uStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [36];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar2 = 1;
  (*(code *)PTR_FUN_8c0a68f0)(*ar5,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0a68f8)((int)&fStack_a4 + DAT_8c0a68f4,auStack_30,ar6,ar7);
  a5 = -1;
  (*(code *)PTR_Vec3_dtor_8c0a68fc)(auStack_30,0xffffffff,ar6,ar7);
  if (*DAT_8c0a6900 == '\0') {
    *DAT_8c0a6904 = 0;
    *DAT_8c0a6900 = '\x01';
  }
  if (*DAT_8c0a6908 == '\0') {
    *DAT_8c0a690c = 0;
    *DAT_8c0a6908 = '\x01';
  }
  if (*(int *)(DAT_8c0a6910 + (int)ar4) == 1) {
    a5 = (int)ar4 + DAT_8c0a6914;
    (*(code *)PTR_Vec3_assign_8c0a6918)((int)&fStack_a4 + DAT_8c0a68f4,a5,ar6,ar7);
  }
  switch(*(undefined4 *)(DAT_8c0a691c + (int)ar4)) {
  case 0:
    iStack_8c = (*(code *)PTR_get_field_24_026024_8c0a692c)(ar5[6],a5,ar6,ar7);
    if (iStack_8c == 0) {
      fVar3 = DAT_8c0a6930;
      fVar4 = _DAT_8c0a6934;
      if (in_FPSCR_SZ == '\0') {
        fVar3 = *(float *)((int)&fStack_a4 + DAT_8c0a68f4);
        fVar4 = DAT_8c0a6930;
      }
      if (in_FPSCR_PR == '\0' && fVar4 < fVar3) {
        uStack_80 = 2;
        (*(code *)PTR_Vec3_dtor_8c0a68fc)((int)&fStack_a4 + DAT_8c0a68f4,0xffffffff,ar6,ar7);
        return uStack_80;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)&fStack_a4 + _DAT_8c0a6938) = _DAT_8c0a6934;
      }
      else {
        *(ulonglong *)((int)&fStack_a4 + _DAT_8c0a6938) = CONCAT44(_DAT_8c0a6938,_DAT_8c0a6934);
      }
    }
    (*(code *)PTR_Vec3_ctor_copy_8c0a68f8)(auStack_4c,*(undefined4 *)ar5[1],ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c0a68f8)(auStack_5c,(int)&fStack_a4 + DAT_8c0a68f4,ar6,ar7);
    ar6 = auStack_5c;
    iVar2 = (*(code *)PTR_FUN_8c0a693c)(ar4,auStack_4c,ar6,ar7);
    iStack_90 = iVar2;
    (*(code *)PTR_Vec3_dtor_8c0a68fc)(auStack_5c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a68fc)(auStack_4c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a6918)((int)ar4 + DAT_8c0a6940,(int)ar4 + 0x14,ar6,ar7);
    break;
  case 1:
    (*(code *)PTR_FUN_8c0a6920)(auStack_3c,ar5[3],ar6,ar7);
    ar7 = *(undefined4 *)(ar5[1] + 4);
    ar6 = auStack_3c;
    iVar2 = (*(code *)PTR_FUN_8c0a6924)(ar4,*(undefined4 *)ar5[1],ar6,ar7);
    iStack_88 = iVar2;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a6928)(auStack_3c,0xffffffff,ar6,ar7);
    break;
  case 2:
    iVar2 = 0;
    break;
  case 3:
    iStack_94 = (**(code **)(DAT_8c0a6944 + *(int *)ar5[6]))((int *)ar5[6],a5,ar6,ar7);
    if (iStack_94 == 1) {
      ar6 = (undefined1 *)*ar5;
      iVar2 = (*(code *)PTR_FUN_8c0a6948)(ar4,*(undefined4 *)ar5[1],ar6,ar7);
      iStack_98 = iVar2;
    }
    else {
      iVar2 = 2;
    }
    break;
  case 4:
    *(undefined4 *)(DAT_8c0a6950 + (int)ar4) = 0;
    (*(code *)PTR_Vec3_ctor_xyz_8c0a6954)(auStack_6c,a5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a6918)((int)ar4 + DAT_8c0a6940,auStack_6c,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a68fc)(auStack_6c,0xffffffff,ar6,ar7);
    if (*(int *)(DAT_8c0a6958 + (int)ar4) == 0) {
      a5_00 = 6;
      (*(code *)PTR_FUN_8c0a694c)(ar4,6,ar6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0a6960)((int)ar4 + DAT_8c0a695c,a5_00,ar6,ar7);
      uVar1 = in_dr0;
      puVar5 = DAT_8c0a6964;
      puVar6 = PTR_s_CAnimBody_SetFrame_033e6e_8c0a6968;
      if (in_FPSCR_SZ == '\0') {
        puVar5 = (undefined *)((ulonglong)in_dr0 >> 0x20);
        uStack_a0 = CONCAT44(uStack_a0._4_4_,puVar5);
        uVar1 = uStack_a0;
        puVar6 = DAT_8c0a6964;
      }
      uStack_a0 = uVar1;
      if (in_FPSCR_PR != '\0' || (float)puVar6 <= (float)puVar5) {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a6968)((int)ar4 + DAT_8c0a695c,a5_00,ar6,ar7);
        iVar2 = 0;
        *(int *)(DAT_8c0a6958 + (int)ar4) = *(int *)(DAT_8c0a6958 + (int)ar4) + 1;
        fStack_a4 = ar4;
      }
    }
    break;
  case 5:
    iVar2 = (*(code *)PTR_FUN_8c0a694c)(ar4,8,ar6,ar7);
    uStack_a0 = CONCAT44(iVar2,(undefined4)uStack_a0);
  }
  if ((*(int *)(DAT_8c0a6910 + (int)ar4) == 1) && (iVar2 == 0)) {
    ar6 = (undefined1 *)ar5[6];
    (*(code *)PTR_FUN_8c0a6970)(ar4,ar5[3],ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a6918)((int)ar4 + DAT_8c0a6914,auStack_7c,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a68fc)(auStack_7c,0xffffffff,ar6,ar7);
  }
  iStack_84 = iVar2;
  (*(code *)PTR_Vec3_dtor_8c0a68fc)((int)&fStack_a4 + DAT_8c0a68f4,0xffffffff,ar6,ar7);
  return iStack_84;
}



/* FUN_8c0a6974 @ 8c0a6974 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0a6974(int ar4,ulonglong *ar5,ulonglong *ar6,ulonglong *ar7)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *a5;
  undefined4 a6;
  ulonglong *puVar4;
  undefined1 *puVar5;
  undefined4 a7;
  ulonglong *a7_00;
  ulonglong *a4;
  int iVar6;
  ulonglong in_dr0;
  char in_FPSCR_SZ;
  int iStack_100;
  ulonglong *puStack_fc;
  undefined8 uStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 uStack_e4;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  ulonglong uStack_d0;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  ulonglong *puStack_bc;
  int iStack_b8;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [108];
  
  a4 = *(ulonglong **)((int)&uStack_f8 + DAT_8c0a69b4);
  iVar6 = 1;
  a5 = ar5;
  puVar4 = ar6;
  a7_00 = ar7;
  switch(*(undefined4 *)(DAT_8c0a69b8 + ar4)) {
  case 0:
    iStack_b8 = (**(code **)(DAT_8c0a6a38 + (int)*a4))(a4,ar5,ar6,ar7);
    if (iStack_b8 == 1) {
      *(undefined4 *)(DAT_8c0a6a3c + ar4) = 8;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      a7 = 0;
      a6 = 0xffffffff;
      uVar3 = 2;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a6a48)(ar4 + DAT_8c0a6a44,2,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a6a4c)(ar4 + DAT_8c0a6a44,uVar3,a6,a7);
      goto switchD_8c0a69b0_default;
    }
    a5 = (ulonglong *)0x0;
    puStack_bc = (ulonglong *)(*(code *)PTR_rand_range_8c0a6a80)(ar4,0,7,a7_00);
    puVar4 = puStack_bc;
    if (((int)puStack_bc < 7) && (-1 < (int)puStack_bc)) {
      puVar4 = (ulonglong *)((int)puStack_bc * 4);
      switch(puStack_bc) {
      case (ulonglong *)0x0:
        a5 = (ulonglong *)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)a5 = 0;
        }
        else {
          *a5 = in_dr0;
        }
        if (*(int *)(DAT_8c0a6abc + ar4) == 6) {
          *(undefined4 *)(DAT_8c0a6ad0 + ar4) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(DAT_8c0a6ac0 + ar4) = 0;
        break;
      case (ulonglong *)0x1:
        in_dr0 = in_dr0 & 0xffffffff;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(DAT_8c0a6af0 + ar4) == 6) {
          *(undefined4 *)(DAT_8c0a6b04 + ar4) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(DAT_8c0a6af4 + ar4) = 1;
        break;
      case (ulonglong *)0x2:
        in_dr0 = in_dr0 & 0xffffffff;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(DAT_8c0a6b24 + ar4) == 6) {
          *(undefined4 *)(DAT_8c0a6b38 + ar4) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(DAT_8c0a6b28 + ar4) = 2;
        break;
      case (ulonglong *)0x3:
        puVar4 = (ulonglong *)(ar4 + 0x28);
        in_dr0 = in_dr0 & 0xffffffff;
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar4 = 0;
        }
        else {
          *puVar4 = in_dr0;
        }
        if (*(int *)(DAT_8c0a6b58 + ar4) == 6) {
          *(undefined4 *)(DAT_8c0a6b6c + ar4) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        a5 = (ulonglong *)0x3;
        *(undefined4 *)(DAT_8c0a6b5c + ar4) = 3;
        break;
      case (ulonglong *)0x4:
        in_dr0 = in_dr0 & 0xffffffff;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        if (*(int *)(DAT_8c0a6b8c + ar4) == 6) {
          *(undefined4 *)(DAT_8c0a6bac + ar4) = 5;
          goto switchD_8c0a6a7a_caseD_5;
        }
        *(undefined4 *)(DAT_8c0a6b90 + ar4) = 4;
        break;
      case (ulonglong *)0x5:
switchD_8c0a6a7a_caseD_5:
        if (*(int *)(DAT_8c0a6bb0 + ar4) == 6) {
          *(undefined4 *)(DAT_8c0a6bc4 + ar4) = 8;
        }
        else {
          *(undefined4 *)(DAT_8c0a6bb4 + ar4) = 5;
        }
        break;
      case (ulonglong *)0x6:
        if (*(int *)(DAT_8c0a6bec + ar4) == 0) {
          iStack_c0 = (*(code *)PTR_get_field_24_026024_8c0a6bf0)(a4,a5,puVar4,a7_00);
          if (iStack_c0 == 1) {
            *(undefined4 *)(DAT_8c0a6bf4 + ar4) = 6;
          }
          else {
            *(undefined4 *)(DAT_8c0a6c04 + ar4) = 5;
          }
        }
        else if ((*(int *)(DAT_8c0a6c38 + ar4) == 5) || (*(int *)(DAT_8c0a6c38 + ar4) == 6)) {
          *(undefined4 *)(DAT_8c0a6c8c + ar4) = 8;
        }
        else {
          puVar4 = (ulonglong *)0x2;
          a5 = (ulonglong *)0x0;
          iStack_c4 = (*(code *)PTR_rand_range_8c0a6c3c)(ar4,0,2,a7_00);
          if (iStack_c4 == 0) {
            *(undefined4 *)(DAT_8c0a6c40 + ar4) = 7;
          }
          else {
            *(undefined4 *)(DAT_8c0a6c50 + ar4) = 9;
          }
        }
      }
    }
    *(int *)(DAT_8c0a6c90 + ar4) = *(int *)(DAT_8c0a6c90 + ar4) + 1;
    uStack_f8._4_4_ = ar4;
    break;
  case 1:
    break;
  case 2:
    goto switchD_8c0a69b0_caseD_2;
  case 3:
    goto switchD_8c0a69b0_caseD_3;
  case 4:
    goto switchD_8c0a69b0_caseD_4;
  case 5:
    goto switchD_8c0a69b0_caseD_5;
  case 6:
    goto switchD_8c0a69b0_caseD_6;
  case 7:
    goto switchD_8c0a69b0_caseD_7;
  case 8:
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a72ac)(ar4 + DAT_8c0a72a8,ar5,ar6,ar7);
  default:
    goto switchD_8c0a69b0_default;
  }
  switch(*(undefined4 *)(DAT_8c0a6c8c + ar4)) {
  case 0:
    a7_00 = (ulonglong *)0x0;
    puVar4 = (ulonglong *)0xffffffff;
    a5 = (ulonglong *)0x2;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a6cec)(ar4 + DAT_8c0a6ce4._4_4_,2,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a6cf0)(ar4 + DAT_8c0a6ce4._4_4_,a5,puVar4,a7_00);
    break;
  case 1:
    a7_00 = (ulonglong *)0x0;
    puVar4 = (ulonglong *)0xffffffff;
    a5 = (ulonglong *)0x3;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a6d24)(ar4 + DAT_8c0a6d1c._4_4_,3,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a6d28)(ar4 + DAT_8c0a6d1c._4_4_,a5,puVar4,a7_00);
    break;
  case 2:
    a7_00 = (ulonglong *)0x0;
    puVar4 = (ulonglong *)0xffffffff;
    a5 = (ulonglong *)0x4;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a6d5c)(ar4 + DAT_8c0a6d54._4_4_,4,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a6d60)(ar4 + DAT_8c0a6d54._4_4_,a5,puVar4,a7_00);
    break;
  case 3:
    a7_00 = (ulonglong *)0x0;
    puVar4 = (ulonglong *)0xffffffff;
    a5 = (ulonglong *)0x5;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a6d94)(ar4 + DAT_8c0a6d8c._4_4_,5,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a6d98)(ar4 + DAT_8c0a6d8c._4_4_,a5,puVar4,a7_00);
    break;
  case 4:
    a7_00 = (ulonglong *)0x0;
    puVar4 = (ulonglong *)0xffffffff;
    a5 = (ulonglong *)0x6;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a6dcc)(ar4 + DAT_8c0a6dc4._4_4_,6,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a6dd0)(ar4 + DAT_8c0a6dc4._4_4_,a5,puVar4,a7_00);
    break;
  case 5:
    iStack_c8 = (*(code *)PTR_get_field_24_026024_8c0a6e88)(a4,a5,puVar4,a7_00);
    uVar3 = (undefined4)in_dr0;
    if (iStack_c8 == 0) {
      (*(code *)PTR_FUN_8c0a6e94)((int)&uStack_f8 + DAT_8c0a6e90,a5,puVar4,a7_00);
      (*(code *)PTR_Vec3_ctor_xyz_8c0a6e9c)((int)&uStack_f8 + DAT_8c0a6e98,a5,puVar4,a7_00);
      puStack_fc = (ulonglong *)((int)&uStack_f8 + DAT_8c0a6e98);
      iStack_100 = (int)&puStack_fc + DAT_8c0a6ea0;
      puVar4 = (ulonglong *)((int)&iStack_100 + _DAT_8c0a6ea8);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c0a6eac,uVar3);
      }
      else {
        in_dr0 = CONCAT44(DAT_8c0a6eb0,DAT_8c0a6eac);
      }
      a7_00 = a4;
      (*(code *)PTR_FUN_8c0a6eb8)(ar4,ar5,puVar4,a4);
      (*(code *)PTR_Vec3_assign_8c0a6ec0)(ar4 + 0x54,(int)&uStack_f8 + DAT_8c0a6ebc,puVar4,a7_00);
      (*(code *)PTR_Vec3_dtor_8c0a6ec4)((int)&uStack_f8 + DAT_8c0a6ebc,0xffffffff,puVar4,a7_00);
      (*(code *)PTR_Vec3_dtor_8c0a6ec4)((int)&uStack_f8 + DAT_8c0a6e98,0xffffffff,puVar4,a7_00);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a6ec8)
                ((int)&uStack_f8 + DAT_8c0a6e90,0xffffffff,puVar4,a7_00);
    }
    else {
      puStack_fc = (ulonglong *)((int)&uStack_f8 + DAT_8c0a6f10);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c0a6f14,uVar3);
      }
      else {
        in_dr0 = CONCAT44(PTR_FUN_8c0a6f18,DAT_8c0a6f14);
      }
      puVar4 = a4;
      (*(code *)PTR_FUN_8c0a6f18)(ar4,ar6,a4,a7_00);
      (*(code *)PTR_Vec3_assign_8c0a6f1c)(ar4 + 0x54,(int)&uStack_f8 + DAT_8c0a6f10,puVar4,a7_00);
      (*(code *)PTR_Vec3_dtor_8c0a6f20)((int)&uStack_f8 + DAT_8c0a6f10,0xffffffff,puVar4,a7_00);
    }
    *(undefined4 *)(DAT_8c0a6f24 + ar4) = 3;
switchD_8c0a69b0_caseD_3:
    if (*(int *)(DAT_8c0a7028 + ar4) == 0) {
      (**(code **)(DAT_8c0a702c + (int)*a4))(a4,ar4 + 0x54,puVar4,a7_00);
      if (in_FPSCR_SZ == '\0') {
        uVar3 = (undefined4)(in_dr0 >> 0x20);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar3);
        *(undefined4 *)(ar4 + 0x58) = uVar3;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
        uStack_d0 = in_dr0;
      }
      (*(code *)PTR_Vec3_ctor_copy_8c0a7034)((int)&uStack_f8 + DAT_8c0a7030,ar5,puVar4,a7_00);
      (*(code *)PTR_Vec3_ctor_copy_8c0a7034)((int)&uStack_f8 + DAT_8c0a7038,ar4 + 0x54,puVar4,a7_00)
      ;
      iVar2 = (int)&uStack_f8 + DAT_8c0a7038;
      iVar6 = (*(code *)PTR_FUN_8c0a703c)(ar4,(int)&uStack_f8 + DAT_8c0a7030,iVar2,a7_00);
      iStack_d4 = iVar6;
      (*(code *)PTR_Vec3_dtor_8c0a7040)((int)&uStack_f8 + DAT_8c0a7038,0xffffffff,iVar2,a7_00);
      (*(code *)PTR_Vec3_dtor_8c0a7040)((int)&uStack_f8 + DAT_8c0a7030,0xffffffff,iVar2,a7_00);
      (*(code *)PTR_Vec3_assign_8c0a7044)(ar4 + DAT_8c0a7038,ar4 + 0x14,iVar2,a7_00);
    }
    else {
      switch(*(undefined4 *)(DAT_8c0a7064 + ar4)) {
      case 1:
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x5c) = (int)ar6[1];
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = ar6[1];
        }
        break;
      case 2:
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x5c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x5c) = in_dr0 & 0xffffffff;
        }
        break;
      case 3:
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x54) = (int)*ar6;
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = *ar6;
        }
        break;
      case 4:
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x54) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x54) = in_dr0 & 0xffffffff;
        }
        break;
      case 5:
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x58) = *(int *)((int)ar6 + 4);
        }
        else {
          *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)((int)ar6 + 4);
        }
      }
      (*(code *)PTR_FUN_8c0a7100)(auStack_84,ar6,puVar4,a7_00);
      puStack_fc = ar7;
      iVar6 = (*(code *)PTR_FUN_8c0a7104)(ar4,ar5,ar4 + 0x54,auStack_84);
      iStack_d8 = iVar6;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a7108)
                (auStack_84,0xffffffff,auStack_84,0xffffffff);
    }
    goto switchD_8c0a69b0_default;
  case 6:
    *(undefined4 *)(DAT_8c0a6f34 + ar4) = 4;
switchD_8c0a69b0_caseD_4:
    (*(code *)PTR_FUN_8c0a7144)(auStack_90,ar6,puVar4,a7_00);
    iVar6 = (*(code *)PTR_FUN_8c0a7148)(ar4,ar5,auStack_90,a7_00);
    iStack_dc = iVar6;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a714c)(auStack_90,0xffffffff,0xffffffff,a7_00);
    goto switchD_8c0a69b0_default;
  case 7:
    *(undefined4 *)(DAT_8c0a6f44 + ar4) = 5;
switchD_8c0a69b0_caseD_5:
    (*(code *)PTR_FUN_8c0a7188)(auStack_9c,ar6,PTR_FUN_8c0a7188,a7_00);
    puVar5 = auStack_9c;
    iVar6 = (*(code *)PTR_FUN_8c0a718c)(ar4,ar5,puVar5,ar7);
    uStack_e4 = CONCAT44(iVar6,(undefined4)uStack_e4);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a7190)(auStack_9c,0xffffffff,puVar5,ar7);
    goto switchD_8c0a69b0_default;
  case 8:
    *(undefined4 *)(DAT_8c0a6f54 + ar4) = 6;
switchD_8c0a69b0_caseD_6:
    if (*(int *)(DAT_8c0a71d8 + ar4) == 6) {
      (*(code *)PTR_FUN_8c0a7224)(auStack_a8,ar6,puVar4,a7_00);
      puVar5 = auStack_a8;
      iVar6 = (*(code *)PTR_FUN_8c0a7228)(ar4,ar5,puVar5,a7_00);
      iStack_ec = iVar6;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a722c)(auStack_a8,0xffffffff,puVar5,a7_00);
    }
    else {
      (**(code **)(DAT_8c0a71dc + (int)*a4))(a4,ar5,puVar4,a7_00);
      uVar1 = in_dr0;
      if (in_FPSCR_SZ == '\0') {
        uStack_e4 = CONCAT44(uStack_e4._4_4_,(int)(in_dr0 >> 0x20));
        uVar1 = uStack_e4;
      }
      uStack_e4 = uVar1;
      iVar6 = (*(code *)PTR_FUN_8c0a71e8)(ar4,ar5,ar7,a7_00);
    }
    goto switchD_8c0a69b0_default;
  case 9:
    *(undefined4 *)(DAT_8c0a6f64 + ar4) = 7;
switchD_8c0a69b0_caseD_7:
    (*(code *)PTR_FUN_8c0a726c)(auStack_b4,ar6,puVar4,a7_00);
    puVar5 = auStack_b4;
    puStack_fc = a4;
    iVar6 = (*(code *)PTR_FUN_8c0a7270)(ar4,ar5,puVar5,ar7);
    iStack_f0 = iVar6;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a7274)(auStack_b4,0xffffffff,puVar5,ar7);
    goto switchD_8c0a69b0_default;
  }
  *(int *)(DAT_8c0a6f98 + ar4) = *(int *)(DAT_8c0a6f98 + ar4) + 1;
  uStack_f8._0_4_ = ar4;
switchD_8c0a69b0_caseD_2:
  iVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a6fa0)(ar4 + DAT_8c0a6f9c,a5,puVar4,a7_00)
  ;
  if (iVar2 == 1) {
    iVar6 = 0;
  }
switchD_8c0a69b0_default:
  if (iVar6 == 0) {
    *(undefined4 *)(DAT_8c0a72b0 + ar4) = 0;
  }
  return iVar6;
}



/* FUN_8c0a72b4 @ 8c0a72b4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a72b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 unaff_r11;
  undefined4 uVar2;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0;
  undefined8 uVar6;
  double dVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 in_dr14;
  undefined8 in_xd14;
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
  *(undefined4 *)((int)puVar3 + -0xc) = 1;
  *(undefined4 *)((int)puVar3 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar3 + -0x14) = in_PR;
  uVar2 = 1;
  uVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_set_zero_8c0a72f8)((undefined1 *)((int)puVar3 + -0x20),ar5,ar6,ar7);
  uVar9 = (undefined4)in_dr14;
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    break;
  case 1:
    goto switchD_8c0a72f4_caseD_1;
  default:
    goto switchD_8c0a72f4_caseD_2;
  case 3:
    goto switchD_8c0a72f4_caseD_3;
  case 4:
    *(int *)((int)puVar3 + -0x50) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(DAT_8c0a7700 + 8),*(undefined4 *)(ar4 + DAT_8c0a76fc)
                              );
    }
    else {
      dVar7 = *(double *)(DAT_8c0a7700 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x50) + 0x28),fVar5);
    }
    else {
      dVar7 = *(double *)(*(int *)((int)puVar3 + -0x50) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar3 + -0x50) + 0x28) = (int)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
    }
    else {
      *(double *)(*(int *)((int)puVar3 + -0x50) + 0x28) = dVar7;
    }
    if (in_FPSCR_PR != '\0' || SUB84(dVar7,0) <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
      }
    }
    uVar8 = (ulonglong)dVar7 & 0xffffffff;
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a7708)(ar4 + DAT_8c0a7704,uVar1,a6,ar7);
    *(undefined4 *)((int)puVar3 + -0x48) = uVar1;
    if (*(int *)((int)puVar3 + -0x48) == 1) {
      (*(code *)PTR_FUN_8c0a770c)(ar5,ar6,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar3 + -0x4c) = (int)(uVar8 >> 0x20);
        dVar7 = (double)CONCAT44(DAT_8c0a7710,*(undefined4 *)(DAT_8c0a7700 + 0xc));
      }
      else {
        *(ulonglong *)((int)puVar3 + -0x4c) = uVar8;
        dVar7 = (double)CONCAT44(uRam8c0a7714,DAT_8c0a7710);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 * dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar5);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)((int)puVar3 + -0x4c),fVar5);
      }
      else {
        uVar8 = *(ulonglong *)((int)puVar3 + -0x4c);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar8 & 0xffffffff;
        }
        *(undefined4 *)(DAT_8c0a773c + ar4) = *(undefined4 *)(DAT_8c0a7740 + ar4);
        *(undefined4 *)(ar4 + 0x40) = 1;
        if (*(int *)(DAT_8c0a773c + ar4) == 0) {
          ar7 = 0;
          a6 = 0xffffffff;
          ar6 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a7768)
                    (ar4 + DAT_8c0a7760._4_4_,0,0xffffffff,0);
        }
        else if (*(int *)(DAT_8c0a773c + ar4) == 1) {
          ar7 = 0;
          a6 = 0xffffffff;
          ar6 = 1;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a77bc)
                    (ar4 + DAT_8c0a77b4._4_4_,1,0xffffffff,0);
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a77c0)(ar4 + DAT_8c0a77b4._4_4_,ar6,a6,ar7);
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar8 & 0xffffffff;
        }
        uVar2 = 0;
      }
    }
    goto switchD_8c0a72f4_caseD_2;
  }
  uVar1 = (*(code *)PTR_rand_range_8c0a7348)(ar4,0,2,ar7);
  uVar4 = (undefined4)in_dr0;
  *(undefined4 *)((int)puVar3 + -0x28) = uVar1;
  if (*(int *)((int)puVar3 + -0x28) == 1) {
    ar7 = 0;
    a6 = 0xffffffff;
    uVar1 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a7354)(ar4 + DAT_8c0a734c._4_4_,0,0xffffffff,0)
    ;
    *(undefined4 *)(DAT_8c0a7358 + ar4) = 0;
  }
  else {
    ar7 = 0;
    a6 = 0xffffffff;
    uVar1 = 1;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a73b4)(ar4 + DAT_8c0a73ac._4_4_,1,0xffffffff,0)
    ;
    *(undefined4 *)(DAT_8c0a73b8 + ar4) = 1;
  }
  (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a73bc)(ar4 + DAT_8c0a73ac._4_4_,uVar1,a6,ar7);
  *(undefined4 *)(ar4 + 0x40) = 1;
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44((undefined4)DAT_8c0a73ac,uVar4);
    *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c0a73ac;
  }
  else {
    in_dr0 = CONCAT44(DAT_8c0a73ac._4_4_,(undefined4)DAT_8c0a73ac);
    *(ulonglong *)(ar4 + 0x30) = in_dr0;
  }
  *(undefined4 *)(DAT_8c0a73c0 + ar4) = 2;
switchD_8c0a72f4_caseD_1:
  uVar1 = (undefined4)in_dr0;
  if (*(int *)(DAT_8c0a73b8 + ar4) == 0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c0a73f0 + 4) = 0x3f800000;
    }
    else {
      *(undefined8 *)(DAT_8c0a73f0 + 4) = CONCAT44(0x3f800000,uVar1);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(DAT_8c0a73f4,uVar1);
      *(undefined4 *)(DAT_8c0a73f0 + 8) = DAT_8c0a73f4;
    }
    else {
      uVar6 = CONCAT44(DAT_8c0a73f8,DAT_8c0a73f4);
      *(undefined8 *)(DAT_8c0a73f0 + 8) = uVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(DAT_8c0a73f8,(int)uVar6);
      *(undefined4 *)(DAT_8c0a73f0 + 0x10) = DAT_8c0a73f8;
    }
    else {
      uVar6 = CONCAT44(uRam8c0a73fc,DAT_8c0a73f8);
      *(undefined8 *)(DAT_8c0a73f0 + 0x10) = uVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c0a73f8,(int)uVar6);
      *(undefined4 *)(DAT_8c0a73f0 + 0x14) = DAT_8c0a73f8;
    }
    else {
      in_dr0 = CONCAT44(uRam8c0a73fc,DAT_8c0a73f8);
      *(ulonglong *)(DAT_8c0a73f0 + 0x14) = in_dr0;
    }
  }
  else if (*(int *)(DAT_8c0a73b8 + ar4) == 1) {
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44((undefined4)DAT_8c0a7484,uVar1);
      *(undefined4 *)(DAT_8c0a7480 + 4) = (undefined4)DAT_8c0a7484;
    }
    else {
      uVar6 = CONCAT44(DAT_8c0a7484._4_4_,(undefined4)DAT_8c0a7484);
      *(undefined8 *)(DAT_8c0a7480 + 4) = uVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(DAT_8c0a7484._4_4_,(int)uVar6);
      *(undefined4 *)(DAT_8c0a7480 + 8) = DAT_8c0a7484._4_4_;
    }
    else {
      uVar6 = CONCAT44(PTR_FUN_8c0a748c,DAT_8c0a7484._4_4_);
      *(undefined8 *)(DAT_8c0a7480 + 8) = uVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c0a7480 + 0x10) = 0x3f800000;
    }
    else {
      *(undefined8 *)(DAT_8c0a7480 + 0x10) = CONCAT44(0x3f800000,(int)uVar6);
    }
    in_dr0 = CONCAT44(0x3f800000,(int)uVar6);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c0a7480 + 0x14) = 0x3f800000;
    }
    else {
      *(ulonglong *)(DAT_8c0a7480 + 0x14) = in_dr0;
    }
  }
  fVar5 = (float)in_dr0;
  (*(code *)PTR_FUN_8c0a748c)(ar4,DAT_8c0a7480,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    fVar5 = *(float *)(ar4 + 0x30);
  }
  in_dr0 = (ulonglong)(uint)fVar5;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar5) {
    if (in_FPSCR_SZ == '\0') {
      uVar9 = *(undefined4 *)(ar4 + 0x30);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x30);
      uVar9 = (undefined4)*(undefined8 *)(ar4 + 0x2c);
    }
  }
  uVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0a7494)(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0a7498 + ar4) != 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x30) = uVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd14;
    }
  }
  *(undefined4 *)(ar4 + 0x40) = 3;
switchD_8c0a72f4_caseD_3:
  if (*(int *)(DAT_8c0a749c + ar4) == 0) {
    (*(code *)PTR_FUN_8c0a7540)(ar4 + DAT_8c0a753c,uVar1,a6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a7544)(ar4 + DAT_8c0a753c,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0x2c) = (int)(in_dr0 >> 0x20);
      uVar6 = CONCAT44(DAT_8c0a7548,*(undefined4 *)((int)puVar3 + -0x2c));
    }
    else {
      *(ulonglong *)((int)puVar3 + -0x2c) = in_dr0;
      uVar6 = CONCAT44(PTR_rand_range_8c0a754c,DAT_8c0a7548);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar6 >> 0x20) <= (float)uVar6) {
      a6 = 5;
      uVar1 = (*(code *)PTR_rand_range_8c0a754c)(ar4,0,5,ar7);
      *(undefined4 *)((int)puVar3 + -0x30) = uVar1;
      if (*(int *)((int)puVar3 + -0x30) != 1) {
        (*(code *)PTR_FUN_8c0a7550)(ar5,ar6,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar3 + -0x34) = (int)((ulonglong)uVar6 >> 0x20);
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)(DAT_8c0a7554 + 0xc));
        }
        else {
          *(undefined8 *)((int)puVar3 + -0x34) = uVar6;
          dVar7 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)((int)puVar3 + -0x34),fVar5);
        }
        else {
          uVar6 = *(undefined8 *)((int)puVar3 + -0x34);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar6 < (float)((ulonglong)uVar6 >> 0x20))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(DAT_8c0a7558 + ar4) = 1;
      *(undefined4 *)(DAT_8c0a755c + ar4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a7560) = *(undefined4 *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a7560) = *(undefined8 *)(ar4 + 0x28);
      }
    }
  }
  else if (*(int *)(DAT_8c0a749c + ar4) == 1) {
    (*(code *)PTR_FUN_8c0a7650)(ar4 + DAT_8c0a764c,uVar1,a6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a7654)(ar4 + DAT_8c0a764c,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0x38) = (int)(in_dr0 >> 0x20);
      uVar6 = CONCAT44(DAT_8c0a7644._4_4_,*(undefined4 *)((int)puVar3 + -0x38));
    }
    else {
      *(ulonglong *)((int)puVar3 + -0x38) = in_dr0;
      uVar6 = CONCAT44(DAT_8c0a764c,DAT_8c0a7644._4_4_);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar6 >> 0x20) <= (float)uVar6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = DAT_8c0a7658;
        uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x28),(float)uVar6);
        *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(_DAT_8c0a765c,DAT_8c0a7658);
        uVar6 = *(undefined8 *)(ar4 + 0x28);
        *(undefined8 *)(ar4 + 0x24) = uVar6;
      }
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0a7654)(ar4 + DAT_8c0a764c,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0x3c) = (int)((ulonglong)uVar6 >> 0x20);
      uVar6 = CONCAT44(_DAT_8c0a765c,*(undefined4 *)((int)puVar3 + -0x3c));
    }
    else {
      *(undefined8 *)((int)puVar3 + -0x3c) = uVar6;
      uVar6 = CONCAT44(PTR_rand_range_8c0a7660,_DAT_8c0a765c);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar6 >> 0x20) <= (float)uVar6) {
      a6 = 2;
      uVar1 = (*(code *)PTR_rand_range_8c0a7660)(ar4,0,2,ar7);
      *(undefined4 *)((int)puVar3 + -0x40) = uVar1;
      if (*(int *)((int)puVar3 + -0x40) != 1) {
        (*(code *)PTR_FUN_8c0a7664)(ar5,ar6,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar3 + -0x44) = (int)((ulonglong)uVar6 >> 0x20);
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)(DAT_8c0a7668 + 0xc));
        }
        else {
          *(undefined8 *)((int)puVar3 + -0x44) = uVar6;
          dVar7 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)((int)puVar3 + -0x44),fVar5);
        }
        else {
          uVar6 = *(undefined8 *)((int)puVar3 + -0x44);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar6 < (float)((ulonglong)uVar6 >> 0x20))
        goto LAB_8c0a761e;
      }
      *(undefined4 *)(DAT_8c0a766c + ar4) = 0;
      *(undefined4 *)(DAT_8c0a7670 + ar4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a7674) = *(undefined4 *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a7674) = *(undefined8 *)(ar4 + 0x28);
      }
    }
  }
LAB_8c0a761e:
  if (*(int *)(ar4 + 0x40) != 4) {
    (*(code *)PTR_FUN_8c0a7678)(ar4,ar6,ar5,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    a6 = ar5;
  }
switchD_8c0a72f4_caseD_2:
  *(undefined4 *)((int)puVar3 + -0x24) = uVar2;
  (*(code *)PTR_object_dtor_delete_8c0a77c4)((undefined1 *)((int)puVar3 + -0x20),0xffffffff,a6,ar7);
  return *(undefined4 *)((int)puVar3 + -0x24);
}



/* FUN_8c0a77c8 @ 8c0a77c8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a83a6) */
/* WARNING: Removing unreachable block (ram,0x8c0a8140) */
/* WARNING: Removing unreachable block (ram,0x8c0a8124) */
/* WARNING: Removing unreachable block (ram,0x8c0a8108) */
/* WARNING: Removing unreachable block (ram,0x8c0a80ea) */
/* WARNING: Removing unreachable block (ram,0x8c0a7f72) */
/* WARNING: Removing unreachable block (ram,0x8c0a7eb4) */
/* WARNING: Removing unreachable block (ram,0x8c0a7aba) */
/* WARNING: Removing unreachable block (ram,0x8c0a7b52) */
/* WARNING: Removing unreachable block (ram,0x8c0a7c98) */
/* WARNING: Removing unreachable block (ram,0x8c0a7dc0) */
/* WARNING: Removing unreachable block (ram,0x8c0a79a8) */
/* WARNING: Removing unreachable block (ram,0x8c0a799a) */
/* WARNING: Removing unreachable block (ram,0x8c0a7e48) */
/* WARNING: Removing unreachable block (ram,0x8c0a7d2c) */
/* WARNING: Removing unreachable block (ram,0x8c0a7bec) */
/* WARNING: Removing unreachable block (ram,0x8c0a7a14) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ea8) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ed4) */
/* WARNING: Removing unreachable block (ram,0x8c0a7f62) */
/* WARNING: Removing unreachable block (ram,0x8c0a80fa) */
/* WARNING: Removing unreachable block (ram,0x8c0a8118) */
/* WARNING: Removing unreachable block (ram,0x8c0a8132) */
/* WARNING: Removing unreachable block (ram,0x8c0a8150) */
/* WARNING: Removing unreachable block (ram,0x8c0a8308) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ec4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a77c8(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  double *pdVar2;
  undefined4 uVar3;
  double *a6;
  undefined4 uVar4;
  undefined4 unaff_r10;
  undefined4 uVar5;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar6;
  float fVar7;
  undefined *puVar8;
  double in_dr0;
  float fVar12;
  undefined *puVar13;
  ulonglong uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 in_dr4;
  undefined8 in_dr6;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  undefined8 in_xd4;
  bool bVar14;
  undefined4 in_PR;
  int iVar15;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = auStack_4;
  }
  else {
    puVar6 = auStack_8;
  }
  *(undefined4 *)(puVar6 + -4) = unaff_r14;
  *(undefined4 *)(puVar6 + -8) = unaff_r13;
  *(undefined4 *)(puVar6 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar6 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar6 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar6 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar6 + -0xd8) = (int)in_dr4;
    *(int *)(puVar6 + -0xd4) = (int)((ulonglong)in_dr6 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar6 + -0xd8) = in_xd4;
    *(undefined8 *)(puVar6 + -0xd4) = in_dr6;
  }
  uVar5 = 1;
  iVar1 = *(int *)(DAT_8c0a7814 + ar4);
  if (iVar1 == 0) {
    ar7 = 0;
    pdVar2 = (double *)0xffffffff;
    ar5 = (double *)0x0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a786c)(ar4 + DAT_8c0a7864._4_4_,0,0xffffffff,0)
    ;
    fVar7 = SUB84(in_dr0,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a7870)(ar4 + DAT_8c0a7864._4_4_,ar5,pdVar2,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a7874) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a7874) = (ulonglong)(uint)fVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(ar4 + DAT_8c0a7878);
    }
    else {
      in_xd0 = *(double *)(ar4 + DAT_8c0a7878);
    }
    dVar10 = (double)(ulonglong)(uint)fVar7;
    if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
      while( true ) {
        fVar7 = SUB84(dVar10,0);
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)(ar4 + DAT_8c0a7a30);
        }
        else {
          in_xd0 = *(double *)(ar4 + DAT_8c0a7a30);
        }
        if (in_FPSCR_PR == '\0' && 0.0 < fVar7) break;
        *(int *)(puVar6 + -0x74) = ar4;
        ar5 = (double *)(*(int *)(puVar6 + -0x74) + DAT_8c0a7a30);
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a7a34,
                                    *(undefined4 *)(*(int *)(puVar6 + -0x74) + DAT_8c0a7a30));
        }
        else {
          in_xd0 = *(double *)(*(int *)(puVar6 + -0x74) + DAT_8c0a7a30);
          dVar10 = (double)CONCAT44(_DAT_8c0a7a38,DAT_8c0a7a34);
        }
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar10 = dVar10 + dVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)ar5 = SUB84(dVar10,0);
        }
        else {
          *ar5 = in_xd0;
        }
      }
      *(int *)(puVar6 + -0x78) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0a7a34,
                                  *(undefined4 *)(*(int *)(puVar6 + -0x78) + DAT_8c0a7a30));
      }
      else {
        in_xd0 = *(double *)(*(int *)(puVar6 + -0x78) + DAT_8c0a7a30);
        dVar10 = (double)CONCAT44(_DAT_8c0a7a38,DAT_8c0a7a34);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar6 + -0x78) + DAT_8c0a7a30) = fVar7;
      }
      else {
        *(double *)(*(int *)(puVar6 + -0x78) + DAT_8c0a7a30) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0a7a30);
        fVar12 = _DAT_8c0a7a38;
      }
      else {
        in_xd0 = *(double *)(ar4 + DAT_8c0a7a30);
        fVar7 = _DAT_8c0a7a38;
        fVar12 = _DAT_8c0a7a3c;
      }
      if (in_FPSCR_PR == '\0' && fVar7 < fVar12) {
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a7a34,*(undefined4 *)(ar4 + DAT_8c0a7a30));
        }
        else {
          in_xd0 = *(double *)(ar4 + DAT_8c0a7a30);
          dVar10 = (double)CONCAT44(_DAT_8c0a7a38,DAT_8c0a7a34);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0a7a30) = fVar7;
        }
        else {
          *(double *)(ar4 + DAT_8c0a7a30) = in_xd0;
        }
      }
    }
    else {
      while( true ) {
        fVar7 = SUB84(dVar10,0);
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)(ar4 + DAT_8c0a78f8);
        }
        else {
          in_xd0 = *(double *)(ar4 + DAT_8c0a78f8);
        }
        if (in_FPSCR_PR == '\0' && fVar7 < 0.0) break;
        *(int *)(puVar6 + -0x6c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a78fc,
                                    *(undefined4 *)(*(int *)(puVar6 + -0x6c) + DAT_8c0a78f8));
        }
        else {
          in_xd0 = *(double *)(*(int *)(puVar6 + -0x6c) + DAT_8c0a78f8);
          dVar10 = (double)CONCAT44(_DAT_8c0a7900,DAT_8c0a78fc);
        }
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar10 = dVar10 - dVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)(puVar6 + -0x6c) + DAT_8c0a78f8) = SUB84(dVar10,0);
        }
        else {
          *(double *)(*(int *)(puVar6 + -0x6c) + DAT_8c0a78f8) = in_xd0;
        }
      }
      *(int *)(puVar6 + -0x70) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0a78fc,
                                  *(undefined4 *)(*(int *)(puVar6 + -0x70) + DAT_8c0a78f8));
      }
      else {
        in_xd0 = *(double *)(*(int *)(puVar6 + -0x70) + DAT_8c0a78f8);
        dVar10 = (double)CONCAT44(_DAT_8c0a7900,DAT_8c0a78fc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar6 + -0x70) + DAT_8c0a78f8) = fVar7;
      }
      else {
        *(double *)(*(int *)(puVar6 + -0x70) + DAT_8c0a78f8) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0a78f8);
        fVar12 = _DAT_8c0a7900;
      }
      else {
        in_xd0 = *(double *)(ar4 + DAT_8c0a78f8);
        fVar7 = _DAT_8c0a7900;
        fVar12 = DAT_8c0a7904;
      }
      if (in_FPSCR_PR == '\0' && fVar12 < fVar7) {
        pdVar2 = (double *)(ar4 + DAT_8c0a78f8);
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(float *)pdVar2,DAT_8c0a78fc);
        }
        else {
          dVar10 = *pdVar2;
          in_xd0 = (double)CONCAT44(_DAT_8c0a7900,DAT_8c0a78fc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 - dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a7904,fVar7);
        }
        else {
          dVar10 = (double)CONCAT44(uRam8c0a7908,DAT_8c0a7904);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 * dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0a78f8) = fVar7;
        }
        else {
          *(double *)(ar4 + DAT_8c0a78f8) = in_xd0;
        }
      }
    }
    *(int *)(puVar6 + -0x7c) = ar4;
    *(int *)((int)_DAT_8c0a7a3c + *(int *)(puVar6 + -0x7c)) =
         *(int *)((int)_DAT_8c0a7a3c + *(int *)(puVar6 + -0x7c)) + 1;
  }
  else {
    pdVar2 = ar6;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(int *)(puVar6 + -0xa8) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a81b0,
                                    *(undefined4 *)(*(int *)(puVar6 + -0xa8) + DAT_8c0a81ac));
        }
        else {
          in_xd0 = *(double *)(*(int *)(puVar6 + -0xa8) + DAT_8c0a81ac);
          dVar10 = (double)CONCAT44(DAT_8c0a81b4,DAT_8c0a81b0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 - dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar6 + -0xa8) + DAT_8c0a81ac) = fVar7;
        }
        else {
          *(double *)(*(int *)(puVar6 + -0xa8) + DAT_8c0a81ac) = in_xd0;
        }
        *(int *)(puVar6 + -0xac) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a81b0,
                                    *(undefined4 *)(*(int *)(puVar6 + -0xac) + DAT_8c0a81b4));
        }
        else {
          in_xd0 = *(double *)(*(int *)(puVar6 + -0xac) + DAT_8c0a81b4);
          dVar10 = (double)CONCAT44(DAT_8c0a81b4,DAT_8c0a81b0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar6 + -0xac) + DAT_8c0a81b4) = fVar7;
        }
        else {
          *(double *)(*(int *)(puVar6 + -0xac) + DAT_8c0a81b4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar9 = CONCAT44(DAT_8c0a81b8,*(undefined4 *)(ar4 + DAT_8c0a81b4));
        }
        else {
          in_xd0 = *(double *)(ar4 + DAT_8c0a81b4);
          uVar9 = CONCAT44(_DAT_8c0a81bc,DAT_8c0a81b8);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20)) {
          return 1;
        }
        *(int *)(puVar6 + -0xb0) = ar4;
        *(int *)((int)_DAT_8c0a81bc + *(int *)(puVar6 + -0xb0)) =
             *(int *)((int)_DAT_8c0a81bc + *(int *)(puVar6 + -0xb0)) + 1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0a81b4) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0a81b4) = uVar9 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(puVar6 + -0xd4),(float)uVar9);
        }
        else {
          in_dr0 = *(double *)(puVar6 + -0xd4);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr0 = (double)CONCAT44(-(float)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0));
        }
        else {
          in_dr0 = -in_dr0;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c0a81c0) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c0a81c0) = in_dr0;
        }
      }
      else if (iVar1 != 3) {
        return 1;
      }
      pdVar2 = ar5;
      a6 = ar6;
      (*(code *)PTR_FUN_8c0a81c4)(ar4 + 0x54,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar6 + -0x5c) = (int)((ulonglong)in_dr0 >> 0x20);
        dVar10 = (double)CONCAT44(*(undefined4 *)(puVar6 + -0x5c),SUB84(in_dr0,0));
      }
      else {
        *(double *)(puVar6 + -0x5c) = in_dr0;
        dVar10 = *(double *)(puVar6 + -0x5c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar14 = (float)((ulonglong)dVar10 >> 0x20) < in_fr15;
      }
      else {
        bVar14 = dVar10 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar14) goto LAB_8c0a82ca;
      *(undefined4 *)((int)_DAT_8c0a81bc + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a81c0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0a81c0) = (ulonglong)dVar10 & 0xffffffff;
      }
      uVar5 = 0;
      a6 = (double *)0x2;
      pdVar2 = (double *)(*(code *)PTR_rand_range_8c0a81c8)(ar4,0,2,ar7);
      *(double **)(puVar6 + -0x60) = pdVar2;
      if ((*(int *)(puVar6 + -0x60) != 0) || (*(int *)(DAT_8c0a81cc + ar4) == 7)) {
        *(undefined4 *)(DAT_8c0a82f0 + ar4) = 6;
        goto LAB_8c0a82ca;
      }
      (*(code *)PTR_Vec3_assign_8c0a81d0)(ar4 + 0x54,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(puVar6 + -0xd8);
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(puVar6 + -0xd8);
      }
      *(undefined4 *)(DAT_8c0a81cc + ar4) = 0;
      *(undefined4 *)(DAT_8c0a81d4 + ar4) = 0;
      *(undefined4 *)(DAT_8c0a81d8 + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)((int)ar6 + 4);
        fVar12 = DAT_8c0a81b8;
      }
      else {
        in_xd0 = *(double *)((int)ar6 + 4);
        fVar7 = DAT_8c0a81b8;
        fVar12 = _DAT_8c0a81bc;
      }
      if (fVar7 == fVar12) {
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)(ar4 + DAT_8c0a81dc);
          fVar12 = DAT_8c0a81b8;
        }
        else {
          in_xd0 = *(double *)(ar4 + DAT_8c0a81dc);
          fVar7 = DAT_8c0a81b8;
          fVar12 = _DAT_8c0a81bc;
        }
        if (fVar7 != fVar12) goto LAB_8c0a80fe;
LAB_8c0a8154:
        *(int *)(puVar6 + -0xb4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a81e8,*(undefined4 *)(*(int *)(puVar6 + -0xb4) + 0x5c));
        }
        else {
          in_xd0 = *(double *)(*(int *)(puVar6 + -0xb4) + 0x5c);
          dVar10 = (double)CONCAT44(DAT_8c0a81ec,DAT_8c0a81e8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar6 + -0xb4) + 0x5c) = fVar7;
        }
        else {
          *(double *)(*(int *)(puVar6 + -0xb4) + 0x5c) = in_xd0;
        }
        *(undefined1 **)(puVar6 + -0xdc) = puVar6 + DAT_8c0a81ec + -0xd8;
        (*(code *)PTR_Vec3_sub_8c0a81f0)(ar4 + 0x54,ar5,a6,ar7);
        uVar3 = (*(code *)PTR_Vec3_length_8c0a81f4)
                          (puVar6 + DAT_8c0a81ec + -0xd8,PTR_Vec3_length_8c0a81f4,a6,ar7);
        *(undefined4 *)(puVar6 + -100) = uVar3;
        (*(code *)PTR_Vec3_assign_8c0a81d0)
                  (ar4 + DAT_8c0a81f8,*(undefined4 *)(puVar6 + -100),a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0a81fc)(puVar6 + DAT_8c0a81ec + -0xd8,0xffffffff,a6,ar7);
      }
      else {
LAB_8c0a80fe:
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)((int)ar6 + 4);
          fVar12 = DAT_8c0a81e0;
        }
        else {
          in_xd0 = *(double *)((int)ar6 + 4);
          fVar7 = DAT_8c0a81e0;
          fVar12 = _DAT_8c0a81e4;
        }
        if (fVar7 == fVar12) {
          if (in_FPSCR_SZ == '\0') {
            fVar7 = *(float *)(ar4 + DAT_8c0a81dc);
            fVar12 = DAT_8c0a81e0;
          }
          else {
            in_xd0 = *(double *)(ar4 + DAT_8c0a81dc);
            fVar7 = DAT_8c0a81e0;
            fVar12 = _DAT_8c0a81e4;
          }
          if (fVar7 == fVar12) goto LAB_8c0a8154;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)((int)ar6 + 4);
        }
        else {
          in_xd0 = *(double *)((int)ar6 + 4);
        }
        if (fVar7 == 0.0) {
          if (in_FPSCR_SZ == '\0') {
            fVar7 = *(float *)(ar4 + DAT_8c0a81dc);
          }
          else {
            in_xd0 = *(double *)(ar4 + DAT_8c0a81dc);
          }
          if (fVar7 == 0.0) goto LAB_8c0a8154;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)((int)ar6 + 4);
          fVar12 = _DAT_8c0a81e4;
        }
        else {
          in_xd0 = *(double *)((int)ar6 + 4);
          fVar7 = _DAT_8c0a81e4;
          fVar12 = DAT_8c0a81e8;
        }
        if (fVar7 == fVar12) {
          if (in_FPSCR_SZ == '\0') {
            fVar7 = *(float *)(ar4 + DAT_8c0a81dc);
            fVar12 = _DAT_8c0a81e4;
          }
          else {
            in_xd0 = *(double *)(ar4 + DAT_8c0a81dc);
            fVar7 = _DAT_8c0a81e4;
            fVar12 = DAT_8c0a81e8;
          }
          if (fVar7 == fVar12) goto LAB_8c0a8154;
        }
        *(int *)(puVar6 + -0xb8) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0a829c,*(undefined4 *)(*(int *)(puVar6 + -0xb8) + 0x5c));
        }
        else {
          in_xd0 = *(double *)(*(int *)(puVar6 + -0xb8) + 0x5c);
          dVar10 = (double)CONCAT44(DAT_8c0a82a0,DAT_8c0a829c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar6 + -0xb8) + 0x5c) = fVar7;
        }
        else {
          *(double *)(*(int *)(puVar6 + -0xb8) + 0x5c) = in_xd0;
        }
        *(undefined1 **)(puVar6 + -0xdc) = puVar6 + DAT_8c0a82a0 + -0xd8;
        (*(code *)PTR_Vec3_sub_8c0a82a4)(ar4 + 0x54,ar5,a6,ar7);
        uVar3 = (*(code *)PTR_Vec3_length_8c0a82a8)
                          (puVar6 + DAT_8c0a82a0 + -0xd8,PTR_Vec3_length_8c0a82a8,a6,ar7);
        *(undefined4 *)(puVar6 + -0x68) = uVar3;
        (*(code *)PTR_Vec3_assign_8c0a82b0)
                  (ar4 + DAT_8c0a82ac,*(undefined4 *)(puVar6 + -0x68),a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0a82b4)(puVar6 + DAT_8c0a82a0 + -0xd8,0xffffffff,a6,ar7);
      }
      iVar1 = ar4 + DAT_8c0a82ac;
      (*(code *)PTR_Vec3_assign_8c0a82b0)(ar4 + 0x14,iVar1,a6,ar7);
      (*(code *)PTR_FUN_8c0a82bc)(ar4 + DAT_8c0a82b8,iVar1,a6,ar7);
      (*(code *)PTR_FUN_8c0a82bc)(ar6,iVar1,a6,ar7);
      (*(code *)PTR_FUN_8c0a82c0)(ar4,ar6,a6,ar7);
      pdVar2 = ar6;
LAB_8c0a82ca:
      if (DAT_8c0a82f8 <= *(int *)(DAT_8c0a82f4 + ar4)) {
        return uVar5;
      }
      fVar7 = DAT_8c0a8300;
      fVar12 = fRam8c0a8304;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0a82fc);
        fVar12 = DAT_8c0a8300;
      }
      if (in_FPSCR_PR != '\0' || fVar7 <= fVar12) {
        iVar1 = 0;
        while( true ) {
          if (in_FPSCR_SZ == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c0a83c4),(float)iVar1);
          }
          else {
            uVar11 = *(undefined8 *)(ar4 + DAT_8c0a83c4);
          }
          if (in_FPSCR_PR == '\0' && (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20)) break;
          (*(code *)PTR_Vec3_ctor_xyz_8c0a83bc)(puVar6 + DAT_8c0a83b8 + -0xd8,pdVar2,a6,ar7);
          *(undefined1 **)(puVar6 + -0xdc) = puVar6 + DAT_8c0a83c0 + -0xd8;
          (*(code *)PTR_Vec3_add_8c0a83c8)(ar5,puVar6 + DAT_8c0a83c4 + -0xdc,a6,ar7);
          *(undefined4 *)(puVar6 + -0xbc) = *(undefined4 *)(DAT_8c0a83cc + ar4);
          (*(code *)PTR_Vec3_assign_8c0a83d4)
                    (ar4 + *(int *)(puVar6 + -0xbc) * 0x10 + DAT_8c0a83d0,
                     puVar6 + DAT_8c0a83c0 + -0xd8,a6,ar7);
          (*(code *)PTR_Vec3_dtor_8c0a83d8)(puVar6 + DAT_8c0a83c0 + -0xd8,0xffffffff,a6,ar7);
          pdVar2 = (double *)0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c0a83d8)(puVar6 + DAT_8c0a83b8 + -0xd8,0xffffffff,a6,ar7);
          *(int *)(puVar6 + -0xc0) = ar4;
          *(undefined4 *)(puVar6 + -0xc4) = *(undefined4 *)(DAT_8c0a83cc + *(int *)(puVar6 + -0xc0))
          ;
          *(int *)(DAT_8c0a83cc + *(int *)(puVar6 + -0xc0)) = *(int *)(puVar6 + -0xc4) + 1;
          if (DAT_8c0a83dc <= *(int *)(puVar6 + -0xc4) + 1) {
            *(int *)(DAT_8c0a83cc + ar4) = DAT_8c0a83dc;
          }
          if (in_FPSCR_PR == '\0') {
            bVar14 = (float)*(int *)(DAT_8c0a83cc + ar4) < in_fr15;
          }
          else {
            bVar14 = (double)*(int *)(DAT_8c0a83cc + ar4) < (double)CONCAT44(in_fr14,in_fr15);
          }
          if (!bVar14) {
            if (in_FPSCR_PR == '\0') {
              iVar15 = (int)in_fr15;
            }
            else {
              iVar15 = (int)(double)CONCAT44(in_fr14,in_fr15);
            }
            *(int *)(DAT_8c0a83cc + ar4) = iVar15;
          }
          iVar1 = iVar1 + -2;
        }
        return uVar5;
      }
      *(undefined4 *)(puVar6 + -200) = *(undefined4 *)(DAT_8c0a8454 + ar4);
      (*(code *)PTR_Vec3_assign_8c0a845c)
                (ar4 + *(int *)(puVar6 + -200) * 0x10 + DAT_8c0a8458,ar5,a6,ar7);
      *(int *)(puVar6 + -0xcc) = ar4;
      *(undefined4 *)(puVar6 + -0xd0) = *(undefined4 *)(DAT_8c0a8454 + *(int *)(puVar6 + -0xcc));
      *(int *)(DAT_8c0a8454 + *(int *)(puVar6 + -0xcc)) = *(int *)(puVar6 + -0xd0) + 1;
      if (DAT_8c0a8460 <= *(int *)(puVar6 + -0xd0) + 1) {
        *(int *)(DAT_8c0a8454 + ar4) = DAT_8c0a8460;
      }
      if (in_FPSCR_PR == '\0') {
        bVar14 = (float)*(int *)(DAT_8c0a8454 + ar4) < in_fr15;
      }
      else {
        bVar14 = (double)*(int *)(DAT_8c0a8454 + ar4) < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar14) {
        return uVar5;
      }
      if (in_FPSCR_PR == '\0') {
        iVar1 = (int)in_fr15;
      }
      else {
        iVar1 = (int)(double)CONCAT44(in_fr14,in_fr15);
      }
      *(int *)(DAT_8c0a8454 + ar4) = iVar1;
      return uVar5;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar7 = *(float *)((int)ar6 + 4);
    fVar12 = DAT_8c0a7a40;
  }
  else {
    in_xd0 = *(double *)((int)ar6 + 4);
    fVar7 = DAT_8c0a7a40;
    fVar12 = DAT_8c0a7a44;
  }
  if (fVar7 != fVar12) {
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)((int)ar6 + 4);
      fVar12 = DAT_8c0a7a44;
    }
    else {
      in_xd0 = *(double *)((int)ar6 + 4);
      fVar7 = DAT_8c0a7a44;
      fVar12 = _DAT_8c0a7a48;
    }
    if (fVar7 != fVar12) {
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0a7cb0);
      }
      else {
        in_xd0 = *(double *)(ar4 + DAT_8c0a7cb0);
      }
      if (in_FPSCR_PR != '\0' || 0.0 <= fVar7) {
        if (in_FPSCR_SZ == '\0') {
          puVar8 = *(undefined **)(ar4 + DAT_8c0a7cb0);
          puVar13 = DAT_8c0a7cb4;
        }
        else {
          in_xd0 = *(double *)(ar4 + DAT_8c0a7cb0);
          puVar8 = DAT_8c0a7cb4;
          puVar13 = _DAT_8c0a7cb8;
        }
        if (in_FPSCR_PR == '\0' && (float)puVar8 < (float)puVar13) {
          *(int *)(puVar6 + -0x94) = ar4;
          if (in_FPSCR_SZ == '\0') {
            puVar8 = *(undefined **)(*(int *)(puVar6 + -0x94) + DAT_8c0a7d48);
          }
          else {
            in_xd0 = *(double *)(*(int *)(puVar6 + -0x94) + DAT_8c0a7d48);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = (float)puVar8 - 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,puVar8) - (double)CONCAT44(0x3f800000,puVar8),
                          0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)(puVar6 + -0x94) + DAT_8c0a7d48) = fVar7;
          }
          else {
            *(double *)(*(int *)(puVar6 + -0x94) + DAT_8c0a7d48) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            fVar7 = *(float *)(ar4 + DAT_8c0a7d48);
          }
          if (in_FPSCR_PR != '\0' || fVar7 <= 0.0) {
            if (in_FPSCR_SZ == '\0') {
              fVar7 = *(float *)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (*(code *)PTR_FUN_8c0a7d50)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            else {
              (*(code *)PTR_FUN_8c0a7d74)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + DAT_8c0a7d78) = 0;
            }
            else {
              *(ulonglong *)(ar4 + DAT_8c0a7d78) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          *(int *)(puVar6 + -0x90) = ar4;
          if (in_FPSCR_SZ == '\0') {
            puVar8 = *(undefined **)(*(int *)(puVar6 + -0x90) + DAT_8c0a7cb0);
          }
          else {
            in_xd0 = *(double *)(*(int *)(puVar6 + -0x90) + DAT_8c0a7cb0);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = (float)puVar8 + 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,puVar8) + (double)CONCAT44(0x3f800000,puVar8),
                          0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)(puVar6 + -0x90) + DAT_8c0a7cb0) = fVar7;
          }
          else {
            *(double *)(*(int *)(puVar6 + -0x90) + DAT_8c0a7cb0) = in_xd0;
          }
          puVar8 = _DAT_8c0a7cb8;
          puVar13 = PTR_FUN_8c0a7cbc;
          if (in_FPSCR_SZ == '\0') {
            puVar8 = *(undefined **)(ar4 + DAT_8c0a7cb0);
            puVar13 = _DAT_8c0a7cb8;
          }
          if (in_FPSCR_PR != '\0' || (float)puVar13 <= (float)puVar8) {
            if (in_FPSCR_SZ == '\0') {
              puVar8 = *(undefined **)((int)ar6 + 4);
            }
            if ((float)puVar8 == 0.0) {
              (*(code *)PTR_FUN_8c0a7cbc)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            else {
              (*(code *)PTR_FUN_8c0a7ce8)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + DAT_8c0a7cec) = DAT_8c0a7cf0;
            }
            else {
              *(undefined8 *)(ar4 + DAT_8c0a7cec) = CONCAT44(uRam8c0a7cf4,DAT_8c0a7cf0);
            }
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          puVar8 = *(undefined **)(ar4 + DAT_8c0a7dd8);
          puVar13 = DAT_8c0a7ddc;
        }
        else {
          in_xd0 = *(double *)(ar4 + DAT_8c0a7dd8);
          puVar8 = DAT_8c0a7ddc;
          puVar13 = _DAT_8c0a7de0;
        }
        if (in_FPSCR_PR == '\0' && (float)puVar13 < (float)puVar8) {
          *(int *)(puVar6 + -0x9c) = ar4;
          if (in_FPSCR_SZ == '\0') {
            puVar8 = *(undefined **)(*(int *)(puVar6 + -0x9c) + DAT_8c0a7e64);
          }
          else {
            in_xd0 = *(double *)(*(int *)(puVar6 + -0x9c) + DAT_8c0a7e64);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = (float)puVar8 + 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,puVar8) + (double)CONCAT44(0x3f800000,puVar8),
                          0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)(puVar6 + -0x9c) + DAT_8c0a7e64) = fVar7;
          }
          else {
            *(double *)(*(int *)(puVar6 + -0x9c) + DAT_8c0a7e64) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            fVar7 = *(float *)(ar4 + DAT_8c0a7e64);
          }
          if (in_FPSCR_PR != '\0' || 0.0 <= fVar7) {
            if (in_FPSCR_SZ == '\0') {
              fVar7 = *(float *)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (*(code *)PTR_FUN_8c0a7e6c)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            else {
              (*(code *)PTR_FUN_8c0a7f20)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + DAT_8c0a7f24) = 0;
            }
            else {
              *(ulonglong *)(ar4 + DAT_8c0a7f24) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          *(int *)(puVar6 + -0x98) = ar4;
          if (in_FPSCR_SZ == '\0') {
            puVar8 = *(undefined **)(*(int *)(puVar6 + -0x98) + DAT_8c0a7dd8);
          }
          else {
            in_xd0 = *(double *)(*(int *)(puVar6 + -0x98) + DAT_8c0a7dd8);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = (float)puVar8 - 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,puVar8) - (double)CONCAT44(0x3f800000,puVar8),
                          0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)(puVar6 + -0x98) + DAT_8c0a7dd8) = fVar7;
          }
          else {
            *(double *)(*(int *)(puVar6 + -0x98) + DAT_8c0a7dd8) = in_xd0;
          }
          puVar8 = _DAT_8c0a7de0;
          puVar13 = PTR_FUN_8c0a7de4;
          if (in_FPSCR_SZ == '\0') {
            puVar8 = *(undefined **)(ar4 + DAT_8c0a7dd8);
            puVar13 = _DAT_8c0a7de0;
          }
          if (in_FPSCR_PR != '\0' || (float)puVar8 <= (float)puVar13) {
            if (in_FPSCR_SZ == '\0') {
              puVar8 = *(undefined **)((int)ar6 + 4);
            }
            if ((float)puVar8 == 0.0) {
              (*(code *)PTR_FUN_8c0a7de4)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            else {
              (*(code *)PTR_FUN_8c0a7e10)(ar4 + 0x14,ar5,pdVar2,ar7);
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + DAT_8c0a7e14) = DAT_8c0a7e18;
            }
            else {
              *(undefined8 *)(ar4 + DAT_8c0a7e14) = CONCAT44(uRam8c0a7e1c,DAT_8c0a7e18);
            }
          }
        }
      }
      goto LAB_8c0a7e8a;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar7 = *(float *)(ar4 + DAT_8c0a7a30);
  }
  else {
    in_xd0 = *(double *)(ar4 + DAT_8c0a7a30);
  }
  if (in_FPSCR_PR == '\0' && 0.0 < fVar7) {
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(ar4 + DAT_8c0a7a30);
      fVar12 = DAT_8c0a7a40;
    }
    else {
      in_xd0 = *(double *)(ar4 + DAT_8c0a7a30);
      fVar7 = DAT_8c0a7a40;
      fVar12 = DAT_8c0a7a44;
    }
    if (in_FPSCR_PR != '\0' || fVar12 <= fVar7) {
      *(int *)(puVar6 + -0x80) = ar4;
      ar5 = (double *)(*(int *)(puVar6 + -0x80) + DAT_8c0a7a30);
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)ar5;
      }
      else {
        in_xd0 = *ar5;
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar6 + -0x80) + DAT_8c0a7a30) = fVar7;
      }
      else {
        *(double *)(*(int *)(puVar6 + -0x80) + DAT_8c0a7a30) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0a7a30);
        fVar12 = DAT_8c0a7a40;
      }
      else {
        in_xd0 = *(double *)(ar4 + DAT_8c0a7a30);
        fVar7 = DAT_8c0a7a40;
        fVar12 = DAT_8c0a7a44;
      }
      if (in_FPSCR_PR != '\0' || fVar7 <= fVar12) {
        ar5 = (double *)(ar4 + DAT_8c0a7a30);
        if (in_FPSCR_SZ == '\0') {
          *(float *)ar5 = DAT_8c0a7a40;
          fVar7 = *(float *)((int)ar6 + 4);
          fVar12 = DAT_8c0a7a40;
        }
        else {
          *ar5 = (double)CONCAT44(DAT_8c0a7a44,DAT_8c0a7a40);
          in_xd0 = *(double *)((int)ar6 + 4);
          fVar7 = DAT_8c0a7a40;
          fVar12 = DAT_8c0a7a44;
        }
        if (fVar7 == fVar12) {
          (*(code *)PTR_FUN_8c0a7a4c)(ar4 + 0x14,ar5,pdVar2,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0a7ad8)(ar4 + 0x14,ar5,pdVar2,ar7);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(ar4 + DAT_8c0a7adc);
      fVar12 = DAT_8c0a7ae0;
    }
    else {
      in_xd0 = *(double *)(ar4 + DAT_8c0a7adc);
      fVar7 = DAT_8c0a7ae0;
      fVar12 = _DAT_8c0a7ae4;
    }
    if (in_FPSCR_PR == '\0' && fVar7 < fVar12) {
      *(int *)(puVar6 + -0x84) = ar4;
      ar5 = (double *)(*(int *)(puVar6 + -0x84) + DAT_8c0a7adc);
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)ar5;
      }
      else {
        in_xd0 = *ar5;
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar6 + -0x84) + DAT_8c0a7adc) = fVar7;
      }
      else {
        *(double *)(*(int *)(puVar6 + -0x84) + DAT_8c0a7adc) = in_xd0;
      }
      fVar7 = DAT_8c0a7ae0;
      fVar12 = _DAT_8c0a7ae4;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0a7adc);
        fVar12 = DAT_8c0a7ae0;
      }
      if (in_FPSCR_PR != '\0' || fVar12 <= fVar7) {
        ar5 = (double *)(ar4 + DAT_8c0a7adc);
        if (in_FPSCR_SZ == '\0') {
          *(float *)ar5 = DAT_8c0a7ae0;
          fVar7 = *(float *)((int)ar6 + 4);
          fVar12 = DAT_8c0a7ae0;
        }
        else {
          *ar5 = (double)CONCAT44(_DAT_8c0a7ae4,DAT_8c0a7ae0);
          fVar7 = DAT_8c0a7ae0;
          fVar12 = _DAT_8c0a7ae4;
        }
        if (fVar7 == fVar12) {
          (*(code *)PTR_FUN_8c0a7ad8)(ar4 + 0x14,ar5,pdVar2,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0a7afc)(ar4 + 0x14,ar5,pdVar2,ar7);
        }
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      puVar8 = *(undefined **)(ar4 + DAT_8c0a7b6c);
      puVar13 = DAT_8c0a7b70;
    }
    else {
      in_xd0 = *(double *)(ar4 + DAT_8c0a7b6c);
      puVar8 = DAT_8c0a7b70;
      puVar13 = _DAT_8c0a7b74;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar8 < (float)puVar13) {
      *(int *)(puVar6 + -0x88) = ar4;
      if (in_FPSCR_SZ == '\0') {
        puVar8 = *(undefined **)(*(int *)(puVar6 + -0x88) + DAT_8c0a7b6c);
      }
      else {
        in_xd0 = *(double *)(*(int *)(puVar6 + -0x88) + DAT_8c0a7b6c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = (float)puVar8 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,puVar8) + (double)CONCAT44(0x3f800000,puVar8),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar6 + -0x88) + DAT_8c0a7b6c) = fVar7;
      }
      else {
        *(double *)(*(int *)(puVar6 + -0x88) + DAT_8c0a7b6c) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        puVar8 = *(undefined **)(ar4 + DAT_8c0a7b6c);
        puVar13 = DAT_8c0a7b70;
      }
      else {
        in_xd0 = *(double *)(ar4 + DAT_8c0a7b6c);
        puVar8 = DAT_8c0a7b70;
        puVar13 = _DAT_8c0a7b74;
      }
      if (in_FPSCR_PR != '\0' || (float)puVar13 <= (float)puVar8) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined **)(ar4 + DAT_8c0a7b6c) = DAT_8c0a7b70;
          puVar8 = *(undefined **)((int)ar6 + 4);
          puVar13 = _DAT_8c0a7b74;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0a7b6c) = CONCAT44(_DAT_8c0a7b74,DAT_8c0a7b70);
          in_xd0 = *(double *)((int)ar6 + 4);
          puVar8 = _DAT_8c0a7b74;
          puVar13 = PTR_FUN_8c0a7b78;
        }
        if ((float)puVar8 == (float)puVar13) {
          (*(code *)PTR_FUN_8c0a7b78)(ar4 + 0x14,ar5,pdVar2,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0a7c0c)(ar4 + 0x14,ar5,pdVar2,ar7);
        }
      }
    }
    ar5 = DAT_8c0a7c10;
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(ar4 + (int)DAT_8c0a7c10);
      fVar12 = DAT_8c0a7c14;
    }
    else {
      in_xd0 = *(double *)(ar4 + (int)DAT_8c0a7c10);
      fVar7 = DAT_8c0a7c14;
      fVar12 = _DAT_8c0a7c18;
    }
    if (in_FPSCR_PR == '\0' && fVar12 < fVar7) {
      *(int *)(puVar6 + -0x8c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(*(int *)(puVar6 + -0x8c) + (int)DAT_8c0a7c10);
      }
      else {
        in_xd0 = *(double *)(*(int *)(puVar6 + -0x8c) + (int)DAT_8c0a7c10);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar6 + -0x8c) + (int)DAT_8c0a7c10) = fVar7;
      }
      else {
        *(double *)(*(int *)(puVar6 + -0x8c) + (int)DAT_8c0a7c10) = in_xd0;
      }
      fVar7 = DAT_8c0a7c14;
      fVar12 = _DAT_8c0a7c18;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + (int)DAT_8c0a7c10);
        fVar12 = DAT_8c0a7c14;
      }
      if (in_FPSCR_PR != '\0' || fVar7 <= fVar12) {
        ar5 = (double *)(ar4 + (int)DAT_8c0a7c10);
        if (in_FPSCR_SZ == '\0') {
          *(float *)ar5 = DAT_8c0a7c14;
          fVar7 = *(float *)((int)ar6 + 4);
          fVar12 = _DAT_8c0a7c18;
        }
        else {
          *ar5 = (double)CONCAT44(_DAT_8c0a7c18,DAT_8c0a7c14);
          fVar7 = _DAT_8c0a7c18;
          fVar12 = fRam8c0a7c1c;
        }
        if (fVar7 == fVar12) {
          ar5 = (double *)PTR_FUN_8c0a7c0c;
          (*(code *)PTR_FUN_8c0a7c0c)(ar4 + 0x14,PTR_FUN_8c0a7c0c,pdVar2,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c0a7c38)(ar4 + 0x14,ar5,pdVar2,ar7);
        }
      }
    }
  }
LAB_8c0a7e8a:
  (*(code *)PTR_FUN_8c0a7f34)(ar4 + DAT_8c0a7f30,ar5,pdVar2,ar7);
  fVar7 = DAT_8c0a7f38;
  fVar12 = DAT_8c0a7f3c;
  if (in_FPSCR_SZ == '\0') {
    fVar7 = *(float *)((int)ar6 + 4);
    fVar12 = DAT_8c0a7f38;
  }
  if (fVar7 != fVar12) {
    fVar7 = DAT_8c0a7f3c;
    fVar12 = _DAT_8c0a7f40;
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)((int)ar6 + 4);
      fVar12 = DAT_8c0a7f3c;
    }
    if (fVar7 != fVar12) {
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0a7fc4);
      }
      if (fVar7 != 0.0) {
        fVar7 = DAT_8c0a7fc8;
        fVar12 = DAT_8c0a7fcc;
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)(ar4 + DAT_8c0a7fc4);
          fVar12 = DAT_8c0a7fc8;
        }
        if (fVar7 != fVar12) {
          return 1;
        }
      }
      *(int *)(puVar6 + -0xa4) = ar4;
      *(int *)((int)DAT_8c0a7fcc + *(int *)(puVar6 + -0xa4)) =
           *(int *)((int)DAT_8c0a7fcc + *(int *)(puVar6 + -0xa4)) + 1;
      uVar4 = 0;
      uVar3 = 0xffffffff;
      uVar5 = 2;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a7fd8)(ar4 + DAT_8c0a7fd4,2,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a7fdc)(ar4 + DAT_8c0a7fd4,uVar5,uVar3,uVar4);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a7fe0) = DAT_8c0a7fe4;
        return 1;
      }
      *(undefined8 *)(ar4 + DAT_8c0a7fe0) = CONCAT44(uRam8c0a7fe8,DAT_8c0a7fe4);
      return 1;
    }
  }
  fVar7 = DAT_8c0a7f38;
  fVar12 = DAT_8c0a7f3c;
  if (in_FPSCR_SZ == '\0') {
    fVar7 = *(float *)(ar4 + DAT_8c0a7f24);
    fVar12 = DAT_8c0a7f38;
  }
  if (fVar7 != fVar12) {
    fVar7 = DAT_8c0a7f3c;
    fVar12 = _DAT_8c0a7f40;
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(ar4 + DAT_8c0a7f24);
      fVar12 = DAT_8c0a7f3c;
    }
    if (fVar7 != fVar12) {
      return 1;
    }
  }
  *(int *)(puVar6 + -0xa0) = ar4;
  *(int *)((int)_DAT_8c0a7f40 + *(int *)(puVar6 + -0xa0)) =
       *(int *)((int)_DAT_8c0a7f40 + *(int *)(puVar6 + -0xa0)) + 1;
  uVar4 = 0;
  uVar3 = 0xffffffff;
  uVar5 = 2;
  (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a7f48)(ar4 + DAT_8c0a7f30,2,0xffffffff,0);
  (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a7f4c)(ar4 + DAT_8c0a7f30,uVar5,uVar3,uVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0a7f50) = DAT_8c0a7f54;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0a7f50) = CONCAT44(uRam8c0a7f58,DAT_8c0a7f54);
  }
  return 1;
}



/* FUN_8c0a8464 @ 8c0a8464 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a8464(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ulonglong uVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = *(int *)(DAT_8c0a85e8 + ar4);
  iVar2 = ar6;
  if (iVar1 == 0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a85ec) = _DAT_8c0a85f0;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0a85ec) = CONCAT44(PTR_Vec3_assign_8c0a85f4,_DAT_8c0a85f0);
    }
    *(int *)(DAT_8c0a85e8 + ar4) = *(int *)(DAT_8c0a85e8 + ar4) + 1;
    (*(code *)PTR_Vec3_assign_8c0a85f4)(ar4 + 0x54,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(ar6 + 4);
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(ar6 + 4);
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a85ec) = (undefined4)DAT_8c0a860c;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a85ec) = CONCAT44(DAT_8c0a860c._4_4_,(undefined4)DAT_8c0a860c);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0a8614,*(undefined4 *)(ar4 + DAT_8c0a860c._4_4_));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0a860c._4_4_);
        dVar5 = (double)CONCAT44(_DAT_8c0a8618,DAT_8c0a8614);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0a860c._4_4_) = fVar3;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a860c._4_4_) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0a8614,*(undefined4 *)(ar4 + _DAT_8c0a8608));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + _DAT_8c0a8608);
        dVar5 = (double)CONCAT44(_DAT_8c0a8618,DAT_8c0a8614);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 + dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + _DAT_8c0a8608) = fVar3;
      }
      else {
        *(undefined8 *)(ar4 + _DAT_8c0a8608) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c0a8604,*(undefined4 *)(ar4 + _DAT_8c0a8608));
      }
      else {
        uVar6 = CONCAT44(_DAT_8c0a8608,DAT_8c0a8604);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
        return 1;
      }
      *(int *)(DAT_8c0a85e8 + ar4) = *(int *)(DAT_8c0a85e8 + ar4) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + _DAT_8c0a8608) = 0;
        return 1;
      }
      *(ulonglong *)(ar4 + _DAT_8c0a8608) = uVar6 & 0xffffffff;
      return 1;
    }
    if (iVar1 != 3) {
      return 1;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(*(undefined4 *)(ar5 + 4),*(undefined4 *)(ar6 + 4));
    }
    else {
      uVar6 = *(ulonglong *)(ar5 + 4);
    }
    if (in_FPSCR_PR == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
      return 1;
    }
    *(undefined4 *)(DAT_8c0a85e8 + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a85ec) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a85ec) = uVar6 & 0xffffffff;
    }
    *(undefined4 *)(_DAT_8c0a8618 + ar4) = 5;
    return 0;
  }
  while( true ) {
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(ar5 + 4),
                       *(undefined4 *)(ar4 + *(int *)(DAT_8c0a85f8 + ar4) * 0x10 + DAT_8c0a85fc));
    }
    else {
      uVar4 = *(undefined8 *)(ar5 + 4);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar4 >> 0x20) < (float)uVar4) break;
    *(int *)(DAT_8c0a85f8 + ar4) = *(int *)(DAT_8c0a85f8 + ar4) + -1;
  }
  if (*(int *)(DAT_8c0a85f8 + ar4) < 1) {
    (*(code *)PTR_FUN_8c0a8600)(ar5,ar4 + 0x54,iVar2,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(DAT_8c0a8604,(int)((ulonglong)uVar4 >> 0x20));
    }
    else {
      uVar6 = CONCAT44(_DAT_8c0a8608,DAT_8c0a8604);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar6 <= (float)(uVar6 >> 0x20)) {
      *(int *)(DAT_8c0a85e8 + ar4) = *(int *)(DAT_8c0a85e8 + ar4) + 1;
      *(undefined4 *)(DAT_8c0a85f8 + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + _DAT_8c0a8608) = 0;
      }
      else {
        *(ulonglong *)(ar4 + _DAT_8c0a8608) = uVar6 & 0xffffffff;
      }
    }
  }
  return 1;
}



/* FUN_8c0a861c @ 8c0a861c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a861c(int ar4,undefined8 *ar5,ulonglong *ar6,undefined4 ar7)

{
  int iVar1;
  undefined *a5;
  undefined4 uVar2;
  uint *a5_00;
  ulonglong *a6;
  undefined4 uVar3;
  float fVar4;
  ulonglong in_dr0;
  double dVar5;
  uint uVar7;
  undefined8 uVar6;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_110;
  undefined8 uStack_10c;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [132];
  
  uVar3 = 1;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0a8668)((int)&uStack_10c + DAT_8c0a8664,ar5,ar6,ar7);
  uStack_b8 = 1;
  uVar2 = (undefined4)in_dr0;
  switch(*(undefined4 *)(DAT_8c0a866c + ar4)) {
  case 0:
    a6 = (ulonglong *)0x2;
    iStack_d0 = (*(code *)PTR_rand_range_8c0a871c)(ar4,0,2,ar7);
    if (iStack_d0 == 0) {
      (*(code *)PTR_Vec3_assign_8c0a8724)((int)&uStack_10c + DAT_8c0a8720,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&uStack_10c + DAT_8c0a8720) = (undefined4)DAT_8c0a8728;
      }
      else {
        *(ulonglong *)((int)&uStack_10c + DAT_8c0a8720) =
             CONCAT44(DAT_8c0a8728._4_4_,(undefined4)DAT_8c0a8728);
      }
      (*(code *)PTR_Vec3_assign_8c0a8724)(ar4 + 0x54,(int)&uStack_10c + DAT_8c0a8720,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0a8724)((int)&uStack_10c + DAT_8c0a8720,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44((undefined4)DAT_8c0a8728,(int)*ar6);
      }
      else {
        in_xd0 = *ar6;
        dVar5 = (double)CONCAT44(DAT_8c0a8728._4_4_,(undefined4)DAT_8c0a8728);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) - fVar4);
      }
      else {
        dVar5 = dVar5 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&uStack_10c + DAT_8c0a8720) = SUB84(dVar5,0);
      }
      else {
        *(ulonglong *)((int)&uStack_10c + DAT_8c0a8720) = in_xd0;
      }
      *(undefined4 *)(DAT_8c0a8728._4_4_ + ar4) = 4;
      (*(code *)PTR_FUN_8c0a8730)(ar5,ar4 + 0x54,a6,ar7);
      iVar1 = (int)((ulonglong)dVar5 >> 0x20);
      iStack_d4 = iVar1;
      if (in_FPSCR_SZ != '\0') {
        iStack_d4 = SUB84(dVar5,0);
        iStack_d0 = iVar1;
      }
      (*(code *)PTR_FUN_8c0a8730)(ar5,(int)&uStack_10c + DAT_8c0a8720,a6,ar7);
      iVar1 = (int)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(iVar1,iStack_d4);
        iStack_d8 = iVar1;
      }
      else {
        iStack_d8 = SUB84(dVar5,0);
        in_xd0 = CONCAT44(iStack_d0,iVar1);
        iStack_d4 = iVar1;
      }
      if (in_FPSCR_PR != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) {
        (*(code *)PTR_Vec3_assign_8c0a8724)(ar4 + 0x54,(int)&uStack_10c + DAT_8c0a8720,a6,ar7);
        *(undefined4 *)(DAT_8c0a8728._4_4_ + ar4) = 3;
      }
    }
    else {
      (*(code *)PTR_Vec3_assign_8c0a88d8)((int)&uStack_10c + DAT_8c0a88d4,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&uStack_10c + DAT_8c0a88dc._4_4_) = (undefined4)DAT_8c0a88dc;
      }
      else {
        *(ulonglong *)((int)&uStack_10c + DAT_8c0a88dc._4_4_) =
             CONCAT44(DAT_8c0a88dc._4_4_,(undefined4)DAT_8c0a88dc);
      }
      (*(code *)PTR_Vec3_assign_8c0a88d8)(ar4 + 0x54,(int)&uStack_10c + DAT_8c0a88d4,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0a88d8)((int)&uStack_10c + DAT_8c0a88d4,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44((undefined4)DAT_8c0a88dc,(int)ar6[1]);
      }
      else {
        in_xd0 = ar6[1];
        dVar5 = (double)CONCAT44(DAT_8c0a88dc._4_4_,(undefined4)DAT_8c0a88dc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) - fVar4);
      }
      else {
        dVar5 = dVar5 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&uStack_10c + DAT_8c0a88dc._4_4_) = SUB84(dVar5,0);
      }
      else {
        *(ulonglong *)((int)&uStack_10c + DAT_8c0a88dc._4_4_) = in_xd0;
      }
      *(undefined4 *)(DAT_8c0a88e4 + ar4) = 2;
      (*(code *)PTR_FUN_8c0a88e8)(ar5,ar4 + 0x54,a6,ar7);
      iVar1 = (int)((ulonglong)dVar5 >> 0x20);
      iStack_dc = iVar1;
      if (in_FPSCR_SZ != '\0') {
        iStack_dc = SUB84(dVar5,0);
        iStack_d8 = iVar1;
      }
      (*(code *)PTR_FUN_8c0a88e8)(ar5,(int)&uStack_10c + DAT_8c0a88d4,a6,ar7);
      iVar1 = (int)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(iVar1,iStack_dc);
        iStack_e0 = iVar1;
      }
      else {
        iStack_e0 = SUB84(dVar5,0);
        in_xd0 = CONCAT44(iStack_d8,iVar1);
        iStack_dc = iVar1;
      }
      if (in_FPSCR_PR != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) {
        (*(code *)PTR_Vec3_assign_8c0a88d8)(ar4 + 0x54,(int)&uStack_10c + DAT_8c0a88d4,a6,ar7);
        *(undefined4 *)(DAT_8c0a88e4 + ar4) = 1;
      }
    }
    fVar4 = SUB84(dVar5,0);
    puStack_110 = (undefined1 *)((int)&uStack_10c + DAT_8c0a88ec);
    (*(code *)PTR_Vec3_sub_8c0a88f0)(ar4 + 0x54,ar5,a6,ar7);
    puStack_110 = (undefined1 *)((int)&uStack_10c + DAT_8c0a88f4);
    a5 = PTR_DAT_8c0a88f8;
    (*(code *)PTR_Vec3_scale_8c0a88fc)(ar4 + 0x14,PTR_DAT_8c0a88f8,a6,ar7);
    uStack_e4 = (*(code *)PTR_Vec3_length_8c0a8900)((int)&uStack_10c + DAT_8c0a88ec,a5,a6,ar7);
    iStack_e8 = (*(code *)PTR_FUN_8c0a8904)(uStack_e4,(int)&uStack_10c + DAT_8c0a88f4,a6,ar7);
    iStack_c0 = iStack_e8;
    (*(code *)PTR_Vec3_dtor_8c0a8908)((int)&uStack_10c + DAT_8c0a88f4,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a8908)((int)&uStack_10c + DAT_8c0a88ec,0xffffffff,a6,ar7);
    if (iStack_c0 != 0) {
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)(ar4 + 0x54);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0x54);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = fVar4 + 1.0;
      }
      else {
        fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) + (double)CONCAT44(0x3f800000,fVar4),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x54) = fVar4;
        fVar4 = *(float *)(ar4 + 0x5c);
      }
      else {
        *(ulonglong *)(ar4 + 0x54) = in_xd0;
        in_xd0 = *(ulonglong *)(ar4 + 0x5c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = fVar4 + 1.0;
      }
      else {
        fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) + (double)CONCAT44(0x3f800000,fVar4),0);
      }
      iStack_f8 = ar4;
      iStack_f4 = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x5c) = fVar4;
      }
      else {
        *(ulonglong *)(ar4 + 0x5c) = in_xd0;
      }
    }
    *(int *)(DAT_8c0a890c + ar4) = *(int *)(DAT_8c0a890c + ar4) + 1;
    iStack_fc = ar4;
  case 1:
    (*(code *)PTR_Vec3_ctor_copy_8c0a8914)((int)&uStack_10c + DAT_8c0a8910,ar5,a6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c0a8914)((int)&uStack_10c + DAT_8c0a8918,ar4 + 0x54,a6,ar7);
    a6 = (ulonglong *)((int)&uStack_10c + DAT_8c0a8918);
    iVar1 = (*(code *)PTR_FUN_8c0a891c)(ar4,(int)&uStack_10c + DAT_8c0a8910,a6,ar7);
    uStack_f0 = CONCAT44(iVar1,(undefined4)uStack_f0);
    uStack_c4 = (uint)(iVar1 == 0);
    (*(code *)PTR_Vec3_dtor_8c0a8908)((int)&uStack_10c + DAT_8c0a8918,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a8908)((int)&uStack_10c + DAT_8c0a8910,0xffffffff,a6,ar7);
    if (uStack_c4 != 0) {
      *(int *)(DAT_8c0a890c + ar4) = *(int *)(DAT_8c0a890c + ar4) + 1;
      iStack_100 = ar4;
    }
    (*(code *)PTR_Vec3_assign_8c0a88d8)(ar4 + DAT_8c0a8920,ar4 + 0x14,a6,ar7);
    break;
  case 2:
    iVar1 = *(int *)(DAT_8c0a893c + ar4);
    if (iVar1 == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)ar5;
        *(undefined4 *)(ar4 + 0x58) = DAT_8c0a8b44;
        in_dr0 = CONCAT44((int)ar6[1],uVar2);
        *(int *)(ar4 + 0x5c) = (int)ar6[1];
      }
      else {
        *(undefined8 *)(ar4 + 0x54) = *ar5;
        *(ulonglong *)(ar4 + 0x58) = CONCAT44(DAT_8c0a8b48,DAT_8c0a8b44);
        in_dr0 = ar6[1];
        *(ulonglong *)(ar4 + 0x5c) = in_dr0;
      }
    }
    else if (iVar1 == 2) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)ar5;
        in_dr0 = CONCAT44(DAT_8c0a89b0,uVar2);
        *(undefined4 *)(ar4 + 0x58) = DAT_8c0a89b0;
      }
      else {
        *(undefined8 *)(ar4 + 0x54) = *ar5;
        in_dr0 = CONCAT44(uRam8c0a89b4,DAT_8c0a89b0);
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x5c) = in_dr0;
      }
    }
    else if (iVar1 == 3) {
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x54) = (int)*ar6;
        *(undefined4 *)(ar4 + 0x58) = DAT_8c0a898c;
        in_dr0 = CONCAT44(*(undefined4 *)(ar5 + 1),uVar2);
        *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 1);
      }
      else {
        *(ulonglong *)(ar4 + 0x54) = *ar6;
        *(ulonglong *)(ar4 + 0x58) = CONCAT44(uRam8c0a8990,DAT_8c0a898c);
        in_dr0 = ar5[1];
        *(ulonglong *)(ar4 + 0x5c) = in_dr0;
      }
    }
    else if (iVar1 == 4) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x54) = 0;
        *(undefined4 *)(ar4 + 0x58) = DAT_8c0a8964;
        in_dr0 = CONCAT44(*(undefined4 *)(ar5 + 1),uVar2);
        *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 1);
      }
      else {
        *(ulonglong *)(ar4 + 0x54) = in_dr0 & 0xffffffff;
        *(ulonglong *)(ar4 + 0x58) = CONCAT44(uRam8c0a8968,DAT_8c0a8964);
        in_dr0 = ar5[1];
        *(ulonglong *)(ar4 + 0x5c) = in_dr0;
      }
    }
    puStack_110 = (undefined1 *)((int)&uStack_10c + DAT_8c0a8b48);
    (*(code *)PTR_Vec3_sub_8c0a8b4c)(ar4 + 0x54,ar5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a8b50)(ar4 + 0x14,(int)&uStack_10c + DAT_8c0a8b48,a6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a8b54)((int)&uStack_10c + DAT_8c0a8b48,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_8c0a8b58)(ar4 + 0x14,uVar2,a6,ar7);
    (*(code *)PTR_FUN_8c0a8b5c)(ar5,ar4 + 0x54,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar2 = (undefined4)(in_dr0 >> 0x20);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar2);
      dVar5 = (double)CONCAT44(DAT_8c0a8b60,uVar2);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0a8b64,DAT_8c0a8b60);
      in_xd0 = in_dr0;
      uStack_f0 = in_dr0;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 / dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar4;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_xd0;
    }
    (*(code *)PTR_Vec3_assign_8c0a8b50)(ar4 + DAT_8c0a8b68,ar4 + DAT_8c0a8b64,a6,ar7);
    *(int *)(DAT_8c0a8b6c + ar4) = *(int *)(DAT_8c0a8b6c + ar4) + 1;
    iStack_104 = ar4;
  case 3:
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0a8b74,(int)*(ulonglong *)(ar4 + DAT_8c0a8b70));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + DAT_8c0a8b70);
      dVar5 = (double)CONCAT44(DAT_8c0a8b78,DAT_8c0a8b74);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0a8b70) = fVar4;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a8b70) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c0a8b70);
    }
    if (in_FPSCR_PR != '\0' || 1.0 <= fVar4) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c0a8b78,fVar4);
        *(undefined4 *)(ar4 + DAT_8c0a8b70) = DAT_8c0a8b78;
      }
      else {
        uVar6 = CONCAT44(_DAT_8c0a8b7c,DAT_8c0a8b78);
        *(undefined8 *)(ar4 + DAT_8c0a8b70) = uVar6;
      }
      fVar4 = (float)uVar6;
      *(int *)(DAT_8c0a8b6c + ar4) = *(int *)(DAT_8c0a8b6c + ar4) + 1;
      uStack_10c._0_4_ = ar4;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c0a8b70);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44(1.0 - fVar4,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(0x3f800000,fVar4) - (double)CONCAT44(0x3f800000,fVar4);
    }
    uVar7 = (uint)((ulonglong)dVar5 >> 0x20);
    uStack_c8 = uVar7;
    if (in_FPSCR_SZ != '\0') {
      uStack_c8 = SUB84(dVar5,0);
      uStack_c4 = uVar7;
    }
    puStack_110 = (undefined1 *)((int)&uStack_10c + _DAT_8c0a8b7c);
    a5_00 = &uStack_c8;
    uStack_10c._4_4_ = ar4;
    (*(code *)PTR_Vec3_scale_8c0a8b80)(ar4 + DAT_8c0a8b68,a5_00,a6,ar7);
    (*(code *)PTR_Vec3_ctor_xyz_8c0a8b84)(auStack_94,a5_00,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uStack_cc = *(undefined4 *)(ar4 + DAT_8c0a8b70);
    }
    else {
      uVar6 = *(undefined8 *)(ar4 + DAT_8c0a8b70);
      uStack_cc = (undefined4)uVar6;
      uStack_c8 = (uint)((ulonglong)uVar6 >> 0x20);
    }
    puStack_110 = auStack_a4;
    (*(code *)PTR_Vec3_scale_8c0a8b80)(auStack_94,&uStack_cc,a6,ar7);
    puStack_110 = auStack_b4;
    (*(code *)PTR_Vec3_add_8c0a8b8c)((int)&puStack_110 + DAT_8c0a8b88,auStack_a4,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a8b50)(ar4 + DAT_8c0a8b64,auStack_b4,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a8b54)(auStack_b4,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a8b54)(auStack_a4,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a8b54)(auStack_94,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a8b54)((int)&uStack_10c + _DAT_8c0a8b7c,0xffffffff,a6,ar7);
    break;
  case 4:
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0;
    }
    (*(code *)PTR_Vec3_assign_8c0a8bf0)(ar4 + 0x14,ar4 + DAT_8c0a8bec,a6,ar7);
    uVar3 = 0;
    *(undefined4 *)(DAT_8c0a8bf4 + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a8bf8) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a8bf8) = in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(DAT_8c0a8bfc + ar4) = *(undefined4 *)(DAT_8c0a8c00 + ar4);
  }
  uStack_bc = uVar3;
  (*(code *)PTR_Vec3_dtor_8c0a8c08)((int)&uStack_10c + DAT_8c0a8c04,0xffffffff,a6,ar7);
  return uStack_bc;
}



/* FUN_8c0a8c0c @ 8c0a8c0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a8c0c(int ar4,undefined4 ar5,ulonglong *ar6,float *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a6;
  ulonglong *puVar3;
  undefined1 *a7;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  uVar5 = 1;
  puVar3 = ar6;
  switch(*(undefined4 *)(DAT_8c0a8c44 + ar4)) {
  case 0:
    *(undefined4 *)(DAT_8c0a8cec + ar4) = 0;
    (*(code *)PTR_Vec3_assign_8c0a8cf0)(ar4 + 0x54,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0a8cf4,*(undefined4 *)((int)ar6 + 4));
    }
    else {
      in_xd0 = *(ulonglong *)((int)ar6 + 4);
      dVar7 = (double)CONCAT44(DAT_8c0a8cf8,DAT_8c0a8cf4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x58) = fVar6;
    }
    else {
      *(ulonglong *)(ar4 + 0x58) = in_xd0;
    }
    *(int *)(DAT_8c0a8cf8 + ar4) = *(int *)(DAT_8c0a8cf8 + ar4) + 1;
  case 1:
    (*(code *)PTR_FUN_8c0a8cfc)(auStack_24,ar6,puVar3,ar7);
    a7 = auStack_24;
    a6 = ar4 + 0x54;
    iVar2 = (*(code *)PTR_FUN_8c0a8d00)(ar4,ar5,a6,a7);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0a8d04)(auStack_24,0xffffffff,a6,a7);
    if (iVar2 == 0) {
      *(int *)(DAT_8c0a8cf8 + ar4) = *(int *)(DAT_8c0a8cf8 + ar4) + 1;
    }
    break;
  case 2:
    iVar2 = *(int *)(DAT_8c0a8d20 + ar4);
    pfVar4 = ar7;
    if (iVar2 == 1) {
      (*(code *)PTR_Vec3_assign_8c0a8e58)(ar4 + 0x54,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a8e5c,(int)ar6[1]);
      }
      else {
        in_xd0 = ar6[1];
        dVar7 = (double)CONCAT44(PTR_Vec3_sub_8c0a8e60,DAT_8c0a8e5c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x5c) = fVar6;
        in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),fVar6);
        *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
        ar6 = puVar3;
      }
      else {
        *(ulonglong *)(ar4 + 0x5c) = in_xd0;
        in_dr0 = *(ulonglong *)((int)ar6 + 4);
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
        ar6 = puVar3;
      }
    }
    else if (iVar2 == 2) {
      (*(code *)PTR_Vec3_assign_8c0a8da4)(ar4 + 0x54,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = DAT_8c0a8da8;
        in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),(int)in_dr0);
        *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
        ar6 = puVar3;
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = CONCAT44(uRam8c0a8dac,DAT_8c0a8da8);
        in_dr0 = *(ulonglong *)((int)ar6 + 4);
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
        ar6 = puVar3;
      }
    }
    else if (iVar2 == 3) {
      (*(code *)PTR_Vec3_assign_8c0a8d78)(ar4 + 0x54,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a8d7c,(int)*ar6);
      }
      else {
        in_xd0 = *ar6;
        dVar7 = (double)CONCAT44(uRam8c0a8d80,DAT_8c0a8d7c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x54) = fVar6;
        in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),fVar6);
        *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
        ar6 = puVar3;
      }
      else {
        *(ulonglong *)(ar4 + 0x54) = in_xd0;
        in_dr0 = *(ulonglong *)((int)ar6 + 4);
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
        ar6 = puVar3;
      }
    }
    else if (iVar2 == 4) {
      (*(code *)PTR_Vec3_assign_8c0a8d48)(ar4 + 0x54,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x54) = DAT_8c0a8d4c;
        in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),(int)in_dr0);
        *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
        ar6 = puVar3;
      }
      else {
        *(undefined8 *)(ar4 + 0x54) = CONCAT44(uRam8c0a8d50,DAT_8c0a8d4c);
        in_dr0 = *(ulonglong *)((int)ar6 + 4);
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
        ar6 = puVar3;
      }
    }
    uVar1 = ar5;
    (*(code *)PTR_Vec3_sub_8c0a8e60)(ar4 + 0x54,ar5,ar6,pfVar4);
    uVar1 = (*(code *)PTR_Vec3_length_8c0a8e64)(auStack_34,uVar1,ar6,pfVar4);
    (*(code *)PTR_Vec3_assign_8c0a8e58)(ar4 + 0x14,uVar1,ar6,pfVar4);
    (*(code *)PTR_Vec3_dtor_8c0a8e68)(auStack_34,0xffffffff,ar6,pfVar4);
    (*(code *)PTR_FUN_8c0a8e6c)(ar5,ar4 + 0x54,ar6,pfVar4);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0a8e70,(int)(in_dr0 >> 0x20));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0a8e74,DAT_8c0a8e70);
      in_xd0 = in_dr0;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar6;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_xd0;
    }
    *(int *)(DAT_8c0a8e74 + ar4) = *(int *)(DAT_8c0a8e74 + ar4) + 1;
  case 3:
    iVar2 = *(int *)(DAT_8c0a8e78 + ar4);
    if (iVar2 == 1) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a8f10,*ar7);
      }
      else {
        in_xd0 = *(ulonglong *)ar7;
        dVar7 = (double)CONCAT44(DAT_8c0a8f14,DAT_8c0a8f10);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *ar7 = fVar6;
      }
      else {
        *(ulonglong *)ar7 = in_xd0;
      }
    }
    else if (iVar2 == 2) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a8ec8,*ar7);
      }
      else {
        in_xd0 = *(ulonglong *)ar7;
        dVar7 = (double)CONCAT44(uRam8c0a8ecc,DAT_8c0a8ec8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *ar7 = fVar6;
      }
      else {
        *(ulonglong *)ar7 = in_xd0;
      }
    }
    else if (iVar2 == 3) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a8eb0,ar7[2]);
      }
      else {
        in_xd0 = *(ulonglong *)(ar7 + 2);
        dVar7 = (double)CONCAT44(uRam8c0a8eb4,DAT_8c0a8eb0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        ar7[2] = fVar6;
      }
      else {
        *(ulonglong *)(ar7 + 2) = in_xd0;
      }
    }
    else if (iVar2 == 4) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a8e94,ar7[2]);
      }
      else {
        in_xd0 = *(ulonglong *)(ar7 + 2);
        dVar7 = (double)CONCAT44(uRam8c0a8e98,DAT_8c0a8e94);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        ar7[2] = fVar6;
      }
      else {
        *(ulonglong *)(ar7 + 2) = in_xd0;
      }
    }
    *(int *)(DAT_8c0a8f14 + ar4) = *(int *)(DAT_8c0a8f14 + ar4) + 1;
    if (4 < *(int *)(DAT_8c0a8f14 + ar4)) {
      *(int *)(DAT_8c0a8f18 + ar4) = *(int *)(DAT_8c0a8f18 + ar4) + 1;
    }
    break;
  case 4:
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x18) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x18) = in_dr0 & 0xffffffff;
    }
    (*(code *)PTR_Vec3_length_8c0a8f78)(ar4 + 0x14,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0a8f80)(ar4 + DAT_8c0a8f7c,ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c0a8f84 + ar4) = 0;
    *(undefined4 *)(DAT_8c0a8f88 + ar4) = 0;
    uVar5 = 0;
    *(undefined4 *)(DAT_8c0a8f8c + ar4) = 5;
    *(undefined4 *)(DAT_8c0a8f90 + ar4) = 0;
  }
  return uVar5;
}



/* FUN_8c0a8f94 @ 8c0a8f94 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a8f94(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  uint uVar2;
  undefined4 unaff_r13;
  undefined4 uVar3;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  double in_dr0;
  double dVar5;
  double in_dr14;
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
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = in_PR;
  *(undefined4 *)((int)puVar4 + -0x198) = ar5;
  *(undefined1 **)((int)puVar4 + -0x194) = ar6;
  uVar3 = *(undefined4 *)((int)puVar4 + DAT_8c0a8fd0 + -0x198);
  uVar2 = 1;
  (*(code *)PTR_Vec3_ctor_zero_8c0a8fd8)
            ((undefined1 *)((int)puVar4 + DAT_8c0a8fd4 + -0x198),ar5,ar6,ar7);
  if (*(int *)(DAT_8c0a8fdc + ar4) == 0) {
    switch(*(undefined4 *)(DAT_8c0a8ffc + ar4)) {
    case 1:
      (*(code *)PTR_FUN_8c0a9128)(uVar3,ar5,ar6,ar7);
      break;
    case 2:
      (*(code *)PTR_FUN_8c0a9074)(uVar3,ar5,ar6,ar7);
      break;
    case 3:
      (*(code *)PTR_FUN_8c0a9050)(uVar3,ar5,ar6,ar7);
      break;
    case 4:
      (*(code *)PTR_FUN_8c0a9030)(uVar3,ar5,ar6,ar7);
    }
    *(int *)((int)puVar4 + -0x18c) = ar4;
    *(int *)(DAT_8c0a912c + *(int *)((int)puVar4 + -0x18c)) =
         *(int *)(DAT_8c0a912c + *(int *)((int)puVar4 + -0x18c)) + 1;
  }
  else if (*(int *)(DAT_8c0a8fdc + ar4) != 1) goto LAB_8c0a951a;
  (*(code *)PTR_Vec3_assign_8c0a9134)
            ((undefined1 *)((int)puVar4 + DAT_8c0a9130 + -0x198),ar4 + 0x14,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0a913c)
            ((undefined1 *)((int)puVar4 + DAT_8c0a9138 + -0x198),
             *(undefined4 *)((int)puVar4 + -0x198),ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0a913c)
            ((undefined1 *)((int)puVar4 + DAT_8c0a9140 + -0x198),
             *(undefined4 *)((int)puVar4 + -0x194),ar6,ar7);
  ar6 = (undefined1 *)((int)puVar4 + DAT_8c0a9140 + -0x198);
  uVar3 = (*(code *)PTR_FUN_8c0a9144)
                    (ar4,(undefined1 *)((int)puVar4 + DAT_8c0a9138 + -0x198),ar6,ar7);
  *(undefined4 *)((int)puVar4 + -0x170) = uVar3;
  *(uint *)((int)puVar4 + -0x160) = (uint)(*(int *)((int)puVar4 + -0x170) == 0);
  (*(code *)PTR_Vec3_dtor_8c0a9148)
            ((undefined1 *)((int)puVar4 + DAT_8c0a9140 + -0x198),0xffffffff,ar6,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0a9148)
            ((undefined1 *)((int)puVar4 + DAT_8c0a9138 + -0x198),0xffffffff,ar6,ar7);
  iVar1 = *(int *)((int)puVar4 + -0x160);
  if (iVar1 != 0) {
    *(undefined4 *)(DAT_8c0a912c + ar4) = 0;
  }
  uVar2 = (uint)(iVar1 == 0);
  switch(*(undefined4 *)(DAT_8c0a914c + ar4)) {
  case 1:
  case 2:
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a93b0 + -0x198);
    (*(code *)PTR_FUN_8c0a93b8)((undefined1 *)((int)puVar4 + DAT_8c0a93b4 + -0x19c),uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a93bc + -0x198);
    (*(code *)PTR_FUN_8c0a93b8)(ar4 + 0x14,uVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c0a93c0)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93b0 + -0x198),
               (undefined1 *)((int)puVar4 + DAT_8c0a93bc + -0x198),ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x17c) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + -0x17c));
    }
    else {
      *(double *)((int)puVar4 + -0x17c) = in_dr0;
    }
    (*(code *)PTR_Vec3_dtor_8c0a93c4)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93bc + -0x198),0xffffffff,ar6,ar7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a93c4)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93b0 + -0x198),0xffffffff,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a93c8 + -0x198);
    (*(code *)PTR_FUN_8c0a93b8)(ar4 + 0x14,uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a93cc + -0x198);
    (*(code *)PTR_FUN_8c0a93b8)((undefined1 *)((int)puVar4 + DAT_8c0a93b4 + -0x19c),uVar3,ar6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c0a93d8)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93d0._4_4_ + -0x198),uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a93dc + -0x198);
    (*(code *)PTR_FUN_8c0a93e8)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93e4 + -0x19c),
               (undefined1 *)((int)puVar4 + DAT_8c0a93e0 + -0x19c),ar6,ar7);
    (*(code *)PTR_FUN_8c0a93c0)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93c8 + -0x198),
               (undefined1 *)((int)puVar4 + DAT_8c0a93dc + -0x198),ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x180) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44((undefined4)DAT_8c0a93d0,*(undefined4 *)((int)puVar4 + -0x180));
    }
    else {
      *(double *)((int)puVar4 + -0x180) = in_dr0;
      in_dr0 = (double)CONCAT44(DAT_8c0a93d0._4_4_,(undefined4)DAT_8c0a93d0);
    }
    *(uint *)((int)puVar4 + -0x168) =
         (uint)(in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20));
    (*(code *)PTR_Vec3_dtor_8c0a93c4)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93dc + -0x198),0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0a93ec)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93d0._4_4_ + -0x198),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a93c4)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93cc + -0x198),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a93c4)
              ((undefined1 *)((int)puVar4 + DAT_8c0a93c8 + -0x198),0xffffffff,ar6,ar7);
    if (*(int *)((int)puVar4 + -0x168) != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0a93f0,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = (double)CONCAT44(uRam8c0a93f4,DAT_8c0a93f0);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 3:
  case 4:
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a9268 + -0x198);
    (*(code *)PTR_FUN_8c0a9270)((undefined1 *)((int)puVar4 + DAT_8c0a926c + -0x19c),uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a9274 + -0x198);
    (*(code *)PTR_FUN_8c0a9270)(ar4 + 0x14,uVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c0a9278)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9268 + -0x198),
               (undefined1 *)((int)puVar4 + DAT_8c0a9274 + -0x198),ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x174) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + -0x174));
    }
    else {
      *(double *)((int)puVar4 + -0x174) = in_dr0;
    }
    (*(code *)PTR_Vec3_dtor_8c0a927c)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9274 + -0x198),0xffffffff,ar6,ar7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a927c)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9268 + -0x198),0xffffffff,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a9280 + -0x198);
    (*(code *)PTR_FUN_8c0a9270)(ar4 + 0x14,uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a9284 + -0x198);
    (*(code *)PTR_FUN_8c0a9270)((undefined1 *)((int)puVar4 + DAT_8c0a926c + -0x19c),uVar3,ar6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c0a9290)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9288._4_4_ + -0x198),uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a9294 + -0x198);
    (*(code *)PTR_FUN_8c0a92a0)
              ((undefined1 *)((int)puVar4 + DAT_8c0a929c + -0x19c),
               (undefined1 *)((int)puVar4 + DAT_8c0a9298 + -0x19c),ar6,ar7);
    (*(code *)PTR_FUN_8c0a9278)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9280 + -0x198),
               (undefined1 *)((int)puVar4 + DAT_8c0a9294 + -0x198),ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x178) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44((undefined4)DAT_8c0a9288,*(undefined4 *)((int)puVar4 + -0x178));
    }
    else {
      *(double *)((int)puVar4 + -0x178) = in_dr0;
      in_dr0 = (double)CONCAT44(DAT_8c0a9288._4_4_,(undefined4)DAT_8c0a9288);
    }
    *(uint *)((int)puVar4 + -0x164) =
         (uint)(in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20));
    (*(code *)PTR_Vec3_dtor_8c0a927c)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9294 + -0x198),0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0a92a4)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9288._4_4_ + -0x198),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a927c)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9284 + -0x198),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a927c)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9280 + -0x198),0xffffffff,ar6,ar7);
    if (*(int *)((int)puVar4 + -0x164) != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0a92a8,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = (double)CONCAT44(uRam8c0a92ac,DAT_8c0a92a8);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
    break;
  case 5:
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + DAT_8c0a9544 + -0x198);
    (*(code *)PTR_FUN_8c0a954c)((undefined1 *)((int)puVar4 + DAT_8c0a9548 + -0x19c),uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + -0x11c);
    (*(code *)PTR_FUN_8c0a954c)(ar4 + 0x14,uVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c0a9550)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9544 + -0x198),
               (undefined1 *)((int)puVar4 + -0x11c),ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x184) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + -0x184));
    }
    else {
      *(double *)((int)puVar4 + -0x184) = in_dr0;
    }
    (*(code *)PTR_Vec3_dtor_8c0a9554)((undefined1 *)((int)puVar4 + -0x11c),0xffffffff,ar6,ar7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a9554)
              ((undefined1 *)((int)puVar4 + DAT_8c0a9544 + -0x198),0xffffffff,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + -300);
    (*(code *)PTR_FUN_8c0a954c)(ar4 + 0x14,uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + -0x13c);
    (*(code *)PTR_FUN_8c0a954c)((undefined1 *)((int)puVar4 + DAT_8c0a9548 + -0x19c),uVar3,ar6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c0a955c)((undefined1 *)((int)puVar4 + -0x148),uVar3,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x19c) = (undefined1 *)((int)puVar4 + -0x158);
    (*(code *)PTR_FUN_8c0a9560)
              ((undefined1 *)((int)puVar4 + -0x13c),(undefined1 *)((int)puVar4 + -0x148),ar6,ar7);
    (*(code *)PTR_FUN_8c0a9550)
              ((undefined1 *)((int)puVar4 + -300),(undefined1 *)((int)puVar4 + -0x158),ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x188) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(_DAT_8c0a9558,*(undefined4 *)((int)puVar4 + -0x188));
    }
    else {
      *(double *)((int)puVar4 + -0x188) = in_dr0;
      in_dr0 = (double)CONCAT44(PTR_Vec3_set_xyz_8c0a955c,_DAT_8c0a9558);
    }
    *(uint *)((int)puVar4 + -0x16c) =
         (uint)(in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20));
    (*(code *)PTR_Vec3_dtor_8c0a9554)((undefined1 *)((int)puVar4 + -0x158),0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0a9564)
              ((undefined1 *)((int)puVar4 + -0x148),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a9554)((undefined1 *)((int)puVar4 + -0x13c),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a9554)((undefined1 *)((int)puVar4 + -300),0xffffffff,ar6,ar7);
    if (*(int *)((int)puVar4 + -0x16c) != 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0a9568,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = (double)CONCAT44(DAT_8c0a956c,DAT_8c0a9568);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
    }
  }
  if ((*(int *)(DAT_8c0a956c + ar4) == 4) || (*(int *)(DAT_8c0a956c + ar4) == 2)) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0a9568,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c0a956c,DAT_8c0a9568);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 * in_dr0;
    }
  }
  *(int *)((int)puVar4 + -400) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -400) + DAT_8c0a9570),
                             SUB84(in_dr0,0));
  }
  else {
    dVar5 = *(double *)(*(int *)((int)puVar4 + -400) + DAT_8c0a9570);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + SUB84(in_dr14,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + in_dr14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(*(int *)((int)puVar4 + -400) + DAT_8c0a9570) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(*(int *)((int)puVar4 + -400) + DAT_8c0a9570) = dVar5;
  }
LAB_8c0a951a:
  *(uint *)((int)puVar4 + -0x15c) = uVar2;
  (*(code *)PTR_Vec3_dtor_8c0a9554)
            ((undefined1 *)((int)puVar4 + DAT_8c0a9574 + -0x198),0xffffffff,ar6,ar7);
  return *(undefined4 *)((int)puVar4 + -0x15c);
}



/* FUN_8c0a9578 @ 8c0a9578 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a9578(int ar4,undefined4 ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  undefined4 uVar2;
  double *a6;
  undefined4 a7;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  double dVar7;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_84 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  uVar3 = 1;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c0a986c)(auStack_28,ar5,ar6,ar7);
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(DAT_8c0a9870 + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_Vec3_assign_8c0a987c)(ar4 + DAT_8c0a9878,ar4 + DAT_8c0a9874,a6,a7);
    dVar7 = (double)(ulonglong)uVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9880) = 0;
    }
    else {
      *(double *)(ar4 + DAT_8c0a9880) = dVar7;
    }
    (*(code *)PTR_Vec3_assign_8c0a987c)(ar4 + 0x54,ar5,a6,a7);
    a5 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c0a987c)(ar4 + DAT_8c0a9874,a5,a6,a7);
    (*(code *)PTR_FUN_8c0a9888)(ar4 + DAT_8c0a9884,a5,a6,a7);
    (*(code *)PTR_FUN_8c0a9888)(ar7,a5,a6,a7);
    iVar1 = *(int *)(DAT_8c0a988c + ar4);
    if (iVar1 == 1) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a9890,*(undefined4 *)(ar6 + 1));
      }
      else {
        in_xd0 = ar6[1];
        dVar7 = (double)CONCAT44(DAT_8c0a9894,DAT_8c0a9890);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x5c) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x5c) = in_xd0;
      }
      (*(code *)PTR_FUN_8c0a9898)(ar4 + DAT_8c0a9894,a5,a6,a7);
    }
    else if (iVar1 == 2) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a9890,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x5c) = DAT_8c0a9890;
      }
      else {
        dVar7 = (double)CONCAT44(DAT_8c0a9894,DAT_8c0a9890);
        *(double *)(ar4 + 0x5c) = dVar7;
      }
      (*(code *)PTR_FUN_8c0a9898)(ar4 + DAT_8c0a9894,a5,a6,a7);
    }
    else if (iVar1 == 3) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a9890,*(undefined4 *)ar6);
      }
      else {
        in_xd0 = *ar6;
        dVar7 = (double)CONCAT44(DAT_8c0a9894,DAT_8c0a9890);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x54) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x54) = in_xd0;
      }
      (*(code *)PTR_FUN_8c0a9898)(ar4 + DAT_8c0a9894,a5,a6,a7);
    }
    else if (iVar1 == 4) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0a9890,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x54) = DAT_8c0a9890;
      }
      else {
        dVar7 = (double)CONCAT44(DAT_8c0a9894,DAT_8c0a9890);
        *(double *)(ar4 + 0x54) = dVar7;
      }
      (*(code *)PTR_FUN_8c0a9898)(ar4 + DAT_8c0a9894,a5,a6,a7);
    }
    (**(code **)(DAT_8c0a98a4 + **(int **)((int)aiStack_84 + _DAT_8c0a98a0)))
              (*(int **)((int)aiStack_84 + _DAT_8c0a98a0),ar4 + 0x54,a6,a7);
    uStack_74 = SUB84(dVar7,0);
    uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x58) = uVar2;
      uStack_74 = uVar2;
    }
    else {
      *(double *)(ar4 + 0x58) = dVar7;
      uStack_70 = uVar2;
    }
    (*(code *)PTR_FUN_8c0a98a8)(ar5,ar4 + 0x54,a6,a7);
    uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0a98ac,uVar2);
      aiStack_84[3] = uVar2;
    }
    else {
      aiStack_84[3] = SUB84(dVar7,0);
      dVar6 = (double)CONCAT44(PTR_Vec3_sub_8c0a98b0,DAT_8c0a98ac);
      in_xd0 = dVar7;
      uStack_74 = uVar2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    (*(code *)PTR_Vec3_sub_8c0a98b0)(ar4 + 0x54,ar5,a6,a7);
    (*(code *)PTR_Vec3_assign_8c0a987c)(ar4 + 0x14,auStack_38,a6,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0a98b4)(auStack_38,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_length_8c0a98b8)(ar4 + 0x14,uVar2,a6,a7);
    *(int *)(DAT_8c0a9870 + ar4) = *(int *)(DAT_8c0a9870 + ar4) + 1;
    aiStack_84[2] = ar4;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a9880) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0a9880) = in_dr0 & 0xffffffff;
      }
      uVar3 = 0;
      (*(code *)PTR_Vec3_assign_8c0a987c)(ar4 + 0x14,ar4 + DAT_8c0a9874,a6,a7);
      *(undefined4 *)(DAT_8c0a988c + ar4) = 0;
      *(undefined4 *)(DAT_8c0a9870 + ar4) = 0;
    }
    goto LAB_8c0a984a;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0a98bc,*(undefined4 *)(ar4 + DAT_8c0a9880));
  }
  else {
    in_xd0 = *(double *)(ar4 + DAT_8c0a9880);
    dVar7 = (double)CONCAT44(PTR_Vec3_scale_8c0a98c0,DAT_8c0a98bc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 + dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c0a9880) = fVar5;
  }
  else {
    *(double *)(ar4 + DAT_8c0a9880) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar5 = *(float *)(ar4 + DAT_8c0a9880);
  }
  if (in_FPSCR_PR != '\0' || 1.0 <= fVar5) {
    *(int *)(DAT_8c0a9870 + ar4) = *(int *)(DAT_8c0a9870 + ar4) + 1;
    aiStack_84[0] = ar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9880) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0a9880) = CONCAT44(0x3f800000,fVar5);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar5 = *(float *)(ar4 + DAT_8c0a9880);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
  }
  uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
  uStack_70 = uVar2;
  if (in_FPSCR_SZ != '\0') {
    uStack_70 = SUB84(dVar7,0);
    uStack_6c = uVar2;
  }
  aiStack_84[1] = ar4;
  (*(code *)PTR_Vec3_scale_8c0a98c0)(ar4 + DAT_8c0a9874,&uStack_70,a6,a7);
  (*(code *)PTR_Vec3_scale_8c0a98c0)(ar4 + DAT_8c0a9894,ar4 + DAT_8c0a9880,a6,a7);
  (*(code *)PTR_Vec3_add_8c0a98c4)(auStack_48,auStack_58,a6,a7);
  (*(code *)PTR_Vec3_assign_8c0a987c)(ar4 + DAT_8c0a9874,auStack_68,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0a98b4)(auStack_68,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0a98b4)(auStack_58,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0a98b4)(auStack_48,0xffffffff,a6,a7);
  (*(code *)PTR_FUN_8c0a98c8)(ar4,ar7,a6,a7);
LAB_8c0a984a:
  uStack_6c = uVar3;
  (*(code *)PTR_Vec3_dtor_8c0a98b4)(auStack_28,0xffffffff,a6,a7);
  return uStack_6c;
}



/* FUN_8c0a98cc @ 8c0a98cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a98cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_10 [2];
  
  iVar1 = -DAT_8c0a9994;
  *(undefined4 *)((int)aiStack_10 + iVar1) = DAT_8c0a9998;
  uVar3 = 0x10;
  (*(code *)PTR_FUN_8c0a99a4)
            (&stack0x00000020 + iVar1,PTR_Vec3_ctor_zero_8c0a99a0,PTR_Vec3_dtor_8c0a999c,0x10);
  *(undefined4 *)(&stack0x00000000 + iVar1) = 0xffffffff;
  *(undefined1 **)(&stack0x00000010 + iVar1) = &stack0x00000004 + iVar1;
  *(int *)(&stack0x00000014 + iVar1) = (int)&stack0x00000000 + iVar1;
  *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
  *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
  for (iVar4 = 0; iVar4 < *(int *)(DAT_8c0a99bc + ar4) + -1; iVar4 = iVar4 + 1) {
    *(int *)(&stack0xfffffffc + iVar1) = iVar4;
    puVar2 = (undefined8 *)(ar4 + *(int *)(&stack0xfffffffc + iVar1) * 0x10 + DAT_8c0a99a8);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)*(undefined8 **)(&stack0x00000010 + iVar1) = *(undefined4 *)puVar2;
    }
    else {
      **(undefined8 **)(&stack0x00000010 + iVar1) = *puVar2;
    }
    *(int *)(&stack0xfffffff8 + iVar1) = iVar4;
    puVar2 = (undefined8 *)(ar4 + *(int *)(&stack0xfffffff8 + iVar1) * 0x10 + DAT_8c0a99ac);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0a99b0,*(undefined4 *)puVar2);
    }
    else {
      in_xd0 = *puVar2;
      dVar6 = (double)CONCAT44(DAT_8c0a99b4,DAT_8c0a99b0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(&stack0x00000010 + iVar1) + 4) = fVar5;
    }
    else {
      *(undefined8 *)(*(int *)(&stack0x00000010 + iVar1) + 4) = in_xd0;
    }
    *(int *)((int)aiStack_10 + iVar1 + 4) = iVar4;
    puVar2 = (undefined8 *)(ar4 + *(int *)((int)aiStack_10 + iVar1 + 4) * 0x10 + DAT_8c0a99b4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(*(int *)(&stack0x00000010 + iVar1) + 8) = *(undefined4 *)puVar2;
    }
    else {
      *(undefined8 *)(*(int *)(&stack0x00000010 + iVar1) + 8) = *puVar2;
    }
    (*(code *)PTR_FUN_8c0a99b8)
              (&stack0x00000010 + iVar1,*(undefined4 *)(&stack0x0000001c + iVar1),0,uVar3);
  }
  uVar3 = (*(code *)PTR_vec_delete_array_8c0a99c0)
                    (&stack0x00000020 + iVar1,PTR_Vec3_dtor_8c0a999c,0x10,DAT_8c0a9998);
  return uVar3;
}



/* FUN_8c0a99c4 @ 8c0a99c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0a9fac) */
/* WARNING: Removing unreachable block (ram,0x8c0a9eaa) */
/* WARNING: Removing unreachable block (ram,0x8c0aa0a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0a99c4(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a6;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong in_dr0;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_c8;
  undefined8 uStack_c4;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [64];
  undefined4 uStack_c;
  
  uStack_c = 1;
  a6 = ar6;
  uStack_c4._0_4_ = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c0a9a24)
            ((int)&uStack_c4 + DAT_8c0a9a20,PTR_Vec3_ctor_zero_8c0a9a24,ar6,ar7);
  uStack_a0 = 1;
  if (*(int *)(DAT_8c0a9a28 + ar4) == 0) {
    (*(code *)PTR_FUN_8c0a9a2c)((undefined4)uStack_c4,0,a6,ar7);
  }
  uVar3 = (uint)in_dr0;
  uVar1 = 5;
  switch(*(undefined4 *)(ar4 + 0x68)) {
  case 0:
    while( true ) {
      uVar3 = (uint)in_dr0;
      (*(code *)PTR_FUN_8c0a9aac)(ar4,PTR_FUN_8c0a9aac,a6,ar7);
      in_dr0 = (ulonglong)uVar3;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a9ab0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0a9ab0) = in_dr0;
      }
      (*(code *)PTR_Vec3_assign_8c0a9ab8)(ar4 + DAT_8c0a9ab4,ar4 + 0x14,a6,ar7);
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a9abc) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0a9abc) = in_dr0;
      }
      uVar1 = ar5;
      (*(code *)PTR_Vec3_assign_8c0a9ab8)(ar4 + 0x54,ar5,a6,ar7);
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = in_dr0;
      }
      (*(code *)PTR_FUN_8c0a9ac4)(ar4 + DAT_8c0a9ac0,uVar1,a6,ar7);
      uVar4 = (undefined4)in_dr0;
      if (ar6 != 0) {
        if (ar6 == 3) {
          ar7 = 0;
          a6 = -1;
          uVar1 = 2;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a9b88)
                    (ar4 + DAT_8c0a9b80._4_4_,2,0xffffffff,0);
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44(_DAT_8c0a9b90,uVar4);
            *(undefined4 *)(ar4 + DAT_8c0a9b8c) = _DAT_8c0a9b90;
          }
          else {
            in_dr0 = CONCAT44(PTR_CAnimBody_AdvanceFrame_wrapper_8c0a9b94,_DAT_8c0a9b90);
            *(ulonglong *)(ar4 + DAT_8c0a9b8c) = in_dr0;
          }
          in_dr0 = in_dr0 & 0xffffffff;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = in_dr0;
          }
          *(int *)(ar4 + 0x68) = *(int *)(ar4 + 0x68) + 1;
          iStack_b8 = ar4;
        }
        goto switchD_8c0a9a1a_caseD_1;
      }
      ar7 = 0;
      a6 = -1;
      uVar1 = 7;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0a9b14)
                (ar4 + DAT_8c0a9b0c._4_4_,7,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0a9b18)(ar4 + DAT_8c0a9b0c._4_4_,uVar1,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c0a9b20,uVar4);
        *(undefined4 *)(ar4 + DAT_8c0a9b1c) = DAT_8c0a9b20;
      }
      else {
        in_dr0 = CONCAT44(uRam8c0a9b24,DAT_8c0a9b20);
        *(ulonglong *)(ar4 + DAT_8c0a9b1c) = in_dr0;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
      *(undefined4 *)(ar4 + 0x68) = 2;
switchD_8c0a9a1a_caseD_2:
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a9c68)(ar4 + DAT_8c0a9c64,uVar1,a6,ar7);
      uVar3 = (uint)in_dr0;
      if (ar6 != 3) break;
      *(undefined4 *)(ar4 + 0x68) = 0;
      *(undefined4 *)(DAT_8c0a9c6c + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x18) = in_dr0 & 0xffffffff;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a9c70) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0a9c70) = in_dr0;
      }
    }
    (*(code *)PTR_Vec3_set_xyz_8c0a9d08)((int)&uStack_c4 + DAT_8c0a9d04,uVar1,a6,ar7);
    puStack_c8 = (undefined1 *)((int)&uStack_c4 + DAT_8c0a9d0c);
    (*(code *)PTR_FUN_8c0a9d14)(ar4 + 0x14,(int)&puStack_c8 + DAT_8c0a9d10,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0a9d18)(ar4 + 0x14,(int)&uStack_c4 + DAT_8c0a9d0c,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0a9d1c)((int)&uStack_c4 + DAT_8c0a9d0c,0xffffffff,a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c0a9d20)((int)&uStack_c4 + DAT_8c0a9d04,0xffffffff,a6,ar7);
    if ((ar6 != 1) && (ar6 != 2)) {
      (*(code *)PTR_FUN_8c0a9d58)(ar4,uVar1,a6,ar7);
      (*(code *)PTR_FUN_8c0a9d60)(ar4,uVar1,a6,ar7);
      break;
    }
    *(undefined4 *)(ar4 + 0x68) = 5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9d24) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a9d24) = (ulonglong)uVar3;
    }
    iVar2 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c0a9d18)(ar4 + DAT_8c0a9d28,iVar2,a6,ar7);
    (*(code *)PTR_FUN_8c0a9d2c)(ar4,iVar2,a6,ar7);
  case 5:
    *(undefined4 *)(DAT_8c0aa110 + ar4) = 2;
    break;
  case 1:
switchD_8c0a9a1a_caseD_1:
    uVar3 = (uint)in_dr0;
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a9b94)(ar4 + DAT_8c0a9b80._4_4_,uVar1,a6,ar7);
    if (ar6 == 0) {
      (*(code *)PTR_FUN_8c0a9b98)(ar4,uVar1,a6,ar7);
      *(undefined4 *)(ar4 + 0x68) = 0;
      break;
    }
    if (ar6 != 1) {
      (*(code *)PTR_FUN_8c0a9c2c)(ar4,uVar1,a6,ar7);
      break;
    }
    *(undefined4 *)(ar4 + 0x68) = 3;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9bf8) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a9bf8) = (ulonglong)uVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9bfc) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a9bfc) = (ulonglong)uVar3;
    }
    uVar6 = (ulonglong)uVar3;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9c00) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a9c00) = uVar6;
    }
    *(undefined4 *)(DAT_8c0a9c04 + ar4) = 1;
    if (*(char *)(DAT_8c0a9c08 + ar4) == '\x01') {
      ar7 = 0xd;
      a6 = 1;
      (**(code **)(DAT_8c0a9c14 + **(int **)((int)&uStack_c4 + DAT_8c0a9c0c._4_4_)))
                (*(int **)((int)&uStack_c4 + DAT_8c0a9c0c._4_4_),ar5,1,0xd);
      uVar3 = (uint)uVar6;
      uVar1 = ar5;
    }
  case 3:
    uVar6 = (ulonglong)uVar3;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9da4) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a9da4) = uVar6;
    }
    (*(code *)PTR_FUN_8c0a9da8)(ar4,uVar1,a6,ar7);
    uVar7 = uVar6 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar7;
    }
    if (ar6 == 1) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0a9ef8)(ar4 + DAT_8c0a9ef4,uVar1,a6,ar7);
      uVar3 = (uint)uVar7;
      iVar2 = ar4 + 0x14;
      (*(code *)PTR_Vec3_assign_8c0a9f00)((int)&uStack_c4 + DAT_8c0a9efc,iVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&uStack_c4 + DAT_8c0a9f04) = 0;
      }
      else {
        *(ulonglong *)((int)&uStack_c4 + DAT_8c0a9f04) = (ulonglong)uVar3;
      }
      (*(code *)PTR_Vec3_length_8c0a9f08)((int)&uStack_c4 + DAT_8c0a9efc,iVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0a9f10,*(undefined4 *)(ar4 + DAT_8c0a9f0c));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0a9f0c);
        dVar8 = (double)CONCAT44(_DAT_8c0a9f14,DAT_8c0a9f10);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0a9f0c) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0a9f0c) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(ar4 + DAT_8c0a9f0c);
      }
      if (in_FPSCR_PR != '\0' || 1.0 <= fVar5) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0a9f0c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0a9f0c) = CONCAT44(0x3f800000,fVar5);
        }
      }
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(ar4 + DAT_8c0a9f0c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44(1.0 - fVar5,fVar5);
      }
      else {
        dVar8 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
      }
      uVar1 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uStack_a8 = uVar1;
      if (in_FPSCR_SZ != '\0') {
        uStack_a8 = SUB84(dVar8,0);
        uStack_a4 = uVar1;
      }
      puStack_c8 = auStack_4c;
      iStack_bc = ar4;
      (*(code *)PTR_Vec3_scale_8c0a9f18)(ar4 + _DAT_8c0a9f14,&uStack_a8,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uStack_ac = *(undefined4 *)(ar4 + DAT_8c0a9f0c);
        uVar9 = CONCAT44(uStack_ac,SUB84(dVar8,0));
      }
      else {
        uVar9 = *(undefined8 *)(ar4 + DAT_8c0a9f0c);
        uStack_ac = (undefined4)uVar9;
        uStack_a8 = (undefined4)((ulonglong)uVar9 >> 0x20);
      }
      fVar5 = (float)uVar9;
      puStack_c8 = auStack_5c;
      (*(code *)PTR_Vec3_scale_8c0a9f18)((int)&puStack_c8 + DAT_8c0a9f04,&uStack_ac,a6,ar7);
      puStack_c8 = auStack_6c;
      (*(code *)PTR_Vec3_add_8c0a9f1c)(auStack_4c,auStack_5c,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0a9f00)(ar4 + 0x14,auStack_6c,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0a9f20)(auStack_6c,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0a9f20)(auStack_5c,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0a9f20)(auStack_4c,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(ar4 + DAT_8c0a9f0c);
      }
      if (fVar5 == 1.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0a9f0c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0a9f0c) = (ulonglong)(uint)fVar5;
        }
        *(undefined4 *)(DAT_8c0a9f24 + ar4) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0a9f28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0a9f28) = (ulonglong)(uint)fVar5;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0a9f2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0a9f2c) = (ulonglong)(uint)fVar5;
        }
        *(undefined4 *)(ar4 + 0x68) = 0;
      }
      (*(code *)PTR_Vec3_assign_8c0a9f00)(ar4 + DAT_8c0a9f30,ar4 + 0x14,a6,ar7);
    }
    else {
      *(undefined4 *)(ar4 + 0x68) = 0;
      *(undefined4 *)(DAT_8c0a9dac + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x18) = uVar6 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a9db0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0a9db0) = uVar6 & 0xffffffff;
      }
    }
    break;
  case 2:
    goto switchD_8c0a9a1a_caseD_2;
  case 4:
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0a9f84) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0a9f84) = in_dr0;
    }
    (*(code *)PTR_FUN_8c0a9f88)(ar4,5,a6,ar7);
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0;
    }
    (*(code *)PTR_FUN_8c0a9f8c)(ar4 + 0x6c,uVar1,a6,ar7);
    fVar5 = (float)in_dr0;
    if (ar6 == 1) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0aa0b8)(ar4 + DAT_8c0aa0b4,uVar1,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(ar4 + 0x18);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x18);
      }
      uVar6 = (ulonglong)(uint)fVar5;
      if (fVar5 != 0.0) {
        iVar2 = ar4 + 0x14;
        (*(code *)PTR_Vec3_assign_8c0aa0c0)((int)&uStack_c4 + DAT_8c0aa0bc,iVar2,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)&uStack_c4 + DAT_8c0aa0c4) = 0;
        }
        else {
          *(ulonglong *)((int)&uStack_c4 + DAT_8c0aa0c4) = uVar6 & 0xffffffff;
        }
        (*(code *)PTR_Vec3_length_8c0aa0c8)((int)&uStack_c4 + DAT_8c0aa0bc,iVar2,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(DAT_8c0aa0d0,*(undefined4 *)(ar4 + DAT_8c0aa0cc));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + DAT_8c0aa0cc);
          dVar8 = (double)CONCAT44(_DAT_8c0aa0d4,DAT_8c0aa0d0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0aa0cc) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0aa0cc) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)(ar4 + DAT_8c0aa0cc);
        }
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0aa0cc) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c0aa0cc) = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)(ar4 + DAT_8c0aa0cc);
        }
        if (in_FPSCR_PR == '\0') {
          dVar8 = (double)CONCAT44(1.0 - fVar5,fVar5);
        }
        else {
          dVar8 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
        }
        uVar1 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uStack_b0 = uVar1;
        if (in_FPSCR_SZ != '\0') {
          uStack_b0 = SUB84(dVar8,0);
          uStack_ac = uVar1;
        }
        puStack_c8 = auStack_7c;
        uStack_c4._4_4_ = ar4;
        (*(code *)PTR_Vec3_scale_8c0aa0d8)(ar4 + _DAT_8c0aa0d4,&uStack_b0,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          uStack_b4 = *(undefined4 *)(ar4 + DAT_8c0aa0cc);
          uVar9 = CONCAT44(uStack_b4,SUB84(dVar8,0));
        }
        else {
          uVar9 = *(undefined8 *)(ar4 + DAT_8c0aa0cc);
          uStack_b4 = (undefined4)uVar9;
          uStack_b0 = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        fVar5 = (float)uVar9;
        puStack_c8 = auStack_8c;
        (*(code *)PTR_Vec3_scale_8c0aa0d8)((int)&puStack_c8 + DAT_8c0aa0c4,&uStack_b4,a6,ar7);
        puStack_c8 = auStack_9c;
        (*(code *)PTR_Vec3_add_8c0aa0dc)(auStack_7c,auStack_8c,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c0aa0c0)(ar4 + 0x14,auStack_9c,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0aa0e0)(auStack_9c,0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0aa0e0)(auStack_8c,0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0aa0e0)(auStack_7c,0xffffffff,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)(ar4 + DAT_8c0aa0cc);
        }
        if (fVar5 == 1.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0aa0cc) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0aa0cc) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x68) = 0;
      *(undefined4 *)(DAT_8c0a9f90 + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x18) = in_dr0 & 0xffffffff;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0a9f94) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0a9f94) = in_dr0 & 0xffffffff;
      }
    }
  }
  uStack_a4 = 0;
  (*(code *)PTR_Vec3_dtor_8c0aa118)((int)&uStack_c4 + DAT_8c0aa114,0xffffffff,a6,ar7);
  return uStack_a4;
}



/* FUN_8c0aa11c @ 8c0aa11c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0aa11c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  int a4;
  int a5;
  undefined4 uVar2;
  undefined4 a6;
  int a6_00;
  int a7;
  undefined4 uVar3;
  float in_fr1;
  float fVar4;
  undefined *puVar7;
  undefined *puVar8;
  double dVar5;
  ulonglong uVar6;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [144];
  
  uVar3 = 1;
  uVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0aa18c)((int)&iStack_11c + DAT_8c0aa188,ar5,ar6,ar7);
  a4 = (*(code *)PTR_get_field_6c_028cc4_8c0aa190)(ar6,uVar2,a6,ar7);
  a7 = (int)&iStack_11c + DAT_8c0aa194;
  a6_00 = (int)&iStack_11c + DAT_8c0aa198;
  a5 = (int)&iStack_11c + DAT_8c0aa188;
  iStack_cc = a4;
  (*(code *)PTR_FUN_8c0aa19c)(a4,a5,a6_00,a7);
  if (a4 == 0) {
    uStack_bc = 2;
    (*(code *)PTR_Vec3_dtor_8c0aa1a0)((int)&iStack_11c + DAT_8c0aa188,0xffffffff,a6_00,a7);
  }
  else {
    switch(*(undefined4 *)(DAT_8c0aa1c4 + ar4)) {
    case 0:
      *(undefined4 *)(DAT_8c0aa24c + ar4) = 0;
      *(int *)(DAT_8c0aa250 + ar4) = *(int *)(DAT_8c0aa250 + ar4) + 1;
      iStack_ec = ar4;
      (*(code *)PTR_FUN_8c0aa258)(ar4 + DAT_8c0aa254,a5,a6_00,a7);
    case 1:
      a6_00 = (int)&iStack_11c + DAT_8c0aa25c;
      iStack_d0 = (*(code *)PTR_FUN_8c0aa260)(ar4,ar5,a6_00,a7);
      if (iStack_d0 == 0) {
        *(int *)(DAT_8c0aa250 + ar4) = *(int *)(DAT_8c0aa250 + ar4) + 1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0aa264) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0aa264) = (ulonglong)(uint)in_fr1;
        }
        iStack_f0 = ar4;
        (*(code *)PTR_FUN_8c0aa268)(ar6,ar5,a6_00,a7);
      }
      break;
    case 2:
      if (in_FPSCR_SZ == '\0') {
        in_fr1 = *(float *)(ar4 + DAT_8c0aa2b8);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa2b8);
      }
      if (in_FPSCR_PR == '\0') {
        in_fr1 = in_fr1 + 1.0;
      }
      else {
        in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
      }
      uStack_f8 = in_xd0;
      if (in_FPSCR_SZ == '\0') {
        uStack_f8 = CONCAT44(ar4,in_fr1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(uStack_f8._4_4_ + DAT_8c0aa2b8) = (undefined4)uStack_f8;
        uVar6 = CONCAT44(DAT_8c0aa2bc,(undefined4)uStack_f8);
      }
      else {
        *(ulonglong *)(uStack_f8._4_4_ + DAT_8c0aa2b8) = uStack_f8;
        uVar6 = CONCAT44(_DAT_8c0aa2c0,DAT_8c0aa2bc);
      }
      if (in_FPSCR_PR != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        *(int *)(_DAT_8c0aa2c0 + ar4) = *(int *)(_DAT_8c0aa2c0 + ar4) + 1;
        iStack_fc = ar4;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0aa2b8) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0aa2b8) = uVar6 & 0xffffffff;
        }
      }
      break;
    case 3:
      (*(code *)PTR_Vec3_ctor_xyz_8c0aa4e0)((int)&iStack_11c + DAT_8c0aa4dc,a5,a6_00,a7);
      a6_00 = (int)&iStack_11c + DAT_8c0aa4dc;
      iStack_d4 = (*(code *)PTR_FUN_8c0aa4e4)(ar4,ar5,a6_00,a7);
      uStack_c4 = (uint)(iStack_d4 == 0);
      (*(code *)PTR_Vec3_dtor_8c0aa4e8)((int)&iStack_11c + DAT_8c0aa4dc,0xffffffff,a6_00,a7);
      if (uStack_c4 != 0) {
        a7 = 0;
        a6_00 = -1;
        uVar2 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0aa4f4)
                  (ar4 + DAT_8c0aa4ec._4_4_,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0aa4f8)(ar4 + DAT_8c0aa4ec._4_4_,uVar2,a6_00,a7)
        ;
        *(int *)(DAT_8c0aa4fc + ar4) = *(int *)(DAT_8c0aa4fc + ar4) + 1;
        uVar6 = (ulonglong)(uint)in_fr1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0aa500) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0aa500) = uVar6;
        }
        iStack_100 = ar4;
        (*(code *)PTR_Vec3_ctor_xyz_8c0aa4e0)((int)&iStack_11c + DAT_8c0aa504,uVar2,a6_00,a7);
        uStack_dc._4_4_ =
             (*(code *)PTR_Vec3_length_8c0aa508)((int)&iStack_11c + DAT_8c0aa504,uVar2,a6_00,a7);
        puStack_120 = (undefined1 *)((int)&iStack_11c + DAT_8c0aa50c);
        (*(code *)PTR_FUN_8c0aa510)(uStack_dc._4_4_,uVar2,a6_00,a7);
        puStack_120 = (undefined1 *)((int)&iStack_11c + DAT_8c0aa4ec._4_4_);
        (*(code *)PTR_FUN_8c0aa510)(ar4 + 0x14,uVar2,a6_00,a7);
        (*(code *)PTR_FUN_8c0aa514)
                  ((int)&iStack_11c + DAT_8c0aa50c,(int)&iStack_11c + DAT_8c0aa4ec._4_4_,a6_00,a7);
        uVar1 = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uStack_dc = CONCAT44(uStack_dc._4_4_,(int)(uVar6 >> 0x20));
          uVar1 = uStack_dc;
        }
        uStack_dc = uVar1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c0aa518) = (undefined4)uStack_dc;
          uVar6 = CONCAT44((undefined4)uStack_dc,(int)uVar6);
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0aa518) = uStack_dc;
          uVar6 = uStack_dc;
        }
        (*(code *)PTR_Vec3_dtor_8c0aa4e8)((int)&iStack_11c + DAT_8c0aa4ec._4_4_,0xffffffff,a6_00,a7)
        ;
        (*(code *)PTR_Vec3_dtor_8c0aa4e8)((int)&iStack_11c + DAT_8c0aa50c,0xffffffff,a6_00,a7);
        uVar2 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c0aa4e8)((int)&iStack_11c + DAT_8c0aa504,0xffffffff,a6_00,a7);
        puStack_120 = (undefined1 *)((int)&iStack_11c + DAT_8c0aa51c);
        (*(code *)PTR_FUN_8c0aa510)(ar4 + 0x14,uVar2,a6_00,a7);
        (*(code *)PTR_Vec3_ctor_xyz_8c0aa4e0)((int)&iStack_11c + DAT_8c0aa520,uVar2,a6_00,a7);
        uStack_e4._4_4_ =
             (*(code *)PTR_Vec3_length_8c0aa508)((int)&iStack_11c + DAT_8c0aa520,uVar2,a6_00,a7);
        puStack_120 = (undefined1 *)((int)&iStack_11c + DAT_8c0aa524);
        (*(code *)PTR_FUN_8c0aa510)(uStack_e4._4_4_,uVar2,a6_00,a7);
        (*(code *)PTR_Vec3_set_xyz_8c0aa52c)(auStack_a8,uVar2,a6_00,a7);
        puStack_120 = auStack_b8;
        (*(code *)PTR_FUN_8c0aa534)((int)&puStack_120 + DAT_8c0aa530,auStack_a8,a6_00,a7);
        (*(code *)PTR_FUN_8c0aa514)((int)&iStack_11c + DAT_8c0aa51c,auStack_b8,a6_00,a7);
        uVar1 = uVar6;
        puVar7 = _DAT_8c0aa528;
        puVar8 = PTR_Vec3_set_xyz_8c0aa52c;
        if (in_FPSCR_SZ == '\0') {
          puVar7 = (undefined *)(uVar6 >> 0x20);
          uStack_e4 = CONCAT44(uStack_e4._4_4_,puVar7);
          uVar6 = in_xd0;
          uVar1 = uStack_e4;
          puVar8 = _DAT_8c0aa528;
        }
        uStack_e4 = uVar1;
        uStack_c8 = (uint)(in_FPSCR_PR != '\0' || (float)puVar7 <= (float)puVar8);
        (*(code *)PTR_Vec3_dtor_8c0aa4e8)(auStack_b8,0xffffffff,a6_00,a7);
        (*(code *)PTR_object_dtor_delete_8c0aa538)(auStack_a8,0xffffffff,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c0aa4e8)((int)&iStack_11c + DAT_8c0aa524,0xffffffff,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c0aa4e8)((int)&iStack_11c + DAT_8c0aa520,0xffffffff,a6_00,a7);
        (*(code *)PTR_Vec3_dtor_8c0aa4e8)((int)&iStack_11c + DAT_8c0aa51c,0xffffffff,a6_00,a7);
        if (uStack_c8 != 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar5 = (double)CONCAT44((undefined4)DAT_8c0aa4ec,
                                     (int)*(ulonglong *)(ar4 + DAT_8c0aa518));
          }
          else {
            uVar6 = *(ulonglong *)(ar4 + DAT_8c0aa518);
            dVar5 = (double)CONCAT44(DAT_8c0aa4ec._4_4_,(undefined4)DAT_8c0aa4ec);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 * dVar5,0);
          }
          iStack_104 = ar4;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c0aa518) = fVar4;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0aa518) = uVar6;
          }
        }
      }
      break;
    case 4:
      if (in_FPSCR_SZ == '\0') {
        in_fr1 = *(float *)(ar4 + DAT_8c0aa5a8);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa5a8);
      }
      if (in_FPSCR_PR != '\0' || in_fr1 <= 0.0) {
        if (in_FPSCR_SZ == '\0') {
          in_fr1 = *(float *)(ar4 + DAT_8c0aa63c);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa63c);
        }
        if (in_FPSCR_PR == '\0') {
          in_fr1 = in_fr1 - 1.0;
        }
        else {
          in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) - (double)CONCAT44(0x3f800000,in_fr1),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0aa63c) = in_fr1;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0aa63c) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          in_fr1 = *(float *)(ar4 + DAT_8c0aa63c);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa63c);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44((int)*(ulonglong *)(ar4 + DAT_8c0aa640),in_fr1);
        }
        else {
          uVar6 = *(ulonglong *)(ar4 + DAT_8c0aa640);
        }
        iStack_114 = ar4;
        if (in_FPSCR_PR == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (in_FPSCR_SZ == '\0') {
            uVar6 = (ulonglong)(uint)*(ulonglong *)(ar4 + DAT_8c0aa684);
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa684);
          }
          dVar5 = (double)CONCAT44(0x3f800000,(float)uVar6);
          if (in_FPSCR_PR == '\0') {
            fVar4 = (float)uVar6 - 1.0;
          }
          else {
            fVar4 = SUB84(dVar5 - dVar5,0);
          }
          iStack_11c = ar4;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c0aa684) = fVar4;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0aa684) = in_xd0;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0aa644) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0aa644) = uVar6 & 0xffffffff;
          }
          *(int *)(DAT_8c0aa648 + ar4) = *(int *)(DAT_8c0aa648 + ar4) + 1;
          iStack_118 = ar4;
          (*(code *)PTR_FUN_8c0aa650)(ar4 + 0x14,a5,a6_00,a7);
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          in_fr1 = *(float *)(ar4 + DAT_8c0aa5ac);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa5ac);
        }
        if (in_FPSCR_PR == '\0') {
          in_fr1 = in_fr1 + 1.0;
        }
        else {
          in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0aa5ac) = in_fr1;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0aa5ac) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          in_fr1 = *(float *)(ar4 + DAT_8c0aa5ac);
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa5ac);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44((int)*(ulonglong *)(ar4 + DAT_8c0aa5a8),in_fr1);
        }
        else {
          uVar6 = *(ulonglong *)(ar4 + DAT_8c0aa5a8);
        }
        iStack_108 = ar4;
        if (in_FPSCR_PR == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            uVar6 = (ulonglong)(uint)*(ulonglong *)(ar4 + DAT_8c0aa5dc);
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aa5dc);
          }
          dVar5 = (double)CONCAT44(0x3f800000,(float)uVar6);
          if (in_FPSCR_PR == '\0') {
            fVar4 = (float)uVar6 + 1.0;
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          iStack_110 = ar4;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c0aa5dc) = fVar4;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0aa5dc) = in_xd0;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0aa5b0) = 0;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c0aa5b0) = uVar6 & 0xffffffff;
          }
          *(int *)(DAT_8c0aa5b4 + ar4) = *(int *)(DAT_8c0aa5b4 + ar4) + 1;
          iStack_10c = ar4;
          (*(code *)PTR_FUN_8c0aa5bc)(ar4 + 0x14,a5,a6_00,a7);
        }
      }
      (*(code *)PTR_FUN_8c0aa694)(ar4 + DAT_8c0aa690,a5,a6_00,a7);
      break;
    case 5:
      iStack_e8 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0aa6f4)
                            (ar4 + DAT_8c0aa6f0,a5,a6_00,a7);
      if (iStack_e8 == 1) {
        (*(code *)PTR_FUN_8c0aa6fc)(ar4 + DAT_8c0aa6f8,a5,a6_00,a7);
        *(undefined4 *)(DAT_8c0aa700 + ar4) = 0;
        uVar3 = 0;
      }
    }
    uStack_c0 = uVar3;
    (*(code *)PTR_Vec3_dtor_8c0aa708)((int)&iStack_11c + DAT_8c0aa704,0xffffffff,a6_00,a7);
    uStack_bc = uStack_c0;
  }
  return uStack_bc;
}



/* FUN_8c0aa70c @ 8c0aa70c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0aa70c(int ar4,undefined4 ar5,int *ar6,float *ar7)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int a6;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float fVar12;
  double dVar11;
  undefined4 in_fr3;
  double dVar13;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float *pfStack_12c;
  int *piStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  int iStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  float afStack_e8 [4];
  undefined1 auStack_d8 [16];
  float afStack_c8 [4];
  undefined1 auStack_b8 [164];
  
  uVar6 = 1;
  piStack_128 = ar6;
  (*(code *)PTR_FUN_8c0aa7b4)((int)&piStack_128 + DAT_8c0aa7b0,ar5,ar6,ar7);
  pfVar5 = (float *)((int)&piStack_128 + DAT_8c0aa7b8);
  a6 = (int)&piStack_128 + DAT_8c0aa7bc;
  iVar3 = (int)&piStack_128 + DAT_8c0aa7b0;
  (**(code **)(DAT_8c0aa7c0 + *piStack_128))(piStack_128,iVar3,a6,pfVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0aa7c8)((int)&piStack_128 + DAT_8c0aa7c4,iVar3,a6,pfVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0aa7c8)((int)&piStack_128 + DAT_8c0aa7cc,iVar3,a6,pfVar5);
  iVar3 = ar4 + 0x14;
  (*(code *)PTR_Vec3_assign_8c0aa7d0)((int)&piStack_128 + DAT_8c0aa7c4,iVar3,a6,pfVar5);
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(DAT_8c0aa7d4,*(undefined4 *)((int)&piStack_128 + DAT_8c0aa7b0));
  }
  else {
    in_xd0 = *(ulonglong *)((int)&piStack_128 + DAT_8c0aa7b0);
    dVar13 = (double)CONCAT44(DAT_8c0aa7d8,DAT_8c0aa7d4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar13 - dVar13,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)&piStack_128 + DAT_8c0aa7cc) = fVar7;
    *(undefined4 *)((int)&piStack_128 + DAT_8c0aa7d8) =
         *(undefined4 *)((int)&piStack_128 + DAT_8c0aa7bc);
    uVar9 = CONCAT44(DAT_8c0aa7d4,fVar7);
    *(undefined4 *)((int)&piStack_128 + DAT_8c0aa7dc) = DAT_8c0aa7d4;
  }
  else {
    *(ulonglong *)((int)&piStack_128 + DAT_8c0aa7cc) = in_xd0;
    *(undefined8 *)((int)&piStack_128 + DAT_8c0aa7d8) =
         *(undefined8 *)((int)&piStack_128 + DAT_8c0aa7bc);
    uVar9 = CONCAT44(DAT_8c0aa7d8,DAT_8c0aa7d4);
    *(undefined8 *)((int)&piStack_128 + DAT_8c0aa7dc) = uVar9;
  }
  fVar7 = (float)uVar9;
  iVar2 = *(int *)(DAT_8c0aa7e0 + ar4);
  if (iVar2 == 0) {
    if (*(int *)(DAT_8c0aa818 + ar4) == 0) {
      (*(code *)PTR_FUN_8c0aa824)
                ((int)&piStack_128 + DAT_8c0aa820,(int)&piStack_128 + DAT_8c0aa81c,a6,pfVar5);
      a6 = (int)&piStack_128 + DAT_8c0aa820;
      (*(code *)PTR_FUN_8c0aa828)(ar4,ar5,a6,pfVar5);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0aa82c)
                ((int)&piStack_128 + DAT_8c0aa820,0xffffffff,a6,pfVar5);
      goto LAB_8c0aacb4;
    }
    if (*(int *)(DAT_8c0aa8b0 + ar4) != 5) {
      (*(code *)PTR_FUN_8c0aa8bc)
                ((int)&piStack_128 + DAT_8c0aa8b8,(int)&piStack_128 + DAT_8c0aa8b4,a6,pfVar5);
      a6 = (int)&piStack_128 + DAT_8c0aa8b8;
      iStack_f4 = (*(code *)PTR_FUN_8c0aa8c0)(ar4,ar5,a6,ar7);
      uStack_f0 = (uint)(iStack_f4 == 0);
      uVar4 = 0xffffffff;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c0aa8c4)
                ((int)&piStack_128 + DAT_8c0aa8b8,0xffffffff,a6,ar7);
      pfVar5 = ar7;
      if (uStack_f0 != 0) {
        *(int *)(DAT_8c0aa8c8 + ar4) = *(int *)(DAT_8c0aa8c8 + ar4) + 1;
        iStack_110 = ar4;
        (*(code *)PTR_FUN_8c0aa8cc)(ar4 + 0x54,uVar4,a6,ar7);
        pfVar5 = ar7;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)((int)&piStack_128 + DAT_8c0aa8b4);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)&piStack_128 + DAT_8c0aa8d0);
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = *(undefined8 *)((int)&piStack_128 + DAT_8c0aa8b4);
          *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)((int)&piStack_128 + DAT_8c0aa8d0);
        }
      }
      goto LAB_8c0aacb4;
    }
    *(undefined4 *)(DAT_8c0aaadc + ar4) = 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0aabac);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aabac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0aabac) = fVar7;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0aabac) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + DAT_8c0aabac);
        fVar12 = DAT_8c0aabb0;
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aabac);
        fVar7 = DAT_8c0aabb0;
        fVar12 = DAT_8c0aabb4;
      }
      iStack_118 = ar4;
      if (in_FPSCR_PR != '\0' || fVar7 <= fVar12) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c0aac58,(int)*(ulonglong *)(ar4 + DAT_8c0aac54));
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + DAT_8c0aac54);
          dVar13 = (double)CONCAT44(DAT_8c0aac5c,DAT_8c0aac58);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar13 + dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0aac54) = fVar7;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0aac54) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0aac5c),in_fr3);
        }
        else {
          dVar13 = *(double *)(ar4 + DAT_8c0aac5c);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(DAT_8c0aac64,*(undefined4 *)(ar4 + DAT_8c0aac60));
        }
        else {
          dVar11 = (double)CONCAT44(DAT_8c0aac68,DAT_8c0aac64);
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) +
                                    SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20),
                                    SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 + dVar11 / dVar11;
        }
        iStack_120 = ar4;
        iStack_11c = ar4;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c0aac5c) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c0aac5c) = dVar13;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *ar7 = DAT_8c0aabb4;
          uVar10 = CONCAT44(DAT_8c0aabb8,fVar7);
          ar7[1] = DAT_8c0aabb8;
        }
        else {
          *(ulonglong *)ar7 = CONCAT44(DAT_8c0aabb8,DAT_8c0aabb4);
          uVar10 = CONCAT44(DAT_8c0aabbc,DAT_8c0aabb8);
          *(ulonglong *)(ar7 + 1) = uVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          ar7[2] = 0.0;
        }
        else {
          *(ulonglong *)(ar7 + 2) = uVar10 & 0xffffffff;
        }
        (*(code *)PTR_FUN_8c0aabc0)(ar4 + DAT_8c0aabbc,iVar3,a6,pfVar5);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44(DAT_8c0aac6c,*(undefined4 *)(ar4 + DAT_8c0aac68));
      }
      else {
        uVar10 = CONCAT44(DAT_8c0aac70,DAT_8c0aac6c);
      }
      if (in_FPSCR_PR != '\0' || (float)(uVar10 >> 0x20) <= (float)uVar10) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar10 & 0xffffffff;
        }
        (*(code *)PTR_FUN_8c0aac74)(ar4 + 0x14,iVar3,a6,pfVar5);
        *(int *)(DAT_8c0aac78 + ar4) = *(int *)(DAT_8c0aac78 + ar4) + 1;
        iStack_124 = ar4;
      }
      (*(code *)PTR_FUN_8c0aac88)(ar4 + DAT_8c0aac84,iVar3,a6,pfVar5);
    }
    else if ((iVar2 == 3) &&
            (iStack_10c = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0aacf8)
                                    (ar4 + DAT_8c0aacf4,iVar3,a6,pfVar5), iStack_10c == 1)) {
      *(undefined4 *)(DAT_8c0aacfc + ar4) = 8;
      uVar6 = 0;
      *(undefined4 *)(DAT_8c0aad00 + ar4) = 0;
      *(undefined4 *)(DAT_8c0aad04 + ar4) = 0;
    }
    goto LAB_8c0aacb4;
  }
  (*(code *)PTR_FUN_8c0aaae8)
            ((int)&piStack_128 + DAT_8c0aaae4,(int)&piStack_128 + DAT_8c0aaae0,a6,pfVar5);
  pfVar5 = (float *)((int)&pfStack_12c + DAT_8c0aaaec);
  a6 = (int)&pfStack_12c + DAT_8c0aaaf0;
  pfStack_12c = ar7;
  iVar3 = (*(code *)PTR_FUN_8c0aaaf4)(ar4,ar5,a6,pfVar5);
  uVar4 = 0xffffffff;
  iStack_f8 = iVar3;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c0aaaf8)
            ((int)&piStack_128 + DAT_8c0aaae4,0xffffffff,a6,pfVar5);
  if (iVar3 == 0) {
    *(int *)(DAT_8c0aaadc + ar4) = *(int *)(DAT_8c0aaadc + ar4) + 1;
    uVar10 = (ulonglong)(uint)fVar7;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar10;
    }
    pfStack_12c = (float *)((int)&piStack_128 + DAT_8c0aaafc);
    iStack_114 = ar4;
    (*(code *)PTR_FUN_8c0aab00)(ar4 + 0x14,uVar4,a6,pfVar5);
    (*(code *)PTR_Vec3_ctor_xyz_8c0aab14)((int)&piStack_128 + DAT_8c0aab10,uVar4,a6,pfVar5);
    pfStack_12c = (float *)((int)&piStack_128 + DAT_8c0aab18);
    uVar4 = ar5;
    (*(code *)PTR_Vec3_sub_8c0aab20)((int)&pfStack_12c + DAT_8c0aab1c,ar5,a6,pfVar5);
    uStack_100._4_4_ =
         (*(code *)PTR_Vec3_length_8c0aab24)((int)&piStack_128 + DAT_8c0aab18,uVar4,a6,pfVar5);
    pfStack_12c = (float *)((int)&piStack_128 + DAT_8c0aab28);
    (*(code *)PTR_FUN_8c0aab00)(uStack_100._4_4_,uVar4,a6,pfVar5);
    (*(code *)PTR_FUN_8c0aab2c)
              ((int)&piStack_128 + DAT_8c0aaafc,(int)&piStack_128 + DAT_8c0aab28,a6,pfVar5);
    uVar1 = uVar10;
    if (in_FPSCR_SZ == '\0') {
      uStack_100 = CONCAT44(uStack_100._4_4_,(int)(uVar10 >> 0x20));
      uVar1 = uStack_100;
    }
    uStack_100 = uVar1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0aab30) = (undefined4)uStack_100;
      uVar10 = CONCAT44((undefined4)uStack_100,(int)uVar10);
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0aab30) = uStack_100;
      uVar10 = uStack_100;
    }
    uVar8 = (uint)uVar10;
    (*(code *)PTR_Vec3_dtor_8c0aab34)((int)&piStack_128 + DAT_8c0aab28,0xffffffff,a6,pfVar5);
    (*(code *)PTR_Vec3_dtor_8c0aab34)((int)&piStack_128 + DAT_8c0aab18,0xffffffff,a6,pfVar5);
    (*(code *)PTR_Vec3_dtor_8c0aab34)((int)&piStack_128 + DAT_8c0aab10,0xffffffff,a6,pfVar5);
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0aab34)((int)&piStack_128 + DAT_8c0aaafc,0xffffffff,a6,pfVar5);
    (*(code *)PTR_Vec3_ctor_xyz_8c0aab14)(auStack_b8,uVar4,a6,pfVar5);
    pfStack_12c = afStack_c8;
    uVar4 = ar5;
    (*(code *)PTR_Vec3_sub_8c0aab20)(auStack_b8,ar5,a6,pfVar5);
    uStack_108._4_4_ = (*(code *)PTR_Vec3_length_8c0aab24)(afStack_c8,uVar4,a6,pfVar5);
    (*(code *)PTR_Vec3_assign_8c0aab38)(ar4 + 0x14,uStack_108._4_4_,a6,pfVar5);
    (*(code *)PTR_Vec3_dtor_8c0aab34)(afStack_c8,0xffffffff,a6,pfVar5);
    (*(code *)PTR_Vec3_dtor_8c0aab34)(auStack_b8,0xffffffff,a6,pfVar5);
    uVar10 = (ulonglong)uVar8;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0aab3c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0aab3c) = uVar10;
    }
    (*(code *)PTR_Vec3_assign_8c0aab38)(ar4 + 0x54,ar5,a6,pfVar5);
    uVar10 = uVar10 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0aab40) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0aab40) = uVar10;
    }
    (*(code *)PTR_Vec3_ctor_xyz_8c0aab14)(auStack_d8,ar5,a6,pfVar5);
    pfStack_12c = afStack_e8;
    iVar3 = ar4 + 0x54;
    (*(code *)PTR_Vec3_sub_8c0aab20)(auStack_d8,iVar3,a6,pfVar5);
    (*(code *)PTR_Vec3_length_sq_8c0aab44)(afStack_e8,iVar3,a6,pfVar5);
    if (in_FPSCR_SZ == '\0') {
      uVar4 = (undefined4)(uVar10 >> 0x20);
      uStack_108 = CONCAT44(uStack_108._4_4_,uVar4);
      dVar13 = (double)CONCAT44(DAT_8c0aab48,uVar4);
      uVar10 = in_xd0;
    }
    else {
      dVar13 = (double)CONCAT44(_DAT_8c0aab4c,DAT_8c0aab48);
      uStack_108 = uVar10;
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar13 / dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar10;
    }
    (*(code *)PTR_Vec3_dtor_8c0aab34)(afStack_e8,0xffffffff,a6,pfVar5);
    (*(code *)PTR_Vec3_dtor_8c0aab34)(auStack_d8,0xffffffff,a6,pfVar5);
    pfVar5 = (float *)0x0;
    a6 = -1;
    uVar4 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0aab50)(ar4 + DAT_8c0aaafc,0,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0aab54)(ar4 + DAT_8c0aaafc,uVar4,a6,pfVar5);
  }
LAB_8c0aacb4:
  uStack_ec = uVar6;
  (*(code *)PTR_Vec3_dtor_8c0aad0c)((int)&piStack_128 + DAT_8c0aad08,0xffffffff,a6,pfVar5);
  (*(code *)PTR_Vec3_dtor_8c0aad0c)((int)&piStack_128 + DAT_8c0aad10,0xffffffff,a6,pfVar5);
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c0aad18)
            ((int)&piStack_128 + DAT_8c0aad14,0xffffffff,a6,pfVar5);
  return uStack_ec;
}



/* FUN_8c0aad1c @ 8c0aad1c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0aaeca) */
/* WARNING: Removing unreachable block (ram,0x8c0aad78) */
/* WARNING: Removing unreachable block (ram,0x8c0aad7c) */
/* WARNING: Removing unreachable block (ram,0x8c0aaece) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0aad1c(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  float fVar4;
  double in_dr0;
  undefined4 uVar7;
  ulonglong uVar5;
  double dVar6;
  double in_dr14;
  double dVar8;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar3 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar3 + -0x10) = in_PR;
  puVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0ab06c)(ar4 + DAT_8c0ab068,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0ab074)
            ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),puVar2,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0ab074)
            ((undefined1 *)((int)puVar3 + DAT_8c0ab078 + -0xd0),puVar2,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0ab074)
            ((undefined1 *)((int)puVar3 + DAT_8c0ab07c + -0xd0),puVar2,a6,ar7);
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(DAT_8c0ab080 + ar4) << 0x1e) < 0)) {
    (*(code *)PTR_Vec3_assign_8c0ab084)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab078 + -0xd0),ar5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0ab084)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab07c + -0xd0),*(int *)(ar6 + 0x68) + 4,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + DAT_8c0ab088));
    }
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + DAT_8c0ab08c + -0xd0);
    (*(code *)PTR_Vec3_sub_8c0ab098)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab094 + -0xd4),
               (undefined1 *)((int)puVar3 + DAT_8c0ab090 + -0xd4),a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0ab084)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),
               (undefined1 *)((int)puVar3 + DAT_8c0ab08c + -0xd0),a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0ab09c)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab08c + -0xd0),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0ab0a0)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),uVar1,a6,ar7);
    uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0xb8) = uVar7;
      in_dr0 = (double)CONCAT44(uVar7,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar3 + -0xb8) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar4 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0xb8),fVar4);
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -0xb8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xb4) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar3 + -0xb4);
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0ab0a4,fVar4);
        *(undefined4 *)((int)puVar3 + -0xb4) = DAT_8c0ab0a4;
      }
      else {
        uVar5 = CONCAT44(PTR_Vec3_length_8c0ab0a8,DAT_8c0ab0a4);
        *(ulonglong *)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (*(code *)PTR_Vec3_length_8c0ab0a8)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),uVar1,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0ab0a0)(ar4 + 4,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xbc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)((int)puVar3 + -0xbc);
    }
    else {
      *(ulonglong *)((int)puVar3 + -0xbc) = uVar5;
      in_xd0 = *(undefined8 *)((int)puVar3 + -0xbc);
    }
    fVar4 = (float)uVar5;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar4) {
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x60);
      (*(code *)PTR_Vec3_scale_8c0ab0b0)(ar4 + 0x14,PTR_DAT_8c0ab0ac,a6,ar7);
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x70);
      puVar2 = (undefined1 *)((int)puVar3 + -0x60);
      (*(code *)PTR_Vec3_add_8c0ab0b8)
                ((undefined1 *)((int)puVar3 + DAT_8c0ab0b4 + -0xd4),puVar2,a6,ar7);
      uVar1 = (*(code *)PTR_Vec3_length_8c0ab0a8)((undefined1 *)((int)puVar3 + -0x70),puVar2,a6,ar7)
      ;
      *(undefined4 *)((int)puVar3 + -0xc0) = uVar1;
      (*(code *)PTR_Vec3_assign_8c0ab084)
                ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),
                 *(undefined4 *)((int)puVar3 + -0xc0),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0ab09c)((undefined1 *)((int)puVar3 + -0x70),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0ab09c)((undefined1 *)((int)puVar3 + -0x60),0xffffffff,a6,ar7);
    }
    (*(code *)PTR_FUN_8c0ab0bc)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),
               (undefined1 *)((int)puVar3 + -0xb4),a6,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + DAT_8c0ab0b4 + -0xd0) = 0;
    }
    else {
      *(double *)((int)puVar3 + DAT_8c0ab0b4 + -0xd0) = in_dr0;
    }
    puVar2 = (undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0);
    (*(code *)PTR_Vec3_assign_8c0ab084)(ar4 + DAT_8c0ab068,puVar2,a6,ar7);
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(DAT_8c0ab080 + ar4) << 0x1d) < 0)) {
    (**(code **)(DAT_8c0ab0c0 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
              (*(int *)(ar6 + 0x50),puVar2,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xc4) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar3 + -0xc4));
      dVar6 = (double)CONCAT44(DAT_8c0ab0c4,SUB84(in_dr0,0));
    }
    else {
      *(double *)((int)puVar3 + -0xc4) = in_dr0;
      dVar6 = (double)CONCAT44(PTR_FUN_8c0ab0c8,DAT_8c0ab0c4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar8 = in_dr14 + dVar6;
    }
    (*(code *)PTR_Vec3_assign_8c0ab084)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab078 + -0xd0),ar5,a6,ar7);
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x80);
    (*(code *)PTR_FUN_8c0ab0c8)(*(undefined4 *)(ar6 + 0x50),ar5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0ab084)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab07c + -0xd0),
               (undefined1 *)((int)puVar3 + -0x80),a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ab09c)((undefined1 *)((int)puVar3 + -0x80),0xffffffff,a6,ar7);
    *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0x90);
    (*(code *)PTR_Vec3_sub_8c0ab098)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab094 + -0xd4),
               (undefined1 *)((int)puVar3 + DAT_8c0ab090 + -0xd4),a6,ar7);
    (*(code *)PTR_Vec3_assign_8c0ab084)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),
               (undefined1 *)((int)puVar3 + -0x90),a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0ab09c)((undefined1 *)((int)puVar3 + -0x90),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0ab0a0)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),uVar1,a6,ar7);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -200) = uVar7;
      dVar6 = (double)CONCAT44(uVar7,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar3 + -200) = dVar6;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) + SUB84(dVar8,0);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -200),fVar4);
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0ab0cc,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44(PTR_DAT_8c0ab0d0,DAT_8c0ab0cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar3 + -0xb4) = fVar4;
      fVar4 = *(float *)((int)puVar3 + -0xb4);
    }
    else {
      *(undefined8 *)((int)puVar3 + -0xb4) = in_xd0;
    }
    uVar5 = (ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c0ab0a4,fVar4);
        *(undefined4 *)((int)puVar3 + -0xb4) = DAT_8c0ab0a4;
      }
      else {
        uVar5 = CONCAT44(PTR_Vec3_length_8c0ab0a8,DAT_8c0ab0a4);
        *(ulonglong *)((int)puVar3 + -0xb4) = uVar5;
      }
    }
    (*(code *)PTR_Vec3_length_8c0ab0a8)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),uVar1,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0ab0a0)(ar4 + 4,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0xcc) = (int)(uVar5 >> 0x20);
      uVar5 = (ulonglong)*(uint *)((int)puVar3 + -0xcc);
    }
    else {
      *(ulonglong *)((int)puVar3 + -0xcc) = uVar5;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < (float)uVar5) {
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0xa0);
      (*(code *)PTR_Vec3_scale_8c0ab0b0)(ar4 + 0x14,PTR_DAT_8c0ab0d0,a6,ar7);
      *(undefined1 **)((int)puVar3 + -0xd4) = (undefined1 *)((int)puVar3 + -0xb0);
      puVar2 = (undefined1 *)((int)puVar3 + -0xa0);
      (*(code *)PTR_Vec3_add_8c0ab0b8)
                ((undefined1 *)((int)puVar3 + DAT_8c0ab0b4 + -0xd4),puVar2,a6,ar7);
      uVar1 = (*(code *)PTR_Vec3_length_8c0ab0a8)((undefined1 *)((int)puVar3 + -0xb0),puVar2,a6,ar7)
      ;
      *(undefined4 *)((int)puVar3 + -0xd0) = uVar1;
      (*(code *)PTR_Vec3_assign_8c0ab084)
                ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),
                 *(undefined4 *)((int)puVar3 + -0xd0),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0ab09c)((undefined1 *)((int)puVar3 + -0xb0),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0ab09c)((undefined1 *)((int)puVar3 + -0xa0),0xffffffff,a6,ar7);
    }
    (*(code *)PTR_FUN_8c0ab0bc)
              ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),
               (undefined1 *)((int)puVar3 + -0xb4),a6,ar7);
    (*(code *)PTR_FUN_8c0ab0d4)
              (ar4 + DAT_8c0ab068,(undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),a6,ar7);
  }
  (*(code *)PTR_Vec3_dtor_8c0ab09c)
            ((undefined1 *)((int)puVar3 + DAT_8c0ab07c + -0xd0),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0ab09c)
            ((undefined1 *)((int)puVar3 + DAT_8c0ab078 + -0xd0),0xffffffff,a6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0ab09c)
                    ((undefined1 *)((int)puVar3 + DAT_8c0ab070 + -0xd0),0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c0ab0d8 @ 8c0ab0d8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab0d8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0;
  undefined8 uVar6;
  ulonglong uVar7;
  double dVar8;
  uint uVar9;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [112];
  
  iVar2 = *(int *)(DAT_8c0ab114 + ar4);
  if (iVar2 == 0) {
    ar7 = 0;
    uVar4 = 0xffffffff;
    uVar3 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0ab390)(ar4 + DAT_8c0ab388._4_4_,0,0xffffffff,0)
    ;
    uVar9 = SUB84(in_dr0,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0ab394)(ar4 + DAT_8c0ab388._4_4_,uVar3,uVar4,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0ab398) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0ab398) = (ulonglong)uVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar3 = *(undefined4 *)(ar4 + DAT_8c0ab3a0);
      uVar6 = CONCAT44(uVar3,uVar9);
      *(undefined4 *)(ar4 + DAT_8c0ab39c) = uVar3;
    }
    else {
      uVar6 = *(undefined8 *)(ar4 + DAT_8c0ab3a0);
      *(undefined8 *)(ar4 + DAT_8c0ab39c) = uVar6;
    }
    puStack_100 = (undefined1 *)((int)&iStack_fc + DAT_8c0ab3a4);
    uVar3 = ar5;
    (*(code *)PTR_Vec3_sub_8c0ab3a8)(ar6,ar5,uVar4,ar7);
    uStack_c0._4_4_ =
         (*(code *)PTR_Vec3_length_8c0ab3ac)((int)&iStack_fc + DAT_8c0ab3a4,uVar3,uVar4,ar7);
    puStack_100 = (undefined1 *)((int)&iStack_fc + DAT_8c0ab3b0);
    (*(code *)PTR_FUN_8c0ab3b4)(uStack_c0._4_4_,uVar3,uVar4,ar7);
    puStack_100 = (undefined1 *)((int)&iStack_fc + DAT_8c0ab3b8);
    (*(code *)PTR_FUN_8c0ab3b4)(ar4 + 0x14,uVar3,uVar4,ar7);
    (*(code *)PTR_FUN_8c0ab3bc)
              ((int)&iStack_fc + DAT_8c0ab3b0,(int)&iStack_fc + DAT_8c0ab3b8,uVar4,ar7);
    uVar1 = uVar6;
    if (in_FPSCR_SZ == '\0') {
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)((ulonglong)uVar6 >> 0x20));
      uVar1 = uStack_c0;
    }
    uStack_c0 = uVar1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0ab3c0) = (undefined4)uStack_c0;
      uVar6 = CONCAT44((undefined4)uStack_c0,(int)uVar6);
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0ab3c0) = uStack_c0;
      uVar6 = uStack_c0;
    }
    (*(code *)PTR_Vec3_dtor_8c0ab3c4)((int)&iStack_fc + DAT_8c0ab3b8,0xffffffff,uVar4,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ab3c4)((int)&iStack_fc + DAT_8c0ab3b0,0xffffffff,uVar4,ar7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0ab3c4)((int)&iStack_fc + DAT_8c0ab3a4,0xffffffff,uVar4,ar7);
    puStack_100 = (undefined1 *)((int)&iStack_fc + DAT_8c0ab3c8);
    (*(code *)PTR_FUN_8c0ab3b4)(ar4 + 0x14,uVar3,uVar4,ar7);
    puStack_100 = (undefined1 *)((int)&iStack_fc + DAT_8c0ab3cc);
    uVar3 = ar5;
    (*(code *)PTR_Vec3_sub_8c0ab3a8)(ar6,ar5,uVar4,ar7);
    uStack_c8._4_4_ =
         (*(code *)PTR_Vec3_length_8c0ab3ac)((int)&iStack_fc + DAT_8c0ab3cc,uVar3,uVar4,ar7);
    puStack_100 = (undefined1 *)((int)&iStack_fc + DAT_8c0ab3d0);
    (*(code *)PTR_FUN_8c0ab3b4)(uStack_c8._4_4_,uVar3,uVar4,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c0ab3d8)(auStack_84,uVar3,uVar4,ar7);
    puStack_100 = auStack_94;
    (*(code *)PTR_FUN_8c0ab3e0)((int)&puStack_100 + DAT_8c0ab3dc,auStack_84,uVar4,ar7);
    (*(code *)PTR_FUN_8c0ab3bc)((int)&iStack_fc + DAT_8c0ab3c8,auStack_94,uVar4,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
      in_dr0 = (double)CONCAT44(_DAT_8c0ab3d4,uVar3);
    }
    else {
      in_dr0 = (double)CONCAT44(PTR_Vec3_set_xyz_8c0ab3d8,_DAT_8c0ab3d4);
      in_xd0 = uVar6;
      uStack_c8 = uVar6;
    }
    uStack_b8 = (uint)(in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20))
    ;
    (*(code *)PTR_Vec3_dtor_8c0ab3c4)(auStack_94,0xffffffff,uVar4,ar7);
    (*(code *)PTR_object_dtor_delete_8c0ab3e4)(auStack_84,0xffffffff,uVar4,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ab3c4)((int)&iStack_fc + DAT_8c0ab3d0,0xffffffff,uVar4,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ab3c4)((int)&iStack_fc + DAT_8c0ab3cc,0xffffffff,uVar4,ar7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0ab3c4)((int)&iStack_fc + DAT_8c0ab3c8,0xffffffff,uVar4,ar7);
    if (uStack_b8 != 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44((undefined4)DAT_8c0ab388,*(undefined4 *)(ar4 + DAT_8c0ab3c0));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab3c0);
        dVar8 = (double)CONCAT44(DAT_8c0ab388._4_4_,(undefined4)DAT_8c0ab388);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        in_dr0 = dVar8 * dVar8;
      }
      iStack_dc = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0ab3c0) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0ab3c0) = in_xd0;
      }
    }
    *(int *)(DAT_8c0ab3e8 + ar4) = *(int *)(DAT_8c0ab3e8 + ar4) + 1;
    iStack_e0 = ar4;
  }
  else {
    uVar3 = ar5;
    uVar4 = ar6;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        (*(code *)PTR_FUN_8c0ab568)(ar5,ar6,ar6,ar7);
        dVar8 = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          uVar9 = (uint)((ulonglong)in_dr0 >> 0x20);
          uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,uVar9);
          in_dr0 = (double)(ulonglong)uVar9;
          dVar8 = uStack_d4;
        }
        uStack_d4 = dVar8;
        if (in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= 1.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          *(int *)(DAT_8c0ab56c + ar4) = *(int *)(DAT_8c0ab56c + ar4) + 1;
          iStack_fc = ar4;
        }
        (*(code *)PTR_FUN_8c0ab57c)(ar4 + DAT_8c0ab578,ar6,uVar4,ar7);
        return 1;
      }
      if (iVar2 != 3) {
        return 1;
      }
      iVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0ab5b8)(ar4 + DAT_8c0ab5b4,ar5,ar6,ar7)
      ;
      if (iVar2 != 1) {
        return 1;
      }
      *(undefined4 *)(DAT_8c0ab5bc + ar4) = 0;
      return 0;
    }
  }
  fVar5 = SUB84(in_dr0,0);
  if (in_FPSCR_SZ == '\0') {
    fVar5 = *(float *)(ar4 + DAT_8c0ab3c0);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab3c0);
  }
  if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + DAT_8c0ab398);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab398);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0ab398) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0ab398) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + DAT_8c0ab398);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab398);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44((int)*(ulonglong *)(ar4 + DAT_8c0ab3c0),fVar5);
    }
    else {
      uVar7 = *(ulonglong *)(ar4 + DAT_8c0ab3c0);
    }
    iStack_e4 = ar4;
    if (in_FPSCR_PR == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar7 = (ulonglong)*(uint *)(ar4 + DAT_8c0ab410);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab410);
      }
      dVar8 = (double)CONCAT44(0x3f800000,(float)uVar7);
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)uVar7 + 1.0;
      }
      else {
        fVar5 = SUB84(dVar8 + dVar8,0);
      }
      iStack_ec = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0ab410) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0ab410) = in_xd0;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        uVar7 = (ulonglong)*(uint *)(ar4 + DAT_8c0ab39c);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab39c);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0ab3c0),(int)uVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + DAT_8c0ab3c0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0ab3a0) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0ab3a0) = in_xd0;
      }
      *(int *)(DAT_8c0ab3e8 + ar4) = *(int *)(DAT_8c0ab3e8 + ar4) + 1;
      puStack_100 = auStack_a4;
      iStack_e8 = ar4;
      (*(code *)PTR_Vec3_sub_8c0ab3a8)(ar6,ar5,uVar4,ar7);
      uStack_cc = (*(code *)PTR_Vec3_length_8c0ab3ac)(auStack_a4,ar5,uVar4,ar7);
      (*(code *)PTR_Vec3_assign_8c0ab3ec)(ar4 + 0x14,uStack_cc,uVar4,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0ab3c4)(auStack_a4,0xffffffff,uVar4,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = DAT_8c0ab3f0;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(uRam8c0ab3f4,DAT_8c0ab3f0);
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + DAT_8c0ab4b0);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab4b0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = fVar5 - 1.0;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0ab4b0) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0ab4b0) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + DAT_8c0ab4b0);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab4b0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44((int)*(ulonglong *)(ar4 + DAT_8c0ab4b4),fVar5);
    }
    else {
      uVar7 = *(ulonglong *)(ar4 + DAT_8c0ab4b4);
    }
    iStack_f0 = ar4;
    if (in_FPSCR_PR == '\0' && (float)(uVar7 >> 0x20) < (float)uVar7) {
      if (in_FPSCR_SZ == '\0') {
        uVar7 = (ulonglong)*(uint *)(ar4 + DAT_8c0ab508);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab508);
      }
      dVar8 = (double)CONCAT44(0x3f800000,(float)uVar7);
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)uVar7 - 1.0;
      }
      else {
        fVar5 = SUB84(dVar8 - dVar8,0);
      }
      iStack_f8 = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0ab508) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0ab508) = in_xd0;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        uVar7 = (ulonglong)*(uint *)(ar4 + DAT_8c0ab4bc);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0ab4bc);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c0ab4b4),(int)uVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + DAT_8c0ab4b4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0ab4b8) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0ab4b8) = in_xd0;
      }
      *(int *)(DAT_8c0ab4c0 + ar4) = *(int *)(DAT_8c0ab4c0 + ar4) + 1;
      puStack_100 = auStack_b4;
      iStack_f4 = ar4;
      (*(code *)PTR_Vec3_sub_8c0ab4c4)(ar6,ar5,uVar4,ar7);
      uVar3 = (*(code *)PTR_Vec3_length_8c0ab4c8)(auStack_b4,ar5,uVar4,ar7);
      uStack_d4 = (double)CONCAT44(uVar3,(undefined4)uStack_d4);
      (*(code *)PTR_Vec3_assign_8c0ab4cc)(ar4 + 0x14,uVar3,uVar4,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0ab4d0)(auStack_b4,0xffffffff,uVar4,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = DAT_8c0ab4d4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(uRam8c0ab4d8,DAT_8c0ab4d4);
      }
    }
  }
  (*(code *)PTR_FUN_8c0ab518)(ar4 + DAT_8c0ab514,uVar3,uVar4,ar7);
  return 1;
}



/* FUN_8c0ab5c0 @ 8c0ab5c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab5c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 a7;
  undefined1 auStack_1c [28];
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ab6ac)(PTR_DAT_8c0ab6a8,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0ab6b4;
  uVar2 = DAT_8c0ab6b0;
  (*(code *)PTR_global_list_push_8c0ab6b8)(uVar1,PTR_Vec3_dtor_8c0ab6b4,DAT_8c0ab6b0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ab6ac)(PTR_DAT_8c0ab6bc,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0ab6b4;
  uVar2 = DAT_8c0ab6c0;
  (*(code *)PTR_global_list_push_8c0ab6b8)(uVar1,PTR_Vec3_dtor_8c0ab6b4,DAT_8c0ab6c0,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ab6ac)(PTR_DAT_8c0ab6c4,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0ab6b4;
  uVar2 = DAT_8c0ab6c8;
  (*(code *)PTR_global_list_push_8c0ab6b8)(uVar1,PTR_Vec3_dtor_8c0ab6b4,DAT_8c0ab6c8,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0ab6ac)(PTR_DAT_8c0ab6cc,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0ab6b8)(uVar2,PTR_Vec3_dtor_8c0ab6b4,DAT_8c0ab6d0,ar7);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0ab6e0)
            (DAT_8c0ab6dc,PTR_FUN_8c0ab6d8,PTR_free_if_nonnull_wrap_0247b0_8c0ab6d4,4);
  (*(code *)PTR_global_list_push_8c0ab6b8)(0,PTR_FUN_8c0ab6e8,DAT_8c0ab6e4,uVar2);
  a7 = 4;
  (*(code *)PTR_FUN_8c0ab6e0)
            (DAT_8c0ab6f4,PTR_FUN_8c0ab6f0,PTR_free_if_nonnull_wrap_03a3dc_8c0ab6ec,4);
  puVar3 = PTR_FUN_8c0ab6fc;
  uVar2 = DAT_8c0ab6f8;
  (*(code *)PTR_global_list_push_8c0ab6b8)(0,PTR_FUN_8c0ab6fc,DAT_8c0ab6f8,a7);
  uVar1 = (*(code *)PTR_FUN_8c0ab70c)(auStack_1c,puVar3,uVar2,a7);
  uVar2 = (*(code *)PTR_FUN_8c0ab714)(DAT_8c0ab710,uVar1,uVar2,a7);
  return uVar2;
}



/* FUN_8c0ab718 @ 8c0ab718 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab718(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0ab738)
                    (DAT_8c0ab734,PTR_free_if_nonnull_wrap_03a3dc_8c0ab730,4,9);
  return uVar1;
}



/* FUN_8c0ab73c @ 8c0ab73c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ab73c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0ab75c)
                    (DAT_8c0ab758,PTR_free_if_nonnull_wrap_0247b0_8c0ab754,4,9);
  return uVar1;
}



/* FUN_8c0ab760 @ 8c0ab760 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ab760(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ab794)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0ab798;
  *(undefined4 *)(DAT_8c0ab79c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0ab7a0 + (int)ar4) = 6;
  *(undefined4 *)(DAT_8c0ab7a4 + (int)ar4) = 6;
  *(undefined4 *)(DAT_8c0ab7a8 + (int)ar4) = 6;
  return ar4;
}



/* Class_12b0c4_m0_0ab7ac @ 8c0ab7ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b0c4_m0_0ab7ac(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0ab7e8;
    a5 = 0;
    (*(code *)PTR_Class_129c70_m0_02f1b8_8c0ab7ec)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ab7f0)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12b0c4_m1_0ab7f4 @ 8c0ab7f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b0c4_m1_0ab7f4(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int *a6;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  byte abStack_b0 [4];
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [52];
  
  (*(code *)PTR_Vec3_ctor_zero_8c0ab95c)(abStack_b0 + DAT_8c0ab958,ar5,ar6,ar7);
  puVar4 = auStack_50;
  iVar5 = 0x10;
  puVar3 = PTR_DAT_8c0ab960;
  do {
    puVar2 = puVar3 + 1;
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar4[1] = *puVar2;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(PTR_DAT_8c0ab964 + DAT_8c0ab968) = *(undefined4 *)(DAT_8c0ab96c + ar4);
  *(undefined4 *)(PTR_DAT_8c0ab964 + DAT_8c0ab96c) = *(undefined4 *)(DAT_8c0ab970 + ar4);
  *(undefined4 *)(PTR_DAT_8c0ab964 + DAT_8c0ab970) = *(undefined4 *)(DAT_8c0ab974 + ar4);
  piVar6 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0ab978)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0ab97c)(ar6[3],piVar6,a6,ar7);
  abStack_b0[1] = (byte)uVar1;
  if ((abStack_b0[1] == '\x01') &&
     (iStack_54 = (*(code *)PTR_get_field_24_026024_8c0ab980)(ar5,piVar6,a6,ar7), iStack_54 == 1)) {
    iVar5 = ar6[3];
    iStack_58 = (*(code *)PTR_get_field_48_0abc28_8c0ab984)(iVar5,piVar6,a6,ar7);
    if (iStack_58 != 0) {
      uStack_5c = (*(code *)PTR_rand_8c0ab988)(iVar5,piVar6,a6,ar7);
      piVar6 = DAT_8c0ab98c;
      iStack_a8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0ab990)(uStack_5c,DAT_8c0ab98c,a6,ar7)
      ;
      if (iStack_a8 < 1) {
        uStack_60 = (*(code *)PTR_get_field_48_0abc28_8c0ab984)(ar6[3],piVar6,a6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = uStack_60;
        if (*(int *)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(ar4 + 4) = 6;
          *(undefined4 *)(ar4 + 0x40) = 3;
          *(undefined4 *)(ar4 + 8) = 0x55;
          *(undefined4 *)(ar4 + 0xc) = 0;
          uVar1 = DAT_8c0ab994;
          (*(code *)PTR_FUN_8c0ab998)(ar4,DAT_8c0ab994,a6,ar7);
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))
                    (*(int *)(ar4 + 0x6c),uVar1,a6,ar7);
          piVar6 = (int *)0x0;
          (*(code *)PTR_FUN_8c0ab99c)(ar6[3],0,a6,ar7);
        }
      }
    }
  }
  iStack_64 = (*(code *)PTR_get_field_24_026024_8c0ab980)(ar5,piVar6,a6,ar7);
  if (iStack_64 == 0) {
    iVar5 = ar6[6];
    uVar1 = (*(code *)PTR_get_field_a0_035724_8c0ab9a0)(iVar5,piVar6,a6,ar7);
    abStack_b0[0] = (byte)uVar1;
    if (abStack_b0[0] < 2) {
      *(undefined1 *)(DAT_8c0ab9a4 + ar4) = 1;
    }
    else {
      uStack_68 = (*(code *)PTR_rand_8c0abbbc)(iVar5,piVar6,a6,ar7);
      piVar6 = DAT_8c0abbc0;
      iStack_ac = (*(code *)PTR_libgcc_divide_helper_01031c_8c0abbc4)(uStack_68,DAT_8c0abbc0,a6,ar7)
      ;
      if ((iStack_ac < 1) && (*(int *)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 0x5a;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x38) = 2;
        (*(code *)PTR_FUN_8c0abbc8)(ar4,ar5,a6,ar7);
        piVar6 = DAT_8c0abbcc;
        (*(code *)PTR_FUN_8c0abbd0)(ar4,DAT_8c0abbcc,a6,ar7);
      }
    }
  }
  iStack_6c = (**(code **)(DAT_8c0abbd4 + *(int *)(*ar6 + 8)))(*ar6,piVar6,a6,ar7);
  if (iStack_6c == 1) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),piVar6,a6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    iStack_70 = (*(code *)PTR_get_field_6c_02f46c_8c0abbd8)(*ar6,piVar6,a6,ar7);
    if ((iStack_70 == 0) &&
       (iStack_74 = (*(code *)PTR_get_field_70_05f490_8c0abbdc)(*ar6,piVar6,a6,ar7), iStack_74 == 0)
       ) {
      uStack_78 = (**(code **)(DAT_8c0abbe0 + *ar5))(ar5,piVar6,a6,ar7);
      piVar6 = (int *)0x0;
      (*(code *)PTR_FUN_8c0abbe4)(uStack_78,0,a6,ar7);
      (*(code *)PTR_FUN_8c0abbe8)(*ar6,piVar6,a6,ar7);
    }
  }
  uStack_7c = (*(code *)PTR_get_field_124_027930_8c0abbf0)(ar6[2],piVar6,a6,ar7);
  uStack_80 = (*(code *)PTR_get_field_40_05eea0_8c0abbf4)(ar4,piVar6,a6,ar7);
  piVar6 = ar6;
  (*(code *)PTR_FUN_8c0abbf8)(ar4,ar6,a6,ar7);
  uStack_84 = (*(code *)PTR_get_field_124_027930_8c0abbf0)(ar6[2],piVar6,a6,ar7);
  uStack_88 = (*(code *)PTR_get_field_40_05eea0_8c0abbf4)(ar4,piVar6,a6,ar7);
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c0abbfc)(ar4,piVar6,a6,ar7);
  piVar6 = ar6;
  uStack_8c = uVar1;
  (*(code *)PTR_FUN_8c0abc00)(ar4,ar5,ar6,uVar1);
  uStack_90 = (*(code *)PTR_get_field_124_027930_8c0abbf0)(ar6[2],ar5,piVar6,uVar1);
  uStack_98._4_4_ = (*(code *)PTR_get_field_40_05eea0_8c0abbf4)(ar4,ar5,piVar6,uVar1);
  if ((*(char *)(DAT_8c0abc04 + ar4) == '\x01') &&
     ((*(int *)(ar4 + 0x40) != 4 || (*(int *)(ar4 + 4) != 1)))) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 8) = 99;
    *(undefined4 *)(ar4 + 0x40) = 4;
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),ar5,piVar6,uVar1);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  (*(code *)PTR_FUN_8c0abc08)(ar4,ar5,piVar6,uVar1);
  if (in_FPSCR_SZ == '\0') {
    uStack_98 = CONCAT44(uStack_98._4_4_,extraout_fr0);
  }
  else {
    uStack_98 = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (*(code *)PTR_FUN_8c0abc0c)(ar6[2],ar5,piVar6,uVar1);
  iStack_9c = (*(code *)PTR_get_field_124_027930_8c0abbf0)(ar6[2],ar5,piVar6,uVar1);
  iStack_a0 = (*(code *)PTR_get_field_40_05eea0_8c0abbf4)(ar4,ar5,piVar6,uVar1);
  if (iStack_9c != iStack_a0) {
    uStack_a4 = (*(code *)PTR_get_field_40_05eea0_8c0abbf4)(ar4,ar5,piVar6,uVar1);
    piVar6 = (int *)0x1;
    (*(code *)PTR_FUN_8c0abc10)(ar6[2],uStack_a4,1,uVar1);
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0abc18)(abStack_b0 + DAT_8c0abc14,0xffffffff,piVar6,uVar1);
  return uVar1;
}



/* FUN_8c0abc1c @ 8c0abc1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0abc1c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_8c0abc24;
  *DAT_8c0abc24 = (undefined1)ar5;
  return puVar1;
}



/* get_field_48_0abc28 @ 8c0abc28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_48_0abc28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x48);
}



/* FUN_8c0abc30 @ 8c0abc30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0abc30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x45);
}



/* Class_12b0c4_m2_0abc38 @ 8c0abc38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b0c4_m2_0abc38(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_4c [32];
  undefined1 auStack_2c [20];
  
  piVar8 = ar5;
  piVar7 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0abe18)(auStack_2c,ar5,ar6,ar7);
  puVar6 = auStack_4c;
  iVar3 = 0x10;
  puVar5 = PTR_DAT_8c0abe1c;
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(PTR_DAT_8c0abe20 + DAT_8c0abe24) = *(undefined4 *)(DAT_8c0abe28 + ar4);
  *(undefined4 *)(PTR_DAT_8c0abe20 + DAT_8c0abe28) = *(undefined4 *)(DAT_8c0abe2c + ar4);
  *(undefined4 *)(PTR_DAT_8c0abe20 + DAT_8c0abe2c) = *(undefined4 *)(DAT_8c0abe30 + ar4);
  (*(code *)PTR_get_field_18_02d1a0_8c0abe34)(ar6[1] + DAT_8c0abe30,piVar8,piVar7,ar7);
  (*(code *)PTR_get_field_24_026024_8c0abe38)(ar5,piVar8,piVar7,ar7);
  (**(code **)(DAT_8c0abe3c + *ar5))(ar5,piVar8,piVar7,ar7);
  iVar3 = (*(code *)PTR_get_field_18_02d1a0_8c0abe34)(ar6[1] + DAT_8c0abe30,piVar8,piVar7,ar7);
  if (((0 < iVar3) &&
      (iVar3 = (*(code *)PTR_get_field_24_026024_8c0abe38)(ar5,piVar8,piVar7,ar7), iVar3 == 1)) &&
     (iVar3 = (**(code **)(DAT_8c0abe3c + *ar5))(ar5,piVar8,piVar7,ar7), iVar3 == 0)) {
    (**(code **)(DAT_8c0abe40 + *ar5))(ar5,piVar8,piVar7,ar7);
    (*(code *)PTR_get_field_18_02d1a0_8c0abe34)(ar6[1] + DAT_8c0abe30,piVar8,piVar7,ar7);
  }
  piVar8 = ar5;
  piVar7 = ar6;
  (*(code *)PTR_FUN_8c0abe44)(ar4,ar5,ar6,ar7);
  iVar3 = (**(code **)(DAT_8c0abe48 + *(int *)(*ar6 + 8)))(*ar6,piVar8,piVar7,ar7);
  if (iVar3 == 1) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                (*(int *)(ar4 + 0x6c),piVar8,piVar7,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    iVar3 = (*(code *)PTR_get_field_6c_02f46c_8c0abe4c)(*ar6,piVar8,piVar7,ar7);
    if ((iVar3 == 0) &&
       (iVar3 = (*(code *)PTR_get_field_70_05f490_8c0abe50)(*ar6,piVar8,piVar7,ar7), iVar3 == 0)) {
      (*(code *)PTR_FUN_8c0abe54)(*ar6,piVar8,piVar7,ar7);
    }
  }
  piVar8 = ar6;
  (*(code *)PTR_FUN_8c0abe58)(ar4,ar6,piVar7,ar7);
  uVar1 = (*(code *)PTR_get_field_4_05eed8_8c0abe5c)(ar4,piVar8,piVar7,ar7);
  piVar8 = ar6;
  (*(code *)PTR_FUN_8c0abe60)(ar4,ar5,ar6,uVar1);
  (*(code *)PTR_FUN_8c0abe64)(ar4,ar5,piVar8,uVar1);
  (*(code *)PTR_FUN_8c0abe68)(ar6[2],ar5,piVar8,uVar1);
  iVar3 = (*(code *)PTR_get_field_124_027930_8c0abe6c)(ar6[2],ar5,piVar8,uVar1);
  iVar2 = (*(code *)PTR_get_field_40_05eea0_8c0abe70)(ar4,ar5,piVar8,uVar1);
  if (iVar3 != iVar2) {
    a5 = (*(code *)PTR_get_field_40_05eea0_8c0abe70)(ar4,ar5,piVar8,uVar1);
    piVar8 = (int *)0x1;
    (*(code *)PTR_FUN_8c0abe74)(ar6[2],a5,1,uVar1);
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0abe78)(auStack_2c,0xffffffff,piVar8,uVar1);
  return uVar1;
}



/* ret_const_0_0abe7c @ 8c0abe7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0abe7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0abe84 @ 8c0abe84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0abe84(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  undefined4 a5;
  int *a6;
  
  a5 = ar5;
  a6 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c0abf84 + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (*(code *)PTR_FUN_8c0abf88)(ar4,ar5,ar6,ar7);
    a5 = 1;
    (*(code *)PTR_FUN_8c0abf8c)(ar4,1,a6,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c0abf9c)(ar4,ar5,a6,ar7);
  }
  else if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0abf8c)(ar4,3,a6,ar7);
  }
  else if (iVar1 == 3) {
    iVar1 = (*(code *)PTR_FUN_8c0abfa0)(ar4,a5,a6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c0abfa4 + ar4) == 1)) {
      iVar1 = (*(code *)PTR_get_field_6c_02f46c_8c0abfa8)(*(undefined4 *)(ar4 + 0x6c),a5,a6,ar7);
      (*(code *)PTR_FUN_8c0abfac)(*(undefined4 *)(ar4 + 0x6c),iVar1 + -1,a6,ar7);
      *(undefined4 *)(DAT_8c0abfa4 + ar4) = 0;
    }
  }
  else if ((iVar1 == 4) &&
          (iVar1 = (**(code **)(DAT_8c0abf90 + *(int *)(*ar6 + 8)))(*ar6,a5,a6,ar7), iVar1 == 1)) {
    iVar1 = *ar6;
    (*(code *)PTR_FUN_8c0abf94)(iVar1,a5,a6,ar7);
    (*(code *)PTR_FUN_8c0abf98)(iVar1,a5,a6,ar7);
  }
  return 1;
}



/* FUN_8c0abfb0 @ 8c0abfb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0abfb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    a6 = ar6;
    (*(code *)PTR_FUN_8c0ac058)(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c0ac05c + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 6) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      (*(code *)PTR_FUN_8c0ac060)(ar4,0,a6,ar7);
      ar6 = a6;
    }
    else {
      (*(code *)PTR_FUN_8c0ac060)(ar4,3,a6,ar7);
      (*(code *)PTR_FUN_8c0ac064)(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c0ac060)(ar4,2,ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0ac068 @ 8c0ac068 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac068(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a4;
  int *a5;
  undefined4 a5_00;
  
  a5 = ar5;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0ac114)(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 4) {
    a4 = (**(code **)(DAT_8c0ac118 + *ar5))(ar5,a5,ar6,ar7);
    a5_00 = 0;
    (*(code *)PTR_FUN_8c0ac11c)(a4,0,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0ac120)(ar4,a5_00,ar6,ar7);
    if ((iVar1 == 1) && (iVar1 = 0, *(int *)(ar4 + 0x6c) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),a5_00,ar6,ar7);
      iVar1 = 0x6c;
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0ac124 @ 8c0ac124 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac124(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 3) {
    a5 = 0;
    (*(code *)PTR_FUN_8c0ac190)(*(undefined4 *)(ar6 + 0xc),0,ar6,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0ac194)(ar4,a5,ar6,ar7);
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),a5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
      iVar1 = DAT_8c0ac198;
      *(undefined4 *)(DAT_8c0ac198 + ar4) = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0ac19c @ 8c0ac19c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ac19c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    (*(code *)PTR_get_field_8_066620_8c0ac1e4)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0ac1e8;
  }
  else {
    (*(code *)PTR_get_field_8_066620_8c0ac1e4)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0ac1ec;
  }
  return puVar1;
}



/* FUN_8c0ac1f0 @ 8c0ac1f0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ac1f0(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *a5;
  undefined1 *a5_00;
  undefined4 *a6;
  undefined1 *a6_00;
  undefined4 *a7;
  undefined4 *puVar3;
  float fVar4;
  float fVar6;
  undefined4 in_fr3;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 *puStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [4];
  undefined4 auStack_88 [4];
  undefined4 auStack_78 [4];
  undefined1 auStack_68 [92];
  double dVar5;
  
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0ac50c)((int)&iStack_e0 + DAT_8c0ac508,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c0ac518)((int)&iStack_e0 + DAT_8c0ac510._4_4_,a5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c0ac518)((int)&iStack_e0 + DAT_8c0ac524,a5,ar6,ar7);
  a7 = &uStack_a4;
  a6 = &uStack_a0;
  puVar3 = &uStack_9c;
  (**(code **)(DAT_8c0ac528 + *ar5))(ar5,puVar3,a6,a7);
  iVar9 = ar4;
  iStack_b4 = (*(code *)PTR_get_field_4_05eed8_8c0ac52c)(ar4,puVar3,a6,a7);
  if (iStack_b4 != 1) {
    if (iStack_b4 == 8) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_9c,in_fr3);
        dVar5 = (double)CONCAT44(DAT_8c0ac530,uStack_9c);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_98[0],uStack_9c);
        dVar5 = (double)CONCAT44(DAT_8c0ac534,DAT_8c0ac530);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar5 * dVar5;
      }
      uStack_9c = SUB84(dVar8,0);
      uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_a0,uStack_9c);
        dVar5 = (double)CONCAT44(DAT_8c0ac534,uStack_a0);
        uStack_9c = uVar2;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_9c,uStack_a0);
        dVar5 = (double)CONCAT44(PTR_rand_8c0ac538,DAT_8c0ac534);
        auStack_98[0] = uVar2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                 SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar5 * dVar5;
      }
      uStack_a0 = SUB84(dVar8,0);
      uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_a4,uStack_a0);
        dVar5 = (double)CONCAT44(DAT_8c0ac530,uStack_a4);
        uStack_a0 = uVar2;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_a0,uStack_a4);
        dVar5 = (double)CONCAT44(DAT_8c0ac534,DAT_8c0ac530);
        uStack_9c = uVar2;
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
      uVar2 = SUB84(dVar5,0);
      uVar1 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uStack_a4 = uVar1;
      if (in_FPSCR_SZ != '\0') {
        uStack_a4 = SUB84(dVar8,0);
        uStack_a0 = uVar1;
      }
      uVar1 = (*(code *)PTR_rand_8c0ac538)(iVar9,puVar3,a6,a7);
      uVar7 = SUB84(dVar8,0);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_9c,uVar2);
      }
      else {
        dVar8 = (double)CONCAT44(auStack_98[0],uStack_9c);
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar9 = (int)dVar8;
      }
      uStack_b8 = uVar1;
      iStack_d8 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0ac53c)(uVar1,iVar9,a6,a7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)iStack_d8,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iStack_d8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x28) = dVar8;
      }
      uStack_c0._4_4_ = (*(code *)PTR_rand_8c0ac538)(uVar1,iVar9,a6,a7);
      (**(code **)(DAT_8c0ac540 + *ar5))(ar5,iVar9,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        uStack_c0 = (double)CONCAT44(uStack_c0._4_4_,(int)((ulonglong)dVar8 >> 0x20));
        dVar5 = (double)CONCAT44(uStack_a0,SUB84(dVar8,0));
      }
      else {
        dVar5 = (double)CONCAT44(uStack_9c,uStack_a0);
        uStack_c0 = dVar8;
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        iVar9 = (int)dVar5;
      }
      uVar2 = uStack_c0._4_4_;
      iStack_dc = (*(code *)PTR_libgcc_divide_helper_01031c_8c0ac53c)(uStack_c0._4_4_,iVar9,a6,a7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)iStack_dc,uVar7);
      }
      else {
        dVar8 = (double)iStack_dc;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0ac544,(undefined4)uStack_c0);
      }
      else {
        dVar5 = (double)CONCAT44(_DAT_8c0ac548,DAT_8c0ac544);
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
      uVar1 = SUB84(dVar5,0);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar8;
      }
      uStack_c4 = (*(code *)PTR_rand_8c0ac538)(uVar2,iVar9,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(uStack_a4,uVar1);
      }
      else {
        dVar8 = (double)CONCAT44(uStack_a0,uStack_a4);
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar9 = (int)dVar8;
      }
      iStack_e0 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0ac53c)(uStack_c4,iVar9,a6,a7);
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)iStack_e0,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)iStack_e0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x30) = dVar8;
      }
    }
    else if (iStack_b4 == 0xb) {
      iStack_c8 = (**(code **)(_DAT_8c0ac548 + *ar5))(ar5,5,a6,a7);
      if (iStack_c8 == 0) {
        (*(code *)PTR_FUN_8c0ac54c)(ar4,2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = DAT_8c0ac550;
          *(undefined4 *)(ar4 + 0x2c) = DAT_8c0ac550;
          *(undefined4 *)(ar4 + 0x30) = DAT_8c0ac550;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = CONCAT44(DAT_8c0ac554,DAT_8c0ac550);
          *(ulonglong *)(ar4 + 0x2c) = CONCAT44(DAT_8c0ac554,DAT_8c0ac550);
          *(ulonglong *)(ar4 + 0x30) = CONCAT44(DAT_8c0ac554,DAT_8c0ac550);
        }
      }
      else {
        for (puVar3 = (undefined4 *)0x0;
            iStack_d4 = (**(code **)(_DAT_8c0ac548 + *ar5))(ar5,5,a6,a7), (int)puVar3 < iStack_d4;
            puVar3 = (undefined4 *)((int)puVar3 + 1)) {
          uStack_cc = (**(code **)(DAT_8c0ac554 + *ar5))(ar5,5,puVar3,a7);
          a7 = &uStack_b0;
          a6_00 = auStack_ac;
          a5_00 = auStack_a8;
          (*(code *)PTR_FUN_8c0ac558)(uStack_cc,a5_00,a6_00,a7);
          (*(code *)PTR_Vec3_set_xyz_8c0ac560)((int)&iStack_e0 + DAT_8c0ac55c,a5_00,a6_00,a7);
          (*(code *)PTR_vec3_copy_8c02b5fc_8c0ac564)
                    (auStack_68,(int)&iStack_e0 + DAT_8c0ac55c,a6_00,a7);
          puStack_e4 = auStack_78;
          (*(code *)PTR_FUN_8c0ac56c)((int)&puStack_e4 + DAT_8c0ac568,auStack_68,a6_00,a7);
          (*(code *)PTR_Vec3_ctor_copy_8c0ac574)((int)&iStack_e0 + DAT_8c0ac570,auStack_78,a6_00,a7)
          ;
          (*(code *)PTR_Vec3_dtor_8c0ac578)(auStack_78,0xffffffff,a6_00,a7);
          (*(code *)PTR_object_dtor_delete_8c0ac57c)(auStack_68,0xffffffff,a6_00,a7);
          uVar2 = 5;
          a6 = puVar3;
          uStack_d0 = (**(code **)(DAT_8c0ac554 + *ar5))(ar5,5,puVar3,a7);
          puStack_e4 = auStack_88;
          (*(code *)PTR_FUN_8c0ac580)(uStack_d0,uVar2,a6,a7);
          puStack_e4 = auStack_98;
          (*(code *)PTR_Vec3_add_8c0ac588)(auStack_88,(int)&puStack_e4 + DAT_8c0ac584,a6,a7);
          (*(code *)PTR_Vec3_assign_8c0ac58c)((int)&iStack_e0 + DAT_8c0ac508,auStack_98,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c0ac578)(auStack_98,0xffffffff,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c0ac578)(auStack_88,0xffffffff,a6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)&iStack_e0 + DAT_8c0ac508);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)((int)&iStack_e0 + DAT_8c0ac508);
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)((int)&iStack_e0 + DAT_8c0ac590);
          }
          else {
            *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)((int)&iStack_e0 + DAT_8c0ac590);
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)((int)&iStack_e0 + DAT_8c0ac594);
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = *(undefined8 *)((int)&iStack_e0 + DAT_8c0ac594);
          }
          (*(code *)PTR_Vec3_dtor_8c0ac578)((int)&iStack_e0 + DAT_8c0ac570,0xffffffff,a6,a7);
          (*(code *)PTR_object_dtor_delete_8c0ac57c)
                    ((int)&iStack_e0 + DAT_8c0ac55c,0xffffffff,a6,a7);
        }
      }
    }
  }
  (*(code *)PTR_Vec3_dtor_8c0ac578)((int)&iStack_e0 + DAT_8c0ac524,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c0ac578)((int)&iStack_e0 + DAT_8c0ac510._4_4_,0xffffffff,a6,a7);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0ac578)((int)&iStack_e0 + DAT_8c0ac508,0xffffffff,a6,a7);
  return uVar2;
}



/* FUN_8c0ac598 @ 8c0ac598 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac598(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0ac5a4;
  *(undefined1 *)(DAT_8c0ac5a4 + ar4) = *ar5;
  return iVar1;
}



/* FUN_8c0ac5a8 @ 8c0ac5a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ac5a8(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_8c0ac5b4 + ar4);
  *ar5 = cVar1;
  return (int)cVar1;
}



/* FUN_8c0ac5b8 @ 8c0ac5b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ac5b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ac660)(PTR_DAT_8c0ac65c,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0ac668;
  uVar2 = DAT_8c0ac664;
  (*(code *)PTR_global_list_push_8c0ac66c)(uVar1,PTR_Vec3_dtor_8c0ac668,DAT_8c0ac664,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ac660)(PTR_DAT_8c0ac670,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0ac668;
  uVar2 = DAT_8c0ac674;
  (*(code *)PTR_global_list_push_8c0ac66c)(uVar1,PTR_Vec3_dtor_8c0ac668,DAT_8c0ac674,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ac660)(PTR_DAT_8c0ac678,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0ac668;
  uVar2 = DAT_8c0ac67c;
  (*(code *)PTR_global_list_push_8c0ac66c)(uVar1,PTR_Vec3_dtor_8c0ac668,DAT_8c0ac67c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0ac660)(PTR_DAT_8c0ac680,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0ac668;
  uVar2 = DAT_8c0ac684;
  (*(code *)PTR_global_list_push_8c0ac66c)(uVar1,PTR_Vec3_dtor_8c0ac668,DAT_8c0ac684,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0ac688 = *(undefined4 *)DAT_8c0ac68c;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0ac688 = *DAT_8c0ac68c;
  }
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0ac660)(PTR_DAT_8c0ac698,puVar3,uVar2,ar7);
  uVar2 = (*(code *)PTR_global_list_push_8c0ac66c)(uVar2,PTR_Vec3_dtor_8c0ac668,DAT_8c0ac69c,ar7);
  return uVar2;
}



/* s_GRAPHICS_SQUIDLINE_0ac6a4 @ 8c0ac6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_SQUIDLINE_0ac6a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *a5;
  undefined2 *a5_00;
  undefined4 uVar2;
  undefined4 a7;
  int iVar3;
  
  a7 = 0xc;
  uVar2 = 1;
  uVar1 = 2;
  (*(code *)PTR_FUN_8c0ac980)(ar4,2,1,0xc);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c0ac984;
  (*(code *)PTR_FUN_8c0ac98c)(ar4 + DAT_8c0ac988,uVar1,uVar2,a7);
  (*(code *)PTR_FUN_8c0ac994)(ar4 + DAT_8c0ac990,uVar1,uVar2,a7);
  (*(code *)PTR_FUN_8c0ac99c)(ar4 + DAT_8c0ac998,uVar1,uVar2,a7);
  (*(code *)PTR_FUN_8c0ac9a4)(ar4 + DAT_8c0ac9a0,uVar1,uVar2,a7);
  (*(code *)PTR_FUN_8c0ac9b0)(ar4 + DAT_8c0ac9ac,PTR_FUN_8c0ac9a8,0,0x44);
  uVar2 = 0x44;
  uVar1 = 0;
  a5 = PTR_FUN_8c0ac9a8;
  (*(code *)PTR_FUN_8c0ac9b0)(ar4 + DAT_8c0ac9b4,PTR_FUN_8c0ac9a8,0,0x44);
  (*(code *)PTR_FUN_8c0ac9c0)(ar4 + 0xc,a5,uVar1,uVar2);
  *(undefined4 *)(DAT_8c0ac9c4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ac9c8 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ac9cc + ar4) = 0xffffffff;
  *(int *)(DAT_8c0ac9d0 + ar4) = ar4 + DAT_8c0ac988;
  *(int *)(DAT_8c0ac9d4 + ar4) = ar4 + DAT_8c0ac990;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(DAT_8c0ac9d8 + ar4 + iVar3 * 4) = 0;
    *(undefined4 *)(DAT_8c0ac9dc + ar4 + iVar3 * 4) = 0;
  }
  *(undefined1 *)(DAT_8c0ac9e0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ac9e4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ac9e8 + ar4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  (*(code *)PTR_FUN_8c0ac9f4)
            (ar4,*(undefined4 *)(DAT_8c0ac9f0 + *(int *)(DAT_8c0ac9ec + ar4)),ar4 + DAT_8c0ac998,
             uVar2);
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    *(undefined4 *)(DAT_8c0ac9f8 + iVar3 * 0xc + ar4) = 0;
  }
  uVar2 = 6;
  uVar1 = DAT_8c0ac9fc;
  (*(code *)PTR_FUN_8c0aca08)(ar4 + DAT_8c0aca04,ar4 + DAT_8c0aca00,DAT_8c0ac9fc,6);
  iVar3 = ar4 + DAT_8c0aca04;
  (**(code **)(*(int *)(ar4 + DAT_8c0ac9a0) + 8))((int *)(ar4 + DAT_8c0ac9a0),iVar3,uVar1,uVar2);
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0aca0c)(ar4 + DAT_8c0ac9a0,iVar3,uVar1,uVar2);
  iVar3 = (*(code *)PTR_FUN_8c0aca18)
                    (DAT_8c0aca14,PTR_s_GRAPHICS_COMMON_8c0ac9b8 + DAT_8c0aca10,
                     PTR_s_GRAPHICS_COMMON_8c0ac9b8 + 0x10,uVar1);
  if (iVar3 == -1) {
    (*(code *)PTR_report_error_message_8c0aca24)
              (PTR_s_GRAPHICS_COMMON_8c0ac9b8 + DAT_8c0aca20,
               PTR_s_GRAPHICS_COMMON_8c0ac9b8 + DAT_8c0aca1c,0,2);
  }
  *DAT_8c0aca28 = 0;
  DAT_8c0aca28[1] = 0;
  DAT_8c0aca28[2] = (short)DAT_8c0aca2c;
  DAT_8c0aca28[3] = 0;
  DAT_8c0aca28[4] = (short)DAT_8c0aca2c;
  DAT_8c0aca28[5] = (short)DAT_8c0aca2c;
  DAT_8c0aca28[6] = 0;
  DAT_8c0aca28[7] = (short)DAT_8c0aca2c;
  *DAT_8c0aca30 = 0xffffffff;
  DAT_8c0aca30[1] = 0xffffffff;
  DAT_8c0aca30[2] = 0xffffffff;
  DAT_8c0aca30[3] = 0xffffffff;
  *(undefined1 *)((int)DAT_8c0aca30 + 3) = 0;
  *(undefined1 *)((int)DAT_8c0aca30 + 7) = 0;
  *(undefined1 *)((int)DAT_8c0aca30 + 0xb) = 0;
  *(undefined1 *)((int)DAT_8c0aca30 + 0xf) = 0;
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    uVar2 = 4;
    (*(code *)PTR_FUN_8c0aca38)(iVar3 * 0x44 + ar4 + DAT_8c0ac9ac,PTR_DAT_8c0aca34,DAT_8c0aca30,4);
    uVar1 = 4;
    a5_00 = DAT_8c0aca28;
    (*(code *)PTR_FUN_8c0aca3c)(iVar3 * 0x44 + ar4 + DAT_8c0ac9ac,DAT_8c0aca28,4,uVar2);
    (*(code *)PTR_FUN_8c0aca40)(iVar3 * 0x44 + ar4 + DAT_8c0ac9ac,a5_00,uVar1,uVar2);
    (*(code *)PTR_FUN_8c0aca44)(iVar3 * 0x44 + ar4 + DAT_8c0ac9ac,a5_00,uVar1,uVar2);
    (*(code *)PTR_FUN_8c0aca48)(iVar3 * 0x44 + ar4 + DAT_8c0ac9ac,a5_00,uVar1,uVar2);
  }
  return ar4;
}



/* CAnimal_m0_0aca4c @ 8c0aca4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_0aca4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0acac0;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0acac8)(ar4 + DAT_8c0acac4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c0acad0)(ar4 + DAT_8c0acacc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12b2ac_m0_0afbcc_8c0acad8)(ar4 + DAT_8c0acad4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12b2e8_m0_0b5a88_8c0acae0)(ar4 + DAT_8c0acadc,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c0acae4)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0acae8)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* CAnimal_m2_0acaec @ 8c0acaec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_0acaec(int ar4,int *ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a4;
  int *a5;
  int *a7;
  
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m2_02573c_8c0accf4)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0accfc)(ar4 + DAT_8c0accf8,a5,ar6,a7);
  if ((((((char)uVar1 == '\x01') && (*(int *)(DAT_8c0acd00 + ar4) == 0)) &&
       (*(int *)(DAT_8c0acd04 + ar4) == 0)) &&
      ((*(int *)(DAT_8c0acd08 + ar4) == 0 && (*(int *)(DAT_8c0acd0c + ar4) == 0)))) &&
     (((*(int *)(DAT_8c0acd10 + ar4) == 0 &&
       ((*(int *)(DAT_8c0acd14 + ar4) == 0 && (*(int *)(DAT_8c0acd18 + ar4) == 0)))) &&
      (*(int *)(DAT_8c0acd1c + ar4) == 0)))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c0acd20)(ar4,ar5,ar6,a7);
  }
  if ((((*(int *)(DAT_8c0acd00 + ar4) != 0) || (*(int *)(DAT_8c0acd04 + ar4) != 0)) ||
      (*(int *)(DAT_8c0acd08 + ar4) != 0)) ||
     (((*(int *)(DAT_8c0acd0c + ar4) != 0 || (*(int *)(DAT_8c0acd10 + ar4) != 0)) ||
      ((*(int *)(DAT_8c0acd14 + ar4) != 0 ||
       ((*(int *)(DAT_8c0acd18 + ar4) != 0 || (*(int *)(DAT_8c0acd1c + ar4) != 0)))))))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c0acd24)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0accfc)(ar4 + DAT_8c0accf8,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_328_0acd68_8c0acd2c)(ar4 + DAT_8c0acd28,a5,ar6,a7);
    if (iVar2 != -1) {
      iVar2 = (*(code *)PTR_get_field_328_0acd68_8c0acd2c)(ar4 + DAT_8c0acd28,a5,ar6,a7);
      iVar3 = (**(code **)(**(int **)(DAT_8c0acd30 + ar4) + 0x44))
                        (*(int **)(DAT_8c0acd30 + ar4),a5,ar6,a7);
      if (iVar2 < iVar3) {
        if (*(char *)(DAT_8c0acd34 + ar4) == '\0') {
          *(undefined1 *)(DAT_8c0acd34 + ar4) = 1;
          *(undefined4 *)PTR_DAT_8c0acd38 = 0;
        }
        a5 = ar7;
        (*(code *)PTR_s_CSquidLine_0ad244_8c0acd3c)(ar4,ar7,ar5,a7);
        ar6 = ar5;
      }
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0accfc)(ar4 + DAT_8c0accf8,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_328_0acd68_8c0acd2c)(ar4 + DAT_8c0acd28,a5,ar6,a7);
    a4 = *(int **)(DAT_8c0acd30 + ar4);
    iVar3 = (**(code **)(*a4 + 0x44))(a4,a5,ar6,a7);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(DAT_8c0acd34 + ar4) == '\x01')) {
      *(undefined4 *)PTR_DAT_8c0acd38 = 1;
      *(undefined1 *)(DAT_8c0acd34 + ar4) = 0;
      (*(code *)PTR_FUN_8c0acd40)(a4,a5,ar6,a7);
    }
  }
  if (*(int *)(DAT_8c0acd44 + ar4) == 1) {
    *(undefined4 *)(DAT_8c0acd48 + ar4) = 1;
  }
  if (*(int *)(DAT_8c0acd4c + ar4) == 1) {
    if ((*(int *)(DAT_8c0acd50 + ar4) != 0) && (*(int *)(DAT_8c0acd54 + ar4) != 0)) {
      (**(code **)(DAT_8c0acd60 + *ar7))
                (ar7,*(undefined4 *)(DAT_8c0acd50 + ar4),*(undefined4 *)(DAT_8c0acd54 + ar4),
                 ar4 + DAT_8c0acd5c);
      *(undefined4 *)(DAT_8c0acd50 + ar4) = 0;
      *(undefined4 *)(DAT_8c0acd54 + ar4) = 0;
    }
    *(undefined4 *)(DAT_8c0acd4c + ar4) = 0;
  }
  return 1;
}



/* noop_0acd64 @ 8c0acd64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0acd64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* get_field_328_0acd68 @ 8c0acd68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_328_0acd68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0acd70 + ar4);
}



/* CAnimal_m3_0acd74 @ 8c0acd74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_0acd74(int ar4,int *ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a5;
  int *a7;
  
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m3_026078_8c0acf78)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0acf80)(ar4 + DAT_8c0acf7c,a5,ar6,a7);
  if ((((((char)uVar1 == '\x01') && (*(int *)(DAT_8c0acf84 + ar4) == 0)) &&
       (*(int *)(DAT_8c0acf88 + ar4) == 0)) &&
      ((*(int *)(DAT_8c0acf8c + ar4) == 0 && (*(int *)(DAT_8c0acf90 + ar4) == 0)))) &&
     (((*(int *)(DAT_8c0acf94 + ar4) == 0 &&
       ((*(int *)(DAT_8c0acf98 + ar4) == 0 && (*(int *)(DAT_8c0acf9c + ar4) == 0)))) &&
      (*(int *)(DAT_8c0acfa0 + ar4) == 0)))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c0acfa4)(ar4,ar5,ar6,a7);
  }
  if ((((*(int *)(DAT_8c0acf84 + ar4) != 0) || (*(int *)(DAT_8c0acf88 + ar4) != 0)) ||
      (*(int *)(DAT_8c0acf8c + ar4) != 0)) ||
     (((*(int *)(DAT_8c0acf90 + ar4) != 0 || (*(int *)(DAT_8c0acf94 + ar4) != 0)) ||
      ((*(int *)(DAT_8c0acf98 + ar4) != 0 ||
       ((*(int *)(DAT_8c0acf9c + ar4) != 0 || (*(int *)(DAT_8c0acfa0 + ar4) != 0)))))))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c0acfa8)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0acf80)(ar4 + DAT_8c0acf7c,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_328_0acd68_8c0acfb0)(ar4 + DAT_8c0acfac,a5,ar6,a7);
    if (iVar2 != -1) {
      iVar2 = (*(code *)PTR_get_field_328_0acd68_8c0acfb0)(ar4 + DAT_8c0acfac,a5,ar6,a7);
      iVar3 = (**(code **)(**(int **)(DAT_8c0acfb4 + ar4) + 0x44))
                        (*(int **)(DAT_8c0acfb4 + ar4),a5,ar6,a7);
      if (iVar2 < iVar3) {
        if (*(char *)(DAT_8c0acfb8 + ar4) == '\0') {
          *(undefined1 *)(DAT_8c0acfb8 + ar4) = 1;
          *(undefined4 *)PTR_DAT_8c0acfbc = 0;
        }
        a5 = ar7;
        (*(code *)PTR_s_CSquidLine_0ad244_8c0acfc0)(ar4,ar7,ar5,a7);
        ar6 = ar5;
      }
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0acf80)(ar4 + DAT_8c0acf7c,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_328_0acd68_8c0acfb0)(ar4 + DAT_8c0acfac,a5,ar6,a7);
    iVar3 = (**(code **)(**(int **)(DAT_8c0acfb4 + ar4) + 0x44))
                      (*(int **)(DAT_8c0acfb4 + ar4),a5,ar6,a7);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(DAT_8c0acfb8 + ar4) == '\x01')) {
      *(undefined4 *)PTR_DAT_8c0acfbc = 1;
      *(undefined1 *)(DAT_8c0acfb8 + ar4) = 0;
    }
  }
  if (*(int *)(DAT_8c0acfc4 + ar4) == 1) {
    *(undefined4 *)(DAT_8c0acfc8 + ar4) = 1;
  }
  if (*(int *)(DAT_8c0acfcc + ar4) == 1) {
    if ((*(int *)(DAT_8c0acfd0 + ar4) != 0) && (*(int *)(DAT_8c0acfd4 + ar4) != 0)) {
      (**(code **)(DAT_8c0acfe0 + *ar7))
                (ar7,*(undefined4 *)(DAT_8c0acfd0 + ar4),*(undefined4 *)(DAT_8c0acfd4 + ar4),
                 ar4 + DAT_8c0acfdc);
      *(undefined4 *)(DAT_8c0acfd0 + ar4) = 0;
      *(undefined4 *)(DAT_8c0acfd4 + ar4) = 0;
    }
    *(undefined4 *)(DAT_8c0acfcc + ar4) = 0;
  }
  return 1;
}



/* CAnimal_m4_0acfe4 @ 8c0acfe4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m4_0acfe4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(DAT_8c0ad04c + ar4) + 0x1c))
                    (*(int **)(DAT_8c0ad04c + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0ad050 @ 8c0ad050 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ad050(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c0ad0cc)(DAT_8c0ad0c8,3,2,ar7);
    *(undefined4 *)(DAT_8c0ad0d0 + ar4 + iVar2 * 4) = uVar1;
    uVar1 = (*(code *)PTR_s_CItemGLoader_RegistToLoad_0fed74_8c0ad0d8)
                      (*(undefined4 *)(DAT_8c0ad0d4 + ar5),
                       *(undefined4 *)(DAT_8c0ad0d0 + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(DAT_8c0ad0dc + ar4 + iVar2 * 4) = uVar1;
  }
  return 8;
}



/* FUN_8c0ad0e0 @ 8c0ad0e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ad0e0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  int iVar3;
  
  a5 = ar5;
  for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
    if (*(int *)(DAT_8c0ad200 + ar4 + iVar3 * 4) != 0) {
      a5 = *(int *)(DAT_8c0ad200 + ar4 + iVar3 * 4);
      iVar1 = (*(code *)PTR_FUN_8c0ad208)(*(undefined4 *)(DAT_8c0ad204 + ar5),a5,ar6,ar7);
      if (iVar1 == 1) {
        a5 = ar4 + iVar3 * 4 + DAT_8c0ad200;
        uVar2 = (*(code *)PTR_FUN_8c0ad20c)(*(undefined4 *)(DAT_8c0ad204 + ar5),a5,ar6,ar7);
        *(undefined4 *)(DAT_8c0ad210 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(DAT_8c0ad214 + ar4) != 0) {
    a5 = *(int *)(DAT_8c0ad214 + ar4);
    iVar3 = (*(code *)PTR_FUN_8c0ad208)(*(undefined4 *)(DAT_8c0ad204 + ar5),a5,ar6,ar7);
    if (iVar3 == 1) {
      a5 = ar4 + DAT_8c0ad214;
      uVar2 = (*(code *)PTR_FUN_8c0ad20c)(*(undefined4 *)(DAT_8c0ad204 + ar5),a5,ar6,ar7);
      *(undefined4 *)(DAT_8c0ad218 + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(DAT_8c0ad200 + ar4);
  if (((((iVar3 == 0) && (iVar3 = *(int *)(DAT_8c0ad21c + ar4), iVar3 == 0)) &&
       (iVar3 = *(int *)(DAT_8c0ad220 + ar4), iVar3 == 0)) &&
      ((iVar3 = *(int *)(DAT_8c0ad224 + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(DAT_8c0ad228 + ar4), iVar3 == 0)))) &&
     ((iVar3 = *(int *)(DAT_8c0ad22c + ar4), iVar3 == 0 &&
      ((iVar3 = *(int *)(DAT_8c0ad230 + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(DAT_8c0ad214 + ar4), iVar3 == 0)))))) {
    uVar2 = (*(code *)PTR_FUN_8c0ad238)(ar4 + DAT_8c0ad234,a5,ar6,ar7);
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (*(code *)PTR_FUN_8c0ad23c)(ar4 + DAT_8c0ad234,2,ar6,ar7);
    }
  }
  return iVar3;
}



/* s_CSquidLine_0ad244 @ 8c0ad240 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CSquidLine_0ad244(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = (*(code *)PTR_get_field_328_0acd68_8c0ad330)(ar4 + DAT_8c0ad32c,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0ad334 + ar4 + iVar1 * 4) == 0) {
    iVar1 = (*(code *)PTR_report_error_message_8c0ad350)
                      (PTR_s_GRAPHICS_COMMON_8c0ad344 + DAT_8c0ad34c,
                       PTR_s_GRAPHICS_COMMON_8c0ad344 + DAT_8c0ad348,1,2);
  }
  else {
    iVar2 = *(int *)(DAT_8c0ad334 + ar4 + iVar1 * 4);
    (**(code **)(DAT_8c0ad338 + *(int *)(iVar2 + 8)))(iVar2,ar6,a6,ar7);
    (*(code *)PTR_FUN_8c0ad33c)(*(undefined4 *)(DAT_8c0ad334 + ar4 + iVar1 * 4),ar6,a6,ar7);
    iVar2 = *(int *)(DAT_8c0ad334 + ar4 + iVar1 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,ar6,a6,ar7);
    (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(DAT_8c0ad334 + ar4 + iVar1 * 4),a6,ar7);
    *(undefined4 *)(DAT_8c0ad334 + ar4 + iVar1 * 4) = 0;
    iVar1 = DAT_8c0ad340;
    *(undefined4 *)(DAT_8c0ad340 + ar4) = 1;
  }
  return iVar1;
}



/* FUN_8c0ad354 @ 8c0ad354 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ad6ec) */
/* WARNING: Unknown calling convention */

int FUN_8c0ad354(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 a4;
  undefined4 a6;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar10;
  int a7;
  int iVar11;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_7c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [68];
  float fVar9;
  
  (*(code *)PTR_FUN_8c0ad5c0)(ar4 + DAT_8c0ad5bc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ad5c4)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ad5c8)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0ad5cc,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0ad5d0,DAT_8c0ad5cc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0ad5d0,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0ad5d4,DAT_8c0ad5d0);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    a7 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0ad5cc,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0ad5d0,DAT_8c0ad5cc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0ad5d0,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0ad5d4,DAT_8c0ad5d0);
  }
  if (in_FPSCR_PR == '\0') {
    iStack_7c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iStack_7c = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0ad5cc,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0ad5d0,DAT_8c0ad5cc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0ad5d0,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0ad5d4,DAT_8c0ad5d0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar9;
    dVar7 = (double)CONCAT44(fVar9,fVar6);
    iVar11 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar11 = (int)dVar7;
  }
  iVar5 = (int)((ulonglong)dVar7 >> 0x20);
  (*(code *)PTR_FUN_8c0ad5d4)(0,iVar11,iStack_7c,a7);
  (*(code *)PTR_FUN_8c0ad5d8)(0,iVar11,iStack_7c,a7);
  (*(code *)PTR_FUN_8c0ad5e0)(*(int *)(DAT_8c0ad5dc + ar4) + 0x78,iVar11,iStack_7c,a7);
  iVar1 = (*(code *)PTR_get_field_124_027930_8c0ad5e8)(ar4 + DAT_8c0ad5e4,iVar11,iStack_7c,a7);
  iVar3 = iVar11;
  if (iVar1 != 8) {
    uVar2 = (*(code *)PTR_FUN_8c0ad5ec)(*(int *)(DAT_8c0ad5dc + ar4) + 0x70,iVar11,iStack_7c,a7);
    iVar3 = (*(code *)PTR_FUN_8c0ad5f4)(*(undefined4 *)(DAT_8c0ad5f0 + ar4),iVar11,iStack_7c,a7);
    iVar3 = (*(code *)PTR_deref_u32_8c0ad5fc)
                      (*(int *)(DAT_8c0ad5f8 + *(int *)(DAT_8c0ad5dc + ar4)) + iVar3 * 4,iVar11,
                       iStack_7c,a7);
    iVar1 = (*(code *)PTR_FUN_8c0ad5f4)(*(undefined4 *)(DAT_8c0ad5f0 + ar4),iVar11,iStack_7c,a7);
    iVar1 = (*(code *)PTR_FUN_8c0ad604)
                      (*(int *)(DAT_8c0ad600 + *(int *)(DAT_8c0ad5dc + ar4)) + iVar1 * 4,iVar11,
                       iStack_7c,a7);
    (*(code *)PTR_FUN_8c0ad608)(*(undefined4 *)(DAT_8c0ad5f0 + ar4),iVar11,iStack_7c,a7);
    iStack_7c = iVar5;
    if (in_FPSCR_SZ == '\0') {
      iStack_7c = iVar1;
    }
    (*(code *)PTR_FUN_8c0ad60c)(uVar2,iVar3,iStack_7c,a7);
  }
  (*(code *)PTR_FUN_8c0ad610)(1,iVar3,iStack_7c,a7);
  (*(code *)PTR_FUN_8c0ad5c0)(PTR_DAT_8c0ad614,iVar3,iStack_7c,a7);
  if ((*(int *)(DAT_8c0ad618 + ar4) != 0) && (*(int *)(DAT_8c0ad61c + ar4) != 0)) {
    (*(code *)PTR_FUN_8c0ad5c4)(0,iVar3,iStack_7c,a7);
    (*(code *)PTR_FUN_8c0ad5c8)(0,iVar3,iStack_7c,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0ad5cc,*(undefined4 *)(ar4 + DAT_8c0ad62c));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0ad5d0,DAT_8c0ad5cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0ad5d0,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c0ad5d4,DAT_8c0ad5d0);
    }
    if (in_FPSCR_PR == '\0') {
      a7 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      a7 = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0ad5cc,*(undefined4 *)(ar4 + DAT_8c0ad630));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0ad5d0,DAT_8c0ad5cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0ad5d0,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c0ad5d4,DAT_8c0ad5d0);
    }
    if (in_FPSCR_PR == '\0') {
      iStack_7c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iStack_7c = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0ad5cc,*(undefined4 *)(ar4 + DAT_8c0ad634));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0ad5d0,DAT_8c0ad5cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0ad5d0,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c0ad5d4,DAT_8c0ad5d0);
    }
    if (in_FPSCR_PR == '\0') {
      iVar3 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar3 = (int)(dVar7 / dVar7);
    }
    (*(code *)PTR_FUN_8c0ad5d4)(0,iVar3,iStack_7c,a7);
    (*(code *)PTR_FUN_8c0ad638)(*(undefined4 *)(DAT_8c0ad61c + ar4),iVar3,iStack_7c,a7);
    (*(code *)PTR_FUN_8c0ad63c)(*(undefined4 *)(DAT_8c0ad618 + ar4),iVar3,iStack_7c,a7);
    (*(code *)PTR_FUN_8c0ad610)(1,iVar3,iStack_7c,a7);
  }
  iVar11 = *(int *)(DAT_8c0ad640 + ar4);
  if (iVar11 == 1) {
    (*(code *)PTR_FUN_8c0ad644)(auStack_50,iVar3,iStack_7c,a7);
    (*(code *)PTR_Vec3_ctor_copy_8c0ad648)(auStack_60,ar4 + 0x30,iStack_7c,a7);
    a6 = 0x1e;
    iVar11 = (*(code *)PTR_FUN_8c0ad64c)(ar4,auStack_60,0x1e,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0ad650)(auStack_60,0xffffffff,a6,a7);
    if (iVar11 == 1) {
      iVar11 = 0;
    }
    else {
      for (iVar5 = 0; iVar11 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar8 = CONCAT44(DAT_8c0ad7ac,*(undefined4 *)(iVar5 * 0x4c + DAT_8c0ad7a8 + 8));
        }
        else {
          uVar8 = CONCAT44(DAT_8c0ad7b0,DAT_8c0ad7ac);
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
          puVar4 = (undefined8 *)(iVar5 * 0x4c + DAT_8c0ad7a8 + 8);
          if (in_FPSCR_SZ == '\0') {
            uVar8 = CONCAT44(DAT_8c0ad7b0,(float)uVar8);
            *(undefined4 *)puVar4 = DAT_8c0ad7b0;
          }
          else {
            uVar8 = CONCAT44(PTR_FUN_8c0ad7b4,DAT_8c0ad7b0);
            *puVar4 = uVar8;
          }
        }
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        (*(code *)PTR_FUN_8c0ad7b4)(0,uVar2,a6,a7);
        a4 = 0;
        (*(code *)PTR_FUN_8c0ad7b8)(0,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0ad7bc)(a4,uVar2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c0ad7c0,uVar10);
        }
        else {
          dVar7 = (double)CONCAT44(DAT_8c0ad7c4,DAT_8c0ad7c0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c0ad7c4,fVar6);
        }
        else {
          dVar7 = (double)CONCAT44(DAT_8c0ad7c8,DAT_8c0ad7c4);
        }
        if (in_FPSCR_PR == '\0') {
          iVar11 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          iVar11 = (int)(dVar7 / dVar7);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c0ad7c8,(float)iVar11);
        }
        else {
          dVar7 = (double)CONCAT44(PTR_FUN_8c0ad7cc,DAT_8c0ad7c8);
        }
        if (in_FPSCR_PR == '\0') {
          iVar11 = (int)(SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20));
        }
        else {
          iVar11 = (int)(dVar7 - dVar7);
        }
        (*(code *)PTR_FUN_8c0ad7cc)(0,iVar11,a6,a7);
        (*(code *)PTR_FUN_8c0ad7d0)(0,iVar11,a6,a7);
        (*(code *)PTR_FUN_8c0ad7d8)(ar4 + DAT_8c0ad7d4,iVar11,a6,a7);
        uVar2 = *(undefined4 *)(iVar5 * 0x4c + DAT_8c0ad7a8 + 0x48);
        (*(code *)PTR_FUN_8c0ad7dc)(ar4 + DAT_8c0ad7d4,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0ad7e4)(iVar5 * 0x44 + ar4 + DAT_8c0ad7e0,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0ad7e8)(1,uVar2,a6,a7);
      }
    }
  }
  return iVar11;
}



/* FUN_8c0ad7ec @ 8c0ad7ec callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0ad7ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 a6;
  int iVar5;
  float fVar6;
  double dVar7;
  int a7;
  int iVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_3c;
  undefined1 auStack_20 [20];
  float fVar8;
  
  (*(code *)PTR_FUN_8c0adb60)(ar4 + DAT_8c0adb5c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0adb64)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0adb68)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0adb6c,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0adb70,DAT_8c0adb6c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0adb70,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0adb74,DAT_8c0adb70);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    a7 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0adb6c,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0adb70,DAT_8c0adb6c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0adb70,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0adb74,DAT_8c0adb70);
  }
  if (in_FPSCR_PR == '\0') {
    iStack_3c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iStack_3c = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0adb6c,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0adb70,DAT_8c0adb6c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0adb70,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0adb74,DAT_8c0adb70);
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar8;
    dVar7 = (double)CONCAT44(fVar8,fVar6);
    iVar9 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    iVar9 = (int)dVar7;
  }
  iVar5 = (int)((ulonglong)dVar7 >> 0x20);
  (*(code *)PTR_FUN_8c0adb74)(0,iVar9,iStack_3c,a7);
  (*(code *)PTR_FUN_8c0adb78)(0,iVar9,iStack_3c,a7);
  (*(code *)PTR_FUN_8c0adb80)(*(int *)(DAT_8c0adb7c + ar4) + 0x78,iVar9,iStack_3c,a7);
  iVar1 = (*(code *)PTR_get_field_124_027930_8c0adb88)(ar4 + DAT_8c0adb84,iVar9,iStack_3c,a7);
  iVar3 = iVar9;
  if (iVar1 != 8) {
    uVar2 = (*(code *)PTR_FUN_8c0adb8c)(*(int *)(DAT_8c0adb7c + ar4) + 0x70,iVar9,iStack_3c,a7);
    iVar3 = (*(code *)PTR_FUN_8c0adb94)(*(undefined4 *)(DAT_8c0adb90 + ar4),iVar9,iStack_3c,a7);
    iVar3 = (*(code *)PTR_deref_u32_8c0adb9c)
                      (*(int *)(DAT_8c0adb98 + *(int *)(DAT_8c0adb7c + ar4)) + iVar3 * 4,iVar9,
                       iStack_3c,a7);
    iVar1 = (*(code *)PTR_FUN_8c0adb94)(*(undefined4 *)(DAT_8c0adb90 + ar4),iVar9,iStack_3c,a7);
    iVar1 = (*(code *)PTR_FUN_8c0adba4)
                      (*(int *)(DAT_8c0adba0 + *(int *)(DAT_8c0adb7c + ar4)) + iVar1 * 4,iVar9,
                       iStack_3c,a7);
    (*(code *)PTR_FUN_8c0adba8)(*(undefined4 *)(DAT_8c0adb90 + ar4),iVar9,iStack_3c,a7);
    iStack_3c = iVar5;
    if (in_FPSCR_SZ == '\0') {
      iStack_3c = iVar1;
    }
    (*(code *)PTR_FUN_8c0adbac)(uVar2,iVar3,iStack_3c,a7);
  }
  (*(code *)PTR_FUN_8c0adbb0)(1,iVar3,iStack_3c,a7);
  (*(code *)PTR_FUN_8c0adb60)(PTR_DAT_8c0adbb4,iVar3,iStack_3c,a7);
  if ((*(int *)(DAT_8c0adbb8 + ar4) != 0) && (*(int *)(DAT_8c0adbbc + ar4) != 0)) {
    (*(code *)PTR_FUN_8c0adb64)(0,iVar3,iStack_3c,a7);
    (*(code *)PTR_FUN_8c0adb68)(0,iVar3,iStack_3c,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0adb6c,*(undefined4 *)(ar4 + DAT_8c0adbcc));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0adb70,DAT_8c0adb6c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0adb70,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c0adb74,DAT_8c0adb70);
    }
    if (in_FPSCR_PR == '\0') {
      a7 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      a7 = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0adb6c,*(undefined4 *)(ar4 + DAT_8c0adbd0));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0adb70,DAT_8c0adb6c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0adb70,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c0adb74,DAT_8c0adb70);
    }
    if (in_FPSCR_PR == '\0') {
      iStack_3c = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iStack_3c = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0adb6c,*(undefined4 *)(ar4 + DAT_8c0adbd4));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0adb70,DAT_8c0adb6c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0adb70,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c0adb74,DAT_8c0adb70);
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar9 = (int)(dVar7 / dVar7);
    }
    (*(code *)PTR_FUN_8c0adb74)(0,iVar9,iStack_3c,a7);
    (*(code *)PTR_FUN_8c0adbd8)(*(undefined4 *)(DAT_8c0adbbc + ar4),iVar9,iStack_3c,a7);
    (*(code *)PTR_FUN_8c0adbdc)(*(undefined4 *)(DAT_8c0adbb8 + ar4),iVar9,iStack_3c,a7);
    (*(code *)PTR_FUN_8c0adbb0)(1,iVar9,iStack_3c,a7);
  }
  iVar9 = *(int *)(DAT_8c0adbe0 + ar4);
  if (iVar9 == 1) {
    (*(code *)PTR_Vec3_ctor_copy_8c0adbe4)(auStack_20,ar4 + 0x30,iStack_3c,a7);
    a6 = 0x1e;
    iVar9 = (*(code *)PTR_FUN_8c0adbe8)(ar4,auStack_20,0x1e,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0adbec)(auStack_20,0xffffffff,a6,a7);
    if (iVar9 == 1) {
      iVar9 = 0;
    }
    else {
      for (iVar5 = 0; iVar9 = 10, iVar5 < 10; iVar5 = iVar5 + 1) {
        fVar6 = DAT_8c0adbf4;
        fVar8 = DAT_8c0adbf8;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = *(float *)(iVar5 * 0x4c + DAT_8c0adbf0 + 8);
          fVar8 = DAT_8c0adbf4;
        }
        if (in_FPSCR_PR == '\0' && fVar8 < fVar6) {
          pfVar4 = (float *)(iVar5 * 0x4c + DAT_8c0adbf0 + 8);
          if (in_FPSCR_SZ == '\0') {
            *pfVar4 = DAT_8c0adbf8;
          }
          else {
            *(ulonglong *)pfVar4 = CONCAT44(_DAT_8c0adbfc,DAT_8c0adbf8);
          }
        }
        (*(code *)PTR_FUN_8c0adb64)(0,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0adb68)(0,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0adb78)(0,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0adb80)(ar4 + _DAT_8c0adbfc,uVar2,a6,a7);
        uVar2 = *(undefined4 *)(iVar5 * 0x4c + DAT_8c0adbf0 + 0x48);
        (*(code *)PTR_FUN_8c0adc00)(ar4 + _DAT_8c0adbfc,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0adc08)(iVar5 * 0x44 + ar4 + DAT_8c0adc04,uVar2,a6,a7);
        (*(code *)PTR_FUN_8c0adbb0)(1,uVar2,a6,a7);
      }
    }
  }
  return iVar9;
}



/* FUN_8c0adc0c @ 8c0adc0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0adc0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  undefined4 uStack_20;
  
  iVar4 = *(int *)(DAT_8c0adcc4 + ar4);
  (*(code *)PTR_FUN_8c0adcc8)(iVar4 + 0x78,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0adccc)(iVar4 + 0x70,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0adcd4)(*(undefined4 *)(DAT_8c0adcd0 + ar4),ar5,ar6,ar7);
  a5 = (*(code *)PTR_deref_u32_8c0adcdc)(*(int *)(DAT_8c0adcd8 + iVar4) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0adcd4)(*(undefined4 *)(DAT_8c0adcd0 + ar4),ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c0adce4)(*(int *)(DAT_8c0adce0 + iVar4) + iVar2 * 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0adce8)(*(undefined4 *)(DAT_8c0adcd0 + ar4),ar5,ar6,ar7);
  uStack_20 = extraout_fr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = uVar3;
  }
  (*(code *)PTR_FUN_8c0adcec)(uVar1,a5,uStack_20,ar7);
  uVar1 = 0;
  if ((*(int *)(DAT_8c0adcf0 + ar4) != 0) && (uVar1 = 0, *(int *)(DAT_8c0adcf4 + ar4) != 0)) {
    (*(code *)PTR_FUN_8c0adcf8)(*(undefined4 *)(DAT_8c0adcf4 + ar4),a5,uStack_20,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0adcfc)(*(undefined4 *)(DAT_8c0adcf0 + ar4),a5,uStack_20,ar7);
  }
  return uVar1;
}



/* FUN_8c0add00 @ 8c0add00 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0add00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  int a7;
  int a6;
  int a5_00;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_20;
  float fVar7;
  
  iVar4 = *(int *)(DAT_8c0ade28 + ar4);
  (*(code *)PTR_FUN_8c0ade2c)(iVar4 + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ade30)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0ade34,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c0ade38,DAT_8c0ade34);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0ade38,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(_DAT_8c0ade3c,DAT_8c0ade38);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    a7 = (int)(dVar6 / dVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0ade34,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c0ade38,DAT_8c0ade34);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0ade38,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(_DAT_8c0ade3c,DAT_8c0ade38);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    a6 = (int)(dVar6 / dVar6);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(_DAT_8c0ade3c,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar6 = (double)CONCAT44(PTR_FUN_8c0ade40,_DAT_8c0ade3c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0ade34,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c0ade38,DAT_8c0ade34);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0ade38,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(_DAT_8c0ade3c,DAT_8c0ade38);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar5 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar5);
    a5_00 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    a5_00 = (int)dVar6;
  }
  uStack_20 = (undefined4)((ulonglong)dVar6 >> 0x20);
  (*(code *)PTR_FUN_8c0ade40)(0,a5_00,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c0ade44)(iVar4 + 0x70,a5_00,a6,a7);
  iVar2 = (*(code *)PTR_FUN_8c0ade4c)(*(undefined4 *)(DAT_8c0ade48 + ar4),a5_00,a6,a7);
  a5 = (*(code *)PTR_deref_u32_8c0ade54)(*(int *)(DAT_8c0ade50 + iVar4) + iVar2 * 4,a5_00,a6,a7);
  iVar2 = (*(code *)PTR_FUN_8c0ade4c)(*(undefined4 *)(DAT_8c0ade48 + ar4),a5_00,a6,a7);
  uVar3 = (*(code *)PTR_FUN_8c0ade5c)(*(int *)(DAT_8c0ade58 + iVar4) + iVar2 * 4,a5_00,a6,a7);
  (*(code *)PTR_FUN_8c0ade60)(*(undefined4 *)(DAT_8c0ade48 + ar4),a5_00,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = uVar3;
  }
  (*(code *)PTR_FUN_8c0ade64)(uVar1,a5,uStack_20,a7);
  if ((*(int *)(DAT_8c0ade68 + ar4) != 0) && (*(int *)(DAT_8c0ade6c + ar4) != 0)) {
    (*(code *)PTR_FUN_8c0ade70)(*(undefined4 *)(DAT_8c0ade6c + ar4),a5,uStack_20,a7);
    (*(code *)PTR_FUN_8c0ade78)(0,a5,uStack_20,a7);
    (*(code *)PTR_FUN_8c0ade7c)(*(undefined4 *)(DAT_8c0ade68 + ar4),a5,uStack_20,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0ade80)(1,a5,uStack_20,a7);
  return uVar1;
}



/* CAnimal_m7_0ade84 @ 8c0ade84 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 CAnimal_m7_0ade84(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *a5;
  undefined1 *a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  double in_dr0;
  double dVar5;
  undefined8 uVar6;
  double in_dr12;
  undefined4 uVar7;
  undefined8 in_dr14;
  double dVar8;
  undefined8 in_xd0;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar9;
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
    puVar2 = (undefined1 *)((int)&uStack_10 + 4);
    uStack_10 = CONCAT44(SUB84(in_dr12,0),(undefined4)uStack_10);
  }
  else {
    puVar2 = auStack_18;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(puVar2 + -8) = unaff_r13;
  *(undefined4 *)(puVar2 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar2 + -0x10) = in_PR;
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0ae08c)(puVar2 + -0x20,ar5,ar6,ar7);
  uVar7 = (undefined4)in_dr14;
  (*(code *)PTR_Vec3_ctor_zero_8c0ae08c)(puVar2 + -0x30,a5,ar6,ar7);
  (**(code **)(DAT_8c0ae090 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x34) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar7 = *(undefined4 *)(puVar2 + -0x34);
  }
  else {
    *(double *)(puVar2 + -0x34) = in_dr0;
  }
  (**(code **)(DAT_8c0ae094 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x38) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar8 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x38),uVar7);
  }
  else {
    *(double *)(puVar2 + -0x38) = in_dr0;
    dVar8 = *(double *)(puVar2 + -0x38);
  }
  uVar7 = (*(code *)PTR_get_field_124_027930_8c0ae09c)(ar4 + DAT_8c0ae098,a5,ar6,ar7);
  *(undefined4 *)(puVar2 + -0x3c) = uVar7;
  iVar1 = *(int *)(puVar2 + -0x3c);
  if (((iVar1 == 8) || (iVar1 == 5)) || (iVar1 == 6)) {
    dVar8 = (double)((ulonglong)dVar8 & 0xffffffff);
  }
  a6 = puVar2 + -0x30;
  (**(code **)(DAT_8c0ae0a0 + *ar5))(ar5,puVar2 + -0x20,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x30);
  }
  fVar4 = SUB84(dVar8,0);
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(in_dr0,0) - fVar4;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x20),fVar3);
  }
  else {
    dVar5 = *(double *)(puVar2 + -0x20);
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x30));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x30);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(puVar2 + -0x30);
    }
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_PR != '\0' || fVar3 <= SUB84(dVar5,0)) {
      *(int *)(puVar2 + -0x48) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(puVar2 + -0x30));
      }
      else {
        in_xd0 = *(undefined8 *)(puVar2 + -0x30);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) - fVar4;
      }
      else {
        fVar3 = SUB84(dVar5 - dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x30);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0ae0a4,fVar3);
      }
      else {
        dVar5 = (double)CONCAT44(_DAT_8c0ae0a8,DAT_8c0ae0a4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar2 + -0x48) + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(*(int *)(puVar2 + -0x48) + 0x30);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)(puVar2 + -0x48) + 0x30) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(*(int *)(puVar2 + -0x48) + 0x30) = in_xd0;
      }
    }
  }
  else {
    *(int *)(puVar2 + -0x44) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(puVar2 + -0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(puVar2 + -0x20);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x30);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0ae0a4,fVar3);
    }
    else {
      dVar5 = (double)CONCAT44(_DAT_8c0ae0a8,DAT_8c0ae0a4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar2 + -0x44) + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(*(int *)(puVar2 + -0x44) + 0x30);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar2 + -0x44) + 0x30) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x44) + 0x30) = in_xd0;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x38));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x38);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar5,0) - fVar4;
  }
  else {
    fVar3 = SUB84(dVar5 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x18),fVar3);
  }
  else {
    dVar5 = *(double *)(puVar2 + -0x18);
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x38);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(puVar2 + -0x28),fVar3);
    }
    else {
      dVar5 = *(double *)(puVar2 + -0x28);
    }
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_PR != '\0' || fVar3 <= SUB84(dVar5,0)) {
      *(int *)(puVar2 + -0x50) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(puVar2 + -0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(puVar2 + -0x28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) - fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 - dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0ae0a4,fVar4);
      }
      else {
        dVar5 = (double)CONCAT44(_DAT_8c0ae0a8,DAT_8c0ae0a4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar2 + -0x50) + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(*(int *)(puVar2 + -0x50) + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)(puVar2 + -0x50) + 0x38) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(*(int *)(puVar2 + -0x50) + 0x38) = in_xd0;
      }
    }
  }
  else {
    *(int *)(puVar2 + -0x4c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(fVar3,*(undefined4 *)(puVar2 + -0x18));
    }
    else {
      in_xd0 = *(undefined8 *)(puVar2 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x38);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0ae0a4,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(_DAT_8c0ae0a8,DAT_8c0ae0a4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar2 + -0x4c) + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(*(int *)(puVar2 + -0x4c) + 0x38);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = (float)((ulonglong)dVar5 >> 0x20);
      dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar2 + -0x4c) + 0x38) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x4c) + 0x38) = in_xd0;
    }
  }
  (**(code **)(_DAT_8c0ae0a8 + *ar5))(ar5,ar4 + 0x30,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x40) = (int)((ulonglong)dVar5 >> 0x20);
    in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(puVar2 + -0x40));
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar5,0));
  }
  else {
    *(double *)(puVar2 + -0x40) = dVar5;
    in_xd12 = *(undefined8 *)(puVar2 + -0x40);
    dVar5 = *(double *)(ar4 + 0x34);
  }
  fVar4 = (float)((ulonglong)dVar8 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar3 = (float)((ulonglong)dVar5 >> 0x20) - fVar4;
    dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0));
    bVar9 = SUB84(in_dr12,0) < fVar3;
  }
  else {
    dVar5 = dVar5 - dVar8;
    bVar9 = in_dr12 < dVar5;
  }
  if (bVar9) {
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(*(undefined4 *)(puVar2 + -0x2c),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      uVar6 = *(undefined8 *)(puVar2 + -0x2c);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar6 >> 0x20) <= (float)uVar6) {
      *(int *)(puVar2 + -0x58) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),*(undefined4 *)(puVar2 + -0x2c));
      }
      else {
        in_xd0 = *(undefined8 *)(puVar2 + -0x2c);
        dVar8 = *(double *)(ar4 + 0x34);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 - dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0ae0a4,fVar4);
      }
      else {
        dVar8 = (double)CONCAT44(_DAT_8c0ae0a8,DAT_8c0ae0a4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar2 + -0x58) + 0x34),fVar4);
      }
      else {
        dVar8 = *(double *)(*(int *)(puVar2 + -0x58) + 0x34);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar8 + dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar2 + -0x58) + 0x34) = fVar4;
      }
      else {
        *(undefined8 *)(*(int *)(puVar2 + -0x58) + 0x34) = in_xd0;
      }
    }
  }
  else {
    *(int *)(puVar2 + -0x54) = ar4;
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr12,0) + fVar4);
    }
    else {
      dVar8 = in_dr12 + dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                               SUB84(dVar8,0) - (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar8 = dVar8 - dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0ae0a4,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(_DAT_8c0ae0a8,DAT_8c0ae0a4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                               SUB84(dVar8,0) * (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar8 = dVar8 * dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar2 + -0x54) + 0x34),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(*(int *)(puVar2 + -0x54) + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar8,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar8 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x54) + 0x34) = fVar4;
    }
    else {
      *(undefined8 *)(*(int *)(puVar2 + -0x54) + 0x34) = in_xd12;
    }
  }
  (*(code *)PTR_Vec3_dtor_8c0ae0ac)(puVar2 + -0x30,0xffffffff,a6,ar7);
  uVar7 = (*(code *)PTR_Vec3_dtor_8c0ae0ac)(puVar2 + -0x20,0xffffffff,a6,ar7);
  return uVar7;
}



/* FUN_8c0ae0b0 @ 8c0ae0b0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ae0ba) */
/* WARNING: Unknown calling convention */

int FUN_8c0ae0b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_fr1;
  double dVar3;
  float fVar4;
  undefined8 in_dr14;
  undefined4 uVar6;
  double dVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = &uStack_4;
    _auStack_8 = CONCAT44((int)in_dr14,auStack_8);
  }
  else {
    puVar2 = (undefined4 *)auStack_8;
  }
  uVar6 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0ae140,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0ae144,DAT_8c0ae140);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c0ae13c + ar4) /
                                   (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c0ae13c + ar4)) / dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c0ae148,SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)PTR_DAT_8c0ae148;
  }
  fVar4 = SUB84(dVar5,0);
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c0ae144) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c0ae144) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c0ae148 + 4),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c0ae148 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c0ae14c) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c0ae14c) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c0ae148 + 8),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c0ae148 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c0ae150) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c0ae150) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c0ae148 + 0xc),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c0ae148 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c0ae154) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c0ae154) = dVar3;
  }
  *(int *)((int)puVar2 + -4) = ar4;
  *(undefined4 *)((int)puVar2 + -8) = *(undefined4 *)(DAT_8c0ae13c + *(int *)((int)puVar2 + -4));
  *(int *)(DAT_8c0ae13c + *(int *)((int)puVar2 + -4)) = *(int *)((int)puVar2 + -8) + 1;
  iVar1 = DAT_8c0ae158;
  if (DAT_8c0ae158 < *(int *)((int)puVar2 + -8) + 1) {
    *(undefined4 *)(DAT_8c0ae13c + ar4) = 0;
    *(int *)((int)puVar2 + -0xc) = ar4;
    iVar1 = 0x74;
    *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) =
         *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) & DAT_8c0ae15c;
  }
  return iVar1;
}



/* FUN_8c0ae160 @ 8c0ae160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ae160(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c0ae1a4)(ar4,ar5,ar6,ar7);
  iVar1 = *(int *)(DAT_8c0ae1a8 + ar4);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_s_GRAPHICS_SQUIDLINE_0ae54a_8c0ae1b8)
                      (ar5,DAT_8c0ae1b4,ar4 + DAT_8c0ae1b0,ar4 + DAT_8c0ae1ac);
  }
  return iVar1;
}



/* s_Squid_FreeGraphicResource_0ae1c0 @ 8c0ae1bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Squid_FreeGraphicResource_0ae1c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0ae240)(ar4,ar5,ar6,ar7);
  if ((*(int *)(DAT_8c0ae244 + ar4) != 0) && (*(int *)(DAT_8c0ae248 + ar4) != 0)) {
    ar6 = *(undefined4 *)(DAT_8c0ae248 + ar4);
    uVar2 = DAT_8c0ae24c;
    (*(code *)PTR_s_GRAPHICS_SQUIDLINE_0ae646_8c0ae250)(ar5,DAT_8c0ae24c,ar6,ar7);
  }
  iVar1 = (*(code *)PTR_get_field_4_0253e4_8c0ae258)(ar4 + DAT_8c0ae254,uVar2,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_report_error_message_8c0ae26c)
                      (PTR_s_GRAPHICS_COMMON_8c0ae260 + DAT_8c0ae268,
                       PTR_s_GRAPHICS_COMMON_8c0ae260 + DAT_8c0ae264,1,2);
  }
  else {
    uVar2 = (*(code *)PTR_s_Failed_s_015312_8c0ae25c)(ar4 + DAT_8c0ae254,uVar2,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c0ae270 @ 8c0ae270 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ae270(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_get_field_314_0b58d0_8c0ae2ac)(ar4 + DAT_8c0ae2a8,ar5,ar6,ar7);
  if (iVar1 != 0) {
    *(undefined4 *)(DAT_8c0ae2b0 + ar4) = 0;
  }
  uVar2 = (*(code *)PTR_FUN_8c0ae2b4)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0ae2b8 @ 8c0ae2b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ae2b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0ae2ec)(ar4,ar5,ar6,ar7);
  iVar1 = *(int *)(DAT_8c0ae2f0 + ar4);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0ae2f8)(ar4 + DAT_8c0ae2f4,3,ar6,ar7);
  }
  return iVar1;
}



/* s_Sq_Bone_Home_njd_0ae2fc @ 8c0ae2fc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_Sq_Bone_Home_njd_0ae2fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  undefined1 auStack_10 [16];
  
  *(undefined **)(DAT_8c0ae48c + 4) = PTR_PTR_8c0ae490;
  *(undefined **)(DAT_8c0ae48c + 8) = PTR_PTR_8c0ae494;
  *(undefined4 *)(DAT_8c0ae48c + 0xc) = *(undefined4 *)PTR_PTR_8c0ae498;
  *(undefined4 *)(DAT_8c0ae48c + 0x10) = 0;
  *(undefined4 *)(DAT_8c0ae48c + 0x14) = *(undefined4 *)PTR_PTR_8c0ae49c;
  *(undefined4 *)(DAT_8c0ae48c + 0x18) = *(undefined4 *)PTR_PTR_8c0ae4a0;
  *(undefined4 *)(DAT_8c0ae48c + 0x1c) = *(undefined4 *)PTR_PTR_8c0ae4a4;
  *(undefined4 *)(DAT_8c0ae48c + 0x20) = *(undefined4 *)PTR_PTR_8c0ae4a8;
  *(undefined4 *)(DAT_8c0ae48c + 0x24) = 7;
  *(undefined4 *)(DAT_8c0ae48c + 0x30) = DAT_8c0ae4ac;
  *(undefined4 *)(DAT_8c0ae4b0 + DAT_8c0ae48c) = DAT_8c0ae4b4;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae4b8) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae4b8) = CONCAT44(0x3f800000,in_fr1);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae4bc) = DAT_8c0ae4c0;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae4bc) = CONCAT44(DAT_8c0ae4c4,DAT_8c0ae4c0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae4c4) = DAT_8c0ae4c8;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae4c4) = CONCAT44(DAT_8c0ae4cc,DAT_8c0ae4c8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae4cc) = DAT_8c0ae4d0;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae4cc) = CONCAT44(DAT_8c0ae4d4,DAT_8c0ae4d0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae4d4) = DAT_8c0ae4d8;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae4d4) = CONCAT44(DAT_8c0ae4dc,DAT_8c0ae4d8);
  }
  *(undefined4 *)(DAT_8c0ae4dc + DAT_8c0ae48c) = DAT_8c0ae4e0;
  *(undefined2 *)(DAT_8c0ae4e4 + DAT_8c0ae48c) = 0x19;
  *(undefined4 *)(DAT_8c0ae4e8 + DAT_8c0ae48c) = DAT_8c0ae4ec;
  *(undefined2 *)(DAT_8c0ae4f0 + DAT_8c0ae48c) = 0x19;
  (*(code *)PTR_Vec3_set_xyz_8c0ae4f8)(auStack_10,ar5,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0ae500)(DAT_8c0ae48c + DAT_8c0ae4fc,auStack_10,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0ae504)(auStack_10,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_set_xyz_8c0ae4f8)(auStack_1c,uVar1,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0ae500)(DAT_8c0ae48c + _DAT_8c0ae514,auStack_1c,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0ae504)(auStack_1c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_set_xyz_8c0ae4f8)(auStack_28,uVar1,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0ae500)(DAT_8c0ae48c + _DAT_8c0ae524,auStack_28,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c0ae504)(auStack_28,0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae528) = (undefined4)DAT_8c0ae52c;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae528) =
         CONCAT44(DAT_8c0ae52c._4_4_,(undefined4)DAT_8c0ae52c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae52c._4_4_) = DAT_8c0ae534;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae52c._4_4_) = CONCAT44(DAT_8c0ae538,DAT_8c0ae534);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0ae53c,*(undefined4 *)(DAT_8c0ae48c + DAT_8c0ae538));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae538);
    dVar3 = (double)CONCAT44(DAT_8c0ae540,DAT_8c0ae53c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c0ae48c + DAT_8c0ae538) = fVar2;
  }
  else {
    *(undefined8 *)(DAT_8c0ae48c + DAT_8c0ae538) = in_xd0;
  }
  *DAT_8c0ae540 = 0xffff;
  *(undefined4 *)(DAT_8c0ae540 + 2) = 1;
  *(undefined4 *)(DAT_8c0ae540 + 4) = 0;
  *(undefined4 *)(DAT_8c0ae540 + 6) = 0;
  return 0;
}



/* s_GRAPHICS_SQUIDLINE_0ae54a @ 8c0ae544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_SQUIDLINE_0ae54a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0ae618)
                    (ar4,*(undefined4 *)PTR_PTR_8c0ae614,*(undefined4 *)PTR_PTR_8c0ae610,ar6);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0ae628)
              (PTR_s_GRAPHICS_COMMON_8c0ae61c + DAT_8c0ae624,
               PTR_s_GRAPHICS_COMMON_8c0ae61c + DAT_8c0ae620,1,2);
  }
  iVar1 = (*(code *)PTR_FUN_8c0ae62c)
                    (ar4,*(undefined4 *)PTR_PTR_8c0ae614,*(undefined4 *)PTR_PTR_8c0ae610,ar7);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0ae628)
              (PTR_s_GRAPHICS_COMMON_8c0ae61c + DAT_8c0ae630,
               PTR_s_GRAPHICS_COMMON_8c0ae61c + DAT_8c0ae620,1,2);
  }
  iVar1 = (*(code *)PTR_FUN_8c0ae638)
                    (ar4,PTR_s_GRAPHICS_COMMON_8c0ae61c + DAT_8c0ae634,
                     *(undefined4 *)PTR_PTR_8c0ae610,*ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_report_error_message_8c0ae628)
                      (PTR_s_GRAPHICS_COMMON_8c0ae61c + DAT_8c0ae63c,
                       PTR_s_GRAPHICS_COMMON_8c0ae61c + DAT_8c0ae620,1,2);
  }
  return iVar1;
}



/* s_GRAPHICS_SQUIDLINE_0ae646 @ 8c0ae640 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_SQUIDLINE_0ae646(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  
  (*(code *)PTR_FUN_8c0ae694)
            (ar4,*(undefined4 *)PTR_PTR_8c0ae690,*(undefined4 *)PTR_PTR_8c0ae68c,ar5);
  a6 = *(undefined4 *)PTR_PTR_8c0ae68c;
  a5 = *(undefined4 *)PTR_PTR_8c0ae690;
  uVar1 = (*(code *)PTR_FUN_8c0ae698)(ar4,a5,a6,ar5);
  if (ar6 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0ae69c)(ar6,a5,a6,ar5);
  }
  return uVar1;
}



/* s_Nautilus_0ae6a4 @ 8c0ae6a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_Nautilus_0ae6a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  int iVar1;
  char in_FPSCR_SZ;
  
  a5 = PTR_s_GRAPHICS_COMMON_8c0ae764 + DAT_8c0ae768;
  (*(code *)PTR_strcpy_8c0ae76c)(ar4,a5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 2;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = (undefined4)DAT_8c0ae770;
    *(undefined4 *)(ar4 + 0x20) = DAT_8c0ae770._4_4_;
    *(undefined4 *)(ar4 + 0x24) = DAT_8c0ae778;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = CONCAT44(DAT_8c0ae770._4_4_,(undefined4)DAT_8c0ae770);
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(DAT_8c0ae778,DAT_8c0ae770._4_4_);
    *(ulonglong *)(ar4 + 0x24) = CONCAT44(PTR_FUN_8c0ae77c,DAT_8c0ae778);
  }
  (*(code *)PTR_FUN_8c0ae77c)(ar4 + 0x2c,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = (undefined4)DAT_8c0ae780;
    *(undefined4 *)(ar4 + 0x30) = DAT_8c0ae780._4_4_;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = CONCAT44(DAT_8c0ae780._4_4_,(undefined4)DAT_8c0ae780);
    *(ulonglong *)(ar4 + 0x30) = CONCAT44(PTR_FUN_8c0ae788,DAT_8c0ae780._4_4_);
  }
  (*(code *)PTR_FUN_8c0ae788)(ar4 + 0x38,a5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x44) = 10;
  *(uint *)(ar4 + 0x48) = *(uint *)(ar4 + 0x48) | DAT_8c0ae78c;
  (*(code *)PTR_FUN_8c0ae790)(ar4 + 0x4c,a5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(DAT_8c0ae794 + ar4 + iVar1) = 0;
  }
  *(undefined1 *)(DAT_8c0ae794 + ar4) = 1;
  *(undefined1 *)(DAT_8c0ae798 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ae79c + ar4) = 0;
  iVar1 = DAT_8c0ae7a0;
  *(undefined4 *)(DAT_8c0ae7a0 + ar4) = 1;
  return iVar1;
}



/* FUN_8c0ae7a4 @ 8c0ae7a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ae7a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 4) = 6;
  *(undefined4 *)(ar4 + 8) = 0xc;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined1 *)(ar4 + 0x18) = 0;
  *(undefined1 *)(ar4 + 0x19) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined2 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x2a) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(iVar1 * 0xc + ar4 + 0x34) = (char)iVar1;
    *(undefined1 *)(iVar1 * 0xc + ar4 + 0x35) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 0x38) = 0;
    *(undefined1 *)(iVar1 * 0xc + ar4 + 0x3c) = 0;
  }
  return 6;
}



/* FUN_8c0ae84c @ 8c0ae84c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0aeade) */
/* WARNING: Removing unreachable block (ram,0x8c0aea0e) */
/* WARNING: Removing unreachable block (ram,0x8c0aea76) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ae84c(float ar4,undefined8 *ar5,undefined *ar6,int ar7)

{
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *a5;
  undefined4 uVar6;
  undefined *a6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
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
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  
  iVar7 = 0;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0ae888)((int)&fStack_198 + DAT_8c0ae884,ar5,ar6,ar7);
  uVar4 = 0;
  for (iVar10 = 0; iVar10 < 10; iVar10 = iVar10 + 1) {
    *(int *)((int)&fStack_198 + DAT_8c0ae8e0) = iVar10;
    a6 = (undefined *)0x4c;
    if (*(int *)(*(int *)((int)&fStack_198 + DAT_8c0ae8e0) * 0x4c + DAT_8c0ae8e4 + 0x40) == 0) {
      uVar4 = (*(code *)PTR_rand_8c0ae8e8)(uVar4,PTR_rand_8c0ae8e8,0x4c,ar7);
      *(undefined4 *)((int)&fStack_198 + DAT_8c0ae8ec) = uVar4;
      iVar9 = 0x1e;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0ae8f0)
                        (*(undefined4 *)((int)&fStack_198 + DAT_8c0ae8ec),0x1e,a6,ar7);
      *(undefined4 *)((int)&fStack_198 + DAT_8c0ae8f4) = uVar4;
      if (*(int *)((int)&fStack_198 + DAT_8c0ae8f4) == 0) {
        for (iVar8 = 0; iVar1 = DAT_8c0aec64, iVar8 < 4; iVar8 = iVar8 + 1) {
          *(int *)((int)&fStack_198 + DAT_8c0aec5c) = iVar10;
          *(int *)((int)&fStack_198 + DAT_8c0aec60) = iVar8;
          *(undefined1 *)
           (*(int *)((int)&fStack_198 + DAT_8c0aec5c) * 0x4c + DAT_8c0aec64 +
            *(int *)((int)&fStack_198 + DAT_8c0aec60) * 4 + 0x33) = 1;
          iVar9 = iVar1;
        }
        *(int *)((int)&fStack_198 + DAT_8c0aec68) = iVar10;
        *(undefined4 *)(*(int *)((int)&fStack_198 + DAT_8c0aec68) * 0x4c + DAT_8c0aec64 + 0x44) = 10
        ;
        *(int *)((int)&fStack_198 + DAT_8c0aec6c) = iVar10;
        *(undefined4 *)(*(int *)((int)&fStack_198 + DAT_8c0aec6c) * 0x4c + DAT_8c0aec64 + 0x40) = 1;
        (*(code *)PTR_FUN_8c0aec78)((int)&fStack_198 + DAT_8c0aec74,iVar9,a6,ar7);
        *(int *)((int)&fStack_198 + DAT_8c0aec7c) = iVar10;
        (*(code *)PTR_FUN_8c0aec80)
                  (*(int *)((int)&fStack_198 + DAT_8c0aec7c) * 0x4c + DAT_8c0aec64 + 0x24,
                   (int)&fStack_198 + DAT_8c0aec74,a6,ar7);
        iVar9 = (int)&fStack_198 + DAT_8c0aec74;
        (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0aec84)(iVar9,0xffffffff,a6,ar7);
        *(int *)((int)&fStack_198 + DAT_8c0aec88) = iVar10;
        puVar2 = (undefined8 *)(*(int *)((int)&fStack_198 + DAT_8c0aec88) * 0x4c + DAT_8c0aec64);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar2 = *(undefined4 *)ar5;
        }
        else {
          *puVar2 = *ar5;
        }
        *(int *)((int)&fStack_198 + DAT_8c0aec8c) = iVar10;
        puVar2 = (undefined8 *)(*(int *)((int)&fStack_198 + DAT_8c0aec8c) * 0x4c + DAT_8c0aec64 + 4)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar2 = *(undefined4 *)((int)ar5 + 4);
        }
        else {
          *puVar2 = *(undefined8 *)((int)ar5 + 4);
        }
        *(int *)((int)&fStack_198 + DAT_8c0aec90) = iVar10;
        puVar2 = (undefined8 *)(*(int *)((int)&fStack_198 + DAT_8c0aec90) * 0x4c + DAT_8c0aec64 + 8)
        ;
        a5 = ar5 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)puVar2 = *(undefined4 *)a5;
        }
        else {
          *puVar2 = *a5;
        }
        uVar4 = (*(code *)PTR_rand_8c0aec94)(iVar9,a5,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aec98) = uVar4;
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)
                          (*(undefined4 *)((int)&fStack_198 + DAT_8c0aec98),0x14,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aeca0) = uVar4;
        iVar9 = *(int *)((int)&fStack_198 + DAT_8c0aeca0);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0aeca4,(float)iVar9);
        }
        else {
          dVar12 = (double)CONCAT44(DAT_8c0aeca8,DAT_8c0aeca4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 / dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)&fStack_198 + DAT_8c0aeca8) = fVar11;
        }
        else {
          *(undefined8 *)((int)&fStack_198 + DAT_8c0aeca8) = in_xd0;
        }
        uVar4 = (*(code *)PTR_rand_8c0aec94)(PTR_rand_8c0aec94,iVar9,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecac) = uVar4;
        uVar6 = 2;
        uVar5 = *(undefined4 *)((int)&fStack_198 + DAT_8c0aecac);
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)(uVar5,2,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecb0) = uVar4;
        if (*(int *)((int)&fStack_198 + DAT_8c0aecb0) == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c0aecb4,*(undefined4 *)((int)&fStack_198 + DAT_8c0aeca8))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)((int)&fStack_198 + DAT_8c0aeca8);
            dVar12 = (double)CONCAT44(_DAT_8c0aecb8,DAT_8c0aecb4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar12 * dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)&fStack_198 + DAT_8c0aeca8) = fVar11;
          }
          else {
            *(undefined8 *)((int)&fStack_198 + DAT_8c0aeca8) = in_xd0;
          }
        }
        uVar4 = (*(code *)PTR_rand_8c0aec94)(uVar5,uVar6,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + _DAT_8c0aecb8) = uVar4;
        uVar6 = 0x14;
        uVar5 = *(undefined4 *)((int)&fStack_198 + _DAT_8c0aecb8);
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)(uVar5,0x14,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecbc) = uVar4;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0aeca4,(float)*(int *)((int)&fStack_198 + DAT_8c0aecbc));
        }
        else {
          dVar12 = (double)CONCAT44(DAT_8c0aeca8,DAT_8c0aeca4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 / dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)&fStack_198 + DAT_8c0aecc0) = fVar11;
        }
        else {
          *(undefined8 *)((int)&fStack_198 + DAT_8c0aecc0) = in_xd0;
        }
        uVar4 = (*(code *)PTR_rand_8c0aec94)(uVar5,uVar6,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecc4) = uVar4;
        uVar6 = 2;
        uVar5 = *(undefined4 *)((int)&fStack_198 + DAT_8c0aecc4);
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)(uVar5,2,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecc8) = uVar4;
        if (*(int *)((int)&fStack_198 + DAT_8c0aecc8) == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c0aecb4,*(undefined4 *)((int)&fStack_198 + DAT_8c0aecc0))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)((int)&fStack_198 + DAT_8c0aecc0);
            dVar12 = (double)CONCAT44(_DAT_8c0aecb8,DAT_8c0aecb4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar12 * dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)&fStack_198 + DAT_8c0aecc0) = fVar11;
          }
          else {
            *(undefined8 *)((int)&fStack_198 + DAT_8c0aecc0) = in_xd0;
          }
        }
        uVar4 = (*(code *)PTR_rand_8c0aec94)(uVar5,uVar6,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aeccc) = uVar4;
        uVar6 = 100;
        uVar5 = *(undefined4 *)((int)&fStack_198 + DAT_8c0aeccc);
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)(uVar5,100,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecd0) = uVar4;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c0aeca4,(float)*(int *)((int)&fStack_198 + DAT_8c0aecd0));
        }
        else {
          dVar12 = (double)CONCAT44(DAT_8c0aeca8,DAT_8c0aeca4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 / dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)&fStack_198 + DAT_8c0aecd4) = fVar11;
        }
        else {
          *(undefined8 *)((int)&fStack_198 + DAT_8c0aecd4) = in_xd0;
        }
        uVar4 = (*(code *)PTR_rand_8c0aec94)(uVar5,uVar6,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecd8) = uVar4;
        uVar5 = 2;
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)
                          (*(undefined4 *)((int)&fStack_198 + DAT_8c0aecd8),2,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aecdc) = uVar4;
        if (*(int *)((int)&fStack_198 + DAT_8c0aecdc) == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c0aecb4,*(undefined4 *)((int)&fStack_198 + DAT_8c0aecd4))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)((int)&fStack_198 + DAT_8c0aecd4);
            dVar12 = (double)CONCAT44(_DAT_8c0aecb8,DAT_8c0aecb4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar12 * dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)&fStack_198 + DAT_8c0aecd4) = fVar11;
          }
          else {
            *(undefined8 *)((int)&fStack_198 + DAT_8c0aecd4) = in_xd0;
          }
        }
        (*(code *)PTR_FUN_8c0aece8)((int)ar4 + DAT_8c0aece4,uVar5,a6,ar7);
        *(int *)((int)&fStack_198 + DAT_8c0aecec) = iVar10;
        (*(code *)PTR_Vec3_assign_8c0aecf0)
                  (*(int *)((int)&fStack_198 + DAT_8c0aecec) * 0x4c + DAT_8c0aec64 + 0x10,
                   (int)&fStack_198 + DAT_8c0aece0,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0aecf4)((int)&fStack_198 + DAT_8c0aece0,0xffffffff,a6,ar7);
        *(int *)((int)&fStack_198 + DAT_8c0aecf8) = iVar10;
        iVar9 = (int)&fStack_198 + DAT_8c0aeca8;
        (*(code *)PTR_FUN_8c0aecfc)
                  (*(int *)((int)&fStack_198 + DAT_8c0aecf8) * 0x4c + DAT_8c0aec64 + 0x10,iVar9,a6,
                   ar7);
        *(int *)((int)&fStack_198 + DAT_8c0aed00) = iVar10;
        iVar8 = *(int *)((int)&fStack_198 + DAT_8c0aed00) * 0x4c + DAT_8c0aec64 + 0x10;
        (*(code *)PTR_Vec3_length_8c0aed04)(iVar8,iVar9,a6,ar7);
        uVar4 = (*(code *)PTR_rand_8c0aec94)(iVar8,iVar9,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aed08) = uVar4;
        *(int *)((int)&fStack_198 + DAT_8c0aed0c) = iVar10;
        uVar5 = 10;
        uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)
                          (*(undefined4 *)((int)&fStack_198 + DAT_8c0aed08),10,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aed10) = uVar4;
        pdVar3 = (double *)(*(int *)((int)&fStack_198 + DAT_8c0aed0c) * 0x4c + DAT_8c0aec64 + 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44((float)*(int *)((int)&fStack_198 + DAT_8c0aed10),fVar11);
        }
        else {
          dVar12 = (double)*(int *)((int)&fStack_198 + DAT_8c0aed10);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)pdVar3 = (int)((ulonglong)dVar12 >> 0x20);
        }
        else {
          *pdVar3 = dVar12;
        }
        iVar9 = (int)ar4 + DAT_8c0aece4;
        uVar4 = (*(code *)PTR_get_field_314_0b58d0_8c0aed14)(iVar9,uVar5,a6,ar7);
        *(undefined4 *)((int)&fStack_198 + DAT_8c0aed18) = uVar4;
        if (*(int *)((int)&fStack_198 + DAT_8c0aed18) < 1) {
          a6 = PTR_rand_8c0aedfc;
          uVar4 = (*(code *)PTR_rand_8c0aedfc)
                            (iVar9,*(int *)((int)&fStack_198 + DAT_8c0aed18),PTR_rand_8c0aedfc,ar7);
          *(undefined4 *)((int)&fStack_198 + DAT_8c0aee00) = uVar4;
          *(int *)((int)&fStack_198 + DAT_8c0aee04) = iVar10;
          uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aee08)
                            (*(undefined4 *)((int)&fStack_198 + DAT_8c0aee00),3,a6,ar7);
          *(undefined4 *)((int)&fStack_198 + DAT_8c0aee0c) = uVar4;
          *(undefined4 *)(*(int *)((int)&fStack_198 + DAT_8c0aee04) * 0x4c + DAT_8c0aee10 + 0x48) =
               *(undefined4 *)((int)&fStack_198 + DAT_8c0aee0c);
        }
        else {
          uVar4 = (*(code *)PTR_rand_8c0aec94)(iVar9,PTR_rand_8c0aec94,a6,ar7);
          *(undefined4 *)((int)&fStack_198 + DAT_8c0aed1c) = uVar4;
          *(int *)((int)&fStack_198 + DAT_8c0aed20) = iVar10;
          uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0aec9c)
                            (*(undefined4 *)((int)&fStack_198 + DAT_8c0aed1c),6,a6,ar7);
          *(undefined4 *)((int)&fStack_198 + DAT_8c0aed24) = uVar4;
          a6 = *(undefined **)((int)&fStack_198 + DAT_8c0aed24);
          *(undefined **)(*(int *)((int)&fStack_198 + DAT_8c0aed20) * 0x4c + DAT_8c0aec64 + 0x48) =
               a6;
          uVar4 = (*(code *)PTR_get_field_124_027930_8c0aed28)
                            ((int)ar4 + DAT_8c0aece4,DAT_8c0aece4,a6,ar7);
          *(undefined4 *)((int)&fStack_198 + DAT_8c0aed2c) = uVar4;
          if ((*(int *)((int)&fStack_198 + DAT_8c0aed2c) == 2) &&
             (*(int *)((int)&fStack_198 + DAT_8c0aed80) = iVar10,
             *(int *)(*(int *)((int)&fStack_198 + DAT_8c0aed80) * 0x4c + DAT_8c0aed84 + 0x48) < 3))
          {
            *(int *)((int)&fStack_198 + DAT_8c0aed88) = iVar10;
            *(int *)((int)&fStack_198 + DAT_8c0aed8c) =
                 *(int *)((int)&fStack_198 + DAT_8c0aed88) * 0x4c + DAT_8c0aed84;
            ar7 = *(int *)((int)&fStack_198 + DAT_8c0aed8c);
            a6 = (undefined *)(*(int *)(*(int *)((int)&fStack_198 + DAT_8c0aed8c) + 0x48) + 3);
            *(undefined **)(ar7 + 0x48) = a6;
          }
        }
      }
    }
    *(int *)((int)&fStack_198 + DAT_8c0aee14) = iVar10;
    uVar4 = 0x4c;
    if (*(int *)(*(int *)((int)&fStack_198 + DAT_8c0aee14) * 0x4c + DAT_8c0aee10 + 0x40) == 1)
    break;
  }
  for (iVar10 = 0; iVar10 < 10; iVar10 = iVar10 + 1) {
    *(int *)((int)&fStack_198 + DAT_8c0aeea4) = iVar10;
    if (0 < *(int *)(*(int *)((int)&fStack_198 + DAT_8c0aeea4) * 0x4c + DAT_8c0aeea8 + 0x40)) {
      if (*(int *)(DAT_8c0aeeac + (int)ar4) < (int)ar6) {
        iStack_128 = iVar10 * 0x4c + DAT_8c0af0d0;
        *(int *)(iStack_128 + 0x40) =
             *(int *)(iStack_128 + 0x40) + *(int *)(iVar10 * 0x4c + DAT_8c0af0d0 + 0x44);
        iStack_130 = iVar10;
        iStack_12c = iVar10;
      }
      else {
        *(int *)((int)&fStack_198 + DAT_8c0aeeb0) = iVar10;
        if (1 < *(int *)(*(int *)((int)&fStack_198 + DAT_8c0aeeb0) * 0x4c + DAT_8c0aeea8 + 0x40)) {
          iStack_11c = iVar10 * 0x4c + DAT_8c0aeea8;
          a6 = (undefined *)0x40;
          *(int *)(iStack_11c + 0x40) =
               *(int *)(iStack_11c + 0x40) + *(int *)(iVar10 * 0x4c + DAT_8c0aeea8 + 0x44);
          iStack_124 = iVar10;
          iStack_120 = iVar10;
        }
      }
      iStack_134 = iVar10 * 0x4c + DAT_8c0af0d0;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0af0d4,*(undefined4 *)(iStack_134 + 0x24));
      }
      else {
        in_xd0 = *(undefined8 *)(iStack_134 + 0x24);
        dVar12 = (double)CONCAT44(_DAT_8c0af0d8,DAT_8c0af0d4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(iStack_134 + 0x24) = fVar11;
      }
      else {
        *(undefined8 *)(iStack_134 + 0x24) = in_xd0;
      }
      iStack_13c = iVar10 * 0x4c + DAT_8c0af0d0;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0af0d4,*(undefined4 *)(iStack_13c + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(iStack_13c + 0x28);
        dVar12 = (double)CONCAT44(_DAT_8c0af0d8,DAT_8c0af0d4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(iStack_13c + 0x28) = fVar11;
      }
      else {
        *(undefined8 *)(iStack_13c + 0x28) = in_xd0;
      }
      iStack_144 = iVar10 * 0x4c + DAT_8c0af0d0;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0af0d4,*(undefined4 *)(iStack_144 + 0x2c));
      }
      else {
        in_xd0 = *(undefined8 *)(iStack_144 + 0x2c);
        dVar12 = (double)CONCAT44(_DAT_8c0af0d8,DAT_8c0af0d4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(iStack_144 + 0x2c) = fVar11;
      }
      else {
        *(undefined8 *)(iStack_144 + 0x2c) = in_xd0;
      }
      iStack_150 = iVar10;
      iStack_14c = iVar10;
      iStack_148 = iVar10;
      iStack_140 = iVar10;
      iStack_138 = iVar10;
      (*(code *)PTR_Vec3_scale_8c0af0dc)
                (iVar10 * 0x4c + DAT_8c0af0d0 + 0x10,iVar10 * 0x4c + DAT_8c0af0d0 + 0x20,a6,ar7);
      iStack_154 = iVar10;
      (*(code *)PTR_FUN_8c0af0e0)
                (iVar10 * 0x4c + DAT_8c0af0d0,(int)&fStack_198 + _DAT_8c0af0d8,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0af0e4)((int)&fStack_198 + _DAT_8c0af0d8,0xffffffff,a6,ar7);
      iStack_158 = iVar10;
      if (DAT_8c0af0e8 <= *(int *)(iVar10 * 0x4c + DAT_8c0af0d0 + 0x40)) {
        iStack_15c = iVar10;
        *(int *)(iVar10 * 0x4c + DAT_8c0af0d0 + 0x40) = DAT_8c0af0e8;
        iStack_160 = iVar10;
        *(undefined4 *)(iVar10 * 0x4c + DAT_8c0af0d0 + 0x44) = 0xfffffff6;
      }
      iStack_164 = iVar10;
      if (*(int *)(iVar10 * 0x4c + DAT_8c0af0d0 + 0x40) < 1) {
        *(undefined4 *)(iVar10 * 0x4c + DAT_8c0af0d0 + 0x40) = 0;
        *(undefined4 *)(iVar10 * 0x4c + DAT_8c0af0d0 + 0x44) = 10;
        iStack_16c = iVar10;
        iStack_168 = iVar10;
        (*(code *)PTR_FUN_8c0af0f4)((int)&fStack_198 + DAT_8c0af0f0,0x4c,a6,ar7);
        iStack_170 = iVar10;
        (*(code *)PTR_FUN_8c0af0f8)
                  (iVar10 * 0x4c + DAT_8c0af0d0 + 0x24,(int)&fStack_198 + DAT_8c0af0f0,a6,ar7);
        (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0af0fc)
                  ((int)&fStack_198 + DAT_8c0af0f0,0xffffffff,a6,ar7);
      }
      for (iVar9 = 0; iVar9 < 4; iVar9 = iVar9 + 1) {
        iStack_174 = iVar10;
        iStack_178 = iVar9;
        iStack_17c = iVar10;
        *(char *)(iVar10 * 0x4c + DAT_8c0af158 + iVar9 * 4 + 0x33) =
             (char)*(undefined4 *)(iVar10 * 0x4c + DAT_8c0af158 + 0x40);
      }
    }
  }
  for (iVar10 = 0; iVar10 < 10; iVar10 = iVar10 + 1) {
    if (*(int *)(DAT_8c0af1b8 + (int)ar4) < (int)ar6) {
      ar7 = 4;
      a6 = (undefined *)(iVar10 * 0x4c + DAT_8c0af294 + 0x30);
      iStack_194 = iVar10;
      iStack_190 = iVar10;
      (*(code *)PTR_FUN_8c0af2a0)(iVar10 * 0x44 + (int)ar4 + DAT_8c0af29c,PTR_DAT_8c0af298,a6,4);
    }
    else {
      iStack_180 = iVar10;
      if (*(int *)(iVar10 * 0x4c + DAT_8c0af1bc + 0x40) < 2) {
        iVar7 = iVar7 + 1;
        *(undefined4 *)(iVar10 * 0x4c + DAT_8c0af1ec + 0x40) = 0;
        iStack_18c = iVar10;
      }
      else {
        ar7 = 4;
        a6 = (undefined *)(iVar10 * 0x4c + DAT_8c0af1bc + 0x30);
        iStack_188 = iVar10;
        iStack_184 = iVar10;
        (*(code *)PTR_FUN_8c0af1c8)(iVar10 * 0x44 + (int)ar4 + DAT_8c0af1c4,PTR_DAT_8c0af1c0,a6,4);
      }
    }
  }
  *(int *)(DAT_8c0af2a4 + (int)ar4) = *(int *)(DAT_8c0af2a4 + (int)ar4) + 1;
  if (iVar7 == 10) {
    *(undefined4 *)(DAT_8c0af2a8 + (int)ar4) = 0;
    *(undefined4 *)(DAT_8c0af2a4 + (int)ar4) = 0;
  }
  fStack_198 = ar4;
  *(uint *)((int)&fStack_198 + DAT_8c0af2ac) = (uint)(iVar7 == 10);
  (*(code *)PTR_Vec3_dtor_8c0af2b4)((int)&fStack_198 + DAT_8c0af2b0,0xffffffff,a6,ar7);
  return *(undefined4 *)((int)&fStack_198 + DAT_8c0af2ac);
}



/* FUN_8c0af2b8 @ 8c0af2b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0af2b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_14 [16];
  
  (*(code *)PTR_Vec3_ctor_zero_8c0af34c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0af34c)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0af350)(ar4 + 0x24,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0x14;
  *(undefined4 *)(ar4 + 0x48) = 0;
  (*(code *)PTR_FUN_8c0af358)(auStack_14,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0af35c)(ar4 + 0x24,auStack_14,ar6,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0af360)(auStack_14,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x30) = DAT_8c0af364;
  *(undefined4 *)(ar4 + 0x34) = DAT_8c0af364;
  *(undefined4 *)(ar4 + 0x38) = DAT_8c0af364;
  *(undefined4 *)(ar4 + 0x3c) = DAT_8c0af364;
  *(undefined1 *)(ar4 + 0x33) = 0;
  *(undefined1 *)(ar4 + 0x37) = 0;
  *(undefined1 *)(ar4 + 0x3b) = 0;
  *(undefined1 *)(ar4 + 0x3f) = 0;
  return ar4;
}



/* FUN_8c0af368 @ 8c0af368 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0af368(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0af3b8)(ar4 + 0x24,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0af3bc)(ar4 + 0x10,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0af3bc)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0af3c0)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0af3c4 @ 8c0af3c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af3c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(PTR_DAT_8c0af740,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af748;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af748,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(PTR_DAT_8c0af754,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af758;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af758,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(PTR_DAT_8c0af75c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af760;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af760,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(PTR_DAT_8c0af764,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0af750)(uVar2,PTR_Vec3_dtor_8c0af74c,DAT_8c0af768,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0af76c = *(undefined4 *)DAT_8c0af770;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0af76c = *DAT_8c0af770;
  }
  uVar2 = 0x4c;
  (*(code *)PTR_FUN_8c0af780)(DAT_8c0af77c,PTR_FUN_8c0af778,PTR_FUN_8c0af774,0x4c);
  (*(code *)PTR_global_list_push_8c0af750)(0,PTR_FUN_8c0af788,DAT_8c0af784,uVar2);
  uVar4 = 0x4c;
  (*(code *)PTR_FUN_8c0af780)(DAT_8c0af78c,PTR_FUN_8c0af778,PTR_FUN_8c0af774,0x4c);
  puVar3 = PTR_FUN_8c0af794;
  uVar2 = DAT_8c0af790;
  (*(code *)PTR_global_list_push_8c0af750)(0,PTR_FUN_8c0af794,DAT_8c0af790,uVar4);
  uVar1 = (*(code *)PTR_FUN_8c0af79c)(DAT_8c0af798,puVar3,uVar2,uVar4);
  puVar3 = PTR_FUN_8c0af7a4;
  uVar2 = DAT_8c0af7a0;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_FUN_8c0af7a4,DAT_8c0af7a0,uVar4);
  uVar2 = (*(code *)PTR_FUN_8c0af7ac)(DAT_8c0af7a8,puVar3,uVar2,uVar4);
  (*(code *)PTR_global_list_push_8c0af750)
            (uVar2,PTR_free_if_nonnull_wrap_03a454_8c0af7b4,DAT_8c0af7b0,uVar4);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0af780)
            (DAT_8c0af7c0,PTR_FUN_8c0af7bc,PTR_free_if_nonnull_wrap_0247b0_8c0af7b8,4);
  (*(code *)PTR_global_list_push_8c0af750)(0,PTR_FUN_8c0af7c8,DAT_8c0af7c4,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0af780)
            (DAT_8c0af7d4,PTR_FUN_8c0af7d0,PTR_free_if_nonnull_wrap_03a3dc_8c0af7cc,4);
  (*(code *)PTR_global_list_push_8c0af750)(0,PTR_FUN_8c0af7dc,DAT_8c0af7d8,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c0af780)
            (DAT_8c0af7e0,PTR_FUN_8c0af7bc,PTR_free_if_nonnull_wrap_0247b0_8c0af7b8,4);
  (*(code *)PTR_global_list_push_8c0af750)(0,PTR_FUN_8c0af7e8,DAT_8c0af7e4,uVar2);
  uVar4 = 4;
  (*(code *)PTR_FUN_8c0af780)
            (DAT_8c0af7ec,PTR_FUN_8c0af7d0,PTR_free_if_nonnull_wrap_03a3dc_8c0af7cc,4);
  puVar3 = PTR_FUN_8c0af7f4;
  uVar2 = DAT_8c0af7f0;
  (*(code *)PTR_global_list_push_8c0af750)(0,PTR_FUN_8c0af7f4,DAT_8c0af7f0,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af804,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af808;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af808,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af80c._4_4_,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af814;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af814,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af81c,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af820;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af820,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af824,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af828;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af828,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af830,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af834;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af834,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af838,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af83c;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af83c,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af840,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af844;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af844,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af848,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af84c;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af84c,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af858,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af85c;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af85c,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af860._4_4_,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af868;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af868,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af870,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af874;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af874,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af878,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af87c;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af87c,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af884,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af888;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af888,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af744)(DAT_8c0af890,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af74c;
  uVar2 = DAT_8c0af894;
  (*(code *)PTR_global_list_push_8c0af750)(uVar1,PTR_Vec3_dtor_8c0af74c,DAT_8c0af894,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0af92c)(DAT_8c0af928,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c0af934;
  uVar2 = DAT_8c0af930;
  (*(code *)PTR_global_list_push_8c0af938)(uVar1,PTR_Vec3_dtor_8c0af934,DAT_8c0af930,uVar4);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0af92c)(DAT_8c0af93c._4_4_,puVar3,uVar2,uVar4);
  (*(code *)PTR_global_list_push_8c0af938)(uVar2,PTR_Vec3_dtor_8c0af934,DAT_8c0af944,uVar4);
  uVar2 = DAT_8c0af95c;
  uVar1 = (*(code *)PTR_FUN_8c0af96c)(DAT_8c0af968,DAT_8c0af964,DAT_8c0af960,DAT_8c0af95c);
  uVar2 = (*(code *)PTR_global_list_push_8c0af938)
                    (uVar1,PTR_Class_129938_m0_017084_8c0af974,DAT_8c0af970,uVar2);
  return uVar2;
}



/* FUN_8c0af978 @ 8c0af978 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af978(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0af998)
                    (DAT_8c0af994,PTR_free_if_nonnull_wrap_03a3dc_8c0af990,4,3);
  return uVar1;
}



/* FUN_8c0af99c @ 8c0af99c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af99c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0af9bc)
                    (DAT_8c0af9b8,PTR_free_if_nonnull_wrap_0247b0_8c0af9b4,4,3);
  return uVar1;
}



/* FUN_8c0af9c0 @ 8c0af9c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af9c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0af9e0)
                    (DAT_8c0af9dc,PTR_free_if_nonnull_wrap_03a3dc_8c0af9d8,4,0x19);
  return uVar1;
}



/* FUN_8c0af9e4 @ 8c0af9e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0af9e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0afa04)
                    (DAT_8c0afa00,PTR_free_if_nonnull_wrap_0247b0_8c0af9fc,4,0x19);
  return uVar1;
}



/* FUN_8c0afa08 @ 8c0afa08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0afa08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0afa28)(DAT_8c0afa24,PTR_FUN_8c0afa20,0x4c,0x28);
  return uVar1;
}



/* FUN_8c0afa2c @ 8c0afa2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0afa2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c0afa4c)(DAT_8c0afa48,PTR_FUN_8c0afa44,0x4c,10);
  return uVar1;
}



/* FUN_8c0afa50 @ 8c0afa50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0afa50(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0afae0)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0afae4;
  (*(code *)PTR_Vec3_ctor_zero_8c0afaec)((int)ar4 + DAT_8c0afae8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0afaf4)((int)ar4 + DAT_8c0afaf0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0afafc)((int)ar4 + DAT_8c0afaf8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0afaec)((int)ar4 + DAT_8c0afb00,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0afaec)((int)ar4 + DAT_8c0afb04,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0afaec)((int)ar4 + DAT_8c0afb08,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0afaec)((int)ar4 + DAT_8c0afb0c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0afaec)((int)ar4 + DAT_8c0afb10,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0afaec)((int)ar4 + DAT_8c0afb14,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0afb18)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0afb1c @ 8c0afb1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0afb1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c0afb8c + ar4) = 0;
  *(undefined4 *)(DAT_8c0afb90 + ar4) = 0;
  *(undefined4 *)(DAT_8c0afb94 + ar4) = 0;
  (*(code *)PTR_FUN_8c0afb98)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0afb9c + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c0afba0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0afba4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0afba8 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0afbac) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0afbac) = (ulonglong)extraout_fr1;
  }
  (*(code *)PTR_vec3_clear_8c0afbb4)(ar4 + DAT_8c0afbb0,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0afbb8 + ar4) = 0;
  *DAT_8c0afbbc = 0;
  *(undefined **)(DAT_8c0afbc0 + ar4) = PTR_PTR_8c0afbc4;
  iVar1 = DAT_8c0afbc8;
  *(undefined4 *)(DAT_8c0afbc8 + ar4) = 9;
  return iVar1;
}



/* Class_12b2ac_m0_0afbcc @ 8c0afbcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b2ac_m0_0afbcc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0afc84;
    (*(code *)PTR_Vec3_dtor_8c0afc8c)((int)ar4 + DAT_8c0afc88,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0afc8c)((int)ar4 + DAT_8c0afc90,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0afc8c)((int)ar4 + DAT_8c0afc94,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0afc8c)((int)ar4 + DAT_8c0afc98,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0afc8c)((int)ar4 + DAT_8c0afc9c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0afc8c)((int)ar4 + DAT_8c0afca0,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_033978_8c0afca8)((int)ar4 + DAT_8c0afca4,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0afcb0)((int)ar4 + DAT_8c0afcac,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0afc8c)((int)ar4 + DAT_8c0afcb4,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c0afcb8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0afcbc)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12b2ac_m6_0afcc0 @ 8c0afcc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b2ac_m6_0afcc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  (*(code *)PTR_FUN_8c0afdb4)(ar4,DAT_8c0afdb0,ar6,ar7);
  *(undefined4 *)(DAT_8c0afdb8 + ar4) = ar5;
  if (1 < *(int *)(DAT_8c0afdbc + ar4)) {
    ar7 = 0;
    ar6 = 0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0afdc8)
              (ar4 + DAT_8c0afdc0._4_4_,0xe,0xffffffff,0);
  }
  uVar3 = 0x12;
  uVar1 = (*(code *)PTR_FUN_8c0afdcc)(ar4 + DAT_8c0afdc0._4_4_,0x12,ar6,ar7);
  piVar2 = (int *)(*(code *)PTR_deref_u32_8c0afdd0)(uVar1,uVar3,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(*piVar2 + 0x18) != 0) {
    uVar3 = 0x12;
    uVar1 = (*(code *)PTR_FUN_8c0afdcc)(ar4 + DAT_8c0afdc0._4_4_,0x12,ar6,ar7);
    uVar1 = (*(code *)PTR_deref_u32_8c0afdd0)(uVar1,uVar3,ar6,ar7);
    uVar5 = 1;
    puVar4 = PTR_DAT_8c0afdd4;
    (*(code *)PTR_FUN_8c0afdd8)(ar4 + DAT_8c0afdc0._4_4_,uVar1,PTR_DAT_8c0afdd4,1);
    uVar3 = 0x13;
    uVar1 = (*(code *)PTR_FUN_8c0afdcc)(ar4 + DAT_8c0afdc0._4_4_,0x13,puVar4,uVar5);
    uVar1 = (*(code *)PTR_deref_u32_8c0afdd0)(uVar1,uVar3,puVar4,uVar5);
    uVar5 = 1;
    puVar4 = PTR_DAT_8c0afdd4 + 0x18;
    (*(code *)PTR_FUN_8c0afdd8)(ar4 + DAT_8c0afdc0._4_4_,uVar1,puVar4,1);
    uVar3 = 0x14;
    uVar1 = (*(code *)PTR_FUN_8c0afdcc)(ar4 + DAT_8c0afdc0._4_4_,0x14,puVar4,uVar5);
    uVar1 = (*(code *)PTR_deref_u32_8c0afdd0)(uVar1,uVar3,puVar4,uVar5);
    uVar1 = (*(code *)PTR_FUN_8c0afdd8)(ar4 + DAT_8c0afdc0._4_4_,uVar1,PTR_DAT_8c0afdd4 + 0x30,1);
  }
  return uVar1;
}



/* Class_12b2ac_m5_0afddc @ 8c0afddc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12b2ac_m5_0afddc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  undefined8 uStack_1c;
  undefined8 uStack_10;
  
  if (*(int *)(DAT_8c0aff04 + ar4) == 0) {
    iVar1 = (*(code *)PTR_get_field_10_031590_8c0aff0c)(ar4 + DAT_8c0aff08,ar5,ar6,ar7);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    iVar2 = iVar1 + -1;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0aff14)(ar4 + DAT_8c0aff08,iVar2,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0aff1c)(ar4 + DAT_8c0aff08,iVar2,uVar3,uVar4);
    *(int *)(DAT_8c0aff04 + ar4) = *(int *)(DAT_8c0aff04 + ar4) + 1;
    (*(code *)PTR_FUN_8c0aff24)(ar4,iVar2,uVar3,uVar4);
    uStack_10 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = 0x1c;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c0aff28) = (int)uStack_10;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0aff28) = uStack_10;
    }
  }
  else if (*(int *)(DAT_8c0aff04 + ar4) == 1) {
    iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0aff30)(ar4 + DAT_8c0aff08,ar5,ar6,ar7);
    if (iVar1 == 7) {
      uVar4 = 100;
      uVar3 = 0;
      iVar2 = (*(code *)PTR_rand_range_8c0aff34)(ar4,0,100,ar7);
      iVar1 = DAT_8c0aff04;
      if (iVar2 < 0x1f) {
        *(int *)(DAT_8c0aff04 + ar4) = *(int *)(DAT_8c0aff04 + ar4) + 1;
      }
      else {
        (*(code *)PTR_FUN_8c0aff24)(ar4,uVar3,uVar4,ar7);
        uStack_1c = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          uStack_1c = CONCAT44(iVar2,(int)((ulonglong)in_dr0 >> 0x20));
        }
        iVar1 = 0x10;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c0aff28) = (int)uStack_1c;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0aff28) = uStack_1c;
        }
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0aff38)(ar4 + DAT_8c0aff08,ar5,ar6,ar7);
    iVar2 = DAT_8c0aff04;
    if (iVar1 == 1) {
      *(int *)(DAT_8c0aff04 + ar4) = *(int *)(DAT_8c0aff04 + ar4) + -1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



/* Class_12b2ac_m1_0aff3c @ 8c0aff3c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int Class_12b2ac_m1_0aff3c(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *a5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  double in_dr0;
  double dVar5;
  float fVar8;
  undefined8 uVar6;
  double in_dr2;
  double in_dr14;
  double dVar9;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar10;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  float fVar7;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = in_PR;
  *(undefined4 *)(DAT_8c0aff74 + ar4) = 0;
  puVar3 = ar5;
  if (*(int *)(DAT_8c0aff78 + ar4) == 5) {
    (*(code *)PTR_FUN_8c0aff84)(ar4,ar5,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c0b00c8)(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(DAT_8c0b00cc + ar4) == 8) {
    (*(code *)PTR_Vec3_ctor_xyz_8c0b00d4)
              ((undefined1 *)((int)puVar4 + DAT_8c0b00d0 + -0x15c),puVar3,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0b00d8)
                      (ar4 + 0x14,(undefined1 *)((int)puVar4 + DAT_8c0b00d0 + -0x15c),ar6,ar7);
    *(undefined4 *)((int)puVar4 + -300) = uVar1;
    *(undefined4 *)((int)puVar4 + -0x128) = *(undefined4 *)((int)puVar4 + -300);
    (*(code *)PTR_Vec3_dtor_8c0b00dc)
              ((undefined1 *)((int)puVar4 + DAT_8c0b00d0 + -0x15c),0xffffffff,ar6,ar7);
    a5 = (undefined *)0x0;
    if (*(int *)((int)puVar4 + -0x128) != 0) {
      (*(code *)PTR_vec3_copy_8c02b5fc_8c0b00e4)
                ((undefined1 *)((int)puVar4 + DAT_8c0b00cc + -0x15c),ar4 + DAT_8c0b00e0,ar6,ar7);
      *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b00e8 + -0x15c);
      (*(code *)PTR_FUN_8c0b00f0)
                (ar4 + 0x14,(undefined1 *)((int)puVar4 + DAT_8c0b00ec + -0x160),ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0b00f4)
                (ar4 + 0x14,(undefined1 *)((int)puVar4 + DAT_8c0b00e8 + -0x15c),ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b00dc)
                ((undefined1 *)((int)puVar4 + DAT_8c0b00e8 + -0x15c),0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c0b00f8)
                ((undefined1 *)((int)puVar4 + DAT_8c0b00cc + -0x15c),0xffffffff,ar6,ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c0b00e4)
                ((undefined1 *)((int)puVar4 + DAT_8c0b00fc + -0x15c),ar4 + DAT_8c0b00e0,ar6,ar7);
      *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b0100 + -0x15c);
      (*(code *)PTR_FUN_8c0b00f0)
                (ar4 + DAT_8c0b0108,(undefined1 *)((int)puVar4 + DAT_8c0b0104 + -0x160),ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0b00f4)
                (ar4 + DAT_8c0b0108,(undefined1 *)((int)puVar4 + DAT_8c0b0100 + -0x15c),ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0b00dc)
                ((undefined1 *)((int)puVar4 + DAT_8c0b0100 + -0x15c),0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c0b00f8)
                ((undefined1 *)((int)puVar4 + DAT_8c0b00fc + -0x15c),0xffffffff,ar6,ar7);
      a5 = PTR_FUN_8c0b010c;
      (*(code *)PTR_FUN_8c0b010c)(ar4 + DAT_8c0b00e0,PTR_FUN_8c0b010c,ar6,ar7);
    }
    (*(code *)PTR_vec3_clear_8c0b0114)(ar4 + DAT_8c0b0110,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c0b0118)(ar4,a5,ar6,ar7);
  }
  else {
    (*(code *)PTR_Class_129cbc_m1_031598_8c0b0230)(ar4,ar5,ar6,ar7);
  }
  if ((ar5[4] == 3) || (*(int *)(ar4 + 0x68) != 0)) {
    (*(code *)PTR_FUN_8c0b0234)(ar4,ar5[4],ar6,ar7);
    uVar1 = 1;
    (*(code *)PTR_FUN_8c0b0238)(*ar5,1,ar6,ar7);
    if (*(int *)(DAT_8c0b023c + ar4) != 2) {
      uVar1 = *(undefined4 *)(ar5[1] + 4);
      (*(code *)PTR_FUN_8c0b0240)(ar4,uVar1,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0b0248)(ar4,uVar1,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b024c + -0x15c);
    (*(code *)PTR_Vec3_scale_8c0b0250)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b0254 + -0x15c);
    (*(code *)PTR_Vec3_add_8c0b0260)
              ((undefined1 *)((int)puVar4 + DAT_8c0b025c + -0x160),ar4 + DAT_8c0b0258,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b0264 + -0x15c);
    (*(code *)PTR_Vec3_add_8c0b0260)
              ((undefined1 *)((int)puVar4 + DAT_8c0b0268 + -0x160),ar4 + 0x6c,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b026c + -0x15c);
    (*(code *)PTR_Vec3_add_8c0b0260)
              ((undefined1 *)((int)puVar4 + DAT_8c0b0274 + -0x160),ar4 + DAT_8c0b0270,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b0278 + -0x15c);
    (*(code *)PTR_Vec3_add_8c0b0260)
              ((undefined1 *)((int)puVar4 + DAT_8c0b0280 + -0x160),ar4 + DAT_8c0b027c,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b0284)
              (ar4 + 4,(undefined1 *)((int)puVar4 + DAT_8c0b0278 + -0x15c),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0288)
              ((undefined1 *)((int)puVar4 + DAT_8c0b0278 + -0x15c),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0288)
              ((undefined1 *)((int)puVar4 + DAT_8c0b026c + -0x15c),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0288)
              ((undefined1 *)((int)puVar4 + DAT_8c0b0264 + -0x15c),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0288)
              ((undefined1 *)((int)puVar4 + DAT_8c0b0254 + -0x15c),0xffffffff,ar6,ar7);
    puVar3 = (undefined4 *)0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b0288)
              ((undefined1 *)((int)puVar4 + DAT_8c0b024c + -0x15c),0xffffffff,ar6,ar7);
  }
  else {
    puVar3 = (undefined4 *)ar5[1];
    uVar1 = puVar3[1];
    *(undefined4 *)((int)puVar4 + -0x168) = *puVar3;
    *(undefined4 *)((int)puVar4 + -0x164) = uVar1;
    *(undefined4 *)((int)puVar4 + -0x160) = puVar3[2];
    ar7 = ar5[6];
    ar6 = ar5[3];
    uVar1 = (*(code *)PTR_FUN_8c0b0590)(ar4,*ar5,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0x130) = uVar1;
    (*(code *)PTR_FUN_8c0b0594)(*ar5,*(undefined4 *)((int)puVar4 + -0x130),ar6,ar7);
    uVar1 = *(undefined4 *)(ar5[1] + 4);
    (*(code *)PTR_FUN_8c0b0598)(ar4,uVar1,ar6,ar7);
    (*(code *)PTR_FUN_8c0b05a0)(ar4,uVar1,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b05a4 + -0x15c);
    (*(code *)PTR_Vec3_scale_8c0b05a8)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + DAT_8c0b05ac + -0x15c);
    (*(code *)PTR_Vec3_add_8c0b05b8)
              ((undefined1 *)((int)puVar4 + DAT_8c0b05b4 + -0x160),ar4 + DAT_8c0b05b0,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + -0xe4);
    (*(code *)PTR_Vec3_add_8c0b05b8)
              ((undefined1 *)((int)puVar4 + DAT_8c0b05bc + -0x160),ar4 + 0x6c,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + -0xf4);
    (*(code *)PTR_Vec3_add_8c0b05b8)((undefined1 *)((int)puVar4 + -0xe4),ar4 + DAT_8c0b05c0,ar6,ar7)
    ;
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + -0x104);
    (*(code *)PTR_Vec3_add_8c0b05b8)((undefined1 *)((int)puVar4 + -0xf4),ar4 + DAT_8c0b05c4,ar6,ar7)
    ;
    (*(code *)PTR_Vec3_assign_8c0b05c8)(ar4 + 4,(undefined1 *)((int)puVar4 + -0x104),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b05cc)((undefined1 *)((int)puVar4 + -0x104),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b05cc)((undefined1 *)((int)puVar4 + -0xf4),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b05cc)((undefined1 *)((int)puVar4 + -0xe4),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b05cc)
              ((undefined1 *)((int)puVar4 + DAT_8c0b05ac + -0x15c),0xffffffff,ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b05cc)
              ((undefined1 *)((int)puVar4 + DAT_8c0b05a4 + -0x15c),0xffffffff,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c0b05d0)(ar4 + DAT_8c0b05c4,uVar1,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_zero_8c0b05d8)
              ((undefined1 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c),uVar1,ar6,ar7);
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + -0x114);
    (*(code *)PTR_Vec3_add_8c0b05b8)(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b05c8)
              ((undefined1 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c),
               (undefined1 *)((int)puVar4 + -0x114),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b05cc)((undefined1 *)((int)puVar4 + -0x114),0xffffffff,ar6,ar7);
    (**(code **)(DAT_8c0b05dc + *(int *)ar5[6]))((int *)ar5[6],*(undefined4 *)ar5[1],ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x134) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + -0x134));
    }
    else {
      *(double *)((int)puVar4 + -0x134) = in_dr0;
      in_xd14 = *(double *)((int)puVar4 + -0x134);
    }
    if (((*(int *)(DAT_8c0b05e0 + ar4) != 8) && (*(int *)(DAT_8c0b05e0 + ar4) != 5)) &&
       (*(int *)(DAT_8c0b05e0 + ar4) != 6)) {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + DAT_8c0b05e4 + -0x15c),
                                  SUB84(in_dr2,0));
        dVar5 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c0b05e8);
      }
      else {
        in_dr2 = *(double *)((int)puVar4 + DAT_8c0b05e4 + -0x15c);
        in_xd0 = CONCAT44(DAT_8c0b05ec,DAT_8c0b05e8);
        dVar5 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = (float)((ulonglong)dVar5 >> 0x20) + SUB84(dVar5,0);
        dVar5 = (double)CONCAT44(fVar7,SUB84(dVar5,0));
        bVar10 = (float)((ulonglong)in_dr2 >> 0x20) < fVar7;
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar10 = in_dr2 < dVar5;
      }
      if (bVar10) {
        *(int *)((int)puVar4 + -0x140) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c0b05e8,SUB84(dVar5,0));
        }
        else {
          dVar5 = (double)CONCAT44(DAT_8c0b05ec,DAT_8c0b05e8);
        }
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20));
        }
        else {
          dVar9 = in_dr14 + dVar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + DAT_8c0b05e4 + -0x15c),
                                   SUB84(dVar5,0));
        }
        else {
          dVar5 = *(double *)((int)puVar4 + DAT_8c0b05e4 + -0x15c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                   SUB84(dVar9,0) - (float)((ulonglong)dVar5 >> 0x20));
        }
        else {
          dVar9 = dVar9 - dVar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0x140) + 8),
                                   SUB84(dVar5,0));
        }
        else {
          dVar5 = *(double *)(*(int *)((int)puVar4 + -0x140) + 8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar5,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)puVar4 + -0x140) + 8) = fVar7;
        }
        else {
          *(double *)(*(int *)((int)puVar4 + -0x140) + 8) = in_xd14;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c),SUB84(in_dr2,0))
      ;
      dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)((int)puVar4 + DAT_8c0b05d4 + -0x15c);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar5 >> 0x20) <
               SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar10 = dVar5 < dVar9 * dVar9;
    }
    if (bVar10) {
      *(int *)((int)puVar4 + -0x144) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c),fVar7);
      }
      else {
        dVar9 = *(double *)((int)puVar4 + DAT_8c0b05d4 + -0x15c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0x144) + 4),fVar7);
      }
      else {
        dVar9 = *(double *)(*(int *)((int)puVar4 + -0x144) + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar4 + -0x144) + 4) = fVar7;
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar4 + -0x144) + 4) = in_xd0;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)ar5[3],SUB84(dVar5,0));
      dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)ar5[3];
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
      dVar5 = dVar5 - dVar9 * dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c),fVar7);
    }
    else {
      dVar9 = *(double *)((int)puVar4 + DAT_8c0b05d4 + -0x15c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar10 = dVar5 < dVar9;
    }
    if (bVar10) {
      *(int *)((int)puVar4 + -0x148) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)ar5[3],SUB84(dVar5,0));
        dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)ar5[3];
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = (float)((ulonglong)dVar9 >> 0x20);
        fVar7 = SUB84(dVar9,0) * fVar8;
        dVar9 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar9 = dVar9 * dVar9;
        dVar5 = dVar5 - dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c));
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0x148) + 4),fVar7);
      }
      else {
        dVar9 = *(double *)(*(int *)((int)puVar4 + -0x148) + 4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 - dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar4 + -0x148) + 4) = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar4 + -0x148) + 4) = dVar9;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 4),SUB84(dVar5,0));
      dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(ar5[3] + 4);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
      dVar5 = dVar5 - dVar9 * dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + DAT_8c0b05e4 + -0x15c),fVar7);
    }
    else {
      dVar9 = *(double *)((int)puVar4 + DAT_8c0b05e4 + -0x15c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar10 = dVar5 < dVar9;
    }
    if (bVar10) {
      *(int *)((int)puVar4 + -0x14c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 4),SUB84(dVar5,0));
        dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(ar5[3] + 4);
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = (float)((ulonglong)dVar9 >> 0x20);
        fVar7 = SUB84(dVar9,0) * fVar8;
        dVar9 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar9 = dVar9 * dVar9;
        dVar5 = dVar5 - dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + DAT_8c0b05e4 + -0x15c));
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar4 + DAT_8c0b05e4 + -0x15c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0x14c) + 8),fVar7);
      }
      else {
        dVar9 = *(double *)(*(int *)((int)puVar4 + -0x14c) + 8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 - dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar4 + -0x14c) + 8) = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar4 + -0x14c) + 8) = dVar9;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + _DAT_8c0b05f0 + -0x15c),SUB84(dVar5,0))
      ;
      dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)((int)puVar4 + _DAT_8c0b05f0 + -0x15c);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar5 >> 0x20) <
               SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar10 = dVar5 < dVar9 * dVar9;
    }
    if (bVar10) {
      *(int *)((int)puVar4 + -0x150) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + _DAT_8c0b05f0 + -0x15c),fVar7);
      }
      else {
        dVar9 = *(double *)((int)puVar4 + _DAT_8c0b05f0 + -0x15c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0x150) + 0xc),fVar7);
      }
      else {
        dVar9 = *(double *)(*(int *)((int)puVar4 + -0x150) + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar4 + -0x150) + 0xc) = fVar7;
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar4 + -0x150) + 0xc) = in_xd0;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),SUB84(dVar5,0));
      dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar5 = *(double *)(ar5[3] + 8);
      dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
      dVar5 = dVar5 - dVar9 * dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + _DAT_8c0b05f0 + -0x15c),fVar7);
    }
    else {
      in_dr0 = *(double *)((int)puVar4 + _DAT_8c0b05f0 + -0x15c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar10 = dVar5 < in_dr0;
    }
    if (bVar10) {
      *(int *)((int)puVar4 + -0x154) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),SUB84(dVar5,0));
        dVar9 = (double)CONCAT44(DAT_8c0b05ec,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar5 = *(double *)(ar5[3] + 8);
        dVar9 = (double)CONCAT44(_DAT_8c0b05f0,DAT_8c0b05ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = (float)((ulonglong)dVar9 >> 0x20);
        fVar7 = SUB84(dVar9,0) * fVar8;
        dVar9 = (double)CONCAT44(fVar8,fVar7);
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - fVar7,SUB84(dVar5,0));
      }
      else {
        dVar9 = dVar9 * dVar9;
        dVar5 = dVar5 - dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + _DAT_8c0b05f0 + -0x15c));
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar4 + -0x154) + 0xc),fVar7);
      }
      else {
        in_dr0 = *(double *)(*(int *)((int)puVar4 + -0x154) + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - SUB84(in_dr0,0),
                                  SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar4 + -0x154) + 0xc) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar4 + -0x154) + 0xc) = in_dr0;
      }
    }
    puVar3 = (undefined4 *)0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0b05cc)
              ((undefined1 *)((int)puVar4 + DAT_8c0b05d4 + -0x15c),0xffffffff,ar6,ar7);
  }
  switch(*(undefined4 *)(DAT_8c0b05f4 + ar4)) {
  case 0:
    *(undefined1 **)((int)puVar4 + -0x160) = (undefined1 *)((int)puVar4 + -0x124);
    (*(code *)PTR_Vec3_add_8c0b066c)(*(undefined4 *)ar5[1],ar4 + 4,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0b0674)
              (ar4 + DAT_8c0b0670,(undefined1 *)((int)puVar4 + -0x124),ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0b0678)((undefined1 *)((int)puVar4 + -0x124),0xffffffff,ar6,ar7);
    puVar3 = *(undefined4 **)(ar5[1] + 4);
    (*(code *)PTR_vec3_copy_8c023d8c_8c0b0680)(ar4 + DAT_8c0b067c,puVar3,ar6,ar7);
    break;
  case 2:
    (*(code *)PTR_FUN_8c0b0718)(ar4 + DAT_8c0b0714,ar4 + DAT_8c0b0710,ar6,ar7);
    (*(code *)PTR_FUN_8c0b0720)(ar4 + DAT_8c0b0710,PTR_DAT_8c0b071c,ar6,ar7);
    (**(code **)(DAT_8c0b0724 + *(int *)ar5[6]))((int *)ar5[6],ar4 + DAT_8c0b0714,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x138) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x138) = in_dr0;
    }
    puVar3 = (undefined4 *)(ar4 + DAT_8c0b0728);
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(*(undefined4 *)((int)puVar4 + -0x138),*puVar3);
    }
    else {
      uVar6 = *(undefined8 *)((int)puVar4 + -0x138);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
      (**(code **)(DAT_8c0b0724 + *(int *)ar5[6]))((int *)ar5[6],ar4 + DAT_8c0b0714,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x13c) = (int)((ulonglong)uVar6 >> 0x20);
      }
      else {
        *(undefined8 *)((int)puVar4 + -0x13c) = uVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0b0728) = *(undefined4 *)((int)puVar4 + -0x13c);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0b0728) = *(undefined8 *)((int)puVar4 + -0x13c);
      }
      *(int *)((int)puVar4 + -0x158) = ar4;
      puVar3 = *(undefined4 **)((int)puVar4 + -0x158);
      *(int *)(DAT_8c0b072c + (int)puVar3) =
           *(int *)(DAT_8c0b072c + *(int *)((int)puVar4 + -0x158)) + 1;
    }
    break;
  case 3:
    *(undefined4 *)(DAT_8c0b0770 + ar4) = 1;
    *(int *)((int)puVar4 + -0x15c) = ar4;
    puVar3 = *(undefined4 **)((int)puVar4 + -0x15c);
    *(int *)(DAT_8c0b0774 + (int)puVar3) =
         *(int *)(DAT_8c0b0774 + *(int *)((int)puVar4 + -0x15c)) + 1;
  }
  (*(code *)PTR_vec3_clear_8c0b077c)(ar4 + DAT_8c0b0778,puVar3,ar6,ar7);
  iVar2 = DAT_8c0b0780;
  *(undefined4 *)(DAT_8c0b0780 + ar4) = 0;
  return iVar2;
}


