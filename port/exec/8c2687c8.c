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
undefined4 FUN_8c2687c8_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2687c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  
  if ((int)ar4 < 0x200000) {
    (vsp = ((unsigned long)(fr0_ - 20)), aica_ram_2686d4(ar4 & 0xfffffffc,((undefined4 *)(fr0_ - 0x10)),ar6,ar7));
    *(undefined1 *)(unsigned)((ar4 & 3) + (int)((undefined4 *)(fr0_ - 0x10))) = (undefined1)ar5;
    (vsp = ((unsigned long)(fr0_ - 20)), aica_ram_268788(ar4 & 0xfffffffc,((undefined4 *)(fr0_ - 0x10))[0],ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c2687c8\n.set _FUN_8c2687c8, _FUN_8c2687c8_def\n");
