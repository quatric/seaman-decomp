#include "../decls.h"
undefined4 FUN_8c084bcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [24];
  undefined1 auStack_10c [268];
  
  uStack_128 = Vec3_ctor_xyz((&DATA_8c125e48),ar5,ar6,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e00;
  global_list_push(uStack_128,(&Vec3_dtor),0x8c280e00,ar7);
  uStack_12c = Vec3_ctor_xyz((&DATA_8c125e58),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e0c;
  global_list_push(uStack_12c,(&Vec3_dtor),0x8c280e0c,ar7);
  uStack_130 = Vec3_ctor_xyz((&DATA_8c125e68),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e18;
  global_list_push(uStack_130,(&Vec3_dtor),0x8c280e18,ar7);
  uStack_134 = Vec3_ctor_xyz((&DATA_8c125e78),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e24;
  global_list_push(uStack_134,(&Vec3_dtor),0x8c280e24,ar7);
  uStack_138 = Vec3_ctor_xyz((&DATA_8c125e88),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e30;
  global_list_push(uStack_138,(&Vec3_dtor),0x8c280e30,ar7);
  uStack_13c = Vec3_ctor_xyz((&DATA_8c125e98),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e3c;
  global_list_push(uStack_13c,(&Vec3_dtor),0x8c280e3c,ar7);
  uStack_140 = Vec3_ctor_xyz((&DATA_8c125ea8),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e48;
  global_list_push(uStack_140,(&Vec3_dtor),0x8c280e48,ar7);
  uStack_144 = Vec3_ctor_xyz((&DATA_8c125eb8),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e54;
  global_list_push(uStack_144,(&Vec3_dtor),0x8c280e54,ar7);
  uStack_148 = Vec3_ctor_xyz((&DATA_8c125ec8),puVar2,uVar1,ar7);
  puVar2 = (&Vec3_dtor);
  uVar1 = 0x8c280e60;
  global_list_push(uStack_148,(&Vec3_dtor),0x8c280e60,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x16c,puVar2,uVar1,ar7);
  uStack_14c = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125ed8),(int)&uStack_180 + 0x16c,uVar1,ar7);
  uVar1 = 0x8c280e6c;
  global_list_push(uStack_14c,(&Vec3_dtor),0x8c280e6c,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x16c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x15c,uVar3,uVar1,ar7);
  uStack_150 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125ed8) + 0x10,(int)&uStack_180 + 0x15c,uVar1,ar7);
  uVar1 = 0x8c280e78;
  global_list_push(uStack_150,(&Vec3_dtor),0x8c280e78,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x15c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x14c,uVar3,uVar1,ar7);
  uStack_154 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f10),(int)&uStack_180 + 0x14c,uVar1,ar7);
  uVar1 = 0x8c280e84;
  global_list_push(uStack_154,(&Vec3_dtor),0x8c280e84,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x14c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x13c,uVar3,uVar1,ar7);
  uStack_158 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f10) + 0x10,(int)&uStack_180 + 0x13c,uVar1,ar7);
  uVar1 = 0x8c280e90;
  global_list_push(uStack_158,(&Vec3_dtor),0x8c280e90,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x13c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x12c,uVar3,uVar1,ar7);
  uStack_15c = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f30),(int)&uStack_180 + 0x12c,uVar1,ar7);
  uVar1 = 0x8c280e9c;
  global_list_push(uStack_15c,(&Vec3_dtor),0x8c280e9c,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x12c,0xffffffff,uVar1,ar7);
  Vec3_ctor_xyz((int)&uStack_180 + 0x11c,uVar3,uVar1,ar7);
  uStack_160 = (*(code *)(&Vec3_ctor_copy))
                         ((&DATA_8c125f30) + 0x10,(int)&uStack_180 + 0x11c,uVar1,ar7);
  uVar1 = 0x8c280ea8;
  global_list_push(uStack_160,(&Vec3_dtor),0x8c280ea8,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((int)&uStack_180 + 0x11c,0xffffffff,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0x104,uVar3,uVar1,ar7);
  uStack_164 = uVar3;
  FUN_8c05d608(0x8c280eb4,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xec,uVar3,uVar1,ar7);
  uStack_168 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x18,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xd4,uVar3,uVar1,ar7);
  uStack_16c = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x30,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xbc,uVar3,uVar1,ar7);
  uStack_170 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x48,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0xa4,uVar3,uVar1,ar7);
  uStack_174 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x60,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34((int)&uStack_180 + 0x8c,uVar3,uVar1,ar7);
  uStack_178 = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x78,uVar3,uVar1,ar7);
  uVar3 = FUN_8c030e34(auStack_10c,uVar3,uVar1,ar7);
  uStack_17c = uVar3;
  FUN_8c05d608(0x8c280eb4 + 0x90,uVar3,uVar1,ar7);
  uStack_180 = FUN_8c030e34(auStack_124,uVar3,uVar1,ar7);
  uVar1 = FUN_8c05d608(0x8c280eb4 + 0xa8,uStack_180,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c084bcc\n.set _FUN_8c084bcc, _FUN_8c084bcc_def\n");
