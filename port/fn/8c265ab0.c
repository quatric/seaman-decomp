#include "../decls.h"
undefined4 FUN_8c265ab0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(&DATA_8c2784c0) != 0) {
    *ar4 = *(undefined4 *)((int)0x1a8 + *(int *)(&DATA_8c2784c0));
  }
  return 0;
}

__asm__(".globl _FUN_8c265ab0\n.set _FUN_8c265ab0, _FUN_8c265ab0_def\n");
