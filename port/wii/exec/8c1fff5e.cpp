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
undefined4 FUN_8c1fff5e_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fff5e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *a4;
  
  piVar1 = 0x8c4783dc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  a4 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 + 0x28));
  iVar4 = 0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x30) <= iVar4) {
      return 0;
    }
    if ((*a4 != '\0') &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0xc))))(a4,2,ar6,ar7)), (uVar2 & 0xffff) == ar5)) break;
    a4 = a4 + 0x20;
    iVar4 = iVar4 + 1;
  }
  return a4;
}

__asm__(".globl FUN_8c1fff5e\n.set FUN_8c1fff5e, FUN_8c1fff5e_def\n");

}
