#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c207502_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207502");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte in_MD = 0;
  byte bVar6;
  byte in_RB = 0;
  byte bVar7;
  byte in_BL = 0;
  byte bVar8;
  byte in_FD = 0;
  byte bVar9;
  byte in_M = 0;
  byte extraout_M = 0;
  byte bVar10;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte bVar11;
  byte in_IMASK = 0;
  byte bVar12;
  byte in_S = 0;
  byte extraout_S = 0;
  byte bVar13;
  byte in_T = 0;
  byte bVar14;
  byte extraout_T = 0;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  bVar8 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar6 = bVar8 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar13 = (byte)((uVar1 & 2) >> 1);
  bVar12 = (byte)((uVar2 & 0xf0) >> 4);
  bVar11 = (byte)(uVar3 >> 8) & 1;
  bVar10 = (byte)((uVar4 & 0x200) >> 9);
  bVar9 = (byte)(((uVar4 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar8 = (bVar8 & 0x10) >> 4;
  bVar7 = (bVar6 & 0x20) >> 5;
  bVar6 = ((bVar6 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c2073f8(ar4,ar5,0,ar7));
    bVar10 = extraout_M;
    bVar11 = extraout_Q;
    bVar13 = extraout_S;
    bVar14 = extraout_T;
  }
  else {
    bVar14 = (ar5 & 0x20000000) != 0;
    iVar5 = (int)0x234;
    *(le<int>* )(unsigned)(ar5 * 8 + 0x234 + ar4) = ar6;
    *(le<undefined4>* )(unsigned)(iVar5 + ar4 + ar5 * 8 + 4) = ar7;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar14 | (uint)bVar13 << 1 | (uint)bVar12 << 4 | (uint)bVar11 << 8 |
          (uint)bVar10 << 9 | (uint)bVar9 << 0xf | (uint)bVar8 << 0x1c | (uint)bVar7 << 0x1d |
         (uint)bVar6 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl FUN_8c207502\n.set FUN_8c207502, FUN_8c207502_def\n");

}
