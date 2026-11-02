#include "../decls.h"
undefined4 g2dma_202e82_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar6 = 0xa05f6808;
  *(undefined4 *)0xa05f6808 = 0;
  puVar1 = 0xa05f8008;
  *(undefined4 *)0xa05f8008 = 1;
  *puVar1 = 0;
  do {
  } while (*piVar6 != 0);
  *(undefined4 *)0xffa0002c = *(undefined4 *)0xffa0002c & 0xfffffffe;
  *puVar1 = 1;
  *puVar1 = 0;
  puVar2 = 0x8c47eb90;
  puVar1 = 0x8c47eb88;
  *(undefined4 *)0x8c47eb88 = 0;
  puVar1[1] = 0;
  puVar4 = 0x8c47eba0;
  puVar3 = 0x8c47eb9c;
  puVar1 = 0x8c47eb94;
  *(undefined4 *)0x8c47eb94 = 0;
  puVar1[1] = 0;
  *puVar2 = 0;
  iVar5 = 0x8c47e988;
  uVar8 = (uint)0x100;
  *puVar3 = 7;
  *puVar4 = 7;
  uVar7 = 0;
  do {
    iVar9 = iVar5 + uVar7;
    uVar7 = uVar7 + 0x20;
    *(undefined4 *)(iVar9 + 0x18) = 0;
    *(undefined4 *)(iVar9 + uVar8 + 0x18) = 8;
  } while (uVar7 < uVar8);
  return 0;
}

__asm__(".globl _g2dma_202e82\n.set _g2dma_202e82, _g2dma_202e82_def\n");
