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
int FUN_8c115ed8_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c115ed8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  le<int>* piVar2;
  le<int>* piVar3;
  int iVar4;
  
  iVar4 = *(le<int>* )(unsigned)(uint)ar5[1];
  piVar3 = (le<int>* )(unsigned)(uint)ar5[1];
  piVar2 = ar5;
  while (piVar1 = piVar3, iVar4 < 2) {
    piVar3 = (le<int>* )(unsigned)piVar1[1];
    piVar2 = piVar1;
    iVar4 = *(le<int>* )(unsigned)piVar1[1];
  }
  iVar4 = (int)0x114;
  *piVar1 = *piVar1 + -1;
  piVar2[1] = *(le<int>* )(unsigned)(iVar4 + ar4);
  *(le<unsigned>* )(unsigned)(iVar4 + ar4) = ar5;
  return iVar4;
}

__asm__(".globl FUN_8c115ed8\n.set FUN_8c115ed8, FUN_8c115ed8_def\n");

}
