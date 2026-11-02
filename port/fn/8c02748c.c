#include "../decls.h"
undefined4 FUN_8c02748c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0274b0(*(undefined4 *)(0x308 + ar4),1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02748c\n.set _FUN_8c02748c, _FUN_8c02748c_def\n");
