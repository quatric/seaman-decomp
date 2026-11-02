#include "../decls.h"
undefined4 FUN_8c0e992c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264c0,ar5,ar6,ar7);
  uVar3 = 0x8c438440;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c438440,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264d0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c43844c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c43844c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264e0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c438458;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c438458,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1264f0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c438464,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126500 = CONCAT44(_UNK_8c126504,0x800000);
                    
  }
  else {
    _DAT_8c126500 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0e992c\n.set _FUN_8c0e992c, _FUN_8c0e992c_def\n");
