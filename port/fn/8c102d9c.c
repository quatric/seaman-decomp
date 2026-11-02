#include "../decls.h"
undefined4 FUN_8c102d9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126aa0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c470880;
  global_list_push(uVar1,(&Vec3_dtor),0x8c470880,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126ab0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c47088c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c47088c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126ac0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c470898;
  global_list_push(uVar1,(&Vec3_dtor),0x8c470898,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c126ad0),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c4708a4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c102d9c\n.set _FUN_8c102d9c, _FUN_8c102d9c_def\n");
