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
undefined4 FUN_8c10fece_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fece";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * ain1 = (int *)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int a4;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  float extraout_fr0_02 = 0;
  float extraout_fr0_03 = 0;
  float extraout_fr0_04 = 0;
  
  a4 = *unaff_r14;
  *ain1 = *(byte *)(unsigned)(unaff_r14 + 2) - 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,5,ar6,ar7));
  unaff_r14[0x1d] = (int)extraout_fr0 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
  unaff_r14[0x1c] = (int)extraout_fr0_00 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,1,ar6,ar7));
  unaff_r14[0x1f] = (int)extraout_fr0_01 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  unaff_r14[0x21] = (int)(short)(int)extraout_fr0_02;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,3,ar6,ar7));
  unaff_r14[0x22] = (int)(short)(int)extraout_fr0_03;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,4,ar6,ar7));
  uVar2 = 4;
  unaff_r14[0x23] = (int)(short)(int)extraout_fr0_04;
  unaff_r14[0x20] = unaff_r14[0x1e] * unaff_r14[0x1c];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,unaff_r14[0x1f] * unaff_r14[0x20],4,ar7));
  unaff_r14[0xd] = iVar1;
  unaff_r14[0xe] = unaff_r14[0x1f] * unaff_r14[0x20] * 4 + unaff_r14[0xd];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,unaff_r14[0x1e] << 2,uVar2,ar7));
  unaff_r14[0x11] = iVar1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,unaff_r14[0x1e] + 1,uVar2,ar7));
  unaff_r14[0x1b] = iVar1;
  uVar2 = 1;
  iVar1 = unaff_r14[0x1e] + 1;
  (vsp = ((unsigned long)(fr0_ - 0)), memset(unaff_r14[0x1b],1,iVar1,ar7));
  *(short *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = (short)unaff_r14[0x1c] << 2;
  unaff_r14[0xb] = -1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fa6c(unaff_r14,uVar2,iVar1,ar7));
  return 0;
}

__asm__(".globl _FUN_8c10fece\n.set _FUN_8c10fece, _FUN_8c10fece_def\n");
