#include "../decls.h"
undefined4 FUN_8c0f7a78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126588),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c43b510;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b510,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126598),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c43b51c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b51c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1265a8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c43b528;
  global_list_push(uVar1,(&Vec3_dtor),0x8c43b528,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c1265b8),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c43b534,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0f7a78\n.set _FUN_8c0f7a78, _FUN_8c0f7a78_def\n");
