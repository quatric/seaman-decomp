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
uint aica_reg_258104_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "aica_reg_258104";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 820; for (int i_ = 0; i_ < 820; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int a6;
  int *a7;
  byte in_MD = 0;
  byte bVar7;
  byte in_RB = 0;
  byte bVar8;
  byte in_BL = 0;
  byte bVar9;
  byte in_FD = 0;
  byte bVar10;
  byte in_M = 0;
  byte extraout_M = 0;
  byte bVar11;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte bVar12;
  byte in_IMASK = 0;
  byte bVar13;
  byte in_S = 0;
  byte extraout_S = 0;
  byte bVar14;
  byte in_T = 0;
  
  (*(int *)(fr0_ - 0x30)) = 0;
  (*(uint *)(fr0_ - 0x24)) = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
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
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((int *)(fr0_ - 0x20))));
  iVar6 = 0;
  a6 = 0;
  piVar5 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
  a7 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
  do {
    iVar4 = iVar6 * 0x20;
    iVar6 = iVar6 + 1;
    if ((*(uint *)(unsigned)(iVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c277c74) + 0x18) & 1) == 0) {
      *a7 = 0;
    }
    else {
      *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277c74) + a6 + 0x1c) = 0;
      *piVar5 = 1;
    }
    piVar5 = piVar5 + 1;
    a7 = a7 + 1;
    a6 = a6 + 0x20;
    (*(uint *)(fr0_ - 0x28)) = ar4;
  } while (iVar6 < 4);
  while ((*(int *)(fr0_ - 0x30)) != 1) {
    (vsp = ((unsigned long)(fr0_ - 820)), g2dma_2580f8(&(*(int *)(fr0_ - 0x30)),iVar6,a6,a7));
    bVar11 = extraout_M;
    bVar12 = extraout_Q;
    bVar14 = extraout_S;
  }
  (*(undefined4 *)(unsigned)(unsigned)0xa0702c00) = (*(undefined4 *)(unsigned)(unsigned)0xa0702c00) & 0xfffffcff | (*(uint *)(fr0_ - 0x28));
  iVar6 = 0;
  for (; &(*(int *)(fr0_ - 0x10)) > ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)); (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + 1))) {
    if (*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) == 1) {
      *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277c74) + iVar6 + 0x1c) = 1;
    }
    iVar6 = iVar6 + 0x20;
  }
  return ((*(uint *)(fr0_ - 0x24)) & 0xf) << 4 |
         ((uint)(&(*(int *)(fr0_ - 0x10)) <= ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c))) | (uint)bVar14 << 1 | (uint)bVar13 << 4) & 0xffffff0f |
         (uint)bVar12 << 8 | (uint)bVar11 << 9 | (uint)bVar10 << 0xf | (uint)bVar9 << 0x1c |
         (uint)bVar8 << 0x1d | (uint)bVar7 << 0x1e;
}

__asm__(".globl _aica_reg_258104\n.set _aica_reg_258104, _aica_reg_258104_def\n");
