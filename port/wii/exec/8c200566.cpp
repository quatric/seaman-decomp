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
undefined4 FUN_8c200566_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200566");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 a6;
  int iVar2;
  int iVar3;
  byte *a4;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  a4 = ((byte *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x28));
  iVar3 = 0;
  a6 = ar6;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004a0(ar5,a4 + 4,a6,ar7)), iVar1 != 0)) break;
    a4 = a4 + 0x20;
    iVar3 = iVar3 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004ea(a4,ar6,a6,ar7));
  return iVar3;
}

__asm__(".globl FUN_8c200566\n.set FUN_8c200566, FUN_8c200566_def\n");

}
