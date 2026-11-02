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
undefined4 FUN_8c20dd80_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20dd80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((s0 < 8) || (0x400 < s0)) {
LAB_8c20de00:
    uVar1 = 4;
  }
  else {
    if ((char)s4 == '\0') {
      uVar1 = 0;
    }
    else if ((char)s4 == '\x01') {
      uVar1 = 0x8000000;
    }
    else {
      if ((char)s4 != '\x02') goto LAB_8c20de00;
      uVar1 = 0x10000000;
    }
    if (ar6 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e8c6(ar4,ar5,ar7,s0));
    }
    else {
      if (ar7 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e9ae(ar5,s0,s0,uVar1));
      }
      ({ unsigned long ri0_ = (unsigned long)(ar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(ar4,ar5,s0,uVar1); });
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20dd80\n.set FUN_8c20dd80, FUN_8c20dd80_def\n");

}
