#include "../decls.h"
undefined4 FUN_8c0620bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x75) = (undefined1)ar7;
  return 0x75;
}

__asm__(".globl _FUN_8c0620bc\n.set _FUN_8c0620bc, _FUN_8c0620bc_def\n");
