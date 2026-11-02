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
undefined4 FUN_8c11cd44_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cd44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80000000;
  iVar2 = ar5;
  if ((ar5 == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar5,ar5,ar6,ar7)), iVar1 != 0)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,iVar2,ar6,ar7));
    if (iVar2 == 0) {
      uVar3 = 0x12;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xb])))(ar4[4],ar4 + 2,uVar3,vr7));
      uVar3 = *ar4;
      *ar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xc])))(ar4[4],ar4 + 2,vr6,vr7));
    }
  }
  else {
    uVar3 = *(undefined4 *)(unsigned)(ar5 + 0x40);
    *(undefined4 *)(unsigned)(ar5 + 0x40) = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11cd44\n.set _FUN_8c11cd44, _FUN_8c11cd44_def\n");
