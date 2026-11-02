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
uint FUN_8c253d1c_def(uint *ar4,uint ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c253d1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  
  do {
    uVar1 = *ar4 & 7;
    if (uVar1 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
      uVar2 = ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
      if ((*ar4 & 0x20) == 0) {
        ar5 = ar4[5];
        ar7 = ar4[7];
        ar6 = ar4[6];
        ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
      }
      else {
        ar5 = ar4[5];
        ar6 = ar4[6];
        ar7 = ar4[7];
        ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256e18(0,ar5,ar6,ar7); });
      }
      ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(0,ar5,ar6,ar7); });
      if ((*ar4 & 8) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
      }
      if ((*ar4 & 0x10) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
      }
LAB_8c253fa8:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
    }
    else {
      if (uVar1 == 1) {
        uVar2 = ({ unsigned long ri0_ = (unsigned long)(1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
        if ((*ar4 & 0x20) == 0) {
          ar5 = ar4[5];
          ar7 = ar4[7];
          ar6 = ar4[6];
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
        }
        else {
          ar5 = ar4[5];
          ar6 = ar4[6];
          ar7 = ar4[7];
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256e18(0,ar5,ar6,ar7); });
        }
        ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(0,ar5,ar6,ar7); });
        if ((*ar4 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
        }
        if ((*ar4 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 2) {
        ({ unsigned long ri0_ = (unsigned long)(2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(0,ar5,ar6,ar7); });
        if ((*ar4 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
        }
        if ((*ar4 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 3) {
        ({ unsigned long ri0_ = (unsigned long)(3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(0,ar5,ar6,ar7); });
        if ((*ar4 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
        }
        if ((*ar4 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 4) {
        ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
        uVar2 = ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
        if ((*ar4 & 0x20) == 0) {
          ar5 = ar4[5];
          ar7 = ar4[7];
          ar6 = ar4[6];
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
        }
        else {
          ar5 = ar4[5];
          ar6 = ar4[6];
          ar7 = ar4[7];
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256e18(0,ar5,ar6,ar7); });
        }
        if ((*ar4 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
        }
        if ((*ar4 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 5) {
        uVar2 = ({ unsigned long ri0_ = (unsigned long)(5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
        if ((*ar4 & 0x20) == 0) {
          ar5 = ar4[5];
          ar7 = ar4[7];
          ar6 = ar4[6];
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5,ar6,ar7); });
        }
        else {
          ar5 = ar4[5];
          ar6 = ar4[6];
          ar7 = ar4[7];
          ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256e18(0,ar5,ar6,ar7); });
        }
        if ((*ar4 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
        }
        if ((*ar4 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 6) {
        ({ unsigned long ri0_ = (unsigned long)(6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
        if ((*ar4 & 8) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
        }
        if ((*ar4 & 0x10) == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
        }
        goto LAB_8c253fa8;
      }
      if (uVar1 == 7) {
        uVar1 = *ar4;
        if ((uVar1 & 8) == 0) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254026(ar4[1],ar5,ar6,ar7));
        }
        if ((*ar4 & 0x10) == 0) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4[0xb],ar5,ar6,ar7));
        }
      }
    }
    ar4 = (uint *)(unsigned)(uint)ar4[0xc];
    if (ar4 == (uint *)(unsigned)0x0) {
      return uVar1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c253d1c\n.set _FUN_8c253d1c, _FUN_8c253d1c_def\n");
