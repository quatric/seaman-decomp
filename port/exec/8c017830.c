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
undefined4 * FUN_8c017830_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c017830";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410(ar4 + 4,ar5,ar6,ar7));
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  if (cVar1 == '\0') {
    ar4[0x15] = 0;
    ar4[0x16] = 0;
    ar4[0x17] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x15) = (ulonglong)extraout_fr1;
    *(ulonglong *)(unsigned)(ar4 + 0x16) = (ulonglong)extraout_fr1;
    *(ulonglong *)(unsigned)(ar4 + 0x17) = (ulonglong)extraout_fr1;
  }
  ar4[0x1b] = ar4[0x15];
  ar4[0x1c] = ar4[0x16];
  ar4[0x1d] = ar4[0x17];
  ar4[0x18] = ar4[0x15];
  ar4[0x19] = ar4[0x16];
  ar4[0x1a] = ar4[0x17];
  ar4[0x1e] = ar4[0x15];
  ar4[0x1f] = ar4[0x16];
  ar4[0x20] = ar4[0x17];
  return ar4;
}

__asm__(".globl _FUN_8c017830\n.set _FUN_8c017830, _FUN_8c017830_def\n");
