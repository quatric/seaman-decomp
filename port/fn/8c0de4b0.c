#include "../decls.h"
undefined4 Class_12b930_m3_0de4b0_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_stack_ffffffb8;
  undefined1 auStack_2c [16];
  
  iVar4 = ar5;
  uVar3 = ar6;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  Vec3_set_zero(auStack_2c,iVar4,uVar3,ar7);
  a4 = FUN_8c0da588(ar4 + 0xa4,iVar4,uVar3,ar7);
  FUN_8c0e389c(ar4,iVar4,uVar3,ar7);
  FUN_8c0d0178(ar4 + 0x13b24,iVar4,uVar3,ar7);
  FUN_8c0d0d1c(ar4 + 0x13b8c,iVar4,uVar3,ar7);
  iVar4 = ar5;
  FUN_8c0d9600(ar4 + 0x22704,ar5,uVar3,ar7);
  FUN_8c0de6c0(ar4 + 0x13b24,iVar4,uVar3,ar7,in_stack_ffffffb8);
  FUN_8c0de6b0(ar4 + 0x13b70,iVar4,uVar3,ar7,in_stack_ffffffb8);
  iVar6 = a4;
  _DAT_8c437550 = iVar1;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar5;
    uVar3 = ar6;
    ar7 = ar4;
    (**(code **)(*(int *)(iVar6 + 8) + 0x10))(iVar6,ar5,ar6,ar4);
    iVar6 = list_node_next(iVar6,iVar4,uVar3,ar7);
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar4 = ar4;
    FUN_8c0f4258(iVar6,ar4,uVar3,ar7);
    iVar6 = list_node_next(iVar6,iVar4,uVar3,ar7);
  }
  iVar6 = a4;
  for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    iVar2 = FUN_8c0da4f8(iVar6,iVar4,uVar3,ar7);
    if (iVar2 == 1) {
      iVar4 = ar4;
      FUN_8c0f4974(iVar6,ar4,uVar3,ar7);
    }
    iVar6 = list_node_next(iVar6,iVar4,uVar3,ar7);
  }
  for (iVar6 = 0; iVar6 < iVar1; iVar6 = iVar6 + 1) {
    iVar4 = ar4;
    (**(code **)(*(int *)(a4 + 8) + 0x28))(a4,ar4,uVar3,ar7);
    a4 = list_node_next(a4,iVar4,uVar3,ar7);
  }
  FUN_8c0dbbe8(ar4,iVar4,uVar3,ar7);
  FUN_8c0e3994(ar4,ar4 + 0x10ac,uVar3,ar7);
  iVar4 = ar4 + 0x22eb4;
  FUN_8c0d3d6c(ar4 + 0x10ac,iVar4,uVar3,ar7);
  FUN_8c0dbd80(ar4,iVar4,uVar3,ar7);
  uVar3 = object_dtor_delete(auStack_2c,0xffffffff,uVar3,ar7);
  return uVar3;
}

__asm__(".globl _Class_12b930_m3_0de4b0\n.set _Class_12b930_m3_0de4b0, _Class_12b930_m3_0de4b0_def\n");
