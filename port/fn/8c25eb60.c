#include "../decls.h"
undefined4 FUN_8c25eb60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 in_stack_fffffe00;
  undefined4 in_stack_fffffe04;
  
  a5 = 0x28;
  a6 = 0x23;
  uVar1 = 0x1e0;
  _DAT_8c4a9ecc = 0x1e0;
  _DAT_8c4a9ec4 = 0x208;
  _DAT_8c4a9ec8 = 0x28;
  FUN_8c010838(0x1e0,0x28,0x23,ar7,in_stack_fffffe00,in_stack_fffffe04);
  uVar1 = FUN_8c25e260(uVar1,a5,a6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c25eb60\n.set _FUN_8c25eb60, _FUN_8c25eb60_def\n");
