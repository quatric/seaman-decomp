#include "../decls.h"
undefined4 FUN_8c09b844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c08a9b8(ar4,ar5,ar6,ar7);
  FUN_8c08a9b8(ar4 + 0xc,ar5,ar6,ar7);
  FUN_8c078f84(ar4 + 0x18,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24) = 0x2d;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}

__asm__(".globl _FUN_8c09b844\n.set _FUN_8c09b844, _FUN_8c09b844_def\n");
