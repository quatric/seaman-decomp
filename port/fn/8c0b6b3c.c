#include "../decls.h"
undefined4 FUN_8c0b6b3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126358,ar5,ar6,ar7);
  uVar3 = 0x8c286df0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286df0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126368,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286dfc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286dfc,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126378,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286e08;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e08,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126388,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c286e14,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126398 = CONCAT44(_UNK_8c12639c,0x800000);
                    
  }
  else {
    _DAT_8c126398 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0b6b3c\n.set _FUN_8c0b6b3c, _FUN_8c0b6b3c_def\n");
