#include "../decls.h"
undefined4 FUN_8c020d90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0xb,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar4 + 0xc,ar4 + 8,0,0,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c020d90\n.set _FUN_8c020d90, _FUN_8c020d90_def\n");
