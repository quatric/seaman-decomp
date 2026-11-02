#include "../decls.h"
undefined4 FUN_8c0dc7b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(0x18c + ar4) = 0x78;
  return 1;
}

__asm__(".globl _FUN_8c0dc7b0\n.set _FUN_8c0dc7b0, _FUN_8c0dc7b0_def\n");
