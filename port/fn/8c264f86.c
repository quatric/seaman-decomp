#include "../decls.h"
undefined4 FUN_8c264f86_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 1;
    *(undefined4 *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x1c) = ar6;
    *(undefined4 *)(ar4 + 0x20) = ar7;
    *(undefined4 *)(ar4 + 0x24) = 0;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c264f86\n.set _FUN_8c264f86, _FUN_8c264f86_def\n");
