#include "../decls.h"
int FUN_8c01b920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar1 = FUN_8c01b9b0(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar2 = FUN_8c01acd0(ar4,iVar1,ar6,ar7);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(0x246c + iVar1 * 0x28 + ar4) * 0x200 - 0x280;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b920\n.set _FUN_8c01b920, _FUN_8c01b920_def\n");
