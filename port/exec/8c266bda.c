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
int FUN_8c266bda_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266bda";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  int *unaff_r13 = 0;
  int ar5_01;
  undefined4 in_PR = 0;
  
  if (*unaff_r13 == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    ar6 = 0x200;
    *(undefined4 *)(unsigned)(*unaff_r13 + 0x158) = ar4;
    ar5_00 = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd420) = ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4,0,0x200,ar7));
    *(undefined4 *)(unsigned)(*unaff_r13 + 0x160) = 0;
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c265704(*unaff_r13 + 0x178,ar5_00,ar6,ar7));
  }
  if (ar5_01 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c266bd4),ar5_01,ar6,ar7); });
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c266bda\n.set _FUN_8c266bda, _FUN_8c266bda_def\n");
