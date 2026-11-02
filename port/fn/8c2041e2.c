#include "../decls.h"
int FUN_8c2041e2_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iStack_24 = 0;
  iVar4 = 0;
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  a4 = DAT_8c275408;
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  do {
    if (a4 == 0) {
      if ((iStack_24 != 2) || (iVar4 == 0)) {
        iVar4 = -1;
      }
      return iVar4;
    }
    if ((int)ar4 <= *(int *)(a4 + 0x10)) {
      uVar1 = *(uint *)(ar5 + 0x18);
      iVar5 = (*(int *)(a4 + 0xc) + *(int *)(a4 + 0x10)) - ar4;
      if ((((uVar1 & 1) == 0) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
        iStack_24 = 1;
        for (iVar2 = *(int *)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
          iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar2,ar4,ar7);
          if (iVar3 == 0) {
            return iVar2;
          }
        }
      }
      else {
        iVar2 = FUN_8c204140(a4,ar4,ar5,ar7);
        if (-1 < iVar2) {
          for (; iVar2 <= iVar5; iVar2 = iVar2 + 0x800) {
            iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar2,ar4,ar7);
            if (iVar3 == 0) {
              return iVar2;
            }
          }
        }
        iStack_24 = 2;
        if (iVar4 == 0) {
          for (iVar2 = *(int *)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
            iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar2,ar4,ar7);
            if (iVar3 == 0) {
              iVar4 = iVar2;
              iVar2 = iVar5;
            }
          }
        }
      }
    }
    a4 = *(int *)(a4 + 8);
  } while( true );
}

__asm__(".globl _FUN_8c2041e2\n.set _FUN_8c2041e2, _FUN_8c2041e2_def\n");
