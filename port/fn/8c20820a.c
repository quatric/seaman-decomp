#include "../decls.h"
int FUN_8c20820a_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if ((0x2000000 & ar4) != 0) {
    iVar1 = 2;
    if ((0x1000000 & ar4) != 0) {
      iVar1 = 3;
    }
    if ((ar4 & 0x400000) == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c20820a\n.set _FUN_8c20820a, _FUN_8c20820a_def\n");
