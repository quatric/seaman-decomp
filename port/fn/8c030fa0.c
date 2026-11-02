#include "../decls.h"
undefined4 * FUN_8c030fa0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c129cbc);
  Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 5,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x15,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x1b,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x80,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x90,ar5,ar6,ar7);
  FUN_8c033954((int)ar4 + 0xb0,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x13c,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x14c,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x158,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x168,ar5,ar6,ar7);
  FUN_8c015ab8((int)ar4 + 0x1b0,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x1d8,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x1ec,ar5,ar6,ar7);
  FUN_8c030e9c((int)ar4 + 0x1fc,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x200,ar5,ar6,ar7);
  FUN_8c0310c0(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c030fa0\n.set _FUN_8c030fa0, _FUN_8c030fa0_def\n");
