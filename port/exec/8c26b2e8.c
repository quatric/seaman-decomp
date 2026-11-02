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
undefined4 FUN_8c26b2e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26b2e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  
  if (in_r0 == 1) {
    return *(undefined4 *)(unsigned)(ar4 + 0xc);
  }
  if ((ar5 != 0) && (*(int *)(unsigned)(ar4 + 0x1c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(*(undefined4 *)(unsigned)(ar4 + 0x20),0xfffffffd,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c26b2e8\n.set _FUN_8c26b2e8, _FUN_8c26b2e8_def\n");
