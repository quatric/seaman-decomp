#include "../decls.h"
undefined4 FUN_8c0a0730_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126158,ar5,ar6,ar7);
  uVar3 = 0x8c285140;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285140,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126168,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28514c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28514c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126178,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285158;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285158,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126188,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285164;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285164,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126198 = CONCAT44(_DAT_8c12619c,0x800000);
  }
  else {
                    
    _DAT_8c126198 = 0xffffffff00800000;
  }
  uVar1 = Vec3_ctor_xyz(&DAT_8c12619c,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,Vec3_dtor,0x8c285170,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0a0730\n.set _FUN_8c0a0730, _FUN_8c0a0730_def\n");
