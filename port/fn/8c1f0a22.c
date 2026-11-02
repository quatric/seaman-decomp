#include "../decls.h"
undefined4 FUN_8c1f0a22_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar2 = 0xff;
  iVar5 = 0x3c;
  pbVar6 = ar5 + 2;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != 0xff) goto LAB_8c1f0a54;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  sVar3 = FUN_8c1f109c(0x3e,ar5);
  if (*(short *)(ar5 + 0x3e) == sVar3) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ar5 = (char)uVar2;
      ar5 = ar5 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f0a22\n.set _FUN_8c1f0a22, _FUN_8c1f0a22_def\n");
