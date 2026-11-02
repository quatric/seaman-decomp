/* Seaman (USA) region 0x8c0d0000-0x8c0e0000 (Ghidra decompiler) */

/* FUN_8c0d0178 @ 8c0d0178 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0178(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_c [2];
  
  if (*DAT_8c0d02a8 == '\0') {
    *DAT_8c0d02ac = 5;
    *DAT_8c0d02a8 = '\x01';
  }
  iVar1 = *(int *)(ar4 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      auStack_c[0] = (*(code *)PTR_FUN_8c0d02b4)(DAT_8c0d02b0,ar5,ar6,ar7);
      ar6 = 9;
      (*(code *)PTR_FUN_8c0d02b8)(DAT_8c0d02b0,auStack_c[0],9,ar7);
      ar5 = auStack_c;
      (*(code *)PTR_FUN_8c0d02bc)(DAT_8c0d02b0,ar5,ar6,ar7);
      *(undefined2 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(short *)(ar4 + 0x2c) = *(short *)(ar4 + 0x2c) + 1;
    if (*DAT_8c0d02ac <= (int)*(short *)(ar4 + 0x2c)) {
      *(undefined2 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x28) = 2;
    }
    if (*(int *)(ar4 + 0x14) == 0) {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(ar4 + 0x34) == -1) {
      uVar2 = (*(code *)PTR_FUN_8c0d02b4)(DAT_8c0d02b0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x34) = uVar2;
      ar6 = 10;
      ar5 = *(undefined4 **)(ar4 + 0x34);
      (*(code *)PTR_FUN_8c0d02b8)(DAT_8c0d02b0,ar5,10,ar7);
    }
    if ((*(int *)(ar4 + 0x14) == 0) && (*(int *)(ar4 + 0x34) != -1)) {
      (*(code *)PTR_FUN_8c0d02c0)(DAT_8c0d02b0,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
      ar5 = (undefined4 *)(ar4 + 0x34);
      (*(code *)PTR_FUN_8c0d02bc)(DAT_8c0d02b0,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x34) = 0xffffffff;
      *(undefined4 *)(ar4 + 0x28) = 3;
    }
  }
  else if (iVar1 == 3) {
    auStack_c[0] = (*(code *)PTR_FUN_8c0d02b4)(DAT_8c0d02b0,ar5,ar6,ar7);
    ar6 = 0xb;
    (*(code *)PTR_FUN_8c0d02b8)(DAT_8c0d02b0,auStack_c[0],0xb,ar7);
    ar5 = auStack_c;
    (*(code *)PTR_FUN_8c0d02bc)(DAT_8c0d02b0,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  uVar2 = (*(code *)PTR_FUN_8c0d02c4)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d02c8 @ 8c0d02c8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d02c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  double *pdVar2;
  int iVar3;
  float in_fr1;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar8;
  ulonglong uVar7;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*DAT_8c0d0508 == '\0') {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44((undefined4)DAT_8c0d0510,in_fr1);
      *(undefined4 *)DAT_8c0d050c = (undefined4)DAT_8c0d0510;
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0d0510._4_4_,(undefined4)DAT_8c0d0510);
      *DAT_8c0d050c = dVar5;
    }
    in_fr1 = SUB84(dVar5,0);
    *DAT_8c0d0508 = '\x01';
  }
  if (*DAT_8c0d0510._4_4_ == '\0') {
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(DAT_8c0d051c,in_fr1);
      *(undefined4 *)DAT_8c0d0518 = DAT_8c0d051c;
    }
    else {
      uVar6 = CONCAT44(PTR_libgcc_divide_helper_01031c_8c0d0520,DAT_8c0d051c);
      *DAT_8c0d0518 = uVar6;
    }
    in_fr1 = (float)uVar6;
    *DAT_8c0d0510._4_4_ = '\x01';
  }
  if (*(int *)(ar4 + 0x14) == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)DAT_8c0d050c,*(undefined4 *)(ar4 + 0x10));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x10);
      dVar5 = *DAT_8c0d050c;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x10) = fVar4;
      uVar6 = CONCAT44(*(undefined4 *)DAT_8c0d0518,*(undefined4 *)(ar4 + 0x10));
    }
    else {
      *(double *)(ar4 + 0x10) = in_xd0;
      in_xd0 = *(double *)(ar4 + 0x10);
      uVar6 = *DAT_8c0d0518;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar6 >> 0x20) < (float)uVar6) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x10) = *(undefined4 *)DAT_8c0d0518;
      }
      else {
        *(undefined8 *)(ar4 + 0x10) = *DAT_8c0d0518;
      }
    }
    pdVar2 = (double *)(ar4 + 0xc);
    if (in_FPSCR_SZ != '\0') {
      in_xd0 = *pdVar2;
      pdVar2 = (double *)(ar4 + 0x10);
    }
    dVar5 = *pdVar2;
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0xc) = SUB84(dVar5,0);
    }
    else {
      *(double *)(ar4 + 0xc) = in_xd0;
    }
    iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d0520)
                      ((int)*(short *)(ar4 + 0x18),3,ar6,ar7);
    if (iVar3 == 0) {
      *(char *)(ar4 + 0x1b) = *(char *)(ar4 + 0x1b) + -1;
      *(char *)(ar4 + 0x1a) = *(char *)(ar4 + 0x1a) + -1;
      if (*(byte *)(ar4 + 0x1b) < DAT_8c0d0524) {
        uVar1 = (undefined1)DAT_8c0d0524;
        *(undefined1 *)(ar4 + 0x1a) = uVar1;
        *(undefined1 *)(ar4 + 0x1b) = uVar1;
      }
    }
    iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d0520)
                      ((int)*(short *)(ar4 + 0x18),2,ar6,ar7);
    if (iVar3 == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x24) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x24) = CONCAT44(0x3f800000,SUB84(dVar5,0));
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x24) = (ulonglong)dVar5 & 0xffffffff;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(float *)(ar4 + 0x10);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x10);
    }
    if (in_FPSCR_PR != '\0' || in_fr1 <= 0.0) {
      iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d0520)
                        ((int)*(short *)(ar4 + 0x18),2,ar6,ar7);
      if (iVar3 == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x10) = (undefined4)DAT_8c0d052c;
        }
        else {
          *(undefined8 *)(ar4 + 0x10) = CONCAT44(DAT_8c0d052c._4_4_,(undefined4)DAT_8c0d052c);
        }
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0d0528,*(undefined4 *)(ar4 + 0x10));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x10);
        dVar5 = (double)CONCAT44((undefined4)DAT_8c0d052c,DAT_8c0d0528);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x10) = fVar4;
      }
      else {
        *(double *)(ar4 + 0x10) = in_xd0;
      }
    }
    pdVar2 = (double *)(ar4 + 0xc);
    if (in_FPSCR_SZ != '\0') {
      in_xd0 = *pdVar2;
      pdVar2 = (double *)(ar4 + 0x10);
    }
    dVar5 = *pdVar2;
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0xc) = fVar4;
    }
    else {
      *(double *)(ar4 + 0xc) = in_xd0;
    }
    iVar3 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d0520)
                      ((int)*(short *)(ar4 + 0x18),3,ar6,ar7);
    if ((iVar3 == 0) && (*(byte *)(ar4 + 0x1b) < DAT_8c0d052c._4_4_)) {
      *(char *)(ar4 + 0x1b) = *(char *)(ar4 + 0x1b) + '\x01';
      *(char *)(ar4 + 0x1a) = *(char *)(ar4 + 0x1a) + '\x01';
    }
  }
  fVar4 = DAT_8c0d0534;
  fVar8 = _FUN_8c0d0538;
  if (in_FPSCR_SZ == '\0') {
    fVar4 = *(float *)(ar4 + 0xc);
    fVar8 = DAT_8c0d0534;
  }
  if (in_FPSCR_PR != '\0' || fVar4 <= fVar8) {
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + 0xc);
    }
    if (in_FPSCR_PR == '\0' && fVar4 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x10) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x10) = (ulonglong)(uint)fVar4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0xc) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xc) = (ulonglong)(uint)fVar4;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(DAT_8c0d0534,fVar4);
      *(float *)(ar4 + 0xc) = DAT_8c0d0534;
    }
    else {
      uVar7 = CONCAT44(_FUN_8c0d0538,DAT_8c0d0534);
      *(ulonglong *)(ar4 + 0xc) = uVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x10) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x10) = uVar7 & 0xffffffff;
    }
  }
  **(uint **)(ar4 + 0x20) =
       (uint)*(byte *)(ar4 + 0x1d) << 0x18 | (uint)*(byte *)(ar4 + 0x1c) << 0x10 |
       (uint)*(byte *)(ar4 + 0x1b) << 8 | (uint)*(byte *)(ar4 + 0x1a);
  iVar3 = *(short *)(ar4 + 0x18) + 1;
  *(short *)(ar4 + 0x18) = (short)iVar3;
  return iVar3;
}



/* FUN_8c0d0538 @ 8c0d0538 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d0538(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(int *)(ar4 + 0x14) == 0) && (ar5 == 1)) {
    iVar1 = 0x48;
    *(undefined4 *)(ar4 + 0x48) = 1;
  }
  else {
    iVar1 = *(int *)(ar4 + 0x14);
    if ((iVar1 == 1) && (ar5 == 0)) {
      iVar1 = 0x48;
      *(undefined4 *)(ar4 + 0x48) = 2;
    }
  }
  *(int *)(ar4 + 0x14) = ar5;
  return iVar1;
}



/* FUN_8c0d0564 @ 8c0d0564 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0564(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d05b0)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d05c0)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d05c4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d05c8)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d05cc)(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d05d0 @ 8c0d05d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d05d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d061c)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d062c)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d0630)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d0634)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d0638)(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d063c @ 8c0d063c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d063c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* FUN_8c0d064c @ 8c0d064c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d064c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x34) != -1) {
    (*(code *)PTR_FUN_8c0d0684)(DAT_8c0d0680,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
    (*(code *)PTR_FUN_8c0d0688)(DAT_8c0d0680,ar4 + 0x34,ar6,ar7);
    *(undefined4 *)(ar4 + 0x34) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* s_Failed_to_set_texture_wrap_0d068c @ 8c0d068c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d068c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d06a4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d06a8 @ 8c0d06a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d06a8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d06c0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d06c4 @ 8c0d06c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d06c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d06e8)(DAT_8c0d06e4,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0d06ec @ 8c0d06ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d06ec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d0710)(DAT_8c0d070c,*(undefined4 *)(ar4 + 0x34),10,ar7);
  }
  return iVar1;
}



/* FUN_8c0d0714 @ 8c0d0714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0714(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* FUN_8c0d0720 @ 8c0d0720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0720(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x10) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x10) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x2c) = 0;
  *(char *)(ar4 + 0x1d) = (char)DAT_8c0d0764;
  *(char *)(ar4 + 0x1c) = (char)DAT_8c0d0764;
  *(char *)(ar4 + 0x1b) = (char)DAT_8c0d0764;
  *(char *)(ar4 + 0x1a) = (char)DAT_8c0d0764;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}



/* s_GRAPHICS_ENV_0d076c @ 8c0d0768 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d076c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d07ac)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x10,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x21,ar4);
  uVar1 = (*(code *)PTR_FUN_8c0d07b0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x10,PTR_s_GRAPHICS_COMMON_8c0d07a8 + 0x21
                     ,ar4);
  return uVar1;
}



/* FUN_8c0d07b4 @ 8c0d07b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d07b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d07e0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d07e4)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d07e8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* s_GRAPHICS_ENV_0d07f2 @ 8c0d07ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_ENV_0d07f2(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a7;
  int iVar1;
  undefined *a5;
  uint uVar2;
  
  (*(code *)PTR_FUN_8c0d0898)(ar4 + 2,PTR_DAT_8c0d0894,ar6,ar7);
  a5 = PTR_PTR_8c0d089c;
  (**(code **)(*ar4 + 8))(ar4,PTR_PTR_8c0d089c,ar6,ar7);
  a7 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d08a0)(ar4,a5,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)a7[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *a7;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | DAT_8c0d08a4;
  }
  iVar1 = (*(code *)PTR_FUN_8c0d08b0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d08a8 + DAT_8c0d08ac,
                     PTR_s_GRAPHICS_COMMON_8c0d08a8 + 0x21,a7);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_report_error_message_8c0d08bc)
                      (PTR_s_GRAPHICS_COMMON_8c0d08a8 + DAT_8c0d08b8,
                       PTR_s_GRAPHICS_COMMON_8c0d08a8 + DAT_8c0d08b4,1,2);
  }
  return iVar1;
}



/* FUN_8c0d08c0 @ 8c0d08c0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0d08c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  float fVar5;
  float in_fr15;
  undefined4 in_fr14;
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
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = DAT_8c0d0904;
  }
  puVar1 = (undefined *)0x0;
  if (*(int *)(ar4 + 0x18) != 0) {
    if ((*(int *)(ar4 + 0x14) == 1) && (in_FPSCR_SZ == '\0')) {
      in_fr15 = DAT_8c0d0908;
    }
    *(int *)(puVar2 + -4) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar2 + -4) + 0xc),in_fr1);
    }
    else {
      dVar4 = *(double *)(*(int *)(puVar2 + -4) + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + in_fr15,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + (double)CONCAT44(in_fr14,in_fr15);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)(puVar2 + -4) + 0xc) = (int)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)(ulonglong)*(uint *)(ar4 + 0xc);
    }
    else {
      *(double *)(*(int *)(puVar2 + -4) + 0xc) = dVar4;
    }
    puVar1 = &DAT_8c0d090c;
    fVar3 = _DAT_8c0d090c;
    fVar5 = _FUN_8c0d0910;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = SUB84(dVar4,0);
      fVar5 = _DAT_8c0d090c;
    }
    if (in_FPSCR_PR == '\0' && fVar5 < fVar3) {
      puVar1 = &DAT_8c0d090c;
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0xc) = _DAT_8c0d090c;
      }
      else {
        *(ulonglong *)(ar4 + 0xc) = CONCAT44(_FUN_8c0d0910,_DAT_8c0d090c);
      }
    }
  }
  return puVar1;
}



/* FUN_8c0d0910 @ 8c0d0910 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0910(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d0928)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d092c @ 8c0d092c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d092c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d0970)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d0980)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d0984)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d0988)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d098c)(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d0990 @ 8c0d0990 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0990(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d09d4)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d09e4)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d09e8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d09ec)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d09f0)(1,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0d09f4 @ 8c0d09f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d09f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d09f8 @ 8c0d09f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d09f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* s_Failed_to_set_texture_wrap_0d09fc @ 8c0d09fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d09fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d0a14)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d0a18 @ 8c0d0a18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d0a18(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d0a30)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0d0a34 @ 8c0d0a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d0a34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d0a38 @ 8c0d0a38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d0a38(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d0a3c @ 8c0d0a3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0a3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}



/* FUN_8c0d0a44 @ 8c0d0a44 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d0a44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  double dVar1;
  double in_dr4;
  bool bVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(DAT_8c0d0a80,in_fr1);
  }
  else {
    dVar1 = (double)CONCAT44(_FUN_8c0d0a84,DAT_8c0d0a80);
  }
  if (in_FPSCR_PR == '\0') {
    bVar2 = (float)((ulonglong)dVar1 >> 0x20) < (float)((ulonglong)in_dr4 >> 0x20);
  }
  else {
    bVar2 = dVar1 < in_dr4;
  }
  if (bVar2) {
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = (double)CONCAT44(DAT_8c0d0a80,SUB84(in_dr4,0));
    }
    else {
      in_dr4 = (double)CONCAT44(_FUN_8c0d0a84,DAT_8c0d0a80);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),SUB84(dVar1,0));
  }
  else {
    dVar1 = *(double *)(ar4 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) - (float)((ulonglong)in_dr4 >> 0x20),
                             SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 - in_dr4;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0xc) = (int)((ulonglong)dVar1 >> 0x20);
    dVar1 = (double)(ulonglong)*(uint *)(ar4 + 0xc);
  }
  else {
    *(double *)(ar4 + 0xc) = dVar1;
  }
  if (in_FPSCR_PR != '\0' || SUB84(dVar1,0) <= 0.0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0xc) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xc) = (ulonglong)dVar1 & 0xffffffff;
    }
  }
  return ar4 + 0xc;
}



/* FUN_8c0d0a84 @ 8c0d0a84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0a84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x14) = 0;
  uVar1 = (*(code *)PTR_FUN_8c0d0aa8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d0aac @ 8c0d0aac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0aac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x18) = 1;
  return 1;
}



/* FUN_8c0d0ab4 @ 8c0d0ab4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0ab4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 in_fr5;
  undefined4 in_fr4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x70) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + 0x70) = CONCAT44(in_fr4,in_fr5);
  }
  return in_r0;
}



/* FUN_8c0d0abc @ 8c0d0abc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d0abc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = DAT_8c0d0af8;
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0d0afc)(ar4 + 0x15,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d0b00)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d0b04 @ 8c0d0b04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0b04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d0b48)(ar4,ar5,ar6,ar7);
  if (DAT_8c0d0b4c < *(uint *)(ar4 + 0x40)) {
    uVar1 = 0x40;
    *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) - DAT_8c0d0b50;
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0d0b54)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0d0b58 @ 8c0d0b58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d0b58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  
  (*(code *)PTR_FUN_8c0d0ba4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d0ba8)(ar4 + 8,ar5,ar6,ar7);
  a5 = PTR_FUN_8c0d0bb8;
  a6 = PTR_FUN_8c0d0bb4;
  a7 = DAT_8c0d0bb0;
  (*(code *)PTR_FUN_8c0d0bbc)(ar4 + 0xc,PTR_FUN_8c0d0bb8,PTR_FUN_8c0d0bb4,DAT_8c0d0bb0);
  (*(code *)PTR_FUN_8c0d0bc4)(ar4 + DAT_8c0d0bc0,a5,a6,a7);
  (*(code *)PTR_FUN_8c0d0bc8)(ar4,a5,a6,a7);
  return ar4;
}



/* s_GRAPHICS_ENV_0d0bd2 @ 8c0d0bcc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint s_GRAPHICS_ENV_0d0bd2(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a7;
  int iVar1;
  undefined *puVar2;
  undefined *a6;
  uint uVar3;
  
  (*(code *)PTR_FUN_8c0d0ccc)(ar4 + 2,PTR_DAT_8c0d0cc8,ar6,ar7);
  puVar2 = PTR_PTR_8c0d0cd0;
  (**(code **)(*ar4 + 8))(ar4,PTR_PTR_8c0d0cd0,ar6,ar7);
  a7 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d0cd4)(ar4,puVar2,ar6,ar7);
  for (uVar3 = 0; uVar3 < (uint)a7[1]; uVar3 = uVar3 + 1) {
    iVar1 = uVar3 * 0xc + *a7;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | DAT_8c0d0cd8;
  }
  a6 = PTR_s_GRAPHICS_COMMON_8c0d0cdc + 0x21;
  puVar2 = PTR_s_GRAPHICS_COMMON_8c0d0cdc + DAT_8c0d0ce0;
  iVar1 = (*(code *)PTR_FUN_8c0d0ce4)(ar5,puVar2,a6,a7);
  if (iVar1 == -1) {
    a7 = (int *)0x2;
    a6 = (undefined *)0x1;
    puVar2 = PTR_s_GRAPHICS_COMMON_8c0d0cdc + DAT_8c0d0ce8;
    (*(code *)PTR_report_error_message_8c0d0cf0)
              (PTR_s_GRAPHICS_COMMON_8c0d0cdc + DAT_8c0d0cec,puVar2,1,2);
  }
  for (uVar3 = 0; uVar3 < DAT_8c0d0d08; uVar3 = uVar3 + 1) {
    (*(code *)PTR_FUN_8c0d0cf8)((int)ar4 + uVar3 * DAT_8c0d0cf4 + 0xc,puVar2,a6,a7);
    puVar2 = (undefined *)0x1;
    (*(code *)PTR_FUN_8c0d0cfc)((int)ar4 + uVar3 * DAT_8c0d0cf4 + 0xc,1,a6,a7);
    (*(code *)PTR_FUN_8c0d0d04)((int)ar4 + uVar3 * DAT_8c0d0cf4 + 0xc,puVar2,a6,a7);
  }
  return DAT_8c0d0d08;
}



/* FUN_8c0d0d0c @ 8c0d0d0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0d0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x68) = 1;
  *(undefined1 *)(ar4 + 0x78) = (undefined1)ar5;
  return 0x78;
}



/* FUN_8c0d0d1c @ 8c0d0d1c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d0f2c) */
/* WARNING: Removing unreachable block (ram,0x8c0d0ee6) */
/* WARNING: Removing unreachable block (ram,0x8c0d0e6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d0d1c(int ar4,ulonglong *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_54;
  ulonglong uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  uStack_c = 0;
  if (*DAT_8c0d0fb4 == '\0') {
    *DAT_8c0d0fb8 = 10;
    *DAT_8c0d0fb4 = '\x01';
  }
  if (*DAT_8c0d0fbc == '\0') {
    uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0d0fc8)(DAT_8c0d0fc4,ar5,ar6,ar7);
    ar5 = (ulonglong *)PTR_Vec3_dtor_8c0d0fd0;
    ar6 = DAT_8c0d0fcc;
    (*(code *)PTR_global_list_push_8c0d0fd4)(uVar2,PTR_Vec3_dtor_8c0d0fd0,DAT_8c0d0fcc,ar7);
    *DAT_8c0d0fbc = '\x01';
  }
  (*(code *)PTR_Vec3_ctor_zero_8c0d0fd8)(auStack_20,ar5,ar6,ar7);
  uStack_38 = (ulonglong)(uint)uStack_38;
  iVar3 = *(int *)(DAT_8c0d0fdc + ar4);
  if (iVar3 == 0) {
    if (*(int *)(DAT_8c0d0fe0 + ar4) == 1) {
      *(undefined2 *)(DAT_8c0d0fe4 + ar4) = 0;
      *(undefined4 *)(DAT_8c0d0fdc + ar4) = 2;
    }
  }
  else if (iVar3 == 2) {
    if (*(int *)(DAT_8c0d0fe8 + ar4) == -1) {
      uVar2 = (*(code *)PTR_FUN_8c0d0ff0)(DAT_8c0d0fec,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c0d0fe8 + ar4) = uVar2;
      ar6 = 5;
      ar5 = *(ulonglong **)(DAT_8c0d0fe8 + ar4);
      (*(code *)PTR_FUN_8c0d0ff4)(DAT_8c0d0fec,ar5,5,ar7);
    }
    if ((*(int *)(DAT_8c0d0fe0 + ar4) == 0) && (*(int *)(DAT_8c0d0fe8 + ar4) != -1)) {
      (*(code *)PTR_FUN_8c0d0ff8)(DAT_8c0d0fec,*(undefined4 *)(DAT_8c0d0fe8 + ar4),ar6,ar7);
      ar5 = (ulonglong *)(ar4 + DAT_8c0d0fe8);
      (*(code *)PTR_FUN_8c0d0ffc)(DAT_8c0d0fec,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c0d0fe8 + ar4) = 0xffffffff;
      *(undefined4 *)(DAT_8c0d0fdc + ar4) = 3;
    }
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(DAT_8c0d0fdc + ar4) = 0;
  }
  if (*(int *)(DAT_8c0d0fe0 + ar4) == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d1004,(int)*(ulonglong *)(ar4 + DAT_8c0d1000));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + DAT_8c0d1000);
      dVar9 = (double)CONCAT44(DAT_8c0d1008,DAT_8c0d1004);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 + dVar9,0);
    }
    uStack_54 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_54 = CONCAT44(ar4,fVar8);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(uStack_54._4_4_ + DAT_8c0d1000) = (float)uStack_54;
      fVar8 = DAT_8c0d1008;
    }
    else {
      *(ulonglong *)(uStack_54._4_4_ + DAT_8c0d1000) = uStack_54;
      in_xd0 = uStack_54;
      uStack_54._0_4_ = DAT_8c0d1008;
      fVar8 = _DAT_8c0d100c;
    }
    if (in_FPSCR_PR == '\0' && fVar8 < (float)uStack_54) {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c0d1008,(int)*(ulonglong *)(ar4 + DAT_8c0d1000));
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + DAT_8c0d1000);
        dVar9 = (double)CONCAT44(_DAT_8c0d100c,DAT_8c0d1008);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0d1000) = fVar8;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0d1000) = in_xd0;
      }
    }
  }
  if (*(int *)(DAT_8c0d0fe0 + ar4) == 1) {
    iVar3 = 0;
    for (iVar7 = 0; iVar7 < DAT_8c0d1050; iVar7 = iVar7 + 1) {
      iVar4 = (*(code *)PTR_get_field_100_0d1058_8c0d1010)
                        (ar4 + iVar7 * (int)_DAT_8c0d100c + 0xc,ar5,ar6,ar7);
      iVar5 = iVar3;
      if (iVar4 != 1) {
        (*(code *)PTR_FUN_8c0d1024)(ar4 + iVar7 * (int)_DAT_8c0d100c + 0xc,DAT_8c0d1014,ar6,ar7);
        puVar6 = auStack_20;
        uVar2 = DAT_8c0d0fc4;
        (*(code *)PTR_Vec3_assign_8c0d1028)(puVar6,DAT_8c0d0fc4,ar6,ar7);
        (*(code *)PTR_rand_8c0d102c)(puVar6,uVar2,ar6,ar7);
        (*(code *)PTR_FUN_8c0d103c)(auStack_20,uVar2,ar6,ar7);
        uVar2 = 0xffffffff;
        puVar6 = auStack_30;
        (*(code *)PTR_Vec3_dtor_8c0d0fd0)(puVar6,0xffffffff,ar6,ar7);
        iVar5 = (*(code *)PTR_rand_8c0d102c)(puVar6,uVar2,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0d1034,(float)iVar5);
        }
        else {
          dVar9 = (double)CONCAT44(DAT_8c0d1038,DAT_8c0d1034);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0d1040,fVar8);
        }
        else {
          dVar9 = (double)CONCAT44(DAT_8c0d1044,DAT_8c0d1040);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0d1044,fVar8);
        }
        else {
          dVar9 = (double)CONCAT44(PTR_FUN_8c0d1048,DAT_8c0d1044);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        uVar1 = in_xd0;
        if (in_FPSCR_SZ == '\0') {
          uStack_38 = CONCAT44(uStack_38._4_4_,fVar8);
          uVar1 = uStack_38;
        }
        uStack_38 = uVar1;
        ar5 = &uStack_38;
        (*(code *)PTR_FUN_8c0d1048)(auStack_20,ar5,ar6,ar7);
        (*(code *)PTR_FUN_8c0d104c)(ar4 + iVar7 * (int)_DAT_8c0d100c + 0xc,ar5,ar6,ar7);
        iVar5 = iVar3 + 1;
        if (7 < iVar3 + 1) break;
      }
      iVar3 = iVar5;
    }
  }
  (*(code *)PTR_FUN_8c0d1054)(ar4,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0d0fd0)(auStack_20,0xffffffff,ar6,ar7);
  return uVar2;
}



/* get_field_100_0d1058 @ 8c0d1058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_100_0d1058(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 100);
}



/* FUN_8c0d1060 @ 8c0d1060 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d1060(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  int iVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (*(int *)(DAT_8c0d1140 + ar4) == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d1148,*(undefined4 *)(ar4 + DAT_8c0d1144));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0d1144);
      dVar4 = (double)CONCAT44(DAT_8c0d114c,DAT_8c0d1148);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0d1144) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0d1144) = in_xd0;
    }
    fVar3 = DAT_8c0d114c;
    fVar5 = DAT_8c0d1150;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *(float *)(ar4 + DAT_8c0d1144);
      fVar5 = DAT_8c0d114c;
    }
    if (in_FPSCR_PR == '\0' && fVar5 < fVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0d1144) = DAT_8c0d114c;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0d1144) = CONCAT44(DAT_8c0d1150,DAT_8c0d114c);
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d1150,*(undefined4 *)(ar4 + DAT_8c0d1144));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + DAT_8c0d1144);
      dVar4 = (double)CONCAT44(_DAT_8c0d1154,DAT_8c0d1150);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c0d1144) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c0d1144) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *(float *)(ar4 + DAT_8c0d1144);
    }
    if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0d1144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0d1144) = (ulonglong)(uint)fVar3;
      }
    }
  }
  for (iVar2 = 0; iVar2 < DAT_8c0d115c._4_4_; iVar2 = iVar2 + 1) {
    iVar1 = (*(code *)PTR_get_field_100_0d1058_8c0d1158)
                      (ar4 + iVar2 * _DAT_8c0d1154 + 0xc,ar5,ar6,ar7);
    if (iVar1 == 1) {
      a4 = (int *)(ar4 + iVar2 * _DAT_8c0d1154 + 0xc);
      (**(code **)(*a4 + 8))(a4,ar5,ar6,ar7);
    }
  }
  iVar2 = DAT_8c0d1164;
  *(short *)(DAT_8c0d1164 + ar4) = *(short *)(DAT_8c0d1164 + ar4) + 1;
  return iVar2;
}



/* FUN_8c0d1168 @ 8c0d1168 callers=0 callees=0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1168(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a4;
  int *a4_00;
  undefined4 a6;
  undefined4 a7;
  float fVar2;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float afStack_d0 [3];
  int iStack_c4;
  undefined4 auStack_c0 [4];
  undefined4 auStack_b0 [17];
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0d13bc)((int)afStack_d0 + DAT_8c0d13b8,ar5,ar6,ar7);
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d13c4 + 4);
  *(undefined4 *)((int)afStack_d0 + DAT_8c0d13c0) = *(undefined4 *)PTR_DAT_8c0d13c4;
  *(undefined4 *)((int)afStack_d0 + DAT_8c0d13c0 + 4) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0xc);
  *(undefined4 *)((int)afStack_d0 + DAT_8c0d13c0 + 8) = *(undefined4 *)(PTR_DAT_8c0d13c4 + 8);
  *(undefined4 *)((int)&iStack_c4 + DAT_8c0d13c0) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x14);
  *(undefined4 *)((int)auStack_c0 + DAT_8c0d13c0) = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x10);
  *(undefined4 *)((int)auStack_c0 + DAT_8c0d13c0 + 4U) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x1c);
  *(undefined4 *)((int)auStack_c0 + DAT_8c0d13c0 + 8U) = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x18);
  *(undefined4 *)((int)auStack_c0 + DAT_8c0d13c0 + 0xcU) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x24);
  *(undefined4 *)((int)auStack_b0 + DAT_8c0d13c0) = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x20);
  *(undefined4 *)((int)auStack_b0 + DAT_8c0d13c0 + 4U) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x2c);
  *(undefined4 *)((int)auStack_b0 + DAT_8c0d13c0 + 8U) = *(undefined4 *)(PTR_DAT_8c0d13c4 + 0x28);
  *(undefined4 *)((int)auStack_b0 + DAT_8c0d13c0 + 0xcU) = uVar1;
  uStack_5c = *(undefined4 *)PTR_DAT_8c0d13c8;
  uStack_58 = *(undefined4 *)(PTR_DAT_8c0d13c8 + 4);
  uStack_54 = *(undefined4 *)(PTR_DAT_8c0d13c8 + 8);
  uStack_50 = *(undefined4 *)(PTR_DAT_8c0d13c8 + 0xc);
  a7 = 4;
  (*(code *)PTR_FUN_8c0d13cc)(auStack_b0,(int)afStack_d0 + DAT_8c0d13c0,&uStack_5c,4);
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_68 = 0;
  uStack_66 = 0x7f;
  uStack_64 = 0x7f;
  uStack_62 = 0x7f;
  uStack_60 = 0x7f;
  uStack_5e = 0;
  a6 = 4;
  (*(code *)PTR_FUN_8c0d13d0)(auStack_b0,&uStack_6c,4,a7);
  uVar1 = DAT_8c0d13d4;
  (*(code *)PTR_FUN_8c0d13d8)(auStack_b0,DAT_8c0d13d4,a6,a7);
  a4 = 0;
  (*(code *)PTR_FUN_8c0d13dc)(0,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0d13ec)(a4,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0d13f0)(ar4,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0d13f4)(ar4 + 8,uVar1,a6,a7);
  (*(code *)PTR_FUN_8c0d13f8)(1,uVar1,a6,a7);
  for (fVar2 = 0.0; (int)fVar2 < DAT_8c0d144c; fVar2 = (float)((int)fVar2 + 1)) {
    afStack_d0[2] = fVar2;
    iStack_c4 = (*(code *)PTR_get_field_100_0d1058_8c0d1400)
                          (ar4 + (int)fVar2 * DAT_8c0d13fc + 0xc,uVar1,a6,a7);
    if (iStack_c4 == 1) {
      a4_00 = (int *)(ar4 + (int)fVar2 * DAT_8c0d13fc + 0xc);
      afStack_d0[1] = fVar2;
      (**(code **)(*a4_00 + 0x10))(a4_00,uVar1,a6,a7);
      afStack_d0[0] = fVar2;
      (*(code *)PTR_FUN_8c0d1404)(ar4 + (int)fVar2 * DAT_8c0d13fc + 0xc,uVar1,a6,a7);
      (*(code *)PTR_Vec3_assign_8c0d1408)((int)afStack_d0 + DAT_8c0d13b8,auStack_c0,a6,a7);
      uVar1 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0d140c)(auStack_c0,0xffffffff,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        fVar3 = *(float *)((int)afStack_d0 + DAT_8c0d1410);
        fVar5 = DAT_8c0d1414;
      }
      else {
        in_xd0 = *(undefined8 *)((int)afStack_d0 + DAT_8c0d1410);
        fVar3 = DAT_8c0d1414;
        fVar5 = DAT_8c0d1418;
      }
      if (in_FPSCR_PR != '\0' || fVar3 <= fVar5) {
        if (in_FPSCR_SZ == '\0') {
          fVar3 = *(float *)((int)afStack_d0 + DAT_8c0d13b8);
          fVar5 = DAT_8c0d1418;
        }
        else {
          in_xd0 = *(undefined8 *)((int)afStack_d0 + DAT_8c0d13b8);
          fVar3 = DAT_8c0d1418;
          fVar5 = DAT_8c0d141c;
        }
        if (in_FPSCR_PR == '\0' && fVar5 < fVar3) {
          if (in_FPSCR_SZ == '\0') {
            fVar3 = *(float *)((int)afStack_d0 + (int)DAT_8c0d141c);
            fVar5 = DAT_8c0d1420;
          }
          else {
            in_xd0 = *(undefined8 *)((int)afStack_d0 + (int)DAT_8c0d141c);
            fVar3 = DAT_8c0d1420;
            fVar5 = DAT_8c0d1424;
          }
          if (in_FPSCR_PR == '\0' && fVar5 < fVar3) {
            if (in_FPSCR_SZ == '\0') {
              dVar4 = (double)CONCAT44(DAT_8c0d1424,*(undefined4 *)((int)afStack_d0 + DAT_8c0d13b8))
              ;
            }
            else {
              in_xd0 = *(undefined8 *)((int)afStack_d0 + DAT_8c0d13b8);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 - dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d13c0) = fVar3;
              dVar4 = (double)CONCAT44(DAT_8c0d1424,
                                       *(undefined4 *)((int)afStack_d0 + (int)DAT_8c0d141c));
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d13c0) = in_xd0;
              in_xd0 = *(undefined8 *)((int)afStack_d0 + (int)DAT_8c0d141c);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 - dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d1428) = fVar3;
              dVar4 = (double)CONCAT44(DAT_8c0d1424,*(undefined4 *)((int)afStack_d0 + DAT_8c0d13b8))
              ;
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d1428) = in_xd0;
              in_xd0 = *(undefined8 *)((int)afStack_d0 + DAT_8c0d13b8);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 - dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d142c) = fVar3;
              dVar4 = (double)CONCAT44(DAT_8c0d1424,
                                       *(undefined4 *)((int)afStack_d0 + (int)DAT_8c0d141c));
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d142c) = in_xd0;
              in_xd0 = *(undefined8 *)((int)afStack_d0 + (int)DAT_8c0d141c);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 + dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d1430) = fVar3;
              dVar4 = (double)CONCAT44(DAT_8c0d1424,*(undefined4 *)((int)afStack_d0 + DAT_8c0d13b8))
              ;
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d1430) = in_xd0;
              in_xd0 = *(undefined8 *)((int)afStack_d0 + DAT_8c0d13b8);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 + dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d1434) = fVar3;
              dVar4 = (double)CONCAT44(DAT_8c0d1424,
                                       *(undefined4 *)((int)afStack_d0 + (int)DAT_8c0d141c));
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d1434) = in_xd0;
              in_xd0 = *(undefined8 *)((int)afStack_d0 + (int)DAT_8c0d141c);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 + dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d1438) = fVar3;
              dVar4 = (double)CONCAT44(DAT_8c0d1424,*(undefined4 *)((int)afStack_d0 + DAT_8c0d13b8))
              ;
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d1438) = in_xd0;
              in_xd0 = *(undefined8 *)((int)afStack_d0 + DAT_8c0d13b8);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 + dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d143c) = fVar3;
              dVar4 = (double)CONCAT44(DAT_8c0d1424,
                                       *(undefined4 *)((int)afStack_d0 + (int)DAT_8c0d141c));
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d143c) = in_xd0;
              in_xd0 = *(undefined8 *)((int)afStack_d0 + (int)DAT_8c0d141c);
              dVar4 = (double)CONCAT44(DAT_8c0d1428,DAT_8c0d1424);
            }
            if (in_FPSCR_PR == '\0') {
              fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
            }
            else {
              fVar3 = SUB84(dVar4 - dVar4,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)((int)afStack_d0 + DAT_8c0d1440) = fVar3;
            }
            else {
              *(undefined8 *)((int)afStack_d0 + DAT_8c0d1440) = in_xd0;
            }
            (*(code *)PTR_FUN_8c0d13f0)(ar4,uVar1,a6,a7);
            uVar1 = 1;
            (*(code *)PTR_FUN_8c0d1444)(ar4,1,a6,a7);
            (*(code *)PTR_FUN_8c0d1448)(auStack_b0,uVar1,a6,a7);
          }
        }
      }
    }
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0d140c)((int)afStack_d0 + DAT_8c0d13b8,0xffffffff,a6,a7);
  return uVar1;
}



/* FUN_8c0d1450 @ 8c0d1450 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1450(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}



/* FUN_8c0d1458 @ 8c0d1458 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1458(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0d1464;
  *(undefined4 *)(DAT_8c0d1464 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0d1468 @ 8c0d1468 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1468(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c0d14a0 + ar4);
  if (iVar1 != -1) {
    (*(code *)PTR_FUN_8c0d14a8)(DAT_8c0d14a4,*(undefined4 *)(DAT_8c0d14a0 + ar4),ar6,ar7);
    (*(code *)PTR_FUN_8c0d14ac)(DAT_8c0d14a4,ar4 + DAT_8c0d14a0,ar6,ar7);
    iVar1 = DAT_8c0d14a0;
    *(undefined4 *)(DAT_8c0d14a0 + ar4) = 0xffffffff;
  }
  return iVar1;
}



/* s_Failed_to_set_texture_wrap_0d14b0 @ 8c0d14b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d14b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d14c8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d14cc @ 8c0d14cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d14cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d14e4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d14e8 @ 8c0d14e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d14e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c0d150c + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d1514)(DAT_8c0d1510,*(undefined4 *)(DAT_8c0d150c + ar4),ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0d1518 @ 8c0d1518 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1518(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_8c0d153c + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d1544)(DAT_8c0d1540,*(undefined4 *)(DAT_8c0d153c + ar4),5,ar7);
  }
  return iVar1;
}



/* FUN_8c0d1548 @ 8c0d1548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1548(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d1560)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d1564 @ 8c0d1564 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1564(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  ulonglong uVar2;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d15a4) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d15a4) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(DAT_8c0d15a8 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44(DAT_8c0d15b0,in_fr1);
    *(undefined4 *)(ar4 + DAT_8c0d15ac) = DAT_8c0d15b0;
  }
  else {
    uVar2 = CONCAT44(DAT_8c0d15b4,DAT_8c0d15b0);
    *(ulonglong *)(ar4 + DAT_8c0d15ac) = uVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d15b4) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d15b4) = uVar2 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d15b8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d15b8) = uVar2 & 0xffffffff;
  }
  *(undefined4 *)(DAT_8c0d15bc + ar4) = 0;
  iVar1 = DAT_8c0d15c0;
  *(undefined2 *)(DAT_8c0d15c0 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0d15c4 @ 8c0d15c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d15c4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char in_FPSCR_SZ;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0d164c)(PTR_DAT_8c0d1648,ar5,ar6,ar7);
  puVar4 = PTR_Vec3_dtor_8c0d1654;
  uVar2 = DAT_8c0d1650;
  (*(code *)PTR_global_list_push_8c0d1658)(uVar1,PTR_Vec3_dtor_8c0d1654,DAT_8c0d1650,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0d164c)(PTR_DAT_8c0d165c,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0d1654;
  uVar2 = DAT_8c0d1660;
  (*(code *)PTR_global_list_push_8c0d1658)(uVar1,PTR_Vec3_dtor_8c0d1654,DAT_8c0d1660,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0d164c)(PTR_DAT_8c0d1664,puVar4,uVar2,ar7);
  puVar4 = PTR_Vec3_dtor_8c0d1654;
  uVar2 = DAT_8c0d1668;
  (*(code *)PTR_global_list_push_8c0d1658)(uVar1,PTR_Vec3_dtor_8c0d1654,DAT_8c0d1668,ar7);
  uVar2 = (*(code *)PTR_Vec3_ctor_xyz_8c0d164c)(PTR_DAT_8c0d166c,puVar4,uVar2,ar7);
  (*(code *)PTR_global_list_push_8c0d1658)(uVar2,PTR_Vec3_dtor_8c0d1654,DAT_8c0d1670,ar7);
  puVar3 = DAT_8c0d1678;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)PTR_DAT_8c0d1674 = *(undefined4 *)DAT_8c0d1678;
  }
  else {
    *(undefined8 *)PTR_DAT_8c0d1674 = *DAT_8c0d1678;
  }
  return puVar3;
}



/* FUN_8c0d167c @ 8c0d167c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d167c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [68];
  
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0d1734)(auStack_48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1734)(auStack_88,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1738)(auStack_48,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1738)(auStack_88,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d173c)(auStack_48,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1740)(auStack_88,uVar1,ar6,ar7);
  a5 = auStack_88;
  (*(code *)PTR_FUN_8c0d1744)(auStack_48,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1738)(auStack_88,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1748)(auStack_88,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d1744)(auStack_48,auStack_88,ar6,ar7);
  (*(code *)PTR_FUN_8c0d174c)(auStack_48,ar5,ar4,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_023e4c_8c0d1750)(auStack_88,0xffffffff,ar4,ar7);
  uVar1 = (*(code *)PTR_free_if_nonnull_wrap_023e4c_8c0d1750)(auStack_48,0xffffffff,ar4,ar7);
  return uVar1;
}



/* FUN_8c0d1754 @ 8c0d1754 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1754(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  fStack_10 = in_PR;
  (*(code *)PTR_FUN_8c0d1854)(0,ar5,&fStack_20,ar7);
  (*(code *)PTR_FUN_8c0d1854)(0,ar5,&fStack_18,ar7);
  for (iVar2 = 1; iVar2 < 8; iVar2 = iVar2 + 1) {
    (*(code *)PTR_FUN_8c0d1854)(0,iVar2 * 0xc + ar5,&fStack_28,ar7);
    fVar3 = fStack_20;
    fVar4 = fStack_1c;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = fStack_28;
      fVar4 = fStack_20;
    }
    if (in_FPSCR_PR != '\0' || fVar4 <= fVar3) {
      fVar3 = fStack_18;
      fVar4 = fStack_14;
      if (in_FPSCR_SZ == '\0') {
        fVar3 = fStack_28;
        fVar4 = fStack_18;
      }
      if (in_FPSCR_PR == '\0' && fVar4 < fVar3) {
        if (in_FPSCR_SZ == '\0') {
          fStack_18 = fStack_28;
        }
        else {
          fStack_18 = fStack_28;
          fStack_14 = fStack_24;
        }
      }
    }
    else {
      if (in_FPSCR_SZ != '\0') {
        fStack_1c = fStack_24;
      }
      fStack_20 = fStack_28;
    }
    fVar3 = fStack_1c;
    fVar4 = fStack_18;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = fStack_24;
      fVar4 = fStack_1c;
    }
    if (in_FPSCR_PR != '\0' || fVar4 <= fVar3) {
      fVar3 = fStack_14;
      fVar4 = fStack_10;
      if (in_FPSCR_SZ == '\0') {
        fVar3 = fStack_24;
        fVar4 = fStack_14;
      }
      if (in_FPSCR_PR == '\0' && fVar4 < fVar3) {
        if (in_FPSCR_SZ == '\0') {
          fStack_14 = fStack_24;
        }
        else {
          fStack_14 = fStack_24;
          fStack_10 = fStack_20;
        }
      }
    }
    else {
      if (in_FPSCR_SZ != '\0') {
        fStack_18 = fStack_20;
      }
      fStack_1c = fStack_24;
    }
  }
  fVar3 = fStack_20;
  fVar4 = fStack_1c;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *ar4;
    fVar4 = fStack_20;
  }
  if (in_FPSCR_PR != '\0' || fVar4 <= fVar3) {
    fVar3 = fStack_18;
    fVar4 = fStack_14;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *ar4;
      fVar4 = fStack_18;
    }
    if (in_FPSCR_PR != '\0' || fVar3 <= fVar4) {
      fVar3 = fStack_1c;
      if (in_FPSCR_SZ == '\0') {
        fVar3 = ar4[1];
        fStack_18 = fStack_1c;
      }
      if (in_FPSCR_PR != '\0' || fStack_18 <= fVar3) {
        fVar3 = fStack_14;
        if (in_FPSCR_SZ == '\0') {
          fVar3 = ar4[1];
          fStack_10 = fStack_14;
        }
        if (in_FPSCR_PR != '\0' || fVar3 <= fStack_10) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c0d1858 @ 8c0d1858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1858(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  undefined8 in_dr4;
  float in_fr15;
  float fVar5;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 auStack_3c [3];
  undefined1 auStack_2f [39];
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
    in_fr15 = (float)((ulonglong)in_dr4 >> 0x20);
    dVar4 = (double)CONCAT44(*(undefined4 *)ar4,in_fr1);
    in_dr4 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19a4;
      ar7 = DAT_8c0d19a4;
      (*(code *)PTR_FUN_8c0d19ac)(DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19a4,DAT_8c0d19a4);
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0xc),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19b0;
      ar7 = DAT_8c0d19b0;
      (*(code *)PTR_FUN_8c0d19ac)(DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19b0,DAT_8c0d19b0);
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[2];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19b4;
      ar7 = DAT_8c0d19b4;
      (*(code *)PTR_FUN_8c0d19ac)(DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19b4,DAT_8c0d19b4);
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x1c),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19b0;
      ar7 = DAT_8c0d19b0;
      (*(code *)PTR_FUN_8c0d19ac)(DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19b0,DAT_8c0d19b0);
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[4];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x24),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = (float)((ulonglong)dVar4 >> 0x20) < in_fr15;
    }
    else {
      bVar6 = dVar4 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (!bVar6) {
      *(undefined4 *)(puVar2 + -0x2c) = DAT_8c0d19a0;
      ar5 = DAT_8c0d19a0;
      ar6 = DAT_8c0d19a4;
      ar7 = DAT_8c0d19a4;
      (*(code *)PTR_FUN_8c0d19ac)(DAT_8c0d19a8,DAT_8c0d19a0,DAT_8c0d19a4,DAT_8c0d19a4);
    }
  }
LAB_8c0d1936:
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0d19b8,SUB84(dVar4,0));
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c0d19bc,DAT_8c0d19b8);
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,in_fr15) < dVar4;
  }
  fVar5 = in_fr15;
  if ((!bVar6) && (fVar5 = DAT_8c0d19bc, in_FPSCR_SZ != '\0')) {
    in_dr4 = CONCAT44(PTR_s_GRAPHICS_COMMON_8c0d19c0,DAT_8c0d19bc);
    fVar5 = in_fr15;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined4 *)(puVar2 + -0x2c);
    *(float *)(puVar2 + -0x2c) = fVar5;
  }
  else {
    puVar3 = (undefined4 *)(puVar2 + -0x30);
    *(undefined8 *)(puVar2 + -0x30) = in_dr4;
  }
  puVar3[-1] = PTR_s_GRAPHICS_COMMON_8c0d19c0 + DAT_8c0d19c4;
  (*(code *)PTR_FUN_8c0d19c8)(puVar3 + 1,ar5,ar6,ar7);
  *(undefined1 *)((int)puVar3 + 9) = 0;
  *puVar3 = 0x1c;
  (*(code *)PTR_FUN_8c0d19d8)(DAT_8c0d19a8,puVar3 + 1,0,0xe);
  *puVar3 = 0xffffffff;
  uVar1 = (*(code *)PTR_FUN_8c0d19ac)(DAT_8c0d19a8,0xffffffff,0xffffffff,0xffffffff);
  return uVar1;
}



/* FUN_8c0d19dc @ 8c0d19dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d19dc(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int a5;
  int a6;
  
  a5 = ar4;
  a6 = ar5;
  a4 = (*(code *)PTR_s_Shell_0fef9c_8c0d1b84)(DAT_8c0d1b80,ar4,ar5,ar7);
  if (a4 != 0) {
    switch(ar4) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      a6 = 0;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,0,ar7);
    }
    if ((ar4 == 3) && (ar5 == 2)) {
      a6 = 0;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,0,ar7);
    }
    else if ((ar4 == 3) && (ar5 == 3)) {
      a6 = 3;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,3,ar7);
    }
    else if ((ar4 == 3) && (ar5 == 4)) {
      a6 = 6;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,6,ar7);
    }
    else if ((ar4 == 5) && (ar5 == 6)) {
      a6 = 0;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,0,ar7);
    }
    else if ((ar4 == 5) && (ar5 == 7)) {
      a6 = 3;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,3,ar7);
    }
    else if ((ar4 == 10) && (ar5 == 0x11)) {
      a6 = 0;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,0,ar7);
    }
    else if ((ar4 == 10) && (ar5 == 0x13)) {
      a6 = 3;
      a5 = DAT_8c0d1b88;
      (**(code **)(DAT_8c0d1b8c + *(int *)(a4 + 8)))(a4,DAT_8c0d1b88,3,ar7);
    }
    (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,a5,a6,ar7);
  }
  return a4;
}



/* FUN_8c0d1b90 @ 8c0d1b90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1b90(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    a5 = ar5;
    (*(code *)PTR_get_field_24_05c284_8c0d1bfc)(*ar4,ar5,ar6,ar7);
    if (ar5 == 1) {
      uVar1 = (**(code **)(DAT_8c0d1c00 + *(int *)(*ar4 + 8)))(*ar4,a5,ar6,ar7);
      ar6 = (int)(short)uVar1;
      (**(code **)(DAT_8c0d1c08 + *(int *)(*ar4 + 8)))(*ar4,DAT_8c0d1c04,ar6,ar7);
    }
    (**(code **)(*(int *)(*ar4 + 8) + 0x58))(*ar4,DAT_8c0d1c0c,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0d1c10)(DAT_8c0d1c0c,ar4,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0d1c14 @ 8c0d1c14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0d1c14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_8c0d1c1c;
  *DAT_8c0d1c1c = (undefined1)ar4;
  return puVar1;
}



/* FUN_8c0d1c20 @ 8c0d1c20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0d1c20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  *DAT_8c0d1c30 = ar4;
  *DAT_8c0d1c34 = ar5;
  puVar1 = DAT_8c0d1c38;
  *DAT_8c0d1c38 = (undefined1)ar6;
  return puVar1;
}



/* FUN_8c0d1c3c @ 8c0d1c3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1c3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *DAT_8c0d1c70 = 1;
  if ((*DAT_8c0d1c74 == '\0') || (*DAT_8c0d1c74 == '\x01')) {
    (*(code *)PTR_FUN_8c0d1c78)(ar4,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_thunk_FUN_8c20a1d0_8c0d1c80)(DAT_8c0d1c7c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d1c84 @ 8c0d1c84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d1c84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  uint a5;
  
  if (*DAT_8c0d1d24 == '\0') {
    *DAT_8c0d1d28 = 0;
    *DAT_8c0d1d24 = '\x01';
  }
  iVar1 = 0;
  if ((*DAT_8c0d1d2c != 0) && (iVar1 = 0, *DAT_8c0d1d30 != 0)) {
    (*(code *)PTR_FUN_8c0d1d3c)(DAT_8c0d1d38,ar5,ar6,ar7);
    do {
    } while (*DAT_8c0d1d40 != 1);
    if (*DAT_8c0d1d28 < 1) {
      iVar1 = *DAT_8c0d1d28 + 1;
      *DAT_8c0d1d28 = iVar1;
    }
    else {
      a5 = (uint)*DAT_8c0d1d44;
      a4 = (int *)*DAT_8c0d1d2c;
      (**(code **)(DAT_8c0d1d48 + *a4))(a4,a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0d1d4c)(a4,a5,ar6,ar7);
      (**(code **)(DAT_8c0d1d50 + *(int *)*DAT_8c0d1d30))
                ((int *)*DAT_8c0d1d30,(uint)*DAT_8c0d1d44,ar6,ar7);
      *DAT_8c0d1d2c = 0;
      *DAT_8c0d1d30 = 0;
      iVar1 = 0;
      *DAT_8c0d1d28 = 0;
    }
  }
  return iVar1;
}



/* FUN_8c0d1d54 @ 8c0d1d54 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1d54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e48) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d1e48) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e4c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d1e4c) = (ulonglong)in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e50) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d1e50) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(DAT_8c0d1e54 + ar4) = 1;
  *(undefined4 *)(DAT_8c0d1e58 + ar4) = 0;
  *(undefined4 *)(DAT_8c0d1e5c + ar4) = 0;
  *(undefined4 *)(DAT_8c0d1e60 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e64) = (undefined4)DAT_8c0d1e68;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e64) = CONCAT44(DAT_8c0d1e68._4_4_,(undefined4)DAT_8c0d1e68);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e68._4_4_) = DAT_8c0d1e70;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e68._4_4_) = CONCAT44(DAT_8c0d1e74,DAT_8c0d1e70);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e74) = DAT_8c0d1e78;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e74) = CONCAT44(DAT_8c0d1e7c,DAT_8c0d1e78);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e7c) = DAT_8c0d1e80;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e7c) = CONCAT44(DAT_8c0d1e84,DAT_8c0d1e80);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e84) = DAT_8c0d1e70;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e84) = CONCAT44(DAT_8c0d1e74,DAT_8c0d1e70);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e88) = DAT_8c0d1e8c;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e88) = CONCAT44(DAT_8c0d1e90,DAT_8c0d1e8c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e90) = DAT_8c0d1e94;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e90) = CONCAT44(DAT_8c0d1e98,DAT_8c0d1e94);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e98) = DAT_8c0d1e70;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e98) = CONCAT44(DAT_8c0d1e74,DAT_8c0d1e70);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1e9c) = DAT_8c0d1ea0;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d1e9c) = CONCAT44(_DAT_8c0d1ea4,DAT_8c0d1ea0);
  }
  for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
    ar5 = DAT_8c0d1ea8;
    ar6 = _DAT_8c0d1ea4;
    (*(code *)PTR_FUN_8c0d1eb0)(iVar2 * 0xf0 + ar4 + DAT_8c0d1eac,DAT_8c0d1ea8,_DAT_8c0d1ea4,ar7);
  }
  uVar1 = (*(code *)PTR_s_Nautilus_0ae6a4_8c0d1eb4)(ar4 + DAT_8c0d1eac,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d1eb8 @ 8c0d1eb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1eb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d1f18) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d1f18) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(DAT_8c0d1f1c + ar4) = 0;
  *(undefined4 *)(DAT_8c0d1f20 + ar4) = 1;
  *(undefined4 *)(DAT_8c0d1f24 + ar4) = 1;
  for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
    (*(code *)PTR_FUN_8c0d1f34)(iVar1 * 0xf0 + ar4 + DAT_8c0d1f30,DAT_8c0d1f2c,DAT_8c0d1f28,ar7);
  }
  return 0x14;
}



/* FUN_8c0d1f38 @ 8c0d1f38 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d1f38(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c0d1f88 + ar4) = 0;
  *(undefined4 *)(DAT_8c0d1f8c + ar4) = 0;
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    (*(code *)PTR_FUN_8c0d1f9c)(iVar1 * 0xf0 + ar4 + DAT_8c0d1f98,DAT_8c0d1f94,DAT_8c0d1f90,ar7);
  }
  return 10;
}



/* s_GRAPHICS_ENV_0d1fa0 @ 8c0d1fa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_ENV_0d1fa0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a7;
  int iVar1;
  undefined *a5;
  
  a5 = PTR_PTR_8c0d1ffc;
  (*(code *)PTR_Class_129920_m0_015248_8c0d2004)(DAT_8c0d2000,PTR_PTR_8c0d1ffc,ar6,ar7);
  a7 = (*(code *)PTR_get_field_4_0253e4_8c0d2008)(DAT_8c0d2000,a5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0d2018)
                    (ar4,PTR_s_GRAPHICS_COMMON_8c0d200c + DAT_8c0d2014,
                     PTR_s_GRAPHICS_COMMON_8c0d200c + DAT_8c0d2010,a7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_report_error_message_8c0d2024)
                      (PTR_s_GRAPHICS_COMMON_8c0d200c + DAT_8c0d2020,
                       PTR_s_GRAPHICS_COMMON_8c0d200c + DAT_8c0d201c,0,2);
  }
  return iVar1;
}



/* FUN_8c0d2028 @ 8c0d2028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2028(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d2048)(DAT_8c0d2044,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d204c)(DAT_8c0d2044,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d2050 @ 8c0d2050 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d2050(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0d20ac)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d20b0)(ar4 + 0x10,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x2c) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x3c) = 3;
  (*(code *)PTR_FUN_8c0d20b4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d20b8)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d20bc @ 8c0d20bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d20bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0d20ec)(ar4 + 0x10,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(undefined2 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x40) = 0;
  return 0x40;
}



/* FUN_8c0d20f0 @ 8c0d20f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d20f0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x18) = in_fr4;
    *(undefined4 *)(ar4 + 0x14) = in_fr4;
    *(undefined4 *)(ar4 + 0x10) = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0x18) = CONCAT44(in_fr4,in_fr5);
    *(ulonglong *)(ar4 + 0x14) = CONCAT44(in_fr4,in_fr5);
    *(ulonglong *)(ar4 + 0x10) = CONCAT44(in_fr4,in_fr5);
  }
  if (ar6 == 4) {
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c0d2198,*(undefined4 *)(ar4 + 0x10));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x10);
      dVar2 = (double)CONCAT44(PTR_FUN_8c0d219c,DAT_8c0d2198);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x10) = fVar1;
      dVar2 = (double)CONCAT44(DAT_8c0d2198,*(undefined4 *)(ar4 + 0x14));
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x14);
      dVar2 = (double)CONCAT44(PTR_FUN_8c0d219c,DAT_8c0d2198);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x14) = fVar1;
      dVar2 = (double)CONCAT44(DAT_8c0d2198,*(undefined4 *)(ar4 + 0x18));
    }
    else {
      *(undefined8 *)(ar4 + 0x14) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x18);
      dVar2 = (double)CONCAT44(PTR_FUN_8c0d219c,DAT_8c0d2198);
    }
    if (in_FPSCR_PR == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x18) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + 0x18) = in_xd0;
    }
  }
  (*(code *)PTR_FUN_8c0d219c)(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = ar5;
  *(int *)(ar4 + 0x3c) = ar6;
  return ar5;
}



/* FUN_8c0d21a0 @ 8c0d21a0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d21a0(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_18;
  
  if ((ar5 & 1) == 0) {
    *(short *)(ar4 + 0x24) = *(short *)(ar4 + 0x24) + 1;
  }
  if (*(short *)(ar4 + 0x24) == 0x14) {
    (*(code *)PTR_FUN_8c0d2258)(ar4,ar5,ar6,ar7);
  }
  if (((*(int *)(ar4 + 0x3c) == 3) ||
      (puVar1 = *(undefined8 **)(ar4 + 0x3c), puVar1 == (undefined8 *)0x4)) &&
     (puVar1 = (undefined8 *)0x8, 7 < *(short *)(ar4 + 0x24))) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d225c,*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar4 = (double)CONCAT44(_DAT_8c0d2260,DAT_8c0d225c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    pdVar2 = (double *)(ar4 + 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x20) = fVar3;
      pdVar2 = (double *)(ar4 + 0x1c);
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x1c);
    }
    dVar4 = *pdVar2;
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    uStack_18 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_18 = CONCAT44(ar4,fVar3);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(uStack_18._4_4_ + 0x1c) = (float)uStack_18;
      fVar3 = _DAT_8c0d2260;
    }
    else {
      *(undefined8 *)(uStack_18._4_4_ + 0x1c) = uStack_18;
      in_xd0 = uStack_18;
      uStack_18._0_4_ = _DAT_8c0d2260;
      fVar3 = _FUN_8c0d2264;
    }
    if (in_FPSCR_PR == '\0' && (float)uStack_18 < fVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x1c) = _DAT_8c0d2260;
      }
      else {
        *(ulonglong *)(ar4 + 0x1c) = CONCAT44(_FUN_8c0d2264,_DAT_8c0d2260);
      }
    }
    puVar1 = (undefined8 *)(ar4 + 0x14);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar4 = *(double *)(ar4 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x14) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x14) = in_xd0;
    }
  }
  return puVar1;
}



/* FUN_8c0d2264 @ 8c0d2264 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2264(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int a4;
  
  uVar2 = ar6;
  piVar1 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d2458)(ar5,ar5,ar6,ar7);
  uVar3 = 0;
  (*(code *)PTR_FUN_8c0d245c)(0,ar5,uVar2,ar7);
  (*(code *)PTR_FUN_8c0d2460)(uVar3,ar5,uVar2,ar7);
  uVar3 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(DAT_8c0d2464 + *piVar1);
  *(undefined4 *)(DAT_8c0d2464 + *piVar1) =
       *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(DAT_8c0d2468 + *piVar1);
  a4 = *piVar1;
  *(undefined4 *)(DAT_8c0d2468 + a4) =
       *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) = uVar3;
  (*(code *)PTR_FUN_8c0d246c)(a4,ar5,uVar2,ar7);
  (*(code *)PTR_FUN_8c0d2470)(ar6,ar5,uVar2,ar7);
  uVar3 = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(DAT_8c0d2464 + *piVar1);
  *(undefined4 *)(DAT_8c0d2464 + *piVar1) = uVar3;
  uVar3 = *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(DAT_8c0d2468 + *piVar1);
  *(undefined4 *)(DAT_8c0d2468 + *piVar1) = uVar3;
  uVar2 = (*(code *)PTR_FUN_8c0d2474)(1,ar5,uVar2,ar7);
  return uVar2;
}



/* FUN_8c0d2478 @ 8c0d2478 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2478(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 a4;
  undefined4 uVar2;
  int a6;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = ar5;
  uVar3 = ar6;
  uVar4 = ar7;
  piVar1 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d2580)(ar5,ar5,ar6,ar7);
  a4 = 0;
  (*(code *)PTR_FUN_8c0d2584)(0,uVar2,uVar3,uVar4);
  (*(code *)PTR_FUN_8c0d2588)(a4,uVar2,uVar3,uVar4);
  uVar3 = 4;
  a6 = ar4 + 0x2c;
  uVar2 = ar7;
  (*(code *)PTR_FUN_8c0d258c)(ar7,ar6,a6,4);
  uVar4 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar4;
  (*(code *)PTR_FUN_8c0d2590)(uVar2,ar6,a6,uVar3);
  uVar2 = 0;
  (*(code *)PTR_FUN_8c0d2594)(ar5,0,a6,uVar3);
  (*(code *)PTR_FUN_8c0d2598)(ar7,uVar2,a6,uVar3);
  uVar4 = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar4;
  uVar2 = (*(code *)PTR_FUN_8c0d259c)(1,uVar2,a6,uVar3);
  return uVar2;
}



/* FUN_8c0d25a0 @ 8c0d25a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d25a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  puVar1 = (undefined8 *)(ar4 + 0x1c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar1 = 0x3f800000;
    *(undefined4 *)(ar4 + 0x20) = 0;
  }
  else {
    *puVar1 = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x20) = (ulonglong)in_fr1;
  }
  return puVar1;
}



/* FUN_8c0d25b4 @ 8c0d25b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d25b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0d2608)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d2608)(ar4 + 0x18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d2608)(ar4 + 0x28,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d260c)(ar4 + 0x48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d2610)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d2614)(ar4 + 0x48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d2618)(ar4 + 0x48,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d261c @ 8c0d261c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d261c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  
  uVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0d2668)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d266c)(ar5,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c0d2670)(ar4 + 0x48,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c0d2674)(ar4 + 0x48,ar6,a6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d2678)(ar4 + 0x48,ar6,a6,ar7);
  return uVar1;
}



/* FUN_8c0d267c @ 8c0d267c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0d267c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 2;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}



/* FUN_8c0d2690 @ 8c0d2690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2690(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d26a8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d26ac @ 8c0d26ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d26ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d26e8)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d26ec)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d26f0 @ 8c0d26f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2704) */
/* WARNING: Removing unreachable block (ram,0x8c0d2732) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0d26f0(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  float *a4;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a4 = ar4;
  iVar1 = (*(code *)PTR_rand_8c0d2754)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d2758,(float)iVar1);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0d275c,DAT_8c0d2758);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d275c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0d2760,DAT_8c0d275c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d2760,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0d2764,DAT_8c0d2760);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *ar4 = fVar2;
    ar4[1] = DAT_8c0d2764;
  }
  else {
    *(undefined8 *)ar4 = in_xd0;
    *(ulonglong *)(ar4 + 1) = CONCAT44(_DAT_8c0d2768,DAT_8c0d2764);
  }
  iVar1 = (*(code *)PTR_rand_8c0d2754)(a4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d2758,(float)iVar1);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0d275c,DAT_8c0d2758);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d275c,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c0d2760,DAT_8c0d275c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(_DAT_8c0d2768,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(_FUN_8c0d276c,_DAT_8c0d2768);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[2] = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + 2) = in_xd0;
  }
  return &DAT_8c0d2768;
}



/* FUN_8c0d276c @ 8c0d276c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2884) */
/* WARNING: Removing unreachable block (ram,0x8c0d2790) */
/* WARNING: Removing unreachable block (ram,0x8c0d2842) */
/* WARNING: Removing unreachable block (ram,0x8c0d289e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d276c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int a4;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  undefined4 in_fr1;
  double *pdVar4;
  float fVar5;
  float fVar6;
  double *pdVar7;
  undefined4 in_fr3;
  double dVar8;
  undefined8 in_dr4;
  double in_dr6;
  undefined8 in_dr12;
  double dVar9;
  undefined8 in_dr14;
  double dVar10;
  double in_xd0;
  double dVar11;
  undefined8 in_xd4;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar3 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar3 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = in_PR;
  uVar2 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x20) = (int)in_dr4;
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),(int)in_dr12);
  }
  else {
    *(undefined8 *)((int)puVar3 + -0x20) = in_xd4;
  }
  a4 = ar4;
  uVar1 = (*(code *)PTR_rand_8c0d2908)(ar4,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0xc) = uVar1;
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d290c,in_fr1);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c0d2910,DAT_8c0d290c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44(uVar2,(float)*(int *)((int)puVar3 + -0xc) /
                                    (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    dVar10 = (double)CONCAT44(uVar2,(float)*(int *)((int)puVar3 + -0xc)) / dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d2910,SUB84(dVar8,0));
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c0d2914,DAT_8c0d2910);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = (float)((ulonglong)dVar10 >> 0x20) < (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    bVar12 = dVar10 < dVar8;
  }
  if (bVar12) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + _DAT_8c0d2924) = 0x3f800000;
      dVar8 = (double)CONCAT44(DAT_8c0d291c,SUB84(dVar10,0));
    }
    else {
      *(undefined8 *)(ar4 + _DAT_8c0d2924) = CONCAT44(0x3f800000,SUB84(dVar8,0));
      dVar8 = (double)CONCAT44(DAT_8c0d2920,DAT_8c0d291c);
      in_xd0 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar8 * dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c0d2920,fVar5);
    }
    else {
      dVar8 = (double)CONCAT44(_DAT_8c0d2924,DAT_8c0d2920);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar8 + dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x10) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x10) = in_xd0;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0x18) = SUB84(dVar10,0);
      in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                                *(undefined4 *)((int)puVar3 + -0x18));
      fVar5 = *(float *)((int)puVar3 + -0x18);
      fVar6 = DAT_8c0d2914;
    }
    else {
      *(double *)((int)puVar3 + -0x18) = in_xd14;
      in_xd12 = *(undefined8 *)((int)puVar3 + -0x18);
      in_xd0 = *(double *)((int)puVar3 + -0x18);
      fVar5 = DAT_8c0d2914;
      fVar6 = DAT_8c0d2918;
    }
    if (in_FPSCR_PR == '\0' && fVar5 < fVar6) {
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),DAT_8c0d2918);
      }
      else {
        in_xd12 = CONCAT44(DAT_8c0d291c,DAT_8c0d2918);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c0d291c,fVar5);
    }
    else {
      dVar8 = (double)CONCAT44(DAT_8c0d2920,DAT_8c0d291c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),
                               SUB84(in_dr6,0) * (float)((ulonglong)dVar8 >> 0x20));
    }
    else {
      dVar9 = in_dr6 * dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c0d2920,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(_DAT_8c0d2924,DAT_8c0d2920);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr6 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                                SUB84(dVar9,0) + (float)((ulonglong)dVar8 >> 0x20));
    }
    else {
      in_dr6 = dVar9 + dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x10) = SUB84(in_dr6,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = in_xd12;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + _DAT_8c0d2924) = DAT_8c0d2928;
    }
    else {
      *(undefined8 *)(ar4 + _DAT_8c0d2924) = CONCAT44(DAT_8c0d292c,DAT_8c0d2928);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar4 = *(double **)(ar4 + 0x10);
    pdVar7 = DAT_8c0d292c;
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x10);
    pdVar4 = DAT_8c0d292c;
    pdVar7 = _DAT_8c0d2930;
  }
  if (in_FPSCR_PR != '\0' || (float)pdVar7 <= (float)pdVar4) {
    *(undefined4 *)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  uVar2 = (*(code *)PTR_rand_8c0d2908)(a4,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x10) = uVar2;
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)*(int *)((int)puVar3 + -0x10),in_fr3);
  }
  else {
    dVar8 = (double)*(int *)((int)puVar3 + -0x10);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c0d290c,pdVar4);
  }
  else {
    dVar9 = (double)CONCAT44(DAT_8c0d2910,DAT_8c0d290c);
  }
  fVar5 = (float)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / fVar5,SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 / dVar9;
  }
  dVar11 = in_dr6;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(fVar5,(int)((ulonglong)in_dr6 >> 0x20));
    dVar11 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar9,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar9 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x20),fVar5);
  }
  else {
    dVar8 = *(double *)((int)puVar3 + -0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar8 + dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)_DAT_8c0d2930 = fVar5;
  }
  else {
    *_DAT_8c0d2930 = dVar11;
  }
  uVar2 = (*(code *)PTR_rand_8c0d2908)(a4,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x14) = uVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d290c,(float)*(int *)((int)puVar3 + -0x14));
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c0d2910,DAT_8c0d290c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44((float)((ulonglong)in_dr6 >> 0x20) * fVar5,SUB84(in_dr6,0));
  }
  else {
    fVar5 = SUB84(dVar8 / dVar8,0);
    dVar8 = in_dr6 * (dVar8 / dVar8);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x20),fVar5);
  }
  else {
    dVar9 = *(double *)((int)puVar3 + -0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + (float)((ulonglong)dVar9 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 + dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)DAT_8c0d2934 = (int)((ulonglong)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44(DAT_8c0d2914,SUB84(dVar9,0));
  }
  else {
    *DAT_8c0d2934 = dVar8;
    dVar8 = (double)CONCAT44(DAT_8c0d2918,DAT_8c0d2914);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = SUB84(dVar10,0) < (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    bVar12 = dVar10 < dVar8;
  }
  if (bVar12) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar3 + -0x1c) = 0;
      *(undefined4 *)DAT_8c0d2934 = *(undefined4 *)((int)puVar3 + -0x1c);
      *(float *)_DAT_8c0d2930 = *(float *)((int)puVar3 + -0x1c);
    }
    else {
      *(ulonglong *)((int)puVar3 + -0x1c) = (ulonglong)dVar8 & 0xffffffff;
      *DAT_8c0d2934 = *(double *)((int)puVar3 + -0x1c);
      *_DAT_8c0d2930 = *(double *)((int)puVar3 + -0x1c);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d2938,*(float *)_DAT_8c0d2930);
  }
  else {
    dVar11 = *_DAT_8c0d2930;
    dVar8 = (double)CONCAT44(PTR_FUN_8c0d293c,DAT_8c0d2938);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar8 / dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x28) = -fVar5;
  }
  else {
    *(double *)(ar4 + 0x28) = dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
    dVar8 = (double)CONCAT44(DAT_8c0d2938,*(undefined4 *)DAT_8c0d2934);
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)-fVar5;
    dVar11 = *DAT_8c0d2934;
    dVar8 = (double)CONCAT44(PTR_FUN_8c0d293c,DAT_8c0d2938);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar8 / dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x30) = -fVar5;
  }
  else {
    *(double *)(ar4 + 0x30) = dVar11;
  }
  (*(code *)PTR_FUN_8c0d293c)(ar4 + 0x18,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d2940,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    dVar11 = *(double *)(ar4 + 0x10);
    dVar8 = (double)CONCAT44(DAT_8c0d2944,DAT_8c0d2940);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x38) = fVar5;
    dVar8 = (double)CONCAT44(DAT_8c0d2944,fVar5);
  }
  else {
    *(double *)(ar4 + 0x38) = dVar11;
    dVar8 = (double)CONCAT44(DAT_8c0d2948,DAT_8c0d2944);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar10 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x3c) = fVar5;
    dVar8 = (double)CONCAT44(DAT_8c0d2948,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    *(double *)(ar4 + 0x3c) = in_xd14;
    dVar8 = (double)CONCAT44(_FUN_8c0d294c,DAT_8c0d2948);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar8,0),SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 / dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x40) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x40) = dVar8;
  }
  *(undefined4 *)(ar4 + 0x7c) = 0;
  return 0x7c;
}



/* FUN_8c0d294c @ 8c0d294c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d2a38) */
/* WARNING: Removing unreachable block (ram,0x8c0d2b26) */
/* WARNING: Removing unreachable block (ram,0x8c0d2a48) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d294c(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *a5;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  double in_dr0;
  ulonglong uVar9;
  undefined *puVar11;
  double dVar10;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar12;
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
  *(undefined4 *)(puVar4 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = (float)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = in_xd14;
  }
  (*(code *)PTR_Vec3_ctor_zero_8c0d298c)(puVar4 + -0x18,ar5,ar6,ar7);
  a5 = ar4 + 0x18;
  puVar3 = ar4;
  (*(code *)PTR_FUN_8c0d2990)(ar4,a5,ar6,ar7);
  fVar6 = SUB84(in_dr0,0);
  iVar1 = *(int *)(ar4 + 0x74);
  if (iVar1 == 0) {
    puVar3 = ar4 + 0x28;
    (*(code *)PTR_FUN_8c0d29c8)(ar4 + 0x18,puVar3,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
        if (in_FPSCR_SZ == '\0') {
          fVar6 = *(float *)(ar4 + 0x18);
        }
        if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x18) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x18) = (ulonglong)(uint)fVar6;
          }
        }
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x18);
      }
      if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x18) = (ulonglong)(uint)fVar6;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + 0x30);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar6) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x30);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
        if (in_FPSCR_SZ == '\0') {
          fVar6 = *(float *)(ar4 + 0x20);
        }
        if (in_FPSCR_PR == '\0' && 0.0 < fVar6) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x20) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x20) = (ulonglong)(uint)fVar6;
          }
        }
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x20);
      }
      if (in_FPSCR_PR == '\0' && fVar6 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x20) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x20) = (ulonglong)(uint)fVar6;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(ar4 + 0x18);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar6;
    if (fVar6 == 0.0) {
      if (in_FPSCR_SZ == '\0') {
        fVar6 = *(float *)(ar4 + 0x20);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar6;
      if (fVar6 == 0.0) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(DAT_8c0d2ab4,*(undefined4 *)(ar4 + 0x10));
        }
        else {
          in_dr0 = (double)CONCAT44(PTR_FUN_8c0d2ab8,DAT_8c0d2ab4);
        }
        if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            uVar2 = (undefined4)*(ulonglong *)(ar4 + 0x38);
            uVar9 = CONCAT44(uVar2,SUB84(in_dr0,0));
            *(undefined4 *)(ar4 + 0x18) = uVar2;
          }
          else {
            uVar9 = *(ulonglong *)(ar4 + 0x38);
            *(ulonglong *)(ar4 + 0x18) = uVar9;
          }
          *(undefined1 **)(puVar4 + -100) = puVar4 + -0x28;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)(uVar9 & 0xffffffff);
          }
          else {
            in_dr0 = *(double *)(ar4 + 0x40);
          }
          (*(code *)PTR_FUN_8c0d2ab8)(ar4 + 0x18,puVar3,ar6,ar7);
          (*(code *)PTR_Vec3_assign_8c0d2abc)(ar4 + 0x18,puVar4 + -0x28,ar6,ar7);
          (*(code *)PTR_Vec3_dtor_8c0d2ac0)(puVar4 + -0x28,0xffffffff,ar6,ar7);
        }
        *(undefined4 *)(ar4 + 0x74) = 1;
      }
    }
  }
  else if (iVar1 == 1) {
    puVar5 = DAT_8c0d2bb8;
    puVar11 = PTR_FUN_8c0d2bbc;
    if (in_FPSCR_SZ == '\0') {
      puVar5 = *(undefined **)(ar4 + 0x10);
      puVar11 = DAT_8c0d2bb8;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar5 < (float)puVar11) {
      *(undefined1 **)(puVar4 + -100) = puVar4 + -0x38;
      (*(code *)PTR_FUN_8c0d2bbc)(ar4 + 0x18,a5,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0d2bc0)(ar4 + 0x18,puVar4 + -0x38,ar6,ar7);
      a5 = (undefined1 *)0xffffffff;
      puVar3 = puVar4 + -0x38;
      (*(code *)PTR_Vec3_dtor_8c0d2bc4)(puVar3,0xffffffff,ar6,ar7);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),puVar5);
    }
    else {
      in_dr0 = *(double *)(ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar12 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
    }
    else {
      bVar12 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (!bVar12) {
      *(undefined4 *)(ar4 + 0x7c) = 0;
      uVar2 = (*(code *)PTR_rand_8c0d2bc8)(puVar3,a5,ar6,ar7);
      *(undefined4 *)(puVar4 + -0x4c) = uVar2;
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0d2bcc,(float)*(int *)(puVar4 + -0x4c));
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c0d2bd0,DAT_8c0d2bcc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar10 / dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c0d2bd0,fVar6);
      }
      else {
        dVar10 = (double)CONCAT44(DAT_8c0d2bd4,DAT_8c0d2bd0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
        iVar1 = (int)fVar6;
      }
      else {
        fVar6 = SUB84(dVar10 * dVar10,0);
        iVar1 = (int)(dVar10 * dVar10);
      }
      *(int *)(ar4 + 0x78) = iVar1 + 0xf;
      fVar7 = DAT_8c0d2bd8;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = fVar6;
      }
      (*(code *)PTR_FUN_8c0d2bdc)(puVar4 + -0x18,a5,ar6,ar7);
      uVar2 = (*(code *)PTR_Vec3_length_8c0d2be0)(puVar4 + -0x18,a5,ar6,ar7);
      *(undefined4 *)(puVar4 + -0x50) = uVar2;
      *(undefined1 **)(puVar4 + -100) = puVar4 + -0x48;
      (*(code *)PTR_Vec3_scale_8c0d2be8)(*(undefined4 *)(puVar4 + -0x50),PTR_DAT_8c0d2be4,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c0d2bc0)(puVar4 + -0x18,puVar4 + -0x48,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0d2bc4)(puVar4 + -0x48,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(puVar4 + -0x18);
        in_dr0 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x10),fVar7);
        *(undefined4 *)(ar4 + 0x20) = *(undefined4 *)(puVar4 + -0x10);
      }
      else {
        *(undefined8 *)(ar4 + 0x18) = *(undefined8 *)(puVar4 + -0x18);
        in_dr0 = *(double *)(puVar4 + -0x10);
        *(double *)(ar4 + 0x20) = in_dr0;
      }
      *(undefined4 *)(ar4 + 0x74) = 2;
    }
  }
  else if ((iVar1 == 2) && (*(int *)(ar4 + 0x78) < *(int *)(ar4 + 0x7c))) {
    (*(code *)PTR_FUN_8c0d2c74)(ar4,a5,ar6,ar7);
  }
  uVar8 = SUB84(in_dr0,0);
  *(undefined1 **)(puVar4 + -0x54) = ar4;
  *(int *)(*(int *)(puVar4 + -0x54) + 0x7c) = *(int *)(*(int *)(puVar4 + -0x54) + 0x7c) + 1;
  uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d2c78)(*(undefined4 *)(ar4 + 0x7c),3,ar6,ar7)
  ;
  *(undefined4 *)(puVar4 + -0x58) = uVar2;
  if (*(int *)(puVar4 + -0x58) == 0) {
    *(undefined1 **)(puVar4 + -0x5c) = ar4;
    *(undefined4 *)(puVar4 + -0x60) = *(undefined4 *)(DAT_8c0d2c7c + *(int *)(puVar4 + -0x5c));
    *(int *)(DAT_8c0d2c7c + *(int *)(puVar4 + -0x5c)) = *(int *)(puVar4 + -0x60) + 1;
    if (3 < *(int *)(puVar4 + -0x60) + 1) {
      *(undefined4 *)(ar4 + DAT_8c0d2c7c) = 0;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),uVar8);
  }
  else {
    dVar10 = *(double *)(ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = (float)((ulonglong)dVar10 >> 0x20) < in_fr15;
  }
  else {
    bVar12 = dVar10 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (!bVar12) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 4) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + 4) = in_dr4;
    }
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c0d2c80)(puVar4 + -0x18,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d2c84 @ 8c0d2c84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d2c84(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3;
  double in_dr14;
  double dVar6;
  double in_xd0;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
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
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ec8 + 4);
  *(undefined4 *)((int)puVar2 + -0x18) = *(undefined4 *)PTR_DAT_8c0d2ec8;
  *(undefined4 *)((int)puVar2 + -0x14) = uVar1;
  *(undefined4 *)((int)puVar2 + -0x10) = *(undefined4 *)(PTR_DAT_8c0d2ec8 + 8);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + -0x18) = *(undefined4 *)ar4;
    *(undefined4 *)((int)puVar2 + -0x14) = *(undefined4 *)((int)ar4 + 4);
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),in_fr1);
    *(undefined4 *)((int)puVar2 + -0x10) = *(undefined4 *)(ar4 + 1);
  }
  else {
    *(double *)((int)puVar2 + -0x18) = *ar4;
    *(undefined8 *)((int)puVar2 + -0x14) = *(undefined8 *)((int)ar4 + 4);
    dVar4 = ar4[1];
    *(double *)((int)puVar2 + -0x10) = dVar4;
  }
  fVar3 = SUB84(dVar4,0);
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ecc + 4);
  *(undefined4 *)((int)puVar2 + -0x28) = *(undefined4 *)PTR_DAT_8c0d2ecc;
  *(undefined4 *)((int)puVar2 + -0x24) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ecc + 0xc);
  *(undefined4 *)((int)puVar2 + -0x20) = *(undefined4 *)(PTR_DAT_8c0d2ecc + 8);
  *(undefined4 *)((int)puVar2 + -0x1c) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed0 + 4);
  *(undefined4 *)((int)puVar2 + -0x38) = *(undefined4 *)PTR_DAT_8c0d2ed0;
  *(undefined4 *)((int)puVar2 + -0x34) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed0 + 0xc);
  *(undefined4 *)((int)puVar2 + -0x30) = *(undefined4 *)(PTR_DAT_8c0d2ed0 + 8);
  *(undefined4 *)((int)puVar2 + -0x2c) = uVar1;
  *(undefined1 **)((int)puVar2 + -0x38) = (undefined1 *)((int)puVar2 + -0x18);
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 4);
  *(undefined4 *)((int)puVar2 + -0x68) = *(undefined4 *)PTR_DAT_8c0d2ed4;
  *(undefined4 *)((int)puVar2 + -100) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0xc);
  *(undefined4 *)((int)puVar2 + -0x60) = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 8);
  *(undefined4 *)((int)puVar2 + -0x5c) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x14);
  *(undefined4 *)((int)puVar2 + -0x58) = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x10);
  *(undefined4 *)((int)puVar2 + -0x54) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x1c);
  *(undefined4 *)((int)puVar2 + -0x50) = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x18);
  *(undefined4 *)((int)puVar2 + -0x4c) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x24);
  *(undefined4 *)((int)puVar2 + -0x48) = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x20);
  *(undefined4 *)((int)puVar2 + -0x44) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x2c);
  *(undefined4 *)((int)puVar2 + -0x40) = *(undefined4 *)(PTR_DAT_8c0d2ed4 + 0x28);
  *(undefined4 *)((int)puVar2 + -0x3c) = uVar1;
  if (in_FPSCR_SZ == '\0') {
    fVar3 = *(float *)((int)ar4 + 4);
  }
  else {
    in_xd0 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = fVar3 - 1.0;
  }
  else {
    fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar2 + -100) = fVar3;
    fVar3 = *(float *)((int)ar4 + 4);
  }
  else {
    *(double *)((int)puVar2 + -100) = in_xd0;
    in_xd0 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = fVar3 - 1.0;
  }
  else {
    fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar2 + -0x58) = fVar3;
    fVar3 = *(float *)((int)ar4 + 4);
  }
  else {
    *(double *)((int)puVar2 + -0x58) = in_xd0;
    in_xd0 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = fVar3 - 1.0;
  }
  else {
    fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar2 + -0x4c) = fVar3;
    fVar3 = *(float *)((int)ar4 + 4);
  }
  else {
    *(double *)((int)puVar2 + -0x4c) = in_xd0;
    in_xd0 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = fVar3 - 1.0;
  }
  else {
    fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar2 + -0x40) = fVar3;
  }
  else {
    *(double *)((int)puVar2 + -0x40) = in_xd0;
  }
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed8 + 4);
  *(undefined4 *)((int)puVar2 + -0x88) = *(undefined4 *)PTR_DAT_8c0d2ed8;
  *(undefined4 *)((int)puVar2 + -0x84) = uVar1;
  uVar1 = *(undefined4 *)(PTR_DAT_8c0d2ed8 + 0xc);
  *(undefined4 *)((int)puVar2 + -0x80) = *(undefined4 *)(PTR_DAT_8c0d2ed8 + 8);
  *(undefined4 *)((int)puVar2 + -0x7c) = uVar1;
  *(undefined1 **)((int)puVar2 + -0x88) = (undefined1 *)((int)puVar2 + -0x68);
  *(undefined1 **)((int)puVar2 + -0x80) = (undefined1 *)((int)puVar2 + -0x78);
  if (*(int *)((int)ar4 + 0x14) == 0) {
    uVar1 = (*(code *)PTR_FUN_8c0d2edc)((undefined1 *)((int)puVar2 + -0x38),1,0,ar7);
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 2));
      dVar4 = (double)CONCAT44(DAT_8c0d2ee0,fVar3);
    }
    else {
      in_xd14 = ar4[2];
      dVar4 = (double)CONCAT44(DAT_8c0d2ee4,DAT_8c0d2ee0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) / (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar6 = in_dr14 / dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c0d2ee4),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)((int)ar4 + DAT_8c0d2ee4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                               SUB84(dVar6,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar6 = dVar6 * dVar4;
    }
    if (*(int *)((int)ar4 + 0x74) == 2) {
      fVar3 = SUB84(dVar6,0);
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)ar4,in_fr3);
        dVar5 = (double)CONCAT44(fVar3,DAT_8c0d2ee8);
      }
      else {
        dVar4 = *ar4;
        in_xd0 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
        dVar5 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x68) = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar4,0));
        dVar5 = (double)CONCAT44(fVar3,DAT_8c0d2ee8);
      }
      else {
        *(double *)((int)puVar2 + -0x68) = dVar4;
        dVar4 = ar4[1];
        in_xd0 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
        dVar5 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                                 (float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 + dVar5 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x60) = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(*(undefined4 *)ar4,SUB84(dVar4,0));
        dVar5 = (double)CONCAT44(fVar3,DAT_8c0d2ee8);
      }
      else {
        *(double *)((int)puVar2 + -0x60) = dVar4;
        dVar4 = *ar4;
        in_xd0 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
        dVar5 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x5c) = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar4,0));
        dVar5 = (double)CONCAT44(fVar3,DAT_8c0d2ee8);
      }
      else {
        *(double *)((int)puVar2 + -0x5c) = dVar4;
        dVar4 = ar4[1];
        in_xd0 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
        dVar5 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x54) = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(*(undefined4 *)ar4,SUB84(dVar4,0));
        dVar5 = (double)CONCAT44(fVar3,DAT_8c0d2ee8);
      }
      else {
        *(double *)((int)puVar2 + -0x54) = dVar4;
        dVar4 = *ar4;
        in_xd0 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
        dVar5 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                                 (float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 + dVar5 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x50) = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar4,0));
        dVar5 = (double)CONCAT44(fVar3,DAT_8c0d2ee8);
      }
      else {
        *(double *)((int)puVar2 + -0x50) = dVar4;
        dVar4 = ar4[1];
        in_xd0 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
        dVar5 = in_xd14;
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) -
                                 (float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5 * dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x48) = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(*(undefined4 *)ar4,SUB84(dVar4,0));
        in_xd14 = (double)CONCAT44(fVar3,DAT_8c0d2ee8);
      }
      else {
        *(double *)((int)puVar2 + -0x48) = dVar4;
        dVar4 = *ar4;
        in_xd0 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                                 (float)((ulonglong)in_xd14 >> 0x20) * SUB84(in_xd14,0),
                                 SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 + in_xd14 * in_xd14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x44) = (int)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(DAT_8c0d2ee8,*(undefined4 *)(ar4 + 1));
      }
      else {
        *(double *)((int)puVar2 + -0x44) = dVar4;
        in_xd0 = ar4[1];
        dVar4 = (double)CONCAT44(PTR_FUN_8c0d2eec,DAT_8c0d2ee8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) + fVar3 * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar6 * dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar2 + -0x3c) = fVar3;
      }
      else {
        *(double *)((int)puVar2 + -0x3c) = in_xd0;
      }
      *(undefined2 *)((int)puVar2 + -0x78) = 0;
      *(undefined2 *)((int)puVar2 + -0x76) = 0;
      *(undefined2 *)((int)puVar2 + -0x74) = 0;
      *(undefined2 *)((int)puVar2 + -0x72) = 0x7f;
      *(undefined2 *)((int)puVar2 + -0x70) = 0x7f;
      *(undefined2 *)((int)puVar2 + -0x6e) = 0x7f;
      *(undefined2 *)((int)puVar2 + -0x6c) = 0x7f;
      *(undefined2 *)((int)puVar2 + -0x6a) = 0;
      (*(code *)PTR_FUN_8c0d2eec)(ar5,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0d2ef0)(ar5,0,ar6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c0d2ef8)((undefined1 *)((int)puVar2 + -0x88),4,DAT_8c0d2ef4,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c0d2efc)(ar4 + 9,ar5,ar6,ar7);
      uVar1 = (**(code **)(*(int *)(ar4 + 9) + 0x1c))
                        (ar4 + 9,*(undefined4 *)(DAT_8c0d2f00 + (int)ar4),ar6,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c0d2f04 @ 8c0d2f04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d2f04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  puVar1 = (undefined8 *)(ar4 + 0x10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar1 = in_fr4;
    *(undefined4 *)(ar4 + 0x14) = in_fr5;
  }
  else {
    *puVar1 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x14) = in_xd4;
  }
  return puVar1;
}



/* FUN_8c0d2f14 @ 8c0d2f14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d2f14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  undefined8 uVar2;
  ulonglong uVar3;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0d2fa4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_vec3_clear_8c0d2fa8)(ar4 + 0x18,ar5,ar6,ar7);
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = uVar2;
  }
  (*(code *)PTR_vec3_clear_8c0d2fa8)(ar4 + 0x28,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44((undefined4)DAT_8c0d2fac,(int)uVar2);
    *(undefined4 *)(ar4 + 0x10) = (undefined4)DAT_8c0d2fac;
  }
  else {
    uVar3 = CONCAT44(DAT_8c0d2fac._4_4_,(undefined4)DAT_8c0d2fac);
    *(ulonglong *)(ar4 + 0x10) = uVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x3c) = 0;
    *(undefined4 *)(ar4 + 0x40) = DAT_8c0d2fac._4_4_;
    uVar2 = CONCAT44(DAT_8c0d2fb4,(int)uVar3);
    *(undefined4 *)(ar4 + 0x38) = DAT_8c0d2fb4;
  }
  else {
    *(ulonglong *)(ar4 + 0x3c) = uVar3 & 0xffffffff;
    *(ulonglong *)(ar4 + 0x40) = CONCAT44(DAT_8c0d2fb4,DAT_8c0d2fac._4_4_);
    uVar2 = CONCAT44(DAT_8c0d2fb8,DAT_8c0d2fb4);
    *(undefined8 *)(ar4 + 0x38) = uVar2;
  }
  *(undefined4 *)(ar4 + 0x14) = 1;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(DAT_8c0d2fb8 + ar4) = 0;
  iVar1 = DAT_8c0d2fbc;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d2fbc) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d2fbc) = CONCAT44(0x3f800000,(int)uVar2);
  }
  return iVar1;
}



/* FUN_8c0d2fc0 @ 8c0d2fc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d2fc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  *DAT_8c0d2fd4 = ar4;
  DAT_8c0d2fd4[1] = ar4;
  DAT_8c0d2fd4[2] = ar4;
  puVar1 = DAT_8c0d2fd4;
  DAT_8c0d2fd4[3] = ar4;
  return puVar1;
}



/* FUN_8c0d2fd8 @ 8c0d2fd8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d2fd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_fr1;
  undefined8 uVar6;
  ulonglong uVar7;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0d321c)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d3220)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d3220)(ar4 + 0x1c,ar5,ar6,ar7);
  uVar4 = 4;
  puVar1 = PTR_FUN_8c0d3220;
  puVar3 = PTR_free_if_nonnull_wrap_016bfc_8c0d3224;
  (*(code *)PTR_FUN_8c0d3228)
            (ar4 + 0x20,PTR_FUN_8c0d3220,PTR_free_if_nonnull_wrap_016bfc_8c0d3224,4);
  (*(code *)PTR_FUN_8c0d322c)(ar4 + 0x34,puVar1,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0d321c)(ar4 + DAT_8c0d3230,puVar1,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0d3238)(ar4 + DAT_8c0d3234,puVar1,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0d3220)(ar4 + DAT_8c0d323c,puVar1,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0d3228)(ar4 + DAT_8c0d3248,PTR_FUN_8c0d3244,PTR_FUN_8c0d3240,0x44);
  (*(code *)PTR_FUN_8c0d3228)
            (ar4 + DAT_8c0d3254,PTR_FUN_8c0d3250,PTR_free_if_nonnull_wrap_0cffc8_8c0d324c,0x18);
  puVar1 = PTR_FUN_8c0d3264;
  puVar3 = PTR_FUN_8c0d3260;
  uVar4 = DAT_8c0d325c;
  (*(code *)PTR_FUN_8c0d3228)(ar4 + DAT_8c0d3268,PTR_FUN_8c0d3264,PTR_FUN_8c0d3260,DAT_8c0d325c);
  (*(code *)PTR_FUN_8c0d3270)(ar4 + DAT_8c0d326c,puVar1,puVar3,uVar4);
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(_DAT_8c0d3274,in_fr1);
    *(undefined4 *)(ar4 + 0x18) = _DAT_8c0d3274;
  }
  else {
    uVar6 = CONCAT44(PTR_DAT_8c0d3278,_DAT_8c0d3274);
    *(undefined8 *)(ar4 + 0x18) = uVar6;
  }
  uVar5 = (undefined4)uVar6;
  (*(code *)PTR_FUN_8c0d327c)(ar4 + 0x20,PTR_DAT_8c0d3278,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0d327c)(ar4 + 0x24,PTR_DAT_8c0d3280,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0d327c)(ar4 + 0x28,PTR_DAT_8c0d3284,puVar3,uVar4);
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0d328c,uVar5);
    *(undefined4 *)(ar4 + DAT_8c0d3288) = DAT_8c0d328c;
  }
  else {
    uVar7 = CONCAT44(_DAT_8c0d3290,DAT_8c0d328c);
    *(ulonglong *)(ar4 + DAT_8c0d3288) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + _DAT_8c0d3290) = 0;
  }
  else {
    *(ulonglong *)(ar4 + _DAT_8c0d3290) = uVar7 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0d328c,(int)uVar7);
    *(undefined4 *)(ar4 + DAT_8c0d3294) = DAT_8c0d328c;
  }
  else {
    uVar6 = CONCAT44(_DAT_8c0d3290,DAT_8c0d328c);
    *(undefined8 *)(ar4 + DAT_8c0d3294) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0d328c,(int)uVar6);
    *(undefined4 *)(ar4 + DAT_8c0d3298) = DAT_8c0d328c;
  }
  else {
    uVar7 = CONCAT44(_DAT_8c0d3290,DAT_8c0d328c);
    *(ulonglong *)(ar4 + DAT_8c0d3298) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d329c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d329c) = uVar7 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0d32a4,(int)uVar7);
    *(undefined4 *)(ar4 + DAT_8c0d32a0) = DAT_8c0d32a4;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0d32a8,DAT_8c0d32a4);
    *(undefined8 *)(ar4 + DAT_8c0d32a0) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0d32a4,(int)uVar6);
    *(undefined4 *)(ar4 + DAT_8c0d32a8) = DAT_8c0d32a4;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0d32a8,DAT_8c0d32a4);
    *(ulonglong *)(ar4 + DAT_8c0d32a8) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d32ac) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d32ac) = uVar7 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(DAT_8c0d32a4,(int)uVar7);
    *(undefined4 *)(ar4 + DAT_8c0d32b0) = DAT_8c0d32a4;
  }
  else {
    uVar6 = CONCAT44(DAT_8c0d32a8,DAT_8c0d32a4);
    *(undefined8 *)(ar4 + DAT_8c0d32b0) = uVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar7 = CONCAT44(DAT_8c0d32a4,(int)uVar6);
    *(undefined4 *)(ar4 + DAT_8c0d32b4) = DAT_8c0d32a4;
  }
  else {
    uVar7 = CONCAT44(DAT_8c0d32a8,DAT_8c0d32a4);
    *(ulonglong *)(ar4 + DAT_8c0d32b4) = uVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d32b8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d32b8) = uVar7 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d32bc) = DAT_8c0d328c;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d32bc) = CONCAT44(_DAT_8c0d3290,DAT_8c0d328c);
  }
  *(undefined2 *)(DAT_8c0d32c0 + ar4) = 0;
  *(short *)(DAT_8c0d32c4 + ar4) = (short)DAT_8c0d32c8;
  *(undefined2 *)(DAT_8c0d32cc + ar4) = 0;
  *(undefined2 *)(DAT_8c0d32d0 + ar4) = 0;
  *(short *)(DAT_8c0d32d4 + ar4) = (short)DAT_8c0d32c8;
  *(undefined2 *)(DAT_8c0d32d8 + ar4) = 0;
  *(short *)(DAT_8c0d32dc + ar4) = (short)DAT_8c0d32c8;
  *(short *)(DAT_8c0d32e0 + ar4) = (short)DAT_8c0d32c8;
  uVar5 = 4;
  (*(code *)PTR_FUN_8c0d32e4)(ar4 + DAT_8c0d3234,ar4 + DAT_8c0d3288,0,4);
  uVar4 = 4;
  iVar2 = ar4 + DAT_8c0d32c0;
  (*(code *)PTR_FUN_8c0d32e8)(ar4 + DAT_8c0d3234,iVar2,4,uVar5);
  (*(code *)PTR_FUN_8c0d32ec)(ar4 + DAT_8c0d3234,iVar2,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0d32f0)(ar4 + DAT_8c0d3234,iVar2,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0d32f4)(ar4 + DAT_8c0d3234,iVar2,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0d32f8)(ar4,iVar2,uVar4,uVar5);
  for (iVar2 = 0; iVar2 < DAT_8c0d3258; iVar2 = iVar2 + 1) {
    (*(code *)PTR_FUN_8c0d3300)
              (iVar2 * 0x88 + ar4 + DAT_8c0d3268,ar4 + DAT_8c0d326c,PTR_DAT_8c0d32fc,uVar5);
  }
  return ar4;
}



/* FUN_8c0d3304 @ 8c0d3304 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d3304(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c0d3360)(ar4 + 0x48,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0d3364)(ar4 + 0x28,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0d3364)(ar4 + 0x18,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0d3364)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d3368)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d336c @ 8c0d336c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d336c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0d33b0)(ar4 + 0x10,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0d33b4)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d33b8)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d33bc @ 8c0d33bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d33bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d33e4)(ar4,PTR_s_GRAPHICS_COMMON_8c0d33dc + DAT_8c0d33e0,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_COMMON_0d33f4 @ 8c0d33e8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d35f6) */
/* WARNING: Removing unreachable block (ram,0x8c0d3618) */
/* WARNING: Removing unreachable block (ram,0x8c0d3634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_COMMON_0d33f4(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *a5;
  int iVar4;
  undefined *puVar5;
  undefined *a6;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double in_dr2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = 0;
  uStack_24 = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = _DAT_8c0d36d4;
  }
  else {
    *ar4 = (double)CONCAT44(PTR_s_GRAPHICS_COMMON_8c0d36d8,_DAT_8c0d36d4);
  }
  iVar1 = (*(code *)PTR_FUN_8c0d36e4)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36e0,
                     PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36dc,auStack_20);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d36ec)
              (PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36e0,
               PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36e8,0,2);
  }
  puVar6 = &uStack_24;
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36dc;
  iVar1 = (*(code *)PTR_FUN_8c0d36f0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36e0,puVar5,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    puVar5 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d36ec)
              (PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36e0,
               PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36f4,0,2);
  }
  (*(code *)PTR_FUN_8c0d36f8)(ar4 + 2,auStack_20[0],puVar5,puVar6);
  iVar1 = (*(code *)PTR_FUN_8c0d36e4)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36fc,
                     PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36dc,auStack_20);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d36ec)
              (PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36fc,
               PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36e8,0,2);
  }
  puVar6 = &uStack_24;
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36dc;
  iVar1 = (*(code *)PTR_FUN_8c0d36f0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36fc,puVar5,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    puVar5 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d36ec)
              (PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36fc,
               PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36f4,0,2);
  }
  uVar3 = auStack_20[0];
  (*(code *)PTR_FUN_8c0d36f8)((int)ar4 + 0x1c,auStack_20[0],puVar5,puVar6);
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + DAT_8c0d3700 + iVar1 * 0xc) = 0;
  }
  uVar2 = (*(code *)PTR_get_field_4_0253e4_8c0d3708)((int)ar4 + DAT_8c0d3704,uVar3,puVar5,puVar6);
  uVar7 = 1;
  iVar1 = (int)ar4 + DAT_8c0d3710;
  uVar3 = DAT_8c0d370c;
  (*(code *)PTR_FUN_8c0d3714)(uVar2,iVar1,DAT_8c0d370c,1);
  uVar3 = (*(code *)PTR_get_field_4_0253e4_8c0d3708)((int)ar4 + DAT_8c0d3704,iVar1,uVar3,uVar7);
  a6 = PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d36dc;
  puVar5 = PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d3718;
  iVar1 = (*(code *)PTR_FUN_8c0d371c)(ar5,puVar5,a6,uVar3);
  if (iVar1 == 0) {
    uVar3 = 2;
    a6 = (undefined *)0x0;
    puVar5 = PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d3720;
    (*(code *)PTR_report_error_message_8c0d36ec)
              (PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d3724,puVar5,0,2);
  }
  iVar1 = 0;
  do {
    uVar2 = SUB84(in_dr2,0);
    if (0x59 < iVar1) {
LAB_8c0d3658:
      for (iVar1 = 0; iVar1 < DAT_8c0d3754; iVar1 = iVar1 + 1) {
        (*(code *)PTR_FUN_8c0d3750)((int)ar4 + DAT_8c0d374c + iVar1 * 0x88,puVar5,a6,uVar3);
      }
      for (iVar1 = 0; iVar1 < 0x3c; iVar1 = iVar1 + 1) {
        uVar7 = 1;
        uVar2 = ar6;
        (*(code *)PTR_FUN_8c0d3760)(ar4,1,ar6,uVar3);
        (*(code *)PTR_FUN_8c0d3764)(ar4,uVar7,uVar2,uVar3);
      }
      (*(code *)PTR_s_GRAPHICS_ENV_0d39ea_8c0d376c)
                (ar4,ar5,PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d3768,uVar3);
      return 1;
    }
    uVar7 = DAT_8c0d3728;
    a5 = (undefined *)(*(code *)PTR_FUN_8c0d372c)(DAT_8c0d3728,puVar5,a6,uVar3);
    if (a5 == (undefined *)0x0) {
      uVar3 = 2;
      a6 = (undefined *)0x1;
      puVar5 = PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d3730;
      (*(code *)PTR_report_error_message_8c0d36ec)
                (PTR_s_GRAPHICS_COMMON_8c0d36d8 + DAT_8c0d3734,puVar5,1,2);
      goto LAB_8c0d3658;
    }
    iVar4 = (*(code *)PTR_rand_8c0d3738)(uVar7,puVar5,a6,uVar3);
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d373c,(float)iVar4);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d3740,DAT_8c0d373c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d3740,fVar8);
    }
    else {
      dVar9 = (double)CONCAT44(_DAT_8c0d3744,DAT_8c0d3740);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(a5 + 8) = fVar8;
    }
    else {
      *(undefined8 *)(a5 + 8) = in_xd0;
    }
    iVar4 = (*(code *)PTR_rand_8c0d3738)(uVar7,puVar5,a6,uVar3);
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar2);
    }
    else {
      in_dr2 = *ar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d373c,(float)iVar4);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d3740,DAT_8c0d373c);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(a5 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(a5 + 0xc) = in_dr2;
    }
    iVar4 = (*(code *)PTR_rand_8c0d3738)(uVar7,puVar5,a6,uVar3);
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d373c,(float)iVar4);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d3740,DAT_8c0d373c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(_DAT_8c0d3744,fVar8);
    }
    else {
      dVar9 = (double)CONCAT44(PTR_FUN_8c0d3748,_DAT_8c0d3744);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(a5 + 0x10) = fVar8;
    }
    else {
      *(undefined8 *)(a5 + 0x10) = in_xd0;
    }
    (*(code *)PTR_FUN_8c0d3748)((int)ar4 + 0x34,a5,a6,uVar3);
    iVar1 = iVar1 + 1;
    puVar5 = a5;
  } while( true );
}



/* s_GRAPHICS_COMMON_0d377a @ 8c0d3770 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d38f0) */
/* WARNING: Removing unreachable block (ram,0x8c0d3918) */
/* WARNING: Removing unreachable block (ram,0x8c0d3934) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_COMMON_0d377a(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  int iVar2;
  undefined4 a4;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  double in_dr2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  aiStack_1c[0] = 0;
  uStack_20 = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = _DAT_8c0d3984;
  }
  else {
    *ar4 = (double)CONCAT44(PTR_s_GRAPHICS_COMMON_8c0d3988,_DAT_8c0d3984);
  }
  iVar1 = (*(code *)PTR_FUN_8c0d3994)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d3990,
                     PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d398c,aiStack_1c);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d399c)
              (PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d3990,
               PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d3998,0,2);
  }
  puVar4 = &uStack_20;
  puVar3 = PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d398c;
  iVar1 = (*(code *)PTR_FUN_8c0d39a0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d3990,puVar3,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    puVar3 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d399c)
              (PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d3990,
               PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39a4,0,2);
  }
  (*(code *)PTR_FUN_8c0d39a8)(ar4 + 2,aiStack_1c[0],puVar3,puVar4);
  iVar1 = (*(code *)PTR_FUN_8c0d3994)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39ac,
                     PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d398c,aiStack_1c);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d399c)
              (PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39ac,
               PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d3998,0,2);
  }
  puVar4 = &uStack_20;
  puVar3 = PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d398c;
  iVar1 = (*(code *)PTR_FUN_8c0d39a0)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39ac,puVar3,puVar4);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)0x2;
    puVar3 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d399c)
              (PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39ac,
               PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39a4,0,2);
  }
  iVar1 = aiStack_1c[0];
  (*(code *)PTR_FUN_8c0d39a8)((int)ar4 + 0x1c,aiStack_1c[0],puVar3,puVar4);
  iVar5 = 0;
  do {
    uVar8 = SUB84(in_dr2,0);
    if (0x31 < iVar5) {
LAB_8c0d395e:
      (*(code *)PTR_s_GRAPHICS_ENV_0d39ea_8c0d39e0)
                (ar4,ar5,PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39dc,puVar4);
      return 1;
    }
    a4 = DAT_8c0d39b0;
    a5 = (*(code *)PTR_FUN_8c0d39b4)(DAT_8c0d39b0,iVar1,puVar3,puVar4);
    if (a5 == 0) {
      puVar4 = (undefined4 *)0x2;
      (*(code *)PTR_report_error_message_8c0d399c)
                (PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39bc,
                 PTR_s_GRAPHICS_COMMON_8c0d3988 + DAT_8c0d39b8,1,2);
      goto LAB_8c0d395e;
    }
    iVar2 = (*(code *)PTR_rand_8c0d39c0)(a4,iVar1,puVar3,puVar4);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d39c4,(float)iVar2);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0d39c8,DAT_8c0d39c4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d39c8,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0d39cc,DAT_8c0d39c8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d39cc,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(_DAT_8c0d39d0,DAT_8c0d39cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(a5 + 8) = fVar6;
    }
    else {
      *(undefined8 *)(a5 + 8) = in_xd0;
    }
    iVar2 = (*(code *)PTR_rand_8c0d39c0)(a4,iVar1,puVar3,puVar4);
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar8);
    }
    else {
      in_dr2 = *ar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d39c4,(float)iVar2);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0d39c8,DAT_8c0d39c4);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar7 / dVar7);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(a5 + 0xc) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(a5 + 0xc) = in_dr2;
    }
    iVar1 = (*(code *)PTR_rand_8c0d39c0)(a4,iVar1,puVar3,puVar4);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d39c4,(float)iVar1);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0d39c8,DAT_8c0d39c4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 / dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c0d39d0,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0d39d4,_DAT_8c0d39d0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d39d4,fVar6);
    }
    else {
      dVar7 = (double)CONCAT44(PTR_FUN_8c0d39d8,DAT_8c0d39d4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(a5 + 0x10) = fVar6;
    }
    else {
      *(undefined8 *)(a5 + 0x10) = in_xd0;
    }
    (*(code *)PTR_FUN_8c0d39d8)((int)ar4 + 0x34,a5,puVar3,puVar4);
    iVar5 = iVar5 + 1;
    iVar1 = a5;
  } while( true );
}



/* s_GRAPHICS_ENV_0d39ea @ 8c0d39e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d39ea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = *(undefined4 *)PTR_DAT_8c0d3b9c;
  uStack_18 = *(undefined4 *)(PTR_DAT_8c0d3b9c + 4);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0d3b9c + 8);
  (*(code *)PTR_FUN_8c0d3ba4)(0,&uStack_1c,ar4 + DAT_8c0d3ba0,ar7);
  for (iVar3 = 0; iVar3 < 0x19; iVar3 = iVar3 + 1) {
    *(uint *)(iVar3 * 0xc + DAT_8c0d3ba8 + 4) =
         *(uint *)(iVar3 * 0xc + DAT_8c0d3ba8 + 4) | DAT_8c0d3bac;
  }
  a7 = 0x19;
  uVar2 = DAT_8c0d3bb0;
  (*(code *)PTR_FUN_8c0d3bb8)(DAT_8c0d3bb4,DAT_8c0d3ba8,DAT_8c0d3bb0,0x19);
  uVar1 = DAT_8c0d3bb4;
  (**(code **)(*(int *)(ar4 + 8) + 8))((int *)(ar4 + 8),DAT_8c0d3bb4,uVar2,a7);
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d3bbc)(ar4 + 8,uVar1,uVar2,a7);
  iVar3 = (*(code *)PTR_FUN_8c0d3bc8)(ar5,ar6,PTR_s_GRAPHICS_COMMON_8c0d3bc0 + DAT_8c0d3bc4,uVar1);
  if (iVar3 == 0) {
    (*(code *)PTR_report_error_message_8c0d3bd4)
              (PTR_s_GRAPHICS_COMMON_8c0d3bc0 + DAT_8c0d3bd0,
               PTR_s_GRAPHICS_COMMON_8c0d3bc0 + DAT_8c0d3bcc,0,2);
  }
  for (iVar3 = 0; iVar3 < 0x3c; iVar3 = iVar3 + 1) {
    *(uint *)(DAT_8c0d3bd8 + iVar3 * 0xc + ar4) =
         *(uint *)(DAT_8c0d3bd8 + iVar3 * 0xc + ar4) | DAT_8c0d3bac;
  }
  uVar2 = 0x3c;
  uVar1 = DAT_8c0d3bb0;
  (*(code *)PTR_FUN_8c0d3bb8)(ar4 + DAT_8c0d3be0,ar4 + DAT_8c0d3bdc,DAT_8c0d3bb0,0x3c);
  iVar3 = ar4 + DAT_8c0d3be0;
  (**(code **)(*(int *)(ar4 + DAT_8c0d3be4) + 8))((int *)(ar4 + DAT_8c0d3be4),iVar3,uVar1,uVar2);
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d3bbc)(ar4 + DAT_8c0d3be4,iVar3,uVar1,uVar2);
  a6 = PTR_s_GRAPHICS_COMMON_8c0d3bc0 + DAT_8c0d3bc4;
  iVar3 = (*(code *)PTR_FUN_8c0d3bc8)(ar5,PTR_s_GRAPHICS_COMMON_8c0d3bc0 + DAT_8c0d3be8,a6,uVar1);
  if (iVar3 == 0) {
    uVar1 = 2;
    a6 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d3bd4)
              (PTR_s_GRAPHICS_COMMON_8c0d3bc0 + DAT_8c0d3bec,
               PTR_s_GRAPHICS_COMMON_8c0d3bc0 + DAT_8c0d3bcc,0,2);
  }
  a5 = PTR_DAT_8c0d3bf0;
  (*(code *)PTR_FUN_8c0d3bf8)(ar4 + DAT_8c0d3bf4,PTR_DAT_8c0d3bf0,a6,uVar1);
  iVar3 = (*(code *)PTR_FUN_8c0d3bfc)(ar4 + 0x1c,a5,a6,uVar1);
  uVar2 = (*(code *)PTR_FUN_8c0d3c00)(*(undefined4 *)(*(int *)(iVar3 + 4) + 4),a5,a6,uVar1);
  *(undefined4 *)(ar4 + 0x2c) = uVar2;
  (*(code *)PTR_FUN_8c0d3c04)(ar4,a5,a6,uVar1);
  return 1;
}



/* FUN_8c0d3c08 @ 8c0d3c08 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3c08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 uVar2;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar3;
  undefined1 *puVar4;
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
    puVar4 = auStack_c;
  }
  else {
    puVar4 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar4 + -4) = unaff_r14;
  *(undefined4 *)(puVar4 + -8) = unaff_r13;
  *(undefined4 *)(puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = in_PR;
  *(undefined4 *)(puVar4 + -0x34) = ar5;
  uVar2 = 1;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    *(int *)(puVar4 + -0x20) = iVar3;
    uVar1 = (*(code *)PTR_get_field_40_0d3d64_8c0d3d40)
                      ((*(int *)(puVar4 + -0x20) * 0x10 + *(int *)(puVar4 + -0x20)) * 4 + ar4 +
                       _DAT_8c0d3d3c,ar5,ar6,ar7);
    *(undefined4 *)(puVar4 + -0x18) = uVar1;
    if (*(int *)(puVar4 + -0x18) != 0) {
      *(int *)(puVar4 + -0x24) = iVar3;
      ar5 = *(undefined4 *)(DAT_8c0d3d44 + ar4);
      (*(code *)PTR_FUN_8c0d3d48)
                ((*(int *)(puVar4 + -0x24) * 0x10 + *(int *)(puVar4 + -0x24)) * 4 + ar4 +
                 _DAT_8c0d3d3c,ar5,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x30) == 1) {
    if (*(int *)(DAT_8c0d3d4c + ar4) < 2) {
      *(int *)(puVar4 + -0x28) = ar4;
      *(int *)(DAT_8c0d3d4c + *(int *)(puVar4 + -0x28)) =
           *(int *)(DAT_8c0d3d4c + *(int *)(puVar4 + -0x28)) + 2;
      if (2 < *(int *)(DAT_8c0d3d4c + ar4)) {
        *(undefined4 *)(DAT_8c0d3d4c + ar4) = 2;
      }
    }
    uVar2 = 9;
  }
  else if (-0x1e < *(int *)(DAT_8c0d3d4c + ar4)) {
    *(int *)(puVar4 + -0x2c) = ar4;
    *(int *)(DAT_8c0d3d4c + *(int *)(puVar4 + -0x2c)) =
         *(int *)(DAT_8c0d3d4c + *(int *)(puVar4 + -0x2c)) + -2;
    if (*(int *)(DAT_8c0d3d4c + ar4) < -0x1e) {
      *(undefined4 *)(DAT_8c0d3d4c + ar4) = 0xffffffe2;
    }
  }
  uVar1 = *(undefined4 *)(puVar4 + -0x34);
  (*(code *)PTR_FUN_8c0d3d5c)(ar4,uVar2,uVar1,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0d3d60)(ar4,uVar2,uVar1,ar7);
  *(undefined4 *)(puVar4 + -0x1c) = uVar2;
  uVar2 = *(undefined4 *)(puVar4 + -0x1c);
  *(int *)(puVar4 + -0x30) = ar4;
  *(int *)(DAT_8c0d3d44 + *(int *)(puVar4 + -0x30)) =
       *(int *)(DAT_8c0d3d44 + *(int *)(puVar4 + -0x30)) + 1;
  return uVar2;
}



/* get_field_40_0d3d64 @ 8c0d3d64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_40_0d3d64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x40);
}



/* FUN_8c0d3d6c @ 8c0d3d6c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3d6c(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  undefined *puVar10;
  double in_xd0;
  int a4_00;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fVar9;
  
  if (((*(uint *)(DAT_8c0d3efc + (int)ar4) & 1) == 0) &&
     (*(short *)((int)ar4 + 4) = *(short *)((int)ar4 + 4) + 1, *(short *)((int)ar4 + 4) == 0x19)) {
    *(undefined2 *)((int)ar4 + 4) = 0;
  }
  uVar2 = ar5;
  iVar1 = (*(code *)PTR_get_field_d0_0d3f70_8c0d3f00)((int)ar4 + 0x34,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0d3f04)((int)ar4 + 0x34,uVar2,ar6,ar7);
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0d3f0c,*(float *)DAT_8c0d3f08);
    }
    else {
      in_xd0 = *DAT_8c0d3f08;
      dVar6 = (double)CONCAT44(DAT_8c0d3f10,DAT_8c0d3f0c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0d3f10,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44(PTR_FUN_8c0d3f14,DAT_8c0d3f10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)dVar6 >> 0x20);
      fVar4 = SUB84(dVar6,0) / fVar9;
      dVar6 = (double)CONCAT44(fVar9,fVar4);
      a4_00 = (int)fVar4;
    }
    else {
      dVar6 = dVar6 / dVar6;
      a4_00 = (int)dVar6;
    }
    (*(code *)PTR_FUN_8c0d3f14)(a4_00,uVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d3f18,(int)((ulonglong)dVar6 >> 0x20));
      dVar6 = in_xd0;
    }
    else {
      dVar7 = (double)CONCAT44(_DAT_8c0d3f1c,DAT_8c0d3f18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(a4 + 0x1c) = fVar4;
      dVar7 = (double)CONCAT44(*(undefined4 *)(a4 + 0x1c),*(undefined4 *)(a4 + 0xc));
    }
    else {
      *(double *)(a4 + 0x1c) = dVar6;
      dVar6 = *(double *)(a4 + 0xc);
      dVar7 = *(double *)(a4 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(a4 + 0xc) = fVar4;
      uVar8 = CONCAT44((int)*ar4,*(undefined4 *)(a4 + 0xc));
    }
    else {
      *(double *)(a4 + 0xc) = dVar6;
      dVar6 = *(double *)(a4 + 0xc);
      uVar8 = *ar4;
    }
    if (in_FPSCR_PR != '\0' || (float)uVar8 <= (float)(uVar8 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar8 = (ulonglong)*(uint *)(a4 + 0xc);
      }
      else {
        dVar6 = *(double *)(a4 + 0xc);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar8 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(a4 + 0xc) = 0;
        }
        else {
          *(ulonglong *)(a4 + 0xc) = uVar8 & 0xffffffff;
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      *(int *)(a4 + 0xc) = (int)*ar4;
    }
    else {
      *(ulonglong *)(a4 + 0xc) = *ar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(_DAT_8c0d3f1c,*(float *)DAT_8c0d3f08);
    }
    else {
      dVar6 = *DAT_8c0d3f08;
      dVar7 = (double)CONCAT44(PTR_list_node_next_8c0d3f20,_DAT_8c0d3f1c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)DAT_8c0d3f08 = fVar4;
      in_xd0 = dVar6;
      puVar5 = *(undefined **)DAT_8c0d3f08;
      puVar10 = DAT_8c0d3f10;
    }
    else {
      *DAT_8c0d3f08 = dVar6;
      in_xd0 = *DAT_8c0d3f08;
      puVar5 = DAT_8c0d3f10;
      puVar10 = PTR_FUN_8c0d3f14;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar10 < (float)puVar5) {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0d3f10,*(float *)DAT_8c0d3f08);
      }
      else {
        in_xd0 = *DAT_8c0d3f08;
        dVar6 = (double)CONCAT44(PTR_FUN_8c0d3f14,DAT_8c0d3f10);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 - dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)DAT_8c0d3f08 = fVar4;
      }
      else {
        *DAT_8c0d3f08 = in_xd0;
      }
    }
    a4 = (*(code *)PTR_list_node_next_8c0d3f20)(a4,uVar2,ar6,ar7);
  }
  if (((int)ar4[6] == 1) && (*(int *)(DAT_8c0d3f24 + (int)ar4) == -1)) {
    uVar2 = (*(code *)PTR_FUN_8c0d3f2c)(DAT_8c0d3f28,uVar2,ar6,ar7);
    *(undefined4 *)(DAT_8c0d3f24 + (int)ar4) = uVar2;
    ar6 = 1;
    (*(code *)PTR_FUN_8c0d3f30)(DAT_8c0d3f28,*(undefined4 *)(DAT_8c0d3f24 + (int)ar4),1,ar7);
  }
  if (*(int *)(DAT_8c0d3f24 + (int)ar4) != -1) {
    ar6 = *(undefined4 *)(DAT_8c0d3f34 + (int)ar4);
    (*(code *)PTR_FUN_8c0d3f38)(DAT_8c0d3f28,*(undefined4 *)(DAT_8c0d3f24 + (int)ar4),ar6,ar7);
  }
  if (((int)ar4[6] == 0) && (*(int *)(DAT_8c0d3f24 + (int)ar4) != -1)) {
    (*(code *)PTR_FUN_8c0d3f3c)(DAT_8c0d3f28,*(undefined4 *)(DAT_8c0d3f24 + (int)ar4),ar6,ar7);
    (*(code *)PTR_FUN_8c0d3f40)(DAT_8c0d3f28,(int)ar4 + DAT_8c0d3f24,ar6,ar7);
    *(undefined4 *)(DAT_8c0d3f24 + (int)ar4) = 0xffffffff;
  }
  uVar2 = (*(code *)PTR_FUN_8c0d3f44)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* list_node_next @ 8c0d3f48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 list_node_next(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* FUN_8c0d3f50 @ 8c0d3f50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3f50(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_list_node_next_8c0d3f6c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_d0_0d3f70 @ 8c0d3f70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_d0_0d3f70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0d3f78 + ar4);
}



/* FUN_8c0d3f7c @ 8c0d3f7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d3f7c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = *(int *)(*(int *)(ar5 + 0xc) + 100);
  if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 6)) {
    puVar3 = DAT_8c0d3ff4;
    puVar4 = PTR_DAT_8c0d3ff8;
    if (in_FPSCR_SZ == '\0') {
      puVar3 = *(undefined **)(*(int *)(ar5 + 0xc) + 4);
      puVar4 = DAT_8c0d3ff4;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar3 <= (float)puVar4) {
      PTR_DAT_8c0d3ff8[3] = (char)DAT_8c0d3ffc;
    }
    else {
      PTR_DAT_8c0d3ff8[3] = 0x78;
    }
  }
  else {
    PTR_DAT_8c0d3ff8[3] = (char)DAT_8c0d3ffc;
  }
  **(uint **)(ar4 + 0x14) =
       (uint)(byte)PTR_DAT_8c0d3ff8[3] << 0x18 | DAT_8c0d4000 | DAT_8c0d4004 | DAT_8c0d3ffc;
  uVar2 = (*(code *)PTR_FUN_8c0d4008)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d400c @ 8c0d400c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d400c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  **(undefined4 **)(ar4 + 0x14) = DAT_8c0d4030;
  uVar1 = (*(code *)PTR_FUN_8c0d4034)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d4038 @ 8c0d4038 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d4038(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  (*(code *)PTR_FUN_8c0d4108)(ar4,ar5,ar6,ar7);
  piVar1 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d410c)(ar4 + 8,ar5,ar6,ar7);
  uVar3 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar3;
  (*(code *)PTR_FUN_8c0d4110)(ar4 + 8,ar5,ar6,ar7);
  uVar3 = 0;
  (*(code *)PTR_FUN_8c0d4114)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d4118)(uVar3,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d411c)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d4120)(1,ar5,ar6,ar7);
  uVar3 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 8) = uVar3;
  return iVar2;
}



/* FUN_8c0d4124 @ 8c0d4124 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d4124(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int a5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int *piVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  float fVar7;
  undefined *puVar9;
  double dVar8;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  float fVar10;
  
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
  *(undefined4 *)(puVar5 + -0x18) = in_PR;
  a5 = ar5;
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d4364)(ar4 + 8,ar5,ar6,ar7);
  *(undefined4 *)(puVar5 + -0x24) = uVar1;
  piVar3 = *(int **)(puVar5 + -0x24);
  uVar1 = *(undefined4 *)(*piVar3 + 8);
  *(int *)(puVar5 + -0x30) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)(*piVar3 + 8) =
       *(undefined4 *)((*(int *)(puVar5 + -0x30) * 2 + *(int *)(puVar5 + -0x30)) * 4 + *piVar3 + 8);
  *(int *)(puVar5 + -0x34) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)((*(int *)(puVar5 + -0x34) * 2 + *(int *)(puVar5 + -0x34)) * 4 + *piVar3 + 8) =
       uVar1;
  (*(code *)PTR_FUN_8c0d4368)(ar4 + 8,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d436c)(ar4 + 0x1c,a5,ar6,ar7);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(int *)(puVar5 + -0x38) = iVar4;
    *(int *)(puVar5 + -0x3c) = iVar4;
    *(int *)(puVar5 + -0x40) = iVar4;
    (*(code *)PTR_FUN_8c0d4374)(puVar5 + -0x20,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(puVar5 + -0x20);
      fVar10 = DAT_8c0d4378;
    }
    else {
      in_xd0 = *(undefined8 *)(puVar5 + -0x20);
      fVar7 = DAT_8c0d4378;
      fVar10 = DAT_8c0d437c;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar7) {
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(puVar5 + -0x20);
        fVar10 = DAT_8c0d437c;
      }
      else {
        in_xd0 = *(undefined8 *)(puVar5 + -0x20);
        fVar7 = DAT_8c0d437c;
        fVar10 = DAT_8c0d4380;
      }
      if (in_FPSCR_PR != '\0' || fVar7 <= fVar10) {
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)(puVar5 + -0x1c);
          fVar10 = DAT_8c0d4380;
        }
        else {
          in_xd0 = *(undefined8 *)(puVar5 + -0x1c);
          fVar7 = DAT_8c0d4380;
          fVar10 = DAT_8c0d4384;
        }
        if (in_FPSCR_PR != '\0' || fVar10 <= fVar7) {
          if (in_FPSCR_SZ == '\0') {
            fVar7 = *(float *)(puVar5 + -0x1c);
            fVar10 = DAT_8c0d4384;
          }
          else {
            in_xd0 = *(undefined8 *)(puVar5 + -0x1c);
            fVar7 = DAT_8c0d4384;
            fVar10 = DAT_8c0d4388;
          }
          if (in_FPSCR_PR != '\0' || fVar7 <= fVar10) {
            *(int *)(puVar5 + -0x44) = iVar4;
            puVar2 = (undefined8 *)
                     (ar5 + *(int *)(puVar5 + -0x44) * DAT_8c0d4370 + (int)DAT_8c0d4388);
            if (in_FPSCR_SZ == '\0') {
              puVar6 = *(undefined **)puVar2;
              puVar9 = DAT_8c0d438c;
            }
            else {
              in_xd0 = *puVar2;
              puVar6 = DAT_8c0d438c;
              puVar9 = PTR_FUN_8c0d4390;
            }
            if (in_FPSCR_PR != '\0' || (float)puVar9 <= (float)puVar6) {
              uVar1 = 0;
              (*(code *)PTR_FUN_8c0d4390)(0,a5,ar6,ar7);
              *(int *)(puVar5 + -0x48) = iVar4;
              *(int *)(puVar5 + -0x4c) = iVar4;
              *(int *)(puVar5 + -0x50) = iVar4;
              (*(code *)PTR_FUN_8c0d4398)(uVar1,a5,ar6,ar7);
              *(int *)(puVar5 + -0x54) = iVar4;
              (*(code *)PTR_FUN_8c0d439c)(uVar1,a5,ar6,ar7);
              *(int *)(puVar5 + -0x58) = iVar4;
              (*(code *)PTR_FUN_8c0d43a0)(ar4 + *(int *)(puVar5 + -0x58) * 4 + 0x20,a5,ar6,ar7);
              (*(code *)PTR_FUN_8c0d43a4)(1,a5,ar6,ar7);
            }
          }
        }
      }
    }
  }
  *(int *)(puVar5 + -0x5c) = (int)*(short *)(ar4 + 4);
  uVar1 = *(undefined4 *)
           ((*(int *)(puVar5 + -0x5c) * 2 + *(int *)(puVar5 + -0x5c)) * 4 + *piVar3 + 8);
  *(int *)(puVar5 + -0x60) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)((*(int *)(puVar5 + -0x60) * 2 + *(int *)(puVar5 + -0x60)) * 4 + *piVar3 + 8) =
       *(undefined4 *)(*piVar3 + 8);
  *(undefined4 *)(*piVar3 + 8) = uVar1;
  (*(code *)PTR_FUN_8c0d43a8)(ar4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d43ac)(ar4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d43b0)(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d43b8,*DAT_8c0d43b4);
  }
  else {
    in_xd0 = *(undefined8 *)DAT_8c0d43b4;
    dVar8 = (double)CONCAT44(DAT_8c0d43bc,DAT_8c0d43b8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d43bc,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(PTR_FUN_8c0d43c0,DAT_8c0d43bc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = (float)((ulonglong)dVar8 >> 0x20);
    fVar7 = SUB84(dVar8,0) / fVar10;
    dVar8 = (double)CONCAT44(fVar10,fVar7);
    iVar4 = (int)fVar7;
  }
  else {
    dVar8 = dVar8 / dVar8;
    iVar4 = (int)dVar8;
  }
  (*(code *)PTR_FUN_8c0d43c0)(iVar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0x28) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(puVar5 + -0x28) = dVar8;
  }
  (*(code *)PTR_FUN_8c0d43c4)(iVar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0x2c) = (int)((ulonglong)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44(DAT_8c0d43c8,*DAT_8c0d43b4);
  }
  else {
    *(double *)(puVar5 + -0x2c) = dVar8;
    in_xd0 = *(undefined8 *)DAT_8c0d43b4;
    dVar8 = (double)CONCAT44(_FUN_8c0d43cc,DAT_8c0d43c8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 + dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *DAT_8c0d43b4 = fVar7;
    puVar6 = (undefined *)*DAT_8c0d43b4;
    puVar9 = DAT_8c0d43bc;
  }
  else {
    *(undefined8 *)DAT_8c0d43b4 = in_xd0;
    in_xd0 = *(undefined8 *)DAT_8c0d43b4;
    puVar6 = DAT_8c0d43bc;
    puVar9 = PTR_FUN_8c0d43c0;
  }
  if (in_FPSCR_PR != '\0' || (float)puVar9 <= (float)puVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c0d43bc,*DAT_8c0d43b4);
    }
    else {
      in_xd0 = *(undefined8 *)DAT_8c0d43b4;
      dVar8 = (double)CONCAT44(PTR_FUN_8c0d43c0,DAT_8c0d43bc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *DAT_8c0d43b4 = fVar7;
    }
    else {
      *(undefined8 *)DAT_8c0d43b4 = in_xd0;
    }
  }
  return &DAT_8c0d43bc;
}



/* FUN_8c0d43cc @ 8c0d43cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d43cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [12];
  undefined4 uStack_4;
  
  uStack_4 = ar4;
  if (in_FPSCR_SZ == '\0') {
    uStack_4 = in_PR;
  }
  uVar1 = (*(code *)PTR_FUN_8c0d4424)(0,auStack_10,ar4,ar7);
  return uVar1;
}



/* FUN_8c0d4428 @ 8c0d4428 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d4428(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int a5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int *piVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  float fVar7;
  undefined *puVar9;
  double dVar8;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  float fVar10;
  
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
  *(undefined4 *)(puVar5 + -0x18) = in_PR;
  a5 = ar5;
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d4668)(ar4 + 8,ar5,ar6,ar7);
  *(undefined4 *)(puVar5 + -0x24) = uVar1;
  piVar3 = *(int **)(puVar5 + -0x24);
  uVar1 = *(undefined4 *)(*piVar3 + 8);
  *(int *)(puVar5 + -0x30) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)(*piVar3 + 8) =
       *(undefined4 *)((*(int *)(puVar5 + -0x30) * 2 + *(int *)(puVar5 + -0x30)) * 4 + *piVar3 + 8);
  *(int *)(puVar5 + -0x34) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)((*(int *)(puVar5 + -0x34) * 2 + *(int *)(puVar5 + -0x34)) * 4 + *piVar3 + 8) =
       uVar1;
  (*(code *)PTR_FUN_8c0d466c)(ar4 + 8,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d4670)(ar4 + 0x1c,a5,ar6,ar7);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(int *)(puVar5 + -0x38) = iVar4;
    *(int *)(puVar5 + -0x3c) = iVar4;
    *(int *)(puVar5 + -0x40) = iVar4;
    (*(code *)PTR_FUN_8c0d4678)(puVar5 + -0x20,a5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      fVar7 = *(float *)(puVar5 + -0x20);
      fVar10 = DAT_8c0d467c;
    }
    else {
      in_xd0 = *(undefined8 *)(puVar5 + -0x20);
      fVar7 = DAT_8c0d467c;
      fVar10 = DAT_8c0d4680;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar7) {
      if (in_FPSCR_SZ == '\0') {
        fVar7 = *(float *)(puVar5 + -0x20);
        fVar10 = DAT_8c0d4680;
      }
      else {
        in_xd0 = *(undefined8 *)(puVar5 + -0x20);
        fVar7 = DAT_8c0d4680;
        fVar10 = DAT_8c0d4684;
      }
      if (in_FPSCR_PR != '\0' || fVar7 <= fVar10) {
        if (in_FPSCR_SZ == '\0') {
          fVar7 = *(float *)(puVar5 + -0x1c);
          fVar10 = DAT_8c0d4684;
        }
        else {
          in_xd0 = *(undefined8 *)(puVar5 + -0x1c);
          fVar7 = DAT_8c0d4684;
          fVar10 = DAT_8c0d4688;
        }
        if (in_FPSCR_PR != '\0' || fVar10 <= fVar7) {
          if (in_FPSCR_SZ == '\0') {
            fVar7 = *(float *)(puVar5 + -0x1c);
            fVar10 = DAT_8c0d4688;
          }
          else {
            in_xd0 = *(undefined8 *)(puVar5 + -0x1c);
            fVar7 = DAT_8c0d4688;
            fVar10 = DAT_8c0d468c;
          }
          if (in_FPSCR_PR != '\0' || fVar7 <= fVar10) {
            *(int *)(puVar5 + -0x44) = iVar4;
            puVar2 = (undefined8 *)
                     (ar5 + *(int *)(puVar5 + -0x44) * DAT_8c0d4674 + (int)DAT_8c0d468c);
            if (in_FPSCR_SZ == '\0') {
              puVar6 = *(undefined **)puVar2;
              puVar9 = DAT_8c0d4690;
            }
            else {
              in_xd0 = *puVar2;
              puVar6 = DAT_8c0d4690;
              puVar9 = PTR_FUN_8c0d4694;
            }
            if (in_FPSCR_PR != '\0' || (float)puVar9 <= (float)puVar6) {
              uVar1 = 0;
              (*(code *)PTR_FUN_8c0d4694)(0,a5,ar6,ar7);
              *(int *)(puVar5 + -0x48) = iVar4;
              *(int *)(puVar5 + -0x4c) = iVar4;
              *(int *)(puVar5 + -0x50) = iVar4;
              (*(code *)PTR_FUN_8c0d469c)(uVar1,a5,ar6,ar7);
              *(int *)(puVar5 + -0x54) = iVar4;
              (*(code *)PTR_FUN_8c0d46a0)(uVar1,a5,ar6,ar7);
              *(int *)(puVar5 + -0x58) = iVar4;
              (*(code *)PTR_FUN_8c0d4670)(ar4 + *(int *)(puVar5 + -0x58) * 4 + 0x20,a5,ar6,ar7);
              (*(code *)PTR_FUN_8c0d46a4)(1,a5,ar6,ar7);
            }
          }
        }
      }
    }
  }
  *(int *)(puVar5 + -0x5c) = (int)*(short *)(ar4 + 4);
  uVar1 = *(undefined4 *)
           ((*(int *)(puVar5 + -0x5c) * 2 + *(int *)(puVar5 + -0x5c)) * 4 + *piVar3 + 8);
  *(int *)(puVar5 + -0x60) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)((*(int *)(puVar5 + -0x60) * 2 + *(int *)(puVar5 + -0x60)) * 4 + *piVar3 + 8) =
       *(undefined4 *)(*piVar3 + 8);
  *(undefined4 *)(*piVar3 + 8) = uVar1;
  (*(code *)PTR_FUN_8c0d46a8)(ar4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d46ac)(ar4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d46b0)(ar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d46b8,*DAT_8c0d46b4);
  }
  else {
    in_xd0 = *(undefined8 *)DAT_8c0d46b4;
    dVar8 = (double)CONCAT44(DAT_8c0d46bc,DAT_8c0d46b8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0d46bc,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(PTR_FUN_8c0d46c0,DAT_8c0d46bc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = (float)((ulonglong)dVar8 >> 0x20);
    fVar7 = SUB84(dVar8,0) / fVar10;
    dVar8 = (double)CONCAT44(fVar10,fVar7);
    iVar4 = (int)fVar7;
  }
  else {
    dVar8 = dVar8 / dVar8;
    iVar4 = (int)dVar8;
  }
  (*(code *)PTR_FUN_8c0d46c0)(iVar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0x28) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(puVar5 + -0x28) = dVar8;
  }
  (*(code *)PTR_FUN_8c0d46c4)(iVar4,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0x2c) = (int)((ulonglong)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44(DAT_8c0d46c8,*DAT_8c0d46b4);
  }
  else {
    *(double *)(puVar5 + -0x2c) = dVar8;
    in_xd0 = *(undefined8 *)DAT_8c0d46b4;
    dVar8 = (double)CONCAT44(_FUN_8c0d46cc,DAT_8c0d46c8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 + dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *DAT_8c0d46b4 = fVar7;
    puVar6 = (undefined *)*DAT_8c0d46b4;
    puVar9 = DAT_8c0d46bc;
  }
  else {
    *(undefined8 *)DAT_8c0d46b4 = in_xd0;
    in_xd0 = *(undefined8 *)DAT_8c0d46b4;
    puVar6 = DAT_8c0d46bc;
    puVar9 = PTR_FUN_8c0d46c0;
  }
  if (in_FPSCR_PR != '\0' || (float)puVar9 <= (float)puVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c0d46bc,*DAT_8c0d46b4);
    }
    else {
      in_xd0 = *(undefined8 *)DAT_8c0d46b4;
      dVar8 = (double)CONCAT44(PTR_FUN_8c0d46c0,DAT_8c0d46bc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *DAT_8c0d46b4 = fVar7;
    }
    else {
      *(undefined8 *)DAT_8c0d46b4 = in_xd0;
    }
  }
  return &DAT_8c0d46bc;
}



/* FUN_8c0d46cc @ 8c0d46cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d46cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int *piVar2;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d48b0)(ar4 + 8,ar5,ar6,ar7);
  *(undefined4 *)(puVar4 + -0x24) = uVar1;
  piVar2 = *(int **)(puVar4 + -0x24);
  uVar1 = *(undefined4 *)(*piVar2 + 8);
  *(int *)(puVar4 + -0x28) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)(*piVar2 + 8) =
       *(undefined4 *)((*(int *)(puVar4 + -0x28) * 2 + *(int *)(puVar4 + -0x28)) * 4 + *piVar2 + 8);
  *(int *)(puVar4 + -0x2c) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)((*(int *)(puVar4 + -0x2c) * 2 + *(int *)(puVar4 + -0x2c)) * 4 + *piVar2 + 8) =
       uVar1;
  (*(code *)PTR_FUN_8c0d48b4)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d48bc)(ar4 + DAT_8c0d48b8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d48c0)(ar4 + 0x1c,ar5,ar6,ar7);
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    *(int *)(puVar4 + -0x30) = iVar3;
    *(int *)(puVar4 + -0x34) = iVar3;
    *(int *)(puVar4 + -0x38) = iVar3;
    (*(code *)PTR_FUN_8c0d48c8)(puVar4 + -0x20,ar5,ar6,ar7);
    puVar5 = DAT_8c0d48cc;
    puVar6 = DAT_8c0d48d0;
    if (in_FPSCR_SZ == '\0') {
      puVar5 = *(undefined **)(puVar4 + -0x20);
      puVar6 = DAT_8c0d48cc;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar6 <= (float)puVar5) {
      puVar5 = DAT_8c0d48d0;
      puVar6 = DAT_8c0d48d4;
      if (in_FPSCR_SZ == '\0') {
        puVar5 = *(undefined **)(puVar4 + -0x20);
        puVar6 = DAT_8c0d48d0;
      }
      if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar6) {
        puVar5 = DAT_8c0d48d4;
        puVar6 = DAT_8c0d48d8;
        if (in_FPSCR_SZ == '\0') {
          puVar5 = *(undefined **)(puVar4 + -0x1c);
          puVar6 = DAT_8c0d48d4;
        }
        if (in_FPSCR_PR != '\0' || (float)puVar6 <= (float)puVar5) {
          puVar5 = DAT_8c0d48d8;
          puVar6 = PTR_FUN_8c0d48dc;
          if (in_FPSCR_SZ == '\0') {
            puVar5 = *(undefined **)(puVar4 + -0x1c);
            puVar6 = DAT_8c0d48d8;
          }
          if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar6) {
            uVar1 = 0;
            (*(code *)PTR_FUN_8c0d48dc)(0,ar5,ar6,ar7);
            *(int *)(puVar4 + -0x3c) = iVar3;
            *(int *)(puVar4 + -0x40) = iVar3;
            *(int *)(puVar4 + -0x44) = iVar3;
            (*(code *)PTR_FUN_8c0d48e4)(uVar1,ar5,ar6,ar7);
            *(int *)(puVar4 + -0x48) = iVar3;
            (*(code *)PTR_FUN_8c0d48e8)(uVar1,ar5,ar6,ar7);
            *(int *)(puVar4 + -0x4c) = iVar3;
            (*(code *)PTR_FUN_8c0d48c0)(ar4 + *(int *)(puVar4 + -0x4c) * 4 + 0x20,ar5,ar6,ar7);
            (*(code *)PTR_FUN_8c0d48ec)(1,ar5,ar6,ar7);
          }
        }
      }
    }
  }
  *(int *)(puVar4 + -0x50) = (int)*(short *)(ar4 + 4);
  uVar1 = *(undefined4 *)
           ((*(int *)(puVar4 + -0x50) * 2 + *(int *)(puVar4 + -0x50)) * 4 + *piVar2 + 8);
  *(int *)(puVar4 + -0x54) = (int)*(short *)(ar4 + 4);
  *(undefined4 *)((*(int *)(puVar4 + -0x54) * 2 + *(int *)(puVar4 + -0x54)) * 4 + *piVar2 + 8) =
       *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = uVar1;
  (*(code *)PTR_FUN_8c0d48bc)(PTR_DAT_8c0d48f0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d48f4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d48f8)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d48fc)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d4900 @ 8c0d4900 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4900(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d49b8)(ar4 + 8,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  (*(code *)PTR_FUN_8c0d49bc)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d49c0)(ar4 + 0x1c,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar2;
  (*(code *)PTR_FUN_8c0d49c4)(ar4,ar5,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0d49c8)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d49cc @ 8c0d49cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d49cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  undefined4 a5;
  undefined4 a6;
  int iVar2;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_34 = *(undefined4 *)PTR_DAT_8c0d4a78;
  uStack_28 = *(undefined4 *)(PTR_DAT_8c0d4a7c + 8);
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0d4a7c + 0xc);
  puStack_30 = &uStack_20;
  puStack_2c = &uStack_34;
  uStack_14 = in_PR;
  iVar1 = (*(code *)PTR_get_field_d0_0d3f70_8c0d4a80)(ar4 + 0x34,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0d4a84)(ar4 + 0x34,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (in_FPSCR_SZ == '\0') {
      uStack_20 = *(undefined4 *)(a4 + 8);
      uStack_1c = *(undefined4 *)(a4 + 0xc);
      uStack_18 = *(undefined4 *)(a4 + 0x10);
    }
    else {
      uStack_20 = (undefined4)*(undefined8 *)(a4 + 8);
      uStack_1c = (undefined4)*(undefined8 *)(a4 + 0xc);
      uStack_18 = (undefined4)*(undefined8 *)(a4 + 0x10);
      uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(a4 + 0x10) >> 0x20);
    }
    a6 = 0x40;
    a5 = 1;
    (*(code *)PTR_FUN_8c0d4a88)(&puStack_30,1,0x40,ar7);
    a4 = (*(code *)PTR_list_node_next_8c0d4a8c)(a4,a5,a6,ar7);
  }
  return a4;
}



/* FUN_8c0d4a90 @ 8c0d4a90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4a90(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0d4ba8)(ar4 + DAT_8c0d4ba4,ar5,ar6,ar7);
  iVar2 = 0;
  do {
    if (4 < iVar2) {
      return 5;
    }
    iVar1 = (*(code *)PTR_get_field_40_0d3d64_8c0d4bb0)
                      (iVar2 * 0x44 + ar4 + DAT_8c0d4bac,ar5,ar6,ar7);
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_get_field_40_0d3d64_8c0d4bb0)
                        (iVar2 * 0x44 + ar4 + DAT_8c0d4bac,ar5,ar6,ar7);
      if (iVar1 == 1) {
        puVar3 = DAT_8c0d4bb8;
        puVar4 = PTR_get_field_3c_0d4bd4_8c0d4bbc;
        if (in_FPSCR_SZ == '\0') {
          puVar3 = *(undefined **)(iVar2 * 0x44 + ar4 + DAT_8c0d4bb4);
          puVar4 = DAT_8c0d4bb8;
        }
        if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar3) goto LAB_8c0d4b8e;
      }
      iVar1 = (*(code *)PTR_get_field_3c_0d4bd4_8c0d4bbc)
                        (iVar2 * 0x44 + ar4 + DAT_8c0d4bac,ar5,ar6,ar7);
      if ((iVar1 == 3) || (iVar1 == 4)) {
        ar6 = ar4 + DAT_8c0d4bc0;
        ar5 = ar4 + DAT_8c0d4ba4;
        (*(code *)PTR_FUN_8c0d4bc4)(iVar2 * 0x44 + ar4 + DAT_8c0d4bac,ar5,ar6,ar7);
      }
      else {
        ar7 = ar4 + DAT_8c0d4bc8;
        ar6 = ar4 + DAT_8c0d4bcc;
        ar5 = ar4 + DAT_8c0d4ba4;
        (*(code *)PTR_FUN_8c0d4bd0)(iVar2 * 0x44 + ar4 + DAT_8c0d4bac,ar5,ar6,ar7);
      }
    }
LAB_8c0d4b8e:
    iVar2 = iVar2 + 1;
  } while( true );
}



/* get_field_3c_0d4bd4 @ 8c0d4bd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_3c_0d4bd4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x3c);
}



/* FUN_8c0d4bdc @ 8c0d4bdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4bdc(undefined8 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float *a5;
  undefined1 *a6;
  undefined8 uVar2;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [12];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uVar2 = CONCAT44(*(undefined4 *)ar4,*(undefined4 *)(*(int *)(ar5 + 0xc) + 4));
  }
  else {
    uVar2 = *ar4;
  }
  fStack_14 = (float)uVar2;
  uStack_8 = in_PR;
  if (in_FPSCR_PR != '\0' || fStack_14 <= (float)((ulonglong)uVar2 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      fStack_14 = 0.0;
      uStack_10 = DAT_8c0d4c64;
    }
    else {
      uStack_10 = DAT_8c0d4c64;
      uStack_8 = DAT_8c0d4c64;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      fStack_14 = 0.0;
    }
    else {
      uStack_8 = DAT_8c0d4c64;
    }
    uStack_10 = DAT_8c0d4c60;
  }
  uStack_c = DAT_8c0d4c60;
  a6 = auStack_20;
  a5 = &fStack_14;
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d4c68)(0,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0d4c6c)(uVar1,a5,a6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d4c70)(uVar1,a5,a6,ar7);
  return uVar1;
}



/* FUN_8c0d4c74 @ 8c0d4c74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4c74(float *ar4,undefined1 *ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined1 *a5;
  int a6;
  int a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined8 in_dr0;
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
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = in_PR;
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
    *(int *)(puVar5 + -0x38) = iVar4;
    uVar2 = (*(code *)PTR_get_field_40_0d3d64_8c0d4e54)
                      ((int)ar4 +
                       DAT_8c0d4e50 +
                       (*(int *)(puVar5 + -0x38) * 0x10 + *(int *)(puVar5 + -0x38)) * 4,a5,a6,a7);
    *(undefined4 *)(puVar5 + -0x20) = uVar2;
    if (*(int *)(puVar5 + -0x20) == 1) {
      *(int *)(puVar5 + -0x3c) = iVar4;
      iVar1 = *(int *)((int)ar4 +
                      DAT_8c0d4e58 +
                      (*(int *)(puVar5 + -0x3c) * 0x10 + *(int *)(puVar5 + -0x3c)) * 4);
      if (iVar1 == ar7) {
        return iVar1;
      }
    }
  }
  if (ar6 == 3) {
    uVar2 = (*(code *)PTR_FUN_8c0d4e60)(DAT_8c0d4e5c,a5,a6,a7);
    *(undefined4 *)(puVar5 + -0x24) = uVar2;
    *(undefined4 *)(puVar5 + -0x1c) = *(undefined4 *)(puVar5 + -0x24);
    a6 = 8;
    (*(code *)PTR_FUN_8c0d4e64)(DAT_8c0d4e5c,*(undefined4 *)(puVar5 + -0x1c),8,a7);
    a5 = puVar5 + -0x1c;
    (*(code *)PTR_FUN_8c0d4e68)(DAT_8c0d4e5c,a5,a6,a7);
  }
  else if (ar6 == 1) {
    uVar2 = (*(code *)PTR_FUN_8c0d4e60)(DAT_8c0d4e5c,a5,a6,a7);
    *(undefined4 *)(puVar5 + -0x28) = uVar2;
    *(undefined4 *)(puVar5 + -0x1c) = *(undefined4 *)(puVar5 + -0x28);
    a6 = 0x11;
    (*(code *)PTR_FUN_8c0d4e64)(DAT_8c0d4e5c,*(undefined4 *)(puVar5 + -0x1c),0x11,a7);
    a5 = puVar5 + -0x1c;
    (*(code *)PTR_FUN_8c0d4e68)(DAT_8c0d4e5c,a5,a6,a7);
  }
  else if (ar6 == 2) {
    uVar2 = (*(code *)PTR_FUN_8c0d4e60)(DAT_8c0d4e5c,a5,a6,a7);
    *(undefined4 *)(puVar5 + -0x2c) = uVar2;
    *(undefined4 *)(puVar5 + -0x1c) = *(undefined4 *)(puVar5 + -0x2c);
    a6 = 7;
    (*(code *)PTR_FUN_8c0d4e64)(DAT_8c0d4e5c,*(undefined4 *)(puVar5 + -0x1c),7,a7);
    a5 = puVar5 + -0x1c;
    (*(code *)PTR_FUN_8c0d4e68)(DAT_8c0d4e5c,a5,a6,a7);
  }
  else if (ar6 == 4) {
    uVar2 = (*(code *)PTR_FUN_8c0d4e60)(DAT_8c0d4e5c,a5,a6,a7);
    *(undefined4 *)(puVar5 + -0x30) = uVar2;
    *(undefined4 *)(puVar5 + -0x1c) = *(undefined4 *)(puVar5 + -0x30);
    a6 = 0x13;
    (*(code *)PTR_FUN_8c0d4e64)(DAT_8c0d4e5c,*(undefined4 *)(puVar5 + -0x1c),0x13,a7);
    a5 = puVar5 + -0x1c;
    (*(code *)PTR_FUN_8c0d4e68)(DAT_8c0d4e5c,a5,a6,a7);
  }
  iVar4 = 0;
  while( true ) {
    if (4 < iVar4) {
      return 5;
    }
    *(int *)(puVar5 + -0x40) = iVar4;
    uVar2 = (*(code *)PTR_get_field_40_0d3d64_8c0d4e54)
                      ((int)ar4 +
                       DAT_8c0d4e50 +
                       (*(int *)(puVar5 + -0x40) * 0x10 + *(int *)(puVar5 + -0x40)) * 4,a5,a6,a7);
    fVar6 = (float)in_dr0;
    *(undefined4 *)(puVar5 + -0x34) = uVar2;
    if (*(int *)(puVar5 + -0x34) == 0) break;
    iVar4 = iVar4 + 1;
  }
  *(int *)(puVar5 + -0x44) = iVar4;
  (*(code *)PTR_Vec3_assign_8c0d4e6c)
            ((int)ar4 +
             DAT_8c0d4e50 + (*(int *)(puVar5 + -0x44) * 0x10 + *(int *)(puVar5 + -0x44)) * 4,ar5,a6,
             a7);
  *(int *)(puVar5 + -0x48) = iVar4;
  pfVar3 = (float *)((int)ar4 +
                    DAT_8c0d4e70 + (*(int *)(puVar5 + -0x48) * 0x10 + *(int *)(puVar5 + -0x48)) * 4)
  ;
  if (in_FPSCR_SZ == '\0') {
    fVar6 = *ar4;
  }
  else {
    in_xd0 = *(undefined8 *)ar4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = fVar6 - 1.0;
  }
  else {
    fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) - (double)CONCAT44(0x3f800000,fVar6),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *pfVar3 = fVar6;
  }
  else {
    *(undefined8 *)pfVar3 = in_xd0;
  }
  *(int *)(puVar5 + -0x4c) = iVar4;
  (*(code *)PTR_FUN_8c0d4e74)
            ((int)ar4 +
             DAT_8c0d4e50 + (*(int *)(puVar5 + -0x4c) * 0x10 + *(int *)(puVar5 + -0x4c)) * 4,ar7,ar6
             ,a7);
  *(int *)(puVar5 + -0x50) = iVar4;
  uVar2 = (*(code *)PTR_FUN_8c0d4e78)
                    ((int)ar4 +
                     DAT_8c0d4e50 + (*(int *)(puVar5 + -0x50) * 0x10 + *(int *)(puVar5 + -0x50)) * 4
                     ,ar7,ar6,a7);
  return uVar2;
}



/* FUN_8c0d4e7c @ 8c0d4e7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4e7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = 1;
  return 0x40;
}



/* FUN_8c0d4e88 @ 8c0d4e88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

double * FUN_8c0d4e88(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined4 unaff_r14;
  undefined1 *puVar1;
  double *pdVar2;
  float fVar3;
  undefined8 in_dr0;
  double *pdVar5;
  float fVar6;
  undefined4 in_fr3;
  double dVar7;
  double in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  double dVar4;
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = unaff_r14;
  *(undefined4 *)(puVar1 + -8) = in_PR;
  a5 = ar5;
  (*(code *)PTR_Class_12c394_m0_102b04_8c0d4f20)(DAT_8c0d4f1c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0xc) = (int)((ulonglong)in_dr0 >> 0x20);
    *(undefined4 *)DAT_8c0d4f24 = *(undefined4 *)(puVar1 + -0xc);
    pdVar2 = *(double **)(ar5 + 8);
    pdVar5 = DAT_8c0d4f28;
  }
  else {
    *(undefined8 *)(puVar1 + -0xc) = in_dr0;
    *DAT_8c0d4f24 = *(double *)(puVar1 + -0xc);
    in_xd0 = *(double *)(ar5 + 8);
    pdVar2 = DAT_8c0d4f28;
    pdVar5 = DAT_8c0d4f2c;
  }
  if (in_FPSCR_PR != '\0' || (float)pdVar2 <= (float)pdVar5) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d4f28,*(undefined4 *)DAT_8c0d4f24);
    }
    else {
      in_xd0 = *DAT_8c0d4f24;
      dVar4 = (double)CONCAT44(DAT_8c0d4f2c,DAT_8c0d4f28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) * fVar3);
    }
    else {
      dVar4 = dVar4 * dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)DAT_8c0d4f2c = SUB84(dVar4,0);
    }
    else {
      *DAT_8c0d4f2c = in_xd0;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar5 + 8),in_fr3);
      dVar4 = (double)CONCAT44(DAT_8c0d4f28,pdVar2);
    }
    else {
      dVar7 = *(double *)(ar5 + 8);
      dVar4 = (double)CONCAT44(DAT_8c0d4f2c,DAT_8c0d4f28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - (float)((ulonglong)dVar4 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d4f28,*(undefined4 *)DAT_8c0d4f24);
    }
    else {
      in_xd0 = *DAT_8c0d4f24;
      dVar4 = (double)CONCAT44(DAT_8c0d4f2c,DAT_8c0d4f28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)((ulonglong)dVar4 >> 0x20);
      fVar3 = SUB84(dVar4,0) * fVar6;
      dVar4 = (double)CONCAT44(fVar6,fVar3);
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + fVar3,SUB84(dVar7,0));
    }
    else {
      dVar4 = dVar4 * dVar4;
      dVar7 = dVar7 + dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)DAT_8c0d4f2c = (int)((ulonglong)dVar7 >> 0x20);
    }
    else {
      *DAT_8c0d4f2c = dVar7;
    }
  }
  (*(code *)PTR_Class_12c394_m0_102b04_8c0d4f20)(DAT_8c0d4f30,a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x10) = (int)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(DAT_8c0d4f28,*(undefined4 *)(puVar1 + -0x10));
  }
  else {
    *(double *)(puVar1 + -0x10) = dVar4;
    in_xd0 = *(double *)(puVar1 + -0x10);
    dVar4 = (double)CONCAT44(DAT_8c0d4f2c,DAT_8c0d4f28);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)DAT_8c0d4f34 = fVar3;
    dVar4 = (double)CONCAT44(*(float *)DAT_8c0d4f34,*(undefined4 *)DAT_8c0d4f2c);
    pdVar2 = DAT_8c0d4f34;
  }
  else {
    *DAT_8c0d4f34 = in_xd0;
    in_xd0 = *DAT_8c0d4f2c;
    dVar4 = *DAT_8c0d4f34;
    pdVar2 = DAT_8c0d4f34;
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  DAT_8c0d4f34 = pdVar2;
  if (in_FPSCR_SZ == '\0') {
    *(float *)DAT_8c0d4f38 = fVar3;
  }
  else {
    *DAT_8c0d4f38 = in_xd0;
  }
  return pdVar2;
}



/* FUN_8c0d4f3c @ 8c0d4f3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4f3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  DAT_8c0d4f64[2] = 0x32;
  DAT_8c0d4f64[1] = 0x32;
  *DAT_8c0d4f64 = 0x1f;
  *DAT_8c0d4f68 = 1;
  uVar1 = (*(code *)PTR_FUN_8c0d4f6c)(0xffffffff,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d4f70 @ 8c0d4f70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4f70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  DAT_8c0d4f98[2] = 10;
  DAT_8c0d4f98[1] = 10;
  *DAT_8c0d4f98 = 10;
  *DAT_8c0d4f9c = 1;
  uVar1 = (*(code *)PTR_FUN_8c0d4fa4)(DAT_8c0d4fa0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d4fa8 @ 8c0d4fa8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d4fa8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (*(code *)PTR_s_40_BUBBLE_MONO_0d4fea_8c0d4fe0)(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0d4fe4)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* s_40_BUBBLE_MONO_0d4fea @ 8c0d4fe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_40_BUBBLE_MONO_0d4fea(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d5024)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_pack_find_by_name_buffered_8c0d5034)
                    (DAT_8c0d5030,PTR_s_GRAPHICS_COMMON_8c0d5028 + DAT_8c0d502c,ar6,ar7);
  *(undefined4 *)(DAT_8c0d5038 + ar4) = uVar1;
  uVar1 = (*(code *)PTR_FUN_8c0d503c)(DAT_8c0d5030,*(undefined4 *)(DAT_8c0d5038 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d5040 @ 8c0d5040 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5040(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pack_find_by_name_buffered_8c0d508c)
                    (DAT_8c0d5088,PTR_s_GRAPHICS_COMMON_8c0d5080 + DAT_8c0d5084,ar6,ar7);
  *(undefined4 *)(DAT_8c0d5090 + ar4) = uVar1;
  (*(code *)PTR_FUN_8c0d5094)(DAT_8c0d5088,*(undefined4 *)(DAT_8c0d5090 + ar4),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d509c)(DAT_8c0d5088,DAT_8c0d5098,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d50a0 @ 8c0d50a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d50a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d50b0)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d50b4 @ 8c0d50b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d50b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d50e4)(DAT_8c0d50e0,*(undefined4 *)(DAT_8c0d50dc + ar4),ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d50e8)(DAT_8c0d50e0,*(undefined4 *)(DAT_8c0d50dc + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d50ec @ 8c0d50ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d50ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (*(code *)PTR_FUN_8c0d5124)(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0d5128)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0d512c @ 8c0d512c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d512c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0d51d8)(DAT_8c0d51d4,*(undefined4 *)(DAT_8c0d51d0 + ar4),ar6,ar7);
  (*(code *)PTR_FUN_8c0d51dc)(DAT_8c0d51d4,*(undefined4 *)(DAT_8c0d51d0 + ar4),ar6,ar7);
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c0d51e0 + iVar1 * 0x18 + ar4) != -1) {
      (*(code *)PTR_FUN_8c0d51e4)
                (DAT_8c0d51d4,*(undefined4 *)(DAT_8c0d51e0 + iVar1 * 0x18 + ar4),ar6,ar7);
      (*(code *)PTR_FUN_8c0d51e8)(DAT_8c0d51d4,iVar1 * 0x18 + ar4 + DAT_8c0d51e0,ar6,ar7);
      *(undefined4 *)(DAT_8c0d51e0 + iVar1 * 0x18 + ar4) = 0xffffffff;
    }
  }
  return 2;
}



/* FUN_8c0d51ec @ 8c0d51ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d51ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d5210)(DAT_8c0d520c,0,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d5214)(ar4,uVar1,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_ENV_0d5220 @ 8c0d5218 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d546c) */
/* WARNING: Removing unreachable block (ram,0x8c0d5494) */
/* WARNING: Removing unreachable block (ram,0x8c0d54b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d5220(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 a4;
  undefined4 ***a5;
  undefined *puVar4;
  double *pdVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 **ppuVar8;
  double dVar9;
  double in_dr2;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_20;
  undefined4 **ppuStack_1c;
  undefined4 **appuStack_18 [2];
  
  appuStack_18[0] = (undefined4 ***)0x0;
  ppuStack_1c = (undefined4 ***)0x0;
  uStack_20 = 0;
  (*(code *)PTR_FUN_8c0d54f4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d5504)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5500,
             PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc,ar4);
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc;
  pdVar5 = ar4;
  (*(code *)PTR_FUN_8c0d5508)(ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5500,puVar4,ar4);
  (*(code *)PTR_FUN_8c0d550c)(ar4 + 2,0,puVar4,pdVar5);
  (*(code *)PTR_FUN_8c0d5504)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5510,
             PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc,ar4);
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc;
  pdVar5 = ar4;
  (*(code *)PTR_FUN_8c0d5508)(ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5510,puVar4,ar4);
  (*(code *)PTR_FUN_8c0d550c)((int)ar4 + 0x1c,0,puVar4,pdVar5);
  iVar1 = (*(code *)PTR_FUN_8c0d5518)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5514,
                     PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc,&ppuStack_1c);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d5520)
              (PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5514,
               PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d551c,0,2);
  }
  puVar6 = &uStack_20;
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc;
  iVar1 = (*(code *)PTR_FUN_8c0d5524)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5514,puVar4,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    puVar4 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d5520)
              (PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5514,
               PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5528,0,2);
  }
  (*(code *)PTR_FUN_8c0d550c)(ar4 + 2,ppuStack_1c,puVar4,puVar6);
  iVar1 = (*(code *)PTR_FUN_8c0d5518)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d552c,
                     PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc,&ppuStack_1c);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d5520)
              (PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d552c,
               PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d551c,0,2);
  }
  puVar6 = &uStack_20;
  puVar4 = PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d54fc;
  iVar1 = (*(code *)PTR_FUN_8c0d5524)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d552c,puVar4,puVar6);
  if (iVar1 == 0) {
    puVar6 = (undefined4 *)0x2;
    puVar4 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d5520)
              (PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d552c,
               PTR_s_GRAPHICS_COMMON_8c0d54f8 + DAT_8c0d5528,0,2);
  }
  a5 = (undefined4 ***)ppuStack_1c;
  (*(code *)PTR_FUN_8c0d550c)((int)ar4 + 0x1c,ppuStack_1c,puVar4,puVar6);
  iVar1 = (*(code *)PTR_FUN_8c0d5530)((int)ar4 + 0x1c,a5,puVar4,puVar6);
  uVar2 = (*(code *)PTR_FUN_8c0d5534)(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),a5,puVar4,puVar6);
  *(undefined4 *)((int)ar4 + 0x2c) = uVar2;
  (*(code *)PTR_FUN_8c0d5538)(ar4,a5,puVar4,puVar6);
  while (iVar1 = (*(code *)PTR_get_field_d0_0d3f70_8c0d553c)((int)ar4 + 0x34,a5,puVar4,puVar6),
        iVar1 != 0) {
    iVar1 = (*(code *)PTR_get_field_d0_0d3f70_8c0d553c)((int)ar4 + 0x34,a5,puVar4,puVar6);
    appuStack_18[0] =
         (undefined4 **)
         (*(code *)PTR_s_CWaterSnowList_GetWaterSnowO_0fe76c_8c0d5540)
                   ((int)ar4 + 0x34,iVar1 + -1,puVar4,puVar6);
    (*(code *)PTR_s_CWaterSnowList_TakeOut_0fe694_8c0d5544)
              ((int)ar4 + 0x34,appuStack_18[0],puVar4,puVar6);
    a5 = appuStack_18;
    (*(code *)PTR_FUN_8c0d554c)(DAT_8c0d5548,a5,puVar4,puVar6);
  }
  (*(code *)PTR_FUN_8c0d5550)((int)ar4 + 0x34,a5,puVar4,puVar6);
  iVar1 = 0;
  while ((uVar2 = SUB84(in_dr2,0), iVar1 < 0x32 &&
         (a4 = DAT_8c0d5548,
         appuStack_18[0] = (undefined4 **)(*(code *)PTR_FUN_8c0d5554)(DAT_8c0d5548,a5,puVar4,puVar6)
         , (undefined4 ***)appuStack_18[0] != (undefined4 ***)0x0))) {
    iVar3 = (*(code *)PTR_rand_8c0d5558)(a4,a5,puVar4,puVar6);
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d555c,(float)iVar3);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d5560,DAT_8c0d555c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d5560,fVar7);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d5564,DAT_8c0d5560);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d5564,fVar7);
    }
    else {
      dVar9 = (double)CONCAT44(_DAT_8c0d5568,DAT_8c0d5564);
    }
    if (in_FPSCR_PR == '\0') {
      ppuVar8 = (undefined4 **)(SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      appuStack_18[0][2] = ppuVar8;
    }
    else {
      *(undefined8 *)(appuStack_18[0] + 2) = in_xd0;
    }
    iVar3 = (*(code *)PTR_rand_8c0d5558)(a4,a5,puVar4,puVar6);
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)ar4,uVar2);
    }
    else {
      in_dr2 = *ar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d555c,(float)iVar3);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d5560,DAT_8c0d555c);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20)),SUB84(in_dr2,0)
                               );
    }
    else {
      in_dr2 = in_dr2 * (dVar9 / dVar9);
    }
    if (in_FPSCR_SZ == '\0') {
      appuStack_18[0][3] = (undefined4 **)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(appuStack_18[0] + 3) = in_dr2;
    }
    iVar3 = (*(code *)PTR_rand_8c0d5558)(a4,a5,puVar4,puVar6);
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d555c,(float)iVar3);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d5560,DAT_8c0d555c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(_DAT_8c0d5568,fVar7);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c0d556c,_DAT_8c0d5568);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0d556c,fVar7);
    }
    else {
      dVar9 = (double)CONCAT44(PTR_FUN_8c0d5570,DAT_8c0d556c);
    }
    if (in_FPSCR_PR == '\0') {
      ppuVar8 = (undefined4 **)(SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ppuVar8 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      appuStack_18[0][4] = ppuVar8;
    }
    else {
      *(undefined8 *)(appuStack_18[0] + 4) = in_xd0;
    }
    a5 = (undefined4 ***)appuStack_18[0];
    (*(code *)PTR_FUN_8c0d5570)((int)ar4 + 0x34,appuStack_18[0],puVar4,puVar6);
    iVar1 = iVar1 + 1;
  }
  uVar2 = (*(code *)PTR_FUN_8c0d5574)(ar4,a5,puVar4,puVar6);
  return uVar2;
}



/* FUN_8c0d5578 @ 8c0d5578 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5578(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d559c)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d559c)(ar4 + DAT_8c0d55a0,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d55a4 @ 8c0d55a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d55a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_s_015312_8c0d55c8)(ar4 + 8,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d55c8)(ar4 + DAT_8c0d55cc,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d55d0 @ 8c0d55d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d55d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0d5608)(DAT_8c0d5604,*(undefined4 *)(DAT_8c0d5600 + ar4),ar6,ar7);
  iVar1 = *(int *)(DAT_8c0d560c + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_FUN_8c0d5610)(DAT_8c0d5604,*(undefined4 *)(DAT_8c0d560c + ar4),1,ar7);
  }
  return iVar1;
}



/* FUN_8c0d5614 @ 8c0d5614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5614(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0d5680)(DAT_8c0d567c,*(undefined4 *)(DAT_8c0d5678 + ar4),ar6,ar7);
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c0d5684 + iVar1 * 0x18 + ar4) != -1) {
      (*(code *)PTR_FUN_8c0d5688)
                (DAT_8c0d567c,*(undefined4 *)(DAT_8c0d5684 + iVar1 * 0x18 + ar4),ar6,ar7);
    }
  }
  return 2;
}



/* FUN_8c0d568c @ 8c0d568c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d568c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d56b0)(DAT_8c0d56ac,*(undefined4 *)(DAT_8c0d56a8 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d56b4 @ 8c0d56b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d56b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d56d8)(DAT_8c0d56d4,*(undefined4 *)(DAT_8c0d56d0 + ar4),ar6,ar7);
  return uVar1;
}



/* FUN_8c0d56dc @ 8c0d56dc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d56dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d57b8) = DAT_8c0d57bc;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d57b8) = CONCAT44(_DAT_8c0d57c0,DAT_8c0d57bc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + _DAT_8c0d57c0) = DAT_8c0d57bc;
  }
  else {
    *(undefined8 *)(ar4 + _DAT_8c0d57c0) = CONCAT44(_DAT_8c0d57c0,DAT_8c0d57bc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d57c4) = DAT_8c0d57bc;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d57c4) = CONCAT44(_DAT_8c0d57c0,DAT_8c0d57bc);
  }
  *(undefined2 *)(ar4 + 4) = 0;
  *(undefined4 *)(DAT_8c0d57c8 + ar4) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c0d57cc + iVar1 * 0x18 + ar4) != -1) {
      (*(code *)PTR_FUN_8c0d57d4)
                (DAT_8c0d57d0,*(undefined4 *)(DAT_8c0d57cc + iVar1 * 0x18 + ar4),ar6,ar7);
      (*(code *)PTR_FUN_8c0d57d8)(DAT_8c0d57d0,iVar1 * 0x18 + ar4 + DAT_8c0d57cc,ar6,ar7);
      *(undefined4 *)(DAT_8c0d57cc + iVar1 * 0x18 + ar4) = 0xffffffff;
    }
  }
  *(undefined4 *)(DAT_8c0d57dc + ar4) = 0xffffffe2;
  DAT_8c0d57e0[3] = (char)DAT_8c0d57e4;
  DAT_8c0d57e0[2] = 0x32;
  DAT_8c0d57e0[1] = 0x32;
  *DAT_8c0d57e0 = 0x1f;
  return 0x1f;
}



/* s_GRAPHICS_ENV_0d57ee @ 8c0d57e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d57ee(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  undefined4 *a5;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 auStack_14 [2];
  
  cVar1 = (char)ar6;
  auStack_14[0] = 0;
  a5 = ar5;
  while( true ) {
    iVar2 = (*(code *)PTR_get_field_d0_0d3f70_8c0d5960)(ar4 + 0x34,a5,ar6,ar7);
    if (iVar2 == 0) break;
    iVar2 = (*(code *)PTR_get_field_d0_0d3f70_8c0d5960)(ar4 + 0x34,a5,ar6,ar7);
    auStack_14[0] =
         (*(code *)PTR_s_CWaterSnowList_GetWaterSnowO_0fe76c_8c0d5964)
                   (ar4 + 0x34,iVar2 + -1,ar6,ar7);
    (*(code *)PTR_s_CWaterSnowList_TakeOut_0fe694_8c0d5968)(ar4 + 0x34,auStack_14[0],ar6,ar7);
    a5 = auStack_14;
    (*(code *)PTR_FUN_8c0d5970)(DAT_8c0d596c,a5,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0d5974)(ar4 + 0x34,a5,ar6,ar7);
  if (cVar1 == '\x02') {
    (*(code *)PTR_FUN_8c0d5984)
              (ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d599c,
               PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c,ar4);
    puVar4 = PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c;
    iVar2 = ar4;
    (*(code *)PTR_FUN_8c0d5988)(ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d599c,puVar4,ar4);
    (*(code *)PTR_FUN_8c0d598c)(ar4 + 0x10,0,puVar4,iVar2);
    (*(code *)PTR_FUN_8c0d5984)
              (ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d59a0,
               PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c,ar4);
    puVar4 = PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c;
    iVar2 = ar4;
    (*(code *)PTR_FUN_8c0d5988)(ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d59a0,puVar4,ar4);
    uVar3 = (*(code *)PTR_FUN_8c0d598c)(ar4 + 0x1c,0,puVar4,iVar2);
  }
  else {
    (*(code *)PTR_FUN_8c0d5984)
              (ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d5980,
               PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c,ar4);
    puVar4 = PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c;
    iVar2 = ar4;
    (*(code *)PTR_FUN_8c0d5988)(ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d5980,puVar4,ar4);
    (*(code *)PTR_FUN_8c0d598c)(ar4 + 0x10,0,puVar4,iVar2);
    (*(code *)PTR_FUN_8c0d5984)
              (ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d5990,
               PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c,ar4);
    puVar4 = PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d597c;
    iVar2 = ar4;
    (*(code *)PTR_FUN_8c0d5988)(ar5,PTR_s_GRAPHICS_COMMON_8c0d5978 + DAT_8c0d5990,puVar4,ar4);
    uVar3 = 0;
    (*(code *)PTR_FUN_8c0d598c)(ar4 + 0x1c,0,puVar4,iVar2);
    uVar3 = (*(code *)PTR_s_Failed_s_015312_8c0d5998)(ar4 + DAT_8c0d5994,uVar3,puVar4,iVar2);
  }
  return uVar3;
}



/* FUN_8c0d59a4 @ 8c0d59a4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d5aa2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d59a4(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a4;
  int a5;
  int a6;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int iVar2;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  ulonglong in_dr0;
  double dVar7;
  float fVar8;
  undefined8 in_dr14;
  undefined8 in_xd14;
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
    puVar4 = auStack_c;
  }
  else {
    puVar4 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar4 + -4) = unaff_r14;
  *(undefined4 *)(puVar4 + -8) = unaff_r13;
  *(undefined4 *)(puVar4 + -0xc) = 1;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar4 + -0x18) = in_PR;
  iVar2 = 0;
  a5 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0d5c0c)(puVar4 + -0x28,ar5,ar6,ar7);
  iVar3 = 0;
  while ((iVar3 < DAT_8c0d5c54 && (iVar2 < ar5))) {
    *(int *)(puVar4 + -0x60) = iVar3;
    uVar1 = (*(code *)PTR_get_field_44_0d5ca0_8c0d5c14)
                      ((*(int *)(puVar4 + -0x60) * 0x10 + *(int *)(puVar4 + -0x60)) * 8 + ar4 +
                       DAT_8c0d5c10,a5,a6,ar7);
    *(undefined4 *)(puVar4 + -0x50) = uVar1;
    if (*(int *)(puVar4 + -0x50) == 0) {
      uVar1 = (*(code *)PTR_get_field_164_0d5c94_8c0d5c18)(ar6,a5,a6,ar7);
      *(undefined4 *)(puVar4 + -0x54) = uVar1;
      if (*(int *)(puVar4 + -0x54) == 2) {
        *(int *)(puVar4 + -100) = iVar3;
        (*(code *)PTR_FUN_8c0d5c1c)
                  ((*(int *)(puVar4 + -100) * 0x10 + *(int *)(puVar4 + -100)) * 8 + ar4 +
                   DAT_8c0d5c10,a5,a6,ar7);
        *(int *)(puVar4 + -0x68) = iVar3;
        (*(code *)PTR_FUN_8c0d5c20)
                  ((*(int *)(puVar4 + -0x68) * 0x10 + *(int *)(puVar4 + -0x68)) * 8 + ar4 +
                   DAT_8c0d5c10,a5,a6,ar7);
        *(int *)(puVar4 + -0x6c) = iVar3;
        *(undefined1 **)(puVar4 + -0x88) = puVar4 + -0x38;
        (*(code *)PTR_FUN_8c0d5c24)
                  ((*(int *)(puVar4 + -0x6c) * 0x10 + *(int *)(puVar4 + -0x6c)) * 8 + ar4 +
                   DAT_8c0d5c10,a5,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c0d5c28)(puVar4 + -0x28,puVar4 + -0x38,a6,ar7);
        a5 = -1;
        a4 = puVar4 + -0x38;
        (*(code *)PTR_Vec3_dtor_8c0d5c2c)(a4,0xffffffff,a6,ar7);
        uVar1 = (*(code *)PTR_rand_8c0d5c30)(a4,a5,a6,ar7);
        *(undefined4 *)(puVar4 + -0x58) = uVar1;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c0d5c34,(float)*(int *)(puVar4 + -0x58));
        }
        else {
          dVar7 = (double)CONCAT44(DAT_8c0d5c38,DAT_8c0d5c34);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 / dVar7,0);
        }
        fVar6 = DAT_8c0d5c38;
        fVar8 = DAT_8c0d5c3c;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = fVar5;
          fVar8 = DAT_8c0d5c38;
        }
        if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
          *(int *)(puVar4 + -0x74) = iVar3;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44((int)*(ulonglong *)(ar6 + DAT_8c0d5c40),fVar6);
          }
          else {
            in_dr0 = *(ulonglong *)(ar6 + DAT_8c0d5c40);
          }
          (*(code *)PTR_FUN_8c0d5c44)
                    ((*(int *)(puVar4 + -0x74) * 0x10 + *(int *)(puVar4 + -0x74)) * 8 + ar4 +
                     DAT_8c0d5c10,a5,a6,ar7);
        }
        else {
          *(int *)(puVar4 + -0x70) = iVar3;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44((int)*(ulonglong *)(ar6 + DAT_8c0d5c40),fVar6);
          }
          else {
            in_dr0 = *(ulonglong *)(ar6 + DAT_8c0d5c40);
          }
          (*(code *)PTR_FUN_8c0d5c44)
                    ((*(int *)(puVar4 + -0x70) * 0x10 + *(int *)(puVar4 + -0x70)) * 8 + ar4 +
                     DAT_8c0d5c10,a5,a6,ar7);
        }
        iVar2 = iVar2 + 1;
      }
      else {
        *(int *)(puVar4 + -0x78) = iVar3;
        (*(code *)PTR_FUN_8c0d5c48)
                  ((*(int *)(puVar4 + -0x78) * 0x10 + *(int *)(puVar4 + -0x78)) * 8 + ar4 +
                   DAT_8c0d5c10,a5,a6,ar7);
        *(int *)(puVar4 + -0x7c) = iVar3;
        *(undefined1 **)(puVar4 + -0x88) = puVar4 + -0x48;
        (*(code *)PTR_FUN_8c0d5c24)
                  ((*(int *)(puVar4 + -0x7c) * 0x10 + *(int *)(puVar4 + -0x7c)) * 8 + ar4 +
                   DAT_8c0d5c10,a5,a6,ar7);
        (*(code *)PTR_FUN_8c0d5c4c)(puVar4 + -0x48,ar6 + 4,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar4 + -0x5c) = (int)(in_dr0 >> 0x20);
          in_dr0 = (ulonglong)*(uint *)(puVar4 + -0x5c);
        }
        else {
          *(ulonglong *)(puVar4 + -0x5c) = in_dr0;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44((int)*(ulonglong *)(ar6 + DAT_8c0d5c40),(int)in_dr0);
        }
        else {
          in_dr0 = *(ulonglong *)(ar6 + DAT_8c0d5c40);
        }
        *(uint *)(puVar4 + -0x4c) =
             (uint)(in_FPSCR_PR == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20));
        a5 = -1;
        (*(code *)PTR_Vec3_dtor_8c0d5c2c)(puVar4 + -0x48,0xffffffff,a6,ar7);
        if (*(int *)(puVar4 + -0x4c) == 0) {
          *(int *)(puVar4 + -0x80) = iVar3;
          (*(code *)PTR_FUN_8c0d5c50)
                    ((*(int *)(puVar4 + -0x80) * 0x10 + *(int *)(puVar4 + -0x80)) * 8 + ar4 +
                     DAT_8c0d5c10,a5,a6,ar7);
          *(int *)(puVar4 + -0x84) = iVar3;
          (*(code *)PTR_FUN_8c0d5c20)
                    ((*(int *)(puVar4 + -0x84) * 0x10 + *(int *)(puVar4 + -0x84)) * 8 + ar4 +
                     DAT_8c0d5c10,a5,a6,ar7);
          iVar2 = iVar2 + 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0d5c2c)(puVar4 + -0x28,0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c0d5c58 @ 8c0d5c58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d5c58(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
  }
  return (int)ar4 + 4;
}



/* FUN_8c0d5c68 @ 8c0d5c68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5c68(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)PTR_Vec3_ctor_copy_8c0d5c84)(in_stack_00000000,ar4,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d5c88 @ 8c0d5c88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5c88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = 1;
  return 0x44;
}



/* get_field_164_0d5c94 @ 8c0d5c94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_164_0d5c94(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0d5c9c + ar4);
}



/* get_field_44_0d5ca0 @ 8c0d5ca0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_44_0d5ca0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x44);
}



/* FUN_8c0d5ca8 @ 8c0d5ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d5ca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < DAT_8c0d5d24; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)PTR_get_field_44_0d5ca0_8c0d5d1c)
                      (iVar3 * 0x88 + ar4 + DAT_8c0d5d18,ar5,ar6,ar7);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0d5d20)(iVar3 * 0x88 + ar4 + DAT_8c0d5d18,ar5,ar6,ar7);
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



/* FUN_8c0d5d28 @ 8c0d5d28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5d28(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(DAT_8c0d5db8 + 2) == '2') {
    (*(code *)PTR_FUN_8c0d5dc0)(PTR_DAT_8c0d5dbc,ar5,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c0d5dc0)(PTR_DAT_8c0d5dc4,ar5,ar6,ar7);
  }
  for (iVar3 = 0; iVar3 < DAT_8c0d5dd8; iVar3 = iVar3 + 1) {
    iVar1 = (*(code *)PTR_get_field_44_0d5ca0_8c0d5dcc)
                      (iVar3 * 0x88 + ar4 + DAT_8c0d5dc8,ar5,ar6,ar7);
    if (iVar1 == 1) {
      ar5 = ar4 + DAT_8c0d5dd0;
      (*(code *)PTR_FUN_8c0d5dd4)(iVar3 * 0x88 + ar4 + DAT_8c0d5dc8,ar5,ar6,ar7);
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c0d5dc0)(PTR_DAT_8c0d5ddc,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c0d5de0 @ 8c0d5de0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d5de0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0d5e24)(ar4 + 0x10,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_LAB_8c0d5e28)(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,ar6,ar7);
  *(int *)(ar4 + 0x14) = iVar1 + 4;
  return iVar1;
}



/* FUN_8c0d5e2c @ 8c0d5e2c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d5e66) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d5e2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*DAT_8c0d5e7c == 1) {
    (*(code *)PTR_FUN_8c0d5e88)
              ((uint)DAT_8c0d5e80[2] << 0x10 | DAT_8c0d5e84 | (uint)DAT_8c0d5e80[1] << 8 |
               (uint)*DAT_8c0d5e80,ar5,ar6,ar7);
    *DAT_8c0d5e7c = 0;
  }
  uVar1 = (*(code *)PTR_FUN_8c0d5e98)(DAT_8c0d5e94,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d5e9c @ 8c0d5e9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d5e9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d5ed0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d5ed4)(ar4 + 8,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d5ed8)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d5edc)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* s_GRAPHICS_ENV_0d5ee6 @ 8c0d5ee0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_ENV_0d5ee6(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a7;
  int *a5;
  undefined *a6;
  int **a7_00;
  uint uVar2;
  int *piStack_18;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = 0;
  piStack_18 = (int *)0x0;
  iVar1 = (*(code *)PTR_FUN_8c0d6028)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6024,
                     PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6020,auStack_14);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d6030)
              (PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6024,
               PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d602c,0,2);
  }
  a7_00 = &piStack_18;
  a6 = PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6020;
  iVar1 = (*(code *)PTR_FUN_8c0d6034)(ar5,PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6024,a6,a7_00);
  if (iVar1 == 0) {
    a7_00 = (int **)0x2;
    a6 = (undefined *)0x0;
    (*(code *)PTR_report_error_message_8c0d6030)
              (PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6024,
               PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6038,0,2);
  }
  for (uVar2 = 0; uVar2 < (uint)piStack_18[1]; uVar2 = uVar2 + 1) {
    *(uint *)(uVar2 * 0xc + *piStack_18 + 4) =
         *(uint *)(uVar2 * 0xc + *piStack_18 + 4) | DAT_8c0d603c;
  }
  (*(code *)PTR_FUN_8c0d6040)(ar4 + 2,auStack_14[0],a6,a7_00);
  a5 = piStack_18;
  (**(code **)(*ar4 + 8))(ar4,piStack_18,a6,a7_00);
  a7 = (*(code *)PTR_get_field_4_0253e4_8c0d6044)(ar4,a5,a6,a7_00);
  iVar1 = (*(code *)PTR_FUN_8c0d604c)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6048,
                     PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6020,a7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_report_error_message_8c0d6030)
                      (PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6054,
                       PTR_s_GRAPHICS_COMMON_8c0d601c + DAT_8c0d6050,0,2);
  }
  return iVar1;
}



/* s_Failed_to_set_texture_wrap_0d6058 @ 8c0d6058 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_Failed_to_set_texture_wrap_0d6058(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d6070)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d6074 @ 8c0d6074 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d6074(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d608c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d6090 @ 8c0d6090 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6090(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d60b0)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d60b4)(ar4 + 8,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d60b8 @ 8c0d60b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d60b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x20) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = CONCAT44(0x3f800000,in_fr1);
  }
  return 0;
}



/* s_GRAPHICS_ENV_0d60cc @ 8c0d60c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d60cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d6114)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d6110,
             PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d610c,ar4);
  uVar1 = (*(code *)PTR_FUN_8c0d6118)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d6110,
                     PTR_s_GRAPHICS_COMMON_8c0d6108 + DAT_8c0d610c,ar4);
  return uVar1;
}



/* FUN_8c0d611c @ 8c0d611c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d611c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char in_FPSCR_SZ;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0d6154)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x10) = (undefined4)DAT_8c0d6158;
  }
  else {
    *(undefined8 *)(ar4 + 0x10) = CONCAT44(DAT_8c0d6158._4_4_,(undefined4)DAT_8c0d6158);
  }
  *(undefined4 *)(ar4 + 0x1c) = DAT_8c0d6158._4_4_;
  *(undefined4 *)(ar4 + 0x20) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x14) = DAT_8c0d6160;
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = CONCAT44(_FUN_8c0d6164,DAT_8c0d6160);
  }
  *(undefined4 *)(ar4 + 0x18) = 0;
  return ar4;
}



/* FUN_8c0d6164 @ 8c0d6164 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

float * FUN_8c0d6164(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c0d6244,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x14);
    dVar4 = (double)CONCAT44(_DAT_8c0d6248,DAT_8c0d6244);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x14) = fVar3;
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),*(undefined4 *)(ar4 + 4));
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 4);
    dVar4 = *(double *)(ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 4) = fVar3;
    dVar4 = (double)CONCAT44(_DAT_8c0d6248,*(undefined4 *)(ar4 + 8));
  }
  else {
    *(undefined8 *)(ar4 + 4) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 8);
    dVar4 = (double)CONCAT44(DAT_8c0d624c,_DAT_8c0d6248);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 8) = fVar3;
    dVar4 = (double)CONCAT44(DAT_8c0d624c,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    *(undefined8 *)(ar4 + 8) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x10);
    dVar4 = (double)CONCAT44(_DAT_8c0d6250,DAT_8c0d624c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x10) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x10) = in_xd0;
  }
  pfVar1 = DAT_8c0d6260;
  pfVar2 = *(float **)(ar4 + 0x18);
  if (pfVar2 == (float *)0x0) {
    if (*(uint *)(ar4 + 0x1c) < _DAT_8c0d6250) {
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + DAT_8c0d6254;
    }
    pfVar2 = (float *)(ar4 + 0x10);
    if (in_FPSCR_SZ == '\0') {
      fVar3 = *pfVar2;
    }
    if (in_FPSCR_PR != '\0' || 1.0 <= fVar3) {
      *(undefined4 *)(ar4 + 0x1c) = 0xffffffff;
      pfVar2 = (float *)0x1;
      *(undefined4 *)(ar4 + 0x18) = 1;
    }
  }
  else if (pfVar2 == (float *)0x1) {
    pfVar2 = (float *)(*(code *)PTR_libgcc_divide_helper_0103d0_8c0d6258)(ar5,0x2d,ar6,ar7);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)0x2;
      *(undefined4 *)(ar4 + 0x18) = 2;
    }
  }
  else if (pfVar2 == (float *)0x2) {
    if (DAT_8c0d625c < *(uint *)(ar4 + 0x1c)) {
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) - (int)DAT_8c0d6260;
      pfVar2 = pfVar1;
    }
    else {
      pfVar2 = (float *)0x0;
      *(undefined4 *)(ar4 + 0x20) = 0;
    }
  }
  return pfVar2;
}



/* FUN_8c0d6264 @ 8c0d6264 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d6264(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  undefined4 in_fr1;
  ulonglong uVar1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0d6370)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d6370)(ar4 + 0x10,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d6370)(ar4 + 0x20,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d6370)(ar4 + 0x30,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d6370)(ar4 + 0x40,ar5,ar6,ar7);
  a7 = 0x20;
  a5 = PTR_FUN_8c0d6378;
  a6 = PTR_FUN_8c0d6374;
  (*(code *)PTR_FUN_8c0d637c)(ar4 + 0x68,PTR_FUN_8c0d6378,PTR_FUN_8c0d6374,0x20);
  (*(code *)PTR_FUN_8c0d6378)(ar4 + DAT_8c0d6380,a5,a6,a7);
  (*(code *)PTR_FUN_8c0d6388)(ar4 + DAT_8c0d6384,a5,a6,a7);
  (*(code *)PTR_FUN_8c0d6378)(ar4 + DAT_8c0d638c,a5,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x54) = (undefined4)DAT_8c0d6390;
    uVar1 = CONCAT44(DAT_8c0d6390._4_4_,in_fr1);
    *(undefined4 *)(ar4 + 0x58) = DAT_8c0d6390._4_4_;
  }
  else {
    *(undefined8 *)(ar4 + 0x54) = CONCAT44(DAT_8c0d6390._4_4_,(undefined4)DAT_8c0d6390);
    uVar1 = CONCAT44(DAT_8c0d6398,DAT_8c0d6390._4_4_);
    *(ulonglong *)(ar4 + 0x58) = uVar1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x5c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x5c) = uVar1 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d6398) = DAT_8c0d639c;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d6398) = CONCAT44(DAT_8c0d63a0,DAT_8c0d639c);
  }
  (*(code *)PTR_FUN_8c0d63b0)(ar4 + DAT_8c0d638c,a5,a6,a7);
  (*(code *)PTR_FUN_8c0d63b0)(ar4 + DAT_8c0d6380,a5,a6,a7);
  (*(code *)PTR_FUN_8c0d63bc)(ar4,a5,a6,a7);
  return ar4;
}



/* free_if_nonnull_wrap_0d63c0 @ 8c0d63c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_0d63c0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = PTR_DAT_8c0d63f0, 0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0d63f4)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0d63f8 @ 8c0d63f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d63f8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d6420)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d6424 @ 8c0d6424 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d6424(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0d6460;
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_0d63c0_8c0d6464)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d6468)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d646c @ 8c0d646c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d646c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d649c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d64a0 @ 8c0d64a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d64a0(undefined8 *ar4,undefined4 ar5,undefined8 *ar6,undefined8 *ar7)

{
  undefined4 uVar1;
  undefined8 *a5;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  double in_dr0;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  undefined8 in_dr14;
  uint uVar7;
  double dVar6;
  undefined8 in_xd0;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_8);
  }
  else {
    puVar2 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar2 + -8) = in_PR;
  (*(code *)PTR_Vec3_ctor_zero_8c0d66a8)((undefined1 *)((int)puVar2 + -0x18),ar5,ar6,ar7);
  uVar7 = (uint)((ulonglong)in_dr14 >> 0x20);
  (*(code *)PTR_Vec3_ctor_zero_8c0d66a8)((undefined1 *)((int)puVar2 + -0x28),ar5,ar6,ar7);
  dVar6 = (double)((ulonglong)uVar7 << 0x20);
  switch(*(undefined4 *)((int)ar4 + 100)) {
  case 0:
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0xb),*(undefined4 *)(ar4 + 1));
    }
    else {
      uVar3 = ar4[0xb];
    }
    if (in_FPSCR_PR == '\0' && (float)uVar3 < (float)((ulonglong)uVar3 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 1) = *(undefined4 *)(ar4 + 0xb);
      }
      else {
        ar4[1] = ar4[0xb];
      }
    }
    break;
  case 2:
    if (*(int *)(ar4 + 0xc) != 0) {
      (**(code **)(DAT_8c0d66ac + *(int *)(*(int *)(ar4 + 0xc) + 8)))
                (*(int *)(ar4 + 0xc),ar5,ar6,ar7);
      ar7 = ar4 + 7;
      ar6 = (undefined8 *)((int)ar4 + 0x34);
      a5 = ar4 + 6;
      (**(code **)(DAT_8c0d66b0 + *(int *)(*(int *)(ar4 + 0xc) + 8)))
                (*(int *)(ar4 + 0xc),a5,ar6,ar7);
      (**(code **)(DAT_8c0d66b4 + *(int *)(*(int *)(ar4 + 0xc) + 8)))
                (*(int *)(ar4 + 0xc),a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + -0x3c) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)((int)puVar2 + -0x3c) = in_dr0;
      }
      *(undefined8 **)((int)puVar2 + -0x54) = ar4;
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x3c),
                                  *(undefined4 *)(*(int *)((int)puVar2 + -0x54) + 0x38));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar2 + -0x54) + 0x38);
        in_dr0 = *(double *)((int)puVar2 + -0x3c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) + fVar5);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar2 + -0x54) + 0x38) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar2 + -0x54) + 0x38) = in_xd0;
      }
    }
    *(undefined1 **)((int)puVar2 + -0x58) = (undefined1 *)((int)puVar2 + -0x38);
    (*(code *)PTR_Vec3_sub_8c0d66b8)(ar4 + 6,ar4,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c0d66bc)
              ((undefined1 *)((int)puVar2 + -0x18),(undefined1 *)((int)puVar2 + -0x38),ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0d66c0)((undefined1 *)((int)puVar2 + -0x38),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0d66c4)((undefined1 *)((int)puVar2 + -0x18),uVar1,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x40) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)((int)puVar2 + -0x40) = in_dr0;
    }
    (**(code **)(*(int *)((int)ar4 + DAT_8c0d66c8) + 8))
              ((int *)((int)ar4 + DAT_8c0d66c8),uVar1,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x44) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)((int)puVar2 + -0x44))
      ;
    }
    else {
      *(double *)((int)puVar2 + -0x44) = in_dr0;
      in_xd14 = *(double *)((int)puVar2 + -0x44);
    }
    (*(code *)PTR_Vec3_length_8c0d66cc)((undefined1 *)((int)puVar2 + -0x18),uVar1,ar6,ar7);
    fVar5 = SUB84(dVar6,0);
    dVar4 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(fVar5,*(undefined4 *)((int)puVar2 + -0x18));
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x28) = (int)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(fVar5,*(undefined4 *)((int)puVar2 + -0x14));
    }
    else {
      *(double *)((int)puVar2 + -0x28) = dVar4;
      dVar4 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar2 + -0x24) = (int)((ulonglong)dVar4 >> 0x20);
      dVar4 = (double)CONCAT44(*(undefined4 *)((int)puVar2 + -0x10),SUB84(dVar4,0));
    }
    else {
      *(double *)((int)puVar2 + -0x24) = dVar4;
      dVar4 = *(double *)((int)puVar2 + -0x10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = fVar5 * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar2 + -0x20) = fVar5;
    }
    else {
      *(double *)((int)puVar2 + -0x20) = in_xd14;
    }
    (*(code *)PTR_FUN_8c0d66d0)(ar4,(undefined1 *)((int)puVar2 + -0x28),ar6,ar7);
    break;
  case 4:
    ar6 = ar4 + 6;
    uVar1 = (*(code *)PTR_FUN_8c0d66d4)(ar4,ar4,ar6,ar7);
    *(undefined4 *)((int)puVar2 + -0x48) = uVar1;
    if (*(int *)((int)puVar2 + -0x48) == 4) {
      *(undefined4 *)((int)ar4 + 100) = 3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 4) = *(undefined4 *)ar4;
    }
    else {
      ar4[4] = *ar4;
    }
    break;
  case 5:
    ar6 = ar4 + 6;
    uVar1 = (*(code *)PTR_FUN_8c0d66d4)(ar4,ar4,ar6,ar7);
    *(undefined4 *)((int)puVar2 + -0x4c) = uVar1;
    if (*(int *)((int)puVar2 + -0x4c) == 4) {
      *(undefined4 *)((int)ar4 + 100) = 0;
    }
    break;
  case 6:
    ar6 = ar4 + 6;
    uVar1 = (*(code *)PTR_FUN_8c0d66d4)(ar4,ar4,ar6,ar7);
    *(undefined4 *)((int)puVar2 + -0x50) = uVar1;
    if (*(int *)((int)puVar2 + -0x50) == 4) {
      *(undefined4 *)((int)ar4 + 100) = 0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 4) = *(undefined4 *)ar4;
    }
    else {
      ar4[4] = *ar4;
    }
  }
  (*(code *)PTR_Vec3_dtor_8c0d66c0)((undefined1 *)((int)puVar2 + -0x28),0xffffffff,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0d66c0)((undefined1 *)((int)puVar2 + -0x18),0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d66d8 @ 8c0d66d8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d66d8(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  double dVar3;
  float fVar5;
  float fVar6;
  double dVar4;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  double in_xd14;
  bool bVar7;
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
  *(undefined4 *)(puVar2 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(float *)((int)ar4 + 0x54),*(float *)(ar4 + 1));
  }
  else {
    in_xd0 = ar4[1];
    dVar3 = *(double *)((int)ar4 + 0x54);
  }
  if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar3 >> 0x20) < SUB84(dVar3,0)) {
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)((int)ar4 + 0x54);
      dVar3 = (double)CONCAT44(fVar5,SUB84(dVar3,0));
      *(float *)(ar4 + 1) = fVar5;
    }
    else {
      dVar3 = *(double *)((int)ar4 + 0x54);
      ar4[1] = dVar3;
    }
  }
  if (*(float *)((int)ar4 + 100) == 4.2039e-45) {
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)ar4;
      fVar6 = DAT_8c0d68f4;
    }
    else {
      in_xd0 = *ar4;
      fVar5 = DAT_8c0d68f4;
      fVar6 = _DAT_8c0d68f8;
    }
    if (in_FPSCR_PR != '\0' || fVar6 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)ar4;
        fVar6 = _DAT_8c0d68f8;
      }
      else {
        in_xd0 = *ar4;
        fVar5 = _DAT_8c0d68f8;
        fVar6 = DAT_8c0d68fc;
      }
      if (in_FPSCR_PR == '\0' && fVar6 < fVar5) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)ar4 = _DAT_8c0d68f8;
        }
        else {
          *ar4 = (double)CONCAT44(DAT_8c0d68fc,_DAT_8c0d68f8);
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      *(float *)ar4 = DAT_8c0d68f4;
    }
    else {
      *ar4 = (double)CONCAT44(_DAT_8c0d68f8,DAT_8c0d68f4);
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + 1);
      fVar6 = DAT_8c0d68fc;
    }
    else {
      in_xd0 = ar4[1];
      fVar5 = DAT_8c0d68fc;
      fVar6 = _DAT_8c0d6900;
    }
    if (in_FPSCR_PR != '\0' || fVar6 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(_DAT_8c0d6900,*(float *)(ar4 + 1));
      }
      else {
        in_xd0 = ar4[1];
        dVar3 = (double)CONCAT44(DAT_8c0d6904,_DAT_8c0d6900);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar3 >> 0x20) < SUB84(dVar3,0)) {
        if (in_FPSCR_SZ == '\0') {
          dVar3 = (double)CONCAT44(_DAT_8c0d6900,SUB84(dVar3,0));
          *(float *)(ar4 + 1) = _DAT_8c0d6900;
        }
        else {
          dVar3 = (double)CONCAT44(DAT_8c0d6904,_DAT_8c0d6900);
          ar4[1] = dVar3;
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0d68fc,fVar5);
      *(float *)(ar4 + 1) = DAT_8c0d68fc;
    }
    else {
      dVar3 = (double)CONCAT44(_DAT_8c0d6900,DAT_8c0d68fc);
      ar4[1] = dVar3;
    }
  }
  (**(code **)(*(int *)((int)ar4 + DAT_8c0d6904) + 0xc))
            ((int *)((int)ar4 + DAT_8c0d6904),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x1c) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar2 + -0x1c);
    dVar3 = (double)CONCAT44(*(float *)ar4,SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar2 + -0x1c) = dVar3;
    in_xd14 = *(double *)(puVar2 + -0x1c);
    dVar3 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    bVar7 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar7) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)ar4 = in_fr15;
    }
    else {
      *ar4 = in_xd14;
    }
  }
  (**(code **)(*(int *)((int)ar4 + DAT_8c0d6908) + 0xc))
            ((int *)((int)ar4 + DAT_8c0d6908),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x20) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar2 + -0x20);
    dVar3 = (double)CONCAT44(*(float *)ar4,SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar2 + -0x20) = dVar3;
    in_xd14 = *(double *)(puVar2 + -0x20);
    dVar3 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    bVar7 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)ar4 = in_fr15;
    }
    else {
      *ar4 = in_xd14;
    }
  }
  if (((*(float *)((int)ar4 + 100) == 0.0) || (*(float *)((int)ar4 + 100) == 1.4013e-45)) ||
     (*(float *)((int)ar4 + 100) == 2.8026e-45)) {
    (**(code **)((int)*(float *)(ar4 + 0xd) + 0xc))(ar4 + 0xd,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar2 + -0x24) = (int)((ulonglong)dVar3 >> 0x20);
      in_fr15 = *(float *)(puVar2 + -0x24);
      dVar3 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar3,0));
    }
    else {
      *(double *)(puVar2 + -0x24) = dVar3;
      in_xd14 = *(double *)(puVar2 + -0x24);
      dVar3 = *(double *)((int)ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
    }
    if (bVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + 4) = in_fr15;
      }
      else {
        *(double *)((int)ar4 + 4) = in_xd14;
      }
    }
  }
  (**(code **)(*(int *)((int)ar4 + DAT_8c0d690c) + 0xc))
            ((int *)((int)ar4 + DAT_8c0d690c),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x28) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar2 + -0x28);
    dVar3 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar2 + -0x28) = dVar3;
    in_xd14 = *(double *)(puVar2 + -0x28);
    dVar3 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    bVar7 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)((int)ar4 + 4) = in_xd14;
    }
  }
  (**(code **)(*(int *)((int)ar4 + DAT_8c0d6910) + 8))((int *)((int)ar4 + DAT_8c0d6910),ar5,ar6,ar7)
  ;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar2 + -0x2c) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar2 + -0x2c);
    dVar3 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar2 + -0x2c) = dVar3;
    in_xd14 = *(double *)(puVar2 + -0x2c);
    dVar3 = *(double *)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    bVar7 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)((int)ar4 + 4) = in_xd14;
    }
  }
  fVar5 = *(float *)((int)ar4 + 100);
  if (fVar5 == 0.0) {
    (*(code *)PTR_Vec3_assign_8c0d6914)(ar4 + 4,ar4,ar6,ar7);
    fVar5 = SUB84(dVar3,0);
    *(double **)(puVar2 + -0x30) = ar4;
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(*(int *)(puVar2 + -0x30) + 0x28);
    }
    else {
      in_xd0 = *(double *)(*(int *)(puVar2 + -0x30) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = fVar5 - 1.0;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar2 + -0x30) + 0x28) = fVar5;
    }
    else {
      *(double *)(*(int *)(puVar2 + -0x30) + 0x28) = in_xd0;
    }
    goto LAB_8c0d68ba;
  }
  if (fVar5 != 2.8026e-45) {
    if (fVar5 == 4.2039e-45) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 4) = *(float *)ar4;
        dVar3 = (double)(ulonglong)(uint)*(float *)(ar4 + 1);
      }
      else {
        dVar3 = *ar4;
        ar4[4] = dVar3;
        in_xd0 = ar4[1];
      }
      dVar4 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar3,0) - 1.0;
      }
      else {
        fVar5 = SUB84(dVar4 - dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 5) = fVar5;
      }
      else {
        ar4[5] = in_xd0;
      }
      goto LAB_8c0d68ba;
    }
    if (fVar5 != 7.00649e-45) goto LAB_8c0d68ba;
  }
  (*(code *)PTR_Vec3_assign_8c0d6914)(ar4 + 4,ar4,ar6,ar7);
  fVar5 = SUB84(dVar3,0);
  *(double **)(puVar2 + -0x34) = ar4;
  if (in_FPSCR_SZ == '\0') {
    fVar5 = *(float *)(*(int *)(puVar2 + -0x34) + 0x28);
  }
  else {
    in_xd0 = *(double *)(*(int *)(puVar2 + -0x34) + 0x28);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = fVar5 - 1.0;
  }
  else {
    fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(*(int *)(puVar2 + -0x34) + 0x28) = fVar5;
  }
  else {
    *(double *)(*(int *)(puVar2 + -0x34) + 0x28) = in_xd0;
  }
LAB_8c0d68ba:
  *(undefined1 **)(puVar2 + -0x38) = puVar2 + -0x18;
  (*(code *)PTR_Vec3_sub_8c0d6918)(ar4 + 4,ar4,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0d6914)(ar4 + 2,puVar2 + -0x18,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c0d691c)(puVar2 + -0x18,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d6920 @ 8c0d6920 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6920(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d6950)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d6954 @ 8c0d6954 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6954(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_assign_8c0d697c)(ar4 + 0x30,ar4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  return 100;
}



/* FUN_8c0d6980 @ 8c0d6980 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6980(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 100) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x30) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x38) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x30) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x34) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x38) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x60) = 0;
  return 0x60;
}



/* FUN_8c0d69a8 @ 8c0d69a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d69a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *a5;
  undefined4 unaff_r14;
  undefined1 *puVar1;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = unaff_r14;
  *(undefined4 *)(puVar1 + -8) = in_PR;
  *(undefined4 *)(puVar1 + -0x14) = ar5;
  *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(puVar1 + -0x14);
  a5 = puVar1 + -0xc;
  (**(code **)(DAT_8c0d6a0c + *(int *)(*(int *)(ar4 + 0x60) + 8)))(*(int *)(ar4 + 0x60),a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar1 + -0x10) = extraout_fr0;
  }
  else {
    *(ulonglong *)(puVar1 + -0x10) = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (*(code *)PTR_FUN_8c0d6a1c)(ar4 + DAT_8c0d6a18,a5,ar6,ar7);
  *(undefined4 *)(ar4 + 100) = 2;
  return 100;
}



/* FUN_8c0d6a20 @ 8c0d6a20 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6a20(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 6) = *(undefined4 *)ar4;
    *(undefined4 *)((int)ar4 + 0x34) = DAT_8c0d6a98;
    *(undefined4 *)(ar4 + 7) = DAT_8c0d6a9c;
    fVar1 = *(float *)(ar4 + 6);
    fVar2 = DAT_8c0d6aa0;
  }
  else {
    ar4[6] = *ar4;
    *(ulonglong *)((int)ar4 + 0x34) = CONCAT44(DAT_8c0d6a9c,DAT_8c0d6a98);
    ar4[7] = CONCAT44(DAT_8c0d6aa0,DAT_8c0d6a9c);
    fVar1 = DAT_8c0d6aa0;
    fVar2 = _DAT_8c0d6aa4;
  }
  if (in_FPSCR_PR != '\0' || fVar2 <= fVar1) {
    fVar1 = _DAT_8c0d6aa4;
    fVar2 = DAT_8c0d6aa8;
    if (in_FPSCR_SZ == '\0') {
      fVar1 = *(float *)(ar4 + 6);
      fVar2 = _DAT_8c0d6aa4;
    }
    if (in_FPSCR_PR == '\0' && fVar2 < fVar1) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 6) = _DAT_8c0d6aa4;
      }
      else {
        ar4[6] = CONCAT44(DAT_8c0d6aa8,_DAT_8c0d6aa4);
      }
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 6) = DAT_8c0d6aa0;
  }
  else {
    ar4[6] = CONCAT44(_DAT_8c0d6aa4,DAT_8c0d6aa0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 4) = *(undefined4 *)ar4;
    *(undefined4 *)((int)ar4 + 0x24) = *(undefined4 *)((int)ar4 + 4);
    *(float *)(ar4 + 5) = DAT_8c0d6aa8;
  }
  else {
    ar4[4] = *ar4;
    *(undefined8 *)((int)ar4 + 0x24) = *(undefined8 *)((int)ar4 + 4);
    ar4[5] = CONCAT44(_FUN_8c0d6aac,DAT_8c0d6aa8);
  }
  *(undefined4 *)((int)ar4 + 100) = 4;
  return 100;
}



/* FUN_8c0d6aac @ 8c0d6aac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6aac(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined1 *puVar1;
  undefined4 in_fr1;
  undefined8 uVar2;
  double dVar3;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd4;
  undefined8 in_xd14;
  bool bVar4;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = unaff_r14;
  *(undefined4 *)(puVar1 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x2c) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar1 + -0x28) = (int)in_dr4;
    *(undefined4 *)(puVar1 + -0x24) = in_fr6;
    *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(puVar1 + -0x2c);
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(puVar1 + -0x28);
    uVar2 = CONCAT44(*(undefined4 *)(puVar1 + -0x24),in_fr1);
    *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(puVar1 + -0x24);
  }
  else {
    *(undefined8 *)(puVar1 + -0x2c) = in_dr4;
    *(undefined8 *)(puVar1 + -0x28) = in_xd4;
    *(ulonglong *)(puVar1 + -0x24) = CONCAT44(in_fr6,in_fr7);
    *(undefined8 *)(ar4 + 0x30) = *(undefined8 *)(puVar1 + -0x2c);
    *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)(puVar1 + -0x28);
    uVar2 = *(undefined8 *)(puVar1 + -0x24);
    *(undefined8 *)(ar4 + 0x38) = uVar2;
  }
  (**(code **)(*(int *)(ar4 + DAT_8c0d6c04) + 0xc))((int *)(ar4 + DAT_8c0d6c04),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0xc) = (int)((ulonglong)uVar2 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0xc);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),(int)uVar2);
  }
  else {
    *(undefined8 *)(puVar1 + -0xc) = uVar2;
    in_xd14 = *(undefined8 *)(puVar1 + -0xc);
    dVar3 = *(double *)(ar4 + 0x30);
  }
  if (in_FPSCR_PR == '\0') {
    bVar4 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd14;
    }
  }
  (**(code **)(*(int *)(ar4 + DAT_8c0d6c08) + 0xc))((int *)(ar4 + DAT_8c0d6c08),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x10) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x10);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar1 + -0x10) = dVar3;
    in_xd14 = *(undefined8 *)(puVar1 + -0x10);
    dVar3 = *(double *)(ar4 + 0x30);
  }
  if (in_FPSCR_PR == '\0') {
    bVar4 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd14;
    }
  }
  (**(code **)(*(int *)(ar4 + 0x68) + 0xc))((int *)(ar4 + 0x68),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x14) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x14);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar1 + -0x14) = dVar3;
    in_xd14 = *(undefined8 *)(puVar1 + -0x14);
    dVar3 = *(double *)(ar4 + 0x34);
  }
  if (in_FPSCR_PR == '\0') {
    bVar4 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd14;
    }
  }
  (**(code **)(*(int *)(ar4 + DAT_8c0d6c0c) + 0xc))((int *)(ar4 + DAT_8c0d6c0c),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x18) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x18);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar1 + -0x18) = dVar3;
    in_xd14 = *(undefined8 *)(puVar1 + -0x18);
    dVar3 = *(double *)(ar4 + 0x34);
  }
  if (in_FPSCR_PR == '\0') {
    bVar4 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd14;
    }
  }
  (**(code **)(*(int *)(ar4 + DAT_8c0d6c10) + 8))((int *)(ar4 + DAT_8c0d6c10),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x1c) = (int)((ulonglong)dVar3 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0x1c);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
  }
  else {
    *(double *)(puVar1 + -0x1c) = dVar3;
    in_xd14 = *(undefined8 *)(puVar1 + -0x1c);
    dVar3 = *(double *)(ar4 + 0x34);
  }
  if (in_FPSCR_PR == '\0') {
    bVar4 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar1 + -0x20) = in_fr15;
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(puVar1 + -0x20);
      *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(puVar1 + -0x20);
    }
    else {
      *(undefined8 *)(puVar1 + -0x20) = in_xd14;
      *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)(puVar1 + -0x20);
    }
  }
  (*(code *)PTR_FUN_8c0d6c14)(ar4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x34);
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)(ar4 + 0x34);
  }
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 5;
  return 100;
}



/* FUN_8c0d6c18 @ 8c0d6c18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6c18(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 unaff_r14;
  undefined1 *puVar1;
  undefined8 in_dr0;
  double dVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd4;
  undefined8 in_xd14;
  bool bVar3;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = auStack_4;
  }
  else {
    puVar1 = auStack_8;
  }
  *(undefined4 *)(puVar1 + -4) = unaff_r14;
  *(undefined4 *)(puVar1 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar1 + -0x18) = (int)in_dr4;
    *(int *)(puVar1 + -0x14) = (int)((ulonglong)in_dr6 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar1 + -0x1c) = in_dr4;
    *(undefined8 *)(puVar1 + -0x18) = in_xd4;
    *(undefined8 *)(puVar1 + -0x14) = in_dr6;
  }
  (*(code *)PTR_FUN_8c0d6c94)(ar4,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + DAT_8c0d6c98) + 8))((int *)(ar4 + DAT_8c0d6c98),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar1 + -0xc) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar1 + -0xc);
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),(int)in_dr0);
  }
  else {
    *(undefined8 *)(puVar1 + -0xc) = in_dr0;
    in_xd14 = *(undefined8 *)(puVar1 + -0xc);
    dVar2 = *(double *)(ar4 + 0x34);
  }
  if (in_FPSCR_PR == '\0') {
    bVar3 = (float)((ulonglong)dVar2 >> 0x20) < in_fr15;
  }
  else {
    bVar3 = dVar2 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar3) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar1 + -0x10) = in_fr15;
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(puVar1 + -0x10);
      *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(puVar1 + -0x10);
    }
    else {
      *(undefined8 *)(puVar1 + -0x10) = in_xd14;
      *(undefined8 *)(ar4 + 0x34) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)(puVar1 + -0x10);
    }
  }
  *(undefined4 *)(ar4 + 100) = 6;
  return 100;
}



/* FUN_8c0d6c9c @ 8c0d6c9c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6c9c(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  float fVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_xd0;
  undefined4 in_xf4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_14;
  
  uVar1 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)ar4 = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)ar4 + 4) = (int)in_dr4;
    in_dr6 = CONCAT44(uVar1,in_fr1);
    *(undefined4 *)(ar4 + 1) = uVar1;
  }
  else {
    uStack_14 = (undefined4)in_dr6;
    *ar4 = CONCAT44(in_xf4,(int)in_dr4);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(uStack_14,in_xf4);
    ar4[1] = in_dr6;
  }
  fVar2 = (float)in_dr6;
  uVar1 = (*(code *)PTR_Vec3_assign_8c0d6d40)(ar4 + 6,ar4,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0d6d40)(ar4 + 4,uVar1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    fVar2 = *(float *)(ar4 + 5);
  }
  else {
    in_xd0 = ar4[5];
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = fVar2 - 1.0;
  }
  else {
    fVar2 = SUB84((double)CONCAT44(0x3f800000,fVar2) - (double)CONCAT44(0x3f800000,fVar2),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 5) = fVar2;
  }
  else {
    ar4[5] = in_xd0;
  }
  (*(code *)PTR_FUN_8c0d6d48)(ar4 + 2,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d6d48)(ar4 + 8,uVar1,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 10) = 0;
  }
  else {
    ar4[10] = (ulonglong)(uint)fVar2;
  }
  *(undefined4 *)((int)ar4 + 100) = 0;
  return 100;
}



/* FUN_8c0d6d58 @ 8c0d6d58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d6d58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a6;
  undefined *puVar2;
  ulonglong in_dr0;
  undefined *puVar4;
  double dVar3;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0d6eac)(&uStack_1c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d6eac)(&fStack_2c,uVar1,a6,ar7);
  if (*DAT_8c0d6eb0 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0d6eb4 = 0;
    }
    else {
      *DAT_8c0d6eb4 = in_dr0;
    }
    *DAT_8c0d6eb0 = '\x01';
  }
  if (*DAT_8c0d6eb8 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)DAT_8c0d6ebc = 0;
    }
    else {
      *DAT_8c0d6ebc = in_dr0;
    }
    *DAT_8c0d6eb8 = '\x01';
  }
  (*(code *)PTR_Vec3_sub_8c0d6ec0)(ar6,ar5,a6,ar7);
  (*(code *)PTR_Vec3_assign_8c0d6ec4)(&uStack_1c,auStack_3c,a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0d6ec8)(auStack_3c,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_length_sq_8c0d6ecc)(&uStack_1c,uVar1,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)DAT_8c0d6eb4 = (int)(in_dr0 >> 0x20);
  }
  else {
    *DAT_8c0d6eb4 = in_dr0;
  }
  (**(code **)(*(int *)(ar4 + DAT_8c0d6ed0) + 8))((int *)(ar4 + DAT_8c0d6ed0),uVar1,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)DAT_8c0d6ebc = (int)(in_dr0 >> 0x20);
    puVar2 = *(undefined **)DAT_8c0d6ebc;
    puVar4 = DAT_8c0d6ed4;
  }
  else {
    *DAT_8c0d6ebc = in_dr0;
    in_xd0 = *DAT_8c0d6ebc;
    puVar2 = DAT_8c0d6ed4;
    puVar4 = PTR_Vec3_length_8c0d6ed8;
  }
  if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar2) {
    (*(code *)PTR_Vec3_length_8c0d6ed8)(&uStack_1c,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(uStack_1c,(int)*DAT_8c0d6ebc);
    }
    else {
      in_xd0 = *DAT_8c0d6ebc;
      dVar3 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_2c = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_2c = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(uStack_18,(int)*DAT_8c0d6ebc);
    }
    else {
      fStack_2c = (float)in_xd0;
      in_xd0 = *DAT_8c0d6ebc;
      dVar3 = (double)CONCAT44(uStack_14,uStack_18);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_28 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_28 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(uStack_14,(int)*DAT_8c0d6ebc);
    }
    else {
      fStack_28 = (float)in_xd0;
      in_xd0 = *DAT_8c0d6ebc;
      dVar3 = (double)CONCAT44(uStack_10,uStack_14);
    }
    if (in_FPSCR_PR == '\0') {
      fStack_24 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_24 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ != '\0') {
      fStack_24 = (float)in_xd0;
      uStack_20 = (undefined4)(in_xd0 >> 0x20);
    }
    (*(code *)PTR_FUN_8c0d6edc)(ar5,&fStack_2c,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0d6ec8)(&fStack_2c,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0d6ec8)(&uStack_1c,0xffffffff,a6,ar7);
    uVar1 = 2;
  }
  else {
    (*(code *)PTR_Vec3_assign_8c0d6ec4)(ar5,ar6,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0d6ec8)(&fStack_2c,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0d6ec8)(&uStack_1c,0xffffffff,a6,ar7);
    uVar1 = 4;
  }
  return uVar1;
}



/* free_if_nonnull_wrap_0d6ef8 @ 8c0d6ef8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0d6ef8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0d6f24)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0d6f28 @ 8c0d6f28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d6f28(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0d6f5c)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0d6f60)(ar4 + 5,ar5,ar6,ar7);
  *ar4 = 0;
  (*(code *)PTR_FUN_8c0d6f64)(ar4 + 5,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d6f68 @ 8c0d6f68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d6f68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_object_dtor_delete_8c0d6fac)(ar4 + 0x14,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0d6fb0)(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d6fb4)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d6fb8 @ 8c0d6fb8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d6ff4) */
/* WARNING: Removing unreachable block (ram,0x8c0d7018) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d6fb8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  int a4;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar2 = (undefined4 *)0x0;
  if (*ar4 != 0) {
    a4 = *ar4;
    iVar1 = (*(code *)PTR_get_field_24_05c284_8c0d7048)(a4,ar5,ar6,ar7);
    if ((iVar1 == 0) || (iVar1 == 0xf)) {
      puVar2 = (undefined4 *)(*(code *)PTR_FUN_8c0d705c)(ar4 + 5,ar5,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_rand_8c0d704c)(a4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d7050,(float)iVar1);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0d7054,DAT_8c0d7050);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d7054,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0d7058,DAT_8c0d7054);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d7058,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(PTR_FUN_8c0d705c,DAT_8c0d7058);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        ar4[6] = (int)fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 6) = in_xd0;
      }
      iVar1 = (*(code *)PTR_rand_8c0d704c)(a4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d7050,(float)iVar1);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0d7054,DAT_8c0d7050);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d7054,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0d7058,DAT_8c0d7054);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      puVar2 = &DAT_8c0d7058;
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d7058,fVar3);
      }
      else {
        dVar4 = (double)CONCAT44(PTR_FUN_8c0d705c,DAT_8c0d7058);
      }
      if (in_FPSCR_PR == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        ar4[7] = (int)fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 7) = in_xd0;
      }
    }
  }
  return puVar2;
}



/* FUN_8c0d7060 @ 8c0d7060 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7060(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0d70c4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d70c8)(ar4 + 4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d70c8)(ar4 + 0x14,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0d70cc)(ar4 + 0x24,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d70d0)(ar4 + 0x30,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d70d0)(ar4 + DAT_8c0d70d4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0d70d8 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d70dc) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0d70dc) = CONCAT44(0x3f800000,extraout_fr1);
  }
  (*(code *)PTR_FUN_8c0d70e0)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d70e4 @ 8c0d70e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d70e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d70fc)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d7100 @ 8c0d7100 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7100(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  undefined1 *a6;
  int a7;
  undefined1 auStack_14 [16];
  
  a6 = auStack_14;
  (*(code *)PTR_Vec3_set_zero_8c0d7144)(auStack_14,ar5,ar6,ar7);
  a7 = ar4 + 0x30;
  a5 = ar4 + 4;
  (**(code **)(*(int *)(ar4 + DAT_8c0d7148) + 0xc))((int *)(ar4 + DAT_8c0d7148),a5,auStack_14,a7);
  (*(code *)PTR_FUN_8c0d714c)(ar4,a5,a6,a7);
  uVar1 = (*(code *)PTR_object_dtor_delete_8c0d7150)(auStack_14,0xffffffff,a6,a7);
  return uVar1;
}



/* FUN_8c0d7154 @ 8c0d7154 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0d7154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined *puVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (*(int *)(DAT_8c0d7224 + ar4) == 2) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d7228,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + 0x2c);
      dVar4 = (double)CONCAT44(DAT_8c0d722c,DAT_8c0d7228);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    uStack_8 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_8 = CONCAT44(ar4,fVar3);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(uStack_8._4_4_ + 0x2c) = (undefined4)uStack_8;
      uStack_8 = uStack_8 & 0xffffffff;
    }
    else {
      *(ulonglong *)(uStack_8._4_4_ + 0x2c) = uStack_8;
      in_xd0 = uStack_8;
    }
    if (in_FPSCR_PR == '\0' && (float)uStack_8 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uStack_8 & 0xffffffff;
      }
      *(undefined4 *)(DAT_8c0d7224 + ar4) = 0;
    }
  }
  puVar2 = *(undefined **)(DAT_8c0d722c + ar4);
  if (puVar2 == (undefined *)0x0) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d7234,(int)*(ulonglong *)(ar4 + DAT_8c0d7230));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + DAT_8c0d7230);
      dVar4 = (double)CONCAT44(_DAT_8c0d7238,DAT_8c0d7234);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    uStack_18 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_18 = CONCAT44(ar4,fVar3);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(uStack_18._4_4_ + DAT_8c0d7230) = (float)uStack_18;
      uVar1 = CONCAT44((float)uStack_18,fVar3);
    }
    else {
      *(ulonglong *)(uStack_18._4_4_ + DAT_8c0d7230) = uStack_18;
      uVar1 = uStack_18;
    }
    fVar3 = (float)uVar1;
    puVar2 = (undefined *)0x0;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = (float)uStack_18;
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c0d7230) = 0;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0d7230) = (ulonglong)(uint)fVar3;
      }
      puVar2 = DAT_8c0d722c;
      *(undefined4 *)(DAT_8c0d722c + ar4) = 2;
    }
  }
  else if (puVar2 == (undefined *)0x1) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0d7234,(int)*(ulonglong *)(ar4 + DAT_8c0d7230));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + DAT_8c0d7230);
      dVar4 = (double)CONCAT44(_DAT_8c0d7238,DAT_8c0d7234);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    uStack_10 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_10 = CONCAT44(ar4,fVar3);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(uStack_10._4_4_ + DAT_8c0d7230) = (undefined4)uStack_10;
      uStack_10 = uStack_10 & 0xffffffff;
    }
    else {
      *(ulonglong *)(uStack_10._4_4_ + DAT_8c0d7230) = uStack_10;
    }
    puVar2 = &DAT_8c0d7238;
    fVar3 = _DAT_8c0d7238;
    fVar5 = _FUN_8c0d723c;
    if (in_FPSCR_SZ == '\0') {
      fVar3 = (float)uStack_10;
      fVar5 = _DAT_8c0d7238;
    }
    if (in_FPSCR_PR == '\0' && fVar3 < fVar5) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + DAT_8c0d7230) = _DAT_8c0d7238;
      }
      else {
        *(ulonglong *)(ar4 + DAT_8c0d7230) = CONCAT44(_FUN_8c0d723c,_DAT_8c0d7238);
      }
      puVar2 = DAT_8c0d722c;
      *(undefined4 *)(DAT_8c0d722c + ar4) = 3;
    }
  }
  return puVar2;
}



/* FUN_8c0d723c @ 8c0d723c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d723c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  iVar1 = *(int *)(DAT_8c0d7280 + ar4);
  if (0 < iVar1) {
    iVar1 = *(int *)(DAT_8c0d7280 + ar4) + -1;
    *(int *)(DAT_8c0d7280 + ar4) = iVar1;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0d7284)(ar4,0,ar6,ar7);
      in_fr1 = extraout_fr1;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_fr1;
  }
  return iVar1;
}



/* FUN_8c0d7288 @ 8c0d7288 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7288(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0d7290;
  *(undefined4 *)(DAT_8c0d7290 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0d7294 @ 8c0d7294 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7294(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_8c0d730c + ar4);
  if (iVar1 == 0) {
LAB_8c0d72c0:
    iVar2 = (*(code *)PTR_FUN_8c0d7310)(ar4,ar5,ar6,ar7);
    iVar1 = DAT_8c0d730c;
    if (iVar2 == 1) {
      *(undefined4 *)(DAT_8c0d730c + ar4) = 1;
      iVar2 = iVar1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) goto LAB_8c0d72c0;
      if (iVar1 != 3) {
        return iVar1;
      }
    }
    iVar2 = (*(code *)PTR_FUN_8c0d7310)(ar4,ar5,ar6,ar7);
    iVar1 = DAT_8c0d730c;
    if (iVar2 == 0) {
      *(undefined4 *)(DAT_8c0d730c + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* FUN_8c0d7314 @ 8c0d7314 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7314(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c0d7344)(ar4 + 0x24,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0d7348 + ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0d734c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0d734c) = (ulonglong)extraout_fr1;
  }
  iVar1 = DAT_8c0d7350;
  *(undefined4 *)(DAT_8c0d7350 + ar4) = 2;
  return iVar1;
}



/* FUN_8c0d7354 @ 8c0d7354 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7354(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char in_FPSCR_SZ;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0d73ec + 8);
  uStack_c = *(undefined4 *)(PTR_DAT_8c0d73ec + 0xc);
  uStack_28 = *(undefined4 *)PTR_DAT_8c0d73f0;
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0d73f0 + 4);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0d73f0 + 8);
  uStack_1c = *(undefined4 *)(PTR_DAT_8c0d73f0 + 0xc);
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = CONCAT44(*(undefined4 *)(PTR_DAT_8c0d73ec + 4),*(undefined4 *)(ar4 + DAT_8c0d73f4));
  }
  else {
    uStack_18 = *(undefined8 *)(ar4 + DAT_8c0d73f4);
  }
  (*(code *)PTR_FUN_8c0d73f8)(&uStack_18,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d73fc)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d7400)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d7404)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d7408)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d740c)(1,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d73f8)(&uStack_28,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d7410 @ 8c0d7410 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7410(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char in_FPSCR_SZ;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0d74a8 + 8);
  uStack_c = *(undefined4 *)(PTR_DAT_8c0d74a8 + 0xc);
  uStack_28 = *(undefined4 *)PTR_DAT_8c0d74ac;
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0d74ac + 4);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0d74ac + 8);
  uStack_1c = *(undefined4 *)(PTR_DAT_8c0d74ac + 0xc);
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = CONCAT44(*(undefined4 *)(PTR_DAT_8c0d74a8 + 4),*(undefined4 *)(ar4 + DAT_8c0d74b0));
  }
  else {
    uStack_18 = *(undefined8 *)(ar4 + DAT_8c0d74b0);
  }
  (*(code *)PTR_FUN_8c0d74b4)(&uStack_18,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d74b8)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d74bc)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d74c0)(uVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d74c4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d74c8)(1,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d74b4)(&uStack_28,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d74cc @ 8c0d74cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d74cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44(in_PR,in_fr4);
  }
  else {
    uStack_c = CONCAT44(in_fr4,in_fr5);
  }
  (*(code *)PTR_FUN_8c0d7500)(ar4,1,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x2c) = (int)uStack_c;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = uStack_c;
  }
  iVar1 = DAT_8c0d7504;
  *(undefined4 *)(DAT_8c0d7504 + ar4) = 0x1e;
  return iVar1;
}



/* FUN_8c0d7508 @ 8c0d7508 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d7508(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 a6;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 auStack_c [2];
  
  auStack_c[0] = 0xffffffff;
  puVar1 = *(undefined4 **)(DAT_8c0d757c + ar4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = (*(code *)PTR_rand_8c0d7580)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0d7584,(float)iVar2);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0d7588,DAT_8c0d7584);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 / dVar5,0);
    }
    puVar1 = &DAT_8c0d7588;
    fVar4 = DAT_8c0d7588;
    fVar6 = _DAT_8c0d758c;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = fVar3;
      fVar6 = DAT_8c0d7588;
    }
    if (in_FPSCR_PR != '\0' || fVar4 <= fVar6) {
      auStack_c[0] = (*(code *)PTR_FUN_8c0d7590)(_DAT_8c0d758c,ar5,ar6,ar7);
      a6 = 0x12;
      (*(code *)PTR_FUN_8c0d7594)(_DAT_8c0d758c,auStack_c[0],0x12,ar7);
      (*(code *)PTR_FUN_8c0d7598)(_DAT_8c0d758c,auStack_c,a6,ar7);
      *(undefined4 *)(DAT_8c0d757c + ar4) = 2;
      puVar1 = &DAT_8c0d759c;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = DAT_8c0d759c;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c) = CONCAT44(_FUN_8c0d75a0,DAT_8c0d759c);
      }
    }
  }
  return puVar1;
}



/* FUN_8c0d75a0 @ 8c0d75a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d75a0(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  
  (**(code **)(*(int *)(ar4 + DAT_8c0d7618) + 0x38))((int *)(ar4 + DAT_8c0d7618),&fStack_68,ar6,ar7)
  ;
  fVar1 = fStack_24;
  if (in_FPSCR_SZ == '\0') {
    fVar1 = *(float *)(ar6 + 8);
    fStack_20 = fStack_24;
  }
  if (in_FPSCR_PR != '\0' || fVar1 <= fStack_20) {
    fVar1 = fStack_68;
    fVar2 = fStack_64;
    if (in_FPSCR_SZ == '\0') {
      fVar1 = *ar5;
      fVar2 = fStack_68;
    }
    if (in_FPSCR_PR != '\0' || fVar2 <= fVar1) {
      fVar1 = fStack_44;
      if (in_FPSCR_SZ == '\0') {
        fVar1 = *ar5;
        fStack_40 = fStack_44;
      }
      if (in_FPSCR_PR != '\0' || fVar1 <= fStack_40) {
        fVar1 = fStack_34;
        if (in_FPSCR_SZ == '\0') {
          fVar1 = ar5[1];
          fStack_30 = fStack_34;
        }
        if (in_FPSCR_PR != '\0' || fStack_30 <= fVar1) {
          fVar1 = fStack_64;
          if (in_FPSCR_SZ == '\0') {
            fVar1 = ar5[1];
            fStack_60 = fStack_64;
          }
          if (in_FPSCR_PR != '\0' || fVar1 <= fStack_60) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



/* FUN_8c0d761c @ 8c0d761c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d761c(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0x3f800000;
    *(undefined4 *)((int)ar4 + 4) = 0x3f800000;
    *(undefined4 *)ar4 = 0x3f800000;
  }
  else {
    ar4[1] = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(0x3f800000,in_fr1);
    *ar4 = CONCAT44(0x3f800000,in_fr1);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + 0xc) = 0x3f800000;
    *(undefined4 *)(ar4 + 2) = DAT_8c0d7664;
  }
  else {
    *(undefined8 *)((int)ar4 + 0xc) = CONCAT44(0x3f800000,in_fr1);
    ar4[2] = CONCAT44(_FUN_8c0d7668,DAT_8c0d7664);
  }
  return ar4;
}



/* FUN_8c0d7668 @ 8c0d7668 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d7668(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined8 in_xd4;
  undefined8 in_xd6;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = in_fr4;
    *(undefined4 *)((int)ar4 + 4) = in_fr5;
    *(undefined4 *)(ar4 + 1) = in_fr6;
    *(undefined4 *)((int)ar4 + 0xc) = in_fr7;
    *(undefined4 *)(ar4 + 2) = in_fr8;
  }
  else {
    *ar4 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)((int)ar4 + 4) = in_xd4;
    ar4[1] = CONCAT44(in_fr6,in_fr7);
    *(undefined8 *)((int)ar4 + 0xc) = in_xd6;
    ar4[2] = CONCAT44(in_fr8,in_fr9);
  }
  return ar4;
}



/* FUN_8c0d7688 @ 8c0d7688 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d7688(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d76b4)(ar4 + 3,ar5,ar6,ar7);
  *ar4 = 0;
  ar4[1] = 0;
  ar4[9] = 0;
  ar4[2] = 0;
  return ar4;
}



/* free_if_nonnull_wrap_0d76b8 @ 8c0d76b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0d76b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0d76e4)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0d76e8 @ 8c0d76e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d76e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *DAT_8c0d77cc = 0;
  DAT_8c0d77cc[1] = 0;
  DAT_8c0d77cc[2] = 0;
  DAT_8c0d77cc[3] = 0x7f;
  DAT_8c0d77cc[4] = 0x7f;
  DAT_8c0d77cc[5] = 0x7f;
  DAT_8c0d77cc[6] = 0x7f;
  DAT_8c0d77cc[7] = 0;
  DAT_8c0d77cc[8] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[9] = 0;
  DAT_8c0d77cc[10] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0xb] = 0x7f;
  DAT_8c0d77cc[0xc] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0xd] = 0x7f;
  DAT_8c0d77cc[0xe] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0xf] = 0;
  DAT_8c0d77cc[0x10] = 0;
  DAT_8c0d77cc[0x11] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x12] = 0;
  DAT_8c0d77cc[0x13] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x14] = 0x7f;
  DAT_8c0d77cc[0x15] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x16] = 0x7f;
  DAT_8c0d77cc[0x17] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x18] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x19] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x1a] = (short)DAT_8c0d77d0;
  DAT_8c0d77cc[0x1b] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1c] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1d] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1e] = (short)DAT_8c0d77d4;
  DAT_8c0d77cc[0x1f] = (short)DAT_8c0d77d0;
  return 0x3e;
}



/* FUN_8c0d77d8 @ 8c0d77d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c0d77d8(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d7804)(ar4,ar5,ar6,ar7);
  *ar4 = (int)PTR_DAT_8c0d7808;
  (**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d780c @ 8c0d780c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d780c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0d7854;
    (*(code *)PTR_Vec3_dtor_8c0d7858)(ar4 + 5,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0d7858)(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d785c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* Class_12bea8_m1_0d7860 @ 8c0d7860 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d78ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

double * Class_12bea8_m1_0d7860(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 uVar2;
  int *a4;
  int *a5;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  undefined4 in_fr1;
  double dVar4;
  undefined4 in_fr5;
  undefined4 in_fr4;
  float fVar5;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar6;
  undefined4 in_PR;
  int iVar7;
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
  *(undefined4 *)((int)puVar3 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  }
  else {
    in_xd14 = CONCAT44(in_fr4,in_fr5);
  }
  pdVar1 = (double *)ar4[0xc];
  if (pdVar1 == (double *)0x0) {
    a5 = ar4 + 5;
    a4 = ar4 + 1;
    (*(code *)PTR_FUN_8c0d78ec)(a4,a5,ar6,ar7);
    pdVar1 = (double *)(ar4 + 2);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(int *)pdVar1,in_fr1);
    }
    else {
      dVar4 = *pdVar1;
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar6 = dVar4 < in_dr14;
    }
    if (bVar6) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d78f0,SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)CONCAT44(PTR_rand_8c0d78f4,DAT_8c0d78f0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(in_dr14,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar5 = SUB84(in_dr14 + dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        ar4[2] = (int)fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 2) = in_xd14;
      }
      uVar2 = (*(code *)PTR_rand_8c0d78f4)(a4,a5,ar6,ar7);
      *(undefined4 *)((int)puVar3 + -0xc) = uVar2;
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d78f8,(float)*(int *)((int)puVar3 + -0xc));
      }
      else {
        dVar4 = (double)CONCAT44(DAT_8c0d78fc,DAT_8c0d78f8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar4 / dVar4,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(DAT_8c0d78fc,fVar5);
      }
      else {
        dVar4 = (double)CONCAT44(_FUN_8c0d7900,DAT_8c0d78fc);
      }
      if (in_FPSCR_PR == '\0') {
        iVar7 = (int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        iVar7 = (int)(dVar4 * dVar4);
      }
      ar4[0xd] = iVar7;
      pdVar1 = (double *)0x1;
      ar4[0xc] = 1;
    }
  }
  else if (pdVar1 == (double *)0x1) {
    pdVar1 = (double *)0x2;
    ar4[0xc] = 2;
  }
  else if (pdVar1 == (double *)0x2) {
    pdVar1 = (double *)(**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  }
  return pdVar1;
}



/* FUN_8c0d7900 @ 8c0d7900 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d7900(int ar4,undefined4 ar5,float ar6,undefined4 ar7)

{
  int iVar1;
  float *a5;
  undefined4 a5_00;
  undefined4 *a6;
  undefined4 a6_00;
  undefined4 a7;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_98;
  int iStack_94;
  undefined1 auStack_90 [68];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = *(undefined4 *)(PTR_DAT_8c0d7a84 + 0x24);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0d7a84 + 0x28);
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0d7a84 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 4);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_3c = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_3c = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_38 = *(undefined4 *)(ar4 + 8);
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 0xc));
  }
  else {
    fStack_3c = (float)in_xd0;
    uStack_38 = (undefined4)*(undefined8 *)(ar4 + 8);
    in_xd0 = *(undefined8 *)(ar4 + 0xc);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_34 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_34 = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 4));
  }
  else {
    fStack_34 = (float)in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 4);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_30 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_30 = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_2c = *(undefined4 *)(ar4 + 8);
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 0xc));
  }
  else {
    fStack_30 = (float)in_xd0;
    uStack_2c = (undefined4)*(undefined8 *)(ar4 + 8);
    in_xd0 = *(undefined8 *)(ar4 + 0xc);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_28 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_28 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 4));
  }
  else {
    fStack_28 = (float)in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 4);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_24 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_24 = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 8);
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 0xc));
  }
  else {
    fStack_24 = (float)in_xd0;
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 8);
    in_xd0 = *(undefined8 *)(ar4 + 0xc);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_1c = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar3 + dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    uStack_18 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = *(undefined8 *)(ar4 + 4);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  fStack_98 = ar6;
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)&fStack_98 + _DAT_8c0d7a8c) = fVar2;
    *(undefined4 *)((int)&fStack_98 + DAT_8c0d7a90) = *(undefined4 *)(ar4 + 8);
    dVar3 = (double)CONCAT44(DAT_8c0d7a88,*(undefined4 *)(ar4 + 0xc));
  }
  else {
    *(undefined8 *)((int)&fStack_98 + _DAT_8c0d7a8c) = in_xd0;
    *(undefined8 *)((int)&fStack_98 + DAT_8c0d7a90) = *(undefined8 *)(ar4 + 8);
    in_xd0 = *(undefined8 *)(ar4 + 0xc);
    dVar3 = (double)CONCAT44(_DAT_8c0d7a8c,DAT_8c0d7a88);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)&fStack_98 + DAT_8c0d7a94) = fVar2;
  }
  else {
    *(undefined8 *)((int)&fStack_98 + DAT_8c0d7a94) = in_xd0;
  }
  uStack_4c = *(undefined4 *)PTR_DAT_8c0d7a98;
  uStack_48 = *(undefined4 *)(PTR_DAT_8c0d7a98 + 4);
  uStack_44 = *(undefined4 *)(PTR_DAT_8c0d7a98 + 8);
  uStack_40 = *(undefined4 *)(PTR_DAT_8c0d7a98 + 0xc);
  a7 = 4;
  a6 = &uStack_4c;
  a5 = &fStack_3c;
  (*(code *)PTR_FUN_8c0d7a9c)(auStack_90,a5,a6,4);
  iVar1 = *(int *)(ar4 + 0x30);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_Class_129808_m2_0148d8_8c0d7aa0)(ar4,a5,a6,a7);
  }
  else if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0d7aa4)(ar5,a5,a6,a7);
    (*(code *)PTR_FUN_8c0d7aa8)(ar5,fStack_98,a6,a7);
    iStack_94 = *(int *)(ar4 + 0x34);
    a6_00 = 4;
    (*(code *)PTR_FUN_8c0d7ab0)(auStack_90,iStack_94 * 0x10 + DAT_8c0d7aac,4,a7);
    a5_00 = DAT_8c0d7ab4;
    (*(code *)PTR_FUN_8c0d7ab8)(auStack_90,DAT_8c0d7ab4,a6_00,a7);
    iVar1 = (*(code *)PTR_FUN_8c0d7abc)(auStack_90,a5_00,a6_00,a7);
  }
  return iVar1;
}



/* Class_12bea8_m3_0d7ac0 @ 8c0d7ac0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bea8_m3_0d7ac0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  uVar1 = (*(code *)PTR_Class_129808_m3_014978_8c0d7af4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d7af8 @ 8c0d7af8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d7af8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  
  a5 = ar5;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0d7b38)(ar4 + 0x1c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d7b38)(ar4 + 0x30,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0d7b3c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d7b40)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0d7b44 @ 8c0d7b44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7b44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d7b5c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d7b60 @ 8c0d7b60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0d7b60(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int *a4;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int iVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 in_dr0;
  double dVar8;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr12;
  undefined8 in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd6;
  ulonglong in_xd10;
  undefined8 in_xd14;
  undefined4 in_PR;
  int iVar9;
  int a5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar5 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar5 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar5 + -0x18) = in_PR;
  puVar7 = (undefined1 *)((int)puVar5 + -0x48);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar5 + -0x48) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)puVar5 + -0x44) = (int)in_dr4;
    *(int *)((int)puVar5 + -0x40) = (int)((ulonglong)in_dr6 >> 0x20);
    *(int *)((int)puVar5 + -0x3c) = (int)in_dr6;
    *(int *)((int)puVar5 + -0x38) = (int)((ulonglong)in_dr8 >> 0x20);
    in_xd10 = (ulonglong)*(uint *)((int)puVar5 + 0x10);
  }
  else {
    *(undefined8 *)((int)puVar5 + -0x48) = in_dr4;
    *(undefined8 *)((int)puVar5 + -0x44) = in_xd4;
    *(undefined8 *)((int)puVar5 + -0x40) = in_dr6;
    *(undefined8 *)((int)puVar5 + -0x3c) = in_xd6;
    *(undefined8 *)((int)puVar5 + -0x38) = in_dr8;
    in_xd14 = *(undefined8 *)((int)puVar5 + 0x10);
  }
  iVar3 = 0;
  uVar2 = 0;
  if (*ar4 != 0) {
    (**(code **)(ar4[7] + 8))(ar4 + 7,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -0x1c),(int)in_dr0);
    }
    else {
      *(undefined8 *)((int)puVar5 + -0x1c) = in_dr0;
      dVar8 = *(double *)((int)puVar5 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar9 = (int)dVar8;
    }
    (**(code **)(ar4[0xc] + 8))(ar4 + 0xc,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x20) = (int)((ulonglong)dVar8 >> 0x20);
      dVar8 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -0x20),SUB84(dVar8,0));
    }
    else {
      *(double *)((int)puVar5 + -0x20) = dVar8;
      dVar8 = *(double *)((int)puVar5 + -0x20);
    }
    if (in_FPSCR_PR == '\0') {
      a5 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      a5 = (int)dVar8;
    }
    uVar1 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c0d7c94)(ar4[1],a5,ar6,ar7);
    *(undefined4 *)((int)puVar5 + -0x28) = uVar1;
    uVar2 = *(uint *)((int)puVar5 + -0x28);
    if (uVar2 == 0) {
      uVar4 = 0;
      while ((uVar2 = ar4[4], uVar4 < uVar2 && (iVar3 <= iVar9))) {
        *(uint *)(puVar7 + 0x1c) = uVar4;
        uVar1 = (*(code *)PTR_get_field_2c_0d7ca8_8c0d7c98)
                          ((*(int *)(puVar7 + 0x1c) * 8 - *(int *)(puVar7 + 0x1c)) * 8 + ar4[3],a5,
                           ar6,ar7);
        *(undefined4 *)(puVar7 + 0x24) = uVar1;
        if (*(int *)(puVar7 + 0x24) == 0) {
          *(uint *)(puVar7 + 0x18) = uVar4;
          if (in_FPSCR_SZ == '\0') {
            puVar6 = puVar7 + -4;
            *(int *)(puVar7 + -4) = (int)in_xd10;
          }
          else {
            puVar6 = puVar7 + -8;
            *(undefined8 *)(puVar7 + -8) = in_xd14;
          }
          a4 = (int *)((*(int *)(puVar6 + 0x1c) * 8 - *(int *)(puVar6 + 0x1c)) * 8 + ar4[3]);
          (**(code **)(*a4 + 8))(a4,a5,ar6,ar7);
          puVar7 = puVar6 + 4;
          *(uint *)(puVar6 + 0x18) = uVar4;
          (*(code *)PTR_FUN_8c0d7c9c)
                    ((*(int *)(puVar6 + 0x18) * 8 - *(int *)(puVar6 + 0x18)) * 8 + ar4[3],a5,ar6,ar7
                    );
          iVar3 = iVar3 + 1;
        }
        uVar4 = uVar4 + 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c0d7ca0 @ 8c0d7ca0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7ca0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}



/* get_field_2c_0d7ca8 @ 8c0d7ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_2c_0d7ca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x2c);
}



/* FUN_8c0d7cb0 @ 8c0d7cb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c0d7cb0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  uint uVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined8 in_dr0;
  undefined8 uVar6;
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
  *(undefined4 *)(puVar4 + -0xc) = in_PR;
  piVar2 = (int *)0x0;
  if (*ar4 != 0) {
    for (uVar3 = 0; fVar5 = (float)in_dr0, uVar3 < (uint)ar4[4]; uVar3 = uVar3 + 1) {
      *(uint *)(puVar4 + -0x14) = uVar3;
      uVar1 = (*(code *)PTR_get_field_2c_0d7ca8_8c0d7dc4)
                        ((*(int *)(puVar4 + -0x14) * 8 - *(int *)(puVar4 + -0x14)) * 8 + ar4[3],ar5,
                         ar6,ar7);
      *(undefined4 *)(puVar4 + -0x10) = uVar1;
      if (*(int *)(puVar4 + -0x10) == 1) {
        *(uint *)(puVar4 + -0x18) = uVar3;
        piVar2 = (int *)((*(int *)(puVar4 + -0x18) * 8 - *(int *)(puVar4 + -0x18)) * 8 + ar4[3]);
        (**(code **)(*piVar2 + 0xc))(piVar2,ar5,ar6,ar7);
      }
    }
    *(int **)(puVar4 + -0x1c) = ar4;
    *(int *)(*(int *)(puVar4 + -0x1c) + 4) = *(int *)(*(int *)(puVar4 + -0x1c) + 4) + 1;
    piVar2 = (int *)*ar4;
    if (piVar2 == (int *)0x1) {
      *(int **)(puVar4 + -0x20) = ar4;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(*(int *)(puVar4 + -0x20) + 0x14);
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x20) + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = fVar5 + 1.0;
      }
      else {
        fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar4 + -0x24) = fVar5;
      }
      else {
        *(undefined8 *)(puVar4 + -0x24) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(*(int *)(puVar4 + -0x20) + 0x14) = *(undefined4 *)(puVar4 + -0x24);
        uVar6 = CONCAT44(ar4[6],*(undefined4 *)(puVar4 + -0x24));
      }
      else {
        *(undefined8 *)(*(int *)(puVar4 + -0x20) + 0x14) = *(undefined8 *)(puVar4 + -0x24);
        uVar6 = *(undefined8 *)(ar4 + 6);
      }
      piVar2 = ar4 + 6;
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar6 >> 0x20) < (float)uVar6) {
        *DAT_8c0d7dc8 = ar4[1];
        if (in_FPSCR_SZ == '\0') {
          ar4[5] = ar4[6];
        }
        else {
          *(undefined8 *)(ar4 + 5) = *(undefined8 *)(ar4 + 6);
        }
        piVar2 = (int *)0x2;
        *ar4 = 2;
      }
    }
    else if (piVar2 == (int *)0x2) {
      piVar2 = (int *)ar4[2];
      if (piVar2 < (int *)ar4[1]) {
        piVar2 = (int *)0x3;
        *ar4 = 3;
      }
    }
    else if (piVar2 == (int *)0x3) {
      *(int **)(puVar4 + -0x28) = ar4;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(*(int *)(puVar4 + -0x28) + 0x14);
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x28) + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = fVar5 - 1.0;
      }
      else {
        fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5),0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar4 + -0x2c) = fVar5;
      }
      else {
        *(undefined8 *)(puVar4 + -0x2c) = in_xd0;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(*(undefined4 *)(puVar4 + -0x2c),fVar5);
        *(undefined4 *)(*(int *)(puVar4 + -0x28) + 0x14) = *(undefined4 *)(puVar4 + -0x2c);
      }
      else {
        uVar6 = *(undefined8 *)(puVar4 + -0x2c);
        *(undefined8 *)(*(int *)(puVar4 + -0x28) + 0x14) = uVar6;
      }
      fVar5 = (float)uVar6;
      piVar2 = (int *)0x0;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)(puVar4 + -0x2c);
      }
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          ar4[5] = 0;
        }
        else {
          *(ulonglong *)(ar4 + 5) = (ulonglong)(uint)fVar5;
        }
        piVar2 = (int *)0x0;
        *ar4 = 0;
      }
    }
  }
  return piVar2;
}



/* FUN_8c0d7dcc @ 8c0d7dcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7dcc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint in_fr1;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  for (uVar1 = 0; uVar1 < (uint)ar4[4]; uVar1 = uVar1 + 1) {
    (*(code *)PTR_FUN_8c0d7e1c)(uVar1 * 0x38 + ar4[3],ar5,ar6,ar7);
    in_fr1 = extraout_fr1;
  }
  ar4[2] = DAT_8c0d7e20;
  *ar4 = 0;
  ar4[1] = 0;
  if (in_FPSCR_SZ == '\0') {
    ar4[5] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 5) = (ulonglong)in_fr1;
  }
  return 0;
}



/* FUN_8c0d7e24 @ 8c0d7e24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0d7e24(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    (*(code *)PTR_FUN_8c0d7e74)(uVar1 * 0x38 + *(int *)(ar4 + 0xc),ar5,ar6,ar7);
  }
  return *(uint *)(ar4 + 0x10);
}



/* FUN_8c0d7e78 @ 8c0d7e78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7e78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  return in_r0;
}



/* FUN_8c0d7e80 @ 8c0d7e80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d7ed0) */
/* WARNING: Removing unreachable block (ram,0x8c0d7eb8) */
/* WARNING: Removing unreachable block (ram,0x8c0d7ea8) */
/* WARNING: Removing unreachable block (ram,0x8c0d7eb0) */
/* WARNING: Removing unreachable block (ram,0x8c0d7ec8) */
/* WARNING: Removing unreachable block (ram,0x8c0d7ed8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7e80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  double dVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int in_stack_00000004;
  
  (*(code *)PTR_FUN_8c0d7f00)(ar4 + 0x1c,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d7f00)(ar4 + 0x30,ar5,ar6,ar7);
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)in_stack_00000004,in_fr1);
  }
  else {
    dVar2 = (double)in_stack_00000004;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x18) = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x18) = dVar2;
  }
  return uVar1;
}



/* FUN_8c0d7f04 @ 8c0d7f04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d7f04(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *ar4 = 1;
  ar4[2] = ar5;
  ar4[1] = 0;
  if (in_FPSCR_SZ == '\0') {
    ar4[5] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 5) = (ulonglong)in_fr1;
  }
  return 0;
}



/* s_66_JUNGLE_RAIN_5_0d7f1a @ 8c0d7f18 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * s_66_JUNGLE_RAIN_5_0d7f1a(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined *a6;
  undefined4 uVar1;
  uint in_fr1;
  ulonglong uVar2;
  undefined8 uVar3;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0d8030)(ar4 + 2,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0d8030)(ar4 + 6,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0d8034)(ar4 + 10,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d8038)(ar4 + 0xd,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d803c)(ar4 + 0x14,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d8048)(ar4 + 0x1e,(int)ar4 + DAT_8c0d8044,DAT_8c0d8040,ar7);
  (*(code *)PTR_FUN_8c0d8054)((int)ar4 + DAT_8c0d8044,PTR_FUN_8c0d8050,PTR_FUN_8c0d804c,0x38);
  uVar1 = 0x18;
  a5 = PTR_FUN_8c0d805c;
  a6 = PTR_free_if_nonnull_wrap_0cffc8_8c0d8058;
  (*(code *)PTR_FUN_8c0d8054)
            ((int)ar4 + DAT_8c0d8060,PTR_FUN_8c0d805c,PTR_free_if_nonnull_wrap_0cffc8_8c0d8058,0x18)
  ;
  (*(code *)PTR_FUN_8c0d8068)((int)ar4 + DAT_8c0d8064,a5,a6,uVar1);
  (*(code *)PTR_FUN_8c0d806c)(ar4,a5,a6,uVar1);
  if (in_FPSCR_SZ == '\0') {
    ar4[6] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 6) = CONCAT44(0x3f800000,in_fr1);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[7] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 7) = (ulonglong)in_fr1;
  }
  uVar2 = (ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    ar4[8] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 8) = uVar2;
  }
  (*(code *)PTR_Vec3_assign_8c0d8070)(ar4 + 2,ar4 + 6,a6,uVar1);
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44((undefined4)DAT_8c0d8074,(int)uVar2);
    ar4[0xb] = (undefined4)DAT_8c0d8074;
  }
  else {
    uVar3 = CONCAT44(DAT_8c0d8074._4_4_,(undefined4)DAT_8c0d8074);
    *(undefined8 *)(ar4 + 0xb) = uVar3;
  }
  uVar1 = (undefined4)uVar3;
  if (in_FPSCR_SZ == '\0') {
    ar4[0xe] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xe) = CONCAT44(0x3f800000,uVar1);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0xf] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xf) = CONCAT44(0x3f800000,uVar1);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0x10] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x10) = CONCAT44(0x3f800000,uVar1);
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[0x11] = 0x3f800000;
    ar4[0x12] = DAT_8c0d8074._4_4_;
  }
  else {
    *(ulonglong *)(ar4 + 0x11) = CONCAT44(0x3f800000,uVar1);
    *(ulonglong *)(ar4 + 0x12) = CONCAT44(PTR_PTR_8c0d807c,DAT_8c0d8074._4_4_);
  }
  *ar4 = 0;
  *(undefined4 *)(DAT_8c0d8060 + (int)ar4) = *(undefined4 *)PTR_PTR_8c0d807c;
  *(undefined4 *)(DAT_8c0d8080 + (int)ar4) = *(undefined4 *)PTR_PTR_8c0d8084;
  *(undefined4 *)(DAT_8c0d8088 + (int)ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d808c) = DAT_8c0d8090;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d808c) = CONCAT44(_FUN_8c0d8094,DAT_8c0d8090);
  }
  return ar4;
}



/* FUN_8c0d8094 @ 8c0d8094 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d8094(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0d80d0;
    a5 = 0;
    (*(code *)PTR_FUN_8c0d80d4)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d80d8)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d80dc @ 8c0d80dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d80dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_0d63c0_8c0d8120)(ar4 + 0x30,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0d63c0_8c0d8120)(ar4 + 0x1c,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d8124)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d8128 @ 8c0d8128 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d8128(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0d76b8_8c0d8160)(ar4 + 0xc,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d8164)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* free_if_nonnull_wrap_0d8168 @ 8c0d8168 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0d8168(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0d8194)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* s_GRAPHICS_ENV_0d819c @ 8c0d8198 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d819c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a4;
  undefined4 uVar1;
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  int iVar2;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d8290)(ar4,0,ar6,ar7);
  (*(code *)PTR_thunk_FUN_8c20a1d0_8c0d8298)(DAT_8c0d8294,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0d82a0)(DAT_8c0d829c,uVar1,ar6,ar7);
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(DAT_8c0d82a4 + iVar2 * 0xc + ar4) = 0;
  }
  a4 = (*(code *)PTR_get_field_4_0253e4_8c0d82ac)(ar4 + DAT_8c0d82a8,uVar1,ar6,ar7);
  a7 = 1;
  iVar2 = ar4 + DAT_8c0d82b4;
  uVar1 = DAT_8c0d82b0;
  (*(code *)PTR_FUN_8c0d82b8)(a4,iVar2,DAT_8c0d82b0,1);
  uVar1 = (*(code *)PTR_get_field_4_0253e4_8c0d82ac)(ar4 + DAT_8c0d82a8,iVar2,uVar1,a7);
  a6 = PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82c0;
  a5 = PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82c4;
  iVar2 = (*(code *)PTR_FUN_8c0d82c8)(ar5,a5,a6,uVar1);
  if (iVar2 == 0) {
    uVar1 = 2;
    a6 = (undefined *)0x0;
    a5 = PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82cc;
    (*(code *)PTR_report_error_message_8c0d82d4)
              (PTR_s_GRAPHICS_COMMON_8c0d82bc + DAT_8c0d82d0,a5,0,2);
  }
  (*(code *)PTR_FUN_8c0d82d8)(ar4 + 0x78,a5,a6,uVar1);
  uVar1 = 0x5a;
  (*(code *)PTR_FUN_8c0d82e0)(ar4 + 0x78,1,0xf,0x5a);
  uVar1 = (*(code *)PTR_FUN_8c0d82ec)(ar4 + 0x78,DAT_8c0d82e8,DAT_8c0d82e4,uVar1);
  return uVar1;
}



/* FUN_8c0d82f0 @ 8c0d82f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d8340) */
/* WARNING: Removing unreachable block (ram,0x8c0d8322) */
/* WARNING: Removing unreachable block (ram,0x8c0d83a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d82f0(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  double in_dr0;
  double dVar3;
  double in_dr4;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  double in_xd0;
  undefined8 in_xd14;
  bool bVar6;
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
  *(undefined4 *)((int)puVar2 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  uVar1 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  if (*DAT_8c0d83c8 == '\0') {
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = (double)CONCAT44(uVar1,DAT_8c0d83d0);
    }
    else {
      in_xd0 = (double)CONCAT44(DAT_8c0d83d4,DAT_8c0d83d0);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr4 >> 0x20) + SUB84(in_dr4,0),SUB84(in_dr4,0)
                               );
    }
    else {
      in_dr0 = in_dr4 + in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)DAT_8c0d83cc = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *DAT_8c0d83cc = in_dr0;
    }
    *DAT_8c0d83c8 = '\x01';
  }
  if (ar5 < DAT_8c0d83d4) {
    fVar4 = (float)(int)ar5;
    dVar5 = (double)CONCAT44(uVar1,fVar4);
    dVar3 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_PR == '\0') {
      bVar6 = fVar4 < 0.0;
    }
    else {
      bVar6 = dVar5 < dVar3;
    }
    if (bVar6) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(DAT_8c0d83d8,SUB84(in_dr0,0));
      }
      else {
        dVar3 = (double)CONCAT44(DAT_8c0d83dc,DAT_8c0d83d8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44(uVar1,fVar4 + (float)((ulonglong)dVar3 >> 0x20));
      }
      else {
        dVar5 = dVar5 + dVar3;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0d83dc,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(_DAT_8c0d83e0,DAT_8c0d83dc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),
                               SUB84(dVar5,0) / (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar5 = dVar5 / dVar3;
    }
  }
  else {
    fVar4 = (float)(int)(_DAT_8c0d83e0 - ar5);
    dVar5 = (double)CONCAT44(uVar1,fVar4);
    dVar3 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_PR == '\0') {
      bVar6 = fVar4 < 0.0;
    }
    else {
      bVar6 = dVar5 < dVar3;
    }
    if (bVar6) {
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)CONCAT44(DAT_8c0d83d8,SUB84(in_dr0,0));
      }
      else {
        dVar3 = (double)CONCAT44(DAT_8c0d83dc,DAT_8c0d83d8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar5 = (double)CONCAT44(uVar1,fVar4 + (float)((ulonglong)dVar3 >> 0x20));
      }
      else {
        dVar5 = dVar5 + dVar3;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0d83dc,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(_DAT_8c0d83e0,DAT_8c0d83dc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),
                               SUB84(dVar5,0) / (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar5 = dVar5 / dVar3;
    }
  }
  dVar3 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
  if (in_FPSCR_PR == '\0') {
    bVar6 = 1.0 < SUB84(dVar5,0);
  }
  else {
    bVar6 = dVar3 < dVar5;
  }
  if (bVar6) {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),0x3f800000);
  }
  (*(code *)PTR_Class_12c3a4_m0_1029d0_8c0d83e8)(DAT_8c0d83e4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar2 + -0xc) = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined4 *)DAT_8c0d83ec = *(undefined4 *)((int)puVar2 + -0xc);
    dVar3 = (double)CONCAT44(DAT_8c0d83f0,SUB84(dVar3,0));
  }
  else {
    *(double *)((int)puVar2 + -0xc) = dVar3;
    *DAT_8c0d83ec = *(double *)((int)puVar2 + -0xc);
    dVar3 = (double)CONCAT44(DAT_8c0d83f4,DAT_8c0d83f0);
  }
  fVar4 = (float)((ulonglong)dVar5 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar6 = (float)((ulonglong)dVar3 >> 0x20) < fVar4;
  }
  else {
    bVar6 = dVar3 < dVar5;
  }
  if (bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0d83f0,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c0d83f4,DAT_8c0d83f0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44(fVar4 - (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 - dVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0d83f0,*(undefined4 *)DAT_8c0d83ec);
    }
    else {
      dVar3 = (double)CONCAT44(DAT_8c0d83f4,DAT_8c0d83f0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) +
                               SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + dVar3 * dVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)DAT_8c0d83f4 = (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *DAT_8c0d83f4 = dVar5;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c0d83f0,*(undefined4 *)DAT_8c0d83ec);
    }
    else {
      in_xd0 = *DAT_8c0d83ec;
      dVar3 = (double)CONCAT44(DAT_8c0d83f4,DAT_8c0d83f0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar3 * dVar3,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)DAT_8c0d83f4 = fVar4;
    }
    else {
      *DAT_8c0d83f4 = in_xd0;
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0d83fc)(DAT_8c0d83f8,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d8400 @ 8c0d8400 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8400(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d8430)(ar4,0,ar6,ar7);
  (*(code *)PTR_thunk_FUN_8c20a1d0_8c0d8438)(DAT_8c0d8434,uVar1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d8440)(DAT_8c0d843c,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d8444 @ 8c0d8444 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8444(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0d8454)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_0d8458 @ 8c0d8458 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d8458(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d845c @ 8c0d845c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d845c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d8460 @ 8c0d8460 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d8460(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(DAT_8c0d8498 + ar4) != -1) {
    (*(code *)PTR_pack_release_entry_handle_8c0d84a0)
              (DAT_8c0d849c,*(undefined4 *)(DAT_8c0d8498 + ar4),ar6,ar7);
  }
  iVar1 = *(int *)(DAT_8c0d84a4 + ar4);
  if (iVar1 != -1) {
    iVar1 = (*(code *)PTR_pack_release_entry_handle_8c0d84a0)
                      (DAT_8c0d849c,*(undefined4 *)(DAT_8c0d84a4 + ar4),ar6,ar7);
  }
  return iVar1;
}



/* FUN_8c0d84a8 @ 8c0d84a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d84a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_8c0d84d8 + ar4);
  if (iVar1 != -1) {
    uVar2 = (*(code *)PTR_pack_acquire_entry_handle_8c0d84e4)
                      (DAT_8c0d84e0,*(undefined4 *)(DAT_8c0d84dc + ar4),ar6,ar7);
    iVar1 = DAT_8c0d84d8;
    *(undefined4 *)(DAT_8c0d84d8 + ar4) = uVar2;
  }
  return iVar1;
}



/* FUN_8c0d84e8 @ 8c0d84e8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d84e8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  undefined8 in_dr0;
  float fVar4;
  undefined4 in_fr14;
  bool bVar5;
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
  *(undefined4 *)(puVar3 + -0x34) = ar5;
  if (*DAT_8c0d86c8 == '\0') {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(_DAT_8c0d86d0,(int)in_dr0);
      *(undefined4 *)DAT_8c0d86cc = _DAT_8c0d86d0;
    }
    else {
      in_dr0 = CONCAT44(PTR_FUN_8c0d86d4,_DAT_8c0d86d0);
      *DAT_8c0d86cc = in_dr0;
    }
    *DAT_8c0d86c8 = '\x01';
  }
  fVar4 = 0.0;
  (*(code *)PTR_FUN_8c0d86d4)(ar4,*(undefined4 *)(puVar3 + -0x34),ar6,ar7);
  if (ar4[1] == 0) {
    uVar2 = (*(code *)PTR_FUN_8c0d86d8)(ar4,*ar4,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x14) = uVar2;
    uVar2 = *(undefined4 *)(puVar3 + -0x14);
    *(undefined4 *)(puVar3 + -0x20) = uVar2;
    puVar1 = (undefined8 *)
             ((*(int *)(puVar3 + -0x20) * 4 + *(int *)(puVar3 + -0x20)) * 4 + DAT_8c0d86dc);
    if (in_FPSCR_SZ == '\0') {
      ar4[0xe] = *(undefined4 *)puVar1;
    }
    else {
      *(undefined8 *)(ar4 + 0xe) = *puVar1;
    }
    *(undefined4 *)(puVar3 + -0x24) = uVar2;
    puVar1 = (undefined8 *)
             ((*(int *)(puVar3 + -0x24) * 4 + *(int *)(puVar3 + -0x24)) * 4 + DAT_8c0d86dc + 4);
    if (in_FPSCR_SZ == '\0') {
      ar4[0xf] = *(undefined4 *)puVar1;
    }
    else {
      *(undefined8 *)(ar4 + 0xf) = *puVar1;
    }
    *(undefined4 *)(puVar3 + -0x28) = uVar2;
    puVar1 = (undefined8 *)
             ((*(int *)(puVar3 + -0x28) * 4 + *(int *)(puVar3 + -0x28)) * 4 + DAT_8c0d86dc + 8);
    if (in_FPSCR_SZ == '\0') {
      ar4[0x10] = *(undefined4 *)puVar1;
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = *puVar1;
    }
    *(undefined4 *)(puVar3 + -0x2c) = uVar2;
    puVar1 = (undefined8 *)
             ((*(int *)(puVar3 + -0x2c) * 4 + *(int *)(puVar3 + -0x2c)) * 4 + DAT_8c0d86dc + 0xc);
    if (in_FPSCR_SZ == '\0') {
      ar4[0x11] = *(undefined4 *)puVar1;
    }
    else {
      *(undefined8 *)(ar4 + 0x11) = *puVar1;
    }
    *(undefined4 *)(puVar3 + -0x30) = uVar2;
    puVar1 = (undefined8 *)
             ((*(int *)(puVar3 + -0x30) * 4 + *(int *)(puVar3 + -0x30)) * 4 + DAT_8c0d86dc + 0x10);
    if (in_FPSCR_SZ == '\0') {
      ar4[0x12] = *(undefined4 *)puVar1;
      in_dr0 = CONCAT44(*(undefined4 *)DAT_8c0d86cc,ar4[0x12]);
    }
    else {
      *(undefined8 *)(ar4 + 0x12) = *puVar1;
      in_dr0 = *DAT_8c0d86cc;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(*(undefined4 *)DAT_8c0d86cc,(float)in_dr0);
        ar4[0x12] = *(undefined4 *)DAT_8c0d86cc;
      }
      else {
        in_dr0 = *DAT_8c0d86cc;
        *(undefined8 *)(ar4 + 0x12) = in_dr0;
      }
    }
  }
  else if (ar4[1] == 1) {
    if (in_FPSCR_SZ == '\0') {
      ar4[0xe] = ar4[0x17];
      ar4[0xf] = ar4[0x18];
      ar4[0x10] = ar4[0x19];
      ar4[0x11] = ar4[0x1a];
      in_dr0 = CONCAT44(ar4[0x1b],(int)in_dr0);
      ar4[0x12] = ar4[0x1b];
    }
    else {
      *(undefined8 *)(ar4 + 0xe) = *(undefined8 *)(ar4 + 0x17);
      *(undefined8 *)(ar4 + 0xf) = *(undefined8 *)(ar4 + 0x18);
      *(undefined8 *)(ar4 + 0x10) = *(undefined8 *)(ar4 + 0x19);
      *(undefined8 *)(ar4 + 0x11) = *(undefined8 *)(ar4 + 0x1a);
      in_dr0 = *(undefined8 *)(ar4 + 0x1b);
      *(undefined8 *)(ar4 + 0x12) = in_dr0;
    }
    if (((ar4[0x1c] == 1) && (ar4[0x1d] == 0)) && (*(int *)(DAT_8c0d86e0 + (int)ar4) == -1)) {
      uVar2 = (*(code *)PTR_pack_acquire_entry_handle_8c0d86ec)
                        (DAT_8c0d86e8,*(undefined4 *)(DAT_8c0d86e4 + (int)ar4),ar6,ar7);
      *(undefined4 *)(puVar3 + -0x18) = uVar2;
      *(undefined4 *)(DAT_8c0d86e0 + (int)ar4) = *(undefined4 *)(puVar3 + -0x18);
    }
    if (((ar4[0x1c] == 0) && (*(int *)(DAT_8c0d86e0 + (int)ar4) != -1)) &&
       (*(int *)(DAT_8c0d86f0 + (int)ar4) == 0)) {
      (*(code *)PTR_pack_release_entry_handle_8c0d86f4)
                (DAT_8c0d86e8,*(undefined4 *)(DAT_8c0d86e0 + (int)ar4),ar6,ar7);
      *(undefined4 *)(DAT_8c0d86e0 + (int)ar4) = 0xffffffff;
    }
    if (*(int *)(DAT_8c0d86f8 + (int)ar4) != -1) {
      ar7 = *(undefined4 *)(DAT_8c0d86fc + (int)ar4);
      ar6 = 0;
      (*(code *)PTR_FUN_8c0d8700)(DAT_8c0d86e8,*(undefined4 *)(DAT_8c0d86f8 + (int)ar4),0,ar7);
    }
  }
  uVar2 = *ar4;
  (*(code *)PTR_FUN_8c0d8704)(ar4,uVar2,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar3 + -0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
    fVar4 = *(float *)(puVar3 + -0x1c);
  }
  else {
    *(undefined8 *)(puVar3 + -0x1c) = in_dr0;
  }
  if (in_FPSCR_PR == '\0') {
    bVar5 = fVar4 < 1.0;
  }
  else {
    bVar5 = (double)CONCAT44(in_fr14,fVar4) < (double)CONCAT44(0x3f800000,(int)in_dr0);
  }
  if (bVar5) {
    uVar2 = (*(code *)PTR_FUN_8c0d870c)(ar4,uVar2,ar6,ar7);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c0d8708)(ar4,uVar2,ar6,ar7);
  }
  return uVar2;
}



/* FUN_8c0d8710 @ 8c0d8710 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c0d8710(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  char in_FPSCR_SZ;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  int iStack_14;
  
  uStack_1c = ar5;
  if (*ar4 == 0) {
    (*(code *)PTR_FUN_8c0d87d0)(ar4,ar5,ar6,ar7);
  }
  uVar2 = *ar4;
  iVar1 = (*(code *)PTR_FUN_8c0d87d4)(ar4,uVar2,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c0d87d8),(undefined4)uStack_24);
  }
  else {
    uStack_24 = *(undefined8 *)((int)ar4 + DAT_8c0d87d8);
    puVar3 = &uStack_24;
  }
  iStack_14 = iVar1;
  (*(code *)PTR_FUN_8c0d87f8)(ar4 + 0x1e,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0d8800)(ar4 + 0x1e,uVar2,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    ar4[1] = 0;
  }
  else {
    ar4[1] = 1;
  }
  if (ar4[1] == 0) {
    *(uint **)((int)puVar3 + 8) = ar4;
    **(int **)((int)puVar3 + 8) = **(int **)((int)puVar3 + 8) + 1;
  }
  uVar2 = DAT_8c0d8804;
  if (DAT_8c0d8804 <= *ar4) {
    uVar2 = 0;
    *ar4 = 0;
  }
  return uVar2;
}



/* FUN_8c0d8808 @ 8c0d8808 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8808(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  undefined1 *a6;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  a6 = auStack_20;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = *(undefined4 *)(ar4 + 0x18);
    uStack_10 = *(undefined4 *)(ar4 + 0x1c);
    uStack_c = *(undefined4 *)(ar4 + 0x20);
    uStack_8 = in_PR;
  }
  else {
    uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x18);
    uStack_10 = (undefined4)*(undefined8 *)(ar4 + 0x1c);
    uStack_c = (undefined4)*(undefined8 *)(ar4 + 0x20);
    uStack_8 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x20) >> 0x20);
  }
  a5 = &uStack_14;
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d8880)(0,a5,auStack_20,ar7);
  (*(code *)PTR_FUN_8c0d8884)(uVar1,a5,a6,ar7);
  (*(code *)PTR_FUN_8c0d8888)(uVar1,a5,a6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d888c)(uVar1,a5,a6,ar7);
  return uVar1;
}



/* FUN_8c0d8890 @ 8c0d8890 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d891c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8890(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 a4;
  undefined1 *a5;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  float fVar4;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar6;
  undefined4 in_PR;
  int iVar7;
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
  *(undefined4 *)(puVar3 + -8) = in_PR;
  *(undefined4 *)(puVar3 + -0x28) = ar5;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = DAT_8c0d89a8;
  }
  a5 = puVar3 + -0x14;
  uVar2 = *(undefined4 *)(puVar3 + -0x28);
  (*(code *)PTR_FUN_8c0d89ac)(uVar2,a5,ar6,ar7);
  switch(puVar3[-0x12]) {
  case 1:
  case 2:
  case 0xb:
  case 0xc:
    if (in_FPSCR_SZ == '\0') {
      in_fr15 = DAT_8c0d89b0._4_4_;
    }
    break;
  default:
    if (in_FPSCR_SZ == '\0') {
      in_fr15 = DAT_8c0d89a8;
    }
    break;
  case 6:
  case 7:
    if (in_FPSCR_SZ == '\0') {
      in_fr15 = (float)DAT_8c0d89b0;
    }
  }
  uVar1 = (*(code *)PTR_rand_8c0d89b8)(uVar2,a5,ar6,ar7);
  *(undefined4 *)(puVar3 + -0x18) = uVar1;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(DAT_8c0d89bc,(float)*(int *)(puVar3 + -0x18));
  }
  else {
    dVar5 = (double)CONCAT44(_DAT_8c0d89c0,DAT_8c0d89bc);
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
  }
  else {
    bVar6 = dVar5 / dVar5 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar6) {
    *(undefined4 *)(ar4 + 0x58) = 1;
    uVar2 = (*(code *)PTR_rand_8c0d89b8)(uVar2,a5,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x1c) = uVar2;
    a4 = *(undefined4 *)(puVar3 + -0x1c);
    uVar2 = _DAT_8c0d89c0;
    uVar1 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c0d89c4)(a4,_DAT_8c0d89c0,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x24) = uVar1;
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(puVar3 + -0x24);
    if (*(uint *)(ar4 + 0x50) < DAT_8c0d89c8) {
      *(uint *)(ar4 + 0x50) = DAT_8c0d89c8;
    }
    uVar2 = (*(code *)PTR_rand_8c0d89b8)(a4,uVar2,ar6,ar7);
    *(undefined4 *)(puVar3 + -0x20) = uVar2;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0d89bc,(float)*(int *)(puVar3 + -0x20));
    }
    else {
      dVar5 = (double)CONCAT44(_DAT_8c0d89c0,DAT_8c0d89bc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 / dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0d89cc,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0d89d0,DAT_8c0d89cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0d89cc,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0d89d0,DAT_8c0d89cc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c0d89d0,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(DAT_8c0d89d4,DAT_8c0d89d0);
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar5,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(DAT_8c0d89d4,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)CONCAT44(_FUN_8c0d89d8,DAT_8c0d89d4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar7 = (int)SUB84(dVar5,0);
    }
    else {
      iVar7 = (int)dVar5;
    }
    uVar2 = 0x54;
    *(int *)(ar4 + 0x54) = iVar7;
  }
  else {
    uVar2 = 0x58;
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  return uVar2;
}



/* FUN_8c0d89d8 @ 8c0d89d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d89d8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)PTR_get_field_10_0d8a98_8c0d8a70)(ar4 + 0x78,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_get_field_c_0d8a90_8c0d8a74)(ar4 + 0x78,ar5,ar6,ar7);
  iVar3 = (*(code *)PTR_FUN_8c0d8a78)(ar4 + 0x78,ar5,ar6,ar7);
  if (iVar3 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar3 = (*(code *)PTR_get_field_2c_0d7ca8_8c0d8a7c)(iVar4 * 0x38 + iVar2,ar5,ar6,ar7);
      if (iVar3 == 1) {
        ar6 = 0;
        ar5 = ar4 + DAT_8c0d8a80;
        iVar3 = (*(code *)PTR_FUN_8c0d8a84)(iVar4 * 0x38 + iVar2,ar5,0,ar7);
      }
    }
  }
  return iVar3;
}



/* FUN_8c0d8a88 @ 8c0d8a88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8a88(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}



/* get_field_c_0d8a90 @ 8c0d8a90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c_0d8a90(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}



/* get_field_10_0d8a98 @ 8c0d8a98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_10_0d8a98(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}



/* FUN_8c0d8aa0 @ 8c0d8aa0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d8aea) */
/* WARNING: Removing unreachable block (ram,0x8c0d8b1e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d8aa0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar2;
  undefined4 in_fr1;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  undefined8 in_dr14;
  undefined4 uVar8;
  double dVar6;
  double dVar7;
  undefined8 in_xd14;
  bool bVar9;
  undefined4 in_PR;
  int iVar10;
  int a6;
  int a5;
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
  *(undefined4 *)((int)puVar2 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar2 + -0x10) = in_PR;
  (*(code *)PTR_FUN_8c0d8bc0)((undefined1 *)((int)puVar2 + -0x50),ar5,ar6,ar7);
  uVar8 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar2 + -0x5c) = *(undefined4 *)(ar4 + 8);
    *(undefined4 *)((int)puVar2 + -0x58) = *(undefined4 *)(ar4 + 0xc);
    uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x10),in_fr1);
    *(undefined4 *)((int)puVar2 + -0x54) = *(undefined4 *)(ar4 + 0x10);
  }
  else {
    *(undefined8 *)((int)puVar2 + -0x5c) = *(undefined8 *)(ar4 + 8);
    *(undefined8 *)((int)puVar2 + -0x58) = *(undefined8 *)(ar4 + 0xc);
    uVar3 = *(ulonglong *)(ar4 + 0x10);
    *(ulonglong *)((int)puVar2 + -0x54) = uVar3;
  }
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c0d8bc8)(ar5,DAT_8c0d8bc4,ar6,ar7);
  *(undefined4 *)((int)puVar2 + -0x6c) = uVar1;
  fVar5 = (float)*(int *)((int)puVar2 + -0x6c);
  dVar6 = (double)CONCAT44(uVar8,fVar5);
  dVar7 = (double)(uVar3 & 0xffffffff);
  if (in_FPSCR_PR == '\0') {
    bVar9 = fVar5 < 0.0;
  }
  else {
    bVar9 = dVar6 < dVar7;
  }
  if (bVar9) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c0d8bcc,(int)uVar3);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c0d8bd0,DAT_8c0d8bcc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)(ulonglong)(uint)(fVar5 + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar6 = dVar6 + dVar7;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar3 = CONCAT44(DAT_8c0d8bd0,SUB84(dVar7,0));
  }
  else {
    uVar3 = CONCAT44(DAT_8c0d8bd4,DAT_8c0d8bd0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)ar5,SUB84(dVar6,0) / (float)(uVar3 >> 0x20));
  }
  else {
    dVar7 = (double)ar5;
  }
  dVar6 = (double)(uVar3 & 0xffffffff);
  fVar5 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar9 = fVar5 < 0.0;
  }
  else {
    bVar9 = dVar7 < dVar6;
  }
  if (bVar9) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c0d8bcc,(int)uVar3);
    }
    else {
      dVar6 = (double)CONCAT44(DAT_8c0d8bd0,DAT_8c0d8bcc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44(fVar5 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar6;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0d8bd4,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c0d8bd8,DAT_8c0d8bd4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 / dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c0d8bd8,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c0d8bdc,DAT_8c0d8bd8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                             SUB84(dVar7,0) * (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    dVar7 = dVar7 * dVar6;
  }
  dVar6 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),-SUB84(dVar7,0));
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x30) = -SUB84(dVar7,0);
    dVar7 = (double)CONCAT44(DAT_8c0d8bdc,*(undefined4 *)(ar4 + 0x30));
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = in_xd14;
    dVar7 = (double)CONCAT44(DAT_8c0d8be0,DAT_8c0d8bdc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0d8be0,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0d8be4,DAT_8c0d8be0);
  }
  if (in_FPSCR_PR == '\0') {
    iVar10 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar10 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0d8bdc,*(undefined4 *)(ar4 + 0x2c));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0d8be0,DAT_8c0d8bdc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0d8be0,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0d8be4,DAT_8c0d8be0);
  }
  if (in_FPSCR_PR == '\0') {
    a6 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    a6 = (int)(dVar7 / dVar7);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0d8bdc,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c0d8be0,DAT_8c0d8bdc);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c0d8be0,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(PTR_FUN_8c0d8be4,DAT_8c0d8be0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar4 = (float)((ulonglong)dVar7 >> 0x20);
    fVar5 = SUB84(dVar7,0) / fVar4;
    dVar7 = (double)CONCAT44(fVar4,fVar5);
    a5 = (int)fVar5;
  }
  else {
    dVar7 = dVar7 / dVar7;
    a5 = (int)dVar7;
  }
  uVar8 = SUB84(dVar7,0);
  (*(code *)PTR_FUN_8c0d8be4)((undefined1 *)((int)puVar2 + -0x50),a5,a6,iVar10);
  (*(code *)PTR_FUN_8c0d8be8)
            ((undefined1 *)((int)puVar2 + -0x50),(undefined1 *)((int)puVar2 + -0x5c),
             (undefined1 *)((int)puVar2 + -0x68),iVar10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)((int)puVar2 + -0x68);
    *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)((int)puVar2 + -100);
    *(undefined4 *)(ar4 + 0x20) = *(undefined4 *)((int)puVar2 + -0x60);
    dVar7 = (double)CONCAT44(DAT_8c0d8bec,uVar8);
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = *(undefined8 *)((int)puVar2 + -0x68);
    *(undefined8 *)(ar4 + 0x1c) = *(undefined8 *)((int)puVar2 + -100);
    *(undefined8 *)(ar4 + 0x20) = *(undefined8 *)((int)puVar2 + -0x60);
    dVar7 = (double)CONCAT44(_FUN_8c0d8bf0,DAT_8c0d8bec);
  }
  if (in_FPSCR_PR == '\0') {
    iVar10 = (int)((float)((ulonglong)dVar6 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar10 = (int)(dVar6 * dVar7);
  }
  return iVar10;
}



/* FUN_8c0d8bf0 @ 8c0d8bf0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d9160) */
/* WARNING: Removing unreachable block (ram,0x8c0d8d8c) */
/* WARNING: Removing unreachable block (ram,0x8c0d8e46) */
/* WARNING: Removing unreachable block (ram,0x8c0d8e34) */
/* WARNING: Removing unreachable block (ram,0x8c0d8e78) */
/* WARNING: Removing unreachable block (ram,0x8c0d9170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d8bf0(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  undefined4 uVar1;
  int iVar2;
  undefined *a5;
  double *pdVar3;
  float fVar4;
  float fVar7;
  undefined8 uVar5;
  double *pdVar8;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  a5 = ar5;
  if (*DAT_8c0d8c94 == '\0') {
    uVar1 = (*(code *)PTR_FUN_8c0d8c9c)(DAT_8c0d8c98,ar5,ar6,ar7);
    a5 = PTR_free_if_nonnull_wrap_0d76b8_8c0d8ca4;
    ar6 = DAT_8c0d8ca0;
    (*(code *)PTR_global_list_push_8c0d8ca8)
              (uVar1,PTR_free_if_nonnull_wrap_0d76b8_8c0d8ca4,DAT_8c0d8ca0,ar7);
    *DAT_8c0d8c94 = '\x01';
  }
  if (*DAT_8c0d8cac == '\0') {
    uVar1 = (*(code *)PTR_FUN_8c0d8c9c)(DAT_8c0d8cb0,a5,ar6,ar7);
    a5 = PTR_free_if_nonnull_wrap_0d76b8_8c0d8ca4;
    ar6 = DAT_8c0d8cb4;
    (*(code *)PTR_global_list_push_8c0d8ca8)
              (uVar1,PTR_free_if_nonnull_wrap_0d76b8_8c0d8ca4,DAT_8c0d8cb4,ar7);
    *DAT_8c0d8cac = '\x01';
  }
  if (*DAT_8c0d8cb8 == '\0') {
    *DAT_8c0d8cbc = 0;
    *DAT_8c0d8cb8 = '\x01';
  }
  switch(*(undefined4 *)(ar4 + 0x58)) {
  case 1:
    if (ar5 == *(undefined **)(ar4 + 0x50)) {
      *(undefined4 *)(ar4 + 0x58) = 2;
      *(undefined4 *)(ar4 + 0x74) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar4 + 0x38);
        *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x3c);
        *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x40);
        *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x44);
        *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x48);
        dVar6 = (double)CONCAT44(DAT_8c0d8da8,*(undefined4 *)(ar4 + 0x68));
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = *(undefined8 *)(ar4 + 0x38);
        *(undefined8 *)(ar4 + 0x60) = *(undefined8 *)(ar4 + 0x3c);
        *(undefined8 *)(ar4 + 100) = *(undefined8 *)(ar4 + 0x40);
        *(undefined8 *)(ar4 + 0x68) = *(undefined8 *)(ar4 + 0x44);
        *(undefined8 *)(ar4 + 0x6c) = *(undefined8 *)(ar4 + 0x48);
        in_xd0 = *(undefined8 *)(ar4 + 0x68);
        dVar6 = (double)CONCAT44(DAT_8c0d8dac,DAT_8c0d8da8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 - dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0d8dac,fVar4);
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c0d8db0,DAT_8c0d8dac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 / dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *DAT_8c0d8da4 = fVar4;
        dVar6 = (double)CONCAT44(DAT_8c0d8db4,*(undefined4 *)(ar4 + 0x6c));
      }
      else {
        *(undefined8 *)DAT_8c0d8da4 = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        dVar6 = (double)CONCAT44(DAT_8c0d8db8,DAT_8c0d8db4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 - dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0d8dac,fVar4);
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c0d8db0,DAT_8c0d8dac);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 / dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *DAT_8c0d8db0 = fVar4;
      }
      else {
        *(undefined8 *)DAT_8c0d8db0 = in_xd0;
      }
      a4 = DAT_8c0d8db8;
      uVar1 = *(undefined4 *)(ar4 + 0x60);
      *DAT_8c0d8db8 = *(undefined4 *)(ar4 + 0x5c);
      a4[1] = uVar1;
      uVar1 = *(undefined4 *)(ar4 + 0x68);
      a4[2] = *(undefined4 *)(ar4 + 100);
      a4[3] = uVar1;
      a4[4] = *(undefined4 *)(ar4 + 0x6c);
      iVar2 = (*(code *)PTR_rand_8c0d8dbc)(a4,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0d8dc4,(float)iVar2);
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c0d8dc8,DAT_8c0d8dc4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 / dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0d8dc8,fVar4);
      }
      else {
        dVar6 = (double)CONCAT44(uRam8c0d8dcc,DAT_8c0d8dc8);
      }
      if (in_FPSCR_PR == '\0') {
        iVar2 = (int)(SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20));
      }
      else {
        iVar2 = (int)(dVar6 * dVar6);
      }
      *DAT_8c0d8dc0 = iVar2;
    }
    break;
  case 2:
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)DAT_8c0d8eb4,*(undefined4 *)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      dVar6 = *DAT_8c0d8eb4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x68) = fVar4;
      dVar6 = (double)CONCAT44(*(undefined4 *)DAT_8c0d8eb8,*(undefined4 *)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      dVar6 = *DAT_8c0d8eb8;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x6c) = fVar4;
      fVar4 = *(float *)(ar4 + 0x68);
      fVar7 = DAT_8c0d8ebc;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar4 = DAT_8c0d8ebc;
      fVar7 = DAT_8c0d8ec0;
    }
    if (in_FPSCR_PR != '\0' || fVar4 <= fVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x68) = DAT_8c0d8ebc;
      }
      else {
        *(ulonglong *)(ar4 + 0x68) = CONCAT44(DAT_8c0d8ec0,DAT_8c0d8ebc);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + 0x6c);
      fVar7 = DAT_8c0d8ec0;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      fVar4 = DAT_8c0d8ec0;
      fVar7 = _DAT_8c0d8ec4;
    }
    if (in_FPSCR_PR != '\0' || fVar4 <= fVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x6c) = DAT_8c0d8ec0;
      }
      else {
        *(ulonglong *)(ar4 + 0x6c) = CONCAT44(_DAT_8c0d8ec4,DAT_8c0d8ec0);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar4 = *(float *)(ar4 + 0x68);
      fVar7 = DAT_8c0d8ebc;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar4 = DAT_8c0d8ebc;
      fVar7 = DAT_8c0d8ec0;
    }
    if (fVar4 == fVar7) {
      if (in_FPSCR_SZ == '\0') {
        fVar4 = *(float *)(ar4 + 0x6c);
        fVar7 = DAT_8c0d8ec0;
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        fVar4 = DAT_8c0d8ec0;
        fVar7 = _DAT_8c0d8ec4;
      }
      if (fVar4 == fVar7) {
        *(undefined4 *)(ar4 + 0x58) = 3;
        iVar2 = ar4 + 0x78;
        fVar4 = _DAT_8c0d8ec4;
        (*(code *)PTR_FUN_8c0d8ec8)(iVar2,_DAT_8c0d8ec4,ar6,ar7);
        iVar2 = (*(code *)PTR_rand_8c0d8ecc)(iVar2,fVar4,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0d8ed4,(float)iVar2);
        }
        else {
          dVar6 = (double)CONCAT44(DAT_8c0d8ed8,DAT_8c0d8ed4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 / dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0d8ed8,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(DAT_8c0d8edc,DAT_8c0d8ed8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0d8edc,fVar4);
        }
        else {
          dVar6 = (double)CONCAT44(DAT_8c0d8ee0,DAT_8c0d8edc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 + dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + DAT_8c0d8ed0) = fVar4;
        }
        else {
          *(undefined8 *)(ar4 + DAT_8c0d8ed0) = in_xd0;
        }
        uVar1 = (*(code *)PTR_pack_acquire_entry_handle_8c0d8ee8)
                          (DAT_8c0d8ee4,*(undefined4 *)(DAT_8c0d8ee0 + ar4),ar6,ar7);
        *(undefined4 *)(DAT_8c0d8eec + ar4) = uVar1;
        *(undefined4 *)(DAT_8c0d8ef0 + ar4) = DAT_8c0d8ef4;
      }
    }
    break;
  case 3:
    *(undefined4 *)(ar4 + 0x58) = 4;
    break;
  case 4:
    if ((DAT_8c0d905c < *(int *)(DAT_8c0d9058 + ar4)) &&
       (iVar2 = *(int *)(DAT_8c0d9058 + ar4) + -10, *(int *)(DAT_8c0d9058 + ar4) = iVar2,
       iVar2 < DAT_8c0d905c)) {
      *(int *)(DAT_8c0d9058 + ar4) = DAT_8c0d905c;
    }
    if (*(int *)(ar4 + 0x70) == 0) {
      iVar2 = ar4 + 0x78;
      uVar1 = (*(code *)PTR_get_field_4_0d92a8_8c0d9060)(iVar2,a5,ar6,ar7);
      if ((uint)(int)(short)uVar1 < *(uint *)(ar4 + 0x54)) {
        uVar1 = (*(code *)PTR_rand_8c0d9064)(iVar2,a5,ar6,ar7);
        a5 = (undefined *)0x64;
        iVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d9068)(uVar1,100,ar6,ar7);
        if ((iVar2 < 0x14) && (*(int *)(DAT_8c0d906c + ar4) == 0)) {
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(DAT_8c0d9078,*(undefined4 *)((int)DAT_8c0d9074 + 0xc));
          }
          else {
            in_xd0 = *(undefined8 *)((int)DAT_8c0d9074 + 0xc);
            dVar6 = (double)CONCAT44(DAT_8c0d907c,DAT_8c0d9078);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 - dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(DAT_8c0d907c,fVar4);
          }
          else {
            dVar6 = (double)CONCAT44(DAT_8c0d9080,DAT_8c0d907c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 / dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            DAT_8c0d9070[3] = fVar4;
            dVar6 = (double)CONCAT44(DAT_8c0d9080,*(undefined4 *)DAT_8c0d9074);
          }
          else {
            *(undefined8 *)(DAT_8c0d9070 + 3) = in_xd0;
            in_xd0 = *DAT_8c0d9074;
            dVar6 = (double)CONCAT44(_DAT_8c0d9084,DAT_8c0d9080);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 - dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(DAT_8c0d907c,fVar4);
          }
          else {
            dVar6 = (double)CONCAT44(DAT_8c0d9080,DAT_8c0d907c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 / dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *DAT_8c0d9070 = fVar4;
          }
          else {
            *(undefined8 *)DAT_8c0d9070 = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(DAT_8c0d9080,*(undefined4 *)((int)DAT_8c0d9074 + 4));
          }
          else {
            in_xd0 = *(undefined8 *)((int)DAT_8c0d9074 + 4);
            dVar6 = (double)CONCAT44(_DAT_8c0d9084,DAT_8c0d9080);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 - dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(DAT_8c0d907c,fVar4);
          }
          else {
            dVar6 = (double)CONCAT44(DAT_8c0d9080,DAT_8c0d907c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 / dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            DAT_8c0d9070[1] = fVar4;
          }
          else {
            *(undefined8 *)(DAT_8c0d9070 + 1) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(_DAT_8c0d9084,*(undefined4 *)(DAT_8c0d9074 + 1));
          }
          else {
            in_xd0 = DAT_8c0d9074[1];
            dVar6 = (double)CONCAT44(_DAT_8c0d9088,_DAT_8c0d9084);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 - dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44(DAT_8c0d907c,fVar4);
          }
          else {
            dVar6 = (double)CONCAT44(DAT_8c0d9080,DAT_8c0d907c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar4 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar6 / dVar6,0);
          }
          if (in_FPSCR_SZ == '\0') {
            DAT_8c0d9070[2] = fVar4;
            *(undefined4 *)(ar4 + 0x68) = DAT_8c0d9078;
            *(undefined4 *)(ar4 + 0x5c) = DAT_8c0d9080;
            *(undefined4 *)(ar4 + 0x60) = DAT_8c0d9080;
            *(undefined4 *)(ar4 + 100) = _DAT_8c0d9084;
          }
          else {
            *(undefined8 *)(DAT_8c0d9070 + 2) = in_xd0;
            *(ulonglong *)(ar4 + 0x68) = CONCAT44(DAT_8c0d907c,DAT_8c0d9078);
            *(ulonglong *)(ar4 + 0x5c) = CONCAT44(_DAT_8c0d9084,DAT_8c0d9080);
            *(ulonglong *)(ar4 + 0x60) = CONCAT44(_DAT_8c0d9084,DAT_8c0d9080);
            *(ulonglong *)(ar4 + 100) = CONCAT44(_DAT_8c0d9088,_DAT_8c0d9084);
          }
          *(undefined4 *)(ar4 + 0x70) = 1;
          *(undefined4 *)(DAT_8c0d906c + ar4) = _DAT_8c0d9088;
          *(undefined4 *)(ar4 + 0x74) = *DAT_8c0d908c;
        }
      }
    }
    uVar1 = (*(code *)PTR_get_field_4_0d92a8_8c0d9060)(ar4 + 0x78,a5,ar6,ar7);
    if (((*(uint *)(ar4 + 0x54) <= (uint)(int)(short)uVar1) && (*(int *)(ar4 + 0x70) == 0)) &&
       (*(int *)(DAT_8c0d906c + ar4) == 0)) {
      *(undefined4 *)(ar4 + 0x58) = 5;
    }
    break;
  case 5:
    iVar2 = *(int *)(DAT_8c0d90dc + ar4);
    *(int *)(DAT_8c0d90dc + ar4) = iVar2 + 10;
    if (DAT_8c0d90e0 < iVar2 + 10) {
      *(int *)(DAT_8c0d90dc + ar4) = DAT_8c0d90e0;
      uVar1 = *(undefined4 *)(DAT_8c0d90e4 + ar4);
      (*(code *)PTR_pack_release_entry_handle_8c0d90ec)(DAT_8c0d90e8,uVar1,ar6,ar7);
      *(undefined4 *)(DAT_8c0d90e4 + ar4) = 0xffffffff;
      (*(code *)PTR_FUN_8c0d90f0)(ar4 + 0x78,uVar1,ar6,ar7);
      *(undefined4 *)(ar4 + 0x58) = 6;
    }
    break;
  case 6:
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)DAT_8c0d9288,*(undefined4 *)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      dVar6 = *DAT_8c0d9288;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x68) = fVar4;
      dVar6 = (double)CONCAT44(*(undefined4 *)DAT_8c0d928c,*(undefined4 *)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      dVar6 = *DAT_8c0d928c;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x6c) = fVar4;
      fVar4 = *(float *)(ar4 + 0x68);
    }
    else {
      *(undefined8 *)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)((int)DAT_8c0d9290 + 0xc),fVar4);
    }
    else {
      uVar5 = *(undefined8 *)((int)DAT_8c0d9290 + 0xc);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)((int)DAT_8c0d9290 + 0xc);
      }
      else {
        *(undefined8 *)(ar4 + 0x68) = *(undefined8 *)((int)DAT_8c0d9290 + 0xc);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)(DAT_8c0d9290 + 2),*(undefined4 *)(ar4 + 0x6c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      uVar5 = DAT_8c0d9290[2];
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(DAT_8c0d9290 + 2);
      }
      else {
        *(undefined8 *)(ar4 + 0x6c) = DAT_8c0d9290[2];
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)((int)DAT_8c0d9290 + 0xc),*(undefined4 *)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      uVar5 = *(undefined8 *)((int)DAT_8c0d9290 + 0xc);
    }
    if ((float)uVar5 == (float)((ulonglong)uVar5 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(DAT_8c0d9290 + 2),*(undefined4 *)(ar4 + 0x6c));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        uVar5 = DAT_8c0d9290[2];
      }
      if ((float)uVar5 == (float)((ulonglong)uVar5 >> 0x20)) {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
    }
  }
  if (*(int *)(ar4 + 0x70) == 1) {
    if (in_FPSCR_SZ == '\0') {
      pdVar3 = *(double **)(ar4 + 0x68);
      pdVar8 = DAT_8c0d9294;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      pdVar3 = DAT_8c0d9294;
      pdVar8 = DAT_8c0d9298;
    }
    if (in_FPSCR_PR == '\0' && (float)pdVar8 < (float)pdVar3) {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)((int)DAT_8c0d9298 + 0xc),
                                 *(undefined4 *)(ar4 + 0x68));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x68);
        dVar6 = *(double *)((int)DAT_8c0d9298 + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x68) = fVar4;
        dVar6 = (double)CONCAT44(*(undefined4 *)DAT_8c0d9298,*(undefined4 *)(ar4 + 0x5c));
      }
      else {
        *(undefined8 *)(ar4 + 0x68) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x5c);
        dVar6 = *DAT_8c0d9298;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x5c) = fVar4;
        fVar4 = *(float *)(ar4 + 0x60);
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x60);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)((int)DAT_8c0d9298 + 4),fVar4);
      }
      else {
        dVar6 = *(double *)((int)DAT_8c0d9298 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x60) = fVar4;
        fVar4 = *(float *)(ar4 + 100);
      }
      else {
        *(undefined8 *)(ar4 + 0x60) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 100);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(DAT_8c0d9298 + 1),fVar4);
      }
      else {
        dVar6 = DAT_8c0d9298[1];
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 100) = fVar4;
        pdVar3 = *(double **)(ar4 + 0x68);
        pdVar8 = DAT_8c0d9294;
      }
      else {
        *(undefined8 *)(ar4 + 100) = in_xd0;
        pdVar3 = DAT_8c0d9294;
        pdVar8 = DAT_8c0d9298;
      }
      if (in_FPSCR_PR == '\0' && (float)pdVar3 < (float)pdVar8) {
        if (in_FPSCR_SZ == '\0') {
          *(double **)(ar4 + 0x68) = DAT_8c0d9294;
          *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)DAT_8c0d9290;
        }
        else {
          *(ulonglong *)(ar4 + 0x68) = CONCAT44(DAT_8c0d9298,DAT_8c0d9294);
          *(undefined8 *)(ar4 + 0x5c) = *DAT_8c0d9290;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)((int)DAT_8c0d9290 + 4);
        }
        else {
          *(undefined8 *)(ar4 + 0x60) = *(undefined8 *)((int)DAT_8c0d9290 + 4);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 100) = *(undefined4 *)(DAT_8c0d9290 + 1);
        }
        else {
          *(undefined8 *)(ar4 + 100) = DAT_8c0d9290[1];
        }
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
  }
  if ((*(int *)(DAT_8c0d929c + ar4) != 0) &&
     (*(int *)(DAT_8c0d929c + ar4) = *(int *)(DAT_8c0d929c + ar4) + -1,
     *(int *)(DAT_8c0d929c + ar4) < 0)) {
    *(undefined4 *)(DAT_8c0d929c + ar4) = 0;
  }
  if (0 < *(int *)(ar4 + 0x74)) {
    *(int *)(ar4 + 0x74) = *(int *)(ar4 + 0x74) + -1;
  }
  return *(undefined4 *)(ar4 + 0x58);
}



/* FUN_8c0d92a0 @ 8c0d92a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d92a0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 3;
  return 3;
}



/* get_field_4_0d92a8 @ 8c0d92a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_0d92a8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c0d92b0 @ 8c0d92b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d92b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 4) = 0;
  (*(code *)PTR_FUN_8c0d9314)(ar4 + 0x78,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x58) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(DAT_8c0d9318 + iVar1 * 0x18 + ar4) = 0xffffffff;
  }
  return 2;
}



/* FUN_8c0d931c @ 8c0d931c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d931c(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined *a6;
  undefined4 a7;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_Vec3_ctor_zero_8c0d9380)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d9384)(ar4 + 4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d9388)(ar4 + 5,ar5,ar6,ar7);
  a7 = 4;
  a5 = PTR_FUN_8c0d9390;
  a6 = PTR_free_if_nonnull_wrap_0247b0_8c0d938c;
  (*(code *)PTR_FUN_8c0d9394)
            ((int)ar4 + 0x2c,PTR_FUN_8c0d9390,PTR_free_if_nonnull_wrap_0247b0_8c0d938c,4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = (undefined4)DAT_8c0d9398;
    *(undefined4 *)((int)ar4 + 4) = DAT_8c0d9398._4_4_;
    *(undefined4 *)(ar4 + 1) = DAT_8c0d93a0;
  }
  else {
    *ar4 = CONCAT44(DAT_8c0d9398._4_4_,(undefined4)DAT_8c0d9398);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(DAT_8c0d93a0,DAT_8c0d9398._4_4_);
    ar4[1] = CONCAT44(PTR_FUN_8c0d93a4,DAT_8c0d93a0);
  }
  (*(code *)PTR_FUN_8c0d93a4)(ar4,a5,a6,a7);
  return ar4;
}



/* s_GRAPHICS_ENV_0d93b0 @ 8c0d93a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d93b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a7;
  int *a5;
  undefined *puVar2;
  undefined4 *puVar3;
  int **a7_00;
  uint uVar4;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 auStack_18 [2];
  
  auStack_18[0] = 0;
  piStack_1c = (int *)0x0;
  uStack_20 = 0;
  puVar3 = auStack_18;
  puVar2 = PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95ac;
  iVar1 = (*(code *)PTR_FUN_8c0d95b4)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95b0,puVar2,puVar3);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d95bc)
              (PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95b0,
               PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95b8,0,2);
  }
  else {
    (*(code *)PTR_FUN_8c0d95c0)(ar4 + 0x28,auStack_18[0],puVar2,puVar3);
  }
  a7_00 = &piStack_1c;
  puVar2 = PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95ac;
  iVar1 = (*(code *)PTR_FUN_8c0d95c4)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95b0,puVar2,a7_00);
  if (iVar1 == 0) {
    a7_00 = (int **)0x2;
    puVar2 = (undefined *)0x0;
    a5 = (int *)(PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95c8);
    (*(code *)PTR_report_error_message_8c0d95bc)
              (PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95b0,a5,0,2);
  }
  else {
    a5 = piStack_1c;
    (**(code **)(*(int *)(ar4 + 0x20) + 8))((int *)(ar4 + 0x20),piStack_1c,puVar2,a7_00);
  }
  piStack_1c = (int *)(*(code *)PTR_get_field_4_0253e4_8c0d95cc)(ar4 + 0x20,a5,puVar2,a7_00);
  for (uVar4 = 0; uVar4 < (uint)piStack_1c[1]; uVar4 = uVar4 + 1) {
    iVar1 = uVar4 * 0xc + *piStack_1c;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | DAT_8c0d95d0;
  }
  a7 = (*(code *)PTR_get_field_4_0253e4_8c0d95cc)(ar4 + 0x20,a5,puVar2,a7_00);
  iVar1 = (*(code *)PTR_FUN_8c0d95d8)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95d4,
                     PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95ac,a7);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d95bc)
              (PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95e0,
               PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95dc,0,2);
  }
  iVar1 = (*(code *)PTR_FUN_8c0d95e8)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95e4,
                     PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95ac,ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_report_error_message_8c0d95bc)
              (PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95e4,
               PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95ec,0,2);
  }
  for (uVar4 = 0; uVar4 < 7; uVar4 = uVar4 + 1) {
    puVar3 = &uStack_20;
    puVar2 = PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95ac;
    iVar1 = (*(code *)PTR_FUN_8c0d95f4)
                      (ar5,*(undefined4 *)(PTR_PTR_8c0d95f0 + uVar4 * 4),puVar2,puVar3);
    if (iVar1 == 0) {
      (*(code *)PTR_report_error_message_8c0d95bc)
                (*(undefined4 *)(PTR_PTR_8c0d95f0 + uVar4 * 4),
                 PTR_s_GRAPHICS_COMMON_8c0d95a8 + DAT_8c0d95f8,0,2);
    }
    else {
      (*(code *)PTR_FUN_8c0d95fc)(ar4 + uVar4 * 4 + 0x2c,uStack_20,puVar2,puVar3);
    }
  }
  return 7;
}



/* FUN_8c0d9600 @ 8c0d9600 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0d9678) */
/* WARNING: Removing unreachable block (ram,0x8c0d96da) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d9600(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  float in_fr1;
  float fVar3;
  double dVar4;
  undefined4 in_fr3;
  double dVar5;
  undefined8 in_xd0;
  bool bVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + 0x14);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = in_fr1 + 1.0;
  }
  else {
    fVar3 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x14) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = in_xd0;
  }
  iVar2 = *(int *)(ar4 + 0x10);
  puVar1 = (undefined4 *)0x8;
  if ((iVar2 < 9) && (-1 < iVar2)) {
    puVar1 = (undefined4 *)(&switchD_8c0d962e::switchdataD_8c0d9634)[iVar2];
    switch(iVar2) {
    default:
      puVar1 = (undefined4 *)
               (*(code *)PTR_FUN_8c0d9714)(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
        puVar1 = &DAT_8c0d9718;
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c0d9718,fVar3);
        }
        else {
          dVar4 = (double)CONCAT44(PTR_FUN_8c0d971c,DAT_8c0d9718);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (in_FPSCR_PR == '\0') {
        bVar6 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x14) = (ulonglong)dVar4 & 0xffffffff;
        }
        *(char *)(ar4 + 0x18) = *(char *)(ar4 + 0x18) + -1;
        puVar1 = (undefined4 *)(uint)*(byte *)(ar4 + 0x18);
        if (puVar1 == (undefined4 *)0x0) {
          puVar1 = (undefined4 *)0x8;
          *(undefined4 *)(ar4 + 0x10) = 8;
        }
      }
      break;
    case 6:
      puVar1 = (undefined4 *)
               (*(code *)PTR_FUN_8c0d9714)(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (in_FPSCR_PR == '\0' && fVar3 < 0.0) {
        puVar1 = &DAT_8c0d9718;
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(DAT_8c0d9718,fVar3);
        }
        else {
          dVar4 = (double)CONCAT44(PTR_FUN_8c0d971c,DAT_8c0d9718);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (in_FPSCR_PR == '\0') {
        bVar6 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        puVar1 = (undefined4 *)0x8;
        *(undefined4 *)(ar4 + 0x10) = 8;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x14) = (ulonglong)dVar4 & 0xffffffff;
        }
      }
      break;
    case 7:
      break;
    case 8:
      puVar1 = (undefined4 *)(*(code *)PTR_FUN_8c0d971c)(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x14) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x14) = (ulonglong)(uint)fVar3;
      }
    }
  }
  return puVar1;
}



/* FUN_8c0d9720 @ 8c0d9720 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9720(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d9790)(ar4 + 0x20,ar5,ar6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0d9794)(0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d97a4)(uVar1,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x10) == 8) {
    (*(code *)PTR_FUN_8c0d97a8)(ar4 + 0x28,ar5,ar6,ar7);
  }
  else {
    ar5 = ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c;
    (*(code *)PTR_FUN_8c0d97ac)(ar4 + 0x28,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0d97b0)(1,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_to_set_texture_wrap_0d97b4 @ 8c0d97b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_to_set_texture_wrap_0d97b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d97cc)(ar4 + 0x20,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d97d0 @ 8c0d97d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d97d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d97e8)(ar4 + 0x20,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d97ec @ 8c0d97ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0d97ec(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 a5;
  uint extraout_fr1;
  char in_FPSCR_SZ;
  
  uVar3 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_0103d0_8c0d9884)(*ar5,uVar3,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_get_field_a0_035724_8c0d9888)(ar5,uVar3,ar6,ar7);
    if ((char)uVar2 == '\x02') {
      *(undefined4 *)(ar4 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(ar4 + 0x10) = 1;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x14) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x14) = (ulonglong)extraout_fr1;
    }
    uVar3 = (*(code *)PTR_rand_8c0d988c)(ar5,uVar3,ar6,ar7);
    a5 = 3;
    uVar2 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d9890)(uVar3,3,ar6,ar7);
    *(char *)(ar4 + 0x18) = (char)uVar2;
    *(char *)(ar4 + 0x18) = *(char *)(ar4 + 0x18) + '\x01';
    uVar3 = (*(code *)PTR_rand_8c0d988c)(uVar3,a5,ar6,ar7);
    iVar1 = (*(code *)PTR_libgcc_divide_helper_01031c_8c0d9890)(uVar3,DAT_8c0d9894,ar6,ar7);
    *(int *)(ar4 + 0x1c) = iVar1;
  }
  return iVar1;
}



/* FUN_8c0d9898 @ 8c0d9898 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0d9898(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  double dVar2;
  undefined4 in_fr5;
  float in_fr4;
  bool bVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (((*(int *)(ar4 + 0x10) == 8) || (*(int *)(ar4 + 0x10) == 0)) ||
     (iVar1 = *(int *)(ar4 + 0x10), iVar1 == 1)) {
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44(DAT_8c0d98d0,in_fr1);
    }
    else {
      dVar2 = (double)CONCAT44(_FUN_8c0d98d4,DAT_8c0d98d0);
    }
    if (in_FPSCR_PR == '\0') {
      bVar3 = (float)((ulonglong)dVar2 >> 0x20) < in_fr4;
    }
    else {
      bVar3 = dVar2 < (double)CONCAT44(in_fr4,in_fr5);
    }
    if (bVar3) {
      *(undefined4 *)(ar4 + 0x10) = 3;
    }
    else {
      *(undefined4 *)(ar4 + 0x10) = 4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x14) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x14) = (ulonglong)dVar2 & 0xffffffff;
    }
    iVar1 = 0x18;
    *(undefined1 *)(ar4 + 0x18) = 1;
  }
  return iVar1;
}



/* FUN_8c0d98d4 @ 8c0d98d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d98d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 0x10) = 6;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x14) = (ulonglong)in_fr1;
  }
  return 6;
}



/* FUN_8c0d98e4 @ 8c0d98e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d98e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(ar4 + 0x10) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x14) = (ulonglong)in_fr1;
  }
  return 0;
}



/* noop_0d98f4 @ 8c0d98f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d98f4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d98f8 @ 8c0d98f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d98f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  
  *(undefined1 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x10) = 8;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x14) = (ulonglong)in_fr1;
  }
  return 8;
}



/* s_GRAPHICS_ENV_0d9912 @ 8c0d990c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_ENV_0d9912(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  (*(code *)PTR_FUN_8c0d99a0)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d999c,
             PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  (*(code *)PTR_FUN_8c0d99a4)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d999c,
             PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  (*(code *)PTR_FUN_8c0d99ac)
            (ar5,PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d99a8,
             PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1) {
    (*(code *)PTR_FUN_8c0d99b4)
              (ar5,*(undefined4 *)(PTR_PTR_8c0d99b0 + uVar1 * 4),
               PTR_s_GRAPHICS_COMMON_8c0d9994 + DAT_8c0d9998,ar4);
  }
  return 7;
}



/* FUN_8c0d99b8 @ 8c0d99b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0d99b8(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar4 = 0x3f800000;
  }
  else {
    *ar4 = CONCAT44(0x3f800000,in_fr1);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0x3f800000;
    *(undefined4 *)((int)ar4 + 4) = 0x3f800000;
  }
  else {
    ar4[1] = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(0x3f800000,in_fr1);
  }
  *(undefined4 *)((int)ar4 + 0xc) = 0;
  return ar4;
}



/* FUN_8c0d99e8 @ 8c0d99e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d99e8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a6;
  
  *ar4 = PTR_DAT_8c0d9a6c;
  a6 = ar6;
  (*(code *)PTR_FUN_8c0d9a70)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0d9a74)(ar4 + 3,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c0d9a70)(ar4 + 10,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c0d9a74)(ar4 + 0xc,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c0d9a78)(ar4 + 0xd,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c0d9a80)((int)ar4 + DAT_8c0d9a7c,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c0d9a88)((int)ar4 + DAT_8c0d9a84,ar5,a6,ar7);
  (*(code *)PTR_FUN_8c0d9a94)(ar4 + 4,ar5,a6,ar7);
  ar4[9] = ar6;
  return ar4;
}



/* Class_12bce0_m0_0d9a98 @ 8c0d9a98 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12bce0_m0_0d9a98(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0d9b14;
    (*(code *)PTR_free_if_nonnull_wrap_10270c_8c0d9b1c)((int)ar4 + DAT_8c0d9b18,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0d9b24)((int)ar4 + DAT_8c0d9b20,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0d9b28)(ar4 + 0xc,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0d9b2c)(ar4 + 10,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0d9b28)(ar4 + 3,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0d9b2c)(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0d9b30)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0d9b34 @ 8c0d9b34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9b34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0d9b58)(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d9b5c)(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0d9b60 @ 8c0d9b60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9b60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_set_texture_s_015252_8c0d9b84)(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0d9b88)(ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* s_Failed_wrap_0d9b8c @ 8c0d9b8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Failed_wrap_0d9b8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Failed_s_015312_8c0d9ba4)(ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_0_0d9ba8 @ 8c0d9ba8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9ba8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bb0 @ 8c0d9bb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bb0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bb8 @ 8c0d9bb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bb8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bc0 @ 8c0d9bc0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bc0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* ret_const_0_0d9bc8 @ 8c0d9bc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0d9bc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* noop_0d9bd0 @ 8c0d9bd0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d9bd0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d9bd4 @ 8c0d9bd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d9bd4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0d9bd8 @ 8c0d9bd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0d9bd8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0d9bdc @ 8c0d9bdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9bdc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9be4;
}



/* FUN_8c0d9be8 @ 8c0d9be8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9be8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9bf0;
}



/* FUN_8c0d9bf4 @ 8c0d9bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9bf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9bfc;
}



/* FUN_8c0d9c00 @ 8c0d9c00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9c00(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9c08;
}



/* FUN_8c0d9c0c @ 8c0d9c0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9c0c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0d9c14;
}



/* FUN_8c0d9c18 @ 8c0d9c18 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0d9c18(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *in_stack_00000000;
  undefined4 uStack_4;
  
  uStack_4 = uStack_4 & 0xfffffffc;
  *in_stack_00000000 = uStack_4;
  return uStack_4;
}



/* FUN_8c0d9c48 @ 8c0d9c48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9c48(undefined4 ar4,ulonglong *ar5,ulonglong *ar6,ulonglong *ar7)

{
  undefined4 in_r0;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = 0;
    *(undefined4 *)ar6 = 0;
    *(undefined4 *)ar7 = 0;
  }
  else {
    *ar5 = (ulonglong)in_fr1;
    *ar6 = (ulonglong)in_fr1;
    *ar7 = (ulonglong)in_fr1;
  }
  return in_r0;
}



/* ret_const_1_0d9c58 @ 8c0d9c58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0d9c58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0d9c60 @ 8c0d9c60 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0d9c60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0d9c7c)(ar4 + 0x34,0,ar6,ar7);
  return 1;
}



/* FUN_8c0d9c80 @ 8c0d9c80 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0d9c80(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 a6;
  undefined *puVar4;
  undefined4 unaff_r14;
  undefined8 *puVar5;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined4 in_fr9;
  undefined8 in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd8;
  undefined8 in_xd14;
  undefined4 in_PR;
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
  *(undefined4 *)((int)puVar5 + -8) = in_PR;
  *(undefined4 *)((int)puVar5 + -0x24) = ar5;
  *(undefined4 *)((int)puVar5 + -0x20) = ar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar5 + -0x1c) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)((int)puVar5 + -0x18) = (int)in_dr4;
    *(int *)((int)puVar5 + -0x14) = (int)((ulonglong)in_dr6 >> 0x20);
    *(undefined4 *)((int)puVar5 + -0x10) = in_fr9;
  }
  else {
    *(undefined8 *)((int)puVar5 + -0x1c) = in_dr4;
    *(undefined8 *)((int)puVar5 + -0x18) = in_xd4;
    *(undefined8 *)((int)puVar5 + -0x14) = in_dr6;
    *(undefined8 *)((int)puVar5 + -0x10) = in_xd8;
  }
  *(undefined4 *)((int)puVar5 + -0xc) = ar7;
  a6 = *(undefined4 *)((int)puVar5 + -0x20);
  uVar2 = *(undefined4 *)((int)puVar5 + -0x24);
  (*(code *)PTR_FUN_8c0d9f08)(ar4,uVar2,a6,ar7);
  *ar4 = PTR_DAT_8c0d9f0c;
  (*(code *)PTR_FUN_8c0d9f14)((int)ar4 + DAT_8c0d9f10,uVar2,a6,ar7);
  *(undefined4 *)((int)puVar5 + -0x28) = 0x11;
  uVar2 = 0x3c;
  puVar3 = PTR_FUN_8c0d9f1c;
  puVar4 = PTR_FUN_8c0d9f18;
  (*(code *)PTR_FUN_8c0d9f24)((int)ar4 + DAT_8c0d9f20,PTR_FUN_8c0d9f1c,PTR_FUN_8c0d9f18,0x3c);
  (*(code *)PTR_FUN_8c0d9f2c)((int)ar4 + DAT_8c0d9f28,puVar3,puVar4,uVar2);
  (*(code *)PTR_FUN_8c0d9f34)((int)ar4 + DAT_8c0d9f30,puVar3,puVar4,uVar2);
  (*(code *)PTR_FUN_8c0d9f44)((int)ar4 + DAT_8c0d9f40,puVar3,puVar4,uVar2);
  (*(code *)PTR_FUN_8c0d9f4c)((int)ar4 + DAT_8c0d9f48,puVar3,puVar4,uVar2);
  (*(code *)PTR_FUN_8c0d9f54)((int)ar4 + DAT_8c0d9f50,puVar3,puVar4,uVar2);
  *(undefined4 *)(DAT_8c0d9f58 + (int)ar4) = *(undefined4 *)((int)puVar5 + -0xc);
  *(undefined4 *)((int)puVar5 + -0x28) = 8;
  uVar2 = 0x68;
  puVar3 = PTR_FUN_8c0d9f60;
  puVar4 = PTR_FUN_8c0d9f5c;
  (*(code *)PTR_FUN_8c0d9f24)((int)ar4 + DAT_8c0d9f64,PTR_FUN_8c0d9f60,PTR_FUN_8c0d9f5c,0x68);
  (*(code *)PTR_FUN_8c0d9f6c)((int)ar4 + DAT_8c0d9f68,puVar3,puVar4,uVar2);
  (*(code *)PTR_FUN_8c0d9f74)((int)ar4 + DAT_8c0d9f70,puVar3,puVar4,uVar2);
  *(undefined4 *)(DAT_8c0d9f78 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0d9f7c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0d9f80 + (int)ar4) = 0;
  puVar3 = PTR_DAT_8c0d9f88;
  puVar1 = (undefined4 *)((int)ar4 + DAT_8c0d9f84);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0d9f88 + 4);
  *puVar1 = *(undefined4 *)PTR_DAT_8c0d9f88;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0d9f90;
  puVar1 = (undefined4 *)((int)ar4 + DAT_8c0d9f8c);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0d9f90 + 4);
  *puVar1 = *(undefined4 *)PTR_DAT_8c0d9f90;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0d9f98;
  puVar1 = (undefined4 *)((int)ar4 + DAT_8c0d9f94);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0d9f98 + 4);
  *puVar1 = *(undefined4 *)PTR_DAT_8c0d9f98;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0d9fa0;
  puVar1 = (undefined4 *)((int)ar4 + DAT_8c0d9f9c);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0d9fa0 + 4);
  *puVar1 = *(undefined4 *)PTR_DAT_8c0d9fa0;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0d9fa8;
  puVar1 = (undefined4 *)((int)ar4 + DAT_8c0d9fa4);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0d9fa8 + 4);
  *puVar1 = *(undefined4 *)PTR_DAT_8c0d9fa8;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0d9fb0;
  puVar1 = (undefined4 *)((int)ar4 + DAT_8c0d9fac);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0d9fb0 + 4);
  *puVar1 = *(undefined4 *)PTR_DAT_8c0d9fb0;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0d9fb8;
  puVar1 = (undefined4 *)((int)ar4 + DAT_8c0d9fb4);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0d9fb8 + 4);
  *puVar1 = *(undefined4 *)PTR_DAT_8c0d9fb8;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(puVar3 + 8);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d9fbc) = DAT_8c0d9fc0;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d9fbc) = CONCAT44(_DAT_8c0d9fc4,DAT_8c0d9fc0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + _DAT_8c0d9fc4) = DAT_8c0d9fc8;
  }
  else {
    *(undefined8 *)((int)ar4 + _DAT_8c0d9fc4) = CONCAT44(DAT_8c0d9fcc,DAT_8c0d9fc8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d9fcc) = DAT_8c0d9fc0;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d9fcc) = CONCAT44(_DAT_8c0d9fc4,DAT_8c0d9fc0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d9fd0) = DAT_8c0d9fd4;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d9fd0) = CONCAT44(DAT_8c0d9fd8,DAT_8c0d9fd4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d9fd8) = DAT_8c0d9fdc;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d9fd8) = CONCAT44(DAT_8c0d9fe0,DAT_8c0d9fdc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d9fe0) = DAT_8c0d9fd4;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d9fe0) = CONCAT44(DAT_8c0d9fd8,DAT_8c0d9fd4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d9fe4) = DAT_8c0d9fdc;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d9fe4) = CONCAT44(DAT_8c0d9fe0,DAT_8c0d9fdc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0d9fe8) = DAT_8c0d9fc8;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0d9fe8) = CONCAT44(DAT_8c0d9fcc,DAT_8c0d9fc8);
  }
  *(undefined2 *)(DAT_8c0d9fec + (int)ar4) = 0;
  *(undefined2 *)(DAT_8c0d9ff0 + (int)ar4) = 0x20;
  *(undefined2 *)(DAT_8c0d9ff4 + (int)ar4) = 0;
  *(undefined2 *)(DAT_8c0d9ff8 + (int)ar4) = 0;
  *(short *)(DAT_8c0d9ffc + (int)ar4) = (short)DAT_8c0da000;
  *(undefined2 *)(DAT_8c0da004 + (int)ar4) = 0;
  *(short *)(DAT_8c0da008 + (int)ar4) = (short)DAT_8c0da000;
  *(undefined2 *)(DAT_8c0da00c + (int)ar4) = 0x20;
  *DAT_8c0da010 = 0xffffffff;
  DAT_8c0da010[1] = 0xffffffff;
  DAT_8c0da010[2] = 0xffffffff;
  DAT_8c0da010[3] = 0xffffffff;
  uVar2 = 4;
  puVar1 = DAT_8c0da010;
  (*(code *)PTR_FUN_8c0da014)((int)ar4 + DAT_8c0d9f70,(int)ar4 + DAT_8c0d9fbc,DAT_8c0da010,4);
  (*(code *)PTR_FUN_8c0da018)((int)ar4 + DAT_8c0d9f70,(int)ar4 + DAT_8c0d9fec,puVar1,uVar2);
  (*(code *)PTR_FUN_8c0da020)((int)ar4 + DAT_8c0d9f70,DAT_8c0da01c,puVar1,uVar2);
  *(undefined4 *)(DAT_8c0da024 + (int)ar4) = 0;
  return ar4;
}



/* FUN_8c0da028 @ 8c0da028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da028(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c0da0cc)(ar4 + DAT_8c0da0c8,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0d63c0_8c0da0d4)(ar4 + DAT_8c0da0d0,0xffffffff,ar6,ar7);
    (*(code *)PTR_FUN_8c0da0cc)(ar4 + DAT_8c0da0d8,0xffffffff,ar6,ar7);
    a7 = 4;
    a6 = 0x20;
    (*(code *)PTR_vec_delete_array_8c0da0dc)(ar4 + 0x68,PTR_FUN_8c0da0cc,0x20,4);
    (*(code *)PTR_Vec3_dtor_8c0da0e0)(ar4 + 0x40,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0da0e0)(ar4 + 0x30,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0da0e0)(ar4 + 0x20,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0da0e0)(ar4 + 0x10,0xffffffff,a6,a7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0da0e0)(ar4,0xffffffff,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0da0e4)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* FUN_8c0da0e8 @ 8c0da0e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da0e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != 0) {
    a7 = 0x23;
    a6 = 0x10;
    a5 = PTR_FUN_8c0da124;
    (*(code *)PTR_vec_delete_array_8c0da128)(ar4,PTR_FUN_8c0da124,0x10,0x23);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0da12c)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* FUN_8c0da130 @ 8c0da130 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da130(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0xffffffff;
    (*(code *)PTR_FUN_8c0da168)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0da16c)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0da170 @ 8c0da170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0da170(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    a5 = 0;
    (*(code *)PTR_free_if_nonnull_wrap_0c0264_8c0da1a8)(ar4,0,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0da1ac)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0da1b0 @ 8c0da1b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da1b0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0da1d8)(ar4,PTR_s_GRAPHICS_COMMON_8c0da1d0 + DAT_8c0da1d4,ar6,ar7);
  return uVar1;
}



/* FUN_8c0da1dc @ 8c0da1dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da1dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0da204)(ar4,PTR_s_GRAPHICS_COMMON_8c0da1fc + DAT_8c0da200,ar6,ar7);
  return uVar1;
}



/* Class_12bb08_m0_0da208 @ 8c0da208 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12bb08_m0_0da208(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 a7;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0da2d8;
    (*(code *)PTR_free_if_nonnull_wrap_0151a0_8c0da2e0)((int)ar4 + DAT_8c0da2dc,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_0e91f0_8c0da2e8)((int)ar4 + DAT_8c0da2e4,0xffffffff,ar6,ar7);
    uVar2 = 8;
    uVar1 = 0x68;
    (*(code *)PTR_vec_delete_array_8c0da2f4)((int)ar4 + DAT_8c0da2f0,PTR_FUN_8c0da2ec,0x68,8);
    (*(code *)PTR_free_if_nonnull_wrap_102790_8c0da2fc)
              ((int)ar4 + DAT_8c0da2f8,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_FUN_8c0da304)((int)ar4 + DAT_8c0da300,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_free_if_nonnull_wrap_019270_8c0da30c)
              ((int)ar4 + DAT_8c0da308,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_free_if_nonnull_wrap_015544_8c0da314)
              ((int)ar4 + DAT_8c0da310,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_FUN_8c0da31c)((int)ar4 + DAT_8c0da318,0xffffffff,uVar1,uVar2);
    a7 = 0x11;
    uVar2 = 0x3c;
    (*(code *)PTR_vec_delete_array_8c0da2f4)((int)ar4 + DAT_8c0da324,PTR_FUN_8c0da320,0x3c,0x11);
    (*(code *)PTR_FUN_8c0da32c)((int)ar4 + DAT_8c0da328,0xffffffff,uVar2,a7);
    uVar1 = 0;
    (*(code *)PTR_Class_12bce0_m0_0d9a98_8c0da330)(ar4,0,uVar2,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0da334)(ar4,uVar1,uVar2,a7);
    }
  }
  return ar4;
}



/* Class_12bb08_m1_0da338 @ 8c0da338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bb08_m1_0da338(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 a6;
  int a7;
  int iVar4;
  int iVar5;
  
  iVar1 = (*(code *)PTR_FUN_8c0da4c0)(ar4 + DAT_8c0da4bc,ar5,ar6,ar7);
  iVar3 = ar5;
  a6 = ar6;
  a7 = ar4;
  (*(code *)PTR_FUN_8c0da4c8)(ar4 + DAT_8c0da4c4,ar5,ar6,ar4);
  iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0da4cc)(ar4 + DAT_8c0da4bc,iVar3,a6,a7);
  *DAT_8c0da4d0 = iVar2;
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      a6 = ar6;
      a7 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x10))(iVar5,ar5,ar6,ar4);
      iVar5 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar5,iVar3,a6,a7);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (*(code *)PTR_FUN_8c0da4d8)(iVar5,ar4,a6,a7);
      iVar3 = ar4;
      (*(code *)PTR_FUN_8c0da4dc)(iVar5,ar4,a6,a7);
      iVar5 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar5,iVar3,a6,a7);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (*(code *)PTR_FUN_8c0da4e0)(iVar5,iVar3,a6,a7);
      if (iVar3 == 1) {
        (*(code *)PTR_FUN_8c0da4e4)(iVar5,ar4,a6,a7);
      }
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x24))(iVar5,ar4,a6,a7);
      iVar5 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar5,iVar3,a6,a7);
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar1 + 8) + 0x28))(iVar1,ar4,a6,a7);
      iVar1 = (*(code *)PTR_list_node_next_8c0da4d4)(iVar1,iVar3,a6,a7);
    }
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (*(code *)PTR_FUN_8c0da4ec)(ar4 + iVar1 * 0x68 + DAT_8c0da4e8,iVar3,a6,a7);
      if (iVar2 == 1) {
        iVar3 = ar4;
        (*(code *)PTR_FUN_8c0da4f0)(ar4 + iVar1 * 0x68 + DAT_8c0da4e8,ar4,a6,a7);
      }
    }
    (*(code *)PTR_FUN_8c0da4f4)(ar4,iVar3,a6,a7);
  }
  return 1;
}



/* FUN_8c0da4f8 @ 8c0da4f8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0da53c) */
/* WARNING: Removing unreachable block (ram,0x8c0da52e) */
/* WARNING: Removing unreachable block (ram,0x8c0da54a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da4f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float in_fr1;
  char in_FPSCR_SZ;
  
  if ((*(int *)(DAT_8c0da568 + ar4) != 0) || (*(int *)(DAT_8c0da56c + ar4) != 0)) {
    return 1;
  }
  if ((*(int *)(DAT_8c0da570 + ar4) == 0) && (*(int *)(DAT_8c0da574 + ar4) == 0)) {
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(float *)(ar4 + DAT_8c0da578);
    }
    if (in_fr1 == 0.0) {
      if (in_FPSCR_SZ == '\0') {
        in_fr1 = *(float *)(ar4 + DAT_8c0da57c);
      }
      if (in_fr1 == 0.0) {
        if (in_FPSCR_SZ == '\0') {
          in_fr1 = *(float *)(ar4 + DAT_8c0da580);
        }
        if (in_fr1 == 0.0) {
          if (*(int *)(DAT_8c0da584 + ar4) != -1) {
            return 1;
          }
          return 0;
        }
      }
    }
    return 1;
  }
  return 1;
}



/* FUN_8c0da588 @ 8c0da588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da588(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_list_node_next_8c0da5a4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12bb08_m2_0da5a8 @ 8c0da5a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12bb08_m2_0da5a8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 a6;
  int a7;
  int iVar4;
  int iVar5;
  
  iVar1 = (*(code *)PTR_FUN_8c0da724)(ar4 + DAT_8c0da720,ar5,ar6,ar7);
  iVar3 = ar5;
  a6 = ar6;
  a7 = ar4;
  (*(code *)PTR_FUN_8c0da72c)(ar4 + DAT_8c0da728,ar5,ar6,ar4);
  iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0da730)(ar4 + DAT_8c0da720,iVar3,a6,a7);
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      a6 = ar6;
      a7 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x14))(iVar5,ar5,ar6,ar4);
      iVar5 = (*(code *)PTR_list_node_next_8c0da734)(iVar5,iVar3,a6,a7);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar4;
      (*(code *)PTR_FUN_8c0da738)(iVar5,ar4,a6,a7);
      iVar5 = (*(code *)PTR_list_node_next_8c0da734)(iVar5,iVar3,a6,a7);
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (*(code *)PTR_FUN_8c0da73c)(iVar5,iVar3,a6,a7);
      if (iVar3 == 1) {
        (*(code *)PTR_FUN_8c0da740)(iVar5,ar4,a6,a7);
      }
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar5 + 8) + 0x24))(iVar5,ar4,a6,a7);
      iVar5 = (*(code *)PTR_list_node_next_8c0da734)(iVar5,iVar3,a6,a7);
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (**(code **)(*(int *)(iVar1 + 8) + 0x28))(iVar1,ar4,a6,a7);
      iVar1 = (*(code *)PTR_list_node_next_8c0da734)(iVar1,iVar3,a6,a7);
    }
    (*(code *)PTR_FUN_8c0da744)(ar4,iVar3,a6,a7);
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (*(code *)PTR_FUN_8c0da74c)(ar4 + iVar1 * 0x68 + DAT_8c0da748,iVar3,a6,a7);
      if (iVar2 == 1) {
        iVar3 = ar4;
        (*(code *)PTR_FUN_8c0da750)(ar4 + iVar1 * 0x68 + DAT_8c0da748,ar4,a6,a7);
      }
    }
  }
  return 1;
}



/* FUN_8c0da754 @ 8c0da754 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0da754(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  int iVar2;
  undefined1 *a5;
  float *a6;
  undefined1 *a7;
  int iVar3;
  float fVar4;
  float fVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  a4 = (*(code *)PTR_FUN_8c0da858)(ar4 + DAT_8c0da854,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0da85c)(ar4 + DAT_8c0da854,ar5,ar6,ar7);
  if (iVar1 != 0) {
    if (*DAT_8c0da860 < iVar1) {
      iVar1 = *DAT_8c0da860;
    }
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      a7 = auStack_18;
      (*(code *)PTR_FUN_8c0da864)(a4,auStack_20,auStack_1c,a7);
      a6 = &fStack_28;
      a5 = auStack_20;
      (*(code *)PTR_FUN_8c0da868)(0,a5,a6,a7);
      fVar4 = DAT_8c0da86c;
      fVar5 = DAT_8c0da870;
      if (in_FPSCR_SZ == '\0') {
        fVar4 = fStack_28;
        fVar5 = DAT_8c0da86c;
      }
      if (in_FPSCR_PR == '\0' && fVar4 < fVar5) {
LAB_8c0da802:
        iVar2 = (*(code *)PTR_get_field_24_05c284_8c0da880)(a4,a5,a6,a7);
        if (iVar2 == 0xe) goto LAB_8c0da812;
      }
      else {
        fVar4 = DAT_8c0da870;
        fVar5 = DAT_8c0da874;
        if (in_FPSCR_SZ == '\0') {
          fVar4 = fStack_28;
          fVar5 = DAT_8c0da870;
        }
        if (in_FPSCR_PR == '\0' && fVar5 < fVar4) goto LAB_8c0da802;
        fVar4 = DAT_8c0da874;
        fVar5 = DAT_8c0da878;
        if (in_FPSCR_SZ == '\0') {
          fVar4 = fStack_24;
          fVar5 = DAT_8c0da874;
        }
        if (in_FPSCR_PR == '\0' && fVar4 < fVar5) goto LAB_8c0da802;
        fVar4 = DAT_8c0da878;
        fVar5 = DAT_8c0da87c;
        if (in_FPSCR_SZ == '\0') {
          fVar4 = fStack_24;
          fVar5 = DAT_8c0da878;
        }
        if ((in_FPSCR_PR == '\0' && fVar5 < fVar4) || (a4 == *(int *)((int)DAT_8c0da87c + ar4)))
        goto LAB_8c0da802;
LAB_8c0da812:
        (*(code *)PTR_FUN_8c0da884)(a4,a5,a6,a7);
        (**(code **)(*(int *)(a4 + 8) + 0x34))(a4,a5,a6,a7);
      }
      a4 = (*(code *)PTR_list_node_next_8c0da888)(a4,a5,a6,a7);
    }
  }
  return 1;
}



/* FUN_8c0da88c @ 8c0da88c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0da88c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
  bool bVar3;
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
  bVar3 = *(int *)(DAT_8c0da920 + ar4) != 0;
  if (bVar3) {
    uVar1 = 1;
    (*(code *)PTR_FUN_8c0da928)(1,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0da92c)(uVar1,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0da930)(*(undefined4 *)(DAT_8c0da920 + ar4),ar5,ar6,ar7);
    (**(code **)(*(int *)(*(int *)(DAT_8c0da920 + ar4) + 8) + 0x34))
              (*(int *)(DAT_8c0da920 + ar4),ar5,ar6,ar7);
    uVar1 = 1;
    (*(code *)PTR_FUN_8c0da928)(1,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0da92c)(uVar1,ar5,ar6,ar7);
  }
  return (uint)bVar3;
}



/* s_CEnv_AddItem_0da93a @ 8c0da934 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CEnv_AddItem_0da93a(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c0da9f4)(ar4 + DAT_8c0da9f0,ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar7 = 2;
    ar6 = 1;
    (*(code *)PTR_report_error_message_8c0daa04)
              (PTR_s_GRAPHICS_COMMON_8c0da9f8 + DAT_8c0daa00,
               PTR_s_GRAPHICS_COMMON_8c0da9f8 + DAT_8c0da9fc,1,2);
  }
  iVar2 = ar5;
  (*(code *)PTR_FUN_8c0daa08)(ar4,ar5,ar6,ar7);
  *(int *)(iVar1 + 8) = ar5;
  iVar2 = (*(code *)PTR_get_field_24_05c284_8c0daa0c)(ar5,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0daa14)(iVar2 * 0x3c + ar4 + DAT_8c0daa10,iVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c0daa18)(ar5,iVar1,ar6,ar7);
  (**(code **)(*(int *)(ar5 + 8) + 0x60))(ar5,iVar1,ar6,ar7);
  iVar1 = ar5;
  (*(code *)PTR_FUN_8c0daa20)(ar4 + DAT_8c0daa1c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_assign_wrap_0f4da4_8c0daa24)(ar5,iVar1,ar6,ar7);
  return 0;
}



/* FUN_8c0daa28 @ 8c0daa28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daa28(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0daa30;
  *(undefined4 *)(DAT_8c0daa30 + ar4) = ar5;
  return iVar1;
}



/* FUN_8c0daa34 @ 8c0daa34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0daa34(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(int *)(DAT_8c0daa7c + ar4) != 0) &&
     (iVar1 = (*(code *)PTR_get_field_70_05f490_8c0daa80)
                        (*(undefined4 *)(DAT_8c0daa7c + ar4),ar5,ar6,ar7), iVar1 == 0)) {
    (*(code *)PTR_FUN_8c0daa84)(*(undefined4 *)(DAT_8c0daa7c + ar4),ar5,ar6,ar7);
    *(undefined4 *)(DAT_8c0daa7c + ar4) = 0;
    return 1;
  }
  return 0;
}



/* FUN_8c0daa88 @ 8c0daa88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0daa88(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_8c0daacc + (int)ar4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x5c))(ar4,*(undefined4 *)(DAT_8c0daacc + (int)ar4),ar6,ar7);
    *(undefined4 *)(DAT_8c0daacc + (int)ar4) = 0;
  }
  return uVar1;
}



/* FUN_8c0daad0 @ 8c0daad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daad0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  int iVar2;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = 0;
  iVar2 = ar5;
  iVar1 = (*(code *)PTR_get_field_24_05c284_8c0dab60)(ar5,ar5,ar6,ar7);
  a5 = (*(code *)PTR_get_field_160_0dab80_8c0dab64)(ar5,iVar2,ar6,ar7);
  (*(code *)PTR_s_Item_pointer_is_NULL_CNodePt_0fe338_8c0dab6c)
            (iVar1 * 0x3c + ar4 + DAT_8c0dab68,a5,ar6,ar7);
  auStack_14[0] = (*(code *)PTR_get_field_160_0dab80_8c0dab64)(ar5,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dab74)(ar4 + DAT_8c0dab70,auStack_14,ar6,ar7);
  iVar2 = ar5;
  (*(code *)PTR_s_Item_pointer_is_NULL_CItemLi_0fe01c_8c0dab7c)(ar4 + DAT_8c0dab78,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar5 + 8) + 100))(ar5,iVar2,ar6,ar7);
  return ar5;
}



/* get_field_160_0dab80 @ 8c0dab80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_160_0dab80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0dab88 + ar4);
}



/* FUN_8c0dab8c @ 8c0dab8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dab8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dac0c)(ar4 + DAT_8c0dac08,ar5,ar6,ar7);
  if (iVar1 != 0) {
    if ((*(int *)(DAT_8c0dac10 + ar4) == 0) ||
       (iVar1 = (*(code *)PTR_FUN_8c0dac14)(ar4 + DAT_8c0dac08,ar5,ar6,ar7),
       *(int *)(DAT_8c0dac10 + ar4) == iVar1)) {
      uVar2 = (*(code *)PTR_FUN_8c0dac18)(ar4 + DAT_8c0dac08,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c0dac10 + ar4) = uVar2;
    }
    else {
      uVar2 = (*(code *)PTR_list_node_next_8c0dac1c)
                        (*(undefined4 *)(DAT_8c0dac10 + ar4),ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c0dac10 + ar4) = uVar2;
    }
    return *(undefined4 *)(DAT_8c0dac10 + ar4);
  }
  return 0;
}



/* FUN_8c0dac20 @ 8c0dac20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dac20(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_4_0dac48_8c0dac44)(ar4 + DAT_8c0dac40,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_4_0dac48 @ 8c0dac48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_0dac48(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c0dac50 @ 8c0dac50 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dac7c) */
/* WARNING: Unknown calling convention */

int FUN_8c0dac50(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  undefined8 *a5;
  undefined4 a5_00;
  undefined8 *a6;
  float fVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  short asStack_f8 [2];
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int *piStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)PTR_DAT_8c0dae6c);
  }
  else {
    uStack_98 = *(undefined8 *)PTR_DAT_8c0dae6c;
  }
  (*(code *)PTR_Vec3_ctor_zero_8c0dae70)(auStack_84,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)PTR_DAT_8c0dae74,*(undefined4 *)ar5);
  }
  else {
    uVar4 = *(undefined8 *)PTR_DAT_8c0dae74;
  }
  if ((float)uVar4 == (float)((ulonglong)uVar4 >> 0x20)) {
    uStack_d4 = 0;
    *(undefined4 *)(DAT_8c0dae78 + ar4) = 0;
    iStack_a8 = 0;
    (*(code *)PTR_Vec3_dtor_8c0dae7c)(auStack_84,0xffffffff,ar6,ar7);
  }
  else {
    a6 = &uStack_98;
    a5 = ar5;
    a4 = (*(code *)PTR_FUN_8c0dae80)(ar4,ar5,a6,ar7);
    iStack_d8 = a4;
    iStack_c4 = a4;
    if (a4 == 0) {
      *(undefined4 *)(DAT_8c0dae78 + ar4) = 0;
      iStack_dc = a4;
      iStack_ac = a4;
      (*(code *)PTR_Vec3_dtor_8c0dae7c)(auStack_84,0xffffffff,a6,ar7);
      iStack_a8 = iStack_ac;
    }
    else {
      (*(code *)PTR_FUN_8c0dae84)(a4,a5,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0dae88)(auStack_84,(int)&uStack_98 + 4,a6,ar7);
      a5_00 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c0dae7c)((int)&uStack_98 + 4,0xffffffff,a6,ar7);
      fVar2 = fStack_7c;
      if (in_FPSCR_SZ == '\0') {
        fVar2 = *(float *)(ar4 + DAT_8c0dae8c);
        fStack_78 = fStack_7c;
      }
      if (in_FPSCR_PR != '\0' || fStack_78 <= fVar2) {
        iStack_c8 = (*(code *)PTR_get_field_24_05c284_8c0dae90)(a4,a5_00,a6,ar7);
        if (iStack_c8 == 0x10) {
          uStack_e4 = 0;
          *(undefined4 *)(DAT_8c0dae78 + ar4) = 0;
          iStack_b4 = 0;
          (*(code *)PTR_Vec3_dtor_8c0dae7c)(auStack_84,0xffffffff,a6,ar7);
          iStack_a8 = iStack_b4;
        }
        else {
          if (iStack_c8 == 0xe) {
            uVar1 = (**(code **)(DAT_8c0dae94 + *(int *)(a4 + 8)))(a4,a5_00,a6,ar7);
            asStack_f8[0] = (short)uVar1;
            iStack_e8 = (int)asStack_f8[0];
            iStack_9c = iStack_e8;
            if (iStack_e8 == 1) {
              uStack_ec = 0;
              *(undefined4 *)(DAT_8c0dae78 + ar4) = 0;
              uStack_b8 = 0;
              (*(code *)PTR_Vec3_dtor_8c0dae7c)(auStack_84,0xffffffff,a6,ar7);
              return uStack_b8;
            }
          }
          puVar3 = DAT_8c0dae98;
          puVar5 = PTR_get_field_a4_032154_8c0dae9c;
          if (in_FPSCR_SZ == '\0') {
            puVar3 = (undefined *)uStack_98;
            puVar5 = DAT_8c0dae98;
          }
          if (in_FPSCR_PR != '\0' || (float)puVar5 <= (float)puVar3) {
            if (in_FPSCR_SZ == '\0') {
              uStack_a4 = *(undefined4 *)ar5;
              uStack_a0 = *(undefined4 *)((int)ar5 + 4);
            }
            else {
              uStack_a4 = (undefined4)*ar5;
              uStack_a0 = (undefined4)*(undefined8 *)((int)ar5 + 4);
              iStack_9c = (int)((ulonglong)*(undefined8 *)((int)ar5 + 4) >> 0x20);
            }
            piStack_cc = (int *)(*(code *)PTR_get_field_a4_032154_8c0dae9c)(a4,a5_00,a6,ar7);
            (**(code **)(*piStack_cc + 0x38))(piStack_cc,(int)asStack_f8 + DAT_8c0daea0,a6,ar7);
            iStack_d0 = (*(code *)PTR_FUN_8c0daea4)
                                  (&uStack_a4,(int)asStack_f8 + DAT_8c0daea0,a6,ar7);
            if (iStack_d0 == 0) {
              a4 = 0;
            }
            *(int *)(DAT_8c0dae78 + ar4) = a4;
            iStack_f4 = a4;
            iStack_c0 = a4;
            (*(code *)PTR_Vec3_dtor_8c0dae7c)(auStack_84,0xffffffff,a6,ar7);
            iStack_a8 = iStack_c0;
          }
          else {
            *(int *)(DAT_8c0dae78 + ar4) = a4;
            iStack_f0 = a4;
            iStack_bc = a4;
            (*(code *)PTR_Vec3_dtor_8c0dae7c)(auStack_84,0xffffffff,a6,ar7);
            iStack_a8 = iStack_bc;
          }
        }
      }
      else {
        uStack_e0 = 0;
        *(undefined4 *)(DAT_8c0dae78 + ar4) = 0;
        iStack_b0 = 0;
        (*(code *)PTR_Vec3_dtor_8c0dae7c)(auStack_84,0xffffffff,a6,ar7);
        iStack_a8 = iStack_b0;
      }
    }
  }
  return iStack_a8;
}



/* FUN_8c0daea8 @ 8c0daea8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daea8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0daf28)(ar4 + DAT_8c0daf24,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0daf2c)(ar4 + DAT_8c0daf24,uVar3,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0daf34)(DAT_8c0daf30,0,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = ar5;
      (**(code **)(*(int *)(a4 + 8) + 0x7c))(a4,ar5,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0daf38)(a4,uVar3,ar6,ar7);
      a4 = iVar2;
    }
  }
  return iVar2;
}



/* FUN_8c0daf3c @ 8c0daf3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0daf3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_pure_virtual_stub_8c0daf7c)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0daf80 @ 8c0daf80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0daf80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0daff4)(ar4 + DAT_8c0daff0,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0daff8)(ar4 + DAT_8c0daff0,ar5,ar6,ar7);
  iVar2 = DAT_8c0daffc;
  *(undefined4 *)(DAT_8c0daffc + ar4) = 0;
  if (iVar1 != 0) {
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 0x60))(a4,ar5,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0db000)(a4,ar5,ar6,ar7);
      a4 = iVar2;
    }
  }
  return iVar2;
}



/* noop_0db004 @ 8c0db004 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0db004(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0db008 @ 8c0db008 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db008(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db07c)(ar4 + DAT_8c0db078,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0db080)(ar4 + DAT_8c0db078,ar5,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 100))(a4,ar5,ar6,ar7);
      a4 = (*(code *)PTR_list_node_next_8c0db084)(a4,ar5,ar6,ar7);
    }
  }
  return 0;
}



/* ret_const_0_0db088 @ 8c0db088 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0db088(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c0db090 @ 8c0db090 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db090(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db0fc)(ar4 + DAT_8c0db0f8,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0db100)(ar4 + DAT_8c0db0f8,ar5,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(DAT_8c0db104 + *(int *)(a4 + 8)))(a4,ar5,ar6,ar7);
      a4 = (*(code *)PTR_list_node_next_8c0db108)(a4,ar5,ar6,ar7);
    }
  }
  return a4;
}



/* FUN_8c0db10c @ 8c0db10c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db10c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db178)(ar4 + DAT_8c0db174,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0db17c)(ar4 + DAT_8c0db174,ar5,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 0x68))(a4,ar5,ar6,ar7);
      a4 = (*(code *)PTR_list_node_next_8c0db180)(a4,ar5,ar6,ar7);
    }
  }
  return a4;
}



/* noop_0db184 @ 8c0db184 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0db184(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0db188 @ 8c0db188 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db188(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0db200)(ar4 + DAT_8c0db1fc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0db210)(ar4 + DAT_8c0db20c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0db220)(ar4 + DAT_8c0db20c,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + DAT_8c0db20c) + 0xc))((int *)(ar4 + DAT_8c0db20c),ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0db224 @ 8c0db224 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db224(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a4;
  int *a4_00;
  int iVar2;
  undefined1 *a5;
  int iVar3;
  undefined1 auStack_58 [72];
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db2e8)(ar4 + DAT_8c0db2e4,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0db2ec)(ar4 + DAT_8c0db2e4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0db2f0)(auStack_58,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c0db2f4)(auStack_58,ar5,ar6,ar7);
  iVar3 = 0;
  while( true ) {
    if (iVar1 <= iVar3) {
      (*(code *)PTR_Class_129974_m0_016c2c_8c0db2fc)(auStack_58,0xffffffff,ar6,ar7);
      return 0;
    }
    a4_00 = (int *)(*(code *)PTR_get_field_a4_032154_8c0db2f8)(a4,ar5,ar6,ar7);
    ar5 = auStack_58;
    iVar2 = (**(code **)(*a4_00 + 0x14))(a4_00,ar5,ar6,ar7);
    if (iVar2 == 1) break;
    a4 = (*(code *)PTR_list_node_next_8c0db300)(a4,ar5,ar6,ar7);
    iVar3 = iVar3 + 1;
  }
  (*(code *)PTR_Class_129974_m0_016c2c_8c0db2fc)(auStack_58,0xffffffff,ar6,ar7);
  return 1;
}



/* FUN_8c0db304 @ 8c0db304 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db304(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0db328)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0db32c @ 8c0db32c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db32c(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 auStack_10 [2];
  
  if (ar7 == 0xe) {
    uVar1 = (*(code *)PTR_FUN_8c0db3ac)(DAT_8c0db3a8,0x26,ar6,0xe);
  }
  else {
    auStack_10[0] = (*(code *)PTR_FUN_8c0db3b0)(DAT_8c0db3a8,ar5,ar6,ar7);
    uVar1 = 0xd;
    (*(code *)PTR_FUN_8c0db3b4)(DAT_8c0db3a8,auStack_10[0],0xd,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0db3b8)(DAT_8c0db3a8,auStack_10,uVar1,ar7);
  }
  return uVar1;
}



/* FUN_8c0db3bc @ 8c0db3bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db3bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  undefined4 unaff_r8;
  int iVar2;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int iVar3;
  int iVar4;
  int a4;
  undefined4 unaff_r13;
  int a4_00;
  undefined4 unaff_r14;
  int iVar5;
  undefined8 *puVar6;
  uint extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr0;
  undefined4 uVar7;
  float fVar8;
  undefined8 in_dr14;
  undefined8 uVar9;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
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
  *(undefined4 *)((int)puVar6 + -0xc) = 0;
  *(undefined4 *)((int)puVar6 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar6 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar6 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar6 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar6 + -0x20) = in_PR;
  uVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db544)(ar4 + DAT_8c0db540,ar5,ar6,ar7);
  uVar7 = (undefined4)in_dr14;
  *(undefined4 *)((int)puVar6 + -0x50) = uVar1;
  iVar3 = *(int *)((int)puVar6 + -0x50);
  iVar2 = 0;
  (*(code *)PTR_Vec3_ctor_zero_8c0db548)((undefined1 *)((int)puVar6 + -0x30),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0db548)((undefined1 *)((int)puVar6 + -0x40),ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar6 + -0x44) = 0;
    uVar9 = CONCAT44(DAT_8c0db54c,uVar7);
  }
  else {
    *(ulonglong *)((int)puVar6 + -0x44) = (ulonglong)extraout_fr1;
    uVar9 = CONCAT44(PTR_Vec3_dtor_8c0db550,DAT_8c0db54c);
  }
  if (iVar3 == 0) {
    *(undefined4 *)((int)puVar6 + -0x48) = 0;
    (*(code *)PTR_Vec3_dtor_8c0db550)((undefined1 *)((int)puVar6 + -0x40),0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0db550)((undefined1 *)((int)puVar6 + -0x30),0xffffffff,ar6,ar7);
    uVar1 = *(undefined4 *)((int)puVar6 + -0x48);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0db554)(ar4 + DAT_8c0db540,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar6 + -0x54) = uVar1;
    a7 = (undefined1 *)((int)puVar6 + -0x38);
    a6 = (undefined1 *)((int)puVar6 + -0x3c);
    a5 = (undefined1 *)((int)puVar6 + -0x40);
    (*(code *)PTR_FUN_8c0db55c)(ar4 + DAT_8c0db558,a5,a6,a7);
    for (iVar3 = 3; iVar3 < 8; iVar3 = iVar3 + 1) {
      *(int *)((int)puVar6 + -0x68) = iVar3;
      uVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0db564)
                        ((*(int *)((int)puVar6 + -0x68) * 0x10 - *(int *)((int)puVar6 + -0x68)) * 4
                         + ar4 + DAT_8c0db560,a5,a6,a7);
      *(undefined4 *)((int)puVar6 + -0x58) = uVar1;
      *(undefined4 *)((int)puVar6 + -0x6c) = *(undefined4 *)((int)puVar6 + -0x58);
      iVar4 = *(int *)((int)puVar6 + -0x6c);
      if (*(int *)((int)puVar6 + -0x6c) != 0) {
        *(int *)((int)puVar6 + -0x70) = iVar3;
        uVar1 = (*(code *)PTR_FUN_8c0db568)
                          ((*(int *)((int)puVar6 + -0x70) * 0x10 - *(int *)((int)puVar6 + -0x70)) *
                           4 + ar4 + DAT_8c0db560,a5,a6,a7);
        *(undefined4 *)((int)puVar6 + -0x5c) = uVar1;
        a4_00 = *(int *)((int)puVar6 + -0x5c);
        a4 = *(int *)(a4_00 + 8);
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          a7 = (undefined1 *)((int)puVar6 + -0x28);
          a6 = (undefined1 *)((int)puVar6 + -0x2c);
          (**(code **)(DAT_8c0db56c + *(int *)(a4 + 8)))
                    (a4,(undefined1 *)((int)puVar6 + -0x30),a6,a7);
          a5 = (undefined1 *)(ar4 + DAT_8c0db570);
          (*(code *)PTR_FUN_8c0db574)((undefined1 *)((int)puVar6 + -0x30),a5,a6,a7);
          (*(code *)PTR_Vec3_length_sq_8c0db578)((undefined1 *)((int)puVar6 + -0x30),a5,a6,a7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)puVar6 + -0x60) = extraout_fr0;
            uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),*(undefined4 *)((int)puVar6 + -0x60));
          }
          else {
            *(ulonglong *)((int)puVar6 + -0x60) = CONCAT44(extraout_fr0,extraout_fr1_00);
            in_xd14 = *(undefined8 *)((int)puVar6 + -0x60);
          }
          fVar8 = (float)uVar9;
          if ((in_FPSCR_PR == '\0' && fVar8 < (float)((ulonglong)uVar9 >> 0x20)) &&
             (iVar2 = a4, uVar9 = in_xd14, in_FPSCR_SZ == '\0')) {
            uVar9 = CONCAT44(fVar8,fVar8);
          }
          uVar1 = (*(code *)PTR_list_node_next_8c0db57c)(a4_00,a5,a6,a7);
          *(undefined4 *)((int)puVar6 + -100) = uVar1;
          a4_00 = *(int *)((int)puVar6 + -100);
          a4 = *(int *)(a4_00 + 8);
        }
      }
    }
    *(int *)((int)puVar6 + -0x4c) = iVar2;
    (*(code *)PTR_Vec3_dtor_8c0db550)((undefined1 *)((int)puVar6 + -0x40),0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0db550)((undefined1 *)((int)puVar6 + -0x30),0xffffffff,a6,a7);
    uVar1 = *(undefined4 *)((int)puVar6 + -0x4c);
  }
  return uVar1;
}



/* FUN_8c0db580 @ 8c0db580 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db580(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_list_node_next_8c0db59c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_38_0db5a0 @ 8c0db5a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_38_0db5a0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x38);
}



/* FUN_8c0db5a8 @ 8c0db5a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db5a8(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x50);
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + 0x54);
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + 0x50);
    *ar6 = *(undefined8 *)(ar4 + 0x54);
    *ar7 = *(undefined8 *)(ar4 + 0x58);
  }
  return ar4 + 0x54;
}



/* FUN_8c0db5c4 @ 8c0db5c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db5c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int a5;
  undefined1 *a6;
  undefined1 *a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar4;
  undefined4 unaff_r14;
  int iVar5;
  undefined1 *puVar6;
  float fVar7;
  double in_dr0;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined4 in_fr12;
  undefined8 in_dr14;
  undefined8 uVar11;
  undefined8 in_xd14;
  bool bVar12;
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
    puVar6 = auStack_c;
  }
  else {
    puVar6 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar6 + -4) = unaff_r14;
  *(undefined4 *)(puVar6 + -8) = unaff_r13;
  *(undefined4 *)(puVar6 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar6 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar6 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar6 + -0x18) = in_PR;
  *(undefined4 *)(puVar6 + -0x58) = ar5;
  uVar1 = (*(code *)PTR_get_field_300_0bf154_8c0db724)(ar4 + DAT_8c0db720,ar5,ar6,ar7);
  uVar2 = (undefined4)in_dr14;
  *(undefined4 *)(puVar6 + -0x44) = uVar1;
  iVar4 = *(int *)(puVar6 + -0x44);
  uVar1 = 0;
  (*(code *)PTR_Vec3_ctor_zero_8c0db728)(puVar6 + -0x28,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0db728)(puVar6 + -0x38,ar5,ar6,ar7);
  fVar10 = 0.0;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c0db72c,uVar2);
  }
  else {
    uVar11 = CONCAT44(PTR_Vec3_dtor_8c0db730,DAT_8c0db72c);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(puVar6 + -0x3c) = 0;
    (*(code *)PTR_Vec3_dtor_8c0db730)(puVar6 + -0x38,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0db730)(puVar6 + -0x28,0xffffffff,ar6,ar7);
    uVar1 = *(undefined4 *)(puVar6 + -0x3c);
  }
  else {
    a7 = puVar6 + -0x30;
    a6 = puVar6 + -0x34;
    puVar3 = puVar6 + -0x38;
    (*(code *)PTR_FUN_8c0db738)(ar4 + DAT_8c0db734,puVar3,a6,a7);
    uVar2 = (*(code *)PTR_FUN_8c0db73c)(ar4 + DAT_8c0db720,puVar3,a6,a7);
    *(undefined4 *)(puVar6 + -0x48) = uVar2;
    uVar2 = *(undefined4 *)(puVar6 + -0x48);
    for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
      a7 = puVar6 + -0x20;
      a6 = puVar6 + -0x24;
      (*(code *)PTR_FUN_8c0db740)(uVar2,puVar6 + -0x28,a6,a7);
      a5 = ar4 + DAT_8c0db744;
      (*(code *)PTR_FUN_8c0db748)(puVar6 + -0x28,a5,a6,a7);
      (*(code *)PTR_Vec3_length_sq_8c0db74c)(puVar6 + -0x28,a5,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar6 + -0x4c) = (int)((ulonglong)in_dr0 >> 0x20);
        uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(puVar6 + -0x4c));
      }
      else {
        *(double *)(puVar6 + -0x4c) = in_dr0;
        in_xd14 = *(undefined8 *)(puVar6 + -0x4c);
      }
      (*(code *)PTR_Vec3_length_8c0db750)(puVar6 + -0x28,a5,a6,a7);
      puVar3 = puVar6 + -0x28;
      (*(code *)PTR_FUN_8c0db754)(puVar6 + -0x38,puVar3,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar6 + -0x50) = (int)((ulonglong)in_dr0 >> 0x20);
        fVar10 = *(float *)(puVar6 + -0x50);
      }
      else {
        *(double *)(puVar6 + -0x50) = in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c0db75c,*(undefined4 *)(ar4 + DAT_8c0db758));
      }
      else {
        dVar8 = (double)CONCAT44(PTR_list_node_next_8c0db760,DAT_8c0db75c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 / dVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0db75c,fVar7);
      }
      else {
        in_dr0 = (double)CONCAT44(PTR_list_node_next_8c0db760,DAT_8c0db75c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
        fVar7 = SUB84(in_dr0,0) + fVar9;
        in_dr0 = (double)CONCAT44(fVar9,fVar7);
        bVar12 = fVar10 < fVar7;
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        bVar12 = (double)CONCAT44(in_fr12,fVar10) < in_dr0;
      }
      if (((bVar12) &&
          (fVar7 = (float)uVar11, in_FPSCR_PR == '\0' && fVar7 < (float)((ulonglong)uVar11 >> 0x20))
          ) && (uVar1 = uVar2, uVar11 = in_xd14, in_FPSCR_SZ == '\0')) {
        uVar11 = CONCAT44(fVar7,fVar7);
      }
      uVar2 = (*(code *)PTR_list_node_next_8c0db760)(uVar2,puVar3,a6,a7);
      *(undefined4 *)(puVar6 + -0x54) = uVar2;
      uVar2 = *(undefined4 *)(puVar6 + -0x54);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)*(undefined8 **)(puVar6 + -0x58) = (int)((ulonglong)uVar11 >> 0x20);
    }
    else {
      **(undefined8 **)(puVar6 + -0x58) = uVar11;
    }
    *(undefined4 *)(puVar6 + -0x40) = uVar1;
    (*(code *)PTR_Vec3_dtor_8c0db730)(puVar6 + -0x38,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c0db730)(puVar6 + -0x28,0xffffffff,a6,a7);
    uVar1 = *(undefined4 *)(puVar6 + -0x40);
  }
  return uVar1;
}



/* FUN_8c0db764 @ 8c0db764 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db764(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_s_Invalid_Item_number_CItemLis_0fe110_8c0db78c)
                    (ar4 + DAT_8c0db788,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0db790 @ 8c0db790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db790(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_s_Invalid_Item_number_CNodePtr_0fe424_8c0db7d0)
                    (ar5 * 0x3c + ar4 + DAT_8c0db7cc,ar6,ar6,ar7);
  return *(undefined4 *)(iVar1 + 8);
}



/* FUN_8c0db7d4 @ 8c0db7d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db7d4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0db80c)(ar5 * 0x3c + ar4 + DAT_8c0db808,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0db810 @ 8c0db810 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db810(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int a5;
  int iVar1;
  
  a5 = ar5;
  a4 = (*(code *)PTR_FUN_8c0db85c)(ar4 + DAT_8c0db858,ar5,ar6,ar7);
  iVar1 = 1;
  while (a4 != ar5) {
    a4 = (*(code *)PTR_list_node_next_8c0db860)(a4,a5,ar6,ar7);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* FUN_8c0db864 @ 8c0db864 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db864(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c0db89c)(ar4,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0db8a4)(ar4 + DAT_8c0db8a0,ar5,ar6,ar7);
  return iVar2 - iVar1;
}



/* FUN_8c0db8a8 @ 8c0db8a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0db8a8(int ar4,undefined8 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)(ar4 + DAT_8c0db8c8);
  }
  else {
    *ar5 = *(undefined8 *)(ar4 + DAT_8c0db8c8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar6 = *(undefined4 *)(ar4 + DAT_8c0db8cc);
  }
  else {
    *ar6 = *(undefined8 *)(ar4 + DAT_8c0db8cc);
  }
  iVar1 = DAT_8c0db8d0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)ar7 = *(undefined4 *)(ar4 + DAT_8c0db8d0);
  }
  else {
    *ar7 = *(undefined8 *)(ar4 + DAT_8c0db8d0);
  }
  return iVar1;
}



/* FUN_8c0db8d4 @ 8c0db8d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0db8d4(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *a5;
  int iVar2;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = 0;
  a5 = ar5;
  for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
    while (iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0dba18)
                             (iVar2 * 0x3c + ar4 + DAT_8c0dba14,a5,ar6,ar7), iVar1 != 0) {
      iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0dba18)
                        (iVar2 * 0x3c + ar4 + DAT_8c0dba14,a5,ar6,ar7);
      auStack_14[0] =
           (*(code *)PTR_s_Invalid_Item_number_CNodePtr_0fe424_8c0dba1c)
                     (iVar2 * 0x3c + ar4 + DAT_8c0dba14,iVar1 + -1,ar6,ar7);
      (*(code *)PTR_s_Item_pointer_is_NULL_CNodePt_0fe338_8c0dba20)
                (iVar2 * 0x3c + ar4 + DAT_8c0dba14,auStack_14[0],ar6,ar7);
      a5 = auStack_14;
      (*(code *)PTR_FUN_8c0dba28)(ar4 + DAT_8c0dba24,a5,ar6,ar7);
    }
    (*(code *)PTR_FUN_8c0dba2c)(iVar2 * 0x3c + ar4 + DAT_8c0dba14,a5,ar6,ar7);
  }
  while (iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0dba34)(ar4 + DAT_8c0dba30,a5,ar6,ar7),
        iVar2 != 0) {
    iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0dba34)(ar4 + DAT_8c0dba30,a5,ar6,ar7);
    uStack_18 = (*(code *)PTR_s_Invalid_Item_number_CItemLis_0fe110_8c0dba38)
                          (ar4 + DAT_8c0dba30,iVar2 + -1,ar6,ar7);
    (*(code *)PTR_s_Item_pointer_is_NULL_CItemLi_0fe01c_8c0dba3c)
              (ar4 + DAT_8c0dba30,uStack_18,ar6,ar7);
    a5 = ar5;
    (*(code *)PTR_FUN_8c0dba40)(&uStack_18,ar5,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c0dba44 + ar4) = 0;
  *(undefined4 *)(DAT_8c0dba48 + ar4) = 0;
  *(undefined4 *)(DAT_8c0dba4c + ar4) = 0;
  return 1;
}



/* FUN_8c0dba50 @ 8c0dba50 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dba50(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined1 *a6_00;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  int iVar2;
  undefined1 *puVar3;
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
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = 1;
  *(undefined4 *)(puVar3 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar3 + -0x14) = in_PR;
  iVar2 = 0;
  a5 = ar5;
  a6 = ar6;
  while( true ) {
    if (7 < iVar2) {
      return 0;
    }
    *(int *)(puVar3 + -0x3c) = iVar2;
    uVar1 = (*(code *)PTR_FUN_8c0dbb04)
                      (ar4 + *(int *)(puVar3 + -0x3c) * 0x68 + DAT_8c0dbb00,a5,a6,ar7);
    *(undefined4 *)(puVar3 + -0x38) = uVar1;
    if (*(int *)(puVar3 + -0x38) == 0) break;
    iVar2 = iVar2 + 1;
  }
  (*(code *)PTR_Vec3_ctor_copy_8c0dbb08)(puVar3 + -0x24,ar5,a6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c0dbb08)(puVar3 + -0x34,ar6,a6,ar7);
  *(int *)(puVar3 + -0x40) = iVar2;
  a6_00 = puVar3 + -0x34;
  (*(code *)PTR_FUN_8c0dbb0c)
            (ar4 + *(int *)(puVar3 + -0x40) * 0x68 + DAT_8c0dbb00,puVar3 + -0x24,a6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c0dbb10)(puVar3 + -0x34,0xffffffff,a6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c0dbb10)(puVar3 + -0x24,0xffffffff,a6_00,ar7);
  return 1;
}



/* s_GRAPHICS_COMMON_0dbb1a @ 8c0dbb14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_COMMON_0dbb1a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a7;
  int iVar1;
  undefined *a5;
  uint uVar2;
  
  (*(code *)PTR_FUN_8c0dbbc0)(ar4 + 0xc,PTR_DAT_8c0dbbbc,ar6,ar7);
  a5 = PTR_PTR_8c0dbbc4;
  (**(code **)(*(int *)(ar4 + 4) + 8))((int *)(ar4 + 4),PTR_PTR_8c0dbbc4,ar6,ar7);
  a7 = (int *)(*(code *)PTR_get_field_4_0253e4_8c0dbbc8)(ar4 + 4,a5,ar6,ar7);
  for (uVar2 = 0; uVar2 < (uint)a7[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *a7;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | DAT_8c0dbbcc;
  }
  iVar1 = (*(code *)PTR_FUN_8c0dbbd8)
                    (ar5,PTR_s_GRAPHICS_COMMON_8c0dbbd0 + DAT_8c0dbbd4,
                     PTR_s_GRAPHICS_COMMON_8c0dbbd0,a7);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_report_error_message_8c0dbbe4)
                      (PTR_s_GRAPHICS_COMMON_8c0dbbd0 + DAT_8c0dbbe0,
                       PTR_s_GRAPHICS_COMMON_8c0dbbd0 + DAT_8c0dbbdc,0,2);
  }
  return iVar1;
}



/* FUN_8c0dbbe8 @ 8c0dbbe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dbbe8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  int iVar4;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dbd24)(ar4 + DAT_8c0dbd20,ar5,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0dbd28)(ar4 + DAT_8c0dbd20,ar5,ar6,ar7);
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    aiStack_1c[0] = iVar2;
    iVar3 = (*(code *)PTR_FUN_8c0dbd2c)(iVar2,ar5,ar6,ar7);
    if (iVar3 == 0) {
      iVar2 = (*(code *)PTR_get_field_24_05c284_8c0dbd30)(aiStack_1c[0],ar5,ar6,ar7);
      if (iVar2 == 0xd) {
        *DAT_8c0dbd34 = 0;
      }
      if (aiStack_1c[0] == *(int *)(DAT_8c0dbd38 + ar4)) {
        *(undefined4 *)(DAT_8c0dbd38 + ar4) = 0;
      }
      if (aiStack_1c[0] == *(int *)(DAT_8c0dbd3c + ar4)) {
        *(undefined4 *)(DAT_8c0dbd3c + ar4) = 0;
      }
      iVar2 = aiStack_1c[0];
      iVar3 = (*(code *)PTR_get_field_24_05c284_8c0dbd30)(aiStack_1c[0],ar5,ar6,ar7);
      if (iVar3 != 0xf) {
        (*(code *)PTR_FUN_8c0dbd40)(iVar2,ar5,ar6,ar7);
      }
      iVar2 = (*(code *)PTR_list_node_next_8c0dbd44)(aiStack_1c[0],ar5,ar6,ar7);
      iVar3 = (*(code *)PTR_get_field_24_05c284_8c0dbd30)(aiStack_1c[0],ar5,ar6,ar7);
      a5 = (*(code *)PTR_get_field_160_0dab80_8c0dbd48)(aiStack_1c[0],ar5,ar6,ar7);
      (*(code *)PTR_s_Item_pointer_is_NULL_CNodePt_0fe338_8c0dbd50)
                (iVar3 * 0x3c + ar4 + DAT_8c0dbd4c,a5,ar6,ar7);
      uStack_20 = (*(code *)PTR_get_field_160_0dab80_8c0dbd48)(aiStack_1c[0],a5,ar6,ar7);
      (*(code *)PTR_FUN_8c0dbd58)(ar4 + DAT_8c0dbd54,&uStack_20,ar6,ar7);
      (*(code *)PTR_s_Item_pointer_is_NULL_CItemLi_0fe01c_8c0dbd5c)
                (ar4 + DAT_8c0dbd20,aiStack_1c[0],ar6,ar7);
      ar5 = 1;
      iVar3 = (*(code *)PTR_FUN_8c0dbd60)(aiStack_1c,1,ar6,ar7);
    }
    else {
      iVar3 = (*(code *)PTR_list_node_next_8c0dbd44)(iVar2,ar5,ar6,ar7);
      iVar2 = iVar3;
    }
  }
  return iVar3;
}



/* FUN_8c0dbd64 @ 8c0dbd64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbd64(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0dbd7c)(ar4,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c0dbd80 @ 8c0dbd80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbd80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a4;
  int iVar2;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dbde4)(ar4 + DAT_8c0dbde0,ar5,ar6,ar7);
  a4 = (*(code *)PTR_FUN_8c0dbde8)(ar4 + DAT_8c0dbde0,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    (*(code *)PTR_Vec3_assign_wrap_0f4da4_8c0dbdec)(a4,ar5,ar6,ar7);
    a4 = (*(code *)PTR_list_node_next_8c0dbdf0)(a4,ar5,ar6,ar7);
  }
  return a4;
}



/* FUN_8c0dbdf4 @ 8c0dbdf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbdf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dbe20)(ar4 + DAT_8c0dbe1c,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dbe24 @ 8c0dbe24 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbe24(int ar4,undefined4 ar5,undefined8 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *a6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 uVar4;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar5;
  undefined4 unaff_r14;
  int iVar6;
  undefined1 *puVar7;
  undefined8 in_dr0;
  undefined8 in_xd14;
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
  *(undefined4 *)(puVar7 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar7 + -0x20) = in_PR;
  uVar3 = ar5;
  a6 = ar6;
  uVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dbf54)(ar4 + DAT_8c0dbf50,ar5,ar6,ar7);
  *(undefined4 *)(puVar7 + -0xcc) = uVar1;
  iVar5 = *(int *)(puVar7 + -0xcc);
  uVar4 = 0;
  (*(code *)PTR_Vec3_ctor_zero_8c0dbf5c)(puVar7 + DAT_8c0dbf58 + -0xe0,uVar3,a6,ar7);
  uVar1 = 0;
  (*(code *)PTR_FUN_8c0dbf60)(puVar7 + -0xb0,uVar3,a6,ar7);
  if (iVar5 == 0) {
    *(undefined4 *)(puVar7 + -0xc4) = 0;
    (*(code *)PTR_free_if_nonnull_wrap_019270_8c0dbf64)(puVar7 + -0xb0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0dbf68)(puVar7 + DAT_8c0dbf58 + -0xe0,0xffffffff,a6,ar7);
    uVar1 = *(undefined4 *)(puVar7 + -0xc4);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c0dbf6c)(ar4 + DAT_8c0dbf50,uVar3,a6,ar7);
    *(undefined4 *)(puVar7 + -0xd0) = uVar2;
    uVar2 = *(undefined4 *)(puVar7 + -0xd0);
    for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
      uVar3 = (*(code *)PTR_FUN_8c0dbf70)(uVar2,uVar3,a6,ar7);
      *(undefined4 *)(puVar7 + -0xd4) = uVar3;
      (*(code *)PTR_Vec3_ctor_copy_8c0dbf74)(puVar7 + -0xc0,*(undefined4 *)(puVar7 + -0xd4),a6,ar7);
      ar7 = puVar7 + DAT_8c0dbf78 + -0xe0;
      a6 = (undefined8 *)(puVar7 + DAT_8c0dbf58 + -0xe0);
      (*(code *)PTR_FUN_8c0dbf7c)(puVar7 + -0xb0,puVar7 + -0xc0,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0dbf68)(puVar7 + -0xc0,0xffffffff,a6,ar7);
      uVar3 = ar5;
      (*(code *)PTR_FUN_8c0dbf80)(puVar7 + DAT_8c0dbf58 + -0xe0,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + -0xd8) = (int)((ulonglong)in_dr0 >> 0x20);
        *(undefined4 *)(puVar7 + -0xe0) = *(undefined4 *)(puVar7 + -0xd8);
        uVar1 = *(undefined4 *)(puVar7 + -0xe0);
        in_dr0 = CONCAT44(*(undefined4 *)(puVar7 + -0xe0),*(undefined4 *)ar6);
      }
      else {
        *(undefined8 *)(puVar7 + -0xd8) = in_dr0;
        *(undefined8 *)(puVar7 + -0xe0) = *(undefined8 *)(puVar7 + -0xd8);
        in_xd14 = *(undefined8 *)(puVar7 + -0xe0);
        in_dr0 = *(undefined8 *)(puVar7 + -0xe0);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) {
        uVar4 = uVar2;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)ar6 = uVar1;
        }
        else {
          *ar6 = in_xd14;
        }
      }
      uVar2 = (*(code *)PTR_list_node_next_8c0dbf84)(uVar2,uVar3,a6,ar7);
      *(undefined4 *)(puVar7 + -0xdc) = uVar2;
      uVar2 = *(undefined4 *)(puVar7 + -0xdc);
    }
    *(undefined4 *)(puVar7 + -200) = uVar4;
    (*(code *)PTR_free_if_nonnull_wrap_019270_8c0dbf64)(puVar7 + -0xb0,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0dbf68)(puVar7 + DAT_8c0dbf58 + -0xe0,0xffffffff,a6,ar7);
    uVar1 = *(undefined4 *)(puVar7 + -200);
  }
  return uVar1;
}



/* FUN_8c0dbf88 @ 8c0dbf88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dbf88(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x30;
}



/* FUN_8c0dbf90 @ 8c0dbf90 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dbf90(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar3;
  float fVar4;
  double in_dr0;
  float fVar5;
  undefined4 in_fr3;
  double dVar6;
  ulonglong in_dr14;
  double dVar7;
  undefined8 in_xd0;
  undefined8 uVar8;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
  }
  else {
    puVar3 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar3 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar3 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar3 + -0xc) = in_PR;
  dVar7 = (double)(in_dr14 & 0xffffffff00000000);
  iVar2 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c0dc1e0)(ar5,ar5,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x10) = uVar1;
  if (*(int *)((int)puVar3 + -0x10) == 1) {
    iVar2 = 0;
    (*(code *)PTR_FUN_8c0dc1e4)(ar5,0,ar6,ar7);
    (*(code *)PTR_FUN_8c0dc1e8)(ar5,iVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)((int)puVar3 + -0x14) = in_dr0;
    }
    *(int **)((int)puVar3 + -0x4c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x4c) + DAT_8c0dc1ec),in_fr3)
      ;
      in_dr0 = (double)CONCAT44(DAT_8c0dc1f0,*(undefined4 *)((int)puVar3 + -0x14));
    }
    else {
      dVar6 = *(double *)(*(int *)((int)puVar3 + -0x4c) + DAT_8c0dc1ec);
      in_xd0 = *(undefined8 *)((int)puVar3 + -0x14);
      in_dr0 = (double)CONCAT44(PTR_FUN_8c0dc1f4,DAT_8c0dc1f0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar4 = SUB84(in_dr0,0) * fVar5;
      in_dr0 = (double)CONCAT44(fVar5,fVar4);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar4,SUB84(dVar6,0));
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
      dVar6 = dVar6 + in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar3 + -0x4c) + DAT_8c0dc1ec) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(*(int *)((int)puVar3 + -0x4c) + DAT_8c0dc1ec) = dVar6;
    }
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0dc1f4)(ar5,iVar2,ar6,ar7);
    *(undefined4 *)((int)puVar3 + -0x18) = uVar1;
    if (*(int *)((int)puVar3 + -0x18) == 1) {
      iVar2 = 0;
      (*(code *)PTR_FUN_8c0dc1e4)(ar5,0,ar6,ar7);
      (*(code *)PTR_FUN_8c0dc1e8)(ar5,iVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar3 + -0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)((int)puVar3 + -0x1c) = in_dr0;
      }
      *(int **)((int)puVar3 + -0x50) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x50) + DAT_8c0dc1ec),
                                 in_fr3);
        in_dr0 = (double)CONCAT44(DAT_8c0dc1f0,*(undefined4 *)((int)puVar3 + -0x1c));
      }
      else {
        dVar6 = *(double *)(*(int *)((int)puVar3 + -0x50) + DAT_8c0dc1ec);
        in_xd0 = *(undefined8 *)((int)puVar3 + -0x1c);
        in_dr0 = (double)CONCAT44(PTR_FUN_8c0dc1f4,DAT_8c0dc1f0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
        fVar4 = SUB84(in_dr0,0) * fVar5;
        in_dr0 = (double)CONCAT44(fVar5,fVar4);
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar4,SUB84(dVar6,0));
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
        dVar6 = dVar6 + in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar3 + -0x50) + DAT_8c0dc1ec) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(*(int *)((int)puVar3 + -0x50) + DAT_8c0dc1ec) = dVar6;
      }
    }
  }
  (**(code **)(*(int *)((int)ar4 + DAT_8c0dc1f8) + 8))
            ((int *)((int)ar4 + DAT_8c0dc1f8),iVar2,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar3 + -0x20) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)((int)puVar3 + -0x20));
  }
  else {
    *(double *)((int)puVar3 + -0x20) = in_dr0;
    in_xd14 = *(undefined8 *)((int)puVar3 + -0x20);
  }
  uVar1 = (*(code *)PTR_FUN_8c0dc1fc)(ar5,iVar2,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x24) = uVar1;
  if (*(int *)((int)puVar3 + -0x24) == 1) {
    (*(code *)PTR_FUN_8c0dc1e8)(ar5,iVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0x28) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)((int)puVar3 + -0x28) = in_dr0;
    }
    *(int **)((int)puVar3 + -0x54) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x28),SUB84(in_dr0,0));
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -0x28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44(-(float)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = -dVar6;
    }
    uVar8 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar7,0));
      uVar8 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x54) + DAT_8c0dc200),fVar4)
      ;
    }
    else {
      in_dr0 = *(double *)(*(int *)((int)puVar3 + -0x54) + DAT_8c0dc200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar4,SUB84(in_dr0,0) + fVar4);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(*(int *)((int)puVar3 + -0x54) + DAT_8c0dc200) = SUB84(in_dr0,0);
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar3 + -0x54) + DAT_8c0dc200) = uVar8;
    }
    (*(code *)PTR_FUN_8c0dc204)(ar5,iVar2,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0dc208)(ar5,iVar2,ar6,ar7);
    *(undefined4 *)((int)puVar3 + -0x2c) = uVar1;
    if (*(int *)((int)puVar3 + -0x2c) == 1) {
      (*(code *)PTR_FUN_8c0dc1e8)(ar5,iVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar3 + -0x30) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)((int)puVar3 + -0x30) = in_dr0;
      }
      *(int **)((int)puVar3 + -0x58) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x30),SUB84(in_dr0,0));
      }
      else {
        dVar6 = *(double *)((int)puVar3 + -0x30);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44(-(float)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = -dVar6;
      }
      uVar8 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar7,0));
        uVar8 = in_xd0;
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x58) + DAT_8c0dc200),
                                  fVar4);
      }
      else {
        in_dr0 = *(double *)(*(int *)((int)puVar3 + -0x58) + DAT_8c0dc200);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar4,SUB84(in_dr0,0) + fVar4);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(*(int *)((int)puVar3 + -0x58) + DAT_8c0dc200) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar3 + -0x58) + DAT_8c0dc200) = uVar8;
      }
      (*(code *)PTR_FUN_8c0dc20c)(ar5,iVar2,ar6,ar7);
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0dc210)(ar5,iVar2,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x34) = uVar1;
  if (*(int *)((int)puVar3 + -0x34) == 1) {
    (*(code *)PTR_FUN_8c0dc214)(ar5,iVar2,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar3 + -0x38) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)((int)puVar3 + -0x38) = in_dr0;
    }
    *(int **)((int)puVar3 + -0x5c) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x38),SUB84(in_dr0,0));
    }
    else {
      dVar6 = *(double *)((int)puVar3 + -0x38);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) * (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar7 = dVar7 * dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x5c) + DAT_8c0dc218),
                               SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(*(int *)((int)puVar3 + -0x5c) + DAT_8c0dc218);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)puVar3 + -0x5c) + DAT_8c0dc218) = fVar4;
    }
    else {
      *(undefined8 *)(*(int *)((int)puVar3 + -0x5c) + DAT_8c0dc218) = in_xd14;
    }
    (*(code *)PTR_FUN_8c0dc21c)(ar5,iVar2,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c0dc220)(ar5,iVar2,ar6,ar7);
    *(undefined4 *)((int)puVar3 + -0x3c) = uVar1;
    if (*(int *)((int)puVar3 + -0x3c) == 1) {
      (*(code *)PTR_FUN_8c0dc214)(ar5,iVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar3 + -0x40) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)((int)puVar3 + -0x40) = in_dr0;
      }
      *(int **)((int)puVar3 + -0x60) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)((int)puVar3 + -0x40),SUB84(in_dr0,0));
      }
      else {
        dVar6 = *(double *)((int)puVar3 + -0x40);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar6 >> 0x20));
      }
      else {
        dVar7 = dVar7 * dVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar3 + -0x60) + DAT_8c0dc218),
                                 SUB84(dVar6,0));
      }
      else {
        dVar6 = *(double *)(*(int *)((int)puVar3 + -0x60) + DAT_8c0dc218);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar3 + -0x60) + DAT_8c0dc218) = fVar4;
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar3 + -0x60) + DAT_8c0dc218) = in_xd14;
      }
      (*(code *)PTR_FUN_8c0dc224)(ar5,iVar2,ar6,ar7);
    }
  }
  iVar2 = ar5;
  (*(code *)PTR_FUN_8c0dc228)(ar4,ar5,ar6,ar7);
  if ((ar4[9] != 2) && (*(int *)(DAT_8c0dc22c + (int)ar4) != 0)) {
    uVar1 = (*(code *)PTR_FUN_8c0dc230)(ar5,iVar2,ar6,ar7);
    *(undefined4 *)((int)puVar3 + -0x44) = uVar1;
    if (*(int *)((int)puVar3 + -0x44) == 1) {
      iVar2 = *(int *)(DAT_8c0dc22c + (int)ar4);
      (*(code *)PTR_FUN_8c0dc234)((int)ar4 + DAT_8c0dc218,iVar2,ar6,ar7);
      *(undefined4 *)(DAT_8c0dc22c + (int)ar4) = 0;
      (*(code *)PTR_FUN_8c0dc238)(ar5,iVar2,ar6,ar7);
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c0dc23c)(ar5,iVar2,ar6,ar7);
  *(undefined4 *)((int)puVar3 + -0x48) = uVar1;
  if (*(int *)((int)puVar3 + -0x48) == 1) {
    iVar2 = (int)ar4 + DAT_8c0dc218;
    (**(code **)(*ar4 + 0x68))(ar4,iVar2,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c0dc240)(ar5,iVar2,ar6,ar7);
  return 1;
}



/* FUN_8c0dc244 @ 8c0dc244 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc244(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dc268)(*(undefined4 *)(DAT_8c0dc264 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dc26c @ 8c0dc26c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc26c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0dc278;
}



/* FUN_8c0dc27c @ 8c0dc27c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc27c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0dc288;
}



/* FUN_8c0dc28c @ 8c0dc28c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc28c(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_fr1;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar3 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0dc4b8)(ar5,ar5,ar6,ar7);
  if ((((iVar1 == 1) && (*(int *)(DAT_8c0dc4bc + (int)ar4) == *(int *)(DAT_8c0dc4c0 + (int)ar4))) ||
      ((iVar1 = (*(code *)PTR_FUN_8c0dc4b8)(ar5,iVar3,ar6,ar7), iVar1 == 1 &&
       (*(int *)(DAT_8c0dc4bc + (int)ar4) == 0)))) || (*(int *)(DAT_8c0dc4c0 + (int)ar4) == 0)) {
    if (in_FPSCR_SZ == '\0') {
      in_fr1 = *(undefined4 *)((int)ar4 + DAT_8c0dc4c4);
    }
    else {
      in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c0dc4c4);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c0dc4c8),in_fr1);
    }
    else {
      uVar5 = *(undefined8 *)((int)ar4 + DAT_8c0dc4c8);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c0dc4d0,*(undefined4 *)((int)ar4 + DAT_8c0dc4c4));
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c0dc4c4);
        dVar6 = (double)CONCAT44(DAT_8c0dc4d4,DAT_8c0dc4d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)ar4 + DAT_8c0dc4cc) = fVar4;
      }
      else {
        *(undefined8 *)((int)ar4 + DAT_8c0dc4cc) = in_xd0;
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)ar4 + DAT_8c0dc4cc) = *(undefined4 *)((int)ar4 + DAT_8c0dc4c8);
    }
    else {
      *(undefined8 *)((int)ar4 + DAT_8c0dc4cc) = *(undefined8 *)((int)ar4 + DAT_8c0dc4c8);
    }
    (*(code *)PTR_FUN_8c0dc4dc)(ar4,ar5,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0dc4b8)(ar5,iVar3,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(DAT_8c0dc4bc + (int)ar4) != *(int *)(DAT_8c0dc4c0 + (int)ar4))) {
      iVar3 = *(int *)(DAT_8c0dc4bc + (int)ar4);
      (*(code *)PTR_FUN_8c0dc4e0)((int)ar4 + DAT_8c0dc4d8,iVar3,ar6,ar7);
      *(undefined4 *)(DAT_8c0dc4bc + (int)ar4) = 0;
      (*(code *)PTR_FUN_8c0dc4e4)(ar5,iVar3,ar6,ar7);
    }
    iVar1 = (*(code *)PTR_get_field_24_05c284_8c0dc4e8)
                      (*(undefined4 *)(DAT_8c0dc4c0 + (int)ar4),iVar3,ar6,ar7);
    if ((iVar1 == 0xe) &&
       (uVar2 = (**(code **)(DAT_8c0dc4ec + *(int *)(*(int *)(DAT_8c0dc4c0 + (int)ar4) + 8)))
                          (*(int *)(DAT_8c0dc4c0 + (int)ar4),iVar3,ar6,ar7), (short)uVar2 == 1)) {
      if (in_FPSCR_SZ == '\0') {
        in_fr1 = *(undefined4 *)((int)ar4 + DAT_8c0dc4c4);
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c0dc4c4);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c0dc4c8),in_fr1);
      }
      else {
        uVar5 = *(undefined8 *)((int)ar4 + DAT_8c0dc4c8);
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar5 >> 0x20) <= (float)uVar5) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c0dc4f0,*(undefined4 *)((int)ar4 + DAT_8c0dc4c4));
        }
        else {
          in_xd0 = *(undefined8 *)((int)ar4 + DAT_8c0dc4c4);
          dVar6 = (double)CONCAT44(PTR_FUN_8c0dc4f4,DAT_8c0dc4f0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 + dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar4 + DAT_8c0dc4cc) = fVar4;
        }
        else {
          *(undefined8 *)((int)ar4 + DAT_8c0dc4cc) = in_xd0;
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)ar4 + DAT_8c0dc4cc) = *(undefined4 *)((int)ar4 + DAT_8c0dc4c8);
      }
      else {
        *(undefined8 *)((int)ar4 + DAT_8c0dc4cc) = *(undefined8 *)((int)ar4 + DAT_8c0dc4c8);
      }
      (*(code *)PTR_FUN_8c0dc4dc)(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0dc4f4)(ar5,iVar3,ar6,ar7);
      if (iVar1 == 1) {
        (*(code *)PTR_FUN_8c0dc4f8)(ar5,iVar3,ar6,ar7);
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0dc4fc)(ar5,iVar3,ar6,ar7);
        if (iVar1 == 1) {
          (*(code *)PTR_FUN_8c0dc500)(ar5,iVar3,ar6,ar7);
        }
      }
      iVar1 = (*(code *)PTR_FUN_8c0dc504)(ar5,iVar3,ar6,ar7);
      if (iVar1 == 1) {
        (*(code *)PTR_FUN_8c0dc508)(ar5,iVar3,ar6,ar7);
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0dc50c)(ar5,iVar3,ar6,ar7);
        if (iVar1 == 1) {
          (*(code *)PTR_FUN_8c0dc510)(ar5,iVar3,ar6,ar7);
        }
      }
      iVar3 = ar5;
      (*(code *)PTR_FUN_8c0dc514)(ar4,ar5,ar6,ar7);
      iVar1 = (*(code *)PTR_FUN_8c0dc518)(ar5,iVar3,ar6,ar7);
      if (iVar1 == 1) {
        iVar3 = (int)ar4 + DAT_8c0dc4d8;
        (**(code **)(*ar4 + 0x68))(ar4,iVar3,ar6,ar7);
      }
      (*(code *)PTR_FUN_8c0dc51c)(ar5,iVar3,ar6,ar7);
    }
  }
  return 1;
}



/* FUN_8c0dc520 @ 8c0dc520 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc520(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dc544)(*(undefined4 *)(DAT_8c0dc540 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_0dc548 @ 8c0dc548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_0dc548(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c0dc558 @ 8c0dc558 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc558(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0dc5b4)(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0dc5c8)(ar4 + DAT_8c0dc5c4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c0dc5cc)(ar5,a5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c0dc5d0 @ 8c0dc5d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc5d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_input_is_mask_set_20000_01ebd8_8c0dc614)
                    (*(undefined4 *)(DAT_8c0dc610 + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)PTR_input_is_mask_set_10000_01ec68_8c0dc618)
                        (*(undefined4 *)(DAT_8c0dc610 + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0dc61c @ 8c0dc61c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dc61c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  if (*(int *)(DAT_8c0dc780 + ar4) == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0dc78c)(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      uVar3 = 0;
      (**(code **)(DAT_8c0dc788 + *(int *)(iVar1 + 8)))(iVar1,0,ar6,ar7);
    }
  }
  else {
    iVar1 = (*(code *)PTR_get_field_24_05c284_8c0dc784)
                      (*(undefined4 *)(DAT_8c0dc780 + ar4),ar5,ar6,ar7);
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (**(code **)(DAT_8c0dc788 + *(int *)(*(int *)(DAT_8c0dc780 + ar4) + 8)))
                (*(int *)(DAT_8c0dc780 + ar4),0,ar6,ar7);
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0dc790)(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dc798)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    iVar2 = (*(code *)PTR_FUN_8c0dc79c)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 1;
      (**(code **)(DAT_8c0dc788 + *(int *)(iVar2 + 8)))(iVar2,1,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0dc7a0)(iVar2,uVar3,ar6,ar7);
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0dc7a4)(ar5,uVar3,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0dc798)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    iVar2 = (*(code *)PTR_FUN_8c0dc79c)(ar4 + DAT_8c0dc794,uVar3,ar6,ar7);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 2;
      (**(code **)(DAT_8c0dc788 + *(int *)(iVar2 + 8)))(iVar2,2,ar6,ar7);
      iVar2 = (*(code *)PTR_list_node_next_8c0dc7a0)(iVar2,uVar3,ar6,ar7);
    }
  }
  iVar1 = 0;
  if (*(int *)(DAT_8c0dc780 + ar4) != 0) {
    iVar1 = (*(code *)PTR_FUN_8c0dc7a8)(ar5,uVar3,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_FUN_8c0dc7ac)(ar5,uVar3,ar6,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c0dc7b0 @ 8c0dc7b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc7b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(DAT_8c0dc7bc + ar4) = 0x78;
  return 1;
}



/* FUN_8c0dc7c0 @ 8c0dc7c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dc7c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dc7e4)(*(undefined4 *)(DAT_8c0dc7e0 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dc7e8 @ 8c0dc7e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dc7e8(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 *a5;
  int iVar3;
  undefined4 in_fr1;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = 0;
    uStack_18 = in_PR;
  }
  else {
    uStack_18 = 0;
    uStack_20 = in_fr1;
  }
  uStack_1c = 0;
  a5 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0dc8cc)(ar5,ar5,ar6,ar7);
  if ((iVar1 == 1) && (iVar1 = *(int *)(DAT_8c0dc8d0 + ar4), iVar1 == 0)) {
    a4 = (*(code *)PTR_FUN_8c0dc8d8)(ar4 + DAT_8c0dc8d4,a5,ar6,ar7);
    iVar2 = (*(code *)PTR_get_field_300_0bf154_8c0dc8dc)(ar4 + DAT_8c0dc8d4,a5,ar6,ar7);
    iVar1 = iVar2;
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar1 = (*(code *)PTR_get_field_24_05c284_8c0dc8e0)(a4,a5,ar6,ar7);
      if ((iVar1 == 3) ||
         (iVar1 = (*(code *)PTR_get_field_24_05c284_8c0dc8e0)(a4,a5,ar6,ar7), iVar1 == 5)) {
        ar6 = &uStack_20;
        a5 = &uStack_1c;
        (*(code *)PTR_FUN_8c0dc8e4)(ar5,a5,ar6,ar7);
        (**(code **)(DAT_8c0dc8f4 + *(int *)(a4 + 8)))(a4,a5,ar6,ar7);
      }
      iVar1 = (*(code *)PTR_list_node_next_8c0dc8f8)(a4,a5,ar6,ar7);
      a4 = iVar1;
    }
  }
  return iVar1;
}



/* FUN_8c0dc8fc @ 8c0dc8fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dc8fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 a5;
  int iVar2;
  int iVar3;
  
  a5 = ar5;
  a4 = (*(code *)PTR_FUN_8c0dc97c)(ar4 + DAT_8c0dc978,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0dc980)(ar4 + DAT_8c0dc978,a5,ar6,ar7);
  iVar2 = iVar1;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    a5 = (*(code *)PTR_get_field_b0_10113c_8c0dc984)(ar5,a5,ar6,ar7);
    (**(code **)(DAT_8c0dc988 + *(int *)(*(int *)(a4 + 8) + 8)))(*(int *)(a4 + 8),a5,ar6,ar7);
    iVar2 = (*(code *)PTR_list_node_next_8c0dc98c)(a4,a5,ar6,ar7);
    a4 = iVar2;
  }
  return iVar2;
}



/* FUN_8c0dc990 @ 8c0dc990 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dc990(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_FUN_8c0dca0c)(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c0dca10)(ar5,a5,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0dca14)(ar5,a5,ar6,ar7);
    if (iVar1 == 1) {
      (*(code *)PTR_FUN_8c0dca18)(ar5,a5,ar6,ar7);
    }
  }
  iVar1 = (*(code *)PTR_FUN_8c0dca1c)(ar5,a5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)PTR_FUN_8c0dca20)(ar5,a5,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0dca24)(ar5,a5,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_FUN_8c0dca28)(ar5,a5,ar6,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c0dca2c @ 8c0dca2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dca2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ar5;
  (*(code *)PTR_FUN_8c0dca6c)(ar4 + DAT_8c0dca68,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0dca70)(ar5,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dca74 @ 8c0dca74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dca74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0dca90) = in_fr4;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0dca90) = CONCAT44(in_fr4,in_fr5);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0dca94) = in_fr5;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0dca94) = in_xd4;
  }
  iVar1 = DAT_8c0dca98;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0dca98) = in_fr6;
  }
  else {
    *(undefined8 *)(ar4 + DAT_8c0dca98) = CONCAT44(in_fr6,in_fr7);
  }
  return iVar1;
}



/* s_WaterTank_0dcaa2 @ 8c0dca9c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * s_WaterTank_0dcaa2(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *a6;
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *a6_00;
  undefined1 *a4;
  undefined4 uVar5;
  undefined4 *a7;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_fr1;
  float fVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_11c [8];
  float fStack_114;
  undefined1 *puStack_110;
  int iStack_10c;
  float *pfStack_108;
  int iStack_104;
  undefined4 *puStack_100;
  int iStack_fc;
  undefined1 *puStack_f8;
  int iStack_f4;
  float *pfStack_f0;
  int iStack_ec;
  undefined1 *puStack_e8;
  int iStack_e4;
  undefined1 *puStack_e0;
  int iStack_dc;
  float *pfStack_d8;
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
  int iStack_a4;
  int iStack_a0;
  
  uVar5 = 3;
  uVar4 = 0;
  (*(code *)PTR_FUN_8c0dccac)(ar4,PTR_s_GRAPHICS_COMMON_8c0dcca4 + DAT_8c0dcca8,0,3);
  puVar3 = PTR_DAT_8c0dccb0;
  *ar4 = PTR_DAT_8c0dccb0;
  (*(code *)PTR_FUN_8c0dccb8)((int)ar4 + DAT_8c0dccb4,puVar3,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dccc0)((int)ar4 + DAT_8c0dccbc,puVar3,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dccc0)((int)ar4 + DAT_8c0dccc4,puVar3,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dccc0)((int)ar4 + DAT_8c0dccc8,puVar3,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dccd0)((int)ar4 + DAT_8c0dcccc,puVar3,uVar4,uVar5);
  iVar6 = DAT_8c0dccd4;
  (*(code *)PTR_FUN_8c0dccd8)((int)ar4 + DAT_8c0dccd4,DAT_8c0dccd4,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dcce0)((int)ar4 + DAT_8c0dccdc,iVar6,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dcce8)((int)ar4 + DAT_8c0dcce4,iVar6,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dccc0)((int)ar4 + DAT_8c0dccec,iVar6,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dccb8)((int)ar4 + DAT_8c0dccf0,iVar6,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dccf8)((int)ar4 + DAT_8c0dccf4,iVar6,uVar4,uVar5);
  (*(code *)PTR_FUN_8c0dcd00)((int)ar4 + DAT_8c0dccfc,iVar6,uVar4,uVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)((int)ar4 + DAT_8c0dcd04,iVar6,uVar4,uVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)((int)ar4 + DAT_8c0dcd0c,iVar6,uVar4,uVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)((int)ar4 + DAT_8c0dcd10,iVar6,uVar4,uVar5);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)((int)ar4 + DAT_8c0dcd14,iVar6,uVar4,uVar5);
  uVar4 = 0xc;
  puVar3 = PTR_free_if_nonnull_wrap_0d6ef8_8c0dcd18;
  (*(code *)PTR_FUN_8c0dcd24)
            ((int)ar4 + DAT_8c0dcd20,PTR_LAB_8c0dcd1c,PTR_free_if_nonnull_wrap_0d6ef8_8c0dcd18,0xc);
  (*(code *)PTR_FUN_8c0dccb8)((int)ar4 + DAT_8c0dcd28,PTR_FUN_8c0dccb8,puVar3,uVar4);
  (*(code *)PTR_FUN_8c0dcd24)
            ((int)ar4 + DAT_8c0dcd38,PTR_FUN_8c0dcd34,PTR_FUN_8c0dcd30,DAT_8c0dcd2c);
  uVar4 = 0x18;
  puVar3 = PTR_FUN_8c0dcd40;
  a6_00 = PTR_free_if_nonnull_wrap_0cffc8_8c0dcd3c;
  (*(code *)PTR_FUN_8c0dcd24)
            ((int)ar4 + DAT_8c0dcd44,PTR_FUN_8c0dcd40,PTR_free_if_nonnull_wrap_0cffc8_8c0dcd3c,0x18)
  ;
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)(auStack_11c + DAT_8c0dcd48,puVar3,a6_00,uVar4);
  puVar3 = PTR_Vec3_ctor_zero_8c0dcd08;
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)
            (auStack_11c + DAT_8c0dcd4c,PTR_Vec3_ctor_zero_8c0dcd08,a6_00,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)(auStack_11c + DAT_8c0dcd50,puVar3,a6_00,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)(auStack_11c + DAT_8c0dcd54,puVar3,a6_00,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)(auStack_11c + DAT_8c0dcd58,puVar3,a6_00,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)(auStack_11c + DAT_8c0dcd5c,puVar3,a6_00,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)(auStack_11c + DAT_8c0dcd60,puVar3,a6_00,uVar4);
  (*(code *)PTR_Vec3_ctor_zero_8c0dcd08)(auStack_11c + DAT_8c0dcd64,puVar3,a6_00,uVar4);
  *DAT_8c0dcd68 = 0;
  DAT_8c0dcd68[1] = (short)DAT_8c0dcd6c;
  DAT_8c0dcd68[2] = 0;
  DAT_8c0dcd68[3] = 0;
  DAT_8c0dcd68[4] = (short)DAT_8c0dcd6c;
  DAT_8c0dcd68[5] = 0;
  DAT_8c0dcd68[6] = (short)DAT_8c0dcd6c;
  DAT_8c0dcd68[7] = (short)DAT_8c0dcd6c;
  for (iVar6 = 0; iVar6 < 4; iVar6 = iVar6 + 1) {
    *(int *)(auStack_11c + DAT_8c0dcdcc) = iVar6;
    *(undefined4 *)(DAT_8c0dcdd0 + *(int *)(auStack_11c + DAT_8c0dcdcc) * 4) = 0xffffffff;
  }
  (*(code *)PTR_FUN_8c0dcdd4)(ar4,puVar3,a6_00,uVar4);
  *(undefined4 *)(DAT_8c0dcdd8 + (int)ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c0dcde0,in_fr1);
    *(undefined4 *)((int)ar4 + DAT_8c0dcddc) = (undefined4)DAT_8c0dcde0;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dcde0._4_4_,(undefined4)DAT_8c0dcde0);
    *(undefined8 *)((int)ar4 + DAT_8c0dcddc) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dcde8,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dcde0._4_4_) = DAT_8c0dcde8;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dcdec,DAT_8c0dcde8);
    *(undefined8 *)((int)ar4 + DAT_8c0dcde0._4_4_) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dcdf0,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dcdec) = DAT_8c0dcdf0;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dcdf4,DAT_8c0dcdf0);
    *(undefined8 *)((int)ar4 + DAT_8c0dcdec) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dcdf8,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dcdf4) = DAT_8c0dcdf8;
  }
  else {
    uVar10 = CONCAT44(uRam8c0dcdfc,DAT_8c0dcdf8);
    *(undefined8 *)((int)ar4 + DAT_8c0dcdf4) = uVar10;
  }
  for (iVar6 = 0; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
      *(int *)(auStack_11c + DAT_8c0dce90) = iVar6;
      *(int *)(auStack_11c + DAT_8c0dce94) = iVar7;
      puVar1 = (undefined8 *)
               ((int)ar4 +
               DAT_8c0dce98 +
               (*(int *)(auStack_11c + DAT_8c0dce94) * 2 + *(int *)(auStack_11c + DAT_8c0dce94)) * 4
               + (*(int *)(auStack_11c + DAT_8c0dce90) * 0x10 - *(int *)(auStack_11c + DAT_8c0dce90)
                 ) * 8);
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44((undefined4)DAT_8c0dce9c,(int)uVar10);
        *(undefined4 *)puVar1 = (undefined4)DAT_8c0dce9c;
      }
      else {
        uVar10 = CONCAT44(DAT_8c0dce9c._4_4_,(undefined4)DAT_8c0dce9c);
        *puVar1 = uVar10;
      }
      iStack_a0 = iVar6;
      iStack_a4 = iVar7;
      *(undefined4 *)((int)ar4 + DAT_8c0dce9c._4_4_ + iVar7 * 0xc + iVar6 * 0x78) = 0;
    }
  }
  for (iVar6 = 6; iVar6 < 0xb; iVar6 = iVar6 + 1) {
    iVar7 = 3;
    while (iVar8 = iVar7, iVar8 < 10) {
      puVar1 = (undefined8 *)((int)ar4 + DAT_8c0dcf38 + iVar8 * 0xc + iVar6 * 0x78);
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44((undefined4)DAT_8c0dcf3c,(int)uVar10);
        *(undefined4 *)puVar1 = (undefined4)DAT_8c0dcf3c;
      }
      else {
        uVar10 = CONCAT44(DAT_8c0dcf3c._4_4_,(undefined4)DAT_8c0dcf3c);
        *puVar1 = uVar10;
      }
      *(undefined4 *)((int)ar4 + DAT_8c0dcf3c._4_4_ + iVar8 * 0xc + iVar6 * 0x78) = 1;
      iStack_b4 = iVar8;
      iStack_b0 = iVar6;
      iStack_ac = iVar8;
      iStack_a8 = iVar6;
      iVar7 = iVar8 + 1;
    }
  }
  iVar6 = 5;
  while (iVar7 = iVar6, iVar7 < 10) {
    *(undefined4 *)((int)ar4 + DAT_8c0dcf90 + iVar7 * 0xc) = 2;
    puVar1 = (undefined8 *)((int)ar4 + DAT_8c0dcf94 + iVar7 * 0xc);
    if (in_FPSCR_SZ == '\0') {
      uVar10 = CONCAT44(DAT_8c0dcf98,(int)uVar10);
      *(undefined4 *)puVar1 = DAT_8c0dcf98;
    }
    else {
      uVar10 = CONCAT44(uRam8c0dcf9c,DAT_8c0dcf98);
      *puVar1 = uVar10;
    }
    iStack_bc = iVar7;
    iStack_b8 = iVar7;
    iVar6 = iVar7 + 1;
  }
  iVar6 = 5;
  while (iVar7 = iVar6, iVar7 < 10) {
    *(undefined4 *)((int)ar4 + DAT_8c0dcfc8 + iVar7 * 0xc) = 2;
    iStack_c0 = iVar7;
    iVar6 = iVar7 + 1;
  }
  iVar6 = 6;
  while (iVar7 = iVar6, iVar7 < 0xb) {
    *(undefined4 *)((int)ar4 + DAT_8c0dd000 + iVar7 * 0x78) = 2;
    iStack_c4 = iVar7;
    iVar6 = iVar7 + 1;
  }
  iVar6 = 6;
  while (iVar7 = iVar6, iVar7 < 0xb) {
    *(undefined4 *)((int)ar4 + DAT_8c0dd080 + iVar7 * 0x78) = 2;
    puVar1 = (undefined8 *)((int)ar4 + DAT_8c0dd084 + iVar7 * 0x78);
    if (in_FPSCR_SZ == '\0') {
      uVar10 = CONCAT44((undefined4)DAT_8c0dd088,(int)uVar10);
      *(undefined4 *)puVar1 = (undefined4)DAT_8c0dd088;
    }
    else {
      uVar10 = CONCAT44(DAT_8c0dd088._4_4_,(undefined4)DAT_8c0dd088);
      *puVar1 = uVar10;
    }
    iStack_cc = iVar7;
    iStack_c8 = iVar7;
    iVar6 = iVar7 + 1;
  }
  *(undefined4 *)(DAT_8c0dd088._4_4_ + (int)ar4) = 2;
  *(undefined4 *)(DAT_8c0dd090 + (int)ar4) = 2;
  *(undefined4 *)(DAT_8c0dd094 + (int)ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd09c,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd098) = DAT_8c0dd09c;
  }
  else {
    uVar10 = CONCAT44(uRam8c0dd0a0,DAT_8c0dd09c);
    *(undefined8 *)((int)ar4 + DAT_8c0dd098) = uVar10;
  }
  for (iVar6 = 2; iVar6 < 5; iVar6 = iVar6 + 1) {
    iVar7 = 0;
    while (iVar8 = iVar7, iVar8 < 6) {
      *(undefined4 *)((int)ar4 + DAT_8c0dd3dc + iVar8 * 0xc + iVar6 * 0x78) = 1;
      iStack_d4 = iVar8;
      iStack_d0 = iVar6;
      iVar7 = iVar8 + 1;
    }
  }
  *(undefined4 *)(DAT_8c0dd3e0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0dd3e4 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0dd3e8 + (int)ar4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c0dd3f0,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd3ec) = (undefined4)DAT_8c0dd3f0;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd3f0._4_4_,(undefined4)DAT_8c0dd3f0);
    *(undefined8 *)((int)ar4 + DAT_8c0dd3ec) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd3f8,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd3f0._4_4_) = DAT_8c0dd3f8;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd3fc,DAT_8c0dd3f8);
    *(undefined8 *)((int)ar4 + DAT_8c0dd3f0._4_4_) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd400,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd3fc) = DAT_8c0dd400;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd404,DAT_8c0dd400);
    *(undefined8 *)((int)ar4 + DAT_8c0dd3fc) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd408,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd404) = DAT_8c0dd408;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd40c,DAT_8c0dd408);
    *(undefined8 *)((int)ar4 + DAT_8c0dd404) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd410,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd40c) = DAT_8c0dd410;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd414,DAT_8c0dd410);
    *(undefined8 *)((int)ar4 + DAT_8c0dd40c) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0dd414) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0dd414) = CONCAT44(0x3f800000,(int)uVar10);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd41c,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd418) = DAT_8c0dd41c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd420,DAT_8c0dd41c);
    *(undefined8 *)((int)ar4 + DAT_8c0dd418) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd424,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd420) = DAT_8c0dd424;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd428,DAT_8c0dd424);
    *(undefined8 *)((int)ar4 + DAT_8c0dd420) = uVar10;
  }
  puVar3 = PTR_DAT_8c0dd42c;
  uVar4 = (undefined4)uVar10;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd428);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd42c + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd42c;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd434;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd430);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd434 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd434;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar1 = (undefined8 *)PTR_DAT_8c0dd43c;
  a7 = (undefined4 *)((int)ar4 + DAT_8c0dd438);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd43c + 4);
  *a7 = *(undefined4 *)PTR_DAT_8c0dd43c;
  a7[1] = uVar5;
  a7[2] = *(undefined4 *)((int)puVar1 + 8);
  puVar3 = PTR_DAT_8c0dd444;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd440);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd444 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd444;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd44c;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd448);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd44c + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd44c;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd454;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd450);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd454 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd454;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd45c;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd458);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd45c + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd45c;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd464;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd460);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd464 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd464;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd46c;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd468);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd46c + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd46c;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd474;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd470);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd474 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd474;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd47c;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd478);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd47c + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd47c;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd484;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd480);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd484 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd484;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd48c;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd488);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd48c + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd48c;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd494;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd490);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd494 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd494;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd49c;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd498);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd49c + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd49c;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  puVar3 = PTR_DAT_8c0dd4a4;
  puVar2 = (undefined4 *)((int)ar4 + DAT_8c0dd4a0);
  uVar5 = *(undefined4 *)(PTR_DAT_8c0dd4a4 + 4);
  *puVar2 = *(undefined4 *)PTR_DAT_8c0dd4a4;
  puVar2[1] = uVar5;
  puVar2[2] = *(undefined4 *)(puVar3 + 8);
  (**(code **)(*(int *)((int)ar4 + DAT_8c0dd4ac) + 8))
            ((int *)((int)ar4 + DAT_8c0dd4ac),PTR_PTR_8c0dd4a8,puVar1,a7);
  (*(code *)PTR_FUN_8c0dd4b8)((int)ar4 + DAT_8c0dd4b4,PTR_DAT_8c0dd4b0,puVar1,a7);
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c0dd4c0,uVar4);
    *(undefined4 *)((int)ar4 + DAT_8c0dd4bc) = (undefined4)DAT_8c0dd4c0;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd4c0._4_4_,(undefined4)DAT_8c0dd4c0);
    *(undefined8 *)((int)ar4 + DAT_8c0dd4bc) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd4c8,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd4c0._4_4_) = DAT_8c0dd4c8;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd4cc,DAT_8c0dd4c8);
    *(undefined8 *)((int)ar4 + DAT_8c0dd4c0._4_4_) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd4d0,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd4cc) = DAT_8c0dd4d0;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd4d4,DAT_8c0dd4d0);
    *(undefined8 *)((int)ar4 + DAT_8c0dd4cc) = uVar10;
  }
  uVar4 = (undefined4)uVar10;
  (*(code *)PTR_Vec3_assign_8c0dd4d8)((int)ar4 + DAT_8c0dd4d4,(int)ar4 + DAT_8c0dd4bc,puVar1,a7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0dd4dc) = (undefined4)DAT_8c0dd4e0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd3fc) = DAT_8c0dd4e0._4_4_;
    *(undefined4 *)(auStack_11c + DAT_8c0dd404) = DAT_8c0dd4e8;
    *(undefined4 *)(auStack_11c + DAT_8c0dd40c) = DAT_8c0dd4ec;
    *(undefined4 *)(auStack_11c + DAT_8c0dd418) = DAT_8c0dd4e0._4_4_;
    *(undefined4 *)(auStack_11c + DAT_8c0dd420) = DAT_8c0dd4e8;
    *(undefined4 *)(auStack_11c + DAT_8c0dd4f4) = DAT_8c0dd4f0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd4fc) = DAT_8c0dd4f8;
    *(undefined4 *)(auStack_11c + DAT_8c0dd500) = DAT_8c0dd4e8;
    *(undefined4 *)(auStack_11c + DAT_8c0dd504) = DAT_8c0dd4f0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd508) = DAT_8c0dd4f8;
    *(undefined4 *)(auStack_11c + DAT_8c0dd50c) = DAT_8c0dd4e8;
    *(undefined4 *)(auStack_11c + DAT_8c0dd510) = DAT_8c0dd4ec;
    uVar11 = CONCAT44(DAT_8c0dd4e0._4_4_,uVar4);
    *(undefined4 *)(auStack_11c + DAT_8c0dd514) = DAT_8c0dd4e0._4_4_;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0dd4dc) = CONCAT44(DAT_8c0dd4e0._4_4_,(undefined4)DAT_8c0dd4e0)
    ;
    *(ulonglong *)(auStack_11c + DAT_8c0dd3fc) = CONCAT44(DAT_8c0dd4e8,DAT_8c0dd4e0._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd404) = CONCAT44(DAT_8c0dd4ec,DAT_8c0dd4e8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd40c) = CONCAT44(DAT_8c0dd4f0,DAT_8c0dd4ec);
    *(ulonglong *)(auStack_11c + DAT_8c0dd418) = CONCAT44(DAT_8c0dd4e8,DAT_8c0dd4e0._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd420) = CONCAT44(DAT_8c0dd4ec,DAT_8c0dd4e8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd4f4) = CONCAT44(DAT_8c0dd4f4,DAT_8c0dd4f0);
    *(ulonglong *)(auStack_11c + DAT_8c0dd4fc) = CONCAT44(DAT_8c0dd4fc,DAT_8c0dd4f8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd500) = CONCAT44(DAT_8c0dd4ec,DAT_8c0dd4e8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd504) = CONCAT44(DAT_8c0dd4f4,DAT_8c0dd4f0);
    *(ulonglong *)(auStack_11c + DAT_8c0dd508) = CONCAT44(DAT_8c0dd4fc,DAT_8c0dd4f8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd50c) = CONCAT44(DAT_8c0dd4ec,DAT_8c0dd4e8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd510) = CONCAT44(DAT_8c0dd4f0,DAT_8c0dd4ec);
    uVar11 = CONCAT44(DAT_8c0dd4e8,DAT_8c0dd4e0._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd514) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd518) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd51c) = DAT_8c0dd4ec;
    uVar11 = CONCAT44(DAT_8c0dd4e0._4_4_,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd520) = DAT_8c0dd4e0._4_4_;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd518) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd51c) = CONCAT44(DAT_8c0dd4f0,DAT_8c0dd4ec);
    uVar11 = CONCAT44(DAT_8c0dd4e8,DAT_8c0dd4e0._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd520) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd524) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd528) = DAT_8c0dd4f0;
    uVar11 = CONCAT44(DAT_8c0dd4f8,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd52c) = DAT_8c0dd4f8;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd524) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd528) = CONCAT44(DAT_8c0dd4f4,DAT_8c0dd4f0);
    uVar11 = CONCAT44(DAT_8c0dd4fc,DAT_8c0dd4f8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd52c) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd530) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd534) = DAT_8c0dd4f0;
    uVar11 = CONCAT44(DAT_8c0dd4f8,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd538) = DAT_8c0dd4f8;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd530) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd534) = CONCAT44(DAT_8c0dd4f4,DAT_8c0dd4f0);
    uVar11 = CONCAT44(DAT_8c0dd4fc,DAT_8c0dd4f8);
    *(ulonglong *)(auStack_11c + DAT_8c0dd538) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd53c) = 0;
    dVar12 = (double)CONCAT44(DAT_8c0dd4ec,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd540) = DAT_8c0dd4ec;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd53c) = uVar11 & 0xffffffff;
    dVar12 = (double)CONCAT44(DAT_8c0dd4f0,DAT_8c0dd4ec);
    *(double *)(auStack_11c + DAT_8c0dd540) = dVar12;
  }
  for (iVar6 = 0; uVar4 = SUB84(dVar12,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfStack_d8 = (float *)(auStack_11c + iVar6 * 0x10 + DAT_8c0dd6e8);
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0dd6ec,*pfStack_d8);
    }
    else {
      in_xd0 = *(undefined8 *)pfStack_d8;
      dVar12 = (double)CONCAT44(_DAT_8c0dd6f0,DAT_8c0dd6ec);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 * dVar12,0);
    }
    iStack_dc = iVar6;
    if (in_FPSCR_SZ == '\0') {
      *pfStack_d8 = fVar9;
    }
    else {
      *(undefined8 *)pfStack_d8 = in_xd0;
    }
    puStack_e0 = auStack_11c + iVar6 * 0x10 + DAT_8c0dd6e8;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0dd6ec,*(undefined4 *)(puStack_e0 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(puStack_e0 + 4);
      dVar12 = (double)CONCAT44(_DAT_8c0dd6f0,DAT_8c0dd6ec);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 * dVar12,0);
    }
    iStack_e4 = iVar6;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puStack_e0 + 4) = fVar9;
    }
    else {
      *(undefined8 *)(puStack_e0 + 4) = in_xd0;
    }
    puStack_e8 = auStack_11c + iVar6 * 0x10 + DAT_8c0dd6e8;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0dd6ec,*(undefined4 *)(puStack_e8 + 8));
    }
    else {
      in_xd0 = *(undefined8 *)(puStack_e8 + 8);
      dVar12 = (double)CONCAT44(_DAT_8c0dd6f0,DAT_8c0dd6ec);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)(ulonglong)(uint)(SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20));
    }
    else {
      dVar12 = dVar12 * dVar12;
    }
    iStack_ec = iVar6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puStack_e8 + 8) = SUB84(dVar12,0);
    }
    else {
      *(undefined8 *)(puStack_e8 + 8) = in_xd0;
    }
  }
  (**(code **)(*(int *)((int)ar4 + _DAT_8c0dd6f0) + 0x30))
            ((int *)((int)ar4 + _DAT_8c0dd6f0),auStack_11c + DAT_8c0dd6e8,puVar1,a7);
  (*(code *)PTR_FUN_8c0dd6fc)((int)ar4 + DAT_8c0dd6f8,PTR_DAT_8c0dd6f4,puVar1,a7);
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c0dd704,uVar4);
    *(undefined4 *)((int)ar4 + DAT_8c0dd700) = (undefined4)DAT_8c0dd704;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd704._4_4_,(undefined4)DAT_8c0dd704);
    *(undefined8 *)((int)ar4 + DAT_8c0dd700) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd70c,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd704._4_4_) = DAT_8c0dd70c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd710,DAT_8c0dd70c);
    *(undefined8 *)((int)ar4 + DAT_8c0dd704._4_4_) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd714,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd710) = DAT_8c0dd714;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd718,DAT_8c0dd714);
    *(undefined8 *)((int)ar4 + DAT_8c0dd710) = uVar10;
  }
  uVar4 = (undefined4)uVar10;
  (*(code *)PTR_Vec3_assign_8c0dd71c)((int)ar4 + DAT_8c0dd718,(int)ar4 + DAT_8c0dd700,puVar1,a7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0dd720) = (undefined4)DAT_8c0dd724;
    *(undefined4 *)(auStack_11c + DAT_8c0dd6e8) = DAT_8c0dd724._4_4_;
    *(undefined4 *)(auStack_11c + DAT_8c0dd730) = DAT_8c0dd72c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd738) = DAT_8c0dd734;
    *(undefined4 *)(auStack_11c + DAT_8c0dd73c) = DAT_8c0dd724._4_4_;
    *(undefined4 *)(auStack_11c + DAT_8c0dd740) = DAT_8c0dd72c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd748) = DAT_8c0dd744;
    *(undefined4 *)(auStack_11c + DAT_8c0dd750) = DAT_8c0dd74c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd754) = DAT_8c0dd72c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd758) = DAT_8c0dd744;
    *(undefined4 *)(auStack_11c + DAT_8c0dd75c) = DAT_8c0dd74c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd760) = DAT_8c0dd72c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd764) = DAT_8c0dd734;
    uVar11 = CONCAT44(DAT_8c0dd724._4_4_,uVar4);
    *(undefined4 *)(auStack_11c + DAT_8c0dd768) = DAT_8c0dd724._4_4_;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0dd720) = CONCAT44(DAT_8c0dd724._4_4_,(undefined4)DAT_8c0dd724)
    ;
    *(ulonglong *)(auStack_11c + DAT_8c0dd6e8) = CONCAT44(DAT_8c0dd72c,DAT_8c0dd724._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd730) = CONCAT44(DAT_8c0dd730,DAT_8c0dd72c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd738) = CONCAT44(DAT_8c0dd738,DAT_8c0dd734);
    *(ulonglong *)(auStack_11c + DAT_8c0dd73c) = CONCAT44(DAT_8c0dd72c,DAT_8c0dd724._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd740) = CONCAT44(DAT_8c0dd730,DAT_8c0dd72c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd748) = CONCAT44(DAT_8c0dd748,DAT_8c0dd744);
    *(ulonglong *)(auStack_11c + DAT_8c0dd750) = CONCAT44(DAT_8c0dd750,DAT_8c0dd74c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd754) = CONCAT44(DAT_8c0dd730,DAT_8c0dd72c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd758) = CONCAT44(DAT_8c0dd748,DAT_8c0dd744);
    *(ulonglong *)(auStack_11c + DAT_8c0dd75c) = CONCAT44(DAT_8c0dd750,DAT_8c0dd74c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd760) = CONCAT44(DAT_8c0dd730,DAT_8c0dd72c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd764) = CONCAT44(DAT_8c0dd738,DAT_8c0dd734);
    uVar11 = CONCAT44(DAT_8c0dd72c,DAT_8c0dd724._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd768) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd76c) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd770) = DAT_8c0dd734;
    uVar11 = CONCAT44(DAT_8c0dd724._4_4_,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd774) = DAT_8c0dd724._4_4_;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd76c) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd770) = CONCAT44(DAT_8c0dd738,DAT_8c0dd734);
    uVar11 = CONCAT44(DAT_8c0dd72c,DAT_8c0dd724._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd774) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd778) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd77c) = DAT_8c0dd744;
    uVar11 = CONCAT44(DAT_8c0dd74c,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd780) = DAT_8c0dd74c;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd778) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd77c) = CONCAT44(DAT_8c0dd748,DAT_8c0dd744);
    uVar11 = CONCAT44(DAT_8c0dd750,DAT_8c0dd74c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd780) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd784) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd788) = DAT_8c0dd744;
    uVar11 = CONCAT44(DAT_8c0dd74c,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd78c) = DAT_8c0dd74c;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd784) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd788) = CONCAT44(DAT_8c0dd748,DAT_8c0dd744);
    uVar11 = CONCAT44(DAT_8c0dd750,DAT_8c0dd74c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd78c) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd784) = 0;
    dVar12 = (double)CONCAT44(DAT_8c0dd734,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd790) = DAT_8c0dd734;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd784) = uVar11 & 0xffffffff;
    dVar12 = (double)CONCAT44(DAT_8c0dd738,DAT_8c0dd734);
    *(double *)(auStack_11c + DAT_8c0dd790) = dVar12;
  }
  for (iVar6 = 0; uVar4 = SUB84(dVar12,0), iVar6 < 8; iVar6 = iVar6 + 1) {
    pfStack_f0 = (float *)(auStack_11c + iVar6 * 0x10 + DAT_8c0dd930);
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0dd934,*pfStack_f0);
    }
    else {
      in_xd0 = *(undefined8 *)pfStack_f0;
      dVar12 = (double)CONCAT44(_DAT_8c0dd938,DAT_8c0dd934);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 * dVar12,0);
    }
    iStack_f4 = iVar6;
    if (in_FPSCR_SZ == '\0') {
      *pfStack_f0 = fVar9;
    }
    else {
      *(undefined8 *)pfStack_f0 = in_xd0;
    }
    puStack_f8 = auStack_11c + iVar6 * 0x10 + DAT_8c0dd930;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0dd934,*(undefined4 *)(puStack_f8 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(puStack_f8 + 4);
      dVar12 = (double)CONCAT44(_DAT_8c0dd938,DAT_8c0dd934);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 * dVar12,0);
    }
    iStack_fc = iVar6;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puStack_f8 + 4) = fVar9;
    }
    else {
      *(undefined8 *)(puStack_f8 + 4) = in_xd0;
    }
    a7 = (undefined4 *)(auStack_11c + iVar6 * 0x10 + DAT_8c0dd930);
    puVar1 = (undefined8 *)(a7 + 2);
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0dd934,a7[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(a7 + 2);
      dVar12 = (double)CONCAT44(_DAT_8c0dd938,DAT_8c0dd934);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)(ulonglong)(uint)(SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20));
    }
    else {
      dVar12 = dVar12 * dVar12;
    }
    iStack_104 = iVar6;
    puStack_100 = a7;
    if (in_FPSCR_SZ == '\0') {
      *(int *)puVar1 = SUB84(dVar12,0);
    }
    else {
      *puVar1 = in_xd0;
    }
  }
  (**(code **)(*(int *)((int)ar4 + _DAT_8c0dd938) + 0x30))
            ((int *)((int)ar4 + _DAT_8c0dd938),auStack_11c + DAT_8c0dd930,puVar1,a7);
  (*(code *)PTR_FUN_8c0dd944)((int)ar4 + DAT_8c0dd940,PTR_DAT_8c0dd93c,puVar1,a7);
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44((undefined4)DAT_8c0dd94c,uVar4);
    *(undefined4 *)((int)ar4 + DAT_8c0dd948) = (undefined4)DAT_8c0dd94c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd94c._4_4_,(undefined4)DAT_8c0dd94c);
    *(undefined8 *)((int)ar4 + DAT_8c0dd948) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd954,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd94c._4_4_) = DAT_8c0dd954;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd958,DAT_8c0dd954);
    *(undefined8 *)((int)ar4 + DAT_8c0dd94c._4_4_) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(DAT_8c0dd95c,(int)uVar10);
    *(undefined4 *)((int)ar4 + DAT_8c0dd958) = DAT_8c0dd95c;
  }
  else {
    uVar10 = CONCAT44(DAT_8c0dd960,DAT_8c0dd95c);
    *(undefined8 *)((int)ar4 + DAT_8c0dd958) = uVar10;
  }
  uVar4 = (undefined4)uVar10;
  (*(code *)PTR_Vec3_assign_8c0dd964)((int)ar4 + DAT_8c0dd960,(int)ar4 + DAT_8c0dd948,puVar1,a7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)ar4 + DAT_8c0dd968) = (undefined4)DAT_8c0dd96c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd930) = DAT_8c0dd96c._4_4_;
    *(undefined4 *)(auStack_11c + DAT_8c0dd978) = DAT_8c0dd974;
    *(undefined4 *)(auStack_11c + DAT_8c0dd980) = DAT_8c0dd97c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd984) = DAT_8c0dd96c._4_4_;
    *(undefined4 *)(auStack_11c + DAT_8c0dd988) = DAT_8c0dd974;
    *(undefined4 *)(auStack_11c + DAT_8c0dd990) = DAT_8c0dd98c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd998) = DAT_8c0dd994;
    *(undefined4 *)(auStack_11c + DAT_8c0dd99c) = DAT_8c0dd974;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9a0) = DAT_8c0dd98c;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9a4) = DAT_8c0dd994;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9a8) = DAT_8c0dd974;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9ac) = DAT_8c0dd97c;
    uVar11 = CONCAT44(DAT_8c0dd96c._4_4_,uVar4);
    *(undefined4 *)(auStack_11c + DAT_8c0dd9b0) = DAT_8c0dd96c._4_4_;
  }
  else {
    *(undefined8 *)((int)ar4 + DAT_8c0dd968) = CONCAT44(DAT_8c0dd96c._4_4_,(undefined4)DAT_8c0dd96c)
    ;
    *(ulonglong *)(auStack_11c + DAT_8c0dd930) = CONCAT44(DAT_8c0dd974,DAT_8c0dd96c._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd978) = CONCAT44(DAT_8c0dd978,DAT_8c0dd974);
    *(ulonglong *)(auStack_11c + DAT_8c0dd980) = CONCAT44(DAT_8c0dd980,DAT_8c0dd97c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd984) = CONCAT44(DAT_8c0dd974,DAT_8c0dd96c._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd988) = CONCAT44(DAT_8c0dd978,DAT_8c0dd974);
    *(ulonglong *)(auStack_11c + DAT_8c0dd990) = CONCAT44(DAT_8c0dd990,DAT_8c0dd98c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd998) = CONCAT44(DAT_8c0dd998,DAT_8c0dd994);
    *(ulonglong *)(auStack_11c + DAT_8c0dd99c) = CONCAT44(DAT_8c0dd978,DAT_8c0dd974);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9a0) = CONCAT44(DAT_8c0dd990,DAT_8c0dd98c);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9a4) = CONCAT44(DAT_8c0dd998,DAT_8c0dd994);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9a8) = CONCAT44(DAT_8c0dd978,DAT_8c0dd974);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9ac) = CONCAT44(DAT_8c0dd980,DAT_8c0dd97c);
    uVar11 = CONCAT44(DAT_8c0dd974,DAT_8c0dd96c._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9b0) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd9b4) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9b8) = DAT_8c0dd97c;
    uVar11 = CONCAT44(DAT_8c0dd96c._4_4_,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd9bc) = DAT_8c0dd96c._4_4_;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd9b4) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd9b8) = CONCAT44(DAT_8c0dd980,DAT_8c0dd97c);
    uVar11 = CONCAT44(DAT_8c0dd974,DAT_8c0dd96c._4_4_);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9bc) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd9c0) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9c4) = DAT_8c0dd98c;
    uVar11 = CONCAT44(DAT_8c0dd994,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd9c8) = DAT_8c0dd994;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd9c0) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd9c4) = CONCAT44(DAT_8c0dd990,DAT_8c0dd98c);
    uVar11 = CONCAT44(DAT_8c0dd998,DAT_8c0dd994);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9c8) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd9cc) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9d0) = DAT_8c0dd98c;
    uVar11 = CONCAT44(DAT_8c0dd994,(int)uVar11);
    *(undefined4 *)(auStack_11c + DAT_8c0dd9d4) = DAT_8c0dd994;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd9cc) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd9d0) = CONCAT44(DAT_8c0dd990,DAT_8c0dd98c);
    uVar11 = CONCAT44(DAT_8c0dd998,DAT_8c0dd994);
    *(ulonglong *)(auStack_11c + DAT_8c0dd9d4) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(auStack_11c + DAT_8c0dd9d8) = 0;
    *(undefined4 *)(auStack_11c + DAT_8c0dd9dc) = DAT_8c0dd97c;
  }
  else {
    *(ulonglong *)(auStack_11c + DAT_8c0dd9d8) = uVar11 & 0xffffffff;
    *(ulonglong *)(auStack_11c + DAT_8c0dd9dc) = CONCAT44(DAT_8c0dd980,DAT_8c0dd97c);
  }
  iVar6 = 0;
  while (iVar7 = iVar6, iVar7 < 8) {
    pfStack_108 = (float *)(auStack_11c + iVar7 * 0x10 + DAT_8c0ddb08);
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0ddb0c,*pfStack_108);
    }
    else {
      in_xd0 = *(undefined8 *)pfStack_108;
      dVar12 = (double)CONCAT44(_DAT_8c0ddb10,DAT_8c0ddb0c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 * dVar12,0);
    }
    iStack_10c = iVar7;
    if (in_FPSCR_SZ == '\0') {
      *pfStack_108 = fVar9;
    }
    else {
      *(undefined8 *)pfStack_108 = in_xd0;
    }
    puStack_110 = auStack_11c + iVar7 * 0x10 + DAT_8c0ddb08;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0ddb0c,*(undefined4 *)(puStack_110 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(puStack_110 + 4);
      dVar12 = (double)CONCAT44(_DAT_8c0ddb10,DAT_8c0ddb0c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 * dVar12,0);
    }
    fStack_114 = (float)iVar7;
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puStack_110 + 4) = fVar9;
    }
    else {
      *(undefined8 *)(puStack_110 + 4) = in_xd0;
    }
    auStack_11c._4_4_ = auStack_11c + iVar7 * 0x10 + DAT_8c0ddb08;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(DAT_8c0ddb0c,*(undefined4 *)(auStack_11c._4_4_ + 8));
    }
    else {
      in_xd0 = *(undefined8 *)(auStack_11c._4_4_ + 8);
      dVar12 = (double)CONCAT44(_DAT_8c0ddb10,DAT_8c0ddb0c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar12 * dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(auStack_11c._4_4_ + 8) = fVar9;
    }
    else {
      *(undefined8 *)(auStack_11c._4_4_ + 8) = in_xd0;
    }
    auStack_11c._0_4_ = iVar7;
    iVar6 = iVar7 + 1;
  }
  iVar6 = *(int *)((int)ar4 + _DAT_8c0ddb10);
  a6 = *(code **)(iVar6 + 0x30);
  (*a6)((int *)((int)ar4 + _DAT_8c0ddb10),auStack_11c + DAT_8c0ddb08,a6,iVar6);
  *(undefined4 *)(DAT_8c0ddb14 + (int)ar4) = *(undefined4 *)PTR_PTR_8c0ddb18;
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(auStack_11c + DAT_8c0ddb1c,0xffffffff,a6,iVar6);
  puVar3 = PTR_Vec3_dtor_8c0ddb20;
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(auStack_11c + DAT_8c0ddb24,0xffffffff,a6,PTR_Vec3_dtor_8c0ddb20)
  ;
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(auStack_11c + DAT_8c0ddb28,0xffffffff,0xffffffff,puVar3);
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(auStack_11c + DAT_8c0ddb2c,0xffffffff,uVar4,puVar3);
  uVar4 = 0xffffffff;
  a4 = auStack_11c + DAT_8c0ddb30;
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(a4,0xffffffff,a4,0xffffffff);
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(auStack_11c + DAT_8c0ddb34,0xffffffff,a4,uVar4);
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(auStack_11c + DAT_8c0ddb38,0xffffffff,a4,uVar4);
  (*(code *)PTR_Vec3_dtor_8c0ddb20)(auStack_11c + DAT_8c0ddb08,0xffffffff,a4,uVar4);
  return ar4;
}



/* FUN_8c0ddb3c @ 8c0ddb3c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddb3c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_Class_129938_m0_017084_8c0ddbb4)(ar4 + DAT_8c0ddbb0,0xffffffff,ar6,ar7);
    (*(code *)PTR_Class_129938_m0_017084_8c0ddbb4)(ar4 + 0x30,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c0ddbb8)(ar4 + 0x24,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ddbbc)(ar4 + 0x14,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c0ddbbc)(ar4 + 4,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0ddbc0)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ddbc4)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0ddbc8 @ 8c0ddbc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddbc8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != 0) {
    a7 = 7;
    a6 = 4;
    (*(code *)PTR_vec_delete_array_8c0ddc2c)
              (ar4 + 0x2c,PTR_free_if_nonnull_wrap_0247b0_8c0ddc28,4,7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0ddc30)(ar4 + 0x28,0xffffffff,a6,a7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0ddc34)(ar4 + 0x20,0xffffffff,a6,a7);
    a5 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0ddc38)(ar4,0xffffffff,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ddc3c)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* FUN_8c0ddc40 @ 8c0ddc40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddc40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_0cffc8_8c0ddca4)(ar4 + DAT_8c0ddca0,0xffffffff,ar6,ar7);
    a6 = DAT_8c0ddcac;
    a7 = DAT_8c0ddca8;
    (*(code *)PTR_vec_delete_array_8c0ddcb4)(ar4 + 0xc,PTR_FUN_8c0ddcb0,DAT_8c0ddcac,DAT_8c0ddca8);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0ddcb8)(ar4 + 8,0xffffffff,a6,a7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0ddcbc)(ar4,0xffffffff,a6,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ddcc0)(ar4,a5,a6,a7);
    }
  }
  return ar4;
}



/* FUN_8c0ddcc4 @ 8c0ddcc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddcc4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0ddd08)(ar4 + 8,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0ddd0c)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ddd10)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0ddd14 @ 8c0ddd14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddd14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  
  if (ar4 != 0) {
    (*(code *)PTR_free_if_nonnull_wrap_0cffc8_8c0ddd64)(ar4 + 0x30,0xffffffff,ar6,ar7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0ddd68)(ar4 + 8,0xffffffff,ar6,ar7);
    a5 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0ddd6c)(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0ddd70)(ar4,a5,ar6,ar7);
    }
  }
  return ar4;
}



/* FUN_8c0ddd74 @ 8c0ddd74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ddd74(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 a7;
  
  if (ar4 != 0) {
    (*(code *)PTR_FUN_8c0dde44)(ar4 + DAT_8c0dde40,0xffffffff,ar6,ar7);
    (*(code *)PTR_vec_delete_array_8c0dde58)
              (ar4 + DAT_8c0dde54,PTR_FUN_8c0dde50,DAT_8c0dde4c,DAT_8c0dde48);
    (*(code *)PTR_vec_delete_array_8c0dde58)
              (ar4 + DAT_8c0dde60,PTR_free_if_nonnull_wrap_0cffc8_8c0dde5c,0x18,2);
    uVar2 = 5;
    uVar1 = 0x44;
    (*(code *)PTR_vec_delete_array_8c0dde58)(ar4 + DAT_8c0dde68,PTR_FUN_8c0dde64,0x44,5);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0dde70)(ar4 + DAT_8c0dde6c,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0dde78)(ar4 + DAT_8c0dde74,0xffffffff,uVar1,uVar2);
    (*(code *)PTR_FUN_8c0dde7c)(ar4 + 0x34,0xffffffff,uVar1,uVar2);
    a7 = 3;
    uVar2 = 4;
    (*(code *)PTR_vec_delete_array_8c0dde58)
              (ar4 + 0x20,PTR_free_if_nonnull_wrap_016bfc_8c0dde70,4,3);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0dde70)(ar4 + 0x1c,0xffffffff,uVar2,a7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0dde70)(ar4 + 0x10,0xffffffff,uVar2,a7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0dde78)(ar4 + 8,0xffffffff,uVar2,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0dde80)(ar4,uVar1,uVar2,a7);
    }
  }
  return ar4;
}



/* Class_12b930_m0_0dde84 @ 8c0dde84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b930_m0_0dde84(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 a7;
  
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = PTR_DAT_8c0ddfe8;
    (*(code *)PTR_vec_delete_array_8c0ddff4)
              ((int)ar4 + DAT_8c0ddff0,PTR_free_if_nonnull_wrap_0cffc8_8c0ddfec,0x18,2);
    uVar2 = 3;
    uVar1 = DAT_8c0ddff8;
    (*(code *)PTR_vec_delete_array_8c0ddff4)
              ((int)ar4 + DAT_8c0de000,PTR_FUN_8c0ddffc,DAT_8c0ddff8,3);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0de008)
              ((int)ar4 + DAT_8c0de004,0xffffffff,uVar1,uVar2);
    a7 = 0x6e;
    uVar2 = 0xc;
    (*(code *)PTR_vec_delete_array_8c0ddff4)
              ((int)ar4 + DAT_8c0de010,PTR_free_if_nonnull_wrap_0d6ef8_8c0de00c,0xc,0x6e);
    (*(code *)PTR_Vec3_dtor_8c0de018)((int)ar4 + DAT_8c0de014,0xffffffff,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c0de018)((int)ar4 + DAT_8c0de01c,0xffffffff,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c0de018)((int)ar4 + DAT_8c0de020,0xffffffff,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c0de018)((int)ar4 + DAT_8c0de024,0xffffffff,uVar2,a7);
    (*(code *)PTR_free_if_nonnull_wrap_0cfe48_8c0de02c)((int)ar4 + DAT_8c0de028,0xffffffff,uVar2,a7)
    ;
    (*(code *)PTR_FUN_8c0de034)((int)ar4 + DAT_8c0de030,0xffffffff,uVar2,a7);
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0de008)((int)ar4 + DAT_8c0de038,0xffffffff,uVar2,a7)
    ;
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0de040)((int)ar4 + DAT_8c0de03c,0xffffffff,uVar2,a7)
    ;
    (*(code *)PTR_FUN_8c0de048)((int)ar4 + DAT_8c0de044,0xffffffff,uVar2,a7);
    (*(code *)PTR_FUN_8c0de050)((int)ar4 + DAT_8c0de04c,0xffffffff,uVar2,a7);
    (*(code *)PTR_FUN_8c0de058)((int)ar4 + DAT_8c0de054,0xffffffff,uVar2,a7);
    (*(code *)PTR_FUN_8c0de060)((int)ar4 + DAT_8c0de05c,0xffffffff,uVar2,a7);
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0de040)((int)ar4 + DAT_8c0de064,0xffffffff,uVar2,a7)
    ;
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0de040)((int)ar4 + DAT_8c0de068,0xffffffff,uVar2,a7)
    ;
    (*(code *)PTR_free_if_nonnull_wrap_016bfc_8c0de040)((int)ar4 + DAT_8c0de06c,0xffffffff,uVar2,a7)
    ;
    (*(code *)PTR_free_if_nonnull_wrap_0153e4_8c0de008)((int)ar4 + DAT_8c0de070,0xffffffff,uVar2,a7)
    ;
    uVar1 = 0;
    (*(code *)PTR_Class_12bb08_m0_0da208_8c0de074)(ar4,0,uVar2,a7);
    if (0 < (short)ar5) {
      (*(code *)PTR_free_if_nonnull_8c0de078)(ar4,uVar1,uVar2,a7);
    }
  }
  return ar4;
}



/* FUN_8c0de07c @ 8c0de07c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de07c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int a6;
  undefined4 extraout_fr1;
  undefined4 extraout_fr0;
  char in_FPSCR_SZ;
  undefined8 uStack_20;
  
  (*(code *)PTR_s_GRAPHICS_ENV_0e16a0_8c0de12c)(ar4,ar5,ar6,ar7);
  a6 = ar4 + DAT_8c0de130;
  (*(code *)PTR_s_GRAPHICS_COMMON_0d33f4_8c0de138)(ar4 + DAT_8c0de134,ar5,a6,ar7);
  iVar1 = ar4 + DAT_8c0de13c;
  (*(code *)PTR_Vec3_ctor_copy_8c0de140)((int)&uStack_20 + 4,iVar1,a6,ar7);
  (*(code *)PTR_FUN_8c0de148)(ar4 + DAT_8c0de144,iVar1,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44(uStack_20._4_4_,extraout_fr0);
  }
  else {
    uStack_20 = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (*(code *)PTR_FUN_8c0de14c)(ar4 + DAT_8c0de134,(int)&uStack_20 + 4,a6,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0de150)((int)&uStack_20 + 4,0xffffffff,a6,ar7);
  if ((*(int *)(DAT_8c0de154 + ar4) == 1) || (*(int *)(DAT_8c0de158 + ar4) == 1)) {
    iVar1 = ar4 + DAT_8c0de134;
    (*(code *)PTR_FUN_8c0de15c)(iVar1,uVar2,a6,ar7);
  }
  else {
    iVar1 = ar4 + DAT_8c0de134;
    (*(code *)PTR_FUN_8c0de160)(iVar1,uVar2,a6,ar7);
  }
  (*(code *)PTR_FUN_8c0de164)(iVar1,uVar2,a6,ar7);
  uVar2 = (*(code *)PTR_thunk_FUN_8c20a1d0_8c0de16c)(DAT_8c0de168,uVar2,a6,ar7);
  return uVar2;
}



/* FUN_8c0de170 @ 8c0de170 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de170(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar4 + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0de18c @ 8c0de18c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de18c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_GRAPHICS_ENV_0e16a0_8c0de1c8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_s_GRAPHICS_COMMON_0d377a_8c0de1d0)(ar4 + DAT_8c0de1cc,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_s_GRAPHICS_ENV_0d0bd2_8c0de1d8)(ar4 + DAT_8c0de1d4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12b930_m1_0de1dc @ 8c0de1dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b930_m1_0de1dc(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *a6;
  int iVar3;
  float fVar4;
  double in_dr0;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [12];
  
  iVar2 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c0de364)(auStack_20,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0de364)(auStack_30,iVar2,a6,ar7);
  if (*(int *)(DAT_8c0de368 + ar4) == 2) {
    ar7 = auStack_18;
    a6 = auStack_1c;
    (*(code *)PTR_FUN_8c0de370)(ar4 + DAT_8c0de36c,auStack_20,a6,ar7);
    iVar2 = ar4 + DAT_8c0de374;
    (*(code *)PTR_Vec3_assign_8c0de378)(auStack_30,iVar2,a6,ar7);
    (**(code **)(DAT_8c0de380 + *(int *)(*(int *)(DAT_8c0de37c + ar4) + 8)))
              (*(int *)(DAT_8c0de37c + ar4),iVar2,a6,ar7);
    uVar1 = uStack_28;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(int)uStack_28);
      uVar1 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar4 = SUB84(in_dr0 - in_dr0,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uStack_28 = CONCAT44(uStack_28._4_4_,fVar4);
      uVar1 = uStack_28;
    }
    uStack_28 = uVar1;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      ar7 = auStack_20;
      a6 = auStack_30;
      iVar2 = ar4 + DAT_8c0de384;
      (*(code *)PTR_FUN_8c0de390)(ar4 + iVar3 * DAT_8c0de388 + DAT_8c0de38c,iVar2,a6,ar7);
    }
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    (*(code *)PTR_FUN_8c0de394)(ar4 + iVar3 * DAT_8c0de388 + DAT_8c0de38c,iVar2,a6,ar7);
  }
  (*(code *)PTR_FUN_8c0de398)(ar4,iVar2,a6,ar7);
  (*(code *)PTR_FUN_8c0de3a0)(ar4 + DAT_8c0de39c,iVar2,a6,ar7);
  iVar2 = ar5;
  (*(code *)PTR_FUN_8c0de3a8)(ar4 + DAT_8c0de3a4,ar5,a6,ar7);
  (*(code *)PTR_get_field_a0_035724_8c0de3ac)(ar5,iVar2,a6,ar7);
  (*(code *)PTR_pure_virtual_stub_8c0de3b4)(ar4,ar5,a6,ar7);
  (*(code *)PTR_Class_12bb08_m1_0da338_8c0de3b8)(ar4,ar5,ar6,ar7);
  iVar2 = ar4 + DAT_8c0de3bc;
  (*(code *)PTR_FUN_8c0de3c0)(ar4,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0de3c4)(ar4 + DAT_8c0de384,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0de3c8)(ar4,iVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0de3cc)(ar4 + DAT_8c0de39c,iVar2,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0de3d0)(auStack_30,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0de3d0)(auStack_20,0xffffffff,ar6,ar7);
  return 1;
}



/* Class_12b930_m2_0de3d4 @ 8c0de3d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b930_m2_0de3d4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  undefined4 a6;
  int iVar1;
  
  a5 = ar5;
  a6 = ar6;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (*(code *)PTR_FUN_8c0de484)(ar4 + iVar1 * DAT_8c0de47c + DAT_8c0de480,a5,a6,ar7);
  }
  (*(code *)PTR_FUN_8c0de48c)(ar4 + DAT_8c0de488,a5,a6,ar7);
  iVar1 = ar4 + DAT_8c0de490;
  (*(code *)PTR_FUN_8c0de498)(ar4 + DAT_8c0de494,iVar1,a6,ar7);
  (*(code *)PTR_get_field_a0_035724_8c0de49c)(ar5,iVar1,a6,ar7);
  (*(code *)PTR_pure_virtual_stub_8c0de4a4)(ar4,ar5,a6,ar7);
  (*(code *)PTR_Class_12bb08_m2_0da5a8_8c0de4a8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0de4ac)(ar4,ar5,ar6,ar7);
  return 1;
}



/* Class_12b930_m3_0de4b0 @ 8c0de4b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b930_m3_0de4b0(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_2c [16];
  
  iVar4 = ar5;
  uVar3 = ar6;
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0de644)(ar4 + DAT_8c0de640,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c0de648)(auStack_2c,iVar4,uVar3,ar7);
  a4 = (*(code *)PTR_FUN_8c0de64c)(ar4 + DAT_8c0de640,iVar4,uVar3,ar7);
  (*(code *)PTR_FUN_8c0de650)(ar4,iVar4,uVar3,ar7);
  (*(code *)PTR_FUN_8c0de658)(ar4 + DAT_8c0de654,iVar4,uVar3,ar7);
  (*(code *)PTR_FUN_8c0de660)(ar4 + DAT_8c0de65c,iVar4,uVar3,ar7);
  iVar4 = ar5;
  (*(code *)PTR_FUN_8c0de668)(ar4 + DAT_8c0de664,ar5,uVar3,ar7);
  (*(code *)PTR_FUN_8c0de670)(ar4 + DAT_8c0de654,iVar4,uVar3,ar7);
  (*(code *)PTR_FUN_8c0de67c)(ar4 + DAT_8c0de674._4_4_,iVar4,uVar3,ar7);
  *DAT_8c0de680 = iVar1;
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar5;
    uVar3 = ar6;
    ar7 = ar4;
    (**(code **)(*(int *)(iVar6 + 8) + 0x10))(iVar6,ar5,ar6,ar4);
    iVar6 = (*(code *)PTR_list_node_next_8c0de684)(iVar6,iVar4,uVar3,ar7);
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar4;
    (*(code *)PTR_FUN_8c0de688)(iVar6,ar4,uVar3,ar7);
    iVar6 = (*(code *)PTR_list_node_next_8c0de684)(iVar6,iVar4,uVar3,ar7);
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar2 = (*(code *)PTR_FUN_8c0de68c)(iVar6,iVar4,uVar3,ar7);
    if (iVar2 == 1) {
      iVar4 = ar4;
      (*(code *)PTR_FUN_8c0de690)(iVar6,ar4,uVar3,ar7);
    }
    iVar6 = (*(code *)PTR_list_node_next_8c0de684)(iVar6,iVar4,uVar3,ar7);
  }
  for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
    iVar4 = ar4;
    (**(code **)(*(int *)(a4 + 8) + 0x28))(a4,ar4,uVar3,ar7);
    a4 = (*(code *)PTR_list_node_next_8c0de684)(a4,iVar4,uVar3,ar7);
  }
  (*(code *)PTR_FUN_8c0de694)(ar4,iVar4,uVar3,ar7);
  (*(code *)PTR_FUN_8c0de69c)(ar4,ar4 + DAT_8c0de698,uVar3,ar7);
  iVar4 = ar4 + DAT_8c0de6a0;
  (*(code *)PTR_FUN_8c0de6a4)(ar4 + DAT_8c0de698,iVar4,uVar3,ar7);
  (*(code *)PTR_FUN_8c0de6a8)(ar4,iVar4,uVar3,ar7);
  uVar3 = (*(code *)PTR_object_dtor_delete_8c0de6ac)(auStack_2c,0xffffffff,uVar3,ar7);
  return uVar3;
}



/* FUN_8c0de6b0 @ 8c0de6b0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de6b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint in_fr1;
  undefined4 in_fr5;
  float in_fr4;
  bool bVar1;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_PR == '\0') {
    bVar1 = in_fr4 < 0.0;
  }
  else {
    bVar1 = (double)CONCAT44(in_fr4,in_fr5) < (double)(ulonglong)in_fr1;
  }
  if (bVar1) {
    in_fr4 = 0.0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0xc) = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = CONCAT44(in_fr4,in_fr5);
  }
  return in_r0;
}



/* FUN_8c0de6c0 @ 8c0de6c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de6c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint in_fr1;
  undefined4 in_fr5;
  float in_fr4;
  bool bVar1;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_PR == '\0') {
    bVar1 = in_fr4 < 0.0;
  }
  else {
    bVar1 = (double)CONCAT44(in_fr4,in_fr5) < (double)(ulonglong)in_fr1;
  }
  if (bVar1) {
    in_fr4 = 0.0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0xc) = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = CONCAT44(in_fr4,in_fr5);
  }
  return in_r0;
}



/* FUN_8c0de6d0 @ 8c0de6d0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0de6d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  float fVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*DAT_8c0de74c == '\0') {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44((undefined4)DAT_8c0de754,(int)in_dr0);
      *(undefined4 *)DAT_8c0de750 = (undefined4)DAT_8c0de754;
    }
    else {
      in_dr0 = CONCAT44(DAT_8c0de754._4_4_,(undefined4)DAT_8c0de754);
      *DAT_8c0de750 = in_dr0;
    }
    *DAT_8c0de74c = '\x01';
  }
  if (*DAT_8c0de754._4_4_ == '\0') {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(DAT_8c0de760,(int)in_dr0);
      *(undefined4 *)DAT_8c0de75c = DAT_8c0de760;
    }
    else {
      in_dr0 = CONCAT44(PTR_FUN_8c0de764,DAT_8c0de760);
      *DAT_8c0de75c = in_dr0;
    }
    *DAT_8c0de754._4_4_ = '\x01';
  }
  puVar5 = &uStack_20;
  (*(code *)PTR_FUN_8c0de764)(puVar5,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0de768 + ar4) != 0) {
    (*(code *)PTR_FUN_8c0de76c)(puVar5,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0de778)(ar4 + DAT_8c0de770._4_4_,ar5,ar6,ar7);
  }
  if (*(int *)(DAT_8c0de768 + ar4) == 2) {
    if (*(int *)(DAT_8c0de77c + ar4) == 0) {
      (*(code *)PTR_FUN_8c0de7a4)(ar4 + DAT_8c0de7a0,ar5,ar6,ar7);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        fVar6 = fStack_38;
      }
      fStack_38 = fVar6;
      (*(code *)PTR_FUN_8c0de7ac)(PTR_DAT_8c0de7a8,ar5,ar6,ar7);
    }
    else if (*(int *)(DAT_8c0de77c + ar4) == 1) {
      (*(code *)PTR_FUN_8c0de8c0)(ar4 + DAT_8c0de8bc,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0de8c8)(PTR_DAT_8c0de8c4,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)in_dr0;
  (*(code *)PTR_FUN_8c0de8cc)(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + DAT_8c0de8d0;
  (*(code *)PTR_Vec3_ctor_copy_8c0de8d4)(auStack_30,iVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c0de8c0)(ar4 + DAT_8c0de8bc,iVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c0de8dc)(ar4 + DAT_8c0de8d8,auStack_30,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0de8e0)(auStack_30,0xffffffff,ar6,ar7);
  iVar4 = ar4 + 0x7c;
  iVar3 = ar4 + 0x78;
  (*(code *)PTR_FUN_8c0de8e8)(ar4,iVar3,iVar4,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    uVar7 = CONCAT44(uStack_1c,uVar2);
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uVar7 = *(undefined8 *)(ar4 + 0x7c);
    uStack_1c = (undefined4)uVar7;
    iStack_18 = (int)((ulonglong)uVar7 >> 0x20);
  }
  iStack_14 = ar4 + DAT_8c0de8d0;
  (*(code *)PTR_FUN_8c0de8c0)(ar4 + DAT_8c0de8bc,iVar3,iVar4,ar7);
  iStack_18 = (int)uVar7;
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    iStack_18 = iVar3;
    iVar3 = iStack_14;
  }
  iStack_14 = iVar3;
  puVar5 = &uStack_20;
  (*(code *)PTR_FUN_8c0de8ec)(ar4 + DAT_8c0de8d8,puVar5,iVar4,ar7);
  (*(code *)PTR_FUN_8c0de8f0)(ar4,puVar5,iVar4,ar7);
  puVar5 = &uStack_20;
  iVar3 = ar4 + DAT_8c0de8f4;
  (*(code *)PTR_FUN_8c0de8f8)(ar4 + DAT_8c0de8d8,iVar3,puVar5,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)DAT_8c0de8e4 = (int)((ulonglong)uVar7 >> 0x20);
  }
  else {
    *DAT_8c0de8e4 = uVar7;
  }
  (*(code *)PTR_FUN_8c0de900)(ar4 + DAT_8c0de8fc,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    (*(code *)PTR_FUN_8c0dea54)(&fStack_38,iVar3,puVar5,ar7);
    fVar6 = DAT_8c0dea58;
    fVar8 = DAT_8c0dea5c;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = fStack_38;
      fVar8 = DAT_8c0dea58;
    }
    if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
      fVar6 = DAT_8c0dea5c;
      fVar8 = DAT_8c0dea60;
      if (in_FPSCR_SZ == '\0') {
        fVar6 = fStack_38;
        fVar8 = DAT_8c0dea5c;
      }
      if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
        fVar6 = DAT_8c0dea60;
        fVar8 = DAT_8c0dea64;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = fStack_34;
          fVar8 = DAT_8c0dea60;
        }
        if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
          fVar6 = DAT_8c0dea64;
          fVar8 = DAT_8c0dea68;
          if (in_FPSCR_SZ == '\0') {
            fVar6 = fStack_34;
            fVar8 = DAT_8c0dea64;
          }
          if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
            (*(code *)PTR_FUN_8c0dea6c)
                      (ar4 + iVar4 * DAT_8c0dea44 + (int)DAT_8c0dea68,iVar3,puVar5,ar7);
          }
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c0dea70)(ar4,iVar3,puVar5,ar7);
  (*(code *)PTR_FUN_8c0dea54)(&fStack_38,iVar3,puVar5,ar7);
  fVar6 = DAT_8c0dea58;
  fVar8 = DAT_8c0dea5c;
  if (in_FPSCR_SZ == '\0') {
    fVar6 = fStack_38;
    fVar8 = DAT_8c0dea58;
  }
  if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
    fVar6 = DAT_8c0dea5c;
    fVar8 = DAT_8c0dea60;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = fStack_38;
      fVar8 = DAT_8c0dea5c;
    }
    if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
      fVar6 = DAT_8c0dea60;
      fVar8 = DAT_8c0dea64;
      if (in_FPSCR_SZ == '\0') {
        fVar6 = fStack_34;
        fVar8 = DAT_8c0dea60;
      }
      if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
        fVar6 = DAT_8c0dea64;
        fVar8 = DAT_8c0dea68;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = fStack_34;
          fVar8 = DAT_8c0dea64;
        }
        if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
          (*(code *)PTR_FUN_8c0dea84)(ar4 + _DAT_8c0dea80,iVar3,puVar5,ar7);
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c0dea54)(&fStack_38,iVar3,puVar5,ar7);
  fVar6 = _DAT_8c0dea94;
  fVar8 = DAT_8c0dea98;
  if (in_FPSCR_SZ == '\0') {
    fVar6 = fStack_38;
    fVar8 = _DAT_8c0dea94;
  }
  if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
    iVar3 = ar4 + (int)DAT_8c0dea98;
    (*(code *)PTR_FUN_8c0dea9c)(ar4,iVar3,puVar5,ar7);
  }
  (*(code *)PTR_FUN_8c0deaa4)(ar4 + DAT_8c0deaa0,iVar3,puVar5,ar7);
  (*(code *)PTR_FUN_8c0deaac)(ar4 + DAT_8c0deaa8,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0deb20)(ar4 + iVar4 * 0x68 + DAT_8c0deb1c,iVar3,puVar5,ar7);
    if (iVar1 == 1) {
      puVar5 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      (*(code *)PTR_FUN_8c0deb24)(ar4 + iVar4 * 0x68 + DAT_8c0deb1c,iVar3,puVar5,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0deb28)(ar4,iVar3,puVar5,ar7);
  uVar2 = (*(code *)PTR_free_if_nonnull_wrap_0deb30_8c0deb2c)(&uStack_20,0xffffffff,puVar5,ar7);
  return uVar2;
}



/* free_if_nonnull_wrap_0deb30 @ 8c0deb30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int free_if_nonnull_wrap_0deb30(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (0 < (short)ar5)) {
    (*(code *)PTR_free_if_nonnull_8c0deb5c)(ar4,ar5,ar6,ar7);
  }
  return ar4;
}



/* FUN_8c0deb60 @ 8c0deb60 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0deb60(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  float fVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  puVar5 = &uStack_20;
  (*(code *)PTR_FUN_8c0debac)(puVar5,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0debb0 + ar4) != 0) {
    (*(code *)PTR_FUN_8c0debb4)(puVar5,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0debc0)(ar4 + DAT_8c0debb8._4_4_,ar5,ar6,ar7);
  }
  if (*(int *)(DAT_8c0debb0 + ar4) == 2) {
    if (*(int *)(DAT_8c0debc4 + ar4) == 0) {
      (*(code *)PTR_FUN_8c0debec)(ar4 + DAT_8c0debe8,ar5,ar6,ar7);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        fVar6 = fStack_38;
      }
      fStack_38 = fVar6;
      (*(code *)PTR_FUN_8c0debf4)(PTR_DAT_8c0debf0,ar5,ar6,ar7);
    }
    else if (*(int *)(DAT_8c0debc4 + ar4) == 1) {
      (*(code *)PTR_FUN_8c0ded10)(ar4 + DAT_8c0ded0c,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0ded18)(PTR_DAT_8c0ded14,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)in_dr0;
  (*(code *)PTR_FUN_8c0ded1c)(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + DAT_8c0ded20;
  (*(code *)PTR_Vec3_ctor_copy_8c0ded24)(auStack_30,iVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c0ded10)(ar4 + DAT_8c0ded0c,iVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c0ded2c)(ar4 + DAT_8c0ded28,auStack_30,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0ded30)(auStack_30,0xffffffff,ar6,ar7);
  iVar4 = ar4 + 0x7c;
  iVar3 = ar4 + 0x78;
  (*(code *)PTR_FUN_8c0ded38)(ar4,iVar3,iVar4,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    uVar7 = CONCAT44(uStack_1c,uVar2);
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uVar7 = *(undefined8 *)(ar4 + 0x7c);
    uStack_1c = (undefined4)uVar7;
    iStack_18 = (int)((ulonglong)uVar7 >> 0x20);
  }
  iStack_14 = ar4 + DAT_8c0ded20;
  (*(code *)PTR_FUN_8c0ded10)(ar4 + DAT_8c0ded0c,iVar3,iVar4,ar7);
  iStack_18 = (int)uVar7;
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    iStack_18 = iVar3;
    iVar3 = iStack_14;
  }
  iStack_14 = iVar3;
  puVar5 = &uStack_20;
  (*(code *)PTR_FUN_8c0ded3c)(ar4 + DAT_8c0ded28,puVar5,iVar4,ar7);
  (*(code *)PTR_FUN_8c0ded40)(ar4,puVar5,iVar4,ar7);
  puVar5 = &uStack_20;
  iVar3 = ar4 + DAT_8c0ded44;
  (*(code *)PTR_FUN_8c0ded48)(ar4 + DAT_8c0ded28,iVar3,puVar5,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)DAT_8c0ded34 = (int)((ulonglong)uVar7 >> 0x20);
  }
  else {
    *DAT_8c0ded34 = uVar7;
  }
  (*(code *)PTR_FUN_8c0ded4c)(ar4,iVar3,puVar5,ar7);
  (*(code *)PTR_FUN_8c0ded54)(ar4 + DAT_8c0ded50,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    (*(code *)PTR_FUN_8c0deea0)(&fStack_38,iVar3,puVar5,ar7);
    fVar6 = DAT_8c0deea4;
    fVar8 = DAT_8c0deea8;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = fStack_38;
      fVar8 = DAT_8c0deea4;
    }
    if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
      fVar6 = DAT_8c0deea8;
      fVar8 = DAT_8c0deeac;
      if (in_FPSCR_SZ == '\0') {
        fVar6 = fStack_38;
        fVar8 = DAT_8c0deea8;
      }
      if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
        fVar6 = DAT_8c0deeac;
        fVar8 = DAT_8c0deeb0;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = fStack_34;
          fVar8 = DAT_8c0deeac;
        }
        if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
          fVar6 = DAT_8c0deeb0;
          fVar8 = DAT_8c0deeb4;
          if (in_FPSCR_SZ == '\0') {
            fVar6 = fStack_34;
            fVar8 = DAT_8c0deeb0;
          }
          if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
            (*(code *)PTR_FUN_8c0deeb8)
                      (ar4 + iVar4 * DAT_8c0dee90 + (int)DAT_8c0deeb4,iVar3,puVar5,ar7);
          }
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c0deea0)(&fStack_38,iVar3,puVar5,ar7);
  fVar6 = DAT_8c0deea4;
  fVar8 = DAT_8c0deea8;
  if (in_FPSCR_SZ == '\0') {
    fVar6 = fStack_38;
    fVar8 = DAT_8c0deea4;
  }
  if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
    fVar6 = DAT_8c0deea8;
    fVar8 = DAT_8c0deeac;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = fStack_38;
      fVar8 = DAT_8c0deea8;
    }
    if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
      fVar6 = DAT_8c0deeac;
      fVar8 = DAT_8c0deeb0;
      if (in_FPSCR_SZ == '\0') {
        fVar6 = fStack_34;
        fVar8 = DAT_8c0deeac;
      }
      if (in_FPSCR_PR != '\0' || fVar8 <= fVar6) {
        fVar6 = DAT_8c0deeb0;
        fVar8 = DAT_8c0deeb4;
        if (in_FPSCR_SZ == '\0') {
          fVar6 = fStack_34;
          fVar8 = DAT_8c0deeb0;
        }
        if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
          (*(code *)PTR_FUN_8c0deecc)(ar4 + _DAT_8c0deec8,iVar3,puVar5,ar7);
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c0deea0)(&fStack_38,iVar3,puVar5,ar7);
  fVar6 = _DAT_8c0deedc;
  fVar8 = DAT_8c0deee0;
  if (in_FPSCR_SZ == '\0') {
    fVar6 = fStack_38;
    fVar8 = _DAT_8c0deedc;
  }
  if (in_FPSCR_PR != '\0' || fVar6 <= fVar8) {
    iVar3 = ar4 + (int)DAT_8c0deee0;
    (*(code *)PTR_FUN_8c0deee4)(ar4,iVar3,puVar5,ar7);
  }
  (*(code *)PTR_FUN_8c0deeec)(ar4 + DAT_8c0deee8,iVar3,puVar5,ar7);
  (*(code *)PTR_FUN_8c0deef4)(ar4 + DAT_8c0deef0,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0def68)(ar4 + iVar4 * 0x68 + DAT_8c0def64,iVar3,puVar5,ar7);
    if (iVar1 == 1) {
      puVar5 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      (*(code *)PTR_FUN_8c0def6c)(ar4 + iVar4 * 0x68 + DAT_8c0def64,iVar3,puVar5,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0def70)(ar4,iVar3,puVar5,ar7);
  uVar2 = (*(code *)PTR_free_if_nonnull_wrap_0deb30_8c0def74)(&uStack_20,0xffffffff,puVar5,ar7);
  return uVar2;
}



/* FUN_8c0def78 @ 8c0def78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0def78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 in_dr0;
  undefined *puVar7;
  char in_FPSCR_SZ;
  undefined4 auStack_2c [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  int iStack_10;
  
  puVar4 = &uStack_1c;
  (*(code *)PTR_FUN_8c0df1a0)(puVar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0df1a4 + ar4) != 0) {
    (*(code *)PTR_FUN_8c0df1a8)(puVar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0df1b4)(ar4 + DAT_8c0df1ac._4_4_,ar5,ar6,ar7);
  }
  if (*(int *)(DAT_8c0df1a4 + ar4) == 2) {
    if (*(int *)(DAT_8c0df1b8 + ar4) == 0) {
      (*(code *)PTR_FUN_8c0df1c0)(ar4 + DAT_8c0df1bc,ar5,ar6,ar7);
      uVar2 = (int)((ulonglong)in_dr0 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        uVar2 = auStack_2c[0];
      }
      auStack_2c[0] = uVar2;
      (*(code *)PTR_FUN_8c0df1c8)(PTR_DAT_8c0df1c4,ar5,ar6,ar7);
    }
    else if (*(int *)(DAT_8c0df1b8 + ar4) == 1) {
      (*(code *)PTR_FUN_8c0df1d0)(ar4 + DAT_8c0df1cc,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0df1c8)(PTR_DAT_8c0df1d4,ar5,ar6,ar7);
    }
  }
  puVar6 = (undefined *)in_dr0;
  (*(code *)PTR_FUN_8c0df1d8)(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + DAT_8c0df1dc;
  (*(code *)PTR_Vec3_ctor_copy_8c0df1e0)(auStack_2c,iVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c0df1d0)(ar4 + DAT_8c0df1cc,iVar3,ar6,ar7);
  (*(code *)PTR_FUN_8c0df1e8)(ar4 + DAT_8c0df1e4,auStack_2c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0df1ec)(auStack_2c,0xffffffff,ar6,ar7);
  iVar3 = ar4 + 0x7c;
  (*(code *)PTR_FUN_8c0df1f4)(ar4,ar4 + 0x78,iVar3,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = *(undefined4 *)(ar4 + 0x78);
    uStack_18 = *(undefined4 *)(ar4 + 0x7c);
    puVar7 = DAT_8c0df1f8;
  }
  else {
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    puVar6 = DAT_8c0df1f8;
    puVar7 = PTR_FUN_8c0df1fc;
  }
  puStack_14 = DAT_8c0df1f8;
  iStack_10 = ar4 + DAT_8c0df1dc;
  puVar4 = &uStack_1c;
  (*(code *)PTR_FUN_8c0df1fc)(ar4 + DAT_8c0df1e4,puVar4,iVar3,ar7);
  (*(code *)PTR_FUN_8c0df200)(ar4,puVar4,iVar3,ar7);
  puVar4 = &uStack_1c;
  iVar3 = ar4 + DAT_8c0df204;
  (*(code *)PTR_FUN_8c0df208)(ar4 + DAT_8c0df1e4,iVar3,puVar4,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined **)DAT_8c0df1f0 = puVar7;
  }
  else {
    *DAT_8c0df1f0 = CONCAT44(puVar7,puVar6);
  }
  (*(code *)PTR_FUN_8c0df20c)(ar4,iVar3,puVar4,ar7);
  (*(code *)PTR_FUN_8c0df214)(ar4 + DAT_8c0df210,iVar3,puVar4,ar7);
  (*(code *)PTR_FUN_8c0df218)(ar4 + DAT_8c0df204,iVar3,puVar4,ar7);
  (*(code *)PTR_FUN_8c0df218)(ar4 + DAT_8c0df21c,iVar3,puVar4,ar7);
  (*(code *)PTR_FUN_8c0df218)(ar4 + DAT_8c0df220,iVar3,puVar4,ar7);
  (*(code *)PTR_FUN_8c0df224)(ar4 + DAT_8c0df1cc,iVar3,puVar4,ar7);
  (*(code *)PTR_FUN_8c0df228)(ar4 + DAT_8c0df1bc,iVar3,puVar4,ar7);
  iVar3 = ar4 + DAT_8c0df22c;
  (*(code *)PTR_FUN_8c0df230)(ar4,iVar3,puVar4,ar7);
  (*(code *)PTR_FUN_8c0df238)(ar4 + DAT_8c0df234,iVar3,puVar4,ar7);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0df240)(ar4 + iVar5 * 0x68 + DAT_8c0df23c,iVar3,puVar4,ar7);
    if (iVar1 == 1) {
      puVar4 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      (*(code *)PTR_FUN_8c0df244)(ar4 + iVar5 * 0x68 + DAT_8c0df23c,iVar3,puVar4,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0df248)(ar4,iVar3,puVar4,ar7);
  uVar2 = (*(code *)PTR_free_if_nonnull_wrap_0deb30_8c0df24c)(&uStack_1c,0xffffffff,puVar4,ar7);
  return uVar2;
}



/* FUN_8c0df250 @ 8c0df250 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df250(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int a6;
  int iVar4;
  undefined4 in_fr1;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  (*(code *)PTR_FUN_8c0df2d4)(&uStack_20,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0df2d8)(&uStack_30,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_30 = *(undefined4 *)(ar4 + DAT_8c0df2dc);
  }
  else {
    uStack_30 = (undefined4)*(undefined8 *)(ar4 + DAT_8c0df2dc);
    in_fr1 = uStack_30;
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_2c = *(undefined4 *)(ar4 + DAT_8c0df2e0);
  }
  else {
    uStack_2c = (undefined4)*(undefined8 *)(ar4 + DAT_8c0df2e0);
    in_fr1 = uStack_2c;
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_28 = *(undefined4 *)(ar4 + DAT_8c0df2e4);
    uVar6 = CONCAT44(uStack_28,in_fr1);
  }
  else {
    uVar6 = *(undefined8 *)(ar4 + DAT_8c0df2e4);
    uStack_28 = (undefined4)uVar6;
    uStack_24 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  iVar4 = ar4;
  (*(code *)PTR_FUN_8c0df2e8)(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0df2ec + ar4) != 0) {
    (*(code *)PTR_FUN_8c0df2f0)(iVar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0df2fc)(ar4 + DAT_8c0df2f4._4_4_,ar5,ar6,ar7);
  }
  if (*(int *)(DAT_8c0df2ec + ar4) == 2) {
    if (*(int *)(DAT_8c0df300 + ar4) == 0) {
      (*(code *)PTR_FUN_8c0df328)(ar4 + DAT_8c0df324,ar5,ar6,ar7);
      fVar5 = (float)((ulonglong)uVar6 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        fVar5 = fStack_38;
      }
      fStack_38 = fVar5;
      (*(code *)PTR_FUN_8c0df330)(PTR_DAT_8c0df32c,ar5,ar6,ar7);
    }
    else if (*(int *)(DAT_8c0df300 + ar4) == 4) {
      (*(code *)PTR_FUN_8c0df3f8)(ar4 + DAT_8c0df3f4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0df400)(PTR_DAT_8c0df3fc,ar5,ar6,ar7);
    }
  }
  iVar4 = (int)uVar6;
  a6 = ar4 + 0x7c;
  (*(code *)PTR_FUN_8c0df408)(ar4,ar4 + 0x78,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    iVar1 = DAT_8c0df40c;
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    iVar4 = DAT_8c0df40c;
    iVar1 = DAT_8c0df410;
  }
  iStack_18 = DAT_8c0df40c;
  iStack_14 = ar4 + DAT_8c0df410;
  puVar3 = &uStack_20;
  (*(code *)PTR_FUN_8c0df418)(ar4 + DAT_8c0df414,puVar3,a6,ar7);
  (*(code *)PTR_FUN_8c0df41c)(ar4,puVar3,a6,ar7);
  puVar3 = &uStack_20;
  (*(code *)PTR_FUN_8c0df420)(ar4 + DAT_8c0df414,puVar3,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *DAT_8c0df404 = iVar1;
  }
  else {
    *(ulonglong *)DAT_8c0df404 = CONCAT44(iVar1,iVar4);
  }
  (*(code *)PTR_FUN_8c0df424)(ar4,puVar3,a6,ar7);
  (*(code *)PTR_FUN_8c0df42c)(ar4 + DAT_8c0df428,puVar3,a6,ar7);
  (*(code *)PTR_FUN_8c0df434)(ar4 + DAT_8c0df430,puVar3,a6,ar7);
  for (iVar4 = 1; iVar4 < 3; iVar4 = iVar4 + 1) {
    (*(code *)PTR_FUN_8c0df580)(&fStack_38,puVar3,a6,ar7);
    fVar5 = DAT_8c0df584;
    fVar7 = DAT_8c0df588;
    if (in_FPSCR_SZ == '\0') {
      fVar5 = fStack_38;
      fVar7 = DAT_8c0df584;
    }
    if (in_FPSCR_PR != '\0' || fVar7 <= fVar5) {
      fVar5 = DAT_8c0df588;
      fVar7 = DAT_8c0df58c;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = fStack_38;
        fVar7 = DAT_8c0df588;
      }
      if (in_FPSCR_PR != '\0' || fVar5 <= fVar7) {
        fVar5 = DAT_8c0df58c;
        fVar7 = DAT_8c0df590;
        if (in_FPSCR_SZ == '\0') {
          fVar5 = fStack_34;
          fVar7 = DAT_8c0df58c;
        }
        if (in_FPSCR_PR != '\0' || fVar7 <= fVar5) {
          fVar5 = DAT_8c0df590;
          fVar7 = DAT_8c0df594;
          if (in_FPSCR_SZ == '\0') {
            fVar5 = fStack_34;
            fVar7 = DAT_8c0df590;
          }
          if (in_FPSCR_PR != '\0' || fVar5 <= fVar7) {
            (*(code *)PTR_FUN_8c0df598)
                      (ar4 + iVar4 * DAT_8c0df570 + (int)DAT_8c0df594,puVar3,a6,ar7);
          }
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c0df580)(&fStack_38,puVar3,a6,ar7);
  fVar5 = DAT_8c0df584;
  fVar7 = DAT_8c0df588;
  if (in_FPSCR_SZ == '\0') {
    fVar5 = fStack_38;
    fVar7 = DAT_8c0df584;
  }
  if (in_FPSCR_PR != '\0' || fVar7 <= fVar5) {
    fVar5 = DAT_8c0df588;
    fVar7 = DAT_8c0df58c;
    if (in_FPSCR_SZ == '\0') {
      fVar5 = fStack_38;
      fVar7 = DAT_8c0df588;
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar7) {
      fVar5 = DAT_8c0df58c;
      fVar7 = DAT_8c0df590;
      if (in_FPSCR_SZ == '\0') {
        fVar5 = fStack_34;
        fVar7 = DAT_8c0df58c;
      }
      if (in_FPSCR_PR != '\0' || fVar7 <= fVar5) {
        fVar5 = DAT_8c0df590;
        fVar7 = DAT_8c0df594;
        if (in_FPSCR_SZ == '\0') {
          fVar5 = fStack_34;
          fVar7 = DAT_8c0df590;
        }
        if (in_FPSCR_PR != '\0' || fVar5 <= fVar7) {
          (*(code *)PTR_FUN_8c0df5ac)(ar4 + _DAT_8c0df5a8,puVar3,a6,ar7);
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c0df580)(&fStack_38,puVar3,a6,ar7);
  fVar5 = _DAT_8c0df5bc;
  fVar7 = DAT_8c0df5c0;
  if (in_FPSCR_SZ == '\0') {
    fVar5 = fStack_38;
    fVar7 = _DAT_8c0df5bc;
  }
  if (in_FPSCR_PR != '\0' || fVar5 <= fVar7) {
    puVar3 = (undefined4 *)(ar4 + (int)DAT_8c0df5c0);
    (*(code *)PTR_FUN_8c0df5c4)(ar4,puVar3,a6,ar7);
  }
  (*(code *)PTR_FUN_8c0df5cc)(ar4 + DAT_8c0df5c8,puVar3,a6,ar7);
  (*(code *)PTR_FUN_8c0df5d4)(ar4 + DAT_8c0df5d0,puVar3,a6,ar7);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0df654)(ar4 + iVar4 * 0x68 + DAT_8c0df650,puVar3,a6,ar7);
    if (iVar1 == 1) {
      a6 = ar4 + 4;
      puVar3 = (undefined4 *)(ar4 + 0xc);
      (*(code *)PTR_FUN_8c0df658)(ar4 + iVar4 * 0x68 + DAT_8c0df650,puVar3,a6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0df65c)(ar4,puVar3,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0df660)(&uStack_30,0xffffffff,a6,ar7);
  uVar2 = (*(code *)PTR_free_if_nonnull_wrap_0deb30_8c0df664)(&uStack_20,0xffffffff,a6,ar7);
  return uVar2;
}



/* FUN_8c0df668 @ 8c0df668 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df668(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_fr1;
  undefined8 uVar7;
  char in_FPSCR_SZ;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  (*(code *)PTR_FUN_8c0df830)(&uStack_1c,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0df834)(&iStack_2c,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    iStack_2c = *(int *)(ar4 + DAT_8c0df838);
  }
  else {
    iStack_2c = (int)*(undefined8 *)(ar4 + DAT_8c0df838);
    in_fr1 = iStack_2c;
  }
  if (in_FPSCR_SZ == '\0') {
    iStack_28 = *(int *)(ar4 + DAT_8c0df83c);
  }
  else {
    iStack_28 = (int)*(undefined8 *)(ar4 + DAT_8c0df83c);
    in_fr1 = iStack_28;
  }
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = *(undefined4 *)(ar4 + DAT_8c0df840);
    uVar7 = CONCAT44(uStack_24,in_fr1);
  }
  else {
    uVar7 = *(undefined8 *)(ar4 + DAT_8c0df840);
    uStack_24 = (undefined4)uVar7;
    uStack_20 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  iVar4 = (int)uVar7;
  iVar5 = ar4;
  (*(code *)PTR_FUN_8c0df844)(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c0df848 + ar4) != 0) {
    (*(code *)PTR_FUN_8c0df84c)(iVar5,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c0df858)(ar4 + DAT_8c0df850._4_4_,ar5,ar6,ar7);
  }
  iVar5 = ar4 + 0x7c;
  (*(code *)PTR_FUN_8c0df860)(ar4,ar4 + 0x78,iVar5,ar7);
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = *(undefined4 *)(ar4 + 0x78);
    uStack_18 = *(undefined4 *)(ar4 + 0x7c);
    iVar6 = DAT_8c0df864;
  }
  else {
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    iVar4 = DAT_8c0df864;
    iVar6 = DAT_8c0df868;
  }
  iStack_14 = DAT_8c0df864;
  iStack_10 = ar4 + DAT_8c0df868;
  puVar3 = &uStack_1c;
  (*(code *)PTR_FUN_8c0df870)(ar4 + DAT_8c0df86c,puVar3,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df874)(ar4,puVar3,iVar5,ar7);
  puVar3 = &uStack_1c;
  (*(code *)PTR_FUN_8c0df878)(ar4 + DAT_8c0df86c,puVar3,iVar5,ar7);
  if (in_FPSCR_SZ == '\0') {
    *DAT_8c0df85c = iVar6;
  }
  else {
    *(ulonglong *)DAT_8c0df85c = CONCAT44(iVar6,iVar4);
    iStack_2c = iVar6;
  }
  (*(code *)PTR_FUN_8c0df87c)(ar4,puVar3,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df884)(ar4 + DAT_8c0df880,puVar3,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df88c)(ar4 + DAT_8c0df888,puVar3,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df88c)(ar4 + DAT_8c0df890,puVar3,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df88c)(ar4 + DAT_8c0df894,puVar3,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df89c)(ar4 + DAT_8c0df898,puVar3,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df8a4)(ar4 + DAT_8c0df8a0,puVar3,iVar5,ar7);
  iVar4 = ar4 + DAT_8c0df8a8;
  (*(code *)PTR_FUN_8c0df8ac)(ar4,iVar4,iVar5,ar7);
  (*(code *)PTR_FUN_8c0df8b4)(ar4 + DAT_8c0df8b0,iVar4,iVar5,ar7);
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    iVar1 = (*(code *)PTR_FUN_8c0df8bc)(ar4 + iVar6 * 0x68 + DAT_8c0df8b8,iVar4,iVar5,ar7);
    if (iVar1 == 1) {
      iVar5 = ar4 + 4;
      iVar4 = ar4 + 0xc;
      (*(code *)PTR_FUN_8c0df8c0)(ar4 + iVar6 * 0x68 + DAT_8c0df8b8,iVar4,iVar5,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0df8c4)(ar4,iVar4,iVar5,ar7);
  (*(code *)PTR_Vec3_dtor_8c0df8c8)(&iStack_2c,0xffffffff,iVar5,ar7);
  uVar2 = (*(code *)PTR_free_if_nonnull_wrap_0deb30_8c0df8cc)(&uStack_1c,0xffffffff,iVar5,ar7);
  return uVar2;
}



/* FUN_8c0df8d0 @ 8c0df8d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df8d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 unaff_r14;
  undefined1 *puVar2;
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
  if (*(int *)(DAT_8c0df978 + ar4) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(DAT_8c0df97c + ar4) == 0) && (*(int *)(DAT_8c0df980 + ar4) == 0)) {
      uVar1 = 1;
      (*(code *)PTR_FUN_8c0df988)(1,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0df98c)(uVar1,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0df990)(*(undefined4 *)(DAT_8c0df978 + ar4),ar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(DAT_8c0df978 + ar4) + 8) + 0x34))
                (*(int *)(DAT_8c0df978 + ar4),ar5,ar6,ar7);
      uVar1 = 1;
      (*(code *)PTR_FUN_8c0df988)(1,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0df98c)(uVar1,ar5,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c0df994)(ar4,ar5,ar6,ar7);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c0df998 @ 8c0df998 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df998(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_300_0bf154_8c0df9e4)(ar4 + DAT_8c0df9e0,ar5,ar6,ar7);
  if (iVar1 != 0x19) {
    ar5 = (*(code *)PTR_s_CEnv_AddItem_0da93a_8c0df9e8)(ar4,ar5,ar6,ar7);
  }
  return ar5;
}



/* FUN_8c0df9ec @ 8c0df9ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0df9ec(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  uVar1 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c0dfa6c)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfa70)(ar5,uVar1,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c0dfa74)(auStack_18,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0dfa78)(auStack_28,0xffffffff,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfa80)(ar5,uVar1,ar6,ar7);
  uVar1 = (**(code **)(*ar4 + 0x4c))(ar4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0dfa78)(auStack_18,0xffffffff,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dfa84 @ 8c0dfa84 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0dfad8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfa84(int ar4,undefined4 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  undefined4 *a5;
  undefined4 unaff_r10;
  int iVar2;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int iVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  double dVar5;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar6;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
    puVar4 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar4 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar4 + -0x18) = in_PR;
  a5 = ar5;
  (*(code *)PTR_FUN_8c0dfba0)((undefined1 *)((int)puVar4 + -0x98),ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0dfba4)((undefined1 *)((int)puVar4 + -0xa8),a5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)PTR_DAT_8c0dfba8);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (*(int *)(DAT_8c0dfbac + ar4) == 0) {
    uVar1 = (*(code *)PTR_FUN_8c0dfbb0)(ar4,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar4 + -0xb0) = uVar1;
    iVar2 = *(int *)((int)puVar4 + -0xb0);
  }
  if (iVar2 == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c0dfbb4,*ar5);
    }
    else {
      dVar5 = *(double *)PTR_DAT_8c0dfbb4;
    }
    if (SUB84(dVar5,0) == (float)((ulonglong)dVar5 >> 0x20)) {
      *(undefined4 *)(DAT_8c0dfbac + ar4) = 0;
    }
    else {
      for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        *(int *)((int)puVar4 + -0xb8) = iVar2;
        ar7 = (undefined1 *)((int)puVar4 + -0xa4);
        ar6 = (undefined1 *)((int)puVar4 + -0xa8);
        (*(code *)PTR_FUN_8c0dfbc0)
                  ((undefined1 *)((int)puVar4 + -0x98),
                   ar4 + *(int *)((int)puVar4 + -0xb8) * DAT_8c0dfbb8 + DAT_8c0dfbbc,ar6,ar7);
        uVar1 = SUB84(in_dr14,0);
        (*(code *)PTR_FUN_8c0dfbc4)((undefined1 *)((int)puVar4 + -0xa8),ar5,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar4 + -0xb4) = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined4 *)((int)puVar4 + -0xbc) = *(undefined4 *)((int)puVar4 + -0xb4);
          in_dr14 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0xbc),uVar1);
          dVar5 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0xbc),SUB84(dVar5,0));
        }
        else {
          *(double *)((int)puVar4 + -0xb4) = dVar5;
          *(undefined8 *)((int)puVar4 + -0xbc) = *(undefined8 *)((int)puVar4 + -0xb4);
          in_dr14 = *(double *)((int)puVar4 + -0xbc);
          dVar5 = *(double *)((int)puVar4 + -0xbc);
        }
        if (in_FPSCR_PR == '\0') {
          bVar6 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar5 < in_dr14;
        }
        if (bVar6) {
          if (in_FPSCR_SZ == '\0') {
            uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
            in_dr14 = (double)CONCAT44(uVar1,uVar1);
          }
          *(int *)((int)puVar4 + -0xc0) = iVar2;
          iVar3 = ar4 + *(int *)((int)puVar4 + -0xc0) * DAT_8c0dfbb8 + DAT_8c0dfbc8;
        }
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44((undefined4)DAT_8c0dfbcc,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)CONCAT44(DAT_8c0dfbcc._4_4_,(undefined4)DAT_8c0dfbcc);
      }
      if (in_FPSCR_PR == '\0') {
        bVar6 = SUB84(in_dr14,0) < (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        bVar6 = in_dr14 < dVar5;
      }
      if (bVar6) {
        *(int *)(DAT_8c0dfbac + ar4) = iVar3;
      }
      else {
        *(undefined4 *)(DAT_8c0dfbac + ar4) = 0;
      }
    }
  }
  *(undefined4 *)((int)puVar4 + -0xac) = *(undefined4 *)(DAT_8c0dfbcc._4_4_ + ar4);
  (*(code *)PTR_Vec3_dtor_8c0dfbd4)((undefined1 *)((int)puVar4 + -0xa8),0xffffffff,ar6,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_019270_8c0dfbd8)
            ((undefined1 *)((int)puVar4 + -0x98),0xffffffff,ar6,ar7);
  return *(undefined4 *)((int)puVar4 + -0xac);
}



/* FUN_8c0dfbdc @ 8c0dfbdc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfbdc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a4;
  undefined4 a5;
  int a4_00;
  uint extraout_fr1;
  uint extraout_fr1_00;
  uint uVar2;
  char in_FPSCR_SZ;
  
  a5 = ar5;
  iVar1 = (*(code *)PTR_get_field_38_0db5a0_8c0dfd3c)(ar4 + DAT_8c0dfd38,ar5,ar6,ar7);
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_FUN_8c0dfd40)(ar4 + DAT_8c0dfd38,a5,ar6,ar7);
    a4_00 = *(int *)(iVar1 + 8);
    iVar1 = (**(code **)(DAT_8c0dfd44 + *(int *)(a4_00 + 8)))(a4_00,a5,ar6,ar7);
    if ((iVar1 == 1) &&
       (iVar1 = (**(code **)(DAT_8c0dfd48 + *(int *)(a4_00 + 8)))(a4_00,a5,ar6,ar7), iVar1 == 1)) {
      a4 = (**(code **)(DAT_8c0dfd4c + *(int *)(a4_00 + 8)))(a4_00,a5,ar6,ar7);
      ar6 = (*(code *)PTR_get_field_4_0253e4_8c0dfd50)(a4,a5,ar6,ar7);
      (*(code *)PTR_s_GRAPHICS_SQUIDLINE_0ae646_8c0dfd5c)(DAT_8c0dfd58,DAT_8c0dfd54,ar6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c0dfd60)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfd68)(ar4 + DAT_8c0dfd64,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfd7c)(ar4 + DAT_8c0dfd78,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + DAT_8c0dfd80) + 0x10))((int *)(ar4 + DAT_8c0dfd80),ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfd88)(ar4 + DAT_8c0dfd84,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfd90)(ar4 + DAT_8c0dfd8c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfd98)(ar4 + DAT_8c0dfd94,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dfda0)(ar4 + DAT_8c0dfd9c,ar5,ar6,ar7);
  uVar2 = extraout_fr1;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (*(code *)PTR_FUN_8c0dfdac)(ar4 + iVar1 * DAT_8c0dfda4 + DAT_8c0dfda8,ar5,ar6,ar7);
    uVar2 = extraout_fr1_00;
  }
  *(undefined4 *)(DAT_8c0dfdb0 + ar4) = 1;
  *(undefined4 *)(DAT_8c0dfdb4 + ar4) = 1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c0dfdb8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c0dfdb8) = (ulonglong)uVar2;
  }
  *(undefined4 *)(DAT_8c0dfdbc + ar4) = 0;
  *(undefined4 *)(DAT_8c0dfdc0 + ar4) = 0;
  return 1;
}



/* noop_0dfdc4 @ 8c0dfdc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0dfdc4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_0dfdc8 @ 8c0dfdc8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_0dfdc8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0dfdcc @ 8c0dfdcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dfdcc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0dfdf4)(ar4 + DAT_8c0dfdf0,1,ar6,ar7);
  iVar1 = DAT_8c0dfdf8;
  *(undefined4 *)(DAT_8c0dfdf8 + ar4) = 1;
  return iVar1;
}



/* FUN_8c0dfdfc @ 8c0dfdfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0dfdfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0dfe24)(ar4 + DAT_8c0dfe20,0,ar6,ar7);
  iVar1 = DAT_8c0dfe28;
  *(undefined4 *)(DAT_8c0dfe28 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0dfe2c @ 8c0dfe2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfe2c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  
  (*(code *)PTR_FUN_8c0dfec4)(ar4,ar5,ar6,ar7);
  a5 = ar5;
  (*(code *)PTR_pure_virtual_stub_8c0dfed0)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0dfed4)(ar5,a5,ar6,ar7);
  if (iVar1 == 1) {
    uVar2 = (*(code *)PTR_get_field_cc_0dfee8_8c0dfed8)(ar5,a5,ar6,ar7);
    uVar2 = (*(code *)PTR_FUN_8c0dfedc)(uVar2,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c0dfee0)(uVar2,a5,ar6,ar7);
  }
  (*(code *)PTR_pure_virtual_stub_8c0dfed0)(ar4,ar5,ar6,ar7);
  return 1;
}



/* get_field_cc_0dfee8 @ 8c0dfee8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_cc_0dfee8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0dfef0 + ar4);
}



/* FUN_8c0dfef4 @ 8c0dfef4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dfef4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0dff18)(*(undefined4 *)(DAT_8c0dff14 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0dff1c @ 8c0dff1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dff1c(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0dffb4)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffbc)((int)ar4 + DAT_8c0dffb8,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffc4)((int)ar4 + DAT_8c0dffc0,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffcc)((int)ar4 + DAT_8c0dffc8,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c0dffd0)(ar4,uVar2,ar6,ar7);
  *(undefined4 *)(DAT_8c0dffd4 + (int)ar4) = 0;
  (*(code *)PTR_FUN_8c0dffd8)(ar4,uVar2,ar6,ar7);
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c0dffe0)((int)ar4 + DAT_8c0dffdc,ar5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = (**(code **)(DAT_8c0dffe4 + *ar4))(ar4,uVar2,ar6,ar7);
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x74))(ar4,uVar2,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0dffe8 @ 8c0dffe8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0dffe8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_noop_0d09f4_8c0e0008)(ar4 + DAT_8c0e0004,ar5,ar6,ar7);
  return uVar1;
}


