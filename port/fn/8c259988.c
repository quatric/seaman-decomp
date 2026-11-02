#include "../decls.h"
undefined4 * FUN_8c259988_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  ar6_00 = 0xc0;
  FUN_8c23c814(_DAT_8c4aabbc,ar4,0xc0,ar7);
  FUN_8c20fe00(_DAT_8c4aabbc,ar4,ar6_00,ar7);
  DAT_8c277b10 = _DAT_8c4ab140;
  DAT_8c277b14 = _DAT_8c4ab144;
  return &DAT_8c277b10;
}

__asm__(".globl _FUN_8c259988\n.set _FUN_8c259988, _FUN_8c259988_def\n");
