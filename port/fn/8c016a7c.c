#include "../decls.h"
undefined4 * FUN_8c016a7c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c1299b0);
  Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 5,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 8,ar5,ar6,ar7);
  ar4[0xb] = 2;
  return ar4;
}

__asm__(".globl _FUN_8c016a7c\n.set _FUN_8c016a7c, _FUN_8c016a7c_def\n");
