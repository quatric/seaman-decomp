#include "../decls.h"
uint FUN_8c20213e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint a4;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  undefined1 *puStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  
  iVar5 = *(int *)(ar4 + 8);
  iVar4 = *(int *)(ar5 + 0x48);
  a4 = (uint)*(byte *)(iVar5 + 0xb);
  if (a4 == 0) {
    a4 = 0;
  }
  else {
    iVar3 = ar5;
    FUN_8c010794(8,auStack_28,ar5 + 0x3c);
    FUN_8c010794(8,auStack_38,auStack_28);
    puStack_3c = (undefined1 *)&uStack_30;
    FUN_8c2027c0(a4,iVar3,ar6,ar7);
    *(undefined4 *)(ar5 + 0x3c) = uStack_30;
    *(undefined4 *)(ar5 + 0x40) = uStack_2c;
    if (*(int *)(ar5 + 8) == 0) {
      FUN_8c010794(8,auStack_38,auStack_28);
      iVar2 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      FUN_8c010794(8,auStack_40,&uStack_30);
      iVar3 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      iVar1 = iVar2 * 2 + iVar4;
      if (iVar3 < iVar2) {
        memmove(iVar1,iVar5 + 0xc,(*(int *)(ar5 + 0x14) - iVar2) * 2,ar7);
        iVar5 = (*(int *)(ar5 + 0x14) - iVar2) * 2 + 0xc + iVar5;
        iVar1 = iVar4;
      }
      else {
        iVar3 = iVar3 - iVar2;
        iVar5 = iVar5 + 0xc;
      }
      memmove(iVar1,iVar5,iVar3 << 1,ar7);
    }
    else if (*(int *)(ar5 + 8) == 1) {
      FUN_8c010794(8,auStack_38,auStack_28);
      iVar1 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      FUN_8c010794(8,auStack_40,&uStack_30);
      iVar2 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      iVar3 = iVar1 + iVar4;
      if (iVar2 < iVar1) {
        memmove(iVar3,iVar5 + 0xc,*(int *)(ar5 + 0x14) - iVar1,ar7);
        iVar5 = (*(int *)(ar5 + 0x14) - iVar1) + 0xc + iVar5;
        iVar3 = iVar4;
      }
      else {
        iVar5 = iVar5 + 0xc;
        iVar2 = iVar2 - iVar1;
      }
      memmove(iVar3,iVar5,iVar2,ar7);
    }
  }
  return a4;
}

__asm__(".globl _FUN_8c20213e\n.set _FUN_8c20213e, _FUN_8c20213e_def\n");
