#include "../decls.h"
undefined4 FUN_8c016da8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c015af8(ar4 + 0x40,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016da8\n.set _FUN_8c016da8, _FUN_8c016da8_def\n");
