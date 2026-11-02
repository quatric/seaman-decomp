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
undefined4 FUN_8c2110e8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2110e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined *puVar2;
  le<undefined4>* puVar3;
  
  puVar2 = ((void *)(unsigned)0x8c207300);
  piVar1 = 0x8c4aa220;
  puVar3 = (le<undefined4>* )(unsigned)(ar4 * 4 + *(le<undefined4>* )(unsigned)0x8c4aa21c);
  *(le<undefined4>* )(unsigned)0x8c4aa220 = (int)puVar3;
  ((le<undefined4>* )(fr0_ - 0xc))[0] = ar5;
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar2)))(*puVar3,((le<undefined4>* )(fr0_ - 0xc)),4,ar7));
  *(le<int>* )(unsigned)*piVar1 = *(le<int>* )(unsigned)*piVar1 + ar6 * 4;
  return 0;
}

__asm__(".globl FUN_8c2110e8\n.set FUN_8c2110e8, FUN_8c2110e8_def\n");

}
