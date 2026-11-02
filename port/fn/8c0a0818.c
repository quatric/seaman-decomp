#include "../decls.h"
undefined4 * FUN_8c0a0818_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12ad14);
  Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x238,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x250,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x260,ar5,ar6,ar7);
  FUN_8c0a0890(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0a0818\n.set _FUN_8c0a0818, _FUN_8c0a0818_def\n");
