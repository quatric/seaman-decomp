#include "../decls.h"
int FUN_8c016a20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 4) == 0.0) {
    *(undefined4 *)(ar4 + 4) = 0x38d1b717;
  }
  return ar4 + 8;
}

__asm__(".globl _FUN_8c016a20\n.set _FUN_8c016a20, _FUN_8c016a20_def\n");
