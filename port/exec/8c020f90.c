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
int FUN_8c020f90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020f90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(undefined4 *)(fr0_ - 0x1c)) = ar7;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xe,*(undefined4 *)(unsigned)(ar4 + 0x2c),ar5); });
  if (iVar1 == 1) {
    (*(int *)(fr0_ - 0x18)) = iVar1;
    ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 28)) - 8); FUN_8c0208ec(ar4,0xe,ar4 + 0x2c,ar5); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c020f90\n.set _FUN_8c020f90, _FUN_8c020f90_def\n");
