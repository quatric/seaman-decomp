#include "../decls.h"
undefined4 FUN_8c0ba5bc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0x43200000;
  ar4[1] = 0x43a98000;
  ar4[4] = 1;
  ar4[5] = 1;
  return 1;
}

__asm__(".globl _FUN_8c0ba5bc\n.set _FUN_8c0ba5bc, _FUN_8c0ba5bc_def\n");
