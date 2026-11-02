#include "../decls.h"
undefined4 FUN_8c034ba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125c18),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27df08;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27df08,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125c28),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27df14;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27df14,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125c38),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27df20;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27df20,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125c48),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27df2c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c034ba8\n.set _FUN_8c034ba8, _FUN_8c034ba8_def\n");
