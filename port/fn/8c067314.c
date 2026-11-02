#include "../decls.h"
undefined4 FUN_8c067314_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125db8,ar5,ar6,ar7);
  uVar3 = 0x8c280480;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c280480,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125dc8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28048c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28048c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125dd8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c280498;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c280498,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125de8,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c2804a4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125df8 = CONCAT44(_UNK_8c125dfc,0x800000);
                    
  }
  else {
    _DAT_8c125df8 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c067314\n.set _FUN_8c067314, _FUN_8c067314_def\n");
