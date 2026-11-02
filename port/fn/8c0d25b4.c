#include "../decls.h"
int FUN_8c0d25b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x18,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x28,ar5,ar6,ar7);
  FUN_8c015ff0(ar4 + 0x48,ar5,ar6,ar7);
  FUN_8c0d2f14(ar4,ar5,ar6,ar7);
  FUN_8c014a0c(ar4 + 0x48,ar5,ar6,ar7);
  FUN_8c014a20(ar4 + 0x48,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0d25b4\n.set _FUN_8c0d25b4, _FUN_8c0d25b4_def\n");
