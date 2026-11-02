#include "../decls.h"
undefined4 FUN_8c08f9e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 ar6_00;
  int ar5_01;
  undefined4 uVar3;
  float in_fr1;
  float fVar4;
  float fVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  ar5_00 = ar5;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,ar5_00,ar6,ar7);
  ar5_01 = ar5 + 0xb;
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
  if (cVar7 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
  }
  if (cVar6 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x2cc) = in_fr1;
  }
  else {
    *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
  }
  uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5_01,ar6,ar7);
  uVar1 = deref_u32(uVar1,ar5_01,ar6,ar7);
  uVar2 = FUN_8c0342ac(ar4 + 0xb0,uVar1,0,ar7);
  ar6_00 = 0;
  uVar1 = FUN_8c034548(ar4 + 0xb0,uVar1,0,ar7);
  if (cVar7 == '\0') {
    fVar4 = *(float *)(ar4 + 0x2cc);
    fVar5 = 6640.0;
  }
  else {
    fVar4 = 6640.0;
    fVar5 = 9040.0;
  }
  if (fVar4 != fVar5) {
    if (cVar7 == '\0') {
      fVar4 = *(float *)(ar4 + 0x2cc);
      fVar5 = 9040.0;
    }
    else {
      fVar4 = 9040.0;
      fVar5 = 4.2039e-43;
    }
    if (fVar4 != fVar5) goto LAB_8c08faa8;
  }
  *(undefined4 *)(ar4 + 300) = 0;
  uVar3 = 0;
LAB_8c08faa8:
  FUN_8c034384(ar4 + 0xb0,uVar2,ar6_00,ar7);
  Vec3_assign(ar4 + 0x2d0,auStack_48,ar6_00,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
  FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
  FUN_8c034384(ar4 + 0xb0,uVar2,ar6_00,ar7);
  Vec3_assign(ar4 + 0x2e0,auStack_58,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
  Vec3_set_xyz(auStack_64,uVar2,ar6_00,ar7);
  FUN_8c023484(ar4 + 0x2d0,auStack_64,ar6_00,ar7,auStack_74);
  Vec3_assign(ar4 + 0x2d0,auStack_74,ar6_00,ar7);
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
  object_dtor_delete(auStack_64,0xffffffff,ar6_00,ar7);
  FUN_8c034650(ar4 + 0xb0,uVar1,ar6_00,ar7);
  vec3_copy_8c023d8c(auStack_38,auStack_80,ar6_00,ar7);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
  Vec3_ctor_xyz(auStack_90,uVar1,ar6_00,ar7);
  Vec3_set_xyz(auStack_9c,uVar1,ar6_00,ar7);
  FUN_8c023484(auStack_90,auStack_9c,ar6_00,ar7,auStack_ac);
  Vec3_assign(ar4 + 0x14,auStack_ac,ar6_00,ar7);
  Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
  object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
  object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c08f9e8\n.set _FUN_8c08f9e8, _FUN_8c08f9e8_def\n");
