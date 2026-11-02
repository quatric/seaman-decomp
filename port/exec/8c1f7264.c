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
undefined4 FUN_8c1f7264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f7264";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *ar5_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c47497c) == -1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c47497c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4749fc);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c474980) = (*(undefined4 *)(unsigned)(unsigned)0x8c4749fc);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7));
  ar5_00 = ((undefined1 *)(unsigned)0x8c474a00);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f826c(0x8c4749f2,((undefined1 *)(unsigned)0x8c474a00),ar6,ar7));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c474984) == -1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c474984) = 1;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f7158(((undefined1 *)(unsigned)0x8c474984),ar5_00,ar6,ar7); });
  }
  if (1 < (*(undefined4 *)(unsigned)(unsigned)0x8c4748c0)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6e5e(ar4 + 3,((undefined1 *)(unsigned)0x8c474978),ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7264\n.set _FUN_8c1f7264, _FUN_8c1f7264_def\n");
