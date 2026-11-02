#include "../decls.h"
undefined4 FUN_8c02786c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c027894(*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02786c\n.set _FUN_8c02786c, _FUN_8c02786c_def\n");
