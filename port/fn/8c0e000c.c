#include "../decls.h"
undefined4 FUN_8c0e000c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c0d1458(ar4 + 0x13b8c,ar5,ar6,ar7);
  uVar1 = FUN_8c0de6b0(ar4 + 0x13b70,ar5,ar6,ar7,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c0e000c\n.set _FUN_8c0e000c, _FUN_8c0e000c_def\n");
