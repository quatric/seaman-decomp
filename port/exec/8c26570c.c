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
int FUN_8c26570c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26570c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain1 = (int)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *in_r3 = 0;
  int *dst;
  int ar6_00;
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  dst = ((int *)(unsigned long)*(unsigned *)(unsigned)(*in_r3 + 0x17c));
  if (*in_r3 == 0) {
    unaff_r14 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = ain1;
    do {
      if (*dst != 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,dst,((undefined1 *)(unsigned)0x8c2784d0),vr7));
        *ar4 = (int)dst;
        *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x184) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    unaff_r14 = 0x7000101;
    *ar4 = ain1;
  }
LAB_8c26574e:
  if (unaff_r14 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c265704),unaff_r14,ar6_00,ar7); });
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c26570c\n.set _FUN_8c26570c, _FUN_8c26570c_def\n");
