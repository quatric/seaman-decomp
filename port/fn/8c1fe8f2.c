#include "../decls.h"
int FUN_8c1fe8f2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar1 = (undefined2)ar5;
  uVar3 = (undefined1)ar6;
  if (ar4 == 0) {
    return (int)(int)0xffffff00;
  }
  if (*(char *)(0x8c4783e2 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0') {
    iVar2 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
      if ((iVar2 != 0) &&
         (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        *(undefined2 *)(ar4 + 2) = uVar1;
        *(undefined1 *)(ar4 + 1) = uVar3;
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe8f2\n.set _FUN_8c1fe8f2, _FUN_8c1fe8f2_def\n");
