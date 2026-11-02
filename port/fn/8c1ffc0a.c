#include "../decls.h"
int FUN_8c1ffc0a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [32];
  
  if (*(char *)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    iVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,iVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,iVar2,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,iVar2,ar6,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = FUN_8c2005d6(ar4,auStack_38,ar6,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff05;
        }
        for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
          *(undefined1 *)(iVar2 + ar5) = auStack_28[iVar2];
        }
        *(undefined1 *)(ar5 + 0xc) = 0;
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffc0a\n.set _FUN_8c1ffc0a, _FUN_8c1ffc0a_def\n");
