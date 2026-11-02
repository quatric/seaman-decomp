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
undefined4
s_E8101212_can_t_open_fad_d_ns_26338a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E8101212_can_t_open_fad_d_ns_26338a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  undefined4 ar6_00;
  
  iVar1 = ar5;
  ar6_00 = ar6;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f39ac(ar4,ar5,ar6,ar7));
  if (a4 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272f90)); unsigned long t1_ = (unsigned long)(ar4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c25ece6(0,iVar1,ar6_00,ar7); });
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26325e(a4,0,ar5 << 0xb,ar6));
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0143c0(iVar1 + 0x40,((undefined1 *)(unsigned)0x8c272fc8),0x20,ar6));
  }
  return iVar1;
}

__asm__(".globl _s_E8101212_can_t_open_fad_d_ns_26338a\n.set _s_E8101212_can_t_open_fad_d_ns_26338a, _s_E8101212_can_t_open_fad_d_ns_26338a_def\n");
