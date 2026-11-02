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
undefined4 FUN_8c1f2356_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2356";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int *ar4_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  
  a7 = 0;
  uVar2 = 0;
  ar4_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f302a(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x14),0,0,0));
  if (ar4_00 != (int *)(unsigned)0x0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x38))))(ar4,ar5,uVar2,a7));
    if (iVar1 == 0) {
      uVar2 = 0xfffffff3;
    }
    else {
      ar4_00[0xf] = iVar1;
      *(undefined2 *)(unsigned)(ar4_00 + 0x14) = 4;
      *(unsigned *)(unsigned)(*ar4_00 + 0x1c) = ar4_00;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f2f98(ar4_00,ar5,uVar2,a7));
    }
    return uVar2;
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2356\n.set _FUN_8c1f2356, _FUN_8c1f2356_def\n");
