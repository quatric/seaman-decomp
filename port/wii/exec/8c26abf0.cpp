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
undefined4 s_E1242_sdMemBlkSetPrm_return__26abf6_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_E1242_sdMemBlkSetPrm_return__26abf6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = s0 * *(le<int>* )(unsigned)(ar4 + 0x10);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  iVar4 = iVar4 >> 3;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4bf028) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  uVar3 = 0;
  iVar2 = ar5 * 4;
  iVar5 = iVar4;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c265ea0(*(le<undefined4>* )(unsigned)(iVar2 + ar4 + 0x20),ar7,iVar4,0); });
  if (iVar1 == 0) {
    iVar5 = ar6 * *(le<int>* )(unsigned)(ar4 + 0x10);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    ar5_00 = (iVar5 >> 3) + *(le<int>* )(unsigned)(ar4 + 0x38 + iVar2);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4bf02c) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(0,ar7,iVar4,uVar3));
    iVar5 = ar5_00;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c265ff4(*(le<undefined4>* )(unsigned)(ar4 + 0x20 + iVar2),ar5_00,iVar4,uVar3));
    if (iVar1 != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2738e0)); unsigned long t1_ = (unsigned long)(iVar5); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(iVar1,ar5_00,iVar4,uVar3); });
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(iVar1,ar5_00,iVar4,uVar3));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4bf030) = uVar3;
  }
  else {
    uVar3 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2738b0)); unsigned long t1_ = (unsigned long)(iVar5); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(iVar1,ar7,iVar4,uVar3); });
  }
  return uVar3;
}

__asm__(".globl s_E1242_sdMemBlkSetPrm_return__26abf6\n.set s_E1242_sdMemBlkSetPrm_return__26abf6, s_E1242_sdMemBlkSetPrm_return__26abf6_def\n");

}
