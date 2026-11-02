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
undefined4 FUN_8c20a8e0_def(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a8e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  uint ar6_00;
  uint ar6_01;
  uint ar5_00;
  byte in_IMASK = 0;
  char in_S = 0;
  byte in_T = 0;
  
  if ((((ar4 & 0x1f) == 0) && ((ar5 & 0x1f) == 0)) &&
     (((in_T | in_S << 1) & 0xf0) == 0 && (in_IMASK & 0xf) == 0)) {
    ar5_00 = ar6;
    ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c20a84e(ar5,ar6,ar6,ar7); });
    ar6_01 = ar6 & 0xffffffe0;
    if (ar6_01 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd8) = 0;
    }
    else {
      do {
        ar7 = 0x18;
        ar5_00 = ar5;
        ({ extern void host_vram_dma(unsigned,unsigned,unsigned); host_vram_dma(ar4,ar5,ar6_01); }); iVar1 = 0; (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x8c47e988));
      } while (iVar1 == 0x100);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd8) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24));
    }
    ar6_00 = ar6 & 0x1f;
    if (ar6_00 != 0) {
      ar5_00 = ar5 + ar6_01;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(ar4 + ar6_01 + -0x5c000000,ar5_00,ar6_00,ar7));
    }
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fdc) == 1) {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c203320((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd8),ar5_00,ar6_00,ar7));
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(ar4 + 0xa4000000,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl FUN_8c20a8e0\n.set FUN_8c20a8e0, FUN_8c20a8e0_def\n");

}
