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
undefined4 FUN_8c11cd4e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cd4e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r12 = 0;
  undefined4 uVar2;
  int unaff_r13 = 0;
  
  if ((unaff_r12 == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(unaff_r12,ar5,ar6,ar7)), iVar1 != 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      uVar2 = 0x12;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xb])))(ar4[4],ar4 + 2,ar6,ar7));
      uVar2 = *ar4;
      *ar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xc])))(ar4[4],ar4 + 2,ar6,ar7));
    }
  }
  else {
    uVar2 = *(undefined4 *)(unsigned)(unaff_r13 + 0x40);
    *(undefined4 *)(unsigned)(unaff_r13 + 0x40) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11cd4e\n.set _FUN_8c11cd4e, _FUN_8c11cd4e_def\n");
