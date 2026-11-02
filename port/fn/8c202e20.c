#include "../decls.h"
undefined4 sh4_dmac_202e20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = 0xffa0002c;
  *(undefined4 *)0xffa00020 = 0;
  *(undefined4 *)0xffa00024 = 0;
  *(undefined4 *)0xffa00028 = 0;
  *piVar1 = (int)0x12c0;
  *(undefined4 *)0xffa00040 = 0x8201;
  *(undefined4 *)0xa05f6884 = 0;
  *(undefined4 *)0xff000038 = 0x10;
  *(undefined4 *)0xff00003c = 0x10;
  puVar4 = 0x8c47eb9c;
  puVar3 = 0x8c47eb90;
  puVar2 = 0x8c47eb88;
  *(undefined4 *)0x8c47eb88 = 0;
  puVar2[1] = 0;
  puVar2 = 0x8c47eb94;
  uVar7 = (uint)0x100;
  *(undefined4 *)0x8c47eb94 = 0;
  puVar2[1] = 0;
  uVar6 = 0;
  *puVar3 = 0;
  *puVar4 = 7;
  *(undefined4 *)0x8c47eba0 = 1;
  iVar5 = 0x8c47e988;
  do {
    iVar8 = iVar5 + uVar6;
    uVar6 = uVar6 + 0x20;
    *(undefined4 *)(iVar8 + 0x18) = 0;
    *(undefined4 *)(iVar8 + uVar7 + 0x18) = 8;
  } while (uVar6 < uVar7);
  return 8;
}

__asm__(".globl _sh4_dmac_202e20\n.set _sh4_dmac_202e20, _sh4_dmac_202e20_def\n");
