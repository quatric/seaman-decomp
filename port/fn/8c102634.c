#include "../decls.h"
undefined4 FUN_8c102634_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266a0,ar5,ar6,ar7);
  uVar3 = 0x8c441390;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c441390,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266b0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c44139c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c44139c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266c0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4413a8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4413a8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266d0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c4413b4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1266e0 = CONCAT44(_DAT_8c1266e4,0x800000);
                    
  }
  else {
    _DAT_8c1266e0 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c102634\n.set _FUN_8c102634, _FUN_8c102634_def\n");
