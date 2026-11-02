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
undefined4
FUN_8c2027c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2027c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);
  uint s8 = *(uint *)(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar4 < 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c010794(8,s0,&s4,vr7));
    return uVar1;
  }
  (*(uint *)(fr0_ - 0x8)) = ar4 + s8;
  (*(int *)(fr0_ - 0xc)) = s4;
  if ((*(uint *)(fr0_ - 0x8)) < s8) {
    (*(int *)(fr0_ - 0xc)) = s4 + 1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c010794(8,s0,&(*(int *)(fr0_ - 0xc)),vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c2027c0\n.set _FUN_8c2027c0, _FUN_8c2027c0_def\n");
