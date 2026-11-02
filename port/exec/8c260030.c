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
undefined4 FUN_8c260030_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c260030";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 8);
  ar7_00 = *(int *)(unsigned)(ar6 + 100) + *(int *)(unsigned)(ar6 + 0x70) * 2;
  ({ unsigned long t0_ = (unsigned long)(*(int *)(unsigned)(ar6 + 0x6c) * 2 + ar7_00); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c264fa4))))
            (uVar1,*(undefined4 *)(unsigned)(ar4 + 0x50),ar5 << 1,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264fc2(uVar1,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c260030\n.set _FUN_8c260030, _FUN_8c260030_def\n");
