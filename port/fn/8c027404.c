#include "../decls.h"
undefined4 FUN_8c027404_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c027448(*(undefined4 *)(0x308 + ar4),1,ar6,ar7);
  uVar1 = FUN_8c02743c(*(undefined4 *)(0x30c + ar4),1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027404\n.set _FUN_8c027404, _FUN_8c027404_def\n");
