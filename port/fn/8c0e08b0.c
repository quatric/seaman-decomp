#include "../decls.h"
int FUN_8c0e08b0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = 0x22810;
    *(undefined4 *)(0x22810 + ar4) = 1;
    return iVar1;
  }
  iVar1 = 0x22810;
  *(undefined4 *)(0x22810 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0e08b0\n.set _FUN_8c0e08b0, _FUN_8c0e08b0_def\n");
