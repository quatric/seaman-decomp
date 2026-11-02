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
uint FUN_8c20094e_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20094e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *piVar1;
  byte *a4;
  uint uVar2;
  int in_r3 = 0;
  undefined4 unaff_r12 = 0;
  int unaff_r14 = 0;
  int in_MACL = 0;
  
  piVar1 = 0x8c4783dc;
  while( true ) {
    if (*(int *)(unsigned)(*(int *)(unsigned)(in_MACL + in_r3 + 0x1c) + 0x30) <= unaff_r14) {
      return ar5 & 0xffff;
    }
    a4 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200a84(unaff_r12,unaff_r14,ar6,ar7));
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0xc))))(a4,2,ar6,ar7)), (ar5 & 0xffff) == (uVar2 & 0xffff)))
    break;
    unaff_r14 = unaff_r14 + 1;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c20094e\n.set _FUN_8c20094e, _FUN_8c20094e_def\n");
