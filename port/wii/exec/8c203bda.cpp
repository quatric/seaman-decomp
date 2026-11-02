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
undefined4 FUN_8c203bda_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203bda");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  le<ushort>* ar5_00;
  undefined4 uVar2;
  le<ushort>* ar5_01;
  
  ar5_00 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cc0(ar4,((le<short>* )(fr0_ - 0x14)),ar6,ar7));
  if (ar5_00 == (le<ushort>* )(unsigned)0x0) {
    uVar2 = 7;
  }
  else if ((*ar5_00 & 2) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x14))[0],ar5_00,ar6,ar7));
  }
  else {
    iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
    if (((le<short>* )(fr0_ - 0x14))[0] != 0) {
      iVar1 = -(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
    }
    ar5_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cc0(iVar1 + ar4,((le<short>* )(fr0_ - 0x10)),ar6,ar7));
    if (ar5_01 == (le<ushort>* )(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x14))[0],ar5_00,ar6,ar7));
      uVar2 = 0;
    }
    else if ((*ar5_01 & 4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x14))[0],ar5_00,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x10))[0],ar5_01,ar6,ar7));
    }
    else {
      *ar5_00 = *ar5_00 & 0xfffb;
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c203bda\n.set FUN_8c203bda, FUN_8c203bda_def\n");

}
