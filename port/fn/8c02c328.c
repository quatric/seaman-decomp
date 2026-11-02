#include "../decls.h"
undefined4 FUN_8c02c328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  return 0x48;
}

__asm__(".globl _FUN_8c02c328\n.set _FUN_8c02c328, _FUN_8c02c328_def\n");
