#include "../decls.h"
undefined4 FUN_8c2004f6_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *unaff_r13;
  int unaff_r14;
  
  puVar6 = (undefined1 *)(unaff_r14 + 0x10);
  *(uint *)(unaff_r14 + 4) = (uint)*unaff_r13;
  puVar8 = (undefined1 *)(ar5 + 4);
  do {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (puVar6 < (undefined1 *)(unaff_r14 + 0x1c));
  pbVar7 = (byte *)(unaff_r14 + 0x20);
  *(undefined1 *)(unaff_r14 + 0x1c) = 0;
  pbVar9 = unaff_r13 + 0x10;
  do {
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    *pbVar7 = bVar2;
    piVar3 = 0x8c4783dc;
    pbVar7 = pbVar7 + 1;
  } while (pbVar7 < (byte *)(unaff_r14 + 0x28));
  uVar4 = (**(code **)(*(undefined4 *)0x8c4783dc + 0xc))(unaff_r13,2,ar6,ar7);
  *(uint *)(unaff_r14 + 0xc) = uVar4 & 0xffff;
  uVar4 = (**(code **)(*piVar3 + 0xc))(unaff_r13,0x18,ar6,ar7);
  *(uint *)(unaff_r14 + 0x28) = uVar4 & 0xffff;
  *(byte *)(unaff_r14 + 10) = unaff_r13[1];
  uVar5 = (**(code **)(*piVar3 + 0xc))(unaff_r13,0x1a,ar6,ar7);
  *(short *)(unaff_r14 + 8) = (short)uVar5;
  return uVar5;
}

__asm__(".globl _FUN_8c2004f6\n.set _FUN_8c2004f6, _FUN_8c2004f6_def\n");
