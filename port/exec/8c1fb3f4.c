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
undefined4 FUN_8c1fb3f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fb3f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  uint *in_r1 = (uint *)(unsigned long)vin1;
  undefined4 *in_r2 = 0;
  undefined4 *in_r3 = 0;
  int iVar3;
  uint unaff_r14 = 0;
  
  *in_r3 = ar4;
  *in_r2 = ar4;
  piVar1 = 0x8c475f04;
  iVar3 = 0x8c475ee4;
  *in_r1 = unaff_r14;
  *piVar1 = iVar3;
  *(int *)(unsigned)iVar3 = iVar3;
  *(undefined4 *)(unsigned)(iVar3 + 4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb426(0,ar5,ar6,ar7));
  iVar3 = *(undefined4 *)(unsigned)0x8c475f08;
  *(uint *)(unsigned)(iVar3 + 4) = unaff_r14 >> 5;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb586(iVar3 + 0x20,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c1fb3f4\n.set _FUN_8c1fb3f4, _FUN_8c1fb3f4_def\n");
