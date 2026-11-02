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
undefined4 FUN_8c1f34f4_def(le<int>* ar4,uint ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f34f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint a6;
  
  if ((ar4 == (le<int>* )(unsigned)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else if ((ar6 & 0x1f) == 0) {
    if ((ar5 & 0x1f) == 0) {
      if ((short)ar4[0x12] == 4) {
        a6 = ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar4 + 0xc) + 0xc))))(ar4[0xf],ar6,ar5,ar7));
        if (iVar2 == 0) {
          *(le<undefined2>* )(unsigned)((int)ar4 + 0x4a) = 1;
          ar4[8] = ar5;
          ar4[6] = 0;
          (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar4 + 0xc) + 0x40))))(0,ar6,a6,ar7));
          uVar1 = 0;
        }
        else if (iVar2 == -1) {
          uVar1 = 0xffffffe8;
        }
        else {
          uVar1 = 0xfffffff3;
        }
      }
      else {
        uVar1 = 0xffffffec;
      }
    }
    else {
      uVar1 = 0xfffffff1;
    }
  }
  else {
    uVar1 = 0xfffffff2;
  }
  return uVar1;
}

__asm__(".globl FUN_8c1f34f4\n.set FUN_8c1f34f4, FUN_8c1f34f4_def\n");

}
