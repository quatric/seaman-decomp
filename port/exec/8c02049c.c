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
undefined4 FUN_8c02049c_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02049c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *ar5;
  if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0xe)) {
    piVar3 = ar5;
    if (*ar4 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262168(*ar4,ar5,ar6,ar7));
    }
    if (ar5[2] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar5[2],piVar3,ar6,ar7));
    }
  }
  *ar4 = 0;
  ar5[2] = 0;
  piVar3 = ar5 + 4;
  ({ unsigned long t0_ = (unsigned long)(ar5 + 0xc); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020600(ar4,*ar5,ar4 + 8,piVar3); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 9,ar5,piVar3));
  return uVar2;
}

__asm__(".globl _FUN_8c02049c\n.set _FUN_8c02049c, _FUN_8c02049c_def\n");
