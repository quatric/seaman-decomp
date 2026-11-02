#include "../decls.h"
undefined4 FUN_8c0ba37c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0ba5bc(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c0ba3b8))
                    (0x8c2b5628,0xff000000,0xff000000,0xff000000,0xff000000);
  return uVar1;
}

__asm__(".globl _FUN_8c0ba37c\n.set _FUN_8c0ba37c, _FUN_8c0ba37c_def\n");
