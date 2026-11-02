#include "../decls.h"
undefined4 FUN_8c25b3ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    return 0xffffffff;
  }
  DAT_8c277b04 = ar4;
  return 1;
}

__asm__(".globl _FUN_8c25b3ec\n.set _FUN_8c25b3ec, _FUN_8c25b3ec_def\n");
