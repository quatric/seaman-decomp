#include "../decls.h"
undefined4 Class_12b088_m1_0a6468_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *a5;
  undefined1 *ar6_00;
  undefined4 uVar2;
  undefined4 in_stack_ffffffa8;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  a5 = ar5;
  Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  uVar2 = 1;
  if ((*(int *)(ar4 + 0x21a4) == 2) || (*(int *)(ar4 + 0x2198) != 0)) {
    if (*(int *)(ar4 + 0x2198) != 8) {
      iVar1 = (**(code **)(*(int *)(uint)ar5[6] + 0x1a8))((int *)(uint)ar5[6],a5,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(ar4 + 0x124) != 4)) {
        ar7 = *(undefined4 *)(ar5[1] + 4);
        ar6 = ar5[6];
        FUN_8c0aa70c(ar4,*(undefined4 *)(uint)ar5[1],ar6,ar7);
        goto LAB_8c0a64f8;
      }
    }
    uVar2 = FUN_8c0a6628(ar4,ar5,ar6,ar7);
    in_stack_ffffffa8 = uVar2;
  }
  else {
    ar7 = *(undefined4 *)(ar5[1] + 4);
    ar6 = ar5[4];
    FUN_8c0a99c4(ar4,*(undefined4 *)(uint)ar5[1],ar6,ar7);
  }
LAB_8c0a64f8:
  FUN_8c02f2c0(*ar5,uVar2,ar6,ar7,in_stack_ffffffa8);
  if (*(int *)(ar4 + 0x178) == 1) {
    FUN_8c02f2c0(*ar5,1,ar6,ar7,in_stack_ffffffa8);
  }
  if ((*(int *)(ar4 + 0x2198) == 0) && (*(int *)(ar4 + 0x2198) != 8)) {
    FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  }
  Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_20);
  Vec3_add(auStack_20,ar4 + 0x90,ar6,ar7,auStack_30);
  Vec3_add(auStack_30,ar4 + 0x6c,ar6,ar7,auStack_40);
  Vec3_assign(ar4 + 4,auStack_40,ar6,ar7);
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  FUN_8c03f480(*ar5,uVar2,ar6,ar7,auStack_50);
  ar6_00 = auStack_50;
  FUN_8c03220c(ar4,ar5[1],ar6_00,ar7);
  uVar2 = Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _Class_12b088_m1_0a6468\n.set _Class_12b088_m1_0a6468, _Class_12b088_m1_0a6468_def\n");
