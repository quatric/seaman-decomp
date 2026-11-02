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
undefined4
FUN_8c20e8dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e8dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);
  undefined4 s24 = *(le<undefined4>* )(vsp + 24);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  int unaff_r9 = 0;
  int unaff_r10 = 0;
  undefined4 unaff_r12 = 0;
  le<int>* piVar3;
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e838(ar7,ar5,ar6,ar7));
  if (unaff_r10 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24));
  }
  a7 = s24;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + iVar1 * 4) + unaff_r9,unaff_r12,unaff_r14,s24); });
  piVar3 = (le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + (iVar1 + -1) * 4);
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f25a(unaff_r12,unaff_r14,unaff_r14,a7));
    unaff_r14 = unaff_r14 >> 1;
    if (unaff_r10 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24));
    }
    a7 = s24;
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*piVar3 + unaff_r9,unaff_r12,unaff_r14,s24); });
    piVar3 = piVar3 + -1;
  } while (&(*(undefined1 *)(unsigned)0x8c26d63b) < piVar3);
  return uVar2;
}

__asm__(".globl FUN_8c20e8dc\n.set FUN_8c20e8dc, FUN_8c20e8dc_def\n");

}
