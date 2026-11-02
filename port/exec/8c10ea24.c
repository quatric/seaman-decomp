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
uint FUN_8c10ea24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ea24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  *(char *)(unsigned)(0x11d + ar4) = (char)ar5;
  if ((char)ar5 == '\0') {
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
    ar5_00 = 6;
    ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1];
  }
  else {
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
    ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1];
    ar5_00 = 5;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1113d0(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc)),ar5_00,ar6_00,0));
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c10ea24\n.set _FUN_8c10ea24, _FUN_8c10ea24_def\n");
