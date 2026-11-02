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
int FUN_8c2378ba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2378ba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int in_r2 = 0;
  undefined4 *in_r3 = 0;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  ar6_00 = *(undefined4 *)(unsigned)(*(int *)(unsigned)*in_r3 + in_r2 + 8);
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
  ar5_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25a566((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5b4(iVar2,ar5_00,ar6_00,ar7); });
  if (iVar1 < 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 1;
    iVar2 = -1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = unaff_r14;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23782c(iVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08),ar5_00,ar6_00,ar7));
    if (iVar2 < 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = unaff_r14;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2378ba\n.set _FUN_8c2378ba, _FUN_8c2378ba_def\n");
