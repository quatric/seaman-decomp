#include "../decls.h"
int FUN_8c0859c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    if (*(int *)(0x10c0 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(0x10c0 + ar4 + iVar3 * 4);
      iVar1 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x10c0;
        uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
        *(undefined4 *)(0x10a8 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(0x10d4 + ar4) != 0) {
    ar5_00 = *(int *)(0x10d4 + ar4);
    iVar3 = FUN_8c0feef8(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x10d4;
      uVar2 = FUN_8c0feeb0(*(undefined4 *)(0x7d0 + ar5),ar5_00,ar6,ar7);
      *(undefined4 *)(0x10bc + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(0x10c0 + ar4);
  if ((((iVar3 == 0) && (iVar3 = *(int *)(0x10c4 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(0x10c8 + ar4), iVar3 == 0)) &&
     (((iVar3 = *(int *)(0x10cc + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(0x10d0 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(0x10d4 + ar4), iVar3 == 0)))) {
    uVar2 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7);
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7);
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0859c8\n.set _FUN_8c0859c8, _FUN_8c0859c8_def\n");
