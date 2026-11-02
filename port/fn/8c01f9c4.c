#include "../decls.h"
undefined4 FUN_8c01f9c4_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r13;
  
  iVar1 = **(int **)(ar4 + 4);
  if (iVar1 == 0xc) {
    iVar1 = FUN_8c25b3a2(*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar5,ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xd) {
    iVar1 = (*(code *)(&FUN_8c256164))
                      (*(int *)(ar4 + 4) + 0x10,*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xe) {
    iVar1 = (*(code *)(&FUN_8c239212))
                      (*(int *)(ar4 + 4) + 0x10,*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  if (unaff_r13 == 1) {
    ar7 = *(int *)(ar4 + 4) + 0x10;
    FUN_8c020600(ar4,**(undefined4 **)(ar4 + 4),ar4 + 0x20,ar7);
    ar6 = *(undefined4 *)(ar4 + 4);
    iVar1 = ar4 + 0x2c;
    FUN_8c0205e8(ar4,iVar1,ar6,ar7);
  }
  else {
    iVar1 = *(int *)(ar4 + 4);
    FUN_8c02049c(ar4,iVar1,ar6,ar7);
  }
  uVar2 = FUN_8c02009c(ar4,iVar1,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c01f9c4\n.set _FUN_8c01f9c4, _FUN_8c01f9c4_def\n");
