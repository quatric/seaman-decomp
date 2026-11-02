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
undefined4 FUN_8c20e8c6_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20e8c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 unaff_r8 = 0;
  undefined4 unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  le<int>* piVar3;
  undefined4 unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e838(ar7,ar7,ar6,ar7));
  if (ar6 != 0) {
    ({ unsigned long t0_ = (unsigned long)(in_PR); unsigned long t1_ = (unsigned long)(unaff_r8); unsigned long t2_ = (unsigned long)(unaff_r9); unsigned long t3_ = (unsigned long)(unaff_r10); unsigned long t4_ = (unsigned long)(unaff_r11); unsigned long t5_ = (unsigned long)(unaff_r12); unsigned long t6_ = (unsigned long)(unaff_r13); unsigned long t7_ = (unsigned long)(
                 unaff_r14); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 20) = (unsigned)t5_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 24) = (unsigned)t6_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 28) = (unsigned)t7_; vsp = (((unsigned long)(fr0_ - 0)) - 32); FUN_8c20e9ae(ar5,ar7,ar7,s0); });
  }
  ar7_00 = s0;
  ({ unsigned long ri0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c26d63c)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + iVar1 * 4) + ar4,ar5,ar7,s0); });
  piVar3 = (le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + (iVar1 + -1) * 4);
  do {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f25a(ar5,ar7,ar7,ar7_00));
    ar7 = ar7 >> 1;
    if (ar6 != 0) {
      uVar2 = ({ unsigned long t0_ = (unsigned long)(in_PR); unsigned long t1_ = (unsigned long)(unaff_r8); unsigned long t2_ = (unsigned long)(unaff_r9); unsigned long t3_ = (unsigned long)(unaff_r10); unsigned long t4_ = (unsigned long)(unaff_r11); unsigned long t5_ = (unsigned long)(unaff_r12); unsigned long t6_ = (unsigned long)(
                           unaff_r13); unsigned long t7_ = (unsigned long)(unaff_r14); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 20) = (unsigned)t5_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 24) = (unsigned)t6_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 28) = (unsigned)t7_; vsp = (((unsigned long)(fr0_ - 0)) - 32); FUN_8c20e9ae(ar5,ar7,ar7,s0); });
    }
    ar7_00 = s0;
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*piVar3 + ar4,ar5,ar7,s0); });
    piVar3 = piVar3 + -1;
  } while ((undefined *)(unsigned)0x8c26d63b < piVar3);
  return uVar2;
}

__asm__(".globl FUN_8c20e8c6\n.set FUN_8c20e8c6, FUN_8c20e8c6_def\n");

}
