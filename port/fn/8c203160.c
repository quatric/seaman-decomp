#include "../decls.h"
undefined4 sh4_dmac_203160_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = 0x8c47eb94;
  iVar2 = 0x8c47e988;
  uVar1 = 0x241;
  iVar6 = *(undefined4 *)0x8c47eba0 * 0x100 + 0x8c47e988 + *(undefined4 *)0x8c47eb9c * 0x20;
  *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) & 0xfffffffc;
  puVar5 = 0xffa00020;
  uVar7 = 0;
  do {
    iVar6 = *(int *)(uVar7 * 4 + iVar4);
    if ((*(uint *)(uVar7 * 0x100 + iVar2 + iVar6 * 0x20 + 0x18) & 3) == 1) {
      iVar11 = uVar7 * 0x100;
      iVar10 = iVar6 * 0x20;
      iVar9 = iVar11 + iVar2 + iVar10;
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffc | 2;
      *puVar5 = *(undefined4 *)(iVar9 + 4);
      *(undefined4 *)0xffa00024 = (*(int *)(iVar9 + 0xc) + 0xf0000000) * 2;
      *(undefined4 *)0xffa00028 = *(uint *)(iVar9 + 0x14) >> 5;
      if ((*(uint *)(iVar9 + 0x18) & 4) == 0) {
        uVar1 = 0x2c1;
      }
      if ((*(uint *)(iVar11 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | 0x1000;
      }
      *(undefined4 *)0xffa0002c = (int)(short)uVar1;
      iVar10 = iVar11 + iVar2 + iVar10;
      *(undefined4 *)0xa05f6800 = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)0xa05f6804 = *(undefined4 *)(iVar10 + 0x14);
      *(undefined4 *)0xa05f6808 = 1;
      puVar3 = 0x8c47eba0;
      puVar8 = (uint *)(uVar7 * 4 + iVar4);
      *(undefined4 *)0x8c47eb9c = iVar6;
      *puVar3 = uVar7;
      *puVar8 = *puVar8 + 1 & 7;
      return 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return 0;
}

__asm__(".globl _sh4_dmac_203160\n.set _sh4_dmac_203160, _sh4_dmac_203160_def\n");
