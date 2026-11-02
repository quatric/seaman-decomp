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
int s_E1209_mwRnaPause_Time_out_of_26908e_def
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1209_mwRnaPause_Time_out_of_26908e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 s4;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c2785d4) = 0;
  for (iVar2 = 0; ar4_00 = 0, s4 = ar4, iVar2 < 200; iVar2 = iVar2 + 1) {
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268e1a(ar4,ar5,ar6,ar7));
    ar4_00 = ar4;
    if (ain0 == 1) break;
    iVar1 = 5000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2785d4) = (*(undefined4 *)(unsigned)(unsigned)0x8c2785d4) + 1;
    ar4 = s4;
  }
  if (iVar2 == 200) {
    ain0 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2732ec)); unsigned long t1_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(ar4_00,ar5,ar6,ar7); });
  }
  return ain0;
}

__asm__(".globl _s_E1209_mwRnaPause_Time_out_of_26908e\n.set _s_E1209_mwRnaPause_Time_out_of_26908e, _s_E1209_mwRnaPause_Time_out_of_26908e_def\n");
