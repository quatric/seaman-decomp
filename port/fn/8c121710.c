#include "../decls.h"
undefined4 FUN_8c121710_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined1 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 0x45) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c121710\n.set _FUN_8c121710, _FUN_8c121710_def\n");
