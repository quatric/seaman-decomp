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
int FUN_8c265374_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c265374";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined1 *ar6_00;
  int *ar7_00;
  
  ar6_00 = (fr0_ + (int)0xffffffe4);
  ar7_00 = &(*(int *)(fr0_ - 0x18));
  (*(undefined4 *)(fr0_ - 0x14)) = ar4;
  (*(undefined4 *)(fr0_ - 0x10)) = ar5;
  (*(char *)(fr0_ - 0xc)) = (char)ar6;
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c2684f0(ar5,(int)(char)ar6,(fr0_ + (int)0xffffffe4),ar7_00));
  if (ar5_00 == 0) {
    if (((*(int *)(fr0_ - 0x1c)) == 0) || ((*(int *)(fr0_ - 0x18)) < 1)) {
      ar5_00 = 0x7fffffff;
    }
    else {
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c265ff4((*(undefined4 *)(fr0_ - 0x14)),(*(int *)(fr0_ - 0x1c)),ar6_00,ar7_00));
    }
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c2688a0(((void *)0x8c265374),ar5_00,ar6_00,ar7_00); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265374\n.set _FUN_8c265374, _FUN_8c265374_def\n");
