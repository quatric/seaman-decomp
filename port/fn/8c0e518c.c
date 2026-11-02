#include "../decls.h"
undefined4 FUN_8c0e518c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(0x15c8 + ar4) == 0) {
    *(undefined4 *)(0x15c8 + ar4) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e518c\n.set _FUN_8c0e518c, _FUN_8c0e518c_def\n");
