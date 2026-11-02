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
undefined4 FUN_8c0f4e34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4e34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x16); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x20) = *(undefined4 *)(unsigned)(ar5 + 0x14);
  *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar5 + 0x18);
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x30,ar5 + 0x1c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 0x2c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023e04(ar4 + 0x5c,ar5 + 0x38,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)(ar5 + 0x44);
  *(undefined4 *)(unsigned)(ar4 + 0x74) = *(undefined4 *)(unsigned)(ar5 + 0x48);
  return 0x74;
}

__asm__(".globl _FUN_8c0f4e34\n.set _FUN_8c0f4e34, _FUN_8c0f4e34_def\n");
