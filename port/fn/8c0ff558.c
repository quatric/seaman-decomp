#include "../decls.h"
undefined4 FUN_8c0ff558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126658,ar5,ar6,ar7);
  uVar3 = 0x8c4412b8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4412b8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126668,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4412c4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4412c4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126678,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4412d0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4412d0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126688,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c4412dc,ar7);
  uVar1 = 4;
  FUN_8c010120(0x8c4412f4,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0ff6a0,0x8c4412e8,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c441324,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  global_list_push(0,FUN_8c0ff67c,0x8c441318,uVar1);
  if (cVar4 == '\0') {
    _DAT_8c126698 = CONCAT44(_UNK_8c12669c,0x800000);
                    
  }
  else {
    _DAT_8c126698 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0ff558\n.set _FUN_8c0ff558, _FUN_8c0ff558_def\n");
