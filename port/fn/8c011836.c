#include "../decls.h"
undefined4 FUN_8c011836_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 == 1) {
    return 0;
  }
  return (int)*(char *)(ar4[1] + 0x10) & 0x40;
}

__asm__(".globl _FUN_8c011836\n.set _FUN_8c011836, _FUN_8c011836_def\n");
