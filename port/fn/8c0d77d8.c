#include "../decls.h"
int * FUN_8c0d77d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0146f8(ar4,ar5,ar6,ar7);
  *ar4 = (int)(&DATA_8c12bea8);
  (**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0d77d8\n.set _FUN_8c0d77d8, _FUN_8c0d77d8_def\n");
