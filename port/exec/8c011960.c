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
undefined4 FUN_8c011960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c011960";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar5_00;
  int *ar4_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4 = 0;
  undefined8 in_dr12 = 0;
  undefined8 in_dr14 = 0;
  
  (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  (*(float *)(fr0_ - 0x20)) = (float)(in_dr4 >> 0x20);
  ar5_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar5_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if ((*(float *)(fr0_ - 0x20)) == 0.0) {
    ar5_00 = ar5_00 | 4;
  }
  else if (ABS((*(float *)(fr0_ - 0x20))) == INFINITY) {
    ar5_00 = ar5_00 | 2;
  }
  ain0 = (*(float *)(fr0_ - 0x20));
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -(*(float *)(fr0_ - 0x20));
  }
  uVar1 = 0x20;
  if (((((int)((uint)ain0 & 0x7f800000) >> 0x17) + -0x7f < 0x20) && ((ar5_00 & 4) == 0)) &&
     ((ain0 < 1.0 || (ain0 != 1.0)))) {
    ar4_00 = &(*(int *)(fr0_ - 0x24));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c011c5c(ar4_00,ar5_00,1,4); });
    if ((*(int *)(fr0_ - 0x24)) != 0) {
      if (((*(int *)(fr0_ - 0x24)) == 1) || ((*(int *)(fr0_ - 0x24)) == 2)) {
        ar4_00 = (int *)(unsigned)0xfffffffe;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c011d50(0xfffffffe,ar5_00,ar6_00,ar7_00); });
      }
      else if (((*(int *)(fr0_ - 0x24)) == 3) || ((*(int *)(fr0_ - 0x24)) == 4)) {
        ar4_00 = (int *)(unsigned)0xffffffff;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c011d50(0xffffffff,ar5_00,ar6_00,ar7_00); });
      }
      else if (((((*(int *)(fr0_ - 0x24)) != 5) && ((*(int *)(fr0_ - 0x24)) != 6)) && ((*(int *)(fr0_ - 0x24)) != 7)) && ((*(int *)(fr0_ - 0x24)) != 8)) {
        return (*(int *)(fr0_ - 0x24));
      }
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c010a90(ar4_00,ar5_00,ar6_00,ar7_00));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c011960\n.set _FUN_8c011960, _FUN_8c011960_def\n");
