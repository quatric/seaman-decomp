#include "../decls.h"
int FUN_8c1ffdfa_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puStack_14;
  
  iVar5 = (int)0x148;
  iVar6 = ar4 * iVar5 + 0x8c4783e0;
  sVar1 = (int)0xffffff01;
  if (*(char *)(iVar6 + 2) != '\0') {
    puVar4 = ar5;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,puVar4,ar6,ar7);
      sVar1 = (int)0xffffff01;
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,puVar4,ar6,ar7);
      sVar1 = (int)0xffffff01;
      if (((iVar2 != 0) && (*(char *)(ar4 * iVar5 + 0x8c4783e0 + 8) != '\0')) &&
         (iVar5 = thunk_FUN_8c1ffcc2(ar4,puVar4,ar6,ar7),
         sVar1 = (int)0xffffff03, -1 < iVar5)) {
        iVar5 = 0;
        puVar4 = (undefined1 *)(*(int *)(iVar6 + 0x20) + 0x10);
        for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        puVar4 = (undefined1 *)(*(int *)(iVar6 + 0x20) + 0x10);
        puStack_14 = ar5;
        for (; iVar5 < 0x20; iVar5 = iVar5 + 1) {
          *puVar4 = *puStack_14;
          puVar4 = puVar4 + 1;
          puStack_14 = puStack_14 + 1;
        }
        uVar3 = FUN_8c20065a(ar4,puVar4,iVar5,iVar2);
        return uVar3;
      }
    }
  }
  return (int)sVar1;
}

__asm__(".globl _FUN_8c1ffdfa\n.set _FUN_8c1ffdfa, _FUN_8c1ffdfa_def\n");
