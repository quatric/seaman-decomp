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
undefined4 FUN_8c219962_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c219962";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint * ain0 = (uint *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint in_r2 = 0;
  undefined4 *in_r3 = 0;
  int *unaff_r12 = 0;
  undefined4 ar5_00;
  int ar4_00;
  longlong lVar2;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  ar5_00 = *in_r3;
  ar4_00 = *unaff_r12;
  if ((*ain0 & in_r2) != 0) {
    if (in_FPSCR_SZ == '\0') {
      lVar2 = (ulonglong)(uint)unaff_r12[5] << 0x20;
    }
    else {
      lVar2 = *(longlong *)(unsigned)(unaff_r12 + 5);
    }
    if ((in_FPSCR_PR == '\0' && (float)lVar2 < F32HI(lVar2)) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c217e18(unaff_r12,ar5,ar6,ar7)), iVar1 != 0)) {
      return 0xffffffff;
    }
  }
  if (ar4_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c21982e(ar4_00,ar5_00,ar6,ar7); });
  }
  if (unaff_r12[1] != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c21908e(unaff_r12[1],(*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa0),ar5_00,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c219962\n.set _FUN_8c219962, _FUN_8c219962_def\n");
