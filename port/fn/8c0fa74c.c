#include "../decls.h"
undefined4 FUN_8c0fa74c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126610,ar5,ar6,ar7);
  uVar3 = 0x8c441280;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c441280,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126620,pcVar2,uVar3,ar7);
  uVar3 = 0x8c44128c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c44128c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126630,pcVar2,uVar3,ar7);
  uVar3 = 0x8c441298;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c441298,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126640,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c4412a4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126650 = CONCAT44(_UNK_8c126654,0x800000);
                    
  }
  else {
    _DAT_8c126650 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0fa74c\n.set _FUN_8c0fa74c, _FUN_8c0fa74c_def\n");
