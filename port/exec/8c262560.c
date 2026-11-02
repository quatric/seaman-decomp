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
s_E9040825_adxf_is_NULL_ADXF_S_262560_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E9040825_adxf_is_NULL_ADXF_S_262560";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar4_00;
  undefined4 uVar1;
  int a6;
  int a7;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  uVar1 = 0;
  ar4_00 = 6;
  a6 = unaff_r14;
  a7 = unaff_r12;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c261a4c(6,0,unaff_r14,unaff_r12));
  if (unaff_r14 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2724ec)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c25ece6(ar4_00,uVar1,a6,a7); });
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(unsigned)(unaff_r14 + 1) == '\x02') {
      ar4_00 = unaff_r14;
      (vsp = ((unsigned long)(fr0_ - 4)), s_E9040822_adxf_is_NULL_ADXF_S_262408(unaff_r14,uVar1,a6,a7));
    }
    if (unaff_r13 == 0) {
      *(int *)(unsigned)(unaff_r14 + 0x18) = unaff_r12;
    }
    else if (unaff_r13 == 1) {
      *(int *)(unsigned)(unaff_r14 + 0x18) = *(int *)(unsigned)(unaff_r14 + 0x18) + unaff_r12;
    }
    else {
      if (unaff_r13 != 2) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272514)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c25ece6(ar4_00,uVar1,a6,a7); });
        goto LAB_8c2625b4;
      }
      *(int *)(unsigned)(unaff_r14 + 0x18) = *(int *)(unsigned)(unaff_r14 + 0x10) + unaff_r12;
    }
    if (*(int *)(unsigned)(unaff_r14 + 0x18) < 0) {
      *(undefined4 *)(unsigned)(unaff_r14 + 0x18) = 0;
    }
    else if (*(int *)(unsigned)(unaff_r14 + 0x10) < *(int *)(unsigned)(unaff_r14 + 0x18)) {
      *(undefined4 *)(unsigned)(unaff_r14 + 0x18) = *(undefined4 *)(unsigned)(unaff_r14 + 0x10);
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c261a4c(6,1,unaff_r14,unaff_r12));
    uVar1 = *(undefined4 *)(unsigned)(unaff_r14 + 0x18);
  }
  return uVar1;
}

__asm__(".globl _s_E9040825_adxf_is_NULL_ADXF_S_262560\n.set _s_E9040825_adxf_is_NULL_ADXF_S_262560, _s_E9040825_adxf_is_NULL_ADXF_S_262560_def\n");
