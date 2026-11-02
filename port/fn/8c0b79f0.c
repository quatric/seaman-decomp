#include "../decls.h"
undefined4 FUN_8c0b79f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffe8;
  
  FUN_8c0162f8(&stack0xffffffe8,ar5,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = &DAT_8c4365bc;
  FUN_8c016318(&stack0xffffffe8,&DAT_8c43659c,&DAT_8c4365bc,4,in_stack_ffffffe8);
  uVar1 = 0x60;
  FUN_8c015198(&stack0xffffffe8,0x60,ar6_00,ar7_00,in_stack_ffffffe8);
  FUN_8c016340(&stack0xffffffe8,uVar1,ar6_00,ar7_00);
  uVar1 = free_if_nonnull_wrap_0151a0(&stack0xffffffe8,0xffffffff,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0b79f0\n.set _FUN_8c0b79f0, _FUN_8c0b79f0_def\n");
