#include "../decls.h"
int FUN_8c238f02_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 2;
  if ((ar4 & 1) != 0) {
    iVar1 = 0x1e;
  }
  if ((ar4 & 2) != 0) {
    iVar1 = iVar1 + 2;
  }
  if ((ar4 & 4) != 0) {
    iVar1 = iVar1 + 2;
  }
  if ((ar4 & 8) != 0) {
    iVar1 = iVar1 + 4;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c238f02\n.set _FUN_8c238f02, _FUN_8c238f02_def\n");
