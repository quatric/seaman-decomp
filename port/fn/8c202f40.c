#include "../decls.h"
int sh4_dmac_202f40_def(int ar4,uint ar5,uint ar6,uint ar7,undefined4 *s0)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  
  piVar3 = 0x8c47eb90;
  iVar2 = 0x8c47e988;
  if (ar6 == 0) {
    iVar4 = (int)0x103;
  }
  else {
    uVar9 = (ar7 & 8) >> 3;
    iVar4 = (int)0x100;
    iVar5 = uVar9 * 4;
    iVar7 = uVar9 * 0x100;
    iVar6 = *(int *)(0x8c47eb88 + iVar5);
    iVar10 = iVar6 * 0x20;
    if ((*(uint *)(iVar7 + 0x8c47e988 + iVar10 + 0x18) & 3) == 0) {
      if ((ar5 & 0x1f) != 0) {
        ar5 = ar5 + 0x1f & 0xffffffe0;
      }
      if ((ar6 & 0x1f) != 0) {
        ar6 = ar6 + 0x1f & 0xffffffe0;
      }
      piVar11 = (int *)(iVar7 + 0x8c47e988 + iVar10);
      *piVar11 = *(undefined4 *)0x8c47eb90;
      iVar8 = 0x8c47eb88;
      piVar11[1] = ar5;
      piVar11[3] = ar4;
      piVar11[5] = ar6;
      piVar11[6] = ar7 | 1;
      *s0 = piVar11;
      iVar4 = 0;
      *(uint *)(iVar5 + iVar8) = *(uint *)(iVar5 + iVar8) + 1 & 7;
      *piVar3 = *piVar3 + 1;
    }
    if (((iVar4 != 0x100) &&
        ((*(uint *)(*(undefined4 *)0x8c47eba0 * 0x100 + iVar2 + *(undefined4 *)0x8c47eb9c * 0x20 + 0x18) & 3) == 0)) &&
       ((*(uint *)(iVar7 + iVar2 + iVar10 + 0x18) & 3) == 1)) {
      iVar8 = iVar7 + iVar2 + iVar10;
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) & 0xfffffffc | 2;
      *(undefined4 *)0xffa00020 = *(undefined4 *)(iVar8 + 4);
      *(undefined4 *)0xffa00024 = (*(int *)(iVar8 + 0xc) + 0xf0000000) * 2;
      *(undefined4 *)0xffa00028 = ar6 >> 5;
      uVar1 = 0x241;
      if ((*(uint *)(iVar8 + 0x18) & 4) == 0) {
        uVar1 = 0x2c1;
      }
      if ((*(uint *)(iVar7 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | 0x1000;
      }
      *(undefined4 *)0xffa0002c = (int)(short)uVar1;
      iVar10 = iVar7 + iVar2 + iVar10;
      *(undefined4 *)0xa05f6800 = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)0xa05f6804 = *(undefined4 *)(iVar10 + 0x14);
      *(undefined4 *)0xa05f6808 = 1;
      iVar2 = 0x8c47eb94;
      *(undefined4 *)0x8c47eb9c = iVar6;
      *(undefined4 *)0x8c47eba0 = uVar9;
      *(uint *)(iVar5 + iVar2) = *(uint *)(iVar5 + iVar2) + 1 & 7;
    }
  }
  return iVar4;
}

__asm__(".globl _sh4_dmac_202f40\n.set _sh4_dmac_202f40, _sh4_dmac_202f40_def\n");
