#include "../decls.h"
int FUN_8c201e14_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_30 [8];
  undefined1 auStackY_28 [8];
  
  iVar5 = ar5;
  iVar4 = ar6;
  FUN_8c20202e(ar4,ar5,ar6,ar7,ar6);
  iVar3 = ar4;
  iVar2 = get_field_4_201c8e(ar4,iVar5,ar6,ar7);
  FUN_8c010794(8,auStackY_28,ar4 + 8);
  FUN_8c010794(8,auStackY_30,iVar2 + 0x3c);
  iVar3 = FUN_8c2029b4(iVar3,iVar5,ar6,ar7);
  if (iVar3 == 1) {
    FUN_8c010794(8,auStackY_28,ar4 + 8);
    iVar3 = FUN_8c202924(*(undefined4 *)(iVar2 + 0x14),iVar5,ar6,ar7);
    FUN_8c010794(8,auStackY_30,iVar2 + 0x3c);
    iVar5 = FUN_8c202924(*(undefined4 *)(iVar2 + 0x14),iVar5,ar6,ar7);
    iVar6 = *(int *)(iVar2 + 0x14) - iVar3;
    if (*(int *)(iVar2 + 8) == 0) {
      iVar4 = iVar4 >> 1;
    }
    iVar1 = iVar6;
    if (iVar3 < iVar5) {
      iVar1 = -iVar3;
    }
    if (iVar5 + iVar1 < iVar4) {
      iVar4 = iVar5 + iVar1;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4 - iVar6;
    }
    else {
      iVar6 = 0;
    }
    iVar4 = iVar4 - iVar6;
    if (*(int *)(iVar2 + 8) == 0) {
      memmove(ar5,iVar3 * 2 + *(int *)(iVar2 + 0x48),iVar4 * 2,ar7);
      if (iVar6 != 0) {
        memmove(iVar4 * 2 + ar5,*(undefined4 *)(iVar2 + 0x48),iVar6 << 1,ar7);
      }
    }
    else {
      memmove(ar5,*(int *)(iVar2 + 0x48) + iVar3,iVar4,ar7);
      if (iVar6 != 0) {
        memmove(ar5 + iVar4,*(undefined4 *)(iVar2 + 0x48),iVar6,ar7);
      }
    }
    iVar4 = iVar4 + iVar6;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c201e14\n.set _FUN_8c201e14, _FUN_8c201e14_def\n");
