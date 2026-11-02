#include "../decls.h"
undefined4 FUN_8c02722c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = ar5;
  return 100;
}

__asm__(".globl _FUN_8c02722c\n.set _FUN_8c02722c, _FUN_8c02722c_def\n");
