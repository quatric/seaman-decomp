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
int FUN_8c2620c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2620c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  int iVar1;
  undefined4 in_PR = 0;
  
  ar5_00 = 0;
  ar4_00 = 2;
  ar6_00 = unaff_r12;
  ar7_00 = unaff_r13;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c261a4c(2,0,unaff_r12,unaff_r13));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00); });
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar7_00));
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = unaff_r12, ar6_00 = unaff_r13, ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262078(a4,unaff_r12,unaff_r13,ar7_00)),
     ar4_00 < 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262168(a4,ar5_00,ar6_00,ar7_00));
    iVar1 = 0;
    ar4_00 = a4;
  }
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c261a4c(2,1,unaff_r12,unaff_r13));
  return iVar1;
}

__asm__(".globl _FUN_8c2620c8\n.set _FUN_8c2620c8, _FUN_8c2620c8_def\n");
