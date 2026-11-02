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
undefined4 * FUN_8c010080_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c010080";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  
  while( true ) {
    puVar1 = (undefined4 *)(unsigned)*(undefined4 *)(unsigned)0x8c2787a0;
    if (puVar1 == (undefined4 *)(unsigned)0x0) break;
    *(undefined4 *)(unsigned)0x8c2787a0 = *puVar1;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1[1])))(puVar1[2],0xffffffff,ar6,ar7));
  }
  return 0x8c2787a0;
}

__asm__(".globl _FUN_8c010080\n.set _FUN_8c010080, _FUN_8c010080_def\n");
