#include "../decls.h"
undefined4 FUN_8c0e8900_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(0x410 + ar4) = 0;
  *(undefined4 *)(0x440 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(int *)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
        FUN_8c0d1b90(ar4 + iVar1 * 0x80 + iVar2 * 0x20 + 0xa4,ar5,ar6,ar7);
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e8900\n.set _FUN_8c0e8900, _FUN_8c0e8900_def\n");
