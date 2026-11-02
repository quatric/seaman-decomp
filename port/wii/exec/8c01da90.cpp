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
undefined4 FUN_8c01da90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01da90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2791b8) == 4) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xc8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 200)); strcpy(((undefined1 *)(fr0_ - 0x94)),*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c12fba9),ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c02126c(0x8c3eb334,((undefined1 *)(fr0_ - 0x94)),*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                         ((le<int>*  *)(fr0_ - 0x98))));
    if (iVar1 == 0) {
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
    }
    else if (iVar1 == 2) {
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 2;
    }
    else {
      iVar1 = ({ unsigned long t0_ = (unsigned long)(
                           (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98))[2] + 0x20); unsigned long t1_ = (unsigned long)(
                           (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98))[1] + 0x20); *(le<unsigned>* )((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 200)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 200)) - 8); FUN_8c01dc80(ar4,*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,
                           *(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                           (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + 0x20); });
      if (iVar1 == 1) {
        *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c021338(0x8c3eb334,((undefined1 *)(fr0_ - 0x94)),*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,10));
        *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
      }
    }
  }
  else {
    *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
  }
  return 0x5638;
}

__asm__(".globl FUN_8c01da90\n.set FUN_8c01da90, FUN_8c01da90_def\n");

}
