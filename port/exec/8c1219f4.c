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
undefined4 FUN_8c1219f4_def(int ar4,uint ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1219f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  float * ain0 = (float *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *ain0;
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c121710(ar4,ar5,ar6,ar7));
    if (*(char *)(unsigned)(ar4 + 0x4c) == '\0') {
      if (*(char *)(unsigned)(ar4 + 0x4d) == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 2;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120798(ar4,ar5,ar6,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 1;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1207c6(ar4,0,ar6,ar7));
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1207c6(ar4,0,ar6,ar7));
    }
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
  }
  else if (uVar1 == 2) {
    *(char *)(unsigned)(ar4 + 0x4c) = (char)*ar6;
    *(char *)(unsigned)(ar4 + 0x4d) = (char)ar6[1];
    *(uint *)(unsigned)(ar4 + 0x5c) = ar6[2];
    fVar2 = (float)(int)ar6[3];
    if ((int)ar6[3] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(unsigned)(ar4 + 0x60) = fVar2 * fVar3;
    *(uint *)(unsigned)(ar4 + 0x50) = ar6[4];
  }
  else if (uVar1 == 3) {
    *ar6 = (uint)*(byte *)(unsigned)(ar4 + 0x4c);
    ar6[1] = (uint)*(byte *)(unsigned)(ar4 + 0x4d);
    ar6[2] = *(uint *)(unsigned)(ar4 + 0x5c);
    fVar3 = *(float *)(unsigned)(ar4 + 0x60) / fVar3;
    if (2.1474836e+09 < fVar3) {
      fVar3 = fVar3 + -4.2949673e+09;
    }
    ar6[3] = (int)fVar3;
    ar6[4] = *(uint *)(unsigned)(ar4 + 0x50);
  }
  else if (uVar1 == 4) {
    *ar6 = ar4 + 0x3c;
  }
  else {
    if (uVar1 != 0xff) {
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c1219f4\n.set _FUN_8c1219f4, _FUN_8c1219f4_def\n");
