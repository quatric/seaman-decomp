#include "../decls.h"
undefined4 FUN_8c027970_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 2) == 2) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027970\n.set _FUN_8c027970, _FUN_8c027970_def\n");
