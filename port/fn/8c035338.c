#include "../decls.h"
undefined4 FUN_8c035338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(ar4 + iVar1 + 0xc) = *(undefined1 *)(iVar1 + ar5);
  }
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    if ((((*(char *)(ar4 + iVar1 + 0xc) == '\x06') || (*(char *)(ar4 + iVar1 + 0xc) == '\x02')) ||
        (*(char *)(ar4 + iVar1 + 0xc) == '\x03')) || (*(char *)(ar4 + iVar1 + 0xc) == '\x04')) {
      *(undefined1 *)(ar4 + iVar1 + 0xc) = 1;
    }
  }
  return 0xf;
}

__asm__(".globl _FUN_8c035338\n.set _FUN_8c035338, _FUN_8c035338_def\n");
