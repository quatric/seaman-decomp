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
int FUN_8c265704_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c265704";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ain0;
  int *dst;
  int ar6_00;
  int ar5_00;
  
  ar5_00 = 0;
  ain0 = 0x17c;
  dst = ((int *)(unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x17c));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = 0;
    do {
      if (*dst != 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,dst,((undefined1 *)(unsigned)0x8c2784d0),vr7));
        ain0 = 0x184;
        *ar4 = dst;
        *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x184) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    ar5_00 = 0x7000101;
    *ar4 = 0;
    ain0 = 1;
  }
LAB_8c26574e:
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c265704),ar5_00,ar6_00,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265704\n.set _FUN_8c265704, _FUN_8c265704_def\n");
