#include "../decls.h"
undefined4 FUN_8c0d6a20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[0xc] = *ar4;
  ar4[0xd] = 0x44ed8000;
  ar4[0xe] = 0x4445c000;
  if (360.0 <= (float)ar4[0xc]) {
    if (2140.0 < (float)ar4[0xc]) {
      ar4[0xc] = 0x4505c000;
    }
  }
  else {
    ar4[0xc] = 0x43b40000;
  }
  ar4[8] = *ar4;
  ar4[9] = ar4[1];
  ar4[10] = 0x44458000;
  ar4[0x19] = 4;
  return 100;
}

__asm__(".globl _FUN_8c0d6a20\n.set _FUN_8c0d6a20, _FUN_8c0d6a20_def\n");
