#include "../decls.h"
undefined4 FUN_8c0ab5c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 ar7_00;
  undefined1 auStack_1c [28];
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126238),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285840;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285840,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126248),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c28584c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c28584c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126258),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285858;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285858,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c126268),puVar3,uVar2,ar7);
  global_list_push(uVar2,(&Vec3_dtor),0x8c285864,ar7);
  uVar2 = 4;
  (*(code *)(&FUN_8c010120))
            (0x8c28587c,(&FUN_8c015b94),(&free_if_nonnull_wrap_0247b0),4,9);
  global_list_push(0,(&FUN_8c0ab73c),0x8c285870,uVar2);
  ar7_00 = 4;
  (*(code *)(&FUN_8c010120))
            (0x8c2858ac,(&FUN_8c015bc8),(&free_if_nonnull_wrap_03a3dc),4,9);
  puVar3 = (&FUN_8c0ab718);
  uVar2 = 0x8c2858a0;
  global_list_push(0,(&FUN_8c0ab718),0x8c2858a0,ar7_00);
  uVar1 = FUN_8c030e34(auStack_1c,puVar3,uVar2,ar7_00);
  uVar2 = FUN_8c05d608(0x8c2858d0,uVar1,uVar2,ar7_00);
  return uVar2;
}

__asm__(".globl _FUN_8c0ab5c0\n.set _FUN_8c0ab5c0, _FUN_8c0ab5c0_def\n");
