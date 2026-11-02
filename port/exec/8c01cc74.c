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
undefined4 FUN_8c01cc74_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01cc74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)(unsigned)0x8c2791b8 < 2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201994(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      uVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); unsigned long t2_ = (unsigned long)(0x113a); unsigned long t3_ = (unsigned long)(5); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)0x8c279274); unsigned long t5_ = (unsigned long)(ar4 + 3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c201a1a(*ar4,ar5,ar6,ar7); })
      ;
      *(undefined4 *)(unsigned)0x8c27926c = uVar1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201c3e(*(undefined4 *)(unsigned)0x8c27926c,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)0x8c279270 = uVar1;
      *(undefined4 *)(unsigned)0x8c2791b8 = 2;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01cc74\n.set _FUN_8c01cc74, _FUN_8c01cc74_def\n");
