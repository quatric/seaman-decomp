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
undefined4 *
FUN_8c23ba48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ba48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 * ain0 = (undefined4 *)(unsigned long)vin0;
  undefined4 * ain1 = (undefined4 *)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *in_r2 = 0;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  a5 = *ain0;
  a6 = *ain1;
  a7 = *in_r2;
  puVar2 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4ab284);
  puVar1 = ((undefined4 *)(unsigned)0x8c277b40);
  for (iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c1300); iVar3 != 0; iVar3 = iVar3 + -1) {
    ain0 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*puVar1)))(*puVar2,a5,a6,a7));
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c23ba48\n.set _FUN_8c23ba48, _FUN_8c23ba48_def\n");
