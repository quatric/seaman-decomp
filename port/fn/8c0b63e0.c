#include "../decls.h"
int FUN_8c0b63e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 1) {
    iVar1 = FUN_8c0b6604(ar4,ar5,ar6,ar7);
  }
  else if (((iVar1 != 2) && (iVar1 == 4)) && (iVar1 = *(int *)(ar4 + 0x6c), iVar1 == 0)) {
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,ar5);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0b63e0\n.set _FUN_8c0b63e0, _FUN_8c0b63e0_def\n");
