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
int FUN_8c0ceff8_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ceff8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  int iVar2;
  
  if (*ar4 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(0x14c + (int)ar4);
    if (iVar1 == 0) {
      if (ar5 == 1) {
        *(le<short>* )(unsigned)(0x144 + (int)ar4) = *(le<short>* )(unsigned)(0x144 + (int)ar4) + 1;
      }
      if (ar5 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(ar4,0,ar6,ar7));
      }
      else {
        iVar1 = 0x96;
        if (0x96 < *(le<short>* )(unsigned)(0x144 + (int)ar4)) {
          *(le<undefined2>* )(unsigned)(0x146 + (int)ar4) = 0;
          *(le<undefined2>* )(unsigned)(0x144 + (int)ar4) = 0;
          *(le<undefined2>* )(unsigned)(0x148 + (int)ar4) = 0;
          *(le<undefined4>* )(unsigned)(0x150 + (int)ar4) = 0;
          iVar1 = 0x14c;
          *(le<undefined4>* )(unsigned)(0x14c + (int)ar4) = 1;
        }
      }
    }
    else {
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0cf1e4))))
                          (ar4,ar4 + *(le<short>* )(unsigned)(0x148 + (int)ar4) * 5 + 1,
                           (int)*(le<short>* )(unsigned)(0x148 + (int)ar4),ar7));
        if (iVar1 == 5) {
          *(le<short>* )(unsigned)(0x148 + (int)ar4) = *(le<short>* )(unsigned)(0x148 + (int)ar4) + 1;
          iVar2 = 0x14c;
          iVar1 = (int)*(le<short>* )(unsigned)(0x148 + (int)ar4);
          if (*(le<short>* )(unsigned)(0x148 + (int)ar4) == 0x10) {
            *(le<undefined4>* )(unsigned)(0x14c + (int)ar4) = 2;
            iVar1 = iVar2;
          }
        }
        if (ar5 != 0) {
          return iVar1;
        }
        *(le<undefined4>* )(unsigned)(0x14c + (int)ar4) = 3;
      }
      else {
        if (iVar1 == 2) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(ar4,ar5,ar6,ar7));
          *ar4 = 1;
          return 1;
        }
        if (iVar1 != 3) {
          return iVar1;
        }
      }
      iVar2 = (int)*(le<short>* )(unsigned)(0x148 + (int)ar4);
      ar5_00 = ar4 + *(le<short>* )(unsigned)(0x148 + (int)ar4) * 5 + 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf39c(ar4,ar5_00,iVar2,ar7));
      if (iVar1 == 2) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(ar4,ar5_00,iVar2,ar7));
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0ceff8\n.set FUN_8c0ceff8, FUN_8c0ceff8_def\n");

}
