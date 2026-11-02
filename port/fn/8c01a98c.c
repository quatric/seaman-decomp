#include "../decls.h"
int FUN_8c01a98c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = *(int *)((int)ar4 + 0x2454 + *ar4 * 0x28);
    if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) &&
       (*(int *)((int)ar4 + 0x2470 + *ar4 * 0x28) != 0)) {
      (*(code *)(&FUN_8c1fb57c))
                (*(undefined4 *)((int)ar4 + 0x2470 + *ar4 * 0x28),ar5,ar6,ar7);
    }
    iVar2 = *ar4;
    iVar1 = *(int *)((int)ar4 + 0x2458 + *ar4 * 0x28);
    *(undefined4 *)((int)ar4 + 0x244c + *ar4 * 0x28) = 0xffffffff;
    *ar4 = iVar1;
    iVar1 = *(int *)((int)ar4 + 0x2454 + *ar4 * 0x28);
    if ((iVar1 != 2) || (iVar1 = FUN_8c01aa94(ar4,ar5,ar6,ar7), iVar1 != 1)) break;
    *(undefined4 *)((int)ar4 + 0x2450 + iVar2 * 0x28) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01a98c\n.set _FUN_8c01a98c, _FUN_8c01a98c_def\n");
