#include "../decls.h"
undefined4 FUN_8c26b720_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *a6;
  int iVar2;
  
  if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
    if (ar5 == 1) {
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + ar6[1];
      iVar2 = *ar6 - *(int *)(ar4 + 0x1c);
      if (iVar2 < *(int *)(ar4 + 0x24)) {
        a6 = (int *)(*(int *)(ar4 + 0x24) - iVar2);
        if (ar6[1] < (int)a6) {
          a6 = (int *)(uint)ar6[1];
        }
        (*(code *)(&memmove))
                  (*(int *)(ar4 + 0x20) + iVar2 + *(int *)(ar4 + 0x1c),*ar6,a6,ar7);
      }
      iVar2 = (*ar6 - *(int *)(ar4 + 0x1c)) + ar6[1];
      if (*(int *)(ar4 + 0x20) < iVar2) {
        a6 = (int *)(iVar2 - *(int *)(ar4 + 0x20));
        if (ar6[1] < (int)a6) {
          a6 = (int *)(uint)ar6[1];
        }
        (*(code *)(&memmove))
                  (*(int *)(ar4 + 0x1c),*(int *)(ar4 + 0x1c) + (iVar2 - (int)a6),a6,ar7);
      }
    }
    else if (ar5 == 0) {
      *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar6[1];
    }
    else {
      ar6[1] = 0;
      *ar6 = 0;
      if (*(int *)(ar4 + 0x28) != 0) {
        (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
      }
    }
    uVar1 = FUN_8c26b50c(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b720\n.set _FUN_8c26b720, _FUN_8c26b720_def\n");
