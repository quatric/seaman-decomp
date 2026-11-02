#include "../decls.h"
undefined4 FUN_8c035d4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4d) = *(char *)(ar4 + 0x4d) + '\x01';
  return 0x4d;
}

__asm__(".globl _FUN_8c035d4c\n.set _FUN_8c035d4c, _FUN_8c035d4c_def\n");
