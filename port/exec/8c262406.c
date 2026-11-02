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
undefined4
s_E9040822_adxf_is_NULL_ADXF_S_262408_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E9040822_adxf_is_NULL_ADXF_S_262408";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  int ar6_00;
  undefined4 ar7_00;
  
  ar5_01 = (fr0_ + (int)0xfffffff4);
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar4_00 = 5;
  ar6_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c261a4c(5,0,ar4,0xffffffff));
  if (ar4 == 0) {
    ({ unsigned long t0_ = (unsigned long)("E9040822:\'adxf\' is NULL.(ADXF_Stop)\n"); unsigned long t1_ = (unsigned long)(
                 (*(undefined4 *)(fr0_ - 0xc))); *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 24)) - 8); FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00); });
    return 0xfffffffd;
  }
  if (*(char *)(unsigned)(ar4 + 1) != '\x01') {
    if (*(char *)(unsigned)(ar4 + 1) == '\x03') {
      *(undefined1 *)(unsigned)(ar4 + 1) = 1;
    }
    else {
      if (*(int *)(unsigned)(ar4 + 4) == 0) {
        ({ unsigned long t0_ = (unsigned long)("E9040823:\'adxf->stm\' is NULL.(ADXF_Stop)\n"); unsigned long t1_ = (unsigned long)(
                     (*(undefined4 *)(fr0_ - 0xc))); *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 24)) - 8); FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00); });
        return 0xffffffff;
      }
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263498(*(undefined4 *)(unsigned)(ar4 + 4),ar5_00,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263768(*(undefined4 *)(unsigned)(ar4 + 4),(fr0_ + (int)0xfffffff4),ar6_00,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x24) = (*(undefined4 *)(fr0_ - 0xc));
      ar4_01 = ar4;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c26211c(ar4,ar5_01,ar6_00,ar7_00); });
      *(undefined1 *)(unsigned)(ar4 + 1) = 1;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c260cc8(ar4_01,ar5_01,ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c261a4c(5,1,ar4,0xffffffff));
    }
  }
  return *(undefined4 *)(unsigned)(ar4 + 0x18);
}

__asm__(".globl _s_E9040822_adxf_is_NULL_ADXF_S_262408\n.set _s_E9040822_adxf_is_NULL_ADXF_S_262408, _s_E9040822_adxf_is_NULL_ADXF_S_262408_def\n");
