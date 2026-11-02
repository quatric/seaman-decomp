#include "../decls.h"
undefined2 * FUN_8c068a2c_def(undefined2 *ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  *(undefined1 *)(ar4 + 4) = *(undefined1 *)(ar5 + 4);
  *(undefined1 *)((int)ar4 + 9) = *(undefined1 *)((int)ar5 + 9);
  return ar4;
}

__asm__(".globl _FUN_8c068a2c\n.set _FUN_8c068a2c, _FUN_8c068a2c_def\n");
