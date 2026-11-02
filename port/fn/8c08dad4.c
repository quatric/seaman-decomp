#include "../decls.h"
undefined4 * FUN_8c08dad4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12a76c);
  Vec3_ctor_zero((int)ar4 + 0x230,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x24c,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x264,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x28c,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x29c,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2a8,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x2b8,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2d0,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2e0,ar5,ar6,ar7);
  FUN_8c08db9c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c08dad4\n.set _FUN_8c08dad4, _FUN_8c08dad4_def\n");
