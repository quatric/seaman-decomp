#include "../decls.h"
undefined4 FUN_8c02b190_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x45c) = 0x708;
  *(undefined4 *)(ar4 + 0x448) = 0;
  return 0x448;
}

__asm__(".globl _FUN_8c02b190\n.set _FUN_8c02b190, _FUN_8c02b190_def\n");
