#include "../decls.h"
undefined4 FUN_8c09b210_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126080,ar5,ar6,ar7);
  uVar3 = 0x8c284730;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284730,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126090,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28473c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28473c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260a0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284748;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284748,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260b0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284754;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284754,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1260c0 = CONCAT44(_UNK_8c1260c4,0x800000);
                    
  }
  else {
    _DAT_8c1260c0 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02452c(0x8c28476c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284760;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c284760,ar7);
  uVar1 = FUN_8c024824(0x8c28489c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284890;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c284890,ar7);
  uVar1 = FUN_8c015b94(0x8c2848b8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848ac;
  pcVar2 = free_if_nonnull_wrap_0247b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0247b0,0x8c2848ac,ar7);
  uVar1 = FUN_8c015bc8(0x8c2848c8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848bc;
  pcVar2 = free_if_nonnull_wrap_03a3dc;
  global_list_push(uVar1,free_if_nonnull_wrap_03a3dc,0x8c2848bc,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c2848d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848cc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2848cc,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c2848f4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2848e8,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284910,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284904;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284904,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c28492c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284920;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284920,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284948,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28493c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28493c,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284964,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284958;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284958,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284980,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284974;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284974,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c28499c,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c284990,ar7);
  uVar3 = 0x8c284910;
  uVar1 = FUN_8c017010(0x8c2849b8,0x8c2848d8,0x8c2848f4,0x8c284910,0x8c28492c,0x8c284948,0x8c284964,
                       0x8c284980,0x8c28499c);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c2849ac,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c09b210\n.set _FUN_8c09b210, _FUN_8c09b210_def\n");
