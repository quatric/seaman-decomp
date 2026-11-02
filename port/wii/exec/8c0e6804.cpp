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
undefined4 FUN_8c0e6804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e6804");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar6_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  ar6_00 = (uint)(byte)ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf3c(ar4,ar5,ar6_00,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((0xacc + ar4)) << 1) + *(le<int>* )(unsigned)((0xacc + ar4))) << 2) + ar4) + 0x106c)),ar4,ar5,ar6_00,ar7); }));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e252c(ar5,ar5_00,ar6_00,ar7));
  if (iVar1 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_cc_0dfee8(ar5,ar5_00,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f528(uVar2,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d9e0(uVar2,ar5_00,ar6_00,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dfef4(ar5,ar5_00,ar6_00,ar7));
  if (iVar1 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_cc_0dfee8(ar5,ar5_00,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f528(uVar2,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01da60(uVar2,ar5_00,ar6_00,ar7));
  }
  return 1;
}

__asm__(".globl FUN_8c0e6804\n.set FUN_8c0e6804, FUN_8c0e6804_def\n");

}
