#include "../decls.h"
int FUN_8c0fd8d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_94 [8];
  int iStack_8c;
  
  if ((*(int *)(0xb0 + ar4) == 1) || (*(int *)(0xc0 + ar4) == 0)) {
    if (*(int *)(ar4 + 4) == 0) {
      return 0;
    }
    *(undefined4 *)(ar4 + 4) = 3;
  }
  iVar1 = *(int *)(ar4 + 4);
  if (iVar1 == 0) {
    iVar2 = FUN_8c01d754(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    iVar1 = 0xc0;
    if (iVar2 == 0) {
      *(undefined4 *)(0xc0 + ar4) = 0;
    }
    else {
      iVar1 = 1;
      *(undefined4 *)(ar4 + 4) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(0xc0 + ar4) = 2;
    FUN_8c01bcf4(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
    FUN_8c01bd88(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
    FUN_8c01c964(*(undefined4 *)(ar4 + 0xc),(&DATA_8c140bd0),ar6,ar7);
    *(undefined4 *)(0xb8 + ar4) = 0x12c;
    iVar1 = 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  else if (iVar1 == 2) {
    FUN_8c01d684(*(undefined4 *)(ar4 + 8),auStack_94,ar6,ar7);
    if (iStack_8c != 0) {
      if (iStack_8c == 2) {
        *(undefined4 *)(0xc0 + ar4) = 3;
        *(undefined4 *)(ar4 + 4) = 1;
        return 1;
      }
      if (iStack_8c != 3) {
        *(undefined4 *)(0xc0 + ar4) = 4;
        if (0 < *(int *)(0xb8 + ar4)) {
          return *(int *)(0xb8 + ar4);
        }
        *(undefined4 *)(0xc0 + ar4) = 5;
        *(undefined4 *)(ar4 + 4) = 1;
        return 1;
      }
      *(undefined4 *)(0xc0 + ar4) = 6;
      piVar3 = *(int **)(*(int *)(ar4 + 0x10) + 0x3c);
      *piVar3 = *piVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 100) =
           **(undefined4 **)(*(int *)(ar4 + 0x10) + 0x3c);
    }
    iVar1 = 3;
    *(undefined4 *)(ar4 + 4) = 3;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(0xc0 + ar4) = 0;
    FUN_8c01d8a0(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    FUN_8c0fda5c(ar4,ar5,ar6,ar7);
    iVar1 = 0;
    *(undefined4 *)(ar4 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fd8d0\n.set _FUN_8c0fd8d0, _FUN_8c0fd8d0_def\n");
