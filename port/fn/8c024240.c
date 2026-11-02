#include "../decls.h"
undefined4 FUN_8c024240_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125988),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2792a8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2792a8,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125998),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2792b4;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2792b4,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1259a8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2792c0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2792c0,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c1259b8),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c2792cc,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c024240\n.set _FUN_8c024240, _FUN_8c024240_def\n");
