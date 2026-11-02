#include "../decls.h"
undefined4 FUN_8c035c70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4f) = *(char *)(ar4 + 0x4f) + -1;
  return 0x4f;
}

__asm__(".globl _FUN_8c035c70\n.set _FUN_8c035c70, _FUN_8c035c70_def\n");
