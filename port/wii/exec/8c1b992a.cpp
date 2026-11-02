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
undefined4 mac_wOp_wrap_1b992a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("mac_wOp_wrap_1b992a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint extraout_r1 = 0;
  int iVar2;
  int unaff_r10 = 0;
  int in_GBR = (void *)0x8cf80000;
  char extraout_S = 0;
  undefined4 extraout_MACH = 0;
  undefined4 extraout_MACL = 0;
  
  iVar2 = (int)((void *)0x8c1b9996);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), halt_baddata_wrap_1b939a(ar4,ar5,ar6,ar7));
  *(le<int>* )(unsigned)(unaff_r10 + 0x38) = iVar2;
  *(le<short>* )(unsigned)(in_GBR + 0x1ce) = (short)uVar1;
  iVar2 = (int)*(le<short>* )(unsigned)(extraout_r1 >> 1 | (uint)((extraout_r1 & 1) != 0) << 0x1f);
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),iVar2 * iVar2);
  }
                    
  halt_baddata();
}

__asm__(".globl mac_wOp_wrap_1b992a\n.set mac_wOp_wrap_1b992a, mac_wOp_wrap_1b992a_def\n");

}
