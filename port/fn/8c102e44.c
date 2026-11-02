#include "../decls.h"
undefined4 FUN_8c102e44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126ae0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c4708b0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c4708b0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126af0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c4708bc;
  global_list_push(uVar1,(&Vec3_dtor),0x8c4708bc,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126b00),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c4708c8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c4708c8,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c126b10),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c4708d4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c102e44\n.set _FUN_8c102e44, _FUN_8c102e44_def\n");
