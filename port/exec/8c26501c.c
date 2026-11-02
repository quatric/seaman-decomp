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
uint FUN_8c26501c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26501c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int ar7_00;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int ain0;
  
  if (*(int *)(unsigned)(ar4 + 0xc) == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 2;
  }
  uVar1 = *(uint *)(unsigned)(ar4 + 0xc);
  if (uVar1 == 2) {
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      uVar1 = ({ unsigned long t0_ = (unsigned long)((int)*(short *)(unsigned)(ar4 + 0x30)); unsigned long t1_ = (unsigned long)(
                           (int)*(short *)(unsigned)(ar4 + 0x32)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c261058(*(undefined4 *)(unsigned)(ar4 + 0x18),*(undefined4 *)(unsigned)(ar4 + 0x1c),
                           *(undefined4 *)(unsigned)(ar4 + 0x20),ar4 + 0x28); });
      *(uint *)(unsigned)(ar4 + 0x10) = uVar1;
    }
    else {
      ar7_00 = ar4 + 0x28;
      ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
      ar6_00 = *(undefined4 *)(unsigned)(ar4 + 0x20);
      ar4_00 = *(undefined4 *)(unsigned)(ar4 + 0x18);
      ain0 = ar7_00;
      uVar1 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x24)); unsigned long t1_ = (unsigned long)(ar4 + 0x2c); unsigned long t2_ = (unsigned long)(
                           (int)*(short *)(unsigned)(ar4 + 0x30)); unsigned long t3_ = (unsigned long)((int)*(short *)(unsigned)(ar4 + 0x32)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); FUN_8c261170(ar4_00,ar5_00,ar6_00,ar7_00); });
      *(uint *)(unsigned)(ar4 + 0x10) = uVar1;
      if ((int)uVar1 < 0) {
        uVar1 = ~(~uVar1 + 1 & 1) + 1;
      }
      else {
        uVar1 = uVar1 & 1;
      }
      if (uVar1 == 1) {
        uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c264ffc(ar4_00,ar5_00,ar6_00,ar7_00); });
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26501c\n.set _FUN_8c26501c, _FUN_8c26501c_def\n");
