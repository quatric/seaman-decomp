#include "../decls.h"
undefined4 FUN_8c064b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x3b) = *(char *)(ar4 + 0x3b) + '\x01';
  return 0x3b;
}

__asm__(".globl _FUN_8c064b84\n.set _FUN_8c064b84, _FUN_8c064b84_def\n");
