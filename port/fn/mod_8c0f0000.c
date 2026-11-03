//@unit 8c0f3df8
#include "../decls.h"
undefined4 * FUN_8c0f3df8_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  ar4[4] = ar5[4];
  return ar4;
}

__asm__(".globl _FUN_8c0f3df8\n.set _FUN_8c0f3df8, _FUN_8c0f3df8_def\n");
//@unit 8c0f3e30
#include "../decls.h"
undefined1 * FUN_8c0f3e30_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x2c,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x38,ar5,ar6,ar7);
  *ar4 = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x44) = 0x32;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f3e30\n.set _FUN_8c0f3e30, _FUN_8c0f3e30_def\n");
//@unit 8c0f3e84
#include "../decls.h"
undefined4 * FUN_8c0f3e84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_set_zero(ar4 + 1,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 4,ar5,ar6,ar7);
  *ar4 = 0xffffffff;
  ar4[7] = 0x32;
  ar4[8] = 1;
  return ar4;
}

__asm__(".globl _FUN_8c0f3e84\n.set _FUN_8c0f3e84, _FUN_8c0f3e84_def\n");
//@unit 8c0f3ebc
#include "../decls.h"
int FUN_8c0f3ebc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  *(undefined **)(ar4 + 8) = (&DATA_8c12c1f0);
  Vec3_ctor_zero(ar4 + 0x30,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x40,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x50,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x5c,ar5,ar6,ar7);
  FUN_8c102800(ar4 + 0x80,ar5,ar6,ar7);
  FUN_8c102800(ar4 + 0x90,ar5,ar6,ar7);
  FUN_8c0f78d8(ar4 + 0xa0,ar5,ar6,ar7);
  FUN_8c0f50b4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0f3ebc\n.set _FUN_8c0f3ebc, _FUN_8c0f3ebc_def\n");
//@unit 8c0f3f58
#include "../decls.h"
int FUN_8c0f3f58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f3f58\n.set _FUN_8c0f3f58, _FUN_8c0f3f58_def\n");
//@unit 8c0f3ffc
#include "../decls.h"
int free_if_nonnull_wrap_0f3ffc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0f3ffc\n.set _free_if_nonnull_wrap_0f3ffc, _free_if_nonnull_wrap_0f3ffc_def\n");
//@unit 8c0f402c
#include "../decls.h"
undefined4 * FUN_8c0f402c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f402c\n.set _FUN_8c0f402c, _FUN_8c0f402c_def\n");
//@unit 8c0f4040
#include "../decls.h"
int FUN_8c0f4040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

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

__asm__(".globl _FUN_8c0f4040\n.set _FUN_8c0f4040, _FUN_8c0f4040_def\n");
//@unit 8c0f4108
#include "../decls.h"
int Class_12c1f0_m0_0f4108_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _Class_12c1f0_m0_0f4108\n.set _Class_12c1f0_m0_0f4108, _Class_12c1f0_m0_0f4108_def\n");
//@unit 8c0f41c8
#include "../decls.h"
undefined4 CAnimal_m1_0f41c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _CAnimal_m1_0f41c8\n.set _CAnimal_m1_0f41c8, _CAnimal_m1_0f41c8_def\n");
//@unit 8c0f4250
#include "../decls.h"
undefined4 noop_0f4250_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f4250\n.set _noop_0f4250, _noop_0f4250_def\n");
//@unit 8c0f4254
#include "../decls.h"
undefined4 noop_0f4254_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f4254\n.set _noop_0f4254, _noop_0f4254_def\n");
//@unit 8c0f4258
#include "../decls.h"
undefined4 FUN_8c0f4258_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  int iVar3;
  int *a5;
  int iVar4;
  int iVar5;
  
  ar5_00 = ar5;
  iVar1 = get_field_bb4_0e06e4(ar5,ar5,ar6,ar7);
  iVar4 = 0;
  do {
    if (iVar1 <= iVar4) {
LAB_8c0f42f4:
      iVar1 = (**(code **)(0x118 + *ar5))(ar5,ar5_00,ar6,ar7);
      uVar2 = 1;
      if (1 < iVar1) {
        iVar1 = ar4;
        iVar4 = FUN_8c0db864(ar5,ar4,ar6,ar7);
        uVar2 = list_node_next(ar4,iVar1,ar6,ar7);
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          iVar1 = get_field_a4_032154(uVar2,iVar1,ar6,ar7);
          iVar3 = (**(code **)(**(int **)(0xa4 + ar4) + 0x14))
                            (*(int **)(0xa4 + ar4),iVar1,ar6,ar7);
          if (iVar3 == 1) {
            FUN_8c0f4dc4(ar4,uVar2,ar6,ar7);
            uVar2 = FUN_8c0f4dc4(uVar2,ar4,ar6,ar7);
            return uVar2;
          }
          uVar2 = list_node_next(uVar2,iVar1,ar6,ar7);
        }
      }
      return uVar2;
    }
    ar5_00 = (int *)(**(code **)(0x104 + *ar5))(ar5,iVar4,ar6,ar7);
    iVar5 = (**(code **)(**(int **)(0xa4 + ar4) + 0x14))
                      (*(int **)(0xa4 + ar4),(int)ar5_00 + 0xc4,ar6,ar7);
    if (iVar5 == 1) {
      FUN_8c0f4e1c(ar4,ar5_00,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    a5 = (int *)((int)ar5_00 + 0xc4);
    iVar5 = (**(code **)(*(int *)(ar4 + 0xa8) + 0x14))
                      ((int *)(ar4 + 0xa8),a5,ar6,ar7);
    if (iVar5 == 1) {
      FUN_8c0f4e28(ar4,ar5_00,ar6,ar7);
      goto LAB_8c0f42f4;
    }
    iVar4 = iVar4 + 1;
    ar5_00 = a5;
  } while( true );
}

__asm__(".globl _FUN_8c0f4258\n.set _FUN_8c0f4258, _FUN_8c0f4258_def\n");
//@unit 8c0f43bc
#include "../decls.h"
undefined4 FUN_8c0f43bc_def(int ar4,int *ar5,undefined4 ar6,int ar7)

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

__asm__(".globl _FUN_8c0f43bc\n.set _FUN_8c0f43bc, _FUN_8c0f43bc_def\n");
//@unit 8c0f4974
#include "../decls.h"
undefined4 FUN_8c0f4974_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  a5 = ar4 + 0xa0;
  (**(code **)(0x194 + *(int *)(ar4 + 8)))(ar4,a5,ar5,ar7);
  FUN_8c0f79b8(ar4 + 0xa0,a5,ar5,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0f4974\n.set _FUN_8c0f4974, _FUN_8c0f4974_def\n");
//@unit 8c0f49b8
#include "../decls.h"
undefined4 CAnimal_m7_0f49b8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _CAnimal_m7_0f49b8\n.set _CAnimal_m7_0f49b8, _CAnimal_m7_0f49b8_def\n");
//@unit 8c0f4b44
#include "../decls.h"
undefined4 FUN_8c0f4b44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  *(int *)(ar4 + 0x78) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 0x7c) = (int)in_dr4;
  uVar1 = FUN_8c219070(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f4b44\n.set _FUN_8c0f4b44, _FUN_8c0f4b44_def\n");
//@unit 8c0f4b94
#include "../decls.h"
undefined4 noop_0f4b94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f4b94\n.set _noop_0f4b94, _noop_0f4b94_def\n");
//@unit 8c0f4b98
#include "../decls.h"
undefined4 FUN_8c0f4b98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  undefined1 auStack_14 [16];
  
  ar5_00 = ar4 + 0x5c;
  FUN_8c023e24(auStack_14,ar5_00,ar6,ar7);
  FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,ar5_00,ar6,ar7);
  FUN_8c023e04(ar4 + 0x5c,auStack_14,ar6,ar7);
  uVar1 = free_if_nonnull_wrap_016ac4(auStack_14,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f4b98\n.set _FUN_8c0f4b98, _FUN_8c0f4b98_def\n");
//@unit 8c0f4bf0
#include "../decls.h"
undefined4 noop_0f4bf0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f4bf0\n.set _noop_0f4bf0, _noop_0f4bf0_def\n");
//@unit 8c0f4bf4
#include "../decls.h"
undefined4 FUN_8c0f4bf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f4bf4\n.set _FUN_8c0f4bf4, _FUN_8c0f4bf4_def\n");
//@unit 8c0f4c0c
#include "../decls.h"
undefined4 FUN_8c0f4c0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl _FUN_8c0f4c0c\n.set _FUN_8c0f4c0c, _FUN_8c0f4c0c_def\n");
//@unit 8c0f4c5c
#include "../decls.h"
int FUN_8c0f4c5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x70);
  *(int *)(ar4 + 0x70) = iVar1 + 1;
  return iVar1;
}

__asm__(".globl _FUN_8c0f4c5c\n.set _FUN_8c0f4c5c, _FUN_8c0f4c5c_def\n");
//@unit 8c0f4c78
#include "../decls.h"
undefined4 s_CItem_BeNotReference_0f4c7a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(int *)(ar4 + 0x70) = *(int *)(ar4 + 0x70) + -1;
  if (*(int *)(ar4 + 0x70) < 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c1401e4) + 0x19,
               (&DATA_8c1401e4) + 0x36,1,2);
    *(undefined4 *)(ar4 + 0x70) = 0;
  }
  return *(undefined4 *)(ar4 + 0x70);
}

__asm__(".globl _s_CItem_BeNotReference_0f4c7a\n.set _s_CItem_BeNotReference_0f4c7a, _s_CItem_BeNotReference_0f4c7a_def\n");
//@unit 8c0f4cd0
#include "../decls.h"
undefined4 FUN_8c0f4cd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c023aa0(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f4cd0\n.set _FUN_8c0f4cd0, _FUN_8c0f4cd0_def\n");
//@unit 8c0f4cf0
#include "../decls.h"
float * FUN_8c0f4cf0_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 0x50) = *(float *)(ar4 + 0x50) + *ar5;
  *(float *)(ar4 + 0x54) = *(float *)(ar4 + 0x54) + ar5[1];
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) + ar5[2];
  return (float *)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c0f4cf0\n.set _FUN_8c0f4cf0, _FUN_8c0f4cf0_def\n");
//@unit 8c0f4d34
#include "../decls.h"
undefined4 FUN_8c0f4d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 0x80000000) == 0x80000000) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0f4d34\n.set _FUN_8c0f4d34, _FUN_8c0f4d34_def\n");
//@unit 8c0f4d54
#include "../decls.h"
undefined4 ret_const_1_0f4d54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_0f4d54\n.set _ret_const_1_0f4d54, _ret_const_1_0f4d54_def\n");
//@unit 8c0f4d5c
#include "../decls.h"
undefined4 ret_const_0_0f4d5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0f4d5c\n.set _ret_const_0_0f4d5c, _ret_const_0_0f4d5c_def\n");
//@unit 8c0f4d64
#include "../decls.h"
undefined4 ret_const_0_0f4d64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0f4d64\n.set _ret_const_0_0f4d64, _ret_const_0_0f4d64_def\n");
//@unit 8c0f4d6c
#include "../decls.h"
undefined4 ret_const_0_0f4d6c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0f4d6c\n.set _ret_const_0_0f4d6c, _ret_const_0_0f4d6c_def\n");
//@unit 8c0f4d74
#include "../decls.h"
undefined4 ret_const_1_0f4d74_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_0f4d74\n.set _ret_const_1_0f4d74, _ret_const_1_0f4d74_def\n");
//@unit 8c0f4d7c
#include "../decls.h"
undefined4 ret_const_0_0f4d7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0f4d7c\n.set _ret_const_0_0f4d7c, _ret_const_0_0f4d7c_def\n");
//@unit 8c0f4d84
#include "../decls.h"
undefined4 FUN_8c0f4d84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  return 1;
}

