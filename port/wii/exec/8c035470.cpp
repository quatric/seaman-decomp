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
undefined4 FUN_8c035470_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035470");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x180 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8)))))
                    (*(le<int>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (iVar1 != 2) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar5,ar6,ar7));
    ar5 = 0x3c;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar3 & 0xffff,0x3c,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
  if (iVar1 < 8) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
    if ((iVar1 < 7) || ((uVar3 & 0xffff) < 10)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
      if ((iVar1 < 6) || ((uVar3 & 0xffff) < 0xc)) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
        if ((iVar1 < 5) || ((uVar3 & 0xffff) < 0xf)) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
          if ((iVar1 < 4) || ((uVar3 & 0xffff) < 0x14)) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c035470\n.set FUN_8c035470, FUN_8c035470_def\n");

}
