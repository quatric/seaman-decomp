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
uint FUN_8c23729c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23729c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * ain1 = (int *)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *in_r3 = 0;
  int unaff_r11 = 0;
  int unaff_r14 = 0;
  
  if (unaff_r11 == *ain1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),*in_r3,unaff_r11,ar7));
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277b14) != *(int *)(unsigned)(iVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + 4)) {
      unaff_r14 = 1;
    }
  }
  else {
    unaff_r14 = 1;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),*in_r3,unaff_r11,ar7));
  }
  if (unaff_r14 != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),unaff_r11,ar7));
    iVar1 = iVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b14) = *(int *)(unsigned)(iVar1 + 4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab240) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab240) & 0xffffffc0 | *(uint *)(unsigned)(iVar1 + 8) & 0x3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab244) = *(undefined4 *)(unsigned)(iVar1 + 0xc);
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b1c) = *(uint *)(unsigned)(iVar1 + 0x18) >> 0x10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = unaff_r11;
  }
  return (*(undefined4 *)(unsigned)(unsigned)0x8c277b1c);
}

__asm__(".globl _FUN_8c23729c\n.set _FUN_8c23729c, _FUN_8c23729c_def\n");
