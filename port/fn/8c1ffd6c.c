#include "../decls.h"
int FUN_8c1ffd6c_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puStack_10;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(iVar4 + 2) != '\0') {
    puVar5 = ar5;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,puVar5,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,puVar5,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        iVar3 = thunk_FUN_8c1ffcc2(ar4,puVar5,ar6,ar7);
        if (iVar3 < 0) {
          return (int)(int)0xffffff03;
        }
        puVar5 = (undefined1 *)(*(int *)(iVar4 + 0x20) + 0x10);
        puStack_10 = ar5;
        for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puStack_10 = uVar1;
          puStack_10 = puStack_10 + 1;
        }
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffd6c\n.set _FUN_8c1ffd6c, _FUN_8c1ffd6c_def\n");
