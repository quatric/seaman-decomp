#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1f8cbc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f8cbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte in_MD = 0;
  byte bVar4;
  byte in_RB = 0;
  byte bVar5;
  byte in_BL = 0;
  byte bVar6;
  byte in_FD = 0;
  byte bVar7;
  byte in_M = 0;
  byte extraout_M = 0;
  byte bVar8;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte bVar9;
  byte in_IMASK = 0;
  byte bVar10;
  byte in_S = 0;
  byte extraout_S = 0;
  byte bVar11;
  byte in_T = 0;
  byte bVar12;
  byte extraout_T = 0;
  
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
  *(undefined4 *)(unsigned)(*((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28) + *ar4 * 0x20 + 0x14) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 1;
  ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[*ar4 + 0x3b] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c273a28)[*ar4 + 0x3b] + 1;
  uVar3 = *ar4 + 0xf;
  if ((int)uVar3 < 0) {
    (*(undefined4 *)(unsigned)(unsigned)0xa05f6900) = 1 >> (~uVar3 & 0x1f) + 1;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0xa05f6900) = 1 << (uVar3 & 0x1f);
  }
  bVar12 = ar4[7] == 0;
  if (!(bool)bVar12) {
    (vsp = ((unsigned long)(fr0_ - 244)), (*(code *)xlat((unsigned long)((uint)ar4[7])))(ar4[8],(*(undefined4 *)(unsigned)(unsigned)0xa05f6900),((undefined4 *)(unsigned)0x8c273a28),ar7));
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
