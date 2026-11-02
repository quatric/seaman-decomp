#include "../decls.h"
undefined4 FUN_8c06af1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 9; iVar1 = iVar1 + 1) {
    if ('\0' < *(char *)(0x248 + ar4 + iVar1)) {
      *(char *)(0x248 + ar4 + iVar1) = *(char *)(0x248 + ar4 + iVar1) + -1;
    }
  }
  return 9;
}

__asm__(".globl _FUN_8c06af1c\n.set _FUN_8c06af1c, _FUN_8c06af1c_def\n");
