#include "../decls.h"
undefined4 FUN_8c07f268_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 in_dr0;
  char cVar4;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar4 = '\0';
  uVar2 = ar5;
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar2);
  FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7);
  Vec3_assign(auStack_18,auStack_38,ar6,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_sub(auStack_18,ar4 + 0x244,ar6,ar7,auStack_48);
  Vec3_assign(auStack_28,auStack_48,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  puVar3 = auStack_18;
  Vec3_assign(ar4 + 0x244,puVar3,ar6,ar7);
  Vec3_length_sq(auStack_28,puVar3,ar6,ar7);
  if (cVar4 == '\0') {
    *(int *)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_dr0;
  }
  Vec3_ctor_xyz(auStack_58,puVar3,ar6,ar7);
  iVar1 = FUN_8c023d04(auStack_28,auStack_58,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  if (iVar1 != 0) {
    vec3_copy_8c02b5fc(auStack_64,uVar2,ar6,ar7);
    puVar3 = auStack_64;
    FUN_8c023484(auStack_28,puVar3,ar6,ar7,auStack_74);
    uVar2 = Vec3_length(auStack_74,puVar3,ar6,ar7);
    Vec3_assign(ar4 + 0x14,uVar2,ar6,ar7);
    Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_64,0xffffffff,ar6,ar7);
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  uVar2 = Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c07f268\n.set _FUN_8c07f268, _FUN_8c07f268_def\n");
