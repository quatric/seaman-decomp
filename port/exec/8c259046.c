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
undefined4 FUN_8c259046_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c259046";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(unsigned *)(fr0_ - 0x74) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x68))));
  (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x48))));
  (*(undefined4 *)(fr0_ - 0x68)) = 0xe0000000;
  (*(undefined4 *)(fr0_ - 0x64)) = 0;
  (*(undefined4 *)(fr0_ - 0x60)) = 0;
  (*(undefined4 *)(fr0_ - 0x5c)) = 0x3727c5ac;
  (*(undefined4 *)(fr0_ - 0x48)) = 0xe0000000;
  (*(unsigned *)(fr0_ - 0x6c) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x28))));
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac);
  (*(undefined4 *)(fr0_ - 0x40)) = 0;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0x3727c5ac;
  (*(undefined4 *)(fr0_ - 0x28)) = 0xf0000000;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0);
  (*(undefined4 *)(fr0_ - 0x1c)) = 0x3727c5ac;
  (*(undefined4 *)(fr0_ - 0x50)) = ar4;
  (*(undefined4 *)(fr0_ - 0x30)) = ar5;
  (*(undefined4 *)(fr0_ - 0x10)) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c20a420(((undefined4 * *)(fr0_ - 0x74)),0,0x20,((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x74))));
  return uVar1;
}

__asm__(".globl _FUN_8c259046\n.set _FUN_8c259046, _FUN_8c259046_def\n");
