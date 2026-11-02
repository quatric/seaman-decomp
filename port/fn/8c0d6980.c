#include "../decls.h"
undefined4 FUN_8c0d6980_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  return 0x60;
}

__asm__(".globl _FUN_8c0d6980\n.set _FUN_8c0d6980, _FUN_8c0d6980_def\n");
