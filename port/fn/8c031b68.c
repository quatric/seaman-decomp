#include "../decls.h"
undefined4 * FUN_8c031b68_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xa0) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x48) = ar5[3];
  *(undefined4 *)(ar4 + 0x4c) = ar5[4];
  *(undefined4 *)(ar4 + 0x50) = ar5[5];
  return ar5 + 4;
}

__asm__(".globl _FUN_8c031b68\n.set _FUN_8c031b68, _FUN_8c031b68_def\n");
