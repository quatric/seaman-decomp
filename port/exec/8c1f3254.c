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
undefined4 FUN_8c1f3254_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f3254";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 a7;
  int a4;
  
  if ((ar4 == (int *)(unsigned)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(unsigned)(*ar4 + 0x1c) == 0) {
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 != 0) {
        a7 = 0;
        iVar2 = ar5;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 0xc) + 4))))(a4,ar5,ar6,0));
        if (iVar1 == 0) {
          *(undefined2 *)(unsigned)(ar4 + 0x14) = 1;
          return 0;
        }
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(unsigned)(ar4 + 0x14) = 2;
        *(undefined2 *)(unsigned)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(unsigned)(ar4 + 0x12) = 1;
        ar4[6] = 0;
        *(unsigned *)(unsigned)(*ar4 + 0x1c) = ar4;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 0xc) + 0x40))))(a4,iVar2,ar6,a7));
        return ar5;
      }
    }
    ar4[6] = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x14) = 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3254\n.set _FUN_8c1f3254, _FUN_8c1f3254_def\n");
