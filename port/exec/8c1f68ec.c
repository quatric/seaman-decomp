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
undefined4 FUN_8c1f68ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f68ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  
  ar5_00 = 0x210 + ar4;
  for (iVar2 = 0; iVar2 < *(int *)(unsigned)(0x208 + ar4); iVar2 = iVar2 + 1) {
    if (*(int *)(unsigned)(ar5_00 + 0xc) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f689e(ar4,ar5_00,ar6,ar7));
    }
    ar5_00 = ar5_00 + 0x124;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4,0,(int)0xd7c,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c1f68ec\n.set _FUN_8c1f68ec, _FUN_8c1f68ec_def\n");
