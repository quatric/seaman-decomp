#include "../decls.h"
undefined4 FUN_8c0e5b30_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  
  ar5_00 = ar5;
  s_Failed_wrap_0d6074(ar4 + 0x15bc,ar5,ar6,ar7);
  s_Failed_s_015312(ar4 + 0x10dc,ar5_00,ar6,ar7);
  uVar1 = s_Failed_wrap_0d9b8c(ar4,ar5 & 0xff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e5b30\n.set _FUN_8c0e5b30, _FUN_8c0e5b30_def\n");
