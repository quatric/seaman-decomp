#include "../decls.h"
undefined4 FUN_8c06711c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(0x87c + ar4) == 1) && (*(int *)(0x880 + ar4) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c06711c\n.set _FUN_8c06711c, _FUN_8c06711c_def\n");
