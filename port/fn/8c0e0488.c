#include "../decls.h"
undefined4 FUN_8c0e0488_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  FUN_8c0db090(ar4,ar5,ar6,ar7);
  ar5_00 = ar5;
  FUN_8c0d5614(ar4 + 0x10ac,ar5,ar6,ar7);
  FUN_8c0d06c4(ar4 + 0x13b24,ar5_00,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = noop_0d0a34(ar4 + 0x13b70,ar5_00,ar6,ar7,in_PR);
  }
  else {
    uVar1 = FUN_8c0d14e8(ar4 + 0x13b8c,ar5_00,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0488\n.set _FUN_8c0e0488, _FUN_8c0e0488_def\n");
