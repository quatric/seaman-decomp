#include "../decls.h"
undefined4 FUN_8c016340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c235b6c))
                    (ar4,*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016340\n.set _FUN_8c016340, _FUN_8c016340_def\n");
