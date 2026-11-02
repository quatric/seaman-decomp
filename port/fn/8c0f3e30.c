#include "../decls.h"
undefined1 * FUN_8c0f3e30_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x2c,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x38,ar5,ar6,ar7);
  *ar4 = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x44) = 0x32;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f3e30\n.set _FUN_8c0f3e30, _FUN_8c0f3e30_def\n");
