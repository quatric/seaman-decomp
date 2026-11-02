/* Seaman (USA) region 0x8c040000-0x8c050000 (Ghidra decompiler) */

/* ret_const_0_046674 @ 8c046674 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_046674(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_04667c @ 8c04667c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_04667c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c046684 @ 8c046684 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c046762 */
/* WARNING: Switch with 1 destination removed at 0x8c0467fa */
/* WARNING: Switch with 1 destination removed at 0x8c046830 */
/* WARNING: Switch with 1 destination removed at 0x8c04683e */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c046684(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  undefined *a6;
  undefined *a7;
  undefined4 unaff_r8;
  int iVar3;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  float fVar5;
  double dVar6;
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
  *(undefined4 *)(puVar4 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar4 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar4 + -0x20) = in_PR;
  iVar1 = -DAT_8c04676c;
  *(undefined4 *)(puVar4 + iVar1 + -0x14) = ar6;
  iVar3 = *(int *)(puVar4 + DAT_8c046770 + iVar1 + -0x20);
  *(undefined4 *)(puVar4 + DAT_8c046778 + iVar1 + -0x20) = 1;
  iVar3 = iVar3 + 8;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c04677c,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c046780,DAT_8c04677c);
  }
  a5 = ar4 + 0x48;
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fVar5 = (float)*(undefined8 *)(ar4 + 0x48);
  }
  (*(code *)PTR_FUN_8c046788)(puVar4 + DAT_8c046784 + iVar1 + -0x20,a5,iVar3,ar7);
  (*(code *)PTR_FUN_8c046788)(puVar4 + DAT_8c04678c + iVar1 + -0x20,a5,iVar3,ar7);
  (*(code *)PTR_FUN_8c046794)(puVar4 + DAT_8c046790 + iVar1 + -0x20,a5,iVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar4 + DAT_8c046798 + iVar1 + -0x20) = 0;
  }
  else {
    *(ulonglong *)(puVar4 + DAT_8c046798 + iVar1 + -0x20) = (ulonglong)(uint)fVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar4 + DAT_8c04679c + iVar1 + -0x20) = 0;
  }
  else {
    *(ulonglong *)(puVar4 + DAT_8c04679c + iVar1 + -0x20) = (ulonglong)(uint)fVar5;
  }
  a6 = PTR_Vec3_assign_8c0467a4;
  (*(code *)PTR_Vec3_assign_8c0467a4)(ar4 + DAT_8c0467a0,ar4 + 0x14,PTR_Vec3_assign_8c0467a4,ar7);
  if (*(int *)(DAT_8c0467a8 + ar4) < 1) {
    if (*(int *)(DAT_8c046804 + ar4) == 0) {
      *(undefined4 *)(DAT_8c046858 + ar4) = 0;
      iVar3 = *(int *)(DAT_8c04685c + ar4);
      if ((iVar3 < 0x18) && (-1 < iVar3)) {
                    /* WARNING: Could not recover jumptable at 0x8c046852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_LAB_8c046860)[iVar3])();
        return uVar2;
      }
      *(undefined4 *)(puVar4 + DAT_8c048850 + iVar1 + -0x20) = 1;
      *(undefined **)(puVar4 + iVar1 + -0x18) = PTR_free_if_nonnull_wrap_102790_8c048858;
      (**(code **)(puVar4 + iVar1 + -0x18))(puVar4 + DAT_8c048854 + iVar1 + -0x20,0xffffffff,a6,ar7)
      ;
      *(undefined4 *)(puVar4 + iVar1 + -0x20) = 0xffffffff;
      a7 = PTR_free_if_nonnull_wrap_102790_8c048858;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c048858)
                (puVar4 + DAT_8c04885c + iVar1 + -0x20,*(undefined4 *)(puVar4 + iVar1 + -0x20),a6,
                 PTR_free_if_nonnull_wrap_102790_8c048858);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c048858)
                (puVar4 + DAT_8c048860 + iVar1 + -0x20,0xffffffff,a6,a7);
      *(undefined4 *)(puVar4 + iVar1 + -0x1c) =
           *(undefined4 *)(puVar4 + DAT_8c048850 + iVar1 + -0x20);
      uVar2 = *(undefined4 *)(puVar4 + iVar1 + -0x1c);
    }
    else {
      *(undefined4 *)(puVar4 + DAT_8c046808 + iVar1 + -0x20) = 0;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c046810)
                (puVar4 + DAT_8c04680c + iVar1 + -0x20,0xffffffff,a6,ar7);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c046810)
                (puVar4 + DAT_8c046814 + iVar1 + -0x20,0xffffffff,a6,ar7);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c046810)
                (puVar4 + DAT_8c046818 + iVar1 + -0x20,0xffffffff,a6,ar7);
      uVar2 = *(undefined4 *)(puVar4 + DAT_8c046808 + iVar1 + -0x20);
    }
  }
  else {
    *(undefined4 *)(puVar4 + DAT_8c0467ac + iVar1 + -0x20) = 0;
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0467b0)
              (puVar4 + DAT_8c046790 + iVar1 + -0x20,0xffffffff,a6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0467b0)
              (puVar4 + DAT_8c04678c + iVar1 + -0x20,0xffffffff,a6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0467b0)
              (puVar4 + DAT_8c046784 + iVar1 + -0x20,0xffffffff,a6,ar7);
    uVar2 = *(undefined4 *)(puVar4 + DAT_8c0467ac + iVar1 + -0x20);
  }
  return uVar2;
}



/* FUN_8c048868 @ 8c048868 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c048868(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 a6;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  ulonglong in_dr0;
  ulonglong uVar7;
  double dVar8;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined *puStack_e4;
  int aiStack_e0 [4];
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [80];
  
  uVar4 = *(undefined4 *)((int)aiStack_e0 + DAT_8c0488e0);
  uVar5 = 1;
  uStack_80 = 1;
  (*(code *)PTR_FUN_8c0488e8)((int)aiStack_e0 + DAT_8c0488e4,ar5,ar6,ar7);
  iVar2 = ar4 + 0x14;
  (*(code *)PTR_Vec3_assign_8c0488f0)(ar4 + DAT_8c0488ec,iVar2,ar6,ar7);
LAB_8c0488bc:
  fVar6 = (float)in_dr0;
  switch(*(undefined4 *)(DAT_8c0488f4 + ar4)) {
  case 0:
    iStack_88 = (*(code *)PTR_FUN_8c048948)(ar4,iVar2,ar6,ar7);
    if (iStack_88 == 0) {
      *(int *)(DAT_8c04894c + ar4) = *(int *)(DAT_8c04894c + ar4) + 1;
      iStack_cc = ar4;
    }
    break;
  case 1:
    iStack_8c = (*(code *)PTR_get_field_1c_026dd8_8c048994)(ar4 + DAT_8c048990,iVar2,ar6,ar7);
    if ((iStack_8c != 0x15) &&
       (iStack_90 = (*(code *)PTR_get_field_1c_026dd8_8c048994)(ar4 + DAT_8c048990,iVar2,ar6,ar7),
       iStack_90 != 0x16)) goto LAB_8c04899c;
    *(undefined4 *)(DAT_8c048998 + ar4) = 0;
    uVar5 = 0;
    break;
  case 2:
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + 0x1c);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x1c);
    }
    uVar7 = (ulonglong)(uint)fVar6;
    if (in_FPSCR_PR != '\0' || fVar6 <= 0.0) {
LAB_8c048a88:
      iVar2 = (*(code *)PTR_rand_range_8c048aac)(ar4,0,100,ar7);
      uStack_a4 = CONCAT44(iVar2,(undefined4)uStack_a4);
      if (iVar2 < 0x33) {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      a6 = 100;
      uVar4 = 0;
      iStack_98 = (*(code *)PTR_rand_range_8c048a64)(ar4,0,100,ar7);
      if (2 < iStack_98) goto LAB_8c048a88;
      uStack_9c = (*(code *)PTR_get_field_94_02aaa4_8c048a6c)
                            (*(undefined4 *)((int)aiStack_e0 + DAT_8c048a68),uVar4,a6,ar7);
      iStack_d0 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c048a70)(uStack_9c,5,a6,ar7);
      if ((iStack_d0 == 3) || (iStack_d0 == 8)) {
        iVar2 = 4;
        *(undefined4 *)(DAT_8c048a74 + ar4) = 0xd;
      }
      else {
        iVar2 = 2;
        *(undefined4 *)(DAT_8c048a84 + ar4) = 0xb;
      }
    }
    ar7 = 0;
    ar6 = -1;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c048b44)(ar4 + DAT_8c048b40,iVar2,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c048b48)(ar4 + DAT_8c048b40,iVar2,ar6,ar7);
    *(undefined4 *)(DAT_8c048b4c + ar4) = 3;
    (*(code *)PTR_FUN_8c048b58)(ar4,iVar2,ar6,ar7);
    uVar1 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uStack_a4 = CONCAT44(uStack_a4._4_4_,(int)(uVar7 >> 0x20));
      uVar1 = uStack_a4;
    }
    uStack_a4 = uVar1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c048b5c) = (undefined4)uStack_a4;
      uVar7 = CONCAT44((undefined4)uStack_a4,(int)uVar7);
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c048b5c) = uStack_a4;
      uVar7 = uStack_a4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar7 & 0xffffffff;
    }
    iStack_a8 = (*(code *)PTR_get_field_1c_026dd8_8c048b60)(ar4 + DAT_8c048b40,iVar2,ar6,ar7);
    if ((iStack_a8 == 2) || (iStack_a8 == 4)) {
      ar6 = 4;
      iVar2 = 2;
      uStack_ac = (*(code *)PTR_rand_range_8c048b64)(ar4,2,4,ar7);
      *(undefined4 *)(DAT_8c048b68 + ar4) = uStack_ac;
    }
    else {
      *(undefined4 *)(DAT_8c048c88 + ar4) = 0;
    }
    *(int *)(DAT_8c048c8c + ar4) = *(int *)(DAT_8c048c8c + ar4) + 1;
    aiStack_e0[3] = ar4;
  case 3:
    puStack_e4 = (undefined *)((int)aiStack_e0 + DAT_8c048c90);
    (*(code *)PTR_FUN_8c048c94)(ar4 + 0x14,iVar2,ar6,ar7);
    puStack_e4 = (undefined *)((int)aiStack_e0 + DAT_8c048c98);
    (*(code *)PTR_Vec3_normalize_8c048ca0)((int)&puStack_e4 + DAT_8c048c9c,iVar2,ar6,ar7);
    puStack_e4 = (undefined *)((int)aiStack_e0 + DAT_8c048ca4);
    (*(code *)PTR_Vec3_scale_8c048cb0)((int)&puStack_e4 + DAT_8c048cac,PTR_DAT_8c048ca8,ar6,ar7);
    (*(code *)PTR_FUN_8c048cb4)(ar4,(int)aiStack_e0 + DAT_8c048ca4,ar5,ar7);
    (*(code *)PTR_Vec3_dtor_8c048cb8)((int)aiStack_e0 + DAT_8c048ca4,0xffffffff,ar5,ar7);
    (*(code *)PTR_Vec3_dtor_8c048cb8)((int)aiStack_e0 + DAT_8c048c98,0xffffffff,ar5,ar7);
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c048cb8)((int)aiStack_e0 + DAT_8c048c90,0xffffffff,ar5,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c048cbc,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar8 = (double)CONCAT44(DAT_8c048cc0,DAT_8c048cbc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 * dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
    }
    aiStack_e0[2] = ar4;
    (*(code *)PTR_FUN_8c048cc4)(ar4,uVar4,ar5,ar7);
    if (*(int *)(DAT_8c048c88 + ar4) < 1) {
      iStack_c0 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c048d5c)
                            (ar4 + DAT_8c048d58,uVar4,ar5,ar7);
      ar6 = ar5;
      if (iStack_c0 == 1) {
        uVar5 = 0;
        *(undefined4 *)(DAT_8c048d60 + ar4) = 0;
        *(undefined4 *)(DAT_8c048d64 + ar4) = 2;
        *(undefined4 *)(DAT_8c048d68 + ar4) = 0xffffffff;
      }
    }
    else {
      iStack_b0 = (*(code *)PTR_get_field_1c_026dd8_8c048ccc)(ar4 + DAT_8c048cc8,uVar4,ar5,ar7);
      if ((iStack_b0 == 2) ||
         (iStack_b4 = (*(code *)PTR_get_field_1c_026dd8_8c048ccc)(ar4 + DAT_8c048cc8,uVar4,ar5,ar7),
         iStack_b4 == 4)) {
        (*(code *)PTR_FUN_8c048cd0)(ar4,uVar4,ar5,ar7);
        iStack_b8 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c048cdc)
                              (ar4 + DAT_8c048cc8,uVar4,ar5,ar7);
        ar6 = ar5;
        if (iStack_b8 == 7) {
          *(int *)(DAT_8c048c88 + ar4) = *(int *)(DAT_8c048c88 + ar4) + -1;
          aiStack_e0[1] = ar4;
        }
      }
      else {
        iStack_bc = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c048d14)
                              (ar4 + DAT_8c048d10,uVar4,ar5,ar7);
        ar6 = ar5;
        if (iStack_bc == 1) {
          *(undefined4 *)(DAT_8c048d18 + ar4) = 0;
        }
      }
    }
    break;
  case 4:
    if (*(int *)(DAT_8c048dd8 + ar4) == 0) {
      puStack_e4 = PTR_DAT_8c048ddc;
      puVar3 = PTR_DAT_8c048de4;
      (*(code *)PTR_FUN_8c048df8)(ar4,ar5,PTR_DAT_8c048de4,uVar4);
      (*(code *)PTR_Vec3_assign_8c048dfc)(ar4 + 0x54,auStack_6c,puVar3,uVar4);
      (*(code *)PTR_Vec3_dtor_8c048e00)(auStack_6c,0xffffffff,puVar3,uVar4);
    }
    else {
      puStack_e4 = PTR_DAT_8c048ecc;
      puVar3 = PTR_DAT_8c048ed4;
      (*(code *)PTR_FUN_8c048ee8)(ar4,ar5,PTR_DAT_8c048ed4,uVar4);
      (*(code *)PTR_Vec3_assign_8c048eec)(ar4 + 0x54,auStack_7c,puVar3,uVar4);
      (*(code *)PTR_Vec3_dtor_8c048ef0)(auStack_7c,0xffffffff,puVar3,uVar4);
    }
    (*(code *)PTR_FUN_8c048ef8)(ar4,ar5,ar4 + 0x54,uVar4);
    *(int *)(DAT_8c048efc + ar4) = *(int *)(DAT_8c048efc + ar4) + 1;
    *(undefined4 *)(ar4 + 0x40) = 0;
    ar7 = uVar4;
    aiStack_e0[0] = ar4;
  case 5:
    ar6 = ar4 + 0x54;
    iStack_c4 = (*(code *)PTR_pure_virtual_stub_8c048f04)(ar4,ar5,ar6,ar7);
    if (iStack_c4 == 0) {
      uVar5 = 0;
      *(undefined4 *)(DAT_8c048efc + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
    break;
  case 6:
    ar6 = *(int *)(*(int *)((int)aiStack_e0 + DAT_8c048f74) + 4);
    iStack_c8 = (*(code *)PTR_FUN_8c048f78)
                          (ar4,**(undefined4 **)((int)aiStack_e0 + DAT_8c048f74),ar6,ar7);
    if (iStack_c8 == 0) {
      *(undefined4 *)(DAT_8c048f7c + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(undefined4 *)(DAT_8c048f80 + ar4) = 0;
      uVar5 = 0;
    }
  }
  uStack_84 = uVar5;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c048f88)
            ((int)aiStack_e0 + DAT_8c048f84,0xffffffff,ar6,ar7);
  return uStack_84;
LAB_8c04899c:
  iVar2 = 0;
  ar6 = DAT_8c0489cc;
  iStack_94 = (*(code *)PTR_rand_range_8c0489d0)(ar4,0,DAT_8c0489cc,ar7);
  if (iStack_94 < 100) {
    *(undefined4 *)(DAT_8c0489d4 + ar4) = 2;
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = in_dr0;
    }
  }
  else if (iStack_94 < DAT_8c0489e8) {
    *(undefined4 *)(DAT_8c0489ec + ar4) = 4;
  }
  else {
    *(undefined4 *)(DAT_8c0489fc + ar4) = 6;
  }
  goto LAB_8c0488bc;
}



/* FUN_8c048f8c @ 8c048f8c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04924c) */
/* WARNING: Removing unreachable block (ram,0x8c049a3e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c048f8c(int ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *a5;
  undefined4 unaff_r11;
  undefined4 uVar7;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar8;
  float fVar9;
  undefined8 in_dr0;
  double dVar10;
  undefined8 uVar11;
  float fVar14;
  double dVar12;
  ulonglong uVar13;
  undefined8 in_dr6;
  undefined8 in_dr12;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd6;
  undefined8 in_xd14;
  bool bVar15;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar8 = &dStack_10;
    dStack_10 = (double)CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar8 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar8 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar8 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar8 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar8 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar8 + -0x14) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar8 + -0x160) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar8 + -0x15c) = (int)in_dr6;
  }
  else {
    *(undefined8 *)((int)pdVar8 + -0x160) = in_dr6;
    *(undefined8 *)((int)pdVar8 + -0x15c) = in_xd6;
  }
  uVar7 = 1;
  *(undefined1 **)((int)pdVar8 + -0x164) = (undefined1 *)((int)pdVar8 + DAT_8c0490a4 + -0x160);
  uVar4 = ar5;
  iVar6 = ar6;
  (*(code *)PTR_Vec3_sub_8c0490a8)(ar6,ar5,ar6,ar7);
  *(undefined1 **)((int)pdVar8 + -0x164) = (undefined1 *)((int)pdVar8 + DAT_8c0490ac + -0x160);
  (*(code *)PTR_Vec3_normalize_8c0490b4)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490b0 + -0x164),uVar4,iVar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0490bc)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490b8 + -0x160),
             (undefined1 *)((int)pdVar8 + DAT_8c0490ac + -0x160),iVar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0490c0)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490ac + -0x160),0xffffffff,iVar6,ar7);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0490c0)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490a4 + -0x160),0xffffffff,iVar6,ar7);
  *(undefined1 **)((int)pdVar8 + -0x164) = (undefined1 *)((int)pdVar8 + DAT_8c0490c4 + -0x160);
  (*(code *)PTR_FUN_8c0490c8)(ar4 + 0x14,uVar4,iVar6,ar7);
  *(undefined1 **)((int)pdVar8 + -0x164) = (undefined1 *)((int)pdVar8 + DAT_8c0490cc + -0x160);
  (*(code *)PTR_FUN_8c0490c8)((undefined1 *)((int)pdVar8 + DAT_8c0490d0 + -0x164),uVar4,iVar6,ar7);
  (*(code *)PTR_FUN_8c0490d4)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490c4 + -0x160),
             (undefined1 *)((int)pdVar8 + DAT_8c0490cc + -0x160),iVar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar8 + DAT_8c0490d8 + -0x160) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar10 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + DAT_8c0490d8 + -0x160),(int)in_dr0);
    *(undefined4 *)((int)pdVar8 + DAT_8c0490dc + -0x160) =
         *(undefined4 *)((int)pdVar8 + DAT_8c0490d8 + -0x160);
  }
  else {
    *(undefined8 *)((int)pdVar8 + DAT_8c0490d8 + -0x160) = in_dr0;
    dVar10 = *(double *)((int)pdVar8 + DAT_8c0490d8 + -0x160);
    *(double *)((int)pdVar8 + DAT_8c0490dc + -0x160) = dVar10;
  }
  (*(code *)PTR_Vec3_dtor_8c0490c0)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490cc + -0x160),0xffffffff,iVar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0490c0)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490c4 + -0x160),0xffffffff,iVar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0490bc)
            ((undefined1 *)((int)pdVar8 + DAT_8c0490e0 + -0x160),ar5,iVar6,ar7);
  iVar5 = ar4 + 0x14;
  (*(code *)PTR_Vec3_assign_8c0490e4)(ar4 + DAT_8c0490d8,iVar5,iVar6,ar7);
  uVar4 = (*(code *)PTR_get_field_1c_026dd8_8c0490ec)(ar4 + DAT_8c0490e8,iVar5,iVar6,ar7);
  *(undefined4 *)((int)pdVar8 + -0xe4) = uVar4;
  iVar3 = *(int *)((int)pdVar8 + -0xe4);
  if (iVar3 == 5) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(DAT_8c049118,DAT_8c049114);
      dVar10 = (double)CONCAT44(DAT_8c04911c,SUB84(dVar10,0));
      *(undefined4 *)((int)pdVar8 + DAT_8c049120 + -0x160) = DAT_8c04911c;
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c04911c,DAT_8c049118);
      dVar10 = (double)CONCAT44(DAT_8c049120,DAT_8c04911c);
      *(double *)((int)pdVar8 + DAT_8c049120 + -0x160) = dVar10;
    }
  }
  else if (iVar3 == 6) {
    dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)pdVar8 + DAT_8c049148 + -0x160) = 0x3f800000;
      in_dr14 = (double)CONCAT44(DAT_8c049140._4_4_,DAT_8c04914c);
    }
    else {
      *(double *)((int)pdVar8 + DAT_8c049148 + -0x160) = dVar10;
      in_dr14 = (double)CONCAT44(DAT_8c049148,DAT_8c049140._4_4_);
    }
  }
  else if (iVar3 == 10) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(DAT_8c04917c._4_4_,(undefined4)DAT_8c04917c);
    }
    else {
      in_dr14 = (double)CONCAT44(switchD_8c049178::switchdataD_8c049184,DAT_8c04917c._4_4_);
    }
  }
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    uVar4 = (*(code *)PTR_FUN_8c0491e0)(ar4,iVar5,iVar6,ar7);
    *(undefined4 *)((int)pdVar8 + -0xe8) = uVar4;
    if (*(int *)((int)pdVar8 + -0xe8) != 0) {
      *(undefined4 *)((int)pdVar8 + DAT_8c0491e4 + -0x160) = 1;
      (*(code *)PTR_Vec3_dtor_8c0491ec)
                ((undefined1 *)((int)pdVar8 + DAT_8c0491e8 + -0x160),0xffffffff,iVar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0491ec)
                ((undefined1 *)((int)pdVar8 + DAT_8c0491f0 + -0x160),0xffffffff,iVar6,ar7);
      return *(undefined4 *)((int)pdVar8 + DAT_8c0491e4 + -0x160);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(DAT_8c049278,SUB84(dVar10,0));
      *(undefined4 *)(ar4 + DAT_8c049274) = DAT_8c049278;
    }
    else {
      uVar11 = CONCAT44(PTR_FUN_8c04927c,DAT_8c049278);
      *(undefined8 *)(ar4 + DAT_8c049274) = uVar11;
    }
    fVar9 = (float)uVar11;
    iVar3 = ar6;
    (*(code *)PTR_FUN_8c04927c)(ar4,ar5,ar6,ar7);
    *(undefined4 *)((int)pdVar8 + -0x124) = *(undefined4 *)(DAT_8c049280 + ar4);
    iVar6 = (*(int *)((int)pdVar8 + -0x124) * 2 + *(int *)((int)pdVar8 + -0x124)) * 8 + DAT_8c049284
    ;
    iVar5 = DAT_8c049284;
    (*(code *)PTR_FUN_8c049288)(ar4,iVar6,iVar3,DAT_8c049284);
    (*(code *)PTR_FUN_8c049290)(ar4,iVar6,iVar3,iVar5);
    if (in_FPSCR_SZ == '\0') {
      fVar9 = *(float *)(ar4 + 0x24);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x24);
    }
    uVar13 = (ulonglong)(uint)fVar9;
    if (fVar9 == 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44((undefined4)DAT_8c049334,fVar9);
        *(undefined4 *)(ar4 + 0x30) = (undefined4)DAT_8c049334;
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c049334._4_4_,(undefined4)DAT_8c049334);
        *(double *)(ar4 + 0x30) = dVar10;
      }
    }
    else {
      iVar6 = ar6;
      (*(code *)PTR_FUN_8c049294)(ar5,ar6,iVar3,iVar5);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar8 + -0xec) = (int)(uVar13 >> 0x20);
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)((int)pdVar8 + -0xec));
      }
      else {
        *(ulonglong *)((int)pdVar8 + -0xec) = uVar13;
        in_xd0 = *(undefined8 *)((int)pdVar8 + -0xec);
        dVar10 = *(double *)(ar4 + 0x24);
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        dVar10 = dVar10 / dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x30) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
    }
    uVar13 = (ulonglong)dVar10 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar13;
    }
    *(undefined1 **)((int)pdVar8 + -0x164) =
         (undefined1 *)((int)pdVar8 + DAT_8c049334._4_4_ + -0x160);
    (*(code *)PTR_FUN_8c04933c)(ar4 + 0x14,iVar6,iVar3,iVar5);
    *(undefined1 **)((int)pdVar8 + -0x164) = (undefined1 *)((int)pdVar8 + DAT_8c049340 + -0x160);
    (*(code *)PTR_FUN_8c04933c)
              ((undefined1 *)((int)pdVar8 + DAT_8c049344 + -0x164),iVar6,iVar3,iVar5);
    (*(code *)PTR_FUN_8c049348)
              ((undefined1 *)((int)pdVar8 + DAT_8c049334._4_4_ + -0x160),
               (undefined1 *)((int)pdVar8 + DAT_8c049340 + -0x160),iVar3,iVar5);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar8 + -0xf0) = (int)(uVar13 >> 0x20);
    }
    else {
      *(ulonglong *)((int)pdVar8 + -0xf0) = uVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)((int)pdVar8 + -0xf0);
      uVar11 = CONCAT44(uVar4,(int)uVar13);
      *(undefined4 *)(ar4 + DAT_8c04934c) = uVar4;
    }
    else {
      uVar11 = *(undefined8 *)((int)pdVar8 + -0xf0);
      *(undefined8 *)(ar4 + DAT_8c04934c) = uVar11;
    }
    uVar4 = (undefined4)uVar11;
    (*(code *)PTR_Vec3_dtor_8c049350)
              ((undefined1 *)((int)pdVar8 + DAT_8c049340 + -0x160),0xffffffff,iVar3,iVar5);
    (*(code *)PTR_Vec3_dtor_8c049350)
              ((undefined1 *)((int)pdVar8 + DAT_8c049334._4_4_ + -0x160),0xffffffff,iVar3,iVar5);
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)(ar4 + 0x24);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x24);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c049354),uVar4);
    }
    else {
      uVar11 = *(undefined8 *)(ar4 + DAT_8c049354);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20)) {
      uVar4 = (*(code *)PTR_rand_range_8c0493b8)(ar4,0,2,iVar5);
      uVar2 = (undefined4)uVar11;
      *(undefined4 *)((int)pdVar8 + -0xf4) = uVar4;
      ar7 = 0;
      uVar4 = 0xffffffff;
      iVar6 = *(int *)((int)pdVar8 + -0xf4) + 5;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0493c4)
                (ar4 + DAT_8c0493bc._4_4_,iVar6,0xffffffff,0);
    }
    else {
      ar7 = 0;
      uVar4 = 0xffffffff;
      iVar6 = 10;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c049360)(ar4 + DAT_8c04935c,10,0xffffffff,0);
      uVar2 = (undefined4)uVar11;
    }
    uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0493c8)(ar4 + DAT_8c0493bc._4_4_,iVar6,uVar4,ar7);
    *(undefined4 *)((int)pdVar8 + -0xf8) = uVar1;
    if (*(int *)((int)pdVar8 + -0xf8) == 5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar8 + DAT_8c0493fc + -0x160) = DAT_8c0493f8;
      }
      else {
        *(ulonglong *)((int)pdVar8 + DAT_8c0493fc + -0x160) = CONCAT44(DAT_8c0493fc,DAT_8c0493f8);
      }
    }
    else if (*(int *)((int)pdVar8 + -0xf8) == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar8 + DAT_8c049424 + -0x160) = 0x3f800000;
      }
      else {
        *(ulonglong *)((int)pdVar8 + DAT_8c049424 + -0x160) = CONCAT44(0x3f800000,uVar2);
      }
    }
    if (*(int *)(DAT_8c0494a0 + ar4) == 0x11) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x24) = DAT_8c0494a4;
      }
      else {
        *(undefined8 *)(ar4 + 0x24) = CONCAT44(DAT_8c0494a8,DAT_8c0494a4);
      }
    }
    iVar3 = ar4 + DAT_8c0494a8;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0494ac)(iVar3,iVar6,uVar4,ar7);
    *(undefined4 *)(ar4 + 0x40) = 1;
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(DAT_8c0494b4,*(undefined4 *)((int)pdVar8 + DAT_8c0494b0 + -0x160));
    }
    else {
      in_xd0 = *(undefined8 *)((int)pdVar8 + DAT_8c0494b0 + -0x160);
      uVar13 = CONCAT44(PTR_rand_8c0494b8,DAT_8c0494b4);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar13 < (float)(uVar13 >> 0x20)) {
      uVar2 = (*(code *)PTR_rand_8c0494b8)(iVar3,iVar6,uVar4,ar7);
      *(undefined4 *)((int)pdVar8 + -0xfc) = uVar2;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0494bc)
                        (*(undefined4 *)((int)pdVar8 + -0xfc),8,uVar4,ar7);
      *(undefined4 *)((int)pdVar8 + -0x128) = uVar4;
      *(int *)(DAT_8c0494c0 + ar4) = *(int *)((int)pdVar8 + -0x128) + 8;
      *(undefined4 *)(ar4 + 0x40) = 3;
      break;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar13 & 0xffffffff;
    }
    ar7 = 0;
    iVar6 = -1;
    iVar5 = 6;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c049540)(ar4 + DAT_8c04953c,6,0xffffffff,0);
    *(undefined4 *)(DAT_8c049544 + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c049548) = (undefined4)DAT_8c04954c;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c049548) = CONCAT44(DAT_8c04954c._4_4_,(undefined4)DAT_8c04954c);
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
    *(undefined4 *)(DAT_8c04954c._4_4_ + ar4) = 3;
  case 1:
    if (in_FPSCR_SZ == '\0') {
      fVar9 = *(float *)((int)pdVar8 + DAT_8c049554 + -0x160);
      fVar14 = DAT_8c049558;
    }
    else {
      in_xd0 = *(undefined8 *)((int)pdVar8 + DAT_8c049554 + -0x160);
      fVar9 = DAT_8c049558;
      fVar14 = _DAT_8c04955c;
    }
    if (in_FPSCR_PR == '\0' && fVar14 < fVar9) {
      if (in_FPSCR_SZ == '\0') {
        fVar9 = *(float *)(ar4 + 0x28);
        fVar14 = _DAT_8c04955c;
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        fVar9 = _DAT_8c04955c;
        fVar14 = DAT_8c049560;
      }
      if (in_FPSCR_PR != '\0' || fVar9 <= fVar14) {
        *(int *)((int)pdVar8 + -0x130) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0495dc,
                                    *(undefined4 *)(*(int *)((int)pdVar8 + -0x130) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x130) + 0x28);
          dVar10 = (double)CONCAT44(DAT_8c0495e0,DAT_8c0495dc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar8 + -0x130) + 0x28) = fVar9;
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar8 + -0x130) + 0x28) = in_xd0;
        }
      }
      else {
        *(int *)((int)pdVar8 + -300) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c049560,
                                    *(undefined4 *)(*(int *)((int)pdVar8 + -300) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -300) + 0x28);
          dVar10 = (double)CONCAT44(uRam8c049564,DAT_8c049560);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 - dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar8 + -300) + 0x28) = fVar9;
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar8 + -300) + 0x28) = in_xd0;
        }
      }
      iVar3 = ar6;
      if (*(int *)(DAT_8c0495e0 + ar4) == 0x11) {
        (*(code *)PTR_Vec3_set_xyz_8c0495f0)
                  ((undefined1 *)((int)pdVar8 + DAT_8c0495ec + -0x160),iVar5,iVar6,ar7);
        *(undefined1 **)((int)pdVar8 + -0x164) = (undefined1 *)((int)pdVar8 + DAT_8c0495ec + -0x160)
        ;
        *(undefined1 **)((int)pdVar8 + -0x168) = (undefined1 *)((int)pdVar8 + DAT_8c0495f4 + -0x164)
        ;
        ar7 = ar4 + 0x14;
        (*(code *)PTR_FUN_8c0495f8)(ar4,ar5,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c049600)
                  (ar4 + 0x14,(undefined1 *)((int)pdVar8 + DAT_8c0495fc + -0x160),iVar3,ar7);
        (*(code *)PTR_Vec3_dtor_8c049604)
                  ((undefined1 *)((int)pdVar8 + DAT_8c0495fc + -0x160),0xffffffff,iVar3,ar7);
        uVar4 = 0xffffffff;
        (*(code *)PTR_object_dtor_delete_8c049608)
                  ((undefined1 *)((int)pdVar8 + DAT_8c0495ec + -0x160),0xffffffff,iVar3,ar7);
      }
      else {
        (*(code *)PTR_Vec3_set_xyz_8c0496c0)
                  ((undefined1 *)((int)pdVar8 + DAT_8c0496b8._4_4_ + -0x160),iVar5,iVar6,ar7);
        *(undefined1 **)((int)pdVar8 + -0x164) =
             (undefined1 *)((int)pdVar8 + DAT_8c0496b8._4_4_ + -0x160);
        *(undefined1 **)((int)pdVar8 + -0x168) = (undefined1 *)((int)pdVar8 + DAT_8c0496c4 + -0x164)
        ;
        ar7 = ar4 + 0x14;
        (*(code *)PTR_FUN_8c0496c8)(ar4,ar5,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c0496d0)
                  (ar4 + 0x14,(undefined1 *)((int)pdVar8 + DAT_8c0496cc + -0x160),iVar3,ar7);
        (*(code *)PTR_Vec3_dtor_8c0496d4)
                  ((undefined1 *)((int)pdVar8 + DAT_8c0496cc + -0x160),0xffffffff,iVar3,ar7);
        uVar4 = 0xffffffff;
        (*(code *)PTR_object_dtor_delete_8c0496d8)
                  ((undefined1 *)((int)pdVar8 + DAT_8c0496b8._4_4_ + -0x160),0xffffffff,iVar3,ar7);
      }
      *(int *)((int)pdVar8 + -0x134) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0496e0,
                                  *(undefined4 *)(*(int *)((int)pdVar8 + -0x134) + DAT_8c0496dc));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x134) + DAT_8c0496dc);
        dVar10 = (double)CONCAT44(DAT_8c0496e4,DAT_8c0496e0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar8 + -0x134) + DAT_8c0496dc) = fVar9;
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar8 + -0x134) + DAT_8c0496dc) = in_xd0;
      }
      fVar9 = DAT_8c0496e4;
      fVar14 = DAT_8c0496e8;
      if (in_FPSCR_SZ == '\0') {
        fVar9 = *(float *)(ar4 + DAT_8c0496dc);
        fVar14 = DAT_8c0496e4;
      }
      if (in_FPSCR_PR == '\0' && fVar14 < fVar9) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0496dc) = DAT_8c0496e4;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c0496dc) = CONCAT44(DAT_8c0496e8,DAT_8c0496e4);
        }
      }
      (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0496f4)(ar4 + DAT_8c0496f0,uVar4,iVar3,ar7);
    }
    else {
      ar7 = 0;
      uVar1 = 0xffffffff;
      uVar2 = 5;
      iVar6 = ar4 + DAT_8c04976c._4_4_;
      uVar4 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c049774)(iVar6,5,0xffffffff,0);
      *(undefined4 *)((int)pdVar8 + -0x100) = uVar4;
      if (*(int *)((int)pdVar8 + -0x100) != 6) {
        iVar6 = ar4 + DAT_8c04976c._4_4_;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c049778)(iVar6,uVar2,uVar1,ar7);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04977c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c04977c) = (ulonglong)(uint)fVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c049780) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c049780) = (ulonglong)(uint)fVar9;
      }
      *(undefined4 *)(ar4 + 0x40) = 3;
      uVar4 = (*(code *)PTR_rand_8c049784)(iVar6,uVar2,uVar1,ar7);
      *(undefined4 *)((int)pdVar8 + -0x104) = uVar4;
      uVar4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c049788)
                        (*(undefined4 *)((int)pdVar8 + -0x104),8,uVar1,ar7);
      *(undefined4 *)((int)pdVar8 + -0x138) = uVar4;
      *(int *)(DAT_8c04978c + ar4) = *(int *)((int)pdVar8 + -0x138) + 8;
    }
    break;
  case 3:
    if (*(int *)(DAT_8c049808 + ar4) == 0x11) {
      *(int *)((int)pdVar8 + -0x13c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)(ulonglong)*(uint *)(*(int *)((int)pdVar8 + -0x13c) + DAT_8c04980c);
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x13c) + DAT_8c04980c);
      }
      dVar12 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar10,0) + 1.0;
      }
      else {
        fVar9 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar8 + -0x13c) + DAT_8c04980c) = fVar9;
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar8 + -0x13c) + DAT_8c04980c) = in_xd0;
      }
      *(int *)((int)pdVar8 + -0x140) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c049810,
                                  *(undefined4 *)(*(int *)((int)pdVar8 + -0x140) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x140) + 0x28);
        dVar10 = (double)CONCAT44(DAT_8c049814,DAT_8c049810);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar8 + -0x140) + 0x28) = fVar9;
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar8 + -0x140) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar10 = *(double *)(ar4 + 0x24);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar10 >> 0x20) < SUB84(dVar10,0)) {
        if (in_FPSCR_SZ == '\0') {
          uVar4 = *(undefined4 *)(ar4 + 0x24);
          dVar10 = (double)CONCAT44(uVar4,SUB84(dVar10,0));
          *(undefined4 *)(ar4 + 0x28) = uVar4;
        }
        else {
          dVar10 = *(double *)(ar4 + 0x24);
          *(double *)(ar4 + 0x28) = dVar10;
        }
      }
    }
    uVar4 = (*(code *)PTR_get_field_1c_026dd8_8c049818)
                      (ar4 + DAT_8c049814,ar4 + DAT_8c049814,iVar6,ar7);
    *(undefined4 *)((int)pdVar8 + -0x108) = uVar4;
    iVar3 = *(int *)((int)pdVar8 + -0x108);
    if ((iVar3 == 5) || (iVar3 == 6)) {
      (*(code *)PTR_CAnimBody_GetCurFrame_8c049870)(ar4 + DAT_8c04986c,iVar3,iVar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar8 + -0x10c) = (int)((ulonglong)dVar10 >> 0x20);
        dVar10 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + -0x10c),SUB84(dVar10,0));
      }
      else {
        *(double *)((int)pdVar8 + -0x10c) = dVar10;
        dVar10 = *(double *)((int)pdVar8 + -0x10c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar15 = SUB84(in_dr14,0) < (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        bVar15 = in_dr14 < dVar10;
      }
      if (bVar15) {
        *(int *)((int)pdVar8 + -0x144) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c049874,
                                    *(undefined4 *)(*(int *)((int)pdVar8 + -0x144) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x144) + 0x28);
          dVar10 = (double)CONCAT44(uRam8c049878,DAT_8c049874);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar8 + -0x144) + 0x28) = fVar9;
          uVar11 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar8 + -0x144) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar11 = *(undefined8 *)(ar4 + 0x24);
        }
        a5 = (undefined8 *)(ar4 + 0x24);
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar11 >> 0x20) < (float)uVar11) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
          }
        }
      }
      else {
        *(int *)((int)pdVar8 + -0x148) = ar4;
        a5 = (undefined8 *)(*(int *)((int)pdVar8 + -0x148) + 0x28);
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0498d4,*(undefined4 *)a5);
        }
        else {
          in_xd0 = *a5;
          dVar10 = (double)CONCAT44(DAT_8c0498d8,DAT_8c0498d4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 - dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar8 + -0x148) + 0x28) = fVar9;
          fVar9 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar8 + -0x148) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0' && fVar9 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar9;
          }
        }
      }
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)((int)pdVar8 + DAT_8c0498dc + -0x160),
                          *(undefined4 *)(ar4 + DAT_8c0498d8));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0498d8);
        uVar11 = *(undefined8 *)((int)pdVar8 + DAT_8c0498dc + -0x160);
      }
      if (in_FPSCR_PR != '\0' || (float)uVar11 <= (float)((ulonglong)uVar11 >> 0x20)) {
        *(int *)((int)pdVar8 + -0x150) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c049948,
                                    *(undefined4 *)(*(int *)((int)pdVar8 + -0x150) + DAT_8c049944));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x150) + DAT_8c049944);
          dVar10 = (double)CONCAT44(DAT_8c04994c,DAT_8c049948);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar10 >> 0x20);
          dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0) + fVar9);
        }
        else {
          dVar10 = dVar10 + dVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)pdVar8 + -0x150) + DAT_8c049944) = SUB84(dVar10,0);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar8 + -0x150) + DAT_8c049944) = in_xd0;
        }
      }
      else {
        *(int *)((int)pdVar8 + -0x14c) = ar4;
        a5 = *(undefined8 **)((int)pdVar8 + -0x14c);
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0498e0,
                                    *(undefined4 *)(*(int *)((int)pdVar8 + -0x14c) + DAT_8c0498d8));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x14c) + DAT_8c0498d8);
          dVar10 = (double)CONCAT44(uRam8c0498e4,DAT_8c0498e0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar10 >> 0x20);
          dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0) - fVar9);
        }
        else {
          dVar10 = dVar10 - dVar10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)a5 + DAT_8c0498d8) = SUB84(dVar10,0);
        }
        else {
          *(undefined8 *)((int)a5 + DAT_8c0498d8) = in_xd0;
        }
      }
      if (*(int *)(DAT_8c04994c + ar4) < 1) {
        uVar4 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0499c0)
                          (ar4 + DAT_8c0499bc,a5,iVar6,ar7);
        *(undefined4 *)((int)pdVar8 + -0x114) = uVar4;
        if (*(int *)((int)pdVar8 + -0x114) == 1) {
          *(undefined4 *)(DAT_8c0499c4 + ar4) = 2;
          ar7 = 0;
          iVar6 = -1;
          uVar4 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0499cc)(ar4 + DAT_8c0499bc,0,0xffffffff,0)
          ;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0499d0)(ar4 + DAT_8c0499bc,uVar4,iVar6,ar7);
          *(undefined4 *)(DAT_8c0499d4 + ar4) = 0;
        }
      }
      else {
        uVar4 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c049954)
                          (ar4 + DAT_8c049950,a5,iVar6,ar7);
        *(undefined4 *)((int)pdVar8 + -0x110) = uVar4;
        if (*(int *)((int)pdVar8 + -0x110) == 1) {
          *(int *)((int)pdVar8 + -0x154) = ar4;
          *(int *)(DAT_8c04994c + *(int *)((int)pdVar8 + -0x154)) =
               *(int *)(DAT_8c04994c + *(int *)((int)pdVar8 + -0x154)) + -1;
        }
      }
    }
    else {
      uVar4 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c049a64)
                        (ar4 + DAT_8c049a60,iVar3,iVar6,ar7);
      *(undefined4 *)((int)pdVar8 + -0x118) = uVar4;
      if (*(int *)((int)pdVar8 + -0x118) == 1) {
        *(undefined4 *)(DAT_8c049a68 + ar4) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    (*(code *)PTR_FUN_8c049a6c)(ar5,ar6,iVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar8 + -0x11c) = (int)((ulonglong)dVar10 >> 0x20);
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(double *)((int)pdVar8 + -0x11c) = dVar10;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar10 = *(double *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar10 + dVar10,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(*(undefined4 *)((int)pdVar8 + -0x11c),fVar9);
    }
    else {
      uVar13 = *(ulonglong *)((int)pdVar8 + -0x11c);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar13 >> 0x20) <= (float)uVar13) {
      uVar13 = uVar13 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
        uVar13 = (ulonglong)*(uint *)(ar4 + 0x38);
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar13;
        in_xd0 = *(undefined8 *)(ar4 + 0x38);
      }
      if ((float)uVar13 == 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c049a90,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar10 = (double)CONCAT44(uRam8c049a94,DAT_8c049a90);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 / dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar10 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 / dVar10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
      }
      ar7 = 0x40;
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    break;
  case 4:
    *(int *)((int)pdVar8 + -0x158) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),
                                *(undefined4 *)(*(int *)((int)pdVar8 + -0x158) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)pdVar8 + -0x158) + 0x28);
      dVar10 = *(double *)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar10 - dVar10,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)pdVar8 + -0x158) + 0x28) = fVar9;
      fVar9 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(*(int *)((int)pdVar8 + -0x158) + 0x28) = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar9 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar9;
      }
    }
    ar7 = ar4 + DAT_8c049b44;
    uVar4 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c049b4c)
                      (ar4 + DAT_8c049b48,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c049b4c,DAT_8c049b48,
                       ar7);
    *(undefined4 *)((int)pdVar8 + -0x120) = uVar4;
    if (*(int *)((int)pdVar8 + -0x120) == 1) {
      *(undefined4 *)(DAT_8c049b50 + ar4) = 2;
      uVar7 = 0;
    }
  }
  (*(code *)PTR_FUN_8c049b54)(ar4,ar6,ar5,ar7);
  *(undefined4 *)((int)pdVar8 + DAT_8c049b58 + -0x160) = uVar7;
  (*(code *)PTR_Vec3_dtor_8c049b60)
            ((undefined1 *)((int)pdVar8 + DAT_8c049b5c + -0x160),0xffffffff,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c049b60)
            ((undefined1 *)((int)pdVar8 + DAT_8c049b64 + -0x160),0xffffffff,ar5,ar7);
  return *(undefined4 *)((int)pdVar8 + DAT_8c049b58 + -0x160);
}



/* FUN_8c049b68 @ 8c049b68 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c049e36 */
/* WARNING: Switch with 1 destination removed at 0x8c049e46 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c049b68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *a5;
  undefined4 a5_00;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  undefined8 in_dr0;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_dr12;
  undefined8 in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd6;
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
    puVar4 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar4 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar4 + -0x18) = in_PR;
  iVar1 = -DAT_8c049c5c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar4 + iVar1 + -0x18) = in_fr4;
    *(undefined4 *)((int)puVar4 + iVar1 + -0x14) = in_fr5;
    *(undefined4 *)((int)puVar4 + iVar1 + -0x10) = in_fr6;
    *(undefined4 *)((int)puVar4 + iVar1 + -0xc) = in_fr7;
  }
  else {
    *(ulonglong *)((int)puVar4 + iVar1 + -0x18) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)puVar4 + iVar1 + -0x14) = in_xd4;
    *(ulonglong *)((int)puVar4 + iVar1 + -0x10) = CONCAT44(in_fr6,in_fr7);
    *(undefined8 *)((int)puVar4 + iVar1 + -0xc) = in_xd6;
  }
  a5 = PTR_Vec3_set_zero_8c049c64;
  uVar2 = ar6;
  (*(code *)PTR_Vec3_set_zero_8c049c64)
            ((undefined1 *)((int)puVar4 + DAT_8c049c60 + iVar1 + -0x18),PTR_Vec3_set_zero_8c049c64,
             ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c049c64)
            ((undefined1 *)((int)puVar4 + DAT_8c049c68 + iVar1 + -0x18),a5,uVar2,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c049c70)
            ((undefined1 *)((int)puVar4 + DAT_8c049c6c + iVar1 + -0x18),ar6,uVar2,ar7);
  (*(code *)PTR_FUN_8c049c74)
            (ar5,(undefined1 *)((int)puVar4 + DAT_8c049c6c + iVar1 + -0x18),uVar2,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar4 + DAT_8c049c78 + iVar1 + -0x18) = (int)((ulonglong)in_dr0 >> 0x20);
    *(undefined4 *)((int)puVar4 + DAT_8c049c7c + iVar1 + -0x18) =
         *(undefined4 *)((int)puVar4 + DAT_8c049c78 + iVar1 + -0x18);
  }
  else {
    *(undefined8 *)((int)puVar4 + DAT_8c049c78 + iVar1 + -0x18) = in_dr0;
    *(undefined8 *)((int)puVar4 + DAT_8c049c7c + iVar1 + -0x18) =
         *(undefined8 *)((int)puVar4 + DAT_8c049c78 + iVar1 + -0x18);
  }
  *(undefined1 **)((int)puVar4 + iVar1 + -0x1c) =
       (undefined1 *)((int)puVar4 + DAT_8c049c80 + iVar1 + -0x18);
  a5_00 = ar5;
  (*(code *)PTR_Vec3_sub_8c049c88)
            ((undefined1 *)((int)puVar4 + DAT_8c049c84 + iVar1 + -0x1c),ar5,uVar2,ar7);
  *(undefined1 **)((int)puVar4 + iVar1 + -0x1c) =
       (undefined1 *)((int)puVar4 + DAT_8c049c8c + iVar1 + -0x18);
  (*(code *)PTR_Vec3_normalize_8c049c94)
            ((undefined1 *)((int)puVar4 + DAT_8c049c90 + iVar1 + -0x1c),a5_00,uVar2,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c049c70)
            ((undefined1 *)((int)puVar4 + DAT_8c049c98 + iVar1 + -0x18),
             (undefined1 *)((int)puVar4 + DAT_8c049c8c + iVar1 + -0x18),uVar2,ar7);
  (*(code *)PTR_Vec3_dtor_8c049c9c)
            ((undefined1 *)((int)puVar4 + DAT_8c049c8c + iVar1 + -0x18),0xffffffff,uVar2,ar7);
  (*(code *)PTR_Vec3_dtor_8c049c9c)
            ((undefined1 *)((int)puVar4 + DAT_8c049c80 + iVar1 + -0x18),0xffffffff,uVar2,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c049c70)
            ((undefined1 *)((int)puVar4 + DAT_8c049ca0 + iVar1 + -0x18),ar5,uVar2,ar7);
  iVar3 = ar4 + 0x14;
  (*(code *)PTR_Vec3_assign_8c049ca8)(ar4 + DAT_8c049ca4,iVar3,uVar2,ar7);
  if (*(int *)(DAT_8c049c7c + ar4) == 1) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c049ce4) = (undefined4)DAT_8c049ce8;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c049ce4) = CONCAT44(DAT_8c049ce8._4_4_,(undefined4)DAT_8c049ce8);
    }
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c049cf0)(ar4 + DAT_8c049ce8._4_4_,iVar3,uVar2,ar7);
    *(undefined4 *)((int)puVar4 + DAT_8c049cf4 + iVar1 + -0x18) = uVar2;
    if (*(int *)((int)puVar4 + DAT_8c049cf4 + iVar1 + -0x18) == 5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar4 + DAT_8c049d18 + iVar1 + -0x18) = DAT_8c049d10._4_4_;
      }
      else {
        *(ulonglong *)((int)puVar4 + DAT_8c049d18 + iVar1 + -0x18) =
             CONCAT44(DAT_8c049d18,DAT_8c049d10._4_4_);
      }
    }
    else if (*(int *)((int)puVar4 + DAT_8c049cf4 + iVar1 + -0x18) == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar4 + DAT_8c049d44 + iVar1 + -0x18) = DAT_8c049d3c._4_4_;
      }
      else {
        *(ulonglong *)((int)puVar4 + DAT_8c049d44 + iVar1 + -0x18) =
             CONCAT44(DAT_8c049d44,DAT_8c049d3c._4_4_);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + DAT_8c049d70 + iVar1 + -0x18) = DAT_8c049d6c;
    }
    else {
      *(ulonglong *)((int)puVar4 + DAT_8c049d70 + iVar1 + -0x18) =
           CONCAT44(DAT_8c049d70,DAT_8c049d6c);
    }
  }
  else if (*(int *)(DAT_8c049c7c + ar4) == 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c049db0) = (undefined4)DAT_8c049db4;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c049db0) = CONCAT44(DAT_8c049db4._4_4_,(undefined4)DAT_8c049db4);
    }
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c049dbc)
                      (ar4 + DAT_8c049db4._4_4_,PTR_get_field_1c_026dd8_8c049dbc,uVar2,ar7);
    *(undefined4 *)((int)puVar4 + DAT_8c049dc0 + iVar1 + -0x18) = uVar2;
    if (*(int *)((int)puVar4 + DAT_8c049dc0 + iVar1 + -0x18) == 5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar4 + DAT_8c049ddc._4_4_ + iVar1 + -0x18) = (undefined4)DAT_8c049ddc
        ;
      }
      else {
        *(ulonglong *)((int)puVar4 + DAT_8c049ddc._4_4_ + iVar1 + -0x18) =
             CONCAT44(DAT_8c049ddc._4_4_,(undefined4)DAT_8c049ddc);
      }
    }
    else if (*(int *)((int)puVar4 + DAT_8c049dc0 + iVar1 + -0x18) == 6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar4 + DAT_8c049e0c + iVar1 + -0x18) = DAT_8c049e04._4_4_;
      }
      else {
        *(ulonglong *)((int)puVar4 + DAT_8c049e0c + iVar1 + -0x18) =
             CONCAT44(DAT_8c049e0c,DAT_8c049e04._4_4_);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + DAT_8c049e6c + iVar1 + -0x18) = DAT_8c049e68;
    }
    else {
      *(ulonglong *)((int)puVar4 + DAT_8c049e6c + iVar1 + -0x18) =
           CONCAT44(DAT_8c049e6c,DAT_8c049e68);
    }
  }
  iVar3 = *(int *)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    /* WARNING: Could not recover jumptable at 0x8c049e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_LAB_8c049e70)[iVar3])();
    return uVar2;
  }
  (*(code *)PTR_Vec3_assign_8c04b13c)(ar4 + DAT_8c04b138,ar4 + 0x14,ar4 + 0x14,ar7);
  (*(code *)PTR_FUN_8c04b144)
            (ar4,(undefined1 *)((int)puVar4 + DAT_8c04b140 + iVar1 + -0x18),ar5,ar7);
  *(undefined4 *)((int)puVar4 + DAT_8c04b148 + iVar1 + -0x18) = 1;
  (*(code *)PTR_Vec3_dtor_8c04b150)
            ((undefined1 *)((int)puVar4 + DAT_8c04b14c + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c04b150)
            ((undefined1 *)((int)puVar4 + DAT_8c04b154 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c04b150)
            ((undefined1 *)((int)puVar4 + DAT_8c04b140 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_object_dtor_delete_8c04b15c)
            ((undefined1 *)((int)puVar4 + DAT_8c04b158 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_object_dtor_delete_8c04b15c)
            ((undefined1 *)((int)puVar4 + DAT_8c04b160 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  return *(undefined4 *)((int)puVar4 + DAT_8c04b148 + iVar1 + -0x18);
}



/* FUN_8c04b168 @ 8c04b168 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04bcc4) */
/* WARNING: Removing unreachable block (ram,0x8c04bea2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04b168(int ar4,undefined8 *ar5,undefined4 *ar6,double *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float *a5;
  undefined1 *puVar10;
  undefined4 *a6;
  undefined4 a6_00;
  undefined4 a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar12;
  uint uVar13;
  float fVar14;
  undefined8 in_dr0;
  double dVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined4 in_fr3;
  undefined8 in_dr6;
  double in_dr12;
  double in_dr14;
  double dVar19;
  undefined8 in_xd0;
  undefined8 in_xd6;
  undefined8 in_xd14;
  bool bVar20;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar12 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar12 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar12 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar12 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar12 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar12 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar12 + -0x14) = unaff_r10;
  *(undefined4 *)((int)pdVar12 + -0x18) = in_PR;
  iVar1 = -DAT_8c04b248;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar12 + iVar1 + -0x18) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)pdVar12 + iVar1 + -0x14) = (int)in_dr6;
  }
  else {
    *(undefined8 *)((int)pdVar12 + iVar1 + -0x18) = in_dr6;
    *(undefined8 *)((int)pdVar12 + iVar1 + -0x14) = in_xd6;
  }
  uVar11 = 1;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c04b250)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b24c + iVar1 + -0x18),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c04b258)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b254 + iVar1 + -0x18),ar6,a6,ar7);
  (*(code *)PTR_FUN_8c04b25c)
            (ar5,(undefined1 *)((int)pdVar12 + DAT_8c04b254 + iVar1 + -0x18),a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar12 + DAT_8c04b260 + iVar1 + -0x18) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + DAT_8c04b260 + iVar1 + -0x18),
                              (int)in_dr0);
    *(undefined4 *)((int)pdVar12 + DAT_8c04b264 + iVar1 + -0x18) =
         *(undefined4 *)((int)pdVar12 + DAT_8c04b260 + iVar1 + -0x18);
  }
  else {
    *(undefined8 *)((int)pdVar12 + DAT_8c04b260 + iVar1 + -0x18) = in_dr0;
    dVar15 = *(double *)((int)pdVar12 + DAT_8c04b260 + iVar1 + -0x18);
    *(double *)((int)pdVar12 + DAT_8c04b264 + iVar1 + -0x18) = dVar15;
  }
  *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar12 + DAT_8c04b268 + iVar1 + -0x18);
  puVar8 = ar5;
  (*(code *)PTR_Vec3_sub_8c04b270)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b26c + iVar1 + -0x1c),ar5,a6,ar7);
  *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar12 + DAT_8c04b274 + iVar1 + -0x18);
  (*(code *)PTR_Vec3_normalize_8c04b27c)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b278 + iVar1 + -0x1c),puVar8,a6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c04b258)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b280 + iVar1 + -0x18),
             (undefined1 *)((int)pdVar12 + DAT_8c04b274 + iVar1 + -0x18),a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c04b284)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b274 + iVar1 + -0x18),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c04b284)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b268 + iVar1 + -0x18),0xffffffff,a6,ar7);
  puVar8 = ar5;
  (*(code *)PTR_Vec3_ctor_copy_8c04b258)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b288 + iVar1 + -0x18),ar5,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c04b290)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b28c + iVar1 + -0x18),puVar8,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c04b290)
            ((undefined1 *)((int)pdVar12 + DAT_8c04b294 + iVar1 + -0x18),puVar8,a6,ar7);
  if (*(int *)(DAT_8c04b298 + ar4) == 3) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((undefined4)DAT_8c04b2ec,SUB84(in_dr14,0));
      *(undefined4 *)((int)pdVar12 + DAT_8c04b2f8 + iVar1 + -0x18) = DAT_8c04b2f4;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b300 + iVar1 + -0x18) = DAT_8c04b2fc;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b308 + iVar1 + -0x18) = DAT_8c04b304;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b310 + iVar1 + -0x18) = DAT_8c04b30c;
      in_dr12 = (double)CONCAT44(DAT_8c04b314,DAT_8c04b2ec._4_4_);
      *(undefined4 *)((int)pdVar12 + DAT_8c04b318 + iVar1 + -0x18) = DAT_8c04b2f4;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b320 + iVar1 + -0x18) = DAT_8c04b31c;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b328 + iVar1 + -0x18) = DAT_8c04b324;
      dVar15 = (double)CONCAT44(DAT_8c04b314,SUB84(dVar15,0));
      *(undefined4 *)((int)pdVar12 + DAT_8c04b32c + iVar1 + -0x18) = DAT_8c04b314;
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c04b2ec._4_4_,(undefined4)DAT_8c04b2ec);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b2f8 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b2f8,DAT_8c04b2f4);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b300 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b300,DAT_8c04b2fc);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b308 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b308,DAT_8c04b304);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b310 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b310,DAT_8c04b30c);
      in_dr12 = (double)CONCAT44(DAT_8c04b318,DAT_8c04b314);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b318 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b2f8,DAT_8c04b2f4);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b320 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b320,DAT_8c04b31c);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b328 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b328,DAT_8c04b324);
      dVar15 = (double)CONCAT44(DAT_8c04b318,DAT_8c04b314);
      *(double *)((int)pdVar12 + DAT_8c04b32c + iVar1 + -0x18) = dVar15;
    }
  }
  else if (*(int *)(DAT_8c04b298 + ar4) == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((undefined4)DAT_8c04b3a0,SUB84(in_dr14,0));
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3ac + iVar1 + -0x18) = DAT_8c04b3a8;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3b4 + iVar1 + -0x18) = DAT_8c04b3b0;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3bc + iVar1 + -0x18) = DAT_8c04b3b8;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3c4 + iVar1 + -0x18) = DAT_8c04b3c0;
      in_dr12 = (double)CONCAT44(DAT_8c04b3c8,DAT_8c04b3a0._4_4_);
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3d0 + iVar1 + -0x18) = DAT_8c04b3cc;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3d4 + iVar1 + -0x18) = DAT_8c04b3a8;
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3d8 + iVar1 + -0x18) = DAT_8c04b3b0;
      dVar15 = (double)CONCAT44((undefined4)DAT_8c04b3a0,SUB84(dVar15,0));
      *(undefined4 *)((int)pdVar12 + DAT_8c04b3dc + iVar1 + -0x18) = (undefined4)DAT_8c04b3a0;
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c04b3a0._4_4_,(undefined4)DAT_8c04b3a0);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b3ac + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b3ac,DAT_8c04b3a8);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b3b4 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b3b4,DAT_8c04b3b0);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b3bc + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b3bc,DAT_8c04b3b8);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b3c4 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b3c4,DAT_8c04b3c0);
      in_dr12 = (double)CONCAT44(DAT_8c04b3cc,DAT_8c04b3c8);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b3d0 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b3d0,DAT_8c04b3cc);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b3d4 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b3ac,DAT_8c04b3a8);
      *(ulonglong *)((int)pdVar12 + DAT_8c04b3d8 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04b3b4,DAT_8c04b3b0);
      dVar15 = (double)CONCAT44(DAT_8c04b3a0._4_4_,(undefined4)DAT_8c04b3a0);
      *(double *)((int)pdVar12 + DAT_8c04b3dc + iVar1 + -0x18) = dVar15;
    }
  }
  iVar2 = *(int *)(ar4 + 0x40);
  if ((5 < iVar2) || (iVar2 < 0)) goto switchD_8c04b39c_caseD_2;
  switch(iVar2) {
  default:
    uVar3 = (*(code *)PTR_FUN_8c04b474)(ar4,iVar2 * 4,a6,ar7);
    *(undefined4 *)((int)pdVar12 + DAT_8c04b478 + iVar1 + -0x18) = uVar3;
    if (*(int *)((int)pdVar12 + DAT_8c04b478 + iVar1 + -0x18) != 0) {
      *(undefined4 *)((int)pdVar12 + DAT_8c04b47c + iVar1 + -0x18) = 1;
      (*(code *)PTR_object_dtor_delete_8c04b484)
                ((undefined1 *)((int)pdVar12 + DAT_8c04b480 + iVar1 + -0x18),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c04b484)
                ((undefined1 *)((int)pdVar12 + DAT_8c04b488 + iVar1 + -0x18),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c04b490)
                ((undefined1 *)((int)pdVar12 + DAT_8c04b48c + iVar1 + -0x18),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c04b490)
                ((undefined1 *)((int)pdVar12 + DAT_8c04b494 + iVar1 + -0x18),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c04b490)
                ((undefined1 *)((int)pdVar12 + DAT_8c04b498 + iVar1 + -0x18),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c04b490)
                ((undefined1 *)((int)pdVar12 + DAT_8c04b49c + iVar1 + -0x18),0xffffffff,a6,ar7);
      return *(undefined4 *)((int)pdVar12 + DAT_8c04b47c + iVar1 + -0x18);
    }
    if (*(int *)(DAT_8c04b61c + ar4) == 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)ar5,SUB84(dVar15,0));
        *(undefined4 *)(ar4 + DAT_8c04b620) = *(undefined4 *)ar5;
      }
      else {
        uVar16 = *ar5;
        *(undefined8 *)(ar4 + DAT_8c04b620) = uVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar3 = *(undefined4 *)((int)ar5 + 4);
        uVar16 = CONCAT44(uVar3,(int)uVar16);
        *(undefined4 *)(ar4 + DAT_8c04b624) = uVar3;
      }
      else {
        uVar16 = *(undefined8 *)((int)ar5 + 4);
        *(undefined8 *)(ar4 + DAT_8c04b624) = uVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar3 = *(undefined4 *)(ar5 + 1);
        uVar16 = CONCAT44(uVar3,(int)uVar16);
        *(undefined4 *)(ar4 + DAT_8c04b628) = uVar3;
      }
      else {
        uVar16 = ar5[1];
        *(undefined8 *)(ar4 + DAT_8c04b628) = uVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)((int)pdVar12 + DAT_8c04b630 + iVar1 + -0x18),(int)uVar16);
        *(undefined4 *)(ar4 + DAT_8c04b62c) =
             *(undefined4 *)((int)pdVar12 + DAT_8c04b630 + iVar1 + -0x18);
      }
      else {
        uVar16 = *(undefined8 *)((int)pdVar12 + DAT_8c04b630 + iVar1 + -0x18);
        *(undefined8 *)(ar4 + DAT_8c04b62c) = uVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar3 = *(undefined4 *)((int)pdVar12 + DAT_8c04b638 + iVar1 + -0x18);
        uVar16 = CONCAT44(uVar3,(int)uVar16);
        *(undefined4 *)(ar4 + DAT_8c04b634) = uVar3;
      }
      else {
        uVar16 = *(undefined8 *)((int)pdVar12 + DAT_8c04b638 + iVar1 + -0x18);
        *(undefined8 *)(ar4 + DAT_8c04b634) = uVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar3 = *(undefined4 *)((int)pdVar12 + DAT_8c04b640 + iVar1 + -0x18);
        dVar15 = (double)CONCAT44(uVar3,(int)uVar16);
        *(undefined4 *)(ar4 + DAT_8c04b63c) = uVar3;
      }
      else {
        dVar15 = *(double *)((int)pdVar12 + DAT_8c04b640 + iVar1 + -0x18);
        *(double *)(ar4 + DAT_8c04b63c) = dVar15;
      }
    }
    uVar13 = SUB84(dVar15,0);
    (*(code *)PTR_FUN_8c04b644)(ar4,PTR_FUN_8c04b644,a6,ar7);
    uVar17 = (ulonglong)uVar13;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c04b648) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c04b648) = uVar17;
    }
    *(undefined4 *)((int)pdVar12 + iVar1 + 0x14) = *(undefined4 *)(DAT_8c04b64c + ar4);
    (*(code *)PTR_FUN_8c04b654)
              (ar4,(*(int *)((int)pdVar12 + iVar1 + 0x14) * 2 +
                   *(int *)((int)pdVar12 + iVar1 + 0x14)) * 8 + DAT_8c04b650,a6,ar7);
    uVar13 = (uint)uVar17;
    puVar10 = (undefined1 *)((int)pdVar12 + DAT_8c04b630 + iVar1 + -0x18);
    puVar8 = ar5;
    (*(code *)PTR_FUN_8c04b658)(ar4,ar5,puVar10,ar7);
    uVar17 = (ulonglong)uVar13;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar17;
    }
    (*(code *)PTR_FUN_8c04b660)
              ((undefined1 *)((int)pdVar12 + DAT_8c04b65c + iVar1 + -0x18),puVar8,puVar10,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar12 + DAT_8c04b664 + iVar1 + -0x18) = (int)(uVar17 >> 0x20);
    }
    else {
      *(ulonglong *)((int)pdVar12 + DAT_8c04b664 + iVar1 + -0x18) = uVar17;
    }
    iVar2 = ar4 + 0x14;
    (*(code *)PTR_FUN_8c04b660)(iVar2,puVar8,puVar10,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar12 + DAT_8c04b668 + iVar1 + -0x18) = (int)(uVar17 >> 0x20);
      uVar16 = CONCAT44(*(undefined4 *)((int)pdVar12 + DAT_8c04b668 + iVar1 + -0x18),(int)uVar17);
    }
    else {
      *(ulonglong *)((int)pdVar12 + DAT_8c04b668 + iVar1 + -0x18) = uVar17;
      uVar16 = *(undefined8 *)((int)pdVar12 + DAT_8c04b668 + iVar1 + -0x18);
    }
    (*(code *)PTR_FUN_8c04b66c)(iVar2,puVar8,puVar10,ar7);
    iVar2 = DAT_8c04b674;
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar12 + DAT_8c04b670 + iVar1 + -0x18) = (int)((ulonglong)uVar16 >> 0x20);
    }
    else {
      *(undefined8 *)((int)pdVar12 + DAT_8c04b670 + iVar1 + -0x18) = uVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar3 = *(undefined4 *)((int)pdVar12 + DAT_8c04b670 + iVar1 + -0x18);
      uVar16 = CONCAT44(uVar3,(int)uVar16);
      *(undefined4 *)(ar4 + DAT_8c04b674) = uVar3;
    }
    else {
      uVar16 = *(undefined8 *)((int)pdVar12 + DAT_8c04b670 + iVar1 + -0x18);
      *(undefined8 *)(ar4 + DAT_8c04b674) = uVar16;
    }
    *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar12 + DAT_8c04b678 + iVar1 + -0x18);
    (*(code *)PTR_FUN_8c04b67c)(ar4 + 0x14,iVar2,puVar10,ar7);
    *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar12 + DAT_8c04b680 + iVar1 + -0x18);
    (*(code *)PTR_FUN_8c04b67c)
              ((undefined1 *)((int)pdVar12 + DAT_8c04b684 + iVar1 + -0x1c),iVar2,puVar10,ar7);
    (*(code *)PTR_FUN_8c04b688)
              ((undefined1 *)((int)pdVar12 + DAT_8c04b678 + iVar1 + -0x18),
               (undefined1 *)((int)pdVar12 + DAT_8c04b680 + iVar1 + -0x18),puVar10,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar12 + DAT_8c04b68c + iVar1 + -0x18) = (int)((ulonglong)uVar16 >> 0x20);
    }
    else {
      *(undefined8 *)((int)pdVar12 + DAT_8c04b68c + iVar1 + -0x18) = uVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar3 = *(undefined4 *)((int)pdVar12 + DAT_8c04b68c + iVar1 + -0x18);
      uVar16 = CONCAT44(uVar3,(int)uVar16);
      *(undefined4 *)(ar4 + DAT_8c04b690) = uVar3;
    }
    else {
      uVar16 = *(undefined8 *)((int)pdVar12 + DAT_8c04b68c + iVar1 + -0x18);
      *(undefined8 *)(ar4 + DAT_8c04b690) = uVar16;
    }
    uVar3 = (undefined4)uVar16;
    puVar6 = PTR_Vec3_dtor_8c04b694;
    (*(code *)PTR_Vec3_dtor_8c04b694)
              ((undefined1 *)((int)pdVar12 + DAT_8c04b680 + iVar1 + -0x18),0xffffffff,
               PTR_Vec3_dtor_8c04b694,ar7);
    (*(code *)PTR_Vec3_dtor_8c04b694)
              ((undefined1 *)((int)pdVar12 + DAT_8c04b678 + iVar1 + -0x18),0xffffffff,puVar6,ar7);
    uVar17 = CONCAT44(0x3f800000,uVar3);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c04b698) = 0x3f800000;
      uVar17 = (ulonglong)*(uint *)(ar4 + 0x24);
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c04b698) = uVar17;
      in_xd0 = *(undefined8 *)(ar4 + 0x24);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c04b69c),(int)uVar17);
    }
    else {
      uVar16 = *(undefined8 *)(ar4 + DAT_8c04b69c);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar16 < (float)((ulonglong)uVar16 >> 0x20)) {
      ar7 = (double *)0x0;
      a6 = (undefined4 *)0xffffffff;
      uVar9 = 6;
      puVar6 = (undefined *)(ar4 + DAT_8c04b7b0._4_4_);
      uVar3 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04b7b8)(puVar6,6,0xffffffff,0);
      *(undefined4 *)((int)pdVar12 + DAT_8c04b7b0._4_4_ + iVar1 + -0x18) = uVar3;
      if (*(int *)((int)pdVar12 + DAT_8c04b7b0._4_4_ + iVar1 + -0x18) != 6) {
        puVar6 = (undefined *)(ar4 + DAT_8c04b7b0._4_4_);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04b7bc)(puVar6,uVar9,a6,ar7);
      }
    }
    else {
      ar7 = (double *)0x0;
      a6 = (undefined4 *)0xffffffff;
      uVar9 = 10;
      puVar6 = (undefined *)(ar4 + DAT_8c04b6a4);
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04b6a8)(puVar6,10,0xffffffff,0);
    }
    if (in_FPSCR_SZ == '\0') {
      fVar14 = *(float *)(ar4 + DAT_8c04b7c0);
      fVar18 = DAT_8c04b7c4;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c04b7c0);
      fVar14 = DAT_8c04b7c4;
      fVar18 = _DAT_8c04b7c8;
    }
    if (in_FPSCR_PR == '\0' && fVar18 < fVar14) {
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar15 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar15 / dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar14;
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
      }
      uVar3 = (*(code *)PTR_FUN_8c04b7cc)
                        (ar4 + 0x14,
                         (undefined1 *)((int)pdVar12 + (int)_DAT_8c04b7c8 + iVar1 + -0x18),a6,ar7);
      *(undefined4 *)((int)pdVar12 + DAT_8c04b7d0 + iVar1 + -0x18) = uVar3;
      *(undefined4 *)(DAT_8c04b7d4 + ar4) =
           *(undefined4 *)((int)pdVar12 + DAT_8c04b7d0 + iVar1 + -0x18);
      if (*(int *)(DAT_8c04b7d4 + ar4) == 3) {
        a7 = 0;
        a6_00 = 0xffffffff;
        uVar9 = 7;
        uVar3 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04b7b8)
                          (ar4 + DAT_8c04b7b0._4_4_,7,0xffffffff,0);
        *(undefined4 *)((int)pdVar12 + DAT_8c04b7d8 + iVar1 + -0x18) = uVar3;
        iVar2 = *(int *)((int)pdVar12 + DAT_8c04b7d8 + iVar1 + -0x18);
        uVar3 = (*(code *)PTR_FUN_8c04b7dc)(ar4,uVar9,a6_00,a7);
        *(undefined4 *)((int)pdVar12 + DAT_8c04b7e0 + iVar1 + -0x18) = uVar3;
        uVar9 = *(undefined4 *)((int)pdVar12 + DAT_8c04b7e0 + iVar1 + -0x18);
        uVar3 = (*(code *)PTR_FUN_8c04b7e4)(ar4 + DAT_8c04b7b0._4_4_,uVar9,a6_00,a7);
        *(undefined4 *)((int)pdVar12 + DAT_8c04b7e8 + iVar1 + -0x18) = uVar3;
        uVar3 = (*(code *)PTR_deref_u32_8c04b7ec)
                          (*(undefined4 *)((int)pdVar12 + DAT_8c04b7e8 + iVar1 + -0x18),uVar9,a6_00,
                           a7);
        *(undefined4 *)((int)pdVar12 + DAT_8c04b7f0 + iVar1 + -0x18) = uVar3;
        ar7 = (double *)(ar4 + DAT_8c04b7f4);
        a6 = *(undefined4 **)((int)pdVar12 + DAT_8c04b7f0 + iVar1 + -0x18);
        uVar9 = a6[1];
        *(undefined4 *)ar7 = *a6;
        *(undefined4 *)((int)ar7 + 4) = uVar9;
        puVar7 = (undefined *)a6[2];
        *(undefined **)(ar7 + 1) = puVar7;
        puVar6 = PTR_DAT_8c04b820;
        if (*(int *)(DAT_8c04b7f8 + ar4) == 3) {
          *(undefined **)(DAT_8c04b7f4 + ar4) = PTR_DAT_8c04b7fc;
          puVar6 = puVar7;
        }
        else {
          *(undefined **)(DAT_8c04b81c + ar4) = PTR_DAT_8c04b820;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c04b824) = *(undefined4 *)(ar4 + DAT_8c04b828);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c04b824) = *(undefined8 *)(ar4 + DAT_8c04b828);
        }
      }
      else {
        ar7 = (double *)0x0;
        a6 = (undefined4 *)0xffffffff;
        uVar9 = 8;
        uVar3 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04b8b8)
                          (ar4 + DAT_8c04b8b0._4_4_,8,0xffffffff,0);
        *(undefined4 *)((int)pdVar12 + DAT_8c04b8bc + iVar1 + -0x18) = uVar3;
        iVar2 = *(int *)((int)pdVar12 + DAT_8c04b8bc + iVar1 + -0x18);
        uVar3 = (*(code *)PTR_FUN_8c04b8c0)(ar4,uVar9,a6,ar7);
        *(undefined4 *)((int)pdVar12 + DAT_8c04b8c4 + iVar1 + -0x18) = uVar3;
        uVar9 = *(undefined4 *)((int)pdVar12 + DAT_8c04b8c4 + iVar1 + -0x18);
        uVar3 = (*(code *)PTR_FUN_8c04b8c8)(ar4 + DAT_8c04b8b0._4_4_,uVar9,a6,ar7);
        *(undefined4 *)((int)pdVar12 + DAT_8c04b8cc + iVar1 + -0x18) = uVar3;
        uVar3 = (*(code *)PTR_deref_u32_8c04b8d0)
                          (*(undefined4 *)((int)pdVar12 + DAT_8c04b8cc + iVar1 + -0x18),uVar9,a6,ar7
                          );
        *(undefined4 *)((int)pdVar12 + DAT_8c04b8d4 + iVar1 + -0x18) = uVar3;
        puVar5 = (undefined4 *)(ar4 + DAT_8c04b8d8);
        puVar4 = *(undefined4 **)((int)pdVar12 + DAT_8c04b8d4 + iVar1 + -0x18);
        uVar9 = puVar4[1];
        *puVar5 = *puVar4;
        puVar5[1] = uVar9;
        puVar6 = (undefined *)puVar4[2];
        puVar5[2] = puVar6;
        if (*(int *)(DAT_8c04b8dc + ar4) == 3) {
          *(undefined **)(DAT_8c04b8d8 + ar4) = PTR_DAT_8c04b8e0;
        }
        else {
          *(undefined **)(DAT_8c04b960 + ar4) = PTR_DAT_8c04b964;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c04b968) = *(undefined4 *)(ar4 + DAT_8c04b96c);
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c04b968) = *(undefined8 *)(ar4 + DAT_8c04b96c);
        }
      }
      if (iVar2 != 6) {
        puVar6 = (undefined *)(ar4 + DAT_8c04b970);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04b974)(puVar6,uVar9,a6,ar7);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04b978) = DAT_8c04b97c;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c04b978) = CONCAT44(DAT_8c04b980,DAT_8c04b97c);
      }
    }
    *(undefined4 *)(DAT_8c04b980 + ar4) = 3;
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar3 = (*(code *)PTR_rand_8c04b984)(puVar6,uVar9,a6,ar7);
    *(undefined4 *)((int)pdVar12 + DAT_8c04b988 + iVar1 + -0x18) = uVar3;
    uVar9 = 3;
    uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c04b98c)
                      (*(undefined4 *)((int)pdVar12 + DAT_8c04b988 + iVar1 + -0x18),3,a6,ar7);
    *(undefined4 *)((int)pdVar12 + iVar1 + 0x10) = uVar3;
    *(int *)(DAT_8c04b990 + ar4) = *(int *)((int)pdVar12 + iVar1 + 0x10) + 1;
    (*(code *)PTR_FUN_8c04b998)(ar4 + DAT_8c04b994,uVar9,a6,ar7);
    break;
  case 1:
    *(undefined4 *)(ar4 + 0x40) = 3;
    *(undefined4 *)(DAT_8c04b9dc + ar4) = 0;
  case 3:
    uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c04b9e4)(ar4 + DAT_8c04b9e0,iVar2 * 4,a6,ar7);
    uVar9 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    *(undefined4 *)((int)pdVar12 + DAT_8c04b9e8 + iVar1 + -0x18) = uVar3;
    iVar2 = *(int *)((int)pdVar12 + DAT_8c04b9e8 + iVar1 + -0x18);
    if (iVar2 == 5) {
      uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c04bdcc)(ar4 + DAT_8c04bdc8,uVar3,a6,ar7);
      uVar13 = SUB84(dVar15,0);
      *(undefined4 *)((int)pdVar12 + iVar1 + 0x50) = uVar3;
      uVar3 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c04bdd0)
                        (ar4 + DAT_8c04bdc8,*(undefined4 *)((int)pdVar12 + iVar1 + 0x50),a6,ar7);
      *(undefined4 *)((int)pdVar12 + iVar1 + 0x4c) = uVar3;
      fVar14 = (float)*(int *)((int)pdVar12 + iVar1 + 0x4c);
      dVar19 = (double)CONCAT44(uVar9,fVar14);
      dVar15 = (double)(ulonglong)uVar13;
      if (in_FPSCR_PR == '\0') {
        bVar20 = fVar14 < 0.0;
      }
      else {
        bVar20 = dVar19 < dVar15;
      }
      if (bVar20) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c04bdd4,uVar13);
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c04bdd8,DAT_8c04bdd4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(uVar9,fVar14 + (float)((ulonglong)dVar15 >> 0x20));
        }
        else {
          dVar19 = dVar19 + dVar15;
        }
      }
      (*(code *)PTR_Vec3_set_xyz_8c04bde4)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bde0 + iVar1 + -0x18),DAT_8c04bddc,a6,ar7);
      *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
           (undefined1 *)((int)pdVar12 + DAT_8c04bde0 + iVar1 + -0x18);
      *(undefined1 **)((int)pdVar12 + iVar1 + -0x20) =
           (undefined1 *)((int)pdVar12 + DAT_8c04bde8 + iVar1 + -0x1c);
      iVar2 = ar4 + 0x14;
      puVar10 = (undefined1 *)((int)pdVar12 + DAT_8c04bdec + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c04bdf0)(ar4,ar5,puVar10,iVar2);
      (*(code *)PTR_Vec3_assign_8c04bdf8)
                (ar4 + 0x14,(undefined1 *)((int)pdVar12 + DAT_8c04bdf4 + iVar1 + -0x18),puVar10,
                 iVar2);
      (*(code *)PTR_Vec3_dtor_8c04bdfc)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bdf4 + iVar1 + -0x18),0xffffffff,puVar10,
                 iVar2);
      puVar6 = PTR_object_dtor_delete_8c04be00;
      (*(code *)PTR_object_dtor_delete_8c04be00)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bde0 + iVar1 + -0x18),0xffffffff,
                 PTR_object_dtor_delete_8c04be00,
                 (undefined1 *)((int)pdVar12 + DAT_8c04bde0 + iVar1 + -0x18));
      ar7 = (double *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04be08;
      a6 = (undefined4 *)
           (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04be08)
                     (ar4 + DAT_8c04bdc8,DAT_8c04be04,puVar6,
                      PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04be08);
      *(undefined4 **)((int)pdVar12 + iVar1 + 0x48) = a6;
      iVar2 = *(int *)((int)pdVar12 + iVar1 + 0x48);
      if (iVar2 == 1) {
        *(undefined4 *)(DAT_8c04be0c + ar4) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      (*(code *)PTR_CAnimBody_GetCurFrame_8c04be10)(ar4 + DAT_8c04bdc8,iVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar12 + iVar1 + 0x44) = (int)((ulonglong)dVar15 >> 0x20);
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                  *(undefined4 *)((int)pdVar12 + iVar1 + 0x44));
      }
      else {
        *(double *)((int)pdVar12 + iVar1 + 0x44) = dVar15;
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar19 >> 0x20) < SUB84(dVar19,0)) {
        if (in_FPSCR_PR == '\0') {
          bVar20 = SUB84(dVar19,0) < SUB84(in_dr12,0);
        }
        else {
          bVar20 = dVar19 < in_dr12;
        }
        if (bVar20) {
          *(int *)((int)pdVar12 + iVar1 + 8) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c04be14,
                                      *(undefined4 *)(*(int *)((int)pdVar12 + iVar1 + 8) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + 8) + 0x28);
            dVar15 = (double)CONCAT44(uRam8c04be18,DAT_8c04be14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar14 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar14 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar12 + iVar1 + 8) + 0x28) = fVar14;
            dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + 8) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar15 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar15 >> 0x20) < SUB84(dVar15,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar3 = *(undefined4 *)(ar4 + 0x24);
              dVar15 = (double)CONCAT44(uVar3,SUB84(dVar15,0));
              *(undefined4 *)(ar4 + 0x28) = uVar3;
            }
            else {
              dVar15 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar15;
            }
          }
          goto LAB_8c04c060;
        }
      }
      (*(code *)PTR_FUN_8c04be68)(ar4,iVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar12 + iVar1 + 0x40) = (int)((ulonglong)dVar15 >> 0x20);
      }
      else {
        *(double *)((int)pdVar12 + iVar1 + 0x40) = dVar15;
      }
      *(int *)((int)pdVar12 + iVar1 + 4) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + iVar1 + 0x40),
                                  *(undefined4 *)(*(int *)((int)pdVar12 + iVar1 + 4) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + 4) + 0x28);
        dVar15 = *(double *)((int)pdVar12 + iVar1 + 0x40);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar15 - dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar12 + iVar1 + 4) + 0x28) = fVar14;
        fVar14 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + 4) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar15 = (double)(ulonglong)(uint)fVar14;
      if (in_FPSCR_PR == '\0' && fVar14 < 0.0) {
        ar7 = (double *)(ar4 + 0x28);
        dVar15 = (double)(ulonglong)(uint)fVar14;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)ar7 = 0;
        }
        else {
          *ar7 = dVar15;
        }
      }
    }
    else if (iVar2 == 6) {
      iVar2 = DAT_8c04bf90;
      uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c04bf94)
                        (ar4 + DAT_8c04bf90,ar4 + DAT_8c04bf90,DAT_8c04bf90,ar7);
      uVar13 = SUB84(dVar15,0);
      *(undefined4 *)((int)pdVar12 + iVar1 + 0x3c) = uVar3;
      uVar3 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c04bf98)
                        (ar4 + DAT_8c04bf90,*(undefined4 *)((int)pdVar12 + iVar1 + 0x3c),iVar2,ar7);
      *(undefined4 *)((int)pdVar12 + iVar1 + 0x38) = uVar3;
      fVar14 = (float)*(int *)((int)pdVar12 + iVar1 + 0x38);
      dVar19 = (double)CONCAT44(uVar9,fVar14);
      dVar15 = (double)(ulonglong)uVar13;
      if (in_FPSCR_PR == '\0') {
        bVar20 = fVar14 < 0.0;
      }
      else {
        bVar20 = dVar19 < dVar15;
      }
      if (bVar20) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c04bf9c,uVar13);
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c04bfa0,DAT_8c04bf9c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(uVar9,fVar14 + (float)((ulonglong)dVar15 >> 0x20));
        }
        else {
          dVar19 = dVar19 + dVar15;
        }
      }
      (*(code *)PTR_Vec3_set_xyz_8c04bfac)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bfa8 + iVar1 + -0x18),
                 *(int *)((int)pdVar12 + iVar1 + 0x38),iVar2,ar7);
      *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
           (undefined1 *)((int)pdVar12 + DAT_8c04bfa8 + iVar1 + -0x18);
      *(undefined1 **)((int)pdVar12 + iVar1 + -0x20) =
           (undefined1 *)((int)pdVar12 + DAT_8c04bfb0 + iVar1 + -0x1c);
      iVar2 = ar4 + 0x14;
      puVar10 = (undefined1 *)((int)pdVar12 + DAT_8c04bfb4 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c04bfb8)(ar4,ar5,puVar10,iVar2);
      (*(code *)PTR_Vec3_assign_8c04bfc0)
                (ar4 + 0x14,(undefined1 *)((int)pdVar12 + DAT_8c04bfbc + iVar1 + -0x18),puVar10,
                 iVar2);
      (*(code *)PTR_Vec3_dtor_8c04bfc4)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bfbc + iVar1 + -0x18),0xffffffff,puVar10,
                 iVar2);
      uVar3 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c04bfc8)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bfa8 + iVar1 + -0x18),0xffffffff,puVar10,
                 iVar2);
      ar7 = (double *)(ar4 + DAT_8c04bf90);
      a6 = (undefined4 *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c04bfd8;
      (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c04bfd8)
                (ar7,uVar3,PTR_s_CAnimBody_AdvanceFrame_033d90_8c04bfd8,ar7);
      iVar2 = DAT_8c04bf90;
      (*(code *)PTR_CAnimBody_GetCurFrame_8c04bfdc)(ar4 + DAT_8c04bf90,DAT_8c04bf90,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar12 + iVar1 + 0x34) = (int)((ulonglong)dVar15 >> 0x20);
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                  *(undefined4 *)((int)pdVar12 + iVar1 + 0x34));
      }
      else {
        *(double *)((int)pdVar12 + iVar1 + 0x34) = dVar15;
      }
      if (in_FPSCR_PR == '\0') {
        bVar20 = (float)((ulonglong)in_dr12 >> 0x20) < SUB84(dVar19,0);
      }
      else {
        bVar20 = in_dr12 < dVar19;
      }
      if (bVar20) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + DAT_8c04bfe0 + iVar1 + -0x18),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = *(double *)((int)pdVar12 + DAT_8c04bfe0 + iVar1 + -0x18);
        }
        if (in_FPSCR_PR == '\0') {
          bVar20 = SUB84(dVar19,0) < (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          bVar20 = dVar19 < dVar15;
        }
        if (bVar20) {
          *(int *)((int)pdVar12 + iVar1) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c04bfe4,
                                      *(undefined4 *)(*(int *)((int)pdVar12 + iVar1) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1) + 0x28);
            dVar15 = (double)CONCAT44(uRam8c04bfe8,DAT_8c04bfe4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar14 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar14 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar12 + iVar1) + 0x28) = fVar14;
            dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar12 + iVar1) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar15 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar15 >> 0x20) < SUB84(dVar15,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar3 = *(undefined4 *)(ar4 + 0x24);
              dVar15 = (double)CONCAT44(uVar3,SUB84(dVar15,0));
              *(undefined4 *)(ar4 + 0x28) = uVar3;
            }
            else {
              dVar15 = *(double *)(ar4 + 0x24);
              *(double *)(ar4 + 0x28) = dVar15;
            }
          }
          goto LAB_8c04c060;
        }
      }
      (*(code *)PTR_FUN_8c04c034)(ar4,iVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar12 + iVar1 + 0x30) = (int)((ulonglong)dVar15 >> 0x20);
      }
      else {
        *(double *)((int)pdVar12 + iVar1 + 0x30) = dVar15;
      }
      *(int *)((int)pdVar12 + iVar1 + -4) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + iVar1 + 0x30),
                                  *(undefined4 *)(*(int *)((int)pdVar12 + iVar1 + -4) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + -4) + 0x28);
        dVar15 = *(double *)((int)pdVar12 + iVar1 + 0x30);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar15 - dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar12 + iVar1 + -4) + 0x28) = fVar14;
        fVar14 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + -4) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar15 = (double)(ulonglong)(uint)fVar14;
      if (in_FPSCR_PR == '\0' && fVar14 < 0.0) {
        dVar15 = (double)(ulonglong)(uint)fVar14;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(double *)(ar4 + 0x28) = dVar15;
        }
      }
    }
    else if ((iVar2 == 7) || (iVar2 == 8)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar15 & 0xffffffff;
      }
      *(int *)((int)pdVar12 + iVar1 + 0xc) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c04bbf0,
                                  *(undefined4 *)(*(int *)((int)pdVar12 + iVar1 + 0xc) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + 0xc) + 0x28);
        dVar15 = (double)CONCAT44(DAT_8c04bbf4,DAT_8c04bbf0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = (float)((ulonglong)dVar15 >> 0x20);
        dVar15 = (double)CONCAT44(fVar14,SUB84(dVar15,0) * fVar14);
      }
      else {
        dVar15 = dVar15 * dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)pdVar12 + iVar1 + 0xc) + 0x28) = SUB84(dVar15,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + 0xc) + 0x28) = in_xd0;
      }
      (*(code *)PTR_CAnimBody_GetCurFrame_8c04bbf8)(ar4 + DAT_8c04bbf4,ar4 + DAT_8c04bbf4,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar12 + DAT_8c04bbfc + iVar1 + -0x18) = (int)((ulonglong)dVar15 >> 0x20);
      }
      else {
        *(double *)((int)pdVar12 + DAT_8c04bbfc + iVar1 + -0x18) = dVar15;
      }
      *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
           (undefined1 *)((int)pdVar12 + DAT_8c04bc00 + iVar1 + -0x18);
      (*(code *)PTR_FUN_8c04bc0c)
                (ar4 + DAT_8c04bbf4,*(undefined4 *)(*(int *)(DAT_8c04bc08 + ar4) + 4),a6,ar7);
      uVar3 = SUB84(dVar15,0);
      (*(code *)PTR_vec3_copy_8c023d8c_8c04bc14)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bc10 + iVar1 + -0x18),
                 (undefined1 *)((int)pdVar12 + DAT_8c04bc00 + iVar1 + -0x18),a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c04bc18)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bc00 + iVar1 + -0x18),0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar3 = *(undefined4 *)((int)pdVar12 + DAT_8c04bc10 + iVar1 + -0x18);
      }
      else {
        in_xd0 = *(undefined8 *)((int)pdVar12 + DAT_8c04bc10 + iVar1 + -0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c04bc1c),uVar3);
      }
      else {
        dVar15 = *(double *)(ar4 + DAT_8c04bc1c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar15 - dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)pdVar12 + DAT_8c04bc20 + iVar1 + -0x18) = fVar14;
        fVar14 = *(float *)((int)pdVar12 + DAT_8c04bc24 + iVar1 + -0x18);
      }
      else {
        *(undefined8 *)((int)pdVar12 + DAT_8c04bc20 + iVar1 + -0x18) = in_xd0;
        in_xd0 = *(undefined8 *)((int)pdVar12 + DAT_8c04bc24 + iVar1 + -0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c04bc28),fVar14);
      }
      else {
        dVar15 = *(double *)(ar4 + DAT_8c04bc28);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar15 - dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)pdVar12 + DAT_8c04bc2c + iVar1 + -0x18) = fVar14;
        fVar14 = *(float *)((int)pdVar12 + DAT_8c04bc30 + iVar1 + -0x18);
      }
      else {
        *(undefined8 *)((int)pdVar12 + DAT_8c04bc2c + iVar1 + -0x18) = in_xd0;
        in_xd0 = *(undefined8 *)((int)pdVar12 + DAT_8c04bc30 + iVar1 + -0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c04bc34),fVar14);
      }
      else {
        dVar15 = *(double *)(ar4 + DAT_8c04bc34);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = (float)((ulonglong)dVar15 >> 0x20);
        dVar15 = (double)CONCAT44(fVar14,SUB84(dVar15,0) - fVar14);
      }
      else {
        dVar15 = dVar15 - dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar12 + DAT_8c04bc38 + iVar1 + -0x18) = SUB84(dVar15,0);
      }
      else {
        *(undefined8 *)((int)pdVar12 + DAT_8c04bc38 + iVar1 + -0x18) = in_xd0;
      }
      (*(code *)PTR_vec3_copy_8c023d8c_8c04bc14)
                (ar4 + DAT_8c04bc1c,(undefined1 *)((int)pdVar12 + DAT_8c04bc10 + iVar1 + -0x18),a6,
                 ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c04bc40)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bc3c + iVar1 + -0x18),
                 (undefined1 *)((int)pdVar12 + DAT_8c04bc20 + iVar1 + -0x18),a6,ar7);
      *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
           (undefined1 *)((int)pdVar12 + DAT_8c04bc44 + iVar1 + -0x18);
      (*(code *)PTR_FUN_8c04bc4c)
                (ar4 + 0x14,(undefined1 *)((int)pdVar12 + DAT_8c04bc48 + iVar1 + -0x1c),a6,ar7);
      (*(code *)PTR_Vec3_assign_8c04bc50)
                (ar4 + 0x14,(undefined1 *)((int)pdVar12 + DAT_8c04bc44 + iVar1 + -0x18),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c04bc54)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bc44 + iVar1 + -0x18),0xffffffff,a6,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c04bc18)
                ((undefined1 *)((int)pdVar12 + DAT_8c04bc3c + iVar1 + -0x18),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_8c04bc58)(ar4 + 0x14,uVar3,a6,ar7);
      uVar3 = DAT_8c04bc5c;
      uVar9 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04bc60)
                        (ar4 + DAT_8c04bbf4,DAT_8c04bc5c,a6,ar7);
      *(undefined4 *)((int)pdVar12 + iVar1 + 100) = uVar9;
      if (*(int *)((int)pdVar12 + iVar1 + 100) == 1) {
        (*(code *)PTR_FUN_8c04bc68)
                  ((undefined1 *)((int)pdVar12 + DAT_8c04bc64 + iVar1 + -0x18),uVar3,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar12 + iVar1 + 0x60) = (int)((ulonglong)dVar15 >> 0x20);
        }
        else {
          *(double *)((int)pdVar12 + iVar1 + 0x60) = dVar15;
        }
        iVar2 = ar4 + 0x14;
        (*(code *)PTR_FUN_8c04bc68)(iVar2,uVar3,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar12 + iVar1 + 0x5c) = (int)((ulonglong)dVar15 >> 0x20);
          uVar16 = CONCAT44(*(undefined4 *)((int)pdVar12 + iVar1 + 0x5c),SUB84(dVar15,0));
        }
        else {
          *(double *)((int)pdVar12 + iVar1 + 0x5c) = dVar15;
          uVar16 = *(undefined8 *)((int)pdVar12 + iVar1 + 0x5c);
        }
        (*(code *)PTR_FUN_8c04bc6c)(iVar2,uVar3,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar12 + iVar1 + 0x58) = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *(undefined8 *)((int)pdVar12 + iVar1 + 0x58) = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar9 = *(undefined4 *)((int)pdVar12 + iVar1 + 0x58);
          uVar16 = CONCAT44(uVar9,(int)uVar16);
          *(undefined4 *)(ar4 + DAT_8c04bc70) = uVar9;
        }
        else {
          uVar16 = *(undefined8 *)((int)pdVar12 + iVar1 + 0x58);
          *(undefined8 *)(ar4 + DAT_8c04bc70) = uVar16;
        }
        *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
             (undefined1 *)((int)pdVar12 + DAT_8c04bc74 + iVar1 + -0x18);
        (*(code *)PTR_FUN_8c04bc78)(ar4 + 0x14,uVar3,a6,ar7);
        *(undefined1 **)((int)pdVar12 + iVar1 + -0x1c) =
             (undefined1 *)((int)pdVar12 + DAT_8c04bc7c + iVar1 + -0x18);
        (*(code *)PTR_FUN_8c04bc78)
                  ((undefined1 *)((int)pdVar12 + DAT_8c04bc80 + iVar1 + -0x1c),uVar3,a6,ar7);
        (*(code *)PTR_FUN_8c04bc84)
                  ((undefined1 *)((int)pdVar12 + DAT_8c04bc74 + iVar1 + -0x18),
                   (undefined1 *)((int)pdVar12 + DAT_8c04bc7c + iVar1 + -0x18),a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar12 + iVar1 + 0x54) = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *(undefined8 *)((int)pdVar12 + iVar1 + 0x54) = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + iVar1 + 0x54),(int)uVar16);
          *(undefined4 *)(ar4 + DAT_8c04bc88) = *(undefined4 *)((int)pdVar12 + iVar1 + 0x54);
        }
        else {
          dVar15 = *(double *)((int)pdVar12 + iVar1 + 0x54);
          *(double *)(ar4 + DAT_8c04bc88) = dVar15;
        }
        (*(code *)PTR_Vec3_dtor_8c04bc54)
                  ((undefined1 *)((int)pdVar12 + DAT_8c04bc7c + iVar1 + -0x18),0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c04bc54)
                  ((undefined1 *)((int)pdVar12 + DAT_8c04bc74 + iVar1 + -0x18),0xffffffff,a6,ar7);
        *(undefined4 *)(DAT_8c04bc8c + ar4) = 0;
        a6 = DAT_8c04bc90;
        *(undefined4 *)((int)DAT_8c04bc90 + ar4) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    else {
      *(undefined4 *)(DAT_8c04c0fc + ar4) = 3;
      uVar3 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04c104)
                        (ar4 + DAT_8c04c100,DAT_8c04c100,a6,ar7);
      *(undefined4 *)((int)pdVar12 + iVar1 + 0x2c) = uVar3;
      if (*(int *)((int)pdVar12 + iVar1 + 0x2c) == 1) {
        *(undefined4 *)(DAT_8c04c0fc + ar4) = 2;
      }
    }
LAB_8c04c060:
    (*(code *)PTR_FUN_8c04c108)(ar5,ar6,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar12 + iVar1 + 0x28) = (int)((ulonglong)dVar15 >> 0x20);
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),in_fr3);
      dVar19 = (double)CONCAT44(DAT_8c04c10c,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(double *)((int)pdVar12 + iVar1 + 0x28) = dVar15;
      dVar15 = *(double *)(ar4 + 0x48);
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar19 = (double)CONCAT44(_DAT_8c04c110,DAT_8c04c10c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar19,0) * (float)((ulonglong)dVar19 >> 0x20);
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar14,SUB84(dVar15,0));
    }
    else {
      fVar14 = SUB84(dVar19 * dVar19,0);
      dVar15 = dVar15 + dVar19 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + iVar1 + 0x28),fVar14);
    }
    else {
      dVar19 = *(double *)((int)pdVar12 + iVar1 + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      bVar20 = (float)((ulonglong)dVar15 >> 0x20) < (float)((ulonglong)dVar19 >> 0x20);
    }
    else {
      bVar20 = dVar15 < dVar19;
    }
    if (!bVar20) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
        dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar19 & 0xffffffff;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar15 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar15 / dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x3c) = fVar14;
        fVar14 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      uVar17 = (ulonglong)(uint)fVar14;
      if (in_FPSCR_PR == '\0' && 0.0 < fVar14) {
        (*(code *)PTR_FUN_8c04c108)(ar5,ar6,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar12 + iVar1 + 0x24) = (int)(uVar17 >> 0x20);
          dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),
                                    *(undefined4 *)((int)pdVar12 + iVar1 + 0x24));
        }
        else {
          *(ulonglong *)((int)pdVar12 + iVar1 + 0x24) = uVar17;
          in_xd0 = *(undefined8 *)((int)pdVar12 + iVar1 + 0x24);
          dVar15 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar14 = SUB84(dVar15 / dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(_DAT_8c04c110,fVar14);
        }
        else {
          dVar15 = (double)CONCAT44(uRam8c04c114,_DAT_8c04c110);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar14 = SUB84(dVar15 * dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x38) = fVar14;
          dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x38) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar15 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(dVar15,0) / (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar14 = SUB84(dVar15 / dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar14;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
      }
      *(undefined4 *)(ar4 + 0x40) = 4;
    }
    break;
  case 2:
    break;
  case 4:
    iVar2 = DAT_8c04c148;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c04c14c)(ar4 + DAT_8c04c148,DAT_8c04c148,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar12 + iVar1 + 0x20) = (int)((ulonglong)dVar15 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)pdVar12 + iVar1 + 0x20));
    }
    else {
      *(double *)((int)pdVar12 + iVar1 + 0x20) = dVar15;
    }
    uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c04c150)(ar4 + DAT_8c04c148,iVar2,a6,ar7);
    *(undefined4 *)((int)pdVar12 + iVar1 + 0x1c) = uVar3;
    fVar14 = SUB84(in_dr14,0);
    if (*(int *)((int)pdVar12 + iVar1 + 0x1c) == 5) {
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < fVar14) {
        if (in_FPSCR_PR == '\0') {
          bVar20 = fVar14 < SUB84(in_dr12,0);
        }
        else {
          bVar20 = in_dr14 < in_dr12;
        }
        if (bVar20) {
          *(int *)((int)pdVar12 + iVar1 + -8) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c04c194,
                                      *(undefined4 *)(*(int *)((int)pdVar12 + iVar1 + -8) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + -8) + 0x28);
            dVar15 = (double)CONCAT44(uRam8c04c198,DAT_8c04c194);
          }
          if (in_FPSCR_PR == '\0') {
            fVar14 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar14 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar12 + iVar1 + -8) + 0x28) = fVar14;
            uVar16 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + -8) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar16 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar16 >> 0x20) < (float)uVar16) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
        }
      }
    }
    else if (*(int *)((int)pdVar12 + iVar1 + 0x1c) == 6) {
      if (in_FPSCR_PR == '\0') {
        bVar20 = (float)((ulonglong)in_dr12 >> 0x20) < fVar14;
      }
      else {
        bVar20 = in_dr12 < in_dr14;
      }
      if (bVar20) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + DAT_8c04c2c8 + iVar1 + -0x18),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = *(double *)((int)pdVar12 + DAT_8c04c2c8 + iVar1 + -0x18);
        }
        if (in_FPSCR_PR == '\0') {
          bVar20 = fVar14 < (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          bVar20 = in_dr14 < dVar15;
        }
        if (bVar20) {
          *(int *)((int)pdVar12 + iVar1 + -0xc) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(DAT_8c04c2cc,
                                      *(undefined4 *)(*(int *)((int)pdVar12 + iVar1 + -0xc) + 0x28))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + -0xc) + 0x28);
            dVar15 = (double)CONCAT44(_DAT_8c04c2d0,DAT_8c04c2cc);
          }
          if (in_FPSCR_PR == '\0') {
            fVar14 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar14 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar12 + iVar1 + -0xc) + 0x28) = fVar14;
            uVar16 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + -0xc) + 0x28) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            uVar16 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar16 >> 0x20) < (float)uVar16) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
        }
      }
    }
    *(int *)((int)pdVar12 + iVar1 + -0x10) = ar4;
    a5 = (float *)(*(int *)((int)pdVar12 + iVar1 + -0x10) + 0x28);
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),
                                *(undefined4 *)(*(int *)((int)pdVar12 + iVar1 + -0x10) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)((int)pdVar12 + iVar1 + -0x10) + 0x28);
      dVar15 = *(double *)(ar4 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *a5 = fVar14;
      fVar14 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)a5 = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar14 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar14;
      }
    }
    uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04c2d8)(ar4 + DAT_8c04c2d4,a5,a6,ar7);
    *(undefined4 *)((int)pdVar12 + iVar1 + 0x18) = uVar3;
    if (*(int *)((int)pdVar12 + iVar1 + 0x18) == 1) {
      uVar11 = 0;
      *(undefined4 *)(DAT_8c04c2dc + ar4) = 2;
    }
  }
switchD_8c04b39c_caseD_2:
  (*(code *)PTR_Vec3_assign_8c04c2e4)(ar4 + DAT_8c04c2e0,ar4 + 0x14,a6,ar7);
  (*(code *)PTR_FUN_8c04c2ec)
            (ar4,(undefined1 *)((int)pdVar12 + DAT_8c04c2e8 + iVar1 + -0x18),ar5,ar7);
  *(undefined4 *)((int)pdVar12 + DAT_8c04c2f0 + iVar1 + -0x18) = uVar11;
  (*(code *)PTR_object_dtor_delete_8c04c2f8)
            ((undefined1 *)((int)pdVar12 + DAT_8c04c2f4 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_object_dtor_delete_8c04c2f8)
            ((undefined1 *)((int)pdVar12 + DAT_8c04c2fc + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c04c304)
            ((undefined1 *)((int)pdVar12 + DAT_8c04c300 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c04c304)
            ((undefined1 *)((int)pdVar12 + DAT_8c04c308 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c04c304)
            ((undefined1 *)((int)pdVar12 + DAT_8c04c2e8 + iVar1 + -0x18),0xffffffff,ar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c04c304)
            ((undefined1 *)((int)pdVar12 + DAT_8c04c30c + iVar1 + -0x18),0xffffffff,ar5,ar7);
  return *(undefined4 *)((int)pdVar12 + DAT_8c04c2f0 + iVar1 + -0x18);
}



/* FUN_8c04c314 @ 8c04c314 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04c89c) */
/* WARNING: Removing unreachable block (ram,0x8c04cf66) */
/* WARNING: Removing unreachable block (ram,0x8c04ca3a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04c314(int ar4,undefined *ar5,undefined *ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined *a5;
  undefined *puVar9;
  double *a5_00;
  double *a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar10;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar11;
  uint uVar12;
  undefined8 in_dr0;
  undefined8 uVar13;
  ulonglong uVar14;
  double dVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 in_dr2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  double in_dr12;
  double in_dr14;
  float fVar19;
  double dVar18;
  undefined8 in_xd0;
  undefined8 in_xd4;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar20;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar11 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar11 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar11 + -0xc) = 1;
  *(undefined4 *)((int)pdVar11 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar11 + -0x14) = unaff_r10;
  *(undefined4 *)((int)pdVar11 + -0x18) = in_PR;
  iVar1 = -DAT_8c04c490;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + iVar1 + -0x18) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)pdVar11 + iVar1 + -0x14) = (int)in_dr4;
    *(int *)((int)pdVar11 + iVar1 + -0x10) = (int)((ulonglong)in_dr6 >> 0x20);
  }
  else {
    *(undefined8 *)((int)pdVar11 + iVar1 + -0x18) = in_dr4;
    *(undefined8 *)((int)pdVar11 + iVar1 + -0x14) = in_xd4;
    *(undefined8 *)((int)pdVar11 + iVar1 + -0x10) = in_dr6;
  }
  uVar10 = 1;
  puVar4 = ar6;
  puVar9 = PTR_Vec3_ctor_zero_8c04c498;
  (*(code *)PTR_Vec3_ctor_zero_8c04c498)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c494 + iVar1 + -0x18),ar5,ar6,
             PTR_Vec3_ctor_zero_8c04c498);
  (*(code *)PTR_Vec3_ctor_zero_8c04c498)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c49c + iVar1 + -0x18),PTR_Vec3_ctor_zero_8c04c498
             ,puVar4,puVar9);
  if (*DAT_8c04c4a0 == '\0') {
    *DAT_8c04c4a4 = 0;
    *DAT_8c04c4a0 = '\x01';
  }
  if (*(int *)(DAT_8c04c4a8 + ar4) != 1) {
    *(undefined4 *)(DAT_8c04c4ac + ar4) = 2;
  }
  *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar11 + DAT_8c04c4b0 + iVar1 + -0x18);
  a5 = ar5;
  (*(code *)PTR_Vec3_sub_8c04c4b4)(ar6,ar5,puVar4,puVar9);
  *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar11 + DAT_8c04c4b8 + iVar1 + -0x18);
  (*(code *)PTR_Vec3_normalize_8c04c4c0)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4bc + iVar1 + -0x1c),a5,puVar4,puVar9);
  puVar9 = PTR_Vec3_ctor_copy_8c04c4c8;
  (*(code *)PTR_Vec3_ctor_copy_8c04c4c8)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4c4 + iVar1 + -0x18),
             (undefined1 *)((int)pdVar11 + DAT_8c04c4b8 + iVar1 + -0x18),puVar4,
             PTR_Vec3_ctor_copy_8c04c4c8);
  (*(code *)PTR_Vec3_dtor_8c04c4cc)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4b8 + iVar1 + -0x18),0xffffffff,puVar4,puVar9);
  (*(code *)PTR_Vec3_dtor_8c04c4cc)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4b0 + iVar1 + -0x18),0xffffffff,puVar4,puVar9);
  *(undefined4 *)((int)pdVar11 + DAT_8c04c4d0 + iVar1 + -0x18) = 0xffffffff;
  puVar2 = (undefined1 *)((int)pdVar11 + DAT_8c04c4c4 + iVar1 + -0x18);
  uVar3 = (*(code *)PTR_FUN_8c04c4d4)(ar4 + 0x14,puVar2,puVar4,puVar9);
  *(undefined4 *)((int)pdVar11 + DAT_8c04c4d8 + iVar1 + -0x18) = uVar3;
  *(undefined4 *)(DAT_8c04c4dc + ar4) = *(undefined4 *)((int)pdVar11 + DAT_8c04c4d8 + iVar1 + -0x18)
  ;
  a7 = (double *)PTR_Vec3_set_zero_8c04c4e4;
  (*(code *)PTR_Vec3_set_zero_8c04c4e4)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4e0 + iVar1 + -0x18),puVar2,puVar4,
             PTR_Vec3_set_zero_8c04c4e4);
  puVar9 = PTR_Vec3_set_zero_8c04c4e4;
  (*(code *)PTR_Vec3_set_zero_8c04c4e4)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4e8 + iVar1 + -0x18),PTR_Vec3_set_zero_8c04c4e4,
             puVar4,a7);
  *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar11 + DAT_8c04c4ec + iVar1 + -0x18);
  (*(code *)PTR_FUN_8c04c4f0)(ar4 + 0x14,puVar9,puVar4,a7);
  *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar11 + DAT_8c04c4f4 + iVar1 + -0x18);
  (*(code *)PTR_FUN_8c04c4f0)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4f8 + iVar1 + -0x1c),puVar9,puVar4,a7);
  (*(code *)PTR_FUN_8c04c4fc)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4ec + iVar1 + -0x18),
             (undefined1 *)((int)pdVar11 + DAT_8c04c4f4 + iVar1 + -0x18),puVar4,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + DAT_8c04c500 + iVar1 + -0x18) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)((int)pdVar11 + DAT_8c04c500 + iVar1 + -0x18));
  }
  else {
    *(undefined8 *)((int)pdVar11 + DAT_8c04c500 + iVar1 + -0x18) = in_dr0;
  }
  (*(code *)PTR_Vec3_dtor_8c04c4cc)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4f4 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  uVar3 = (undefined4)in_dr0;
  (*(code *)PTR_Vec3_dtor_8c04c4cc)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c4ec + iVar1 + -0x18),0xffffffff,puVar4,a7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)pdVar11 + DAT_8c04c504._4_4_ + iVar1 + -0x18) = (undefined4)DAT_8c04c504;
    *(undefined4 *)((int)pdVar11 + DAT_8c04c510 + iVar1 + -0x18) = DAT_8c04c50c;
    uVar13 = CONCAT44(DAT_8c04c514,uVar3);
    *(undefined4 *)((int)pdVar11 + DAT_8c04c518 + iVar1 + -0x18) = DAT_8c04c514;
  }
  else {
    *(ulonglong *)((int)pdVar11 + DAT_8c04c504._4_4_ + iVar1 + -0x18) =
         CONCAT44(DAT_8c04c504._4_4_,(undefined4)DAT_8c04c504);
    *(ulonglong *)((int)pdVar11 + DAT_8c04c510 + iVar1 + -0x18) =
         CONCAT44(DAT_8c04c510,DAT_8c04c50c);
    uVar13 = CONCAT44(DAT_8c04c518,DAT_8c04c514);
    *(undefined8 *)((int)pdVar11 + DAT_8c04c518 + iVar1 + -0x18) = uVar13;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c04c4c8)
            ((undefined1 *)((int)pdVar11 + DAT_8c04c51c + iVar1 + -0x18),ar6,puVar4,a7);
  if (*(int *)(DAT_8c04c520 + ar4) == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)pdVar11 + DAT_8c04c548._4_4_ + iVar1 + -0x18) = (undefined4)DAT_8c04c548;
      *(undefined4 *)((int)pdVar11 + DAT_8c04c554 + iVar1 + -0x18) = DAT_8c04c550;
      uVar13 = CONCAT44(DAT_8c04c55c,(int)uVar13);
      *(undefined4 *)((int)pdVar11 + DAT_8c04c560 + iVar1 + -0x18) = DAT_8c04c55c;
      in_dr12 = (double)CONCAT44(DAT_8c04c558,DAT_8c04c564);
    }
    else {
      *(ulonglong *)((int)pdVar11 + DAT_8c04c548._4_4_ + iVar1 + -0x18) =
           CONCAT44(DAT_8c04c548._4_4_,(undefined4)DAT_8c04c548);
      *(ulonglong *)((int)pdVar11 + DAT_8c04c554 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04c554,DAT_8c04c550);
      in_dr12 = (double)CONCAT44(DAT_8c04c55c,DAT_8c04c558);
      uVar13 = CONCAT44(DAT_8c04c560,DAT_8c04c55c);
      *(undefined8 *)((int)pdVar11 + DAT_8c04c560 + iVar1 + -0x18) = uVar13;
      in_xd12 = (double)CONCAT44(uRam8c04c568,DAT_8c04c564);
    }
  }
  else if (*(int *)(DAT_8c04c520 + ar4) == 4) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)pdVar11 + DAT_8c04c5ac._4_4_ + iVar1 + -0x18) = (undefined4)DAT_8c04c5ac;
      *(undefined4 *)((int)pdVar11 + DAT_8c04c5b8 + iVar1 + -0x18) = DAT_8c04c5b4;
      uVar13 = CONCAT44(DAT_8c04c5c0,(int)uVar13);
      *(undefined4 *)((int)pdVar11 + DAT_8c04c5c4 + iVar1 + -0x18) = DAT_8c04c5c0;
      in_dr12 = (double)CONCAT44(DAT_8c04c5bc,DAT_8c04c5c8);
    }
    else {
      *(ulonglong *)((int)pdVar11 + DAT_8c04c5ac._4_4_ + iVar1 + -0x18) =
           CONCAT44(DAT_8c04c5ac._4_4_,(undefined4)DAT_8c04c5ac);
      *(ulonglong *)((int)pdVar11 + DAT_8c04c5b8 + iVar1 + -0x18) =
           CONCAT44(DAT_8c04c5b8,DAT_8c04c5b4);
      in_dr12 = (double)CONCAT44(DAT_8c04c5c0,DAT_8c04c5bc);
      uVar13 = CONCAT44(DAT_8c04c5c4,DAT_8c04c5c0);
      *(undefined8 *)((int)pdVar11 + DAT_8c04c5c4 + iVar1 + -0x18) = uVar13;
      in_xd12 = (double)CONCAT44(switchD_8c04c5a8::switchdataD_8c04c5cc,DAT_8c04c5c8);
    }
  }
LAB_8c04c588:
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    break;
  case 1:
switchD_8c04c5a8_caseD_1:
    *(undefined4 *)(ar4 + 0x40) = 3;
    goto switchD_8c04c5a8_caseD_3;
  default:
    goto switchD_8c04c5a8_caseD_2;
  case 3:
    goto switchD_8c04c5a8_caseD_3;
  case 4:
    *(undefined4 *)(ar4 + 0x40) = 5;
    goto switchD_8c04c5a8_caseD_2;
  }
  if (*(int *)(DAT_8c04c5f8 + ar4) == 2) {
    puVar2 = (undefined1 *)((int)pdVar11 + DAT_8c04c628 + iVar1 + -0x18);
    (*(code *)PTR_FUN_8c04c62c)(ar5,puVar2,puVar4,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + DAT_8c04c630 + iVar1 + -0x18) = (int)((ulonglong)uVar13 >> 0x20);
      uVar13 = CONCAT44(*(undefined4 *)((int)pdVar11 + iVar1 + -0x18),
                        *(undefined4 *)((int)pdVar11 + DAT_8c04c630 + iVar1 + -0x18));
    }
    else {
      *(undefined8 *)((int)pdVar11 + DAT_8c04c630 + iVar1 + -0x18) = uVar13;
      in_xd0 = *(undefined8 *)((int)pdVar11 + DAT_8c04c630 + iVar1 + -0x18);
      uVar13 = *(undefined8 *)((int)pdVar11 + iVar1 + -0x18);
    }
    if (in_FPSCR_PR != '\0' || (float)uVar13 <= (float)((ulonglong)uVar13 >> 0x20)) {
      uVar10 = 0;
      *(undefined4 *)(DAT_8c04c634 + ar4) = 0;
      goto switchD_8c04c5a8_caseD_2;
    }
    *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar11 + DAT_8c04c750 + iVar1 + -0x18);
    (*(code *)PTR_FUN_8c04c754)(ar4 + 0x14,puVar2,puVar4,a7);
    uVar12 = (uint)uVar13;
    (*(code *)PTR_Vec3_length_8c04c758)
              ((undefined1 *)((int)pdVar11 + DAT_8c04c750 + iVar1 + -0x18),puVar2,puVar4,a7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c04c75c)
              ((undefined1 *)((int)pdVar11 + DAT_8c04c750 + iVar1 + -0x18),0xffffffff,puVar4,a7);
    uVar14 = (ulonglong)uVar12;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar14;
    }
    (*(code *)PTR_FUN_8c04c760)(ar4,uVar3,puVar4,a7);
    *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar11 + DAT_8c04c764 + iVar1 + -0x18);
    (*(code *)PTR_FUN_8c04c754)(ar4 + 0x14,uVar3,puVar4,a7);
    *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar11 + DAT_8c04c768 + iVar1 + -0x18);
    (*(code *)PTR_FUN_8c04c754)
              ((undefined1 *)((int)pdVar11 + DAT_8c04c76c + iVar1 + -0x1c),uVar3,puVar4,a7);
    (*(code *)PTR_FUN_8c04c770)
              ((undefined1 *)((int)pdVar11 + DAT_8c04c764 + iVar1 + -0x18),
               (undefined1 *)((int)pdVar11 + DAT_8c04c768 + iVar1 + -0x18),puVar4,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + DAT_8c04c774 + iVar1 + -0x18) = (int)(uVar14 >> 0x20);
    }
    else {
      *(ulonglong *)((int)pdVar11 + DAT_8c04c774 + iVar1 + -0x18) = uVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(*(undefined4 *)((int)pdVar11 + DAT_8c04c774 + iVar1 + -0x18),(int)uVar14);
      *(undefined4 *)(ar4 + DAT_8c04c778) =
           *(undefined4 *)((int)pdVar11 + DAT_8c04c774 + iVar1 + -0x18);
    }
    else {
      uVar13 = *(undefined8 *)((int)pdVar11 + DAT_8c04c774 + iVar1 + -0x18);
      *(undefined8 *)(ar4 + DAT_8c04c778) = uVar13;
    }
    uVar3 = (undefined4)uVar13;
    (*(code *)PTR_Vec3_dtor_8c04c75c)
              ((undefined1 *)((int)pdVar11 + DAT_8c04c768 + iVar1 + -0x18),0xffffffff,puVar4,a7);
    a7 = (double *)PTR_Vec3_dtor_8c04c75c;
    (*(code *)PTR_Vec3_dtor_8c04c75c)
              ((undefined1 *)((int)pdVar11 + DAT_8c04c764 + iVar1 + -0x18),0xffffffff,puVar4,
               PTR_Vec3_dtor_8c04c75c);
    iVar5 = DAT_8c04c77c;
    uVar13 = CONCAT44(0x3f800000,uVar3);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c04c77c) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c04c77c) = uVar13;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
    (*(code *)PTR_FUN_8c04c784)(ar4 + DAT_8c04c780,iVar5,puVar4,a7);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04c78c)(ar4 + DAT_8c04c788,iVar5,puVar4,a7);
    *(undefined4 *)(DAT_8c04c790 + ar4) = 0;
    goto switchD_8c04c5a8_caseD_1;
  }
  *(undefined4 *)(ar4 + 0x40) = 3;
  goto LAB_8c04c588;
switchD_8c04c5a8_caseD_3:
  puVar9 = (undefined *)((int)pdVar11 + DAT_8c04c794 + iVar1 + -0x18);
  (*(code *)PTR_FUN_8c04c798)(ar5,puVar9,puVar4,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + DAT_8c04c79c + iVar1 + -0x18) = (int)((ulonglong)uVar13 >> 0x20);
    dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + iVar1 + -0x18),
                              *(undefined4 *)((int)pdVar11 + DAT_8c04c79c + iVar1 + -0x18));
  }
  else {
    *(undefined8 *)((int)pdVar11 + DAT_8c04c79c + iVar1 + -0x18) = uVar13;
    in_xd0 = *(undefined8 *)((int)pdVar11 + DAT_8c04c79c + iVar1 + -0x18);
    dVar15 = *(double *)((int)pdVar11 + iVar1 + -0x18);
  }
  if (in_FPSCR_PR != '\0' || SUB84(dVar15,0) <= (float)((ulonglong)dVar15 >> 0x20)) {
    puVar9 = (undefined *)0x1;
    *(undefined4 *)(DAT_8c04c790 + ar4) = 1;
  }
  do {
    switch(*(undefined4 *)(DAT_8c04c7a0 + ar4)) {
    case 1:
    case 7:
      goto switchD_8c04c74a_caseD_1;
    case 2:
      *(undefined4 *)(DAT_8c04c854 + ar4) = 0;
      *(undefined4 *)(DAT_8c04c858 + ar4) = 0;
      if (*(int *)(DAT_8c04c85c + ar4) == 1) {
        *(undefined4 *)(DAT_8c04c85c + ar4) = 0;
        *(undefined4 *)(DAT_8c04c854 + ar4) = 0;
        *(undefined4 *)((int)pdVar11 + DAT_8c04c860 + iVar1 + -0x18) = 0;
        (*(code *)PTR_Vec3_dtor_8c04c868)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04c864 + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
        (*(code *)PTR_object_dtor_delete_8c04c870)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04c86c + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
        (*(code *)PTR_object_dtor_delete_8c04c870)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04c874 + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
        (*(code *)PTR_Vec3_dtor_8c04c868)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04c878 + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
        (*(code *)PTR_Vec3_dtor_8c04c868)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04c87c + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
        (*(code *)PTR_Vec3_dtor_8c04c868)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04c880 + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
        return *(undefined4 *)((int)pdVar11 + DAT_8c04c860 + iVar1 + -0x18);
      }
      uVar6 = 100;
      iVar5 = ar4;
      uVar3 = (*(code *)PTR_rand_range_8c04c990)(ar4,0,100,a7);
      uVar17 = (undefined4)in_dr2;
      *(undefined4 *)((int)pdVar11 + DAT_8c04c994 + iVar1 + -0x18) = uVar3;
      if (in_FPSCR_SZ == '\0') {
        uVar13 = CONCAT44(*(undefined4 *)((int)pdVar11 + DAT_8c04c998 + iVar1 + -0x18),
                          (float)*(int *)((int)pdVar11 + DAT_8c04c994 + iVar1 + -0x18));
      }
      else {
        uVar13 = *(undefined8 *)((int)pdVar11 + DAT_8c04c998 + iVar1 + -0x18);
      }
      if ((in_FPSCR_PR != '\0' || (float)((ulonglong)uVar13 >> 0x20) <= (float)uVar13) ||
         (iVar5 = *(int *)(DAT_8c04c99c + ar4), iVar5 != 0)) {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c04c9f8,(float)uVar13);
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c04c9fc,DAT_8c04c9f8);
        }
        if (in_FPSCR_PR == '\0') {
          bVar20 = (float)((ulonglong)dVar15 >> 0x20) < SUB84(in_dr14,0);
        }
        else {
          bVar20 = dVar15 < in_dr14;
        }
        if (bVar20) {
          puVar4 = (undefined *)((int)pdVar11 + DAT_8c04c9fc + iVar1 + -0x18);
          (*(code *)PTR_FUN_8c04ca00)(ar4,ar5,puVar4,a7);
        }
        else if (*(int *)(DAT_8c04cab8 + ar4) == -1) {
LAB_8c04ca6c:
          *(undefined4 *)(DAT_8c04cad4 + ar4) = 7;
          puVar9 = (undefined *)0x0;
          puVar4 = (undefined *)0xffffffff;
          iVar5 = 0x12;
          uVar3 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04cae0)
                            (ar4 + DAT_8c04cadc,0x12,0xffffffff,0);
          *(undefined4 *)((int)pdVar11 + iVar1 + 0x5c) = uVar3;
          if (*(int *)((int)pdVar11 + iVar1 + 0x5c) == 6) {
            if (in_FPSCR_SZ == '\0') {
              *(int *)(ar4 + DAT_8c04cb60) = (int)((ulonglong)in_dr12 >> 0x20);
            }
            else {
              *(double *)(ar4 + DAT_8c04cb60) = in_dr12;
            }
          }
          else {
            puVar9 = PTR_vec3_clear_8c04cae8;
            (*(code *)PTR_vec3_clear_8c04cae8)
                      (ar4 + DAT_8c04cae4,iVar5,puVar4,PTR_vec3_clear_8c04cae8);
            iVar5 = ar4 + DAT_8c04cadc;
            (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04caec)(iVar5,iVar5,puVar4,puVar9);
          }
          uVar3 = (*(code *)PTR_FUN_8c04cb64)(ar4,iVar5,puVar4,puVar9);
          *(undefined4 *)((int)pdVar11 + iVar1 + 0x58) = uVar3;
          uVar6 = *(undefined4 *)((int)pdVar11 + iVar1 + 0x58);
          uVar3 = (*(code *)PTR_FUN_8c04cb6c)(ar4 + DAT_8c04cb68,uVar6,puVar4,puVar9);
          *(undefined4 *)((int)pdVar11 + iVar1 + 0x54) = uVar3;
          uVar3 = (*(code *)PTR_deref_u32_8c04cb70)
                            (*(undefined4 *)((int)pdVar11 + iVar1 + 0x54),uVar6,puVar4,puVar9);
          *(undefined4 *)((int)pdVar11 + iVar1 + 0x50) = uVar3;
          puVar8 = (undefined4 *)(ar4 + DAT_8c04cb74);
          puVar7 = *(undefined4 **)((int)pdVar11 + iVar1 + 0x50);
          uVar3 = puVar7[1];
          *puVar8 = *puVar7;
          puVar8[1] = uVar3;
          a7 = (double *)puVar7[2];
          puVar8[2] = a7;
          if (*(int *)(DAT_8c04cb78 + ar4) == 3) {
            *(undefined **)(DAT_8c04cb74 + ar4) = PTR_DAT_8c04cb7c;
          }
          else {
            *(undefined **)(DAT_8c04cbb8 + ar4) = PTR_DAT_8c04cbbc;
          }
          (*(code *)PTR_FUN_8c04cbc4)
                    (ar5,(undefined1 *)((int)pdVar11 + DAT_8c04cbc0 + iVar1 + -0x18),puVar4,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + iVar1 + 0x4c) = (int)((ulonglong)dVar15 >> 0x20);
            uVar3 = SUB84(dVar15,0);
          }
          else {
            *(double *)((int)pdVar11 + iVar1 + 0x4c) = dVar15;
            uVar3 = (undefined4)*(undefined8 *)((int)pdVar11 + DAT_8c04cbc8 + iVar1 + -0x18);
          }
          dVar15 = (double)CONCAT44(0x3f800000,uVar3);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c04cbcc) = 0x3f800000;
          }
          else {
            *(double *)(ar4 + DAT_8c04cbcc) = dVar15;
          }
        }
        else {
          if (*(int *)(DAT_8c04cab8 + ar4) == 0) {
            uVar3 = (*(code *)PTR_rand_8c04cabc)(iVar5,PTR_rand_8c04cabc,uVar6,a7);
            *(undefined4 *)((int)pdVar11 + iVar1 + 100) = uVar3;
            uVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c04cac0)
                              (*(undefined4 *)((int)pdVar11 + iVar1 + 100),100,uVar6,a7);
            *(undefined4 *)((int)pdVar11 + iVar1 + -4) = uVar3;
            if (in_FPSCR_SZ == '\0') {
              dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + DAT_8c04cac4 + iVar1 + -0x18)
                                        ,(float)*(int *)((int)pdVar11 + iVar1 + -4));
            }
            else {
              dVar15 = *(double *)((int)pdVar11 + DAT_8c04cac4 + iVar1 + -0x18);
            }
            if (in_FPSCR_PR == '\0' && SUB84(dVar15,0) < (float)((ulonglong)dVar15 >> 0x20)) {
              (*(code *)PTR_FUN_8c04cacc)
                        (ar5,(undefined1 *)((int)pdVar11 + DAT_8c04cac8 + iVar1 + -0x18),uVar6,a7);
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)pdVar11 + iVar1 + 0x60) = (int)((ulonglong)dVar15 >> 0x20);
                dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + iVar1 + 0x60),uVar17);
                in_xd12 = (double)CONCAT44(SUB84(in_dr12,0),DAT_8c04cad0);
              }
              else {
                *(double *)((int)pdVar11 + iVar1 + 0x60) = dVar15;
                dVar18 = *(double *)((int)pdVar11 + iVar1 + 0x60);
              }
              if (in_FPSCR_PR == '\0') {
                fVar19 = (float)((ulonglong)in_xd12 >> 0x20) * SUB84(in_xd12,0);
                dVar15 = (double)CONCAT44(fVar19,SUB84(in_xd12,0));
                bVar20 = (float)((ulonglong)dVar18 >> 0x20) < fVar19;
              }
              else {
                dVar15 = in_xd12 * in_xd12;
                bVar20 = dVar18 < dVar15;
              }
              if (bVar20) goto LAB_8c04ca6c;
            }
          }
          uVar17 = SUB84(in_dr14,0);
          *(undefined4 *)(DAT_8c04cc70 + ar4) = 5;
          a7 = (double *)0x0;
          puVar4 = (undefined *)0xffffffff;
          uVar3 = 0x18;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04cc7c)
                    (ar4 + DAT_8c04cc78,0x18,0xffffffff,0);
          (*(code *)PTR_vec3_clear_8c04cc84)(ar4 + DAT_8c04cc80,uVar3,puVar4,a7);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04cc88)
                    (ar4 + DAT_8c04cc78,DAT_8c04cc78,puVar4,a7);
          uVar3 = (*(code *)PTR_FUN_8c04cc8c)(ar4,PTR_FUN_8c04cc8c,puVar4,a7);
          *(undefined4 *)((int)pdVar11 + iVar1 + 0x48) = uVar3;
          uVar3 = *(undefined4 *)((int)pdVar11 + iVar1 + 0x48);
          uVar6 = (*(code *)PTR_FUN_8c04cc90)(ar4 + DAT_8c04cc78,uVar3,puVar4,a7);
          *(undefined4 *)((int)pdVar11 + iVar1 + 0x44) = uVar6;
          uVar3 = (*(code *)PTR_deref_u32_8c04cc94)
                            (*(undefined4 *)((int)pdVar11 + iVar1 + 0x44),uVar3,puVar4,a7);
          *(undefined4 *)((int)pdVar11 + iVar1 + 0x40) = uVar3;
          puVar7 = (undefined4 *)(ar4 + DAT_8c04cc98);
          puVar8 = *(undefined4 **)((int)pdVar11 + iVar1 + 0x40);
          uVar3 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar3;
          puVar7[2] = puVar8[2];
          if (*(int *)(DAT_8c04cc9c + ar4) == 3) {
            *(undefined **)(DAT_8c04cc98 + ar4) = PTR_DAT_8c04cca0;
          }
          else {
            *(undefined **)(DAT_8c04cce0 + ar4) = PTR_DAT_8c04cce4;
          }
          (*(code *)PTR_FUN_8c04ccec)
                    (ar5,(undefined1 *)((int)pdVar11 + DAT_8c04cce8 + iVar1 + -0x18),puVar4,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)pdVar11 + iVar1 + 0x3c) = (int)((ulonglong)dVar15 >> 0x20);
            fVar19 = *(float *)((int)pdVar11 + iVar1 + 0x3c);
            dVar15 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
            dVar18 = (double)CONCAT44(fVar19,uVar17);
          }
          else {
            *(double *)((int)pdVar11 + iVar1 + 0x3c) = dVar15;
            dVar15 = *(double *)((int)pdVar11 + iVar1 + 0x3c);
            fVar19 = (float)((ulonglong)dVar15 >> 0x20);
            dVar18 = dVar15;
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)((ulonglong)dVar15 >> 0x20) / SUB84(in_dr12,0);
            dVar15 = (double)CONCAT44(fVar16,SUB84(dVar15,0));
            iVar5 = (int)fVar16;
          }
          else {
            dVar15 = dVar15 / in_dr12;
            iVar5 = (int)dVar15;
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)(iVar5 + 1);
            dVar15 = (double)CONCAT44(fVar16,SUB84(dVar15,0));
            dVar18 = (double)CONCAT44((fVar19 / fVar16) / SUB84(in_dr12,0),SUB84(dVar18,0));
          }
          else {
            dVar15 = (double)(iVar5 + 1);
            dVar18 = (dVar18 / dVar15) / in_dr12;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar4 + DAT_8c04ccf0) = (int)((ulonglong)dVar18 >> 0x20);
          }
          else {
            *(double *)(ar4 + DAT_8c04ccf0) = dVar18;
          }
        }
        goto switchD_8c04c74a_default;
      }
      uVar3 = (*(code *)PTR_rand_range_8c04c990)(ar4,0,3,a7);
      uVar12 = (uint)uVar13;
      *(undefined4 *)((int)pdVar11 + DAT_8c04c9a0 + iVar1 + -0x18) = uVar3;
      uVar6 = 0;
      puVar4 = (undefined *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04c9ac)
                (ar4 + DAT_8c04c9a4._4_4_,
                 *(int *)((int)pdVar11 + DAT_8c04c9a0 + iVar1 + -0x18) + 0x1a,0xffffffff,0);
      puVar9 = PTR_get_field_1c_026dd8_8c04c9b0;
      uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c04c9b0)
                        (ar4 + DAT_8c04c9a4._4_4_,PTR_get_field_1c_026dd8_8c04c9b0,puVar4,uVar6);
      *(undefined4 *)((int)pdVar11 + DAT_8c04c9b4 + iVar1 + -0x18) = uVar3;
      if (*(int *)((int)pdVar11 + DAT_8c04c9b4 + iVar1 + -0x18) == 0x20) {
        uVar6 = 0;
        puVar4 = (undefined *)0xffffffff;
        puVar9 = (undefined *)0x1a;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04c9ac)
                  (ar4 + DAT_8c04c9a4._4_4_,0x1a,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04c9b8)
                (ar4 + DAT_8c04c9a4._4_4_,puVar9,puVar4,uVar6);
      puVar9 = PTR_get_field_1c_026dd8_8c04c9b0;
      uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c04c9b0)
                        (ar4 + DAT_8c04c9a4._4_4_,PTR_get_field_1c_026dd8_8c04c9b0,puVar4,uVar6);
      *(undefined4 *)((int)pdVar11 + DAT_8c04c9bc + iVar1 + -0x18) = uVar3;
      *(int *)((int)pdVar11 + iVar1 + 4) = *(int *)(DAT_8c04c9c0 + ar4) + -3;
      *(int *)((int)pdVar11 + iVar1) = *(int *)((int)pdVar11 + DAT_8c04c9bc + iVar1 + -0x18) + -0x1a
      ;
      *(undefined4 *)(DAT_8c04c9c4 + ar4) =
           *(undefined4 *)
            (PTR_DAT_8c04c9c8 +
            *(int *)((int)pdVar11 + iVar1) * 4 +
            (*(int *)((int)pdVar11 + iVar1 + 4) * 4 + *(int *)((int)pdVar11 + iVar1 + 4)) * 8);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar12;
      }
      dVar15 = (double)CONCAT44(0x3f800000,uVar12);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04c9cc) = 0x3f800000;
      }
      else {
        *(double *)(ar4 + DAT_8c04c9cc) = dVar15;
      }
      *(undefined4 *)(DAT_8c04c9d0 + ar4) = 3;
      a7 = DAT_8c04c9d4;
      (*(code *)PTR_FUN_8c04c9d8)(ar4 + (int)DAT_8c04c9d4,puVar9,puVar4,DAT_8c04c9d4);
      break;
    case 3:
      uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04d3e8)
                        (ar4 + DAT_8c04d3e4,puVar9,puVar4,a7);
      *(undefined4 *)((int)pdVar11 + iVar1 + 0x10) = uVar3;
      if (*(int *)((int)pdVar11 + iVar1 + 0x10) == 1) {
        *(undefined4 *)(DAT_8c04d3ec + ar4) = 2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)pdVar11 + iVar1 + -0xc) = 0;
        *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)((int)pdVar11 + iVar1 + -0xc);
        dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + iVar1 + -0xc),SUB84(dVar15,0));
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)pdVar11 + iVar1 + -0xc);
      }
      else {
        *(ulonglong *)((int)pdVar11 + iVar1 + -0xc) = (ulonglong)dVar15 & 0xffffffff;
        *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)((int)pdVar11 + iVar1 + -0xc);
        dVar15 = *(double *)((int)pdVar11 + iVar1 + -0xc);
        *(double *)(ar4 + 0x28) = dVar15;
      }
      goto switchD_8c04c74a_default;
    case 4:
      uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04d484)
                        (ar4 + DAT_8c04d480,DAT_8c04d480,puVar4,a7);
      *(undefined4 *)((int)pdVar11 + iVar1 + 0xc) = uVar3;
      if (*(int *)((int)pdVar11 + iVar1 + 0xc) == 1) {
        *(undefined4 *)(DAT_8c04d488 + ar4) = 3;
        *(undefined4 *)(DAT_8c04d48c + ar4) = 0;
      }
      goto switchD_8c04c74a_default;
    case 5:
      *(undefined4 *)(DAT_8c04cef0 + ar4) = 1;
      puVar9 = PTR_CAnimBody_GetCurFrame_8c04cef8;
      (*(code *)PTR_CAnimBody_GetCurFrame_8c04cef8)
                (ar4 + DAT_8c04cef4,PTR_CAnimBody_GetCurFrame_8c04cef8,puVar4,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar11 + iVar1 + 0x34) = (int)((ulonglong)dVar15 >> 0x20);
        dVar15 = (double)CONCAT44(DAT_8c04cefc,*(undefined4 *)((int)pdVar11 + iVar1 + 0x34));
      }
      else {
        *(double *)((int)pdVar11 + iVar1 + 0x34) = dVar15;
        in_xd0 = *(undefined8 *)((int)pdVar11 + iVar1 + 0x34);
        dVar15 = (double)CONCAT44(DAT_8c04cf00,DAT_8c04cefc);
      }
      if ((in_FPSCR_PR != '\0' || (float)((ulonglong)dVar15 >> 0x20) <= SUB84(dVar15,0)) &&
         (*(int *)(DAT_8c04cf00 + ar4) == 0)) {
        *(int *)((int)pdVar11 + iVar1 + -8) = ar4;
        *(int *)(DAT_8c04cf00 + *(int *)((int)pdVar11 + iVar1 + -8)) =
             *(int *)(DAT_8c04cf00 + *(int *)((int)pdVar11 + iVar1 + -8)) + 1;
        a7 = *(double **)(DAT_8c04cf04 + ar4);
        puVar9 = (undefined *)0xd;
        puVar4 = ar5;
        (*(code *)PTR_FUN_8c04cf08)(ar4,0xd,ar5,a7);
      }
      goto switchD_8c04c74a_caseD_1;
    case 6:
      uVar3 = (*(code *)PTR_FUN_8c04cd2c)(ar4,puVar9,puVar4,a7);
      *(undefined4 *)((int)pdVar11 + iVar1 + 0x38) = uVar3;
      if (*(int *)((int)pdVar11 + iVar1 + 0x38) == 0) {
        *(undefined4 *)(DAT_8c04cd30 + ar4) = 0;
        *(undefined4 *)(DAT_8c04cd34 + ar4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    default:
      goto switchD_8c04c74a_default;
    }
  } while( true );
switchD_8c04c74a_caseD_1:
  *(undefined4 *)(DAT_8c04cef0 + ar4) = 1;
  (*(code *)PTR_CAnimBody_GetCurFrame_8c04cef8)(ar4 + DAT_8c04cef4,puVar9,puVar4,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + iVar1 + 0x30) = (int)((ulonglong)dVar15 >> 0x20);
  }
  else {
    *(double *)((int)pdVar11 + iVar1 + 0x30) = dVar15;
  }
  *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar11 + DAT_8c04cf0c + iVar1 + -0x18);
  (*(code *)PTR_FUN_8c04cf14)(ar4 + DAT_8c04cef4,**(undefined4 **)(DAT_8c04cf10 + ar4),puVar4,a7);
  (*(code *)PTR_Vec3_assign_8c04cf18)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf04 + iVar1 + -0x18),
             (undefined1 *)((int)pdVar11 + DAT_8c04cf0c + iVar1 + -0x18),puVar4,a7);
  (*(code *)PTR_Vec3_dtor_8c04cf1c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf0c + iVar1 + -0x18),0xffffffff,puVar4,a7);
  if ((*(int *)(DAT_8c04cf20 + ar4) == 3) && (*(int *)(DAT_8c04cf24 + ar4) == 5)) {
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c04cf2c,
                                *(undefined4 *)((int)pdVar11 + DAT_8c04cf28 + iVar1 + -0x18));
    }
    else {
      in_xd0 = *(undefined8 *)((int)pdVar11 + DAT_8c04cf28 + iVar1 + -0x18);
      dVar15 = (double)CONCAT44(DAT_8c04cf30,DAT_8c04cf2c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar15 >> 0x20);
      dVar15 = (double)CONCAT44(fVar19,SUB84(dVar15,0) + fVar19);
    }
    else {
      dVar15 = dVar15 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar11 + DAT_8c04cf28 + iVar1 + -0x18) = SUB84(dVar15,0);
    }
    else {
      *(undefined8 *)((int)pdVar11 + DAT_8c04cf28 + iVar1 + -0x18) = in_xd0;
    }
  }
  *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar11 + DAT_8c04cf30 + iVar1 + -0x18);
  (*(code *)PTR_Vec3_sub_8c04cf3c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf38 + iVar1 + -0x1c),ar4 + DAT_8c04cf34,puVar4,
             a7);
  (*(code *)PTR_Vec3_assign_8c04cf18)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf40 + iVar1 + -0x18),
             (undefined1 *)((int)pdVar11 + DAT_8c04cf30 + iVar1 + -0x18),puVar4,a7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c04cf1c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf30 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
       (undefined1 *)((int)pdVar11 + DAT_8c04cf44 + iVar1 + -0x18);
  (*(code *)PTR_FUN_8c04cf48)(ar4 + 0x14,uVar3,puVar4,a7);
  (*(code *)PTR_Vec3_ctor_xyz_8c04cf50)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf4c + iVar1 + -0x18),uVar3,puVar4,a7);
  (*(code *)PTR_FUN_8c04cf54)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf44 + iVar1 + -0x18),
             (undefined1 *)((int)pdVar11 + DAT_8c04cf4c + iVar1 + -0x18),puVar4,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + iVar1 + 0x2c) = (int)((ulonglong)dVar15 >> 0x20);
  }
  else {
    *(double *)((int)pdVar11 + iVar1 + 0x2c) = dVar15;
  }
  (*(code *)PTR_Vec3_dtor_8c04cf1c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf4c + iVar1 + -0x18),0xffffffff,puVar4,a7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c04cf1c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf44 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  (*(code *)PTR_Vec3_ctor_xyz_8c04cf50)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf58 + iVar1 + -0x18),uVar3,puVar4,a7);
  puVar4 = (undefined *)
           (*(code *)PTR_FUN_8c04cf5c)
                     (ar4 + 0x14,(undefined1 *)((int)pdVar11 + DAT_8c04cf58 + iVar1 + -0x18),puVar4,
                      a7);
  *(undefined **)((int)pdVar11 + iVar1 + 0x28) = puVar4;
  *(undefined4 *)((int)pdVar11 + DAT_8c04cf60 + iVar1 + -0x18) =
       *(undefined4 *)((int)pdVar11 + iVar1 + 0x28);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c04cf1c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04cf58 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  if (*(int *)((int)pdVar11 + DAT_8c04cf60 + iVar1 + -0x18) == 3) {
    (*(code *)PTR_Vec3_set_xyz_8c04cfc8)
              ((undefined1 *)((int)pdVar11 + DAT_8c04cfc4 + iVar1 + -0x18),uVar3,
               PTR_Vec3_set_xyz_8c04cfc8,a7);
    *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar11 + DAT_8c04cfcc + iVar1 + -0x18);
    a7 = (double *)(ar4 + DAT_8c04cfd4);
    puVar4 = PTR_FUN_8c04cfd8;
    (*(code *)PTR_FUN_8c04cfd8)
              (a7,(undefined1 *)((int)pdVar11 + DAT_8c04cfd0 + iVar1 + -0x1c),PTR_FUN_8c04cfd8,a7);
    (*(code *)PTR_Vec3_assign_8c04cfdc)
              (ar4 + DAT_8c04cfd4,(undefined1 *)((int)pdVar11 + DAT_8c04cfcc + iVar1 + -0x18),puVar4
               ,a7);
    (*(code *)PTR_Vec3_dtor_8c04cfe0)
              ((undefined1 *)((int)pdVar11 + DAT_8c04cfcc + iVar1 + -0x18),0xffffffff,puVar4,a7);
    (*(code *)PTR_object_dtor_delete_8c04cfe4)
              ((undefined1 *)((int)pdVar11 + DAT_8c04cfc4 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  }
  else if (*(int *)((int)pdVar11 + DAT_8c04cf60 + iVar1 + -0x18) == 4) {
    a7 = (double *)((int)pdVar11 + DAT_8c04d098 + iVar1 + -0x18);
    puVar4 = PTR_Vec3_set_xyz_8c04d09c;
    (*(code *)PTR_Vec3_set_xyz_8c04d09c)(a7,uVar3,PTR_Vec3_set_xyz_8c04d09c,a7);
    *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar11 + DAT_8c04d0a0 + iVar1 + -0x18);
    (*(code *)PTR_FUN_8c04d0ac)
              (ar4 + DAT_8c04d0a8,(undefined1 *)((int)pdVar11 + DAT_8c04d0a4 + iVar1 + -0x1c),puVar4
               ,a7);
    (*(code *)PTR_Vec3_assign_8c04d0b0)
              (ar4 + DAT_8c04d0a8,(undefined1 *)((int)pdVar11 + DAT_8c04d0a0 + iVar1 + -0x18),puVar4
               ,a7);
    (*(code *)PTR_Vec3_dtor_8c04d0b4)
              ((undefined1 *)((int)pdVar11 + DAT_8c04d0a0 + iVar1 + -0x18),0xffffffff,puVar4,a7);
    (*(code *)PTR_object_dtor_delete_8c04d0b8)
              ((undefined1 *)((int)pdVar11 + DAT_8c04d098 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  }
  puVar2 = (undefined1 *)((int)pdVar11 + DAT_8c04d0bc + iVar1 + -0x18);
  (*(code *)PTR_Vec3_assign_8c04d0b0)(ar4 + DAT_8c04d0c0,puVar2,puVar4,a7);
  (*(code *)PTR_Vec3_length_sq_8c04d0c8)
            ((undefined1 *)((int)pdVar11 + DAT_8c04d0c4 + iVar1 + -0x18),puVar2,puVar4,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar11 + iVar1 + 0x24) = (int)((ulonglong)dVar15 >> 0x20);
  }
  else {
    *(double *)((int)pdVar11 + iVar1 + 0x24) = dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + iVar1 + 0x24),
                              *(undefined4 *)(ar4 + DAT_8c04d0cc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c04d0cc);
    dVar15 = *(double *)((int)pdVar11 + iVar1 + 0x24);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)(ulonglong)(uint)(SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20));
  }
  else {
    dVar15 = dVar15 * dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar15,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  iVar5 = *(int *)(DAT_8c04d0d0 + ar4);
  if (iVar5 == 1) {
    a7 = (double *)(ar4 + DAT_8c04d204);
    dVar15 = (double)((ulonglong)dVar15 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)a7 = 0;
    }
    else {
      *a7 = dVar15;
    }
  }
  else {
    if (iVar5 == 5) {
      if (*(int *)(DAT_8c04d16c + ar4) != 1) {
        (*(code *)PTR_Vec3_set_xyz_8c04d174)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04d170 + iVar1 + -0x18),puVar2,puVar4,a7);
        *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
             (undefined1 *)((int)pdVar11 + DAT_8c04d170 + iVar1 + -0x18);
        *(undefined1 **)((int)pdVar11 + iVar1 + -0x20) =
             (undefined1 *)((int)pdVar11 + DAT_8c04d178 + iVar1 + -0x1c);
        a7 = (double *)(ar4 + 0x14);
        (*(code *)PTR_FUN_8c04d180)
                  (ar4,ar5,(undefined1 *)((int)pdVar11 + DAT_8c04d17c + iVar1 + -0x20),a7);
        puVar4 = (undefined *)((int)pdVar11 + DAT_8c04d184 + iVar1 + -0x18);
        (*(code *)PTR_Vec3_assign_8c04d188)(ar4 + 0x14,puVar4,puVar4,a7);
        (*(code *)PTR_Vec3_dtor_8c04d18c)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04d184 + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
        puVar2 = (undefined1 *)0xffffffff;
        (*(code *)PTR_object_dtor_delete_8c04d190)
                  ((undefined1 *)((int)pdVar11 + DAT_8c04d170 + iVar1 + -0x18),0xffffffff,puVar4,a7)
        ;
      }
      uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04d198)
                        (ar4 + DAT_8c04d194,puVar2,puVar4,a7);
      *(undefined4 *)((int)pdVar11 + iVar1 + 0x20) = uVar3;
      if (*(int *)((int)pdVar11 + iVar1 + 0x20) == 1) {
        *(undefined4 *)(DAT_8c04d19c + ar4) = 0;
      }
      goto switchD_8c04c74a_default;
    }
    if (iVar5 != 7) goto switchD_8c04c74a_default;
  }
  a5_00 = *(double **)(DAT_8c04d208 + ar4);
  puVar4 = DAT_8c04d208;
  if (a5_00 == (double *)0x1) {
    uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04d210)
                      (ar4 + DAT_8c04d20c,1,DAT_8c04d208,a7);
    *(undefined4 *)((int)pdVar11 + iVar1 + 0x1c) = uVar3;
    if (*(int *)((int)pdVar11 + iVar1 + 0x1c) == 1) {
      *(undefined4 *)(DAT_8c04d214 + ar4) = 0;
      a7 = (double *)0x0;
      puVar4 = (undefined *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04d21c)(ar4 + DAT_8c04d20c,0x1a,0xffffffff,0);
      a5_00 = (double *)PTR_s_CAnimBody_SetFrame_033e6e_8c04d220;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04d220)
                (ar4 + DAT_8c04d20c,PTR_s_CAnimBody_SetFrame_033e6e_8c04d220,puVar4,a7);
    }
  }
  else if (*(int *)(DAT_8c04d288 + ar4) == 1) {
    uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04d290)
                      (ar4 + DAT_8c04d28c,a5_00,DAT_8c04d208,a7);
    *(undefined4 *)((int)pdVar11 + iVar1 + 0x18) = uVar3;
    if (*(int *)((int)pdVar11 + iVar1 + 0x18) == 1) {
      *(undefined4 *)(DAT_8c04d288 + ar4) = 2;
      (*(code *)PTR_vec3_clear_8c04d298)(ar4 + DAT_8c04d294,ar4 + DAT_8c04d294,puVar4,a7);
      a7 = (double *)0x0;
      puVar4 = (undefined *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04d2a0)(ar4 + DAT_8c04d28c,0x1a,0xffffffff,0);
      a5_00 = (double *)(ar4 + DAT_8c04d28c);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04d2a4)(a5_00,a5_00,puVar4,a7);
    }
  }
  else {
    uVar3 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c04d364)
                      (ar4 + DAT_8c04d360,a5_00,DAT_8c04d208,a7);
    *(undefined4 *)((int)pdVar11 + iVar1 + 0x14) = uVar3;
    if (*(int *)((int)pdVar11 + iVar1 + 0x14) == 7) {
      a7 = (double *)0x1;
      *(undefined4 *)(DAT_8c04d368 + ar4) = 1;
      a5_00 = (double *)(ar4 + DAT_8c04d36c);
      if (in_FPSCR_SZ == '\0') {
        *(int *)a5_00 = (int)((ulonglong)in_dr12 >> 0x20);
      }
      else {
        *a5_00 = in_dr12;
      }
    }
  }
  if (*(int *)(DAT_8c04d370 + ar4) != 1) {
    (*(code *)PTR_Vec3_set_xyz_8c04d37c)
              ((undefined1 *)((int)pdVar11 + DAT_8c04d374._4_4_ + iVar1 + -0x18),a5_00,puVar4,a7);
    *(undefined1 **)((int)pdVar11 + iVar1 + -0x1c) =
         (undefined1 *)((int)pdVar11 + DAT_8c04d374._4_4_ + iVar1 + -0x18);
    *(undefined1 **)((int)pdVar11 + iVar1 + -0x20) =
         (undefined1 *)((int)pdVar11 + DAT_8c04d380 + iVar1 + -0x1c);
    a7 = (double *)(ar4 + 0x14);
    puVar4 = (undefined *)((int)pdVar11 + DAT_8c04d384 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c04d388)(ar4,ar5,puVar4,a7);
    (*(code *)PTR_Vec3_assign_8c04d390)
              (ar4 + 0x14,(undefined1 *)((int)pdVar11 + DAT_8c04d38c + iVar1 + -0x18),puVar4,a7);
    (*(code *)PTR_Vec3_dtor_8c04d394)
              ((undefined1 *)((int)pdVar11 + DAT_8c04d38c + iVar1 + -0x18),0xffffffff,puVar4,a7);
    (*(code *)PTR_object_dtor_delete_8c04d398)
              ((undefined1 *)((int)pdVar11 + DAT_8c04d374._4_4_ + iVar1 + -0x18),0xffffffff,puVar4,
               a7);
  }
switchD_8c04c74a_default:
  uVar12 = SUB84(dVar15,0);
  if (*(int *)(DAT_8c04d48c + ar4) == 1) {
    if (*(int *)(DAT_8c04d488 + ar4) == 0) {
      *(undefined4 *)(DAT_8c04d490 + ar4) = 0;
      *(undefined4 *)(DAT_8c04d48c + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar15 & 0xffffffff;
      }
      uVar10 = 0;
      *(undefined4 *)(DAT_8c04d488 + ar4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 0;
      (*(code *)PTR_FUN_8c04d498)(ar4 + DAT_8c04d494,ar4 + DAT_8c04d494,puVar4,a7);
      *(undefined4 *)(DAT_8c04d49c + ar4) = 0;
    }
    else {
      a7 = *(double **)(DAT_8c04d51c + ar4);
      if (a7 == (double *)0x1) {
        uVar3 = DAT_8c04d520;
        uVar6 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04d528)
                          (ar4 + DAT_8c04d524,DAT_8c04d520,puVar4,1);
        *(undefined4 *)((int)pdVar11 + iVar1 + 8) = uVar6;
        if (*(int *)((int)pdVar11 + iVar1 + 8) == 1) {
          *(undefined4 *)(DAT_8c04d52c + ar4) = 0;
          (*(code *)PTR_FUN_8c04d534)(ar4 + DAT_8c04d530,uVar3,puVar4,a7);
          (*(code *)PTR_FUN_8c04d534)(ar4 + DAT_8c04d538,PTR_FUN_8c04d534,puVar4,a7);
          *(undefined4 *)(DAT_8c04d51c + ar4) = 2;
          *(undefined4 *)(DAT_8c04d53c + ar4) = 0;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar12;
          }
          uVar10 = 0;
          *(undefined4 *)(ar4 + 0x40) = 0;
        }
      }
    }
  }
  else if (*(int *)(DAT_8c04d554 + ar4) == 0) {
    *(undefined4 *)(DAT_8c04d554 + ar4) = 2;
  }
switchD_8c04c5a8_caseD_2:
  (*(code *)PTR_Vec3_assign_8c04d600)(ar4 + DAT_8c04d5fc,ar4 + 0x14,puVar4,a7);
  *(undefined4 *)((int)pdVar11 + DAT_8c04d604 + iVar1 + -0x18) = uVar10;
  (*(code *)PTR_Vec3_dtor_8c04d60c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04d608 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  (*(code *)PTR_object_dtor_delete_8c04d614)
            ((undefined1 *)((int)pdVar11 + DAT_8c04d610 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  (*(code *)PTR_object_dtor_delete_8c04d614)
            ((undefined1 *)((int)pdVar11 + DAT_8c04d618 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  (*(code *)PTR_Vec3_dtor_8c04d60c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04d61c + iVar1 + -0x18),0xffffffff,puVar4,a7);
  (*(code *)PTR_Vec3_dtor_8c04d60c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04d620 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  (*(code *)PTR_Vec3_dtor_8c04d60c)
            ((undefined1 *)((int)pdVar11 + DAT_8c04d624 + iVar1 + -0x18),0xffffffff,puVar4,a7);
  return *(undefined4 *)((int)pdVar11 + DAT_8c04d604 + iVar1 + -0x18);
}



/* FUN_8c04d62c @ 8c04d62c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04d62c(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  int iVar2;
  int *a6;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  double in_dr0;
  undefined4 uVar11;
  undefined8 uVar8;
  double dVar9;
  ulonglong uVar10;
  undefined4 in_fr3;
  double dVar12;
  undefined4 in_fr5;
  ulonglong in_dr14;
  double dVar13;
  undefined8 in_xd14;
  bool bVar14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
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
  uVar3 = 1;
  dVar13 = (double)(in_dr14 & 0xffffffff00000000);
  if (2 < *(int *)(DAT_8c04d67c + ar4)) {
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44((int)(in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
      in_dr0 = (double)CONCAT44(DAT_8c04d680,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c04d684,DAT_8c04d680);
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                SUB84(dVar13,0) * (float)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      dVar13 = dVar13 * in_dr0;
    }
  }
  iVar2 = ar5;
  a6 = ar6;
  switch(*(undefined4 *)(DAT_8c04d684 + ar4)) {
  case 0:
    uVar11 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04d710)(ar4 + DAT_8c04d70c,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0x18) = uVar11;
    if (*(int *)((int)puVar4 + -0x18) == 1) {
      *(int *)((int)puVar4 + -0x3c) = ar4;
      *(int *)(DAT_8c04d714 + *(int *)((int)puVar4 + -0x3c)) =
           *(int *)(DAT_8c04d714 + *(int *)((int)puVar4 + -0x3c)) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(DAT_8c04d718 + ar4) = 1;
      (*(code *)PTR_FUN_8c04d720)(ar4 + DAT_8c04d71c,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c04d720)(ar4 + DAT_8c04d724,ar5,ar6,ar7);
    }
    break;
  case 1:
    ar7 = 0;
    a6 = (int *)0xffffffff;
    iVar2 = 9;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04d898)(ar4 + DAT_8c04d890._4_4_,9,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04d89c)(ar4 + DAT_8c04d890._4_4_,iVar2,a6,ar7);
    *(int *)((int)puVar4 + -0x40) = ar4;
    *(int *)(DAT_8c04d8a0 + *(int *)((int)puVar4 + -0x40)) =
         *(int *)(DAT_8c04d8a0 + *(int *)((int)puVar4 + -0x40)) + 1;
    in_fr5 = DAT_8c04d8a4._4_4_;
    if (in_FPSCR_SZ == '\0') {
      in_fr5 = (undefined4)DAT_8c04d8a4;
    }
    (*(code *)PTR_FUN_8c04d8ac)(ar4,iVar2,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)((int)puVar4 + -0x1c) = in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar11 = *(undefined4 *)((int)puVar4 + -0x1c);
      in_dr0 = (double)CONCAT44(uVar11,SUB84(in_dr0,0));
      *(undefined4 *)(ar4 + DAT_8c04d8b0) = uVar11;
    }
    else {
      in_dr0 = *(double *)((int)puVar4 + -0x1c);
      *(double *)(ar4 + DAT_8c04d8b0) = in_dr0;
    }
  case 2:
    uVar11 = SUB84(in_dr0,0);
    if (in_FPSCR_SZ != '\0') {
      in_fr5 = (undefined4)*(undefined8 *)(ar4 + DAT_8c04d8b4);
    }
    (*(code *)PTR_FUN_8c04d8b8)(ar4,iVar2,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44((undefined4)DAT_8c04d8c0,uVar11);
      *(undefined4 *)(ar4 + DAT_8c04d8bc) = (undefined4)DAT_8c04d8c0;
    }
    else {
      uVar8 = CONCAT44(DAT_8c04d8c0._4_4_,(undefined4)DAT_8c04d8c0);
      *(undefined8 *)(ar4 + DAT_8c04d8bc) = uVar8;
    }
    (**(code **)(DAT_8c04d8c0._4_4_ + *ar6))(ar6,iVar2,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x20) = (int)((ulonglong)uVar8 >> 0x20);
      dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x20),in_fr3);
      dVar9 = (double)CONCAT44(DAT_8c04d8c8,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(undefined8 *)((int)puVar4 + -0x20) = uVar8;
      dVar12 = *(double *)((int)puVar4 + -0x20);
      dVar9 = (double)CONCAT44(PTR_FUN_8c04d8cc,DAT_8c04d8c8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      dVar13 = (double)CONCAT44(((float)((ulonglong)dVar12 >> 0x20) - fVar7) - SUB84(dVar13,0),
                                SUB84(dVar12,0));
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
      dVar13 = (dVar12 - dVar9 * dVar9) - dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar7);
    }
    else {
      dVar12 = *(double *)(ar5 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar14 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      bVar14 = dVar13 < dVar12;
    }
    if (bVar14) {
      (*(code *)PTR_FUN_8c04d8cc)(ar4,iVar2,a6,ar7);
      dVar12 = (double)((ulonglong)dVar12 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04d8bc) = 0;
      }
      else {
        *(double *)(ar4 + DAT_8c04d8bc) = dVar12;
      }
      (*(code *)PTR_vec3_clear_8c04d8d4)(ar4 + DAT_8c04d8d0,iVar2,a6,ar7);
    }
    uVar5 = SUB84(dVar12,0);
    uVar11 = DAT_8c04d8d8;
    if (in_FPSCR_SZ == '\0') {
      uVar11 = in_fr5;
    }
    (*(code *)PTR_FUN_8c04d8dc)(ar4,iVar2,a6,ar7);
    if (in_FPSCR_SZ != '\0') {
      uVar11 = (undefined4)*(undefined8 *)(ar4 + DAT_8c04d8b0);
    }
    uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04d8e0)
                      (ar4 + DAT_8c04d890._4_4_,iVar2,a6,ar7);
    *(undefined4 *)((int)puVar4 + -0x24) = uVar1;
    if (*(int *)((int)puVar4 + -0x24) == 1) {
      a5 = 9;
      uVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c04d8e4)
                        (ar4 + DAT_8c04d890._4_4_,9,a6,ar7);
      *(undefined4 *)((int)puVar4 + -0x28) = uVar1;
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)*(int *)((int)puVar4 + -0x28),uVar11);
      }
      else {
        dVar13 = (double)*(int *)((int)puVar4 + -0x28);
      }
      if (in_FPSCR_PR == '\0') {
        bVar14 = (float)((ulonglong)dVar13 >> 0x20) < 0.0;
      }
      else {
        bVar14 = dVar13 < (double)(ulonglong)uVar5;
      }
      uVar6 = uVar5;
      if ((bVar14) && (uVar6 = DAT_8c04d8e8, in_FPSCR_SZ == '\0')) {
        uVar6 = uVar5;
      }
      uVar8 = CONCAT44(0x3f800000,uVar6);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04d89c)(ar4 + DAT_8c04d890._4_4_,a5,a6,ar7);
      (*(code *)PTR_FUN_8c04d8b8)(ar4,a5,a6,ar7);
      (*(code *)PTR_FUN_8c04d8ac)(ar4,a5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x2c) = (int)((ulonglong)uVar8 >> 0x20);
      }
      else {
        *(undefined8 *)((int)puVar4 + -0x2c) = uVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04d8bc) = *(undefined4 *)((int)puVar4 + -0x2c);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c04d8bc) = *(undefined8 *)((int)puVar4 + -0x2c);
      }
      *(int *)((int)puVar4 + -0x44) = ar4;
      *(int *)(DAT_8c04d8a0 + *(int *)((int)puVar4 + -0x44)) =
           *(int *)(DAT_8c04d8a0 + *(int *)((int)puVar4 + -0x44)) + 1;
    }
    break;
  case 3:
    (**(code **)(DAT_8c04d998 + *ar6))(ar6,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x30) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x30),in_fr3);
      dVar9 = (double)CONCAT44(DAT_8c04d99c,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar4 + -0x30) = in_dr0;
      dVar12 = *(double *)((int)puVar4 + -0x30);
      dVar9 = (double)CONCAT44(_DAT_8c04d9a0,DAT_8c04d99c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      dVar13 = (double)CONCAT44(((float)((ulonglong)dVar12 >> 0x20) - fVar7) - SUB84(dVar13,0),
                                SUB84(dVar12,0));
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
      dVar13 = (dVar12 - dVar9 * dVar9) - dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar7);
    }
    else {
      dVar12 = *(double *)(ar5 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar14 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      bVar14 = dVar13 < dVar12;
    }
    if (bVar14) {
      (*(code *)PTR_FUN_8c04d9a4)(ar4 + _DAT_8c04d9a0,iVar2,ar6,ar7);
      uVar5 = SUB84(dVar12,0);
      (*(code *)PTR_FUN_8c04d9a4)(ar4 + DAT_8c04d9a8,iVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c04d9a4)(ar4 + DAT_8c04d9ac,iVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04d9b0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c04d9b0) = (ulonglong)uVar5;
      }
      iVar2 = ar4 + 0x14;
      (*(code *)PTR_Vec3_assign_8c04d9b8)(ar4 + DAT_8c04d9b4,iVar2,ar6,ar7);
      (*(code *)PTR_FUN_8c04d9bc)(ar4,iVar2,ar6,ar7);
      *(int *)((int)puVar4 + -0x48) = ar4;
      *(int *)(DAT_8c04d9c0 + *(int *)((int)puVar4 + -0x48)) =
           *(int *)(DAT_8c04d9c0 + *(int *)((int)puVar4 + -0x48)) + 1;
      *(undefined4 *)(DAT_8c04d9c4 + ar4) = DAT_8c04d9c8;
    }
    break;
  case 4:
    (*(code *)PTR_FUN_8c04da4c)(ar4,ar5,ar6,ar7);
    *(int *)((int)puVar4 + -0x4c) = ar4;
    *(undefined4 *)((int)puVar4 + -0x50) =
         *(undefined4 *)(DAT_8c04da50 + *(int *)((int)puVar4 + -0x4c));
    *(int *)(DAT_8c04da50 + *(int *)((int)puVar4 + -0x4c)) = *(int *)((int)puVar4 + -0x50) + -1;
    if (*(int *)((int)puVar4 + -0x50) < 1) {
      uVar10 = (ulonglong)in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar10;
      }
      (*(code *)PTR_FUN_8c04da54)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c04da60)(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x34) = (int)(uVar10 >> 0x20);
      }
      else {
        *(ulonglong *)((int)puVar4 + -0x34) = uVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04da64) = *(undefined4 *)((int)puVar4 + -0x34);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c04da64) = *(undefined8 *)((int)puVar4 + -0x34);
      }
      *(int *)((int)puVar4 + -0x54) = ar4;
      *(int *)(DAT_8c04da68 + *(int *)((int)puVar4 + -0x54)) =
           *(int *)(DAT_8c04da68 + *(int *)((int)puVar4 + -0x54)) + 1;
      (*(code *)PTR_FUN_8c04da6c)(ar4,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c04da50 + ar4) = 0;
    }
    break;
  case 5:
    (**(code **)(DAT_8c04daf8 + *ar6))(ar6,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0x38) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar13 = (double)CONCAT44(DAT_8c04dafc,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar4 + -0x38) = in_dr0;
      dVar13 = (double)CONCAT44(PTR_FUN_8c04db00,DAT_8c04dafc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar13 * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x38),fVar7);
    }
    else {
      dVar13 = *(double *)((int)puVar4 + -0x38);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar13 + dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar10 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar7);
    }
    else {
      uVar10 = *(ulonglong *)(ar5 + 4);
    }
    if (in_FPSCR_PR != '\0' || (float)(uVar10 >> 0x20) <= (float)uVar10) {
      uVar10 = uVar10 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x70) = uVar10;
      }
      (*(code *)PTR_FUN_8c04db00)(ar4,iVar2,ar6,ar7);
      uVar5 = (uint)uVar10;
      *(undefined4 *)((int)puVar4 + -0x58) = *(undefined4 *)(DAT_8c04daf8 + ar4);
      (*(code *)PTR_FUN_8c04db08)
                (ar4,(*(int *)((int)puVar4 + -0x58) * 2 + *(int *)((int)puVar4 + -0x58)) * 8 +
                     DAT_8c04db04,ar6,ar7);
      *(undefined4 *)(DAT_8c04db0c + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04db10) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c04db10) = (ulonglong)uVar5;
      }
      *(int *)((int)puVar4 + -0x5c) = ar4;
      *(int *)(DAT_8c04db14 + *(int *)((int)puVar4 + -0x5c)) =
           *(int *)(DAT_8c04db14 + *(int *)((int)puVar4 + -0x5c)) + 1;
      *(undefined4 *)(DAT_8c04db18 + ar4) = 0;
    }
    break;
  case 6:
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x70) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x70) = (ulonglong)in_dr0 & 0xffffffff;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c04db38 @ 8c04db38 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04db38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  uint in_fr1;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  iVar1 = *(int *)(DAT_8c04dcd8 + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_vec3_clear_8c04dce0)(ar4 + DAT_8c04dcdc,ar5,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c04dce0)(ar4 + 0x6c,ar5,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c04dce0)(ar4 + DAT_8c04dce4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c04dce8) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c04dce8) = (ulonglong)in_fr1;
    }
    if (*(int *)(DAT_8c04dcec + ar4) == 4) {
      (*(code *)PTR_Vec3_set_xyz_8c04dcf4)(auStack_18,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c04dcf8)(ar4 + 0x14,auStack_18,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c04dcfc)(ar4 + 0x14,auStack_28,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c04dd00)(auStack_28,0xffffffff,ar6,ar7);
      ar5 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c04dd04)(auStack_18,0xffffffff,ar6,ar7);
    }
    (*(code *)PTR_Vec3_length_8c04dd08)(ar4 + 0x14,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c04dcfc)(ar4 + DAT_8c04dd0c,ar4 + 0x14,ar6,ar7);
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 0x49;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04dd18)
              (ar4 + DAT_8c04dd10._4_4_,0x49,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04dd1c)(ar4 + DAT_8c04dd10._4_4_,ar5,ar6,ar7);
    *(int *)(DAT_8c04dcd8 + ar4) = *(int *)(DAT_8c04dcd8 + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(int *)(DAT_8c04dcd8 + ar4) = *(int *)(DAT_8c04dcd8 + ar4) + 1;
      *(undefined4 *)(_DAT_8c04dd30 + ar4) = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return 1;
    }
    return 0;
  }
  iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04dd20)
                    (ar4 + DAT_8c04dd10._4_4_,ar5,ar6,ar7);
  if (iVar1 == 1) {
    a5 = (*(code *)PTR_get_field_1c_026dd8_8c04dd24)(ar4 + DAT_8c04dd10._4_4_,ar5,ar6,ar7);
    (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c04dd28)(ar4 + DAT_8c04dd10._4_4_,a5,ar6,ar7);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04dd1c)(ar4 + DAT_8c04dd10._4_4_,a5,ar6,ar7);
    *(int *)(DAT_8c04dcd8 + ar4) = *(int *)(DAT_8c04dcd8 + ar4) + 1;
    *(undefined4 *)(_DAT_8c04dd30 + ar4) = 0;
  }
  return 1;
}



/* FUN_8c04dd34 @ 8c04dd34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c04dd34(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar1;
  float fVar2;
  undefined8 in_dr0;
  double dVar3;
  double in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar1 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar1 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar1 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar1 + -0xc) = in_PR;
  *(undefined1 **)((int)puVar1 + -0x28) = (undefined1 *)((int)puVar1 + -0x1c);
  (*(code *)PTR_FUN_8c04ddbc)(ar4 + DAT_8c04ddb8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c04ddc0)(ar4 + DAT_8c04ddb8,(undefined1 *)((int)puVar1 + -0x1c),ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x20) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)((int)puVar1 + -0x20));
  }
  else {
    *(undefined8 *)((int)puVar1 + -0x20) = in_dr0;
    in_xd14 = *(undefined8 *)((int)puVar1 + -0x20);
  }
  a5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c04ddc4)((undefined1 *)((int)puVar1 + -0x1c),0xffffffff,ar6,ar7);
  fVar2 = (float)in_dr0;
  if (in_FPSCR_SZ == '\0') {
    fVar2 = *(float *)(ar4 + DAT_8c04ddc8);
  }
  dVar3 = (double)(ulonglong)(uint)fVar2;
  if (in_FPSCR_PR == '\0' && 0.0 < fVar2) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c04ddcc,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(PTR_FUN_8c04ddd0,DAT_8c04ddcc);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(SUB84(in_dr14,0) * (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 * dVar3;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)ar5 = SUB84(in_dr14,0);
  }
  else {
    *ar5 = in_xd14;
  }
  (*(code *)PTR_FUN_8c04ddd0)(ar4 + DAT_8c04ddb8,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar1 + -0x24) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)((int)puVar1 + -0x24) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)((int)puVar1 + -0x24);
  }
  else {
    *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)((int)puVar1 + -0x24);
  }
  return 0;
}



/* FUN_8c04ddd4 @ 8c04ddd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c04ddd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int iVar3;
  undefined4 unaff_r13;
  undefined4 uVar4;
  undefined4 unaff_r14;
  undefined8 *puVar5;
  undefined8 in_dr0;
  double dVar6;
  float fVar7;
  double in_dr14;
  double dVar8;
  undefined8 in_xd14;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar5 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar5 + -0x18) = in_PR;
  *(undefined4 *)((int)puVar5 + -0x84) = ar6;
  uVar4 = 1;
  *(undefined1 **)((int)puVar5 + -0x88) = (undefined1 *)((int)puVar5 + -0x38);
  a7 = ar7;
  (*(code *)PTR_Vec3_sub_8c04e044)(*(undefined4 *)((int)puVar5 + -0x84),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c04e048)
            ((undefined1 *)((int)puVar5 + -0x28),(undefined1 *)((int)puVar5 + -0x38),ar6,a7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c04e04c)((undefined1 *)((int)puVar5 + -0x38),0xffffffff,ar6,a7);
  uVar1 = (*(code *)PTR_get_field_6c_028cc4_8c04e050)(ar7,uVar2,ar6,a7);
  *(undefined4 *)((int)puVar5 + -0x54) = uVar1;
  iVar3 = *(int *)((int)puVar5 + -0x54);
  if (iVar3 == 0) {
    *(undefined4 *)((int)puVar5 + -0x4c) = 2;
    (*(code *)PTR_Vec3_dtor_8c04e04c)((undefined1 *)((int)puVar5 + -0x28),0xffffffff,ar6,a7);
    return *(undefined4 *)((int)puVar5 + -0x4c);
  }
  *(int *)((int)puVar5 + -0x6c) = ar4;
  *(byte *)(DAT_8c04e054 + *(int *)((int)puVar5 + -0x6c)) =
       *(byte *)(DAT_8c04e054 + *(int *)((int)puVar5 + -0x6c)) & 0xfb;
  (*(code *)PTR_Vec3_length_sq_8c04e058)((undefined1 *)((int)puVar5 + -0x28),uVar2,ar6,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar5 + -0x58) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)((int)puVar5 + -0x58));
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)in_dr0);
  }
  else {
    *(undefined8 *)((int)puVar5 + -0x58) = in_dr0;
    in_xd14 = *(undefined8 *)((int)puVar5 + -0x58);
    dVar6 = *(double *)(ar4 + 0x28);
  }
  fVar7 = SUB84(in_dr14,0);
  if (in_FPSCR_PR == '\0') {
    bVar9 = fVar7 < (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    bVar9 = in_dr14 < dVar6;
  }
  if (bVar9) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd14;
    }
  }
  else {
    *(int *)((int)puVar5 + -0x70) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               fVar7 / (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar8 = in_dr14 / dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar5 + -0x70) + 0x28),SUB84(dVar6,0))
      ;
    }
    else {
      dVar6 = *(double *)(*(int *)((int)puVar5 + -0x70) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar5 + -0x70) + 0x28) = fVar7;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar5 + -0x70) + 0x28) = in_xd14;
    }
  }
  (*(code *)PTR_FUN_8c04e05c)(ar4,uVar2,ar6,a7);
  (*(code *)PTR_FUN_8c04e060)(ar4,uVar2,ar6,a7);
  uVar1 = (*(code *)PTR_Vec3_length_8c04e064)((undefined1 *)((int)puVar5 + -0x28),uVar2,ar6,a7);
  *(undefined4 *)((int)puVar5 + -0x5c) = uVar1;
  uVar1 = *(undefined4 *)((int)puVar5 + -0x5c);
  (*(code *)PTR_Vec3_assign_8c04e068)(ar4 + 0x14,uVar1,ar6,a7);
  *(undefined1 **)((int)puVar5 + -0x88) = (undefined1 *)((int)puVar5 + -0x48);
  (**(code **)(DAT_8c04e06c + *(int *)(iVar3 + 8)))(iVar3,uVar1,ar6,a7);
  (*(code *)PTR_Vec3_assign_8c04e068)(ar4 + DAT_8c04e070,(undefined1 *)((int)puVar5 + -0x48),ar6,a7)
  ;
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c04e04c)((undefined1 *)((int)puVar5 + -0x48),0xffffffff,ar6,a7);
  iVar3 = *(int *)(DAT_8c04e074 + ar4);
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_8c04e078 + ar4) = 1;
    a7 = 0;
    ar6 = 0xffffffff;
    uVar1 = 0x12;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04e084)
              (ar4 + DAT_8c04e07c._4_4_,0x12,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04e088)(ar4 + DAT_8c04e07c._4_4_,uVar1,ar6,a7);
    *(undefined4 *)(DAT_8c04e08c + ar4) = 0;
    *(int *)((int)puVar5 + -0x74) = ar4;
    *(int *)(DAT_8c04e074 + *(int *)((int)puVar5 + -0x74)) =
         *(int *)(DAT_8c04e074 + *(int *)((int)puVar5 + -0x74)) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04e0ac)
                        (ar4 + DAT_8c04e07c._4_4_,uVar1,ar6,a7);
      *(undefined4 *)((int)puVar5 + -0x68) = uVar2;
      if (*(int *)((int)puVar5 + -0x68) == 1) {
        *(undefined4 *)(DAT_8c04e0b0 + ar4) = 2;
        *(undefined4 *)(DAT_8c04e074 + ar4) = 0;
        (*(code *)PTR_FUN_8c04e0b4)(ar4 + DAT_8c04e054,uVar1,ar6,a7);
        uVar4 = 0;
        iVar3 = ar4 + DAT_8c04e070;
        (*(code *)PTR_Vec3_assign_8c04e068)(ar4 + 0x14,iVar3,ar6,a7);
        *(undefined4 *)(DAT_8c04e078 + ar4) = 0;
        (*(code *)PTR_FUN_8c04e0b8)(ar4,iVar3,ar6,a7);
      }
    }
    goto LAB_8c04e01e;
  }
  uVar2 = (*(code *)PTR_FUN_8c04e098)(ar4 + DAT_8c04e07c._4_4_,uVar1,ar6,a7);
  *(undefined4 *)((int)puVar5 + -0x60) = uVar2;
  if (*(int *)((int)puVar5 + -0x60) == 7) {
    *(int *)((int)puVar5 + -0x78) = ar4;
    *(undefined4 *)((int)puVar5 + -0x7c) =
         *(undefined4 *)(DAT_8c04e08c + *(int *)((int)puVar5 + -0x78));
    *(int *)(DAT_8c04e08c + *(int *)((int)puVar5 + -0x78)) = *(int *)((int)puVar5 + -0x7c) + 1;
    if (4 < *(int *)((int)puVar5 + -0x7c) + 1) {
      *(int *)((int)puVar5 + -0x80) = ar4;
      *(int *)(DAT_8c04e074 + *(int *)((int)puVar5 + -0x80)) =
           *(int *)(DAT_8c04e074 + *(int *)((int)puVar5 + -0x80)) + 1;
    }
  }
  else {
    (*(code *)PTR_CAnimBody_GetCurFrame_8c04e09c)(ar4 + DAT_8c04e07c._4_4_,uVar1,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -100) = (int)((ulonglong)dVar6 >> 0x20);
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -100),SUB84(dVar6,0));
    }
    else {
      *(double *)((int)puVar5 + -100) = dVar6;
      dVar6 = *(double *)((int)puVar5 + -100);
    }
    if (in_FPSCR_PR == '\0') {
      iVar3 = (int)(float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      iVar3 = (int)dVar6;
    }
    if (iVar3 == 0x4c) {
      a7 = *(undefined4 *)((int)puVar5 + DAT_8c04e0a0 + -0x84);
      uVar1 = 5;
      (*(code *)PTR_FUN_8c04e0a4)(ar4,5,ar5,a7);
      (*(code *)PTR_FUN_8c04e0a8)(ar7,uVar1,ar5,a7);
      ar6 = ar5;
    }
  }
LAB_8c04e01e:
  *(undefined4 *)((int)puVar5 + -0x50) = uVar4;
  (*(code *)PTR_Vec3_dtor_8c04e04c)((undefined1 *)((int)puVar5 + -0x28),0xffffffff,ar6,a7);
  return *(undefined4 *)((int)puVar5 + -0x50);
}



/* FUN_8c04e0bc @ 8c04e0bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e0bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c04e0dc)(in_stack_00000000,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c04e0e0 @ 8c04e0e0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e0e0(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a7;
  undefined4 unaff_r11;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined8 in_dr0;
  double dVar6;
  undefined8 in_dr4;
  undefined8 in_dr6;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd4;
  bool bVar7;
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
  *(undefined4 *)(puVar4 + -0xc) = 1;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = in_PR;
  *(undefined1 **)(puVar4 + -0x90) = ar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar4 + -0x8c) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar4 + -0x88) = (int)in_dr4;
    *(int *)(puVar4 + -0x84) = (int)((ulonglong)in_dr6 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar4 + -0x8c) = in_dr4;
    *(undefined8 *)(puVar4 + -0x88) = in_xd4;
    *(undefined8 *)(puVar4 + -0x84) = in_dr6;
  }
  uVar3 = 1;
  uVar2 = ar5;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c04e29c)(puVar4 + -0x24,ar5,ar6,ar7);
  iVar1 = *(int *)(DAT_8c04e2a0 + ar4);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(puVar4 + -0x78) = ar4;
    *(int *)(DAT_8c04e2a0 + *(int *)(puVar4 + -0x78)) =
         *(int *)(DAT_8c04e2a0 + *(int *)(puVar4 + -0x78)) + 1;
  }
  else if (iVar1 == 1) {
    ar6 = *(undefined1 **)(puVar4 + -0x90);
    uVar2 = (*(code *)PTR_FUN_8c04e2a4)(ar4,ar5,ar6,a7);
    *(undefined4 *)(puVar4 + -0x6c) = uVar2;
    if (*(int *)(puVar4 + -0x6c) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(puVar4 + -0x7c) = ar4;
      *(int *)(DAT_8c04e2a0 + *(int *)(puVar4 + -0x7c)) =
           *(int *)(DAT_8c04e2a0 + *(int *)(puVar4 + -0x7c)) + 1;
    }
  }
  else if (iVar1 == 2) {
    *(undefined1 **)(puVar4 + -0x94) = puVar4 + -0x34;
    (*(code *)PTR_FUN_8c04e2a8)(ar4 + 0x14,uVar2,ar6,a7);
    *(undefined1 **)(puVar4 + -0x94) = puVar4 + -0x44;
    (*(code *)PTR_FUN_8c04e2a8)(ar7,uVar2,ar6,a7);
    (*(code *)PTR_FUN_8c04e2ac)(puVar4 + -0x34,puVar4 + -0x44,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x70) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar4 + -0x70);
    }
    else {
      *(undefined8 *)(puVar4 + -0x70) = in_dr0;
    }
    (*(code *)PTR_Vec3_dtor_8c04e2b0)(puVar4 + -0x44,0xffffffff,ar6,a7);
    uVar5 = (undefined4)in_dr0;
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c04e2b0)(puVar4 + -0x34,0xffffffff,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(_DAT_8c04e2b4,uVar5);
    }
    else {
      dVar6 = (double)CONCAT44(PTR_Vec3_length_8c04e2b8,_DAT_8c04e2b4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
    }
    else {
      bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar7) {
      (*(code *)PTR_Vec3_length_8c04e2b8)(ar7,uVar2,ar6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar7 + 4) = 0;
      }
      else {
        *(ulonglong *)(ar7 + 4) = (ulonglong)dVar6 & 0xffffffff;
      }
      *(undefined1 **)(puVar4 + -0x94) = puVar4 + -0x54;
      (*(code *)PTR_Vec3_scale_8c04e2c0)(ar7,PTR_DAT_8c04e2bc,ar6,a7);
      *(undefined1 **)(puVar4 + -0x94) = puVar4 + -100;
      (*(code *)PTR_Vec3_add_8c04e2c4)(ar5,puVar4 + -0x54,ar6,a7);
      ar6 = puVar4 + -100;
      (*(code *)PTR_FUN_8c04e2c8)(ar4,ar5,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c04e2b0)(puVar4 + -100,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c04e2b0)(puVar4 + -0x54,0xffffffff,ar6,a7);
      *(int *)(puVar4 + -0x80) = ar4;
      *(int *)(DAT_8c04e2a0 + *(int *)(puVar4 + -0x80)) =
           *(int *)(DAT_8c04e2a0 + *(int *)(puVar4 + -0x80)) + 1;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(DAT_8c04e2a0 + ar4) = 0;
    }
  }
  else if (iVar1 == 3) {
    uVar2 = (*(code *)PTR_FUN_8c04e2cc)(ar4,uVar2,ar6,a7);
    *(undefined4 *)(puVar4 + -0x74) = uVar2;
    if (*(int *)(puVar4 + -0x74) == 0) {
      *(undefined4 *)(DAT_8c04e2a0 + ar4) = 2;
    }
  }
  *(undefined4 *)(puVar4 + -0x68) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c04e2b0)(puVar4 + -0x24,0xffffffff,ar6,a7);
  return *(undefined4 *)(puVar4 + -0x68);
}



/* FUN_8c04e2d0 @ 8c04e2d0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c04e666) */
/* WARNING: Removing unreachable block (ram,0x8c04e682) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e2d0(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a6;
  int a7;
  undefined4 uVar3;
  float fVar4;
  double in_dr0;
  undefined8 uVar5;
  undefined4 uVar7;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 *puStack_108;
  undefined1 *puStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 auStack_a4 [4];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [116];
  
  uVar3 = 1;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c04e310)((int)&iStack_100 + DAT_8c04e30c,ar5,ar6,ar7);
  iVar1 = *(int *)(DAT_8c04e314 + ar4);
  if (iVar1 == 0) {
    uVar2 = ar5;
    a6 = ar6;
    iStack_b4 = (*(code *)PTR_FUN_8c04e36c)(ar4,ar5,ar6,a7);
    if (iStack_b4 == 0) {
      *(int *)(DAT_8c04e370 + ar4) = *(int *)(DAT_8c04e370 + ar4) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      iStack_f4 = ar4;
      (*(code *)PTR_FUN_8c04e374)(ar4,uVar2,a6,a7);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = ar7;
    uStack_b8 = (*(code *)PTR_FUN_8c04e490)(ar4 + 0x14,ar7,a6,a7);
    *(undefined4 *)(DAT_8c04e494 + ar4) = uStack_b8;
    puStack_104 = (undefined1 *)((int)&iStack_100 + DAT_8c04e498);
    (*(code *)PTR_FUN_8c04e49c)(ar4 + 0x14,iVar1,a6,a7);
    puStack_104 = (undefined1 *)((int)&iStack_100 + DAT_8c04e4a0);
    (*(code *)PTR_FUN_8c04e49c)(ar7,iVar1,a6,a7);
    (*(code *)PTR_FUN_8c04e4a4)
              ((int)&iStack_100 + DAT_8c04e498,(int)&iStack_100 + DAT_8c04e4a0,a6,a7);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_bc = SUB84(in_dr0,0);
    if (in_FPSCR_SZ == '\0') {
      uStack_bc = uVar2;
      uVar2 = uStack_b8;
    }
    uStack_b8 = uVar2;
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(uStack_bc,SUB84(in_dr0,0));
      *(undefined4 *)(ar4 + DAT_8c04e4a8) = uStack_bc;
    }
    else {
      uVar5 = CONCAT44(uStack_b8,uStack_bc);
      *(undefined8 *)(ar4 + DAT_8c04e4a8) = uVar5;
    }
    (*(code *)PTR_Vec3_dtor_8c04e4ac)((int)&iStack_100 + DAT_8c04e4a0,0xffffffff,a6,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c04e4ac)((int)&iStack_100 + DAT_8c04e498,0xffffffff,a6,a7);
    (*(code *)PTR_FUN_8c04e4b0)(ar7,uVar2,a6,a7);
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_c0 = uVar7;
    if (in_FPSCR_SZ != '\0') {
      uStack_c0 = (undefined4)uVar5;
      uStack_bc = uVar7;
    }
    iVar1 = ar4 + 0x14;
    (*(code *)PTR_FUN_8c04e4b0)(iVar1,uVar2,a6,a7);
    uStack_c4 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_c4 = uVar7;
      uVar7 = uStack_c0;
    }
    uStack_c0 = uVar7;
    (*(code *)PTR_FUN_8c04e4b4)(iVar1,uVar2,a6,a7);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_c8 = (int)uVar5;
    if (in_FPSCR_SZ == '\0') {
      uStack_c8 = uVar2;
      uVar2 = uStack_c4;
    }
    uStack_c4 = uVar2;
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(uStack_c8,(int)uVar5);
      *(undefined4 *)(ar4 + DAT_8c04e4b8) = uStack_c8;
    }
    else {
      uVar5 = CONCAT44(uStack_c4,uStack_c8);
      *(undefined8 *)(ar4 + DAT_8c04e4b8) = uVar5;
    }
    fVar4 = (float)uVar5;
    *(undefined4 *)(ar4 + 0x40) = 1;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c04e4a8);
    }
    in_dr0 = (double)CONCAT44(0x3f800000,fVar4);
    if (in_FPSCR_PR == '\0' && 1.0 < fVar4) {
      uStack_cc = (*(code *)PTR_FUN_8c04e490)(ar4 + 0x14,ar7,a6,a7);
      *(undefined4 *)(DAT_8c04e494 + ar4) = uStack_cc;
      if (*(int *)(DAT_8c04e494 + ar4) == 3) {
        a7 = 0;
        a6 = -1;
        uVar2 = 7;
        iStack_d0 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04e4c4)
                              (ar4 + DAT_8c04e4bc._4_4_,7,0xffffffff,0);
        if (iStack_d0 != 6) {
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04e4c8)(ar4 + DAT_8c04e4bc._4_4_,uVar2,a6,a7);
        }
      }
      else {
        a7 = 0;
        a6 = -1;
        uVar2 = 8;
        iVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04e534)
                          (ar4 + DAT_8c04e52c._4_4_,8,0xffffffff,0);
        uStack_d8 = CONCAT44(iVar1,(undefined4)uStack_d8);
        if (iVar1 != 6) {
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04e538)(ar4 + DAT_8c04e52c._4_4_,uVar2,a6,a7);
        }
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c04e540,*(undefined4 *)(ar4 + DAT_8c04e53c));
      }
      else {
        in_dr0 = (double)CONCAT44(DAT_8c04e544,DAT_8c04e540);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr0,0)) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(DAT_8c04e540,SUB84(in_dr0,0));
          *(undefined4 *)(ar4 + DAT_8c04e53c) = DAT_8c04e540;
        }
        else {
          in_dr0 = (double)CONCAT44(DAT_8c04e544,DAT_8c04e540);
          *(double *)(ar4 + DAT_8c04e53c) = in_dr0;
        }
      }
      *(int *)(DAT_8c04e544 + ar4) = *(int *)(DAT_8c04e544 + ar4) + 1;
      iStack_f8 = ar4;
    }
    else {
      *(undefined4 *)(DAT_8c04e55c + ar4) = 0;
      *(undefined4 *)(DAT_8c04e560 + ar4) = 0;
      uVar3 = 0;
    }
  }
  else if (iVar1 == 2) {
    puStack_104 = (undefined1 *)((int)&iStack_100 + DAT_8c04e764);
    (*(code *)PTR_Vec3_sub_8c04e768)(ar6,ar5,a6,a7);
    puStack_104 = (undefined1 *)((int)&iStack_100 + DAT_8c04e76c);
    (*(code *)PTR_Vec3_scale_8c04e778)((int)&puStack_104 + DAT_8c04e774,PTR_DAT_8c04e770,a6,a7);
    (*(code *)PTR_Vec3_assign_8c04e780)
              ((int)&iStack_100 + DAT_8c04e77c,(int)&iStack_100 + DAT_8c04e76c,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c04e784)((int)&iStack_100 + DAT_8c04e76c,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c04e784)((int)&iStack_100 + DAT_8c04e764,0xffffffff,a6,a7);
    iVar1 = (int)&iStack_100 + DAT_8c04e77c;
    (*(code *)PTR_Vec3_assign_8c04e780)(ar4 + DAT_8c04e788,iVar1,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c04e78c,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = (double)CONCAT44(DAT_8c04e790,DAT_8c04e78c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(DAT_8c04e794,fVar4);
      *(undefined4 *)(ar4 + DAT_8c04e790) = DAT_8c04e794;
    }
    else {
      uVar5 = CONCAT44(DAT_8c04e798,DAT_8c04e794);
      *(undefined8 *)(ar4 + DAT_8c04e790) = uVar5;
    }
    iStack_fc = ar4;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c04e79c)(ar4 + DAT_8c04e798,iVar1,a6,a7);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar2);
      uStack_a8 = uVar2;
    }
    else {
      uStack_a8 = (undefined4)uVar5;
      uStack_d8 = uVar5;
      auStack_a4[0] = uVar2;
    }
    puStack_104 = (undefined1 *)((int)&iStack_100 + DAT_8c04e7a0);
    (*(code *)PTR_FUN_8c04e7a4)(ar7,iVar1,a6,a7);
    puStack_104 = auStack_88;
    iVar1 = (int)&puStack_104 + DAT_8c04e7a8;
    (*(code *)PTR_Vec3_add_8c04e7ac)(ar5,iVar1,a6,a7);
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c04e7b0)(ar4 + DAT_8c04e798,iVar1,a6,a7);
    uStack_dc = uVar2;
    iStack_e0 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c04e7b4)
                          (ar4 + DAT_8c04e798,uVar2,a6,a7);
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c04e7b0)(ar4 + DAT_8c04e798,uVar2,a6,a7);
    uStack_e4 = uVar2;
    uStack_e8 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c04e7b4)
                          (ar4 + DAT_8c04e798,uVar2,a6,a7);
    fVar4 = (float)iStack_e0;
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c04e7bc,fVar4);
      }
      else {
        in_dr0 = (double)CONCAT44(DAT_8c04e7c0,DAT_8c04e7bc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar4,SUB84(in_dr0,0) + fVar4);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
    }
    (*(code *)PTR_Vec3_set_xyz_8c04e7c4)(auStack_94,uVar2,a6,a7);
    puStack_104 = auStack_94;
    puStack_108 = auStack_a4;
    a7 = ar4 + 0x14;
    a6 = (int)&puStack_108 + DAT_8c04e7c8;
    (*(code *)PTR_FUN_8c04e7cc)(ar4,ar5,a6,a7);
    (*(code *)PTR_Vec3_assign_8c04e780)(ar4 + 0x14,auStack_a4,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c04e784)(auStack_a4,0xffffffff,a6,a7);
    (*(code *)PTR_object_dtor_delete_8c04e7d0)(auStack_94,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c04e784)(auStack_88,0xffffffff,a6,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c04e784)((int)&iStack_100 + DAT_8c04e7a0,0xffffffff,a6,a7);
    iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04e7d4)(ar4 + DAT_8c04e798,uVar2,a6,a7);
    uStack_f0 = (double)CONCAT44(iVar1,(undefined4)uStack_f0);
    if (iVar1 == 1) {
      *(int *)(DAT_8c04e7d8 + ar4) = *(int *)(DAT_8c04e7d8 + ar4) + -1;
      iStack_100 = ar4;
    }
  }
  (*(code *)PTR_FUN_8c04e7dc)(ar5,ar6,a6,a7);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_f0 = (double)CONCAT44(uStack_f0._4_4_,uVar2);
    uStack_ac = uVar2;
  }
  else {
    uStack_ac = SUB84(in_dr0,0);
    uStack_f0 = in_dr0;
    uStack_a8 = uVar2;
  }
  uStack_b0 = uVar3;
  (*(code *)PTR_Vec3_dtor_8c04e784)((int)&iStack_100 + DAT_8c04e77c,0xffffffff,a6,a7);
  return uStack_b0;
}



/* FUN_8c04e7e0 @ 8c04e7e0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04e7e0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a4;
  undefined4 uVar3;
  undefined4 in_fr1;
  uint uVar4;
  double dVar5;
  double dVar6;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_88 [4];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  a4 = *(int **)((int)aiStack_88 + DAT_8c04eaa4);
  uVar3 = 1;
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c04eaa8,in_fr1);
    uStack_5c = (double)CONCAT44(1,DAT_8c04eaa8);
  }
  else {
    dVar6 = (double)CONCAT44(PTR_Vec3_ctor_zero_8c04eaac,DAT_8c04eaa8);
    uStack_5c = dVar6;
  }
  iVar1 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c04eaac)(auStack_24,ar5,ar6,ar7);
  do {
    switch(*(undefined4 *)(DAT_8c04eab0 + ar4)) {
    case 0:
      (**(code **)(DAT_8c04eab4 + *a4))(a4,iVar1,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar2 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_64 = (double)CONCAT44(uStack_64._4_4_,uVar2);
        dVar5 = (double)CONCAT44(DAT_8c04eab8,uVar2);
      }
      else {
        dVar5 = (double)CONCAT44(_DAT_8c04eabc,DAT_8c04eab8);
        in_xd0 = dVar6;
        uStack_64 = dVar6;
      }
      dVar6 = dVar5;
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar5 >> 0x20) <= SUB84(dVar5,0)) {
        *(int *)(DAT_8c04eab0 + ar4) = *(int *)(DAT_8c04eab0 + ar4) + 1;
        iStack_78 = ar4;
      }
      else {
        *(undefined4 *)(DAT_8c04eab0 + ar4) = 10;
      }
      break;
    case 1:
      *(int *)(DAT_8c04eab0 + ar4) = *(int *)(DAT_8c04eab0 + ar4) + 1;
      aiStack_88[3] = ar4;
    case 2:
      ar7 = 0;
      ar6 = -1;
      uVar2 = 0x10;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04eac4)(ar4 + DAT_8c04eac0,0x10,0xffffffff,0);
      uVar4 = SUB84(dVar6,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04eac8)(ar4 + DAT_8c04eac0,uVar2,ar6,ar7);
      *(int *)(DAT_8c04eab0 + ar4) = *(int *)(DAT_8c04eab0 + ar4) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar4;
      }
      *(undefined4 *)(DAT_8c04eacc + ar4) = 3;
      aiStack_88[2] = ar4;
    default:
switchD_8c04e828_caseD_4:
      uStack_64._4_4_ = uVar3;
      (*(code *)PTR_Vec3_dtor_8c04eae4)(auStack_24,0xffffffff,ar6,ar7);
      return uStack_64._4_4_;
    case 3:
      (*(code *)PTR_FUN_8c04ead0)(ar4 + 0x14,iVar1,ar6,ar7);
      (*(code *)PTR_Vec3_normalize_8c04ead4)(auStack_34,iVar1,ar6,ar7);
      (*(code *)PTR_Vec3_scale_8c04eadc)(auStack_44,PTR_DAT_8c04ead8,ar6,ar7);
      (*(code *)PTR_FUN_8c04eae0)(ar4,auStack_54,ar5,ar7);
      (*(code *)PTR_Vec3_dtor_8c04eae4)(auStack_54,0xffffffff,ar5,ar7);
      (*(code *)PTR_Vec3_dtor_8c04eae4)(auStack_44,0xffffffff,ar5,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c04eae4)(auStack_34,0xffffffff,ar5,ar7);
      (*(code *)PTR_FUN_8c04eaec)(ar4,uVar2,ar5,ar7);
      iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04eaf0)
                        (ar4 + DAT_8c04eac0,uVar2,ar5,ar7);
      uStack_6c = (double)CONCAT44(iVar1,(undefined4)uStack_6c);
      ar6 = ar5;
      if (iVar1 == 1) {
        uVar3 = 0;
        *(undefined4 *)(DAT_8c04eab0 + ar4) = 0;
        *(undefined4 *)(DAT_8c04eacc + ar4) = 2;
      }
      goto switchD_8c04e828_caseD_4;
    case 10:
      (*(code *)PTR_Vec3_assign_8c04eaf8)(ar4 + 0x54,PTR_DAT_8c04eaf4,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x54) = (undefined4)DAT_8c04eafc;
        dVar6 = (double)CONCAT44(DAT_8c04eafc._4_4_,SUB84(dVar6,0));
        *(undefined4 *)(ar4 + 0x5c) = DAT_8c04eafc._4_4_;
      }
      else {
        *(undefined8 *)(ar4 + 0x54) = CONCAT44(DAT_8c04eafc._4_4_,(undefined4)DAT_8c04eafc);
        dVar6 = (double)CONCAT44(DAT_8c04eb04,DAT_8c04eafc._4_4_);
        *(double *)(ar4 + 0x5c) = dVar6;
      }
      (**(code **)(DAT_8c04eb04 + *a4))(a4,ar4 + 0x54,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar2 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_6c = (double)CONCAT44(uStack_6c._4_4_,uVar2);
        dVar6 = (double)CONCAT44(uVar2,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x48);
        uStack_6c = dVar6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)(ulonglong)(uint)(SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20));
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x58) = SUB84(dVar6,0);
      }
      else {
        *(double *)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(DAT_8c04eab0 + ar4) = *(int *)(DAT_8c04eab0 + ar4) + 1;
      aiStack_88[1] = ar4;
    case 0xb:
      uVar4 = SUB84(dVar6,0);
      ar6 = ar4 + 0x54;
      iStack_70 = (*(code *)PTR_pure_virtual_stub_8c04eb10)(ar4,ar5,ar6,ar7);
      if (iStack_70 == 0) {
        ar7 = 0;
        ar6 = -1;
        uVar2 = 0x10;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04eac4)
                  (ar4 + DAT_8c04eac0,0x10,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04eac8)(ar4 + DAT_8c04eac0,uVar2,ar6,ar7);
        *(int *)(DAT_8c04eab0 + ar4) = *(int *)(DAT_8c04eab0 + ar4) + 1;
        aiStack_88[0] = ar4;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar4;
        }
      }
      goto switchD_8c04e828_caseD_4;
    case 0xc:
      (*(code *)PTR_FUN_8c04eaec)(ar4,iVar1,ar6,ar7);
      iStack_74 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04eaf0)
                            (ar4 + DAT_8c04eac0,iVar1,ar6,ar7);
      if (iStack_74 == 1) {
        uVar3 = 0;
        *(undefined4 *)(DAT_8c04eab0 + ar4) = 0;
      }
      goto switchD_8c04e828_caseD_4;
    }
  } while( true );
}



/* FUN_8c04eb14 @ 8c04eb14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c04eb14(int ar4,undefined4 ar5,undefined4 ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 a7;
  uint uVar4;
  undefined4 in_fr1;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_88;
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
  undefined8 uStack_44;
  uint uStack_3c;
  uint uStack_38;
  undefined8 uStack_34;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [20];
  
  uVar4 = 1;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c04eb60,in_fr1);
    uStack_34 = CONCAT44(1,DAT_8c04eb60);
  }
  else {
    uVar6 = CONCAT44(PTR_Vec3_ctor_zero_8c04eb64,DAT_8c04eb60);
    uStack_34 = uVar6;
  }
  uVar2 = ar5;
  puStack_88 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c04eb64)(auStack_20,ar5,ar6,ar7);
  do {
    uVar5 = (uint)uVar6;
    switch(*(undefined4 *)(DAT_8c04eb68 + ar4)) {
    case 0:
      iVar1 = (*(code *)PTR_FUN_8c04ebdc)(ar4,ar5,ar6,ar7);
      uStack_44 = CONCAT44(iVar1,(undefined4)uStack_44);
      if (iVar1 == 0) {
        *(int *)(DAT_8c04ebe0 + ar4) = *(int *)(DAT_8c04ebe0 + ar4) + 1;
        iStack_70 = ar4;
      }
    default:
switchD_8c04eb5c_caseD_4:
      uStack_38 = uVar4;
      (*(code *)PTR_Vec3_dtor_8c04f030)(auStack_20,0xffffffff,ar6,ar7);
      return uStack_38;
    case 1:
      uVar6 = uVar6 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar6;
      }
      (**(code **)(DAT_8c04ec28 + **(int **)((int)&puStack_88 + DAT_8c04ec24)))
                (*(int **)((int)&puStack_88 + DAT_8c04ec24),uVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar3 = (undefined4)(uVar6 >> 0x20);
        uStack_44 = CONCAT44(uStack_44._4_4_,uVar3);
        uVar6 = CONCAT44(DAT_8c04ec2c,uVar3);
      }
      else {
        uStack_44 = uVar6;
        uVar6 = CONCAT44(DAT_8c04ec30,DAT_8c04ec2c);
      }
      if (in_FPSCR_PR != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        *(undefined4 *)(DAT_8c04ec40 + ar4) = 10;
      }
      else {
        iStack_74 = ar4;
        *(int *)(DAT_8c04ec30 + ar4) = *(int *)(DAT_8c04ec30 + ar4) + 1;
      }
      break;
    case 2:
      if ((*(int *)(DAT_8c04ec88 + ar4) == 4) &&
         (iStack_48 = (*(code *)PTR_rand_range_8c04ec8c)(ar4,0,100,ar7), 0x46 < iStack_48)) {
        ar7 = (undefined1 *)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x20;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04ec98)
                  (ar4 + DAT_8c04ec90._4_4_,0x20,0xffffffff,0);
        *(undefined4 *)(DAT_8c04ec9c + ar4) = 5;
      }
      else {
        iStack_4c = (*(code *)PTR_rand_range_8c04ecd0)(ar4,0,100,ar7);
        if (iStack_4c < 0x47) {
          ar7 = (undefined1 *)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x1a;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04ed40)
                    (ar4 + DAT_8c04ed38._4_4_,0x1a,0xffffffff,0);
        }
        else {
          ar7 = (undefined1 *)0x0;
          ar6 = 0xffffffff;
          uVar2 = 0x11;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04ecdc)
                    (ar4 + DAT_8c04ecd4._4_4_,0x11,0xffffffff,0);
        }
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04ed44)(ar4 + DAT_8c04ed38._4_4_,uVar2,ar6,ar7);
      *(int *)(DAT_8c04ed48 + ar4) = *(int *)(DAT_8c04ed48 + ar4) + 1;
      *(undefined4 *)(DAT_8c04ed4c + ar4) = 3;
      iStack_78 = ar4;
    case 3:
      iStack_50 = (*(code *)PTR_get_field_1c_026dd8_8c04ed50)
                            (ar4 + DAT_8c04ed38._4_4_,uVar2,ar6,ar7);
      if (iStack_50 == 0x11) {
        iStack_54 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c04ed90)
                              (ar4 + DAT_8c04ed8c,uVar2,ar6,ar7);
        if (iStack_54 == 7) {
          *(undefined4 *)(DAT_8c04ed94 + ar4) = 0;
          uVar4 = 0;
        }
      }
      else if (iStack_50 == 0x20) {
        *(undefined4 *)(DAT_8c04edc8 + ar4) = 5;
        iStack_58 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04edd0)
                              (ar4 + DAT_8c04edcc,uVar2,ar6,ar7);
        if (iStack_58 == 1) {
          *(undefined4 *)(DAT_8c04edd4 + ar4) = 0;
          *(undefined4 *)(DAT_8c04edd8 + ar4) = 2;
          uVar4 = 0;
        }
      }
      else {
        iStack_5c = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04ee0c)
                              (ar4 + DAT_8c04ee08,uVar2,ar6,ar7);
        if (iStack_5c == 1) {
          *(undefined4 *)(DAT_8c04ee10 + ar4) = 0;
          *(undefined4 *)(DAT_8c04ee14 + ar4) = 2;
          uVar4 = 0;
        }
      }
      goto switchD_8c04eb5c_caseD_4;
    case 10:
      if (*(int *)(DAT_8c04ee4c + ar4) != 4) {
LAB_8c04ee58:
        ar7 = (undefined1 *)0x0;
        ar6 = 0xffffffff;
        uVar2 = 0x47;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04eec8)
                  (ar4 + DAT_8c04eec4,0x47,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04eecc)(ar4 + DAT_8c04eec4,uVar2,ar6,ar7);
        *(undefined4 *)(DAT_8c04eed0 + ar4) = 3;
        *(int *)(DAT_8c04eed4 + ar4) = *(int *)(DAT_8c04eed4 + ar4) + 1;
        iStack_80 = ar4;
        goto switchD_8c04eb5c_caseD_b;
      }
      ar6 = 100;
      uVar2 = 0;
      iStack_60 = (*(code *)PTR_rand_range_8c04ee50)(ar4,0,100,ar7);
      if (iStack_60 < 0x5b) goto LAB_8c04ee58;
      iStack_7c = ar4;
      *(int *)(DAT_8c04ee54 + ar4) = *(int *)(DAT_8c04ee54 + ar4) + 2;
      break;
    case 0xb:
switchD_8c04eb5c_caseD_b:
      iStack_64 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c04eed8)
                            (ar4 + DAT_8c04eec4,uVar2,ar6,ar7);
      if (iStack_64 == 1) {
        *(undefined4 *)(DAT_8c04eed4 + ar4) = 0;
        uVar4 = 0;
        *(undefined4 *)(DAT_8c04eed0 + ar4) = 2;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xc:
      (*(code *)PTR_FUN_8c04ef34)(auStack_2c,puStack_88,ar6,ar7);
      ar7 = auStack_2c;
      iStack_68 = (*(code *)PTR_FUN_8c04ef3c)(ar4,ar5,ar5,ar7);
      uStack_3c = (uint)(iStack_68 == 0);
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c04ef40)(auStack_2c,0xffffffff,ar5,ar7);
      ar6 = ar5;
      if (uStack_3c != 0) {
        uVar4 = 0;
        *(undefined4 *)(DAT_8c04ef44 + ar4) = 0;
      }
      goto switchD_8c04eb5c_caseD_4;
    case 0xd:
      a7 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0x55;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04f00c)
                (ar4 + DAT_8c04f004._4_4_,0x55,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04f010)(ar4 + DAT_8c04f004._4_4_,uVar2,uVar3,a7);
      (*(code *)PTR_vec3_clear_8c04f018)(ar4 + DAT_8c04f014,uVar2,uVar3,a7);
      (*(code *)PTR_vec3_clear_8c04f018)(ar4 + DAT_8c04f01c,uVar2,uVar3,a7);
      *(int *)(DAT_8c04f020 + ar4) = *(int *)(DAT_8c04f020 + ar4) + 1;
      *(undefined4 *)(DAT_8c04f024 + ar4) = 0;
      iStack_84 = ar4;
    case 0xe:
      ar7 = (undefined1 *)0x1c;
      ar6 = ar5;
      iStack_6c = (*(code *)PTR_FUN_8c04f028)(ar4,ar5,ar5,0x1c);
      bVar7 = iStack_6c != 0;
      if (!bVar7) {
        *(undefined4 *)(DAT_8c04f020 + ar4) = 0;
        (*(code *)PTR_vec3_clear_8c04f018)(ar4 + DAT_8c04f014,ar5,ar6,ar7);
        (*(code *)PTR_vec3_clear_8c04f018)(ar4 + DAT_8c04f01c,ar5,ar6,ar7);
      }
      uVar4 = (uint)bVar7;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c04f02c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c04f02c) = (ulonglong)uVar5;
      }
      goto switchD_8c04eb5c_caseD_4;
    }
  } while( true );
}



/* FUN_8c04f034 @ 8c04f034 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c04f12a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c04f034(int ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 *a4;
  undefined4 uVar8;
  undefined4 unaff_r11;
  undefined4 uVar9;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar10;
  float fVar11;
  double in_dr0;
  double dVar12;
  float fVar13;
  undefined8 in_dr14;
  double dVar14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar15;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar10 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar10 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar10 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar10 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar10 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar10 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar10 + -0x14) = in_PR;
  iVar1 = -DAT_8c04f134;
  *(undefined4 *)((int)puVar10 + iVar1 + -0x14) = ar7;
  uVar9 = 1;
  uVar2 = *(undefined4 *)((int)puVar10 + iVar1 + -0x14);
  puVar7 = ar6;
  (*(code *)PTR_Vec3_ctor_copy_8c04f13c)
            ((undefined1 *)((int)puVar10 + DAT_8c04f138 + iVar1 + -0x14),uVar2,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c04f144)
            ((undefined1 *)((int)puVar10 + DAT_8c04f140 + iVar1 + -0x14),uVar2,puVar7,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c04f144)
            ((undefined1 *)((int)puVar10 + DAT_8c04f148 + iVar1 + -0x14),uVar2,puVar7,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c04f144)
            ((undefined1 *)((int)puVar10 + DAT_8c04f14c + iVar1 + -0x14),uVar2,puVar7,ar7);
  puVar5 = PTR_Vec3_ctor_zero_8c04f144;
  (*(code *)PTR_Vec3_ctor_zero_8c04f144)
            ((undefined1 *)((int)puVar10 + DAT_8c04f150 + iVar1 + -0x14),PTR_Vec3_ctor_zero_8c04f144
             ,puVar7,ar7);
  (*(code *)PTR_FUN_8c04f158)
            ((undefined1 *)((int)puVar10 + DAT_8c04f154 + iVar1 + -0x14),puVar5,puVar7,ar7);
  (*(code *)PTR_FUN_8c04f158)
            ((undefined1 *)((int)puVar10 + DAT_8c04f15c + iVar1 + -0x14),puVar5,puVar7,ar7);
  uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04f160)(ar5,puVar5,puVar7,ar7);
  *(undefined4 *)((int)puVar10 + DAT_8c04f164 + iVar1 + -0x14) = uVar2;
  if (*(int *)((int)puVar10 + DAT_8c04f164 + iVar1 + -0x14) == 0) {
    *(undefined4 *)((int)puVar10 + DAT_8c04f168 + iVar1 + -0x14) = 2;
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04f16c)
              ((undefined1 *)((int)puVar10 + DAT_8c04f15c + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04f16c)
              ((undefined1 *)((int)puVar10 + DAT_8c04f154 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f170)
              ((undefined1 *)((int)puVar10 + DAT_8c04f150 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f170)
              ((undefined1 *)((int)puVar10 + DAT_8c04f14c + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f170)
              ((undefined1 *)((int)puVar10 + DAT_8c04f148 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f170)
              ((undefined1 *)((int)puVar10 + DAT_8c04f140 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f170)
              ((undefined1 *)((int)puVar10 + DAT_8c04f138 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    return *(undefined4 *)((int)puVar10 + DAT_8c04f168 + iVar1 + -0x14);
  }
  puVar5 = PTR_get_field_6c_028cc4_8c04f2b8;
  uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04f2b8)
                    (ar5,PTR_get_field_6c_028cc4_8c04f2b8,puVar7,ar7);
  *(undefined4 *)((int)puVar10 + DAT_8c04f2bc + iVar1 + -0x14) = uVar2;
  *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
       (undefined1 *)((int)puVar10 + DAT_8c04f2c0 + iVar1 + -0x14);
  (*(code *)PTR_FUN_8c04f2c8)
            (*(undefined4 *)((int)puVar10 + DAT_8c04f2c4 + iVar1 + -0x18),puVar5,puVar7,ar7);
  (*(code *)PTR_Vec3_assign_8c04f2d0)
            ((undefined1 *)((int)puVar10 + DAT_8c04f2cc + iVar1 + -0x14),
             (undefined1 *)((int)puVar10 + DAT_8c04f2c0 + iVar1 + -0x14),puVar7,ar7);
  (*(code *)PTR_Vec3_dtor_8c04f2d4)
            ((undefined1 *)((int)puVar10 + DAT_8c04f2c0 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
  puVar5 = PTR_get_field_6c_028cc4_8c04f2b8;
  uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04f2b8)
                    (ar5,PTR_get_field_6c_028cc4_8c04f2b8,puVar7,ar7);
  *(undefined4 *)((int)puVar10 + DAT_8c04f2d8 + iVar1 + -0x14) = uVar2;
  uVar2 = (**(code **)(DAT_8c04f2dc +
                      *(int *)(*(int *)((int)puVar10 + DAT_8c04f2d8 + iVar1 + -0x14) + 8)))
                    (*(int *)((int)puVar10 + DAT_8c04f2d8 + iVar1 + -0x14),puVar5,puVar7,ar7);
  *(undefined4 *)((int)puVar10 + DAT_8c04f2e0 + iVar1 + -0x14) = uVar2;
  if (*(int *)((int)puVar10 + DAT_8c04f2e0 + iVar1 + -0x14) != 0x13) {
    uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04f2b8)(ar5,puVar5,puVar7,ar7);
    *(undefined4 *)((int)puVar10 + DAT_8c04f2e4 + iVar1 + -0x14) = uVar2;
    uVar2 = (**(code **)(DAT_8c04f2dc +
                        *(int *)(*(int *)((int)puVar10 + DAT_8c04f2e4 + iVar1 + -0x14) + 8)))
                      (*(int *)((int)puVar10 + DAT_8c04f2e4 + iVar1 + -0x14),puVar5,puVar7,ar7);
    *(undefined4 *)((int)puVar10 + DAT_8c04f2e8 + iVar1 + -0x14) = uVar2;
    if (*(int *)((int)puVar10 + DAT_8c04f2e8 + iVar1 + -0x14) != 0x18) goto LAB_8c04f31c;
  }
  (**(code **)(DAT_8c04f2f0 + **(int **)(DAT_8c04f2ec + ar4)))
            (*(int **)(DAT_8c04f2ec + ar4),
             (undefined1 *)((int)puVar10 + DAT_8c04f2cc + iVar1 + -0x14),puVar7,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + DAT_8c04f2f4 + iVar1 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr0 = (double)CONCAT44(DAT_8c04f2f8,
                              *(undefined4 *)((int)puVar10 + DAT_8c04f2f4 + iVar1 + -0x14));
  }
  else {
    *(double *)((int)puVar10 + DAT_8c04f2f4 + iVar1 + -0x14) = in_dr0;
    in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c04f2f4 + iVar1 + -0x14);
    in_dr0 = (double)CONCAT44(DAT_8c04f2fc,DAT_8c04f2f8);
  }
  if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
    *(undefined4 *)((int)puVar10 + DAT_8c04f2fc + iVar1 + -0x14) = 2;
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04f304)
              ((undefined1 *)((int)puVar10 + DAT_8c04f300 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04f304)
              ((undefined1 *)((int)puVar10 + DAT_8c04f308 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f2d4)
              ((undefined1 *)((int)puVar10 + DAT_8c04f30c + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f2d4)
              ((undefined1 *)((int)puVar10 + DAT_8c04f310 + iVar1 + -0x14),0xffffffff,puVar7,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c04f2d4)
              ((undefined1 *)((int)puVar10 + DAT_8c04f314 + iVar1 + -0x14),0xffffffff,0xffffffff,ar7
              );
    (*(code *)PTR_Vec3_dtor_8c04f2d4)
              ((undefined1 *)((int)puVar10 + DAT_8c04f2cc + iVar1 + -0x14),0xffffffff,uVar2,ar7);
    (*(code *)PTR_Vec3_dtor_8c04f2d4)
              ((undefined1 *)((int)puVar10 + DAT_8c04f318 + iVar1 + -0x14),0xffffffff,uVar2,ar7);
    return *(undefined4 *)((int)puVar10 + DAT_8c04f2fc + iVar1 + -0x14);
  }
LAB_8c04f31c:
  uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04f3b0)
                    (ar5,PTR_get_field_6c_028cc4_8c04f3b0,puVar7,ar7);
  *(undefined4 *)((int)puVar10 + DAT_8c04f3b4 + iVar1 + -0x14) = uVar2;
  *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
       (undefined1 *)((int)puVar10 + DAT_8c04f3b8 + iVar1 + -0x14);
  (*(code *)PTR_FUN_8c04f3c0)
            (*(undefined4 *)((int)puVar10 + DAT_8c04f3bc + iVar1 + -0x18),PTR_FUN_8c04f3c0,puVar7,
             ar7);
  puVar7 = (undefined *)((int)puVar10 + DAT_8c04f3c4 + iVar1 + -0x14);
  puVar5 = PTR_Vec3_assign_8c04f3c8;
  (*(code *)PTR_Vec3_assign_8c04f3c8)
            (puVar7,(undefined1 *)((int)puVar10 + DAT_8c04f3b8 + iVar1 + -0x14),
             PTR_Vec3_assign_8c04f3c8,puVar7);
  (*(code *)PTR_Vec3_dtor_8c04f3cc)
            ((undefined1 *)((int)puVar10 + DAT_8c04f3b8 + iVar1 + -0x14),0xffffffff,puVar5,puVar7);
  uVar2 = (**(code **)(DAT_8c04f3d4 + **(int **)(DAT_8c04f3d0 + ar4)))
                    (*(int **)(DAT_8c04f3d0 + ar4),2,puVar5,puVar7);
  *(undefined4 *)((int)puVar10 + DAT_8c04f3d8 + iVar1 + -0x14) = uVar2;
  (*(code *)PTR_Vec3_assign_8c04f3c8)
            ((undefined1 *)((int)puVar10 + DAT_8c04f3dc + iVar1 + -0x14),
             *(int *)((int)puVar10 + DAT_8c04f3d8 + iVar1 + -0x14) + 4,puVar5,puVar7);
  do {
    uVar2 = (undefined4)in_dr14;
    iVar3 = *(int *)(DAT_8c04f3e0 + ar4);
    if ((9 < iVar3) || (iVar3 < 0)) goto switchD_8c04f3ac_default;
    puVar4 = (&switchD_8c04f3ac::switchdataD_8c04f3e4)[iVar3];
    switch(iVar3) {
    case 0:
      *(undefined4 *)(DAT_8c04f470 + ar4) = 1;
      puVar7 = *(undefined **)((int)puVar10 + DAT_8c04f474 + iVar1 + -0x14);
      puVar5 = (undefined *)(ar4 + DAT_8c04f478);
      uVar2 = (*(code *)PTR_FUN_8c04f47c)(ar4,ar6,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + DAT_8c04f480 + iVar1 + -0x14) = uVar2;
      if (*(int *)((int)puVar10 + DAT_8c04f480 + iVar1 + -0x14) == 0) {
        (*(code *)PTR_vec3_clear_8c04f488)(ar4 + DAT_8c04f484,ar6,puVar5,puVar7);
        *(undefined4 *)(DAT_8c04f470 + ar4) = 0;
        puVar5 = DAT_8c04f48c;
        *(int *)((int)puVar10 + iVar1 + 0x10) = ar4;
        *(int *)(DAT_8c04f48c + *(int *)((int)puVar10 + iVar1 + 0x10)) =
             *(int *)(DAT_8c04f48c + *(int *)((int)puVar10 + iVar1 + 0x10)) + 1;
      }
      goto switchD_8c04f3ac_default;
    case 1:
      *(int *)((int)puVar10 + iVar1 + 0xc) = ar4;
      *(int *)(DAT_8c04f514 + *(int *)((int)puVar10 + iVar1 + 0xc)) =
           *(int *)(DAT_8c04f514 + *(int *)((int)puVar10 + iVar1 + 0xc)) + 1;
    case 2:
      *(int *)((int)puVar10 + iVar1 + 8) = ar4;
      puVar7 = (undefined *)(*(int *)(DAT_8c04f514 + *(int *)((int)puVar10 + iVar1 + 8)) + 1);
      *(undefined **)(DAT_8c04f514 + *(int *)((int)puVar10 + iVar1 + 8)) = puVar7;
      break;
    case 4:
      goto switchD_8c04f3ac_caseD_4;
    case 5:
      (*(code *)PTR_CAnimBody_GetCurFrame_8c04f690)(ar4 + DAT_8c04f68c,puVar4,puVar5,puVar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar10 + DAT_8c04f694 + iVar1 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)((int)puVar10 + DAT_8c04f694 + iVar1 + -0x14) = in_dr0;
      }
      uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c04f698)(ar4 + DAT_8c04f68c,puVar4,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + DAT_8c04f69c + iVar1 + -0x14) = uVar2;
      *(int *)((int)puVar10 + iVar1 + -4) =
           *(int *)((int)puVar10 + DAT_8c04f69c + iVar1 + -0x14) + -0x16;
      iVar3 = *(int *)(DAT_8c04f6a0 + ar4) + *(int *)((int)puVar10 + iVar1 + -4) * 2;
      if (iVar3 == 3) {
        uVar6 = 0x5e;
        uVar2 = (*(code *)PTR_FUN_8c04f778)(ar4 + DAT_8c04f774,0x5e,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + DAT_8c04f77c + iVar1 + -0x14) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04f780)
                          (*(undefined4 *)((int)puVar10 + DAT_8c04f77c + iVar1 + -0x14),uVar6,puVar5
                           ,puVar7);
        *(undefined4 *)((int)puVar10 + DAT_8c04f784 + iVar1 + -0x14) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04f788 + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c04f78c)
                  (ar4 + DAT_8c04f774,
                   *(undefined4 *)**(undefined4 **)((int)puVar10 + DAT_8c04f77c + iVar1 + -0x18),
                   puVar5,puVar7);
        (*(code *)PTR_Vec3_assign_8c04f794)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f790 + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04f788 + iVar1 + -0x14),puVar5,puVar7);
        (*(code *)PTR_Vec3_dtor_8c04f798)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f788 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
        uVar6 = 0x5e;
        uVar2 = (*(code *)PTR_FUN_8c04f778)(ar4 + DAT_8c04f774,0x5e,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + DAT_8c04f79c + iVar1 + -0x14) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04f780)
                          (*(undefined4 *)((int)puVar10 + DAT_8c04f79c + iVar1 + -0x14),uVar6,puVar5
                           ,puVar7);
        *(undefined4 *)((int)puVar10 + DAT_8c04f7a0 + iVar1 + -0x14) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04f7a4 + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c04f7a8)
                  (ar4 + DAT_8c04f774,
                   *(undefined4 *)(**(int **)((int)puVar10 + DAT_8c04f79c + iVar1 + -0x18) + 8),
                   puVar5,puVar7);
        (*(code *)PTR_FUN_8c04f7b0)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f7ac + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04f7a4 + iVar1 + -0x14),puVar5,puVar7);
        (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04f7b4)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f7a4 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
      }
      else if (iVar3 == 4) {
        uVar2 = (*(code *)PTR_FUN_8c04f89c)(ar4 + DAT_8c04f898,0x5f,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + DAT_8c04f8a0 + iVar1 + -0x14) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04f8a4)
                          (*(undefined4 *)((int)puVar10 + DAT_8c04f8a0 + iVar1 + -0x14),
                           *(undefined4 *)((int)puVar10 + DAT_8c04f8a0 + iVar1 + -0x14),puVar5,
                           puVar7);
        *(undefined4 *)((int)puVar10 + DAT_8c04f8a8 + iVar1 + -0x14) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04f8ac + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c04f8b0)
                  (ar4 + DAT_8c04f898,
                   *(undefined4 *)**(undefined4 **)((int)puVar10 + DAT_8c04f8a0 + iVar1 + -0x18),
                   puVar5,puVar7);
        (*(code *)PTR_Vec3_assign_8c04f8b8)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f8b4 + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04f8ac + iVar1 + -0x14),puVar5,puVar7);
        (*(code *)PTR_Vec3_dtor_8c04f8bc)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f8ac + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
        uVar2 = (*(code *)PTR_FUN_8c04f89c)(ar4 + DAT_8c04f898,0x5f,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + DAT_8c04f8c0 + iVar1 + -0x14) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04f8a4)
                          (*(undefined4 *)((int)puVar10 + DAT_8c04f8c0 + iVar1 + -0x14),
                           *(undefined4 *)((int)puVar10 + DAT_8c04f8c0 + iVar1 + -0x14),puVar5,
                           puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x68) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04f8c4 + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c04f8c8)
                  (ar4 + DAT_8c04f898,
                   *(undefined4 *)(**(int **)((int)puVar10 + DAT_8c04f8c0 + iVar1 + -0x18) + 8),
                   puVar5,puVar7);
        (*(code *)PTR_FUN_8c04f8d0)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f8cc + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04f8c4 + iVar1 + -0x14),puVar5,puVar7);
        (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04f8d4)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f8c4 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
      }
      else if (iVar3 == 5) {
        uVar2 = (*(code *)PTR_FUN_8c04f9ac)(ar4 + DAT_8c04f9a8,0x5e,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 100) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04f9b0)
                          (*(undefined4 *)((int)puVar10 + iVar1 + 100),uVar2,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x60) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04f9b4 + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c04f9b8)
                  (ar4 + DAT_8c04f9a8,*(undefined4 *)**(undefined4 **)((int)puVar10 + iVar1 + 0x60),
                   puVar5,puVar7);
        (*(code *)PTR_Vec3_assign_8c04f9c0)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f9bc + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04f9b4 + iVar1 + -0x14),puVar5,puVar7);
        (*(code *)PTR_Vec3_dtor_8c04f9c4)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f9b4 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
        iVar3 = DAT_8c04f9a8;
        uVar2 = (*(code *)PTR_FUN_8c04f9ac)(ar4 + DAT_8c04f9a8,0x5e,DAT_8c04f9a8,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x5c) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04f9b0)
                          (*(undefined4 *)((int)puVar10 + iVar1 + 0x5c),uVar2,iVar3,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x58) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04f9c8 + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c04f9cc)
                  (ar4 + DAT_8c04f9a8,*(undefined4 *)(**(int **)((int)puVar10 + iVar1 + 0x58) + 8),
                   iVar3,puVar7);
        puVar7 = PTR_FUN_8c04f9d4;
        (*(code *)PTR_FUN_8c04f9d4)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f9d0 + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04f9c8 + iVar1 + -0x14),iVar3,
                   PTR_FUN_8c04f9d4);
        puVar5 = (undefined *)0xffffffff;
        (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04f9d8)
                  ((undefined1 *)((int)puVar10 + DAT_8c04f9c8 + iVar1 + -0x14),0xffffffff,0xffffffff
                   ,puVar7);
      }
      else if (iVar3 == 6) {
        uVar6 = 0x5f;
        uVar2 = (*(code *)PTR_FUN_8c04fc2c)(ar4 + DAT_8c04fc28,0x5f,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x54) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04fc30)
                          (*(undefined4 *)((int)puVar10 + iVar1 + 0x54),uVar6,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x50) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04fc34 + iVar1 + -0x14);
        (*(code *)PTR_FUN_8c04fc38)
                  (ar4 + DAT_8c04fc28,*(undefined4 *)**(undefined4 **)((int)puVar10 + iVar1 + 0x50),
                   puVar5,puVar7);
        (*(code *)PTR_Vec3_assign_8c04fc40)
                  ((undefined1 *)((int)puVar10 + DAT_8c04fc3c + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04fc34 + iVar1 + -0x14),puVar5,puVar7);
        (*(code *)PTR_Vec3_dtor_8c04fc44)
                  ((undefined1 *)((int)puVar10 + DAT_8c04fc34 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
        uVar6 = 0x5f;
        uVar2 = (*(code *)PTR_FUN_8c04fc2c)(ar4 + DAT_8c04fc28,0x5f,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x4c) = uVar2;
        uVar2 = (*(code *)PTR_deref_u32_8c04fc30)
                          (*(undefined4 *)((int)puVar10 + iVar1 + 0x4c),uVar6,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x48) = uVar2;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04fc48 + iVar1 + -0x14);
        puVar5 = (undefined *)**(undefined4 **)((int)puVar10 + iVar1 + 0x48);
        (*(code *)PTR_FUN_8c04fc4c)(ar4 + DAT_8c04fc28,*(undefined4 *)(puVar5 + 8),puVar5,puVar7);
        (*(code *)PTR_FUN_8c04fc54)
                  ((undefined1 *)((int)puVar10 + DAT_8c04fc50 + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04fc48 + iVar1 + -0x14),puVar5,puVar7);
        (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c04fc58)
                  ((undefined1 *)((int)puVar10 + DAT_8c04fc48 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
      }
      (*(code *)PTR_vec3_copy_8c02b5fc_8c04fc64)
                ((undefined1 *)((int)puVar10 + DAT_8c04fc60 + iVar1 + -0x14),
                 *(undefined4 *)((int)puVar10 + DAT_8c04fc5c + iVar1 + -0x14),puVar5,puVar7);
      *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
           (undefined1 *)((int)puVar10 + DAT_8c04fc68 + iVar1 + -0x14);
      a4 = (undefined1 *)((int)puVar10 + DAT_8c04fc70 + iVar1 + -0x18);
      puVar5 = PTR_FUN_8c04fc74;
      (*(code *)PTR_FUN_8c04fc74)
                (a4,(undefined1 *)((int)puVar10 + DAT_8c04fc6c + iVar1 + -0x18),PTR_FUN_8c04fc74,a4)
      ;
      (*(code *)PTR_Vec3_assign_8c04fc40)
                ((undefined1 *)((int)puVar10 + DAT_8c04fc3c + iVar1 + -0x14),
                 (undefined1 *)((int)puVar10 + DAT_8c04fc68 + iVar1 + -0x14),puVar5,a4);
      (*(code *)PTR_Vec3_dtor_8c04fc44)
                ((undefined1 *)((int)puVar10 + DAT_8c04fc68 + iVar1 + -0x14),0xffffffff,puVar5,a4);
      puVar7 = PTR_object_dtor_delete_8c04fc78;
      (*(code *)PTR_object_dtor_delete_8c04fc78)
                ((undefined1 *)((int)puVar10 + DAT_8c04fc60 + iVar1 + -0x14),0xffffffff,puVar5,
                 PTR_object_dtor_delete_8c04fc78);
      puVar5 = (undefined *)((int)puVar10 + DAT_8c04fc3c + iVar1 + -0x14);
      (*(code *)PTR_FUN_8c04fc7c)(puVar5,ar6,puVar5,puVar7);
      uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04fc80)(ar5,ar6,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x44) = uVar2;
      (*(code *)PTR_FUN_8c04fc88)(*(undefined4 *)((int)puVar10 + iVar1 + 0x44),ar6,puVar5,puVar7);
      uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04fc80)(ar5,ar6,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x40) = uVar2;
      (*(code *)PTR_FUN_8c04fc90)(*(undefined4 *)((int)puVar10 + iVar1 + 0x40),ar6,puVar5,puVar7);
      iVar3 = DAT_8c04fc28;
      uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04fc94)
                        (ar4 + DAT_8c04fc28,DAT_8c04fc28,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x3c) = uVar2;
      if (*(int *)((int)puVar10 + iVar1 + 0x3c) == 1) {
        (*(code *)PTR_FUN_8c04fc98)(ar5,iVar3,puVar5,puVar7);
        (*(code *)PTR_FUN_8c04fc9c)(ar4 + DAT_8c04fc8c,DAT_8c04fc8c,puVar5,puVar7);
        *(undefined4 *)(DAT_8c04fca0 + ar4) = 2;
        uVar9 = 0;
        *(undefined4 *)(DAT_8c04fca4 + ar4) = 0;
        uVar6 = 0xffffffff;
        uVar2 = 0x1a;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04fcac)
                  (ar4 + DAT_8c04fc28,0x1a,0xffffffff,0);
        puVar7 = PTR_s_CAnimBody_SetFrame_033e6e_8c04fcb0;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04fcb0)
                  (ar4 + DAT_8c04fc28,uVar2,uVar6,PTR_s_CAnimBody_SetFrame_033e6e_8c04fcb0);
        puVar5 = (undefined *)0xa;
        uVar2 = (*(code *)PTR_rand_range_8c04fcb4)(ar4,0,10,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x38) = uVar2;
        if (*(int *)((int)puVar10 + iVar1 + 0x38) < 6) {
          puVar7 = (undefined *)0x0;
          puVar5 = (undefined *)0xffffffff;
          uVar2 = 0x1e;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04fcac)
                    (ar4 + DAT_8c04fc28,0x1e,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04fcb0)
                    (ar4 + DAT_8c04fc28,uVar2,puVar5,puVar7);
          *(undefined4 *)(DAT_8c04fca0 + ar4) = 3;
        }
      }
      goto switchD_8c04f3ac_default;
    case 6:
      uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04fcfc)(ar5,puVar4,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x34) = uVar2;
      uVar2 = (**(code **)(DAT_8c04fd00 + *(int *)(*(int *)((int)puVar10 + iVar1 + 0x34) + 8)))
                        (*(int *)((int)puVar10 + iVar1 + 0x34),puVar4,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x30) = uVar2;
      if (*(int *)((int)puVar10 + iVar1 + 0x30) == 0x13) {
        (*(code *)PTR_Vec3_assign_8c04fd0c)
                  ((undefined1 *)((int)puVar10 + DAT_8c04fd08 + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04fd04 + iVar1 + -0x14),puVar5,puVar7);
      }
      else {
        (*(code *)PTR_Vec3_assign_8c04fe50)
                  ((undefined1 *)((int)puVar10 + DAT_8c04fe4c + iVar1 + -0x14),
                   (undefined1 *)((int)puVar10 + DAT_8c04fe48 + iVar1 + -0x14),puVar5,puVar7);
      }
      (*(code *)PTR_Vec3_assign_8c04fe50)(ar4 + DAT_8c04fe54,ar6,puVar5,puVar7);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c04fe60,
                                  *(undefined4 *)((int)puVar10 + DAT_8c04fe5c + iVar1 + -0x14));
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c04fe5c + iVar1 + -0x14);
        dVar14 = (double)CONCAT44(_DAT_8c04fe64,DAT_8c04fe60);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar14 + dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c04fe58) = fVar11;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c04fe58) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c04fe60,
                                  *(undefined4 *)((int)puVar10 + DAT_8c04fe4c + iVar1 + -0x14));
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c04fe4c + iVar1 + -0x14);
        in_dr0 = (double)CONCAT44(_DAT_8c04fe64,DAT_8c04fe60);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c04fe54) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c04fe54) = in_xd0;
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)((int)puVar10 + iVar1 + -8) = ar4;
      *(int *)(_DAT_8c04fe64 + *(int *)((int)puVar10 + iVar1 + -8)) =
           *(int *)(_DAT_8c04fe64 + *(int *)((int)puVar10 + iVar1 + -8)) + 1;
      *(undefined4 *)(DAT_8c04fe68 + ar4) = 1;
      *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
           (undefined1 *)((int)puVar10 + DAT_8c04fe6c + iVar1 + -0x14);
      puVar4 = ar6;
      (*(code *)PTR_Vec3_sub_8c04fe74)
                ((undefined1 *)((int)puVar10 + DAT_8c04fe70 + iVar1 + -0x18),ar6,puVar5,puVar7);
      *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
           (undefined1 *)((int)puVar10 + _DAT_8c04fe64 + iVar1 + -0x14);
      (*(code *)PTR_Vec3_normalize_8c04fe7c)
                ((undefined1 *)((int)puVar10 + DAT_8c04fe78 + iVar1 + -0x18),puVar4,puVar5,puVar7);
      (*(code *)PTR_Vec3_assign_8c04fe50)
                (ar4 + 0x54,(undefined1 *)((int)puVar10 + _DAT_8c04fe64 + iVar1 + -0x14),puVar5,
                 puVar7);
      (*(code *)PTR_Vec3_dtor_8c04fe80)
                ((undefined1 *)((int)puVar10 + _DAT_8c04fe64 + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
      (*(code *)PTR_Vec3_dtor_8c04fe80)
                ((undefined1 *)((int)puVar10 + DAT_8c04fe6c + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
    case 7:
      fVar11 = SUB84(in_dr0,0);
      puVar5 = (undefined *)(ar4 + DAT_8c04fe54);
      puVar4 = ar6;
      uVar2 = (*(code *)PTR_FUN_8c04fe84)(ar4,ar6,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x2c) = uVar2;
      if (*(int *)((int)puVar10 + iVar1 + 0x2c) == 0) {
        uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04fe88)(ar5,puVar4,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x28) = uVar2;
        iVar3 = *(int *)(*(int *)((int)puVar10 + iVar1 + 0x28) + 8);
        uVar2 = (**(code **)(DAT_8c04fe8c + iVar3))
                          (*(int *)((int)puVar10 + iVar1 + 0x28),iVar3,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x24) = uVar2;
        if (*(int *)((int)puVar10 + iVar1 + 0x24) == 0x13) {
          (*(code *)PTR_Vec3_assign_8c04fe50)
                    ((undefined1 *)((int)puVar10 + DAT_8c04fe4c + iVar1 + -0x14),
                     (undefined1 *)((int)puVar10 + DAT_8c04fe90 + iVar1 + -0x14),puVar5,puVar7);
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(DAT_8c04fe94,
                                      *(undefined4 *)((int)puVar10 + DAT_8c04fe5c + iVar1 + -0x14));
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c04fe5c + iVar1 + -0x14);
            dVar14 = (double)CONCAT44(uRam8c04fe98,DAT_8c04fe94);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar14 + dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + DAT_8c04fe5c + iVar1 + -0x14) = fVar11;
          }
          else {
            *(undefined8 *)((int)puVar10 + DAT_8c04fe5c + iVar1 + -0x14) = in_xd0;
          }
        }
        else {
          (*(code *)PTR_Vec3_assign_8c04ffa0)
                    ((undefined1 *)((int)puVar10 + DAT_8c04ff9c + iVar1 + -0x14),
                     (undefined1 *)((int)puVar10 + DAT_8c04ff98 + iVar1 + -0x14),puVar5,puVar7);
        }
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04ffa4 + iVar1 + -0x14);
        (*(code *)PTR_Vec3_sub_8c04ffac)
                  ((undefined1 *)((int)puVar10 + DAT_8c04ffa8 + iVar1 + -0x18),ar6,puVar5,puVar7);
        (*(code *)PTR_Vec3_assign_8c04ffa0)
                  (ar4 + 0x54,(undefined1 *)((int)puVar10 + DAT_8c04ffa4 + iVar1 + -0x14),puVar5,
                   puVar7);
        (*(code *)PTR_Vec3_dtor_8c04ffb0)
                  ((undefined1 *)((int)puVar10 + DAT_8c04ffa4 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar11;
        }
        (*(code *)PTR_Vec3_length_8c04ffb4)(ar4 + 0x54,PTR_Vec3_length_8c04ffb4,puVar5,puVar7);
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(DAT_8c04ffb8,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x48);
          dVar14 = (double)CONCAT44(DAT_8c04ffbc,DAT_8c04ffb8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar14 + dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar10 + DAT_8c04ffbc + iVar1 + -0x14) = fVar11;
        }
        else {
          *(undefined8 *)((int)puVar10 + DAT_8c04ffbc + iVar1 + -0x14) = in_xd0;
        }
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04ffc0 + iVar1 + -0x14);
        (*(code *)PTR_Vec3_scale_8c04ffc8)
                  (ar4 + 0x54,(undefined1 *)((int)puVar10 + DAT_8c04ffc4 + iVar1 + -0x18),puVar5,
                   puVar7);
        *(undefined1 **)((int)puVar10 + iVar1 + -0x18) =
             (undefined1 *)((int)puVar10 + DAT_8c04ffcc + iVar1 + -0x14);
        (*(code *)PTR_Vec3_sub_8c04ffac)
                  ((undefined1 *)((int)puVar10 + DAT_8c04ffa8 + iVar1 + -0x18),
                   (undefined1 *)((int)puVar10 + DAT_8c04ffd0 + iVar1 + -0x18),puVar5,puVar7);
        (*(code *)PTR_Vec3_assign_8c04ffa0)
                  (ar4 + DAT_8c04ffd4,(undefined1 *)((int)puVar10 + DAT_8c04ffcc + iVar1 + -0x14),
                   puVar5,puVar7);
        (*(code *)PTR_Vec3_dtor_8c04ffb0)
                  ((undefined1 *)((int)puVar10 + DAT_8c04ffcc + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
        (*(code *)PTR_Vec3_dtor_8c04ffb0)
                  ((undefined1 *)((int)puVar10 + DAT_8c04ffc0 + iVar1 + -0x14),0xffffffff,puVar5,
                   puVar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c04ffd8) = (undefined4)DAT_8c04ffdc;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c04ffd8) =
               CONCAT44(DAT_8c04ffdc._4_4_,(undefined4)DAT_8c04ffdc);
        }
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)((int)puVar10 + iVar1 + -0xc) = ar4;
        *(int *)(DAT_8c04ffdc._4_4_ + *(int *)((int)puVar10 + iVar1 + -0xc)) =
             *(int *)(DAT_8c04ffdc._4_4_ + *(int *)((int)puVar10 + iVar1 + -0xc)) + 1;
        *(undefined4 *)(DAT_8c04ffe4 + ar4) = 1;
      }
switchD_8c04f3ac_default:
      *(undefined4 *)((int)puVar10 + DAT_8c0502d4 + iVar1 + -0x14) = uVar9;
      (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0502dc)
                ((undefined1 *)((int)puVar10 + DAT_8c0502d8 + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
      (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0502dc)
                ((undefined1 *)((int)puVar10 + DAT_8c0502e0 + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
      (*(code *)PTR_Vec3_dtor_8c0502e8)
                ((undefined1 *)((int)puVar10 + DAT_8c0502e4 + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
      (*(code *)PTR_Vec3_dtor_8c0502e8)
                ((undefined1 *)((int)puVar10 + DAT_8c0502a4 + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
      (*(code *)PTR_Vec3_dtor_8c0502e8)
                ((undefined1 *)((int)puVar10 + DAT_8c0502a8 + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
      puVar7 = PTR_Vec3_dtor_8c0502e8;
      (*(code *)PTR_Vec3_dtor_8c0502e8)
                ((undefined1 *)((int)puVar10 + DAT_8c0502ec + iVar1 + -0x14),0xffffffff,puVar5,
                 PTR_Vec3_dtor_8c0502e8);
      (*(code *)PTR_Vec3_dtor_8c0502e8)
                ((undefined1 *)((int)puVar10 + DAT_8c0502f0 + iVar1 + -0x14),0xffffffff,0xffffffff,
                 puVar7);
      return *(undefined4 *)((int)puVar10 + DAT_8c0502d4 + iVar1 + -0x14);
    case 8:
      (*(code *)PTR_Vec3_ctor_copy_8c0500cc)
                ((undefined1 *)((int)puVar10 + DAT_8c0500c8 + iVar1 + -0x14),ar4 + 0x54,puVar5,
                 puVar7);
      puVar7 = (undefined *)((int)puVar10 + DAT_8c0500c8 + iVar1 + -0x14);
      puVar5 = (undefined *)(ar4 + DAT_8c0500d0);
      uVar2 = (*(code *)PTR_FUN_8c0500d4)(ar4,ar6,puVar5,puVar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x20) = uVar2;
      *(uint *)((int)puVar10 + DAT_8c0500d8 + iVar1 + -0x14) =
           (uint)(*(int *)((int)puVar10 + iVar1 + 0x20) == 0);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0500dc)
                ((undefined1 *)((int)puVar10 + DAT_8c0500c8 + iVar1 + -0x14),0xffffffff,puVar5,
                 puVar7);
      if (*(int *)((int)puVar10 + DAT_8c0500d8 + iVar1 + -0x14) != 0) {
        uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c0500e0)(ar5,uVar2,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x1c) = uVar2;
        uVar2 = (**(code **)(DAT_8c0500e4 + *(int *)(*(int *)((int)puVar10 + iVar1 + 0x1c) + 8)))
                          (*(int *)((int)puVar10 + iVar1 + 0x1c),uVar2,puVar5,puVar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x18) = uVar2;
        if (*(int *)((int)puVar10 + iVar1 + 0x18) == 0x13) {
          puVar7 = (undefined *)0x0;
          puVar5 = (undefined *)0xffffffff;
          uVar2 = 0x1a;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0500f0)
                    (ar4 + DAT_8c0500e8._4_4_,0x1a,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0500f4)
                    (ar4 + DAT_8c0500e8._4_4_,uVar2,puVar5,puVar7);
          *(undefined4 *)(DAT_8c0500f8 + ar4) = 3;
          *(undefined4 *)(DAT_8c0500fc + ar4) = 0;
          (*(code *)PTR_FUN_8c050104)(ar4 + DAT_8c050100,0,puVar5,puVar7);
          *(int *)((int)puVar10 + iVar1 + -0x10) = ar4;
          *(int *)(DAT_8c050108 + *(int *)((int)puVar10 + iVar1 + -0x10)) =
               *(int *)(DAT_8c050108 + *(int *)((int)puVar10 + iVar1 + -0x10)) + 1;
        }
        else {
          puVar7 = (undefined *)0x0;
          uVar6 = 0xffffffff;
          uVar2 = 0x17;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050184)
                    (ar4 + DAT_8c05017c._4_4_,0x17,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c050188)
                    (ar4 + DAT_8c05017c._4_4_,uVar2,uVar6,puVar7);
          *(undefined4 *)(DAT_8c05018c + ar4) = 3;
          *(undefined4 *)(DAT_8c050190 + ar4) = 0;
          puVar5 = DAT_8c050194;
          (*(code *)PTR_FUN_8c050198)(DAT_8c050194 + ar4,DAT_8c050194 + ar4,DAT_8c050194,puVar7);
          *(undefined4 *)(DAT_8c05019c + ar4) = 4;
        }
      }
      if (*(int *)(DAT_8c0501a0 + ar4) == 1) {
        (*(code *)PTR_FUN_8c050198)(DAT_8c050194 + ar4,DAT_8c0501a0,puVar5,puVar7);
      }
      goto switchD_8c04f3ac_default;
    case 9:
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0502a0)
                (ar4 + DAT_8c05029c,ar4 + DAT_8c05029c,puVar5,puVar7);
      puVar7 = PTR_FUN_8c0502ac;
      (*(code *)PTR_FUN_8c0502ac)
                ((undefined1 *)((int)puVar10 + DAT_8c0502a8 + iVar1 + -0x14),
                 (undefined1 *)((int)puVar10 + DAT_8c0502a4 + iVar1 + -0x14),puVar5,PTR_FUN_8c0502ac
                );
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar10 + iVar1 + 0x14) = (int)((ulonglong)in_dr0 >> 0x20);
        fVar11 = *(float *)((int)puVar10 + iVar1 + 0x14);
        fVar13 = DAT_8c0502b0;
      }
      else {
        *(double *)((int)puVar10 + iVar1 + 0x14) = in_dr0;
        fVar11 = DAT_8c0502b0;
        fVar13 = DAT_8c0502b4;
      }
      if (in_FPSCR_PR == '\0' && fVar11 < fVar13) {
        uVar8 = 0;
        uVar6 = 0xffffffff;
        uVar2 = 0x16;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0502b8)
                  (ar4 + DAT_8c05029c,0x16,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0502bc)(ar4 + DAT_8c05029c,uVar2,uVar6,uVar8);
        puVar7 = (undefined *)0x3;
        *(undefined4 *)(DAT_8c0502c0 + ar4) = 3;
        puVar5 = DAT_8c0502c4;
        *(undefined4 *)(DAT_8c0502c4 + ar4) = 0;
        (*(code *)PTR_FUN_8c0502cc)(ar4 + DAT_8c0502c8,uVar2,puVar5,3);
        *(undefined4 *)(DAT_8c0502d0 + ar4) = 4;
      }
      goto switchD_8c04f3ac_default;
    }
    puVar5 = (undefined *)((int)puVar10 + DAT_8c04f518 + iVar1 + -0x14);
    puVar4 = PTR_FUN_8c04f51c;
    (*(code *)PTR_FUN_8c04f51c)(puVar5,PTR_FUN_8c04f51c,puVar5,puVar7);
    uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c04f520)(ar5,puVar4,puVar5,puVar7);
    *(undefined4 *)((int)puVar10 + DAT_8c04f524 + iVar1 + -0x14) = uVar2;
    uVar6 = (**(code **)(DAT_8c04f528 +
                        *(int *)(*(int *)((int)puVar10 + DAT_8c04f524 + iVar1 + -0x14) + 8)))
                      (*(int *)((int)puVar10 + DAT_8c04f524 + iVar1 + -0x14),puVar4,puVar5,puVar7);
    uVar2 = (undefined4)in_dr14;
    *(undefined4 *)((int)puVar10 + DAT_8c04f52c + iVar1 + -0x14) = uVar6;
    if (*(int *)((int)puVar10 + DAT_8c04f52c + iVar1 + -0x14) == 0x18) {
      uVar8 = 0;
      uVar6 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c04f538)
                (ar4 + DAT_8c04f530._4_4_,0x17,0xffffffff,0);
      *(undefined4 *)(DAT_8c04f5f8 + ar4) = 3;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c04f600)(ar4 + DAT_8c04f5fc,3,uVar6,uVar8);
      (*(code *)PTR_FUN_8c04f608)(ar4 + DAT_8c04f604,PTR_FUN_8c04f608,uVar6,uVar8);
      *(int *)((int)puVar10 + iVar1 + 4) = ar4;
      puVar4 = *(undefined **)((int)puVar10 + iVar1 + 4);
      *(int *)(DAT_8c04f60c + *(int *)((int)puVar10 + iVar1 + 4)) =
           *(int *)(puVar4 + DAT_8c04f60c) + 1;
switchD_8c04f3ac_caseD_4:
      puVar7 = (undefined *)(ar4 + DAT_8c04f5fc);
      puVar5 = PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04f610;
      (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04f610)
                (puVar7,puVar4,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c04f610,puVar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c04f614)(ar4 + DAT_8c04f5fc,puVar4,puVar5,puVar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar10 + DAT_8c04f618 + iVar1 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
        dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c04f618 + iVar1 + -0x14),uVar2
                                 );
        dVar12 = (double)CONCAT44(DAT_8c04f61c,SUB84(in_dr0,0));
      }
      else {
        *(double *)((int)puVar10 + DAT_8c04f618 + iVar1 + -0x14) = in_dr0;
        dVar14 = *(double *)((int)puVar10 + DAT_8c04f618 + iVar1 + -0x14);
        dVar12 = (double)CONCAT44(DAT_8c04f620,DAT_8c04f61c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar15 = (float)((ulonglong)dVar14 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar15 = dVar14 < dVar12;
      }
      if ((!bVar15) && (*(int *)(DAT_8c04f620 + ar4) == 0)) {
        puVar7 = *(undefined **)(DAT_8c04f624 + ar4);
        (*(code *)PTR_FUN_8c04f628)(ar4,0x1a,ar6,puVar7);
        *(undefined4 *)(DAT_8c04f620 + ar4) = 1;
        puVar5 = ar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c04f62c,SUB84(dVar12,0));
      }
      else {
        dVar12 = (double)CONCAT44(uRam8c04f630,DAT_8c04f62c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar15 = (float)((ulonglong)dVar14 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar15 = dVar14 < dVar12;
      }
      if (!bVar15) {
        *(int *)((int)puVar10 + iVar1) = ar4;
        puVar7 = *(undefined **)((int)puVar10 + iVar1);
        *(int *)(DAT_8c04f60c + *(int *)((int)puVar10 + iVar1)) =
             *(int *)(puVar7 + DAT_8c04f60c) + 1;
      }
      goto switchD_8c04f3ac_default;
    }
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(DAT_8c04f54c + ar4) = 6;
  } while( true );
}


