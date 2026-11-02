#include "../decls.h"
undefined4 FUN_8c0d064c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x34) != -1) {
    FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
    FUN_8c021a8c(0x8c2b59d0,ar4 + 0x34,ar6,ar7);
    *(undefined4 *)(ar4 + 0x34) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0d064c\n.set _FUN_8c0d064c, _FUN_8c0d064c_def\n");
