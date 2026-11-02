#include "../decls.h"
undefined4 FUN_8c260000_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)(&FUN_8c264f86))
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5,*(int *)(ar4 + 100) + *(int *)(ar4 + 0x70) * 2);
  uVar1 = FUN_8c264fc2(uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c260000\n.set _FUN_8c260000, _FUN_8c260000_def\n");
