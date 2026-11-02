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
uint FUN_8c01ab78_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01ab78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x80 && (ar4[uVar2 * 10 + 0x913] != 0xffffffff))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x80) {
    if ((int)*ar4 < 0) {
      *ar4 = uVar2;
    }
    else {
      uVar1 = *ar4;
      while (-1 < (int)ar4[uVar1 * 10 + 0x916]) {
        uVar1 = ar4[uVar1 * 10 + 0x916];
      }
      ar4[uVar1 * 10 + 0x916] = uVar2;
    }
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); strcpy(ar4 + uVar2 * 10 + 0x917,ar6,ar6,ar7); });
    ar4[uVar2 * 10 + 0x915] = ar5;
    ar4[uVar2 * 10 + 0x914] = 2;
    ar4[uVar2 * 10 + 0x916] = 0xffffffff;
    ar4[uVar2 * 10 + 0x913] = ar4[3];
    if ((int)ar4[3] < 0x10000) {
      ar4[3] = ar4[3] + 1;
    }
    else {
      ar4[3] = 10;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01ab78\n.set _FUN_8c01ab78, _FUN_8c01ab78_def\n");
