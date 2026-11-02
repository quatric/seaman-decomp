#include "../decls.h"
undefined4 FUN_8c0a5c90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1261f0,ar5,ar6,ar7);
  uVar3 = 0x8c285220;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285220,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126200,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28522c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28522c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126210,pcVar2,uVar3,ar7);
  uVar3 = 0x8c285238;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285238,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126220,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c285244,ar7);
  uVar1 = 4;
  FUN_8c010120(0x8c28525c,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0a6140,0x8c285250,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c28528c,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  global_list_push(0,FUN_8c0a611c,0x8c285280,uVar1);
  if (cVar5 == '\0') {
    _DAT_8c126230 = CONCAT44(_UNK_8c126234,0x800000);
                    
  }
  else {
    _DAT_8c126230 = 0xffffffff00800000;
  }
  uVar1 = 4;
  FUN_8c010120(0x8c285310,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,9);
  global_list_push(0,FUN_8c0a60f8,0x8c285304,uVar1);
  uVar4 = 4;
  FUN_8c010120(0x8c285340,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,9);
  uVar1 = 0x8c285334;
  pcVar2 = FUN_8c0a60d4;
  global_list_push(0,FUN_8c0a60d4,0x8c285334,uVar4);
  uVar1 = FUN_8c02452c(0x8c285370,pcVar2,uVar1,uVar4);
  uVar3 = 0x8c285364;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c285364,uVar4);
  uVar1 = FUN_8c024824(&DAT_8c2854a0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285494;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c285494,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2854bc,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2854b0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2854b0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2854d8,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2854cc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2854cc,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2854f4,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2854e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2854e8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285510,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285504;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285504,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c28552c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285520;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285520,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285548,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28553c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28553c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285564,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285558;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285558,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c285580,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c285574,uVar4);
  uVar4 = 0x8c2854f4;
  uVar1 = FUN_8c017010(0x8c28559c,0x8c2854bc,0x8c2854d8,0x8c2854f4,0x8c285510,0x8c28552c,0x8c285548,
                       0x8c285564,0x8c285580);
  uVar3 = 0x8c285590;
  pcVar2 = Class_129938_m0_017084;
  global_list_push(uVar1,Class_129938_m0_017084,0x8c285590,uVar4);
  uVar1 = FUN_8c02452c(0x8c28563c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285630;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c285630,uVar4);
  uVar1 = FUN_8c024824(0x8c28576c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c285760;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c285760,uVar4);
  uVar1 = FUN_8c015b94(0x8c285788,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28577c;
  pcVar2 = free_if_nonnull_wrap_0247b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0247b0,0x8c28577c,uVar4);
  uVar1 = FUN_8c015bc8(0x8c285798,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,free_if_nonnull_wrap_03a3dc,0x8c28578c,uVar4);
  uVar3 = 0x8c2854f4;
  uVar1 = FUN_8c017010(0x8c2857a8,0x8c2854bc,0x8c2854d8,0x8c2854f4,0x8c285510,0x8c28552c,0x8c285548,
                       0x8c285564,0x8c285580);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c28579c,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c0a5c90\n.set _FUN_8c0a5c90, _FUN_8c0a5c90_def\n");
