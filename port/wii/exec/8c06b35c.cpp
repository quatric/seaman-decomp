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
int FUN_8c06b35c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b35c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint ar5_00;
  
  ar5_00 = 1;
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
    uVar2 = (*(le<uint>* )(unsigned)(0x214 + ar4) | 0x1ab) & ar5_00;
    if ((uVar2 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) {
      ar5 = ar5 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar2 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) && (0 < ar5));
  if (ar5 < 1) {
    iVar1 = -1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06b25c(ar4,ar5_00,ar6,ar7));
    iVar1 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c06b35c\n.set FUN_8c06b35c, FUN_8c06b35c_def\n");

}
