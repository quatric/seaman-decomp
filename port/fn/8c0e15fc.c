#include "../decls.h"
undefined4 FUN_8c0e15fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c01538c(ar4 + 0x106c,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x107c,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1074,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x1078,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7);
  uVar1 = FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e15fc\n.set _FUN_8c0e15fc, _FUN_8c0e15fc_def\n");
