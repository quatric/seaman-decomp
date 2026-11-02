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
int FUN_8c10ec78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ec78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c10dda0))); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c10df48)); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c10ea62)); unsigned long t3_ = (unsigned long)(
                     (int)0x138); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,3,ar7); });
  if (iVar1 != 0) {
    *(undefined4 *)(unsigned)(iVar1 + 0x70) = 0;
    *(undefined4 *)(unsigned)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(unsigned)(iVar1 + 0x84) = 0;
    *(undefined4 *)(unsigned)(iVar1 + 0x88) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10ec78\n.set _FUN_8c10ec78, _FUN_8c10ec78_def\n");
