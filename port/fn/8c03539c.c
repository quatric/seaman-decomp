#include "../decls.h"
undefined4 FUN_8c03539c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + ar5) = *(undefined1 *)(ar4 + iVar1 + 0xc);
  }
  return 0xf;
}

__asm__(".globl _FUN_8c03539c\n.set _FUN_8c03539c, _FUN_8c03539c_def\n");
