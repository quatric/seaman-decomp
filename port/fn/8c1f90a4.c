#include "../decls.h"
undefined4 FUN_8c1f90a4_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  _DAT_a05f78bc = ((ar4 & 0x7f00000) >> 0x14) << 8 | (ar5 & 0x7f00000) >> 0x14 | 0x46590000;
  DAT_8c273a20 = _DAT_a05f78bc;
  return 0;
}

__asm__(".globl _FUN_8c1f90a4\n.set _FUN_8c1f90a4, _FUN_8c1f90a4_def\n");
