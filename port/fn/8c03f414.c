#include "../decls.h"
undefined4 * FUN_8c03f414_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x50);
  *ar6 = *(undefined4 *)(ar4 + 0x54);
  *ar7 = *(undefined4 *)(ar4 + 0x58);
  return (undefined4 *)(ar4 + 0x54);
}

__asm__(".globl _FUN_8c03f414\n.set _FUN_8c03f414, _FUN_8c03f414_def\n");
