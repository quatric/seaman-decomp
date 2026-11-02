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
undefined4 FUN_8c260e9c_def(ushort *ar4,int ar5,ushort *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c260e9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  if (0x11 < ar5) {
    if (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & 0xff00 & 0xffff) != 0x8000) {
      return 0xfffffffe;
    }
    if (0xd < (int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & 0xff00)) {
      *ar6 = ar4[8] >> 8 | ar4[8] << 8 & (int)0xffffff00;
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c260e9c\n.set _FUN_8c260e9c, _FUN_8c260e9c_def\n");
