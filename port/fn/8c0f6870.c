#include "../decls.h"
int FUN_8c0f6870_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x1c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x34,ar5,ar6,ar7);
  FUN_8c0f692c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0f6870\n.set _FUN_8c0f6870, _FUN_8c0f6870_def\n");
