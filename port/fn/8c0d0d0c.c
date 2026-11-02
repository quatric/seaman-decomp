#include "../decls.h"
undefined4 FUN_8c0d0d0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x68) = 1;
  *(undefined1 *)(ar4 + 0x78) = (undefined1)ar5;
  return 0x78;
}

__asm__(".globl _FUN_8c0d0d0c\n.set _FUN_8c0d0d0c, _FUN_8c0d0d0c_def\n");
