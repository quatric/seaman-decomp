#include "../decls.h"
undefined4 * FUN_8c0d99e8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  *ar4 = (&DATA_8c12bce0);
  ar6_00 = ar6;
  FUN_8c015224(ar4 + 1,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 3,ar5,ar6_00,ar7);
  FUN_8c015224(ar4 + 10,ar5,ar6_00,ar7);
  FUN_8c015ab8(ar4 + 0xc,ar5,ar6_00,ar7);
  FUN_8c016410(ar4 + 0xd,ar5,ar6_00,ar7);
  FUN_8c102748((int)ar4 + 0x80,ar5,ar6_00,ar7);
  FUN_8c1026ec((int)ar4 + 0x8c,ar5,ar6_00,ar7);
  FUN_8c014334(ar4 + 4,ar5,ar6_00,ar7,(&DATA_8c13f7c0) + 0x5a7);
  ar4[9] = ar6;
  return ar4;
}

__asm__(".globl _FUN_8c0d99e8\n.set _FUN_8c0d99e8, _FUN_8c0d99e8_def\n");
