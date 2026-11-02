#include "../decls.h"
undefined4 FUN_8c0a4448_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261b0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285180;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285180,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261c0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c28518c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c28518c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261d0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c285198;
  global_list_push(uVar1,(&Vec3_dtor),0x8c285198,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1261e0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2851a4;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2851a4,ar7);
  uVar1 = FUN_8c030e34(auStack_1c,puVar3,uVar2,ar7);
  FUN_8c05d608(0x8c2851b0,uVar1,uVar2,ar7);
  uVar1 = FUN_8c030e34(auStack_34,uVar1,uVar2,ar7);
  FUN_8c05d608(0x8c2851b0 + 0x18,uVar1,uVar2,ar7);
  uVar2 = Vec3_ctor_xyz(0x8c2851ec,uVar1,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c2851e0,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0a4448\n.set _FUN_8c0a4448, _FUN_8c0a4448_def\n");
