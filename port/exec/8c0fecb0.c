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
undefined4 FUN_8c0fecb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fecb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x18 < iVar1) {
      return 0;
    }
    if (*(int *)(unsigned)(iVar1 * 0x18 + ar4 + 0x14) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(unsigned)(iVar1 * 0x18 + ar4 + 0x14) = 1;
  return iVar1 * 0x18 + ar4;
}

__asm__(".globl _FUN_8c0fecb0\n.set _FUN_8c0fecb0, _FUN_8c0fecb0_def\n");
