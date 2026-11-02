#include "../decls.h"
undefined4 FUN_8c027988_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027988\n.set _FUN_8c027988, _FUN_8c027988_def\n");
