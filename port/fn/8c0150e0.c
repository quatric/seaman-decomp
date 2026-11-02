#include "../decls.h"
undefined4 FUN_8c0150e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125888),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787b8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787b8,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125898),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787c4;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787c4,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258a8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787d0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787d0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258b8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787dc;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787dc,ar7);
  uVar2 = FUN_8c016410(0x8c2787e8,puVar3,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0150e0\n.set _FUN_8c0150e0, _FUN_8c0150e0_def\n");
