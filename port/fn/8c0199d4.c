#include "../decls.h"
undefined4 * FUN_8c0199d4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c019208(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c129a24);
  Vec3_ctor_zero((int)ar4 + 0x80,ar5,ar6,ar7);
  Vec3_ctor_xyz((int)ar4 + 0x90,ar5,ar6,ar7);
  Vec3_ctor_xyz((int)ar4 + 0xa0,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0xb0,ar5,ar6,ar7);
  *(undefined4 *)(0xbc + (int)ar4) = 1;
  return ar4;
}

__asm__(".globl _FUN_8c0199d4\n.set _FUN_8c0199d4, _FUN_8c0199d4_def\n");
