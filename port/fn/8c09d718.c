#include "../decls.h"
undefined4 FUN_8c09d718_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260c8,ar5,ar6,ar7);
  uVar3 = 0x8c284a50;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a50,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a5c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a5c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260e8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a68;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a68,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260f8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a74;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a74,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126108 = CONCAT44(_UNK_8c12610c,0x800000);
                    
  }
  else {
    _DAT_8c126108 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02452c(0x8c284a8c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a80;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c284a80,ar7);
  uVar1 = FUN_8c024824(0x8c284bbc,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284bb0;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c284bb0,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284bd8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284bcc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284bcc,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284bf4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284be8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284be8,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c10,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c04;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c04,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c2c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c20;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c20,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c48,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c3c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c3c,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c64,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c58;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c58,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c80,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c74;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c74,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c9c,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c284c90,ar7);
  uVar3 = 0x8c284c10;
  uVar1 = FUN_8c017010(0x8c284cb8,0x8c284bd8,0x8c284bf4,0x8c284c10,0x8c284c2c,0x8c284c48,0x8c284c64,
                       0x8c284c80,0x8c284c9c);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c284cac,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c09d718\n.set _FUN_8c09d718, _FUN_8c09d718_def\n");
