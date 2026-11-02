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
undefined4 FUN_8c01f9c4_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c01f9c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int unaff_r13 = 0;
  
  iVar1 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 4));
  if (iVar1 == 0xc) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3a2(*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8),ar5,ar6,ar7));
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xd) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c256164))))
                      (*(le<int>* )(unsigned)(ar4 + 4) + 0x10,*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8),ar6,ar7));
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xe) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c239212))))
                      (*(le<int>* )(unsigned)(ar4 + 4) + 0x10,*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8),ar6,ar7));
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  if (unaff_r13 == 1) {
    ar7 = *(le<int>* )(unsigned)(ar4 + 4) + 0x10;
    ({ unsigned long t0_ = (unsigned long)(*(le<int>* )(unsigned)(ar4 + 4) + 0x30); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020600(ar4,*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 4)),ar4 + 0x20,ar7); });
    ar6 = *(le<undefined4>* )(unsigned)(ar4 + 4);
    iVar1 = ar4 + 0x2c;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,iVar1,ar6,ar7));
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,iVar1,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02009c(ar4,iVar1,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c01f9c4\n.set FUN_8c01f9c4, FUN_8c01f9c4_def\n");

}
