#include "../decls.h"
undefined4 FUN_8c016544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ar5;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x40),ar5,ar6,ar7);
  FUN_8c25b434(ar5,uVar1,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c235bfc))
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016544\n.set _FUN_8c016544, _FUN_8c016544_def\n");
