#include "../decls.h"
undefined4 * FUN_8c0f54d0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  *ar6 = *(undefined4 *)(ar4 + 0x34);
  *ar7 = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c0f54d0\n.set _FUN_8c0f54d0, _FUN_8c0f54d0_def\n");
