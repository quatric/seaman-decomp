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
int FUN_8c2103c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2103c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * ain0 = (int *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *in_r2 = 0;
  undefined4 *puVar1;
  int *unaff_r14 = 0;
  
  puVar1 = (undefined4 *)(unsigned)(*in_r2 * 4 + *ain0);
  *unaff_r14 = (int)puVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207300(*puVar1,((undefined4 *)(unsigned)0x8c2757a8),(*(undefined4 *)(unsigned)(unsigned)0x8c2757a4) << 2,ar7));
  *(int *)(unsigned)*unaff_r14 = *(int *)(unsigned)*unaff_r14 + (*(undefined4 *)(unsigned)(unsigned)0x8c2757a4) * 4;
  return *unaff_r14 = 0;
}

__asm__(".globl _FUN_8c2103c4\n.set _FUN_8c2103c4, _FUN_8c2103c4_def\n");
