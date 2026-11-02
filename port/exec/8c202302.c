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
uint FUN_8c202302_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c202302";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x28) == 1) {
    uVar1 = (uint)0x80;
  }
  if (*(int *)(unsigned)(ar4 + 4) == 1) {
    uVar1 = uVar1 | 4;
  }
  if (*(int *)(unsigned)(ar4 + 8) == 1) {
    uVar1 = uVar1 | 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c202302\n.set _FUN_8c202302, _FUN_8c202302_def\n");
