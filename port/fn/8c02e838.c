#include "../decls.h"
undefined4 FUN_8c02e838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a90),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d468;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d468,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125aa0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d474;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d474,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ab0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d480;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d480,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125ac0),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27d48c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02e838\n.set _FUN_8c02e838, _FUN_8c02e838_def\n");
