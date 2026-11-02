#include "../decls.h"
undefined4 FUN_8c0e6988_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0d8444((int)ar4 + 0x10dc,ar5,ar6,ar7);
  (**(code **)(0xa4 + *ar4))(ar4,3,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0e6988\n.set _FUN_8c0e6988, _FUN_8c0e6988_def\n");
