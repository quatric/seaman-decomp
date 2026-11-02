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
undefined4 FUN_8c262554_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262554";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar4_00;
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  undefined4 in_PR = 0;
  
  uVar1 = 0;
  ar4_00 = 6;
  ar6_00 = ar4;
  ar7_00 = ar5;
  ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c261a4c(6,0,ar4,ar5); });
  if (ar4 == 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2724ec)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00); });
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(unsigned)(ar4 + 1) == '\x02') {
      ar4_00 = ar4;
      (vsp = ((unsigned long)(fr0_ - 4)), s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,uVar1,ar6_00,ar7_00));
    }
    if (ar6 == 0) {
      *(int *)(unsigned)(ar4 + 0x18) = ar5;
    }
    else if (ar6 == 1) {
      *(int *)(unsigned)(ar4 + 0x18) = *(int *)(unsigned)(ar4 + 0x18) + ar5;
    }
    else {
      if (ar6 != 2) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272514)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00); });
        goto LAB_8c2625b4;
      }
      *(int *)(unsigned)(ar4 + 0x18) = *(int *)(unsigned)(ar4 + 0x10) + ar5;
    }
    if (*(int *)(unsigned)(ar4 + 0x18) < 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
    }
    else if (*(int *)(unsigned)(ar4 + 0x10) < *(int *)(unsigned)(ar4 + 0x18)) {
      *(undefined4 *)(unsigned)(ar4 + 0x18) = *(undefined4 *)(unsigned)(ar4 + 0x10);
    }
    ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c261a4c(6,1,ar4,ar5); });
    uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x18);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c262554\n.set _FUN_8c262554, _FUN_8c262554_def\n");
