#include "../decls.h"
int FUN_8c01c7f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_8c01c8c8(ar4,ar4 + 0xb,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 == 1) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    iVar2 = iVar1;
  }
  else if (iVar2 != 2) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c7f4\n.set _FUN_8c01c7f4, _FUN_8c01c7f4_def\n");
