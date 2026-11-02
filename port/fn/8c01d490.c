#include "../decls.h"
int FUN_8c01d490_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c201ba2(*(undefined4 *)0x8c27926c,ar5,ar6,ar7);
  if (iVar1 == 2) {
    iVar1 = FUN_8c201b9a(*(undefined4 *)0x8c27926c,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d490\n.set _FUN_8c01d490, _FUN_8c01d490_def\n");
