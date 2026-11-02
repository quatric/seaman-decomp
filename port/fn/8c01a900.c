#include "../decls.h"
int FUN_8c01a900_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c1fc5c4(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
  if (iVar1 == -1) {
    iVar1 = FUN_8c01c92c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = FUN_8c1fc5de(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    iVar1 = 0x2450;
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01a900\n.set _FUN_8c01a900, _FUN_8c01a900_def\n");
