#include "../decls.h"
undefined4 FUN_8c01e04c_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  *ar5 = *(undefined4 *)0x8c27928c;
  for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
    *(undefined1 *)((int)ar5 + iVar2 + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined4 *)0x8c27928c != 0) {
    uVar1 = memmove(ar5 + 1,*(undefined4 *)0x8c279288,*(undefined4 *)0x8c27928c,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01e04c\n.set _FUN_8c01e04c, _FUN_8c01e04c_def\n");
