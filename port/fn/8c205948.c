#include "../decls.h"
undefined4 FUN_8c205948_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char in_T;
  
  if (in_T == '\0') {
    uVar2 = ~(~ain0 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ain0 & 0x1f;
  }
  iVar1 = DAT_8c275408;
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  do {
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (ar4 <= *(int *)(iVar1 + 0x10)) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar4 = *(int *)(iVar1 + 0x10);
      for (iVar6 = *(int *)(iVar1 + 0xc); iVar6 <= (iVar5 + iVar4) - ar4; iVar6 = iVar6 + 0x20) {
        iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar6,ar4,ar7);
        if (iVar3 == 0) {
          return iVar6;
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}

__asm__(".globl _FUN_8c205948\n.set _FUN_8c205948, _FUN_8c205948_def\n");
