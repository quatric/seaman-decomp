#include "../decls.h"
undefined4 FUN_8c015470_def(int ar4,undefined4 ar5,uint ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined4 uVar1;
  
  FUN_8c257188(ar4 + 0x10,ar5,ar6 | 0x900,ar7,s0,ar5);
  uVar1 = FUN_8c257196(ar4 + 0x3c,ar4 + 0x10,s4,0x40800000,ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c015470\n.set _FUN_8c015470, _FUN_8c015470_def\n");
