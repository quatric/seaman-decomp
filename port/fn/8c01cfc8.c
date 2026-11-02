#include "../decls.h"
undefined4 FUN_8c01cfc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 in_PR;
  
  FUN_8c201c82(_DAT_8c279270,ar5,ar6,ar7,in_PR);
  ar4_00 = _DAT_8c27926c;
  FUN_8c201b04(_DAT_8c27926c,ar5,ar6,ar7,in_PR);
  FUN_8c2019e0(ar4_00,ar5,ar6,ar7);
  _DAT_8c2791b8 = 1;
  return 1;
}

__asm__(".globl _FUN_8c01cfc8\n.set _FUN_8c01cfc8, _FUN_8c01cfc8_def\n");
