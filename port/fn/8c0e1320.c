#include "../decls.h"
undefined4 FUN_8c0e1320_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0e1320\n.set _FUN_8c0e1320, _FUN_8c0e1320_def\n");
