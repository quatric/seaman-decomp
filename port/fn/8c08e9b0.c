#include "../decls.h"
int FUN_8c08e9b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x20,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x30,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x3c,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x4c,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c08e9b0\n.set _FUN_8c08e9b0, _FUN_8c08e9b0_def\n");
