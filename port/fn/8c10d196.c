#include "../decls.h"
undefined4 FUN_8c10d196_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + 1) = (undefined2)ar5;
  *(undefined2 *)((int)ar4 + 6) = (undefined2)ar6;
  *ar4 = ar7;
  return 0;
}

__asm__(".globl _FUN_8c10d196\n.set _FUN_8c10d196, _FUN_8c10d196_def\n");