__asm__(".globl _FUN_8c0f4d84\n.set _FUN_8c0f4d84, _FUN_8c0f4d84_def\n");
//@unit 8c0f4da4
#include "../decls.h"
undefined4 Vec3_assign_wrap_0f4da4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_assign(ar4 + 0x40,ar4 + 0x30,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_0f4da4\n.set _Vec3_assign_wrap_0f4da4, _Vec3_assign_wrap_0f4da4_def\n");
//@unit 8c0f4dc4
#include "../decls.h"
int FUN_8c0f4dc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(0x104 + ar4);
  if (*(int *)(0x104 + ar4) != 3) {
    puVar3 = (undefined4 *)(ar4 + *(int *)(0x104 + ar4) * 8 + 0xec);
    *puVar3 = 1;
    puVar3[1] = ar5;
    *(int *)(0x104 + ar4) = *(int *)(0x104 + ar4) + 1;
    iVar1 = 0x104;
    iVar2 = 3;
    if (3 < *(int *)(0x104 + ar4)) {
      *(undefined4 *)(0x104 + ar4) = 3;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0f4dc4\n.set _FUN_8c0f4dc4, _FUN_8c0f4dc4_def\n");
//@unit 8c0f4e1c
#include "../decls.h"
int FUN_8c0f4e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x108;
  *(undefined4 *)(0x108 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0f4e1c\n.set _FUN_8c0f4e1c, _FUN_8c0f4e1c_def\n");
//@unit 8c0f4e28
#include "../decls.h"
int FUN_8c0f4e28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x128;
  *(undefined4 *)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0f4e28\n.set _FUN_8c0f4e28, _FUN_8c0f4e28_def\n");
//@unit 8c0f4e34
#include "../decls.h"
undefined4 FUN_8c0f4e34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,ar5,ar6,ar7,(&DATA_8c1401e4) + 0x16);
  *(undefined4 *)(ar4 + 0x20) = *(undefined4 *)(ar5 + 0x14);
  *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar5 + 0x18);
  Vec3_assign(ar4 + 0x30,ar5 + 0x1c,ar6,ar7);
  vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 0x2c,ar6,ar7);
  FUN_8c023e04(ar4 + 0x5c,ar5 + 0x38,ar6,ar7);
  *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar5 + 0x44);
  *(undefined4 *)(ar4 + 0x74) = *(undefined4 *)(ar5 + 0x48);
  return 0x74;
}

__asm__(".globl _FUN_8c0f4e34\n.set _FUN_8c0f4e34, _FUN_8c0f4e34_def\n");
//@unit 8c0f4ebc
#include "../decls.h"
undefined4 FUN_8c0f4ebc_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x24) = *ar5;
  vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 1,ar6,ar7);
  FUN_8c023e04(ar4 + 0x5c,ar5 + 4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x6c) = ar5[7];
  *(undefined4 *)(ar4 + 0x74) = ar5[8];
  return 0x74;
}

__asm__(".globl _FUN_8c0f4ebc\n.set _FUN_8c0f4ebc, _FUN_8c0f4ebc_def\n");
//@unit 8c0f4f0c
#include "../decls.h"
undefined4 FUN_8c0f4f0c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c014334(ar5,ar5,ar6,ar7,(&DATA_8c1401e4) + 0x16);
  *(undefined4 *)(ar5 + 0x14) = *(undefined4 *)(ar4 + 0x20);
  *(undefined4 *)(ar5 + 0x18) = *(undefined4 *)(ar4 + 0x24);
  Vec3_assign(ar5 + 0x1c,ar4 + 0x30,ar6,ar7);
  vec3_copy_8c023d8c(ar5 + 0x2c,ar4 + 0x50,ar6,ar7);
  FUN_8c023e04(ar5 + 0x38,ar4 + 0x5c,ar6,ar7);
  *(undefined4 *)(ar5 + 0x44) = *(undefined4 *)(ar4 + 0x6c);
  *(uint *)(ar5 + 0x48) = *(uint *)(ar4 + 0x74) & 0xfffffffd;
  return 0x48;
}

__asm__(".globl _FUN_8c0f4f0c\n.set _FUN_8c0f4f0c, _FUN_8c0f4f0c_def\n");
//@unit 8c0f4fa4
#include "../decls.h"
uint FUN_8c0f4fa4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *ar5 = *(undefined4 *)(ar4 + 0x24);
  vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7);
  FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7);
  ar5[7] = *(undefined4 *)(ar4 + 0x6c);
  uVar1 = *(uint *)(ar4 + 0x74) & 0xfffffffd;
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0f4fa4\n.set _FUN_8c0f4fa4, _FUN_8c0f4fa4_def\n");
//@unit 8c0f5004
#include "../decls.h"
undefined4
s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_ac [164];
  
  cVar3 = '\0';
  uStack_b8 = *(undefined8 *)(ar4 + 0x6c);
  uStack_bc = *(undefined4 *)(ar4 + 0x28);
  FUN_8c014334(auStack_ac,ar5,ar6,ar7,s_No__2ld_kind__d_cat__d_food__d_r_8c140230);
  uStack_b8 = CONCAT44(0xffffffff,uStack_b8);
  ar7_00 = 0xd;
  uVar1 = ar6;
  noop_102824(auStack_ac,ar5,ar6,0xd,0xffffffff);
  if (cVar3 == '\0') {
    uStack_b8 = CONCAT44(*(undefined4 *)(ar4 + 0x38),uStack_b8);
                    
    uStack_b8 = *(undefined4 *)(ar4 + 0x34);
    uStack_bc = *(undefined4 *)(ar4 + 0x30);
    puVar2 = &uStack_bc;
  }
  else {
    uStack_b8 = *(undefined8 *)(ar4 + 0x38);
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

__asm__(".globl _s_No_2ld_kind_d_cat_d_food_d_r_0f5008\n.set _s_No_2ld_kind_d_cat_d_food_d_r_0f5008, _s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def\n");
//@unit 8c0f50b4
#include "../decls.h"
undefined4 FUN_8c0f50b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x28) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x6c) = 0x32;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(0x168 + ar4) = 0;
  *(undefined4 *)(0x164 + ar4) = 0;
  *(undefined4 *)(0x16c + ar4) = 1;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x80000000;
  return 0x74;
}

__asm__(".globl _FUN_8c0f50b4\n.set _FUN_8c0f50b4, _FUN_8c0f50b4_def\n");
//@unit 8c0f511c
#include "../decls.h"
double * CAnimal_m8_0f511c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _CAnimal_m8_0f511c\n.set _CAnimal_m8_0f511c, _CAnimal_m8_0f511c_def\n");
//@unit 8c0f528c
#include "../decls.h"
undefined4
FUN_8c0f528c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

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

__asm__(".globl _FUN_8c0f528c\n.set _FUN_8c0f528c, _FUN_8c0f528c_def\n");
//@unit 8c0f52c8
#include "../decls.h"
undefined4 FUN_8c0f52c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c219070(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f52c8\n.set _FUN_8c0f52c8, _FUN_8c0f52c8_def\n");
//@unit 8c0f5308
#include "../decls.h"
undefined4 FUN_8c0f5308_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c219070(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5308\n.set _FUN_8c0f5308, _FUN_8c0f5308_def\n");
//@unit 8c0f532c
#include "../decls.h"
undefined4 FUN_8c0f532c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0xa0 + ar4) = ar5;
  *(undefined4 *)(0xa4 + ar4) = ar6;
  uVar1 = (**(code **)(**(int **)(0xa4 + ar4) + 0x24))
                    (*(int **)(0xa4 + ar4),*(undefined4 *)(0xa0 + ar4),ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f532c\n.set _FUN_8c0f532c, _FUN_8c0f532c_def\n");
//@unit 8c0f5368
#include "../decls.h"
undefined4 FUN_8c0f5368_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(0xa4 + ar4) + 0xc))
                    (*(int **)(0xa4 + ar4),ar4 + 0x30,ar4 + 0x50,
                     *(undefined4 *)(0xa0 + ar4));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5368\n.set _FUN_8c0f5368, _FUN_8c0f5368_def\n");
//@unit 8c0f5398
#include "../decls.h"
undefined4 * FUN_8c0f5398_def(int ar4,double *ar5,int ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f5398\n.set _FUN_8c0f5398, _FUN_8c0f5398_def\n");
//@unit 8c0f54b8
#include "../decls.h"
undefined4 * FUN_8c0f54b8_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = 0;
  *ar6 = 0;
  *ar7 = 0x42c80000;
  return &DAT_8c0f54cc;
}

__asm__(".globl _FUN_8c0f54b8\n.set _FUN_8c0f54b8, _FUN_8c0f54b8_def\n");
//@unit 8c0f54d0
#include "../decls.h"
undefined4 * FUN_8c0f54d0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  *ar6 = *(undefined4 *)(ar4 + 0x34);
  *ar7 = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c0f54d0\n.set _FUN_8c0f54d0, _FUN_8c0f54d0_def\n");
//@unit 8c0f54ec
#include "../decls.h"
int FUN_8c0f54ec_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint *puVar1;
  char cVar2;
  uint uStackY_38;
  
  cVar2 = '\0';
  uStackY_38 = (ulonglong)uStackY_38;
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
    uStackY_38 = CONCAT44(s0,uStackY_38);
  }
  else {
    uStackY_38 = CONCAT44(s4,s0);
    puVar1 = &uStackY_38;
  }
  Class_12c058_m1_0f5660(ar4,*(undefined4 *)((int)puVar1 + 4),ar6_00,ar7_00);
  if (ar6 == 0x10) {
    *(undefined4 *)(ar4 + 0x16c) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f54ec\n.set _FUN_8c0f54ec, _FUN_8c0f54ec_def\n");
//@unit 8c0f55d8
#include "../decls.h"
int Class_12c058_m0_0f55d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _Class_12c058_m0_0f55d8\n.set _Class_12c058_m0_0f55d8, _Class_12c058_m0_0f55d8_def\n");
//@unit 8c0f5660
#include "../decls.h"
undefined4 Class_12c058_m1_0f5660_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  CAnimal_m1_0f41c8(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c0f532c(ar4,0x8c43b2a4,ar4 + 0x17c,ar7);
  return uVar1;
}

__asm__(".globl _Class_12c058_m1_0f5660\n.set _Class_12c058_m1_0f5660, _Class_12c058_m1_0f5660_def\n");
//@unit 8c0f56e8
#include "../decls.h"
undefined4 FUN_8c0f56e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - 0.1;
  if (*(float *)(ar4 + 0x34) <= -100.0) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return 1;
}

__asm__(".globl _FUN_8c0f56e8\n.set _FUN_8c0f56e8, _FUN_8c0f56e8_def\n");
//@unit 8c0f5730
#include "../decls.h"
undefined4 FUN_8c0f5730_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x170) + 8))((int *)(ar4 + 0x170),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5730\n.set _FUN_8c0f5730, _FUN_8c0f5730_def\n");
//@unit 8c0f5754
#include "../decls.h"
undefined4 FUN_8c0f5754_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c015ad4(ar4 + 0x178,ar5,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5754\n.set _FUN_8c0f5754, _FUN_8c0f5754_def\n");
//@unit 8c0f577c
#include "../decls.h"
undefined4 FUN_8c0f577c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f577c\n.set _FUN_8c0f577c, _FUN_8c0f577c_def\n");
//@unit 8c0f57f0
#include "../decls.h"
undefined4 FUN_8c0f57f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f57f0\n.set _FUN_8c0f57f0, _FUN_8c0f57f0_def\n");
//@unit 8c0f5878
#include "../decls.h"
undefined4 get_field_24_0f5878_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_0f5878\n.set _get_field_24_0f5878, _get_field_24_0f5878_def\n");
//@unit 8c0f5880
#include "../decls.h"
int FUN_8c0f5880_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x170;
}

__asm__(".globl _FUN_8c0f5880\n.set _FUN_8c0f5880, _FUN_8c0f5880_def\n");
//@unit 8c0f5890
#include "../decls.h"
int FUN_8c0f5890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x178;
}

__asm__(".globl _FUN_8c0f5890\n.set _FUN_8c0f5890, _FUN_8c0f5890_def\n");
//@unit 8c0f58a0
#include "../decls.h"
undefined4 noop_0f58a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f58a0\n.set _noop_0f58a0, _noop_0f58a0_def\n");
//@unit 8c0f58a4
#include "../decls.h"
int FUN_8c0f58a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = 3;
  ar5_00 = 0xf;
  FUN_8c0f4040(ar4,0xf,3,ar5,ar6);
  *(undefined **)(ar4 + 8) = (&DATA_8c12bec0);
  FUN_8c016410(ar4 + 0x170,ar5_00,ar6_00,ar5);
  FUN_8c015224(ar4 + 0x1b4,ar5_00,ar6_00,ar5);
  Vec3_ctor_zero(ar4 + 0x1bc,ar5_00,ar6_00,ar5);
  FUN_8c016fcc(ar4 + 0x1dc,ar5_00,ar6_00,ar5);
  *(undefined1 *)(0x1d8 + ar4) = 0;
  *(undefined4 *)0x8c43b338 = 0;
  ((undefined1 *)1)[0x8c43b338] = 0;
  ((undefined1 *)2)[0x8c43b338] = 0x7f;
  ((undefined1 *)3)[0x8c43b338] = 0;
  ((undefined1 *)4)[0x8c43b338] = 0x7f;
  ((undefined1 *)5)[0x8c43b338] = 0x7f;
  ((undefined1 *)6)[0x8c43b338] = 0;
  ((undefined1 *)7)[0x8c43b338] = 0x7f;
  ((undefined1 *)8)[0x8c43b338] = 0x7f;
  ((undefined1 *)9)[0x8c43b338] = 0;
  ((undefined1 *)10)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0xb)[0x8c43b338] = 0;
  ((undefined1 *)0xc)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0xd)[0x8c43b338] = 0x7f;
  ((undefined1 *)0xe)[0x8c43b338] = 0x7f;
  ((undefined1 *)0xf)[0x8c43b338] = 0x7f;
  ((undefined1 *)0x10)[0x8c43b338] = 0;
  ((undefined1 *)0x11)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x12)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x13)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x14)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x15)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x16)[0x8c43b338] = 0;
  ((undefined1 *)0x17)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x18)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x19)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x1a)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x1b)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x1c)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x1d)[0x8c43b338] = (short)0xff;
  ((undefined1 *)0x1e)[0x8c43b338] = (short)0x80;
  ((undefined1 *)0x1f)[0x8c43b338] = (short)0xff;
  FUN_8c0f5ad0(ar4,ar5_00,ar6_00,ar5);
  FUN_8c0f532c(ar4,0x8c43b47c,ar4 + 0x1dc,ar5);
  return ar4;
}

