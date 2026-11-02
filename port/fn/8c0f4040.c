#include "../decls.h"
int FUN_8c0f4040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  *(undefined **)(ar4 + 8) = &DAT_8c12c1f0;
  Vec3_ctor_zero(ar4 + 0x30,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x40,ar5_00,ar6_00,ar7_00);
  Vec3_set_zero(ar4 + 0x50,ar5_00,ar6_00,ar7_00);
  FUN_8c023dac(ar4 + 0x5c,ar5_00,ar6_00,ar7_00);
  FUN_8c102800(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
  FUN_8c102800(ar4 + 0x90,ar5_00,ar6_00,ar7_00);
  FUN_8c0f78d8(ar4 + 0xa0,ar5_00,ar6_00,ar7_00);
  FUN_8c0f50b4(ar4,ar5_00,ar6_00,ar7_00);
  *(undefined4 *)(ar4 + 0x24) = ar5;
  *(undefined4 *)(ar4 + 0x28) = ar6;
  *(undefined4 *)(ar4 + 0x20) = s0;
  *(undefined4 *)(ar4 + 0x2c) = ar7;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x78) = 0;
    *(undefined4 *)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x78) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 0x7c) = (ulonglong)extraout_fr1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f4040\n.set _FUN_8c0f4040, _FUN_8c0f4040_def\n");
