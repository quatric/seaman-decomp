#include "../decls.h"
undefined4 FUN_8c02793c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 1) == 1) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02793c\n.set _FUN_8c02793c, _FUN_8c02793c_def\n");
