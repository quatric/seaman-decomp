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
uint FUN_8c01cbc8_def(le<undefined4>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01cbc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  bool bVar2;
  
  if (ar5 != ar4[1]) {
    *(le<undefined4>* )(unsigned)0x8c2791b8 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      *ar4 = 8;
      ar4[2] = 8;
    }
    else if (ar5 == 0xc) {
      *ar4 = 0xe;
      ar4[2] = 0xe;
    }
    else if (ar5 == 0x12) {
      *ar4 = 0x14;
      ar4[2] = 0x14;
    }
    else {
      *ar4 = 2;
      ar4[2] = 2;
    }
  }
  puVar1 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f6342(ar4[2],ar5,ar6,ar7));
  bVar2 = (*puVar1 & 0x10) != 0;
  if (!bVar2) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01d440(ar4,ar5,ar6,ar7));
    *ar4 = 0xffffffff;
    ar4[1] = 0xffffffff;
    *(le<undefined4>* )(unsigned)0x8c2791b8 = 0;
  }
  return (uint)bVar2;
}

__asm__(".globl FUN_8c01cbc8\n.set FUN_8c01cbc8, FUN_8c01cbc8_def\n");

}
