#include "../decls.h"
undefined4 FUN_8c05f498_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c05f498\n.set _FUN_8c05f498, _FUN_8c05f498_def\n");
