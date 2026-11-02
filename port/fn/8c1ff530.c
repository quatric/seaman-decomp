#include "../decls.h"
undefined4 FUN_8c1ff530_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar3 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a90 + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar3] != '\0') {
    uVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,uVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,uVar2,ar6,ar7);
      if ((iVar1 != 0) && ((&DAT_8c4783e8)[iVar3] != '\0')) {
        iVar3 = thunk_FUN_8c1ffcc2(ar4,uVar2,ar6,ar7);
        if (iVar3 < 0) {
          return 0xffffff03;
        }
        iVar3 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return 0xffffff0b;
        }
        iVar3 = FUN_8c1ff478(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = FUN_8c200346(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return iVar3;
        }
        uVar2 = FUN_8c2007f0(ar4,ar5,ar6,ar7);
        return uVar2;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff530\n.set _FUN_8c1ff530, _FUN_8c1ff530_def\n");
