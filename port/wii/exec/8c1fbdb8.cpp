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
uint FUN_8c1fbdb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fbdb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  uint ain0;
  byte in_MD = 0;
  byte bVar1;
  byte in_RB = 0;
  byte bVar2;
  byte in_BL = 0;
  byte bVar3;
  byte in_FD = 0;
  byte bVar4;
  byte in_M = 0;
  byte extraout_M = 0;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte in_IMASK = 0;
  byte bVar5;
  byte in_S = 0;
  byte extraout_S = 0;
  byte in_T = 0;
  byte extraout_T = 0;
  
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar3 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar1 = bVar3 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar5 = 0;
  bVar4 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar3 = (bVar3 & 0x10) >> 4;
  bVar2 = (bVar1 & 0x20) >> 5;
  bVar1 = ((bVar1 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 244)); FUN_8c1f03a6(0x14,0,ar6,ar7); });
  return (ain0 & 0xf) << 4 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar5 << 4) & 0xffffff0f |
         (uint)extraout_Q << 8 | (uint)extraout_M << 9 | (uint)bVar4 << 0xf | (uint)bVar3 << 0x1c |
         (uint)bVar2 << 0x1d | (uint)bVar1 << 0x1e;
}

__asm__(".globl FUN_8c1fbdb8\n.set FUN_8c1fbdb8, FUN_8c1fbdb8_def\n");

}
