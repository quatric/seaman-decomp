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
undefined4 * FUN_8c0f78d8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f78d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0db304(ar4 + 2,ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (ar4 + 0x13,((void *)(unsigned)0x8c0f78b0),((void *)(unsigned)0x8c0f3ffc),8); });
  ar7_00 = 8;
  ar5_00 = ((void *)(unsigned)0x8c0f78b0);
  ar6_00 = ((void *)(unsigned)0x8c0f3ffc);
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (ar4 + 0x1b,((void *)(unsigned)0x8c0f78b0),((void *)(unsigned)0x8c0f3ffc),8); });
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
  ar4[1] = 0;
  *ar4 = 0;
  ar4[0x19] = 0;
  ar4[0x1a] = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(0x9c + (int)ar4) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x88 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f78d8\n.set _FUN_8c0f78d8, _FUN_8c0f78d8_def\n");
