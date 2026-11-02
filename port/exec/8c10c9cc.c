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
int FUN_8c10c9cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c9cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint in_r3 = 0;
  uint uVar2;
  
  uVar2 = *(uint *)(unsigned)(in_r0 + *ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c99c(ar4,*ar4,ar6,ar7));
  return iVar1 + (uVar2 + (in_r3 & uVar2)) * 2;
}

__asm__(".globl _FUN_8c10c9cc\n.set _FUN_8c10c9cc, _FUN_8c10c9cc_def\n");
