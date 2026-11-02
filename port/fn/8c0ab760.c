#include "../decls.h"
undefined4 * FUN_8c0ab760_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b0c4);
  *(undefined4 *)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(0xa0 + (int)ar4) = 6;
  *(undefined4 *)(0xa4 + (int)ar4) = 6;
  *(undefined4 *)(0xa8 + (int)ar4) = 6;
  return ar4;
}

__asm__(".globl _FUN_8c0ab760\n.set _FUN_8c0ab760, _FUN_8c0ab760_def\n");
