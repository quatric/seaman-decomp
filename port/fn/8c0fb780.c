#include "../decls.h"
undefined4 FUN_8c0fb780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c0fb83c))
                    (ar4,*(undefined4 *)
                          (*(int *)(0x8c + ar4) * 0x24 + *(int *)(0x88 + ar4) + 0x50
                          ),ar5,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fb780\n.set _FUN_8c0fb780, _FUN_8c0fb780_def\n");
