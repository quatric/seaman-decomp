#include "../decls.h"
uint FUN_8c201b10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
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
  byte extraout_M_00;
  byte extraout_M_01;
  byte bVar11;
  byte in_Q;
  byte extraout_Q;
  byte extraout_Q_00;
  byte extraout_Q_01;
  byte bVar12;
  byte in_IMASK;
  byte bVar13;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_S_01;
  byte bVar14;
  byte in_T;
  bool bVar15;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar4 = uVar1 | (uint)in_IMASK << 4;
  uVar5 = uVar4 | (uint)in_Q << 8;
  uVar6 = uVar5 | (uint)in_M << 9;
  bVar9 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar7 = bVar9 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar14 = (byte)((uVar1 & 2) >> 1);
  bVar13 = (byte)((uVar4 & 0xf0) >> 4);
  bVar12 = (byte)(uVar5 >> 8) & 1;
  bVar11 = (byte)((uVar6 & 0x200) >> 9);
  bVar10 = (byte)(((uVar6 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar9 = (bVar9 & 0x10) >> 4;
  bVar8 = (bVar7 & 0x20) >> 5;
  bVar7 = ((bVar7 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  uVar2 = (int)0x130 + 0x8c47e6f0;
  uVar1 = 0x8c47e6f0;
  uVar4 = 0x8c47e6f0;
  uVar5 = 0x8c47e6f0;
  uVar6 = 0x8c47e6f0;
  do {
    if (((*(char *)(uVar4 + 2) == '\x01') &&
        (iVar3 = *(int *)(uVar6 + 0x20), FUN_8c202424(uVar6,uVar1,ar6,ar7), bVar11 = extraout_M,
        bVar12 = extraout_Q, bVar14 = extraout_S, iVar3 == 1)) &&
       (iVar3 = FUN_8c202a30(*(undefined4 *)(uVar6 + 0x24),uVar1,ar6,ar7),
       bVar11 = extraout_M_00, bVar12 = extraout_Q_00, bVar14 = extraout_S_00, iVar3 == 0)) {
      FUN_8c2020b6(uVar5,uVar1,ar6,ar7);
      FUN_8c20227c(uVar5,uVar1,ar6,ar7);
      bVar11 = extraout_M_01;
      bVar12 = extraout_Q_01;
      bVar14 = extraout_S_01;
    }
    uVar4 = uVar4 + 0x4c;
    bVar15 = uVar2 <= uVar4;
    uVar5 = uVar5 + 0x4c;
    uVar6 = uVar6 + 0x4c;
  } while (!bVar15);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar15 | (uint)bVar14 << 1 | (uint)bVar13 << 4 | (uint)bVar12 << 8 |
          (uint)bVar11 << 9 | (uint)bVar10 << 0xf | (uint)bVar9 << 0x1c | (uint)bVar8 << 0x1d |
         (uint)bVar7 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c201b10\n.set _FUN_8c201b10, _FUN_8c201b10_def\n");
