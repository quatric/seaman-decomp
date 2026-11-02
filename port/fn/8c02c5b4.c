#include "../decls.h"
undefined4 FUN_8c02c5b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    uVar1 = FUN_8c025f68(iVar2 * 0x18 + ar4,ar5,ar6,ar7);
    if ((char)uVar1 == '\0') {
      if (*(int *)(0x14c + ar4 + iVar2 * 4) == 2) {
        *(undefined4 *)(0x14c + ar4 + iVar2 * 4) = 0;
      }
      else if (*(int *)(0x14c + ar4 + iVar2 * 4) == 1) {
        *(undefined4 *)(0x14c + ar4 + iVar2 * 4) = 2;
      }
    }
    else {
      *(undefined4 *)(0x14c + ar4 + iVar2 * 4) = 1;
    }
  }
  return 6;
}

__asm__(".globl _FUN_8c02c5b4\n.set _FUN_8c02c5b4, _FUN_8c02c5b4_def\n");
