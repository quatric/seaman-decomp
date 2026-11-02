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
uint FUN_8c1efcae_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1efcae");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
  byte in_MD = 0;
  byte bVar3;
  byte in_RB = 0;
  byte bVar4;
  byte in_BL = 0;
  byte bVar5;
  byte in_FD = 0;
  byte bVar6;
  byte in_M = 0;
  byte extraout_M = 0;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte in_IMASK = 0;
  byte bVar7;
  byte in_S = 0;
  byte extraout_S = 0;
  byte in_T = 0;
  byte extraout_T = 0;
  
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar7 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(volatile le<undefined4>* )(unsigned)0xa05f6920 = *(volatile le<undefined4>* )(unsigned)0xa05f6920 & (int)(int)0xffffcfff;
  iVar2 = 0x8c470910;
  puVar1 = ((void *)(unsigned)0x8c1fa54c);
  (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c1fa54c(*(le<undefined4>* )(unsigned)(0x8c470910 + 0xc),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), (*(code *)xlat((unsigned long)(puVar1)))(*(le<undefined4>* )(unsigned)(iVar2 + 0x10),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), (*(code *)xlat((unsigned long)(puVar1)))(*(le<undefined4>* )(unsigned)(iVar2 + 8),ar5,ar6,ar7));
  ar4_00 = *(le<undefined4>* )(unsigned)(iVar2 + 4);
  (vsp = ((unsigned long)(fr0_ - 244)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c1f44cc(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 244)), memset(0x8c4709a0,0,(int)0x240,ar7));
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar7 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d |
         (uint)bVar3 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl FUN_8c1efcae\n.set FUN_8c1efcae, FUN_8c1efcae_def\n");

}
