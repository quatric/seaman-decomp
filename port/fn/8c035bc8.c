#include "../decls.h"
undefined4 FUN_8c035bc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4e) = *(char *)(ar4 + 0x4e) + -1;
  return 0x4e;
}

__asm__(".globl _FUN_8c035bc8\n.set _FUN_8c035bc8, _FUN_8c035bc8_def\n");
