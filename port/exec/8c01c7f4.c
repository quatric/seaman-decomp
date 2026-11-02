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
int FUN_8c01c7f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01c7f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c8c8(ar4,ar4 + 0xb,ar6,ar7));
  iVar1 = 0x2450;
  if (iVar2 == 1) {
    *(undefined4 *)(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    iVar2 = iVar1;
  }
  else if (iVar2 != 2) {
    *(undefined4 *)(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c7f4\n.set _FUN_8c01c7f4, _FUN_8c01c7f4_def\n");
