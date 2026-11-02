#include "../decls.h"
int FUN_8c09344c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 in_stack_00000000;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  
  iVar6 = 1;
  iVar1 = *(int *)(ar4 + 0x248);
  if (iVar1 == 0) {
    iVar1 = ar4;
    iVar6 = FUN_8c093aec(ar4,in_stack_00000000,ar6,ar7);
    if (iVar6 == 0) {
      uVar3 = rand(iVar1,in_stack_00000000,ar6,ar7);
      uVar2 = 100;
      iVar1 = libgcc_divide_helper_01031c(uVar3,100,ar6,ar7);
      if (iVar1 < 0xf) {
        *(undefined4 *)(ar4 + 0x248) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
        uVar3 = rand(uVar3,uVar2,ar6,ar7);
        uVar3 = libgcc_divide_helper_01031c(uVar3,10,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2f0) = uVar3;
      }
    }
  }
  else if (iVar1 == 2) {
    if (*(char *)(ar4 + 0x280) == '\x01') {
      *(undefined4 *)(ar4 + 0x288) = 1;
      FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7,auStack_f8);
      Vec3_assign(ar4 + 0x14,auStack_f8,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_f8,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x248) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
    }
    else {
      uVar3 = ar5;
      uVar2 = ar6;
      iVar1 = get_field_24_026024(ar7,ar5,ar6,ar7);
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 == 2)) {
        *(undefined4 *)(ar4 + 0x2f0) = 10;
      }
      iVar1 = *(int *)(ar4 + 0x2f0);
      if (iVar1 == 0) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_38,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_48,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_48,uVar3,uVar2,ar7);
        puVar5 = auStack_58;
        puVar4 = auStack_38;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_58,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_48,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_38,0xffffffff,puVar4,puVar5);
      }
      else if (iVar1 == 1) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_68,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_78,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_78,uVar3,uVar2,ar7);
        puVar5 = auStack_88;
        puVar4 = auStack_68;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_88,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_78,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_68,0xffffffff,puVar4,puVar5);
      }
      else if (iVar1 == 2) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_98,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_a8,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_a8,uVar3,uVar2,ar7);
        puVar5 = auStack_b8;
        puVar4 = auStack_98;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_b8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_a8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_98,0xffffffff,puVar4,puVar5);
      }
      else if (iVar1 == 3) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_c8,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_d8,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_d8,uVar3,uVar2,ar7);
        puVar5 = auStack_e8;
        puVar4 = auStack_c8;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_e8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_d8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_c8,0xffffffff,puVar4,puVar5);
      }
      else {
        iVar6 = FUN_8c094514(ar4,in_stack_00000000,ar5,ar6);
      }
    }
  }
  else if (iVar1 == 3) {
    if (*(char *)(ar4 + 0x280) == '\x01') {
      FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7,auStack_108);
      Vec3_assign(ar4 + 0x14,auStack_108,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_108,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x248) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
    }
    else {
      FUN_8c097888(ar4,in_stack_00000000,ar5,ar6);
    }
  }
  return iVar6;
}

__asm__(".globl _FUN_8c09344c\n.set _FUN_8c09344c, _FUN_8c09344c_def\n");
