#include "../decls.h"
undefined4 FUN_8c263df6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ('\x01' < *(char *)(ar4 + 1)) {
    uVar1 = FUN_8c263156(*(undefined4 *)(ar4 + 4));
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c263df6\n.set _FUN_8c263df6, _FUN_8c263df6_def\n");
