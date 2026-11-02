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
int FUN_8c124b0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c124b0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  float extraout_fr0 = 0;
  
  (*(undefined4 *)(fr0_ - 0x10)) = ar4;
  (*(char *)(fr0_ - 0xc)) = (char)ar5;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c120550(&(*(undefined4 *)(fr0_ - 0x10)),0x25,ar6,ar7));
  if (((int)extraout_fr0 & 0xffU) == 0) {
    ar7_00 = 1;
  }
  else {
    ar7_00 = 2;
  }
  iVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)0x8c1244f8)); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c1247cc)); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c124620)); unsigned long t3_ = (unsigned long)(0x4e0); *(unsigned *)((((unsigned long)(fr0_ - 16)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 16)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 16)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 16)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 16)) - 16); FUN_8c120580(ar4,(int)(char)ar5,1,ar7_00); });
  *(char *)(unsigned)(iVar1 + 0x48c) = (char)(int)extraout_fr0;
  return iVar1;
}

__asm__(".globl _FUN_8c124b0c\n.set _FUN_8c124b0c, _FUN_8c124b0c_def\n");
