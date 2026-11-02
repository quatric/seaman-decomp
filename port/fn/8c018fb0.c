#include "../decls.h"
undefined4 FUN_8c018fb0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125908),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279110;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279110,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125918),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27911c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27911c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125928),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279128;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279128,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125938),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c279134,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c018fb0\n.set _FUN_8c018fb0, _FUN_8c018fb0_def\n");
