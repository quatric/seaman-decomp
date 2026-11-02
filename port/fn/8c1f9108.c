#include "../decls.h"
undefined4 FUN_8c1f9108_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x1c) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f9108\n.set _FUN_8c1f9108, _FUN_8c1f9108_def\n");
