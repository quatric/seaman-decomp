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
undefined4 FUN_8c0d5e2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d5e2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(undefined4 *)(unsigned)0x8c43783c == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c257120))))
              ((uint)((undefined1 *)(unsigned)2)[0x8c437840] << 0x10 | 0xff000000 | (uint)((undefined1 *)(unsigned)1)[0x8c437840] << 8 |
               (uint)*(undefined4 *)(unsigned)0x8c437840,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)0x8c43783c = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f84(0x8c43786c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d5e2c\n.set _FUN_8c0d5e2c, _FUN_8c0d5e2c_def\n");
