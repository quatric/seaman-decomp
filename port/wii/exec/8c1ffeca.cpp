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
undefined4 FUN_8c1ffeca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ffeca");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  uint uVar2;
  int in_r3 = 0;
  int iVar3;
  int in_MACL = 0;
  
  piVar1 = 0x8c4783dc;
  iVar3 = 0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(in_MACL + in_r3 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0xc))))(*(le<undefined4>* )(unsigned)(in_MACL + in_r3 + 0x24),iVar3 << 1,ar6,ar7))
    ;
    if (((uVar2 & 0xffff) != 0xfffc) && ((uVar2 & 0xffff) != 0xffff)) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

__asm__(".globl FUN_8c1ffeca\n.set FUN_8c1ffeca, FUN_8c1ffeca_def\n");

}
