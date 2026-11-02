#include "../decls.h"
undefined4 FUN_8c102ba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  return 1;
}

__asm__(".globl _FUN_8c102ba4\n.set _FUN_8c102ba4, _FUN_8c102ba4_def\n");
