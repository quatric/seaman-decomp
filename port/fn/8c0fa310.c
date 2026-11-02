#include "../decls.h"
undefined4 FUN_8c0fa310_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove(ar5,ar4,0x1010,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fa310\n.set _FUN_8c0fa310, _FUN_8c0fa310_def\n");
