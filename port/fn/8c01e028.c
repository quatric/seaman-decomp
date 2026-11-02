#include "../decls.h"
int FUN_8c01e028_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar5 = 0;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar5 + iVar1 + 4) = 0;
  }
  return 0x100;
}

__asm__(".globl _FUN_8c01e028\n.set _FUN_8c01e028, _FUN_8c01e028_def\n");
