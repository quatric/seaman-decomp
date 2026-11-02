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
int FUN_8c1f6142_def(le<undefined4>* ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f6142");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  le<uint>* ar5_00;
  
  ar5_00 = ar5;
  if (((*ar5 & 1) == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f002a(((le<undefined4>* )(fr0_ - 0x10)),ar5,ar6,ar7)), -1 < iVar1)
     ) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f0312(5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f6120(((le<undefined4>* )(fr0_ - 0x10))[0],ar5_00,ar6,ar7));
      ar4[1] = iVar1;
    }
    else {
      ar4[1] = ((le<undefined4>* )(fr0_ - 0x10))[0];
    }
    *ar4 = ar4[1];
    ar4[9] = ar5 + 5;
  }
  else {
    ar4[1] = 0;
    *ar4 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c1f6142\n.set FUN_8c1f6142, FUN_8c1f6142_def\n");

}
