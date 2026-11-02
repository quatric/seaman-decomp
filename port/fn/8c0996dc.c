#include "../decls.h"
undefined4 FUN_8c0996dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}

__asm__(".globl _FUN_8c0996dc\n.set _FUN_8c0996dc, _FUN_8c0996dc_def\n");
