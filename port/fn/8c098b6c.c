#include "../decls.h"
undefined4 FUN_8c098b6c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125ff0,ar5,ar6,ar7);
  uVar3 = 0x8c2846a0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846a0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126000,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2846ac;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846ac,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126010,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2846b8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846b8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126020,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2846c4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846c4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126030 = CONCAT44(_UNK_8c126034,0x800000);
  }
  else {
                    
    _DAT_8c126030 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c030e34(auStack_1c,pcVar2,uVar3,ar7);
  FUN_8c05d608(0x8c2846d0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c030e34(auStack_34,uVar1,uVar3,ar7);
  uVar1 = FUN_8c05d608(0x8c2846e8,uVar1,uVar3,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c098b6c\n.set _FUN_8c098b6c, _FUN_8c098b6c_def\n");
