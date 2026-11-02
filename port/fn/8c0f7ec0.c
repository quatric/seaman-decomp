#include "../decls.h"
undefined4 FUN_8c0f7ec0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265c8,ar5,ar6,ar7);
  uVar3 = 0x8c43b540;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43b540,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43b54c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43b54c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265e8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43b558;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43b558,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1265f8,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c43b564,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126608 = CONCAT44(_UNK_8c12660c,0x800000);
                    
  }
  else {
    _DAT_8c126608 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0f7ec0\n.set _FUN_8c0f7ec0, _FUN_8c0f7ec0_def\n");
