#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5582(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f5558\n.set _s_FATAL_ERROR_Cannot_get_semap_1f5558, _s_FATAL_ERROR_Cannot_get_semap_1f5558_def\n");
