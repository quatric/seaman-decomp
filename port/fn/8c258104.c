#include "../decls.h"
uint aica_reg_258104_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int a6;
  int *a7;
  byte in_MD;
  byte bVar7;
  byte in_RB;
  byte bVar8;
  byte in_BL;
  byte bVar9;
  byte in_FD;
  byte bVar10;
  byte in_M;
  byte extraout_M;
  byte bVar11;
  byte in_Q;
  byte extraout_Q;
  byte bVar12;
  byte in_IMASK;
  byte bVar13;
  byte in_S;
  byte extraout_S;
  byte bVar14;
  byte in_T;
  int iStack_30;
  int *piStack_2c;
  uint uStack_28;
  uint uStack_24;
  int aiStack_20 [4];
  int iStack_10;
  
  iStack_30 = 0;
  uStack_24 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4 | (uint)in_Q << 8;
  uVar3 = uVar2 | (uint)in_M << 9;
  bVar9 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar7 = bVar9 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar14 = (byte)((uVar1 & 2) >> 1);
  bVar13 = 0;
  bVar12 = (byte)(uVar2 >> 8) & 1;
  bVar11 = (byte)((uVar3 & 0x200) >> 9);
  bVar10 = (byte)(((uVar3 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar9 = (bVar9 & 0x10) >> 4;
  bVar8 = (bVar7 & 0x20) >> 5;
  bVar7 = ((bVar7 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  piStack_2c = aiStack_20;
  iVar6 = 0;
  a6 = 0;
  piVar5 = piStack_2c;
  a7 = piStack_2c;
  do {
    iVar4 = iVar6 * 0x20;
    iVar6 = iVar6 + 1;
    if ((*(uint *)(iVar4 + DAT_8c277c74 + 0x18) & 1) == 0) {
      *a7 = 0;
    }
    else {
      *(undefined4 *)(DAT_8c277c74 + a6 + 0x1c) = 0;
      *piVar5 = 1;
    }
    piVar5 = piVar5 + 1;
    a7 = a7 + 1;
    a6 = a6 + 0x20;
    uStack_28 = ar4;
  } while (iVar6 < 4);
  while (iStack_30 != 1) {
    g2dma_2580f8(&iStack_30,iVar6,a6,a7);
    bVar11 = extraout_M;
    bVar12 = extraout_Q;
    bVar14 = extraout_S;
  }
  _DAT_a0702c00 = _DAT_a0702c00 & 0xfffffcff | uStack_28;
  iVar6 = 0;
  for (; &iStack_10 > piStack_2c; piStack_2c = piStack_2c + 1) {
    if (*piStack_2c == 1) {
      *(undefined4 *)(DAT_8c277c74 + iVar6 + 0x1c) = 1;
    }
    iVar6 = iVar6 + 0x20;
  }
  return (uStack_24 & 0xf) << 4 |
         ((uint)(&iStack_10 <= piStack_2c) | (uint)bVar14 << 1 | (uint)bVar13 << 4) & 0xffffff0f |
         (uint)bVar12 << 8 | (uint)bVar11 << 9 | (uint)bVar10 << 0xf | (uint)bVar9 << 0x1c |
         (uint)bVar8 << 0x1d | (uint)bVar7 << 0x1e;
}

__asm__(".globl _aica_reg_258104\n.set _aica_reg_258104, _aica_reg_258104_def\n");
