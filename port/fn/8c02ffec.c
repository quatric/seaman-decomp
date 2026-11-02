#include "../decls.h"
undefined4 FUN_8c02ffec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b10,ar5,ar6,ar7);
  uVar3 = 0x8c27d4d0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4d0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b20,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d4dc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4dc,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b30,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d4e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4e8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b40,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27d4f4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125b50 = CONCAT44(_UNK_8c125b54,0x800000);
                    
  }
  else {
    _DAT_8c125b50 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c02ffec\n.set _FUN_8c02ffec, _FUN_8c02ffec_def\n");
