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
int FUN_8c1f4574_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f4574";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *in_r2 = 0;
  undefined4 *ar6_00;
  
  if (*(int *)(unsigned)(ain0 + *in_r2) != 0) {
    ar6_00 = &s4;
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), vsprintf_like(0x8c4715b8,s0,ar6_00,ar7));
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c2739f8) != (code *)0x0) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c2739f8)))(0x8c4715b8,s0,ar6_00,ar7));
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f4574\n.set _FUN_8c1f4574, _FUN_8c1f4574_def\n");
