#include "../decls.h"
undefined4 FUN_8c08a9b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  return 0;
}

__asm__(".globl _FUN_8c08a9b8\n.set _FUN_8c08a9b8, _FUN_8c08a9b8_def\n");
