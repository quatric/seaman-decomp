#include "../decls.h"
undefined4 FUN_8c01a260_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125948),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279140;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279140,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125958),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27914c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27914c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125968),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279158;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279158,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125978),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c279164,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c01a260\n.set _FUN_8c01a260, _FUN_8c01a260_def\n");
