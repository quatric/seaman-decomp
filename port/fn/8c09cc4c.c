#include "../decls.h"
undefined4 FUN_8c09cc4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(0x524 + ar4 + iVar1 * 4) != 0) {
      FUN_8c0ff500(ar5,ar4 + iVar1 * 4 + 0x524,ar6,ar7);
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09cc4c\n.set _FUN_8c09cc4c, _FUN_8c09cc4c_def\n");
