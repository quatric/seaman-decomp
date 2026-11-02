#include "../decls.h"
undefined4 FUN_8c101154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(0xb0 + ar4) == 1) && (*(int *)(0xb4 + ar4) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c101154\n.set _FUN_8c101154, _FUN_8c101154_def\n");
