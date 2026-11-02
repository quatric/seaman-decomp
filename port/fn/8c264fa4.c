#include "../decls.h"
undefined4 FUN_8c264fa4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 2;
    *(undefined4 *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x1c) = ar6;
    *(undefined4 *)(ar4 + 0x20) = ar7;
    *(undefined4 *)(ar4 + 0x24) = s0;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c264fa4\n.set _FUN_8c264fa4, _FUN_8c264fa4_def\n");
