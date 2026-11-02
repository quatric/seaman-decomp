#include "../decls.h"
int FUN_8c0c84cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0c84cc\n.set _FUN_8c0c84cc, _FUN_8c0c84cc_def\n");
