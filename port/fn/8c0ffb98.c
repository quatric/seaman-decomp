#include "../decls.h"
int FUN_8c0ffb98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0ff6c4(ar4 + 0xd8,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x12c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x13c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x14c,ar5,ar6,ar7);
  FUN_8c015c2c(ar4 + 0x15c,ar5,ar6,ar7);
  FUN_8c101250(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0xcc + ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0ffb98\n.set _FUN_8c0ffb98, _FUN_8c0ffb98_def\n");
