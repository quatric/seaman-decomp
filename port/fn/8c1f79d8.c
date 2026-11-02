#include "../decls.h"
undefined4 FUN_8c1f79d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0(FUN_8c1f736c,2,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f79d8\n.set _FUN_8c1f79d8, _FUN_8c1f79d8_def\n");
