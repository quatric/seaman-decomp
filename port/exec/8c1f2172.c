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
undefined4 FUN_8c1f2172_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2172";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f2cce(ar4,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10),0,ar7));
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
  *ar5 = *piVar2 + 0x96;
  ar5[1] = piVar2[1];
  *(char *)(unsigned)(ar5 + 2) = (char)piVar2[2];
  return 0;
}

__asm__(".globl _FUN_8c1f2172\n.set _FUN_8c1f2172, _FUN_8c1f2172_def\n");
