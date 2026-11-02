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
int FUN_8c25ffba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25ffba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r14 = 0;
  
  iVar1 = *(int *)(unsigned)(unaff_r14 + 4);
  if (iVar1 == 3) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264fea(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7));
    iVar1 = (int)0x9c;
    *(undefined4 *)(unsigned)(iVar1 + unaff_r14) = 0;
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25ffba\n.set _FUN_8c25ffba, _FUN_8c25ffba_def\n");
