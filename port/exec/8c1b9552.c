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
undefined4 FUN_8c1b9552_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9552";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 in_r0 = (undefined2)(unsigned long)vin0;
  undefined4 in_r2 = 0;
  int in_GBR = (void *)0x8cf80000;
  
  *(undefined4 *)(unsigned)(ar7 + 0x14) = in_r2;
  *(undefined2 *)(unsigned)(in_GBR + 0x1a8) = in_r0;
                    
  halt_unimplemented();
}

__asm__(".globl _FUN_8c1b9552\n.set _FUN_8c1b9552, _FUN_8c1b9552_def\n");
