#include "../decls.h"
uint FUN_8c0c8024_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01eedc(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0c8024\n.set _FUN_8c0c8024, _FUN_8c0c8024_def\n");
