#include "../decls.h"
undefined4 FUN_8c014ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = 1;
  return 100;
}

__asm__(".globl _FUN_8c014ea0\n.set _FUN_8c014ea0, _FUN_8c014ea0_def\n");
