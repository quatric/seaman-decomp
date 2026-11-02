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
int FUN_8c25a8c0_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a8c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  le<int>* ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c25a962(ar5,ar5,ar6,ar7));
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c236278(iVar1,ar5_00,ar6,ar7));
    if (ar4_00 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 7;
      iVar1 = -7;
    }
    else {
      ar6_00 = iVar1;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c23c814(ar4_00,*ar5,iVar1,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c1f9e32(ar4_00,iVar1,ar6_00,ar7); });
      iVar1 = 1;
      *ar5 = ar4_00;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c25a8c0\n.set FUN_8c25a8c0, FUN_8c25a8c0_def\n");

}
