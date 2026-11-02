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
undefined4 FUN_8c1b9a72_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9a72";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int extraout_r1 = 0;
  int extraout_r2 = 0;
  undefined1 extraout_r3 = 0;
  char cVar2;
  int a7;
  char *unaff_r9 = 0;
  int unaff_r12 = 0;
  int in_GBR = (void *)0x8cf80000;
  byte in_MD = 0;
  byte in_RB = 0;
  byte in_BL = 0;
  byte in_FD = 0;
  byte extraout_M = 0;
  byte extraout_Q = 0;
  byte in_IMASK = 0;
  byte extraout_S = 0;
  byte extraout_T = 0;
  byte extraout_T_00 = 0;
  
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9902(ar4,ar5,ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)(fr0_ + (int)0x00000000) + (uint)extraout_T + extraout_r1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9756(ar4,ar5,ar6,ar7); });
  *(char *)(unsigned)(in_GBR + 0x9d) = (char)uVar1;
  cVar2 = (char)ar4;
  *(short *)(unsigned)(in_GBR + 0x72) = (short)uVar1;
  a7 = (int)*unaff_r9;
  *(undefined4 *)(unsigned)(unaff_r12 + 4) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), mac_wOp_wrap_1b992a(ar4,ar5,ar6,a7));
  *ar5 = extraout_r3;
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(int)cVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b970a(ar4,ar5,ar6,a7); });
  *(char *)(unsigned)(in_GBR + 0xb3) = (char)uVar1;
  *(ushort *)(unsigned)(in_GBR + 0x9a) = (ushort)uVar1 ^ 0x9f;
  *(uint *)(unsigned)(extraout_r2 + -4) =
       (uint)extraout_T_00 | (uint)extraout_S << 1 | (uint)in_IMASK << 4 | (uint)extraout_Q << 8 |
       (uint)extraout_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
       (uint)in_MD << 0x1e;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9a72\n.set _FUN_8c1b9a72, _FUN_8c1b9a72_def\n");
