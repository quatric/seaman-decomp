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
FUN_8c20280c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20280c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);
  int s8 = *(int *)(vsp + 8);
  int s12 = *(int *)(vsp + 12);
  uint s16 = *(uint *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = s16 <= 0xffffffffU - s8;
  if (bVar2) {
    (*(int *)(fr0_ - 0x8)) = s8 + s16;
  }
  else {
    (*(int *)(fr0_ - 0x8)) = s16 + s8 + 1;
  }
  (*(int *)(fr0_ - 0xc)) = s4 + s12 + (uint)!bVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c010794(8,s0,&(*(int *)(fr0_ - 0xc)),vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c20280c\n.set _FUN_8c20280c, _FUN_8c20280c_def\n");
