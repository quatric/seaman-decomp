#include "../decls.h"
undefined1 * FUN_8c02ff40_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030d44(ar4 + 8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = 0;
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02ff40\n.set _FUN_8c02ff40, _FUN_8c02ff40_def\n");
