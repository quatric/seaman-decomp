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
int FUN_8c2664d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2664d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *in_r2 = 0;
  int unaff_r11 = 0;
  int unaff_r13 = 0;
  undefined1 *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  if (*in_r2 == 0) {
    unaff_r11 = 0xd000001;
  }
  else if (unaff_r13 == 0) {
    unaff_r11 = 0x7000103;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266214(unaff_r13,unaff_r14 + 0x14,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266288(unaff_r13,unaff_r14 + 0x18,ar6,ar7));
    *unaff_r14 = (char)unaff_r11;
    unaff_r14[1] = (char)unaff_r11;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266620(unaff_r13,unaff_r14 + 2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266368(unaff_r13,unaff_r14 + 3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2663d8(unaff_r13,unaff_r14 + 6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266448(unaff_r13,unaff_r14 + 8,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2662f8(unaff_r13,unaff_r14 + 4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2661a4(unaff_r13,unaff_r14 + 5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266134(unaff_r13,unaff_r14 + 0x10,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2665b0(unaff_r13,unaff_r14 + 0xc,ar6,ar7));
  }
  if (unaff_r11 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)(unsigned)0x8c2664c4),unaff_r11,ar6,ar7); });
  }
  return unaff_r11 = 0;
}

__asm__(".globl _FUN_8c2664d4\n.set _FUN_8c2664d4, _FUN_8c2664d4_def\n");
