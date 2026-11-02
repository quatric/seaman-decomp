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
undefined4 FUN_8c1f21bc_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1f21bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<short>* )(unsigned)(ar4 + 0x4c) == 0) {
    *(le<undefined4>* )(unsigned)(ar4 + 4) = ar5;
    *(le<undefined4>* )(unsigned)(ar4 + 8) = ar6;
    *(le<int>* )(unsigned)(ar4 + 0xc) = ar7;
    *(le<int>* )(unsigned)(ar4 + 0x10) = ar7 + 0x7ff >> 0xb;
    *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x1c) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x20) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x24) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x34) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 0;
    *(le<undefined2>* )(unsigned)(ar4 + 0x48) = 0;
    *(le<undefined2>* )(unsigned)(ar4 + 0x4a) = 0;
    *(le<undefined2>* )(unsigned)(ar4 + 0x4c) = 1;
    *(le<undefined2>* )(unsigned)(ar4 + 0x4e) = (*(le<undefined2>* )(unsigned)(unsigned)0x8c26c524);
    *(le<undefined2>* )(unsigned)(ar4 + 0x50) = 0;
    *(le<undefined2>* )(unsigned)(ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}

__asm__(".globl FUN_8c1f21bc\n.set FUN_8c1f21bc, FUN_8c1f21bc_def\n");

}
