#include "../decls.h"
undefined4 FUN_8c054f7c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  int ar6_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0;
  ulonglong uVar5;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  char cVar7;
  char cVar8;
  int in_stack_00000000;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_xyz(auStack_28,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    in_fr15 = 1.5;
  }
  Vec3_ctor_zero(auStack_38,uVar2,ar6_00,ar7);
  FUN_8c102748(auStack_44,uVar2,ar6_00,ar7);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    if ((in_stack_00000000 == 0) || (in_stack_00000000 == 2)) {
      free_if_nonnull_wrap_102790(auStack_44,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return 0;
    }
    FUN_8c033474(ar4,7,ar5,*(undefined4 *)(ar4 + 0x244));
    uVar4 = (undefined4)in_dr0;
    ar7 = 0;
    ar6_00 = -1;
    uVar2 = 5;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7);
    Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_54);
    Vec3_normalize(auStack_54,ar5,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2a8,auStack_64,ar6_00,ar7);
    Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
    ar5_00 = &DAT_8c1365d4;
    FUN_8c023bf4(ar4 + 0x2a8,&DAT_8c1365d4,ar6_00,ar7);
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(uStack_24,uVar4);
      *(undefined4 *)(ar4 + 0x2ac) = uStack_24;
    }
    else {
      uVar5 = CONCAT44(uStack_20,uStack_24);
      *(ulonglong *)(ar4 + 0x2ac) = uVar5;
    }
    FUN_8c031748(ar4,ar5_00,ar6_00,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = uVar5 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 0x2e8) = 1;
    *(undefined4 *)(ar4 + 0x280) = 0;
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar5 & 0xffffffff;
    }
    Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = ar4 + 0x2d4;
    Vec3_assign(ar4 + 0x2a8,iVar1,ar6_00,ar7);
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(ar4 + 0x2e8) = 1;
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6_00,ar7);
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2ac),uVar2);
    }
    else {
      dVar6 = *(double *)(ar4 + 0x2ac);
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - in_fr15,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x2ac) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x2ac) = dVar6;
    }
    Vec3_normalize(ar4 + 0x2a8,iVar1,ar6_00,ar7);
    Vec3_assign(ar4 + 0x14,auStack_74,ar6_00,ar7);
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
    Vec3_assign(auStack_38,ar4 + 0x2a8,ar6_00,ar7);
    if ((in_stack_00000000 == 0) || (in_stack_00000000 == 2)) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c023bf4(ar4 + 0x2a8,&DAT_8c1365d8,ar6_00,ar7);
    }
    Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7);
  }
  else {
    if (iVar1 == 2) {
      FUN_8c05ae54(ar4,uVar2,ar6_00,ar7);
      Vec3_length_sq(ar4 + 0x2d4,uVar2,ar6_00,ar7);
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_dr0;
      }
      Vec3_normalize(ar4 + 0x2d4,uVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x14,auStack_84,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
      vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,ar7);
      vec3_clear(ar4 + 0x2a8,uVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
      Vec3_scale(auStack_38,ar4 + 0x48,ar6_00,ar7,auStack_94);
      Vec3_scale(auStack_94,&DAT_8c1365dc,ar6_00,ar7,auStack_a4);
      Vec3_add(auStack_a4,ar5,ar6_00,ar7,auStack_b4);
      Vec3_assign(ar4 + 0x54,auStack_b4,ar6_00,ar7);
      Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 1;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (iVar1 != 3) goto LAB_8c0553ee;
    ar6_00 = ar4 + 0x54;
    iVar1 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
    if (iVar1 == 0) {
      uVar3 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x2e8) = 0;
      *(undefined4 *)(ar4 + 0x40) = 1;
    }
  }
LAB_8c0553ee:
  free_if_nonnull_wrap_102790(auStack_44,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c054f7c\n.set _FUN_8c054f7c, _FUN_8c054f7c_def\n");
