#include "../decls.h"
undefined4 FUN_8c055750_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  ulonglong uVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  int in_stack_00000000;
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  FUN_8c10277c(auStack_34,uVar2,ar6_00,ar7_00);
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    iVar1 = FUN_8c057164(ar4,ar5,ar6_00,ar7_00);
    if (iVar1 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = in_dr0 & 0xffffffff;
        uVar4 = 0x40a00000;
      }
      FUN_8c03263c(ar4,ar6,ar6_00,ar7_00);
      Vec3_add(auStack_44,ar5,ar6_00,ar7_00,auStack_54);
      Vec3_assign(ar4 + 0x54,auStack_54,ar6_00,ar7_00);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
      if (cVar9 != '\0') {
        uVar4 = 0x40400000;
      }
      FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      *(undefined4 *)(ar4 + 0x40) = 0;
      uVar2 = ar5;
      Vec3_sub(ar4 + 0x54,ar5,ar7,in_stack_00000000,auStack_64);
      Vec3_normalize(auStack_64,uVar2,ar7,in_stack_00000000);
      Vec3_assign(auStack_28,auStack_74,ar7,in_stack_00000000);
      Vec3_dtor(auStack_74,0xffffffff,ar7,in_stack_00000000);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_64,0xffffffff,ar7,in_stack_00000000);
      FUN_8c0230f0(ar4 + 0x14,uVar2,ar7,in_stack_00000000,auStack_84);
      FUN_8c0230f0(auStack_28,uVar2,ar7,in_stack_00000000,auStack_94);
      FUN_8c022dac(auStack_84,auStack_94,ar7,in_stack_00000000);
      Vec3_dtor(auStack_94,0xffffffff,ar7,in_stack_00000000);
      Vec3_dtor(auStack_84,0xffffffff,ar7,in_stack_00000000);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6_00 = ar7;
      ar7_00 = in_stack_00000000;
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar7 = -8.394521626779552e-251;
        }
        if (cVar8 == '\0') {
          fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
        iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 700) = 0;
          uVar3 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
      goto LAB_8c055a78;
    }
    uVar2 = ar5;
    Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00,auStack_a4);
    Vec3_normalize(auStack_a4,uVar2,ar6_00,ar7_00);
    Vec3_assign(auStack_28,auStack_b4,ar6_00,ar7_00);
    Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
    FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00,auStack_c4);
    FUN_8c0230f0(auStack_28,uVar2,ar6_00,ar7_00,auStack_d4);
    FUN_8c022dac(auStack_c4,auStack_d4,ar6_00,ar7_00);
    Vec3_dtor(auStack_d4,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7_00);
    uVar6 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x58) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x58) = uVar6;
    }
    ar6_00 = ar4 + 0x54;
    iVar1 = FUN_8c04c314(ar4,ar5,ar6_00,ar7_00);
    if (iVar1 == 0) {
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,(int)uVar6);
      }
      ar7_00 = 0;
      ar6_00 = -1;
      uVar2 = 0x1a;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x218) = 0;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
LAB_8c055a78:
  free_if_nonnull_wrap_102790(auStack_34,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c055750\n.set _FUN_8c055750, _FUN_8c055750_def\n");
