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
undefined4 FUN_8c20cbbc_def(le<uint>* ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20cbbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar7_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = 4;
  }
  else {
    uVar2 = ar4[6];
    if (((((uVar2 & 4) == 0) || ((uVar2 & 1) == 0)) || ((uVar2 & 8) != 0)) || ((uVar2 & 0x20) != 0))
    {
      iVar3 = 0;
    }
    else {
      iVar3 = 4;
    }
    ar7_00 = ar7 * 0x20;
    uVar4 = iVar3 + ar6 * ar7_00;
    uVar2 = ar4[5] - uVar4;
    if (uVar4 < ar4[5]) {
      if (ar7_00 < uVar2) {
        uVar2 = ar7_00;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(uVar4 + ar4[7],ar5,uVar2,ar7_00));
      uVar1 = 0;
    }
    else {
      uVar1 = 0xc;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c20cbbc\n.set FUN_8c20cbbc, FUN_8c20cbbc_def\n");

}
