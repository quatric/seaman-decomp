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
int FUN_8c2057f8_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2057f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(le<int>* )(unsigned)(iVar1 + 4) == ar5) {
      iVar3 = 0;
      iVar2 = iVar1;
    }
    else {
      iVar3 = *(le<int>* )(unsigned)(iVar1 + 4);
    }
  }
  if (*ar4 == ar5) {
    *ar4 = *(le<int>* )(unsigned)(ar5 + 4);
  }
  else {
    *(le<undefined4>* )(unsigned)(iVar2 + 4) = *(le<undefined4>* )(unsigned)(ar5 + 4);
  }
  return iVar2;
}

__asm__(".globl FUN_8c2057f8\n.set FUN_8c2057f8, FUN_8c2057f8_def\n");

}
