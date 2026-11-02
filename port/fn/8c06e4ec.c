#include "../decls.h"
undefined4 * FUN_8c06e4ec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12a25c);
  Vec3_set_zero((int)ar4 + 0x224,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x230,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x244,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x254,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x264,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x270,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x280,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2bc,ar5,ar6,ar7);
  FUN_8c06e5a4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c06e4ec\n.set _FUN_8c06e4ec, _FUN_8c06e4ec_def\n");
