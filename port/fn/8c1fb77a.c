#include "../decls.h"
int FUN_8c1fb77a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint a4;
  
  a4 = ar5 * ar4;
  iVar1 = FUN_8c1fb4b8(a4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = 0;
    if (a4 != 0) {
      do {
        puVar2 = (undefined4 *)(iVar1 + uVar3);
        uVar3 = uVar3 + 4;
        *puVar2 = 0;
      } while (uVar3 < a4);
    }
    uVar3 = uVar3 - 4;
    puVar4 = (undefined1 *)(iVar1 + uVar3);
    for (; uVar3 < (a4 & 3); uVar3 = uVar3 + 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fb77a\n.set _FUN_8c1fb77a, _FUN_8c1fb77a_def\n");
