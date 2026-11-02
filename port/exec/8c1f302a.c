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
undefined4 FUN_8c1f302a_def(int *ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f302a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((ar4 != (int *)(unsigned)0x0) && (((int *)(unsigned long)*(unsigned *)(unsigned)(*ar4 + 0x1c)) != ar4)) {
    ar4[1] = ar5;
    iVar1 = (int)0x7ff;
    ar4[2] = ar6;
    ar4[3] = ar7;
    ar4[4] = ar7 + iVar1 >> 0xb;
    ar4[5] = 0;
    ar4[6] = 0;
    ar4[7] = 0;
    ar4[8] = 0;
    ar4[0xf] = 0;
    ar4[0x11] = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x12) = 0;
    *(undefined2 *)(unsigned)((int)ar4 + 0x4a) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x13) = 1;
    *(undefined2 *)(unsigned)(ar4 + 0x14) = 0;
    *(undefined2 *)(unsigned)((int)ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f302a\n.set _FUN_8c1f302a, _FUN_8c1f302a_def\n");
