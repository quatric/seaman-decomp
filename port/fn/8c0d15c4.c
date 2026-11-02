#include "../decls.h"
undefined4 FUN_8c0d15c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126430,ar5,ar6,ar7);
  uVar3 = 0x8c437478;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437478,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126440,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437484;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437484,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126450,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437490;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437490,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126460,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c43749c,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126470 = CONCAT44(_UNK_8c126474,0x800000);
                    
  }
  else {
    _DAT_8c126470 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0d15c4\n.set _FUN_8c0d15c4, _FUN_8c0d15c4_def\n");
