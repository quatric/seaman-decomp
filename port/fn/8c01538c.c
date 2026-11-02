#include "../decls.h"
undefined4 FUN_8c01538c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25b3ec(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01538c\n.set _FUN_8c01538c, _FUN_8c01538c_def\n");
