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
undefined4 FUN_8c0afb1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0afb1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x314) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x328) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x220) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x334) = (ulonglong)extraout_fr1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0x338,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c286dec) = 0;
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13ba24);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 9;
  return 0x1cc;
}

__asm__(".globl _FUN_8c0afb1c\n.set _FUN_8c0afb1c, _FUN_8c0afb1c_def\n");
