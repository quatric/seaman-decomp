#include "../decls.h"
undefined4 FUN_8c02cb9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + 0x20) = (undefined2)ar5;
  return 0x20;
}

__asm__(".globl _FUN_8c02cb9c\n.set _FUN_8c02cb9c, _FUN_8c02cb9c_def\n");
