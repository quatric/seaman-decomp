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
undefined4 FUN_8c1f5c04_def(undefined4 ar4,undefined4 ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c1f5c04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  int a5;
  undefined4 uVar3;
  
  (*(le<undefined4>* )(fr0_ - 0xc)) = ar4;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f5a30(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  piVar2 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f5a5e(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  a5 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f5a86((*(le<undefined4>* )(fr0_ - 0xc)),ar5,ar6,ar7));
  if (a5 < 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    *piVar2 = *piVar2 + -1;
    for (; a5 < *piVar2; a5 = a5 + 1) {
      ar7 = piVar2 + 2;
      piVar2[a5 * 2 + 2] = piVar2[(a5 + 1) * 2 + 2];
      ar7[a5 * 2 + 1] = ar7[(a5 + 1) * 2 + 1];
    }
    iVar1 = a5 * 2;
    ar6 = piVar2 + a5 * 2 + 2;
    a5 = 0;
    piVar2[iVar1 + 2] = 0;
    ar6[1] = 0;
    uVar3 = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f5a48(((undefined1 *)(fr0_ - 0x14)),a5,ar6,ar7));
  return uVar3;
}

__asm__(".globl FUN_8c1f5c04\n.set FUN_8c1f5c04, FUN_8c1f5c04_def\n");

}
