#include "../decls.h"
int FUN_8c203914_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c2041e2(ar4,ar5,ar6,ar7);
  if (iVar1 == -1) {
    iVar2 = 3;
  }
  else {
    iVar2 = FUN_8c2043d4(0,iVar1,ar4,ar5);
    if (iVar2 == 0) {
      iVar1 = DAT_8c2753f4 + iVar1;
      iVar2 = FUN_8c2043d4(1,iVar1,ar4,ar6);
      if (iVar2 != 0) {
        FUN_8c203bda(*(undefined4 *)(ar5 + 0x1c),iVar1,ar4,ar6);
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c203914\n.set _FUN_8c203914, _FUN_8c203914_def\n");
