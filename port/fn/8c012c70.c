#include "../decls.h"
undefined4 FUN_8c012c70_def(byte *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 d;
  uint uVar7;
  byte *pbVar8;
  
  d = 8;
  bVar2 = false;
  iVar3 = libgcc_divide_helper_010468(ar5,8);
  pbVar8 = ar4 + iVar3;
  if ((int)ar5 < 0) {
    uVar4 = ~(~ar5 + 1 & 7) + 1;
  }
  else {
    uVar4 = ar5 & 7;
  }
  uVar4 = -uVar4;
  if ((int)uVar4 < 0) {
    uVar4 = 0x80 >> (~uVar4 & 0x1f) + 1;
  }
  else {
    uVar4 = 0x80 << (uVar4 & 0x1f);
  }
  uVar4 = uVar4 & 0xff;
  uVar7 = ar5 - 1;
  iVar3 = libgcc_divide_helper_010468(uVar7,d);
  pbVar6 = ar4 + iVar3;
  if ((int)uVar7 < 0) {
    uVar7 = ~(~uVar7 + 1 & 7) + 1;
  }
  else {
    uVar7 = uVar7 & 7;
  }
  uVar7 = -uVar7;
  if ((int)uVar7 < 0) {
    uVar7 = 0x80 >> (~uVar7 & 0x1f) + 1;
  }
  else {
    uVar7 = 0x80 << (uVar7 & 0x1f);
  }
  if ((*pbVar8 & uVar4) != 0) {
    uVar5 = (uint)*pbVar8;
    if (((uVar5 & (int)uVar4 >> 1) == 0) && (((int)uVar4 >> 2 & uVar5) == 0)) {
      if (((uint)*pbVar6 & uVar7 & 0xff) != 0) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if (bVar2) {
    while ((bVar1 = (byte)uVar7, ((uint)*pbVar6 & uVar7 & 0xff) != 0 && (ar4 <= pbVar6))) {
      uVar7 = uVar7 << 1;
      *pbVar6 = *pbVar6 & ~bVar1;
      if ((uVar7 & 0xff) == 0) {
        uVar7 = 1;
        pbVar6 = pbVar6 + -1;
      }
    }
    if (pbVar6 < ar4) {
      return 1;
    }
    *pbVar6 = *pbVar6 | bVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c012c70\n.set _FUN_8c012c70, _FUN_8c012c70_def\n");
