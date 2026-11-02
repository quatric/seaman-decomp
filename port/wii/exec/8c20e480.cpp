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
undefined4 FUN_8c20e480_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e480");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<int>* piVar4;
  int iVar5;
  
  piVar4 = (le<int>* )(unsigned)(ar5 * 4 + ar4);
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  iVar5 = piVar4[2];
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 2) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 3)) {
    if (((*(le<int>* )(unsigned)(iVar3 + 8) == 0) &&
        (((((*(le<int>* )(unsigned)(iVar3 + 0x20) == 2 || (*(le<int>* )(unsigned)(iVar3 + 0x20) == 3)) &&
           (*(le<int>* )(unsigned)(iVar3 + 0x54) == 1)) &&
          ((*(le<int>* )(unsigned)(iVar3 + 0x2c) == 10 && (*(le<int>* )(unsigned)(iVar3 + 0x30) == 0xb)))) &&
         (*(le<int>* )(unsigned)(iVar3 + 0x34) == 0)))) && (*(le<int>* )(unsigned)(iVar3 + 0x38) == 0)) {
      if (iVar2 != 0) {
        if (((*(le<int>* )(unsigned)(iVar2 + 8) != 2) ||
            ((*(le<int>* )(unsigned)(iVar2 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar2 + 0x20) != 3)))) ||
           ((*(le<int>* )(unsigned)(iVar2 + 0x54) != 3 ||
            ((((*(le<int>* )(unsigned)(iVar2 + 0x2c) != 10 || (*(le<int>* )(unsigned)(iVar2 + 0x30) != 10)) ||
              (*(le<int>* )(unsigned)(iVar2 + 0x34) != 0)) || (*(le<int>* )(unsigned)(iVar2 + 0x38) != 0))))))
        goto LAB_8c20e580;
        goto LAB_8c20e514;
      }
LAB_8c20e5bc:
      *ar6 = ar5 + 2;
    }
    else {
LAB_8c20e514:
      if ((((*(le<int>* )(unsigned)(iVar3 + 8) != 2) ||
           ((*(le<int>* )(unsigned)(iVar3 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar3 + 0x20) != 3)))) ||
          (*(le<int>* )(unsigned)(iVar3 + 0x54) != 1)) ||
         (((*(le<int>* )(unsigned)(iVar3 + 0x2c) != 10 || (*(le<int>* )(unsigned)(iVar3 + 0x30) != 0xb)) ||
          ((*(le<int>* )(unsigned)(iVar3 + 0x34) != 0 || (*(le<int>* )(unsigned)(iVar3 + 0x38) != 1)))))) goto LAB_8c20e600;
      if (iVar2 == 0) goto LAB_8c20e5bc;
      if (((*(le<int>* )(unsigned)(iVar2 + 8) != 2) ||
          (((*(le<int>* )(unsigned)(iVar2 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar2 + 0x20) != 3)) ||
           (*(le<int>* )(unsigned)(iVar2 + 0x54) != 3)))) ||
         (((*(le<int>* )(unsigned)(iVar2 + 0x2c) != 10 || (*(le<int>* )(unsigned)(iVar2 + 0x30) != 10)) ||
          ((*(le<int>* )(unsigned)(iVar2 + 0x34) != 0 || (*(le<int>* )(unsigned)(iVar2 + 0x38) != 1)))))) {
LAB_8c20e580:
        *ar6 = ar5 + 2;
        return 0xc;
      }
      if (iVar5 != 0) {
        if (((*(le<int>* )(unsigned)(iVar5 + 8) != 2) ||
            ((*(le<int>* )(unsigned)(iVar5 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar5 + 0x20) != 3)))) ||
           ((*(le<int>* )(unsigned)(iVar5 + 0x54) != 3 ||
            ((*(le<int>* )(unsigned)(iVar5 + 0x34) != 1 || (*(le<int>* )(unsigned)(iVar5 + 0x38) != 0)))))) {
          *ar6 = ar5 + 3;
          return 0xc;
        }
        goto LAB_8c20e600;
      }
      *ar6 = ar5 + 3;
    }
    uVar1 = 1;
  }
  else {
LAB_8c20e600:
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20e480\n.set FUN_8c20e480, FUN_8c20e480_def\n");

}
