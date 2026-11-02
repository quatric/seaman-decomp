#include "../decls.h"
undefined4 FUN_8c0ba844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 4) = 0x43ca0000;
  }
  else {
    *(undefined4 *)(ar4 + 4) = 0x43ca0000;
  }
  *(undefined4 *)(ar4 + 0x10) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0ba844\n.set _FUN_8c0ba844, _FUN_8c0ba844_def\n");
