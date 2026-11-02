#include "../decls.h"
undefined4 * FUN_8c09f3b4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12acc8);
  FUN_8c0300a4((int)ar4 + 0xa8,ar5,ar6,ar7);
  *(undefined4 *)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(0x828 + (int)ar4) = 0xf;
  *(undefined4 *)(0x82c + (int)ar4) = 0xf;
  *(undefined4 *)(0x830 + (int)ar4) = 0xf;
  *(undefined1 *)(0xa4 + (int)ar4) = 0;
  *(undefined4 *)(0xa0 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c09f3b4\n.set _FUN_8c09f3b4, _FUN_8c09f3b4_def\n");
