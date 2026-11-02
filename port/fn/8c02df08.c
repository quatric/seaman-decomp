#include "../decls.h"
undefined1 * FUN_8c02df08_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02df08\n.set _FUN_8c02df08, _FUN_8c02df08_def\n");
