#include "../decls.h"
undefined4 FUN_8c10a214_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b20,ar5,ar6,ar7);
  uVar3 = 0x8c4708e0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4708e0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b30,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4708ec;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4708ec,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b40,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4708f8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4708f8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b50,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c470904,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126b60 = CONCAT44(_UNK_8c126b64,0x800000);
                    
  }
  else {
    _DAT_8c126b60 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c10a214\n.set _FUN_8c10a214, _FUN_8c10a214_def\n");
