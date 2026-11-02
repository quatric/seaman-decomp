#include "../decls.h"
undefined4 FUN_8c016978_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258c8),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c278838;
  global_list_push(uVar1,(&Vec3_dtor),0x8c278838,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258d8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c278844;
  global_list_push(uVar1,(&Vec3_dtor),0x8c278844,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258e8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c278850;
  global_list_push(uVar1,(&Vec3_dtor),0x8c278850,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c1258f8),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27885c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c016978\n.set _FUN_8c016978, _FUN_8c016978_def\n");
