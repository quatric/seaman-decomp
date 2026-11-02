#include "../decls.h"
undefined4 FUN_8c1f8fcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint unaff_r14;
  
  do {
    FUN_8c1f8fa8(DAT_8c273a28 + 4 + unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 0x34;
  } while (unaff_r14 < 0xd0);
  _DAT_8c474bac = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f8fcc\n.set _FUN_8c1f8fcc, _FUN_8c1f8fcc_def\n");
