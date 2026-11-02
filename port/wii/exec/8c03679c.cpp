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
int FUN_8c03679c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03679c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feef8))))
                      (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),
                       *(le<undefined4>* )(unsigned)(0x1134 + ar4 + iVar3 * 4),ar6,ar7));
    if ((iVar1 == 1) && (*(le<int>* )(unsigned)(0x1134 + ar4 + iVar3 * 4) != 0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feeb0))))
                        (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar4 + iVar3 * 4 + 0x1134,ar6,ar7))
      ;
      *(le<undefined4>* )(unsigned)(0x111c + ar4 + iVar3 * 4) = uVar2;
    }
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feef8))))
                    (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),*(le<undefined4>* )(unsigned)(0x1148 + ar4),ar6,ar7
                    ));
  if ((iVar3 == 1) && (iVar3 = 0, *(le<int>* )(unsigned)(0x1148 + ar4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feeb0))))
                      (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar4 + 0x1148,ar6,ar7));
    iVar3 = 0x1130;
    *(le<undefined4>* )(unsigned)(0x1130 + ar4) = uVar2;
  }
  return iVar3;
}

__asm__(".globl FUN_8c03679c\n.set FUN_8c03679c, FUN_8c03679c_def\n");

}
