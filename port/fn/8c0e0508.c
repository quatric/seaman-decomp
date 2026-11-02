#include "../decls.h"
undefined4 FUN_8c0e0508_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  FUN_8c0d55d0(ar4 + 0x10ac,ar5,ar6,ar7);
  FUN_8c0d06ec(ar4 + 0x13b24,ar5_00,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = noop_0d0a38(ar4 + 0x13b70,ar5_00,ar6,ar7,in_PR);
  }
  else {
    uVar1 = FUN_8c0d1518(ar4 + 0x13b8c,ar5_00,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0508\n.set _FUN_8c0e0508, _FUN_8c0e0508_def\n");
