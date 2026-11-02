#include "../decls.h"
undefined4 FUN_8c07baa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  char cVar4;
  undefined4 in_stack_00000000;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c031de8(ar4,0,ar6_00,ar7_00);
    return uVar2;
  }
  if (*(int *)(ar4 + 0x1d4) == 1) {
    Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7_00);
    FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 0x2a0) = 2;
    return 0;
  }
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00);
    FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00);
    Vec3_ctor_xyz(auStack_2c,uVar2,ar6_00,ar7_00);
    Vec3_sub(ar6,auStack_2c,ar6_00,ar7_00,auStack_3c);
    Vec3_assign(ar4 + 0x54,auStack_3c,ar6_00,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
    ar7_00 = in_stack_00000000;
    iVar1 = FUN_8c0329ac(ar4,ar4 + 0x54,ar7,in_stack_00000000);
    if (iVar1 == 0) {
      FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      ar7_00 = in_stack_00000000;
    }
    if (*(int *)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(ar4 + 0x134) = 2;
    }
    else {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      if (((*(int *)(ar4 + 0x128) < 6) || (iVar1 = rand_range(ar4,0,100,ar7_00), 10 < iVar1)) ||
         (*(int *)(ar4 + 0x124) == 0x21)) goto LAB_8c07bd04;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 2;
    }
  }
  else {
    if (iVar1 == 1) {
LAB_8c07bd04:
      iVar1 = pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7_00);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      if (cVar4 == '\0') {
        *(undefined4 *)(ar4 + 0x38) = 0x41f00000;
        return 1;
      }
      *(undefined8 *)(ar4 + 0x38) = 0xeed01f41f00000;
      return 1;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x2b8) = 0;
      uVar2 = ar6;
      iVar1 = FUN_8c07f8e0(ar4,ar5,ar6,in_stack_00000000);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      Vec3_assign(ar4 + 0x270,ar6,uVar2,in_stack_00000000);
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,in_stack_00000000);
      *(undefined4 *)(ar4 + 0x2a0) = 2;
      return 0;
    }
  }
  uVar2 = ar6;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7_00);
  if ((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
    Vec3_assign(ar4 + 0x270,ar6,uVar2,ar7_00);
    FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,ar7_00);
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 0x2a0) = 2;
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07baa0\n.set _FUN_8c07baa0, _FUN_8c07baa0_def\n");
