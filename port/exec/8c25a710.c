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
int FUN_8c25a710_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25a710";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c277cb0);
  if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277cb0) * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08)) != -1) {
    for (uVar1 = 0; (uVar1 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c) && (*(int *)(unsigned)(uVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08)) != -1));
        uVar1 = uVar1 + 1) {
    }
  }
  return uVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + 0x14;
}

__asm__(".globl _FUN_8c25a710\n.set _FUN_8c25a710, _FUN_8c25a710_def\n");
