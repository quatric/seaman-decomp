#include "../decls.h"
undefined4 FUN_8c0e252c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01edcc(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e252c\n.set _FUN_8c0e252c, _FUN_8c0e252c_def\n");
