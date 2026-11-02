#include "../decls.h"
undefined4 FUN_8c0c4644_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263a0,ar5,ar6,ar7);
  uVar3 = 0x8c286e20;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e20,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263b0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286e2c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e2c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263c0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286e38;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e38,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1263d0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c286e44,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1263e0 = CONCAT44(_UNK_8c1263e4,0x800000);
                    
  }
  else {
    _DAT_8c1263e0 = 0xffffffff00800000;
  }
  uVar1 = 4;
  FUN_8c010120(0x8c286e5c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0c4c60,0x8c286e50,uVar1);
  ar7_00 = 4;
  FUN_8c010120(0x8c286e8c,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  uVar1 = 0x8c286e80;
  pcVar2 = FUN_8c0c4c3c;
  global_list_push(0,FUN_8c0c4c3c,0x8c286e80,ar7_00);
  uVar1 = FUN_8c0bff8c(0x8c286ebc,pcVar2,uVar1,ar7_00);
  uVar3 = 0x8c286eb0;
  pcVar2 = FUN_8c0c0368;
  global_list_push(uVar1,FUN_8c0c0368,0x8c286eb0,ar7_00);
  uVar1 = s_Mess_ICON00_pvr_0c2496(&DAT_8c2b5628,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c2b561c;
  pcVar2 = FUN_8c0c4b84;
  global_list_push(uVar1,FUN_8c0c4b84,0x8c2b561c,ar7_00);
  uVar1 = pack_ctor(0x8c2b59d0,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c2b59c4;
  pcVar2 = FUN_8c0214e0;
  global_list_push(uVar1,FUN_8c0214e0,0x8c2b59c4,ar7_00);
  uVar1 = FUN_8c0f7f78(0x8c35468c,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c354680;
  pcVar2 = FUN_8c0f7fa8;
  global_list_push(uVar1,FUN_8c0f7fa8,0x8c354680,ar7_00);
  uVar1 = FUN_8c01e504(0x8c3dd7dc,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3dd7d0;
  pcVar2 = FUN_8c01e560;
  global_list_push(uVar1,FUN_8c01e560,0x8c3dd7d0,ar7_00);
  uVar1 = FUN_8c0febbc(0x8c3e7d30,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3e7d24;
  pcVar2 = FUN_8c0c4a44;
  global_list_push(uVar1,FUN_8c0c4a44,0x8c3e7d24,ar7_00);
  uVar1 = FUN_8c0fef8c(0x8c3eb324,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3eb318;
  pcVar2 = free_if_nonnull_wrap_0c4a14;
  global_list_push(uVar1,free_if_nonnull_wrap_0c4a14,0x8c3eb318,ar7_00);
  uVar1 = FUN_8c01f5d0(0x8c3eb334,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c3eb328;
  pcVar2 = free_if_nonnull_wrap_01f5d8;
  global_list_push(uVar1,free_if_nonnull_wrap_01f5d8,0x8c3eb328,ar7_00);
  uVar1 = FUN_8c0162f8(0x8c431294,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c431288;
  pcVar2 = free_if_nonnull_wrap_0151a0;
  global_list_push(uVar1,free_if_nonnull_wrap_0151a0,0x8c431288,ar7_00);
  uVar1 = FUN_8c0b9fb4(0x8c431a68,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c431a5c;
  pcVar2 = FUN_8c0c4968;
  global_list_push(uVar1,FUN_8c0c4968,0x8c431a5c,ar7_00);
  uVar1 = FUN_8c0ba1c0(0x8c435c7c,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c435c70;
  pcVar2 = FUN_8c0c491c;
  global_list_push(uVar1,FUN_8c0c491c,0x8c435c70,ar7_00);
  uVar1 = FUN_8c0fdc98(0x8c436280,pcVar2,uVar3,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0c4644\n.set _FUN_8c0c4644, _FUN_8c0c4644_def\n");
