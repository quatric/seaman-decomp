#include "../decls.h"
undefined4 FUN_8c0df9ec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  uVar1 = ar5;
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  FUN_8c02f670(ar5,uVar1,ar6,ar7,auStack_28);
  Vec3_assign(auStack_18,auStack_28,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  FUN_8c036988(ar5,uVar1,ar6,ar7);
  uVar1 = (**(code **)(*ar4 + 0x4c))(ar4,ar5,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0df9ec\n.set _FUN_8c0df9ec, _FUN_8c0df9ec_def\n");
