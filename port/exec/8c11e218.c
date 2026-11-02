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
undefined4 FUN_8c11e218_def(undefined4 ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e218";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14 = 0;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + unaff_r14) != 0x218df4f5) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + unaff_r14),0xb,vr6,vr7));
    return uVar1;
  }
  if (ar5 == (undefined2 *)(unsigned)0x0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14 + 0x48,0x13,ar6,ar7));
    return uVar2 & 0xff;
  }
  *ar5 = *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(0x22c + unaff_r14));
  return 0;
}

__asm__(".globl _FUN_8c11e218\n.set _FUN_8c11e218, _FUN_8c11e218_def\n");
