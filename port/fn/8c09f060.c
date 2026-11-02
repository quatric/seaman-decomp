#include "../decls.h"
undefined4 FUN_8c09f060_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126110,ar5,ar6,ar7);
  uVar3 = 0x8c284d50;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d50,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126120,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d5c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d5c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126130,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d68;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d68,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126140,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d74;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d74,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126150 = CONCAT44(_UNK_8c126154,0x800000);
                    
  }
  else {
    _DAT_8c126150 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02452c(0x8c284d90,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d84;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c284d84,ar7);
  uVar1 = FUN_8c024824(0x8c284ec0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c284eb4,ar7);
  uVar1 = 4;
  FUN_8c010120(0x8c284f30,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0xf);
  global_list_push(0,FUN_8c09f390,0x8c284f24,uVar1);
  ar7_00 = 4;
  FUN_8c010120(0x8c284f78,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0xf);
  uVar1 = 0x8c284f6c;
  pcVar2 = FUN_8c09f36c;
  global_list_push(0,FUN_8c09f36c,0x8c284f6c,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c284fc8,pcVar2,uVar1,ar7_00);
  uVar3 = 0x8c284fbc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284fbc,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c284fe4,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c284fd8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284fd8,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285000,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c284ff4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284ff4,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c28501c,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c285010;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285010,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285038,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c28502c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28502c,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285054,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c285048;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285048,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285070,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c285064;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285064,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c28508c,pcVar2,uVar3,ar7_00);
  global_list_push(uVar1,Vec3_dtor,0x8c285080,ar7_00);
  uVar3 = 0x8c285000;
  uVar1 = FUN_8c017010(0x8c2850a8,0x8c284fc8,0x8c284fe4,0x8c285000,0x8c28501c,0x8c285038,0x8c285054,
                       0x8c285070,0x8c28508c);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c28509c,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c09f060\n.set _FUN_8c09f060, _FUN_8c09f060_def\n");