__asm__(".globl _FUN_8c0f58a4\n.set _FUN_8c0f58a4, _FUN_8c0f58a4_def\n");
//@unit 8c0f5a48
#include "../decls.h"
int Class_12bec0_m0_0f5a48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _Class_12bec0_m0_0f5a48\n.set _Class_12bec0_m0_0f5a48, _Class_12bec0_m0_0f5a48_def\n");
//@unit 8c0f5ad0
#include "../decls.h"
undefined4 FUN_8c0f5ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1cc) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 0;
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  return 0x74;
}

__asm__(".globl _FUN_8c0f5ad0\n.set _FUN_8c0f5ad0, _FUN_8c0f5ad0_def\n");
//@unit 8c0f5b10
#include "../decls.h"
int s_Failed_to_load_textuer_FOOD_0f5b18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_Failed_to_load_textuer_FOOD_0f5b18\n.set _s_Failed_to_load_textuer_FOOD_0f5b18, _s_Failed_to_load_textuer_FOOD_0f5b18_def\n");
//@unit 8c0f5c88
#include "../decls.h"
undefined4
s_Failed_to_load_textuer_FO_wrap_0f5c88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = s_Failed_to_load_textuer_FOOD_0f5b18(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_Failed_to_load_textuer_FO_wrap_0f5c88\n.set _s_Failed_to_load_textuer_FO_wrap_0f5c88, _s_Failed_to_load_textuer_FO_wrap_0f5c88_def\n");
//@unit 8c0f5ca8
#include "../decls.h"
undefined4 Class_12bec0_m2_0f5ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (**(code **)(*(int *)(ar4 + 8) + 0x28))(ar4,ar7,ar6,ar7);
  FUN_8c0f5fdc(ar4,ar7,ar6,ar7_00);
  iVar1 = get_field_6c_02f46c(ar4,ar7,ar6,ar7_00);
  if (iVar1 == 0) {
    iVar1 = get_field_70_05f490(ar4,ar7,ar6,ar7_00);
    if (iVar1 == 0) {
      FUN_8c0f4d84(ar4,ar7,ar6,ar7_00);
    }
  }
  FUN_8c0f5368(ar4,ar7,ar6,ar7_00);
  return 1;
}

__asm__(".globl _Class_12bec0_m2_0f5ca8\n.set _Class_12bec0_m2_0f5ca8, _Class_12bec0_m2_0f5ca8_def\n");
//@unit 8c0f5d1c
#include "../decls.h"
undefined4 Class_12bec0_m3_0f5d1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (**(code **)(*(int *)(ar4 + 8) + 0x28))(ar4,ar7,ar6,ar7);
  iVar1 = get_field_6c_02f46c(ar4,ar7,ar6,ar7_00);
  if (iVar1 == 0) {
    iVar1 = get_field_70_05f490(ar4,ar7,ar6,ar7_00);
    if (iVar1 == 0) {
      FUN_8c0f4d84(ar4,ar7,ar6,ar7_00);
    }
  }
  FUN_8c0f5368(ar4,ar7,ar6,ar7_00);
  return 1;
}

__asm__(".globl _Class_12bec0_m3_0f5d1c\n.set _Class_12bec0_m3_0f5d1c, _Class_12bec0_m3_0f5d1c_def\n");
//@unit 8c0f5d80
#include "../decls.h"
undefined4 FUN_8c0f5d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5d80\n.set _FUN_8c0f5d80, _FUN_8c0f5d80_def\n");
//@unit 8c0f5d98
#include "../decls.h"
undefined4 FUN_8c0f5d98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl _FUN_8c0f5d98\n.set _FUN_8c0f5d98, _FUN_8c0f5d98_def\n");
//@unit 8c0f5de8
#include "../decls.h"
int FUN_8c0f5de8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0f4c0c(ar4,ar5,ar6,ar7);
  iVar1 = 0x1cc;
  *(undefined4 *)(0x1cc + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f5de8\n.set _FUN_8c0f5de8, _FUN_8c0f5de8_def\n");
//@unit 8c0f5e0c
#include "../decls.h"
undefined4 FUN_8c0f5e0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    (*(uint*)((uchar*)&uStack_4c+0)) = uVar1;
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

__asm__(".globl _FUN_8c0f5e0c\n.set _FUN_8c0f5e0c, _FUN_8c0f5e0c_def\n");
//@unit 8c0f5f08
#include "../decls.h"
undefined4 FUN_8c0f5f08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(ar4 + 0x1b4,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x1b4,0,ar6,ar7);
  uVar1 = FUN_8c016524(ar4 + 0x170,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5f08\n.set _FUN_8c0f5f08, _FUN_8c0f5f08_def\n");
//@unit 8c0f5f50
#include "../decls.h"
undefined4 FUN_8c0f5f50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x40))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5f50\n.set _FUN_8c0f5f50, _FUN_8c0f5f50_def\n");
//@unit 8c0f5f6c
#include "../decls.h"
undefined4 FUN_8c0f5f6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x40))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5f6c\n.set _FUN_8c0f5f6c, _FUN_8c0f5f6c_def\n");
//@unit 8c0f5f88
#include "../decls.h"
undefined4 * FUN_8c0f5f88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5f90;
}

__asm__(".globl _FUN_8c0f5f88\n.set _FUN_8c0f5f88, _FUN_8c0f5f88_def\n");
//@unit 8c0f5f94
#include "../decls.h"
undefined4 * FUN_8c0f5f94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5f9c;
}

__asm__(".globl _FUN_8c0f5f94\n.set _FUN_8c0f5f94, _FUN_8c0f5f94_def\n");
//@unit 8c0f5fa0
#include "../decls.h"
undefined4 * FUN_8c0f5fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5fa8;
}

__asm__(".globl _FUN_8c0f5fa0\n.set _FUN_8c0f5fa0, _FUN_8c0f5fa0_def\n");
//@unit 8c0f5fac
#include "../decls.h"
undefined4 * FUN_8c0f5fac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f5fb4;
}

__asm__(".globl _FUN_8c0f5fac\n.set _FUN_8c0f5fac, _FUN_8c0f5fac_def\n");
//@unit 8c0f5fb8
#include "../decls.h"
undefined4 noop_0f5fb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f5fb8\n.set _noop_0f5fb8, _noop_0f5fb8_def\n");
//@unit 8c0f5fbc
#include "../decls.h"
undefined4 FUN_8c0f5fbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0f4fa4(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5fbc\n.set _FUN_8c0f5fbc, _FUN_8c0f5fbc_def\n");
//@unit 8c0f5fdc
#include "../decls.h"
undefined4 FUN_8c0f5fdc_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f5fdc\n.set _FUN_8c0f5fdc, _FUN_8c0f5fdc_def\n");
//@unit 8c0f66ac
#include "../decls.h"
undefined4 * FUN_8c0f66ac_def(int ar4,double *ar5,int ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f66ac\n.set _FUN_8c0f66ac, _FUN_8c0f66ac_def\n");
//@unit 8c0f67e0
#include "../decls.h"
undefined4 * FUN_8c0f67e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c0f67e8;
}

__asm__(".globl _FUN_8c0f67e0\n.set _FUN_8c0f67e0, _FUN_8c0f67e0_def\n");
//@unit 8c0f67ec
#include "../decls.h"
undefined4 FUN_8c0f67ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [20];
  
  uVar1 = rand(ar4,ar5,ar6,ar7);
  uVar2 = 3;
  libgcc_divide_helper_01031c(uVar1,3,ar6,ar7);
  uVar1 = rand(uVar1,uVar2,ar6,ar7);
  uVar2 = 3;
  libgcc_divide_helper_01031c(uVar1,3,ar6,ar7);
  Vec3_ctor_xyz(auStack_1c,uVar2,ar6,ar7);
  FUN_8c023aa0(ar4 + 0x30,auStack_1c,ar6,ar7);
  uVar1 = Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f67ec\n.set _FUN_8c0f67ec, _FUN_8c0f67ec_def\n");
//@unit 8c0f6870
#include "../decls.h"
int FUN_8c0f6870_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x1c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x34,ar5,ar6,ar7);
  FUN_8c0f692c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0f6870\n.set _FUN_8c0f6870, _FUN_8c0f6870_def\n");
//@unit 8c0f68c0
#include "../decls.h"
int FUN_8c0f68c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f68c0\n.set _FUN_8c0f68c0, _FUN_8c0f68c0_def\n");
//@unit 8c0f692c
#include "../decls.h"
undefined4 FUN_8c0f692c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f692c\n.set _FUN_8c0f692c, _FUN_8c0f692c_def\n");
//@unit 8c0f69ec
#include "../decls.h"
int FUN_8c0f69ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f69ec\n.set _FUN_8c0f69ec, _FUN_8c0f69ec_def\n");
//@unit 8c0f6ab0
#include "../decls.h"
undefined4 FUN_8c0f6ab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x2c) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0f6ab0\n.set _FUN_8c0f6ab0, _FUN_8c0f6ab0_def\n");
//@unit 8c0f6ac4
#include "../decls.h"
undefined4 FUN_8c0f6ac4_def(ulonglong *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f6ac4\n.set _FUN_8c0f6ac4, _FUN_8c0f6ac4_def\n");
//@unit 8c0f7118
#include "../decls.h"
undefined4 FUN_8c0f7118_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f7118\n.set _FUN_8c0f7118, _FUN_8c0f7118_def\n");
//@unit 8c0f7204
#include "../decls.h"
int FUN_8c0f7204_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x2c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c0f6ac4(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 3) {
    iVar1 = FUN_8c0f7278(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 4) {
    iVar1 = FUN_8c0f692c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0f7204\n.set _FUN_8c0f7204, _FUN_8c0f7204_def\n");
//@unit 8c0f7258
#include "../decls.h"
undefined4 FUN_8c0f7258_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0f7204(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0f7258\n.set _FUN_8c0f7258, _FUN_8c0f7258_def\n");
//@unit 8c0f7278
#include "../decls.h"
float * FUN_8c0f7278_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f7278\n.set _FUN_8c0f7278, _FUN_8c0f7278_def\n");
//@unit 8c0f72ec
#include "../decls.h"
undefined4 FUN_8c0f72ec_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f72ec\n.set _FUN_8c0f72ec, _FUN_8c0f72ec_def\n");
//@unit 8c0f7408
#include "../decls.h"
undefined4 FUN_8c0f7408_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_copy(s0,ar4 + 0x1bc,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f7408\n.set _FUN_8c0f7408, _FUN_8c0f7408_def\n");
//@unit 8c0f7430
#include "../decls.h"
undefined4 noop_0f7430_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f7430\n.set _noop_0f7430, _noop_0f7430_def\n");
//@unit 8c0f7434
#include "../decls.h"
undefined4 noop_0f7434_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f7434\n.set _noop_0f7434, _noop_0f7434_def\n");
//@unit 8c0f7438
#include "../decls.h"
undefined4 noop_0f7438_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0f7438\n.set _noop_0f7438, _noop_0f7438_def\n");
//@unit 8c0f743c
#include "../decls.h"
uint FUN_8c0f743c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = get_field_4_0253e4(ar4 + 0x170,ar5,ar6,ar7);
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0f743c\n.set _FUN_8c0f743c, _FUN_8c0f743c_def\n");
//@unit 8c0f7470
#include "../decls.h"
uint FUN_8c0f7470_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c015bb8(ar4 + 0x178,ar5,ar6,ar7);
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0f7470\n.set _FUN_8c0f7470, _FUN_8c0f7470_def\n");
//@unit 8c0f74a4
#include "../decls.h"
undefined4 FUN_8c0f74a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126548),ar5,ar6,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b188;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b188,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126558),puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b194;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b194,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126568),puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b1a0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b1a0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126578),puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b1ac;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b1ac,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43b1c4,puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b1b8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b1b8,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43b1e0,puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b1d4;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b1d4,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43b1fc,puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b1f0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b1f0,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43b218,puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b20c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b20c,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43b234,puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b228;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b228,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43b250,puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b244;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b244,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c43b26c,puVar4,uVar2,ar7);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b260;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b260,ar7);
  uVar2 = Vec3_ctor_xyz(0x8c43b288,puVar4,uVar2,ar7);
  global_list_push(uVar2,(&Vec3_dtor),0x8c43b27c,ar7);
  uVar1 = 0x8c43b1fc;
  uVar3 = (*(code *)(&FUN_8c017010))
                    (0x8c43b2a4,0x8c43b1c4,0x8c43b1e0,0x8c43b1fc,0x8c43b218,
                     0x8c43b234,0x8c43b250,0x8c43b26c,0x8c43b288);
  puVar4 = (&Class_129938_m0_017084);
  uVar2 = 0x8c43b298;
  (*(code *)(&global_list_push))
            (uVar3,(&Class_129938_m0_017084),0x8c43b298,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c43b39c,puVar4,uVar2,uVar1);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b390;
  global_list_push(uVar3,(&Vec3_dtor),0x8c43b390,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c43b3b8,puVar4,uVar2,uVar1);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b3ac;
  global_list_push(uVar3,(&Vec3_dtor),0x8c43b3ac,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c43b3d4,puVar4,uVar2,uVar1);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b3c8;
  global_list_push(uVar3,(&Vec3_dtor),0x8c43b3c8,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c43b3f0,puVar4,uVar2,uVar1);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b3e4;
  global_list_push(uVar3,(&Vec3_dtor),0x8c43b3e4,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c43b40c,puVar4,uVar2,uVar1);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b400;
  global_list_push(uVar3,(&Vec3_dtor),0x8c43b400,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c43b428,puVar4,uVar2,uVar1);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b41c;
  global_list_push(uVar3,(&Vec3_dtor),0x8c43b41c,uVar1);
  uVar3 = Vec3_ctor_xyz(0x8c43b444,puVar4,uVar2,uVar1);
  puVar4 = (&Vec3_dtor);
  uVar2 = 0x8c43b438;
  global_list_push(uVar3,(&Vec3_dtor),0x8c43b438,uVar1);
  uVar2 = Vec3_ctor_xyz(0x8c43b460,puVar4,uVar2,uVar1);
  global_list_push(uVar2,(&Vec3_dtor),0x8c43b454,uVar1);
  uVar2 = 0x8c43b3d4;
  uVar1 = (*(code *)(&FUN_8c017010))
                    (0x8c43b47c,0x8c43b39c,0x8c43b3b8,0x8c43b3d4,0x8c43b3f0,0x8c43b40c,
                     0x8c43b428,0x8c43b444,0x8c43b460);
  uVar2 = (*(code *)(&global_list_push))
                    (uVar1,(&Class_129938_m0_017084),0x8c43b470,uVar2);
  return uVar2;
}

