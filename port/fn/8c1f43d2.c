#include "../decls.h"
undefined4 FUN_8c1f43d2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int ar4_00;
  undefined4 in_PR;
  
  ar4_00 = _DAT_8c4727b4;
  if (*(int *)(_DAT_8c4727b4 + 0xfc0) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4_00,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6b8,in_PR);
    return 0xfffffffe;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f43d2\n.set _FUN_8c1f43d2, _FUN_8c1f43d2_def\n");
