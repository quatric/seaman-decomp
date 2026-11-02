#include "../decls.h"
undefined4 * FUN_8c0f3e84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_set_zero(ar4 + 1,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 4,ar5,ar6,ar7);
  *ar4 = 0xffffffff;
  ar4[7] = 0x32;
  ar4[8] = 1;
  return ar4;
}

__asm__(".globl _FUN_8c0f3e84\n.set _FUN_8c0f3e84, _FUN_8c0f3e84_def\n");
