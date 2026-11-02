#include "../decls.h"
undefined4 * FUN_8c03a5a4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12a03c);
  Vec3_ctor_zero((int)ar4 + 0x248,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x258,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x268,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2a8,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x2c8,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2d4,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x308,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x34c,ar5,ar6,ar7);
  FUN_8c03c100(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c03a5a4\n.set _FUN_8c03a5a4, _FUN_8c03a5a4_def\n");
