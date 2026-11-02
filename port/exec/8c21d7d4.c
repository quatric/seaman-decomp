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
undefined4 FUN_8c21d7d4_def(uint ar4,uint *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c21d7d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  float * s0 = (float *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  
  uVar4 = (ar4 & 0xff) - 0x10;
  if ((uVar4 & 1) != 0) {
    uVar2 = *ar5;
    ar5 = ar5 + 1;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10) == 0) {
      if (ar6 != (float *)(unsigned)0x0) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20) == 0) {
          pfVar3 = ar6 + 2;
          *ar6 = (float)(uVar2 >> 0x18) * 0.00392157;
          ar6[1] = (float)(uVar2 >> 0x10 & 0xff) * 0.00392157;
          ar6 = ar6 + 3;
          *pfVar3 = (float)(uVar2 >> 8 & 0xff) * 0.00392157;
          *ar6 = (float)(uVar2 & 0xff) * 0.00392157;
        }
        else {
          pfVar3 = ar6 + 2;
          *ar6 = (float)(uVar2 >> 0x18) * 0.00392157 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa52c);
          ar6[1] = (float)(uVar2 >> 0x10 & 0xff) * 0.00392157 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa530);
          ar6 = ar6 + 3;
          *pfVar3 = (float)(uVar2 >> 8 & 0xff) * 0.00392157 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa534);
          *ar6 = (float)(uVar2 & 0xff) * 0.00392157 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa538);
        }
      }
    }
    else {
      *ar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa52c);
      ar6[1] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa530);
      ar6[2] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa534);
      ar6 = ar6 + 3;
      *ar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa538);
    }
  }
  if ((uVar4 & 2) != 0) {
    ar6 = (float *)(unsigned)*ar5;
    ar5 = ar5 + 1;
    if (ar7 != (float *)(unsigned)0x0) {
      pfVar3 = ar7 + 2;
      *ar7 = (float)((uint)ar6 >> 0x18) * 0.00392157;
      uVar2 = (uint)ar6 >> 8;
      ar7[1] = (float)((uint)ar6 >> 0x10 & 0xff) * 0.00392157;
      ar7 = ar7 + 3;
      ar6 = (float *)(unsigned)((uint)ar6 & 0xff);
      *pfVar3 = (float)(uVar2 & 0xff) * 0.00392157;
      *ar7 = (float)(int)ar6 * 0.00392157;
    }
  }
  if (((uVar4 & 4) != 0) && (ar5 = (uint *)(unsigned)*ar5, s0 != (float *)(unsigned)0x0)) {
    *s0 = (float)((uint)ar5 >> 0x18) * 0.00392157;
    uVar4 = (uint)ar5 >> 8;
    s0[1] = (float)((uint)ar5 >> 0x10 & 0xff) * 0.00392157;
    ar5 = (uint *)(unsigned)((uint)ar5 & 0xff);
    s0[2] = (float)(uVar4 & 0xff) * 0.00392157;
    s0[3] = (float)(int)ar5 * 0.00392157;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2375ae(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c21d7d4\n.set _FUN_8c21d7d4, _FUN_8c21d7d4_def\n");
