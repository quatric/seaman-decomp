#include "../decls.h"
undefined4 FUN_8c1fe350_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    iVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,iVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,iVar2,ar6,ar7);
      if ((iVar1 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,iVar2,ar6,ar7);
        if (iVar2 < 0) {
          return 0xffffff03;
        }
        iVar2 = 0;
        if (ar5 == 1) {
          iVar2 = 0;
          while( true ) {
            if (*(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x38) <= iVar2) {
              return iVar2;
            }
            uVar3 = FUN_8c2009d0(ar4,iVar2,ar6,ar7);
            if ((uVar3 & 0xffff) != 0xfffc) break;
            iVar2 = iVar2 + 1;
          }
          return iVar2;
        }
        if (DAT_8c26d208 != 0) {
          for (iVar1 = 0; iVar1 < *(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x30);
              iVar1 = iVar1 + 1) {
            uVar3 = FUN_8c2009d0(ar4,iVar1,ar6,ar7);
            if (((uVar3 & 0xffff) == 0xfffc) &&
               (iVar4 = FUN_8c20093a(ar4,iVar1,ar6,ar7), -1 < iVar4)) {
              iVar2 = iVar2 + 1;
            }
          }
          return iVar2;
        }
        iVar1 = 0;
        while (iVar1 < *(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x30)) {
          uVar3 = FUN_8c2009d0(ar4,iVar1,ar6,ar7);
          iVar1 = iVar1 + 1;
          if ((uVar3 & 0xffff) == 0xfffc) {
            iVar2 = iVar2 + 1;
          }
        }
        return iVar2;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fe350\n.set _FUN_8c1fe350, _FUN_8c1fe350_def\n");
