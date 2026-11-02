#include "../decls.h"
undefined4 FUN_8c21035c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar6_00;
  
  DAT_8c2757a0 = (uint)((int)ar4 < 0);
  ar6_00 = (1 - DAT_8c2757a0) * 0x100;
  pvr_20a844(0x74,ar6_00 | ar4 & 0xff,ar6_00,ar7);
  return 0;
}

__asm__(".globl _FUN_8c21035c\n.set _FUN_8c21035c, _FUN_8c21035c_def\n");
