#include "../decls.h"
int FUN_8c01c260_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)(&FUN_8c1fc7fc))
                    (*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + 0x2470 + *ar4 * 0x28),0x11);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c260\n.set _FUN_8c01c260, _FUN_8c01c260_def\n");
