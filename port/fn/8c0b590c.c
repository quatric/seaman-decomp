#include "../decls.h"
undefined4 FUN_8c0b590c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126318),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c286d88;
  global_list_push(uVar1,(&Vec3_dtor),0x8c286d88,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126328),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c286d94;
  global_list_push(uVar1,(&Vec3_dtor),0x8c286d94,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126338),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c286da0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c286da0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126348),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c286dac;
  global_list_push(uVar1,(&Vec3_dtor),0x8c286dac,ar7);
  uVar1 = FUN_8c030e34(auStack_1c,puVar3,uVar2,ar7);
  FUN_8c05d608(0x8c286dbc,uVar1,uVar2,ar7);
  uVar1 = FUN_8c030e34(auStack_34,uVar1,uVar2,ar7);
  uVar2 = FUN_8c05d608(0x8c286dbc + 0x18,uVar1,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0b590c\n.set _FUN_8c0b590c, _FUN_8c0b590c_def\n");
