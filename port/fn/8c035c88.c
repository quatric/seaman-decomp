#include "../decls.h"
undefined4 FUN_8c035c88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x50) = *(char *)(ar4 + 0x50) + '\x01';
  return 0x50;
}

__asm__(".globl _FUN_8c035c88\n.set _FUN_8c035c88, _FUN_8c035c88_def\n");
