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
undefined4 FUN_8c263e50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263e50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  *(short *)(unsigned)(ar5 * 2 + ar4 + 0x42) = (short)ar6;
  if (ar5 < *(char *)(unsigned)(ar4 + 3)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(&(*(undefined1 *)(unsigned)0x8c262a12))))(*(undefined4 *)(unsigned)(ar4 + 0xc),vr5,vr6,vr7));
    return uVar1;
  }
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c273038)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c25ece6(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c263e50\n.set _FUN_8c263e50, _FUN_8c263e50_def\n");
