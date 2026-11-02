#include "../decls.h"
undefined4 * FUN_8c01a0cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c1299ec);
  Vec3_set_zero((int)ar4 + 0x15c,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c01a0cc\n.set _FUN_8c01a0cc, _FUN_8c01a0cc_def\n");
