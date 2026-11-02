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
undefined4 FUN_8c1fb048_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fb048";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  undefined4 extraout_r1 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0xac004000)))(0x200,0x2,ar6,ar7));
  *(undefined4 *)(unsigned)0x0 = in_r0;
  *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb3d4)) = (*(undefined4 *)(unsigned)(unsigned)0xff000028);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb0c8(ar4,ar5,extraout_r1,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c1fb048\n.set _FUN_8c1fb048, _FUN_8c1fb048_def\n");
