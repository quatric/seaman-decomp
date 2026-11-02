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
undefined4 FUN_8c016ecc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c016ecc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0xc + ar5) = *(undefined4 *)(unsigned)(iVar1 * 0xc + ar4 + 0x30);
    *(undefined4 *)(unsigned)(iVar1 * 0xc + ar5 + 4) = *(undefined4 *)(unsigned)(iVar1 * 0xc + ar4 + 0x34);
    *(undefined4 *)(unsigned)(iVar1 * 0xc + ar5 + 8) = *(undefined4 *)(unsigned)(iVar1 * 0xc + ar4 + 0x38);
  }
  return 8;
}

__asm__(".globl _FUN_8c016ecc\n.set _FUN_8c016ecc, _FUN_8c016ecc_def\n");
