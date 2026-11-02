#include "../decls.h"
undefined4 FUN_8c02efbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ad0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d4a0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d4a0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ae0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d4ac;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d4ac,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125af0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d4b8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d4b8,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125b00),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27d4c4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02efbc\n.set _FUN_8c02efbc, _FUN_8c02efbc_def\n");
