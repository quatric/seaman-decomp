#include "../decls.h"
undefined4 FUN_8c0e8f54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126478,ar5,ar6,ar7);
  uVar3 = 0x8c437520;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437520,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126488,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43752c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43752c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126498,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437538;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437538,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264a8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437544;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c437544,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1264b8 = CONCAT44(_UNK_8c1264bc,0x800000);
                    
  }
  else {
    _DAT_8c1264b8 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c015224(0x8c4377f4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4377e8;
  pcVar2 = free_if_nonnull_wrap_0153e4;
  global_list_push(uVar1,free_if_nonnull_wrap_0153e4,0x8c4377e8,ar7);
  uVar1 = FUN_8c102a08(0x8c437a78,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437a6c;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437a6c,ar7);
  uVar1 = FUN_8c102a08(0x8c437aa4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437a98;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437a98,ar7);
  uVar1 = FUN_8c102a08(0x8c437ad0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437ac4;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437ac4,ar7);
  uVar1 = FUN_8c102a08(0x8c437afc,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437af0;
  pcVar2 = FUN_8c0d6424;
  global_list_push(uVar1,FUN_8c0d6424,0x8c437af0,ar7);
  uVar1 = FUN_8c10291c(0x8c437b28,pcVar2,uVar3,ar7);
  uVar3 = 0x8c437b1c;
  pcVar2 = free_if_nonnull_wrap_0d63c0;
  global_list_push(uVar1,free_if_nonnull_wrap_0d63c0,0x8c437b1c,ar7);
  uVar1 = FUN_8c0243b0(0x8c437b48,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,FUN_8c0ba180,0x8c437b3c,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e8f54\n.set _FUN_8c0e8f54, _FUN_8c0e8f54_def\n");
