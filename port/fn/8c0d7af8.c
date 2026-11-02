#include "../decls.h"
int FUN_8c0d7af8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = ar5;
  FUN_8c0d63f8(ar4 + 0x1c,ar5,ar6,ar7);
  FUN_8c0d63f8(ar4 + 0x30,ar5,ar6_00,ar7);
  FUN_8c0d7e78(ar4,ar5_00,ar6,ar7,ar5_00);
  FUN_8c0d7dcc(ar4,ar5_00,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0d7af8\n.set _FUN_8c0d7af8, _FUN_8c0d7af8_def\n");
