#include "../decls.h"
undefined4 FUN_8c036130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ca0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27df68;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27df68,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125cb0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27df74;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27df74,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125cc0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27df80;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27df80,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125cd0),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27df8c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c036130\n.set _FUN_8c036130, _FUN_8c036130_def\n");
