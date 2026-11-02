#include "../decls.h"
undefined4 FUN_8c1f5684_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56b0(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f5684\n.set _FUN_8c1f5684, _FUN_8c1f5684_def\n");
