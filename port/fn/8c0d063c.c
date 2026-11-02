#include "../decls.h"
undefined4 FUN_8c0d063c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0d063c\n.set _FUN_8c0d063c, _FUN_8c0d063c_def\n");
