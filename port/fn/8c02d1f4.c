#include "../decls.h"
undefined4 FUN_8c02d1f4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  
  ar5_00 = ar5;
  uVar1 = get_field_134_02d1e8(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  uVar1 = get_field_138_02737c(ar4,ar5_00,ar6,ar7);
  ar5[1] = uVar1;
  uVar1 = get_field_13c_028d9c(ar4,ar5_00,ar6,ar7);
  ar5[2] = uVar1;
  uVar1 = get_field_140_025f70(ar4,ar5_00,ar6,ar7);
  ar5[3] = uVar1;
  uVar1 = get_field_8_02d1c0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[4] = uVar1;
  uVar1 = get_field_c_02d1b8(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[5] = uVar1;
  uVar1 = get_field_10_02d1b0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[6] = uVar1;
  uVar1 = FUN_8c02d1a8(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(short *)(ar5 + 7) = (short)uVar1;
  uVar1 = FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(short *)((int)ar5 + 0x1e) = (short)uVar1;
  uVar1 = get_field_18_02d1a0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02d1f4\n.set _FUN_8c02d1f4, _FUN_8c02d1f4_def\n");
