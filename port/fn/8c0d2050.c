#include "../decls.h"
int FUN_8c0d2050_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x10,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x2c) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x3c) = 3;
  FUN_8c0d25a0(ar4,ar5,ar6,ar7);
  FUN_8c0d20bc(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0d2050\n.set _FUN_8c0d2050, _FUN_8c0d2050_def\n");
