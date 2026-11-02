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
uint FUN_8c1f9914_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f9914");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2052; for (int i_ = 0; i_ < 2052; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
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
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte in_IMASK = 0;
  byte bVar8;
  byte in_S = 0;
  byte extraout_S = 0;
  byte in_T = 0;
  byte extraout_T = 0;
  
  bVar6 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar4 = bVar6 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar8 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar7 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar6 = (bVar6 & 0x10) >> 4;
  bVar5 = (bVar4 & 0x20) >> 5;
  bVar4 = ((bVar4 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  (vsp = ((unsigned long)(fr0_ - 2052)), FUN_8c1fa0c4(ar4,ar5,ar6,ar7));
  puVar1 = 0xff00001c;
  uVar2 = (uint)0x800;
  *(volatile le<undefined4>* )(unsigned)0xff00001c = ar4;
  uVar3 = (uint)(int)0xffffff0f;
  *puVar1 = *puVar1 & (int)(int)0xfffff7ff | uVar2;
  *puVar1 = *puVar1 & 0xfffffff7 | 8;
  return (int)(short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4) << 4 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar8 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar7 << 0xf | (uint)bVar6 << 0x1c | (uint)bVar5 << 0x1d |
         (uint)bVar4 << 0x1e) & uVar3;
}

__asm__(".globl FUN_8c1f9914\n.set FUN_8c1f9914, FUN_8c1f9914_def\n");

}
