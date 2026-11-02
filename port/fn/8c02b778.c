#include "../decls.h"
undefined4 FUN_8c02b778_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259c8,ar5,ar6,ar7);
  uVar3 = 0x8c2792d8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792d8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792e4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792e4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259e8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792f0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792f0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259f8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792fc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792fc,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125a08 = CONCAT44(_UNK_8c125a0c,0x800000);
                    
  }
  else {
    _DAT_8c125a08 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02b920(&DAT_8c27d1fc,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,FUN_8c02b858,0x8c27d1f0,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02b778\n.set _FUN_8c02b778, _FUN_8c02b778_def\n");
