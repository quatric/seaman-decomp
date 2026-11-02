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
undefined4 FUN_8c1b94ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b94ce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short *in_r1 = (short *)(unsigned long)vin1;
  char in_S = 0;
  undefined4 in_MACH = 0;
  undefined4 in_MACL = 0;
  
  if (in_S != '\0') {
    mac_wOp(CONCAT44(in_MACH,in_MACL),(int)*in_r1 * (int)*in_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b94ce\n.set _FUN_8c1b94ce, _FUN_8c1b94ce_def\n");
