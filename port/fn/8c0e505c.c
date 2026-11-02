#include "../decls.h"
undefined4 FUN_8c0e505c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7);
  uVar1 = FUN_8c0da754(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e505c\n.set _FUN_8c0e505c, _FUN_8c0e505c_def\n");
