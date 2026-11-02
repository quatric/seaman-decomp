#include "../decls.h"
undefined4 FUN_8c0337d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ba0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d530;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d530,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125bb0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d53c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d53c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125bc0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d548;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d548,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125bd0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d554;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d554,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125be0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d560;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d560,ar7);
  uVar1 = FUN_8c10277c((&DATA_8c125bf0),puVar3,uVar2,ar7);
  puVar3 = (&free_if_nonnull_wrap_102790);
  uVar2 = 0x8c27d56c;
  (*(code *)(&global_list_push))
            (uVar1,(&free_if_nonnull_wrap_102790),0x8c27d56c,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c125bfc,puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d578;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d578,ar7);
  uVar2 = FUN_8c10277c((&DATA_8c125c0c),puVar3,uVar2,ar7);
  uVar2 = (*(code *)(&global_list_push))
                    (uVar2,(&free_if_nonnull_wrap_102790),0x8c27d584,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0337d0\n.set _FUN_8c0337d0, _FUN_8c0337d0_def\n");
