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
undefined4 FUN_8c26868c_def(uint ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26868c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  
  if ((int)ar4 < 0x200000) {
    (vsp = ((unsigned long)(fr0_ - 16)), aica_ram_2686d4(ar4 & 0xfffffffc,((undefined2 *)(fr0_ - 0xc)),ar6,ar7));
    *ar5 = *(undefined2 *)(unsigned)((int)((undefined2 *)(fr0_ - 0xc)) + (ar4 & 2));
  }
  return 0;
}

__asm__(".globl _FUN_8c26868c\n.set _FUN_8c26868c, _FUN_8c26868c_def\n");
