#include "../decls.h"
undefined4 FUN_8c0fa2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(0x1014 + ar4) == 0) {
    return 0;
  }
  return *(undefined4 *)(0x89134 + ar4);
}

__asm__(".globl _FUN_8c0fa2b8\n.set _FUN_8c0fa2b8, _FUN_8c0fa2b8_def\n");
