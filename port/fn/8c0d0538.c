#include "../decls.h"
int FUN_8c0d0538_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*(int *)(ar4 + 0x14) == 0) && (ar5 == 1)) {
    iVar1 = 0x48;
    *(undefined4 *)(ar4 + 0x48) = 1;
  }
  else {
    iVar1 = *(int *)(ar4 + 0x14);
    if ((iVar1 == 1) && (ar5 == 0)) {
      iVar1 = 0x48;
      *(undefined4 *)(ar4 + 0x48) = 2;
    }
  }
  *(int *)(ar4 + 0x14) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0d0538\n.set _FUN_8c0d0538, _FUN_8c0d0538_def\n");
