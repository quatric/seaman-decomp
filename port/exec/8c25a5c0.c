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
uint FUN_8c25a5c0_def(int ar4,uint ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c25a5c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((ar4 != 0) && (uVar1 = 0, ar5 != 0)) {
    do {
      if ((*(int *)(unsigned)(uVar1 * 0x44 + ar4) == ar6) && (*(int *)(unsigned)(uVar1 * 0x44 + ar4 + 4) == ar7)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < ar5);
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25a5c0\n.set _FUN_8c25a5c0, _FUN_8c25a5c0_def\n");
