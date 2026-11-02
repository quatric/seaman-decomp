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
undefined4 FUN_8c1f22b2_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f22b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int in_r3 = 0;
  int iVar1;
  undefined4 a5;
  int a7;
  int unaff_r13 = 0;
  int a4;
  
  if (unaff_r13 < in_r3) {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f175c(0xffffffe0,ar5,ar6,ar7));
  }
  else {
    a4 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0)[6];
    a7 = ar5 << 0xb;
    for (iVar1 = 0; iVar1 < *((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0); iVar1 = iVar1 + 1) {
      if (*(short *)(unsigned)(a4 + 0x4c) == 0) {
        a5 = 0;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f21bc(a4,0,unaff_r13,a7));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f175c(0,a5,unaff_r13,a7));
        return a4;
      }
      a4 = a4 + 0x54;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f175c(0xfffffff7,ar5,((undefined4 *)(unsigned long)*(unsigned *)0x8c2739e0),ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c1f22b2\n.set _FUN_8c1f22b2, _FUN_8c1f22b2_def\n");
