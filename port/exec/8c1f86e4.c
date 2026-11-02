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
uint FUN_8c1f86e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f86e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  
  piVar1 = 0x8c474a20;
  uVar2 = *(undefined4 *)(unsigned)0x8c474a14;
  if ((uVar2 & 8) != 0) {
    if ((undefined4 *)(unsigned)*(undefined4 *)(unsigned)0x8c474a20 < (undefined4 *)(unsigned)*(undefined4 *)(unsigned)0x8c474a24) {
      *(undefined4 *)(unsigned)*(undefined4 *)(unsigned)0x8c474a20 = ar4;
      *piVar1 = *piVar1 + 4;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f86e4\n.set _FUN_8c1f86e4, _FUN_8c1f86e4_def\n");
