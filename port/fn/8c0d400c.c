#include "../decls.h"
undefined4 FUN_8c0d400c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  **(undefined4 **)(ar4 + 0x14) = 0x80ffffff;
  uVar1 = FUN_8c0d4038(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d400c\n.set _FUN_8c0d400c, _FUN_8c0d400c_def\n");
