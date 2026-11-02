#include "../decls.h"
uint FUN_8c1f1714_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)ar4[1] << 8 | (uint)ar4[2] << 0x10 | (uint)ar4[3] << 0x18 | (uint)*ar4;
}

__asm__(".globl _FUN_8c1f1714\n.set _FUN_8c1f1714, _FUN_8c1f1714_def\n");
