#include "../decls.h"
undefined4 FUN_8c025fbc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(short *)(ar4 + 0x16) = (short)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c025fbc\n.set _FUN_8c025fbc, _FUN_8c025fbc_def\n");
