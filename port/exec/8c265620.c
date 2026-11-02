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
int FUN_8c265620_def(int ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c265620";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int ar5_00;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265a2c(ar4,(fr0_ + (int)0xffffffe0),ar6,ar7));
    if ((*(int *)(fr0_ - 0x20)) == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265f74(ar4,2,ar6,ar7));
      if (ar5_00 == 0) {
        ar7 = ((void *)0x8c26592c);
        *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 400) = ar4;
        *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x188) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x188) + 1;
        ar6 = *(undefined4 *)(unsigned)(ar4 + 0xc);
        ar5_00 = ({ unsigned long t0_ = (unsigned long)(ar4); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); aica_ram_266970(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,((void *)0x8c26592c)); });
      }
    }
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c2688a0(((void *)0x8c265620),ar5_00,ar6,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265620\n.set _FUN_8c265620, _FUN_8c265620_def\n");
