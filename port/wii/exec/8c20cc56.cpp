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
undefined4 FUN_8c20cc56_def(le<uint>* ar4,undefined4 ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20cc56");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint ar7_00;
  uint uVar3;
  
  ar7_00 = ar7 & 0xfffffffc;
  if (ar7_00 != 0) {
    if ((*ar4 & 0xffff) == 3) {
      return 4;
    }
    uVar1 = ar4[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      iVar2 = 0;
    }
    else {
      iVar2 = 4;
    }
    uVar3 = (ar6 & 0xfffffffc) + iVar2;
    uVar1 = ar4[5] - uVar3;
    if (ar4[5] <= uVar3) {
      return 7;
    }
    if (ar7_00 < uVar1) {
      uVar1 = ar7_00;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20a8e0(uVar3 + ar4[7],ar5,uVar1,ar7_00));
  }
  return 0;
}

__asm__(".globl FUN_8c20cc56\n.set FUN_8c20cc56, FUN_8c20cc56_def\n");

}
