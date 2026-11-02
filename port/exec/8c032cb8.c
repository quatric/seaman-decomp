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
undefined4 FUN_8c032cb8_def(undefined4 ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032cb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x34))));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x3c))));
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  (*(undefined4 *)(fr0_ - 0x10)) = 2;
  (*(float *)(fr0_ - 0x34)) = *ar5;
  (*(float *)(fr0_ - 0x30)) = ar5[1];
  (*(float *)(fr0_ - 0x2c)) = ar5[2];
  (*(float *)(fr0_ - 0x28)) = (*(float *)(fr0_ - 0x34)) + *ar6;
  (*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x30)) + ar6[1];
  (*(float *)(fr0_ - 0x20)) = (*(float *)(fr0_ - 0x2c)) + ar6[2];
  (*(undefined4 *)(fr0_ - 0x3c)) = ar7;
  (*(undefined4 *)(fr0_ - 0x38)) = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c234d68(((float * *)(fr0_ - 0x1c)),1,0,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c032cb8\n.set _FUN_8c032cb8, _FUN_8c032cb8_def\n");
