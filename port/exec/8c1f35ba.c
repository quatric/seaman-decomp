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
undefined4 FUN_8c1f35ba_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f35ba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int a4;
  
  if ((ar4 == (int *)(unsigned)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (*(int *)(unsigned)(*ar4 + 0x1c) == 0) {
      a4 = ar4[2] + ar4[5];
      iVar2 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 0xc) + 0x18))))(a4,ar5,ar6,ar7));
      if (iVar2 != 0) {
        ar4[0xf] = iVar2;
        *(undefined2 *)(unsigned)(ar4 + 0x14) = 3;
        *(undefined2 *)(unsigned)(ar4 + 0x12) = 2;
        *(unsigned *)(unsigned)(*ar4 + 0x1c) = ar4;
        (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar4 + 0xc) + 0x40))))(a4,ar5,ar6,ar7));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f2f98(ar4,ar5,ar6,ar7));
        return uVar1;
      }
    }
    uVar1 = 0xfffffff3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f35ba\n.set _FUN_8c1f35ba, _FUN_8c1f35ba_def\n");
