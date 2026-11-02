#include "../decls.h"
undefined4 * FUN_8c03f3f8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x5c);
  *ar6 = *(undefined4 *)(ar4 + 0x60);
  *ar7 = *(undefined4 *)(ar4 + 100);
  return (undefined4 *)(ar4 + 0x60);
}

__asm__(".globl _FUN_8c03f3f8\n.set _FUN_8c03f3f8, _FUN_8c03f3f8_def\n");
