#include "../decls.h"
undefined4 FUN_8c0c5dd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 4);
  *(undefined4 *)(ar4 + 4) = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c0c5dd8\n.set _FUN_8c0c5dd8, _FUN_8c0c5dd8_def\n");
