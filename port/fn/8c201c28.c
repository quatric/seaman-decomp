#include "../decls.h"
undefined4 FUN_8c201c28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x18) != ar5) {
    *(int *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x28) = 4;
  }
  return 0;
}

__asm__(".globl _FUN_8c201c28\n.set _FUN_8c201c28, _FUN_8c201c28_def\n");
