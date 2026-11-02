#include "../decls.h"
undefined4 FUN_8c0d167c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [68];
  
  uVar1 = ar5;
  FUN_8c023e44(auStack_48,ar5,ar6,ar7);
  FUN_8c023e44(auStack_88,uVar1,ar6,ar7);
  FUN_8c023e7c(auStack_48,uVar1,ar6,ar7);
  FUN_8c023e7c(auStack_88,uVar1,ar6,ar7);
  FUN_8c023ef8(auStack_48,uVar1,ar6,ar7);
  FUN_8c023ebc(auStack_88,uVar1,ar6,ar7);
  ar5_00 = auStack_88;
  FUN_8c023e98(auStack_48,ar5_00,ar6,ar7);
  FUN_8c023e7c(auStack_88,ar5_00,ar6,ar7);
  FUN_8c023f34(auStack_88,ar5_00,ar6,ar7);
  FUN_8c023e98(auStack_48,auStack_88,ar6,ar7);
  FUN_8c024010(auStack_48,ar5,ar4,ar7);
  free_if_nonnull_wrap_023e4c(auStack_88,0xffffffff,ar4,ar7);
  uVar1 = free_if_nonnull_wrap_023e4c(auStack_48,0xffffffff,ar4,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d167c\n.set _FUN_8c0d167c, _FUN_8c0d167c_def\n");
