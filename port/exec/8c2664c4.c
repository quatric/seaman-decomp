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
int FUN_8c2664c4_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2664c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int ar5_00;
  
  ar5_00 = 0;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266214(ar4,ar5 + 0x14,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266288(ar4,ar5 + 0x18,ar6,ar7));
    *ar5 = 0;
    ar5[1] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266620(ar4,ar5 + 2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266368(ar4,ar5 + 3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2663d8(ar4,ar5 + 6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266448(ar4,ar5 + 8,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2662f8(ar4,ar5 + 4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2661a4(ar4,ar5 + 5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266134(ar4,ar5 + 0x10,ar6,ar7));
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2665b0(ar4,ar5 + 0xc,ar6,ar7));
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c2664c4),ar5_00,ar6,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2664c4\n.set _FUN_8c2664c4, _FUN_8c2664c4_def\n");
