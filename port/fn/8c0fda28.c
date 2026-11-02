#include "../decls.h"
undefined4 FUN_8c0fda28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  for (; ar5 < 0x10; ar5 = ar5 + 1) {
    *(undefined1 *)(0xc8 + *(int *)(*(int *)(ar4 + 0x10) + 0x40) + ar5 * 0x20) = 0;
  }
  return 0x10;
}

__asm__(".globl _FUN_8c0fda28\n.set _FUN_8c0fda28, _FUN_8c0fda28_def\n");
