#include "../decls.h"
undefined4 FUN_8c030d58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b58,ar5,ar6,ar7);
  uVar3 = 0x8c27d500;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d500,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b68,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d50c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d50c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b78,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d518;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d518,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b88,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27d524,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125b98 = CONCAT44(_UNK_8c125b9c,0x800000);
                    
  }
  else {
    _DAT_8c125b98 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c030d58\n.set _FUN_8c030d58, _FUN_8c030d58_def\n");
