#include "../decls.h"
int FUN_8c01c320_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_8c1fc654(*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 < 0) {
    iVar3 = iVar2;
    if (iVar2 != -1) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar3 = iVar1;
    }
  }
  else {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    iVar3 = 0x246c;
    *(int *)((int)ar4 + 0x246c + *ar4 * 0x28) = iVar2;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c01c320\n.set _FUN_8c01c320, _FUN_8c01c320_def\n");
