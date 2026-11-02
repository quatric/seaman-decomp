#include "../decls.h"
undefined4 * FUN_8c0d6f28_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 5,ar5,ar6,ar7);
  *ar4 = 0;
  FUN_8c02a1fc(ar4 + 5,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0d6f28\n.set _FUN_8c0d6f28, _FUN_8c0d6f28_def\n");
