#include "../decls.h"
int FUN_8c011826_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar4;
  if (iVar1 == 1) {
    *(undefined1 *)(uint)ar4[1] = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c011826\n.set _FUN_8c011826, _FUN_8c011826_def\n");
