#include "../decls.h"
undefined4 FUN_8c1f30d4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    *ar5 = *(undefined4 *)(ar4 + 0xc);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f30d4\n.set _FUN_8c1f30d4, _FUN_8c1f30d4_def\n");
