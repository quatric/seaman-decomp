#include "../decls.h"
undefined4 FUN_8c02d720_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a50),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d438;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d438,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a60),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d444;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d444,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a70),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d450;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d450,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125a80),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27d45c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02d720\n.set _FUN_8c02d720, _FUN_8c02d720_def\n");
