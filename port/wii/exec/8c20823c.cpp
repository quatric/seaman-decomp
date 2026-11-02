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
int FUN_8c20823c_def(uint ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20823c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0x8c4a9c50;
  if ((0x2000000 & ar4) != 0) {
    iVar2 = ar5;
    if ((ar4 & 0x400000) == 0) {
      *(le<uint>* )(unsigned)(0x8c4a9c50 + ar5 * 4) = 0xffff0000 & ar6;
      ar6 = ar6 << 0x10;
      iVar2 = ar5 + 1;
    }
    ar5 = iVar2 + 1;
    *(le<uint>* )(unsigned)(iVar1 + iVar2 * 4) = ar6;
  }
  return ar5;
}

__asm__(".globl FUN_8c20823c\n.set FUN_8c20823c, FUN_8c20823c_def\n");

}
