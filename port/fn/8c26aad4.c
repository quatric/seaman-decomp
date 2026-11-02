#include "../decls.h"
undefined4 FUN_8c26aad4_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x4c);
  *ar6 = *(undefined4 *)(ar4 + 0x50);
  return 0x50;
}

__asm__(".globl _FUN_8c26aad4\n.set _FUN_8c26aad4, _FUN_8c26aad4_def\n");
