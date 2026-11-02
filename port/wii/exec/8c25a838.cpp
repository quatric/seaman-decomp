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
int FUN_8c25a838_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a838");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int ain0;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  
  ar6_00 = (fr0_ + (int)0xffffffd8);
  ar5_00 = *(le<undefined4>* )(unsigned)(ar4 + 4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c25afc0(ar5,ar5_00,(fr0_ + (int)0xffffffd8),ar7));
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    (*(le<int>* )(fr0_ - 0x28)) = (*(le<int>* )(fr0_ - 0x28)) + -8;
    if (iVar1 < (*(le<int>* )(fr0_ - 0x28))) {
      ain0 = (*(le<int>* )(fr0_ - 0x28)) - iVar1;
      (*(le<int>* )(fr0_ - 0x28)) = iVar1;
    }
    else {
      ain0 = 0;
    }
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c236278((*(le<int>* )(fr0_ - 0x28)),ar5_00,ar6_00,ar7));
    if (ar4_00 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 7;
      iVar1 = -7;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c259c48(ar4_00,(*(le<int>* )(fr0_ - 0x28)),ar6_00,ar7));
      if (iVar1 < 0) {
        iVar1 = -5;
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c1f9e32(ar4_00,(*(le<int>* )(fr0_ - 0x28)),ar6_00,ar7); });
        if (0 < ain0) {
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c25a122(ain0,1,ar6_00,ar7));
        }
        iVar1 = 1;
        *ar5 = ar4_00;
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c25a838\n.set FUN_8c25a838, FUN_8c25a838_def\n");

}
