#include "../decls.h"
undefined4 FUN_8c0d5614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c022104(0x8c2b59d0,*(undefined4 *)(0x5e4 + ar4),ar6,ar7);
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(int *)(0x600 + iVar1 * 0x18 + ar4) != -1) {
      (*(code *)(&FUN_8c021a60))
                (0x8c2b59d0,*(undefined4 *)(0x600 + iVar1 * 0x18 + ar4),ar6,ar7);
    }
  }
  return 2;
}

__asm__(".globl _FUN_8c0d5614\n.set _FUN_8c0d5614, _FUN_8c0d5614_def\n");
