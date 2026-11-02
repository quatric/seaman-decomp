#include "../decls.h"
undefined4 FUN_8c0ba870_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  *(undefined4 *)(ar4 + 4) = 0x43a98000;
  *(undefined4 *)(ar4 + 0x10) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0ba870\n.set _FUN_8c0ba870, _FUN_8c0ba870_def\n");
