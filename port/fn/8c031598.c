#include "../decls.h"
undefined4 Class_129cbc_m1_031598_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  *(undefined1 *)(0x210 + ar4) = *(undefined1 *)(ar5 + 0x28);
  vec3_copy_8c02b5fc(auStack_14,ar4 + 0x14c,ar6,ar7);
  FUN_8c023484(ar4 + 0x14,auStack_14,ar6,ar7,auStack_24);
  Vec3_assign(ar4 + 0x14,auStack_24,ar6,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_14,0xffffffff,ar6,ar7);
  vec3_copy_8c02b5fc(auStack_30,ar4 + 0x14c,ar6,ar7);
  FUN_8c023484(ar4 + 0x80,auStack_30,ar6,ar7,auStack_40);
  Vec3_assign(ar4 + 0x80,auStack_40,ar6,ar7);
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  uVar1 = FUN_8c02a1fc(ar4 + 0x14c,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129cbc_m1_031598\n.set _Class_129cbc_m1_031598, _Class_129cbc_m1_031598_def\n");
