/* Seaman (USA) region 0x8c080000-0x8c090000 (Ghidra decompiler) */

/* FUN_8c080890 @ 8c080890 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0808d8) */
/* WARNING: Removing unreachable block (ram,0x8c08099a) */
/* WARNING: Unknown calling convention */

uint FUN_8c080890(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int in_fr1;
  int iVar4;
  int iVar5;
  char in_FPSCR_SZ;
  undefined1 *puStack_16c;
  int *piStack_168;
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
  undefined4 uStack_118;
  uint uStack_114;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [228];
  
  uVar3 = 1;
  piStack_168 = ar6;
  uVar1 = (**(code **)(DAT_8c080a10 + *ar6))(ar6,ar5,ar6,ar7);
  uStack_118 = uVar1;
  (*(code *)PTR_Vec3_ctor_copy_8c080a18)((int)&piStack_168 + DAT_8c080a14,uVar1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&piStack_168 + DAT_8c080a1c._4_4_) = (undefined4)DAT_8c080a1c;
  }
  else {
    *(ulonglong *)((int)&piStack_168 + DAT_8c080a1c._4_4_) =
         CONCAT44(DAT_8c080a1c._4_4_,(undefined4)DAT_8c080a1c);
    in_fr1 = DAT_8c080a28;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c080a30)((int)&piStack_168 + DAT_8c080a2c,uVar1,ar6,ar7);
  puStack_16c = (undefined1 *)((int)&piStack_168 + DAT_8c080a34);
  (*(code *)PTR_Vec3_add_8c080a38)
            ((int)&puStack_16c + DAT_8c080a1c._4_4_,(int)&puStack_16c + DAT_8c080a10,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c080a18)
            ((int)&piStack_168 + DAT_8c080a3c,(int)&piStack_168 + DAT_8c080a34,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080a40)((int)&piStack_168 + DAT_8c080a34,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c080a40)((int)&piStack_168 + DAT_8c080a2c,0xffffffff,ar6,ar7);
  iVar2 = DAT_8c080a44;
  if (in_FPSCR_SZ == '\0') {
    iVar2 = in_fr1;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c080a30)((int)&piStack_168 + DAT_8c080a48,uVar1,ar6,ar7);
  puStack_16c = (undefined1 *)((int)&piStack_168 + DAT_8c080a4c);
  (*(code *)PTR_Vec3_add_8c080a38)
            ((int)&puStack_16c + DAT_8c080a1c._4_4_,(int)&puStack_16c + DAT_8c080a50,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c080a18)
            ((int)&piStack_168 + DAT_8c080a54,(int)&piStack_168 + DAT_8c080a4c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080a40)((int)&piStack_168 + DAT_8c080a4c,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c080a40)((int)&piStack_168 + DAT_8c080a48,0xffffffff,ar6,ar7);
  iVar4 = DAT_8c080a5c;
  iVar5 = DAT_8c080a60;
  if (in_FPSCR_SZ == '\0') {
    iVar4 = iVar2;
    iVar5 = DAT_8c080a5c;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c080a30)((int)&piStack_168 + DAT_8c080a60,uVar1,ar6,ar7);
  puStack_16c = (undefined1 *)((int)&piStack_168 + DAT_8c080a64);
  (*(code *)PTR_Vec3_add_8c080a38)
            ((int)&puStack_16c + DAT_8c080a1c._4_4_,(int)&puStack_16c + DAT_8c080a68,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c080a18)
            ((int)&piStack_168 + DAT_8c080a6c,(int)&piStack_168 + DAT_8c080a64,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080a40)((int)&piStack_168 + DAT_8c080a64,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c080a40)((int)&piStack_168 + DAT_8c080a60,0xffffffff,ar6,ar7);
  iVar2 = *(int *)(DAT_8c080a70 + ar4);
  if (iVar2 == 0) {
    iStack_11c = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c080b70)
                           (ar4 + DAT_8c080b6c,uVar1,ar6,ar7);
    if (iStack_11c == 1) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(DAT_8c080b74 + ar4) = *(int *)(DAT_8c080b74 + ar4) + 1;
      ar6 = (int *)0x5;
      uVar1 = 3;
      iStack_154 = ar4;
      iStack_120 = (*(code *)PTR_rand_range_8c080b78)(ar4,3,5,ar7);
      *(int *)(DAT_8c080b7c + ar4) = iStack_120;
      (*(code *)PTR_FUN_8c080b80)(ar4,uVar1,ar6,ar7);
      iStack_124 = iVar4;
      iVar2 = iVar5;
      if (in_FPSCR_SZ == '\0') {
        iStack_124 = iVar5;
        iVar2 = iStack_120;
      }
      iStack_120 = iVar2;
      (*(code *)PTR_FUN_8c080b80)(ar4,uVar1,ar6,ar7);
      iStack_128 = iVar4;
      iVar2 = iVar5;
      if (in_FPSCR_SZ == '\0') {
        iStack_128 = iVar5;
        iVar2 = iStack_124;
      }
      iStack_124 = iVar2;
      iStack_12c = iVar4;
      (*(code *)PTR_FUN_8c080b80)(ar4,uVar1,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        iStack_12c = iVar5;
        iVar5 = iStack_128;
      }
      iStack_128 = iVar5;
      (*(code *)PTR_Vec3_ctor_xyz_8c080b88)((int)&piStack_168 + DAT_8c080b84,uVar1,ar6,ar7);
      puStack_16c = (undefined1 *)((int)&piStack_168 + DAT_8c080b8c);
      (*(code *)PTR_Vec3_add_8c080b98)
                ((int)&puStack_16c + DAT_8c080b94,(int)&puStack_16c + DAT_8c080b90,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c080b9c)(ar4 + 0x54,(int)&piStack_168 + DAT_8c080b8c,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c080ba0)((int)&piStack_168 + DAT_8c080b8c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c080ba0)((int)&piStack_168 + DAT_8c080b84,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 1) {
    ar6 = (int *)(ar4 + 0x54);
    iStack_130 = (*(code *)PTR_pure_virtual_stub_8c080c90)(ar4,ar5,ar6,ar7);
    if (iStack_130 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(DAT_8c080c94 + ar4) = *(int *)(DAT_8c080c94 + ar4) + 1;
      iStack_158 = ar4;
      (*(code *)PTR_FUN_8c080c98)(ar4,ar5,ar6,ar7);
      iStack_134 = iVar4;
      iVar2 = iVar5;
      if (in_FPSCR_SZ == '\0') {
        iStack_134 = iVar5;
        iVar2 = iStack_130;
      }
      iStack_130 = iVar2;
      (*(code *)PTR_FUN_8c080c98)(ar4,ar5,ar6,ar7);
      iStack_138 = iVar4;
      iVar2 = iVar5;
      if (in_FPSCR_SZ == '\0') {
        iStack_138 = iVar5;
        iVar2 = iStack_134;
      }
      iStack_134 = iVar2;
      iStack_13c = iVar4;
      (*(code *)PTR_FUN_8c080c98)(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        iStack_13c = iVar5;
        iVar5 = iStack_138;
      }
      iStack_138 = iVar5;
      (*(code *)PTR_Vec3_ctor_xyz_8c080ca0)((int)&piStack_168 + DAT_8c080c9c,ar5,ar6,ar7);
      puStack_16c = auStack_f0;
      (*(code *)PTR_Vec3_add_8c080ca8)
                ((int)&puStack_16c + DAT_8c080c94,(int)&puStack_16c + DAT_8c080ca4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c080cac)(ar4 + 0x54,auStack_f0,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c080cb0)(auStack_f0,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c080cb0)((int)&piStack_168 + DAT_8c080c9c,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 2) {
    ar6 = (int *)(ar4 + 0x54);
    iStack_140 = (*(code *)PTR_pure_virtual_stub_8c080da0)(ar4,ar5,ar6,ar7);
    if (iStack_140 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(DAT_8c080da4 + ar4) = *(int *)(DAT_8c080da4 + ar4) + 1;
      iStack_15c = ar4;
      (*(code *)PTR_FUN_8c080da8)(ar4,ar5,ar6,ar7);
      iStack_144 = iVar4;
      iVar2 = iVar5;
      if (in_FPSCR_SZ == '\0') {
        iStack_144 = iVar5;
        iVar2 = iStack_140;
      }
      iStack_140 = iVar2;
      (*(code *)PTR_FUN_8c080da8)(ar4,ar5,ar6,ar7);
      iStack_148 = iVar4;
      iVar2 = iVar5;
      if (in_FPSCR_SZ == '\0') {
        iStack_148 = iVar5;
        iVar2 = iStack_144;
      }
      iStack_144 = iVar2;
      iStack_14c = iVar4;
      (*(code *)PTR_FUN_8c080da8)(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        iStack_14c = iVar5;
        iVar5 = iStack_148;
      }
      iStack_148 = iVar5;
      (*(code *)PTR_Vec3_ctor_xyz_8c080dac)(auStack_100,ar5,ar6,ar7);
      puStack_16c = auStack_110;
      (*(code *)PTR_Vec3_add_8c080db4)((int)&puStack_16c + DAT_8c080db0,auStack_100,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c080db8)(ar4 + 0x54,auStack_110,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c080dbc)(auStack_110,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c080dbc)(auStack_100,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 3) {
    ar6 = (int *)(ar4 + 0x54);
    iStack_150 = (*(code *)PTR_pure_virtual_stub_8c080e60)(ar4,ar5,ar6,ar7);
    if (iStack_150 == 0) {
      iStack_164 = *(int *)(DAT_8c080e64 + ar4) + -1;
      *(int *)(DAT_8c080e64 + ar4) = iStack_164;
      uVar3 = (uint)(0 < iStack_164);
      *(undefined4 *)(DAT_8c080e68 + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      iStack_160 = ar4;
    }
  }
  uStack_114 = uVar3;
  (*(code *)PTR_Vec3_dtor_8c080e70)((int)&piStack_168 + DAT_8c080e6c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080e70)((int)&piStack_168 + DAT_8c080e74,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080e70)((int)&piStack_168 + DAT_8c080e78,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080e70)((int)&piStack_168 + DAT_8c080e7c,0xffffffff,ar6,ar7);
  return uStack_114;
}



/* FUN_8c080e80 @ 8c080e80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c081076) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c080e80(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *a6;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 uVar4;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  undefined4 in_fr1;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined4 in_fr3;
  undefined8 in_xd0;
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
  uVar4 = 1;
  a6 = ar6;
  uVar1 = (**(code **)(DAT_8c08114c + *ar6))(ar6,ar5,ar6,ar7);
  *(undefined4 *)(puVar5 + -0x2c) = uVar1;
  uVar1 = *(undefined4 *)(puVar5 + -0x2c);
  (*(code *)PTR_Vec3_ctor_copy_8c081150)(puVar5 + -0x24,uVar1,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c081154,in_fr1);
    *(undefined4 *)(puVar5 + -0x20) = DAT_8c081154;
  }
  else {
    uVar7 = CONCAT44(PTR_FUN_8c081158,DAT_8c081154);
    *(undefined8 *)(puVar5 + -0x20) = uVar7;
  }
  (*(code *)PTR_FUN_8c081158)(ar4,uVar1,a6,ar7);
  iVar2 = *(int *)(DAT_8c08115c + ar4);
  if (iVar2 == 0) {
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c081164)(ar4 + DAT_8c081160,uVar1,a6,ar7);
    *(undefined4 *)(puVar5 + -0x30) = uVar1;
    if (*(int *)(puVar5 + -0x30) == 1) {
      *(int *)(puVar5 + -0x48) = ar4;
      *(int *)(DAT_8c08115c + *(int *)(puVar5 + -0x48)) =
           *(int *)(DAT_8c08115c + *(int *)(puVar5 + -0x48)) + 1;
      *(undefined4 *)(DAT_8c081168 + ar4) = 1;
      *(undefined4 *)(puVar5 + -0x4c) = *(undefined4 *)(DAT_8c08116c + ar4);
      (*(code *)PTR_FUN_8c081174)
                (ar4,(*(int *)(puVar5 + -0x4c) * 2 + *(int *)(puVar5 + -0x4c)) * 8 + DAT_8c081170,a6
                 ,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  else if (iVar2 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x24),in_fr3);
      dVar8 = (double)CONCAT44(DAT_8c081178,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar9 = *(double *)(puVar5 + -0x24);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar8 = (double)CONCAT44(DAT_8c08117c,DAT_8c081178);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) +
                               SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 + dVar8 * dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -0x24) = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *(double *)(puVar5 + -0x24) = dVar9;
    }
    a6 = (int *)(puVar5 + -0x24);
    uVar1 = (*(code *)PTR_pure_virtual_stub_8c081184)(ar4,ar5,a6,ar7);
    *(undefined4 *)(puVar5 + -0x34) = uVar1;
    if (*(int *)(puVar5 + -0x34) == 0) {
      *(int *)(puVar5 + -0x50) = ar4;
      *(int *)(DAT_8c08115c + *(int *)(puVar5 + -0x50)) =
           *(int *)(DAT_8c08115c + *(int *)(puVar5 + -0x50)) + 1;
      *(undefined4 *)(puVar5 + -0x54) = *(undefined4 *)(DAT_8c08116c + ar4);
      (*(code *)PTR_FUN_8c081174)
                (ar4,(*(int *)(puVar5 + -0x54) * 2 + *(int *)(puVar5 + -0x54)) * 8 + DAT_8c081170,a6
                 ,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      if (*(int *)(DAT_8c08116c + ar4) == 7) {
        *(int *)(puVar5 + -0x58) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c081188,*(undefined4 *)(*(int *)(puVar5 + -0x58) + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar5 + -0x58) + 0x48);
          dVar9 = (double)CONCAT44(DAT_8c08118c,DAT_8c081188);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar5 + -0x58) + 0x48) = fVar6;
        }
        else {
          *(undefined8 *)(*(int *)(puVar5 + -0x58) + 0x48) = in_xd0;
        }
      }
      else {
        *(int *)(puVar5 + -0x5c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c08118c,*(undefined4 *)(*(int *)(puVar5 + -0x5c) + 0x48));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar5 + -0x5c) + 0x48);
          dVar9 = (double)CONCAT44(PTR_FUN_8c081190,DAT_8c08118c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(puVar5 + -0x5c) + 0x48) = fVar6;
        }
        else {
          *(undefined8 *)(*(int *)(puVar5 + -0x5c) + 0x48) = in_xd0;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    a6 = (int *)(puVar5 + -0x24);
    uVar1 = (*(code *)PTR_pure_virtual_stub_8c081184)(ar4,ar5,a6,ar7);
    *(undefined4 *)(puVar5 + -0x38) = uVar1;
    if (*(int *)(puVar5 + -0x38) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(puVar5 + -0x60) = ar4;
      *(int *)(DAT_8c08115c + *(int *)(puVar5 + -0x60)) =
           *(int *)(DAT_8c08115c + *(int *)(puVar5 + -0x60)) + 1;
      uVar1 = (**(code **)(DAT_8c08114c + *ar6))(ar6,ar5,a6,ar7);
      *(undefined4 *)(puVar5 + -0x3c) = uVar1;
      (*(code *)PTR_FUN_8c081190)(*(undefined4 *)(puVar5 + -0x3c),ar5,a6,ar7);
      (*(code *)PTR_FUN_8c08119c)(ar4,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0x40) = (int)((ulonglong)uVar7 >> 0x20);
        dVar9 = (double)CONCAT44(DAT_8c0811a0,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        *(undefined8 *)(puVar5 + -0x40) = uVar7;
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
        dVar9 = (double)CONCAT44(PTR_s_CAnimBody_SetAnimation_033a94_8c0811a4,DAT_8c0811a0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x40),-fVar6);
      }
      else {
        dVar9 = *(double *)(puVar5 + -0x40);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else if (iVar2 == 3) {
    uVar3 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c081164)(ar4 + DAT_8c081160,uVar1,a6,ar7);
    *(undefined4 *)(puVar5 + -0x44) = uVar3;
    if (*(int *)(puVar5 + -0x44) == 1) {
      ar7 = 0;
      a6 = (int *)0xffffffff;
      uVar1 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0811a4)(ar4 + DAT_8c081160,0,0xffffffff,0);
    }
    *(int *)(puVar5 + -100) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0811a8,*(undefined4 *)(*(int *)(puVar5 + -100) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar5 + -100) + 0x28);
      dVar9 = (double)CONCAT44(PTR_FUN_8c0811ac,DAT_8c0811a8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar5 + -100) + 0x28) = fVar6;
      fVar6 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(*(int *)(puVar5 + -100) + 0x28) = in_xd0;
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
      *(undefined4 *)(DAT_8c08115c + ar4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(puVar5 + -0x68) = ar4;
      *(int *)(puVar5 + -0x6c) = *(int *)(DAT_8c081168 + *(int *)(puVar5 + -0x68)) + -1;
      *(undefined4 *)(DAT_8c081168 + *(int *)(puVar5 + -0x68)) = *(undefined4 *)(puVar5 + -0x6c);
      if (*(int *)(puVar5 + -0x6c) < 1) {
        *(undefined4 *)(DAT_8c08115c + ar4) = 0;
        uVar4 = 0;
        (*(code *)PTR_FUN_8c0811ac)(ar4,uVar1,a6,ar7);
        *(undefined4 *)(puVar5 + -0x70) = *(undefined4 *)(DAT_8c08116c + ar4);
        (*(code *)PTR_FUN_8c081174)
                  (ar4,(*(int *)(puVar5 + -0x70) * 2 + *(int *)(puVar5 + -0x70)) * 8 + DAT_8c081170,
                   a6,ar7);
      }
    }
  }
  *(undefined4 *)(puVar5 + -0x28) = uVar4;
  (*(code *)PTR_Vec3_dtor_8c0811b0)(puVar5 + -0x24,0xffffffff,a6,ar7);
  return *(undefined4 *)(puVar5 + -0x28);
}



/* FUN_8c0811b4 @ 8c0811b4 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c08125a */
/* WARNING: Switch with 1 destination removed at 0x8c0812b4 */
/* WARNING: Switch with 1 destination removed at 0x8c0812d2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0811b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *a6;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 a7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 unaff_r13;
  undefined4 uVar10;
  undefined4 unaff_r14;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  double dVar15;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar11 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar11 + -0xc) = 1;
  *(undefined4 *)((int)puVar11 + -0x10) = in_PR;
  *(undefined4 *)((int)puVar11 + -0x1d0) = ar6;
  uVar10 = 1;
  uVar8 = ar5;
  (*(code *)PTR_Vec3_set_zero_8c081268)
            ((undefined1 *)((int)puVar11 + DAT_8c081264 + -0x1d0),ar5,ar6,ar7);
  puVar9 = PTR_Vec3_set_zero_8c081268;
  (*(code *)PTR_Vec3_set_zero_8c081268)
            ((undefined1 *)((int)puVar11 + DAT_8c08126c + -0x1d0),uVar8,ar6,
             PTR_Vec3_set_zero_8c081268);
  puVar4 = PTR_Vec3_ctor_zero_8c081274;
  (*(code *)PTR_Vec3_ctor_zero_8c081274)
            ((undefined1 *)((int)puVar11 + DAT_8c081270 + -0x1d0),PTR_Vec3_ctor_zero_8c081274,ar6,
             puVar9);
  (*(code *)PTR_Vec3_ctor_zero_8c081274)
            ((undefined1 *)((int)puVar11 + DAT_8c081278 + -0x1d0),puVar4,ar6,puVar9);
  *(int *)((int)puVar11 + -0x1b4) = ar4;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(DAT_8c08127c,*(undefined4 *)(*(int *)((int)puVar11 + -0x1b4) + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(*(int *)((int)puVar11 + -0x1b4) + 0x28);
    dVar15 = (double)CONCAT44(DAT_8c081280,DAT_8c08127c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar14 = (float)((ulonglong)dVar15 >> 0x20);
    dVar15 = (double)CONCAT44(fVar14,SUB84(dVar15,0) * fVar14);
  }
  else {
    dVar15 = dVar15 * dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(*(int *)((int)puVar11 + -0x1b4) + 0x28) = SUB84(dVar15,0);
  }
  else {
    *(undefined8 *)(*(int *)((int)puVar11 + -0x1b4) + 0x28) = in_xd0;
  }
  *(undefined1 **)((int)puVar11 + -0x1d4) = (undefined1 *)((int)puVar11 + DAT_8c081280 + -0x1d0);
  (*(code *)PTR_FUN_8c081284)(ar4 + 0x14,puVar4,ar6,puVar9);
  a6 = PTR_FUN_8c08128c;
  (*(code *)PTR_FUN_8c08128c)
            (ar4,(undefined1 *)((int)puVar11 + DAT_8c081280 + -0x1d0),PTR_FUN_8c08128c,puVar9);
  puVar4 = (undefined *)0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c081290)
            ((undefined1 *)((int)puVar11 + DAT_8c081280 + -0x1d0),0xffffffff,a6,puVar9);
  iVar2 = *(int *)(DAT_8c081294 + ar4);
  if (iVar2 == 0) {
    uVar8 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0812e0)
                      (ar4 + DAT_8c0812dc,puVar4,a6,puVar9);
    *(undefined4 *)((int)puVar11 + DAT_8c0812e4 + -0x1d0) = uVar8;
    if (*(int *)((int)puVar11 + DAT_8c0812e4 + -0x1d0) == 1) {
      *(int *)((int)puVar11 + -0x1b8) = ar4;
      *(int *)(DAT_8c0812e8 + *(int *)((int)puVar11 + -0x1b8)) =
           *(int *)(DAT_8c0812e8 + *(int *)((int)puVar11 + -0x1b8)) + 1;
    }
  }
  else {
    if (iVar2 == 1) {
      *(undefined1 **)((int)puVar11 + -0x1d4) = (undefined1 *)((int)puVar11 + DAT_8c081380 + -0x1d0)
      ;
      (*(code *)PTR_FUN_8c081384)(ar4 + 0x14,puVar4,a6,puVar9);
      (*(code *)PTR_FUN_8c081388)
                ((undefined1 *)((int)puVar11 + DAT_8c081380 + -0x1d0),ar5,a6,puVar9);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar11 + DAT_8c08138c + -0x1d0) = (int)((ulonglong)dVar15 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)puVar11 + DAT_8c08138c + -0x1d0));
      }
      else {
        *(double *)((int)puVar11 + DAT_8c08138c + -0x1d0) = dVar15;
        in_xd14 = *(undefined8 *)((int)puVar11 + DAT_8c08138c + -0x1d0);
      }
      (*(code *)PTR_Vec3_dtor_8c081390)
                ((undefined1 *)((int)puVar11 + DAT_8c081380 + -0x1d0),0xffffffff,a6,puVar9);
      uVar8 = ar5;
      uVar13 = (*(code *)PTR_FUN_8c081394)(ar4 + 0x14,ar5,a6,puVar9);
      *(undefined4 *)((int)puVar11 + DAT_8c081398 + -0x1d0) = uVar13;
      *(undefined4 *)(DAT_8c08139c + ar4) = *(undefined4 *)((int)puVar11 + DAT_8c081398 + -0x1d0);
      (*(code *)PTR_Vec3_ctor_xyz_8c0813a4)
                ((undefined1 *)((int)puVar11 + DAT_8c0813a0 + -0x1d0),uVar8,a6,puVar9);
      (*(code *)PTR_Vec3_assign_8c0813ac)
                ((undefined1 *)((int)puVar11 + DAT_8c0813a8 + -0x1d0),
                 (undefined1 *)((int)puVar11 + DAT_8c0813a0 + -0x1d0),a6,puVar9);
      (*(code *)PTR_Vec3_dtor_8c081390)
                ((undefined1 *)((int)puVar11 + DAT_8c0813a0 + -0x1d0),0xffffffff,a6,puVar9);
      if (*(int *)((int)puVar11 + -0x1d0) == 1) {
        a6 = PTR_Vec3_assign_8c0813ac;
        (*(code *)PTR_Vec3_assign_8c0813ac)
                  ((undefined1 *)((int)puVar11 + DAT_8c0813a8 + -0x1d0),ar5,PTR_Vec3_assign_8c0813ac
                   ,puVar9);
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((undefined4)DAT_8c081424,SUB84(dVar15,0));
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c081424._4_4_,(undefined4)DAT_8c081424);
        }
        fVar14 = SUB84(in_dr14,0);
        if (in_FPSCR_PR == '\0') {
          bVar16 = (float)((ulonglong)dVar15 >> 0x20) < fVar14;
        }
        else {
          bVar16 = dVar15 < in_dr14;
        }
        if (!bVar16) {
          *(undefined4 *)(DAT_8c081424._4_4_ + ar4) = 0;
          *(undefined4 *)(DAT_8c08142c + ar4) = 0;
          uVar10 = 0;
          uVar8 = 0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081438)(ar4 + DAT_8c081434,0,0xffffffff,0)
          ;
          *(undefined4 *)((int)puVar11 + DAT_8c08143c + -0x1d0) = 0;
          (*(code *)PTR_Vec3_dtor_8c081444)
                    ((undefined1 *)((int)puVar11 + DAT_8c081440 + -0x1d0),0xffffffff,uVar8,uVar10);
          (*(code *)PTR_Vec3_dtor_8c081444)
                    ((undefined1 *)((int)puVar11 + DAT_8c081448 + -0x1d0),0xffffffff,uVar8,uVar10);
          (*(code *)PTR_object_dtor_delete_8c081450)
                    ((undefined1 *)((int)puVar11 + DAT_8c08144c + -0x1d0),0xffffffff,uVar8,uVar10);
          (*(code *)PTR_object_dtor_delete_8c081450)
                    ((undefined1 *)((int)puVar11 + DAT_8c081454 + -0x1d0),0xffffffff,uVar8,
                     PTR_object_dtor_delete_8c081450);
          return *(undefined4 *)((int)puVar11 + DAT_8c08143c + -0x1d0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((undefined4)DAT_8c08147c,SUB84(dVar15,0));
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c08147c._4_4_,(undefined4)DAT_8c08147c);
        }
        if (in_FPSCR_PR == '\0') {
          bVar16 = (float)((ulonglong)dVar15 >> 0x20) < fVar14;
        }
        else {
          bVar16 = dVar15 < in_dr14;
        }
        if (bVar16) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44((undefined4)DAT_8c0814e4,SUB84(dVar15,0));
          }
          else {
            dVar15 = (double)CONCAT44(DAT_8c0814e4._4_4_,(undefined4)DAT_8c0814e4);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = (float)((ulonglong)dVar15 >> 0x20) < fVar14;
          }
          else {
            bVar16 = dVar15 < in_dr14;
          }
          if (!bVar16) {
            *(undefined4 *)(DAT_8c0814e4._4_4_ + ar4) = *(undefined4 *)(DAT_8c0814ec + ar4);
            *(undefined4 *)(DAT_8c0814f0 + ar4) = 0;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0814fc)
                      (ar4 + DAT_8c0814f4._4_4_,0,0xffffffff,0);
            if (*(int *)(DAT_8c0814e4._4_4_ + ar4) == 3) {
              uVar13 = 0;
              uVar10 = 0xffffffff;
              uVar8 = 5;
              (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0814fc)
                        (ar4 + DAT_8c0814f4._4_4_,5,0xffffffff,0);
            }
            else if (*(int *)(DAT_8c081528 + ar4) == 4) {
              uVar13 = 0;
              uVar10 = 0xffffffff;
              uVar8 = 6;
              (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081534)
                        (ar4 + DAT_8c08152c._4_4_,6,0xffffffff,0);
            }
            else {
              uVar13 = 0;
              uVar10 = 0xffffffff;
              uVar8 = 0;
              (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0815b4)
                        (ar4 + DAT_8c0815ac._4_4_,0,0xffffffff,0);
            }
            (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0815b8)
                      (ar4 + DAT_8c0815ac._4_4_,uVar8,uVar10,uVar13);
            *(undefined4 *)((int)puVar11 + DAT_8c0815bc + -0x1d0) = 0;
            (*(code *)PTR_Vec3_dtor_8c0815c4)
                      ((undefined1 *)((int)puVar11 + DAT_8c0815c0 + -0x1d0),0xffffffff,uVar10,uVar13
                      );
            (*(code *)PTR_Vec3_dtor_8c0815c4)
                      ((undefined1 *)((int)puVar11 + DAT_8c0815c8 + -0x1d0),0xffffffff,uVar10,uVar13
                      );
            (*(code *)PTR_object_dtor_delete_8c0815d0)
                      ((undefined1 *)((int)puVar11 + DAT_8c0815cc + -0x1d0),0xffffffff,uVar10,uVar13
                      );
            (*(code *)PTR_object_dtor_delete_8c0815d0)
                      ((undefined1 *)((int)puVar11 + DAT_8c0815d4 + -0x1d0),0xffffffff,uVar10,uVar13
                      );
            return *(undefined4 *)((int)puVar11 + DAT_8c0815bc + -0x1d0);
          }
          (*(code *)PTR_Vec3_assign_8c08164c)
                    ((undefined1 *)((int)puVar11 + DAT_8c081648 + -0x1d0),ar5,a6,puVar9);
          if (*(int *)(DAT_8c081650 + ar4) == 3) {
            (*(code *)PTR_Vec3_set_xyz_8c08165c)
                      ((undefined1 *)((int)puVar11 + DAT_8c081654._4_4_ + -0x1d0),ar5,a6,puVar9);
            *(undefined1 **)((int)puVar11 + -0x1d4) =
                 (undefined1 *)((int)puVar11 + DAT_8c081660 + -0x1d0);
            (*(code *)PTR_FUN_8c08166c)
                      ((undefined1 *)((int)puVar11 + DAT_8c081668 + -0x1d4),
                       (undefined1 *)((int)puVar11 + DAT_8c081664 + -0x1d4),a6,puVar9);
            (*(code *)PTR_Vec3_assign_8c08164c)
                      ((undefined1 *)((int)puVar11 + DAT_8c081648 + -0x1d0),
                       (undefined1 *)((int)puVar11 + DAT_8c081660 + -0x1d0),a6,puVar9);
            (*(code *)PTR_Vec3_dtor_8c081670)
                      ((undefined1 *)((int)puVar11 + DAT_8c081660 + -0x1d0),0xffffffff,a6,puVar9);
            uVar8 = 0xffffffff;
            (*(code *)PTR_object_dtor_delete_8c081674)
                      ((undefined1 *)((int)puVar11 + DAT_8c081654._4_4_ + -0x1d0),0xffffffff,a6,
                       puVar9);
          }
          else {
            (*(code *)PTR_Vec3_set_xyz_8c081790)
                      ((undefined1 *)((int)puVar11 + DAT_8c081788._4_4_ + -0x1d0),ar5,a6,puVar9);
            *(undefined1 **)((int)puVar11 + -0x1d4) =
                 (undefined1 *)((int)puVar11 + DAT_8c081794 + -0x1d0);
            (*(code *)PTR_FUN_8c0817a0)
                      ((undefined1 *)((int)puVar11 + DAT_8c08179c + -0x1d4),
                       (undefined1 *)((int)puVar11 + DAT_8c081798 + -0x1d4),a6,puVar9);
            (*(code *)PTR_Vec3_assign_8c0817a8)
                      ((undefined1 *)((int)puVar11 + DAT_8c0817a4 + -0x1d0),
                       (undefined1 *)((int)puVar11 + DAT_8c081794 + -0x1d0),a6,puVar9);
            (*(code *)PTR_Vec3_dtor_8c0817ac)
                      ((undefined1 *)((int)puVar11 + DAT_8c081794 + -0x1d0),0xffffffff,a6,puVar9);
            uVar8 = 0xffffffff;
            a6 = PTR_object_dtor_delete_8c0817b0;
            (*(code *)PTR_object_dtor_delete_8c0817b0)
                      ((undefined1 *)((int)puVar11 + DAT_8c081788._4_4_ + -0x1d0),0xffffffff,
                       PTR_object_dtor_delete_8c0817b0,puVar9);
          }
          *(undefined1 **)((int)puVar11 + -0x1d4) =
               (undefined1 *)((int)puVar11 + DAT_8c0817b4 + -0x1d0);
          (*(code *)PTR_Vec3_normalize_8c0817b8)
                    ((undefined1 *)((int)puVar11 + DAT_8c08179c + -0x1d4),uVar8,a6,puVar9);
          (*(code *)PTR_Vec3_assign_8c0817a8)
                    ((undefined1 *)((int)puVar11 + DAT_8c0817a4 + -0x1d0),
                     (undefined1 *)((int)puVar11 + DAT_8c0817b4 + -0x1d0),a6,puVar9);
          ar5 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c0817ac)
                    ((undefined1 *)((int)puVar11 + DAT_8c0817b4 + -0x1d0),0xffffffff,a6,puVar9);
          *(undefined4 *)(DAT_8c0817bc + ar4) = *(undefined4 *)(DAT_8c0817c0 + ar4);
        }
        else {
          a6 = PTR_Vec3_assign_8c081484;
          (*(code *)PTR_Vec3_assign_8c081484)
                    ((undefined1 *)((int)puVar11 + DAT_8c08147c._4_4_ + -0x1d0),ar5,
                     PTR_Vec3_assign_8c081484,puVar9);
          *(undefined4 *)(DAT_8c081488 + ar4) = 0;
        }
      }
      *(undefined1 **)((int)puVar11 + -0x1d4) = (undefined1 *)((int)puVar11 + DAT_8c0817c4 + -0x1d0)
      ;
      (*(code *)PTR_FUN_8c0817c8)(ar4 + 0x14,ar5,a6,puVar9);
      (*(code *)PTR_FUN_8c0817cc)
                ((undefined1 *)((int)puVar11 + DAT_8c0817c4 + -0x1d0),
                 (undefined1 *)((int)puVar11 + DAT_8c0817a4 + -0x1d0),a6,puVar9);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar11 + DAT_8c0817d0 + -0x1d0) = (int)((ulonglong)dVar15 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)puVar11 + DAT_8c0817d0 + -0x1d0));
      }
      else {
        *(double *)((int)puVar11 + DAT_8c0817d0 + -0x1d0) = dVar15;
        in_xd14 = *(undefined8 *)((int)puVar11 + DAT_8c0817d0 + -0x1d0);
      }
      (*(code *)PTR_Vec3_dtor_8c0817ac)
                ((undefined1 *)((int)puVar11 + DAT_8c0817c4 + -0x1d0),0xffffffff,a6,puVar9);
      uVar13 = SUB84(dVar15,0);
      uVar8 = (*(code *)PTR_FUN_8c0817d4)
                        (ar4 + 0x14,(undefined1 *)((int)puVar11 + DAT_8c0817a4 + -0x1d0),a6,puVar9);
      *(undefined4 *)((int)puVar11 + DAT_8c0817d8 + -0x1d0) = uVar8;
      *(undefined4 *)(DAT_8c0817c0 + ar4) = *(undefined4 *)((int)puVar11 + DAT_8c0817d8 + -0x1d0);
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((undefined4)DAT_8c0817dc,uVar13);
      }
      else {
        dVar15 = (double)CONCAT44(DAT_8c0817dc._4_4_,(undefined4)DAT_8c0817dc);
      }
      if (in_FPSCR_PR == '\0') {
        bVar16 = SUB84(in_dr14,0) < (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        bVar16 = in_dr14 < dVar15;
      }
      if (bVar16) {
        if (*(int *)(DAT_8c0817dc._4_4_ + ar4) < 2) {
          uVar10 = 0;
          *(undefined4 *)(DAT_8c0817e4 + ar4) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(DAT_8c08186c + ar4) == 2) {
          if (*(int *)(DAT_8c081870 + ar4) == 3) {
            uVar6 = 0;
            puVar9 = (undefined *)0xffffffff;
            uVar8 = 9;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08187c)
                      (ar4 + DAT_8c081874._4_4_,9,0xffffffff,0);
            uVar5 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c081880)(ar4,uVar8,puVar9,uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081884 + -0x1d0) = uVar8;
            uVar13 = *(undefined4 *)((int)puVar11 + DAT_8c081884 + -0x1d0);
            uVar8 = (*(code *)PTR_FUN_8c081888)(ar4 + DAT_8c081874._4_4_,uVar13,puVar9,uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081874._4_4_ + -0x1d0) = uVar8;
            puVar7 = (undefined4 *)PTR_deref_u32_8c08188c;
            uVar8 = (*(code *)PTR_deref_u32_8c08188c)
                              (*(undefined4 *)((int)puVar11 + DAT_8c081874._4_4_ + -0x1d0),uVar13,
                               puVar9,PTR_deref_u32_8c08188c);
            *(undefined4 *)((int)puVar11 + DAT_8c081890 + -0x1d0) = uVar8;
            puVar1 = (undefined4 *)(ar4 + DAT_8c081884);
            puVar3 = *(undefined4 **)((int)puVar11 + DAT_8c081890 + -0x1d0);
            uVar8 = puVar3[1];
            *puVar1 = *puVar3;
            puVar1[1] = uVar8;
            puVar1[2] = puVar3[2];
            *(undefined **)(DAT_8c081884 + ar4) = PTR_DAT_8c081894;
          }
          else {
            uVar6 = 0;
            puVar9 = (undefined *)0xffffffff;
            uVar8 = 10;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081910)
                      (ar4 + DAT_8c081908._4_4_,10,0xffffffff,0);
            uVar5 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c081914)(ar4,uVar8,puVar9,uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081918 + -0x1d0) = uVar8;
            uVar13 = *(undefined4 *)((int)puVar11 + DAT_8c081918 + -0x1d0);
            uVar8 = (*(code *)PTR_FUN_8c08191c)(ar4 + DAT_8c081908._4_4_,uVar13,puVar9,uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081920 + -0x1d0) = uVar8;
            uVar8 = (*(code *)PTR_deref_u32_8c081924)
                              (*(undefined4 *)((int)puVar11 + DAT_8c081920 + -0x1d0),uVar13,puVar9,
                               uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081928 + -0x1d0) = uVar8;
            puVar7 = (undefined4 *)(ar4 + DAT_8c08192c);
            puVar1 = *(undefined4 **)((int)puVar11 + DAT_8c081928 + -0x1d0);
            uVar8 = puVar1[1];
            *puVar7 = *puVar1;
            puVar7[1] = uVar8;
            puVar7[2] = puVar1[2];
            *(undefined **)(DAT_8c08192c + ar4) = PTR_DAT_8c081930;
          }
        }
        else if (*(int *)(DAT_8c0819c4 + ar4) < 6) {
          if (*(int *)(DAT_8c0819c8 + ar4) == 3) {
            puVar7 = (undefined4 *)0x0;
            puVar9 = (undefined *)0xffffffff;
            uVar8 = 9;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0819d4)
                      (ar4 + DAT_8c0819cc._4_4_,9,0xffffffff,0);
            uVar5 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c0819d8)(ar4,uVar8,puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + DAT_8c0819dc + -0x1d0) = uVar8;
            uVar8 = (*(code *)PTR_FUN_8c0819e0)
                              (ar4 + DAT_8c0819cc._4_4_,
                               *(undefined4 *)((int)puVar11 + DAT_8c0819dc + -0x1d0),puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + DAT_8c0819e4 + -0x1d0) = uVar8;
            uVar8 = (*(code *)PTR_deref_u32_8c0819e8)
                              (*(undefined4 *)((int)puVar11 + DAT_8c0819e4 + -0x1d0),
                               *(undefined4 *)((int)puVar11 + DAT_8c0819e4 + -0x1d0),puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + DAT_8c0819ec + -0x1d0) = uVar8;
            puVar3 = (undefined4 *)(ar4 + DAT_8c0819f0);
            puVar1 = *(undefined4 **)((int)puVar11 + DAT_8c0819ec + -0x1d0);
            uVar8 = puVar1[1];
            *puVar3 = *puVar1;
            puVar3[1] = uVar8;
            puVar3[2] = puVar1[2];
            *(undefined **)(DAT_8c0819f0 + ar4) = PTR_DAT_8c0819f4;
          }
          else {
            uVar6 = 0;
            uVar13 = 0xffffffff;
            uVar8 = 10;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081a7c)
                      (ar4 + DAT_8c081a74._4_4_,10,0xffffffff,0);
            uVar5 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c081a80)(ar4,uVar8,uVar13,uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081a84 + -0x1d0) = uVar8;
            uVar8 = (*(code *)PTR_FUN_8c081a88)
                              (ar4 + DAT_8c081a74._4_4_,
                               *(undefined4 *)((int)puVar11 + DAT_8c081a84 + -0x1d0),uVar13,uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081a8c + -0x1d0) = uVar8;
            uVar8 = (*(code *)PTR_deref_u32_8c081a90)
                              (*(undefined4 *)((int)puVar11 + DAT_8c081a8c + -0x1d0),uVar8,uVar13,
                               uVar6);
            *(undefined4 *)((int)puVar11 + DAT_8c081a94 + -0x1d0) = uVar8;
            puVar1 = (undefined4 *)(ar4 + (int)DAT_8c081a98);
            puVar7 = *(undefined4 **)((int)puVar11 + DAT_8c081a94 + -0x1d0);
            uVar8 = puVar7[1];
            *puVar1 = *puVar7;
            puVar1[1] = uVar8;
            puVar1[2] = puVar7[2];
            puVar9 = PTR_DAT_8c081a9c;
            puVar7 = DAT_8c081a98;
            *(undefined **)((int)DAT_8c081a98 + ar4) = PTR_DAT_8c081a9c;
          }
        }
        else if (*(int *)(DAT_8c081b40 + ar4) == 3) {
          uVar6 = 0;
          uVar13 = 0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081b4c)
                    (ar4 + DAT_8c081b44._4_4_,9,0xffffffff,0);
          uVar5 = SUB84(dVar15,0);
          uVar8 = (*(code *)PTR_FUN_8c081b50)(ar4,PTR_FUN_8c081b50,uVar13,uVar6);
          *(undefined4 *)((int)puVar11 + DAT_8c081b54 + -0x1d0) = uVar8;
          uVar8 = (*(code *)PTR_FUN_8c081b58)
                            (ar4 + DAT_8c081b44._4_4_,
                             *(undefined4 *)((int)puVar11 + DAT_8c081b54 + -0x1d0),uVar13,uVar6);
          *(undefined4 *)((int)puVar11 + DAT_8c081b5c + -0x1d0) = uVar8;
          uVar8 = (*(code *)PTR_deref_u32_8c081b60)
                            (*(undefined4 *)((int)puVar11 + DAT_8c081b5c + -0x1d0),uVar8,uVar13,
                             PTR_deref_u32_8c081b60);
          *(undefined4 *)((int)puVar11 + -0x154) = uVar8;
          puVar1 = (undefined4 *)(ar4 + (int)DAT_8c081b64);
          puVar7 = *(undefined4 **)((int)puVar11 + -0x154);
          uVar8 = puVar7[1];
          *puVar1 = *puVar7;
          puVar1[1] = uVar8;
          puVar1[2] = puVar7[2];
          puVar7 = DAT_8c081b64;
          *(int *)((int)puVar11 + -0x1bc) = *(int *)(DAT_8c081b68 + ar4) + -6;
          puVar9 = *(undefined **)((int)puVar11 + -0x1bc);
          *(undefined **)((int)DAT_8c081b64 + ar4) =
               PTR_DAT_8c081b6c + ((int)puVar9 * 2 + *(int *)((int)puVar11 + -0x1bc)) * 8;
        }
        else {
          uVar6 = 0;
          uVar13 = 0xffffffff;
          uVar8 = 10;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081c10)
                    (ar4 + DAT_8c081c08._4_4_,10,0xffffffff,0);
          uVar5 = SUB84(dVar15,0);
          uVar8 = (*(code *)PTR_FUN_8c081c14)(ar4,uVar8,uVar13,uVar6);
          *(undefined4 *)((int)puVar11 + -0x158) = uVar8;
          uVar13 = *(undefined4 *)((int)puVar11 + -0x158);
          iVar2 = DAT_8c081c08._4_4_;
          uVar8 = (*(code *)PTR_FUN_8c081c18)
                            (ar4 + DAT_8c081c08._4_4_,uVar13,DAT_8c081c08._4_4_,uVar13);
          *(undefined4 *)((int)puVar11 + -0x15c) = uVar8;
          puVar7 = (undefined4 *)PTR_deref_u32_8c081c1c;
          puVar9 = (undefined *)
                   (*(code *)PTR_deref_u32_8c081c1c)
                             (*(undefined4 *)((int)puVar11 + -0x15c),uVar13,iVar2,
                              PTR_deref_u32_8c081c1c);
          *(undefined **)((int)puVar11 + -0x160) = puVar9;
          puVar1 = (undefined4 *)(ar4 + DAT_8c081c20);
          puVar3 = *(undefined4 **)((int)puVar11 + -0x160);
          uVar8 = puVar3[1];
          *puVar1 = *puVar3;
          puVar1[1] = uVar8;
          puVar1[2] = puVar3[2];
          *(int *)((int)puVar11 + -0x1c0) = *(int *)(DAT_8c081c24 + ar4) + -6;
          *(undefined **)(DAT_8c081c20 + ar4) =
               PTR_DAT_8c081c28 +
               (*(int *)((int)puVar11 + -0x1c0) * 2 + *(int *)((int)puVar11 + -0x1c0)) * 8;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c081c30,uVar5);
        }
        else {
          dVar15 = (double)CONCAT44(uRam8c081c34,DAT_8c081c30);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(in_dr14,0) / (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar14 = SUB84(in_dr14 / dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c081c2c) = fVar14;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c081c2c) = in_xd14;
        }
      }
      else {
        if (*(int *)(DAT_8c081c4c + ar4) < 2) {
          uVar10 = 0;
          *(undefined4 *)(DAT_8c081c50 + ar4) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(DAT_8c081ce4 + ar4) == 2) {
          if (*(int *)(DAT_8c081ce8 + ar4) == 3) {
            puVar7 = (undefined4 *)0x0;
            puVar9 = (undefined *)0xffffffff;
            uVar8 = 2;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081cf4)
                      (ar4 + DAT_8c081cec._4_4_,2,0xffffffff,0);
            uVar6 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c081cf8)(ar4,uVar8,puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + -0x164) = uVar8;
            uVar8 = (*(code *)PTR_FUN_8c081cfc)
                              (ar4 + DAT_8c081cec._4_4_,*(undefined4 *)((int)puVar11 + -0x164),
                               puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + -0x168) = uVar8;
            uVar8 = (*(code *)PTR_deref_u32_8c081d00)
                              (*(undefined4 *)((int)puVar11 + -0x168),PTR_deref_u32_8c081d00,puVar9,
                               puVar7);
            *(undefined4 *)((int)puVar11 + -0x16c) = uVar8;
            puVar3 = (undefined4 *)(ar4 + DAT_8c081d04);
            puVar1 = *(undefined4 **)((int)puVar11 + -0x16c);
            uVar8 = puVar1[1];
            *puVar3 = *puVar1;
            puVar3[1] = uVar8;
            puVar3[2] = puVar1[2];
            *(undefined **)(DAT_8c081d04 + ar4) = PTR_DAT_8c081d08;
          }
          else {
            puVar7 = (undefined4 *)0x0;
            puVar9 = (undefined *)0xffffffff;
            uVar8 = 3;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081d8c)
                      (ar4 + DAT_8c081d84._4_4_,3,0xffffffff,0);
            uVar6 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c081d90)(ar4,uVar8,puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + -0x170) = uVar8;
            uVar13 = *(undefined4 *)((int)puVar11 + -0x170);
            uVar8 = (*(code *)PTR_FUN_8c081d94)(ar4 + DAT_8c081d84._4_4_,uVar13,puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + -0x174) = uVar8;
            uVar8 = (*(code *)PTR_deref_u32_8c081d98)
                              (*(undefined4 *)((int)puVar11 + -0x174),uVar13,puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + -0x178) = uVar8;
            puVar3 = (undefined4 *)(ar4 + DAT_8c081d9c);
            puVar1 = *(undefined4 **)((int)puVar11 + -0x178);
            uVar8 = puVar1[1];
            *puVar3 = *puVar1;
            puVar3[1] = uVar8;
            puVar3[2] = puVar1[2];
            *(undefined **)(DAT_8c081d9c + ar4) = PTR_DAT_8c081da0;
          }
        }
        else if (*(int *)(DAT_8c081e38 + ar4) < 6) {
          if (*(int *)(DAT_8c081e3c + ar4) == 3) {
            uVar5 = 0;
            uVar13 = 0xffffffff;
            uVar8 = 2;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081e48)
                      (ar4 + DAT_8c081e40._4_4_,2,0xffffffff,0);
            uVar6 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c081e4c)(ar4,uVar8,uVar13,uVar5);
            *(undefined4 *)((int)puVar11 + -0x17c) = uVar8;
            puVar7 = (undefined4 *)(ar4 + DAT_8c081e40._4_4_);
            puVar9 = PTR_FUN_8c081e50;
            uVar8 = (*(code *)PTR_FUN_8c081e50)
                              (puVar7,*(undefined4 *)((int)puVar11 + -0x17c),PTR_FUN_8c081e50,puVar7
                              );
            *(undefined4 *)((int)puVar11 + -0x180) = uVar8;
            uVar8 = (*(code *)PTR_deref_u32_8c081e54)
                              (*(undefined4 *)((int)puVar11 + -0x180),uVar8,puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + -0x184) = uVar8;
            puVar1 = (undefined4 *)(ar4 + DAT_8c081e58);
            puVar3 = *(undefined4 **)((int)puVar11 + -0x184);
            uVar8 = puVar3[1];
            *puVar1 = *puVar3;
            puVar1[1] = uVar8;
            puVar1[2] = puVar3[2];
            *(undefined **)(DAT_8c081e58 + ar4) = PTR_DAT_8c081e5c;
          }
          else {
            uVar5 = 0;
            uVar13 = 0xffffffff;
            uVar8 = 3;
            (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081ee0)
                      (ar4 + DAT_8c081ed8._4_4_,3,0xffffffff,0);
            uVar6 = SUB84(dVar15,0);
            uVar8 = (*(code *)PTR_FUN_8c081ee4)(ar4,uVar8,uVar13,uVar5);
            *(undefined4 *)((int)puVar11 + -0x188) = uVar8;
            puVar7 = (undefined4 *)(ar4 + DAT_8c081ed8._4_4_);
            puVar9 = PTR_FUN_8c081ee8;
            uVar8 = (*(code *)PTR_FUN_8c081ee8)
                              (puVar7,*(undefined4 *)((int)puVar11 + -0x188),PTR_FUN_8c081ee8,puVar7
                              );
            *(undefined4 *)((int)puVar11 + -0x18c) = uVar8;
            uVar8 = (*(code *)PTR_deref_u32_8c081eec)
                              (*(undefined4 *)((int)puVar11 + -0x18c),uVar8,puVar9,puVar7);
            *(undefined4 *)((int)puVar11 + -400) = uVar8;
            puVar1 = (undefined4 *)(ar4 + DAT_8c081ef0);
            puVar3 = *(undefined4 **)((int)puVar11 + -400);
            uVar8 = puVar3[1];
            *puVar1 = *puVar3;
            puVar1[1] = uVar8;
            puVar1[2] = puVar3[2];
            *(undefined **)(DAT_8c081ef0 + ar4) = PTR_DAT_8c081ef4;
          }
        }
        else if (*(int *)(DAT_8c081f88 + ar4) == 3) {
          puVar7 = (undefined4 *)0x0;
          uVar13 = 0xffffffff;
          uVar8 = 2;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c081f94)
                    (ar4 + DAT_8c081f8c._4_4_,2,0xffffffff,0);
          uVar6 = SUB84(dVar15,0);
          uVar8 = (*(code *)PTR_FUN_8c081f98)(ar4,uVar8,uVar13,puVar7);
          *(undefined4 *)((int)puVar11 + -0x194) = uVar8;
          uVar8 = (*(code *)PTR_FUN_8c081f9c)
                            (ar4 + DAT_8c081f8c._4_4_,*(undefined4 *)((int)puVar11 + -0x194),uVar13,
                             puVar7);
          *(undefined4 *)((int)puVar11 + -0x198) = uVar8;
          puVar9 = *(undefined **)((int)puVar11 + -0x198);
          uVar8 = (*(code *)PTR_deref_u32_8c081fa0)(puVar9,PTR_deref_u32_8c081fa0,puVar9,puVar7);
          *(undefined4 *)((int)puVar11 + -0x19c) = uVar8;
          puVar1 = (undefined4 *)(ar4 + DAT_8c081fa4);
          puVar3 = *(undefined4 **)((int)puVar11 + -0x19c);
          uVar8 = puVar3[1];
          *puVar1 = *puVar3;
          puVar1[1] = uVar8;
          puVar1[2] = puVar3[2];
          *(int *)((int)puVar11 + -0x1c4) = *(int *)(DAT_8c081fa8 + ar4) + -6;
          *(undefined **)(DAT_8c081fa4 + ar4) =
               PTR_DAT_8c081fac +
               (*(int *)((int)puVar11 + -0x1c4) * 2 + *(int *)((int)puVar11 + -0x1c4)) * 8;
        }
        else {
          a7 = 0;
          uVar5 = 0xffffffff;
          uVar8 = 3;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0821e8)
                    (ar4 + DAT_8c0821e0._4_4_,3,0xffffffff,0);
          uVar6 = SUB84(dVar15,0);
          uVar8 = (*(code *)PTR_FUN_8c0821ec)(ar4,uVar8,uVar5,a7);
          *(undefined4 *)((int)puVar11 + -0x1a0) = uVar8;
          uVar8 = *(undefined4 *)((int)puVar11 + -0x1a0);
          uVar13 = (*(code *)PTR_FUN_8c0821f0)(ar4 + DAT_8c0821e0._4_4_,uVar8,uVar5,a7);
          *(undefined4 *)((int)puVar11 + -0x1a4) = uVar13;
          uVar8 = (*(code *)PTR_deref_u32_8c0821f4)
                            (*(undefined4 *)((int)puVar11 + -0x1a4),uVar8,uVar5,a7);
          *(undefined4 *)((int)puVar11 + -0x1a8) = uVar8;
          puVar1 = (undefined4 *)(ar4 + (int)DAT_8c0821f8);
          puVar7 = *(undefined4 **)((int)puVar11 + -0x1a8);
          uVar8 = puVar7[1];
          *puVar1 = *puVar7;
          puVar1[1] = uVar8;
          puVar1[2] = puVar7[2];
          puVar7 = DAT_8c0821f8;
          *(int *)((int)puVar11 + -0x1c8) = *(int *)(DAT_8c0821fc + ar4) + -6;
          puVar9 = *(undefined **)((int)puVar11 + -0x1c8);
          *(undefined **)((int)DAT_8c0821f8 + ar4) =
               PTR_DAT_8c082200 + ((int)puVar9 * 2 + *(int *)((int)puVar11 + -0x1c8)) * 8;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c082208,uVar6);
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c08220c,DAT_8c082208);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = SUB84(in_dr14,0) / (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar14 = SUB84(in_dr14 / dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c082204) = fVar14;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c082204) = in_xd14;
        }
      }
      uVar12 = SUB84(dVar15,0);
      (*(code *)PTR_FUN_8c082210)(ar4 + DAT_8c08220c,DAT_8c08220c,puVar9,puVar7);
      dVar15 = (double)(ulonglong)uVar12;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar15;
      }
      puVar4 = PTR_s_CAnimBody_SetFrame_033e6e_8c082214;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c082214)
                (ar4 + DAT_8c0821e0._4_4_,PTR_s_CAnimBody_SetFrame_033e6e_8c082214,puVar9,puVar7);
      puVar9 = DAT_8c082218;
      *(int *)((int)puVar11 + -0x1cc) = ar4;
      a6 = *(undefined **)(DAT_8c082218 + *(int *)((int)puVar11 + -0x1cc));
      *(undefined **)(DAT_8c082218 + *(int *)((int)puVar11 + -0x1cc)) = a6 + 1;
    }
    else if (iVar2 != 2) goto LAB_8c0822ea;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c08221c)(ar4 + DAT_8c0821e0._4_4_,puVar4,a6,puVar9);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + -0x1ac) = (int)((ulonglong)dVar15 >> 0x20);
    }
    else {
      *(double *)((int)puVar11 + -0x1ac) = dVar15;
    }
    *(undefined1 **)((int)puVar11 + -0x1d4) = (undefined1 *)((int)puVar11 + DAT_8c082220 + -0x1d0);
    uVar8 = *(undefined4 *)(*(int *)((int)DAT_8c0821f8 + ar4) + 4);
    iVar2 = DAT_8c0821e0._4_4_;
    (*(code *)PTR_FUN_8c082224)(ar4 + DAT_8c0821e0._4_4_,uVar8,DAT_8c0821e0._4_4_,uVar8);
    uVar13 = SUB84(dVar15,0);
    (*(code *)PTR_vec3_copy_8c023d8c_8c08222c)
              ((undefined1 *)((int)puVar11 + DAT_8c082228 + -0x1d0),
               (undefined1 *)((int)puVar11 + DAT_8c082220 + -0x1d0),iVar2,uVar8);
    (*(code *)PTR_object_dtor_delete_8c082230)
              ((undefined1 *)((int)puVar11 + DAT_8c082220 + -0x1d0),0xffffffff,
               PTR_object_dtor_delete_8c082230,(undefined1 *)((int)puVar11 + DAT_8c082220 + -0x1d0))
    ;
    if (in_FPSCR_SZ == '\0') {
      uVar13 = *(undefined4 *)((int)puVar11 + DAT_8c082228 + -0x1d0);
    }
    else {
      in_xd0 = *(undefined8 *)((int)puVar11 + DAT_8c082228 + -0x1d0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c08220c),uVar13);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c08220c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c082204),fVar14);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c082204);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar11 + DAT_8c082234 + -0x1d0) = fVar14;
      fVar14 = *(float *)((int)puVar11 + DAT_8c082238 + -0x1d0);
    }
    else {
      *(undefined8 *)((int)puVar11 + DAT_8c082234 + -0x1d0) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar11 + DAT_8c082238 + -0x1d0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c08223c),fVar14);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c08223c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c082204),fVar14);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c082204);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar11 + DAT_8c082240 + -0x1d0) = fVar14;
      fVar14 = *(float *)((int)puVar11 + DAT_8c082244 + -0x1d0);
    }
    else {
      *(undefined8 *)((int)puVar11 + DAT_8c082240 + -0x1d0) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar11 + DAT_8c082244 + -0x1d0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c082248),fVar14);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c082248);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c082204),fVar14);
    }
    else {
      dVar15 = *(double *)(ar4 + DAT_8c082204);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar11 + DAT_8c08224c + -0x1d0) = fVar14;
    }
    else {
      *(undefined8 *)((int)puVar11 + DAT_8c08224c + -0x1d0) = in_xd0;
    }
    puVar9 = (undefined *)((int)puVar11 + DAT_8c082228 + -0x1d0);
    iVar2 = DAT_8c08220c;
    (*(code *)PTR_vec3_copy_8c023d8c_8c08222c)(ar4 + DAT_8c08220c,puVar9,DAT_8c08220c,puVar9);
    (*(code *)PTR_vec3_copy_8c02b5fc_8c082254)
              ((undefined1 *)((int)puVar11 + DAT_8c082250 + -0x1d0),
               (undefined1 *)((int)puVar11 + DAT_8c082234 + -0x1d0),iVar2,puVar9);
    *(undefined1 **)((int)puVar11 + -0x1d4) = (undefined1 *)((int)puVar11 + DAT_8c082258 + -0x1d0);
    (*(code *)PTR_FUN_8c082260)
              (ar4 + 0x14,(undefined1 *)((int)puVar11 + DAT_8c08225c + -0x1d4),iVar2,puVar9);
    (*(code *)PTR_Vec3_assign_8c082264)
              (ar4 + 0x14,(undefined1 *)((int)puVar11 + DAT_8c082258 + -0x1d0),iVar2,puVar9);
    (*(code *)PTR_Vec3_dtor_8c082268)
              ((undefined1 *)((int)puVar11 + DAT_8c082258 + -0x1d0),0xffffffff,iVar2,puVar9);
    uVar8 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c082230)
              ((undefined1 *)((int)puVar11 + DAT_8c082250 + -0x1d0),0xffffffff,iVar2,puVar9);
    uVar8 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c08226c)
                      (ar4 + DAT_8c0821e0._4_4_,uVar8,iVar2,puVar9);
    *(undefined4 *)((int)puVar11 + -0x1b0) = uVar8;
    if (*(int *)((int)puVar11 + -0x1b0) == 1) {
      uVar10 = 0;
      *(undefined4 *)(DAT_8c082218 + ar4) = 0;
      if (*(int *)(DAT_8c082270 + ar4) == 3) {
        puVar9 = (undefined *)0x0;
        uVar8 = 0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0821e8)
                  (ar4 + DAT_8c0821e0._4_4_,5,0xffffffff,0);
      }
      else if (*(int *)(DAT_8c0822a0 + ar4) == 4) {
        puVar9 = (undefined *)0x0;
        uVar8 = 0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0822ac)
                  (ar4 + DAT_8c0822a4._4_4_,6,0xffffffff,0);
      }
      else {
        puVar9 = (undefined *)0x0;
        uVar8 = 0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082350)
                  (ar4 + DAT_8c082348._4_4_,0,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c082354)
                (ar4 + DAT_8c082348._4_4_,ar4 + DAT_8c082348._4_4_,uVar8,puVar9);
      *(undefined4 *)(DAT_8c082358 + ar4) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar14;
      }
    }
  }
LAB_8c0822ea:
  *(undefined4 *)((int)puVar11 + DAT_8c08235c + -0x1d0) = uVar10;
  uVar8 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c082364)
            ((undefined1 *)((int)puVar11 + DAT_8c082360 + -0x1d0),0xffffffff,0xffffffff,puVar9);
  (*(code *)PTR_Vec3_dtor_8c082364)
            ((undefined1 *)((int)puVar11 + DAT_8c082368 + -0x1d0),0xffffffff,uVar8,puVar9);
  (*(code *)PTR_object_dtor_delete_8c082370)
            ((undefined1 *)((int)puVar11 + DAT_8c08236c + -0x1d0),0xffffffff,uVar8,puVar9);
  (*(code *)PTR_object_dtor_delete_8c082370)
            ((undefined1 *)((int)puVar11 + DAT_8c082374 + -0x1d0),0xffffffff,uVar8,puVar9);
  return *(undefined4 *)((int)puVar11 + DAT_8c08235c + -0x1d0);
}



/* FUN_8c082378 @ 8c082378 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0823d4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c082378(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_58;
  undefined8 uStack_4c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  if (in_FPSCR_SZ == '\0') {
    in_fr5 = in_fr4;
  }
  uVar3 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c08246c)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_normalize_8c082470)(ar5,uVar3,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c082474)(auStack_18,auStack_28,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c082478)(auStack_28,0xffffffff,ar6,ar7);
  iVar2 = *(int *)(DAT_8c08247c + ar4);
  uStack_58 = (double)CONCAT44(iVar2,in_fr5);
  *(int *)(DAT_8c08247c + ar4) = iVar2 + 1;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),(float)(iVar2 + 1));
  }
  else {
    dVar5 = *(double *)(ar4 + 0x38);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_58 = (double)CONCAT44(in_fr5,fVar4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = SUB84(uStack_58,0) / (float)((ulonglong)uStack_58 >> 0x20);
  }
  else {
    fVar4 = SUB84(uStack_58 / uStack_58,0);
  }
  uVar1 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    uStack_4c = CONCAT44(uStack_4c._4_4_,fVar4);
    uVar1 = uStack_4c;
  }
  uStack_4c = uVar1;
  (*(code *)PTR_Vec3_scale_8c082480)(auStack_18,&uStack_4c,ar6,ar7);
  (*(code *)PTR_FUN_8c082484)(ar4 + 0x14,auStack_38,ar6,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c082478)(auStack_38,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_normalize_8c082470)(ar4 + 0x14,uVar3,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c082474)(ar4 + 0x14,(int)&uStack_4c + 4,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c082478)((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c082474)(ar4 + DAT_8c082488,ar4 + 0x14,ar6,ar7);
  uVar3 = (*(code *)PTR_Vec3_dtor_8c082478)(auStack_18,0xffffffff,ar6,ar7);
  return uVar3;
}



/* FUN_8c08248c @ 8c08248c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08248c(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *a7;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  ulonglong uVar10;
  double in_xd0;
  double dVar11;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_130;
  undefined8 uStack_12c;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [160];
  
  uVar7 = 1;
  a7 = ar7;
  uStack_12c._0_4_ = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c082568)((int)&uStack_12c + DAT_8c082564,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_ctor_zero_8c082568;
  (*(code *)PTR_Vec3_ctor_zero_8c082568)
            ((int)&uStack_12c + DAT_8c08256c,PTR_Vec3_ctor_zero_8c082568,ar6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c082568)((int)&uStack_12c + DAT_8c082570,puVar4,ar6,a7);
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c082574,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x48);
    dVar9 = (double)CONCAT44(DAT_8c082578,DAT_8c082574);
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c082578,fVar8);
  }
  else {
    dVar9 = (double)CONCAT44(DAT_8c08257c,DAT_8c082578);
  }
  if (in_FPSCR_PR == '\0') {
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar9,0),SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 - dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)&uStack_12c + DAT_8c082564) = (int)((ulonglong)dVar9 >> 0x20);
  }
  else {
    *(double *)((int)&uStack_12c + DAT_8c082564) = dVar9;
  }
  (**(code **)(DAT_8c08257c + *ar7))(ar7,*ar7,ar6,a7);
  iVar5 = (int)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(DAT_8c082580,iVar5);
    dVar9 = in_xd0;
    iStack_d8 = iVar5;
  }
  else {
    iStack_d8 = SUB84(dVar9,0);
    dVar11 = (double)CONCAT44(DAT_8c082584,DAT_8c082580);
    iStack_d4 = iVar5;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar11 - dVar11,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)&uStack_12c + DAT_8c082584) = fVar8;
    dVar11 = (double)CONCAT44(DAT_8c082588,fVar8);
    *(undefined4 *)((int)&uStack_12c + DAT_8c08258c) = DAT_8c082588;
  }
  else {
    *(double *)((int)&uStack_12c + DAT_8c082584) = dVar9;
    dVar11 = (double)CONCAT44(DAT_8c08258c,DAT_8c082588);
    *(double *)((int)&uStack_12c + DAT_8c08258c) = dVar11;
  }
  puVar4 = PTR_Vec3_ctor_xyz_8c082598;
  (*(code *)PTR_Vec3_ctor_xyz_8c082598)
            ((int)&uStack_12c + DAT_8c082594,PTR_Vec3_ctor_xyz_8c082598,ar6,a7);
  if (*(int *)(DAT_8c08259c + ar4) < 7) {
    uStack_c4 = 0;
    (*(code *)PTR_Vec3_dtor_8c0825a0)((int)&uStack_12c + DAT_8c082594,0xffffffff,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0825a0)((int)&uStack_12c + DAT_8c082570,0xffffffff,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0825a0)((int)&uStack_12c + DAT_8c08256c,0xffffffff,ar6,a7);
    (*(code *)PTR_Vec3_dtor_8c0825a0)((int)&uStack_12c + DAT_8c082564,0xffffffff,ar6,a7);
  }
  else {
    (**(code **)(DAT_8c082604 + *ar7))(ar7,puVar4,ar6,a7);
    iVar5 = (int)((ulonglong)dVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uVar10 = CONCAT44(DAT_8c082608,iVar5);
      dVar11 = dVar9;
      iStack_dc = iVar5;
    }
    else {
      iStack_dc = SUB84(dVar11,0);
      uVar10 = CONCAT44(DAT_8c08260c,DAT_8c082608);
      iStack_d8 = iVar5;
    }
    if (in_FPSCR_PR != '\0' || (float)uVar10 <= (float)(uVar10 >> 0x20)) {
      switch(*(undefined4 *)(DAT_8c082640 + ar4)) {
      case 0:
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0826a8,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          dVar11 = *(double *)(ar4 + 0x28);
          dVar9 = (double)CONCAT44(DAT_8c0826ac,DAT_8c0826a8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x28) = fVar8;
        }
        else {
          *(double *)(ar4 + 0x28) = dVar11;
        }
        iStack_108 = ar4;
        iStack_e0 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0826b0)
                              (ar4 + DAT_8c0826ac,puVar4,ar6,a7);
        if (iStack_e0 == 1) {
          *(int *)(DAT_8c0826b4 + ar4) = *(int *)(DAT_8c0826b4 + ar4) + 1;
          *(undefined4 *)(ar4 + 0x40) = 5;
          iStack_10c = ar4;
        }
        break;
      case 1:
        ar6 = (int)&uStack_12c + DAT_8c082728;
        iStack_e4 = (*(code *)PTR_pure_virtual_stub_8c082730)(ar4,ar5,ar6,a7);
        if (iStack_e4 == 0) {
          *(int *)(DAT_8c082734 + ar4) = *(int *)(DAT_8c082734 + ar4) + 1;
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)(DAT_8c082738 + ar4) = 0;
          *(undefined4 *)(DAT_8c08273c + ar4) = 0;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar10 & 0xffffffff;
          }
          *(undefined4 *)(DAT_8c082740 + ar4) = 0;
          *(undefined4 *)(DAT_8c082744 + ar4) = 0xe;
          iStack_110 = ar4;
        }
        break;
      case 2:
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c082808,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          dVar11 = *(double *)(ar4 + 0x28);
          dVar9 = (double)CONCAT44(DAT_8c08280c,DAT_8c082808);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x28) = fVar8;
        }
        else {
          *(double *)(ar4 + 0x28) = dVar11;
        }
        puStack_130 = (undefined1 *)((int)&uStack_12c + DAT_8c08280c);
        iStack_114 = ar4;
        (*(code *)PTR_FUN_8c082810)(ar4 + 0x14,puVar4,ar6,a7);
        (*(code *)PTR_FUN_8c082818)(ar4,(int)&uStack_12c + DAT_8c08280c,ar6,a7);
        uVar6 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c08281c)((int)&uStack_12c + DAT_8c08280c,0xffffffff,ar6,a7);
        (*(code *)PTR_vec3_clear_8c082824)(ar4 + DAT_8c082820,uVar6,ar6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),
                                   *(undefined4 *)((int)&uStack_12c + DAT_8c08282c));
        }
        else {
          dVar11 = *(double *)((int)&uStack_12c + DAT_8c08282c);
          dVar9 = *(double *)(ar5 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c082830,fVar8);
        }
        else {
          dVar9 = (double)CONCAT44(DAT_8c082834,DAT_8c082830);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c082828) = fVar8;
        }
        else {
          *(double *)(ar4 + DAT_8c082828) = dVar11;
        }
        iStack_e8 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c082838)
                              (ar4 + DAT_8c082834,uVar6,ar6,a7);
        if (iStack_e8 == 1) {
          iStack_11c = *(int *)(DAT_8c08283c + ar4);
          *(int *)(DAT_8c08283c + ar4) = iStack_11c + 1;
          iStack_118 = ar4;
          if (0 < iStack_11c) {
            *(int *)(DAT_8c082840 + ar4) = *(int *)(DAT_8c082840 + ar4) + 1;
            *(undefined4 *)(DAT_8c082844 + ar4) = 0;
            iStack_120 = ar4;
          }
        }
        break;
      case 3:
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c082958,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          dVar11 = *(double *)(ar4 + 0x28);
          dVar9 = (double)CONCAT44(DAT_8c08295c,DAT_8c082958);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x28) = fVar8;
        }
        else {
          *(double *)(ar4 + 0x28) = dVar11;
        }
        iStack_124 = ar4;
        (*(code *)PTR_vec3_clear_8c082960)(ar4 + DAT_8c08295c,puVar4,ar6,a7);
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),
                                   *(undefined4 *)((int)&uStack_12c + DAT_8c082968));
        }
        else {
          dVar11 = *(double *)((int)&uStack_12c + DAT_8c082968);
          dVar9 = *(double *)(ar5 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c08296c,fVar8);
        }
        else {
          dVar9 = (double)CONCAT44(DAT_8c082970,DAT_8c08296c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c082964) = fVar8;
        }
        else {
          *(double *)(ar4 + DAT_8c082964) = dVar11;
        }
        (*(code *)PTR_Vec3_ctor_copy_8c082978)
                  ((int)&uStack_12c + DAT_8c082974,(int)&uStack_12c + DAT_8c082970,ar6,a7);
        ar6 = 1;
        iStack_ec = (*(code *)PTR_FUN_8c08297c)(ar4,(int)&uStack_12c + DAT_8c082974,1,a7);
        uStack_d0 = (uint)(iStack_ec == 0);
        (*(code *)PTR_Vec3_dtor_8c082980)((int)&uStack_12c + DAT_8c082974,0xffffffff,ar6,a7);
        if (uStack_d0 != 0) {
          *(int *)(DAT_8c082984 + ar4) = *(int *)(DAT_8c082984 + ar4) + 1;
          a7 = (int *)0x0;
          ar6 = -1;
          uVar6 = 0x32;
          uStack_12c._4_4_ = ar4;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082990)
                    (ar4 + DAT_8c082988._4_4_,0x32,0xffffffff,0);
          uVar6 = (*(code *)PTR_FUN_8c082994)(ar4,uVar6,ar6,a7);
          uStack_f0 = uVar6;
          uStack_f4 = (*(code *)PTR_FUN_8c082998)(ar4 + DAT_8c082988._4_4_,uVar6,ar6,a7);
          puVar1 = (undefined4 *)(*(code *)PTR_deref_u32_8c08299c)(uStack_f4,uVar6,ar6,a7);
          uStack_fc = CONCAT44(puVar1,(undefined4)uStack_fc);
          puVar3 = (undefined4 *)(ar4 + DAT_8c0829a0);
          uVar2 = puVar1[1];
          *puVar3 = *puVar1;
          puVar3[1] = uVar2;
          puVar3[2] = puVar1[2];
          *(undefined **)(DAT_8c0829a0 + ar4) = PTR_DAT_8c0829a4;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0829a8)(ar4 + DAT_8c082988._4_4_,uVar6,ar6,a7)
          ;
          *(undefined4 *)(DAT_8c0829ac + ar4) = 0;
          (*(code *)PTR_vec3_clear_8c082960)(ar4 + DAT_8c0829b0,uVar6,ar6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar8;
          }
        }
        break;
      case 4:
        (*(code *)PTR_FUN_8c082bc4)(ar4,puVar4,ar6,a7);
        *(undefined4 *)(DAT_8c082bc8 + ar4) = 1;
        *(undefined4 *)(DAT_8c082bcc + ar4) = 1;
        (*(code *)PTR_CAnimBody_GetCurFrame_8c082bd4)(ar4 + DAT_8c082bd0,puVar4,ar6,a7);
        if (in_FPSCR_SZ == '\0') {
          uStack_fc = CONCAT44(uStack_fc._4_4_,(int)(uVar10 >> 0x20));
          uVar10 = uStack_fc;
        }
        uStack_fc = uVar10;
        puStack_130 = (undefined1 *)((int)&uStack_12c + DAT_8c082bd8);
        (*(code *)PTR_FUN_8c082be0)(ar4 + DAT_8c082bd0,**(undefined4 **)(DAT_8c082bdc + ar4),ar6,a7)
        ;
        (*(code *)PTR_Vec3_assign_8c082be8)
                  ((int)&uStack_12c + DAT_8c082be4,(int)&uStack_12c + DAT_8c082bd8,ar6,a7);
        (*(code *)PTR_Vec3_dtor_8c082bec)((int)&uStack_12c + DAT_8c082bd8,0xffffffff,ar6,a7);
        puStack_130 = (undefined1 *)((int)&uStack_12c + DAT_8c082bf0);
        (*(code *)PTR_Vec3_sub_8c082bfc)((int)&puStack_130 + DAT_8c082bf8,ar4 + DAT_8c082bf4,ar6,a7)
        ;
        (*(code *)PTR_Vec3_assign_8c082be8)
                  ((int)&uStack_12c + DAT_8c082c00,(int)&uStack_12c + DAT_8c082bf0,ar6,a7);
        (*(code *)PTR_Vec3_dtor_8c082bec)((int)&uStack_12c + DAT_8c082bf0,0xffffffff,ar6,a7);
        iVar5 = (int)&uStack_12c + DAT_8c082be4;
        (*(code *)PTR_Vec3_assign_8c082be8)(ar4 + DAT_8c082bf4,iVar5,ar6,a7);
        (*(code *)PTR_Vec3_ctor_xyz_8c082c08)((int)&uStack_12c + DAT_8c082c04,iVar5,ar6,a7);
        iStack_100 = (*(code *)PTR_FUN_8c082c0c)
                               ((int)&uStack_12c + DAT_8c082c00,(int)&uStack_12c + DAT_8c082c04,ar6,
                                a7);
        iStack_d4 = iStack_100;
        (*(code *)PTR_Vec3_dtor_8c082bec)((int)&uStack_12c + DAT_8c082c04,0xffffffff,ar6,a7);
        if (iStack_d4 != 0) {
          (*(code *)PTR_vec3_copy_8c02b5fc_8c082c10)(auStack_b0,(int)uStack_12c,ar6,a7);
          puStack_130 = auStack_c0;
          (*(code *)PTR_FUN_8c082c1c)
                    ((int)&puStack_130 + DAT_8c082c18,(int)&puStack_130 + DAT_8c082c14,ar6,a7);
          (*(code *)PTR_Vec3_assign_8c082be8)(ar4 + DAT_8c082c20,auStack_c0,ar6,a7);
          (*(code *)PTR_Vec3_dtor_8c082bec)(auStack_c0,0xffffffff,ar6,a7);
          (*(code *)PTR_object_dtor_delete_8c082c24)(auStack_b0,0xffffffff,ar6,a7);
        }
        iStack_104 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c082c28)
                               (ar4 + DAT_8c082bd0,PTR_CAnimBody_AdvanceFrame_wrapper_8c082c28,ar6,
                                a7);
        if (iStack_104 == 1) {
          *(undefined4 *)(DAT_8c082bc8 + ar4) = 0;
          *(undefined4 *)(DAT_8c082bcc + ar4) = 0;
          uVar7 = 0;
          uVar6 = 0;
          *(undefined4 *)(DAT_8c082c2c + ar4) = 0;
          (*(code *)PTR_vec3_clear_8c082c30)(ar4 + DAT_8c082bf4,0,ar6,a7);
          (*(code *)PTR_vec3_clear_8c082c30)(ar4 + DAT_8c082c20,uVar6,ar6,a7);
          a7 = (int *)0x0;
          ar6 = -1;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082c38)(ar4 + DAT_8c082bd0,0,0xffffffff,0)
          ;
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c082c3c)
                    (ar4 + DAT_8c082bd0,DAT_8c082bd0,ar6,a7);
          (*(code *)PTR_FUN_8c082c40)(ar4,PTR_FUN_8c082c40,ar6,a7);
          *(undefined4 *)(DAT_8c082c44 + ar4) = 0xffffffff;
        }
      }
      uStack_cc = uVar7;
      (*(code *)PTR_Vec3_dtor_8c082bec)((int)&uStack_12c + DAT_8c082c48,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c082bec)((int)&uStack_12c + DAT_8c082c00,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c082bec)((int)&uStack_12c + DAT_8c082be4,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c082bec)((int)&uStack_12c + DAT_8c082c4c,0xffffffff,ar6,a7);
      uStack_c4 = uStack_cc;
    }
    else {
      uStack_c8 = 0;
      (*(code *)PTR_Vec3_dtor_8c082610)((int)&uStack_12c + DAT_8c08260c,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c082610)((int)&uStack_12c + DAT_8c082614,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c082610)((int)&uStack_12c + DAT_8c082618,0xffffffff,ar6,a7);
      (*(code *)PTR_Vec3_dtor_8c082610)((int)&uStack_12c + DAT_8c08261c,0xffffffff,ar6,a7);
      uStack_c4 = uStack_c8;
    }
  }
  return uStack_c4;
}



/* FUN_8c082c50 @ 8c082c50 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c082c50(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *a5;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 a7;
  undefined4 uVar4;
  double in_dr0;
  float fVar6;
  double dVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined8 uStack_e4;
  int iStack_d8;
  undefined8 uStack_d4;
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [116];
  undefined4 uStack_c;
  
  uStack_c = 1;
  uVar4 = 1;
  uVar3 = **(undefined4 **)(ar5 + 4);
  a5 = PTR_DAT_8c082c94;
  (*(code *)PTR_FUN_8c082c98)(ar4,PTR_DAT_8c082c94,uVar3,ar7);
  iVar1 = *(int *)(DAT_8c082c9c + ar4);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 100) == 1) {
      uVar4 = 0;
    }
    else if (*(int *)(DAT_8c082cc0 + ar4) < 3) {
      uVar4 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c082d54)(ar4,a5,uVar3,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c082d60)
                ((int)&iStack_f4 + DAT_8c082d5c,PTR_DAT_8c082d58,uVar3,ar7);
      uVar3 = 1;
      iStack_d8 = (*(code *)PTR_FUN_8c082d64)(ar4,(int)&iStack_f4 + DAT_8c082d5c,1,ar7);
      uStack_d4 = (double)(ulonglong)CONCAT14(iStack_d8 == 0,(undefined4)uStack_d4);
      (*(code *)PTR_Vec3_dtor_8c082d68)((int)&iStack_f4 + DAT_8c082d5c,0xffffffff,uVar3,ar7);
      if (uStack_d4._4_4_ != 0) {
        a7 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 8;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082d74)
                  (ar4 + DAT_8c082d6c._4_4_,8,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c082d78)(ar4 + DAT_8c082d6c._4_4_,uVar3,uVar2,a7)
        ;
        *(int *)(DAT_8c082d7c + ar4) = *(int *)(DAT_8c082d7c + ar4) + 1;
        iStack_ec = ar4;
        uVar3 = (*(code *)PTR_rand_range_8c082d80)(ar4,5,7,a7);
        *(undefined4 *)(DAT_8c082d84 + ar4) = uVar3;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      if (*(int *)(DAT_8c082dac + ar4) < 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        a5 = (undefined *)0x16;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082db8)
                  (ar4 + DAT_8c082db0._4_4_,0x16,0xffffffff,0);
      }
      else if (*(int *)(DAT_8c082de0 + ar4) == 6) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        a5 = (undefined *)0x10;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082dec)
                  (ar4 + DAT_8c082de4._4_4_,0x10,0xffffffff,0);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        a5 = (undefined *)0x10;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082ec0)
                  (ar4 + DAT_8c082eb8._4_4_,0x10,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c082ec4)(ar4 + DAT_8c082eb8._4_4_,a5,uVar3,ar7);
      *(int *)(DAT_8c082ec8 + ar4) = *(int *)(DAT_8c082ec8 + ar4) + 1;
      iStack_f0 = ar4;
    }
    else if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      puStack_f8 = auStack_cc;
      (*(code *)PTR_FUN_8c08319c)(ar4 + 0x14,a5,uVar3,ar7);
      (*(code *)PTR_FUN_8c0831a4)(ar4,auStack_cc,uVar3,ar7);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0831a8)(auStack_cc,0xffffffff,uVar3,ar7);
      iStack_e8 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0831b0)
                            (ar4 + DAT_8c0831ac,uVar4,uVar3,ar7);
      if (iStack_e8 != 1) {
        return 1;
      }
      uVar2 = 0;
      uVar3 = 0xffffffff;
      uVar4 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0831b8)(ar4 + DAT_8c0831ac,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0831bc)(ar4 + DAT_8c0831ac,uVar4,uVar3,uVar2);
      *(undefined4 *)(DAT_8c0831c0 + ar4) = 0;
      *(undefined4 *)(DAT_8c0831c4 + ar4) = 0;
      return 0;
    }
    puStack_f8 = (undefined1 *)((int)&iStack_f4 + DAT_8c082ecc);
    (*(code *)PTR_FUN_8c082ed0)(ar4 + 0x14,a5,uVar3,ar7);
    (*(code *)PTR_FUN_8c082ed8)(ar4,(int)&iStack_f4 + DAT_8c082ecc,uVar3,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c082edc)((int)&iStack_f4 + DAT_8c082ecc,0xffffffff,uVar3,ar7);
    uStack_e4._4_4_ =
         (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c082ee0)
                   (ar4 + DAT_8c082eb8._4_4_,uVar2,uVar3,ar7);
    if (uStack_e4._4_4_ == 1) {
      *(int *)(DAT_8c082ec8 + ar4) = *(int *)(DAT_8c082ec8 + ar4) + 1;
      iStack_f4 = ar4;
      if ((*(int *)(DAT_8c082ee4 + ar4) < 3) || (5 < *(int *)(DAT_8c082ee4 + ar4))) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 8;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0830a0)(ar4 + DAT_8c08309c,8,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0830a4)(ar4 + DAT_8c08309c,uVar2,uVar3,ar7);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0x14;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c082ec0)
                  (ar4 + DAT_8c082eb8._4_4_,0x14,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c082ec4)
                  (ar4 + DAT_8c082eb8._4_4_,uVar2,uVar3,ar7);
      }
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0830a8)(ar4 + DAT_8c08309c,uVar2,uVar3,ar7);
    fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
    dVar5 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_e4 = (double)CONCAT44(uStack_e4._4_4_,fVar6);
      dVar5 = uStack_e4;
    }
    uStack_e4 = dVar5;
    if (in_FPSCR_PR == '\0') {
      iVar1 = (int)fVar6;
    }
    else {
      iVar1 = (int)in_dr0;
    }
    if (iVar1 == 0x25) {
      ar7 = *(undefined4 *)(ar5 + 0x18);
      uVar3 = **(undefined4 **)(ar5 + 4);
      (*(code *)PTR_FUN_8c0830ac)(ar4,0x1b,uVar3,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0830b0,*(undefined4 *)(**(int **)(ar5 + 4) + 8));
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c0830b4,DAT_8c0830b0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - SUB84(dVar5,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,(int)((ulonglong)dVar5 >> 0x20));
        dVar5 = uStack_d4;
      }
      uStack_d4 = dVar5;
      puStack_f8 = (undefined1 *)((int)&iStack_f4 + DAT_8c0830b4);
      (*(code *)PTR_Vec3_scale_8c0830b8)(ar4 + 0x14,&uStack_d4,uVar3,ar7);
      puStack_f8 = (undefined1 *)((int)&iStack_f4 + DAT_8c0830bc);
      (*(code *)PTR_Vec3_scale_8c0830b8)((int)&puStack_f8 + DAT_8c0830c4,PTR_DAT_8c0830c0,uVar3,ar7)
      ;
      (*(code *)PTR_Vec3_ctor_copy_8c0830cc)
                ((int)&iStack_f4 + DAT_8c0830c8,(int)&iStack_f4 + DAT_8c0830bc,uVar3,ar7);
      (*(code *)PTR_Vec3_dtor_8c0830d0)((int)&iStack_f4 + DAT_8c0830bc,0xffffffff,uVar3,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0830d0)((int)&iStack_f4 + DAT_8c0830b4,0xffffffff,uVar3,ar7);
      puStack_f8 = auStack_80;
      (*(code *)PTR_FUN_8c0830dc)((int)&puStack_f8 + DAT_8c0830d4._4_4_,uVar2,uVar3,ar7);
      (*(code *)PTR_Vec3_assign_8c0830e0)((int)&iStack_f4 + DAT_8c0830c8,auStack_80,uVar3,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0830d0)(auStack_80,0xffffffff,uVar3,ar7);
      (*(code *)PTR_Vec3_ctor_xyz_8c0830ec)(auStack_90,uVar2,uVar3,ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c0830f0)
                (auStack_9c,*(undefined4 *)(*(int *)(ar5 + 4) + 4),uVar3,ar7);
      puStack_f8 = auStack_ac;
      (*(code *)PTR_FUN_8c0830f4)(auStack_90,auStack_9c,uVar3,ar7);
      puStack_f8 = auStack_bc;
      (*(code *)PTR_Vec3_add_8c0830f8)(**(undefined4 **)(ar5 + 4),auStack_ac,uVar3,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c0830cc)((int)&iStack_f4 + DAT_8c0830fc,auStack_bc,uVar3,ar7);
      (*(code *)PTR_Vec3_dtor_8c0830d0)(auStack_bc,0xffffffff,uVar3,ar7);
      (*(code *)PTR_Vec3_dtor_8c0830d0)(auStack_ac,0xffffffff,uVar3,ar7);
      (*(code *)PTR_object_dtor_delete_8c083100)(auStack_9c,0xffffffff,uVar3,ar7);
      (*(code *)PTR_Vec3_dtor_8c0830d0)(auStack_90,0xffffffff,uVar3,ar7);
      iVar1 = (int)&iStack_f4 + DAT_8c0830c8;
      (*(code *)PTR_FUN_8c083108)
                (*(undefined4 *)(ar5 + 0x18),(int)&iStack_f4 + DAT_8c0830fc,iVar1,ar7);
      (*(code *)PTR_Vec3_dtor_8c0830d0)((int)&iStack_f4 + DAT_8c0830fc,0xffffffff,iVar1,ar7);
      (*(code *)PTR_Vec3_dtor_8c0830d0)((int)&iStack_f4 + DAT_8c0830c8,0xffffffff,iVar1,ar7);
    }
    (*(code *)PTR_FUN_8c083110)(ar4,PTR_DAT_8c08310c,**(undefined4 **)(ar5 + 4),ar7);
  }
  return uVar4;
}



/* FUN_8c0831c8 @ 8c0831c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0831c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int a5;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined8 in_dr0;
  double dVar8;
  int iVar9;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_bc;
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
  undefined8 uStack_8c;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [52];
  
  uVar5 = 1;
  if (*(int *)(DAT_8c0831ec + ar4) < 3) {
    uVar5 = 0;
  }
  else {
    uStack_bc = ar6;
    switch(*(undefined4 *)(DAT_8c083210 + ar4)) {
    case 0:
      (*(code *)PTR_FUN_8c08331c)(ar4 + 0x14,ar5,ar6,ar7);
      fVar7 = (float)in_dr0;
      (*(code *)PTR_Vec3_assign_8c083320)(ar4 + 0x54,(int)&uStack_bc + DAT_8c083318,ar6,ar7);
      ar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c083324)((int)&uStack_bc + DAT_8c083318,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(ar4 + 0x5c);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x5c);
      }
      if (in_FPSCR_PR == '\0' && fVar7 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(DAT_8c083328,*(undefined4 *)(ar4 + 0x5c));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x5c);
          dVar8 = (double)CONCAT44(DAT_8c08332c,DAT_8c083328);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        iStack_94 = ar4;
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x5c) = fVar7;
        }
        else {
          *(undefined8 *)(ar4 + 0x5c) = in_xd0;
        }
      }
      *(int *)(DAT_8c08332c + ar4) = *(int *)(DAT_8c08332c + ar4) + 1;
      iStack_98 = ar4;
    case 1:
      (*(code *)PTR_FUN_8c083330)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c083338)((int)&uStack_bc + DAT_8c083334,ar4 + 0x54,ar6,ar7);
      uVar2 = 0;
      iStack_6c = (*(code *)PTR_FUN_8c08333c)(ar4,(int)&uStack_bc + DAT_8c083334,0,ar7);
      uStack_68 = (uint)(iStack_6c == 0);
      (*(code *)PTR_Vec3_dtor_8c083324)((int)&uStack_bc + DAT_8c083334,0xffffffff,uVar2,ar7);
      if (uStack_68 != 0) {
        *(int *)(DAT_8c08332c + ar4) = *(int *)(DAT_8c08332c + ar4) + 1;
        *(undefined4 *)(DAT_8c083340 + ar4) = 0;
        uVar4 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0;
        iStack_9c = ar4;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c083348)(ar4 + DAT_8c083344,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08334c)(ar4 + DAT_8c083344,uVar2,uVar3,uVar4);
      }
      break;
    case 2:
      (*(code *)PTR_FUN_8c083404)(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c083408,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar8 = (double)CONCAT44(PTR_Vec3_ctor_copy_8c08340c,DAT_8c083408);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = (float)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) * fVar7);
      }
      else {
        dVar8 = dVar8 * dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(dVar8,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      iStack_a0 = ar4;
      (*(code *)PTR_Vec3_ctor_copy_8c08340c)(auStack_44,ar4 + 0x54,ar6,ar7);
      (*(code *)PTR_FUN_8c083414)(ar4,auStack_44,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c083418)(auStack_44,0xffffffff,ar6,ar7);
      iStack_70 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c083420)
                            (ar4 + DAT_8c08341c,uVar2,ar6,ar7);
      if (iStack_70 == 1) {
        uVar3 = 6;
        uVar2 = 4;
        uStack_74 = (*(code *)PTR_rand_range_8c083424)(ar4,4,6,ar7);
        *(undefined4 *)(DAT_8c083428 + ar4) = uStack_74;
        uStack_78 = (*(code *)PTR_get_field_94_02aaa4_8c08342c)(uStack_bc,uVar2,uVar3,ar7);
        iStack_a4 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c083430)(uStack_78,5,uVar3,ar7);
        if ((iStack_a4 == 3) || (iStack_a4 == 8)) {
          iVar6 = 2;
        }
        else {
          iVar6 = (*(code *)PTR_rand_range_8c083470)(ar4,0,2,ar7);
          iStack_7c = iVar6;
        }
        if (*(int *)(DAT_8c083474 + ar4) < 6) {
          uVar3 = 0;
          uVar2 = 0xffffffff;
          a5 = iVar6 + 0x13;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c083480)
                    (ar4 + DAT_8c08347c,a5,0xffffffff,0);
        }
        else if (*(int *)(DAT_8c0834a8 + ar4) == 6) {
          uVar3 = 0;
          uVar2 = 0xffffffff;
          a5 = iVar6 + 0x25;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0834b4)
                    (ar4 + DAT_8c0834ac._4_4_,a5,0xffffffff,0);
        }
        else {
          uVar3 = 0;
          uVar2 = 0xffffffff;
          a5 = iVar6 + 0x2f;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c083518)
                    (ar4 + DAT_8c083510._4_4_,a5,0xffffffff,0);
        }
        if (iVar6 == 1) {
          *(int *)(DAT_8c08351c + ar4) = *(int *)(DAT_8c08351c + ar4) + 2;
          iStack_a8 = ar4;
          (*(code *)PTR_FUN_8c083528)(ar4,a5,uVar2,uVar3);
          iVar9 = (int)((ulonglong)dVar8 >> 0x20);
          iStack_80 = iVar9;
          if (in_FPSCR_SZ != '\0') {
            iStack_80 = SUB84(dVar8,0);
            iStack_7c = iVar9;
          }
          (*(code *)PTR_FUN_8c08352c)(ar4 + DAT_8c083510._4_4_,a5,uVar2,uVar3);
        }
        else {
          *(int *)(DAT_8c083580 + ar4) = *(int *)(DAT_8c083580 + ar4) + 1;
          iStack_ac = ar4;
          (*(code *)PTR_FUN_8c08358c)(ar4,a5,uVar2,uVar3);
          iVar9 = (int)((ulonglong)dVar8 >> 0x20);
          iStack_84 = iVar9;
          if (in_FPSCR_SZ != '\0') {
            iStack_84 = SUB84(dVar8,0);
            iStack_80 = iVar9;
          }
          (*(code *)PTR_FUN_8c083594)(ar4 + DAT_8c083590,a5,uVar2,uVar3);
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c083598)(ar4 + DAT_8c083590,a5,uVar2,uVar3);
        *(int *)(DAT_8c08359c + ar4) = iVar6 + 0xb;
      }
      break;
    case 3:
      (*(code *)PTR_FUN_8c083654)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c083658)(auStack_54,ar4 + 0x54,ar6,ar7);
      (*(code *)PTR_FUN_8c083660)(ar4,auStack_54,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c083664)(auStack_54,0xffffffff,ar6,ar7);
      uStack_8c._4_4_ = (*(code *)PTR_FUN_8c083674)(ar4 + DAT_8c083670,uVar2,ar6,ar7);
      if (uStack_8c._4_4_ == 7) {
        (*(code *)PTR_FUN_8c083680)(ar4,uVar2,ar6,ar7);
        uVar1 = in_dr0;
        if (in_FPSCR_SZ == '\0') {
          uStack_8c = CONCAT44(uStack_8c._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
          uVar1 = uStack_8c;
        }
        uStack_8c = uVar1;
        (*(code *)PTR_FUN_8c083684)(ar4 + DAT_8c083670,uVar2,ar6,ar7);
        iStack_b4 = *(int *)(DAT_8c083688 + ar4) + -1;
        *(int *)(DAT_8c083688 + ar4) = iStack_b4;
        if (iStack_b4 < 1) {
          *(int *)(DAT_8c08368c + ar4) = *(int *)(DAT_8c08368c + ar4) + 1;
          iStack_b8 = ar4;
          iStack_b0 = ar4;
          (*(code *)PTR_FUN_8c083684)(ar4 + DAT_8c083670,uVar2,ar6,ar7);
        }
      }
      break;
    case 4:
      (*(code *)PTR_FUN_8c083740)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c083744)(auStack_64,ar4 + 0x54,ar6,ar7);
      (*(code *)PTR_FUN_8c08374c)(ar4,auStack_64,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c083750)(auStack_64,0xffffffff,ar6,ar7);
      iStack_90 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c083758)
                            (ar4 + DAT_8c083754,uVar2,ar6,ar7);
      if (iStack_90 == 1) {
        *(undefined4 *)(DAT_8c08375c + ar4) = 0;
        *(undefined4 *)(DAT_8c083760 + ar4) = 0;
        uVar5 = 0;
        *(undefined4 *)(DAT_8c083764 + ar4) = 0;
        uVar4 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08376c)(ar4 + DAT_8c083754,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c083770)(ar4 + DAT_8c083754,uVar2,uVar3,uVar4);
        *(undefined4 *)(DAT_8c083774 + ar4) = 0xffffffff;
        (*(code *)PTR_FUN_8c083778)(ar4,uVar2,uVar3,uVar4);
        (*(code *)PTR_FUN_8c08377c)(ar4 + DAT_8c083754,uVar2,uVar3,uVar4);
      }
    }
  }
  return uVar5;
}



/* FUN_8c083780 @ 8c083780 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c083780(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fr1;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  undefined *puVar7;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  uVar3 = 1;
  iVar1 = *(int *)(DAT_8c083984 + ar4);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c08398c)(ar4 + DAT_8c083988,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c083990 + ar4) = 1;
      *(int *)(DAT_8c083984 + ar4) = *(int *)(DAT_8c083984 + ar4) + 1;
      (*(code *)PTR_Vec3_set_xyz_8c083998)(auStack_18,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c08399c)(ar4 + 0x14,auStack_18,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0839a4)(ar4 + DAT_8c0839a0,auStack_28,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0839a8)(auStack_28,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c0839ac)(auStack_18,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
      }
    }
  }
  else if (iVar1 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0839b0,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = (double)CONCAT44(DAT_8c0839b4,DAT_8c0839b0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      puVar4 = *(undefined **)(ar4 + 0x28);
      puVar7 = DAT_8c0839b4;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      puVar4 = DAT_8c0839b4;
      puVar7 = PTR_Vec3_ctor_copy_8c0839b8;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar7 < (float)puVar4) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(ar4 + 0x28) = DAT_8c0839b4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(PTR_Vec3_ctor_copy_8c0839b8,DAT_8c0839b4);
      }
    }
    (*(code *)PTR_Vec3_ctor_copy_8c0839b8)(auStack_38,ar4 + DAT_8c0839a0,ar6,ar7);
    a6 = 1;
    iVar1 = (*(code *)PTR_FUN_8c0839bc)(ar4,auStack_38,1,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0839a8)(auStack_38,0xffffffff,a6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_8c083990 + ar4) = 1;
      *(int *)(DAT_8c083984 + ar4) = *(int *)(DAT_8c083984 + ar4) + 1;
      (*(code *)PTR_Vec3_set_xyz_8c083998)(auStack_44,uVar2,a6,ar7);
      (*(code *)PTR_FUN_8c08399c)(ar4 + 0x14,auStack_44,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0839a4)(ar4 + DAT_8c0839a0,auStack_54,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0839a8)(auStack_54,0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c0839ac)(auStack_44,0xffffffff,a6,ar7);
    }
  }
  else if (iVar1 == 2) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0839b0,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = (double)CONCAT44(DAT_8c0839b4,DAT_8c0839b0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      puVar4 = *(undefined **)(ar4 + 0x28);
      puVar7 = DAT_8c0839b4;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      puVar4 = DAT_8c0839b4;
      puVar7 = PTR_Vec3_ctor_copy_8c0839b8;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar7 < (float)puVar4) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(ar4 + 0x28) = DAT_8c0839b4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = CONCAT44(PTR_Vec3_ctor_copy_8c0839b8,DAT_8c0839b4);
      }
    }
    (*(code *)PTR_Vec3_ctor_copy_8c0839b8)(auStack_64,ar4 + DAT_8c0839a0,ar6,ar7);
    uVar2 = 1;
    iVar1 = (*(code *)PTR_FUN_8c0839bc)(ar4,auStack_64,1,ar7);
    (*(code *)PTR_Vec3_dtor_8c0839a8)(auStack_64,0xffffffff,uVar2,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_8c083990 + ar4) = 0;
      *(undefined4 *)(DAT_8c083984 + ar4) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* FUN_8c0839c0 @ 8c0839c0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c083bbc) */
/* WARNING: Removing unreachable block (ram,0x8c083a66) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c0839c0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 a7;
  int iVar2;
  uint uVar3;
  undefined4 in_fr1;
  double dVar4;
  undefined8 uVar5;
  undefined4 in_fr3;
  double dVar6;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  int iStack_c4;
  uint uStack_c0;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [80];
  
  uVar3 = 1;
  iStack_c4 = (**(code **)(DAT_8c083d04 + **(int **)(ar5 + 0x18)))
                        (*(int **)(ar5 + 0x18),ar5,ar6,ar7);
  iVar2 = iStack_c4 + 4;
  (*(code *)PTR_Vec3_ctor_copy_8c083d0c)((int)&uStack_dc + DAT_8c083d08,iVar2,ar6,ar7);
  if (*(int *)(DAT_8c083d10 + ar4) == 0) {
    iVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c083d18)(ar4 + DAT_8c083d14,iVar2,ar6,ar7)
    ;
    uStack_cc = CONCAT44(iVar2,(undefined4)uStack_cc);
    if (iVar2 == 1) {
      a7 = 0;
      a6 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c083d20)(ar4 + DAT_8c083d14,0,0xffffffff,0);
      *(int *)(DAT_8c083d10 + ar4) = *(int *)(DAT_8c083d10 + ar4) + 1;
      uVar1 = **(undefined4 **)(ar5 + 4);
      uStack_dc._4_4_ = ar4;
      (*(code *)PTR_Vec3_assign_8c083d28)(ar4 + DAT_8c083d24,uVar1,a6,a7);
      *(undefined4 *)(DAT_8c083d2c + ar4) = 1;
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c083d30,in_fr1);
      }
      else {
        uVar5 = CONCAT44(DAT_8c083d34,DAT_8c083d30);
      }
      (*(code *)PTR_Vec3_set_xyz_8c083d38)((int)&uStack_dc + DAT_8c083d34,uVar1,a6,a7);
      puStack_e0 = (undefined1 *)((int)&uStack_dc + DAT_8c083d3c);
      (*(code *)PTR_FUN_8c083d44)(PTR_DAT_8c083d40,(int)&puStack_e0 + DAT_8c083d14,a6,a7);
      puStack_e0 = (undefined1 *)((int)&uStack_dc + DAT_8c083d48);
      (*(code *)PTR_Vec3_scale_8c083d50)((int)&puStack_e0 + DAT_8c083d4c,ar4 + 0x48,a6,a7);
      puStack_e0 = auStack_60;
      (*(code *)PTR_Vec3_scale_8c083d50)((int)&puStack_e0 + DAT_8c083d58,PTR_DAT_8c083d54,a6,a7);
      puStack_e0 = auStack_70;
      (*(code *)PTR_Vec3_add_8c083d60)(ar4 + DAT_8c083d24,(int)&puStack_e0 + DAT_8c083d5c,a6,a7);
      (*(code *)PTR_Vec3_assign_8c083d28)(ar4 + 0x54,auStack_70,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c083d64)(auStack_70,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c083d64)(auStack_60,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c083d64)((int)&uStack_dc + DAT_8c083d48,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c083d64)((int)&uStack_dc + DAT_8c083d3c,0xffffffff,a6,a7);
      (*(code *)PTR_object_dtor_delete_8c083d68)((int)&uStack_dc + DAT_8c083d34,0xffffffff,a6,a7);
      (*(code *)PTR_FUN_8c083d6c)(ar4 + 0x54,(int)&uStack_dc + DAT_8c083d08,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_cc = CONCAT44(uStack_cc._4_4_,uVar1);
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar1);
      }
      else {
        uStack_cc = uVar5;
        uVar5 = *(undefined8 *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)((int)&uStack_dc + DAT_8c083d70),in_fr3);
          dVar4 = (double)CONCAT44(DAT_8c083d74,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar6 = *(double *)((int)&uStack_dc + DAT_8c083d70);
          dVar4 = (double)CONCAT44(PTR_DAT_8c083d78,DAT_8c083d74);
        }
        if (in_FPSCR_PR == '\0') {
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                   SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar6,0)
                                  );
        }
        else {
          dVar6 = dVar6 - dVar4 * dVar4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar6 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar6;
        }
      }
      puStack_e0 = PTR_DAT_8c083d78;
      ar7 = *(undefined4 *)(ar5 + 0x18);
      ar6 = *(int *)(ar5 + 0xc);
      (*(code *)PTR_FUN_8c083d7c)(ar4,ar4 + 0x54,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  else if (*(int *)(DAT_8c083d10 + ar4) == 1) {
    ar6 = ar4 + 0x54;
    uVar1 = **(undefined4 **)(ar5 + 4);
    iVar2 = (*(code *)PTR_pure_virtual_stub_8c083d84)(ar4,uVar1,ar6,ar7);
    uStack_d4 = CONCAT44(iVar2,(undefined4)uStack_d4);
    if (iVar2 == 0) {
      *(int *)(DAT_8c083d2c + ar4) = *(int *)(DAT_8c083d2c + ar4) + 1;
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(DAT_8c083d30,in_fr1);
      }
      else {
        uVar5 = CONCAT44(DAT_8c083d34,DAT_8c083d30);
      }
      uStack_dc._0_4_ = ar4;
      (*(code *)PTR_Vec3_set_xyz_8c083d38)(auStack_7c,uVar1,ar6,ar7);
      puStack_e0 = auStack_8c;
      (*(code *)PTR_FUN_8c083d44)(PTR_DAT_8c083d40,auStack_7c,ar6,ar7);
      puStack_e0 = auStack_9c;
      (*(code *)PTR_Vec3_scale_8c083d50)(auStack_8c,ar4 + 0x48,ar6,ar7);
      puStack_e0 = auStack_ac;
      (*(code *)PTR_Vec3_scale_8c083d50)(auStack_9c,PTR_DAT_8c083d88,ar6,ar7);
      puStack_e0 = auStack_bc;
      (*(code *)PTR_Vec3_add_8c083d60)(ar4 + DAT_8c083d24,auStack_ac,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c083d28)(ar4 + 0x54,auStack_bc,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c083d64)(auStack_bc,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c083d64)(auStack_ac,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c083d64)(auStack_9c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c083d64)(auStack_8c,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c083d68)(auStack_7c,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      bVar7 = *(int *)(DAT_8c083d2c + ar4) < 9;
      if (!bVar7) {
        *(undefined4 *)(DAT_8c083d2c + ar4) = 0;
        *(undefined4 *)(DAT_8c083d10 + ar4) = 0;
      }
      uVar3 = (uint)bVar7;
      (*(code *)PTR_FUN_8c083d6c)(ar4 + 0x54,(int)&uStack_dc + DAT_8c083d08,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_d4 = CONCAT44(uStack_d4._4_4_,uVar1);
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar1);
      }
      else {
        uStack_d4 = uVar5;
        uVar5 = *(undefined8 *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)((int)&uStack_dc + DAT_8c083d70),in_fr3);
          dVar4 = (double)CONCAT44(DAT_8c083d74,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar6 = *(double *)((int)&uStack_dc + DAT_8c083d70);
          dVar4 = (double)CONCAT44(PTR_DAT_8c083d78,DAT_8c083d74);
        }
        if (in_FPSCR_PR == '\0') {
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                   SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar6,0)
                                  );
        }
        else {
          dVar6 = dVar6 - dVar4 * dVar4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar6 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar6;
        }
      }
      puStack_e0 = PTR_DAT_8c083d78;
      ar7 = *(undefined4 *)(ar5 + 0x18);
      ar6 = *(int *)(ar5 + 0xc);
      (*(code *)PTR_FUN_8c083d7c)(ar4,ar4 + 0x54,ar6,ar7);
    }
  }
  uStack_c0 = uVar3;
  (*(code *)PTR_Vec3_dtor_8c083d64)((int)&uStack_dc + DAT_8c083d08,0xffffffff,ar6,ar7);
  return uStack_c0;
}



/* FUN_8c083d8c @ 8c083d8c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c083d8c(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r11;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  undefined *puVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined *puVar9;
  float fVar10;
  double dVar7;
  double dVar8;
  undefined4 in_fr3;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar11;
  undefined4 in_PR;
  int iVar12;
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
  *(undefined4 *)(puVar4 + -0xc) = 0;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = in_PR;
  uVar3 = 1;
  (*(code *)PTR_Vec3_ctor_zero_8c083dd8)(puVar4 + DAT_8c083dd4 + -0x138,ar5,ar6,ar7);
  switch(*(undefined4 *)(DAT_8c083ddc + ar4)) {
  case 0:
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c083e38)
                      (ar4 + DAT_8c083e34,DAT_8c083e34,ar6,ar7);
    *(undefined4 *)(puVar4 + -0xe8) = uVar2;
    ar6 = *(int *)(puVar4 + -0xe8);
    if (ar6 == 1) {
      if (in_FPSCR_SZ == '\0') {
        puVar5 = *(undefined **)**(undefined4 **)(ar5 + 4);
        puVar9 = DAT_8c083e3c;
      }
      else {
        in_xd0 = *(undefined8 *)**(undefined4 **)(ar5 + 4);
        puVar5 = DAT_8c083e3c;
        puVar9 = PTR_DAT_8c083e40;
      }
      if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar9) {
        *(undefined1 **)(puVar4 + -0x13c) = puVar4 + DAT_8c083f5c + -0x138;
        (*(code *)PTR_Vec3_scale_8c083f68)(PTR_DAT_8c083f64,PTR_DAT_8c083f60,1,ar7);
        (*(code *)PTR_Vec3_assign_8c083f6c)(ar4 + 0x54,puVar4 + DAT_8c083f5c + -0x138,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c083f70)(puVar4 + DAT_8c083f5c + -0x138,0xffffffff,ar6,ar7);
      }
      else {
        (*(code *)PTR_Vec3_assign_8c083e44)(ar4 + 0x54,PTR_DAT_8c083e40,1,ar7);
      }
      ar7 = 0;
      uVar2 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c083f7c)(ar4 + DAT_8c083f78,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c083f80)(ar4 + DAT_8c083f78,DAT_8c083f78,uVar2,ar7)
      ;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),puVar5);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(-(float)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = -dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar4 + -0xdc) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(puVar4 + -0xdc) = dVar7;
      }
      *(undefined1 **)(puVar4 + -0x13c) = puVar4 + DAT_8c083f84 + -0x138;
      (*(code *)PTR_Vec3_scale_8c083f68)(ar4 + 0x54,puVar4 + -0xdc,uVar2,ar7);
      *(undefined1 **)(puVar4 + -0x13c) = puVar4 + DAT_8c083f88 + -0x138;
      (*(code *)PTR_Vec3_scale_8c083f68)(puVar4 + DAT_8c083f90 + -0x13c,PTR_DAT_8c083f8c,uVar2,ar7);
      *(undefined1 **)(puVar4 + -0x13c) = puVar4 + DAT_8c083f94 + -0x138;
      (*(code *)PTR_Vec3_add_8c083f9c)
                (**(undefined4 **)(ar5 + 4),puVar4 + DAT_8c083f98 + -0x13c,uVar2,ar7);
      ar6 = DAT_8c083fa0;
      (*(code *)PTR_Vec3_assign_8c083f6c)
                (ar4 + DAT_8c083fa0,puVar4 + DAT_8c083f94 + -0x138,DAT_8c083fa0,ar7);
      (*(code *)PTR_Vec3_dtor_8c083f70)(puVar4 + DAT_8c083f94 + -0x138,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c083f70)(puVar4 + DAT_8c083f88 + -0x138,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c083f70)(puVar4 + DAT_8c083f84 + -0x138,0xffffffff,ar6,ar7);
      *(int *)(puVar4 + -0x114) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c083fa8,
                                 *(undefined4 *)(*(int *)(puVar4 + -0x114) + DAT_8c083fa4));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x114) + DAT_8c083fa4);
        dVar7 = (double)CONCAT44(DAT_8c083fac,DAT_8c083fa8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar4 + -0x114) + DAT_8c083fa4) = fVar6;
      }
      else {
        *(undefined8 *)(*(int *)(puVar4 + -0x114) + DAT_8c083fa4) = in_xd0;
      }
      *(int *)(puVar4 + -0x118) = ar4;
      *(int *)(DAT_8c083fac + *(int *)(puVar4 + -0x118)) =
           *(int *)(DAT_8c083fac + *(int *)(puVar4 + -0x118)) + 1;
      *(undefined4 *)(DAT_8c083fb0 + ar4) = 0;
    }
    break;
  case 1:
    (*(code *)PTR_Vec3_ctor_copy_8c084024)(puVar4 + DAT_8c084020 + -0x138,ar4 + 0x54,ar6,ar7);
    ar6 = 1;
    uVar2 = (*(code *)PTR_FUN_8c084028)(ar4,puVar4 + DAT_8c084020 + -0x138,1,ar7);
    *(undefined4 *)(puVar4 + -0xec) = uVar2;
    *(uint *)(puVar4 + -0xe0) = (uint)(*(int *)(puVar4 + -0xec) == 0);
    (*(code *)PTR_Vec3_dtor_8c08402c)(puVar4 + DAT_8c084020 + -0x138,0xffffffff,ar6,ar7);
    if (*(int *)(puVar4 + -0xe0) != 0) {
      if (*(int *)(DAT_8c084030 + ar4) == 6) {
        ar7 = 0;
        ar6 = -1;
        uVar2 = 0x23;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08403c)
                  (ar4 + DAT_8c084034._4_4_,0x23,0xffffffff,0);
      }
      else {
        ar7 = 0;
        ar6 = -1;
        uVar2 = 0x2d;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c084088)
                  (ar4 + DAT_8c084080._4_4_,0x2d,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08408c)(ar4 + DAT_8c084080._4_4_,uVar2,ar6,ar7);
      *(undefined4 *)(DAT_8c084090 + ar4) = 0;
      *(int *)(puVar4 + -0x11c) = ar4;
      *(int *)(DAT_8c084094 + *(int *)(puVar4 + -0x11c)) =
           *(int *)(DAT_8c084094 + *(int *)(puVar4 + -0x11c)) + 1;
    }
    break;
  case 2:
    *(undefined1 **)(puVar4 + -0x13c) = puVar4 + DAT_8c08416c + -0x138;
    (*(code *)PTR_Vec3_sub_8c084174)(**(undefined4 **)(ar5 + 4),ar4 + DAT_8c084170,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c08417c)
              (puVar4 + DAT_8c084178 + -0x138,puVar4 + DAT_8c08416c + -0x138,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c084180)(puVar4 + DAT_8c08416c + -0x138,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c084188)
              (puVar4 + DAT_8c084184 + -0x138,puVar4 + DAT_8c084178 + -0x138,ar6,ar7);
    (*(code *)PTR_FUN_8c084190)(ar4,puVar4 + DAT_8c084184 + -0x138,ar6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c084180)(puVar4 + DAT_8c084184 + -0x138,0xffffffff,ar6,ar7);
    (*(code *)PTR_FUN_8c084194)(ar4,uVar2,ar6,ar7);
    ar6 = **(int **)(ar5 + 4);
    uVar2 = **(undefined4 **)(ar5 + 4);
    (*(code *)PTR_FUN_8c084198)(ar4,uVar2,ar6,ar7);
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0841a0)(ar4 + DAT_8c08419c,uVar2,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0841a4)(ar4 + DAT_8c08419c,uVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0xf0) = (int)((ulonglong)in_dr0 >> 0x20);
      fVar6 = *(float *)(puVar4 + -0xf0);
      fVar10 = DAT_8c0841a8;
    }
    else {
      *(undefined8 *)(puVar4 + -0xf0) = in_dr0;
      fVar6 = DAT_8c0841a8;
      fVar10 = _DAT_8c0841ac;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar6) {
      *(int *)(puVar4 + -0x120) = ar4;
      *(int *)((int)_DAT_8c0841ac + *(int *)(puVar4 + -0x120)) =
           *(int *)((int)_DAT_8c0841ac + *(int *)(puVar4 + -0x120)) + 1;
      ar6 = 6;
      uVar2 = (*(code *)PTR_rand_range_8c0841b0)(ar4,4,6,ar7);
      *(undefined4 *)(puVar4 + -0xf4) = uVar2;
      *(undefined4 *)(DAT_8c0841b4 + ar4) = *(undefined4 *)(puVar4 + -0xf4);
    }
    break;
  case 3:
    *(undefined1 **)(puVar4 + -0x13c) = puVar4 + DAT_8c08429c + -0x138;
    (*(code *)PTR_Vec3_sub_8c0842a4)(**(undefined4 **)(ar5 + 4),ar4 + DAT_8c0842a0,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0842ac)
              (puVar4 + DAT_8c0842a8 + -0x138,puVar4 + DAT_8c08429c + -0x138,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0842b0)(puVar4 + DAT_8c08429c + -0x138,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c0842b8)
              (puVar4 + DAT_8c0842b4 + -0x138,puVar4 + DAT_8c0842a8 + -0x138,ar6,ar7);
    (*(code *)PTR_FUN_8c0842c0)(ar4,puVar4 + DAT_8c0842b4 + -0x138,ar6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0842b0)(puVar4 + DAT_8c0842b4 + -0x138,0xffffffff,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c0842c8)(ar4 + DAT_8c0842c4,uVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0xf8) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar4 + -0xf8);
    }
    else {
      *(undefined8 *)(puVar4 + -0xf8) = in_dr0;
    }
    if (in_FPSCR_PR == '\0') {
      iVar12 = (int)in_fr15;
    }
    else {
      iVar12 = (int)(double)CONCAT44(in_fr14,in_fr15);
    }
    if ((iVar12 == DAT_8c0842cc) && (*(int *)(DAT_8c0842d0 + ar4) < 1)) {
      *(int *)(puVar4 + -0x124) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c0842d4,*(undefined4 *)(*(int *)(puVar4 + -0x124) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x124) + 0x28);
        dVar7 = (double)CONCAT44(DAT_8c0842d8,DAT_8c0842d4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar4 + -0x124) + 0x28) = fVar6;
        fVar6 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)(puVar4 + -0x124) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
        }
      }
      uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c0842e4)
                        (ar4 + DAT_8c0842c4,uVar2,ar6,ar7);
      *(undefined4 *)(puVar4 + -0xfc) = uVar1;
      if (*(int *)(puVar4 + -0xfc) == 7) {
        ar6 = 6;
        uVar2 = 4;
        uVar1 = (*(code *)PTR_rand_range_8c0842e8)(ar4,4,6,ar7);
        *(undefined4 *)(puVar4 + -0x100) = uVar1;
        *(undefined4 *)(DAT_8c0842d0 + ar4) = *(undefined4 *)(puVar4 + -0x100);
      }
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c08445c)(ar4 + DAT_8c084458,uVar2,ar6,ar7);
      *(undefined4 *)(puVar4 + -0x104) = uVar1;
      if (*(int *)(puVar4 + -0x104) == 7) {
        (*(code *)PTR_FUN_8c084468)(ar4,uVar2,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar4 + -0x108) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(puVar4 + -0x108) = in_dr0;
        }
        (*(code *)PTR_FUN_8c08446c)(ar4 + DAT_8c084458,uVar2,ar6,ar7);
        *(int *)(puVar4 + -0x128) = ar4;
        *(int *)(DAT_8c084470 + *(int *)(puVar4 + -0x128)) =
             *(int *)(DAT_8c084470 + *(int *)(puVar4 + -0x128)) + -1;
      }
    }
    (*(code *)PTR_FUN_8c084474)(ar4,uVar2,ar6,ar7);
    *(int *)(puVar4 + -300) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c084478,*(undefined4 *)(*(int *)(puVar4 + -300) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -300) + 0x28);
      dVar7 = (double)CONCAT44(DAT_8c08447c,DAT_8c084478);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar4 + -300) + 0x28) = fVar6;
      fVar6 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(*(int *)(puVar4 + -300) + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar6;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08447c,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c084480,DAT_8c08447c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
    }
    else {
      bVar11 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar11) {
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c084480,SUB84(dVar7,0));
      }
      else {
        dVar7 = (double)CONCAT44(DAT_8c084484,DAT_8c084480);
      }
      if (in_FPSCR_PR == '\0') {
        bVar11 = in_fr15 < (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        bVar11 = (double)CONCAT44(in_fr14,in_fr15) < dVar7;
      }
      if (!bVar11) goto LAB_8c08437e;
LAB_8c08438e:
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c08448c,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar7 = (double)CONCAT44(DAT_8c084490,DAT_8c08448c);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar7,0)) {
        *(int *)(puVar4 + -0x130) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c084490,*(undefined4 *)(*(int *)(puVar4 + -0x130) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x130) + 0x28);
          dVar7 = (double)CONCAT44(PTR_Vec3_scale_8c084494,DAT_8c084490);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) - fVar6);
        }
        else {
          dVar7 = dVar7 - dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)(puVar4 + -0x130) + 0x28) = SUB84(dVar7,0);
        }
        else {
          *(undefined8 *)(*(int *)(puVar4 + -0x130) + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08437e:
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c084484,SUB84(dVar7,0));
      }
      else {
        dVar7 = (double)CONCAT44(DAT_8c084488,DAT_8c084484);
      }
      if (in_FPSCR_PR == '\0') {
        bVar11 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
      }
      else {
        bVar11 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar11) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c084488,SUB84(dVar7,0));
        }
        else {
          dVar7 = (double)CONCAT44(DAT_8c08448c,DAT_8c084488);
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = in_fr15 < (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          bVar11 = (double)CONCAT44(in_fr14,in_fr15) < dVar7;
        }
        if (bVar11) goto LAB_8c08438e;
      }
    }
    *(undefined1 **)(puVar4 + -0x13c) = puVar4 + -0xc4;
    (*(code *)PTR_Vec3_scale_8c084494)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
    *(undefined1 **)(puVar4 + -0x13c) = puVar4 + -0xd4;
    (*(code *)PTR_Vec3_add_8c084498)(**(undefined4 **)(ar5 + 4),puVar4 + -0xc4,ar6,ar7);
    (*(code *)PTR_FUN_8c0844a0)(puVar4 + -0xd4,ar4 + DAT_8c08449c,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x10c) = (int)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x10c),in_fr3);
      dVar8 = (double)CONCAT44(DAT_8c0844a4,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)(puVar4 + -0x10c) = dVar7;
      dVar7 = *(double *)(puVar4 + -0x10c);
      dVar8 = (double)CONCAT44(PTR_Vec3_dtor_8c0844a8,DAT_8c0844a4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20) <
               (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      bVar11 = dVar8 * dVar8 < dVar7;
    }
    *(uint *)(puVar4 + -0xe4) = 1 - (uint)bVar11;
    (*(code *)PTR_Vec3_dtor_8c0844a8)(puVar4 + -0xd4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0844a8)(puVar4 + -0xc4,0xffffffff,ar6,ar7);
    if (*(int *)(puVar4 + -0xe4) == 0) {
      if (*(int *)(DAT_8c0844dc + ar4) == 1) {
        *(int *)(puVar4 + -0x138) = ar4;
        *(int *)(DAT_8c0844e0 + *(int *)(puVar4 + -0x138)) =
             *(int *)(DAT_8c0844e0 + *(int *)(puVar4 + -0x138)) + 1;
        ar7 = DAT_8c0844e4;
        ar6 = 0;
        *(undefined4 *)(DAT_8c0844e4 + ar4) = 0;
      }
    }
    else {
      *(int *)(puVar4 + -0x134) = ar4;
      ar6 = *(int *)(puVar4 + -0x134);
      *(int *)(DAT_8c0844ac + ar6) = *(int *)(DAT_8c0844ac + *(int *)(puVar4 + -0x134)) + 1;
      *(undefined4 *)(DAT_8c0844b0 + ar4) = 0;
    }
    break;
  case 4:
    (*(code *)PTR_FUN_8c0845b4)(ar4,PTR_FUN_8c0845b4,ar6,ar7);
    ar6 = **(int **)(ar5 + 4);
    uVar2 = **(undefined4 **)(ar5 + 4);
    (*(code *)PTR_FUN_8c0845b8)(ar4,uVar2,ar6,ar7);
    uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0845c4)
                      (ar4 + DAT_8c0845bc._4_4_,uVar2,ar6,ar7);
    *(undefined4 *)(puVar4 + -0x110) = uVar2;
    if (*(int *)(puVar4 + -0x110) == 1) {
      uVar3 = 0;
      *(undefined4 *)(DAT_8c0845c8 + ar4) = 0;
      *(undefined4 *)(DAT_8c0845cc + ar4) = 0;
      (*(code *)PTR_FUN_8c0845d0)(ar4,0,ar6,ar7);
      *(undefined4 *)(DAT_8c0845d4 + ar4) = 0;
      *(undefined4 *)(DAT_8c0845d8 + ar4) = 0;
      ar7 = 0;
      ar6 = -1;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0845e0)
                (ar4 + DAT_8c0845bc._4_4_,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0845e4)
                (ar4 + DAT_8c0845bc._4_4_,ar4 + DAT_8c0845bc._4_4_,ar6,ar7);
      (*(code *)PTR_FUN_8c0845e8)(ar4 + DAT_8c0845bc._4_4_,ar4 + DAT_8c0845bc._4_4_,ar6,ar7);
    }
  }
  *(undefined4 *)(puVar4 + -0xd8) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c0845f0)(puVar4 + DAT_8c0845ec + -0x138,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar4 + -0xd8);
}



/* FUN_8c0845f4 @ 8c0845f4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0845f4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 in_dr0;
  float fVar6;
  double dVar4;
  double dVar5;
  undefined4 in_fr3;
  undefined8 in_xd0;
  bool bVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [116];
  
  uVar2 = 1;
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c084638)((int)&iStack_f8 + DAT_8c084634,ar5,ar6,ar7);
  switch(*(undefined4 *)(DAT_8c08463c + ar4)) {
  case 0:
    iStack_c8 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0846b0)
                          (ar4 + DAT_8c0846ac,a5,ar6,ar7);
    if (iStack_c8 == 1) {
      if (in_FPSCR_SZ == '\0') {
        fVar3 = *(float *)**(undefined4 **)(ar5 + 4);
        fVar6 = DAT_8c0846b4;
      }
      else {
        in_xd0 = *(undefined8 *)**(undefined4 **)(ar5 + 4);
        fVar3 = DAT_8c0846b4;
        fVar6 = DAT_8c0846b8;
      }
      if (in_FPSCR_PR != '\0' || fVar3 <= fVar6) {
        (*(code *)PTR_Vec3_assign_8c0847ac)(ar4 + 0x54,PTR_DAT_8c0847a8,ar6,ar7);
      }
      else {
        puStack_fc = (undefined1 *)((int)&iStack_f8 + (int)DAT_8c0846b8);
        (*(code *)PTR_Vec3_scale_8c0846c4)(PTR_DAT_8c0846c0,PTR_DAT_8c0846bc,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c0846c8)(ar4 + 0x54,(int)&iStack_f8 + (int)DAT_8c0846b8,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c0846cc)((int)&iStack_f8 + (int)DAT_8c0846b8,0xffffffff,ar6,ar7);
      }
      ar7 = 0;
      ar6 = 0xffffffff;
      uVar1 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0847b8)(ar4 + DAT_8c0847b4,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0847bc)(ar4 + DAT_8c0847b4,uVar1,ar6,ar7);
      puStack_fc = (undefined1 *)((int)&iStack_f8 + DAT_8c0847c0);
      (*(code *)PTR_Vec3_scale_8c0847c4)(ar4 + 0x54,ar4 + 0x48,ar6,ar7);
      puStack_fc = (undefined1 *)((int)&iStack_f8 + DAT_8c0847c8);
      (*(code *)PTR_Vec3_scale_8c0847c4)((int)&puStack_fc + DAT_8c0847d0,PTR_DAT_8c0847cc,ar6,ar7);
      puStack_fc = (undefined1 *)((int)&iStack_f8 + DAT_8c0847d4);
      (*(code *)PTR_Vec3_add_8c0847dc)
                (**(undefined4 **)(ar5 + 4),(int)&puStack_fc + DAT_8c0847d8,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0847ac)(ar4 + DAT_8c0847e0,(int)&iStack_f8 + DAT_8c0847d4,ar6,ar7)
      ;
      (*(code *)PTR_Vec3_dtor_8c0847e4)((int)&iStack_f8 + DAT_8c0847d4,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0847e4)((int)&iStack_f8 + DAT_8c0847c8,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0847e4)((int)&iStack_f8 + DAT_8c0847c0,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0847ec,*(undefined4 *)(ar4 + DAT_8c0847e8));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c0847e8);
        dVar4 = (double)CONCAT44(DAT_8c0847f0,DAT_8c0847ec);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0847e8) = fVar3;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c0847e8) = in_xd0;
      }
      *(int *)(DAT_8c0847f0 + ar4) = *(int *)(DAT_8c0847f0 + ar4) + 1;
      *(undefined4 *)(DAT_8c0847f4 + ar4) = 0;
      iStack_e4 = ar4;
      iStack_e0 = ar4;
    }
    break;
  case 1:
    (*(code *)PTR_Vec3_ctor_copy_8c08485c)((int)&iStack_f8 + DAT_8c084858,ar4 + 0x54,ar6,ar7);
    ar6 = 1;
    fStack_cc = (float)(*(code *)PTR_FUN_8c084860)(ar4,(int)&iStack_f8 + DAT_8c084858,1,ar7);
    uStack_c0 = (uint)(fStack_cc == 0.0);
    (*(code *)PTR_Vec3_dtor_8c084864)((int)&iStack_f8 + DAT_8c084858,0xffffffff,ar6,ar7);
    if (uStack_c0 != 0) {
      if (*(int *)(DAT_8c084868 + ar4) == 6) {
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar1 = 0x24;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c084874)
                  (ar4 + DAT_8c08486c._4_4_,0x24,0xffffffff,0);
      }
      else {
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar1 = 0x2e;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0848c0)
                  (ar4 + DAT_8c0848b8._4_4_,0x2e,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0848c4)(ar4 + DAT_8c0848b8._4_4_,uVar1,ar6,ar7);
      *(undefined4 *)(DAT_8c0848c8 + ar4) = 0;
      *(int *)(DAT_8c0848cc + ar4) = *(int *)(DAT_8c0848cc + ar4) + 1;
      iStack_e8 = ar4;
    }
    break;
  case 2:
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c084918)(ar4 + DAT_8c084914,a5,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c08491c)(ar4 + DAT_8c084914,a5,ar6,ar7);
    fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
    fStack_d0 = fVar3;
    fVar6 = DAT_8c084920;
    if (in_FPSCR_SZ != '\0') {
      fStack_d0 = (float)in_dr0;
      fStack_cc = fVar3;
      fVar3 = DAT_8c084920;
      fVar6 = _DAT_8c084924;
    }
    if (in_FPSCR_PR != '\0' || fVar6 <= fVar3) {
      *(int *)((int)_DAT_8c084924 + ar4) = *(int *)((int)_DAT_8c084924 + ar4) + 1;
      iStack_ec = ar4;
    }
    break;
  case 3:
    puStack_fc = auStack_84;
    (*(code *)PTR_Vec3_sub_8c084a68)(ar4 + DAT_8c084a64,**(undefined4 **)(ar5 + 4),ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c084a70)((int)&iStack_f8 + DAT_8c084a6c,auStack_84,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c084a74)(auStack_84,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c084a78)(auStack_94,(int)&iStack_f8 + DAT_8c084a6c,ar6,ar7);
    (*(code *)PTR_FUN_8c084a80)(ar4,auStack_94,ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c084a74)(auStack_94,0xffffffff,ar6,ar7);
    (*(code *)PTR_FUN_8c084a90)(ar4 + DAT_8c084a8c,uVar1,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c084a94)(ar4 + DAT_8c084a8c,uVar1,ar6,ar7);
    fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_b8 = CONCAT44(uStack_b8._4_4_,fVar3);
      dVar4 = (double)CONCAT44(DAT_8c084a98,*(undefined4 *)(ar4 + 0x28));
      fStack_d4 = fVar3;
    }
    else {
      fStack_d4 = (float)in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar4 = (double)CONCAT44(DAT_8c084a9c,DAT_8c084a98);
      fStack_d0 = fVar3;
      uStack_b8 = in_dr0;
    }
    if (in_FPSCR_PR == '\0' && SUB84(dVar4,0) < (float)((ulonglong)dVar4 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c084a9c,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar4 = (double)CONCAT44(PTR_Vec3_scale_8c084aa0,DAT_8c084a9c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = (float)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
      }
      else {
        dVar4 = dVar4 + dVar4;
      }
      iStack_f0 = ar4;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(dVar4,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
    puStack_fc = auStack_a4;
    (*(code *)PTR_Vec3_scale_8c084aa0)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
    puStack_fc = (undefined1 *)((int)&uStack_b8 + 4);
    (*(code *)PTR_Vec3_add_8c084aa4)(**(undefined4 **)(ar5 + 4),auStack_a4,ar6,ar7);
    (*(code *)PTR_FUN_8c084aa8)((int)&uStack_b8 + 4,ar4 + DAT_8c084a64,ar6,ar7);
    fVar3 = (float)((ulonglong)dVar4 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(fVar3,in_fr3);
      dVar5 = (double)CONCAT44(DAT_8c084aac,*(undefined4 *)(ar4 + 0x48));
      fStack_d8 = fVar3;
    }
    else {
      fStack_d8 = SUB84(dVar4,0);
      dVar5 = (double)CONCAT44(_DAT_8c084ab0,DAT_8c084aac);
      fStack_d4 = fVar3;
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20) < (float)((ulonglong)dVar4 >> 0x20)
      ;
    }
    else {
      bVar7 = dVar5 * dVar5 < dVar4;
    }
    iStack_c4 = 1 - (uint)bVar7;
    (*(code *)PTR_Vec3_dtor_8c084a74)((int)&uStack_b8 + 4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c084a74)(auStack_a4,0xffffffff,ar6,ar7);
    if (iStack_c4 == 0) {
      if (*(int *)(DAT_8c084ae4 + ar4) == 1) {
        *(int *)(DAT_8c084ae8 + ar4) = *(int *)(DAT_8c084ae8 + ar4) + 1;
        *(undefined4 *)(DAT_8c084ae4 + ar4) = 0;
        *(undefined4 *)(DAT_8c084aec + ar4) = 0;
        iStack_f8 = ar4;
      }
    }
    else {
      *(int *)(_DAT_8c084ab0 + ar4) = *(int *)(_DAT_8c084ab0 + ar4) + 1;
      *(undefined4 *)(DAT_8c084ab4 + ar4) = 0;
      iStack_f4 = ar4;
    }
    break;
  case 4:
    ar6 = **(undefined4 **)(ar5 + 4);
    uVar1 = **(undefined4 **)(ar5 + 4);
    (*(code *)PTR_FUN_8c084b88)(ar4,uVar1,ar6,ar7);
    iStack_dc = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c084b94)
                          (ar4 + DAT_8c084b8c._4_4_,uVar1,ar6,ar7);
    if (iStack_dc == 1) {
      uVar2 = 0;
      *(undefined4 *)(DAT_8c084b98 + ar4) = 0;
      *(undefined4 *)(DAT_8c084b9c + ar4) = 0;
      ar7 = 0;
      ar6 = 0xffffffff;
      uVar1 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c084ba4)
                (ar4 + DAT_8c084b8c._4_4_,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c084ba8)(ar4 + DAT_8c084b8c._4_4_,uVar1,ar6,ar7);
      (*(code *)PTR_FUN_8c084bac)(ar4 + DAT_8c084b8c._4_4_,uVar1,ar6,ar7);
      *(undefined4 *)(DAT_8c084bb0 + ar4) = 0;
      *(undefined4 *)(DAT_8c084bb4 + ar4) = 0xffffffff;
    }
  }
  uStack_bc = uVar2;
  (*(code *)PTR_Vec3_dtor_8c084bbc)((int)&iStack_f8 + DAT_8c084bb8,0xffffffff,ar6,ar7);
  return uStack_bc;
}



/* get_field_2cc_084bc0 @ 8c084bc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2cc_084bc0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c084bc8 + ar4);
}



/* FUN_8c084bcc @ 8c084bcc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c084bcc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
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
  undefined1 auStack_124 [24];
  undefined1 auStack_10c [268];
  
  uStack_128 = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c084f98,ar5,ar6,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c084fa0;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_128,PTR_Vec3_dtor_8c084fa4,DAT_8c084fa0,ar7);
  uStack_12c = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c084fac,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c084fb0;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_12c,PTR_Vec3_dtor_8c084fa4,DAT_8c084fb0,ar7);
  uStack_130 = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c084fb4,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c084fb8;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_130,PTR_Vec3_dtor_8c084fa4,DAT_8c084fb8,ar7);
  uStack_134 = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c084fbc,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c084fc0;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_134,PTR_Vec3_dtor_8c084fa4,DAT_8c084fc0,ar7);
  uStack_138 = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c084fd0,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c084fd4;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_138,PTR_Vec3_dtor_8c084fa4,DAT_8c084fd4,ar7);
  uStack_13c = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c084fe4,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c084fe8;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_13c,PTR_Vec3_dtor_8c084fa4,DAT_8c084fe8,ar7);
  uStack_140 = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c084ff0,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c084ff4;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_140,PTR_Vec3_dtor_8c084fa4,DAT_8c084ff4,ar7);
  uStack_144 = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c085000,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c085004;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_144,PTR_Vec3_dtor_8c084fa4,DAT_8c085004,ar7);
  uStack_148 = (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)(PTR_DAT_8c08500c,puVar2,uVar1,ar7);
  puVar2 = PTR_Vec3_dtor_8c084fa4;
  uVar1 = DAT_8c085010;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_148,PTR_Vec3_dtor_8c084fa4,DAT_8c085010,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)((int)&uStack_180 + DAT_8c08501c,puVar2,uVar1,ar7);
  uStack_14c = (*(code *)PTR_Vec3_ctor_copy_8c085024)
                         (PTR_DAT_8c085020,(int)&uStack_180 + DAT_8c08501c,uVar1,ar7);
  uVar1 = DAT_8c085028;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_14c,PTR_Vec3_dtor_8c084fa4,DAT_8c085028,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c084fa4)((int)&uStack_180 + DAT_8c08501c,0xffffffff,uVar1,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)((int)&uStack_180 + DAT_8c085030,uVar3,uVar1,ar7);
  uStack_150 = (*(code *)PTR_Vec3_ctor_copy_8c085024)
                         (PTR_DAT_8c085020 + 0x10,(int)&uStack_180 + DAT_8c085030,uVar1,ar7);
  uVar1 = DAT_8c085034;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_150,PTR_Vec3_dtor_8c084fa4,DAT_8c085034,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c084fa4)((int)&uStack_180 + DAT_8c085030,0xffffffff,uVar1,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)((int)&uStack_180 + DAT_8c085038,uVar3,uVar1,ar7);
  uStack_154 = (*(code *)PTR_Vec3_ctor_copy_8c085024)
                         (PTR_DAT_8c08503c,(int)&uStack_180 + DAT_8c085038,uVar1,ar7);
  uVar1 = DAT_8c085040;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_154,PTR_Vec3_dtor_8c084fa4,DAT_8c085040,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c084fa4)((int)&uStack_180 + DAT_8c085038,0xffffffff,uVar1,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)((int)&uStack_180 + DAT_8c08504c,uVar3,uVar1,ar7);
  uStack_158 = (*(code *)PTR_Vec3_ctor_copy_8c085024)
                         (PTR_DAT_8c08503c + 0x10,(int)&uStack_180 + DAT_8c08504c,uVar1,ar7);
  uVar1 = DAT_8c085050;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_158,PTR_Vec3_dtor_8c084fa4,DAT_8c085050,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c084fa4)((int)&uStack_180 + DAT_8c08504c,0xffffffff,uVar1,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)((int)&uStack_180 + DAT_8c085054,uVar3,uVar1,ar7);
  uStack_15c = (*(code *)PTR_Vec3_ctor_copy_8c085024)
                         (PTR_DAT_8c085058,(int)&uStack_180 + DAT_8c085054,uVar1,ar7);
  uVar1 = DAT_8c08505c;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_15c,PTR_Vec3_dtor_8c084fa4,DAT_8c08505c,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c084fa4)((int)&uStack_180 + DAT_8c085054,0xffffffff,uVar1,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c084f9c)((int)&uStack_180 + DAT_8c085060,uVar3,uVar1,ar7);
  uStack_160 = (*(code *)PTR_Vec3_ctor_copy_8c085024)
                         (PTR_DAT_8c085058 + 0x10,(int)&uStack_180 + DAT_8c085060,uVar1,ar7);
  uVar1 = DAT_8c085064;
  (*(code *)PTR_global_list_push_8c084fa8)(uStack_160,PTR_Vec3_dtor_8c084fa4,DAT_8c085064,ar7);
  uVar3 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c084fa4)((int)&uStack_180 + DAT_8c085060,0xffffffff,uVar1,ar7);
  uVar3 = (*(code *)PTR_FUN_8c085084)((int)&uStack_180 + DAT_8c085080,uVar3,uVar1,ar7);
  uStack_164 = uVar3;
  (*(code *)PTR_FUN_8c08508c)(DAT_8c085088,uVar3,uVar1,ar7);
  uVar3 = (*(code *)PTR_FUN_8c085084)((int)&uStack_180 + DAT_8c085090,uVar3,uVar1,ar7);
  uStack_168 = uVar3;
  (*(code *)PTR_FUN_8c08508c)(DAT_8c085088 + 0x18,uVar3,uVar1,ar7);
  uVar3 = (*(code *)PTR_FUN_8c085084)((int)&uStack_180 + DAT_8c08509c,uVar3,uVar1,ar7);
  uStack_16c = uVar3;
  (*(code *)PTR_FUN_8c08508c)(DAT_8c085088 + 0x30,uVar3,uVar1,ar7);
  uVar3 = (*(code *)PTR_FUN_8c085084)((int)&uStack_180 + DAT_8c0850b0,uVar3,uVar1,ar7);
  uStack_170 = uVar3;
  (*(code *)PTR_FUN_8c08508c)(DAT_8c085088 + 0x48,uVar3,uVar1,ar7);
  uVar3 = (*(code *)PTR_FUN_8c085084)((int)&uStack_180 + DAT_8c0850b8,uVar3,uVar1,ar7);
  uStack_174 = uVar3;
  (*(code *)PTR_FUN_8c08508c)(DAT_8c085088 + 0x60,uVar3,uVar1,ar7);
  uVar3 = (*(code *)PTR_FUN_8c085084)((int)&uStack_180 + DAT_8c0850bc,uVar3,uVar1,ar7);
  uStack_178 = uVar3;
  (*(code *)PTR_FUN_8c08513c)(DAT_8c085088 + 0x78,uVar3,uVar1,ar7);
  uVar3 = (*(code *)PTR_FUN_8c085158)(auStack_10c,uVar3,uVar1,ar7);
  uStack_17c = uVar3;
  (*(code *)PTR_FUN_8c08513c)(DAT_8c08515c + DAT_8c085160,uVar3,uVar1,ar7);
  uStack_180 = (*(code *)PTR_FUN_8c085158)(auStack_124,uVar3,uVar1,ar7);
  uVar1 = (*(code *)PTR_FUN_8c08513c)(DAT_8c08515c + _DAT_8c085168,uStack_180,uVar1,ar7);
  return uVar1;
}



/* CAnimal_m0_08516c @ 8c08516c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_08516c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c0851d0;
    (*(code *)PTR_Class_129938_m0_017084_8c0851d8)(ar4 + DAT_8c0851d4,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12a25c_m0_06f3c4_8c0851e0)(ar4 + DAT_8c0851dc,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12c3c4_m0_1030a4_8c0851e8)(ar4 + DAT_8c0851e4,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c0851ec)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0851f0)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* s_GRAPHICS_HIGYOLINE_0851fa @ 8c0851f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_HIGYOLINE_0851fa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 a7;
  int iVar2;
  
  a6 = 1;
  uVar1 = 3;
  a7 = ar6;
  (*(code *)PTR_FUN_8c085330)(ar4,3,1,ar6);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c085334;
  (*(code *)PTR_s_HIGYOLINE_102eee_8c08533c)(ar4 + DAT_8c085338,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c085344)(ar4 + DAT_8c085340,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c08534c)(ar4 + DAT_8c085348,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c085358)(ar4 + 0xc,uVar1,a6,a7);
  *(int *)(DAT_8c08535c + ar4) = ar4 + DAT_8c085338;
  uVar1 = (*(code *)PTR_FUN_8c085364)(ar4 + DAT_8c085360,ar6,a6,a7);
  (*(code *)PTR_FUN_8c085368)(*(undefined4 *)(DAT_8c08535c + ar4),uVar1,a6,a7);
  *(int *)(DAT_8c08536c + ar4) = ar4 + DAT_8c085340;
  *(undefined1 *)(DAT_8c085370 + ar4) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c085374 + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(DAT_8c085378 + ar4 + iVar2 * 4) = 0;
  }
  (*(code *)PTR_FUN_8c085384)
            (ar4,*(undefined4 *)(DAT_8c085380 + *(int *)(DAT_8c08537c + ar4)),ar4 + DAT_8c085348,a7)
  ;
  *(undefined4 *)(DAT_8c085388 + ar4) = *(undefined4 *)(**(int **)(DAT_8c08537c + ar4) + 0x40);
  *(undefined4 *)(DAT_8c08538c + ar4) = *(undefined4 *)(**(int **)(DAT_8c08537c + ar4) + 0x40);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  return ar4;
}



/* CAnimal_m2_085390 @ 8c085390 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_085390(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  undefined4 a7;
  
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m2_02573c_8c0854f8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0854fc)(ar4,a5,ar6,a7);
  (*(code *)PTR_FUN_8c085500)(ar4,a5,ar6,a7);
  uVar1 = (*(code *)PTR_FUN_8c085508)(ar4 + DAT_8c085504,a5,ar6,a7);
  if (((((char)uVar1 == '\x01') && (*(int *)(DAT_8c08550c + ar4) == 0)) &&
      (*(int *)(DAT_8c085510 + ar4) == 0)) &&
     (((*(int *)(DAT_8c085514 + ar4) == 0 && (*(int *)(DAT_8c085518 + ar4) == 0)) &&
      ((*(int *)(DAT_8c08551c + ar4) == 0 && (*(int *)(DAT_8c085520 + ar4) == 0)))))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c085524)(ar4,ar5,ar6,a7);
  }
  if (((*(int *)(DAT_8c08550c + ar4) != 0) || (*(int *)(DAT_8c085510 + ar4) != 0)) ||
     ((*(int *)(DAT_8c085514 + ar4) != 0 ||
      (((*(int *)(DAT_8c085518 + ar4) != 0 || (*(int *)(DAT_8c08551c + ar4) != 0)) ||
       (*(int *)(DAT_8c085520 + ar4) != 0)))))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c085528)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c085508)(ar4 + DAT_8c085504,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_290_085544_8c085530)(ar4 + DAT_8c08552c,a5,ar6,a7);
    if (iVar2 != -1) {
      if (*(char *)(DAT_8c085534 + ar4) == '\0') {
        *(undefined1 *)(DAT_8c085534 + ar4) = 1;
        *(undefined4 *)PTR_DAT_8c085538 = 0;
      }
      (*(code *)PTR_s_CSquidLine_085b18_8c08553c)(ar4,ar7,ar5,a7);
      a5 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c085508)(ar4 + DAT_8c085504,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_290_085544_8c085530)(ar4 + DAT_8c08552c,a5,ar6,a7);
    iVar3 = (**(code **)(**(int **)(DAT_8c085540 + ar4) + 0x44))
                      (*(int **)(DAT_8c085540 + ar4),a5,ar6,a7);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(DAT_8c085534 + ar4) == '\x01')) {
      *(undefined1 *)(DAT_8c085534 + ar4) = 0;
    }
  }
  return 1;
}



/* get_field_290_085544 @ 8c085544 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_290_085544(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c08554c + ar4);
}



/* CAnimal_m3_085550 @ 8c085550 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_085550(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  undefined4 a7;
  
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m3_026078_8c0856b8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0856bc)(ar4,a5,ar6,a7);
  (*(code *)PTR_FUN_8c0856c0)(ar4,a5,ar6,a7);
  uVar1 = (*(code *)PTR_FUN_8c0856c8)(ar4 + DAT_8c0856c4,a5,ar6,a7);
  if (((((char)uVar1 == '\x01') && (*(int *)(DAT_8c0856cc + ar4) == 0)) &&
      (*(int *)(DAT_8c0856d0 + ar4) == 0)) &&
     (((*(int *)(DAT_8c0856d4 + ar4) == 0 && (*(int *)(DAT_8c0856d8 + ar4) == 0)) &&
      ((*(int *)(DAT_8c0856dc + ar4) == 0 && (*(int *)(DAT_8c0856e0 + ar4) == 0)))))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c0856e4)(ar4,ar5,ar6,a7);
  }
  if (((*(int *)(DAT_8c0856cc + ar4) != 0) || (*(int *)(DAT_8c0856d0 + ar4) != 0)) ||
     ((*(int *)(DAT_8c0856d4 + ar4) != 0 ||
      (((*(int *)(DAT_8c0856d8 + ar4) != 0 || (*(int *)(DAT_8c0856dc + ar4) != 0)) ||
       (*(int *)(DAT_8c0856e0 + ar4) != 0)))))) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c0856e8)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0856c8)(ar4 + DAT_8c0856c4,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_290_085544_8c0856f0)(ar4 + DAT_8c0856ec,a5,ar6,a7);
    if (iVar2 != -1) {
      if (*(char *)(DAT_8c0856f4 + ar4) == '\0') {
        *(undefined1 *)(DAT_8c0856f4 + ar4) = 1;
        *(undefined4 *)PTR_DAT_8c0856f8 = 0;
      }
      (*(code *)PTR_s_CSquidLine_085b18_8c0856fc)(ar4,ar7,ar5,a7);
      a5 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0856c8)(ar4 + DAT_8c0856c4,a5,ar6,a7);
  if ((char)uVar1 == '\x02') {
    iVar2 = (*(code *)PTR_get_field_290_085544_8c0856f0)(ar4 + DAT_8c0856ec,a5,ar6,a7);
    iVar3 = (**(code **)(**(int **)(DAT_8c085700 + ar4) + 0x44))
                      (*(int **)(DAT_8c085700 + ar4),a5,ar6,a7);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(DAT_8c0856f4 + ar4) == '\x01')) {
      *(undefined1 *)(DAT_8c0856f4 + ar4) = 0;
    }
  }
  return 1;
}



/* FUN_8c085704 @ 8c085704 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c085704(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fr1;
  ulonglong uVar5;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c085858)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c085860)(ar4 + DAT_8c08585c,ar5,ar6,ar7);
  piVar4 = (int *)(*(int *)(DAT_8c085864 + ar4) + (short)uVar1 * DAT_8c085868);
  iVar2 = (*(code *)PTR_FUN_8c08586c)(piVar4 + 0x1c,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c085870 + ar4) =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(DAT_8c085874 + ar4) = *(undefined4 *)(*(int *)(DAT_8c085870 + ar4) + 0x2c);
  *(undefined4 *)(DAT_8c085878 + ar4) =
       *(undefined4 *)(*(int *)(*(int *)(DAT_8c085870 + ar4) + 0x2c) + 0x30);
  *(undefined4 *)(DAT_8c08587c + ar4) =
       *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_8c085870 + ar4) + 0x2c) + 0x30) + 0x30);
  uVar1 = (*(code *)PTR_FUN_8c085884)(*piVar4 + DAT_8c085880,ar5,ar6,ar7);
  *(undefined4 *)(*(int *)(DAT_8c085874 + ar4) + 4) = uVar1;
  *(undefined4 *)(*(int *)(DAT_8c085878 + ar4) + 4) = uVar1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c085888) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c085888) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c08588c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c08588c) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c085894,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c085890) = DAT_8c085894;
  }
  else {
    uVar5 = CONCAT44(DAT_8c085898,DAT_8c085894);
    *(ulonglong *)(ar4 + DAT_8c085890) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c085898) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c085898) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c08589c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c08589c) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0858a0) = DAT_8c085894;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0858a0) = CONCAT44(DAT_8c085898,DAT_8c085894);
  }
  (*(code *)PTR_FUN_8c0858a4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0858a8)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0858ac + ar4) = 0;
  *(undefined4 *)(DAT_8c0858b0 + ar4) = 0;
  *(undefined4 *)(DAT_8c0858b4 + ar4) = 0;
  *(undefined4 *)(DAT_8c0858b8 + ar4) = 0;
  uVar1 = (*(code *)PTR_FUN_8c085860)(ar4 + DAT_8c08585c,ar5,ar6,ar7);
  iVar3 = (int)(short)uVar1;
  if (iVar3 == 6) {
    *(undefined4 *)(DAT_8c0858ac + ar4) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) +
                                                       0x2c) + 0x30) + 0x30) + 0x30) + 0x2c) + 0x2c)
    ;
    iVar3 = DAT_8c0858b0;
    *(undefined4 *)(DAT_8c0858b0 + ar4) =
         *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                         0x2c) + 0x2c) + 0x30) +
                                              0x30) + 0x30) + 0x2c) + 0x30) + 0x2c);
  }
  return iVar3;
}



/* FUN_8c0858bc @ 8c0858bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0858bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0858e0)(*(undefined4 *)(DAT_8c0858dc + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0858e4 @ 8c0858e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0858e4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  int iVar3;
  
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    uVar1 = (*(code *)PTR_get_field_a0_035724_8c0859ac)(ar5,iVar2,ar6,ar7);
    if ((char)uVar1 == '\x02') {
      a6 = 5;
      uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c0859b4)(DAT_8c0859b0,6,5,ar7);
      *(undefined4 *)(DAT_8c0859b8 + ar4 + iVar3 * 4) = uVar1;
    }
    else {
      a6 = 0x15;
      uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c0859b4)(DAT_8c0859b0,4,0x15,ar7);
      *(undefined4 *)(DAT_8c0859b8 + ar4 + iVar3 * 4) = uVar1;
    }
    iVar2 = *(int *)(DAT_8c0859b8 + ar4 + iVar3 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x54))(iVar2,DAT_8c0859b0,a6,ar7);
    ar6 = 0;
    iVar2 = *(int *)(DAT_8c0859b8 + ar4 + iVar3 * 4);
    uVar1 = (*(code *)PTR_s_CItemGLoader_RegistToLoad_0fed74_8c0859c0)
                      (*(undefined4 *)(DAT_8c0859bc + ar5),iVar2,0,ar7);
    *(undefined4 *)(DAT_8c0859c4 + ar4 + iVar3 * 4) = uVar1;
  }
  return 6;
}



/* FUN_8c0859c8 @ 8c0859c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0859c8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  int iVar3;
  
  a5 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    if (*(int *)(DAT_8c085adc + ar4 + iVar3 * 4) != 0) {
      a5 = *(int *)(DAT_8c085adc + ar4 + iVar3 * 4);
      iVar1 = (*(code *)PTR_FUN_8c085ae4)(*(undefined4 *)(DAT_8c085ae0 + ar5),a5,ar6,ar7);
      if (iVar1 == 1) {
        a5 = ar4 + iVar3 * 4 + DAT_8c085adc;
        uVar2 = (*(code *)PTR_FUN_8c085ae8)(*(undefined4 *)(DAT_8c085ae0 + ar5),a5,ar6,ar7);
        *(undefined4 *)(DAT_8c085aec + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(DAT_8c085af0 + ar4) != 0) {
    a5 = *(int *)(DAT_8c085af0 + ar4);
    iVar3 = (*(code *)PTR_FUN_8c085ae4)(*(undefined4 *)(DAT_8c085ae0 + ar5),a5,ar6,ar7);
    if (iVar3 == 1) {
      a5 = ar4 + DAT_8c085af0;
      uVar2 = (*(code *)PTR_FUN_8c085ae8)(*(undefined4 *)(DAT_8c085ae0 + ar5),a5,ar6,ar7);
      *(undefined4 *)(DAT_8c085af4 + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(DAT_8c085adc + ar4);
  if ((((iVar3 == 0) && (iVar3 = *(int *)(DAT_8c085af8 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(DAT_8c085afc + ar4), iVar3 == 0)) &&
     (((iVar3 = *(int *)(DAT_8c085b00 + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(DAT_8c085b04 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(DAT_8c085af0 + ar4), iVar3 == 0)))) {
    uVar2 = (*(code *)PTR_FUN_8c085b0c)(ar4 + DAT_8c085b08,a5,ar6,ar7);
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (*(code *)PTR_FUN_8c085b10)(ar4 + DAT_8c085b08,2,ar6,ar7);
    }
  }
  return iVar3;
}



/* s_CSquidLine_085b18 @ 8c085b14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_CSquidLine_085b18(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = (*(code *)PTR_get_field_290_085544_8c085bfc)(ar4 + DAT_8c085bf8,ar5,ar6,ar7);
  if (*(int *)(DAT_8c085c00 + ar4 + iVar1 * 4) == 0) {
    iVar2 = (*(code *)PTR_report_error_message_8c085c18)
                      (PTR_s_GRAPHICS_COMMON_8c085c0c + DAT_8c085c14,
                       PTR_s_GRAPHICS_COMMON_8c085c0c + DAT_8c085c10,1,2);
  }
  else {
    iVar2 = *(int *)(DAT_8c085c00 + ar4 + iVar1 * 4);
    (**(code **)(DAT_8c085c04 + *(int *)(iVar2 + 8)))(iVar2,ar6,a6,ar7);
    (*(code *)PTR_FUN_8c085c08)(*(undefined4 *)(DAT_8c085c00 + ar4 + iVar1 * 4),ar6,a6,ar7);
    iVar2 = *(int *)(DAT_8c085c00 + ar4 + iVar1 * 4);
    (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,ar6,a6,ar7);
    (**(code **)(*ar5 + 0x4c))(ar5,*(undefined4 *)(DAT_8c085c00 + ar4 + iVar1 * 4),a6,ar7);
    iVar2 = DAT_8c085c00;
    *(undefined4 *)(DAT_8c085c00 + ar4 + iVar1 * 4) = 0;
  }
  return iVar2;
}



/* FUN_8c085c1c @ 8c085c1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c085c1c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + DAT_8c085c38) + 0x1c))
                    ((int *)(ar4 + DAT_8c085c38),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c085c3c @ 8c085c3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c085c3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  int iVar1;
  undefined4 *a6;
  float *a6_00;
  undefined1 *a7;
  float fVar2;
  double dVar3;
  undefined8 in_dr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined8 in_xd0;
  undefined4 in_xf6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [3];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_a4._0_4_ = (int)in_dr6;
  uStack_a4._4_4_ = in_xf6;
  uStack_9c = in_fr9;
  if (in_FPSCR_SZ == '\0') {
    uStack_a4._0_4_ = (int)((ulonglong)in_dr6 >> 0x20);
    uStack_a4._4_4_ = (int)in_dr6;
    uStack_9c = in_fr8;
  }
  a5 = 1;
  (*(code *)PTR_FUN_8c085e10)(*(undefined4 *)(DAT_8c085e0c + ar4),1,ar6,ar7);
  (*(code *)PTR_FUN_8c085e18)(ar4 + DAT_8c085e14,a5,ar6,ar7);
  iStack_94 = (*(code *)PTR_get_field_2a4_085e80_8c085e1c)(ar4 + DAT_8c085e14,a5,ar6,ar7);
  if (iStack_94 == 1) {
    iVar1 = ar4 + 0x50;
    (*(code *)PTR_vec3_copy_8c02b5fc_8c085e20)(auStack_40,iVar1,ar6,ar7);
    iStack_98 = (**(code **)(DAT_8c085e24 + *(int *)(ar4 + 8)))(ar4,iVar1,ar6,ar7);
    puStack_a8 = auStack_50;
    (*(code *)PTR_FUN_8c085e2c)(iStack_98 + DAT_8c085e28,auStack_40,ar6,ar7);
    puStack_a8 = auStack_60;
    (*(code *)PTR_Vec3_add_8c085e30)(ar4 + 0x30,auStack_50,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_copy_8c085e38)((int)&uStack_a4 + DAT_8c085e34,auStack_60,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c085e3c)(auStack_60,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c085e3c)(auStack_50,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c085e40)(auStack_40,0xffffffff,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)&uStack_a4 + DAT_8c085e44) =
           *(undefined4 *)((int)&uStack_a4 + DAT_8c085e34);
      *(undefined4 *)((int)&uStack_a4 + DAT_8c085e4c) =
           *(undefined4 *)((int)&uStack_a4 + DAT_8c085e48);
      *(undefined4 *)((int)&uStack_a4 + DAT_8c085e54) =
           *(undefined4 *)((int)&uStack_a4 + DAT_8c085e50);
    }
    else {
      *(undefined8 *)((int)&uStack_a4 + DAT_8c085e44) =
           *(undefined8 *)((int)&uStack_a4 + DAT_8c085e34);
      *(undefined8 *)((int)&uStack_a4 + DAT_8c085e4c) =
           *(undefined8 *)((int)&uStack_a4 + DAT_8c085e48);
      *(undefined8 *)((int)&uStack_a4 + DAT_8c085e54) =
           *(undefined8 *)((int)&uStack_a4 + DAT_8c085e50);
    }
    a6 = &uStack_90;
    iVar1 = (int)&uStack_a4 + DAT_8c085e44;
    (*(code *)PTR_FUN_8c085e58)(0,iVar1,a6,ar7);
    (*(code *)PTR_Vec3_ctor_zero_8c085e5c)(&fStack_34,iVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(uStack_90,uStack_a4._4_4_);
    }
    else {
      in_xd0 = CONCAT44(uStack_9c,uStack_a4._4_4_);
      dVar3 = (double)CONCAT44(uStack_8c,uStack_90);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c085e34),fVar2);
    }
    else {
      dVar3 = *(double *)((int)&uStack_a4 + DAT_8c085e34);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_34 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_34 = SUB84(dVar3 + dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(uStack_8c,uStack_9c);
    }
    else {
      fStack_34 = (float)in_xd0;
      fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44(iStack_98,uStack_9c);
      dVar3 = (double)CONCAT44(auStack_88[0],uStack_8c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c085e60,fVar2);
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c085e64,DAT_8c085e60);
    }
    if (in_FPSCR_PR == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)((int)&uStack_a4 + DAT_8c085e48),fVar2);
    }
    else {
      dVar3 = *(double *)((int)&uStack_a4 + DAT_8c085e48);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_30 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_30 = SUB84(dVar3 + dVar3,0);
    }
    if (in_FPSCR_SZ != '\0') {
      fStack_30 = (float)in_xd0;
      uStack_28 = uStack_a4._4_4_;
    }
    uStack_2c = (undefined4)uStack_a4;
    puStack_a8 = auStack_70;
    (*(code *)PTR_FUN_8c085e68)(*(undefined4 *)(DAT_8c085e64 + ar4),iVar1,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c085e70)(auStack_7c,iVar1,a6,ar7);
    puStack_a8 = auStack_7c;
    puStack_ac = auStack_88;
    a7 = auStack_70;
    a6_00 = &fStack_34;
    (*(code *)PTR_FUN_8c085e74)
              (*(undefined4 *)(DAT_8c085e64 + ar4),(int)&puStack_ac + DAT_8c085e50,a6_00,a7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c085e7c)(ar4 + DAT_8c085e78,auStack_88,a6_00,a7);
    (*(code *)PTR_object_dtor_delete_8c085e40)(auStack_88,0xffffffff,a6_00,a7);
    (*(code *)PTR_object_dtor_delete_8c085e40)(auStack_7c,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c085e3c)(auStack_70,0xffffffff,a6_00,a7);
    (*(code *)PTR_Vec3_dtor_8c085e3c)(&fStack_34,0xffffffff,a6_00,a7);
    iStack_94 = (*(code *)PTR_Vec3_dtor_8c085e3c)
                          ((int)&uStack_a4 + DAT_8c085e34,0xffffffff,a6_00,a7);
  }
  return iStack_94;
}



/* get_field_2a4_085e80 @ 8c085e80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2a4_085e80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c085e88 + ar4);
}



/* FUN_8c085e8c @ 8c085e8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c085e8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c085e98;
  *(undefined4 *)(DAT_8c085e98 + ar4) = 1;
  return iVar1;
}



/* FUN_8c085e9c @ 8c085e9c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c085ea6) */
/* WARNING: Unknown calling convention */

int FUN_8c085e9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    dVar3 = (double)CONCAT44(DAT_8c085f2c,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c085f30,DAT_8c085f2c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c085f28 + ar4) /
                                   (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    dVar5 = (double)CONCAT44(uVar6,(float)*(int *)(DAT_8c085f28 + ar4)) / dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c085f34,SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)PTR_DAT_8c085f34;
  }
  fVar4 = SUB84(dVar5,0);
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c085f30) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c085f30) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c085f34 + 4),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c085f34 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c085f38) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c085f38) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c085f34 + 8),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c085f34 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c085f3c) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c085f3c) = dVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c085f34 + 0xc),SUB84(dVar3,0));
  }
  else {
    dVar3 = *(double *)(PTR_DAT_8c085f34 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + DAT_8c085f40) = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *(double *)(ar4 + DAT_8c085f40) = dVar3;
  }
  *(int *)((int)puVar2 + -4) = ar4;
  *(undefined4 *)((int)puVar2 + -8) = *(undefined4 *)(DAT_8c085f28 + *(int *)((int)puVar2 + -4));
  *(int *)(DAT_8c085f28 + *(int *)((int)puVar2 + -4)) = *(int *)((int)puVar2 + -8) + 1;
  iVar1 = DAT_8c085f44;
  if (DAT_8c085f44 < *(int *)((int)puVar2 + -8) + 1) {
    *(undefined4 *)(DAT_8c085f28 + ar4) = 0;
    *(int *)((int)puVar2 + -0xc) = ar4;
    iVar1 = 0x74;
    *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) =
         *(uint *)(*(int *)((int)puVar2 + -0xc) + 0x74) & DAT_8c085f48;
  }
  return iVar1;
}



/* s_gm1_Home_njd_085f50 @ 8c085f4c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_gm1_Home_njd_085f50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong *a6;
  int iVar6;
  undefined8 *a6_00;
  double *a7;
  undefined4 uVar7;
  int a7_00;
  undefined *puVar8;
  undefined4 in_fr1;
  float fVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined8 in_xd0;
  undefined2 uVar13;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14c [4];
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  undefined1 auStack_12c [12];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [12];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [208];
  
  iVar6 = 0;
  while (iVar4 = iVar6, iVar4 < 8) {
    *(undefined4 *)(DAT_8c0862a0 + iVar4 * DAT_8c08629c) = DAT_8c0862a4;
    iStack_130 = iVar4;
    iVar6 = iVar4 + 1;
  }
  *(undefined **)(DAT_8c0862a0 + 4) = PTR_PTR_8c0862a8;
  *(undefined **)(DAT_8c0862a0 + 8) = PTR_PTR_8c0862ac;
  *(undefined4 *)(DAT_8c0862a0 + 0xc) = *(undefined4 *)PTR_PTR_8c0862b0;
  *(undefined4 *)(DAT_8c0862a0 + 0x10) = *(undefined4 *)PTR_PTR_8c0862b4;
  *(undefined4 *)(DAT_8c0862a0 + 0x14) = *(undefined4 *)PTR_PTR_8c0862b8;
  *(undefined4 *)(DAT_8c0862a0 + 0x18) = *(undefined4 *)PTR_PTR_8c0862bc;
  *(undefined4 *)(DAT_8c0862a0 + 0x1c) = *(undefined4 *)PTR_PTR_8c0862c0;
  *(undefined4 *)(DAT_8c0862c4 + DAT_8c0862a0) = DAT_8c0862c8;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c0862d0,in_fr1);
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c0862cc) = (undefined4)DAT_8c0862d0;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0862d0._4_4_,(undefined4)DAT_8c0862d0);
    *(undefined8 *)(DAT_8c0862a0 + DAT_8c0862cc) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0862d8,(int)uVar10);
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c0862d0._4_4_) = DAT_8c0862d8;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0862dc,DAT_8c0862d8);
    *(undefined8 *)(DAT_8c0862a0 + DAT_8c0862d0._4_4_) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c0862e0,(int)uVar10);
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c0862dc) = DAT_8c0862e0;
  }
  else {
    uVar11 = CONCAT44(DAT_8c0862e4,DAT_8c0862e0);
    *(ulonglong *)(DAT_8c0862a0 + DAT_8c0862dc) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c0862e4) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c0862a0 + DAT_8c0862e4) = uVar11 & 0xffffffff;
  }
  iVar4 = DAT_8c0862e8;
  iVar6 = DAT_8c0862a0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c0862e8) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c0862a0 + DAT_8c0862e8) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c0862ec) = DAT_8c0862f0;
  }
  else {
    *(undefined8 *)(DAT_8c0862a0 + DAT_8c0862ec) = CONCAT44(PTR_PTR_8c0862f4,DAT_8c0862f0);
  }
  (*(code *)PTR_Class_129920_m0_015248_8c0862fc)
            (DAT_8c0862a0 + DAT_8c0862f8,PTR_PTR_8c0862f4,iVar4,iVar6);
  (*(code *)PTR_Class_129920_m0_015248_8c0862fc)
            (DAT_8c0862a0 + DAT_8c086300,PTR_PTR_8c0862f4,iVar4,DAT_8c0862a0 + DAT_8c086300);
  *(undefined4 *)(DAT_8c0862a0 + 0x20) = *(undefined4 *)PTR_PTR_8c086304;
  *(undefined4 *)(DAT_8c0862a0 + 0x24) = 3;
  *(undefined4 *)(DAT_8c0862a0 + 0x30) = DAT_8c086308;
  *(undefined4 *)(DAT_8c0862a0 + 0x34) = *(undefined4 *)PTR_PTR_8c08630c;
  *(undefined4 *)(DAT_8c0862a0 + 0x38) = 3;
  *(undefined4 *)(DAT_8c0862a0 + 0x44) = DAT_8c086310;
  *(undefined4 *)(DAT_8c0862a0 + 0x48) = *(undefined4 *)PTR_PTR_8c086314;
  *(undefined4 *)(DAT_8c0862a0 + 0x4c) = 10;
  *(undefined4 *)(DAT_8c0862a0 + 0x58) = DAT_8c086318;
  *(undefined4 *)(DAT_8c0862a0 + 0x5c) = *(undefined4 *)PTR_PTR_8c08631c;
  *(undefined4 *)(DAT_8c0862a0 + 0x60) = 10;
  uVar2 = DAT_8c086320;
  *(undefined4 *)(DAT_8c0862a0 + 0x6c) = DAT_8c086320;
  uVar7 = DAT_8c086328;
  *(undefined4 *)(DAT_8c086324 + DAT_8c0862a0) = DAT_8c086328;
  *(undefined2 *)(DAT_8c08632c + DAT_8c0862a0) = 0x12;
  *(undefined4 *)(DAT_8c086330 + DAT_8c0862a0) = DAT_8c086334;
  *(undefined2 *)(DAT_8c086338 + DAT_8c0862a0) = 0x12;
  (*(code *)PTR_Vec3_set_xyz_8c086344)(auStack_14c + DAT_8c08633c._4_4_,0x12,uVar7,uVar2);
  puVar3 = PTR_vec3_copy_8c023d8c_8c08634c;
  iVar6 = DAT_8c0862a0;
  (*(code *)PTR_vec3_copy_8c023d8c_8c08634c)
            (DAT_8c0862a0 + DAT_8c086348,auStack_14c + DAT_8c08633c._4_4_,
             PTR_vec3_copy_8c023d8c_8c08634c,DAT_8c0862a0);
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c086350)
            (auStack_14c + DAT_8c08633c._4_4_,0xffffffff,puVar3,iVar6);
  (*(code *)PTR_Vec3_set_xyz_8c086344)(auStack_14c + DAT_8c086358,uVar2,puVar3,iVar6);
  iVar4 = DAT_8c0862a0 + DAT_8c08635c;
  (*(code *)PTR_vec3_copy_8c023d8c_8c08634c)(iVar4,auStack_14c + DAT_8c086358,iVar4,iVar6);
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c086350)(auStack_14c + DAT_8c086358,0xffffffff,iVar4,iVar6);
  (*(code *)PTR_Vec3_set_xyz_8c086344)(auStack_14c + DAT_8c086360._4_4_,uVar2,iVar4,iVar6);
  iVar4 = DAT_8c0862a0 + DAT_8c086368;
  (*(code *)PTR_vec3_copy_8c023d8c_8c08634c)(iVar4,auStack_14c + DAT_8c086360._4_4_,iVar4,iVar6);
  (*(code *)PTR_object_dtor_delete_8c086350)
            (auStack_14c + DAT_8c086360._4_4_,0xffffffff,iVar4,iVar6);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c08636c) = DAT_8c086354;
  }
  else {
    *(undefined8 *)(DAT_8c0862a0 + DAT_8c08636c) = CONCAT44(DAT_8c086358,DAT_8c086354);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c086370) = DAT_8c086374;
  }
  else {
    *(undefined8 *)(DAT_8c0862a0 + DAT_8c086370) = CONCAT44(DAT_8c086378,DAT_8c086374);
  }
  iStack_134 = DAT_8c0862a0;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c08637c,*(undefined4 *)(DAT_8c0862a0 + DAT_8c086378));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c0862a0 + DAT_8c086378);
    dVar12 = (double)CONCAT44(PTR_PTR_8c086380,DAT_8c08637c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c0862a0 + DAT_8c086378) = fVar9;
  }
  else {
    *(undefined8 *)(DAT_8c0862a0 + DAT_8c086378) = in_xd0;
  }
  *(undefined **)(DAT_8c086358 + DAT_8c0862a0) = PTR_PTR_8c086380;
  *(undefined **)(DAT_8c086384 + DAT_8c0862a0) = PTR_PTR_8c086388;
  *(undefined4 *)(DAT_8c08638c + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c086390;
  *(undefined4 *)(DAT_8c08633c._4_4_ + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c086394;
  *(undefined4 *)(DAT_8c086398 + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c08639c;
  *(undefined4 *)(DAT_8c0863a0 + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c0863a4;
  *(undefined4 *)(DAT_8c0863a8 + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c0863ac;
  *(undefined4 *)(DAT_8c0863b0 + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c0863b4;
  *(undefined4 *)(DAT_8c0863b8 + DAT_8c0862a0) = 3;
  *(undefined4 *)(DAT_8c0863bc + DAT_8c0862a0) = DAT_8c0863c0;
  *(undefined4 *)(DAT_8c0863c4 + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c0863c8;
  *(undefined4 *)(DAT_8c0863cc + DAT_8c0862a0) = 3;
  *(undefined4 *)(DAT_8c0863d0 + DAT_8c0862a0) = DAT_8c0863d4;
  *(undefined4 *)(DAT_8c0863d8 + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c0863dc;
  *(undefined4 *)(DAT_8c0863e0 + DAT_8c0862a0) = 10;
  *(undefined4 *)(DAT_8c0863e4 + DAT_8c0862a0) = DAT_8c0863e8;
  *(undefined4 *)(DAT_8c0863ec + DAT_8c0862a0) = *(undefined4 *)PTR_PTR_8c0863f0;
  *(undefined4 *)(DAT_8c0863f4 + DAT_8c0862a0) = 10;
  *(undefined4 *)(DAT_8c0863f8 + DAT_8c0862a0) = DAT_8c0863fc;
  *(undefined4 *)(DAT_8c086400 + DAT_8c0862a0) = DAT_8c086404;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c08640c,fVar9);
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c086408) = (undefined4)DAT_8c08640c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c08640c._4_4_,(undefined4)DAT_8c08640c);
    *(undefined8 *)(DAT_8c0862a0 + DAT_8c086408) = uVar10;
  }
  uVar11 = CONCAT44(0x3f800000,(int)uVar10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0862a0 + DAT_8c08640c._4_4_) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c0862a0 + DAT_8c08640c._4_4_) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = (ulonglong)*(uint *)(DAT_8c0862a0 + DAT_8c08640c._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c0862a0 + DAT_8c08640c._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c0862a0 + DAT_8c086408),(int)uVar11);
  }
  else {
    dVar12 = *(double *)(DAT_8c0862a0 + DAT_8c086408);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 - dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c086750 + DAT_8c086754),fVar9);
  }
  else {
    dVar12 = *(double *)(DAT_8c086750 + DAT_8c086754);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 / dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c086758,fVar9);
  }
  else {
    dVar12 = (double)CONCAT44(DAT_8c08675c,DAT_8c086758);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar12,0);
    dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0));
    uVar13 = (undefined2)(int)fVar9;
  }
  else {
    dVar12 = dVar12 / dVar12;
    uVar13 = (undefined2)(int)dVar12;
  }
  *(undefined2 *)(DAT_8c086414 + DAT_8c0862a0) = uVar13;
  if (*(short *)(DAT_8c08675c + DAT_8c086750) == 0) {
    *(undefined2 *)(DAT_8c08675c + DAT_8c086750) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c086764,SUB84(dVar12,0));
    *(undefined4 *)(DAT_8c086750 + DAT_8c086760) = DAT_8c086764;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086768,DAT_8c086764);
    *(undefined8 *)(DAT_8c086750 + DAT_8c086760) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c08676c,(int)uVar10);
    *(undefined4 *)(DAT_8c086750 + DAT_8c086768) = DAT_8c08676c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086770,DAT_8c08676c);
    *(undefined8 *)(DAT_8c086750 + DAT_8c086768) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c086774,(int)uVar10);
    *(undefined4 *)(DAT_8c086750 + DAT_8c086770) = DAT_8c086774;
  }
  else {
    uVar11 = CONCAT44(DAT_8c086778,DAT_8c086774);
    *(ulonglong *)(DAT_8c086750 + DAT_8c086770) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c086778) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c086750 + DAT_8c086778) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c08677c) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c086750 + DAT_8c08677c) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c086780) = DAT_8c086784;
  }
  else {
    *(undefined8 *)(DAT_8c086750 + DAT_8c086780) = CONCAT44(PTR_PTR_8c086788,DAT_8c086784);
  }
  iVar4 = DAT_8c086750 + DAT_8c08678c;
  (*(code *)PTR_Class_129920_m0_015248_8c086790)
            (iVar4,PTR_PTR_8c086788,PTR_Class_129920_m0_015248_8c086790,iVar4);
  iVar6 = DAT_8c086750;
  (*(code *)PTR_Class_129920_m0_015248_8c086790)
            (DAT_8c086750 + DAT_8c086794,PTR_PTR_8c086788,DAT_8c086750,iVar4);
  *(undefined4 *)(DAT_8c086798 + DAT_8c086750) = DAT_8c08679c;
  *(undefined2 *)(DAT_8c0867a0 + DAT_8c086750) = 0x14;
  *(undefined4 *)(DAT_8c0867a4 + DAT_8c086750) = DAT_8c0867a8;
  *(undefined2 *)(DAT_8c0867ac + DAT_8c086750) = 0x14;
  (*(code *)PTR_Vec3_set_xyz_8c0867b8)(auStack_14c + DAT_8c0867b0._4_4_,0x14,iVar6,iVar4);
  puVar5 = auStack_14c + DAT_8c0867b0._4_4_;
  iVar6 = DAT_8c086750;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0867c0)(DAT_8c086750 + DAT_8c0867bc,puVar5,DAT_8c086750,puVar5)
  ;
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0867c4)
            (auStack_14c + DAT_8c0867b0._4_4_,0xffffffff,iVar6,puVar5);
  (*(code *)PTR_Vec3_set_xyz_8c0867b8)(auStack_14c + DAT_8c0867cc,uVar2,iVar6,puVar5);
  puVar3 = PTR_vec3_copy_8c023d8c_8c0867c0;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0867c0)
            (DAT_8c086750 + DAT_8c0867d0,auStack_14c + DAT_8c0867cc,iVar6,
             PTR_vec3_copy_8c023d8c_8c0867c0);
  uVar2 = 0xffffffff;
  puVar5 = auStack_14c + DAT_8c0867cc;
  (*(code *)PTR_object_dtor_delete_8c0867c4)(puVar5,0xffffffff,puVar5,puVar3);
  (*(code *)PTR_Vec3_set_xyz_8c0867b8)(auStack_14c + DAT_8c0867d4._4_4_,uVar2,puVar5,puVar3);
  puVar5 = auStack_14c + DAT_8c0867d4._4_4_;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0867c0)(DAT_8c086750 + DAT_8c0867dc,puVar5,puVar5,puVar3);
  (*(code *)PTR_object_dtor_delete_8c0867c4)
            (auStack_14c + DAT_8c0867d4._4_4_,0xffffffff,puVar5,puVar3);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c0867e0) = (undefined4)DAT_8c0867e4;
  }
  else {
    *(undefined8 *)(DAT_8c086750 + DAT_8c0867e0) =
         CONCAT44(DAT_8c0867e4._4_4_,(undefined4)DAT_8c0867e4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c0867e4._4_4_) = DAT_8c0867ec;
  }
  else {
    *(undefined8 *)(DAT_8c086750 + DAT_8c0867e4._4_4_) = CONCAT44(DAT_8c0867f0,DAT_8c0867ec);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c0867f0) = DAT_8c0867f4;
  }
  else {
    *(undefined8 *)(DAT_8c086750 + DAT_8c0867f0) = CONCAT44(DAT_8c0867f8,DAT_8c0867f4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c0867f8) = DAT_8c0867fc;
  }
  else {
    *(undefined8 *)(DAT_8c086750 + DAT_8c0867f8) = CONCAT44(DAT_8c086800,DAT_8c0867fc);
  }
  iStack_138 = DAT_8c086750;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c086804,*(undefined4 *)(DAT_8c086750 + DAT_8c086800));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c086750 + DAT_8c086800);
    dVar12 = (double)CONCAT44(DAT_8c086808,DAT_8c086804);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c086750 + DAT_8c086800) = fVar9;
  }
  else {
    *(undefined8 *)(DAT_8c086750 + DAT_8c086800) = in_xd0;
  }
  *(undefined **)(DAT_8c086808 + DAT_8c086750) = PTR_PTR_8c08680c;
  *(undefined **)(DAT_8c086810 + DAT_8c086750) = PTR_PTR_8c086814;
  *(undefined4 *)(DAT_8c086818 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c08681c;
  *(undefined4 *)(DAT_8c086820 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c086824;
  *(undefined4 *)(DAT_8c086828 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c08682c;
  *(undefined4 *)(DAT_8c086830 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c086834;
  *(undefined4 *)(DAT_8c086838 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c08683c;
  *(undefined4 *)(DAT_8c086840 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c086844;
  *(undefined4 *)(DAT_8c086848 + DAT_8c086750) = 6;
  *(undefined4 *)(DAT_8c08684c + DAT_8c086750) = DAT_8c086850;
  *(undefined4 *)(DAT_8c086854 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c086858;
  *(undefined4 *)(DAT_8c08685c + DAT_8c086750) = 6;
  *(undefined4 *)(DAT_8c086860 + DAT_8c086750) = DAT_8c086864;
  *(undefined4 *)(DAT_8c086868 + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c08686c;
  *(undefined4 *)(DAT_8c086870 + DAT_8c086750) = 10;
  *(undefined4 *)(DAT_8c086874 + DAT_8c086750) = DAT_8c086878;
  *(undefined4 *)(DAT_8c08687c + DAT_8c086750) = *(undefined4 *)PTR_PTR_8c086880;
  *(undefined4 *)(DAT_8c086884 + DAT_8c086750) = 10;
  *(undefined4 *)(DAT_8c086888 + DAT_8c086750) = DAT_8c08688c;
  *(undefined4 *)(DAT_8c086890 + DAT_8c086750) = DAT_8c086894;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c08689c,fVar9);
    *(undefined4 *)(DAT_8c086750 + DAT_8c086898) = (undefined4)DAT_8c08689c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c08689c._4_4_,(undefined4)DAT_8c08689c);
    *(undefined8 *)(DAT_8c086750 + DAT_8c086898) = uVar10;
  }
  uVar11 = CONCAT44(0x3f800000,(int)uVar10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c08689c._4_4_) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c086750 + DAT_8c08689c._4_4_) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = (ulonglong)*(uint *)(DAT_8c086750 + DAT_8c08689c._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c086750 + DAT_8c08689c._4_4_);
  }
  a7 = (double *)(DAT_8c086750 + DAT_8c086898);
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)a7,(int)uVar11);
  }
  else {
    dVar12 = *a7;
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 - dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c086750 + DAT_8c0868a8),fVar9);
  }
  else {
    dVar12 = *(double *)(DAT_8c086750 + DAT_8c0868a8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 / dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c086758,fVar9);
  }
  else {
    dVar12 = (double)CONCAT44(DAT_8c08675c,DAT_8c086758);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar12,0);
    dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0));
    uVar13 = (undefined2)(int)fVar9;
  }
  else {
    dVar12 = dVar12 / dVar12;
    uVar13 = (undefined2)(int)dVar12;
  }
  *(undefined2 *)(DAT_8c0868a4 + DAT_8c086750) = uVar13;
  if (*(short *)(DAT_8c0868a4 + DAT_8c086750) == 0) {
    *(undefined2 *)(DAT_8c0868a4 + DAT_8c086750) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c086764,SUB84(dVar12,0));
    *(undefined4 *)(DAT_8c086750 + DAT_8c0868ac) = DAT_8c086764;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086768,DAT_8c086764);
    *(undefined8 *)(DAT_8c086750 + DAT_8c0868ac) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c08676c,(int)uVar10);
    *(undefined4 *)(DAT_8c086750 + DAT_8c0868b0) = DAT_8c08676c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086770,DAT_8c08676c);
    *(undefined8 *)(DAT_8c086750 + DAT_8c0868b0) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c086774,(int)uVar10);
    *(undefined4 *)(DAT_8c086750 + DAT_8c0868b4) = DAT_8c086774;
  }
  else {
    uVar11 = CONCAT44(DAT_8c086778,DAT_8c086774);
    *(ulonglong *)(DAT_8c086750 + DAT_8c0868b4) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086750 + DAT_8c0868b8) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c086750 + DAT_8c0868b8) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086c04) = DAT_8c086c08;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086c04) = CONCAT44(DAT_8c086c0c,DAT_8c086c08);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086c0c) = DAT_8c086c10;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086c0c) = CONCAT44(PTR_PTR_8c086c14,DAT_8c086c10);
  }
  puVar3 = PTR_Class_129920_m0_015248_8c086c1c;
  (*(code *)PTR_Class_129920_m0_015248_8c086c1c)
            (DAT_8c086c00 + DAT_8c086c18,PTR_PTR_8c086c14,PTR_Class_129920_m0_015248_8c086c1c,a7);
  (*(code *)PTR_Class_129920_m0_015248_8c086c1c)
            (DAT_8c086c00 + DAT_8c086c20,PTR_PTR_8c086c14,puVar3,a7);
  *(undefined4 *)(DAT_8c086c24 + DAT_8c086c00) = DAT_8c086c28;
  *(undefined2 *)(DAT_8c086c2c + DAT_8c086c00) = 0x1b;
  uVar2 = DAT_8c086c34;
  *(undefined4 *)(DAT_8c086c30 + DAT_8c086c00) = DAT_8c086c34;
  uVar7 = 0x1b;
  *(undefined2 *)(DAT_8c086c38 + DAT_8c086c00) = 0x1b;
  puVar5 = auStack_14c + DAT_8c086c3c._4_4_;
  (*(code *)PTR_Vec3_set_xyz_8c086c44)(puVar5,uVar2,puVar5,0x1b);
  (*(code *)PTR_vec3_copy_8c023d8c_8c086c4c)
            (DAT_8c086c00 + DAT_8c086c48,auStack_14c + DAT_8c086c3c._4_4_,puVar5,uVar7);
  (*(code *)PTR_object_dtor_delete_8c086c50)
            (auStack_14c + DAT_8c086c3c._4_4_,0xffffffff,puVar5,uVar7);
  (*(code *)PTR_Vec3_set_xyz_8c086c44)
            (auStack_14c + DAT_8c086c58,PTR_Vec3_set_xyz_8c086c44,puVar5,uVar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c086c4c)
            (DAT_8c086c00 + DAT_8c086c5c,auStack_14c + DAT_8c086c58,puVar5,uVar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c086c50)(auStack_14c + DAT_8c086c58,0xffffffff,puVar5,uVar7);
  (*(code *)PTR_Vec3_set_xyz_8c086c44)(auStack_14c + DAT_8c086c60._4_4_,uVar2,puVar5,uVar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c086c4c)
            (DAT_8c086c00 + DAT_8c086c68,auStack_14c + DAT_8c086c60._4_4_,puVar5,uVar7);
  (*(code *)PTR_object_dtor_delete_8c086c50)
            (auStack_14c + DAT_8c086c60._4_4_,0xffffffff,puVar5,uVar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086c6c) = (undefined4)DAT_8c086c70;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086c6c) =
         CONCAT44(DAT_8c086c70._4_4_,(undefined4)DAT_8c086c70);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086c70._4_4_) = DAT_8c086c78;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086c70._4_4_) = CONCAT44(DAT_8c086c7c,DAT_8c086c78);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086c7c) = DAT_8c086c80;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086c7c) = CONCAT44(DAT_8c086c84,DAT_8c086c80);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086c84) = DAT_8c086c88;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086c84) = CONCAT44(DAT_8c086c8c,DAT_8c086c88);
  }
  iStack_13c = DAT_8c086c00;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c086c90,*(undefined4 *)(DAT_8c086c00 + DAT_8c086c8c));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c086c00 + DAT_8c086c8c);
    dVar12 = (double)CONCAT44(DAT_8c086c94,DAT_8c086c90);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c086c00 + DAT_8c086c8c) = fVar9;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086c8c) = in_xd0;
  }
  *(undefined **)(DAT_8c086c94 + DAT_8c086c00) = PTR_PTR_8c086c98;
  *(undefined **)(DAT_8c086c9c + DAT_8c086c00) = PTR_PTR_8c086ca0;
  *(undefined4 *)(DAT_8c086ca4 + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086ca8;
  *(undefined4 *)(DAT_8c086cac + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086cb0;
  *(undefined4 *)(DAT_8c086cb4 + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086cb8;
  *(undefined4 *)(DAT_8c086cbc + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086cc0;
  *(undefined4 *)(DAT_8c086cc4 + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086cc8;
  *(undefined4 *)(DAT_8c086ccc + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086cd0;
  *(undefined4 *)(DAT_8c086cd4 + DAT_8c086c00) = 9;
  *(undefined4 *)(DAT_8c086cd8 + DAT_8c086c00) = DAT_8c086cdc;
  *(undefined4 *)(DAT_8c086ce0 + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086ce4;
  *(undefined4 *)(DAT_8c086ce8 + DAT_8c086c00) = 9;
  *(undefined4 *)(DAT_8c086cec + DAT_8c086c00) = DAT_8c086cf0;
  *(undefined4 *)(DAT_8c086cf4 + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086cf8;
  *(undefined4 *)(DAT_8c086cfc + DAT_8c086c00) = 10;
  *(undefined4 *)(DAT_8c086d00 + DAT_8c086c00) = DAT_8c086d04;
  *(undefined4 *)(DAT_8c086d08 + DAT_8c086c00) = *(undefined4 *)PTR_PTR_8c086d0c;
  *(undefined4 *)(DAT_8c086d10 + DAT_8c086c00) = 10;
  *(undefined4 *)(DAT_8c086d14 + DAT_8c086c00) = DAT_8c086d18;
  *(undefined4 *)(DAT_8c086d1c + DAT_8c086c00) = DAT_8c086d20;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c086d28,fVar9);
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086d24) = (undefined4)DAT_8c086d28;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086d28._4_4_,(undefined4)DAT_8c086d28);
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086d24) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c086d30,(int)uVar10);
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086d28._4_4_) = DAT_8c086d30;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086d34,DAT_8c086d30);
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086d28._4_4_) = uVar10;
  }
  uVar2 = (undefined4)uVar10;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)(DAT_8c086c00 + DAT_8c086d28._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c086c00 + DAT_8c086d28._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c086c00 + DAT_8c086d24),uVar2);
  }
  else {
    dVar12 = *(double *)(DAT_8c086c00 + DAT_8c086d24);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 - dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c086c00 + DAT_8c086d38),fVar9);
  }
  else {
    dVar12 = *(double *)(DAT_8c086c00 + DAT_8c086d38);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 / dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c086d3c,fVar9);
  }
  else {
    dVar12 = (double)CONCAT44(_DAT_8c086d40,DAT_8c086d3c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar12,0);
    dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0));
    uVar13 = (undefined2)(int)fVar9;
  }
  else {
    dVar12 = dVar12 / dVar12;
    uVar13 = (undefined2)(int)dVar12;
  }
  *(undefined2 *)(DAT_8c086d34 + DAT_8c086c00) = uVar13;
  if (*(short *)(DAT_8c086d34 + DAT_8c086c00) == 0) {
    *(undefined2 *)(DAT_8c086d34 + DAT_8c086c00) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c086d44,SUB84(dVar12,0));
    *(undefined4 *)(DAT_8c086c00 + _DAT_8c086d40) = DAT_8c086d44;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086d48,DAT_8c086d44);
    *(undefined8 *)(DAT_8c086c00 + _DAT_8c086d40) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c086d4c,(int)uVar10);
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086d48) = DAT_8c086d4c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c086d50,DAT_8c086d4c);
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086d48) = uVar10;
  }
  a6 = (ulonglong *)(DAT_8c086c00 + DAT_8c086d50);
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c086d54,(int)uVar10);
    *(undefined4 *)a6 = DAT_8c086d54;
  }
  else {
    uVar11 = CONCAT44(DAT_8c086d58,DAT_8c086d54);
    *a6 = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086d58) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c086c00 + DAT_8c086d58) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086d5c) = DAT_8c086d60;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086d5c) = CONCAT44(DAT_8c086d64,DAT_8c086d60);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c086c00 + DAT_8c086d64) = DAT_8c086d68;
  }
  else {
    *(undefined8 *)(DAT_8c086c00 + DAT_8c086d64) = CONCAT44(PTR_PTR_8c086d6c,DAT_8c086d68);
  }
  a7_00 = DAT_8c086c00;
  (*(code *)PTR_Class_129920_m0_015248_8c086c1c)
            (DAT_8c086c00 + DAT_8c086d70,PTR_PTR_8c086d6c,a6,DAT_8c086c00);
  (*(code *)PTR_Class_129920_m0_015248_8c086c1c)
            (DAT_8c086c00 + DAT_8c086d74,PTR_PTR_8c086d6c,DAT_8c086d74,a7_00);
  *(undefined4 *)(DAT_8c086d78 + DAT_8c086c00) = DAT_8c086d7c;
  iVar6 = DAT_8c086d80;
  *(undefined2 *)(DAT_8c086d80 + DAT_8c086c00) = 0x1c;
  *(undefined4 *)(DAT_8c086d84 + DAT_8c086c00) = DAT_8c086d88;
  iVar4 = DAT_8c086d8c;
  *(undefined2 *)(DAT_8c086d8c + DAT_8c086c00) = 0x1c;
  (*(code *)PTR_Vec3_set_xyz_8c0870e8)(auStack_14c + DAT_8c086d90,iVar4,iVar6,a7_00);
  iVar4 = DAT_8c0870f4;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0870f8)
            (DAT_8c0870f0 + DAT_8c0870f4,auStack_14c + DAT_8c0870ec,iVar6,DAT_8c0870f4);
  uVar7 = 0xffffffff;
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0870fc)(auStack_14c + DAT_8c0870ec,0xffffffff,0xffffffff,iVar4)
  ;
  (*(code *)PTR_Vec3_set_xyz_8c0870e8)(auStack_14c + DAT_8c087104,uVar2,uVar7,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0870f8)
            (DAT_8c0870f0 + DAT_8c087108,auStack_14c + DAT_8c087104,uVar7,iVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0870fc)(auStack_14c + DAT_8c087104,0xffffffff,uVar7,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c0870e8)(auStack_14c + DAT_8c08710c._4_4_,uVar2,uVar7,iVar4);
  iVar6 = DAT_8c0870f0 + DAT_8c087114;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0870f8)(iVar6,auStack_14c + DAT_8c08710c._4_4_,iVar6,iVar4);
  (*(code *)PTR_object_dtor_delete_8c0870fc)
            (auStack_14c + DAT_8c08710c._4_4_,0xffffffff,iVar6,iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c087118) = (undefined4)DAT_8c08711c;
  }
  else {
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c087118) =
         CONCAT44(DAT_8c08711c._4_4_,(undefined4)DAT_8c08711c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c08711c._4_4_) = DAT_8c087124;
  }
  else {
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c08711c._4_4_) = CONCAT44(DAT_8c087128,DAT_8c087124);
  }
  iStack_140 = DAT_8c0870f0;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c08712c,*(undefined4 *)(DAT_8c0870f0 + DAT_8c087128));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c0870f0 + DAT_8c087128);
    dVar12 = (double)CONCAT44(DAT_8c087130,DAT_8c08712c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c0870f0 + DAT_8c087128) = fVar9;
  }
  else {
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c087128) = in_xd0;
  }
  *(undefined **)(DAT_8c087130 + DAT_8c0870f0) = PTR_PTR_8c087134;
  *(undefined **)(DAT_8c087138 + DAT_8c0870f0) = PTR_PTR_8c08713c;
  *(undefined4 *)(DAT_8c087140 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c087144;
  *(undefined4 *)(DAT_8c087148 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c08714c;
  *(undefined4 *)(DAT_8c087150 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c087154;
  *(undefined4 *)(DAT_8c087158 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c08715c;
  *(undefined4 *)(DAT_8c087160 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c087164;
  *(undefined4 *)(DAT_8c087168 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c08716c;
  *(undefined4 *)(DAT_8c087170 + DAT_8c0870f0) = 9;
  *(undefined4 *)(DAT_8c087174 + DAT_8c0870f0) = DAT_8c087178;
  *(undefined4 *)(DAT_8c08717c + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c087180;
  *(undefined4 *)(DAT_8c087184 + DAT_8c0870f0) = 9;
  *(undefined4 *)(DAT_8c087188 + DAT_8c0870f0) = DAT_8c08718c;
  *(undefined4 *)(DAT_8c087190 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c087194;
  *(undefined4 *)(DAT_8c087198 + DAT_8c0870f0) = 10;
  *(undefined4 *)(DAT_8c08719c + DAT_8c0870f0) = DAT_8c0871a0;
  *(undefined4 *)(DAT_8c0871a4 + DAT_8c0870f0) = *(undefined4 *)PTR_PTR_8c0871a8;
  *(undefined4 *)(DAT_8c0871ac + DAT_8c0870f0) = 10;
  *(undefined4 *)(DAT_8c0871b0 + DAT_8c0870f0) = DAT_8c0871b4;
  *(undefined4 *)(DAT_8c0871b8 + DAT_8c0870f0) = DAT_8c0871bc;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c0871c4,fVar9);
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c0871c0) = (undefined4)DAT_8c0871c4;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0871c4._4_4_,(undefined4)DAT_8c0871c4);
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c0871c0) = uVar10;
  }
  uVar11 = CONCAT44(0x3f800000,(int)uVar10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c0871c4._4_4_) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c0870f0 + DAT_8c0871c4._4_4_) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = (ulonglong)*(uint *)(DAT_8c0870f0 + DAT_8c0871c4._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c0870f0 + DAT_8c0871c4._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c0870f0 + DAT_8c0871c0),(int)uVar11);
  }
  else {
    dVar12 = *(double *)(DAT_8c0870f0 + DAT_8c0871c0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 - dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c0870f0 + DAT_8c0871d0),fVar9);
  }
  else {
    dVar12 = *(double *)(DAT_8c0870f0 + DAT_8c0871d0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 / dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c0871d4,fVar9);
  }
  else {
    dVar12 = (double)CONCAT44(_DAT_8c0871d8,DAT_8c0871d4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar12,0);
    dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0));
    uVar13 = (undefined2)(int)fVar9;
  }
  else {
    dVar12 = dVar12 / dVar12;
    uVar13 = (undefined2)(int)dVar12;
  }
  *(undefined2 *)(DAT_8c0871cc + DAT_8c0870f0) = uVar13;
  sVar1 = *(short *)(DAT_8c0871cc + DAT_8c0870f0);
  if (sVar1 == 0) {
    *(undefined2 *)(DAT_8c0871cc + DAT_8c0870f0) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0871dc,SUB84(dVar12,0));
    *(undefined4 *)(DAT_8c0870f0 + _DAT_8c0871d8) = DAT_8c0871dc;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0871e0,DAT_8c0871dc);
    *(undefined8 *)(DAT_8c0870f0 + _DAT_8c0871d8) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0871e4,(int)uVar10);
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c0871e0) = DAT_8c0871e4;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0871e8,DAT_8c0871e4);
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c0871e0) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c0871ec,(int)uVar10);
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c0871e8) = DAT_8c0871ec;
  }
  else {
    uVar11 = CONCAT44(DAT_8c0871f0,DAT_8c0871ec);
    *(ulonglong *)(DAT_8c0870f0 + DAT_8c0871e8) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c0871f0) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c0870f0 + DAT_8c0871f0) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c0871f4) = DAT_8c0871f8;
  }
  else {
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c0871f4) = CONCAT44(DAT_8c0871fc,DAT_8c0871f8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c0871fc) = DAT_8c087200;
  }
  else {
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c0871fc) = CONCAT44(PTR_PTR_8c087204,DAT_8c087200);
  }
  puVar3 = PTR_Class_129920_m0_015248_8c08720c;
  (*(code *)PTR_Class_129920_m0_015248_8c08720c)
            (DAT_8c0870f0 + DAT_8c087208,PTR_PTR_8c087204,PTR_Class_129920_m0_015248_8c08720c,
             (int)sVar1);
  (*(code *)PTR_Class_129920_m0_015248_8c08720c)
            (DAT_8c0870f0 + DAT_8c087210,PTR_PTR_8c087204,puVar3,PTR_Class_129920_m0_015248_8c08720c
            );
  uVar2 = DAT_8c087218;
  *(undefined4 *)(DAT_8c087214 + DAT_8c0870f0) = DAT_8c087218;
  uVar7 = 0x1c;
  *(undefined2 *)(DAT_8c08721c + DAT_8c0870f0) = 0x1c;
  *(undefined4 *)(DAT_8c087220 + DAT_8c0870f0) = DAT_8c087224;
  iVar6 = DAT_8c0870f0;
  *(undefined2 *)(DAT_8c087228 + DAT_8c0870f0) = 0x1c;
  (*(code *)PTR_Vec3_set_xyz_8c0870e8)(auStack_14c + DAT_8c08722c._4_4_,iVar6,0x1c,uVar2);
  puVar8 = PTR_vec3_copy_8c023d8c_8c0870f8;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0870f8)
            (DAT_8c0870f0 + DAT_8c087234,auStack_14c + DAT_8c08722c._4_4_,uVar7,
             PTR_vec3_copy_8c023d8c_8c0870f8);
  puVar3 = PTR_object_dtor_delete_8c0870fc;
  (*(code *)PTR_object_dtor_delete_8c0870fc)
            (auStack_14c + DAT_8c08722c._4_4_,0xffffffff,PTR_object_dtor_delete_8c0870fc,puVar8);
  (*(code *)PTR_Vec3_set_xyz_8c0870e8)
            (auStack_14c + DAT_8c087238,auStack_14c + DAT_8c087238,puVar3,puVar8);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0870f8)
            (DAT_8c0870f0 + DAT_8c08723c,auStack_14c + DAT_8c087238,PTR_vec3_copy_8c023d8c_8c0870f8,
             puVar8);
  puVar5 = auStack_14c + DAT_8c087238;
  (*(code *)PTR_object_dtor_delete_8c0870fc)(puVar5,0xffffffff,puVar5,puVar8);
  (*(code *)PTR_Vec3_set_xyz_8c0870e8)
            (auStack_14c + DAT_8c087240,auStack_14c + DAT_8c087240,puVar5,puVar8);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0870f8)
            (DAT_8c0870f0 + DAT_8c087244,auStack_14c + DAT_8c087240,PTR_vec3_copy_8c023d8c_8c0870f8,
             puVar8);
  (*(code *)PTR_object_dtor_delete_8c0870fc)
            (auStack_14c + DAT_8c087240,0xffffffff,auStack_14c + DAT_8c087240,puVar8);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0870f0 + DAT_8c087248) = (undefined4)DAT_8c087580;
  }
  else {
    *(undefined8 *)(DAT_8c0870f0 + DAT_8c087248) =
         CONCAT44(DAT_8c087580._4_4_,(undefined4)DAT_8c087580);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087588) = DAT_8c08758c;
  }
  else {
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c087588) = CONCAT44(DAT_8c087590,DAT_8c08758c);
  }
  iStack_144 = DAT_8c087580._4_4_;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c087594,*(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087590));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c087590);
    dVar12 = (double)CONCAT44(DAT_8c087598,DAT_8c087594);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c087580._4_4_ + DAT_8c087590) = fVar9;
  }
  else {
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c087590) = in_xd0;
  }
  *(undefined **)(DAT_8c087598 + DAT_8c087580._4_4_) = PTR_PTR_8c08759c;
  *(undefined **)(DAT_8c0875a0 + DAT_8c087580._4_4_) = PTR_PTR_8c0875a4;
  *(undefined4 *)(DAT_8c0875a8 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875ac;
  *(undefined4 *)(DAT_8c0875b0 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875b4;
  *(undefined4 *)(DAT_8c0875b8 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875bc;
  *(undefined4 *)(DAT_8c0875c0 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875c4;
  *(undefined4 *)(DAT_8c0875c8 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875cc;
  *(undefined4 *)(DAT_8c0875d0 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875d4;
  *(undefined4 *)(DAT_8c0875d8 + DAT_8c087580._4_4_) = 9;
  *(undefined4 *)(DAT_8c0875dc + DAT_8c087580._4_4_) = DAT_8c0875e0;
  *(undefined4 *)(DAT_8c0875e4 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875e8;
  *(undefined4 *)(DAT_8c0875ec + DAT_8c087580._4_4_) = 9;
  *(undefined4 *)(DAT_8c0875f0 + DAT_8c087580._4_4_) = DAT_8c0875f4;
  *(undefined4 *)(DAT_8c0875f8 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0875fc;
  *(undefined4 *)(DAT_8c087600 + DAT_8c087580._4_4_) = 10;
  *(undefined4 *)(DAT_8c087604 + DAT_8c087580._4_4_) = DAT_8c087608;
  *(undefined4 *)(DAT_8c08760c + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c087610;
  *(undefined4 *)(DAT_8c087614 + DAT_8c087580._4_4_) = 10;
  *(undefined4 *)(DAT_8c087618 + DAT_8c087580._4_4_) = DAT_8c08761c;
  *(undefined4 *)(DAT_8c087620 + DAT_8c087580._4_4_) = DAT_8c087624;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087628) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c087628) = CONCAT44(0x3f800000,fVar9);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087630,fVar9);
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c08762c) = DAT_8c087630;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087634,DAT_8c087630);
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c08762c) = uVar10;
  }
  uVar2 = (undefined4)uVar10;
  a6_00 = (undefined8 *)(DAT_8c087580._4_4_ + DAT_8c08762c);
  if (in_FPSCR_SZ == '\0') {
    uVar2 = *(undefined4 *)a6_00;
  }
  else {
    in_xd0 = *a6_00;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087628),uVar2);
  }
  else {
    dVar12 = *(double *)(DAT_8c087580._4_4_ + DAT_8c087628);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 - dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087638),fVar9);
  }
  else {
    dVar12 = *(double *)(DAT_8c087580._4_4_ + DAT_8c087638);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 / dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c08763c,fVar9);
  }
  else {
    dVar12 = (double)CONCAT44(_DAT_8c087640,DAT_8c08763c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar12,0);
    dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0));
    uVar13 = (undefined2)(int)fVar9;
  }
  else {
    dVar12 = dVar12 / dVar12;
    uVar13 = (undefined2)(int)dVar12;
  }
  *(undefined2 *)(DAT_8c087634 + DAT_8c087580._4_4_) = uVar13;
  if (*(short *)(DAT_8c087634 + DAT_8c087580._4_4_) == 0) {
    *(undefined2 *)(DAT_8c087634 + DAT_8c087580._4_4_) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087644,SUB84(dVar12,0));
    *(undefined4 *)(DAT_8c087580._4_4_ + _DAT_8c087640) = DAT_8c087644;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087648,DAT_8c087644);
    *(undefined8 *)(DAT_8c087580._4_4_ + _DAT_8c087640) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c08764c,(int)uVar10);
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087648) = DAT_8c08764c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087650,DAT_8c08764c);
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c087648) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c087654,(int)uVar10);
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087650) = DAT_8c087654;
  }
  else {
    uVar11 = CONCAT44(DAT_8c087658,DAT_8c087654);
    *(ulonglong *)(DAT_8c087580._4_4_ + DAT_8c087650) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087658) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c087580._4_4_ + DAT_8c087658) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087660,(int)uVar11);
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c08765c) = DAT_8c087660;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087664,DAT_8c087660);
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c08765c) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087668,(int)uVar10);
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c087664) = DAT_8c087668;
  }
  else {
    uVar10 = CONCAT44(PTR_PTR_8c08766c,DAT_8c087668);
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c087664) = uVar10;
  }
  uVar2 = (undefined4)uVar10;
  (*(code *)PTR_Class_129920_m0_015248_8c087674)
            (DAT_8c087580._4_4_ + DAT_8c087670,PTR_PTR_8c08766c,a6_00,
             PTR_Class_129920_m0_015248_8c087674);
  puVar3 = PTR_Class_129920_m0_015248_8c087674;
  iVar4 = DAT_8c087580._4_4_;
  (*(code *)PTR_Class_129920_m0_015248_8c087674)
            (DAT_8c087580._4_4_ + DAT_8c087678,PTR_PTR_8c08766c,PTR_Class_129920_m0_015248_8c087674,
             DAT_8c087580._4_4_);
  *(undefined4 *)(DAT_8c08767c + DAT_8c087580._4_4_) = DAT_8c087680;
  *(undefined2 *)(DAT_8c087684 + DAT_8c087580._4_4_) = 0x1c;
  iVar6 = DAT_8c087688;
  *(undefined4 *)(DAT_8c087688 + DAT_8c087580._4_4_) = DAT_8c08768c;
  *(undefined2 *)(DAT_8c087690 + DAT_8c087580._4_4_) = 0x1c;
  (*(code *)PTR_Vec3_set_xyz_8c087698)(auStack_14c + DAT_8c087694,iVar6,puVar3,iVar4);
  iVar6 = DAT_8c087580._4_4_ + DAT_8c08769c;
  puVar3 = PTR_vec3_copy_8c023d8c_8c0876a0;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0876a0)
            (iVar6,auStack_14c + DAT_8c087694,PTR_vec3_copy_8c023d8c_8c0876a0,iVar6);
  uVar7 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c0876a4)(auStack_14c + DAT_8c087694,0xffffffff,puVar3,iVar6);
  (*(code *)PTR_Vec3_set_xyz_8c087698)(auStack_d8,uVar7,puVar3,iVar6);
  (*(code *)PTR_vec3_copy_8c023d8c_8c0876a0)
            (DAT_8c087580._4_4_ + _DAT_8c0876b0,auStack_d8,puVar3,iVar6);
  uVar7 = 0xffffffff;
  puVar8 = PTR_object_dtor_delete_8c0876a4;
  (*(code *)PTR_object_dtor_delete_8c0876a4)
            (auStack_d8,0xffffffff,puVar3,PTR_object_dtor_delete_8c0876a4);
  (*(code *)PTR_Vec3_set_xyz_8c087698)(auStack_e4,uVar7,PTR_Vec3_set_xyz_8c087698,puVar8);
  iVar6 = DAT_8c087580._4_4_ + _DAT_8c0876bc;
  (*(code *)PTR_vec3_copy_8c023d8c_8c0876a0)(iVar6,auStack_e4,iVar6,puVar8);
  (*(code *)PTR_object_dtor_delete_8c0876a4)(auStack_e4,0xffffffff,iVar6,puVar8);
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c08758c,uVar2);
    *(undefined4 *)(DAT_8c087580._4_4_ + DAT_8c0876c0) = DAT_8c08758c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087590,DAT_8c08758c);
    *(undefined8 *)(DAT_8c087580._4_4_ + DAT_8c0876c0) = uVar10;
  }
  *(undefined **)(DAT_8c0876c4 + DAT_8c087580._4_4_) = PTR_PTR_8c0876c8;
  *(undefined **)(DAT_8c0876cc + DAT_8c087580._4_4_) = PTR_PTR_8c0876d0;
  *(undefined4 *)(DAT_8c0876d4 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0876d8;
  *(undefined4 *)(DAT_8c0876dc + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0876e0;
  *(undefined4 *)(DAT_8c0876e4 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0876e8;
  *(undefined4 *)(DAT_8c0876ec + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0876f0;
  *(undefined4 *)(DAT_8c0876f4 + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c0876f8;
  *(undefined4 *)(DAT_8c0876fc + DAT_8c087580._4_4_) = *(undefined4 *)PTR_PTR_8c087700;
  *(undefined4 *)(DAT_8c087704 + DAT_8c087580._4_4_) = 0xd;
  *(undefined4 *)(DAT_8c087708 + DAT_8c087580._4_4_) = DAT_8c08770c;
  *(undefined4 *)(DAT_8c087a48 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087a4c;
  *(undefined4 *)(DAT_8c087a50 + DAT_8c087a44) = 0xd;
  *(undefined4 *)(DAT_8c087a54 + DAT_8c087a44) = DAT_8c087a58;
  *(undefined4 *)(DAT_8c087a5c + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087a60;
  *(undefined4 *)(DAT_8c087a64 + DAT_8c087a44) = 10;
  *(undefined4 *)(DAT_8c087a68 + DAT_8c087a44) = DAT_8c087a6c;
  *(undefined4 *)(DAT_8c087a70 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087a74;
  *(undefined4 *)(DAT_8c087a78 + DAT_8c087a44) = 10;
  *(undefined4 *)(DAT_8c087a7c + DAT_8c087a44) = DAT_8c087a80;
  *(undefined4 *)(DAT_8c087a84 + DAT_8c087a44) = DAT_8c087a88;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c087a90,(int)uVar10);
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087a8c) = (undefined4)DAT_8c087a90;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087a90._4_4_,(undefined4)DAT_8c087a90);
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087a8c) = uVar10;
  }
  uVar11 = CONCAT44(0x3f800000,(int)uVar10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087a90._4_4_) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c087a44 + DAT_8c087a90._4_4_) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = (ulonglong)*(uint *)(DAT_8c087a44 + DAT_8c087a90._4_4_);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c087a44 + DAT_8c087a90._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c087a44 + DAT_8c087a8c),(int)uVar11);
  }
  else {
    dVar12 = *(double *)(DAT_8c087a44 + DAT_8c087a8c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 - dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c087a44 + DAT_8c087a9c),fVar9);
  }
  else {
    dVar12 = *(double *)(DAT_8c087a44 + DAT_8c087a9c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 / dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c087aa0,fVar9);
  }
  else {
    dVar12 = (double)CONCAT44(_DAT_8c087aa4,DAT_8c087aa0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar12,0);
    dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0));
    uVar13 = (undefined2)(int)fVar9;
  }
  else {
    dVar12 = dVar12 / dVar12;
    uVar13 = (undefined2)(int)dVar12;
  }
  *(undefined2 *)(DAT_8c087a98 + DAT_8c087a44) = uVar13;
  if (*(short *)(DAT_8c087a98 + DAT_8c087a44) == 0) {
    *(undefined2 *)(DAT_8c087a98 + DAT_8c087a44) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087aa8,SUB84(dVar12,0));
    *(undefined4 *)(DAT_8c087a44 + _DAT_8c087aa4) = DAT_8c087aa8;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087aac,DAT_8c087aa8);
    *(undefined8 *)(DAT_8c087a44 + _DAT_8c087aa4) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087ab0,(int)uVar10);
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087aac) = DAT_8c087ab0;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087ab4,DAT_8c087ab0);
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087aac) = uVar10;
  }
  iVar6 = DAT_8c087a44;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c087ab8,(int)uVar10);
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087ab4) = DAT_8c087ab8;
  }
  else {
    uVar11 = CONCAT44(DAT_8c087abc,DAT_8c087ab8);
    *(ulonglong *)(DAT_8c087a44 + DAT_8c087ab4) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087abc) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c087a44 + DAT_8c087abc) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087ac0) = DAT_8c087ac4;
  }
  else {
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087ac0) = CONCAT44(DAT_8c087ac8,DAT_8c087ac4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087ac8) = DAT_8c087acc;
  }
  else {
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087ac8) = CONCAT44(DAT_8c087ad0,DAT_8c087acc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087ad0) = DAT_8c087ad4;
  }
  else {
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087ad0) = CONCAT44(PTR_PTR_8c087ad8,DAT_8c087ad4);
  }
  (*(code *)PTR_Class_129920_m0_015248_8c087ae0)
            (DAT_8c087a44 + DAT_8c087adc,PTR_PTR_8c087ad8,PTR_Class_129920_m0_015248_8c087ae0,iVar6)
  ;
  (*(code *)PTR_Class_129920_m0_015248_8c087ae0)
            (DAT_8c087a44 + DAT_8c087ae4,PTR_PTR_8c087ad8,DAT_8c087a44,iVar6);
  *(undefined4 *)(DAT_8c087ae8 + DAT_8c087a44) = DAT_8c087aec;
  *(undefined2 *)(DAT_8c087af0 + DAT_8c087a44) = 0x29;
  *(undefined4 *)(DAT_8c087af4 + DAT_8c087a44) = DAT_8c087af8;
  iVar4 = DAT_8c087afc;
  *(undefined2 *)(DAT_8c087afc + DAT_8c087a44) = 0x29;
  (*(code *)PTR_Vec3_set_xyz_8c087b00)(auStack_f0,0x29,iVar4,iVar6);
  (*(code *)PTR_vec3_copy_8c023d8c_8c087b08)(DAT_8c087a44 + DAT_8c087b04,auStack_f0,iVar4,iVar6);
  uVar2 = 0xffffffff;
  puVar3 = PTR_object_dtor_delete_8c087b0c;
  (*(code *)PTR_object_dtor_delete_8c087b0c)
            (auStack_f0,0xffffffff,PTR_object_dtor_delete_8c087b0c,iVar6);
  (*(code *)PTR_Vec3_set_xyz_8c087b00)(auStack_fc,uVar2,puVar3,iVar6);
  iVar6 = DAT_8c087a44 + _DAT_8c087b18;
  puVar3 = PTR_vec3_copy_8c023d8c_8c087b08;
  (*(code *)PTR_vec3_copy_8c023d8c_8c087b08)(iVar6,auStack_fc,PTR_vec3_copy_8c023d8c_8c087b08,iVar6)
  ;
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c087b0c)(auStack_fc,0xffffffff,puVar3,iVar6);
  (*(code *)PTR_Vec3_set_xyz_8c087b00)(auStack_108,uVar2,puVar3,iVar6);
  (*(code *)PTR_vec3_copy_8c023d8c_8c087b08)(DAT_8c087a44 + _DAT_8c087b24,auStack_108,puVar3,iVar6);
  (*(code *)PTR_object_dtor_delete_8c087b0c)(auStack_108,0xffffffff,puVar3,iVar6);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087b28) = (undefined4)DAT_8c087b2c;
  }
  else {
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087b28) =
         CONCAT44(DAT_8c087b2c._4_4_,(undefined4)DAT_8c087b2c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087b2c._4_4_) = DAT_8c087b34;
  }
  else {
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087b2c._4_4_) = CONCAT44(DAT_8c087b38,DAT_8c087b34);
  }
  iStack_148 = DAT_8c087a44;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c087b3c,*(undefined4 *)(DAT_8c087a44 + DAT_8c087b38));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c087a44 + DAT_8c087b38);
    dVar12 = (double)CONCAT44(DAT_8c087b40,DAT_8c087b3c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c087a44 + DAT_8c087b38) = fVar9;
  }
  else {
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087b38) = in_xd0;
  }
  *(undefined **)(DAT_8c087b40 + DAT_8c087a44) = PTR_PTR_8c087b44;
  *(undefined **)(DAT_8c087b48 + DAT_8c087a44) = PTR_PTR_8c087b4c;
  *(undefined4 *)(DAT_8c087b50 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087b54;
  *(undefined4 *)(DAT_8c087b58 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087b5c;
  *(undefined4 *)(DAT_8c087b60 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087b64;
  *(undefined4 *)(DAT_8c087b68 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087b6c;
  *(undefined4 *)(DAT_8c087b70 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087b74;
  *(undefined4 *)(DAT_8c087b78 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087b7c;
  *(undefined4 *)(DAT_8c087b80 + DAT_8c087a44) = 0xd;
  *(undefined4 *)(DAT_8c087b84 + DAT_8c087a44) = DAT_8c087b88;
  *(undefined4 *)(DAT_8c087b8c + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087b90;
  *(undefined4 *)(DAT_8c087b94 + DAT_8c087a44) = 0xd;
  *(undefined4 *)(DAT_8c087b98 + DAT_8c087a44) = DAT_8c087b9c;
  *(undefined4 *)(DAT_8c087ba0 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087ba4;
  *(undefined4 *)(DAT_8c087ba8 + DAT_8c087a44) = 10;
  *(undefined4 *)(DAT_8c087bac + DAT_8c087a44) = DAT_8c087bb0;
  *(undefined4 *)(DAT_8c087bb4 + DAT_8c087a44) = *(undefined4 *)PTR_PTR_8c087bb8;
  *(undefined4 *)(DAT_8c087bbc + DAT_8c087a44) = 10;
  *(undefined4 *)(DAT_8c087bc0 + DAT_8c087a44) = DAT_8c087bc4;
  *(undefined4 *)(DAT_8c087bc8 + DAT_8c087a44) = DAT_8c087bcc;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087a44 + DAT_8c087bd0) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c087a44 + DAT_8c087bd0) = CONCAT44(0x3f800000,fVar9);
  }
  uVar11 = CONCAT44(0x3f800000,fVar9);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087e1c) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c087e18 + DAT_8c087e1c) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = (ulonglong)*(uint *)(DAT_8c087e18 + DAT_8c087e1c);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c087e18 + DAT_8c087e1c);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c087e18 + DAT_8c087e24),(int)uVar11);
  }
  else {
    dVar12 = *(double *)(DAT_8c087e18 + DAT_8c087e24);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 - dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c087e18 + DAT_8c087e28),fVar9);
  }
  else {
    dVar12 = *(double *)(DAT_8c087e18 + DAT_8c087e28);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 / dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c087e2c,fVar9);
  }
  else {
    dVar12 = (double)CONCAT44(_DAT_8c087e30,DAT_8c087e2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar12 >> 0x20) / SUB84(dVar12,0);
    dVar12 = (double)CONCAT44(fVar9,SUB84(dVar12,0));
    uVar13 = (undefined2)(int)fVar9;
  }
  else {
    dVar12 = dVar12 / dVar12;
    uVar13 = (undefined2)(int)dVar12;
  }
  *(undefined2 *)(DAT_8c087e20 + DAT_8c087e18) = uVar13;
  if (*(short *)(DAT_8c087e20 + DAT_8c087e18) == 0) {
    *(undefined2 *)(DAT_8c087e20 + DAT_8c087e18) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087e34,SUB84(dVar12,0));
    *(undefined4 *)(DAT_8c087e18 + _DAT_8c087e30) = DAT_8c087e34;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087e38,DAT_8c087e34);
    *(undefined8 *)(DAT_8c087e18 + _DAT_8c087e30) = uVar10;
  }
  iVar6 = DAT_8c087e18;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c087e3c,(int)uVar10);
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087e38) = DAT_8c087e3c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c087e40,DAT_8c087e3c);
    *(undefined8 *)(DAT_8c087e18 + DAT_8c087e38) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c087e44,(int)uVar10);
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087e40) = DAT_8c087e44;
  }
  else {
    uVar11 = CONCAT44(DAT_8c087e48,DAT_8c087e44);
    *(ulonglong *)(DAT_8c087e18 + DAT_8c087e40) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087e48) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c087e18 + DAT_8c087e48) = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087e4c) = DAT_8c087e50;
  }
  else {
    *(undefined8 *)(DAT_8c087e18 + DAT_8c087e4c) = CONCAT44(DAT_8c087e54,DAT_8c087e50);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087e54) = DAT_8c087e58;
  }
  else {
    *(undefined8 *)(DAT_8c087e18 + DAT_8c087e54) = CONCAT44(DAT_8c087e5c,DAT_8c087e58);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087e5c) = DAT_8c087e60;
  }
  else {
    *(undefined8 *)(DAT_8c087e18 + DAT_8c087e5c) = CONCAT44(PTR_PTR_8c087e64,DAT_8c087e60);
  }
  (*(code *)PTR_Class_129920_m0_015248_8c087e6c)
            (DAT_8c087e18 + DAT_8c087e68,PTR_PTR_8c087e64,PTR_Class_129920_m0_015248_8c087e6c,iVar6)
  ;
  puVar3 = PTR_Class_129920_m0_015248_8c087e6c;
  (*(code *)PTR_Class_129920_m0_015248_8c087e6c)
            (DAT_8c087e18 + DAT_8c087e70,PTR_PTR_8c087e64,PTR_Class_129920_m0_015248_8c087e6c,iVar6)
  ;
  *(undefined4 *)(DAT_8c087e74 + DAT_8c087e18) = DAT_8c087e78;
  *(undefined2 *)(DAT_8c087e7c + DAT_8c087e18) = 0x34;
  *(undefined4 *)(DAT_8c087e80 + DAT_8c087e18) = DAT_8c087e84;
  iVar4 = DAT_8c087e88;
  iVar6 = DAT_8c087e18;
  *(undefined2 *)(DAT_8c087e88 + DAT_8c087e18) = 0x34;
  (*(code *)PTR_Vec3_set_xyz_8c087e8c)(auStack_114,iVar6,puVar3,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c087e94)
            (DAT_8c087e18 + DAT_8c087e90,auStack_114,DAT_8c087e90,iVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c087e98)(auStack_114,0xffffffff,auStack_114,iVar4);
  puVar3 = PTR_Vec3_set_xyz_8c087e8c;
  (*(code *)PTR_Vec3_set_xyz_8c087e8c)(auStack_120,uVar2,PTR_Vec3_set_xyz_8c087e8c,iVar4);
  (*(code *)PTR_vec3_copy_8c023d8c_8c087e94)(DAT_8c087e18 + _DAT_8c087ea4,auStack_120,puVar3,iVar4);
  uVar2 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c087e98)(auStack_120,0xffffffff,puVar3,iVar4);
  (*(code *)PTR_Vec3_set_xyz_8c087e8c)(auStack_12c,uVar2,puVar3,PTR_Vec3_set_xyz_8c087e8c);
  puVar3 = PTR_vec3_copy_8c023d8c_8c087e94;
  iVar6 = DAT_8c087e18;
  (*(code *)PTR_vec3_copy_8c023d8c_8c087e94)
            (DAT_8c087e18 + _DAT_8c087eb0,auStack_12c,PTR_vec3_copy_8c023d8c_8c087e94,DAT_8c087e18);
  (*(code *)PTR_object_dtor_delete_8c087e98)(auStack_12c,0xffffffff,puVar3,iVar6);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087eb4) = (undefined4)DAT_8c087eb8;
  }
  else {
    *(undefined8 *)(DAT_8c087e18 + DAT_8c087eb4) =
         CONCAT44(DAT_8c087eb8._4_4_,(undefined4)DAT_8c087eb8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c087e18 + DAT_8c087eb8._4_4_) = DAT_8c087ec0;
  }
  else {
    *(undefined8 *)(DAT_8c087e18 + DAT_8c087eb8._4_4_) = CONCAT44(DAT_8c087ec4,DAT_8c087ec0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(DAT_8c087ec8,*(undefined4 *)(DAT_8c087e18 + DAT_8c087ec4));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c087e18 + DAT_8c087ec4);
    dVar12 = (double)CONCAT44(DAT_8c087ecc,DAT_8c087ec8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar12 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c087e18 + DAT_8c087ec4) = fVar9;
  }
  else {
    *(undefined8 *)(DAT_8c087e18 + DAT_8c087ec4) = in_xd0;
  }
  *DAT_8c087ecc = 3;
  *(undefined4 *)(DAT_8c087ecc + 2) = 1;
  *(undefined4 *)(DAT_8c087ecc + 4) = 0;
  *(undefined4 *)(DAT_8c087ecc + 6) = 0;
  DAT_8c087ecc[8] = 6;
  *(undefined4 *)(DAT_8c087ecc + 10) = 1;
  *(undefined4 *)(DAT_8c087ecc + 0xc) = 0;
  *(undefined4 *)(DAT_8c087ecc + 0xe) = 0;
  DAT_8c087ecc[0x10] = 0xffff;
  *(undefined4 *)(DAT_8c087ecc + 0x12) = 1;
  *(undefined4 *)(DAT_8c087ecc + 0x14) = 0;
  *(undefined4 *)(DAT_8c087ecc + 0x16) = 0;
  return 0x20;
}



/* s_GRAPHICS_HIGYOLINE_087ed2 @ 8c087ed0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_HIGYOLINE_087ed2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  int a6_00;
  undefined4 a7;
  
  a7 = 0x15;
  a6 = 1;
  uVar1 = 4;
  (*(code *)PTR_FUN_8c087fb8)(ar4,4,1,0x15);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c087fbc;
  (*(code *)PTR_FUN_8c087fc4)(ar4 + DAT_8c087fc0,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c087fcc)(ar4 + DAT_8c087fc8,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c087fd4)(ar4 + DAT_8c087fd0,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c087fe0)(ar4 + 0xc,uVar1,a6,a7);
  *(int *)(DAT_8c087fe4 + ar4) = ar4 + DAT_8c087fc8;
  *(int *)(DAT_8c087fe8 + ar4) = ar4 + DAT_8c087fd0;
  *(undefined1 *)(DAT_8c087fec + ar4) = 0xff;
  a6_00 = ar4 + DAT_8c087fc0;
  uVar1 = *(undefined4 *)(DAT_8c087ff4 + *(int *)(DAT_8c087ff0 + ar4));
  (*(code *)PTR_FUN_8c087ff8)(ar4,uVar1,a6_00,a7);
  (*(code *)PTR_FUN_8c087ffc)(ar4 + DAT_8c087fd0,uVar1,a6_00,a7);
  (**(code **)(*(int *)(ar4 + DAT_8c088004) + 0x28))
            ((int *)(ar4 + DAT_8c088004),ar4 + 0x30,a6_00,a7);
  *(undefined4 *)(DAT_8c088008 + ar4) = 0;
  return ar4;
}



/* CAnimal_m0_08800c @ 8c08800c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int CAnimal_m0_08800c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c088070;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c088078)(ar4 + DAT_8c088074,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129c24_m0_02ff90_8c088080)(ar4 + DAT_8c08807c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c088088)(ar4 + DAT_8c088084,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c08808c)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c088090)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* CAnimal_m2_088094 @ 8c088094 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m2_088094(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar1 = *(char *)(DAT_8c0881d8 + ar4);
  uVar4 = ar5;
  uVar5 = ar6;
  piVar6 = ar7;
  if (cVar1 == -1) {
    if (*(int *)(DAT_8c0881dc + ar4) != 0) {
      (**(code **)(DAT_8c0881e0 + *(int *)(*(int *)(DAT_8c0881dc + ar4) + 8)))
                (*(int *)(DAT_8c0881dc + ar4),ar5,ar6,ar7);
    }
    *(undefined1 *)(DAT_8c0881d8 + ar4) = 0;
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = 0x1b;
      (*(code *)PTR_FUN_8c0881fc)(ar5,0x16,0x1b,ar7);
      (**(code **)(DAT_8c0881f4 + *(int *)(*(int *)(DAT_8c0881dc + ar4) + 8)))
                (*(int *)(DAT_8c0881dc + ar4),0,uVar5,piVar6);
      uVar4 = *(undefined4 *)(DAT_8c0881dc + ar4);
      (**(code **)(*ar7 + 0x4c))(ar7,uVar4,uVar5,piVar6);
      *(undefined4 *)(DAT_8c0881dc + ar4) = 0;
      (*(code *)PTR_FUN_8c088200)(ar4,uVar4,uVar5,piVar6);
      *(undefined1 *)(DAT_8c0881d8 + ar4) = 2;
    }
    goto LAB_8c0881ac;
  }
  uVar2 = (*(code *)PTR_FUN_8c0881e4)(ar5,uVar4,uVar5,piVar6);
  iVar3 = (*(code *)PTR_get_field_c_02d1b8_8c0881ec)(ar4 + DAT_8c0881e8,uVar4,uVar5,piVar6);
  uVar4 = 0x3c;
  iVar3 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c0881f0)
                    ((uVar2 & 0xffff) - iVar3,0x3c,uVar5,piVar6);
  if (9 < iVar3) {
    *(undefined1 *)(DAT_8c0881d8 + ar4) = 1;
  }
  if (*(int *)(DAT_8c0881dc + ar4) != 0) {
    (**(code **)(DAT_8c0881f4 + *(int *)(*(int *)(DAT_8c0881dc + ar4) + 8)))
              (*(int *)(DAT_8c0881dc + ar4),1,uVar5,piVar6);
    (**(code **)(*(int *)(*(int *)(DAT_8c0881dc + ar4) + 8) + 0x10))
              (*(int *)(DAT_8c0881dc + ar4),ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0881f8)(*(undefined4 *)(DAT_8c0881dc + ar4),ar5,ar6,ar7);
    uVar4 = ar5;
    uVar5 = ar6;
    piVar6 = ar7;
  }
LAB_8c0881ac:
  (**(code **)(DAT_8c088204 + *(int *)(ar4 + 8)))(ar4,uVar4,uVar5,piVar6);
  (*(code *)PTR_FUN_8c08820c)(ar4 + DAT_8c088208,uVar4,uVar5,piVar6);
  return 1;
}



/* CAnimal_m7_088210 @ 8c088210 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * CAnimal_m7_088210(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  undefined8 in_dr0;
  double dVar3;
  undefined4 in_fr3;
  double dVar5;
  double in_dr14;
  double in_xd14;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  float fVar4;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar2 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar2 + -0xc) = in_PR;
  (**(code **)(DAT_8c088274 + *ar5))(ar5,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0x10) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)((int)puVar2 + -0x10));
  }
  else {
    *(undefined8 *)((int)puVar2 + -0x10) = in_dr0;
    in_xd14 = *(double *)((int)puVar2 + -0x10);
  }
  (*(code *)PTR_CAnimal_m7_0f49b8_8c088278)(ar4,ar5,ar6,ar7);
  puVar1 = (undefined4 *)(*(uint *)(ar4 + 0x74) & 0x40);
  if (puVar1 != (undefined4 *)0x40) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),in_fr3);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x34);
    }
    puVar1 = &DAT_8c08827c;
    dVar3 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c08827c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = (float)((ulonglong)dVar3 >> 0x20) - SUB84(dVar3,0);
      dVar3 = (double)CONCAT44(fVar4,SUB84(dVar3,0));
      bVar6 = fVar4 < (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      dVar3 = dVar3 - dVar3;
      bVar6 = dVar3 < dVar5;
    }
    if (bVar6) {
      puVar1 = &DAT_8c08827c;
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c08827c,SUB84(dVar3,0));
      }
      else {
        dVar5 = (double)CONCAT44(_noop_088280,DAT_8c08827c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(in_dr14,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(in_dr14 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x34) = fVar4;
      }
      else {
        *(double *)(ar4 + 0x34) = in_xd14;
      }
    }
  }
  return puVar1;
}



/* noop_088280 @ 8c088280 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_088280(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_088284 @ 8c088284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_088284(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c088288 @ 8c088288 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c088288(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  int a7;
  int a6;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c088378)(*(int *)(DAT_8c088374 + ar4) + 0x78,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08837c)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c088380)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c088384,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c088388,DAT_8c088384);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c088388,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c08838c,DAT_8c088388);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a7 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c088384,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c088388,DAT_8c088384);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c088388,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c08838c,DAT_8c088388);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a6 = (int)(dVar3 / dVar3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c088384,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c088388,DAT_8c088384);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c088388,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(PTR_FUN_8c08838c,DAT_8c088388);
  }
  if (in_FPSCR_PR == '\0') {
    a5 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    a5 = (int)(dVar3 / dVar3);
  }
  (*(code *)PTR_FUN_8c08838c)(0,a5,a6,a7);
  (*(code *)PTR_FUN_8c088390)(0,a5,a6,a7);
  uVar1 = (*(code *)PTR_FUN_8c088394)(*(int *)(DAT_8c088374 + ar4) + 0x70,a5,a6,a7);
  (*(code *)PTR_FUN_8c088398)(uVar1,a5,a6,a7);
  (*(code *)PTR_FUN_8c08839c)(1,a5,a6,a7);
  uVar1 = 0;
  if (*(int *)(DAT_8c0883a0 + ar4) != 0) {
    (*(code *)PTR_FUN_8c0883a4)(*(undefined4 *)(DAT_8c0883a0 + ar4),a5,a6,a7);
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c0883a0 + ar4) + 8) + 0x34))
                      (*(int *)(DAT_8c0883a0 + ar4),a5,a6,a7);
  }
  return uVar1;
}



/* FUN_8c0883a8 @ 8c0883a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0883a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_noop_038c8c_8c0883d8)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c0883dc + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c0883dc + ar4) + 8) + 0x5c))
                      (*(int *)(DAT_8c0883dc + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0883e0 @ 8c0883e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0883e0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c088428)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c088430)(ar4 + DAT_8c08842c,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c08843c)(ar4 + DAT_8c088438,ar5 + DAT_8c088434,ar6,ar7);
  return uVar1;
}



/* FUN_8c088440 @ 8c088440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c088440(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c088488)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c088490)(ar4 + DAT_8c08848c,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c08849c)(ar4 + DAT_8c088498,ar5 + DAT_8c088494,ar6,ar7);
  return uVar1;
}



/* FUN_8c0884a0 @ 8c0884a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0884a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = (*(code *)PTR_s_Shell_0fef9c_8c0884e4)(ar5,3,2,ar7);
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (**(code **)(DAT_8c0884e8 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c0884ec @ 8c0884ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0884ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0884f4;
  *(undefined4 *)(DAT_8c0884f4 + ar4) = ar6;
  return iVar1;
}



/* FUN_8c0884f8 @ 8c0884f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0884f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_8c088524 + ar4) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c088528)(ar5,ar4 + DAT_8c088524,ar6,ar7);
  }
  return uVar1;
}



/* s_CHigyoEgg_LoadGRReq_088532 @ 8c08852c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CHigyoEgg_LoadGRReq_088532(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_8c0885d8 + ar4) == 0) {
    iVar1 = (*(code *)PTR_s_Failed_to_load_Pack_CAnimal__027a86_8c0885dc)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c0885d8 + ar4) = 1;
    }
  }
  else if (*(int *)(DAT_8c0885d8 + ar4) == 1) {
    if (*(int *)(DAT_8c0885e0 + ar4) == 0) {
      (*(code *)PTR_report_error_message_8c0885f0)
                (PTR_s_GRAPHICS_COMMON_8c0885e4 + DAT_8c0885ec,
                 PTR_s_GRAPHICS_COMMON_8c0885e4 + DAT_8c0885e8,0,2);
      *(undefined4 *)(DAT_8c0885d8 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(DAT_8c0885f4 + *(int *)(*(int *)(DAT_8c0885e0 + ar4) + 8)))
                        (*(int *)(DAT_8c0885e0 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(DAT_8c0885f8 + ar4) = 0;
        *(undefined4 *)(DAT_8c0885d8 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c0885fc @ 8c0885fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0885fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c088640)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c088644 + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c088648 + *(int *)(*(int *)(DAT_8c088644 + ar4) + 8)))
                      (*(int *)(DAT_8c088644 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* FUN_8c08864c @ 8c08864c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08864c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c088690)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c088694 + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c088698 + *(int *)(*(int *)(DAT_8c088694 + ar4) + 8)))
                      (*(int *)(DAT_8c088694 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* s_gme_Home_nj_08869c @ 8c08869c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_gme_Home_nj_08869c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_dr0;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c0888c8 + iVar2 * DAT_8c0888c4) = 0;
    *(undefined4 *)(DAT_8c0888cc + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = 0;
    *(undefined4 *)(DAT_8c0888d0 + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = 0;
    *(undefined2 *)(DAT_8c0888d4 + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = 0;
    *(undefined2 *)(DAT_8c0888d8 + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = 0;
  }
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined **)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + 4) = PTR_PTR_8c0888dc;
    *(undefined **)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + 8) = PTR_PTR_8c0888e0;
    *(undefined4 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + 0xc) = *(undefined4 *)PTR_PTR_8c0888e4;
    *(undefined4 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + 0x10) = 0;
    *(undefined4 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + 0x14) = *(undefined4 *)PTR_PTR_8c0888e8;
    *(undefined4 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + 0x18) = 0;
    *(undefined4 *)(DAT_8c0888cc + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = DAT_8c0888ec;
    *(undefined2 *)(DAT_8c0888d4 + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = 1;
    *(undefined4 *)(DAT_8c0888f0 + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = DAT_8c0888f4;
    *(undefined2 *)(DAT_8c0888d8 + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = 1;
    *(undefined4 *)(DAT_8c0888d0 + iVar2 * DAT_8c0888c4 + DAT_8c0888c8) = DAT_8c0888f8;
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + DAT_8c0888fc);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,(int)in_dr0);
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + DAT_8c088900);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c088904,(int)in_dr0);
      *(undefined4 *)puVar1 = DAT_8c088904;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c088908,DAT_8c088904);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + _DAT_8c088908);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(DAT_8c08890c,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c08890c;
    }
    else {
      uVar3 = CONCAT44(_DAT_8c088910,DAT_8c08890c);
      *puVar1 = uVar3;
    }
    puVar1 = (undefined8 *)(iVar2 * DAT_8c0888c4 + DAT_8c0888c8 + _DAT_8c088910);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c088914,(int)uVar3);
      *(undefined4 *)puVar1 = DAT_8c088914;
    }
    else {
      in_dr0 = CONCAT44(_DAT_8c088918,DAT_8c088914);
      *puVar1 = in_dr0;
    }
  }
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined2 *)(_DAT_8c088918 + iVar2 * 0x10) = 0xffff;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c088918 + 4) = 1;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c088918 + 8) = 0;
    *(undefined4 *)(iVar2 * 0x10 + _DAT_8c088918 + 0xc) = 0;
  }
  return 1;
}



/* CAnimal_m3_08891c @ 8c08891c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 CAnimal_m3_08891c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_088944 @ 8c088944 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_088944(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c08894c @ 8c08894c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08894c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  undefined4 auStack_120 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
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
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c088d00)(PTR_DAT_8c088cfc,PTR_Vec3_ctor_xyz_8c088d00,ar6,ar7)
  ;
  *(undefined4 *)((int)auStack_120 + DAT_8c088d04) = uVar1;
  uVar1 = DAT_8c088d08;
  (*(code *)PTR_global_list_push_8c088d10)
            (*(undefined4 *)((int)auStack_120 + DAT_8c088d04),PTR_Vec3_dtor_8c088d0c,DAT_8c088d08,
             ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c088d00)
                    (PTR_DAT_8c088d14,PTR_Vec3_ctor_xyz_8c088d00,uVar1,ar7);
  *(undefined4 *)((int)auStack_120 + DAT_8c088d18) = uVar1;
  uVar1 = DAT_8c088d1c;
  (*(code *)PTR_global_list_push_8c088d10)
            (*(undefined4 *)((int)auStack_120 + DAT_8c088d18),PTR_Vec3_dtor_8c088d0c,DAT_8c088d1c,
             ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c088d00)
                    (PTR_DAT_8c088d20,PTR_Vec3_ctor_xyz_8c088d00,uVar1,ar7);
  *(undefined4 *)((int)auStack_120 + DAT_8c088d24) = uVar1;
  uVar1 = DAT_8c088d28;
  (*(code *)PTR_global_list_push_8c088d10)
            (*(undefined4 *)((int)auStack_120 + DAT_8c088d24),PTR_Vec3_dtor_8c088d0c,DAT_8c088d28,
             ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c088d00)
                    (PTR_DAT_8c088d2c,PTR_Vec3_ctor_xyz_8c088d00,uVar1,ar7);
  *(undefined4 *)((int)auStack_120 + DAT_8c088d30) = uVar1;
  (*(code *)PTR_global_list_push_8c088d10)
            (*(undefined4 *)((int)auStack_120 + DAT_8c088d30),PTR_Vec3_dtor_8c088d0c,DAT_8c088d34,
             ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c088d38 = *(undefined4 *)DAT_8c088d3c;
  }
  else {
    *(undefined8 *)PTR_DAT_8c088d38 = *DAT_8c088d3c;
  }
  uVar1 = DAT_8c088d40;
  (*(code *)PTR_FUN_8c088d50)(DAT_8c088d4c,PTR_FUN_8c088d48,PTR_FUN_8c088d44,DAT_8c088d40);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088d58,DAT_8c088d54,uVar1);
  uVar1 = 0x10;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088d64,PTR_FUN_8c088d60,PTR_free_if_nonnull_wrap_03a454_8c088d5c,0x10);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088d6c,DAT_8c088d68,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088d78,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088d80,DAT_8c088d7c,uVar1);
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088d8c,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088d94,DAT_8c088d90,0);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088d98,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088da0,DAT_8c088d9c,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088da4,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088dac,DAT_8c088da8,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088db0,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088db8,DAT_8c088db4,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088dbc,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088dc4,DAT_8c088dc0,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088dc8,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088dd0,DAT_8c088dcc,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088dd4,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088ddc,DAT_8c088dd8,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088de0,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088de8,DAT_8c088de4,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088dec,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088df4,DAT_8c088df0,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088df8,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088e00,DAT_8c088dfc,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088e04,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088e0c,DAT_8c088e08,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088e10,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088e18,DAT_8c088e14,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088e1c,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088e24,DAT_8c088e20,uVar1);
  uVar1 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088e28,PTR_FUN_8c088d74,PTR_free_if_nonnull_wrap_0247b0_8c088d70,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088e30,DAT_8c088e2c,uVar1);
  uVar3 = 4;
  (*(code *)PTR_FUN_8c088d50)
            (DAT_8c088e34,PTR_FUN_8c088d88,PTR_free_if_nonnull_wrap_03a3dc_8c088d84,4);
  (*(code *)PTR_global_list_push_8c088d10)(0,PTR_FUN_8c088e3c,DAT_8c088e38,uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c088d00)
                    (DAT_8c088e4c,PTR_Vec3_ctor_xyz_8c088d00,DAT_8c088e4c,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c088e50) = uVar1;
  (*(code *)PTR_global_list_push_8c088d10)
            (*(undefined4 *)((int)auStack_120 + DAT_8c088e50),PTR_Vec3_dtor_8c088d0c,DAT_8c088e54,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)
                    (DAT_8c089228,PTR_Vec3_ctor_xyz_8c08922c,DAT_8c089228,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089230) = uVar1;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089230),PTR_Vec3_dtor_8c089238,DAT_8c089234,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)
                    (DAT_8c08924c,PTR_Vec3_ctor_xyz_8c08922c,DAT_8c08924c,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089250) = uVar1;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089250),PTR_Vec3_dtor_8c089238,DAT_8c089254,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)
                    (DAT_8c089258._4_4_,PTR_Vec3_ctor_xyz_8c08922c,DAT_8c089258._4_4_,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089260) = uVar1;
  uVar1 = DAT_8c089264;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089260),PTR_Vec3_dtor_8c089238,DAT_8c089264,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c089270,PTR_Vec3_ctor_xyz_8c08922c,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_120 + DAT_8c089274) = uVar1;
  uVar1 = DAT_8c089278;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089274),PTR_Vec3_dtor_8c089238,DAT_8c089278,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c08927c,DAT_8c08927c,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089280) = uVar1;
  uVar1 = DAT_8c089284;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089280),PTR_Vec3_dtor_8c089238,DAT_8c089284,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c089288,DAT_8c089288,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c08928c) = uVar1;
  uVar1 = DAT_8c089290;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c08928c),PTR_Vec3_dtor_8c089238,DAT_8c089290,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c089294,DAT_8c089294,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089298) = uVar1;
  uVar1 = DAT_8c08929c;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089298),PTR_Vec3_dtor_8c089238,DAT_8c08929c,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c0892ac,DAT_8c0892ac,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c0892b0) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c0892b4;
  puVar4 = PTR_global_list_push_8c08923c;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0892b0),PTR_Vec3_dtor_8c089238,DAT_8c0892b4,
             PTR_global_list_push_8c08923c);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c0892b8._4_4_,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_120 + DAT_8c0892c0) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c0892c4;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0892c0),PTR_Vec3_dtor_8c089238,DAT_8c0892c4,
             puVar4);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c0892cc,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_120 + DAT_8c0892d0) = uVar3;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c0892d4;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0892d0),PTR_Vec3_dtor_8c089238,DAT_8c0892d4,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c0892d8,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c0892dc) = uVar1;
  uVar3 = *(undefined4 *)((int)auStack_120 + DAT_8c0892dc);
  uVar1 = DAT_8c0892e0;
  (*(code *)PTR_global_list_push_8c08923c)(uVar3,PTR_Vec3_dtor_8c089238,DAT_8c0892e0,uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c0892e8,DAT_8c0892e8,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c0892ec) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c0892f0;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0892ec),PTR_Vec3_dtor_8c089238,DAT_8c0892f0,
             uVar3);
  puVar4 = PTR_Vec3_ctor_xyz_8c08922c;
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)
                    (DAT_8c0892f4,puVar2,uVar1,PTR_Vec3_ctor_xyz_8c08922c);
  *(undefined4 *)((int)auStack_120 + DAT_8c0892f8) = uVar1;
  uVar1 = DAT_8c0892fc;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0892f8),PTR_Vec3_dtor_8c089238,DAT_8c0892fc,
             puVar4);
  puVar4 = PTR_Vec3_ctor_xyz_8c08922c;
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)
                    (DAT_8c089300,DAT_8c089300,uVar1,PTR_Vec3_ctor_xyz_8c08922c);
  *(undefined4 *)((int)auStack_120 + DAT_8c089304) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c089308;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089304),PTR_Vec3_dtor_8c089238,DAT_8c089308,
             puVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c08930c,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_120 + DAT_8c089310) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089310),PTR_Vec3_dtor_8c089238,DAT_8c089314,
             puVar4);
  uVar3 = DAT_8c089324;
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)
                    (DAT_8c089324,puVar2,PTR_Vec3_ctor_xyz_8c08922c,DAT_8c089324);
  *(undefined4 *)((int)auStack_120 + DAT_8c089328) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c08932c;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089328),PTR_Vec3_dtor_8c089238,DAT_8c08932c,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c089330._4_4_,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089338) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar3 = DAT_8c08933c;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089338),PTR_Vec3_dtor_8c089238,DAT_8c08933c,
             DAT_8c08933c);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)
                    (DAT_8c089344,puVar2,PTR_Vec3_ctor_xyz_8c08922c,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089348) = uVar1;
  uVar1 = DAT_8c08934c;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089348),PTR_Vec3_dtor_8c089238,DAT_8c08934c,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c089350,PTR_Vec3_ctor_xyz_8c08922c,uVar1,uVar3)
  ;
  *(undefined4 *)((int)auStack_120 + DAT_8c089354) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c089358;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089354),PTR_Vec3_dtor_8c089238,DAT_8c089358,
             uVar3);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c089360,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089364) = uVar3;
  puVar2 = PTR_Vec3_dtor_8c089238;
  uVar1 = DAT_8c089368;
  (*(code *)PTR_global_list_push_8c08923c)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089364),PTR_Vec3_dtor_8c089238,DAT_8c089368,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08922c)(DAT_8c08936c,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089370) = uVar1;
  uVar3 = *(undefined4 *)((int)auStack_120 + DAT_8c089370);
  uVar1 = DAT_8c089374;
  (*(code *)PTR_global_list_push_8c08923c)(uVar3,PTR_Vec3_dtor_8c089238,DAT_8c089374,uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c08973c,DAT_8c08973c,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089744) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c089748;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089744),PTR_Vec3_dtor_8c08974c,DAT_8c089748,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c08975c,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089760) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c089764;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089760),PTR_Vec3_dtor_8c08974c,DAT_8c089764,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c089774,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c089778) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c08977c;
  puVar4 = PTR_Vec3_dtor_8c08974c;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089778),PTR_Vec3_dtor_8c08974c,DAT_8c08977c,
             PTR_Vec3_dtor_8c08974c);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c089780._4_4_,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_120 + DAT_8c089788) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c08978c;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089788),PTR_Vec3_dtor_8c08974c,DAT_8c08978c,
             puVar4);
  uVar3 = DAT_8c089794;
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c089794,puVar2,uVar1,DAT_8c089794);
  *(undefined4 *)((int)auStack_120 + DAT_8c089798) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c08979c;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089798),PTR_Vec3_dtor_8c08974c,DAT_8c08979c,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c0897a0,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c0897a4) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c0897a8;
  uVar3 = DAT_8c0897a8;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0897a4),PTR_Vec3_dtor_8c08974c,DAT_8c0897a8,
             DAT_8c0897a8);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c0897b0,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c0897b4) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c0897b8;
  puVar4 = PTR_global_list_push_8c089750;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0897b4),PTR_Vec3_dtor_8c08974c,DAT_8c0897b8,
             PTR_global_list_push_8c089750);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c0897bc,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_120 + DAT_8c0897c0) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c0897c4;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0897c0),PTR_Vec3_dtor_8c08974c,DAT_8c0897c4,
             puVar4);
  uVar3 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c0897c8,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_120 + DAT_8c0897cc) = uVar3;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c0897d0;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0897cc),PTR_Vec3_dtor_8c08974c,DAT_8c0897d0,
             uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c0897d4,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c0897d8) = uVar1;
  uVar3 = *(undefined4 *)((int)auStack_120 + DAT_8c0897d8);
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c0897dc;
  (*(code *)PTR_global_list_push_8c089750)(uVar3,PTR_Vec3_dtor_8c08974c,DAT_8c0897dc,uVar3);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c0897ec,puVar2,uVar1,uVar3);
  *(undefined4 *)((int)auStack_120 + DAT_8c0897f0) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c0897f4;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c0897f0),PTR_Vec3_dtor_8c08974c,DAT_8c0897f4,
             uVar3);
  puVar4 = PTR_Vec3_ctor_xyz_8c089740;
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)
                    (DAT_8c0897f8._4_4_,puVar2,uVar1,PTR_Vec3_ctor_xyz_8c089740);
  *(undefined4 *)((int)auStack_120 + DAT_8c089800) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c089804;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089800),PTR_Vec3_dtor_8c08974c,DAT_8c089804,
             puVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c08980c,puVar2,uVar1,puVar4);
  *(undefined4 *)((int)auStack_120 + DAT_8c089810) = uVar1;
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c089814;
  (*(code *)PTR_global_list_push_8c089750)
            (*(undefined4 *)((int)auStack_120 + DAT_8c089810),PTR_Vec3_dtor_8c08974c,DAT_8c089814,
             puVar4);
  uStack_a4 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c089818,puVar2,uVar1,puVar4);
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c08981c;
  (*(code *)PTR_global_list_push_8c089750)(uStack_a4,PTR_Vec3_dtor_8c08974c,DAT_8c08981c,puVar4);
  uStack_a8 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c089824,puVar2,uVar1,puVar4);
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c089828;
  (*(code *)PTR_global_list_push_8c089750)(uStack_a8,PTR_Vec3_dtor_8c08974c,DAT_8c089828,puVar4);
  uStack_ac = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c08982c,puVar2,uVar1,puVar4);
  puVar2 = PTR_Vec3_dtor_8c08974c;
  uVar1 = DAT_8c089830;
  (*(code *)PTR_global_list_push_8c089750)(uStack_ac,PTR_Vec3_dtor_8c08974c,DAT_8c089830,puVar4);
  uStack_b0 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)(DAT_8c089834,puVar2,uVar1,puVar4);
  uVar1 = DAT_8c089838;
  (*(code *)PTR_global_list_push_8c089750)(uStack_b0,PTR_Vec3_dtor_8c08974c,DAT_8c089838,puVar4);
  uStack_b4 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)
                        (DAT_8c08983c,PTR_Vec3_ctor_xyz_8c089740,uVar1,puVar4);
  uVar1 = DAT_8c089840;
  (*(code *)PTR_global_list_push_8c089750)(uStack_b4,PTR_Vec3_dtor_8c08974c,DAT_8c089840,puVar4);
  uStack_b8 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)
                        (DAT_8c089850,PTR_Vec3_ctor_xyz_8c089740,uVar1,puVar4);
  uVar1 = DAT_8c089854;
  (*(code *)PTR_global_list_push_8c089750)(uStack_b8,PTR_Vec3_dtor_8c08974c,DAT_8c089854,puVar4);
  uStack_bc = (*(code *)PTR_Vec3_ctor_xyz_8c089740)
                        (DAT_8c089858._4_4_,PTR_Vec3_ctor_xyz_8c089740,uVar1,puVar4);
  uVar1 = DAT_8c089860;
  (*(code *)PTR_global_list_push_8c089750)(uStack_bc,PTR_Vec3_dtor_8c08974c,DAT_8c089860,puVar4);
  uStack_c0 = (*(code *)PTR_Vec3_ctor_xyz_8c089740)
                        (DAT_8c089868,PTR_Vec3_ctor_xyz_8c089740,uVar1,puVar4);
  (*(code *)PTR_global_list_push_8c089750)(uStack_c0,PTR_Vec3_dtor_8c08974c,DAT_8c08986c,puVar4);
  uStack_c4 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                        (DAT_8c089c60,PTR_Vec3_ctor_xyz_8c089c64,DAT_8c089c60,puVar4);
  uVar1 = DAT_8c089c68;
  uVar3 = DAT_8c089c68;
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_c4,PTR_Vec3_dtor_8c089c6c,DAT_8c089c68,DAT_8c089c68);
  uStack_c8 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                        (DAT_8c089c80,PTR_Vec3_ctor_xyz_8c089c64,uVar1,uVar3);
  puVar2 = PTR_global_list_push_8c089c70;
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_c8,PTR_Vec3_dtor_8c089c6c,DAT_8c089c84,PTR_global_list_push_8c089c70);
  uStack_cc = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                        (DAT_8c089c88._4_4_,PTR_Vec3_ctor_xyz_8c089c64,DAT_8c089c88._4_4_,puVar2);
  uVar1 = DAT_8c089c90;
  (*(code *)PTR_global_list_push_8c089c70)(uStack_cc,PTR_Vec3_dtor_8c089c6c,DAT_8c089c90,puVar2);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                    (DAT_8c089c94,PTR_Vec3_ctor_xyz_8c089c64,uVar1,puVar2);
  uStack_d0 = uVar1;
  (*(code *)PTR_global_list_push_8c089c70)(uVar1,PTR_Vec3_dtor_8c089c6c,DAT_8c089c98,uVar1);
  uStack_d4 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                        (DAT_8c089c9c,PTR_Vec3_ctor_xyz_8c089c64,DAT_8c089c9c,uVar1);
  (*(code *)PTR_global_list_push_8c089c70)(uStack_d4,PTR_Vec3_dtor_8c089c6c,DAT_8c089ca0,uStack_d4);
  uVar1 = DAT_8c089cb8;
  uStack_d8 = (*(code *)PTR_FUN_8c089cc8)(DAT_8c089cc4,DAT_8c089cc0,DAT_8c089cbc,DAT_8c089cb8);
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_d8,PTR_Class_129938_m0_017084_8c089cd0,DAT_8c089ccc,uVar1);
  uStack_dc = (*(code *)PTR_FUN_8c089cc8)(DAT_8c089cf4,DAT_8c089cf0,DAT_8c089cec,DAT_8c089ce8);
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_dc,PTR_Class_129938_m0_017084_8c089cd0,DAT_8c089cf8,uStack_dc);
  uVar1 = DAT_8c089d10;
  uStack_e0 = (*(code *)PTR_FUN_8c089cc8)(DAT_8c089d1c,DAT_8c089d18,DAT_8c089d14,DAT_8c089d10);
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_e0,PTR_Class_129938_m0_017084_8c089cd0,DAT_8c089d20,uVar1);
  uStack_e4 = (*(code *)PTR_FUN_8c089cc8)(DAT_8c089d44,DAT_8c089d40,DAT_8c089d3c,DAT_8c089d38);
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_e4,PTR_Class_129938_m0_017084_8c089cd0,DAT_8c089d48,uStack_e4);
  uVar1 = DAT_8c089d60;
  uStack_e8 = (*(code *)PTR_FUN_8c089cc8)(DAT_8c089d6c,DAT_8c089d68,DAT_8c089d64,DAT_8c089d60);
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_e8,PTR_Class_129938_m0_017084_8c089cd0,DAT_8c089d70,uVar1);
  uVar3 = (*(code *)PTR_FUN_8c089cc8)(DAT_8c089d80,DAT_8c089d7c,DAT_8c089d78,DAT_8c089d74);
  uVar1 = DAT_8c089d84;
  uStack_ec = uVar3;
  (*(code *)PTR_global_list_push_8c089c70)
            (uVar3,PTR_Class_129938_m0_017084_8c089cd0,DAT_8c089d84,uVar3);
  uStack_f0 = (*(code *)PTR_FUN_8c089d8c)(DAT_8c089d88,DAT_8c089d88,uVar1,uVar3);
  puVar2 = PTR_FUN_8c089d94;
  uVar1 = DAT_8c089d90;
  (*(code *)PTR_global_list_push_8c089c70)(uStack_f0,PTR_FUN_8c089d94,DAT_8c089d90,uVar3);
  puVar4 = PTR_FUN_8c089d9c;
  uStack_f4 = (*(code *)PTR_FUN_8c089d9c)(DAT_8c089d98,puVar2,uVar1,PTR_FUN_8c089d9c);
  uVar1 = DAT_8c089da0;
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_f4,PTR_free_if_nonnull_wrap_03a454_8c089da4,DAT_8c089da0,puVar4);
  uStack_f8 = (*(code *)PTR_FUN_8c089dac)(DAT_8c089da8,DAT_8c089da8,uVar1,puVar4);
  puVar2 = PTR_free_if_nonnull_wrap_0247b0_8c089db4;
  uVar1 = DAT_8c089db0;
  puVar4 = PTR_free_if_nonnull_wrap_0247b0_8c089db4;
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_f8,PTR_free_if_nonnull_wrap_0247b0_8c089db4,DAT_8c089db0,
             PTR_free_if_nonnull_wrap_0247b0_8c089db4);
  uStack_fc = (*(code *)PTR_FUN_8c089dbc)(DAT_8c089db8,puVar2,uVar1,puVar4);
  puVar2 = PTR_free_if_nonnull_wrap_03a3dc_8c089dc4;
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_fc,PTR_free_if_nonnull_wrap_03a3dc_8c089dc4,DAT_8c089dc0,puVar4);
  uVar3 = DAT_8c089dd4;
  uStack_100 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                         (DAT_8c089dd4,puVar2,PTR_Vec3_ctor_xyz_8c089c64,DAT_8c089dd4);
  puVar2 = PTR_Vec3_dtor_8c089c6c;
  uVar1 = DAT_8c089dd8;
  (*(code *)PTR_global_list_push_8c089c70)(uStack_100,PTR_Vec3_dtor_8c089c6c,DAT_8c089dd8,uVar3);
  uStack_104 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)(DAT_8c089ddc,puVar2,uVar1,uVar3);
  puVar2 = PTR_Vec3_dtor_8c089c6c;
  uVar1 = DAT_8c089de0;
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_104,PTR_Vec3_dtor_8c089c6c,DAT_8c089de0,DAT_8c089de0);
  uStack_108 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                         (DAT_8c089de4,puVar2,PTR_Vec3_ctor_xyz_8c089c64,uVar1);
  puVar4 = PTR_global_list_push_8c089c70;
  (*(code *)PTR_global_list_push_8c089c70)
            (uStack_108,PTR_Vec3_dtor_8c089c6c,DAT_8c089de8,PTR_global_list_push_8c089c70);
  uStack_10c = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                         (DAT_8c089dec,PTR_Vec3_ctor_xyz_8c089c64,DAT_8c089dec,puVar4);
  puVar2 = PTR_Vec3_dtor_8c089c6c;
  (*(code *)PTR_global_list_push_8c089c70)(uStack_10c,PTR_Vec3_dtor_8c089c6c,DAT_8c089df0,puVar4);
  uStack_110 = (*(code *)PTR_Vec3_ctor_xyz_8c089c64)
                         (DAT_8c089df4,puVar2,PTR_Vec3_ctor_xyz_8c089c64,puVar4);
  puVar2 = PTR_Vec3_dtor_8c089c6c;
  (*(code *)PTR_global_list_push_8c089c70)(uStack_110,PTR_Vec3_dtor_8c089c6c,DAT_8c089df8,puVar4);
  auStack_120[3] =
       (*(code *)PTR_Vec3_ctor_xyz_8c089c64)(DAT_8c089dfc,puVar2,PTR_Vec3_ctor_xyz_8c089c64,puVar4);
  puVar2 = PTR_Vec3_dtor_8c089c6c;
  (*(code *)PTR_global_list_push_8c089c70)
            (auStack_120[3],PTR_Vec3_dtor_8c089c6c,DAT_8c089e00,puVar4);
  auStack_120[2] =
       (*(code *)PTR_Vec3_ctor_xyz_8c089eac)(DAT_8c089ea8,puVar2,PTR_Vec3_ctor_xyz_8c089eac,puVar4);
  puVar2 = PTR_Vec3_dtor_8c089eb4;
  (*(code *)PTR_global_list_push_8c089eb8)
            (auStack_120[2],PTR_Vec3_dtor_8c089eb4,DAT_8c089eb0,puVar4);
  auStack_120[1] =
       (*(code *)PTR_Vec3_ctor_xyz_8c089eac)
                 (DAT_8c089ebc._4_4_,puVar2,PTR_Vec3_ctor_xyz_8c089eac,puVar4);
  (*(code *)PTR_global_list_push_8c089eb8)
            (auStack_120[1],PTR_Vec3_dtor_8c089eb4,DAT_8c089ec4,puVar4);
  uVar1 = DAT_8c089ed4;
  auStack_120[0] = (*(code *)PTR_FUN_8c089ee4)(DAT_8c089ee0,DAT_8c089edc,DAT_8c089ed8,DAT_8c089ed4);
  uVar1 = (*(code *)PTR_global_list_push_8c089eb8)
                    (auStack_120[0],PTR_Class_129938_m0_017084_8c089eec,DAT_8c089ee8,uVar1);
  return uVar1;
}



/* FUN_8c089ef0 @ 8c089ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089ef0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c089f10)
                    (DAT_8c089f0c,PTR_free_if_nonnull_wrap_03a3dc_8c089f08,4,0x34);
  return uVar1;
}



/* FUN_8c089f14 @ 8c089f14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c089f34)
                    (DAT_8c089f30,PTR_free_if_nonnull_wrap_0247b0_8c089f2c,4,0x34);
  return uVar1;
}



/* FUN_8c089f38 @ 8c089f38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c089f58)
                    (DAT_8c089f54,PTR_free_if_nonnull_wrap_03a3dc_8c089f50,4,0x29);
  return uVar1;
}



/* FUN_8c089f5c @ 8c089f5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c089f7c)
                    (DAT_8c089f78,PTR_free_if_nonnull_wrap_0247b0_8c089f74,4,0x29);
  return uVar1;
}



/* FUN_8c089f80 @ 8c089f80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089f80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c089fa0)
                    (DAT_8c089f9c,PTR_free_if_nonnull_wrap_03a3dc_8c089f98,4,0x1c);
  return uVar1;
}



/* FUN_8c089fa4 @ 8c089fa4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089fa4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c089fc4)
                    (DAT_8c089fc0,PTR_free_if_nonnull_wrap_0247b0_8c089fbc,4,0x1c);
  return uVar1;
}



/* FUN_8c089fc8 @ 8c089fc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089fc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c089fe8)
                    (DAT_8c089fe4,PTR_free_if_nonnull_wrap_03a3dc_8c089fe0,4,0x1c);
  return uVar1;
}



/* FUN_8c089fec @ 8c089fec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c089fec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a00c)
                    (DAT_8c08a008,PTR_free_if_nonnull_wrap_0247b0_8c08a004,4,0x1c);
  return uVar1;
}



/* FUN_8c08a010 @ 8c08a010 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a010(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a030)
                    (DAT_8c08a02c,PTR_free_if_nonnull_wrap_03a3dc_8c08a028,4,0x1c);
  return uVar1;
}



/* FUN_8c08a034 @ 8c08a034 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a034(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a054)
                    (DAT_8c08a050,PTR_free_if_nonnull_wrap_0247b0_8c08a04c,4,0x1c);
  return uVar1;
}



/* FUN_8c08a058 @ 8c08a058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a058(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a078)
                    (DAT_8c08a074,PTR_free_if_nonnull_wrap_03a3dc_8c08a070,4,0x1b);
  return uVar1;
}



/* FUN_8c08a07c @ 8c08a07c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a07c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a09c)
                    (DAT_8c08a098,PTR_free_if_nonnull_wrap_0247b0_8c08a094,4,0x1b);
  return uVar1;
}



/* FUN_8c08a0a0 @ 8c08a0a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a0a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a0c0)
                    (DAT_8c08a0bc,PTR_free_if_nonnull_wrap_03a3dc_8c08a0b8,4,0x14);
  return uVar1;
}



/* FUN_8c08a0c4 @ 8c08a0c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a0c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a0e4)
                    (DAT_8c08a0e0,PTR_free_if_nonnull_wrap_0247b0_8c08a0dc,4,0x14);
  return uVar1;
}



/* FUN_8c08a0e8 @ 8c08a0e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a0e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a108)
                    (DAT_8c08a104,PTR_free_if_nonnull_wrap_03a3dc_8c08a100,4,0x12);
  return uVar1;
}



/* FUN_8c08a10c @ 8c08a10c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a10c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a12c)
                    (DAT_8c08a128,PTR_free_if_nonnull_wrap_0247b0_8c08a124,4,0x12);
  return uVar1;
}



/* FUN_8c08a130 @ 8c08a130 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a130(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a150)
                    (DAT_8c08a14c,PTR_free_if_nonnull_wrap_03a454_8c08a148,0x10,3);
  return uVar1;
}



/* FUN_8c08a154 @ 8c08a154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a154(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08a178)(DAT_8c08a174,PTR_FUN_8c08a170,DAT_8c08a16c,8);
  return uVar1;
}



/* s_GRAPHICS_MOTHLINE_08a182 @ 8c08a17c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MOTHLINE_08a182(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined4 a7;
  int iVar2;
  
  a6 = 1;
  uVar1 = 10;
  a7 = ar6;
  (*(code *)PTR_FUN_8c08a304)(ar4,10,1,ar6);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c08a308;
  (*(code *)PTR_FUN_8c08a310)(ar4 + DAT_8c08a30c,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c08a318)(ar4 + DAT_8c08a314,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c08a320)(ar4 + DAT_8c08a31c,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c08a328)(ar4 + DAT_8c08a324,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c08a330)(ar4 + DAT_8c08a32c,uVar1,a6,a7);
  (*(code *)PTR_Vec3_ctor_zero_8c08a338)(ar4 + DAT_8c08a334,uVar1,a6,a7);
  (*(code *)PTR_Vec3_set_zero_8c08a340)(ar4 + DAT_8c08a33c,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c08a348)(ar4 + DAT_8c08a344,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c08a354)(ar4 + 0xc,uVar1,a6,a7);
  *(int *)(DAT_8c08a358 + ar4) = ar4 + DAT_8c08a30c;
  uVar1 = (*(code *)PTR_FUN_8c08a360)(ar4 + DAT_8c08a35c,ar6,a6,a7);
  (*(code *)PTR_FUN_8c08a364)(*(undefined4 *)(DAT_8c08a358 + ar4),uVar1,a6,a7);
  *(int *)(DAT_8c08a368 + ar4) = ar4 + DAT_8c08a314;
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c08a36c + ar4 + iVar2 * 4) = 0;
    *(undefined4 *)(DAT_8c08a370 + ar4 + iVar2 * 4) = 0;
  }
  iVar2 = ar4 + DAT_8c08a32c;
  uVar1 = *(undefined4 *)(DAT_8c08a378 + *(int *)(DAT_8c08a374 + ar4));
  (*(code *)PTR_FUN_8c08a37c)(ar4,uVar1,iVar2,a7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)PTR_FUN_8c08a38c)(ar4 + DAT_8c08a388,uVar1,iVar2,a7);
  *(undefined4 *)(DAT_8c08a390 + ar4) = 0;
  *(undefined4 *)(DAT_8c08a394 + ar4) = 0;
  *(undefined4 *)(DAT_8c08a398 + ar4) = 0;
  *(undefined4 *)(DAT_8c08a39c + ar4) = 0;
  *(undefined4 *)(DAT_8c08a3a0 + ar4) = 0;
  return ar4;
}



/* Class_12a5d0_m0_08a3a4 @ 8c08a3a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a5d0_m0_08a3a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = PTR_DAT_8c08a450;
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c08a458)(ar4 + DAT_8c08a454,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08a460)(ar4 + DAT_8c08a45c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08a468)(ar4 + DAT_8c08a464,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c08a470)(ar4 + DAT_8c08a46c,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_03a3dc_8c08a478)(ar4 + DAT_8c08a474,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0247b0_8c08a480)(ar4 + DAT_8c08a47c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12a76c_m0_08dca8_8c08a488)(ar4 + DAT_8c08a484,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_12a7a8_m0_098ccc_8c08a490)(ar4 + DAT_8c08a48c,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_CAnimal_m0_025688_8c08a494)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c08a498)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12a5d0_m2_08a49c @ 8c08a49c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a5d0_m2_08a49c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  undefined4 a7;
  float fVar3;
  ulonglong in_dr0;
  double dVar4;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_24;
  
  *(undefined4 *)(DAT_8c08a670 + ar4) = ar7;
  if (*(int *)(DAT_8c08a674 + ar4) == 1) {
    (*(code *)PTR_FUN_8c08a67c)(ar4 + DAT_8c08a678,0,1,ar7);
  }
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m2_02573c_8c08a680)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c08a688)(ar4 + DAT_8c08a684,a5,ar6,a7);
  if ((((char)uVar1 == '\x01') && (*(int *)(DAT_8c08a68c + ar4) == 0)) &&
     (*(int *)(DAT_8c08a690 + ar4) == 0)) {
    a5 = ar7;
    ar6 = ar5;
    (*(code *)PTR_FUN_8c08a694)(ar4,ar7,ar5,a7);
  }
  if ((*(int *)(DAT_8c08a690 + ar4) != 0) || (*(int *)(DAT_8c08a68c + ar4) != 0)) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c08a698)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c08a688)(ar4 + DAT_8c08a684,a5,ar6,a7);
  if (((char)uVar1 == '\x02') &&
     (iVar2 = (*(code *)PTR_get_field_25c_08a6f8_8c08a69c)(ar4 + DAT_8c08a678,a5,ar6,a7),
     iVar2 != -1)) {
    (*(code *)PTR_s_CMothLine_08ad54_8c08a6a0)(ar4,ar7,ar5,a7);
    a5 = ar7;
    ar6 = ar5;
  }
  uVar1 = (*(code *)PTR_FUN_8c08a688)(ar4 + DAT_8c08a684,a5,ar6,a7);
  if ((((char)uVar1 == '\x02') && (*(int *)(DAT_8c08a6a4 + ar4) == 0)) &&
     (*(int *)(DAT_8c08a6a8 + ar4) == 0)) {
    a5 = 0;
    (*(code *)PTR_FUN_8c08a6ac)(ar4 + DAT_8c08a684,0,ar6,a7);
  }
  iVar2 = (*(code *)PTR_get_field_124_027930_8c08a6b0)(ar4 + DAT_8c08a678,a5,ar6,a7);
  uVar1 = (*(code *)PTR_FUN_8c08a6b8)(ar4 + DAT_8c08a6b4,a5,ar6,a7);
  if ((iVar2 == 3) && ((short)uVar1 == 2)) {
    (*(code *)PTR_FUN_8c08a6bc)(ar4 + DAT_8c08a678,a5,ar6,a7);
    uStack_24 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_24 = CONCAT44(3,(int)(in_dr0 >> 0x20));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08a6c4,(int)uStack_24);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c08a6c8,DAT_8c08a6c4);
      in_xd0 = uStack_24;
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08a6c8,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c08a6cc,DAT_8c08a6c8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c08a6c0) = fVar3;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c08a6c0) = in_xd0;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c08a6c0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c08a6c0) = in_dr0 & 0xffffffff;
    }
    if ((iVar2 == 9) && ((short)uVar1 == 3)) {
      (*(code *)PTR_Vec3_assign_8c08a6d0)(ar4 + DAT_8c08a6cc,ar4 + 0x30,ar6,a7);
      (*(code *)PTR_vec3_copy_8c023d8c_8c08a6d8)(ar4 + DAT_8c08a6d4,ar4 + 0x50,ar6,a7);
      (*(code *)PTR_FUN_8c08a6e0)(ar4 + DAT_8c08a6dc,ar4 + 0x5c,ar6,a7);
      *(undefined4 *)(DAT_8c08a6e4 + ar4) = 0x1e;
    }
    else {
      iVar2 = *(int *)(DAT_8c08a6e4 + ar4) + -1;
      *(int *)(DAT_8c08a6e4 + ar4) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(DAT_8c08a6e4 + ar4) = 0;
      }
    }
  }
  return 1;
}



/* FUN_8c08a6e8 @ 8c08a6e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a6e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c08a6f4;
}



/* get_field_25c_08a6f8 @ 8c08a6f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_25c_08a6f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c08a700 + ar4);
}



/* Class_12a5d0_m3_08a704 @ 8c08a704 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a5d0_m3_08a704(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  undefined4 a7;
  float fVar3;
  ulonglong in_dr0;
  double dVar4;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_24;
  
  if (*(int *)(DAT_8c08a8d4 + ar4) == 1) {
    (*(code *)PTR_FUN_8c08a8dc)(ar4 + DAT_8c08a8d8,0,1,ar7);
  }
  a5 = ar5;
  a7 = ar7;
  (*(code *)PTR_CAnimal_m3_026078_8c08a8e0)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c08a8e8)(ar4 + DAT_8c08a8e4,a5,ar6,a7);
  if ((((char)uVar1 == '\x01') && (*(int *)(DAT_8c08a8ec + ar4) == 0)) &&
     (*(int *)(DAT_8c08a8f0 + ar4) == 0)) {
    a5 = ar7;
    ar6 = ar5;
    (*(code *)PTR_FUN_8c08a8f4)(ar4,ar7,ar5,a7);
  }
  if ((*(int *)(DAT_8c08a8f0 + ar4) != 0) || (*(int *)(DAT_8c08a8ec + ar4) != 0)) {
    a5 = ar5;
    (*(code *)PTR_FUN_8c08a8f8)(ar4,ar5,ar6,a7);
  }
  uVar1 = (*(code *)PTR_FUN_8c08a8e8)(ar4 + DAT_8c08a8e4,a5,ar6,a7);
  if (((char)uVar1 == '\x02') &&
     (iVar2 = (*(code *)PTR_get_field_25c_08a6f8_8c08a8fc)(ar4 + DAT_8c08a8d8,a5,ar6,a7),
     iVar2 != -1)) {
    (*(code *)PTR_s_CMothLine_08ad54_8c08a900)(ar4,ar7,ar5,a7);
    a5 = ar7;
    ar6 = ar5;
  }
  uVar1 = (*(code *)PTR_FUN_8c08a8e8)(ar4 + DAT_8c08a8e4,a5,ar6,a7);
  if ((((char)uVar1 == '\x02') && (*(int *)(DAT_8c08a904 + ar4) == 0)) &&
     (*(int *)(DAT_8c08a908 + ar4) == 0)) {
    a5 = 0;
    (*(code *)PTR_FUN_8c08a90c)(ar4 + DAT_8c08a8e4,0,ar6,a7);
  }
  iVar2 = (*(code *)PTR_get_field_124_027930_8c08a910)(ar4 + DAT_8c08a8d8,a5,ar6,a7);
  uVar1 = (*(code *)PTR_FUN_8c08a918)(ar4 + DAT_8c08a914,a5,ar6,a7);
  if ((iVar2 == 3) && ((short)uVar1 == 2)) {
    (*(code *)PTR_FUN_8c08a91c)(ar4 + DAT_8c08a8d8,a5,ar6,a7);
    uStack_24 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_24 = CONCAT44(3,(int)(in_dr0 >> 0x20));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08a924,(int)uStack_24);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c08a928,DAT_8c08a924);
      in_xd0 = uStack_24;
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08a928,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c08a92c,DAT_8c08a928);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c08a920) = fVar3;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c08a920) = in_xd0;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + DAT_8c08a920) = 0;
    }
    else {
      *(ulonglong *)(ar4 + DAT_8c08a920) = in_dr0 & 0xffffffff;
    }
    if ((iVar2 == 9) && ((short)uVar1 == 3)) {
      (*(code *)PTR_Vec3_assign_8c08a930)(ar4 + DAT_8c08a92c,ar4 + 0x30,ar6,a7);
      (*(code *)PTR_vec3_copy_8c023d8c_8c08a938)(ar4 + DAT_8c08a934,ar4 + 0x50,ar6,a7);
      (*(code *)PTR_FUN_8c08a940)(ar4 + DAT_8c08a93c,ar4 + 0x5c,ar6,a7);
      *(undefined4 *)(DAT_8c08a944 + ar4) = 0x1e;
    }
    else {
      iVar2 = *(int *)(DAT_8c08a944 + ar4) + -1;
      *(int *)(DAT_8c08a944 + ar4) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(DAT_8c08a944 + ar4) = 0;
      }
    }
  }
  return 1;
}



/* FUN_8c08a948 @ 8c08a948 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a948(int ar4,undefined8 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *a5;
  int a6;
  undefined *puVar2;
  undefined *puVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [20];
  
  a6 = ar6;
  (*(code *)PTR_FUN_8c08a9a4)(ar4,ar5,ar6,ar7);
  a5 = ar5;
  (*(code *)PTR_Vec3_ctor_copy_8c08a9a8)(auStack_20,ar5,a6,ar7);
  if (ar6 == 0) {
    (*(code *)PTR_FUN_8c08a9ac)(ar4 + 0x5c,a5,a6,ar7);
    puVar2 = DAT_8c08a9b0;
    puVar3 = PTR_Vec3_dtor_8c08a9b4;
    if (in_FPSCR_SZ == '\0') {
      puVar2 = *(undefined **)ar5;
      puVar3 = DAT_8c08a9b0;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar3 < (float)puVar2) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)ar5 = DAT_8c08a9b0;
      }
      else {
        *ar5 = CONCAT44(PTR_Vec3_dtor_8c08a9b4,DAT_8c08a9b0);
      }
    }
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c08a9b4)(auStack_20,0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c08a9b8 @ 8c08a9b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08a9b8(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  undefined4 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0x3f800000;
    uStack_8 = 0x3f800000;
    *(undefined4 *)((int)ar4 + 4) = 0x3f800000;
  }
  else {
    ar4[1] = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(0x3f800000,in_fr1);
    uStack_8 = in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = uStack_8;
  }
  else {
    *ar4 = CONCAT44(0x3f800000,uStack_8);
  }
  return 0;
}



/* Class_12a5d0_m4_08a9ec @ 8c08a9ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a5d0_m4_08a9ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (**(code **)(**(int **)(DAT_8c08aa64 + ar4) + 0x14))(*(int **)(DAT_8c08aa64 + ar4),ar6,ar6,ar7);
  uVar1 = (**(code **)(**(int **)(DAT_8c08aa68 + ar4) + 0x14))
                    (*(int **)(DAT_8c08aa68 + ar4),ar6,uVar1,ar7);
  return uVar1;
}



/* Class_12a5d0_m5_08aa6c @ 8c08aa6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a5d0_m5_08aa6c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(DAT_8c08aad4 + ar4) + 0x14))
                    (*(int **)(DAT_8c08aad4 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12a5d0_m6_08aad8 @ 8c08aad8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a5d0_m6_08aad8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)PTR_FUN_8c08ab50)(ar4 + DAT_8c08ab4c,ar5,ar6,ar7);
  uVar1 = (**(code **)(**(int **)(DAT_8c08ab54 + ar4) + 0x14))
                    (*(int **)(DAT_8c08ab54 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c08ab58 @ 8c08ab58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08ab58(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (*DAT_8c08ac1c == 0) {
      *DAT_8c08ac1c = 1;
      a6 = 0x19;
      uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c08ac24)(DAT_8c08ac20,0xc,0x19,ar7);
      *(undefined4 *)(DAT_8c08ac28 + ar4 + iVar2 * 4) = uVar1;
    }
    else {
      a6 = 0x17;
      uVar1 = (*(code *)PTR_s_Shell_0fef9c_8c08ac24)(DAT_8c08ac20,0xb,0x17,ar7);
      *(undefined4 *)(DAT_8c08ac28 + ar4 + iVar2 * 4) = uVar1;
    }
    a4 = *(int *)(DAT_8c08ac28 + ar4 + iVar2 * 4);
    (**(code **)(*(int *)(a4 + 8) + 0x54))(a4,DAT_8c08ac20,a6,ar7);
    uVar1 = (*(code *)PTR_s_CItemGLoader_RegistToLoad_0fed74_8c08ac30)
                      (*(undefined4 *)(DAT_8c08ac2c + ar6),
                       *(undefined4 *)(DAT_8c08ac28 + ar4 + iVar2 * 4),0,ar7);
    *(undefined4 *)(DAT_8c08ac34 + ar4 + iVar2 * 4) = uVar1;
  }
  return 2;
}



/* FUN_8c08ac38 @ 8c08ac38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08ac38(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a5;
  int iVar3;
  
  a5 = ar5;
  for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
    if (*(int *)(DAT_8c08ad28 + ar4 + iVar3 * 4) != 0) {
      a5 = *(int *)(DAT_8c08ad28 + ar4 + iVar3 * 4);
      iVar1 = (*(code *)PTR_FUN_8c08ad30)(*(undefined4 *)(DAT_8c08ad2c + ar5),a5,ar6,ar7);
      if (iVar1 == 1) {
        a5 = ar4 + iVar3 * 4 + DAT_8c08ad28;
        uVar2 = (*(code *)PTR_FUN_8c08ad34)(*(undefined4 *)(DAT_8c08ad2c + ar5),a5,ar6,ar7);
        *(undefined4 *)(DAT_8c08ad38 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(DAT_8c08ad3c + ar4) != 0) {
    a5 = *(int *)(DAT_8c08ad3c + ar4);
    iVar3 = (*(code *)PTR_FUN_8c08ad30)(*(undefined4 *)(DAT_8c08ad2c + ar5),a5,ar6,ar7);
    if (iVar3 == 1) {
      a5 = ar4 + DAT_8c08ad3c;
      uVar2 = (*(code *)PTR_FUN_8c08ad34)(*(undefined4 *)(DAT_8c08ad2c + ar5),a5,ar6,ar7);
      *(undefined4 *)(DAT_8c08ad40 + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(DAT_8c08ad28 + ar4);
  if ((iVar3 == 0) && (iVar3 = *(int *)(DAT_8c08ad3c + ar4), iVar3 == 0)) {
    uVar2 = (*(code *)PTR_FUN_8c08ad48)(ar4 + DAT_8c08ad44,a5,ar6,ar7);
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (*(code *)PTR_FUN_8c08ad4c)(ar4 + DAT_8c08ad44,2,ar6,ar7);
    }
  }
  return iVar3;
}



/* s_CMothLine_08ad54 @ 8c08ad50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CMothLine_08ad54(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [68];
  
  piStack_c4 = ar5;
  uStack_c0 = ar6;
  iVar1 = (*(code *)PTR_get_field_25c_08a6f8_8c08afc0)(ar4 + DAT_8c08afbc,ar5,ar6,ar7);
  iStack_a0 = iVar1;
  (*(code *)PTR_Vec3_ctor_zero_8c08afc8)((int)&piStack_c4 + DAT_8c08afc4,ar5,ar6,ar7);
  iStack_a4 = iVar1;
  if (*(int *)(DAT_8c08afcc + ar4 + iVar1 * 4) == 0) {
    puStack_c8 = (undefined1 *)0x5;
    ar7 = 2;
    ar6 = 1;
    (*(code *)PTR_report_error_message_8c08b01c)
              (PTR_s_GRAPHICS_COMMON_8c08b010 + DAT_8c08b018,
               PTR_s_GRAPHICS_COMMON_8c08b010 + DAT_8c08b014,1,2);
  }
  else {
    iVar3 = *(int *)(DAT_8c08afcc + ar4 + iVar1 * 4);
    uVar2 = uStack_c0;
    iStack_a8 = iVar1;
    (**(code **)(DAT_8c08afd0 + *(int *)(iVar3 + 8)))(iVar3,uStack_c0,ar6,ar7);
    if (iVar1 == 0) {
      puStack_c8 = (undefined1 *)((int)&piStack_c4 + DAT_8c08afd4);
      (**(code **)(DAT_8c08afd8 + *(int *)(ar4 + 8)))(ar4,uVar2,ar6,ar7);
      puStack_c8 = (undefined1 *)((int)&piStack_c4 + DAT_8c08afdc);
      (*(code *)PTR_FUN_8c08afe4)((int)&puStack_c8 + DAT_8c08afe0,uVar2,ar6,ar7);
      puStack_c8 = auStack_4c;
      (*(code *)PTR_Vec3_normalize_8c08afec)((int)&puStack_c8 + DAT_8c08afe8,uVar2,ar6,ar7);
      puStack_c8 = auStack_5c;
      (*(code *)PTR_Vec3_scale_8c08aff4)(auStack_4c,PTR_DAT_8c08aff0,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c08aff8)((int)&piStack_c4 + DAT_8c08afc4,auStack_5c,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08affc)(auStack_5c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08affc)(auStack_4c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08affc)((int)&piStack_c4 + DAT_8c08afdc,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c08affc)((int)&piStack_c4 + DAT_8c08afd4,0xffffffff,ar6,ar7);
    }
    else {
      puStack_c8 = auStack_6c;
      (**(code **)(DAT_8c08afd8 + *(int *)(ar4 + 8)))(ar4,uVar2,ar6,ar7);
      puStack_c8 = auStack_7c;
      (*(code *)PTR_FUN_8c08afe4)(auStack_6c,uVar2,ar6,ar7);
      puStack_c8 = auStack_8c;
      (*(code *)PTR_Vec3_normalize_8c08afec)(auStack_7c,uVar2,ar6,ar7);
      puStack_c8 = auStack_9c;
      (*(code *)PTR_Vec3_scale_8c08aff4)(auStack_8c,PTR_DAT_8c08b000,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c08aff8)((int)&piStack_c4 + DAT_8c08afc4,auStack_9c,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08affc)(auStack_9c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08affc)(auStack_8c,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08affc)(auStack_7c,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c08affc)(auStack_6c,0xffffffff,ar6,ar7);
    }
    iStack_ac = iVar1;
    (*(code *)PTR_FUN_8c08b00c)(*(undefined4 *)(DAT_8c08afcc + ar4 + iVar1 * 4),uVar2,ar6,ar7);
    iVar3 = *(int *)(DAT_8c08afcc + ar4 + iVar1 * 4);
    iStack_b0 = iVar1;
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar2,ar6,ar7);
    uVar2 = *(undefined4 *)(DAT_8c08afcc + ar4 + iVar1 * 4);
    iStack_b4 = iVar1;
    (**(code **)(*piStack_c4 + 0x4c))(piStack_c4,uVar2,ar6,ar7);
    iStack_b8 = iVar1;
    (*(code *)PTR_FUN_8c08b00c)(*(undefined4 *)(DAT_8c08afcc + ar4 + iVar1 * 4),uVar2,ar6,ar7);
    *(undefined4 *)(DAT_8c08afcc + ar4 + iVar1 * 4) = 0;
    iStack_bc = iVar1;
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c08affc)((int)&piStack_c4 + DAT_8c08afc4,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c08b020 @ 8c08b020 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08b020(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 unaff_r11;
  int iVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar4;
  undefined4 unaff_r14;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  int a7;
  int a6;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  float fVar8;
  
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
  uVar2 = (*(code *)PTR_get_field_124_027930_8c08b1a4)(ar4 + DAT_8c08b1a0,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar5 + -0x18) = uVar2;
  iVar3 = *(int *)((int)puVar5 + -0x18);
  uVar2 = (*(code *)PTR_FUN_8c08b1ac)(ar4 + DAT_8c08b1a8,ar5,ar6,ar7);
  *(short *)((int)puVar5 + -0x78) = (short)uVar2;
  sVar1 = *(short *)((int)puVar5 + -0x78);
  *(int *)((int)puVar5 + -100) = (int)sVar1;
  iVar4 = *(int *)(DAT_8c08b1b0 + ar4) + *(int *)((int)puVar5 + -100) * DAT_8c08b1b4;
  (*(code *)PTR_FUN_8c08b1bc)(ar4 + DAT_8c08b1b8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08b1c4)(*(undefined4 *)(DAT_8c08b1c0 + ar4),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08b1c8)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08b1cc)(0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c08b1d0,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c08b1d4,DAT_8c08b1d0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c08b1d4,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c08b1d8,DAT_8c08b1d4);
  }
  if (in_FPSCR_PR == '\0') {
    a7 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    a7 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c08b1d0,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c08b1d4,DAT_8c08b1d0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c08b1d4,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c08b1d8,DAT_8c08b1d4);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    a6 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c08b1d0,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c08b1d4,DAT_8c08b1d0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c08b1d4,fVar6);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c08b1d8,DAT_8c08b1d4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) / fVar8;
    dVar7 = (double)CONCAT44(fVar8,fVar6);
    a5 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 / dVar7;
    a5 = (int)dVar7;
  }
  (*(code *)PTR_FUN_8c08b1d8)(0,a5,a6,a7);
  (*(code *)PTR_FUN_8c08b1dc)(0,a5,a6,a7);
  if (sVar1 == 3) {
    uVar2 = (*(code *)PTR_FUN_8c08b1e0)(iVar4 + 0x70,a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x1c) = uVar2;
    uVar2 = (*(code *)PTR_FUN_8c08b1e8)(*(undefined4 *)(DAT_8c08b1e4 + ar4),a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x20) = uVar2;
    *(undefined4 *)((int)puVar5 + -0x68) = *(undefined4 *)((int)puVar5 + -0x20);
    uVar2 = (*(code *)PTR_deref_u32_8c08b1f0)
                      (*(int *)(DAT_8c08b1ec + iVar4) + *(int *)((int)puVar5 + -0x68) * 4,a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x24) = uVar2;
    uVar2 = (*(code *)PTR_FUN_8c08b1e8)(*(undefined4 *)(DAT_8c08b1e4 + ar4),a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x28) = uVar2;
    *(undefined4 *)((int)puVar5 + -0x6c) = *(undefined4 *)((int)puVar5 + -0x28);
    uVar2 = (*(code *)PTR_FUN_8c08b1f8)
                      (*(int *)(DAT_8c08b1f4 + iVar4) + *(int *)((int)puVar5 + -0x6c) * 4,a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x2c) = uVar2;
    (*(code *)PTR_FUN_8c08b1fc)(*(undefined4 *)(DAT_8c08b1e4 + ar4),a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x30) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar5 + -0x30) = dVar7;
    }
    a6 = *(int *)((int)puVar5 + -0x2c);
    a5 = *(int *)((int)puVar5 + -0x24);
    (*(code *)PTR_FUN_8c08b200)(*(undefined4 *)((int)puVar5 + -0x1c),a5,a6,a7);
  }
  else if (*(int *)(ar4 + 0x6c) < 0x32) {
    (*(code *)PTR_FUN_8c08b3cc)(*(undefined4 *)(DAT_8c08b3c8 + ar4),a5,a6,a7);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c08b290)(iVar4 + 0x70,a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x34) = uVar2;
    uVar2 = (*(code *)PTR_FUN_8c08b298)(*(undefined4 *)(DAT_8c08b294 + ar4),a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x38) = uVar2;
    *(undefined4 *)((int)puVar5 + -0x70) = *(undefined4 *)((int)puVar5 + -0x38);
    uVar2 = (*(code *)PTR_deref_u32_8c08b2a0)
                      (*(int *)(DAT_8c08b29c + iVar4) + *(int *)((int)puVar5 + -0x70) * 4,a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x3c) = uVar2;
    uVar2 = (*(code *)PTR_FUN_8c08b298)(*(undefined4 *)(DAT_8c08b294 + ar4),a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x40) = uVar2;
    *(undefined4 *)((int)puVar5 + -0x74) = *(undefined4 *)((int)puVar5 + -0x40);
    uVar2 = (*(code *)PTR_FUN_8c08b2a8)
                      (*(int *)(DAT_8c08b2a4 + iVar4) + *(int *)((int)puVar5 + -0x74) * 4,a5,a6,a7);
    *(undefined4 *)((int)puVar5 + -0x44) = uVar2;
    (*(code *)PTR_FUN_8c08b2ac)(*(undefined4 *)(DAT_8c08b294 + ar4),a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x48) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar5 + -0x48) = dVar7;
    }
    a6 = *(int *)((int)puVar5 + -0x44);
    a5 = *(int *)((int)puVar5 + -0x3c);
    (*(code *)PTR_FUN_8c08b2b0)(*(undefined4 *)((int)puVar5 + -0x34),a5,a6,a7);
  }
  (*(code *)PTR_FUN_8c08b3d0)(1,a5,a6,a7);
  if (sVar1 == 2) {
    if (iVar3 == 3) {
      (*(code *)PTR_FUN_8c08b3d8)(PTR_DAT_8c08b3d4,a5,a6,a7);
    }
    (*(code *)PTR_FUN_8c08b3e0)(ar4 + DAT_8c08b3dc,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x4c) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar5 + -0x4c) = dVar7;
    }
    (*(code *)PTR_FUN_8c08b3e8)(*(undefined4 *)(DAT_8c08b3e4 + ar4),a5,a6,a7);
    (*(code *)PTR_FUN_8c08b3ec)(0,a5,a6,a7);
    (*(code *)PTR_FUN_8c08b3f0)(0,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b3f4,*(undefined4 *)(ar4 + 0x58));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b3f8,DAT_8c08b3f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b3f8,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c08b3fc,DAT_8c08b3f8);
    }
    if (in_FPSCR_PR == '\0') {
      a7 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      a7 = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b3f4,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b3f8,DAT_8c08b3f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b3f8,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c08b3fc,DAT_8c08b3f8);
    }
    if (in_FPSCR_PR == '\0') {
      iVar3 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar3 = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b3f4,*(undefined4 *)(ar4 + 0x50));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b3f8,DAT_8c08b3f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b3f8,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c08b3fc,DAT_8c08b3f8);
    }
    if (in_FPSCR_PR == '\0') {
      iVar4 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar4 = (int)(dVar7 / dVar7);
    }
    (*(code *)PTR_FUN_8c08b3fc)(0,iVar4,iVar3,a7);
    (*(code *)PTR_FUN_8c08b400)(0,iVar4,iVar3,a7);
    uVar2 = (*(code *)PTR_deref_u32_8c08b408)(ar4 + DAT_8c08b404,iVar4,iVar3,a7);
    *(undefined4 *)((int)puVar5 + -0x50) = uVar2;
    uVar2 = (*(code *)PTR_FUN_8c08b410)(ar4 + DAT_8c08b40c,iVar4,iVar3,a7);
    *(undefined4 *)((int)puVar5 + -0x54) = uVar2;
    a6 = *(int *)((int)puVar5 + -0x54);
    a5 = *(int *)((int)puVar5 + -0x50);
    (*(code *)PTR_FUN_8c08b41c)(*(undefined4 *)(DAT_8c08b414._4_4_ + ar4),a5,a6,a7);
    (*(code *)PTR_FUN_8c08b3d0)(1,a5,a6,a7);
  }
  else if ((sVar1 == 3) && (*(int *)(DAT_8c08b534 + ar4) != 0)) {
    (*(code *)PTR_FUN_8c08b53c)(ar4 + DAT_8c08b538,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x58) = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *(double *)((int)puVar5 + -0x58) = dVar7;
    }
    (*(code *)PTR_FUN_8c08b544)(*(undefined4 *)(DAT_8c08b540 + ar4),a5,a6,a7);
    (*(code *)PTR_FUN_8c08b548)(0,a5,a6,a7);
    (*(code *)PTR_FUN_8c08b558)(0,a5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b560,*(undefined4 *)(ar4 + DAT_8c08b55c));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b564,DAT_8c08b560);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b564,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b568,DAT_8c08b564);
    }
    if (in_FPSCR_PR == '\0') {
      a7 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      a7 = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b560,*(undefined4 *)(ar4 + DAT_8c08b568));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b564,DAT_8c08b560);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b564,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b568,DAT_8c08b564);
    }
    if (in_FPSCR_PR == '\0') {
      iVar3 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar3 = (int)(dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b560,*(undefined4 *)(ar4 + DAT_8c08b56c));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b564,DAT_8c08b560);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c08b564,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c08b568,DAT_8c08b564);
    }
    if (in_FPSCR_PR == '\0') {
      iVar4 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      iVar4 = (int)(dVar7 / dVar7);
    }
    (*(code *)PTR_FUN_8c08b570)(0,iVar4,iVar3,a7);
    (*(code *)PTR_FUN_8c08b580)(0,iVar4,iVar3,a7);
    uVar2 = (*(code *)PTR_deref_u32_8c08b588)(ar4 + DAT_8c08b584,iVar4,iVar3,a7);
    *(undefined4 *)((int)puVar5 + -0x5c) = uVar2;
    uVar2 = (*(code *)PTR_FUN_8c08b590)(ar4 + DAT_8c08b58c,iVar4,iVar3,a7);
    *(undefined4 *)((int)puVar5 + -0x60) = uVar2;
    a6 = *(int *)((int)puVar5 + -0x60);
    a5 = *(int *)((int)puVar5 + -0x5c);
    (*(code *)PTR_FUN_8c08b598)(*(undefined4 *)(DAT_8c08b594 + ar4),a5,a6,a7);
    (*(code *)PTR_FUN_8c08b59c)(1,a5,a6,a7);
  }
  uVar2 = (*(code *)PTR_FUN_8c08b5a4)(PTR_DAT_8c08b5a0,a5,a6,a7);
  return uVar2;
}



/* FUN_8c08b5a8 @ 8c08b5a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08b5a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  undefined4 uStack_20;
  
  uVar1 = (*(code *)PTR_FUN_8c08b65c)(ar4 + DAT_8c08b658,ar5,ar6,ar7);
  iVar4 = *(int *)(DAT_8c08b660 + ar4) + (short)uVar1 * DAT_8c08b664;
  (*(code *)PTR_FUN_8c08b66c)(*(undefined4 *)(DAT_8c08b668 + ar4),ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c08b670)(iVar4 + 0x70,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c08b678)(*(undefined4 *)(DAT_8c08b674 + ar4),ar5,ar6,ar7);
  a5 = (*(code *)PTR_deref_u32_8c08b680)(*(int *)(DAT_8c08b67c + iVar4) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c08b678)(*(undefined4 *)(DAT_8c08b674 + ar4),ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_FUN_8c08b688)(*(int *)(DAT_8c08b684 + iVar4) + iVar2 * 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08b68c)(*(undefined4 *)(DAT_8c08b674 + ar4),ar5,ar6,ar7);
  uStack_20 = extraout_fr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = uVar3;
  }
  uVar1 = (*(code *)PTR_FUN_8c08b690)(uVar1,a5,uStack_20,ar7);
  return uVar1;
}



/* FUN_8c08b694 @ 8c08b694 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08b694(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c08b6f8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08b700)(ar4 + DAT_8c08b6fc,ar5 + 0x4c,ar6,ar7);
  (*(code *)PTR_FUN_8c08b70c)(ar4 + DAT_8c08b708,ar5 + DAT_8c08b704,ar6,ar7);
  (**(code **)(**(int **)(DAT_8c08b714 + ar4) + 0x24))
            (*(int **)(DAT_8c08b714 + ar4),ar5 + DAT_8c08b710,ar6,ar7);
  iVar1 = DAT_8c08b718;
  *(undefined4 *)(DAT_8c08b718 + ar4) = *(undefined4 *)(DAT_8c08b71c + ar5);
  return iVar1;
}



/* FUN_8c08b720 @ 8c08b720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08b720(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c08b77c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08b784)(ar4 + DAT_8c08b780,ar5 + 0x24,ar6,ar7);
  (*(code *)PTR_FUN_8c08b78c)(ar4 + DAT_8c08b788,ar5 + 0x58,ar6,ar7);
  (**(code **)(**(int **)(DAT_8c08b790 + ar4) + 0x24))
            (*(int **)(DAT_8c08b790 + ar4),ar5 + 0x48,ar6,ar7);
  iVar1 = DAT_8c08b794;
  *(undefined4 *)(DAT_8c08b794 + ar4) = *(undefined4 *)(ar5 + 0x68);
  return iVar1;
}



/* FUN_8c08b798 @ 8c08b798 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c08b798(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong in_dr0;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_FUN_8c08b814)(ar4 + DAT_8c08b810,ar5,ar6,ar7);
  if ((short)uVar1 == 2) {
    *(undefined4 *)(DAT_8c08b81c + ar4) = 0;
  }
  else if (*(int *)(DAT_8c08b818 + ar4) == 2) {
    *(undefined4 *)(DAT_8c08b81c + ar4) = 1;
  }
  (*(code *)PTR_FUN_8c08b820)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c08b814)(ar4 + DAT_8c08b810,ar5,ar6,ar7);
  puVar2 = DAT_8c08b824;
  if ((short)uVar1 < 2) {
    puVar2 = &DAT_8c08b828;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + (int)DAT_8c08b824) = (undefined4)DAT_8c08b828;
    }
    else {
      *(undefined8 *)(ar4 + (int)DAT_8c08b824) =
           CONCAT44(DAT_8c08b828._4_4_,(undefined4)DAT_8c08b828);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + (int)DAT_8c08b824) = 0;
  }
  else {
    *(ulonglong *)(ar4 + (int)DAT_8c08b824) = in_dr0 & 0xffffffff;
  }
  return puVar2;
}



/* s_cp_ESA_FRONT_HOME_njd_08bd28 @ 8c08bd20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_cp_ESA_FRONT_HOME_njd_08bd28(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int a7;
  undefined4 uStack_1c;
  int aiStack_18 [2];
  
  iVar1 = -DAT_8c08bec4;
  (*(code *)PTR_FUN_8c08bec8)(ar4,ar5,ar6,ar7);
  a7 = ar4 + ar6;
  (*(code *)PTR_FUN_8c08bed4)
            (ar5,*(undefined4 *)PTR_PTR_8c08bed0,*(undefined4 *)(DAT_8c08becc + ar4),a7);
  if (ar6 == 2) {
    (*(code *)PTR_FUN_8c08bed4)
              (ar5,*(undefined4 *)PTR_PTR_8c08bed8,*(undefined4 *)(DAT_8c08becc + ar4),a7);
    (*(code *)PTR_FUN_8c08bee0)
              (ar5,*(undefined4 *)PTR_PTR_8c08bedc,*(undefined4 *)(DAT_8c08becc + ar4),a7);
    uVar4 = *(undefined4 *)(DAT_8c08becc + ar4);
    uVar3 = *(undefined4 *)PTR_PTR_8c08bee4;
    (*(code *)PTR_FUN_8c08bee8)(ar5,uVar3,uVar4,a7);
    uVar2 = (*(code *)PTR_FUN_8c08bef0)(*(undefined4 *)(DAT_8c08beec + ar4),uVar3,uVar4,a7);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    ar6 = *(int *)(&stack0xfffffff0 + iVar1);
    if (ar6 == -1) {
      *(undefined4 *)((int)aiStack_18 + iVar1) =
           *(undefined4 *)**(undefined4 **)(DAT_8c08beec + ar4);
      *(undefined **)((int)&uStack_1c + iVar1) = PTR_s_GRAPHICS_COMMON_8c08bef4 + DAT_8c08bef8;
      (*(code *)PTR_FUN_8c08bf00)((int)&uStack_1c + DAT_8c08befc + iVar1,uVar3,uVar4,a7);
      *(undefined4 *)((int)aiStack_18 + iVar1) = 5;
      ar6 = (*(code *)PTR_report_error_message_8c08bf0c)
                      ((int)aiStack_18 + DAT_8c08bf08 + iVar1,
                       PTR_s_GRAPHICS_COMMON_8c08bef4 + DAT_8c08bf04,1,2);
    }
  }
  else if (ar6 == 3) {
    (*(code *)PTR_FUN_8c08bed4)
              (ar5,*(undefined4 *)PTR_PTR_8c08bf10,*(undefined4 *)(DAT_8c08becc + ar4),a7);
    (*(code *)PTR_FUN_8c08bf14)
              (ar5,*(undefined4 *)PTR_PTR_8c08bf10,*(undefined4 *)(DAT_8c08becc + ar4),a7);
    (*(code *)PTR_FUN_8c08bee0)
              (ar5,*(undefined4 *)PTR_PTR_8c08bf18,*(undefined4 *)(DAT_8c08becc + ar4),a7);
    (*(code *)PTR_FUN_8c08bee8)
              (ar5,*(undefined4 *)PTR_PTR_8c08bf1c,*(undefined4 *)(DAT_8c08becc + ar4),a7);
    (*(code *)PTR_FUN_8c08bee0)
              (ar5,*(undefined4 *)(PTR_PTR_8c08bf18 + 4),*(undefined4 *)(DAT_8c08becc + ar4),a7);
    (*(code *)PTR_FUN_8c08bee8)
              (ar5,*(undefined4 *)(PTR_PTR_8c08bf1c + 4),*(undefined4 *)(DAT_8c08becc + ar4),a7);
    uVar4 = *(undefined4 *)(DAT_8c08becc + ar4);
    uVar3 = *(undefined4 *)PTR_PTR_8c08bf20;
    (*(code *)PTR_FUN_8c08bf24)(ar5,uVar3,uVar4,a7);
    uVar2 = (*(code *)PTR_FUN_8c08bef0)(*(undefined4 *)(DAT_8c08beec + ar4),uVar3,uVar4,a7);
    *(undefined4 *)((int)aiStack_18 + iVar1 + 4) = uVar2;
    ar6 = *(int *)((int)aiStack_18 + iVar1 + 4);
    if (ar6 == -1) {
      *(undefined4 *)((int)aiStack_18 + iVar1) =
           *(undefined4 *)**(undefined4 **)(DAT_8c08beec + ar4);
      *(undefined **)((int)&uStack_1c + iVar1) = PTR_s_GRAPHICS_COMMON_8c08bef4 + DAT_8c08bef8;
      (*(code *)PTR_FUN_8c08bf00)(&stack0xfffffff4 + iVar1,uVar3,uVar4,a7);
      *(undefined4 *)((int)aiStack_18 + iVar1) = 5;
      ar6 = (*(code *)PTR_report_error_message_8c08bf0c)
                      (&stack0xfffffff4 + iVar1,PTR_s_GRAPHICS_COMMON_8c08bef4 + DAT_8c08bf28,1,2);
    }
  }
  return ar6;
}



/* s_Cp_Home_njd_08bf2c @ 8c08bf2c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined2 * s_Cp_Home_njd_08bf2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 in_fr1;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined8 in_xd0;
  undefined2 uVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c08c250 + iVar2 * DAT_8c08c24c) = 0;
    *(undefined4 *)(DAT_8c08c254 + iVar2 * DAT_8c08c24c + DAT_8c08c250) = 0;
    *(undefined4 *)(DAT_8c08c258 + iVar2 * DAT_8c08c24c + DAT_8c08c250) = 0;
    *(undefined2 *)(DAT_8c08c25c + iVar2 * DAT_8c08c24c + DAT_8c08c250) = 0;
    *(undefined2 *)(DAT_8c08c260 + iVar2 * DAT_8c08c24c + DAT_8c08c250) = 0;
  }
  *(undefined **)(DAT_8c08c250 + 4) = PTR_PTR_8c08c264;
  *(undefined **)(DAT_8c08c250 + 8) = PTR_PTR_8c08c268;
  *(undefined4 *)(DAT_8c08c250 + 0xc) = *(undefined4 *)PTR_PTR_8c08c26c;
  *(undefined4 *)(DAT_8c08c250 + 0x10) = 0;
  *(undefined4 *)(DAT_8c08c250 + 0x14) = *(undefined4 *)PTR_PTR_8c08c270;
  *(undefined4 *)(DAT_8c08c250 + 0x18) = *(undefined4 *)PTR_PTR_8c08c274;
  *(undefined4 *)(DAT_8c08c250 + 0x20) = *(undefined4 *)PTR_PTR_8c08c278;
  *(undefined4 *)(DAT_8c08c250 + 0x34) = *(undefined4 *)PTR_PTR_8c08c27c;
  *(undefined4 *)(DAT_8c08c250 + 0x38) = 0xb;
  *(undefined4 *)(DAT_8c08c250 + 0x24) = 0xb;
  *(undefined4 *)(DAT_8c08c250 + 0x30) = DAT_8c08c280;
  *(undefined4 *)(DAT_8c08c250 + 0x44) = DAT_8c08c284;
  *(undefined4 *)(DAT_8c08c258 + DAT_8c08c250) = DAT_8c08c288;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44((undefined4)DAT_8c08c290,in_fr1);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c28c) = (undefined4)DAT_8c08c290;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c290._4_4_,(undefined4)DAT_8c08c290);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c28c) = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c298,(int)uVar4);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c290._4_4_) = DAT_8c08c298;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c29c,DAT_8c08c298);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c290._4_4_) = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c08c2a0,(int)uVar4);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c29c) = DAT_8c08c2a0;
  }
  else {
    uVar5 = CONCAT44(DAT_8c08c2a4,DAT_8c08c2a0);
    *(ulonglong *)(DAT_8c08c250 + DAT_8c08c29c) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c2a4) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c250 + DAT_8c08c2a4) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c2a8) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c250 + DAT_8c08c2a8) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c2b0,(int)uVar5);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c2ac) = DAT_8c08c2b0;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c2b4,DAT_8c08c2b0);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c2ac) = uVar4;
  }
  *(undefined4 *)(DAT_8c08c254 + DAT_8c08c250) = DAT_8c08c2b4;
  *(undefined2 *)(DAT_8c08c25c + DAT_8c08c250) = 0x14;
  *(undefined4 *)(DAT_8c08c2b8 + DAT_8c08c250) = DAT_8c08c2bc;
  *(undefined2 *)(DAT_8c08c260 + DAT_8c08c250) = 0x14;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c298,(int)uVar4);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c2c0) = DAT_8c08c298;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c29c,DAT_8c08c298);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c2c0) = uVar4;
  }
  uVar5 = CONCAT44(0x3f800000,(int)uVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c2c4) = 0x3f800000;
  }
  else {
    *(ulonglong *)(DAT_8c08c250 + DAT_8c08c2c4) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = (ulonglong)*(uint *)(DAT_8c08c250 + DAT_8c08c2c4);
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c08c250 + DAT_8c08c2c4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(DAT_8c08c250 + DAT_8c08c2c0),(int)uVar5);
  }
  else {
    dVar6 = *(double *)(DAT_8c08c250 + DAT_8c08c2c0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 - dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(DAT_8c08c250 + DAT_8c08c2cc),fVar3);
  }
  else {
    dVar6 = *(double *)(DAT_8c08c250 + DAT_8c08c2cc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 / dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c08c2d0,fVar3);
  }
  else {
    dVar6 = (double)CONCAT44(_DAT_8c08c2d4,DAT_8c08c2d0);
  }
  if (in_FPSCR_PR == '\0') {
    uVar7 = (undefined2)(int)((float)((ulonglong)dVar6 >> 0x20) / SUB84(dVar6,0));
  }
  else {
    uVar7 = (undefined2)(int)(dVar6 / dVar6);
  }
  *(undefined2 *)(DAT_8c08c2c8 + DAT_8c08c250) = uVar7;
  if (*(short *)(DAT_8c08c2c8 + DAT_8c08c250) == 0) {
    *(undefined2 *)(DAT_8c08c2c8 + DAT_8c08c250) = 1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + _DAT_8c08c2d4) = DAT_8c08c2d8;
  }
  else {
    *(undefined8 *)(DAT_8c08c250 + _DAT_8c08c2d4) = CONCAT44(DAT_8c08c2dc,DAT_8c08c2d8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c08c2e0,*(undefined4 *)(DAT_8c08c250 + DAT_8c08c2dc));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c08c250 + DAT_8c08c2dc);
    dVar6 = (double)CONCAT44(DAT_8c08c2e4,DAT_8c08c2e0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c08c250 + DAT_8c08c2dc) = fVar3;
  }
  else {
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c2dc) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c2e8,fVar3);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c2e4) = DAT_8c08c2e8;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c2ec,DAT_8c08c2e8);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c2e4) = uVar4;
  }
  *(undefined **)(DAT_8c08c2ec + DAT_8c08c250) = PTR_PTR_8c08c264;
  *(undefined **)(DAT_8c08c2f0 + DAT_8c08c250) = PTR_PTR_8c08c268;
  *(undefined4 *)(DAT_8c08c2f4 + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c26c;
  *(undefined4 *)(DAT_8c08c2f8 + DAT_8c08c250) = 0;
  *(undefined4 *)(DAT_8c08c2fc + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c270;
  *(undefined4 *)(DAT_8c08c300 + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c274;
  *(undefined4 *)(DAT_8c08c304 + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c278;
  *(undefined4 *)(DAT_8c08c308 + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c27c;
  *(undefined4 *)(DAT_8c08c30c + DAT_8c08c250) = 0xb;
  *(undefined4 *)(DAT_8c08c310 + DAT_8c08c250) = 0xb;
  *(undefined4 *)(DAT_8c08c314 + DAT_8c08c250) = DAT_8c08c280;
  *(undefined4 *)(DAT_8c08c318 + DAT_8c08c250) = DAT_8c08c284;
  *(undefined4 *)(DAT_8c08c31c + DAT_8c08c250) = DAT_8c08c288;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44((undefined4)DAT_8c08c290,(int)uVar4);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c320) = (undefined4)DAT_8c08c290;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c290._4_4_,(undefined4)DAT_8c08c290);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c320) = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c298,(int)uVar4);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c324) = DAT_8c08c298;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c29c,DAT_8c08c298);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c324) = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c08c2a0,(int)uVar4);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c328) = DAT_8c08c2a0;
  }
  else {
    uVar5 = CONCAT44(DAT_8c08c2a4,DAT_8c08c2a0);
    *(ulonglong *)(DAT_8c08c250 + DAT_8c08c328) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c32c) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c250 + DAT_8c08c32c) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c330) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c250 + DAT_8c08c330) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c334) = DAT_8c08c2b0;
  }
  else {
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c334) = CONCAT44(DAT_8c08c2b4,DAT_8c08c2b0);
  }
  *(undefined4 *)(DAT_8c08c338 + DAT_8c08c250) = DAT_8c08c2b4;
  *(undefined2 *)(DAT_8c08c33c + DAT_8c08c250) = 0x14;
  *(undefined4 *)(DAT_8c08c340 + DAT_8c08c250) = DAT_8c08c2bc;
  *(undefined2 *)(DAT_8c08c344 + DAT_8c08c250) = 0x14;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c348) = DAT_8c08c2d8;
  }
  else {
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c348) = CONCAT44(DAT_8c08c2dc,DAT_8c08c2d8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c08c2e0,*(undefined4 *)(DAT_8c08c250 + DAT_8c08c34c));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c08c250 + DAT_8c08c34c);
    dVar6 = (double)CONCAT44(DAT_8c08c2e4,DAT_8c08c2e0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c08c250 + DAT_8c08c34c) = fVar3;
  }
  else {
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c34c) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c2e8,fVar3);
    *(undefined4 *)(DAT_8c08c250 + DAT_8c08c350) = DAT_8c08c2e8;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c2ec,DAT_8c08c2e8);
    *(undefined8 *)(DAT_8c08c250 + DAT_8c08c350) = uVar4;
  }
  *(undefined **)(DAT_8c08c354 + DAT_8c08c250) = PTR_PTR_8c08c358;
  *(undefined **)(DAT_8c08c35c + DAT_8c08c250) = PTR_PTR_8c08c360;
  *(undefined4 *)(DAT_8c08c364 + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c368;
  *(undefined4 *)(DAT_8c08c36c + DAT_8c08c250) = 0;
  *(undefined4 *)(DAT_8c08c370 + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c374;
  *(undefined4 *)(DAT_8c08c378 + DAT_8c08c250) = *(undefined4 *)PTR_PTR_8c08c37c;
  *(undefined4 *)(DAT_8c08c584 + DAT_8c08c250) = DAT_8c08c588;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c590) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c590) = CONCAT44(0x3f800000,(int)uVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c598,(int)uVar4);
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c594) = DAT_8c08c598;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c59c,DAT_8c08c598);
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c594) = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c59c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c59c) = CONCAT44(0x3f800000,(int)uVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c08c5a4,(int)uVar4);
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c5a0) = DAT_8c08c5a4;
  }
  else {
    uVar5 = CONCAT44(DAT_8c08c5a8,DAT_8c08c5a4);
    *(ulonglong *)(DAT_8c08c58c + DAT_8c08c5a0) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c5a8) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c58c + DAT_8c08c5a8) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c5ac) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c58c + DAT_8c08c5ac) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c5b4,(int)uVar5);
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c5b0) = DAT_8c08c5b4;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c5b8,DAT_8c08c5b4);
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c5b0) = uVar4;
  }
  *(undefined4 *)(DAT_8c08c5b8 + DAT_8c08c58c) = DAT_8c08c5bc;
  *(undefined2 *)(DAT_8c08c5c0 + DAT_8c08c58c) = 2;
  *(undefined4 *)(DAT_8c08c5c4 + DAT_8c08c58c) = DAT_8c08c5c8;
  *(undefined2 *)(DAT_8c08c5cc + DAT_8c08c58c) = 2;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44((undefined4)DAT_8c08c5d4,(int)uVar4);
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c5d0) = (undefined4)DAT_8c08c5d4;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c5d4._4_4_,(undefined4)DAT_8c08c5d4);
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c5d0) = uVar4;
  }
  *(undefined **)(DAT_8c08c5d4._4_4_ + DAT_8c08c58c) = PTR_PTR_8c08c5dc;
  *(undefined **)(DAT_8c08c5e0 + DAT_8c08c58c) = PTR_PTR_8c08c5e4;
  *(undefined4 *)(DAT_8c08c5e8 + DAT_8c08c58c) = *(undefined4 *)PTR_PTR_8c08c5ec;
  *(undefined4 *)(DAT_8c08c5f0 + DAT_8c08c58c) = 0;
  *(undefined4 *)(DAT_8c08c5f4 + DAT_8c08c58c) = *(undefined4 *)PTR_PTR_8c08c5f8;
  *(undefined4 *)(DAT_8c08c5fc + DAT_8c08c58c) = *(undefined4 *)PTR_PTR_8c08c600;
  *(undefined4 *)(DAT_8c08c604 + DAT_8c08c58c) = *(undefined4 *)PTR_PTR_8c08c608;
  *(undefined4 *)(DAT_8c08c60c + DAT_8c08c58c) = *(undefined4 *)PTR_PTR_8c08c610;
  *(undefined4 *)(DAT_8c08c614 + DAT_8c08c58c) = 0xf;
  *(undefined4 *)(DAT_8c08c618 + DAT_8c08c58c) = 0xf;
  *(undefined4 *)(DAT_8c08c61c + DAT_8c08c58c) = DAT_8c08c620;
  *(undefined4 *)(DAT_8c08c624 + DAT_8c08c58c) = DAT_8c08c628;
  *(undefined4 *)(DAT_8c08c62c + DAT_8c08c58c) = DAT_8c08c588;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c630) = 0x3f800000;
  }
  else {
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c630) = CONCAT44(0x3f800000,(int)uVar4);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c598,(int)uVar4);
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c634) = DAT_8c08c598;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c59c,DAT_8c08c598);
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c634) = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(DAT_8c08c63c,(int)uVar4);
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c638) = DAT_8c08c63c;
  }
  else {
    uVar4 = CONCAT44(DAT_8c08c640,DAT_8c08c63c);
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c638) = uVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(DAT_8c08c644,(int)uVar4);
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c640) = DAT_8c08c644;
  }
  else {
    uVar5 = CONCAT44(DAT_8c08c648,DAT_8c08c644);
    *(ulonglong *)(DAT_8c08c58c + DAT_8c08c640) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c648) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c58c + DAT_8c08c648) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c64c) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c08c58c + DAT_8c08c64c) = uVar5 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c650) = DAT_8c08c654;
  }
  else {
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c650) = CONCAT44(DAT_8c08c658,DAT_8c08c654);
  }
  *(undefined4 *)(DAT_8c08c658 + DAT_8c08c58c) = DAT_8c08c65c;
  *(undefined2 *)(DAT_8c08c660 + DAT_8c08c58c) = 7;
  *(undefined4 *)(DAT_8c08c664 + DAT_8c08c58c) = DAT_8c08c668;
  *(undefined2 *)(DAT_8c08c66c + DAT_8c08c58c) = 7;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c670) = (undefined4)DAT_8c08c674;
  }
  else {
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c670) =
         CONCAT44(DAT_8c08c674._4_4_,(undefined4)DAT_8c08c674);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c08c67c,*(undefined4 *)(DAT_8c08c58c + DAT_8c08c674._4_4_));
  }
  else {
    in_xd0 = *(undefined8 *)(DAT_8c08c58c + DAT_8c08c674._4_4_);
    dVar6 = (double)CONCAT44(DAT_8c08c680,DAT_8c08c67c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c08c58c + DAT_8c08c674._4_4_) = fVar3;
  }
  else {
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c674._4_4_) = in_xd0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c08c58c + DAT_8c08c680) = DAT_8c08c644;
  }
  else {
    *(undefined8 *)(DAT_8c08c58c + DAT_8c08c680) = CONCAT44(DAT_8c08c648,DAT_8c08c644);
  }
  *DAT_8c08c684 = 2;
  *(undefined4 *)(DAT_8c08c684 + 2) = 1;
  *(undefined4 *)(DAT_8c08c684 + 4) = 1;
  *(undefined4 *)(DAT_8c08c684 + 6) = 0;
  DAT_8c08c684[8] = 3;
  *(undefined4 *)(DAT_8c08c684 + 10) = 1;
  *(undefined4 *)(DAT_8c08c684 + 0xc) = 1;
  *(undefined4 *)(DAT_8c08c684 + 0xe) = 0;
  DAT_8c08c684[0x10] = 0xffff;
  *(undefined4 *)(DAT_8c08c684 + 0x12) = 1;
  *(undefined4 *)(DAT_8c08c684 + 0x14) = 1;
  puVar1 = DAT_8c08c684;
  *(undefined4 *)(DAT_8c08c684 + 0x16) = 0;
  return puVar1;
}



/* FUN_8c08c688 @ 8c08c688 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08c688(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c08c6a8)(ar4 + DAT_8c08c6a4,1,ar6,ar7);
  return uVar1;
}



/* Class_12a5d0_m7_08c6ac @ 8c08c6ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a5d0_m7_08c6ac(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

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
  (*(code *)PTR_Vec3_ctor_zero_8c08c7fc)((undefined1 *)((int)puVar2 + -0x1c),ar5,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(code *)PTR_Vec3_ctor_zero_8c08c7fc)((undefined1 *)((int)puVar2 + -0x2c),a5,ar6,ar7);
  dVar7 = (double)CONCAT44(uVar1,0x3f800000);
  uVar1 = (*(code *)PTR_get_field_288_08c818_8c08c804)(ar4 + DAT_8c08c800,a5,ar6,ar7);
  *(undefined4 *)((int)puVar2 + -0x30) = uVar1;
  if (*(int *)((int)puVar2 + -0x30) == 1) {
    (**(code **)(DAT_8c08c808 + *(int *)(ar4 + 8)))(ar4,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x34) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)((int)puVar2 + -0x34))
      ;
    }
    else {
      *(double *)((int)puVar2 + -0x34) = in_dr0;
    }
  }
  a6 = (undefined1 *)((int)puVar2 + -0x2c);
  (**(code **)(DAT_8c08c80c + *ar5))(ar5,(undefined1 *)((int)puVar2 + -0x1c),a6,ar7);
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
  (**(code **)(DAT_8c08c810 + *ar5))(ar5,ar4 + 0x30,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0x38) = (int)((ulonglong)dVar4 >> 0x20);
    dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x38),SUB84(dVar7,0));
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar4,0));
  }
  else {
    *(double *)((int)puVar2 + -0x38) = dVar4;
    dVar7 = *(double *)((int)puVar2 + -0x38);
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
  (*(code *)PTR_Vec3_dtor_8c08c814)((undefined1 *)((int)puVar2 + -0x2c),0xffffffff,a6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c08c814)((undefined1 *)((int)puVar2 + -0x1c),0xffffffff,a6,ar7);
  return uVar1;
}



/* get_field_288_08c818 @ 8c08c818 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_288_08c818(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c08c820 + ar4);
}



/* FUN_8c08c824 @ 8c08c824 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c08c848) */
/* WARNING: Removing unreachable block (ram,0x8c08c85a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c08c824(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  float fVar5;
  undefined8 in_dr14;
  double dVar6;
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
  *(undefined4 *)((int)puVar3 + -8) = in_PR;
  uVar1 = (*(code *)PTR_get_field_24_026024_8c08c9a0)
                    (*(undefined4 *)(DAT_8c08c99c + ar4),ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0xc) = uVar1;
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (*(int *)((int)puVar3 + -0xc) == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08c9a8,in_fr1);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c08c9ac,DAT_8c08c9a8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(uVar1,(float)*(int *)(DAT_8c08c9a4 + ar4) /
                                     (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar6 = (double)CONCAT44(uVar1,(float)*(int *)(DAT_8c08c9a4 + ar4)) / dVar4;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08c9ac,in_fr1);
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c08c9b0,DAT_8c08c9ac);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(uVar1,(float)*(int *)(DAT_8c08c9a4 + ar4) /
                                     (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar6 = (double)CONCAT44(uVar1,(float)*(int *)(DAT_8c08c9a4 + ar4)) / dVar4;
    }
  }
  fVar5 = SUB84(dVar6,0);
  if (*(int *)(DAT_8c08c9a4 + ar4) < 0x65) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c08c9b4,SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)PTR_DAT_8c08c9b4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9b0) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9b0) = dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c08c9b4 + 4),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(PTR_DAT_8c08c9b4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9b8) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9b8) = dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c08c9b4 + 8),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(PTR_DAT_8c08c9b4 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9bc) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9bc) = dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c08c9b4 + 0xc),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(PTR_DAT_8c08c9b4 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9c0) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9c0) = dVar4;
    }
  }
  if (DAT_8c08c9c4 <= *(int *)(DAT_8c08c9a4 + ar4)) {
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)*(int *)(DAT_8c08c9a4 + ar4),fVar5);
    }
    else {
      dVar6 = (double)*(int *)(DAT_8c08c9a4 + ar4);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08c9c8,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(DAT_8c08c9cc,DAT_8c08c9c8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar4 >> 0x20)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c08c9cc,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(_DAT_8c08c9d0,DAT_8c08c9cc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / (float)((ulonglong)dVar4 >> 0x20)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 / dVar4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + 1.0,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + (double)CONCAT44(0x3f800000,SUB84(dVar4,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c08c9b4,SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)PTR_DAT_8c08c9b4;
    }
    fVar5 = (float)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9b0) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9b0) = dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c08c9b4 + 4),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(PTR_DAT_8c08c9b4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9b8) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9b8) = dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c08c9b4 + 8),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(PTR_DAT_8c08c9b4 + 8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9bc) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9bc) = dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c08c9b4 + 0xc),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(PTR_DAT_8c08c9b4 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar5,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + DAT_8c08c9c0) = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      *(double *)(ar4 + DAT_8c08c9c0) = dVar4;
    }
  }
  uVar1 = (*(code *)PTR_get_field_24_026024_8c08c9a0)
                    (*(undefined4 *)(DAT_8c08c99c + ar4),ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x10) = uVar1;
  if (*(int *)((int)puVar3 + -0x10) == 1) {
    *(int *)((int)puVar3 + -0x14) = ar4;
    *(undefined4 *)((int)puVar3 + -0x18) =
         *(undefined4 *)(DAT_8c08c9a4 + *(int *)((int)puVar3 + -0x14));
    *(int *)(DAT_8c08c9a4 + *(int *)((int)puVar3 + -0x14)) = *(int *)((int)puVar3 + -0x18) + 1;
    iVar2 = _DAT_8c08c9d0;
    if (_DAT_8c08c9d0 < *(int *)((int)puVar3 + -0x18) + 1) {
      *(undefined4 *)(DAT_8c08c9a4 + ar4) = 0;
      *(int *)((int)puVar3 + -0x1c) = ar4;
      iVar2 = 0x74;
      *(uint *)(*(int *)((int)puVar3 + -0x1c) + 0x74) =
           *(uint *)(*(int *)((int)puVar3 + -0x1c) + 0x74) & DAT_8c08c9d4;
    }
  }
  else {
    *(int *)((int)puVar3 + -0x20) = ar4;
    *(undefined4 *)((int)puVar3 + -0x24) =
         *(undefined4 *)(DAT_8c08c9a4 + *(int *)((int)puVar3 + -0x20));
    *(int *)(DAT_8c08c9a4 + *(int *)((int)puVar3 + -0x20)) = *(int *)((int)puVar3 + -0x24) + 1;
    iVar2 = DAT_8c08c9d8;
    if (DAT_8c08c9d8 < *(int *)((int)puVar3 + -0x24) + 1) {
      *(undefined4 *)(DAT_8c08c9a4 + ar4) = 0;
      *(int *)((int)puVar3 + -0x28) = ar4;
      iVar2 = 0x74;
      *(uint *)(*(int *)((int)puVar3 + -0x28) + 0x74) =
           *(uint *)(*(int *)((int)puVar3 + -0x28) + 0x74) & DAT_8c08c9d4;
    }
  }
  return iVar2;
}



/* s_cp_ESA_FRONT_HOME_njd_08c9ea @ 8c08c9dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_cp_ESA_FRONT_HOME_njd_08c9ea(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *a5;
  code *a6;
  int *a7;
  undefined4 a6_00;
  undefined4 uVar4;
  int iStack_bc;
  int aiStack_b8 [4];
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
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  
  *(undefined4 *)((int)aiStack_b8 + DAT_8c08ca50) = 0;
  *(undefined4 *)((int)aiStack_b8 + DAT_8c08ca54) = 0;
  uVar4 = 0;
  a7 = (int *)0x2;
  iVar1 = *(int *)(DAT_8c08ca58 + ar4) + ar6 * DAT_8c08ca5c;
  iStack_bc = ar4 + ar6;
  iStack_7c = ar6;
  *(undefined4 *)((int)aiStack_b8 + DAT_8c08ca60) = 0;
  iVar2 = *(int *)(DAT_8c08ca64 + ar4);
  a6 = (code *)0xb;
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    a5 = (&switchD_8c08ca4a::switchdataD_8c08ca68)[iVar2];
    switch(iVar2) {
    case 0:
      *(undefined2 *)(DAT_8c08cae0 + ar4) = 0;
      uVar3 = (*(code *)PTR_FUN_8c08caf0)
                        (ar5,*(undefined4 *)PTR_PTR_8c08caec,*(undefined4 *)(DAT_8c08cae8 + ar4),
                         (int)&iStack_bc + DAT_8c08cae4);
      *(undefined4 *)((int)aiStack_b8 + DAT_8c08caf4) = uVar3;
      iStack_80 = *(int *)((int)aiStack_b8 + DAT_8c08caf4);
      if (iStack_80 == 1) {
        *(undefined4 *)(DAT_8c08caf8 + ar4) = *(undefined4 *)((int)aiStack_b8 + DAT_8c08cafc);
        *(undefined4 *)(DAT_8c08cb00 + ar4) = 1;
      }
      else if (iStack_80 == 0) {
        iStack_bc = 5;
        (*(code *)PTR_report_error_message_8c08cb30)
                  (*(undefined4 *)(iVar1 + 0xc),PTR_s_GRAPHICS_COMMON_8c08cb28 + DAT_8c08cb2c,0,2);
      }
      break;
    case 1:
      if (*(int *)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(DAT_8c08cb44 + ar4) = 2;
      }
      else {
        uVar3 = (*(code *)PTR_FUN_8c08cb80)
                          (ar5,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(DAT_8c08cb7c + ar4),
                           iStack_bc);
        *(undefined4 *)((int)aiStack_b8 + DAT_8c08cb84) = uVar3;
        iStack_84 = *(int *)((int)aiStack_b8 + DAT_8c08cb84);
        if (iStack_84 == 1) {
          *(undefined4 *)(DAT_8c08cb88 + ar4) = 2;
        }
        else if (iStack_84 == 0) {
          iStack_bc = 5;
          (*(code *)PTR_report_error_message_8c08cbbc)
                    (*(undefined4 *)(iVar1 + 0x18),PTR_s_GRAPHICS_COMMON_8c08cbb4 + DAT_8c08cbb8,0,2
                    );
        }
      }
      break;
    case 2:
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(DAT_8c08cbd0 + ar4) = 3;
      }
      else {
        iStack_88 = (int)*(short *)(DAT_8c08cc4c + ar4);
        iStack_8c = (int)*(short *)(DAT_8c08cc4c + ar4);
        iStack_bc = 0;
        uVar3 = (*(code *)PTR_s_Failed_to_Read_CAnimal_LoadM_02839e_8c08cc5c)
                          (ar4,*(undefined4 *)(iStack_88 * 4 + *(int *)(iVar1 + 4)),
                           *(undefined4 *)(DAT_8c08cc58 + ar4),
                           *(int *)(DAT_8c08cc54 + iVar1) + iStack_8c * 4);
        *(undefined4 *)((int)aiStack_b8 + DAT_8c08cc60) = uVar3;
        if (*(int *)((int)aiStack_b8 + DAT_8c08cc60) == 1) {
          *(undefined2 *)(DAT_8c08cc4c + ar4) = 0;
          *(undefined4 *)(DAT_8c08cc64 + ar4) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(DAT_8c08cc78 + ar4) = 4;
      }
      else {
        iVar2 = (int)&iStack_bc + DAT_8c08ccc4;
        uVar3 = *(undefined4 *)(DAT_8c08ccc8 + ar4);
        iStack_3c = (*(code *)PTR_FUN_8c08cccc)(ar5,*(undefined4 *)(iVar1 + 0x1c),uVar3,iVar2);
        iStack_90 = iStack_3c;
        if (iStack_3c == 1) {
          (*(code *)PTR_FUN_8c08ccd8)
                    (iVar1 + DAT_8c08ccd4,*(undefined4 *)((int)aiStack_b8 + DAT_8c08ccd0),uVar3,
                     iVar2);
          *(undefined4 *)(DAT_8c08ccdc + ar4) = 4;
        }
        else if (iStack_3c == 0) {
          iStack_bc = 5;
          (*(code *)PTR_report_error_message_8c08cd10)
                    (*(undefined4 *)(iVar1 + 0x18),PTR_s_GRAPHICS_COMMON_8c08cd08 + DAT_8c08cd0c,0,2
                    );
        }
      }
      break;
    case 4:
      if (*(int *)(iVar1 + 8) == 0) {
        *(undefined4 *)(DAT_8c08cd24 + ar4) = 5;
      }
      else {
        iStack_94 = (int)*(short *)(DAT_8c08cd98 + ar4);
        iStack_98 = (int)*(short *)(DAT_8c08cd98 + ar4);
        iStack_bc = 1;
        iVar1 = (*(code *)PTR_s_Failed_to_Read_CAnimal_LoadM_02839e_8c08cda8)
                          (ar4,*(undefined4 *)(iStack_94 * 4 + *(int *)(iVar1 + 8)),
                           *(undefined4 *)(DAT_8c08cda4 + ar4),
                           *(int *)(DAT_8c08cda0 + iVar1) + iStack_98 * 4);
        if (iVar1 == 1) {
          *(undefined2 *)(DAT_8c08cd98 + ar4) = 0;
          *(undefined4 *)(DAT_8c08cdac + ar4) = 5;
        }
      }
      break;
    case 5:
      iVar2 = (int)&iStack_bc + DAT_8c08cdf8;
      uVar3 = *(undefined4 *)(DAT_8c08cdfc + ar4);
      iStack_44 = (*(code *)PTR_FUN_8c08ce00)(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,iVar2);
      iStack_9c = iStack_44;
      if (iStack_44 == 1) {
        (*(code *)PTR_FUN_8c08ce08)
                  (iVar1 + 0x70,*(undefined4 *)((int)aiStack_b8 + DAT_8c08ce04),uVar3,iVar2);
        *(undefined4 *)(DAT_8c08ce0c + ar4) = 6;
      }
      else if (iStack_44 == 0) {
        iStack_bc = 5;
        (*(code *)PTR_report_error_message_8c08ce3c)
                  (*(undefined4 *)(iVar1 + 0xc),PTR_s_GRAPHICS_COMMON_8c08ce34 + DAT_8c08ce38,0,2);
      }
      break;
    case 6:
      if (*(int *)(iVar1 + 0x20) == 0) {
        iVar2 = (int)&iStack_bc + DAT_8c08cebc;
        uVar3 = *(undefined4 *)(DAT_8c08cec0 + ar4);
        iStack_48 = (*(code *)PTR_FUN_8c08cec4)(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,iVar2);
        iStack_a0 = iStack_48;
        if (iStack_48 == 1) {
          (**(code **)(*(int *)(iVar1 + 0x78) + 8))
                    ((int *)(iVar1 + 0x78),*(undefined4 *)((int)aiStack_b8 + DAT_8c08cec8),uVar3,
                     iVar2);
          *(undefined4 *)(DAT_8c08cecc + ar4) = 7;
        }
        else if (iStack_48 == 0) {
          iStack_bc = 5;
          (*(code *)PTR_report_error_message_8c08cefc)
                    (*(undefined4 *)(iVar1 + 0xc),PTR_s_GRAPHICS_COMMON_8c08cef4 + DAT_8c08cef8,0,2)
          ;
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c08ce70)(ar4,iVar1 + 0x20,uVar3,2);
        (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),iVar1 + 0x28,uVar3,a7);
        *(undefined4 *)(DAT_8c08ce74 + ar4) = 7;
      }
      break;
    case 7:
      if (*(int *)(iVar1 + 0x20) == 0) {
        uStack_54 = (*(code *)PTR_get_field_4_0253e4_8c08cff0)(iVar1 + 0x78,a5,0xb,2);
        iVar2 = (*(code *)PTR_FUN_8c08cff8)
                          (ar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(DAT_8c08cff4 + ar4),
                           uStack_54);
        if (iVar2 == 0) {
          iStack_bc = 5;
          iStack_a8 = iVar2;
          iStack_58 = iVar2;
          (*(code *)PTR_report_error_message_8c08d004)
                    (*(undefined4 *)(iVar1 + 0x14),PTR_s_GRAPHICS_COMMON_8c08cffc + DAT_8c08d000,0,2
                    );
        }
      }
      else {
        uStack_4c = (*(code *)PTR_get_field_4_0253e4_8c08cf64)(iVar1 + 0x78,a5,0xb,2);
        iVar2 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c08cf6c)
                          (ar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(DAT_8c08cf68 + ar4),
                           uStack_4c);
        if (iVar2 == 0) {
          iStack_bc = 5;
          iStack_a4 = iVar2;
          iStack_50 = iVar2;
          (*(code *)PTR_report_error_message_8c08cf7c)
                    (PTR_s_GRAPHICS_COMMON_8c08cf70 + DAT_8c08cf78,
                     PTR_s_GRAPHICS_COMMON_8c08cf70 + DAT_8c08cf74,0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(DAT_8c08d018 + ar4) = 8;
        }
        else {
          *(undefined4 *)(DAT_8c08d008 + ar4) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(DAT_8c08d104 + ar4) = 0;
        uVar4 = 1;
      }
      else {
        if (*(int *)(iVar1 + 0x48) == 0) {
          uStack_6c = (*(code *)PTR_get_field_4_0253e4_8c08d23c)(iVar1 + DAT_8c08d238,a5,0xb,2);
          iVar2 = (*(code *)PTR_FUN_8c08d244)
                            (ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(DAT_8c08d240 + ar4),
                             uStack_6c);
          if (iVar2 == 0) {
            iStack_bc = 5;
            aiStack_b8[1] = iVar2;
            iStack_70 = iVar2;
            (*(code *)PTR_report_error_message_8c08d250)
                      (*(undefined4 *)(iVar1 + 0x10),PTR_s_GRAPHICS_COMMON_8c08d248 + DAT_8c08d24c,0
                       ,2);
          }
        }
        else {
          a6_00 = *(undefined4 *)(iVar1 + 0xc);
          uVar3 = a6_00;
          (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c08d19c)(ar4,iVar1 + 0x48,a6_00,a6_00);
          iVar2 = iVar1 + 0x50;
          (**(code **)(*(int *)(iVar1 + DAT_8c08d1a0) + 8))
                    ((int *)(iVar1 + DAT_8c08d1a0),iVar2,a6_00,uVar3);
          uStack_64 = (*(code *)PTR_get_field_4_0253e4_8c08d1a4)
                                (iVar1 + DAT_8c08d1a0,iVar2,a6_00,uVar3);
          iVar2 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c08d1ac)
                            (ar5,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(DAT_8c08d1a8 + ar4),
                             uStack_64);
          if (iVar2 == 0) {
            iStack_bc = 5;
            aiStack_b8[2] = iVar2;
            iStack_68 = iVar2;
            (*(code *)PTR_report_error_message_8c08d1bc)
                      (PTR_s_GRAPHICS_COMMON_8c08d1b0 + DAT_8c08d1b8,
                       PTR_s_GRAPHICS_COMMON_8c08d1b0 + DAT_8c08d1b4,0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(DAT_8c08d268 + ar4) = 0;
            uVar4 = 1;
          }
          else {
            *(undefined4 *)(DAT_8c08d254 + ar4) = 0xb;
          }
        }
      }
      break;
    case 9:
      (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c08d0c4)
                (ar4,iVar1 + 0x34,*(undefined4 *)(iVar1 + 0xc),2);
      a7 = (int *)(iVar1 + DAT_8c08d0c8);
      a6 = *(code **)(*a7 + 8);
      (*a6)(a7,iVar1 + 0x3c,a6,a7);
      a5 = (undefined *)0xa;
      *(undefined4 *)(DAT_8c08d0cc + ar4) = 10;
    case 10:
      uStack_5c = (*(code *)PTR_get_field_4_0253e4_8c08d0d0)(iVar1 + DAT_8c08d0c8,a5,a6,a7);
      iVar1 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c08d0d8)
                        (ar5,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(DAT_8c08d0d4 + ar4),
                         uStack_5c);
      if (iVar1 == 0) {
        iStack_bc = 5;
        aiStack_b8[3] = iVar1;
        iStack_60 = iVar1;
        (*(code *)PTR_report_error_message_8c08d0e8)
                  (PTR_s_GRAPHICS_COMMON_8c08d0dc + DAT_8c08d0e4,
                   PTR_s_GRAPHICS_COMMON_8c08d0dc + DAT_8c08d0e0,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(DAT_8c08d0cc + ar4) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      (*(code *)PTR_s_CAnimal_SetPVMTexture_s_029404_8c08d30c)(ar4,iVar1 + 0x5c,uVar3,2);
      iVar2 = iVar1 + 100;
      (**(code **)(*(int *)(iVar1 + DAT_8c08d310) + 8))
                ((int *)(iVar1 + DAT_8c08d310),iVar2,uVar3,a7);
      uStack_74 = (*(code *)PTR_get_field_4_0253e4_8c08d314)(iVar1 + DAT_8c08d310,iVar2,uVar3,a7);
      iVar1 = (*(code *)PTR_s_CDCGD_ReadPVMFileReq_021082_8c08d31c)
                        (ar5,*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(DAT_8c08d318 + ar4),
                         uStack_74);
      if (iVar1 == 0) {
        iStack_bc = 5;
        aiStack_b8[0] = iVar1;
        iStack_78 = iVar1;
        (*(code *)PTR_report_error_message_8c08d32c)
                  (PTR_s_GRAPHICS_COMMON_8c08d320 + DAT_8c08d328,
                   PTR_s_GRAPHICS_COMMON_8c08d320 + DAT_8c08d324,0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(DAT_8c08d330 + ar4) = 0;
        uVar4 = 1;
      }
    }
  }
  else {
    iStack_bc = 5;
    (*(code *)PTR_report_error_message_8c08d37c)
              (PTR_s_GRAPHICS_COMMON_8c08d370 + DAT_8c08d378,
               PTR_s_GRAPHICS_COMMON_8c08d370 + DAT_8c08d374,0,2);
  }
  return uVar4;
}



/* FUN_8c08d380 @ 8c08d380 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08d380(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(PTR_DAT_8c08d6f4,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d6fc;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d6fc,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(PTR_DAT_8c08d708,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d70c;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d70c,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(PTR_DAT_8c08d710,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d714;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d714,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(PTR_DAT_8c08d718,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d71c;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d71c,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c08d720 = *(undefined4 *)DAT_8c08d724;
  }
  else {
    *(undefined8 *)PTR_DAT_8c08d720 = *DAT_8c08d724;
  }
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(PTR_DAT_8c08d72c,puVar3,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c08d704)(uVar2,PTR_Vec3_dtor_8c08d700,DAT_8c08d730,ar7);
  uVar2 = DAT_8c08d734;
  (*(code *)PTR_FUN_8c08d744)(DAT_8c08d740,PTR_FUN_8c08d73c,PTR_FUN_8c08d738,DAT_8c08d734);
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d74c,DAT_8c08d748,uVar2);
  uVar2 = 0x10;
  (*(code *)PTR_FUN_8c08d744)
            (DAT_8c08d758,PTR_FUN_8c08d754,PTR_free_if_nonnull_wrap_03a454_8c08d750,0x10);
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d760,DAT_8c08d75c,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c08d744)
            (DAT_8c08d76c,PTR_FUN_8c08d768,PTR_free_if_nonnull_wrap_0247b0_8c08d764,4);
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d774,DAT_8c08d770,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c08d744)
            (DAT_8c08d780,PTR_FUN_8c08d77c,PTR_free_if_nonnull_wrap_03a3dc_8c08d778,4);
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d788,DAT_8c08d784,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c08d744)
            (DAT_8c08d78c,PTR_FUN_8c08d768,PTR_free_if_nonnull_wrap_0247b0_8c08d764,4);
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d794,DAT_8c08d790,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c08d744)
            (DAT_8c08d798,PTR_FUN_8c08d77c,PTR_free_if_nonnull_wrap_03a3dc_8c08d778,4);
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d7a0,DAT_8c08d79c,uVar2);
  uVar2 = 4;
  (*(code *)PTR_FUN_8c08d744)
            (DAT_8c08d7a4,PTR_FUN_8c08d768,PTR_free_if_nonnull_wrap_0247b0_8c08d764,4);
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d7ac,DAT_8c08d7a8,uVar2);
  uVar4 = 4;
  (*(code *)PTR_FUN_8c08d744)
            (DAT_8c08d7b0,PTR_FUN_8c08d77c,PTR_free_if_nonnull_wrap_03a3dc_8c08d778,4);
  puVar3 = PTR_FUN_8c08d7b8;
  uVar2 = DAT_8c08d7b4;
  (*(code *)PTR_global_list_push_8c08d704)(0,PTR_FUN_8c08d7b8,DAT_8c08d7b4,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d7c8,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d7cc;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d7cc,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d7d0._4_4_,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d7d8;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d7d8,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d7e0,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d7e4;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d7e4,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d7e8,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d7ec;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d7ec,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d7f0,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d7f4;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d7f4,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d7f8,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d7fc;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d7fc,uVar4);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d800,puVar3,uVar2,uVar4);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d804;
  (*(code *)PTR_global_list_push_8c08d704)(uVar1,PTR_Vec3_dtor_8c08d700,DAT_8c08d804,uVar4);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d808,puVar3,uVar2,uVar4);
  (*(code *)PTR_global_list_push_8c08d704)(uVar2,PTR_Vec3_dtor_8c08d700,DAT_8c08d80c,uVar4);
  uVar1 = DAT_8c08d7e0;
  uVar4 = (*(code *)PTR_FUN_8c08d814)(DAT_8c08d810,DAT_8c08d7c8,DAT_8c08d7d0._4_4_,DAT_8c08d7e0);
  puVar3 = PTR_Class_129938_m0_017084_8c08d81c;
  uVar2 = DAT_8c08d818;
  (*(code *)PTR_global_list_push_8c08d704)
            (uVar4,PTR_Class_129938_m0_017084_8c08d81c,DAT_8c08d818,uVar1);
  uVar4 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d82c,puVar3,uVar2,uVar1);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d830;
  (*(code *)PTR_global_list_push_8c08d704)(uVar4,PTR_Vec3_dtor_8c08d700,DAT_8c08d830,uVar1);
  uVar4 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d834._4_4_,puVar3,uVar2,uVar1);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d83c;
  (*(code *)PTR_global_list_push_8c08d704)(uVar4,PTR_Vec3_dtor_8c08d700,DAT_8c08d83c,uVar1);
  uVar4 = (*(code *)PTR_Vec3_ctor_xyz_8c08d6f8)(DAT_8c08d844,puVar3,uVar2,uVar1);
  puVar3 = PTR_Vec3_dtor_8c08d700;
  uVar2 = DAT_8c08d848;
  (*(code *)PTR_global_list_push_8c08d948)(uVar4,PTR_Vec3_dtor_8c08d700,DAT_8c08d848,uVar1);
  uVar4 = (*(code *)PTR_Vec3_ctor_xyz_8c08d95c)(DAT_8c08d958,puVar3,uVar2,uVar1);
  puVar3 = PTR_Vec3_dtor_8c08d964;
  uVar2 = DAT_8c08d960;
  (*(code *)PTR_global_list_push_8c08d948)(uVar4,PTR_Vec3_dtor_8c08d964,DAT_8c08d960,uVar1);
  uVar4 = (*(code *)PTR_Vec3_ctor_xyz_8c08d95c)(DAT_8c08d970,puVar3,uVar2,uVar1);
  puVar3 = PTR_Vec3_dtor_8c08d964;
  uVar2 = DAT_8c08d974;
  (*(code *)PTR_global_list_push_8c08d948)(uVar4,PTR_Vec3_dtor_8c08d964,DAT_8c08d974,uVar1);
  uVar4 = (*(code *)PTR_Vec3_ctor_xyz_8c08d95c)(DAT_8c08d978._4_4_,puVar3,uVar2,uVar1);
  puVar3 = PTR_Vec3_dtor_8c08d964;
  uVar2 = DAT_8c08d980;
  (*(code *)PTR_global_list_push_8c08d948)(uVar4,PTR_Vec3_dtor_8c08d964,DAT_8c08d980,uVar1);
  uVar4 = (*(code *)PTR_Vec3_ctor_xyz_8c08d95c)(DAT_8c08d984,puVar3,uVar2,uVar1);
  puVar3 = PTR_Vec3_dtor_8c08d964;
  uVar2 = DAT_8c08d988;
  (*(code *)PTR_global_list_push_8c08d948)(uVar4,PTR_Vec3_dtor_8c08d964,DAT_8c08d988,uVar1);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c08d95c)(DAT_8c08d98c,puVar3,uVar2,uVar1);
  (*(code *)PTR_global_list_push_8c08d948)(uVar2,PTR_Vec3_dtor_8c08d964,DAT_8c08d990,uVar1);
  uVar2 = DAT_8c08d994;
  uVar1 = (*(code *)PTR_FUN_8c08d9a4)(DAT_8c08d9a0,DAT_8c08d99c,DAT_8c08d998,DAT_8c08d994);
  uVar2 = (*(code *)PTR_global_list_push_8c08d948)
                    (uVar1,PTR_Class_129938_m0_017084_8c08d9ac,DAT_8c08d9a8,uVar2);
  return uVar2;
}



/* FUN_8c08d9b0 @ 8c08d9b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08d9b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08d9d0)
                    (DAT_8c08d9cc,PTR_free_if_nonnull_wrap_03a3dc_8c08d9c8,4,7);
  return uVar1;
}



/* FUN_8c08d9d4 @ 8c08d9d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08d9d4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08d9f4)
                    (DAT_8c08d9f0,PTR_free_if_nonnull_wrap_0247b0_8c08d9ec,4,7);
  return uVar1;
}



/* FUN_8c08d9f8 @ 8c08d9f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08d9f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08da18)
                    (DAT_8c08da14,PTR_free_if_nonnull_wrap_03a3dc_8c08da10,4,2);
  return uVar1;
}



/* FUN_8c08da1c @ 8c08da1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da1c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08da3c)
                    (DAT_8c08da38,PTR_free_if_nonnull_wrap_0247b0_8c08da34,4,2);
  return uVar1;
}



/* FUN_8c08da40 @ 8c08da40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08da60)
                    (DAT_8c08da5c,PTR_free_if_nonnull_wrap_03a3dc_8c08da58,4,0x14);
  return uVar1;
}



/* FUN_8c08da64 @ 8c08da64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08da84)
                    (DAT_8c08da80,PTR_free_if_nonnull_wrap_0247b0_8c08da7c,4,0x14);
  return uVar1;
}



/* FUN_8c08da88 @ 8c08da88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08da88(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08daa8)
                    (DAT_8c08daa4,PTR_free_if_nonnull_wrap_03a454_8c08daa0,0x10,3);
  return uVar1;
}



/* FUN_8c08daac @ 8c08daac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08daac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_vec_delete_array_8c08dad0)(DAT_8c08dacc,PTR_FUN_8c08dac8,DAT_8c08dac4,4);
  return uVar1;
}



/* FUN_8c08dad4 @ 8c08dad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c08dad4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c08db64)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c08db68;
  (*(code *)PTR_Vec3_ctor_zero_8c08db70)((int)ar4 + DAT_8c08db6c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08db70)((int)ar4 + DAT_8c08db74,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08db70)((int)ar4 + DAT_8c08db78,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08db70)((int)ar4 + DAT_8c08db7c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c08db84)((int)ar4 + DAT_8c08db80,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08db70)((int)ar4 + DAT_8c08db88,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c08db84)((int)ar4 + DAT_8c08db8c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08db70)((int)ar4 + DAT_8c08db90,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08db70)((int)ar4 + DAT_8c08db94,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c08db98)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c08db9c @ 8c08db9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08db9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  ulonglong uVar2;
  char in_FPSCR_SZ;
  
  *(undefined **)(DAT_8c08dc48 + ar4) = PTR_PTR_8c08dc4c;
  *(undefined4 *)(DAT_8c08dc50 + ar4) = 0xc;
  *(undefined4 *)(DAT_8c08dc54 + ar4) = 0;
  *(undefined4 *)(DAT_8c08dc58 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c08dc5c + ar4) = 0;
  (*(code *)PTR_vec3_clear_8c08dc64)(ar4 + DAT_8c08dc60,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44((undefined4)DAT_8c08dc6c,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c08dc68) = (undefined4)DAT_8c08dc6c;
  }
  else {
    uVar2 = CONCAT44(DAT_8c08dc6c._4_4_,(undefined4)DAT_8c08dc6c);
    *(ulonglong *)(ar4 + DAT_8c08dc68) = uVar2;
  }
  *(undefined4 *)(DAT_8c08dc6c._4_4_ + ar4) = 1;
  (*(code *)PTR_FUN_8c08dc74)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c08dc78) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c08dc78) = uVar2 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c08dc7c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c08dc7c) = uVar2 & 0xffffffff;
  }
  *(undefined4 *)(DAT_8c08dc80 + ar4) = 0;
  *(undefined4 *)(DAT_8c08dc84 + ar4) = 0;
  *(undefined4 *)(DAT_8c08dc88 + ar4) = 0;
  *(undefined4 *)(DAT_8c08dc8c + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c08dc90 + ar4) = 0xffffffff;
  *(undefined4 *)(DAT_8c08dc94 + ar4) = 0;
  *(undefined4 *)(DAT_8c08dc98 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c08dc9c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c08dc9c) = uVar2 & 0xffffffff;
  }
  *(undefined4 *)(DAT_8c08dca0 + ar4) = 1;
  iVar1 = DAT_8c08dca4;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c08dca4) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c08dca4) = CONCAT44(0x3f800000,(int)uVar2);
  }
  return iVar1;
}



/* Class_12a76c_m0_08dca8 @ 8c08dca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a76c_m0_08dca8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c08dd60;
    (*(code *)PTR_Vec3_dtor_8c08dd68)((int)ar4 + DAT_8c08dd64,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08dd68)((int)ar4 + DAT_8c08dd6c,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08dd74)((int)ar4 + DAT_8c08dd70,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08dd68)((int)ar4 + DAT_8c08dd78,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08dd74)((int)ar4 + DAT_8c08dd7c,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08dd68)((int)ar4 + DAT_8c08dd80,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08dd68)((int)ar4 + DAT_8c08dd84,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08dd68)((int)ar4 + DAT_8c08dd88,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08dd68)((int)ar4 + DAT_8c08dd8c,0xffffffff,ar6,ar7);
    a5 = 0;
    (*(code *)PTR_Class_129cbc_m0_0312f4_8c08dd90)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c08dd94)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c08dd98 @ 8c08dd98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c08dd98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c08de10)(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c08de14 + ar4) == 3) {
    *(undefined4 *)(DAT_8c08de18 + ar4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    puVar1 = &DAT_8c08de1c;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x24) = (undefined4)DAT_8c08de1c;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = CONCAT44(DAT_8c08de1c._4_4_,(undefined4)DAT_8c08de1c);
    }
  }
  else {
    *(undefined4 *)(DAT_8c08de1c._4_4_ + ar4) = 1;
    (*(code *)PTR_FUN_8c08de28)(ar4 + DAT_8c08de24,ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c08de2c + ar4) = 0;
    puVar1 = *(undefined8 **)(DAT_8c08de30 + ar4);
    if ((-1 < (int)puVar1) && (puVar1 = *(undefined8 **)((int)DAT_8c08de34 + ar4), -1 < (int)puVar1)
       ) {
      (*(code *)PTR_FUN_8c08de38)
                (*(undefined4 *)(DAT_8c08de30 + ar4),*(undefined4 *)((int)DAT_8c08de34 + ar4),ar6,
                 ar7);
      *(undefined4 *)(DAT_8c08de30 + ar4) = 0xffffffff;
      puVar1 = DAT_8c08de34;
      *(undefined4 *)((int)DAT_8c08de34 + ar4) = 0xffffffff;
    }
  }
  return puVar1;
}



/* FUN_8c08de3c @ 8c08de3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c08de3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 a5;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  undefined4 in_fr15;
  undefined8 in_xd14;
  undefined4 in_PR;
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
  *(undefined4 *)(puVar3 + -8) = in_PR;
  *(undefined4 *)(puVar3 + -0xc) = ar5;
  *(undefined4 *)(DAT_8c08dec4 + ar4) = *(undefined4 *)(puVar3 + -0xc);
  iVar1 = *(int *)(DAT_8c08dec4 + ar4);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    if (in_FPSCR_SZ == '\0') {
      in_fr15 = *(undefined4 *)(ar4 + (int)DAT_8c08dec8);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + (int)DAT_8c08dec8);
    }
    (*(code *)PTR_FUN_8c08ded0)(ar4,DAT_8c08decc,ar6,ar7);
    puVar2 = DAT_8c08dec8;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + (int)DAT_8c08dec8) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + (int)DAT_8c08dec8) = in_xd14;
    }
  }
  else {
    if (iVar1 == 2) {
      ar7 = 0;
      ar6 = 0xffffffff;
      a5 = 1;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08dedc)
                (ar4 + DAT_8c08ded4._4_4_,1,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08dee0)(ar4 + DAT_8c08ded4._4_4_,a5,ar6,ar7);
    }
    else if (iVar1 != 3) {
      return (undefined8 *)iVar1;
    }
    (*(code *)PTR_FUN_8c08ded0)(ar4,DAT_8c08dee4,ar6,ar7);
    puVar2 = &DAT_8c08dee8;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x24) = (undefined4)DAT_8c08dee8;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = CONCAT44(DAT_8c08dee8._4_4_,(undefined4)DAT_8c08dee8);
    }
  }
  return puVar2;
}



/* FUN_8c08e6e8 @ 8c08e6e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08e6e8(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  undefined1 *puStack_a8;
  int aiStack_a4 [4];
  int iStack_94;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [112];
  
  iVar2 = 1;
  puStack_a8 = auStack_88;
  (*(code *)PTR_FUN_8c08e8d8)(*(undefined4 *)((int)&puStack_a8 + DAT_8c08e8d4),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c08e8e0)((int)aiStack_a4 + DAT_8c08e8dc,auStack_88,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08e8e4)(auStack_88,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c08e8e8)(auStack_78,uVar1,ar6,ar7);
  switch(*(undefined4 *)(DAT_8c08e8ec + ar4)) {
  case 0:
    ar7 = 0;
    ar6 = -1;
    uVar1 = 5;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08e908)(ar4 + DAT_8c08e900._4_4_,5,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08e90c)(ar4 + DAT_8c08e900._4_4_,uVar1,ar6,ar7);
    iVar2 = 0;
    break;
  case 1:
    *(undefined4 *)(DAT_8c08e910 + ar4) = 0;
    ar6 = *(int *)((int)aiStack_a4 + DAT_8c08e8f0);
    iVar2 = (*(code *)PTR_FUN_8c08e914)
                      (ar4,**(undefined4 **)((int)aiStack_a4 + DAT_8c08e8d4),ar6,ar7);
    aiStack_a4[3] = iVar2;
    break;
  case 2:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
    puStack_a8 = *(undefined1 **)((int)aiStack_a4 + DAT_8c08e8f0);
    ar7 = *(undefined4 *)((int)&puStack_a8 + DAT_8c08e918);
    ar6 = *(int *)(*(int *)((int)&puStack_a8 + DAT_8c08e91c) + 4);
    iVar2 = (*(code *)PTR_FUN_8c08e924)
                      (ar4,**(undefined4 **)((int)&puStack_a8 + DAT_8c08e91c),ar6,ar7);
    aiStack_a4[1] = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(undefined4 *)(DAT_8c08e928 + ar4) = 0;
      *(undefined4 *)(DAT_8c08e92c + ar4) = 0;
    }
    break;
  case 3:
    puStack_a8 = *(undefined1 **)((int)aiStack_a4 + DAT_8c08e8f0);
    ar7 = *(undefined4 *)((int)&puStack_a8 + DAT_8c08e918);
    ar6 = *(int *)(*(int *)((int)&puStack_a8 + DAT_8c08e91c) + 4);
    iVar2 = (*(code *)PTR_FUN_8c08e920)
                      (ar4,**(undefined4 **)((int)&puStack_a8 + DAT_8c08e91c),ar6,ar7);
    aiStack_a4[2] = iVar2;
    break;
  case 4:
    (**(code **)(DAT_8c08e8f4 + **(int **)((int)aiStack_a4 + DAT_8c08e8f0)))
              (*(int **)((int)aiStack_a4 + DAT_8c08e8f0),
               **(undefined4 **)((int)aiStack_a4 + DAT_8c08e8d4),ar6,ar7);
    uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
      *(undefined4 *)((int)aiStack_a4 + DAT_8c08e8f8) = uVar1;
    }
    else {
      uStack_90 = in_dr0;
      *(undefined8 *)((int)aiStack_a4 + DAT_8c08e8f8) = in_dr0;
    }
    ar6 = (int)aiStack_a4 + DAT_8c08e8dc;
    iVar2 = (*(code *)PTR_FUN_8c08e8fc)
                      (ar4,**(undefined4 **)((int)aiStack_a4 + DAT_8c08e8d4),ar6,ar7);
    iStack_94 = iVar2;
    break;
  case 8:
    *(undefined4 *)(DAT_8c08e910 + ar4) = 0;
    iVar2 = (*(code *)PTR_FUN_8c08e930)
                      (ar4,**(undefined4 **)((int)aiStack_a4 + DAT_8c08e8d4),ar6,ar7);
    aiStack_a4[0] = iVar2;
    ar6 = **(int **)((int)aiStack_a4 + DAT_8c08e8d4);
    (*(code *)PTR_FUN_8c08e934)(ar4,(int)aiStack_a4 + DAT_8c08e8dc,ar6,ar7);
  }
  uStack_90._4_4_ = iVar2;
  (*(code *)PTR_FUN_8c08e938)(auStack_78,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c08e8e4)((int)aiStack_a4 + DAT_8c08e8dc,0xffffffff,ar6,ar7);
  return uStack_90._4_4_;
}



/* FUN_8c08e93c @ 8c08e93c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08e93c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_Vec3_dtor_8c08e9a4)(ar4 + 0x4c,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08e9a8)(ar4 + 0x3c,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08e9a8)(ar4 + 0x30,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08e9a4)(ar4 + 0x20,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c08e9a4)(ar4 + 0x10,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c08e9ac)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c08e9b0 @ 8c08e9b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c08e9b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c08e9f4)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08e9f4)(ar4 + 0x20,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c08e9f8)(ar4 + 0x30,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c08e9f8)(ar4 + 0x3c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c08e9f4)(ar4 + 0x4c,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c08e9fc @ 8c08e9fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08e9fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0;
  float fVar5;
  float fVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  uVar3 = 1;
  uVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_set_zero_8c08eb40)(auStack_20,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c08ea30:
    uVar2 = 0;
    iVar1 = (*(code *)PTR_FUN_8c08eb48)(ar4 + DAT_8c08eb44,0,a6,ar7);
    uVar3 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (*(code *)PTR_object_dtor_delete_8c08eb4c)(auStack_20,0xffffffff,a6,ar7);
      return 1;
    }
    (*(code *)PTR_FUN_8c08eb50)(ar4 + 0x14,uVar2,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08eb54)(ar4 + 0x14,auStack_30,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08eb58)(auStack_30,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c08eb60)(ar4,DAT_8c08eb5c,a6,ar7);
    in_dr0 = CONCAT44(0x3f800000,uVar3);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_dr0;
    }
    uVar2 = ar5;
    a6 = ar6;
    (*(code *)PTR_FUN_8c08eb68)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c08eb0e;
    goto LAB_8c08ea30;
  }
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  (*(code *)PTR_FUN_8c08eb74)(ar4 + DAT_8c08eb44,uVar2,a6,ar7);
  a6 = ar5;
  uVar3 = (*(code *)PTR_FUN_8c08eb78)(ar4,ar6,ar5,ar7);
  (*(code *)PTR_FUN_8c08eb7c)(ar5,ar6,a6,ar7);
  fVar4 = DAT_8c08eb80;
  fVar6 = DAT_8c08eb84;
  if (in_FPSCR_SZ == '\0') {
    fVar4 = fVar5;
    fVar6 = DAT_8c08eb80;
  }
  if (in_FPSCR_PR == '\0' && fVar4 < fVar6) {
    *(byte *)((int)DAT_8c08eb84 + ar4) = *(byte *)((int)DAT_8c08eb84 + ar4) & 0xfb;
  }
LAB_8c08eb0e:
  (*(code *)PTR_Vec3_assign_8c08eb54)(ar4 + DAT_8c08eb88,ar4 + 0x14,a6,ar7);
  (*(code *)PTR_object_dtor_delete_8c08eb4c)(auStack_20,0xffffffff,a6,ar7);
  return uVar3;
}



/* FUN_8c08eb8c @ 8c08eb8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08eb8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  undefined4 unaff_r11;
  int a5_00;
  undefined4 unaff_r13;
  undefined4 uVar2;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  undefined4 in_fr1;
  ulonglong uVar4;
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
  *(undefined4 *)(puVar3 + -0xc) = 1;
  *(undefined4 *)(puVar3 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar3 + -0x14) = in_PR;
  uVar2 = 1;
  (*(code *)PTR_Vec3_ctor_xyz_8c08ee88)(puVar3 + DAT_8c08ee84 + -0x104,ar5,ar6,ar7);
  if (in_FPSCR_SZ != '\0') {
    in_fr1 = (undefined4)*(undefined8 *)(ar4 + DAT_8c08ee90);
  }
  (*(code *)PTR_Vec3_set_xyz_8c08ee98)(puVar3 + DAT_8c08ee94 + -0x104,ar5,ar6,ar7);
  *(undefined1 **)(puVar3 + -0x108) = puVar3 + DAT_8c08ee9c + -0x104;
  (*(code *)PTR_FUN_8c08eea8)(puVar3 + DAT_8c08eea4 + -0x108,puVar3 + DAT_8c08eea0 + -0x108,ar6,ar7)
  ;
  uVar1 = (*(code *)PTR_FUN_8c08eeac)(ar4 + 0x14,puVar3 + DAT_8c08ee9c + -0x104,ar6,ar7);
  *(undefined4 *)(puVar3 + -0xfc) = uVar1;
  *(uint *)(puVar3 + -0xf4) = (uint)(*(int *)(puVar3 + -0xfc) == 3);
  (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + DAT_8c08ee9c + -0x104,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c08eeb4)(puVar3 + DAT_8c08ee94 + -0x104,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + DAT_8c08ee84 + -0x104,0xffffffff,ar6,ar7);
  if (*(int *)(puVar3 + -0xf4) == 0) {
    a5_00 = 9;
  }
  else {
    a5_00 = 8;
  }
  a5 = a5_00;
  uVar1 = (*(code *)PTR_FUN_8c08eebc)(ar4 + DAT_8c08eeb8,a5_00,ar6,ar7);
  *(undefined4 *)(puVar3 + -0x100) = uVar1;
  if ((*(int *)(puVar3 + -0x100) == 1) || (*(int *)(puVar3 + -0x100) == 2)) {
    (*(code *)PTR_FUN_8c08eec8)(ar4 + DAT_8c08eeb8,a5,ar6,ar7);
    (*(code *)PTR_Vec3_ctor_xyz_8c08ee88)(puVar3 + DAT_8c08eecc + -0x104,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44((int)*(ulonglong *)(ar4 + DAT_8c08ee90),in_fr1);
    }
    else {
      uVar4 = *(ulonglong *)(ar4 + DAT_8c08ee90);
    }
    (*(code *)PTR_Vec3_set_xyz_8c08ee98)(puVar3 + DAT_8c08eed0 + -0x104,a5,ar6,ar7);
    *(undefined1 **)(puVar3 + -0x108) = puVar3 + DAT_8c08eed4 + -0x104;
    (*(code *)PTR_FUN_8c08eea8)
              (puVar3 + DAT_8c08eedc + -0x108,puVar3 + DAT_8c08eed8 + -0x108,ar6,ar7);
    (*(code *)PTR_FUN_8c08eee0)(ar4 + 0x14,puVar3 + DAT_8c08eed4 + -0x104,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar3 + -0x104) = (int)(uVar4 >> 0x20);
      uVar4 = (ulonglong)*(uint *)(puVar3 + -0x104);
    }
    else {
      *(ulonglong *)(puVar3 + -0x104) = uVar4;
    }
    *(uint *)(puVar3 + -0xf8) = (uint)(in_FPSCR_PR == '\0' && 1.0 < (float)uVar4);
    (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + DAT_8c08eed4 + -0x104,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08eeb4)(puVar3 + DAT_8c08eed0 + -0x104,0xffffffff,ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + DAT_8c08eecc + -0x104,0xffffffff,ar6,ar7);
    if (*(int *)(puVar3 + -0xf8) == 0) {
      (*(code *)PTR_Vec3_ctor_xyz_8c08ee88)(puVar3 + -0xd4,uVar1,ar6,ar7);
      (*(code *)PTR_Vec3_set_xyz_8c08ee98)(puVar3 + -0xe0,uVar1,ar6,ar7);
      *(undefined1 **)(puVar3 + -0x108) = puVar3 + -0xf0;
      (*(code *)PTR_FUN_8c08eea8)(puVar3 + -0xd4,puVar3 + -0xe0,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c08eef0)(ar4 + 0x14,puVar3 + -0xf0,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + -0xf0,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c08eeb4)(puVar3 + -0xe0,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + -0xd4,0xffffffff,ar6,ar7);
      uVar2 = 0;
    }
    else if (a5_00 == 8) {
      (*(code *)PTR_Vec3_ctor_xyz_8c08ee88)(puVar3 + DAT_8c08eee4 + -0x104,uVar1,ar6,ar7);
      (*(code *)PTR_Vec3_set_xyz_8c08ee98)(puVar3 + -0x88,uVar1,ar6,ar7);
      *(undefined1 **)(puVar3 + -0x108) = puVar3 + -0x98;
      (*(code *)PTR_FUN_8c08eea8)
                (puVar3 + DAT_8c08eeec + -0x108,puVar3 + DAT_8c08eee8 + -0x108,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c08eef0)(ar4 + 0x14,puVar3 + -0x98,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + -0x98,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c08eeb4)(puVar3 + -0x88,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + DAT_8c08eee4 + -0x104,0xffffffff,ar6,ar7);
    }
    else {
      (*(code *)PTR_Vec3_ctor_xyz_8c08ee88)(puVar3 + -0xa8,uVar1,ar6,ar7);
      (*(code *)PTR_Vec3_set_xyz_8c08ee98)(puVar3 + -0xb4,uVar1,ar6,ar7);
      *(undefined1 **)(puVar3 + -0x108) = puVar3 + -0xc4;
      (*(code *)PTR_FUN_8c08eea8)(puVar3 + -0xa8,puVar3 + -0xb4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c08eef0)(ar4 + 0x14,puVar3 + -0xc4,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + -0xc4,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c08eeb4)(puVar3 + -0xb4,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c08eeb0)(puVar3 + -0xa8,0xffffffff,ar6,ar7);
    }
    (*(code *)PTR_Vec3_assign_8c08eef0)(ar4 + DAT_8c08eee8,ar4 + 0x14,ar6,ar7);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c08eef4 @ 8c08eef4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c08efd2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c08eef4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a5_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  int a5_01;
  float in_fr1;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [92];
  
  iStack_e8 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c08f290)((int)&iStack_e8 + DAT_8c08f28c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c08f298)((int)&iStack_e8 + DAT_8c08f294,ar5,ar6,ar7);
  a5_01 = iStack_e8 + 0xb;
  uVar2 = 10;
  iStack_b8 = (*(code *)PTR_FUN_8c08f29c)(ar4 + DAT_8c08f294,10,ar6,ar7);
  if ((iStack_b8 == 1) || (iStack_b8 == 2)) {
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c08f2a8)(ar4 + DAT_8c08f294,uVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(float *)(ar4 + DAT_8c08f2ac);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c08f2ac);
    }
    if (in_FPSCR_PR == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c08f2ac) = in_fr1;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c08f2ac) = in_xd0;
    }
    iVar1 = a5_01;
    iStack_d4 = ar4;
    uStack_bc = (*(code *)PTR_FUN_8c08f2b0)(ar4 + DAT_8c08f294,a5_01,ar6,ar7);
    uVar2 = (*(code *)PTR_deref_u32_8c08f2b4)(uStack_bc,iVar1,ar6,ar7);
    uStack_c0 = uVar2;
    a5 = (*(code *)PTR_FUN_8c08f2b8)(ar4 + DAT_8c08f294,uVar2,0,ar7);
    a6 = 0;
    uStack_c4 = a5;
    a5_00 = (*(code *)PTR_FUN_8c08f2bc)(ar4 + DAT_8c08f294,uVar2,0,ar7);
    fVar3 = DAT_8c08f2c0;
    fVar5 = DAT_8c08f2c4;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *(float *)(ar4 + DAT_8c08f2ac);
      fVar5 = DAT_8c08f2c0;
    }
    uStack_c8 = a5_00;
    if (fVar3 == fVar5) {
      *(int *)((int)DAT_8c08f2c4 + ar4) = *(int *)((int)DAT_8c08f2c4 + ar4) + 1;
      iStack_d8 = ar4;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08f2cc)(ar4 + DAT_8c08f294,uVar2,a6,ar7);
      ar7 = 0;
      a6 = 0xffffffff;
      uVar2 = 0;
      iVar1 = ar4 + DAT_8c08f294;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08f2d4)(iVar1,0,0xffffffff,0);
      *(undefined4 *)(DAT_8c08f2d8 + ar4) = 0x15;
      if (a5_01 < 0xe) {
        uStack_cc = (*(code *)PTR_rand_8c08f2dc)(iVar1,uVar2,a6,ar7);
        iStack_dc = (*(code *)PTR_libgcc_divide_helper_01031c_8c08f2e4)
                              (uStack_cc,DAT_8c08f2e0,a6,ar7);
        if (in_FPSCR_PR == '\0') {
          dVar4 = (double)CONCAT44((float)(iStack_dc + DAT_8c08f2ec),fVar3);
        }
        else {
          dVar4 = (double)(iStack_dc + DAT_8c08f2ec);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c08f2e8) = (int)((ulonglong)dVar4 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c08f2e8) = dVar4;
        }
      }
      else {
        uStack_d0 = (*(code *)PTR_rand_8c08f2dc)(iVar1,uVar2,a6,ar7);
        iStack_e0 = (*(code *)PTR_libgcc_divide_helper_01031c_8c08f2e4)
                              (uStack_d0,DAT_8c08f2f0,a6,ar7);
        if (in_FPSCR_PR == '\0') {
          dVar4 = (double)CONCAT44((float)(iStack_e0 + DAT_8c08f2f4),fVar3);
        }
        else {
          dVar4 = (double)(iStack_e0 + DAT_8c08f2f4);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c08f2e8) = (int)((ulonglong)dVar4 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c08f2e8) = dVar4;
        }
      }
      *(byte *)(DAT_8c08f2f8 + ar4) = *(byte *)(DAT_8c08f2f8 + ar4) & 0xfb | 4;
      iStack_e4 = ar4;
    }
    puStack_ec = (undefined1 *)((int)&iStack_e8 + DAT_8c08f2fc);
    (*(code *)PTR_FUN_8c08f300)(ar4 + DAT_8c08f294,a5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f308)(ar4 + DAT_8c08f304,(int)&iStack_e8 + DAT_8c08f2fc,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f2a4)((int)&iStack_e8 + DAT_8c08f2fc,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c08f310)(ar4 + DAT_8c08f304,ar4 + DAT_8c08f30c,a6,ar7);
    (*(code *)PTR_FUN_8c08f318)(ar4 + DAT_8c08f304,ar4 + DAT_8c08f314,a6,ar7);
    puStack_ec = (undefined1 *)((int)&iStack_e8 + DAT_8c08f31c);
    (*(code *)PTR_FUN_8c08f300)(ar4 + DAT_8c08f294,a5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f308)(ar4 + DAT_8c08f30c,(int)&iStack_e8 + DAT_8c08f31c,a6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c08f2a4)((int)&iStack_e8 + DAT_8c08f31c,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c08f334)((int)&iStack_e8 + DAT_8c08f330,uVar2,a6,ar7);
    puStack_ec = auStack_74;
    (*(code *)PTR_FUN_8c08f33c)(ar4 + DAT_8c08f304,(int)&puStack_ec + DAT_8c08f338,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f308)(ar4 + DAT_8c08f304,auStack_74,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f2a4)(auStack_74,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08f2a0)((int)&iStack_e8 + DAT_8c08f330,0xffffffff,a6,ar7);
    puStack_ec = auStack_80;
    (*(code *)PTR_FUN_8c08f340)(ar4 + DAT_8c08f294,a5_00,a6,ar7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c08f344)((int)&iStack_e8 + DAT_8c08f294,auStack_80,a6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c08f2a0)(auStack_80,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_ctor_xyz_8c08f348)(auStack_90,uVar2,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c08f334)(auStack_9c,uVar2,a6,ar7);
    puStack_ec = auStack_ac;
    (*(code *)PTR_FUN_8c08f33c)(auStack_90,auStack_9c,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f308)(ar4 + 0x14,auStack_ac,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f2a4)(auStack_ac,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08f2a0)(auStack_9c,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f2a4)(auStack_90,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f308)(ar4 + DAT_8c08f350,ar4 + 0x14,a6,ar7);
    uStack_b4 = 1;
    (*(code *)PTR_object_dtor_delete_8c08f2a0)((int)&iStack_e8 + DAT_8c08f294,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f2a4)((int)&iStack_e8 + DAT_8c08f28c,0xffffffff,a6,ar7);
    uStack_b0 = uStack_b4;
  }
  else {
    uStack_b0 = 1;
    (*(code *)PTR_object_dtor_delete_8c08f2a0)((int)&iStack_e8 + DAT_8c08f294,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f2a4)((int)&iStack_e8 + DAT_8c08f28c,0xffffffff,ar6,ar7);
  }
  return uStack_b0;
}



/* FUN_8c08f354 @ 8c08f354 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c08f652) */
/* WARNING: Removing unreachable block (ram,0x8c08f5d6) */
/* WARNING: Removing unreachable block (ram,0x8c08f3a0) */
/* WARNING: Removing unreachable block (ram,0x8c08f60c) */
/* WARNING: Removing unreachable block (ram,0x8c08f4be) */
/* WARNING: Removing unreachable block (ram,0x8c08f700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c08f354(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  int iVar2;
  int a5_00;
  undefined4 a6;
  int iVar3;
  int a5_01;
  undefined4 in_fr1;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  double dVar7;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_100;
  int aiStack_fc [4];
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [104];
  
  aiStack_fc[0] = ar5;
  iVar3 = *(int *)((int)aiStack_fc + DAT_8c08f3c0);
  iVar2 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c08f3c8)((int)aiStack_fc + DAT_8c08f3c4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c08f3d0)((int)aiStack_fc + DAT_8c08f3cc,ar5,iVar2,ar7);
  a5_01 = aiStack_fc[0] + 0xb;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + DAT_8c08f3d4);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c08f3d4);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c08f3d8),in_fr1);
  }
  else {
    uVar6 = *(undefined8 *)(ar4 + DAT_8c08f3d8);
  }
  a5_00 = DAT_8c08f3d8;
  if (((float)uVar6 == (float)((ulonglong)uVar6 >> 0x20)) &&
     (a5_00 = *(int *)(DAT_8c08f3dc + ar4), 0 < a5_00)) {
    if (*(int *)(DAT_8c08f3dc + ar4) == 0x15) {
      ar7 = 0;
      uVar1 = 0xffffffff;
      a5_00 = 4;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08f478)
                (ar4 + DAT_8c08f470._4_4_,4,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08f47c)(ar4 + DAT_8c08f470._4_4_,a5_00,uVar1,ar7);
      *(int *)(DAT_8c08f480 + ar4) = *(int *)(DAT_8c08f480 + ar4) + -1;
      iVar2 = ar4;
      iStack_dc = ar4;
    }
    uStack_c0._4_4_ = (*(code *)PTR_FUN_8c08f48c)(ar4 + DAT_8c08f470._4_4_,a5_00,iVar2,ar7);
    if (uStack_c0._4_4_ == 7) {
      *(int *)(DAT_8c08f480 + ar4) = *(int *)(DAT_8c08f480 + ar4) + -1;
      iStack_e0 = ar4;
      if (*(int *)(DAT_8c08f480 + ar4) == 0) {
        ar7 = 0;
        iVar2 = -1;
        a5_00 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08f478)
                  (ar4 + DAT_8c08f470._4_4_,0,0xffffffff,0);
      }
      else if (*(int *)(DAT_8c08f4e4 + ar4) == 10) {
        a5_00 = *(int *)(DAT_8c08f4e8 + ar4);
        (*(code *)PTR_FUN_8c08f4f0)(*(undefined4 *)(DAT_8c08f4ec + ar4),a5_00,iVar2,ar7);
      }
    }
    (*(code *)PTR_CAnimBody_GetCurFrame_8c08f4f8)(ar4 + DAT_8c08f4f4,a5_00,iVar2,ar7);
    puVar8 = DAT_8c08f4fc;
    puVar9 = PTR_libgcc_divide_helper_01031c_8c08f500;
    if (in_FPSCR_SZ == '\0') {
      puVar8 = (undefined *)((ulonglong)uVar6 >> 0x20);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,puVar8);
      uVar6 = uStack_c0;
      puVar9 = DAT_8c08f4fc;
    }
    uStack_c0 = uVar6;
    if ((float)puVar8 == (float)puVar9) {
      iStack_e4 = (*(code *)PTR_libgcc_divide_helper_01031c_8c08f500)(aiStack_fc[0],3,iVar2,ar7);
      if (iStack_e4 == 0) {
        (*(code *)PTR_FUN_8c08f518)(ar4,0x22,ar6,iVar3);
        iVar2 = ar6;
        ar7 = iVar3;
      }
      else if (iStack_e4 == 1) {
        (*(code *)PTR_FUN_8c08f530)(ar4,0x23,ar6,iVar3);
        iVar2 = ar6;
        ar7 = iVar3;
      }
      else if (iStack_e4 == 2) {
        (*(code *)PTR_FUN_8c08f548)(ar4,0x25,ar6,iVar3);
        iVar2 = ar6;
        ar7 = iVar3;
      }
    }
  }
  else {
    (*(code *)PTR_FUN_8c08f6a0)(ar4 + DAT_8c08f69c,a5_00,iVar2,ar7);
    fVar4 = (float)uVar6;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c08f6a4);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c08f6a4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = fVar4 + 1.0;
    }
    else {
      fVar4 = SUB84((double)CONCAT44(0x3f800000,fVar4) + (double)CONCAT44(0x3f800000,fVar4),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c08f6a4) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c08f6a4) = in_xd0;
    }
    iVar3 = a5_01;
    iStack_e8 = ar4;
    uStack_c4 = (*(code *)PTR_FUN_8c08f6a8)(ar4 + DAT_8c08f69c,a5_01,iVar2,ar7);
    uVar1 = (*(code *)PTR_deref_u32_8c08f6ac)(uStack_c4,iVar3,iVar2,ar7);
    uStack_c8 = uVar1;
    a5 = (*(code *)PTR_FUN_8c08f6b0)(ar4 + DAT_8c08f69c,uVar1,0,ar7);
    a6 = 0;
    iVar2 = ar4 + DAT_8c08f69c;
    uStack_cc = a5;
    uStack_d0 = (*(code *)PTR_FUN_8c08f6b4)(iVar2,uVar1,0,ar7);
    uStack_b4 = uStack_d0;
    if (a5_01 < 0xe) {
      puVar8 = DAT_8c08f6b8;
      puVar9 = PTR_rand_8c08f6bc;
      if (in_FPSCR_SZ == '\0') {
        puVar8 = *(undefined **)(ar4 + DAT_8c08f6a4);
        puVar9 = DAT_8c08f6b8;
      }
      if ((float)puVar8 == (float)puVar9) {
        iVar2 = (*(code *)PTR_rand_8c08f6bc)(iVar2,uVar1,a6,ar7);
        uVar1 = 2;
        iStack_d4 = iVar2;
        iStack_ec = (*(code *)PTR_libgcc_divide_helper_01031c_8c08f6c0)(iVar2,2,a6,ar7);
        if (iStack_ec != 0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + DAT_8c08f6a4) = (undefined4)DAT_8c08f6c4;
          }
          else {
            *(undefined8 *)(ar4 + DAT_8c08f6a4) =
                 CONCAT44(DAT_8c08f6c4._4_4_,(undefined4)DAT_8c08f6c4);
          }
        }
      }
      fVar4 = DAT_8c08f6c4._4_4_;
      fVar10 = DAT_8c08f6cc;
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)(ar4 + DAT_8c08f6a4);
        fVar10 = DAT_8c08f6c4._4_4_;
      }
      if (fVar4 == fVar10) {
        *(int *)((int)DAT_8c08f6cc + ar4) = *(int *)((int)DAT_8c08f6cc + ar4) + 1;
        aiStack_fc[3] = ar4;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08f6d0)(ar4 + DAT_8c08f69c,uVar1,a6,ar7);
        ar7 = 0;
        a6 = 0xffffffff;
        uVar1 = 10;
        iVar2 = ar4 + DAT_8c08f69c;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08f6d8)(iVar2,10,0xffffffff,0);
      }
      fVar4 = DAT_8c08f6dc;
      fVar10 = DAT_8c08f6e0;
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)(ar4 + DAT_8c08f6a4);
        fVar10 = DAT_8c08f6dc;
      }
      if (fVar4 == fVar10) {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(DAT_8c08f6e0,fVar4);
          *(float *)(ar4 + DAT_8c08f6a4) = DAT_8c08f6e0;
        }
        else {
          uVar6 = CONCAT44(DAT_8c08f6e4,DAT_8c08f6e0);
          *(undefined8 *)(ar4 + DAT_8c08f6a4) = uVar6;
        }
        uVar5 = (undefined4)uVar6;
        *(undefined4 *)(DAT_8c08f6e4 + ar4) = 0x15;
        uStack_d8 = (*(code *)PTR_rand_8c08f6bc)(iVar2,uVar1,a6,ar7);
        aiStack_fc[2] =
             (*(code *)PTR_libgcc_divide_helper_01031c_8c08f6c0)(uStack_d8,DAT_8c08f6e8,a6,ar7);
        if (in_FPSCR_PR == '\0') {
          dVar7 = (double)CONCAT44((float)(aiStack_fc[2] + DAT_8c08f6f0),uVar5);
        }
        else {
          dVar7 = (double)(aiStack_fc[2] + DAT_8c08f6f0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c08f6ec) = (int)((ulonglong)dVar7 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c08f6ec) = dVar7;
        }
      }
    }
    else {
      fVar4 = DAT_8c08f968;
      fVar10 = DAT_8c08f96c;
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)(ar4 + DAT_8c08f964);
        fVar10 = DAT_8c08f968;
      }
      if (fVar4 == fVar10) {
        *(int *)((int)DAT_8c08f96c + ar4) = *(int *)((int)DAT_8c08f96c + ar4) + 1;
        aiStack_fc[1] = ar4;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c08f974)(ar4 + DAT_8c08f970,uVar1,a6,ar7);
        ar7 = 0;
        a6 = 0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08f97c)(ar4 + DAT_8c08f970,10,0xffffffff,0);
      }
    }
    puStack_100 = (undefined1 *)((int)aiStack_fc + DAT_8c08f970);
    (*(code *)PTR_FUN_8c08f980)(ar4 + DAT_8c08f970,a5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f988)(ar4 + DAT_8c08f984,(int)aiStack_fc + DAT_8c08f970,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f98c)((int)aiStack_fc + DAT_8c08f970,0xffffffff,a6,ar7);
    (*(code *)PTR_FUN_8c08f994)(ar4 + DAT_8c08f984,ar4 + DAT_8c08f990,a6,ar7);
    (*(code *)PTR_FUN_8c08f99c)(ar4 + DAT_8c08f984,ar4 + DAT_8c08f998,a6,ar7);
    puStack_100 = (undefined1 *)((int)aiStack_fc + DAT_8c08f9a0);
    (*(code *)PTR_FUN_8c08f980)(ar4 + DAT_8c08f970,a5,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f988)(ar4 + DAT_8c08f990,(int)aiStack_fc + DAT_8c08f9a0,a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c08f98c)((int)aiStack_fc + DAT_8c08f9a0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c08f9b8)((int)aiStack_fc + DAT_8c08f9b4,uVar1,a6,ar7);
    puStack_100 = (undefined1 *)((int)aiStack_fc + DAT_8c08f9bc);
    (*(code *)PTR_FUN_8c08f9c4)(ar4 + DAT_8c08f984,(int)&puStack_100 + DAT_8c08f9c0,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f988)(ar4 + DAT_8c08f984,(int)aiStack_fc + DAT_8c08f9bc,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f98c)((int)aiStack_fc + DAT_8c08f9bc,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08f9c8)((int)aiStack_fc + DAT_8c08f9b4,0xffffffff,a6,ar7);
    puStack_100 = auStack_84;
    (*(code *)PTR_FUN_8c08f9cc)(ar4 + DAT_8c08f970,uStack_b4,a6,ar7);
    (*(code *)PTR_vec3_copy_8c023d8c_8c08f9d4)((int)aiStack_fc + DAT_8c08f9d0,auStack_84,a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c08f9c8)(auStack_84,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_ctor_xyz_8c08f9d8)(auStack_94,uVar1,a6,ar7);
    (*(code *)PTR_Vec3_set_xyz_8c08f9b8)(auStack_a0,uVar1,a6,ar7);
    puStack_100 = auStack_b0;
    (*(code *)PTR_FUN_8c08f9c4)(auStack_94,auStack_a0,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c08f988)(ar4 + 0x14,auStack_b0,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f98c)(auStack_b0,0xffffffff,a6,ar7);
    (*(code *)PTR_object_dtor_delete_8c08f9c8)(auStack_a0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c08f98c)(auStack_94,0xffffffff,a6,ar7);
    ar7 = ar4 + 0x14;
    iVar2 = DAT_8c08f9e0;
    (*(code *)PTR_Vec3_assign_8c08f988)(ar4 + DAT_8c08f9e0,ar7,DAT_8c08f9e0,ar7);
  }
  uStack_b8 = 1;
  (*(code *)PTR_object_dtor_delete_8c08f9c8)((int)aiStack_fc + DAT_8c08f9d0,0xffffffff,iVar2,ar7);
  (*(code *)PTR_Vec3_dtor_8c08f98c)
            ((int)aiStack_fc + DAT_8c08f9e4,0xffffffff,PTR_Vec3_dtor_8c08f98c,ar7);
  return uStack_b8;
}



/* FUN_8c08f9e8 @ 8c08f9e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c08fa8c) */
/* WARNING: Removing unreachable block (ram,0x8c08fa9c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c08f9e8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 a6;
  int a5;
  undefined4 uVar3;
  float in_fr1;
  float fVar4;
  float fVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [64];
  
  uVar3 = 1;
  iStack_c8 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c08fcb4)((int)&iStack_c8 + DAT_8c08fcb0,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c08fcbc)((int)&iStack_c8 + DAT_8c08fcb8,ar5,ar6,ar7);
  a5 = iStack_c8 + 0xb;
  (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c08fcc4)(ar4 + DAT_8c08fcc0,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + DAT_8c08fcc8);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + DAT_8c08fcc8);
  }
  if (in_FPSCR_PR == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + DAT_8c08fcc8) = in_fr1;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c08fcc8) = in_xd0;
  }
  iStack_c4 = ar4;
  uStack_b4 = (*(code *)PTR_FUN_8c08fccc)(ar4 + DAT_8c08fcc0,a5,ar6,ar7);
  uVar1 = (*(code *)PTR_deref_u32_8c08fcd0)(uStack_b4,a5,ar6,ar7);
  uStack_b8 = uVar1;
  uVar2 = (*(code *)PTR_FUN_8c08fcd4)(ar4 + DAT_8c08fcc0,uVar1,0,ar7);
  a6 = 0;
  uStack_bc = uVar2;
  uVar1 = (*(code *)PTR_FUN_8c08fcd8)(ar4 + DAT_8c08fcc0,uVar1,0,ar7);
  fVar4 = DAT_8c08fcdc;
  fVar5 = DAT_8c08fce0;
  if (in_FPSCR_SZ == '\0') {
    fVar4 = *(float *)(ar4 + DAT_8c08fcc8);
    fVar5 = DAT_8c08fcdc;
  }
  if (fVar4 != fVar5) {
    fVar4 = DAT_8c08fce0;
    fVar5 = DAT_8c08fce4;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + DAT_8c08fcc8);
      fVar5 = DAT_8c08fce0;
    }
    if (fVar4 != fVar5) goto LAB_8c08faa8;
  }
  *(undefined4 *)((int)DAT_8c08fce4 + ar4) = 0;
  uVar3 = 0;
LAB_8c08faa8:
  uStack_c0 = uVar1;
  (*(code *)PTR_FUN_8c08fcec)(ar4 + DAT_8c08fcc0,uVar2,a6,ar7);
  (*(code *)PTR_Vec3_assign_8c08fcf4)(ar4 + DAT_8c08fcf0,(int)&iStack_c8 + DAT_8c08fce8,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c08fcf8)((int)&iStack_c8 + DAT_8c08fce8,0xffffffff,a6,ar7);
  (*(code *)PTR_FUN_8c08fd00)(ar4 + DAT_8c08fcf0,ar4 + DAT_8c08fcfc,a6,ar7);
  (*(code *)PTR_FUN_8c08fd08)(ar4 + DAT_8c08fcf0,ar4 + DAT_8c08fd04,a6,ar7);
  (*(code *)PTR_FUN_8c08fcec)(ar4 + DAT_8c08fcc0,uVar2,a6,ar7);
  (*(code *)PTR_Vec3_assign_8c08fcf4)(ar4 + DAT_8c08fcfc,auStack_58,a6,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08fcf8)(auStack_58,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_set_xyz_8c08fd1c)(auStack_64,uVar2,a6,ar7);
  (*(code *)PTR_FUN_8c08fd20)(ar4 + DAT_8c08fcf0,auStack_64,a6,ar7);
  (*(code *)PTR_Vec3_assign_8c08fcf4)(ar4 + DAT_8c08fcf0,auStack_74,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c08fcf8)(auStack_74,0xffffffff,a6,ar7);
  (*(code *)PTR_object_dtor_delete_8c08fd24)(auStack_64,0xffffffff,a6,ar7);
  (*(code *)PTR_FUN_8c08fd28)(ar4 + DAT_8c08fcc0,uVar1,a6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c08fd2c)((int)&iStack_c8 + DAT_8c08fcb8,auStack_80,a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_object_dtor_delete_8c08fd24)(auStack_80,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c08fd30)(auStack_90,uVar1,a6,ar7);
  (*(code *)PTR_Vec3_set_xyz_8c08fd1c)(auStack_9c,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c08fd20)(auStack_90,auStack_9c,a6,ar7);
  (*(code *)PTR_Vec3_assign_8c08fcf4)(ar4 + 0x14,auStack_ac,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c08fcf8)(auStack_ac,0xffffffff,a6,ar7);
  (*(code *)PTR_object_dtor_delete_8c08fd24)(auStack_9c,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c08fcf8)(auStack_90,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_assign_8c08fcf4)(ar4 + DAT_8c08fce8,ar4 + 0x14,a6,ar7);
  uStack_b0 = uVar3;
  (*(code *)PTR_object_dtor_delete_8c08fd24)((int)&iStack_c8 + DAT_8c08fcb8,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c08fcf8)((int)&iStack_c8 + DAT_8c08fcb0,0xffffffff,a6,ar7);
  return uStack_b0;
}



/* FUN_8c08fd38 @ 8c08fd38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c08fd38(int ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *a6;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *a4;
  float fVar8;
  ulonglong in_dr0;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = -DAT_8c08feac;
  a4 = *(int **)((int)&iStack_1c + DAT_8c08feb0 + iVar1);
  piVar5 = ar6;
  piVar6 = ar7;
  (*(code *)PTR_FUN_8c08feb8)((int)&iStack_1c + DAT_8c08feb4 + iVar1,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_xyz_8c08fec4)
            ((int)&iStack_1c + DAT_8c08febc._4_4_ + iVar1,PTR_Vec3_ctor_xyz_8c08fec4,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_copy_8c08fecc)
            ((int)&iStack_1c + DAT_8c08fec8 + iVar1,(int)&iStack_1c + DAT_8c08febc._4_4_ + iVar1,
             piVar5,piVar6);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08fed0)
            ((int)&iStack_1c + DAT_8c08febc._4_4_ + iVar1,0xffffffff,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_xyz_8c08fec4)((int)&iStack_1c + DAT_8c08fedc + iVar1,uVar4,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_copy_8c08fecc)
            ((int)&iStack_1c + DAT_8c08fee0 + iVar1,(int)&iStack_1c + DAT_8c08fedc + iVar1,piVar5,
             piVar6);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08fed0)((int)&iStack_1c + DAT_8c08fedc + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_Vec3_ctor_xyz_8c08fec4)((int)&iStack_1c + DAT_8c08feec + iVar1,uVar4,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_copy_8c08fecc)
            ((int)&iStack_1c + DAT_8c08fef0 + iVar1,(int)&iStack_1c + DAT_8c08feec + iVar1,piVar5,
             piVar6);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08fed0)((int)&iStack_1c + DAT_8c08feec + iVar1,0xffffffff,piVar5,piVar6)
  ;
  piVar5 = (int *)PTR_Vec3_ctor_xyz_8c08fec4;
  (*(code *)PTR_Vec3_ctor_xyz_8c08fec4)
            ((int)&iStack_1c + DAT_8c08fef4._4_4_ + iVar1,uVar4,PTR_Vec3_ctor_xyz_8c08fec4,piVar6);
  (*(code *)PTR_Vec3_ctor_copy_8c08fecc)
            ((int)&iStack_1c + DAT_8c08fefc + iVar1,(int)&iStack_1c + DAT_8c08fef4._4_4_ + iVar1,
             piVar5,piVar6);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08fed0)
            ((int)&iStack_1c + DAT_8c08fef4._4_4_ + iVar1,0xffffffff,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_xyz_8c08fec4)((int)&iStack_1c + DAT_8c08ff08 + iVar1,uVar4,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_copy_8c08fecc)
            ((int)&iStack_1c + DAT_8c08ff0c + iVar1,(int)&iStack_1c + DAT_8c08ff08 + iVar1,piVar5,
             piVar6);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08fed0)((int)&iStack_1c + DAT_8c08ff08 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_Vec3_ctor_xyz_8c08fec4)((int)&iStack_1c + DAT_8c08ff18 + iVar1,uVar4,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_copy_8c08fecc)
            ((int)&iStack_1c + DAT_8c08ff1c + iVar1,(int)&iStack_1c + DAT_8c08ff18 + iVar1,piVar5,
             piVar6);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c08fed0)((int)&iStack_1c + DAT_8c08ff18 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_FUN_8c08ff24)((int)&iStack_1c + DAT_8c08ff20 + iVar1,uVar4,piVar5,piVar6);
  (*(code *)PTR_Vec3_ctor_zero_8c08ff2c)((int)&iStack_1c + DAT_8c08ff28 + iVar1,uVar4,piVar5,piVar6)
  ;
  iVar7 = 1;
  if (*(int *)(DAT_8c08ff30 + ar4) == 0) {
    piVar5 = (int *)0x64;
    uVar4 = (*(code *)PTR_rand_range_8c08ff9c)(ar4,0,100,piVar6);
    *(undefined4 *)(&stack0x00000040 + iVar1) = uVar4;
    uVar4 = (*(code *)PTR_libgcc_divide_helper_0101e4_8c08ffa0)
                      (*(undefined4 *)(&stack0x00000040 + iVar1),10,piVar5,piVar6);
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar4;
    *(undefined4 *)(DAT_8c08ffa4 + ar4) = *(undefined4 *)(&stack0x00000004 + iVar1);
    *(int *)(&stack0x00000000 + iVar1) = ar4;
    *(int *)(DAT_8c08ffa4 + *(int *)(&stack0x00000000 + iVar1)) =
         *(int *)(DAT_8c08ffa4 + *(int *)(&stack0x00000000 + iVar1)) + 1;
    *(undefined4 *)(DAT_8c08ffa8 + ar4) = 0;
  }
  uVar4 = 10;
  switch(*(undefined4 *)(DAT_8c08ffa4 + ar4)) {
  case 5:
  case 6:
  case 7:
  case 8:
    if (*(int *)(DAT_8c0907e4 + ar4) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      uVar4 = (*(code *)PTR_rand_range_8c090810)(ar4,0,3,piVar6);
      *(undefined4 *)(&stack0x0000001c + iVar1) = uVar4;
      iVar3 = *(int *)(&stack0x0000001c + iVar1);
      if (iVar3 == 0) {
        piVar6 = (int *)0x0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c090838)(ar4 + DAT_8c090830._4_4_,1,0,0);
      }
      else if (iVar3 == 1) {
        piVar6 = (int *)0x0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c090860)(ar4 + DAT_8c090858._4_4_,3,0,0);
      }
      else if (iVar3 == 2) {
        uVar4 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0908e0)(ar4 + DAT_8c0908d8._4_4_,6,0,0);
        uVar4 = (*(code *)PTR_rand_range_8c0908e4)(ar4,0,2,uVar4);
        *(undefined4 *)(&stack0x00000018 + iVar1) = uVar4;
        (*(code *)PTR_FUN_8c0908e8)(ar4,*(int *)(&stack0x00000018 + iVar1) + 0x1f,ar5,a4);
        piVar6 = a4;
      }
      iVar3 = DAT_8c0908ec;
      *(int *)(&stack0xffffffe8 + iVar1) = ar4;
      piVar5 = *(int **)(&stack0xffffffe8 + iVar1);
      *(int *)(DAT_8c0908ec + (int)piVar5) =
           *(int *)(DAT_8c0908ec + *(int *)(&stack0xffffffe8 + iVar1)) + 1;
    }
    else {
      iVar3 = DAT_8c0907e4;
      if (*(int *)(DAT_8c0907e4 + ar4) != 1) break;
    }
    uVar4 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0908f0)
                      (ar4 + DAT_8c0908d8._4_4_,iVar3,piVar5,piVar6);
    *(undefined4 *)(&stack0x00000014 + iVar1) = uVar4;
    if (*(int *)(&stack0x00000014 + iVar1) == 1) {
      iVar7 = 0;
    }
    break;
  case 9:
  case 10:
    switch(*(undefined4 *)(DAT_8c08ffe4 + ar4)) {
    case 0:
      uVar2 = (*(code *)PTR_get_field_24_026024_8c0900c8)(a4,10,piVar5,piVar6);
      *(undefined4 *)(&stack0x0000003c + iVar1) = uVar2;
      if (*(int *)(&stack0x0000003c + iVar1) != 1) {
        *(undefined4 *)(&stack0x0000004c + iVar1) = 0;
        (*(code *)PTR_Vec3_dtor_8c090308)
                  ((int)&iStack_1c + DAT_8c090304 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_FUN_8c090310)((int)&iStack_1c + DAT_8c09030c + iVar1,0xffffffff,piVar5,piVar6)
        ;
        (*(code *)PTR_Vec3_dtor_8c090308)
                  ((int)&iStack_1c + DAT_8c090314 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c090308)
                  ((int)&iStack_1c + DAT_8c090318 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c090308)
                  ((int)&iStack_1c + DAT_8c09031c + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c090308)
                  ((int)&iStack_1c + DAT_8c090320 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c090308)
                  ((int)&iStack_1c + DAT_8c090324 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c090308)
                  ((int)&iStack_1c + DAT_8c090328 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_free_if_nonnull_wrap_102790_8c090330)
                  ((int)&iStack_1c + DAT_8c09032c + iVar1,0xffffffff,piVar5,piVar6);
        return *(undefined4 *)(&stack0x0000004c + iVar1);
      }
      uVar4 = (*(code *)PTR_get_field_24_026024_8c0900c8)(a4,uVar4,piVar5,piVar6);
      *(undefined4 *)(&stack0x00000038 + iVar1) = uVar4;
      uVar2 = 0;
      uVar4 = (*(code *)PTR_FUN_8c0900d0)
                        ((int)&iStack_1c + DAT_8c0900cc + iVar1,
                         *(undefined4 *)(&stack0x00000038 + iVar1),0,piVar6);
      *(undefined4 *)(&stack0x00000034 + iVar1) = uVar4;
      if (*(int *)(&stack0x00000034 + iVar1) == 0) {
        *(undefined4 *)(&stack0x00000050 + iVar1) = 0;
        (*(code *)PTR_Vec3_dtor_8c0900d8)
                  ((int)&iStack_1c + DAT_8c0900d4 + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_FUN_8c0900dc)((int)&iStack_1c + DAT_8c0900cc + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0900d8)
                  ((int)&iStack_1c + DAT_8c0900e0 + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0900d8)
                  ((int)&iStack_1c + DAT_8c0900e4 + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0900d8)
                  ((int)&iStack_1c + DAT_8c0900e8 + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0900d8)
                  ((int)&iStack_1c + DAT_8c0900ec + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0900d8)
                  ((int)&iStack_1c + DAT_8c0900f0 + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0900d8)
                  ((int)&iStack_1c + DAT_8c0900f4 + iVar1,0xffffffff,uVar2,piVar6);
        (*(code *)PTR_free_if_nonnull_wrap_102790_8c0900fc)
                  ((int)&iStack_1c + DAT_8c0900f8 + iVar1,0xffffffff,uVar2,piVar6);
        return *(undefined4 *)(&stack0x00000050 + iVar1);
      }
      (*(code *)PTR_Vec3_assign_8c0901f8)
                (ar4 + DAT_8c0901f4,(int)&iStack_1c + DAT_8c0901f0 + iVar1,uVar2,piVar6);
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c0901fc + iVar1;
      (*(code *)PTR_Vec3_scale_8c090208)
                ((int)&iStack_20 + DAT_8c090204 + iVar1,(int)&iStack_20 + DAT_8c090200 + iVar1,uVar2
                 ,piVar6);
      a6 = PTR_Vec3_assign_8c0901f8;
      (*(code *)PTR_Vec3_assign_8c0901f8)
                (ar4 + DAT_8c09020c,(int)&iStack_1c + DAT_8c0901fc + iVar1,PTR_Vec3_assign_8c0901f8,
                 piVar6);
      (*(code *)PTR_Vec3_dtor_8c090210)((int)&iStack_1c + DAT_8c0901fc + iVar1,0xffffffff,a6,piVar6)
      ;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c090214) =
             *(undefined4 *)((int)&iStack_1c + DAT_8c090218 + iVar1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c090214) =
             *(undefined8 *)((int)&iStack_1c + DAT_8c090218 + iVar1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c09021c) =
             *(undefined4 *)((int)&iStack_1c + DAT_8c090220 + iVar1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c09021c) =
             *(undefined8 *)((int)&iStack_1c + DAT_8c090220 + iVar1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c090224) =
             *(undefined4 *)((int)&iStack_1c + DAT_8c090228 + iVar1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c090224) =
             *(undefined8 *)((int)&iStack_1c + DAT_8c090228 + iVar1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c09022c) =
             *(undefined4 *)((int)&iStack_1c + DAT_8c090230 + iVar1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c09022c) =
             *(undefined8 *)((int)&iStack_1c + DAT_8c090230 + iVar1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c090234) =
             *(undefined4 *)((int)&iStack_1c + DAT_8c090238 + iVar1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c090234) =
             *(undefined8 *)((int)&iStack_1c + DAT_8c090238 + iVar1);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c09023c) =
             *(undefined4 *)((int)&iStack_1c + DAT_8c090240 + iVar1);
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c09023c) =
             *(undefined8 *)((int)&iStack_1c + DAT_8c090240 + iVar1);
      }
      piVar6 = (int *)(ar4 + DAT_8c090244);
      if (in_FPSCR_SZ == '\0') {
        *piVar6 = *(int *)((int)&iStack_1c + DAT_8c090248 + iVar1);
      }
      else {
        *(undefined8 *)piVar6 = *(undefined8 *)((int)&iStack_1c + DAT_8c090248 + iVar1);
      }
      *(undefined4 *)(DAT_8c09024c + ar4) = *(undefined4 *)((int)&iStack_1c + DAT_8c090250 + iVar1);
      *(undefined4 *)(DAT_8c090254 + ar4) = *(undefined4 *)((int)&iStack_1c + DAT_8c090258 + iVar1);
      *(undefined4 *)(DAT_8c09025c + ar4) = *(undefined4 *)((int)&iStack_1c + DAT_8c090260 + iVar1);
      *(undefined4 *)(&stack0xfffffffc + iVar1) = *(undefined4 *)(DAT_8c09024c + ar4);
      piVar5 = DAT_8c090268;
      (*(code *)PTR_Vec3_assign_8c0901f8)
                ((undefined *)(ar4 + (int)DAT_8c090268),
                 (int)&iStack_1c + *(int *)(&stack0xfffffffc + iVar1) * 0x10 + DAT_8c090264 + iVar1,
                 DAT_8c090268,piVar6);
      *(int *)(&stack0xfffffff8 + iVar1) = ar4;
      *(int *)(DAT_8c09026c + *(int *)(&stack0xfffffff8 + iVar1)) =
           *(int *)(DAT_8c09026c + *(int *)(&stack0xfffffff8 + iVar1)) + 1;
    case 1:
      (*(code *)PTR_Vec3_set_xyz_8c0904d4)
                ((int)&iStack_1c + DAT_8c0904d0 + iVar1,ar4 + DAT_8c0904cc,piVar5,piVar6);
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c0904d8 + iVar1;
      (*(code *)PTR_FUN_8c0904e4)
                (ar4 + DAT_8c0904e0,(int)&iStack_20 + DAT_8c0904dc + iVar1,piVar5,piVar6);
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c0904e8 + iVar1;
      iVar3 = ar4 + DAT_8c0904ec;
      (*(code *)PTR_Vec3_add_8c0904f4)((int)&iStack_20 + DAT_8c0904f0 + iVar1,iVar3,piVar5,piVar6);
      (*(code *)PTR_Vec3_ctor_xyz_8c0904fc)
                ((int)&iStack_1c + DAT_8c0904f8 + iVar1,iVar3,piVar5,piVar6);
      (*(code *)PTR_Vec3_set_xyz_8c0904d4)
                ((int)&iStack_1c + DAT_8c090504 + iVar1,DAT_8c090500,piVar5,piVar6);
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c090508 + iVar1;
      (*(code *)PTR_FUN_8c0904e4)
                ((int)&iStack_20 + DAT_8c090510 + iVar1,(int)&iStack_20 + DAT_8c09050c + iVar1,
                 piVar5,piVar6);
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c090518,*(undefined4 *)(ar4 + DAT_8c090514));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + DAT_8c090514);
        dVar9 = (double)CONCAT44(DAT_8c09051c,DAT_8c090518);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(&stack0x00000044 + iVar1) = fVar8;
      }
      else {
        *(undefined8 *)(&stack0x00000044 + iVar1) = in_xd0;
      }
      iVar3 = (int)&iStack_1c + DAT_8c09051c + iVar1;
      *(int *)((int)&iStack_20 + iVar1) = iVar3;
      (*(code *)PTR_Vec3_scale_8c090524)
                ((int)&iStack_20 + DAT_8c090520 + iVar1,&stack0x00000044 + iVar1,iVar3,piVar6);
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c090528 + iVar1;
      (*(code *)PTR_Vec3_sub_8c090534)
                ((int)&iStack_20 + DAT_8c090530 + iVar1,(int)&iStack_20 + DAT_8c09052c + iVar1,iVar3
                 ,piVar6);
      (*(code *)PTR_Vec3_assign_8c09053c)
                ((int)&iStack_1c + DAT_8c090538 + iVar1,(int)&iStack_1c + DAT_8c090528 + iVar1,iVar3
                 ,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090540)
                ((int)&iStack_1c + DAT_8c090528 + iVar1,0xffffffff,iVar3,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090540)
                ((int)&iStack_1c + DAT_8c09051c + iVar1,0xffffffff,iVar3,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090540)
                ((int)&iStack_1c + DAT_8c090508 + iVar1,0xffffffff,iVar3,piVar6);
      (*(code *)PTR_object_dtor_delete_8c090544)
                ((int)&iStack_1c + DAT_8c090504 + iVar1,0xffffffff,iVar3,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090540)
                ((int)&iStack_1c + DAT_8c0904f8 + iVar1,0xffffffff,iVar3,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090540)
                ((int)&iStack_1c + DAT_8c0904e8 + iVar1,0xffffffff,iVar3,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090540)
                ((int)&iStack_1c + DAT_8c0904d8 + iVar1,0xffffffff,iVar3,piVar6);
      (*(code *)PTR_object_dtor_delete_8c090544)
                ((int)&iStack_1c + DAT_8c0904d0 + iVar1,0xffffffff,iVar3,piVar6);
      piVar5 = (int *)((int)&iStack_1c + DAT_8c090538 + iVar1);
      uVar4 = (*(code *)PTR_FUN_8c090548)(ar4,ar5,piVar5,ar6);
      *(undefined4 *)(&stack0x00000030 + iVar1) = uVar4;
      piVar6 = ar6;
      if (*(int *)(&stack0x00000030 + iVar1) == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar8;
        }
        *(int *)(&stack0xfffffff4 + iVar1) = ar4;
        *(int *)(DAT_8c0904f8 + *(int *)(&stack0xfffffff4 + iVar1)) =
             *(int *)(DAT_8c0904f8 + *(int *)(&stack0xfffffff4 + iVar1)) + 1;
      }
      break;
    case 2:
      uVar4 = (*(code *)PTR_FUN_8c090590)(ar4,ar6,piVar5,piVar6);
      *(undefined4 *)(&stack0x0000002c + iVar1) = uVar4;
      if (*(int *)(&stack0x0000002c + iVar1) == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + DAT_8c090594) = 0;
        }
        else {
          *(ulonglong *)(ar4 + DAT_8c090594) = in_dr0 & 0xffffffff;
        }
        *(int *)(&stack0xfffffff0 + iVar1) = ar4;
        *(int *)(DAT_8c090598 + *(int *)(&stack0xfffffff0 + iVar1)) =
             *(int *)(DAT_8c090598 + *(int *)(&stack0xfffffff0 + iVar1)) + 1;
        *(undefined4 *)(DAT_8c09059c + ar4) = 1;
      }
      break;
    case 3:
      (*(code *)PTR_FUN_8c0905b8)(ar4,*(undefined4 *)(DAT_8c0905b4 + ar4),ar6,piVar6);
      piVar5 = ar6;
      break;
    case 4:
      *(int **)((int)&iStack_20 + iVar1) = a4;
      (*(code *)PTR_FUN_8c0905dc)(ar4,*(undefined4 *)(DAT_8c0905d8 + ar4),ar5,ar6);
      piVar5 = ar5;
      piVar6 = ar6;
      break;
    case 5:
      uVar4 = (*(code *)PTR_FUN_8c090778)(ar4,*(undefined4 *)(DAT_8c090774 + ar4),ar6,piVar6);
      *(undefined4 *)(&stack0x00000028 + iVar1) = uVar4;
      iVar7 = *(int *)(&stack0x00000028 + iVar1);
      piVar5 = ar6;
      if (iVar7 == 0) {
        *(undefined4 *)(DAT_8c09077c + ar4) = 0;
        if ((-1 < *(int *)(DAT_8c090780 + ar4)) && (-1 < *(int *)(DAT_8c090784 + ar4))) {
          (*(code *)PTR_FUN_8c090788)
                    (*(undefined4 *)(DAT_8c090780 + ar4),*(undefined4 *)(DAT_8c090784 + ar4),ar6,
                     piVar6);
          *(undefined4 *)(DAT_8c090780 + ar4) = 0xffffffff;
          *(undefined4 *)(DAT_8c090784 + ar4) = 0xffffffff;
        }
        *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c09078c + iVar1;
        (*(code *)PTR_Vec3_scale_8c090790)(ar4 + 0x14,ar4 + 0x28,ar6,piVar6);
        *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c090794 + iVar1;
        (*(code *)PTR_Vec3_add_8c09079c)(ar5,(int)&iStack_20 + DAT_8c090798 + iVar1,ar6,piVar6);
        *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c0907a0 + iVar1;
        (*(code *)PTR_Vec3_add_8c09079c)
                  ((int)&iStack_20 + DAT_8c0907a8 + iVar1,ar4 + DAT_8c0907a4,ar6,piVar6);
        *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c0907ac + iVar1;
        piVar5 = (int *)((int)&iStack_20 + DAT_8c0907b4 + iVar1);
        (*(code *)PTR_Vec3_add_8c09079c)(piVar5,ar4 + DAT_8c0907b0,piVar5,piVar6);
        (**(code **)(DAT_8c0907b8 + *a4))(a4,ar5,piVar5,piVar6);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(&stack0x00000024 + iVar1) = (int)(in_dr0 >> 0x20);
        }
        else {
          *(ulonglong *)(&stack0x00000024 + iVar1) = in_dr0;
        }
        *(int *)(&stack0xffffffec + iVar1) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)((int)&iStack_1c + DAT_8c0907c0 + iVar1),
                                   *(undefined4 *)(&stack0x00000024 + iVar1));
        }
        else {
          dVar9 = *(double *)((int)&iStack_1c + DAT_8c0907c0 + iVar1);
          in_xd0 = *(undefined8 *)(&stack0x00000024 + iVar1);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0907c4,fVar8);
        }
        else {
          dVar9 = (double)CONCAT44(PTR_Vec3_dtor_8c0907c8,DAT_8c0907c4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)
                                    (*(int *)(&stack0xffffffec + iVar1) + DAT_8c0907bc),fVar8);
        }
        else {
          dVar9 = *(double *)(*(int *)(&stack0xffffffec + iVar1) + DAT_8c0907bc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)(&stack0xffffffec + iVar1) + DAT_8c0907bc) = fVar8;
        }
        else {
          *(undefined8 *)(*(int *)(&stack0xffffffec + iVar1) + DAT_8c0907bc) = in_xd0;
        }
        (*(code *)PTR_Vec3_dtor_8c0907c8)
                  ((int)&iStack_1c + DAT_8c0907ac + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0907c8)
                  ((int)&iStack_1c + DAT_8c0907a0 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0907c8)
                  ((int)&iStack_1c + DAT_8c090794 + iVar1,0xffffffff,piVar5,piVar6);
        (*(code *)PTR_Vec3_dtor_8c0907c8)
                  ((int)&iStack_1c + DAT_8c09078c + iVar1,0xffffffff,piVar5,piVar6);
      }
    }
    if ((-1 < *(int *)(DAT_8c090780 + ar4)) && (-1 < *(int *)(DAT_8c090784 + ar4))) {
      uVar4 = (*(code *)PTR_FUN_8c0907cc)
                        (*(undefined4 *)(DAT_8c090780 + ar4),PTR_FUN_8c0907cc,piVar5,piVar6);
      *(undefined4 *)(&stack0x00000020 + iVar1) = uVar4;
      if (*(int *)(&stack0x00000020 + iVar1) == 0) {
        (*(code *)PTR_FUN_8c090788)
                  (*(undefined4 *)(DAT_8c090780 + ar4),*(undefined4 *)(DAT_8c090784 + ar4),piVar5,
                   piVar6);
        iVar7 = 0;
        *(undefined4 *)(DAT_8c09077c + ar4) = 0;
        *(undefined4 *)(DAT_8c090780 + ar4) = 0xffffffff;
        *(undefined4 *)(DAT_8c090784 + ar4) = 0xffffffff;
      }
    }
    break;
  default:
    if (*(int *)(DAT_8c09090c + ar4) == 0) {
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c090a10 + iVar1;
      (*(code *)PTR_FUN_8c090a18)(ar4 + DAT_8c090a14,ar4 + DAT_8c090a14,piVar5,piVar6);
      uVar2 = (undefined4)in_dr0;
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c090a1c + iVar1;
      iVar7 = (int)&iStack_20 + DAT_8c090a20 + iVar1;
      (*(code *)PTR_Vec3_normalize_8c090a24)(iVar7,iVar7,piVar5,piVar6);
      *(int *)((int)&iStack_20 + iVar1) = (int)&iStack_1c + DAT_8c090a14 + iVar1;
      (*(code *)PTR_FUN_8c090a38)(ar4,(int)&iStack_20 + DAT_8c090a28 + iVar1,piVar5,piVar6);
      *(undefined1 **)((int)&iStack_20 + iVar1) = &stack0x00000054 + iVar1;
      (*(code *)PTR_Vec3_add_8c090a40)((int)&iStack_20 + DAT_8c090a3c + iVar1,ar5,piVar5,piVar6);
      (*(code *)PTR_Vec3_assign_8c090a44)(ar4 + 0x54,&stack0x00000054 + iVar1,piVar5,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090a48)(&stack0x00000054 + iVar1,0xffffffff,piVar5,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090a48)
                ((int)&iStack_1c + DAT_8c090a14 + iVar1,0xffffffff,piVar5,piVar6);
      (*(code *)PTR_Vec3_dtor_8c090a48)
                ((int)&iStack_1c + DAT_8c090a1c + iVar1,0xffffffff,piVar5,piVar6);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c090a48)
                ((int)&iStack_1c + DAT_8c090a10 + iVar1,0xffffffff,piVar5,piVar6);
      uVar4 = (*(code *)PTR_get_field_24_026024_8c090a4c)(a4,uVar4,piVar5,piVar6);
      *(undefined4 *)(&stack0x00000010 + iVar1) = uVar4;
      piVar6 = a4;
      if (*(int *)(&stack0x00000010 + iVar1) == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)&iStack_1c + DAT_8c090a50._4_4_ + iVar1) = (undefined4)DAT_8c090a50;
          *(int *)((int)&iStack_1c + DAT_8c090a58 + iVar1) = ar7[1];
          uVar10 = CONCAT44(ar7[2],uVar2);
          *(int *)((int)&iStack_1c + DAT_8c090a5c + iVar1) = ar7[2];
        }
        else {
          *(ulonglong *)((int)&iStack_1c + DAT_8c090a50._4_4_ + iVar1) =
               CONCAT44(DAT_8c090a50._4_4_,(undefined4)DAT_8c090a50);
          *(undefined8 *)((int)&iStack_1c + DAT_8c090a58 + iVar1) = *(undefined8 *)(ar7 + 1);
          uVar10 = *(undefined8 *)(ar7 + 2);
          *(undefined8 *)((int)&iStack_1c + DAT_8c090a5c + iVar1) = uVar10;
        }
        *(undefined **)((int)&iStack_20 + iVar1) = PTR_DAT_8c090a60;
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(DAT_8c090a64,(int)uVar10);
        }
        else {
          uVar10 = CONCAT44(PTR_FUN_8c090a68,DAT_8c090a64);
        }
        ar7 = (int *)((int)&iStack_20 + DAT_8c090a58 + iVar1);
        (*(code *)PTR_FUN_8c090a68)(ar4,ar4 + 0x54,ar7,a4);
      }
      else {
        *(undefined **)((int)&iStack_20 + iVar1) = PTR_DAT_8c090b78;
        if (in_FPSCR_SZ == '\0') {
          uVar10 = CONCAT44(DAT_8c090b7c,uVar2);
        }
        else {
          uVar10 = CONCAT44(PTR_FUN_8c090b80,DAT_8c090b7c);
        }
        (*(code *)PTR_FUN_8c090b80)(ar4,ar4 + 0x54,ar7,a4);
      }
      (**(code **)(DAT_8c090b84 + *a4))(a4,ar4 + 0x54,ar7,piVar6);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(&stack0x0000000c + iVar1) = (int)((ulonglong)uVar10 >> 0x20);
      }
      else {
        *(undefined8 *)(&stack0x0000000c + iVar1) = uVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(&stack0x0000000c + iVar1);
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(&stack0x0000000c + iVar1);
      }
      *(int *)((int)&iStack_1c + iVar1) = ar4;
      *(int *)(DAT_8c090b88 + *(int *)((int)&iStack_1c + iVar1)) =
           *(int *)(DAT_8c090b88 + *(int *)((int)&iStack_1c + iVar1)) + 1;
    }
    else if (*(int *)(DAT_8c09090c + ar4) != 1) break;
    piVar5 = (int *)(ar4 + 0x54);
    uVar4 = (*(code *)PTR_FUN_8c090b8c)(ar4,ar5,piVar5,piVar6);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar4;
    iVar7 = *(int *)(&stack0x00000008 + iVar1);
  }
  *(int *)(&stack0x00000048 + iVar1) = iVar7;
  (*(code *)PTR_Vec3_dtor_8c090b94)((int)&iStack_1c + DAT_8c090b90 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_FUN_8c090b9c)((int)&iStack_1c + DAT_8c090b98 + iVar1,0xffffffff,piVar5,piVar6);
  (*(code *)PTR_Vec3_dtor_8c090b94)((int)&iStack_1c + DAT_8c090ba0 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_Vec3_dtor_8c090b94)((int)&iStack_1c + DAT_8c090ba4 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_Vec3_dtor_8c090b94)((int)&iStack_1c + DAT_8c090ba8 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_Vec3_dtor_8c090b94)((int)&iStack_1c + DAT_8c090bac + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_Vec3_dtor_8c090b94)((int)&iStack_1c + DAT_8c090bb0 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_Vec3_dtor_8c090b94)((int)&iStack_1c + DAT_8c090bb4 + iVar1,0xffffffff,piVar5,piVar6)
  ;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c090bbc)
            ((int)&iStack_1c + DAT_8c090bb8 + iVar1,0xffffffff,piVar5,piVar6);
  return *(undefined4 *)(&stack0x00000048 + iVar1);
}


