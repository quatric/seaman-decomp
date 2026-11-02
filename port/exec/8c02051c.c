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
int FUN_8c02051c_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02051c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int iVar1;
  
  if (ar6 == 0) {
    ar6_00 = 0;
  }
  else {
    do {
      ar6_00 = ar6;
      if (ar6_00 == 0) {
        return 0;
      }
      ar6 = *(int *)(unsigned)(ar6_00 + 4);
      iVar1 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); });
    } while (iVar1 != 1);
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c02051c\n.set _FUN_8c02051c, _FUN_8c02051c_def\n");
