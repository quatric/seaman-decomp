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
undefined4 FUN_8c1f3416_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f3416");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  
  if ((ar4 == (le<int>* )(unsigned)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(le<int>* )(unsigned)(*ar4 + 0x1c) == 0) {
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 == 0) {
        ar4[6] = 0;
        *(le<undefined2>* )(unsigned)(ar4 + 0x14) = 1;
        return 0;
      }
      iVar2 = ar5;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar4 + 0xc) + 8))))(a4,ar5,ar6,ar7));
      if (iVar1 != 0) {
        *(le<unsigned>* )(unsigned)(*ar4 + 0x1c) = ar4;
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(le<undefined2>* )(unsigned)(ar4 + 0x14) = 2;
        *(le<undefined2>* )(unsigned)((int)ar4 + 0x4a) = 1;
        *(le<undefined2>* )(unsigned)(ar4 + 0x12) = 4;
        ar4[8] = 0;
        ar4[6] = 0;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar4 + 0xc) + 0x40))))(a4,iVar2,ar6,ar7));
        return ar5;
      }
      *(le<undefined2>* )(unsigned)(ar4 + 0x14) = 1;
    }
    else {
      ar4[6] = 0;
      *(le<undefined2>* )(unsigned)(ar4 + 0x14) = 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c1f3416\n.set FUN_8c1f3416, FUN_8c1f3416_def\n");

}
