#include "../decls.h"
undefined4 FUN_8c0d7100_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  undefined1 *ar6_00;
  int a7;
  undefined1 auStack_14 [16];
  
  ar6_00 = auStack_14;
  Vec3_set_zero(auStack_14,ar5,ar6,ar7);
  a7 = ar4 + 0x30;
  a5 = ar4 + 4;
  (**(code **)(*(int *)(ar4 + 0xc4) + 0xc))((int *)(ar4 + 0xc4),a5,auStack_14,a7);
  FUN_8c0d7154(ar4,a5,ar6_00,a7);
  uVar1 = object_dtor_delete(auStack_14,0xffffffff,ar6_00,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d7100\n.set _FUN_8c0d7100, _FUN_8c0d7100_def\n");
