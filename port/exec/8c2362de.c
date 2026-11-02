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
undefined4 FUN_8c2362de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2362de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  short *psVar1;
  
  psVar1 = (short *)(unsigned)(ar4 + -0x20);
  if (*psVar1 == 0xa5) {
    if (*(short *)(unsigned)(*(int *)(unsigned)(ar4 + -0x14) + 2) == 0) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + -0x18) + 0xc) = *(undefined4 *)(unsigned)(ar4 + -0x14);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + -0x14) + 8) = *(undefined4 *)(unsigned)(ar4 + -0x18);
      *(int *)(unsigned)(*(int *)(unsigned)(ar4 + -0x14) + 4) =
           *(int *)(unsigned)(*(int *)(unsigned)(ar4 + -0x14) + 4) + *(int *)(unsigned)(ar4 + -0x1c);
      psVar1 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + -0x14));
    }
    if (*(short *)(unsigned)(*(int *)(unsigned)(psVar1 + 4) + 2) == 0) {
      *(unsigned *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(psVar1 + 4) + 8) + 0xc) = psVar1;
      *(int *)(unsigned)(psVar1 + 2) = *(int *)(unsigned)(psVar1 + 2) + *(int *)(unsigned)(*(int *)(unsigned)(psVar1 + 4) + 4);
      *(undefined4 *)(unsigned)(psVar1 + 4) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(psVar1 + 4) + 8);
    }
    in_r0 = 0;
    psVar1[1] = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c2362de\n.set _FUN_8c2362de, _FUN_8c2362de_def\n");
