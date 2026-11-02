#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a838_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25a838";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int ain0;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  
  ar6_00 = (fr0_ + (int)0xffffffd8);
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c25afc0(ar5,ar5_00,(fr0_ + (int)0xffffffd8),ar7));
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + -8;
    if (iVar1 < (*(int *)(fr0_ - 0x28))) {
      ain0 = (*(int *)(fr0_ - 0x28)) - iVar1;
      (*(int *)(fr0_ - 0x28)) = iVar1;
    }
    else {
      ain0 = 0;
    }
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c236278((*(int *)(fr0_ - 0x28)),ar5_00,ar6_00,ar7));
    if (ar4_00 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 7;
      iVar1 = -7;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c259c48(ar4_00,(*(int *)(fr0_ - 0x28)),ar6_00,ar7));
      if (iVar1 < 0) {
        iVar1 = -5;
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c1f9e32(ar4_00,(*(int *)(fr0_ - 0x28)),ar6_00,ar7); });
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

__asm__(".globl _FUN_8c25a838\n.set _FUN_8c25a838, _FUN_8c25a838_def\n");