__asm__(".globl _FUN_8c0f74a4\n.set _FUN_8c0f74a4, _FUN_8c0f74a4_def\n");
//@unit 8c0f78b0
#include "../decls.h"
undefined4 FUN_8c0f78b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0f78cc(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0f78b0\n.set _FUN_8c0f78b0, _FUN_8c0f78b0_def\n");
//@unit 8c0f78cc
#include "../decls.h"
undefined4 FUN_8c0f78cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  return 0;
}

__asm__(".globl _FUN_8c0f78cc\n.set _FUN_8c0f78cc, _FUN_8c0f78cc_def\n");
//@unit 8c0f78d8
#include "../decls.h"
undefined4 * FUN_8c0f78d8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  FUN_8c0db304(ar4 + 2,ar5,ar6,ar7);
  (*(code *)(&FUN_8c010120))
            (ar4 + 0x13,(&FUN_8c0f78b0),(&free_if_nonnull_wrap_0f3ffc),8,3);
  ar7_00 = 8;
  ar5_00 = (&FUN_8c0f78b0);
  ar6_00 = (&free_if_nonnull_wrap_0f3ffc);
  (*(code *)(&FUN_8c010120))
            (ar4 + 0x1b,(&FUN_8c0f78b0),(&free_if_nonnull_wrap_0f3ffc),8,3);
  Vec3_ctor_zero((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero((int)ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
  ar4[1] = 0;
  *ar4 = 0;
  ar4[0x19] = 0;
  ar4[0x1a] = 0;
  vec3_clear((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(0x9c + (int)ar4) = 0xffffffff;
  vec3_clear((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(0x88 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f78d8\n.set _FUN_8c0f78d8, _FUN_8c0f78d8_def\n");
//@unit 8c0f79b8
#include "../decls.h"
int FUN_8c0f79b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ar4 + 100);
  for (iVar2 = ar4 + 0x4c; iVar2 != ar4 + iVar1 * 8 + 0x4c; iVar2 = iVar2 + 8) {
    FUN_8c0f78cc(iVar2,ar5,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  vec3_clear(ar4 + 0x8c,ar5,ar6,ar7);
  *(undefined4 *)(0x9c + ar4) = 0xffffffff;
  vec3_clear(ar4 + 0xa0,ar5,ar6,ar7);
  iVar1 = *(int *)(0x84 + ar4);
  for (iVar2 = ar4 + 0x6c; iVar2 != ar4 + iVar1 * 8 + 0x6c; iVar2 = iVar2 + 8) {
    FUN_8c0f78cc(iVar2,ar5,ar6,ar7);
  }
  *(undefined4 *)(0x84 + ar4) = 0;
  iVar1 = 0x88;
  *(undefined4 *)(0x88 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f79b8\n.set _FUN_8c0f79b8, _FUN_8c0f79b8_def\n");
//@unit 8c0f7a78
#include "../decls.h"
undefined4 FUN_8c0f7a78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126588),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c43b510;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b510,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126598),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c43b51c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b51c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1265a8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c43b528;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b528,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c1265b8),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c43b534,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0f7a78\n.set _FUN_8c0f7a78, _FUN_8c0f7a78_def\n");
//@unit 8c0f7b20
#include "../decls.h"
undefined4 main_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  game_init(ar4,ar5,ar6,ar7);
  while( true ) {
    uVar2 = 0x8c286ebc;
    iVar1 = game_poll_exit(0x8c286ebc,ar5,ar6,ar7);
    if (iVar1 < 0) break;
    game_frame(uVar2,ar5,ar6,ar7);
  }
  game_shutdown_a(uVar2,ar5,ar6,ar7);
  uVar2 = game_shutdown_b(uVar2,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _main\n.set _main, _main_def\n");
//@unit 8c0f7b70
#include "../decls.h"
undefined4 game_init_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  *(undefined4 *)(&DATA_8c1f5a2c) = (undefined *)((uint)(&DATA_8c1f5a2c) | 0xa0000000);
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

__asm__(".globl _game_init\n.set _game_init, _game_init_def\n");
//@unit 8c0f7df8
#include "../decls.h"
undefined4 game_shutdown_a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = 0x8c286ebc;
  FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7);
  FUN_8c25b37c(ar4_00,ar5,ar6,ar7);
  FUN_8c23403e(ar4_00,ar5,ar6,ar7);
  if (*(undefined4 *)0x8c43b570 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b570;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b574 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b574;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b578 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b578;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b57c != 0) {
    ar4_00 = *(undefined4 *)0x8c43b57c;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c43b580 != 0) {
    ar4_00 = *(undefined4 *)0x8c43b580;
    FUN_8c1fb57c(ar4_00,ar5,ar6,ar7);
  }
  uVar1 = FUN_8c102d40(ar4_00,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _game_shutdown_a\n.set _game_shutdown_a, _game_shutdown_a_def\n");
//@unit 8c0f7ea0
#include "../decls.h"
undefined4 FUN_8c0f7ea0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25b4ea(0x8c43b584,0x15e,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f7ea0\n.set _FUN_8c0f7ea0, _FUN_8c0f7ea0_def\n");
//@unit 8c0f7ec0
#include "../decls.h"
undefined4 FUN_8c0f7ec0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
                    
  }
  else {
    _DAT_8c126608 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0f7ec0\n.set _FUN_8c0f7ec0, _FUN_8c0f7ec0_def\n");
//@unit 8c0f7f78
#include "../decls.h"
int FUN_8c0f7f78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fdc20(ar4,ar5,ar6,ar7);
  FUN_8c0fa804(ar4 + 0x1054,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0f7f78\n.set _FUN_8c0f7f78, _FUN_8c0f7f78_def\n");
//@unit 8c0f7fa8
#include "../decls.h"
int FUN_8c0f7fa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0f7fa8\n.set _FUN_8c0f7fa8, _FUN_8c0f7fa8_def\n");
//@unit 8c0f7ff0
#include "../decls.h"
undefined4 FUN_8c0f7ff0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x89134 + ar4) = 0;
  *(undefined4 *)(0x8913c + ar4) = 0;
  *(undefined4 *)(0x89140 + ar4) = 0;
  *(undefined4 *)(0x1034 + ar4) = 0;
  uVar1 = FUN_8c0fa83c(ar4 + 0x1054,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f7ff0\n.set _FUN_8c0f7ff0, _FUN_8c0f7ff0_def\n");
//@unit 8c0f803c
#include "../decls.h"
undefined4 FUN_8c0f803c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  
  *(undefined4 *)(0x89140 + ar4) = ar5;
  ar5_00 = 0;
  uVar1 = FUN_8c0b93c0(*(undefined4 *)(0x89140 + ar4),0,ar6,ar7);
  *(undefined4 *)(0x1028 + ar4) = uVar1;
  uVar1 = (*(code *)(&get_field_c8_0bced0))
                    (*(undefined4 *)(0x89140 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(0x1030 + ar4) = uVar1;
  uVar1 = (*(code *)(&get_field_c4_0f8128))
                    (*(undefined4 *)(0x89140 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(0x1038 + ar4) = uVar1;
  if (*(int *)(0x1038 + ar4) < 0xb2) {
    *(int *)(0x1038 + ar4) = *(int *)(0x1038 + ar4) + 1;
  }
  else {
    *(undefined4 *)(0x1038 + ar4) = 0;
  }
  uVar1 = FUN_8c0b951c(*(undefined4 *)(0x89140 + ar4),ar5_00,ar6,ar7);
  *(undefined4 *)(0x103c + ar4) = uVar1;
  *(undefined4 *)(0x1040 + ar4) = 0;
  if (*(char *)(*(int *)(0x89140 + ar4) + 0x2c) == '\x01') {
    *(undefined4 *)(0x1040 + ar4) = 1;
  }
  uVar1 = (*(code *)(&FUN_8c0bb158))
                    (*(undefined4 *)(0x89140 + ar4),ar4 + 0x101c,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f803c\n.set _FUN_8c0f803c, _FUN_8c0f803c_def\n");
//@unit 8c0f8128
#include "../decls.h"
undefined4 get_field_c4_0f8128_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xc4 + ar4);
}

__asm__(".globl _get_field_c4_0f8128\n.set _get_field_c4_0f8128, _get_field_c4_0f8128_def\n");
//@unit 8c0f8134
#include "../decls.h"
int FUN_8c0f8134_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0fa688(ar4,ar5,ar6,ar7);
  FUN_8c0fa910(ar4 + 0x1054,ar5,ar6,ar7);
  iVar1 = 0x1014;
  *(undefined4 *)(0x1014 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f8134\n.set _FUN_8c0f8134, _FUN_8c0f8134_def\n");
//@unit 8c0f816c
#include "../decls.h"
int FUN_8c0f816c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  s_SPEECH_0faa98(ar4 + 0x1054,ar5,ar6,ar7);
  iVar4 = 0;
  if (*(int *)(0x89134 + ar4) != 0) {
    uVar2 = s_REQUEST_HOT_0f9780(ar4,ar5,ar6,ar7);
    *(undefined4 *)(0x89134 + ar4) = uVar2;
    iVar4 = 0;
    if (*(int *)(0x89140 + ar4) != 0) {
      uVar3 = FUN_8c028ee4(*(undefined4 *)(0x89140 + ar4),ar5,ar6,ar7);
      *(uint *)(0x102c + ar4) = uVar3 & 0xffff;
      *(undefined4 *)(0x1034 + ar4) = 0;
      uVar2 = (*(code *)(&FUN_8c1011b0))
                        (*(undefined4 *)(0x7cc + *(int *)(0x89140 + ar4)),ar5,ar6,ar7);
      iVar1 = 0x1034;
      iVar4 = 0x3c;
      if ((ushort)uVar2 < 0x3d) {
        *(undefined4 *)(0x1034 + ar4) = 1;
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}

__asm__(".globl _FUN_8c0f816c\n.set _FUN_8c0f816c, _FUN_8c0f816c_def\n");
//@unit 8c0f8214
#include "../decls.h"
int FUN_8c0f8214_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0fa9fc(ar4 + 0x1054,ar5,ar6,ar7);
  FUN_8c0fa70c(ar4,ar5,ar6,ar7);
  iVar1 = 0x89134;
  *(undefined4 *)(0x89134 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f8214\n.set _FUN_8c0f8214, _FUN_8c0f8214_def\n");
//@unit 8c0f824c
#include "../decls.h"
uint FUN_8c0f824c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&FUN_8c0fa944))
                    (ar4 + 0x1054,ar4 + 0x1010,*(undefined4 *)(0x89138 + ar4),ar7);
  if (iVar1 == 0) {
    *(undefined4 *)(0x89138 + ar4) = 0;
    *(undefined4 *)(0x89134 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0f824c\n.set _FUN_8c0f824c, _FUN_8c0f824c_def\n");
//@unit 8c0f82a4
#include "../decls.h"
undefined4 FUN_8c0f82a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  
  if (*(int *)(0x1014 + ar4) != 0) {
    if (*(int *)(0x1014 + ar4) != 1) {
      return 0;
    }
    uVar1 = ar5;
    ar6_00 = ar6;
    FUN_8c0f8214(ar4,ar5,ar6,ar7);
    if (*(int *)(0x8913c + ar4) == 1) {
      FUN_8c0fa6c8(ar4,uVar1,ar6_00,ar7);
    }
  }
  *(undefined4 *)(0x89138 + ar4) = 2;
  uVar1 = s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f82a4\n.set _FUN_8c0f82a4, _FUN_8c0f82a4_def\n");
//@unit 8c0f8320
#include "../decls.h"
undefined4 FUN_8c0f8320_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(0x1014 + ar4) == 0) {
    *(undefined4 *)(0x89138 + ar4) = 1;
    uVar1 = s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0f8320\n.set _FUN_8c0f8320, _FUN_8c0f8320_def\n");
//@unit 8c0f8368
#include "../decls.h"
undefined4 s_HIGYOLINE0_0f8370_def(int ar4,int ar5,int ar6,undefined4 ar7)

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

__asm__(".globl _s_HIGYOLINE0_0f8370\n.set _s_HIGYOLINE0_0f8370, _s_HIGYOLINE0_0f8370_def\n");
//@unit 8c0f970c
#include "../decls.h"
undefined4 s_FROGMANLINE2_0f970c_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_FROGMANLINE2_0f970c\n.set _s_FROGMANLINE2_0f970c, _s_FROGMANLINE2_0f970c_def\n");
//@unit 8c0f9774
#include "../decls.h"
undefined4 s_REQUEST_HOT_0f9780_def(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

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
        ar5_00 = (code *)(&switchdata_8c0f9836_8c0f9840)[(int)pcVar2];
                    
        switch(pcVar2) {
        case 0x0:
          pcVar3 = s_REQUEST_HOT_8c140aaa;
          strcpy(ar4_00,s_REQUEST_HOT_8c140aaa,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x1:
          pcVar3 = s_REQUEST_COLD_8c140ab6;
          strcpy(ar4_00,s_REQUEST_COLD_8c140ab6,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x2:
          pcVar3 = s_REQUEST_OXYGEN_8c140ac3;
          strcpy(ar4_00,s_REQUEST_OXYGEN_8c140ac3,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x3:
          pcVar3 = s_REQUEST_HUMIDITY_8c140ad2;
          strcpy(ar4_00,s_REQUEST_HUMIDITY_8c140ad2,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x4:
          pcVar3 = s_REQUEST_HUNGRY_8c140ae3;
          strcpy(ar4_00,s_REQUEST_HUNGRY_8c140ae3,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x5:
          pcVar3 = s_STATUS_SICK_8c140af2;
          strcpy(ar4_00,s_STATUS_SICK_8c140af2,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x8:
          pcVar3 = s_REQUEST_SLEEP_8c140afe;
          strcpy(ar4_00,s_REQUEST_SLEEP_8c140afe,ar6,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
          break;
        case 0x9:
          pcVar3 = s_STATUS_SNORE_8c140b0c;
          ar6 = strcpy;
          strcpy(ar4_00,s_STATUS_SNORE_8c140b0c,strcpy,ar7,in_stack_ffffff8c);
          ar5_00 = (code *)pcVar3;
        }
      }
      iVar1 = *(int *)(ar4 + 0x1044);
      if ((iVar1 < 7) && (-1 < iVar1)) {
                    
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

__asm__(".globl _s_REQUEST_HOT_0f9780\n.set _s_REQUEST_HOT_0f9780, _s_REQUEST_HOT_0f9780_def\n");
//@unit 8c0fa204
#include "../decls.h"
undefined4 s_CHAPTER_02d_0fa206_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_CHAPTER_02d_0fa206\n.set _s_CHAPTER_02d_0fa206, _s_CHAPTER_02d_0fa206_def\n");
//@unit 8c0fa2b8
#include "../decls.h"
undefined4 FUN_8c0fa2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(0x1014 + ar4) == 0) {
    return 0;
  }
  return *(undefined4 *)(0x89134 + ar4);
}

__asm__(".globl _FUN_8c0fa2b8\n.set _FUN_8c0fa2b8, _FUN_8c0fa2b8_def\n");
//@unit 8c0fa2d8
#include "../decls.h"
undefined4 FUN_8c0fa2d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(0x1014 + ar4) == 0) {
    return 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c0fa2d8\n.set _FUN_8c0fa2d8, _FUN_8c0fa2d8_def\n");
//@unit 8c0fa2f0
#include "../decls.h"
undefined4 FUN_8c0fa2f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0fa310(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fa2f0\n.set _FUN_8c0fa2f0, _FUN_8c0fa2f0_def\n");
//@unit 8c0fa310
#include "../decls.h"
undefined4 FUN_8c0fa310_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove(ar5,ar4,0x1010,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fa310\n.set _FUN_8c0fa310, _FUN_8c0fa310_def\n");
//@unit 8c0fa334
#include "../decls.h"
int FUN_8c0fa334_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  
  ar6_00 = 0x1010;
  memmove(ar4,ar5,0x1010,ar7);
  *(undefined4 *)(ar4 + 0xc) = 1;
  iVar1 = *(int *)(0x1040 + ar4);
  if (iVar1 == 1) {
    iVar2 = FUN_8c0fa658(ar4,ar5,ar6_00,ar7);
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fa334\n.set _FUN_8c0fa334, _FUN_8c0fa334_def\n");
//@unit 8c0fa388
#include "../decls.h"
undefined4 FUN_8c0fa388_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((ar5 < 0xd) && (-1 < ar5)) {
                    
    switch((uint)ar5) {
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

__asm__(".globl _FUN_8c0fa388\n.set _FUN_8c0fa388, _FUN_8c0fa388_def\n");
//@unit 8c0fa538
#include "../decls.h"
int FUN_8c0fa538_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fa538\n.set _FUN_8c0fa538, _FUN_8c0fa538_def\n");
//@unit 8c0fa5b4
#include "../decls.h"
undefined4 FUN_8c0fa5b4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _FUN_8c0fa5b4\n.set _FUN_8c0fa5b4, _FUN_8c0fa5b4_def\n");
//@unit 8c0fa5bc
#include "../decls.h"
undefined4 FUN_8c0fa5bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c014334))
                    (ar4 + 0x10,ar5,ar6,ar7,(&DATA_8c1408d4) + 0x2f9);
  return uVar1;
}

__asm__(".globl _FUN_8c0fa5bc\n.set _FUN_8c0fa5bc, _FUN_8c0fa5bc_def\n");
//@unit 8c0fa5f0
#include "../decls.h"
undefined4 FUN_8c0fa5f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c014334))
                    (ar4 + 0x14,ar5,ar6,ar7,(&DATA_8c1408d4) + 0x2f9);
  return uVar1;
}

__asm__(".globl _FUN_8c0fa5f0\n.set _FUN_8c0fa5f0, _FUN_8c0fa5f0_def\n");
//@unit 8c0fa624
#include "../decls.h"
undefined4 FUN_8c0fa624_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c014334))
                    (ar4 + 0x18,ar5,ar6,ar7,(&DATA_8c1408d4) + 0x2f9);
  return uVar1;
}

__asm__(".globl _FUN_8c0fa624\n.set _FUN_8c0fa624, _FUN_8c0fa624_def\n");
//@unit 8c0fa658
#include "../decls.h"
int FUN_8c0fa658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013bdc(ar4 + 0x4ac,ar5,ar6,ar7);
  return iVar1 + 1;
}

__asm__(".globl _FUN_8c0fa658\n.set _FUN_8c0fa658, _FUN_8c0fa658_def\n");
//@unit 8c0fa688
#include "../decls.h"
int FUN_8c0fa688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  FUN_8c01c944(ar4_00,ar5,ar6,ar7);
  iVar1 = 0x8913c;
  *(undefined4 *)(0x8913c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0fa688\n.set _FUN_8c0fa688, _FUN_8c0fa688_def\n");
//@unit 8c0fa6c8
#include "../decls.h"
int FUN_8c0fa6c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  FUN_8c01c964(ar4_00,(&DATA_8c1402d0),ar6,ar7);
  iVar1 = 0x8913c;
  *(undefined4 *)(0x8913c + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c0fa6c8\n.set _FUN_8c0fa6c8, _FUN_8c0fa6c8_def\n");
//@unit 8c0fa70c
#include "../decls.h"
int FUN_8c0fa70c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0x1018 + ar4);
  if (iVar1 == 1) {
    FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
    *(undefined4 *)(0x1018 + ar4) = 0;
    iVar1 = 0x89130;
    *(undefined4 *)(0x89130 + ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fa70c\n.set _FUN_8c0fa70c, _FUN_8c0fa70c_def\n");
//@unit 8c0fa740
#include "../decls.h"
undefined4 get_field_89130_0fa740_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x89130 + ar4);
}

__asm__(".globl _get_field_89130_0fa740\n.set _get_field_89130_0fa740, _get_field_89130_0fa740_def\n");
//@unit 8c0fa74c
#include "../decls.h"
undefined4 FUN_8c0fa74c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
                    
  }
  else {
    _DAT_8c126650 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0fa74c\n.set _FUN_8c0fa74c, _FUN_8c0fa74c_def\n");
//@unit 8c0fa804
#include "../decls.h"
undefined4 FUN_8c0fa804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}

__asm__(".globl _FUN_8c0fa804\n.set _FUN_8c0fa804, _FUN_8c0fa804_def\n");
//@unit 8c0fa80c
#include "../decls.h"
int free_if_nonnull_wrap_0fa80c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0fa80c\n.set _free_if_nonnull_wrap_0fa80c, _free_if_nonnull_wrap_0fa80c_def\n");
//@unit 8c0fa83c
#include "../decls.h"
undefined4 FUN_8c0fa83c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  undefined1 auStack_14 [16];
  
  *(undefined1 *)(ar4 + 5) = 0;
  *(undefined1 *)(ar4 + 0xf) = 0;
  ar4[0xe] = 0;
  ar4[0xd] = 0;
  *(undefined1 *)(ar4 + 0x17) = 0;
  *(undefined4 *)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(0x88 + (int)ar4) = 0;
  *(undefined1 *)(0x90 + (int)ar4) = 0;
  *(undefined4 *)(0xb4 + (int)ar4) = 0;
  *(undefined4 *)(0xb0 + (int)ar4) = 0;
  FUN_8c1f8176(auStack_14,ar5,ar6,ar7);
  ar5_00 = (int)ar4 + 0xc8;
  FUN_8c1f826c(auStack_14,ar5_00,ar6,ar7);
  uVar1 = FUN_8c01f528(0x8c3dd7dc,ar5_00,ar6,ar7);
  ar4[2] = uVar1;
  uVar1 = FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7);
  ar4[3] = uVar1;
  *ar4 = 1;
  FUN_8c0fda80(ar4,ar5_00,ar6,ar7);
  FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0fa83c\n.set _FUN_8c0fa83c, _FUN_8c0fa83c_def\n");
//@unit 8c0fa910
#include "../decls.h"
undefined4 FUN_8c0fa910_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fa9fc(ar4,ar5,ar6,ar7);
  while (*ar4 != 1) {
    s_SPEECH_0faa98(ar4,ar5,ar6,ar7);
  }
  *ar4 = 1;
  return 1;
}

__asm__(".globl _FUN_8c0fa910\n.set _FUN_8c0fa910, _FUN_8c0fa910_def\n");
//@unit 8c0fa944
#include "../decls.h"
undefined4 FUN_8c0fa944_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*ar4 == 1) {
    ar4[4] = ar5;
    uVar1 = ar6;
    iVar2 = s_SPEECH_0fae26(ar4,ar5,ar6,ar7);
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
      *(undefined4 *)(0x880d4 + (int)ar4) = 0;
      *(undefined4 *)(0x880d8 + (int)ar4) = 0;
      FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,uVar1,ar7);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fa944\n.set _FUN_8c0fa944, _FUN_8c0fa944_def\n");
//@unit 8c0fa9fc
#include "../decls.h"
undefined4 FUN_8c0fa9fc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((1 < *ar4) && (uVar1 = 1, *(int *)(0xb0 + (int)ar4) != 1)) {
    FUN_8c0faa40(ar4,ar5,ar6,ar7);
    *ar4 = 1;
    *(undefined4 *)(ar4[4] + 4) = 0;
    uVar1 = FUN_8c0fda5c(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fa9fc\n.set _FUN_8c0fa9fc, _FUN_8c0fa9fc_def\n");
//@unit 8c0faa40
#include "../decls.h"
undefined4 FUN_8c0faa40_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (1 < *ar4) {
    if (*ar4 == 7) {
      ar5 = *(undefined4 *)(0xb4 + (int)ar4);
      pack_release_entry_handle(0x8c2b59d0,ar5,ar6,ar7);
      *ar4 = 6;
    }
    *(undefined4 *)(0xc0 + (int)ar4) = 0;
    uVar1 = FUN_8c0fd8d0(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0faa40\n.set _FUN_8c0faa40, _FUN_8c0faa40_def\n");
//@unit 8c0faa94
#include "../decls.h"
undefined * s_SPEECH_0faa98_def(int *ar4,undefined4 ar5,char *ar6,int *ar7)

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
  puVar1 = (&switchdata_8c0fab12_8c0fab28)[iVar2 + -1];
                    
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

__asm__(".globl _s_SPEECH_0faa98\n.set _s_SPEECH_0faa98, _s_SPEECH_0faa98_def\n");
//@unit 8c0fae24
#include "../decls.h"
undefined4 s_SPEECH_0fae26_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

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

__asm__(".globl _s_SPEECH_0fae26\n.set _s_SPEECH_0fae26, _s_SPEECH_0fae26_def\n");
//@unit 8c0faf30
#include "../decls.h"
undefined4 FUN_8c0faf30_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0faf30\n.set _FUN_8c0faf30, _FUN_8c0faf30_def\n");
//@unit 8c0faf98
#include "../decls.h"
undefined4 s_SPEECH_0faf9e_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

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

__asm__(".globl _s_SPEECH_0faf9e\n.set _s_SPEECH_0faf9e, _s_SPEECH_0faf9e_def\n");
//@unit 8c0fb0d4
#include "../decls.h"
undefined4 s_ERROR_0fb0de_def(undefined4 *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar4_00;
  
  if (*ar5 == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else if (**(char **)(0x84 + (int)ar4) == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = FUN_8c0faf30(ar5,(&DATA_8c141dd0) + 0x13,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = 2;
      *ar4 = 2;
    }
    else if (*ar5 == '#') {
      *(undefined4 *)(0x88 + (int)ar4) = *(undefined4 *)(0x84 + (int)ar4);
      uVar1 = 6;
      *ar4 = 6;
    }
    else if (*ar5 == '$') {
      iVar2 = *(int *)(0x88 + (int)ar4) +
              *(int *)(*(int *)(0x88 + (int)ar4) + 0x24) + 0x28;
      if (*(int *)(iVar2 + 0x20) == 0) {
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        *(int *)(0x88 + (int)ar4) = iVar2;
        uVar1 = 6;
        *ar4 = 6;
      }
    }
    else {
      for (ar4_00 = *(char **)(0x84 + (int)ar4);
          (*(int *)(ar4_00 + 0x20) != 0 && (*ar4_00 != '\0'));
          ar4_00 = ar4_00 + *(int *)(ar4_00 + 0x24) + 0x28) {
        iVar2 = FUN_8c0faf30(ar4_00,ar5,ar6,ar7);
        if (iVar2 == 0) {
          *(char **)(0x88 + (int)ar4) = ar4_00;
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

__asm__(".globl _s_ERROR_0fb0de\n.set _s_ERROR_0fb0de, _s_ERROR_0fb0de_def\n");
//@unit 8c0fb1d4
#include "../decls.h"
undefined4 s_ERR_wrap_0fb1d4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(0xb0 + (int)ar4) == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    uVar1 = s_ERROR_0fb0de(ar4,(&DATA_8c141dd0) + 0x1a,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_ERR_wrap_0fb1d4\n.set _s_ERR_wrap_0fb1d4, _s_ERR_wrap_0fb1d4_def\n");
//@unit 8c0fb20c
#include "../decls.h"
undefined4 FUN_8c0fb20c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fb20c\n.set _FUN_8c0fb20c, _FUN_8c0fb20c_def\n");
//@unit 8c0fb268
#include "../decls.h"
undefined4 FUN_8c0fb268_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fb268\n.set _FUN_8c0fb268, _FUN_8c0fb268_def\n");
//@unit 8c0fb494
#include "../decls.h"
undefined * FUN_8c0fb494_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    ar5_01 = (undefined *)(uint)ar4[0x2d];
    ar5_00 = FUN_8c021f4c(0x8c2b59d0,ar5_01,ar6_00,ar7_00,&iStack_1c);
    puVar1 = (undefined *)0x8;
    if ((ar5_00 < 9) && (-1 < ar5_00)) {
      puVar1 = (&switchdata_8c0fb4fa_8c0fb500)[ar5_00];
      iStack_20 = ar5_00;
                    
      switch((uint)ar5_00) {
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

__asm__(".globl _FUN_8c0fb494\n.set _FUN_8c0fb494, _FUN_8c0fb494_def\n");
//@unit 8c0fb780
#include "../decls.h"
undefined4 FUN_8c0fb780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c0fb83c))
                    (ar4,*(undefined4 *)
                          (*(int *)(0x8c + ar4) * 0x24 + *(int *)(0x88 + ar4) + 0x50
                          ),ar5,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fb780\n.set _FUN_8c0fb780, _FUN_8c0fb780_def\n");
//@unit 8c0fb7d0
#include "../decls.h"
undefined4 FUN_8c0fb7d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x68);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
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

__asm__(".globl _FUN_8c0fb7d0\n.set _FUN_8c0fb7d0, _FUN_8c0fb7d0_def\n");
//@unit 8c0fb83c
#include "../decls.h"
undefined4 FUN_8c0fb83c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 8;
  if ((ar6 < 9) && (3 < ar6)) {
                    
    switch((uint)ar6) {
    case 4:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
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
                    
        switch((uint)ar5) {
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
                    
        switch((uint)ar5) {
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
                    
        switch((uint)ar5) {
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
                    
        switch((uint)ar5) {
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

__asm__(".globl _FUN_8c0fb83c\n.set _FUN_8c0fb83c, _FUN_8c0fb83c_def\n");
//@unit 8c0fbdfc
#include "../decls.h"
undefined4 s_SPEECH_0fbe00_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

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

__asm__(".globl _s_SPEECH_0fbe00\n.set _s_SPEECH_0fbe00, _s_SPEECH_0fbe00_def\n");
//@unit 8c0fbf28
#include "../decls.h"
undefined4 s_SPEECH_0fbf2e_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined1 *ar7)

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
    ar5_03 = (char *)(uint)ar4[0x22];
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

__asm__(".globl _s_SPEECH_0fbf2e\n.set _s_SPEECH_0fbf2e, _s_SPEECH_0fbf2e_def\n");
//@unit 8c0fc3e4
#include "../decls.h"
undefined4 FUN_8c0fc3e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x74) = 1;
  uVar1 = FUN_8c0fc40c(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc3e4\n.set _FUN_8c0fc3e4, _FUN_8c0fc3e4_def\n");
//@unit 8c0fc40c
#include "../decls.h"
undefined4 FUN_8c0fc40c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  FUN_8c1f8176(auStack_10,ar5,ar6,ar7);
  uVar1 = FUN_8c1f826c(auStack_10,ar4 + 0xc8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc40c\n.set _FUN_8c0fc40c, _FUN_8c0fc40c_def\n");
//@unit 8c0fc440
#include "../decls.h"
undefined4 get_field_c8_0fc440_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xc8 + ar4);
}

__asm__(".globl _get_field_c8_0fc440\n.set _get_field_c8_0fc440, _get_field_c8_0fc440_def\n");
//@unit 8c0fc44c
#include "../decls.h"
undefined4 FUN_8c0fc44c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fc44c\n.set _FUN_8c0fc44c, _FUN_8c0fc44c_def\n");
//@unit 8c0fc4c4
#include "../decls.h"
undefined4 FUN_8c0fc4c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0fc4c4\n.set _FUN_8c0fc4c4, _FUN_8c0fc4c4_def\n");
//@unit 8c0fc4fc
#include "../decls.h"
undefined4 FUN_8c0fc4fc_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined1 auStack_18 [16];
  
  if ((*(int *)(ar5 + 0x28) != 1) && (*(int *)(ar5 + 0x28) != 2)) {
    for (iVar2 = 0; iVar2 < *(int *)(ar5 + 0x6c); iVar2 = iVar2 + 1) {
      ar5_00 = ar5 + iVar2 * 0x68 + 0x70;
      iVar1 = FUN_8c0faf30((&DATA_8c141dd0) + 0x4c,ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        FUN_8c014334(auStack_18,ar5_00,ar6,ar7,(&DATA_8c141dd0) + 0x40);
        iVar1 = FUN_8c0faf30(auStack_18,ar5 + iVar2 * 0x68 + 0xb0,ar6,ar7);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0fc4fc\n.set _FUN_8c0fc4fc, _FUN_8c0fc4fc_def\n");
//@unit 8c0fc5ac
#include "../decls.h"
undefined4 FUN_8c0fc5ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(0x88 + ar4);
  uVar1 = rand(ar4,ar5,ar6,ar7);
  iVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                    (uVar1,*(undefined4 *)(iVar3 + 0x28),ar6,ar7);
  uVar1 = s_ERROR_0fb0de(ar4,iVar3 + iVar2 * 0x20 + 0x2c,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc5ac\n.set _FUN_8c0fc5ac, _FUN_8c0fc5ac_def\n");
//@unit 8c0fc608
#include "../decls.h"
undefined4 FUN_8c0fc608_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(0x88 + ar4);
  iVar1 = FUN_8c0fcd2c(ar4,iVar4 + 0x28,ar6,ar7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (*(int *)(iVar4 + 0x30) <= iVar1) {
    iVar1 = *(int *)(iVar4 + 0x30) + -1;
  }
  iVar2 = FUN_8c0fcd2c(ar4,iVar4 + 0x2c,ar6,ar7);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (*(int *)(iVar4 + 0x34) <= iVar2) {
    iVar2 = *(int *)(iVar4 + 0x34) + -1;
  }
  uVar3 = (*(code *)(&s_ERROR_0fb0de))
                    (ar4,iVar4 + (iVar2 * *(int *)(iVar4 + 0x30) + iVar1) * 0x20 + 0x38,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c0fc608\n.set _FUN_8c0fc608, _FUN_8c0fc608_def\n");
//@unit 8c0fc69c
#include "../decls.h"
undefined4 FUN_8c0fc69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fc69c\n.set _FUN_8c0fc69c, _FUN_8c0fc69c_def\n");
//@unit 8c0fc7c4
#include "../decls.h"
undefined4 FUN_8c0fc7c4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fc7c4\n.set _FUN_8c0fc7c4, _FUN_8c0fc7c4_def\n");
//@unit 8c0fc94c
#include "../decls.h"
undefined4 FUN_8c0fc94c_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

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
                    
      switch(iVar4) {
      case 0x4b:
        uVar3 = FUN_8c013bdc(ar6,ar5,ar6,ar7);
        uVar3 = FUN_8c0fdd98(*(undefined4 *)(*(int *)(ar4 + 0x10) + 0x40),uVar3,ar6,ar7);
        return uVar3;
      case 0x50:
        return (&switchdata_8c0fc9ba_8c0fc9c0)[iVar4 + -0x4b];
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

__asm__(".globl _FUN_8c0fc94c\n.set _FUN_8c0fc94c, _FUN_8c0fc94c_def\n");
//@unit 8c0fcd2c
#include "../decls.h"
uint FUN_8c0fcd2c_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fcd2c\n.set _FUN_8c0fcd2c, _FUN_8c0fcd2c_def\n");
//@unit 8c0fd764
#include "../decls.h"
undefined4 FUN_8c0fd764_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*ar5;
  if ((iVar2 < 0x74) && (0x40 < iVar2)) {
                    
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

__asm__(".globl _FUN_8c0fd764\n.set _FUN_8c0fd764, _FUN_8c0fd764_def\n");
//@unit 8c0fd8d0
#include "../decls.h"
int FUN_8c0fd8d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_94 [8];
  int iStack_8c;
  
  if ((*(int *)(0xb0 + ar4) == 1) || (*(int *)(0xc0 + ar4) == 0)) {
    if (*(int *)(ar4 + 4) == 0) {
      return 0;
    }
    *(undefined4 *)(ar4 + 4) = 3;
  }
  iVar1 = *(int *)(ar4 + 4);
  if (iVar1 == 0) {
    iVar2 = FUN_8c01d754(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    iVar1 = 0xc0;
    if (iVar2 == 0) {
      *(undefined4 *)(0xc0 + ar4) = 0;
    }
    else {
      iVar1 = 1;
      *(undefined4 *)(ar4 + 4) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(0xc0 + ar4) = 2;
    FUN_8c01bcf4(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
    FUN_8c01bd88(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
    FUN_8c01c964(*(undefined4 *)(ar4 + 0xc),(&DATA_8c140bd0),ar6,ar7);
    *(undefined4 *)(0xb8 + ar4) = 0x12c;
    iVar1 = 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  else if (iVar1 == 2) {
    FUN_8c01d684(*(undefined4 *)(ar4 + 8),auStack_94,ar6,ar7);
    if (iStack_8c != 0) {
      if (iStack_8c == 2) {
        *(undefined4 *)(0xc0 + ar4) = 3;
        *(undefined4 *)(ar4 + 4) = 1;
        return 1;
      }
      if (iStack_8c != 3) {
        *(undefined4 *)(0xc0 + ar4) = 4;
        if (0 < *(int *)(0xb8 + ar4)) {
          return *(int *)(0xb8 + ar4);
        }
        *(undefined4 *)(0xc0 + ar4) = 5;
        *(undefined4 *)(ar4 + 4) = 1;
        return 1;
      }
      *(undefined4 *)(0xc0 + ar4) = 6;
      piVar3 = *(int **)(*(int *)(ar4 + 0x10) + 0x3c);
      *piVar3 = *piVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 100) =
           **(undefined4 **)(*(int *)(ar4 + 0x10) + 0x3c);
    }
    iVar1 = 3;
    *(undefined4 *)(ar4 + 4) = 3;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(0xc0 + ar4) = 0;
    FUN_8c01d8a0(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    FUN_8c0fda5c(ar4,ar5,ar6,ar7);
    iVar1 = 0;
    *(undefined4 *)(ar4 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fd8d0\n.set _FUN_8c0fd8d0, _FUN_8c0fd8d0_def\n");
//@unit 8c0fda28
#include "../decls.h"
undefined4 FUN_8c0fda28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  for (; ar5 < 0x10; ar5 = ar5 + 1) {
    *(undefined1 *)(0xc8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40) + ar5 * 0x20) = 0;
  }
  return 0x10;
}

__asm__(".globl _FUN_8c0fda28\n.set _FUN_8c0fda28, _FUN_8c0fda28_def\n");
//@unit 8c0fda5c
#include "../decls.h"
undefined4 FUN_8c0fda5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c01c964))
                    (*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(0xc4 + ar4),ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fda5c\n.set _FUN_8c0fda5c, _FUN_8c0fda5c_def\n");
//@unit 8c0fda80
#include "../decls.h"
undefined4 FUN_8c0fda80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memset(ar4 + 0xd0,0,0x88001,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fda80\n.set _FUN_8c0fda80, _FUN_8c0fda80_def\n");
//@unit 8c0fdaac
#include "../decls.h"
undefined4 FUN_8c0fdaac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fdaac\n.set _FUN_8c0fdaac, _FUN_8c0fdaac_def\n");
//@unit 8c0fdc20
#include "../decls.h"
undefined4 * FUN_8c0fdc20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fdc20\n.set _FUN_8c0fdc20, _FUN_8c0fdc20_def\n");
//@unit 8c0fdc98
#include "../decls.h"
undefined1 * FUN_8c0fdc98_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    *(undefined4 *)(ar4 + 0x80 + iVar1 * 4) = 0;
  }
  *(undefined4 *)(ar4 + 0xb0) = 0;
  *(undefined4 *)(ar4 + 0xb4) = 0;
  *(undefined4 *)(ar4 + 0xb8) = 0;
  *(undefined4 *)(ar4 + 0xbc) = 0;
  *(undefined4 *)(ar4 + 0xc0) = 0;
  *(undefined4 *)(ar4 + 0xc4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    ar4[0xc8 + iVar1 * 0x20] = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0fdc98\n.set _FUN_8c0fdc98, _FUN_8c0fdc98_def\n");
//@unit 8c0fdd68
#include "../decls.h"
undefined4 FUN_8c0fdd68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0fdd98(ar4,*(int *)(ar4 + 0x68) + ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fdd68\n.set _FUN_8c0fdd68, _FUN_8c0fdd68_def\n");
//@unit 8c0fdd98
#include "../decls.h"
undefined4 FUN_8c0fdd98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fdd98\n.set _FUN_8c0fdd98, _FUN_8c0fdd98_def\n");
//@unit 8c0fddc4
#include "../decls.h"
int FUN_8c0fddc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fddc4\n.set _FUN_8c0fddc4, _FUN_8c0fddc4_def\n");
//@unit 8c0fdde4
#include "../decls.h"
int FUN_8c0fdde4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fdde4\n.set _FUN_8c0fdde4, _FUN_8c0fdde4_def\n");
//@unit 8c0fde34
#include "../decls.h"
int FUN_8c0fde34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fde34\n.set _FUN_8c0fde34, _FUN_8c0fde34_def\n");
//@unit 8c0fde5c
#include "../decls.h"
int FUN_8c0fde5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fde5c\n.set _FUN_8c0fde5c, _FUN_8c0fde5c_def\n");
//@unit 8c0fdf08
#include "../decls.h"
undefined4 FUN_8c0fdf08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0fdf08\n.set _FUN_8c0fdf08, _FUN_8c0fdf08_def\n");
//@unit 8c0fdf10
#include "../decls.h"
undefined4 FUN_8c0fdf10_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0fdf10\n.set _FUN_8c0fdf10, _FUN_8c0fdf10_def\n");
//@unit 8c0fdf18
#include "../decls.h"
int FUN_8c0fdf18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fdf18\n.set _FUN_8c0fdf18, _FUN_8c0fdf18_def\n");
//@unit 8c0fdf74
#include "../decls.h"
int FUN_8c0fdf74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fdf74\n.set _FUN_8c0fdf74, _FUN_8c0fdf74_def\n");
//@unit 8c0fe018
#include "../decls.h"
int s_Item_pointer_is_NULL_CItemLi_0fe01c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_Item_pointer_is_NULL_CItemLi_0fe01c\n.set _s_Item_pointer_is_NULL_CItemLi_0fe01c, _s_Item_pointer_is_NULL_CItemLi_0fe01c_def\n");
//@unit 8c0fe108
#include "../decls.h"
undefined4 s_Invalid_Item_number_CItemLis_0fe110_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_Invalid_Item_number_CItemLis_0fe110\n.set _s_Invalid_Item_number_CItemLis_0fe110, _s_Invalid_Item_number_CItemLis_0fe110_def\n");
//@unit 8c0fe1b8
#include "../decls.h"
int FUN_8c0fe1b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe1b8\n.set _FUN_8c0fe1b8, _FUN_8c0fe1b8_def\n");
//@unit 8c0fe250
#include "../decls.h"
int FUN_8c0fe250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe250\n.set _FUN_8c0fe250, _FUN_8c0fe250_def\n");
//@unit 8c0fe2a0
#include "../decls.h"
int FUN_8c0fe2a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe2a0\n.set _FUN_8c0fe2a0, _FUN_8c0fe2a0_def\n");
//@unit 8c0fe334
#include "../decls.h"
int s_Item_pointer_is_NULL_CNodePt_0fe338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_Item_pointer_is_NULL_CNodePt_0fe338\n.set _s_Item_pointer_is_NULL_CNodePt_0fe338, _s_Item_pointer_is_NULL_CNodePt_0fe338_def\n");
//@unit 8c0fe41c
#include "../decls.h"
undefined4 s_Invalid_Item_number_CNodePtr_0fe424_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_Invalid_Item_number_CNodePtr_0fe424\n.set _s_Invalid_Item_number_CNodePtr_0fe424, _s_Invalid_Item_number_CNodePtr_0fe424_def\n");
//@unit 8c0fe4c4
#include "../decls.h"
undefined4 FUN_8c0fe4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fe4c4\n.set _FUN_8c0fe4c4, _FUN_8c0fe4c4_def\n");
//@unit 8c0fe4f8
#include "../decls.h"
int FUN_8c0fe4f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe4f8\n.set _FUN_8c0fe4f8, _FUN_8c0fe4f8_def\n");
//@unit 8c0fe59c
#include "../decls.h"
int FUN_8c0fe59c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe59c\n.set _FUN_8c0fe59c, _FUN_8c0fe59c_def\n");
//@unit 8c0fe5f0
#include "../decls.h"
int FUN_8c0fe5f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe5f0\n.set _FUN_8c0fe5f0, _FUN_8c0fe5f0_def\n");
//@unit 8c0fe690
#include "../decls.h"
int s_CWaterSnowList_TakeOut_0fe694_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_CWaterSnowList_TakeOut_0fe694\n.set _s_CWaterSnowList_TakeOut_0fe694, _s_CWaterSnowList_TakeOut_0fe694_def\n");
//@unit 8c0fe764
#include "../decls.h"
undefined4 s_CWaterSnowList_GetWaterSnowO_0fe76c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(0xd0 + ar4) < ar5)) {
    (*(code *)(&report_error_message))
              ((&DATA_8c141e34) + 0x217,
               (&DATA_8c141e34) + 0x22b,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}

__asm__(".globl _s_CWaterSnowList_GetWaterSnowO_0fe76c\n.set _s_CWaterSnowList_GetWaterSnowO_0fe76c, _s_CWaterSnowList_GetWaterSnowO_0fe76c_def\n");
//@unit 8c0fe7f4
#include "../decls.h"
undefined4 FUN_8c0fe7f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0xd0) = 0;
  return 0xd0;
}

__asm__(".globl _FUN_8c0fe7f4\n.set _FUN_8c0fe7f4, _FUN_8c0fe7f4_def\n");
//@unit 8c0fe82c
#include "../decls.h"
int FUN_8c0fe82c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe82c\n.set _FUN_8c0fe82c, _FUN_8c0fe82c_def\n");
//@unit 8c0fe8c4
#include "../decls.h"
int FUN_8c0fe8c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fe8c4\n.set _FUN_8c0fe8c4, _FUN_8c0fe8c4_def\n");
//@unit 8c0fe95c
#include "../decls.h"
int s_CItemGLoadRequestList_TakeOu_0fe960_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_CItemGLoadRequestList_TakeOu_0fe960\n.set _s_CItemGLoadRequestList_TakeOu_0fe960, _s_CItemGLoadRequestList_TakeOu_0fe960_def\n");
//@unit 8c0fea2c
#include "../decls.h"
undefined4 s_CItemGLoadRequestList_GetPtr_0fea34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x48) < ar5)) {
    (*(code *)(&report_error_message))
              ((&DATA_8c141e34) + 0x28e,
               (&DATA_8c141e34) + 0x2a2,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}

__asm__(".globl _s_CItemGLoadRequestList_GetPtr_0fea34\n.set _s_CItemGLoadRequestList_GetPtr_0fea34, _s_CItemGLoadRequestList_GetPtr_0fea34_def\n");
//@unit 8c0feab8
#include "../decls.h"
undefined4 FUN_8c0feab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0feab8\n.set _FUN_8c0feab8, _FUN_8c0feab8_def\n");
//@unit 8c0feaec
#include "../decls.h"
int FUN_8c0feaec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fddc4(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0feaec\n.set _FUN_8c0feaec, _FUN_8c0feaec_def\n");
//@unit 8c0feb0c
#include "../decls.h"
undefined4 FUN_8c0feb0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c010120(ar4,(&FUN_8c0feaec),(&FUN_8c0da130),0x10,0x23);
  return ar4;
}

__asm__(".globl _FUN_8c0feb0c\n.set _FUN_8c0feb0c, _FUN_8c0feb0c_def\n");
//@unit 8c0feb3c
#include "../decls.h"
undefined4 FUN_8c0feb3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0feb3c\n.set _FUN_8c0feb3c, _FUN_8c0feb3c_def\n");
//@unit 8c0feb88
#include "../decls.h"
undefined4 FUN_8c0feb88_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0xc) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0feb88\n.set _FUN_8c0feb88, _FUN_8c0feb88_def\n");
//@unit 8c0feb98
#include "../decls.h"
int FUN_8c0feb98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fdde4(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0feb98\n.set _FUN_8c0feb98, _FUN_8c0feb98_def\n");
//@unit 8c0febbc
#include "../decls.h"
undefined4 FUN_8c0febbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c010120(ar4,(&FUN_8c0feb98),(&FUN_8c0c4a90),0x5c,0x96);
  return ar4;
}

__asm__(".globl _FUN_8c0febbc\n.set _FUN_8c0febbc, _FUN_8c0febbc_def\n");
//@unit 8c0febf0
#include "../decls.h"
undefined4 FUN_8c0febf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x96 <= iVar1) {
      return 0;
    }
    if (*(int *)(ar4 + iVar1 * 0x5c + 0x58) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(ar4 + iVar1 * 0x5c + 0x58) = 1;
  return ar4 + iVar1 * 0x5c;
}

__asm__(".globl _FUN_8c0febf0\n.set _FUN_8c0febf0, _FUN_8c0febf0_def\n");
//@unit 8c0fec4c
#include "../decls.h"
undefined4 FUN_8c0fec4c_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0x58) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fec4c\n.set _FUN_8c0fec4c, _FUN_8c0fec4c_def\n");
//@unit 8c0fec60
#include "../decls.h"
int FUN_8c0fec60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fde34(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fec60\n.set _FUN_8c0fec60, _FUN_8c0fec60_def\n");
//@unit 8c0fec80
#include "../decls.h"
undefined4 FUN_8c0fec80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c010120(ar4,(&FUN_8c0fec60),(&FUN_8c0c02e8),0x18,0x19);
  return ar4;
}

__asm__(".globl _FUN_8c0fec80\n.set _FUN_8c0fec80, _FUN_8c0fec80_def\n");
//@unit 8c0fecb0
#include "../decls.h"
undefined4 FUN_8c0fecb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fecb0\n.set _FUN_8c0fecb0, _FUN_8c0fecb0_def\n");
//@unit 8c0fed08
#include "../decls.h"
undefined4 FUN_8c0fed08_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0x14) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fed08\n.set _FUN_8c0fed08, _FUN_8c0fed08_def\n");
//@unit 8c0fed18
#include "../decls.h"
int FUN_8c0fed18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fed44(ar4,ar5,ar6,ar7);
  FUN_8c0fec80(ar4 + 0x4c,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0fed18\n.set _FUN_8c0fed18, _FUN_8c0fed18_def\n");
//@unit 8c0fed44
#include "../decls.h"
undefined4 FUN_8c0fed44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0fe82c(ar4,(&DATA_8c141e34) + 0x2c8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fed44\n.set _FUN_8c0fed44, _FUN_8c0fed44_def\n");
//@unit 8c0fed70
#include "../decls.h"
int s_CItemGLoader_RegistToLoad_0fed74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = FUN_8c0fecb0(ar4 + 0x4c,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c141e34) + 0x2c9,
               (&DATA_8c141e34) + 0x2dd,1,2);
  }
  else {
    *(undefined4 *)(ar5_00 + 8) = ar5;
    *(undefined4 *)(ar5_00 + 0xc) = ar6;
    *(undefined4 *)(ar5_00 + 0x10) = 1;
    FUN_8c0fe8c4(ar4,ar5_00,ar6_00,ar7);
  }
  return ar5_00;
}

__asm__(".globl _s_CItemGLoader_RegistToLoad_0fed74\n.set _s_CItemGLoader_RegistToLoad_0fed74, _s_CItemGLoader_RegistToLoad_0fed74_def\n");
//@unit 8c0fedf4
#include "../decls.h"
int FUN_8c0fedf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  iVar1 = get_field_48_0feea8(ar4,ar5,ar6,ar7);
  ar4_00 = 0;
  if (iVar1 != 0) {
    ar4_00 = FUN_8c0fee88(ar4,ar5_00,ar6,ar7);
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(int *)(ar4_00 + 0x10) != 2) {
        ar6 = *(undefined4 *)(ar4_00 + 0xc);
        ar5_00 = ar5;
        iVar2 = (**(code **)(0xdc + *(int *)(*(int *)(ar4_00 + 8) + 8)))
                          (*(int *)(ar4_00 + 8),ar5,ar6,ar7);
        if (iVar2 == 1) {
          *(undefined4 *)(ar4_00 + 0x10) = 2;
        }
      }
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0fedf4\n.set _FUN_8c0fedf4, _FUN_8c0fedf4_def\n");
//@unit 8c0fee88
#include "../decls.h"
undefined4 FUN_8c0fee88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = list_node_next(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fee88\n.set _FUN_8c0fee88, _FUN_8c0fee88_def\n");
//@unit 8c0feea8
#include "../decls.h"
undefined4 get_field_48_0feea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x48);
}

__asm__(".globl _get_field_48_0feea8\n.set _get_field_48_0feea8, _get_field_48_0feea8_def\n");
//@unit 8c0feeb0
#include "../decls.h"
undefined4 FUN_8c0feeb0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int aiStack_14 [2];
  
  aiStack_14[0] = *ar5;
  uVar1 = *(undefined4 *)(aiStack_14[0] + 8);
  *ar5 = 0;
  s_CItemGLoadRequestList_TakeOu_0fe960(ar4,aiStack_14[0],ar6,ar7);
  FUN_8c0fed08(ar4 + 0x4c,aiStack_14,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0feeb0\n.set _FUN_8c0feeb0, _FUN_8c0feeb0_def\n");
//@unit 8c0feef8
#include "../decls.h"
uint FUN_8c0feef8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)(*(int *)(ar5 + 0x10) == 2);
}

__asm__(".globl _FUN_8c0feef8\n.set _FUN_8c0feef8, _FUN_8c0feef8_def\n");
//@unit 8c0fef10
#include "../decls.h"
undefined4 FUN_8c0fef10_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_c [2];
  
  auStack_c[0] = 0;
  while( true ) {
    iVar1 = get_field_48_0feea8(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    iVar1 = get_field_48_0feea8(ar4,ar5,ar6,ar7);
    auStack_c[0] = (*(code *)(&s_CItemGLoadRequestList_GetPtr_0fea34))
                             (ar4,iVar1 + -1,ar6,ar7);
    s_CItemGLoadRequestList_TakeOu_0fe960(ar4,auStack_c[0],ar6,ar7);
    ar5 = auStack_c;
    FUN_8c0fed08(ar4 + 0x4c,ar5,ar6,ar7);
  }
  uVar2 = FUN_8c0feab8(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0fef10\n.set _FUN_8c0fef10, _FUN_8c0fef10_def\n");
//@unit 8c0fef8c
#include "../decls.h"
undefined4 FUN_8c0fef8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}

__asm__(".globl _FUN_8c0fef8c\n.set _FUN_8c0fef8c, _FUN_8c0fef8c_def\n");
//@unit 8c0fef94
#include "../decls.h"
int s_Shell_0fef9c_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

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
                    
    switch((uint)ar5) {
    case 0x0:
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
    case 0x1:
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
    case 0x2:
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
    case 0x3:
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
    case 0x4:
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
    case 0x5:
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
    case 0x6:
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
    case 0xa:
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
    case 0xb:
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
    case 0xc:
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
    case 0xd:
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
    case 0xe:
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
    case 0xf:
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
    case 0x10:
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

__asm__(".globl _s_Shell_0fef9c\n.set _s_Shell_0fef9c, _s_Shell_0fef9c_def\n");
//@unit 8c0ff500
#include "../decls.h"
undefined4 FUN_8c0ff500_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = get_field_24_05c284(*ar5,ar5,ar6,ar7);
  piVar2 = (int *)(iVar1 * 4 + 0x8c441348);
  *piVar2 = *piVar2 + -1;
  iVar1 = *ar5;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,1,ar6,ar7);
  }
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0ff500\n.set _FUN_8c0ff500, _FUN_8c0ff500_def\n");
//@unit 8c0ff558
#include "../decls.h"
undefined4 FUN_8c0ff558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
                    
  }
  else {
    _DAT_8c126698 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0ff558\n.set _FUN_8c0ff558, _FUN_8c0ff558_def\n");
//@unit 8c0ff67c
#include "../decls.h"
undefined4 FUN_8c0ff67c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c441324,free_if_nonnull_wrap_03a3dc,4,9,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c0ff67c\n.set _FUN_8c0ff67c, _FUN_8c0ff67c_def\n");
//@unit 8c0ff6a0
#include "../decls.h"
undefined4 FUN_8c0ff6a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c4412f4,free_if_nonnull_wrap_0247b0,4,9,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c0ff6a0\n.set _FUN_8c0ff6a0, _FUN_8c0ff6a0_def\n");
//@unit 8c0ff6c4
#include "../decls.h"
int FUN_8c0ff6c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0162f8(ar4 + 0xc,ar5,ar6,ar7);
  ret_const_1_0ffb90(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0ff6c4\n.set _FUN_8c0ff6c4, _FUN_8c0ff6c4_def\n");
//@unit 8c0ff6f0
#include "../decls.h"
int FUN_8c0ff6f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0ff6f0\n.set _FUN_8c0ff6f0, _FUN_8c0ff6f0_def\n");
//@unit 8c0ff730
#include "../decls.h"
undefined4 FUN_8c0ff730_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0ff730\n.set _FUN_8c0ff730, _FUN_8c0ff730_def\n");
//@unit 8c0ff7d4
#include "../decls.h"
int FUN_8c0ff7d4_def(int *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

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
    if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar3) {
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
    if (cVar6 != '\0' || fVar3 <= (float)(uint)pcVar5) {
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

__asm__(".globl _FUN_8c0ff7d4\n.set _FUN_8c0ff7d4, _FUN_8c0ff7d4_def\n");
//@unit 8c0ff928
#include "../decls.h"
undefined4 FUN_8c0ff928_def(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

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
    uStack_48 = CONCAT44((*(uint*)((uchar*)&uStack_48+4)),uVar4);
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

__asm__(".globl _FUN_8c0ff928\n.set _FUN_8c0ff928, _FUN_8c0ff928_def\n");
//@unit 8c0ffb84
#include "../decls.h"
undefined4 FUN_8c0ffb84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = ar5;
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0ffb84\n.set _FUN_8c0ffb84, _FUN_8c0ffb84_def\n");
//@unit 8c0ffb90
#include "../decls.h"
undefined4 ret_const_1_0ffb90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_0ffb90\n.set _ret_const_1_0ffb90, _ret_const_1_0ffb90_def\n");
//@unit 8c0ffb98
#include "../decls.h"
int FUN_8c0ffb98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0ff6c4(ar4 + 0xd8,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x12c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x13c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x14c,ar5,ar6,ar7);
  FUN_8c015c2c(ar4 + 0x15c,ar5,ar6,ar7);
  FUN_8c101250(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0xcc + ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0ffb98\n.set _FUN_8c0ffb98, _FUN_8c0ffb98_def\n");
//@unit 8c0ffc1c
#include "../decls.h"
int FUN_8c0ffc1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0ffc1c\n.set _FUN_8c0ffc1c, _FUN_8c0ffc1c_def\n");
//@unit 8c0ffcb4
#include "../decls.h"
undefined4 s_GRAPHICS_0ffcb6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _s_GRAPHICS_0ffcb6\n.set _s_GRAPHICS_0ffcb6, _s_GRAPHICS_0ffcb6_def\n");
//@unit 8c0ffd74
#include "../decls.h"
undefined4 get_field_1c_0ffd74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x1c);
}

__asm__(".globl _get_field_1c_0ffd74\n.set _get_field_1c_0ffd74, _get_field_1c_0ffd74_def\n");
//@unit 8c0ffd7c
#include "../decls.h"
undefined4 FUN_8c0ffd7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0xcc + ar4) = ar5;
  uVar1 = FUN_8c0ff730(ar4 + 0xd8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0ffd7c\n.set _FUN_8c0ffd7c, _FUN_8c0ffd7c_def\n");
//@unit 8c0ffdb0
#include "../decls.h"
undefined4 FUN_8c0ffdb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0ffdb0\n.set _FUN_8c0ffdb0, _FUN_8c0ffdb0_def\n");
//@unit 8c0fff28
#include "../decls.h"
undefined4 FUN_8c0fff28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0ff7d4(ar4 + 0xd8,ar4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fff28\n.set _FUN_8c0fff28, _FUN_8c0fff28_def\n");
//@unit 8c0fff54
#include "../decls.h"
undefined4 FUN_8c0fff54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0ff928(ar4 + 0xd8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fff54\n.set _FUN_8c0fff54, _FUN_8c0fff54_def\n");
//@unit 8c0fff84
#include "../decls.h"
undefined4 FUN_8c0fff84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c0fff84\n.set _FUN_8c0fff84, _FUN_8c0fff84_def\n");
//@unit 8c0fffec
#include "../decls.h"
undefined4 FUN_8c0fffec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x24) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0fffec\n.set _FUN_8c0fffec, _FUN_8c0fffec_def\n");
//@unit 8c0ffff4
#include "../decls.h"
uint FUN_8c0ffff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = (*(code *)(&get_field_a528_100030))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return (uint)((uVar1 & 0x60e) == 0x60e);
}

__asm__(".globl _FUN_8c0ffff4\n.set _FUN_8c0ffff4, _FUN_8c0ffff4_def\n");
