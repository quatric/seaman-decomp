#include "../decls.h"
int FUN_8c0f3ebc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  *(undefined **)(ar4 + 8) = (&DATA_8c12c1f0);
  Vec3_ctor_zero(ar4 + 0x30,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x40,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x50,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x5c,ar5,ar6,ar7);
  FUN_8c102800(ar4 + 0x80,ar5,ar6,ar7);
  FUN_8c102800(ar4 + 0x90,ar5,ar6,ar7);
  FUN_8c0f78d8(ar4 + 0xa0,ar5,ar6,ar7);
  FUN_8c0f50b4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0f3ebc\n.set _FUN_8c0f3ebc, _FUN_8c0f3ebc_def\n");
