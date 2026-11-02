#include "../decls.h"
undefined4 FUN_8c263ffa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x6d) = (undefined1)ar5;
  return 0x6d;
}

__asm__(".globl _FUN_8c263ffa\n.set _FUN_8c263ffa, _FUN_8c263ffa_def\n");
