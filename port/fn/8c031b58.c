#include "../decls.h"
undefined4 FUN_8c031b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
  return 0x6c;
}

__asm__(".globl _FUN_8c031b58\n.set _FUN_8c031b58, _FUN_8c031b58_def\n");
