#include "../decls.h"
undefined4 FUN_8c031eb0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar7_00;
  undefined4 in_stack_00000004;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  ar7_00 = ar7;
  FUN_8c0332b4(ar4,ar5,ar6,ar7,auStack_30,in_stack_00000004);
  vec3_copy_8c02b5fc(auStack_14,auStack_30,ar6,ar7_00);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_30,0xffffffff,ar6,ar7_00);
  Vec3_set_xyz(auStack_3c,uVar1,ar6,ar7_00);
  ar5_00 = auStack_3c;
  FUN_8c023484(ar7,ar5_00,ar6,ar7_00,auStack_4c);
  FUN_8c02374c(auStack_4c,ar5_00,ar6,ar7_00);
  uVar1 = Vec3_length(auStack_5c,ar5_00,ar6,ar7_00);
  Vec3_ctor_copy(auStack_24,uVar1,ar6,ar7_00);
  Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7_00);
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7_00);
  object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7_00);
  Vec3_ctor_copy(s0,auStack_24,ar6,ar7_00);
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7_00);
  object_dtor_delete(auStack_14,0xffffffff,ar6,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c031eb0\n.set _FUN_8c031eb0, _FUN_8c031eb0_def\n");
