#include "../decls.h"
undefined4 FUN_8c012eac_def(int ar4,byte *ar5,int ar6,int ar7)

{
  bool bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  int iStack_14;
  
  pbVar5 = (byte *)(ar7 + -1 + ar6);
  pbVar3 = ar5 + ar7 + -1;
  uVar6 = 0;
  bVar1 = true;
  pbVar4 = pbVar3 + 1;
  for (; ar5 <= pbVar3; pbVar3 = pbVar3 + -1) {
    iStack_14 = ((uint)*pbVar3 - (uint)*pbVar5) - uVar6;
    bVar7 = iStack_14 < 0;
    if (bVar7) {
      iStack_14 = 0x100 + iStack_14;
    }
    uVar6 = (uint)bVar7;
    if (iStack_14 != 0) {
      bVar1 = false;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = (byte)iStack_14;
    pbVar5 = pbVar5 + -1;
  }
  if ((uVar6 == 1) && (ar4 == 0)) {
    uVar2 = 0xffffffff;
  }
  else if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012eac\n.set _FUN_8c012eac, _FUN_8c012eac_def\n");
