#include "../decls.h"
undefined4 FUN_8c0f4b98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  undefined1 auStack_14 [16];
  
  ar5_00 = ar4 + 0x5c;
  FUN_8c023e24(auStack_14,ar5_00,ar6,ar7);
  FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,ar5_00,ar6,ar7);
  FUN_8c023e04(ar4 + 0x5c,auStack_14,ar6,ar7);
  uVar1 = free_if_nonnull_wrap_016ac4(auStack_14,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f4b98\n.set _FUN_8c0f4b98, _FUN_8c0f4b98_def\n");
