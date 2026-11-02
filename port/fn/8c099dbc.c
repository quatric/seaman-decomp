#include "../decls.h"
undefined4 FUN_8c099dbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126038,ar5,ar6,ar7);
  uVar3 = 0x8c284700;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284700,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126048,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28470c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28470c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126058,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284718;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284718,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126068,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c284724,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126078 = CONCAT44(_UNK_8c12607c,0x800000);
                    
  }
  else {
    _DAT_8c126078 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c099dbc\n.set _FUN_8c099dbc, _FUN_8c099dbc_def\n");
