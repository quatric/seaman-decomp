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
int FUN_8c02009c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02009c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  
  ar4[1] = 0;
  *ar4 = 0;
  iVar1 = 0;
  if (ar4[8] != 0) {
    for (ar5_00 = (le<int>* )(unsigned)(uint)ar4[8]; ar5_00[1] != 0; ar5_00 = (le<int>* )(unsigned)ar5_00[1]) {
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020148(ar4,ar5_00 + 0xc,ar6,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,ar5_00,ar6,ar7));
    }
    else {
      iVar1 = *ar5_00;
      if (iVar1 == 0xb) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02041c(ar4,ar5_00,ar6,ar7));
      }
      else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
        iVar1 = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0202c0(ar4,ar5_00,ar6,ar7));
      }
      if (iVar1 == 1) {
        ar4[1] = ar5_00;
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c02009c\n.set FUN_8c02009c, FUN_8c02009c_def\n");

}
