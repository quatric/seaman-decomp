#include "../decls.h"
undefined4 FUN_8c08d380_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125f98,ar5,ar6,ar7);
  uVar3 = 0x8c283ae8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283ae8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fa8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c283af4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283af4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fb8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c283b00;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283b00,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fc8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c283b0c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c283b0c,ar7);
  if (cVar5 == '\0') {
    _DAT_8c125fd8 = CONCAT44(_DAT_8c125fdc,0x800000);
  }
  else {
                    
    _DAT_8c125fd8 = 0xffffffff00800000;
  }
  uVar1 = Vec3_ctor_xyz(&DAT_8c125fdc,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c283b18,ar7);
  uVar1 = 0x124;
  FUN_8c010120(0x8c283b30,FUN_8c02452c,FUN_8c03a4ac,0x124,4);
  global_list_push(0,FUN_8c08daac,0x8c283b24,uVar1);
  uVar1 = 0x10;
  FUN_8c010120(&DAT_8c283fcc,FUN_8c024824,free_if_nonnull_wrap_03a454,0x10,3);
  global_list_push(0,FUN_8c08da88,0x8c283fc0,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c284008,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0x14);
  global_list_push(0,FUN_8c08da64,0x8c283ffc,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c284064,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0x14);
  global_list_push(0,FUN_8c08da40,0x8c284058,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c2840c0,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,2);
  global_list_push(0,FUN_8c08da1c,0x8c2840b4,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c2840d4,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,2);
  global_list_push(0,FUN_8c08d9f8,0x8c2840c8,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c2840e8,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,7);
  global_list_push(0,FUN_8c08d9d4,0x8c2840dc,uVar1);
  uVar4 = 4;
  FUN_8c010120(0x8c284110,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,7);
  uVar1 = 0x8c284104;
  pcVar2 = FUN_8c08d9b0;
  global_list_push(0,FUN_8c08d9b0,0x8c284104,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843a8,pcVar2,uVar1,uVar4);
  uVar3 = 0x8c28439c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28439c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843c4,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2843b8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2843b8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843e0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2843d4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2843d4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2843fc,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2843f0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2843f0,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284418,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28440c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28440c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284434,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284428;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284428,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284450,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284444;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284444,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c28446c,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c284460,uVar4);
  uVar4 = 0x8c2843e0;
  uVar1 = FUN_8c017010(0x8c284488,0x8c2843a8,0x8c2843c4,0x8c2843e0,0x8c2843fc,0x8c284418,0x8c284434,
                       0x8c284450,0x8c28446c);
  uVar3 = 0x8c28447c;
  pcVar2 = Class_129938_m0_017084;
  global_list_push(uVar1,Class_129938_m0_017084,0x8c28447c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284528,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28451c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28451c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284544,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284538;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284538,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284560,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284554;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284554,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c28457c,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c284570;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284570,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c284598,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c28458c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28458c,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2845b4,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2845a8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2845a8,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2845d0,pcVar2,uVar3,uVar4);
  uVar3 = 0x8c2845c4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2845c4,uVar4);
  uVar1 = Vec3_ctor_xyz(0x8c2845ec,pcVar2,uVar3,uVar4);
  global_list_push(uVar1,Vec3_dtor,0x8c2845e0,uVar4);
  uVar3 = 0x8c284560;
  uVar1 = FUN_8c017010(0x8c284608,0x8c284528,0x8c284544,0x8c284560,0x8c28457c,0x8c284598,0x8c2845b4,
                       0x8c2845d0,0x8c2845ec);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c2845fc,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c08d380\n.set _FUN_8c08d380, _FUN_8c08d380_def\n");
