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
int FUN_8c01f8a4_def(le<int>* ar4,undefined4 ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c01f8a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7));
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*ar4 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262168(*ar4,ar5,ar6,ar7));
    }
    *ar4 = 0;
    if (iVar1 == 3) {
      ar7 = ar4[1] + 0x10;
      ar6 = ar4 + 8;
      ar5_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)ar4[1]);
      ({ unsigned long t0_ = (unsigned long)(ar4[1] + 0x30); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020600(ar4,ar5_00,ar6,ar7); });
      iVar1 = *(le<int>* )(unsigned)(uint)ar4[1];
      if ((iVar1 < 0x11) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        default:
          ar5_00 = (le<int>* )(unsigned)(uint)ar4[1];
          (vsp = ((unsigned long)(fr0_ - 0)), s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,ar5_00,ar6,ar7));
          break;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          break;
        case 0xf:
          ar6 = (le<int>* )(unsigned)(uint)ar4[1];
          ar5_00 = ar4 + 0xc;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar5_00,ar6,ar7));
          break;
        case 0x10:
          ar6 = (le<int>* )(unsigned)(uint)ar4[1];
          ar5_00 = ar4 + 0xd;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar5_00,ar6,ar7));
        }
      }
    }
    else {
      ar5_00 = (le<int>* )(unsigned)(uint)ar4[1];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,ar5_00,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02009c(ar4,ar5_00,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c01f8a4\n.set FUN_8c01f8a4, FUN_8c01f8a4_def\n");

}
