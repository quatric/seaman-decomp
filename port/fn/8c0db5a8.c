#include "../decls.h"
undefined4 * FUN_8c0db5a8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x50);
  *ar6 = *(undefined4 *)(ar4 + 0x54);
  *ar7 = *(undefined4 *)(ar4 + 0x58);
  return (undefined4 *)(ar4 + 0x54);
}

__asm__(".globl _FUN_8c0db5a8\n.set _FUN_8c0db5a8, _FUN_8c0db5a8_def\n");
