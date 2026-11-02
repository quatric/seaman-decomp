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
undefined4 FUN_8c1f103e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f103e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * ain1 = (int *)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*ain1 == 0) {
    return 0xfffffff5;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), syscall_1f98ec(*(undefined4 *)(unsigned)(*ain1 + 4),ar5,ar6,ar7));
  if (iVar1 == -1) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f0b58((*(undefined4 *)(unsigned)(unsigned)0x8c2739d8),ar5,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f103e\n.set _FUN_8c1f103e, _FUN_8c1f103e_def\n");
