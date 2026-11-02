#include "../decls.h"
int FUN_8c036058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + ar4) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c036058\n.set _FUN_8c036058, _FUN_8c036058_def\n");
