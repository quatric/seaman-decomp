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
undefined4 FUN_8c1f4a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f4a00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int iVar2;
  le<int>* piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = 0x8c4727b4;
  iVar2 = (int)0xfcc;
  iVar4 = *(le<undefined4>* )(unsigned)0x8c4727b4;
  iVar5 = (int)0x700;
  *(le<int>* )(unsigned)(iVar2 + iVar4) = *(le<int>* )(unsigned)(iVar2 + iVar4) + *(le<int>* )(unsigned)(iVar2 + 0xc + iVar4) * 4;
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + *piVar1));
  iVar2 = 0;
  if (0 < ar4) {
    do {
      iVar2 = iVar2 + 1;
      *piVar3 = iVar5;
      piVar3 = piVar3 + 1;
    } while (iVar2 < ar4);
  }
  iVar2 = (int)0xfd8;
  *(le<int>* )(unsigned)(iVar2 + *piVar1) = ar4;
  iVar2 = iVar2 + 4;
  *(le<int>* )(unsigned)(iVar2 + *piVar1) = *(le<int>* )(unsigned)(iVar2 + *piVar1) + ar4 * 4;
  return 0;
}

__asm__(".globl FUN_8c1f4a00\n.set FUN_8c1f4a00, FUN_8c1f4a00_def\n");

}
