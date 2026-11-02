#include "../decls.h"
undefined4 FUN_8c0e00ec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  noop_0d09f8(ar4 + 0x4edc,ar5,ar6,ar7,in_PR);
  (**(code **)(*ar4 + 0x15c))(ar4,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0e00ec\n.set _FUN_8c0e00ec, _FUN_8c0e00ec_def\n");
