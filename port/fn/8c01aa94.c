#include "../decls.h"
undefined4 FUN_8c01aa94_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (-1 < *ar4) {
    iVar1 = *(int *)((int)ar4 + 0x2458 + *ar4 * 0x28);
    while ((-1 < iVar1 && (*(int *)((int)ar4 + 0x244c + iVar1 * 0x28) != -1))) {
      if (*(int *)((int)ar4 + 0x2454 + iVar1 * 0x28) == 2) {
        return 1;
      }
      iVar1 = *(int *)((int)ar4 + 0x2458 + iVar1 * 0x28);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c01aa94\n.set _FUN_8c01aa94, _FUN_8c01aa94_def\n");
