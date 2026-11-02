#include "../decls.h"
undefined4 FUN_8c1f364c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    return (int)*(short *)(ar4 + 0x50);
  }
  return 0xfffffff6;
}

__asm__(".globl _FUN_8c1f364c\n.set _FUN_8c1f364c, _FUN_8c1f364c_def\n");
