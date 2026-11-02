#include "../decls.h"
undefined4 FUN_8c036078_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c58,ar5,ar6,ar7);
  uVar3 = 0x8c27df38;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27df38,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c68,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27df44;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27df44,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c78,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27df50;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27df50,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125c88,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27df5c,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125c98 = CONCAT44(_UNK_8c125c9c,0x800000);
                    
  }
  else {
    _DAT_8c125c98 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c036078\n.set _FUN_8c036078, _FUN_8c036078_def\n");
