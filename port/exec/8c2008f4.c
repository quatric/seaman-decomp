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
undefined4 FUN_8c2008f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2008f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar5_00;
  int ar5_01;
  int iVar1;
  int ar6_00;
  
  ar5_00 = 0xfffc;
  ar6_00 = 0xfffc + -2;
  while( true ) {
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200890(ar4,ar5_00,ar6,ar7));
    if (ar5_01 < 0) {
      return 0xffffffff;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20093a(ar4,ar5_01,ar6,ar7));
    if (-1 < iVar1) break;
    ar6 = ar6_00;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20099e(ar4,ar5_01,ar6_00,ar7));
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c2008f4\n.set _FUN_8c2008f4, _FUN_8c2008f4_def\n");
