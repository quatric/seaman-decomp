#include "../decls.h"
uint FUN_8c1f8cbc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte in_MD;
  byte bVar4;
  byte in_RB;
  byte bVar5;
  byte in_BL;
  byte bVar6;
  byte in_FD;
  byte bVar7;
  byte in_M;
  byte extraout_M;
  byte bVar8;
  byte in_Q;
  byte extraout_Q;
  byte bVar9;
  byte in_IMASK;
  byte bVar10;
  byte in_S;
  byte extraout_S;
  byte bVar11;
  byte in_T;
  byte bVar12;
  byte extraout_T;
  
  uVar3 = (uint)in_T | (uint)in_S << 1;
  uVar1 = uVar3 | (uint)in_IMASK << 4 | (uint)in_Q << 8;
  uVar2 = uVar1 | (uint)in_M << 9;
  bVar6 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar4 = bVar6 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar11 = (byte)((uVar3 & 2) >> 1);
  bVar10 = 0;
  bVar9 = (byte)(uVar1 >> 8) & 1;
  bVar8 = (byte)((uVar2 & 0x200) >> 9);
  bVar7 = (byte)(((uVar2 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar6 = (bVar6 & 0x10) >> 4;
  bVar5 = (bVar4 & 0x20) >> 5;
  bVar4 = ((bVar4 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(*DAT_8c273a28 + *ar4 * 0x20 + 0x14) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 1;
  DAT_8c273a28[*ar4 + 0x3b] = DAT_8c273a28[*ar4 + 0x3b] + 1;
  uVar3 = *ar4 + 0xf;
  if ((int)uVar3 < 0) {
    _DAT_a05f6900 = 1 >> (~uVar3 & 0x1f) + 1;
  }
  else {
    _DAT_a05f6900 = 1 << (uVar3 & 0x1f);
  }
  bVar12 = ar4[7] == 0;
  if (!(bool)bVar12) {
    (*(code *)(uint)ar4[7])(ar4[8],_DAT_a05f6900,&DAT_8c273a28,ar7);
    bVar8 = extraout_M;
    bVar9 = extraout_Q;
    bVar11 = extraout_S;
    bVar12 = extraout_T;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar12 | (uint)bVar11 << 1 | (uint)bVar10 << 4) & 0xffffff0f | (uint)bVar9 << 8 |
         (uint)bVar8 << 9 | (uint)bVar7 << 0xf | (uint)bVar6 << 0x1c | (uint)bVar5 << 0x1d |
         (uint)bVar4 << 0x1e;
}

__asm__(".globl _FUN_8c1f8cbc\n.set _FUN_8c1f8cbc, _FUN_8c1f8cbc_def\n");
