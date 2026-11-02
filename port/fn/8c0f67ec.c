#include "../decls.h"
undefined4 FUN_8c0f67ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [20];
  
  uVar1 = rand(ar4,ar5,ar6,ar7);
  uVar2 = 3;
  libgcc_divide_helper_01031c(uVar1,3,ar6,ar7);
  uVar1 = rand(uVar1,uVar2,ar6,ar7);
  uVar2 = 3;
  libgcc_divide_helper_01031c(uVar1,3,ar6,ar7);
  Vec3_ctor_xyz(auStack_1c,uVar2,ar6,ar7);
  FUN_8c023aa0(ar4 + 0x30,auStack_1c,ar6,ar7);
  uVar1 = Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f67ec\n.set _FUN_8c0f67ec, _FUN_8c0f67ec_def\n");
