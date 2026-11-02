#include "../decls.h"
int FUN_8c0b93c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iStack_2c;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar5 = 0;
  iVar2 = 4;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    iVar3 = (uint)*(byte *)(ar4 + iVar6 + 4) + iVar3;
  }
  if (iVar3 < 5) {
    iVar2 = 3;
  }
  else {
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
      if (bVar5 < *(byte *)(ar4 + iVar3 + 4)) {
        bVar5 = *(byte *)(ar4 + iVar3 + 4);
        iVar4 = iVar3;
      }
    }
    iVar6 = (*(code *)(&FUN_8c0b9afc))
                      (ar4,ar5,ar6,ar7,*(undefined4 *)(ar4 + 0x16),*(undefined4 *)(ar4 + 0x1a));
    iVar1 = (*(code *)(&FUN_8c0b9afc))
                      (ar4,ar5,ar6,ar7,*(undefined4 *)(ar4 + 0x20),*(undefined4 *)(ar4 + 0x24));
    iVar3 = iVar6;
    if (((iVar6 != iVar1) &&
        (((iVar3 = iVar4, iVar6 != iVar4 || (iVar1 != iVar4)) &&
         (iVar2 = 3, *(int *)(0xbc + ar4) != iVar6)))) &&
       (*(int *)(0xbc + ar4) != iVar1)) {
      iVar2 = 0;
    }
    iStack_2c = FUN_8c013adc(iVar3 - *(int *)(0xbc + ar4),ar5,ar6,ar7);
    if (4 < iStack_2c) {
      iStack_2c = 8 - iStack_2c;
    }
    if (iVar2 == 4) {
      if (iStack_2c == 0) {
        iVar2 = 1;
      }
      else if (iStack_2c == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0b93c0\n.set _FUN_8c0b93c0, _FUN_8c0b93c0_def\n");
