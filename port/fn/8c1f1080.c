#include "../decls.h"
undefined4 FUN_8c1f1080_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  return *(int *)(_DAT_8c2739d8 + 0x14) - *(int *)(_DAT_8c2739d8 + 0x10);
}

__asm__(".globl _FUN_8c1f1080\n.set _FUN_8c1f1080, _FUN_8c1f1080_def\n");
