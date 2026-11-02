#include "../decls.h"
undefined4 FUN_8c1f0f24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  if (*(int *)(_DAT_8c2739d8 + 0x1c) != 0) {
    return 0xfffffff7;
  }
  if ((-1 < ar4) && (ar4 < *(int *)(_DAT_8c2739d8 + 0x14))) {
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 1;
    *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 2;
    *(int *)(_DAT_8c2739d8 + 0x28) = ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 0x30) = ar5;
    return 0;
  }
  return 0xfffffffb;
}

__asm__(".globl _FUN_8c1f0f24\n.set _FUN_8c1f0f24, _FUN_8c1f0f24_def\n");
