/* Seaman (USA) region 0x8c050000-0x8c060000 (Ghidra decompiler) */

/* ret_const_0_0502f8 @ 8c0502f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0502f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c050300 @ 8c050300 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c050300(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int a4;
  int iVar1;
  int a5;
  undefined4 uVar2;
  int a6;
  int a7;
  undefined4 uVar3;
  uint in_fr1;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_cc;
  int aiStack_c8 [4];
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [64];
  
  uVar3 = 1;
  uVar2 = ar6;
  iVar1 = ar7;
  aiStack_c8[0] = ar7;
  (*(code *)PTR_Vec3_ctor_copy_8c050384)((int)aiStack_c8 + DAT_8c050380,ar7,ar6,ar7);
  (*(code *)PTR_Vec3_set_xyz_8c05038c)((int)aiStack_c8 + DAT_8c050388,ar7,uVar2,iVar1);
  a4 = (*(code *)PTR_get_field_6c_028cc4_8c050390)(ar5,ar7,uVar2,iVar1);
  iStack_a0 = a4;
  (*(code *)PTR_Vec3_ctor_zero_8c050398)((int)aiStack_c8 + DAT_8c050394,ar7,uVar2,iVar1);
  if (a4 == 0) {
    uStack_98 = 2;
    (*(code *)PTR_Vec3_dtor_8c05039c)((int)aiStack_c8 + DAT_8c050394,0xffffffff,uVar2,iVar1);
    (*(code *)PTR_object_dtor_delete_8c0503a0)
              ((int)aiStack_c8 + DAT_8c050388,0xffffffff,uVar2,iVar1);
    (*(code *)PTR_Vec3_dtor_8c05039c)((int)aiStack_c8 + DAT_8c050380,0xffffffff,uVar2,iVar1);
  }
  else {
    a7 = (int)aiStack_c8 + DAT_8c0503d0;
    a6 = (int)aiStack_c8 + DAT_8c0503d4;
    a5 = (int)aiStack_c8 + DAT_8c0503d8;
    (*(code *)PTR_FUN_8c0503dc)(a4,a5,a6,a7);
    iVar1 = *(int *)(DAT_8c0503e0 + ar4);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c050490)(ar4 + DAT_8c05048c,a5,a6,a7);
      uStack_a8._4_4_ = iVar1;
      if (iVar1 == 1) {
        a7 = 0;
        a6 = -1;
        a5 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050498)(ar4 + DAT_8c05048c,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05049c)(ar4 + DAT_8c05048c,a5,a6,a7);
        *(undefined4 *)(DAT_8c0504a0 + ar4) = 3;
      }
      (*(code *)PTR_FUN_8c0504a8)(ar4,a5,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0504ac,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = (double)CONCAT44(DAT_8c0504b0,DAT_8c0504ac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) * fVar4);
      }
      else {
        dVar5 = dVar5 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      iStack_b4 = ar4;
      (**(code **)(DAT_8c0504b4 + **(int **)(DAT_8c0504b0 + ar4)))
                (*(int **)(DAT_8c0504b0 + ar4),a5,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        uVar2 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uStack_a8 = (double)CONCAT44(uStack_a8._4_4_,uVar2);
        dVar5 = (double)CONCAT44(uVar2,*(undefined4 *)((int)aiStack_c8 + DAT_8c0504b8));
      }
      else {
        uStack_a8 = dVar5;
        dVar5 = uStack_a8;
      }
      if (in_FPSCR_PR != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)(DAT_8c0504bc + ar4) = *(int *)(DAT_8c0504bc + ar4) + 1;
        iStack_b8 = ar4;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar5 & 0xffffffff;
        }
      }
    }
    else if (iVar1 == 1) {
      a6 = (int)aiStack_c8 + DAT_8c050554;
      iStack_ac = (*(code *)PTR_pure_virtual_stub_8c05055c)(ar4,ar6,a6,a7);
      if ((iStack_ac == 0) || (*(int *)(ar4 + 0x40) == 4)) {
        *(int *)(DAT_8c050560 + ar4) = *(int *)(DAT_8c050560 + ar4) + 1;
        *(undefined4 *)(DAT_8c050564 + ar4) = 0;
        *(undefined4 *)(DAT_8c050568 + ar4) = 3;
        a7 = 0;
        a6 = -1;
        uVar2 = 0x10;
        aiStack_c8[3] = ar4;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050570)
                  (ar4 + DAT_8c05056c,0x10,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c050574)(ar4 + DAT_8c05056c,uVar2,a6,a7);
        *(undefined4 *)(ar4 + 0x40) = 5;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_fr1;
        }
      }
    }
    else if (iVar1 == 2) {
      (*(code *)PTR_FUN_8c050734)(ar4,a5,a6,a7);
      *(undefined4 *)(DAT_8c050738 + ar4) = 0;
      a7 = (int)aiStack_c8 + DAT_8c05073c;
      a6 = (int)aiStack_c8 + DAT_8c050740;
      (*(code *)PTR_FUN_8c050748)(a4,(int)aiStack_c8 + DAT_8c050744,a6,a7);
      puStack_cc = auStack_54;
      (*(code *)PTR_Vec3_scale_8c05074c)(ar4 + 0x14,ar4 + 0x48,a6,a7);
      puStack_cc = auStack_64;
      (*(code *)PTR_Vec3_scale_8c05074c)(auStack_54,PTR_DAT_8c050750,a6,a7);
      puStack_cc = auStack_74;
      (*(code *)PTR_Vec3_add_8c050754)(auStack_64,ar6,a6,a7);
      puStack_cc = auStack_84;
      (*(code *)PTR_Vec3_sub_8c050758)(auStack_74,(int)&puStack_cc + DAT_8c050740,a6,a7);
      puStack_cc = auStack_94;
      (*(code *)PTR_Vec3_scale_8c05074c)(auStack_84,PTR_DAT_8c05075c,a6,a7);
      (*(code *)PTR_FUN_8c050760)((int)aiStack_c8 + DAT_8c050744,auStack_94,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c050764)(auStack_94,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c050764)(auStack_84,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c050764)(auStack_74,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c050764)(auStack_64,0xffffffff,a6,a7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c050764)(auStack_54,0xffffffff,a6,a7);
      (*(code *)PTR_FUN_8c050768)(a4,uVar2,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c05076c,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = (double)CONCAT44(DAT_8c050770,DAT_8c05076c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      aiStack_c8[2] = ar4;
      iStack_b0 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c050774)
                            (ar4 + DAT_8c050770,uVar2,a6,a7);
      if (iStack_b0 == 1) {
        *(undefined4 *)(DAT_8c050778 + ar4) = 0;
        uVar3 = 0;
        *(undefined4 *)(DAT_8c05077c + ar4) = 0;
        *(byte *)(DAT_8c050780 + ar4) = *(byte *)(DAT_8c050780 + ar4) & 0xfb | 4;
        aiStack_c8[1] = ar4;
        (*(code *)PTR_FUN_8c050784)(ar5,uVar2,a6,a7);
        a7 = 0;
        a6 = -1;
        uVar2 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05078c)(ar4 + DAT_8c050770,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c050790)(ar4 + DAT_8c050770,uVar2,a6,a7);
        *(undefined4 *)(DAT_8c050794 + ar4) = 2;
        *(undefined4 *)(DAT_8c050738 + ar4) = 1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar4;
        }
      }
    }
    uStack_9c = uVar3;
    (*(code *)PTR_Vec3_dtor_8c050764)((int)aiStack_c8 + DAT_8c050744,0xffffffff,a6,a7);
    (*(code *)PTR_object_dtor_delete_8c05079c)((int)aiStack_c8 + DAT_8c050798,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c050764)((int)aiStack_c8 + DAT_8c0507a0,0xffffffff,a6,a7);
    uStack_98 = uStack_9c;
  }
  return uStack_98;
}



/* FUN_8c0507a4 @ 8c0507a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0507a4(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

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



/* FUN_8c0507c0 @ 8c0507c0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0509aa) */
/* WARNING: Removing unreachable block (ram,0x8c050bea) */
/* WARNING: Removing unreachable block (ram,0x8c050bf8) */
/* WARNING: Removing unreachable block (ram,0x8c0509b8) */
/* WARNING: Switch with 1 destination removed at 0x8c050826 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0507c0(int *ar4,ulonglong *ar5,undefined *ar6,ulonglong *ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  ulonglong *puVar3;
  float *a5;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *a5_00;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int *piVar9;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar10;
  uint uVar11;
  float fVar12;
  ulonglong in_dr0;
  undefined8 uVar13;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  undefined4 in_fr3;
  double in_dr4;
  undefined8 in_dr14;
  float fVar17;
  ulonglong in_xd0;
  undefined8 in_xd14;
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
  *(undefined4 *)((int)puVar10 + -0xc) = 1;
  *(undefined4 *)((int)puVar10 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar10 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar10 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar10 + -0x1c) = in_PR;
  iVar1 = -DAT_8c050830;
  *(ulonglong **)((int)puVar10 + iVar1 + -0x1c) = ar7;
  if (in_FPSCR_SZ == '\0') {
    in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  piVar9 = *(int **)((int)puVar10 + DAT_8c050834 + iVar1 + -0x1c);
  puVar3 = ar5;
  puVar8 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c05083c)
            ((undefined1 *)((int)puVar10 + DAT_8c050838 + iVar1 + -0x1c),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c05083c)
            ((undefined1 *)((int)puVar10 + DAT_8c050840 + iVar1 + -0x1c),puVar3,puVar8,ar7);
  (*(code *)PTR_FUN_8c050844)(ar4,puVar3,puVar8,ar7);
  iVar2 = ar4[0x1a];
  if (iVar2 == 0) {
    *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
         (undefined1 *)((int)puVar10 + DAT_8c0508fc + iVar1 + -0x1c);
    (*(code *)PTR_FUN_8c050904)
              ((int)ar4 + DAT_8c050900,(undefined1 *)((int)puVar10 + DAT_8c0508fc + iVar1 + -0x1c),
               puVar8,ar7);
    (*(code *)PTR_Vec3_assign_8c050908)
              ((int)ar4 + DAT_8c050900,(undefined1 *)((int)puVar10 + DAT_8c0508fc + iVar1 + -0x1c),
               puVar8,ar7);
    (*(code *)PTR_Vec3_dtor_8c05090c)
              ((undefined1 *)((int)puVar10 + DAT_8c0508fc + iVar1 + -0x1c),0xffffffff,puVar8,ar7);
    if (*(int *)(DAT_8c050910 + (int)ar4) < 3) {
      ar7 = (ulonglong *)0x0;
      puVar8 = (undefined *)0xffffffff;
      uVar5 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05091c)
                ((int)ar4 + DAT_8c050914._4_4_,0,0xffffffff,0);
      (*(code *)PTR_FUN_8c050924)(ar4 + 5,uVar5,puVar8,ar7);
      if (*(int *)(DAT_8c050928 + (int)ar4) != 0x2e) {
        if (in_FPSCR_SZ == '\0') {
          uVar13 = CONCAT44(*(undefined4 *)(PTR_DAT_8c05092c + 8),(int)ar5[1]);
        }
        else {
          in_xd0 = ar5[1];
          uVar13 = *(undefined8 *)(PTR_DAT_8c05092c + 8);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar13 < (float)((ulonglong)uVar13 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar5 + 1) = (int)*(ulonglong *)(PTR_DAT_8c05092c + 8);
          }
          else {
            ar5[1] = *(ulonglong *)(PTR_DAT_8c05092c + 8);
          }
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(*(undefined4 *)PTR_DAT_8c05092c,(int)*ar5);
        }
        else {
          in_xd0 = *ar5;
          in_dr0 = *(ulonglong *)PTR_DAT_8c05092c;
        }
        if (in_FPSCR_PR == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44(*(undefined4 *)PTR_DAT_8c05092c,(float)in_dr0);
            *(undefined4 *)ar5 = *(undefined4 *)PTR_DAT_8c05092c;
          }
          else {
            in_dr0 = *(ulonglong *)PTR_DAT_8c05092c;
            *ar5 = in_dr0;
          }
        }
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(*(undefined4 *)PTR_DAT_8c05098c,(int)*ar5);
      }
      else {
        in_xd0 = *ar5;
        in_dr0 = *(ulonglong *)PTR_DAT_8c05098c;
      }
      if (in_FPSCR_PR == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44(*(undefined4 *)(PTR_DAT_8c05098c + 8),(int)ar5[1]);
        }
        else {
          in_xd0 = ar5[1];
          in_dr0 = *(ulonglong *)(PTR_DAT_8c05098c + 8);
        }
        if (in_FPSCR_PR == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            uVar5 = (undefined4)*(ulonglong *)(PTR_DAT_8c05098c + 8);
            in_dr0 = CONCAT44(uVar5,(float)in_dr0);
            *(undefined4 *)(ar5 + 1) = uVar5;
          }
          else {
            in_dr0 = *(ulonglong *)(PTR_DAT_8c05098c + 8);
            ar5[1] = in_dr0;
          }
        }
      }
      a4 = piVar9;
      puVar3 = ar5;
      uVar5 = (**(code **)(DAT_8c050990 + *piVar9))(piVar9,ar5,puVar8,ar7);
      fVar12 = (float)in_dr0;
      *(undefined4 *)((int)puVar10 + iVar1 + 0x5c) = uVar5;
      iVar2 = *(int *)((int)puVar10 + iVar1 + 0x5c);
      if (iVar2 == 0) {
        (*(code *)PTR_Vec3_length_8c050a1c)((int)ar4 + DAT_8c050a18,puVar3,puVar8,ar7);
        a5 = (float *)((int)ar4 + DAT_8c050a20);
        if (in_FPSCR_SZ == '\0') {
          fVar12 = *a5;
        }
        else {
          in_xd0 = *(ulonglong *)a5;
        }
        in_dr0 = (ulonglong)(uint)fVar12;
        if (fVar12 == 0.0) {
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)((int)ar4 + DAT_8c050a18);
          }
          else {
            in_xd0 = *(ulonglong *)((int)ar4 + DAT_8c050a18);
          }
          in_dr0 = (ulonglong)(uint)fVar12;
          if (fVar12 == 0.0) {
            puVar8 = PTR_FUN_8c050a24;
            (*(code *)PTR_FUN_8c050a24)((int)ar4 + DAT_8c050a18,a5,PTR_FUN_8c050a24,ar7);
          }
        }
        *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar10 + DAT_8c050a28 + iVar1 + -0x1c);
        (*(code *)PTR_FUN_8c050a30)((int)ar4 + DAT_8c050a18,a5,puVar8,ar7);
        (*(code *)PTR_Vec3_assign_8c050a34)
                  ((int)ar4 + DAT_8c050a18,
                   (undefined1 *)((int)puVar10 + DAT_8c050a28 + iVar1 + -0x1c),puVar8,ar7);
        (*(code *)PTR_Vec3_dtor_8c050a38)
                  ((undefined1 *)((int)puVar10 + DAT_8c050a28 + iVar1 + -0x1c),0xffffffff,puVar8,ar7
                  );
        if (*(int *)((int)puVar10 + DAT_8c050a3c + iVar1 + -0x1c) == 1) {
          iVar2 = 10;
        }
        else {
          iVar2 = 2;
        }
        uVar4 = 100;
        uVar5 = (*(code *)PTR_rand_range_8c050adc)(ar4,0,100,ar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x58) = uVar5;
        if ((iVar2 < *(int *)((int)puVar10 + iVar1 + 0x58)) ||
           (*(int *)(DAT_8c050ae0 + (int)ar4) != 4)) {
          ar7 = (ulonglong *)0x0;
          puVar8 = (undefined *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050b3c)
                    ((int)ar4 + DAT_8c050b38,99,0xffffffff,0);
        }
        else {
          (*(code *)PTR_Vec3_set_xyz_8c050aec)
                    ((undefined1 *)((int)puVar10 + DAT_8c050ae4._4_4_ + iVar1 + -0x1c),
                     PTR_Vec3_set_xyz_8c050aec,uVar4,ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c050af0 + iVar1 + -0x1c);
          (*(code *)PTR_FUN_8c050afc)
                    ((int)ar4 + DAT_8c050af8,
                     (undefined1 *)((int)puVar10 + DAT_8c050af4 + iVar1 + -0x20),uVar4,ar7);
          (*(code *)PTR_Vec3_assign_8c050b00)
                    ((int)ar4 + DAT_8c050af8,
                     (undefined1 *)((int)puVar10 + DAT_8c050af0 + iVar1 + -0x1c),uVar4,ar7);
          (*(code *)PTR_Vec3_dtor_8c050b04)
                    ((undefined1 *)((int)puVar10 + DAT_8c050af0 + iVar1 + -0x1c),0xffffffff,uVar4,
                     ar7);
          (*(code *)PTR_object_dtor_delete_8c050b08)
                    ((undefined1 *)((int)puVar10 + DAT_8c050ae4._4_4_ + iVar1 + -0x1c),0xffffffff,
                     uVar4,ar7);
          ar7 = (ulonglong *)0x0;
          puVar8 = (undefined *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050b14)
                    ((int)ar4 + DAT_8c050b0c._4_4_,0x49,0xffffffff,0);
        }
      }
      else if (iVar2 == 1) {
        ar7 = (ulonglong *)0x0;
        puVar8 = (undefined *)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050b64)
                  ((int)ar4 + DAT_8c050b5c._4_4_,0,0xffffffff,0);
      }
      else if (iVar2 == 2) {
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44((int)*ar5,fVar12);
        }
        else {
          uVar15 = *ar5;
        }
        (*(code *)PTR_FUN_8c050bc0)(a4,puVar3,puVar8,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + iVar1 + 0x54) = (int)(uVar15 >> 0x20);
          uVar13 = CONCAT44(DAT_8c050bc4,(int)uVar15);
        }
        else {
          *(ulonglong *)((int)puVar10 + iVar1 + 0x54) = uVar15;
          uVar13 = CONCAT44(_DAT_8c050bc8,DAT_8c050bc4);
        }
        (*(code *)PTR_FUN_8c050bc0)(a4,puVar3,puVar8,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + iVar1 + 0x50) = (int)((ulonglong)uVar13 >> 0x20);
          uVar13 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar1 + 0x50),
                            *(undefined4 *)((int)puVar10 + iVar1 + 0x54));
        }
        else {
          *(undefined8 *)((int)puVar10 + iVar1 + 0x50) = uVar13;
          in_xd0 = *(ulonglong *)((int)puVar10 + iVar1 + 0x54);
          uVar13 = *(undefined8 *)((int)puVar10 + iVar1 + 0x50);
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar13 >> 0x20) <= (float)uVar13) {
          puVar6 = PTR_Vec3_length_8c050d28;
          (*(code *)PTR_Vec3_length_8c050d28)
                    ((int)ar4 + DAT_8c050d24,puVar3,puVar8,PTR_Vec3_length_8c050d28);
          fVar12 = (float)uVar13;
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)((int)ar4 + DAT_8c050d2c);
          }
          else {
            in_xd0 = *(ulonglong *)((int)ar4 + DAT_8c050d2c);
          }
          iVar2 = DAT_8c050d2c;
          if (fVar12 == 0.0) {
            if (in_FPSCR_SZ == '\0') {
              fVar12 = *(float *)((int)ar4 + DAT_8c050d24);
            }
            else {
              in_xd0 = *(ulonglong *)((int)ar4 + DAT_8c050d24);
            }
            if (fVar12 == 0.0) {
              (*(code *)PTR_FUN_8c050d30)((int)ar4 + DAT_8c050d24,puVar3,DAT_8c050d2c,puVar6);
            }
          }
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c050d34 + iVar1 + -0x1c);
          (*(code *)PTR_FUN_8c050d3c)((int)ar4 + DAT_8c050d24,puVar3,iVar2,puVar6);
          (*(code *)PTR_Vec3_assign_8c050d40)
                    ((int)ar4 + DAT_8c050d24,
                     (undefined1 *)((int)puVar10 + DAT_8c050d34 + iVar1 + -0x1c),iVar2,puVar6);
          (*(code *)PTR_Vec3_dtor_8c050d44)
                    ((undefined1 *)((int)puVar10 + DAT_8c050d34 + iVar1 + -0x1c),0xffffffff,iVar2,
                     puVar6);
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44((undefined4)DAT_8c050d48,fVar12);
            *(undefined4 *)ar5 = (undefined4)DAT_8c050d48;
          }
          else {
            in_dr0 = CONCAT44(DAT_8c050d48._4_4_,(undefined4)DAT_8c050d48);
            *ar5 = in_dr0;
          }
          ar7 = (ulonglong *)0x0;
          puVar8 = (undefined *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050d54)
                    ((int)ar4 + DAT_8c050d50,99,0xffffffff,0);
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44(DAT_8c050bbc,(float)uVar13);
            *(undefined4 *)ar5 = DAT_8c050bbc;
          }
          else {
            in_dr0 = CONCAT44(PTR_FUN_8c050bc0,DAT_8c050bbc);
            *ar5 = in_dr0;
          }
          ar7 = (ulonglong *)0x0;
          puVar8 = (undefined *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c050bd0)
                    ((int)ar4 + DAT_8c050bcc,0,0xffffffff,0);
        }
      }
    }
    uVar11 = (uint)in_dr0;
    (*(code *)PTR_Vec3_assign_8c050d40)(ar4 + 0x15,(int)ar4 + DAT_8c050d24,puVar8,ar7);
    (*(code *)PTR_Vec3_length_8c050d28)(ar4 + 5,PTR_Vec3_length_8c050d28,puVar8,ar7);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c050d58)
              ((int)ar4 + DAT_8c050d50,PTR_s_CAnimBody_SetFrame_033e6e_8c050d58,puVar8,ar7);
    *(undefined4 *)(DAT_8c050d5c + (int)ar4) = 2;
    if (in_FPSCR_SZ == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = (ulonglong)uVar11;
    }
    *(undefined4 *)((int)puVar10 + iVar1 + 0x28) = *(undefined4 *)(DAT_8c050d60 + (int)ar4);
    (*(code *)PTR_FUN_8c050d68)
              (ar4,(*(int *)((int)puVar10 + iVar1 + 0x28) * 2 +
                   *(int *)((int)puVar10 + iVar1 + 0x28)) * 8 + DAT_8c050d64,puVar8,ar7);
    *(int **)((int)puVar10 + iVar1 + 0x24) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(DAT_8c050d70,
                                (int)*(ulonglong *)
                                      (*(int *)((int)puVar10 + iVar1 + 0x24) + DAT_8c050d6c));
    }
    else {
      in_xd0 = *(ulonglong *)(*(int *)((int)puVar10 + iVar1 + 0x24) + DAT_8c050d6c);
      dVar16 = (double)CONCAT44(PTR_FUN_8c050d74,DAT_8c050d70);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar16 * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar10 + iVar1 + 0x24) + DAT_8c050d6c) = fVar12;
    }
    else {
      *(ulonglong *)(*(int *)((int)puVar10 + iVar1 + 0x24) + DAT_8c050d6c) = in_xd0;
    }
    puVar3 = (ulonglong *)PTR_FUN_8c050d74;
    (*(code *)PTR_FUN_8c050d74)(ar4,PTR_FUN_8c050d74,puVar8,ar7);
    in_dr0 = (ulonglong)(uint)fVar12;
    if (in_FPSCR_SZ == '\0') {
      ar4[0xb] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xb) = in_dr0;
    }
    *(int **)((int)puVar10 + iVar1 + 0x20) = ar4;
    *(int *)(*(int *)((int)puVar10 + iVar1 + 0x20) + 0x68) =
         *(int *)(*(int *)((int)puVar10 + iVar1 + 0x20) + 0x68) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      if (*(int *)(DAT_8c0514c0 + (int)ar4) == 0) {
        *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar10 + DAT_8c0514c4 + iVar1 + -0x1c);
        puVar6 = PTR_FUN_8c0514cc;
        (*(code *)PTR_FUN_8c0514cc)((int)ar4 + DAT_8c0514c8,PTR_FUN_8c0514cc,puVar8,ar7);
        fVar12 = (float)in_dr0;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar10 + DAT_8c0514d0 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_normalize_8c0514d8)
                  ((undefined1 *)((int)puVar10 + DAT_8c0514d4 + iVar1 + -0x20),puVar6,puVar8,ar7);
        (*(code *)PTR_Vec3_assign_8c0514e0)
                  ((undefined1 *)((int)puVar10 + DAT_8c0514dc + iVar1 + -0x1c),
                   (undefined1 *)((int)puVar10 + DAT_8c0514d0 + iVar1 + -0x1c),puVar8,ar7);
        (*(code *)PTR_Vec3_dtor_8c0514e4)
                  ((undefined1 *)((int)puVar10 + DAT_8c0514d0 + iVar1 + -0x1c),0xffffffff,puVar8,ar7
                  );
        (*(code *)PTR_Vec3_dtor_8c0514e4)
                  ((undefined1 *)((int)puVar10 + DAT_8c0514c4 + iVar1 + -0x1c),0xffffffff,puVar8,ar7
                  );
        *(int **)((int)puVar10 + iVar1 + 0x10) = ar4;
        if (in_FPSCR_SZ == '\0') {
          fVar12 = *(float *)(*(int *)((int)puVar10 + iVar1 + 0x10) + 0x2c);
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar10 + iVar1 + 0x10) + 0x2c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = fVar12 + 1.0;
        }
        else {
          fVar12 = SUB84((double)CONCAT44(0x3f800000,fVar12) + (double)CONCAT44(0x3f800000,fVar12),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar10 + iVar1 + 0xc) = fVar12;
        }
        else {
          *(ulonglong *)((int)puVar10 + iVar1 + 0xc) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(*(int *)((int)puVar10 + iVar1 + 0x10) + 0x2c) =
               *(undefined4 *)((int)puVar10 + iVar1 + 0xc);
          dVar16 = (double)CONCAT44(DAT_8c0514e8,*(undefined4 *)((int)puVar10 + iVar1 + 0xc));
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar10 + iVar1 + 0x10) + 0x2c) =
               *(undefined8 *)((int)puVar10 + iVar1 + 0xc);
          in_xd0 = *(ulonglong *)((int)puVar10 + iVar1 + 0xc);
          dVar16 = (double)CONCAT44(DAT_8c0514ec,DAT_8c0514e8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar16 / dVar16,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar10 + DAT_8c0514ec + iVar1 + -0x1c) = fVar12;
        }
        else {
          *(ulonglong *)((int)puVar10 + DAT_8c0514ec + iVar1 + -0x1c) = in_xd0;
        }
      }
      else {
        *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar10 + DAT_8c05164c + iVar1 + -0x1c);
        iVar2 = (int)ar4 + DAT_8c051650;
        (*(code *)PTR_FUN_8c051654)(iVar2,iVar2,puVar8,ar7);
        fVar12 = (float)in_dr0;
        *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
             (undefined1 *)((int)puVar10 + DAT_8c051658 + iVar1 + -0x1c);
        (*(code *)PTR_Vec3_normalize_8c051660)
                  ((undefined1 *)((int)puVar10 + DAT_8c05165c + iVar1 + -0x20),iVar2,puVar8,ar7);
        (*(code *)PTR_Vec3_assign_8c051668)
                  ((undefined1 *)((int)puVar10 + DAT_8c051664 + iVar1 + -0x1c),
                   (undefined1 *)((int)puVar10 + DAT_8c051658 + iVar1 + -0x1c),puVar8,ar7);
        (*(code *)PTR_Vec3_dtor_8c05166c)
                  ((undefined1 *)((int)puVar10 + DAT_8c051658 + iVar1 + -0x1c),0xffffffff,puVar8,ar7
                  );
        (*(code *)PTR_Vec3_dtor_8c05166c)
                  ((undefined1 *)((int)puVar10 + DAT_8c05164c + iVar1 + -0x1c),0xffffffff,puVar8,ar7
                  );
        *(int **)((int)puVar10 + iVar1 + 8) = ar4;
        if (in_FPSCR_SZ == '\0') {
          fVar12 = *(float *)(*(int *)((int)puVar10 + iVar1 + 8) + 0x2c);
        }
        else {
          in_xd0 = *(ulonglong *)(*(int *)((int)puVar10 + iVar1 + 8) + 0x2c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = fVar12 + 1.0;
        }
        else {
          fVar12 = SUB84((double)CONCAT44(0x3f800000,fVar12) + (double)CONCAT44(0x3f800000,fVar12),0
                        );
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar10 + iVar1 + 4) = fVar12;
        }
        else {
          *(ulonglong *)((int)puVar10 + iVar1 + 4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(*(int *)((int)puVar10 + iVar1 + 8) + 0x2c) =
               *(undefined4 *)((int)puVar10 + iVar1 + 4);
          dVar16 = (double)CONCAT44(DAT_8c051670,*(undefined4 *)((int)puVar10 + iVar1 + 4));
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar10 + iVar1 + 8) + 0x2c) =
               *(undefined8 *)((int)puVar10 + iVar1 + 4);
          in_xd0 = *(ulonglong *)((int)puVar10 + iVar1 + 4);
          dVar16 = (double)CONCAT44(DAT_8c051674,DAT_8c051670);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar16 / dVar16,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)puVar10 + DAT_8c051674 + iVar1 + -0x1c) = fVar12;
        }
        else {
          *(ulonglong *)((int)puVar10 + DAT_8c051674 + iVar1 + -0x1c) = in_xd0;
        }
      }
      *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar10 + DAT_8c051678 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c051684)
                ((undefined1 *)((int)puVar10 + DAT_8c051680 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar10 + DAT_8c05167c + iVar1 + -0x20),puVar8,ar7);
      (*(code *)PTR_FUN_8c051688)
                ((int)ar4 + DAT_8c051650,(undefined1 *)((int)puVar10 + DAT_8c051678 + iVar1 + -0x1c)
                 ,puVar8,ar7);
      uVar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05166c)
                ((undefined1 *)((int)puVar10 + DAT_8c051678 + iVar1 + -0x1c),0xffffffff,puVar8,ar7);
      (*(code *)PTR_Vec3_length_8c05168c)((int)ar4 + DAT_8c051650,uVar5,puVar8,ar7);
      *(int **)((int)puVar10 + iVar1) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c051690,
                                  *(undefined4 *)(*(int *)((int)puVar10 + iVar1) + 0x28));
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar10 + iVar1) + 0x28);
        dVar16 = (double)CONCAT44(PTR_FUN_8c051694,DAT_8c051690);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar16 * dVar16,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar10 + iVar1) + 0x28) = fVar12;
      }
      else {
        *(ulonglong *)(*(int *)((int)puVar10 + iVar1) + 0x28) = in_xd0;
      }
      (*(code *)PTR_FUN_8c051694)(ar4,*(undefined4 *)(ar6 + 4),puVar8,ar7);
      uVar5 = (*(code *)PTR_FUN_8c051698)(ar4,0,puVar8,ar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x3c) = uVar5;
      if (*(int *)((int)puVar10 + iVar1 + 0x3c) == 0) {
        (**(code **)(*ar4 + 0x2c))(ar4,*ar4,puVar8,ar7);
        *(undefined4 *)((int)puVar10 + iVar1 + -4) = *(undefined4 *)(DAT_8c05169c + (int)ar4);
        (*(code *)PTR_FUN_8c0516a4)
                  (ar4,(*(int *)((int)puVar10 + iVar1 + -4) * 2 +
                       *(int *)((int)puVar10 + iVar1 + -4)) * 8 + DAT_8c0516a0,puVar8,ar7);
        ar4[0x1a] = 0;
        (*(code *)PTR_Vec3_assign_8c051668)(ar4 + 5,(int)ar4 + DAT_8c051650,puVar8,ar7);
        (*(code *)PTR_FUN_8c051694)(ar4,*(undefined4 *)(ar6 + 4),puVar8,ar7);
      }
    }
    else if (iVar2 == 3) {
      puVar6 = PTR_FUN_8c051840;
      (*(code *)PTR_FUN_8c051840)(ar4,PTR_FUN_8c051840,puVar8,ar7);
      fVar12 = (float)in_dr0;
      *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar10 + DAT_8c051844 + iVar1 + -0x1c);
      (*(code *)PTR_FUN_8c05184c)((int)ar4 + DAT_8c051848,puVar6,puVar8,ar7);
      (*(code *)PTR_Vec3_assign_8c051854)
                ((undefined1 *)((int)puVar10 + DAT_8c051850 + iVar1 + -0x1c),
                 (undefined1 *)((int)puVar10 + DAT_8c051844 + iVar1 + -0x1c),puVar8,ar7);
      (*(code *)PTR_Vec3_dtor_8c051858)
                ((undefined1 *)((int)puVar10 + DAT_8c051844 + iVar1 + -0x1c),0xffffffff,puVar8,ar7);
      *(int **)((int)puVar10 + iVar1 + -8) = ar4;
      if (in_FPSCR_SZ == '\0') {
        fVar12 = *(float *)(*(int *)((int)puVar10 + iVar1 + -8) + 0x2c);
      }
      else {
        in_xd0 = *(ulonglong *)(*(int *)((int)puVar10 + iVar1 + -8) + 0x2c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = fVar12 + 1.0;
      }
      else {
        fVar12 = SUB84((double)CONCAT44(0x3f800000,fVar12) + (double)CONCAT44(0x3f800000,fVar12),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar10 + iVar1 + -0xc) = fVar12;
      }
      else {
        *(ulonglong *)((int)puVar10 + iVar1 + -0xc) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(*(int *)((int)puVar10 + iVar1 + -8) + 0x2c) =
             *(undefined4 *)((int)puVar10 + iVar1 + -0xc);
        dVar16 = (double)CONCAT44(DAT_8c05185c,*(undefined4 *)((int)puVar10 + iVar1 + -0xc));
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar10 + iVar1 + -8) + 0x2c) =
             *(undefined8 *)((int)puVar10 + iVar1 + -0xc);
        in_xd0 = *(ulonglong *)((int)puVar10 + iVar1 + -0xc);
        dVar16 = (double)CONCAT44(DAT_8c051860,DAT_8c05185c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar16 / dVar16,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar10 + DAT_8c051860 + iVar1 + -0x1c) = fVar12;
      }
      else {
        *(ulonglong *)((int)puVar10 + DAT_8c051860 + iVar1 + -0x1c) = in_xd0;
      }
      *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
           (undefined1 *)((int)puVar10 + DAT_8c051864 + iVar1 + -0x1c);
      (*(code *)PTR_Vec3_scale_8c051870)
                ((undefined1 *)((int)puVar10 + DAT_8c05186c + iVar1 + -0x20),
                 (undefined1 *)((int)puVar10 + DAT_8c051868 + iVar1 + -0x20),puVar8,ar7);
      (*(code *)PTR_FUN_8c051874)
                ((int)ar4 + DAT_8c051848,(undefined1 *)((int)puVar10 + DAT_8c051864 + iVar1 + -0x1c)
                 ,puVar8,ar7);
      (*(code *)PTR_Vec3_dtor_8c051858)
                ((undefined1 *)((int)puVar10 + DAT_8c051864 + iVar1 + -0x1c),0xffffffff,puVar8,ar7);
      (*(code *)PTR_Vec3_length_8c051878)
                ((int)ar4 + DAT_8c051848,(int)ar4 + DAT_8c051848,puVar8,ar7);
      ar7 = (ulonglong *)(ar4 + 10);
      uVar15 = (ulonglong)(uint)fVar12;
      if (in_FPSCR_SZ == '\0') {
        *(int *)ar7 = 0;
      }
      else {
        *ar7 = uVar15;
      }
      *(undefined4 *)((int)puVar10 + iVar1 + -0x10) = *(undefined4 *)(DAT_8c05187c + (int)ar4);
      iVar7 = DAT_8c05187c;
      (*(code *)PTR_FUN_8c051884)
                (ar4,(*(int *)((int)puVar10 + iVar1 + -0x10) * 2 +
                     *(int *)((int)puVar10 + iVar1 + -0x10)) * 8 + DAT_8c051880,DAT_8c05187c,ar7);
      iVar2 = DAT_8c051888;
      uVar5 = (*(code *)PTR_get_field_1c_026dd8_8c05188c)
                        ((int)ar4 + DAT_8c051888,DAT_8c051888,iVar7,ar7);
      *(undefined4 *)((int)puVar10 + iVar1 + 0x38) = uVar5;
      if (*(int *)((int)puVar10 + iVar1 + 0x38) == 99) {
        uVar5 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c051894)
                          ((int)ar4 + DAT_8c051888,iVar2,iVar7,ar7);
        uVar11 = (uint)uVar15;
        *(undefined4 *)((int)puVar10 + iVar1 + 0x34) = uVar5;
        if (*(int *)((int)puVar10 + iVar1 + 0x34) == 1) {
          ar4[0x1a] = 0;
          *(undefined4 *)((int)puVar10 + iVar1 + -0x14) = *(undefined4 *)(DAT_8c05187c + (int)ar4);
          (*(code *)PTR_FUN_8c051884)
                    (ar4,(*(int *)((int)puVar10 + iVar1 + -0x14) * 2 +
                         *(int *)((int)puVar10 + iVar1 + -0x14)) * 8 + DAT_8c051880,iVar7,ar7);
          (*(code *)PTR_Vec3_assign_8c051854)(ar4 + 5,(int)ar4 + DAT_8c051848,iVar7,ar7);
          ar7 = (ulonglong *)0x0;
          uVar5 = 0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05189c)
                    ((int)ar4 + DAT_8c051888,0x1a,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0518a0)
                    ((int)ar4 + DAT_8c051888,DAT_8c051888,uVar5,ar7);
          *(undefined4 *)(DAT_8c0518a4 + (int)ar4) = 2;
          *(undefined4 *)(DAT_8c0518a8 + (int)ar4) = 2;
          if (in_FPSCR_SZ == '\0') {
            ar4[0xb] = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0xb) = (ulonglong)uVar11;
          }
        }
      }
      else {
        *(undefined4 *)(DAT_8c051a00 + (int)ar4) = 0x12;
        iVar7 = (int)ar4 + DAT_8c051a04._4_4_;
        iVar2 = DAT_8c051a04._4_4_;
        (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c051a0c)(iVar7,iVar7,DAT_8c051a04._4_4_,ar7);
        (*(code *)PTR_CAnimBody_GetCurFrame_8c051a10)((int)ar4 + DAT_8c051a04._4_4_,iVar7,iVar2,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + iVar1 + 0x30) = (int)(uVar15 >> 0x20);
          uVar15 = (ulonglong)*(uint *)((int)puVar10 + iVar1 + 0x30);
        }
        else {
          *(ulonglong *)((int)puVar10 + iVar1 + 0x30) = uVar15;
        }
        fVar12 = (float)uVar15;
        if (in_FPSCR_PR != '\0' || fVar12 <= 0.0) {
          ar4[0x1a] = 0;
          *(undefined4 *)((int)puVar10 + iVar1 + -0x18) = *(undefined4 *)(DAT_8c051a14 + (int)ar4);
          (*(code *)PTR_FUN_8c051a1c)
                    (ar4,(*(int *)((int)puVar10 + iVar1 + -0x18) * 2 +
                         *(int *)((int)puVar10 + iVar1 + -0x18)) * 8 + DAT_8c051a18,iVar2,ar7);
          (*(code *)PTR_Vec3_set_xyz_8c051a28)
                    ((undefined1 *)((int)puVar10 + DAT_8c051a20._4_4_ + iVar1 + -0x1c),
                     (undefined1 *)((int)puVar10 + DAT_8c051a20._4_4_ + iVar1 + -0x1c),iVar2,ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c051a2c + iVar1 + -0x1c);
          puVar8 = PTR_FUN_8c051a38;
          (*(code *)PTR_FUN_8c051a38)
                    ((int)ar4 + DAT_8c051a34,
                     (undefined1 *)((int)puVar10 + DAT_8c051a30 + iVar1 + -0x20),iVar2,
                     PTR_FUN_8c051a38);
          uVar5 = (*(code *)PTR_Vec3_assign_8c051a3c)
                            ((int)ar4 + DAT_8c051a34,
                             (undefined1 *)((int)puVar10 + DAT_8c051a2c + iVar1 + -0x1c),
                             (undefined1 *)((int)puVar10 + DAT_8c051a2c + iVar1 + -0x1c),puVar8);
          *(undefined4 *)((int)puVar10 + iVar1 + 0x2c) = uVar5;
          uVar5 = *(undefined4 *)((int)puVar10 + iVar1 + 0x2c);
          piVar9 = ar4 + 5;
          (*(code *)PTR_Vec3_assign_8c051a3c)(piVar9,uVar5,piVar9,uVar5);
          (*(code *)PTR_Vec3_dtor_8c051a40)
                    ((undefined1 *)((int)puVar10 + DAT_8c051a2c + iVar1 + -0x1c),0xffffffff,piVar9,
                     uVar5);
          (*(code *)PTR_object_dtor_delete_8c051a44)
                    ((undefined1 *)((int)puVar10 + DAT_8c051a20._4_4_ + iVar1 + -0x1c),0xffffffff,
                     (undefined1 *)((int)puVar10 + DAT_8c051a20._4_4_ + iVar1 + -0x1c),0xffffffff);
          uVar5 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c051a4c)
                    ((int)ar4 + DAT_8c051a04._4_4_,0x1a,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c051a50)
                    ((int)ar4 + DAT_8c051a04._4_4_,(int)ar4 + DAT_8c051a04._4_4_,DAT_8c051a04._4_4_,
                     uVar5);
          *(undefined4 *)(DAT_8c051a54 + (int)ar4) = 2;
          *(undefined4 *)(DAT_8c051a58 + (int)ar4) = 2;
          ar7 = (ulonglong *)(ar4 + 0xb);
          if (in_FPSCR_SZ == '\0') {
            *(int *)ar7 = 0;
          }
          else {
            *ar7 = (ulonglong)(uint)fVar12;
          }
        }
      }
    }
    goto LAB_8c0519c6;
  }
  iVar2 = *(int *)((int)puVar10 + iVar1 + -0x1c);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if (*(char *)(DAT_8c051408 + (int)ar4) == '\x01') {
        ar7 = (ulonglong *)0x5;
        puVar8 = (undefined *)0x1;
        puVar3 = ar5;
        (**(code **)(DAT_8c051414 + **(int **)(DAT_8c05140c._4_4_ + (int)ar4)))
                  (*(int **)(DAT_8c05140c._4_4_ + (int)ar4),ar5,1,5);
      }
      uVar11 = (uint)in_dr0;
      (*(code *)PTR_vec3_clear_8c05141c)((int)ar4 + DAT_8c051418,puVar3,puVar8,ar7);
      (*(code *)PTR_vec3_clear_8c05141c)((int)ar4 + DAT_8c051420,puVar3,puVar8,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c051424) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c051424) = (ulonglong)uVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),DAT_8c05142c);
      }
      else {
        dVar16 = *(double *)((int)ar5 + 4);
        in_xd0 = CONCAT44(DAT_8c051430,DAT_8c05142c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar16 - dVar16,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c051430,fVar12);
      }
      else {
        dVar16 = (double)CONCAT44(uRam8c051434,DAT_8c051430);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar16 - dVar16,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + DAT_8c051428) = fVar12;
      }
      else {
        *(ulonglong *)((int)ar4 + DAT_8c051428) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xb) = (ulonglong)(uint)fVar12;
      }
      ar7 = (ulonglong *)0x3;
      ar4[0x1a] = 3;
      if (in_FPSCR_SZ == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xb) = (ulonglong)(uint)fVar12;
      }
      goto LAB_8c0519c6;
    }
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c050de4)
                  ((int)ar4 + DAT_8c050de0,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c050de4,puVar8,ar7);
        fVar12 = (float)in_dr0;
        puVar6 = PTR_get_field_1c_026dd8_8c050de8;
        uVar5 = (*(code *)PTR_get_field_1c_026dd8_8c050de8)
                          ((int)ar4 + DAT_8c050de0,PTR_get_field_1c_026dd8_8c050de8,puVar8,ar7);
        *(undefined4 *)((int)puVar10 + iVar1 + 0x4c) = uVar5;
        fVar17 = (float)((ulonglong)in_dr4 >> 0x20);
        if (*(int *)((int)puVar10 + iVar1 + 0x4c) == 99) {
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(DAT_8c050dec,fVar12);
          }
          else {
            dVar16 = (double)CONCAT44(_DAT_8c050df0,DAT_8c050dec);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44(fVar17 - (float)((ulonglong)dVar16 >> 0x20),SUB84(in_dr4,0));
          }
          else {
            dVar16 = in_dr4 - dVar16;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + _DAT_8c050df0 + iVar1 + -0x1c) =
                 (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            *(double *)((int)puVar10 + _DAT_8c050df0 + iVar1 + -0x1c) = dVar16;
          }
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c050f28)
                    ((int)ar4 + DAT_8c050f24,puVar6,puVar8,ar7);
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x1c),
                                      in_fr3);
            dVar14 = (double)CONCAT44(DAT_8c050f18,*(undefined4 *)((int)ar5 + 4));
          }
          else {
            dVar16 = *(double *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x1c);
            dVar14 = (double)CONCAT44(DAT_8c050f1c,DAT_8c050f18);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar12,SUB84(dVar16,0));
          }
          else {
            fVar12 = SUB84(dVar14 - dVar14,0);
            dVar16 = dVar16 - (dVar14 - dVar14);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x1c),
                                      fVar12);
          }
          else {
            dVar14 = *(double *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                      (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 / dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(DAT_8c050f2c,SUB84(dVar14,0));
          }
          else {
            dVar14 = (double)CONCAT44(DAT_8c050f30,DAT_8c050f2c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) -
                                      (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 - dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x1c) = (int)((ulonglong)dVar16 >> 0x20)
            ;
            dVar14 = (double)(ulonglong)*(uint *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x1c);
          }
          else {
            *(double *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x1c) = dVar16;
          }
          fVar12 = SUB84(dVar14,0);
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44(1.0 - fVar12,fVar12);
          }
          else {
            dVar16 = (double)CONCAT44(0x3f800000,fVar12) - (double)CONCAT44(0x3f800000,fVar12);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + DAT_8c050f30 + iVar1 + -0x1c) = (int)((ulonglong)dVar16 >> 0x20)
            ;
          }
          else {
            *(double *)((int)puVar10 + DAT_8c050f30 + iVar1 + -0x1c) = dVar16;
          }
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c050f34 + iVar1 + -0x1c);
          (*(code *)PTR_Vec3_scale_8c050f38)
                    (ar4 + 0x15,(undefined1 *)((int)puVar10 + DAT_8c050f14 + iVar1 + -0x20),puVar8,
                     ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c050f3c + iVar1 + -0x1c);
          (*(code *)PTR_FUN_8c050f40)((int)ar4 + DAT_8c050f30,DAT_8c050f30,puVar8,ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c050f44 + iVar1 + -0x1c);
          (*(code *)PTR_Vec3_scale_8c050f38)
                    ((undefined1 *)((int)puVar10 + DAT_8c050f4c + iVar1 + -0x20),
                     (undefined1 *)((int)puVar10 + DAT_8c050f48 + iVar1 + -0x20),puVar8,ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c050f50 + iVar1 + -0x1c);
          (*(code *)PTR_Vec3_add_8c050f5c)
                    ((undefined1 *)((int)puVar10 + DAT_8c050f58 + iVar1 + -0x20),
                     (undefined1 *)((int)puVar10 + DAT_8c050f54 + iVar1 + -0x20),puVar8,ar7);
          (*(code *)PTR_Vec3_assign_8c050f60)
                    ((int)ar4 + DAT_8c050f30,
                     (undefined1 *)((int)puVar10 + DAT_8c050f50 + iVar1 + -0x1c),puVar8,ar7);
          (*(code *)PTR_Vec3_dtor_8c050f64)
                    ((undefined1 *)((int)puVar10 + DAT_8c050f50 + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_dtor_8c050f64)
                    ((undefined1 *)((int)puVar10 + DAT_8c050f44 + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_dtor_8c050f64)
                    ((undefined1 *)((int)puVar10 + DAT_8c050f3c + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_dtor_8c050f64)
                    ((undefined1 *)((int)puVar10 + DAT_8c050f34 + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_length_8c050f68)
                    ((int)ar4 + DAT_8c050f30,PTR_Vec3_length_8c050f68,puVar8,ar7);
        }
        else if (*(int *)((int)puVar10 + iVar1 + 0x4c) == 0x49) {
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44((undefined4)DAT_8c05109c,fVar12);
          }
          else {
            dVar16 = (double)CONCAT44(DAT_8c05109c._4_4_,(undefined4)DAT_8c05109c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44(fVar17 - (float)((ulonglong)dVar16 >> 0x20),SUB84(in_dr4,0));
          }
          else {
            dVar16 = in_dr4 - dVar16;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c) =
                 (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            *(double *)((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c) = dVar16;
          }
          uVar4 = 0x49;
          uVar5 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c0510a8)
                            ((int)ar4 + DAT_8c0510a4,0x49,puVar8,ar7);
          *(undefined4 *)((int)puVar10 + iVar1 + 0x48) = uVar5;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0510b0)
                    ((int)ar4 + DAT_8c0510a4,uVar4,puVar8,ar7);
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)
                                       ((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c),in_fr3);
            dVar14 = (double)CONCAT44((undefined4)DAT_8c05109c,*(undefined4 *)((int)ar5 + 4));
          }
          else {
            dVar16 = *(double *)((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c);
            dVar14 = (double)CONCAT44(DAT_8c05109c._4_4_,(undefined4)DAT_8c05109c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar12,SUB84(dVar16,0));
          }
          else {
            fVar12 = SUB84(dVar14 - dVar14,0);
            dVar16 = dVar16 - (dVar14 - dVar14);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)
                                       ((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c),fVar12);
          }
          else {
            dVar14 = *(double *)((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                      (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 / dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(DAT_8c0510b4,SUB84(dVar14,0));
          }
          else {
            dVar14 = (double)CONCAT44(DAT_8c0510b8,DAT_8c0510b4);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) -
                                      (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 - dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c) =
                 (int)((ulonglong)dVar16 >> 0x20);
            dVar14 = (double)(ulonglong)*(uint *)((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c)
            ;
          }
          else {
            *(double *)((int)puVar10 + DAT_8c05109c._4_4_ + iVar1 + -0x1c) = dVar16;
          }
          fVar12 = SUB84(dVar14,0);
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44(1.0 - fVar12,fVar12);
          }
          else {
            dVar16 = (double)CONCAT44(0x3f800000,fVar12) - (double)CONCAT44(0x3f800000,fVar12);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + iVar1 + 0x60) = (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            *(double *)((int)puVar10 + iVar1 + 0x60) = dVar16;
          }
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c0510b8 + iVar1 + -0x1c);
          (*(code *)PTR_Vec3_scale_8c0510c0)
                    (ar4 + 0x15,(undefined1 *)((int)puVar10 + DAT_8c0510bc + iVar1 + -0x20),puVar8,
                     ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c0510c4 + iVar1 + -0x1c);
          (*(code *)PTR_FUN_8c0510c8)((int)ar4 + DAT_8c0510bc,DAT_8c0510bc,puVar8,ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c0510cc + iVar1 + -0x1c);
          (*(code *)PTR_Vec3_scale_8c0510c0)
                    ((undefined1 *)((int)puVar10 + DAT_8c0510d4 + iVar1 + -0x20),
                     (undefined1 *)((int)puVar10 + DAT_8c0510d0 + iVar1 + -0x20),puVar8,ar7);
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c0510d8 + iVar1 + -0x1c);
          ar7 = (ulonglong *)PTR_Vec3_add_8c0510e4;
          (*(code *)PTR_Vec3_add_8c0510e4)
                    ((undefined1 *)((int)puVar10 + DAT_8c0510e0 + iVar1 + -0x20),
                     (undefined1 *)((int)puVar10 + DAT_8c0510dc + iVar1 + -0x20),puVar8,
                     PTR_Vec3_add_8c0510e4);
          puVar8 = (undefined *)((int)puVar10 + DAT_8c0510d8 + iVar1 + -0x1c);
          (*(code *)PTR_Vec3_assign_8c0510e8)((int)ar4 + DAT_8c0510bc,puVar8,puVar8,ar7);
          (*(code *)PTR_Vec3_dtor_8c0510ec)
                    ((undefined1 *)((int)puVar10 + DAT_8c0510d8 + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_dtor_8c0510ec)
                    ((undefined1 *)((int)puVar10 + DAT_8c0510cc + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_dtor_8c0510ec)
                    ((undefined1 *)((int)puVar10 + DAT_8c0510c4 + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          uVar5 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c0510ec)
                    ((undefined1 *)((int)puVar10 + DAT_8c0510b8 + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_length_8c0510f0)((int)ar4 + DAT_8c0510bc,uVar5,puVar8,ar7);
        }
        else {
          (*(code *)PTR_Vec3_ctor_xyz_8c0511c4)
                    ((undefined1 *)((int)puVar10 + DAT_8c0511bc._4_4_ + iVar1 + -0x1c),puVar6,puVar8
                     ,ar7);
          (*(code *)PTR_Vec3_assign_8c0511cc)
                    ((undefined1 *)((int)puVar10 + DAT_8c0511c8 + iVar1 + -0x1c),
                     (undefined1 *)((int)puVar10 + DAT_8c0511bc._4_4_ + iVar1 + -0x1c),puVar8,ar7);
          (*(code *)PTR_Vec3_dtor_8c0511d0)
                    ((undefined1 *)((int)puVar10 + DAT_8c0511bc._4_4_ + iVar1 + -0x1c),0xffffffff,
                     puVar8,ar7);
          *(int **)((int)puVar10 + iVar1 + 0x1c) = ar4;
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)(*(int *)((int)puVar10 + iVar1 + 0x1c) + 0x2c);
          }
          else {
            in_xd0 = *(ulonglong *)(*(int *)((int)puVar10 + iVar1 + 0x1c) + 0x2c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = fVar12 + 1.0;
          }
          else {
            fVar12 = SUB84((double)CONCAT44(0x3f800000,fVar12) + (double)CONCAT44(0x3f800000,fVar12)
                           ,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + iVar1 + 0x18) = fVar12;
          }
          else {
            *(ulonglong *)((int)puVar10 + iVar1 + 0x18) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(*(int *)((int)puVar10 + iVar1 + 0x1c) + 0x2c) =
                 *(undefined4 *)((int)puVar10 + iVar1 + 0x18);
            dVar16 = (double)CONCAT44(DAT_8c0511d4,*(undefined4 *)((int)puVar10 + iVar1 + 0x18));
          }
          else {
            *(undefined8 *)(*(int *)((int)puVar10 + iVar1 + 0x1c) + 0x2c) =
                 *(undefined8 *)((int)puVar10 + iVar1 + 0x18);
            in_xd0 = *(ulonglong *)((int)puVar10 + iVar1 + 0x18);
            dVar16 = (double)CONCAT44(DAT_8c0511d8,DAT_8c0511d4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
          }
          else {
            fVar12 = SUB84(dVar16 / dVar16,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + DAT_8c0511d8 + iVar1 + -0x1c) = fVar12;
          }
          else {
            *(ulonglong *)((int)puVar10 + DAT_8c0511d8 + iVar1 + -0x1c) = in_xd0;
          }
          *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
               (undefined1 *)((int)puVar10 + DAT_8c0511dc + iVar1 + -0x1c);
          (*(code *)PTR_Vec3_scale_8c0511e8)
                    ((undefined1 *)((int)puVar10 + DAT_8c0511e4 + iVar1 + -0x20),
                     (undefined1 *)((int)puVar10 + DAT_8c0511e0 + iVar1 + -0x20),puVar8,ar7);
          puVar8 = (undefined *)((int)ar4 + DAT_8c0511ec);
          (*(code *)PTR_FUN_8c0511f0)
                    (puVar8,(undefined1 *)((int)puVar10 + DAT_8c0511dc + iVar1 + -0x1c),puVar8,ar7);
          (*(code *)PTR_Vec3_dtor_8c0511d0)
                    ((undefined1 *)((int)puVar10 + DAT_8c0511dc + iVar1 + -0x1c),0xffffffff,puVar8,
                     ar7);
          (*(code *)PTR_Vec3_length_8c0511f4)((int)ar4 + DAT_8c0511ec,DAT_8c0511ec,puVar8,ar7);
        }
        (*(code *)PTR_Vec3_dtor_8c0511d0)
                  ((undefined1 *)((int)puVar10 + DAT_8c0511f8 + iVar1 + -0x1c),0xffffffff,puVar8,ar7
                  );
        uVar5 = (*(code *)PTR_Vec3_dtor_8c0511d0)
                          ((undefined1 *)((int)puVar10 + DAT_8c0511c8 + iVar1 + -0x1c),0xffffffff,
                           puVar8,ar7);
        return uVar5;
      }
      goto LAB_8c0519c6;
    }
  }
  iVar2 = (int)ar4 + DAT_8c051330;
  puVar8 = PTR_s_CAnimBody_AdvanceFrame_033ba0_8c051334;
  (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c051334)
            (iVar2,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c051334,iVar2,ar7);
  (*(code *)PTR_Vec3_length_sq_8c051338)(ar4 + 1,puVar8,iVar2,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + iVar1 + 0x44) = (int)(in_dr0 >> 0x20);
    dVar16 = (double)CONCAT44(DAT_8c05133c,*(undefined4 *)((int)puVar10 + iVar1 + 0x44));
  }
  else {
    *(ulonglong *)((int)puVar10 + iVar1 + 0x44) = in_dr0;
    in_xd0 = *(ulonglong *)((int)puVar10 + iVar1 + 0x44);
    dVar16 = (double)CONCAT44(DAT_8c051340,DAT_8c05133c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar12 = SUB84(dVar16 * dVar16,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[10] = (int)fVar12;
  }
  else {
    *(ulonglong *)(ar4 + 10) = in_xd0;
  }
  *(undefined1 **)((int)puVar10 + iVar1 + -0x20) =
       (undefined1 *)((int)puVar10 + DAT_8c051340 + iVar1 + -0x1c);
  (*(code *)PTR_Vec3_normalize_8c051344)(ar4 + 1,puVar8,iVar2,ar7);
  (*(code *)PTR_Vec3_assign_8c051348)
            (ar4 + 5,(undefined1 *)((int)puVar10 + DAT_8c051340 + iVar1 + -0x1c),iVar2,ar7);
  (*(code *)PTR_Vec3_dtor_8c05134c)
            ((undefined1 *)((int)puVar10 + DAT_8c051340 + iVar1 + -0x1c),0xffffffff,iVar2,ar7);
  *(undefined4 *)((int)puVar10 + iVar1 + 0x14) = *(undefined4 *)(DAT_8c051340 + (int)ar4);
  (*(code *)PTR_FUN_8c051354)
            (ar4,(*(int *)((int)puVar10 + iVar1 + 0x14) * 2 + *(int *)((int)puVar10 + iVar1 + 0x14))
                 * 8 + DAT_8c051350,iVar2,ar7);
  *(undefined **)((int)puVar10 + iVar1 + -0x20) = PTR_DAT_8c051358;
  *(undefined1 **)((int)puVar10 + iVar1 + -0x24) =
       (undefined1 *)((int)puVar10 + DAT_8c05135c + iVar1 + -0x20);
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(DAT_8c051360,fVar12);
  }
  else {
    uVar13 = CONCAT44(_DAT_8c051364,DAT_8c051360);
  }
  (*(code *)PTR_FUN_8c051374)
            (ar4,ar5,*(undefined4 *)((int)puVar10 + _DAT_8c051364 + iVar1 + -0x24),piVar9);
  a5_00 = (undefined1 *)((int)puVar10 + DAT_8c051378 + iVar1 + -0x1c);
  piVar9 = ar4 + 0x15;
  (*(code *)PTR_Vec3_assign_8c051348)(piVar9,a5_00,piVar9,a5_00);
  uVar5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c05134c)
            ((undefined1 *)((int)puVar10 + DAT_8c051378 + iVar1 + -0x1c),0xffffffff,piVar9,a5_00);
  ar7 = (ulonglong *)(ar4 + 0x14);
  (*(code *)PTR_FUN_8c05137c)(ar4,uVar5,ar4 + 0x13,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + iVar1 + 0x40) = (int)((ulonglong)uVar13 >> 0x20);
    uVar15 = CONCAT44(*(int *)((int)puVar10 + iVar1 + 0x40),(int)uVar13);
    ar4[9] = *(int *)((int)puVar10 + iVar1 + 0x40);
  }
  else {
    *(undefined8 *)((int)puVar10 + iVar1 + 0x40) = uVar13;
    uVar15 = *(ulonglong *)((int)puVar10 + iVar1 + 0x40);
    *(ulonglong *)(ar4 + 9) = uVar15;
  }
  ar4[0x11] = 1;
  if (in_FPSCR_SZ == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xb) = uVar15 & 0xffffffff;
  }
  ar4[0x10] = 5;
  *(undefined4 *)(DAT_8c051380 + (int)ar4) = 0;
  ar4[0x1a] = 2;
LAB_8c0519c6:
  uVar5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c051a40)
            ((undefined1 *)((int)puVar10 + DAT_8c051a5c + iVar1 + -0x1c),0xffffffff,0xffffffff,ar7);
  uVar5 = (*(code *)PTR_Vec3_dtor_8c051a40)
                    ((undefined1 *)((int)puVar10 + DAT_8c051a60 + iVar1 + -0x1c),0xffffffff,uVar5,
                     ar7);
  return uVar5;
}



/* FUN_8c051a68 @ 8c051a68 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c051b6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c051a68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_70;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ar6;
    (*(code *)PTR_Vec3_sub_8c051bec)(ar5,ar6,ar6,ar7);
    (*(code *)PTR_Vec3_normalize_8c051bf0)(auStack_3c,ar6,uVar1,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c051bf4)(auStack_1c,auStack_4c,uVar1,ar7);
    (*(code *)PTR_Vec3_dtor_8c051bf8)(auStack_4c,0xffffffff,uVar1,ar7);
    uVar5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c051bf8)(auStack_3c,0xffffffff,uVar1,ar7);
    (*(code *)PTR_Vec3_ctor_zero_8c051bfc)(auStack_2c,uVar5,uVar1,ar7);
    iVar2 = *(int *)(ar4 + 0x40);
    if ((iVar2 == 1) || (iVar2 == 3)) {
      pdVar3 = (double *)(ar4 + 0x2c);
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      dVar7 = in_xd0;
      if (in_FPSCR_SZ == '\0') {
        uStack_70 = (double)CONCAT44(uStack_70._4_4_,fVar6);
        dVar7 = uStack_70;
      }
      uStack_70 = dVar7;
      (*(code *)PTR_Vec3_scale_8c051c00)(auStack_1c,&uStack_70,uVar1,ar7);
      (*(code *)PTR_FUN_8c051c04)(ar4 + 0x14,auStack_5c,uVar1,ar7);
      uVar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c051bf8)(auStack_5c,0xffffffff,uVar1,ar7);
      (*(code *)PTR_Vec3_normalize_8c051bf0)(ar4 + 0x14,uVar5,uVar1,ar7);
      (*(code *)PTR_Vec3_assign_8c051c08)(ar4 + 0x14,(int)&uStack_70 + 4,uVar1,ar7);
      (*(code *)PTR_Vec3_dtor_8c051bf8)((int)&uStack_70 + 4,0xffffffff,uVar1,ar7);
      pdVar3 = (double *)(ar4 + 0x2c);
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (SUB84(dVar7,0) != (float)((ulonglong)dVar7 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
        }
        if (in_FPSCR_PR == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(ar4 + 0x2c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          puVar4 = (undefined8 *)(ar4 + 0x30);
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + 0x2c) = fVar6;
            puVar4 = (undefined8 *)(ar4 + 0x2c);
          }
          else {
            *(double *)(ar4 + 0x2c) = in_xd0;
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)*puVar4 >> 0x20) < (float)*puVar4) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x30);
            }
            else {
              *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)(ar4 + 0x30);
            }
          }
        }
      }
    }
    else if (iVar2 == 4) {
      (*(code *)PTR_FUN_8c051c10)(ar4,uVar5,uVar1,ar7);
    }
    (*(code *)PTR_Vec3_dtor_8c051bf8)(auStack_2c,0xffffffff,uVar1,ar7);
    (*(code *)PTR_Vec3_dtor_8c051bf8)(auStack_1c,0xffffffff,uVar1,ar7);
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c051c14 @ 8c051c14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c05239c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c051c14(int ar4,undefined4 ar5,undefined *ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *a6;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined1 *a5;
  undefined4 uVar6;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 uVar7;
  undefined4 unaff_r14;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  ulonglong in_dr0;
  undefined8 uVar11;
  double dVar12;
  undefined4 in_fr3;
  undefined8 in_dr14;
  double dVar13;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
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
  *(undefined4 *)((int)puVar8 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar8 + -0x14) = in_PR;
  uVar7 = 1;
  uVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c051cdc)
            ((undefined1 *)((int)puVar8 + DAT_8c051cd8 + -0x1a0),ar5,ar6,ar7);
  uVar6 = (undefined4)in_dr14;
  (*(code *)PTR_Vec3_ctor_zero_8c051cdc)
            ((undefined1 *)((int)puVar8 + DAT_8c051ce0 + -0x1a0),uVar2,a6,ar7);
  *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c051ce4 + -0x1a0);
  (*(code *)PTR_FUN_8c051ce8)(ar4 + 0x14,uVar2,a6,ar7);
  *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c051cec + -0x1a0);
  (*(code *)PTR_FUN_8c051ce8)(ar6,uVar2,a6,ar7);
  (*(code *)PTR_FUN_8c051cf0)
            ((undefined1 *)((int)puVar8 + DAT_8c051ce4 + -0x1a0),
             (undefined1 *)((int)puVar8 + DAT_8c051cec + -0x1a0),a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar8 + -0x134) = (int)(in_dr0 >> 0x20);
    dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x134),uVar6);
  }
  else {
    *(ulonglong *)((int)puVar8 + -0x134) = in_dr0;
    dVar13 = *(double *)((int)puVar8 + -0x134);
  }
  (*(code *)PTR_Vec3_dtor_8c051cf4)
            ((undefined1 *)((int)puVar8 + DAT_8c051cec + -0x1a0),0xffffffff,a6,ar7);
  puVar5 = (undefined *)0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c051cf4)
            ((undefined1 *)((int)puVar8 + DAT_8c051ce4 + -0x1a0),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c051cfc)
            ((undefined1 *)((int)puVar8 + DAT_8c051cf8 + -0x1a0),puVar5,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c051cfc)
            ((undefined1 *)((int)puVar8 + DAT_8c051d00 + -0x1a0),puVar5,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c051cdc)
            ((undefined1 *)((int)puVar8 + DAT_8c051d04 + -0x1a0),puVar5,a6,ar7);
  iVar1 = *(int *)(DAT_8c051d08 + ar4);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c051d50)(ar4 + DAT_8c051d4c,puVar5,a6,ar7)
    ;
    *(undefined4 *)((int)puVar8 + -0x138) = uVar2;
    if (*(int *)((int)puVar8 + -0x138) == 1) {
      (*(code *)PTR_FUN_8c051d58)(ar4 + DAT_8c051d54,puVar5,a6,ar7);
      *(int *)((int)puVar8 + -0x194) = ar4;
      *(int *)(DAT_8c051d5c + *(int *)((int)puVar8 + -0x194)) =
           *(int *)(DAT_8c051d5c + *(int *)((int)puVar8 + -0x194)) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c051e44 + -0x1a0);
      (*(code *)PTR_FUN_8c051e48)(ar4 + 0x14,puVar5,a6,ar7);
      (*(code *)PTR_FUN_8c051e4c)((undefined1 *)((int)puVar8 + DAT_8c051e44 + -0x1a0),ar6,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0x13c) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)((int)puVar8 + -0x13c) = in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar2 = *(undefined4 *)((int)puVar8 + -0x13c);
        uVar11 = CONCAT44(uVar2,(int)in_dr0);
        *(undefined4 *)(ar4 + DAT_8c051e50) = uVar2;
      }
      else {
        uVar11 = *(undefined8 *)((int)puVar8 + -0x13c);
        *(undefined8 *)(ar4 + DAT_8c051e50) = uVar11;
      }
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c051e54)
                ((undefined1 *)((int)puVar8 + DAT_8c051e44 + -0x1a0),0xffffffff,a6,ar7);
      (*(code *)PTR_FUN_8c051e58)(ar6,uVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0x140) = (int)((ulonglong)uVar11 >> 0x20);
      }
      else {
        *(undefined8 *)((int)puVar8 + -0x140) = uVar11;
      }
      iVar1 = ar4 + 0x14;
      (*(code *)PTR_FUN_8c051e58)(iVar1,uVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0x144) = (int)((ulonglong)uVar11 >> 0x20);
        uVar11 = CONCAT44(*(undefined4 *)((int)puVar8 + -0x144),(int)uVar11);
      }
      else {
        *(undefined8 *)((int)puVar8 + -0x144) = uVar11;
        uVar11 = *(undefined8 *)((int)puVar8 + -0x144);
      }
      (*(code *)PTR_FUN_8c051e5c)(iVar1,PTR_FUN_8c051e5c,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0x148) = (int)((ulonglong)uVar11 >> 0x20);
      }
      else {
        *(undefined8 *)((int)puVar8 + -0x148) = uVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c051e60) = *(undefined4 *)((int)puVar8 + -0x148);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c051e60) = *(undefined8 *)((int)puVar8 + -0x148);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(DAT_8c051e64,*(undefined4 *)(ar4 + DAT_8c051e50));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c051e50);
        uVar11 = CONCAT44(DAT_8c051e68,DAT_8c051e64);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20)) {
        uVar7 = 0;
        *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c051e68 + -0x1a0)
        ;
        (*(code *)PTR_FUN_8c051e48)
                  (ar4 + 0x14,(undefined1 *)((int)puVar8 + DAT_8c051e68 + -0x1a0),a6,ar7);
        (*(code *)PTR_FUN_8c051e4c)
                  ((undefined1 *)((int)puVar8 + DAT_8c051e68 + -0x1a0),PTR_DAT_8c051e6c,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x14c) = (int)((ulonglong)uVar11 >> 0x20);
          fVar9 = *(float *)((int)puVar8 + -0x14c);
          fVar10 = DAT_8c051e70;
        }
        else {
          *(undefined8 *)((int)puVar8 + -0x14c) = uVar11;
          fVar9 = DAT_8c051e70;
          fVar10 = _DAT_8c051e74;
        }
        *(uint *)((int)puVar8 + -0x128) = (uint)(in_FPSCR_PR == '\0' && fVar9 < fVar10);
        (*(code *)PTR_Vec3_dtor_8c051e54)
                  ((undefined1 *)((int)puVar8 + DAT_8c051e68 + -0x1a0),0xffffffff,a6,ar7);
        if (*(int *)((int)puVar8 + -0x128) == 0) {
          uVar2 = (*(code *)PTR_FUN_8c051ea4)(ar4 + 0x14,PTR_DAT_8c051ea0,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x150) = uVar2;
          *(undefined4 *)(DAT_8c051ea8 + ar4) = *(undefined4 *)((int)puVar8 + -0x150);
        }
        else {
          *(undefined4 *)((int)_DAT_8c051e74 + ar4) = 0;
        }
        *(undefined4 *)(DAT_8c051eac + ar4) = 0;
        goto LAB_8c0525f2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c051ef0,*(undefined4 *)(ar4 + DAT_8c051eec));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c051eec);
        dVar12 = (double)CONCAT44(DAT_8c051ef4,DAT_8c051ef0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c051eec) = fVar9;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c051eec) = in_xd0;
      }
      if (*(int *)(DAT_8c051ef4 + ar4) == 0) {
        ar7 = (undefined *)0x0;
        a6 = (undefined *)0xffffffff;
        puVar5 = (undefined *)0x5;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c051f00)(ar4 + DAT_8c051efc,5,0xffffffff,0);
      }
      else {
        puVar5 = ar6;
        uVar2 = (*(code *)PTR_FUN_8c051f30)(ar4 + 0x14,ar6,a6,ar7);
        *(undefined4 *)((int)puVar8 + -0x154) = uVar2;
        *(undefined4 *)(DAT_8c051f34 + ar4) = *(undefined4 *)((int)puVar8 + -0x154);
        if (*(int *)(DAT_8c051f34 + ar4) == 3) {
          ar7 = (undefined *)0x0;
          a6 = (undefined *)0xffffffff;
          uVar2 = 7;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c051fb8)
                    (ar4 + DAT_8c051fb0._4_4_,7,0xffffffff,0);
          uVar2 = (*(code *)PTR_FUN_8c051fbc)(ar4,uVar2,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x158) = uVar2;
          uVar6 = *(undefined4 *)((int)puVar8 + -0x158);
          uVar2 = (*(code *)PTR_FUN_8c051fc0)(ar4 + DAT_8c051fb0._4_4_,uVar6,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x15c) = uVar2;
          uVar2 = (*(code *)PTR_deref_u32_8c051fc4)
                            (*(undefined4 *)((int)puVar8 + -0x15c),uVar6,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x160) = uVar2;
          puVar3 = (undefined4 *)(ar4 + DAT_8c051fc8);
          puVar4 = *(undefined4 **)((int)puVar8 + -0x160);
          uVar2 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar2;
          puVar5 = (undefined *)puVar4[2];
          puVar3[2] = puVar5;
          if (*(int *)(DAT_8c051fcc + ar4) == 1) {
            *(undefined **)(DAT_8c051fc8 + ar4) = PTR_DAT_8c051fd0;
          }
          else {
            *(undefined **)(DAT_8c051ff4 + ar4) = PTR_DAT_8c051ff8;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c052004,*(undefined4 *)(ar4 + DAT_8c052000));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + DAT_8c052000);
            dVar12 = (double)CONCAT44(uRam8c052008,DAT_8c052004);
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar12 / dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c051ffc) = fVar9;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c051ffc) = in_xd0;
          }
        }
        else if (*(int *)(DAT_8c051f34 + ar4) == 4) {
          ar7 = (undefined *)0x0;
          a6 = (undefined *)0xffffffff;
          uVar2 = 8;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c052070)
                    (ar4 + DAT_8c052068._4_4_,8,0xffffffff,0);
          uVar2 = (*(code *)PTR_FUN_8c052074)(ar4,uVar2,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x164) = uVar2;
          puVar5 = *(undefined **)((int)puVar8 + -0x164);
          uVar2 = (*(code *)PTR_FUN_8c052078)(ar4 + DAT_8c052068._4_4_,puVar5,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x168) = uVar2;
          uVar2 = (*(code *)PTR_deref_u32_8c05207c)
                            (*(undefined4 *)((int)puVar8 + -0x168),puVar5,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x16c) = uVar2;
          puVar4 = (undefined4 *)(ar4 + DAT_8c052080);
          puVar3 = *(undefined4 **)((int)puVar8 + -0x16c);
          uVar2 = puVar3[1];
          *puVar4 = *puVar3;
          puVar4[1] = uVar2;
          puVar4[2] = puVar3[2];
          if (*(int *)(DAT_8c052084 + ar4) == 1) {
            *(undefined **)(DAT_8c052080 + ar4) = PTR_DAT_8c052088;
          }
          else {
            *(undefined **)(DAT_8c052204 + ar4) = PTR_DAT_8c052208;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(DAT_8c052214,*(undefined4 *)(ar4 + DAT_8c052210));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + DAT_8c052210);
            dVar12 = (double)CONCAT44(DAT_8c052218,DAT_8c052214);
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar12 / dVar12,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c05220c) = fVar9;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c05220c) = in_xd0;
          }
        }
      }
      (*(code *)PTR_vec3_clear_8c05221c)(ar4 + DAT_8c052218,puVar5,a6,ar7);
      (*(code *)PTR_vec3_clear_8c05221c)(ar4 + DAT_8c052220,puVar5,a6,ar7);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c052228)(ar4 + DAT_8c052224,puVar5,a6,ar7);
      in_dr0 = (ulonglong)(uint)fVar9;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = in_dr0;
      }
      *(undefined4 *)(DAT_8c05222c + ar4) = 3;
      *(int *)((int)puVar8 + -0x198) = ar4;
      *(int *)(DAT_8c052230 + *(int *)((int)puVar8 + -0x198)) =
           *(int *)(DAT_8c052230 + *(int *)((int)puVar8 + -0x198)) + 1;
    }
    else if (iVar1 != 2) goto LAB_8c0525f2;
    uVar2 = (undefined4)in_dr0;
    (*(code *)PTR_FUN_8c052238)(ar4,puVar5,a6,ar7);
    if (*(int *)(DAT_8c05223c + ar4) == 0) {
      *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c052240 + -0x1a0);
      (*(code *)PTR_Vec3_scale_8c052248)(ar6,PTR_DAT_8c052244,a6,ar7);
      *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c05224c + -0x1a0);
      a5 = (undefined1 *)((int)puVar8 + DAT_8c052250 + -0x1a4);
      (*(code *)PTR_Vec3_add_8c052254)(ar5,a5,a6,ar7);
      (*(code *)PTR_Vec3_set_xyz_8c052260)
                ((undefined1 *)((int)puVar8 + DAT_8c052258._4_4_ + -0x1a0),a5,a6,ar7);
      *(undefined1 **)((int)puVar8 + -0x1a4) =
           (undefined1 *)((int)puVar8 + DAT_8c052258._4_4_ + -0x1a0);
      *(undefined1 **)((int)puVar8 + -0x1a8) = (undefined1 *)((int)puVar8 + DAT_8c052264 + -0x1a4);
      ar7 = (undefined *)(ar4 + 0x14);
      a6 = (undefined *)((int)puVar8 + DAT_8c052268 + -0x1a8);
      (*(code *)PTR_FUN_8c05226c)(ar4,ar5,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c052274)
                (ar4 + 0x14,(undefined1 *)((int)puVar8 + DAT_8c052270 + -0x1a0),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c052278)
                ((undefined1 *)((int)puVar8 + DAT_8c052270 + -0x1a0),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c05227c)
                ((undefined1 *)((int)puVar8 + DAT_8c052258._4_4_ + -0x1a0),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c052278)
                ((undefined1 *)((int)puVar8 + DAT_8c05224c + -0x1a0),0xffffffff,a6,ar7);
      puVar5 = (undefined *)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c052278)
                ((undefined1 *)((int)puVar8 + DAT_8c052240 + -0x1a0),0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44((undefined4)DAT_8c052258,uVar2);
      }
      else {
        dVar12 = (double)CONCAT44(DAT_8c052258._4_4_,(undefined4)DAT_8c052258);
      }
      if (in_FPSCR_PR == '\0') {
        bVar14 = (float)((ulonglong)dVar12 >> 0x20) < (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        bVar14 = dVar12 < dVar13;
      }
      if (!bVar14) {
        *(undefined4 *)(DAT_8c052230 + ar4) = 0;
        uVar7 = 0;
        *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c052280 + -0x1a0)
        ;
        (*(code *)PTR_FUN_8c052284)(ar4 + 0x14,puVar5,a6,ar7);
        (*(code *)PTR_FUN_8c05228c)
                  ((undefined1 *)((int)puVar8 + DAT_8c052280 + -0x1a0),PTR_DAT_8c052288,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x170) = (int)((ulonglong)dVar12 >> 0x20);
          fVar9 = *(float *)((int)puVar8 + -0x170);
          fVar10 = DAT_8c052290;
        }
        else {
          *(double *)((int)puVar8 + -0x170) = dVar12;
          fVar9 = DAT_8c052290;
          fVar10 = _DAT_8c052294;
        }
        *(uint *)((int)puVar8 + -300) = (uint)(in_FPSCR_PR == '\0' && fVar9 < fVar10);
        puVar5 = (undefined *)0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c052278)
                  ((undefined1 *)((int)puVar8 + DAT_8c052280 + -0x1a0),0xffffffff,a6,ar7);
        if (*(int *)((int)puVar8 + -300) == 0) {
          puVar5 = PTR_DAT_8c0522c0;
          uVar2 = (*(code *)PTR_FUN_8c0522c4)(ar4 + 0x14,PTR_DAT_8c0522c0,a6,ar7);
          *(undefined4 *)((int)puVar8 + -0x174) = uVar2;
          *(undefined4 *)(DAT_8c0522c8 + ar4) = *(undefined4 *)((int)puVar8 + -0x174);
        }
        else {
          *(undefined4 *)((int)_DAT_8c052294 + ar4) = 0;
        }
      }
      (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0522d4)(ar4 + DAT_8c0522d0,puVar5,a6,ar7);
    }
    else {
      *(int *)((int)puVar8 + -0x19c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c052520,
                                  *(undefined4 *)(*(int *)((int)puVar8 + -0x19c) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0x19c) + 0x28);
        dVar12 = (double)CONCAT44(_DAT_8c052524,DAT_8c052520);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar8 + -0x19c) + 0x28) = fVar9;
        fVar9 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar8 + -0x19c) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar12 = (double)CONCAT44(0x3f800000,fVar9);
      if (in_FPSCR_PR == '\0' && 1.0 < fVar9) {
        *(int *)((int)puVar8 + -0x1a0) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(_DAT_8c052524,
                                    *(undefined4 *)(*(int *)((int)puVar8 + -0x1a0) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0x1a0) + 0x28);
          dVar12 = (double)CONCAT44(DAT_8c052528,_DAT_8c052524);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar12 >> 0x20);
          dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0) - fVar9);
        }
        else {
          dVar12 = dVar12 - dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)puVar8 + -0x1a0) + 0x28) = SUB84(dVar12,0);
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar8 + -0x1a0) + 0x28) = in_xd0;
        }
      }
      (*(code *)PTR_CAnimBody_GetCurFrame_8c05252c)(ar4 + DAT_8c052528,puVar5,a6,ar7);
      uVar2 = (undefined4)((ulonglong)dVar13 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0x178) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)((int)puVar8 + -0x178) = dVar12;
      }
      *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c052530 + -0x1a0);
      (*(code *)PTR_FUN_8c052538)
                (ar4 + DAT_8c052528,*(undefined4 *)(*(int *)(DAT_8c052534 + ar4) + 4),a6,ar7);
      (*(code *)PTR_vec3_copy_8c023d8c_8c052540)
                ((undefined1 *)((int)puVar8 + DAT_8c05253c + -0x1a0),
                 (undefined1 *)((int)puVar8 + DAT_8c052530 + -0x1a0),a6,ar7);
      uVar6 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c052544)
                ((undefined1 *)((int)puVar8 + DAT_8c052530 + -0x1a0),0xffffffff,a6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c05252c)(ar4 + DAT_8c052528,uVar6,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + -0x17c) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)((int)puVar8 + -0x17c) = dVar12;
      }
      uVar6 = (*(code *)PTR_get_field_1c_026dd8_8c052548)(ar4 + DAT_8c052528,uVar6,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0x180) = uVar6;
      uVar6 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c05254c)
                        (ar4 + DAT_8c052528,*(undefined4 *)((int)puVar8 + -0x180),a6,ar7);
      *(undefined4 *)((int)puVar8 + -0x184) = uVar6;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x17c),in_fr3);
      }
      else {
        dVar13 = *(double *)((int)puVar8 + -0x17c);
      }
      fVar9 = (float)*(int *)((int)puVar8 + -0x184);
      dVar12 = (double)(ulonglong)(uint)fVar9;
      if (in_FPSCR_PR == '\0' && fVar9 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c052550,fVar9);
        }
        else {
          dVar12 = (double)CONCAT44(DAT_8c052554,DAT_8c052550);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar12 >> 0x20);
          dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0) + fVar9);
        }
        else {
          dVar12 = dVar12 + dVar12;
        }
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar12,0),
                                  SUB84(dVar13,0));
      }
      else {
        dVar13 = dVar13 / dVar12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44(uVar2,1.0 - (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        dVar13 = (double)CONCAT44(uVar2,0x3f800000) - dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c052554,SUB84(dVar12,0));
      }
      else {
        dVar12 = (double)CONCAT44(DAT_8c052558,DAT_8c052554);
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                  SUB84(dVar13,0) * (float)((ulonglong)dVar12 >> 0x20));
      }
      else {
        dVar13 = dVar13 * dVar12;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)(ulonglong)*(uint *)((int)puVar8 + DAT_8c05253c + -0x1a0);
      }
      else {
        in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c05253c + -0x1a0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c052558),SUB84(dVar12,0));
      }
      else {
        dVar12 = *(double *)(ar4 + DAT_8c052558);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c05255c),fVar9);
      }
      else {
        dVar12 = *(double *)(ar4 + DAT_8c05255c);
      }
      fVar9 = SUB84(dVar13,0);
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20) * fVar9;
      }
      else {
        fVar10 = SUB84(dVar12 * dVar12 * dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar8 + DAT_8c052560 + -0x1a0) = fVar10;
        fVar10 = *(float *)((int)puVar8 + DAT_8c052564 + -0x1a0);
      }
      else {
        *(undefined8 *)((int)puVar8 + DAT_8c052560 + -0x1a0) = in_xd0;
        in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c052564 + -0x1a0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c052568),fVar10);
      }
      else {
        dVar12 = *(double *)(ar4 + DAT_8c052568);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c05255c),fVar10);
      }
      else {
        dVar12 = *(double *)(ar4 + DAT_8c05255c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20) * fVar9;
      }
      else {
        fVar10 = SUB84(dVar12 * dVar12 * dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar8 + DAT_8c05256c + -0x1a0) = fVar10;
        fVar10 = *(float *)((int)puVar8 + DAT_8c052570 + -0x1a0);
      }
      else {
        *(undefined8 *)((int)puVar8 + DAT_8c05256c + -0x1a0) = in_xd0;
        in_xd0 = *(undefined8 *)((int)puVar8 + DAT_8c052570 + -0x1a0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c052574),fVar10);
      }
      else {
        dVar12 = *(double *)(ar4 + DAT_8c052574);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c05255c),fVar10);
      }
      else {
        dVar12 = *(double *)(ar4 + DAT_8c05255c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = (float)((ulonglong)dVar12 >> 0x20);
        dVar13 = (double)CONCAT44(fVar10,SUB84(dVar12,0) * fVar10 * fVar9);
      }
      else {
        dVar13 = dVar12 * dVar12 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar8 + DAT_8c052578 + -0x1a0) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)((int)puVar8 + DAT_8c052578 + -0x1a0) = in_xd0;
      }
      (*(code *)PTR_vec3_copy_8c023d8c_8c052540)
                (ar4 + DAT_8c052558,(undefined1 *)((int)puVar8 + DAT_8c05253c + -0x1a0),a6,ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c052580)
                ((undefined1 *)((int)puVar8 + DAT_8c05257c + -0x1a0),
                 (undefined1 *)((int)puVar8 + DAT_8c052560 + -0x1a0),a6,ar7);
      *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c052584 + -0x1a0);
      (*(code *)PTR_FUN_8c05258c)
                (ar4 + 0x14,(undefined1 *)((int)puVar8 + DAT_8c052588 + -0x1a4),a6,ar7);
      (*(code *)PTR_Vec3_assign_8c052590)
                (ar4 + 0x14,(undefined1 *)((int)puVar8 + DAT_8c052584 + -0x1a0),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c052594)
                ((undefined1 *)((int)puVar8 + DAT_8c052584 + -0x1a0),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c052544)
                ((undefined1 *)((int)puVar8 + DAT_8c05257c + -0x1a0),0xffffffff,a6,ar7);
      puVar5 = PTR_Vec3_length_8c052598;
      (*(code *)PTR_Vec3_length_8c052598)(ar4 + 0x14,PTR_Vec3_length_8c052598,a6,ar7);
      uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05259c)
                        (ar4 + DAT_8c052528,puVar5,a6,ar7);
      *(undefined4 *)((int)puVar8 + -0x188) = uVar2;
      if (*(int *)((int)puVar8 + -0x188) == 1) {
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar2 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0525a4)(ar4 + DAT_8c052528,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0525a8)(ar4 + DAT_8c052528,uVar2,uVar6,uVar7);
        *(undefined4 *)(DAT_8c0525ac + ar4) = 0;
        uVar7 = 0;
        *(undefined1 **)((int)puVar8 + -0x1a4) = (undefined1 *)((int)puVar8 + DAT_8c0525b0 + -0x1a0)
        ;
        ar7 = PTR_FUN_8c0525b4;
        (*(code *)PTR_FUN_8c0525b4)(ar4 + 0x14,uVar2,uVar6,PTR_FUN_8c0525b4);
        a6 = PTR_DAT_8c0525b8;
        (*(code *)PTR_FUN_8c0525bc)
                  ((undefined1 *)((int)puVar8 + DAT_8c0525b0 + -0x1a0),PTR_DAT_8c0525b8,
                   PTR_DAT_8c0525b8,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x18c) = (int)((ulonglong)dVar13 >> 0x20);
          fVar9 = *(float *)((int)puVar8 + -0x18c);
          fVar10 = DAT_8c0525c0;
        }
        else {
          *(double *)((int)puVar8 + -0x18c) = dVar13;
          fVar9 = DAT_8c0525c0;
          fVar10 = _DAT_8c0525c4;
        }
        *(uint *)((int)puVar8 + -0x130) = (uint)(in_FPSCR_PR == '\0' && fVar9 < fVar10);
        (*(code *)PTR_Vec3_dtor_8c052594)
                  ((undefined1 *)((int)puVar8 + DAT_8c0525b0 + -0x1a0),0xffffffff,a6,ar7);
        if (*(int *)((int)puVar8 + -0x130) == 0) {
          ar7 = PTR_FUN_8c052670;
          a6 = (undefined *)
               (*(code *)PTR_FUN_8c052670)(ar4 + 0x14,PTR_DAT_8c05266c,a6,PTR_FUN_8c052670);
          *(undefined **)((int)puVar8 + -400) = a6;
          *(undefined4 *)(DAT_8c052674 + ar4) = *(undefined4 *)((int)puVar8 + -400);
        }
        else {
          *(undefined4 *)((int)_DAT_8c0525c4 + ar4) = 0;
        }
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(DAT_8c052678 + ar4) = 2;
      }
    }
  }
LAB_8c0525f2:
  (*(code *)PTR_Vec3_assign_8c052680)(ar4 + DAT_8c05267c,ar4 + 0x14,a6,ar7);
  *(undefined4 *)((int)puVar8 + -0x124) = uVar7;
  (*(code *)PTR_Vec3_dtor_8c052688)
            ((undefined1 *)((int)puVar8 + DAT_8c052684 + -0x1a0),0xffffffff,a6,ar7);
  (*(code *)PTR_object_dtor_delete_8c052690)
            ((undefined1 *)((int)puVar8 + DAT_8c05268c + -0x1a0),0xffffffff,a6,ar7);
  (*(code *)PTR_object_dtor_delete_8c052690)
            ((undefined1 *)((int)puVar8 + DAT_8c052694 + -0x1a0),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c052688)
            ((undefined1 *)((int)puVar8 + DAT_8c052698 + -0x1a0),0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c052688)
            ((undefined1 *)((int)puVar8 + DAT_8c05269c + -0x1a0),0xffffffff,a6,ar7);
  return *(undefined4 *)((int)puVar8 + -0x124);
}



/* FUN_8c0526a0 @ 8c0526a0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c052f4a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0526a0(undefined *ar4,undefined *ar5,undefined *ar6,undefined4 ar7)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *a6;
  undefined4 a7;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 in_dr0;
  float fVar13;
  double dVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_1f8;
  int iStack_1f4;
  undefined *puStack_1f0;
  undefined *puStack_1ec;
  undefined *puStack_1e8;
  undefined *puStack_1e4;
  undefined *puStack_1e0;
  undefined *puStack_1dc;
  undefined *puStack_1d8;
  undefined *puStack_1d4;
  undefined *puStack_1d0;
  undefined *puStack_1cc;
  undefined *puStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  int iStack_190;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  undefined8 uStack_180;
  float fVar14;
  
  uVar5 = 1;
  uVar8 = 1;
  puStack_1f0 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c052760)((int)&puStack_1f0 + DAT_8c05275c,1,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c052760)((int)&puStack_1f0 + DAT_8c052764,uVar5,ar6,ar7);
  iStack_1f4 = (int)&puStack_1f0 + DAT_8c052768;
  (*(code *)PTR_FUN_8c05276c)(ar4 + 0x14,uVar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c052774)((int)&puStack_1f0 + DAT_8c052770,uVar5,ar6,ar7);
  iStack_1f4 = (int)&puStack_1f0 + DAT_8c052778;
  (*(code *)PTR_FUN_8c05276c)((int)&iStack_1f4 + DAT_8c05277c,uVar5,ar6,ar7);
  (*(code *)PTR_FUN_8c052780)
            ((int)&puStack_1f0 + DAT_8c052768,(int)&puStack_1f0 + DAT_8c052778,ar6,ar7);
  uVar12 = in_dr0;
  uVar2 = in_dr0;
  if (in_FPSCR_SZ == '\0') {
    uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_18c = CONCAT44(uStack_18c._4_4_,uVar5);
    uStack_180 = CONCAT44(uStack_180._4_4_,uVar5);
    uVar12 = uStack_18c;
    uVar2 = uStack_180;
  }
  uStack_180 = uVar2;
  uStack_18c = uVar12;
  (*(code *)PTR_Vec3_dtor_8c052784)((int)&puStack_1f0 + DAT_8c052778,0xffffffff,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c052784;
  (*(code *)PTR_Vec3_dtor_8c052784)
            ((int)&puStack_1f0 + DAT_8c052770,0xffffffff,ar6,PTR_Vec3_dtor_8c052784);
  (*(code *)PTR_Vec3_dtor_8c052784)((int)&puStack_1f0 + DAT_8c052768,0xffffffff,ar6,puVar4);
  if (puStack_1f0 != (undefined *)0x0) {
    if (puStack_1f0 == (undefined *)0x1) {
      ar6 = *(undefined **)(ar4 + DAT_8c0527a8);
      uVar5 = 5;
      if (((int)ar6 < 6) && (-1 < (int)ar6)) {
        a6 = (undefined *)((int)ar6 * 4);
        switch(ar6) {
        case (undefined *)0x0:
          if (*(int *)(ar4 + DAT_8c0527f8) == 1) {
            uStack_184 = 0;
            (*(code *)PTR_Vec3_dtor_8c052800)((int)&puStack_1f0 + DAT_8c0527fc,0xffffffff,a6,puVar4)
            ;
            (*(code *)PTR_Vec3_dtor_8c052800)((int)&puStack_1f0 + DAT_8c052804,0xffffffff,a6,puVar4)
            ;
            return uStack_184;
          }
          *(int *)(ar4 + DAT_8c052850) = *(int *)(ar4 + DAT_8c052850) + 1;
          a6 = ar4;
          puStack_1cc = ar4;
        case (undefined *)0x1:
          ar6 = a6;
          iStack_190 = (*(code *)PTR_FUN_8c052854)(ar4,ar5,ar6,puVar4);
          if (iStack_190 == 0) {
            *(int *)(ar4 + DAT_8c052850) = *(int *)(ar4 + DAT_8c052850) + 1;
            puStack_1d0 = ar4;
          }
          break;
        case (undefined *)0x2:
          (*(code *)PTR_Vec3_ctor_xyz_8c052950)((int)&puStack_1f0 + DAT_8c05294c,5,a6,puVar4);
          fStack_194 = (float)(*(code *)PTR_FUN_8c052954)
                                        (ar4 + 0x14,(int)&puStack_1f0 + DAT_8c05294c,a6,puVar4);
          *(float *)(ar4 + DAT_8c052958) = fStack_194;
          uVar5 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c05295c)((int)&puStack_1f0 + DAT_8c05294c,0xffffffff,a6,puVar4);
          iStack_1f4 = (int)&puStack_1f0 + DAT_8c052960;
          (*(code *)PTR_FUN_8c052964)(ar4 + 0x14,uVar5,a6,puVar4);
          a6 = PTR_Vec3_ctor_xyz_8c052950;
          (*(code *)PTR_Vec3_ctor_xyz_8c052950)
                    ((int)&puStack_1f0 + DAT_8c052968,uVar5,PTR_Vec3_ctor_xyz_8c052950,puVar4);
          (*(code *)PTR_FUN_8c05296c)
                    ((int)&puStack_1f0 + DAT_8c052960,(int)&puStack_1f0 + DAT_8c052968,a6,puVar4);
          fVar14 = (float)((ulonglong)in_dr0 >> 0x20);
          fStack_198 = fVar14;
          if (in_FPSCR_SZ != '\0') {
            fStack_198 = (float)in_dr0;
            fStack_194 = fVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + DAT_8c052970) = fStack_198;
          }
          else {
            *(ulonglong *)(ar4 + DAT_8c052970) = CONCAT44(fStack_194,fStack_198);
          }
          (*(code *)PTR_Vec3_dtor_8c05295c)((int)&puStack_1f0 + DAT_8c052968,0xffffffff,a6,puVar4);
          uVar5 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c05295c)((int)&puStack_1f0 + DAT_8c052960,0xffffffff,a6,puVar4);
          fVar14 = DAT_8c052974;
          fVar13 = DAT_8c052978;
          if (in_FPSCR_SZ == '\0') {
            fVar14 = *(float *)(ar4 + DAT_8c052970);
            fVar13 = DAT_8c052974;
          }
          if (in_FPSCR_PR == '\0' && fVar14 < fVar13) {
            a7 = 0;
            uVar7 = 0xffffffff;
            uVar5 = 0x1a;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c052980)
                      (ar4 + DAT_8c05297c,0x1a,0xffffffff,0);
            (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c052984)(ar4 + DAT_8c05297c,uVar5,uVar7,a7);
            ar6 = DAT_8c052988;
            *(int *)(DAT_8c052988 + (int)ar4) = *(int *)(DAT_8c052988 + (int)ar4) + 3;
            *(undefined4 *)(ar4 + DAT_8c052958) = 0;
            puVar4 = ar4;
            puStack_1d4 = ar4;
            break;
          }
          fVar13 = DAT_8c0529e0;
          fVar14 = DAT_8c0529e4;
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)(ar4 + DAT_8c0529dc);
            fVar14 = DAT_8c0529e0;
          }
          if (in_FPSCR_PR == '\0' && fVar13 < fVar14) {
            puVar4 = (undefined *)0x0;
            ar6 = (undefined *)0xffffffff;
            uVar5 = 0x1a;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0529ec)
                      (ar4 + DAT_8c0529e8,0x1a,0xffffffff,0);
            (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0529f0)(ar4 + DAT_8c0529e8,uVar5,ar6,puVar4)
            ;
            *(int *)(ar4 + DAT_8c0529f4) = *(int *)(ar4 + DAT_8c0529f4) + 3;
            puStack_1d8 = ar4;
            break;
          }
          if (*(int *)(ar4 + DAT_8c052a08) == 3) {
            (*(code *)PTR_FUN_8c052b78)(ar4,uVar5,a6,puVar4);
            fStack_1a4 = fVar13;
            fVar1 = fVar14;
            if (in_FPSCR_SZ == '\0') {
              fStack_1a4 = fVar14;
              fVar1 = fStack_1a0;
            }
            fStack_1a0 = fVar1;
            fStack_1a8 = fVar13;
            (*(code *)PTR_FUN_8c052b78)(ar4,uVar5,a6,puVar4);
            if (in_FPSCR_SZ == '\0') {
              fStack_1a8 = fVar14;
              fVar14 = fStack_1a4;
            }
            fStack_1a4 = fVar14;
            (*(code *)PTR_Vec3_ctor_xyz_8c052b80)((int)&puStack_1f0 + DAT_8c052b7c,uVar5,a6,puVar4);
            iStack_1f4 = (int)&puStack_1f0 + DAT_8c052b84;
            (*(code *)PTR_Vec3_add_8c052b8c)(ar5,(int)&iStack_1f4 + DAT_8c052b88,a6,puVar4);
            a6 = (undefined *)((int)&puStack_1f0 + DAT_8c052b84);
            (*(code *)PTR_FUN_8c052b90)(ar4,ar5,a6,puVar4);
            (*(code *)PTR_Vec3_dtor_8c052b94)((int)&puStack_1f0 + DAT_8c052b84,0xffffffff,a6,puVar4)
            ;
            uVar5 = 0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c052b94)((int)&puStack_1f0 + DAT_8c052b7c,0xffffffff,a6,puVar4)
            ;
          }
          else if (*(int *)(ar4 + DAT_8c052a08) == 4) {
            (*(code *)PTR_FUN_8c052a90)(ar4,uVar5,a6,puVar4);
            fStack_19c = fVar13;
            fVar1 = fVar14;
            if (in_FPSCR_SZ == '\0') {
              fStack_19c = fVar14;
              fVar1 = fStack_198;
            }
            fStack_198 = fVar1;
            fStack_1a0 = fVar13;
            (*(code *)PTR_FUN_8c052a90)(ar4,uVar5,a6,puVar4);
            if (in_FPSCR_SZ == '\0') {
              fStack_1a0 = fVar14;
              fVar14 = fStack_19c;
            }
            fStack_19c = fVar14;
            (*(code *)PTR_Vec3_ctor_xyz_8c052a98)((int)&puStack_1f0 + DAT_8c052a94,uVar5,a6,puVar4);
            iStack_1f4 = (int)&puStack_1f0 + DAT_8c052a9c;
            (*(code *)PTR_Vec3_add_8c052aa4)(ar5,(int)&iStack_1f4 + DAT_8c052aa0,a6,puVar4);
            a6 = (undefined *)((int)&puStack_1f0 + DAT_8c052a9c);
            (*(code *)PTR_FUN_8c052aa8)(ar4,ar5,a6,puVar4);
            (*(code *)PTR_Vec3_dtor_8c052aac)((int)&puStack_1f0 + DAT_8c052a9c,0xffffffff,a6,puVar4)
            ;
            uVar5 = 0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c052aac)((int)&puStack_1f0 + DAT_8c052a94,0xffffffff,a6,puVar4)
            ;
          }
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c052b9c)(ar4 + DAT_8c052b98,uVar5,a6,puVar4);
          *(int *)(ar4 + DAT_8c052ba0) = *(int *)(ar4 + DAT_8c052ba0) + 1;
          puStack_1dc = ar4;
        case (undefined *)0x3:
          iStack_1ac = (*(code *)PTR_FUN_8c052ba4)(ar4,uVar5,a6,puVar4);
          ar6 = a6;
          if (iStack_1ac == 0) {
            *(undefined4 *)(ar4 + DAT_8c052ba0) = 1;
          }
          break;
        case (undefined *)0x4:
          iStack_1b0 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c052be0)
                                 (ar4 + DAT_8c052bdc,5,a6,puVar4);
          ar6 = a6;
          if (iStack_1b0 == 1) {
            *(undefined4 *)(ar4 + DAT_8c052be4) = 0;
            *(undefined4 *)(ar4 + DAT_8c052be8) = 0;
            uVar8 = 0;
          }
          break;
        case (undefined *)0x5:
          *(undefined4 *)(ar4 + DAT_8c052c00) = 0;
          *(undefined4 *)(ar4 + DAT_8c052c04) = 0;
          uVar8 = 0;
          ar6 = a6;
        }
      }
      goto switchD_8c0527a4_default;
    }
    if (puStack_1f0 != (undefined *)0x2) goto switchD_8c0527a4_default;
  }
  iStack_1f4 = (int)&puStack_1f0 + DAT_8c052c8c;
  (*(code *)PTR_Vec3_scale_8c052c94)(ar4 + 0x14,PTR_DAT_8c052c90,ar6,puVar4);
  iStack_1f4 = (int)&puStack_1f0 + DAT_8c052c98;
  (*(code *)PTR_Vec3_add_8c052ca0)(ar5,(int)&iStack_1f4 + DAT_8c052c9c,ar6,puVar4);
  ar6 = ar5;
  (*(code *)PTR_FUN_8c052ca4)(ar4,(int)&puStack_1f0 + DAT_8c052c98,ar5,puVar4);
  (*(code *)PTR_Vec3_dtor_8c052ca8)((int)&puStack_1f0 + DAT_8c052c98,0xffffffff,ar6,puVar4);
  iVar6 = -1;
  (*(code *)PTR_Vec3_dtor_8c052ca8)((int)&puStack_1f0 + DAT_8c052c8c,0xffffffff,ar6,puVar4);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c052cac,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar10 = (double)CONCAT44(DAT_8c052cb0,DAT_8c052cac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar14 = (float)((ulonglong)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(fVar14,SUB84(dVar10,0) * fVar14);
  }
  else {
    dVar10 = dVar10 * dVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar10,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  iVar3 = *(int *)(ar4 + DAT_8c052cb0);
  puStack_1e0 = ar4;
  if (iVar3 == 0) {
    iStack_1b4 = (*(code *)PTR_FUN_8c052ce0)(ar4,iVar6,ar6,puVar4);
    if (iStack_1b4 == 0) {
      *(int *)(ar4 + DAT_8c052ce4) = *(int *)(ar4 + DAT_8c052ce4) + 1;
      puStack_1e4 = ar4;
    }
    goto switchD_8c0527a4_default;
  }
  if (iVar3 == 1) {
    (*(code *)PTR_Vec3_ctor_xyz_8c052dc4)((int)&puStack_1f0 + DAT_8c052dc0,iVar6,ar6,puVar4);
    uStack_1bc._4_4_ =
         (*(code *)PTR_FUN_8c052dc8)(ar4 + 0x14,(int)&puStack_1f0 + DAT_8c052dc0,ar6,puVar4);
    *(undefined4 *)(ar4 + DAT_8c052dcc) = uStack_1bc._4_4_;
    uVar5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c052dd0)((int)&puStack_1f0 + DAT_8c052dc0,0xffffffff,ar6,puVar4);
    iStack_1f4 = (int)&puStack_1f0 + DAT_8c052dd4;
    (*(code *)PTR_FUN_8c052dd8)(ar4 + 0x14,uVar5,ar6,puVar4);
    (*(code *)PTR_Vec3_ctor_xyz_8c052dc4)((int)&puStack_1f0 + DAT_8c052ddc,uVar5,ar6,puVar4);
    iStack_1f4 = (int)&puStack_1f0 + DAT_8c052de0;
    (*(code *)PTR_FUN_8c052dd8)((int)&iStack_1f4 + DAT_8c052de4,uVar5,ar6,puVar4);
    (*(code *)PTR_FUN_8c052de8)
              ((int)&puStack_1f0 + DAT_8c052dd4,(int)&puStack_1f0 + DAT_8c052de0,ar6,puVar4);
    if (in_FPSCR_SZ == '\0') {
      uStack_1bc = (double)CONCAT44(uStack_1bc._4_4_,(int)((ulonglong)dVar10 >> 0x20));
      dVar10 = uStack_1bc;
    }
    uStack_1bc = dVar10;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c052dec) = SUB84(uStack_1bc,0);
    }
    else {
      *(double *)(ar4 + DAT_8c052dec) = uStack_1bc;
    }
    (*(code *)PTR_Vec3_dtor_8c052dd0)((int)&puStack_1f0 + DAT_8c052de0,0xffffffff,ar6,puVar4);
    (*(code *)PTR_Vec3_dtor_8c052dd0)((int)&puStack_1f0 + DAT_8c052ddc,0xffffffff,ar6,puVar4);
    (*(code *)PTR_Vec3_dtor_8c052dd0)((int)&puStack_1f0 + DAT_8c052dd4,0xffffffff,ar6,puVar4);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(DAT_8c052df0,*(undefined4 *)(ar4 + DAT_8c052dec));
    }
    else {
      uVar11 = CONCAT44(DAT_8c052df4,DAT_8c052df0);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar11 < (float)(uVar11 >> 0x20)) {
      *(undefined4 *)(ar4 + DAT_8c052dcc) = 0;
      uVar8 = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + DAT_8c052df4) = 0;
      goto switchD_8c0527a4_default;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(DAT_8c052e24,*(undefined4 *)(ar4 + DAT_8c052e20));
    }
    else {
      uVar11 = CONCAT44(DAT_8c052e28,DAT_8c052e24);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar11 < (float)(uVar11 >> 0x20)) {
      uVar8 = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + DAT_8c052e28) = 0;
      goto switchD_8c0527a4_default;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar12 = CONCAT44((undefined4)DAT_8c052e54,(float)uVar11);
      *(undefined4 *)(ar4 + DAT_8c052e50) = (undefined4)DAT_8c052e54;
    }
    else {
      uVar12 = CONCAT44(DAT_8c052e54._4_4_,(undefined4)DAT_8c052e54);
      *(undefined8 *)(ar4 + DAT_8c052e50) = uVar12;
    }
    uVar9 = (uint)uVar12;
    if (*(int *)(ar4 + DAT_8c052e54._4_4_) == 3) {
      puVar4 = (undefined *)0x0;
      ar6 = (undefined *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c052e84)
                (ar4 + DAT_8c052e7c._4_4_,7,0xffffffff,0);
    }
    else if (*(int *)(ar4 + DAT_8c052e54._4_4_) == 4) {
      puVar4 = (undefined *)0x0;
      ar6 = (undefined *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05301c)
                (ar4 + DAT_8c053014._4_4_,8,0xffffffff,0);
    }
    *(undefined4 *)(ar4 + DAT_8c053020) = 3;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c053024)
              (ar4 + DAT_8c053014._4_4_,DAT_8c053014._4_4_,ar6,puVar4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar9;
    }
    ar6 = DAT_8c053028;
    iVar6 = *(int *)(DAT_8c053028 + (int)ar4);
    *(int *)(DAT_8c053028 + (int)ar4) = iVar6 + 1;
    puStack_1e8 = ar4;
  }
  else if (iVar3 != 2) {
    if (iVar3 == 3) {
      uVar8 = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar10 & 0xffffffff;
      }
      puVar4 = DAT_8c0530d0;
      *(undefined4 *)(DAT_8c0530d0 + (int)ar4) = 0;
      ar6 = (undefined *)0x0;
    }
    goto switchD_8c0527a4_default;
  }
  (*(code *)PTR_FUN_8c053030)(ar4,iVar6,ar6,puVar4);
  (*(code *)PTR_Vec3_ctor_xyz_8c053034)((int)&puStack_1f0 + DAT_8c053014._4_4_,iVar6,ar6,puVar4);
  iStack_1f4 = (int)&puStack_1f0 + DAT_8c053038;
  (*(code *)PTR_Vec3_scale_8c053044)((int)&iStack_1f4 + DAT_8c053040,PTR_DAT_8c05303c,ar6,puVar4);
  iStack_1f4 = (int)&puStack_1f0 + DAT_8c053048;
  iVar6 = (int)&iStack_1f4 + DAT_8c05304c;
  (*(code *)PTR_Vec3_add_8c053050)(ar5,iVar6,ar6,puVar4);
  uStack_1c0 = (*(code *)PTR_get_field_1c_026dd8_8c053054)
                         (ar4 + DAT_8c053014._4_4_,iVar6,ar6,puVar4);
  uStack_1c4 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c053058)
                         (ar4 + DAT_8c053014._4_4_,uStack_1c0,ar6,puVar4);
  (*(code *)PTR_Vec3_set_xyz_8c053068)
            ((int)&puStack_1f0 + DAT_8c053064,ar4 + DAT_8c05305c,ar6,puVar4);
  iStack_1f4 = (int)&puStack_1f0 + DAT_8c053064;
  iStack_1f8 = (int)&uStack_180 + 4;
  puVar4 = ar4 + 0x14;
  iVar6 = (int)&iStack_1f8 + DAT_8c05306c;
  (*(code *)PTR_FUN_8c053070)(ar4,ar5,iVar6,puVar4);
  (*(code *)PTR_Vec3_assign_8c053074)(ar4 + 0x14,(int)&uStack_180 + 4,iVar6,puVar4);
  (*(code *)PTR_Vec3_dtor_8c053078)((int)&uStack_180 + 4,0xffffffff,iVar6,puVar4);
  (*(code *)PTR_object_dtor_delete_8c05307c)
            ((int)&puStack_1f0 + DAT_8c053064,0xffffffff,iVar6,puVar4);
  (*(code *)PTR_Vec3_dtor_8c053078)((int)&puStack_1f0 + DAT_8c053048,0xffffffff,iVar6,puVar4);
  uVar7 = 0xffffffff;
  iVar6 = (int)&puStack_1f0 + DAT_8c053038;
  (*(code *)PTR_Vec3_dtor_8c053078)(iVar6,0xffffffff,iVar6,0xffffffff);
  uVar5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c053078)((int)&puStack_1f0 + DAT_8c053014._4_4_,0xffffffff,iVar6,uVar7);
  puStack_1c8 = (undefined *)
                (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c053080)
                          (ar4 + DAT_8c053014._4_4_,uVar5,iVar6,uVar7);
  ar6 = puStack_1c8;
  puVar4 = puStack_1c8;
  if (puStack_1c8 == (undefined *)0x1) {
    *(int *)(DAT_8c053028 + (int)ar4) = *(int *)(DAT_8c053028 + (int)ar4) + -1;
    puStack_1ec = ar4;
  }
switchD_8c0527a4_default:
  uStack_18c._4_4_ = uVar8;
  (*(code *)PTR_Vec3_dtor_8c0530d8)((int)&puStack_1f0 + DAT_8c0530d4,0xffffffff,ar6,puVar4);
  (*(code *)PTR_Vec3_dtor_8c0530d8)((int)&puStack_1f0 + DAT_8c0530dc,0xffffffff,ar6,puVar4);
  return uStack_18c._4_4_;
}



/* FUN_8c0530e0 @ 8c0530e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0530e0(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *a5;
  int *a5_00;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_d0;
  char cStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined8 uStack_9c;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [68];
  float fVar6;
  
  uVar3 = 1;
  a5_00 = ar5;
  puStack_d0 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0531b0)((int)&puStack_d0 + DAT_8c0531ac,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0531b4)(ar4,a5_00,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0531b8,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar4 = (double)CONCAT44(DAT_8c0531bc,DAT_8c0531b8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar6,SUB84(dVar4,0) * fVar6);
  }
  else {
    dVar4 = dVar4 * dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar4,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  iStack_bc = ar4;
  (*(code *)PTR_FUN_8c0531c0)(ar4,a5_00,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0531c4)(ar5,a5_00,ar6,ar7);
  cStack_cc = (char)uVar1;
  if (cStack_cc == '\0') {
    iStack_94 = (**(code **)(*ar5 + 0x34))(ar5,a5_00,ar6,ar7);
    if (iStack_94 != 0) {
      uVar1 = (**(code **)(*ar5 + 0x34))(ar5,a5_00,ar6,ar7);
      uStack_9c = (double)CONCAT44(uVar1,(undefined4)uStack_9c);
      *(undefined4 *)(DAT_8c0531c8 + ar4) = uVar1;
      a5 = PTR_DAT_8c0531cc;
      (*(code *)PTR_Vec3_assign_8c0531d0)((int)&puStack_d0 + DAT_8c0531ac,PTR_DAT_8c0531cc,ar6,ar7);
      if (*(int *)(DAT_8c0531c8 + ar4) == 3) {
        (*(code *)PTR_Vec3_ctor_xyz_8c0531d8)((int)&puStack_d0 + DAT_8c0531d4,a5,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c0531d0)
                  ((int)&puStack_d0 + DAT_8c0531ac,(int)&puStack_d0 + DAT_8c0531d4,ar6,ar7);
        a5 = (undefined *)0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c0531dc)((int)&puStack_d0 + DAT_8c0531d4,0xffffffff,ar6,ar7);
        dVar5 = dVar4;
      }
      else if (*(int *)(DAT_8c053218 + ar4) == 4) {
        (*(code *)PTR_Vec3_ctor_xyz_8c053224)((int)&puStack_d0 + DAT_8c05321c._4_4_,a5,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c05322c)
                  ((int)&puStack_d0 + DAT_8c053228,(int)&puStack_d0 + DAT_8c05321c._4_4_,ar6,ar7);
        a5 = (undefined *)0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c053230)((int)&puStack_d0 + DAT_8c05321c._4_4_,0xffffffff,ar6,ar7);
        dVar5 = dVar4;
      }
      else {
        *(undefined4 *)(DAT_8c0532e4 + ar4) = 0;
        dVar5 = dVar4;
      }
      (*(code *)PTR_FUN_8c0532e8)(ar4 + 0x14,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0532f0)(auStack_54,(int)&puStack_d0 + DAT_8c0532ec,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar1 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uStack_9c = (double)CONCAT44(uStack_9c._4_4_,uVar1);
        dVar4 = (double)CONCAT44(DAT_8c0532f4,uVar1);
      }
      else {
        dVar4 = (double)CONCAT44(PTR_Vec3_dtor_8c0532f8,DAT_8c0532f4);
        uStack_9c = dVar5;
      }
      uStack_8c = (uint)(in_FPSCR_PR == '\0' && SUB84(dVar4,0) < (float)((ulonglong)dVar4 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c0532f8)(auStack_54,0xffffffff,ar6,ar7);
      if (uStack_8c != 0) {
        *(undefined4 *)(DAT_8c0532e4 + ar4) = 0;
      }
      a5_00 = (int *)0x0;
      (**(code **)(*ar5 + 0x38))(ar5,0,ar6,ar7);
      if ((*(int *)(DAT_8c0532e4 + ar4) != *(int *)(DAT_8c0532fc + ar4)) &&
         (*(int *)(DAT_8c0532fc + ar4) == 0)) {
        *(undefined4 *)(DAT_8c0532fc + ar4) = *(undefined4 *)(DAT_8c0532e4 + ar4);
        *(undefined4 *)(DAT_8c053300 + ar4) = 0;
        *(undefined4 *)(DAT_8c053304 + ar4) = 0;
        *(undefined4 *)(DAT_8c053308 + ar4) = 0;
      }
    }
    iVar2 = *(int *)(DAT_8c0532fc + ar4);
    if (iVar2 == 0) {
      iVar2 = *(int *)(DAT_8c053324 + ar4);
      if (iVar2 == 0) {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c053360)(ar4 + DAT_8c05335c,a5_00,ar6,ar7);
        *(int *)(DAT_8c053364 + ar4) = *(int *)(DAT_8c053364 + ar4) + 1;
        iStack_c0 = ar4;
      }
      else if (iVar2 != 1) {
        if (iVar2 == 2) {
          if (*(int *)(DAT_8c0534b8 + ar4) == 0) {
            iVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0534c4)
                              (ar4 + DAT_8c0534c0,a5_00,ar6,ar7);
            iStack_ac = iVar2;
          }
          else {
            iVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c053514)
                              (ar4 + DAT_8c053510,a5_00,ar6,ar7);
            iStack_b0 = iVar2;
          }
          if ((iVar2 == 7) || (iVar2 == 1)) {
            *(undefined4 *)(DAT_8c053518 + ar4) = 1;
          }
        }
        goto LAB_8c0536da;
      }
      iVar2 = *(int *)(DAT_8c053368 + ar4);
      if (iVar2 == 0) {
        iStack_a0 = (*(code *)PTR_rand_range_8c0533ec)(ar4,0,100,ar7);
        if (iStack_a0 == 0) {
          ar7 = 0;
          ar6 = (undefined1 *)0xffffffff;
          a5_00 = (int *)0x2;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0533f8)
                    (ar4 + DAT_8c0533f0._4_4_,2,0xffffffff,0);
        }
        else {
          a5_00 = (int *)(*(code *)PTR_FUN_8c05346c)(ar4,0,2,10);
          uStack_a8 = (double)CONCAT44(a5_00,(undefined4)uStack_a8);
          ar7 = 0;
          ar6 = (undefined1 *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c053478)
                    (ar4 + DAT_8c053470._4_4_,a5_00,0xffffffff,0);
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05347c)(ar4 + DAT_8c053470._4_4_,a5_00,ar6,ar7);
      }
      else if (iVar2 == 3) {
        ar7 = 0;
        ar6 = (undefined1 *)0xffffffff;
        a5_00 = (int *)0xb;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c053390)
                  (ar4 + DAT_8c053388._4_4_,0xb,0xffffffff,0);
      }
      else if (iVar2 == 4) {
        ar7 = 0;
        ar6 = (undefined1 *)0xffffffff;
        a5_00 = (int *)0xc;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0533b8)
                  (ar4 + DAT_8c0533b0._4_4_,0xc,0xffffffff,0);
      }
      (*(code *)PTR_FUN_8c053484)(ar4,a5_00,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uStack_a8 = (double)CONCAT44(uStack_a8._4_4_,(int)((ulonglong)dVar4 >> 0x20));
        dVar4 = uStack_a8;
      }
      uStack_a8 = dVar4;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c053488) = SUB84(uStack_a8,0);
      }
      else {
        *(double *)(ar4 + DAT_8c053488) = uStack_a8;
      }
      *(int *)(DAT_8c05348c + ar4) = *(int *)(DAT_8c05348c + ar4) + 1;
      *(undefined4 *)(DAT_8c053490 + ar4) = 3;
      iStack_c4 = ar4;
    }
    else if ((iVar2 == 3) || (iVar2 == 4)) {
      if (*(int *)(DAT_8c05352c + ar4) == 0) {
        if (*(int *)(DAT_8c053568 + ar4) == 3) {
          (*(code *)PTR_Vec3_ctor_xyz_8c053570)(auStack_64,a5_00,ar6,ar7);
          (*(code *)PTR_Vec3_assign_8c053574)(ar4 + 0x54,auStack_64,ar6,ar7);
          uVar1 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c053578)(auStack_64,0xffffffff,ar6,ar7);
        }
        else {
          (*(code *)PTR_Vec3_ctor_xyz_8c053650)(auStack_74,a5_00,ar6,ar7);
          (*(code *)PTR_Vec3_assign_8c053654)(ar4 + 0x54,auStack_74,ar6,ar7);
          uVar1 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c053658)(auStack_74,0xffffffff,ar6,ar7);
        }
        if (*(int *)(DAT_8c05365c + ar4) == 0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x5c) = DAT_8c053660;
          }
          else {
            *(undefined8 *)(ar4 + 0x5c) = CONCAT44(PTR_Vec3_length_8c053664,DAT_8c053660);
          }
        }
        (*(code *)PTR_Vec3_length_8c053664)(ar4 + 0x54,uVar1,ar6,ar7);
        if (*(int *)(DAT_8c053668 + ar4) == 0) {
          *(undefined4 *)(DAT_8c05366c + ar4) = 1;
          (*(code *)PTR_FUN_8c053674)(ar4 + DAT_8c053670,uVar1,ar6,ar7);
        }
        *(int *)(DAT_8c053678 + ar4) = *(int *)(DAT_8c053678 + ar4) + 1;
        iStack_c8 = ar4;
      }
      else if (*(int *)(DAT_8c05352c + ar4) != 1) goto LAB_8c0536da;
      (*(code *)PTR_Vec3_ctor_copy_8c05367c)(auStack_84,ar4 + 0x54,ar6,ar7);
      ar6 = auStack_84;
      iStack_b4 = (*(code *)PTR_FUN_8c053680)(ar4,puStack_d0,ar6,ar7);
      uStack_90 = (uint)(iStack_b4 == 0);
      (*(code *)PTR_Vec3_dtor_8c053658)(auStack_84,0xffffffff,ar6,ar7);
      if (uStack_90 != 0) {
        *(undefined4 *)(DAT_8c053678 + ar4) = 0;
        if (*(int *)(DAT_8c053684 + ar4) == 3) {
          *(undefined4 *)(DAT_8c053668 + ar4) = 4;
        }
        else {
          *(undefined4 *)(DAT_8c053698 + ar4) = 3;
        }
        *(undefined4 *)(DAT_8c05369c + ar4) = 0;
      }
    }
  }
  else {
    iStack_b8 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05370c)
                          (ar4 + DAT_8c053708,a5_00,ar6,ar7);
    if (iStack_b8 == 1) {
      *(undefined4 *)(DAT_8c053710 + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c053704) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c053704) = CONCAT44(0x3f800000,SUB84(dVar4,0));
      }
      uVar3 = 0;
      *(undefined4 *)(DAT_8c053714 + ar4) = 2;
      *(undefined4 *)(DAT_8c053718 + ar4) = 0;
    }
  }
LAB_8c0536da:
  uStack_88 = uVar3;
  (*(code *)PTR_Vec3_dtor_8c053720)((int)&puStack_d0 + DAT_8c05371c,0xffffffff,ar6,ar7);
  return uStack_88;
}



/* FUN_8c053724 @ 8c053724 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c053724(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c05372c + ar4);
}



/* FUN_8c053730 @ 8c053730 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c053730(int ar4,int *ar5,undefined4 ar6,undefined1 *ar7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *a7;
  undefined4 unaff_r11;
  undefined4 uVar7;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar8;
  double dVar9;
  undefined8 uVar10;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  float fVar11;
  
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_4;
  }
  else {
    puVar8 = auStack_8;
  }
  *(undefined4 *)(puVar8 + -4) = unaff_r14;
  *(undefined4 *)(puVar8 + -8) = unaff_r13;
  *(undefined4 *)(puVar8 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar8 + -0x14) = in_PR;
  uVar7 = 1;
  puVar5 = PTR_Vec3_ctor_zero_8c053874;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c053874)
            (puVar8 + DAT_8c053870 + -0x128,PTR_Vec3_ctor_zero_8c053874,ar6,ar7);
  (*(code *)PTR_FUN_8c053878)(ar4,puVar5,ar6,a7);
  (*(code *)PTR_FUN_8c053880)(ar4 + DAT_8c05387c,puVar5,ar6,a7);
  puVar6 = puVar8 + DAT_8c053884 + -0x128;
  *(undefined1 **)(puVar8 + -300) = puVar6;
  (*(code *)PTR_Vec3_scale_8c05388c)(ar4 + 0x14,PTR_DAT_8c053888,puVar6,a7);
  *(undefined1 **)(puVar8 + -300) = puVar8 + DAT_8c053890 + -0x128;
  (*(code *)PTR_Vec3_add_8c053898)(ar7,puVar8 + DAT_8c053894 + -300,puVar6,a7);
  puVar6 = ar7;
  (*(code *)PTR_FUN_8c05389c)(ar4,puVar8 + DAT_8c053890 + -0x128,ar7,a7);
  (*(code *)PTR_Vec3_dtor_8c0538a0)(puVar8 + DAT_8c053890 + -0x128,0xffffffff,puVar6,a7);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0538a0)(puVar8 + DAT_8c053884 + -0x128,0xffffffff,puVar6,a7);
  *(int *)(puVar8 + -0x110) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c0538a4,*(undefined4 *)(*(int *)(puVar8 + -0x110) + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)(puVar8 + -0x110) + 0x28);
    dVar9 = (double)CONCAT44(DAT_8c0538a8,DAT_8c0538a4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar11 = (float)((ulonglong)dVar9 >> 0x20);
    dVar9 = (double)CONCAT44(fVar11,SUB84(dVar9,0) * fVar11);
  }
  else {
    dVar9 = dVar9 * dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(*(int *)(puVar8 + -0x110) + 0x28) = SUB84(dVar9,0);
  }
  else {
    *(undefined8 *)(*(int *)(puVar8 + -0x110) + 0x28) = in_xd0;
  }
  (*(code *)PTR_FUN_8c0538ac)(ar4,uVar4,puVar6,a7);
  uVar2 = (*(code *)PTR_FUN_8c0538b0)(ar5,uVar4,puVar6,a7);
  puVar8[-0x128] = (char)uVar2;
  if (puVar8[-0x128] == '\0') {
    uVar2 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,puVar6,a7);
    *(undefined4 *)(puVar8 + -0xd4) = uVar2;
    if (*(int *)(puVar8 + -0xd4) != 0) {
      uVar4 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,puVar6,a7);
      *(undefined4 *)(puVar8 + -0xd8) = uVar4;
      *(undefined4 *)(DAT_8c0538b4 + ar4) = *(undefined4 *)(puVar8 + -0xd8);
      puVar5 = PTR_DAT_8c0538b8;
      (*(code *)PTR_Vec3_assign_8c0538bc)(puVar8 + DAT_8c053870 + -0x128,PTR_DAT_8c0538b8,puVar6,a7)
      ;
      if (*(int *)(DAT_8c0538b4 + ar4) == 3) {
        (*(code *)PTR_Vec3_ctor_xyz_8c0538c4)(puVar8 + DAT_8c0538c0 + -0x128,puVar5,puVar6,a7);
        (*(code *)PTR_Vec3_assign_8c0538bc)
                  (puVar8 + DAT_8c053870 + -0x128,puVar8 + DAT_8c0538c0 + -0x128,puVar6,a7);
        puVar5 = (undefined *)0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c0538a0)(puVar8 + DAT_8c0538c0 + -0x128,0xffffffff,puVar6,a7);
      }
      else if (*(int *)(DAT_8c053900 + ar4) == 4) {
        (*(code *)PTR_Vec3_ctor_xyz_8c05390c)(puVar8 + DAT_8c053904._4_4_ + -0x128,puVar5,puVar6,a7)
        ;
        (*(code *)PTR_Vec3_assign_8c053914)
                  (puVar8 + DAT_8c053910 + -0x128,puVar8 + DAT_8c053904._4_4_ + -0x128,puVar6,a7);
        puVar5 = (undefined *)0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c053918)(puVar8 + DAT_8c053904._4_4_ + -0x128,0xffffffff,puVar6,a7)
        ;
      }
      else {
        *(undefined4 *)(DAT_8c0539c4 + ar4) = 0;
      }
      *(undefined1 **)(puVar8 + -300) = puVar8 + DAT_8c0539c8 + -0x128;
      (*(code *)PTR_FUN_8c0539cc)(ar4 + 0x14,puVar5,puVar6,a7);
      (*(code *)PTR_FUN_8c0539d4)
                (puVar8 + DAT_8c0539c8 + -0x128,puVar8 + DAT_8c0539d0 + -0x128,puVar6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar8 + -0xdc) = (int)((ulonglong)dVar9 >> 0x20);
        dVar9 = (double)CONCAT44(DAT_8c0539d8,*(undefined4 *)(puVar8 + -0xdc));
      }
      else {
        *(double *)(puVar8 + -0xdc) = dVar9;
        dVar9 = (double)CONCAT44(PTR_Vec3_dtor_8c0539dc,DAT_8c0539d8);
      }
      *(uint *)(puVar8 + -0xcc) =
           (uint)(in_FPSCR_PR == '\0' && SUB84(dVar9,0) < (float)((ulonglong)dVar9 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c0539dc)(puVar8 + DAT_8c0539c8 + -0x128,0xffffffff,puVar6,a7);
      if (*(int *)(puVar8 + -0xcc) != 0) {
        *(undefined4 *)(DAT_8c0539c4 + ar4) = 0;
      }
      uVar4 = 0;
      (**(code **)(*ar5 + 0x38))(ar5,0,puVar6,a7);
      if ((*(int *)(DAT_8c0539c4 + ar4) != *(int *)(DAT_8c0539e0 + ar4)) &&
         (*(int *)(DAT_8c0539e0 + ar4) == 0)) {
        *(undefined4 *)(DAT_8c0539e0 + ar4) = *(undefined4 *)(DAT_8c0539c4 + ar4);
        *(undefined4 *)(DAT_8c0539e4 + ar4) = 0;
        *(undefined4 *)(DAT_8c0539e8 + ar4) = 0;
      }
    }
    iVar3 = *(int *)(DAT_8c0539e0 + ar4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(DAT_8c053a04 + ar4);
      if (iVar3 == 0) {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c053a40)(ar4 + DAT_8c053a3c,uVar4,puVar6,a7);
        *(int *)(puVar8 + -0x114) = ar4;
        *(int *)(DAT_8c053a44 + *(int *)(puVar8 + -0x114)) =
             *(int *)(DAT_8c053a44 + *(int *)(puVar8 + -0x114)) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          (*(code *)PTR_CAnimBody_GetCurFrame_8c053b6c)(ar4 + DAT_8c053b68,uVar4,puVar6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar8 + -0xe4) = (int)((ulonglong)dVar9 >> 0x20);
            dVar9 = (double)(ulonglong)*(uint *)(puVar8 + -0xe4);
          }
          else {
            *(double *)(puVar8 + -0xe4) = dVar9;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar10 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c053b70),SUB84(dVar9,0));
          }
          else {
            uVar10 = *(undefined8 *)(ar4 + DAT_8c053b70);
          }
          if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar10 >> 0x20) <= (float)uVar10) {
            uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c053bf0)
                              (ar4 + DAT_8c053bec,uVar4,puVar6,a7);
            *(undefined4 *)(puVar8 + -0xe8) = uVar2;
            if (*(int *)(puVar8 + -0xe8) == 7) {
              (*(code *)PTR_FUN_8c053bfc)(ar4,uVar4,puVar6,a7);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar8 + -0xec) = (int)((ulonglong)uVar10 >> 0x20);
              }
              else {
                *(undefined8 *)(puVar8 + -0xec) = uVar10;
              }
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(ar4 + DAT_8c053be8) = *(undefined4 *)(puVar8 + -0xec);
              }
              else {
                *(undefined8 *)(ar4 + DAT_8c053be8) = *(undefined8 *)(puVar8 + -0xec);
              }
              *(undefined4 *)(DAT_8c053c00 + ar4) = 1;
            }
          }
          else {
            (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c053b78)
                      (ar4 + DAT_8c053b68,uVar4,puVar6,a7);
          }
        }
        goto LAB_8c053eda;
      }
      iVar3 = *(int *)(DAT_8c053a48 + ar4);
      if (iVar3 == 0) {
        a7 = (undefined1 *)0x0;
        puVar6 = (undefined1 *)0xffffffff;
        uVar4 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c053b0c)
                  (ar4 + DAT_8c053b04._4_4_,0,0xffffffff,0);
      }
      else if (iVar3 == 3) {
        a7 = (undefined1 *)0x0;
        puVar6 = (undefined1 *)0xffffffff;
        uVar4 = 0xb;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c053a70)
                  (ar4 + DAT_8c053a68._4_4_,0xb,0xffffffff,0);
      }
      else if (iVar3 == 4) {
        a7 = (undefined1 *)0x0;
        puVar6 = (undefined1 *)0xffffffff;
        uVar4 = 0xc;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c053a98)
                  (ar4 + DAT_8c053a90._4_4_,0xc,0xffffffff,0);
      }
      (*(code *)PTR_FUN_8c053b1c)(ar4 + DAT_8c053b18,uVar4,puVar6,a7);
      *(int *)(puVar8 + -0x118) = ar4;
      *(int *)(DAT_8c053b20 + *(int *)(puVar8 + -0x118)) =
           *(int *)(DAT_8c053b20 + *(int *)(puVar8 + -0x118)) + 1;
      *(undefined4 *)(DAT_8c053b24 + ar4) = 3;
      (*(code *)PTR_FUN_8c053b30)(ar4,uVar4,puVar6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar8 + -0xe0) = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        *(double *)(puVar8 + -0xe0) = dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c053b18) = *(undefined4 *)(puVar8 + -0xe0);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c053b18) = *(undefined8 *)(puVar8 + -0xe0);
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = *(int *)(DAT_8c053c20 + ar4);
      if (iVar3 == 0) {
        uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c053ca4)
                          (ar4 + DAT_8c053ca0,uVar4,puVar6,a7);
        *(undefined4 *)(puVar8 + -0xf0) = uVar2;
        if (*(int *)(puVar8 + -0xf0) == 1) {
          if (*(int *)(DAT_8c053ca8 + ar4) == 3) {
            (*(code *)PTR_FUN_8c053cb4)(ar4,uVar4,puVar6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0xf4) = (int)((ulonglong)dVar9 >> 0x20);
            }
            else {
              *(double *)(puVar8 + -0xf4) = dVar9;
            }
            (*(code *)PTR_FUN_8c053cb4)(ar4,uVar4,puVar6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0xf8) = (int)((ulonglong)dVar9 >> 0x20);
            }
            else {
              *(double *)(puVar8 + -0xf8) = dVar9;
            }
            (*(code *)PTR_Vec3_ctor_xyz_8c053cbc)(puVar8 + DAT_8c053cb8 + -0x128,uVar4,puVar6,a7);
            (*(code *)PTR_Vec3_assign_8c053cc0)(ar4 + 0x54,puVar8 + DAT_8c053cb8 + -0x128,puVar6,a7)
            ;
            (*(code *)PTR_Vec3_dtor_8c053cc4)(puVar8 + DAT_8c053cb8 + -0x128,0xffffffff,puVar6,a7);
          }
          else {
            (*(code *)PTR_FUN_8c053d40)(ar4,uVar4,puVar6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0xfc) = (int)((ulonglong)dVar9 >> 0x20);
            }
            else {
              *(double *)(puVar8 + -0xfc) = dVar9;
            }
            (*(code *)PTR_FUN_8c053d40)(ar4,uVar4,puVar6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0x100) = (int)((ulonglong)dVar9 >> 0x20);
            }
            else {
              *(double *)(puVar8 + -0x100) = dVar9;
            }
            (*(code *)PTR_Vec3_ctor_xyz_8c053d48)(puVar8 + DAT_8c053d44 + -0x128,uVar4,puVar6,a7);
            (*(code *)PTR_Vec3_assign_8c053d4c)(ar4 + 0x54,puVar8 + DAT_8c053d44 + -0x128,puVar6,a7)
            ;
            (*(code *)PTR_Vec3_dtor_8c053d50)(puVar8 + DAT_8c053d44 + -0x128,0xffffffff,puVar6,a7);
          }
          *(int *)(puVar8 + -0x11c) = ar4;
          *(int *)(DAT_8c053d54 + *(int *)(puVar8 + -0x11c)) =
               *(int *)(DAT_8c053d54 + *(int *)(puVar8 + -0x11c)) + 1;
        }
      }
      else if (iVar3 == 1) {
        *(undefined1 **)(puVar8 + -300) = puVar8 + DAT_8c053dd0 + -0x128;
        (*(code *)PTR_FUN_8c053dd4)(ar4 + 0x14,uVar4,puVar6,a7);
        *(undefined1 **)(puVar8 + -300) = puVar8 + -0xb4;
        (*(code *)PTR_FUN_8c053dd4)(ar4 + 0x54,uVar4,puVar6,a7);
        (*(code *)PTR_FUN_8c053dd8)(puVar8 + DAT_8c053dd0 + -0x128,puVar8 + -0xb4,puVar6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar8 + -0x104) = (int)((ulonglong)dVar9 >> 0x20);
          in_fr15 = *(float *)(puVar8 + -0x104);
        }
        else {
          *(double *)(puVar8 + -0x104) = dVar9;
        }
        (*(code *)PTR_Vec3_dtor_8c053ddc)(puVar8 + -0xb4,0xffffffff,puVar6,a7);
        uVar2 = SUB84(dVar9,0);
        uVar4 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c053ddc)(puVar8 + DAT_8c053dd0 + -0x128,0xffffffff,puVar6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44((undefined4)DAT_8c053de0,uVar2);
        }
        else {
          dVar9 = (double)CONCAT44(DAT_8c053de0._4_4_,(undefined4)DAT_8c053de0);
        }
        if (in_FPSCR_PR == '\0') {
          bVar12 = (float)((ulonglong)dVar9 >> 0x20) < in_fr15;
        }
        else {
          bVar12 = dVar9 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar12) {
          *(int *)(puVar8 + -0x120) = ar4;
          *(int *)(DAT_8c053de0._4_4_ + *(int *)(puVar8 + -0x120)) =
               *(int *)(DAT_8c053de0._4_4_ + *(int *)(puVar8 + -0x120)) + 1;
          *(undefined4 *)(DAT_8c053de8 + ar4) = 1;
        }
        else {
          *(undefined4 *)(DAT_8c053e04 + ar4) = 0;
          if (*(int *)(DAT_8c053e08 + ar4) == 3) {
            *(undefined4 *)(DAT_8c053e0c + ar4) = 4;
          }
          else {
            *(undefined4 *)(DAT_8c053e30 + ar4) = 3;
          }
          *(undefined4 *)(DAT_8c053e34 + ar4) = 0;
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c053e3c)(ar4 + DAT_8c053e38,uVar4,puVar6,a7);
      }
      else if (iVar3 == 2) {
        (*(code *)PTR_Vec3_ctor_copy_8c053e98)(puVar8 + -0xc4,ar4 + 0x54,puVar6,a7);
        a7 = puVar8 + -0xc4;
        uVar4 = (*(code *)PTR_FUN_8c053e9c)(ar4,ar7,ar7,a7);
        *(undefined4 *)(puVar8 + -0x108) = uVar4;
        *(uint *)(puVar8 + -0xd0) = (uint)(*(int *)(puVar8 + -0x108) == 0);
        (*(code *)PTR_Vec3_dtor_8c053ea0)(puVar8 + -0xc4,0xffffffff,ar7,a7);
        puVar1 = DAT_8c053ea4;
        puVar6 = ar7;
        if (*(int *)(puVar8 + -0xd0) != 0) {
          *(int *)(puVar8 + -0x124) = ar4;
          *(int *)(DAT_8c053ea4 + *(int *)(puVar8 + -0x124)) =
               *(int *)(DAT_8c053ea4 + *(int *)(puVar8 + -0x124)) + -1;
          puVar6 = puVar1;
        }
      }
    }
  }
  else {
    uVar4 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c053f0c)
                      (ar4 + DAT_8c053f08,PTR_CAnimBody_AdvanceFrame_wrapper_8c053f0c,puVar6,a7);
    *(undefined4 *)(puVar8 + -0x10c) = uVar4;
    if (*(int *)(puVar8 + -0x10c) == 1) {
      *(undefined4 *)(DAT_8c053f10 + ar4) = 0;
      uVar7 = 0;
      *(undefined4 *)(DAT_8c053f14 + ar4) = 2;
      *(undefined4 *)(DAT_8c053f18 + ar4) = 0;
    }
  }
LAB_8c053eda:
  *(undefined4 *)(puVar8 + -200) = uVar7;
  (*(code *)PTR_Vec3_dtor_8c053f20)(puVar8 + DAT_8c053f1c + -0x128,0xffffffff,puVar6,a7);
  return *(undefined4 *)(puVar8 + -200);
}



/* FUN_8c053f24 @ 8c053f24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c053f24(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *a6;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *a7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 uVar6;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar7;
  undefined4 unaff_r14;
  undefined1 *puVar8;
  ulonglong in_dr0;
  undefined8 uVar9;
  double dVar10;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_4;
  }
  else {
    puVar8 = auStack_8;
  }
  *(undefined4 *)(puVar8 + -4) = unaff_r14;
  *(undefined4 *)(puVar8 + -8) = unaff_r13;
  *(undefined4 *)(puVar8 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar8 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar8 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar8 + -0x1c) = in_PR;
  uVar6 = 1;
  a7 = (undefined4 *)(puVar8 + DAT_8c054028 + -0x184);
  uVar1 = *(undefined4 *)(PTR_DAT_8c05402c + 4);
  *a7 = *(undefined4 *)PTR_DAT_8c05402c;
  a7[1] = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c05402c + 0xc);
  a7[2] = *(undefined4 *)(PTR_DAT_8c05402c + 8);
  a7[3] = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c05402c + 0x14);
  a7[4] = *(undefined4 *)(PTR_DAT_8c05402c + 0x10);
  a7[5] = uVar1;
  uVar4 = *(undefined4 *)(PTR_DAT_8c05402c + 0x1c);
  a7[6] = *(undefined4 *)(PTR_DAT_8c05402c + 0x18);
  a7[7] = uVar4;
  a7[8] = *(undefined4 *)(PTR_DAT_8c05402c + 0x20);
  a6 = PTR_DAT_8c05402c;
  (*(code *)PTR_Vec3_ctor_zero_8c054034)(puVar8 + DAT_8c054030 + -0x184,uVar4,PTR_DAT_8c05402c,a7);
  (*(code *)PTR_FUN_8c05403c)(ar4 + DAT_8c054038,uVar4,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c054040)(ar5,uVar4,a6,a7);
  puVar8[-0x184] = (char)uVar1;
  if (puVar8[-0x184] == '\0') {
    uVar1 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,a6,a7);
    *(undefined4 *)(puVar8 + DAT_8c054044 + -0x184) = uVar1;
    if (*(int *)(puVar8 + DAT_8c054044 + -0x184) != 0) {
      uVar1 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,a6,a7);
      *(undefined4 *)(puVar8 + DAT_8c054048 + -0x184) = uVar1;
      *(undefined4 *)(DAT_8c05404c + ar4) = *(undefined4 *)(puVar8 + DAT_8c054048 + -0x184);
      puVar5 = PTR_DAT_8c054050;
      (*(code *)PTR_Vec3_assign_8c054054)(puVar8 + DAT_8c054030 + -0x184,PTR_DAT_8c054050,a6,a7);
      if (*(int *)(DAT_8c05404c + ar4) == 3) {
        (*(code *)PTR_Vec3_ctor_xyz_8c05405c)
                  (puVar8 + DAT_8c054058 + -0x184,PTR_Vec3_ctor_xyz_8c05405c,a6,a7);
        (*(code *)PTR_Vec3_assign_8c054054)
                  (puVar8 + DAT_8c054030 + -0x184,puVar8 + DAT_8c054058 + -0x184,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c054060)(puVar8 + DAT_8c054058 + -0x184,0xffffffff,a6,a7);
      }
      else if (*(int *)(DAT_8c0540a0 + ar4) == 4) {
        (*(code *)PTR_Vec3_ctor_xyz_8c0540ac)(puVar8 + DAT_8c0540a4._4_4_ + -0x184,puVar5,a6,a7);
        (*(code *)PTR_Vec3_assign_8c0540b4)
                  (puVar8 + DAT_8c0540b0 + -0x184,puVar8 + DAT_8c0540a4._4_4_ + -0x184,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c0540b8)(puVar8 + DAT_8c0540a4._4_4_ + -0x184,0xffffffff,a6,a7);
      }
      else {
        *(undefined4 *)(DAT_8c054180 + ar4) = 0;
      }
      *(undefined1 **)(puVar8 + -0x188) = puVar8 + DAT_8c054184 + -0x184;
      (*(code *)PTR_FUN_8c054188)(ar4 + 0x14,PTR_FUN_8c054188,a6,a7);
      (*(code *)PTR_FUN_8c054190)
                (puVar8 + DAT_8c054184 + -0x184,puVar8 + DAT_8c05418c + -0x184,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar8 + -0x108) = (int)(in_dr0 >> 0x20);
        in_dr0 = CONCAT44(DAT_8c054194,*(undefined4 *)(puVar8 + -0x108));
      }
      else {
        *(ulonglong *)(puVar8 + -0x108) = in_dr0;
        in_dr0 = CONCAT44(DAT_8c054198,DAT_8c054194);
      }
      *(uint *)(puVar8 + DAT_8c054198 + -0x184) =
           (uint)(in_FPSCR_PR == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c05419c)(puVar8 + DAT_8c054184 + -0x184,0xffffffff,a6,a7);
      if (*(int *)(puVar8 + DAT_8c054198 + -0x184) != 0) {
        *(undefined4 *)(DAT_8c054180 + ar4) = 0;
      }
      uVar4 = 0;
      (**(code **)(*ar5 + 0x38))(ar5,0,a6,a7);
      if ((*(int *)(DAT_8c054180 + ar4) != *(int *)(DAT_8c0541a0 + ar4)) &&
         (*(int *)(DAT_8c0541a0 + ar4) == 0)) {
        *(undefined4 *)(DAT_8c0541a0 + ar4) = *(undefined4 *)(DAT_8c054180 + ar4);
        uVar4 = 0;
        *(undefined4 *)(DAT_8c0541a4 + ar4) = 0;
        *(undefined4 *)(DAT_8c0541a8 + ar4) = 0;
      }
    }
    if (*(int *)(DAT_8c0541ac + ar4) == 1) {
      uVar4 = 0;
      *(undefined4 *)(DAT_8c0541a0 + ar4) = 0;
      *(undefined4 *)(DAT_8c0541b0 + ar4) = 3;
    }
    iVar2 = *(int *)(DAT_8c0541a0 + ar4);
    if (iVar2 == 0) {
      iVar2 = *(int *)(DAT_8c0541dc + ar4);
      switch(iVar2) {
      case 0:
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c054288)(ar4 + DAT_8c054284,iVar2,a6,a7);
        *(int *)(puVar8 + -0x158) = ar4;
        *(int *)(DAT_8c05428c + *(int *)(puVar8 + -0x158)) =
             *(int *)(DAT_8c05428c + *(int *)(puVar8 + -0x158)) + 1;
      case 1:
        if (*(int *)(DAT_8c054290 + ar4) == 1) {
          *(undefined4 *)(DAT_8c054294 + ar4) = 3;
        }
        a6 = (undefined *)0x64;
        iVar2 = 0;
        uVar1 = (*(code *)PTR_rand_range_8c054298)(ar4,0,100,a7);
        *(undefined4 *)(puVar8 + -0x10c) = uVar1;
        if (*(int *)(puVar8 + -0x10c) < 0x33) {
          iVar7 = 0;
        }
        else {
          a6 = (undefined *)0x9;
          uVar4 = 1;
          uVar1 = (*(code *)PTR_rand_range_8c054298)(ar4,1,9,a7);
          *(undefined4 *)(puVar8 + -0x110) = uVar1;
          iVar7 = *(int *)(puVar8 + -0x110);
          uVar1 = (*(code *)PTR_get_field_94_02aaa4_8c05429c)(ar5,uVar4,a6,a7);
          *(undefined4 *)(puVar8 + -0x114) = uVar1;
          iVar2 = 5;
          uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0542a0)
                            (*(undefined4 *)(puVar8 + -0x114),5,a6,a7);
          *(undefined4 *)(puVar8 + -0x15c) = uVar1;
          if (*(int *)(puVar8 + -0x15c) == 1) {
            iVar7 = 7;
          }
          else if (*(int *)(puVar8 + -0x15c) == 4) {
            iVar7 = 7;
          }
        }
        if (*(int *)(DAT_8c0542d8 + ar4) == 3) {
          (*(code *)PTR_FUN_8c0542e8)(ar4 + DAT_8c0542e4,iVar2,a6,a7);
        }
        else {
          (*(code *)PTR_FUN_8c054324)(ar4 + DAT_8c054320,iVar2,a6,a7);
        }
        iVar3 = *(int *)(DAT_8c054328 + ar4);
        if (iVar3 == 0) {
          a7 = (undefined4 *)0x0;
          a6 = (undefined *)0xffffffff;
          iVar2 = iVar7 + 0x38;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05441c)
                    (ar4 + DAT_8c054414._4_4_,iVar2,0xffffffff,0);
        }
        else if (iVar3 == 3) {
          a7 = (undefined4 *)0x0;
          a6 = (undefined *)0xffffffff;
          iVar2 = iVar7 + 0x26;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c054350)
                    (ar4 + DAT_8c054348._4_4_,iVar2,0xffffffff,0);
        }
        else if (iVar3 == 4) {
          a7 = (undefined4 *)0x0;
          a6 = (undefined *)0xffffffff;
          iVar2 = iVar7 + 0x2f;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c054378)
                    (ar4 + DAT_8c054370._4_4_,iVar2,0xffffffff,0);
        }
        *(int *)(puVar8 + -0x160) = ar4;
        *(int *)(DAT_8c054420 + *(int *)(puVar8 + -0x160)) =
             *(int *)(DAT_8c054420 + *(int *)(puVar8 + -0x160)) + 1;
        *(undefined4 *)(DAT_8c054424 + ar4) = 3;
        *(int *)(puVar8 + -0x164) = iVar7;
        *(undefined4 *)(DAT_8c054428 + ar4) =
             *(undefined4 *)(puVar8 + *(int *)(puVar8 + -0x164) * 4 + DAT_8c05442c + -0x184);
        (*(code *)PTR_FUN_8c054438)(ar4,iVar2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar8 + -0x118) = (int)(in_dr0 >> 0x20);
        }
        else {
          *(ulonglong *)(puVar8 + -0x118) = in_dr0;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar1 = (undefined4)*(ulonglong *)(puVar8 + -0x118);
          in_dr0 = CONCAT44(uVar1,(int)in_dr0);
          *(undefined4 *)(ar4 + DAT_8c05443c) = uVar1;
        }
        else {
          in_dr0 = *(ulonglong *)(puVar8 + -0x118);
          *(ulonglong *)(ar4 + DAT_8c05443c) = in_dr0;
        }
      case 2:
        (*(code *)PTR_CAnimBody_GetCurFrame_8c054440)(ar4 + DAT_8c054414._4_4_,iVar2,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar8 + -0x11c) = (int)(in_dr0 >> 0x20);
          in_dr0 = (ulonglong)*(uint *)(puVar8 + -0x11c);
        }
        else {
          *(ulonglong *)(puVar8 + -0x11c) = in_dr0;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar9 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c054444),(int)in_dr0);
        }
        else {
          uVar9 = *(undefined8 *)(ar4 + DAT_8c054444);
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar9 >> 0x20) <= (float)uVar9) {
          if (*(int *)(DAT_8c054500 + ar4) == 0) {
            uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c054514)
                              (ar4 + DAT_8c054510,iVar2,a6,a7);
            *(undefined4 *)(puVar8 + -0x120) = uVar1;
            if (*(int *)(puVar8 + -0x120) == 7) {
              (*(code *)PTR_FUN_8c054520)(ar4,iVar2,a6,a7);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar8 + -0x124) = (int)((ulonglong)uVar9 >> 0x20);
              }
              else {
                *(undefined8 *)(puVar8 + -0x124) = uVar9;
              }
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(ar4 + DAT_8c05450c) = *(undefined4 *)(puVar8 + -0x124);
              }
              else {
                *(undefined8 *)(ar4 + DAT_8c05450c) = *(undefined8 *)(puVar8 + -0x124);
              }
              *(int *)(puVar8 + -0x168) = ar4;
              *(int *)(puVar8 + -0x16c) = *(int *)(DAT_8c054524 + *(int *)(puVar8 + -0x168)) + -1;
              *(undefined4 *)(DAT_8c054524 + *(int *)(puVar8 + -0x168)) =
                   *(undefined4 *)(puVar8 + -0x16c);
              if (*(int *)(puVar8 + -0x16c) < 0) {
                a6 = (undefined *)0x64;
                uVar1 = (*(code *)PTR_rand_range_8c054528)(ar4,0,100,a7);
                *(undefined4 *)(puVar8 + -0x128) = uVar1;
                if (*(int *)(puVar8 + -0x128) < 5) {
                  *(int *)(puVar8 + -0x170) = ar4;
                  *(int *)(DAT_8c05452c + *(int *)(puVar8 + -0x170)) =
                       *(int *)(DAT_8c05452c + *(int *)(puVar8 + -0x170)) + 1;
                }
                else {
                  *(undefined4 *)(DAT_8c054540 + ar4) = 1;
                }
                *(undefined4 *)(DAT_8c054544 + ar4) = 0;
              }
            }
          }
          else {
            uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c054598)
                              (ar4 + DAT_8c054590._4_4_,iVar2,a6,a7);
            *(undefined4 *)(puVar8 + -300) = uVar1;
            if (*(int *)(puVar8 + -300) == 1) {
              *(undefined4 *)(DAT_8c05459c + ar4) = 0;
              *(undefined4 *)(puVar8 + DAT_8c0545a0 + -0x184) = 0;
              (*(code *)PTR_Vec3_dtor_8c0545a8)(puVar8 + DAT_8c0545a4 + -0x184,0xffffffff,a6,a7);
              return *(undefined4 *)(puVar8 + DAT_8c0545a0 + -0x184);
            }
          }
        }
        else {
          (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05444c)
                    (ar4 + DAT_8c054414._4_4_,iVar2,a6,a7);
        }
        break;
      case 3:
        uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c05460c)
                          (ar4 + DAT_8c054608,iVar2,a6,a7);
        *(undefined4 *)(puVar8 + -0x130) = uVar1;
        if (*(int *)(puVar8 + -0x130) == 1) {
          a7 = (undefined4 *)0x0;
          a6 = (undefined *)0xffffffff;
          uVar1 = 2;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c054614)(ar4 + DAT_8c054608,2,0xffffffff,0)
          ;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c054618)(ar4 + DAT_8c054608,uVar1,a6,a7);
          *(int *)(puVar8 + -0x174) = ar4;
          *(int *)(DAT_8c05461c + *(int *)(puVar8 + -0x174)) =
               *(int *)(DAT_8c05461c + *(int *)(puVar8 + -0x174)) + 1;
        }
        break;
      case 4:
        uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c054650)
                          (ar4 + DAT_8c05464c,iVar2,a6,a7);
        *(undefined4 *)(puVar8 + -0x134) = uVar1;
        if (*(int *)(puVar8 + -0x134) == 1) {
          *(undefined4 *)(DAT_8c054654 + ar4) = 0;
        }
      }
    }
    else if ((iVar2 == 3) || (iVar2 == 4)) {
      iVar2 = *(int *)(DAT_8c054674 + ar4);
      if (iVar2 == 0) {
        uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c054730)
                          (ar4 + DAT_8c05472c,uVar4,a6,a7);
        *(undefined4 *)(puVar8 + -0x138) = uVar1;
        if (*(int *)(puVar8 + -0x138) == 1) {
          iVar2 = *(int *)(DAT_8c054734 + ar4);
          if (iVar2 == 3) {
            (*(code *)PTR_FUN_8c054740)(ar4,3,a6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0x13c) = (int)(in_dr0 >> 0x20);
            }
            else {
              *(ulonglong *)(puVar8 + -0x13c) = in_dr0;
            }
            (*(code *)PTR_FUN_8c054740)(ar4,iVar2,a6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0x140) = (int)(in_dr0 >> 0x20);
            }
            else {
              *(ulonglong *)(puVar8 + -0x140) = in_dr0;
            }
            (*(code *)PTR_Vec3_ctor_xyz_8c054748)(puVar8 + DAT_8c054744 + -0x184,iVar2,a6,a7);
            *(undefined1 **)(puVar8 + -0x188) = puVar8 + DAT_8c05474c + -0x184;
            (*(code *)PTR_Vec3_add_8c054754)(ar7,puVar8 + DAT_8c054750 + -0x188,a6,a7);
            (*(code *)PTR_Vec3_assign_8c054758)(ar4 + 0x54,puVar8 + DAT_8c05474c + -0x184,a6,a7);
            (*(code *)PTR_Vec3_dtor_8c05475c)(puVar8 + DAT_8c05474c + -0x184,0xffffffff,a6,a7);
            (*(code *)PTR_Vec3_dtor_8c05475c)(puVar8 + DAT_8c054744 + -0x184,0xffffffff,a6,a7);
          }
          else {
            puVar5 = PTR_FUN_8c0547fc;
            (*(code *)PTR_FUN_8c0547fc)(ar4,PTR_FUN_8c0547fc,a6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0x144) = (int)(in_dr0 >> 0x20);
            }
            else {
              *(ulonglong *)(puVar8 + -0x144) = in_dr0;
            }
            (*(code *)PTR_FUN_8c0547fc)(ar4,puVar5,a6,a7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar8 + -0x148) = (int)(in_dr0 >> 0x20);
            }
            else {
              *(ulonglong *)(puVar8 + -0x148) = in_dr0;
            }
            (*(code *)PTR_Vec3_ctor_xyz_8c054804)
                      (puVar8 + DAT_8c054800 + -0x184,PTR_Vec3_ctor_xyz_8c054804,a6,a7);
            *(undefined1 **)(puVar8 + -0x188) = puVar8 + DAT_8c054808 + -0x184;
            (*(code *)PTR_Vec3_add_8c054810)(ar7,puVar8 + DAT_8c05480c + -0x188,a6,a7);
            (*(code *)PTR_Vec3_assign_8c054814)(ar4 + 0x54,puVar8 + DAT_8c054808 + -0x184,a6,a7);
            (*(code *)PTR_Vec3_dtor_8c054818)(puVar8 + DAT_8c054808 + -0x184,0xffffffff,a6,a7);
            (*(code *)PTR_Vec3_dtor_8c054818)(puVar8 + DAT_8c054800 + -0x184,0xffffffff,a6,a7);
          }
          *(int *)(puVar8 + -0x178) = ar4;
          *(int *)(DAT_8c05481c + *(int *)(puVar8 + -0x178)) =
               *(int *)(DAT_8c05481c + *(int *)(puVar8 + -0x178)) + 1;
        }
      }
      else if (iVar2 == 1) {
        *(undefined1 **)(puVar8 + -0x188) = puVar8 + DAT_8c0548d0 + -0x184;
        (*(code *)PTR_FUN_8c0548d4)(ar4 + 0x14,uVar4,a6,a7);
        *(undefined1 **)(puVar8 + -0x188) = puVar8 + DAT_8c0548d8 + -0x184;
        uVar1 = ar7;
        (*(code *)PTR_Vec3_sub_8c0548dc)(ar4 + 0x54,ar7,a6,a7);
        *(undefined1 **)(puVar8 + -0x188) = puVar8 + DAT_8c0548e0 + -0x184;
        (*(code *)PTR_FUN_8c0548d4)(puVar8 + DAT_8c0548e4 + -0x188,uVar1,a6,a7);
        (*(code *)PTR_FUN_8c0548e8)
                  (puVar8 + DAT_8c0548d0 + -0x184,puVar8 + DAT_8c0548e0 + -0x184,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar8 + -0x14c) = (int)(in_dr0 >> 0x20);
          in_fr15 = *(float *)(puVar8 + -0x14c);
        }
        else {
          *(ulonglong *)(puVar8 + -0x14c) = in_dr0;
        }
        (*(code *)PTR_Vec3_dtor_8c0548ec)(puVar8 + DAT_8c0548e0 + -0x184,0xffffffff,a6,a7);
        uVar1 = (undefined4)in_dr0;
        (*(code *)PTR_Vec3_dtor_8c0548ec)(puVar8 + DAT_8c0548d8 + -0x184,0xffffffff,a6,a7);
        iVar2 = -1;
        (*(code *)PTR_Vec3_dtor_8c0548ec)(puVar8 + DAT_8c0548d0 + -0x184,0xffffffff,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c0548f0,uVar1);
        }
        else {
          dVar10 = (double)CONCAT44(PTR_FUN_8c0548f4,DAT_8c0548f0);
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = (float)((ulonglong)dVar10 >> 0x20) < in_fr15;
        }
        else {
          bVar11 = dVar10 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar11) {
          a6 = (undefined *)(ar4 + 0x54);
          (*(code *)PTR_FUN_8c0548f4)(ar4,ar7,a6,a7);
          iVar2 = DAT_8c0548f8;
          *(int *)(puVar8 + -0x17c) = ar4;
          *(int *)(DAT_8c0548f8 + *(int *)(puVar8 + -0x17c)) =
               *(int *)(DAT_8c0548f8 + *(int *)(puVar8 + -0x17c)) + 1;
        }
        else {
          *(undefined4 *)(DAT_8c054918 + ar4) = 0;
          if (*(int *)(DAT_8c05491c + ar4) == 3) {
            *(undefined4 *)(DAT_8c054920 + ar4) = 4;
          }
          else {
            *(undefined4 *)(DAT_8c054944 + ar4) = 3;
          }
          *(undefined4 *)(DAT_8c054948 + ar4) = 0;
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c054950)(ar4 + DAT_8c05494c,iVar2,a6,a7);
      }
      else if (iVar2 == 2) {
        a6 = PTR_FUN_8c054984;
        uVar1 = (*(code *)PTR_FUN_8c054984)(ar4,uVar4,PTR_FUN_8c054984,a7);
        puVar5 = DAT_8c054988;
        *(undefined4 *)(puVar8 + -0x150) = uVar1;
        if (*(int *)(puVar8 + -0x150) == 0) {
          *(int *)(puVar8 + -0x180) = ar4;
          *(int *)(DAT_8c054988 + *(int *)(puVar8 + -0x180)) =
               *(int *)(DAT_8c054988 + *(int *)(puVar8 + -0x180)) + -1;
          a6 = puVar5;
        }
      }
    }
  }
  else {
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0549f8)(ar4 + DAT_8c0549f4,uVar4,a6,a7);
    *(undefined4 *)(puVar8 + -0x154) = uVar1;
    if (*(int *)(puVar8 + -0x154) == 1) {
      *(undefined4 *)(DAT_8c0549fc + ar4) = 0;
      uVar6 = 0;
      *(undefined4 *)(DAT_8c054a00 + ar4) = 2;
      *(undefined4 *)(DAT_8c054a04 + ar4) = 0;
    }
  }
  *(undefined4 *)(puVar8 + DAT_8c054a08 + -0x184) = uVar6;
  (*(code *)PTR_Vec3_dtor_8c054a10)(puVar8 + DAT_8c054a0c + -0x184,0xffffffff,a6,a7);
  return *(undefined4 *)(puVar8 + DAT_8c054a08 + -0x184);
}



/* FUN_8c054a14 @ 8c054a14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c054a14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double in_dr0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_14;
  
  uVar3 = 1;
  *(undefined4 *)(DAT_8c054b30 + ar4) = 0xffffffff;
  if (*(int *)(DAT_8c054b34 + ar4) == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x4e;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c054b40)
              (ar4 + DAT_8c054b38._4_4_,0x4e,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c054b44)(ar4 + DAT_8c054b38._4_4_,uVar2,ar6,ar7);
    *(undefined4 *)(DAT_8c054b48 + ar4) = 0;
    *(int *)(DAT_8c054b34 + ar4) = *(int *)(DAT_8c054b34 + ar4) + 1;
  }
  else {
    uVar2 = ar5;
    if (*(int *)(DAT_8c054b34 + ar4) != 1) {
      return 1;
    }
  }
  iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c054b4c)
                    (ar4 + DAT_8c054b38._4_4_,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c054b54)(ar4 + DAT_8c054b50,uVar2,ar6,ar7);
    uVar3 = 0;
    *(undefined4 *)(DAT_8c054b34 + ar4) = 0;
  }
  else {
    (*(code *)PTR_CAnimBody_GetCurFrame_8c054b58)(ar4 + DAT_8c054b38._4_4_,uVar2,ar6,ar7);
    uStack_14 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_14 = (double)CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c054b5c)
                      (ar4 + DAT_8c054b38._4_4_,0x4e,ar6,ar7);
    uVar4 = SUB84(in_dr0,0);
    uVar2 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c054b60)(iVar1 + -1,6,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uStack_14 = (double)CONCAT44((undefined4)uStack_14,uVar4);
    }
    if (in_FPSCR_PR == '\0') {
      iVar1 = (int)(float)((ulonglong)uStack_14 >> 0x20);
    }
    else {
      iVar1 = (int)uStack_14;
    }
    iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c054b64)(iVar1,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = (*(code *)PTR_rand_range_8c054b68)(ar4,0x19,0x1b,ar7);
      (*(code *)PTR_FUN_8c054b70)(ar4,uVar2,ar5,*(undefined4 *)(DAT_8c054b6c + ar4));
      iVar1 = *(int *)(DAT_8c054b48 + ar4);
      *(int *)(DAT_8c054b48 + ar4) = iVar1 + 1;
      *(int *)(DAT_8c054b30 + ar4) = iVar1;
    }
  }
  return uVar3;
}



/* FUN_8c054b74 @ 8c054b74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c054b74(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  undefined4 in_fr1;
  double dVar5;
  double in_dr14;
  double dVar6;
  undefined8 in_xd14;
  bool bVar7;
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
  *(undefined4 *)((int)puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar4 + -0x18) = in_PR;
  uVar3 = 1;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
    dVar5 = (double)CONCAT44(DAT_8c054d28,in_fr1);
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c054d2c,DAT_8c054d28);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                             SUB84(in_dr14,0) * (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    dVar6 = in_dr14 * dVar5;
  }
  if (*(int *)(DAT_8c054d2c + ar4) == 0) {
LAB_8c054ba8:
    switch(*(undefined4 *)(DAT_8c054d30 + ar4)) {
    case 0:
      if (ar7 == 1) {
        *(int *)((int)puVar4 + -0x30) = ar4;
        *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x30)) =
             *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x30)) + 1;
      }
      else {
        *(int *)((int)puVar4 + -0x34) = ar4;
        *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x34)) =
             *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x34)) + 2;
      }
      goto LAB_8c054ba8;
    case 1:
      uVar1 = (*(code *)PTR_FUN_8c054d34)(ar4,ar5,ar6,ar7);
      *(undefined4 *)((int)puVar4 + -0x1c) = uVar1;
      if (*(int *)((int)puVar4 + -0x1c) == 0) {
        *(int *)((int)puVar4 + -0x38) = ar4;
        *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x38)) =
             *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x38)) + 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      break;
    case 2:
      uVar3 = (*(code *)PTR_FUN_8c054d3c)(ar4,ar5,ar4 + DAT_8c054d38,ar7);
      *(undefined4 *)((int)puVar4 + -0x20) = uVar3;
      if (*(int *)((int)puVar4 + -0x20) != 0) {
        return 1;
      }
      *(undefined4 *)(DAT_8c054d40 + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)((int)puVar4 + -0x3c) = ar4;
      *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x3c)) =
           *(int *)(DAT_8c054d30 + *(int *)((int)puVar4 + -0x3c)) + 1;
      return 1;
    case 3:
      uVar3 = ar6;
      uVar1 = (*(code *)PTR_FUN_8c054d48)(ar4,ar5,ar6,ar7);
      *(undefined4 *)((int)puVar4 + -0x24) = uVar1;
      if (*(int *)((int)puVar4 + -0x24) == 0) {
        *(undefined4 *)(DAT_8c054d30 + ar4) = 4;
      }
      else {
        (*(code *)PTR_FUN_8c054d4c)(ar5,ar6,uVar3,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar4 + -0x28) = (int)((ulonglong)dVar5 >> 0x20);
          dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x28),SUB84(dVar5,0));
        }
        else {
          *(double *)((int)puVar4 + -0x28) = dVar5;
          dVar5 = *(double *)((int)puVar4 + -0x28);
        }
        if (in_FPSCR_PR == '\0') {
          bVar7 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar6,0);
        }
        else {
          bVar7 = dVar5 < dVar6;
        }
        if ((bVar7) && (*(int *)(DAT_8c054d50 + ar4) == 1)) {
          *(undefined4 *)(DAT_8c054d30 + ar4) = 4;
        }
      }
      if (*(int *)(DAT_8c054d54 + ar4) != 1) {
        return 1;
      }
      *(undefined4 *)(DAT_8c054d30 + ar4) = 4;
      return 1;
    case 4:
      uVar1 = ar6;
      uVar2 = (*(code *)PTR_FUN_8c054d34)(ar4,ar5,ar6,ar7);
      *(undefined4 *)((int)puVar4 + -0x2c) = uVar2;
      if (*(int *)((int)puVar4 + -0x2c) == 0) {
        uVar3 = 0;
        (*(code *)PTR_Vec3_assign_8c054d5c)(ar4 + DAT_8c054d58,ar6,uVar1,ar7);
        *(undefined4 *)(DAT_8c054d30 + ar4) = 0;
        *(undefined4 *)(DAT_8c054d60 + ar4) = 0;
        *(undefined4 *)(DAT_8c054d64 + ar4) = 2;
        *(undefined4 *)(DAT_8c054d68 + ar4) = 0;
      }
    default:
      break;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c054d6c @ 8c054d6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c054d6c(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  int a6;
  int a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  undefined4 in_fr1;
  double dVar5;
  double in_dr14;
  double dVar6;
  undefined8 in_xd14;
  bool bVar7;
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
  *(undefined4 *)((int)puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar4 + -0x18) = in_PR;
  uVar3 = 1;
  *(undefined4 *)((int)puVar4 + -0x2c) = 1;
  a5 = ar6;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_copy_8c054f28)((undefined1 *)((int)puVar4 + -0x28),ar6,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
    dVar5 = (double)CONCAT44(DAT_8c054f2c,in_fr1);
  }
  else {
    dVar5 = (double)CONCAT44(DAT_8c054f30,DAT_8c054f2c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                             SUB84(in_dr14,0) * (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    dVar6 = in_dr14 * dVar5;
  }
  iVar1 = *(int *)(DAT_8c054f30 + ar4);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c054f38)(ar4 + DAT_8c054f34,a5,a6,a7);
    if (*(int *)(DAT_8c054f3c + ar4) < 3) {
      *(int *)((int)puVar4 + -0x40) = ar4;
      *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x40)) =
           *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x40)) + 2;
    }
    else if (ar7 == 1) {
      *(int *)((int)puVar4 + -0x44) = ar4;
      *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x44)) =
           *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x44)) + 1;
    }
    else {
      *(int *)((int)puVar4 + -0x48) = ar4;
      *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x48)) =
           *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x48)) + 2;
    }
  }
  else if (iVar1 == 1) {
    a6 = ar4 + DAT_8c054f40;
    uVar2 = (*(code *)PTR_FUN_8c054f44)(ar4,ar5,a6,ar7);
    *(undefined4 *)((int)puVar4 + -0x34) = uVar2;
    if (*(int *)((int)puVar4 + -0x34) == 0) {
      *(undefined4 *)(DAT_8c054f48 + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)((int)puVar4 + -0x4c) = ar4;
      *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x4c)) =
           *(int *)(DAT_8c054f30 + *(int *)((int)puVar4 + -0x4c)) + 1;
    }
    a7 = ar7;
    if ((*(int *)(DAT_8c054f4c + ar4) == 2) && (*(int *)(DAT_8c054f50 + ar4) == 1)) {
      *(undefined4 *)(DAT_8c054f30 + ar4) = 3;
    }
  }
  else if (iVar1 == 2) {
    a6 = ar6;
    uVar2 = (*(code *)PTR_pure_virtual_stub_8c054f5c)(ar4,ar5,ar6,a7);
    *(undefined4 *)((int)puVar4 + -0x38) = uVar2;
    if (*(int *)((int)puVar4 + -0x38) == 0) {
      *(undefined4 *)(DAT_8c054f30 + ar4) = 3;
    }
    else {
      (*(code *)PTR_FUN_8c054f60)(ar5,ar6,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar4 + -0x3c) = (int)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0x3c),SUB84(dVar5,0));
      }
      else {
        *(double *)((int)puVar4 + -0x3c) = dVar5;
        dVar5 = *(double *)((int)puVar4 + -0x3c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar7 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar6,0);
      }
      else {
        bVar7 = dVar5 < dVar6;
      }
      if ((bVar7) && (*(int *)(DAT_8c054f64 + ar4) == 1)) {
        *(undefined4 *)(DAT_8c054f30 + ar4) = 3;
      }
    }
    if (*(int *)(DAT_8c054f50 + ar4) == 1) {
      *(undefined4 *)(DAT_8c054f30 + ar4) = 3;
    }
  }
  else if (iVar1 == 3) {
    uVar3 = 0;
    *(undefined4 *)(DAT_8c054f30 + ar4) = 0;
    (*(code *)PTR_Vec3_assign_8c054f6c)(ar4 + DAT_8c054f68,ar6,a6,a7);
    *(undefined4 *)(DAT_8c054f70 + ar4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(DAT_8c054f74 + ar4) = 0;
  }
  *(undefined4 *)((int)puVar4 + -0x30) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c054f78)((undefined1 *)((int)puVar4 + -0x28),0xffffffff,a6,a7);
  return *(undefined4 *)((int)puVar4 + -0x30);
}



/* FUN_8c054f7c @ 8c054f7c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c054f7c(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined *a5;
  undefined4 uVar2;
  undefined4 unaff_r11;
  undefined4 uVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar4;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 in_dr0;
  ulonglong uVar7;
  double dVar8;
  float in_fr15;
  undefined4 in_fr14;
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
  *(undefined4 *)(puVar5 + -0x14) = in_PR;
  *(int *)(puVar5 + -0xd4) = ar6;
  iVar4 = *(int *)(puVar5 + DAT_8c054fe8 + -0xd4);
  uVar3 = 1;
  uVar2 = ar5;
  (*(code *)PTR_Vec3_ctor_xyz_8c054ff8)(puVar5 + DAT_8c054ff4 + -0xd4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)DAT_8c054ffc;
  }
  (*(code *)PTR_Vec3_ctor_zero_8c055004)(puVar5 + DAT_8c054ffc._4_4_ + -0xd4,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c05500c)(puVar5 + DAT_8c055008 + -0xd4,uVar2,ar6,ar7);
  iVar1 = *(int *)(DAT_8c055010 + ar4);
  if (iVar1 == 0) {
    if ((iVar4 == 0) || (iVar4 == 2)) {
      *(undefined4 *)(puVar5 + -0xb4) = 0;
      (*(code *)PTR_free_if_nonnull_wrap_102790_8c055050)
                (puVar5 + DAT_8c05504c + -0xd4,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c055058)(puVar5 + DAT_8c055054 + -0xd4,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c055058)(puVar5 + DAT_8c05505c + -0xd4,0xffffffff,ar6,ar7);
      return *(undefined4 *)(puVar5 + -0xb4);
    }
    (*(code *)PTR_FUN_8c055150)(ar4,7,ar5,*(undefined4 *)(DAT_8c05514c + ar4));
    uVar6 = (undefined4)in_dr0;
    ar7 = 0;
    ar6 = -1;
    uVar2 = 5;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05515c)(ar4 + DAT_8c055154._4_4_,5,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c055160)(ar4 + DAT_8c055154._4_4_,uVar2,ar6,ar7);
    *(undefined1 **)(puVar5 + -0xd8) = puVar5 + DAT_8c055164 + -0xd4;
    (*(code *)PTR_Vec3_sub_8c055168)(*(undefined4 *)(puVar5 + -0xd4),ar5,ar6,ar7);
    *(undefined1 **)(puVar5 + -0xd8) = puVar5 + -0x60;
    (*(code *)PTR_Vec3_normalize_8c055170)(puVar5 + DAT_8c05516c + -0xd8,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c055178)(ar4 + DAT_8c055174,puVar5 + -0x60,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05517c)(puVar5 + -0x60,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05517c)(puVar5 + DAT_8c055164 + -0xd4,0xffffffff,ar6,ar7);
    a5 = PTR_DAT_8c055180;
    (*(code *)PTR_FUN_8c055184)(ar4 + DAT_8c055174,PTR_DAT_8c055180,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar2 = (undefined4)*(ulonglong *)(puVar5 + DAT_8c05518c + -0xd4);
      uVar7 = CONCAT44(uVar2,uVar6);
      *(undefined4 *)(ar4 + DAT_8c055188) = uVar2;
    }
    else {
      uVar7 = *(ulonglong *)(puVar5 + DAT_8c05518c + -0xd4);
      *(ulonglong *)(ar4 + DAT_8c055188) = uVar7;
    }
    (*(code *)PTR_FUN_8c055190)(ar4,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c055194) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c055194) = uVar7 & 0xffffffff;
    }
    *(undefined4 *)(DAT_8c055198 + ar4) = 1;
    *(undefined4 *)(DAT_8c05519c + ar4) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar7 & 0xffffffff;
    }
    (*(code *)PTR_Vec3_assign_8c055178)(ar4 + DAT_8c0551a0,ar4 + DAT_8c055174,ar6,ar7);
    *(int *)(puVar5 + -0xc4) = ar4;
    *(int *)(DAT_8c0551a4 + *(int *)(puVar5 + -0xc4)) =
         *(int *)(DAT_8c0551a4 + *(int *)(puVar5 + -0xc4)) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = ar4 + DAT_8c055270;
    (*(code *)PTR_Vec3_assign_8c055278)(ar4 + DAT_8c055274,iVar1,ar6,ar7);
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(DAT_8c05527c + ar4) = 1;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c055284)(ar4 + DAT_8c055280,iVar1,ar6,ar7);
    *(int *)(puVar5 + -200) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar5 + -200) + DAT_8c055288),uVar2);
    }
    else {
      dVar8 = *(double *)(*(int *)(puVar5 + -200) + DAT_8c055288);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - in_fr15,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar5 + -200) + DAT_8c055288) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(*(int *)(puVar5 + -200) + DAT_8c055288) = dVar8;
    }
    *(undefined1 **)(puVar5 + -0xd8) = puVar5 + -0x70;
    (*(code *)PTR_Vec3_normalize_8c05528c)(ar4 + DAT_8c055274,iVar1,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c055278)(ar4 + 0x14,puVar5 + -0x70,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c055290)(puVar5 + -0x70,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c055278)(ar4 + DAT_8c055294,ar4 + 0x14,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c055278)(puVar5 + DAT_8c055298 + -0xd4,ar4 + DAT_8c055274,ar6,ar7);
    if ((iVar4 == 0) || (iVar4 == 2)) {
      *(int *)(puVar5 + -0xcc) = ar4;
      *(int *)(DAT_8c05529c + *(int *)(puVar5 + -0xcc)) =
           *(int *)(DAT_8c05529c + *(int *)(puVar5 + -0xcc)) + 1;
      (*(code *)PTR_FUN_8c0552a4)(ar4 + DAT_8c055274,PTR_DAT_8c0552a0,ar6,ar7);
    }
    (*(code *)PTR_Vec3_assign_8c055278)(ar4 + DAT_8c055270,ar4 + DAT_8c055274,ar6,ar7);
  }
  else {
    if (iVar1 == 2) {
      (*(code *)PTR_FUN_8c055430)(ar4,uVar2,ar6,ar7);
      (*(code *)PTR_Vec3_length_sq_8c055438)(ar4 + DAT_8c055434,uVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xbc) = (int)((ulonglong)in_dr0 >> 0x20);
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(puVar5 + -0xbc);
      }
      else {
        *(undefined8 *)(puVar5 + -0xbc) = in_dr0;
        *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(puVar5 + -0xbc);
      }
      *(undefined1 **)(puVar5 + -0xd8) = puVar5 + -0x80;
      (*(code *)PTR_Vec3_normalize_8c05543c)(ar4 + DAT_8c055434,uVar2,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c055440)(ar4 + 0x14,puVar5 + -0x80,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c055444)(puVar5 + -0x80,0xffffffff,ar6,ar7);
      (*(code *)PTR_vec3_clear_8c055448)(ar4 + DAT_8c055434,uVar2,ar6,ar7);
      (*(code *)PTR_vec3_clear_8c055448)(ar4 + DAT_8c05544c,uVar2,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c055440)(ar4 + DAT_8c055450,ar4 + 0x14,ar6,ar7);
      *(undefined1 **)(puVar5 + -0xd8) = puVar5 + -0x90;
      (*(code *)PTR_Vec3_scale_8c055458)(puVar5 + DAT_8c055454 + -0xd8,ar4 + 0x48,ar6,ar7);
      *(undefined1 **)(puVar5 + -0xd8) = puVar5 + -0xa0;
      (*(code *)PTR_Vec3_scale_8c055458)(puVar5 + -0x90,PTR_DAT_8c05545c,ar6,ar7);
      *(undefined1 **)(puVar5 + -0xd8) = puVar5 + -0xb0;
      (*(code *)PTR_Vec3_add_8c055460)(puVar5 + -0xa0,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c055440)(ar4 + 0x54,puVar5 + -0xb0,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c055444)(puVar5 + -0xb0,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c055444)(puVar5 + -0xa0,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c055444)(puVar5 + -0x90,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 1;
      *(int *)(puVar5 + -0xd0) = ar4;
      *(int *)(DAT_8c055464 + *(int *)(puVar5 + -0xd0)) =
           *(int *)(DAT_8c055464 + *(int *)(puVar5 + -0xd0)) + 1;
    }
    else if (iVar1 != 3) goto LAB_8c0553ee;
    ar6 = ar4 + 0x54;
    uVar2 = (*(code *)PTR_pure_virtual_stub_8c055478)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xc0) = uVar2;
    if (*(int *)(puVar5 + -0xc0) == 0) {
      uVar3 = 0;
      *(undefined4 *)(DAT_8c055464 + ar4) = 0;
      *(undefined4 *)(DAT_8c05547c + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 1;
    }
  }
LAB_8c0553ee:
  *(undefined4 *)(puVar5 + -0xb8) = uVar3;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c055484)
            (puVar5 + DAT_8c055480 + -0xd4,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c055444)(puVar5 + DAT_8c055488 + -0xd4,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c055444)(puVar5 + DAT_8c05548c + -0xd4,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar5 + -0xb8);
}



/* FUN_8c055490 @ 8c055490 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c055490(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a5;
  undefined4 uVar2;
  undefined *a6;
  undefined4 uVar3;
  uint in_fr1;
  ulonglong uVar4;
  undefined8 uVar5;
  char in_FPSCR_SZ;
  undefined *apuStack_a0 [2];
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  uVar3 = 1;
  uVar2 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0556d4)(auStack_20,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0556d4)(auStack_30,uVar2,ar6,ar7);
  if (*(int *)(DAT_8c0556d8 + ar4) == 0) {
    uVar4 = (ulonglong)in_fr1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar4;
    }
    iVar1 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c0556dc)(auStack_30,iVar1,ar6,ar7);
    uVar2 = (undefined4)uVar4;
    (*(code *)PTR_FUN_8c0556e4)(ar4 + 0x14,iVar1,ar6,ar7);
    apuStack_a0[1] = PTR_DAT_8c0556e8;
    apuStack_a0[0] = auStack_40;
    ar7 = *(undefined4 *)((int)apuStack_a0 + DAT_8c0556ec);
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(DAT_8c0556f8,uVar2);
    }
    else {
      uVar4 = CONCAT44(DAT_8c0556fc,DAT_8c0556f8);
    }
    a6 = PTR_DAT_8c0556f0;
    (*(code *)PTR_FUN_8c055700)(ar4,ar5,PTR_DAT_8c0556f0,ar7);
    (*(code *)PTR_Vec3_assign_8c0556dc)(ar4 + 0x54,auStack_40,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c055704)(auStack_40,0xffffffff,a6,ar7);
    a5 = auStack_30;
    (*(code *)PTR_Vec3_assign_8c0556dc)(ar4 + 0x14,a5,a6,ar7);
    (*(code *)PTR_FUN_8c05570c)(ar4,a5,a6,ar7);
    uVar2 = (undefined4)(uVar4 >> 0x20);
    uStack_8c = uVar2;
    if (in_FPSCR_SZ != '\0') {
      uStack_8c = (undefined4)uVar4;
      uStack_88 = uVar2;
    }
    iVar1 = ar4 + 0x54;
    (*(code *)PTR_FUN_8c055714)(ar4,ar5,iVar1,ar7);
    *(undefined4 *)(ar4 + 0x40) = 5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c055718) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c055718) = uVar4 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c05571c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c05571c) = uVar4 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(DAT_8c055724,(int)uVar4);
      *(undefined4 *)(ar4 + DAT_8c055720) = DAT_8c055724;
    }
    else {
      uVar5 = CONCAT44(PTR_Vec3_sub_8c055728,DAT_8c055724);
      *(undefined8 *)(ar4 + DAT_8c055720) = uVar5;
    }
    apuStack_a0[1] = auStack_50;
    uVar2 = ar5;
    (*(code *)PTR_Vec3_sub_8c055728)(ar4 + 0x54,ar5,iVar1,ar7);
    apuStack_a0[1] = auStack_60;
    (*(code *)PTR_Vec3_normalize_8c05572c)(auStack_50,uVar2,iVar1,ar7);
    (*(code *)PTR_Vec3_assign_8c0556dc)(auStack_20,auStack_60,iVar1,ar7);
    (*(code *)PTR_Vec3_dtor_8c055704)(auStack_60,0xffffffff,iVar1,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c055704)(auStack_50,0xffffffff,iVar1,ar7);
    apuStack_a0[1] = auStack_70;
    (*(code *)PTR_FUN_8c055730)(ar4 + 0x14,uVar2,iVar1,ar7);
    apuStack_a0[1] = (undefined *)((int)&uStack_84 + 4);
    (*(code *)PTR_FUN_8c055730)(auStack_20,uVar2,iVar1,ar7);
    (*(code *)PTR_FUN_8c055734)(auStack_70,(int)&uStack_84 + 4,iVar1,ar7);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_84 = CONCAT44(uStack_84._4_4_,uVar2);
      uStack_90 = uVar2;
    }
    else {
      uStack_90 = (undefined4)uVar5;
      uStack_8c = uVar2;
      uStack_84 = uVar5;
    }
    (*(code *)PTR_Vec3_dtor_8c055704)((int)&uStack_84 + 4,0xffffffff,iVar1,ar7);
    (*(code *)PTR_Vec3_dtor_8c055704)(auStack_70,0xffffffff,iVar1,ar7);
    *(int *)(DAT_8c0556d8 + ar4) = *(int *)(DAT_8c0556d8 + ar4) + 1;
    iStack_98 = ar4;
    if (*(int *)(DAT_8c055738 + ar4) == 0) {
      *(undefined4 *)(DAT_8c05573c + ar4) = 2;
    }
  }
  else if (*(int *)(DAT_8c0556d8 + ar4) != 1) goto LAB_8c0556a8;
  ar6 = ar4 + 0x54;
  iStack_94 = (*(code *)PTR_pure_virtual_stub_8c055748)(ar4,ar5,ar6,ar7);
  if (iStack_94 == 0) {
    uVar3 = 0;
    *(undefined4 *)(DAT_8c0556d8 + ar4) = 0;
    *(undefined4 *)(DAT_8c05574c + ar4) = 0;
  }
LAB_8c0556a8:
  uStack_88 = uVar3;
  (*(code *)PTR_Vec3_dtor_8c055704)(auStack_30,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c055704)(auStack_20,0xffffffff,ar6,ar7);
  return uStack_88;
}



/* FUN_8c055750 @ 8c055750 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c055750(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a7;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  uint uVar5;
  float fVar6;
  ulonglong in_dr0;
  ulonglong uVar7;
  double dVar8;
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
  *(int *)(puVar4 + -0xfc) = ar6;
  uVar3 = 1;
  uVar2 = ar5;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c055aac)(puVar4 + DAT_8c055aa8 + -0xfc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c055ab8)(puVar4 + DAT_8c055ab4 + -0xfc,uVar2,ar6,a7);
  iVar1 = *(int *)(DAT_8c055abc + ar4);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_FUN_8c055ac0)(ar4,ar5,ar6,a7);
    *(undefined4 *)(puVar4 + -0xd8) = uVar2;
    if (*(int *)(puVar4 + -0xd8) == 0) {
      *(int *)(puVar4 + -0xec) = ar4;
      *(int *)(DAT_8c055abc + *(int *)(puVar4 + -0xec)) =
           *(int *)(DAT_8c055abc + *(int *)(puVar4 + -0xec)) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = in_dr0 & 0xffffffff;
      }
      *(undefined1 **)(puVar4 + -0x100) = puVar4 + DAT_8c055ac4 + -0xfc;
      uVar2 = DAT_8c055acc;
      if (in_FPSCR_SZ == '\0') {
        uVar2 = (int)in_dr0;
      }
      (*(code *)PTR_FUN_8c055ad4)(ar4,*(undefined4 *)(puVar4 + -0xfc),ar6,a7);
      *(undefined1 **)(puVar4 + -0x100) = puVar4 + DAT_8c055ad8 + -0xfc;
      (*(code *)PTR_Vec3_add_8c055ae0)(puVar4 + DAT_8c055adc + -0x100,ar5,ar6,a7);
      (*(code *)PTR_Vec3_assign_8c055ae4)(ar4 + 0x54,puVar4 + DAT_8c055ad8 + -0xfc,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + DAT_8c055ad8 + -0xfc,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + DAT_8c055ac4 + -0xfc,0xffffffff,ar6,a7);
      *(undefined **)(puVar4 + -0x100) = PTR_DAT_8c055aec;
      a7 = *(int *)(puVar4 + DAT_8c055af0 + -0x100);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c055af4,uVar2);
      }
      else {
        in_dr0 = CONCAT44(PTR_FUN_8c055af8,DAT_8c055af4);
      }
      (*(code *)PTR_FUN_8c055af8)(ar4,ar4 + 0x54,ar7,a7);
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined1 **)(puVar4 + -0x100) = puVar4 + DAT_8c055afc + -0xfc;
      uVar2 = ar5;
      (*(code *)PTR_Vec3_sub_8c055b00)(ar4 + 0x54,ar5,ar7,a7);
      *(undefined1 **)(puVar4 + -0x100) = puVar4 + DAT_8c055b04 + -0xfc;
      (*(code *)PTR_Vec3_normalize_8c055b0c)(puVar4 + DAT_8c055b08 + -0x100,uVar2,ar7,a7);
      (*(code *)PTR_Vec3_assign_8c055ae4)
                (puVar4 + DAT_8c055aa8 + -0xfc,puVar4 + DAT_8c055b04 + -0xfc,ar7,a7);
      (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + DAT_8c055b04 + -0xfc,0xffffffff,ar7,a7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + DAT_8c055afc + -0xfc,0xffffffff,ar7,a7);
      *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0x80;
      (*(code *)PTR_FUN_8c055b10)(ar4 + 0x14,uVar2,ar7,a7);
      *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0x90;
      (*(code *)PTR_FUN_8c055b10)(puVar4 + DAT_8c055b14 + -0x100,uVar2,ar7,a7);
      (*(code *)PTR_FUN_8c055b18)(puVar4 + -0x80,puVar4 + -0x90,ar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar4 + -0xdc) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(puVar4 + -0xdc) = in_dr0;
      }
      (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + -0x90,0xffffffff,ar7,a7);
      (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + -0x80,0xffffffff,ar7,a7);
      *(int *)(puVar4 + -0xf0) = ar4;
      *(int *)(DAT_8c055abc + *(int *)(puVar4 + -0xf0)) =
           *(int *)(DAT_8c055abc + *(int *)(puVar4 + -0xf0)) + 1;
    }
    else {
      ar7 = ar6;
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          *(int *)(puVar4 + -0xf8) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(DAT_8c055b40,*(undefined4 *)(*(int *)(puVar4 + -0xf8) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0xf8) + 0x28);
            dVar8 = (double)CONCAT44(PTR_s_CAnimBody_AdvanceFrame_033ba0_8c055b44,DAT_8c055b40);
          }
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar8 * dVar8,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)(puVar4 + -0xf8) + 0x28) = fVar6;
          }
          else {
            *(undefined8 *)(*(int *)(puVar4 + -0xf8) + 0x28) = in_xd0;
          }
          uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c055b44)
                            (ar4 + DAT_8c055b30,uVar2,ar6,a7);
          *(undefined4 *)(puVar4 + -0xe8) = uVar2;
          if (*(int *)(puVar4 + -0xe8) == 1) {
            *(undefined4 *)(DAT_8c055b48 + ar4) = 0;
            uVar3 = 0;
            *(undefined4 *)(DAT_8c055abc + ar4) = 0;
          }
        }
        goto LAB_8c055a78;
      }
    }
    *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0xa0;
    uVar2 = ar5;
    (*(code *)PTR_Vec3_sub_8c055b00)(ar4 + 0x54,ar5,ar7,a7);
    *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0xb0;
    (*(code *)PTR_Vec3_normalize_8c055b0c)(puVar4 + -0xa0,uVar2,ar7,a7);
    (*(code *)PTR_Vec3_assign_8c055ae4)(puVar4 + DAT_8c055aa8 + -0xfc,puVar4 + -0xb0,ar7,a7);
    (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + -0xb0,0xffffffff,ar7,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + -0xa0,0xffffffff,ar7,a7);
    *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0xc0;
    (*(code *)PTR_FUN_8c055b10)(ar4 + 0x14,uVar2,ar7,a7);
    *(undefined1 **)(puVar4 + -0x100) = puVar4 + -0xd0;
    (*(code *)PTR_FUN_8c055b10)(puVar4 + DAT_8c055b14 + -0x100,uVar2,ar7,a7);
    (*(code *)PTR_FUN_8c055b18)(puVar4 + -0xc0,puVar4 + -0xd0,ar7,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0xe0) = (int)(in_dr0 >> 0x20);
    }
    else {
      *(ulonglong *)(puVar4 + -0xe0) = in_dr0;
    }
    (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + -0xd0,0xffffffff,ar7,a7);
    uVar5 = (uint)in_dr0;
    (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + -0xc0,0xffffffff,ar7,a7);
    uVar7 = (ulonglong)uVar5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x58) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x58) = uVar7;
    }
    ar6 = ar4 + 0x54;
    uVar2 = (*(code *)PTR_FUN_8c055b24)(ar4,ar5,ar6,a7);
    *(undefined4 *)(puVar4 + -0xe4) = uVar2;
    if (*(int *)(puVar4 + -0xe4) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c055b28) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c055b28) = CONCAT44(0x3f800000,(int)uVar7);
      }
      a7 = 0;
      ar6 = -1;
      uVar2 = 0x1a;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c055b34)(ar4 + DAT_8c055b30,0x1a,0xffffffff,0);
      *(undefined4 *)(DAT_8c055b38 + ar4) = 0;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c055b3c)(ar4 + DAT_8c055b30,uVar2,ar6,a7);
      *(int *)(puVar4 + -0xf4) = ar4;
      *(int *)(DAT_8c055abc + *(int *)(puVar4 + -0xf4)) =
           *(int *)(DAT_8c055abc + *(int *)(puVar4 + -0xf4)) + 1;
    }
  }
LAB_8c055a78:
  *(undefined4 *)(puVar4 + -0xd4) = uVar3;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c055b4c)
            (puVar4 + DAT_8c055ab4 + -0xfc,0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_dtor_8c055ae8)(puVar4 + DAT_8c055aa8 + -0xfc,0xffffffff,ar6,a7);
  return *(undefined4 *)(puVar4 + -0xd4);
}



/* FUN_8c055b50 @ 8c055b50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c055b50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c055be8)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c055bec + ar4) = 0;
  *(undefined4 *)(DAT_8c055bf0 + ar4) = 0;
  (*(code *)PTR_FUN_8c055bf8)(ar4 + DAT_8c055bf4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c055bfc + ar4) = 0;
  *(undefined4 *)(DAT_8c055c00 + ar4) = 0;
  *(undefined4 *)(DAT_8c055c04 + ar4) = 0;
  *(undefined4 *)(DAT_8c055c08 + ar4) = 0;
  *(undefined4 *)(DAT_8c055c0c + ar4) = 0;
  *(undefined4 *)(DAT_8c055c10 + ar4) = 0;
  *(undefined4 *)(DAT_8c055c14 + ar4) = 0;
  *(undefined4 *)(DAT_8c055c18 + ar4) = 0;
  *(undefined4 *)(DAT_8c055c1c + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)extraout_fr1;
  }
  (*(code *)PTR_FUN_8c055c24)(ar4 + DAT_8c055c20,ar5,ar6,ar7);
  if (*(int *)(DAT_8c055c28 + ar4) == 1) {
    *(undefined4 *)(DAT_8c055c2c + ar4) = 0;
    *(undefined4 *)(DAT_8c055c30 + ar4) = 1;
  }
  iVar1 = DAT_8c055c34;
  *(undefined4 *)(DAT_8c055c34 + ar4) = 0;
  return iVar1;
}



/* FUN_8c055c38 @ 8c055c38 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0561ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c055c38(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *a5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 unaff_r13;
  undefined4 uVar8;
  undefined4 unaff_r14;
  undefined1 *puVar9;
  float fVar10;
  uint uVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 in_fr3;
  double dVar15;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar9 = auStack_4;
  }
  else {
    puVar9 = auStack_8;
  }
  *(undefined4 *)(puVar9 + -4) = unaff_r14;
  *(undefined4 *)(puVar9 + -8) = unaff_r13;
  *(undefined4 *)(puVar9 + -0xc) = 1;
  *(undefined4 *)(puVar9 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar9 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar9 + -0x18) = in_PR;
  *(undefined1 **)(puVar9 + -0x16c) = ar6;
  *(undefined1 **)(puVar9 + -0x168) = ar7;
  uVar8 = 1;
  (*(code *)PTR_Vec3_ctor_zero_8c055ce4)(puVar9 + DAT_8c055ce0 + -0x16c,1,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c055ce4)
            (puVar9 + DAT_8c055ce8 + -0x16c,PTR_Vec3_ctor_zero_8c055ce4,ar6,ar7);
  uVar4 = *(undefined4 *)(puVar9 + -0x16c);
  (*(code *)PTR_Vec3_ctor_copy_8c055cf0)(puVar9 + DAT_8c055cec + -0x16c,uVar4,ar6,ar7);
  uVar4 = (*(code *)PTR_get_field_24_026024_8c055cf8)
                    (*(undefined4 *)(DAT_8c055cf4 + ar4),uVar4,ar6,ar7);
  *(undefined4 *)(puVar9 + -0x124) = uVar4;
  if (*(int *)(puVar9 + -0x124) != 0) {
    *(undefined4 *)(DAT_8c055cfc + ar4) = 0;
    *(undefined4 *)(DAT_8c055d00 + ar4) = 2;
    *(undefined4 *)(DAT_8c055d04 + ar4) = 1;
    *(undefined4 *)(puVar9 + -0x114) = 0;
    (*(code *)PTR_Vec3_dtor_8c055d08)(puVar9 + DAT_8c055cec + -0x16c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c055d08)(puVar9 + DAT_8c055ce8 + -0x16c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c055d08)(puVar9 + DAT_8c055ce0 + -0x16c,0xffffffff,ar6,ar7);
    return *(undefined4 *)(puVar9 + -0x114);
  }
  (*(code *)PTR_FUN_8c055d40)(ar4,PTR_FUN_8c055d40,ar6,ar7);
  if (*(int *)(DAT_8c055d44 + ar4) == 3) {
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c055d48,*(undefined4 *)(puVar9 + DAT_8c055d44 + -0x16c));
    }
    else {
      in_xd0 = *(undefined8 *)(puVar9 + DAT_8c055d44 + -0x16c);
      dVar12 = (double)CONCAT44(DAT_8c055d4c,DAT_8c055d48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar12 - dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + DAT_8c055d44 + -0x16c) = fVar10;
      dVar12 = (double)CONCAT44(DAT_8c055d50,*(undefined4 *)(puVar9 + DAT_8c055d4c + -0x16c));
    }
    else {
      *(undefined8 *)(puVar9 + DAT_8c055d44 + -0x16c) = in_xd0;
      in_xd0 = *(undefined8 *)(puVar9 + DAT_8c055d4c + -0x16c);
      dVar12 = (double)CONCAT44(uRam8c055d54,DAT_8c055d50);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = (float)((ulonglong)dVar12 >> 0x20);
      dVar12 = (double)CONCAT44(fVar10,SUB84(dVar12,0) + fVar10);
    }
    else {
      dVar12 = dVar12 + dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + DAT_8c055d4c + -0x16c) = SUB84(dVar12,0);
    }
    else {
      *(undefined8 *)(puVar9 + DAT_8c055d4c + -0x16c) = in_xd0;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c055d94,*(undefined4 *)(puVar9 + DAT_8c055d90 + -0x16c));
    }
    else {
      in_xd0 = *(undefined8 *)(puVar9 + DAT_8c055d90 + -0x16c);
      dVar12 = (double)CONCAT44(DAT_8c055d98,DAT_8c055d94);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar12 - dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar9 + DAT_8c055d90 + -0x16c) = fVar10;
      dVar12 = (double)CONCAT44(DAT_8c055d9c,*(undefined4 *)(puVar9 + DAT_8c055d98 + -0x16c));
    }
    else {
      *(undefined8 *)(puVar9 + DAT_8c055d90 + -0x16c) = in_xd0;
      in_xd0 = *(undefined8 *)(puVar9 + DAT_8c055d98 + -0x16c);
      dVar12 = (double)CONCAT44(DAT_8c055da0,DAT_8c055d9c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = (float)((ulonglong)dVar12 >> 0x20);
      dVar12 = (double)CONCAT44(fVar10,SUB84(dVar12,0) + fVar10);
    }
    else {
      dVar12 = dVar12 + dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + DAT_8c055d98 + -0x16c) = SUB84(dVar12,0);
    }
    else {
      *(undefined8 *)(puVar9 + DAT_8c055d98 + -0x16c) = in_xd0;
    }
  }
  uVar4 = 1;
  *(undefined4 *)(DAT_8c055da0 + ar4) = 1;
  iVar1 = *(int *)(DAT_8c055da4 + ar4);
  if (iVar1 == 0) {
    if (*(int *)(puVar9 + -0x168) == 1) {
      *(undefined4 *)(DAT_8c055dbc + ar4) = 1;
      uVar8 = 0;
      goto LAB_8c0563fa;
    }
    uVar4 = 0;
    uVar5 = (*(code *)PTR_rand_range_8c055ed8)(ar4,0,0x1e,ar7);
    *(undefined4 *)(puVar9 + -0x128) = uVar5;
    *(int *)(DAT_8c055edc + ar4) = *(int *)(puVar9 + -0x128) + 0x14;
    ar7 = (undefined1 *)0x5;
    *(undefined4 *)(ar4 + 0x40) = 5;
    ar6 = DAT_8c055ee0;
    (*(code *)PTR_vec3_clear_8c055ee4)(DAT_8c055ee0 + ar4,uVar4,DAT_8c055ee0,5);
    (*(code *)PTR_vec3_clear_8c055ee4)(ar4 + DAT_8c055ee8,uVar4,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c055ee4)(ar4 + DAT_8c055eec,uVar4,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c055ee4)(ar4 + 0x6c,uVar4,ar6,ar7);
    *(int *)(puVar9 + -0x158) = ar4;
    *(int *)(DAT_8c055ef0 + *(int *)(puVar9 + -0x158)) =
         *(int *)(DAT_8c055ef0 + *(int *)(puVar9 + -0x158)) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined4 *)(DAT_8c055f88 + ar4) = 1;
      *(undefined4 *)(DAT_8c055f8c + ar4) = 0;
      *(undefined4 *)(DAT_8c055f90 + ar4) = 1;
      uVar4 = (*(code *)PTR_FUN_8c055f94)(ar4,1,ar6,ar7);
      *(undefined4 *)(puVar9 + -0x130) = uVar4;
      uVar5 = *(undefined4 *)(puVar9 + -0x130);
      uVar4 = (*(code *)PTR_FUN_8c055f9c)(ar4 + DAT_8c055f98,uVar5,ar6,ar7);
      *(undefined4 *)(puVar9 + -0x134) = uVar4;
      uVar4 = (*(code *)PTR_deref_u32_8c055fa0)(*(undefined4 *)(puVar9 + -0x134),uVar5,ar6,ar7);
      *(undefined4 *)(puVar9 + -0x138) = uVar4;
      puVar3 = (undefined4 *)(ar4 + DAT_8c055fa4);
      puVar2 = *(undefined4 **)(puVar9 + -0x138);
      uVar4 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = puVar2[2];
      puVar6 = PTR_DAT_8c056174;
      puVar7 = PTR_DAT_8c056170;
      if (*(int *)(DAT_8c055fa8 + ar4) == 3) {
        puVar6 = PTR_DAT_8c055fb0;
        puVar7 = PTR_DAT_8c055fac;
      }
      (*(code *)PTR_vec3_clear_8c05617c)(puVar9 + DAT_8c056178 + -0x16c,uVar5,ar6,ar7);
      *(undefined **)(DAT_8c056180 + ar4) = puVar7;
      (*(code *)PTR_CAnimBody_GetCurFrame_8c056188)(ar4 + DAT_8c056184,uVar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar9 + -0x13c) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)(puVar9 + -0x13c) = dVar12;
      }
      *(undefined1 **)(puVar9 + -0x170) = puVar9 + DAT_8c05618c + -0x16c;
      (*(code *)PTR_FUN_8c056190)(ar4 + DAT_8c056184,**(undefined4 **)(DAT_8c056180 + ar4),ar6,ar7);
      uVar5 = SUB84(dVar12,0);
      (*(code *)PTR_Vec3_assign_8c056198)
                (puVar9 + DAT_8c056194 + -0x16c,puVar9 + DAT_8c05618c + -0x16c,ar6,ar7);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05619c)(puVar9 + DAT_8c05618c + -0x16c,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar13 = CONCAT44(*(undefined4 *)(puVar9 + DAT_8c0561a0 + -0x16c),uVar5);
        *(undefined4 *)(puVar9 + DAT_8c0561a4 + -0x16c) =
             *(undefined4 *)(puVar9 + DAT_8c0561a0 + -0x16c);
      }
      else {
        uVar13 = *(undefined8 *)(puVar9 + DAT_8c0561a0 + -0x16c);
        *(undefined8 *)(puVar9 + DAT_8c0561a4 + -0x16c) = uVar13;
      }
      *(undefined **)(DAT_8c056180 + ar4) = puVar6;
      (*(code *)PTR_CAnimBody_GetCurFrame_8c056188)(ar4 + DAT_8c056184,uVar4,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar9 + -0x140) = (int)((ulonglong)uVar13 >> 0x20);
      }
      else {
        *(undefined8 *)(puVar9 + -0x140) = uVar13;
      }
      *(undefined1 **)(puVar9 + -0x170) = puVar9 + DAT_8c0561a8 + -0x16c;
      (*(code *)PTR_FUN_8c056190)(ar4 + DAT_8c056184,**(undefined4 **)(DAT_8c056180 + ar4),ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c056198)
                (puVar9 + DAT_8c056194 + -0x16c,puVar9 + DAT_8c0561a8 + -0x16c,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c05619c)(puVar9 + DAT_8c0561a8 + -0x16c,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar9 + DAT_8c0561b0 + -0x16c) =
             *(undefined4 *)(puVar9 + DAT_8c0561ac + -0x16c);
      }
      else {
        *(undefined8 *)(puVar9 + DAT_8c0561b0 + -0x16c) =
             *(undefined8 *)(puVar9 + DAT_8c0561ac + -0x16c);
      }
      *(undefined1 **)(puVar9 + -0x170) = puVar9 + DAT_8c0561b4 + -0x16c;
      (*(code *)PTR_Vec3_sub_8c0561bc)(puVar9 + DAT_8c0561a4 + -0x170,ar4 + DAT_8c0561b8,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c056198)(ar4 + DAT_8c0561c0,puVar9 + DAT_8c0561b4 + -0x16c,ar6,ar7)
      ;
      (*(code *)PTR_Vec3_dtor_8c05619c)(puVar9 + DAT_8c0561b4 + -0x16c,0xffffffff,ar6,ar7);
      a5 = puVar9 + DAT_8c056178 + -0x16c;
      (*(code *)PTR_Vec3_assign_8c056198)(ar4 + DAT_8c0561b8,a5,ar6,ar7);
      *(int *)(puVar9 + -0x160) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(puVar9 + DAT_8c0561a4 + -0x16c),
                                  *(undefined4 *)(puVar9 + DAT_8c0561c8 + -0x16c));
      }
      else {
        in_xd0 = *(undefined8 *)(puVar9 + DAT_8c0561c8 + -0x16c);
        dVar12 = *(double *)(puVar9 + DAT_8c0561a4 + -0x16c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar10);
      }
      else {
        dVar12 = *(double *)(ar5 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar12 - dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c0561cc,fVar10);
      }
      else {
        dVar12 = (double)CONCAT44(DAT_8c0561d0,DAT_8c0561cc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar12 * dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar9 + -0x160) + DAT_8c0561c4),fVar10);
      }
      else {
        dVar12 = *(double *)(*(int *)(puVar9 + -0x160) + DAT_8c0561c4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = (float)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(fVar10,SUB84(dVar12,0) + fVar10);
      }
      else {
        dVar12 = dVar12 + dVar12;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)(puVar9 + -0x160) + DAT_8c0561c4) = SUB84(dVar12,0);
      }
      else {
        *(undefined8 *)(*(int *)(puVar9 + -0x160) + DAT_8c0561c4) = in_xd0;
      }
      *(undefined1 **)(puVar9 + -0x170) = puVar9 + DAT_8c0561d0 + -0x16c;
      (*(code *)PTR_FUN_8c0561d4)(ar4 + 0x14,a5,ar6,ar7);
      (*(code *)PTR_Vec3_ctor_xyz_8c0561dc)(puVar9 + DAT_8c0561d8 + -0x16c,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0561e0)
                (puVar9 + DAT_8c0561d0 + -0x16c,puVar9 + DAT_8c0561d8 + -0x16c,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar9 + -0x144) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)(puVar9 + -0x144) = dVar12;
      }
      (*(code *)PTR_Vec3_dtor_8c05619c)(puVar9 + DAT_8c0561d8 + -0x16c,0xffffffff,ar6,ar7);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05619c)(puVar9 + DAT_8c0561d0 + -0x16c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_ctor_xyz_8c0561dc)(puVar9 + DAT_8c056180 + -0x16c,uVar4,ar6,ar7);
      uVar4 = (*(code *)PTR_FUN_8c0561e4)(ar4 + 0x14,puVar9 + DAT_8c056180 + -0x16c,ar6,ar7);
      *(undefined4 *)(puVar9 + -0x148) = uVar4;
      *(undefined4 *)(puVar9 + -0x120) = *(undefined4 *)(puVar9 + -0x148);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05619c)(puVar9 + DAT_8c056180 + -0x16c,0xffffffff,ar6,ar7);
      if (*(int *)(puVar9 + -0x120) == 3) {
        (*(code *)PTR_Vec3_set_xyz_8c056244)(puVar9 + DAT_8c056240 + -0x16c,uVar4,ar6,ar7);
        *(undefined1 **)(puVar9 + -0x170) = puVar9 + DAT_8c056248 + -0x16c;
        (*(code *)PTR_FUN_8c056254)(ar4 + DAT_8c056250,puVar9 + DAT_8c05624c + -0x170,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c056258)
                  (ar4 + DAT_8c056250,puVar9 + DAT_8c056248 + -0x16c,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05625c)(puVar9 + DAT_8c056248 + -0x16c,0xffffffff,ar6,ar7);
        uVar4 = 0xffffffff;
        (*(code *)PTR_object_dtor_delete_8c056260)
                  (puVar9 + DAT_8c056240 + -0x16c,0xffffffff,ar6,ar7);
      }
      else if (*(int *)(puVar9 + -0x120) == 4) {
        (*(code *)PTR_Vec3_set_xyz_8c05644c)(puVar9 + DAT_8c056448 + -0x16c,uVar4,ar6,ar7);
        *(undefined1 **)(puVar9 + -0x170) = puVar9 + -0xf0;
        (*(code *)PTR_FUN_8c056458)(ar4 + DAT_8c056454,puVar9 + DAT_8c056450 + -0x170,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c05645c)(ar4 + DAT_8c056454,puVar9 + -0xf0,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c056460)(puVar9 + -0xf0,0xffffffff,ar6,ar7);
        uVar4 = 0xffffffff;
        (*(code *)PTR_object_dtor_delete_8c056464)
                  (puVar9 + DAT_8c056448 + -0x16c,0xffffffff,ar6,ar7);
      }
      (*(code *)PTR_CAnimBody_GetCurFrame_8c05646c)(ar4 + DAT_8c056468,uVar4,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar9 + -0x14c) = (int)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(DAT_8c056470,*(undefined4 *)(puVar9 + -0x14c));
      }
      else {
        *(double *)(puVar9 + -0x14c) = dVar12;
        dVar12 = (double)CONCAT44(DAT_8c056474,DAT_8c056470);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar12 >> 0x20) < SUB84(dVar12,0)) {
        *(int *)(puVar9 + -0x164) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar9 + -0x164) + DAT_8c056474),in_fr3
                                   );
          dVar12 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),DAT_8c056478);
        }
        else {
          dVar15 = *(double *)(*(int *)(puVar9 + -0x164) + DAT_8c056474);
          dVar12 = *(double *)(ar5 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar10 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(DAT_8c05647c,fVar10);
        }
        else {
          dVar12 = (double)CONCAT44(DAT_8c056480,DAT_8c05647c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = (float)((ulonglong)dVar12 >> 0x20);
          fVar10 = SUB84(dVar12,0) * fVar14;
          dVar12 = (double)CONCAT44(fVar14,fVar10);
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar10,SUB84(dVar15,0));
        }
        else {
          dVar12 = dVar12 * dVar12;
          dVar15 = dVar15 + dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)(puVar9 + -0x164) + DAT_8c056474) = (int)((ulonglong)dVar15 >> 0x20);
        }
        else {
          *(double *)(*(int *)(puVar9 + -0x164) + DAT_8c056474) = dVar15;
        }
      }
      uVar11 = SUB84(dVar12,0);
      *(undefined4 *)(DAT_8c056480 + ar4) = 1;
      *(undefined1 **)(puVar9 + -0x170) = puVar9 + -0x100;
      (*(code *)PTR_FUN_8c056484)(ar4 + 0x14,puVar9 + -0x100,ar6,ar7);
      *(undefined1 **)(puVar9 + -0x170) = puVar9 + -0x110;
      (*(code *)PTR_Vec3_normalize_8c056488)(puVar9 + -0x100,puVar9 + -0x110,ar6,ar7);
      uVar4 = (*(code *)PTR_Vec3_assign_8c05645c)(ar4 + 0x14,puVar9 + -0x110,ar6,ar7);
      *(undefined4 *)(puVar9 + -0x150) = uVar4;
      (*(code *)PTR_Vec3_assign_8c05645c)
                (ar4 + DAT_8c05648c,*(undefined4 *)(puVar9 + -0x150),ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c056460)(puVar9 + -0x110,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c056460)(puVar9 + -0x100,0xffffffff,ar6,ar7);
      ar6 = (undefined1 *)(ar4 + DAT_8c056468);
      uVar4 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c056490)
                        (ar6,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c056490,ar6,ar7);
      *(undefined4 *)(puVar9 + -0x154) = uVar4;
      if (*(int *)(puVar9 + -0x154) == 1) {
        (*(code *)PTR_Vec3_assign_8c05645c)(ar4 + DAT_8c05648c,ar4 + 0x14,ar6,ar7);
        uVar5 = 0;
        uVar8 = 0xffffffff;
        uVar4 = 0x1a;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c056498)
                  (ar4 + DAT_8c056468,0x1a,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05649c)(ar4 + DAT_8c056468,uVar4,uVar8,uVar5);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar11;
        }
        (*(code *)PTR_FUN_8c0564a0)(ar4,uVar4,uVar8,uVar5);
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(DAT_8c056480 + ar4) = 2;
        (*(code *)PTR_FUN_8c0564a8)(ar4 + DAT_8c0564a4,uVar4,uVar8,uVar5);
        *(undefined4 *)(DAT_8c0564ac + ar4) = 0;
        *(undefined4 *)(DAT_8c0564b0 + ar4) = 1;
        ar6 = DAT_8c0564b4;
        ar7 = (undefined1 *)0x0;
        uVar8 = 0;
        *(undefined4 *)(DAT_8c0564b4 + ar4) = 0;
      }
    }
    goto LAB_8c0563fa;
  }
  *(undefined4 *)(DAT_8c055ef4 + ar4) = 1;
  (*(code *)PTR_Vec3_ctor_xyz_8c055f00)(puVar9 + DAT_8c055efc + -0x16c,uVar4,ar6,ar7);
  ar7 = puVar9 + DAT_8c055efc + -0x16c;
  ar6 = puVar9 + DAT_8c055f04 + -0x16c;
  uVar4 = (*(code *)PTR_FUN_8c055f08)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(puVar9 + -300) = uVar4;
  *(uint *)(puVar9 + -0x11c) = (uint)(*(int *)(puVar9 + -300) == 0);
  (*(code *)PTR_Vec3_dtor_8c055f0c)(puVar9 + DAT_8c055efc + -0x16c,0xffffffff,ar6,ar7);
  uVar4 = 0;
  if (*(int *)(puVar9 + -0x11c) != 0) {
    ar7 = (undefined1 *)0x0;
    ar6 = (undefined1 *)0xffffffff;
    uVar4 = 0x48;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c055f14)(ar4 + DAT_8c055f10,0x48,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c055f18)(ar4 + DAT_8c055f10,uVar4,ar6,ar7);
    *(int *)(puVar9 + -0x15c) = ar4;
    *(int *)(DAT_8c055ef0 + *(int *)(puVar9 + -0x15c)) =
         *(int *)(DAT_8c055ef0 + *(int *)(puVar9 + -0x15c)) + 1;
    *(undefined4 *)(DAT_8c055f1c + ar4) = 1;
  }
  if (*(int *)(DAT_8c055f20 + ar4) == 1) {
    (*(code *)PTR_FUN_8c055f28)(ar4 + DAT_8c055f24,uVar4,ar6,ar7);
  }
LAB_8c0563fa:
  *(undefined4 *)(puVar9 + -0x118) = uVar8;
  (*(code *)PTR_Vec3_dtor_8c056460)(puVar9 + DAT_8c0564b8 + -0x16c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c056460)(puVar9 + DAT_8c0564bc + -0x16c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c056460)
            (puVar9 + DAT_8c0564c0 + -0x16c,0xffffffff,PTR_Vec3_dtor_8c056460,
             puVar9 + DAT_8c0564c0 + -0x16c);
  return *(undefined4 *)(puVar9 + -0x118);
}



/* FUN_8c0564c4 @ 8c0564c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c056db2) */
/* WARNING: Removing unreachable block (ram,0x8c056662) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0564c4(int ar4,undefined4 ar5,int ar6,undefined1 *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 uVar9;
  undefined4 unaff_r14;
  undefined8 *puVar10;
  float fVar11;
  undefined8 in_dr0;
  float fVar15;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  ulonglong in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar10 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)(in_dr14 >> 0x20);
  }
  else {
    puVar10 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar10 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar10 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar10 + -0xc) = 1;
  *(undefined4 *)((int)puVar10 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar10 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar10 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar10 + -0x1c) = in_PR;
  uVar9 = 1;
  uVar6 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0565d8)
            ((undefined1 *)((int)puVar10 + DAT_8c0565d4 + -0x210),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0565d8)
            ((undefined1 *)((int)puVar10 + DAT_8c0565dc + -0x210),uVar6,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0565d8)
            ((undefined1 *)((int)puVar10 + DAT_8c0565e0 + -0x210),uVar6,ar6,ar7);
  *(undefined4 *)((int)puVar10 + -0x1a8) = 0;
  (*(code *)PTR_Vec3_ctor_xyz_8c0565f4)
            ((undefined1 *)((int)puVar10 + DAT_8c0565f0 + -0x210),uVar6,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0565fc)
            ((undefined1 *)((int)puVar10 + DAT_8c0565f8 + -0x210),
             (undefined1 *)((int)puVar10 + DAT_8c0565f0 + -0x210),ar6,ar7);
  uVar6 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c056600)
            ((undefined1 *)((int)puVar10 + DAT_8c0565f0 + -0x210),0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0565d8)
            ((undefined1 *)((int)puVar10 + DAT_8c056604 + -0x210),uVar6,ar6,ar7);
  uVar6 = (*(code *)PTR_get_field_24_026024_8c05660c)
                    (*(undefined4 *)(DAT_8c056608 + ar4),uVar6,ar6,ar7);
  *(undefined4 *)((int)puVar10 + -0x1c0) = uVar6;
  if (*(int *)((int)puVar10 + -0x1c0) == 0) {
    iVar2 = *(int *)(DAT_8c056640 + ar4);
    if ((iVar2 < 5) && (-1 < iVar2)) {
      puVar7 = (&switchD_8c05663a::switchdataD_8c056644)[iVar2];
      switch(iVar2) {
      case 0:
        ar6 = 0x14;
        uVar6 = (*(code *)PTR_rand_range_8c05688c)(ar4,0,0x14,ar7);
        *(undefined4 *)((int)puVar10 + -0x1c4) = uVar6;
        *(int *)(DAT_8c056890 + ar4) = *(int *)((int)puVar10 + -0x1c4) + 5;
        *(int *)((int)puVar10 + -0x1fc) = ar4;
        *(int *)(DAT_8c056894 + *(int *)((int)puVar10 + -0x1fc)) =
             *(int *)(DAT_8c056894 + *(int *)((int)puVar10 + -0x1fc)) + 1;
      case 1:
        uVar6 = (*(code *)PTR_FUN_8c056898)(ar4,ar5,ar6,ar7);
        *(undefined4 *)((int)puVar10 + -0x1c8) = uVar6;
        iVar2 = *(int *)((int)puVar10 + -0x1c8);
        if (iVar2 == 0) {
          *(undefined4 *)(DAT_8c05689c + ar4) = 1;
          (*(code *)PTR_FUN_8c0568a0)(ar4 + 0x54,0,ar6,ar7);
          (*(code *)PTR_FUN_8c0568a0)(ar4 + DAT_8c0568a4,iVar2,ar6,ar7);
          (*(code *)PTR_FUN_8c0568a0)(ar4 + DAT_8c0568a8,iVar2,ar6,ar7);
          *(int *)((int)puVar10 + -0x200) = ar4;
          *(int *)(DAT_8c056894 + *(int *)((int)puVar10 + -0x200)) =
               *(int *)(DAT_8c056894 + *(int *)((int)puVar10 + -0x200)) + 1;
          *(undefined1 **)((int)puVar10 + -0x214) =
               (undefined1 *)((int)puVar10 + DAT_8c0568ac + -0x210);
          puVar3 = (undefined1 *)((int)puVar10 + DAT_8c0568b0 + -0x214);
          (*(code *)PTR_Vec3_sub_8c0568b4)(ar5,puVar3,ar6,ar7);
          *(undefined1 **)((int)puVar10 + -0x214) =
               (undefined1 *)((int)puVar10 + DAT_8c0568b8 + -0x210);
          (*(code *)PTR_Vec3_normalize_8c0568c0)
                    ((undefined1 *)((int)puVar10 + DAT_8c0568bc + -0x214),puVar3,ar6,ar7);
          (*(code *)PTR_Vec3_assign_8c0568c4)
                    (ar4 + 0x54,(undefined1 *)((int)puVar10 + DAT_8c0568b8 + -0x210),ar6,ar7);
          (*(code *)PTR_Vec3_dtor_8c0568c8)
                    ((undefined1 *)((int)puVar10 + DAT_8c0568b8 + -0x210),0xffffffff,ar6,ar7);
          (*(code *)PTR_Vec3_dtor_8c0568c8)
                    ((undefined1 *)((int)puVar10 + DAT_8c0568ac + -0x210),0xffffffff,ar6,ar7);
          (*(code *)PTR_FUN_8c0568d4)
                    (ar4 + DAT_8c0568d0,(undefined1 *)((int)puVar10 + DAT_8c0568cc + -0x210),ar6,ar7
                    );
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + -0x1cc) = (int)((ulonglong)in_dr0 >> 0x20);
            *(undefined4 *)((int)puVar10 + -0x1b4) = *(undefined4 *)((int)puVar10 + -0x1cc);
          }
          else {
            *(undefined8 *)((int)puVar10 + -0x1cc) = in_dr0;
            *(undefined8 *)((int)puVar10 + -0x1b4) = *(undefined8 *)((int)puVar10 + -0x1cc);
          }
          *(undefined1 **)((int)puVar10 + -0x214) =
               (undefined1 *)((int)puVar10 + DAT_8c0568d8 + -0x210);
          (*(code *)PTR_Vec3_scale_8c0568dc)
                    (ar4 + 0x54,(undefined1 *)((int)puVar10 + -0x1b4),ar6,ar7);
          *(undefined1 **)((int)puVar10 + -0x214) =
               (undefined1 *)((int)puVar10 + DAT_8c0568e0 + -0x210);
          (*(code *)PTR_Vec3_add_8c0568e8)
                    ((undefined1 *)((int)puVar10 + DAT_8c0568e4 + -0x214),
                     (undefined1 *)((int)puVar10 + DAT_8c0568b0 + -0x214),ar6,ar7);
          (*(code *)PTR_Vec3_assign_8c0568c4)
                    (ar4 + DAT_8c0568ec,(undefined1 *)((int)puVar10 + DAT_8c0568e0 + -0x210),ar6,ar7
                    );
          (*(code *)PTR_Vec3_dtor_8c0568c8)
                    ((undefined1 *)((int)puVar10 + DAT_8c0568e0 + -0x210),0xffffffff,ar6,ar7);
          (*(code *)PTR_Vec3_dtor_8c0568c8)
                    ((undefined1 *)((int)puVar10 + DAT_8c0568d8 + -0x210),0xffffffff,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c0568f0) = (undefined4)DAT_8c0568f4;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c0568f0) =
                 CONCAT44(DAT_8c0568f4._4_4_,(undefined4)DAT_8c0568f4);
          }
          fVar11 = DAT_8c0568fc;
          fVar15 = DAT_8c056900;
          if (in_FPSCR_SZ == '\0') {
            fVar11 = *(float *)(ar4 + DAT_8c0568f4._4_4_);
            fVar15 = DAT_8c0568fc;
          }
          if (in_FPSCR_PR == '\0' && fVar15 < fVar11) {
            if (in_FPSCR_SZ == '\0') {
              *(float *)(ar4 + DAT_8c0568f4._4_4_) = DAT_8c0568fc;
            }
            else {
              *(ulonglong *)(ar4 + DAT_8c0568f4._4_4_) = CONCAT44(DAT_8c056900,DAT_8c0568fc);
            }
            *(undefined1 **)((int)puVar10 + -0x214) =
                 (undefined1 *)((int)puVar10 + (int)DAT_8c056900 + -0x210);
            puVar3 = (undefined1 *)((int)puVar10 + DAT_8c0568b0 + -0x214);
            (*(code *)PTR_Vec3_sub_8c0568b4)(ar4 + DAT_8c0568ec,puVar3,ar6,ar7);
            *(undefined1 **)((int)puVar10 + -0x214) =
                 (undefined1 *)((int)puVar10 + DAT_8c056904 + -0x210);
            (*(code *)PTR_Vec3_normalize_8c0568c0)
                      ((undefined1 *)((int)puVar10 + DAT_8c056908 + -0x214),puVar3,ar6,ar7);
            (*(code *)PTR_Vec3_assign_8c0568c4)
                      (ar4 + 0x54,(undefined1 *)((int)puVar10 + DAT_8c056904 + -0x210),ar6,ar7);
            (*(code *)PTR_Vec3_dtor_8c0568c8)
                      ((undefined1 *)((int)puVar10 + DAT_8c056904 + -0x210),0xffffffff,ar6,ar7);
            (*(code *)PTR_Vec3_dtor_8c0568c8)
                      ((undefined1 *)((int)puVar10 + (int)DAT_8c056900 + -0x210),0xffffffff,ar6,ar7)
            ;
          }
          (*(code *)PTR_FUN_8c056910)(ar4 + 0x54,PTR_DAT_8c05690c,ar6,ar7);
          ar7 = (undefined1 *)0x0;
          ar6 = -1;
          uVar6 = 0x1a;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05691c)
                    (ar4 + DAT_8c056914._4_4_,0x1a,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c056920)
                    (ar4 + DAT_8c056914._4_4_,uVar6,ar6,ar7);
        }
        break;
      case 2:
        *(int *)((int)puVar10 + -0x204) = ar4;
        *(int *)(DAT_8c056a4c + *(int *)((int)puVar10 + -0x204)) =
             *(int *)(DAT_8c056a4c + *(int *)((int)puVar10 + -0x204)) + 1;
      case 3:
        (*(code *)PTR_Vec3_ctor_copy_8c056a54)
                  ((undefined1 *)((int)puVar10 + DAT_8c056a50 + -0x210),ar4 + 0x54,ar6,
                   PTR_Vec3_ctor_copy_8c056a54);
        ar7 = (undefined1 *)((int)puVar10 + DAT_8c056a50 + -0x210);
        ar6 = ar4 + DAT_8c056a58;
        uVar6 = (*(code *)PTR_FUN_8c056a5c)(ar4,ar5,ar6,ar7);
        *(undefined4 *)((int)puVar10 + -0x1d0) = uVar6;
        *(uint *)((int)puVar10 + -0x1b8) = (uint)(*(int *)((int)puVar10 + -0x1d0) == 0);
        (*(code *)PTR_Vec3_dtor_8c056a60)
                  ((undefined1 *)((int)puVar10 + DAT_8c056a50 + -0x210),0xffffffff,ar6,ar7);
        if (*(int *)((int)puVar10 + -0x1b8) != 0) {
          ar7 = (undefined1 *)0x0;
          ar6 = -1;
          uVar6 = 0x4a;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c056a6c)
                    (ar4 + DAT_8c056a64._4_4_,0x4a,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c056a70)
                    (ar4 + DAT_8c056a64._4_4_,uVar6,ar6,ar7);
          *(int *)((int)puVar10 + -0x208) = ar4;
          iVar2 = *(int *)((int)puVar10 + -0x208);
          *(int *)(DAT_8c056a4c + *(int *)((int)puVar10 + -0x208)) =
               *(int *)(DAT_8c056a4c + iVar2) + 1;
          (*(code *)PTR_FUN_8c056a78)(ar4 + DAT_8c056a74,iVar2,ar6,ar7);
          puVar7 = PTR_FUN_8c056a78;
          (*(code *)PTR_FUN_8c056a78)(ar4 + DAT_8c056a7c,PTR_FUN_8c056a78,ar6,ar7);
          *(undefined4 *)(DAT_8c056a80 + ar4) = 3;
          *(undefined4 *)(DAT_8c056a84 + ar4) = 1;
          (*(code *)PTR_FUN_8c056a8c)(ar4 + DAT_8c056a88,puVar7,ar6,ar7);
          uVar6 = (*(code *)PTR_FUN_8c056a90)(ar4,puVar7,ar6,ar7);
          *(undefined4 *)((int)puVar10 + -0x1d4) = uVar6;
          uVar8 = *(undefined4 *)((int)puVar10 + -0x1d4);
          uVar6 = (*(code *)PTR_FUN_8c056a94)(ar4 + DAT_8c056a64._4_4_,uVar8,ar6,ar7);
          *(undefined4 *)((int)puVar10 + -0x1d8) = uVar6;
          uVar6 = (*(code *)PTR_deref_u32_8c056a98)
                            (*(undefined4 *)((int)puVar10 + -0x1d8),uVar8,ar6,ar7);
          *(undefined4 *)((int)puVar10 + -0x1dc) = uVar6;
          puVar5 = (undefined4 *)(ar4 + DAT_8c056a9c);
          puVar4 = *(undefined4 **)((int)puVar10 + -0x1dc);
          uVar6 = puVar4[1];
          *puVar5 = *puVar4;
          puVar5[1] = uVar6;
          puVar5[2] = puVar4[2];
        }
        break;
      case 4:
        *(undefined4 *)(DAT_8c056b04 + ar4) = 1;
        *(undefined4 *)(DAT_8c056b08 + ar4) = 0;
        *(undefined4 *)(DAT_8c056b0c + ar4) = 1;
        (*(code *)PTR_FUN_8c056b10)(ar4,puVar7,ar6,ar7);
        (*(code *)PTR_FUN_8c056b18)(ar4 + DAT_8c056b14,puVar7,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c056b20)
                  ((undefined1 *)((int)puVar10 + DAT_8c056b1c + -0x210),ar5,ar6,ar7);
        puVar1 = PTR_DAT_8c056d34;
        puVar7 = PTR_DAT_8c056b28;
        if (*(int *)(DAT_8c056b24 + ar4) == 3) {
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44((undefined4)DAT_8c056b2c,(int)in_dr14);
            dVar13 = (double)CONCAT44(DAT_8c056b2c._4_4_,
                                      *(undefined4 *)((int)puVar10 + DAT_8c056b1c + -0x210));
          }
          else {
            dVar14 = (double)CONCAT44(DAT_8c056b2c._4_4_,(undefined4)DAT_8c056b2c);
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c056b1c + -0x210);
            dVar13 = (double)CONCAT44(DAT_8c056b34,DAT_8c056b2c._4_4_);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + DAT_8c056b1c + -0x210) = fVar11;
          }
          else {
            *(undefined8 *)((int)puVar10 + DAT_8c056b1c + -0x210) = in_xd0;
          }
          uVar12 = CONCAT44(0x3f800000,fVar11);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c056b34) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c056b34) = uVar12;
          }
        }
        else {
          dVar14 = (double)(in_dr14 & 0xffffffff);
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(DAT_8c056d3c,
                                      *(undefined4 *)((int)puVar10 + DAT_8c056d38 + -0x210));
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar10 + DAT_8c056d38 + -0x210);
            dVar13 = (double)CONCAT44(DAT_8c056d40,DAT_8c056d3c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + DAT_8c056d38 + -0x210) = fVar11;
          }
          else {
            *(undefined8 *)((int)puVar10 + DAT_8c056d38 + -0x210) = in_xd0;
          }
          uVar12 = CONCAT44(0x3f800000,fVar11);
          puVar7 = puVar1;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c056d40) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c056d40) = uVar12;
          }
        }
        (*(code *)PTR_FUN_8c056d48)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d44 + -0x210),ar5,ar6,ar7);
        *(undefined **)(DAT_8c056d4c + ar4) = puVar7;
        (*(code *)PTR_CAnimBody_GetCurFrame_8c056d54)
                  (ar4 + DAT_8c056d50,PTR_CAnimBody_GetCurFrame_8c056d54,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + -0x1e0) = (int)((ulonglong)uVar12 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar10 + -0x1e0) = uVar12;
        }
        *(undefined1 **)((int)puVar10 + -0x214) =
             (undefined1 *)((int)puVar10 + DAT_8c056d58 + -0x210);
        (*(code *)PTR_FUN_8c056d5c)
                  (ar4 + DAT_8c056d50,**(undefined4 **)(DAT_8c056d4c + ar4),ar6,ar7);
        uVar8 = (undefined4)uVar12;
        (*(code *)PTR_Vec3_assign_8c056d64)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d60 + -0x210),
                   (undefined1 *)((int)puVar10 + DAT_8c056d58 + -0x210),ar6,ar7);
        uVar6 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c056d68)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d58 + -0x210),0xffffffff,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c056d6c + -0x210),uVar8);
          *(undefined4 *)((int)puVar10 + DAT_8c056d70 + -0x210) =
               *(undefined4 *)((int)puVar10 + DAT_8c056d6c + -0x210);
        }
        else {
          uVar12 = *(undefined8 *)((int)puVar10 + DAT_8c056d6c + -0x210);
          *(undefined8 *)((int)puVar10 + DAT_8c056d70 + -0x210) = uVar12;
        }
        *(undefined **)(DAT_8c056d4c + ar4) = puVar7;
        (*(code *)PTR_CAnimBody_GetCurFrame_8c056d54)(ar4 + DAT_8c056d50,uVar6,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + -0x1e4) = (int)((ulonglong)uVar12 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar10 + -0x1e4) = uVar12;
        }
        *(undefined1 **)((int)puVar10 + -0x214) =
             (undefined1 *)((int)puVar10 + DAT_8c056d74 + -0x210);
        (*(code *)PTR_FUN_8c056d5c)
                  (ar4 + DAT_8c056d50,**(undefined4 **)(DAT_8c056d4c + ar4),ar6,ar7);
        uVar6 = (undefined4)uVar12;
        (*(code *)PTR_Vec3_assign_8c056d64)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d60 + -0x210),
                   (undefined1 *)((int)puVar10 + DAT_8c056d74 + -0x210),ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c056d68)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d74 + -0x210),0xffffffff,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar10 + DAT_8c056d78 + -0x210),uVar6);
        }
        else {
          dVar13 = *(double *)((int)puVar10 + DAT_8c056d78 + -0x210);
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) -
                                    (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + DAT_8c056d7c + -0x210) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar10 + DAT_8c056d7c + -0x210) = dVar13;
        }
        *(undefined1 **)((int)puVar10 + -0x214) =
             (undefined1 *)((int)puVar10 + DAT_8c056d80 + -0x210);
        (*(code *)PTR_Vec3_sub_8c056d88)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d70 + -0x214),ar4 + DAT_8c056d84,ar6,ar7);
        uVar6 = SUB84(dVar13,0);
        (*(code *)PTR_Vec3_assign_8c056d64)
                  (ar4 + DAT_8c056d8c,(undefined1 *)((int)puVar10 + DAT_8c056d80 + -0x210),ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c056d68)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d80 + -0x210),0xffffffff,ar6,ar7);
        ar6 = ar4 + DAT_8c056d84;
        (*(code *)PTR_Vec3_assign_8c056d64)
                  (ar6,(undefined1 *)((int)puVar10 + DAT_8c056d44 + -0x210),ar6,ar7);
        iVar2 = DAT_8c056d40;
        *(int *)((int)puVar10 + -0x20c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(*(int *)((int)puVar10 + -0x20c) + DAT_8c056d90);
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar10 + -0x20c) + DAT_8c056d90);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c056d40),uVar6);
        }
        else {
          dVar14 = *(double *)(ar4 + DAT_8c056d40);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = (float)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(fVar11,SUB84(dVar14,0) * fVar11);
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)puVar10 + -0x20c) + DAT_8c056d90) = SUB84(dVar14,0);
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar10 + -0x20c) + DAT_8c056d90) = in_xd0;
        }
        *(undefined1 **)((int)puVar10 + -0x214) =
             (undefined1 *)((int)puVar10 + DAT_8c056d94 + -0x210);
        (*(code *)PTR_FUN_8c056d98)(ar4 + 0x14,iVar2,ar6,ar7);
        (*(code *)PTR_Vec3_ctor_xyz_8c056da0)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d9c + -0x210),iVar2,ar6,ar7);
        (*(code *)PTR_FUN_8c056da4)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d94 + -0x210),
                   (undefined1 *)((int)puVar10 + DAT_8c056d9c + -0x210),ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar10 + -0x1e8) = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *(double *)((int)puVar10 + -0x1e8) = dVar14;
        }
        (*(code *)PTR_Vec3_dtor_8c056d68)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d9c + -0x210),0xffffffff,ar6,ar7);
        uVar6 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c056d68)
                  ((undefined1 *)((int)puVar10 + DAT_8c056d94 + -0x210),0xffffffff,ar6,ar7);
        (*(code *)PTR_Vec3_ctor_xyz_8c056da0)
                  ((undefined1 *)((int)puVar10 + DAT_8c056da8 + -0x210),uVar6,ar6,ar7);
        uVar6 = (*(code *)PTR_FUN_8c056dac)
                          (ar4 + 0x14,(undefined1 *)((int)puVar10 + DAT_8c056da8 + -0x210),ar6,ar7);
        *(undefined4 *)((int)puVar10 + -0x1ec) = uVar6;
        *(undefined4 *)((int)puVar10 + -0x1bc) = *(undefined4 *)((int)puVar10 + -0x1ec);
        uVar6 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c056d68)
                  ((undefined1 *)((int)puVar10 + DAT_8c056da8 + -0x210),0xffffffff,ar6,ar7);
        if (*(int *)((int)puVar10 + -0x1bc) == 3) {
          (*(code *)PTR_Vec3_set_xyz_8c056e14)
                    ((undefined1 *)((int)puVar10 + DAT_8c056e10 + -0x210),uVar6,ar6,ar7);
          *(undefined1 **)((int)puVar10 + -0x214) =
               (undefined1 *)((int)puVar10 + DAT_8c056e18 + -0x210);
          (*(code *)PTR_FUN_8c056e24)
                    (ar4 + DAT_8c056e20,(undefined1 *)((int)puVar10 + DAT_8c056e1c + -0x214),ar6,ar7
                    );
          (*(code *)PTR_Vec3_assign_8c056e28)
                    (ar4 + DAT_8c056e20,(undefined1 *)((int)puVar10 + DAT_8c056e18 + -0x210),ar6,ar7
                    );
          (*(code *)PTR_Vec3_dtor_8c056e2c)
                    ((undefined1 *)((int)puVar10 + DAT_8c056e18 + -0x210),0xffffffff,ar6,ar7);
          uVar6 = 0xffffffff;
          (*(code *)PTR_object_dtor_delete_8c056e30)
                    ((undefined1 *)((int)puVar10 + DAT_8c056e10 + -0x210),0xffffffff,ar6,ar7);
        }
        else if (*(int *)((int)puVar10 + -0x1bc) == 4) {
          (*(code *)PTR_Vec3_set_xyz_8c057040)
                    ((undefined1 *)((int)puVar10 + DAT_8c05703c + -0x210),
                     (undefined1 *)((int)puVar10 + DAT_8c05703c + -0x210),ar6,ar7);
          *(undefined1 **)((int)puVar10 + -0x214) =
               (undefined1 *)((int)puVar10 + DAT_8c057044 + -0x210);
          (*(code *)PTR_FUN_8c057050)
                    (ar4 + DAT_8c05704c,(undefined1 *)((int)puVar10 + DAT_8c057048 + -0x214),ar6,ar7
                    );
          (*(code *)PTR_Vec3_assign_8c057054)
                    (ar4 + DAT_8c05704c,(undefined1 *)((int)puVar10 + DAT_8c057044 + -0x210),ar6,ar7
                    );
          (*(code *)PTR_Vec3_dtor_8c057058)
                    ((undefined1 *)((int)puVar10 + DAT_8c057044 + -0x210),0xffffffff,ar6,ar7);
          uVar6 = 0xffffffff;
          (*(code *)PTR_object_dtor_delete_8c05705c)
                    ((undefined1 *)((int)puVar10 + DAT_8c05703c + -0x210),0xffffffff,ar6,ar7);
        }
        *(undefined1 **)((int)puVar10 + -0x214) = (undefined1 *)((int)puVar10 + -0x194);
        (*(code *)PTR_FUN_8c057060)(ar4 + 0x14,uVar6,ar6,ar7);
        *(undefined1 **)((int)puVar10 + -0x214) = (undefined1 *)((int)puVar10 + -0x1a4);
        (*(code *)PTR_Vec3_normalize_8c057068)
                  ((undefined1 *)((int)puVar10 + DAT_8c057064 + -0x214),uVar6,ar6,ar7);
        uVar6 = (*(code *)PTR_Vec3_assign_8c057054)
                          (ar4 + 0x14,(undefined1 *)((int)puVar10 + -0x1a4),ar6,ar7);
        *(undefined4 *)((int)puVar10 + -0x1f0) = uVar6;
        (*(code *)PTR_Vec3_assign_8c057054)
                  (ar4 + DAT_8c057064,*(undefined4 *)((int)puVar10 + -0x1f0),ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c057058)((undefined1 *)((int)puVar10 + -0x1a4),0xffffffff,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c057058)((undefined1 *)((int)puVar10 + -0x194),0xffffffff,ar6,ar7);
        *(undefined4 *)(DAT_8c05706c + ar4) = 1;
        uVar6 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c057074)
                          (ar4 + DAT_8c057070,ar4 + DAT_8c057070,ar6,ar7);
        *(undefined4 *)((int)puVar10 + -500) = uVar6;
        ar7 = *(undefined1 **)((int)puVar10 + -500);
        if (ar7 == (undefined1 *)0x1) {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)((int)puVar10 + -0x210) = *(undefined4 *)(DAT_8c057078 + ar4);
          (*(code *)PTR_FUN_8c057080)
                    (ar4,(*(int *)((int)puVar10 + -0x210) * 2 + *(int *)((int)puVar10 + -0x210)) * 8
                         + DAT_8c05707c,0x40,1);
          *(undefined4 *)(DAT_8c057084 + ar4) = 0;
          *(undefined4 *)(DAT_8c05706c + ar4) = 0;
          uVar8 = 0;
          uVar9 = 0xffffffff;
          uVar6 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05708c)(ar4 + DAT_8c057070,0,0xffffffff,0)
          ;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057090)(ar4 + DAT_8c057070,uVar6,uVar9,uVar8);
          *(undefined4 *)(DAT_8c057094 + ar4) = 2;
          *(undefined4 *)(DAT_8c057098 + ar4) = 0;
          ar7 = (undefined1 *)0x40;
          ar6 = 5;
          *(undefined4 *)(ar4 + 0x40) = 5;
          iVar2 = DAT_8c05704c;
          (*(code *)PTR_Vec3_length_sq_8c05709c)(ar4 + DAT_8c05704c,DAT_8c05704c,5,0x40);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar10 + -0x1f8) = (int)((ulonglong)dVar14 >> 0x20);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)puVar10 + -0x1f8);
          }
          else {
            *(double *)((int)puVar10 + -0x1f8) = dVar14;
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)((int)puVar10 + -0x1f8);
          }
          (*(code *)PTR_FUN_8c0570a4)(ar4 + DAT_8c0570a0,iVar2,ar6,ar7);
          *(undefined4 *)(DAT_8c0570a8 + ar4) = 1;
          *(undefined4 *)(DAT_8c0570ac + ar4) = 0;
          *(undefined4 *)(DAT_8c0570b0 + ar4) = 1;
          uVar9 = 0;
        }
      }
    }
    (*(code *)PTR_Vec3_assign_8c057054)(ar4 + DAT_8c057064,ar4 + 0x14,ar6,ar7);
    *(undefined4 *)((int)puVar10 + -0x1b0) = uVar9;
    (*(code *)PTR_Vec3_dtor_8c057058)
              ((undefined1 *)((int)puVar10 + DAT_8c0570b4 + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c057058)
              ((undefined1 *)((int)puVar10 + DAT_8c0570b8 + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c057058)
              ((undefined1 *)((int)puVar10 + DAT_8c0570bc + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c057058)
              ((undefined1 *)((int)puVar10 + DAT_8c0570c0 + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c057058)
              ((undefined1 *)((int)puVar10 + DAT_8c0570c4 + -0x210),0xffffffff,ar6,ar7);
    uVar6 = *(undefined4 *)((int)puVar10 + -0x1b0);
  }
  else {
    *(undefined4 *)(DAT_8c056610 + ar4) = 0;
    *(undefined4 *)(DAT_8c056614 + ar4) = 2;
    *(undefined4 *)(DAT_8c056618 + ar4) = 1;
    *(undefined4 *)((int)puVar10 + -0x1ac) = 0;
    (*(code *)PTR_Vec3_dtor_8c056600)
              ((undefined1 *)((int)puVar10 + DAT_8c056604 + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c056600)
              ((undefined1 *)((int)puVar10 + DAT_8c0565f8 + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c056600)
              ((undefined1 *)((int)puVar10 + DAT_8c0565e0 + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c056600)
              ((undefined1 *)((int)puVar10 + DAT_8c0565dc + -0x210),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c056600)
              ((undefined1 *)((int)puVar10 + DAT_8c0565d4 + -0x210),0xffffffff,ar6,ar7);
    uVar6 = *(undefined4 *)((int)puVar10 + -0x1ac);
  }
  return uVar6;
}



/* FUN_8c0570cc @ 8c0570cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0570cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(DAT_8c05714c + ar4) == 0) {
    *(int *)(DAT_8c05714c + ar4) = *(int *)(DAT_8c05714c + ar4) + 1;
    ar7 = 0;
    ar6 = 0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c057158)
              (ar4 + DAT_8c057150._4_4_,ar5,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05715c)(ar4 + DAT_8c057150._4_4_,ar5,ar6,ar7);
  }
  else if (*(int *)(DAT_8c05714c + ar4) != 1) {
    return 1;
  }
  iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c057160)
                    (ar4 + DAT_8c057150._4_4_,ar5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(DAT_8c05714c + ar4) = 0;
  }
  return (uint)(iVar1 != 1);
}



/* FUN_8c057164 @ 8c057164 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0571d6) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c057164(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 uVar2;
  ulonglong in_dr0;
  ulonglong uVar3;
  undefined8 uVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar2 = 1;
  *(undefined4 *)(DAT_8c057250 + ar4) = 0;
  *(undefined4 *)(ar4 + 0x40) = 3;
  if ((*(int *)(DAT_8c057254 + ar4) == 4) && (*(int *)(DAT_8c057258 + ar4) == 3)) {
    a5 = ar5;
    iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c057260)(ar4 + DAT_8c05725c,ar5,ar6,ar7);
    if (iVar1 == 0x22) {
      (*(code *)PTR_CAnimBody_GetCurFrame_8c057264)(ar4 + DAT_8c05725c,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c057268,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = CONCAT44(PTR_s_CAnimBody_SetFrame_033e6e_8c05726c,DAT_8c057268);
      }
      if (in_FPSCR_PR == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
        (*(code *)PTR_CAnimBody_GetCurFrame_8c057264)(ar4 + DAT_8c05725c,a5,ar6,ar7);
        uVar3 = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          uVar3 = in_dr0 >> 0x20;
        }
        in_dr0 = uVar3 & 0xffffffff;
        if ((float)uVar3 != 0.0) {
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05726c)(ar4 + DAT_8c05725c,a5,ar6,ar7);
        }
      }
    }
    else {
      iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c057260)(ar4 + DAT_8c05725c,a5,ar6,ar7);
      if (iVar1 == 0x20) {
        *(undefined4 *)(DAT_8c057270 + ar4) = 5;
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c057278,(int)in_dr0);
    *(undefined4 *)(ar4 + DAT_8c057274) = DAT_8c057278;
  }
  else {
    uVar4 = CONCAT44(PTR_FUN_8c05727c,DAT_8c057278);
    *(undefined8 *)(ar4 + DAT_8c057274) = uVar4;
  }
  if (*(int *)(DAT_8c057258 + ar4) == 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c057274) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c057274) = CONCAT44(0x3f800000,(int)uVar4);
    }
    uVar2 = 0;
  }
  else {
    (*(code *)PTR_FUN_8c05727c)(ar4,ar5,ar5,ar7);
  }
  return uVar2;
}



/* FUN_8c057280 @ 8c057280 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c057280(int ar4,undefined **ar5,undefined **ar6,undefined *ar7)

{
  undefined *a5;
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined4 unaff_r12;
  undefined4 uVar4;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong in_dr0;
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
  *(undefined4 *)(puVar5 + -0x10) = in_PR;
  *(undefined ***)(puVar5 + -0x144) = ar6;
  uVar4 = 1;
  ppuVar3 = ar5;
  while (*(int *)(DAT_8c0572c0 + ar4) < 0xd) {
    ar6 = &switchD_8c0572ba::switchdataD_8c0572c4;
    switch(*(int *)(DAT_8c0572c0 + ar4)) {
    case 0:
      in_dr0 = in_dr0 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = in_dr0;
      }
      if (*(int *)(puVar5 + -0x144) == 1) {
        *(int *)(puVar5 + -300) = ar4;
        ppuVar3 = *(undefined ***)(puVar5 + -300);
        *(int *)((int)ppuVar3 + DAT_8c057320) = *(int *)(DAT_8c057320 + *(int *)(puVar5 + -300)) + 1
        ;
        ar6 = &switchD_8c0572ba::switchdataD_8c0572c4;
      }
      else {
        *(undefined4 *)(DAT_8c057330 + ar4) = 10;
      }
      break;
    case 1:
      *(undefined4 *)(DAT_8c057384 + ar4) = 2;
      (*(code *)PTR_vec3_clear_8c05738c)
                (ar4 + DAT_8c057388,PTR_vec3_clear_8c05738c,&switchD_8c0572ba::switchdataD_8c0572c4,
                 ar7);
      uVar6 = (uint)in_dr0;
      a5 = PTR_vec3_clear_8c05738c;
      (*(code *)PTR_vec3_clear_8c05738c)(ar4 + DAT_8c057390,PTR_vec3_clear_8c05738c,ar6,ar7);
      (*(code *)PTR_FUN_8c057398)(ar4 + DAT_8c057394,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar6;
      }
      *(int *)(puVar5 + -0x130) = ar4;
      *(int *)(DAT_8c05739c + *(int *)(puVar5 + -0x130)) =
           *(int *)(DAT_8c05739c + *(int *)(puVar5 + -0x130)) + 1;
      goto switchD_8c0572ba_caseD_5;
    case 2:
      ar7 = *(undefined **)(DAT_8c0573f8 + ar4);
      uVar2 = 0x1e;
      (*(code *)PTR_FUN_8c0573fc)(ar4,0x1e,ar5,ar7);
      (*(code *)PTR_Vec3_ctor_xyz_8c057404)(puVar5 + DAT_8c057400 + -0x144,uVar2,ar5,ar7);
      uVar2 = (*(code *)PTR_FUN_8c057408)(ar4 + 0x14,puVar5 + DAT_8c057400 + -0x144,ar5,ar7);
      *(undefined4 *)(puVar5 + -0x10c) = uVar2;
      *(undefined4 *)(puVar5 + -0x104) = *(undefined4 *)(puVar5 + -0x10c);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05740c)(puVar5 + DAT_8c057400 + -0x144,0xffffffff,ar5,ar7);
      if (*(int *)(puVar5 + -0x104) == 3) {
        (*(code *)PTR_Vec3_set_xyz_8c05748c)(puVar5 + DAT_8c057484._4_4_ + -0x144,uVar2,ar5,ar7);
        *(undefined1 **)(puVar5 + -0x148) = puVar5 + DAT_8c057490 + -0x144;
        (*(code *)PTR_FUN_8c057498)(ar4 + 0x14,puVar5 + DAT_8c057494 + -0x148,ar5,ar7);
        (*(code *)PTR_Vec3_assign_8c05749c)(ar4 + 0x14,puVar5 + DAT_8c057490 + -0x144,ar5,ar7);
        (*(code *)PTR_Vec3_dtor_8c0574a0)(puVar5 + DAT_8c057490 + -0x144,0xffffffff,ar5,ar7);
        (*(code *)PTR_object_dtor_delete_8c0574a4)
                  (puVar5 + DAT_8c057484._4_4_ + -0x144,0xffffffff,ar5,ar7);
        ar7 = (undefined *)0x0;
        ar5 = (undefined **)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0574b0)
                  (ar4 + DAT_8c0574a8._4_4_,0x2f,0xffffffff,0);
      }
      else if (*(int *)(puVar5 + -0x104) == 4) {
        (*(code *)PTR_Vec3_set_xyz_8c057558)(puVar5 + DAT_8c057550._4_4_ + -0x144,uVar2,ar5,ar7);
        *(undefined1 **)(puVar5 + -0x148) = puVar5 + DAT_8c05755c + -0x144;
        (*(code *)PTR_FUN_8c057564)(ar4 + 0x14,puVar5 + DAT_8c057560 + -0x148,ar5,ar7);
        (*(code *)PTR_Vec3_assign_8c057568)(ar4 + 0x14,puVar5 + DAT_8c05755c + -0x144,ar5,ar7);
        (*(code *)PTR_Vec3_dtor_8c05756c)(puVar5 + DAT_8c05755c + -0x144,0xffffffff,ar5,ar7);
        (*(code *)PTR_object_dtor_delete_8c057570)
                  (puVar5 + DAT_8c057550._4_4_ + -0x144,0xffffffff,ar5,ar7);
        ar7 = (undefined *)0x0;
        ar5 = (undefined **)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05757c)
                  (ar4 + DAT_8c057574._4_4_,0x26,0xffffffff,0);
      }
      *(undefined4 *)(DAT_8c057580 + ar4) = 3;
      ppuVar3 = (undefined **)(ar4 + 0x14);
      (*(code *)PTR_Vec3_assign_8c057568)(ar4 + DAT_8c057584,ppuVar3,ar5,ar7);
      if (*(int *)(DAT_8c057588 + ar4) == 3) {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057590)
                  (ar4 + DAT_8c057574._4_4_,ppuVar3,ar5,ar7);
      }
      else {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057604)
                  (ar4 + DAT_8c0575fc._4_4_,ppuVar3,ar5,ar7);
      }
      *(int *)(puVar5 + -0x134) = ar4;
      *(int *)(DAT_8c057608 + *(int *)(puVar5 + -0x134)) =
           *(int *)(DAT_8c057608 + *(int *)(puVar5 + -0x134)) + 1;
      ar6 = ar5;
    case 3:
      uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c057610)
                        (ar4 + DAT_8c0575fc._4_4_,ppuVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0x110) = uVar2;
      if (*(int *)(puVar5 + -0x110) == 1) {
        ar6 = (undefined **)0x64;
        uVar2 = (*(code *)PTR_rand_range_8c057614)(ar4,0,100,ar7);
        *(undefined4 *)(puVar5 + -0x114) = uVar2;
        if (*(int *)(puVar5 + -0x114) < 0x32) {
          *(undefined4 *)(DAT_8c057608 + ar4) = 0;
          *(undefined4 *)(DAT_8c057618 + ar4) = 2;
          uVar4 = 0;
        }
        else {
          ar7 = (undefined *)0x0;
          ar6 = (undefined **)0xffffffff;
          uVar2 = 3;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c057664)
                    (ar4 + DAT_8c05765c._4_4_,3,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057668)
                    (ar4 + DAT_8c05765c._4_4_,uVar2,ar6,ar7);
          *(undefined4 *)(DAT_8c05766c + ar4) = 3;
          *(int *)(puVar5 + -0x138) = ar4;
          *(int *)(DAT_8c057670 + *(int *)(puVar5 + -0x138)) =
               *(int *)(DAT_8c057670 + *(int *)(puVar5 + -0x138)) + 1;
        }
      }
      goto switchD_8c0572ba_caseD_5;
    case 4:
      uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0576ac)
                        (ar4 + DAT_8c0576a4._4_4_,ppuVar3,&switchD_8c0572ba::switchdataD_8c0572c4,
                         ar7);
      *(undefined4 *)(puVar5 + -0x118) = uVar2;
      if (*(int *)(puVar5 + -0x118) == 1) {
        *(undefined4 *)(DAT_8c0576b0 + ar4) = 0;
        *(undefined4 *)(DAT_8c0576b4 + ar4) = 2;
        uVar4 = 0;
      }
    default:
      goto switchD_8c0572ba_caseD_5;
    case 10:
      *(undefined1 **)(puVar5 + -0x148) = puVar5 + DAT_8c057780 + -0x144;
      (*(code *)PTR_Vec3_scale_8c057788)
                (ar4 + 0x14,PTR_DAT_8c057784,&switchD_8c0572ba::switchdataD_8c0572c4,ar7);
      *(undefined1 **)(puVar5 + -0x148) = puVar5 + DAT_8c05778c + -0x144;
      (*(code *)PTR_Vec3_add_8c057794)(ar5,puVar5 + DAT_8c057790 + -0x148,ar6,ar7);
      ppuVar3 = ar5;
      (*(code *)PTR_FUN_8c057798)(ar4,puVar5 + DAT_8c05778c + -0x144,ar5,ar7);
      (*(code *)PTR_Vec3_dtor_8c05779c)(puVar5 + DAT_8c05778c + -0x144,0xffffffff,ppuVar3,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05779c)(puVar5 + DAT_8c057780 + -0x144,0xffffffff,ppuVar3,ar7);
      (*(code *)PTR_FUN_8c0577a4)(ar4,uVar2,ppuVar3,ar7);
      (*(code *)PTR_FUN_8c0577a8)(ar4,uVar2,ppuVar3,ar7);
      ar7 = *(undefined **)(DAT_8c0577ac + ar4);
      uVar2 = 0x1e;
      ppuVar3 = ar5;
      (*(code *)PTR_FUN_8c0577b0)(ar4,0x1e,ar5,ar7);
      (*(code *)PTR_FUN_8c0577bc)(ar4,uVar2,ppuVar3,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0x11c) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(puVar5 + -0x11c) = in_dr0;
      }
      (*(code *)PTR_Vec3_ctor_xyz_8c0577c4)(puVar5 + DAT_8c0577c0 + -0x144,uVar2,ppuVar3,ar7);
      uVar2 = (*(code *)PTR_FUN_8c0577c8)(ar4 + 0x14,puVar5 + DAT_8c0577c0 + -0x144,ppuVar3,ar7);
      *(undefined4 *)(puVar5 + -0x120) = uVar2;
      *(undefined4 *)(puVar5 + -0x108) = *(undefined4 *)(puVar5 + -0x120);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05779c)(puVar5 + DAT_8c0577c0 + -0x144,0xffffffff,ppuVar3,ar7);
      if (*(int *)(puVar5 + -0x108) == 3) {
        (*(code *)PTR_Vec3_set_xyz_8c057848)(puVar5 + DAT_8c057840._4_4_ + -0x144,uVar2,ppuVar3,ar7)
        ;
        *(undefined1 **)(puVar5 + -0x148) = puVar5 + DAT_8c05784c + -0x144;
        (*(code *)PTR_FUN_8c057854)(ar4 + 0x14,puVar5 + DAT_8c057850 + -0x148,ppuVar3,ar7);
        (*(code *)PTR_Vec3_assign_8c057858)(ar4 + 0x14,puVar5 + DAT_8c05784c + -0x144,ppuVar3,ar7);
        (*(code *)PTR_Vec3_dtor_8c05785c)(puVar5 + DAT_8c05784c + -0x144,0xffffffff,ppuVar3,ar7);
        (*(code *)PTR_object_dtor_delete_8c057860)
                  (puVar5 + DAT_8c057840._4_4_ + -0x144,0xffffffff,ppuVar3,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c057864) = (undefined4)DAT_8c057868;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c057864) =
               CONCAT44(DAT_8c057868._4_4_,(undefined4)DAT_8c057868);
        }
        ar7 = (undefined *)0x0;
        ppuVar3 = (undefined **)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c057870)
                  (ar4 + DAT_8c057840._4_4_,0xc,0xffffffff,0);
      }
      else if (*(int *)(puVar5 + -0x108) == 4) {
        (*(code *)PTR_Vec3_set_xyz_8c05791c)(puVar5 + DAT_8c057914._4_4_ + -0x144,uVar2,ppuVar3,ar7)
        ;
        *(undefined1 **)(puVar5 + -0x148) = puVar5 + DAT_8c057920 + -0x144;
        (*(code *)PTR_FUN_8c057928)(ar4 + 0x14,puVar5 + DAT_8c057924 + -0x148,ppuVar3,ar7);
        (*(code *)PTR_Vec3_assign_8c05792c)(ar4 + 0x14,puVar5 + DAT_8c057920 + -0x144,ppuVar3,ar7);
        (*(code *)PTR_Vec3_dtor_8c057930)(puVar5 + DAT_8c057920 + -0x144,0xffffffff,ppuVar3,ar7);
        (*(code *)PTR_object_dtor_delete_8c057934)
                  (puVar5 + DAT_8c057914._4_4_ + -0x144,0xffffffff,ppuVar3,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c057938) = (undefined4)DAT_8c05793c;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c057938) =
               CONCAT44(DAT_8c05793c._4_4_,(undefined4)DAT_8c05793c);
        }
        ar7 = (undefined *)0x0;
        ppuVar3 = (undefined **)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c057948)(ar4 + DAT_8c057944,0xb,0xffffffff,0)
        ;
      }
      iVar1 = ar4 + 0x14;
      (*(code *)PTR_Vec3_assign_8c05792c)(ar4 + DAT_8c05794c,iVar1,ppuVar3,ar7);
      if (*(int *)(DAT_8c057950 + ar4) < 3) {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057958)(ar4 + DAT_8c057944,iVar1,ppuVar3,ar7);
      }
      else {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057a54)
                  (ar4 + DAT_8c057a4c._4_4_,iVar1,ppuVar3,ar7);
      }
      *(int *)(puVar5 + -0x13c) = ar4;
      ar6 = *(undefined ***)(puVar5 + -0x13c);
      *(int *)((int)ar6 + DAT_8c057a58) = *(int *)(DAT_8c057a58 + *(int *)(puVar5 + -0x13c)) + 1;
    case 0xb:
      *(undefined1 **)(puVar5 + -0x148) = puVar5 + -0xd0;
      (*(code *)PTR_Vec3_scale_8c057a60)(ar4 + 0x14,PTR_DAT_8c057a5c,ar6,ar7);
      *(undefined1 **)(puVar5 + -0x148) = puVar5 + -0xe0;
      (*(code *)PTR_Vec3_add_8c057a64)(ar5,puVar5 + -0xd0,ar6,ar7);
      (*(code *)PTR_FUN_8c057a68)(ar4,puVar5 + -0xe0,ar5,ar7);
      (*(code *)PTR_Vec3_dtor_8c057a6c)(puVar5 + -0xe0,0xffffffff,ar5,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c057a6c)(puVar5 + -0xd0,0xffffffff,ar5,ar7);
      (*(code *)PTR_FUN_8c057a74)(ar4,uVar2,ar5,ar7);
      uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c057a7c)
                        (ar4 + DAT_8c057a4c._4_4_,ar4 + DAT_8c057a78,ar5,ar7);
      *(undefined4 *)(puVar5 + -0x124) = uVar2;
      ar6 = ar5;
      if (*(int *)(puVar5 + -0x124) == 1) {
        ar7 = (undefined *)0x0;
        ar6 = (undefined **)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c057a84)
                  (ar4 + DAT_8c057a4c._4_4_,0,0xffffffff,0);
        iVar1 = DAT_8c057a4c._4_4_;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057a54)
                  (ar4 + DAT_8c057a4c._4_4_,DAT_8c057a4c._4_4_,ar6,ar7);
        (*(code *)PTR_FUN_8c057a88)(ar4,iVar1,ar6,ar7);
        *(int *)(puVar5 + -0x140) = ar4;
        *(int *)(DAT_8c057a58 + *(int *)(puVar5 + -0x140)) =
             *(int *)(DAT_8c057a58 + *(int *)(puVar5 + -0x140)) + 1;
      }
      goto switchD_8c0572ba_caseD_5;
    case 0xc:
      *(undefined1 **)(puVar5 + -0x148) = puVar5 + -0xf0;
      (*(code *)PTR_Vec3_scale_8c057b40)
                (ar4 + 0x14,PTR_DAT_8c057b3c,&switchD_8c0572ba::switchdataD_8c0572c4,ar7);
      *(undefined1 **)(puVar5 + -0x148) = puVar5 + -0x100;
      (*(code *)PTR_Vec3_add_8c057b44)(ar5,puVar5 + -0xf0,ar6,ar7);
      (*(code *)PTR_FUN_8c057b48)(ar4,puVar5 + -0x100,ar5,ar7);
      (*(code *)PTR_Vec3_dtor_8c057b4c)(puVar5 + -0x100,0xffffffff,ar5,ar7);
      uVar2 = 0xffffffff;
      ar7 = PTR_Vec3_dtor_8c057b4c;
      (*(code *)PTR_Vec3_dtor_8c057b4c)(puVar5 + -0xf0,0xffffffff,ar5,PTR_Vec3_dtor_8c057b4c);
      ar6 = (undefined **)PTR_FUN_8c057b54;
      (*(code *)PTR_FUN_8c057b54)(ar4,uVar2,PTR_FUN_8c057b54,ar7);
      uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c057b5c)
                        (ar4 + DAT_8c057b58,DAT_8c057b58,ar6,ar7);
      *(undefined4 *)(puVar5 + -0x128) = uVar2;
      if (*(int *)(puVar5 + -0x128) == 1) {
        uVar4 = 0;
        *(undefined4 *)(DAT_8c057b60 + ar4) = 0;
      }
      goto switchD_8c0572ba_caseD_5;
    }
  }
switchD_8c0572ba_caseD_5:
  (*(code *)PTR_Vec3_assign_8c057b68)(ar4 + DAT_8c057b64,ar4 + 0x14,ar6,ar7);
  return uVar4;
}



/* FUN_8c057b6c @ 8c057b6c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c057b6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 unaff_r13;
  int iVar5;
  undefined4 unaff_r14;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 in_dr0;
  ulonglong uVar8;
  double dVar9;
  float fVar10;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar11;
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
  *(undefined4 *)((int)puVar6 + -0xc) = 1;
  *(undefined4 *)((int)puVar6 + -0x10) = in_PR;
  *(undefined4 *)((int)puVar6 + -0x9c) = ar5;
  *(undefined4 *)((int)puVar6 + -0x98) = ar6;
  *(undefined1 **)((int)puVar6 + -0xa0) = (undefined1 *)((int)puVar6 + -0x30);
  uVar3 = *(undefined4 *)((int)puVar6 + -0x9c);
  (*(code *)PTR_Vec3_sub_8c057de0)(*(undefined4 *)((int)puVar6 + -0x98),uVar3,ar6,ar7);
  *(undefined1 **)((int)puVar6 + -0xa0) = (undefined1 *)((int)puVar6 + -0x40);
  (*(code *)PTR_Vec3_normalize_8c057de4)((undefined1 *)((int)puVar6 + -0x30),uVar3,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c057de8)
            ((undefined1 *)((int)puVar6 + -0x20),(undefined1 *)((int)puVar6 + -0x40),ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c057dec)((undefined1 *)((int)puVar6 + -0x40),0xffffffff,ar6,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c057dec)((undefined1 *)((int)puVar6 + -0x30),0xffffffff,ar6,ar7);
  *(undefined1 **)((int)puVar6 + -0xa0) = (undefined1 *)((int)puVar6 + -0x50);
  (*(code *)PTR_FUN_8c057df0)(ar4 + 0x14,uVar3,ar6,ar7);
  *(undefined1 **)((int)puVar6 + -0xa0) = (undefined1 *)((int)puVar6 + -0x60);
  (*(code *)PTR_FUN_8c057df0)((undefined1 *)((int)puVar6 + DAT_8c057df4 + -0xa0),uVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c057df8)
            ((undefined1 *)((int)puVar6 + -0x50),(undefined1 *)((int)puVar6 + -0x60),ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar6 + -0x68) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)((int)puVar6 + -0x68));
  }
  else {
    *(undefined8 *)((int)puVar6 + -0x68) = in_dr0;
    in_xd14 = *(undefined8 *)((int)puVar6 + -0x68);
  }
  (*(code *)PTR_Vec3_dtor_8c057dec)((undefined1 *)((int)puVar6 + -0x60),0xffffffff,ar6,ar7);
  uVar7 = (uint)in_dr0;
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c057dec)((undefined1 *)((int)puVar6 + -0x50),0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c057e00)(ar4 + DAT_8c057dfc,uVar3,ar6,ar7);
  uVar8 = (ulonglong)uVar7;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x28) = uVar8;
  }
  *(undefined4 *)(DAT_8c057e04 + ar4) = 6;
  uVar3 = (*(code *)PTR_FUN_8c057e08)(ar4 + 0x14,(undefined1 *)((int)puVar6 + -0x20),ar6,ar7);
  *(undefined4 *)((int)puVar6 + -0x6c) = uVar3;
  *(undefined4 *)(DAT_8c057e0c + ar4) = *(undefined4 *)((int)puVar6 + -0x6c);
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44((undefined4)DAT_8c057e10,(int)uVar8);
  }
  else {
    dVar9 = (double)CONCAT44(DAT_8c057e10._4_4_,(undefined4)DAT_8c057e10);
  }
  fVar10 = SUB84(in_dr14,0);
  if (in_FPSCR_PR == '\0') {
    bVar11 = (float)((ulonglong)dVar9 >> 0x20) < fVar10;
  }
  else {
    bVar11 = dVar9 < in_dr14;
  }
  if (bVar11) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(_DAT_8c057e1c,SUB84(dVar9,0));
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c057e20,_DAT_8c057e1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = (float)((ulonglong)dVar9 >> 0x20) < fVar10;
    }
    else {
      bVar11 = dVar9 < in_dr14;
    }
    if (bVar11) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c057e10._4_4_) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c057e10._4_4_) = CONCAT44(0x3f800000,SUB84(dVar9,0));
      }
      iVar5 = 1;
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c057e20,SUB84(dVar9,0));
      }
      else {
        dVar9 = (double)CONCAT44(_DAT_8c057e24,DAT_8c057e20);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = fVar10 / (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar10 = SUB84(in_dr14 / dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c057e10._4_4_) = fVar10;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c057e10._4_4_) = in_xd14;
      }
      iVar5 = 1;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c057e18,SUB84(dVar9,0));
    }
    else {
      dVar9 = (double)CONCAT44(_DAT_8c057e1c,DAT_8c057e18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = fVar10 / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar10 = SUB84(in_dr14 / dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c057e10._4_4_) = fVar10;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c057e10._4_4_) = in_xd14;
    }
    iVar5 = 0;
  }
  if (*(int *)(DAT_8c057e0c + ar4) == 3) {
    a7 = 0;
    a6 = 0xffffffff;
    iVar4 = iVar5 + 0x41;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c057e2c)(ar4 + DAT_8c057e28,iVar4,0xffffffff,0);
    uVar3 = (*(code *)PTR_FUN_8c057e30)(ar4,iVar4,a6,a7);
    *(undefined4 *)((int)puVar6 + -0x70) = uVar3;
    a5 = *(undefined4 *)((int)puVar6 + -0x70);
    uVar3 = (*(code *)PTR_FUN_8c057e34)(ar4 + DAT_8c057e28,a5,a6,a7);
    *(undefined4 *)((int)puVar6 + -0x74) = uVar3;
    uVar3 = (*(code *)PTR_deref_u32_8c057e38)(*(undefined4 *)((int)puVar6 + -0x74),a5,a6,a7);
    *(undefined4 *)((int)puVar6 + -0x78) = uVar3;
    puVar2 = (undefined4 *)(ar4 + DAT_8c057e3c);
    puVar1 = *(undefined4 **)((int)puVar6 + -0x78);
    uVar3 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = puVar1[2];
    if (*(int *)(DAT_8c057e40 + ar4) == 3) {
      *(int *)((int)puVar6 + -0x88) = iVar5;
      *(undefined **)(DAT_8c057e3c + ar4) =
           PTR_DAT_8c057e44 +
           (*(int *)((int)puVar6 + -0x88) * 2 + *(int *)((int)puVar6 + -0x88)) * 8;
    }
    else {
      *(int *)((int)puVar6 + -0x8c) = iVar5;
      *(undefined **)(DAT_8c057e3c + ar4) =
           PTR_DAT_8c057e48 +
           (*(int *)((int)puVar6 + -0x8c) * 2 + *(int *)((int)puVar6 + -0x8c)) * 8;
    }
  }
  else {
    a7 = 0;
    a6 = 0xffffffff;
    iVar4 = iVar5 + 0x44;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c057e2c)(ar4 + DAT_8c057e28,iVar4,0xffffffff,0);
    uVar3 = (*(code *)PTR_FUN_8c057e30)(ar4,iVar4,a6,a7);
    *(undefined4 *)((int)puVar6 + -0x7c) = uVar3;
    a5 = *(undefined4 *)((int)puVar6 + -0x7c);
    uVar3 = (*(code *)PTR_FUN_8c057e34)(ar4 + DAT_8c057e28,a5,a6,a7);
    *(undefined4 *)((int)puVar6 + -0x80) = uVar3;
    uVar3 = (*(code *)PTR_deref_u32_8c057e38)(*(undefined4 *)((int)puVar6 + -0x80),a5,a6,a7);
    *(undefined4 *)((int)puVar6 + -0x84) = uVar3;
    puVar2 = (undefined4 *)(ar4 + DAT_8c057e3c);
    puVar1 = *(undefined4 **)((int)puVar6 + -0x84);
    uVar3 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = puVar1[2];
    if (*(int *)(DAT_8c057e40 + ar4) == 3) {
      *(int *)((int)puVar6 + -0x90) = iVar5;
      *(undefined **)(DAT_8c057e3c + ar4) =
           PTR_DAT_8c057e4c +
           (*(int *)((int)puVar6 + -0x90) * 2 + *(int *)((int)puVar6 + -0x90)) * 8;
    }
    else {
      *(int *)((int)puVar6 + -0x94) = iVar5;
      *(undefined **)(DAT_8c057e3c + ar4) =
           PTR_DAT_8c057e50 +
           (*(int *)((int)puVar6 + -0x94) * 2 + *(int *)((int)puVar6 + -0x94)) * 8;
    }
  }
  (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c057e54)(ar4 + DAT_8c057e28,a5,a6,a7);
  *(undefined4 *)((int)puVar6 + -100) = 1;
  (*(code *)PTR_Vec3_dtor_8c057dec)((undefined1 *)((int)puVar6 + -0x20),0xffffffff,a6,a7);
  return *(undefined4 *)((int)puVar6 + -100);
}



/* FUN_8c057e58 @ 8c057e58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c057e58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  undefined4 in_fr1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint uStack_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  uStack_c = in_PR;
  (*(code *)PTR_Vec3_set_zero_8c057fd8)(&fStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c057fd8)(&uStack_24,ar5,ar6,ar7);
  (*(code *)PTR_CAnimBody_GetCurFrame_8c057fe0)(ar4 + DAT_8c057fdc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c057fe8)
            (ar4 + DAT_8c057fdc,*(undefined4 *)(*(int *)(DAT_8c057fe4 + ar4) + 4),ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c057fec)(&uStack_24,auStack_30,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c057ff0)(auStack_30,0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ != '\0') {
    in_xd0 = CONCAT44(fStack_20,uStack_24);
    uStack_24 = in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c057ff4),uStack_24);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c057ff4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c057ff8),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c057ff8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  fStack_18 = fVar2;
  if (in_FPSCR_SZ != '\0') {
    fStack_18 = (float)in_xd0;
    in_xd0 = CONCAT44(fStack_1c,fStack_20);
    fStack_20 = fVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c057ffc),fStack_20);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c057ffc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c057ff8),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c057ff8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  fStack_14 = fVar2;
  if (in_FPSCR_SZ != '\0') {
    fStack_14 = (float)in_xd0;
    in_xd0 = CONCAT44(fStack_18,fStack_1c);
    fStack_1c = fVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c058000),fStack_1c);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c058000);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c057ff8),fVar2);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c057ff8);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_10 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_10 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_10 = (float)in_xd0;
    uStack_c = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (*(code *)PTR_vec3_copy_8c023d8c_8c057fec)(ar4 + DAT_8c057ff4,&uStack_24,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c058004)(auStack_3c,&fStack_18,ar6,ar7);
  (*(code *)PTR_FUN_8c058008)(ar4 + 0x14,auStack_3c,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c05800c)(ar4 + 0x14,auStack_4c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c058010)(auStack_4c,0xffffffff,ar6,ar7);
  a5 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c057ff0)(auStack_3c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_length_8c058014)(ar4 + 0x14,a5,ar6,ar7);
  iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c058018)(ar4 + DAT_8c057fdc,a5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(DAT_8c05801c + ar4) = 0;
    (*(code *)PTR_FUN_8c058020)(ar4 + DAT_8c057ff4,a5,ar6,ar7);
  }
  (*(code *)PTR_object_dtor_delete_8c057ff0)(&uStack_24,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c057ff0)(&fStack_18,0xffffffff,ar6,ar7);
  uStack_50 = (uint)(iVar1 != 1);
  return uStack_50;
}



/* FUN_8c058024 @ 8c058024 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c058024(int ar4,undefined *ar5,int ar6,undefined8 *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  float *pfVar8;
  undefined4 unaff_r8;
  int iVar9;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined *puVar10;
  undefined4 unaff_r11;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 unaff_r13;
  int iVar13;
  undefined4 unaff_r14;
  undefined1 *puVar14;
  uint uVar15;
  double in_dr0;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined4 in_fr3;
  float fVar19;
  undefined4 in_fr12;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar14 = auStack_c;
  }
  else {
    puVar14 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar14 + -4) = unaff_r14;
  *(undefined4 *)(puVar14 + -8) = unaff_r13;
  *(undefined4 *)(puVar14 + -0xc) = 1;
  *(undefined4 *)(puVar14 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar14 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar14 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar14 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar14 + -0x20) = in_PR;
  *(int *)(puVar14 + -0x1e0) = ar6;
  *(undefined8 **)(puVar14 + -0x1dc) = ar7;
  iVar9 = *(int *)(puVar14 + DAT_8c05808c + -0x1e0);
  uVar12 = 1;
  puVar5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c058094)(puVar14 + DAT_8c058090 + -0x1e0,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c058094)(puVar14 + DAT_8c058098 + -0x1e0,puVar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c058094)(puVar14 + DAT_8c05809c + -0x1e0,puVar5,ar6,ar7);
  if (*(int *)(DAT_8c0580a0 + ar4) == 0) {
    (*(code *)PTR_vec3_clear_8c058170)(ar4 + DAT_8c05816c,DAT_8c05816c,ar6,ar7);
    uVar15 = SUB84(in_dr0,0);
    iVar13 = DAT_8c058174;
    (*(code *)PTR_vec3_clear_8c058170)(ar4 + DAT_8c058174,DAT_8c058174,ar6,ar7);
    (*(code *)PTR_vec3_clear_8c058170)(ar4 + DAT_8c058178,iVar13,ar6,ar7);
    puVar5 = PTR_vec3_clear_8c058170;
    (*(code *)PTR_vec3_clear_8c058170)(ar4 + 0x6c,PTR_vec3_clear_8c058170,ar6,ar7);
    *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c05817c + -0x1e0;
    (*(code *)PTR_FUN_8c058180)(ar4 + 0x14,puVar5,ar6,ar7);
    *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c058184 + -0x1e0;
    (*(code *)PTR_Vec3_normalize_8c05818c)(puVar14 + DAT_8c058188 + -0x1e4,puVar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c058190)(ar4 + 0x14,puVar14 + DAT_8c058184 + -0x1e0,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c058194)(puVar14 + DAT_8c058184 + -0x1e0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c058194)(puVar14 + DAT_8c05817c + -0x1e0,0xffffffff,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c058198) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c058198) = (ulonglong)uVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar2 = *(undefined4 *)(ar5 + 4);
      uVar17 = CONCAT44(uVar2,uVar15);
      *(undefined4 *)(ar4 + DAT_8c05819c) = uVar2;
    }
    else {
      uVar17 = *(undefined8 *)(ar5 + 4);
      *(undefined8 *)(ar4 + DAT_8c05819c) = uVar17;
    }
    if (iVar9 == -1) {
      uVar6 = 3;
      iVar13 = 0;
      uVar2 = (*(code *)PTR_rand_range_8c0581a0)(ar4,0,3,ar7);
      *(undefined4 *)(puVar14 + DAT_8c058178 + -0x1e0) = uVar2;
      iVar9 = *(int *)(puVar14 + -0x1dc);
      if (iVar9 == 0x1b) {
        ar7 = (undefined8 *)0x0;
        uVar6 = 0xffffffff;
        iVar13 = *(int *)(puVar14 + DAT_8c058178 + -0x1e0) + 0x50;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0581c8)
                  (ar4 + DAT_8c0581c0._4_4_,iVar13,0xffffffff,0);
      }
      else if (iVar9 == 0x1c) {
        ar7 = (undefined8 *)0x0;
        uVar6 = 0xffffffff;
        iVar13 = *(int *)(puVar14 + DAT_8c058178 + -0x1e0) + 0x53;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c058218)
                  (ar4 + DAT_8c058210._4_4_,iVar13,0xffffffff,0);
      }
      else if (iVar9 == 0x1d) {
        ar7 = (undefined8 *)0x0;
        uVar6 = 0xffffffff;
        iVar13 = 0x53;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0581f0)
                  (ar4 + DAT_8c0581e8._4_4_,0x53,0xffffffff,0);
      }
      else if (iVar9 == 0x1e) {
        ar7 = (undefined8 *)0x0;
        uVar6 = 0xffffffff;
        iVar13 = 0x58;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05824c)
                  (ar4 + DAT_8c058244._4_4_,0x58,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c058250)(ar4 + DAT_8c058244._4_4_,iVar13,uVar6,ar7)
      ;
    }
    else if (iVar9 == DAT_8c058274) {
      ar7 = (undefined8 *)0x0;
      uVar6 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c058280)
                (ar4 + DAT_8c058278._4_4_,0x55,0xffffffff,0);
    }
    else {
      ar7 = (undefined8 *)0x0;
      uVar6 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c058350)
                (ar4 + DAT_8c058348._4_4_,iVar9,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c058354)(ar4 + DAT_8c058348._4_4_,iVar9,uVar6,ar7);
    }
    *(undefined4 *)(DAT_8c058358 + ar4) = 1;
    *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c05835c + -0x1e0;
    (*(code *)PTR_FUN_8c058360)(ar5,1,uVar6,ar7);
    *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c058364 + -0x1e0;
    (*(code *)PTR_FUN_8c058360)(*(undefined4 *)(puVar14 + -0x1e0),PTR_FUN_8c058360,uVar6,ar7);
    (*(code *)PTR_FUN_8c058368)
              (puVar14 + DAT_8c05835c + -0x1e0,puVar14 + DAT_8c058364 + -0x1e0,uVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + DAT_8c05836c + -0x1e0) = (int)((ulonglong)uVar17 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(puVar14 + DAT_8c05836c + -0x1e0));
    }
    else {
      *(undefined8 *)(puVar14 + DAT_8c05836c + -0x1e0) = uVar17;
      in_xd14 = *(undefined8 *)(puVar14 + DAT_8c05836c + -0x1e0);
    }
    (*(code *)PTR_Vec3_dtor_8c058370)(puVar14 + DAT_8c058364 + -0x1e0,0xffffffff,uVar6,ar7);
    uVar2 = (undefined4)uVar17;
    (*(code *)PTR_Vec3_dtor_8c058370)(puVar14 + DAT_8c05835c + -0x1e0,0xffffffff,uVar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c058374) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c058374) = CONCAT44(0x3f800000,uVar2);
    }
    in_dr0 = (double)CONCAT44(0x3f800000,uVar2);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c058378) = 0x3f800000;
    }
    else {
      *(double *)(ar4 + DAT_8c058378) = in_dr0;
    }
    pfVar8 = (float *)PTR_get_field_1c_026dd8_8c05837c;
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c05837c)
                      (ar4 + DAT_8c058348._4_4_,PTR_get_field_1c_026dd8_8c05837c,uVar6,ar7);
    *(undefined4 *)(puVar14 + DAT_8c058380 + -0x1e0) = uVar2;
    iVar9 = *(int *)(puVar14 + DAT_8c058380 + -0x1e0);
    if (iVar9 == 0x50) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0583f4,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = (double)CONCAT44(uRam8c0583f8,DAT_8c0583f4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(in_dr14,0) / (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar19 = SUB84(in_dr14 / in_dr0,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0583f0) = fVar19;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0583f0) = in_xd14;
      }
    }
    else if (iVar9 == 0x52) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((undefined4)DAT_8c0584d0,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = (double)CONCAT44(DAT_8c0584d0._4_4_,(undefined4)DAT_8c0584d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(in_dr14,0) / (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar19 = SUB84(in_dr14 / in_dr0,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0584cc) = fVar19;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0584cc) = in_xd14;
      }
    }
    else if (iVar9 == 0x58) {
      (*(code *)PTR_FUN_8c0583c4)(ar4,pfVar8,uVar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar14 + DAT_8c0583c8 + -0x1e0) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(puVar14 + DAT_8c0583c8 + -0x1e0) = in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar17 = CONCAT44(*(undefined4 *)(puVar14 + DAT_8c0583c8 + -0x1e0),SUB84(in_dr0,0));
        *(undefined4 *)(ar4 + DAT_8c0583cc) = *(undefined4 *)(puVar14 + DAT_8c0583c8 + -0x1e0);
      }
      else {
        uVar17 = *(undefined8 *)(puVar14 + DAT_8c0583c8 + -0x1e0);
        *(undefined8 *)(ar4 + DAT_8c0583cc) = uVar17;
      }
      pfVar8 = (float *)(ar4 + DAT_8c0583d0);
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c0583d4,(int)uVar17);
      }
      else {
        dVar16 = (double)CONCAT44(DAT_8c0583d8,DAT_8c0583d4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                  SUB84(in_dr14,0) - (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        dVar18 = in_dr14 - dVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0583d8,SUB84(dVar16,0));
      }
      else {
        in_dr0 = (double)CONCAT44(uRam8c0583dc,DAT_8c0583d8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar18,0) / (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar18 / in_dr0,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar8 = fVar19;
      }
      else {
        *(undefined8 *)pfVar8 = in_xd14;
      }
    }
    (*(code *)PTR_FUN_8c0584d8)(ar4 + DAT_8c0584d0._4_4_,pfVar8,uVar6,ar7);
    puVar5 = PTR_FUN_8c0584d8;
    (*(code *)PTR_FUN_8c0584d8)(ar4 + DAT_8c0584dc,PTR_FUN_8c0584d8,uVar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0584e0)(ar4,puVar5,uVar6,ar7);
    *(undefined4 *)(puVar14 + DAT_8c0584e4 + -0x1e0) = uVar2;
    uVar2 = *(undefined4 *)(puVar14 + DAT_8c0584e4 + -0x1e0);
    uVar1 = (*(code *)PTR_FUN_8c0584ec)(ar4 + DAT_8c0584e8,uVar2,uVar6,ar7);
    *(undefined4 *)(puVar14 + -0x164) = uVar1;
    uVar2 = (*(code *)PTR_deref_u32_8c0584f0)(*(undefined4 *)(puVar14 + -0x164),uVar2,uVar6,ar7);
    *(undefined4 *)(puVar14 + -0x168) = uVar2;
    puVar4 = (undefined4 *)(ar4 + DAT_8c0584f4);
    puVar3 = *(undefined4 **)(puVar14 + -0x168);
    uVar2 = puVar3[1];
    *puVar4 = *puVar3;
    puVar4[1] = uVar2;
    puVar5 = (undefined *)puVar3[2];
    puVar4[2] = puVar5;
    ar6 = DAT_8c0584f8;
    *(int *)(puVar14 + -0x1b8) = ar4;
    *(int *)(DAT_8c0584f8 + *(int *)(puVar14 + -0x1b8)) =
         *(int *)(DAT_8c0584f8 + *(int *)(puVar14 + -0x1b8)) + 1;
    *(undefined4 *)(DAT_8c0584fc + ar4) = 0;
  }
  else if (*(int *)(DAT_8c0580a0 + ar4) != 1) goto LAB_8c058cde;
  fVar19 = 0.0;
  uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c058500)(ar4 + DAT_8c0584e8,puVar5,ar6,ar7);
  *(undefined4 *)(puVar14 + -0x16c) = uVar2;
  puVar10 = (undefined *)0x0;
  puVar11 = (undefined *)0x0;
  switch(*(undefined4 *)(puVar14 + -0x16c)) {
  case 0x52:
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0585c8)(ar4 + DAT_8c0585c4,puVar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + -0x170) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(DAT_8c0585cc,*(undefined4 *)(puVar14 + -0x170));
    }
    else {
      *(double *)(puVar14 + -0x170) = in_dr0;
      in_xd0 = *(undefined8 *)(puVar14 + -0x170);
      in_dr0 = (double)CONCAT44(DAT_8c0585d0,DAT_8c0585cc);
    }
    if (((in_FPSCR_PR != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) &&
        (*(int *)(DAT_8c0585d0 + ar4) == 0)) &&
       (puVar5 = ar5,
       (*(code *)PTR_Vec3_assign_8c0585d8)(puVar14 + DAT_8c0585d4 + -0x1e0,ar5,ar6,ar7),
       *(char *)(DAT_8c0585dc + ar4) == '\x01')) {
      ar7 = (undefined8 *)0x5;
      ar6 = 1;
      puVar5 = puVar14 + DAT_8c0585d4 + -0x1e0;
      (**(code **)(DAT_8c0585e8 + **(int **)(DAT_8c0585e0._4_4_ + ar4)))
                (*(int **)(DAT_8c0585e0._4_4_ + ar4),puVar5,1,5);
    }
  case 0x50:
  case 0x51:
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c0585ec)(ar4 + DAT_8c0585c4,puVar5,ar6,ar7);
    *(undefined4 *)(puVar14 + -0x174) = uVar2;
    *(int *)(puVar14 + -0x1bc) = *(int *)(puVar14 + -0x174) + -0x50;
    puVar10 = PTR_DAT_8c0585f0 + (*(int *)(puVar14 + -0x1bc) * 2 + *(int *)(puVar14 + -0x1bc)) * 8;
    *(int *)(puVar14 + -0x1c0) = *(int *)(puVar14 + -0x174) + -0x50;
    puVar11 = PTR_DAT_8c0585f0 + (*(int *)(puVar14 + -0x1c0) * 2 + *(int *)(puVar14 + -0x1c0)) * 8;
    break;
  case 0x53:
  case 0x54:
  case 0x55:
    puVar5 = PTR_get_field_1c_026dd8_8c05863c;
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c05863c)
                      (ar4 + DAT_8c058638,PTR_get_field_1c_026dd8_8c05863c,ar6,ar7);
    *(undefined4 *)(puVar14 + -0x178) = uVar2;
    *(int *)(puVar14 + -0x1c4) = *(int *)(puVar14 + -0x178) + -0x53;
    puVar10 = PTR_DAT_8c058640 + (*(int *)(puVar14 + -0x1c4) * 2 + *(int *)(puVar14 + -0x1c4)) * 8;
    *(int *)(puVar14 + -0x1c8) = *(int *)(puVar14 + -0x178) + -0x53;
    puVar11 = PTR_DAT_8c058640 + (*(int *)(puVar14 + -0x1c8) * 2 + *(int *)(puVar14 + -0x1c8)) * 8;
    break;
  case 0x58:
    (*(code *)PTR_CAnimBody_GetCurFrame_8c05890c)(ar4 + DAT_8c058908,puVar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + -0x17c) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(DAT_8c058910,*(undefined4 *)(puVar14 + -0x17c));
    }
    else {
      *(double *)(puVar14 + -0x17c) = in_dr0;
      in_xd0 = *(undefined8 *)(puVar14 + -0x17c);
      in_dr0 = (double)CONCAT44(DAT_8c058914,DAT_8c058910);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr0,0)) {
      in_dr0 = (double)CONCAT44(0x3f800000,SUB84(in_dr0,0));
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c058914) = 0x3f800000;
      }
      else {
        *(double *)(ar4 + DAT_8c058914) = in_dr0;
      }
    }
    fVar19 = 0.0;
    puVar10 = PTR_DAT_8c058918;
    puVar11 = PTR_DAT_8c058918;
  }
  uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c05891c)(ar4 + DAT_8c058908,puVar5,ar6,ar7);
  *(undefined4 *)(puVar14 + -0x180) = uVar2;
  uVar6 = *(undefined4 *)(puVar14 + -0x180);
  uVar2 = (*(code *)PTR_FUN_8c058920)(ar4 + DAT_8c058908,uVar6,ar6,ar7);
  *(undefined4 *)(puVar14 + -0x184) = uVar2;
  uVar2 = (*(code *)PTR_deref_u32_8c058924)(*(undefined4 *)(puVar14 + -0x184),uVar6,ar6,ar7);
  *(undefined4 *)(puVar14 + -0x188) = uVar2;
  puVar3 = (undefined4 *)(ar4 + DAT_8c058928);
  puVar4 = *(undefined4 **)(puVar14 + -0x188);
  uVar2 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar2;
  puVar3[2] = puVar4[2];
  *(undefined **)(DAT_8c058928 + ar4) = puVar11;
  (*(code *)PTR_CAnimBody_GetCurFrame_8c05890c)(ar4 + DAT_8c058908,uVar6,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar14 + -0x18c) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(double *)(puVar14 + -0x18c) = in_dr0;
  }
  *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c05892c + -0x1e0;
  (*(code *)PTR_FUN_8c058930)(ar4 + DAT_8c058908,**(undefined4 **)(DAT_8c058928 + ar4),ar6,ar7);
  uVar6 = SUB84(in_dr0,0);
  (*(code *)PTR_Vec3_assign_8c058938)
            (puVar14 + DAT_8c058934 + -0x1e0,puVar14 + DAT_8c05892c + -0x1e0,ar6,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c05893c)(puVar14 + DAT_8c05892c + -0x1e0,0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(puVar14 + DAT_8c058940 + -0x1e0),uVar6);
  }
  else {
    dVar16 = *(double *)(puVar14 + DAT_8c058940 + -0x1e0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - fVar19,SUB84(dVar16,0));
  }
  else {
    dVar16 = dVar16 - (double)CONCAT44(in_fr12,fVar19);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar14 + DAT_8c058944 + -0x1e0) = (int)((ulonglong)dVar16 >> 0x20);
    uVar17 = CONCAT44(*(undefined4 *)(puVar14 + DAT_8c058934 + -0x1e0),SUB84(dVar16,0));
    *(undefined4 *)(puVar14 + DAT_8c058948 + -0x1e0) =
         *(undefined4 *)(puVar14 + DAT_8c058934 + -0x1e0);
  }
  else {
    *(double *)(puVar14 + DAT_8c058944 + -0x1e0) = dVar16;
    uVar17 = *(undefined8 *)(puVar14 + DAT_8c058934 + -0x1e0);
    *(undefined8 *)(puVar14 + DAT_8c058948 + -0x1e0) = uVar17;
  }
  uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c05891c)(ar4 + DAT_8c058908,uVar2,ar6,ar7);
  *(undefined4 *)(puVar14 + -400) = uVar2;
  uVar6 = *(undefined4 *)(puVar14 + -400);
  uVar2 = (*(code *)PTR_FUN_8c058920)(ar4 + DAT_8c058908,uVar6,ar6,ar7);
  *(undefined4 *)(puVar14 + -0x194) = uVar2;
  uVar2 = (*(code *)PTR_deref_u32_8c058924)(*(undefined4 *)(puVar14 + -0x194),uVar6,ar6,ar7);
  *(undefined4 *)(puVar14 + -0x198) = uVar2;
  puVar3 = (undefined4 *)(ar4 + DAT_8c058928);
  puVar4 = *(undefined4 **)(puVar14 + -0x198);
  uVar2 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar2;
  uVar2 = puVar4[2];
  puVar3[2] = uVar2;
  *(undefined **)(DAT_8c058928 + ar4) = puVar10;
  (*(code *)PTR_CAnimBody_GetCurFrame_8c05890c)(ar4 + DAT_8c058908,uVar2,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar14 + -0x19c) = (int)((ulonglong)uVar17 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar14 + -0x19c) = uVar17;
  }
  *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c05894c + -0x1e0;
  uVar2 = **(undefined4 **)(DAT_8c058928 + ar4);
  (*(code *)PTR_FUN_8c058930)(ar4 + DAT_8c058908,uVar2,uVar2,ar7);
  uVar6 = (undefined4)uVar17;
  puVar5 = PTR_Vec3_assign_8c058938;
  (*(code *)PTR_Vec3_assign_8c058938)
            (puVar14 + DAT_8c058934 + -0x1e0,puVar14 + DAT_8c05894c + -0x1e0,uVar2,
             PTR_Vec3_assign_8c058938);
  (*(code *)PTR_Vec3_dtor_8c05893c)(puVar14 + DAT_8c05894c + -0x1e0,0xffffffff,0xffffffff,puVar5);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)(puVar14 + DAT_8c058950 + -0x1e0),uVar6);
    *(undefined4 *)(puVar14 + DAT_8c058954 + -0x1e0) =
         *(undefined4 *)(puVar14 + DAT_8c058950 + -0x1e0);
  }
  else {
    uVar17 = *(undefined8 *)(puVar14 + DAT_8c058950 + -0x1e0);
    *(undefined8 *)(puVar14 + DAT_8c058954 + -0x1e0) = uVar17;
  }
  uVar2 = (undefined4)uVar17;
  *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c058958 + -0x1e0;
  puVar7 = puVar14 + DAT_8c058944 + -0x1e4;
  (*(code *)PTR_Vec3_sub_8c058960)(puVar7,ar4 + DAT_8c05895c,puVar7,ar4 + DAT_8c05895c);
  puVar5 = PTR_Vec3_assign_8c058938;
  (*(code *)PTR_Vec3_assign_8c058938)
            (ar4 + DAT_8c058964,puVar14 + DAT_8c058958 + -0x1e0,puVar7,PTR_Vec3_assign_8c058938);
  (*(code *)PTR_Vec3_dtor_8c05893c)(puVar14 + DAT_8c058958 + -0x1e0,0xffffffff,0xffffffff,puVar5);
  *(int *)(puVar14 + -0x1cc) = ar4;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(*(int *)(puVar14 + -0x1cc) + DAT_8c058968);
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)(puVar14 + -0x1cc) + DAT_8c058968);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c058914),uVar2);
  }
  else {
    dVar16 = *(double *)(ar4 + DAT_8c058914);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar19 = SUB84(dVar16 * dVar16,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)(puVar14 + -0x1cc) + DAT_8c058968) = fVar19;
  }
  else {
    *(undefined8 *)(*(int *)(puVar14 + -0x1cc) + DAT_8c058968) = in_xd0;
  }
  iVar9 = DAT_8c058970;
  *(int *)(puVar14 + -0x1d0) = ar4;
  pfVar8 = (float *)(*(int *)(puVar14 + -0x1d0) + DAT_8c05896c);
  if (in_FPSCR_SZ == '\0') {
    fVar19 = *pfVar8;
  }
  else {
    in_xd0 = *(undefined8 *)pfVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c058970),fVar19);
  }
  else {
    dVar16 = *(double *)(ar4 + DAT_8c058970);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar16 >> 0x20);
    dVar16 = (double)CONCAT44(fVar19,SUB84(dVar16,0) * fVar19);
  }
  else {
    dVar16 = dVar16 * dVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(*(int *)(puVar14 + -0x1d0) + DAT_8c05896c) = SUB84(dVar16,0);
  }
  else {
    *(undefined8 *)(*(int *)(puVar14 + -0x1d0) + DAT_8c05896c) = in_xd0;
  }
  *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c058974 + -0x1e0;
  ar7 = (undefined8 *)PTR_FUN_8c058978;
  (*(code *)PTR_FUN_8c058978)(ar4 + 0x14,iVar9,pfVar8,PTR_FUN_8c058978);
  puVar7 = puVar14 + DAT_8c05897c + -0x1e0;
  (*(code *)PTR_Vec3_ctor_xyz_8c058980)(puVar7,iVar9,puVar7,ar7);
  (*(code *)PTR_FUN_8c058984)
            (puVar14 + DAT_8c058974 + -0x1e0,puVar14 + DAT_8c05897c + -0x1e0,puVar7,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar14 + -0x1a0) = (int)((ulonglong)dVar16 >> 0x20);
  }
  else {
    *(double *)(puVar14 + -0x1a0) = dVar16;
  }
  (*(code *)PTR_Vec3_dtor_8c05893c)(puVar14 + DAT_8c05897c + -0x1e0,0xffffffff,puVar7,ar7);
  uVar6 = SUB84(dVar16,0);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c05893c)(puVar14 + DAT_8c058974 + -0x1e0,0xffffffff,puVar7,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c058980)(puVar14 + DAT_8c058988 + -0x1e0,uVar2,puVar7,ar7);
  uVar2 = (*(code *)PTR_FUN_8c05898c)(ar4 + 0x14,puVar14 + DAT_8c058988 + -0x1e0,puVar7,ar7);
  *(undefined4 *)(puVar14 + -0x1a4) = uVar2;
  *(undefined4 *)(puVar14 + DAT_8c058990 + -0x1e0) = *(undefined4 *)(puVar14 + -0x1a4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c05893c)(puVar14 + DAT_8c058988 + -0x1e0,0xffffffff,puVar7,ar7);
  if (*(int *)(puVar14 + DAT_8c058990 + -0x1e0) == 3) {
    (*(code *)PTR_Vec3_set_xyz_8c0589f0)(puVar14 + DAT_8c0589ec + -0x1e0,uVar2,puVar7,ar7);
    *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c0589f4 + -0x1e0;
    (*(code *)PTR_FUN_8c058a00)(ar4 + DAT_8c0589fc,puVar14 + DAT_8c0589f8 + -0x1e4,puVar7,ar7);
    (*(code *)PTR_Vec3_assign_8c058a04)
              (ar4 + DAT_8c0589fc,puVar14 + DAT_8c0589f4 + -0x1e0,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c058a08)(puVar14 + DAT_8c0589f4 + -0x1e0,0xffffffff,puVar7,ar7);
    (*(code *)PTR_object_dtor_delete_8c058a0c)
              (puVar14 + DAT_8c0589ec + -0x1e0,0xffffffff,puVar7,ar7);
  }
  else if (*(int *)(puVar14 + DAT_8c058990 + -0x1e0) == 4) {
    (*(code *)PTR_Vec3_set_xyz_8c058b64)(puVar14 + DAT_8c058b60 + -0x1e0,uVar2,puVar7,ar7);
    *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c058b68 + -0x1e0;
    (*(code *)PTR_FUN_8c058b74)(ar4 + DAT_8c058b70,puVar14 + DAT_8c058b6c + -0x1e4,puVar7,ar7);
    (*(code *)PTR_Vec3_assign_8c058b78)
              (ar4 + DAT_8c058b70,puVar14 + DAT_8c058b68 + -0x1e0,puVar7,ar7);
    (*(code *)PTR_Vec3_dtor_8c058b7c)(puVar14 + DAT_8c058b68 + -0x1e0,0xffffffff,puVar7,ar7);
    (*(code *)PTR_object_dtor_delete_8c058b80)
              (puVar14 + DAT_8c058b60 + -0x1e0,0xffffffff,puVar7,ar7);
  }
  (*(code *)PTR_Vec3_assign_8c058b78)(ar4 + DAT_8c058b88,puVar14 + DAT_8c058b84 + -0x1e0,puVar7,ar7)
  ;
  iVar9 = DAT_8c058b8c;
  *(int *)(puVar14 + -0x1d4) = ar4;
  pfVar8 = (float *)(*(int *)(puVar14 + -0x1d4) + DAT_8c058b8c);
  if (in_FPSCR_SZ == '\0') {
    uVar6 = *(undefined4 *)(*(int *)(puVar14 + -0x1d4) + DAT_8c058b8c);
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)(puVar14 + -0x1d4) + DAT_8c058b8c);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c058b90),uVar6);
  }
  else {
    dVar16 = *(double *)(ar4 + DAT_8c058b90);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar19 = SUB84(dVar16 + dVar16,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar8 = fVar19;
  }
  else {
    *(undefined8 *)pfVar8 = in_xd0;
  }
  *(int *)(puVar14 + -0x1d8) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
  }
  else {
    dVar16 = *(double *)(ar5 + 4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c058b90),fVar19);
  }
  else {
    dVar18 = *(double *)(ar4 + DAT_8c058b90);
  }
  fVar19 = (float)((ulonglong)dVar18 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar19,SUB84(dVar16,0));
  }
  else {
    dVar16 = dVar16 + dVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(fVar19,*(undefined4 *)(ar4 + DAT_8c058b8c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c058b8c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar18,0) - (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar19 = SUB84(dVar18 - dVar16,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x1d8) + DAT_8c058b90),fVar19);
  }
  else {
    dVar16 = *(double *)(*(int *)(puVar14 + -0x1d8) + DAT_8c058b90);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar19 = SUB84(dVar16 + dVar16,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)(puVar14 + -0x1d8) + DAT_8c058b90) = fVar19;
  }
  else {
    *(undefined8 *)(*(int *)(puVar14 + -0x1d8) + DAT_8c058b90) = in_xd0;
  }
  uVar17 = CONCAT44(0x3f800000,fVar19);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c058b94) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c058b94) = uVar17;
  }
  uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c058b9c)(ar4 + DAT_8c058b98,pfVar8,iVar9,ar7);
  *(undefined4 *)(puVar14 + -0x1a8) = uVar2;
  if (*(int *)(puVar14 + -0x1a8) == 0x55) {
    (*(code *)PTR_CAnimBody_GetCurFrame_8c058ba0)(ar4 + DAT_8c058b98,pfVar8,iVar9,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar14 + -0x1ac) = (int)((ulonglong)uVar17 >> 0x20);
      uVar17 = CONCAT44(DAT_8c058ba4,*(undefined4 *)(puVar14 + -0x1ac));
    }
    else {
      *(undefined8 *)(puVar14 + -0x1ac) = uVar17;
      uVar17 = CONCAT44(DAT_8c058ba8,DAT_8c058ba4);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar17 >> 0x20) < (float)uVar17) {
      ar7 = (undefined8 *)(ar4 + DAT_8c058b94);
      if (in_FPSCR_SZ == '\0') {
        uVar17 = CONCAT44(DAT_8c058ba8,(float)uVar17);
        *(undefined4 *)ar7 = DAT_8c058ba8;
      }
      else {
        uVar17 = CONCAT44(PTR_s_CAnimBody_AdvanceFrame_033ba0_8c058bac,DAT_8c058ba8);
        *ar7 = uVar17;
      }
    }
  }
  uVar6 = (undefined4)uVar17;
  iVar9 = ar4 + DAT_8c058b94;
  ar6 = DAT_8c058b94;
  uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c058bac)
                    (ar4 + DAT_8c058b98,iVar9,DAT_8c058b94,ar7);
  *(undefined4 *)(puVar14 + -0x1b0) = uVar2;
  if (*(int *)(puVar14 + -0x1b0) != 1) goto LAB_8c058cde;
  uVar12 = (*(code *)PTR_get_field_1c_026dd8_8c058b9c)(ar4 + DAT_8c058b98,iVar9,ar6,ar7);
  *(undefined4 *)(puVar14 + -0x1b4) = uVar12;
  iVar13 = *(int *)(puVar14 + -0x1b4);
  if (iVar13 == 0x50) {
    *(undefined4 *)(DAT_8c058bc8 + ar4) = 1;
    *(undefined4 *)(DAT_8c058bcc + ar4) = 0;
  }
  else {
    if (iVar13 != 0x51) {
      if (iVar13 != 0x52) {
        *(undefined4 *)(DAT_8c058d34 + ar4) = 2;
        *(undefined4 *)(DAT_8c058d38 + ar4) = 0;
        goto LAB_8c058cae;
      }
      *(undefined4 *)(DAT_8c058c68 + ar4) = 2;
      (*(code *)PTR_Vec3_set_xyz_8c058c74)(puVar14 + DAT_8c058c6c._4_4_ + -0x1e0,iVar9,ar6,ar7);
      *(undefined1 **)(puVar14 + -0x1e4) = puVar14 + DAT_8c058c78 + -0x1e0;
      (*(code *)PTR_FUN_8c058c80)(ar4 + 0x14,puVar14 + DAT_8c058c7c + -0x1e4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c058c84)(ar4 + 0x14,puVar14 + DAT_8c058c78 + -0x1e0,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c058c88)(puVar14 + DAT_8c058c78 + -0x1e0,0xffffffff,ar6,ar7);
      uVar12 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c058c8c)
                (puVar14 + DAT_8c058c6c._4_4_ + -0x1e0,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_length_8c058c90)(ar4 + 0x14,uVar12,ar6,ar7);
      iVar9 = ar4 + 0x14;
      (*(code *)PTR_Vec3_assign_8c058c84)(ar4 + DAT_8c058c94,iVar9,ar6,ar7);
    }
    *(undefined4 *)(DAT_8c058c68 + ar4) = 2;
    *(undefined4 *)(DAT_8c058c98 + ar4) = 0;
  }
LAB_8c058cae:
  uVar12 = 0;
  (*(code *)PTR_FUN_8c058d40)(ar4 + DAT_8c058d3c,iVar9,ar6,ar7);
  (*(code *)PTR_FUN_8c058d40)(ar4 + DAT_8c058d44,iVar9,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c058d48) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c058d48) = CONCAT44(0x3f800000,uVar6);
  }
LAB_8c058cde:
  *(undefined4 *)(puVar14 + DAT_8c058d4c + -0x1e0) = uVar12;
  (*(code *)PTR_Vec3_dtor_8c058d54)(puVar14 + DAT_8c058d50 + -0x1e0,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c058d54)(puVar14 + DAT_8c058d58 + -0x1e0,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c058d54)(puVar14 + DAT_8c058d5c + -0x1e0,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar14 + DAT_8c058d4c + -0x1e0);
}



/* FUN_8c058d60 @ 8c058d60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c058d60(int ar4,undefined4 ar5,undefined1 *ar6,int ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined *a5;
  undefined1 *a5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  float fVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [244];
  
  uVar4 = 1;
  uStack_124 = 1;
  a5 = PTR_Vec3_ctor_zero_8c058dc8;
  puStack_170 = ar6;
  iStack_16c = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c058dc8)
            ((int)&puStack_170 + DAT_8c058dc4,PTR_Vec3_ctor_zero_8c058dc8,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c058dc8)((int)&puStack_170 + DAT_8c058dcc,a5,ar6,ar7);
  a5_00 = puStack_170;
  (*(code *)PTR_Vec3_assign_8c058dd0)((int)&puStack_170 + DAT_8c058dcc,puStack_170,ar6,ar7);
  *(undefined4 *)(DAT_8c058dd4 + ar4) = 1;
  switch(*(undefined4 *)(DAT_8c058dd8 + ar4)) {
  case 0:
    *(undefined4 *)(DAT_8c058e38 + ar4) = 0;
    ar6 = (undefined1 *)(ar4 + DAT_8c058e3c);
    ar7 = iStack_16c;
    iStack_134 = (*(code *)PTR_FUN_8c058e40)(ar4,ar5,ar6,iStack_16c);
    if (iStack_134 == 0) {
      *(int *)(DAT_8c058e44 + ar4) = *(int *)(DAT_8c058e44 + ar4) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      iStack_150 = ar4;
    }
    break;
  case 1:
    uVar3 = ar5;
    iStack_138 = (*(code *)PTR_FUN_8c058f80)(ar4,ar5,ar6,ar7);
    if (iStack_138 == 0) {
      *(int *)(DAT_8c058f84 + ar4) = *(int *)(DAT_8c058f84 + ar4) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c058f88);
      iStack_154 = ar4;
      (*(code *)PTR_FUN_8c058f90)((int)&puStack_174 + DAT_8c058f8c,uVar3,ar6,ar7);
      puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c058f94);
      (*(code *)PTR_FUN_8c058f90)(ar5,uVar3,ar6,ar7);
      puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c058f98);
      iVar2 = (int)&puStack_174 + DAT_8c058f9c;
      (*(code *)PTR_Vec3_sub_8c058fa4)((int)&puStack_174 + DAT_8c058fa0,iVar2,ar6,ar7);
      puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c058fa8);
      (*(code *)PTR_Vec3_normalize_8c058fb0)((int)&puStack_174 + DAT_8c058fac,iVar2,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c058fb4)(ar4 + 0x54,(int)&puStack_170 + DAT_8c058fa8,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c058fb8)((int)&puStack_170 + DAT_8c058fa8,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c058fb8)((int)&puStack_170 + DAT_8c058f98,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c058fb8)((int)&puStack_170 + DAT_8c058f94,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c058fb8)((int)&puStack_170 + DAT_8c058f88,0xffffffff,ar6,ar7);
      puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c058fbc);
      (*(code *)PTR_Vec3_scale_8c058fc4)(ar4 + 0x54,PTR_DAT_8c058fc0,ar6,ar7);
      puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c058fc8);
      (*(code *)PTR_Vec3_sub_8c058fa4)
                ((int)&puStack_174 + DAT_8c058f8c,(int)&puStack_174 + DAT_8c058fcc,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c058fb4)
                (ar4 + DAT_8c058fd0,(int)&puStack_170 + DAT_8c058fc8,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c058fb8)((int)&puStack_170 + DAT_8c058fc8,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c058fb8)((int)&puStack_170 + DAT_8c058fbc,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + DAT_8c058fd4));
      }
      else {
        dVar6 = *(double *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
        (*(code *)PTR_Vec3_assign_8c058fb4)(ar4 + DAT_8c058fd0,ar5,ar6,ar7);
      }
      *(undefined4 *)(DAT_8c058fd8 + ar4) = 1;
    }
    break;
  case 2:
    puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c0590e0);
    (*(code *)PTR_FUN_8c0590e8)((int)&puStack_174 + DAT_8c0590e4,a5_00,ar6,ar7);
    puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c0590ec);
    (*(code *)PTR_FUN_8c0590e8)(ar5,a5_00,ar6,ar7);
    puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c0590f0);
    iVar2 = (int)&puStack_174 + DAT_8c0590f4;
    (*(code *)PTR_Vec3_sub_8c0590fc)((int)&puStack_174 + DAT_8c0590f8,iVar2,ar6,ar7);
    puStack_174 = (undefined1 *)((int)&puStack_170 + DAT_8c059100);
    (*(code *)PTR_Vec3_normalize_8c059108)((int)&puStack_174 + DAT_8c059104,iVar2,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c05910c)(ar4 + 0x54,(int)&puStack_170 + DAT_8c059100,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c059110)((int)&puStack_170 + DAT_8c059100,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c059110)((int)&puStack_170 + DAT_8c0590f0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c059110)((int)&puStack_170 + DAT_8c0590ec,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c059110)((int)&puStack_170 + DAT_8c0590e0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c059118)((int)&puStack_170 + DAT_8c059114,ar4 + 0x54,ar6,ar7);
    ar7 = (int)&puStack_170 + DAT_8c059114;
    ar6 = (undefined1 *)(ar4 + DAT_8c05911c);
    iStack_13c = (*(code *)PTR_FUN_8c059120)(ar4,ar5,ar6,ar7);
    uStack_12c = (uint)(iStack_13c == 0);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c059110)((int)&puStack_170 + DAT_8c059114,0xffffffff,ar6,ar7);
    if (uStack_12c != 0) {
      *(int *)(DAT_8c059124 + ar4) = *(int *)(DAT_8c059124 + ar4) + 1;
      iStack_158 = ar4;
      (*(code *)PTR_FUN_8c05912c)(ar4 + DAT_8c059128,uVar3,ar6,ar7);
      *(undefined4 *)(DAT_8c059130 + ar4) = 1;
    }
    break;
  case 3:
    puStack_174 = (undefined1 *)0x50;
    ar7 = 0x1d;
    ar6 = (undefined1 *)((int)&puStack_174 + DAT_8c059198);
    iVar2 = (*(code *)PTR_FUN_8c05919c)(ar4,ar5,ar6,0x1d);
    uStack_144 = CONCAT44(iVar2,(undefined4)uStack_144);
    if (iVar2 == 0) {
      (*(code *)PTR_FUN_8c0591a4)(ar4 + DAT_8c0591a0,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0591a4)(ar4 + DAT_8c0591a8,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c0591ac + ar4) = 0;
      *(int *)(DAT_8c0591b0 + ar4) = *(int *)(DAT_8c0591b0 + ar4) + 1;
      iStack_15c = ar4;
    }
    *(undefined4 *)(DAT_8c0591b4 + ar4) = 1;
    break;
  case 4:
    (*(code *)PTR_Vec3_ctor_xyz_8c059304)((int)&puStack_170 + DAT_8c0592fc._4_4_,a5_00,ar6,ar7);
    puStack_174 = auStack_100;
    (*(code *)PTR_Vec3_add_8c05930c)(ar5,(int)&puStack_174 + DAT_8c059308,ar6,ar7);
    ar6 = auStack_100;
    (*(code *)PTR_FUN_8c059310)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c059314)(auStack_100,0xffffffff,ar6,ar7);
    a5_00 = (undefined1 *)0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c059314)((int)&puStack_170 + DAT_8c0592fc._4_4_,0xffffffff,ar6,ar7);
    (*(code *)PTR_FUN_8c05931c)(ar4,a5_00,ar6,ar7);
    uVar1 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_144 = CONCAT44(uStack_144._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
      uVar1 = uStack_144;
    }
    uStack_144 = uVar1;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44((undefined4)uStack_144,(int)in_dr0);
      *(undefined4 *)(ar4 + DAT_8c059320) = (undefined4)uStack_144;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c059320) = uStack_144;
      in_dr0 = uStack_144;
    }
    *(undefined4 *)(DAT_8c059324 + ar4) = 0;
    *(int *)(DAT_8c059328 + ar4) = *(int *)(DAT_8c059328 + ar4) + 1;
    iStack_160 = ar4;
  case 5:
    iVar2 = (*(code *)PTR_FUN_8c05932c)(ar4,a5_00,ar6,ar7);
    uStack_14c = CONCAT44(iVar2,(undefined4)uStack_14c);
    if (iVar2 == 0) {
      ar7 = 0;
      ar6 = (undefined1 *)0xffffffff;
      uVar3 = 0x1a;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c059338)
                (ar4 + DAT_8c059330._4_4_,0x1a,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05933c)(ar4 + DAT_8c059330._4_4_,uVar3,ar6,ar7);
      puStack_174 = auStack_110;
      (*(code *)PTR_FUN_8c059340)(ar4 + 0x14,uVar3,ar6,ar7);
      (*(code *)PTR_Vec3_ctor_xyz_8c059304)(auStack_120,uVar3,ar6,ar7);
      (*(code *)PTR_FUN_8c059344)(auStack_110,auStack_120,ar6,ar7);
      uVar1 = in_dr0;
      fVar5 = DAT_8c059348;
      fVar7 = fRam8c05934c;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
        uStack_14c = CONCAT44(uStack_14c._4_4_,fVar5);
        uVar1 = uStack_14c;
        fVar7 = DAT_8c059348;
      }
      uStack_14c = uVar1;
      uStack_130 = (uint)(in_FPSCR_PR == '\0' && fVar7 < fVar5);
      (*(code *)PTR_Vec3_dtor_8c059314)(auStack_120,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c059314)(auStack_110,0xffffffff,ar6,ar7);
      if (uStack_130 == 0) {
        *(int *)(DAT_8c059364 + ar4) = *(int *)(DAT_8c059364 + ar4) + 1;
        iStack_168 = ar4;
      }
      else {
        *(int *)(DAT_8c059328 + ar4) = *(int *)(DAT_8c059328 + ar4) + -1;
        iStack_164 = ar4;
      }
    }
    break;
  case 6:
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0593b8)(ar4 + DAT_8c0593b4,a5_00,ar6,ar7);
    *(undefined4 *)(DAT_8c0593bc + ar4) = 1;
    uVar4 = 0;
  }
  uStack_128 = uVar4;
  (*(code *)PTR_Vec3_dtor_8c0593c4)((int)&puStack_170 + DAT_8c0593c0,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0593c4)((int)&puStack_170 + DAT_8c0593c8,0xffffffff,ar6,ar7);
  return uStack_128;
}



/* FUN_8c0593cc @ 8c0593cc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0593cc(undefined *ar4,int *ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 *a6;
  uint a7;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong in_dr0;
  ulonglong uVar10;
  undefined *puVar13;
  undefined8 uVar11;
  double dVar12;
  float fVar14;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_168;
  undefined *apuStack_164 [4];
  undefined *puStack_154;
  undefined *puStack_150;
  undefined *puStack_14c;
  undefined8 uStack_148;
  undefined4 *puStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  int iStack_12c;
  int iStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [212];
  
  iVar7 = *(int *)((int)apuStack_164 + DAT_8c059438);
  uVar8 = 1;
  uVar3 = *(undefined4 *)((int)apuStack_164 + DAT_8c05943c);
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_copy_8c059444)((int)apuStack_164 + DAT_8c059440,uVar3,ar6,ar7);
  *(undefined4 *)(ar4 + DAT_8c059448) = 1;
  uVar5 = 1;
  *(undefined4 *)(ar4 + DAT_8c05944c) = 1;
  switch(*(undefined4 *)(ar4 + DAT_8c059450)) {
  case 0:
    (*(code *)PTR_FUN_8c059588)(ar4 + DAT_8c059584,uVar3,1,a7);
    (*(code *)PTR_Vec3_ctor_xyz_8c059594)((int)apuStack_164 + DAT_8c05958c._4_4_,uVar3,uVar5,a7);
    puStack_168 = (undefined1 *)((int)apuStack_164 + DAT_8c059598);
    (*(code *)PTR_Vec3_add_8c0595a0)(ar7,(int)&puStack_168 + DAT_8c05959c,uVar5,a7);
    iVar1 = (int)apuStack_164 + DAT_8c059598;
    (*(code *)PTR_FUN_8c0595a4)(ar4,ar7,iVar1,a7);
    (*(code *)PTR_Vec3_dtor_8c0595a8)((int)apuStack_164 + DAT_8c059598,0xffffffff,iVar1,a7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0595a8)((int)apuStack_164 + DAT_8c05958c._4_4_,0xffffffff,iVar1,a7);
    (*(code *)PTR_FUN_8c0595b0)(ar4,uVar3,iVar1,a7);
    uVar10 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_104 = CONCAT44(uStack_104._4_4_,(int)(in_dr0 >> 0x20));
      uVar10 = uStack_104;
    }
    uStack_104 = uVar10;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c0595b4) = (undefined4)uStack_104;
      uVar10 = CONCAT44((undefined4)uStack_104,(int)in_dr0);
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c0595b4) = uStack_104;
      uVar10 = uStack_104;
    }
    uVar5 = 0;
    *(undefined4 *)(ar4 + DAT_8c0595b8) = 0;
    *(int *)(ar4 + DAT_8c0595bc) = *(int *)(ar4 + DAT_8c0595bc) + 1;
    apuStack_164[0] = ar4;
    puStack_14c = ar4;
    if (iVar7 == 0x1c) {
      uVar3 = 0;
      uVar5 = DAT_8c0595c0;
      iVar1 = (*(code *)PTR_rand_range_8c0595c4)(ar4,0,DAT_8c0595c0,a7);
      uStack_10c = CONCAT44(iVar1,(undefined4)uStack_10c);
      if (iVar1 == 0) {
        (*(code *)PTR_FUN_8c0595cc)(ar4 + DAT_8c0595c8,uVar3,uVar5,a7);
        (*(code *)PTR_FUN_8c0595cc)(ar4 + DAT_8c0595d0,uVar3,uVar5,a7);
        *(undefined4 *)(ar4 + DAT_8c0595bc) = 5;
        uVar6 = 0;
        uVar3 = 0xffffffff;
        uVar5 = 0x20;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0595dc)
                  (ar4 + DAT_8c0595d4._4_4_,0x20,0xffffffff,0);
        *(undefined4 *)(ar4 + DAT_8c0595e0) = 5;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0595e4)
                  (ar4 + DAT_8c0595d4._4_4_,uVar5,uVar3,uVar6);
        break;
      }
    }
    puStack_168 = (undefined1 *)((int)apuStack_164 + DAT_8c0596a4);
    (*(code *)PTR_FUN_8c0596a8)(ar4 + 0x14,uVar3,uVar5,a7);
    (*(code *)PTR_Vec3_ctor_xyz_8c0596b4)((int)apuStack_164 + DAT_8c0596ac._4_4_,uVar3,uVar5,a7);
    (*(code *)PTR_FUN_8c0596b8)
              ((int)apuStack_164 + DAT_8c0596a4,(int)apuStack_164 + DAT_8c0596ac._4_4_,uVar5,a7);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = (undefined4)(uVar10 >> 0x20);
      uStack_10c = CONCAT44(uStack_10c._4_4_,uVar3);
      in_dr0 = CONCAT44(DAT_8c0596bc,uVar3);
    }
    else {
      in_dr0 = CONCAT44(PTR_Vec3_dtor_8c0596c0,DAT_8c0596bc);
      uStack_10c = uVar10;
    }
    a7 = (uint)(in_FPSCR_PR == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20));
    uStack_f8 = a7;
    (*(code *)PTR_Vec3_dtor_8c0596c0)((int)apuStack_164 + DAT_8c0596ac._4_4_,0xffffffff,uVar5,a7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0596c0)((int)apuStack_164 + DAT_8c0596a4,0xffffffff,uVar5,a7);
    if (uStack_f8 != 0) {
      *(undefined4 *)(ar4 + DAT_8c0596c4) = 2;
      *(undefined4 *)(ar4 + DAT_8c0596c8) = 2;
      (*(code *)PTR_vec3_clear_8c0596d0)(ar4 + DAT_8c0596cc,uVar3,uVar5,a7);
      puVar4 = PTR_vec3_clear_8c0596d0;
      (*(code *)PTR_vec3_clear_8c0596d0)(ar4 + DAT_8c0596d4,PTR_vec3_clear_8c0596d0,uVar5,a7);
      if (iVar7 == 0x1d) {
        uStack_110 = (**(code **)(DAT_8c0596d8 + *ar5))(ar5,puVar4,uVar5,a7);
        (*(code *)PTR_FUN_8c0596dc)(uStack_110,puVar4,uVar5,a7);
      }
      break;
    }
  case 1:
    iVar1 = (*(code *)PTR_FUN_8c059784)(ar4,uVar3,uVar5,a7);
    uStack_118 = CONCAT44(iVar1,(undefined4)uStack_118);
    if (iVar1 == 0) {
      puStack_168 = (undefined1 *)((int)apuStack_164 + DAT_8c059788);
      (*(code *)PTR_FUN_8c05978c)(ar4 + 0x14,uVar3,uVar5,a7);
      (*(code *)PTR_Vec3_ctor_xyz_8c059798)((int)apuStack_164 + DAT_8c059790._4_4_,uVar3,uVar5,a7);
      (*(code *)PTR_FUN_8c05979c)
                ((int)apuStack_164 + DAT_8c059788,(int)apuStack_164 + DAT_8c059790._4_4_,uVar5,a7);
      uVar10 = in_dr0;
      puVar4 = DAT_8c0597a0;
      puVar13 = PTR_Vec3_dtor_8c0597a4;
      if (in_FPSCR_SZ == '\0') {
        puVar4 = (undefined *)(in_dr0 >> 0x20);
        uStack_118 = CONCAT44(uStack_118._4_4_,puVar4);
        uVar10 = uStack_118;
        puVar13 = DAT_8c0597a0;
      }
      uStack_118 = uVar10;
      uStack_fc = (uint)(in_FPSCR_PR == '\0' && (float)puVar13 < (float)puVar4);
      (*(code *)PTR_Vec3_dtor_8c0597a4)((int)apuStack_164 + DAT_8c059790._4_4_,0xffffffff,uVar5,a7);
      (*(code *)PTR_Vec3_dtor_8c0597a4)((int)apuStack_164 + DAT_8c059788,0xffffffff,uVar5,a7);
      if (uStack_fc == 0) {
        *(undefined4 *)(ar4 + DAT_8c059810) = 2;
        iVar1 = DAT_8c059814;
        *(int *)(ar4 + DAT_8c059814) = *(int *)(ar4 + DAT_8c059814) + 1;
        puVar4 = ar4;
        puStack_154 = ar4;
        (*(code *)PTR_vec3_clear_8c05981c)(ar4 + DAT_8c059818,iVar1,ar4,a7);
        (*(code *)PTR_vec3_clear_8c05981c)(ar4 + DAT_8c059820,iVar1,puVar4,a7);
        if (iVar7 == 0x1d) {
          uStack_11c = (**(code **)(DAT_8c059824 + *ar5))(ar5,iVar1,puVar4,a7);
          (*(code *)PTR_FUN_8c059828)(uStack_11c,iVar1,puVar4,a7);
        }
      }
      else {
        *(int *)(ar4 + DAT_8c0597a8) = *(int *)(ar4 + DAT_8c0597a8) + -1;
        puStack_150 = ar4;
      }
    }
    break;
  case 2:
    if (iVar7 == 0x1c) {
      puStack_168 = (undefined1 *)0x55;
      uVar5 = 0x1c;
      iVar7 = (int)&puStack_168 + DAT_8c059a38;
      iStack_128 = (*(code *)PTR_FUN_8c059a3c)(ar4,ar7,iVar7,0x1c);
      if (iStack_128 == 0) {
        (*(code *)PTR_FUN_8c059a40)(ar4,ar7,iVar7,uVar5);
        (*(code *)PTR_FUN_8c059a4c)(ar4 + DAT_8c059a48,ar7,iVar7,uVar5);
        *(undefined4 *)(ar4 + DAT_8c059a50) = 0;
        *(int *)(ar4 + DAT_8c059a54) = *(int *)(ar4 + DAT_8c059a54) + 1;
        uVar6 = 0;
        uVar3 = 0xffffffff;
        uVar5 = 0x1a;
        apuStack_164[3] = ar4;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c059a60)
                  (ar4 + DAT_8c059a58._4_4_,0x1a,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c059a64)
                  (ar4 + DAT_8c059a58._4_4_,uVar5,uVar3,uVar6);
        *(undefined4 *)(ar4 + DAT_8c059a68) = 2;
        (*(code *)PTR_FUN_8c059a6c)(ar6,uVar5,uVar3,uVar6);
      }
    }
    else if (iVar7 == 0x1d) {
      puStack_168 = (undefined1 *)0x53;
      uVar5 = 0x1d;
      iVar7 = (*(code *)PTR_FUN_8c05994c)(ar4,ar7,(int)&puStack_168 + DAT_8c059948,0x1d);
      uStack_124 = CONCAT44(iVar7,(undefined4)uStack_124);
      if (iVar7 == 0) {
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)(ar7 + 4),(int)in_dr0);
        }
        else {
          uVar11 = *(undefined8 *)(ar7 + 4);
        }
        iVar7 = DAT_8c059954;
        (*(code *)PTR_FUN_8c059958)(ar4 + DAT_8c059954,PTR_FUN_8c059958,DAT_8c059954,uVar5);
        (**(code **)(DAT_8c05995c + *ar5))(ar5,ar7,iVar7,uVar5);
        if (in_FPSCR_SZ == '\0') {
          uStack_124 = CONCAT44(uStack_124._4_4_,(int)((ulonglong)uVar11 >> 0x20));
          uVar11 = uStack_124;
        }
        uStack_124 = uVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)(ar7 + 4),(int)uStack_124);
        }
        else {
          dVar12 = *(double *)(ar7 + 4);
          in_xd0 = uStack_124;
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar12 - dVar12,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c059960) = fVar9;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c059960) = in_xd0;
        }
        uVar6 = 0;
        uVar3 = 0xffffffff;
        uVar5 = 0x25;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05996c)
                  (ar4 + DAT_8c059968,0x25,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c059970)(ar4 + DAT_8c059968,uVar5,uVar3,uVar6);
        *(undefined4 *)(ar4 + DAT_8c059974) = 2;
        *(undefined4 *)(ar4 + DAT_8c059978) = 6;
        (*(code *)PTR_Vec3_ctor_xyz_8c059984)
                  ((int)apuStack_164 + DAT_8c05997c._4_4_,uVar5,uVar3,uVar6);
        puStack_168 = (undefined1 *)((int)apuStack_164 + DAT_8c059988);
        (*(code *)PTR_Vec3_add_8c059990)(ar7,(int)&puStack_168 + DAT_8c05998c,uVar3,uVar6);
        iVar7 = (int)apuStack_164 + DAT_8c059988;
        (*(code *)PTR_FUN_8c059994)(ar4,ar7,iVar7,uVar6);
        (*(code *)PTR_Vec3_dtor_8c059998)((int)apuStack_164 + DAT_8c059988,0xffffffff,iVar7,uVar6);
        uVar5 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c059998)
                  ((int)apuStack_164 + DAT_8c05997c._4_4_,0xffffffff,iVar7,uVar6);
        (*(code *)PTR_FUN_8c0599a0)(ar4 + DAT_8c05999c,uVar5,iVar7,uVar6);
      }
    }
    else if (iVar7 == 0x31) {
      puStack_168 = (undefined1 *)0x54;
      uVar5 = 0x1c;
      iVar7 = (int)&puStack_168 + DAT_8c059b08;
      iStack_12c = (*(code *)PTR_FUN_8c059b0c)(ar4,ar7,iVar7,0x1c);
      if (iStack_12c == 0) {
        (*(code *)PTR_FUN_8c059b10)(ar4,ar7,iVar7,uVar5);
        (*(code *)PTR_FUN_8c059b1c)(ar4 + DAT_8c059b18,ar7,iVar7,uVar5);
        *(undefined4 *)(ar4 + DAT_8c059b20) = 0;
        *(int *)(ar4 + DAT_8c059b24) = *(int *)(ar4 + DAT_8c059b24) + 1;
        uVar3 = 0;
        uVar5 = 0xffffffff;
        apuStack_164[2] = ar4;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c059b30)
                  (ar4 + DAT_8c059b28._4_4_,0x1a,0xffffffff,0);
        puVar4 = ar4 + DAT_8c059b28._4_4_;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c059b34)(puVar4,puVar4,uVar5,uVar3);
        *(undefined4 *)(ar4 + DAT_8c059b38) = 2;
        (*(code *)PTR_FUN_8c059b3c)(ar6,puVar4,uVar5,uVar3);
      }
    }
    break;
  case 3:
    uVar5 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c059bb4)
              (ar4 + DAT_8c059bac._4_4_,0x26,0xffffffff,0);
    *(undefined4 *)(ar4 + DAT_8c059bb8) = 3;
    *(undefined4 *)(ar4 + DAT_8c059bbc) = 0;
    *(undefined4 *)(ar4 + DAT_8c059bc0) = 0;
    *(undefined4 *)(ar4 + DAT_8c059bc4) = 0;
    puVar4 = PTR_FUN_8c059bcc;
    (*(code *)PTR_FUN_8c059bcc)(ar4 + DAT_8c059bc8,DAT_8c059bc8,PTR_FUN_8c059bcc,uVar5);
    (*(code *)PTR_FUN_8c059bcc)(ar4 + DAT_8c059bd0,ar4 + DAT_8c059bd0,puVar4,uVar5);
    uVar8 = 0;
    *(undefined4 *)(ar4 + DAT_8c059bd4) = 2;
    break;
  case 4:
    (*(code *)PTR_FUN_8c059c8c)(ar4 + DAT_8c059c88,uVar3,1,a7);
    puStack_168 = (undefined1 *)0x55;
    uVar5 = 0x1c;
    apuStack_164[0] = PTR_FUN_8c059c94;
    iVar7 = (*(code *)PTR_FUN_8c059c94)(ar4,ar7,(int)&puStack_168 + DAT_8c059c90,0x1c);
    uStack_134 = CONCAT44(iVar7,(undefined4)uStack_134);
    if (iVar7 == 0) {
      *(undefined4 *)(ar4 + DAT_8c059c98) = 2;
      *(undefined4 *)(ar4 + DAT_8c059c9c) = 0;
      *(int *)(ar4 + DAT_8c059ca0) = *(int *)(ar4 + DAT_8c059ca0) + -1;
      apuStack_164[1] = ar4;
      (*(code *)PTR_FUN_8c059cac)(ar4 + DAT_8c059ca8,ar4,0,uVar5);
      uVar6 = 0;
      uVar3 = 0xffffffff;
      uVar5 = 0x1a;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c059cb8)
                (ar4 + DAT_8c059cb0._4_4_,0x1a,0xffffffff,0);
      *(undefined4 *)(ar4 + DAT_8c059cbc) = 4;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c059cc0)
                (ar4 + DAT_8c059cb0._4_4_,uVar5,uVar3,uVar6);
      *(undefined4 *)(ar4 + DAT_8c059cc4) = 2;
    }
    break;
  case 5:
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c059db0)(ar4 + DAT_8c059dac,uVar3,1,a7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c059db4)
              (ar4 + DAT_8c059dac,PTR_CAnimBody_GetCurFrame_8c059db4,uVar5,a7);
    uVar10 = in_dr0;
    fVar9 = DAT_8c059db8;
    fVar14 = _DAT_8c059dbc;
    if (in_FPSCR_SZ == '\0') {
      fVar9 = (float)(in_dr0 >> 0x20);
      uStack_134 = CONCAT44(uStack_134._4_4_,fVar9);
      uVar10 = uStack_134;
      fVar14 = DAT_8c059db8;
    }
    uStack_134 = uVar10;
    if (in_FPSCR_PR != '\0' || fVar14 <= fVar9) {
      *(undefined4 *)(ar4 + (int)_DAT_8c059dbc) = 1;
      uVar6 = 0;
      uVar3 = 0xffffffff;
      uVar5 = 0x55;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c059dc4)(ar4 + DAT_8c059dac,0x55,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c059dcc)(ar4 + DAT_8c059dac,uVar5,uVar3,uVar6);
      (*(code *)PTR_FUN_8c059de0)(ar4 + DAT_8c059ddc,uVar5,uVar3,uVar6);
      (*(code *)PTR_FUN_8c059de0)(ar4 + DAT_8c059de4,uVar5,uVar3,uVar6);
      uVar5 = (*(code *)PTR_FUN_8c059de8)(ar4,uVar5,uVar3,uVar6);
      uStack_138 = uVar5;
      uStack_13c = (*(code *)PTR_FUN_8c059dec)(ar4 + DAT_8c059dac,uVar5,uVar3,uVar6);
      puStack_140 = (undefined4 *)(*(code *)PTR_deref_u32_8c059df0)(uStack_13c,uVar5,uVar3,uVar6);
      puVar2 = (undefined4 *)(ar4 + DAT_8c059df4);
      uVar5 = puStack_140[1];
      *puVar2 = *puStack_140;
      puVar2[1] = uVar5;
      puVar2[2] = puStack_140[2];
      *(undefined4 *)(ar4 + DAT_8c059df8) = 1;
      *(undefined4 *)(ar4 + DAT_8c059dfc) = 4;
    }
    break;
  case 6:
    iVar7 = (*(code *)PTR_FUN_8c059ed4)(ar4,uVar3,1,a7);
    uStack_148 = CONCAT44(iVar7,(undefined4)uStack_148);
    if (iVar7 == 0) {
      puStack_168 = (undefined1 *)((int)apuStack_164 + DAT_8c059ed8);
      puVar4 = PTR_FUN_8c059edc;
      (*(code *)PTR_FUN_8c059edc)(ar4 + 0x14,PTR_FUN_8c059edc,uVar5,a7);
      (*(code *)PTR_Vec3_ctor_xyz_8c059ee8)((int)apuStack_164 + DAT_8c059ee0._4_4_,puVar4,uVar5,a7);
      (*(code *)PTR_FUN_8c059eec)
                ((int)apuStack_164 + DAT_8c059ed8,(int)apuStack_164 + DAT_8c059ee0._4_4_,uVar5,a7);
      uVar10 = in_dr0;
      puVar4 = DAT_8c059ef0;
      puVar13 = PTR_Vec3_dtor_8c059ef4;
      if (in_FPSCR_SZ == '\0') {
        puVar4 = (undefined *)(in_dr0 >> 0x20);
        uStack_148 = CONCAT44(uStack_148._4_4_,puVar4);
        uVar10 = uStack_148;
        puVar13 = DAT_8c059ef0;
      }
      uStack_148 = uVar10;
      uStack_104 = (ulonglong)
                   CONCAT14(in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar13,
                            (undefined4)uStack_104);
      (*(code *)PTR_Vec3_dtor_8c059ef4)((int)apuStack_164 + DAT_8c059ee0._4_4_,0xffffffff,uVar5,a7);
      puVar4 = PTR_Vec3_dtor_8c059ef4;
      (*(code *)PTR_Vec3_dtor_8c059ef4)
                ((int)apuStack_164 + DAT_8c059ed8,0xffffffff,PTR_Vec3_dtor_8c059ef4,a7);
      if (uStack_104._4_4_ == 0) {
        iVar7 = (int)apuStack_164 + DAT_8c059f9c._4_4_;
        (*(code *)PTR_Vec3_ctor_xyz_8c059fa4)(iVar7,0,iVar7,a7);
        puStack_168 = auStack_f0;
        (*(code *)PTR_Vec3_add_8c059fac)(ar7,(int)&puStack_168 + DAT_8c059fa8,iVar7,a7);
        a6 = auStack_f0;
        (*(code *)PTR_FUN_8c059fb0)(ar4,ar7,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c059fb4)(auStack_f0,0xffffffff,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c059fb4)((int)apuStack_164 + DAT_8c059f9c._4_4_,0xffffffff,a6,a7);
      }
      else {
        *(undefined4 *)(ar4 + DAT_8c059ef8) = 0;
        iVar7 = uStack_104._4_4_;
        (*(code *)PTR_FUN_8c059f00)(ar4 + DAT_8c059efc,uStack_104._4_4_,puVar4,a7);
        (*(code *)PTR_FUN_8c059f00)(ar4 + DAT_8c059f04,iVar7,puVar4,a7);
        *(undefined4 *)(ar4 + DAT_8c059f08) = 0;
        *(undefined4 *)(ar4 + DAT_8c059f0c) = 0;
        *(undefined4 *)(ar4 + DAT_8c059f10) = 0;
        uVar8 = 0;
        *(undefined4 *)(ar4 + DAT_8c059f14) = 2;
      }
    }
  }
  uStack_f4 = uVar8;
  (*(code *)PTR_Vec3_dtor_8c059fb4)
            ((int)apuStack_164 + DAT_8c059fb8,0xffffffff,(int)apuStack_164 + DAT_8c059fb8,0xffffffff
            );
  return uStack_f4;
}



/* ret_const_0_059fbc @ 8c059fbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_059fbc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c059fc4 @ 8c059fc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c059fc4(int ar4,undefined4 *ar5,int ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar4;
  undefined4 unaff_r12;
  int iVar5;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar6;
  float fVar7;
  undefined8 in_dr0;
  double dVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_fr3;
  double dVar11;
  undefined8 in_dr4;
  float in_fr15;
  float fVar12;
  undefined4 in_fr14;
  undefined8 in_xd4;
  double in_xd14;
  bool bVar13;
  undefined4 in_PR;
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
  iVar5 = *(int *)(puVar6 + DAT_8c05a020 + -0x80);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar6 + -0x80) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar6 + -0x7c) = (int)in_dr4;
  }
  else {
    *(undefined8 *)(puVar6 + -0x80) = in_dr4;
    *(undefined8 *)(puVar6 + -0x7c) = in_xd4;
  }
  uVar4 = 1;
  puVar3 = ar5;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c05a024)(puVar6 + -0x28,ar5,ar6,ar7);
  fVar12 = (float)DAT_8c05a028;
  if (in_FPSCR_SZ != '\0') {
    in_xd14 = (double)CONCAT44(DAT_8c05a028._4_4_,(float)DAT_8c05a028);
    fVar12 = in_fr15;
  }
  *(undefined4 *)(DAT_8c05a028._4_4_ + ar4) = 0;
  iVar1 = *(int *)(DAT_8c05a030 + ar4);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_FUN_8c05a0c8)(ar4,ar5,ar6,a7);
    *(undefined4 *)(puVar6 + -0x44) = uVar2;
    if (*(int *)(puVar6 + -0x44) == 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c05a0d0,ar5[1]);
      }
      else {
        dVar8 = (double)CONCAT44(PTR_Vec3_assign_8c05a0d4,DAT_8c05a0d0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 - dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c05a0cc) = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c05a0cc) = dVar8;
      }
      (*(code *)PTR_Vec3_assign_8c05a0d4)(ar4 + 0x54,ar5,ar6,a7);
      if (iVar5 == -1) {
        ar6 = 3;
        uVar2 = (*(code *)PTR_rand_range_8c05a0d8)(ar4,0,3,a7);
        *(undefined4 *)(puVar6 + -0x48) = uVar2;
        iVar5 = *(int *)(puVar6 + -0x48);
      }
      (*(code *)PTR_Vec3_assign_8c05a0d4)(puVar6 + -0x28,ar5,ar6,a7);
      puVar3 = ar5;
      (*(code *)PTR_Vec3_assign_8c05a0d4)(ar4 + DAT_8c05a0dc,ar5,ar6,a7);
      if (iVar5 == 1) {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(DAT_8c05a0e0,*ar5);
        }
        else {
          dVar8 = (double)CONCAT44(uRam8c05a0e4,DAT_8c05a0e0);
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar8 >> 0x20) < SUB84(dVar8,0)) {
          iVar5 = 0;
        }
      }
      if (iVar5 == 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar7 + 8),SUB84(dVar8,0));
        }
        else {
          dVar8 = *(double *)(ar7 + 8);
        }
        if (in_FPSCR_PR == '\0') {
          dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar12,SUB84(dVar8,0));
        }
        else {
          dVar8 = dVar8 - (double)CONCAT44(in_fr14,fVar12);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x54));
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar8;
          dVar8 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 + dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c05a188,fVar7);
        }
        else {
          dVar8 = *(double *)PTR_DAT_8c05a188;
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar8 >> 0x20) <= SUB84(dVar8,0)) {
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c05a188,in_fr3);
            dVar8 = (double)CONCAT44(DAT_8c05a18c,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            dVar11 = *(double *)PTR_DAT_8c05a188;
            dVar8 = (double)CONCAT44(DAT_8c05a190,DAT_8c05a18c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = (float)((ulonglong)dVar8 >> 0x20);
            fVar7 = SUB84(dVar8,0) * fVar9;
            dVar8 = (double)CONCAT44(fVar9,fVar7);
            dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar7,SUB84(dVar11,0));
          }
          else {
            dVar8 = dVar8 * dVar8;
            dVar11 = dVar11 - dVar8;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar4 + 0x54) = (int)((ulonglong)dVar11 >> 0x20);
          }
          else {
            *(double *)(ar4 + 0x54) = dVar11;
          }
        }
        uVar2 = SUB84(dVar8,0);
        (*(code *)PTR_FUN_8c05a194)(ar4 + DAT_8c05a190,puVar3,ar6,a7);
        if (in_FPSCR_SZ == '\0') {
          uVar10 = *(undefined4 *)(ar7 + 8);
          dVar8 = (double)CONCAT44(uVar10,uVar2);
          *(undefined4 *)(ar4 + DAT_8c05a198) = uVar10;
        }
        else {
          dVar8 = *(double *)(ar7 + 8);
          *(double *)(ar4 + DAT_8c05a198) = dVar8;
        }
      }
      else if (iVar5 == 1) {
        if (in_FPSCR_SZ == '\0') {
          in_xd14 = (double)CONCAT44(fVar12,(undefined4)DAT_8c05a114);
        }
        if (in_FPSCR_PR == '\0') {
          in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) + SUB84(in_xd14,0),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = in_xd14;
        }
        (*(code *)PTR_FUN_8c05a120)(ar4 + DAT_8c05a11c,puVar3,ar6,a7);
        dVar8 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c05a124) = 0;
        }
        else {
          *(double *)(ar4 + DAT_8c05a124) = dVar8;
        }
      }
      else if ((iVar5 == 2) || (iVar5 == 3)) {
        if (in_FPSCR_SZ == '\0') {
          in_xd14 = (double)CONCAT44(fVar12,DAT_8c05a20c);
        }
        if (in_FPSCR_PR == '\0') {
          in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) + SUB84(in_xd14,0),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x54) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x54) = in_xd14;
        }
        (*(code *)PTR_FUN_8c05a218)(ar4 + DAT_8c05a214,puVar3,ar6,a7);
        dVar8 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c05a21c) = 0;
        }
        else {
          *(double *)(ar4 + DAT_8c05a21c) = dVar8;
        }
      }
      (*(code *)PTR_FUN_8c05a220)(ar5,ar4 + DAT_8c05a21c,ar6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar6 + -0x4c) = (int)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(*(undefined4 *)(puVar6 + -0x4c),SUB84(dVar8,0));
      }
      else {
        *(double *)(puVar6 + -0x4c) = dVar8;
        dVar8 = *(double *)(puVar6 + -0x4c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar13 = fVar12 < (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        bVar13 = (double)CONCAT44(in_fr14,fVar12) < dVar8;
      }
      if (!bVar13) {
        (*(code *)PTR_Vec3_assign_8c05a224)(ar4 + 0x54,ar5,ar6,a7);
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(puVar6 + -100) = ar4;
      *(int *)(DAT_8c05a228 + *(int *)(puVar6 + -100)) =
           *(int *)(DAT_8c05a228 + *(int *)(puVar6 + -100)) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c05a2dc + ar4) = 1;
      if ((*(int *)(DAT_8c05a2e0 + ar4) == 1) && (*(int *)(DAT_8c05a2e4 + ar4) != 0x10)) {
        *(int *)(puVar6 + -0x68) = ar4;
        *(int *)(DAT_8c05a2e8 + *(int *)(puVar6 + -0x68)) =
             *(int *)(DAT_8c05a2e8 + *(int *)(puVar6 + -0x68)) + 1;
      }
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar5 = *(int *)(DAT_8c05a320 + ar4);
        if (iVar5 == 0) {
          (*(code *)PTR_CAnimBody_GetCurFrame_8c05a36c)(ar4 + DAT_8c05a368,puVar3,ar6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar6 + -0x54) = (int)((ulonglong)in_dr0 >> 0x20);
            fVar12 = *(float *)(puVar6 + -0x54);
            fVar7 = DAT_8c05a370;
          }
          else {
            *(undefined8 *)(puVar6 + -0x54) = in_dr0;
            fVar12 = DAT_8c05a370;
            fVar7 = DAT_8c05a374;
          }
          if (in_FPSCR_PR == '\0' && fVar7 < fVar12) {
            (*(code *)PTR_FUN_8c05a378)(ar4,0x1c,ar5,*(undefined4 *)((int)DAT_8c05a374 + ar4));
            *(int *)(puVar6 + -0x70) = ar4;
            *(int *)(DAT_8c05a37c + *(int *)(puVar6 + -0x70)) =
                 *(int *)(DAT_8c05a37c + *(int *)(puVar6 + -0x70)) + 1;
          }
        }
        else if (iVar5 == 1) {
          (*(code *)PTR_CAnimBody_GetCurFrame_8c05a3c8)(ar4 + DAT_8c05a3c4,puVar3,ar6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar6 + -0x58) = (int)((ulonglong)in_dr0 >> 0x20);
            fVar12 = *(float *)(puVar6 + -0x58);
            fVar7 = DAT_8c05a3cc;
          }
          else {
            *(undefined8 *)(puVar6 + -0x58) = in_dr0;
            fVar12 = DAT_8c05a3cc;
            fVar7 = DAT_8c05a3d0;
          }
          if (in_FPSCR_PR == '\0' && fVar7 < fVar12) {
            (*(code *)PTR_FUN_8c05a3d4)(ar4,0x1d,ar5,*(undefined4 *)((int)DAT_8c05a3d0 + ar4));
            *(int *)(puVar6 + -0x74) = ar4;
            *(int *)(DAT_8c05a3d8 + *(int *)(puVar6 + -0x74)) =
                 *(int *)(DAT_8c05a3d8 + *(int *)(puVar6 + -0x74)) + 1;
          }
        }
        else if (iVar5 == 2) {
          (*(code *)PTR_CAnimBody_GetCurFrame_8c05a4f4)(ar4 + DAT_8c05a4f0,puVar3,ar6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar6 + -0x5c) = (int)((ulonglong)in_dr0 >> 0x20);
            fVar12 = *(float *)(puVar6 + -0x5c);
            fVar7 = DAT_8c05a4f8;
          }
          else {
            *(undefined8 *)(puVar6 + -0x5c) = in_dr0;
            fVar12 = DAT_8c05a4f8;
            fVar7 = DAT_8c05a4fc;
          }
          if (in_FPSCR_PR == '\0' && fVar7 < fVar12) {
            if (*(char *)((int)DAT_8c05a4fc + ar4) == '\x01') {
              (*(code *)PTR_Vec3_assign_8c05a500)(puVar6 + -0x28,ar5,ar6,a7);
              (**(code **)(DAT_8c05a50c + **(int **)(DAT_8c05a504._4_4_ + ar4)))
                        (*(int **)(DAT_8c05a504._4_4_ + ar4),puVar6 + -0x28,1,5);
            }
            *(int *)(puVar6 + -0x78) = ar4;
            *(int *)(DAT_8c05a510 + *(int *)(puVar6 + -0x78)) =
                 *(int *)(DAT_8c05a510 + *(int *)(puVar6 + -0x78)) + 1;
          }
        }
        *(undefined4 *)(DAT_8c05a514 + ar4) = 1;
        *(undefined4 *)(puVar6 + -0x84) = 0x58;
        a7 = (undefined1 *)0x1e;
        ar6 = ar4 + DAT_8c05a518;
        uVar2 = (*(code *)PTR_FUN_8c05a51c)(ar4,ar5,ar6,0x1e);
        *(undefined4 *)(puVar6 + -0x60) = uVar2;
        if (*(int *)(puVar6 + -0x60) == 0) {
          (*(code *)PTR_FUN_8c05a524)(ar4 + DAT_8c05a520,ar5,ar6,a7);
          (*(code *)PTR_FUN_8c05a524)(ar4 + DAT_8c05a52c,ar5,ar6,a7);
          *(undefined4 *)(DAT_8c05a530 + ar4) = 0;
          *(undefined4 *)(DAT_8c05a514 + ar4) = 0;
          uVar4 = 0;
          *(undefined4 *)(DAT_8c05a534 + ar4) = 0;
          *(undefined4 *)(ar4 + 0x68) = 0;
          (*(code *)PTR_FUN_8c05a538)(ar4,ar5,ar6,a7);
          (*(code *)PTR_FUN_8c05a540)(ar4 + DAT_8c05a53c,ar5,ar6,a7);
          *(undefined4 *)(DAT_8c05a544 + ar4) = 2;
        }
      }
      goto LAB_8c05a4c4;
    }
    (*(code *)PTR_Vec3_ctor_copy_8c05a2f0)(puVar6 + -0x38,ar4 + DAT_8c05a2ec,ar6,a7);
    a7 = puVar6 + -0x38;
    ar6 = ar4 + 0x54;
    uVar2 = (*(code *)PTR_FUN_8c05a2f4)(ar4,ar5,ar6,a7);
    *(undefined4 *)(puVar6 + -0x50) = uVar2;
    *(uint *)(puVar6 + -0x40) = (uint)(*(int *)(puVar6 + -0x50) == 0);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c05a2f8)(puVar6 + -0x38,0xffffffff,ar6,a7);
    if (*(int *)(puVar6 + -0x40) != 0) {
      *(undefined4 *)(DAT_8c05a2fc + ar4) = 9;
      *(int *)(puVar6 + -0x6c) = ar4;
      *(int *)(DAT_8c05a2e8 + *(int *)(puVar6 + -0x6c)) =
           *(int *)(DAT_8c05a2e8 + *(int *)(puVar6 + -0x6c)) + 1;
      *(undefined4 *)(DAT_8c05a300 + ar4) = 0;
      (*(code *)PTR_FUN_8c05a308)(ar4 + DAT_8c05a304,uVar2,ar6,a7);
    }
  }
LAB_8c05a4c4:
  *(undefined4 *)(puVar6 + -0x3c) = uVar4;
  (*(code *)PTR_Vec3_dtor_8c05a548)(puVar6 + -0x28,0xffffffff,ar6,a7);
  return *(undefined4 *)(puVar6 + -0x3c);
}



/* FUN_8c05a54c @ 8c05a54c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c05aa7a) */
/* WARNING: Removing unreachable block (ram,0x8c05a866) */
/* WARNING: Removing unreachable block (ram,0x8c05a814) */
/* WARNING: Removing unreachable block (ram,0x8c05a928) */
/* WARNING: Removing unreachable block (ram,0x8c05aae0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c05a54c(int ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  uint uVar6;
  double in_dr0;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  undefined4 in_fr3;
  float fVar10;
  undefined8 in_dr12;
  double dVar11;
  undefined8 in_dr14;
  double dVar12;
  undefined8 in_xd0;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar13;
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
    puVar5 = (undefined1 *)((int)&uStack_10 + 4);
    uStack_10 = CONCAT44((int)in_dr12,(undefined4)uStack_10);
  }
  else {
    puVar5 = auStack_18;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = in_PR;
  iVar2 = 1;
  switch(*(undefined4 *)(DAT_8c05a588 + ar4)) {
  case 0:
    *(undefined4 *)(DAT_8c05a5d4 + ar4) = 3;
    if (*(int *)(DAT_8c05a5d8 + ar4) < 5) {
      *(undefined4 *)(DAT_8c05a5dc + ar4) = 6;
    }
    else {
      uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05a608)
                        (*(undefined4 *)(DAT_8c05a604 + ar4),8,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xb0) = uVar1;
      if (*(int *)(puVar5 + -0xb0) == 0) {
        *(undefined4 *)(DAT_8c05a60c + ar4) = 2;
      }
      else {
        *(undefined4 *)(DAT_8c05a654 + ar4) = 1;
      }
    }
    *(int *)(puVar5 + -0xb4) = ar4;
    *(int *)(DAT_8c05a658 + *(int *)(puVar5 + -0xb4)) =
         *(int *)(DAT_8c05a658 + *(int *)(puVar5 + -0xb4)) + 1;
    switch(*(undefined4 *)(DAT_8c05a654 + ar4)) {
    case 0:
    case 1:
      *(int *)(puVar5 + -0xbc) = ar4;
      *(int *)(DAT_8c05a6b0 + *(int *)(puVar5 + -0xbc)) =
           *(int *)(DAT_8c05a6b0 + *(int *)(puVar5 + -0xbc)) + 1;
      break;
    case 2:
      *(int *)(puVar5 + -0xc0) = ar4;
      *(int *)(DAT_8c05a6cc + *(int *)(puVar5 + -0xc0)) =
           *(int *)(DAT_8c05a6cc + *(int *)(puVar5 + -0xc0)) + 3;
      break;
    case 4:
      *(int *)(puVar5 + -0xc4) = ar4;
      *(int *)(DAT_8c05a6e8 + *(int *)(puVar5 + -0xc4)) =
           *(int *)(DAT_8c05a6e8 + *(int *)(puVar5 + -0xc4)) + 5;
      break;
    case 5:
      *(int *)(puVar5 + -200) = ar4;
      *(int *)(DAT_8c05a704 + *(int *)(puVar5 + -200)) =
           *(int *)(DAT_8c05a704 + *(int *)(puVar5 + -200)) + 7;
      break;
    case 6:
      *(int *)(puVar5 + -0xb8) = ar4;
      *(int *)(DAT_8c05a694 + *(int *)(puVar5 + -0xb8)) =
           *(int *)(DAT_8c05a694 + *(int *)(puVar5 + -0xb8)) + 9;
    }
    break;
  case 1:
    uVar1 = (*(code *)PTR_rand_range_8c05a788)(ar4,0,0x10,ar7);
    *(undefined4 *)(puVar5 + DAT_8c05a78c + -0xf8) = uVar1;
    if (*(int *)(puVar5 + DAT_8c05a78c + -0xf8) == 0) {
      ar7 = *(int *)(DAT_8c05a790 + ar4);
      (*(code *)PTR_FUN_8c05a794)(ar4,0xe,ar5,ar7);
    }
    *(int *)(puVar5 + -0xcc) = ar4;
    iVar2 = *(int *)(puVar5 + -0xcc);
    *(uint *)(DAT_8c05a798 + iVar2) = *(uint *)(DAT_8c05a798 + *(int *)(puVar5 + -0xcc)) ^ 1;
    if (*(int *)(DAT_8c05a798 + ar4) == 0) {
      uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c05a834)
                        (*(undefined4 *)(DAT_8c05a830 + ar4),4,iVar2,ar7);
      *(undefined4 *)(puVar5 + -0xdc) = uVar1;
      uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05a838)
                        (*(undefined4 *)(puVar5 + -0xdc),9,iVar2,ar7);
      *(undefined4 *)(puVar5 + -0xd8) = uVar1;
      ar7 = 0;
      ar6 = -1;
      iVar2 = *(int *)(puVar5 + -0xd8) + 0x2f;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05a844)
                (ar4 + DAT_8c05a83c._4_4_,iVar2,0xffffffff,0);
    }
    else {
      uVar1 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c05a7a0)
                        (*(undefined4 *)(DAT_8c05a79c + ar4),4,iVar2,ar7);
      *(undefined4 *)(puVar5 + -0xd4) = uVar1;
      uVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05a7a4)
                        (*(undefined4 *)(puVar5 + -0xd4),9,iVar2,ar7);
      *(undefined4 *)(puVar5 + -0xd0) = uVar1;
      ar7 = 0;
      ar6 = -1;
      iVar2 = *(int *)(puVar5 + -0xd0) + 0x26;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05a7b0)
                (ar4 + DAT_8c05a7a8._4_4_,iVar2,0xffffffff,0);
    }
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05a848)(ar4 + DAT_8c05a83c._4_4_,iVar2,ar6,ar7);
    *(int *)(puVar5 + -0xe0) = ar4;
    *(int *)(DAT_8c05a84c + *(int *)(puVar5 + -0xe0)) =
         *(int *)(DAT_8c05a84c + *(int *)(puVar5 + -0xe0)) + 1;
  case 2:
    uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05a8bc)
                      (ar4 + DAT_8c05a8b8,iVar2,ar6,ar7);
    *(undefined4 *)(puVar5 + DAT_8c05a8c0 + -0xf8) = uVar1;
    if (*(int *)(puVar5 + DAT_8c05a8c0 + -0xf8) == 1) {
      *(undefined4 *)(DAT_8c05a8c4 + ar4) = 0;
    }
    break;
  case 3:
    uVar1 = 0x10;
    uVar4 = 0;
    uVar3 = (*(code *)PTR_rand_range_8c05a98c)(ar4,0,0x10,ar7);
    *(undefined4 *)(puVar5 + -0x7c) = uVar3;
    if (*(int *)(puVar5 + -0x7c) == 0) {
      ar7 = *(int *)(DAT_8c05a990 + ar4);
      uVar4 = 0xe;
      (*(code *)PTR_FUN_8c05a994)(ar4,0xe,ar5,ar7);
      uVar1 = ar5;
    }
    *(int *)(puVar5 + -0xe4) = ar4;
    *(uint *)(DAT_8c05a998 + *(int *)(puVar5 + -0xe4)) =
         *(uint *)(DAT_8c05a998 + *(int *)(puVar5 + -0xe4)) ^ 1;
    *(int *)(puVar5 + -0xe8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c05a9a0,
                                *(undefined4 *)(*(int *)(puVar5 + -0xe8) + DAT_8c05a99c));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar5 + -0xe8) + DAT_8c05a99c);
      dVar12 = (double)CONCAT44(DAT_8c05a9a4,DAT_8c05a9a0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar10 = SUB84(dVar12 * dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar5 + -0xe8) + DAT_8c05a99c) = fVar10;
    }
    else {
      *(undefined8 *)(*(int *)(puVar5 + -0xe8) + DAT_8c05a99c) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar10 = *(float *)(ar4 + DAT_8c05a99c);
    }
    uVar7 = CONCAT44(0x3f800000,fVar10);
    if (fVar10 == 1.0) {
      *(undefined1 **)(puVar5 + -0xfc) = puVar5 + DAT_8c05a9a4 + -0xf8;
      (*(code *)PTR_FUN_8c05a9a8)(ar4 + 0x14,uVar4,uVar1,ar7);
      (*(code *)PTR_Vec3_ctor_xyz_8c05a9b0)(puVar5 + DAT_8c05a9ac + -0xf8,uVar4,uVar1,ar7);
      (*(code *)PTR_FUN_8c05a9b4)
                (puVar5 + DAT_8c05a9a4 + -0xf8,puVar5 + DAT_8c05a9ac + -0xf8,uVar1,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0x80) = (int)((ulonglong)uVar7 >> 0x20);
      }
      else {
        *(undefined8 *)(puVar5 + -0x80) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar3 = *(undefined4 *)(puVar5 + -0x80);
        uVar7 = CONCAT44(uVar3,(int)uVar7);
        *(undefined4 *)(ar4 + DAT_8c05a9b8) = uVar3;
      }
      else {
        uVar7 = *(undefined8 *)(puVar5 + -0x80);
        *(undefined8 *)(ar4 + DAT_8c05a9b8) = uVar7;
      }
      uVar6 = (uint)uVar7;
      (*(code *)PTR_Vec3_dtor_8c05a9bc)(puVar5 + DAT_8c05a9ac + -0xf8,0xffffffff,uVar1,ar7);
      (*(code *)PTR_Vec3_dtor_8c05a9bc)(puVar5 + DAT_8c05a9a4 + -0xf8,0xffffffff,uVar1,ar7);
    }
    else {
      *(undefined1 **)(puVar5 + -0xfc) = puVar5 + DAT_8c05abcc + -0xf8;
      (*(code *)PTR_FUN_8c05abd0)(ar4 + 0x14,uVar4,uVar1,ar7);
      (*(code *)PTR_Vec3_ctor_xyz_8c05abdc)(puVar5 + DAT_8c05abd4._4_4_ + -0xf8,uVar4,uVar1,ar7);
      (*(code *)PTR_FUN_8c05abe0)
                (puVar5 + DAT_8c05abcc + -0xf8,puVar5 + DAT_8c05abd4._4_4_ + -0xf8,uVar1,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0x84) = (int)((ulonglong)uVar7 >> 0x20);
      }
      else {
        *(undefined8 *)(puVar5 + -0x84) = uVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar3 = *(undefined4 *)(puVar5 + -0x84);
        uVar7 = CONCAT44(uVar3,(int)uVar7);
        *(undefined4 *)(ar4 + DAT_8c05abe4) = uVar3;
      }
      else {
        uVar7 = *(undefined8 *)(puVar5 + -0x84);
        *(undefined8 *)(ar4 + DAT_8c05abe4) = uVar7;
      }
      uVar6 = (uint)uVar7;
      (*(code *)PTR_Vec3_dtor_8c05abe8)(puVar5 + DAT_8c05abd4._4_4_ + -0xf8,0xffffffff,uVar1,ar7);
      (*(code *)PTR_Vec3_dtor_8c05abe8)(puVar5 + DAT_8c05abcc + -0xf8,0xffffffff,uVar1,ar7);
    }
    ar7 = 0;
    ar6 = -1;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05abf0)(ar4 + DAT_8c05abec,0x18,0xffffffff,0);
    uVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c05abf4)(ar4 + DAT_8c05abec,0x18,ar6,ar7)
    ;
    *(undefined4 *)(puVar5 + -0x88) = uVar1;
    iVar2 = 0x31;
    uVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c05abf4)(ar4 + DAT_8c05abec,0x31,ar6,ar7)
    ;
    *(undefined4 *)(puVar5 + -0x8c) = uVar1;
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((float)*(int *)(puVar5 + -0x88),in_fr3);
    }
    else {
      dVar12 = (double)*(int *)(puVar5 + -0x88);
    }
    fVar10 = (float)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar10 < 0.0;
    }
    else {
      bVar13 = dVar12 < (double)(ulonglong)uVar6;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c05abfc,uVar6);
      }
      else {
        dVar8 = (double)CONCAT44(DAT_8c05ac00,DAT_8c05abfc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 + dVar8;
      }
    }
    fVar10 = (float)*(int *)(puVar5 + -0x8c);
    dVar8 = (double)(ulonglong)(uint)fVar10;
    if (in_FPSCR_PR == '\0' && fVar10 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c05abfc,fVar10);
      }
      else {
        dVar8 = (double)CONCAT44(DAT_8c05ac00,DAT_8c05abfc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar10 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar10,SUB84(dVar8,0) + fVar10);
      }
      else {
        dVar8 = dVar8 + dVar8;
      }
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar8,0),SUB84(dVar12,0))
      ;
    }
    else {
      dVar12 = dVar12 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c05ac00,SUB84(dVar8,0));
    }
    else {
      in_dr0 = (double)CONCAT44(PTR_s_CAnimBody_SetFrame_033e6e_8c05ac04,DAT_8c05ac00);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) *
                                (float)((ulonglong)in_dr0 >> 0x20),SUB84(dVar12,0));
    }
    else {
      dVar12 = dVar12 * in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c05abf8) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c05abf8) = dVar12;
    }
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05ac04)(ar4 + DAT_8c05abec,iVar2,ar6,ar7);
    *(int *)(puVar5 + -0xec) = ar4;
    *(int *)(DAT_8c05ac08 + *(int *)(puVar5 + -0xec)) =
         *(int *)(DAT_8c05ac08 + *(int *)(puVar5 + -0xec)) + 1;
  case 4:
    uVar1 = (undefined4)((ulonglong)in_dr12 >> 0x20);
    uVar3 = (undefined4)in_dr14;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c05ac0c)(ar4 + DAT_8c05abec,iVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -0x90) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar12 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x90),uVar3);
    }
    else {
      *(double *)(puVar5 + -0x90) = in_dr0;
      dVar12 = *(double *)(puVar5 + -0x90);
    }
    uVar4 = 0x18;
    uVar3 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c05abf4)(ar4 + DAT_8c05abec,0x18,ar6,ar7)
    ;
    *(undefined4 *)(puVar5 + -0x94) = uVar3;
    fVar10 = (float)*(int *)(puVar5 + -0x94);
    dVar11 = (double)CONCAT44(uVar1,fVar10);
    dVar8 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar10 < 0.0;
    }
    else {
      bVar13 = dVar11 < dVar8;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c05abfc,SUB84(in_dr0,0));
      }
      else {
        dVar8 = (double)CONCAT44(DAT_8c05ac00,DAT_8c05abfc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44(uVar1,fVar10 + (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        dVar11 = dVar11 + dVar8;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c05ac10,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(DAT_8c05ac14,DAT_8c05ac10);
    }
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                SUB84(dVar11,0) * (float)((ulonglong)dVar8 >> 0x20));
    }
    else {
      dVar11 = dVar11 * dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd12 = (double)CONCAT44(SUB84(dVar11,0),DAT_8c05ac14);
    }
    fVar10 = (float)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)in_xd12 >> 0x20) - SUB84(in_xd12,0);
      in_xd12 = (double)CONCAT44(fVar9,SUB84(in_xd12,0));
      bVar13 = fVar10 < fVar9;
    }
    else {
      in_xd12 = in_xd12 - in_xd12;
      bVar13 = dVar12 < in_xd12;
    }
    if (!bVar13) {
      if (in_FPSCR_SZ == '\0') {
        in_xd12 = (double)CONCAT44(DAT_8c05ac14,SUB84(in_xd12,0));
      }
      else {
        in_xd12 = (double)CONCAT44(DAT_8c05ac18,DAT_8c05ac14);
      }
      if (in_FPSCR_PR == '\0') {
        bVar13 = fVar10 < SUB84(dVar11,0) + (float)((ulonglong)in_xd12 >> 0x20);
      }
      else {
        bVar13 = dVar12 < dVar11 + in_xd12;
      }
      if (bVar13) {
        uVar6 = DAT_8c05ac18;
        if (in_FPSCR_SZ == '\0') {
          uVar6 = SUB84(in_xd12,0);
        }
        if (in_FPSCR_SZ != '\0') {
          uVar6 = (uint)*(undefined8 *)(ar4 + DAT_8c05ac1c);
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd12 = (double)(ulonglong)uVar6;
        }
        else {
          in_xd12 = *(double *)(ar4 + DAT_8c05abf8);
        }
        (*(code *)PTR_Vec3_set_xyz_8c05ac24)(puVar5 + DAT_8c05ac20 + -0xf8,uVar4,ar6,ar7);
        *(undefined1 **)(puVar5 + -0xfc) = puVar5 + DAT_8c05ac28 + -0xf8;
        (*(code *)PTR_FUN_8c05ac30)(ar4 + 0x14,puVar5 + DAT_8c05ac2c + -0xfc,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c05ac34)(ar4 + 0x14,puVar5 + DAT_8c05ac28 + -0xf8,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05abe8)(puVar5 + DAT_8c05ac28 + -0xf8,0xffffffff,ar6,ar7);
        (*(code *)PTR_object_dtor_delete_8c05ac38)(puVar5 + DAT_8c05ac20 + -0xf8,0xffffffff,ar6,ar7)
        ;
        (*(code *)PTR_Vec3_assign_8c05ac34)(ar4 + DAT_8c05ac3c,ar4 + 0x14,ar6,ar7);
      }
    }
    uVar3 = SUB84(in_xd12,0);
    uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05ac40)
                      (ar4 + DAT_8c05abec,ar4 + DAT_8c05abf8,ar6,ar7);
    *(undefined4 *)(puVar5 + -0x98) = uVar1;
    if (*(int *)(puVar5 + -0x98) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c05abf8) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c05abf8) = CONCAT44(0x3f800000,uVar3);
      }
      *(undefined4 *)(DAT_8c05ac08 + ar4) = 0;
    }
    break;
  case 5:
    ar7 = 0;
    ar6 = -1;
    uVar3 = 0x1e;
    uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05acd0)
                      (ar4 + DAT_8c05acc8._4_4_,0x1e,0xffffffff,0);
    *(undefined4 *)(puVar5 + -0x9c) = uVar1;
    if (*(int *)(puVar5 + -0x9c) != 6) {
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05acd4)(ar4 + DAT_8c05acc8._4_4_,uVar3,ar6,ar7);
    }
    *(int *)(puVar5 + -0xf0) = ar4;
    iVar2 = *(int *)(puVar5 + -0xf0);
    *(int *)(DAT_8c05acd8 + iVar2) = *(int *)(DAT_8c05acd8 + *(int *)(puVar5 + -0xf0)) + 1;
  case 6:
    uVar3 = SUB84(in_dr0,0);
    uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05ace0)
                      (ar4 + DAT_8c05acc8._4_4_,iVar2,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xa0) = uVar1;
    if (*(int *)(puVar5 + -0xa0) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c05ace4) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c05ace4) = CONCAT44(0x3f800000,uVar3);
      }
      *(undefined4 *)(DAT_8c05acd8 + ar4) = 0;
    }
    break;
  case 7:
    ar7 = 0;
    uVar3 = 0xffffffff;
    uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05ad6c)
                      (ar4 + DAT_8c05ad64._4_4_,0x1f,0xffffffff,0);
    *(undefined4 *)(puVar5 + -0xa4) = uVar1;
    if (*(int *)(puVar5 + -0xa4) != 6) {
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05ad74)
                (ar4 + DAT_8c05ad64._4_4_,PTR_s_CAnimBody_SetFrame_033e6e_8c05ad74,uVar3,ar7);
    }
    *(int *)(puVar5 + -0xf4) = ar4;
    ar6 = *(int *)(DAT_8c05ad78 + *(int *)(puVar5 + -0xf4)) + 1;
    *(int *)(DAT_8c05ad78 + *(int *)(puVar5 + -0xf4)) = ar6;
  case 8:
    uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05ad80)
                      (ar4 + DAT_8c05ad64._4_4_,DAT_8c05ad64._4_4_,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xa8) = uVar1;
    if (*(int *)(puVar5 + -0xa8) == 1) {
      *(undefined4 *)(DAT_8c05ad78 + ar4) = 0;
    }
    break;
  case 9:
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar1 = 0x3f;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05adc4)
              (ar4 + DAT_8c05adbc._4_4_,0x3f,0xffffffff,0);
    if (*(int *)(DAT_8c05adc8 + ar4) == 3) {
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05adcc)
                (ar4 + DAT_8c05adbc._4_4_,ar4 + DAT_8c05adbc._4_4_,uVar3,uVar4);
    }
    else {
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05ae44)
                (ar4 + DAT_8c05ae3c._4_4_,uVar1,uVar3,uVar4);
    }
    *(int *)(puVar5 + -0xf8) = ar4;
    ar7 = *(int *)(DAT_8c05ae48 + *(int *)(puVar5 + -0xf8));
    ar6 = ar7 + 1;
    *(int *)(DAT_8c05ae48 + *(int *)(puVar5 + -0xf8)) = ar6;
  case 10:
    uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05ae50)
                      (ar4 + DAT_8c05ae3c._4_4_,ar4 + DAT_8c05ae4c,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xac) = uVar1;
    if (*(int *)(puVar5 + -0xac) == 1) {
      *(undefined4 *)(DAT_8c05ae48 + ar4) = 0;
    }
  }
  return 1;
}



/* FUN_8c05ae54 @ 8c05ae54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05ae54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float in_fr1;
  float fVar3;
  double dVar4;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_5c;
  float fStack_58;
  int iStack_54;
  undefined8 uStack_4c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  uStack_5c = in_fr5;
  if (in_FPSCR_SZ == '\0') {
    uStack_5c = in_fr4;
  }
  (*(code *)PTR_Vec3_ctor_zero_8c05af54)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c05af58)(ar4 + 0x14,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_Vec3_length_8c05af5c)(auStack_28,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c05af60)(auStack_18,uVar2,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c05af64)(auStack_28,0xffffffff,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2c);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_58 = in_fr1 + 1.0;
  }
  else {
    fStack_58 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  iStack_54 = ar4;
  if (in_FPSCR_SZ != '\0') {
    fStack_58 = (float)in_xd0;
    iStack_54 = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(iStack_54 + 0x2c) = fStack_58;
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fStack_58);
  }
  else {
    *(ulonglong *)(iStack_54 + 0x2c) = CONCAT44(iStack_54,fStack_58);
    in_xd0 = CONCAT44(iStack_54,fStack_58);
    dVar4 = *(double *)(ar4 + 0x38);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(uStack_5c,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(fStack_58,uStack_5c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  uVar1 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    uStack_4c = CONCAT44(uStack_4c._4_4_,fVar3);
    uVar1 = uStack_4c;
  }
  uStack_4c = uVar1;
  (*(code *)PTR_Vec3_scale_8c05af68)(auStack_18,&uStack_4c,ar6,ar7);
  (*(code *)PTR_FUN_8c05af6c)(ar4 + 0x14,auStack_38,ar6,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c05af64)(auStack_38,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_normalize_8c05af70)(ar4 + 0x14,uVar2,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c05af60)(ar4 + 0x14,(int)&uStack_4c + 4,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c05af64)((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c05af60)(ar4 + DAT_8c05af74,ar4 + 0x14,ar6,ar7);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c05af64)(auStack_18,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c05af78 @ 8c05af78 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c05b552) */
/* WARNING: Removing unreachable block (ram,0x8c05b04e) */
/* WARNING: Removing unreachable block (ram,0x8c05aff2) */
/* WARNING: Removing unreachable block (ram,0x8c05b052) */
/* WARNING: Removing unreachable block (ram,0x8c05b556) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c05af78(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *a5;
  double *pdVar4;
  int iVar5;
  int a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  double in_dr0;
  ulonglong uVar9;
  undefined4 uVar12;
  ulonglong uVar10;
  double dVar11;
  float fVar13;
  double in_dr14;
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
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar6 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar6 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar6 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar6 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar6 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar6 + -0x10) = in_PR;
  iVar1 = -DAT_8c05b1b0;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c05b1b8)
            ((undefined1 *)((int)puVar6 + DAT_8c05b1b4 + iVar1 + -0x10),ar5,ar6,ar7);
  a5 = PTR_Vec3_ctor_zero_8c05b1b8;
  (*(code *)PTR_Vec3_ctor_zero_8c05b1b8)
            ((undefined1 *)((int)puVar6 + DAT_8c05b1bc + iVar1 + -0x10),PTR_Vec3_ctor_zero_8c05b1b8,
             a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c05b1b8)
            ((undefined1 *)((int)puVar6 + DAT_8c05b1c0 + iVar1 + -0x10),a5,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c05b1b8)
            ((undefined1 *)((int)puVar6 + DAT_8c05b1c4 + iVar1 + -0x10),a5,a6,ar7);
  pdVar4 = ar5;
  (*(code *)PTR_Vec3_ctor_copy_8c05b1cc)
            ((undefined1 *)((int)puVar6 + DAT_8c05b1c8 + iVar1 + -0x10),ar5,a6,ar7);
  (*(code *)PTR_vec3_clear_8c05b1d4)(ar4 + DAT_8c05b1d0,pdVar4,a6,ar7);
  *(undefined4 *)(DAT_8c05b1d8 + ar4) = 0;
  pdVar4 = *(double **)(DAT_8c05b1dc + ar6);
  if ((pdVar4 != (double *)0x0) && ((*(byte *)(DAT_8c05b1e0 + ar4) & 0x3f) >> 5 != 0)) {
    *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
         (undefined1 *)((int)puVar6 + DAT_8c05b1e4 + iVar1 + -0x10);
    (*(code *)PTR_FUN_8c05b1e8)
              (*(undefined4 *)(ar6 + 0x70),
               (undefined1 *)((int)puVar6 + DAT_8c05b1e4 + iVar1 + -0x10),a6,ar7);
    (*(code *)PTR_Vec3_assign_8c05b1f0)
              (ar4 + DAT_8c05b1ec,(undefined1 *)((int)puVar6 + DAT_8c05b1e4 + iVar1 + -0x10),a6,ar7)
    ;
    pdVar4 = (double *)0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c05b1f4)
              ((undefined1 *)((int)puVar6 + DAT_8c05b1e4 + iVar1 + -0x10),0xffffffff,a6,ar7);
    *(undefined4 *)(DAT_8c05b1e4 + ar4) = 1;
  }
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(DAT_8c05b1e0 + ar4) << 0x1e) < 0)) {
    (*(code *)PTR_Vec3_assign_8c05b1f0)
              ((undefined1 *)((int)puVar6 + DAT_8c05b1c0 + iVar1 + -0x10),ar5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c05b1f0)
              ((undefined1 *)((int)puVar6 + DAT_8c05b1c4 + iVar1 + -0x10),*(int *)(ar6 + 0x68) + 4,
               a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + DAT_8c05b1f8));
    }
    *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
         (undefined1 *)((int)puVar6 + DAT_8c05b1ec + iVar1 + -0x10);
    (*(code *)PTR_Vec3_sub_8c05b204)
              ((undefined1 *)((int)puVar6 + DAT_8c05b200 + iVar1 + -0x14),
               (undefined1 *)((int)puVar6 + DAT_8c05b1fc + iVar1 + -0x14),a6,ar7);
    (*(code *)PTR_Vec3_assign_8c05b1f0)
              ((undefined1 *)((int)puVar6 + DAT_8c05b1b4 + iVar1 + -0x10),
               (undefined1 *)((int)puVar6 + DAT_8c05b1ec + iVar1 + -0x10),a6,ar7);
    uVar3 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c05b1f4)
              ((undefined1 *)((int)puVar6 + DAT_8c05b1ec + iVar1 + -0x10),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c05b208)
              ((undefined1 *)((int)puVar6 + DAT_8c05b1b4 + iVar1 + -0x10),uVar3,a6,ar7);
    uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar6 + iVar1 + 0x3c) = uVar3;
      in_dr0 = (double)CONCAT44(uVar3,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)((int)puVar6 + iVar1 + 0x3c) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar7 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(*(undefined4 *)((int)puVar6 + iVar1 + 0x3c),fVar7);
    }
    else {
      dVar11 = *(double *)((int)puVar6 + iVar1 + 0x3c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar11 - dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c05b20c,fVar7);
    }
    else {
      dVar11 = (double)CONCAT44(PTR_Vec3_length_8c05b210,DAT_8c05b20c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar6 + iVar1 + 0x54) = fVar7;
      fVar7 = *(float *)((int)puVar6 + iVar1 + 0x54);
    }
    else {
      *(undefined8 *)((int)puVar6 + iVar1 + 0x54) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar6 + iVar1 + 0x54);
    }
    if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar6 + iVar1 + 0x54) = 0;
      }
      else {
        *(ulonglong *)((int)puVar6 + iVar1 + 0x54) = (ulonglong)(uint)fVar7;
      }
    }
    uVar9 = (ulonglong)(uint)fVar7;
    (*(code *)PTR_Vec3_length_8c05b210)
              ((undefined1 *)((int)puVar6 + DAT_8c05b1b4 + iVar1 + -0x10),ar4 + 0x48,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c05b208)(ar4 + 4,PTR_Vec3_length_sq_8c05b208,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar6 + iVar1 + 0x38) = (int)(uVar9 >> 0x20);
      uVar9 = (ulonglong)*(uint *)((int)puVar6 + iVar1 + 0x38);
    }
    else {
      *(ulonglong *)((int)puVar6 + iVar1 + 0x38) = uVar9;
      in_xd0 = *(undefined8 *)((int)puVar6 + iVar1 + 0x38);
    }
    fVar7 = (float)uVar9;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar7) {
      if (*(int *)(DAT_8c05b214 + ar4) == 7) {
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b218 + iVar1 + -0x10);
        (*(code *)PTR_Vec3_scale_8c05b220)(ar4 + 0x14,PTR_DAT_8c05b21c,a6,ar7);
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b224 + iVar1 + -0x10);
        puVar2 = (undefined1 *)((int)puVar6 + DAT_8c05b228 + iVar1 + -0x14);
        (*(code *)PTR_Vec3_add_8c05b230)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b22c + iVar1 + -0x14),puVar2,a6,ar7);
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b234 + iVar1 + -0x10);
        (*(code *)PTR_Vec3_normalize_8c05b23c)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b238 + iVar1 + -0x14),puVar2,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c05b1f0)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b1b4 + iVar1 + -0x10),
                   (undefined1 *)((int)puVar6 + DAT_8c05b234 + iVar1 + -0x10),a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b1f4)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b234 + iVar1 + -0x10),0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b1f4)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b224 + iVar1 + -0x10),0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b1f4)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b218 + iVar1 + -0x10),0xffffffff,a6,ar7);
      }
      else {
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b404 + iVar1 + -0x10);
        (*(code *)PTR_Vec3_scale_8c05b40c)(ar4 + 0x14,PTR_DAT_8c05b408,a6,ar7);
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b410 + iVar1 + -0x10);
        puVar2 = (undefined1 *)((int)puVar6 + DAT_8c05b414 + iVar1 + -0x14);
        (*(code *)PTR_Vec3_add_8c05b41c)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b418 + iVar1 + -0x14),puVar2,a6,ar7);
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b420 + iVar1 + -0x10);
        (*(code *)PTR_Vec3_normalize_8c05b428)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b424 + iVar1 + -0x14),puVar2,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c05b430)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b42c + iVar1 + -0x10),
                   (undefined1 *)((int)puVar6 + DAT_8c05b420 + iVar1 + -0x10),a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b434)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b420 + iVar1 + -0x10),0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b434)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b410 + iVar1 + -0x10),0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b434)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b404 + iVar1 + -0x10),0xffffffff,a6,ar7);
      }
    }
    (*(code *)PTR_FUN_8c05b438)
              ((undefined1 *)((int)puVar6 + DAT_8c05b42c + iVar1 + -0x10),
               (undefined1 *)((int)puVar6 + iVar1 + 0x54),a6,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar7;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar6 + DAT_8c05b418 + iVar1 + -0x10) = 0;
    }
    else {
      *(double *)((int)puVar6 + DAT_8c05b418 + iVar1 + -0x10) = in_dr0;
    }
    (*(code *)PTR_Vec3_assign_8c05b430)
              (ar4 + DAT_8c05b43c,(undefined1 *)((int)puVar6 + DAT_8c05b42c + iVar1 + -0x10),a6,ar7)
    ;
    if ((2 < *(int *)(DAT_8c05b440 + ar4)) && (*(int *)(DAT_8c05b444 + ar4) == 1)) {
      *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar6 + DAT_8c05b448 + iVar1 + -0x10);
      (*(code *)PTR_Vec3_sub_8c05b454)
                ((undefined1 *)((int)puVar6 + DAT_8c05b450 + iVar1 + -0x14),
                 (undefined1 *)((int)puVar6 + DAT_8c05b44c + iVar1 + -0x14),a6,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c05b45c)
                ((undefined1 *)((int)puVar6 + DAT_8c05b458 + iVar1 + -0x10),
                 (undefined1 *)((int)puVar6 + DAT_8c05b448 + iVar1 + -0x10),a6,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05b434)
                ((undefined1 *)((int)puVar6 + DAT_8c05b448 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_set_xyz_8c05b468)
                ((undefined1 *)((int)puVar6 + DAT_8c05b460._4_4_ + iVar1 + -0x10),uVar3,a6,ar7);
      *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar6 + DAT_8c05b46c + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c05b478)
                ((undefined1 *)((int)puVar6 + DAT_8c05b474 + iVar1 + -0x14),
                 (undefined1 *)((int)puVar6 + DAT_8c05b470 + iVar1 + -0x14),a6,ar7);
      (*(code *)PTR_Vec3_assign_8c05b430)
                ((undefined1 *)((int)puVar6 + DAT_8c05b458 + iVar1 + -0x10),
                 (undefined1 *)((int)puVar6 + DAT_8c05b46c + iVar1 + -0x10),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c05b434)
                ((undefined1 *)((int)puVar6 + DAT_8c05b46c + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c05b47c)
                ((undefined1 *)((int)puVar6 + DAT_8c05b460._4_4_ + iVar1 + -0x10),0xffffffff,a6,ar7)
      ;
      puVar2 = (undefined1 *)((int)puVar6 + DAT_8c05b458 + iVar1 + -0x10);
      (*(code *)PTR_FUN_8c05b480)(ar4 + 0x14,puVar2,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar6 + iVar1 + 0x34) = (int)((ulonglong)in_dr0 >> 0x20);
        dVar11 = (double)(ulonglong)*(uint *)((int)puVar6 + iVar1 + 0x34);
      }
      else {
        *(double *)((int)puVar6 + iVar1 + 0x34) = in_dr0;
        in_xd0 = *(undefined8 *)((int)puVar6 + iVar1 + 0x34);
        dVar11 = in_dr0;
      }
      in_dr0 = (double)((ulonglong)dVar11 & 0xffffffff);
      if (in_FPSCR_PR == '\0' && 0.0 < SUB84(dVar11,0)) {
        (*(code *)PTR_Vec3_set_xyz_8c05b5f8)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b5f0._4_4_ + iVar1 + -0x10),puVar2,a6,ar7);
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b5fc + iVar1 + -0x10);
        (*(code *)PTR_FUN_8c05b604)
                  (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05b600 + iVar1 + -0x14),a6,ar7);
        (*(code *)PTR_Vec3_assign_8c05b608)
                  (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05b5fc + iVar1 + -0x10),a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b60c)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b5fc + iVar1 + -0x10),0xffffffff,a6,ar7);
        (*(code *)PTR_object_dtor_delete_8c05b610)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b5f0._4_4_ + iVar1 + -0x10),0xffffffff,a6,
                   ar7);
      }
      else {
        (*(code *)PTR_Vec3_set_xyz_8c05b468)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b488 + iVar1 + -0x10),puVar2,a6,ar7);
        *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
             (undefined1 *)((int)puVar6 + DAT_8c05b48c + iVar1 + -0x10);
        (*(code *)PTR_FUN_8c05b478)
                  (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05b490 + iVar1 + -0x14),a6,ar7);
        (*(code *)PTR_Vec3_assign_8c05b430)
                  (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05b48c + iVar1 + -0x10),a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c05b434)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b48c + iVar1 + -0x10),0xffffffff,a6,ar7);
        (*(code *)PTR_object_dtor_delete_8c05b47c)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b488 + iVar1 + -0x10),0xffffffff,a6,ar7);
        (*(code *)PTR_FUN_8c05b438)
                  ((undefined1 *)((int)puVar6 + DAT_8c05b458 + iVar1 + -0x10),PTR_DAT_8c05b494,a6,
                   ar7);
      }
      (*(code *)PTR_FUN_8c05b61c)(ar4 + DAT_8c05b618,PTR_DAT_8c05b614,a6,ar7);
      *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
           (undefined1 *)((int)puVar6 + DAT_8c05b620 + iVar1 + -0x10);
      (*(code *)PTR_Vec3_scale_8c05b62c)
                ((undefined1 *)((int)puVar6 + DAT_8c05b628 + iVar1 + -0x14),PTR_DAT_8c05b624,a6,ar7)
      ;
      (*(code *)PTR_FUN_8c05b630)
                (ar4 + DAT_8c05b618,(undefined1 *)((int)puVar6 + DAT_8c05b620 + iVar1 + -0x10),a6,
                 ar7);
      (*(code *)PTR_Vec3_dtor_8c05b60c)
                ((undefined1 *)((int)puVar6 + DAT_8c05b620 + iVar1 + -0x10),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c05b60c)
                ((undefined1 *)((int)puVar6 + DAT_8c05b634 + iVar1 + -0x10),0xffffffff,a6,ar7);
    }
    pdVar4 = (double *)0x1;
    *(undefined4 *)(DAT_8c05b638 + ar4) = 1;
  }
  if ((*(int *)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(DAT_8c05b63c + ar4) << 0x1d))) {
LAB_8c05c02c:
    if (2 < *(int *)(DAT_8c05c15c + ar4)) {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(DAT_8c05c160,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar11 = (double)CONCAT44(DAT_8c05c164,DAT_8c05c160);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar7,SUB84(dVar11,0) * fVar7);
      }
      else {
        dVar11 = dVar11 * dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c05c164,SUB84(in_dr14,0));
      }
      else {
        dVar14 = (double)CONCAT44(PTR_Vec3_ctor_xyz_8c05c168,DAT_8c05c164);
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) - SUB84(dVar11,0),
                                  SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 - dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(uint *)ar5,SUB84(dVar11,0));
      }
      else {
        in_dr0 = *ar5;
      }
      fVar7 = (float)((ulonglong)dVar14 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar15 = fVar7 < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        bVar15 = dVar14 < in_dr0;
      }
      if (!bVar15) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)(ulonglong)*(uint *)ar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c05c108),SUB84(in_dr0,0));
        }
        else {
          dVar11 = *(double *)(ar4 + DAT_8c05c108);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar11 + dVar11,0);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar8);
        }
        else {
          in_dr0 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
          fVar8 = SUB84(in_dr0,0) + fVar13;
          in_dr0 = (double)CONCAT44(fVar13,fVar8);
          bVar15 = fVar8 < fVar7;
        }
        else {
          in_dr0 = in_dr0 + in_dr0;
          bVar15 = in_dr0 < dVar14;
        }
        if (!bVar15) {
          pdVar4 = (double *)(ar4 + DAT_8c05c108);
          in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)pdVar4 = 0;
          }
          else {
            *pdVar4 = in_dr0;
          }
        }
      }
    }
    (*(code *)PTR_Vec3_ctor_xyz_8c05c168)((undefined1 *)((int)puVar6 + iVar1 + 0x68),pdVar4,a6,ar7);
    uVar3 = (*(code *)PTR_FUN_8c05c16c)
                      (ar4 + DAT_8c05c108,(undefined1 *)((int)puVar6 + iVar1 + 0x68),a6,ar7);
    *(undefined4 *)((int)puVar6 + iVar1 + -8) = uVar3;
    *(undefined4 *)((int)puVar6 + iVar1 + 0x40) = *(undefined4 *)((int)puVar6 + iVar1 + -8);
    (*(code *)PTR_Vec3_dtor_8c05c0dc)((undefined1 *)((int)puVar6 + iVar1 + 0x68),0xffffffff,a6,ar7);
    iVar5 = *(int *)((int)puVar6 + iVar1 + 0x40);
    if (iVar5 != 0) {
      (*(code *)PTR_FUN_8c05c22c)(ar4,iVar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar6 + iVar1 + -0xc) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)((int)puVar6 + iVar1 + -0xc) = in_dr0;
      }
      (*(code *)PTR_FUN_8c05c22c)(ar4,iVar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar6 + iVar1 + -0x10) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)((int)puVar6 + iVar1 + -0x10) = in_dr0;
      }
      (*(code *)PTR_Vec3_ctor_xyz_8c05c230)
                ((undefined1 *)((int)puVar6 + iVar1 + 0x58),
                 (undefined1 *)((int)puVar6 + iVar1 + 0x58),a6,ar7);
      (*(code *)PTR_FUN_8c05c238)
                (ar4 + DAT_8c05c234,(undefined1 *)((int)puVar6 + iVar1 + 0x58),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c05c23c)
                ((undefined1 *)((int)puVar6 + iVar1 + 0x58),0xffffffff,a6,ar7);
    }
    (*(code *)PTR_Vec3_dtor_8c05c23c)
              ((undefined1 *)((int)puVar6 + DAT_8c05c240 + iVar1 + -0x10),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05c23c)
              ((undefined1 *)((int)puVar6 + DAT_8c05c244 + iVar1 + -0x10),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05c23c)
              ((undefined1 *)((int)puVar6 + DAT_8c05c248 + iVar1 + -0x10),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05c23c)
              ((undefined1 *)((int)puVar6 + DAT_8c05c24c + iVar1 + -0x10),0xffffffff,a6,ar7);
    uVar3 = (*(code *)PTR_Vec3_dtor_8c05c23c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05c250 + iVar1 + -0x10),0xffffffff,a6,ar7)
    ;
  }
  else {
    uVar3 = (*(code *)PTR_get_field_24_05c284_8c05b640)(*(undefined4 *)(ar6 + 0x50),pdVar4,a6,ar7);
    *(undefined4 *)((int)puVar6 + iVar1 + 0x30) = uVar3;
    if (*(int *)((int)puVar6 + iVar1 + 0x30) != 0xf) {
      uVar3 = (*(code *)PTR_get_field_24_05c284_8c05b640)(*(undefined4 *)(ar6 + 0x50),pdVar4,a6,ar7)
      ;
      *(undefined4 *)((int)puVar6 + iVar1 + 0x2c) = uVar3;
      if (*(int *)((int)puVar6 + iVar1 + 0x2c) != 10) {
        uVar3 = (*(code *)PTR_get_field_24_05c284_8c05b640)
                          (*(undefined4 *)(ar6 + 0x50),pdVar4,a6,ar7);
        *(undefined4 *)((int)puVar6 + iVar1 + 0x28) = uVar3;
        if (*(int *)((int)puVar6 + iVar1 + 0x28) != 0xd) {
          (**(code **)(DAT_8c05b9ac + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                    (*(int *)(ar6 + 0x50),pdVar4,a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar6 + iVar1 + 0x24) = (int)((ulonglong)in_dr0 >> 0x20);
            in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                       *(undefined4 *)((int)puVar6 + iVar1 + 0x24));
            dVar11 = (double)CONCAT44(DAT_8c05b9b0,SUB84(in_dr0,0));
          }
          else {
            *(double *)((int)puVar6 + iVar1 + 0x24) = in_dr0;
            dVar11 = (double)CONCAT44(DAT_8c05b9b4,DAT_8c05b9b0);
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                      SUB84(in_dr14,0) + (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar14 = in_dr14 + dVar11;
          }
          pdVar4 = ar5;
          (*(code *)PTR_Vec3_assign_8c05b9b8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9b4 + iVar1 + -0x10),ar5,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05b9bc + iVar1 + -0x10);
          (*(code *)PTR_FUN_8c05b9c0)(*(undefined4 *)(ar6 + 0x50),pdVar4,a6,ar7);
          (*(code *)PTR_Vec3_assign_8c05b9b8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9c4 + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05b9bc + iVar1 + -0x10),a6,ar7);
          (*(code *)PTR_Vec3_dtor_8c05b9c8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9bc + iVar1 + -0x10),0xffffffff,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05b9cc + iVar1 + -0x10);
          (*(code *)PTR_Vec3_sub_8c05b9d8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9d4 + iVar1 + -0x14),
                     (undefined1 *)((int)puVar6 + DAT_8c05b9d0 + iVar1 + -0x14),a6,ar7);
          (*(code *)PTR_Vec3_assign_8c05b9b8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9dc + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05b9cc + iVar1 + -0x10),a6,ar7);
          uVar3 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c05b9c8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9cc + iVar1 + -0x10),0xffffffff,a6,ar7);
          (*(code *)PTR_Vec3_length_sq_8c05b9e0)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9dc + iVar1 + -0x10),uVar3,a6,ar7);
          uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)puVar6 + iVar1 + 0x20) = uVar12;
            dVar11 = (double)CONCAT44(uVar12,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            *(double *)((int)puVar6 + iVar1 + 0x20) = dVar11;
            in_xd0 = *(undefined8 *)(ar4 + 0x48);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar11,0) + SUB84(dVar14,0);
          }
          else {
            fVar7 = SUB84(dVar11 + dVar14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)((int)puVar6 + iVar1 + 0x20),fVar7);
          }
          else {
            dVar11 = *(double *)((int)puVar6 + iVar1 + 0x20);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar11 - dVar11,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44(DAT_8c05b9e4,fVar7);
          }
          else {
            dVar11 = (double)CONCAT44(PTR_Vec3_length_8c05b9e8,DAT_8c05b9e4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar11 * dVar11,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar6 + iVar1 + 0x54) = fVar7;
            fVar7 = *(float *)((int)puVar6 + iVar1 + 0x54);
          }
          else {
            *(undefined8 *)((int)puVar6 + iVar1 + 0x54) = in_xd0;
            in_xd0 = *(undefined8 *)((int)puVar6 + iVar1 + 0x54);
          }
          if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)puVar6 + iVar1 + 0x54) = 0;
            }
            else {
              *(ulonglong *)((int)puVar6 + iVar1 + 0x54) = (ulonglong)(uint)fVar7;
            }
          }
          uVar9 = (ulonglong)(uint)fVar7;
          (*(code *)PTR_Vec3_length_8c05b9e8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9dc + iVar1 + -0x10),uVar3,a6,ar7);
          (*(code *)PTR_FUN_8c05b9ec)
                    ((undefined1 *)((int)puVar6 + DAT_8c05b9dc + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + iVar1 + 0x54),a6,ar7);
          if ((*(int *)(DAT_8c05b9f0 + ar4) != 0xf) && (*(int *)(DAT_8c05b9f0 + ar4) != 0xf)) {
            uVar9 = uVar9 & 0xffffffff;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)puVar6 + DAT_8c05b9f4 + iVar1 + -0x10) = 0;
            }
            else {
              *(ulonglong *)((int)puVar6 + DAT_8c05b9f4 + iVar1 + -0x10) = uVar9;
            }
          }
          puVar2 = (undefined1 *)((int)puVar6 + DAT_8c05b9dc + iVar1 + -0x10);
          (*(code *)PTR_FUN_8c05b9fc)(ar4 + DAT_8c05b9f8,puVar2,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05ba00 + iVar1 + -0x10);
          (**(code **)(DAT_8c05ba04 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                    (*(int *)(ar6 + 0x50),puVar2,a6,ar7);
          (*(code *)PTR_Vec3_assign_8c05b9b8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05ba08 + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05ba00 + iVar1 + -0x10),a6,ar7);
          (*(code *)PTR_Vec3_dtor_8c05b9c8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05ba00 + iVar1 + -0x10),0xffffffff,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05ba0c + iVar1 + -0x10);
          (*(code *)PTR_FUN_8c05ba10)(ar4 + DAT_8c05b9f8,DAT_8c05b9f8,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05ba14 + iVar1 + -0x10);
          (*(code *)PTR_FUN_8c05ba10)
                    ((undefined1 *)((int)puVar6 + DAT_8c05ba18 + iVar1 + -0x14),PTR_FUN_8c05ba10,a6,
                     ar7);
          (*(code *)PTR_FUN_8c05ba1c)
                    ((undefined1 *)((int)puVar6 + DAT_8c05ba0c + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05ba14 + iVar1 + -0x10),a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar6 + iVar1 + 0x1c) = (int)(uVar9 >> 0x20);
            uVar9 = CONCAT44(DAT_8c05ba20,*(undefined4 *)((int)puVar6 + iVar1 + 0x1c));
          }
          else {
            *(ulonglong *)((int)puVar6 + iVar1 + 0x1c) = uVar9;
            in_xd0 = *(undefined8 *)((int)puVar6 + iVar1 + 0x1c);
            uVar9 = CONCAT44(_DAT_8c05ba24,DAT_8c05ba20);
          }
          *(uint *)((int)puVar6 + iVar1 + 0x50) =
               (uint)(in_FPSCR_PR == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20));
          (*(code *)PTR_Vec3_dtor_8c05b9c8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05ba14 + iVar1 + -0x10),0xffffffff,a6,ar7);
          (*(code *)PTR_Vec3_dtor_8c05b9c8)
                    ((undefined1 *)((int)puVar6 + DAT_8c05ba0c + iVar1 + -0x10),0xffffffff,a6,ar7);
          if (*(int *)((int)puVar6 + iVar1 + 0x50) != 0) {
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + _DAT_8c05ba24 + iVar1 + -0x10);
            (*(code *)PTR_Vec3_sub_8c05b9d8)
                      ((undefined1 *)((int)puVar6 + DAT_8c05b9d4 + iVar1 + -0x14),
                       (undefined1 *)((int)puVar6 + DAT_8c05b9d0 + iVar1 + -0x14),a6,ar7);
            (*(code *)PTR_Vec3_assign_8c05b9b8)
                      ((undefined1 *)((int)puVar6 + DAT_8c05b9dc + iVar1 + -0x10),
                       (undefined1 *)((int)puVar6 + _DAT_8c05ba24 + iVar1 + -0x10),a6,ar7);
            (*(code *)PTR_Vec3_dtor_8c05b9c8)
                      ((undefined1 *)((int)puVar6 + _DAT_8c05ba24 + iVar1 + -0x10),0xffffffff,a6,ar7
                      );
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + DAT_8c05ba28 + iVar1 + -0x10);
            (*(code *)PTR_FUN_8c05ba10)(ar4 + DAT_8c05b9f8,ar4 + DAT_8c05b9f8,a6,ar7);
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + DAT_8c05ba2c + iVar1 + -0x10);
            (*(code *)PTR_FUN_8c05ba10)
                      ((undefined1 *)((int)puVar6 + DAT_8c05b9f4 + iVar1 + -0x14),
                       (undefined1 *)((int)puVar6 + DAT_8c05b9f4 + iVar1 + -0x14),a6,ar7);
            (*(code *)PTR_FUN_8c05ba1c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05ba28 + iVar1 + -0x10),
                       (undefined1 *)((int)puVar6 + DAT_8c05ba2c + iVar1 + -0x10),a6,ar7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar6 + iVar1 + 0x18) = (int)(uVar9 >> 0x20);
              uVar9 = CONCAT44(DAT_8c05ba20,*(undefined4 *)((int)puVar6 + iVar1 + 0x18));
            }
            else {
              *(ulonglong *)((int)puVar6 + iVar1 + 0x18) = uVar9;
              in_xd0 = *(undefined8 *)((int)puVar6 + iVar1 + 0x18);
              uVar9 = CONCAT44(_DAT_8c05ba24,DAT_8c05ba20);
            }
            *(uint *)((int)puVar6 + iVar1 + 0x4c) =
                 (uint)(in_FPSCR_PR == '\0' && (float)uVar9 < (float)(uVar9 >> 0x20));
            (*(code *)PTR_Vec3_dtor_8c05b9c8)
                      ((undefined1 *)((int)puVar6 + DAT_8c05ba2c + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05b9c8)
                      ((undefined1 *)((int)puVar6 + DAT_8c05ba28 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            if (*(int *)((int)puVar6 + iVar1 + 0x4c) != 0) {
              (*(code *)PTR_Vec3_set_xyz_8c05ba34)
                        ((undefined1 *)((int)puVar6 + DAT_8c05ba30 + iVar1 + -0x10),
                         PTR_Vec3_set_xyz_8c05ba34,a6,ar7);
              *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                   (undefined1 *)((int)puVar6 + DAT_8c05ba38 + iVar1 + -0x10);
              (*(code *)PTR_FUN_8c05ba40)
                        (ar4 + DAT_8c05b9f8,
                         (undefined1 *)((int)puVar6 + DAT_8c05ba3c + iVar1 + -0x14),a6,ar7);
              (*(code *)PTR_Vec3_assign_8c05b9b8)
                        (ar4 + DAT_8c05b9f8,
                         (undefined1 *)((int)puVar6 + DAT_8c05ba38 + iVar1 + -0x10),a6,ar7);
              (*(code *)PTR_Vec3_dtor_8c05b9c8)
                        ((undefined1 *)((int)puVar6 + DAT_8c05ba38 + iVar1 + -0x10),0xffffffff,a6,
                         ar7);
              (*(code *)PTR_object_dtor_delete_8c05ba44)
                        ((undefined1 *)((int)puVar6 + DAT_8c05ba30 + iVar1 + -0x10),0xffffffff,a6,
                         ar7);
            }
          }
          if ((2 < *(int *)(DAT_8c05ba48 + ar4)) && (*(int *)(DAT_8c05ba4c + ar4) == 1)) {
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + DAT_8c05ba50 + iVar1 + -0x10);
            (*(code *)PTR_Vec3_sub_8c05b9d8)
                      ((undefined1 *)((int)puVar6 + DAT_8c05b9d0 + iVar1 + -0x14),
                       (undefined1 *)((int)puVar6 + DAT_8c05b9d4 + iVar1 + -0x14),a6,ar7);
            (*(code *)PTR_Vec3_ctor_copy_8c05ba58)
                      ((undefined1 *)((int)puVar6 + DAT_8c05ba54 + iVar1 + -0x10),
                       (undefined1 *)((int)puVar6 + DAT_8c05ba50 + iVar1 + -0x10),a6,ar7);
            uVar3 = 0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c05b9c8)
                      ((undefined1 *)((int)puVar6 + DAT_8c05ba50 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_set_xyz_8c05ba34)
                      ((undefined1 *)((int)puVar6 + DAT_8c05ba5c._4_4_ + iVar1 + -0x10),uVar3,a6,ar7
                      );
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + DAT_8c05ba64 + iVar1 + -0x10);
            (*(code *)PTR_FUN_8c05bb30)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bb2c + iVar1 + -0x14),
                       (undefined1 *)((int)puVar6 + DAT_8c05ba68 + iVar1 + -0x14),a6,ar7);
            (*(code *)PTR_Vec3_assign_8c05bb3c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bb38 + iVar1 + -0x10),
                       (undefined1 *)((int)puVar6 + DAT_8c05bb34 + iVar1 + -0x10),a6,ar7);
            (*(code *)PTR_Vec3_dtor_8c05bb40)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bb34 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_object_dtor_delete_8c05bb48)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bb44 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_FUN_8c05bb4c)
                      (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05bb38 + iVar1 + -0x10),a6,ar7)
            ;
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar6 + iVar1 + 0x14) = (int)(uVar9 >> 0x20);
              uVar10 = (ulonglong)*(uint *)((int)puVar6 + iVar1 + 0x14);
            }
            else {
              *(ulonglong *)((int)puVar6 + iVar1 + 0x14) = uVar9;
              in_xd0 = *(undefined8 *)((int)puVar6 + iVar1 + 0x14);
              uVar10 = uVar9;
            }
            uVar9 = uVar10 & 0xffffffff;
            if (in_FPSCR_PR == '\0' && 0.0 < (float)uVar10) {
              (*(code *)PTR_Vec3_set_xyz_8c05bc7c)
                        ((undefined1 *)((int)puVar6 + DAT_8c05bc74._4_4_ + iVar1 + -0x10),
                         (undefined1 *)((int)puVar6 + DAT_8c05bc74._4_4_ + iVar1 + -0x10),a6,ar7);
              *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                   (undefined1 *)((int)puVar6 + DAT_8c05bc80 + iVar1 + -0x10);
              (*(code *)PTR_FUN_8c05bc88)
                        (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05bc84 + iVar1 + -0x14),a6,
                         ar7);
              (*(code *)PTR_Vec3_assign_8c05bc8c)
                        (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05bc80 + iVar1 + -0x10),a6,
                         ar7);
              (*(code *)PTR_Vec3_dtor_8c05bc90)
                        ((undefined1 *)((int)puVar6 + DAT_8c05bc80 + iVar1 + -0x10),0xffffffff,a6,
                         ar7);
              (*(code *)PTR_object_dtor_delete_8c05bc94)
                        ((undefined1 *)((int)puVar6 + DAT_8c05bc74._4_4_ + iVar1 + -0x10),0xffffffff
                         ,a6,ar7);
            }
            else {
              (*(code *)PTR_Vec3_set_xyz_8c05bb58)
                        ((undefined1 *)((int)puVar6 + DAT_8c05bb54 + iVar1 + -0x10),
                         (undefined1 *)((int)puVar6 + DAT_8c05bb54 + iVar1 + -0x10),a6,ar7);
              *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                   (undefined1 *)((int)puVar6 + DAT_8c05bb5c + iVar1 + -0x10);
              (*(code *)PTR_FUN_8c05bb30)
                        (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05bb60 + iVar1 + -0x14),a6,
                         ar7);
              (*(code *)PTR_Vec3_assign_8c05bb3c)
                        (ar4 + 0x14,(undefined1 *)((int)puVar6 + DAT_8c05bb5c + iVar1 + -0x10),a6,
                         ar7);
              (*(code *)PTR_Vec3_dtor_8c05bb40)
                        ((undefined1 *)((int)puVar6 + DAT_8c05bb5c + iVar1 + -0x10),0xffffffff,a6,
                         ar7);
              (*(code *)PTR_object_dtor_delete_8c05bb48)
                        ((undefined1 *)((int)puVar6 + DAT_8c05bb54 + iVar1 + -0x10),0xffffffff,a6,
                         ar7);
              (*(code *)PTR_FUN_8c05bb68)
                        ((undefined1 *)((int)puVar6 + DAT_8c05bb38 + iVar1 + -0x10),PTR_DAT_8c05bb64
                         ,a6,ar7);
            }
            (*(code *)PTR_FUN_8c05bca0)(ar4 + DAT_8c05bc9c,PTR_DAT_8c05bc98,a6,ar7);
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + DAT_8c05bca4 + iVar1 + -0x10);
            (*(code *)PTR_Vec3_scale_8c05bcb0)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bcac + iVar1 + -0x14),PTR_DAT_8c05bca8,
                       a6,ar7);
            (*(code *)PTR_FUN_8c05bcb4)
                      (ar4 + DAT_8c05bc9c,(undefined1 *)((int)puVar6 + DAT_8c05bca4 + iVar1 + -0x10)
                       ,a6,ar7);
            (*(code *)PTR_Vec3_dtor_8c05bc90)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bca4 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05bc90)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bcb8 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
          }
          iVar5 = DAT_8c05bcbc;
          *(undefined4 *)(DAT_8c05bcbc + ar4) = 1;
          if (*(int *)(ar6 + 0x58) == 0) {
            (*(code *)PTR_Vec3_dtor_8c05bc90)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bcc0 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05bc90)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bcc4 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05bc90)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bcc8 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05bc90)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bccc + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            uVar3 = (*(code *)PTR_Vec3_dtor_8c05bc90)
                              ((undefined1 *)((int)puVar6 + DAT_8c05bcd0 + iVar1 + -0x10),0xffffffff
                               ,a6,ar7);
            return uVar3;
          }
          uVar3 = (*(code *)PTR_get_field_24_05c284_8c05bd54)
                            (*(undefined4 *)(ar6 + 0x58),iVar5,a6,ar7);
          *(undefined4 *)((int)puVar6 + iVar1 + 0x10) = uVar3;
          if (*(int *)((int)puVar6 + iVar1 + 0x10) == 0xf) {
LAB_8c05bd06:
            (*(code *)PTR_Vec3_dtor_8c05bd5c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bd58 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05bd5c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bd60 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05bd5c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bd64 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            (*(code *)PTR_Vec3_dtor_8c05bd5c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05bd68 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            uVar3 = (*(code *)PTR_Vec3_dtor_8c05bd5c)
                              ((undefined1 *)((int)puVar6 + DAT_8c05bd6c + iVar1 + -0x10),0xffffffff
                               ,a6,ar7);
            return uVar3;
          }
          uVar3 = (*(code *)PTR_get_field_24_05c284_8c05bd54)
                            (*(undefined4 *)(ar6 + 0x58),iVar5,a6,ar7);
          *(undefined4 *)((int)puVar6 + iVar1 + 0xc) = uVar3;
          if (*(int *)((int)puVar6 + iVar1 + 0xc) == 10) goto LAB_8c05bd06;
          (**(code **)(DAT_8c05c0c0 + *(int *)(*(int *)(ar6 + 0x58) + 8)))
                    (*(int *)(ar6 + 0x58),uVar3,a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar6 + iVar1 + 8) = (int)(uVar9 >> 0x20);
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                      *(undefined4 *)((int)puVar6 + iVar1 + 8));
            dVar11 = (double)CONCAT44(DAT_8c05c0c4,(int)uVar9);
          }
          else {
            *(ulonglong *)((int)puVar6 + iVar1 + 8) = uVar9;
            dVar11 = (double)CONCAT44(DAT_8c05c0c8,DAT_8c05c0c4);
          }
          if (in_FPSCR_PR == '\0') {
            in_dr14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                       SUB84(dVar14,0) + (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            in_dr14 = dVar14 + dVar11;
          }
          (*(code *)PTR_Vec3_assign_8c05c0cc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0c8 + iVar1 + -0x10),ar5,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05c0d0 + iVar1 + -0x10);
          (*(code *)PTR_FUN_8c05c0d4)(*(undefined4 *)(ar6 + 0x58),(undefined4 *)(ar6 + 0x58),a6,ar7)
          ;
          (*(code *)PTR_Vec3_assign_8c05c0cc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0d8 + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05c0d0 + iVar1 + -0x10),a6,ar7);
          (*(code *)PTR_Vec3_dtor_8c05c0dc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0d0 + iVar1 + -0x10),0xffffffff,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05c0e0 + iVar1 + -0x10);
          (*(code *)PTR_Vec3_sub_8c05c0ec)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0e8 + iVar1 + -0x14),
                     (undefined1 *)((int)puVar6 + DAT_8c05c0e4 + iVar1 + -0x14),a6,ar7);
          (*(code *)PTR_Vec3_assign_8c05c0cc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0f0 + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05c0e0 + iVar1 + -0x10),a6,ar7);
          uVar3 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c05c0dc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0e0 + iVar1 + -0x10),0xffffffff,a6,ar7);
          (*(code *)PTR_Vec3_length_sq_8c05c0f4)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0f0 + iVar1 + -0x10),uVar3,a6,ar7);
          uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)puVar6 + iVar1 + 4) = uVar12;
            dVar11 = (double)CONCAT44(uVar12,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            *(double *)((int)puVar6 + iVar1 + 4) = dVar11;
            in_xd0 = *(undefined8 *)(ar4 + 0x48);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar11,0) + SUB84(in_dr14,0);
          }
          else {
            fVar7 = SUB84(dVar11 + in_dr14,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)((int)puVar6 + iVar1 + 4),fVar7);
          }
          else {
            dVar11 = *(double *)((int)puVar6 + iVar1 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar11 - dVar11,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44(DAT_8c05c0f8,fVar7);
          }
          else {
            dVar11 = (double)CONCAT44(PTR_Vec3_length_8c05c0fc,DAT_8c05c0f8);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar11 * dVar11,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar6 + iVar1 + 0x54) = fVar7;
            fVar7 = *(float *)((int)puVar6 + iVar1 + 0x54);
          }
          else {
            *(undefined8 *)((int)puVar6 + iVar1 + 0x54) = in_xd0;
          }
          if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)puVar6 + iVar1 + 0x54) = 0;
            }
            else {
              *(ulonglong *)((int)puVar6 + iVar1 + 0x54) = (ulonglong)(uint)fVar7;
            }
          }
          (*(code *)PTR_Vec3_length_8c05c0fc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0f0 + iVar1 + -0x10),uVar3,a6,ar7);
          (*(code *)PTR_FUN_8c05c100)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c0f0 + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + iVar1 + 0x54),a6,ar7);
          uVar9 = (ulonglong)(uint)fVar7;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)puVar6 + DAT_8c05c104 + iVar1 + -0x10) = 0;
          }
          else {
            *(ulonglong *)((int)puVar6 + DAT_8c05c104 + iVar1 + -0x10) = uVar9;
          }
          puVar2 = (undefined1 *)((int)puVar6 + DAT_8c05c0f0 + iVar1 + -0x10);
          (*(code *)PTR_FUN_8c05c10c)(ar4 + DAT_8c05c108,puVar2,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05c110 + iVar1 + -0x10);
          (**(code **)(DAT_8c05c114 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                    (*(int *)(ar6 + 0x50),puVar2,a6,ar7);
          (*(code *)PTR_Vec3_assign_8c05c0cc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c118 + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05c110 + iVar1 + -0x10),a6,ar7);
          (*(code *)PTR_Vec3_dtor_8c05c0dc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c110 + iVar1 + -0x10),0xffffffff,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05c11c + iVar1 + -0x10);
          iVar5 = ar4 + DAT_8c05c108;
          (*(code *)PTR_FUN_8c05c120)(iVar5,iVar5,a6,ar7);
          *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar6 + DAT_8c05c124 + iVar1 + -0x10);
          (*(code *)PTR_FUN_8c05c120)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c128 + iVar1 + -0x14),iVar5,a6,ar7);
          (*(code *)PTR_FUN_8c05c12c)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c11c + iVar1 + -0x10),
                     (undefined1 *)((int)puVar6 + DAT_8c05c124 + iVar1 + -0x10),a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar6 + iVar1) = (int)(uVar9 >> 0x20);
            in_dr0 = (double)CONCAT44(DAT_8c05c130,*(undefined4 *)((int)puVar6 + iVar1));
          }
          else {
            *(ulonglong *)((int)puVar6 + iVar1) = uVar9;
            in_dr0 = (double)CONCAT44(_DAT_8c05c134,DAT_8c05c130);
          }
          *(uint *)((int)puVar6 + iVar1 + 0x48) =
               (uint)(in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20));
          (*(code *)PTR_Vec3_dtor_8c05c0dc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c124 + iVar1 + -0x10),0xffffffff,a6,ar7);
          pdVar4 = (double *)0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c05c0dc)
                    ((undefined1 *)((int)puVar6 + DAT_8c05c11c + iVar1 + -0x10),0xffffffff,a6,ar7);
          if (*(int *)((int)puVar6 + iVar1 + 0x48) != 0) {
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + _DAT_8c05c134 + iVar1 + -0x10);
            (*(code *)PTR_Vec3_sub_8c05c0ec)
                      ((undefined1 *)((int)puVar6 + DAT_8c05c0e8 + iVar1 + -0x14),
                       (undefined1 *)((int)puVar6 + DAT_8c05c0e4 + iVar1 + -0x14),a6,ar7);
            (*(code *)PTR_Vec3_assign_8c05c0cc)
                      ((undefined1 *)((int)puVar6 + DAT_8c05c0f0 + iVar1 + -0x10),
                       (undefined1 *)((int)puVar6 + _DAT_8c05c134 + iVar1 + -0x10),a6,ar7);
            (*(code *)PTR_Vec3_dtor_8c05c0dc)
                      ((undefined1 *)((int)puVar6 + _DAT_8c05c134 + iVar1 + -0x10),0xffffffff,a6,ar7
                      );
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + DAT_8c05c138 + iVar1 + -0x10);
            (*(code *)PTR_FUN_8c05c120)(ar4 + DAT_8c05c108,PTR_FUN_8c05c120,a6,ar7);
            *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                 (undefined1 *)((int)puVar6 + DAT_8c05c13c + iVar1 + -0x10);
            (*(code *)PTR_FUN_8c05c120)
                      ((undefined1 *)((int)puVar6 + DAT_8c05c104 + iVar1 + -0x14),PTR_FUN_8c05c120,
                       a6,ar7);
            (*(code *)PTR_FUN_8c05c12c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05c138 + iVar1 + -0x10),
                       (undefined1 *)((int)puVar6 + DAT_8c05c13c + iVar1 + -0x10),a6,ar7);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar6 + iVar1 + -4) = (int)((ulonglong)in_dr0 >> 0x20);
              in_dr0 = (double)CONCAT44(DAT_8c05c130,*(undefined4 *)((int)puVar6 + iVar1 + -4));
            }
            else {
              *(double *)((int)puVar6 + iVar1 + -4) = in_dr0;
              in_dr0 = (double)CONCAT44(_DAT_8c05c134,DAT_8c05c130);
            }
            *(uint *)((int)puVar6 + iVar1 + 0x44) =
                 (uint)(in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20))
            ;
            (*(code *)PTR_Vec3_dtor_8c05c0dc)
                      ((undefined1 *)((int)puVar6 + DAT_8c05c13c + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            pdVar4 = (double *)0xffffffff;
            (*(code *)PTR_Vec3_dtor_8c05c0dc)
                      ((undefined1 *)((int)puVar6 + DAT_8c05c138 + iVar1 + -0x10),0xffffffff,a6,ar7)
            ;
            if (*(int *)((int)puVar6 + iVar1 + 0x44) != 0) {
              (*(code *)PTR_Vec3_set_xyz_8c05c144)
                        ((undefined1 *)((int)puVar6 + DAT_8c05c140 + iVar1 + -0x10),pdVar4,a6,ar7);
              *(undefined1 **)((int)puVar6 + iVar1 + -0x14) =
                   (undefined1 *)((int)puVar6 + DAT_8c05c148 + iVar1 + -0x10);
              (*(code *)PTR_FUN_8c05c150)
                        (ar4 + DAT_8c05c108,
                         (undefined1 *)((int)puVar6 + DAT_8c05c14c + iVar1 + -0x14),a6,ar7);
              (*(code *)PTR_Vec3_assign_8c05c0cc)
                        (ar4 + DAT_8c05c108,
                         (undefined1 *)((int)puVar6 + DAT_8c05c148 + iVar1 + -0x10),a6,ar7);
              (*(code *)PTR_Vec3_dtor_8c05c0dc)
                        ((undefined1 *)((int)puVar6 + DAT_8c05c148 + iVar1 + -0x10),0xffffffff,a6,
                         ar7);
              pdVar4 = (double *)0xffffffff;
              (*(code *)PTR_object_dtor_delete_8c05c154)
                        ((undefined1 *)((int)puVar6 + DAT_8c05c140 + iVar1 + -0x10),0xffffffff,a6,
                         ar7);
            }
          }
          *(undefined4 *)(DAT_8c05c158 + ar4) = 1;
          goto LAB_8c05c02c;
        }
      }
    }
    (*(code *)PTR_Vec3_dtor_8c05b60c)
              ((undefined1 *)((int)puVar6 + DAT_8c05b644 + iVar1 + -0x10),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05b60c)
              ((undefined1 *)((int)puVar6 + DAT_8c05b648 + iVar1 + -0x10),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05b60c)
              ((undefined1 *)((int)puVar6 + DAT_8c05b64c + iVar1 + -0x10),0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05b60c)
              ((undefined1 *)((int)puVar6 + DAT_8c05b650 + iVar1 + -0x10),0xffffffff,a6,ar7);
    uVar3 = (*(code *)PTR_Vec3_dtor_8c05b60c)
                      ((undefined1 *)((int)puVar6 + DAT_8c05b654 + iVar1 + -0x10),0xffffffff,a6,ar7)
    ;
  }
  return uVar3;
}



/* FUN_8c05c258 @ 8c05c258 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05c258(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c05c278)(in_stack_00000000,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_3f800000_05c27c @ 8c05c27c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_3f800000_05c27c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* get_field_24_05c284 @ 8c05c284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_24_05c284(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}



/* FUN_8c05c28c @ 8c05c28c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c05c28c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 uVar4;
  undefined4 unaff_r14;
  double *pdVar5;
  float fVar6;
  float fVar7;
  undefined8 in_dr0;
  ulonglong uVar8;
  double dVar9;
  undefined8 uVar10;
  double in_dr12;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar11;
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
    pdVar5 = &dStack_10;
    dStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar5 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar5 + -0xc) = in_PR;
  uVar4 = 1;
  (*(code *)PTR_Vec3_ctor_xyz_8c05c2c0)((undefined1 *)((int)pdVar5 + -0x1c),ar5,ar6,ar7);
  if (*(int *)(DAT_8c05c2c4 + ar4) == 2) {
    uVar4 = 0;
    goto LAB_8c05c608;
  }
  (*(code *)PTR_CAnimBody_GetCurFrame_8c05c2f8)(ar4 + DAT_8c05c2f4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar5 + -0x28) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)((int)pdVar5 + -0x28));
  }
  else {
    *(undefined8 *)((int)pdVar5 + -0x28) = in_dr0;
  }
  iVar1 = *(int *)(DAT_8c05c2fc + ar4);
  uVar3 = (undefined4)in_dr0;
  uVar2 = SUB84(in_dr14,0);
  if (iVar1 == 1) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((undefined4)DAT_8c05c318,uVar2);
      in_dr12 = (double)CONCAT44(DAT_8c05c320,DAT_8c05c318._4_4_);
      in_dr0 = CONCAT44(DAT_8c05c324,uVar3);
      *(undefined4 *)((int)pdVar5 + -0x20) = DAT_8c05c324;
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c05c318._4_4_,(undefined4)DAT_8c05c318);
      in_dr12 = (double)CONCAT44(DAT_8c05c324,DAT_8c05c320);
      in_dr0 = CONCAT44(uRam8c05c328,DAT_8c05c324);
      *(undefined8 *)((int)pdVar5 + -0x20) = in_dr0;
    }
  }
  else if (iVar1 == 2) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44(DAT_8c05c340,uVar2);
      in_dr12 = (double)CONCAT44(DAT_8c05c340,DAT_8c05c344);
      in_dr0 = CONCAT44(DAT_8c05c344,uVar3);
      *(undefined4 *)((int)pdVar5 + -0x20) = DAT_8c05c344;
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c05c344,DAT_8c05c340);
      in_dr12 = (double)CONCAT44(DAT_8c05c344,DAT_8c05c340);
      in_dr0 = CONCAT44(uRam8c05c348,DAT_8c05c344);
      *(undefined8 *)((int)pdVar5 + -0x20) = in_dr0;
    }
  }
  else if (iVar1 == 3) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((undefined4)DAT_8c05c360,uVar2);
      in_dr12 = (double)CONCAT44(DAT_8c05c368,DAT_8c05c360._4_4_);
      in_dr0 = CONCAT44(DAT_8c05c36c,uVar3);
      *(undefined4 *)((int)pdVar5 + -0x20) = DAT_8c05c36c;
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c05c360._4_4_,(undefined4)DAT_8c05c360);
      in_dr12 = (double)CONCAT44(DAT_8c05c36c,DAT_8c05c368);
      in_dr0 = CONCAT44(uRam8c05c370,DAT_8c05c36c);
      *(undefined8 *)((int)pdVar5 + -0x20) = in_dr0;
    }
  }
  else if (iVar1 == 4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((undefined4)DAT_8c05c3b0,uVar2);
      in_dr12 = (double)CONCAT44(DAT_8c05c3b8,DAT_8c05c3b0._4_4_);
      in_dr0 = CONCAT44(DAT_8c05c3bc,uVar3);
      *(undefined4 *)((int)pdVar5 + -0x20) = DAT_8c05c3bc;
    }
    else {
      in_dr14 = (double)CONCAT44(DAT_8c05c3b0._4_4_,(undefined4)DAT_8c05c3b0);
      in_dr12 = (double)CONCAT44(DAT_8c05c3bc,DAT_8c05c3b8);
      in_dr0 = CONCAT44(DAT_8c05c3c0,DAT_8c05c3bc);
      *(undefined8 *)((int)pdVar5 + -0x20) = in_dr0;
    }
  }
  uVar3 = (undefined4)in_dr0;
  if (*(int *)(DAT_8c05c3c0 + ar4) < 3) {
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c05c3c8)(ar4 + DAT_8c05c3c4,ar5,ar6,ar7);
    *(undefined4 *)((int)pdVar5 + -0x2c) = uVar2;
    fVar7 = SUB84(in_dr14,0);
    if (*(int *)((int)pdVar5 + -0x2c) == 5) {
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < fVar7) {
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar7 < SUB84(in_dr12,0);
        }
        else {
          bVar11 = in_dr14 < in_dr12;
        }
        if (bVar11) {
          *(int *)((int)pdVar5 + -0x38) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(DAT_8c05c40c,
                                     *(undefined4 *)(*(int *)((int)pdVar5 + -0x38) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x38) + 0x28);
            dVar9 = (double)CONCAT44(uRam8c05c410,DAT_8c05c40c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 + dVar9,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar5 + -0x38) + 0x28) = fVar7;
            uVar10 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar5 + -0x38) + 0x28) = in_xd0;
            uVar10 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar10 >> 0x20) < (float)uVar10) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      *(int *)((int)pdVar5 + -0x3c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c05c440,*(undefined4 *)(*(int *)((int)pdVar5 + -0x3c) + 0x28))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x3c) + 0x28);
        dVar9 = (double)CONCAT44(uRam8c05c444,DAT_8c05c440);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar5 + -0x3c) + 0x28) = fVar7;
        fVar7 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar5 + -0x3c) + 0x28) = in_xd0;
      }
      if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
        }
      }
    }
    else if (*(int *)((int)pdVar5 + -0x2c) == 6) {
      if (in_FPSCR_PR == '\0') {
        bVar11 = (float)((ulonglong)in_dr12 >> 0x20) < fVar7;
      }
      else {
        bVar11 = in_dr12 < in_dr14;
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + -0x20),uVar3);
        }
        else {
          dVar9 = *(double *)((int)pdVar5 + -0x20);
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar7 < (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          bVar11 = in_dr14 < dVar9;
        }
        if (bVar11) {
          *(int *)((int)pdVar5 + -0x40) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(DAT_8c05c488,
                                     *(undefined4 *)(*(int *)((int)pdVar5 + -0x40) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x40) + 0x28);
            dVar9 = (double)CONCAT44(uRam8c05c48c,DAT_8c05c488);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 + dVar9,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar5 + -0x40) + 0x28) = fVar7;
            uVar10 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar5 + -0x40) + 0x28) = in_xd0;
            uVar10 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar10 >> 0x20) < (float)uVar10) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      *(int *)((int)pdVar5 + -0x44) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c05c4bc,*(undefined4 *)(*(int *)((int)pdVar5 + -0x44) + 0x28))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x44) + 0x28);
        dVar9 = (double)CONCAT44(uRam8c05c4c0,DAT_8c05c4bc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar5 + -0x44) + 0x28) = fVar7;
        fVar7 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar5 + -0x44) + 0x28) = in_xd0;
      }
      if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
        }
      }
    }
    else {
      *(int *)((int)pdVar5 + -0x48) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c05c4d8,*(undefined4 *)(*(int *)((int)pdVar5 + -0x48) + 0x28))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x48) + 0x28);
        dVar9 = (double)CONCAT44(uRam8c05c4dc,DAT_8c05c4d8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar5 + -0x48) + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar5 + -0x48) + 0x28) = in_xd0;
      }
    }
  }
  else {
    uVar3 = (*(code *)PTR_get_field_1c_026dd8_8c05c530)(ar4 + DAT_8c05c52c,ar5,ar6,ar7);
    *(undefined4 *)((int)pdVar5 + -0x30) = uVar3;
    if (*(int *)((int)pdVar5 + -0x30) == 6) {
      fVar7 = SUB84(in_dr14,0);
      if (in_FPSCR_PR != '\0' || fVar7 <= (float)((ulonglong)in_dr14 >> 0x20)) {
code_r0x8c05c538:
        *(int *)((int)pdVar5 + -0x50) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c05c5a0,
                                   *(undefined4 *)(*(int *)((int)pdVar5 + -0x50) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x50) + 0x28);
          dVar9 = (double)CONCAT44(_DAT_8c05c5a4,DAT_8c05c5a0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar5 + -0x50) + 0x28) = fVar6;
          fVar6 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar5 + -0x50) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        uVar8 = (ulonglong)(uint)fVar6;
        if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
          uVar8 = (ulonglong)(uint)fVar6;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = uVar8;
          }
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar7 < SUB84(in_dr12,0);
        }
        else {
          bVar11 = in_dr14 < in_dr12;
        }
        if (!bVar11) goto code_r0x8c05c538;
        *(int *)((int)pdVar5 + -0x4c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c05c534,
                                   *(undefined4 *)(*(int *)((int)pdVar5 + -0x4c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x4c) + 0x28);
          dVar9 = (double)CONCAT44(uRam8c05c538,DAT_8c05c534);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar5 + -0x4c) + 0x28) = fVar6;
          uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar5 + -0x4c) + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar8 = *(ulonglong *)(ar4 + 0x24);
        }
        if (in_FPSCR_PR == '\0' && (float)(uVar8 >> 0x20) < (float)uVar8) {
          if (in_FPSCR_SZ == '\0') {
            uVar3 = *(undefined4 *)(ar4 + 0x24);
            uVar8 = CONCAT44(uVar3,(float)uVar8);
            *(undefined4 *)(ar4 + 0x28) = uVar3;
          }
          else {
            uVar8 = *(ulonglong *)(ar4 + 0x24);
            *(ulonglong *)(ar4 + 0x28) = uVar8;
          }
        }
      }
      if (in_FPSCR_PR == '\0') {
        bVar11 = (float)((ulonglong)in_dr12 >> 0x20) < fVar7;
      }
      else {
        bVar11 = in_dr12 < in_dr14;
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + -0x20),(int)uVar8);
        }
        else {
          dVar9 = *(double *)((int)pdVar5 + -0x20);
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar7 < (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          bVar11 = in_dr14 < dVar9;
        }
        if (bVar11) {
          *(int *)((int)pdVar5 + -0x54) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(_DAT_8c05c5a4,
                                     *(undefined4 *)(*(int *)((int)pdVar5 + -0x54) + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x54) + 0x28);
            dVar9 = (double)CONCAT44(uRam8c05c5a8,_DAT_8c05c5a4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 + dVar9,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(*(int *)((int)pdVar5 + -0x54) + 0x28) = fVar7;
            uVar10 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(*(int *)((int)pdVar5 + -0x54) + 0x28) = in_xd0;
            uVar10 = *(undefined8 *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar10 >> 0x20) < (float)uVar10) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      *(int *)((int)pdVar5 + -0x58) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c05c5d4,*(undefined4 *)(*(int *)((int)pdVar5 + -0x58) + 0x28))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x58) + 0x28);
        dVar9 = (double)CONCAT44(uRam8c05c5d8,DAT_8c05c5d4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar5 + -0x58) + 0x28) = fVar7;
        fVar7 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar5 + -0x58) + 0x28) = in_xd0;
      }
      if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
        }
      }
    }
    else {
      *(int *)((int)pdVar5 + -0x5c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c05c62c,*(undefined4 *)(*(int *)((int)pdVar5 + -0x5c) + 0x28))
        ;
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar5 + -0x5c) + 0x28);
        dVar9 = (double)CONCAT44(DAT_8c05c630,DAT_8c05c62c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar5 + -0x5c) + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar5 + -0x5c) + 0x28) = in_xd0;
      }
    }
  }
LAB_8c05c5ec:
  uVar3 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c05c634)(ar4 + DAT_8c05c630,ar5,ar6,ar7);
  *(undefined4 *)((int)pdVar5 + -0x34) = uVar3;
  if (*(int *)((int)pdVar5 + -0x34) == 1) {
    *(undefined4 *)(DAT_8c05c638 + ar4) = 2;
    uVar4 = 0;
  }
LAB_8c05c608:
  *(undefined4 *)((int)pdVar5 + -0x24) = uVar4;
  (*(code *)PTR_Vec3_dtor_8c05c63c)((undefined1 *)((int)pdVar5 + -0x1c),0xffffffff,ar6,ar7);
  return *(undefined4 *)((int)pdVar5 + -0x24);
}



/* FUN_8c05c640 @ 8c05c640 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05c640(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 in_dr0;
  float fVar10;
  double dVar9;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar6 = 1;
  if (*(int *)(DAT_8c05c664 + ar4) < 1) {
    if (*(int *)(DAT_8c05c678 + ar4) == 0) {
      switch(*(undefined4 *)(DAT_8c05c69c + ar4)) {
      case 0:
        uVar2 = ar5;
        iVar1 = ar6;
        iVar3 = (*(code *)PTR_get_field_1c_026dd8_8c05c700)(ar4 + DAT_8c05c6fc,ar5,ar6,ar7);
        fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
        if (iVar3 == 0x11) {
          (*(code *)PTR_CAnimBody_GetCurFrame_8c05c704)(ar4 + DAT_8c05c6fc,uVar2,iVar1,ar7);
          fVar7 = DAT_8c05c708;
          fVar10 = DAT_8c05c70c;
          if (in_FPSCR_SZ == '\0') {
            fVar7 = fVar8;
            fVar10 = DAT_8c05c708;
          }
          if (in_FPSCR_PR != '\0' || fVar7 <= fVar10) {
            *(undefined4 *)((int)DAT_8c05c70c + ar4) = 3;
            *(undefined4 *)(DAT_8c05c710 + ar4) = 3;
            return 1;
          }
        }
        if (ar6 == 1) {
          iVar1 = (*(code *)PTR_FUN_8c05c77c)(ar4,ar5,iVar1,ar7);
          if (iVar1 == 0) {
            *(int *)(DAT_8c05c780 + ar4) = *(int *)(DAT_8c05c780 + ar4) + 1;
          }
        }
        else {
          iVar1 = (*(code *)PTR_FUN_8c05c748)(ar4,uVar2,iVar1,ar7);
          if (iVar1 == 0) {
            *(int *)(DAT_8c05c74c + ar4) = *(int *)(DAT_8c05c74c + ar4) + 1;
          }
        }
        break;
      case 1:
        *(undefined4 *)(DAT_8c05c830 + ar4) = 0;
        *(undefined4 *)(DAT_8c05c834 + ar4) = 1;
        iVar3 = ar4 + DAT_8c05c838;
        iVar1 = (*(code *)PTR_FUN_8c05c83c)(ar4,ar5,iVar3,ar6);
        if (iVar1 == 0) {
          *(undefined4 *)(DAT_8c05c834 + ar4) = 0;
          *(int *)(DAT_8c05c840 + ar4) = *(int *)(DAT_8c05c840 + ar4) + 1;
          *(undefined4 *)(ar4 + 0x40) = 5;
          (*(code *)PTR_Vec3_assign_8c05c848)(ar4 + DAT_8c05c844,ar5,iVar3,ar6);
          (*(code *)PTR_FUN_8c05c850)(ar4,ar5,iVar3,ar6);
          uStack_28 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            uStack_2c = uStack_28;
            uStack_28 = 0;
          }
          else {
            uStack_2c = (undefined4)in_dr0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(uStack_2c,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x48);
            dVar9 = (double)CONCAT44(uStack_28,uStack_2c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar8 = (float)((ulonglong)dVar9 >> 0x20);
            dVar9 = (double)CONCAT44(fVar8,SUB84(dVar9,0) * fVar8);
          }
          else {
            dVar9 = dVar9 * dVar9;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar4 + DAT_8c05c844) = SUB84(dVar9,0);
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c05c844) = in_xd0;
          }
          (*(code *)PTR_FUN_8c05c850)(ar4,ar5,iVar3,ar6);
          uVar2 = (undefined4)((ulonglong)dVar9 >> 0x20);
          uStack_30 = uVar2;
          if (in_FPSCR_SZ != '\0') {
            uStack_30 = SUB84(dVar9,0);
            uStack_2c = uVar2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(uStack_30,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            dVar9 = (double)CONCAT44(uStack_2c,uStack_30);
          }
          if (in_FPSCR_PR == '\0') {
            fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar8 = SUB84(dVar9 * dVar9,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(DAT_8c05c858,fVar8);
          }
          else {
            dVar9 = (double)CONCAT44(uRam8c05c85c,DAT_8c05c858);
          }
          if (in_FPSCR_PR == '\0') {
            dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0),
                                     SUB84(dVar9,0));
          }
          else {
            dVar9 = dVar9 - dVar9;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(ar4 + DAT_8c05c854) = (int)((ulonglong)dVar9 >> 0x20);
          }
          else {
            *(double *)(ar4 + DAT_8c05c854) = dVar9;
          }
        }
        break;
      case 2:
        *(undefined4 *)(DAT_8c05c8ec + ar4) = 0xffffffff;
        iVar1 = (*(code *)PTR_FUN_8c05c8f8)(ar4,ar5,ar4 + DAT_8c05c8f4,ar7);
        if (iVar1 == 0) {
          *(undefined4 *)(DAT_8c05c8ec + ar4) = 0;
          iVar1 = (*(code *)PTR_rand_range_8c05c8fc)(ar4,0,10,ar7);
          if (iVar1 < 5) {
            uVar5 = 0;
            uVar4 = 0xffffffff;
            uVar2 = 0x1e;
            iVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05c908)
                              (ar4 + DAT_8c05c900._4_4_,0x1e,0xffffffff,0);
            if (iVar1 != 6) {
              (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05c90c)
                        (ar4 + DAT_8c05c900._4_4_,uVar2,uVar4,uVar5);
            }
            *(int *)(DAT_8c05c910 + ar4) = *(int *)(DAT_8c05c910 + ar4) + 2;
          }
          else {
            uVar5 = 0;
            uVar4 = 0xffffffff;
            uVar2 = 0x11;
            iVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05c964)
                              (ar4 + DAT_8c05c95c._4_4_,0x11,0xffffffff,0);
            if (iVar1 != 6) {
              (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05c968)
                        (ar4 + DAT_8c05c95c._4_4_,uVar2,uVar4,uVar5);
            }
            *(int *)(DAT_8c05c96c + ar4) = *(int *)(DAT_8c05c96c + ar4) + 1;
          }
          *(undefined4 *)(DAT_8c05c970 + ar4) = 3;
        }
        break;
      case 3:
        iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c05c9ac)
                          (ar4 + DAT_8c05c9a8,ar5,ar6,ar7);
        if (iVar1 == 7) {
          *(undefined4 *)(DAT_8c05c9b0 + ar4) = 0;
          uVar6 = 0;
        }
        break;
      case 4:
        iVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05c9f0)
                          (ar4 + DAT_8c05c9ec,ar5,ar6,ar7);
        if (iVar1 == 1) {
          *(undefined4 *)(DAT_8c05c9f4 + ar4) = 0;
          *(undefined4 *)(DAT_8c05c9f8 + ar4) = 2;
          uVar6 = 0;
        }
      }
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* FUN_8c05c9fc @ 8c05c9fc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c05c9fc(int ar4,undefined1 *ar5,undefined1 *ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar9;
  uint uVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar14;
  double dVar13;
  float fVar15;
  undefined4 in_fr3;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar9 = auStack_4;
  }
  else {
    puVar9 = auStack_8;
  }
  *(undefined4 *)(puVar9 + -4) = unaff_r14;
  *(undefined4 *)(puVar9 + -8) = unaff_r13;
  *(undefined4 *)(puVar9 + -0xc) = 1;
  *(undefined4 *)(puVar9 + -0x10) = in_PR;
  *(undefined1 **)(puVar9 + -0x17c) = ar6;
  uVar8 = 1;
  *(undefined4 *)(puVar9 + -0x11c) = 0;
  puVar5 = PTR_Vec3_ctor_zero_8c05ca80;
  (*(code *)PTR_Vec3_ctor_zero_8c05ca80)
            (puVar9 + DAT_8c05ca7c + -0x17c,PTR_Vec3_ctor_zero_8c05ca80,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c05ca80)(puVar9 + DAT_8c05ca84 + -0x17c,puVar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c05ca80)(puVar9 + DAT_8c05ca88 + -0x17c,puVar5,ar6,ar7);
  puVar5 = PTR_DAT_8c05ca8c;
  (*(code *)PTR_FUN_8c05ca94)(puVar9 + DAT_8c05ca90 + -0x17c,PTR_DAT_8c05ca8c,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(DAT_8c05ca9c,*(undefined4 *)(PTR_DAT_8c05ca98 + 8));
  }
  else {
    in_xd0 = *(undefined8 *)(PTR_DAT_8c05ca98 + 8);
    dVar11 = (double)CONCAT44(DAT_8c05caa0,DAT_8c05ca9c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + DAT_8c05caa0 + -0x17c) = (int)((ulonglong)dVar11 >> 0x20);
  }
  else {
    *(double *)(puVar9 + DAT_8c05caa0 + -0x17c) = dVar11;
  }
  iVar1 = *(int *)(DAT_8c05caa4 + ar4);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_FUN_8c05cc58)(ar4,PTR_FUN_8c05cc58,ar6,ar7);
    *(undefined4 *)(puVar9 + -0x128) = uVar2;
    if (*(int *)(puVar9 + -0x128) == 0) {
      *(int *)(puVar9 + -0x170) = ar4;
      *(int *)(DAT_8c05cc5c + *(int *)(puVar9 + -0x170)) =
           *(int *)(DAT_8c05cc5c + *(int *)(puVar9 + -0x170)) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(undefined **)(puVar9 + -0x180) = PTR_DAT_8c05cc60;
      *(undefined1 **)(puVar9 + -0x184) = puVar9 + DAT_8c05cc64 + -0x180;
      uVar2 = *(undefined4 *)(DAT_8c05cc68 + ar4);
      ar6 = puVar9 + DAT_8c05cc6c + -0x184;
      if (in_FPSCR_SZ == '\0') {
        uVar12 = CONCAT44(DAT_8c05cc74,SUB84(dVar11,0));
      }
      else {
        uVar12 = CONCAT44(DAT_8c05cc78,DAT_8c05cc74);
      }
      (*(code *)PTR_FUN_8c05cc7c)(ar4,ar5,ar6,uVar2);
      (*(code *)PTR_Vec3_assign_8c05cc84)(ar4 + 0x54,puVar9 + DAT_8c05cc80 + -0x17c,ar6,uVar2);
      uVar6 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05cc88)(puVar9 + DAT_8c05cc80 + -0x17c,0xffffffff,ar6,uVar2);
      (**(code **)(DAT_8c05cc8c + **(int **)(DAT_8c05cc68 + ar4)))
                (*(int **)(DAT_8c05cc68 + ar4),uVar6,ar6,uVar2);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar9 + -300) = (int)((ulonglong)uVar12 >> 0x20);
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(puVar9 + -300));
      }
      else {
        *(undefined8 *)(puVar9 + -300) = uVar12;
        in_xd0 = *(undefined8 *)(puVar9 + -300);
        dVar11 = *(double *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar14,SUB84(dVar11,0) - fVar14);
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x58) = SUB84(dVar11,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = in_xd0;
      }
      *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05cc90 + -0x17c;
      (*(code *)PTR_Vec3_sub_8c05cc94)(ar4 + 0x54,ar5,ar6,uVar2);
      *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05cc98 + -0x17c;
      (*(code *)PTR_Vec3_normalize_8c05cca0)
                (puVar9 + DAT_8c05cc9c + -0x180,PTR_Vec3_normalize_8c05cca0,ar6,uVar2);
      *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05cca4 + -0x17c;
      (*(code *)PTR_Vec3_scale_8c05ccac)(puVar9 + DAT_8c05cca8 + -0x180,ar4 + 0x48,ar6,uVar2);
      *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05ccb0 + -0x17c;
      (*(code *)PTR_Vec3_scale_8c05ccac)(puVar9 + DAT_8c05ccb8 + -0x180,PTR_DAT_8c05ccb4,ar6,uVar2);
      *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05ccbc + -0x17c;
      (*(code *)PTR_Vec3_add_8c05ccc4)(ar5,puVar9 + DAT_8c05ccc0 + -0x180,ar6,uVar2);
      (*(code *)PTR_Vec3_assign_8c05cc84)
                (ar4 + DAT_8c05ccc8,puVar9 + DAT_8c05ccbc + -0x17c,ar6,uVar2);
      (*(code *)PTR_Vec3_dtor_8c05cc88)(puVar9 + DAT_8c05ccbc + -0x17c,0xffffffff,ar6,uVar2);
      ar7 = PTR_Vec3_dtor_8c05cc88;
      (*(code *)PTR_Vec3_dtor_8c05cc88)
                (puVar9 + DAT_8c05ccb0 + -0x17c,0xffffffff,ar6,PTR_Vec3_dtor_8c05cc88);
      (*(code *)PTR_Vec3_dtor_8c05cc88)(puVar9 + DAT_8c05cca4 + -0x17c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c05cc88)(puVar9 + DAT_8c05cc98 + -0x17c,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c05cc88)(puVar9 + DAT_8c05cc90 + -0x17c,0xffffffff,ar6,ar7);
      (**(code **)(DAT_8c05cc8c + **(int **)(DAT_8c05cc68 + ar4)))
                (*(int **)(DAT_8c05cc68 + ar4),uVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar9 + -0x130) = (int)((ulonglong)dVar11 >> 0x20);
      }
      else {
        *(double *)(puVar9 + -0x130) = dVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(puVar9 + -0x130),in_fr3);
        dVar13 = (double)CONCAT44(DAT_8c05ccd0,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar11 = *(double *)(puVar9 + -0x130);
        dVar13 = (double)CONCAT44(uRam8c05ccd4,DAT_8c05ccd0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) -
                                  SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 - dVar13 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c05cccc) = (int)((ulonglong)dVar11 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c05cccc) = dVar11;
      }
    }
  }
  else if (iVar1 == 1) {
    ar6 = (undefined1 *)(ar4 + DAT_8c05cd5c);
    uVar2 = (*(code *)PTR_pure_virtual_stub_8c05cd64)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(puVar9 + -0x134) = uVar2;
    if (*(int *)(puVar9 + -0x134) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(puVar9 + -0x174) = ar4;
      *(int *)(DAT_8c05cd68 + *(int *)(puVar9 + -0x174)) =
           *(int *)(DAT_8c05cd68 + *(int *)(puVar9 + -0x174)) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar11 & 0xffffffff;
      }
      ar7 = (undefined *)0x0;
      ar6 = (undefined1 *)0xffffffff;
      uVar2 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05cd70)(ar4 + DAT_8c05cd6c,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05cd74)(ar4 + DAT_8c05cd6c,uVar2,ar6,ar7);
    }
  }
  else if (iVar1 == 2) {
    (*(code *)PTR_FUN_8c05ce70)(ar4,puVar5,ar6,ar7);
    *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05ce74 + -0x17c;
    (*(code *)PTR_Vec3_scale_8c05ce7c)(ar4 + 0x14,PTR_DAT_8c05ce78,ar6,ar7);
    *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05ce80 + -0x17c;
    (*(code *)PTR_Vec3_add_8c05ce88)(ar5,puVar9 + DAT_8c05ce84 + -0x180,ar6,ar7);
    (*(code *)PTR_FUN_8c05ce8c)(ar4,puVar9 + DAT_8c05ce80 + -0x17c,ar5,ar7);
    (*(code *)PTR_Vec3_dtor_8c05ce90)(puVar9 + DAT_8c05ce80 + -0x17c,0xffffffff,ar5,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c05ce90)(puVar9 + DAT_8c05ce74 + -0x17c,0xffffffff,ar5,ar7);
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c05ce94)(ar4 + DAT_8c05ce80,uVar2,ar5,ar7)
    ;
    *(undefined4 *)(puVar9 + -0x138) = uVar2;
    ar6 = ar5;
    if (*(int *)(puVar9 + -0x138) == 1) {
      fVar14 = DAT_8c05ce98;
      fVar15 = _DAT_8c05ce9c;
      if (in_FPSCR_SZ == '\0') {
        fVar14 = *(float *)(ar4 + 0x18);
        fVar15 = DAT_8c05ce98;
      }
      if (in_FPSCR_PR != '\0' || fVar14 <= fVar15) {
        if (*(int *)((int)_DAT_8c05ce9c + ar4) == 0) {
          ar7 = (undefined *)0x0;
          ar6 = (undefined1 *)0xffffffff;
          uVar2 = 0x14;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05cea4)
                    (ar4 + DAT_8c05ce80,0x14,0xffffffff,0);
          uVar2 = (*(code *)PTR_FUN_8c05cea8)(ar4,uVar2,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x13c) = uVar2;
          uVar6 = *(undefined4 *)(puVar9 + -0x13c);
          uVar2 = (*(code *)PTR_FUN_8c05ceac)(ar4 + DAT_8c05ce80,uVar6,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x140) = uVar2;
          uVar2 = (*(code *)PTR_deref_u32_8c05ceb0)(*(undefined4 *)(puVar9 + -0x140),uVar6,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x144) = uVar2;
          puVar4 = (undefined4 *)(ar4 + DAT_8c05ceb4);
          puVar3 = *(undefined4 **)(puVar9 + -0x144);
          uVar2 = puVar3[1];
          *puVar4 = *puVar3;
          puVar4[1] = uVar2;
          puVar4[2] = puVar3[2];
          *(undefined **)(DAT_8c05ceb4 + ar4) = PTR_DAT_8c05ceb8;
        }
        else if (*(int *)(DAT_8c05cf1c + ar4) == 1) {
          ar7 = (undefined *)0x0;
          ar6 = (undefined1 *)0xffffffff;
          uVar2 = 0x14;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05cf28)
                    (ar4 + DAT_8c05cf20._4_4_,0x14,0xffffffff,0);
          uVar2 = (*(code *)PTR_FUN_8c05cf2c)(ar4,uVar2,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x148) = uVar2;
          uVar6 = *(undefined4 *)(puVar9 + -0x148);
          uVar2 = (*(code *)PTR_FUN_8c05cf30)(ar4 + DAT_8c05cf20._4_4_,uVar6,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x14c) = uVar2;
          uVar2 = (*(code *)PTR_deref_u32_8c05cf34)(*(undefined4 *)(puVar9 + -0x14c),uVar6,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x150) = uVar2;
          puVar4 = (undefined4 *)(ar4 + DAT_8c05cf38);
          puVar3 = *(undefined4 **)(puVar9 + -0x150);
          uVar2 = puVar3[1];
          *puVar4 = *puVar3;
          puVar4[1] = uVar2;
          puVar4[2] = puVar3[2];
          *(undefined **)(DAT_8c05cf38 + ar4) = PTR_DAT_8c05cf3c;
        }
        else {
          ar7 = (undefined *)0x0;
          ar6 = (undefined1 *)0xffffffff;
          uVar2 = 0x15;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05cfcc)
                    (ar4 + DAT_8c05cfc4._4_4_,0x15,0xffffffff,0);
          uVar2 = (*(code *)PTR_FUN_8c05cfd0)(ar4,uVar2,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x154) = uVar2;
          uVar6 = *(undefined4 *)(puVar9 + -0x154);
          uVar2 = (*(code *)PTR_FUN_8c05cfd4)(ar4 + DAT_8c05cfc4._4_4_,uVar6,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x158) = uVar2;
          uVar2 = (*(code *)PTR_deref_u32_8c05cfd8)(*(undefined4 *)(puVar9 + -0x158),uVar6,ar6,ar7);
          *(undefined4 *)(puVar9 + -0x15c) = uVar2;
          puVar4 = (undefined4 *)(ar4 + DAT_8c05cfdc);
          puVar3 = *(undefined4 **)(puVar9 + -0x15c);
          uVar2 = puVar3[1];
          *puVar4 = *puVar3;
          puVar4[1] = uVar2;
          puVar4[2] = puVar3[2];
          *(undefined **)(DAT_8c05cfdc + ar4) = PTR_DAT_8c05cfe0;
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05cfe4)(ar4 + DAT_8c05cfc4._4_4_,uVar6,ar6,ar7);
        (*(code *)PTR_vec3_clear_8c05cfec)(ar4 + DAT_8c05cfe8,uVar6,ar6,ar7);
        *(int *)(puVar9 + -0x178) = ar4;
        *(int *)(DAT_8c05cff0 + *(int *)(puVar9 + -0x178)) =
             *(int *)(DAT_8c05cff0 + *(int *)(puVar9 + -0x178)) + 1;
      }
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(DAT_8c05d220 + ar4) = 1;
    *(undefined4 *)(DAT_8c05d224 + ar4) = 1;
    *(undefined4 *)(DAT_8c05d228 + ar4) = 1;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c05d230)(ar4 + DAT_8c05d22c,puVar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + -0x160) = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *(double *)(puVar9 + -0x160) = dVar11;
    }
    *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05d234 + -0x17c;
    (*(code *)PTR_FUN_8c05d23c)(ar4 + DAT_8c05d22c,**(undefined4 **)(DAT_8c05d238 + ar4),ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c05d244)
              (puVar9 + DAT_8c05d240 + -0x17c,puVar9 + DAT_8c05d234 + -0x17c,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05d248)(puVar9 + DAT_8c05d234 + -0x17c,0xffffffff,ar6,ar7);
    *(undefined1 **)(puVar9 + -0x180) = puVar9 + DAT_8c05d24c + -0x17c;
    (*(code *)PTR_Vec3_sub_8c05d258)(puVar9 + DAT_8c05d254 + -0x180,ar4 + DAT_8c05d250,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c05d244)(ar4 + DAT_8c05d25c,puVar9 + DAT_8c05d24c + -0x17c,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c05d248)(puVar9 + DAT_8c05d24c + -0x17c,0xffffffff,ar6,ar7);
    puVar7 = puVar9 + DAT_8c05d240 + -0x17c;
    (*(code *)PTR_Vec3_assign_8c05d244)(ar4 + DAT_8c05d250,puVar7,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c05d230)(ar4 + DAT_8c05d22c,puVar7,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + -0x164) = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *(double *)(puVar9 + -0x164) = dVar11;
    }
    (*(code *)PTR_Vec3_ctor_xyz_8c05d264)(puVar9 + DAT_8c05d260 + -0x17c,puVar7,ar6,ar7);
    uVar10 = SUB84(dVar11,0);
    ar7 = (undefined *)(ar4 + DAT_8c05d25c);
    ar6 = (undefined1 *)(*(code *)PTR_FUN_8c05d268)(ar7,puVar9 + DAT_8c05d260 + -0x17c,ar6,ar7);
    *(undefined1 **)(puVar9 + -0x168) = ar6;
    *(undefined4 *)(puVar9 + -0x124) = *(undefined4 *)(puVar9 + -0x168);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c05d248)(puVar9 + DAT_8c05d260 + -0x17c,0xffffffff,ar6,ar7);
    if (*(int *)(puVar9 + -0x124) != 0) {
      (*(code *)PTR_vec3_copy_8c02b5fc_8c05d26c)
                (puVar9 + -0x108,*(undefined4 *)(puVar9 + -0x17c),ar6,ar7);
      *(undefined1 **)(puVar9 + -0x180) = puVar9 + -0x118;
      (*(code *)PTR_FUN_8c05d270)(ar4 + DAT_8c05d25c,puVar9 + -0x108,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c05d244)(ar4 + DAT_8c05d25c,puVar9 + -0x118,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c05d248)(puVar9 + -0x118,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c05d274)(puVar9 + -0x108,0xffffffff,ar6,ar7);
    }
    uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c05d278)
                      (ar4 + DAT_8c05d22c,uVar2,ar6,ar7);
    *(undefined4 *)(puVar9 + -0x16c) = uVar2;
    if (*(int *)(puVar9 + -0x16c) == 1) {
      uVar8 = 0;
      *(undefined4 *)(DAT_8c05d27c + ar4) = 0;
      *(undefined4 *)(DAT_8c05d224 + ar4) = 0;
      *(undefined4 *)(DAT_8c05d228 + ar4) = 0;
      *(undefined4 *)(DAT_8c05d220 + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar10;
      }
      (*(code *)PTR_vec3_clear_8c05d280)(ar4 + DAT_8c05d25c,ar4 + DAT_8c05d25c,ar6,ar7);
      ar7 = (undefined *)0x0;
      ar6 = (undefined1 *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c05d288)(ar4 + DAT_8c05d22c,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c05d28c)
                (ar4 + DAT_8c05d22c,ar4 + DAT_8c05d22c,ar6,ar7);
      *(undefined4 *)(DAT_8c05d290 + ar4) = 3;
    }
  }
  *(undefined4 *)(puVar9 + -0x120) = uVar8;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c05d298)
            (puVar9 + DAT_8c05d294 + -0x17c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c05d248)(puVar9 + DAT_8c05d29c + -0x17c,0xffffffff,ar6,ar7);
  puVar7 = puVar9 + DAT_8c05d240 + -0x17c;
  (*(code *)PTR_Vec3_dtor_8c05d248)(puVar7,0xffffffff,puVar7,ar7);
  (*(code *)PTR_Vec3_dtor_8c05d248)(puVar9 + DAT_8c05d2a0 + -0x17c,0xffffffff,puVar7,ar7);
  return *(undefined4 *)(puVar9 + -0x120);
}



/* FUN_8c05d2a4 @ 8c05d2a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05d2a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < *(int *)(DAT_8c05d2b8 + ar4)) {
    return 1;
  }
  return 0;
}



/* FUN_8c05d2bc @ 8c05d2bc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c05d2bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
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
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [76];
  
  uStack_80 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d524,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d52c;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_80,PTR_Vec3_dtor_8c05d530,DAT_8c05d52c,ar7);
  uStack_84 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d538,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d53c;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_84,PTR_Vec3_dtor_8c05d530,DAT_8c05d53c,ar7);
  uStack_88 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d540,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d544;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_88,PTR_Vec3_dtor_8c05d530,DAT_8c05d544,ar7);
  uStack_8c = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d548,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d54c;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_8c,PTR_Vec3_dtor_8c05d530,DAT_8c05d54c,ar7);
  uStack_90 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d55c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d560;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_90,PTR_Vec3_dtor_8c05d530,DAT_8c05d560,ar7);
  uStack_94 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d56c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d570;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_94,PTR_Vec3_dtor_8c05d530,DAT_8c05d570,ar7);
  uStack_98 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d574,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d578;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_98,PTR_Vec3_dtor_8c05d530,DAT_8c05d578,ar7);
  uStack_9c = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d584,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d588;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_9c,PTR_Vec3_dtor_8c05d530,DAT_8c05d588,ar7);
  uStack_a0 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(PTR_DAT_8c05d58c,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d590;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_a0,PTR_Vec3_dtor_8c05d530,DAT_8c05d590,ar7);
  uStack_a4 = (*(code *)PTR_Vec3_ctor_xyz_8c05d528)(DAT_8c05d594,puVar3,uVar2,ar7);
  uVar2 = DAT_8c05d598;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_a4,PTR_Vec3_dtor_8c05d530,DAT_8c05d598,ar7);
  uStack_a8 = (*(code *)PTR_Vec3_ctor_copy_8c05d5a0)(DAT_8c05d59c,PTR_DAT_8c05d56c,uVar2,ar7);
  uVar2 = DAT_8c05d5a4;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_a8,PTR_Vec3_dtor_8c05d530,DAT_8c05d5a4,ar7);
  uStack_ac = (*(code *)PTR_Vec3_ctor_copy_8c05d5a0)(DAT_8c05d59c + 0x10,PTR_DAT_8c05d55c,uVar2,ar7)
  ;
  puVar3 = PTR_Vec3_dtor_8c05d530;
  uVar2 = DAT_8c05d5a8;
  (*(code *)PTR_global_list_push_8c05d534)(uStack_ac,PTR_Vec3_dtor_8c05d530,DAT_8c05d5a8,ar7);
  uVar1 = (*(code *)PTR_FUN_8c05d5c8)((int)&uStack_c0 + DAT_8c05d5c4,puVar3,uVar2,ar7);
  uStack_b0 = uVar1;
  (*(code *)PTR_FUN_8c05d5d0)(DAT_8c05d5cc,uVar1,uVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c05d5c8)((int)&uStack_c0 + DAT_8c05d5e0,uVar1,uVar2,ar7);
  uStack_b4 = uVar1;
  (*(code *)PTR_FUN_8c05d5d0)(DAT_8c05d5cc + 0x18,uVar1,uVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c05d5c8)(auStack_4c,uVar1,uVar2,ar7);
  uStack_b8 = uVar1;
  (*(code *)PTR_FUN_8c05d5d0)(DAT_8c05d5cc + 0x30,uVar1,uVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c05d5c8)(auStack_64,uVar1,uVar2,ar7);
  uStack_bc = uVar1;
  (*(code *)PTR_FUN_8c05d5d0)(DAT_8c05d5cc + 0x48,uVar1,uVar2,ar7);
  uStack_c0 = (*(code *)PTR_FUN_8c05d5c8)(auStack_7c,uVar1,uVar2,ar7);
  uVar2 = (*(code *)PTR_FUN_8c05d5d0)(DAT_8c05d5cc + 0x60,uStack_c0,uVar2,ar7);
  return uVar2;
}



/* FUN_8c05d608 @ 8c05d608 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c05d608(undefined8 *ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = *(undefined4 *)ar5;
    *(undefined4 *)((int)ar4 + 4) = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)((int)ar4 + 0xc) = *(undefined4 *)((int)ar5 + 0xc);
  }
  else {
    *ar4 = *ar5;
    *(undefined8 *)((int)ar4 + 4) = *(undefined8 *)((int)ar5 + 4);
    ar4[1] = ar5[1];
    *(undefined8 *)((int)ar4 + 0xc) = *(undefined8 *)((int)ar5 + 0xc);
  }
  uVar1 = *(undefined4 *)((int)ar5 + 0x14);
  *(undefined4 *)(ar4 + 2) = *(undefined4 *)(ar5 + 2);
  *(undefined4 *)((int)ar4 + 0x14) = uVar1;
  return ar4;
}



/* s_FROGMANLINE_05d646 @ 8c05d644 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * s_FROGMANLINE_05d646(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c05d764)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c05d768;
  (*(code *)PTR_FUN_8c05d770)((int)ar4 + DAT_8c05d76c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c05d778)((int)ar4 + DAT_8c05d774,ar5,ar6,ar7);
  *(undefined1 *)(DAT_8c05d77c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d780 + (int)ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c05d784 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d788 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c05d78c + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c05d790 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d794 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c05d798 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c05d79c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7a0 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c05d7a4 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7a8 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7ac + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7b0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7b4 + (int)ar4) = 0;
  (*(code *)PTR_strcpy_8c05d7c0)
            ((int)ar4 + DAT_8c05d7bc,PTR_s_GRAPHICS_COMMON_8c05d7b8 + 0x10,ar6,ar7);
  (*(code *)PTR_strcpy_8c05d7c0)
            ((int)ar4 + DAT_8c05d76c,PTR_s_GRAPHICS_COMMON_8c05d7b8 + 0x1c,ar6,ar7);
  (*(code *)PTR_strcpy_8c05d7c0)
            ((int)ar4 + DAT_8c05d7c4,PTR_s_GRAPHICS_COMMON_8c05d7b8 + 0x29,ar6,ar7);
  (*(code *)PTR_strcpy_8c05d7c0)
            ((int)ar4 + DAT_8c05d7c8,PTR_s_GRAPHICS_COMMON_8c05d7b8 + 0x37,ar6,ar7);
  *(undefined4 *)(DAT_8c05d7cc + (int)ar4) = 4;
  (*(code *)PTR_FUN_8c05d7d0)((int)ar4 + DAT_8c05d76c,1,ar6,ar7);
  *(undefined1 *)(DAT_8c05d7d4 + (int)ar4) = 2;
  *(undefined4 *)(DAT_8c05d7d8 + (int)ar4) = 1;
  *(undefined4 *)(DAT_8c05d7dc + (int)ar4) = 1;
  *(undefined4 *)(DAT_8c05d7e0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7e4 + (int)ar4) = 0x1b;
  *(undefined4 *)(DAT_8c05d7e8 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7ec + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7f0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c05d7f4 + (int)ar4) = 0;
  return ar4;
}



/* FUN_8c05d7f8 @ 8c05d7f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05d7f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c05d800;
  *(undefined4 *)(DAT_8c05d800 + ar4) = ar5;
  return iVar1;
}



/* Class_12a078_m0_05d804 @ 8c05d804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a078_m0_05d804(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c05d84c;
    (*(code *)PTR_free_if_nonnull_wrap_02eaec_8c05d854)((int)ar4 + DAT_8c05d850,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_129c70_m0_02f1b8_8c05d858)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c05d85c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* s_STATUS_SICK_05d86e @ 8c05d860 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_STATUS_SICK_05d86e(int *ar4,int *ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 a5;
  int iVar9;
  int *piVar10;
  int a6;
  undefined *a7;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  undefined4 uStack_178;
  char cStack_174;
  undefined1 uStack_173;
  undefined1 uStack_172;
  char cStack_171;
  char cStack_170;
  char cStack_16f;
  char cStack_16e;
  char cStack_16d;
  undefined1 uStack_16c;
  char cStack_16b;
  char cStack_16a;
  undefined2 uStack_168;
  undefined2 uStack_166;
  ushort uStack_164;
  undefined2 uStack_162;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  short sStack_15c;
  short sStack_15a;
  undefined2 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  
  piVar3 = ar5;
  piVar10 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c05daf8)((int)&uStack_178 + DAT_8c05daf4,ar5,ar6,ar7);
  puVar8 = (undefined1 *)((int)&uStack_178 + DAT_8c05dafc);
  iVar7 = 0x10;
  puVar6 = PTR_DAT_8c05db00;
  do {
    puVar5 = puVar6 + 1;
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar8[1] = *puVar5;
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05db04) = 0x39;
  *(undefined4 *)((int)&uStack_178 + DAT_8c05db08) = 0;
  puVar6 = PTR_FUN_8c05db0c;
  uVar1 = (*(code *)PTR_FUN_8c05db0c)(ar6[6],piVar3,piVar10,PTR_FUN_8c05db0c);
  uStack_158 = (undefined2)uVar1;
  if ((uVar1 & 0xffff) == 3) {
    uVar2 = (*(code *)PTR_FUN_8c05db10)(ar6[1],3,piVar10,puVar6);
    sStack_15a = (short)uVar2;
    (**(code **)(*ar4 + 0x18))(ar4,ar6[6],(int)sStack_15a,puVar6);
  }
  *(undefined4 *)(PTR_DAT_8c05db14 + DAT_8c05db18) = *(undefined4 *)(DAT_8c05db1c + (int)ar4);
  a7 = *(undefined **)(DAT_8c05db24 + (int)ar4);
  *(undefined **)(PTR_DAT_8c05db14 + DAT_8c05db20) = a7;
  iVar7 = DAT_8c05db28;
  puVar6 = PTR_DAT_8c05db14;
  *(undefined4 *)(PTR_DAT_8c05db14 + DAT_8c05db28) = *(undefined4 *)(DAT_8c05db2c + (int)ar4);
  uVar2 = (*(code *)PTR_get_field_13c_028d9c_8c05db30)(ar6[1],iVar7,puVar6,a7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05db34) = uVar2;
  *(undefined4 *)(DAT_8c05db38 + (int)ar4) = *(undefined4 *)((int)&uStack_178 + DAT_8c05db34);
  uVar2 = (*(code *)PTR_FUN_8c05db10)(ar6[1],iVar7,puVar6,a7);
  sStack_15c = (short)uVar2;
  (*(code *)PTR_FUN_8c05db3c)((int)ar4 + DAT_8c05db18,(int)sStack_15c,puVar6,a7);
  if ('\x01' < *(char *)(DAT_8c05db40 + (int)ar4)) {
    (*(code *)PTR_FUN_8c05db44)((int)ar4 + DAT_8c05db18,0,puVar6,a7);
  }
  (*(code *)PTR_FUN_8c05db48)(ar4,ar5,ar6,a7);
  (*(code *)PTR_s_STATUS_SUCKED_0660da_8c05db4c)(ar4,ar5,ar6,a7);
  piVar3 = ar6;
  (*(code *)PTR_s_STATUS_LASTONE_066468_8c05db50)(ar4,ar5,ar6,a7);
  puVar6 = PTR_get_field_13c_028d9c_8c05db30;
  uVar2 = (*(code *)PTR_get_field_13c_028d9c_8c05db30)
                    (ar6[1],PTR_get_field_13c_028d9c_8c05db30,piVar3,a7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05db54) = uVar2;
  if (*(int *)((int)&uStack_178 + DAT_8c05db54) == 7) {
    uVar2 = (*(code *)PTR_FUN_8c05db58)(ar6[1] + 0x78,puVar6,piVar3,a7);
    cStack_16a = (char)uVar2;
    if (cStack_16a == '\x01') {
      uVar2 = (*(code *)PTR_get_field_40_03598c_8c05db5c)(ar6[3],puVar6,piVar3,a7);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05db60) = uVar2;
      if ((*(int *)((int)&uStack_178 + DAT_8c05db60) == 0) &&
         (*(int *)(DAT_8c05db64 + (int)ar4) == -1)) {
        uVar1 = (*(code *)PTR_FUN_8c05db0c)(ar6[6],puVar6,piVar3,a7);
        uStack_15e = (undefined2)uVar1;
        a5 = 0x43;
        uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05db68)(uVar1 & 0xffff,0x43,piVar3,a7);
        *(undefined4 *)((int)&uStack_178 + DAT_8c05db6c) = uVar2;
        if ((*(int *)((int)&uStack_178 + DAT_8c05db6c) == 0x16) && (ar4[1] == 0)) {
          uVar2 = (*(code *)PTR_FUN_8c05db70)(ar6[1] + 0x78,a5,piVar3,a7);
          cStack_16b = (char)uVar2;
          (*(code *)PTR_FUN_8c05db78)(DAT_8c05db74,(int)cStack_16b,piVar3,a7);
          a7 = PTR_s_GRAPHICS_COMMON_8c05db7c + 0x39;
          (*(code *)PTR_FUN_8c05db80)((int)ar4 + DAT_8c05db18,0x12,0,a7);
        }
      }
    }
  }
  piVar3 = ar5;
  piVar10 = ar6;
  (*(code *)PTR_s_IDLEACTION_SNEEZE_065e70_8c05db84)(ar4,ar5,ar6,a7);
  uVar2 = (*(code *)PTR_get_field_124_027930_8c05db88)(ar6[2],piVar3,piVar10,a7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05db8c) = uVar2;
  if (*(int *)((int)&uStack_178 + DAT_8c05db8c) != 2) {
    uVar2 = (*(code *)PTR_get_field_40_03598c_8c05db5c)(ar6[3],piVar3,piVar10,a7);
    *(undefined4 *)((int)&uStack_178 + DAT_8c05db90) = uVar2;
    if ((*(int *)((int)&uStack_178 + DAT_8c05db90) == 0) && (ar4[1] == 0)) {
      uVar2 = (*(code *)PTR_get_field_178_035734_8c05db94)(ar6[2],piVar3,piVar10,a7);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05db98) = uVar2;
      if (*(int *)((int)&uStack_178 + DAT_8c05db98) == 0) {
        piVar3 = ar5;
        piVar10 = ar6;
        (*(code *)PTR_FUN_8c05db9c)(ar4,ar5,ar6,a7);
      }
    }
  }
  uVar2 = (*(code *)PTR_get_field_124_027930_8c05db88)(ar6[2],piVar3,piVar10,a7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05dba0) = uVar2;
  if (*(int *)((int)&uStack_178 + DAT_8c05dba0) != 2) {
    piVar3 = ar6;
    (*(code *)PTR_FUN_8c05dba4)(ar4,ar6,piVar10,a7);
  }
  uVar2 = (*(code *)PTR_get_field_4_05eed8_8c05dba8)(ar4,piVar3,piVar10,a7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05dbac) = uVar2;
  puVar6 = *(undefined **)((int)&uStack_178 + DAT_8c05dbac);
  piVar3 = ar5;
  piVar10 = ar6;
  (*(code *)PTR_s_STATUS_SNORE_05f668_8c05dbb0)(ar4,ar5,ar6,puVar6);
  uVar2 = (*(code *)PTR_get_field_124_027930_8c05db88)(ar6[2],piVar3,piVar10,puVar6);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05dbb4) = uVar2;
  if (*(int *)((int)&uStack_178 + DAT_8c05dbb4) != 2) {
    piVar3 = ar5;
    piVar10 = ar6;
    puVar6 = PTR_s_REQUEST_ATTENTION_063846_8c05ddb0;
    (*(code *)PTR_s_REQUEST_ATTENTION_063846_8c05ddb0)
              (ar4,ar5,ar6,PTR_s_REQUEST_ATTENTION_063846_8c05ddb0);
    uVar2 = (*(code *)PTR_get_field_178_035734_8c05ddb4)(ar6[2],piVar3,piVar10,puVar6);
    *(undefined4 *)((int)&uStack_178 + DAT_8c05ddb8) = uVar2;
    if (*(int *)((int)&uStack_178 + DAT_8c05ddb8) == 0) {
      uVar2 = (*(code *)PTR_get_field_40_03598c_8c05ddbc)(ar6[3],piVar3,piVar10,puVar6);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05ddc0) = uVar2;
      if (*(int *)((int)&uStack_178 + DAT_8c05ddc0) == 0) {
        piVar3 = ar5;
        piVar10 = ar6;
        (*(code *)PTR_s_REACTION_TITILLATE_064bb8_8c05ddc4)(ar4,ar5,ar6,puVar6);
      }
    }
    piVar3 = (int *)(*(code *)PTR_get_field_40_03598c_8c05ddbc)(ar6[3],piVar3,piVar10,puVar6);
    *(int **)((int)&uStack_178 + DAT_8c05ddc8) = piVar3;
    if ((*(int *)((int)&uStack_178 + DAT_8c05ddc8) == 0) && (ar4[1] != 0xd)) {
      (*(code *)PTR_s_GRATIFIC_RID_HOT_06522a_8c05ddcc)(ar4,ar5,ar6,puVar6);
      piVar3 = ar5;
      piVar10 = ar6;
      (*(code *)PTR_s_REACTION_TEMP_LACK_0628aa_8c05ddd0)(ar4,ar5,ar6,puVar6);
    }
    uVar2 = (*(code *)PTR_get_field_40_03598c_8c05ddbc)(ar6[3],piVar3,piVar10,puVar6);
    *(undefined4 *)((int)&uStack_178 + DAT_8c05ddd4) = uVar2;
    if (*(int *)((int)&uStack_178 + DAT_8c05ddd4) == 0) {
      (*(code *)PTR_FUN_8c05dddc)((int)ar4 + DAT_8c05ddd8,1,piVar10,puVar6);
      piVar3 = ar5;
      piVar10 = ar6;
      (*(code *)PTR_s_REACTION_WAKED_TAP_062b14_8c05dde0)(ar4,ar5,ar6,puVar6);
    }
  }
  uVar2 = (*(code *)PTR_get_field_124_027930_8c05dde4)(ar6[2],piVar3,piVar10,puVar6);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05dde8) = uVar2;
  if (*(int *)((int)&uStack_178 + DAT_8c05dde8) == 0) {
    uVar2 = (*(code *)PTR_get_field_40_03598c_8c05ddbc)(ar6[3],piVar3,piVar10,puVar6);
    *(undefined4 *)((int)&uStack_178 + DAT_8c05ddec) = uVar2;
    if (*(int *)((int)&uStack_178 + DAT_8c05ddec) == 0) {
      uVar1 = (*(code *)PTR_get_field_a0_035724_8c05ddf0)(ar6[6],piVar3,piVar10,puVar6);
      uStack_16c = (undefined1)uVar1;
      piVar3 = (int *)(uVar1 & 0xff);
      if ((piVar3 == (int *)0x2) && (ar4[1] == 0)) {
        uVar2 = (*(code *)PTR_get_field_24_05eed0_8c05ddf4)(ar6[1] + DAT_8c05ddb8,2,piVar10,puVar6);
        *(undefined4 *)((int)&uStack_178 + DAT_8c05ddf8) = uVar2;
        if (*(int *)((int)&uStack_178 + DAT_8c05ddf8) == 1) {
          uVar1 = (*(code *)PTR_FUN_8c05ddfc)(ar6[6],piVar3,piVar10,puVar6);
          uStack_160 = (undefined2)uVar1;
          piVar3 = (int *)0x7;
          uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05de00)
                            (uVar1 & 0xffff,7,piVar10,puVar6);
          *(undefined4 *)((int)&uStack_178 + DAT_8c05de04) = uVar2;
          if ((*(int *)((int)&uStack_178 + DAT_8c05de04) == 1) &&
             (*(int *)(DAT_8c05de08 + (int)ar4) == -1)) {
            puVar6 = PTR_s_GRAPHICS_COMMON_8c05de0c + 0x45;
            piVar10 = (int *)0x0;
            piVar3 = (int *)0x0;
            (*(code *)PTR_FUN_8c05de14)((int)ar4 + DAT_8c05de10,0,0,puVar6);
          }
        }
        uVar2 = (*(code *)PTR_FUN_8c05de18)(ar6[3],piVar3,piVar10,puVar6);
        cStack_16d = (char)uVar2;
        if (cStack_16d == '\0') {
          uVar1 = (*(code *)PTR_FUN_8c05ddfc)(ar6[6],piVar3,piVar10,puVar6);
          uStack_162 = (undefined2)uVar1;
          piVar3 = (int *)0x7;
          uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05de00)
                            (uVar1 & 0xffff,7,piVar10,puVar6);
          *(undefined4 *)((int)&uStack_178 + DAT_8c05de1c) = uVar2;
          if ((*(int *)((int)&uStack_178 + DAT_8c05de1c) == 1) &&
             (*(int *)(DAT_8c05de08 + (int)ar4) == -1)) {
            if (*(int *)(DAT_8c05de20 + (int)ar4) == 1) {
              puVar6 = PTR_s_GRAPHICS_COMMON_8c05de0c + 0x53;
              piVar10 = (int *)0x0;
              piVar3 = (int *)0x21;
              (*(code *)PTR_FUN_8c05de14)((int)ar4 + DAT_8c05de10,0x21,0,puVar6);
            }
            else {
              puVar6 = PTR_s_GRAPHICS_COMMON_8c05dec0 + 99;
              piVar10 = (int *)0x0;
              piVar3 = (int *)0x21;
              (*(code *)PTR_FUN_8c05dec8)((int)ar4 + DAT_8c05dec4,0x21,0,puVar6);
            }
            *(undefined4 *)(DAT_8c05decc + (int)ar4) = 0;
          }
        }
        uVar2 = (*(code *)PTR_FUN_8c05ded0)(ar6[3],piVar3,piVar10,puVar6);
        cStack_16e = (char)uVar2;
        if (*(char *)(DAT_8c05ded4 + (int)ar4) != cStack_16e) {
          uVar2 = (*(code *)PTR_FUN_8c05ded8)(ar6[6],piVar3,piVar10,puVar6);
          uStack_164 = (ushort)uVar2;
          if (3 < uStack_164) {
            uVar2 = (*(code *)PTR_FUN_8c05ded0)(ar6[3],piVar3,piVar10,puVar6);
            cStack_16f = (char)uVar2;
            if (cStack_16f == '\0') {
              puVar6 = PTR_s_GRAPHICS_COMMON_8c05dec0 + 0x76;
              piVar10 = (int *)0x0;
              piVar3 = (int *)0xa;
              (*(code *)PTR_FUN_8c05dec8)((int)ar4 + DAT_8c05dec4,10,0,puVar6);
            }
            else {
              piVar3 = (int *)(*(code *)PTR_FUN_8c05dfb8)(ar6[3],piVar3,piVar10,puVar6);
              cStack_170 = (char)piVar3;
              if (*(char *)(DAT_8c05dfbc + (int)ar4) < cStack_170) {
                puVar6 = PTR_s_GRAPHICS_COMMON_8c05dfc0 + DAT_8c05dfc4;
                piVar10 = (int *)0x0;
                piVar3 = (int *)0x0;
                (*(code *)PTR_FUN_8c05dfcc)((int)ar4 + DAT_8c05dfc8,0,0,puVar6);
              }
            }
          }
        }
      }
    }
    uVar2 = (*(code *)PTR_get_field_124_027930_8c05dfd0)(ar6[2],piVar3,piVar10,puVar6);
    *(undefined4 *)((int)&uStack_178 + DAT_8c05dfd4) = uVar2;
    if (*(int *)((int)&uStack_178 + DAT_8c05dfd4) != 2) {
      if (ar4[1] != 7) {
        uVar2 = (*(code *)PTR_get_field_40_03598c_8c05dfd8)(ar6[3],piVar3,piVar10,puVar6);
        *(undefined4 *)((int)&uStack_178 + DAT_8c05dfdc) = uVar2;
        if ((*(int *)((int)&uStack_178 + DAT_8c05dfdc) == 0) &&
           ('\x01' < *(char *)(DAT_8c05dfe0 + (int)ar4))) {
          uVar2 = (*(code *)PTR_get_field_770_05eeb8_8c05dfe4)
                            ((int)ar4 + DAT_8c05dfc8,piVar3,piVar10,puVar6);
          *(undefined4 *)((int)&uStack_178 + DAT_8c05dfe8) = uVar2;
          if (*(int *)((int)&uStack_178 + DAT_8c05dfe8) == 1) {
            if (*(int *)(DAT_8c05dfec + (int)ar4) == -1) {
              piVar10 = (int *)((int)ar4 + DAT_8c05dfc8);
              piVar3 = *(int **)(DAT_8c05dff0 + (int)ar4);
              uVar2 = (*(code *)PTR_FUN_8c05dff8)(DAT_8c05dff4,piVar3,piVar10,puVar6);
              *(undefined4 *)((int)&uStack_178 + DAT_8c05dffc) = uVar2;
              *(undefined4 *)(DAT_8c05dfec + (int)ar4) =
                   *(undefined4 *)((int)&uStack_178 + DAT_8c05dffc);
            }
            else {
              piVar3 = (int *)0x2;
              (*(code *)PTR_FUN_8c05e0a8)((int)ar4 + DAT_8c05e0a4,2,piVar10,puVar6);
            }
          }
        }
      }
      uVar2 = (*(code *)PTR_FUN_8c05e0b0)(ar6[1] + DAT_8c05e0ac,piVar3,piVar10,puVar6);
      cStack_171 = (char)uVar2;
      if ((char)uVar2 == '\x01') {
        piVar3 = (int *)PTR_get_field_140_025f70_8c05e0b4;
        uVar2 = (*(code *)PTR_get_field_140_025f70_8c05e0b4)
                          (ar6[1],PTR_get_field_140_025f70_8c05e0b4,piVar10,puVar6);
        *(undefined4 *)((int)&uStack_178 + DAT_8c05e0b8) = uVar2;
        if (*(int *)((int)&uStack_178 + DAT_8c05e0b8) == 0) {
          *(undefined1 *)(DAT_8c05e0bc + (int)ar4) = 4;
        }
      }
    }
  }
  if (((ar4[0x10] == 0) || (ar4[0x10] == 3)) && (ar4[1] != 7)) {
    piVar3 = (int *)(*(code *)PTR_get_field_40_03598c_8c05e0c0)(ar6[3],piVar3,piVar10,puVar6);
    *(int **)((int)&uStack_178 + DAT_8c05e0c4) = piVar3;
    if ((*(int *)((int)&uStack_178 + DAT_8c05e0c4) == 0) &&
       (puVar6 = (undefined *)0x1, '\x01' < *(char *)(DAT_8c05e0bc + (int)ar4))) {
      piVar10 = (int *)(int)(char)DAT_8c05e0c8[(int)ar4];
      piVar3 = (int *)(int)(char)DAT_8c05e0c8[(int)ar4];
      puVar6 = DAT_8c05e0c8;
      if ((piVar3 == (int *)0x0) || (piVar3 == (int *)0x1)) {
        piVar3 = ar5;
        piVar10 = ar6;
        (*(code *)PTR_FUN_8c05e110)(ar4,ar5,ar6,DAT_8c05e0c8);
      }
    }
  }
  if (ar4[1] != 1) {
    switch(*(undefined1 *)(DAT_8c05e114 + (int)ar4)) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      *(undefined4 *)((int)&uStack_178 + DAT_8c05e1d8) = 0x2e;
      *(undefined4 *)(DAT_8c05e1dc + (int)ar4) = *(undefined4 *)((int)&uStack_178 + DAT_8c05e1d8);
      ar4[0x10] = *(int *)((int)&uStack_178 + DAT_8c05e1d8);
      *(undefined4 *)(PTR_DAT_8c05e1e0 + DAT_8c05e1e4) = 0x2e;
      uStack_fc = 0x36;
      *(undefined4 *)(DAT_8c05e1e8 + (int)ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c05e1e0 + DAT_8c05e1ec) = 0x36;
      uStack_100 = 0x36;
      *(undefined4 *)(DAT_8c05e1f0 + (int)ar4) = 0x36;
      *(undefined4 *)(PTR_DAT_8c05e1e0 + DAT_8c05e1f4) = 0x36;
      uVar2 = (**(code **)(DAT_8c05e1f8 + *(int *)(*ar6 + 8)))(*ar6,piVar3,piVar10,0x36);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05e1fc) = uVar2;
      if (*(int *)((int)&uStack_178 + DAT_8c05e1fc) == 0) {
        *(undefined1 *)(DAT_8c05e200 + (int)ar4) = 1;
      }
      break;
    case 1:
      if (ar4[0x10] != 0x18) {
        uVar2 = (*(code *)PTR_FUN_8c05e29c)(ar6[3],piVar3,piVar10,puVar6);
        uStack_172 = (undefined1)uVar2;
        *(undefined1 *)(DAT_8c05e2a0 + (int)ar4) = uStack_172;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[2] = 99;
        uStack_104 = 0x18;
        *(undefined4 *)(DAT_8c05e2a4 + (int)ar4) = 0x18;
        ar4[0x10] = 0x18;
        *(undefined4 *)(PTR_DAT_8c05e2a8 + DAT_8c05e2ac) = 0x18;
        uStack_108 = 0x36;
        *(undefined4 *)(DAT_8c05e2b0 + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c05e2a8 + DAT_8c05e2b4) = 0x36;
        uStack_10c = 0x36;
        *(undefined4 *)(DAT_8c05e2b8 + (int)ar4) = 0x36;
        piVar3 = (int *)0x36;
        *(undefined4 *)(PTR_DAT_8c05e2a8 + DAT_8c05e2bc) = 0x36;
        (*(code *)PTR_FUN_8c05e2c0)(PTR_FUN_8c05e2c0,0x36,piVar10,puVar6);
      }
      break;
    case 2:
      uVar2 = (*(code *)PTR_FUN_8c05e388)(ar6[3],piVar3,piVar10,puVar6);
      uStack_173 = (undefined1)uVar2;
      *(undefined1 *)(DAT_8c05e38c + (int)ar4) = uStack_173;
      uVar2 = (*(code *)PTR_get_field_40_03598c_8c05e390)(ar6[3],piVar3,piVar10,puVar6);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05e394) = uVar2;
      if (*(int *)((int)&uStack_178 + DAT_8c05e394) == 7) {
        piVar3 = *(int **)(DAT_8c05e398 + (int)ar4);
        if (piVar3 == (int *)0x1) {
          *(undefined1 *)(DAT_8c05e39c + (int)ar4) = 8;
        }
        if (ar4[0x10] != 0x17) {
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x17;
          uStack_110 = 0x17;
          piVar10 = (int *)0x17;
          *(undefined4 *)(DAT_8c05e3a0 + (int)ar4) = 0x17;
          *(undefined4 *)(PTR_DAT_8c05e3a4 + DAT_8c05e3a8) = 0x17;
          uStack_114 = 0x36;
          *(undefined4 *)(DAT_8c05e3ac + (int)ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c05e3a4 + DAT_8c05e3b0) = 0x36;
          uStack_118 = 0x36;
          *(undefined4 *)(DAT_8c05e3b4 + (int)ar4) = 0x36;
          piVar3 = (int *)PTR_DAT_8c05e3a4;
          *(undefined4 *)(PTR_DAT_8c05e3a4 + DAT_8c05e3b8) = 0x36;
        }
      }
      break;
    case 4:
      (*(code *)PTR_FUN_8c05e4d4)(ar6[1] + DAT_8c05e4d0,0,piVar10,puVar6);
      if (((ar4[1] == 7) || (ar4[0x10] == 8)) ||
         (puVar6 = (undefined *)ar4[0x10], puVar6 == (undefined *)0x9)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        puVar6 = PTR_FUN_8c05e4d4;
        (*(code *)PTR_FUN_8c05e4d4)(ar6[1] + DAT_8c05e4d0,0,0x4b,PTR_FUN_8c05e4d4);
      }
      piVar10 = (int *)ar6[3];
      piVar3 = (int *)PTR_get_field_40_03598c_8c05e4d8;
      uVar2 = (*(code *)PTR_get_field_40_03598c_8c05e4d8)
                        (piVar10,PTR_get_field_40_03598c_8c05e4d8,piVar10,puVar6);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05e4dc) = uVar2;
      if ((*(int *)((int)&uStack_178 + DAT_8c05e4dc) == 7) && (ar4[0x10] != 0x17)) {
        if (*(int *)(DAT_8c05e4e0 + (int)ar4) == 1) {
          *(undefined1 *)(DAT_8c05e4e4 + (int)ar4) = 8;
        }
        (*(code *)PTR_FUN_8c05e4ec)(ar6[1] + DAT_8c05e4e8,1,piVar10,puVar6);
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x17;
        uStack_11c = 0x17;
        *(undefined4 *)(DAT_8c05e4f0 + (int)ar4) = 0x17;
        *(undefined4 *)(PTR_DAT_8c05e4f4 + DAT_8c05e4f8) = 0x17;
        uStack_120 = 0x36;
        *(undefined4 *)(DAT_8c05e4fc + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c05e4f4 + DAT_8c05e500) = 0x36;
        uStack_124 = 0x36;
        *(undefined4 *)(DAT_8c05e504 + (int)ar4) = 0x36;
        piVar3 = (int *)0x36;
        *(undefined4 *)(PTR_DAT_8c05e4f4 + DAT_8c05e508) = 0x36;
      }
      break;
    case 5:
    case 6:
      piVar3 = (int *)0x0;
      (*(code *)PTR_FUN_8c05e528)(ar6[1] + DAT_8c05e524,0,piVar10,puVar6);
      break;
    case 7:
      puVar6 = PTR_FUN_8c05e598;
      (*(code *)PTR_FUN_8c05e598)(ar6[1] + DAT_8c05e594,0,piVar10,PTR_FUN_8c05e598);
      piVar10 = ar4 + 0x10;
      piVar3 = (int *)*piVar10;
      if ((piVar3 != (int *)0x2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],piVar3,piVar10,puVar6);
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      (*(code *)PTR_FUN_8c05e6bc)(ar6[1] + DAT_8c05e6b8,0,piVar10,puVar6);
      (*(code *)PTR_FUN_8c05e6c0)(ar6[1],0,piVar10,puVar6);
      (*(code *)PTR_FUN_8c05e6c0)(ar6[1] + 0x18,0,piVar10,puVar6);
      (*(code *)PTR_FUN_8c05e6c0)(ar6[1] + 0x60,0,piVar10,puVar6);
      piVar3 = (int *)0x0;
      (*(code *)PTR_FUN_8c05e6c0)(ar6[1] + 0x48,0,piVar10,puVar6);
      if (*(int *)(DAT_8c05e6c4 + (int)ar4) == 1) {
        *(undefined1 *)(DAT_8c05e6c8 + (int)ar4) = 9;
      }
      uVar2 = (*(code *)PTR_get_field_a0_035724_8c05e6cc)(ar6[6],piVar3,piVar10,puVar6);
      cStack_174 = (char)uVar2;
      if (cStack_174 == '\x03') {
        piVar3 = (int *)0x9;
        *(undefined1 *)(DAT_8c05e6c8 + (int)ar4) = 9;
      }
      if (*(char *)(DAT_8c05e6d0 + (int)ar4) == '\x02') {
        if ((ar4[0x10] == 0x30) || (*(int *)(DAT_8c05e6c4 + (int)ar4) == 1)) {
          ar4[1] = 0;
          ar4[2] = 0x4b;
          ar4[3] = 0;
          ar4[0x10] = 0;
          uStack_134 = 0;
          *(undefined4 *)(DAT_8c05e754 + (int)ar4) = 0;
          *(undefined4 *)(PTR_DAT_8c05e758 + DAT_8c05e75c) = 0;
          uStack_138 = 0x36;
          *(undefined4 *)(DAT_8c05e760 + (int)ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c05e758 + DAT_8c05e764) = 0x36;
          uStack_13c = 0x36;
          *(undefined4 *)(DAT_8c05e768 + (int)ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c05e758 + DAT_8c05e76c) = 0x36;
        }
        else {
          ar4[0x10] = 0x30;
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x30;
          uStack_128 = 0x30;
          *(undefined4 *)(DAT_8c05e6d4 + (int)ar4) = 0x30;
          piVar10 = DAT_8c05e6dc;
          piVar3 = (int *)0x30;
          *(undefined4 *)((int)DAT_8c05e6dc + (int)PTR_DAT_8c05e6d8) = 0x30;
          uStack_12c = 0x36;
          *(undefined4 *)(DAT_8c05e6e0 + (int)ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c05e6d8 + DAT_8c05e6e4) = 0x36;
          uStack_130 = 0x36;
          *(undefined4 *)(DAT_8c05e6e8 + (int)ar4) = 0x36;
          *(undefined4 *)(PTR_DAT_8c05e6d8 + DAT_8c05e6ec) = 0x36;
        }
      }
      else {
        *(undefined1 *)(DAT_8c05e824 + (int)ar4) = 9;
        if (*(char *)(DAT_8c05e828 + (int)ar4) != '\x02') {
          (*(code *)PTR_s_STATUS_FORMAT_030306_8c05e830)
                    ((int)ar4 + DAT_8c05e82c,piVar3,piVar10,puVar6);
        }
        (*(code *)PTR_FUN_8c05e838)(ar6[1] + DAT_8c05e834,1,piVar10,puVar6);
        (*(code *)PTR_FUN_8c05e83c)(ar6[1] + DAT_8c05e834,1,piVar10,puVar6);
        (*(code *)PTR_FUN_8c05e840)(ar6[1] + 0x60,0,piVar10,puVar6);
        ar4[0x10] = 0x2c;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x2c;
        uStack_140 = 0x2c;
        *(undefined4 *)(DAT_8c05e844 + (int)ar4) = 0x2c;
        *(undefined4 *)(PTR_DAT_8c05e848 + DAT_8c05e82c) = 0x2c;
        uStack_144 = 0x36;
        *(undefined4 *)(DAT_8c05e84c + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c05e848 + DAT_8c05e850) = 0x36;
        uStack_148 = 0x36;
        *(undefined4 *)(DAT_8c05e854 + (int)ar4) = 0x36;
        piVar3 = DAT_8c05e858;
        *(undefined4 *)((int)DAT_8c05e858 + (int)PTR_DAT_8c05e848) = 0x36;
      }
      break;
    case 9:
      (*(code *)PTR_FUN_8c05e9d0)(ar6[1] + DAT_8c05e9cc,0,piVar10,puVar6);
      (*(code *)PTR_FUN_8c05e9d4)(ar6[1] + 0x78,0,piVar10,PTR_FUN_8c05e9d4);
      piVar3 = (int *)0x0;
      piVar10 = (int *)ar6[1];
      (*(code *)PTR_FUN_8c05e9d8)(piVar10 + 0x1e,0,piVar10,0);
      if (((ar4[0x10] == 0x30) || (ar4[0x10] == 0x17)) || (ar4[0x10] == 0x2c)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        uStack_14c = 0;
        *(undefined4 *)(DAT_8c05e9dc + (int)ar4) = 0;
        *(undefined4 *)(PTR_DAT_8c05e9e0 + DAT_8c05e9e4) = 0;
        uStack_150 = 0x36;
        *(undefined4 *)(DAT_8c05e9e8 + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c05e9e0 + DAT_8c05e9ec) = 0x36;
        piVar10 = DAT_8c05e9f0;
        uStack_154 = 0x36;
        piVar3 = (int *)0x36;
        *(undefined4 *)((int)DAT_8c05e9f0 + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c05e9e0 + DAT_8c05e9f4) = 0x36;
      }
    }
  }
  (*(code *)PTR_FUN_8c05e9f8)((int)ar4 + DAT_8c05e9e4,piVar3,piVar10,PTR_FUN_8c05e9f8);
  a6 = (int)*(char *)(DAT_8c05e9fc + (int)ar4);
  iVar9 = (int)*(char *)(DAT_8c05e9fc + (int)ar4);
  iVar7 = DAT_8c05e9fc;
  uVar2 = (*(code *)PTR_get_field_124_027930_8c05ea00)(ar6[2],iVar9,a6,DAT_8c05e9fc);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05ea04) = uVar2;
  uVar2 = (*(code *)PTR_get_field_40_05eea0_8c05ea08)(ar4,iVar9,a6,iVar7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05ea0c) = uVar2;
  *(int *)((int)&uStack_178 + DAT_8c05ea10) = ar4[1];
  (*(code *)PTR_s_EVENT_ENDING_0656da_8c05ea14)(ar4,ar5,ar6,iVar7);
  piVar3 = ar6;
  (*(code *)PTR_FUN_8c05ea18)(ar4,ar5,ar6,iVar7);
  uVar2 = (*(code *)PTR_get_field_124_027930_8c05ea00)(ar6[2],ar5,piVar3,iVar7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05ea1c) = uVar2;
  if (*(int *)((int)&uStack_178 + DAT_8c05ea1c) != 2) {
    piVar10 = ar6;
    (*(code *)PTR_FUN_8c05ea20)(ar4,ar6,piVar3,iVar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)&uStack_178 + DAT_8c05ea24) = extraout_fr0;
    }
    else {
      *(ulonglong *)((int)&uStack_178 + DAT_8c05ea24) = CONCAT44(extraout_fr0,extraout_fr1);
    }
    (*(code *)PTR_FUN_8c05ea28)(ar6[2],piVar10,piVar3,iVar7);
    if (ar4[1] == 2) {
      uVar2 = (*(code *)PTR_FUN_8c05ea2c)(ar6[1],piVar10,piVar3,iVar7);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05e9cc) = uVar2;
      iVar9 = *(int *)((int)&uStack_178 + DAT_8c05e9cc);
      if (iVar9 == 0) {
        if (*(int *)(DAT_8c05ea48 + (int)ar4) == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 1) {
        iVar7 = *(int *)(DAT_8c05ea64 + (int)ar4);
        if (iVar7 == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 3) {
        if (*(int *)(DAT_8c05ec2c + (int)ar4) == -1) {
          iVar7 = 0x40;
          piVar3 = (int *)0x0;
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 4) {
        if (*(int *)(DAT_8c05eaa8 + (int)ar4) == -1) {
          ar4[0x10] = 0;
        }
        uVar2 = (*(code *)PTR_FUN_8c05eaac)(ar6[1] + 0x60,ar6[1] + 0x60,piVar3,iVar7);
        uStack_178._3_1_ = (char)uVar2;
        if (uStack_178._3_1_ < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    ar5 = ar4 + 0x10;
    if (0x35 < *ar5) {
      ar4[0x10] = 0;
      ar4[1] = 0;
      ar4[0xe] = 2;
    }
    if (*(char *)(DAT_8c05ec30 + (int)ar4) != '\x01') {
      uVar2 = (*(code *)PTR_get_field_124_027930_8c05ec34)(ar6[2],ar5,piVar3,iVar7);
      *(undefined4 *)((int)&uStack_178 + DAT_8c05ec38) = uVar2;
      if (ar4[0x10] == *(int *)((int)&uStack_178 + DAT_8c05ec38)) goto LAB_8c05eb22;
    }
    piVar3 = (int *)0x1;
    ar5 = (int *)ar4[0x10];
    (*(code *)PTR_FUN_8c05ec3c)(ar6[2],ar5,1,iVar7);
  }
LAB_8c05eb22:
  *(undefined1 *)(DAT_8c05ec40 + (int)ar4) = 4;
  uVar2 = (*(code *)PTR_FUN_8c05ec44)(ar6[1] + 0x78,ar5,piVar3,iVar7);
  uStack_178._2_1_ = (char)uVar2;
  iVar9 = (int)uStack_178._2_1_;
  if (uStack_178._2_1_ == '\x01') {
    iVar9 = 1;
    (*(code *)PTR_FUN_8c05ec48)(ar6[3],1,piVar3,iVar7);
  }
  uVar2 = (*(code *)PTR_FUN_8c05ec4c)(ar6[1],iVar9,piVar3,iVar7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05ec50) = uVar2;
  if (*(int *)((int)&uStack_178 + DAT_8c05ec50) != -1) {
    iVar9 = 0;
    (*(code *)PTR_FUN_8c05ec54)(ar6[3],0,piVar3,iVar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c05ec58)(ar6[6],iVar9,piVar3,iVar7);
  uStack_166 = (undefined2)uVar1;
  uVar1 = uVar1 & 0xffff;
  if (*(uint *)(DAT_8c05ec5c + (int)ar4) != uVar1) {
    uVar4 = (*(code *)PTR_FUN_8c05ec58)(ar6[6],uVar1,piVar3,iVar7);
    uStack_168 = (undefined2)uVar4;
    *(uint *)(DAT_8c05ec5c + (int)ar4) = uVar4 & 0xffff;
    uVar2 = (*(code *)PTR_FUN_8c05ec44)(ar6[1] + 0x78,uVar1,piVar3,iVar7);
    uStack_178._1_1_ = (char)uVar2;
    iVar7 = (int)uStack_178._1_1_;
    if (iVar7 == 1) {
      iVar7 = 0;
      (*(code *)PTR_FUN_8c05ec64)(ar6[1] + DAT_8c05ec60,0,piVar3,PTR_FUN_8c05ec64);
    }
    iVar9 = ar6[3];
    piVar3 = (int *)PTR_get_field_d0_05ee6c_8c05ec68;
    uVar1 = (*(code *)PTR_get_field_d0_05ee6c_8c05ec68)
                      (iVar9,iVar7,PTR_get_field_d0_05ee6c_8c05ec68,iVar9);
    *(uint *)((int)&uStack_178 + DAT_8c05ec6c) = uVar1;
    if (*(int *)((int)&uStack_178 + DAT_8c05ec6c) == 0) {
      uVar1 = 0;
      (*(code *)PTR_FUN_8c05ec74)(ar6[1] + DAT_8c05ec70,0,piVar3,iVar9);
    }
    uVar2 = (*(code *)PTR_FUN_8c05ec78)(ar6[1] + DAT_8c05ec60,uVar1,piVar3,iVar9);
    *(undefined4 *)((int)&uStack_178 + DAT_8c05ec7c) = uVar2;
    if (*(int *)((int)&uStack_178 + DAT_8c05ec7c) < 0x31) {
      (*(code *)PTR_FUN_8c05ec80)(ar6[3],uVar1,piVar3,iVar9);
    }
    else {
      (*(code *)PTR_FUN_8c05eda0)(ar6[3],uVar1,piVar3,iVar9);
    }
  }
  if (((ar4[0x10] != 0x23) || (ar4[0x10] != 0x16)) || (ar4[0x10] != 0x27)) {
    *(undefined4 *)(DAT_8c05eda4 + (int)ar4) = 0;
  }
  *(undefined1 *)(DAT_8c05eda8 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c05edac + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c05edb0 + (int)ar4) = 0;
  iVar7 = DAT_8c05edb4;
  *(undefined1 *)(DAT_8c05edb4 + (int)ar4) = 0;
  uVar2 = (*(code *)PTR_FUN_8c05edb8)(ar6[3],uVar1,piVar3,iVar7);
  uStack_178._0_1_ = (undefined1)uVar2;
  *(undefined1 *)(DAT_8c05edbc + (int)ar4) = (undefined1)uStack_178;
  uVar2 = (*(code *)PTR_get_field_124_027930_8c05edc0)(ar6[2],uVar1,piVar3,iVar7);
  *(undefined4 *)((int)&uStack_178 + DAT_8c05edc4) = uVar2;
  if ((*(int *)((int)&uStack_178 + DAT_8c05edc4) == 2) &&
     (*(undefined4 *)(DAT_8c05edc4 + (int)ar4) = 0x36, *(int *)(DAT_8c05edc8 + (int)ar4) != -1)) {
    iVar9 = (int)ar4 + DAT_8c05edcc;
    uVar2 = (*(code *)PTR_FUN_8c05edd4)
                      (PTR_s_GRAPHICS_COMMON_8c05edd0 + DAT_8c05edc4,iVar9,piVar3,iVar7);
    *(undefined4 *)((int)&uStack_178 + DAT_8c05edd8) = uVar2;
    if (*(int *)((int)&uStack_178 + DAT_8c05edd8) == 0) {
      (*(code *)PTR_FUN_8c05ede0)(DAT_8c05eddc,iVar9,piVar3,iVar7);
      (*(code *)PTR_FUN_8c05ede8)((int)ar4 + DAT_8c05ede4,3,piVar3,iVar7);
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(DAT_8c05edec + (int)ar4) = 1;
      *(undefined4 *)(DAT_8c05edc8 + (int)ar4) = 0xffffffff;
      *(undefined4 *)(DAT_8c05edf0 + (int)ar4) = 0;
    }
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c05edf8)((int)&uStack_178 + DAT_8c05edf4,0xffffffff,piVar3,iVar7)
  ;
  return uVar2;
}



/* FUN_8c05edfc @ 8c05edfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05edfc(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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



/* FUN_8c05ee64 @ 8c05ee64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05ee64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x18) = ar5;
  return in_r0;
}



/* get_field_d0_05ee6c @ 8c05ee6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_d0_05ee6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c05ee74 + ar4);
}



/* FUN_8c05ee78 @ 8c05ee78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05ee78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c05ee80;
  *(undefined4 *)(DAT_8c05ee80 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c05ee84 @ 8c05ee84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05ee84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c05ee8c;
  *(undefined4 *)(DAT_8c05ee8c + ar4) = ar5;
  return iVar1;
}



/* FUN_8c05ee90 @ 8c05ee90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05ee90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  iVar1 = DAT_8c05ee9c;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c05ee9c) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c05ee9c) = CONCAT44(in_fr4,in_fr5);
  }
  return iVar1;
}



/* get_field_40_05eea0 @ 8c05eea0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_40_05eea0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x40);
}



/* FUN_8c05eea8 @ 8c05eea8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05eea8(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}



/* FUN_8c05eeb0 @ 8c05eeb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05eeb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 4);
}



/* get_field_770_05eeb8 @ 8c05eeb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_770_05eeb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c05eec0 + ar4);
}



/* FUN_8c05eec4 @ 8c05eec4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05eec4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c05eecc + ar4);
}



/* get_field_24_05eed0 @ 8c05eed0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_24_05eed0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}



/* get_field_4_05eed8 @ 8c05eed8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_05eed8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* Class_12a078_m2_05eee0 @ 8c05eee0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a078_m2_05eee0(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = ar5;
  piVar3 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c05efec)(ar6[6],ar5,ar6,ar7);
  if ((short)uVar1 == 3) {
    uVar2 = (*(code *)PTR_FUN_8c05eff0)(ar6[1],uVar2,piVar3,ar7);
    piVar3 = (int *)(int)(short)uVar2;
    (**(code **)(*ar4 + 0x18))(ar4,ar6[6],piVar3,ar7);
  }
  iVar4 = (*(code *)PTR_get_field_40_03598c_8c05eff4)
                    (ar6[3],PTR_get_field_40_03598c_8c05eff4,piVar3,ar7);
  if (iVar4 == 2) {
    (*(code *)PTR_FUN_8c05eff8)(ar6[3],0,piVar3,ar7);
  }
  *(undefined4 *)(PTR_DAT_8c05effc + DAT_8c05f000) = *(undefined4 *)(DAT_8c05f004 + (int)ar4);
  *(undefined4 *)(PTR_DAT_8c05effc + DAT_8c05f008) = *(undefined4 *)(DAT_8c05f00c + (int)ar4);
  *(undefined4 *)(PTR_DAT_8c05effc + DAT_8c05f010) = *(undefined4 *)(DAT_8c05f014 + (int)ar4);
  uVar2 = ar5;
  piVar3 = ar6;
  (*(code *)PTR_FUN_8c05f018)(ar4,ar5,ar6,ar7);
  iVar4 = (**(code **)(DAT_8c05f01c + *(int *)(*ar6 + 8)))(*ar6,uVar2,piVar3,ar7);
  if ((iVar4 == 1) && (ar4[1] != 1)) {
    iVar4 = (*(code *)PTR_get_field_6c_02f46c_8c05f020)(*ar6,uVar2,piVar3,ar7);
    if ((iVar4 == 0) &&
       (iVar4 = (*(code *)PTR_get_field_70_05f490_8c05f024)(*ar6,uVar2,piVar3,ar7), iVar4 == 0)) {
      piVar3 = (int *)0x1b;
      (*(code *)PTR_FUN_8c05f028)(ar6[6],0x1b,0x1b,ar7);
      ar4[0x10] = 2;
      ar4[0xe] = 2;
      ar4[1] = 1;
      ar4[3] = 0;
      ar4[2] = 99;
      (*(code *)PTR_FUN_8c05f030)(ar4,DAT_8c05f02c,piVar3,ar7);
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xe;
      uVar2 = DAT_8c05f0d8;
      (*(code *)PTR_FUN_8c05f0dc)(ar4,DAT_8c05f0d8,piVar3,ar7);
      if (ar4[0x1b] != 0) {
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar2,piVar3,ar7);
        ar4[0x1b] = 0;
      }
    }
    if ((*(char *)(DAT_8c05f0e0 + (int)ar4) == '\x01') && (ar4[1] == 0)) {
      *(undefined1 *)(DAT_8c05f0e0 + (int)ar4) = 0;
    }
  }
  piVar6 = ar6;
  (*(code *)PTR_FUN_8c05f0e4)(ar4,ar6,piVar3,ar7);
  uVar2 = (*(code *)PTR_get_field_4_05eed8_8c05f0e8)(ar4,piVar6,piVar3,ar7);
  piVar3 = ar6;
  (*(code *)PTR_s_STATUS_SNORE_05f668_8c05f0ec)(ar4,ar5,ar6,uVar2);
  if (ar4[1] != 1) {
    switch(*(undefined1 *)(DAT_8c05f0f0 + (int)ar4)) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      *(undefined4 *)(DAT_8c05f144 + (int)ar4) = 0x2e;
      ar4[0x10] = 0x2e;
      *(undefined4 *)(PTR_DAT_8c05f148 + DAT_8c05f14c) = 0x2e;
      break;
    case 1:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      *(undefined4 *)(DAT_8c05f178 + (int)ar4) = 0x18;
      ar4[0x10] = 0x18;
      *(undefined4 *)(PTR_DAT_8c05f17c + DAT_8c05f180) = 0x18;
      break;
    case 2:
      uVar1 = (*(code *)PTR_FUN_8c05f19c)(ar6[3],ar5,piVar3,uVar2);
      *(char *)(DAT_8c05f1a0 + (int)ar4) = (char)uVar1;
      break;
    case 4:
      ar5 = 0;
      (*(code *)PTR_FUN_8c05f1bc)(ar6[1] + DAT_8c05f1b8,0,piVar3,uVar2);
      break;
    case 7:
      ar5 = 0;
      (*(code *)PTR_FUN_8c05f224)(ar6[1] + DAT_8c05f220,0,piVar3,uVar2);
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],ar5,piVar3,uVar2);
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      ar5 = 0;
      (*(code *)PTR_FUN_8c05f290)(ar6[1] + DAT_8c05f28c,0,piVar3,uVar2);
      if (*(int *)(DAT_8c05f294 + (int)ar4) == 1) {
        *(undefined1 *)(DAT_8c05f298 + (int)ar4) = 9;
      }
      if (ar4[0x10] != 0x2c) {
        (*(code *)PTR_s_STATUS_FORMAT_030306_8c05f2a0)((int)ar4 + DAT_8c05f29c,ar5,piVar3,uVar2);
        (*(code *)PTR_FUN_8c05f2a8)(ar6[1] + DAT_8c05f2a4,1,piVar3,uVar2);
        (*(code *)PTR_FUN_8c05f2ac)(ar6[1] + DAT_8c05f2a4,1,piVar3,uVar2);
        ar5 = 0;
        (*(code *)PTR_FUN_8c05f2b0)(ar6[1] + 0x60,0,piVar3,uVar2);
        ar4[0x10] = 0x2c;
      }
      break;
    case 9:
      if (ar4[0x10] == 0x2c) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        *(undefined4 *)(DAT_8c05f35c + (int)ar4) = 0;
        *(undefined4 *)(PTR_DAT_8c05f360 + DAT_8c05f364) = 0;
        *(undefined4 *)(DAT_8c05f368 + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c05f360 + DAT_8c05f36c) = 0x36;
        *(undefined4 *)(DAT_8c05f370 + (int)ar4) = 0x36;
        *(undefined4 *)(PTR_DAT_8c05f360 + DAT_8c05f374) = 0x36;
      }
    }
  }
  if (*(int *)(DAT_8c05f378 + (int)ar4) != -1) {
    iVar4 = (*(code *)PTR_FUN_8c05f380)(DAT_8c05f37c,ar5,piVar3,uVar2);
    if (iVar4 == 0) {
      *(undefined4 *)(DAT_8c05f384 + (int)ar4) = 0;
      (*(code *)PTR_FUN_8c05f388)((int)ar4 + DAT_8c05f364,3,piVar3,uVar2);
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)(DAT_8c05f38c + (int)ar4) = 1;
      ar4[3] = 0;
      *(undefined1 *)(DAT_8c05f390 + (int)ar4) = 1;
      *(undefined4 *)(DAT_8c05f378 + (int)ar4) = 0xffffffff;
    }
    else {
      (*(code *)PTR_FUN_8c05f454)(DAT_8c05f450,ar5,piVar3,uVar2);
    }
    *(undefined4 *)(DAT_8c05f458 + (int)ar4) = *(undefined4 *)(DAT_8c05f45c + (int)ar4);
  }
  if (*(int *)(DAT_8c05f460 + (int)ar4) == 1) {
    *(undefined4 *)(DAT_8c05f460 + (int)ar4) = 0;
  }
  piVar6 = ar6;
  (*(code *)PTR_FUN_8c05f464)(ar4,ar6,piVar3,uVar2);
  (*(code *)PTR_FUN_8c05f468)(ar6[2],piVar6,piVar3,uVar2);
  iVar4 = (*(code *)PTR_get_field_4_05eed8_8c05f46c)(ar4,piVar6,piVar3,uVar2);
  iVar4 = *(int *)(PTR_DAT_8c05f470 + ar4[3] * 4 + iVar4 * 0xc);
  (*(code *)PTR_FUN_8c05f474)(ar4,iVar4,piVar3,uVar2);
  if (*(char *)(DAT_8c05f478 + (int)ar4) != '\x01') {
    iVar5 = (*(code *)PTR_get_field_124_027930_8c05f47c)(ar6[2],iVar4,piVar3,uVar2);
    iVar4 = (*(code *)PTR_get_field_40_05eea0_8c05f480)(ar4,iVar4,piVar3,uVar2);
    if (iVar5 == iVar4) {
      return iVar5;
    }
  }
  uVar1 = (*(code *)PTR_get_field_40_05eea0_8c05f480)(ar4,iVar4,piVar3,uVar2);
  uVar2 = (*(code *)PTR_FUN_8c05f484)(ar6[2],uVar1,1,uVar2);
  return uVar2;
}



/* FUN_8c05f488 @ 8c05f488 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05f488(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = ar5;
  return 0x40;
}



/* get_field_70_05f490 @ 8c05f490 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_70_05f490(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x70);
}



/* FUN_8c05f498 @ 8c05f498 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05f498(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = ar5;
  return 0x40;
}



/* s_REACTION_CATCH_05f4a2 @ 8c05f4a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_REACTION_CATCH_05f4a2(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *a7;
  undefined1 auStack_18 [20];
  
  if (*(int *)(ar4 + 0x6c) != 0) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c05f5e8)(auStack_18,ar5 + 0x10,ar6,ar7);
  (*(code *)PTR_Vec3_assign_wrap_05f640_8c05f5ec)(ar4,auStack_18,ar6,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c05f5f0)(auStack_18,0xffffffff,ar6,ar7);
  *(undefined4 *)(DAT_8c05f5f4 + ar4) = 0x15;
  if (*(int *)(DAT_8c05f5f8 + ar4) != -1) {
    *(undefined4 *)(DAT_8c05f5f4 + ar4) = *(undefined4 *)(DAT_8c05f5fc + ar4);
    iVar1 = (*(code *)PTR_FUN_8c05f604)(DAT_8c05f600,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_8c05f5f4 + ar4) = 0;
      (*(code *)PTR_FUN_8c05f60c)(ar4 + DAT_8c05f608,3,ar6,ar7);
      *(undefined4 *)(ar4 + 4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 0x10;
      *(undefined4 *)(ar4 + 8) = 0x19;
      *(undefined1 *)(DAT_8c05f610 + ar4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined1 *)(DAT_8c05f614 + ar4) = 1;
      *(undefined4 *)(DAT_8c05f5f8 + ar4) = 0xffffffff;
    }
  }
  iVar1 = *(int *)(DAT_8c05f5f8 + ar4);
  if (iVar1 == -1) {
    (*(code *)PTR_FUN_8c05f60c)(ar4 + DAT_8c05f608,0,ar6,ar7);
    a7 = PTR_s_GRAPHICS_COMMON_8c05f618 + DAT_8c05f61c;
    uVar2 = 0;
    (*(code *)PTR_FUN_8c05f620)(ar4 + DAT_8c05f608,0x25,0,a7);
    (*(code *)PTR_strcpy_8c05f628)
              (ar4 + DAT_8c05f624,PTR_s_GRAPHICS_COMMON_8c05f618 + DAT_8c05f61c,uVar2,a7);
    (*(code *)PTR_strcpy_8c05f628)
              (ar4 + DAT_8c05f62c,PTR_s_GRAPHICS_COMMON_8c05f618 + 0x37,uVar2,a7);
    *(undefined4 *)(DAT_8c05f630 + ar4) = 0;
    iVar1 = ar4 + DAT_8c05f608;
    uVar2 = (*(code *)PTR_FUN_8c05f638)(DAT_8c05f600,*(undefined4 *)(DAT_8c05f634 + ar4),iVar1,a7);
    *(undefined4 *)(DAT_8c05f5f8 + ar4) = uVar2;
    *(undefined4 *)(DAT_8c05f63c + ar4) = 0;
    iVar1 = (*(code *)PTR_FUN_8c05f60c)(ar4 + DAT_8c05f608,2,iVar1,a7);
  }
  return iVar1;
}



/* Vec3_assign_wrap_05f640 @ 8c05f640 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Vec3_assign_wrap_05f640(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_Vec3_assign_8c05f65c)(ar4 + 0x70,ar5,ar6,ar7);
  return uVar1;
}



/* s_STATUS_SNORE_05f668 @ 8c05f660 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_STATUS_SNORE_05f668(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int a5;
  int *piVar4;
  int iVar5;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [20];
  
  piVar4 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    iVar5 = 0x40;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c05f6bc + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (*(code *)PTR_FUN_8c05f6c0)(ar4,ar5,ar6,0x40);
    puVar3 = (undefined *)0x1;
    (*(code *)PTR_FUN_8c05f6c4)(ar4,1,piVar4,iVar5);
    ar7 = iVar5;
  }
  else {
    puVar3 = PTR_DAT_8c05f70c + ar7 * 0xc;
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(puVar3 + *(int *)(ar4 + 0xc) * 4);
  }
  iVar5 = *(int *)(ar4 + 0x40);
  if (iVar5 < 0x28) {
    switch(iVar5) {
    case 0:
      (*(code *)PTR_FUN_8c05f7cc)(ar4,3,piVar4,ar7);
      break;
    case 1:
      (*(code *)PTR_FUN_8c05fcf8)(ar4,3,piVar4,ar7);
      iVar5 = (*(code *)PTR_FUN_8c05fcfc)(ar4,PTR_FUN_8c05fcfc,piVar4,ar7);
      if (iVar5 == 1) {
        (*(code *)PTR_FUN_8c05fd18)(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x6c) = 0;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
      (*(code *)PTR_FUN_8c05fd1c)(ar4,ar5,piVar4,ar7);
      break;
    case 2:
      a5 = *(int *)(*ar6 + 8);
      iVar5 = (**(code **)(DAT_8c05f804 + a5))(*ar6,a5,piVar4,ar7);
      if (iVar5 == 1) {
        iVar5 = *ar6;
        (*(code *)PTR_FUN_8c05f808)(iVar5,a5,piVar4,ar7);
        (*(code *)PTR_FUN_8c05f80c)(iVar5,a5,piVar4,ar7);
      }
      break;
    case 3:
      uVar1 = (*(code *)PTR_FUN_8c05f860)(ar6[6],puVar3,piVar4,ar7);
      iVar5 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05f864)
                        (uVar1 & 0xffff,0x25,PTR_libgcc_divide_helper_01031c_8c05f864,ar7);
      if (iVar5 == 0xe) {
        puVar3 = PTR_s_GRAPHICS_COMMON_8c05f868 + DAT_8c05f86c;
        (*(code *)PTR_FUN_8c05f874)(ar4 + DAT_8c05f870,0x11,0,puVar3);
        (*(code *)PTR_FUN_8c05f878)(ar4,3,PTR_FUN_8c05f878,puVar3);
      }
      break;
    case 4:
      (*(code *)PTR_FUN_8c05f88c)(ar4,3,piVar4,ar7);
      break;
    case 6:
      iVar5 = (*(code *)PTR_FUN_8c05f910)(ar4,puVar3,piVar4,ar7);
      if (iVar5 == 1) {
        if (*(int *)(DAT_8c05f914 + ar4) == 1) {
          uVar2 = (*(code *)PTR_get_field_6c_02f46c_8c05f918)
                            (*(undefined4 *)(ar4 + 0x6c),puVar3,piVar4,ar7);
          uVar2 = (*(code *)PTR_FUN_8c05f91c)(*(undefined4 *)(ar4 + 0x6c),uVar2,piVar4,ar7);
          (*(code *)PTR_FUN_8c05f920)(ar6[1],uVar2,piVar4,ar7);
          if (*(int *)(ar4 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                      (*(int *)(ar4 + 0x6c),uVar2,piVar4,ar7);
            ar7 = 0;
            *(undefined4 *)(ar4 + 0x6c) = 0;
          }
        }
        (*(code *)PTR_FUN_8c05f924)(ar4,ar5,PTR_FUN_8c05f924,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
      break;
    case 9:
      uVar1 = (*(code *)PTR_FUN_8c05fa74)(ar6[6],puVar3,piVar4,ar7);
      uVar2 = 10;
      iVar5 = (*(code *)PTR_libgcc_divide_helper_01031c_8c05fa78)(uVar1 & 0xffff,10,piVar4,ar7);
      if (((iVar5 == 5) && (*(char *)(DAT_8c05fa7c + ar4) == '\0')) &&
         (iVar5 = (*(code *)PTR_get_field_140_025f70_8c05fa80)(ar6[1],uVar2,piVar4,ar7), iVar5 == 0)
         ) {
        (*(code *)PTR_FUN_8c05fa88)(DAT_8c05fa84,(int)*(char *)(DAT_8c05fa7c + ar4),piVar4,ar7);
        iVar5 = (*(code *)PTR_FUN_8c05fa8c)(ar4,ar6,piVar4,ar7);
        if (iVar5 == 0) {
          (*(code *)PTR_FUN_8c05fad4)
                    (ar4 + DAT_8c05fad0,10,0,PTR_s_GRAPHICS_COMMON_8c05fac8 + DAT_8c05facc);
        }
        else {
          (*(code *)PTR_FUN_8c05fa9c)
                    (ar4 + DAT_8c05fa98,10,0,PTR_s_GRAPHICS_COMMON_8c05fa90 + DAT_8c05fa94);
        }
        *(undefined1 *)(DAT_8c05fad8 + ar4) = 1;
      }
      break;
    case 0xc:
    case 0x12:
      (*(code *)PTR_Vec3_ctor_copy_8c05fcbc)(auStack_24,ar6[5] + 0x10,piVar4,ar7);
      (*(code *)PTR_Vec3_assign_wrap_05f640_8c05fcc0)(ar4,auStack_24,piVar4,ar7);
      (*(code *)PTR_Vec3_dtor_8c05fcc4)(auStack_24,0xffffffff,piVar4,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x78) = DAT_8c05fcc8;
      }
      else {
        *(undefined8 *)(ar4 + 0x78) = CONCAT44(uRam8c05fccc,DAT_8c05fcc8);
      }
      break;
    case 0xf:
      iVar5 = (*(code *)PTR_FUN_8c05f9c0)(ar4,puVar3,piVar4,ar7);
      if (iVar5 == 1) {
        if (*(int *)(DAT_8c05f9c4 + ar4) == 1) {
          (*(code *)PTR_FUN_8c05f9c8)(*(undefined4 *)(ar4 + 0x6c),1,piVar4,ar7);
          *(undefined4 *)(DAT_8c05f9c4 + ar4) = 0;
        }
        (*(code *)PTR_FUN_8c05f9cc)(ar4,ar5,piVar4,ar7);
        (*(code *)PTR_FUN_8c05f9d0)(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
        (*(code *)PTR_FUN_8c05f9e8)(ar6[3],0,piVar4,ar7);
      }
      break;
    case 0x10:
      if (*(int *)(ar4 + 4) != 0xd) {
        uVar2 = (*(code *)PTR_FUN_8c05fb10)(ar6[1],puVar3,piVar4,ar7);
        switch(uVar2) {
        case 0:
          uVar2 = (*(code *)PTR_FUN_8c05fb5c)(ar6[1],puVar3,piVar4,ar7);
          (*(code *)PTR_FUN_8c05fb6c)
                    (ar4 + DAT_8c05fb68,4,(int)(char)uVar2,
                     PTR_s_GRAPHICS_COMMON_8c05fb60 + DAT_8c05fb64);
          break;
        case 1:
          uVar2 = (*(code *)PTR_FUN_8c05fba0)(ar6[1] + 0x18,puVar3,piVar4,ar7);
          (*(code *)PTR_FUN_8c05fbb0)
                    (ar4 + DAT_8c05fbac,5,(int)(char)uVar2,
                     PTR_s_GRAPHICS_COMMON_8c05fba4 + DAT_8c05fba8);
          break;
        case 3:
          uVar2 = (*(code *)PTR_FUN_8c05fc28)(ar6[1] + 0x48,puVar3,piVar4,ar7);
          (*(code *)PTR_FUN_8c05fc38)
                    (ar4 + DAT_8c05fc34,0x10,(int)(char)uVar2,
                     PTR_s_GRAPHICS_COMMON_8c05fc2c + DAT_8c05fc30);
          break;
        case 4:
          uVar2 = (*(code *)PTR_FUN_8c05fbe4)(ar6[1] + 0x60,puVar3,piVar4,ar7);
          (*(code *)PTR_FUN_8c05fbf4)
                    (ar4 + DAT_8c05fbf0,0xd,(int)(char)uVar2,
                     PTR_s_GRAPHICS_COMMON_8c05fbe8 + DAT_8c05fbec);
          break;
        case 5:
          uVar2 = (*(code *)PTR_FUN_8c05fc6c)(ar6[1] + 0x78,puVar3,piVar4,ar7);
          (*(code *)PTR_FUN_8c05fc78)
                    (ar4 + DAT_8c05fc74,0x12,(int)(char)uVar2,PTR_s_GRAPHICS_COMMON_8c05fc70 + 0x39)
          ;
        }
      }
      break;
    case 0x16:
      if (*(int *)(DAT_8c05f968 + ar4) == 1) {
        (*(code *)PTR_FUN_8c05f978)
                  (ar4 + DAT_8c05f974,0x2a,0,PTR_s_GRAPHICS_COMMON_8c05f96c + DAT_8c05f970);
        *(undefined4 *)(DAT_8c05f968 + ar4) = 0;
      }
      break;
    case 0x22:
      if (*(int *)(DAT_8c05fdb4 + ar4) == 1) {
        (*(code *)PTR_FUN_8c05fdc4)
                  (ar4 + DAT_8c05fdc0,0x2c,0,PTR_s_GRAPHICS_COMMON_8c05fdb8 + DAT_8c05fdbc);
        *(undefined4 *)(DAT_8c05fdb4 + ar4) = 0;
      }
      break;
    case 0x23:
      if (*(int *)(DAT_8c05fd60 + ar4) == 1) {
        (*(code *)PTR_FUN_8c05fd70)
                  (ar4 + DAT_8c05fd6c,0x2c,0,PTR_s_GRAPHICS_COMMON_8c05fd64 + DAT_8c05fd68);
        *(undefined4 *)(DAT_8c05fd60 + ar4) = 0;
      }
      break;
    case 0x26:
      if (*(int *)(DAT_8c05fe50 + ar4) == 1) {
        (*(code *)PTR_FUN_8c05fe60)
                  (ar4 + DAT_8c05fe5c,0x2c,0,PTR_s_GRAPHICS_COMMON_8c05fe54 + DAT_8c05fe58);
        *(undefined4 *)(DAT_8c05fe50 + ar4) = 0;
      }
      break;
    case 0x27:
      if (*(int *)(DAT_8c05fe04 + ar4) == 1) {
        (*(code *)PTR_FUN_8c05fe14)
                  (ar4 + DAT_8c05fe10,0x2c,0,PTR_s_GRAPHICS_COMMON_8c05fe08 + DAT_8c05fe0c);
        *(undefined4 *)(DAT_8c05fe04 + ar4) = 0;
      }
    }
  }
  else if ((iVar5 == 0x34) && (*(int *)(DAT_8c05fea8 + ar4) == 1)) {
    (*(code *)PTR_FUN_8c05feb8)
              (ar4 + DAT_8c05feb4,0x2c,0,PTR_s_GRAPHICS_COMMON_8c05feac + DAT_8c05feb0);
    *(undefined4 *)(DAT_8c05fea8 + ar4) = 0;
  }
  return 1;
}



/* FUN_8c05febc @ 8c05febc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05febc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x38) = (undefined1)ar5;
  return 0x38;
}



/* FUN_8c05fec4 @ 8c05fec4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c05fec4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c05fee8)(ar4 + DAT_8c05fee4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c05feec @ 8c05feec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05feec(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iStack_8;
  
  iStack_8 = ar5;
  if (*(int *)(ar4 + 0x6c) <= ar5) {
    iStack_8 = *(int *)(ar4 + 0x6c);
  }
  *(int *)(ar4 + 0x6c) = *(int *)(ar4 + 0x6c) - iStack_8;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 2;
  return iStack_8;
}



/* FUN_8c05ff40 @ 8c05ff40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c05ff40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  char in_FPSCR_SZ;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    uVar2 = ar5;
    a6 = ar6;
    (*(code *)PTR_s_GRATIFIC_EAT_0611d6_8c060030)(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(PTR_DAT_8c060034 + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0x36) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      if (*(int *)(ar4 + 4) == 1) {
        *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = a6;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x70) = DAT_8c060038;
        }
        else {
          *(undefined8 *)(ar4 + 0x70) = CONCAT44(PTR_FUN_8c06003c,DAT_8c060038);
        }
        *(undefined4 *)(ar4 + 0xc) = 0;
        ar5 = 0;
        (*(code *)PTR_FUN_8c06003c)(ar4,0,a6,ar7);
        ar6 = a6;
      }
    }
    else {
      (*(code *)PTR_FUN_8c060040)(ar4,ar5,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    (*(code *)PTR_FUN_8c06003c)(ar4,2,ar6,ar7);
  }
  iVar1 = *(int *)(ar4 + 0x38);
  if ((iVar1 == 2) && (iVar1 = 0, *(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    iVar1 = 0x6c;
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  return iVar1;
}


