#include "../decls.h"
undefined4 FUN_8c0e6cd8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  s_Failed_wrap_0d9b8c(ar4,ar5,ar6,ar7);
  s_Failed_s_015312(ar4 + 4,ar5_00,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = noop_0d845c(ar4 + 0x10dc,ar5_00,ar6,ar7,in_PR);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e6cd8\n.set _FUN_8c0e6cd8, _FUN_8c0e6cd8_def\n");
