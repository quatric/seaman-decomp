#include "../decls.h"
int FUN_8c0fe1b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  
  ar5_00 = ar5;
  FUN_8c0fddc4(ar4,ar5,ar6,ar7);
  FUN_8c0fddc4(ar4 + 0xc,ar5_00,ar6,ar7);
  FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7,in_stack_ffffffe8);
  ar5_01 = ar4;
  FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7,in_stack_ffffffe8);
  ar6_00 = log_message(ar5,ar5_01,ar6,ar7);
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  FUN_8c0143c0(ar4 + 0x18,ar5,ar6_00,ar7);
  *(undefined1 *)(ar4 + ar6_00 + 0x19) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fe1b8\n.set _FUN_8c0fe1b8, _FUN_8c0fe1b8_def\n");
