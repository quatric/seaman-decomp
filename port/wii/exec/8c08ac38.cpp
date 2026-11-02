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
int FUN_8c08ac38_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c08ac38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
    if (*(le<int>* )(unsigned)(0x8f4 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(le<int>* )(unsigned)(0x8f4 + ar4 + iVar3 * 4);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x8f4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
        *(le<undefined4>* )(unsigned)(0x8ec + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(le<int>* )(unsigned)(0x8f8 + ar4) != 0) {
    ar5_00 = *(le<int>* )(unsigned)(0x8f8 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x8f8;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0x8f0 + ar4) = uVar2;
    }
  }
  iVar3 = *(le<int>* )(unsigned)(0x8f4 + ar4);
  if ((iVar3 == 0) && (iVar3 = *(le<int>* )(unsigned)(0x8f8 + ar4), iVar3 == 0)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7));
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c08ac38\n.set FUN_8c08ac38, FUN_8c08ac38_def\n");

}
