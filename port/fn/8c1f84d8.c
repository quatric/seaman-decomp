#include "../decls.h"
int FUN_8c1f84d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iStack_20;
  int aiStack_1c [2];
  
  bVar1 = false;
  do {
    iVar2 = aica_reg_1f8544(aiStack_1c,ar5,ar6,ar7);
    if (iVar2 == 0) {
      bVar1 = true;
    }
  } while (!bVar1);
  if (bVar1) {
    bVar1 = false;
    do {
      iVar2 = 0;
      do {
        iVar3 = aica_reg_1f8544(&iStack_20,ar5,ar6,ar7);
        if ((iVar3 != 0) || (aiStack_1c[0] != iStack_20)) break;
        iVar2 = iVar2 + 1;
        aiStack_1c[0] = iStack_20;
      } while (iVar2 < 3);
      if (iVar2 == 3) {
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    iStack_20 = -1;
  }
  return iStack_20;
}

__asm__(".globl _FUN_8c1f84d8\n.set _FUN_8c1f84d8, _FUN_8c1f84d8_def\n");
