#include "../decls.h"
uint FUN_8c012e04_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = libgcc_divide_helper_010468(ar6,in_r0);
  pbVar6 = (byte *)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = 0x80 << (uVar2 & 0x1f);
  }
  if (((uint)*pbVar6 & uVar5 & 0xff) == 0) {
    uVar2 = 0;
    for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
      uVar2 = uVar2 | uVar3;
    }
    uVar2 = uVar2 & 0xff;
    if ((*pbVar6 & uVar2) == 0) {
      pbVar4 = pbVar6;
      do {
        pbVar4 = pbVar4 + 1;
        if ((byte *)(ar4 + ar5) <= pbVar4) {
          return uVar2;
        }
      } while (*pbVar4 == 0);
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
    else {
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012e04\n.set _FUN_8c012e04, _FUN_8c012e04_def\n");
