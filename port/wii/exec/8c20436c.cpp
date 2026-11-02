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
undefined4 FUN_8c20436c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20436c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (((le<undefined4>* )(unsigned)0x8c275408))[(short)ar4 * 5];
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = *(le<int>* )(unsigned)(iVar1 + 0xc);
    if ((((ar5 < iVar3) || (*(le<int>* )(unsigned)(iVar1 + 0x10) + iVar3 <= ar5)) || (ar5 + ar6 < iVar3)) ||
       (*(le<int>* )(unsigned)(iVar1 + 0x10) + iVar3 < ar5 + ar6)) {
      iVar3 = *(le<int>* )(unsigned)(iVar1 + 8);
    }
    else {
      iVar3 = 0;
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    return 0;
  }
  return 3;
}

__asm__(".globl FUN_8c20436c\n.set FUN_8c20436c, FUN_8c20436c_def\n");

}
