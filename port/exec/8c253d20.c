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
uint FUN_8c253d20_def(undefined4 ar4,uint ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c253d20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  do {
    uVar1 = *unaff_r14 & 7;
    if (uVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256328(0,ar5,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
      if ((*unaff_r14 & 0x20) == 0) {
        ar5 = unaff_r14[5];
        ar7 = unaff_r14[7];
        ar6 = unaff_r14[6];
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
      }
      else {
        ar5 = unaff_r14[5];
        ar6 = unaff_r14[6];
        ar7 = unaff_r14[7];
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256e18(0,ar5,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256fec(0,ar5,ar6,ar7));
      if ((*unaff_r14 & 8) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
      }
      if ((*unaff_r14 & 0x10) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
      }
LAB_8c253fa8:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
    }
    else {
      if (uVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256328(0,ar5,ar6,ar7));
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256e18(0,ar5,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256fec(0,ar5,ar6,ar7));
        if ((*unaff_r14 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 2) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256328(0,ar5,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256fec(0,ar5,ar6,ar7));
        if ((*unaff_r14 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256328(0,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256fec(0,ar5,ar6,ar7));
        if ((*unaff_r14 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256328(0,ar5,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256e18(0,ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 5) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256328(0,ar5,ar6,ar7));
        if ((*unaff_r14 & 0x20) == 0) {
          ar5 = unaff_r14[5];
          ar7 = unaff_r14[7];
          ar6 = unaff_r14[6];
          ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
        }
        else {
          ar5 = unaff_r14[5];
          ar6 = unaff_r14[6];
          ar7 = unaff_r14[7];
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256e18(0,ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 6) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256328(0,ar5,ar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
        if ((*unaff_r14 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 7) {
        uVar1 = *unaff_r14;
        if ((uVar1 & 8) == 0) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(unaff_r14[1],ar5,ar6,ar7));
        }
        if ((*unaff_r14 & 0x10) == 0) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(unaff_r14[0xb],ar5,ar6,ar7));
        }
      }
    }
    unaff_r14 = (uint *)(unsigned)unaff_r14[0xc];
    if (unaff_r14 == (uint *)(unsigned)0x0) {
      return uVar1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c253d20\n.set _FUN_8c253d20, _FUN_8c253d20_def\n");
