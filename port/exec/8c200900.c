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
undefined4 FUN_8c200900_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200900";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int a5;
  int iVar1;
  int unaff_r11 = 0;
  undefined4 unaff_r13 = 0;
  
  while( true ) {
    a5 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200890(unaff_r13,unaff_r11,ar6,ar7));
    if (a5 < 0) {
      return 0xffffffff;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20093a(unaff_r13,a5,ar6,ar7));
    if (-1 < iVar1) break;
    ar6 = unaff_r11 + -2;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20099e(unaff_r13,a5,unaff_r11 + -2,ar7));
  }
  return a5;
}

__asm__(".globl _FUN_8c200900\n.set _FUN_8c200900, _FUN_8c200900_def\n");
