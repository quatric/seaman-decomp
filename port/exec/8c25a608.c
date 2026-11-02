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
undefined4 FUN_8c25a608_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25a608";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *a4;
  uint a5;
  int a6;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  a5 = ar5;
  a6 = ar6;
  for (uVar1 = 0; uVar1 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c); uVar1 = uVar1 + 1) {
    a4 = (int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar2);
    if (*a4 == ar4) {
      a4[4] = a4[4] | ar5;
      a4[5] = ar6;
      if ((ar5 & 2) != 0) {
        *(short *)(unsigned)(a4 + 0x10) = (short)a4[0x10] + 1;
        ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571fe(a4,a5,a6,ar7));
      }
    }
    iVar2 = iVar2 + 0x44;
  }
  return ain0;
}

__asm__(".globl _FUN_8c25a608\n.set _FUN_8c25a608, _FUN_8c25a608_def\n");
