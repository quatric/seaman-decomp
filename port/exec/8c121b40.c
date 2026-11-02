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
undefined4 FUN_8c121b40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c121b40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  float * ain0 = (float *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  float extraout_fr0_02 = 0;
  undefined4 extraout_fr0_03 = 0;
  float extraout_fr0_04 = 0;
  float fVar1;
  float fVar2;
  char cVar3;
  
  fVar2 = *ain0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
  fVar1 = extraout_fr0;
  if (fVar2 < extraout_fr0) {
    fVar1 = extraout_fr0 + -4.2949673e+09;
  }
  *(int *)(unsigned)(unaff_r14 + 0x50) = (int)fVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  fVar1 = extraout_fr0_00;
  if (fVar2 < extraout_fr0_00) {
    fVar1 = extraout_fr0_00 + -4.2949673e+09;
  }
  *(int *)(unsigned)(unaff_r14 + 0x58) = (int)fVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,3,ar6,ar7));
  *(float *)(unsigned)(unaff_r14 + 0x60) = (float)(int)(short)(int)extraout_fr0_01 * 0.002302585;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,4,ar6,ar7));
  cVar3 = '\0';
  *(uint *)(unsigned)(unaff_r14 + 0x5c) = (int)extraout_fr0_02 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,5,ar6,ar7));
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(unaff_r14 + 100) = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 100) = CONCAT44(extraout_fr0_03,extraout_fr1);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
  fVar1 = extraout_fr0_04;
  if (fVar2 < extraout_fr0_04) {
    fVar1 = extraout_fr0_04 + -4.2949673e+09;
  }
  *(int *)(unsigned)(unaff_r14 + 0x54) = (int)fVar1;
  *(undefined1 *)(unsigned)(unaff_r14 + 0x4c) = 1;
  *(undefined1 *)(unsigned)(unaff_r14 + 0x4d) = 1;
  return 0;
}

__asm__(".globl _FUN_8c121b40\n.set _FUN_8c121b40, _FUN_8c121b40_def\n");
