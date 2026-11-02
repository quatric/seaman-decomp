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
undefined4 FUN_8c01636c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01636c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined8 in_dr4 = 0;
  
  (*(float *)(fr0_ - 0x1c)) = F32HI(in_dr4);
  (*(float *)(fr0_ - 0x18)) = (float)in_dr4;
  (*(float *)(fr0_ - 0x34)) = *(float *)(unsigned)*ar4 + (*(float *)(fr0_ - 0x1c));
  (*(float *)(fr0_ - 0x30)) = *(float *)(unsigned)(*ar4 + 4) + (*(float *)(fr0_ - 0x18));
  (*(float *)(fr0_ - 0x2c)) = *(float *)(unsigned)(*ar4 + 8) + (*(float *)(fr0_ - 0x1c));
  (*(float *)(fr0_ - 0x28)) = *(float *)(unsigned)(*ar4 + 0xc) + (*(float *)(fr0_ - 0x18));
  (*(float *)(fr0_ - 0x24)) = *(float *)(unsigned)(*ar4 + 0x10) + (*(float *)(fr0_ - 0x1c));
  (*(float *)(fr0_ - 0x20)) = *(float *)(unsigned)(*ar4 + 0x14) + (*(float *)(fr0_ - 0x18));
  (*(float *)(fr0_ - 0x1c)) = *(float *)(unsigned)(*ar4 + 0x18) + (*(float *)(fr0_ - 0x1c));
  (*(float *)(fr0_ - 0x18)) = *(float *)(unsigned)(*ar4 + 0x1c) + (*(float *)(fr0_ - 0x18));
  iVar2 = *ar4;
  *ar4 = (int)&(*(float *)(fr0_ - 0x34));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c235b6c(ar4,ar4[3],ar4[4],ar7));
  *ar4 = iVar2;
  return uVar1;
}

__asm__(".globl _FUN_8c01636c\n.set _FUN_8c01636c, _FUN_8c01636c_def\n");
