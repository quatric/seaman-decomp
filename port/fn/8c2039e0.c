#include "../decls.h"
int FUN_8c2039e0_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_3c [44];
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  iVar4 = ar5;
  puVar2 = (ushort *)FUN_8c204c00(0,ar4,ar5,ar7);
  if (puVar2 == (ushort *)0x0) {
    iVar4 = ar5;
    puVar2 = (ushort *)FUN_8c204c00(1,ar4,ar5,ar7);
  }
  if (puVar2 == (ushort *)0x0) {
    iVar4 = FUN_8c2041e2(ar4,ar5,iVar4,ar7);
    if (iVar4 == -1) {
      iVar3 = 3;
    }
    else {
      iVar3 = FUN_8c2043d4(0,iVar4,ar4,ar5);
      if (iVar3 == 0) {
        iVar3 = FUN_8c2043d4(1,DAT_8c2753f4 + iVar4,ar4,auStack_3c);
      }
    }
  }
  else {
    *(undefined4 *)(ar5 + 0x1c) = *(undefined4 *)(puVar2 + 6);
    *(int *)(puVar2 + 10) = ar5;
    *puVar2 = *puVar2 | 4;
    iVar3 = 0;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c2039e0\n.set _FUN_8c2039e0, _FUN_8c2039e0_def\n");
