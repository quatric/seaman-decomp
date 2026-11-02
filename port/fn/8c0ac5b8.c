#include "../decls.h"
undefined4 FUN_8c0ac5b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126278,ar5,ar6,ar7);
  uVar3 = 0x8c2858f8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2858f8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126288,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285904;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285904,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126298,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285910;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285910,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1262a8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28591c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28591c,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1262b8 = CONCAT44(_DAT_8c1262bc,0x800000);
  }
  else {
                    
    _DAT_8c1262b8 = 0xffffffff00800000;
  }
  uVar1 = Vec3_ctor_xyz(&DAT_8c1262bc,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,Vec3_dtor,0x8c285928,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0ac5b8\n.set _FUN_8c0ac5b8, _FUN_8c0ac5b8_def\n");
