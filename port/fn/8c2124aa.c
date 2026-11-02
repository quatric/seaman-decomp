#include "../decls.h"
uint FUN_8c2124aa_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 << 0x18 | (0xff00 & ar4) << 8 | (0xff0000 & ar4) >> 8 |
         (0xff000000 & ar4) >> 0x18;
}

__asm__(".globl _FUN_8c2124aa\n.set _FUN_8c2124aa, _FUN_8c2124aa_def\n");
