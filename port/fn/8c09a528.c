#include "../decls.h"
undefined4 FUN_8c09a528_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4d) = *(char *)(ar4 + 0x4d) + -1;
  return 0x4d;
}

__asm__(".globl _FUN_8c09a528\n.set _FUN_8c09a528, _FUN_8c09a528_def\n");
