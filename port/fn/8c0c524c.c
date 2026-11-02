#include "../decls.h"
int FUN_8c0c524c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x10) = 0x78;
  return ar4;
}

__asm__(".globl _FUN_8c0c524c\n.set _FUN_8c0c524c, _FUN_8c0c524c_def\n");
