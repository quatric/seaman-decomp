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
int FUN_8c266b76_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266b76";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *unaff_r14 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2687c8(*(undefined4 *)(unsigned)((int)0x1bc + *unaff_r14),ar5,ar6,ar7));
  for (iVar2 = 0; iVar1 = (int)0x15c, iVar2 < *(int *)(unsigned)(iVar1 + *unaff_r14); iVar2 = iVar2 + 1
      ) {
    *(undefined1 *)(unsigned)(iVar2 * 0x10 + *(int *)(unsigned)((int)0x158 + *unaff_r14)) = 0;
  }
  *(undefined4 *)(unsigned)(iVar1 + *unaff_r14) = 0;
  *(undefined4 *)(unsigned)(iVar1 + 4 + *unaff_r14) = 0;
  return iVar1 + 4;
}

__asm__(".globl _FUN_8c266b76\n.set _FUN_8c266b76, _FUN_8c266b76_def\n");
