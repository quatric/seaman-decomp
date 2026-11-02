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
undefined4 FUN_8c1fbe1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fbe1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  
  do {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fce88(unaff_r14,ar5,ar6,ar7));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    unaff_r14 = unaff_r14 + 1;
  } while (unaff_r14 < unaff_r13);
  ar5_00 = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c273a44) = 0;
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c26d1e0);
  ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c1f03a6((*(undefined4 *)(unsigned)(unsigned)0x8c26d1e0),0,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fcadc(uVar1,ar5_00,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fda04(uVar1,ar5_00,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c1fbe1a\n.set _FUN_8c1fbe1a, _FUN_8c1fbe1a_def\n");
