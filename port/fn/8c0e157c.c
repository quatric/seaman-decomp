#include "../decls.h"
undefined4 FUN_8c0e157c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  FUN_8c235ee4(ar4,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x106c,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1074,ar5,ar6,ar7);
  ar4_00 = ar4 + 0x107c;
  FUN_8c015adc(ar4_00,ar5,ar6,ar7);
  FUN_8c235f14(ar4_00,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1078,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e157c\n.set _FUN_8c0e157c, _FUN_8c0e157c_def\n");
