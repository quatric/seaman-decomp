#include "../decls.h"
undefined4 FUN_8c2004ea_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)(ar5 + 0x10);
  *(uint *)(ar5 + 4) = (uint)*ar4;
  pbVar6 = ar4 + 4;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(ar5 + 0x1c));
  pbVar5 = (byte *)(ar5 + 0x20);
  *(undefined1 *)(ar5 + 0x1c) = 0;
  pbVar6 = ar4 + 0x10;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    piVar2 = 0x8c4783dc;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(ar5 + 0x28));
  uVar3 = (**(code **)(*(undefined4 *)0x8c4783dc + 0xc))(ar4,2,1);
  *(uint *)(ar5 + 0xc) = uVar3 & 0xffff;
  uVar3 = (**(code **)(*piVar2 + 0xc))(ar4,0x18);
  *(uint *)(ar5 + 0x28) = uVar3 & 0xffff;
  *(byte *)(ar5 + 10) = ar4[1];
  uVar4 = (**(code **)(*piVar2 + 0xc))(ar4,0x1a);
  *(short *)(ar5 + 8) = (short)uVar4;
  return uVar4;
}

__asm__(".globl _FUN_8c2004ea\n.set _FUN_8c2004ea, _FUN_8c2004ea_def\n");
