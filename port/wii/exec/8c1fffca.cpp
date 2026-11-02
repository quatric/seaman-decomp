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
undefined4 FUN_8c1fffca_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fffca");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  ar5_00 = 0;
  do {
    if (*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 + 0x1c)) + 1 <= ar5_00) {
      return 0;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2009d0(ar4,ar5_00,ar6,ar7));
    uVar1 = uVar1 & 0xffff;
    if (((uVar1 != 0xfffc) && (uVar1 != 0xffff)) && (uVar1 != 0xfffa)) {
      if (ar5_00 < *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x30)) {
        iVar2 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x30);
      }
      else {
        iVar2 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 + 0x1c)) + 1;
      }
      if (iVar2 <= (int)uVar1) {
        return 0xffffffff;
      }
    }
    ar5_00 = ar5_00 + 1;
  } while( true );
}

__asm__(".globl FUN_8c1fffca\n.set FUN_8c1fffca, FUN_8c1fffca_def\n");

}
