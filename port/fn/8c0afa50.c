#include "../decls.h"
undefined4 * FUN_8c0afa50_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12b2ac);
  Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x234,ar5,ar6,ar7);
  FUN_8c033954((int)ar4 + 0x248,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2bc,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2d4,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2e4,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2f4,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x304,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x338,ar5,ar6,ar7);
  FUN_8c0afb1c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0afa50\n.set _FUN_8c0afa50, _FUN_8c0afa50_def\n");
